function [receivedMessage,receivedBits] = ReceiverOFDMA(receivedFrame,desiredUser,dataType,numRxFrames)
% ReceiverOFDMA  OFDMA receiver function for conversion from bits, error
% checking and user demultiplexing for 2 users.
%   receivedMessage = ReceiverOFDMA(receivedBits,desiredUser,dataType)
%   returns the received message of desiredUser from receivedBits as
%   characters, and displays it in the data type defined by dataType: 'c'
%   for character and 'u' for uint8.

% Create object handles
[objRx,PHYRx] = createObjects(receivedFrame,desiredUser,dataType);
reshapedFrame = [receivedFrame;zeros(PHYRx.ReceiveBufferLength-length(receivedFrame),1)];

receivedBits = step(PHYRx, reshapedFrame);
receivedMessage = step(objRx,receivedBits);

if numRxFrames > 0
    for i = 1:numRxFrames-1
        receivedBits = step(PHYRx, reshapedFrame);
        receivedMessage = step(objRx,receivedBits);
    end
else
    while 1
        receivedBits = step(PHYRx, reshapedFrame);
        receivedMessage = step(objRx,receivedBits);
    end
end

release(objRx);
release(PHYRx);

end

function [objRx,PHYRx] = createObjects(receivedFrame,desiredUser,dataType)
% Function that creates object handles

objRx = RxOFDMA;
objRx.desiredUser = desiredUser;
objRx.dataType = dataType;

PHYRx = PHYReceiver;
PHYRx.HWAttached = false;
PHYRx.NumFrames = 1;
PHYRx.NumDataSymbolsPerFrame = objRx.symbolsPerFrame;
PHYRx.SamplingFrequency = 10e6;
PHYRx.requiredPeaks = 5;
PHYRx.PeakThreshold = 0.7;

PHYRx.ReceiveBufferLength=1*length(receivedFrame);

end