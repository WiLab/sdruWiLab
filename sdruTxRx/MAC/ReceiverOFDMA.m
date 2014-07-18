function [receivedMessage,receivedBits] = ReceiverOFDMA(receivedFrame,desiredUser,dataType)
% ReceiverOFDMA  OFDMA receiver function for conversion from bits, error
% checking and user demultiplexing for 2 users.
%   receivedMessage = ReceiverOFDMA(receivedBits,desiredUser,dataType)
%   returns the received message of desiredUser from receivedBits as
%   characters, and displays it in the data type defined by dataType: 'c'
%   for character and 'u' for uint8.

objRx = RxOFDMA;
objRx.desiredUser = desiredUser;
objRx.dataType = dataType;

PHYRx = PHYReceiver;
PHYRx.NumFrames = 1;
PHYRx.NumDataSymbolsPerFrame = objRx.symbolsPerFrame;

PHYRx.ReceiveBufferLength=length(receivedFrame)+1;

reshapedFrame = [receivedFrame;zeros(PHYRx.ReceiveBufferLength-length(receivedFrame),1)];

receivedBits = step(PHYRx, reshapedFrame);

receivedMessage = step(objRx,receivedBits);

end