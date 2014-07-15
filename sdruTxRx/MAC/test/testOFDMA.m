clear all;

clc;

message_UE1 = '1st Message';
message_UE2 = 'Second Message';

% message_UE1 = uint8([1 0 1 2 53 53 255 300]);
% message_UE2 = uint8([2 0 1 2 53 53 255 300]);

objTx = TxOFDMA;

bitsToTx = step(objTx,message_UE1,message_UE2);

objRx = RxOFDMA;

receivedMessage = step(objRx,bitsToTx);

fprintf('\nHeader of received message: \n');
disp(objRx.lastHeader);

fprintf('\nTransmitted message with additional text: \n');
disp(objTx.messageSent(objRx.desiredUser,:));
