/*
 * xcorr.c
 *
 * Code generation for function 'xcorr'
 *
 * C source code generated on: Thu Jul  3 10:46:49 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "PHYReceiverFun.h"
#include "xcorr.h"
#include <stdio.h>

/* Function Definitions */
void b_xcorr(const real_T arg1[112], real_T C[223])
{
  int32_T i;
  real_T s;
  int32_T jstart;
  real_T u0;
  int32_T i2;
  int32_T j;
  for (i = 0; i < 223; i++) {
    s = 0.0;
    if (i - 111 > 0) {
      jstart = i - 110;
    } else {
      jstart = 1;
    }

    u0 = (1.0 + (real_T)i) - 96.0;
    if (u0 <= 112.0) {
    } else {
      u0 = 112.0;
    }

    i2 = (int32_T)u0 - jstart;
    for (j = 0; j <= i2; j++) {
      s += arg1[(jstart + j) - 1];
    }

    C[i] = s;
  }
}

void xcorr(const creal_T arg1[112], const creal_T arg2[16], creal_T C[223])
{
  int32_T i;
  real_T s_re;
  real_T s_im;
  int32_T jstart;
  real_T u0;
  int32_T i1;
  int32_T j;
  int32_T b_j;
  for (i = 0; i < 223; i++) {
    s_re = 0.0;
    s_im = 0.0;
    if (i - 111 > 0) {
      jstart = i - 110;
    } else {
      jstart = 1;
    }

    u0 = (1.0 + (real_T)i) - 96.0;
    if (u0 <= 112.0) {
    } else {
      u0 = 112.0;
    }

    i1 = (int32_T)u0 - jstart;
    for (j = 0; j <= i1; j++) {
      b_j = (jstart + j) - 1;
      s_re += arg2[(b_j - i) + 111].re * arg1[b_j].re + arg2[(b_j - i) + 111].im
        * arg1[b_j].im;
      s_im += arg2[(b_j - i) + 111].re * arg1[b_j].im - arg2[(b_j - i) + 111].im
        * arg1[b_j].re;
    }

    C[i].re = s_re;
    C[i].im = s_im;
  }
}

/* End of code generation (xcorr.c) */
