!export LD_LIBRARY_PATH=/opt/MATLAB/R2013a/runtime/glnxa64/
%mcc -v -W cpplib:libphyreceive -T link:lib testPHYReceive.m CreateTXRX.m PHYReceive.m locateOFDMFrame_sdr.m coarseOFDMFreqEst_sdr.m equalizeOFDM.m demodOFDMSubcarriers_sdr.m OFDMbits2letters.m
%mcc -v -W cpplib:libphyreceive -T link:lib testPHYReceive.m CreateTXRX.m PHYReceive.m BoardIdCapiEnumT.m
mcc -v -W cpplib:libReceive -T link:lib mccTXTest.m create_obj.m BoardIdCapiEnumT.m
!sudo cp libReceive.so /opt/MATLAB/R2013a/runtime/glnxa64/
mbuild phyreceive.cpp libReceive.so
