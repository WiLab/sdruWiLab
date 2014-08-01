classdef PHYRxFindFrame < PHYReceiverBase
    
    
    methods (Access = protected)
        function setupImpl(obj,~)

            CreatePreambles(obj);
            
            CreateDemodulators(obj);
            
            setupFrameFinder(obj);
            
        end
        
        function [rFrame, statusFlag] = stepImpl(obj,u)

            [rFrame, statusFlag] = FindFrame(obj,u);
            
        end

        % Number of output ports
        function num = getNumOutputsImpl(obj)
            num = 2;
        end
    end
end
