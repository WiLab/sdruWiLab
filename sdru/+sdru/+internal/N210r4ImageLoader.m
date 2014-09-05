classdef N210r4ImageLoader < sdru.internal.N210ImageLoader
%N210r4ImageLoader SDRu image loader utility for N210 revision 4 radios

%   Copyright 2013 The MathWorks, Inc.

properties (Constant)
  Device = 'n210_r4';
end

properties (Constant, Access=protected)
  DefaultFPGAImage = ...
  	fullfile(sdru.internal.ImageLoaderBase.getDefaultImagePath(), ...
    'usrp_n210_r4_fpga.bin');
end

properties (Access = protected)
  UserSpecifiedFPGAImage
end
end