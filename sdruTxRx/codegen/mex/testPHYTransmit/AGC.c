/*
 * AGC.c
 *
 * Code generation for function 'AGC'
 *
 * C source code generated on: Sat Mar 29 15:48:37 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testPHYTransmit.h"
#include "AGC.h"
#include "testPHYTransmit_data.h"

/* Variable Definitions */
static emlrtRSInfo oe_emlrtRSI = { 1, "AGC",
  "/opt/MATLAB/R2013a/toolbox/comm/comm/+comm/AGC.m" };

static emlrtRSInfo pe_emlrtRSI = { 134, "AGC",
  "/opt/MATLAB/R2013a/toolbox/comm/comm/+comm/AGC.m" };

/* Function Definitions */
comm_AGC *AGC_AGC(comm_AGC *obj)
{
  comm_AGC *b_obj;
  comm_AGC *c_obj;
  b_obj = obj;
  emlrtPushRtStackR2012b(&oe_emlrtRSI, emlrtRootTLSGlobal);
  c_obj = b_obj;
  emlrtPushRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  c_obj->isInitialized = FALSE;
  c_obj->isReleased = FALSE;
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&oe_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&pe_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&t_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&t_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&pe_emlrtRSI, emlrtRootTLSGlobal);
  return b_obj;
}

/* End of code generation (AGC.c) */
