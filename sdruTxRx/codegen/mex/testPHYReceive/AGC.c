/*
 * AGC.c
 *
 * Code generation for function 'AGC'
 *
 * C source code generated on: Thu Apr  3 19:36:37 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testPHYReceive.h"
#include "AGC.h"
#include "SystemProp.h"
#include "testPHYReceive_data.h"
#include <stdio.h>

/* Variable Definitions */
static emlrtRSInfo me_emlrtRSI = { 1, "AGC",
  "/opt/MATLAB/R2013a/toolbox/comm/comm/+comm/AGC.m" };

static emlrtRSInfo ne_emlrtRSI = { 134, "AGC",
  "/opt/MATLAB/R2013a/toolbox/comm/comm/+comm/AGC.m" };

static emlrtRSInfo gg_emlrtRSI = { 271, "AGC",
  "/opt/MATLAB/R2013a/toolbox/comm/comm/+comm/AGC.m" };

/* Function Declarations */
static real_T rectifier(const creal_T x[5120]);
static real_T squarelaw(const creal_T x[5120]);

/* Function Definitions */
static real_T rectifier(const creal_T x[5120])
{
  real_T y;
  real_T b_y[5120];
  int32_T k;
  for (k = 0; k < 5120; k++) {
    b_y[k] = muDoubleScalarHypot(x[k].re, x[k].im);
  }

  y = b_y[0];
  for (k = 0; k < 5119; k++) {
    y += b_y[k + 1];
  }

  y /= 5120.0;
  return y;
}

static real_T squarelaw(const creal_T x[5120])
{
  real_T y;
  real_T b_y[5120];
  int32_T k;
  for (k = 0; k < 5120; k++) {
    y = muDoubleScalarHypot(x[k].re, x[k].im);
    b_y[k] = y * y;
  }

  y = b_y[0];
  for (k = 0; k < 5119; k++) {
    y += b_y[k + 1];
  }

  y /= 5120.0;
  return y;
}

comm_AGC *AGC_AGC(comm_AGC *obj)
{
  comm_AGC *b_obj;
  comm_AGC *c_obj;
  b_obj = obj;
  emlrtPushRtStackR2012b(&me_emlrtRSI, emlrtRootTLSGlobal);
  c_obj = b_obj;
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  c_obj->isInitialized = FALSE;
  c_obj->isReleased = FALSE;
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&q_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&q_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&me_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&ne_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&q_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&q_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&v_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&v_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&q_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&q_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&ne_emlrtRSI, emlrtRootTLSGlobal);
  return b_obj;
}

void AGC_stepImpl(comm_AGC *obj, const creal_T x[5120], creal_T y[5120])
{
  real_T g;
  int32_T i;
  g = obj->Gain;
  if (obj->pDetectorIsRectifier) {
    for (i = 0; i < 5120; i++) {
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
    for (i = 0; i < 5120; i++) {
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

  emlrtPushRtStackR2012b(&gg_emlrtRSI, emlrtRootTLSGlobal);
  e_SystemProp_matlabCodegenSetAn(obj, g);
  emlrtPopRtStackR2012b(&gg_emlrtRSI, emlrtRootTLSGlobal);
}

/* End of code generation (AGC.c) */
