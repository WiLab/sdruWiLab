
libraryName = 'testTXRX';
functionsToThread = {'testPHYReceive_per';'testPHYTransmit'};
cppFilename = 'phyreceive_threads_per2';
compileFolder = 'BUILD';
LD_LIBRARY_PATH = '/usr/local/MATLAB/R2013b/runtime/glnxa64/';
additionalFiles = {'tmwtypes.h'};


%!export LD_LIBRARY_PATH=/opt/MATLAB/R2013a/runtime/glnxa64/
%!export LD_LIBRARY_PATH=/usr/local/MATLAB/R2013b/runtime/glnxa64/

%%%%%% DO NOT EDIT BELOW %%%%%%%

% Add library to LD_LIBRARY_PATH
command = ['!export LD_LIBRARY_PATH=',LD_LIBRARY_PATH];
system(command);

decimation = 20;

codegenCommand = 'codegen -config:dll';
argsCommand='-args {decimation}';
functionsToThreadStr = sprintf('%s.m ' ,functionsToThread{:});

outputCommand = ['-o ',libraryName];

% Build Codegen Command
fullCommand = [codegenCommand,' -report ',argsCommand,' ',functionsToThreadStr,outputCommand];

disp('Generating Code');
eval(fullCommand);
disp('Completed code generation');

% Make build folder
mkdir(compileFolder);

% Copy files into build folder
for file = 1:length(functionsToThread)
	filename = [functionsToThread{file},'.h'];
	command = ['cp codegen/dll/',libraryName,'/',filename,' ',compileFolder];
	system(command);
end

% Copy Library To Runtime folder
command = ['sudo cp ',libraryName,'.so',' ',LD_LIBRARY_PATH];
system(command);

% Copy additional files to build folder
for file =1:length(additionalFiles)
	comand = ['cp ',additionalFiles{file},' ',compileFolder];
	system(command);
end

% Copy CPP to build folder
command = ['cp ',cppFilename,' ',compileFolder];
system(command);

% Copy USRP required files
command = ['cp -r /home/sdruser/git/traviscollins/SupportPackage/sdru/include/* ', compileFolder];
system(command);

% Move to build folder
cd(compileFolder);

% MBuild command
command = ['mbuild ',cppFilename,'.cpp ',libraryName,'.so'];
eval(command);

% Run script
command = ['!./',cppFilename];
system(command);




