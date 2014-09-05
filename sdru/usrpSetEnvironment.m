function usrpSetEnvironment
%usrpSetEnvironment Setup MATLAB to work with Communications System Toolbox Support Package for USRP(R) 
%   Software Defined Radio. 
%   usrpSetEnvironment sets up architecture-specific environment variables
%   once each time a new Support Package for USRP(R) Software Defined
%   Radio is installed.
%   USRP(R) is a trademark of National Instruments Corp.

%   Copyright 2011-2012 The MathWorks, Inc.

installdir = fileparts(mfilename('fullpath'));

% Remove shortcut for USRP setup to the MATLAB shortcuts bar.
% Have not found a way to detect if it exists so just go
% ahead and assume it does.
scWidget = com.mathworks.mlwidgets.shortcuts.ShortcutUtils;
scWidget.removeShortcut(scWidget.getDefaultToolbarCategoryName, ...
  'Add SDRu');

copyUtils('EttusResearch-UHD-Mirror-4f9b649');

% script sets the system environment variables:
setupsdru(installdir, 'verbose');

function copyUtils(uhdDownloadDir)

disp('Copying utilities...')

usrproot     = sdruroot();
sandboxRoot = fullfile(matlabroot, 'toolbox', 'shared', 'sdr', 'sdru');
isBatInstall = strcmp(usrproot, sandboxRoot);

if ~isBatInstall
  dstDir  = fullfile(sdruroot, 'uhdapps', 'utils');
  srcDir  = fullfile(fileparts(sdruroot), uhdDownloadDir, 'host', 'utils');
  
  pythonFiles = dir(fullfile(srcDir, '*.py'));
  
  for p=1:length(pythonFiles)
    copyfile(fullfile(srcDir, pythonFiles(p).name), dstDir, 'f');
  end
end
