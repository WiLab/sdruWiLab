
SamplingRate = 10e6;
DecimationFactor = 100e6/SamplingRate;

RX = comm.SDRuReceiver('192.168.10.2', ...
    'CenterFrequency', 900e6, ...
    'DecimationFactor', DecimationFactor,...
    'FrameLength',1920,...
    'EnableBurstMode',true,...
    'NumFramesInBurst',10);

framesToCapture = 100;

capturedData = complex(zeros(RX.FrameLength*RX.NumFramesInBurst,framesToCapture)));

for k=1:framesToCapture
    capturedData(:,k) = step(RX);
end

save('Captured.mat','capturedData');
    
