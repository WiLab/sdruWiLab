function prmFreqCalibRx = configureFreqCalibRx(rfRxFreq, bbRxFreq)
% The function is called by sdruFrequencyCalibrationReceiver.m MATLAB
% script for System object initialization.

%   Copyright 2013 The MathWorks, Inc.

% SDRu Receiver System object
prmFreqCalibRx.RxCenterFrequency = rfRxFreq; 
prmFreqCalibRx.ADCSampleRate     = 100e6; 
prmFreqCalibRx.Gain              = 30;
prmFreqCalibRx.DecimationFactor  = 500; 
prmFreqCalibRx.FrameLength       = 4096; 
prmFreqCalibRx.TotalFrames       = 8000;
prmFreqCalibRx.RxSineFrequency   = bbRxFreq; 
prmFreqCalibRx.Fs                = prmFreqCalibRx.ADCSampleRate/...
                                   prmFreqCalibRx.DecimationFactor;
prmFreqCalibRx.OutputDataType    = 'double'; 

% Coarse Freq Offset estimation 
prmFreqCalibRx.FocFFTSize        = 2048;    

% EOF
