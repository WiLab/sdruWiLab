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
#include "Transmitter.h"
#include "FindSignal.h"
#include "SignalCorrect.h"
#include "Decoder.h"

//Include header of combined library
#include "ComboFunction_initialize.h"
#include "ComboFunction_terminate.h"//Not sure if needed

#define MESSAGES2TX 100000//Messages to send between PHY and MAC

// Create Mutex
std::mutex mtx;
std::mutex mtx2;
std::queue<creal_T*> rx2txQueueData;
std::queue<boolean_T*> rx2txQueueDataDecode;


//Thread 1
void SignalCorrect_Thread(void)
{
    std::cout<<"Started Thread TX"<<std::endl;
    creal_T *input;
    boolean_T *output;
    int k = MESSAGES2TX;
    while (k>0) {
        
        mtx.lock();
        if (!rx2txQueueData.empty()){
            input = (rx2txQueueData.front());
            rx2txQueueData.pop();
            mtx.unlock();
            SignalCorrect(input, output);//MAC Layer
            mtx2.lock();
            rx2txQueueDataDecode.push(output);
            mtx2.unlock();
            
            
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
    creal_T *output;
    while (1) {
        FindSignal(output);//PHY Layer
        mtx.lock();
        rx2txQueueData.push(output);
        mtx.unlock();
    }
}



//Thread 2
void Transmitter_Thread(void)
{
    std::cout<<"Started Transmitter"<<std::endl;
    double output = 0;
    Transmitter();
}


//Thread 1
void Decoder_Thread(void)
{
    std::cout<<"Decoder Thread"<<std::endl;
    boolean_T *input;
    int k = MESSAGES2TX;
    while (k>0) {
        
        mtx2.lock();
        if (!rx2txQueueDataDecode.empty()){
            input = (rx2txQueueDataDecode.front());
            rx2txQueueDataDecode.pop();
            mtx2.unlock();
            Decoder(input);//MAC Layer
            //k = k - 1;            
            
        }
        else
            mtx2.unlock();
        
    }
}


/*
// Contained receiver
void Receiver_Thread(void)
{
	Receiver();
}
*/

int main()
{
    std::cout<<"Main Started"<<std::endl;
    //Initialize Matlab Create Functions
    ComboFunction_initialize();
    
    //Spawn Thread
    std::thread thread1( SignalCorrect_Thread );
    std::thread thread2( Thread_RX );
    std::thread thread3( Transmitter_Thread );
    std::thread thread4( Decoder_Thread );
    //std::thread thread4( Receiver_Thread );
        
    //Wait for thread to finish
    thread1.join();
    thread2.join();
    thread3.join();
    thread4.join();
    std::cout<<"Threads completed"<<std::endl;
    
    ComboFunction_terminate();
    
    return 0;
}
