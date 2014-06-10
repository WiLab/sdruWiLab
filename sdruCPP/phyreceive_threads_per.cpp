#include "libMEXtestPHY.h"
#include <iostream>
#include <thread>
#include <unistd.h>

void Thread_TX(char *message)
{
    std::cout<<"Transmitter !!!!!!!!!!!!!!!!!!!!!!!\n"<<std::endl;
    std::cout<<"Transmitter !!!!!!!!!!!!!!!!!!!!!!!\n"<<std::endl;
    std::cout<<"Transmitter !!!!!!!!!!!!!!!!!!!!!!!\n"<<std::endl;
    std::cout<<"Transmitter !!!!!!!!!!!!!!!!!!!!!!!\n"<<std::endl;
    std::cout<<"Transmitter !!!!!!!!!!!!!!!!!!!!!!!\n"<<std::endl;
    
	// Must declare all MATLAB data types after initializing the 
	// application and the library, or their constructors will fail.
	mwArray result;
	mwArray decimation;
	decimation = mwArray( 20 );
	char *c;

	int k;
	for (k=0;k<100000;k++){
		// Initialization succeeded. Encrypt or decrypt.
        std::cout<<"Transmitter PREP!!!!!!!!!!!!!!!!!!!!!!!\n"<<std::endl;
		MEXtestPHYTransmit(1,result);
		//c = strdup( mwString( result.ToString() ) );
        	//write(fd[1], "HelloFromTX", 11);
                std::cout<<"Transmitter Looped\n"<<std::endl;
	}
    
    std::cout<<"Transmitter DONE!!!!!!!!!!!!!!!!!!!!!!!\n"<<std::endl;
    //mxfree(objSDRuReceiver);
}



void Thread_RX(char *message)
{
    std::cout<<"Receiver !!!!!!!!!!!!!!!!!!!!!!!\n"<<std::endl;
    std::cout<<"Receiver !!!!!!!!!!!!!!!!!!!!!!!\n"<<std::endl;
    std::cout<<"Receiver !!!!!!!!!!!!!!!!!!!!!!!\n"<<std::endl;
    std::cout<<"Receiver !!!!!!!!!!!!!!!!!!!!!!!\n"<<std::endl;
    std::cout<<"Receiver !!!!!!!!!!!!!!!!!!!!!!!\n"<<std::endl;

    // Must declare all MATLAB data types after initializing the 
	// application and the library, or their constructors will fail.
	mwArray result2;
	mwArray decimation2;
	decimation2 = mwArray( 20 );
	char *c;

	int k;
	for (k=0;k<100000;k++){
		// Initialization succeeded. Encrypt or decrypt.
        std::cout<<"Receiver PREP!!!!!!!!!!!!!!!!!!!!!!!\n"<<std::endl;
		MEXtestPHYReceive_per(1,result2,decimation2);
		c = strdup( mwString( result2.ToString() ) );
        	//write(fd[1], c, 11);
        std::cout<<"Receiver Looped\n"<<std::endl;
	}

    std::cout<<"Receiver DONE!!!!!!!!!!!!!!!!!!!!!!!\n"<<std::endl;
    
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
	if( !libMEXtestPHYInitialize() )
	{
	std::cerr << "Could not initialize the library properly."
	  << std::endl;
	//return -1;
	}
    
    
//Spawn Thread
    char *message;
    std::thread thread1( Thread_RX, message );
    std::thread thread2( Thread_TX, message );
    
    std::cout << "Print from Main Loop" << std::endl;
    
//Wait for thread to finish
    thread1.join();
    thread2.join();
    
//std::cout << "###########" << std::endl;
//std::cout << message << std::endl;
//std::cout << "###########" << std::endl;
    
// Shut down the library and the application global state.
    libMEXtestPHYTerminate();
    mclTerminateApplication();
    
}



