classdef OFDMPHYBase < matlab.System
    
    % OFDM Physical Layer Base Class
    properties (Nontunable)
        
        % Timing Recovery Tunable
        PeakThreshold = 0.2
        requiredPeaks = 7;
        
        NumDataSymbolsPerFrame = 1;
        FFTLength = 64;     % OFDM modulator FFT size
        enableMA = true;    % Enable moving averages for estimates
        numFreqToAverage = 15;
        SamplingFrequency = 5e6;
        
        numCarriers = 48;
        CyclicPrefixLength = 16;
        PilotCarrierIndices = [12;26;40;54];
        NumGuardBandCarriers = [6;5];
    
        
    end

    properties (Access = protected)

                
        % Sync
        K
        ConjKnown
        CorrelationWindowSize
        
        % Vectors
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
        %%%%%%%%%%%% OFDM System Setup %%%%%%%%%%%%%%%%
        function CreateDemodulators(obj)
            
            % Construct Modulator
            obj.hDataMod = OFDMModulator(...
                'CyclicPrefixLength',   obj.CyclicPrefixLength,...
                'FFTLength' ,           obj.FFTLength,...
                'NumGuardBandCarriers', obj.NumGuardBandCarriers,...
                'NumSymbols',           obj.NumDataSymbolsPerFrame,...
                'PilotInputPort',       true,...
                'PilotCarrierIndices',  obj.PilotCarrierIndices,...
                'InsertDCNull',         true);
            % Construct Demod from mod
            obj.hDataDemod = OFDMDemodulator(obj.hDataMod);
            
            % Construct Demod from mod
            obj.hPreambleDemod = OFDMDemodulator(obj.hPreambleMod);
            
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
            obj.hPreambleMod = OFDMModulator(...
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
        
        
        function Letters = OFDMbits2letters( ~, bits )
            % OFDMbits2letters: Convert input bits from a double array to ascii
            % integers, which can be converted to letters by the char() function
            
            % Make input into column
            bits = bits(:);
            
            %Trim extra bits
            bits = bits(1: floor(length(bits)/7)*7);
            
            %Shape into letters
            bits = reshape(bits, 7, length(bits)/7).';
            
            %Convert bits to letters
            Letters = zeros(size(bits,1),1);
            for i = 1:size(bits,1)
                Letters(i) = char(bin2dec(dec2bin(bits(i,:)).'));
            end
            
        end
        
        function f = OFDMletters2bits(obj,str)
            % Encode a string of ASCII text into bits(1,0)
            DLL = ~strcmp(coder.target,'');
            N=length(str);
            f=zeros(N,7);
            
            bits = dec2bin(str);
            for k=1:N
                letter = bits(k,:);
                for i = 1:7
                    if DLL
                        f(k,i)=coder.ceval('atoi',c_string(obj,letter(i)));
                    else
                        f(k,i)=str2double(letter(i));
                    end
                end
            end
            
            
        end
        % Create a NUL terminated C string given a MATLAB string
        function y = c_string(~,s)
            y = [s 0];
        end
    end
end
