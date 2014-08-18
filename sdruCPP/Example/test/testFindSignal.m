% Test FindSignal

%% Generate some data
%% Transmitter

% SETUP MAC
TxMAC = TxOFDMA;
TxMAC.desiredUser = 1;
TxMAC.dataType = 'c';
TxMAC.symbolsPerFrame = 8;

TxPHY = PHYTransmitter;
TxPHY.HWAttached = false;
TxPHY.NumDataSymbolsPerFrame = TxMAC.symbolsPerFrame;

SamplingFrequency = 1e6;
USRPADCSamplingRate = 100e6;
InterpolationFactor = floor(USRPADCSamplingRate/SamplingFrequency);

 
messageUE1 = ['1st Message';'2nd Message';'3rd Message';'4th Message';'5th Message'];
messageUE2 = ['First  Message';'Second Message';'Third  Message';'Fourth Message';'Fifth  Message'];

frameLength = 960;
frames = 2;
frame = complex(zeros(frameLength*frames,1));

for k = 1:frames
    bitsToTx1 = step(TxMAC, messageUE1(1,:),messageUE2(1,:));
    frame(1+(k-1)*frameLength:k*frameLength)= step(TxPHY,bitsToTx1);
end

%% Receiver
FF = PHYRxFindFrame;
FF.NumFrames = 2;
FF.NumDataSymbolsPerFrame = 8;

FF.HWAttached = false;
FF.PeakThreshold = .5;
FF.requiredPeaks = 7;

FF.SamplingFrequency= 1e6;

FF.ReceiveBufferLength = 1120;%length(frame);
FF.CenterFrequency = 900e6;

framesFound = 0;
for delay = 1e2:2e3
    
    FF = PHYRxFindFrame;
    FF.NumFrames = 1;
    FF.NumDataSymbolsPerFrame = 8;
    FF.HWAttached = false;
    FF.PeakThreshold = .5;
    FF.requiredPeaks = 7;
    FF.SamplingFrequency= 1e6;
    FF.ReceiveBufferLength = 1120;%length(frame);
    FF.CenterFrequency = 900e6;
    
    frame2=[0.001*randn(delay,1);frame;0.001*randn(1000,1)];
    [rFrame2, statusFlag] = step(FF,frame2);
    if statusFlag==0
        framesFound = framesFound + 1;
        %disp(['Frame found at: ',num2str(FF.delay)]);
    else
        disp('Frame not found');
    end
end





