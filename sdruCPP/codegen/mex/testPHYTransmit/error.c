/*
 * error.c
 *
 * Code generation for function 'error'
 *
 * C source code generated on: Fri Apr 18 16:24:32 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testPHYTransmit.h"
#include "error.h"
#include <stdio.h>

/* Variable Definitions */
static emlrtRSInfo yf_emlrtRSI = { 16, "error",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/lang/error.m" };

static emlrtMCInfo t_emlrtMCI = { 16, 1, "error",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/lang/error.m" };

/* Function Declarations */
static void c_error(const mxArray *b, const mxArray *c, emlrtMCInfo *location);

/* Function Definitions */
static void c_error(const mxArray *b, const mxArray *c, emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  pArrays[0] = b;
  pArrays[1] = c;
  emlrtCallMATLABR2012b(emlrtRootTLSGlobal, 0, NULL, 2, pArrays, "error", TRUE,
                        location);
}

void error(const char_T varargin_2_data[1024], const int32_T varargin_2_size[2])
{
  const mxArray *y;
  static const int32_T iv119[2] = { 1, 41 };

  const mxArray *m24;
  char_T cv129[41];
  int32_T i;
  static const char_T cv130[41] = { 's', 'd', 'r', 'u', ':', 'S', 'D', 'R', 'u',
    'T', 'r', 'a', 'n', 's', 'm', 'i', 't', 't', 'e', 'r', ':', 'T', 'r', 'a',
    'n', 's', 'm', 'i', 't', 'U', 'n', 's', 'u', 'c', 'c', 'e', 's', 's', 'f',
    'u', 'l' };

  int32_T u_size[2];
  int32_T i21;
  char_T u_data[1024];
  const mxArray *b_y;
  emlrtPushRtStackR2012b(&yf_emlrtRSI, emlrtRootTLSGlobal);
  y = NULL;
  m24 = mxCreateCharArray(2, iv119);
  for (i = 0; i < 41; i++) {
    cv129[i] = cv130[i];
  }

  emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 41, m24, cv129);
  emlrtAssign(&y, m24);
  u_size[0] = 1;
  u_size[1] = varargin_2_size[1];
  i = varargin_2_size[0] * varargin_2_size[1];
  for (i21 = 0; i21 < i; i21++) {
    u_data[i21] = varargin_2_data[i21];
  }

  b_y = NULL;
  m24 = mxCreateCharArray(2, u_size);
  emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, u_size[1], m24, (char_T *)&u_data);
  emlrtAssign(&b_y, m24);
  c_error(y, b_y, &t_emlrtMCI);
  emlrtPopRtStackR2012b(&yf_emlrtRSI, emlrtRootTLSGlobal);
}

/* End of code generation (error.c) */
