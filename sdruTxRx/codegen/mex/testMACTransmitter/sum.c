/*
 * sum.c
 *
 * Code generation for function 'sum'
 *
 * C source code generated on: Thu Mar  6 19:04:23 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testMACTransmitter.h"
#include "sum.h"
#include <stdio.h>

/* Function Definitions */
creal_T sum(const creal_T x_data[32])
{
  creal_T y;
  int32_T k;
  y = x_data[0];
  for (k = 0; k < 31; k++) {
    y.re += x_data[k + 1].re;
    y.im += x_data[k + 1].im;
  }

  return y;
}

/* End of code generation (sum.c) */
