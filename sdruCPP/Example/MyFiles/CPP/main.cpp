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
std::queue<std::string> rx2txQueue;


void Thread_TX(void)
{

    std::cout<<"Started Thread TX"<<std::endl;
    int k = 10;
    while (k>0) {
        mtx.lock();
        if (!rx2txQueue.empty()){
            
            Function1();
            std::cout<<"Output: "<<rx2txQueue.front()<<std::endl;
            rx2txQueue.pop();
            k = k - 1;
            
        }
        mtx.unlock();
    }
    
}



void Thread_RX(void)
{
        std::cout<<"Started Thread RX"<<std::endl;
	int k;
	char message[50];
	for (k=0;k<10;k++){

		Function2();
        
        	mtx.lock();
		sprintf(message,"Message %d",k);
        	rx2txQueue.push(message);
        	mtx.unlock();
	}

    
}

int main()
{
    ComboFunction_initialize();
    char *message;
    
    
    //Spawn Thread
    //std::thread thread1( Thread_RX, std::ref(rx2txQueue) );
    //std::thread thread2( Thread_TX, std::ref(rx2txQueue) );
    std::thread thread1( Thread_RX );
    std::thread thread2( Thread_TX );

    //std::cout<<Function1()<<std::endl;
    //std::cout<<Function2()<<std::endl;

    //Wait for thread to finish
    thread1.join();
    thread2.join();
    ComboFunction_terminate();
    
    return 0;
}
