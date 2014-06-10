/*
 * CRCDetector.c
 *
 * Code generation for function 'CRCDetector'
 *
 * C source code generated on: Thu Apr 24 14:26:15 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testPHYTransmit.h"
#include "CRCDetector.h"
#include "testPHYTransmit_data.h"

/* Variable Definitions */
static emlrtRSInfo pe_emlrtRSI = { 1, "CRCDetector",
  "/opt/MATLAB/R2013a/toolbox/comm/comm/+commcodegen/CRCDetector.p" };

/* Function Definitions */
commcodegen_CRCDetector *CRCDetector_CRCDetector(commcodegen_CRCDetector *obj)
{
  commcodegen_CRCDetector *b_obj;
  commcodegen_CRCDetector *c_obj;
  b_obj = obj;
  emlrtPushRtStackR2012b(&pe_emlrtRSI, emlrtRootTLSGlobal);
  c_obj = b_obj;
  emlrtPushRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  c_obj->isInitialized = FALSE;
  c_obj->isReleased = FALSE;
  emlrtPushRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&pe_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&pe_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&pe_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&pe_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&dc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&dc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&s_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&s_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&pe_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&pe_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&pe_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&pe_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&pe_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&pe_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&pe_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&pe_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&pe_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&pe_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&pe_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&pe_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&pe_emlrtRSI, emlrtRootTLSGlobal);
  return b_obj;
}

/* End of code generation (CRCDetector.c) */
