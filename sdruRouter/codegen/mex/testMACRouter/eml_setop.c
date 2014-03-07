/*
 * eml_setop.c
 *
 * Code generation for function 'eml_setop'
 *
 * C source code generated on: Thu Mar  6 21:20:56 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testMACRouter.h"
#include "eml_setop.h"
#include "SystemCore.h"
#include "eml_error.h"
#include "testMACRouter_mexutil.h"
#include <stdio.h>

/* Variable Definitions */
static emlrtRSInfo dq_emlrtRSI = { 156, "eml_setop",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/eml_setop.m" };

static emlrtRSInfo eq_emlrtRSI = { 221, "eml_setop",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/eml_setop.m" };

static emlrtRSInfo fq_emlrtRSI = { 222, "eml_setop",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/eml_setop.m" };

static emlrtRSInfo gq_emlrtRSI = { 224, "eml_setop",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/eml_setop.m" };

static emlrtRSInfo hq_emlrtRSI = { 225, "eml_setop",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/eml_setop.m" };

static emlrtRSInfo iq_emlrtRSI = { 255, "eml_setop",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/eml_setop.m" };

static emlrtRSInfo jq_emlrtRSI = { 256, "eml_setop",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/eml_setop.m" };

static emlrtRSInfo kq_emlrtRSI = { 258, "eml_setop",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/eml_setop.m" };

static emlrtRSInfo lq_emlrtRSI = { 260, "eml_setop",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/eml_setop.m" };

static emlrtRSInfo mq_emlrtRSI = { 288, "eml_setop",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/eml_setop.m" };

static emlrtRSInfo nq_emlrtRSI = { 290, "eml_setop",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/eml_setop.m" };

static emlrtRSInfo oq_emlrtRSI = { 292, "eml_setop",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/eml_setop.m" };

static emlrtRSInfo pq_emlrtRSI = { 306, "eml_setop",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/eml_setop.m" };

static emlrtRSInfo qq_emlrtRSI = { 334, "eml_setop",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/eml_setop.m" };

static emlrtMCInfo ab_emlrtMCI = { 389, 5, "eml_setop",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/eml_setop.m" };

static emlrtMCInfo bb_emlrtMCI = { 400, 9, "eml_setop",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/eml_setop.m" };

static emlrtMCInfo cb_emlrtMCI = { 427, 5, "eml_setop",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/eml_setop.m" };

static emlrtRSInfo kv_emlrtRSI = { 427, "eml_setop",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/eml_setop.m" };

static emlrtRSInfo lv_emlrtRSI = { 400, "eml_setop",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/eml_setop.m" };

static emlrtRSInfo mv_emlrtRSI = { 389, "eml_setop",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/eml_setop.m" };

/* Function Definitions */
void do_vectors(const emlrtStack *sp, const real_T a_data[1224], const int32_T
                a_size[1], const real_T b[8], real_T c_data[8], int32_T c_size[1],
                int32_T ia_data[8], int32_T ia_size[1], int32_T ib_data[8],
                int32_T ib_size[1])
{
  int32_T ncmax;
  boolean_T y;
  int32_T ialast;
  boolean_T exitg4;
  boolean_T guard9 = FALSE;
  boolean_T p;
  boolean_T exitg3;
  boolean_T guard8 = FALSE;
  int32_T nc;
  int32_T iafirst;
  int32_T ibfirst;
  int32_T iblast;
  int32_T b_ialast;
  real_T ak;
  boolean_T exitg2;
  real_T absxk;
  int32_T exponent;
  boolean_T guard6 = FALSE;
  boolean_T guard7 = FALSE;
  int32_T b_iblast;
  real_T bk;
  boolean_T exitg1;
  int32_T b_exponent;
  boolean_T guard4 = FALSE;
  boolean_T guard5 = FALSE;
  int32_T c_exponent;
  boolean_T guard2 = FALSE;
  boolean_T guard3 = FALSE;
  boolean_T guard1 = FALSE;
  const mxArray *b_y;
  const mxArray *m22;
  int32_T b_ia_data[8];
  const mxArray *c_y;
  const mxArray *d_y;
  real_T b_c_data[8];
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &dq_emlrtRSI;
  ncmax = muIntScalarMin_sint32(a_size[0], 8);
  c_size[0] = (int8_T)ncmax;
  ia_size[0] = ncmax;
  ib_size[0] = ncmax;
  st.site = &eq_emlrtRSI;
  y = TRUE;
  if (a_size[0] == 0) {
  } else {
    ialast = 1;
    exitg4 = FALSE;
    while ((exitg4 == FALSE) && (ialast <= a_size[0] - 1)) {
      guard9 = FALSE;
      if (a_data[ialast - 1] <= a_data[ialast]) {
        guard9 = TRUE;
      } else if (muDoubleScalarIsNaN(a_data[ialast])) {
        guard9 = TRUE;
      } else {
        p = FALSE;
      }

      if (guard9 == TRUE) {
        p = TRUE;
      }

      if (!p) {
        y = FALSE;
        exitg4 = TRUE;
      } else {
        ialast++;
      }
    }
  }

  if (!y) {
    st.site = &fq_emlrtRSI;
    eml_error(&st);
  }

  st.site = &gq_emlrtRSI;
  y = TRUE;
  ialast = 1;
  exitg3 = FALSE;
  while ((exitg3 == FALSE) && (ialast < 8)) {
    guard8 = FALSE;
    if (b[ialast - 1] <= b[ialast]) {
      guard8 = TRUE;
    } else if (muDoubleScalarIsNaN(b[ialast])) {
      guard8 = TRUE;
    } else {
      p = FALSE;
    }

    if (guard8 == TRUE) {
      p = TRUE;
    }

    if (!p) {
      y = FALSE;
      exitg3 = TRUE;
    } else {
      ialast++;
    }
  }

  if (!y) {
    st.site = &hq_emlrtRSI;
    b_eml_error(&st);
  }

  nc = 0;
  iafirst = 0;
  ialast = 0;
  ibfirst = 0;
  iblast = 0;
  while ((ialast + 1 <= a_size[0]) && (iblast + 1 <= 8)) {
    st.site = &iq_emlrtRSI;
    b_ialast = ialast + 1;
    ak = a_data[ialast];
    exitg2 = FALSE;
    while ((exitg2 == FALSE) && (b_ialast < a_size[0])) {
      absxk = muDoubleScalarAbs(a_data[ialast] / 2.0);
      if ((!muDoubleScalarIsInf(absxk)) && (!muDoubleScalarIsNaN(absxk))) {
        if (absxk <= 2.2250738585072014E-308) {
          absxk = 4.94065645841247E-324;
        } else {
          frexp(absxk, &exponent);
          absxk = ldexp(1.0, exponent - 53);
        }
      } else {
        absxk = rtNaN;
      }

      guard6 = FALSE;
      guard7 = FALSE;
      if (muDoubleScalarAbs(a_data[ialast] - a_data[b_ialast]) < absxk) {
        guard7 = TRUE;
      } else if (muDoubleScalarIsInf(a_data[b_ialast])) {
        if (muDoubleScalarIsInf(a_data[ialast]) && ((a_data[b_ialast] > 0.0) ==
             (a_data[ialast] > 0.0))) {
          guard7 = TRUE;
        } else {
          guard6 = TRUE;
        }
      } else {
        guard6 = TRUE;
      }

      if (guard7 == TRUE) {
        p = TRUE;
      }

      if (guard6 == TRUE) {
        p = FALSE;
      }

      if (p) {
        b_ialast++;
      } else {
        exitg2 = TRUE;
      }
    }

    ialast = b_ialast - 1;
    st.site = &jq_emlrtRSI;
    b_iblast = iblast + 1;
    bk = b[iblast];
    exitg1 = FALSE;
    while ((exitg1 == FALSE) && (b_iblast < 8)) {
      absxk = muDoubleScalarAbs(b[iblast] / 2.0);
      if ((!muDoubleScalarIsInf(absxk)) && (!muDoubleScalarIsNaN(absxk))) {
        if (absxk <= 2.2250738585072014E-308) {
          absxk = 4.94065645841247E-324;
        } else {
          frexp(absxk, &b_exponent);
          absxk = ldexp(1.0, b_exponent - 53);
        }
      } else {
        absxk = rtNaN;
      }

      guard4 = FALSE;
      guard5 = FALSE;
      if (muDoubleScalarAbs(b[iblast] - b[b_iblast]) < absxk) {
        guard5 = TRUE;
      } else if (muDoubleScalarIsInf(b[b_iblast])) {
        if (muDoubleScalarIsInf(b[iblast]) && ((b[b_iblast] > 0.0) == (b[iblast]
              > 0.0))) {
          guard5 = TRUE;
        } else {
          guard4 = TRUE;
        }
      } else {
        guard4 = TRUE;
      }

      if (guard5 == TRUE) {
        p = TRUE;
      }

      if (guard4 == TRUE) {
        p = FALSE;
      }

      if (p) {
        b_iblast++;
      } else {
        exitg1 = TRUE;
      }
    }

    iblast = b_iblast - 1;
    st.site = &kq_emlrtRSI;
    absxk = muDoubleScalarAbs(bk / 2.0);
    if ((!muDoubleScalarIsInf(absxk)) && (!muDoubleScalarIsNaN(absxk))) {
      if (absxk <= 2.2250738585072014E-308) {
        absxk = 4.94065645841247E-324;
      } else {
        frexp(absxk, &c_exponent);
        absxk = ldexp(1.0, c_exponent - 53);
      }
    } else {
      absxk = rtNaN;
    }

    guard2 = FALSE;
    guard3 = FALSE;
    if (muDoubleScalarAbs(bk - ak) < absxk) {
      guard3 = TRUE;
    } else if (muDoubleScalarIsInf(ak)) {
      if (muDoubleScalarIsInf(bk) && ((ak > 0.0) == (bk > 0.0))) {
        guard3 = TRUE;
      } else {
        guard2 = TRUE;
      }
    } else {
      guard2 = TRUE;
    }

    if (guard3 == TRUE) {
      p = TRUE;
    }

    if (guard2 == TRUE) {
      p = FALSE;
    }

    if (p) {
      st.site = &lq_emlrtRSI;
      nc++;
      c_data[nc - 1] = ak;
      ia_data[nc - 1] = iafirst + 1;
      ib_data[nc - 1] = ibfirst + 1;
      st.site = &mq_emlrtRSI;
      ialast = b_ialast;
      iafirst = b_ialast;
      st.site = &nq_emlrtRSI;
      iblast = b_iblast;
      ibfirst = b_iblast;
    } else {
      st.site = &oq_emlrtRSI;
      guard1 = FALSE;
      if (ak < bk) {
        guard1 = TRUE;
      } else if (muDoubleScalarIsNaN(bk)) {
        guard1 = TRUE;
      } else {
        p = FALSE;
      }

      if (guard1 == TRUE) {
        p = TRUE;
      }

      if (p) {
        st.site = &pq_emlrtRSI;
        ialast = b_ialast;
        iafirst = b_ialast;
      } else {
        st.site = &qq_emlrtRSI;
        iblast = b_iblast;
        ibfirst = b_iblast;
      }
    }
  }

  if (ncmax > 0) {
    if (nc <= ncmax) {
    } else {
      b_y = NULL;
      m22 = mxCreateString("Assertion failed.");
      emlrtAssign(&b_y, m22);
      st.site = &mv_emlrtRSI;
      c_error(&st, b_y, &ab_emlrtMCI);
    }

    if (1 > nc) {
      ialast = 0;
    } else {
      ialast = nc;
    }

    for (iafirst = 0; iafirst < ialast; iafirst++) {
      b_ia_data[iafirst] = ia_data[iafirst];
    }

    ia_size[0] = ialast;
    for (iafirst = 0; iafirst < ialast; iafirst++) {
      ia_data[iafirst] = b_ia_data[iafirst];
    }
  }

  if (ncmax > 0) {
    if (nc <= ncmax) {
    } else {
      c_y = NULL;
      m22 = mxCreateString("Assertion failed.");
      emlrtAssign(&c_y, m22);
      st.site = &lv_emlrtRSI;
      c_error(&st, c_y, &bb_emlrtMCI);
    }

    if (1 > nc) {
      ialast = 0;
    } else {
      ialast = nc;
    }

    for (iafirst = 0; iafirst < ialast; iafirst++) {
      b_ia_data[iafirst] = ib_data[iafirst];
    }

    ib_size[0] = ialast;
    for (iafirst = 0; iafirst < ialast; iafirst++) {
      ib_data[iafirst] = b_ia_data[iafirst];
    }
  }

  if (ncmax > 0) {
    if (nc <= ncmax) {
    } else {
      d_y = NULL;
      m22 = mxCreateString("Assertion failed.");
      emlrtAssign(&d_y, m22);
      st.site = &kv_emlrtRSI;
      c_error(&st, d_y, &cb_emlrtMCI);
    }

    if (1 > nc) {
      ialast = 0;
    } else {
      ialast = nc;
    }

    for (iafirst = 0; iafirst < ialast; iafirst++) {
      b_c_data[iafirst] = c_data[iafirst];
    }

    c_size[0] = ialast;
    for (iafirst = 0; iafirst < ialast; iafirst++) {
      c_data[iafirst] = b_c_data[iafirst];
    }
  }
}

/* End of code generation (eml_setop.c) */
