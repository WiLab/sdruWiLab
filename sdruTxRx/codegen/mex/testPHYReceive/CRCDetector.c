/*
 * CRCDetector.c
 *
 * Code generation for function 'CRCDetector'
 *
 * C source code generated on: Thu Apr  3 19:36:37 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testPHYReceive.h"
#include "CRCDetector.h"
#include "testPHYReceive_data.h"
#include <stdio.h>

/* Function Definitions */
commcodegen_CRCDetector *CRCDetector_CRCDetector(commcodegen_CRCDetector *obj)
{
  commcodegen_CRCDetector *b_obj;
  commcodegen_CRCDetector *c_obj;
  comm_CRCDetector_6 *d_obj;
  int32_T i;
  static const int8_T iv78[256] = { 0, 1, 2, 3, 4, 5, 6, 7, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0 };

  b_obj = obj;
  emlrtPushRtStackR2012b(&pe_emlrtRSI, emlrtRootTLSGlobal);
  c_obj = b_obj;
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  c_obj->isInitialized = FALSE;
  c_obj->isReleased = FALSE;
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  c_obj->inputDirectFeedthrough1 = FALSE;
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&q_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&q_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&pe_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&pe_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&pe_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&pe_emlrtRSI, emlrtRootTLSGlobal);
  d_obj = &b_obj->cSFunObject;

  /* System object Constructor function: comm.CRCDetector */
  d_obj->S0_isInitialized = FALSE;
  d_obj->S1_isReleased = FALSE;
  for (i = 0; i < 256; i++) {
    d_obj->P0_CRCTable[i] = (uint32_T)iv78[i];
  }

  emlrtPopRtStackR2012b(&pe_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&pe_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&q_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&q_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&q_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&gc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&gc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&q_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&q_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&q_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&v_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&v_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&q_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&q_emlrtRSI, emlrtRootTLSGlobal);
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
