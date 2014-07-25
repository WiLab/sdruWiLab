function [ output ] = Function2(data) %#codegen

assert(isa(data, 'int16'))

%% Receiver
persistent RX;

if isempty(RX)
% Setup Receiver
RX = PHYReceiver;
RX.HWAttached = false;
end
input = randi(48*4,1);


fprintf('PHY Receiver Started\n');
%outputMatrix = step(RX,input);
outputMatrix = logical(randi([0 1],48*4,1));

output = reshape(outputMatrix,size(outputMatrix,1)*size(outputMatrix,2),1);


end

