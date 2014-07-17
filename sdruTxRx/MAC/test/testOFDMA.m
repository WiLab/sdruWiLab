clear all;

clc;

% messageUE1 = '1st Message';
% messageUE2 = 'Second Message';
% dataType = 'c';

messageUE1 = char(uint8([1 0 1 2 53 53 255 300 0 0 0]));
messageUE2 = char(uint8([2 0 1 2 53 53 255 300 0 0 0 0 0 0]));
dataType = 'u';

desiredUser = 1;

bitsToTx = TransmitterOFDMA_mex(messageUE1,messageUE2,desiredUser);
% receivedMessage = ReceiverOFDMA_mex(bitsToTx,desiredUser,dataType);

% bitsToTx = TransmitterOFDMA(messageUE1,messageUE2,desiredUser);
receivedMessage = ReceiverOFDMA(bitsToTx,desiredUser,dataType);

fprintf('\nThe type of the output is: \n');
disp(class(receivedMessage));

codegen TransmitterOFDMA -args {messageUE1,messageUE2,desiredUser}
% codegen ReceiverOFDMA -args {bitsToTx,desiredUser,dataType}

