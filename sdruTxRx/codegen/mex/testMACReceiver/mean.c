/*
 * mean.c
 *
 * Code generation for function 'mean'
 *
 * C source code generated on: Thu Apr  3 19:51:42 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testMACReceiver.h"
#include "mean.h"

/* Function Definitions */
void b_mean(const real_T x[106], real_T y[53])
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

void c_mean(const creal_T x[106], creal_T y[53])
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

real_T mean(const real_T x_data[3], const int32_T x_size[1])
{
  real_T y;
  int32_T k;
  y = x_data[0];
  for (k = 2; k <= x_size[0]; k++) {
    y += x_data[k - 1];
  }

  y /= (real_T)x_size[0];
  return y;
}

/* End of code generation (mean.c) */
