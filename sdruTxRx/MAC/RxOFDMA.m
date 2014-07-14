function receivedMessage = RxOFDMA(obj,receivedFrame,desiredUser)
% Write HELP here!!!!

%% Define parameters
numCarriers = size(receivedFrame,1);
numSymbols = size(receivedFrame,2);
carriersPerUser = numCarriers/2;

%% User demultiplex
userFrame = receivedFrame((desiredUser*carriersPerUser-carriersPerUser+1):...
    desiredUser*carriersPerUser,:);

userBits = reshape(userFrame,1,carriersPerUser*numSymbols);

%% Eliminate pad bits 

% Extract number of pad bits from beggining of frame
padBits = obj.OFDMbits2letters(userBits(1:7));

unpaddedBits = userBits(1:end-padBits);

%% CRC check and convert to letters

% CRC Check
pDetect = comm.CRCDetector([1 0 0 1], 'ChecksumsPerFrame',1);
[msg, err] = step(pDetect, unpaddedBits.'>0);

if ~err
    % Convert Bits to characters
    messageLetters = char(obj.OFDMbits2letters(msg > 0).');%messageBits(recMessage,1:end-3)
    %Remove padding
    messageEnd = strfind(messageLetters,'EOF');
    if ~isempty(messageEnd)
        recoveredText = messageLetters(5:messageEnd(1,1)-1); % Exclude the header
        fprintf('PHY| Message recovered: %s\n',recoveredText);
        header = messageLetters(1:4);
    end
else
    fprintf('PHY| CRC Message Failure\n');
    recoveredText = 'CRC Error';
    header = 'CRC Error';
end

%% Build output struct

receivedMessage = struct('recoveredText',recoveredText,...
                         'header',header,...
                         'padBits',padBits,...
                         'numCarriers',numCarriers,...
                         'numSymbols',numSymbols,...
                         'carriersPerUser',carriersPerUser);

end