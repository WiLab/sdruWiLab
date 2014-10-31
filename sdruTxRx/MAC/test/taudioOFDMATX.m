

% Read audio data from files entirely in RAM
SamplesPerFrame = 1024;
filename1 = '';
filename2 = '';
AFR1 = dsp.AudioFileReader(filename1,'SamplesPerFrame',SamplesPerFrame);
AFR2 = dsp.AudioFileReader(filename2,'SamplesPerFrame',SamplesPerFrame);


Song1 = [];Song2 = [];

while ~isDone(AFR1) && ~isDone(AFR2) 

% Read
audio1 = step(AFR1);
audio2 = step(AFR2);

% Save to RAM
Song1 = [Song1 audio1];
Song2 = [Song2 audio2];

end

release(AFR1);
release(AFR2);

Frames = length(Song1)/SamplesPerFrame;



%%%% CODEGEN BELOW %%%%
for k = 1:Frames

    % Convert to OFDMA frame
    
    % Transmit
    
end