function output = Decoder( RHard )

assert(isa(RHard, 'logical') && all(size(RHard) == [48*16 1]))

output = 1;

persistent RxMAC

if isempty(RxMAC)
    RxMAC = RxOFDMA;
    RxMAC.dataType = 'c';
    RxMAC.desiredUser = 1;
    RxMAC.symbolsPerFrame = 16;
end

RHard2 = reshape(RHard,48,16);


step(RxMAC,RHard2);


end

