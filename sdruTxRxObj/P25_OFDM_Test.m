function P25_OFDM_Test

% P25 OFDM Test
N = 4096;
input = wgn(4*N,1,1);

% 64 represents the window time Tw, 4*N represents the observation time T
[Sx,alphao,fo] = commP25ssca(input,1,1/64,1/(4*N));

[c,d] = size(Sx);
[Ades,Index] = sort(Sx(:),'descend');   % sort Sx by its element and store in Ades
[Ridx,Cidx]  = ind2sub(size(Sx),Index); % corresponding row index and column index
leng = length(Ades);

noise_decision = commP25decision_noiseGen(Ades,Ridx,Cidx,leng,c,d)
%--------
% P25 OFDM Test
desiredSamplingFrequency = 5e6;

[~,~, input ] = generateOFDMSignal_TX2( 'UnimportantMessage', desiredSamplingFrequency, 1, 1);

% 64 represents the window time Tw, 4*N represents the observation time T
%[Sx,alphao,fo] = commP25ssca(input,1,1/64,1/(4*N));
[Sx,alphao,fo] = commP25sscaGen(input,1,1/64,1/(length(input)));

[c,d] = size(Sx);
[Ades,Index] = sort(Sx(:),'descend');   % sort Sx by its element and store in Ades
[Ridx,Cidx]  = ind2sub(size(Sx),Index); % corresponding row index and column index
leng = length(Ades);

noise_decision = commP25decision_noiseGen(Ades,Ridx,Cidx,leng,c,d)
end