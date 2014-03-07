/*
 * rdivide.c
 *
 * Code generation for function 'rdivide'
 *
 * C source code generated on: Thu Mar  6 19:04:22 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testMACTransmitter.h"
#include "rdivide.h"
#include <stdio.h>

/* Function Definitions */
void b_rdivide(const creal_T x[106], const real_T y[106], creal_T z[106])
{
  int32_T i24;
  for (i24 = 0; i24 < 106; i24++) {
    if (x[i24].im == 0.0) {
      z[i24].re = x[i24].re / y[i24];
      z[i24].im = 0.0;
    } else if (x[i24].re == 0.0) {
      z[i24].re = 0.0;
      z[i24].im = x[i24].im / y[i24];
    } else {
      z[i24].re = x[i24].re / y[i24];
      z[i24].im = x[i24].im / y[i24];
    }
  }
}

void c_rdivide(const creal_T x[53], const real_T y[53], creal_T z[53])
{
  int32_T i;
  for (i = 0; i < 53; i++) {
    if (x[i].im == 0.0) {
      z[i].re = x[i].re / y[i];
      z[i].im = 0.0;
    } else if (x[i].re == 0.0) {
      z[i].re = 0.0;
      z[i].im = x[i].im / y[i];
    } else {
      z[i].re = x[i].re / y[i];
      z[i].im = x[i].im / y[i];
    }
  }
}

void rdivide(const real_T x_data[1224], const real_T y_data[1224], real_T
             z_data[1224], int32_T z_size[1])
{
  int32_T i;
  z_size[0] = 1224;
  for (i = 0; i < 1224; i++) {
    z_data[i] = x_data[i] / y_data[i];
  }
}

/* End of code generation (rdivide.c) */
