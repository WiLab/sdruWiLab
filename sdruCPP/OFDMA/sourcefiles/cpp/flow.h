#include <iostream>
#include <queue>
#include <boost/thread.hpp>
//#include <boost/atomic.hpp>
#include <atomic>
#include <functional>
#include <boost/scoped_ptr.hpp>
#include <vector>
#include <time.h>
#include "rtwtypes.h"

//backbone.cpp
template <class IN,class OUT>
class Worker
{
public:
    // Processing functions
    std::function<OUT(IN,int*)> m_ProcessData;
    // Constructor
    Worker(std::function<OUT(IN,int*)> ProcessData) :
        m_StopThread(false),
	m_InputMutex(new boost::mutex),
	m_OutputMutex(new boost::mutex),
	m_InputQueue(new std::queue<IN>),
	m_OutputQueue(new std::queue<OUT>),
	m_InputCond(new boost::condition_variable),
	m_OutputCond(new boost::condition_variable),
	m_InputQueueSize(new std::atomic<int>(0)),
	m_OutputQueueSize(new std::atomic<int>(0)),
        m_ProcessData(ProcessData) {}

    // Parameters
    std::atomic<bool>         		   m_StopThread;
    boost::shared_ptr<std::atomic<int>>          m_InputQueueSize;
    boost::shared_ptr<std::atomic<int>>          m_OutputQueueSize;
    boost::shared_ptr<boost::mutex>                m_InputMutex;
    boost::shared_ptr<boost::mutex>                m_OutputMutex;
    boost::shared_ptr<boost::condition_variable>   m_InputCond;
    boost::shared_ptr<boost::condition_variable>   m_OutputCond;
    boost::shared_ptr<std::queue<IN>>              m_InputQueue;
    boost::shared_ptr<std::queue<OUT>>             m_OutputQueue;
    boost::thread               		   m_BlockThread;



// Help functions
// Get data from queue
IN readFromInputQueue()
{
    // Wait for data
    if (*m_InputQueueSize == 0) {
        boost::unique_lock<boost::mutex> lock(*m_InputMutex);
        do (*m_InputCond).wait(lock);
        while (*m_InputQueueSize == 0);
    }

    // When data is ready read it off queue
    boost::lock_guard<boost::mutex> lock(*m_InputMutex);
    IN data = (*m_InputQueue).front();
    (*m_InputQueue).pop();
    // Update queue size atomic
    *m_InputQueueSize = (*m_InputQueueSize) - 1;
    return data;
}

// Output data to next block
void addToOutputQueue(OUT processedData)
{
    // Add data to queue
    boost::lock_guard<boost::mutex> lock(*m_OutputMutex);
    (*m_OutputQueue).push(processedData);
    *m_OutputQueueSize = (*m_OutputQueueSize) + 1;

    // Notify next block
    (*m_OutputCond).notify_one();

}
// In and Out Process Block
void block()
{
    IN data;
    OUT processedData;
    int flag = 0;

    while (!m_StopThread)
    {
        //Read Data
        data = readFromInputQueue();
        //Process Data
        processedData = m_ProcessData(data,&flag);
        //Output Data
	if (flag>0)
        	addToOutputQueue(processedData);
    }
    std::cout << "Thread Done: " << boost::this_thread::get_id() << '\n';

}
// Source Block
void block_source()
{
    IN data;
    OUT processedData;
    int flag = 0;

    while (!m_StopThread)
    {
        //Process Data
        processedData = m_ProcessData(data, &flag);
        //Output Data
        if (flag>0)
        	addToOutputQueue(processedData);
    }
    std::cout << "Thread Done: " << boost::this_thread::get_id() << '\n';

}
// Sink Block
void block_sink()
{
    IN data;
    OUT processedData;
    int flag = 0;

    while (!m_StopThread)
    {
        //Read Data
        data = readFromInputQueue();
        //Process Data
        processedData = m_ProcessData(data,&flag);
    }
    std::cout << "Thread Done: " << boost::this_thread::get_id() << '\n';

}
// Spawn threads for given block type
void run()
{
    boost::thread m_BlockThread(&Worker::block, this);
}
void run_source()
{
    boost::thread m_BlockThread(&Worker::block_source, this);
}
void run_sink()
{
    boost::thread m_BlockThread(&Worker::block_sink, this);
}
};

// Connect Blocks together
template<class IN1,class OUT1,class IN2, class OUT2>
void connect(Worker<IN1,OUT1> &aBlock, Worker<IN2,OUT2> &bBlock) 
{

	// Map mutexes
	bBlock.m_InputMutex = aBlock.m_OutputMutex;
	// Map conditionals
	bBlock.m_InputCond = aBlock.m_OutputCond;
	// Map queues
	bBlock.m_InputQueue = aBlock.m_OutputQueue;
	// Map atomics
	bBlock.m_InputQueueSize = aBlock.m_OutputQueueSize;
}

// Helper Functions
// Non class functions
template <typename IN, typename OUT>
void addToQueue(IN data, Worker<IN,OUT> &aBlock)
{
    // Add data to queue
    boost::unique_lock<boost::mutex> lock(*aBlock.m_InputMutex);
    (*aBlock.m_InputQueue).push(data);
    *aBlock.m_InputQueueSize = (*aBlock.m_InputQueueSize) + 1;

    // Notify next block
    (*aBlock.m_InputCond).notify_one();
}


template <typename IN, typename OUT>
OUT readFromQueue(Worker<IN,OUT> &aBlock)
{
    // Wait for data
    if (*aBlock.m_OutputQueueSize == 0) {
        boost::unique_lock<boost::mutex> lock(*aBlock.m_OutputMutex);
        do (*aBlock.m_OutputCond).wait(lock);
        while (*aBlock.m_OutputQueueSize == 0);
    }

    // When data is ready read it off queue
    boost::unique_lock<boost::mutex> lock(*aBlock.m_OutputMutex);
    OUT data = (*aBlock.m_OutputQueue).front();
    (*aBlock.m_OutputQueue).pop();
    // Update queue size atomic
    *aBlock.m_OutputQueueSize = *aBlock.m_OutputQueueSize - 1;
    return data;

}

