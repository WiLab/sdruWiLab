/*
** main.cpp
*/
#include <string>
#include <iostream>
#include <thread>
#include <queue>
#include <mutex>
//#include <unistd.h>

//Include headers of matlab functions
#include "Function1.h"
#include "Function2.h"

//Include header of combined library
#include "ComboFunction_initialize.h"
#include "ComboFunction_terminate.h"//Not sure if needed

// Create Mutex
std::mutex mtx;


void Thread_TX(std::queue<std::string>& queueFromRX)
{
    int k = 10;
    //for (k=0;k<10;k++){
    while (k>0) {
        
        
        Function1();
        
        mtx.lock();
        if (!queueFromRX.empty()){
            
            std::cout<<"Output: "<<queueFromRX.front()<<std::endl;
            queueFromRX.pop();
            k = k - 1;
            
        }
        mtx.unlock();
    }
    
}



void Thread_RX(std::queue<std::string>& queueToTX)
{
	int k;
	for (k=0;k<10;k++){
		Function2();
        
        mtx.lock();
        queueToTX.push("Hello");
        mtx.unlock();
	}

    
}

int main()
{
    ComboFunction_initialize();
    char *message;
    
    std::queue<std::string> rx2txQueue;
    
    //Spawn Thread
    //std::thread thread1( Thread_RX, std::ref(rx2txQueue) );
    //std::thread thread2( Thread_TX, std::ref(rx2txQueue) );
    std::thread thread1( Thread_RX, &rx2txQueue );
    std::thread thread2( Thread_TX, &rx2txQueue );

    //std::cout<<Function1()<<std::endl;
    //std::cout<<Function2()<<std::endl;

    //Wait for thread to finish
    thread1.join();
    thread2.join();
    ComboFunction_terminate();
    
    return 0;
}
