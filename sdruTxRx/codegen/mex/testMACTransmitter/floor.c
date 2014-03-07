/*
 * floor.c
 *
 * Code generation for function 'floor'
 *
 * C source code generated on: Thu Mar  6 22:22:38 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testMACTransmitter.h"
#include "floor.h"
#include <stdio.h>

/* Function Definitions */
void b_floor(real_T *x)
{
  *x = muDoubleScalarFloor(*x);
}

/* End of code generation (floor.c) */
