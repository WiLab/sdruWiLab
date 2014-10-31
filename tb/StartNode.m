function StartNode(gitRoot, scriptLocation, scriptName, nodeName, username, startupCommands,branchName)

masterNode = 'travis@monadnock.ece.wpi.edu';

% Kill currently running jobs on node
action = 'killallp';
command = BuildCommand( action, masterNode, gitRoot, scriptLocation, scriptName, nodeName, username,startupCommands,branchName);
system(command);

% Sync code to target node
action = 'sync';
command = BuildCommand( action, masterNode, gitRoot, scriptLocation, scriptName, nodeName, username,startupCommands,branchName);
system(command);

% Change git branch
if ~strcmp(branchName,'')
action = 'changeBranch';
command = BuildCommand( action, masterNode, gitRoot, scriptLocation, scriptName, nodeName, username,startupCommands,branchName);
system(command);
end

% Start Script
action = 'runTest';
command = BuildCommand( action, masterNode, gitRoot, scriptLocation, scriptName, nodeName, username,startupCommands,branchName);
system(command);

% Finalize
disp('Test started, attached to screens');

end

function command = BuildCommand( action, masterNode, gitRoot, scriptLocation, scriptName, nodeName, username,startupCommands,branchName)

showCommands = true; % Also shows outputs of commands (DEBUG)
if showCommands
    viewer = '';    
else
    viewer = '>NUL 2>NUL';
end

% Display what is going on
switch action
    case 'sync'
        disp('Syncing code to node');
    case 'killallp'
        disp('Killing all screen sessions on node');
    case 'runTest'
        disp('Starting Test');
end

% Build command
sshCommand = ['ssh ',masterNode];
testbedCommand = [' "tb -dest ',nodeName,' -act ',action,' -sn ',scriptName,' -sc ',startupCommands,' -u ',username,' -bn ',branchName,' -g ',gitRoot,' -sl ',scriptLocation,'"',viewer];
command = [sshCommand,testbedCommand];

if showCommands
    disp(command);
end

end

