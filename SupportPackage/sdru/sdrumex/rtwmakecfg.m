function makeInfo = rtwmakecfg()
%RTWMAKECFG adds include and source directories to the make files.
%   makeInfo=RTWMAKECFG returns a structured array containing build info.
%   Please refer to the rtwmakecfg API section in the Simulink Coder
%   documentation for details on the format of this structure.
%
%   Simulink version    : 8.0 (R2011b Prerelease) 16-Feb-2011
%   MATLAB file generated on : 28-Apr-2011 16:13:22

%   Copyright 2011-2013 The MathWorks, Inc.

% Verify the Simulink version
verify_simulink_version();

% Get the current directory
currDir = pwd;

% Get the MATLAB search paths and remove the toolbox sub-directories except simfeatures
pSep = pathsep;
matlabPaths = regexp([matlabpath pSep], ['.[^' pSep ']*' pSep], 'match');
if ~isempty(matlabPaths)
    filteredPathIndices = strncmp(fullfile(matlabroot,'toolbox'), matlabPaths, numel(fullfile(matlabroot,'toolbox')));
    lctPath = fileparts(which('sldemo_lct_builddemos'));
    if ~isempty(lctPath)
        filteredPathIndices(strncmp([lctPath pSep], matlabPaths, numel([lctPath pSep]))) = 0;
    end
    lctPath = fileparts(which('rtwdemo_lct_builddemos'));
    if ~isempty(lctPath)
        filteredPathIndices(strncmp([lctPath pSep], matlabPaths, numel([lctPath pSep]))) = 0;
    end
    matlabPaths(filteredPathIndices) = [];
    matlabPaths = strrep(matlabPaths, pSep, '');
end

% Declare cell arrays for storing the paths found
allIncPaths = {};
allSrcPaths = {};

% Get the build type
isSimTarget = is_simulation_target();
allLibs = {};


% Get the serialized paths information
info = get_serialized_info();

% Get all S-Function's name in the current model
sfunNames = {};
if ~isempty(bdroot)
    sfunBlks = find_system(bdroot,...
        'LookUnderMasks', 'all',...
        'FollowLinks', 'on',...
        'BlockType', 'S-Function'...
    );
    sfunNames = get_param(sfunBlks, 'FunctionName');
end

