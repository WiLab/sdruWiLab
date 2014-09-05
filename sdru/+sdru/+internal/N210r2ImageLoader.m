classdef N210r2ImageLoader < sdru.internal.N210ImageLoader
%N210r2ImageLoader SDRu image loader utility for N210 revision 2 radios

%   Copyright 2013 The MathWorks, Inc.

properties (Constant)
  Device = 'n210_r2';
end

properties (Constant, Access=protected)
  DefaultFPGAImage = ...
    fullfile(sdru.internal.ImageLoaderBase.getDefaultImagePath(), ...
    'usrp_n210_r2_fpga.bin');
end

properties (Access = protected)
  UserSpecifiedFPGAImage
end
end