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
std::queue<double*> rx2txQueueData;


//Thread 1
void Thread_TX(void)
{
    std::cout<<"Started Thread TX"<<std::endl;
    double *input;
    int k = 10;
    while (k>0) {
        
        mtx.lock();
        if (!rx2txQueueData.empty()){
            input = (rx2txQueueData.front());
            Function1(input);
            rx2txQueueData.pop();
            k = k - 1;
            
        }
        mtx.unlock();
        
    }
}

//Thread 2
void Thread_RX(void)
{
    std::cout<<"Started Thread RX"<<std::endl;
    int k;
    double output[100]={1};
    for (k=0;k<10;k++){
        Function2(10, output);
        mtx.lock();
        rx2txQueueData.push(&output[0]);
        mtx.unlock();
    }
}


int main()
{
    //Initialize Matlab Create Functions
    ComboFunction_initialize();
    
    //Spawn Thread
    std::thread thread1( Thread_RX );
    std::thread thread2( Thread_TX );

    //Wait for thread to finish
    thread1.join();
    thread2.join();
    std::cout<<"Threads completed"<<std::endl;
    
    ComboFunction_terminate();
    
    return 0;
}
