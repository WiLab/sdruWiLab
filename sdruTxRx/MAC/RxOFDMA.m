classdef RxOFDMA < matlab.System
    
    % RxOFDMA   OFDMA receiver conversion from bits to char, error checking and
    % user demultiplexing for 2 users.
    
    %% Define nontunable properties
    properties(Nontunable)
        
        numUsers = 2;
        numCarriers = 48;
        carriersPerUser = 24; % numCarrier/numUsers, remember to change if they change
        symbolsPerFrame = 10;
        headerCharacters = 4;
        CRClength = 3;
        dataType = 'u';
        
    end
    
    %% Define properties
    properties
        
        desiredUser;
        lastFrame;
        lastMessage;
        lastHeader;
        padBits;
        
        % Object handle
        pDetect;
        
        % Flags
        debugFlag = 0;
        ignoreCRC = 1;
        
    end
    
    %% Methods
    methods(Access = protected)
        %% Setup function
        function setupImpl(obj,~)
            
            obj.pDetect = comm.CRCDetector([1 0 0 1], 'ChecksumsPerFrame',1);
            
        end
        
        %% Step function
        function returnedMessage = stepImpl(obj,receivedFrame)
            %% User demultiplex
            userFrame = receivedFrame((obj.desiredUser*obj.carriersPerUser-obj.carriersPerUser+1):...
                obj.desiredUser*obj.carriersPerUser,:);
            
            userBits = reshape(userFrame,1,obj.carriersPerUser*obj.symbolsPerFrame);
            
            %% Eliminate pad bits
            
            % Extract number of pad bits from beggining of frame
            obj.padBits = OFDMbits2letters(obj,userBits(1:8));
            
            unpaddedBits = userBits(1:end-obj.padBits);
            
            %% CRC check and convert to letters
            
            % Initialize matrix
            recoveredMessage = uint8(zeros(1,size(userBits,2)/8));
            
            % The minimum number of bits that can be recovered is 43 = 4
            % characters on the header times 8 bits per character plus 3,
            % the CRC length
            if length(unpaddedBits) < 8*obj.headerCharacters + obj.CRClength
                
                recoveredMessage = uint8('PAD BITS ERROR');
                header = recoveredMessage;
                
            else
                
                % CRC Check
                [msg, err] = step(obj.pDetect, unpaddedBits.'>0);
                
                if ~err || obj.ignoreCRC
                    % Convert Bits to integers
                    if obj.debugFlag; fprintf('\nMAC| Message bits length: %1.0f\n', length(msg)); end;
                    messageData = uint8(OFDMbits2letters(obj,msg > 0).');
                    
                    % Remove padding. The input needs to be casted to char
                    % because strfind() can only be codegened if it receives
                    % char inputs
                    messageEnd = strfind(char(messageData),'EOF');
                    
                    if ~isempty(messageEnd)
                        
                        recoveredMessage = messageData(1:messageEnd(1,1) - 1); % Exclude the header
                        header = messageData(1:4);
                        
                    else
                        if obj.ignoreCRC
                            recoveredMessage = messageData; % Exclude the header
                            header = messageData(1:4);
                        else 
                            recoveredMessage = uint8('EOF NOT FOUND');
                            header = recoveredMessage;
                        end
                    end
                else
                    recoveredMessage = uint8('CRC ERROR!!!!');
                    header = recoveredMessage;
                end
                
            end
            
            %% Cast output
            
            switch obj.dataType
                case 'c'
                    returnedMessage = char(recoveredMessage);
                case 'u'
                    returnedMessage = uint8(recoveredMessage);
                otherwise
                    if obj.debugFlag; fprintf('MAC| Error: Undefined data type'); end;
            end
            
            
            %% Print message and header
            
            switch obj.dataType
                case 'c'
                    fprintf('%s \n', char(recoveredMessage));
                case 'u'
                    for k = 1:length(recoveredMessage)
                        % Codegen does not accept uint8s on
                        % fprint, so they need to be casted to
                        % int16
                        fprintf('%d \n', int16(recoveredMessage(k)));
                    end
                otherwise
                    if obj.debugFlag; fprintf('MAC| Error: Undefined data type'); end;
            end
            
            if obj.debugFlag
                
                fprintf('\nMAC| Header of received message: ');
                
                switch obj.dataType
                    case 'c'
                        fprintf('%s \n', char(header));
                    case 'u'
                        for k = 1:length(header)
                            % Codegen does not accept uint8s on
                            % fprint, so they need to be casted to
                            % int16
                            fprintf('%d \n', int16(header(k)));
                        end
                    otherwise
                        if obj.debugFlag; fprintf('MAC| Error: Undefined data type'); end;
                end
                
            end
            
            %% Define properties
            
            obj.lastFrame = receivedFrame;
            obj.lastMessage = recoveredMessage;
            obj.lastHeader = header;
            
        end
        
        %% Conversion to letters
        function Letters = OFDMbits2letters(~, bits )
            % OFDMbits2letters: Convert input bits from a double array to ascii
            % integers, which can be converted to letters by the char() function
            
            % Make input into column
            bits = reshape(bits',size(bits,1)*size(bits,2),1);
            
            %Trim extra bits
            bits = bits(1: floor(length(bits)/8)*8);
            
            %Shape into letters
            bits = reshape(bits, 8, length(bits)/8).';
            
            %Convert bits to letters
            Letters = zeros(size(bits,1),1);
            for i = 1:size(bits,1)
                Letters(i) = bin2dec(dec2bin(bits(i,:)).');
            end
            
        end
        
    end
    
end