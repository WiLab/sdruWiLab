classdef PHYReceiver < OFDMPHYBase
    
    % OFDM Physical Layer Receiver
    properties (Nontunable)
        ReceiveBufferLength = 740;%ceil( rx.frameLength*4 ); %Size of Buffer of sliding window
        CenterFrequency = 2.24e9;
        NumFrames = 4;              % Frames to capture
        HWAttached = false;
        padBits = 0;
        FrameLength = 640;
    end
    
    properties (Access = protected)
        

        % Variables
        pTimeoutDuration
        phi
        delay
        phase
        frequencyMA
        
        % Objects
        pAGC
        pSDRuReceiver
        pCRC
        
        % Vector Memory
        %pMessageBits
        pOutputBits
    	Buffer
        pilotEqGains
        preambleEqGains
        
    end
    
    methods (Access = protected)
        function setupImpl(obj,~)
            
            % Create Preamble data
            CreatePreambles(obj);

            %% Create Modulator objects
            CreateDemodulators(obj);
            
            %% Pre-initialize estimates to be saved between numFrames
            obj.phi = 0;
            obj.frequency = zeros(obj.numFreqToAverage,1);
            obj.phase = 0;
            obj.frequencyMA = 0;
            obj.numProcessed = 0; %Tracking number of processed found numFrames
            obj.delay = 0;
            obj.pilotEqGains = complex(zeros(obj.numCarriers, obj.hDataDemod.NumSymbols));
            obj.preambleEqGains = complex(zeros(obj.FFTLength-sum(obj.NumGuardBandCarriers),1));
            
            %% Setup Receiver
            % System parameters to adjust because of hardware limitation

            USRPADCSamplingRate = 100e6;
            DecimationFactor = USRPADCSamplingRate/obj.SamplingFrequency;          
            offsetCompensationValue = 0;% Get from calibration
            
            % Gain control
            obj.pAGC = comm.AGC('UpdatePeriod', obj.ReceiveBufferLength); % Value must be constant, equal to rx.receiveBufferLength
            
            % USRP
            if obj.HWAttached
                obj.pSDRuReceiver = comm.SDRuReceiver( '192.168.10.2', ...
                    'CenterFrequency',      obj.CenterFrequency + offsetCompensationValue, ...
                    'DecimationFactor',     DecimationFactor,...
                    'FrameLength',          obj.ReceiveBufferLength,...
                    'OutputDataType',       'double',...
                    'Gain',                 18,...
		    'SampleRate',	    obj.SamplingFrequency);
            end
            
            % CRC
            obj.pCRC = comm.CRCDetector([1 0 0 1], 'ChecksumsPerFrame',1);
            
            % Timeout info
            buffersPerSecond = (100e6/DecimationFactor)/obj.ReceiveBufferLength;
            obj.pTimeoutDuration = floor(buffersPerSecond*0.05);
            
            % Soft decisions
            %obj.pMessageBits = zeros(obj.NumFrames,obj.MessageCharacters*7+3);%3 for CRC
            obj.pOutputBits = zeros(obj.NumFrames,obj.numCarriers);%3 for CRC
            
            
	    obj.Buffer = complex(zeros(obj.ReceiveBufferLength,1));

	    obj.FrameLength = obj.NumDataSymbolsPerFrame*(obj.FFTLength+obj.CyclicPrefixLength)+length(obj.Preambles);
	    

        end
        
        function [RHard, statusFlag] = stepImpl(obj,data)
            % Receive Data
            
            statusFlag = 0; % 0==noFail,1==Timeout
            
            %DEBUG
            DebugFlag = 0;
            %DEBUG
            
            RHard = logical(zeros(obj.NumFrames,obj.numCarriers));
            
            obj.numProcessed = 0; % # correct frames found
            lastFound = -2; %Flag for found frame, used for dup check
            numBuffersProcessed = 0; %Track received data, needed for separate indexing of processed and unprocessed data (processed==preamble found)
                        
            % Message string holder
            %coder.varsize('recoveredMessage', [1, 80], [0 1]);
            %recoveredMessage = '';
            
            %% Process received data
            % Locate frames in buffer and compensate for channel affects
            while obj.numProcessed < obj.NumFrames
                
                disp('Looped');
	
                % Get data from USRP or Input
                if obj.HWAttached
                    obj.Buffer(1:obj.ReceiveBufferLength) = step(obj.pSDRuReceiver);
                else
                    obj.Buffer(1:obj.ReceiveBufferLength) = data( numBuffersProcessed*obj.ReceiveBufferLength + 1 :...
                                 ( numBuffersProcessed + 1)*obj.ReceiveBufferLength);
                end
                if sum(obj.Buffer(1:obj.ReceiveBufferLength))==0
                    % All zeros from radio (Bug?)
                    if DebugFlag ;fprintf('All zeros (Bug?)\n');end;
                    continue;
                end
                
                % Automatic Gain Control
                obj.Buffer = step(obj.pAGC, obj.Buffer(1:obj.ReceiveBufferLength)  );
                
                % Increment processed data index
                numBuffersProcessed = numBuffersProcessed + 1;
                
                %% Find preamble in buffer
                [obj.delay, numPeaks] = locateOFDMFrame_sdr( obj, obj.Buffer );
                
                % Check if frame exists in correct location and whether it's duplicate
                FrameFound = ((obj.delay + obj.FrameLength) < length(obj.Buffer) ) &&... %Check if full data frame exists in buffer
                    (obj.delay > -1 ) &&... %Check if preamble located
                    ((numBuffersProcessed-lastFound) >= 2 ); %Check if duplicate frame
                
                %% Recover found frame
                if FrameFound

                    lastFound = numBuffersProcessed;%Flag frame as found so duplicate frames are not processed
                    obj.numProcessed = obj.numProcessed + 1;%Increment processed found frames
                    
                    % Extract single frame from input buffer
                    rFrame = obj.Buffer(obj.delay + 1 : obj.delay + obj.FrameLength);
                    
                    % Correct frequency offset
                    [ rFreqShifted ] = coarseOFDMFreqEst_sdr( obj, rFrame );
                    
                    % Equalize
                    [ RPostEqualizer ] = equalizeOFDM( obj, rFreqShifted );
                    
                    % Demod subcarriers
                    [ ~, RHard ] = demodOFDMSubcarriers_sdr( obj, RPostEqualizer );
                  
                    % Save for later decoding and CRC
                    %obj.pMessageBits(obj.numProcessed,:) = RHard;
                    %obj.pOutputBits(obj.numProcessed,:) = RHard;
                    
                end
                
                %% Timeout
                %fprintf('%f\n',numBuffersProcessed);
                %fprintf('%f\n',timeoutDuration);
                if numBuffersProcessed > obj.pTimeoutDuration
                    if DebugFlag ;fprintf('PHY| Receiver timed out\n');end;
                    recoveredMessage = 'Timeout';
		    statusFlag = 1;
                    return;
                end
            end
            
            % Decode Bits
            %recoveredMessage = DecodeMessages( obj, obj.pMessageBits );
            %recoveredMessage = obj.pOutputBits;    
            %recoveredMessage = RHard;	
            
        end
        
    end
end
