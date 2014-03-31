/*
 * colon.c
 *
 * Code generation for function 'colon'
 *
 * C source code generated on: Thu Mar  6 22:22:39 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testMACTransmitter.h"
#include "colon.h"
#include "OFDMDemodulator.h"
#include "testMACTransmitter_mexutil.h"
#include "testMACTransmitter_data.h"
#include <stdio.h>

/* Function Definitions */
void assert_pmaxsize(const emlrtStack *sp, boolean_T p)
{
  const mxArray *y;
  static const int32_T iv127[2] = { 1, 21 };

  const mxArray *m22;
  char_T cv147[21];
  int32_T i;
  static const char_T cv148[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
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
    m22 = mxCreateCharArray(2, iv127);
    for (i = 0; i < 21; i++) {
      cv147[i] = cv148[i];
    }

    emlrtInitCharArrayR2013a(sp, 21, m22, cv147);
    emlrtAssign(&y, m22);
    st.site = &nbb_emlrtRSI;
    b_st.site = &tbb_emlrtRSI;
    c_error(&st, b_message(&b_st, y, &s_emlrtMCI), &t_emlrtMCI);
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
