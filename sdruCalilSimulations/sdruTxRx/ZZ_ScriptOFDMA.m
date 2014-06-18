clear all;

clc;

obj = PHYLayer;

PayloadMessage_UE1 = '1st Message  ';
PayloadMessage_UE2 = '2nd Message  ';

dataToTx = obj.Transmit(PayloadMessage_UE1,PayloadMessage_UE2,1,0,1);

RecoveredMessage = obj.Receive(dataToTx);
