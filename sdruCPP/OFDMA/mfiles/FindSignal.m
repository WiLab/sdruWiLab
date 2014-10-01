function [ rFrameComplex ] = FindSignal(varargin) %#codegen

%% Receiver
persistent  FF START

if isempty(FF) || isempty(START)
    START = 1;
    
    FF = PHYRxFindFrame;
    FF.NumFrames = 1;
    FF.NumDataSymbolsPerFrame = 20;
    
    FF.HWAttached = false;
    FF.PeakThreshold = 0.7;
    FF.requiredPeaks = 7;
    
    FF.SamplingFrequency= 1e6;
    FF.CenterFrequency = 900e6;
end

% Debug
debugFlag = 0;
% Debug

% Check if there is an input, really only used for testing
if nargin < 1
    rFrame = ((1:(FF.NumDataSymbolsPerFrame*(64+16)+320)*2)');
else
    rFrame = varargin{1};
    %FF.HWAttached = false;
    %if FF.HWAttached
    %    warning('Ignoring input data since HW is enabled');
    %end
end


%while 1
 DLL = ~strcmp(coder.target,'');
if DLL
    x = coder.load('Captured.mat');
else
    x = load('Captured.mat');
end

input = x.capturedData;

framesWithGaps = complex(zeros(1920*2,1));

%for k = 1:size(input,2) 
k = START;
while 1
    
    framesWithGaps(1:1920*1) = framesWithGaps(1921:end);
    framesWithGaps(1920*1+1:end) = input(:,k);
    
    % Get data from USRP
    [rFrameColumn, statusFlag] = step(FF,framesWithGaps);
    
    if statusFlag == 0 % Not a timeout or other error

        if debugFlag;fprintf('Signal found\n');end;
        rFrameComplex = rFrameColumn.'; % Must be a row for passing between C++ functions
        START = k + 1;
        return;
        
    else
        rFrameComplex = complex(zeros(1,1920));
        %rFrameComplex = 0;
        %return
        if debugFlag;fprintf('Signal Not found\n');end;
    end
    
    if k>=size(input,2)
        fprintf('LOOPED\n');
        k = 1;
    end
    
end

fprintf('Find Signal Complete\n');

end

