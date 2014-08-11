hConEnc = comm.ConvolutionalEncoder;
hMod = comm.DPSKModulator('BitInput',true);
hChan = comm.gpu.AWGNChannel('NoiseMethod', ...
            'Signal to noise ratio (SNR)', 'SNR',7);
hDemod = comm.DPSKDemodulator('BitOutput',true);                                  
hDec = comm.gpu.ViterbiDecoder('InputFormat','Hard','TracebackDepth',200);
% Delay in bits is TracebackDepth times the number of
% bits per symbol
   delay = hDec.TracebackDepth*...
              log2(hDec.TrellisStructure.numInputSymbols);
hError = comm.ErrorRate('ComputationDelay',3,'ReceiveDelay',delay);
    for counter = 1:20
      data = randi([0 1],30000,1);
      encodedData = step(hConEnc, data);
      modSignal = step(hMod, encodedData);
      receivedSignal = step(hChan, modSignal);
      demodSignal = step(hDemod, receivedSignal);
      receivedBits = step(hDec, demodSignal);
      errorStats = step(hError, data, receivedBits);
    end
 fprintf('Error rate = %f\nNumber of errors = %d\n', ...
 errorStats(1), errorStats(2))