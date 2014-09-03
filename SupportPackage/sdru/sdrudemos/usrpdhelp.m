function htmlFile = usrpdhelp
% USRPDHELP  USRP example help function.
% Returns path to the HTML help information file corresponding to the
% example
%
% LIMITATIONS: The info block calling this function
%              MUST be in the root of the example model.

% Copyright 2011-2012 The MathWorks, Inc.

% There are three categories of USRP demos
% 1) Regular demos and retarget demos with their dedicated write-ups
% 2) Retarget demos sharing the same write-up with the demos before
%    retargeting, currently default for retargeting demos

% List all sdru retarget demos with their dedicated write-ups here
excludeRetargetmdls = {};

% Find the full path of the model name
mdl = get_param(gcb, 'Parent');
mdlFolder = which(mdl);

% Remove _win32 or _fixpt (or _***) if present (before the ".")
htmlFile1 = suffixstrip(mdl);


% Strip off the model name from the path
lastFilesepIdx = max(strfind(mdlFolder, filesep));
mdlFolder = mdlFolder(1:lastFilesepIdx-1);

% Construct full path to the html file.  The file must live in an 'html'
% folder below the location of the model.
htmlFile = [mdlFolder filesep 'html' filesep htmlFile1 '.html'];

% If the current models is a retargeting model and is NOT listed in the
% exclusion list
if ~isempty(strfind(mdl, 'retarget')) && isempty(intersect(excludeRetargetmdls,mdl))
    htmlFile = strrep(htmlFile, 'retarget.html', '.html');
end

function htmlfilename=suffixstrip(modelname)
htmlfilename = regexprep(modelname, '_.*$', '');
htmlfilename = regexprep(htmlfilename, 'Midi$', '');

% [EOF]
