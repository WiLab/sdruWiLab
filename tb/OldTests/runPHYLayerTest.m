%Kill all existing processes
system('ssh root@monadnock.ece.wpi.edu "tb -dest k9 -act killallp -u traviscollins">NUL 2>NUL');
system('ssh root@monadnock.ece.wpi.edu "tb -dest badwolf -act killallp -u traviscollins">NUL 2>NUL');
system('ssh root@monadnock.ece.wpi.edu "tb -dest thedoctor -act killallp -u traviscollins">NUL 2>NUL');

%Sync Code
disp('Syncing code');
system('ssh root@monadnock.ece.wpi.edu "tb -u traviscollins -dest k9 -act sync">NUL 2>NUL');
system('ssh root@monadnock.ece.wpi.edu "tb -u traviscollins -dest badwolf -act sync">NUL 2>NUL');
system('ssh root@monadnock.ece.wpi.edu "tb -u traviscollins -dest thedoctor -act sync">NUL 2>NUL');
disp('Done syncing');

%Start TX
system('ssh root@monadnock.ece.wpi.edu "tb -dest k9 -act runTest -f runPHYTX -u traviscollins">NUL 2>NUL');
pause(4);

%Start RX1
system('ssh root@monadnock.ece.wpi.edu "tb -dest badwolf -act runTest -f runPHYRX -u traviscollins">NUL 2>NUL');

%Start RX2
system('ssh root@monadnock.ece.wpi.edu "tb -dest thedoctor -act runTest -f runPHYRX -u traviscollins">NUL 2>NUL');

% Some info 
disp('Test started, attached to screens');