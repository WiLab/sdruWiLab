MATLAB="/Applications/MATLAB_R2013b.app"
Arch=maci64
ENTRYPOINT=mexFunction
MAPFILE=$ENTRYPOINT'.map'
PREFDIR="/Users/travis/.matlab/R2013b"
OPTSFILE_NAME="./mexopts.sh"
. $OPTSFILE_NAME
COMPILER=$CC
. $OPTSFILE_NAME
echo "# Make settings for testFileSourceSink" > testFileSourceSink_mex.mki
echo "CC=$CC" >> testFileSourceSink_mex.mki
echo "CFLAGS=$CFLAGS" >> testFileSourceSink_mex.mki
echo "CLIBS=$CLIBS" >> testFileSourceSink_mex.mki
echo "COPTIMFLAGS=$COPTIMFLAGS" >> testFileSourceSink_mex.mki
echo "CDEBUGFLAGS=$CDEBUGFLAGS" >> testFileSourceSink_mex.mki
echo "CXX=$CXX" >> testFileSourceSink_mex.mki
echo "CXXFLAGS=$CXXFLAGS" >> testFileSourceSink_mex.mki
echo "CXXLIBS=$CXXLIBS" >> testFileSourceSink_mex.mki
echo "CXXOPTIMFLAGS=$CXXOPTIMFLAGS" >> testFileSourceSink_mex.mki
echo "CXXDEBUGFLAGS=$CXXDEBUGFLAGS" >> testFileSourceSink_mex.mki
echo "LD=$LD" >> testFileSourceSink_mex.mki
echo "LDFLAGS=$LDFLAGS" >> testFileSourceSink_mex.mki
echo "LDOPTIMFLAGS=$LDOPTIMFLAGS" >> testFileSourceSink_mex.mki
echo "LDDEBUGFLAGS=$LDDEBUGFLAGS" >> testFileSourceSink_mex.mki
echo "Arch=$Arch" >> testFileSourceSink_mex.mki
echo OMPFLAGS= >> testFileSourceSink_mex.mki
echo OMPLINKFLAGS= >> testFileSourceSink_mex.mki
echo "EMC_COMPILER=" >> testFileSourceSink_mex.mki
echo "EMC_CONFIG=optim" >> testFileSourceSink_mex.mki
"/Applications/MATLAB_R2013b.app/bin/maci64/gmake" -B -f testFileSourceSink_mex.mk
