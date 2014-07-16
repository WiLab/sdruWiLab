clear all;

clc;

objRx = RxOFDMA;

messageUE1 = '1st Message';
messageUE2 = 'Second Message';
objRx.dataType = 'char';

% message_UE1 = uint8([1 0 1 2 53 53 255 300]);
% message_UE2 = uint8([2 0 1 2 53 53 255 300]);
% objRx.dataType = 'uint8';

desiredUser = 1;

bitsToTx = TransmitterOFDMA(messageUE1,messageUE2,desiredUser);

objRx.desiredUser = desiredUser;

receivedMessage = step(objRx,bitsToTx);

fprintf('\nHeader of received message: \n');
fprintf('%s\n\n', objRx.lastHeader);

codegen TransmitterOFDMA -args {messageUE1, messageUE2,desiredUser}
