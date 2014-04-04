/*
 * power.c
 *
 * Code generation for function 'power'
 *
 * C source code generated on: Thu Apr  3 19:51:42 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testMACReceiver.h"
#include "power.h"

/* Function Declarations */
static void eml_scalexp_alloc(const int32_T varargin_1_size[1], real_T z_data
  [1231], int32_T z_size[1]);

/* Function Definitions */
static void eml_scalexp_alloc(const int32_T varargin_1_size[1], real_T z_data
  [1231], int32_T z_size[1])
{
  z_size[0] = (int16_T)varargin_1_size[0];
}

void b_power(const real_T a[106], real_T y[106])
{
  int32_T k;
  for (k = 0; k < 106; k++) {
    y[k] = a[k] * a[k];
  }
}

void power(const real_T a_data[1231], const int32_T a_size[1], real_T y_data
           [1231], int32_T y_size[1])
{
  int32_T k;
  eml_scalexp_alloc(a_size, y_data, y_size);
  for (k = 0; k < y_size[0]; k++) {
    y_data[k] = a_data[k] * a_data[k];
  }
}

/* End of code generation (power.c) */
