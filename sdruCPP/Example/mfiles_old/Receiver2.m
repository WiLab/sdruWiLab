function [ output ] = Receiver2() %#codegen

output = 1;

%% Receiver
persistent  PF FF

if isempty(PF)
    PF = PHYRxProcessFrame;
    FF = PHYRxFindFrame;
    FF.NumFrames = 1;
    FF.NumDataSymbolsPerFrame = 8;
    PF.NumDataSymbolsPerFrame = 8;
    FF.HWAttached = true;
    FF.PeakThreshold = .7;
    FF.requiredPeaks = 5;
    PF.SamplingFrequency= 0.5e6;
    FF.SamplingFrequency= 0.5e6;
    
    FF.ReceiveBufferLength = 1120;%length(frame);
    FF.CenterFrequency = 900e6;
end

tmp = zeros(48,10);

while 1
    [rFrame, statusFlag] = step(FF,tmp);
    if statusFlag == 0 
       y = step(PF,rFrame);
    end
end

end

