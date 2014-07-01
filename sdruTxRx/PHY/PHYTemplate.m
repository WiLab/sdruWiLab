

% Create bits input vector
% Always size 48 x N matrix
% Input is assumed to be 1 frame, N OFDM symbols
% Columns == OFDM Symbol
% Row == Subbarrier

N = 11;
input = randi([0 1],48,N);

% Setup Transmitter
TX = PHYTransmitter;
TX.NumDataSymbolsPerFrame = N;
% Setup Receiver
RX = PHYReceiver;
RX.NumFrames = 1;
RX.NumDataSymbolsPerFrame = N;


% Transmit
frame = step(TX,input);

% Add some extra buffer to fit into receiver buffer
RX.ReceiveBufferLength=length(frame)+1;% Need some additional space on input, since algorithms need to shift input
frame = [frame;zeros(RX.ReceiveBufferLength-length(frame),1)]; % correction algorithms require more data than just 1 frame

% Receive
output = step(RX,frame);


% Evaluate
errors = biterr(input,output);
disp(['Bit Errors: ',num2str(errors)]);


%% Codegen
input = randi([0 1],48,4);
%codegen testCodegen -args {coder.Constant(input)}
compilesdru('testCodegen','MEX','args','{coder.Constant(input)}');
testCodegen_mex




