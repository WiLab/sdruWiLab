function [frame,bitsToTx] = TransmitterOFDMA(messageUE1,messageUE2,dataType,numTxFrames)
% TransmitterOFDMA  OFDMA tramsnsmitter function for bit conversion, error
% checking and user multiplexing for 2 users.
%   bitsToTx = TransmitterOFDMA(messageUE1,messageUE2,numTxFrames) converts
%   both messages to an OFDMA frame in bits, and transmits this same frame
%   numTxFrames times.

[objTx,PHYTx] = createObjects(dataType);

% Step objects to initialize matrices
bitsToTx = step(objTx,messageUE1(1,:),messageUE2(1,:));
frame = step(PHYTx, bitsToTx);

if numTxFrames > 0
    
    for transmittedFrames = 1:numTxFrames
        for row = 1:size(messageUE1,1)
            bitsToTx = step(objTx,messageUE1(row,:),messageUE2(row,:));
            frame = step(PHYTx, bitsToTx);
        end
    end
    
else
    
    while 1
        for row = 1:size(messageUE1,1)
            bitsToTx = step(objTx,messageUE1(row,:),messageUE2(row,:));
            frame = step(PHYTx, bitsToTx);
        end
    end
    
end

release(objTx);
release(PHYTx);

end

function [objTx,PHYTx] = createObjects(dataType)
% Function that creates objects and sets the data type, symbols per frame
% and sampling frequency properties

objTx = TxOFDMA;
objTx.dataType = dataType;

N = objTx.symbolsPerFrame;

PHYTx = PHYTransmitter;
PHYTx.NumDataSymbolsPerFrame = N;
PHYTx.SamplingFrequency = 10e6;

end