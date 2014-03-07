%Kill all existing processes
system('ssh root@monadnock.ece.wpi.edu "tb -dest k9 -act killallp -u traviscollins">NUL 2>NUL');
system('ssh root@monadnock.ece.wpi.edu "tb -dest badwolf -act killallp -u traviscollins">NUL 2>NUL');
system('ssh root@monadnock.ece.wpi.edu "tb -dest thedoctor -act killallp -u traviscollins">NUL 2>NUL');

%Sync Code
system('ssh root@monadnock.ece.wpi.edu "tb -u traviscollins -dest k9 -act sync">NUL 2>NUL');
system('ssh root@monadnock.ece.wpi.edu "tb -u traviscollins -dest badwolf -act sync">NUL 2>NUL');
system('ssh root@monadnock.ece.wpi.edu "tb -u traviscollins -dest thedoctor -act sync">NUL 2>NUL');


% Construst runRouter location
[~,username]=system('whoami');username = username(1:end-1);

username = 'traviscollins';

txScriptLocation = ['~/git/',username,'/sdruWiLab/sdruTxRx/'];

cd(txScriptLocation);

% run RX
runPHYRX;

