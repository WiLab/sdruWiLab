/*
 ** main.cpp
 */
#include <string>
#include <iostream>
#include <thread>
//#include <queue>
//#include <mutex>
//#include <unistd.h>

#include "main.h"

//Include headers of matlab functions
#include "Transmitter.h"
//#include "FindSignal.h"
#include "GetUSRPData.h"
#include "FindtheFrame.h"
#include "SignalCorrect.h"
#include "Decoder.h"

//Include header of combined library
#include "ComboFunction_initialize.h"
#include "ComboFunction_terminate.h"//Not sure if needed

#define MESSAGES2TX 100000//Messages to send between PHY and MAC

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


//Transmitter Thread
void Transmitter_Thread(void)
{
    std::cout<<"Started Transmitter"<<std::endl;
    double output = 0;
    Transmitter();
}

/*
//Find the preamble and extract signal
void FindSignal_Thread(void)
{
    std::cout<<"Started Thread RX"<<std::endl;
    int k;
    creal_T output[1920];
    while (1) {
        FindSignal(output);// Find a frame
        std::unique_lock<std::mutex> locker(mtx);
        //rx2txQueueData.push(&output[0]);
        locker.unlock();
        cond.notify_one(); // Notify waiting thread
        
    }
}
*/

//USRP Stream
//USRP Thread
void GetDataUSRP(void)
{
    std::cout<<"Started Get USRP Thread"<<std::endl;
    GetUSRPData_init();
    GetUSRPData();
}

// Locator
void FindTheFrame_Thread(void)
{

    std::cout<<"Started FindTheFrame Thread"<<std::endl;
    creal_T *input;
    creal_T output[1920];
    //short *flag;
    short int flag = 1;
    int k = MESSAGES2TX;
    while (k>0) {
        std::unique_lock<std::mutex> locker(mtx3);
        cond3.wait(locker,[](){ return !usrp2FindtheFrameQueue.empty();});

        input = (usrp2FindtheFrameQueue.front());
        usrp2FindtheFrameQueue.pop();
	
        locker.unlock();

        FindtheFrame(input, output, &flag);
        if (flag<1){//Frame found
            std::unique_lock<std::mutex> locker2(mtx);
            rx2txQueueData.push(&output[0]);
            locker2.unlock();
            cond.notify_one(); // Notify waiting thread
        }

    }

}


//Apply CFO and equalizer corrections
void SignalCorrect_Thread(void)
{
    std::cout<<"Started Signal Correct Thread"<<std::endl;
    creal_T *input;
    boolean_T output[960];
    int k = MESSAGES2TX;
    while (k>0) {
        std::unique_lock<std::mutex> locker(mtx);
        cond.wait(locker,[](){ return !rx2txQueueData.empty();});
        
        input = (rx2txQueueData.front());
        rx2txQueueData.pop();
        
        locker.unlock();
        
        SignalCorrect(input, output);//MAC Layer
        
        std::unique_lock<std::mutex> locker2(mtx2);
        rx2txQueueDataDecode.push(&output[0]);
        locker2.unlock();
        cond2.notify_one(); // Notify waiting thread
        
    }
}

//Decoder Thread
void Decoder_Thread(void)
{
    std::cout<<"Decoder Thread"<<std::endl;
    boolean_T *input;
    int k = MESSAGES2TX;
    while (k>0) {
        
        std::unique_lock<std::mutex> locker(mtx);
        cond2.wait(locker, [](){ return !rx2txQueueDataDecode.empty();});
        
        input = (rx2txQueueDataDecode.front());
        rx2txQueueDataDecode.pop();
        locker.unlock();
        
        Decoder(input);//MAC Layer
        
    }
}

int main()
{
    std::cout<<"Main Started"<<std::endl;
    
    //Initialize Matlab Create Functions
    ComboFunction_initialize();
    
    //Spawn Thread
    //std::thread thread1( Transmitter_Thread );
    //std::thread thread2( FindSignal_Thread );
    std::thread thread2( GetDataUSRP );

    std::vector<std::thread> FindTheFrameThreads;

    //std::thread thread3( FindTheFrame_Thread );
    // Create 10 threads for task
    for (int i = 0; i < 1; i++)
    	FindTheFrameThreads.push_back(std::thread( FindTheFrame_Thread ));


    std::thread thread4( SignalCorrect_Thread );
    std::thread thread5( Decoder_Thread );
    
    //Wait for thread to finish
    //thread1.join();
    thread2.join();
    //thread3.join();
    for (auto& t : FindTheFrameThreads)
    	t.join();

    thread4.join();
    thread5.join();
    std::cout<<"Threads completed"<<std::endl;
    
    ComboFunction_terminate();
    
    return 0;
}
