function [ RHard ] = SignalCorrect(rFrame) %#codegen

assert(isa(rFrame, 'double') && ~isreal(rFrame) && all(size(rFrame) == [1 1*(20*(64+16)+320)]))

%% Correct channel distortion
persistent  PF

if isempty(PF)
    PF = PHYRxProcessFrame;
    PF.NumDataSymbolsPerFrame = 20; % Don't forget to change assert on top
    PF.SamplingFrequency = 10e6; % Required for CFO
end

% CFO, equalize, and demodulate
RHardMatrix = step(PF,rFrame.');

% Convert to vector for passing through C++
RHard = reshape(RHardMatrix,48*PF.NumDataSymbolsPerFrame,1);


end

