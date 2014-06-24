%function testPHYReceiverClass
inputPayloadMessage = 'HelloDave';
samplingFreq = 5e6;


[~,hPreambleDemod, dataToTx, tx ] = generateOFDMSignal_TX2(inputPayloadMessage,samplingFreq, 1, 1);% 30 Dupe frames created (NOTE! author shouldcreate shorter simpler function)



compilesdru('testCodegen2','mex','-args','{ dataToTx, 1, coder.Constant(tx.messageCharacters), coder.Constant(tx.frameLength), coder.Constant(hPreambleDemod.NumSymbols) ,coder.Constant(tx.padBits)}')
testCodegen2_mex( dataToTx, 1,tx.messageCharacters, tx.frameLength, hPreambleDemod.NumSymbols ,tx.padBits)

%ih=PHYReceiver;
%h.NumFrames=1;
%h.MessageCharacters = tx.messageCharacters;
%h.FrameLength = tx.frameLength;
%h.numDataSymbols = hPreambleDemod.NumSymbols;
%h.padBits = tx.padBits;
%step(h,dataToTx)
%end
