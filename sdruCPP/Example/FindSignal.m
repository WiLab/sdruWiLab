function [ rFrameComplex ] = FindSignal() %#codegen


%% Receiver
persistent  FF

if isempty(FF)
    
    FF = PHYRxFindFrame;
    FF.NumFrames = 1;
    FF.NumDataSymbolsPerFrame = 20;

    FF.HWAttached = true;
    FF.PeakThreshold = .7;
    FF.requiredPeaks = 7;

    FF.SamplingFrequency= 1e6;
    
    FF.CenterFrequency = 900e6;

end

rFrame = ((1:(20*(64+16)+320)*2)');
while 1
    [rFrame2, statusFlag] = step(FF,rFrame);
    if statusFlag == 0
        % Check if there is something in the frame
	fprintf('Signal found\n');            
	rFrameComplex = rFrame2.'; % Must be a row for passing between C++ functions	    

            return;
            
            
    end
end

end

