#include "libMEXtestPHY_mex.h"
#include <iostream>
#include <thread>
#include <unistd.h>
#include <string>

#define MSGLEN  64


void Process_TX(int *fd)
{

	// Initialize the MATLAB Compiler Runtime global state
	if (!mclInitializeApplication(NULL,0)) 
	{
	std::cerr << "Could not initialize the application properly."
	  << std::endl;
	//return -1;
	}

	// Initialize the Vigenere library
	if( !libMEXtestPHY_mexInitialize() )
	{
	std::cerr << "Could not initialize the library properly."
	  << std::endl;
	//return -1;
	}

	// Must declare all MATLAB data types after initializing the 
	// application and the library, or their constructors will fail.
	mwArray result;
	mwArray decimation;
	decimation = mwArray( 20 );
	char *c;

	int k;
	for (k=0;k<100000;k++){
		// Initialization succeeded. Encrypt or decrypt.
		//MEXtestPHYTransmit(1,result);
		//c = strdup( mwString( result.ToString() ) );
        	write(fd[1], "HelloFromTX", 11);
	}

	// Shut down the library and the application global state.
	libMEXtestPHY_mexTerminate();
	mclTerminateApplication();
	//mxfree(objSDRuReceiver);
}

void Process_RX(int *fd)
{

	// Initialize the MATLAB Compiler Runtime global state
	if (!mclInitializeApplication(NULL,0)) 
	{
	std::cerr << "Could not initialize the application properly."
	  << std::endl;
	//return -1;
	}

	// Initialize the Vigenere library
	if( !libMEXtestPHY_mexInitialize() )
	{
	std::cerr << "Could not initialize the library properly."
	  << std::endl;
	//return -1;
	}

	// Must declare all MATLAB data types after initializing the 
	// application and the library, or their constructors will fail.
	mwArray result;
	mwArray decimation;
	decimation = mwArray( 20 );
	char *c;

	int k;
	for (k=0;k<100000;k++){
		// Initialization succeeded. Encrypt or decrypt.
		testPHYReceive_per_mex(1,result,decimation);
		c = strdup( mwString( result.ToString() ) );
        	write(fd[1], c, 11);
	}

	// Shut down the library and the application global state.
	libMEXtestPHY_mexTerminate();
	mclTerminateApplication();
	//mxfree(objSDRuReceiver);
}



int main(){

//int	pid;
int     fd[2];
pid_t pid;
int     result;


//Creating a pipe
result = pipe (fd);
if (result < 0) {
	//failure in creating a pipe
	perror("pipe");
	exit (1);
}

//Creating a child process
pid = fork();
if (pid < 0) {
	//failure in creating a child
	perror ("fork");
	exit(2);
}
if (pid > 0) {
	pid = fork();
	if (pid > 0){
		std::cout<<"Parent"<<std::endl;
		char message[MSGLEN];
		while (1){
		    std::cout << "##################" << std::endl;
                    //Clearing the message buffer
                    memset (message, 0, sizeof(message));

                    //Reading message from the pipe
                    read (fd[0], message, sizeof(message));
                    printf("-- %s\n",message);
		    std::cout << "##################" << std::endl;
		}
		}
	else{
		std::cout<<"Child"<<std::endl;
		//Process_TX( fd );
	}
}
else if (pid == 0) {
	std::cout<<"Child"<<std::endl;
	Process_RX( fd );
}

return 0;

}



