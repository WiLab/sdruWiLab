#include "flow.h"
#include "GetUSRPData.h"
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
OUT PrintSink(IN input, int *flag)
{
    OUT output = new creal_T[3840]; 
    cout<<input[0].re<<endl;
    *flag = 1;//Enable pass to next block
    return output;
}

//MAIN
int main()
{
    // Create instance of block
    Worker<void*,creal_T*> block1(USRPSource<void*,creal_T*>);
    Worker<creal_T*,creal_T*> block2(PrintSink<creal_T*,creal_T*>);

    // Connect blocks together
    connect(block1,block2);
    
    // Turn blocks on
    block1.run_source();
    block2.run_sink();

    // Setup Timers
    clock_t init, final, mid;
    init=clock();

    cout<<"Main thread sleeping\n";
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
