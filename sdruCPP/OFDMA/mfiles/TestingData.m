function [data, index] = TestingData(index, FrameLength)


persistent LargeData

if isempty(LargeData)
    x = coder.load('Captured.mat','-mat');
    
    LargeData = complex(zeros(1920,8000));
    LargeData = x.capturedData;
end

%data = LargeData( (index-1)*FrameLength+1 : index*FrameLength ); 
if index > 8000
	index = 1;
    fprintf('Cycled\n');
end

data = LargeData(:,index); 

index = index + 1;

end
