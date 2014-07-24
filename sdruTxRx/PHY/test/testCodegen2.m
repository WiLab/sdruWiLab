function output = testCodegen2( dataToTx, numDataSymbols, len, hw)

persistent h;
if isempty(h)
h=PHYReceiver;
h.NumFrames=1;
h.NumDataSymbolsPerFrame = numDataSymbols;
h.ReceiveBufferLength = len;
h.HWAttached = hw;
end

%output = step(h);
output = step(h,dataToTx);

end
