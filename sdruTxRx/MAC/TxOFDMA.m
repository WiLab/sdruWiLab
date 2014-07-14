<<<<<<< HEAD:sdruTxRx/TxOFDMA.m
classdef TxOFDMA < matlab.System
=======
function messageToTx = TxOFDMA(obj,UsersOriginNode, UsersDestNode, messageUE1,messageUE2,numSymbols)
% Write HELP here!!!!

%% Define parameters
numUsers = 2;
numCarriers = 48;

%% Concatenate text messages and add extra text

% Since both messages will be in the same matrix, one of them needs to be
% padded, to be the same size as the other

% Calculate size of biggest message, so that one can be padded
maxMsgSize = max([length(messageUE1) length(messageUE2)]);

% Extend all text in messages to 80 Characters and
% containing messages to matrix, 1 row per user
messageUEs = [additionalText(messageUE1,UsersOriginNode(1),UsersDestNode(1)) repmat('-',1,maxMsgSize - length(messageUE1));...
              additionalText(messageUE2,UsersOriginNode(2),UsersDestNode(2)) repmat('-',1,maxMsgSize - length(messageUE2))];


%% Calculate pad bits and 

% The number of pad bits per user is the total number of bits per user 
% (numCarriers*numSymbols/2) minus the bits per message 
% (7*(size(messageUEs,2)+7)) minus the CRC bits (3)

padBits = numCarriers*numSymbols/2 - 7*(size(messageUEs,2)+1) - 3;
if padBits < 0
    fprintf('Not enough symbols!\n\n');
    return;
end

% Add number of pad bits to header
messageText = [repmat(char(padBits),numUsers,1) messageUEs];

%% Convert to bits

% Initialize matrix
messageBits = zeros(numUsers,size(messageText,2)*7);
userBits = zeros(size(messageText,2),7);

% Convert to bits
for user = 1:numUsers
>>>>>>> origin/ofdma:sdruTxRx/MAC/TxOFDMA.m
    
    % TxOFDMA   OFDMA tramsnsmitter class for bit conversion, error 
    % checking and user multiplexing for 2 users.
    
    %% Define nontunable properties
    properties(Nontunable)
        
        numUsers = 2;
        numCarriers = 48;
        carriersPerUser = 24; % numCarrier/numUsers, remember to change if they change
        symbolsPerFrame = 10;
        
    end
    
    %% Define tunable properties
    properties
        messageText;
        DestNodes;
        OriginNodes;
        padBits;   % Number of pad bits on last frame
        lastFrame; % Last transmitted frame
    end
    
    %% Methods
    methods(Access = protected)
        %% Setup
        function setupImpl(obj,~,~)
            
            % Tunable
            obj.DestNodes = [1 2];
            obj.OriginNodes = [2 1];
            
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
            
            % Matrix containing messages
            messageUEs = [obj.additionalText(messageUE1,obj.OriginNodes(1),obj.DestNodes(1)) repmat('-',1,maxMsgSize - length(messageUE1));...
                obj.additionalText(messageUE2,obj.OriginNodes(2),obj.DestNodes(2)) repmat('-',1,maxMsgSize - length(messageUE2))];
            
            
            %% Calculate pad bits and
            
            % The number of pad bits per user is the total number of bits per user
            % (numCarriers*nsymbolsPerFrame/2) minus the bits per message
            % (7*(size(messageUEs,2)+7)) minus the CRC bits (3)
            
            obj.padBits = obj.numCarriers*obj.symbolsPerFrame/2 - 7*(size(messageUEs,2)+1) - 3;
            if obj.padBits < 0
                fprintf('Not enough symbols!\n\n');
                return;
            end
            
            % Add number of pad bits to header
            obj.messageText = [repmat(char(obj.padBits),obj.numUsers,1) messageUEs];
            
            %% Convert to bits
            
            % Initialize matrix
            messageBits = zeros(obj.numUsers,size(obj.messageText,2)*7);
            userBits = zeros(size(obj.messageText,2),7);
            
            % Convert to bits
            for user = 1:obj.numUsers
                
                % Convert to bits
                userBits = obj.OFDMletters2bits(obj.messageText(user,:));
                
                % Reshape into row vector
                messageBits(user,:) = reshape(userBits',1,size(userBits,1)*size(userBits,2));
                
            end
            
            %% Add CRC and pad
            
            % Generate CRC object handle
            hGen = comm.CRCGenerator([1 0 0 1], 'ChecksumsPerFrame',1);
            
            % Initialize matrix. Remember to change added number if CRC length changes!
            dataWithCRC = zeros(obj.numUsers,length(messageBits) + 3);
            
            for user = 1:obj.numUsers
                dataWithCRC(user,:) = step(hGen, messageBits(user,:)');% Add CRC
            end
            
            % Pad and add number of pad bits to header
            paddedBits = [dataWithCRC randi([0 1],obj.numUsers,obj.padBits)];
            
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
            
            %% Define last frame
            obj.lastFrame = bitsToTx;
            
        end
        
        %% Additional text
        function FullMessage = additionalText(~,message,originNode,destNode)
            % Function to add EOF, unique ID, origin node number and destination node
            % number to a message
            
            % Message to transmit
            % message is 80 characters max, so extra 3 for EOF, 1 for uniqueID, 1
            % for the node number of recipient, 1 for origin node
            if length(message) < 69
                
                % Add additional character to differentiate messages, number of
                % origin node and destination node
                uniqueID = char(randi([0 (2^7)-1],1,1));
                originNodeChar = char(48 + originNode);
                destNodeChar = char(48 + destNode);
                
                % Build message
                FullMessage = [uniqueID,destNodeChar,originNodeChar,...
                    message,'EOF'];
                
            else
                fprintf('ERROR: Message incorrect format\n');
                return;
            end
            
        end
        
        %% Conversion to bits
        function f = OFDMletters2bits(obj,str)
            % Encode a string of ASCII text into bits(1,0)
            DLL = ~strcmp(coder.target,'');
            N=length(str);
            f=zeros(N,7);
            
            bits = dec2bin(str);
            for k=1:N
                letter = bits(k,:);
                for i = 1:7
                    if DLL
                        f(k,i)=coder.ceval('atoi',c_string(obj,letter(i)));
                    else
                        f(k,i)=str2double(letter(i));
                    end
                end
            end
            
        end
        
    end
    
end