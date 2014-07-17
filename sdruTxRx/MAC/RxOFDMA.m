classdef RxOFDMA < matlab.System
    
    % RxOFDMA   OFDMA receiver conversion from bits to char, error checking and
    % user demultiplexing for 2 users.
    
    %% Define nontunable properties
    properties(Nontunable)
        
        numUsers = 2;
        numCarriers = 48;
        carriersPerUser = 24; % numCarrier/numUsers, remember to change if they change
        symbolsPerFrame = 10;
        
    end
    
    %% Define properties
    properties
        
        desiredUser = 1;
        lastFrame;
        lastMessage;
        lastHeader;
        padBits;
        dataType;
        
    end
    
    %% Methods
    methods(Access = protected)
        %% Step function
        function recoveredMessage = stepImpl(obj,receivedFrame)
            %% User demultiplex
            userFrame = receivedFrame((obj.desiredUser*obj.carriersPerUser-obj.carriersPerUser+1):...
                obj.desiredUser*obj.carriersPerUser,:);
            
            userBits = reshape(userFrame,1,obj.carriersPerUser*obj.symbolsPerFrame);
            
            %% Eliminate pad bits
            
            % Extract number of pad bits from beggining of frame
            obj.padBits = OFDMbits2letters(obj,userBits(1:8));
            
            unpaddedBits = userBits(1:end-obj.padBits);
            
            %% CRC check and convert to letters
            
            % CRC Check
            pDetect = comm.CRCDetector([1 0 0 1], 'ChecksumsPerFrame',1);
            [msg, err] = step(pDetect, unpaddedBits.'>0);
            
            if ~err
                % Convert Bits to defined data type
                messageLetters = char(OFDMbits2letters(obj,msg > 0).');%messageBits(recMessage,1:end-3)
                
                %Remove padding
                messageEnd = strfind(char(messageLetters),'EOF');
                if ~isempty(messageEnd)
                    recoveredMessage = messageLetters(5:messageEnd(1,1)-1); % Exclude the header
                    
                    fprintf('MAC| Recovered message: \n');
                    switch obj.dataType
                        case 'c'
                            fprintf('%s \n', recoveredMessage);
                        case 'u'
                            for k = 1:length(recoveredMessage)
                                fprintf('%d \n', int8(recoveredMessage(k)));
                            end
                        otherwise
                            fprintf('MAC| Undefined data type');
                    end
                    
                    header = messageLetters(1:4);
                else
                    recoveredMessage = 'Error: EOF not found';
                    header = recoveredMessage;
                end
            else
                fprintf('MAC| CRC Message Failure\n');
                recoveredMessage = 'CRC Error';
                header = 'CRC Error';
            end
            
            %% Define properties
            
            obj.lastFrame = receivedFrame;
            obj.lastMessage = recoveredMessage;
            obj.lastHeader = header;
            
        end
        
        %% Conversion to letters
        function Letters = OFDMbits2letters( ~, bits )
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