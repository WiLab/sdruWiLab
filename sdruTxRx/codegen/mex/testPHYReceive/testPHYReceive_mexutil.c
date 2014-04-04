/*
 * testPHYReceive_mexutil.c
 *
 * Code generation for function 'testPHYReceive_mexutil'
 *
 * C source code generated on: Thu Apr  3 19:36:37 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testPHYReceive.h"
#include "testPHYReceive_mexutil.h"
#include "OFDMletters2bits.h"
#include "generateOFDMSignal_TX2.h"
#include "SDRuTransmitter.h"
#include <stdio.h>

/* Function Declarations */
static real_T b_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId);
static real_T d_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId);
static void f_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId, real_T y[13]);
static void h_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId, real_T y[10]);
static void j_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId, real_T ret[13]);
static void k_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId, real_T ret[10]);

/* Function Definitions */
static real_T b_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId)
{
  real_T y;
  y = i_emlrt_marshallIn(emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static real_T d_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId)
{
  real_T y;
  y = i_emlrt_marshallIn(emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

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
  int32_T iv129[1];
  int32_T i31;
  iv129[0] = 13;
  emlrtCheckBuiltInR2012b(emlrtRootTLSGlobal, msgId, src, "double", FALSE, 1U,
    iv129);
  for (i31 = 0; i31 < 13; i31++) {
    ret[i31] = (*(real_T (*)[13])mxGetData(src))[i31];
  }

  emlrtDestroyArray(&src);
}

static void k_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId, real_T ret[10])
{
  int32_T iv130[2];
  int32_T i32;
  for (i32 = 0; i32 < 2; i32++) {
    iv130[i32] = 1 + 9 * i32;
  }

  emlrtCheckBuiltInR2012b(emlrtRootTLSGlobal, msgId, src, "double", FALSE, 2U,
    iv130);
  for (i32 = 0; i32 < 10; i32++) {
    ret[i32] = (*(real_T (*)[10])mxGetData(src))[i32];
  }

  emlrtDestroyArray(&src);
}

void b_error(const mxArray *b, emlrtMCInfo *location)
{
  const mxArray *pArray;
  pArray = b;
  emlrtCallMATLABR2012b(emlrtRootTLSGlobal, 0, NULL, 1, &pArray, "error", TRUE,
                        location);
}

const mxArray *b_message(const mxArray *b, emlrtMCInfo *location)
{
  const mxArray *pArray;
  const mxArray *m34;
  pArray = b;
  return emlrtCallMATLABR2012b(emlrtRootTLSGlobal, 1, &m34, 1, &pArray,
    "message", TRUE, location);
}

const mxArray *b_rand(const mxArray *b, const mxArray *c, emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  const mxArray *m31;
  pArrays[0] = b;
  pArrays[1] = c;
  return emlrtCallMATLABR2012b(emlrtRootTLSGlobal, 1, &m31, 2, pArrays, "rand",
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
  const mxArray *m32;
  pArrays[0] = b;
  pArrays[1] = c;
  return emlrtCallMATLABR2012b(emlrtRootTLSGlobal, 1, &m32, 2, pArrays,
    "message", TRUE, location);
}

const mxArray *sdruroot(emlrtMCInfo *location)
{
  const mxArray *m35;
  return emlrtCallMATLABR2012b(emlrtRootTLSGlobal, 1, &m35, 0, NULL, "sdruroot",
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
  const mxArray *m33;
  pArray = b;
  return emlrtCallMATLABR2012b(emlrtRootTLSGlobal, 1, &m33, 1, &pArray,
    "str2double", TRUE, location);
}

/* End of code generation (testPHYReceive_mexutil.c) */
