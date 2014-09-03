function paramsRx = configureFDRx(rfRxFreqActual)

%   Copyright 2013 The MathWorks, Inc.

paramsRx.StopTime        = 30;                                % Seconds

%% USRP
paramsRx.CenterFrequency      = rfRxFreqActual;
paramsRx.USRPClockRate        = 100e6;  % Hz
paramsRx.USRPDecimationFactor = 500;    % Hz
paramsRx.USRPGain             = 5;      % dB
paramsRx.USRPFrameLength      = 4000;   % Samples
paramsRx.FrontEndSampleRate   = paramsRx.USRPClockRate...
                             /paramsRx.USRPDecimationFactor;
paramsRx.USRPFrameTime        = (paramsRx.USRPFrameLength ...
                             / paramsRx.FrontEndSampleRate); % Seconds

%% CTCSS
paramsRx.CTCSSCode = 5; 
paramsRx.DetectionThreshold = 0.1; 
paramsRx.CTCSSDecodeBlockLength = 4000;
% CTCSS Frequencies
paramsRx.ToneFrequencies           = ...
  [67.0 71.9 74.4 77.0 79.7 82.5 85.4 88.5  91.5 94.8 97.4  ...
   100.0 103.5 107.2 110.9 114.8 118.8 123.0 127.3 131.8 136.5 141.3 ...
               146.2 151.4 156.7 162.2 167.9 173.8 179.9 186.2 192.8 ...
   203.5 210.7 218.1 225.7 233.6 241.8 250.3]';
%% Filter 
% Decimation filter to convert 200 kHz to 8 kHz
paramsRx.DecimationFactor  = 25;
paramsRx.SampleRate        = paramsRx.FrontEndSampleRate ...
                            / paramsRx.DecimationFactor;
hMFilt                   = mfilt.firdecim(paramsRx.DecimationFactor);
paramsRx.Numerator         = paramsRx.DecimationFactor*hMFilt.Numerator;

% 10 kHz lowpass filter for channel selectivity
fd = fdesign.lowpass;
fd.Specification = 'N,Fp,Ap,Ast';
fd.FilterOrder   = 32;
fd.Fpass         = 10e3 * 2/paramsRx.FrontEndSampleRate; % normalized cutoff
fd.Apass         = 1;                                    % dB passband ripple
fd.Astop         = 60;                                   % dB stopband attenuation
frs_channelFilt  = design(fd,'equiripple');
assignin('base', 'frs_channelFilt', frs_channelFilt);
paramsRx.ChannelFilterNumerator = frs_channelFilt.Numerator;


% Highpass filter for removing CTCSS tone
fd = fdesign.highpass;
normalizefreq(fd, false, paramsRx.SampleRate);
fd.Fpass               = 350; % Passband frequency in Hz
fd.Fstop               = 260; % Stopband frequency in HZ
fd.Apass               = 1;   % dB passband ripple
fd.Astop               = 40;  % dB stopband attenuation
frs_channelFilt        = design(fd,'equiripple');
paramsRx.AudioFilterNumerator = frs_channelFilt.Numerator;

%% Audio
paramsRx.GoertzelCoefficients   = ...
      2 * cos (2 * pi * paramsRx.ToneFrequencies / paramsRx.SampleRate);
paramsRx.AudioFrameLength = paramsRx.USRPFrameLength ...
                            / paramsRx.DecimationFactor;
% [EOF]