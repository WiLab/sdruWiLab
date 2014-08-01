function [ output ] = Transmitter() %#codegen

output = 1;

%% Transmitter
persistent TxMAC TxPHY SDRuTransmitter
 
if isempty(TxMAC)
    % SETUP MAC
    TxMAC = TxOFDMA;
    TxMAC.desiredUser = 1;
    TxMAC.dataType = 'u';
    TxMAC.symbolsPerFrame = 8;
    
    TxPHY = PHYTransmitter;
    TxPHY.HWAttached = false;
    TxPHY.NumDataSymbolsPerFrame = TxMAC.symbolsPerFrame;
    
    SamplingFrequency = 1e6;
    USRPADCSamplingRate = 100e6;
    InterpolationFactor = USRPADCSamplingRate/SamplingFrequency;
    
    SDRuTransmitter = comm.SDRuTransmitter('192.168.10.2', ...
        'CenterFrequency',      900e6, ...
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

while 1
    step(SDRuTransmitter,frame);
end

end

