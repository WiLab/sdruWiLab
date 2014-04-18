/*
 * locateOFDMFrame_sdr.c
 *
 * Code generation for function 'locateOFDMFrame_sdr'
 *
 * C source code generated on: Thu Apr 17 22:51:42 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testPHYReceive.h"
#include "locateOFDMFrame_sdr.h"
#include "receiveData.h"
#include "equalizeOFDM.h"
#include "testPHYReceive_mexutil.h"
#include "testPHYReceive_data.h"
#include <stdio.h>

/* Variable Definitions */
static emlrtRSInfo wg_emlrtRSI = { 40, "locateOFDMFrame_sdr",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/locateOFDMFrame_sdr.m"
};

static emlrtRSInfo xg_emlrtRSI = { 41, "locateOFDMFrame_sdr",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/locateOFDMFrame_sdr.m"
};

static emlrtRSInfo yg_emlrtRSI = { 53, "locateOFDMFrame_sdr",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/locateOFDMFrame_sdr.m"
};

static emlrtRSInfo ah_emlrtRSI = { 58, "locateOFDMFrame_sdr",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/locateOFDMFrame_sdr.m"
};

static emlrtRSInfo bh_emlrtRSI = { 62, "locateOFDMFrame_sdr",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/locateOFDMFrame_sdr.m"
};

