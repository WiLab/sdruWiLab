function [ rFrameComplex, statusFlag ] = FindSignal(rFrame) %#codegen

assert(isa(rFrame, 'double') && ~isreal(rFrame) && all(size(rFrame) == [2*(20*(64+16)+320) 1]))

%% Receiver
persistent  FF

if isempty(FF)
        
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
%if nargin < 1
%    rFrame = ((1:(FF.NumDataSymbolsPerFrame*(64+16)+320)*2)');
%else
%    rFrame = varargin{1};
    %FF.HWAttached = false;
    %if FF.HWAttached
    %    warning('Ignoring input data since HW is enabled');
    %end
%end

statusFlag = 0;

while 1
    
    % Get data from USRP
    [rFrameColumn, statusFlag] = step(FF,rFrame);
    
    if statusFlag == 0 % Not a timeout or other error

        if debugFlag;fprintf('Signal found\n');end;
        rFrameComplex = rFrameColumn.'; % Must be a row for passing between C++ functions
        return;
        
    else
        if debugFlag;fprintf('Signal Not found\n');end;
        rFrameComplex = complex(zeros(1,1920));
        return
    end
    
end

end

