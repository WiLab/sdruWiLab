function [ output ] = Transmitter() %#codegen

output = 1;

%% Transmitter
persistent TxMAC TxPHY SDRuTransmitter hss
 
if isempty(TxMAC)
    % SETUP MAC
    TxMAC = TxOFDMA;
    TxMAC.desiredUser = 1;
    TxMAC.dataType = 'c';
    TxMAC.symbolsPerFrame = 16;
    
    TxPHY = PHYTransmitter;
    TxPHY.HWAttached = false;
    TxPHY.NumDataSymbolsPerFrame = TxMAC.symbolsPerFrame;
    
    SamplingFrequency = 1e6;
    USRPADCSamplingRate = 100e6;
    InterpolationFactor = floor(USRPADCSamplingRate/SamplingFrequency);
    
    SDRuTransmitter = comm.SDRuTransmitter('192.168.10.2', ...
        'CenterFrequency',      900e6, ...
        'InterpolationFactor',  InterpolationFactor,...
        'Gain',                 25,...
        'EnableBurstMode',      false...
        ...%'NumFramesInBurst',     1 ...
         );

end

 
messageUE1 = ['1st Message';'2nd Message';'3rd Message';'4th Message';'5th Message'];
messageUE2 = ['First  Message';'Second Message';'Third  Message';'Fourth Message';'Fifth  Message'];

frameLength = (16*(64+16)+320);
frame = complex(zeros(frameLength*10,1));

%AFR = dsp.AudioFileReader('OutputDataType','uint8','SamplesPerFrame',48*16);


for k = 1:10
    bitsToTx1 = step(TxMAC, messageUE1(1,:),messageUE2(1,:));
    %audio = AFR;
    %bitsToTx1 = step(TxMAC, audio.',audio.');
    frame(1+(k-1)*frameLength:k*frameLength)= step(TxPHY,bitsToTx1);
end

frame2=[randn(100,1);frame];

while 1
    step(SDRuTransmitter,frame2);
end

end

