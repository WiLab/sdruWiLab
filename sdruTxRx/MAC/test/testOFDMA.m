%% Define path

% addpath(genpath('Documents/MATLAB/sdruTxRx'))
% cd Documents/MATLAB/sdruTxRx/MAC/

%% Clear

% clear all;
% 
% clc;

%% Set variables

% load('frame.mat')
% 
% messageUE1 = '1st Message';
% messageUE2 = 'Second Message';
% dataType = 'c';
% 
% % messageUE1 = uint8([1 0 1 2 53 53 255 300]);
% % messageUE2 = uint8([2 0 1 2 53 5 20 53 255 300]);
% % dataType = 'u';
% 
% desiredUser = 2;
% numFrames = 100;

%% Transmmit 

% [frame,bitsToTx] = TransmitterOFDMA_mex(messageUE1,messageUE2,desiredUser,dataType,numFrames);

% [frame,bitsToTx] = TransmitterOFDMA(messageUE1,messageUE2,desiredUser,dataType,numFrames);

%% Receive

% [receivedMessage,receivedBits] = ReceiverOFDMA_mex(frame,desiredUser,dataType,numFrames);

[receivedMessage,receivedBits] = ReceiverOFDMA(frame,desiredUser,dataType,numFrames);

%% Error measuring

% errors = biterr(bitsToTx,receivedBits);
% fprintf('\n');
% disp(['Bit Errors: ',num2str(errors)]);
% 
% fprintf('\nWrong characters/integers: ');
% disp(sum(receivedMessage ~= messageUE2));
% 
% fprintf('\nThe type of the output is: \n');
% disp(class(receivedMessage));

%% Compile Tx

% codegen TransmitterOFDMA -args {messageUE1,messageUE2,desiredUser,dataType}

% compilesdru('TransmitterOFDMA','mex','-args','{messageUE1,messageUE2,desiredUser,dataType,numFrames}');

% disp('DONE!');

%% Compile Rx

% codegen ReceiverOFDMA -args {frame,desiredUser,coder.Constant(dataType)}

% compilesdru('ReceiverOFDMA','mex','-args','{frame,desiredUser,coder.Constant(dataType),numFrames}');

% disp('DONE!');
