%!export LD_LIBRARY_PATH=/opt/MATLAB/R2013a/runtime/glnxa64/
!export LD_LIBRARY_PATH=/usr/local/MATLAB/R2013b/runtime/glnxa64/

decimation = 20;


%compilesdru('testPHYReceive_per','mex','-args','{decimation}');
%codegen testPHYReceive_per -config:dll -args {decimation}
%codegen testPHYTransmit -config:dll
%codegen testTXRX -config:dll
codegen -config:dll -args {decimation} testPHYReceive_per.m testPHYTransmit.m -o testTXRX

%compilesdru('testPHYTransmit','mex');

% mcc -v -W cpplib:libtestPHYReceive -T link:lib testPHYReceive.m...
%                                                generateOFDMSignal.m...
%                                                generateOFDMSignal_TX2.m...
%                                                OFDMbits2letters.m...
%                                                OFDMletters2bits.m...
%                                                initializeOFDMSyncMemory_sdr.m...
%                                                PHYReceive.m...
%                                                locateOFDMFrame_sdr.m...
%                                                coarseOFDMFreqEst_sdr.m...
%                                                equalizeOFDM.m...
%                                                demodOFDMSubcarriers_sdr.m ...
%                                                CreateTXRX.m...
%                                                BoardIdCapiEnumT.m...
%                                                OFDMBase.m...
%                                                OFDMModulator.m...
%                                                OFDMDemodulator.m...
%                                                SDRuReceiver.p

%mcc -v -W cpplib:libMEXtestPHY -T link:lib MEXtestPHYReceive_per.m MEXtestPHYTransmit.m

!rm -rf codegen/dll/combo/*
%!cp -r codegen/dll/testPHYReceive_per/* codegen/dll/combo/
%!cp -r codegen/dll/testPHYTransmit/* codegen/dll/combo/
!cp -r codegen/dll/testTXRX/* codegen/dll/combo/
!cp phyreceive_threads_per2.cpp codegen/dll/combo/
%!cp phyreceive_MEXtestPHYReceive_per_forkLIB.cpp codegen/dll/combo/
!cp tmwtypes.h codegen/dll/combo/
!cp -r /home/sdruser/git/traviscollins/SupportPackage/sdru/include/* codegen/dll/combo/

%!sudo cp libMEXtestPHY.so /opt/MATLAB/R2013a/runtime/glnxa64/
cd codegen/dll/combo/
%!sudo cp testPHYReceive_per.so /usr/local/MATLAB/R2013b/runtime/glnxa64/
%!sudo cp testPHYTransmit.so /usr/local/MATLAB/R2013b/runtime/glnxa64/
!sudo cp testTXRX.so /usr/local/MATLAB/R2013b/runtime/glnxa64/


%mbuild phyreceive_threads_per2.cpp testPHYReceive_per.so testPHYTransmit.so
mbuild phyreceive_threads_per2.cpp testTXRX.so
%mbuild phyreceive_MEXtestPHYReceive_per_forkLIB.cpp testPHYReceive_per.so testPHYTransmit.so

!./phyreceive_threads_per2
%!./phyreceive_MEXtestPHYReceive_per_forkLIB
