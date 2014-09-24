function setbuildargs(buildInfo)
% The example being compiled requires threading support.
% The flag requests that the thread library be included 
% in the build   
    linkFlags = {'-std=c++0x'};
    addCompileFlags(buildInfo, linkFlags);
    linkFlags = {'-pthread'};
    addLinkFlags(buildInfo, linkFlags);
