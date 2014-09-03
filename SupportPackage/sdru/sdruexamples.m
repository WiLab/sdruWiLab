function sdruexamples
% SDRUEXAMPLES Open index of USRP(R) Radio examples

% Copyright 2013 The MathWorks, Inc.

demoxml  = fullfile(sdruroot,'sdrudemos','demos.xml');
prodname = 'Communications System Toolbox Support Package for USRP(R) Radio';

hwconnectinstaller.internal.openDemoPage(demoxml, prodname);

end
