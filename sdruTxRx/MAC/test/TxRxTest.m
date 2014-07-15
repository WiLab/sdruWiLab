

message_UE1 = '1st Message';
message_UE2 = 'Second Message';

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
disp(objTx.messageText(objRx.desiredUser,:));

errors = biterr(bitsToTx,receivedBits);
disp(['Bit Errors: ',num2str(errors)]);




