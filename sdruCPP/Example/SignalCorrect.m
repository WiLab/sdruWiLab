function [ RHard2 ] = SignalCorrect(rFrame) %#codegen

assert(isa(rFrame, 'double') && ~isreal(rFrame) && all(size(rFrame) == [1  1*(12*(64+16)+320)]))

%% Receiver
persistent  PF

if isempty(PF)
    PF = PHYRxProcessFrame;

    PF.NumDataSymbolsPerFrame = 12;

    PF.SamplingFrequency = 0.5e6;
    
end

RHard = step(PF,rFrame.');

RHard2 = reshape(RHard,48*PF.NumDataSymbolsPerFrame,1);


end

