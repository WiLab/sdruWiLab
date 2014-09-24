function [ output ] = Receiver() %#codegen

output = 1;

persistent TxMAC TxPHY
 
if isempty(TxMAC)
    % SETUP MAC
    TxMAC = TxOFDMA;
    TxMAC.desiredUser = 1;
    TxMAC.dataType = 'c';
    TxMAC.symbolsPerFrame = 8;
    
    TxPHY = PHYTransmitter;
    TxPHY.HWAttached = false;
    TxPHY.NumDataSymbolsPerFrame = TxMAC.symbolsPerFrame;
    
end

messageUE1 = ['1st Message';'2nd Message';'3rd Message';'4th Message';'5th Message'];
messageUE2 = ['First  Message';'Second Message';'Third  Message';'Fourth Message';'Fifth  Message'];

frameLength = 960;
frame = complex(zeros(frameLength*10,1));

for k = 1:10
    bitsToTx1 = step(TxMAC, messageUE1(1,:),messageUE2(1,:));
    frame(1+(k-1)*frameLength:k*frameLength)= step(TxPHY,bitsToTx1);
end


%% Receiver
persistent  RxPHY %RxMAC

if isempty(RxPHY)
    % SETUP MAC
%     RxMAC = RxOFDMA;
%     RxMAC.dataType = dataType;
%     RxMAC.desiredUser = desiredUser;

    RxPHY = PHYReceiver;
    RxPHY.NumFrames = 1;
    RxPHY.NumDataSymbolsPerFrame = 8;
    RxPHY.HWAttached = false;%true;
    RxPHY.PeakThreshold = .7;
    RxPHY.requiredPeaks = 5;
    RxPHY.SamplingFrequency= 2e6;
    
    RxPHY.ReceiveBufferLength = 1120;%length(frame);
    
    RxPHY.CenterFrequency = 2.2e9;
end

%tmp = zeros(48,10);
frame2 = [randn(100,1);frame];
for k = 1:1e8
    % Uncomment decoder line #266
    step(RxPHY,frame2);
end

end

