function r = OFDMASignalGenerator(obj,messageToTx,samplingFreq)

% The number of frames is equal to the number of users, since each one of 
% the user's messages has 80 characters, exactly one frame
numFrames = messageToTx.numUsers;

%% Convert to bits

% Initialize matrix
originalData = zeros(messageToTx.numUsers,7*size(messageToTx.messageText,2));

for user = 1:messageToTx.numUsers
    
    % Convert to bits, in the matrix form
    UsersOriginalData = obj.OFDMletters2bits(messageToTx.messageText(user,:));
    
    % Reshape into a vector
    originalData(user,:) = reshape(UsersOriginalData.',size(UsersOriginalData,1)*size(UsersOriginalData,2),1);
    
end

%% Add CRC

% Generate CRC object handle
hGen = comm.CRCGenerator([1 0 0 1], 'ChecksumsPerFrame',1);

% Initialize matrix
dataWithCRC = zeros(messageToTx.numUsers,length(originalData) + 3);

for user = 1:messageToTx.numUsers
    dataWithCRC(user,:) = step(hGen, originalData(user,:));% Add CRC
end

%% BPSK Modulate

% Construct modulator for each subcarrier
hMod = comm.BPSKModulator; % BPSK

% Initialize matrix, needs to change if modulation scheme changes
modData = zeros(size(dataWithCRC));

for user = 1:messageToTx.numUsers
    % Apply modulator for each subcarrier
    modData(user,:) = step(hMod, dataWithCRC(user,:));
end

%% User multiplex



%% OFDM Modulation



%% Create preambles
obj.CreatePreambles;



end