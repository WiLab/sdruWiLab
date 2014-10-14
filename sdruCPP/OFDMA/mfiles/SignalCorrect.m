function [ RHard ] = SignalCorrect(rFrame) %#codegen

assert(isa(rFrame, 'double') && ~isreal(rFrame) && all(size(rFrame) == [1 (5*3*(64+16)+320)]))

%% Correct channel distortion
persistent  PF

if isempty(PF)
    PF = PHYRxProcessFrame;
    PF.NumDataSymbolsPerFrame = 5*3; % CreatedFrames*(CodeRate) Don't forget to change assert on top
    PF.SamplingFrequency = 1e6; % Required for CFO
end

% CFO, equalize, and demodulate
RHardMatrix = step(PF,rFrame.');

% Convert to vector for passing through C++
RHard = reshape(RHardMatrix,PF.numCarriers*PF.NumDataSymbolsPerFrame/PF.CodeRate,1);


end

