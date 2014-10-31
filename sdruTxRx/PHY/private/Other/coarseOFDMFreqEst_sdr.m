function [ rFreqShifted, estimate ] = coarseOFDMFreqEst_sdr( rFrame, tx, estimate, numFreqToAverage)
%#codegen
% coarseOFDMFreqEst: Frequency Correction based on the Schmidl and Cox
% method, utilizing halves of the short preamble from the 802.11a standard
L=tx.FFTLength/2;
P = sum( conj(rFrame(1:L)  ) .* rFrame(1+L:L*2)  ); %Cross-correlate preamble
phi = angle(P); % Determine phase angle between preamble halves

if numProcessed < numFreqToAverage% Buffer not full
    frequency(numProcessed) = phi/(2*pi*L/samplingFreq); % Convert angle to frequency
else
    frequency = [estimate.frequency(2:end);0];
    frequency(end) = phi/(2*pi*L/samplingFreq);
end

% Apply frequency estimate
rFreqShifted = freqCorrectOFDM( tx, rFrame, numFreqToAverage  );

end

function [ rFreqShifted, estimate  ] = freqCorrectOFDM( tx, estimate, rFrame, numFreqToAverage  )
% freqCorrectOFDM: Apply frequency offset to input signal, this offset can
% be generated through a moving average if enabled

% Enable moving averages for estimates
if numProcessed < numFreqToAverage % Buffer not full
    
    frequencyMA = mean(estimate.frequency(1:numProcessed));
    
    % Apply frequency correction
    t = 0: 1/samplingFreq : (length(rFrame)-1)/samplingFreq;
    rFreqShifted = exp(1i*frequencyMA*t.').*rFrame;
    
else % Full buffer
    
    frequencyMA = mean(frequency);
    
    % Apply frequency correction
    t = 0: 1/tx.samplingFreq : (length(rFrame)-1)/samplingFreq;
    rFreqShifted = exp(1i*frequencyMA*t.').*rFrame;
    
end


end
