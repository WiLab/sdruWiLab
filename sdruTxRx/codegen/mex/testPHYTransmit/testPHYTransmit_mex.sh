MATLAB="/opt/MATLAB/R2013a"
Arch=glnxa64
ENTRYPOINT=mexFunction
MAPFILE=$ENTRYPOINT'.map'
PREFDIR="/home/sdruser/.matlab/R2013a"
OPTSFILE_NAME="./mexopts.sh"
. $OPTSFILE_NAME
COMPILER=$CC
. $OPTSFILE_NAME
echo "# Make settings for testPHYTransmit" > testPHYTransmit_mex.mki
echo "CC=$CC" >> testPHYTransmit_mex.mki
echo "CFLAGS=$CFLAGS" >> testPHYTransmit_mex.mki
echo "CLIBS=$CLIBS" >> testPHYTransmit_mex.mki
echo "COPTIMFLAGS=$COPTIMFLAGS" >> testPHYTransmit_mex.mki
echo "CDEBUGFLAGS=$CDEBUGFLAGS" >> testPHYTransmit_mex.mki
echo "CXX=$CXX" >> testPHYTransmit_mex.mki
echo "CXXFLAGS=$CXXFLAGS" >> testPHYTransmit_mex.mki
echo "CXXLIBS=$CXXLIBS" >> testPHYTransmit_mex.mki
echo "CXXOPTIMFLAGS=$CXXOPTIMFLAGS" >> testPHYTransmit_mex.mki
echo "CXXDEBUGFLAGS=$CXXDEBUGFLAGS" >> testPHYTransmit_mex.mki
echo "LD=$LD" >> testPHYTransmit_mex.mki
echo "LDFLAGS=$LDFLAGS" >> testPHYTransmit_mex.mki
echo "LDOPTIMFLAGS=$LDOPTIMFLAGS" >> testPHYTransmit_mex.mki
echo "LDDEBUGFLAGS=$LDDEBUGFLAGS" >> testPHYTransmit_mex.mki
echo "Arch=$Arch" >> testPHYTransmit_mex.mki
echo OMPFLAGS= >> testPHYTransmit_mex.mki
echo OMPLINKFLAGS= >> testPHYTransmit_mex.mki
echo "EMC_COMPILER=" >> testPHYTransmit_mex.mki
echo "EMC_CONFIG=optim" >> testPHYTransmit_mex.mki
"/opt/MATLAB/R2013a/bin/glnxa64/gmake" -B -f testPHYTransmit_mex.mk
