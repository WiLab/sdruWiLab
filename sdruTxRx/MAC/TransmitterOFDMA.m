function bitsToTx = TransmitterOFDMA(messageUE1,messageUE2,desiredUser)
% TransmitterOFDMA  OFDMA tramsnsmitter function for bit conversion, error
% checking and user multiplexing for 2 users.
%   bitsToTx = TransmitterOFDMA(messageUE1,messageUE2,desiredUser) converts
%   both messages to an OFDMA frame in bits, and displays the transmitted
%   message of 'desiredUser' with additional text.

objTx = TxOFDMA;

bitsToTx = step(objTx,messageUE1,messageUE2);

fprintf('\nTransmitted message with additional text: \n');
fprintf('%s\n\n', objTx.messageSent(desiredUser,:));

end