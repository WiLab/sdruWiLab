#include "flow.h"

#include "GetUSRPData.h"
#include "FindtheFrame.h"
#include "SignalCorrect.h"
#include "Decoder.h"

#include "RX_initialize.h"
#include "RX_terminate.h"//Not sure if needed

using namespace std;

// Function to do work
template <typename IN, typename OUT>
OUT USRPSource(IN input, int *flag)
{
    OUT output = new creal_T[3840]; 
    GetUSRPData(output);
    *flag = 1;//Enable pass to next block
    return output;
}
// Function to do work
template <typename IN, typename OUT>
OUT FrameLocate(IN input, int *flag)
{
    OUT output = new creal_T[1920];
    int short flagS = 1;
    FindtheFrame(input, output, &flagS);
    if (flagS==1)
    {   *flag = 0;
        //cout<<"Nothing Found\n";
    }
    else
        *flag = 1;
    return output;
}
// Function to do work
template <typename IN, typename OUT>
OUT CorrectSignal(IN input, int *flag)
{
    OUT output = new boolean_T[960]; 
    SignalCorrect(input, output);
    *flag = 1;//Enable pass to next block
    return output;
}
// Function to do work
template <typename IN, typename OUT>
OUT Decode(IN input, int *flag)
{
    OUT output = (OUT) malloc(1); 
    Decoder(input);
    *flag = 1;//Enable pass to next block
    return output;
}


//MAIN
int main()
{
    // Create instance of block
    Worker<void*,creal_T*> block1(USRPSource<void*,creal_T*>);
    Worker<creal_T*,creal_T*> block2(FrameLocate<creal_T*,creal_T*>);
    Worker<creal_T*,boolean_T*> block3(CorrectSignal<creal_T*,boolean_T*>);
    Worker<boolean_T*,float*> block4(Decode<boolean_T*,float*>);

    // Connect blocks together
    connect(block1,block2);
    connect(block2,block3);
    connect(block3,block4);
    
    // Turn blocks on
    block1.run_source();
    block2.run();
    //block3.run();
    //block4.run_sink();

    // Setup Timers
    clock_t init, final, mid;
    init=clock();

    cout<<"Main thread sleeping\n";
    for(int j=0;j<100;j++)
        usleep(5000000);
    cout<<"Main thread done sleeping\n";

    // Add some data to input queue
    final=clock()-init;
    cout << (double)final / ((double)CLOCKS_PER_SEC) << " Seconds" << endl;
    
    // Shutdown
    cout<<"------SHUTTING DOWN------\n";
    cout<<"Waiting for thread to quit\n";
    block1.m_StopThread = true;
    block2.m_StopThread = true;
    usleep(10000);
    block1.m_BlockThread.join();
    block2.m_BlockThread.join();

    return 0;
}
