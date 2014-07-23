function [ output2 ] = Function2(data) %#codegen

assert(isa(data, 'int16'))

fprintf('%d\n',int16(data));

%% Receiver
persistent RX;
%output = 1;

if isempty(RX)
% Setup Receiver
RX = PHYReceiver;
RX.HWAttached = true;
end
input = randi(48*4,1);


fprintf('Receiver Started\n');
output = step(RX,input);

output2 = reshape(output,size(output,1)*size(output,2),1);

end

