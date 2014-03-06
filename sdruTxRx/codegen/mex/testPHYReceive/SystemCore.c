/*
 * SystemCore.c
 *
 * Code generation for function 'SystemCore'
 *
 * C source code generated on: Thu Feb 27 11:53:20 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testPHYReceive.h"
#include "SystemCore.h"
#include "PHYReceive.h"
#include "SystemProp.h"
#include "find.h"
#include "testPHYReceive_emxutil.h"
#include "Nondirect1.h"
#include "OFDMModulator.h"
#include "testPHYReceive_mexutil.h"
#include "testPHYReceive_data.h"

/* Variable Definitions */
static emlrtRSInfo rc_emlrtRSI = { 345, "OFDMModulator",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/OFDMModulator.m" };

static emlrtRSInfo sc_emlrtRSI = { 374, "OFDMModulator",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/OFDMModulator.m" };

static emlrtRSInfo tc_emlrtRSI = { 375, "OFDMModulator",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/OFDMModulator.m" };

static emlrtRSInfo uc_emlrtRSI = { 388, "OFDMModulator",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/OFDMModulator.m" };

static emlrtRSInfo xc_emlrtRSI = { 415, "OFDMModulator",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/OFDMModulator.m" };

static emlrtRSInfo yc_emlrtRSI = { 419, "OFDMModulator",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/OFDMModulator.m" };

static emlrtRSInfo ad_emlrtRSI = { 423, "OFDMModulator",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/OFDMModulator.m" };

static emlrtRSInfo bd_emlrtRSI = { 424, "OFDMModulator",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/OFDMModulator.m" };

static emlrtRSInfo gt_emlrtRSI = { 1, "FIRRateConverter",
  "/Applications/MATLAB_R2013b.app/toolbox/dsp/dsp/+dspcodegen/FIRRateConverter.p"
};

static emlrtRTEInfo i_emlrtRTEI = { 1, 13, "SystemCore",
  "/Applications/MATLAB_R2013b.app/toolbox/shared/system/coder/+matlab/+system/+coder/SystemCore.p"
};

static emlrtBCInfo d_emlrtBCI = { 1, 768, 403, 9, "packedData", "OFDMModulator",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/OFDMModulator.m", 0 };

static emlrtRTEInfo ac_emlrtRTEI = { 41, 1, "update",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/scomp/update.m" };

static emlrtRTEInfo bc_emlrtRTEI = { 43, 20, "output",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/scomp/output.m" };

static emlrtRTEInfo cc_emlrtRTEI = { 19, 1, "reset",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/scomp/reset.m" };

static emlrtRTEInfo dc_emlrtRTEI = { 43, 1, "setup",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/scomp/setup.m" };

/* Function Declarations */
static void SystemCore_validateProperties(void);

/* Function Definitions */
static void SystemCore_validateProperties(void)
{
}

void SystemCore_reset(const emlrtStack *sp, dspcodegen_FIRRateConverter *obj)
{
  const mxArray *y;
  static const int32_T iv121[2] = { 1, 45 };

  const mxArray *m25;
  char_T cv142[45];
  int32_T i;
  static const char_T cv143[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C',
    'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv122[2] = { 1, 5 };

  char_T cv144[5];
  static const char_T cv145[5] = { 'r', 'e', 's', 'e', 't' };

  dspcodegen_FIRRateConverter *b_obj;
  dsp_FIRRateConverter_7 *c_obj;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (!obj->isReleased) {
  } else {
    y = NULL;
    m25 = mxCreateCharArray(2, iv121);
    for (i = 0; i < 45; i++) {
      cv142[i] = cv143[i];
    }

    emlrtInitCharArrayR2013a(sp, 45, m25, cv142);
    emlrtAssign(&y, m25);
    b_y = NULL;
    m25 = mxCreateCharArray(2, iv122);
    for (i = 0; i < 5; i++) {
      cv144[i] = cv145[i];
    }

    emlrtInitCharArrayR2013a(sp, 5, m25, cv144);
    emlrtAssign(&b_y, m25);
    st.site = &cb_emlrtRSI;
    b_error(&st, message(&st, y, b_y, &emlrtMCI), &emlrtMCI);
  }

  if (obj->isInitialized) {
    st.site = NULL;
    b_obj = obj;
    b_st.site = &gt_emlrtRSI;
    c_obj = &b_obj->cSFunObject;
    if (c_obj->S1_isReleased) {
      emlrtErrorWithMessageIdR2012b(&b_st, &cc_emlrtRTEI,
        "MATLAB:system:runtimeMethodCalledWhenReleasedCodegen", 0);
    }

    /* System object Initialization function: dsp.FIRRateConverter */
    c_obj->W1_InBufIdx = 0;
    for (i = 0; i < 252; i++) {
      c_obj->W0_InBuf[i].re = 0.0;
      c_obj->W0_InBuf[i].im = 0.0;
    }
  }
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
    st.site = &cb_emlrtRSI;
    b_error(&st, message(&st, y, b_y, &emlrtMCI), &emlrtMCI);
  }

  if (!obj->isInitialized) {
    st.site = &cb_emlrtRSI;
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
      b_st.site = &cb_emlrtRSI;
      b_error(&b_st, message(&b_st, c_y, d_y, &emlrtMCI), &emlrtMCI);
    }

    b_st.site = &cb_emlrtRSI;
    b_obj->isInitialized = TRUE;
    c_st.site = &db_emlrtRSI;
    b_st.site = &cb_emlrtRSI;
    c_st.site = &cb_emlrtRSI;
    c_st.site = &cb_emlrtRSI;
    b_st.site = &cb_emlrtRSI;
    c_st.site = &cb_emlrtRSI;
    c_st.site = &cb_emlrtRSI;
    c_st.site = &cb_emlrtRSI;
    c_st.site = &cb_emlrtRSI;
    b_st.site = &cb_emlrtRSI;
    c_st.site = &cb_emlrtRSI;
    b_st.site = &cb_emlrtRSI;
    c_st.site = &cb_emlrtRSI;
    b_st.site = &cb_emlrtRSI;
    c_st.site = &cb_emlrtRSI;
    b_st.site = &cb_emlrtRSI;
    c_st.site = &cb_emlrtRSI;
    c_st.site = &cb_emlrtRSI;
    b_st.site = &cb_emlrtRSI;
    b_st.site = &cb_emlrtRSI;
    b_st.site = &cb_emlrtRSI;
    b_st.site = &cb_emlrtRSI;
    c_st.site = &rc_emlrtRSI;
    c_st.site = &sc_emlrtRSI;
    for (i = 0; i < 64; i++) {
      b_obj->pFullGrid[i] = 1.0;
    }

    for (i = 0; i < 64; i++) {
      value[i] = b_obj->pFullGrid[i];
    }

    for (i = 0; i < 11; i++) {
      value[iv14[i]] = 0.0;
    }

    c_st.site = &tc_emlrtRSI;
    for (i = 0; i < 64; i++) {
      b_obj->pFullGrid[i] = value[i];
    }

    c_st.site = &uc_emlrtRSI;
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

    c_st.site = &uc_emlrtRSI;
    i = b_obj->pDataLinearIndices->size[0];
    b_obj->pDataLinearIndices->size[0] = ii;
    emxEnsureCapacity(&c_st, (emxArray__common *)b_obj->pDataLinearIndices, i,
                      (int32_T)sizeof(real_T), &i_emlrtRTEI);
    for (i = 0; i < ii; i++) {
      b_obj->pDataLinearIndices->data[i] = ii_data[i];
    }

    b_st.site = &cb_emlrtRSI;
  }

  st.site = &cb_emlrtRSI;
  st.site = &cb_emlrtRSI;
  st.site = &cb_emlrtRSI;
  b_st.site = &cb_emlrtRSI;
  b_st.site = &cb_emlrtRSI;
  st.site = &cb_emlrtRSI;
  st.site = &cb_emlrtRSI;
  st.site = &cb_emlrtRSI;
  b_st.site = &cb_emlrtRSI;
  b_st.site = &cb_emlrtRSI;
  st.site = &cb_emlrtRSI;
  st.site = &cb_emlrtRSI;
  st.site = &cb_emlrtRSI;
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
    st.site = &cb_emlrtRSI;
    b_error(&st, message(&st, y, b_y, &emlrtMCI), &emlrtMCI);
  }

  if (!obj->isInitialized) {
    st.site = &cb_emlrtRSI;
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
      b_st.site = &cb_emlrtRSI;
      b_error(&b_st, message(&b_st, c_y, d_y, &emlrtMCI), &emlrtMCI);
    }

    b_st.site = &cb_emlrtRSI;
    b_obj->isInitialized = TRUE;
    c_st.site = &db_emlrtRSI;
    b_st.site = &cb_emlrtRSI;
    c_st.site = &cb_emlrtRSI;
    c_st.site = &cb_emlrtRSI;
    b_st.site = &cb_emlrtRSI;
    c_st.site = &cb_emlrtRSI;
    c_st.site = &cb_emlrtRSI;
    c_st.site = &cb_emlrtRSI;
    c_st.site = &cb_emlrtRSI;
    b_st.site = &cb_emlrtRSI;
    c_st.site = &cb_emlrtRSI;
    b_st.site = &cb_emlrtRSI;
    c_st.site = &cb_emlrtRSI;
    b_st.site = &cb_emlrtRSI;
    c_st.site = &cb_emlrtRSI;
    b_st.site = &cb_emlrtRSI;
    c_st.site = &cb_emlrtRSI;
    c_st.site = &cb_emlrtRSI;
    b_st.site = &cb_emlrtRSI;
    b_st.site = &cb_emlrtRSI;
    b_st.site = &cb_emlrtRSI;
    b_st.site = &cb_emlrtRSI;
    c_st.site = &rc_emlrtRSI;
    c_st.site = &sc_emlrtRSI;
    for (i = 0; i < 64; i++) {
      b_obj->pFullGrid[i] = 1.0;
    }

    for (i = 0; i < 64; i++) {
      value[i] = b_obj->pFullGrid[i];
    }

    for (i = 0; i < 11; i++) {
      value[iv19[i]] = 0.0;
    }

    c_st.site = &tc_emlrtRSI;
    for (i = 0; i < 64; i++) {
      b_obj->pFullGrid[i] = value[i];
    }

    c_st.site = &uc_emlrtRSI;
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

    c_st.site = &uc_emlrtRSI;
    i = b_obj->pDataLinearIndices->size[0];
    b_obj->pDataLinearIndices->size[0] = ii;
    emxEnsureCapacity(&c_st, (emxArray__common *)b_obj->pDataLinearIndices, i,
                      (int32_T)sizeof(real_T), &i_emlrtRTEI);
    for (i = 0; i < ii; i++) {
      b_obj->pDataLinearIndices->data[i] = ii_data[i];
    }

    b_st.site = &cb_emlrtRSI;
  }

  st.site = &cb_emlrtRSI;
  st.site = &cb_emlrtRSI;
  st.site = &cb_emlrtRSI;
  b_st.site = &cb_emlrtRSI;
  b_st.site = &cb_emlrtRSI;
  st.site = &cb_emlrtRSI;
  st.site = &cb_emlrtRSI;
  st.site = &cb_emlrtRSI;
  b_st.site = &cb_emlrtRSI;
  b_st.site = &cb_emlrtRSI;
  st.site = &cb_emlrtRSI;
  st.site = &cb_emlrtRSI;
  for (i = 0; i < 53; i++) {
    dcv2[i].re = iv20[i];
    dcv2[i].im = 0.0;
  }

  st.site = &cb_emlrtRSI;
  OFDMModulator_stepImpl(&st, obj, dcv2, varargout_1);
}

void b_SystemCore_validateProperties(void)
{
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
    st.site = &cb_emlrtRSI;
    b_error(&st, message(&st, y, b_y, &emlrtMCI), &emlrtMCI);
  }

  if (!obj->isInitialized) {
    st.site = &cb_emlrtRSI;
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
      b_st.site = &cb_emlrtRSI;
      b_error(&b_st, message(&b_st, c_y, d_y, &emlrtMCI), &emlrtMCI);
    }

    b_st.site = &cb_emlrtRSI;
    b_obj->isInitialized = TRUE;
    b_st.site = &cb_emlrtRSI;
    b_st.site = &cb_emlrtRSI;
    b_st.site = &cb_emlrtRSI;
    for (k = 0; k < 8; k++) {
      b_obj->inputVarSize1[k] = (uint32_T)value[k];
    }

    b_st.site = &cb_emlrtRSI;
    b_st.site = &cb_emlrtRSI;
    b_st.site = &cb_emlrtRSI;
    b_st.site = &cb_emlrtRSI;
    b_st.site = &cb_emlrtRSI;
    b_st.site = &cb_emlrtRSI;
    b_st.site = &cb_emlrtRSI;
    b_st.site = &cb_emlrtRSI;
  }

  st.site = &cb_emlrtRSI;
  st.site = &cb_emlrtRSI;
  st.site = &cb_emlrtRSI;
  b_st.site = &cb_emlrtRSI;
  b_st.site = &cb_emlrtRSI;
  st.site = &cb_emlrtRSI;
  st.site = &cb_emlrtRSI;
  b_obj = obj;
  anyInputSizeChanged = FALSE;
  k = 0;
  exitg1 = FALSE;
  while ((exitg1 == FALSE) && (k < 8)) {
    if (b_obj->inputVarSize1[k] != (uint32_T)iv28[k]) {
      anyInputSizeChanged = TRUE;
      b_st.site = &cb_emlrtRSI;
      for (k = 0; k < 8; k++) {
        b_obj->inputVarSize1[k] = (uint32_T)value[k];
      }

      exitg1 = TRUE;
    } else {
      k++;
    }
  }

  if (anyInputSizeChanged) {
    st.site = &cb_emlrtRSI;
    st.site = &cb_emlrtRSI;
  }

  st.site = &cb_emlrtRSI;
  b_st.site = &cb_emlrtRSI;
  b_st.site = &cb_emlrtRSI;
  st.site = &cb_emlrtRSI;
  st.site = &cb_emlrtRSI;
  st.site = &cb_emlrtRSI;
  b_obj = obj;
  b_st.site = &ag_emlrtRSI;
  b_st.site = &ag_emlrtRSI;
  b_st.site = &ag_emlrtRSI;
  b_st.site = &ag_emlrtRSI;
  b_st.site = &ag_emlrtRSI;
  b_st.site = &ag_emlrtRSI;
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
  b_st.site = &ag_emlrtRSI;
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
    st.site = &cb_emlrtRSI;
    b_error(&st, message(&st, y, b_y, &emlrtMCI), &emlrtMCI);
  }

  if (!obj->isInitialized) {
    st.site = &cb_emlrtRSI;
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
      b_st.site = &cb_emlrtRSI;
      b_error(&b_st, message(&b_st, c_y, d_y, &emlrtMCI), &emlrtMCI);
    }

    b_st.site = &cb_emlrtRSI;
    b_obj->isInitialized = TRUE;
    b_st.site = &cb_emlrtRSI;
    b_st.site = &cb_emlrtRSI;
    b_st.site = &cb_emlrtRSI;
    for (i = 0; i < 8; i++) {
      b_obj->inputVarSize1[i] = (uint32_T)value[i];
    }

    b_st.site = &cb_emlrtRSI;
    b_st.site = &cb_emlrtRSI;
    b_st.site = &cb_emlrtRSI;
    b_st.site = &cb_emlrtRSI;
    b_st.site = &cb_emlrtRSI;
    b_st.site = &cb_emlrtRSI;
    b_st.site = &cb_emlrtRSI;
    b_st.site = &cb_emlrtRSI;
  }

  st.site = &cb_emlrtRSI;
  st.site = &cb_emlrtRSI;
  st.site = &cb_emlrtRSI;
  b_st.site = &cb_emlrtRSI;
  b_st.site = &cb_emlrtRSI;
  st.site = &cb_emlrtRSI;
  st.site = &cb_emlrtRSI;
  b_obj = obj;
  anyInputSizeChanged = FALSE;
  i = 0;
  exitg1 = FALSE;
  while ((exitg1 == FALSE) && (i < 8)) {
    if (b_obj->inputVarSize1[i] != (uint32_T)iv33[i]) {
      anyInputSizeChanged = TRUE;
      b_st.site = &cb_emlrtRSI;
      for (i = 0; i < 8; i++) {
        b_obj->inputVarSize1[i] = (uint32_T)value[i];
      }

      exitg1 = TRUE;
    } else {
      i++;
    }
  }

  if (anyInputSizeChanged) {
    st.site = &cb_emlrtRSI;
    st.site = &cb_emlrtRSI;
  }

  st.site = &cb_emlrtRSI;
  b_st.site = &cb_emlrtRSI;
  b_st.site = &cb_emlrtRSI;
  st.site = &cb_emlrtRSI;
  st.site = &cb_emlrtRSI;
  st.site = &cb_emlrtRSI;
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
  int32_T iDelta;
  int32_T i2;
  static const int8_T iv41[11] = { 0, 1, 2, 3, 4, 5, 59, 60, 61, 62, 63 };

  static const int16_T iv42[48] = { 11, 25, 39, 53, 75, 89, 103, 117, 139, 153,
    167, 181, 203, 217, 231, 245, 267, 281, 295, 309, 331, 345, 359, 373, 395,
    409, 423, 437, 459, 473, 487, 501, 523, 537, 551, 565, 587, 601, 615, 629,
    651, 665, 679, 693, 715, 729, 743, 757 };

  boolean_T x[768];
  int32_T ii_size[1];
  int32_T b_ii_data[768];
  int32_T b_ii_size[1];
  int32_T ju;
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
    st.site = &cb_emlrtRSI;
    b_error(&st, message(&st, y, b_y, &emlrtMCI), &emlrtMCI);
  }

  if (!obj->isInitialized) {
    st.site = &cb_emlrtRSI;
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
      b_st.site = &cb_emlrtRSI;
      b_error(&b_st, message(&b_st, c_y, d_y, &emlrtMCI), &emlrtMCI);
    }

    b_st.site = &cb_emlrtRSI;
    c_SystemProp_matlabCodegenSetAn(b_obj);
    b_st.site = &cb_emlrtRSI;
    b_st.site = &cb_emlrtRSI;
    b_st.site = &cb_emlrtRSI;
    b_st.site = &cb_emlrtRSI;
    SystemCore_validateProperties();
    b_st.site = &cb_emlrtRSI;
    b_st.site = &cb_emlrtRSI;
    b_st.site = &cb_emlrtRSI;
    b_st.site = &cb_emlrtRSI;
    b_st.site = &cb_emlrtRSI;
    b_st.site = &cb_emlrtRSI;
    for (iDelta = 0; iDelta < 768; iDelta++) {
      ii_data[iDelta] = 1.0;
    }

    d_SystemProp_matlabCodegenSetAn(b_obj, ii_data);
    for (iDelta = 0; iDelta < 768; iDelta++) {
      ii_data[iDelta] = b_obj->pFullGrid[iDelta];
    }

    for (iDelta = 0; iDelta < 12; iDelta++) {
      for (i2 = 0; i2 < 11; i2++) {
        ii_data[iv41[i2] + (iDelta << 6)] = 0.0;
      }
    }

    d_SystemProp_matlabCodegenSetAn(b_obj, ii_data);
    for (iDelta = 0; iDelta < 768; iDelta++) {
      ii_data[iDelta] = b_obj->pFullGrid[iDelta];
    }

    for (iDelta = 0; iDelta < 12; iDelta++) {
      ii_data[32 + (iDelta << 6)] = 0.0;
    }

    d_SystemProp_matlabCodegenSetAn(b_obj, ii_data);
    for (iDelta = 0; iDelta < 768; iDelta++) {
      ii_data[iDelta] = b_obj->pFullGrid[iDelta];
    }

    for (iDelta = 0; iDelta < 48; iDelta++) {
      ii_data[iv42[iDelta]] = 2.0;
    }

    d_SystemProp_matlabCodegenSetAn(b_obj, ii_data);
    for (iDelta = 0; iDelta < 768; iDelta++) {
      x[iDelta] = (b_obj->pFullGrid[iDelta] == 1.0);
    }

    eml_find(x, b_ii_data, ii_size);
    b_ii_size[0] = ii_size[0];
    ju = ii_size[0];
    for (iDelta = 0; iDelta < ju; iDelta++) {
      ii_data[iDelta] = b_ii_data[iDelta];
    }

    c_st.site = &uc_emlrtRSI;
    e_SystemProp_matlabCodegenSetAn(&c_st, b_obj, ii_data, b_ii_size);
    b_st.site = &cb_emlrtRSI;
  }

  st.site = &cb_emlrtRSI;
  st.site = &cb_emlrtRSI;
  st.site = &cb_emlrtRSI;
  b_st.site = &cb_emlrtRSI;
  b_st.site = &cb_emlrtRSI;
  st.site = &cb_emlrtRSI;
  st.site = &cb_emlrtRSI;
  st.site = &cb_emlrtRSI;
  b_st.site = &cb_emlrtRSI;
  b_st.site = &cb_emlrtRSI;
  st.site = &cb_emlrtRSI;
  st.site = &cb_emlrtRSI;
  st.site = &cb_emlrtRSI;
  b_obj = obj;
  for (iDelta = 0; iDelta < 768; iDelta++) {
    packedData[iDelta].re = b_obj->pFullGrid[iDelta];
    packedData[iDelta].im = 0.0;
  }

  emxInit_int32_T(&st, &r1, 1, &i_emlrtRTEI, TRUE);
  iDelta = r1->size[0];
  r1->size[0] = b_obj->pDataLinearIndices->size[0];
  emxEnsureCapacity(&st, (emxArray__common *)r1, iDelta, (int32_T)sizeof(int32_T),
                    &i_emlrtRTEI);
  ju = b_obj->pDataLinearIndices->size[0];
  for (iDelta = 0; iDelta < ju; iDelta++) {
    temp_re = b_obj->pDataLinearIndices->data[iDelta];
    i2 = (int32_T)emlrtIntegerCheckFastR2012b(temp_re, &emlrtDCI, &st);
    r1->data[iDelta] = emlrtDynamicBoundsCheckFastR2012b(i2, 1, 768, &d_emlrtBCI,
      &st);
  }

  iDelta = r1->size[0];
  emlrtSizeEqCheck1DFastR2012b(iDelta, 576, &emlrtECI, &st);
  ju = r1->size[0];
  for (iDelta = 0; iDelta < ju; iDelta++) {
    packedData[r1->data[iDelta] - 1] = varargin_1[iDelta];
  }

  emxFree_int32_T(&r1);
  for (iDelta = 0; iDelta < 48; iDelta++) {
    packedData[iv42[iDelta]].re = varargin_2[iDelta];
    packedData[iv42[iDelta]].im = 0.0;
  }

  b_st.site = &xc_emlrtRSI;
  i2 = 1;
  for (i = 0; i < 12; i++) {
    ju = i2;
    i2 += 64;
    iDelta = ju - 1;
    ju += 31;
    for (k = 0; k < 32; k++) {
      temp_re = packedData[iDelta].re;
      temp_im = packedData[iDelta].im;
      packedData[iDelta] = packedData[ju];
      packedData[ju].re = temp_re;
      packedData[ju].im = temp_im;
      iDelta++;
      ju++;
    }
  }

  b_st.site = &yc_emlrtRSI;
  ix = 0;
  for (chanStart = 0; chanStart < 706; chanStart += 64) {
    ju = 0;
    i2 = chanStart;
    for (i = 0; i < 63; i++) {
      postIFFT[i2] = packedData[ix];
      i2 = 64;
      tst = TRUE;
      while (tst) {
        if (i2 >= 0) {
          i2 = (int32_T)((uint32_T)i2 >> 1);
        } else {
          i2 = ~(int32_T)((uint32_T)~i2 >> 1);
        }

        ju ^= i2;
        tst = ((ju & i2) == 0);
      }

      i2 = chanStart + ju;
      ix++;
    }

    postIFFT[i2] = packedData[ix];
    ix++;
    for (i = chanStart; i <= chanStart + 62; i += 2) {
      temp_re = postIFFT[i + 1].re;
      temp_im = postIFFT[i + 1].im;
      postIFFT[i + 1].re = postIFFT[i].re - postIFFT[i + 1].re;
      postIFFT[i + 1].im = postIFFT[i].im - postIFFT[i + 1].im;
      postIFFT[i].re += temp_re;
      postIFFT[i].im += temp_im;
    }

    iDelta = 2;
    iDelta2 = 4;
    k = 16;
    iheight = 61;
    while (k > 0) {
      i = chanStart;
      ihi = chanStart + iheight;
      while (i < ihi) {
        i2 = i + iDelta;
        temp_re = postIFFT[i2].re;
        temp_im = postIFFT[i2].im;
        postIFFT[i + iDelta].re = postIFFT[i].re - postIFFT[i2].re;
        postIFFT[i + iDelta].im = postIFFT[i].im - postIFFT[i2].im;
        postIFFT[i].re += temp_re;
        postIFFT[i].im += temp_im;
        i += iDelta2;
      }

      i2 = chanStart + 1;
      for (ju = k; ju < 32; ju += k) {
        i = i2;
        ihi = i2 + iheight;
        while (i < ihi) {
          temp_re = dv4[ju] * postIFFT[i + iDelta].re - dv3[ju] * postIFFT[i +
            iDelta].im;
          temp_im = dv4[ju] * postIFFT[i + iDelta].im + dv3[ju] * postIFFT[i +
            iDelta].re;
          postIFFT[i + iDelta].re = postIFFT[i].re - temp_re;
          postIFFT[i + iDelta].im = postIFFT[i].im - temp_im;
          postIFFT[i].re += temp_re;
          postIFFT[i].im += temp_im;
          i += iDelta2;
        }

        i2++;
      }

      iDelta = k;
      k = (int32_T)((uint32_T)iDelta >> 1);
      iDelta = iDelta2;
      iDelta2 <<= 1;
      iheight -= iDelta;
    }
  }

  for (iDelta = 0; iDelta < 768; iDelta++) {
    postIFFT[iDelta].re *= 0.015625;
    postIFFT[iDelta].im *= 0.015625;
  }

  b_st.site = &ad_emlrtRSI;
  i2 = 0;
  for (i = 0; i < 12; i++) {
    ix = i << 4;
    for (ju = 0; ju < 16; ju++) {
      if (ix >= 0) {
        b_ix = (int32_T)((uint32_T)ix >> 4);
      } else {
        b_ix = ~(int32_T)((uint32_T)~ix >> 4);
      }

      postCP[i2] = postIFFT[(ix % 16 + (b_ix << 6)) + 48];
      ix++;
      i2++;
    }

    ix = i << 6;
    for (ju = 0; ju < 64; ju++) {
      postCP[i2] = postIFFT[ix];
      ix++;
      i2++;
    }
  }

  b_st.site = &bd_emlrtRSI;
  memcpy(&varargout_1[0], &postCP[0], 960U * sizeof(creal_T));
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void f_SystemCore_step(const emlrtStack *sp, commcodegen_CRCGenerator_6 *obj,
  const real_T varargin_1[560], real_T varargout_1[563])
{
  const mxArray *y;
  static const int32_T iv65[2] = { 1, 45 };

  const mxArray *m12;
  char_T cv73[45];
  int32_T i;
  static const char_T cv74[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C',
    'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv66[2] = { 1, 4 };

  char_T cv75[4];
  static const char_T cv76[4] = { 's', 't', 'e', 'p' };

  commcodegen_CRCGenerator_6 *b_obj;
  const mxArray *c_y;
  static const int32_T iv67[2] = { 1, 51 };

  char_T cv77[51];
  static const char_T cv78[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l',
    'e', 'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *d_y;
  static const int32_T iv68[2] = { 1, 5 };

  char_T cv79[5];
  static const char_T cv80[5] = { 's', 'e', 't', 'u', 'p' };

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
      cv73[i] = cv74[i];
    }

    emlrtInitCharArrayR2013a(sp, 45, m12, cv73);
    emlrtAssign(&y, m12);
    b_y = NULL;
    m12 = mxCreateCharArray(2, iv66);
    for (i = 0; i < 4; i++) {
      cv75[i] = cv76[i];
    }

    emlrtInitCharArrayR2013a(sp, 4, m12, cv75);
    emlrtAssign(&b_y, m12);
    st.site = &cb_emlrtRSI;
    b_error(&st, message(&st, y, b_y, &emlrtMCI), &emlrtMCI);
  }

  if (!obj->isInitialized) {
    st.site = &cb_emlrtRSI;
    b_obj = obj;
    if (!b_obj->isInitialized) {
    } else {
      c_y = NULL;
      m12 = mxCreateCharArray(2, iv67);
      for (i = 0; i < 51; i++) {
        cv77[i] = cv78[i];
      }

      emlrtInitCharArrayR2013a(&st, 51, m12, cv77);
      emlrtAssign(&c_y, m12);
      d_y = NULL;
      m12 = mxCreateCharArray(2, iv68);
      for (i = 0; i < 5; i++) {
        cv79[i] = cv80[i];
      }

      emlrtInitCharArrayR2013a(&st, 5, m12, cv79);
      emlrtAssign(&d_y, m12);
      b_st.site = &cb_emlrtRSI;
      b_error(&b_st, message(&b_st, c_y, d_y, &emlrtMCI), &emlrtMCI);
    }

    b_st.site = &cb_emlrtRSI;
    b_obj->isInitialized = TRUE;
    b_st.site = &cb_emlrtRSI;
    b_st.site = &cb_emlrtRSI;
    b_st.site = &cb_emlrtRSI;
    for (k = 0; k < 8; k++) {
      b_obj->inputVarSize1[k] = (uint32_T)value[k];
    }

    b_st.site = &cb_emlrtRSI;
    b_st.site = &cb_emlrtRSI;
    b_st.site = &cb_emlrtRSI;
    b_st.site = &cb_emlrtRSI;
    b_st.site = &cb_emlrtRSI;
    b_st.site = &cb_emlrtRSI;
    b_st.site = &cb_emlrtRSI;
    b_st.site = &cb_emlrtRSI;
  }

  st.site = &cb_emlrtRSI;
  st.site = &cb_emlrtRSI;
  st.site = &cb_emlrtRSI;
  b_st.site = &cb_emlrtRSI;
  b_st.site = &cb_emlrtRSI;
  st.site = &cb_emlrtRSI;
  st.site = &cb_emlrtRSI;
  b_obj = obj;
  anyInputSizeChanged = FALSE;
  k = 0;
  exitg1 = FALSE;
  while ((exitg1 == FALSE) && (k < 8)) {
    if (b_obj->inputVarSize1[k] != (uint32_T)iv69[k]) {
      anyInputSizeChanged = TRUE;
      b_st.site = &cb_emlrtRSI;
      for (k = 0; k < 8; k++) {
        b_obj->inputVarSize1[k] = (uint32_T)value[k];
      }

      exitg1 = TRUE;
    } else {
      k++;
    }
  }

  if (anyInputSizeChanged) {
    st.site = &cb_emlrtRSI;
    st.site = &cb_emlrtRSI;
  }

  st.site = &cb_emlrtRSI;
  b_st.site = &cb_emlrtRSI;
  b_st.site = &cb_emlrtRSI;
  st.site = &cb_emlrtRSI;
  st.site = &cb_emlrtRSI;
  st.site = &cb_emlrtRSI;
  b_obj = obj;
  b_st.site = &ag_emlrtRSI;
  b_st.site = &ag_emlrtRSI;
  b_st.site = &ag_emlrtRSI;
  b_st.site = &ag_emlrtRSI;
  b_st.site = &ag_emlrtRSI;
  b_st.site = &ag_emlrtRSI;
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
  b_st.site = &ag_emlrtRSI;
}

void g_SystemCore_step(const emlrtStack *sp, commcodegen_BPSKModulator_1 *obj,
  const real_T varargin_1[563], creal_T varargout_1[563])
{
  const mxArray *y;
  static const int32_T iv70[2] = { 1, 45 };

  const mxArray *m13;
  char_T cv81[45];
  int32_T i;
  static const char_T cv82[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C',
    'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv71[2] = { 1, 4 };

  char_T cv83[4];
  static const char_T cv84[4] = { 's', 't', 'e', 'p' };

  commcodegen_BPSKModulator_1 *b_obj;
  const mxArray *c_y;
  static const int32_T iv72[2] = { 1, 51 };

  char_T cv85[51];
  static const char_T cv86[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l',
    'e', 'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *d_y;
  static const int32_T iv73[2] = { 1, 5 };

  char_T cv87[5];
  static const char_T cv88[5] = { 's', 'e', 't', 'u', 'p' };

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
      cv81[i] = cv82[i];
    }

    emlrtInitCharArrayR2013a(sp, 45, m13, cv81);
    emlrtAssign(&y, m13);
    b_y = NULL;
    m13 = mxCreateCharArray(2, iv71);
    for (i = 0; i < 4; i++) {
      cv83[i] = cv84[i];
    }

    emlrtInitCharArrayR2013a(sp, 4, m13, cv83);
    emlrtAssign(&b_y, m13);
    st.site = &cb_emlrtRSI;
    b_error(&st, message(&st, y, b_y, &emlrtMCI), &emlrtMCI);
  }

  if (!obj->isInitialized) {
    st.site = &cb_emlrtRSI;
    b_obj = obj;
    if (!b_obj->isInitialized) {
    } else {
      c_y = NULL;
      m13 = mxCreateCharArray(2, iv72);
      for (i = 0; i < 51; i++) {
        cv85[i] = cv86[i];
      }

      emlrtInitCharArrayR2013a(&st, 51, m13, cv85);
      emlrtAssign(&c_y, m13);
      d_y = NULL;
      m13 = mxCreateCharArray(2, iv73);
      for (i = 0; i < 5; i++) {
        cv87[i] = cv88[i];
      }

      emlrtInitCharArrayR2013a(&st, 5, m13, cv87);
      emlrtAssign(&d_y, m13);
      b_st.site = &cb_emlrtRSI;
      b_error(&b_st, message(&b_st, c_y, d_y, &emlrtMCI), &emlrtMCI);
    }

    b_st.site = &cb_emlrtRSI;
    b_obj->isInitialized = TRUE;
    b_st.site = &cb_emlrtRSI;
    b_st.site = &cb_emlrtRSI;
    b_st.site = &cb_emlrtRSI;
    for (i = 0; i < 8; i++) {
      b_obj->inputVarSize1[i] = (uint32_T)value[i];
    }

    b_st.site = &cb_emlrtRSI;
    b_st.site = &cb_emlrtRSI;
    b_st.site = &cb_emlrtRSI;
    b_st.site = &cb_emlrtRSI;
    b_st.site = &cb_emlrtRSI;
    b_st.site = &cb_emlrtRSI;
    b_st.site = &cb_emlrtRSI;
    b_st.site = &cb_emlrtRSI;
  }

  st.site = &cb_emlrtRSI;
  st.site = &cb_emlrtRSI;
  st.site = &cb_emlrtRSI;
  b_st.site = &cb_emlrtRSI;
  b_st.site = &cb_emlrtRSI;
  st.site = &cb_emlrtRSI;
  st.site = &cb_emlrtRSI;
  b_obj = obj;
  anyInputSizeChanged = FALSE;
  i = 0;
  exitg1 = FALSE;
  while ((exitg1 == FALSE) && (i < 8)) {
    if (b_obj->inputVarSize1[i] != (uint32_T)iv74[i]) {
      anyInputSizeChanged = TRUE;
      b_st.site = &cb_emlrtRSI;
      for (i = 0; i < 8; i++) {
        b_obj->inputVarSize1[i] = (uint32_T)value[i];
      }

      exitg1 = TRUE;
    } else {
      i++;
    }
  }

  if (anyInputSizeChanged) {
    st.site = &cb_emlrtRSI;
    st.site = &cb_emlrtRSI;
  }

  st.site = &cb_emlrtRSI;
  b_st.site = &cb_emlrtRSI;
  b_st.site = &cb_emlrtRSI;
  st.site = &cb_emlrtRSI;
  st.site = &cb_emlrtRSI;
  st.site = &cb_emlrtRSI;
  c_Nondirect_stepImpl(obj, varargin_1, varargout_1);
}

void h_SystemCore_step(const emlrtStack *sp, dspcodegen_FIRRateConverter *obj,
  const creal_T varargin_1[288], creal_T varargout_1[3456])
{
  const mxArray *y;
  static const int32_T iv116[2] = { 1, 45 };

  const mxArray *m24;
  char_T cv134[45];
  int32_T i;
  static const char_T cv135[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C',
    'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv117[2] = { 1, 4 };

  char_T cv136[4];
  static const char_T cv137[4] = { 's', 't', 'e', 'p' };

  dspcodegen_FIRRateConverter *b_obj;
  const mxArray *c_y;
  static const int32_T iv118[2] = { 1, 51 };

  char_T cv138[51];
  static const char_T cv139[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l',
    'e', 'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *d_y;
  static const int32_T iv119[2] = { 1, 5 };

  char_T cv140[5];
  static const char_T cv141[5] = { 's', 'e', 't', 'u', 'p' };

  static const int8_T value[8] = { 24, 12, 1, 1, 1, 1, 1, 1 };

  dsp_FIRRateConverter_7 *c_obj;
  boolean_T anyInputSizeChanged;
  boolean_T exitg1;
  static const int8_T iv120[8] = { 24, 12, 1, 1, 1, 1, 1, 1 };

  int32_T outIdx;
  int32_T inIdx;
  int32_T m;
  int32_T inBufIdx;
  int32_T inputChannelOffset;
  int32_T n;
  int32_T outputStartIdx;
  int32_T outputStopIdx;
  real_T acc_re;
  real_T acc_im;
  int32_T coefPolyphaseOffset;
  real_T prod_re;
  real_T prod_im;
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
    m24 = mxCreateCharArray(2, iv116);
    for (i = 0; i < 45; i++) {
      cv134[i] = cv135[i];
    }

    emlrtInitCharArrayR2013a(sp, 45, m24, cv134);
    emlrtAssign(&y, m24);
    b_y = NULL;
    m24 = mxCreateCharArray(2, iv117);
    for (i = 0; i < 4; i++) {
      cv136[i] = cv137[i];
    }

    emlrtInitCharArrayR2013a(sp, 4, m24, cv136);
    emlrtAssign(&b_y, m24);
    st.site = &cb_emlrtRSI;
    b_error(&st, message(&st, y, b_y, &emlrtMCI), &emlrtMCI);
  }

  if (!obj->isInitialized) {
    st.site = &cb_emlrtRSI;
    b_obj = obj;
    if (!b_obj->isInitialized) {
    } else {
      c_y = NULL;
      m24 = mxCreateCharArray(2, iv118);
      for (i = 0; i < 51; i++) {
        cv138[i] = cv139[i];
      }

      emlrtInitCharArrayR2013a(&st, 51, m24, cv138);
      emlrtAssign(&c_y, m24);
      d_y = NULL;
      m24 = mxCreateCharArray(2, iv119);
      for (i = 0; i < 5; i++) {
        cv140[i] = cv141[i];
      }

      emlrtInitCharArrayR2013a(&st, 5, m24, cv140);
      emlrtAssign(&d_y, m24);
      b_st.site = &cb_emlrtRSI;
      b_error(&b_st, message(&b_st, c_y, d_y, &emlrtMCI), &emlrtMCI);
    }

    b_st.site = &cb_emlrtRSI;
    b_obj->isInitialized = TRUE;
    c_st.site = &db_emlrtRSI;
    b_st.site = &cb_emlrtRSI;
    c_st.site = &cb_emlrtRSI;
    c_st.site = &cb_emlrtRSI;
    b_st.site = &cb_emlrtRSI;
    c_st.site = &cb_emlrtRSI;
    c_st.site = &cb_emlrtRSI;
    c_st.site = &cb_emlrtRSI;
    b_st.site = &cb_emlrtRSI;
    c_st.site = &cb_emlrtRSI;
    for (i = 0; i < 8; i++) {
      b_obj->inputVarSize1[i] = (uint32_T)value[i];
    }

    b_st.site = &cb_emlrtRSI;
    c_st.site = &cb_emlrtRSI;
    b_st.site = &cb_emlrtRSI;
    c_st.site = &cb_emlrtRSI;
    b_st.site = &cb_emlrtRSI;
    c_st.site = &cb_emlrtRSI;
    c_st.site = &cb_emlrtRSI;
    b_st.site = &cb_emlrtRSI;
    b_st.site = &cb_emlrtRSI;
    b_st.site = &cb_emlrtRSI;
    b_st.site = &cb_emlrtRSI;
    c_st.site = &gt_emlrtRSI;
    c_obj = &b_obj->cSFunObject;
    if (!c_obj->S0_isInitialized) {
      c_obj->S0_isInitialized = TRUE;
      if (c_obj->S1_isReleased) {
        emlrtErrorWithMessageIdR2012b(&c_st, &dc_emlrtRTEI,
          "MATLAB:system:setupCalledWhenLockedReleasedCodegen", 0);
      }

      /* System object Initialization function: dsp.FIRRateConverter */
      c_obj->W1_InBufIdx = 0;
      for (i = 0; i < 252; i++) {
        c_obj->W0_InBuf[i].re = 0.0;
        c_obj->W0_InBuf[i].im = 0.0;
      }
    } else {
      emlrtErrorWithMessageIdR2012b(&c_st, &dc_emlrtRTEI,
        "MATLAB:system:setupCalledWhenLockedCodegen", 0);
    }

    c_st.site = &gt_emlrtRSI;
    b_st.site = &cb_emlrtRSI;
    c_st.site = &gt_emlrtRSI;
    c_obj = &b_obj->cSFunObject;
    if (c_obj->S1_isReleased) {
      emlrtErrorWithMessageIdR2012b(&c_st, &cc_emlrtRTEI,
        "MATLAB:system:runtimeMethodCalledWhenReleasedCodegen", 0);
    }

    /* System object Initialization function: dsp.FIRRateConverter */
    c_obj->W1_InBufIdx = 0;
    for (i = 0; i < 252; i++) {
      c_obj->W0_InBuf[i].re = 0.0;
      c_obj->W0_InBuf[i].im = 0.0;
    }
  }

  st.site = &cb_emlrtRSI;
  st.site = &cb_emlrtRSI;
  st.site = &cb_emlrtRSI;
  b_st.site = &cb_emlrtRSI;
  b_st.site = &cb_emlrtRSI;
  c_st.site = &gt_emlrtRSI;
  st.site = &cb_emlrtRSI;
  st.site = &cb_emlrtRSI;
  b_obj = obj;
  anyInputSizeChanged = FALSE;
  i = 0;
  exitg1 = FALSE;
  while ((exitg1 == FALSE) && (i < 8)) {
    if (b_obj->inputVarSize1[i] != (uint32_T)iv120[i]) {
      anyInputSizeChanged = TRUE;
      b_st.site = &cb_emlrtRSI;
      for (i = 0; i < 8; i++) {
        b_obj->inputVarSize1[i] = (uint32_T)value[i];
      }

      c_st.site = &db_emlrtRSI;
      exitg1 = TRUE;
    } else {
      i++;
    }
  }

  if (anyInputSizeChanged) {
    st.site = &cb_emlrtRSI;
    st.site = &cb_emlrtRSI;
  }

  st.site = &cb_emlrtRSI;
  b_st.site = &cb_emlrtRSI;
  b_st.site = &cb_emlrtRSI;
  c_st.site = &gt_emlrtRSI;
  st.site = &cb_emlrtRSI;
  st.site = &cb_emlrtRSI;
  st.site = &cb_emlrtRSI;
  b_obj = obj;
  b_st.site = &ag_emlrtRSI;
  c_st.site = &cb_emlrtRSI;
  c_st.site = &cb_emlrtRSI;
  b_st.site = &ag_emlrtRSI;
  c_st.site = &cb_emlrtRSI;
  c_st.site = &cb_emlrtRSI;
  b_st.site = &ag_emlrtRSI;
  b_st.site = &ag_emlrtRSI;
  c_st.site = &cb_emlrtRSI;
  c_st.site = &cb_emlrtRSI;
  b_st.site = &ag_emlrtRSI;
  b_st.site = &ag_emlrtRSI;
  c_st.site = &gt_emlrtRSI;
  c_obj = &b_obj->cSFunObject;
  if (!c_obj->S0_isInitialized) {
    c_obj->S0_isInitialized = TRUE;
    if (c_obj->S1_isReleased) {
      emlrtErrorWithMessageIdR2012b(&c_st, &bc_emlrtRTEI,
        "MATLAB:system:runtimeMethodCalledWhenReleasedCodegen", 0);
    }

    /* System object Initialization function: dsp.FIRRateConverter */
    c_obj->W1_InBufIdx = 0;
    for (i = 0; i < 252; i++) {
      c_obj->W0_InBuf[i].re = 0.0;
      c_obj->W0_InBuf[i].im = 0.0;
    }
  }

  /* System object Outputs function: dsp.FIRRateConverter */
  outIdx = 0;
  inIdx = 0;
  for (m = 0; m < 12; m++) {
    /* Update inBufIdx and inputChannelOffset for current channel */
    inBufIdx = c_obj->W1_InBufIdx;
    inputChannelOffset = m * 21;
    for (n = 0; n < 24; n++) {
      outputStartIdx = c_obj->P2_StartIdx;
      outputStopIdx = c_obj->P3_StopIdx;

      /* Read input into inBufArray */
      c_obj->W0_InBuf[inBufIdx + inputChannelOffset] = varargin_1[inIdx];
      inIdx++;

      /* Generate outputs (if any) for current input n */
      while (outputStartIdx < outputStopIdx) {
        acc_re = 0.0;
        acc_im = 0.0;
        coefPolyphaseOffset = c_obj->P1_PolyphaseSelector[outputStartIdx] * 21;
        for (i = inBufIdx; i < 21; i++) {
          prod_re = c_obj->P0_FILTER[(coefPolyphaseOffset + i) - inBufIdx] *
            c_obj->W0_InBuf[i + inputChannelOffset].re;
          prod_im = c_obj->P0_FILTER[(coefPolyphaseOffset + i) - inBufIdx] *
            c_obj->W0_InBuf[i + inputChannelOffset].im;
          acc_re += prod_re;
          acc_im += prod_im;
        }

        for (i = 0; i < inBufIdx; i++) {
          prod_re = c_obj->P0_FILTER[((coefPolyphaseOffset - inBufIdx) + i) + 21]
            * c_obj->W0_InBuf[i + inputChannelOffset].re;
          prod_im = c_obj->P0_FILTER[((coefPolyphaseOffset - inBufIdx) + i) + 21]
            * c_obj->W0_InBuf[i + inputChannelOffset].im;
          acc_re += prod_re;
          acc_im += prod_im;
        }

        varargout_1[outIdx].re = acc_re;
        varargout_1[outIdx].im = acc_im;
        outIdx++;
        outputStartIdx++;
      }

      /* Decrement inBufIdx, wrap if necessary */
      if (inBufIdx == 0) {
        inBufIdx = 20;
      } else {
        inBufIdx--;
      }
    }
  }

  /* Update inBufIdx */
  c_obj->W1_InBufIdx = inBufIdx;
  b_st.site = &ag_emlrtRSI;
  c_st.site = &gt_emlrtRSI;
  if (!b_obj->cSFunObject.S0_isInitialized) {
    emlrtErrorWithMessageIdR2012b(&c_st, &ac_emlrtRTEI,
      "MATLAB:system:updateCalledBeforeSetup", 0);
  }
}

/* End of code generation (SystemCore.c) */
