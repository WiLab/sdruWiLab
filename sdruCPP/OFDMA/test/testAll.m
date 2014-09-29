function output2 = testAll()

%% Transmitter
persistent TxMAC TxPHY SDRuTransmitter

if isempty(TxMAC)
    % SETUP MAC
    TxMAC = TxOFDMA;
    TxMAC.desiredUser = 1;
    TxMAC.dataType = 'c';
    TxMAC.symbolsPerFrame = 20;
    % Setup PHY
    TxPHY = PHYTransmitter;
    TxPHY.HWAttached = false;
    TxPHY.NumDataSymbolsPerFrame = TxMAC.symbolsPerFrame;
    
    SamplingFrequency = 1e6;
    USRPADCSamplingRate = 100e6;
    InterpolationFactor = floor(USRPADCSamplingRate/SamplingFrequency);
    
    SDRuTransmitter = comm.SDRuTransmitter('192.168.20.2', ...
        'CenterFrequency',      900e6, ...
        'InterpolationFactor',  InterpolationFactor,...
        'Gain',                 25 ...
        );
    
end

% Messages to transmit
messageUE1 = ['Message'];
messageUE2 = ['Message'];


%% Create a number of frames, and put them in a vector
frameLength = (TxMAC.symbolsPerFrame*(64+16)+320);

framesToCreate = 10;
frame = complex(zeros(frameLength*framesToCreate,1));

for k = 1:framesToCreate
    bitsToTx1 = step(TxMAC, messageUE1(1,:),messageUE2(1,:));
    frame(1+(k-1)*frameLength:k*frameLength)= step(TxPHY,bitsToTx1);
end

% Add gaps between transmissions
framesWithGaps=[zeros(100,1);frame;zeros(100,1)];

%framesWithGaps = awgn(framesWithGaps,15,'measured');

% Find Signal
[ rFrameComplex ] = FindSignal(framesWithGaps);
disp('Found Frame');
% Signal Correct
[ RHard2 ] = SignalCorrect(rFrameComplex);
disp('Signal Corrected');
% Decoder
output2 = Decoder( RHard2 );
disp('Finished Decoding');

release(TxMAC);release(TxPHY);release(SDRuTransmitter);
clear all;

end
