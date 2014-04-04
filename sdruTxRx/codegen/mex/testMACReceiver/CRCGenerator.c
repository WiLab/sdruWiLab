/*
 * CRCGenerator.c
 *
 * Code generation for function 'CRCGenerator'
 *
 * C source code generated on: Thu Apr  3 19:51:42 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testMACReceiver.h"
#include "CRCGenerator.h"
#include "testMACReceiver_data.h"

/* Function Definitions */
commcodegen_CRCGenerator_256 *CRCGenerator_CRCGenerator
  (commcodegen_CRCGenerator_256 *obj)
{
  commcodegen_CRCGenerator_256 *b_obj;
  commcodegen_CRCGenerator_256 *c_obj;
  comm_CRCGenerator_3 *d_obj;
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
  emlrtPushRtStackR2012b(&ec_emlrtRSI, emlrtRootTLSGlobal);
  c_obj = b_obj;
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  c_obj->isInitialized = FALSE;
  c_obj->isReleased = FALSE;
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  c_obj->inputDirectFeedthrough1 = FALSE;
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&ec_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&ec_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&ec_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&ec_emlrtRSI, emlrtRootTLSGlobal);
  d_obj = &b_obj->cSFunObject;

  /* System object Constructor function: comm.CRCGenerator */
  d_obj->S0_isInitialized = FALSE;
  d_obj->S1_isReleased = FALSE;
  for (i = 0; i < 256; i++) {
    d_obj->P0_CRCTable[i] = (uint32_T)iv78[i];
  }

  emlrtPopRtStackR2012b(&ec_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&ec_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&fc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&fc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&u_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&u_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&ec_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&ec_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&ec_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&ec_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&ec_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&ec_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&ec_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&ec_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&ec_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&ec_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&ec_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&ec_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&ec_emlrtRSI, emlrtRootTLSGlobal);
  return b_obj;
}

/* End of code generation (CRCGenerator.c) */
