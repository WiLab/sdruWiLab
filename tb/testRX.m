% This test will only run the receiver

%% RX
gitRoot = '/home/sdruser/git/traviscollins/sdruWiLab';% No trailing slash (/)
scriptLocation = 'sdruCPP/OFDMA/';
scriptName = 'builder_rx';
nodeName = '130.215.17.3';
username = 'traviscollins';
startupCommands = 'findsdru';
branchName = 'testing';
StartNode(gitRoot, scriptLocation, scriptName, nodeName, username, startupCommands,branchName)
