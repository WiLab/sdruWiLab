function bitsToTx = TransmitterOFDMA(messageUE1,messageUE2,desiredUser)
% TransmitterOFDMA  

objTx = TxOFDMA;

bitsToTx = step(objTx,messageUE1,messageUE2);

fprintf('\nTransmitted message with additional text: \n');
fprintf('%s\n\n', objTx.messageSent(desiredUser,:));

end