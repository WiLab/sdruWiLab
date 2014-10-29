% Generate Path for folders
good = 1;
if exist('startup.m', 'file') == 2
	fileID = fopen('startup.m');
	A = fread(fileID,'*char')';
	fclose(fileID);
	if findstr(A,'USRPDriver')
		disp('USRP previously setup, exiting')
		good = 0;
	end

else
	!cp startupOrg.m startup.m
end
P = genpath(pwd);
addpath(P);
savepath;

disp('Getting driver from git mirror');
org = pwd;
cd('..');
!git clone https://github.com/travisfcollins/USRPDriver.git
sdruPath = [pwd,'/USRPDriver'];
cd(org);

disp('Adding commands to startup');
!echo '' >> startup.m
!echo '% SDRu Setup' >> startup.m
command = ['echo "sdruPath =''',sdruPath,'''',';">>startup.m;'];
system(command);
!echo "addpath(genpath(sdruPath));">>startup.m
!echo "setupsdru(sdruPath);">>startup.m
!echo "usrp_startup;">>startup.m
!echo "findsdru;">>startup.m

disp('Running commands for this session');
sdruPath = '../USRPDriver';
addpath(genpath(sdruPath));
setupsdru(sdruPath);
usrp_startup;
findsdru;
