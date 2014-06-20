% Generate Path for folders
if exist('pathdef.m', 'file') == 2
	system('rm pathdef.m');
end
system('cp pathdefOrg.m pathdef.m')
P = genpath(pwd);
addpath(P);

% Setup SDRU
setupsdru([pwd,'/sdru']);
usrp_startup;