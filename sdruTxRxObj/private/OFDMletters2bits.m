function f = OFDMletters2bits(str)
% Encode a string of ASCII text into bits(1,0)
%coder.extrinsic('str2double');
N=length(str);
f=zeros(N,7);                          

bits = dec2bin(str);
for k=1:N
    letter = bits(k,:);
    for i = 1:7
        %f(k,i)=str2double(letter(i));
<<<<<<< HEAD
        f(k,i) = coder.ceval('atoi',letter(i));
=======
        f(k,i)=coder.ceval('atoi',letter(i));
>>>>>>> FETCH_HEAD
    end
end
