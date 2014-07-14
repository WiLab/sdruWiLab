/*
 * power.c
 *
 * Code generation for function 'power'
 *
 * C source code generated on: Thu Jul  3 10:46:49 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "PHYReceiverFun.h"
#include "power.h"
#include <stdio.h>

/* Function Definitions */
void b_power(const real_T a[105], real_T y[105])
{
  int32_T k;
  for (k = 0; k < 105; k++) {
    y[k] = a[k] * a[k];
  }
}

void c_power(const real_T a[106], real_T y[106])
{
  int32_T k;
  for (k = 0; k < 106; k++) {
    y[k] = a[k] * a[k];
  }
}

void power(const real_T a[112], real_T y[112])
{
  int32_T k;
  for (k = 0; k < 112; k++) {
    y[k] = a[k] * a[k];
  }
}

/* End of code generation (power.c) */
