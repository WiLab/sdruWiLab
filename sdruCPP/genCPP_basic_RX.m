!export LD_LIBRARY_PATH=/opt/MATLAB/R2013a/runtime/glnxa64/

mcc -v -W cpplib:libbasic_RX -T link:lib basic_RX.m BoardIdCapiEnumT.m

!sudo cp libbasic_RX.so /opt/MATLAB/R2013a/runtime/glnxa64/

mbuild phyreceive_basic_RX.cpp libbasic_RX.so
!./phyreceive_basic_RX
