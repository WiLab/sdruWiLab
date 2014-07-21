function output = testCodegen2( dataToTx, numDataSymbols, len, hw)

h=PHYReceiver;
h.NumFrames=1;
h.NumDataSymbolsPerFrame = numDataSymbols;
h.ReceiveBufferLength = len;
h.HWAttached = hw;

%output = step(h);
output = step(h,dataToTx);

end
