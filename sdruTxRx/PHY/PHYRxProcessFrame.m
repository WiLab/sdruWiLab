classdef PHYRxProcessFrame < PHYReceiverBase
    
    
    methods (Access = protected)
        function setupImpl(obj,~)

            CreatePreambles(obj);
            
            CreateDemodulators(obj);
            
            setupProcessFrame(obj);
            
        end
        
        function RHard = stepImpl(obj,u)

            RHard = ProcessFrame(obj,u);
            
        end

        % Number of output ports
        function num = getNumOutputsImpl(obj)
            num = 1;
        end
        
    end
end
