#include "libReceive.h"
#include <iostream>
#include <thread>
#include <unistd.h>

void TX_thread(char *msg)
{

    mwArray ObjAGC_tx,ObjSDRuTransmitter_tx,ObjDetect_tx,ObjPreambleDemod_tx,ObjDataDemod_tx,estimate_tx,rx_tx,timeoutDuration_tx,messageBits_tx,SamplingFreq_tx;
    mwArray destNodeID_tx, originNodeID_tx, inputPayloadMessage_tx;


    CreateTXRX_TX(10, ObjAGC_tx,ObjSDRuTransmitter_tx,ObjDetect_tx,ObjPreambleDemod_tx,ObjDataDemod_tx,estimate_tx,rx_tx,timeoutDuration_tx,messageBits_tx,SamplingFreq_tx, destNodeID_tx,originNodeID_tx, inputPayloadMessage_tx);


    sleep(25);
    //Call Transmitter
    std::cout << "Starting Transmitter" << std::endl;
    while (1)
    {
	PHYTransmit(ObjSDRuTransmitter_tx,inputPayloadMessage_tx,SamplingFreq_tx,originNodeID_tx,destNodeID_tx);
    //CreateTXRX_TX(10, ObjAGC_tx,ObjSDRuTransmitter_tx,ObjDetect_tx,ObjPreambleDemod_tx,ObjDataDemod_tx,estimate_tx,rx_tx,timeoutDuration_tx,messageBits_tx,SamplingFreq_tx, destNodeID_tx,originNodeID_tx, inputPayloadMessage_tx);
    }

}

void thread_to_run(char *msg)
{

    // Must declare all MATLAB data types after initializing the 
    // application and the library, or their constructors will fail.
    mwArray ObjAGC,ObjSDRuReceiver,ObjDetect,ObjPreambleDemod,ObjDataDemod,estimate,rx,timeoutDuration,messageBits,SamplingFreq;
    mwArray result;

    //Create Required Objeccts/Structs/Variables
    CreateTXRX(10, ObjAGC,ObjSDRuReceiver,ObjDetect,ObjPreambleDemod,ObjDataDemod,estimate,rx,timeoutDuration,messageBits,SamplingFreq);

    int k;
    for (k=0;k<100;k++){
    // Initialization succeeded. Encrypt or decrypt.
    std::cout << "Starting Receiver" << std::endl;
    PHYReceive(1, result,ObjAGC,ObjSDRuReceiver,ObjDetect,ObjPreambleDemod,ObjDataDemod,estimate,rx,timeoutDuration,messageBits);
    //PHYReceive(1, result,ObjSDRuReceiver,ObjAGC,ObjDetect,ObjPreambleDemod,ObjDataDemod,estimate,rx,timeoutDuration,messageBits);
    std::cout << "Done Receiving" << std::endl;
    std::cout << result << std::endl;
    }

    //mxfree(objSDRuReceiver);
}



int main(){

// Initialize the MATLAB Compiler Runtime global state
if (!mclInitializeApplication(NULL,0)) 
{
std::cerr << "Could not initialize the application properly."
	  << std::endl;
//return -1;
}

// Initialize the Vigenere library
if( !libReceiveInitialize() )
{
std::cerr << "Could not initialize the library properly."
	  << std::endl;
//return -1;
}

//Spawn Thread
char *message;
std::thread thread1( thread_to_run, message );
std::thread thread2( TX_thread, message );

std::cout << "Print from Main Loop" << std::endl;

//Wait for thread to finish
thread1.join();
thread2.join();

//std::cout << "###########" << std::endl;
//std::cout << message << std::endl;
//std::cout << "###########" << std::endl;

// Shut down the library and the application global state.
libReceiveTerminate();
mclTerminateApplication();

}



