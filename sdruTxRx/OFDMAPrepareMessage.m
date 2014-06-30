function messageToTx = OFDMAPrepareMessage(UsersOriginNode, UsersDestNode, message_UE1,message_UE2)

% Matrix containing messages
messageText = [additionalText(message_UE1,UsersOriginNode(1),UsersDestNode(1));...
               additionalText(message_UE2,UsersOriginNode(2),UsersDestNode(2))];

% Struct with message and metadata
messageToTx = struct('messageText', messageText,...
    'UsersOriginNode',UsersOriginNode,...
    'UsersDestNode',UsersDestNode,...
    'numUsers',2);

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
        originNodeChar, destNodeChar,uniqueID,'EOF',... % Additional
        repmat('-',1,69 - length(message))];            % Padding
    
else
    fprintf('ERROR: Message incorrect format\n');
    return;
end

end