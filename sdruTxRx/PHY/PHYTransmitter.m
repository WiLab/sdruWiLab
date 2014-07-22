classdef PHYTransmitter < OFDMPHYBase
% Physical Layer Transmitter: Accepts matrix of 48xN, where N is the number
% of symbols in a frame.  There is only one frame accepted per step.

    properties (Nontunable)
        CenterFrequency = 2.24e9;
        HWAttached = false;
        DupeFrames = 0;
    end
    
    properties (Access = private)
        pSDRuTransmitter
        pCRCGen
        pMod
        pPN
    end
    
    methods (Access = protected)
        function setupImpl(obj,~)
            
            
            % Create Preamble data
            CreatePreambles(obj);
            
            % Create Modulator objects
            CreateDemodulators(obj);
            
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
            
            % PNSequence Generator
            %numDataSymbols = length(input)/obj.numCarriers;
            numDataSymbols = obj.NumDataSymbolsPerFrame;
            obj.pPN = comm.PNSequence(...
                'Polynomial',[1 0 0 0 1 0 0 1],...
                'SamplesPerFrame', numDataSymbols,...
                'InitialConditions',[1 1 1 1 1 1 1]);
            
            % Change modulator to support multiple symbols
            obj.hDataMod.NumSymbols = numDataSymbols;
            
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
            
            % Apply modulator for each subcarrier
            modData = step(obj.pMod, dataWithCRC);
            
%             % Pad IFFT
%             padBits = obj.numCarriers - mod(length(modData),obj.numCarriers);
%             if padBits == obj.numCarriers
%                 padBits = 0;
%             end
%             %modData = [modData; step(obj.pMod,randi([0 1],padBits,1))];
%             modData = [modData; step(obj.pMod,zeros(padBits,1))];
            % Calculate required data sizes for correct receiver operation
%             numSamples = length(modData);
%             messageCharacters = length(payloadMessage); % Save desired message size
            
            % Convert data into subcarrier streams
            ofdmData = reshape(modData, obj.numCarriers, length(modData)/obj.numCarriers);
            
            % Add preambles to data
            r = [obj.Preambles; step(obj.hDataMod, ofdmData, obj.pilots)];
            frameLength = length(r);
            
            % Repeat frame (Used in debugging)
            frame = repmat(r, obj.DupeFrames+1, 1);
            
        end
        
    end
end

