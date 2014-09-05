function  paramsTx = configureFDTx(rfTxFreq)

%   Copyright 2013 The MathWorks, Inc.

paramsTx.StopTime        = 30;  

%% USRP
paramsTx.CenterFrequency          = rfTxFreq; % RF Transmitter Center Frequency
paramsTx.USRPClockRate            = 100e6;  % Hz
paramsTx.USRPInterpolationFactor  = 500;   
paramsTx.USRPGain                 = 15;      % dB
paramsTx.USRPFrameLength          = 4000; 
paramsTx.FrontEndSampleRate       = paramsTx.USRPClockRate ...
                                    / paramsTx.USRPInterpolationFactor; 
paramsTx.InterpolationFactor      = 25; 
paramsTx.SampleRate               = paramsTx.FrontEndSampleRate ...
                                    / paramsTx.InterpolationFactor;
paramsTx.SourceFrameLength        = paramsTx.USRPFrameLength ...
                                    / paramsTx.InterpolationFactor;     
paramsTx.SourceFrameTime          = (paramsTx.SourceFrameLength ...
                                    / paramsTx.SampleRate);    % Seconds
                                                  
%% CTCSS
paramsTx.CTCSSCode  = 5; 
paramsTx.CTCSSAmplitude = 0.15;
paramsTx.ToneFrequencies           = ...
  [67.0 71.9 74.4 77.0 79.7 82.5 85.4 88.5  91.5 94.8 97.4  ...
   100.0 103.5 107.2 110.9 114.8 118.8 123.0 127.3 131.8 136.5 141.3 ...
               146.2 151.4 156.7 162.2 167.9 173.8 179.9 186.2 192.8 ...
   203.5 210.7 218.1 225.7 233.6 241.8 250.3]';

%% Filter   
hMFilt                            = mfilt.firinterp(paramsTx.InterpolationFactor);
paramsTx.Numerator                = hMFilt.Numerator; 
paramsTx.FrequencySensitivityGain = 2500 * 2 * pi / paramsTx.FrontEndSampleRate;

%% Audio 
paramsTx.AudioInterpolationFactor  = 160; 
paramsTx.AudioDecimationFactor     = 441; 
paramsTx.AudioFrameLength          = paramsTx.SourceFrameLength ...
                                   * paramsTx.AudioDecimationFactor ...
                                   / paramsTx.AudioInterpolationFactor; 
% [EOF]