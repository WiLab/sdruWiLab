
#include "PHYReceiverFun.h"

#include "PHYReceiverFun_initialize.h"

#include <iostream>
#include <thread>
//#include <unistd.h>

void Thread_TX(char *message)
{
    std::cout<<"Transmitter !!!!!!!!!!!!!!!!!!!!!!!\n"<<std::endl;
    

	int k;
	for (k=0;k<10000;k++){
		PHYTransmitterFun(20);
        std::cout<<"CPP:Transmitter Looped\n"<<std::endl;
	}
    
    std::cout<<"Transmitter DONE!!!!!!!!!!!!!!!!!!!!!!!\n"<<std::endl;
    //mxfree(objSDRuReceiver);
}



void Thread_RX(char *message)
{
    std::cout<<"Receiver !!!!!!!!!!!!!!!!!!!!!!!\n"<<std::endl;
        
	int k;
	for (k=0;k<100;k++){
		// Initialization succeeded. Encrypt or decrypt.
		PHYReceiverFun(20);
        	std::cout<<"CPP:Receiver Looped\n"<<std::endl;
	}

    std::cout<<"Receiver DONE!!!!!!!!!!!!!!!!!!!!!!!\n"<<std::endl;
    
}


int main(){
    
//Spawn Thread
    char *message;
    PHYReceiverFun_initialize();

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



