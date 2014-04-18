#include "libMEXtestPHYReceive.h"
#include <iostream>

int main()
{
    
    // Initialize the MATLAB Compiler Runtime global state
    if (!mclInitializeApplication(NULL,0)) 
    {
        std::cerr << "Could not initialize the application properly."
                  << std::endl;
    	return -1;
    }

    // Initialize the Vigenere library
    if( !libMEXtestPHYReceiveInitialize() )
    {
        std::cerr << "Could not initialize the library properly."
                  << std::endl;
	return -1;
    }

    // Must declare all MATLAB data types after initializing the 
    // application and the library, or their constructors will fail.
    mwArray result;
    mwArray decimation;
    decimation = mwArray(20);
    
    // Initialization succeeded. Encrypt or decrypt.
    std::cout << "Starting Receiver" << std::endl;
    while (1)
    {

    MEXtestPHYReceive_per(1,result,decimation);
    std::cout << result << std::endl;

	}
    std::cout << "Done Receiving" << std::endl;

    // Shut down the library and the application global state.
    libMEXtestPHYReceiveTerminate();
    mclTerminateApplication();
}

