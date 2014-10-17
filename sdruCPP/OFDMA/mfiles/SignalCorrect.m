function [ RHard ] = SignalCorrect(rFrame) %#codegen

FrameLength = (3*5*(64+16)+320);
assert(isa(rFrame, 'double') && ~isreal(rFrame) && all(size(rFrame) == [1 FrameLength]))

%% Correct channel distortion
persistent  PF

if isempty(PF)
    PF = PHYRxProcessFrame;
    PF.NumCodedSymbolsPerFrame = 15; % CreatedFrames*(CodeRate) Don't forget to change assert on top
    PF.SamplingFrequency = 1e6; % Required for CFO
end

% CFO, equalize, and demodulate
RHardMatrix = step(PF,rFrame.');

% Convert to vector for passing through C++
RHard = reshape(RHardMatrix,PF.numCarriers*PF.NumCodedSymbolsPerFrame/PF.CodeRate,1);


end

