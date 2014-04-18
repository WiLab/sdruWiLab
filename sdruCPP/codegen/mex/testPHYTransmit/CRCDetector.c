/*
 * CRCDetector.c
 *
 * Code generation for function 'CRCDetector'
 *
 * C source code generated on: Fri Apr 18 16:24:32 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testPHYTransmit.h"
#include "CRCDetector.h"
#include "testPHYTransmit_data.h"
#include <stdio.h>

/* Variable Definitions */
static emlrtRSInfo qe_emlrtRSI = { 1, "CRCDetector",
  "/opt/MATLAB/R2013a/toolbox/comm/comm/+commcodegen/CRCDetector.p" };

/* Function Definitions */
commcodegen_CRCDetector *CRCDetector_CRCDetector(commcodegen_CRCDetector *obj)
{
  commcodegen_CRCDetector *b_obj;
  commcodegen_CRCDetector *c_obj;
  b_obj = obj;
  emlrtPushRtStackR2012b(&qe_emlrtRSI, emlrtRootTLSGlobal);
  c_obj = b_obj;
  emlrtPushRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  c_obj->isInitialized = FALSE;
  c_obj->isReleased = FALSE;
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&qe_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&qe_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&qe_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&qe_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&ec_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&ec_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&t_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&t_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&qe_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&qe_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&qe_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&qe_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&qe_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&qe_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&qe_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&qe_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&qe_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&qe_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&qe_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&qe_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&qe_emlrtRSI, emlrtRootTLSGlobal);
  return b_obj;
}

/* End of code generation (CRCDetector.c) */
