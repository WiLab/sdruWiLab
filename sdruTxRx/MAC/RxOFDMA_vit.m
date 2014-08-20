classdef RxOFDMA < matlab.System
    
    % RxOFDMA   OFDMA receiver conversion from bits to char, error checking and
    % user demultiplexing for 2 users.
    
    %% Define nontunable properties
    properties(Nontunable)
        
        numUsers = 2;
        numCarriers = 48;
        carriersPerUser = 24; % numCarrier/numUsers, remember to change if they change
        symbolsPerFrame = 8;
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
        
        lastFrameID = uint8(255);
        
        % Object handle
        pDetect;
        
        % Flags
        debugFlag = 1;
        ignoreCRC = 0;
        
    end
    
    %% Decode Process
    % Demultiplex desired user
    % Remove padded bits
    % Decode
    % CRC Check
    % Convert to characters or uint8's
    
    
    %% Methods
    methods(Access = protected)
        %% Setup function
        function setupImpl(obj,~)
            
            obj.pDetect = comm.CRCDetector([1 0 0 1], 'ChecksumsPerFrame',1);
            
            obj.pDecoder = comm.ViterbiDecoder('InputFormat','Hard','TracebackDepth',30);
            
        end
        
        %% Step function
        function returnedMessage = stepImpl(obj,receivedFrame)
            
            if sum(sum(receivedFrame))>0
                notZero = 1;
            else
                notZero = 0;
            end
            Duplicate = false; % flag for duplicate
            
            %% User demultiplex
            userFrame = receivedFrame((obj.desiredUser*obj.carriersPerUser-obj.carriersPerUser+1):...
                obj.desiredUser*obj.carriersPerUser,:);
            
            userBits = reshape(userFrame,1,obj.carriersPerUser*obj.symbolsPerFrame);
            
            %% Eliminate pad bits
            
            % Extract number of pad bits from beggining of frame
            %obj.padBits = OFDMbits2letters(obj,userBits(1:8));
            obj.padBits = 21;
            
            unpaddedBits = userBits(1:end-obj.padBits);
            
            
            %% Decoder with Viterbi
            decodedBits = step(obj.pDecoder,unpaddedBits);
            
            %% CRC check and convert to letters
            
            % Initialize variables
            recoveredMessage = uint8(zeros(1,size(decodedBits,2)/8)); %#ok<NASGU>
            err = false(1,1);
            
            % The minimum number of bits that can be recovered is 43 = 4
            % characters on the header times 8 bits per character plus 3,
            % the CRC length
            
            % CRC Check
            [msg, err] = step(obj.pDetect, decodedBits.'>0);
            
            if ~err || obj.ignoreCRC
                
                % Convert Bits to integers
                messageData = uint8(OFDMbits2letters(obj,msg).');%decoded bits%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
                % Remove padding. The input needs to be casted to char
                % because strfind() can only be codegened if it receives
                % char inputs
                %messageEnd = strfind(char(messageData),'EOF');
                messageEnd = 16;
                
                if ~isempty(messageEnd)
                    
                    if obj.debugFlag;
                        recoveredMessage = messageData(1:messageEnd(1,1) - 1); % Include the header
                    else
                        recoveredMessage = messageData(5:messageEnd(1,1) - 1); % Exclude the header
                    end
                    
                    header = messageData(1:4);
                    % Check for dupe
                    if  obj.lastFrameID == header(2)
                        Duplicate = true;
                        if debugFlag;fprintf('Duplicate\n');end;
                    end
                    
                else %EOF not found
                    
                    if obj.ignoreCRC
                        recoveredMessage = messageData; % Exclude the header
                        header = messageData(1:4);
                    else
                        if debugFlag;fprintf('EOF NOT FOUND\n');end
                        recoveredMessage = uint8('EOF NOT FOUND');
                        header = uint8('NEOF');%recoveredMessage;
                    end
                end
            else
                if debugFlag;fprintf('CRC ERROR\n');end
                recoveredMessage = uint8('CRC ERROR!!!!');
                header = uint8('NCRC');
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
            
            
            %% Print message
            if (~err || obj.debugFlag) && ~Duplicate && notZero
                
                
                switch obj.dataType
                    case 'c'
                        %fprintf('Sum %d\n',int16(sum(recoveredMessage)));
                        fprintf('-----\n');
                        fprintf('%s \n', char(recoveredMessage));
                        fprintf('-----\n');
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
            end
            
            %% Define properties
            obj.lastFrame = receivedFrame;
            obj.lastMessage = recoveredMessage;
            obj.lastHeader = header;
            obj.lastFrameID = header(2);
            
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
