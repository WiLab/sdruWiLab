function StartNode(gitRoot, scriptLocation, scriptName, nodeName, username, startupCommands)

masterNode = 'travis@monadnock.ece.wpi.edu';

% Kill currently running jobs on node
action = 'killallp';
command = BuildCommand( action, masterNode, gitRoot, scriptLocation, scriptName, nodeName, username,startupCommands);
system(command);

% Sync code to target node
action = 'sync';
command = BuildCommand( action, masterNode, gitRoot, scriptLocation, scriptName, nodeName, username,startupCommands);
system(command);

% Start Script
action = 'runTest';
command = BuildCommand( action, masterNode, gitRoot, scriptLocation, scriptName, nodeName, username,startupCommands);
system(command);

% Finalize
disp('Test started, attached to screens');

end

function command = BuildCommand( action, masterNode, gitRoot, scriptLocation, scriptName, nodeName, username,startupCommands)

showCommands = false; % Also shows outputs of commands (DEBUG)
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
testbedCommand = [' "tb -dest ',nodeName,' -act ',action,' -sn ',scriptName,' -sc ',startupCommands,' -u ',username,' -g ',gitRoot,' -sl ',scriptLocation,'"',viewer];
command = [sshCommand,testbedCommand];

if showCommands
    disp(command);
end

end

