MATLAB="/Applications/MATLAB_R2013b.app"
Arch=maci64
ENTRYPOINT=mexFunction
MAPFILE=$ENTRYPOINT'.map'
PREFDIR="/Users/travis/.matlab/R2013b"
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
"/Applications/MATLAB_R2013b.app/bin/maci64/gmake" -B -f testPHYTransmit_mex.mk
