function output = Decoder( RHard )

assert(isa(RHard, 'logical') && all(size(RHard) == [48*20 1]))

output = 1;

%% Decode OFDMA symbol to either characters or uint8
persistent RxMAC

if isempty(RxMAC)
    RxMAC = RxOFDMA;
    RxMAC.dataType = 'c';
    RxMAC.desiredUser = 1;
    RxMAC.symbolsPerFrame = 20;
end

% Back to matrix form
RHardMatrix = reshape(RHard,48,20);

% Decode
step(RxMAC,RHardMatrix);


end

