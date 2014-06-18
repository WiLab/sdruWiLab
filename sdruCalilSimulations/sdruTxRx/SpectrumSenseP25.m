function decisions = SpectrumSenseP25( ObjAGC, ObjSDRuReceiver, tx )

            
% Collect Data
N = 10;
data = complex(zeros(tx.receiveBufferLength,N));
for k = 1:N
    tmp = step(ObjSDRuReceiver);
    data(:,k) = step(ObjAGC,tmp);
end

decisions = zeros(N,1);
for k = 1:N
    % 64 represents the window time Tw, 4*N represents the observation time T
    
    %Sx = commP25sscaGen(data(1:4096,k),1,1/128,1/(128));
    %commP25sscaGen(data(:,1),1,1/64,1/(51120));
    
    decisions(k) = mean(abs(fft(data(1:4096,k))));
    
    %[c,d] = size(Sx);
    %[Ades,Index] = sort(Sx(:),'descend');   % sort Sx by its element and store in Ades
    %[Ridx,Cidx]  = ind2sub(size(Sx),Index); % corresponding row index and column index
    %leng = length(Ades);
    
    %decisions(k) = commP25decision_noiseGen(Ades,Ridx,Cidx,leng,c,d);
    
end

end