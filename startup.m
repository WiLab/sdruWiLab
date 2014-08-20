% Generate Path for folders
if exist('pathdef.m', 'file') == 2
	system('rm pathdef.m');
end
system('cp pathdefOrg.m pathdef.m');
P = genpath(pwd);
addpath(P);
savepath;

% Setup SDRU
%setupsdru([pwd,'/sdru']);
%usrp_startup;

desktop = com.mathworks.mde.desk.MLDesktop.getInstance;
desktop.restoreLayout('TravisDefault');