function noise_decision = commP25decision_noiseGen(Ades,Ridx,Cidx,leng,c,d)

%   Copyright 2012 The MathWorks, Inc.

count = 0;                  % count the number of points above a threshold
num = 0;
threshold = 2500;

for i = 1:leng
    if Ades(i)>threshold
        count = count + 1;
    else break;
    end
end

x_axis=Ridx(1:count); % record the x-coordinate of these points
y_axis=Cidx(1:count); % record the y-coordinate of these points

a = length(unique(x_axis));
for i = 1:count
    if y_axis(i)==round(d*0.5)
        num=num+1;
    end
end
if (a==c-2) && (num==c-2)
    noise_decision=1;
    %fprintf('There is no P25 signal.\n')
else
    noise_decision=0;
    %fprintf('There is signal present. Checking for presence of C4FM.\n')
end