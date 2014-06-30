% clear all;

clc;

message_UE1 = '1st Message';
message_UE2 = '2nd Message';

OriginNodes = [1 2];

DestNodes = [4 5];

messageToTx = OFDMAPrepareMessage(OriginNodes,DestNodes,message_UE1,message_UE2);

obj = OFDMPHYBase;
% 
% r = OFDMASignalGenerator(obj,messageToTx);
