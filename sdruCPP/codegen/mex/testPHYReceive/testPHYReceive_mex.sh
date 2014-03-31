MATLAB="/Applications/MATLAB_R2013b.app"
Arch=maci64
ENTRYPOINT=mexFunction
MAPFILE=$ENTRYPOINT'.map'
PREFDIR="/Users/travis/.matlab/R2013b"
OPTSFILE_NAME="./mexopts.sh"
. $OPTSFILE_NAME
COMPILER=$CC
. $OPTSFILE_NAME
echo "# Make settings for testPHYReceive" > testPHYReceive_mex.mki
echo "CC=$CC" >> testPHYReceive_mex.mki
echo "CFLAGS=$CFLAGS" >> testPHYReceive_mex.mki
echo "CLIBS=$CLIBS" >> testPHYReceive_mex.mki
echo "COPTIMFLAGS=$COPTIMFLAGS" >> testPHYReceive_mex.mki
echo "CDEBUGFLAGS=$CDEBUGFLAGS" >> testPHYReceive_mex.mki
echo "CXX=$CXX" >> testPHYReceive_mex.mki
echo "CXXFLAGS=$CXXFLAGS" >> testPHYReceive_mex.mki
echo "CXXLIBS=$CXXLIBS" >> testPHYReceive_mex.mki
echo "CXXOPTIMFLAGS=$CXXOPTIMFLAGS" >> testPHYReceive_mex.mki
echo "CXXDEBUGFLAGS=$CXXDEBUGFLAGS" >> testPHYReceive_mex.mki
echo "LD=$LD" >> testPHYReceive_mex.mki
echo "LDFLAGS=$LDFLAGS" >> testPHYReceive_mex.mki
echo "LDOPTIMFLAGS=$LDOPTIMFLAGS" >> testPHYReceive_mex.mki
echo "LDDEBUGFLAGS=$LDDEBUGFLAGS" >> testPHYReceive_mex.mki
echo "Arch=$Arch" >> testPHYReceive_mex.mki
echo OMPFLAGS= >> testPHYReceive_mex.mki
echo OMPLINKFLAGS= >> testPHYReceive_mex.mki
echo "EMC_COMPILER=" >> testPHYReceive_mex.mki
echo "EMC_CONFIG=optim" >> testPHYReceive_mex.mki
"/Applications/MATLAB_R2013b.app/bin/maci64/gmake" -B -f testPHYReceive_mex.mk
