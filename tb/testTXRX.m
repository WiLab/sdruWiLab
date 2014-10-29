% This test will Start one receiver and one transmitter
% Get IP's from https://gitlab.com/travisfcollins/sdruwilab/wikis/wake-on-lan

% RX
gitRoot = '/home/sdruser/git/traviscollins/sdruWiLab';% No trailing slash (/)
scriptLocation = 'sdruCPP/OFDMA/';
scriptName = 'builder_rx';
nodeName = '130.215.17.3';
username = 'traviscollins';
startupCommands = 'findsdru';
StartNode(gitRoot, scriptLocation, scriptName, nodeName, username, startupCommands)

break;

% TX
gitRoot = '/home/sdruser/git/traviscollins/sdruWiLab';% No trailing slash (/)
scriptLocation = 'sdruCPP/OFDMA/';
scriptName = 'builder_tx';
nodeName = '130.215.23.73';
username = 'traviscollins';
startupCommands = 'findsdru';
StartNode(gitRoot, scriptLocation, scriptName, nodeName, username, startupCommands)