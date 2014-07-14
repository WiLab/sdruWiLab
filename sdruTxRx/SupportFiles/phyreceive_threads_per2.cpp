//#include "libMEXtestPHY.h"
#include "testPHYTransmit.h"
//#include "testPHYTransmit_initialize.h"
//#include "testPHYTransmit_terminate.h"

#include "testPHYReceive_per.h"
//#include "testPHYReceive_per_initialize.h"
//#include "testPHYReceive_per_terminate.h"

#include "testTXRX_initialize.h"

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
    
        std::cout<<"Transmitter PREP!!!!!!!!!!!!!!!!!!!!!!!\n"<<std::endl;

	int k;
	for (k=0;k<10000;k++){
		// Initialization succeeded. Encrypt or decrypt.
		//MEXtestPHYTransmit(1,result);
		testPHYTransmit();
		//c = strdup( mwString( result.ToString() ) );
        	//write(fd[1], "HelloFromTX", 11);
                //std::cout<<"Transmitter Looped\n"<<std::endl;
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
        
    std::cout<<"Receiver PREP!!!!!!!!!!!!!!!!!!!!!!!\n"<<std::endl;

	int k;
	for (k=0;k<100;k++){
		// Initialization succeeded. Encrypt or decrypt.
		testPHYReceive_per(20);
        std::cout<<"Receiver Looped\n"<<std::endl;
	}

    std::cout<<"Receiver DONE!!!!!!!!!!!!!!!!!!!!!!!\n"<<std::endl;
    
}


int main(){
    
//Spawn Thread
    char *message;
/*    testPHYTransmit_initialize();
    sleep(5);
    testPHYReceive_per_initialize();
    sleep(5);
    testPHYTransmit();
    sleep(5);
    testPHYReceive_per(20);
*/
    testTXRX_initialize();

    std::thread thread1( Thread_RX, message );
    std::thread thread2( Thread_TX, message );
    
    std::cout << "Print from Main Loop" << std::endl;
    
//Wait for thread to finish
    thread1.join();
    thread2.join();
    
//std::cout << "###########" << std::endl;
//std::cout << message << std::endl;
//std::cout << "###########" << std::endl;
    
    
}



