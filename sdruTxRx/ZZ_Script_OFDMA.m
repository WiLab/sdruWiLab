clear all;

clc;

message_UE1 = '1st Message';
message_UE2 = 'Second Message';

objTx = TxOFDMA;

bitsToTx = step(objTx,message_UE1,message_UE2);

desiredUser = 1;

receivedMessage = RxOFDMA(bitsToTx,desiredUser);

disp('Header: ');
disp(receivedMessage.header);

disp('Tx message');
disp(objTx.messageText(desiredUser,:));
