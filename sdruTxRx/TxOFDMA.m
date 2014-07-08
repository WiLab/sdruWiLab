function messageToTx = TxOFDMA(obj,UsersOriginNode, UsersDestNode, messageUE1,messageUE2,numSymbols)
% Write HELP here!!!!

%% Define parameters
numUsers = 2;
numCarriers = 48;

%% Concatenate text messages

% Since both messages will be in the same matrix, one of them needs to be
% padded, to be the same size as the other

% Calculate size of biggest message, so that one can be padded
maxMsgSize = max([length(messageUE1) length(messageUE2)]);

% Matrix containing messages
messageUEs = [additionalText(messageUE1,UsersOriginNode(1),UsersDestNode(1)) repmat('-',1,maxMsgSize - length(messageUE1));...
              additionalText(messageUE2,UsersOriginNode(2),UsersDestNode(2)) repmat('-',1,maxMsgSize - length(messageUE2))];


%% Calculate pad bits and add as extra text

% The number of pad bits per user is the total number of bits per user 
% (numCarriers*numSymbols/2) minus the bits per message 
% (7*(size(messageUEs,2)+7)) minus the CRC bits (3)

padBits = numCarriers*numSymbols/2 - 7*(size(messageUEs,2)+1) - 3;
if padBits < 0
    fprintf('Not enough symbols!\n\n');
    return;
end

% Put number of pad bits on the beggining of the message
messageText = [repmat(char(padBits),numUsers,1) messageUEs];

%% Convert to bits

% Initialize matrix
messageBits = zeros(numUsers,size(messageText,2)*7);
userBits = zeros(size(messageText,2),7);

% Convert to bits
for user = 1:numUsers
    
    % Convert to bits
    userBits = obj.OFDMletters2bits(messageText(user,:));
    
    % Reshape into row vector
    messageBits(user,:) = reshape(userBits',1,size(userBits,1)*size(userBits,2));
    
end

%% Add CRC and pad

% Generate CRC object handle
hGen = comm.CRCGenerator([1 0 0 1], 'ChecksumsPerFrame',1);

% Initialize matrix. Remember to change added number if CRC length changes!
dataWithCRC = zeros(numUsers,length(messageBits) + 3);

for user = 1:numUsers
    dataWithCRC(user,:) = step(hGen, messageBits(user,:)');% Add CRC
end

% Pad and add number of pad bits to header
paddedBits = [dataWithCRC randi([0 1],numUsers,padBits)];

%% User multiplex

% Itintialize matrix
userData = zeros(numCarriers/2,numSymbols);
bitsToTx = zeros(numCarriers,numSymbols);

for user = 1:numUsers
    
    % Reshape one user's data
    userData = reshape(paddedBits(user,:)',numCarriers/2,numSymbols);
    
    % Define transmitted bits
    bitsToTx((user-1)*numCarriers/2 + 1 : user*numCarriers/2 , :) = userData;
    
end

%% Create struct with message and metadata

messageToTx = struct('bitsToTx',bitsToTx,...
                     'messageText', messageText,...
                     'UsersOriginNode',UsersOriginNode,...
                     'UsersDestNode',UsersDestNode,...
                     'numUsers',numUsers,...
                     'numSymbols',numSymbols,...
                     'numCarriers',numCarriers);

end

function FullMessage = additionalText(message,originNode,destNode)
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