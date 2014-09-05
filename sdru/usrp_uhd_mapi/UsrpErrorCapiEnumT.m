
%   Copyright 2011-2013 The MathWorks, Inc.

classdef(Enumeration) UsrpErrorCapiEnumT < int32
    enumeration
        UsrpDriverError(0),
        UsrpDriverSuccess(1),
        UsrpDriverNotResponding(2),
        UsrpDriverBusy(3),
        UsrpDriverRxBusy(4),
        UsrpDriverTxBusy(5),
        UsrpDriverNotCompatible(6)
    end
    methods (Static=true)
        function retVal = getHeaderFile()
            retVal = 'usrp_uhd_capi.hpp';
        end
        function retVal = addClassNameToEnumNames()
            retVal = false;
        end
    end
end
