classdef PHYReceiverBase < matlab.System
    
    % OFDM Physical Layer Receiver
    properties (Nontunable)
        CenterFrequency = 2.2e9;
        NumFrames = 1; % Frames to capture
        HWAttached = false;
        padBits = 0;
        FrameLength = 640;
    end
    
    properties
        delay = 0;
    end
    
    % OFDM Physical Layer Base Class
    properties (Nontunable)
        
        % Timing Recovery Tunable
        PeakThreshold = 0.7
        requiredPeaks = 7;
        
        NumDataSymbolsPerFrame = 1;
        FFTLength = 64;     % OFDM modulator FFT size
        enableMA = true;    % Enable moving averages for estimates
        numFreqToAverage = 50;
        SamplingFrequency = 2e6;
        
        numCarriers = 48;
        CyclicPrefixLength = 16;
        PilotCarrierIndices = [12;26;40;54];
        NumGuardBandCarriers = [6;5];
        
    end
    
    properties (Access = protected)
        
        % Variables
        pTimeoutDuration
        phi
        phase
        frequencyMA
        ReceiveBufferLength % Size of Buffer of sliding window
        
        % Objects
        pAGC
        pSDRuReceiver
        pCRC
        
        % Vector Memory
        pOutputBits
        Buffer
        pilotEqGains
        preambleEqGains
        
        % Sync
        K
        ConjKnown
        KnownRev
        CorrelationWindowSize
        
        % Vectors
        PreviousSig
        dataSubcarrierIndexies
        Preambles
        
        frequency
        
        ShortPreamble
        ShortPreambleOFDM
        CompleteShortPreambleOFDM
        
        LongPreamble
        LongPreambleOFDM
        CompleteLongPreambleOFDM
        
        pilots
        pilotLocationsWithoutGuardbands
        
        % Objects
        hPreambleMod
        hPreambleDemod
        hDataDemod
        hDataMod
        CRC
        
        % Variables
        numProcessed
        
    end
    
    methods (Access = protected)
        
        function setupFrameFinder(obj,~)
            
            % Must call the following methods before this one
            % CreatePreambles(obj) and CreateDemodulators(obj);
            
            obj.delay = -1;
            
            obj.PreviousSig = complex(zeros(200,1));
            
            obj.FrameLength = obj.NumDataSymbolsPerFrame*(obj.FFTLength+obj.CyclicPrefixLength)+length(obj.Preambles);
            
            obj.ReceiveBufferLength = obj.FrameLength*2;
            
            obj.Buffer = complex(zeros(obj.ReceiveBufferLength,1));
            
            
            %% Setup Hardware Receiver
            % System parameters to adjust because of hardware limitation
            USRPADCSamplingRate = 100e6;
            DecimationFactor = floor(USRPADCSamplingRate/obj.SamplingFrequency);
            offsetCompensationValue = 0;% Get from calibration
            
            % USRP
            if obj.HWAttached
                obj.pSDRuReceiver = comm.SDRuReceiver( '192.168.10.2', ...
                    'CenterFrequency',      obj.CenterFrequency + offsetCompensationValue, ...
                    'DecimationFactor',     DecimationFactor,...
                    'FrameLength',          obj.FrameLength,...
                    'OutputDataType',       'double',...
                    'Gain',                 18,...
                    'SampleRate',           1/obj.SamplingFrequency,...
                    'EnableBurstMode',      false);
            end
            
            % Timeout info
            buffersPerSecond = (100e6/DecimationFactor)/obj.ReceiveBufferLength;
            obj.pTimeoutDuration = floor(buffersPerSecond*0.05*100000);
            
            
            % Frame locator setup
            windowLength = ceil(obj.ReceiveBufferLength*4/4);
            L = obj.FFTLength;
            obj.K = obj.FFTLength/4; % Quarter of short preamble sequence
            known = obj.ShortPreambleOFDM(1:obj.K);
            obj.ConjKnown = conj(known);
            obj.KnownRev = conj(obj.ConjKnown(end:-1:1));
            obj.CorrelationWindowSize = windowLength-L+obj.K-1;
            
        end
        
        function setupProcessFrame(obj)
            
            % Gain control
            obj.pAGC = comm.AGC('UpdatePeriod',  obj.FrameLength/10); % Value must be constant, equal to rx.receiveBufferLength
            
            % Pre-initialize estimates to be saved between numFrames
            obj.frequency = zeros(obj.numFreqToAverage,1);
            obj.phase = 0;
            obj.frequencyMA = 0;
            obj.numProcessed = 0; %Tracking number of processed found numFrames
            obj.pilotEqGains = complex(zeros(obj.numCarriers, obj.hDataDemod.NumSymbols));
            obj.preambleEqGains = complex(zeros(obj.FFTLength-sum(obj.NumGuardBandCarriers),1));
            
            
        end
        
        function [rFrame, statusFlag] = FindFrame(obj,data)
            
            % Receive Data
            statusFlag = 1; % 0==noFail,1==Timeout
            
            %DEBUG
            DebugFlag = 0;
            %DEBUG
            
            rFrame = complex(zeros(obj.FrameLength,1));
            
            numFoundFrames = 0;
            numBuffersProcessed = 0; %Track received data, needed for separate indexing of processed and unprocessed data (processed==preamble found)
            dropMe = false;
            
            % Locate frames in buffer
            while numFoundFrames < obj.NumFrames
                
                
                % Get data from USRP or Input
                if obj.HWAttached % Get data from usrp
                    obj.Buffer(1:obj.FrameLength) = obj.Buffer(obj.FrameLength+1:end);% Shift old samples down
                    obj.Buffer(obj.FrameLength+1:end) =  step(obj.pSDRuReceiver);% Shift in new samples
                    if dropMe
                        dropMe = false;
                        continue;
                    end
                    
                else % Process data from input vector
                    if (( numBuffersProcessed + 1)*obj.FrameLength ) < length(data)
                        
                        obj.Buffer(1:obj.FrameLength) = obj.Buffer(obj.FrameLength+1:end);
                        
                        obj.Buffer(obj.FrameLength+1:end) = ...
                            data( numBuffersProcessed*obj.FrameLength + 1 : ( numBuffersProcessed + 1)*obj.FrameLength);
                        
                    else % No more data left in simulated buffer
                        statusFlag = 1;
                        if DebugFlag;fprintf('Frame not found, end of buffer\n');end;
                        return;
                    end
                end
                
                % All zeros from radio (Bug?)
                %if DebugFlag
                    if sum(obj.Buffer)==0
                        if DebugFlag ;fprintf('All zeros (Bug?)\n');end;
                        numBuffersProcessed = numBuffersProcessed + 1;
                        continue;
                    %else
                        %if DebugFlag ;fprintf('Got some data\n');end;
                    end
                %end
                
                % Increment processed data index (primarily for timeout)
                numBuffersProcessed = numBuffersProcessed + 1;
                
                % Find preamble in buffer
                [obj.delay, ~] = locateOFDMFrame_sdr( obj, obj.Buffer );
                
                % Check if frame exists in correct location and whether it's duplicate
                %Dupe = ( numBuffersProcessed-lastFound<2 )&& (obj.delay<length(obj.Buffer)/2);
                Dupe = false;
                FrameFound = ((obj.delay + obj.FrameLength) < length(obj.Buffer) ) &&... %Check if full data frame exists in buffer
                    (obj.delay > -1 ) &&... %Check if preamble located
                    (~Dupe); %Check if duplicate frame
                
                %% Frame Decision
                if FrameFound
                    if DebugFlag;fprintf('Frame found\n');end;
                    %fprintf('Frame found\n');
                    statusFlag = 0;
                    rFrame = obj.Buffer(obj.delay + 1 : obj.delay + obj.FrameLength);% Extract single frame from input buffer
                    
                    if ~(sum(obj.PreviousSig(1:200)-rFrame(1:200))==0) %Duplicate check
                        numFoundFrames = numFoundFrames + 1;
                    end
                    
                    obj.PreviousSig(1:200) = rFrame(1:200);
                else
                    statusFlag = 1;
                    % Display why missed frame
                    if DebugFlag
                        if ( (obj.delay + obj.FrameLength) > length(obj.Buffer) )
                            fprintf('Frame at end of buffer\n');
                        elseif (obj.delay < 0)
                            fprintf('Preamble not found\n');
                        elseif Dupe
                            fprintf('Duplicate frame\n');
                        end
                    end
                    % Timeout
                    if numBuffersProcessed > obj.pTimeoutDuration
                        if DebugFlag ;fprintf('PHY| Receiver timed out\n');end;
                        statusFlag = 1;
                        return;
                    end
                end
            end
        end
        
        function RHard = ProcessFrame(obj,rFrame)
            %% Recover found frame
            
            obj.numProcessed = obj.numProcessed + 1; % Required for frequency correction
            %rFrame = step(obj.pAGC, rFrame); % AGC
            
            % Correct frequency offset
            if sum(abs(rFrame))==0
                fprintf('All zero rFrame\n');
            end
            [ rFreqShifted ] = coarseOFDMFreqEst_sdr( obj, rFrame );
            
            % Equalize
            if sum(abs(rFreqShifted))==0
                fprintf('All zero rFreqShifted\n');
            end
            [ RPostEqualizer ] = equalizeOFDM( obj, rFreqShifted );
            
            % Demod subcarriers
            if sum(sum(abs(double(RPostEqualizer))))==0
                fprintf('All zero RPostEqualizer\n');
            end
            [ ~, RHard]= demodOFDMSubcarriers_sdr( obj, RPostEqualizer );
            
            
        end
        
        
        %%%%%%%%%%%% OFDM System Setup %%%%%%%%%%%%%%%%
        function CreateDemodulators(obj)
            
            % Construct Modulator
            obj.hDataMod = comm.OFDMModulator(...
                'CyclicPrefixLength',   obj.CyclicPrefixLength,...
                'FFTLength' ,           obj.FFTLength,...
                'NumGuardBandCarriers', obj.NumGuardBandCarriers,...
                'NumSymbols',           obj.NumDataSymbolsPerFrame,...
                'PilotInputPort',       true,...
                'PilotCarrierIndices',  obj.PilotCarrierIndices,...
                'InsertDCNull',         true);
            % Construct Demod from mod
            obj.hDataDemod = comm.OFDMDemodulator(obj.hDataMod);
            
            % Construct Demod from mod
            obj.hPreambleDemod = comm.OFDMDemodulator(obj.hPreambleMod);
            
            obj.pilotLocationsWithoutGuardbands = obj.PilotCarrierIndices-obj.NumGuardBandCarriers(1);
            % Calculate locations of subcarrier datastreams without guardbands
            TMPdataSubcarrierIndexies = 1:obj.FFTLength-sum(obj.NumGuardBandCarriers);%Remove guardband offsets
            DCNullLocation = 33 - obj.NumGuardBandCarriers(1);%Remove index offsets for pilots and guardbands
            TMPdataSubcarrierIndexies([obj.pilotLocationsWithoutGuardbands;DCNullLocation]) = 0;%Remove pilot and DCNull locations
            %obj.dataSubcarrierIndexies = [1:5,7:19,21:26,28:33,35:47,49:53];
            
            obj.dataSubcarrierIndexies = TMPdataSubcarrierIndexies(TMPdataSubcarrierIndexies>0);
            
            obj.CRC = comm.CRCDetector([1 0 0 1], 'ChecksumsPerFrame',1);
            
            
        end
        
        function CreatePreambles(obj)
            
            %% Create Short Preamble
            obj.ShortPreamble = [ 0 0  1+1i 0 0 0  -1-1i 0 0 0 ... % [-27:-17]
                1+1i 0 0 0  -1-1i 0 0 0 -1-1i 0 0 0   1+1i 0 0 0 ... % [-16:-1]
                0    0 0 0  -1-1i 0 0 0 -1-1i 0 0 0   1+1i 0 0 0 ... % [0:15]
                1+1i 0 0 0   1+1i 0 0 0  1+1i 0 0 ].';               % [16:27]
            
            % Create modulator
            obj.hPreambleMod = comm.OFDMModulator(...
                'NumGuardBandCarriers', [6; 5],...
                'CyclicPrefixLength',   0,...
                'FFTLength' ,           64,...
                'NumSymbols',           1);
            
            % Modulate and scale
            obj.ShortPreambleOFDM = sqrt(13/6)*step(obj.hPreambleMod, obj.ShortPreamble);
            
            % Form 10 Short Preambles
            obj.CompleteShortPreambleOFDM = [obj.ShortPreambleOFDM; obj.ShortPreambleOFDM; obj.ShortPreambleOFDM(1:32)];
            
            %% Create Long Preamble
            obj.LongPreamble = [1,  1, -1, -1,  1,  1, -1,  1, -1,  1,  1,  1,...
                1,  1,  1, -1, -1,  1,  1, -1,  1, -1,  1,  1,  1,  1, 0,...
                1, -1, -1,  1,  1, -1,  1, -1,  1, -1, -1, -1, -1, -1,...
                1,  1, -1, -1,  1, -1,  1, -1,  1,  1,  1,  1].';
            
            % Modulate
            obj.LongPreambleOFDM = step( obj.hPreambleMod, complex(obj.LongPreamble,0) );
            
            % Form 2 Long Preambles
            obj.CompleteLongPreambleOFDM =[obj.LongPreambleOFDM(33:64); obj.LongPreambleOFDM; obj.LongPreambleOFDM];
            
            % Combine Preambles
            obj.Preambles = [obj.CompleteShortPreambleOFDM; obj.CompleteLongPreambleOFDM];
            
            % Create Pilots
            hPN = comm.PNSequence(...
                'Polynomial',[1 0 0 0 1 0 0 1],...
                'SamplesPerFrame', obj.NumDataSymbolsPerFrame,...
                'InitialConditions',[1 1 1 1 1 1 1]);
            
            %pilot=[1 0  0  1  0  0  1  0  0  0  0  0]';
            pilot = step(hPN); % Create pilot
            pilotsTmp = repmat(pilot, 1, 4 ); % Expand to all pilot tones
            obj.pilots = 2*double(pilotsTmp.'<1)-1; % Bipolar to unipolar
            obj.pilots(4,:) = -1*obj.pilots(4,:); % Invert last pilot
            
            
        end
        
        %%%%%%%%%%%% FREQUENCY CORRECTION %%%%%%%%%%%%%
        function rFreqShifted = coarseOFDMFreqEst_sdr( obj, rFrame )
            % coarseOFDMFreqEst: Frequency Correction based on the Schmidl and Cox
            % method, utilizing halves of the short preamble from the 802.11a standard
            L=obj.FFTLength/2;
            P = sum( conj(rFrame(1:L)  ) .* rFrame(1+L:L*2)  ); %Cross-correlate preamble
            obj.phi = angle(P); % Determine phase angle between preamble halves
            
            if obj.numProcessed < obj.numFreqToAverage% Buffer not full
                obj.frequency(obj.numProcessed) = obj.phi/(2*pi*L/obj.SamplingFrequency); % Convert angle to frequency
            else
                obj.frequency = [obj.frequency(2:end);0];
                obj.frequency(end) = obj.phi/(2*pi*L/obj.SamplingFrequency);
            end
            
            % Apply frequency estimate
            rFreqShifted = freqCorrectOFDM( obj, rFrame );
            
        end
        
        function rFreqShifted = freqCorrectOFDM( obj, rFrame )
            % freqCorrectOFDM: Apply frequency offset to input signal, this offset can
            % be generated through a moving average if enabled
            
            % Enable moving averages for estimates
            if obj.numProcessed < obj.numFreqToAverage % Buffer not full
                
                obj.frequencyMA = mean(obj.frequency(1:obj.numProcessed));
                
                % Apply frequency correction
                t = 0: 1/obj.SamplingFrequency : (length(rFrame)-1)/obj.SamplingFrequency;
                rFreqShifted = exp(-1i*obj.frequencyMA*t.').*rFrame;
                
            else % Full buffer
                
                obj.frequencyMA = mean(obj.frequency);
                
                % Apply frequency correction
                t = 0: 1/obj.SamplingFrequency : (length(rFrame)-1)/obj.SamplingFrequency;
                rFreqShifted = exp(-1i*obj.frequencyMA*t.').*rFrame;
                
            end
            
            %fprintf('FreqEst: %f\n',obj.frequencyMA);
            
        end
        
        %% %%%%%%%%%%%%%%%%%%% TIMING SYNC %%%%%%%%%%%%%%%%%%%%%%%%
        function [preambleEstimatedLocation, numPeaks ] = locateOFDMFrame_sdr( obj , recv)
            % locateOFDMFrame: Locate 802.11a based preamble from input data stream.
            % It is assumed that the received signal is still in the time domain.  The
            % location of the start of the preamble will be returned, if not found -1
            % is returned
            
            %% Timing Estimate
            
            
            % Cross correlate
            rWin = recv(1:obj.CorrelationWindowSize);
            %Phat = xcorr(rWin,obj.ConjKnown);
            %Rhat = xcorr(abs(rWin).^2,ones(obj.K,1)); % moving average
            
            % Remove leading and tail zeros overlaps
            %PhatShort = Phat(ceil(length(Phat)/2):end-obj.K/2+1);
            %RhatShort = Rhat(ceil(length(Rhat)/2):end-obj.K/2+1);
            
            % Fast correlate
            %PhatShort2 = filter(conj(obj.ConjKnown(end:-1:1)),1,rWin(1:end));
            PhatShort2 = filter(obj.KnownRev,1,rWin(1:end));
            %RhatShort2 = filter(ones(obj.K,1),1,abs(rWin).^2);
            
            PhatShort2 = PhatShort2(obj.K:end);
            %RhatShort2 = RhatShort2(obj.K:end);
            
            %PhatShort2 = PhatShort2+ones(size(PhatShort2))*0.0001;
            %RhatShort2 = RhatShort2+ones(size(PhatShort2))*0.0001;
            %PhatShort2(PhatShort2<0.001) = 0;
            %RhatShort2(RhatShort2<0.001) = 0;
            
            %M2 = abs(PhatShort).^2; %./ RhatShort.^2;
            M = abs(PhatShort2).^2; %./ RhatShort2.^2;
            
            %figure(1);stem(M);
            
            % Determine start of short preamble
            [preambleEstimatedLocation, numPeaks] = locateShortPreamble( obj, M, obj.K );
            
            %             % View found location
            %             if preambleEstimatedLocation > 0
            %             figure(1);stem(M);
            %             hold on;tmp = zeros(size(M));tmp(preambleEstimatedLocation) = M(preambleEstimatedLocation+(obj.K/2+1));
            %             stem(tmp,'r');hold off;
            %             return;
            %             end
        end
        
        
        function [preambleEstimatedLocation, numPeaks] = locateShortPreamble( obj, M, K )
            % Locate of the start of the actual preamble from timing metric
            
            %% Find peaks of correlation
            
            % Adjust threshold (remove first outlier)
            %savedM = M;
            %[~,loc] = max(M);
            %M(loc) = 0;
            thresholdNorm = max(M)*obj.PeakThreshold;
            %M = savedM;
            MLocations = find(M>thresholdNorm);
            
            % Correct estimate to start of preamble, not its center
            MLocations = MLocations - (K/2+1);
            
            % Frame Detection
            peaks = zeros(size(MLocations));
            
            % Determine correct peak
            desiredPeakLocations = (16:16:128).';% Based on preamble structure
            for i = 1:length(MLocations)
                MLocationGuesses = MLocations(i)+desiredPeakLocations;
                peaks(i) = length(intersect(MLocations(i:end),MLocationGuesses));
            end
            
            % Have at least N peaks for positive match
            peaks(peaks < obj.requiredPeaks) = 0;
            
            
            % Pick earliest peak in time
            if ~isempty(peaks)
                [numPeaks, frontPeakLocation] = max(peaks);
                %if peaks(frontPeakLocation-1) == (peaks(frontPeakLocation)-1)
                %    frontPeakLocation = frontPeakLocation - 1;
                %end
                if ~isempty(frontPeakLocation) && ( numPeaks > 0 )
                    preambleEstimatedLocation = MLocations(frontPeakLocation);
                else
                    preambleEstimatedLocation = -1; % no desirable location found
                end
            else
                preambleEstimatedLocation = -1;
                numPeaks = 0;
            end
            % Normalize max peaks found
            numPeaks = numPeaks/numel(desiredPeakLocations);
            
            
            %             x = zeros(size(M));
            %             y = zeros(size(M));
            %             if preambleEstimatedLocation>-1
            %             y(preambleEstimatedLocation) = max(M);
            %             end
            %             x(MLocations) = max(M);
            %             %figure(1);hold on;stem(x);hold off;
            %             figure(1);hold on;stem(y);hold off;
            %
            %             x=1;
            
        end
        %% %%%%%%%%%%%%%% EQUALIZER %%%%%%%%%%%%%%%%%%%
        function [R, Rraw] = equalizeOFDM( obj, recv )
            % equalizeOFDM: Equalize the entire OFDM frame through the use of both
            % the long preamble from the 802.11a standard and four pilot tones in
            % the data frames themselves.  The gains from the pilots are
            % interpolated across frequency to fill the data frame and apply gains
            % to all data subcarriers.
            
            %% Use Long Preamble frame to estimate channel in frequency domain
            % Separate out received preambles
            rLong = recv(length(obj.CompleteShortPreambleOFDM)+1 : length(obj.CompleteShortPreambleOFDM)+length(obj.CompleteLongPreambleOFDM));
            rLongFirst = rLong(33:32+length(obj.LongPreambleOFDM));
            rLongSecond = rLong(33+length(obj.LongPreambleOFDM) : 32+length(obj.LongPreambleOFDM)*2);
            
            % Demod
            RLongFirst = step(obj.hPreambleDemod, rLongFirst); %First half of long preamble
            RLongSecond = step(obj.hPreambleDemod, rLongSecond); %Second half of long preamble
            
            %% Preamble Equalization
            % Get Equalizer tap gains
            obj.preambleEqGains = preambleFDE( obj, [RLongFirst, RLongSecond], [obj.LongPreamble, obj.LongPreamble]);
            
            % Separate data from preambles
            recvData = recv(length(obj.Preambles)+1:length(obj.Preambles)+(obj.NumDataSymbolsPerFrame)*(obj.FFTLength+obj.CyclicPrefixLength));
            %recvData = recv(320+1:1280); % CG
            
            % OFDM Demod
            [Rraw, RXPilots] = step(obj.hDataDemod, recvData);
            
            % Expand equalizer gains to full frame size
            preambleGainsFull = repmat(obj.preambleEqGains ,1 , obj.hDataDemod.NumSymbols);
            
            % Isolate pilot gains from preamble equalizer
            preamblePilotGains = preambleGainsFull(obj.pilotLocationsWithoutGuardbands,:); % Needed to correctly adjust pilot gains
            
            % Apply preamble equalizer gains to data and pilots
            RXPilots = preamblePilotGains.*RXPilots; %Correct pilots
            R = preambleGainsFull(obj.dataSubcarrierIndexies,:).*Rraw;%Correct data
            
            %% Pilot Equalization
            % Get pilot-based equalizer gains
            obj.pilotEqGains = pilotFDE(obj, RXPilots, obj.pilots, 12);
            
            % Apply Equalizer from Pilots
            R = obj.pilotEqGains.*R;
            
        end
        
        % Calculate Equalizer Taps with preamble symbols
        function RGains = preambleFDE(obj, R, Known )
            
            % Calculate non-normalized channel gains
            R = R(1:(obj.hDataDemod.FFTLength-sum(obj.hDataDemod.NumGuardBandCarriers)),1:2);
            RNormal = R./Known; % Known is the original Long Preamble symbols
            
            % Scale channel gains
            REnergy = mean(abs(RNormal).^2,2);
            RConj = conj(mean(RNormal,2));
            RGains = RConj./ REnergy;
            
        end
        
        % Calculate Equalizer Taps with pilot symbols
        function PilotGainsFull = pilotFDE(~, rxPilots, txPilots, upSampleFactor)
            
            % Calculate non-normalized channel gains
            PilotNormal = rxPilots./txPilots;
            
            % Scale channel gains
            PilotEnergy = abs(PilotNormal).^2;
            PilotConj = conj(PilotNormal);
            PilotGains = PilotConj./ PilotEnergy;
            
            % Interpolate to data carrier size
            PilotGainsFull = resample(PilotGains, upSampleFactor, 1);
            
        end
        
        %%%%%%%%%%%%%%% SUBCARRIER DEMOD %%%%%%%%%%%%%%%
        function [BER, RHard] = demodOFDMSubcarriers_sdr( ~, R )
            %#codegen
            
            % Demodulate subcarrier data
            RHard = R<0;
            BER = 1;
            
        end
        
        % Do nothing aka waste time
        function Wait(obj,timeToWait)
            
            % Calculate how many buffer needed to step through to wait
            % desired time
            timeToFillBuffer = obj.pSDRuReceiver.FrameLength / obj.SamplingFrequency;
            buffersToProcess = ceil(timeToWait/timeToFillBuffer);
            % Use SDR as time measurement
            for buffer = 1:buffersToProcess
                step(obj.pSDRuReceiver);
            end
            
        end
        
        % Simple Energy detection and thresholding
        function [decision,meanEnergy] = SpectrumSenseEnergy( obj )
            
            % Collect Data
            N = 2;% buffers to collect
            data = complex(zeros(obj.pSDRuReceiver.receiveBufferLength,N));
            for k = 1:N
                tmp = step(ObjSDRuReceiver);
                data(:,k) = step(obj.pAGC,tmp);
            end
            
            % Make decision
            meanEnergy = mean(mean(abs(fft(data(1:4096,:)))));% Needs to be base 2 CG
            decision = 0;
            threshold = 50;% Experimentally determined
            if meanEnergy > threshold
                decision = 1;
            end
            
            
        end
        
        % Enable secondary outputs from object
        function N = getNumOutputsImpl(~)
            N = 2;
        end
        
    end
end
