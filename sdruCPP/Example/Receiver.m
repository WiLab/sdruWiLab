function [ output ] = Receiver() %#codegen

output = 1;

%% Receiver
persistent  RxPHY %RxMAC

if isempty(RxPHY)
    % SETUP MAC
%     RxMAC = RxOFDMA;
%     RxMAC.dataType = dataType;
%     RxMAC.desiredUser = desiredUser;

    RxPHY = PHYReceiver;
    RxPHY.NumFrames = 1000;
    RxPHY.NumDataSymbolsPerFrame = 8;
    RxPHY.HWAttached = true;
    RxPHY.PeakThreshold = .7;
    RxPHY.requiredPeaks = 5;
    RxPHY.SamplingFrequency= 0.5e6;
    
    RxPHY.ReceiveBufferLength = 1120;%length(frame);
    
    RxPHY.CenterFrequency = 900e6;
end

tmp = zeros(48,10);

for k = 1:1e4
    % Uncomment decoder line #266
    step(RxPHY,tmp);
end

end

