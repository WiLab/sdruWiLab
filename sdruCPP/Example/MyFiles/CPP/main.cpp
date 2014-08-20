/*
** main.cpp
*/
#include <string>
#include <iostream>
#include <thread>
//#include <queue>
//#include <mutex>
//#include <unistd.h>
//#include <tmwtypes.h>

#include "main.h"

//Include headers of matlab functions
#include "Transmitter.h"
#include "FindtheFrame.h"
#include "GetUSRPData.h"
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
std::queue<float*> usrp2findframe;
std::queue<float*> findframe2processframe;
std::queue<boolean_T*> rx2txQueueDataDecode;



//Signal Correct Thread
void SignalCorrect_Thread(void)
{
    std::cout<<"Started Signal Correct Thread"<<std::endl;
    float *input;
    boolean_T *output;//[384];
    int k = MESSAGES2TX;
    while (k>0) {
        
        mtx3.lock();
        if (!findframe2processframe.empty()){
            
            input = (findframe2processframe.front());

            findframe2processframe.pop();
            mtx3.unlock();
            SignalCorrect(input, output);//MAC Layer
            
            mtx2.lock();
            rx2txQueueDataDecode.push(&output[0]);
            mtx2.unlock();
            
            
        }
        else
            mtx3.unlock();
        
    }
}

void FindFrameinData(void)
{
    std::cout<<"Started Frame Finder Thread\n";
    //double *input;
    creal32_T *input;
    float output[1920];
    short int flag = -1;
    int qSize;
    FindtheFrame(input,output,&flag);
    while (true)
    {
        mtx.lock();
        if (!usrp2findframe.empty()){
		qSize = usrp2findframe.size();
		if (qSize > 100)
			std::cout<<"Queue Size: "<<qSize<<std::endl;
	
            //input = usrp2findframe.front();
            usrp2findframe.pop();
            mtx.unlock();
 	    //std::cout<<"Pulling Data off USRP Queue\n";           
            //FindtheFrame(input,output,&flag);
            if (0)//(flag<1)
            {
		//std::cout<<"Frame Found\n";
                //Pass to next stage
                mtx3.lock();
                findframe2processframe.push(&output[0]);
                mtx3.unlock();
            }
	    else{
		continue;
		//std::cout<<"No Frame found\n";
            }
        }
        else
            mtx.unlock();
    }
    
}


//USRP Thread
void GetDataUSRP(void)
{
    std::cout<<"Started Get USRP Thread"<<std::endl;
    GetUSRPData();
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
    std::cout<<"Started Decoder Thread"<<std::endl;
    boolean_T *input;
    int k = MESSAGES2TX;
    while (k>0) {
        
        mtx2.lock();
        if (!rx2txQueueDataDecode.empty()){
            input = (rx2txQueueDataDecode.front());
            rx2txQueueDataDecode.pop();
            mtx2.unlock();
            Decoder(input);//MAC Layer     
            
        }
        else
            mtx2.unlock();
        
    }
}



int main()
{
    std::cout<<"Main Started"<<std::endl;
    //Initialize Matlab Create Functions
    ComboFunction_initialize();
    
    //Spawn Thread
//    std::thread thread1( SignalCorrect_Thread );
    std::thread thread2( FindFrameinData );
    std::thread thread3( Transmitter_Thread );
//    std::thread thread4( Decoder_Thread );
    std::thread thread5(  GetDataUSRP );
    //std::thread thread4( Receiver_Thread );
        
    //Wait for thread to finish
 //   thread1.join();
    thread2.join();
    thread3.join();
//    thread4.join();
    thread5.join();
    std::cout<<"Threads completed"<<std::endl;
    
    ComboFunction_terminate();
    
    return 0;
}
