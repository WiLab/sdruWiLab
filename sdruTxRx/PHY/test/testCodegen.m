function frame = testCodegen(input,num,hw)


TX = PHYTransmitter;
TX.HWAttached = hw;
TX.NumDataSymbolsPerFrame = num;

frame = step(TX,input);



end
