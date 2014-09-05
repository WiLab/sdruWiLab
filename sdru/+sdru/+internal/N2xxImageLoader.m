classdef N2xxImageLoader < sdru.internal.ImageLoaderBase
%N2xxImageLoader Base class for SDRu image loader utility for N2xx radios

%   Copyright 2013 The MathWorks, Inc.

properties
  IPAddress = '192.168.10.2'
end

methods (Access=protected)
  function check(this)
    %CHECK   Image writer sanity checker
    %   CHECK(H) checks that the image writer is properly set for an N2xx
    %   radio and an N2xx radio is connected and ready.
    
    % Find radio using the specified IP address
    radio = findsdru(this.IPAddress, UsrpReportMethodEnumT.None);
    if ~(strcmp(radio.Status, 'Success') ...
        || strcmp(radio.Status, 'Not compatible'))
      error(message('sdru:N2xxImageLoader:deviceNotAvailable', ...
        this.IPAddress, radio.Status));
    end
  end

  %------------------------------------------------------------------------
  function flag = isOKToLoad(this)
    %isOKToLoad Check if it is OK to load the images
    %   isOKToLoad(H) checks if it is OK to load the image. If ForceLoad
    %   property is set to true, then this function always returns true. If
    %   ForceLoad property is set to false, then this function prompts the
    %   user and asks for permission to load the FPGA image, FPGAImage, and
    %   firmware image, FirmwareImage, to the N2xx radio at IP address,
    %   IPAddress.
    
    flag = false;
    
    % Conditionally prompt the user before loading the image
    if ~this.ForceLoad
      answer = '';
      while ~strcmp(answer, {'yes', 'no'})
        answer = input(sprintf(['Ready to write FPGA image\n\t%s\n'...
          'and firmware image \n\t%s\n' ...
          'to %s device at %s. Would you like to ' ...
          'continue? [yes/no]: '], ...
          strrep(this.FPGAImage, '\', '\\'), ...
          strrep(this.FirmwareImage, '\', '\\'), ...
          this.Device, ...
          this.IPAddress), 's');
      end
    else
      answer = 'yes';
    end

    if strncmp(answer, 'yes', 3)
      flag = true;
    end
  end
  
  %------------------------------------------------------------------------
  function success = loadImpl(this)
    %loadImpl(H) Load FPGA and firmware images to N2xx radio
    %   loadImpl(H) loads FPGA and firmware images to N2xx radio utilizing
    %   the usrp_n2xx_simple_net_burner utility provided by Ettus Research.
    
    % Construct the argument list for usrp_n2xx_net_burner.py. Always
    % reset the radio after load.
    args = sprintf(' --addr="%s" --fw=%s  --fpga=%s --reset', ...
      this.IPAddress, ...
      this.FirmwareImage, ...
      this.FPGAImage);
    
    disp(' ')
    disp('Writing images using usrp_simple_net_burner.py ...')
    disp(' ');
    disp('==== Start messages from third party application ====');
    echoFlag = true;
    [result, status] = call_uhd_app('usrp_n2xx_net_burner.py', ...
      args, echoFlag);
    disp('==== End messages from third party application ====');
    
    if status == 0
      success = true;
    else
      success = true;
      parseErrorMessage(this, result)
    end      
  end
end

methods (Access=private)
  function parseErrorMessage(this, aMessage)
    % The net burner always searches for a radio and tries to load the
    % image to the found radio. If the user specifies a different radio,
    % then the error message indicates that the default image we chose is
    % wrong. We need to capture this error message and throw one that says
    % the radio we found does not match the specified one.
    
    m = regexp(aMessage, 'incorrect.*?image','match');
    if ~isempty(m)
      % incorrect image found
      startIdx = regexp(aMessage, 'Exception: Error:');
      aMessage = aMessage(startIdx:end);
      devToken = 'device ';
      devTokenIdx = regexp(aMessage, devToken);
      device = regexp(aMessage(devTokenIdx+length(devToken):end), ...
        '\w*', 'match');
      if ~isempty(strfind(m, 'FPGA'))
        % Invalid FPGA image found
        if isFPGAImageUserSpecified(this)
          % User specified image, so we can assume that the image is wrong
          error(message('sdru:N2xxImageLoader:invalidImage', ...
            'FPGA', this.FPGAImage, device{1}, this.Device))
        else
          % Default image, so the user specified radio does not match the
          % one we found.
          error(message('sdru:N2xxImageLoader:wrongDevice', ...
            device{1}, this.Device, device{1}, this.Device))
        end
      else
        % Invalid firmware image found
        if isFirmwareImageUserSpecified(this)
          % User specified image, so we can assume that the image is wrong
          error(message('sdru:N2xxImageLoader:invalidImage', ...
            'firmware', this.FirmwareImage, device{1}, this.Device))
        else
          % Default image, so the user specified radio does not match the
          % one we found.
          error(message('sdru:N2xxImageLoader:wrongDevice', ...
            devToken, this.Device, device{1}, this.Device))
        end
      end
    end
  end
end
end