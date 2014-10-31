function [output] = Decoder( RHard )

% NumSubcarriers 48
% symbolsPerFrame 5

assert(isa(RHard, 'logical') && all(size(RHard) == [48*5 1]))

output = 1;

%% Decode OFDMA symbol to either characters or uint8
persistent RxMAC

if isempty(RxMAC)
    RxMAC = RxOFDMA;
    RxMAC.dataType = 'c';
    RxMAC.desiredUser = 1;
    RxMAC.symbolsPerFrame = 5;
end

% Back to matrix form
RHardMatrix = reshape(RHard,48,RxMAC.symbolsPerFrame);

% Decode
[messageReceived,status] = step(RxMAC,RHardMatrix);


end

