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
        Encoding = true;
        
    end
    
    %% Define properties
    properties
        
        desiredUser;
        lastFrame;
        lastMessage;
        lastHeader;
        padBits;
        
        lastFrameID = uint8(255);
        
        CorrectFrame;
        BER;
        
        % Object handle
        pDetect;
        %player;
        pDecoder;
        DeScram
        
        % Flags
        debugFlag = 0;
        ignoreCRC = 1;
        
        CorrectFrames = 0;
        MissedFrames = 0;
        Duplicates = 0;
        Iteration = 0;
    end
    
    %% Methods
    methods(Access = protected)
        %% Setup function
        function setupImpl(obj,~)
            
            obj.pDetect = comm.CRCDetector([1 0 0 1], 'ChecksumsPerFrame',1);
            %obj.player = dsp.AudioPlayer('SampleRate',22050);

            obj.CorrectFrame = CorrectBits';
            obj.BER = 0;
            obj.Iteration = 0;
            
            obj.pDecoder = comm.BCHDecoder('CodewordLength',15, ...
                                           'MessageLength',5);
            obj.DeScram = comm.Descrambler(2, [1 0 1 1 0 1],...
                                        'InitialConditions',[0 0 1 1 0 ]);
            
        end
        
        %% Step function
        function returnedMessage = stepImpl(obj,receivedFrame)
            
            reason=0;
            Duplicate = false; % flag for duplicate
            
            %% User demultiplex
            userFrame = receivedFrame((obj.desiredUser*obj.carriersPerUser-obj.carriersPerUser+1):...
                obj.desiredUser*obj.carriersPerUser,:);
            
            userBits = reshape(userFrame,1,obj.carriersPerUser*obj.symbolsPerFrame);
            
            %% Eliminate pad bits
            
            % Extract number of pad bits from beggining of frame
            obj.padBits = OFDMbits2letters(obj,userBits(1:8));
            
            unpaddedBits = userBits(1:end-obj.padBits);
            %unpaddedBits = userBits(1:115);% uncoded
            
            %% CRC check and convert to letters
            
            % Initialize variables
            recoveredMessage = uint8(zeros(1,size(userBits,2)/8)); %#ok<NASGU> Need for CG preallocation
            err = false(1,1);
            
            % The minimum number of bits that can be recovered is 43 = 4
            % characters on the header times 8 bits per character plus 3,
            % the CRC length
            if length(unpaddedBits) < 8*obj.headerCharacters + obj.CRClength
                
                err = ~err;
                recoveredMessage = uint8('PAD BITS ERROR');
                reason = 1;
                header = recoveredMessage;
                msg = logical(obj.CorrectFrames).';%for CG
                
            else
                
                if obj.Encoding % If encoding used, decode and descramble first
                    % Unscramble
                    descrambledBits = step(obj.DeScram,unpaddedBits(1:345).');
                    
                    % Decode
                    decodedBits = step(obj.pDecoder,descrambledBits(1:345));
                    
                    % CRC Check
                    [msg, err] = step(obj.pDetect, decodedBits>0);
                else
                    % CRC Check
                    [msg, err] = step(obj.pDetect, unpaddedBits.'>0);
                end
                
                if ~err || obj.ignoreCRC
                    % Convert Bits to integers
                    messageData = uint8(OFDMbits2letters(obj,msg > 0).');
                    
                    % Remove padding. The input needs to be casted to char
                    % because strfind() can only be codegened if it receives
                    % char inputs
                    messageEnd = strfind(char(messageData),'EOF');
                    
                    if ~isempty(messageEnd)
                        
                        if obj.debugFlag;
                            recoveredMessage = messageData(1:messageEnd(1,1) - 1); % Include the header
                        else
                            recoveredMessage = messageData(5:messageEnd(1,1) - 1); % Exclude the header
                        end
                        
                        header = messageData(1:4);
                        %% Check successive frames
                        if  uint8(obj.lastFrameID) == uint8(header(2))
                        	Duplicate = true;
                            obj.Duplicates = obj.Duplicates + 1;
                            %if obj.debugFlag; fprintf('Duplicate\n'); end;
                        end
                        if uint8(header(2))==48 % check wrap condition
                            if ~(uint8(obj.lastFrameID)==57) % 0 not after 9
                                 error = (uint8(obj.lastFrameID)+1)-uint8(header(2));
                                 %if obj.debugFlag; fprintf('Last %d | Current %d | Result %d\n',int16(obj.lastFrameID),int16(header(2)),int16(error));end;
                            end
                        elseif ~((uint8(obj.lastFrameID)+1)==uint8(header(2)))
                                 %if obj.debugFlag; fprintf('Last %d | Current %d\n',int16(obj.lastFrameID),int16(header(2)));end;
                        end
                        
                    else
                        
                        err = ~err;
                        
                        if obj.ignoreCRC
                            recoveredMessage = messageData; % Exclude the header
                            header = messageData(1:4);
                        else
                            recoveredMessage = uint8('EOF NOT FOUND');
                            reason = 2;
                            header = recoveredMessage(1:4);
                        end
                    end
                else
                    recoveredMessage = uint8('CRC ERROR!!!!');
                    reason = 3;
                    header = recoveredMessage(1:4);
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
            
            
            %% Print message
            if (~err || obj.debugFlag) && ~Duplicate
                
                % BER calculation
                obj.Iteration = obj.Iteration + 1;
                newBER = abs(sum(msg(4*8+1:length(obj.CorrectFrame))-obj.CorrectFrame(4*8+1:end)))/length(obj.CorrectFrame(4*8+1:end));
                obj.BER = (obj.BER*obj.Iteration + newBER)/(obj.Iteration+1);
                    
                
                obj.CorrectFrames = obj.CorrectFrames + 1;%Keep track of decode frames
                
                if mod(obj.CorrectFrames, 1000)==0% Only display every N samples, reduces CPU usage
                    switch obj.dataType
                        case 'c'
                            fprintf('Correct Frames: %d | BER %.6f | Missed: %d | Dupes: %d\n',...
                                int64(obj.CorrectFrames),obj.BER,int64(obj.MissedFrames),int64(obj.Duplicates));
                            fprintf('Message: %s \n', char(recoveredMessage));
                        case 'u'
                            %step(obj.player,recoveredMessage.');
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
            else
                % If duplicate determine what happened
                if ~Duplicate 
                    switch reason
                        case 0
                            if obj.debugFlag; fprintf('Reason: NON\n');end;% Unknown error
                            %fprintf('Reason: NON\n');
                             %obj.MissedFrames = obj.MissedFrames + 1;
                        case 1
                            if obj.debugFlag; fprintf('Reason: PAD\n');end;
                            %fprintf('Reason: PAD\n');
                            obj.MissedFrames = obj.MissedFrames + 1;
                        case 2
                            if obj.debugFlag; fprintf('Reason: EOF\n');end
                            %fprintf('Reason: EOF\n');
                             obj.MissedFrames = obj.MissedFrames + 1;
                        case 3
                            if obj.debugFlag; fprintf('Reason: CRC\n');end;
                            %fprintf('Reason: CRC\n');
                            obj.MissedFrames = obj.MissedFrames + 1;
                    end
                   
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