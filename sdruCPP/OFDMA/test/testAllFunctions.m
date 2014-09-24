% Test all layers

%% Transmitter

% SETUP MAC
TxMAC = TxOFDMA;
TxMAC.desiredUser = 1;
TxMAC.dataType = 'c';
TxMAC.symbolsPerFrame = 20;

TxPHY = PHYTransmitter;
TxPHY.HWAttached = false;
TxPHY.NumDataSymbolsPerFrame = TxMAC.symbolsPerFrame;

SamplingFrequency = 0.5e6;
USRPADCSamplingRate = 100e6;
InterpolationFactor = floor(USRPADCSamplingRate/SamplingFrequency);

messageUE1 = ['Message'];
messageUE2 = ['Message'];

frameLength = (20*(64+16)+320);

frame = complex(zeros(frameLength*10,1));

%%
for k = 1:10
    bitsToTx1 = step(TxMAC, messageUE1(1,:),messageUE2(1,:));
    frame(1+(k-1)*frameLength:k*frameLength)= step(TxPHY,bitsToTx1);
end

frame2=[0.0001*randn(100,1);frame;0.0001*randn(100,1)];

[ rFrameHor ] = FindSignalData(frame2);

[ RHard2 ] = SignalCorrect(rFrame.');

output = Decoder( RHard2 );





