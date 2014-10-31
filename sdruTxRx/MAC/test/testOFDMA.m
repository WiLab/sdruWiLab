clear all;

messageUE1 = ['1st Message';'2nd Message';'3rd Message';'4th Message';'5th Message'];
messageUE2 = ['First  Message';'Second Message';'Third  Message';'Fourth Message';'Fifth  Message'];
dataType = 'c';

desiredUser = 1;
numFrames = 1;


TxMAC = TxOFDMA;
TxMAC.dataType = dataType;
TxMAC.symbolsPerFrame = 8;
TxPHY = PHYTransmitter;
TxPHY.HWAttached = false;
TxPHY.NumDataSymbolsPerFrame = TxMAC.symbolsPerFrame;

RxMAC = RxOFDMA;
RxMAC.dataType = dataType;
RxMAC.desiredUser = desiredUser;
RxMAC.symbolsPerFrame = TxMAC.symbolsPerFrame;
RxPHY = PHYReceiver;
RxPHY.NumFrames = 5;
RxPHY.NumDataSymbolsPerFrame = TxMAC.symbolsPerFrame;
RxPHY.HWAttached = false;
RxPHY.SamplingFrequency = 2e6;

bitsToTx1 = step(TxMAC, messageUE1(1,:),messageUE2(1,:));
frame1 = step(TxPHY,bitsToTx1);

bitsToTx2 = step(TxMAC, messageUE1(2,:),messageUE2(1,:));
frame2 = step(TxPHY,bitsToTx2);

bitsToTx3 = step(TxMAC, messageUE1(3,:),messageUE2(1,:));
frame3 = step(TxPHY,bitsToTx3);

bitsToTx4 = step(TxMAC, messageUE1(4,:),messageUE2(1,:));
frame4 = step(TxPHY,bitsToTx4);

bitsToTx5 = step(TxMAC, messageUE1(5,:),messageUE2(1,:));
frame5 = step(TxPHY,bitsToTx5);

RxPHY.ReceiveBufferLength = length(frame1);

receivedStream = [0.01*randn(100,1);frame1;frame2;0.01*randn(10,1);frame3;frame4;frame5;0.01*randn(10000,1)];
%receivedStream = [0.0001*randn(10,1);frame1;0.0001*randn(1000,1)];
%receivedStream = [frame1;0.0001*randn(1000,1)];

h = comm.PhaseFrequencyOffset('FrequencyOffset',3000,'PhaseOffset',45,'SampleRate',2e6);
receivedStream = step(h,receivedStream);
receivedStream = awgn(receivedStream,5,'measured');



bitsReceived = step(RxPHY,receivedStream);

numFoundFrames = 1;
index = 1+(numFoundFrames-1)*RxPHY.NumDataSymbolsPerFrame:...
               (numFoundFrames)*RxPHY.NumDataSymbolsPerFrame;
numFoundFrames = numFoundFrames + 1;
err1 = biterr(bitsToTx1,bitsReceived(:,index));
step(RxMAC,bitsReceived(:,index));
%
index = 1+(numFoundFrames-1)*RxPHY.NumDataSymbolsPerFrame:...
               (numFoundFrames)*RxPHY.NumDataSymbolsPerFrame;
numFoundFrames = numFoundFrames + 1;
err2 = biterr(bitsToTx2,bitsReceived(:,index));
step(RxMAC,bitsReceived(:,index));
%
index = 1+(numFoundFrames-1)*RxPHY.NumDataSymbolsPerFrame:...
               (numFoundFrames)*RxPHY.NumDataSymbolsPerFrame;
numFoundFrames = numFoundFrames + 1;
err3 = biterr(bitsToTx3,bitsReceived(:,index));
step(RxMAC,bitsReceived(:,index));
%
index = 1+(numFoundFrames-1)*RxPHY.NumDataSymbolsPerFrame:...
               (numFoundFrames)*RxPHY.NumDataSymbolsPerFrame;
numFoundFrames = numFoundFrames + 1;
err4 = biterr(bitsToTx4,bitsReceived(:,index));
step(RxMAC,bitsReceived(:,index));
%
index = 1+(numFoundFrames-1)*RxPHY.NumDataSymbolsPerFrame:...
               (numFoundFrames)*RxPHY.NumDataSymbolsPerFrame;
numFoundFrames = numFoundFrames + 1;
err5 = biterr(bitsToTx5,bitsReceived(:,index));
step(RxMAC,bitsReceived(:,index));



fprintf('Errors: %d %d %d %d %d\n',int16(err1),int16(err2),int16(err3),int16(err4),int16(err5));


break

%%
clear all;
%load USRPData.mat
load USRPData_Large.mat

USRPData = reshape(USRPData,numel(USRPData),1);

RxMAC = RxOFDMA;
RxMAC.dataType = dataType;
RxMAC.desiredUser = desiredUser;
RxPHY = PHYReceiver;
RxPHY.NumFrames = 1000;
RxPHY.NumDataSymbolsPerFrame = size(bitsToTx,2);
RxPHY.HWAttached = false;
RxPHY.PeakThreshold = .7;
RxPHY.requiredPeaks = 5;
RxPHY.SamplingFrequency= 2e6;

RxPHY.ReceiveBufferLength = length(frame);

[bitsReceived, flag] = step(RxPHY,USRPData);


















