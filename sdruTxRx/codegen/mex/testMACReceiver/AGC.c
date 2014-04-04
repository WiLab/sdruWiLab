/*
 * AGC.c
 *
 * Code generation for function 'AGC'
 *
 * C source code generated on: Thu Apr  3 19:51:42 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testMACReceiver.h"
#include "AGC.h"
#include "SystemProp.h"
#include "testMACReceiver_data.h"

/* Variable Definitions */
static emlrtRSInfo pe_emlrtRSI = { 1, "AGC",
  "/opt/MATLAB/R2013a/toolbox/comm/comm/+comm/AGC.m" };

static emlrtRSInfo qe_emlrtRSI = { 134, "AGC",
  "/opt/MATLAB/R2013a/toolbox/comm/comm/+comm/AGC.m" };

static emlrtRSInfo pg_emlrtRSI = { 271, "AGC",
  "/opt/MATLAB/R2013a/toolbox/comm/comm/+comm/AGC.m" };

/* Function Declarations */
static real_T rectifier(testMACReceiverStackData *SD, const creal_T x[5120]);
static real_T squarelaw(testMACReceiverStackData *SD, const creal_T x[5120]);

/* Function Definitions */
static real_T rectifier(testMACReceiverStackData *SD, const creal_T x[5120])
{
  real_T y;
  int32_T k;
  for (k = 0; k < 5120; k++) {
    SD->u1.f6.y[k] = muDoubleScalarHypot(x[k].re, x[k].im);
  }

  y = SD->u1.f6.y[0];
  for (k = 0; k < 5119; k++) {
    y += SD->u1.f6.y[k + 1];
  }

  y /= 5120.0;
  return y;
}

static real_T squarelaw(testMACReceiverStackData *SD, const creal_T x[5120])
{
  real_T y;
  int32_T k;
  for (k = 0; k < 5120; k++) {
    y = muDoubleScalarHypot(x[k].re, x[k].im);
    SD->u1.f7.y[k] = y * y;
  }

  y = SD->u1.f7.y[0];
  for (k = 0; k < 5119; k++) {
    y += SD->u1.f7.y[k + 1];
  }

  y /= 5120.0;
  return y;
}

comm_AGC *AGC_AGC(comm_AGC *obj)
{
  comm_AGC *b_obj;
  comm_AGC *c_obj;
  b_obj = obj;
  emlrtPushRtStackR2012b(&pe_emlrtRSI, emlrtRootTLSGlobal);
  c_obj = b_obj;
  emlrtPushRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  c_obj->isInitialized = FALSE;
  c_obj->isReleased = FALSE;
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&pe_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&qe_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&u_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&u_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&qe_emlrtRSI, emlrtRootTLSGlobal);
  return b_obj;
}

void AGC_stepImpl(testMACReceiverStackData *SD, comm_AGC *obj, const creal_T x
                  [5120], creal_T y[5120])
{
  real_T g;
  int32_T i;
  g = obj->Gain;
  if (obj->pDetectorIsRectifier) {
    for (i = 0; i < 5120; i++) {
      y[i].re = g * x[i].re;
      y[i].im = g * x[i].im;
    }

    g += 0.1 * (1.0 - rectifier(SD, y));
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

    g += 0.1 * (1.0 - squarelaw(SD, y));
    if (g < 1.4901161193847656E-8) {
      g = 1.4901161193847656E-8;
    } else {
      if (g > 1000.0) {
        g = 1000.0;
      }
    }
  }

  emlrtPushRtStackR2012b(&pg_emlrtRSI, emlrtRootTLSGlobal);
  e_SystemProp_matlabCodegenSetAn(obj, g);
  emlrtPopRtStackR2012b(&pg_emlrtRSI, emlrtRootTLSGlobal);
}

/* End of code generation (AGC.c) */
