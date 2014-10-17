
framesToCapture = 1e4;

SamplingRate = 1e6;
DecimationFactor = 100e6/SamplingRate;

RX = comm.SDRuReceiver('192.168.10.2', ...
    'CenterFrequency', 900e6, ...
    'DecimationFactor', DecimationFactor,...
    'FrameLength',1520,...
    'EnableBurstMode',true,...
    'NumFramesInBurst',framesToCapture);


capturedData = complex(zeros(RX.FrameLength,framesToCapture));

index = 1;

while index<=framesToCapture
    [tmp,len] = step(RX);
    if len==0
        continue;
    end
    if ~(sum(abs(real(tmp)))==0)
        capturedData(:,index) = tmp;
        index = index + 1;
    end
end

release(RX);

save('Captured.mat','capturedData');
    
