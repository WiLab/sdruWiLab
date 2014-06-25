function output = testCodegen2( dataToTx, NumFrames,MessageCharacters,FrameLength,numDataSymbols,padBits)

h=PHYReceiver;
h.NumFrames=1;
h.MessageCharacters = MessageCharacters;
h.FrameLength = FrameLength;
h.NumDataSymbolsPerFrame = numDataSymbols;
h.padBits = padBits;
output = step(h,dataToTx);

end
