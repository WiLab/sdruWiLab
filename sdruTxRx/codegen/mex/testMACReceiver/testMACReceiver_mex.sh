MATLAB="/opt/MATLAB/R2013a"
Arch=glnxa64
ENTRYPOINT=mexFunction
MAPFILE=$ENTRYPOINT'.map'
PREFDIR="/home/sdruser/.matlab/R2013a"
OPTSFILE_NAME="./mexopts.sh"
. $OPTSFILE_NAME
COMPILER=$CC
. $OPTSFILE_NAME
echo "# Make settings for testMACReceiver" > testMACReceiver_mex.mki
echo "CC=$CC" >> testMACReceiver_mex.mki
echo "CFLAGS=$CFLAGS" >> testMACReceiver_mex.mki
echo "CLIBS=$CLIBS" >> testMACReceiver_mex.mki
echo "COPTIMFLAGS=$COPTIMFLAGS" >> testMACReceiver_mex.mki
echo "CDEBUGFLAGS=$CDEBUGFLAGS" >> testMACReceiver_mex.mki
echo "CXX=$CXX" >> testMACReceiver_mex.mki
echo "CXXFLAGS=$CXXFLAGS" >> testMACReceiver_mex.mki
echo "CXXLIBS=$CXXLIBS" >> testMACReceiver_mex.mki
echo "CXXOPTIMFLAGS=$CXXOPTIMFLAGS" >> testMACReceiver_mex.mki
echo "CXXDEBUGFLAGS=$CXXDEBUGFLAGS" >> testMACReceiver_mex.mki
echo "LD=$LD" >> testMACReceiver_mex.mki
echo "LDFLAGS=$LDFLAGS" >> testMACReceiver_mex.mki
echo "LDOPTIMFLAGS=$LDOPTIMFLAGS" >> testMACReceiver_mex.mki
echo "LDDEBUGFLAGS=$LDDEBUGFLAGS" >> testMACReceiver_mex.mki
echo "Arch=$Arch" >> testMACReceiver_mex.mki
echo OMPFLAGS= >> testMACReceiver_mex.mki
echo OMPLINKFLAGS= >> testMACReceiver_mex.mki
echo "EMC_COMPILER=" >> testMACReceiver_mex.mki
echo "EMC_CONFIG=optim" >> testMACReceiver_mex.mki
"/opt/MATLAB/R2013a/bin/glnxa64/gmake" -B -f testMACReceiver_mex.mk
