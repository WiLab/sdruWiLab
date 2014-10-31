function PHYTransmitterFun

fprintf('%d\n',int16(20));
N = 11;
input = randi([0 1],48,N);

% Setup Transmitter
TX = PHYTransmitter;
TX.NumDataSymbolsPerFrame = N;
%TX.HWAttached = true;

for k=1:100
    step(TX,input);
end

end
    