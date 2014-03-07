MATLAB="/Applications/MATLAB_R2013b.app"
Arch=maci64
ENTRYPOINT=mexFunction
MAPFILE=$ENTRYPOINT'.map'
PREFDIR="/Users/travis/.matlab/R2013b"
OPTSFILE_NAME="./mexopts.sh"
. $OPTSFILE_NAME
COMPILER=$CC
. $OPTSFILE_NAME
echo "# Make settings for testSpectrumSenseP25" > testSpectrumSenseP25_mex.mki
echo "CC=$CC" >> testSpectrumSenseP25_mex.mki
echo "CFLAGS=$CFLAGS" >> testSpectrumSenseP25_mex.mki
echo "CLIBS=$CLIBS" >> testSpectrumSenseP25_mex.mki
echo "COPTIMFLAGS=$COPTIMFLAGS" >> testSpectrumSenseP25_mex.mki
echo "CDEBUGFLAGS=$CDEBUGFLAGS" >> testSpectrumSenseP25_mex.mki
echo "CXX=$CXX" >> testSpectrumSenseP25_mex.mki
echo "CXXFLAGS=$CXXFLAGS" >> testSpectrumSenseP25_mex.mki
echo "CXXLIBS=$CXXLIBS" >> testSpectrumSenseP25_mex.mki
echo "CXXOPTIMFLAGS=$CXXOPTIMFLAGS" >> testSpectrumSenseP25_mex.mki
echo "CXXDEBUGFLAGS=$CXXDEBUGFLAGS" >> testSpectrumSenseP25_mex.mki
echo "LD=$LD" >> testSpectrumSenseP25_mex.mki
echo "LDFLAGS=$LDFLAGS" >> testSpectrumSenseP25_mex.mki
echo "LDOPTIMFLAGS=$LDOPTIMFLAGS" >> testSpectrumSenseP25_mex.mki
echo "LDDEBUGFLAGS=$LDDEBUGFLAGS" >> testSpectrumSenseP25_mex.mki
echo "Arch=$Arch" >> testSpectrumSenseP25_mex.mki
echo OMPFLAGS= >> testSpectrumSenseP25_mex.mki
echo OMPLINKFLAGS= >> testSpectrumSenseP25_mex.mki
echo "EMC_COMPILER=" >> testSpectrumSenseP25_mex.mki
echo "EMC_CONFIG=optim" >> testSpectrumSenseP25_mex.mki
"/Applications/MATLAB_R2013b.app/bin/maci64/gmake" -B -f testSpectrumSenseP25_mex.mk
