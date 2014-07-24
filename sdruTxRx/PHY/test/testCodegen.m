function frame = testCodegen(input,num,hw)

persistent TX;
if isempty(TX)
TX = PHYTransmitter;
TX.HWAttached = hw;
TX.NumDataSymbolsPerFrame = num;
end

frame = step(TX,input);



end
