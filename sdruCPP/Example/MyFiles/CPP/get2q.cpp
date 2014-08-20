//#include "add2q.hpp"
//#include <queue>
#include <iostream>
#include "main.h"

void get2q(float *input)
{
	int qSize;
	while (1){
	mtx.lock();
	if (!usrp2findframe.empty()){
		input = usrp2findframe.front();
		qSize = usrp2findframe.size();
		if (qSize>100)
			std::cout<<"Q: "<<qSize<<std::endl;
		usrp2findframe.pop();
		mtx.unlock();
		return;
	}
	else
		mtx.unlock();
	}
}
