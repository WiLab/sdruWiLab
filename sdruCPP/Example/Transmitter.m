function [ output ] = Transmitter() %#codegen

output = 1;

%% Transmitter
persistent TxMAC TxPHY SDRuTransmitter
 
if isempty(TxMAC)
    % SETUP MAC
    TxMAC = TxOFDMA;
    TxMAC.desiredUser = 1;
    TxMAC.dataType = 'c';
    TxMAC.symbolsPerFrame = 8;
    
    TxPHY = PHYTransmitter;
    TxPHY.HWAttached = false;
    TxPHY.NumDataSymbolsPerFrame = TxMAC.symbolsPerFrame;
    
    SamplingFrequency = 0.5e6;
    USRPADCSamplingRate = 100e6;
    InterpolationFactor = floor(USRPADCSamplingRate/SamplingFrequency);
    
    SDRuTransmitter = comm.SDRuTransmitter('192.168.20.2', ...
        'CenterFrequency',      2.2e9, ...
        'InterpolationFactor',  InterpolationFactor,...
        'Gain',                 25);
    
end

 
messageUE1 = ['1st Message';'2nd Message';'3rd Message';'4th Message';'5th Message'];
messageUE2 = ['First  Message';'Second Message';'Third  Message';'Fourth Message';'Fifth  Message'];
dataType = 'c';
 

frameLength = 960;
frame = complex(zeros(frameLength*10,1));

for k = 1:10
    bitsToTx1 = step(TxMAC, messageUE1(1,:),messageUE2(1,:));
    frame(1+(k-1)*frameLength:k*frameLength)= step(TxPHY,bitsToTx1);
end

frame2=[randn(100,1);frame];

while 1
    step(SDRuTransmitter,frame2);
end

end

