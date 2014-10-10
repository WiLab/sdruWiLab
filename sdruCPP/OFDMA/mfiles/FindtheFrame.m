function [rFrame,statusFlag] = FindtheFrame(Buffer)

assert(isa(Buffer, 'double') && ~isreal(Buffer) && all(size(Buffer) == [2*5120 1]));

% Setup
persistent RX LastrFrame

if isempty(RX) || isempty(LastrFrame)
    
    LastrFrame = complex(zeros(1,5120));    

    NumDataSymbolsPerFrame = 20;
    FFTLength = 64;
    CyclicPrefixLength = 16;
    
    PeakThreshold = 0.7;
    requiredPeaks = 7;
    
    [ShortPreambleOFDM, Preambles] = CreatePreambles;
    
    %NumDataSymbolsPerFrame*(FFTLength+CyclicPrefixLength)+length(Preambles);
    FrameLength = 5120;
    ReceiveBufferLength = 5120*2;
    
    % Frame locator setup
    windowLength = ceil(4*ReceiveBufferLength/4);
    L = FFTLength;
    K = FFTLength/4; % Quarter of short preamble sequence
    known = ShortPreambleOFDM(1:FFTLength/4);
    ConjKnown = conj(known);
    CorrelationWindowSize = windowLength-L+FFTLength/4-1;
    
    % Form Struct
    RX = struct(...
        'ReceiveBufferLength',ReceiveBufferLength,...
        'NumDataSymbolsPerFrame', NumDataSymbolsPerFrame,...
        'PeakThreshold', PeakThreshold,...
        'FFTLength', FFTLength,...
        'CyclicPrefixLength', CyclicPrefixLength,...
        'requiredPeaks', requiredPeaks, ...
        'ShortPreambleOFDM',ShortPreambleOFDM,...
        'Preambles',Preambles,...
        'FrameLength', FrameLength,...
        'ConjKnown', ConjKnown,...
        'CorrelationWindowSize', CorrelationWindowSize,...
        'K', K);
end

% DEBUG
DebugFlag = 0;
% DEBUG

% Preallocate variable
statusFlag = int16(1);

% Functions require column vector
BufferRow = Buffer.';

% Find preamble in buffer
[delay, ~] = locateOFDMFrame_sdr( RX, Buffer );

% Check if frame exists in correct location and whether it's duplicate
%Dupe = ( numBuffersProcessed-lastFound<2 )&& (obj.delay<length(obj.Buffer)/2);
Dupe = false;
FrameFound = ((delay + RX.FrameLength) < length(Buffer) ) &&... %Check if full data frame exists in buffer
    (delay > -1 ) &&... %Check if preamble located
    (~Dupe); %Check if duplicate frame

% Frame Decision
if FrameFound
    
    rFrame = BufferRow(delay + 1 : delay + 5120);% Extract single frame from input buffer
    statusFlag = int16(0); % Tell waiting function something is found
    if DebugFlag;fprintf('Frame found\n');end;
    return;

 
else
    % Flag for nothing found
    statusFlag = int16(1);
    % Fill with zeros
    rFrame = complex(ones(1,320+(16+64)*20));
    
    % Display why missed frame
    if DebugFlag
        if ( (delay + 5120) > length(Buffer) )
            fprintf('Frame at end of buffer\n');
        elseif (delay < 0)
            fprintf('Preamble not found\n');
        elseif Dupe
            fprintf('Duplicate frame\n');
        end
    end
end


end


function [preambleEstimatedLocation, numPeaks ] = locateOFDMFrame_sdr( RX , recv)
%% Timing Estimate

% Cross correlate
rWin = recv(1:RX.CorrelationWindowSize);


% Fast correlate
PhatShort2 = filter(conj(RX.ConjKnown(end:-1:1)),1,rWin(1:end));

PhatShort2 = PhatShort2(RX.K:end);

M = abs(PhatShort2).^2; %./ RhatShort2.^2;

% Determine start of short preamble
[preambleEstimatedLocation, numPeaks] = locateShortPreamble( RX, M, RX.K );

end


function [preambleEstimatedLocation, numPeaks] = locateShortPreamble( RX, M, K )
% Locate of the start of the actual preamble from timing metric

%% Find peaks of correlation

% Adjust threshold
thresholdNorm = max(M)*RX.PeakThreshold;
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
peaks(peaks < RX.requiredPeaks) = 0;


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

%% Preambles
function [ShortPreambleOFDM, Preambles] = CreatePreambles

%% Create Short Preamble
ShortPreamble = [ 0 0  1+1i 0 0 0  -1-1i 0 0 0 ... % [-27:-17]
    1+1i 0 0 0  -1-1i 0 0 0 -1-1i 0 0 0   1+1i 0 0 0 ... % [-16:-1]
    0    0 0 0  -1-1i 0 0 0 -1-1i 0 0 0   1+1i 0 0 0 ... % [0:15]
    1+1i 0 0 0   1+1i 0 0 0  1+1i 0 0 ].';               % [16:27]

% Create modulator
hPreambleMod = OFDMModulator(...
    'NumGuardBandCarriers', [6; 5],...
    'CyclicPrefixLength',   0,...
    'FFTLength' ,           64,...
    'NumSymbols',           1);

% Modulate and scale
ShortPreambleOFDM = sqrt(13/6)*step(hPreambleMod, ShortPreamble);

% Form 10 Short Preambles
CompleteShortPreambleOFDM = [ShortPreambleOFDM; ShortPreambleOFDM; ShortPreambleOFDM(1:32)];

%% Create Long Preamble
LongPreamble = [1,  1, -1, -1,  1,  1, -1,  1, -1,  1,  1,  1,...
    1,  1,  1, -1, -1,  1,  1, -1,  1, -1,  1,  1,  1,  1, 0,...
    1, -1, -1,  1,  1, -1,  1, -1,  1, -1, -1, -1, -1, -1,...
    1,  1, -1, -1,  1, -1,  1, -1,  1,  1,  1,  1].';

% Modulate
LongPreambleOFDM = step( hPreambleMod, complex(LongPreamble,0) );

% Form 2 Long Preambles
CompleteLongPreambleOFDM =[LongPreambleOFDM(33:64); LongPreambleOFDM; LongPreambleOFDM];

% Combine Preambles
Preambles = [CompleteShortPreambleOFDM; CompleteLongPreambleOFDM];

end

