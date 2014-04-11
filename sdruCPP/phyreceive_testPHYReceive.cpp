#include "libtestPHYReceive.h"
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
    if( !libtestPHYReceiveInitialize() )
    {
        std::cerr << "Could not initialize the library properly."
                  << std::endl;
	return -1;
    }

    // Must declare all MATLAB data types after initializing the 
    // application and the library, or their constructors will fail.
    //mwArray text(av[2]);
    //mwArray key(av[3]);
    mwArray result;

    // Initialization succeeded. Encrypt or decrypt.
    std::cout << "Starting Receiver" << std::endl;
    //while (1)
    //{
    testPHYReceive(1,result);
	//}
    std::cout << "Done Receiving" << std::endl;
    //std::cout << result << std::endl;

    // Shut down the library and the application global state.
    libtestPHYReceiveTerminate();
    mclTerminateApplication();
}

