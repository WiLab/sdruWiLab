/*
 * fprintf.c
 *
 * Code generation for function 'fprintf'
 *
 * C source code generated on: Thu Apr  3 19:36:38 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testPHYReceive.h"
#include "fprintf.h"
#include "generateOFDMSignal_TX2.h"
#include "testPHYReceive_mexutil.h"
#include <stdio.h>

/* Variable Definitions */
static emlrtRSInfo pj_emlrtRSI = { 33, "fprintf",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/lang/fprintf.m" };

static emlrtRSInfo qj_emlrtRSI = { 66, "fprintf",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/lang/fprintf.m" };

static emlrtMCInfo wb_emlrtMCI = { 66, 14, "fprintf",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/lang/fprintf.m" };

/* Function Declarations */
static real_T c_fprintf(const char_T varargin_1_data[77], const int32_T
  varargin_1_size[2]);
static const mxArray *feval(const mxArray *b, const mxArray *c, const mxArray *d,
  const mxArray *e, emlrtMCInfo *location);

/* Function Definitions */
static real_T c_fprintf(const char_T varargin_1_data[77], const int32_T
  varargin_1_size[2])
{
  real_T nbytes;
  const mxArray *y;
  static const int32_T iv126[2] = { 1, 7 };

  const mxArray *m29;
  char_T cv145[7];
  int32_T i;
  static const char_T cv146[7] = { 'f', 'p', 'r', 'i', 'n', 't', 'f' };

  const mxArray *b_y;
  const mxArray *c_y;
  static const int32_T iv127[2] = { 1, 17 };

  char_T cv147[17];
  static const char_T cv148[17] = { 'G', 'o', 't', ' ', 'M', 'e', 's', 's', 'a',
    'g', 'e', ':', ' ', '%', 's', '\\', 'n' };

  int32_T u_size[2];
  int32_T i29;
  char_T u_data[77];
  const mxArray *d_y;
  emlrtPushRtStackR2012b(&qj_emlrtRSI, emlrtRootTLSGlobal);
  y = NULL;
  m29 = mxCreateCharArray(2, iv126);
  for (i = 0; i < 7; i++) {
    cv145[i] = cv146[i];
  }

  emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 7, m29, cv145);
  emlrtAssign(&y, m29);
  b_y = NULL;
  m29 = mxCreateDoubleScalar(1.0);
  emlrtAssign(&b_y, m29);
  c_y = NULL;
  m29 = mxCreateCharArray(2, iv127);
  for (i = 0; i < 17; i++) {
    cv147[i] = cv148[i];
  }

  emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 17, m29, cv147);
  emlrtAssign(&c_y, m29);
  u_size[0] = 1;
  u_size[1] = varargin_1_size[1];
  i = varargin_1_size[0] * varargin_1_size[1];
  for (i29 = 0; i29 < i; i29++) {
    u_data[i29] = varargin_1_data[i29];
  }

  d_y = NULL;
  m29 = mxCreateCharArray(2, u_size);
  emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, u_size[1], m29, (char_T *)&u_data);
  emlrtAssign(&d_y, m29);
  nbytes = emlrt_marshallIn(feval(y, b_y, c_y, d_y, &wb_emlrtMCI), "feval");
  emlrtPopRtStackR2012b(&qj_emlrtRSI, emlrtRootTLSGlobal);
  return nbytes;
}

static const mxArray *feval(const mxArray *b, const mxArray *c, const mxArray *d,
  const mxArray *e, emlrtMCInfo *location)
{
  const mxArray *pArrays[4];
  const mxArray *m37;
  pArrays[0] = b;
  pArrays[1] = c;
  pArrays[2] = d;
  pArrays[3] = e;
  return emlrtCallMATLABR2012b(emlrtRootTLSGlobal, 1, &m37, 4, pArrays, "feval",
    TRUE, location);
}

void b_fprintf(const char_T formatSpec_data[77], const int32_T formatSpec_size[2])
{
  emlrtPushRtStackR2012b(&pj_emlrtRSI, emlrtRootTLSGlobal);
  c_fprintf(formatSpec_data, formatSpec_size);
  emlrtPopRtStackR2012b(&pj_emlrtRSI, emlrtRootTLSGlobal);
}

/* End of code generation (fprintf.c) */
