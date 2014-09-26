
framesToCapture = 8000;

SamplingRate = 5e6;
DecimationFactor = 100e6/SamplingRate;

RX = comm.SDRuReceiver('192.168.10.2', ...
    'CenterFrequency', 900e6, ...
    'DecimationFactor', DecimationFactor,...
    'FrameLength',1920,...
    'EnableBurstMode',true,...
    'NumFramesInBurst',framesToCapture);


capturedData = complex(zeros(RX.FrameLength,framesToCapture));

index = 1;

while index<=framesToCapture
    tmp = step(RX);
    if ~(sum(abs(real(tmp)))==0)
        capturedData(:,index) = tmp;
        index = index + 1;
    end
end

release(RX);

save('Captured.mat','capturedData');
    
