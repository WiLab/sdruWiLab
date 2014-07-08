% clear all;

clc;

message_UE1 = '1st Message';
message_UE2 = 'Second Message';

OriginNodes = [1 2];

DestNodes = [4 5];

obj = OFDMPHYBase;

numSymbols = 7;

messageToTx = TxOFDMA(obj,OriginNodes,DestNodes,message_UE1,message_UE2,numSymbols);

% 
% r = OFDMASignalGenerator(obj,messageToTx);
