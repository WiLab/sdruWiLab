function [ rFrame ] = FindSignal() %#codegen

% %% Transmitter (for debugging only)
% persistent TxMAC TxPHY
%  
% if isempty(TxMAC)
%     % SETUP MAC
%     TxMAC = TxOFDMA;
%     TxMAC.desiredUser = 1;
%     TxMAC.dataType = 'c';
%     TxMAC.symbolsPerFrame = 8;
%     
%     TxPHY = PHYTransmitter;
%     TxPHY.HWAttached = false;
%     TxPHY.NumDataSymbolsPerFrame = TxMAC.symbolsPerFrame;
%     
% end
% 
% messageUE1 = ['1st Message';'2nd Message';'3rd Message';'4th Message';'5th Message'];
% messageUE2 = ['First  Message';'Second Message';'Third  Message';'Fourth Message';'Fifth  Message'];
% 
% frameLength = 960;
% frame = complex(zeros(frameLength*10,1));
% 
% for k = 1:10
%     bitsToTx1 = step(TxMAC, messageUE1(1,:),messageUE2(1,:));
%     frame(1+(k-1)*frameLength:k*frameLength)= step(TxPHY,bitsToTx1);
% end
% 
% frame2 = [randn(100,1);frame];

%% Receiver
persistent  FF

if isempty(FF)
    
    FF = PHYRxFindFrame;
    FF.NumFrames = 1;
    FF.NumDataSymbolsPerFrame = 20;

    FF.HWAttached = true;
    FF.PeakThreshold = .7;
    FF.requiredPeaks = 7;

    FF.SamplingFrequency= 1e6;
    
    %FF.ReceiveBufferLength = 1120;%length(frame);
    FF.CenterFrequency = 900e6;

end

% persistent  PF
% 
% if isempty(PF)
%     PF = PHYRxProcessFrame;
% 
%     PF.NumDataSymbolsPerFrame = 8;
% 
%     PF.SamplingFrequency= 2e6;
%     
% end

%tmp = zeros(48,8);
rFrame = ((1:(20*(64+16)+320)*2)');
while 1
    [rFrame2, statusFlag] = step(FF,rFrame);
    if statusFlag == 0
        % Check if there is something in the frame
        if sum(abs(rFrame2))>0
            
            %fprintf('Size of rFrame:%d\n',int16(numel(rFrame2)));
            %x=1:960;
            %rFrame2 = complex(x',x');
            rFrameReal = real(rFrame2);
            rFrameImag = imag(rFrame2);
            
            rFrame = reshape([rFrameReal rFrameImag]',(20*(64+16)+320)*2,1);
            
            %RHard = step(PF,rFrame);
            return;
            
            
        else
            fprintf('Invalid Frame\n')
        end
    end
end

end

