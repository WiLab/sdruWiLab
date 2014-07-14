/*
 * AGC.c
 *
 * Code generation for function 'AGC'
 *
 * C source code generated on: Thu Jul  3 10:46:49 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "PHYReceiverFun.h"
#include "AGC.h"
#include "SystemProp.h"
#include "PHYReceiver.h"
#include "PHYReceiverFun_rtwutil.h"
#include <stdio.h>

/* Function Declarations */
static real_T rectifier(const creal_T x[641]);
static real_T squarelaw(const creal_T x[641]);

/* Function Definitions */
static real_T rectifier(const creal_T x[641])
{
  real_T y;
  real_T b_y[641];
  int32_T k;
  for (k = 0; k < 641; k++) {
    b_y[k] = rt_hypotd_snf(x[k].re, x[k].im);
  }

  y = b_y[0];
  for (k = 0; k < 640; k++) {
    y += b_y[k + 1];
  }

  y /= 641.0;
  return y;
}

static real_T squarelaw(const creal_T x[641])
{
  real_T y;
  real_T b_y[641];
  int32_T k;
  for (k = 0; k < 641; k++) {
    y = rt_hypotd_snf(x[k].re, x[k].im);
    b_y[k] = y * y;
  }

  y = b_y[0];
  for (k = 0; k < 640; k++) {
    y += b_y[k + 1];
  }

  y /= 641.0;
  return y;
}

void AGC_stepImpl(comm_AGC *obj, const creal_T x[641], creal_T y[641])
{
  real_T g;
  int32_T i;
  g = obj->Gain;
  if (obj->pDetectorIsRectifier) {
    for (i = 0; i < 641; i++) {
      y[i].re = g * x[i].re;
      y[i].im = g * x[i].im;
    }

    g += 0.1 * (1.0 - rectifier(y));
    if (g < 1.4901161193847656E-8) {
      g = 1.4901161193847656E-8;
    } else {
      if (g > 1000.0) {
        g = 1000.0;
      }
    }
  } else {
    for (i = 0; i < 641; i++) {
      y[i].re = g * x[i].re;
      y[i].im = g * x[i].im;
    }

    g += 0.1 * (1.0 - squarelaw(y));
    if (g < 1.4901161193847656E-8) {
      g = 1.4901161193847656E-8;
    } else {
      if (g > 1000.0) {
        g = 1000.0;
      }
    }
  }

  c_SystemProp_matlabCodegenSetAn(obj, g);
}

/* End of code generation (AGC.c) */
