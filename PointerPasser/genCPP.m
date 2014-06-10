!export LD_LIBRARY_PATH=/opt/MATLAB/R2013a/runtime/glnxa64/

mcc -v -W cpplib:libPassPointer -T link:lib WriteDataToPipe.m CreateObj.m

!sudo cp libPassPointer.so /opt/MATLAB/R2013a/runtime/glnxa64/

mbuild main.cpp libPassPointer.so

