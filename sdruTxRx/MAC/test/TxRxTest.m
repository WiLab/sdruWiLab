

% message_UE1 = '1st Message';
% message_UE2 = 'Second Message';

message_UE1 = uint8([1 0 1 2 53 53 255 300]); % The last number will be wrong
message_UE2 = uint8([2 0 1 2 53 53 255 300]); % The last number will be wrong

objTx = TxOFDMA;

N = objTx.symbolsPerFrame;

PHYTx = PHYTransmitter;
PHYTx.NumDataSymbolsPerFrame = N;

objRx = RxOFDMA;
PHYRx = PHYReceiver;
PHYRx.NumFrames = 1;
PHYRx.NumDataSymbolsPerFrame = N;

bitsToTx = step(objTx,message_UE1,message_UE2);

frame = step(PHYTx, bitsToTx);

PHYRx.ReceiveBufferLength=length(frame)+1;

frame = [frame;zeros(PHYRx.ReceiveBufferLength-length(frame),1)];

receivedBits = step(PHYRx, frame);

receivedMessage = step(objRx,receivedBits);

fprintf('\nHeader of received message: \n');
disp(objRx.lastHeader);

fprintf('\nTransmitted message with additional text: \n');
disp(objTx.messageSent(objRx.desiredUser,:));

errors = biterr(bitsToTx,receivedBits);
fprintf('\n');
disp(['Bit Errors: ',num2str(errors)]);

fprintf('\nThe type of the received message is: \n');
disp(class(objRx.lastMessage));



