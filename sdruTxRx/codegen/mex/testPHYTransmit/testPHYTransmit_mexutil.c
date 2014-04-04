/*
 * testPHYTransmit_mexutil.c
 *
 * Code generation for function 'testPHYTransmit_mexutil'
 *
 * C source code generated on: Sat Mar 29 15:48:37 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testPHYTransmit.h"
#include "testPHYTransmit_mexutil.h"
#include "generateOFDMSignal_TX2.h"
#include "SDRuTransmitter.h"

/* Function Declarations */
static void f_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId, real_T y[13]);
static void h_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId, real_T y[10]);
static void j_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId, real_T ret[13]);
static void k_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId, real_T ret[10]);

/* Function Definitions */
static void f_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId, real_T y[13])
{
  j_emlrt_marshallIn(emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void h_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId, real_T y[10])
{
  k_emlrt_marshallIn(emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void j_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId, real_T ret[13])
{
  int32_T iv134[1];
  int32_T i27;
  iv134[0] = 13;
  emlrtCheckBuiltInR2012b(emlrtRootTLSGlobal, msgId, src, "double", FALSE, 1U,
    iv134);
  for (i27 = 0; i27 < 13; i27++) {
    ret[i27] = (*(real_T (*)[13])mxGetData(src))[i27];
  }

  emlrtDestroyArray(&src);
}

static void k_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId, real_T ret[10])
{
  int32_T iv135[2];
  int32_T i28;
  for (i28 = 0; i28 < 2; i28++) {
    iv135[i28] = 1 + 9 * i28;
  }

  emlrtCheckBuiltInR2012b(emlrtRootTLSGlobal, msgId, src, "double", FALSE, 2U,
    iv135);
  for (i28 = 0; i28 < 10; i28++) {
    ret[i28] = (*(real_T (*)[10])mxGetData(src))[i28];
  }

  emlrtDestroyArray(&src);
}

const mxArray *b_message(const mxArray *b, emlrtMCInfo *location)
{
  const mxArray *pArray;
  const mxArray *m33;
  pArray = b;
  return emlrtCallMATLABR2012b(emlrtRootTLSGlobal, 1, &m33, 1, &pArray,
    "message", TRUE, location);
}

const mxArray *b_rand(const mxArray *b, const mxArray *c, emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  const mxArray *m30;
  pArrays[0] = b;
  pArrays[1] = c;
  return emlrtCallMATLABR2012b(emlrtRootTLSGlobal, 1, &m30, 2, pArrays, "rand",
    TRUE, location);
}

void c_error(const mxArray *b, emlrtMCInfo *location)
{
  const mxArray *pArray;
  pArray = b;
  emlrtCallMATLABR2012b(emlrtRootTLSGlobal, 0, NULL, 1, &pArray, "error", TRUE,
                        location);
}

void e_emlrt_marshallIn(const mxArray *c_rand, const char_T *identifier, real_T
  y[13])
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  f_emlrt_marshallIn(emlrtAlias(c_rand), &thisId, y);
  emlrtDestroyArray(&c_rand);
}

void g_emlrt_marshallIn(const mxArray *c_rand, const char_T *identifier, real_T
  y[10])
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  h_emlrt_marshallIn(emlrtAlias(c_rand), &thisId, y);
  emlrtDestroyArray(&c_rand);
}

real_T i_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier *msgId)
{
  real_T ret;
  emlrtCheckBuiltInR2012b(emlrtRootTLSGlobal, msgId, src, "double", FALSE, 0U, 0);
  ret = *(real_T *)mxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

const mxArray *message(const mxArray *b, const mxArray *c, emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  const mxArray *m31;
  pArrays[0] = b;
  pArrays[1] = c;
  return emlrtCallMATLABR2012b(emlrtRootTLSGlobal, 1, &m31, 2, pArrays,
    "message", TRUE, location);
}

const mxArray *sdruroot(emlrtMCInfo *location)
{
  const mxArray *m34;
  return emlrtCallMATLABR2012b(emlrtRootTLSGlobal, 1, &m34, 0, NULL, "sdruroot",
    TRUE, location);
}

void setupsdru(const mxArray *b, const mxArray *c, emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  pArrays[0] = b;
  pArrays[1] = c;
  emlrtCallMATLABR2012b(emlrtRootTLSGlobal, 0, NULL, 2, pArrays, "setupsdru",
                        TRUE, location);
}

/* End of code generation (testPHYTransmit_mexutil.c) */
