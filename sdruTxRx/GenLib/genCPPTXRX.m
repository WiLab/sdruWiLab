
libraryName = 'testTXRX';
functionsToThread = {'PHYReceiverFun','PHYTransmitterFun'};
cppFilename = 'phyTXRX';
compileFolder = 'BUILD';
LD_LIBRARY_PATH = '/opt/MATLAB/R2013a/runtime/glnxa64/';
additionalFiles = {'tmwtypes.h','rtwtypes.h'};


%MATLAB 2013a LD_LIBRARY_PATH=/opt/MATLAB/R2013a/runtime/glnxa64/
%MATLAB 2013b LD_LIBRARY_PATH=/usr/local/MATLAB/R2013b/runtime/glnxa64/

%%%%%% DO NOT EDIT BELOW %%%%%%%

if isunix
    libExtension = '.so';
else
    libExtension = '.lib';
end

% get matlab version
release=version;
year=str2num(release(end-5:end-2));

% Add library to LD_LIBRARY_PATH
%command = ['export LD_LIBRARY_PATH=',LD_LIBRARY_PATH];
%system(command);

num = 20;

codegenCommand = 'codegen -config:dll';
includeFiles = '-I ../SupportFiles';
argsCommand='-args {num}';
functionsToThreadStr = sprintf('%s.m ' ,functionsToThread{:});

outputCommand = ['-o ',libraryName];

% Build Codegen Command
if year>2013
fullCommand = [codegenCommand,' -report ',argsCommand,' ',includeFiles,' ',functionsToThreadStr,' ',outputCommand];
disp('Generating Code');
eval(fullCommand);
disp('Completed code generation');
else
fullCommand = [codegenCommand,' -report ',argsCommand,' ',includeFiles,' ',functionsToThreadStr,' ',outputCommand];
disp('Generating Code');
compilesdru(functionsToThreadStr,'dll','-report',argsCommand,includeFiles,functionsToThreadStr,outputCommand);
disp('Completed code generation');    
end

% Make build folder
mkdir(compileFolder);

% Copy files into build folder
for file = 1:length(functionsToThread)
	filename = [functionsToThread{file},'.h'];
	command = ['cp codegen/dll/','*/',filename,' ',compileFolder];
	system(command);
end
command = ['cp codegen/dll/','*/',libraryName,libExtension,' ',compileFolder];
system(command);

% Copy Library To Runtime folder
command = ['sudo cp codegen/dll/','*/',libraryName,libExtension,' ',LD_LIBRARY_PATH];
system(command);

% Copy additional files to build folder
%for file =1:length(additionalFiles)
%	command = ['cp codegen/dll/*/',additionalFiles{file},' ',compileFolder];
%	system(command);
%end
command = ['cp codegen/dll/*/* ',compileFolder];
system(command);

% Copy CPP to build folder
%command = ['cp ../SupportFiles/',cppFilename,'.cpp ',compileFolder];
command = ['cp ../SupportFiles/* ',compileFolder];
system(command);

%% Copy USRP required files
%command = ['cp -r /home/sdruser/git/traviscollins/SupportPackage/sdru/include/* ', compileFolder];
%system(command);

% Move to build folder
cd(compileFolder);

% MBuild command
command = ['mbuild ',cppFilename,'.cpp ',libraryName,libExtension];
eval(command);

% Run script
if isunix
    command = ['./',cppFilename];
else
    command = [cppFilename,'.exe'];
end
system(command);