for ii = 1:length(info)
    % If the S-Function isn't part of the current build then skip its path info
    if isempty(strmatch(info(ii).SFunctionName, sfunNames, 'exact'))
        continue
    end

    % Path to the S-function source file
    if strcmp(info(ii).Language, 'C')
        fext = '.c';
    else
        fext = '.cpp';
    end
    pathToSFun = fileparts(which([info(ii).SFunctionName,fext]));
    if isempty(pathToSFun)
        pathToSFun = currDir;
    end

    % Default search paths for this S-function
    defaultPaths = [{pathToSFun} {currDir}];
    allPaths = [defaultPaths matlabPaths];

    % Verify if IncPaths are absolute or relative and then complete
    % relative paths with the full S-function dir or current dir or MATLAB path
    incPaths = info(ii).IncPaths;
    for jj = 1:length(incPaths)
        [fullPath, isFound] = resolve_path_info(correct_path_sep(incPaths{jj}), allPaths);
        if (isFound==0)
            DAStudio.error('Simulink:tools:LCTErrorCannotFindIncludePath',...
                incPaths{jj});
        else
            incPaths{jj} = fullPath;
        end
    end
    incPaths = [incPaths defaultPaths];

    % Verify if SrcPaths are Absolute or Relative and then complete
    % relative paths with the full S-function dir or current dir or MATLAB path
    srcPaths = info(ii).SrcPaths;
    for jj = 1:length(srcPaths)
        [fullPath, isFound] = resolve_path_info(correct_path_sep(srcPaths{jj}), allPaths);
        if (isFound==0)
            DAStudio.error('Simulink:tools:LCTErrorCannotFindSourcePath',...
                srcPaths{jj});
        else
            srcPaths{jj} = fullPath;
        end
    end
    srcPaths = [srcPaths defaultPaths];

    % Common search paths for Source files specified with path
    srcSearchPaths = [srcPaths matlabPaths];

    % Add path to source files if not specified and complete relative
    % paths with the full S-function dir or current dir or search
    % paths and then extract only the path part to add it to the srcPaths
    sourceFiles = info(ii).SourceFiles;
    pathFromSourceFiles = cell(1, length(sourceFiles));
    for jj = 1:length(sourceFiles)
        [fullName, isFound] = resolve_file_info(correct_path_sep(sourceFiles{jj}), srcSearchPaths);
        if isFound==0
            DAStudio.error('Simulink:tools:LCTErrorCannotFindSourceFile',...
                sourceFiles{jj});
        else
            % Extract the path part only
            [fpath, fname, fext] = fileparts(fullName);
            pathFromSourceFiles{jj} = fpath;
        end
    end
    srcPaths = [srcPaths pathFromSourceFiles];

    % Verify if LibPaths are Absolute or Relative and then complete
    % relative paths with the full S-function dir or current dir or MATLAB path
    libPaths = info(ii).LibPaths;
    for jj = 1:length(libPaths)
        [fullPath, isFound] = resolve_path_info(correct_path_sep(libPaths{jj}), allPaths);
        if (isFound==0)
            DAStudio.error('Simulink:tools:LCTErrorCannotFindLibraryPath',...
                libPaths{jj});
        else
            libPaths{jj} = fullPath;
        end
    end
    libPaths = [libPaths defaultPaths];

    % Common search paths for Host and Target Lib with relative paths
    libSearchPaths = [libPaths matlabPaths];

    if (isSimTarget==1)
        % Add path to host lib files if not specified and complete relative
        % paths with the full S-function dir or current dir or MATLAB path
        libFiles = info(ii).HostLibFiles;
        for jj = 1:length(libFiles)
            [fullName, isFound] = resolve_file_info(correct_path_sep(libFiles{jj}), libSearchPaths);
            if isFound==0
                DAStudio.error('Simulink:tools:LCTErrorCannotFindLibraryFile',...
                    libFiles{jj});
            else
                libFiles{jj} = fullName;
            end
        end

    else
        % Add path to target lib files if not specified and complete relative 
        % paths with the full S-function dir or current dir or MATLAB path
        libFiles = info(ii).TargetLibFiles;
        for jj = 1:length(libFiles)
            [fullName, isFound] = resolve_file_info(correct_path_sep(libFiles{jj}), libSearchPaths);
            if isFound==0
                DAStudio.error('Simulink:tools:LCTErrorCannotFindLibraryFile',...
                    libFiles{jj});
            else
                libFiles{jj} = fullName;
            end
        end
    end

    % Concatenate known include and source directories
    allIncPaths = RTW.uniquePath([allIncPaths incPaths]);
    allSrcPaths = RTW.uniquePath([allSrcPaths srcPaths]);

    % Concatenate Host or Target libraries
    allLibs   = RTW.uniquePath([allLibs libFiles]);

end

% Additional include directories
makeInfo.includePath = correct_path_name(allIncPaths);

% Additional source directories
makeInfo.sourcePath = correct_path_name(allSrcPaths);

% Additional libraries according to the build type
makeInfo.linkLibsObjs = correct_path_name(allLibs);

%--------------------------------------------------------------------------
function verify_simulink_version()

% Retrieve Simulink version
slVer = ver('simulink');
factor = 1.0;
thisVer = 0.0;
for ii = 1:length(slVer.Version)
    if slVer.Version(ii)=='.'
        factor = factor/10.0;
    else
        thisVer = thisVer + sscanf(slVer.Version(ii), '%d')*factor;
    end
end

% Verify that the actual platform supports the function used
if thisVer < 6.4
    DAStudio.error('Simulink:tools:LCTErrorBadSimulinkVersion', sprintf('%g',thisVer))
end


%--------------------------------------------------------------------------
function [fullPath, isFound] = resolve_path_info(fullPath, searchPaths)

% Initialize output value
isFound = 0;

if is_absolute_path(fullPath)==1
    % Verify that the dir exists
    if exist(fullPath, 'dir')
        isFound = 1;
    end
else
    % Walk through the search path
    for ii = 1:length(searchPaths)
        thisFullPath = fullfile(searchPaths{ii}, fullPath);
        % If this candidate path exists then exit
        if exist(thisFullPath, 'dir')
            isFound = 1;
            fullPath = thisFullPath;
            break
        end
    end
end


%--------------------------------------------------------------------------
function [fullName, isFound] = resolve_file_info(fullName, searchPaths)

% Initialize output value
isFound = 0;

% Extract file parts
[fPath, fName, fExt] = fileparts(fullName);

