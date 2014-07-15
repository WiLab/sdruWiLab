clear all;

clc;

message_UE1 = '1st Message';
message_UE2 = 'Second Message';

objTx = TxOFDMA;

bitsToTx = step(objTx,message_UE1,message_UE2);

objRx = RxOFDMA;

receivedMessage = step(objRx,bitsToTx);

fprintf('\nHeader of received message: \n');
disp(objRx.lastHeader);

fprintf('\nTransmitted message with additional text: \n');
disp(objTx.messageText(objRx.desiredUser,:));
