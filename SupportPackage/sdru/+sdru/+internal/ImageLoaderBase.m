classdef ImageLoaderBase < handle
%ImageLoaderBase Base class for SDRu image loader utility

%   Copyright 2013 The MathWorks, Inc.

properties
  %ForceLoad Continue with image load without prompting user
  %   Specify behavior to prompt for final confirmation from user to
  %   continue with image load. The default is false. If you set this
  %   property to false, the object prompts the user to continue with image
  %   load. If you set this property to true, the object does not prompt
  %   and continues with image load.
  ForceLoad = false;
end

properties (Abstract, Constant)
  Device
end

properties (Abstract, Constant, Access = protected)
  DefaultFPGAImage
  DefaultFirmwareImage
end

properties (Dependent)
  %FPGAImage FPGA image with full path
  %   Specify the FPGA image to load to the USRP(R) radio. The default
  %   image is the UHD(R) version compatible with the Communications
  %   System Toolbox Support Package for USRP(R) Radio. You can obtain the
  %   compatible UHD(R) version number by typing 'getSDRuDriverVersion'.
  FPGAImage
  %FirmwareImage Firmware image with full path
  %   Specify the firmware image to load to the USRP(R) radio. The default
  %   image is the UHD(R) version compatible with the Communications
  %   System Toolbox Support Package for USRP(R) Radio. You can obtain the
  %   compatible UHD(R) version number by typing 'getSDRuDriverVersion'.
  FirmwareImage
end

properties (Abstract, Access = protected)
  %UserSpecifiedFPGAImage User specified FPGA image with full path
  %   The default is empty, signaling the object that the user did not
  %   specify an image and the object needs to use the default image.
  UserSpecifiedFPGAImage
  %UserSpecifiedFirmwareImage User specified firmware image with full path
  %   The default is empty, signaling the object that the user did not
  %   specify an image and the object needs to use the default image.
  UserSpecifiedFirmwareImage
end

%==========================================================================
methods (Abstract, Access=protected)
  check(this)
  flag = isOKToLoad(this)
  success = loadImpl(this)
end

%==========================================================================
methods
  function success = load(this)
    %load    Load UHD(R) images to appropriate medium for USRP(R) radios
    %   S = load(H) loads UHD firmware and FPGA images either to a N2xx
    %   radio through Ethernet or to an SD card for use with USRP2 radios,
    %   and returns the status, S. 
    %
    %   UHD and USRP are a trademarks of National Instruments Corp. 

    try
      check(this);
    catch me
      throwAsCaller(me);
    end
    
    if isOKToLoad(this)
      success = loadImpl(this);
    else
      sdru.internal.ImageLoaderBase.dispAbortMessage();
      success = false;
    end
  end

  %------------------------------------------------------------------------
  function set.FirmwareImage(this, aImage)
    this.UserSpecifiedFirmwareImage = aImage;
  end
  
  %------------------------------------------------------------------------
  function aImage = get.FirmwareImage(this)
    if isempty(this.UserSpecifiedFirmwareImage)
      aImage = this.DefaultFirmwareImage;
    else
      aImage = this.UserSpecifiedFirmwareImage;
    end
  end
  
  %------------------------------------------------------------------------
  function set.FPGAImage(this, aImage)
    this.UserSpecifiedFPGAImage = aImage;
  end
  
  %------------------------------------------------------------------------
  function aImage = get.FPGAImage(this)
    if isempty(this.UserSpecifiedFPGAImage)
      aImage = this.DefaultFPGAImage;
    else
      aImage = this.UserSpecifiedFPGAImage;
    end
  end
end

%==========================================================================
methods (Access = protected)
  function flag = isFirmwareImageUserSpecified(this)
    %isFirmwareImageUserSpecified 
    %   This function returns true is firmware image is user specified.
    
    if isempty(this.UserSpecifiedFirmwareImage)
      % UserSpecifiedFirmwareImage property is empty, which is the default
      % value. So, user did not specify an image.
      flag = false;
    else
      flag = true;
    end
  end
  
  %------------------------------------------------------------------------
  function flag = isFPGAImageUserSpecified(this)
    %isFPGAImageUserSpecified 
    %   This function returns true is FPGA image is user specified.
    
    if isempty(this.UserSpecifiedFPGAImage)
      % UserSpecifiedFPGAImage property is empty, which is the default
      % value. So, user did not specify an image.
      flag = false;
    else
      flag = true;
    end
  end
end

%==========================================================================
methods (Static, Hidden)
  function imagePath = getDefaultImagePath()
    %getDefaultImagePath Return the default image folder.
    imagePath = fullfile(sdruroot, 'uhdapps', 'images');
  end
  
  %------------------------------------------------------------------------
  function dispAbortMessage()
    disp(' ')
    disp('FPGA and firmware images are not written.')
  end
end
end