if is_absolute_path(fPath)==1
    % If the file has no extension then try to add it
    if isempty(fExt)
        fExt = find_file_extension(fullfile(fPath, fName));
        fullName = fullfile(fPath, [fullName,fExt]);
    end
    % Verify that the file exists
    if exist(fullName, 'file')
        isFound = 1;
    end
else
    % Walk through the search path
    for ii = 1:length(searchPaths)
        thisFullName = fullfile(searchPaths{ii}, fullName);
        % If the file has no extension then try to add it
        if isempty(fExt)
            fExt = find_file_extension(thisFullName);
            thisFullName = [thisFullName,fExt];
        end
        % If this candidate path exists then exit
        if exist(thisFullName, 'file')
            fullName = thisFullName;
            isFound = 1;
            break
        end
    end
end


%--------------------------------------------------------------------------
function fext = find_file_extension(fullName)

% Initialize output value
fext = [];

% Use 'dir' because this command has the same behavior both
% on PC and Unix
theDir = dir([fullName,'.*']);
if ~isempty(theDir)
    for ii = 1:length(theDir)
        if theDir(ii).isdir
            continue
        end
        [fpath, fname, fext] = fileparts(theDir(ii).name);
        if ~isempty(fext)
            break % stop on first occurrence
        end
    end
end


%--------------------------------------------------------------------------
function isSimTarget = is_simulation_target()

% Default output value
isSimTarget = 0;

% Get the current model and the code generation type to decide
% if we must link with the host libraries or with the target libraries
modelName = get_param(0, 'CurrentSystem');
if ~isempty(modelName)
    sysTarget = get_param(modelName, 'RTWSystemTargetFile');
    isSimTarget = ~isempty([findstr(sysTarget, 'rtwsfcn') findstr(sysTarget, 'accel')]);

    mdlRefSimTarget = get_param(modelName,'ModelReferenceTargetType');
    isSimTarget = strcmpi(mdlRefSimTarget, 'SIM') || isSimTarget;

    % Verify again it's not Accelerator
    if ~isSimTarget
        simMode = get_param(modelName, 'SimulationMode');
        simStat = get_param(modelName, 'SimulationStatus');
        isSimTarget = strcmp(simStat, 'initializing') & strcmp(simMode, 'accelerator');
    end
end


%--------------------------------------------------------------------------
function bool = is_absolute_path(thisPath)

if isempty(thisPath)
    bool = 0;
    return
end

if(thisPath(1)=='.')
    % Relative path
    bool = 0;
else
    if(ispc && length(thisPath)>=2)
        % Absolute path on PC start with drive letter or \(for UNC paths)
        bool = (thisPath(2)==':') | (thisPath(1)=='\');
    else
        % Absolute paths on unix start with '/'
        bool = thisPath(1)=='/';
    end
end


%--------------------------------------------------------------------------
function thePath = correct_path_sep(thePath)

if isunix
    wrongFilesepChar = '\';
    filesepChar = '/';
else
    wrongFilesepChar = '/';
    filesepChar = '\';
end

seps = find(thePath==wrongFilesepChar);
if(~isempty(seps))
    thePath(seps) = filesepChar;
end


%--------------------------------------------------------------------------
function thePaths = correct_path_name(thePaths)

for ii = 1:length(thePaths)
    thePaths{ii} = rtw_alt_pathname(thePaths{ii});
end
thePaths = RTW.uniquePath(thePaths);


%--------------------------------------------------------------------------
function info = get_serialized_info()

% Allocate the output structure array
info(1:2) = struct(...
    'SFunctionName', '',...
    'IncPaths', {{}},...
    'SrcPaths', {{}},...
    'LibPaths', {{}},...
    'SourceFiles', {{}},...
    'HostLibFiles', {{}},...
    'TargetLibFiles', {{}},...
    'Language', ''...
    );

  
opts = sdrubuildopts;

info(1).HostLibFiles    = opts.LibraryNames;
info(1).TargetLibFiles  = opts.LibraryNames;
info(1).IncPaths        = opts.IncludeDirs;
info(1).LibPaths        = opts.LibraryDirs;
info(1).Language        = 'C';

info(2) = info(1);

% Dependency info for S-function 'usrp_uhd_sfunrx'
info(1).SFunctionName = 'usrp_uhd_sfunrx';
% Dependency info for S-function 'usrp_uhd_sfuntx'
info(2).SFunctionName = 'usrp_uhd_sfuntx';


