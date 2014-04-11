!export LD_LIBRARY_PATH=/opt/MATLAB/R2013a/runtime/glnxa64/

mcc -v -W cpplib:libtestPHYReceive -T link:lib testPHYReceive.m BoardIdCapiEnumT.m

!sudo cp libtestPHYReceive.so /opt/MATLAB/R2013a/runtime/glnxa64/

mbuild phyreceive_testPHYReceive.cpp libtestPHYReceive.so
!./phyreceive_testPHYReceive
