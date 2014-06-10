% Send Messages
function PHYTransmit(...
    ObjSDRuTransmitter,...
    inputPayloadMessage,...
    samplingFreq,...
    originNodeID,...
    destNodeID...
    )

DebugFlag = 0;

%% Create message bits
% The output needs to be duplicated to long vectors to help prevent
% Underflow for the USRP
[~,~, dataToTx, ~ ] = generateOFDMSignal_TX3(inputPayloadMessage,samplingFreq, originNodeID, destNodeID);% 30 Dupe frames created (NOTE! author shouldcreate shorter simpler function)

%% Run transmitter
if DebugFlag
    fprintf('PHY| Transmitting... pew! pew!\n');
    fprintf('PHY| TX Message: %s\n',inputPayloadMessage);
end

numFramesToTx = 10;%increasing value will help receiver, 10
% This should be longer to help transmit over periods when the RX is
% cleaning its buffer

for framesTransmitted = 1:numFramesToTx
    step(ObjSDRuTransmitter, dataToTx);
    
    %if mod(framesTransmitted,60) == 0
    %end
end

%obj.pSDRuTransmitter.reset;%stop transmitting?

end
