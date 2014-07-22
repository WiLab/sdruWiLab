/*
** main.cpp
*/
#include <iostream>
#include <thread>
//#include <unistd.h>

//Include headers of matlab functions
#include "Function1.h"
#include "Function2.h"

//Include header of combined library
#include "ComboFunction_initialize.h"
#include "ComboFunction_terminate.h"//Not sure if needed


void Thread_TX(char *message)
{
	int k;
	for (k=0;k<10;k++){
		Function1();
	}
    
}



void Thread_RX(char *message)
{
	int k;
	for (k=0;k<10;k++){
		Function2();
	}

    
}

int main()
{
    ComboFunction_initialize();
    char *message;
    //Spawn Thread
    std::thread thread1( Thread_RX, message );
    std::thread thread2( Thread_TX, message );

    std::cout<<Function1()<<std::endl;
    std::cout<<Function2()<<std::endl;

    //Wait for thread to finish
    thread1.join();
    thread2.join();
    ComboFunction_terminate();
    
    return 0;
}
