% To run this test, do not forguet to make the access to the 
% OFDMAletters2bits and OFDMbits2letters methods in the TxOFDMA and RxOFDMA
% public.
% Do not forguet to change them back to protected aftewards!!!

clear classes
clc

objTx = TxOFDMA;
objRx = RxOFDMA;

intData = uint8([1  2 53 53 255 300]); % The last number is supposed to be
                                       % wrong

fprintf('\n The data in INTS is: \n');
disp(intData);

bitsData = objTx.OFDMletters2bits('hi');

fprintf('\n The data in BITS is: \n');
disp(bitsData);

finalData = objRx.OFDMbits2letters(bitsData);

fprintf('\n The FINAL data is: \n');
disp(char(finalData));

