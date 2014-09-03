function params = configureSdruFRSGMRSRxDemo(channel, CTCSSCode, ...
  detectionThreshold)
%configureSdruFRSGMRSRxDemo Configure the SDRu FRS/GMRS receiver MATLAB(R)
%example sdruFRSGMRSReceiver.

% Copyright 2011-2012 The MathWorks, Inc.

% Simulation Parameters
params                 = getParamsSdruFRSGMRSRxDemo(channel, CTCSSCode, ...
  detectionThreshold);
params.StopTime        = 10;                                % Seconds
params.USRPFrameTime   = (params.USRPFrameLength ...
                              / params.FrontEndSampleRate); % Seconds
