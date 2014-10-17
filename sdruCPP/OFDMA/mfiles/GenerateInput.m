function output = GenerateInput()

persistent index framesWithGaps largeData

if isempty(index) || isempty(largeData) || isempty(framesWithGaps)
    
    index = 1;
    DLL = ~strcmp(coder.target,'');
    if DLL
        x = coder.load('Captured.mat');
    else
        x = load('Captured.mat');
    end
    largeData = x.capturedData;
    framesWithGaps = complex(zeros(1520*2,1));

end


framesWithGaps(1:1520*1) = framesWithGaps(1521:end);
framesWithGaps(1520*1+1:end) = largeData(:,index);
index = index + 1;
if index ==200
	index = 1;
end

output = framesWithGaps;

end
