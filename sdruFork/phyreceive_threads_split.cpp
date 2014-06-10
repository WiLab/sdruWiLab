#include "libReceive.h"
#include "libTransmit.h"
#include <iostream>
#include <thread>
#include <unistd.h>

void Process_TX(int fd[2])
{
            
	// Initialize the MATLAB Compiler Runtime global state
	if (!mclInitializeApplication(NULL,0)) 
	{
	std::cerr << "Could not initialize the application properly."
		  << std::endl;
	//return -1;
	}

	// Initialize the Vigenere library
	if( !libTransmitInitialize() )
	{
	std::cerr << "Could not initialize the library properly."
		  << std::endl;
	//return -1;
	}

	mwArray ObjAGC_tx,ObjSDRuTransmitter_tx,ObjDetect_tx,ObjPreambleDemod_tx,ObjDataDemod_tx,estimate_tx,rx_tx,timeoutDuration_tx,messageBits_tx,SamplingFreq_tx;
	mwArray destNodeID_tx, originNodeID_tx, inputPayloadMessage_tx;

	CreateTXRX_TX(10, ObjAGC_tx,ObjSDRuTransmitter_tx,ObjDetect_tx,ObjPreambleDemod_tx,ObjDataDemod_tx,estimate_tx,rx_tx,timeoutDuration_tx,messageBits_tx,SamplingFreq_tx, destNodeID_tx,originNodeID_tx, inputPayloadMessage_tx);

	sleep(10);
	//Call Transmitter
	while (1)
	{
	std::cout << "##################Starting Transmitter" << std::endl;
	PHYTransmit(ObjSDRuTransmitter_tx,inputPayloadMessage_tx,SamplingFreq_tx,originNodeID_tx,destNodeID_tx);
	//CreateTXRX_TX(10, ObjAGC_tx,ObjSDRuTransmitter_tx,ObjDetect_tx,ObjPreambleDemod_tx,ObjDataDemod_tx,estimate_tx,rx_tx,timeoutDuration_tx,messageBits_tx,SamplingFreq_tx, destNodeID_tx,originNodeID_tx, inputPayloadMessage_tx);
	}

	// Shut down the library and the application global state.
	libTransmitTerminate();
	mclTerminateApplication();

        //Writing message to the pipe
	char *message = "At2Pipe";
        write(fd[1], message, strlen(message));

}

void Process_RX(char *msg)
{

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

	// Shut down the library and the application global state.
	libReceiveTerminate();
	mclTerminateApplication();
	//mxfree(objSDRuReceiver);
}



int main(){


int     fd[2];
//pid_t pid;
int     result;

 int pfork(int);

//Creating a pipe
result = pipe (fd);
if (result < 0) {
	//failure in creating a pipe
	perror("pipe");
	exit (1);
}

//Creating a child process
pid = pfork(2);
if (pid < 0) {
	//failure in creating a child
	perror ("fork");
	exit(2);
}

if (pid == 0) {
	Process_TX( fd );
}
if (pid == 1) {
	Process_RX( fd );
}


return 0;

}



