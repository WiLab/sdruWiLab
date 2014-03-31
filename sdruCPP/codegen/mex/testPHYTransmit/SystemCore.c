/*
 * SystemCore.c
 *
 * Code generation for function 'SystemCore'
 *
 * C source code generated on: Thu Feb 27 11:47:47 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testPHYTransmit.h"
#include "SystemCore.h"
#include "SDRuTransmitter.h"
#include "closeDataConnection.h"
#include "SDRuReceiver.h"
#include "SystemProp.h"
#include "find.h"
#include "testPHYTransmit_emxutil.h"
#include "Nondirect1.h"
#include "OFDMModulator.h"
#include "testPHYTransmit_mexutil.h"
#include "testPHYTransmit_data.h"

/* Variable Definitions */
static emlrtRSInfo uc_emlrtRSI = { 345, "OFDMModulator",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/OFDMModulator.m" };

static emlrtRSInfo vc_emlrtRSI = { 374, "OFDMModulator",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/OFDMModulator.m" };

static emlrtRSInfo wc_emlrtRSI = { 375, "OFDMModulator",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/OFDMModulator.m" };

static emlrtRSInfo xc_emlrtRSI = { 388, "OFDMModulator",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/OFDMModulator.m" };

static emlrtRSInfo bd_emlrtRSI = { 415, "OFDMModulator",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/OFDMModulator.m" };

static emlrtRSInfo cd_emlrtRSI = { 419, "OFDMModulator",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/OFDMModulator.m" };

static emlrtRSInfo dd_emlrtRSI = { 423, "OFDMModulator",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/OFDMModulator.m" };

static emlrtRSInfo ed_emlrtRSI = { 424, "OFDMModulator",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/OFDMModulator.m" };

static emlrtRSInfo ig_emlrtRSI = { 1, "Nondirect",
  "/Applications/MATLAB_R2013b.app/toolbox/shared/system/coder/+matlab/+system/+mixin/+coder/Nondirect.p"
};

static emlrtRSInfo yl_emlrtRSI = { 93, "reportSDRuStatus",
  "/Users/travis/Documents/sdru/reportSDRuStatus.m" };

static emlrtRSInfo bm_emlrtRSI = { 83, "reportSDRuStatus",
  "/Users/travis/Documents/sdru/reportSDRuStatus.m" };

static emlrtRSInfo dm_emlrtRSI = { 73, "reportSDRuStatus",
  "/Users/travis/Documents/sdru/reportSDRuStatus.m" };

static emlrtRSInfo fm_emlrtRSI = { 63, "reportSDRuStatus",
  "/Users/travis/Documents/sdru/reportSDRuStatus.m" };

static emlrtRSInfo hm_emlrtRSI = { 53, "reportSDRuStatus",
  "/Users/travis/Documents/sdru/reportSDRuStatus.m" };

static emlrtRSInfo jm_emlrtRSI = { 42, "reportSDRuStatus",
  "/Users/travis/Documents/sdru/reportSDRuStatus.m" };

static emlrtRTEInfo f_emlrtRTEI = { 1, 13, "SystemCore",
  "/Applications/MATLAB_R2013b.app/toolbox/shared/system/coder/+matlab/+system/+coder/SystemCore.p"
};

static emlrtBCInfo d_emlrtBCI = { 1, 768, 403, 9, "packedData", "OFDMModulator",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/OFDMModulator.m", 0 };

/* Function Declarations */
static void SystemCore_validateProperties(void);
static const mxArray *c_message(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, emlrtMCInfo *location);

/* Function Definitions */
static void SystemCore_validateProperties(void)
{
}

static const mxArray *c_message(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, emlrtMCInfo *location)
{
  const mxArray *pArrays[3];
  const mxArray *m30;
  pArrays[0] = b;
  pArrays[1] = c;
  pArrays[2] = d;
  return emlrtCallMATLABR2012b(sp, 1, &m30, 3, pArrays, "message", TRUE,
    location);
}

void SystemCore_step(const emlrtStack *sp, OFDMModulator *obj, creal_T
                     varargout_1[64])
{
  const mxArray *y;
  static const int32_T iv10[2] = { 1, 45 };

  const mxArray *m1;
  char_T cv11[45];
  int32_T i;
  static const char_T cv12[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C',
    'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv11[2] = { 1, 4 };

  char_T cv13[4];
  static const char_T cv14[4] = { 's', 't', 'e', 'p' };

  OFDMModulator *b_obj;
  const mxArray *c_y;
  static const int32_T iv12[2] = { 1, 51 };

  char_T cv15[51];
  static const char_T cv16[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l',
    'e', 'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *d_y;
  static const int32_T iv13[2] = { 1, 5 };

  char_T cv17[5];
  static const char_T cv18[5] = { 's', 'e', 't', 'u', 'p' };

  real_T value[64];
  static const int8_T iv14[11] = { 0, 1, 2, 3, 4, 5, 59, 60, 61, 62, 63 };

  boolean_T x[64];
  int8_T ii_data[64];
  int32_T ii;
  boolean_T exitg1;
  boolean_T guard1 = FALSE;
  int8_T b_ii_data[64];
  static const creal_T dcv1[53] = { { 0.0, 0.0 }, { 0.0, 0.0 }, { 1.0, 1.0 }, {
      0.0, 0.0 }, { 0.0, 0.0 }, { 0.0, 0.0 }, { -1.0, -1.0 }, { 0.0, 0.0 }, {
      0.0, 0.0 }, { 0.0, 0.0 }, { 1.0, 1.0 }, { 0.0, 0.0 }, { 0.0, 0.0 }, { 0.0,
      0.0 }, { -1.0, -1.0 }, { 0.0, 0.0 }, { 0.0, 0.0 }, { 0.0, 0.0 }, { -1.0,
      -1.0 }, { 0.0, 0.0 }, { 0.0, 0.0 }, { 0.0, 0.0 }, { 1.0, 1.0 }, { 0.0, 0.0
    }, { 0.0, 0.0 }, { 0.0, 0.0 }, { 0.0, 0.0 }, { 0.0, 0.0 }, { 0.0, 0.0 }, {
      0.0, 0.0 }, { -1.0, -1.0 }, { 0.0, 0.0 }, { 0.0, 0.0 }, { 0.0, 0.0 }, { -
      1.0, -1.0 }, { 0.0, 0.0 }, { 0.0, 0.0 }, { 0.0, 0.0 }, { 1.0, 1.0 }, { 0.0,
      0.0 }, { 0.0, 0.0 }, { 0.0, 0.0 }, { 1.0, 1.0 }, { 0.0, 0.0 }, { 0.0, 0.0
    }, { 0.0, 0.0 }, { 1.0, 1.0 }, { 0.0, 0.0 }, { 0.0, 0.0 }, { 0.0, 0.0 }, {
      1.0, 1.0 }, { 0.0, 0.0 }, { 0.0, 0.0 } };

  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  if (!obj->isReleased) {
  } else {
    y = NULL;
    m1 = mxCreateCharArray(2, iv10);
    for (i = 0; i < 45; i++) {
      cv11[i] = cv12[i];
    }

    emlrtInitCharArrayR2013a(sp, 45, m1, cv11);
    emlrtAssign(&y, m1);
    b_y = NULL;
    m1 = mxCreateCharArray(2, iv11);
    for (i = 0; i < 4; i++) {
      cv13[i] = cv14[i];
    }

    emlrtInitCharArrayR2013a(sp, 4, m1, cv13);
    emlrtAssign(&b_y, m1);
    st.site = &gb_emlrtRSI;
    c_error(&st, message(&st, y, b_y, &emlrtMCI), &emlrtMCI);
  }

  if (!obj->isInitialized) {
    st.site = &gb_emlrtRSI;
    b_obj = obj;
    if (!b_obj->isInitialized) {
    } else {
      c_y = NULL;
      m1 = mxCreateCharArray(2, iv12);
      for (i = 0; i < 51; i++) {
        cv15[i] = cv16[i];
      }

      emlrtInitCharArrayR2013a(&st, 51, m1, cv15);
      emlrtAssign(&c_y, m1);
      d_y = NULL;
      m1 = mxCreateCharArray(2, iv13);
      for (i = 0; i < 5; i++) {
        cv17[i] = cv18[i];
      }

      emlrtInitCharArrayR2013a(&st, 5, m1, cv17);
      emlrtAssign(&d_y, m1);
      b_st.site = &gb_emlrtRSI;
      c_error(&b_st, message(&b_st, c_y, d_y, &emlrtMCI), &emlrtMCI);
    }

    b_st.site = &gb_emlrtRSI;
    b_obj->isInitialized = TRUE;
    c_st.site = &hb_emlrtRSI;
    b_st.site = &gb_emlrtRSI;
    c_st.site = &gb_emlrtRSI;
    c_st.site = &gb_emlrtRSI;
    b_st.site = &gb_emlrtRSI;
    c_st.site = &gb_emlrtRSI;
    c_st.site = &gb_emlrtRSI;
    c_st.site = &gb_emlrtRSI;
    c_st.site = &gb_emlrtRSI;
    b_st.site = &gb_emlrtRSI;
    c_st.site = &gb_emlrtRSI;
    b_st.site = &gb_emlrtRSI;
    c_st.site = &gb_emlrtRSI;
    b_st.site = &gb_emlrtRSI;
    c_st.site = &gb_emlrtRSI;
    b_st.site = &gb_emlrtRSI;
    c_st.site = &gb_emlrtRSI;
    c_st.site = &gb_emlrtRSI;
    b_st.site = &gb_emlrtRSI;
    b_st.site = &gb_emlrtRSI;
    b_st.site = &gb_emlrtRSI;
    b_st.site = &gb_emlrtRSI;
    c_st.site = &uc_emlrtRSI;
    c_st.site = &vc_emlrtRSI;
    for (i = 0; i < 64; i++) {
      b_obj->pFullGrid[i] = 1.0;
    }

    for (i = 0; i < 64; i++) {
      value[i] = b_obj->pFullGrid[i];
    }

    for (i = 0; i < 11; i++) {
      value[iv14[i]] = 0.0;
    }

    c_st.site = &wc_emlrtRSI;
    for (i = 0; i < 64; i++) {
      b_obj->pFullGrid[i] = value[i];
    }

    c_st.site = &xc_emlrtRSI;
    for (i = 0; i < 64; i++) {
      x[i] = (b_obj->pFullGrid[i] == 1.0);
    }

    i = 0;
    ii = 1;
    exitg1 = FALSE;
    while ((exitg1 == FALSE) && (ii < 65)) {
      guard1 = FALSE;
      if (x[ii - 1]) {
        i++;
        ii_data[i - 1] = (int8_T)ii;
        if (i >= 64) {
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

    if (1 > i) {
      ii = 0;
    } else {
      ii = i;
    }

    for (i = 0; i < ii; i++) {
      b_ii_data[i] = ii_data[i];
    }

    for (i = 0; i < ii; i++) {
      ii_data[i] = b_ii_data[i];
    }

    c_st.site = &xc_emlrtRSI;
    i = b_obj->pDataLinearIndices->size[0];
    b_obj->pDataLinearIndices->size[0] = ii;
    emxEnsureCapacity(&c_st, (emxArray__common *)b_obj->pDataLinearIndices, i,
                      (int32_T)sizeof(real_T), &f_emlrtRTEI);
    for (i = 0; i < ii; i++) {
      b_obj->pDataLinearIndices->data[i] = ii_data[i];
    }

    b_st.site = &gb_emlrtRSI;
  }

  st.site = &gb_emlrtRSI;
  st.site = &gb_emlrtRSI;
  st.site = &gb_emlrtRSI;
  b_st.site = &gb_emlrtRSI;
  b_st.site = &gb_emlrtRSI;
  st.site = &gb_emlrtRSI;
  st.site = &gb_emlrtRSI;
  st.site = &gb_emlrtRSI;
  b_st.site = &gb_emlrtRSI;
  b_st.site = &gb_emlrtRSI;
  st.site = &gb_emlrtRSI;
  st.site = &gb_emlrtRSI;
  st.site = &gb_emlrtRSI;
  OFDMModulator_stepImpl(&st, obj, dcv1, varargout_1);
}

void b_SystemCore_step(const emlrtStack *sp, OFDMModulator *obj, creal_T
  varargout_1[64])
{
  const mxArray *y;
  static const int32_T iv15[2] = { 1, 45 };

  const mxArray *m2;
  char_T cv19[45];
  int32_T i;
  static const char_T cv20[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C',
    'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv16[2] = { 1, 4 };

  char_T cv21[4];
  static const char_T cv22[4] = { 's', 't', 'e', 'p' };

  OFDMModulator *b_obj;
  const mxArray *c_y;
  static const int32_T iv17[2] = { 1, 51 };

  char_T cv23[51];
  static const char_T cv24[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l',
    'e', 'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *d_y;
  static const int32_T iv18[2] = { 1, 5 };

  char_T cv25[5];
  static const char_T cv26[5] = { 's', 'e', 't', 'u', 'p' };

  real_T value[64];
  static const int8_T iv19[11] = { 0, 1, 2, 3, 4, 5, 59, 60, 61, 62, 63 };

  boolean_T x[64];
  int8_T ii_data[64];
  int32_T ii;
  boolean_T exitg1;
  boolean_T guard1 = FALSE;
  int8_T b_ii_data[64];
  creal_T dcv2[53];
  static const int8_T iv20[53] = { 1, 1, -1, -1, 1, 1, -1, 1, -1, 1, 1, 1, 1, 1,
    1, -1, -1, 1, 1, -1, 1, -1, 1, 1, 1, 1, 0, 1, -1, -1, 1, 1, -1, 1, -1, 1, -1,
    -1, -1, -1, -1, 1, 1, -1, -1, 1, -1, 1, -1, 1, 1, 1, 1 };

  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  if (!obj->isReleased) {
  } else {
    y = NULL;
    m2 = mxCreateCharArray(2, iv15);
    for (i = 0; i < 45; i++) {
      cv19[i] = cv20[i];
    }

    emlrtInitCharArrayR2013a(sp, 45, m2, cv19);
    emlrtAssign(&y, m2);
    b_y = NULL;
    m2 = mxCreateCharArray(2, iv16);
    for (i = 0; i < 4; i++) {
      cv21[i] = cv22[i];
    }

    emlrtInitCharArrayR2013a(sp, 4, m2, cv21);
    emlrtAssign(&b_y, m2);
    st.site = &gb_emlrtRSI;
    c_error(&st, message(&st, y, b_y, &emlrtMCI), &emlrtMCI);
  }

  if (!obj->isInitialized) {
    st.site = &gb_emlrtRSI;
    b_obj = obj;
    if (!b_obj->isInitialized) {
    } else {
      c_y = NULL;
      m2 = mxCreateCharArray(2, iv17);
      for (i = 0; i < 51; i++) {
        cv23[i] = cv24[i];
      }

      emlrtInitCharArrayR2013a(&st, 51, m2, cv23);
      emlrtAssign(&c_y, m2);
      d_y = NULL;
      m2 = mxCreateCharArray(2, iv18);
      for (i = 0; i < 5; i++) {
        cv25[i] = cv26[i];
      }

      emlrtInitCharArrayR2013a(&st, 5, m2, cv25);
      emlrtAssign(&d_y, m2);
      b_st.site = &gb_emlrtRSI;
      c_error(&b_st, message(&b_st, c_y, d_y, &emlrtMCI), &emlrtMCI);
    }

    b_st.site = &gb_emlrtRSI;
    b_obj->isInitialized = TRUE;
    c_st.site = &hb_emlrtRSI;
    b_st.site = &gb_emlrtRSI;
    c_st.site = &gb_emlrtRSI;
    c_st.site = &gb_emlrtRSI;
    b_st.site = &gb_emlrtRSI;
    c_st.site = &gb_emlrtRSI;
    c_st.site = &gb_emlrtRSI;
    c_st.site = &gb_emlrtRSI;
    c_st.site = &gb_emlrtRSI;
    b_st.site = &gb_emlrtRSI;
    c_st.site = &gb_emlrtRSI;
    b_st.site = &gb_emlrtRSI;
    c_st.site = &gb_emlrtRSI;
    b_st.site = &gb_emlrtRSI;
    c_st.site = &gb_emlrtRSI;
    b_st.site = &gb_emlrtRSI;
    c_st.site = &gb_emlrtRSI;
    c_st.site = &gb_emlrtRSI;
    b_st.site = &gb_emlrtRSI;
    b_st.site = &gb_emlrtRSI;
    b_st.site = &gb_emlrtRSI;
    b_st.site = &gb_emlrtRSI;
    c_st.site = &uc_emlrtRSI;
    c_st.site = &vc_emlrtRSI;
    for (i = 0; i < 64; i++) {
      b_obj->pFullGrid[i] = 1.0;
    }

    for (i = 0; i < 64; i++) {
      value[i] = b_obj->pFullGrid[i];
    }

    for (i = 0; i < 11; i++) {
      value[iv19[i]] = 0.0;
    }

    c_st.site = &wc_emlrtRSI;
    for (i = 0; i < 64; i++) {
      b_obj->pFullGrid[i] = value[i];
    }

    c_st.site = &xc_emlrtRSI;
    for (i = 0; i < 64; i++) {
      x[i] = (b_obj->pFullGrid[i] == 1.0);
    }

    i = 0;
    ii = 1;
    exitg1 = FALSE;
    while ((exitg1 == FALSE) && (ii < 65)) {
      guard1 = FALSE;
      if (x[ii - 1]) {
        i++;
        ii_data[i - 1] = (int8_T)ii;
        if (i >= 64) {
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

    if (1 > i) {
      ii = 0;
    } else {
      ii = i;
    }

    for (i = 0; i < ii; i++) {
      b_ii_data[i] = ii_data[i];
    }

    for (i = 0; i < ii; i++) {
      ii_data[i] = b_ii_data[i];
    }

    c_st.site = &xc_emlrtRSI;
    i = b_obj->pDataLinearIndices->size[0];
    b_obj->pDataLinearIndices->size[0] = ii;
    emxEnsureCapacity(&c_st, (emxArray__common *)b_obj->pDataLinearIndices, i,
                      (int32_T)sizeof(real_T), &f_emlrtRTEI);
    for (i = 0; i < ii; i++) {
      b_obj->pDataLinearIndices->data[i] = ii_data[i];
    }

    b_st.site = &gb_emlrtRSI;
  }

  st.site = &gb_emlrtRSI;
  st.site = &gb_emlrtRSI;
  st.site = &gb_emlrtRSI;
  b_st.site = &gb_emlrtRSI;
  b_st.site = &gb_emlrtRSI;
  st.site = &gb_emlrtRSI;
  st.site = &gb_emlrtRSI;
  st.site = &gb_emlrtRSI;
  b_st.site = &gb_emlrtRSI;
  b_st.site = &gb_emlrtRSI;
  st.site = &gb_emlrtRSI;
  st.site = &gb_emlrtRSI;
  for (i = 0; i < 53; i++) {
    dcv2[i].re = iv20[i];
    dcv2[i].im = 0.0;
  }

  st.site = &gb_emlrtRSI;
  OFDMModulator_stepImpl(&st, obj, dcv2, varargout_1);
}

void c_SystemCore_step(const emlrtStack *sp, commcodegen_CRCGenerator *obj,
  const real_T varargin_1[560], real_T varargout_1[563])
{
  const mxArray *y;
  static const int32_T iv24[2] = { 1, 45 };

  const mxArray *m5;
  char_T cv31[45];
  int32_T i;
  static const char_T cv32[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C',
    'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv25[2] = { 1, 4 };

  char_T cv33[4];
  static const char_T cv34[4] = { 's', 't', 'e', 'p' };

  commcodegen_CRCGenerator *b_obj;
  const mxArray *c_y;
  static const int32_T iv26[2] = { 1, 51 };

  char_T cv35[51];
  static const char_T cv36[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l',
    'e', 'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *d_y;
  static const int32_T iv27[2] = { 1, 5 };

  char_T cv37[5];
  static const char_T cv38[5] = { 's', 'e', 't', 'u', 'p' };

  int32_T k;
  static const int16_T value[8] = { 560, 1, 1, 1, 1, 1, 1, 1 };

  boolean_T anyInputSizeChanged;
  boolean_T exitg1;
  static const int16_T iv28[8] = { 560, 1, 1, 1, 1, 1, 1, 1 };

  comm_CRCGenerator_0 *c_obj;
  uint32_T shReg;
  uint32_T input;
  uint32_T bitMask;
  int32_T j;
  uint32_T inpBit;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (!obj->isReleased) {
  } else {
    y = NULL;
    m5 = mxCreateCharArray(2, iv24);
    for (i = 0; i < 45; i++) {
      cv31[i] = cv32[i];
    }

    emlrtInitCharArrayR2013a(sp, 45, m5, cv31);
    emlrtAssign(&y, m5);
    b_y = NULL;
    m5 = mxCreateCharArray(2, iv25);
    for (i = 0; i < 4; i++) {
      cv33[i] = cv34[i];
    }

    emlrtInitCharArrayR2013a(sp, 4, m5, cv33);
    emlrtAssign(&b_y, m5);
    st.site = &gb_emlrtRSI;
    c_error(&st, message(&st, y, b_y, &emlrtMCI), &emlrtMCI);
  }

  if (!obj->isInitialized) {
    st.site = &gb_emlrtRSI;
    b_obj = obj;
    if (!b_obj->isInitialized) {
    } else {
      c_y = NULL;
      m5 = mxCreateCharArray(2, iv26);
      for (i = 0; i < 51; i++) {
        cv35[i] = cv36[i];
      }

      emlrtInitCharArrayR2013a(&st, 51, m5, cv35);
      emlrtAssign(&c_y, m5);
      d_y = NULL;
      m5 = mxCreateCharArray(2, iv27);
      for (i = 0; i < 5; i++) {
        cv37[i] = cv38[i];
      }

      emlrtInitCharArrayR2013a(&st, 5, m5, cv37);
      emlrtAssign(&d_y, m5);
      b_st.site = &gb_emlrtRSI;
      c_error(&b_st, message(&b_st, c_y, d_y, &emlrtMCI), &emlrtMCI);
    }

    b_st.site = &gb_emlrtRSI;
    b_obj->isInitialized = TRUE;
    b_st.site = &gb_emlrtRSI;
    b_st.site = &gb_emlrtRSI;
    b_st.site = &gb_emlrtRSI;
    for (k = 0; k < 8; k++) {
      b_obj->inputVarSize1[k] = (uint32_T)value[k];
    }

    b_st.site = &gb_emlrtRSI;
    b_st.site = &gb_emlrtRSI;
    b_st.site = &gb_emlrtRSI;
    b_st.site = &gb_emlrtRSI;
    b_st.site = &gb_emlrtRSI;
    b_st.site = &gb_emlrtRSI;
    b_st.site = &gb_emlrtRSI;
    b_st.site = &gb_emlrtRSI;
  }

  st.site = &gb_emlrtRSI;
  st.site = &gb_emlrtRSI;
  st.site = &gb_emlrtRSI;
  b_st.site = &gb_emlrtRSI;
  b_st.site = &gb_emlrtRSI;
  st.site = &gb_emlrtRSI;
  st.site = &gb_emlrtRSI;
  b_obj = obj;
  anyInputSizeChanged = FALSE;
  k = 0;
  exitg1 = FALSE;
  while ((exitg1 == FALSE) && (k < 8)) {
    if (b_obj->inputVarSize1[k] != (uint32_T)iv28[k]) {
      anyInputSizeChanged = TRUE;
      b_st.site = &gb_emlrtRSI;
      for (k = 0; k < 8; k++) {
        b_obj->inputVarSize1[k] = (uint32_T)value[k];
      }

      exitg1 = TRUE;
    } else {
      k++;
    }
  }

  if (anyInputSizeChanged) {
    st.site = &gb_emlrtRSI;
    st.site = &gb_emlrtRSI;
  }

  st.site = &gb_emlrtRSI;
  b_st.site = &gb_emlrtRSI;
  b_st.site = &gb_emlrtRSI;
  st.site = &gb_emlrtRSI;
  st.site = &gb_emlrtRSI;
  st.site = &gb_emlrtRSI;
  b_obj = obj;
  b_st.site = &ig_emlrtRSI;
  b_st.site = &ig_emlrtRSI;
  b_st.site = &ig_emlrtRSI;
  b_st.site = &ig_emlrtRSI;
  b_st.site = &ig_emlrtRSI;
  b_st.site = &ig_emlrtRSI;
  c_obj = &b_obj->cSFunObject;

  /* System object Outputs function: comm.CRCGenerator */
  /* Initialize for current sub-frame */
  shReg = 0U;
  k = 0;
  for (i = 0; i < 187; i++) {
    input = 0U;
    bitMask = 4U;
    for (j = 0; j < 3; j++) {
      if (k < 560) {
        inpBit = (uint32_T)varargin_1[k] & 1U;
        varargout_1[k] = inpBit;

        /* Build input data chunk */
        input |= bitMask * inpBit;
        bitMask >>= 1U;
        k++;
      }
    }

    /* Retrieve value from CRC table and update register */
    shReg = c_obj->P0_CRCTable[shReg & 7U] ^ (shReg << 3U | input);
  }

  /* Process the leftover bits */
  for (i = 0; i < 2; i++) {
    k = (int32_T)(shReg >> 2U & 1U);
    shReg <<= 1U;
    if ((uint32_T)k != 0U) {
      shReg ^= 1U;
    }
  }

  /* Apply final XOR */
  /* Output the register */
  varargout_1[560] = (int32_T)(shReg >> 2U) & 1;
  varargout_1[561] = (int32_T)(shReg >> 1U) & 1;
  varargout_1[562] = (int32_T)shReg & 1;
  b_st.site = &ig_emlrtRSI;
}

void d_SystemCore_step(const emlrtStack *sp, commcodegen_BPSKModulator *obj,
  const real_T varargin_1[563], creal_T varargout_1[563])
{
  const mxArray *y;
  static const int32_T iv29[2] = { 1, 45 };

  const mxArray *m6;
  char_T cv39[45];
  int32_T i;
  static const char_T cv40[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C',
    'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv30[2] = { 1, 4 };

  char_T cv41[4];
  static const char_T cv42[4] = { 's', 't', 'e', 'p' };

  commcodegen_BPSKModulator *b_obj;
  const mxArray *c_y;
  static const int32_T iv31[2] = { 1, 51 };

  char_T cv43[51];
  static const char_T cv44[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l',
    'e', 'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *d_y;
  static const int32_T iv32[2] = { 1, 5 };

  char_T cv45[5];
  static const char_T cv46[5] = { 's', 'e', 't', 'u', 'p' };

  static const int16_T value[8] = { 563, 1, 1, 1, 1, 1, 1, 1 };

  boolean_T anyInputSizeChanged;
  boolean_T exitg1;
  static const int16_T iv33[8] = { 563, 1, 1, 1, 1, 1, 1, 1 };

  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (!obj->isReleased) {
  } else {
    y = NULL;
    m6 = mxCreateCharArray(2, iv29);
    for (i = 0; i < 45; i++) {
      cv39[i] = cv40[i];
    }

    emlrtInitCharArrayR2013a(sp, 45, m6, cv39);
    emlrtAssign(&y, m6);
    b_y = NULL;
    m6 = mxCreateCharArray(2, iv30);
    for (i = 0; i < 4; i++) {
      cv41[i] = cv42[i];
    }

    emlrtInitCharArrayR2013a(sp, 4, m6, cv41);
    emlrtAssign(&b_y, m6);
    st.site = &gb_emlrtRSI;
    c_error(&st, message(&st, y, b_y, &emlrtMCI), &emlrtMCI);
  }

  if (!obj->isInitialized) {
    st.site = &gb_emlrtRSI;
    b_obj = obj;
    if (!b_obj->isInitialized) {
    } else {
      c_y = NULL;
      m6 = mxCreateCharArray(2, iv31);
      for (i = 0; i < 51; i++) {
        cv43[i] = cv44[i];
      }

      emlrtInitCharArrayR2013a(&st, 51, m6, cv43);
      emlrtAssign(&c_y, m6);
      d_y = NULL;
      m6 = mxCreateCharArray(2, iv32);
      for (i = 0; i < 5; i++) {
        cv45[i] = cv46[i];
      }

      emlrtInitCharArrayR2013a(&st, 5, m6, cv45);
      emlrtAssign(&d_y, m6);
      b_st.site = &gb_emlrtRSI;
      c_error(&b_st, message(&b_st, c_y, d_y, &emlrtMCI), &emlrtMCI);
    }

    b_st.site = &gb_emlrtRSI;
    b_obj->isInitialized = TRUE;
    b_st.site = &gb_emlrtRSI;
    b_st.site = &gb_emlrtRSI;
    b_st.site = &gb_emlrtRSI;
    for (i = 0; i < 8; i++) {
      b_obj->inputVarSize1[i] = (uint32_T)value[i];
    }

    b_st.site = &gb_emlrtRSI;
    b_st.site = &gb_emlrtRSI;
    b_st.site = &gb_emlrtRSI;
    b_st.site = &gb_emlrtRSI;
    b_st.site = &gb_emlrtRSI;
    b_st.site = &gb_emlrtRSI;
    b_st.site = &gb_emlrtRSI;
    b_st.site = &gb_emlrtRSI;
  }

  st.site = &gb_emlrtRSI;
  st.site = &gb_emlrtRSI;
  st.site = &gb_emlrtRSI;
  b_st.site = &gb_emlrtRSI;
  b_st.site = &gb_emlrtRSI;
  st.site = &gb_emlrtRSI;
  st.site = &gb_emlrtRSI;
  b_obj = obj;
  anyInputSizeChanged = FALSE;
  i = 0;
  exitg1 = FALSE;
  while ((exitg1 == FALSE) && (i < 8)) {
    if (b_obj->inputVarSize1[i] != (uint32_T)iv33[i]) {
      anyInputSizeChanged = TRUE;
      b_st.site = &gb_emlrtRSI;
      for (i = 0; i < 8; i++) {
        b_obj->inputVarSize1[i] = (uint32_T)value[i];
      }

      exitg1 = TRUE;
    } else {
      i++;
    }
  }

  if (anyInputSizeChanged) {
    st.site = &gb_emlrtRSI;
    st.site = &gb_emlrtRSI;
  }

  st.site = &gb_emlrtRSI;
  b_st.site = &gb_emlrtRSI;
  b_st.site = &gb_emlrtRSI;
  st.site = &gb_emlrtRSI;
  st.site = &gb_emlrtRSI;
  st.site = &gb_emlrtRSI;
  Nondirect_stepImpl(obj, varargin_1, varargout_1);
}

void e_SystemCore_step(const emlrtStack *sp, OFDMModulator_1 *obj, const creal_T
  varargin_1[576], const real_T varargin_2[48], creal_T varargout_1[960])
{
  const mxArray *y;
  static const int32_T iv37[2] = { 1, 45 };

  const mxArray *m8;
  char_T cv49[45];
  int32_T i;
  static const char_T cv50[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C',
    'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv38[2] = { 1, 4 };

  char_T cv51[4];
  static const char_T cv52[4] = { 's', 't', 'e', 'p' };

  OFDMModulator_1 *b_obj;
  const mxArray *c_y;
  static const int32_T iv39[2] = { 1, 51 };

  char_T cv53[51];
  static const char_T cv54[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l',
    'e', 'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *d_y;
  static const int32_T iv40[2] = { 1, 5 };

  char_T cv55[5];
  static const char_T cv56[5] = { 's', 'e', 't', 'u', 'p' };

  real_T ii_data[768];
  int32_T j;
  int32_T iy;
  static const int8_T iv41[11] = { 0, 1, 2, 3, 4, 5, 59, 60, 61, 62, 63 };

  static const int16_T iv42[48] = { 11, 25, 39, 53, 75, 89, 103, 117, 139, 153,
    167, 181, 203, 217, 231, 245, 267, 281, 295, 309, 331, 345, 359, 373, 395,
    409, 423, 437, 459, 473, 487, 501, 523, 537, 551, 565, 587, 601, 615, 629,
    651, 665, 679, 693, 715, 729, 743, 757 };

  boolean_T x[768];
  int32_T ii_size[1];
  int32_T b_ii_data[768];
  int32_T b_ii_size[1];
  int32_T i2;
  creal_T packedData[768];
  emxArray_int32_T *r1;
  real_T temp_re;
  int32_T k;
  real_T temp_im;
  creal_T postIFFT[768];
  int32_T ix;
  int32_T chanStart;
  boolean_T tst;
  int32_T iDelta2;
  int32_T iheight;
  int32_T ihi;
  static const real_T dv3[33] = { 0.0, 0.0980171403295606, 0.19509032201612825,
    0.29028467725446233, 0.38268343236508978, 0.47139673682599764,
    0.55557023301960218, 0.63439328416364549, 0.70710678118654757,
    0.773010453362737, 0.83146961230254524, 0.881921264348355,
    0.92387953251128674, 0.95694033573220882, 0.98078528040323043,
    0.99518472667219693, 1.0, 0.99518472667219693, 0.98078528040323043,
    0.95694033573220882, 0.92387953251128674, 0.881921264348355,
    0.83146961230254524, 0.773010453362737, 0.70710678118654757,
    0.63439328416364549, 0.55557023301960218, 0.47139673682599764,
    0.38268343236508978, 0.29028467725446233, 0.19509032201612825,
    0.0980171403295606, 0.0 };

  static const real_T dv4[33] = { 1.0, 0.99518472667219693, 0.98078528040323043,
    0.95694033573220882, 0.92387953251128674, 0.881921264348355,
    0.83146961230254524, 0.773010453362737, 0.70710678118654757,
    0.63439328416364549, 0.55557023301960218, 0.47139673682599764,
    0.38268343236508978, 0.29028467725446233, 0.19509032201612825,
    0.0980171403295606, 0.0, -0.0980171403295606, -0.19509032201612825,
    -0.29028467725446233, -0.38268343236508978, -0.47139673682599764,
    -0.55557023301960218, -0.63439328416364549, -0.70710678118654757,
    -0.773010453362737, -0.83146961230254524, -0.881921264348355,
    -0.92387953251128674, -0.95694033573220882, -0.98078528040323043,
    -0.99518472667219693, -1.0 };

  creal_T postCP[960];
  int32_T b_ix;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  if (!obj->isReleased) {
  } else {
    y = NULL;
    m8 = mxCreateCharArray(2, iv37);
    for (i = 0; i < 45; i++) {
      cv49[i] = cv50[i];
    }

    emlrtInitCharArrayR2013a(sp, 45, m8, cv49);
    emlrtAssign(&y, m8);
    b_y = NULL;
    m8 = mxCreateCharArray(2, iv38);
    for (i = 0; i < 4; i++) {
      cv51[i] = cv52[i];
    }

    emlrtInitCharArrayR2013a(sp, 4, m8, cv51);
    emlrtAssign(&b_y, m8);
    st.site = &gb_emlrtRSI;
    c_error(&st, message(&st, y, b_y, &emlrtMCI), &emlrtMCI);
  }

  if (!obj->isInitialized) {
    st.site = &gb_emlrtRSI;
    b_obj = obj;
    if (!b_obj->isInitialized) {
    } else {
      c_y = NULL;
      m8 = mxCreateCharArray(2, iv39);
      for (i = 0; i < 51; i++) {
        cv53[i] = cv54[i];
      }

      emlrtInitCharArrayR2013a(&st, 51, m8, cv53);
      emlrtAssign(&c_y, m8);
      d_y = NULL;
      m8 = mxCreateCharArray(2, iv40);
      for (i = 0; i < 5; i++) {
        cv55[i] = cv56[i];
      }

      emlrtInitCharArrayR2013a(&st, 5, m8, cv55);
      emlrtAssign(&d_y, m8);
      b_st.site = &gb_emlrtRSI;
      c_error(&b_st, message(&b_st, c_y, d_y, &emlrtMCI), &emlrtMCI);
    }

    b_st.site = &gb_emlrtRSI;
    c_SystemProp_matlabCodegenSetAn(b_obj);
    b_st.site = &gb_emlrtRSI;
    b_st.site = &gb_emlrtRSI;
    b_st.site = &gb_emlrtRSI;
    b_st.site = &gb_emlrtRSI;
    SystemCore_validateProperties();
    b_st.site = &gb_emlrtRSI;
    b_st.site = &gb_emlrtRSI;
    b_st.site = &gb_emlrtRSI;
    b_st.site = &gb_emlrtRSI;
    b_st.site = &gb_emlrtRSI;
    b_st.site = &gb_emlrtRSI;
    for (j = 0; j < 768; j++) {
      ii_data[j] = 1.0;
    }

    d_SystemProp_matlabCodegenSetAn(b_obj, ii_data);
    for (j = 0; j < 768; j++) {
      ii_data[j] = b_obj->pFullGrid[j];
    }

    for (j = 0; j < 12; j++) {
      for (iy = 0; iy < 11; iy++) {
        ii_data[iv41[iy] + (j << 6)] = 0.0;
      }
    }

    d_SystemProp_matlabCodegenSetAn(b_obj, ii_data);
    for (j = 0; j < 768; j++) {
      ii_data[j] = b_obj->pFullGrid[j];
    }

    for (j = 0; j < 12; j++) {
      ii_data[32 + (j << 6)] = 0.0;
    }

    d_SystemProp_matlabCodegenSetAn(b_obj, ii_data);
    for (j = 0; j < 768; j++) {
      ii_data[j] = b_obj->pFullGrid[j];
    }

    for (j = 0; j < 48; j++) {
      ii_data[iv42[j]] = 2.0;
    }

    d_SystemProp_matlabCodegenSetAn(b_obj, ii_data);
    for (j = 0; j < 768; j++) {
      x[j] = (b_obj->pFullGrid[j] == 1.0);
    }

    eml_find(x, b_ii_data, ii_size);
    b_ii_size[0] = ii_size[0];
    i2 = ii_size[0];
    for (j = 0; j < i2; j++) {
      ii_data[j] = b_ii_data[j];
    }

    c_st.site = &xc_emlrtRSI;
    e_SystemProp_matlabCodegenSetAn(&c_st, b_obj, ii_data, b_ii_size);
    b_st.site = &gb_emlrtRSI;
  }

  st.site = &gb_emlrtRSI;
  st.site = &gb_emlrtRSI;
  st.site = &gb_emlrtRSI;
  b_st.site = &gb_emlrtRSI;
  b_st.site = &gb_emlrtRSI;
  st.site = &gb_emlrtRSI;
  st.site = &gb_emlrtRSI;
  st.site = &gb_emlrtRSI;
  b_st.site = &gb_emlrtRSI;
  b_st.site = &gb_emlrtRSI;
  st.site = &gb_emlrtRSI;
  st.site = &gb_emlrtRSI;
  st.site = &gb_emlrtRSI;
  b_obj = obj;
  for (j = 0; j < 768; j++) {
    packedData[j].re = b_obj->pFullGrid[j];
    packedData[j].im = 0.0;
  }

  emxInit_int32_T(&st, &r1, 1, &f_emlrtRTEI, TRUE);
  j = r1->size[0];
  r1->size[0] = b_obj->pDataLinearIndices->size[0];
  emxEnsureCapacity(&st, (emxArray__common *)r1, j, (int32_T)sizeof(int32_T),
                    &f_emlrtRTEI);
  i2 = b_obj->pDataLinearIndices->size[0];
  for (j = 0; j < i2; j++) {
    temp_re = b_obj->pDataLinearIndices->data[j];
    iy = (int32_T)emlrtIntegerCheckFastR2012b(temp_re, &emlrtDCI, &st);
    r1->data[j] = emlrtDynamicBoundsCheckFastR2012b(iy, 1, 768, &d_emlrtBCI, &st);
  }

  j = r1->size[0];
  emlrtSizeEqCheck1DFastR2012b(j, 576, &emlrtECI, &st);
  i2 = r1->size[0];
  for (j = 0; j < i2; j++) {
    packedData[r1->data[j] - 1] = varargin_1[j];
  }

  emxFree_int32_T(&r1);
  for (j = 0; j < 48; j++) {
    packedData[iv42[j]].re = varargin_2[j];
    packedData[iv42[j]].im = 0.0;
  }

  b_st.site = &bd_emlrtRSI;
  i2 = 0;
  for (i = 0; i < 12; i++) {
    iy = i2;
    i2 += 64;
    j = iy + 32;
    for (k = 0; k < 32; k++) {
      temp_re = packedData[iy].re;
      temp_im = packedData[iy].im;
      packedData[iy] = packedData[j];
      packedData[j].re = temp_re;
      packedData[j].im = temp_im;
      iy++;
      j++;
    }
  }

  b_st.site = &cd_emlrtRSI;
  ix = 0;
  for (chanStart = 0; chanStart < 706; chanStart += 64) {
    i2 = 0;
    iy = chanStart;
    for (i = 0; i < 63; i++) {
      postIFFT[iy] = packedData[ix];
      iy = 64;
      tst = TRUE;
      while (tst) {
        if (iy >= 0) {
          iy = (int32_T)((uint32_T)iy >> 1);
        } else {
          iy = ~(int32_T)((uint32_T)~iy >> 1);
        }

        i2 ^= iy;
        tst = ((i2 & iy) == 0);
      }

      iy = chanStart + i2;
      ix++;
    }

    postIFFT[iy] = packedData[ix];
    ix++;
    for (i = chanStart; i <= chanStart + 62; i += 2) {
      temp_re = postIFFT[i + 1].re;
      temp_im = postIFFT[i + 1].im;
      postIFFT[i + 1].re = postIFFT[i].re - postIFFT[i + 1].re;
      postIFFT[i + 1].im = postIFFT[i].im - postIFFT[i + 1].im;
      postIFFT[i].re += temp_re;
      postIFFT[i].im += temp_im;
    }

    iy = 2;
    iDelta2 = 4;
    k = 16;
    iheight = 61;
    while (k > 0) {
      i = chanStart;
      ihi = chanStart + iheight;
      while (i < ihi) {
        i2 = i + iy;
        temp_re = postIFFT[i2].re;
        temp_im = postIFFT[i2].im;
        postIFFT[i + iy].re = postIFFT[i].re - postIFFT[i2].re;
        postIFFT[i + iy].im = postIFFT[i].im - postIFFT[i2].im;
        postIFFT[i].re += temp_re;
        postIFFT[i].im += temp_im;
        i += iDelta2;
      }

      i2 = chanStart + 1;
      for (j = k; j < 32; j += k) {
        i = i2;
        ihi = i2 + iheight;
        while (i < ihi) {
          temp_re = dv4[j] * postIFFT[i + iy].re - dv3[j] * postIFFT[i + iy].im;
          temp_im = dv4[j] * postIFFT[i + iy].im + dv3[j] * postIFFT[i + iy].re;
          postIFFT[i + iy].re = postIFFT[i].re - temp_re;
          postIFFT[i + iy].im = postIFFT[i].im - temp_im;
          postIFFT[i].re += temp_re;
          postIFFT[i].im += temp_im;
          i += iDelta2;
        }

        i2++;
      }

      j = k;
      k = (int32_T)((uint32_T)j >> 1);
      iy = iDelta2;
      iDelta2 <<= 1;
      iheight -= iy;
    }
  }

  for (j = 0; j < 768; j++) {
    postIFFT[j].re *= 0.015625;
    postIFFT[j].im *= 0.015625;
  }

  b_st.site = &dd_emlrtRSI;
  iy = 1;
  for (i = 0; i < 12; i++) {
    ix = i << 4;
    for (i2 = 0; i2 < 16; i2++) {
      if (ix >= 0) {
        b_ix = (int32_T)((uint32_T)ix >> 4);
      } else {
        b_ix = ~(int32_T)((uint32_T)~ix >> 4);
      }

      postCP[iy - 1] = postIFFT[(ix % 16 + (b_ix << 6)) + 48];
      ix++;
      iy++;
    }

    ix = i << 6;
    for (i2 = 0; i2 < 64; i2++) {
      postCP[iy - 1] = postIFFT[ix];
      ix++;
      iy++;
    }
  }

  b_st.site = &ed_emlrtRSI;
  memcpy(&varargout_1[0], &postCP[0], 960U * sizeof(creal_T));
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void f_SystemCore_step(const emlrtStack *sp, commcodegen_CRCGenerator_6 *obj,
  const real_T varargin_1[560], real_T varargout_1[563])
{
  const mxArray *y;
  static const int32_T iv65[2] = { 1, 45 };

  const mxArray *m12;
  char_T cv74[45];
  int32_T i;
  static const char_T cv75[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C',
    'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv66[2] = { 1, 4 };

  char_T cv76[4];
  static const char_T cv77[4] = { 's', 't', 'e', 'p' };

  commcodegen_CRCGenerator_6 *b_obj;
  const mxArray *c_y;
  static const int32_T iv67[2] = { 1, 51 };

  char_T cv78[51];
  static const char_T cv79[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l',
    'e', 'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *d_y;
  static const int32_T iv68[2] = { 1, 5 };

  char_T cv80[5];
  static const char_T cv81[5] = { 's', 'e', 't', 'u', 'p' };

  int32_T k;
  static const int16_T value[8] = { 560, 1, 1, 1, 1, 1, 1, 1 };

  boolean_T anyInputSizeChanged;
  boolean_T exitg1;
  static const int16_T iv69[8] = { 560, 1, 1, 1, 1, 1, 1, 1 };

  comm_CRCGenerator_3 *c_obj;
  uint32_T shReg;
  uint32_T input;
  uint32_T bitMask;
  int32_T j;
  uint32_T inpBit;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (!obj->isReleased) {
  } else {
    y = NULL;
    m12 = mxCreateCharArray(2, iv65);
    for (i = 0; i < 45; i++) {
      cv74[i] = cv75[i];
    }

    emlrtInitCharArrayR2013a(sp, 45, m12, cv74);
    emlrtAssign(&y, m12);
    b_y = NULL;
    m12 = mxCreateCharArray(2, iv66);
    for (i = 0; i < 4; i++) {
      cv76[i] = cv77[i];
    }

    emlrtInitCharArrayR2013a(sp, 4, m12, cv76);
    emlrtAssign(&b_y, m12);
    st.site = &gb_emlrtRSI;
    c_error(&st, message(&st, y, b_y, &emlrtMCI), &emlrtMCI);
  }

  if (!obj->isInitialized) {
    st.site = &gb_emlrtRSI;
    b_obj = obj;
    if (!b_obj->isInitialized) {
    } else {
      c_y = NULL;
      m12 = mxCreateCharArray(2, iv67);
      for (i = 0; i < 51; i++) {
        cv78[i] = cv79[i];
      }

      emlrtInitCharArrayR2013a(&st, 51, m12, cv78);
      emlrtAssign(&c_y, m12);
      d_y = NULL;
      m12 = mxCreateCharArray(2, iv68);
      for (i = 0; i < 5; i++) {
        cv80[i] = cv81[i];
      }

      emlrtInitCharArrayR2013a(&st, 5, m12, cv80);
      emlrtAssign(&d_y, m12);
      b_st.site = &gb_emlrtRSI;
      c_error(&b_st, message(&b_st, c_y, d_y, &emlrtMCI), &emlrtMCI);
    }

    b_st.site = &gb_emlrtRSI;
    b_obj->isInitialized = TRUE;
    b_st.site = &gb_emlrtRSI;
    b_st.site = &gb_emlrtRSI;
    b_st.site = &gb_emlrtRSI;
    for (k = 0; k < 8; k++) {
      b_obj->inputVarSize1[k] = (uint32_T)value[k];
    }

    b_st.site = &gb_emlrtRSI;
    b_st.site = &gb_emlrtRSI;
    b_st.site = &gb_emlrtRSI;
    b_st.site = &gb_emlrtRSI;
    b_st.site = &gb_emlrtRSI;
    b_st.site = &gb_emlrtRSI;
    b_st.site = &gb_emlrtRSI;
    b_st.site = &gb_emlrtRSI;
  }

  st.site = &gb_emlrtRSI;
  st.site = &gb_emlrtRSI;
  st.site = &gb_emlrtRSI;
  b_st.site = &gb_emlrtRSI;
  b_st.site = &gb_emlrtRSI;
  st.site = &gb_emlrtRSI;
  st.site = &gb_emlrtRSI;
  b_obj = obj;
  anyInputSizeChanged = FALSE;
  k = 0;
  exitg1 = FALSE;
  while ((exitg1 == FALSE) && (k < 8)) {
    if (b_obj->inputVarSize1[k] != (uint32_T)iv69[k]) {
      anyInputSizeChanged = TRUE;
      b_st.site = &gb_emlrtRSI;
      for (k = 0; k < 8; k++) {
        b_obj->inputVarSize1[k] = (uint32_T)value[k];
      }

      exitg1 = TRUE;
    } else {
      k++;
    }
  }

  if (anyInputSizeChanged) {
    st.site = &gb_emlrtRSI;
    st.site = &gb_emlrtRSI;
  }

  st.site = &gb_emlrtRSI;
  b_st.site = &gb_emlrtRSI;
  b_st.site = &gb_emlrtRSI;
  st.site = &gb_emlrtRSI;
  st.site = &gb_emlrtRSI;
  st.site = &gb_emlrtRSI;
  b_obj = obj;
  b_st.site = &ig_emlrtRSI;
  b_st.site = &ig_emlrtRSI;
  b_st.site = &ig_emlrtRSI;
  b_st.site = &ig_emlrtRSI;
  b_st.site = &ig_emlrtRSI;
  b_st.site = &ig_emlrtRSI;
  c_obj = &b_obj->cSFunObject;

  /* System object Outputs function: comm.CRCGenerator */
  /* Initialize for current sub-frame */
  shReg = 0U;
  k = 0;
  for (i = 0; i < 187; i++) {
    input = 0U;
    bitMask = 4U;
    for (j = 0; j < 3; j++) {
      if (k < 560) {
        inpBit = (uint32_T)varargin_1[k] & 1U;
        varargout_1[k] = inpBit;

        /* Build input data chunk */
        input |= bitMask * inpBit;
        bitMask >>= 1U;
        k++;
      }
    }

    /* Retrieve value from CRC table and update register */
    shReg = c_obj->P0_CRCTable[shReg & 7U] ^ (shReg << 3U | input);
  }

  /* Process the leftover bits */
  for (i = 0; i < 2; i++) {
    k = (int32_T)(shReg >> 2U & 1U);
    shReg <<= 1U;
    if ((uint32_T)k != 0U) {
      shReg ^= 1U;
    }
  }

  /* Apply final XOR */
  /* Output the register */
  varargout_1[560] = (int32_T)(shReg >> 2U) & 1;
  varargout_1[561] = (int32_T)(shReg >> 1U) & 1;
  varargout_1[562] = (int32_T)shReg & 1;
  b_st.site = &ig_emlrtRSI;
}

void g_SystemCore_step(const emlrtStack *sp, commcodegen_BPSKModulator_1 *obj,
  const real_T varargin_1[563], creal_T varargout_1[563])
{
  const mxArray *y;
  static const int32_T iv70[2] = { 1, 45 };

  const mxArray *m13;
  char_T cv82[45];
  int32_T i;
  static const char_T cv83[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C',
    'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv71[2] = { 1, 4 };

  char_T cv84[4];
  static const char_T cv85[4] = { 's', 't', 'e', 'p' };

  commcodegen_BPSKModulator_1 *b_obj;
  const mxArray *c_y;
  static const int32_T iv72[2] = { 1, 51 };

  char_T cv86[51];
  static const char_T cv87[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l',
    'e', 'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *d_y;
  static const int32_T iv73[2] = { 1, 5 };

  char_T cv88[5];
  static const char_T cv89[5] = { 's', 'e', 't', 'u', 'p' };

  static const int16_T value[8] = { 563, 1, 1, 1, 1, 1, 1, 1 };

  boolean_T anyInputSizeChanged;
  boolean_T exitg1;
  static const int16_T iv74[8] = { 563, 1, 1, 1, 1, 1, 1, 1 };

  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (!obj->isReleased) {
  } else {
    y = NULL;
    m13 = mxCreateCharArray(2, iv70);
    for (i = 0; i < 45; i++) {
      cv82[i] = cv83[i];
    }

    emlrtInitCharArrayR2013a(sp, 45, m13, cv82);
    emlrtAssign(&y, m13);
    b_y = NULL;
    m13 = mxCreateCharArray(2, iv71);
    for (i = 0; i < 4; i++) {
      cv84[i] = cv85[i];
    }

    emlrtInitCharArrayR2013a(sp, 4, m13, cv84);
    emlrtAssign(&b_y, m13);
    st.site = &gb_emlrtRSI;
    c_error(&st, message(&st, y, b_y, &emlrtMCI), &emlrtMCI);
  }

  if (!obj->isInitialized) {
    st.site = &gb_emlrtRSI;
    b_obj = obj;
    if (!b_obj->isInitialized) {
    } else {
      c_y = NULL;
      m13 = mxCreateCharArray(2, iv72);
      for (i = 0; i < 51; i++) {
        cv86[i] = cv87[i];
      }

      emlrtInitCharArrayR2013a(&st, 51, m13, cv86);
      emlrtAssign(&c_y, m13);
      d_y = NULL;
      m13 = mxCreateCharArray(2, iv73);
      for (i = 0; i < 5; i++) {
        cv88[i] = cv89[i];
      }

      emlrtInitCharArrayR2013a(&st, 5, m13, cv88);
      emlrtAssign(&d_y, m13);
      b_st.site = &gb_emlrtRSI;
      c_error(&b_st, message(&b_st, c_y, d_y, &emlrtMCI), &emlrtMCI);
    }

    b_st.site = &gb_emlrtRSI;
    b_obj->isInitialized = TRUE;
    b_st.site = &gb_emlrtRSI;
    b_st.site = &gb_emlrtRSI;
    b_st.site = &gb_emlrtRSI;
    for (i = 0; i < 8; i++) {
      b_obj->inputVarSize1[i] = (uint32_T)value[i];
    }

    b_st.site = &gb_emlrtRSI;
    b_st.site = &gb_emlrtRSI;
    b_st.site = &gb_emlrtRSI;
    b_st.site = &gb_emlrtRSI;
    b_st.site = &gb_emlrtRSI;
    b_st.site = &gb_emlrtRSI;
    b_st.site = &gb_emlrtRSI;
    b_st.site = &gb_emlrtRSI;
  }

  st.site = &gb_emlrtRSI;
  st.site = &gb_emlrtRSI;
  st.site = &gb_emlrtRSI;
  b_st.site = &gb_emlrtRSI;
  b_st.site = &gb_emlrtRSI;
  st.site = &gb_emlrtRSI;
  st.site = &gb_emlrtRSI;
  b_obj = obj;
  anyInputSizeChanged = FALSE;
  i = 0;
  exitg1 = FALSE;
  while ((exitg1 == FALSE) && (i < 8)) {
    if (b_obj->inputVarSize1[i] != (uint32_T)iv74[i]) {
      anyInputSizeChanged = TRUE;
      b_st.site = &gb_emlrtRSI;
      for (i = 0; i < 8; i++) {
        b_obj->inputVarSize1[i] = (uint32_T)value[i];
      }

      exitg1 = TRUE;
    } else {
      i++;
    }
  }

  if (anyInputSizeChanged) {
    st.site = &gb_emlrtRSI;
    st.site = &gb_emlrtRSI;
  }

  st.site = &gb_emlrtRSI;
  b_st.site = &gb_emlrtRSI;
  b_st.site = &gb_emlrtRSI;
  st.site = &gb_emlrtRSI;
  st.site = &gb_emlrtRSI;
  st.site = &gb_emlrtRSI;
  c_Nondirect_stepImpl(obj, varargin_1, varargout_1);
}

void h_SystemCore_step(const emlrtStack *sp, commcodegen_CRCGenerator_12 *obj,
  const real_T varargin_1[560], real_T varargout_1[563])
{
  const mxArray *y;
  static const int32_T iv88[2] = { 1, 45 };

  const mxArray *m15;
  char_T cv102[45];
  int32_T i;
  static const char_T cv103[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C',
    'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv89[2] = { 1, 4 };

  char_T cv104[4];
  static const char_T cv105[4] = { 's', 't', 'e', 'p' };

  commcodegen_CRCGenerator_12 *b_obj;
  const mxArray *c_y;
  static const int32_T iv90[2] = { 1, 51 };

  char_T cv106[51];
  static const char_T cv107[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l',
    'e', 'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *d_y;
  static const int32_T iv91[2] = { 1, 5 };

  char_T cv108[5];
  static const char_T cv109[5] = { 's', 'e', 't', 'u', 'p' };

  int32_T k;
  static const int16_T value[8] = { 560, 1, 1, 1, 1, 1, 1, 1 };

  boolean_T anyInputSizeChanged;
  boolean_T exitg1;
  static const int16_T iv92[8] = { 560, 1, 1, 1, 1, 1, 1, 1 };

  comm_CRCGenerator_7 *c_obj;
  uint32_T shReg;
  uint32_T input;
  uint32_T bitMask;
  int32_T j;
  uint32_T inpBit;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (!obj->isReleased) {
  } else {
    y = NULL;
    m15 = mxCreateCharArray(2, iv88);
    for (i = 0; i < 45; i++) {
      cv102[i] = cv103[i];
    }

    emlrtInitCharArrayR2013a(sp, 45, m15, cv102);
    emlrtAssign(&y, m15);
    b_y = NULL;
    m15 = mxCreateCharArray(2, iv89);
    for (i = 0; i < 4; i++) {
      cv104[i] = cv105[i];
    }

    emlrtInitCharArrayR2013a(sp, 4, m15, cv104);
    emlrtAssign(&b_y, m15);
    st.site = &gb_emlrtRSI;
    c_error(&st, message(&st, y, b_y, &emlrtMCI), &emlrtMCI);
  }

  if (!obj->isInitialized) {
    st.site = &gb_emlrtRSI;
    b_obj = obj;
    if (!b_obj->isInitialized) {
    } else {
      c_y = NULL;
      m15 = mxCreateCharArray(2, iv90);
      for (i = 0; i < 51; i++) {
        cv106[i] = cv107[i];
      }

      emlrtInitCharArrayR2013a(&st, 51, m15, cv106);
      emlrtAssign(&c_y, m15);
      d_y = NULL;
      m15 = mxCreateCharArray(2, iv91);
      for (i = 0; i < 5; i++) {
        cv108[i] = cv109[i];
      }

      emlrtInitCharArrayR2013a(&st, 5, m15, cv108);
      emlrtAssign(&d_y, m15);
      b_st.site = &gb_emlrtRSI;
      c_error(&b_st, message(&b_st, c_y, d_y, &emlrtMCI), &emlrtMCI);
    }

    b_st.site = &gb_emlrtRSI;
    b_obj->isInitialized = TRUE;
    b_st.site = &gb_emlrtRSI;
    b_st.site = &gb_emlrtRSI;
    b_st.site = &gb_emlrtRSI;
    for (k = 0; k < 8; k++) {
      b_obj->inputVarSize1[k] = (uint32_T)value[k];
    }

    b_st.site = &gb_emlrtRSI;
    b_st.site = &gb_emlrtRSI;
    b_st.site = &gb_emlrtRSI;
    b_st.site = &gb_emlrtRSI;
    b_st.site = &gb_emlrtRSI;
    b_st.site = &gb_emlrtRSI;
    b_st.site = &gb_emlrtRSI;
    b_st.site = &gb_emlrtRSI;
  }

  st.site = &gb_emlrtRSI;
  st.site = &gb_emlrtRSI;
  st.site = &gb_emlrtRSI;
  b_st.site = &gb_emlrtRSI;
  b_st.site = &gb_emlrtRSI;
  st.site = &gb_emlrtRSI;
  st.site = &gb_emlrtRSI;
  b_obj = obj;
  anyInputSizeChanged = FALSE;
  k = 0;
  exitg1 = FALSE;
  while ((exitg1 == FALSE) && (k < 8)) {
    if (b_obj->inputVarSize1[k] != (uint32_T)iv92[k]) {
      anyInputSizeChanged = TRUE;
      b_st.site = &gb_emlrtRSI;
      for (k = 0; k < 8; k++) {
        b_obj->inputVarSize1[k] = (uint32_T)value[k];
      }

      exitg1 = TRUE;
    } else {
      k++;
    }
  }

  if (anyInputSizeChanged) {
    st.site = &gb_emlrtRSI;
    st.site = &gb_emlrtRSI;
  }

  st.site = &gb_emlrtRSI;
  b_st.site = &gb_emlrtRSI;
  b_st.site = &gb_emlrtRSI;
  st.site = &gb_emlrtRSI;
  st.site = &gb_emlrtRSI;
  st.site = &gb_emlrtRSI;
  b_obj = obj;
  b_st.site = &ig_emlrtRSI;
  b_st.site = &ig_emlrtRSI;
  b_st.site = &ig_emlrtRSI;
  b_st.site = &ig_emlrtRSI;
  b_st.site = &ig_emlrtRSI;
  b_st.site = &ig_emlrtRSI;
  c_obj = &b_obj->cSFunObject;

  /* System object Outputs function: comm.CRCGenerator */
  /* Initialize for current sub-frame */
  shReg = 0U;
  k = 0;
  for (i = 0; i < 187; i++) {
    input = 0U;
    bitMask = 4U;
    for (j = 0; j < 3; j++) {
      if (k < 560) {
        inpBit = (uint32_T)varargin_1[k] & 1U;
        varargout_1[k] = inpBit;

        /* Build input data chunk */
        input |= bitMask * inpBit;
        bitMask >>= 1U;
        k++;
      }
    }

    /* Retrieve value from CRC table and update register */
    shReg = c_obj->P0_CRCTable[shReg & 7U] ^ (shReg << 3U | input);
  }

  /* Process the leftover bits */
  for (i = 0; i < 2; i++) {
    k = (int32_T)(shReg >> 2U & 1U);
    shReg <<= 1U;
    if ((uint32_T)k != 0U) {
      shReg ^= 1U;
    }
  }

  /* Apply final XOR */
  /* Output the register */
  varargout_1[560] = (int32_T)(shReg >> 2U) & 1;
  varargout_1[561] = (int32_T)(shReg >> 1U) & 1;
  varargout_1[562] = (int32_T)shReg & 1;
  b_st.site = &ig_emlrtRSI;
}

void i_SystemCore_step(const emlrtStack *sp, commcodegen_BPSKModulator_2 *obj,
  const real_T varargin_1[563], creal_T varargout_1[563])
{
  const mxArray *y;
  static const int32_T iv93[2] = { 1, 45 };

  const mxArray *m16;
  char_T cv110[45];
  int32_T i;
  static const char_T cv111[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C',
    'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv94[2] = { 1, 4 };

  char_T cv112[4];
  static const char_T cv113[4] = { 's', 't', 'e', 'p' };

  commcodegen_BPSKModulator_2 *b_obj;
  const mxArray *c_y;
  static const int32_T iv95[2] = { 1, 51 };

  char_T cv114[51];
  static const char_T cv115[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l',
    'e', 'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *d_y;
  static const int32_T iv96[2] = { 1, 5 };

  char_T cv116[5];
  static const char_T cv117[5] = { 's', 'e', 't', 'u', 'p' };

  static const int16_T value[8] = { 563, 1, 1, 1, 1, 1, 1, 1 };

  boolean_T anyInputSizeChanged;
  boolean_T exitg1;
  static const int16_T iv97[8] = { 563, 1, 1, 1, 1, 1, 1, 1 };

  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (!obj->isReleased) {
  } else {
    y = NULL;
    m16 = mxCreateCharArray(2, iv93);
    for (i = 0; i < 45; i++) {
      cv110[i] = cv111[i];
    }

    emlrtInitCharArrayR2013a(sp, 45, m16, cv110);
    emlrtAssign(&y, m16);
    b_y = NULL;
    m16 = mxCreateCharArray(2, iv94);
    for (i = 0; i < 4; i++) {
      cv112[i] = cv113[i];
    }

    emlrtInitCharArrayR2013a(sp, 4, m16, cv112);
    emlrtAssign(&b_y, m16);
    st.site = &gb_emlrtRSI;
    c_error(&st, message(&st, y, b_y, &emlrtMCI), &emlrtMCI);
  }

  if (!obj->isInitialized) {
    st.site = &gb_emlrtRSI;
    b_obj = obj;
    if (!b_obj->isInitialized) {
    } else {
      c_y = NULL;
      m16 = mxCreateCharArray(2, iv95);
      for (i = 0; i < 51; i++) {
        cv114[i] = cv115[i];
      }

      emlrtInitCharArrayR2013a(&st, 51, m16, cv114);
      emlrtAssign(&c_y, m16);
      d_y = NULL;
      m16 = mxCreateCharArray(2, iv96);
      for (i = 0; i < 5; i++) {
        cv116[i] = cv117[i];
      }

      emlrtInitCharArrayR2013a(&st, 5, m16, cv116);
      emlrtAssign(&d_y, m16);
      b_st.site = &gb_emlrtRSI;
      c_error(&b_st, message(&b_st, c_y, d_y, &emlrtMCI), &emlrtMCI);
    }

    b_st.site = &gb_emlrtRSI;
    b_obj->isInitialized = TRUE;
    b_st.site = &gb_emlrtRSI;
    b_st.site = &gb_emlrtRSI;
    b_st.site = &gb_emlrtRSI;
    for (i = 0; i < 8; i++) {
      b_obj->inputVarSize1[i] = (uint32_T)value[i];
    }

    b_st.site = &gb_emlrtRSI;
    b_st.site = &gb_emlrtRSI;
    b_st.site = &gb_emlrtRSI;
    b_st.site = &gb_emlrtRSI;
    b_st.site = &gb_emlrtRSI;
    b_st.site = &gb_emlrtRSI;
    b_st.site = &gb_emlrtRSI;
    b_st.site = &gb_emlrtRSI;
  }

  st.site = &gb_emlrtRSI;
  st.site = &gb_emlrtRSI;
  st.site = &gb_emlrtRSI;
  b_st.site = &gb_emlrtRSI;
  b_st.site = &gb_emlrtRSI;
  st.site = &gb_emlrtRSI;
  st.site = &gb_emlrtRSI;
  b_obj = obj;
  anyInputSizeChanged = FALSE;
  i = 0;
  exitg1 = FALSE;
  while ((exitg1 == FALSE) && (i < 8)) {
    if (b_obj->inputVarSize1[i] != (uint32_T)iv97[i]) {
      anyInputSizeChanged = TRUE;
      b_st.site = &gb_emlrtRSI;
      for (i = 0; i < 8; i++) {
        b_obj->inputVarSize1[i] = (uint32_T)value[i];
      }

      exitg1 = TRUE;
    } else {
      i++;
    }
  }

  if (anyInputSizeChanged) {
    st.site = &gb_emlrtRSI;
    st.site = &gb_emlrtRSI;
  }

  st.site = &gb_emlrtRSI;
  b_st.site = &gb_emlrtRSI;
  b_st.site = &gb_emlrtRSI;
  st.site = &gb_emlrtRSI;
  st.site = &gb_emlrtRSI;
  st.site = &gb_emlrtRSI;
  e_Nondirect_stepImpl(obj, varargin_1, varargout_1);
}

void j_SystemCore_step(testPHYTransmitStackData *SD, const emlrtStack *sp,
  comm_SDRuTransmitter *obj, const creal_T varargin_1[38400])
{
  const mxArray *y;
  static const int32_T iv100[2] = { 1, 45 };

  const mxArray *m17;
  char_T cv118[45];
  int32_T i;
  static const char_T cv119[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C',
    'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv101[2] = { 1, 4 };

  char_T cv120[4];
  static const char_T cv121[4] = { 's', 't', 'e', 'p' };

  comm_SDRuTransmitter *b_obj;
  const mxArray *c_y;
  static const int32_T iv102[2] = { 1, 51 };

  char_T cv122[51];
  static const char_T cv123[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l',
    'e', 'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *d_y;
  static const int32_T iv103[2] = { 1, 5 };

  char_T cv124[5];
  static const char_T cv125[5] = { 's', 'e', 't', 'u', 'p' };

  static const uint16_T value[8] = { 38400U, 1U, 1U, 1U, 1U, 1U, 1U, 1U };

  int32_T errMsg_size[2];
  char_T errMsg_data[1024];
  UsrpErrorCapiEnumT deviceStatus;
  const mxArray *e_y;
  static const int32_T iv104[2] = { 1, 35 };

  char_T cv126[35];
  static const char_T cv127[35] = { 's', 'd', 'r', 'u', ':', 'r', 'e', 'p', 'o',
    'r', 't', 'S', 'D', 'R', 'u', 'S', 't', 'a', 't', 'u', 's', ':', 'N', 'o',
    't', 'C', 'o', 'm', 'p', 'a', 't', 'i', 'b', 'l', 'e' };

  const mxArray *f_y;
  static const int32_T iv105[2] = { 1, 12 };

  char_T cv128[12];
  static const char_T cv129[12] = { '1', '9', '2', '.', '1', '6', '8', '.', '1',
    '0', '.', '2' };

  const mxArray *g_y;
  static const int32_T iv106[2] = { 1, 43 };

  char_T cv130[43];
  static const char_T cv131[43] = { 'r', 'e', 't', 'u', 'r', 'n', 'e', 'd', ' ',
    'b', 'y', ' ', '\'', 'g', 'e', 't', 'S', 'D', 'R', 'u', 'D', 'r', 'i', 'v',
    'e', 'r', 'V', 'e', 'r', 's', 'i', 'o', 'n', '\'', ' ', 'f', 'u', 'n', 'c',
    't', 'i', 'o', 'n' };

  const mxArray *h_y;
  static const int32_T iv107[2] = { 1, 35 };

  static const char_T cv132[35] = { 's', 'd', 'r', 'u', ':', 'r', 'e', 'p', 'o',
    'r', 't', 'S', 'D', 'R', 'u', 'S', 't', 'a', 't', 'u', 's', ':', 'N', 'o',
    't', 'R', 'e', 's', 'p', 'o', 'n', 'd', 'i', 'n', 'g' };

  const mxArray *i_y;
  static const int32_T iv108[2] = { 1, 12 };

  const mxArray *j_y;
  static const int32_T iv109[2] = { 1, 28 };

  char_T cv133[28];
  static const char_T cv134[28] = { 's', 'd', 'r', 'u', ':', 'r', 'e', 'p', 'o',
    'r', 't', 'S', 'D', 'R', 'u', 'S', 't', 'a', 't', 'u', 's', ':', 'R', 'x',
    'B', 'u', 's', 'y' };

  const mxArray *k_y;
  static const int32_T iv110[2] = { 1, 12 };

  const mxArray *l_y;
  static const int32_T iv111[2] = { 1, 28 };

  static const char_T cv135[28] = { 's', 'd', 'r', 'u', ':', 'r', 'e', 'p', 'o',
    'r', 't', 'S', 'D', 'R', 'u', 'S', 't', 'a', 't', 'u', 's', ':', 'T', 'x',
    'B', 'u', 's', 'y' };

  const mxArray *m_y;
  static const int32_T iv112[2] = { 1, 12 };

  const mxArray *n_y;
  static const int32_T iv113[2] = { 1, 26 };

  char_T cv136[26];
  static const char_T cv137[26] = { 's', 'd', 'r', 'u', ':', 'r', 'e', 'p', 'o',
    'r', 't', 'S', 'D', 'R', 'u', 'S', 't', 'a', 't', 'u', 's', ':', 'B', 'u',
    's', 'y' };

  const mxArray *o_y;
  static const int32_T iv114[2] = { 1, 12 };

  const mxArray *p_y;
  static const int32_T iv115[2] = { 1, 35 };

  static const char_T cv138[35] = { 's', 'd', 'r', 'u', ':', 'r', 'e', 'p', 'o',
    'r', 't', 'S', 'D', 'R', 'u', 'S', 't', 'a', 't', 'u', 's', ':', 'U', 'n',
    'k', 'n', 'o', 'w', 'n', 'S', 't', 'a', 't', 'u', 's' };

  int32_T u_size[2];
  int32_T loop_ub;
  char_T u_data[1024];
  const mxArray *q_y;
  boolean_T anyInputSizeChanged;
  boolean_T exitg1;
  static const uint16_T uv0[8] = { 38400U, 1U, 1U, 1U, 1U, 1U, 1U, 1U };

  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  if (!obj->isReleased) {
  } else {
    y = NULL;
    m17 = mxCreateCharArray(2, iv100);
    for (i = 0; i < 45; i++) {
      cv118[i] = cv119[i];
    }

    emlrtInitCharArrayR2013a(sp, 45, m17, cv118);
    emlrtAssign(&y, m17);
    b_y = NULL;
    m17 = mxCreateCharArray(2, iv101);
    for (i = 0; i < 4; i++) {
      cv120[i] = cv121[i];
    }

    emlrtInitCharArrayR2013a(sp, 4, m17, cv120);
    emlrtAssign(&b_y, m17);
    st.site = &gb_emlrtRSI;
    c_error(&st, message(&st, y, b_y, &emlrtMCI), &emlrtMCI);
  }

  if (!obj->isInitialized) {
    st.site = &gb_emlrtRSI;
    b_obj = obj;
    if (!b_obj->isInitialized) {
    } else {
      c_y = NULL;
      m17 = mxCreateCharArray(2, iv102);
      for (i = 0; i < 51; i++) {
        cv122[i] = cv123[i];
      }

      emlrtInitCharArrayR2013a(&st, 51, m17, cv122);
      emlrtAssign(&c_y, m17);
      d_y = NULL;
      m17 = mxCreateCharArray(2, iv103);
      for (i = 0; i < 5; i++) {
        cv124[i] = cv125[i];
      }

      emlrtInitCharArrayR2013a(&st, 5, m17, cv124);
      emlrtAssign(&d_y, m17);
      b_st.site = &gb_emlrtRSI;
      c_error(&b_st, message(&b_st, c_y, d_y, &emlrtMCI), &emlrtMCI);
    }

    b_st.site = &gb_emlrtRSI;
    b_obj->isInitialized = TRUE;
    c_st.site = &hb_emlrtRSI;
    b_st.site = &gb_emlrtRSI;
    c_st.site = &gb_emlrtRSI;
    d_st.site = &hb_emlrtRSI;
    c_st.site = &gb_emlrtRSI;
    d_st.site = &hb_emlrtRSI;
    b_st.site = &gb_emlrtRSI;
    c_st.site = &gb_emlrtRSI;
    c_st.site = &gb_emlrtRSI;
    c_st.site = &gb_emlrtRSI;
    d_st.site = &hb_emlrtRSI;
    b_st.site = &gb_emlrtRSI;
    c_st.site = &gb_emlrtRSI;
    for (i = 0; i < 8; i++) {
      b_obj->inputVarSize1[i] = value[i];
    }

    d_st.site = &hb_emlrtRSI;
    b_st.site = &gb_emlrtRSI;
    c_st.site = &gb_emlrtRSI;
    b_st.site = &gb_emlrtRSI;
    c_st.site = &gb_emlrtRSI;
    d_st.site = &gb_emlrtRSI;
    d_st.site = &gb_emlrtRSI;
    b_st.site = &gb_emlrtRSI;
    c_st.site = &gb_emlrtRSI;
    c_st.site = &gb_emlrtRSI;
    b_st.site = &gb_emlrtRSI;
    b_st.site = &gb_emlrtRSI;
    b_st.site = &gb_emlrtRSI;
    b_st.site = &gb_emlrtRSI;
    c_st.site = &vj_emlrtRSI;
    SDRuTransmitter_setupImplLocal(&c_st, b_obj, &deviceStatus, errMsg_data,
      errMsg_size);
    if (deviceStatus == UsrpDriverSuccess) {
      c_st.site = &vj_emlrtRSI;
      d_st.site = &hb_emlrtRSI;
    } else {
      c_st.site = &vj_emlrtRSI;
      closeDataConnection(&c_st, b_obj->pDriverHandle);
      c_st.site = &vj_emlrtRSI;
      d_st.site = &hb_emlrtRSI;
    }

    c_st.site = &vj_emlrtRSI;

    /* reportSDRuStatus SDRu status reporter */
    /*    reportSDRuStatus(STATUS,MSG,IP,METHOD) reports the SDRu status based on */
    /*    the STATUS input. STATUS is a UsrpErrorCapiEnumT type. IP is the IP */
    /*    address of the USRP(R) radio. METHOD is a UsrpReportMethodEnumT type and */
    /*    can be Warning, Error , or None. */
    /*  */
    /*    USRP(R) is a trademark of National Instruments Corp. */
    /*    Copyright 2012-2013 The MathWorks, Inc. */
    switch (deviceStatus) {
     case UsrpDriverNotCompatible:
      d_st.site = &jm_emlrtRSI;
      if (!(deviceStatus == UsrpDriverNotCompatible)) {
      } else {
        e_y = NULL;
        m17 = mxCreateCharArray(2, iv104);
        for (i = 0; i < 35; i++) {
          cv126[i] = cv127[i];
        }

        emlrtInitCharArrayR2013a(&d_st, 35, m17, cv126);
        emlrtAssign(&e_y, m17);
        f_y = NULL;
        m17 = mxCreateCharArray(2, iv105);
        for (i = 0; i < 12; i++) {
          cv128[i] = cv129[i];
        }

        emlrtInitCharArrayR2013a(&d_st, 12, m17, cv128);
        emlrtAssign(&f_y, m17);
        g_y = NULL;
        m17 = mxCreateCharArray(2, iv106);
        for (i = 0; i < 43; i++) {
          cv130[i] = cv131[i];
        }

        emlrtInitCharArrayR2013a(&d_st, 43, m17, cv130);
        emlrtAssign(&g_y, m17);
        e_st.site = &um_emlrtRSI;
        c_error(&e_st, c_message(&e_st, e_y, f_y, g_y, &g_emlrtMCI), &g_emlrtMCI);
      }
      break;

     case UsrpDriverNotResponding:
      d_st.site = &hm_emlrtRSI;
      if (!(deviceStatus == UsrpDriverNotResponding)) {
      } else {
        h_y = NULL;
        m17 = mxCreateCharArray(2, iv107);
        for (i = 0; i < 35; i++) {
          cv126[i] = cv132[i];
        }

        emlrtInitCharArrayR2013a(&d_st, 35, m17, cv126);
        emlrtAssign(&h_y, m17);
        i_y = NULL;
        m17 = mxCreateCharArray(2, iv108);
        for (i = 0; i < 12; i++) {
          cv128[i] = cv129[i];
        }

        emlrtInitCharArrayR2013a(&d_st, 12, m17, cv128);
        emlrtAssign(&i_y, m17);
        e_st.site = &um_emlrtRSI;
        c_error(&e_st, message(&e_st, h_y, i_y, &g_emlrtMCI), &g_emlrtMCI);
      }
      break;

     case UsrpDriverRxBusy:
      d_st.site = &fm_emlrtRSI;
      if (!(deviceStatus == UsrpDriverRxBusy)) {
      } else {
        j_y = NULL;
        m17 = mxCreateCharArray(2, iv109);
        for (i = 0; i < 28; i++) {
          cv133[i] = cv134[i];
        }

        emlrtInitCharArrayR2013a(&d_st, 28, m17, cv133);
        emlrtAssign(&j_y, m17);
        k_y = NULL;
        m17 = mxCreateCharArray(2, iv110);
        for (i = 0; i < 12; i++) {
          cv128[i] = cv129[i];
        }

        emlrtInitCharArrayR2013a(&d_st, 12, m17, cv128);
        emlrtAssign(&k_y, m17);
        e_st.site = &um_emlrtRSI;
        c_error(&e_st, message(&e_st, j_y, k_y, &g_emlrtMCI), &g_emlrtMCI);
      }
      break;

     case UsrpDriverTxBusy:
      d_st.site = &dm_emlrtRSI;
      if (!(deviceStatus == UsrpDriverTxBusy)) {
      } else {
        l_y = NULL;
        m17 = mxCreateCharArray(2, iv111);
        for (i = 0; i < 28; i++) {
          cv133[i] = cv135[i];
        }

        emlrtInitCharArrayR2013a(&d_st, 28, m17, cv133);
        emlrtAssign(&l_y, m17);
        m_y = NULL;
        m17 = mxCreateCharArray(2, iv112);
        for (i = 0; i < 12; i++) {
          cv128[i] = cv129[i];
        }

        emlrtInitCharArrayR2013a(&d_st, 12, m17, cv128);
        emlrtAssign(&m_y, m17);
        e_st.site = &um_emlrtRSI;
        c_error(&e_st, message(&e_st, l_y, m_y, &g_emlrtMCI), &g_emlrtMCI);
      }
      break;

     case UsrpDriverBusy:
      d_st.site = &bm_emlrtRSI;
      if (!(deviceStatus == UsrpDriverBusy)) {
      } else {
        n_y = NULL;
        m17 = mxCreateCharArray(2, iv113);
        for (i = 0; i < 26; i++) {
          cv136[i] = cv137[i];
        }

        emlrtInitCharArrayR2013a(&d_st, 26, m17, cv136);
        emlrtAssign(&n_y, m17);
        o_y = NULL;
        m17 = mxCreateCharArray(2, iv114);
        for (i = 0; i < 12; i++) {
          cv128[i] = cv129[i];
        }

        emlrtInitCharArrayR2013a(&d_st, 12, m17, cv128);
        emlrtAssign(&o_y, m17);
        e_st.site = &um_emlrtRSI;
        c_error(&e_st, message(&e_st, n_y, o_y, &g_emlrtMCI), &g_emlrtMCI);
      }
      break;

     case UsrpDriverError:
      d_st.site = &yl_emlrtRSI;
      if (!(deviceStatus == UsrpDriverError)) {
      } else {
        p_y = NULL;
        m17 = mxCreateCharArray(2, iv115);
        for (i = 0; i < 35; i++) {
          cv126[i] = cv138[i];
        }

        emlrtInitCharArrayR2013a(&d_st, 35, m17, cv126);
        emlrtAssign(&p_y, m17);
        u_size[0] = 1;
        u_size[1] = errMsg_size[1];
        loop_ub = errMsg_size[0] * errMsg_size[1];
        for (i = 0; i < loop_ub; i++) {
          u_data[i] = errMsg_data[i];
        }

        q_y = NULL;
        m17 = mxCreateCharArray(2, u_size);
        emlrtInitCharArrayR2013a(&d_st, u_size[1], m17, (char_T *)&u_data);
        emlrtAssign(&q_y, m17);
        e_st.site = &um_emlrtRSI;
        c_error(&e_st, message(&e_st, p_y, q_y, &g_emlrtMCI), &g_emlrtMCI);
      }
      break;
    }

    b_st.site = &gb_emlrtRSI;
    b_st.site = &gb_emlrtRSI;
    b_obj->TunablePropsChanged = FALSE;
    c_st.site = &hb_emlrtRSI;
  }

  st.site = &gb_emlrtRSI;
  st.site = &gb_emlrtRSI;
  b_obj = obj;
  if (b_obj->TunablePropsChanged) {
    b_st.site = &gb_emlrtRSI;
    b_st.site = &gb_emlrtRSI;
    b_obj->TunablePropsChanged = FALSE;
    c_st.site = &hb_emlrtRSI;
    b_st.site = &gb_emlrtRSI;
    b_st.site = &gb_emlrtRSI;
    c_st.site = &hb_emlrtRSI;
    for (i = 0; i < 4; i++) {
      b_obj->tunablePropertyChanged[i] = FALSE;
    }

    d_st.site = &hb_emlrtRSI;
  }

  st.site = &gb_emlrtRSI;
  b_st.site = &gb_emlrtRSI;
  b_st.site = &gb_emlrtRSI;
  st.site = &gb_emlrtRSI;
  st.site = &gb_emlrtRSI;
  b_obj = obj;
  anyInputSizeChanged = FALSE;
  i = 0;
  exitg1 = FALSE;
  while ((exitg1 == FALSE) && (i < 8)) {
    if (b_obj->inputVarSize1[i] != uv0[i]) {
      anyInputSizeChanged = TRUE;
      b_st.site = &gb_emlrtRSI;
      for (i = 0; i < 8; i++) {
        b_obj->inputVarSize1[i] = value[i];
      }

      c_st.site = &hb_emlrtRSI;
      exitg1 = TRUE;
    } else {
      i++;
    }
  }

  if (anyInputSizeChanged) {
    st.site = &gb_emlrtRSI;
    st.site = &gb_emlrtRSI;
  }

  st.site = &gb_emlrtRSI;
  b_st.site = &gb_emlrtRSI;
  b_st.site = &gb_emlrtRSI;
  st.site = &gb_emlrtRSI;
  st.site = &gb_emlrtRSI;
  st.site = &gb_emlrtRSI;
  SDRuTransmitter_stepImpl(SD, &st, obj, varargin_1);
}

void k_SystemCore_step(testPHYTransmitStackData *SD, const emlrtStack *sp,
  comm_SDRuReceiver *obj)
{
  const mxArray *y;
  static const int32_T iv120[2] = { 1, 45 };

  const mxArray *m22;
  char_T cv147[45];
  int32_T i;
  static const char_T cv148[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C',
    'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv121[2] = { 1, 4 };

  char_T cv149[4];
  static const char_T cv150[4] = { 's', 't', 'e', 'p' };

  comm_SDRuReceiver *b_obj;
  const mxArray *c_y;
  static const int32_T iv122[2] = { 1, 51 };

  char_T cv151[51];
  static const char_T cv152[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l',
    'e', 'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *d_y;
  static const int32_T iv123[2] = { 1, 5 };

  char_T cv153[5];
  static const char_T cv154[5] = { 's', 'e', 't', 'u', 'p' };

  int32_T errMsg_size[2];
  char_T errMsg_data[1024];
  UsrpErrorCapiEnumT deviceStatus;
  const mxArray *e_y;
  static const int32_T iv124[2] = { 1, 35 };

  char_T cv155[35];
  static const char_T cv156[35] = { 's', 'd', 'r', 'u', ':', 'r', 'e', 'p', 'o',
    'r', 't', 'S', 'D', 'R', 'u', 'S', 't', 'a', 't', 'u', 's', ':', 'N', 'o',
    't', 'C', 'o', 'm', 'p', 'a', 't', 'i', 'b', 'l', 'e' };

  const mxArray *f_y;
  static const int32_T iv125[2] = { 1, 12 };

  char_T cv157[12];
  static const char_T cv158[12] = { '1', '9', '2', '.', '1', '6', '8', '.', '1',
    '0', '.', '2' };

  const mxArray *g_y;
  static const int32_T iv126[2] = { 1, 43 };

  char_T cv159[43];
  static const char_T cv160[43] = { 'r', 'e', 't', 'u', 'r', 'n', 'e', 'd', ' ',
    'b', 'y', ' ', '\'', 'g', 'e', 't', 'S', 'D', 'R', 'u', 'D', 'r', 'i', 'v',
    'e', 'r', 'V', 'e', 'r', 's', 'i', 'o', 'n', '\'', ' ', 'f', 'u', 'n', 'c',
    't', 'i', 'o', 'n' };

  const mxArray *h_y;
  static const int32_T iv127[2] = { 1, 35 };

  static const char_T cv161[35] = { 's', 'd', 'r', 'u', ':', 'r', 'e', 'p', 'o',
    'r', 't', 'S', 'D', 'R', 'u', 'S', 't', 'a', 't', 'u', 's', ':', 'N', 'o',
    't', 'R', 'e', 's', 'p', 'o', 'n', 'd', 'i', 'n', 'g' };

  const mxArray *i_y;
  static const int32_T iv128[2] = { 1, 12 };

  const mxArray *j_y;
  static const int32_T iv129[2] = { 1, 28 };

  char_T cv162[28];
  static const char_T cv163[28] = { 's', 'd', 'r', 'u', ':', 'r', 'e', 'p', 'o',
    'r', 't', 'S', 'D', 'R', 'u', 'S', 't', 'a', 't', 'u', 's', ':', 'R', 'x',
    'B', 'u', 's', 'y' };

  const mxArray *k_y;
  static const int32_T iv130[2] = { 1, 12 };

  const mxArray *l_y;
  static const int32_T iv131[2] = { 1, 28 };

  static const char_T cv164[28] = { 's', 'd', 'r', 'u', ':', 'r', 'e', 'p', 'o',
    'r', 't', 'S', 'D', 'R', 'u', 'S', 't', 'a', 't', 'u', 's', ':', 'T', 'x',
    'B', 'u', 's', 'y' };

  const mxArray *m_y;
  static const int32_T iv132[2] = { 1, 12 };

  const mxArray *n_y;
  static const int32_T iv133[2] = { 1, 26 };

  char_T cv165[26];
  static const char_T cv166[26] = { 's', 'd', 'r', 'u', ':', 'r', 'e', 'p', 'o',
    'r', 't', 'S', 'D', 'R', 'u', 'S', 't', 'a', 't', 'u', 's', ':', 'B', 'u',
    's', 'y' };

  const mxArray *o_y;
  static const int32_T iv134[2] = { 1, 12 };

  const mxArray *p_y;
  static const int32_T iv135[2] = { 1, 35 };

  static const char_T cv167[35] = { 's', 'd', 'r', 'u', ':', 'r', 'e', 'p', 'o',
    'r', 't', 'S', 'D', 'R', 'u', 'S', 't', 'a', 't', 'u', 's', ':', 'U', 'n',
    'k', 'n', 'o', 'w', 'n', 'S', 't', 'a', 't', 'u', 's' };

  int32_T u_size[2];
  int32_T i17;
  char_T u_data[1024];
  const mxArray *q_y;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  if (!obj->isReleased) {
  } else {
    y = NULL;
    m22 = mxCreateCharArray(2, iv120);
    for (i = 0; i < 45; i++) {
      cv147[i] = cv148[i];
    }

    emlrtInitCharArrayR2013a(sp, 45, m22, cv147);
    emlrtAssign(&y, m22);
    b_y = NULL;
    m22 = mxCreateCharArray(2, iv121);
    for (i = 0; i < 4; i++) {
      cv149[i] = cv150[i];
    }

    emlrtInitCharArrayR2013a(sp, 4, m22, cv149);
    emlrtAssign(&b_y, m22);
    st.site = &gb_emlrtRSI;
    c_error(&st, message(&st, y, b_y, &emlrtMCI), &emlrtMCI);
  }

  if (!obj->isInitialized) {
    st.site = &gb_emlrtRSI;
    b_obj = obj;
    if (!b_obj->isInitialized) {
    } else {
      c_y = NULL;
      m22 = mxCreateCharArray(2, iv122);
      for (i = 0; i < 51; i++) {
        cv151[i] = cv152[i];
      }

      emlrtInitCharArrayR2013a(&st, 51, m22, cv151);
      emlrtAssign(&c_y, m22);
      d_y = NULL;
      m22 = mxCreateCharArray(2, iv123);
      for (i = 0; i < 5; i++) {
        cv153[i] = cv154[i];
      }

      emlrtInitCharArrayR2013a(&st, 5, m22, cv153);
      emlrtAssign(&d_y, m22);
      b_st.site = &gb_emlrtRSI;
      c_error(&b_st, message(&b_st, c_y, d_y, &emlrtMCI), &emlrtMCI);
    }

    b_st.site = &gb_emlrtRSI;
    b_obj->isInitialized = TRUE;
    c_st.site = &hb_emlrtRSI;
    b_st.site = &gb_emlrtRSI;
    b_st.site = &gb_emlrtRSI;
    c_st.site = &gb_emlrtRSI;
    b_st.site = &gb_emlrtRSI;
    b_st.site = &gb_emlrtRSI;
    c_st.site = &gb_emlrtRSI;
    b_st.site = &gb_emlrtRSI;
    c_st.site = &gb_emlrtRSI;
    d_st.site = &gb_emlrtRSI;
    d_st.site = &gb_emlrtRSI;
    b_st.site = &gb_emlrtRSI;
    c_st.site = &gb_emlrtRSI;
    c_st.site = &gb_emlrtRSI;
    b_st.site = &gb_emlrtRSI;
    b_st.site = &gb_emlrtRSI;
    b_st.site = &gb_emlrtRSI;
    b_st.site = &gb_emlrtRSI;
    c_st.site = &vj_emlrtRSI;
    SDRuReceiver_setupImplLocal(&c_st, b_obj, &deviceStatus, errMsg_data,
      errMsg_size);
    if (deviceStatus == UsrpDriverSuccess) {
      c_st.site = &vj_emlrtRSI;
      d_st.site = &hb_emlrtRSI;
    } else {
      c_st.site = &vj_emlrtRSI;
      closeDataConnection(&c_st, b_obj->pDriverHandle);
      c_st.site = &vj_emlrtRSI;
      d_st.site = &hb_emlrtRSI;
    }

    c_st.site = &vj_emlrtRSI;

    /* reportSDRuStatus SDRu status reporter */
    /*    reportSDRuStatus(STATUS,MSG,IP,METHOD) reports the SDRu status based on */
    /*    the STATUS input. STATUS is a UsrpErrorCapiEnumT type. IP is the IP */
    /*    address of the USRP(R) radio. METHOD is a UsrpReportMethodEnumT type and */
    /*    can be Warning, Error , or None. */
    /*  */
    /*    USRP(R) is a trademark of National Instruments Corp. */
    /*    Copyright 2012-2013 The MathWorks, Inc. */
    switch (deviceStatus) {
     case UsrpDriverNotCompatible:
      d_st.site = &jm_emlrtRSI;
      if (!(deviceStatus == UsrpDriverNotCompatible)) {
      } else {
        e_y = NULL;
        m22 = mxCreateCharArray(2, iv124);
        for (i = 0; i < 35; i++) {
          cv155[i] = cv156[i];
        }

        emlrtInitCharArrayR2013a(&d_st, 35, m22, cv155);
        emlrtAssign(&e_y, m22);
        f_y = NULL;
        m22 = mxCreateCharArray(2, iv125);
        for (i = 0; i < 12; i++) {
          cv157[i] = cv158[i];
        }

        emlrtInitCharArrayR2013a(&d_st, 12, m22, cv157);
        emlrtAssign(&f_y, m22);
        g_y = NULL;
        m22 = mxCreateCharArray(2, iv126);
        for (i = 0; i < 43; i++) {
          cv159[i] = cv160[i];
        }

        emlrtInitCharArrayR2013a(&d_st, 43, m22, cv159);
        emlrtAssign(&g_y, m22);
        e_st.site = &um_emlrtRSI;
        c_error(&e_st, c_message(&e_st, e_y, f_y, g_y, &g_emlrtMCI), &g_emlrtMCI);
      }
      break;

     case UsrpDriverNotResponding:
      d_st.site = &hm_emlrtRSI;
      if (!(deviceStatus == UsrpDriverNotResponding)) {
      } else {
        h_y = NULL;
        m22 = mxCreateCharArray(2, iv127);
        for (i = 0; i < 35; i++) {
          cv155[i] = cv161[i];
        }

        emlrtInitCharArrayR2013a(&d_st, 35, m22, cv155);
        emlrtAssign(&h_y, m22);
        i_y = NULL;
        m22 = mxCreateCharArray(2, iv128);
        for (i = 0; i < 12; i++) {
          cv157[i] = cv158[i];
        }

        emlrtInitCharArrayR2013a(&d_st, 12, m22, cv157);
        emlrtAssign(&i_y, m22);
        e_st.site = &um_emlrtRSI;
        c_error(&e_st, message(&e_st, h_y, i_y, &g_emlrtMCI), &g_emlrtMCI);
      }
      break;

     case UsrpDriverRxBusy:
      d_st.site = &fm_emlrtRSI;
      if (!(deviceStatus == UsrpDriverRxBusy)) {
      } else {
        j_y = NULL;
        m22 = mxCreateCharArray(2, iv129);
        for (i = 0; i < 28; i++) {
          cv162[i] = cv163[i];
        }

        emlrtInitCharArrayR2013a(&d_st, 28, m22, cv162);
        emlrtAssign(&j_y, m22);
        k_y = NULL;
        m22 = mxCreateCharArray(2, iv130);
        for (i = 0; i < 12; i++) {
          cv157[i] = cv158[i];
        }

        emlrtInitCharArrayR2013a(&d_st, 12, m22, cv157);
        emlrtAssign(&k_y, m22);
        e_st.site = &um_emlrtRSI;
        c_error(&e_st, message(&e_st, j_y, k_y, &g_emlrtMCI), &g_emlrtMCI);
      }
      break;

     case UsrpDriverTxBusy:
      d_st.site = &dm_emlrtRSI;
      if (!(deviceStatus == UsrpDriverTxBusy)) {
      } else {
        l_y = NULL;
        m22 = mxCreateCharArray(2, iv131);
        for (i = 0; i < 28; i++) {
          cv162[i] = cv164[i];
        }

        emlrtInitCharArrayR2013a(&d_st, 28, m22, cv162);
        emlrtAssign(&l_y, m22);
        m_y = NULL;
        m22 = mxCreateCharArray(2, iv132);
        for (i = 0; i < 12; i++) {
          cv157[i] = cv158[i];
        }

        emlrtInitCharArrayR2013a(&d_st, 12, m22, cv157);
        emlrtAssign(&m_y, m22);
        e_st.site = &um_emlrtRSI;
        c_error(&e_st, message(&e_st, l_y, m_y, &g_emlrtMCI), &g_emlrtMCI);
      }
      break;

     case UsrpDriverBusy:
      d_st.site = &bm_emlrtRSI;
      if (!(deviceStatus == UsrpDriverBusy)) {
      } else {
        n_y = NULL;
        m22 = mxCreateCharArray(2, iv133);
        for (i = 0; i < 26; i++) {
          cv165[i] = cv166[i];
        }

        emlrtInitCharArrayR2013a(&d_st, 26, m22, cv165);
        emlrtAssign(&n_y, m22);
        o_y = NULL;
        m22 = mxCreateCharArray(2, iv134);
        for (i = 0; i < 12; i++) {
          cv157[i] = cv158[i];
        }

        emlrtInitCharArrayR2013a(&d_st, 12, m22, cv157);
        emlrtAssign(&o_y, m22);
        e_st.site = &um_emlrtRSI;
        c_error(&e_st, message(&e_st, n_y, o_y, &g_emlrtMCI), &g_emlrtMCI);
      }
      break;

     case UsrpDriverError:
      d_st.site = &yl_emlrtRSI;
      if (!(deviceStatus == UsrpDriverError)) {
      } else {
        p_y = NULL;
        m22 = mxCreateCharArray(2, iv135);
        for (i = 0; i < 35; i++) {
          cv155[i] = cv167[i];
        }

        emlrtInitCharArrayR2013a(&d_st, 35, m22, cv155);
        emlrtAssign(&p_y, m22);
        u_size[0] = 1;
        u_size[1] = errMsg_size[1];
        i = errMsg_size[0] * errMsg_size[1];
        for (i17 = 0; i17 < i; i17++) {
          u_data[i17] = errMsg_data[i17];
        }

        q_y = NULL;
        m22 = mxCreateCharArray(2, u_size);
        emlrtInitCharArrayR2013a(&d_st, u_size[1], m22, (char_T *)&u_data);
        emlrtAssign(&q_y, m22);
        e_st.site = &um_emlrtRSI;
        c_error(&e_st, message(&e_st, p_y, q_y, &g_emlrtMCI), &g_emlrtMCI);
      }
      break;
    }

    b_st.site = &gb_emlrtRSI;
    b_st.site = &gb_emlrtRSI;
    b_obj->TunablePropsChanged = FALSE;
    c_st.site = &hb_emlrtRSI;
  }

  st.site = &gb_emlrtRSI;
  st.site = &gb_emlrtRSI;
  b_obj = obj;
  if (b_obj->TunablePropsChanged) {
    b_st.site = &gb_emlrtRSI;
    b_st.site = &gb_emlrtRSI;
    b_obj->TunablePropsChanged = FALSE;
    c_st.site = &hb_emlrtRSI;
    b_st.site = &gb_emlrtRSI;
    b_st.site = &gb_emlrtRSI;
    c_st.site = &hb_emlrtRSI;
    for (i17 = 0; i17 < 4; i17++) {
      b_obj->tunablePropertyChanged[i17] = FALSE;
    }

    d_st.site = &hb_emlrtRSI;
  }

  st.site = &gb_emlrtRSI;
  b_st.site = &gb_emlrtRSI;
  b_st.site = &gb_emlrtRSI;
  st.site = &gb_emlrtRSI;
  st.site = &gb_emlrtRSI;
  st.site = &gb_emlrtRSI;
  b_st.site = &gb_emlrtRSI;
  b_st.site = &gb_emlrtRSI;
  st.site = &gb_emlrtRSI;
  st.site = &gb_emlrtRSI;
  st.site = &gb_emlrtRSI;
  SDRuReceiver_stepImpl(SD, &st, obj);
}

/* End of code generation (SystemCore.c) */
