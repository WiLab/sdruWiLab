function [ output ] = Function1(  ) %#codegen
%% Transmitter
persistent TX
output = 1;
N = 11;
input = randi([0 1],48,N);
 
if isempty(TX)
% Setup Transmitter
TX = PHYTransmitter;
TX.NumDataSymbolsPerFrame = N;
TX.HWAttached = true;
end

fprintf('Transmitter Started\n');
for k=1:100
    step(TX,input);
end


end

