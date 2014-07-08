function receivedMessage = RxOFDMA(obj,receivedFrame,desiredUser)
% Write HELP here!!!!

%% Define parameters
numCarriers = size(receivedFrame,1);
numSymbols = size(receivedFrame,2);
carriersPerUser = numCarriers/2;

%% Isolate desired user
userFrame = receivedFrame((desiredUser*carriersPerUser-carriersPerUser+1):...
    desiredUser*carriersPerUser,:);

userBits = reshape(userFrame,1,carriersPerUser*numSymbols);

%% Eliminate pad bits and CRC check

% Extract number of pad bits from beggining of frame
padBits = obj.OFDMbits2letters(userBits(4:10));

unpaddedBits = userBits(1:end-padBits);

% CRC Check
pDetect = comm.CRCDetector([1 0 0 1], 'ChecksumsPerFrame',1);
[msg, err] = step(pDetect, unpaddedBits.'>0);

if ~err
    % Convert Bits to characters
    message = char(OFDMbits2letters(msg > 0).');%messageBits(recMessage,1:end-3)
    %Remove padding
    messageEnd = strfind(message,'EOF');
    if ~isempty(messageEnd)
        recoveredText = message(1:messageEnd(1,1)-1);
        fprintf('PHY| Message recovered: %s\n',recoveredText);
    end
else
    fprintf('PHY| CRC Message Failure\n');
    recoveredText = 'CRC Error';
end

end