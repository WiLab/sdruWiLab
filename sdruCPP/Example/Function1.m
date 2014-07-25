function [ output ] = Function1(input) %#codegen


assert(isa(input, 'logical') && all(size(input) == [48*4 1]))
fprintf('Inside MATLAB MAC, got data from PHY\n');
%% Transmitter
persistent MAC 
N = 4;
 
if isempty(MAC)
    % SETUP MAC
    MAC = RxOFDMA;
    MAC.desiredUser = 1;
    MAC.dataType = 'u';
    MAC.symbolsPerFrame = N;
end

inputMatrix = reshape(input,48,N);

fprintf('MAC Layer Decoding...\n');
step(MAC,inputMatrix);
fprintf('MAC Layer Decoded\n');
output = 1;

end

