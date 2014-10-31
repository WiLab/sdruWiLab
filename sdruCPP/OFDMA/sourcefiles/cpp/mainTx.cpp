/*
 ** main.cpp
 */
#include <string>
#include <iostream>
#include <thread>
#include <tmwtypes.h>
#include <mutex>
#include <queue>
#include <condition_variable>
#include <unistd.h>

//Include headers of matlab functions
#include "Transmitter.h"
//#include "Transmit.h"

//Include header of combined library
//#include "TX_initialize.h"
//#include "TX_terminate.h"//Not sure if needed

//Transmitter Thread
void Transmitter_Thread(void)
{
    std::cout<<"Started Transmitter"<<std::endl;
    double output = 0;
    Transmitter();
/*    
    double users = 1;
    Transmit(users);
    users = 2;
    Transmit(users);
    sleep(5);
    users = 4;
    Transmit(users);
    users = 8;
    Transmit(users);
 */
}


int main()
{
    std::cout<<"Main Started"<<std::endl;
    
    //Initialize Matlab Create Functions
    //TX_initialize();
    
    //Spawn Thread
    std::thread thread1( Transmitter_Thread );
    
    //Wait for thread to finish
    thread1.join();
    
    //TX_terminate();
    
    return 0;
}