static emlrtRSInfo ch_emlrtRSI = { 16, "max",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/datafun/max.m" };

static emlrtRSInfo dh_emlrtRSI = { 18, "eml_min_or_max",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_min_or_max.m" };

static emlrtRSInfo eh_emlrtRSI = { 88, "eml_min_or_max",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_min_or_max.m" };

static emlrtRSInfo gh_emlrtRSI = { 219, "eml_min_or_max",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_min_or_max.m" };

static emlrtRSInfo hh_emlrtRSI = { 192, "eml_min_or_max",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_min_or_max.m" };

static emlrtRSInfo ih_emlrtRSI = { 41, "find",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/elmat/find.m" };

static emlrtRSInfo jh_emlrtRSI = { 230, "find",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/elmat/find.m" };

static emlrtRSInfo kh_emlrtRSI = { 23, "intersect",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/ops/intersect.m" };

static emlrtRSInfo lh_emlrtRSI = { 65, "eml_setop",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/ops/eml_setop.m" };

static emlrtRSInfo mh_emlrtRSI = { 210, "eml_setop",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/ops/eml_setop.m" };

static emlrtRSInfo nh_emlrtRSI = { 211, "eml_setop",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/ops/eml_setop.m" };

static emlrtRSInfo oh_emlrtRSI = { 214, "eml_setop",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/ops/eml_setop.m" };

static emlrtRSInfo ph_emlrtRSI = { 363, "eml_setop",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/ops/eml_setop.m" };

static emlrtRSInfo qh_emlrtRSI = { 374, "eml_setop",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/ops/eml_setop.m" };

static emlrtRSInfo rh_emlrtRSI = { 401, "eml_setop",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/ops/eml_setop.m" };

static emlrtRSInfo sh_emlrtRSI = { 22, "issorted",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/datafun/issorted.m" };

static emlrtRSInfo th_emlrtRSI = { 11, "eml_li_find",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_li_find.m" };

static emlrtRSInfo uh_emlrtRSI = { 14, "eml_li_find",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_li_find.m" };

static emlrtRSInfo vh_emlrtRSI = { 26, "eml_li_find",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_li_find.m" };

static emlrtRSInfo wh_emlrtRSI = { 39, "eml_li_find",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_li_find.m" };

static emlrtRSInfo xh_emlrtRSI = { 18, "max",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/datafun/max.m" };

static emlrtRSInfo yh_emlrtRSI = { 15, "eml_min_or_max",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_min_or_max.m" };

static emlrtMCInfo bb_emlrtMCI = { 363, 5, "eml_setop",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/ops/eml_setop.m" };

static emlrtMCInfo cb_emlrtMCI = { 374, 9, "eml_setop",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/ops/eml_setop.m" };

static emlrtMCInfo db_emlrtMCI = { 401, 5, "eml_setop",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/ops/eml_setop.m" };

static emlrtMCInfo eb_emlrtMCI = { 14, 5, "eml_li_find",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_li_find.m" };

static emlrtECInfo l_emlrtECI = { -1, 53, 33, "locateOFDMFrame_sdr",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/locateOFDMFrame_sdr.m"
};

static emlrtBCInfo t_emlrtBCI = { -1, -1, 53, 33, "MLocations",
  "locateOFDMFrame_sdr",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/locateOFDMFrame_sdr.m",
  0 };

static emlrtBCInfo u_emlrtBCI = { -1, -1, 58, 1, "peaks", "locateOFDMFrame_sdr",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/locateOFDMFrame_sdr.m",
  0 };

static emlrtBCInfo v_emlrtBCI = { -1, -1, 64, 37, "MLocations",
  "locateOFDMFrame_sdr",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/locateOFDMFrame_sdr.m",
  0 };

static emlrtBCInfo w_emlrtBCI = { -1, -1, 52, 24, "MLocations",
  "locateOFDMFrame_sdr",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/locateOFDMFrame_sdr.m",
  0 };

static emlrtBCInfo x_emlrtBCI = { -1, -1, 53, 5, "peaks", "locateOFDMFrame_sdr",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/locateOFDMFrame_sdr.m",
  0 };

/* Function Declarations */
static void b_eml_error(void);
static int32_T compute_nones(const boolean_T x_data[1224], int32_T n);
static void do_vectors(const real_T a_data[1224], const int32_T a_size[1], const
  real_T b[8], real_T c_data[8], int32_T c_size[1], int32_T ia_data[8], int32_T
  ia_size[1], int32_T ib_data[8], int32_T ib_size[1]);
static void eml_error(void);
static void eml_li_find(const boolean_T x_data[1224], const int32_T x_size[1],
  int32_T y_data[1224], int32_T y_size[1]);

/* Function Definitions */
static void b_eml_error(void)
{
  emlrtPushRtStackR2012b(&u_emlrtRSI, emlrtRootTLSGlobal);
  emlrtErrorWithMessageIdR2012b(emlrtRootTLSGlobal, &ac_emlrtRTEI,
    "Coder:toolbox:eml_setop_unsortedB", 0);
  emlrtPopRtStackR2012b(&u_emlrtRSI, emlrtRootTLSGlobal);
}

static int32_T compute_nones(const boolean_T x_data[1224], int32_T n)
{
  int32_T k;
  boolean_T b5;
  int32_T i;
  k = 0;
  emlrtPushRtStackR2012b(&wh_emlrtRSI, emlrtRootTLSGlobal);
  if (1 > n) {
    b5 = FALSE;
  } else {
    b5 = (n > 2147483646);
  }

  if (b5) {
    emlrtPushRtStackR2012b(&dc_emlrtRSI, emlrtRootTLSGlobal);
    check_forloop_overflow_error();
    emlrtPopRtStackR2012b(&dc_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPopRtStackR2012b(&wh_emlrtRSI, emlrtRootTLSGlobal);
  for (i = 1; i <= n; i++) {
    if (x_data[i - 1]) {
      k++;
    }
  }

  return k;
}

static void do_vectors(const real_T a_data[1224], const int32_T a_size[1], const
  real_T b[8], real_T c_data[8], int32_T c_size[1], int32_T ia_data[8], int32_T
  ia_size[1], int32_T ib_data[8], int32_T ib_size[1])
{
  int32_T ncmax;
  boolean_T y;
  int32_T ialast;
  boolean_T exitg4;
  boolean_T p;
  boolean_T exitg3;
  int32_T nc;
  int32_T iafirst;
  int32_T ibfirst;
  int32_T iblast;
  int32_T b_ialast;
  real_T ak;
  boolean_T exitg2;
  real_T absxk;
  int32_T exponent;
  int32_T b_iblast;
  real_T bk;
  boolean_T exitg1;
  int32_T b_exponent;
  int32_T c_exponent;
  const mxArray *b_y;
  const mxArray *m23;
  int32_T b_ia_data[8];
  const mxArray *c_y;
  const mxArray *d_y;
  real_T b_c_data[8];
  ncmax = muIntScalarMin_sint32(a_size[0], 8);
  c_size[0] = (int8_T)ncmax;
  ia_size[0] = ncmax;
  ib_size[0] = ncmax;
  emlrtPushRtStackR2012b(&mh_emlrtRSI, emlrtRootTLSGlobal);
  y = TRUE;
  if (a_size[0] == 0) {
  } else {
    emlrtPushRtStackR2012b(&sh_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&sh_emlrtRSI, emlrtRootTLSGlobal);
    ialast = 1;
    exitg4 = FALSE;
    while ((exitg4 == FALSE) && (ialast <= a_size[0] - 1)) {
      if ((a_data[ialast - 1] <= a_data[ialast]) || muDoubleScalarIsNaN
          (a_data[ialast])) {
        p = TRUE;
      } else {
        p = FALSE;
      }

      if (!p) {
        y = FALSE;
        exitg4 = TRUE;
      } else {
        ialast++;
      }
    }
  }

  emlrtPopRtStackR2012b(&mh_emlrtRSI, emlrtRootTLSGlobal);
  if (!y) {
    emlrtPushRtStackR2012b(&nh_emlrtRSI, emlrtRootTLSGlobal);
    eml_error();
    emlrtPopRtStackR2012b(&nh_emlrtRSI, emlrtRootTLSGlobal);
  }

  y = TRUE;
  ialast = 1;
  exitg3 = FALSE;
  while ((exitg3 == FALSE) && (ialast < 8)) {
    if ((b[ialast - 1] <= b[ialast]) || muDoubleScalarIsNaN(b[ialast])) {
      p = TRUE;
    } else {
      p = FALSE;
    }

    if (!p) {
      y = FALSE;
      exitg3 = TRUE;
    } else {
      ialast++;
    }
  }

  if (!y) {
    emlrtPushRtStackR2012b(&oh_emlrtRSI, emlrtRootTLSGlobal);
    b_eml_error();
    emlrtPopRtStackR2012b(&oh_emlrtRSI, emlrtRootTLSGlobal);
  }

  nc = 0;
  iafirst = 0;
  ialast = 0;
  ibfirst = 0;
  iblast = 0;
  while ((ialast + 1 <= a_size[0]) && (iblast + 1 <= 8)) {
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

      if ((muDoubleScalarAbs(a_data[ialast] - a_data[b_ialast]) < absxk) ||
          (muDoubleScalarIsInf(a_data[b_ialast]) && muDoubleScalarIsInf
           (a_data[ialast]) && ((a_data[b_ialast] > 0.0) == (a_data[ialast] >
             0.0)))) {
        p = TRUE;
      } else {
        p = FALSE;
      }

      if (p) {
        b_ialast++;
      } else {
        exitg2 = TRUE;
      }
    }

    ialast = b_ialast - 1;
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

      if ((muDoubleScalarAbs(b[iblast] - b[b_iblast]) < absxk) ||
          (muDoubleScalarIsInf(b[b_iblast]) && muDoubleScalarIsInf(b[iblast]) &&
           ((b[b_iblast] > 0.0) == (b[iblast] > 0.0)))) {
        p = TRUE;
      } else {
        p = FALSE;
      }

      if (p) {
        b_iblast++;
      } else {
        exitg1 = TRUE;
      }
    }

    iblast = b_iblast - 1;
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

    if ((muDoubleScalarAbs(bk - ak) < absxk) || (muDoubleScalarIsInf(ak) &&
         muDoubleScalarIsInf(bk) && ((ak > 0.0) == (bk > 0.0)))) {
      p = TRUE;
    } else {
      p = FALSE;
    }

    if (p) {
      nc++;
      c_data[nc - 1] = ak;
      ia_data[nc - 1] = iafirst + 1;
      ib_data[nc - 1] = ibfirst + 1;
      ialast = b_ialast;
      iafirst = b_ialast;
      iblast = b_iblast;
      ibfirst = b_iblast;
    } else {
      if ((ak < bk) || muDoubleScalarIsNaN(bk)) {
        p = TRUE;
      } else {
        p = FALSE;
      }

      if (p) {
        ialast = b_ialast;
        iafirst = b_ialast;
      } else {
        iblast = b_iblast;
        ibfirst = b_iblast;
      }
    }
  }

  if (ncmax > 0) {
    if (nc <= ncmax) {
    } else {
      emlrtPushRtStackR2012b(&ph_emlrtRSI, emlrtRootTLSGlobal);
      b_y = NULL;
      m23 = mxCreateString("Assertion failed.");
      emlrtAssign(&b_y, m23);
      b_error(b_y, &bb_emlrtMCI);
      emlrtPopRtStackR2012b(&ph_emlrtRSI, emlrtRootTLSGlobal);
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
      emlrtPushRtStackR2012b(&qh_emlrtRSI, emlrtRootTLSGlobal);
      c_y = NULL;
      m23 = mxCreateString("Assertion failed.");
      emlrtAssign(&c_y, m23);
      b_error(c_y, &cb_emlrtMCI);
      emlrtPopRtStackR2012b(&qh_emlrtRSI, emlrtRootTLSGlobal);
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
      emlrtPushRtStackR2012b(&rh_emlrtRSI, emlrtRootTLSGlobal);
      d_y = NULL;
      m23 = mxCreateString("Assertion failed.");
      emlrtAssign(&d_y, m23);
      b_error(d_y, &db_emlrtMCI);
      emlrtPopRtStackR2012b(&rh_emlrtRSI, emlrtRootTLSGlobal);
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

static void eml_error(void)
{
  emlrtPushRtStackR2012b(&u_emlrtRSI, emlrtRootTLSGlobal);
  emlrtErrorWithMessageIdR2012b(emlrtRootTLSGlobal, &ac_emlrtRTEI,
    "Coder:toolbox:eml_setop_unsortedA", 0);
  emlrtPopRtStackR2012b(&u_emlrtRSI, emlrtRootTLSGlobal);
}

static void eml_li_find(const boolean_T x_data[1224], const int32_T x_size[1],
  int32_T y_data[1224], int32_T y_size[1])
{
  int32_T k;
  const mxArray *y;
  const mxArray *m24;
  int32_T i;
  emlrtPushRtStackR2012b(&th_emlrtRSI, emlrtRootTLSGlobal);
  k = compute_nones(x_data, x_size[0]);
  emlrtPopRtStackR2012b(&th_emlrtRSI, emlrtRootTLSGlobal);
  if (k <= x_size[0]) {
  } else {
    emlrtPushRtStackR2012b(&uh_emlrtRSI, emlrtRootTLSGlobal);
    y = NULL;
    m24 = mxCreateString("Assertion failed.");
    emlrtAssign(&y, m24);
    b_error(y, &eb_emlrtMCI);
    emlrtPopRtStackR2012b(&uh_emlrtRSI, emlrtRootTLSGlobal);
  }

  y_size[0] = k;
  k = 0;
  emlrtPushRtStackR2012b(&vh_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&vh_emlrtRSI, emlrtRootTLSGlobal);
  for (i = 1; i <= x_size[0]; i++) {
    if (x_data[i - 1]) {
      y_data[k] = i;
      k++;
    }
  }
}

void locateShortpreamble(const real_T M_data[1224], real_T
  *preambleEstimatedLocation, real_T *numPeaks)
{
  int32_T ixstart;
  real_T mtmp;
  int32_T ix;
  boolean_T exitg2;
  int32_T ii_data[1224];
  int32_T ii;
  boolean_T exitg1;
  boolean_T guard1 = FALSE;
  int32_T loop_ub;
  int16_T b_ii_data[1224];
  int16_T MLocations_data[1224];
  int32_T peaks_data[1224];
  real_T MLocationGuesses[8];
  int32_T i21;
  real_T b_MLocations_data[1224];
  int32_T ii_size[1];
  int32_T ib_size[1];
  int32_T ib_data[8];
  int32_T ia_size[1];
  int32_T ia_data[8];
  int32_T c_size[1];
  real_T c_data[8];
  boolean_T b_peaks_data[1224];
  int32_T peaks_size[1];

  /*  Locate of the start of the actual preamble from timing metric */
  /* % Find peaks of correlation */
  /*  Adjust threshold */
  emlrtPushRtStackR2012b(&wg_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&ch_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&dh_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&eh_emlrtRSI, emlrtRootTLSGlobal);
  ixstart = 1;
  mtmp = M_data[0];
  if (muDoubleScalarIsNaN(M_data[0])) {
    emlrtPushRtStackR2012b(&hh_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&hh_emlrtRSI, emlrtRootTLSGlobal);
    ix = 2;
    exitg2 = FALSE;
    while ((exitg2 == FALSE) && (ix <= 1224)) {
      ixstart = ix;
      if (!muDoubleScalarIsNaN(M_data[ix - 1])) {
        mtmp = M_data[ix - 1];
        exitg2 = TRUE;
      } else {
        ix++;
      }
    }
  }

  if (ixstart < 1224) {
    emlrtPushRtStackR2012b(&gh_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&gh_emlrtRSI, emlrtRootTLSGlobal);
    while (ixstart + 1 <= 1224) {
      if (M_data[ixstart] > mtmp) {
        mtmp = M_data[ixstart];
      }

      ixstart++;
    }
  }

  emlrtPopRtStackR2012b(&eh_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&dh_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&ch_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&wg_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&xg_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&ih_emlrtRSI, emlrtRootTLSGlobal);
  ixstart = 0;
  emlrtPushRtStackR2012b(&jh_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&jh_emlrtRSI, emlrtRootTLSGlobal);
  ii = 1;
  exitg1 = FALSE;
  while ((exitg1 == FALSE) && (ii <= 1224)) {
    guard1 = FALSE;
    if (M_data[ii - 1] > mtmp * 0.6) {
      ixstart++;
      ii_data[ixstart - 1] = ii;
      if (ixstart >= 1224) {
        exitg1 = TRUE;
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

  if (1 > ixstart) {
    loop_ub = 0;
  } else {
    loop_ub = ixstart;
  }

  for (ixstart = 0; ixstart < loop_ub; ixstart++) {
    b_ii_data[ixstart] = (int16_T)ii_data[ixstart];
  }

  for (ixstart = 0; ixstart < loop_ub; ixstart++) {
    ii_data[ixstart] = b_ii_data[ixstart];
  }

  emlrtPopRtStackR2012b(&ih_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&xg_emlrtRSI, emlrtRootTLSGlobal);

  /*  Correct estimate to start of preamble not its center */
  for (ixstart = 0; ixstart < loop_ub; ixstart++) {
    MLocations_data[ixstart] = (int16_T)(ii_data[ixstart] - 9);
  }

  /*  Frame Detection */
  ii = (int16_T)loop_ub;
  for (ixstart = 0; ixstart < ii; ixstart++) {
    peaks_data[ixstart] = 0;
  }

  /*  Determine correct peak  */
  ix = 1;
  while (ix - 1 <= loop_ub - 1) {
    emlrtDynamicBoundsCheckFastR2012b(ix, 1, loop_ub, &w_emlrtBCI,
      emlrtRootTLSGlobal);
    for (ixstart = 0; ixstart < 8; ixstart++) {
      MLocationGuesses[ixstart] = (MLocations_data[ix - 1] + 16 * ixstart) + 16;
    }

    if (ix > loop_ub) {
      ixstart = 0;
      i21 = 0;
    } else {
      ixstart = emlrtDynamicBoundsCheckFastR2012b(ix, 1, loop_ub, &t_emlrtBCI,
        emlrtRootTLSGlobal) - 1;
      i21 = emlrtDynamicBoundsCheckFastR2012b(loop_ub, 1, loop_ub, &t_emlrtBCI,
        emlrtRootTLSGlobal);
    }

    emlrtVectorVectorIndexCheckR2012b(loop_ub, 1, 1, i21 - ixstart, &l_emlrtECI,
      emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&yg_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&kh_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&lh_emlrtRSI, emlrtRootTLSGlobal);
    ii_size[0] = i21 - ixstart;
    ii = i21 - ixstart;
    for (i21 = 0; i21 < ii; i21++) {
      b_MLocations_data[i21] = MLocations_data[ixstart + i21];
    }

    do_vectors(b_MLocations_data, ii_size, MLocationGuesses, c_data, c_size,
               ia_data, ia_size, ib_data, ib_size);
    emlrtPopRtStackR2012b(&lh_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&kh_emlrtRSI, emlrtRootTLSGlobal);
    ixstart = (int16_T)loop_ub;
    peaks_data[emlrtDynamicBoundsCheckFastR2012b(ix, 1, ixstart, &x_emlrtBCI,
      emlrtRootTLSGlobal) - 1] = c_size[0];
    emlrtPopRtStackR2012b(&yg_emlrtRSI, emlrtRootTLSGlobal);
    ix++;
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, emlrtRootTLSGlobal);
  }

  /*  Have at least 5 peaks for positive match */
  /*  (TUNABLE) */
  emlrtPushRtStackR2012b(&ah_emlrtRSI, emlrtRootTLSGlobal);
  peaks_size[0] = (int16_T)loop_ub;
  ii = (int16_T)loop_ub;
  for (ixstart = 0; ixstart < ii; ixstart++) {
    b_peaks_data[ixstart] = (peaks_data[ixstart] < 7);
  }

  eml_li_find(b_peaks_data, peaks_size, ii_data, ii_size);
  emlrtPopRtStackR2012b(&ah_emlrtRSI, emlrtRootTLSGlobal);
  ii = ii_size[0];
  for (ixstart = 0; ixstart < ii; ixstart++) {
    i21 = (int16_T)loop_ub;
    peaks_data[emlrtDynamicBoundsCheckFastR2012b(ii_data[ixstart], 1, i21,
      &u_emlrtBCI, emlrtRootTLSGlobal) - 1] = 0;
  }

  /*  Pick earliest peak in time */
  if (!((int16_T)loop_ub == 0)) {
    emlrtPushRtStackR2012b(&bh_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&xh_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&yh_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&eh_emlrtRSI, emlrtRootTLSGlobal);
    ixstart = peaks_data[0];
    ii = 1;
    if (((int16_T)loop_ub > 1) && (1 < (int16_T)loop_ub)) {
      emlrtPushRtStackR2012b(&gh_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPopRtStackR2012b(&gh_emlrtRSI, emlrtRootTLSGlobal);
      for (ix = 2; ix <= (int16_T)loop_ub; ix++) {
        if (peaks_data[ix - 1] > ixstart) {
          ixstart = peaks_data[ix - 1];
          ii = ix;
        }
      }
    }

    emlrtPopRtStackR2012b(&eh_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&yh_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&xh_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&bh_emlrtRSI, emlrtRootTLSGlobal);
    *numPeaks = ixstart;
    if (ixstart > 0) {
      *preambleEstimatedLocation =
        MLocations_data[emlrtDynamicBoundsCheckFastR2012b(ii, 1, loop_ub,
        &v_emlrtBCI, emlrtRootTLSGlobal) - 1];
    } else {
      *preambleEstimatedLocation = -1.0;

      /*  no desirable location found */
    }
  } else {
    *preambleEstimatedLocation = -1.0;
    *numPeaks = 0.0;
  }

  /*  Normalize max peaks found */
  *numPeaks /= 8.0;
}

/* End of code generation (locateOFDMFrame_sdr.c) */
