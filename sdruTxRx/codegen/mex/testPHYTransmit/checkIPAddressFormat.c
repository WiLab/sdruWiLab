/*
 * checkIPAddressFormat.c
 *
 * Code generation for function 'checkIPAddressFormat'
 *
 * C source code generated on: Thu Feb 27 11:47:47 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testPHYTransmit.h"
#include "checkIPAddressFormat.h"
#include "SystemCore.h"
#include "testPHYTransmit_mexutil.h"
#include "testPHYTransmit_data.h"

/* Variable Definitions */
static emlrtRSInfo sc_emlrtRSI = { 12, "any",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/any.m" };

static emlrtRSInfo yc_emlrtRSI = { 41, "find",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elmat/find.m" };

static emlrtRSInfo ad_emlrtRSI = { 232, "find",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elmat/find.m" };

static emlrtRSInfo wj_emlrtRSI = { 32, "checkIPAddressFormat",
  "/Users/travis/Documents/sdru/checkIPAddressFormat.m" };

static emlrtRSInfo xj_emlrtRSI = { 34, "checkIPAddressFormat",
  "/Users/travis/Documents/sdru/checkIPAddressFormat.m" };

static emlrtRSInfo yj_emlrtRSI = { 43, "checkIPAddressFormat",
  "/Users/travis/Documents/sdru/checkIPAddressFormat.m" };

static emlrtRSInfo ak_emlrtRSI = { 44, "checkIPAddressFormat",
  "/Users/travis/Documents/sdru/checkIPAddressFormat.m" };

static emlrtRSInfo bk_emlrtRSI = { 45, "checkIPAddressFormat",
  "/Users/travis/Documents/sdru/checkIPAddressFormat.m" };

static emlrtRSInfo ck_emlrtRSI = { 46, "checkIPAddressFormat",
  "/Users/travis/Documents/sdru/checkIPAddressFormat.m" };

static emlrtRSInfo dk_emlrtRSI = { 53, "checkIPAddressFormat",
  "/Users/travis/Documents/sdru/checkIPAddressFormat.m" };

static emlrtRSInfo ek_emlrtRSI = { 52, "checkIPAddressFormat",
  "/Users/travis/Documents/sdru/checkIPAddressFormat.m" };

static emlrtECInfo b_emlrtECI = { 2, 53, 23, "checkIPAddressFormat",
  "/Users/travis/Documents/sdru/checkIPAddressFormat.m" };

static emlrtBCInfo e_emlrtBCI = { 1, 12, 41, 8, "aAddrs", "checkIPAddressFormat",
  "/Users/travis/Documents/sdru/checkIPAddressFormat.m", 0 };

static emlrtBCInfo f_emlrtBCI = { -1, -1, 41, 15, "dotIndices",
  "checkIPAddressFormat", "/Users/travis/Documents/sdru/checkIPAddressFormat.m",
  0 };

static emlrtBCInfo g_emlrtBCI = { 1, 12, 40, 8, "aAddrs", "checkIPAddressFormat",
  "/Users/travis/Documents/sdru/checkIPAddressFormat.m", 0 };

static emlrtBCInfo h_emlrtBCI = { -1, -1, 40, 31, "dotIndices",
  "checkIPAddressFormat", "/Users/travis/Documents/sdru/checkIPAddressFormat.m",
  0 };

static emlrtBCInfo i_emlrtBCI = { -1, -1, 40, 15, "dotIndices",
  "checkIPAddressFormat", "/Users/travis/Documents/sdru/checkIPAddressFormat.m",
  0 };

static emlrtBCInfo j_emlrtBCI = { 1, 12, 39, 8, "aAddrs", "checkIPAddressFormat",
  "/Users/travis/Documents/sdru/checkIPAddressFormat.m", 0 };

static emlrtBCInfo k_emlrtBCI = { -1, -1, 39, 31, "dotIndices",
  "checkIPAddressFormat", "/Users/travis/Documents/sdru/checkIPAddressFormat.m",
  0 };

static emlrtBCInfo l_emlrtBCI = { -1, -1, 39, 15, "dotIndices",
  "checkIPAddressFormat", "/Users/travis/Documents/sdru/checkIPAddressFormat.m",
  0 };

static emlrtBCInfo m_emlrtBCI = { 1, 12, 38, 8, "aAddrs", "checkIPAddressFormat",
  "/Users/travis/Documents/sdru/checkIPAddressFormat.m", 0 };

static emlrtBCInfo n_emlrtBCI = { -1, -1, 38, 17, "dotIndices",
  "checkIPAddressFormat", "/Users/travis/Documents/sdru/checkIPAddressFormat.m",
  0 };

/* Function Definitions */
void checkIPAddressFormat(const emlrtStack *sp)
{
  int32_T idx;
  int8_T ii_data[12];
  int32_T ii;
  boolean_T exitg5;
  boolean_T guard1 = FALSE;
  static const boolean_T bv0[12] = { FALSE, FALSE, FALSE, TRUE, FALSE, FALSE,
    FALSE, TRUE, FALSE, FALSE, TRUE, FALSE };

  int32_T loop_ub;
  int8_T b_ii_data[12];
  int32_T i6;
  int8_T dotIndices_data[12];
  const mxArray *y;
  static const int32_T iv43[2] = { 1, 42 };

  const mxArray *m9;
  char_T cv58[42];
  static const char_T cv59[42] = { 's', 'd', 'r', 'u', ':', 'c', 'h', 'e', 'c',
    'k', 'I', 'P', 'A', 'd', 'd', 'r', 'e', 's', 's', 'F', 'o', 'r', 'm', 'a',
    't', ':', 'I', 'n', 'v', 'a', 'l', 'i', 'd', 'I', 'P', 'A', 'd', 'd', 'r',
    'e', 's', 's' };

  const mxArray *b_y;
  static const int32_T iv44[2] = { 1, 9 };

  char_T cv60[9];
  static const char_T cv61[9] = { 'I', 'P', 'A', 'd', 'd', 'r', 'e', 's', 's' };

  int32_T i7;
  int32_T i8;
  int32_T i9;
  int32_T i10;
  int32_T i11;
  static const char_T cv62[12] = { '1', '9', '2', '.', '1', '6', '8', '.', '1',
    '0', '.', '2' };

  int8_T x_data[12];
  boolean_T guard4 = FALSE;
  int32_T x_size[2];
  boolean_T b_x_data[12];
  int32_T tmp_size[2];
  int32_T x[2];
  int32_T iv45[2];
  boolean_T c_y;
  boolean_T exitg4;
  const mxArray *d_y;
  static const int32_T iv46[2] = { 1, 42 };

  const mxArray *e_y;
  static const int32_T iv47[2] = { 1, 9 };

  boolean_T guard3 = FALSE;
  boolean_T exitg3;
  const mxArray *f_y;
  static const int32_T iv48[2] = { 1, 42 };

  const mxArray *g_y;
  static const int32_T iv49[2] = { 1, 9 };

  boolean_T guard2 = FALSE;
  boolean_T exitg2;
  const mxArray *h_y;
  static const int32_T iv50[2] = { 1, 42 };

  const mxArray *i_y;
  static const int32_T iv51[2] = { 1, 9 };

  boolean_T b_guard1 = FALSE;
  boolean_T exitg1;
  const mxArray *j_y;
  static const int32_T iv52[2] = { 1, 42 };

  const mxArray *k_y;
  static const int32_T iv53[2] = { 1, 9 };

  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;

  /* checkIPAddressFormat IP address format checker */
  /*  */
  /*    Warning: This function is an internal MathWorks function and may be removed */
  /*    in a future release. */
  /*  */
  /*    checkIPAddressFormat(ADDRS, NAME) returns true if the ADDRS is a valid */
  /*    dotted quad IP address. Otherwise, it errors out and prompts that variable */
  /*    NAME is not a valid IP address. */
  /*  */
  /*    % Example: */
  /*    %   Check if the string '192.168.10.a' is a valid IP address for variable */
  /*    %   IPAddress */
  /*    checkIPAddressFormat('192.168.10.a', 'IPAddress') */
  /*    Copyright 2012 The MathWorks, Inc. */
  /*  Look for three dots */
  st.site = &wj_emlrtRSI;
  b_st.site = &yc_emlrtRSI;
  idx = 0;
  ii = 1;
  exitg5 = FALSE;
  while ((exitg5 == FALSE) && (ii < 13)) {
    guard1 = FALSE;
    if (bv0[ii - 1]) {
      c_st.site = &ad_emlrtRSI;
      idx++;
      ii_data[idx - 1] = (int8_T)ii;
      if (idx >= 12) {
        exitg5 = TRUE;
      } else {
        guard1 = TRUE;
      }
    } else {
      guard1 = TRUE;
    }

    if (guard1 == TRUE) {
      ii++;
    }
  }

  if (1 > idx) {
    loop_ub = 0;
  } else {
    loop_ub = idx;
  }

  for (i6 = 0; i6 < loop_ub; i6++) {
    b_ii_data[i6] = ii_data[i6];
  }

  for (i6 = 0; i6 < loop_ub; i6++) {
    ii_data[i6] = b_ii_data[i6];
  }

  for (i6 = 0; i6 < loop_ub; i6++) {
    dotIndices_data[i6] = ii_data[i6];
  }

  /*  Used instead of findstr since */
  /*  findstr does not generate code */
  st.site = &xj_emlrtRSI;
  st.site = &xj_emlrtRSI;
  if (!(loop_ub != 3)) {
  } else {
    y = NULL;
    m9 = mxCreateCharArray(2, iv43);
    for (idx = 0; idx < 42; idx++) {
      cv58[idx] = cv59[idx];
    }

    emlrtInitCharArrayR2013a(&st, 42, m9, cv58);
    emlrtAssign(&y, m9);
    b_y = NULL;
    m9 = mxCreateCharArray(2, iv44);
    for (idx = 0; idx < 9; idx++) {
      cv60[idx] = cv61[idx];
    }

    emlrtInitCharArrayR2013a(&st, 9, m9, cv60);
    emlrtAssign(&b_y, m9);
    b_st.site = &um_emlrtRSI;
    c_error(&b_st, message(&b_st, y, b_y, &g_emlrtMCI), &g_emlrtMCI);
  }

  /*  Check if all the elements other than the dots are numbers */
  emlrtDynamicBoundsCheckFastR2012b(1, 1, loop_ub, &n_emlrtBCI, sp);
  if (1 > dotIndices_data[0] - 1) {
    ii = 0;
  } else {
    i6 = dotIndices_data[0] - 1;
    ii = emlrtDynamicBoundsCheckFastR2012b(i6, 1, 12, &m_emlrtBCI, sp);
  }

  emlrtDynamicBoundsCheckFastR2012b(1, 1, loop_ub, &l_emlrtBCI, sp);
  emlrtDynamicBoundsCheckFastR2012b(2, 1, loop_ub, &k_emlrtBCI, sp);
  if (dotIndices_data[0] + 1 > dotIndices_data[1] - 1) {
    i6 = 0;
    i7 = 0;
  } else {
    i6 = dotIndices_data[0] + 1;
    i6 = emlrtDynamicBoundsCheckFastR2012b(i6, 1, 12, &j_emlrtBCI, sp) - 1;
    i7 = dotIndices_data[1] - 1;
    i7 = emlrtDynamicBoundsCheckFastR2012b(i7, 1, 12, &j_emlrtBCI, sp);
  }

  emlrtDynamicBoundsCheckFastR2012b(2, 1, loop_ub, &i_emlrtBCI, sp);
  emlrtDynamicBoundsCheckFastR2012b(3, 1, loop_ub, &h_emlrtBCI, sp);
  if (dotIndices_data[1] + 1 > dotIndices_data[2] - 1) {
    i8 = 0;
    i9 = 0;
  } else {
    i8 = dotIndices_data[1] + 1;
    i8 = emlrtDynamicBoundsCheckFastR2012b(i8, 1, 12, &g_emlrtBCI, sp) - 1;
    i9 = dotIndices_data[2] - 1;
    i9 = emlrtDynamicBoundsCheckFastR2012b(i9, 1, 12, &g_emlrtBCI, sp);
  }

  emlrtDynamicBoundsCheckFastR2012b(3, 1, loop_ub, &f_emlrtBCI, sp);
  if (dotIndices_data[2] + 1 > 12) {
    i10 = 0;
    i11 = -1;
  } else {
    i10 = dotIndices_data[2] + 1;
    i10 = emlrtDynamicBoundsCheckFastR2012b(i10, 1, 12, &e_emlrtBCI, sp) - 1;
    i11 = 11;
  }

  st.site = &yj_emlrtRSI;
  for (idx = 0; idx < ii; idx++) {
    x_data[idx] = cv62[idx];
  }

  guard4 = FALSE;
  if (ii == 0) {
    guard4 = TRUE;
  } else {
    x_size[0] = 1;
    x_size[1] = ii;
    for (idx = 0; idx < ii; idx++) {
      b_x_data[idx] = (x_data[idx] >= 48);
    }

    tmp_size[0] = 1;
    tmp_size[1] = ii;
    for (idx = 0; idx < 2; idx++) {
      x[idx] = x_size[idx];
      iv45[idx] = tmp_size[idx];
    }

    emlrtSizeEqCheck2DFastR2012b(x, iv45, &b_emlrtECI, &st);
    b_st.site = &dk_emlrtRSI;
    for (idx = 0; idx < ii; idx++) {
      b_x_data[idx] = !b_x_data[idx];
    }

    c_st.site = &sc_emlrtRSI;
    c_y = FALSE;
    idx = 1;
    exitg4 = FALSE;
    while ((exitg4 == FALSE) && (idx <= ii)) {
      if (!(b_x_data[idx - 1] == 0)) {
        c_y = TRUE;
        exitg4 = TRUE;
      } else {
        idx++;
      }
    }

    if (c_y) {
      guard4 = TRUE;
    } else {
      c_y = FALSE;
    }
  }

  if (guard4 == TRUE) {
    c_y = TRUE;
  }

  b_st.site = &ek_emlrtRSI;
  if (!c_y) {
  } else {
    d_y = NULL;
    m9 = mxCreateCharArray(2, iv46);
    for (idx = 0; idx < 42; idx++) {
      cv58[idx] = cv59[idx];
    }

    emlrtInitCharArrayR2013a(&b_st, 42, m9, cv58);
    emlrtAssign(&d_y, m9);
    e_y = NULL;
    m9 = mxCreateCharArray(2, iv47);
    for (idx = 0; idx < 9; idx++) {
      cv60[idx] = cv61[idx];
    }

    emlrtInitCharArrayR2013a(&b_st, 9, m9, cv60);
    emlrtAssign(&e_y, m9);
    c_st.site = &um_emlrtRSI;
    c_error(&c_st, message(&c_st, d_y, e_y, &g_emlrtMCI), &g_emlrtMCI);
  }

  st.site = &ak_emlrtRSI;
  ii = i7 - i6;
  loop_ub = i7 - i6;
  for (i7 = 0; i7 < loop_ub; i7++) {
    x_data[i7] = cv62[i6 + i7];
  }

  guard3 = FALSE;
  if (ii == 0) {
    guard3 = TRUE;
  } else {
    x_size[0] = 1;
    x_size[1] = ii;
    for (i6 = 0; i6 < ii; i6++) {
      b_x_data[i6] = (x_data[i6] >= 48);
    }

    tmp_size[0] = 1;
    tmp_size[1] = ii;
    for (i6 = 0; i6 < 2; i6++) {
      x[i6] = x_size[i6];
      iv45[i6] = tmp_size[i6];
    }

    emlrtSizeEqCheck2DFastR2012b(x, iv45, &b_emlrtECI, &st);
    b_st.site = &dk_emlrtRSI;
    for (i6 = 0; i6 < ii; i6++) {
      b_x_data[i6] = !b_x_data[i6];
    }

    c_st.site = &sc_emlrtRSI;
    c_y = FALSE;
    idx = 1;
    exitg3 = FALSE;
    while ((exitg3 == FALSE) && (idx <= ii)) {
      if (!(b_x_data[idx - 1] == 0)) {
        c_y = TRUE;
        exitg3 = TRUE;
      } else {
        idx++;
      }
    }

    if (c_y) {
      guard3 = TRUE;
    } else {
      c_y = FALSE;
    }
  }

  if (guard3 == TRUE) {
    c_y = TRUE;
  }

  b_st.site = &ek_emlrtRSI;
  if (!c_y) {
  } else {
    f_y = NULL;
    m9 = mxCreateCharArray(2, iv48);
    for (idx = 0; idx < 42; idx++) {
      cv58[idx] = cv59[idx];
    }

    emlrtInitCharArrayR2013a(&b_st, 42, m9, cv58);
    emlrtAssign(&f_y, m9);
    g_y = NULL;
    m9 = mxCreateCharArray(2, iv49);
    for (idx = 0; idx < 9; idx++) {
      cv60[idx] = cv61[idx];
    }

    emlrtInitCharArrayR2013a(&b_st, 9, m9, cv60);
    emlrtAssign(&g_y, m9);
    c_st.site = &um_emlrtRSI;
    c_error(&c_st, message(&c_st, f_y, g_y, &g_emlrtMCI), &g_emlrtMCI);
  }

  st.site = &bk_emlrtRSI;
  ii = i9 - i8;
  loop_ub = i9 - i8;
  for (i6 = 0; i6 < loop_ub; i6++) {
    x_data[i6] = cv62[i8 + i6];
  }

  guard2 = FALSE;
  if (ii == 0) {
    guard2 = TRUE;
  } else {
    x_size[0] = 1;
    x_size[1] = ii;
    for (i6 = 0; i6 < ii; i6++) {
      b_x_data[i6] = (x_data[i6] >= 48);
    }

    tmp_size[0] = 1;
    tmp_size[1] = ii;
    for (i6 = 0; i6 < 2; i6++) {
      x[i6] = x_size[i6];
      iv45[i6] = tmp_size[i6];
    }

    emlrtSizeEqCheck2DFastR2012b(x, iv45, &b_emlrtECI, &st);
    b_st.site = &dk_emlrtRSI;
    for (i6 = 0; i6 < ii; i6++) {
      b_x_data[i6] = !b_x_data[i6];
    }

    c_st.site = &sc_emlrtRSI;
    c_y = FALSE;
    idx = 1;
    exitg2 = FALSE;
    while ((exitg2 == FALSE) && (idx <= ii)) {
      if (!(b_x_data[idx - 1] == 0)) {
        c_y = TRUE;
        exitg2 = TRUE;
      } else {
        idx++;
      }
    }

    if (c_y) {
      guard2 = TRUE;
    } else {
      c_y = FALSE;
    }
  }

  if (guard2 == TRUE) {
    c_y = TRUE;
  }

  b_st.site = &ek_emlrtRSI;
  if (!c_y) {
  } else {
    h_y = NULL;
    m9 = mxCreateCharArray(2, iv50);
    for (idx = 0; idx < 42; idx++) {
      cv58[idx] = cv59[idx];
    }

    emlrtInitCharArrayR2013a(&b_st, 42, m9, cv58);
    emlrtAssign(&h_y, m9);
    i_y = NULL;
    m9 = mxCreateCharArray(2, iv51);
    for (idx = 0; idx < 9; idx++) {
      cv60[idx] = cv61[idx];
    }

    emlrtInitCharArrayR2013a(&b_st, 9, m9, cv60);
    emlrtAssign(&i_y, m9);
    c_st.site = &um_emlrtRSI;
    c_error(&c_st, message(&c_st, h_y, i_y, &g_emlrtMCI), &g_emlrtMCI);
  }

  st.site = &ck_emlrtRSI;
  ii = (i11 - i10) + 1;
  loop_ub = i11 - i10;
  for (i6 = 0; i6 <= loop_ub; i6++) {
    x_data[i6] = cv62[i10 + i6];
  }

  b_guard1 = FALSE;
  if (ii == 0) {
    b_guard1 = TRUE;
  } else {
    x_size[0] = 1;
    x_size[1] = ii;
    for (i6 = 0; i6 < ii; i6++) {
      b_x_data[i6] = (x_data[i6] >= 48);
    }

    tmp_size[0] = 1;
    tmp_size[1] = ii;
    for (i6 = 0; i6 < 2; i6++) {
      x[i6] = x_size[i6];
      iv45[i6] = tmp_size[i6];
    }

    emlrtSizeEqCheck2DFastR2012b(x, iv45, &b_emlrtECI, &st);
    b_st.site = &dk_emlrtRSI;
    for (i6 = 0; i6 < ii; i6++) {
      b_x_data[i6] = !b_x_data[i6];
    }

    c_st.site = &sc_emlrtRSI;
    c_y = FALSE;
    idx = 1;
    exitg1 = FALSE;
    while ((exitg1 == FALSE) && (idx <= ii)) {
      if (!(b_x_data[idx - 1] == 0)) {
        c_y = TRUE;
        exitg1 = TRUE;
      } else {
        idx++;
      }
    }

    if (c_y) {
      b_guard1 = TRUE;
    } else {
      c_y = FALSE;
    }
  }

  if (b_guard1 == TRUE) {
    c_y = TRUE;
  }

  b_st.site = &ek_emlrtRSI;
  if (!c_y) {
  } else {
    j_y = NULL;
    m9 = mxCreateCharArray(2, iv52);
    for (idx = 0; idx < 42; idx++) {
      cv58[idx] = cv59[idx];
    }

    emlrtInitCharArrayR2013a(&b_st, 42, m9, cv58);
    emlrtAssign(&j_y, m9);
    k_y = NULL;
    m9 = mxCreateCharArray(2, iv53);
    for (idx = 0; idx < 9; idx++) {
      cv60[idx] = cv61[idx];
    }

    emlrtInitCharArrayR2013a(&b_st, 9, m9, cv60);
    emlrtAssign(&k_y, m9);
    c_st.site = &um_emlrtRSI;
    c_error(&c_st, message(&c_st, j_y, k_y, &g_emlrtMCI), &g_emlrtMCI);
  }
}

/* End of code generation (checkIPAddressFormat.c) */
