/*
** main.cpp
*/
#include <string>
#include <iostream>
#include <thread>
#include <queue>
#include <mutex>
#include <array>
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
//std::queue<boolean_T[48*4]> rx2txQueueData;
//std::queue<double[100]> rx2txQueueData;
std::queue<double*> rx2txQueueData;


int main()
{
    //Initialize Matlab Create Functions
    ComboFunction_initialize();
    
    int k;
    int j;
    
    std::array<double,100> DataArray;
    std::array<double,100> DataArrayOutput;
    
    double output1[100]={1};
    //double output2[100]={1};
    double *output2;
    
    for (k=0;k<10;k++){
        
        // MATLAB Function
        Function2(10, output1);
        
//         for (j=0;j<100;j++)
//             std::cout<<"output: "<<output1[j]<<std::endl;

        rx2txQueueData.push(&output1[0]);
        
    }
    
    while (!rx2txQueueData.empty()){
     
        output2 = (rx2txQueueData.front());
        rx2txQueueData.pop();
        for (j=0;j<100;j++)
            std::cout<<"output: "<<output2[j]<<std::endl;
        
    }
    
    
    ComboFunction_terminate();
    
    return 0;
}


