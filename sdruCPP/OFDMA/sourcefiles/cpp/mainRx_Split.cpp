/*
 ** main.cpp
 */
#include <string>
#include <iostream>
#include <thread>
#include "main.h"

//Include headers of matlab functions
#include "GetUSRPData.h"
#include "FindtheFrame.h"
#include "SignalCorrect.h"
#include "GenerateInput.h"
#include "Decoder.h"

//Include header of combined library
#include "RX_initialize.h"
#include "RX_terminate.h"//Not sure if needed

#define MESSAGES2TX 100000//Messages to send between PHY and MAC (NOT USED)

// Create Mutex
std::mutex mtx;
std::mutex mtx2;
std::mutex mtx3;

std::queue<creal_T*> rx2txQueueData;
std::queue<creal_T*> usrp2FindtheFrameQueue;
std::queue<boolean_T*> rx2txQueueDataDecode;

// Create Conditional
std::condition_variable cond;
std::condition_variable cond2;
std::condition_variable cond3;

//USRP Thread
void GetDataUSRP(void)
{
    std::cout<<"Started Get USRP Thread"<<std::endl;
    //GetUSRPData_init();
    //GetUSRPData();
    
    // Testing
    //creal_T input[1920*2];
    creal_T *input = new creal_T[1920*2];
    sleep(3);
    while (1) {
    	creal_T *input = new (std::nothrow) creal_T[1920*2];
        GenerateInput(input);
        add2q(input);
	//sleep(1);
    }
}

// Locator
void FindTheFrame_Thread(void)
{

    std::cout<<"Started FindTheFrame Thread"<<std::endl;
    //creal_T *input;
    creal_T *input = new creal_T;
    //creal_T output[1920];
    creal_T *output = new creal_T[1920];
    int short flag = 1;
    int k = MESSAGES2TX;
    while (k>0) {
        
        mtx3.lock();
        if (!usrp2FindtheFrameQueue.empty())//If queue not empty don't wait for signal
        {            
            creal_T *input = new (std::nothrow) creal_T;
            input = (usrp2FindtheFrameQueue.front());
            usrp2FindtheFrameQueue.pop();
            
            mtx3.unlock();

            creal_T *output = new (std::nothrow) creal_T[1920];
            FindtheFrame(input, output, &flag);
            if (flag<1){//Frame found
                std::unique_lock<std::mutex> locker2(mtx);
                rx2txQueueData.push(&output[0]);
                locker2.unlock();
                cond.notify_one(); // Notify waiting thread
            }
        }
        else//Wait for signal if queue empty
        {
            mtx3.unlock();
            std::unique_lock<std::mutex> locker(mtx3);
            cond3.wait(locker,[](){ return !usrp2FindtheFrameQueue.empty();});
            
            creal_T *input = new (std::nothrow) creal_T;
            input = (usrp2FindtheFrameQueue.front());
            usrp2FindtheFrameQueue.pop();
            
            locker.unlock();

	    creal_T *output = new (std::nothrow) creal_T[1920];            
            FindtheFrame(input, output, &flag);
            if (flag<1){//Frame found
                std::unique_lock<std::mutex> locker2(mtx);
                rx2txQueueData.push(&output[0]);
                locker2.unlock();
                cond.notify_one(); // Notify waiting thread
            }
        }
        
        
    }
    
}


//Apply CFO and equalizer corrections
void SignalCorrect_Thread(void)
{
    std::cout<<"Started Signal Correct Thread"<<std::endl;
    //creal_T *input;
    creal_T *input = new creal_T;
    //boolean_T output[960];
    boolean_T *output = new boolean_T[960];
    int k = MESSAGES2TX;
    while (k>0) {
        
        
        mtx.lock();
        if (!rx2txQueueData.empty())//If queue not empty don't wait for signal
        {
	    creal_T *input = new (std::nothrow) creal_T;
            input = (rx2txQueueData.front());
            rx2txQueueData.pop();
            
            mtx.unlock();
           
	    boolean_T *output = new (std::nothrow) boolean_T[960]; 
            SignalCorrect(input, output);
            
            std::unique_lock<std::mutex> locker2(mtx2);
            rx2txQueueDataDecode.push(&output[0]);
            locker2.unlock();
            cond2.notify_one(); // Notify waiting thread
        }
        else{
            mtx.unlock();
            std::unique_lock<std::mutex> locker(mtx);
            cond.wait(locker,[](){ return !rx2txQueueData.empty();});

	    creal_T *input = new (std::nothrow) creal_T;            
            input = (rx2txQueueData.front());
            rx2txQueueData.pop();
            
            locker.unlock();

	    boolean_T *output = new (std::nothrow) boolean_T[960];            
            SignalCorrect(input, output);
            
            std::unique_lock<std::mutex> locker2(mtx2);
            rx2txQueueDataDecode.push(&output[0]);
            locker2.unlock();
            cond2.notify_one(); // Notify waiting thread
        }
    }
}

//Decoder Thread
void Decoder_Thread(void)
{
    std::cout<<"Decoder Thread"<<std::endl;
    boolean_T *input;
    int k = MESSAGES2TX;
    while (k>0) {
        
        
        mtx2.lock();
        if (!rx2txQueueDataDecode.empty())//If queue not empty don't wait for signal
        {
            
            input = (rx2txQueueDataDecode.front());
            rx2txQueueDataDecode.pop();
            
            mtx2.unlock();
            
            Decoder(input);
        }
        else{
            mtx2.unlock();
            std::unique_lock<std::mutex> locker(mtx2);
            cond2.wait(locker, [](){ return !rx2txQueueDataDecode.empty();});
            
            input = (rx2txQueueDataDecode.front());
            rx2txQueueDataDecode.pop();
            locker.unlock();
            
            Decoder(input);
        }
        
    }
}

int main()
{
    std::cout<<"Main Started"<<std::endl;
    
    //Initialize Matlab Create Functions
    RX_initialize();
    
    //Spawn Thread
    std::thread thread1( GetDataUSRP );

    // Create X threads for task
    std::vector<std::thread> FindTheFrameThreads;
    for (int i = 0; i < 1; i++)
    	FindTheFrameThreads.push_back(std::thread( FindTheFrame_Thread ));


    std::thread thread2( SignalCorrect_Thread );
    std::thread thread3( Decoder_Thread );
    
    //Wait for thread to finish
    thread1.join();
    thread2.join();
    thread3.join();
    for (auto& t : FindTheFrameThreads)
    	t.join();
    std::cout<<"Threads completed"<<std::endl;
    
    RX_terminate();
    
    return 0;
}
