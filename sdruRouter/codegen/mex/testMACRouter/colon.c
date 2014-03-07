/*
 * colon.c
 *
 * Code generation for function 'colon'
 *
 * C source code generated on: Thu Mar  6 21:20:54 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testMACRouter.h"
#include "colon.h"
#include "OFDMDemodulator.h"
#include "SystemCore.h"
#include "testMACRouter_mexutil.h"
#include <stdio.h>

/* Variable Definitions */
static emlrtMCInfo t_emlrtMCI = { 405, 5, "colon",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/colon.m" };

static emlrtMCInfo u_emlrtMCI = { 404, 15, "colon",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/colon.m" };

static emlrtRSInfo nv_emlrtRSI = { 404, "colon",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/colon.m" };

static emlrtRSInfo xv_emlrtRSI = { 405, "colon",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/colon.m" };

/* Function Definitions */
void assert_pmaxsize(const emlrtStack *sp, boolean_T p)
{
  const mxArray *y;
  static const int32_T iv113[2] = { 1, 21 };

  const mxArray *m21;
  char_T cv126[21];
  int32_T i;
  static const char_T cv127[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'p', 'm', 'a', 'x', 's', 'i', 'z', 'e' };

  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = sp;
  b_st.tls = sp->tls;
  if (p) {
  } else {
    y = NULL;
    m21 = mxCreateCharArray(2, iv113);
    for (i = 0; i < 21; i++) {
      cv126[i] = cv127[i];
    }

    emlrtInitCharArrayR2013a(sp, 21, m21, cv126);
    emlrtAssign(&y, m21);
    st.site = &nv_emlrtRSI;
    b_st.site = &xv_emlrtRSI;
    c_error(&st, b_message(&b_st, y, &t_emlrtMCI), &u_emlrtMCI);
  }
}

void b_float_colon_length(int32_T *n, real_T *anew, real_T *bnew, boolean_T
  *n_too_large)
{
  *anew = 0.0;
  *bnew = 0.0002558;
  *n_too_large = FALSE;
  *n = 1280;
}

void float_colon_length(int32_T *n, real_T *anew, real_T *bnew, boolean_T
  *n_too_large)
{
  *anew = -1230.0;
  *bnew = 1230.0;
  *n_too_large = FALSE;
  *n = 2461;
}

/* End of code generation (colon.c) */
