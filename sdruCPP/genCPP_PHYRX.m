!export LD_LIBRARY_PATH=/opt/MATLAB/R2013a/runtime/glnxa64/
%mcc -v -W cpplib:libphyreceive -T link:lib testPHYReceive.m CreateTXRX.m PHYReceive.m locateOFDMFrame_sdr.m coarseOFDMFreqEst_sdr.m equalizeOFDM.m demodOFDMSubcarriers_sdr.m OFDMbits2letters.m

%mcc -v -W cpplib:libReceive -T link:lib PHYTransmit.m PHYReceive.m CreateTXRX.m CreateTXRX_TX.m BoardIdCapiEnumT.m

mcc -v -W cpplib:libReceive -T link:lib  PHYReceive.m  locateOFDMFrame_sdr.m coarseOFDMFreqEst_sdr.m equalizeOFDM.m demodOFDMSubcarriers_sdr.m ...
                                         CreateTXRX.m    BoardIdCapiEnumT.m
%mcc -v -W cpplib:libTransmit -T link:lib PHYTransmit.m CreateTXRX_TX.m BoardIdCapiEnumT.m

%mcc -v -W cpplib:libReceive -T link:lib PHYTransmit.m PHYReceive.m CreateTXRX.m CreateTXRX_TX.m BoardIdCapiEnumT.m -N -p /opt/MATLAB/R2013a/comm
%mcc -v -W cpplib:libReceive -T link:lib mccTXTest.m create_obj.m BoardIdCapiEnumT.m HandleObject.m getObject.m

!sudo cp libReceive.so /opt/MATLAB/R2013a/runtime/glnxa64/
%!sudo cp libTransmit.so /opt/MATLAB/R2013a/runtime/glnxa64/

%mbuild phyreceive_threads_split.cpp libReceive.so libTransmit.so
mbuild phyreceive_threads_split.cpp libReceive.so
!./phyreceive_threads_split
