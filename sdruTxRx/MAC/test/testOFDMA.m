clear all;

clc;

messageUE1 = '1st Message';
messageUE2 = 'Second Message';
dataType = 'c';

% messageUE1 = uint8([1 0 1 2 53 53 255 300]);
% messageUE2 = uint8([2 0 1 2 53 53 255 300]);
% objRx.dataType = 'u';

desiredUser = 1;

bitsToTx = TransmitterOFDMA_mex(messageUE1,messageUE2,desiredUser);

receivedMessage = ReceiverOFDMA(bitsToTx,desiredUser,dataType);

% codegen TransmitterOFDMA -args {messageUE1, messageUE2,desiredUser}
codegen ReceiverOFDMA -args {bitsToTx,desiredUser,dataType}
