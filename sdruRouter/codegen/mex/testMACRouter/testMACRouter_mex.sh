MATLAB="/Applications/MATLAB_R2013b.app"
Arch=maci64
ENTRYPOINT=mexFunction
MAPFILE=$ENTRYPOINT'.map'
PREFDIR="/Users/travis/.matlab/R2013b"
OPTSFILE_NAME="./mexopts.sh"
. $OPTSFILE_NAME
COMPILER=$CC
. $OPTSFILE_NAME
echo "# Make settings for testMACRouter" > testMACRouter_mex.mki
echo "CC=$CC" >> testMACRouter_mex.mki
echo "CFLAGS=$CFLAGS" >> testMACRouter_mex.mki
echo "CLIBS=$CLIBS" >> testMACRouter_mex.mki
echo "COPTIMFLAGS=$COPTIMFLAGS" >> testMACRouter_mex.mki
echo "CDEBUGFLAGS=$CDEBUGFLAGS" >> testMACRouter_mex.mki
echo "CXX=$CXX" >> testMACRouter_mex.mki
echo "CXXFLAGS=$CXXFLAGS" >> testMACRouter_mex.mki
echo "CXXLIBS=$CXXLIBS" >> testMACRouter_mex.mki
echo "CXXOPTIMFLAGS=$CXXOPTIMFLAGS" >> testMACRouter_mex.mki
echo "CXXDEBUGFLAGS=$CXXDEBUGFLAGS" >> testMACRouter_mex.mki
echo "LD=$LD" >> testMACRouter_mex.mki
echo "LDFLAGS=$LDFLAGS" >> testMACRouter_mex.mki
echo "LDOPTIMFLAGS=$LDOPTIMFLAGS" >> testMACRouter_mex.mki
echo "LDDEBUGFLAGS=$LDDEBUGFLAGS" >> testMACRouter_mex.mki
echo "Arch=$Arch" >> testMACRouter_mex.mki
echo OMPFLAGS= >> testMACRouter_mex.mki
echo OMPLINKFLAGS= >> testMACRouter_mex.mki
echo "EMC_COMPILER=" >> testMACRouter_mex.mki
echo "EMC_CONFIG=optim" >> testMACRouter_mex.mki
"/Applications/MATLAB_R2013b.app/bin/maci64/gmake" -B -f testMACRouter_mex.mk
