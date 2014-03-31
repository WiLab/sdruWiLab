/*
 * abs.c
 *
 * Code generation for function 'abs'
 *
 * C source code generated on: Thu Mar  6 23:19:55 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testSpectrumSenseP25.h"
#include "abs.h"
#include <stdio.h>

/* Function Definitions */
void b_abs(const creal_T x[5120], real_T y[5120])
{
  int32_T k;
  for (k = 0; k < 5120; k++) {
    y[k] = muDoubleScalarHypot(x[k].re, x[k].im);
  }
}

/* End of code generation (abs.c) */
