#include <iostream>
#include "main.h"

void add2q(creal_T input[3840]){

        //Add pointer to queue for processing
        std::unique_lock<std::mutex> locker(mtx3);
        usrp2FindtheFrameQueue.push(&input[0]);
        locker.unlock();
        cond3.notify_one(); // Notify waiting thread

}


