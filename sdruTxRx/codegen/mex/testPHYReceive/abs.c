/*
 * abs.c
 *
 * Code generation for function 'abs'
 *
 * C source code generated on: Thu Apr  3 19:36:37 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testPHYReceive.h"
#include "abs.h"
#include <stdio.h>

/* Function Definitions */
void b_abs(const creal_T x_data[1231], const int32_T x_size[1], real_T y_data
           [1231], int32_T y_size[1])
{
  int32_T k;
  y_size[0] = (int16_T)x_size[0];
  for (k = 0; k < x_size[0]; k++) {
    y_data[k] = muDoubleScalarHypot(x_data[k].re, x_data[k].im);
  }
}

void c_abs(const creal_T x[106], real_T y[106])
{
  int32_T k;
  for (k = 0; k < 106; k++) {
    y[k] = muDoubleScalarHypot(x[k].re, x[k].im);
  }
}

/* End of code generation (abs.c) */
