classdef PHYTransmitter < matlab.System
% Physical Layer Transmitter: Accepts matrix of 48xN, where N is the number
% of symbols in a frame.  There is only one frame accepted per step.

    properties (Nontunable)
        CenterFrequency = 2.24e9;
        HWAttached = false;
        DupeFrames = 0;
        
        NumDataSymbolsPerFrame = 1;
        CodeRate = 3;
        FFTLength = 64;     % OFDM modulator FFT size
        SamplingFrequency = 1e6;
        
        numCarriers = 48;
        CyclicPrefixLength = 16;
        PilotCarrierIndices = [12;26;40;54];
        NumGuardBandCarriers = [6;5];

    end
    
    properties (Access = private)
        pSDRuTransmitter
        pCRCGen
        pMod
        pPN
        
        Encoder
        
        Scram
        
    end
    
    properties (Access = protected)
        
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
        function setupImpl(obj,~)
            
            % BCH Encoder
            obj.Encoder = comm.BCHEncoder('CodewordLength',15, ...
                'MessageLength',5);
            obj.CodeRate = obj.Encoder.CodewordLength/...
                obj.Encoder.MessageLength;
            obj.Scram = comm.Scrambler(2, [1 0 1 1 0 1],...
                'InitialConditions',[0 0 1 1 0 ]);
            
            % PNSequence Generator
            %numDataSymbols = length(input)/obj.numCarriers;
            numDataSymbols = obj.NumDataSymbolsPerFrame*obj.CodeRate;
            obj.pPN = comm.PNSequence(...
                'Polynomial',[1 0 0 0 1 0 0 1],...
                'SamplesPerFrame', numDataSymbols,...
                'InitialConditions',[1 1 1 1 1 1 1]);

            % Create Preamble data
            CreatePreambles(obj);
            
            % Create Modulator objects
            CreateDemodulators(obj);
            
            % Change modulator to support multiple symbols
            obj.hDataMod.NumSymbols = numDataSymbols;
            
            % Setup USRP
            USRPADCSamplingRate = 100e6;
            InterpolationFactor = USRPADCSamplingRate/obj.SamplingFrequency;
            
            % Setup transmitter
            if obj.HWAttached
                obj.pSDRuTransmitter = comm.SDRuTransmitter('192.168.10.2', ...
                    'CenterFrequency',      obj.CenterFrequency, ...
                    'InterpolationFactor',  InterpolationFactor,...
                    'Gain',                 25);
            end
            
            % CRC Generator
            obj.pCRCGen = comm.CRCGenerator([1 0 0 1], 'ChecksumsPerFrame',1);
            
            
            % Construct modulator for each subcarrier
            obj.pMod = comm.BPSKModulator; % BPSK
            
            

            
        end
        
        function frame = stepImpl(obj,data)
            
            
            frame = CreateOFDMFrame(obj, data);
            numFrames = 1;
            % Transmit frames 1 at a time
            for frames = 1:numFrames
                if obj.HWAttached
                    step(obj.pSDRuTransmitter,frame);%1 Frame per row
                else
                    fprintf('Pew pew\n');
                end
            end
            
        end
    end
    
    
    methods
        function [frame,frameLength] = CreateOFDMFrame( obj, payloadMessage )
            
            
            
            % payloadMessage: Will always be a matrix
            % The size must be fixed between calls, they may be a
            % workaround for this with varsize, but not sure yet
            %
            % This assumes the input is a matrix of bits (doubles
            % 1's and 0's)
            
            % Use string as message
            %payloadMessage = OFDMletters2bits(obj,payloadMessage);
            originalData = reshape(payloadMessage,size(payloadMessage,1)*size(payloadMessage,2),1);
            
            % Generate CRC
            %dataWithCRC = step(obj.pCRCGen, originalData);% Add CRC
            dataWithCRC = originalData;
            
            % Encode
            encoded = step(obj.Encoder,dataWithCRC);
            scrambled = step(obj.Scram,encoded);
            
            % Apply modulator for each subcarrier
            modData = step(obj.pMod, scrambled);
            
            % Convert data into subcarrier streams
            ofdmData = reshape(modData, obj.numCarriers, length(modData)/obj.numCarriers);
            
            % Add preambles to data
            r = [obj.Preambles; step(obj.hDataMod, ofdmData, obj.pilots)];
            frameLength = length(r);
            
            % Repeat frame (Used in debugging)
            frame = repmat(r, obj.DupeFrames+1, 1);
            
        end
        
        %%%%%%%%%%%% OFDM System Setup %%%%%%%%%%%%%%%%
        function CreateDemodulators(obj)
            
            % Construct Modulator
            obj.hDataMod = OFDMModulator(...
                'CyclicPrefixLength',   obj.CyclicPrefixLength,...
                'FFTLength' ,           obj.FFTLength,...
                'NumGuardBandCarriers', obj.NumGuardBandCarriers,...
                'NumSymbols',           obj.NumDataSymbolsPerFrame*obj.CodeRate,...
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
                'SamplesPerFrame', obj.NumDataSymbolsPerFrame*obj.CodeRate,...
                'InitialConditions',[1 1 1 1 1 1 1]);
            
            %pilot=[1 0  0  1  0  0  1  0  0  0  0  0]';
            pilot = step(hPN); % Create pilot
            pilotsTmp = repmat(pilot, 1, 4 ); % Expand to all pilot tones
            obj.pilots = 2*double(pilotsTmp.'<1)-1; % Bipolar to unipolar
            obj.pilots(4,:) = -1*obj.pilots(4,:); % Invert last pilot
            
            
        end
        
        
    end
end

