function [data, index] = TestingData(index, FrameLength)


persistent LargeData

if isempty(LargeData)
    x = load('Captured.mat');
    LargeData = x.capturedData;
end

%data = LargeData( (index-1)*FrameLength+1 : index*FrameLength ); 
data = LargeData(:,index); 


end