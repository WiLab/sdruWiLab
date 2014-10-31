

%% Determine Node# and get offsets for other users (all from roundRobin.m)
load('../offsets.mat');
[~,nodeName]=system('hostname');        
nodeName = nodeName(1:end-1);%remove newline character
for k=1:length(hostnames),if strcmp(nodeName,hostnames{k}),break,end,end;%get node number from hostname
nodeNum = k;
disp(['Node number: ',num2str(k)]);

TransmittingNode = 2;

% Rows represent receiver offsets for a single node from many transmitters
offset = nodeTable_offsets(TransmittingNode,nodeNum);
fprintf('Offset: %f\n',offset);

%% Run receiver

% Build Test
fprintf('Compiling code\n');
compilesdru('testPHYReceive','mex','-args','{offset}');
fprintf('Compiliation finished\n');
%break;
% Run Tests
testPHYReceive_mex(offset);
