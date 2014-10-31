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
//#include "GenerateInput.h"//Used for testing with data files
#include "Decoder.h"

#include <stdlib.h>
#include <stdio.h>
#include "engine.h"


//Include header of combined library
#include "RX_initialize.h"
#include "RX_terminate.h"//Not sure if needed

#define MESSAGES2TX 100000//Messages to send between PHY and MAC (NOT USED)

#define FRAMESIZE 1520
#define DEMOD_FRAMESIZE 240
#define  BUFSIZE 256

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


//Full receiver in single thread
void Receiver(void)
{
    creal_T input[FRAMESIZE*2];
    creal_T output[FRAMESIZE];
    int short flag = 1;
    boolean_T output2[DEMOD_FRAMESIZE];
    
    GetUSRPData_init();
    while (1){
	//std::cout<<"Getting data\n";
        GetUSRPData(input);
	//std::cout<<"Finding the frame\n";
        FindtheFrame(input, output, &flag);
        if (flag<1){
	    //std::cout<<"Signal correcting\n";
            SignalCorrect(output, output2);
	    //std::cout<<"Decoding\n";
            Decoder(output2);
        }
    }
}


//USRP Thread
void GetDataUSRP(void)
{
    
    std::cout<<"Started Get USRP Thread"<<std::endl;
    GetUSRPData_init();
    
    // Testing
    creal_T *input = new creal_T[FRAMESIZE*2];
    sleep(3); // Wait for other threads to setup

    while (1) {
        
        //Create new pointer
        delete [] input;
        creal_T *input = new (std::nothrow) creal_T[FRAMESIZE*2];
        //GenerateInput(input); // Get Data from File (Testing)
        GetUSRPData(input); // Get Data from USRP
        add2q(input);
        
    }
}

// Locate preamble and extract frame
void FindTheFrame_Thread(void)
{
    
    std::cout<<"Started FindTheFrame Thread"<<std::endl;
    creal_T *input = new creal_T;
    creal_T *output = new creal_T[FRAMESIZE];
    
    int short flag = 1;
    
    while (1) {
        
        mtx3.lock();
        if (!usrp2FindtheFrameQueue.empty())//If queue not empty don't wait for signal
        {
            // This will start to print if not running in real-time
            if (usrp2FindtheFrameQueue.size()>100)
                std::cout<<"Q size: "<<usrp2FindtheFrameQueue.size()<<std::endl;
            //Create new pointer
            delete [] input;
            creal_T *input = new (std::nothrow) creal_T;
            //Get data off queue
            input = usrp2FindtheFrameQueue.front();
            usrp2FindtheFrameQueue.pop();
            mtx3.unlock();
            
            //Create new pointer
            delete [] output;
            creal_T *output = new (std::nothrow) creal_T[FRAMESIZE];
            //Locate Preamble and extract frame
            FindtheFrame(input, output, &flag);
            
            if (flag<1){//Frame found
                //Add to queue for signal corrector thread
                std::unique_lock<std::mutex> locker2(mtx);
                rx2txQueueData.push(&output[0]);
                locker2.unlock();
                cond.notify_one(); // Notify waiting thread
            }
        }
        else//Wait for signal if queue empty
        {
            mtx3.unlock();
            
            //Wait for signal of new data
            std::unique_lock<std::mutex> locker(mtx3);
            cond3.wait(locker,[](){ return !usrp2FindtheFrameQueue.empty();});
            
            // This will start to print if not running in real-time
            if (usrp2FindtheFrameQueue.size()>100)
                std::cout<<"Q size: "<<usrp2FindtheFrameQueue.size()<<std::endl;
            //Create new pointer
            delete [] input;
            creal_T *input = new (std::nothrow) creal_T;
            //Get data off queue
            input = (usrp2FindtheFrameQueue.front());
            usrp2FindtheFrameQueue.pop();
            
            locker.unlock();
            //Create new pointer
            delete [] output;
            creal_T *output = new (std::nothrow) creal_T[FRAMESIZE];
            //Locate Preamble and extract frame
            FindtheFrame(input, output, &flag);
            
            if (flag<1){//Frame found
                std::unique_lock<std::mutex> locker2(mtx);
                rx2txQueueData.push(&output[0]);
                locker2.unlock();
                cond.notify_one(); // Notify waiting thread
            }
//             else
//                 std::cout<<"Nothing found\n";
        }
        
    }
    
}


//Apply CFO and equalizer corrections
void SignalCorrect_Thread(void)
{
    std::cout<<"Started Signal Correct Thread"<<std::endl;
    creal_T *input = new creal_T;
    boolean_T *output = new boolean_T[DEMOD_FRAMESIZE];
    
    while (1) {
        
        
        mtx.lock();
        if (!rx2txQueueData.empty())//If queue not empty don't wait for signal
        {
            //Create new pointer
            delete [] input;
            creal_T *input = new (std::nothrow) creal_T;
            input = (rx2txQueueData.front());
            rx2txQueueData.pop();
            
            mtx.unlock();
            
            //Create new pointer
            delete [] output;
            boolean_T *output = new (std::nothrow) boolean_T[DEMOD_FRAMESIZE];
            SignalCorrect(input, output);
            
            //Send to decoder thread
            std::unique_lock<std::mutex> locker2(mtx2);
            rx2txQueueDataDecode.push(&output[0]);
            locker2.unlock();
            cond2.notify_one(); // Notify waiting thread
        }
        else{
            mtx.unlock();
            std::unique_lock<std::mutex> locker(mtx);
            cond.wait(locker,[](){ return !rx2txQueueData.empty();});
            
            //Create new pointer
            delete [] input;
            creal_T *input = new (std::nothrow) creal_T;
            input = (rx2txQueueData.front());
            rx2txQueueData.pop();
            
            locker.unlock();
            
            //Create new pointer
            delete [] output;
            boolean_T *output = new (std::nothrow) boolean_T[DEMOD_FRAMESIZE];
            SignalCorrect(input, output);
            
            //Send to decoder thread
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
    boolean_T *input = new boolean_T;
    
    
    while (1) {
        
        
        mtx2.lock();
        if (!rx2txQueueDataDecode.empty())//If queue not empty don't wait for signal
        {
            //std::cout<<"DEC: Queue not empty\n";
            
            //Create new pointer
            delete [] input;
            boolean_T *input = new (std::nothrow) boolean_T;
            input = (rx2txQueueDataDecode.front());
            rx2txQueueDataDecode.pop();
            
            mtx2.unlock();
            
            Decoder(input);
        }
        else{
            mtx2.unlock();
            std::unique_lock<std::mutex> locker(mtx2);
            cond2.wait(locker, [](){ return !rx2txQueueDataDecode.empty();});
            
            //Create new pointer
            delete [] input;
            boolean_T *input = new (std::nothrow) boolean_T;
            input = (rx2txQueueDataDecode.front());
            rx2txQueueDataDecode.pop();
            locker.unlock();
            
            Decoder(input);
        }
        
    }
}

int main()
{
    
    bool Pipeline = true;
    
    std::cout<<"Main Started"<<std::endl;
    
    //Initialize Matlab Create Functions
    RX_initialize();
    
    if (!Pipeline){
        //Single Threaded
        std::thread threadONE( Receiver );
        threadONE.join();
    }
    else{
        //Spawn Thread
        std::thread thread1( GetDataUSRP );
        
        // Create X threads for task
        int threads = 1;
        std::vector<std::thread> FindTheFrameThreads;
        for (int i = 0; i < threads; i++)
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
    }
    
    RX_terminate();
    
    return 0;
}
