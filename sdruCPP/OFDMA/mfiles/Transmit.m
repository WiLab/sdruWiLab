function [ output ] = Transmit(numUsers) %#codegen

assert(isa(numUsers, 'double') && isreal(numUsers) && all(size(numUsers) == [1 1]))

output = 1;

% if nargin == 1
%     error('Error, no messages passed to function\n');
% else
%     % Update number of users
%     numUsers = messages;
% end

%% Transmitter
persistent TxMAC TxPHY UserTemplate

if isempty(TxMAC) || isempty(TxPHY) || isempty(UserTemplate)

    % SETUP MAC
    TxMAC = TxOFDMA;
    TxMAC.desiredUser = 1;
    TxMAC.dataType = 'c';
    TxMAC.symbolsPerFrame = 5;
    
    % Setup PHY
    TxPHY = PHYTransmitter;
    TxPHY.HWAttached = true;
    TxPHY.NumDataSymbolsPerFrame = TxMAC.symbolsPerFrame;
    TxPHY.SamplingFrequency = 1e6;
    TxPHY.CenterFrequency = 900e6;
    
    % initialize array for user messages
    coder.varsize('x.msg', [1 ,100], [0 1]);
    x.msg = '';
    UserTemplate = repmat(x,TxPHY.numCarriers,1);
    
end

% Create Messages
subcarriersForEachUser = zeros(1,TxPHY.numCarriers);
for k = 1:numUsers
    message = ['Msg',char(48+k)];
    UserTemplate(k).msg = message;
    subcarriersForEachUser(k) = TxPHY.numCarriers/numUsers;
end


%% Create a number of frames, and put them in a vector
bitsToTx1 = step(TxMAC, numUsers, subcarriersForEachUser, UserTemplate);
frame = step(TxPHY,bitsToTx1);

% % Add gaps between transmissions, easier to recover
% framesWithGaps=[complex(zeros(100,1));frame;complex(zeros(100,1))];
% 
% % Transmit out USRP
% step(SDRuTransmitter,framesWithGaps);


end

