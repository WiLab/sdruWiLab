
disp('Running USRP startup commands, may have to enter password');
!sudo sysctl -w net.core.rmem_max=50000000
!sudo sysctl -w net.core.wmem_max=1048576
