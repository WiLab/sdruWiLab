classdef N210ImageLoader < sdru.internal.N2xxImageLoader
%N210ImageLoader Base class for SDRu image loader utility for N210 radios

%   Copyright 2013 The MathWorks, Inc.
  
properties (Constant, Access=protected)
  DefaultFirmwareImage = ...
    fullfile(sdru.internal.ImageLoaderBase.getDefaultImagePath(), ...
    'usrp_n210_fw.bin');
end

properties (Access = protected)
  UserSpecifiedFirmwareImage
end

methods
  function set.UserSpecifiedFirmwareImage(this, aImage)
    if isempty(strfind(aImage, 'n210'))
      error(message('sdru:N2xxImageLoader:invalidImage', ...
        'firmware', aImage, 'n210', this.Device));
    end
    this.UserSpecifiedFirmwareImage = aImage;
  end
end
end