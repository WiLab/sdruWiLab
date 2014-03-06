/*
 * mean.c
 *
 * Code generation for function 'mean'
 *
 * C source code generated on: Thu Feb 27 11:53:20 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testPHYReceive.h"
#include "mean.h"

/* Function Definitions */
real_T b_mean(const real_T x_data[1])
{
  return x_data[0];
}

void c_mean(const real_T x[106], real_T y[53])
{
  int32_T iy;
  int32_T ixstart;
  int32_T j;
  iy = -1;
  ixstart = 52;
  for (j = 0; j < 53; j++) {
    ixstart++;
    iy++;
    y[iy] = x[ixstart - 53] + x[ixstart];
  }

  for (iy = 0; iy < 53; iy++) {
    y[iy] /= 2.0;
  }
}

void d_mean(const creal_T x[106], creal_T y[53])
{
  int32_T iy;
  int32_T ixstart;
  int32_T j;
  real_T y_im;
  iy = -1;
  ixstart = 52;
  for (j = 0; j < 53; j++) {
    ixstart++;
    iy++;
    y[iy].re = x[ixstart - 53].re + x[ixstart].re;
    y[iy].im = x[ixstart - 53].im + x[ixstart].im;
  }

  for (iy = 0; iy < 53; iy++) {
    y_im = y[iy].im;
    if (y[iy].im == 0.0) {
      y[iy].re /= 2.0;
      y[iy].im = 0.0;
    } else if (y[iy].re == 0.0) {
      y[iy].re = 0.0;
      y[iy].im = y_im / 2.0;
    } else {
      y[iy].re /= 2.0;
      y[iy].im = y_im / 2.0;
    }
  }
}

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
