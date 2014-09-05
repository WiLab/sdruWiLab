classdef N200ImageLoader < sdru.internal.N2xxImageLoader
%N200ImageLoader Base class for SDRu image loader utility for N200 radios

%   Copyright 2013 The MathWorks, Inc.
  
properties (Constant, Access=protected)
  DefaultFirmwareImage = ...
    fullfile(sdru.internal.ImageLoaderBase.getDefaultImagePath(), ...
    'usrp_n200_fw.bin');
end

properties (Access = protected)
  UserSpecifiedFirmwareImage
end

methods
  function set.UserSpecifiedFirmwareImage(this, aImage)
    if isempty(strfind(aImage, 'n200'))
      error(message('sdru:N2xxImageLoader:invalidImage', ...
        'firmware', aImage, 'n200', this.Device));
    end
    this.UserSpecifiedFirmwareImage = aImage;
  end
end
end