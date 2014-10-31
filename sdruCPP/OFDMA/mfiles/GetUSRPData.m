function BufferColumn = GetUSRPData()

persistent SDRuReceiver Buffer ReceiveBufferLength

% Additional attributes
%NumDataSymbolsPerFrame = 15;
%FFTLength = 64;
%CyclicPrefixLength = 16;
%PreambleLength = 320;
%FrameLength = NumDataSymbolsPerFrame*(FFTLength+CyclicPrefixLength)+PreambleLength;
FrameLength = 15*(64+16)+320; % Must be constant for CG

if isempty(SDRuReceiver) || isempty(Buffer) || isempty(ReceiveBufferLength)
        
    % USRP Attributes
    SamplingFrequency = 1e6;
    CenterFrequency = 900e6;
    
    % Setup buffers
    ReceiveBufferLength = FrameLength*2;
    Buffer = complex(zeros(ReceiveBufferLength,1));
    
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
        'SampleRate',           SamplingFrequency,...
        'EnableBurstMode',      false,...
        'NumFramesInBurst',     10);
end


BufferColumn = complex(zeros(FrameLength*2,1));

while 1
    
    % Get data from USRP or Input
    Buffer(1:FrameLength) = Buffer(FrameLength+1:end);% Shift old samples down
    [Buffer(FrameLength+1:end), len] =  step(SDRuReceiver);% Shift in new samples
    if len==0
        continue;
    end
    
    % Make sure buffer isn't all zeros, which happens initially
    if sum(abs(Buffer))>0
        BufferColumn = Buffer(1:FrameLength*2);
        %BufferRow = Buffer.';
        %coder.ceval('add2q',coder.ref(BufferRow));
        return;
    end
    

    
end



end
