function [ RHard2 ] = SignalCorrect(rFrame) %#codegen

assert(isa(rFrame, 'double') && ~isreal(rFrame) && all(size(rFrame) == [ (8*(64+16)+320) 1]))


%% Receiver
persistent  PF

if isempty(PF)
    PF = PHYRxProcessFrame;

    PF.NumDataSymbolsPerFrame = 8;

    PF.SamplingFrequency= 0.5e6;
    
end

RHard = step(PF,rFrame);

RHard2 = reshape(RHard,numel(RHard),1);


end

