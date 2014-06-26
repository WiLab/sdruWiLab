function output = testCodegen2( dataToTx, NumFrames,MessageCharacters,FrameLength,numDataSymbols,padBits)

h=PHYReceiver;
h.NumFrames=1;
h.MessageCharacters = MessageCharacters;
h.FrameLength = FrameLength;
h.NumDataSymbolsPerFrame = numDataSymbols;
h.padBits = padBits;

h.HWAttached = true;
%output = step(h);

for k=1:10
output = step(h,dataToTx);
fprintf('%s\n',output);
end

end
