

%% Determine Node# and get offsets for other users (all from roundRobin.m)
load('../offsets.mat');
[~,nodeName]=system('hostname');        
nodeName = nodeName(1:end-1);%remove newline character
for k=1:length(hostnames),if strcmp(nodeName,hostnames{k}),break,end,end;%get node number from hostname
nodeNum = k;
disp(['Node number: ',num2str(k)]);

targetNode = 1;

% Rows represent receiver offsets for a single node from many transmitters
offset = nodeTable_offsets(nodeNum,targetNode);


%% Run receiver

% Build Test
fprintf('Compiling code\n');
compilesdru('testPHYTransmit','mex','-args','{offset}');
fprintf('Compiliation finished\n');
%break;
% Run Tests
testPHYTransmit_mex(offset);
