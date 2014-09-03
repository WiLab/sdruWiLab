function varargout = sdruload(varargin)
%SDRULOAD FPGA and firmware image loader for USRP(R) radios
%   SDRULOAD('Device', DEV) loads the default FPGA and firmware images of
%   UHD(R) for a device, DEV. DEV must be a USRP(R) radio and can take
%   following values:
%       'USRP2', 'N200r2', 'N200r3', 'N210r2', 'N210r3', 'N210r4'
%   If DEV is an N2xx radio, then this function loads the default images to
%   a radio at IP address 192.168.10.2. If DEV is a USRP2 radio, this
%   function writes the images to an SD card. The default images are the
%   UHD(R) versions compatible with the Communications System Toolbox
%   Support Package for USRP(R) Radio. You can obtain the compatible UHD(R)
%   version number by typing 'getSDRuDriverVersion'.
%
%   SDRULOAD('Device', DEV, 'IPAddress', IPADDR) loads the default images
%   to an N2xx radio at IP address, IPADDR. This option uses the
%   usrp_n2xx_net_burner.py script provided by Ettus Research(TM).
%
%   SDRULOAD('Device', 'USRP2', 'Drive', DRV) loads the images for a USRP2
%   radio to an SD card at the SD card drive, DRV. If you do not specify a
%   value for the Drive parameter, then the function searches for possible
%   SD card drives and prompts you to select one. This option uses the
%   usrp2_card_burner.py script provided by Ettus Research(TM).
%
%   SDRULOAD('Device', DEV, 'FPGAImage', FPGAIMG, ...) loads the FPGA
%   image, FPGAIMG, and the default firmware image for device, DEV. You can
%   use this option to load your custom FPGA images, including images
%   you generated using HDL Coder(TM) product.
%   
%   SDRULOAD('Device', DEV, 'FirmwareImage', FWIMG, ...) loads the
%   firmware image, FWIMG, and the default FPGA image for device, DEV.
%   
%   S = SDRULOAD(...) returns the status information in S. If S is true,
%   then the operation was successful.
%
%   See also findsdru, probesdru, getSDRuDriverVersion.
%
%   USRP and UHD are trademarks of National Instruments Corp.

%   Copyright 2013 The MathWorks, Inc.

% Input processing
inpars = inputParser();
inpars.FunctionName = 'sdruload';
addParameter(inpars, 'Device', '');
addParameter(inpars, 'Drive', '');
addParameter(inpars, 'IPAddress', '192.168.10.2');
addParameter(inpars, 'FPGAImage', '');
addParameter(inpars, 'FirmwareImage','');
addParameter(inpars, 'ForceLoad', false);
parse(inpars, varargin{:});
device = checkInputs(inpars);

if strncmp(device, 'USRP2', 5)
  imageLoader = sdru.internal.USRP2ImageLoader;
  imageLoader.Drive = inpars.Results.Drive;
else
  switch device
    case 'n200_r2'
      imageLoader = sdru.internal.N200r2ImageLoader;
    case 'n200_r3'
      imageLoader = sdru.internal.N200r3ImageLoader;
    case 'n210_r2'
      imageLoader = sdru.internal.N210r2ImageLoader;
    case 'n210_r3'
      imageLoader = sdru.internal.N210r3ImageLoader;
    case 'n210_r4'
      imageLoader = sdru.internal.N210r4ImageLoader;
  end
  imageLoader.IPAddress = inpars.Results.IPAddress;
end

% Set FPGA image
if ~isempty(inpars.Results.FPGAImage)
  imageLoader.FPGAImage = inpars.Results.FPGAImage;
end

% Set firmware image
if ~isempty(inpars.Results.FirmwareImage)
  imageLoader.FirmwareImage = inpars.Results.FirmwareImage;
end

% Set force load
imageLoader.ForceLoad = inpars.Results.ForceLoad;

% Run
status = load(imageLoader);

if nargout > 0
    varargout{1} = status;
end
end

%--------------------------------------------------------------------------
function device = checkInputs(inpars)
% Device is a required input. Check for value.
validDeviceValues = {'USRP2','n200_r2','n200_r3',...
  'n210_r2','n210_r3','n210_r4'};
formattedValue = sprintf('%s, ',validDeviceValues{:});
if isempty(inpars.Results.Device)
  error(message('sdru:sdruload:requiredInput',  'Device', ...
    formattedValue(1:end-2)));
end
device = validatestring(inpars.Results.Device, ...
  validDeviceValues, '', 'Device');

if isN2xx(device)
  validateattributes(inpars.Results.IPAddress, ...
    {'char'}, {}, '', 'IPAddress');
  checkIPAddressFormat(inpars.Results.IPAddress, 'IPAddress');
  if ~any(strcmp('Drive', inpars.UsingDefaults))
    % Drive is passed by the user
    warning(message('sdru:sdruload:ignoredParameter', 'Drive', device))
  end
else
  if ~any(strcmp('IPAddress', inpars.UsingDefaults))
    % IPAddress is passed by the user
    warning(message('sdru:sdruload:ignoredParameter', 'IPAddress', device))
  end
end

validateattributes(inpars.Results.FPGAImage, ...
  {'char'}, {}, '', 'FPGAImage');
if ~isempty(inpars.Results.FPGAImage) ...
    && (exist(inpars.Results.FPGAImage, 'file') ~= 2)
  error(message('sdru:sdruload:imageNotFound', ...
    'FPGA', inpars.Results.FPGAImage))
end
validateattributes(inpars.Results.FirmwareImage, ...
  {'char'}, {}, '', 'FirmwareImage');
if  ~isempty(inpars.Results.FirmwareImage) ...
    && (exist(inpars.Results.FirmwareImage, 'file') ~= 2)
  error(message('sdru:sdruload:imageNotFound', ...
    'Firmware', inpars.Results.FirmwareImage))
end
end

%--------------------------------------------------------------------------
function flag = isN2xx(device)
if strcmp(device, 'USRP2')
  flag = false;
else
  flag = true;
end
end
