classdef AllLayers < matlab.unittest.TestCase
    % This test will exercise an end to end simulation of all layers of the
    % the OFDMA simulation
    
    properties
        
        
    end
    
    methods (Test)
        
        function OverallTest(obj)
            
            import matlab.unittest.TestCase;
            import matlab.unittest.constraints.IsTrue;
            
            testCase = TestCase.forInteractiveUse;
            
            % Build system
            [TxMAC, TxPHY, FF, PF, RxMAC] = obj.BuildSystem;
            
            %% Create frame to process
            frameLength = (20*(64+16)+320);
            frames = 10;
            frame = complex(zeros(frameLength*frames,1));
            
            messageUE1 = 'Message';
            messageUE2 = 'Message';
            
            for k = 1:frames
                bitsToTx1 = step(TxMAC, messageUE1(1,:),messageUE2(1,:));
                frame(1+(k-1)*frameLength:k*frameLength)= step(TxPHY,bitsToTx1);
            end
            
            frame2=[0.0001*randn(1000,1);frame;0.0001*randn(1000,1)];
            
            %% Find frame
            while 1
                [rFrame2, statusFlag] = step(FF,frame2);
                if statusFlag == 0
                    % Check if there is something in the frame
                    if sum(abs(rFrame2))>0
                        
                        rFrameReal = real(rFrame2);
                        rFrameImag = imag(rFrame2);
                        
                        rFrame3 = reshape([rFrameReal rFrameImag]',(20*(64+16)+320)*2,1);
                        
                        break;
                    end
                end
                
            end
            
            %% Signal Correct
            rFrameSplit = reshape(rFrame3,2,(20*(64+16)+320)).';
            rFrame = complex(rFrameSplit(:,1),rFrameSplit(:,2));
            RHard = step(PF,rFrame);
            RHard3 = reshape(double(RHard),48*20,1);
            
            %% OFDMA Decode
            RHard2 = reshape(RHard3,48,20);
            result = step(RxMAC,logical(RHard2));
            
            %% Check result
            x = strcmp(result(2:end),'000Message');
            testCase.verifyThat(x, IsTrue);
            
        end
    end
    
    methods
        
        function [TxMAC, TxPHY, FF, PF, RxMAC] = BuildSystem(~)
            
            %% Transmitter
            % SETUP MAC
            TxMAC = TxOFDMA;
            TxMAC.desiredUser = 1;
            TxMAC.dataType = 'c';
            TxMAC.symbolsPerFrame = 20;
            
            TxPHY = PHYTransmitter;
            TxPHY.HWAttached = false;
            TxPHY.NumDataSymbolsPerFrame = TxMAC.symbolsPerFrame;
            
            %% Receiver
            FF = PHYRxFindFrame;
            FF.NumFrames = 1;
            FF.NumDataSymbolsPerFrame = 20;
            FF.HWAttached = false;
            FF.PeakThreshold = .7;
            FF.requiredPeaks = 7;
            FF.SamplingFrequency= 0.5e6;
            FF.CenterFrequency = 2.2e9;
            
            PF = PHYRxProcessFrame;
            PF.NumDataSymbolsPerFrame = 20;
            PF.SamplingFrequency = 0.5e6;
            
            RxMAC = RxOFDMA;
            RxMAC.dataType = 'c';
            RxMAC.desiredUser = 1;
            RxMAC.symbolsPerFrame = 20;
            
            
        end
        
    end
    
end

