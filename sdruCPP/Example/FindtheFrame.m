%function [rFrame,statusFlag] = FindtheFrame(BufferWide)
%function [rFrame,statusFlag] = FindtheFrame(Buffer)
function [rFrame,statusFlag] = FindtheFrame(Buffer)

%assert(isa(BufferWide, 'double') && all(size(BufferWide) == [4*1120 1]));
assert(isa(Buffer, 'double') && ~isreal(Buffer) && all(size(Buffer) == [1 2*1920]));

% Setup
persistent RX

if isempty(RX)
    
    SamplingFrequency = 1e6;
    
    CenterFrequency = 2.2e9;
    
    ReceiveBufferLength = 1120;
    
    NumDataSymbolsPerFrame = 8;
    
    PeakThreshold = 0.7;
    
    FFTLength = 64;
    
    CyclicPrefixLength = 16;
    
    requiredPeaks = 7;
    
    [ShortPreambleOFDM, Preambles] = CreatePreambles;
    
    FrameLength = 1920;%NumDataSymbolsPerFrame*(FFTLength+CyclicPrefixLength)+length(Preambles);
    
    % Frame locator setup
    windowLength = ceil(4*ReceiveBufferLength/4);
    L = FFTLength;
    K = FFTLength/4; % Quarter of short preamble sequence
    known = ShortPreambleOFDM(1:FFTLength/4);
    ConjKnown = conj(known);
    CorrelationWindowSize = windowLength-L+FFTLength/4-1;
    
    % Form Struct
    RX = struct('SamplingFrequency',SamplingFrequency,...
        'CenterFrequency',CenterFrequency,...
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

rFrame = complex(zeros(1,320+(16+64)*20));

DebugFlag = 0;

statusFlag = int16(zeros(1,1));


%while 1
%coder.ceval('get2q',coder.wref(BufferWide));

% Find preamble in buffer
[delay, ~] = locateOFDMFrame_sdr( RX, Buffer.' );

% Check if frame exists in correct location and whether it's duplicate
%Dupe = ( numBuffersProcessed-lastFound<2 )&& (obj.delay<length(obj.Buffer)/2);
Dupe = false;
FrameFound = ((delay + RX.FrameLength) < length(Buffer) ) &&... %Check if full data frame exists in buffer
    (delay > -1 ) &&... %Check if preamble located
    (~Dupe); %Check if duplicate frame

%% Frame Decision
if FrameFound
    if DebugFlag;fprintf('Frame found\n');end;
    %fprintf('Frame found\n');
    statusFlag(1) = int16(0);
    
    rFrame = Buffer(delay + 1 : delay + 1920);% Extract single frame from input buffer
    
    return;
    
    
else
    rFrame = complex(zeros(1,1920));
    %statusFlag = 1;
    % Display why missed frame
	statusFlag(1) = int16(1);

    if DebugFlag
        if ( (delay + FrameLength) > length(Buffer) )
            fprintf('Frame at end of buffer\n');
        elseif (delay < 0)
            fprintf('Preamble not found\n');
        elseif Dupe
            fprintf('Duplicate frame\n');
        end
    end
end

%end

%rFrame = rFrame(1:320+(16+64)*20);

end


function [preambleEstimatedLocation, numPeaks ] = locateOFDMFrame_sdr( RX , recv)
%% Timing Estimate

% Cross correlate
rWin = recv(1:RX.CorrelationWindowSize);


% Fast correlate
PhatShort2 = filter(conj(RX.ConjKnown(end:-1:1)),1,rWin(1:end));
%RhatShort2 = filter(ones(obj.K,1),1,abs(rWin).^2);

PhatShort2 = PhatShort2(RX.K:end);
%RhatShort2 = RhatShort2(obj.K:end);


%M2 = abs(PhatShort).^2; %./ RhatShort.^2;
M = abs(PhatShort2).^2; %./ RhatShort2.^2;

% Determine start of short preamble
[preambleEstimatedLocation, numPeaks] = locateShortPreamble( RX, M, RX.K );

end


function [preambleEstimatedLocation, numPeaks] = locateShortPreamble( RX, M, K )
% Locate of the start of the actual preamble from timing metric

%% Find peaks of correlation

% Adjust threshold (remove first outlier)
%savedM = M;
%[~,loc] = max(M);
%M(loc) = 0;
%thresholdNorm = max(M)*RX.PeakThreshold;
thresholdNorm = RX.PeakThreshold;
%M = savedM;
MLocations = find(M>thresholdNorm);

% Correct estimate to start of preamble, not its center
MLocations = MLocations - (K/2+1);

% Frame Detection
peaks = zeros(size(MLocations));

% Determine correct peak
desiredPeakLocations = (16:16:128).';% Based on preamble structure
%for i = 1:length(MLocations)
%    MLocationGuesses = MLocations(i)+desiredPeakLocations;
%    peaks(i) = length(intersect(MLocations(i:end),MLocationGuesses));
%end

if ~isempty(MLocations)
    peaks(1) = MLocations(1);
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

% Create Pilots
%hPN = comm.PNSequence(...
%    'Polynomial',[1 0 0 0 1 0 0 1],...
%    'SamplesPerFrame', RX.NumDataSymbolsPerFrame,...
%    'InitialConditions',[1 1 1 1 1 1 1]);

%pilot=[1 0  0  1  0  0  1  0  0  0  0  0]';
%pilot = step(hPN); % Create pilot
%pilotsTmp = repmat(pilot, 1, 4 ); % Expand to all pilot tones
%pilots = 2*double(pilotsTmp.'<1)-1; % Bipolar to unipolar
%pilots(4,:) = -1*pilots(4,:); % Invert last pilot


end

