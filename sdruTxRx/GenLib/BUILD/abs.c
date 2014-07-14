/*
 * abs.c
 *
 * Code generation for function 'abs'
 *
 * C source code generated on: Thu Jul  3 10:46:48 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "PHYReceiverFun.h"
#include "abs.h"
#include "PHYReceiver.h"
#include "PHYReceiverFun_rtwutil.h"
#include <stdio.h>

/* Function Definitions */
void b_abs(const creal_T x[112], real_T y[112])
{
  int32_T k;
  for (k = 0; k < 112; k++) {
    y[k] = rt_hypotd_snf(x[k].re, x[k].im);
  }
}

void c_abs(const creal_T x[105], real_T y[105])
{
  int32_T k;
  for (k = 0; k < 105; k++) {
    y[k] = rt_hypotd_snf(x[k].re, x[k].im);
  }
}

void d_abs(const creal_T x[106], real_T y[106])
{
  int32_T k;
  for (k = 0; k < 106; k++) {
    y[k] = rt_hypotd_snf(x[k].re, x[k].im);
  }
}

/* End of code generation (abs.c) */
