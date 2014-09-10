function output2 = Decoder( RHard )

assert(isa(RHard, 'logical') && all(size(RHard) == [48*20 1]))

%output2 = 1;

persistent RxMAC

if isempty(RxMAC)
    RxMAC = RxOFDMA;
    RxMAC.dataType = 'c';
    RxMAC.desiredUser = 1;
    RxMAC.symbolsPerFrame = 20;
end

RHard2 = reshape(RHard,48,20);

output2 = double(RHard(1,1));

step(RxMAC,RHard2);


end

