MATLAB="/Applications/MATLAB_R2013b.app"
Arch=maci64
ENTRYPOINT=mexFunction
MAPFILE=$ENTRYPOINT'.map'
PREFDIR="/Users/travis/.matlab/R2013b"
OPTSFILE_NAME="./mexopts.sh"
. $OPTSFILE_NAME
COMPILER=$CC
. $OPTSFILE_NAME
echo "# Make settings for testMACTransmitter" > testMACTransmitter_mex.mki
echo "CC=$CC" >> testMACTransmitter_mex.mki
echo "CFLAGS=$CFLAGS" >> testMACTransmitter_mex.mki
echo "CLIBS=$CLIBS" >> testMACTransmitter_mex.mki
echo "COPTIMFLAGS=$COPTIMFLAGS" >> testMACTransmitter_mex.mki
echo "CDEBUGFLAGS=$CDEBUGFLAGS" >> testMACTransmitter_mex.mki
echo "CXX=$CXX" >> testMACTransmitter_mex.mki
echo "CXXFLAGS=$CXXFLAGS" >> testMACTransmitter_mex.mki
echo "CXXLIBS=$CXXLIBS" >> testMACTransmitter_mex.mki
echo "CXXOPTIMFLAGS=$CXXOPTIMFLAGS" >> testMACTransmitter_mex.mki
echo "CXXDEBUGFLAGS=$CXXDEBUGFLAGS" >> testMACTransmitter_mex.mki
echo "LD=$LD" >> testMACTransmitter_mex.mki
echo "LDFLAGS=$LDFLAGS" >> testMACTransmitter_mex.mki
echo "LDOPTIMFLAGS=$LDOPTIMFLAGS" >> testMACTransmitter_mex.mki
echo "LDDEBUGFLAGS=$LDDEBUGFLAGS" >> testMACTransmitter_mex.mki
echo "Arch=$Arch" >> testMACTransmitter_mex.mki
echo OMPFLAGS= >> testMACTransmitter_mex.mki
echo OMPLINKFLAGS= >> testMACTransmitter_mex.mki
echo "EMC_COMPILER=" >> testMACTransmitter_mex.mki
echo "EMC_CONFIG=optim" >> testMACTransmitter_mex.mki
"/Applications/MATLAB_R2013b.app/bin/maci64/gmake" -B -f testMACTransmitter_mex.mk
