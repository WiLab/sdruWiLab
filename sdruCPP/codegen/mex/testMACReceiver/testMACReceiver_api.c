/*
 * testMACReceiver_api.c
 *
 * Code generation for function 'testMACReceiver_api'
 *
 * C source code generated on: Thu Mar  6 18:47:07 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testMACReceiver.h"
#include "testMACReceiver_api.h"
#include "fprintf.h"
#include "testMACReceiver_mexutil.h"
#include <stdio.h>

/* Function Declarations */
static real_T (*e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *offsets,
  const char_T *identifier))[3];
static real_T (*f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[3];
static real_T (*h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[3];

/* Function Definitions */
static real_T (*e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *offsets,
  const char_T *identifier))[3]
{
  real_T (*y)[3];
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  y = f_emlrt_marshallIn(sp, emlrtAlias(offsets), &thisId);
  emlrtDestroyArray(&offsets);
  return y;
}
  static real_T (*f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId))[3]
{
  real_T (*y)[3];
  y = h_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static real_T (*h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[3]
{
  real_T (*ret)[3];
  int32_T iv203[2];
  int32_T i32;
  for (i32 = 0; i32 < 2; i32++) {
    iv203[i32] = 1 + (i32 << 1);
  }

  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", FALSE, 2U, iv203);
  ret = (real_T (*)[3])mxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}
  void testMACReceiver_api(testMACReceiverStackData *SD, emlrtStack *sp, const
  mxArray * const prhs[2])
{
  real_T (*offsets)[3];
  real_T nodeNum;

  /* Marshall function inputs */
  offsets = e_emlrt_marshallIn(sp, emlrtAlias(prhs[0]), "offsets");
  nodeNum = c_emlrt_marshallIn(sp, emlrtAliasP(prhs[1]), "nodeNum");

  /* Invoke the target function */
  testMACReceiver(SD, sp, *offsets, nodeNum);
}

/* End of code generation (testMACReceiver_api.c) */
