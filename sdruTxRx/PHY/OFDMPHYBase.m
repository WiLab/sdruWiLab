classdef OFDMPHYBase < matlab.System
    % OFDM Physical Layer Base Class
    
    properties
        % Public, tunable properties.
        numDataSymbols = 10;
    end
    
    properties (Access = protected)
        % OFDM Sys Config
        FFTLength = 64;         % OFDM modulator FFT size
        enableMA = true;    % Enable moving averages for estimates
        numFrames = 30;%30     % Make larger to reduce underflow on USRP
        
        numCarriers = 48;
        CyclicPrefixLength = 16;
        PilotCarrierIndices = [12;26;40;54];
        NumGuardBandCarriers = [6;5];
        
        shortPreamble
        shortPreambleOFDM
        completeShortPreambleOFDM
        
        longPreamble
        longPreambleOFDM
        completeLongPreambleOFDM
        
        % Objects
        hPreambleMod
        hPreambleDemod
        hDataDemod
        
        
        % Pre-computed constants.
        numFreqToAverage = 15;
        samplingFreq = 5e6;
        numProcessed = 0;
        
        % Timing Recovery Tunable
        PeakThreshold = 0.6
        requiredPeaks = 7;
    end
    
    methods (Access = protected)
        %%%%%%%%%%%% OFDM System Setup %%%%%%%%%%%%%%%%
        function CreateDemodulators(obj)
            
            % Construct Modulator
            hDataMod = OFDMModulator(...
                'CyclicPrefixLength',   obj.CyclicPrefixLength,...
                'FFTLength' ,           obj.FFTLength,...
                'NumGuardBandCarriers', obj.NumGuardBandCarriers,...
                'NumSymbols',           obj.numDataSymbols,...
                'PilotInputPort',       true,...
                'PilotCarrierIndices',  obj.PilotCarrierIndices,...
                'InsertDCNull',         true);
            % Construct Demod from mod
            obj.hDataDemod = OFDMDemodulator(hDataMod);
            
            % Construct Demod from mod
            obj.hPreambleDemod = OFDMDemodulator(obj.hPreambleMod);
            
        end
        
        function CreatePreambles(obj)
            %% Create Short Preamble
            obj.shortPreamble = [ 0 0  1+1i 0 0 0  -1-1i 0 0 0 ... % [-27:-17]
                1+1i 0 0 0  -1-1i 0 0 0 -1-1i 0 0 0   1+1i 0 0 0 ... % [-16:-1]
                0    0 0 0  -1-1i 0 0 0 -1-1i 0 0 0   1+1i 0 0 0 ... % [0:15]
                1+1i 0 0 0   1+1i 0 0 0  1+1i 0 0 ].';               % [16:27]
            
            % Create modulator
            obj.hPreambleMod = OFDMModulator(...
                'NumGuardBandCarriers', [6; 5],...
                'CyclicPrefixLength',   0,...
                'FFTLength' ,           64,...
                'NumSymbols',           1);
            
            % Modulate and scale
            obj.shortPreambleOFDM = sqrt(13/6)*step(obj.hPreambleMod, obj.shortPreamble);
            
            % Form 10 Short Preambles
            obj.completeShortPreambleOFDM = [obj.shortPreambleOFDM; obj.shortPreambleOFDM; obj.shortPreambleOFDM(1:32)];
            
            %% Create Long Preamble
            obj.longPreamble = [1,  1, -1, -1,  1,  1, -1,  1, -1,  1,  1,  1,...
                1,  1,  1, -1, -1,  1,  1, -1,  1, -1,  1,  1,  1,  1, 0,...
                1, -1, -1,  1,  1, -1,  1, -1,  1, -1, -1, -1, -1, -1,...
                1,  1, -1, -1,  1, -1,  1, -1,  1,  1,  1,  1].';
            
            % Modulate
            obj.longPreambleOFDM = step( obj.hPreambleMod, complex(obj.longPreamble,0) );
            
            % Form 2 Long Preambles
            obj.completeLongPreambleOFDM =[obj.longPreambleOFDM(33:64); obj.longPreambleOFDM; obj.longPreambleOFDM];
            
        end
        
        %%%%%%%%%%%% FREQUENCY CORRECTION %%%%%%%%%%%%%
        function rFreqShifted = coarseOFDMFreqEst( obj, rFrame )
            % coarseOFDMFreqEst: Frequency Correction based on the Schmidl and Cox
            % method, utilizing halves of the short preamble from the 802.11a standard
            L=obj.FFTLength/2;
            P = sum( conj(rFrame(1:L)  ) .* rFrame(1+L:L*2)  ); %Cross-correlate preamble
            phi = angle(P); % Determine phase angle between preamble halves
            
            if obj.numProcessed < obj.numFreqToAverage% Buffer not full
                obj.frequency(obj.numProcessed) = phi/(2*pi*L/obj.samplingFreq); % Convert angle to frequency
            else
                obj.frequency = [obj.frequency(2:end);0];
                obj.frequency(end) = phi/(2*pi*L/obj.samplingFreq);
            end
            
            % Apply frequency estimate
            rFreqShifted = freqCorrectOFDM( obj, rFrame, obj.numFreqToAverage  );
            
        end
        
        function rFreqShifted = freqCorrectOFDM( obj, rFrame )
            % freqCorrectOFDM: Apply frequency offset to input signal, this offset can
            % be generated through a moving average if enabled
            
            % Enable moving averages for estimates
            if obj.numProcessed < obj.numFreqToAverage % Buffer not full
                
                frequencyMA = mean(obj.frequency(1:obj.numProcessed));
                
                % Apply frequency correction
                t = 0: 1/obj.samplingFreq : (length(rFrame)-1)/obj.samplingFreq;
                rFreqShifted = exp(1i*frequencyMA*t.').*rFrame;
                
            else % Full buffer
                
                frequencyMA = mean(obj.frequency);
                
                % Apply frequency correction
                t = 0: 1/tx.samplingFreq : (length(rFrame)-1)/obj.samplingFreq;
                rFreqShifted = exp(1i*frequencyMA*t.').*rFrame;
                
            end
            
        end
        
        %%%%%%%%%%%%%%%%%%%%% TIMING SYNC %%%%%%%%%%%%%%%%%%%%%%%%
        function [preambleEstimatedLocation, numPeaks ] = locateOFDMFrame_sdr( obj , recv)
            % locateOFDMFrame: Locate 802.11a based preamble from input data stream.
            % It is assumed that the received signal is still in the time domain.  The
            % location of the start of the preamble will be returned, if not found -1
            % is returned
            
            %% Timing Estimate
            windowLength = ceil(length(recv)/4);
            L = obj.FFTLength;
            K = obj.FFTLength/4; % Quarter of short preamble sequence
            known = obj.shortPreambleOFDM(1:K);
            
            % Cross correlate
            rWin = recv(1:windowLength-L+K-1);
            Phat = xcorr(rWin,conj(known));
            Rhat = xcorr(abs(rWin).^2,ones(K,1)); % moving average
            
            % Remove leading and tail zeros overlaps
            PhatShort = Phat(ceil(length(Phat)/2):end-K/2+1);
            RhatShort = Rhat(ceil(length(Rhat)/2):end-K/2+1);
            
            % Calculate timing metric
            M = abs(PhatShort).^2 ./ RhatShort.^2;
            
            % Determine start of short preamble
            [preambleEstimatedLocation, numPeaks] = locateShortpreamble( obj, M, K );
            
        end
        
        
        function [preambleEstimatedLocation, numPeaks] = locateShortpreamble( obj, M, K )
            %#codegen
            % Locate of the start of the actual preamble from timing metric
            
            %% Find peaks of correlation
            
            % Adjust threshold
            thresholdNorm = max(M)*obj.PeakThreshold;
            MLocations = find(M>thresholdNorm);
            
            % Correct estimate to start of preamble not its center
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
            
            
        end
        %%%%%%%%%%%%%%%% EQUALIZER %%%%%%%%%%%%%%%%%%%
        function [R, Rraw] = equalizeOFDM( obj, recv )
            %#codegen
            % equalizeOFDM: Equalize the entire OFDM frame through the use of both
            % the long preamble from the 802.11a standard and four pilot tones in
            % the data frames themselves.  The gains from the pilots are
            % interpolated across frequency to fill the data frame and apply gains
            % to all data subcarriers.
            
            %% Use Long Preamble frame to estimate channel in frequency domain
            % Separate out received preambles
            rLong = recv(length(obj.completeShortPreambleOFDM)+1 : length(obj.completeShortPreambleOFDM)+length(obj.completeLongPreambleOFDM));
            rLongFirst = rLong(33:32+length(tx.longPreambleOFDM));
            rLongSecond = rLong(33+length(obj.longPreambleOFDM) : 32+length(obj.longPreambleOFDM)*2);
            
            % Demod
            RLongFirst = step(obj.hPreambleDemod, rLongFirst); %First half of long preamble
            RLongSecond = step(obj.hPreambleDemod, rLongSecond); %Second half of long preamble
            
            %% Preamble Equalization
            % Get Equalizer tap gains
            preambleEqGains = preambleFDE([RLongFirst, RLongSecond], [tx.longPreamble, tx.longPreamble], obj.hDataDemod);
            
            % Separate data from preambles
            %recvData = recv(length(tx.preambles)+1:length(tx.preambles)+(hDataDemod.NumSymbols)*(tx.FFTLength+hDataDemod.CyclicPrefixLength));
            recvData = recv(320+1:1280); % CG
            
            % OFDM Demod
            [Rraw, RXPilots] = step(obj.hDataDemod, recvData);
            
            % Expand equalizer gains to full frame size
            preambleGainsFull = repmat(preambleEqGains ,1 , obj.hDataDemod.NumSymbols);
            
            % Isolate pilot gains from preamble equalizer
            preamblePilotGains = preambleGainsFull(obj.pilotLocationsWithoutGuardbands,:); % Needed to correctly adjust pilot gains
            
            % Apply preamble equalizer gains to data and pilots
            RXPilots = preamblePilotGains.*RXPilots; %Correct pilots
            R = preambleGainsFull(obj.dataSubcarrierIndexies,:).*Rraw;%Correct data
            
            %% Pilot Equalization
            % Get pilot-based equalizer gains
            pilotEqGains = pilotFDE(RXPilots, obj.pilots, 12);
            
            % Apply Equalizer from Pilots
            R = pilotEqGains.*R;
            
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
        function PilotGainsFull = pilotFDE(rxPilots, txPilots, upSampleFactor)
            
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
        function [BER, RHard] = demodOFDMSubcarriers_sdr( R )
            %#codegen
            % demodOFDMSubcarriers: Hard demodulate then compare received and
            % transmitted data
            
            % Demodulate subcarrier data
            RLinear = reshape(R,size(R,1)*size(R,2),1);
            RHard = RLinear(1:end-obj.padBits) < 0; %Bits
            
            % Decode received text
            %estimate.message = OFDMbits2letters(RHard > 0);
            
            % Check results (remove CRC for compare)
            %BER = sum(RHard(1:end-3)~=tx.originalData)/numel(RHard);
            BER = 1;
            
            % Save additional information
            %estimate.totalFrameErrors(estimate.numProcessed) = sum(RHard~=tx.originalData);
            %estimate.totalFrameBits(estimate.numProcessed) = numel(RHard);
            
        end
        
        %%%%%%%%%%%%%%% DATA DECODER %%%%%%%%%%%%%%
        %% Decode Messages: Convert from bits to characters
        function recoveredMessage = DecodeMessages( obj, messageBits )
            
            for recMessage = 1:obj.numProcessed
                % CRC Check
                [msg, err] = step(obj.CRC, messageBits(recMessage,:).'>0);
                
                if ~err
                    % Convert Bits to characters
                    message = char(OFDMbits2letters(msg > 0).');%messageBits(recMessage,1:end-3)
                    %Remove padding
                    messageEnd = strfind(message,'EOF');
                    if ~isempty(messageEnd)
                        recoveredMessage = message(1:messageEnd(1,1)-1);
                        if DebugFlag ;fprintf('PHY| Message recovered: %s\n',recoveredMessage); end;
                    end
                else
                    if DebugFlag ;fprintf('PHY| CRC Message Failure\n');end;
                    %View corrupted messages
                    %recoveredMessage = char(OFDMbits2letters(msg > 0).');%messageBits(recMessage,1:end-3)
                    %fprintf('Corrupted Message: %s\n',recoveredMessage);
                    recoveredMessage = 'CRC Error';
                end
            end
        end
        
    end
end
