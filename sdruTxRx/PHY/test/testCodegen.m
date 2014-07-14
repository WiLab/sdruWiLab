function frame = testCodegen(input)


TX = PHYTransmitter;


TX.NumDataSymbolsPerFrame = 4;

frame = step(TX,input);



end