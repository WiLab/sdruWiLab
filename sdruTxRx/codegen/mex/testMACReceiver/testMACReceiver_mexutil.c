/*
 * testMACReceiver_mexutil.c
 *
 * Code generation for function 'testMACReceiver_mexutil'
 *
 * C source code generated on: Thu Apr  3 19:51:42 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testMACReceiver.h"
#include "testMACReceiver_mexutil.h"
#include "OFDMletters2bits.h"
#include "generateOFDMSignal_TX2.h"
#include "SDRuReceiver.h"

/* Function Declarations */
static real_T b_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId);
static real_T d_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId);
static void f_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId, real_T y[13]);
static void h_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId, real_T y[10]);
static void l_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId, real_T ret[13]);
static void m_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId, real_T ret[10]);

/* Function Definitions */
static real_T b_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId)
{
  real_T y;
  y = k_emlrt_marshallIn(emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static real_T d_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId)
{
  real_T y;
  y = k_emlrt_marshallIn(emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void f_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId, real_T y[13])
{
  l_emlrt_marshallIn(emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void h_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId, real_T y[10])
{
  m_emlrt_marshallIn(emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void l_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId, real_T ret[13])
{
  int32_T iv198[1];
  int32_T i36;
  iv198[0] = 13;
  emlrtCheckBuiltInR2012b(emlrtRootTLSGlobal, msgId, src, "double", FALSE, 1U,
    iv198);
  for (i36 = 0; i36 < 13; i36++) {
    ret[i36] = (*(real_T (*)[13])mxGetData(src))[i36];
  }

  emlrtDestroyArray(&src);
}

static void m_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId, real_T ret[10])
{
  int32_T iv199[2];
  int32_T i37;
  for (i37 = 0; i37 < 2; i37++) {
    iv199[i37] = 1 + 9 * i37;
  }

  emlrtCheckBuiltInR2012b(emlrtRootTLSGlobal, msgId, src, "double", FALSE, 2U,
    iv199);
  for (i37 = 0; i37 < 10; i37++) {
    ret[i37] = (*(real_T (*)[10])mxGetData(src))[i37];
  }

  emlrtDestroyArray(&src);
}

const mxArray *b_message(const mxArray *b, emlrtMCInfo *location)
{
  const mxArray *pArray;
  const mxArray *m45;
  pArray = b;
  return emlrtCallMATLABR2012b(emlrtRootTLSGlobal, 1, &m45, 1, &pArray,
    "message", TRUE, location);
}

const mxArray *b_rand(const mxArray *b, const mxArray *c, emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  const mxArray *m42;
  pArrays[0] = b;
  pArrays[1] = c;
  return emlrtCallMATLABR2012b(emlrtRootTLSGlobal, 1, &m42, 2, pArrays, "rand",
    TRUE, location);
}

real_T c_emlrt_marshallIn(const mxArray *b_str2double, const char_T *identifier)
{
  real_T y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  y = d_emlrt_marshallIn(emlrtAlias(b_str2double), &thisId);
  emlrtDestroyArray(&b_str2double);
  return y;
}

void c_error(const mxArray *b, emlrtMCInfo *location)
{
  const mxArray *pArray;
  pArray = b;
  emlrtCallMATLABR2012b(emlrtRootTLSGlobal, 0, NULL, 1, &pArray, "error", TRUE,
                        location);
}

const mxArray *c_message(const mxArray *b, const mxArray *c, const mxArray *d,
  emlrtMCInfo *location)
{
  const mxArray *pArrays[3];
  const mxArray *m47;
  pArrays[0] = b;
  pArrays[1] = c;
  pArrays[2] = d;
  return emlrtCallMATLABR2012b(emlrtRootTLSGlobal, 1, &m47, 3, pArrays,
    "message", TRUE, location);
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

real_T emlrt_marshallIn(const mxArray *c_rand, const char_T *identifier)
{
  real_T y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  y = b_emlrt_marshallIn(emlrtAlias(c_rand), &thisId);
  emlrtDestroyArray(&c_rand);
  return y;
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

real_T k_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier *msgId)
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
  const mxArray *m43;
  pArrays[0] = b;
  pArrays[1] = c;
  return emlrtCallMATLABR2012b(emlrtRootTLSGlobal, 1, &m43, 2, pArrays,
    "message", TRUE, location);
}

const mxArray *sdruroot(emlrtMCInfo *location)
{
  const mxArray *m46;
  return emlrtCallMATLABR2012b(emlrtRootTLSGlobal, 1, &m46, 0, NULL, "sdruroot",
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

const mxArray *str2double(const mxArray *b, emlrtMCInfo *location)
{
  const mxArray *pArray;
  const mxArray *m44;
  pArray = b;
  return emlrtCallMATLABR2012b(emlrtRootTLSGlobal, 1, &m44, 1, &pArray,
    "str2double", TRUE, location);
}

/* End of code generation (testMACReceiver_mexutil.c) */
