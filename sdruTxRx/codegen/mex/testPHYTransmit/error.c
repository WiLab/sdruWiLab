/*
 * error.c
 *
 * Code generation for function 'error'
 *
 * C source code generated on: Thu Feb 27 11:47:47 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testPHYTransmit.h"
#include "error.h"

/* Variable Definitions */
static emlrtMCInfo r_emlrtMCI = { 16, 1, "error",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/lang/error.m" };

static emlrtRSInfo xm_emlrtRSI = { 16, "error",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/lang/error.m" };

/* Function Declarations */
static void d_error(const emlrtStack *sp, const mxArray *b, const mxArray *c,
                    emlrtMCInfo *location);

/* Function Definitions */
static void d_error(const emlrtStack *sp, const mxArray *b, const mxArray *c,
                    emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  pArrays[0] = b;
  pArrays[1] = c;
  emlrtCallMATLABR2012b(sp, 0, NULL, 2, pArrays, "error", TRUE, location);
}

void b_error(const emlrtStack *sp, const char_T varargin_2_data[1024], const
             int32_T varargin_2_size[2])
{
  const mxArray *y;
  static const int32_T iv138[2] = { 1, 37 };

  const mxArray *m25;
  char_T cv172[37];
  int32_T i;
  static const char_T cv173[37] = { 's', 'd', 'r', 'u', ':', 'S', 'D', 'R', 'u',
    'R', 'e', 'c', 'e', 'i', 'v', 'e', 'r', ':', 'R', 'e', 'c', 'e', 'i', 'v',
    'e', 'U', 'n', 's', 'u', 'c', 'c', 'e', 's', 's', 'f', 'u', 'l' };

  int32_T u_size[2];
  int32_T i18;
  char_T u_data[1024];
  const mxArray *b_y;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m25 = mxCreateCharArray(2, iv138);
  for (i = 0; i < 37; i++) {
    cv172[i] = cv173[i];
  }

  emlrtInitCharArrayR2013a(sp, 37, m25, cv172);
  emlrtAssign(&y, m25);
  u_size[0] = 1;
  u_size[1] = varargin_2_size[1];
  i = varargin_2_size[0] * varargin_2_size[1];
  for (i18 = 0; i18 < i; i18++) {
    u_data[i18] = varargin_2_data[i18];
  }

  b_y = NULL;
  m25 = mxCreateCharArray(2, u_size);
  emlrtInitCharArrayR2013a(sp, u_size[1], m25, (char_T *)&u_data);
  emlrtAssign(&b_y, m25);
  st.site = &xm_emlrtRSI;
  d_error(&st, y, b_y, &r_emlrtMCI);
}

void error(const emlrtStack *sp, const char_T varargin_2_data[1024], const
           int32_T varargin_2_size[2])
{
  const mxArray *y;
  static const int32_T iv119[2] = { 1, 41 };

  const mxArray *m21;
  char_T cv145[41];
  int32_T i;
  static const char_T cv146[41] = { 's', 'd', 'r', 'u', ':', 'S', 'D', 'R', 'u',
    'T', 'r', 'a', 'n', 's', 'm', 'i', 't', 't', 'e', 'r', ':', 'T', 'r', 'a',
    'n', 's', 'm', 'i', 't', 'U', 'n', 's', 'u', 'c', 'c', 'e', 's', 's', 'f',
    'u', 'l' };

  int32_T u_size[2];
  int32_T i16;
  char_T u_data[1024];
  const mxArray *b_y;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m21 = mxCreateCharArray(2, iv119);
  for (i = 0; i < 41; i++) {
    cv145[i] = cv146[i];
  }

  emlrtInitCharArrayR2013a(sp, 41, m21, cv145);
  emlrtAssign(&y, m21);
  u_size[0] = 1;
  u_size[1] = varargin_2_size[1];
  i = varargin_2_size[0] * varargin_2_size[1];
  for (i16 = 0; i16 < i; i16++) {
    u_data[i16] = varargin_2_data[i16];
  }

  b_y = NULL;
  m21 = mxCreateCharArray(2, u_size);
  emlrtInitCharArrayR2013a(sp, u_size[1], m21, (char_T *)&u_data);
  emlrtAssign(&b_y, m21);
  st.site = &xm_emlrtRSI;
  d_error(&st, y, b_y, &r_emlrtMCI);
}

/* End of code generation (error.c) */
