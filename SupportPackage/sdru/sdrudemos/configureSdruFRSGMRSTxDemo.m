function params = configureSdruFRSGMRSTxDemo(channel, CTCSSCode)
%configureSdruFRSGMRSTxDemo Configure the SDRu FRS/GMRS transmitter
%MATLAB(R) example sdruFRSGMRSTransmitter.

% Copyright 2011-2012 The MathWorks, Inc.

% Simulation Parameters
params                 = getParamsSdruFRSGMRSTxDemo(channel, CTCSSCode);
params.StopTime        = 10;                        % Seconds
params.SourceFrameTime = (params.SourceFrameLength / params.SampleRate); 
                                                    % Seconds
