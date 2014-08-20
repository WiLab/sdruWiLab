//#include "add2q.hpp"
//#include <queue>
#include <iostream>
#include "main.h"

void add2q(float *output)
{
	mtx.lock();
	usrp2findframe.push(&output[0]);
	mtx.unlock();
}
