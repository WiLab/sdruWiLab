function sdrudoc(topic)
% SDRUDOC USRP(R) Radio function to open doc.
%
% SDRUDOC  Open top-level USRP(R) documentation.
%
% SDRUDOC(topic) Open specific topic in documentation.  
% 
%

% Copyright 2013 The MathWorks, Inc.

if (nargin == 0)
    topic = 'sdru';
end

helpview(fullfile(docroot,'sdru','helptargets.map'), topic);
