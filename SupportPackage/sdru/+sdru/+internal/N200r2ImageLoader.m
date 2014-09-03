classdef N200r2ImageLoader < sdru.internal.N200ImageLoader
%N200r2ImageLoader SDRu image loader utility for N200 revision 2 radios

%   Copyright 2013 The MathWorks, Inc.

properties (Constant)
  Device = 'n200_r2';
end

properties (Constant, Access=protected)
  DefaultFPGAImage = ...
    fullfile(sdru.internal.ImageLoaderBase.getDefaultImagePath(), ...
    'usrp_n200_r2_fpga.bin');
end

properties (Access = protected)
  UserSpecifiedFPGAImage
end
end