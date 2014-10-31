function outputLin = CorrectBits(str)
% % Message
% %output = [1,0,1,0,1,1,0,1,0,0,1,1,0,0,0,0,0,0,1,1,0,0,0,0,0,0,1,1,0,0,0,0,0,1,0,0,1,1,0,1,0,1,1,0,0,1,0,1,0,1,1,1,0,0,1,1,0,1,1,1,0,0,1,1,0,1,1,0,0,0,0,1,0,1,1,0,0,1,1,1,0,1,1,0,0,1,0,1,0,1,0,0,0,1,0,1,0,1,0,0,1,1,1,1,0,1,0,0,0,1,1,0];
% 
% % GoWiLab
% %output = [1,0,0,0,0,1,1,1,0,0,1,1,0,0,0,0,0,0,1,1,0,0,0,0,0,0,1,1,0,0,0,0,0,1,0,0,0,1,1,1,0,1,1,0,1,1,1,1,0,1,0,1,0,1,1,1,0,1,1,0,1,0,0,1,0,1,0,0,1,1,0,0,0,1,1,0,0,0,0,1,0,1,1,0,0,0,1,0,0,1,0,0,0,1,0,1,0,1,0,0,1,1,1,1,0,1,0,0,0,1,1,0];
% 
% DLL = ~strcmp(coder.target,'');
% if DLL
%     x = coder.load('messageBitsMessage.mat');
%     output = x.messageBits(1,:);
% else
%     x = load('messageBitsMessage.mat');
%     output = x.messageBits(1,:);
% end

output = OFDMdecimal2bits(str);

outputLin = reshape(output.', numel(output),1);

end

%% Conversion to bits
function f = OFDMdecimal2bits(str)
% Encode a string of ASCII text into bits(1,0)
DLL = ~strcmp(coder.target,'');
N=length(str);
f=zeros(N,8);

bits = dec2bin(str,8);
for k=1:N
    letter = bits(k,:);
    for i = 1:8
        if DLL
            f(k,i)=coder.ceval('atoi',c_string(letter(i)));
        else
            f(k,i)=str2double(letter(i));
        end
    end
end

end
% Create a NUL terminated C string given a MATLAB string
function y = c_string(s)
y = [s 0];
end