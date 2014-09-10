function [ output ] = Transmitter() %#codegen

output = 1;

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
framesWithGaps=[complex(zeros(100,1));frame;complex(zeros(100,1))];

framesWithGapsTmp = LargeFramesVectorEncoded;%SmallFramesVector;%framesWithGapsStandard;

if sum(framesWithGaps- framesWithGapsTmp)==0
    fprintf('Not Different\n')
else
    fprintf('Different\n');
end

% Transmit out USRP
while 1
    step(SDRuTransmitter,framesWithGapsTmp);
end


end

