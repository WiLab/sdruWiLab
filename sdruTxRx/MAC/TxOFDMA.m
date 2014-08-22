classdef TxOFDMA < matlab.System
    
    % TxOFDMA   OFDMA tramsnsmitter class for bit conversion, error
    % checking and user multiplexing for 2 users.
    
    %% Define nontunable properties
    properties(Nontunable)
        
        numUsers = 2;
        numCarriers = 48;
        carriersPerUser = 24; % numCarrier/numUsers, remember to change if they change
        symbolsPerFrame = 10;
        
    end
    
    %% Define protected properties
    properties
        
        lastMessageUE1;
        lastMessageUE2;
        messageSent;
        lastFrame; % Last transmitted frame
        lastFrameID
        
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
        function setupImpl(obj,~,~)
            
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
            N = 2;
        end
        
        %% Step function
        function bitsToTx = stepImpl(obj,messageUE1,messageUE2)
            %% Concatenate text messages and add extra text
            
            % Since both messages will be in the same matrix, one of them needs to be
            % padded, to be the same size as the other
            
            % Calculate size of biggest message, so that one can be padded
            maxMsgSize = max([length(messageUE1) length(messageUE2)]);
            
            % Matrix containing messages (make all messages same size)
            messageUEs = [obj.additionalText(messageUE1,obj.OriginNodes(1),obj.DestNodes(1)) repmat(uint8('-'),1,maxMsgSize - length(messageUE1));...
                obj.additionalText(messageUE2,obj.OriginNodes(2),obj.DestNodes(2)) repmat(uint8('-'),1,maxMsgSize - length(messageUE2))];
            
            % Increase frame number
            obj.lastFrameID = mod(obj.lastFrameID + 1,10);
            
            
            %% Calculate and add number of pad bits to header
            
            % The number of pad bits per user is the total number of bits per user
            % (numCarriers*nsymbolsPerFrame/2) minus the bits per message
            % (7*(size(messageUEs,2)+7)) minus the CRC bits (3)
            
            obj.padBits = obj.numCarriers*obj.symbolsPerFrame/obj.numUsers - (8*(size(messageUEs,2)+1) + 3)*obj.CodeRate;
            if obj.padBits < 0
                fprintf('MAC| ERROR: Not enough symbols!\n\n');
            end
            
            % Add number of pad bits to header
            obj.messageSent = [repmat(uint8(obj.padBits),obj.numUsers,1) messageUEs];
            
            %% Convert to bits
            
            % Initialize matrix
            messageBits = zeros(obj.numUsers,size(obj.messageSent,2)*8);
            userBits = zeros(size(obj.messageSent,2),7);
            
            % Convert to bits
            for user = 1:obj.numUsers
                
                % Convert to bits
                userBits = obj.OFDMdecimal2bits(obj.messageSent(user,:));
                
                % Reshape into row vector
                messageBits(user,:) = reshape(userBits',1,size(userBits,1)*size(userBits,2));
                
            end
            
            %% Add CRC
            
            % Initialize matrix. Remember to change added number if CRC length changes!
            dataWithCRC = zeros(obj.numUsers,length(messageBits) + 3);
            
            for user = 1:obj.numUsers
                dataWithCRC(user,:) = step(obj.hGen, messageBits(user,:)').';% Add CRC
            end
            
            %% Encode Data
            
            % Initialize matrix. Remember to change added number if CRC length changes!
            encodedData = zeros(obj.numUsers,length(dataWithCRC)*obj.CodeRate);
            
            for user = 1:obj.numUsers
                encodedData(user,:) = step(obj.Encoder, dataWithCRC(user,:).').';% Add CRC
            end
            
            %% Scramble
            scrambledData = zeros(obj.numUsers,length(dataWithCRC)*obj.CodeRate);
            %for user = 1:obj.numUsers
            %    scrambledData(user,:) = step(obj.Scram, encodedData(user,:).').';% Add CRC
            %end
            scrambledData(1,:) = step(obj.Scram, encodedData(1,1:345).').';% Add CRC
            scrambledData(2,:) = step(obj.Scram, encodedData(2,1:345).').';% Add CRC
            
            %% Pad bits
            
            % Pad and add number of pad bits to header
            paddedBits = [scrambledData randi([0 1],obj.numUsers,obj.padBits)];
            
            %% User multiplex
            
            % Itintialize matrix
            userData = zeros(obj.carriersPerUser,obj.symbolsPerFrame);
            bitsToTx = zeros(obj.numCarriers,obj.symbolsPerFrame);
            
            for user = 1:obj.numUsers
                
                % Reshape one user's data
                userData = reshape(paddedBits(user,:)',obj.carriersPerUser,obj.symbolsPerFrame);
                
                % Define transmitted bits
                bitsToTx((user-1)*obj.carriersPerUser + 1 : user*obj.carriersPerUser , :) = userData;
                
            end
            
            %% Print message
            
            if obj.debugFlag
                fprintf('\nMAC| Transmitted message with additional text: \n');
                switch obj.dataType
                    case 'c'
                        fprintf('%s \n', char(obj.messageSent(obj.desiredUser,:)));
                    case 'u'
                        for k = 1:length(obj.messageSent(obj.desiredUser,:))
                            % Codegen does not accept uint8s on
                            % fprint, so they need to be casted to
                            % int16
                            fprintf('%d \n', int16(obj.messageSent(obj.desiredUser,k)));
                        end
                    otherwise
                        fprintf('MAC| Undefined data type');
                end
            end
            
            %% Define last frame and sent messages
            obj.lastMessageUE1 = messageUE1;
            obj.lastMessageUE2 = messageUE2;
            obj.lastFrame = bitsToTx;
            
        end
        
        %% Additional text
        function FullMessage = additionalText(obj,message,originNode,destNode)
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
                
                % Build message
                FullMessage = [uniqueID,destNodeChar,originNodeChar,...
                    message,uint8('EOF')];
                
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