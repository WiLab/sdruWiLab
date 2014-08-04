function [ rFrame ] = FindSignal() %#codegen

output = 1;

%% Receiver
persistent  FF

if isempty(FF)
    
    FF = PHYRxFindFrame;
    FF.NumFrames = 1e10;
    FF.NumDataSymbolsPerFrame = 8;

    FF.HWAttached = true;
    FF.PeakThreshold = .7;
    FF.requiredPeaks = 5;

    FF.SamplingFrequency= 2.0e6;
    
    FF.ReceiveBufferLength = 1120;%length(frame);
    FF.CenterFrequency = 900e6;

end

tmp = zeros(48,8);

while 1
    [rFrame, statusFlag] = step(FF,tmp);
    if statusFlag == 0 
       break
    end
end

end

