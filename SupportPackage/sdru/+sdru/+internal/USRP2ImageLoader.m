classdef USRP2ImageLoader < sdru.internal.ImageLoaderBase
%USRP2ImageLoader SDRu image loader utility for USRP2 radios

%   Copyright 2013 The MathWorks, Inc.

properties (Constant)
  Device = 'USRP2'
end

properties
  Drive
end

properties (Constant, Access = protected)
  DefaultFirmwareImage = ...
    fullfile(sdru.internal.ImageLoaderBase.getDefaultImagePath(), ...
    'usrp2_fw.bin');
  DefaultFPGAImage = ...
    fullfile(sdru.internal.ImageLoaderBase.getDefaultImagePath(), ...
    'usrp2_fpga.bin');
end

properties (Access = protected)
  UserSpecifiedFirmwareImage
  UserSpecifiedFPGAImage
end

properties (SetAccess = protected)
  AvailableSDCardDrives
end

methods
  function this = USRP2ImageLoader()
    discoverDrives(this);
  end
  
  %------------------------------------------------------------------------
  function set.UserSpecifiedFirmwareImage(this, aImage)
    if isempty(strfind(aImage, 'usrp2'))
      error(message('sdru:N2xxImageLoader:invalidImage', ...
        'firmware', aImage, 'usrp2', this.Device));
    end
    this.UserSpecifiedFirmwareImage = aImage;
  end
end

methods (Access=protected)
  function check(this)
    %CHECK   Image writer sanity checker
    %   CHECK(H) checks that the image writer is properly set for a USRP2
    %   radio and an SD card is connected and ready. If you did not specify
    %   an SD card drive, then this function prompts you to select one.

    % Set the SD card drive to use
    getDrive(this, this.Drive);
  end

  %------------------------------------------------------------------------
  function flag = isOKToLoad(this)
    %isOKToLoad Check if it is OK to load the images
    %   isOKToLoad(H) checks if it is OK to load the image. If ForceLoad
    %   property is set to true, then this function always returns true. If
    %   ForceLoad property is set to false, then this function prompts the
    %   user and asks for permission to load the FPGA image, FPGAImage, and
    %   firmware image, FirmwareImage, to the SD card drive, Drive.
    
    flag = false;

    % Conditionally prompt the user before loading the image
    if ~this.ForceLoad
      answer = '';
      while ~strcmp(answer, {'yes', 'no'})
        answer = input(sprintf(['Ready to write FPGA image\n\t%s\n'...
          'and firmware image \n\t%s\n' ...
          'to SD card at %s. Would you like to ' ...
          'continue? [yes/no]: '], ...
          strrep(this.FPGAImage, '\', '\\'), ...
          strrep(this.FirmwareImage, '\', '\\'), ...
          this.Drive), 's');
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
    %loadImpl(H) Load FPGA and firmware images to USRP2 radio
    %   loadImpl(H) loads FPGA and firmware images to SD card drive, Drive.

    % Construct the argument list for usrp_n2xx_simple_net_burner. Always
    % reset the radio after load.
    args = sprintf(' --dev=%s --fw=%s  --fpga=%s', ...
      this.Drive, ...
      this.FirmwareImage, ...
      this.FPGAImage);
    
    if isunix()
      sudoPrefix = 'sudo ';
    else
      sudoPrefix = '';
    end
   
    disp(' ')
    disp('Writing images using usrp2_card_burner.py ...')
    disp(' ');
    disp('==== Start messages from third party application ====');
   
    echoFlag = true;
    [~, status] = call_uhd_app(...
      sprintf('%susrp2_card_burner.py',sudoPrefix), ...
      args, echoFlag);
    disp('==== End messages from third party application ====');

    if status == 0
      success = true;
    else
      success = true;
    end
  end
  
  %------------------------------------------------------------------------
  function discoverDrives(this)
    rawDrives = call_uhd_app('usrp2_card_burner.py', '--list');
    startIdx = strfind(rawDrives, 'Possible raw devices:');
    scannedDrives = textscan(rawDrives(startIdx:end), '%s', ...
      'delimiter', char(10));
    for p=2:length(scannedDrives{1})
      if ~isempty(scannedDrives{1}{p})
        this.AvailableSDCardDrives{p-1} = scannedDrives{1}{p};
      end
    end
  end
  
  %------------------------------------------------------------------------
  function getDrive(this, preSelectedDrive)
    %getDrive Determine which drive to use
    
    if isempty(preSelectedDrive)
      % The user did not specify a drive. Prompt the user to select one of
      % the available drives.
      availDrives = this.AvailableSDCardDrives;
      if numel(availDrives) > 0
        driveIdx = promptOptions(...
          ['Found following possible 2GB SD card drives. Note that this ' ...
          char(10) ...
          'program can overwrite your hard drive. Be sure to select the ' ...
          char(10) ...
          'correct drive. Please select one'], ...
          availDrives);
        if driveIdx > numel(availDrives)
            error(message('sdru:USRP2ImageLoader:noDriveSelected'))
        else
            this.Drive = availDrives{driveIdx};
        end
      else
        error(message('sdru:USRP2ImageLoader:noDriveFound'))
      end
    else
      this.Drive = preSelectedDrive;
    end
    
    if isempty(this.AvailableSDCardDrives)
      error(message('sdru:USRP2ImageLoader:sdCardNotFound', this.Drive));
    else
      validatestring(this.Drive, ...
        this.AvailableSDCardDrives, ...
        'sdruload', 'Drive');
    end
  end
end
end

%--------------------------------------------------------------------------
function selection = promptOptions(promptToChoose, options)
%promptOptions Prompt user to choose from a list of options. Add none to
%the list.

numOptions = numel(options);
if numOptions > 0
  
  str = sprintf('%s:\n', promptToChoose);
  
  % Add options
  for p=1:numOptions
    str = sprintf('%s\t[%d] %s\n', str, p, options{p});
  end
  % Add None
  str = sprintf('%s\t[%d] %s\n', str, numOptions+1, 'None');
  str = sprintf('%s>> ', str);
  selection = 0;
  while (selection > numOptions+1) || (selection < 1)
    selection = input(str);
  end
else
  error(message('sdru:USRP2ImageLoader:notEnoughOptions'));
end
end
