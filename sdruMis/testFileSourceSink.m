function testFileSourceSink

done = 0;
charsPerPacket = 70;
message = char(zeros(1,charsPerPacket));

% Get data to transmit from file, output must be multiple of message size
% fileSource also adds EOF stubs to determine end of file
data = fileSource('monet.jpg',charsPerPacket);


for packet = 1:charsPerPacket:length(data)

    % Pull out message
    message(1:70) = data(packet:packet+charsPerPacket-1);
    done = fileSink( message, 'monet_hat.jpg' );

    % EOF reached?
    if done
        break
    end
    
end

fprintf('Remember to compare output files with md5 or SHA\n');
fprintf('fileSourceSink Test Completed\n');

end