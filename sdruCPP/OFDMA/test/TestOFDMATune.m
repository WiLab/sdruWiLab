function output = TestOFDMATune()

% The goal of this function is to test the tunablility of the number of
% users for the following:
%   Support up to 48 User (Max # of data subcarriers)
%   Change the number of carriers per user

%% Transmitter
%persistent TxMAC %TxPHY SDRuTransmitter

% SETUP MAC
TxMAC = TxOFDMA;
TxMAC.desiredUser = 1;
TxMAC.dataType = 'c';
TxMAC.symbolsPerFrame = 5;

% RxMAC = RxOFDMA;
% RxMAC.dataType = 'c';
% RxMAC.desiredUser = 1;
% RxMAC.symbolsPerFrame = 20;

% Setup PHY
TxPHY = PHYTransmitter;
TxPHY.HWAttached = false;
TxPHY.NumDataSymbolsPerFrame = TxMAC.symbolsPerFrame;

for p = 1:1000

% Create Messages
numUsers = 2;
x.msg = '';
UserTemplate = repmat(x,TxPHY.numCarriers,1);
subcarriersForEachUser = zeros(1,TxPHY.numCarriers);
for k = 1:numUsers
    message = ['Msg',char(48+k)];
    UserTemplate(k).msg = message;
    subcarriersForEachUser(k) = TxPHY.numCarriers/numUsers;
end

subcarriersForEachUser = [24,24];
bitsToTx1 = step(TxMAC,2,subcarriersForEachUser,UserTemplate);
frame = step(TxPHY,bitsToTx1);

% Receiver
Buffer = [frame; frame];
for k=1:1000
output = GenerateInput();

[rFrame,statusFlag] = FindtheFrame(output);

if statusFlag<1
    [ RHard ] = SignalCorrect(rFrame);
    % Decode
    Decoder(RHard);
end
end
end

end