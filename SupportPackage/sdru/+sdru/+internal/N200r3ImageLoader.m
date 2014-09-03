classdef N200r3ImageLoader < sdru.internal.N200ImageLoader
%N200r3ImageLoader SDRu image loader utility for N200 revision 3 radios

%   Copyright 2013 The MathWorks, Inc.
  
properties (Constant)
  Device = 'n200_r3';
end

properties (Constant, Access=protected)
  DefaultFPGAImage = ...
    fullfile(sdru.internal.ImageLoaderBase.getDefaultImagePath(), ...
    'usrp_n200_r3_fpga.bin');
end

properties (Access = protected)
  UserSpecifiedFPGAImage
end
end