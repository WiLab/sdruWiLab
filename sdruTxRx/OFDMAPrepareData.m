function messageToTx = OFDMAPrepareData(obj,UsersOriginNode, UsersDestNode, message_UE1,message_UE2,numSymbols)

% Define number of users
numUsers = 2;

%% Concatenate text messages

% Since both messages will be in the same matrix, one of them needs to be
% padded, to be the same size as the other

% Calculate size of biggest message, so that one can be padded
maxMsgSize = max([length(message_UE1) length(message_UE2)]);

% Matrix containing messages
messageText = [additionalText(message_UE1,UsersOriginNode(1),UsersDestNode(1)) repmat('-',1,maxMsgSize - length(message_UE1));...
               additionalText(message_UE2,UsersOriginNode(2),UsersDestNode(2)) repmat('-',1,maxMsgSize - length(message_UE2))];

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

%% Pad to create exact number of frames

% Calculate pad bits
padBits = (48*numSymbols - 2*size(messageBits,2))/2 - 3;
if padBits < 0
    fprintf('Not enough frames!');
    return; 
end

% Pad
paddedBits = [messageBits randi([0 1],numUsers,padBits)];

%% Add CRC

% Generate CRC object handle
hGen = comm.CRCGenerator([1 0 0 1], 'ChecksumsPerFrame',1);

% Initialize matrix. Remember to change added number if CRC length changes!
dataWithCRC = zeros(numUsers,length(paddedBits) + 3);

for user = 1:numUsers
    dataWithCRC(user,:) = step(hGen, paddedBits(user,:)');% Add CRC
end

%% User multiplex

% Itintialize matrix
userData = zeros(24,numSymbols);
bitsToTx = zeros(48,numSymbols);

for user = 1:numUsers

    % Reshape one user's data
    userData = reshape(dataWithCRC(user,:)',24,numSymbols);
    
    % Define transmitted bits
    bitsToTx((user-1)*24 + 1 : user*24 , :) = userData; 

end

%% Create struct with message and metadata

messageToTx = struct('bitsToTx',bitsToTx,...
                     'messageText', messageText,...
                     'UsersOriginNode',UsersOriginNode,...
                     'UsersDestNode',UsersDestNode,...
                     'numUsers',numUsers,...
                     'numSymbols',numSymbols);

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
    FullMessage = [message,...                          % Text message
        originNodeChar, destNodeChar,uniqueID,'EOF'];   % Additional
    
else
    fprintf('ERROR: Message incorrect format\n');
    return;
end

end