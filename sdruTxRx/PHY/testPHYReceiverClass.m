
inputPayloadMessage = 'HelloDave';
samplingFreq = 5e6;

[~,hPreambleDemod, dataToTx, tx ] = generateOFDMSignal_TX2(inputPayloadMessage,samplingFreq, 1, 1);% 30 Dupe frames created (NOTE! author shouldcreate shorter simpler function)


h=PHYReceiver;
h.NumFrames=1;
h.MessageCharacters = tx.messageCharacters;
h.FrameLength = tx.frameLength;
h.numDataSymbols = hPreambleDemod.NumSymbols;
h.padBits = tx.padBits;
step(h,dataToTx)