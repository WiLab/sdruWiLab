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
#include "Transmitter.h"
#include "Receiver2.h"

//Include header of combined library
#include "ComboFunction_initialize.h"
#include "ComboFunction_terminate.h"//Not sure if needed

#define MESSAGES2TX 10//Messages to send between PHY and MAC

// Create Mutex
std::mutex mtx;
std::queue<boolean_T*> rx2txQueueData;


//Thread 1
void Thread_TX(void)
{
    std::cout<<"Started Thread TX"<<std::endl;
    boolean_T *input;
    int k = MESSAGES2TX;
    while (k>0) {
        
        mtx.lock();
        if (!rx2txQueueData.empty()){
            input = (rx2txQueueData.front());
            rx2txQueueData.pop();
            mtx.unlock();
            Function1(input);//MAC Layer
            k = k - 1;
            
        }
        else
            mtx.unlock();
        
    }
}

//Thread 2
void Thread_RX(void)
{
    std::cout<<"Started Thread RX"<<std::endl;
    int k;
    boolean_T output[48*4]={1};
    for (k=0;k<MESSAGES2TX;k++){
        Function2(10, output);//PHY Layer
        mtx.lock();
        rx2txQueueData.push(&output[0]);
        mtx.unlock();
    }
}


//Thread 2
void Transmitter_Thread(void)
{
    std::cout<<"Started Thread RX"<<std::endl;
    double output = 0;
    Transmitter();
}

//Thread 2
void Receiver_Thread(void)
{
    std::cout<<"Started Thread RX"<<std::endl;
    Receiver2();
}

int main()
{
    //Initialize Matlab Create Functions
    ComboFunction_initialize();
    
    //Spawn Thread
    //std::thread thread1( Thread_TX );
    //std::thread thread2( Thread_RX );
    std::thread thread3( Transmitter_Thread );
    std::thread thread4( Receiver_Thread );
        
    //Wait for thread to finish
    //thread1.join();
    //thread2.join();
    thread3.join();
    thread4.join();
    std::cout<<"Threads completed"<<std::endl;
    
    ComboFunction_terminate();
    
    return 0;
}
