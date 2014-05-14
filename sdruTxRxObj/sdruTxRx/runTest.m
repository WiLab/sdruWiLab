% Test functions in folder

% MACLayerTransmitter Test
compilesdru('testMACLayerTransmitter','mex'); % Build
testMACLayerTransmitter_mex; % Run

% MACLayerReceiver Test
compilesdru('testMACLayerReceiver','mex'); % Build
testMACLayerReceiver_mex; % Run

% PHYTransmit Test
compilesdru('testPHYTransmit','mex'); % Build
testPHYTransmit_mex; % Run

% PHYReceive Test
compilesdru('testPHYReceive','mex'); % Build
testPHYReceive_mex; % Run