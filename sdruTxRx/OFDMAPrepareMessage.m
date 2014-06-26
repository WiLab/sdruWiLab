function messageToTx = OFDMPrepareMessage(UsersOriginNode, UsersDestNode, message_UE1,message_UE2,message_UE3,message_UE4, numUsers)

% Check number of users
if numUsers > 4
    fprintf('ERROR: Too many users');
    return;
end

% Zero pad to simplify matrix creation
UsersOriginNode_padded = [UsersOriginNode zeros(1,4-length(UsersOriginNode))];
UsersDestNode_padded = [UsersDestNode zeros(1,4-length(UsersDestNode))];

% Matrix containing messages
AllUsersMessages = [additionalText(message_UE1,UsersOriginNode_padded(1),UsersDestNode_padded(1));...
                    additionalText(message_UE2,UsersOriginNode_padded(2),UsersDestNode_padded(2));...
                    additionalText(message_UE3,UsersOriginNode_padded(3),UsersDestNode_padded(3));...
                    additionalText(message_UE4,UsersOriginNode_padded(4),UsersDestNode_padded(4))];

% Exclude inactive users
messageText = AllUsersMessages(1:numUsers,:);

% Struct with message and metadata
messageToTx = struct('messageText', messageText,...
    'UsersOriginNode',UsersOriginNode,...
    'UsersDestNode',UsersDestNode,...
    'numUsers',numUsers);

end

function FullMessage = additionalText(message,originNode,destNode)
% Function to add EOF, unique ID, origin node number and destination node
% number to a message

% Message to transmit
% message is 80 characters max, so extra 3 for EOF, 1 for uniqueID, 1
% for the node number of recipient, 1 for origin node
if length(message) < 74
    
    % Add additional character to differentiate messages, number of
    % origin node and destination node
    uniqueID = char(randi([0 (2^7)-1],1,1));
    originNodeChar = char(48 + originNode);
    destNodeChar = char(48 + destNode);
    
    % Build message
    FullMessage = [message,...                          % Text message
        originNodeChar, destNodeChar,uniqueID,'EOF',... % Additional
        repmat('-',1,74 - length(message))];            % Padding
    
else
    fprintf('ERROR: Message incorrect format\n');
    return;
end

end