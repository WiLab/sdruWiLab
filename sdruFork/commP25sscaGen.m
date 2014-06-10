% This function is written according to (1) Figure 3 and Figure 5 of the
% reference: E. L. Da Costa, "Detection and Identification of
% Cyclostationary Signals". MS Thesis. 1996. (2) Section 3.2 of the
% reference: Eric April, "On the Implementation of the Strip Spectral
% Correlation Algorithm for Cyclic Spectrum Estimation". February, 1994.

%   Copyright 2012 The MathWorks, Inc.

function [Sx,alphao,fo] = commP25sscaGen(input,fs,df,dalpha)
% fs is sampling frequency, df is spectral resolution, dalpha is cyclic
% resolution
%narginchk(4,4);              % check the number of input variables

% Definition of Parameters
N = fs/dalpha;               % observation time T in discrete domain
Np = fs/df;                  % window time Tw in discrete domain, Eq (18)
L = Np/4;                    % number of overlap samples
P = fs/(L*dalpha);           % Eq (19), we can also get N = P*L
alphao = (-1:1/N:1)*fs;      % cyclic frequency (alpha)
fo = (-0.5:1/Np:0.5)*fs;     % spectral frequency (f)

% Input vector processing, the length of input vector will be made to N
if length(input)<N
    %input(N) = 0;           % pad zeros
    input2=[input;zeros(N-length(input),1)];
else
    input2 = input(1:N);     % truncate input to length N
end

% Implement Figure 3 in (1): Computation of the Complex Demodulates
% Construct input matrix in Figure 3, call it x
NN = (P-1)*L+Np;            % number of elements in x matrix
%xx = input;
if length(input2)<NN
    %xx(NN) = 0;             % pad zeros
    xx = [input2;zeros(NN-length(input2),1)];
else    
    xx = input2(1:NN);          % truncate input to length NN
end
x = complex(zeros(Np,P));            % x matrix initialization
for k = 0:P-1
    x(:,k+1) = xx(k*L+1:k*L+Np);
end

% Windowing
a = hamming(Np);           % Construct N'-point Hamming window
XWin = diag(a)*x;          % Output of N'-point Hamming window

% Centered N'-point FFT (zero frequency in the 0 bin)
XFFT1 = fftshift(fft(XWin)); 
X = [XFFT1(:,P/2+1:P) XFFT1(:,1:P/2)];

% Downshift in frequency
E = complex(zeros(Np,P));
for idxl = -Np/2:Np/2-1    % length of l is Np
    for k = 0:P-1          % length of k is P
        E(idxl+Np/2+1,k+1) = exp(-1i*2*pi*k*L*idxl/Np);
    end
end
XT = X.*E;                 % Output of Figure 3

% Implement Figure 5 in (1): Implementation of the SSCA
% Replication, repeat the k-th column of XT (XT(:,k)) L times
XRep = complex(zeros(Np,P*L));
for k = 1:P
    XRep(:,(k-1)*L+1:k*L) = XT(:,k)*ones(1,L);
end

% Multiplication
% Convert input vector into a matrix, the vector first becomes a row
% vector, and repeat Np times. xc is (Np,N), the same size as XR
inputRep = ones(Np,1)*input2';
XMul = conj((XRep.*inputRep)');

% Centered N-point FFT (zero frequency in the 0 bin)
XFFT2 = fftshift(fft(XMul));
XFFT2 = [XFFT2(:,Np/2+1:Np) XFFT2(:,1:Np/2)]; % Output of Figure 5

M = abs(XFFT2);

% Convert M to Sx
Sx = zeros(Np+1,2*N+1);
for k1 = 1:N
    k2 = 1:Np;
    alpha = (k1-1)/N + (k2-1)/Np - 1;
    f = ((k2-1)/Np - (k1-1)/N) / 2;
    k = 1 + Np*(f+0.5);
    n = 1 + N*(alpha+1);
    for k2 = 1:Np
        Sx(round(k(k2)),round(n(k2))) = M(k1,k2);
    end
end