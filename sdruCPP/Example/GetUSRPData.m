function output = GetUSRPData()

persistent SDRuReceiver ReceiveBufferLength

if isempty(SDRuReceiver) || isempty(ReceiveBufferLength)
    
    SamplingFrequency = 0.5e6;
    
    CenterFrequency = 2.2e9;
    
    ReceiveBufferLength = 1120;
    
    %% Setup Hardware Receiver
    USRPADCSamplingRate = 100e6;
    DecimationFactor = floor(USRPADCSamplingRate/SamplingFrequency);
    offsetCompensationValue = 0;% Get from calibration
    
    % USRP
    SDRuReceiver = comm.SDRuReceiver( '192.168.20.2', ...
        'CenterFrequency',      CenterFrequency + offsetCompensationValue, ...
        'DecimationFactor',     DecimationFactor,...
        'FrameLength',          floor(1120/2),...
        'OutputDataType',       'single',...
        'Gain',                 18,...
        'SampleRate',           SamplingFrequency);
end

output = 1;
halfBuffLen = floor(1120/2);
Buffer = complex(single(zeros(2*1120,1)));
BufferReal = single(zeros(4*1120,1));

while 1
    % Get data from USRP or Input
    Buffer(1:halfBuffLen*3) = Buffer(halfBuffLen+1:end);% Shift old samples down
    Buffer(halfBuffLen*3+1:end) =  step(SDRuReceiver);% Shift in new samples
    
    BufferR = real(Buffer);
    BufferI = imag(Buffer);
    
    BufferReal = single(reshape([BufferR BufferI]',4*1120,1));
    
	Buffer2 = Buffer;

    coder.ceval('add2q',coder.ref(BufferReal));
    %coder.ceval('add2q',coder.ref(Buffer2));
    
end



end
