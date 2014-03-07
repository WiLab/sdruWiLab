/*
 * fprintf.c
 *
 * Code generation for function 'fprintf'
 *
 * C source code generated on: Thu Mar  6 23:19:56 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testSpectrumSenseP25.h"
#include "fprintf.h"
#include "OFDMletters2bits.h"
#include "testSpectrumSenseP25_mexutil.h"
#include <stdio.h>

/* Variable Definitions */
static emlrtRSInfo tq_emlrtRSI = { 38, "fprintf",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/lang/fprintf.m" };

static emlrtMCInfo w_emlrtMCI = { 74, 14, "fprintf",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/lang/fprintf.m" };

static emlrtRSInfo fr_emlrtRSI = { 74, "fprintf",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/lang/fprintf.m" };

/* Function Declarations */
static real_T c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_feval,
  const char_T *identifier);
static real_T c_fprintf(const emlrtStack *sp, int16_T varargin_1);
static real_T d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
static const mxArray *feval(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, const mxArray *e, const mxArray *f, emlrtMCInfo *
  location);

/* Function Definitions */
static real_T c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_feval,
  const char_T *identifier)
{
  real_T y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  y = d_emlrt_marshallIn(sp, emlrtAlias(b_feval), &thisId);
  emlrtDestroyArray(&b_feval);
  return y;
}

static real_T c_fprintf(const emlrtStack *sp, int16_T varargin_1)
{
  const mxArray *y;
  static const int32_T iv108[2] = { 1, 7 };

  const mxArray *m20;
  char_T cv123[7];
  int32_T i;
  static const char_T cv124[7] = { 'f', 'p', 'r', 'i', 'n', 't', 'f' };

  const mxArray *b_y;
  const mxArray *c_y;
  static const int32_T iv109[2] = { 1, 17 };

  char_T cv125[17];
  static const char_T cv126[17] = { 'D', 'e', 'c', 'i', 's', 'i', 'o', 'n', ' ',
    '%', 'd', ':', ' ', '%', 'd', '\\', 'n' };

  const mxArray *d_y;
  const mxArray *e_y;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m20 = mxCreateCharArray(2, iv108);
  for (i = 0; i < 7; i++) {
    cv123[i] = cv124[i];
  }

  emlrtInitCharArrayR2013a(sp, 7, m20, cv123);
  emlrtAssign(&y, m20);
  b_y = NULL;
  m20 = mxCreateDoubleScalar(1.0);
  emlrtAssign(&b_y, m20);
  c_y = NULL;
  m20 = mxCreateCharArray(2, iv109);
  for (i = 0; i < 17; i++) {
    cv125[i] = cv126[i];
  }

  emlrtInitCharArrayR2013a(sp, 17, m20, cv125);
  emlrtAssign(&c_y, m20);
  d_y = NULL;
  m20 = mxCreateNumericMatrix(1, 1, mxINT16_CLASS, mxREAL);
  *(int16_T *)mxGetData(m20) = varargin_1;
  emlrtAssign(&d_y, m20);
  e_y = NULL;
  m20 = mxCreateNumericMatrix(1, 1, mxINT16_CLASS, mxREAL);
  *(int16_T *)mxGetData(m20) = 0;
  emlrtAssign(&e_y, m20);
  st.site = &fr_emlrtRSI;
  return c_emlrt_marshallIn(&st, feval(&st, y, b_y, c_y, d_y, e_y, &w_emlrtMCI),
    "feval");
}

static real_T d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = e_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static const mxArray *feval(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, const mxArray *e, const mxArray *f, emlrtMCInfo *
  location)
{
  const mxArray *pArrays[5];
  const mxArray *m26;
  pArrays[0] = b;
  pArrays[1] = c;
  pArrays[2] = d;
  pArrays[3] = e;
  pArrays[4] = f;
  return emlrtCallMATLABR2012b(sp, 1, &m26, 5, pArrays, "feval", TRUE, location);
}

void b_fprintf(const emlrtStack *sp, int16_T formatSpec)
{
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &tq_emlrtRSI;
  c_fprintf(&st, formatSpec);
}

/* End of code generation (fprintf.c) */
