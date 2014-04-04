/*
 * checkIPAddressFormat.c
 *
 * Code generation for function 'checkIPAddressFormat'
 *
 * C source code generated on: Thu Apr  3 19:51:42 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testMACReceiver.h"
#include "checkIPAddressFormat.h"
#include "receiveData.h"
#include "SystemCore.h"
#include "testMACReceiver_mexutil.h"
#include "testMACReceiver_data.h"

/* Variable Definitions */
static emlrtRSInfo md_emlrtRSI = { 34, "checkIPAddressFormat",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdru/checkIPAddressFormat.m" };

static emlrtRSInfo nd_emlrtRSI = { 43, "checkIPAddressFormat",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdru/checkIPAddressFormat.m" };

static emlrtRSInfo od_emlrtRSI = { 44, "checkIPAddressFormat",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdru/checkIPAddressFormat.m" };

static emlrtRSInfo pd_emlrtRSI = { 45, "checkIPAddressFormat",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdru/checkIPAddressFormat.m" };

static emlrtRSInfo qd_emlrtRSI = { 46, "checkIPAddressFormat",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdru/checkIPAddressFormat.m" };

static emlrtRSInfo rd_emlrtRSI = { 53, "checkIPAddressFormat",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdru/checkIPAddressFormat.m" };

static emlrtRSInfo sd_emlrtRSI = { 52, "checkIPAddressFormat",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdru/checkIPAddressFormat.m" };

static emlrtRSInfo td_emlrtRSI = { 12, "any",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/ops/any.m" };

static emlrtRSInfo wd_emlrtRSI = { 109, "eml_all_or_any",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_all_or_any.m" };

static emlrtECInfo i_emlrtECI = { 2, 53, 23, "checkIPAddressFormat",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdru/checkIPAddressFormat.m" };

static emlrtBCInfo l_emlrtBCI = { 1, 12, 41, 8, "aAddrs", "checkIPAddressFormat",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdru/checkIPAddressFormat.m", 0 };

static emlrtBCInfo m_emlrtBCI = { -1, -1, 41, 15, "dotIndices",
  "checkIPAddressFormat",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdru/checkIPAddressFormat.m", 0 };

static emlrtBCInfo n_emlrtBCI = { 1, 12, 40, 8, "aAddrs", "checkIPAddressFormat",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdru/checkIPAddressFormat.m", 0 };

static emlrtBCInfo o_emlrtBCI = { -1, -1, 40, 31, "dotIndices",
  "checkIPAddressFormat",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdru/checkIPAddressFormat.m", 0 };

static emlrtBCInfo p_emlrtBCI = { -1, -1, 40, 15, "dotIndices",
  "checkIPAddressFormat",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdru/checkIPAddressFormat.m", 0 };

static emlrtBCInfo q_emlrtBCI = { 1, 12, 39, 8, "aAddrs", "checkIPAddressFormat",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdru/checkIPAddressFormat.m", 0 };

static emlrtBCInfo r_emlrtBCI = { -1, -1, 39, 31, "dotIndices",
  "checkIPAddressFormat",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdru/checkIPAddressFormat.m", 0 };

static emlrtBCInfo s_emlrtBCI = { -1, -1, 39, 15, "dotIndices",
  "checkIPAddressFormat",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdru/checkIPAddressFormat.m", 0 };

static emlrtBCInfo t_emlrtBCI = { 1, 12, 38, 8, "aAddrs", "checkIPAddressFormat",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdru/checkIPAddressFormat.m", 0 };

static emlrtBCInfo u_emlrtBCI = { -1, -1, 38, 17, "dotIndices",
  "checkIPAddressFormat",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdru/checkIPAddressFormat.m", 0 };

/* Function Definitions */
void checkIPAddressFormat(void)
{
  int32_T idx;
  int8_T ii_data[12];
  int32_T ii;
  boolean_T exitg5;
  boolean_T guard1 = FALSE;
  static const boolean_T bv0[12] = { FALSE, FALSE, FALSE, TRUE, FALSE, FALSE,
    FALSE, TRUE, FALSE, FALSE, TRUE, FALSE };

  int32_T loop_ub;
  int32_T tmp_data[12];
  int32_T i7;
  int8_T b_ii_data[12];
  int32_T i8;
  int8_T dotIndices_data[12];
  const mxArray *y;
  static const int32_T iv56[2] = { 1, 42 };

  const mxArray *m13;
  char_T cv71[42];
  static const char_T cv72[42] = { 's', 'd', 'r', 'u', ':', 'c', 'h', 'e', 'c',
    'k', 'I', 'P', 'A', 'd', 'd', 'r', 'e', 's', 's', 'F', 'o', 'r', 'm', 'a',
    't', ':', 'I', 'n', 'v', 'a', 'l', 'i', 'd', 'I', 'P', 'A', 'd', 'd', 'r',
    'e', 's', 's' };

  const mxArray *b_y;
  static const int32_T iv57[2] = { 1, 9 };

  char_T cv73[9];
  static const char_T cv74[9] = { 'I', 'P', 'A', 'd', 'd', 'r', 'e', 's', 's' };

  int32_T i9;
  int32_T i10;
  int32_T i11;
  int32_T i12;
  int32_T b_tmp_data[11];
  static const char_T cv75[12] = { '1', '9', '2', '.', '1', '6', '8', '.', '1',
    '0', '.', '2' };

  int8_T x_data[12];
  boolean_T guard4 = FALSE;
  int32_T x_size[2];
  boolean_T b_x_data[12];
  int32_T tmp_size[2];
  int32_T x[2];
  int32_T iv58[2];
  boolean_T cond;
  boolean_T exitg4;
  const mxArray *c_y;
  static const int32_T iv59[2] = { 1, 42 };

  const mxArray *d_y;
  static const int32_T iv60[2] = { 1, 9 };

  boolean_T guard3 = FALSE;
  boolean_T exitg3;
  const mxArray *e_y;
  static const int32_T iv61[2] = { 1, 42 };

  const mxArray *f_y;
  static const int32_T iv62[2] = { 1, 9 };

  boolean_T guard2 = FALSE;
  boolean_T exitg2;
  const mxArray *g_y;
  static const int32_T iv63[2] = { 1, 42 };

  const mxArray *h_y;
  static const int32_T iv64[2] = { 1, 9 };

  boolean_T b_guard1 = FALSE;
  boolean_T exitg1;
  const mxArray *i_y;
  static const int32_T iv65[2] = { 1, 42 };

  const mxArray *j_y;
  static const int32_T iv66[2] = { 1, 9 };

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
  idx = 0;
  ii = 1;
  exitg5 = FALSE;
  while ((exitg5 == FALSE) && (ii < 13)) {
    guard1 = FALSE;
    if (bv0[ii - 1]) {
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

  for (i7 = 0; i7 < loop_ub; i7++) {
    tmp_data[i7] = 1 + i7;
  }

  for (i7 = 0; i7 < loop_ub; i7++) {
    i8 = 0;
    while (i8 <= 0) {
      b_ii_data[i7] = ii_data[tmp_data[i7] - 1];
      i8 = 1;
    }
  }

  for (i7 = 0; i7 < loop_ub; i7++) {
    ii_data[i7] = b_ii_data[i7];
  }

  for (i7 = 0; i7 < loop_ub; i7++) {
    dotIndices_data[i7] = ii_data[i7];
  }

  /*  Used instead of findstr since */
  /*  findstr does not generate code */
  emlrtPushRtStackR2012b(&md_emlrtRSI, emlrtRootTLSGlobal);
  if (!(loop_ub != 3)) {
  } else {
    emlrtPushRtStackR2012b(&rc_emlrtRSI, emlrtRootTLSGlobal);
    y = NULL;
    m13 = mxCreateCharArray(2, iv56);
    for (idx = 0; idx < 42; idx++) {
      cv71[idx] = cv72[idx];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 42, m13, cv71);
    emlrtAssign(&y, m13);
    b_y = NULL;
    m13 = mxCreateCharArray(2, iv57);
    for (idx = 0; idx < 9; idx++) {
      cv73[idx] = cv74[idx];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 9, m13, cv73);
    emlrtAssign(&b_y, m13);
    c_error(message(y, b_y, &h_emlrtMCI), &h_emlrtMCI);
    emlrtPopRtStackR2012b(&rc_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPopRtStackR2012b(&md_emlrtRSI, emlrtRootTLSGlobal);

  /*  Check if all the elements other than the dots are numbers */
  emlrtDynamicBoundsCheckFastR2012b(1, 1, loop_ub, &u_emlrtBCI,
    emlrtRootTLSGlobal);
  if (1 > dotIndices_data[0] - 1) {
    ii = 0;
  } else {
    i7 = dotIndices_data[0] - 1;
    ii = emlrtDynamicBoundsCheckFastR2012b(i7, 1, 12, &t_emlrtBCI,
      emlrtRootTLSGlobal);
  }

  emlrtDynamicBoundsCheckFastR2012b(1, 1, loop_ub, &s_emlrtBCI,
    emlrtRootTLSGlobal);
  emlrtDynamicBoundsCheckFastR2012b(2, 1, loop_ub, &r_emlrtBCI,
    emlrtRootTLSGlobal);
  if (dotIndices_data[0] + 1 > dotIndices_data[1] - 1) {
    i7 = 1;
    i8 = 0;
  } else {
    i7 = dotIndices_data[0] + 1;
    i7 = emlrtDynamicBoundsCheckFastR2012b(i7, 1, 12, &q_emlrtBCI,
      emlrtRootTLSGlobal);
    i8 = dotIndices_data[1] - 1;
    i8 = emlrtDynamicBoundsCheckFastR2012b(i8, 1, 12, &q_emlrtBCI,
      emlrtRootTLSGlobal);
  }

  emlrtDynamicBoundsCheckFastR2012b(2, 1, loop_ub, &p_emlrtBCI,
    emlrtRootTLSGlobal);
  emlrtDynamicBoundsCheckFastR2012b(3, 1, loop_ub, &o_emlrtBCI,
    emlrtRootTLSGlobal);
  if (dotIndices_data[1] + 1 > dotIndices_data[2] - 1) {
    i9 = 1;
    i10 = 0;
  } else {
    i9 = dotIndices_data[1] + 1;
    i9 = emlrtDynamicBoundsCheckFastR2012b(i9, 1, 12, &n_emlrtBCI,
      emlrtRootTLSGlobal);
    i10 = dotIndices_data[2] - 1;
    i10 = emlrtDynamicBoundsCheckFastR2012b(i10, 1, 12, &n_emlrtBCI,
      emlrtRootTLSGlobal);
  }

  emlrtDynamicBoundsCheckFastR2012b(3, 1, loop_ub, &m_emlrtBCI,
    emlrtRootTLSGlobal);
  if (dotIndices_data[2] + 1 > 12) {
    i11 = 1;
    i12 = 1;
  } else {
    i11 = dotIndices_data[2] + 1;
    i11 = emlrtDynamicBoundsCheckFastR2012b(i11, 1, 12, &l_emlrtBCI,
      emlrtRootTLSGlobal);
    i12 = 13;
  }

  emlrtPushRtStackR2012b(&nd_emlrtRSI, emlrtRootTLSGlobal);
  for (idx = 0; idx < ii; idx++) {
    b_tmp_data[idx] = 1 + idx;
  }

  for (idx = 0; idx < ii; idx++) {
    x_data[idx] = cv75[b_tmp_data[idx] - 1];
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
      iv58[idx] = tmp_size[idx];
    }

    emlrtSizeEqCheck2DFastR2012b(x, iv58, &i_emlrtECI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&rd_emlrtRSI, emlrtRootTLSGlobal);
    for (idx = 0; idx < ii; idx++) {
      b_x_data[idx] = !b_x_data[idx];
    }

    emlrtPushRtStackR2012b(&td_emlrtRSI, emlrtRootTLSGlobal);
    cond = FALSE;
    emlrtPushRtStackR2012b(&wd_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&wd_emlrtRSI, emlrtRootTLSGlobal);
    idx = 1;
    exitg4 = FALSE;
    while ((exitg4 == FALSE) && (idx <= ii)) {
      if (!(b_x_data[idx - 1] == 0)) {
        cond = TRUE;
        exitg4 = TRUE;
      } else {
        idx++;
      }
    }

    emlrtPopRtStackR2012b(&td_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&rd_emlrtRSI, emlrtRootTLSGlobal);
    if (cond) {
      guard4 = TRUE;
    } else {
      cond = FALSE;
    }
  }

  if (guard4 == TRUE) {
    cond = TRUE;
  }

  emlrtPushRtStackR2012b(&sd_emlrtRSI, emlrtRootTLSGlobal);
  if (!cond) {
  } else {
    emlrtPushRtStackR2012b(&rc_emlrtRSI, emlrtRootTLSGlobal);
    c_y = NULL;
    m13 = mxCreateCharArray(2, iv59);
    for (idx = 0; idx < 42; idx++) {
      cv71[idx] = cv72[idx];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 42, m13, cv71);
    emlrtAssign(&c_y, m13);
    d_y = NULL;
    m13 = mxCreateCharArray(2, iv60);
    for (idx = 0; idx < 9; idx++) {
      cv73[idx] = cv74[idx];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 9, m13, cv73);
    emlrtAssign(&d_y, m13);
    c_error(message(c_y, d_y, &h_emlrtMCI), &h_emlrtMCI);
    emlrtPopRtStackR2012b(&rc_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPopRtStackR2012b(&sd_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&nd_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&od_emlrtRSI, emlrtRootTLSGlobal);
  ii = (i8 - i7) + 1;
  loop_ub = i8 - i7;
  for (i8 = 0; i8 <= loop_ub; i8++) {
    b_tmp_data[i8] = i7 + i8;
  }

  for (i7 = 0; i7 < ii; i7++) {
    x_data[i7] = cv75[b_tmp_data[i7] - 1];
  }

  guard3 = FALSE;
  if (ii == 0) {
    guard3 = TRUE;
  } else {
    x_size[0] = 1;
    x_size[1] = ii;
    for (i7 = 0; i7 < ii; i7++) {
      b_x_data[i7] = (x_data[i7] >= 48);
    }

    tmp_size[0] = 1;
    tmp_size[1] = ii;
    for (i7 = 0; i7 < 2; i7++) {
      x[i7] = x_size[i7];
      iv58[i7] = tmp_size[i7];
    }

    emlrtSizeEqCheck2DFastR2012b(x, iv58, &i_emlrtECI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&rd_emlrtRSI, emlrtRootTLSGlobal);
    for (i7 = 0; i7 < ii; i7++) {
      b_x_data[i7] = !b_x_data[i7];
    }

    emlrtPushRtStackR2012b(&td_emlrtRSI, emlrtRootTLSGlobal);
    cond = FALSE;
    emlrtPushRtStackR2012b(&wd_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&wd_emlrtRSI, emlrtRootTLSGlobal);
    idx = 1;
    exitg3 = FALSE;
    while ((exitg3 == FALSE) && (idx <= ii)) {
      if (!(b_x_data[idx - 1] == 0)) {
        cond = TRUE;
        exitg3 = TRUE;
      } else {
        idx++;
      }
    }

    emlrtPopRtStackR2012b(&td_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&rd_emlrtRSI, emlrtRootTLSGlobal);
    if (cond) {
      guard3 = TRUE;
    } else {
      cond = FALSE;
    }
  }

  if (guard3 == TRUE) {
    cond = TRUE;
  }

  emlrtPushRtStackR2012b(&sd_emlrtRSI, emlrtRootTLSGlobal);
  if (!cond) {
  } else {
    emlrtPushRtStackR2012b(&rc_emlrtRSI, emlrtRootTLSGlobal);
    e_y = NULL;
    m13 = mxCreateCharArray(2, iv61);
    for (idx = 0; idx < 42; idx++) {
      cv71[idx] = cv72[idx];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 42, m13, cv71);
    emlrtAssign(&e_y, m13);
    f_y = NULL;
    m13 = mxCreateCharArray(2, iv62);
    for (idx = 0; idx < 9; idx++) {
      cv73[idx] = cv74[idx];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 9, m13, cv73);
    emlrtAssign(&f_y, m13);
    c_error(message(e_y, f_y, &h_emlrtMCI), &h_emlrtMCI);
    emlrtPopRtStackR2012b(&rc_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPopRtStackR2012b(&sd_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&od_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&pd_emlrtRSI, emlrtRootTLSGlobal);
  ii = (i10 - i9) + 1;
  loop_ub = i10 - i9;
  for (i7 = 0; i7 <= loop_ub; i7++) {
    b_tmp_data[i7] = i9 + i7;
  }

  for (i7 = 0; i7 < ii; i7++) {
    x_data[i7] = cv75[b_tmp_data[i7] - 1];
  }

  guard2 = FALSE;
  if (ii == 0) {
    guard2 = TRUE;
  } else {
    x_size[0] = 1;
    x_size[1] = ii;
    for (i7 = 0; i7 < ii; i7++) {
      b_x_data[i7] = (x_data[i7] >= 48);
    }

    tmp_size[0] = 1;
    tmp_size[1] = ii;
    for (i7 = 0; i7 < 2; i7++) {
      x[i7] = x_size[i7];
      iv58[i7] = tmp_size[i7];
    }

    emlrtSizeEqCheck2DFastR2012b(x, iv58, &i_emlrtECI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&rd_emlrtRSI, emlrtRootTLSGlobal);
    for (i7 = 0; i7 < ii; i7++) {
      b_x_data[i7] = !b_x_data[i7];
    }

    emlrtPushRtStackR2012b(&td_emlrtRSI, emlrtRootTLSGlobal);
    cond = FALSE;
    emlrtPushRtStackR2012b(&wd_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&wd_emlrtRSI, emlrtRootTLSGlobal);
    idx = 1;
    exitg2 = FALSE;
    while ((exitg2 == FALSE) && (idx <= ii)) {
      if (!(b_x_data[idx - 1] == 0)) {
        cond = TRUE;
        exitg2 = TRUE;
      } else {
        idx++;
      }
    }

    emlrtPopRtStackR2012b(&td_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&rd_emlrtRSI, emlrtRootTLSGlobal);
    if (cond) {
      guard2 = TRUE;
    } else {
      cond = FALSE;
    }
  }

  if (guard2 == TRUE) {
    cond = TRUE;
  }

  emlrtPushRtStackR2012b(&sd_emlrtRSI, emlrtRootTLSGlobal);
  if (!cond) {
  } else {
    emlrtPushRtStackR2012b(&rc_emlrtRSI, emlrtRootTLSGlobal);
    g_y = NULL;
    m13 = mxCreateCharArray(2, iv63);
    for (idx = 0; idx < 42; idx++) {
      cv71[idx] = cv72[idx];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 42, m13, cv71);
    emlrtAssign(&g_y, m13);
    h_y = NULL;
    m13 = mxCreateCharArray(2, iv64);
    for (idx = 0; idx < 9; idx++) {
      cv73[idx] = cv74[idx];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 9, m13, cv73);
    emlrtAssign(&h_y, m13);
    c_error(message(g_y, h_y, &h_emlrtMCI), &h_emlrtMCI);
    emlrtPopRtStackR2012b(&rc_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPopRtStackR2012b(&sd_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&pd_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&qd_emlrtRSI, emlrtRootTLSGlobal);
  ii = i12 - i11;
  loop_ub = i12 - i11;
  for (i7 = 0; i7 < loop_ub; i7++) {
    tmp_data[i7] = i11 + i7;
  }

  for (i7 = 0; i7 < ii; i7++) {
    x_data[i7] = cv75[tmp_data[i7] - 1];
  }

  b_guard1 = FALSE;
  if (ii == 0) {
    b_guard1 = TRUE;
  } else {
    x_size[0] = 1;
    x_size[1] = ii;
    for (i7 = 0; i7 < ii; i7++) {
      b_x_data[i7] = (x_data[i7] >= 48);
    }

    tmp_size[0] = 1;
    tmp_size[1] = ii;
    for (i7 = 0; i7 < 2; i7++) {
      x[i7] = x_size[i7];
      iv58[i7] = tmp_size[i7];
    }

    emlrtSizeEqCheck2DFastR2012b(x, iv58, &i_emlrtECI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&rd_emlrtRSI, emlrtRootTLSGlobal);
    for (i7 = 0; i7 < ii; i7++) {
      b_x_data[i7] = !b_x_data[i7];
    }

    emlrtPushRtStackR2012b(&td_emlrtRSI, emlrtRootTLSGlobal);
    cond = FALSE;
    emlrtPushRtStackR2012b(&wd_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&wd_emlrtRSI, emlrtRootTLSGlobal);
    idx = 1;
    exitg1 = FALSE;
    while ((exitg1 == FALSE) && (idx <= ii)) {
      if (!(b_x_data[idx - 1] == 0)) {
        cond = TRUE;
        exitg1 = TRUE;
      } else {
        idx++;
      }
    }

    emlrtPopRtStackR2012b(&td_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&rd_emlrtRSI, emlrtRootTLSGlobal);
    if (cond) {
      b_guard1 = TRUE;
    } else {
      cond = FALSE;
    }
  }

  if (b_guard1 == TRUE) {
    cond = TRUE;
  }

  emlrtPushRtStackR2012b(&sd_emlrtRSI, emlrtRootTLSGlobal);
  if (!cond) {
  } else {
    emlrtPushRtStackR2012b(&rc_emlrtRSI, emlrtRootTLSGlobal);
    i_y = NULL;
    m13 = mxCreateCharArray(2, iv65);
    for (idx = 0; idx < 42; idx++) {
      cv71[idx] = cv72[idx];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 42, m13, cv71);
    emlrtAssign(&i_y, m13);
    j_y = NULL;
    m13 = mxCreateCharArray(2, iv66);
    for (idx = 0; idx < 9; idx++) {
      cv73[idx] = cv74[idx];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 9, m13, cv73);
    emlrtAssign(&j_y, m13);
    c_error(message(i_y, j_y, &h_emlrtMCI), &h_emlrtMCI);
    emlrtPopRtStackR2012b(&rc_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPopRtStackR2012b(&sd_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&qd_emlrtRSI, emlrtRootTLSGlobal);
}

/* End of code generation (checkIPAddressFormat.c) */
