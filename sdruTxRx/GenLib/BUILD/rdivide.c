/*
 * rdivide.c
 *
 * Code generation for function 'rdivide'
 *
 * C source code generated on: Thu Jul  3 10:46:48 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "PHYReceiverFun.h"
#include "rdivide.h"
#include <stdio.h>

/* Function Definitions */
void b_rdivide(const creal_T x[106], const real_T y[106], creal_T z[106])
{
  int32_T i4;
  for (i4 = 0; i4 < 106; i4++) {
    if (x[i4].im == 0.0) {
      z[i4].re = x[i4].re / y[i4];
      z[i4].im = 0.0;
    } else if (x[i4].re == 0.0) {
      z[i4].re = 0.0;
      z[i4].im = x[i4].im / y[i4];
    } else {
      z[i4].re = x[i4].re / y[i4];
      z[i4].im = x[i4].im / y[i4];
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

void d_rdivide(const creal_T x[4], const real_T y[4], creal_T z[4])
{
  int32_T i;
  for (i = 0; i < 4; i++) {
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

void rdivide(const real_T x[105], const real_T y[105], real_T z[105])
{
  int32_T i;
  for (i = 0; i < 105; i++) {
    z[i] = x[i] / y[i];
  }
}

/* End of code generation (rdivide.c) */
