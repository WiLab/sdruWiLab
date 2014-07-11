function f = OFDMletters2bits(str)
% Encode a string of ASCII text into bits(1,0)
N=length(str);
f=zeros(N,7);                          

if coder.target('Rtw')
	runInDLL=1;
else
	coder.extrinsic('str2double');
	runInDLL=0;
end

bits = dec2bin(str);
for k=1:N
    letter = bits(k,:);
    for i = 1:7
   		if runInDLL
        	f(k,i)=coder.ceval('atoi',c_string(letter(i)));
    	else
        	f(k,i)=str2double(letter(i));
    	end
    end
end


% Create a NUL terminated C string given a MATLAB string
function y = c_string(s)
y = [s 0];
