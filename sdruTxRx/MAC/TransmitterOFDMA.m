function bitsToTx = TransmitterOFDMA(messageUE1,messageUE2,desiredUser,dataType)
% TransmitterOFDMA  OFDMA tramsnsmitter function for bit conversion, error
% checking and user multiplexing for 2 users.
%   bitsToTx = TransmitterOFDMA(messageUE1,messageUE2,desiredUser) converts
%   both messages to an OFDMA frame in bits, and displays the transmitted
%   message of 'desiredUser' with additional text.

obj = TxOFDMA;
obj.desiredUser = desiredUser;
obj.dataType = dataType;

bitsToTx = step(obj,messageUE1,messageUE2);

end