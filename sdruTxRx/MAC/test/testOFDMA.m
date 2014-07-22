% clear all;

clc;

messageUE1 = '1st Message';
messageUE2 = 'Second Message';
dataType = 'c';

% messageUE1 = uint8([1 0 1 2 53 53 255 300]);
% messageUE2 = uint8([2 0 1 2 53 5 20 53 255 300]);
% dataType = 'u';

desiredUser = 2;
numFrames = 1;

% [frame,bitsToTx] = TransmitterOFDMA_mex(messageUE1,messageUE2,desiredUser,dataType,numFrames);
% [receivedMessage,receivedBits] = ReceiverOFDMA_mex(frame,desiredUser,dataType,numFrames);

[frame,bitsToTx] = TransmitterOFDMA(messageUE1,messageUE2,desiredUser,dataType,numFrames);
[receivedMessage,receivedBits] = ReceiverOFDMA(frame,desiredUser,dataType,numFrames);

errors = biterr(bitsToTx,receivedBits);
fprintf('\n');
disp(['Bit Errors: ',num2str(errors)]);

fprintf('\nWrong characters/integers: ');
disp(sum(receivedMessage ~= messageUE2));

fprintf('\nThe type of the output is: \n');
disp(class(receivedMessage));

% codegen TransmitterOFDMA -args {messageUE1,messageUE2,desiredUser,dataType}
% codegen ReceiverOFDMA -args {frame,desiredUser,coder.Constant(dataType)}

compilesdru('TransmitterOFDMA','mex','-args','{messageUE1,messageUE2,desiredUser,dataType,numFrames}');
compilesdru('ReceiverOFDMA','mex','-args','{frame,desiredUser,coder.Constant(dataType),numFrames}');

% findsdru

