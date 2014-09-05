function [ RHard2 ] = SignalCorrect(rFrame) %#codegen

assert(isa(rFrame, 'double') && ~isreal(rFrame) && all(size(rFrame) == [1  1*(20*(64+16)+320)]))


%% Receiver
persistent  PF

if isempty(PF)
    PF = PHYRxProcessFrame;

    PF.NumDataSymbolsPerFrame = 20;

    PF.SamplingFrequency = 1e6;
    
end

RHard = step(PF,rFrame.');


RHard2 = reshape(RHard,48*20,1);


end

