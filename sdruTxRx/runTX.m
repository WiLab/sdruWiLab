
%% Determine Node# and get offsets for other users (all from roundRobin.m)
load('../offsets.mat');
[~,nodeName]=system('hostname');        
nodeName = nodeName(1:end-1);%remove newline character
for k=1:length(hostnames),if strcmp(nodeName,hostnames{k}),break,end,end;%get node number from hostname
nodeNum = k;
disp(['Node number: ',num2str(k)]);

% Rows represent receiver offsets for a single node from many transmitters
offsets = nodeTable_offsets(nodeNum,:);


%% Run receiver

% Build Test
fprintf('Compiling code\n');
compilesdru('testMACTransmitter','mex','-args','{offsets,nodeNum}');
fprintf('Compiliation finished\n');
%break;
% Run Tests
testMACTransmitter_mex(offsets, nodeNum);
