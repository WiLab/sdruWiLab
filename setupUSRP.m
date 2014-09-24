org = pwd;
cd('..');
!git clone https://github.com/travisfcollins/USRPDriver.git
cd(org);
disp('Adding commands to startup');
!echo "sdruPath = '../USRPDriver';">>startup.m
!echo "addpath(genpath(sdruPath));">>startup.m
!echo "setupsdru(sdruPath);">>startup.m
!echo "usrp_startup;">>startup.m
disp('Running commands for this session');
sdruPath = '../USRPDriver';
addpath(genpath(sdruPath));
setupsdru(sdruPath);
usrp_startup;
