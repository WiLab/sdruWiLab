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
        
        subcarriersForEachUser = [24,24];
        userIndexes;
        
        lastFrameID = uint8('0');
        
        CorrectFrame;
        BER;
        
        % Object handle
        pDetect;
        pDecoder;
        DeScram;
        
        % Flags
        debugFlag = 1; %Skips missed counting if enabled
        ignoreCRC = 1; % BER will only be 0 if enabled
        
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
            
            obj.CorrectFrame = CorrectBits';
            obj.BER = 0;
            obj.Iteration = 0;
            
            obj.pDecoder = comm.BCHDecoder('CodewordLength',15, ...
                'MessageLength',5);
            obj.DeScram = comm.Descrambler(2, [1 0 1 1 0 1],...
                'InitialConditions',[0 0 1 1 0 ]);
            
            %obj.subcarriersForEachUser = [20,28];
            
            obj.userIndexes = CalculateUserLocations(obj);
            
        end
        
        function userIndexes = CalculateUserLocations(obj)
            
            % Calculate user locations
            edge = 1;
            users = length(obj.subcarriersForEachUser);
            userIndexes = zeros(users,2);
            for user = 1:users
                userIndexes(user,1) = edge;
                userIndexes(user,2) = edge + obj.subcarriersForEachUser(user) - 1;
                edge = obj.subcarriersForEachUser(user);
            end
            
        end
        
        %% Step function
        function returnedMessage = stepImpl(obj,receivedFrame)
            
            reason=0;
            Duplicate = false; % flag for duplicate
            
            % Create variable size vectors
            coder.varsize('userFrame', [obj.numCarriers ,obj.symbolsPerFrame], [1 0]);
            coder.varsize('userBits', [1 ,obj.numCarriers*obj.symbolsPerFrame], [0 1]);
            coder.varsize('recoveredMessage', [1 ,obj.numCarriers*obj.symbolsPerFrame], [0 1]);
            
            %% User demultiplex
            userFrame = receivedFrame(obj.userIndexes(obj.desiredUser,1):obj.userIndexes(obj.desiredUser,2),:);
            userBits = reshape(userFrame,1,obj.subcarriersForEachUser(obj.desiredUser)*obj.symbolsPerFrame);
            
            %% Eliminate pad bits
            
            % Extract number of pad bits from beggining of frame
            obj.padBits = OFDMbits2letters(obj,userBits(1:8));
            %obj.padBits = 15;
            unpaddedBits = userBits(1:end-obj.padBits);
            %unpaddedBits = userBits(1:115);% uncoded
            
            %% CRC check and convert to letters
            
            % Initialize variables
            %recoveredMessage = uint8(zeros(1,size(userBits,2)/8)); %#ok<NASGU> Need for CG preallocation
            err = false(1,1);
            
            % The minimum number of bits that can be recovered is 43 = 4
            % characters on the header times 8 bits per character plus 3,
            % the CRC length
            if length(unpaddedBits) < 8*obj.headerCharacters + obj.CRClength
                
                err = true; % Pad bits error has ocurred
                recoveredMessage = uint8('PAD BITS ERROR');
                reason = 1;
                header = recoveredMessage;
                msg = logical(obj.CorrectFrames).';%for CG
                
            else % No pad bits error
                
                % CRC Check
                [msg, err] = step(obj.pDetect, unpaddedBits.'>0);
                
                if ~err || obj.ignoreCRC % No CRC Error (Can be skipped in debugging)
                    
                    % Convert Bits to integers
                    messageData = uint8(OFDMbits2letters(obj,msg > 0).');
                    
                    % Remove padding. The input needs to be casted to char
                    % because strfind() can only be codegened if it receives
                    % char inputs
                    messageEnd = strfind(char(messageData),'EOF');
                    
                    if ~isempty(messageEnd) %EOF Found
                        
                        % Grab header of no header
                        if obj.debugFlag;
                            recoveredMessage = messageData(1:messageEnd(1,1) - 1); % Include the header
                        else
                            recoveredMessage = messageData(5:messageEnd(1,1) - 1); % Exclude the header
                        end
                        header = messageData(1:4);
                        
                        %% Check frame ordering/succession
                        if  uint8(obj.lastFrameID) == uint8(header(2)) % New header == old header
                            %Duplicate = true; % Disregard duplicates (frame will be ignored)
                            %err = true; % Duplicate not an error
                            obj.Duplicates = obj.Duplicates + 1;
                            %if obj.debugFlag; fprintf('Duplicate\n'); end;
                        end
                        % Not duplicate checking
                        if uint8(header(2))==48 % check wrap condition
                            if ~(uint8(obj.lastFrameID)==57) % 0 not after 9
                                reason = 4;
                                err = true;
                                error = (uint8(obj.lastFrameID)+1)-uint8(header(2));% distance from true
                                %fprintf('Missed Distance: %d\n',int16(error));
                            end
                            
                        elseif ~((uint8(obj.lastFrameID)+1)==uint8(header(2))) % Not next id (and previous id not 9)
                            reason = 4;
                            err = true;
                            error = double(uint8(obj.lastFrameID)+1)-double(uint8(header(2)));% distance from true
                            %fprintf('Missed Distance: %2.0f\n',(error));
                            %if obj.debugFlag; fprintf('Last %c | Current %c\n',char(obj.lastFrameID),char(header(2)));end;
                        end
                        
                    else % NO EOF Found
                        
                        err = true;
                        
                        if obj.ignoreCRC
                            recoveredMessage = messageData; % Exclude the header
                            header = messageData(1:4);
                        else
                            recoveredMessage = uint8('EOF NOT FOUND');
                            reason = 2;
                            header = recoveredMessage(1:4);
                        end
                        
                    end
                else % CRC Failed
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
%                obj.Iteration = obj.Iteration + 1;
%                wrongBits = sum(abs(msg(2*8+1:length(obj.CorrectFrame))-obj.CorrectFrame(2*8+1:end) )); % Ignore first 2 characters since they aren't static
%                newBER = wrongBits/length(obj.CorrectFrame(2*8+1:end));
%                obj.BER = (obj.BER*obj.Iteration + newBER)/(obj.Iteration+1);
                
                %if wrongBits>0
                %    fprintf('Wrong Bits: %d\n',int64(wrongBits));
                %end
                
                obj.CorrectFrames = obj.CorrectFrames + 1;%Keep track of decode frames
                
                % Display Message
                if 1%mod(obj.CorrectFrames, 100)==0% Only display every N samples, reduces CPU usage
                    switch obj.dataType
                        case 'c'
                            fprintf('Message: %s | ', char(recoveredMessage(2:end)));
                            fprintf('Received Frames: %d | BER %.6f | Missed: %d | Dupes: %d\n',...
                                int64(obj.CorrectFrames),obj.BER,int64(obj.MissedFrames),int64(obj.Duplicates));
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
                
            else % Failure occurred
                % If not duplicate determine what happened
                if ~Duplicate
                    switch reason
                        case 0
                            if obj.debugFlag; fprintf('Reason: UNK\n');end;% Unknown error?
                            %obj.MissedFrames = obj.MissedFrames + 1;
                        case 1
                            if obj.debugFlag; fprintf('Reason: PAD\n');end;
                            obj.MissedFrames = obj.MissedFrames + 1;
                        case 2
                            if obj.debugFlag; fprintf('Reason: EOF\n');end
                            obj.MissedFrames = obj.MissedFrames + 1;
                        case 3
                            if obj.debugFlag; fprintf('Reason: CRC\n');end;
                            obj.MissedFrames = obj.MissedFrames + 1;
                        case 4
                            if obj.debugFlag; fprintf('Reason: EOO\n');end;% Out of order
                            obj.MissedFrames = obj.MissedFrames + 1;
                    end
                    
                end
            end
            
            %% Update properties
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
