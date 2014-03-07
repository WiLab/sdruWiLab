/*
 * abs.c
 *
 * Code generation for function 'abs'
 *
 * C source code generated on: Thu Mar  6 22:22:39 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testMACTransmitter.h"
#include "abs.h"
#include <stdio.h>

/* Function Declarations */
static real_T eml_scalar_abs(const creal_T x);

/* Function Definitions */
static real_T eml_scalar_abs(const creal_T x)
{
  return muDoubleScalarHypot(x.re, x.im);
}

void b_abs(const creal_T x[5120], real_T y[5120])
{
  int32_T k;
  for (k = 0; k < 5120; k++) {
    y[k] = muDoubleScalarHypot(x[k].re, x[k].im);
  }
}

void c_abs(const creal_T x_data[1231], const int32_T x_size[1], real_T y_data
           [1231], int32_T y_size[1])
{
  int32_T k;
  y_size[0] = (int16_T)x_size[0];
  for (k = 0; k < x_size[0]; k++) {
    y_data[k] = eml_scalar_abs(x_data[k]);
  }
}

void d_abs(const creal_T x[106], real_T y[106])
{
  int32_T k;
  for (k = 0; k < 106; k++) {
    y[k] = muDoubleScalarHypot(x[k].re, x[k].im);
  }
}

/* End of code generation (abs.c) */
