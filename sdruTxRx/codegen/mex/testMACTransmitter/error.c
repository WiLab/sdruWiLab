/*
 * error.c
 *
 * Code generation for function 'error'
 *
 * C source code generated on: Thu Mar  6 22:22:40 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testMACTransmitter.h"
#include "error.h"
#include <stdio.h>

/* Variable Definitions */
static emlrtMCInfo r_emlrtMCI = { 16, 1, "error",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/lang/error.m" };

static emlrtRSInfo acb_emlrtRSI = { 16, "error",
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
  static const int32_T iv174[2] = { 1, 41 };

  const mxArray *m31;
  char_T cv203[41];
  int32_T i;
  static const char_T cv204[41] = { 's', 'd', 'r', 'u', ':', 'S', 'D', 'R', 'u',
    'T', 'r', 'a', 'n', 's', 'm', 'i', 't', 't', 'e', 'r', ':', 'T', 'r', 'a',
    'n', 's', 'm', 'i', 't', 'U', 'n', 's', 'u', 'c', 'c', 'e', 's', 's', 'f',
    'u', 'l' };

  int32_T u_size[2];
  int32_T i20;
  char_T u_data[1024];
  const mxArray *b_y;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m31 = mxCreateCharArray(2, iv174);
  for (i = 0; i < 41; i++) {
    cv203[i] = cv204[i];
  }

  emlrtInitCharArrayR2013a(sp, 41, m31, cv203);
  emlrtAssign(&y, m31);
  u_size[0] = 1;
  u_size[1] = varargin_2_size[1];
  i = varargin_2_size[0] * varargin_2_size[1];
  for (i20 = 0; i20 < i; i20++) {
    u_data[i20] = varargin_2_data[i20];
  }

  b_y = NULL;
  m31 = mxCreateCharArray(2, u_size);
  emlrtInitCharArrayR2013a(sp, u_size[1], m31, (char_T *)&u_data);
  emlrtAssign(&b_y, m31);
  st.site = &acb_emlrtRSI;
  d_error(&st, y, b_y, &r_emlrtMCI);
}

void error(const emlrtStack *sp, const char_T varargin_2_data[1024], const
           int32_T varargin_2_size[2])
{
  const mxArray *y;
  static const int32_T iv122[2] = { 1, 37 };

  const mxArray *m20;
  char_T cv141[37];
  int32_T i;
  static const char_T cv142[37] = { 's', 'd', 'r', 'u', ':', 'S', 'D', 'R', 'u',
    'R', 'e', 'c', 'e', 'i', 'v', 'e', 'r', ':', 'R', 'e', 'c', 'e', 'i', 'v',
    'e', 'U', 'n', 's', 'u', 'c', 'c', 'e', 's', 's', 'f', 'u', 'l' };

  int32_T u_size[2];
  int32_T i17;
  char_T u_data[1024];
  const mxArray *b_y;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m20 = mxCreateCharArray(2, iv122);
  for (i = 0; i < 37; i++) {
    cv141[i] = cv142[i];
  }

  emlrtInitCharArrayR2013a(sp, 37, m20, cv141);
  emlrtAssign(&y, m20);
  u_size[0] = 1;
  u_size[1] = varargin_2_size[1];
  i = varargin_2_size[0] * varargin_2_size[1];
  for (i17 = 0; i17 < i; i17++) {
    u_data[i17] = varargin_2_data[i17];
  }

  b_y = NULL;
  m20 = mxCreateCharArray(2, u_size);
  emlrtInitCharArrayR2013a(sp, u_size[1], m20, (char_T *)&u_data);
  emlrtAssign(&b_y, m20);
  st.site = &acb_emlrtRSI;
  d_error(&st, y, b_y, &r_emlrtMCI);
}

/* End of code generation (error.c) */
