function result = basic_RX(decimation)

result = 'Done';

x=dsp.SignalSink;
ObjSDRuReceiver = comm.SDRuReceiver( '192.168.10.2', ...
    'CenterFrequency',      2.2e9, ...
    'DecimationFactor',     double(decimation),...%18 best so far
    'FrameLength',          5120,...
    'OutputDataType',       'double',...
    'Gain',                 18);


fprintf('#####Decimation: %i ##############\n',int16(ObjSDRuReceiver.DecimationFactor));

for k=1:1e8

step(ObjSDRuReceiver);

end


end

