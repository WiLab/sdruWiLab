clear all;

clc;

messageUE1 = uint8('1st Message');
messageUE2 = uint8('Second Message');
dataType = 'c';

% messageUE1 = uint8([1 0 1 2 53 53 255 300 0 0 0]);
% messageUE2 = uint8([2 0 1 2 53 53 255 300 0 0 0 0 0 0]);
% dataType = 'u';

desiredUser = 1;

% [frame,bitsToTx] = TransmitterOFDMA_mex(messageUE1,messageUE2,desiredUser,dataType);
% receivedMessage = ReceiverOFDMA_mex(bitsToTx,desiredUser,dataType);

[frame,bitsToTx] = TransmitterOFDMA(messageUE1,messageUE2,desiredUser,dataType);
[receivedMessage,receivedBits] = ReceiverOFDMA(frame,desiredUser,dataType);

errors = biterr(bitsToTx,receivedBits);
fprintf('\n');
disp(['Bit Errors: ',num2str(errors)]);

fprintf('\nWrong characters/integers: ');
disp(sum(receivedMessage ~= messageUE1));

fprintf('\nThe type of the output is: \n');
disp(class(receivedMessage));

codegen TransmitterOFDMA -args {messageUE1,messageUE2,desiredUser,dataType}
codegen ReceiverOFDMA -args {bitsToTx,desiredUser,coder.Constant(dataType)}

