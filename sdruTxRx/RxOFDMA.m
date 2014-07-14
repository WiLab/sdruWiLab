function receivedMessage = RxOFDMA(receivedFrame,desiredUser)
% RxOFDMA   OFDMA receiver conversion from bits to char, error checking and
% user demultiplexing for 2 users.
%   receivedMessage  = RxOFDMA(receivedFrame,desiredUser) creates a
%   struct containing the recovered text, the heade, the number of pad bits
%   that the frame contained, the number of carriers, of the desired user
%   and the amount of symbols and carriers per user.

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
padBits = OFDMbits2letters(3,userBits(1:7));

unpaddedBits = userBits(1:end-padBits);

%% CRC check and convert to letters

% CRC Check
pDetect = comm.CRCDetector([1 0 0 1], 'ChecksumsPerFrame',1);
[msg, err] = step(pDetect, unpaddedBits.'>0);

if ~err
    % Convert Bits to characters
    messageLetters = char(OFDMbits2letters(3,msg > 0).');%messageBits(recMessage,1:end-3)
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

function Letters = OFDMbits2letters( ~, bits )
% OFDMbits2letters: Convert input bits from a double array to ascii
% integers, which can be converted to letters by the char() function

% Make input into column
bits = bits(:);

%Trim extra bits
bits = bits(1: floor(length(bits)/7)*7);

%Shape into letters
bits = reshape(bits, 7, length(bits)/7).';

%Convert bits to letters
Letters = zeros(size(bits,1),1);
for i = 1:size(bits,1)
    Letters(i) = char(bin2dec(dec2bin(bits(i,:)).'));
end

end