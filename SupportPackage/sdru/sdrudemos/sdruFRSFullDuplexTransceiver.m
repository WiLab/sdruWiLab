%% Family Radio Service (FRS) Full-Duplex Transceiver with USRP(R) Hardware
% This example shows how to use two Universal Software Radio Peripheral(R)
% devices exploiting SDRu (Software Defined Radio USRP(R) System objects to
% perform full duplex communication by transmitting/receiving recorded
% audio simultaneously using MATLAB(R) and the FRS protocol.  For a more
% detailed description of FRS processing, see
% <matlab:edit('sdruFRSGMRSTransmitter.m') sdruFRSGMRSTransmitter> and
% <matlab:edit('sdruFRSGMRSReceiver.m') sdruFRSGMRSReceiver>.
%
% In order to run this example, you need two host computers connected to
% two USRP(R) radios with daughterboards (e.g. SBX or WBX) that support
% full-duplex operation and the FRS band. Using this script,
% <matlab:edit('sdruFRSFullDuplexTransceiver.m')
% sdruFRSFullDuplexTransceiver>, the first USRP(R) radio sends one audio
% signal at 467.6125 MHz, and simultaneously receives another audio signal
% at 467.6625 MHz.  The second USRP(R) radio sends at 467.6625 MHz and
% receives at 467.6125 MHz using the MATLAB script
% <matlab:edit('sdruFRSFullDuplexTransceiver_2.m')
% sdruFRSFullDuplexTransceiver_2>.  Each host computer plays the received
% audio signal on its audio device.
%
%   Copyright 2013 The MathWorks, Inc.

%% Initialization
% The <matlab:edit('configureFDTx.m') configureFDTx> and
% <matlab:edit('configureFDRx.m') configureFDRx> MATLAB scripts initialize
% simulation parameters and generate parameter structures for the FRS
% transmitter and receiver systems.
%
% The frequency calibration compensation value, rfRxFreqCorrection, can be
% determined for your USRP(R) environment by running the MATLAB script
% <matlab:edit('sdruFrequencyCalibrationReceiver.m')
% sdruFrequencyCalibrationReceiver> while sending a sine wave at the RF
% receiver center frequency, rfRxFreq, with MATLAB script
% <matlab:edit('sdruFrequencyCalibrationTransmitter.m')
% sdruFrequencyCalibrationTransmitter>.

% Transmitter Initialization
rfTxFreq           = 467.6125e6; % RF Transmitter Center Frequency (Hz)
paramsTx           = configureFDTx(rfTxFreq);

% Receiver Initialization
rfRxFreq           = 467.6625e6; % RF Receiver Center Frequency (Hz)
rfRxFreqCorrection = -4e3; % Frequency calibration compensation value (Hz)
rfRxFreqActual     = rfRxFreq + rfRxFreqCorrection;
paramsRx           = configureFDRx(rfRxFreqActual);

%% Transmit One Audio File Using FRS Waveform
%
% This example uses a source object to generate data signals for the
% transmitter. The source signal is a multimedia audio file. When using a
% multimedia file, the sampling rate needs to be converted to 8 kHz;
% therefore, the FRSGMRSDemoAudioSource object employs a rate conversion
% filter to convert the 22.5 kHz signal to an 8 kHz signal.

% Create a data source to transmit the contents of a sound file at a
% sampling frequency of 8 kHz.
hSource = FRSGMRSDemoSource('Sound file', paramsTx.SampleRate);
hSource.AudioFileName = 'speech_dft.avi';

% The Continuous Tone-Coded Squelch System (CTCSS) filters out
% undesired communication or interference from these other users by
% generating a tone between 67 Hz and 250 Hz and transmitting it along with
% the source signal.
hCTCSS = dsp.SineWave(paramsTx.CTCSSAmplitude, ...
                      paramsTx.ToneFrequencies(paramsTx.CTCSSCode), ...
                      'SampleRate',       paramsTx.SampleRate, ...
                      'SamplesPerFrame',  paramsTx.SourceFrameLength, ...
                      'OutputDataType',   'single');
                  
% The interpolator and FM modulator convert the sampling rate of the sum of
% the modulating signal and the CTCSS tone to match the USRP(R) hardware
% sampling rate of 200 kHz.
hInterpolator = dsp.FIRInterpolator(paramsTx.InterpolationFactor, ...
                                    paramsTx.Numerator);
                            
hIntegrator = dsp.IIRFilter('Structure',    'Direct form I', ...
                                'Numerator',    1, ...
                                'Denominator',  [1 -1]);

% The SDRu transmitter sets the interpolation factor to 500 so that the
% example uses round numbers to convert the sampling rate from 8 kHz to 200
% kHz. The IP address of the System object must match that of the connected
% USRP(R) radio.
hSDRuTx = comm.SDRuTransmitter(...
               'IPAddress',              '192.168.10.2', ...
               'CenterFrequency',        paramsTx.CenterFrequency,...
               'Gain',                   paramsTx.USRPGain, ...
               'InterpolationFactor',    paramsTx.USRPInterpolationFactor)

%% Receive Another Audio File Using FRS Demodulation 
%
% Create objects to resample the input to 200 kHz, perform automatic gain
% control, perform channel selectivity filtering, FM demodulate, resample
% to an 8 kHz audio output, perform CTCSS decoding, filter out the CTCSS
% tones, then send the signal to an audio output device.

% SDRu Receiver
hSDRuRx = comm.SDRuReceiver(...
    'IPAddress',             '192.168.10.2', ...
    'CenterFrequency',       paramsRx.CenterFrequency,...
    'Gain',                  paramsRx.USRPGain, ...
    'DecimationFactor',      paramsRx.USRPDecimationFactor, ...
    'SampleRate',            paramsRx.FrontEndSampleRate, ...
    'FrameLength',           paramsRx.USRPFrameLength, ...
    'OutputDataType',        'single')

% AGC
hAGC = comm.AGC('UpdatePeriod', 200, ...
                'StepSize',     0.1);

% Low pass filter for channel separation
hChanFilt = dsp.FIRFilter('Numerator', paramsRx.ChannelFilterNumerator);
                          
% FM demodulator using phase difference of consecutive complex samples
hDelay = dsp.Delay;

% Decimation filter to resample to 8 kHz
hDecimator = dsp.FIRDecimator(paramsRx.DecimationFactor, paramsRx.Numerator);

% The CTCSS decoder compares the estimated received code with the
% preselected code and then sends the signal to the audio device if the two
% codes match.
hDecoder = FRSGMRSDemoCTCSSDecoder(...
          'MinimumBlockLength', paramsRx.CTCSSDecodeBlockLength, ...
          'SampleRate',         paramsRx.SampleRate);

% High pass filter to filter out CTCSS tones
hAudioFilt = dsp.FIRFilter('Numerator', paramsRx.AudioFilterNumerator);


% Audio player
hAudio = dsp.AudioPlayer(paramsRx.SampleRate);

%% Stream Processing Loop

% Perform stream processing if a radio is found.
radio = findsdru(hSDRuRx.IPAddress);
if (strcmp(radio.Status,'Success'))
    % Loop until the example reaches the target stop time.
    timeCounter = 0;
    
    while timeCounter < paramsTx.StopTime
        % Transmitter stream processing
        % -----------------------------------------------------------------
        data_tx = step(hSource);  % Generate audio waveform 
        dataWTone = data_tx + step(hCTCSS);  % Add CTCSS tones
        outResamp = step(hInterpolator, dataWTone);  % Resample to 200 kHz

        % Create integrated phase for FM modulation
        outInteg  = step(hIntegrator, outResamp); 
        % FM modulation
        outMod    = exp(1i*paramsTx.FrequencySensitivityGain * outInteg);
        step(hSDRuTx, outMod); % Transmit to USRP(R) radio
        
        
        % Receiver stream processing
        % -----------------------------------------------------------------
        [data_rx, len_rx] = step(hSDRuRx);
        if len_rx > 0
            outAGC      = step(hAGC, data_rx); % AGC
            outChanFilt = step(hChanFilt, outAGC); % Adjacent channel filtering
            rxAmp       = mean(abs(outChanFilt));
            if rxAmp > paramsRx.DetectionThreshold
                outThreshold = outChanFilt;
            else
                outThreshold = complex(single(zeros(paramsRx.USRPFrameLength, 1)));
            end
                     
            xDelay  = step(hDelay, outThreshold);
            outFMDemod  = angle(xDelay .* conj(outThreshold)); % FM demodulate
            outDecim  = step(hDecimator, outFMDemod); % Resample to 8 kHz
            
            % CTCSS decode and conditionally send to audio output
            rcvdCode = step(hDecoder, outDecim); 
            if (rcvdCode == paramsRx.CTCSSCode) || (paramsRx.CTCSSCode == 0)
                rcvdSig = outDecim;
            else
                rcvdSig = single(zeros(paramsRx.AudioFrameLength, 1));
            end
            
            audioSig = step(hAudioFilt, rcvdSig); % Filter out CTCSS tones
            step(hAudio, audioSig); % Audio output 
            timeCounter = timeCounter + paramsRx.USRPFrameTime;
        end
    end
else
    warning(message('sdru:sysobjdemos:MainLoop'))
end

% Release all SDRu resources
release(hSDRuTx); clear hSDRuTx
release(hSDRuRx); clear hSDRuRx

%% Conclusion
% In this example, you used Communications System Toolbox(TM) System objects
% to perform full duplex transmission and reception using FRS waveforms and
% two USRP(R) radios.
%
%
%% Appendix
% The following scripts are used in this example.
%
% * <matlab:edit('configureFDTx.m') configureFDTx.m>
% * <matlab:edit('configureFDRx.m') configureFDRx.m>
% * <matlab:edit('sdruFRSFullDuplexTransceiver_2.m')
% sdruFRSFullDuplexTransceiver_2.m>
%
%% Copyright Notice
% Universal Software Radio Peripheral(R) and USRP(R) are trademarks of
% National Instruments Corp.
displayEndOfDemoMessage(mfilename)