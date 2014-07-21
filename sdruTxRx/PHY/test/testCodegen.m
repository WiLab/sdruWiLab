function frame = testCodegen(input,num)


TX = PHYTransmitter;

TX.NumDataSymbolsPerFrame = num;

frame = step(TX,input);



end
