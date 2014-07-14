/*
 * PHYReceiverFun.c
 *
 * Code generation for function 'PHYReceiverFun'
 *
 * C source code generated on: Thu Jul  3 10:46:48 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "PHYReceiverFun.h"
#include "fprintf.h"
#include "SystemCore.h"
#include "PHYReceiverFun_emxutil.h"
#include "rand.h"
#include "PHYReceiver.h"
#include <stdio.h>

/* Function Declarations */
static real_T rt_roundd_snf(real_T u);

/* Function Definitions */
static real_T rt_roundd_snf(real_T u)
{
  real_T y;
  if (fabs(u) < 4.503599627370496E+15) {
    if (u >= 0.5) {
      y = floor(u + 0.5);
    } else if (u > -0.5) {
      y = -0.0;
    } else {
      y = ceil(u - 0.5);
    }
  } else {
    y = u;
  }

  return y;
}

void PHYReceiverFun(real_T num)
{
  PHYReceiver_167 RX;
  real_T input;
  int16_T i0;
  int32_T k;
  int32_T output_size[2];
  boolean_T output_data[2304];
  int32_T n;
  emxInitStruct_PHYReceiver_167(&RX);
  input = rt_roundd_snf(num);
  if (input < 32768.0) {
    if (input >= -32768.0) {
      i0 = (int16_T)input;
    } else {
      i0 = MIN_int16_T;
    }
  } else if (input >= 32768.0) {
    i0 = MAX_int16_T;
  } else {
    i0 = 0;
  }

  b_fprintf(i0);
  PHYReceiver_PHYReceiver(&RX);

  /* RX = PHYReceiver('HWAttached',true); */
  /* RX.HWAttached = true; */
  input = b_rand();
  input = floor(input * 192.0);
  for (k = 0; k < 10; k++) {
    SystemCore_step(&RX, 1.0 + input, output_data, output_size);
    if ((0 == output_size[0]) || (0 == output_size[1])) {
      n = 0;
    } else if (output_size[0] > output_size[1]) {
      n = output_size[0];
    } else {
      n = output_size[1];
    }

    b_fprintf((int16_T)n);
  }

  emxFreeStruct_PHYReceiver_167(&RX);
}

/* End of code generation (PHYReceiverFun.c) */
