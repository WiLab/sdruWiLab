/*
 * mod.c
 *
 * Code generation for function 'mod'
 *
 * C source code generated on: Thu Feb 27 11:25:03 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testFileSourceSink.h"
#include "mod.h"
#include <stdio.h>

/* Function Definitions */
real_T b_mod(real_T x)
{
  return x - muDoubleScalarFloor(x / 70.0) * 70.0;
}

/* End of code generation (mod.c) */
