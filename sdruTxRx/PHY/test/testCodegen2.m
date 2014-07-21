function output = testCodegen2( dataToTx, numDataSymbols, len)

h=PHYReceiver;
h.NumFrames=1;
h.NumDataSymbolsPerFrame = numDataSymbols;
h.ReceiveBufferLength = len;
%h.HWAttached = true;

%output = step(h);
output = step(h,dataToTx);

end
