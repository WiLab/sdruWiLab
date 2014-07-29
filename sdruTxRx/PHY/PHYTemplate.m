

% Create bits input vector
% Always size 48 x N matrix
% Input is assumed to be 1 frame, N OFDM symbols
% Columns == OFDM Symbol
% Row == Subbarrier

N = 12;
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
RX.ReceiveBufferLength=length(frame);% Need some additional space on input, since algorithms need to shift input
frame = [frame;zeros(RX.ReceiveBufferLength-length(frame),1)]; % correction algorithms require more data than just 1 frame

%for k=0:10000
%    k
%frame2 = [zeros(k,1);frame;frame;frame;zeros(10000,1)];
%% Receive
%output = step(RX,frame2);
%end

frame2 = [frame; zeros(1000,1)];
output = step(RX,frame2);

% Evaluate
errors = biterr(input,output);
disp(['Bit Errors: ',num2str(errors)]);


frame = testCodegen( input, N ,false);
frame2 = [frame;zeros(1000,1)];
output = testCodegen2( frame2,N, length(frame),false);

% Evaluate
errors = biterr(input,output);
disp(['Bit Errors: ',num2str(errors)]);



%% Transmitter Codegen
%input = (randi([0 1],48,4));
if isunix
	compilesdru('testCodegen','MEX','-args','{coder.Constant(input),coder.Constant(N),coder.Constant(false)}');
else
	codegen testCodegen -args {coder.Constant(input),coder.Constant(N),coder.Constant(false)};
end
x=testCodegen_mex(input,N,false);
y=testCodegen(input,N,false);

if abs(mean(x-y))<eps
	disp('TX Codegen Operational');
else
	disp('TX Codegen Failed');
end

% Receiver Codegen
testCodegen2( frame2, N,length(frame),false);

if isunix
compilesdru('testCodegen2','mex',...
	'-args',...
	'{frame2,coder.Constant(N),coder.Constant(length(frame)),coder.Constant(false)}');
else
	codegen testCodegen2 -args {frame2,coder.Constant(N),coder.Constant(length(frame)),coder.Constant(false)};

end

output = testCodegen2_mex(frame2,N,length(frame),false);

% Evaluate
errors = biterr(input,output);
disp(['Codegen Bit Errors: ',num2str(errors)]);

break
% Test USRP Codegen
if isunix
	compilesdru('testCodegen','MEX','-report','-args','{coder.Constant(input),coder.Constant(N),coder.Constant(true)}');
	compilesdru('testCodegen2','mex','-report',...
	'-args',...
	'{frame,coder.Constant(N),coder.Constant(length(frame)),coder.Constant(true)}');
else
	codegen testCodegen -args {coder.Constant(input),coder.Constant(N),coder.Constant(true)};
	codegen testCodegen2 -args {fframe,coder.Constant(N),coder.Constant(length(frame)),coder.Constant(true)};
end
disp('USRP Codegen Completed Successfully');


