

% Construst runRouter location
[~,username]=system('whoami');username = username(1:end-1);

username = 'traviscollins';

txScriptLocation = ['~/git/',username,'/sdruWiLab/sdruRouter/'];

cd(txScriptLocation);

runRouter;

