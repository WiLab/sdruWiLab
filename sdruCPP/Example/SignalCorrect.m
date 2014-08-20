function [ RHard2 ] = SignalCorrect(rFrame2) %#codegen

assert(isa(rFrame2, 'single') && isreal(rFrame2) && all(size(rFrame2) == [ 2*(8*(64+16)+320) 1]))

%fprintf('YYr: %.2f c: %.2f\n',real(rFrame(end)),imag(rFrame(end)));

rFrameSplit = single(reshape(rFrame2,2,960)).';

rFrame = single(complex(rFrameSplit(:,1),rFrameSplit(:,2)));

%fprintf('Real %f | Imag %f\n',(sum(real(rFrame))),(sum(imag(rFrame))));
% for k=1:length(rFrame)
%     fprintf('rFrame Sample: %f\n',real(rFrame(k)));
% end


%% Receiver
persistent  PF

if isempty(PF)
    PF = PHYRxProcessFrame;

    PF.NumDataSymbolsPerFrame = 8;

    PF.SamplingFrequency= 1e6;
    
end
%fprintf('----------\n');
%fprintf('%f\n',(sum(rFrame)));
%fprintf('----------\n');
% if ~(sum(abs(rFrame))>0)
%     fprintf('rFrame all zeros 1\n');
%     RHard2 = false(48,8);
%     return;
% end
RHard = false(48,8);
%RHard = (step(PF,rFrame));

%RHard2 = reshape(RHard,numel(RHard),1);

% persistent RxMAC
% 
% if isempty(RxMAC)
%     RxMAC = RxOFDMA;
%     RxMAC.dataType = 'c';
%     RxMAC.desiredUser = 1;
%     RxMAC.symbolsPerFrame = 8;
% end

RHard2 = (reshape(RHard,48*8,1));

%step(RxMAC,RHard);

end

