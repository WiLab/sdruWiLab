
load USRPData.mat

N = size(bitsToTx,2);
% Setup Receiver
RX = PHYReceiver;
RX.NumFrames = 1;
RX.NumDataSymbolsPerFrame = N;

% Setup Upper Layers
RxMAC = RxOFDMA;
RxMAC.desiredUser = desiredUser;
RxMAC.dataType = dataType;


% Add some extra buffer to fit into receiver buffer
RX.ReceiveBufferLength=length(frame);% Need some additional space on input, since algorithms need to shift input

%% Receive

for k=1:2e5
frame2 = receivedData(k:k+RX.ReceiveBufferLength);
[output, flag] = step(RX,frame2);
if flag==0
result = step(RxMAC,output);
end
end
