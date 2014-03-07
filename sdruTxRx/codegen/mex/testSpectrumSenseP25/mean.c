/*
 * mean.c
 *
 * Code generation for function 'mean'
 *
 * C source code generated on: Thu Mar  6 23:19:56 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testSpectrumSenseP25.h"
#include "mean.h"
#include <stdio.h>

/* Function Definitions */
real_T mean(const real_T x[5120])
{
  real_T b_x;
  int32_T k;
  b_x = x[0];
  for (k = 0; k < 5119; k++) {
    b_x += x[k + 1];
  }

  return b_x / 5120.0;
}

/* End of code generation (mean.c) */
