

% Construst runTX location
[~,username]=system('whoami');username = username(1:end-1);

username = 'traviscollins';

txScriptLocation = ['~/git/',username,'/sdruWiLab/sdruTxRx/'];

cd(txScriptLocation);

runTX;

