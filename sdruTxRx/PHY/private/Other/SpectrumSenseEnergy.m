function [decision,meanEnergy] = SpectrumSenseEnergy( ObjAGC, ObjSDRuReceiver, tx )

            
% Collect Data
N = 2;
receiveBufferLength = 5120;
data = complex(zeros(receiveBufferLength,N));
for k = 1:N
    tmp = step(ObjSDRuReceiver);
    data(:,k) = step(ObjAGC,tmp);
end


meanEnergy = mean(mean(abs(fft(data(1:4096,:)))));
decision = 0;
threshold = 50;% Experimentally determined
if meanEnergy > threshold
   decision = 1; 
end


end