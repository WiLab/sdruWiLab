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

%% Receiver

FF = PHYRxFindFrame;
FF.NumFrames = 1;
FF.NumDataSymbolsPerFrame = 20;

FF.HWAttached = false;
FF.PeakThreshold = .7;
FF.requiredPeaks = 7;

FF.SamplingFrequency= 0.5e6;

%FF.ReceiveBufferLength = 1120;%length(frame);
FF.CenterFrequency = 2.2e9;

%tmp = zeros(48,8);
rFrame = ((1:(20*(64+16)+320)*2)');
while 1
    [rFrame2, statusFlag] = step(FF,frame2);
    if statusFlag == 0
        % Check if there is something in the frame
        if sum(abs(rFrame2))>0
            
            rFrameReal = real(rFrame2);
            rFrameImag = imag(rFrame2);
            
            rFrame3 = reshape([rFrameReal rFrameImag]',(20*(64+16)+320)*2,1);
            
            break;
            
            
        else
            fprintf('Invalid Frame\n')
        end
    end
end


%%

rFrameSplit = reshape(rFrame3,2,(20*(64+16)+320)).';

rFrame = complex(rFrameSplit(:,1),rFrameSplit(:,2));

PF = PHYRxProcessFrame;

PF.NumDataSymbolsPerFrame = 20;

PF.SamplingFrequency = 0.5e6;


RHard = step(PF,rFrame);
RHard3 = reshape(double(RHard),48*20,1);

%%

RxMAC = RxOFDMA;
RxMAC.dataType = 'c';
RxMAC.desiredUser = 1;
RxMAC.symbolsPerFrame = 20;

RHard2 = reshape(RHard3,48,20);


step(RxMAC,logical(RHard2));