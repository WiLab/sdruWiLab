function output = GetUSRPData()

persistent SDRuReceiver Buffer ReceiveBufferLength

FrameLength = 1920;

if isempty(SDRuReceiver) || isempty(Buffer) || isempty(ReceiveBufferLength)
    
    SamplingFrequency = 1e6;
    
    CenterFrequency = 900e6;
    
    NumDataSymbolsPerFrame = 20; FFTLength = 64; CyclicPrefixLength = 16;
    Preambles_len = 320;
    
    %FrameLength = NumDataSymbolsPerFrame*(FFTLength+CyclicPrefixLength)+Preambles_len;

    
    ReceiveBufferLength = FrameLength*2;
    
    Buffer = complex(zeros(ReceiveBufferLength,1));
    
    BufferReal = single(zeros(2*ReceiveBufferLength,1));
    
    %% Setup Hardware Receiver
    USRPADCSamplingRate = 100e6;
    DecimationFactor = floor(USRPADCSamplingRate/SamplingFrequency);
    offsetCompensationValue = 0;% Get from calibration
    
    % USRP
    SDRuReceiver = comm.SDRuReceiver( '192.168.10.2', ...
        'CenterFrequency',      CenterFrequency + offsetCompensationValue, ...
        'DecimationFactor',     DecimationFactor,...
        'FrameLength',          FrameLength,...
        'OutputDataType',       'single',...
        'Gain',                 18,...
        'SampleRate',           SamplingFrequency);
end

output = 1;

while 1
    
    % Get data from USRP or Input
    Buffer(1:FrameLength) = Buffer(FrameLength+1:end);% Shift old samples down
    Buffer(FrameLength+1:end) =  step(SDRuReceiver);% Shift in new samples
    
%     NumDataSymbolsPerFrame = 16; FFTLength = 64; CyclicPrefixLength = 16;
%     Preambles_len = 320;
%     FrameLength = NumDataSymbolsPerFrame*(FFTLength+CyclicPrefixLength)+Preambles_len;
%     ReceiveBufferLength = FrameLength*2;
%     
%     Buffer=complex((1:FrameLength*2).',(1:FrameLength*2).');
    
%    BufferR = real(Buffer);
%    BufferI = imag(Buffer);
    
%    BufferReal = single(reshape([BufferR BufferI]',2*ReceiveBufferLength,1));

    if sum(abs(Buffer))>0
        BufferRow = Buffer.';
        coder.ceval('add2q',coder.ref(BufferRow));
    end
    
end



end
