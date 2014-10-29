% This test will only run the receiver

gitRoot = '/home/sdruser/git/traviscollins/sdruWiLab';% No trailing slash (/)
scriptLocation = 'sdruCPP/OFDMA/';
scriptName = 'builder_rx';
nodeName = '130.215.17.3';
StartNode(gitRoot, scriptLocation, scriptName, nodeName)