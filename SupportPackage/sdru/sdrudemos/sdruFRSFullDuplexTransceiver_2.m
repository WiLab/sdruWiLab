%% Family Radio Service (FRS) Full-Duplex Transceiver with USRP(R) Hardware
% This example shows how to use two Universal Software Radio Peripheral(R)
% devices exploiting SDRu (Software Defined Radio USRP(R) System objects to
% perform full duplex communication by transmitting/receiving recorded
% audio simultaneously using MATLAB(R) and the FRS protocol.  For a more
% detailed description of FRS processing, see sdruFRSGMRSTransmitter.m and
% sdruFRSGMRSReceiver.m.  For a more detailed description of the full
% duplex operation of this example, see sdruFRSFullDuplexTransceiver.m.

%   Copyright 2013 The MathWorks, Inc.

%% Initialization

% Transmitter Initialization
rfTxFreq           = 467.6625e6; % RF Transmitter Center Frequency (Hz)
paramsTx           = configureFDTx(rfTxFreq);

% Receiver Initialization
rfRxFreq           = 467.6125e6; % RF Receiver Center Frequency (Hz)
rfRxFreqCorrection = -1.709e4;   % Frequency calibration compensation value (Hz)
rfRxFreqActual     = rfRxFreq + rfRxFreqCorrection;
paramsRx           = configureFDRx(rfRxFreqActual);

%% Transmit One Audio File Using FRS Waveform

hSource = FRSGMRSDemoSource('Sound file', paramsTx.SampleRate);
hSource.AudioFileName = 'speech_dft.avi';

hCTCSS = dsp.SineWave(paramsTx.CTCSSAmplitude, ...
                      paramsTx.ToneFrequencies(paramsTx.CTCSSCode), ...
                      'SampleRate',       paramsTx.SampleRate, ...
                      'SamplesPerFrame',  paramsTx.SourceFrameLength, ...
                      'OutputDataType',   'single');
                  
hInterpolator = dsp.FIRInterpolator(paramsTx.InterpolationFactor, ...
                                    paramsTx.Numerator);
                                
hIntegrator = dsp.IIRFilter('Structure',    'Direct form I', ...
                            'Numerator',    1, ...
                            'Denominator',  [1 -1]);

hSDRuTx = comm.SDRuTransmitter(...
               'IPAddress',              '192.168.10.2', ...
               'CenterFrequency',        paramsTx.CenterFrequency,...
               'Gain',                   paramsTx.USRPGain, ...
               'InterpolationFactor',    paramsTx.USRPInterpolationFactor)

%% Receive Another Audio File Using FRS Demodulation 

hSDRuRx = comm.SDRuReceiver(...
    'IPAddress',             '192.168.10.2', ...
    'CenterFrequency',       paramsRx.CenterFrequency,...
    'Gain',                  paramsRx.USRPGain, ...
    'DecimationFactor',      paramsRx.USRPDecimationFactor, ...
    'SampleRate',            paramsRx.FrontEndSampleRate, ...
    'FrameLength',           paramsRx.USRPFrameLength, ...
    'OutputDataType',        'single')

hAGC = comm.AGC('UpdatePeriod', 200, ...
                'StepSize',     0.1);

hChanFilt = dsp.FIRFilter('Numerator', paramsRx.ChannelFilterNumerator);

hDelay = dsp.Delay;

hDecimator = dsp.FIRDecimator(paramsRx.DecimationFactor, paramsRx.Numerator);

hDecoder = FRSGMRSDemoCTCSSDecoder(...
          'MinimumBlockLength', paramsRx.CTCSSDecodeBlockLength, ...
          'SampleRate',         paramsRx.SampleRate);

hAudioFilt = dsp.FIRFilter('Numerator', paramsRx.AudioFilterNumerator);

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
