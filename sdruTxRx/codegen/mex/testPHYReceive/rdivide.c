/*
 * rdivide.c
 *
 * Code generation for function 'rdivide'
 *
 * C source code generated on: Thu Feb 27 11:53:20 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testPHYReceive.h"
#include "rdivide.h"

/* Function Definitions */
void b_rdivide(const creal_T x[106], const real_T y[106], creal_T z[106])
{
  int32_T i21;
  for (i21 = 0; i21 < 106; i21++) {
    if (x[i21].im == 0.0) {
      z[i21].re = x[i21].re / y[i21];
      z[i21].im = 0.0;
    } else if (x[i21].re == 0.0) {
      z[i21].re = 0.0;
      z[i21].im = x[i21].im / y[i21];
    } else {
      z[i21].re = x[i21].re / y[i21];
      z[i21].im = x[i21].im / y[i21];
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
