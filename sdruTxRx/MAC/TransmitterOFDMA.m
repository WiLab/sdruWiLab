function [frame,bitsToTx] = TransmitterOFDMA(messageUE1,messageUE2,desiredUser,dataType,numTxFrames)
% TransmitterOFDMA  OFDMA tramsnsmitter function for bit conversion, error
% checking and user multiplexing for 2 users.
%   bitsToTx = TransmitterOFDMA(messageUE1,messageUE2,desiredUser) converts
%   both messages to an OFDMA frame in bits, and displays the transmitted
%   message of 'desiredUser' with additional text.

objTx = TxOFDMA;
objTx.desiredUser = desiredUser;
objTx.dataType = dataType;

N = objTx.symbolsPerFrame;

PHYTx = PHYTransmitter;
PHYTx.NumDataSymbolsPerFrame = N;

bitsToTx = step(objTx,messageUE1,messageUE2);

frame = step(PHYTx, bitsToTx);

if numTxFrames > 0
    for i = 1:numTxFrames-1
        frame = step(PHYTx, bitsToTx);
    end
else
    while 1
        frame = step(PHYTx, bitsToTx);
    end
end


end