#include "add2q.h"



void add2q(creal_T *input){


	std::unique_lock<std::mutex> locker(mtx);
	rx2txQueueData.push(&output[0]);
	locker.unlock();
        cond.notify_one(); // Notify waiting thread
}

