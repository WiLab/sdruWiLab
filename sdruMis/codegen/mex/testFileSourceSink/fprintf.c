/*
 * fprintf.c
 *
 * Code generation for function 'fprintf'
 *
 * C source code generated on: Thu Feb 27 11:25:03 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testFileSourceSink.h"
#include "fprintf.h"
#include <stdio.h>

/* Variable Definitions */
static emlrtRSInfo ab_emlrtRSI = { 35, "fprintf",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/lang/fprintf.m" };

static emlrtMCInfo r_emlrtMCI = { 74, 14, "fprintf",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/lang/fprintf.m" };

static emlrtRSInfo cb_emlrtRSI = { 74, "fprintf",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/lang/fprintf.m" };

/* Function Declarations */
static real_T c_fprintf(const emlrtStack *sp);
static real_T e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_feval,
  const char_T *identifier);
static real_T e_fprintf(const emlrtStack *sp);
static real_T f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
static const mxArray *feval(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, emlrtMCInfo *location);
static real_T i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId);

/* Function Definitions */
static real_T c_fprintf(const emlrtStack *sp)
{
  const mxArray *y;
  static const int32_T iv8[2] = { 1, 7 };

  const mxArray *m1;
  char_T cv14[7];
  int32_T i;
  static const char_T cv15[7] = { 'f', 'p', 'r', 'i', 'n', 't', 'f' };

  const mxArray *b_y;
  const mxArray *c_y;
  static const int32_T iv9[2] = { 1, 50 };

  char_T cv16[50];
  static const char_T cv17[50] = { 'R', 'e', 'm', 'e', 'm', 'b', 'e', 'r', ' ',
    't', 'o', ' ', 'c', 'o', 'm', 'p', 'a', 'r', 'e', ' ', 'o', 'u', 't', 'p',
    'u', 't', ' ', 'f', 'i', 'l', 'e', 's', ' ', 'w', 'i', 't', 'h', ' ', 'm',
    'd', '5', ' ', 'o', 'r', ' ', 'S', 'H', 'A', '\\', 'n' };

  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m1 = mxCreateCharArray(2, iv8);
  for (i = 0; i < 7; i++) {
    cv14[i] = cv15[i];
  }

  emlrtInitCharArrayR2013a(sp, 7, m1, cv14);
  emlrtAssign(&y, m1);
  b_y = NULL;
  m1 = mxCreateDoubleScalar(1.0);
  emlrtAssign(&b_y, m1);
  c_y = NULL;
  m1 = mxCreateCharArray(2, iv9);
  for (i = 0; i < 50; i++) {
    cv16[i] = cv17[i];
  }

  emlrtInitCharArrayR2013a(sp, 50, m1, cv16);
  emlrtAssign(&c_y, m1);
  st.site = &cb_emlrtRSI;
  return e_emlrt_marshallIn(&st, feval(&st, y, b_y, c_y, &r_emlrtMCI), "feval");
}

static real_T e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_feval,
  const char_T *identifier)
{
  real_T y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  y = f_emlrt_marshallIn(sp, emlrtAlias(b_feval), &thisId);
  emlrtDestroyArray(&b_feval);
  return y;
}

static real_T e_fprintf(const emlrtStack *sp)
{
  const mxArray *y;
  static const int32_T iv10[2] = { 1, 7 };

  const mxArray *m2;
  char_T cv18[7];
  int32_T i;
  static const char_T cv19[7] = { 'f', 'p', 'r', 'i', 'n', 't', 'f' };

  const mxArray *b_y;
  const mxArray *c_y;
  static const int32_T iv11[2] = { 1, 31 };

  char_T cv20[31];
  static const char_T cv21[31] = { 'f', 'i', 'l', 'e', 'S', 'o', 'u', 'r', 'c',
    'e', 'S', 'i', 'n', 'k', ' ', 'T', 'e', 's', 't', ' ', 'C', 'o', 'm', 'p',
    'l', 'e', 't', 'e', 'd', '\\', 'n' };

  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m2 = mxCreateCharArray(2, iv10);
  for (i = 0; i < 7; i++) {
    cv18[i] = cv19[i];
  }

  emlrtInitCharArrayR2013a(sp, 7, m2, cv18);
  emlrtAssign(&y, m2);
  b_y = NULL;
  m2 = mxCreateDoubleScalar(1.0);
  emlrtAssign(&b_y, m2);
  c_y = NULL;
  m2 = mxCreateCharArray(2, iv11);
  for (i = 0; i < 31; i++) {
    cv20[i] = cv21[i];
  }

  emlrtInitCharArrayR2013a(sp, 31, m2, cv20);
  emlrtAssign(&c_y, m2);
  st.site = &cb_emlrtRSI;
  return e_emlrt_marshallIn(&st, feval(&st, y, b_y, c_y, &r_emlrtMCI), "feval");
}

static real_T f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = i_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static const mxArray *feval(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, emlrtMCInfo *location)
{
  const mxArray *pArrays[3];
  const mxArray *m11;
  pArrays[0] = b;
  pArrays[1] = c;
  pArrays[2] = d;
  return emlrtCallMATLABR2012b(sp, 1, &m11, 3, pArrays, "feval", TRUE, location);
}

static real_T i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId)
{
  real_T ret;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", FALSE, 0U, 0);
  ret = *(real_T *)mxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

void b_fprintf(const emlrtStack *sp)
{
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &ab_emlrtRSI;
  c_fprintf(&st);
}

void d_fprintf(const emlrtStack *sp)
{
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &ab_emlrtRSI;
  e_fprintf(&st);
}

/* End of code generation (fprintf.c) */
