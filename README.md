sdruWiLab
========

Wireless communication system based on an OFDM implemented in MATLAB for USRP radios

__Complete:__
Modules
 - CRC
 - Custom messages
 - Class based control of tx and rx
 - Energy Detection
 - BCH Codes
 - OFDMA Example

__To do:__
Modules
 - Advanced Spectrum sensing
 - Packetizer (modestly complete, has limitations)
 - Turbo Codes or LDPC (Don't fit will with current architecture)
 - CSMA Example

__OFDMA Demo:__
 0. Add all folders in repo to matlab path and get necessary support package
    - From repo root run 'setupUSRP;startup;'
 1. Navigate to sdruWiLab/sdruCPP/OFDMA
 2. Build transmitter and receiver(s)
    - use builder_txrx if you wish to use a single radio (Recommend using a USRP with XCVR daughtercard, other cards seem to have more crosstalk)
    - use builder_tx on transmitter only and builder_rx for receiver only, if using more than one radio
 3. Run
    - run executables produced (RX, TX, or TXRX) on appropriate nodes as built from step 2
   


__Day To Day To do:__
[Link](https://gist.github.com/travisfcollins/ced40883fdac86870063#file-daytodaytodo-md)

__Hardware:__

![alt tag](https://raw.github.com/WiLab/sdruOFDM/master/testbench.png)
