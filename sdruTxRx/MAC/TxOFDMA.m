classdef TxOFDMA < matlab.System
    
    % TxOFDMA   OFDMA tramsnsmitter class for bit conversion, error
    % checking and user multiplexing for 2 users.
    
    %% Define nontunable properties
    properties(Nontunable)
              
        numCarriers = 48;
        symbolsPerFrame = 10;
        Encode = true; % Used encoders
        
        HeaderSize = 4; % #padbits,originNode,ReceiverNode, FrameID
        
    end
    
    properties
        carriersPerUser = 24; % numCarrier/numUsers, remember to change if they change
        numUsers = 2;
    end
    
    %% Define protected properties
    properties 
        
        lastMessageUE1;
        lastMessageUE2;
        messageSent;
        lastFrame; % Last transmitted frame
        lastFrameID
        
        Deliminator = 'EOF';
        
        CRCLength = 3;
        
        padBits;   % Number of pad bits on last frame
        dataType = 'c';
        
        debugFlag = 0;
        desiredUser = 1;
        
        DestNodes;
        OriginNodes;
        
        hGen;   % Object handle
        Encoder;
        CodeRate;
        Scram;
        
    end
    
    
    %% Methods
    methods(Access = protected)
        %% Setup
        function setupImpl(obj,~,~,~,~)
            
            % Tunable
            obj.DestNodes = [0 0];
            obj.OriginNodes = [0 0];
            
            % Generate CRC object handle
            obj.hGen = comm.CRCGenerator([1 0 0 1], 'ChecksumsPerFrame',1);
            
            obj.lastFrameID = 0;
            
            % BCH Encoder
            obj.Encoder = comm.BCHEncoder('CodewordLength',15, ...
                                          'MessageLength',5);
            obj.CodeRate = obj.Encoder.CodewordLength/...
                           obj.Encoder.MessageLength;
            obj.Scram = comm.Scrambler(2, [1 0 1 1 0 1],...
                               'InitialConditions',[0 0 1 1 0 ]); 
            
        end
        
        %% Accept more than one step input
        function N = getNumInputsImpl(~)
            N = 4;
        end
        
        %% Step function
        function bitsToTx = stepImpl(obj,messages,subcarriersForEachUser,varargin)
            
            if nargin == 1
                error('Error, no messages passed to function\n');
            else
                % Update number of users
                obj.numUsers = messages;%nargin - 1;
            end
            
            
            %% Padding for OFDM Frame
            % Since all messages will be in the same matrix, one of them needs to be
            % padded, to be the same size as the other
            
            % Resource Allocation
            %subcarriersForEachUser = [24, 24];
            
            %% Determine indexes in OFDMA Frame for data
            edge = 0;
            userIndexes = zeros(messages,2);
            for user = 1:messages
                userIndexes(user,1) = edge;
                userIndexes(user,2) = edge + subcarriersForEachUser(user) - 1;
                edge = subcarriersForEachUser(user);
            end
            indexEdge = 1;
            
            %% Concatenate text messages and add extra text
            %userData = zeros(obj.carriersPerUser,obj.symbolsPerFrame); %#ok<PREALL>
            bitsToTx = -1*ones(obj.numCarriers,obj.symbolsPerFrame);
            
            for user = 1:messages%obj.numUsers
                
                
                % Determine number of pad bits for user
                msgSize = length(varargin{user});
                availableResources = subcarriersForEachUser(user)*obj.symbolsPerFrame;
                obj.padBits = availableResources - (8*(msgSize+obj.HeaderSize+length(obj.Deliminator)) + obj.CRCLength);
                if obj.padBits < 0
                    fprintf('MAC| ERROR: Not enough symbols!\n\n');
                end
                
                
                % Expand message if necessary and add deliminator so
                % receiver will know where message ends Header information
                % is also added, including number of padded bits to header
                % so receiver will know
                extendedMessage = obj.additionalText(varargin{user},obj.OriginNodes(1),obj.DestNodes(1),obj.padBits);
                
                % Convert message to bits
                fprintf('User %d Message: %s\n',int16(user),extendedMessage);
                userBits = obj.OFDMdecimal2bits(extendedMessage);
                
                % Reshape into row vector
                messageBits = reshape(userBits',1,size(userBits,1)*size(userBits,2)).';
                
                % Add CRC
                dataWithCRC = step(obj.hGen, messageBits);
                
                % Pad and add number of pad bits to header
                paddedBits = [dataWithCRC.' randi([0 1],1,obj.padBits)];
                
                % Add to full OFDMA Frame
                % Reshape one user's data
                userData = reshape(paddedBits',subcarriersForEachUser(user),obj.symbolsPerFrame);
                
                % Define transmitted bits
                bitsToTx(indexEdge:indexEdge+subcarriersForEachUser(user) - 1, :) = userData>0;
                indexEdge = indexEdge + subcarriersForEachUser(user) ;
            end
            
            % Increase frame number (This is added to the header in the
            % previous function call additionalText)
            obj.lastFrameID = mod(obj.lastFrameID + 1,10);
            
            %% Print message
%             if obj.debugFlag
%                 fprintf('\nMAC| Transmitted message with additional text: \n');
%                 switch obj.dataType
%                     case 'c'
%                         fprintf('%s \n', char(obj.messageSent(obj.desiredUser,:)));
%                     case 'u'
%                         for k = 1:length(obj.messageSent(obj.desiredUser,:))
%                             % Codegen does not accept uint8s on
%                             % fprint, so they need to be casted to
%                             % int16
%                             fprintf('%d \n', int16(obj.messageSent(obj.desiredUser,k)));
%                         end
%                     otherwise
%                         fprintf('MAC| Undefined data type');
%                 end
%             end
            
            %% Define last frame and sent messages
            obj.lastFrame = bitsToTx;
            
        end
        
        %% Additional text
        function FullMessage = additionalText(obj,message,originNode,destNode,padBits)
            % Function to add EOF, unique ID, origin node number and destination node
            % number to a message
            
            % Message to transmit
            % message is 80 characters max, so extra 3 for EOF, 1 for uniqueID, 1
            % for the node number of recipient, 1 for origin node
            if length(message) < 23
                
                % Add additional character to differentiate messages, number of
                % origin node and destination node
                uniqueID = uint8(48 + obj.lastFrameID);
                originNodeChar = uint8(48 + originNode);
                destNodeChar = uint8(48 + destNode);
                padBitsUint8 = uint8(padBits);
                
                % Build message
                FullMessage = [padBitsUint8,uniqueID,destNodeChar,originNodeChar,...
                    message,uint8(obj.Deliminator)];
                
            else
                fprintf('MAC| ERROR: Message incorrect format\n');
            end
            
        end
        
        %% Conversion to bits
        function f = OFDMdecimal2bits(obj,str)
            % Encode a string of ASCII text into bits(1,0)
            DLL = ~strcmp(coder.target,'');
            N=length(str);
            f=zeros(N,8);
            
            bits = dec2bin(str,8);
            for k=1:N
                letter = bits(k,:);
                for i = 1:8
                    if DLL
                        f(k,i)=coder.ceval('atoi',c_string(obj,letter(i)));
                    else
                        f(k,i)=str2double(letter(i));
                    end
                end
            end
            
        end
        % Create a NUL terminated C string given a MATLAB string
        function y = c_string(~,s)
            y = [s 0];
        end
        
    end
    
end