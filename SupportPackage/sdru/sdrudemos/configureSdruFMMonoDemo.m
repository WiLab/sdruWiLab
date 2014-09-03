function monoFM = configureSdruFMMonoDemo
%configureSdruFMMonoDemo Configure the SDRu Monophonic FM receiver
%MATLAB(R) example sdruFMMonoReceiver.

% Copyright 2011-2012 The MathWorks, Inc.

%#codegen

% Simulation Parameters
monoFM                 = getParamsSdruFMMonoDemo; % Demodulator parameters
monoFM.StopTime        = 10;                      % Seconds
monoFM.AudioFrameTime  = (monoFM.FrameLength * monoFM.InterpolationFactor ...
  / monoFM.DecimationFactor) / monoFM.AudioSampleRate; % Seconds

