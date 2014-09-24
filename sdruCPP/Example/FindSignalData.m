function [ rFrameHor ] = FindSignalData(rFrameData) %#codegen

%% Receiver
persistent  FF FrameSize

if isempty(FF) || isempty(FrameSize)
    
    FF = PHYRxFindFrame;
    FF.NumFrames = 1;
    FF.NumDataSymbolsPerFrame = 20;

    FF.HWAttached = false;
    FF.PeakThreshold = 0.7;
    FF.requiredPeaks = 7;

    FF.SamplingFrequency= 1e6;
    
    FF.CenterFrequency = 2e9;

    PreambleLength = 320;
    
    FrameSize = (FF.NumDataSymbolsPerFrame*(FF.FFTLength+FF.CyclicPrefixLength)+PreambleLength);
    
end


while 1
    [rFrame, statusFlag] = step(FF,rFrameData);
    % Flag: 1 error, 0 found frame
    if statusFlag == 0
        % Check if there is something in the frame
        if sum(abs(rFrame))>0
            
            rFrameHor = rFrame.';
            % Split real and imag, passing through functions complex has
            % been a problem
            %rFrameReal = real(rFrame);
            %rFrameImag = imag(rFrame);
            %rFrameSplit = reshape([rFrameReal rFrameImag]',FrameSize*2,1);
            save('rFrameHor.mat','rFrameHor');
            return;
            
            
        else
            fprintf('Invalid Frame\n')
        end
    else
        fprintf('Timeout\n');
    end
end

end

