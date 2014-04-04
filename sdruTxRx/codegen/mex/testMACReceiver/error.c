/*
 * error.c
 *
 * Code generation for function 'error'
 *
 * C source code generated on: Thu Apr  3 19:51:42 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testMACReceiver.h"
#include "error.h"

/* Variable Definitions */
static emlrtRSInfo gg_emlrtRSI = { 16, "error",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/lang/error.m" };

static emlrtMCInfo s_emlrtMCI = { 16, 1, "error",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/lang/error.m" };

/* Function Declarations */
static void d_error(const mxArray *b, const mxArray *c, emlrtMCInfo *location);

/* Function Definitions */
static void d_error(const mxArray *b, const mxArray *c, emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  pArrays[0] = b;
  pArrays[1] = c;
  emlrtCallMATLABR2012b(emlrtRootTLSGlobal, 0, NULL, 2, pArrays, "error", TRUE,
                        location);
}

void b_error(const char_T varargin_2_data[1024], const int32_T varargin_2_size[2])
{
  const mxArray *y;
  static const int32_T iv184[2] = { 1, 41 };

  const mxArray *m39;
  char_T cv222[41];
  int32_T i;
  static const char_T cv223[41] = { 's', 'd', 'r', 'u', ':', 'S', 'D', 'R', 'u',
    'T', 'r', 'a', 'n', 's', 'm', 'i', 't', 't', 'e', 'r', ':', 'T', 'r', 'a',
    'n', 's', 'm', 'i', 't', 'U', 'n', 's', 'u', 'c', 'c', 'e', 's', 's', 'f',
    'u', 'l' };

  int32_T u_size[2];
  int32_T i33;
  char_T u_data[1024];
  const mxArray *b_y;
  emlrtPushRtStackR2012b(&gg_emlrtRSI, emlrtRootTLSGlobal);
  y = NULL;
  m39 = mxCreateCharArray(2, iv184);
  for (i = 0; i < 41; i++) {
    cv222[i] = cv223[i];
  }

  emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 41, m39, cv222);
  emlrtAssign(&y, m39);
  u_size[0] = 1;
  u_size[1] = varargin_2_size[1];
  i = varargin_2_size[0] * varargin_2_size[1];
  for (i33 = 0; i33 < i; i33++) {
    u_data[i33] = varargin_2_data[i33];
  }

  b_y = NULL;
  m39 = mxCreateCharArray(2, u_size);
  emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, u_size[1], m39, (char_T *)&u_data);
  emlrtAssign(&b_y, m39);
  d_error(y, b_y, &s_emlrtMCI);
  emlrtPopRtStackR2012b(&gg_emlrtRSI, emlrtRootTLSGlobal);
}

void error(const char_T varargin_2_data[1024], const int32_T varargin_2_size[2])
{
  const mxArray *y;
  static const int32_T iv113[2] = { 1, 37 };

  const mxArray *m22;
  char_T cv125[37];
  int32_T i;
  static const char_T cv126[37] = { 's', 'd', 'r', 'u', ':', 'S', 'D', 'R', 'u',
    'R', 'e', 'c', 'e', 'i', 'v', 'e', 'r', ':', 'R', 'e', 'c', 'e', 'i', 'v',
    'e', 'U', 'n', 's', 'u', 'c', 'c', 'e', 's', 's', 'f', 'u', 'l' };

  int32_T u_size[2];
  int32_T i18;
  char_T u_data[1024];
  const mxArray *b_y;
  emlrtPushRtStackR2012b(&gg_emlrtRSI, emlrtRootTLSGlobal);
  y = NULL;
  m22 = mxCreateCharArray(2, iv113);
  for (i = 0; i < 37; i++) {
    cv125[i] = cv126[i];
  }

  emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 37, m22, cv125);
  emlrtAssign(&y, m22);
  u_size[0] = 1;
  u_size[1] = varargin_2_size[1];
  i = varargin_2_size[0] * varargin_2_size[1];
  for (i18 = 0; i18 < i; i18++) {
    u_data[i18] = varargin_2_data[i18];
  }

  b_y = NULL;
  m22 = mxCreateCharArray(2, u_size);
  emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, u_size[1], m22, (char_T *)&u_data);
  emlrtAssign(&b_y, m22);
  d_error(y, b_y, &s_emlrtMCI);
  emlrtPopRtStackR2012b(&gg_emlrtRSI, emlrtRootTLSGlobal);
}

/* End of code generation (error.c) */
