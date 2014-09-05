function stereoFM = configureSdruFMStereoDemo
%configureSdruFMStereoDemo Configure the SDRu Stereo FM demodulator
%MATLAB(R) example sdruFMStereoReceiver.

% Copyright 2011-2012 The MathWorks, Inc.

% Simulation Parameters
stereoFM                = getParamsSdruFMStereoDemo; % Receiver parameters
stereoFM.StopTime       = 10;                        % Seconds
stereoFM.AudioFrameTime = (stereoFM.FrameLength ...
  * (stereoFM.RCAudioInterpFactor / stereoFM.RCAudioDecimFactor) ...
  * (stereoFM.RCDemodInterpFactor / stereoFM.RCDemodDecimFactor) ...
  / stereoFM.AudioSampleRate);                        % Seconds

