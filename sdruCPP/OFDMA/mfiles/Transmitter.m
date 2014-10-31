function [ output ] = Transmitter() %#codegen

output = 1;

%% Transmitter
persistent TxMAC TxPHY SDRuTransmitter UserTemplate

if isempty(TxMAC)  || isempty(TxPHY) || isempty(UserTemplate)
    % SETUP MAC
    TxMAC = TxOFDMA;
    TxMAC.desiredUser = 1;
    TxMAC.dataType = 'c';
    TxMAC.symbolsPerFrame = 5;
    % Setup PHY
    TxPHY = PHYTransmitter;
    TxPHY.HWAttached = false;
    TxPHY.NumDataSymbolsPerFrame = TxMAC.symbolsPerFrame;
    
    SamplingFrequency = 1e6;
    USRPADCSamplingRate = 100e6;
    InterpolationFactor = floor(USRPADCSamplingRate/SamplingFrequency);
    
    SDRuTransmitter = comm.SDRuTransmitter('192.168.10.2', ...
        'CenterFrequency',      900e6, ...
        'InterpolationFactor',  InterpolationFactor,...
        'Gain',                 25 ...
        );

    % initialize array for user messages
    coder.varsize('x.msg', [1 ,100], [0 1]);
    x.msg = '';
    UserTemplate = repmat(x,TxPHY.numCarriers,1);
end

% Create Messages
numUsers = 2;
subcarriersForEachUser = zeros(1,TxPHY.numCarriers);
for k = 1:numUsers
    message = ['Msg',char(48+k)];
    UserTemplate(k).msg = message;
    subcarriersForEachUser(k) = TxPHY.numCarriers/numUsers;
end


%% Create a number of frames, and put them in a vector
frameLength = (TxPHY.CodeRate*TxMAC.symbolsPerFrame*(64+16)+320);

framesToCreate = 10;
frame = complex(zeros(frameLength*framesToCreate,1));

for k = 1:framesToCreate
    bitsToTx1 = step(TxMAC, 2, subcarriersForEachUser, UserTemplate);
    frame(1+(k-1)*frameLength:k*frameLength)= step(TxPHY,bitsToTx1);
end

% Add gaps between transmissions
framesWithGaps=[complex(zeros(100,1));frame;complex(zeros(100,1))];

% Transmit out USRP
while 1
    step(SDRuTransmitter,framesWithGaps);
end


end

