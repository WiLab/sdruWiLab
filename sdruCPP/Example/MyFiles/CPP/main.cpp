/*
** main.cpp
*/
#include <iostream>
//#include <thread>
//#include <unistd.h>

//Include headers of matlab functions
#include "Function1.h"
#include "Function2.h"

//Include header of combined library
#include "ComboFunction_initialize.h"
#include "ComboFunction_terminate.h"//Not sure if needed

int main()
{
    ComboFunction_initialize();

    printf("Function1=%g\n", Function1());
    printf("Function2=%g\n", Function2());
    
    ComboFunction_terminate();
    
    return 0;
}