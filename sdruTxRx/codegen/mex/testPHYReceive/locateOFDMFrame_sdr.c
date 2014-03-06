/*
 * locateOFDMFrame_sdr.c
 *
 * Code generation for function 'locateOFDMFrame_sdr'
 *
 * C source code generated on: Thu Feb 27 11:53:20 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testPHYReceive.h"
#include "locateOFDMFrame_sdr.h"
#include "find.h"
#include "eml_setop.h"
#include "PHYReceive.h"
#include "eml_int_forloop_overflow_check.h"
#include "testPHYReceive_mexutil.h"
#include "testPHYReceive_data.h"

/* Variable Definitions */
static emlrtRSInfo no_emlrtRSI = { 40, "locateOFDMFrame_sdr",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/private/locateOFDMFrame_sdr.m" };

static emlrtRSInfo oo_emlrtRSI = { 41, "locateOFDMFrame_sdr",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/private/locateOFDMFrame_sdr.m" };

static emlrtRSInfo po_emlrtRSI = { 51, "locateOFDMFrame_sdr",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/private/locateOFDMFrame_sdr.m" };

static emlrtRSInfo qo_emlrtRSI = { 53, "locateOFDMFrame_sdr",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/private/locateOFDMFrame_sdr.m" };

static emlrtRSInfo ro_emlrtRSI = { 58, "locateOFDMFrame_sdr",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/private/locateOFDMFrame_sdr.m" };

static emlrtRSInfo so_emlrtRSI = { 62, "locateOFDMFrame_sdr",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/private/locateOFDMFrame_sdr.m" };

static emlrtRSInfo to_emlrtRSI = { 73, "locateOFDMFrame_sdr",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/private/locateOFDMFrame_sdr.m" };

static emlrtRSInfo cp_emlrtRSI = { 23, "intersect",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/intersect.m" };

static emlrtRSInfo dp_emlrtRSI = { 67, "eml_setop",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/eml_setop.m" };

static emlrtRSInfo bq_emlrtRSI = { 11, "eml_li_find",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_li_find.m" };

static emlrtRSInfo cq_emlrtRSI = { 26, "eml_li_find",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_li_find.m" };

static emlrtRSInfo dq_emlrtRSI = { 29, "eml_li_find",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_li_find.m" };

static emlrtRSInfo eq_emlrtRSI = { 39, "eml_li_find",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_li_find.m" };

static emlrtRSInfo fq_emlrtRSI = { 41, "eml_li_find",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_li_find.m" };

static emlrtRSInfo gq_emlrtRSI = { 18, "max",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/datafun/max.m" };

static emlrtMCInfo cb_emlrtMCI = { 14, 5, "eml_li_find",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_li_find.m" };

static emlrtBCInfo t_emlrtBCI = { -1, -1, 52, 24, "MLocations",
  "locateOFDMFrame_sdr",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/private/locateOFDMFrame_sdr.m", 0 };

static emlrtBCInfo u_emlrtBCI = { -1, -1, 53, 33, "MLocations",
  "locateOFDMFrame_sdr",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/private/locateOFDMFrame_sdr.m", 0 };

static emlrtECInfo l_emlrtECI = { -1, 53, 33, "locateOFDMFrame_sdr",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/private/locateOFDMFrame_sdr.m" };

static emlrtBCInfo v_emlrtBCI = { -1, -1, 58, 1, "peaks", "locateOFDMFrame_sdr",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/private/locateOFDMFrame_sdr.m", 0 };

static emlrtBCInfo w_emlrtBCI = { -1, -1, 64, 37, "MLocations",
  "locateOFDMFrame_sdr",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/private/locateOFDMFrame_sdr.m", 0 };

static emlrtBCInfo x_emlrtBCI = { -1, -1, 53, 5, "peaks", "locateOFDMFrame_sdr",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/private/locateOFDMFrame_sdr.m", 0 };

static emlrtDCInfo c_emlrtDCI = { 20, 34, "eml_li_find",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_li_find.m", 4
};

static emlrtRSInfo vt_emlrtRSI = { 14, "eml_li_find",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_li_find.m" };

/* Function Declarations */
static int32_T compute_nones(const emlrtStack *sp, const boolean_T x_data[1224],
  int32_T n);
static void eml_li_find(const emlrtStack *sp, const boolean_T x_data[1224],
  const int32_T x_size[1], int32_T y_data[1224], int32_T y_size[1]);

/* Function Definitions */
static int32_T compute_nones(const emlrtStack *sp, const boolean_T x_data[1224],
  int32_T n)
{
  int32_T k;
  boolean_T b4;
  int32_T i;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  k = 0;
  st.site = &eq_emlrtRSI;
  if (1 > n) {
    b4 = FALSE;
  } else {
    b4 = (n > 2147483646);
  }

  if (b4) {
    b_st.site = &vf_emlrtRSI;
    check_forloop_overflow_error(&b_st);
  }

  for (i = 1; i <= n; i++) {
    if (x_data[i - 1]) {
      st.site = &fq_emlrtRSI;
      k++;
    }
  }

  return k;
}

static void eml_li_find(const emlrtStack *sp, const boolean_T x_data[1224],
  const int32_T x_size[1], int32_T y_data[1224], int32_T y_size[1])
{
  int32_T k;
  const mxArray *y;
  const mxArray *m21;
  int32_T i;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &bq_emlrtRSI;
  k = compute_nones(&st, x_data, x_size[0]);
  if (k <= x_size[0]) {
  } else {
    y = NULL;
    m21 = mxCreateString("Assertion failed.");
    emlrtAssign(&y, m21);
    st.site = &vt_emlrtRSI;
    b_error(&st, y, &cb_emlrtMCI);
  }

  emlrtNonNegativeCheckFastR2012b(k, &c_emlrtDCI, sp);
  y_size[0] = k;
  k = 0;
  st.site = &cq_emlrtRSI;
  for (i = 1; i <= x_size[0]; i++) {
    if (x_data[i - 1]) {
      y_data[k] = i;
      st.site = &dq_emlrtRSI;
      k++;
    }
  }
}

void locateShortpreamble(const emlrtStack *sp, const real_T M_data[1224], real_T
  *preambleEstimatedLocation, real_T *numPeaks)
{
  int32_T ixstart;
  real_T thresholdNorm;
  int32_T ix;
  boolean_T exitg1;
  boolean_T b_M_data[1224];
  int32_T ii_size[1];
  int32_T ii_data[1224];
  int32_T MLocations_size_idx_0;
  int32_T loop_ub;
  real_T MLocations_data[1224];
  int16_T unnamed_idx_0;
  int32_T peaks_data[1224];
  int32_T i20;
  real_T b_MLocations_data[1224];
  int32_T MLocations_size[1];
  real_T MLocations[8];
  int32_T ib_size[1];
  int32_T ib_data[8];
  int32_T ia_size[1];
  int32_T ia_data[8];
  int32_T c_size[1];
  real_T c_data[8];
  int32_T peaks_size[1];
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;

  /*  Locate of the start of the actual preamble from timing metric */
  /* % Find peaks of correlation */
  /*  Adjust threshold */
  st.site = &no_emlrtRSI;
  b_st.site = &te_emlrtRSI;
  ixstart = 1;
  thresholdNorm = M_data[0];
  if (muDoubleScalarIsNaN(M_data[0])) {
    ix = 2;
    exitg1 = FALSE;
    while ((exitg1 == FALSE) && (ix <= 1224)) {
      ixstart = ix;
      if (!muDoubleScalarIsNaN(M_data[ix - 1])) {
        thresholdNorm = M_data[ix - 1];
        exitg1 = TRUE;
      } else {
        ix++;
      }
    }
  }

  if (ixstart < 1224) {
    while (ixstart + 1 <= 1224) {
      if (M_data[ixstart] > thresholdNorm) {
        thresholdNorm = M_data[ixstart];
      }

      ixstart++;
    }
  }

  st.site = &no_emlrtRSI;
  thresholdNorm *= 0.6;
  st.site = &oo_emlrtRSI;
  for (ixstart = 0; ixstart < 1224; ixstart++) {
    b_M_data[ixstart] = (M_data[ixstart] > thresholdNorm);
  }

  b_st.site = &vc_emlrtRSI;
  b_eml_find(b_M_data, ii_data, ii_size);

  /*  Correct estimate to start of preamble not its center */
  MLocations_size_idx_0 = ii_size[0];
  loop_ub = ii_size[0];
  for (ixstart = 0; ixstart < loop_ub; ixstart++) {
    MLocations_data[ixstart] = (real_T)ii_data[ixstart] - 9.0;
  }

  /*  Frame Detection */
  unnamed_idx_0 = (int16_T)ii_size[0];
  loop_ub = (int16_T)ii_size[0];
  for (ixstart = 0; ixstart < loop_ub; ixstart++) {
    peaks_data[ixstart] = 0;
  }

  /*  Determine correct peak  */
  st.site = &po_emlrtRSI;
  ix = 0;
  while (ix <= ii_size[0] - 1) {
    ixstart = ix + 1;
    emlrtDynamicBoundsCheckFastR2012b(ixstart, 1, ii_size[0], &t_emlrtBCI, sp);
    if (ix + 1 > ii_size[0]) {
      ixstart = 1;
      i20 = 1;
    } else {
      ixstart = emlrtDynamicBoundsCheckFastR2012b(ix + 1, 1, ii_size[0],
        &u_emlrtBCI, sp);
      i20 = emlrtDynamicBoundsCheckFastR2012b(ii_size[0], 1, ii_size[0],
        &u_emlrtBCI, sp) + 1;
    }

    emlrtVectorVectorIndexCheckR2012b(ii_size[0], 1, 1, i20 - ixstart,
      &l_emlrtECI, sp);
    st.site = &qo_emlrtRSI;
    b_st.site = &cp_emlrtRSI;
    MLocations_size[0] = i20 - ixstart;
    loop_ub = i20 - ixstart;
    for (i20 = 0; i20 < loop_ub; i20++) {
      b_MLocations_data[i20] = MLocations_data[(ixstart + i20) - 1];
    }

    for (ixstart = 0; ixstart < 8; ixstart++) {
      MLocations[ixstart] = MLocations_data[ix] + (16.0 + 16.0 * (real_T)ixstart);
    }

    c_st.site = &dp_emlrtRSI;
    do_vectors(&c_st, b_MLocations_data, MLocations_size, MLocations, c_data,
               c_size, ia_data, ia_size, ib_data, ib_size);
    st.site = &qo_emlrtRSI;
    ixstart = (int16_T)ii_size[0];
    peaks_data[emlrtDynamicBoundsCheckFastR2012b(ix + 1, 1, ixstart, &x_emlrtBCI,
      sp) - 1] = c_size[0];
    ix++;
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
  }

  /*  Have at least 5 peaks for positive match */
  /*  (TUNABLE) */
  peaks_size[0] = (int16_T)ii_size[0];
  loop_ub = (int16_T)ii_size[0];
  for (ixstart = 0; ixstart < loop_ub; ixstart++) {
    b_M_data[ixstart] = (peaks_data[ixstart] < 7);
  }

  st.site = &ro_emlrtRSI;
  eml_li_find(&st, b_M_data, peaks_size, ii_data, ii_size);
  loop_ub = ii_size[0];
  for (ixstart = 0; ixstart < loop_ub; ixstart++) {
    i20 = (int16_T)MLocations_size_idx_0;
    peaks_data[emlrtDynamicBoundsCheckFastR2012b(ii_data[ixstart], 1, i20,
      &v_emlrtBCI, sp) - 1] = 0;
  }

  /*  Pick earliest peak in time */
  if (!(unnamed_idx_0 == 0)) {
    st.site = &so_emlrtRSI;
    b_st.site = &gq_emlrtRSI;
    ixstart = peaks_data[0];
    loop_ub = 1;
    if (unnamed_idx_0 > 1) {
      for (ix = 2; ix <= unnamed_idx_0; ix++) {
        if (peaks_data[ix - 1] > ixstart) {
          ixstart = peaks_data[ix - 1];
          loop_ub = ix;
        }
      }
    }

    *numPeaks = ixstart;
    if (ixstart > 0) {
      *preambleEstimatedLocation =
        MLocations_data[emlrtDynamicBoundsCheckFastR2012b(loop_ub, 1,
        MLocations_size_idx_0, &w_emlrtBCI, sp) - 1];
    } else {
      *preambleEstimatedLocation = -1.0;

      /*  no desirable location found */
    }
  } else {
    *preambleEstimatedLocation = -1.0;
    *numPeaks = 0.0;
  }

  /*  Normalize max peaks found */
  st.site = &to_emlrtRSI;
  b_st.site = &j_emlrtRSI;
  *numPeaks /= 8.0;
}

/* End of code generation (locateOFDMFrame_sdr.c) */
