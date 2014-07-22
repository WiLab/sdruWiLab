/*
** main.c
*/
#include <stdio.h>
#include <stdlib.h>
#include "Function1.h"
#include "Function2.h"
#include "ComboFunction_initialize.h"
#include "ComboFunction_terminate.h"

int main()
{
    ComboFunction_initialize();
    
    printf("Function1=%g\n", Function1());
    printf("Function2=%g\n", Function2());
    
    ComboFunction_terminate();
    
    return 0;
}