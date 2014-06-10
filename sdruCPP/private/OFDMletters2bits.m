function f = OFDMletters2bits(str)
% Encode a string of ASCII text into bits(1,0)
%coder.extrinsic('str2double');
N=length(str);
f=zeros(N,7);                          

% bits = dec2bin(str);
% for k=1:N
%     letter = bits(k,:);
%     %f(k,:) = reshape(sscanf(sprintf('%s#', letter{:}), '%g#'), size(letter));
%     for i = 1:7
%         f(k,i)=str2double(letter(i));
%     end
% end

for k=1:N
    f(k,:) = de2bi(double(str(k)),'left-msb');
end

end