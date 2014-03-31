/*
 * SystemCore.c
 *
 * Code generation for function 'SystemCore'
 *
 * C source code generated on: Thu Mar  6 18:47:05 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testMACReceiver.h"
#include "SystemCore.h"
#include "PHYReceive.h"
#include "SDRuTransmitter.h"
#include "closeDataConnection.h"
#include "SDRuReceiver.h"
#include "SystemProp.h"
#include "find.h"
#include "testMACReceiver_emxutil.h"
#include "OFDMModulator.h"
#include "Nondirect1.h"
#include "testMACReceiver_mexutil.h"
#include "testMACReceiver_data.h"
#include <stdio.h>

/* Variable Definitions */
static emlrtRSInfo rc_emlrtRSI = { 345, "OFDMModulator",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/OFDMModulator.m" };

static emlrtRSInfo sc_emlrtRSI = { 374, "OFDMModulator",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/OFDMModulator.m" };

static emlrtRSInfo tc_emlrtRSI = { 375, "OFDMModulator",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/OFDMModulator.m" };

static emlrtRSInfo uc_emlrtRSI = { 388, "OFDMModulator",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/OFDMModulator.m" };

static emlrtRSInfo xc_emlrtRSI = { 415, "OFDMModulator",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/OFDMModulator.m" };

static emlrtRSInfo yc_emlrtRSI = { 419, "OFDMModulator",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/OFDMModulator.m" };

static emlrtRSInfo ad_emlrtRSI = { 423, "OFDMModulator",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/OFDMModulator.m" };

static emlrtRSInfo bd_emlrtRSI = { 424, "OFDMModulator",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/OFDMModulator.m" };

static emlrtRSInfo iu_emlrtRSI = { 1, "FIRRateConverter",
  "/Applications/MATLAB_R2013b.app/toolbox/dsp/dsp/+dspcodegen/FIRRateConverter.p"
};

static emlrtRTEInfo h_emlrtRTEI = { 1, 13, "SystemCore",
  "/Applications/MATLAB_R2013b.app/toolbox/shared/system/coder/+matlab/+system/+coder/SystemCore.p"
};

static emlrtBCInfo l_emlrtBCI = { 1, 768, 403, 9, "packedData", "OFDMModulator",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/OFDMModulator.m", 0 };

static emlrtRTEInfo ec_emlrtRTEI = { 41, 1, "update",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/scomp/update.m" };

static emlrtRTEInfo fc_emlrtRTEI = { 43, 20, "output",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/scomp/output.m" };

static emlrtRTEInfo gc_emlrtRTEI = { 19, 1, "reset",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/scomp/reset.m" };

static emlrtRTEInfo hc_emlrtRTEI = { 43, 1, "setup",
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
  static const int32_T iv129[2] = { 1, 45 };

  const mxArray *m29;
  char_T cv154[45];
  int32_T i;
  static const char_T cv155[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C',
    'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv130[2] = { 1, 5 };

  char_T cv156[5];
  static const char_T cv157[5] = { 'r', 'e', 's', 'e', 't' };

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
    m29 = mxCreateCharArray(2, iv129);
    for (i = 0; i < 45; i++) {
      cv154[i] = cv155[i];
    }

    emlrtInitCharArrayR2013a(sp, 45, m29, cv154);
    emlrtAssign(&y, m29);
    b_y = NULL;
    m29 = mxCreateCharArray(2, iv130);
    for (i = 0; i < 5; i++) {
      cv156[i] = cv157[i];
    }

    emlrtInitCharArrayR2013a(sp, 5, m29, cv156);
    emlrtAssign(&b_y, m29);
    st.site = &cb_emlrtRSI;
    c_error(&st, message(&st, y, b_y, &emlrtMCI), &emlrtMCI);
  }

  if (obj->isInitialized) {
    st.site = NULL;
    b_obj = obj;
    b_st.site = &iu_emlrtRSI;
    c_obj = &b_obj->cSFunObject;
    if (c_obj->S1_isReleased) {
      emlrtErrorWithMessageIdR2012b(&b_st, &gc_emlrtRTEI,
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
  static const int32_T iv14[2] = { 1, 45 };

  const mxArray *m1;
  char_T cv12[45];
  int32_T i;
  static const char_T cv13[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C',
    'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv15[2] = { 1, 4 };

  char_T cv14[4];
  static const char_T cv15[4] = { 's', 't', 'e', 'p' };

  OFDMModulator *b_obj;
  const mxArray *c_y;
  static const int32_T iv16[2] = { 1, 51 };

  char_T cv16[51];
  static const char_T cv17[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l',
    'e', 'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *d_y;
  static const int32_T iv17[2] = { 1, 5 };

  char_T cv18[5];
  static const char_T cv19[5] = { 's', 'e', 't', 'u', 'p' };

  real_T value[64];
  static const int8_T iv18[11] = { 0, 1, 2, 3, 4, 5, 59, 60, 61, 62, 63 };

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
    m1 = mxCreateCharArray(2, iv14);
    for (i = 0; i < 45; i++) {
      cv12[i] = cv13[i];
    }

    emlrtInitCharArrayR2013a(sp, 45, m1, cv12);
    emlrtAssign(&y, m1);
    b_y = NULL;
    m1 = mxCreateCharArray(2, iv15);
    for (i = 0; i < 4; i++) {
      cv14[i] = cv15[i];
    }

    emlrtInitCharArrayR2013a(sp, 4, m1, cv14);
    emlrtAssign(&b_y, m1);
    st.site = &cb_emlrtRSI;
    c_error(&st, message(&st, y, b_y, &emlrtMCI), &emlrtMCI);
  }

  if (!obj->isInitialized) {
    st.site = &cb_emlrtRSI;
    b_obj = obj;
    if (!b_obj->isInitialized) {
    } else {
      c_y = NULL;
      m1 = mxCreateCharArray(2, iv16);
      for (i = 0; i < 51; i++) {
        cv16[i] = cv17[i];
      }

      emlrtInitCharArrayR2013a(&st, 51, m1, cv16);
      emlrtAssign(&c_y, m1);
      d_y = NULL;
      m1 = mxCreateCharArray(2, iv17);
      for (i = 0; i < 5; i++) {
        cv18[i] = cv19[i];
      }

      emlrtInitCharArrayR2013a(&st, 5, m1, cv18);
      emlrtAssign(&d_y, m1);
      b_st.site = &cb_emlrtRSI;
      c_error(&b_st, message(&b_st, c_y, d_y, &emlrtMCI), &emlrtMCI);
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
      value[iv18[i]] = 0.0;
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
                      (int32_T)sizeof(real_T), &h_emlrtRTEI);
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
  static const int32_T iv19[2] = { 1, 45 };

  const mxArray *m2;
  char_T cv20[45];
  int32_T i;
  static const char_T cv21[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C',
    'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv20[2] = { 1, 4 };

  char_T cv22[4];
  static const char_T cv23[4] = { 's', 't', 'e', 'p' };

  OFDMModulator *b_obj;
  const mxArray *c_y;
  static const int32_T iv21[2] = { 1, 51 };

  char_T cv24[51];
  static const char_T cv25[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l',
    'e', 'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *d_y;
  static const int32_T iv22[2] = { 1, 5 };

  char_T cv26[5];
  static const char_T cv27[5] = { 's', 'e', 't', 'u', 'p' };

  real_T value[64];
  static const int8_T iv23[11] = { 0, 1, 2, 3, 4, 5, 59, 60, 61, 62, 63 };

  boolean_T x[64];
  int8_T ii_data[64];
  int32_T ii;
  boolean_T exitg1;
  boolean_T guard1 = FALSE;
  int8_T b_ii_data[64];
  creal_T dcv2[53];
  static const int8_T iv24[53] = { 1, 1, -1, -1, 1, 1, -1, 1, -1, 1, 1, 1, 1, 1,
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
    m2 = mxCreateCharArray(2, iv19);
    for (i = 0; i < 45; i++) {
      cv20[i] = cv21[i];
    }

    emlrtInitCharArrayR2013a(sp, 45, m2, cv20);
    emlrtAssign(&y, m2);
    b_y = NULL;
    m2 = mxCreateCharArray(2, iv20);
    for (i = 0; i < 4; i++) {
      cv22[i] = cv23[i];
    }

    emlrtInitCharArrayR2013a(sp, 4, m2, cv22);
    emlrtAssign(&b_y, m2);
    st.site = &cb_emlrtRSI;
    c_error(&st, message(&st, y, b_y, &emlrtMCI), &emlrtMCI);
  }

  if (!obj->isInitialized) {
    st.site = &cb_emlrtRSI;
    b_obj = obj;
    if (!b_obj->isInitialized) {
    } else {
      c_y = NULL;
      m2 = mxCreateCharArray(2, iv21);
      for (i = 0; i < 51; i++) {
        cv24[i] = cv25[i];
      }

      emlrtInitCharArrayR2013a(&st, 51, m2, cv24);
      emlrtAssign(&c_y, m2);
      d_y = NULL;
      m2 = mxCreateCharArray(2, iv22);
      for (i = 0; i < 5; i++) {
        cv26[i] = cv27[i];
      }

      emlrtInitCharArrayR2013a(&st, 5, m2, cv26);
      emlrtAssign(&d_y, m2);
      b_st.site = &cb_emlrtRSI;
      c_error(&b_st, message(&b_st, c_y, d_y, &emlrtMCI), &emlrtMCI);
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
      value[iv23[i]] = 0.0;
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
                      (int32_T)sizeof(real_T), &h_emlrtRTEI);
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
    dcv2[i].re = iv24[i];
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
  static const int32_T iv28[2] = { 1, 45 };

  const mxArray *m5;
  char_T cv32[45];
  int32_T i;
  static const char_T cv33[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C',
    'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv29[2] = { 1, 4 };

  char_T cv34[4];
  static const char_T cv35[4] = { 's', 't', 'e', 'p' };

  commcodegen_CRCGenerator *b_obj;
  const mxArray *c_y;
  static const int32_T iv30[2] = { 1, 51 };

  char_T cv36[51];
  static const char_T cv37[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l',
    'e', 'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *d_y;
  static const int32_T iv31[2] = { 1, 5 };

  char_T cv38[5];
  static const char_T cv39[5] = { 's', 'e', 't', 'u', 'p' };

  int32_T k;
  static const int16_T value[8] = { 560, 1, 1, 1, 1, 1, 1, 1 };

  boolean_T anyInputSizeChanged;
  boolean_T exitg1;
  static const int16_T iv32[8] = { 560, 1, 1, 1, 1, 1, 1, 1 };

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
    m5 = mxCreateCharArray(2, iv28);
    for (i = 0; i < 45; i++) {
      cv32[i] = cv33[i];
    }

    emlrtInitCharArrayR2013a(sp, 45, m5, cv32);
    emlrtAssign(&y, m5);
    b_y = NULL;
    m5 = mxCreateCharArray(2, iv29);
    for (i = 0; i < 4; i++) {
      cv34[i] = cv35[i];
    }

    emlrtInitCharArrayR2013a(sp, 4, m5, cv34);
    emlrtAssign(&b_y, m5);
    st.site = &cb_emlrtRSI;
    c_error(&st, message(&st, y, b_y, &emlrtMCI), &emlrtMCI);
  }

  if (!obj->isInitialized) {
    st.site = &cb_emlrtRSI;
    b_obj = obj;
    if (!b_obj->isInitialized) {
    } else {
      c_y = NULL;
      m5 = mxCreateCharArray(2, iv30);
      for (i = 0; i < 51; i++) {
        cv36[i] = cv37[i];
      }

      emlrtInitCharArrayR2013a(&st, 51, m5, cv36);
      emlrtAssign(&c_y, m5);
      d_y = NULL;
      m5 = mxCreateCharArray(2, iv31);
      for (i = 0; i < 5; i++) {
        cv38[i] = cv39[i];
      }

      emlrtInitCharArrayR2013a(&st, 5, m5, cv38);
      emlrtAssign(&d_y, m5);
      b_st.site = &cb_emlrtRSI;
      c_error(&b_st, message(&b_st, c_y, d_y, &emlrtMCI), &emlrtMCI);
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
    if (b_obj->inputVarSize1[k] != (uint32_T)iv32[k]) {
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
  b_st.site = &fg_emlrtRSI;
  b_st.site = &fg_emlrtRSI;
  b_st.site = &fg_emlrtRSI;
  b_st.site = &fg_emlrtRSI;
  b_st.site = &fg_emlrtRSI;
  b_st.site = &fg_emlrtRSI;
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
  b_st.site = &fg_emlrtRSI;
}

void d_SystemCore_step(const emlrtStack *sp, OFDMModulator_1 *obj, const creal_T
  varargin_1[576], const real_T varargin_2[48], creal_T varargout_1[960])
{
  const mxArray *y;
  static const int32_T iv36[2] = { 1, 45 };

  const mxArray *m7;
  char_T cv42[45];
  int32_T i;
  static const char_T cv43[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C',
    'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv37[2] = { 1, 4 };

  char_T cv44[4];
  static const char_T cv45[4] = { 's', 't', 'e', 'p' };

  OFDMModulator_1 *b_obj;
  const mxArray *c_y;
  static const int32_T iv38[2] = { 1, 51 };

  char_T cv46[51];
  static const char_T cv47[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l',
    'e', 'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *d_y;
  static const int32_T iv39[2] = { 1, 5 };

  char_T cv48[5];
  static const char_T cv49[5] = { 's', 'e', 't', 'u', 'p' };

  real_T ii_data[768];
  int32_T j;
  int32_T iy;
  static const int8_T iv40[11] = { 0, 1, 2, 3, 4, 5, 59, 60, 61, 62, 63 };

  static const int16_T iv41[48] = { 11, 25, 39, 53, 75, 89, 103, 117, 139, 153,
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
    m7 = mxCreateCharArray(2, iv36);
    for (i = 0; i < 45; i++) {
      cv42[i] = cv43[i];
    }

    emlrtInitCharArrayR2013a(sp, 45, m7, cv42);
    emlrtAssign(&y, m7);
    b_y = NULL;
    m7 = mxCreateCharArray(2, iv37);
    for (i = 0; i < 4; i++) {
      cv44[i] = cv45[i];
    }

    emlrtInitCharArrayR2013a(sp, 4, m7, cv44);
    emlrtAssign(&b_y, m7);
    st.site = &cb_emlrtRSI;
    c_error(&st, message(&st, y, b_y, &emlrtMCI), &emlrtMCI);
  }

  if (!obj->isInitialized) {
    st.site = &cb_emlrtRSI;
    b_obj = obj;
    if (!b_obj->isInitialized) {
    } else {
      c_y = NULL;
      m7 = mxCreateCharArray(2, iv38);
      for (i = 0; i < 51; i++) {
        cv46[i] = cv47[i];
      }

      emlrtInitCharArrayR2013a(&st, 51, m7, cv46);
      emlrtAssign(&c_y, m7);
      d_y = NULL;
      m7 = mxCreateCharArray(2, iv39);
      for (i = 0; i < 5; i++) {
        cv48[i] = cv49[i];
      }

      emlrtInitCharArrayR2013a(&st, 5, m7, cv48);
      emlrtAssign(&d_y, m7);
      b_st.site = &cb_emlrtRSI;
      c_error(&b_st, message(&b_st, c_y, d_y, &emlrtMCI), &emlrtMCI);
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
    for (j = 0; j < 768; j++) {
      ii_data[j] = 1.0;
    }

    d_SystemProp_matlabCodegenSetAn(b_obj, ii_data);
    for (j = 0; j < 768; j++) {
      ii_data[j] = b_obj->pFullGrid[j];
    }

    for (j = 0; j < 12; j++) {
      for (iy = 0; iy < 11; iy++) {
        ii_data[iv40[iy] + (j << 6)] = 0.0;
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
      ii_data[iv41[j]] = 2.0;
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
  for (j = 0; j < 768; j++) {
    packedData[j].re = b_obj->pFullGrid[j];
    packedData[j].im = 0.0;
  }

  emxInit_int32_T(&st, &r1, 1, &h_emlrtRTEI, TRUE);
  j = r1->size[0];
  r1->size[0] = b_obj->pDataLinearIndices->size[0];
  emxEnsureCapacity(&st, (emxArray__common *)r1, j, (int32_T)sizeof(int32_T),
                    &h_emlrtRTEI);
  i2 = b_obj->pDataLinearIndices->size[0];
  for (j = 0; j < i2; j++) {
    temp_re = b_obj->pDataLinearIndices->data[j];
    iy = (int32_T)emlrtIntegerCheckFastR2012b(temp_re, &emlrtDCI, &st);
    r1->data[j] = emlrtDynamicBoundsCheckFastR2012b(iy, 1, 768, &l_emlrtBCI, &st);
  }

  j = r1->size[0];
  emlrtSizeEqCheck1DFastR2012b(j, 576, &h_emlrtECI, &st);
  i2 = r1->size[0];
  for (j = 0; j < i2; j++) {
    packedData[r1->data[j] - 1] = varargin_1[j];
  }

  emxFree_int32_T(&r1);
  for (j = 0; j < 48; j++) {
    packedData[iv41[j]].re = varargin_2[j];
    packedData[iv41[j]].im = 0.0;
  }

  b_st.site = &xc_emlrtRSI;
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

  b_st.site = &yc_emlrtRSI;
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

  b_st.site = &ad_emlrtRSI;
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

  b_st.site = &bd_emlrtRSI;
  memcpy(&varargout_1[0], &postCP[0], 960U * sizeof(creal_T));
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void e_SystemCore_step(const emlrtStack *sp, commcodegen_CRCGenerator_6 *obj,
  const real_T varargin_1[560], real_T varargout_1[563])
{
  const mxArray *y;
  static const int32_T iv65[2] = { 1, 45 };

  const mxArray *m12;
  char_T cv69[45];
  int32_T i;
  static const char_T cv70[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C',
    'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv66[2] = { 1, 4 };

  char_T cv71[4];
  static const char_T cv72[4] = { 's', 't', 'e', 'p' };

  commcodegen_CRCGenerator_6 *b_obj;
  const mxArray *c_y;
  static const int32_T iv67[2] = { 1, 51 };

  char_T cv73[51];
  static const char_T cv74[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l',
    'e', 'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *d_y;
  static const int32_T iv68[2] = { 1, 5 };

  char_T cv75[5];
  static const char_T cv76[5] = { 's', 'e', 't', 'u', 'p' };

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
      cv69[i] = cv70[i];
    }

    emlrtInitCharArrayR2013a(sp, 45, m12, cv69);
    emlrtAssign(&y, m12);
    b_y = NULL;
    m12 = mxCreateCharArray(2, iv66);
    for (i = 0; i < 4; i++) {
      cv71[i] = cv72[i];
    }

    emlrtInitCharArrayR2013a(sp, 4, m12, cv71);
    emlrtAssign(&b_y, m12);
    st.site = &cb_emlrtRSI;
    c_error(&st, message(&st, y, b_y, &emlrtMCI), &emlrtMCI);
  }

  if (!obj->isInitialized) {
    st.site = &cb_emlrtRSI;
    b_obj = obj;
    if (!b_obj->isInitialized) {
    } else {
      c_y = NULL;
      m12 = mxCreateCharArray(2, iv67);
      for (i = 0; i < 51; i++) {
        cv73[i] = cv74[i];
      }

      emlrtInitCharArrayR2013a(&st, 51, m12, cv73);
      emlrtAssign(&c_y, m12);
      d_y = NULL;
      m12 = mxCreateCharArray(2, iv68);
      for (i = 0; i < 5; i++) {
        cv75[i] = cv76[i];
      }

      emlrtInitCharArrayR2013a(&st, 5, m12, cv75);
      emlrtAssign(&d_y, m12);
      b_st.site = &cb_emlrtRSI;
      c_error(&b_st, message(&b_st, c_y, d_y, &emlrtMCI), &emlrtMCI);
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
  b_st.site = &fg_emlrtRSI;
  b_st.site = &fg_emlrtRSI;
  b_st.site = &fg_emlrtRSI;
  b_st.site = &fg_emlrtRSI;
  b_st.site = &fg_emlrtRSI;
  b_st.site = &fg_emlrtRSI;
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
  b_st.site = &fg_emlrtRSI;
}

void f_SystemCore_step(const emlrtStack *sp, commcodegen_BPSKModulator_1 *obj,
  const real_T varargin_1[563], creal_T varargout_1[563])
{
  const mxArray *y;
  static const int32_T iv70[2] = { 1, 45 };

  const mxArray *m13;
  char_T cv77[45];
  int32_T i;
  static const char_T cv78[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C',
    'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv71[2] = { 1, 4 };

  char_T cv79[4];
  static const char_T cv80[4] = { 's', 't', 'e', 'p' };

  commcodegen_BPSKModulator_1 *b_obj;
  const mxArray *c_y;
  static const int32_T iv72[2] = { 1, 51 };

  char_T cv81[51];
  static const char_T cv82[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l',
    'e', 'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *d_y;
  static const int32_T iv73[2] = { 1, 5 };

  char_T cv83[5];
  static const char_T cv84[5] = { 's', 'e', 't', 'u', 'p' };

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
      cv77[i] = cv78[i];
    }

    emlrtInitCharArrayR2013a(sp, 45, m13, cv77);
    emlrtAssign(&y, m13);
    b_y = NULL;
    m13 = mxCreateCharArray(2, iv71);
    for (i = 0; i < 4; i++) {
      cv79[i] = cv80[i];
    }

    emlrtInitCharArrayR2013a(sp, 4, m13, cv79);
    emlrtAssign(&b_y, m13);
    st.site = &cb_emlrtRSI;
    c_error(&st, message(&st, y, b_y, &emlrtMCI), &emlrtMCI);
  }

  if (!obj->isInitialized) {
    st.site = &cb_emlrtRSI;
    b_obj = obj;
    if (!b_obj->isInitialized) {
    } else {
      c_y = NULL;
      m13 = mxCreateCharArray(2, iv72);
      for (i = 0; i < 51; i++) {
        cv81[i] = cv82[i];
      }

      emlrtInitCharArrayR2013a(&st, 51, m13, cv81);
      emlrtAssign(&c_y, m13);
      d_y = NULL;
      m13 = mxCreateCharArray(2, iv73);
      for (i = 0; i < 5; i++) {
        cv83[i] = cv84[i];
      }

      emlrtInitCharArrayR2013a(&st, 5, m13, cv83);
      emlrtAssign(&d_y, m13);
      b_st.site = &cb_emlrtRSI;
      c_error(&b_st, message(&b_st, c_y, d_y, &emlrtMCI), &emlrtMCI);
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

void g_SystemCore_step(const emlrtStack *sp, dspcodegen_FIRRateConverter *obj,
  const creal_T varargin_1[288], creal_T varargout_1[3456])
{
  const mxArray *y;
  static const int32_T iv124[2] = { 1, 45 };

  const mxArray *m28;
  char_T cv146[45];
  int32_T i;
  static const char_T cv147[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C',
    'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv125[2] = { 1, 4 };

  char_T cv148[4];
  static const char_T cv149[4] = { 's', 't', 'e', 'p' };

  dspcodegen_FIRRateConverter *b_obj;
  const mxArray *c_y;
  static const int32_T iv126[2] = { 1, 51 };

  char_T cv150[51];
  static const char_T cv151[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l',
    'e', 'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *d_y;
  static const int32_T iv127[2] = { 1, 5 };

  char_T cv152[5];
  static const char_T cv153[5] = { 's', 'e', 't', 'u', 'p' };

  static const int8_T value[8] = { 24, 12, 1, 1, 1, 1, 1, 1 };

  dsp_FIRRateConverter_7 *c_obj;
  boolean_T anyInputSizeChanged;
  boolean_T exitg1;
  static const int8_T iv128[8] = { 24, 12, 1, 1, 1, 1, 1, 1 };

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
    m28 = mxCreateCharArray(2, iv124);
    for (i = 0; i < 45; i++) {
      cv146[i] = cv147[i];
    }

    emlrtInitCharArrayR2013a(sp, 45, m28, cv146);
    emlrtAssign(&y, m28);
    b_y = NULL;
    m28 = mxCreateCharArray(2, iv125);
    for (i = 0; i < 4; i++) {
      cv148[i] = cv149[i];
    }

    emlrtInitCharArrayR2013a(sp, 4, m28, cv148);
    emlrtAssign(&b_y, m28);
    st.site = &cb_emlrtRSI;
    c_error(&st, message(&st, y, b_y, &emlrtMCI), &emlrtMCI);
  }

  if (!obj->isInitialized) {
    st.site = &cb_emlrtRSI;
    b_obj = obj;
    if (!b_obj->isInitialized) {
    } else {
      c_y = NULL;
      m28 = mxCreateCharArray(2, iv126);
      for (i = 0; i < 51; i++) {
        cv150[i] = cv151[i];
      }

      emlrtInitCharArrayR2013a(&st, 51, m28, cv150);
      emlrtAssign(&c_y, m28);
      d_y = NULL;
      m28 = mxCreateCharArray(2, iv127);
      for (i = 0; i < 5; i++) {
        cv152[i] = cv153[i];
      }

      emlrtInitCharArrayR2013a(&st, 5, m28, cv152);
      emlrtAssign(&d_y, m28);
      b_st.site = &cb_emlrtRSI;
      c_error(&b_st, message(&b_st, c_y, d_y, &emlrtMCI), &emlrtMCI);
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
    c_st.site = &iu_emlrtRSI;
    c_obj = &b_obj->cSFunObject;
    if (!c_obj->S0_isInitialized) {
      c_obj->S0_isInitialized = TRUE;
      if (c_obj->S1_isReleased) {
        emlrtErrorWithMessageIdR2012b(&c_st, &hc_emlrtRTEI,
          "MATLAB:system:setupCalledWhenLockedReleasedCodegen", 0);
      }

      /* System object Initialization function: dsp.FIRRateConverter */
      c_obj->W1_InBufIdx = 0;
      for (i = 0; i < 252; i++) {
        c_obj->W0_InBuf[i].re = 0.0;
        c_obj->W0_InBuf[i].im = 0.0;
      }
    } else {
      emlrtErrorWithMessageIdR2012b(&c_st, &hc_emlrtRTEI,
        "MATLAB:system:setupCalledWhenLockedCodegen", 0);
    }

    c_st.site = &iu_emlrtRSI;
    b_st.site = &cb_emlrtRSI;
    c_st.site = &iu_emlrtRSI;
    c_obj = &b_obj->cSFunObject;
    if (c_obj->S1_isReleased) {
      emlrtErrorWithMessageIdR2012b(&c_st, &gc_emlrtRTEI,
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
  c_st.site = &iu_emlrtRSI;
  st.site = &cb_emlrtRSI;
  st.site = &cb_emlrtRSI;
  b_obj = obj;
  anyInputSizeChanged = FALSE;
  i = 0;
  exitg1 = FALSE;
  while ((exitg1 == FALSE) && (i < 8)) {
    if (b_obj->inputVarSize1[i] != (uint32_T)iv128[i]) {
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
  c_st.site = &iu_emlrtRSI;
  st.site = &cb_emlrtRSI;
  st.site = &cb_emlrtRSI;
  st.site = &cb_emlrtRSI;
  b_obj = obj;
  b_st.site = &fg_emlrtRSI;
  c_st.site = &cb_emlrtRSI;
  c_st.site = &cb_emlrtRSI;
  b_st.site = &fg_emlrtRSI;
  c_st.site = &cb_emlrtRSI;
  c_st.site = &cb_emlrtRSI;
  b_st.site = &fg_emlrtRSI;
  b_st.site = &fg_emlrtRSI;
  c_st.site = &cb_emlrtRSI;
  c_st.site = &cb_emlrtRSI;
  b_st.site = &fg_emlrtRSI;
  b_st.site = &fg_emlrtRSI;
  c_st.site = &iu_emlrtRSI;
  c_obj = &b_obj->cSFunObject;
  if (!c_obj->S0_isInitialized) {
    c_obj->S0_isInitialized = TRUE;
    if (c_obj->S1_isReleased) {
      emlrtErrorWithMessageIdR2012b(&c_st, &fc_emlrtRTEI,
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
  b_st.site = &fg_emlrtRSI;
  c_st.site = &iu_emlrtRSI;
  if (!b_obj->cSFunObject.S0_isInitialized) {
    emlrtErrorWithMessageIdR2012b(&c_st, &ec_emlrtRTEI,
      "MATLAB:system:updateCalledBeforeSetup", 0);
  }
}

void h_SystemCore_step(const emlrtStack *sp, commcodegen_CRCGenerator_12 *obj,
  const real_T varargin_1[560], real_T varargout_1[563])
{
  const mxArray *y;
  static const int32_T iv159[2] = { 1, 45 };

  const mxArray *m37;
  char_T cv193[45];
  int32_T i;
  static const char_T cv194[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C',
    'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv160[2] = { 1, 4 };

  char_T cv195[4];
  static const char_T cv196[4] = { 's', 't', 'e', 'p' };

  commcodegen_CRCGenerator_12 *b_obj;
  const mxArray *c_y;
  static const int32_T iv161[2] = { 1, 51 };

  char_T cv197[51];
  static const char_T cv198[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l',
    'e', 'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *d_y;
  static const int32_T iv162[2] = { 1, 5 };

  char_T cv199[5];
  static const char_T cv200[5] = { 's', 'e', 't', 'u', 'p' };

  int32_T k;
  static const int16_T value[8] = { 560, 1, 1, 1, 1, 1, 1, 1 };

  boolean_T anyInputSizeChanged;
  boolean_T exitg1;
  static const int16_T iv163[8] = { 560, 1, 1, 1, 1, 1, 1, 1 };

  comm_CRCGenerator_8 *c_obj;
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
    m37 = mxCreateCharArray(2, iv159);
    for (i = 0; i < 45; i++) {
      cv193[i] = cv194[i];
    }

    emlrtInitCharArrayR2013a(sp, 45, m37, cv193);
    emlrtAssign(&y, m37);
    b_y = NULL;
    m37 = mxCreateCharArray(2, iv160);
    for (i = 0; i < 4; i++) {
      cv195[i] = cv196[i];
    }

    emlrtInitCharArrayR2013a(sp, 4, m37, cv195);
    emlrtAssign(&b_y, m37);
    st.site = &cb_emlrtRSI;
    c_error(&st, message(&st, y, b_y, &emlrtMCI), &emlrtMCI);
  }

  if (!obj->isInitialized) {
    st.site = &cb_emlrtRSI;
    b_obj = obj;
    if (!b_obj->isInitialized) {
    } else {
      c_y = NULL;
      m37 = mxCreateCharArray(2, iv161);
      for (i = 0; i < 51; i++) {
        cv197[i] = cv198[i];
      }

      emlrtInitCharArrayR2013a(&st, 51, m37, cv197);
      emlrtAssign(&c_y, m37);
      d_y = NULL;
      m37 = mxCreateCharArray(2, iv162);
      for (i = 0; i < 5; i++) {
        cv199[i] = cv200[i];
      }

      emlrtInitCharArrayR2013a(&st, 5, m37, cv199);
      emlrtAssign(&d_y, m37);
      b_st.site = &cb_emlrtRSI;
      c_error(&b_st, message(&b_st, c_y, d_y, &emlrtMCI), &emlrtMCI);
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
    if (b_obj->inputVarSize1[k] != (uint32_T)iv163[k]) {
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
  b_st.site = &fg_emlrtRSI;
  b_st.site = &fg_emlrtRSI;
  b_st.site = &fg_emlrtRSI;
  b_st.site = &fg_emlrtRSI;
  b_st.site = &fg_emlrtRSI;
  b_st.site = &fg_emlrtRSI;
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
  b_st.site = &fg_emlrtRSI;
}

void i_SystemCore_step(testMACReceiverStackData *SD, const emlrtStack *sp,
  comm_SDRuTransmitter *obj, const creal_T varargin_1[38400])
{
  const mxArray *y;
  static const int32_T iv166[2] = { 1, 45 };

  const mxArray *m38;
  char_T cv201[45];
  int32_T i;
  static const char_T cv202[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C',
    'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv167[2] = { 1, 4 };

  char_T cv203[4];
  static const char_T cv204[4] = { 's', 't', 'e', 'p' };

  comm_SDRuTransmitter *b_obj;
  const mxArray *c_y;
  static const int32_T iv168[2] = { 1, 51 };

  char_T cv205[51];
  static const char_T cv206[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l',
    'e', 'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *d_y;
  static const int32_T iv169[2] = { 1, 5 };

  char_T cv207[5];
  static const char_T cv208[5] = { 's', 'e', 't', 'u', 'p' };

  static const uint16_T value[8] = { 38400U, 1U, 1U, 1U, 1U, 1U, 1U, 1U };

  int32_T errMsg_size[2];
  char_T errMsg_data[1024];
  UsrpErrorCapiEnumT deviceStatus;
  const mxArray *e_y;
  static const int32_T iv170[2] = { 1, 35 };

  char_T cv209[35];
  static const char_T cv210[35] = { 's', 'd', 'r', 'u', ':', 'r', 'e', 'p', 'o',
    'r', 't', 'S', 'D', 'R', 'u', 'S', 't', 'a', 't', 'u', 's', ':', 'N', 'o',
    't', 'C', 'o', 'm', 'p', 'a', 't', 'i', 'b', 'l', 'e' };

  const mxArray *f_y;
  static const int32_T iv171[2] = { 1, 12 };

  char_T cv211[12];
  static const char_T cv212[12] = { '1', '9', '2', '.', '1', '6', '8', '.', '1',
    '0', '.', '2' };

  const mxArray *g_y;
  static const int32_T iv172[2] = { 1, 43 };

  char_T cv213[43];
  static const char_T cv214[43] = { 'r', 'e', 't', 'u', 'r', 'n', 'e', 'd', ' ',
    'b', 'y', ' ', '\'', 'g', 'e', 't', 'S', 'D', 'R', 'u', 'D', 'r', 'i', 'v',
    'e', 'r', 'V', 'e', 'r', 's', 'i', 'o', 'n', '\'', ' ', 'f', 'u', 'n', 'c',
    't', 'i', 'o', 'n' };

  const mxArray *h_y;
  static const int32_T iv173[2] = { 1, 35 };

  static const char_T cv215[35] = { 's', 'd', 'r', 'u', ':', 'r', 'e', 'p', 'o',
    'r', 't', 'S', 'D', 'R', 'u', 'S', 't', 'a', 't', 'u', 's', ':', 'N', 'o',
    't', 'R', 'e', 's', 'p', 'o', 'n', 'd', 'i', 'n', 'g' };

  const mxArray *i_y;
  static const int32_T iv174[2] = { 1, 12 };

  const mxArray *j_y;
  static const int32_T iv175[2] = { 1, 28 };

  char_T cv216[28];
  static const char_T cv217[28] = { 's', 'd', 'r', 'u', ':', 'r', 'e', 'p', 'o',
    'r', 't', 'S', 'D', 'R', 'u', 'S', 't', 'a', 't', 'u', 's', ':', 'R', 'x',
    'B', 'u', 's', 'y' };

  const mxArray *k_y;
  static const int32_T iv176[2] = { 1, 12 };

  const mxArray *l_y;
  static const int32_T iv177[2] = { 1, 28 };

  static const char_T cv218[28] = { 's', 'd', 'r', 'u', ':', 'r', 'e', 'p', 'o',
    'r', 't', 'S', 'D', 'R', 'u', 'S', 't', 'a', 't', 'u', 's', ':', 'T', 'x',
    'B', 'u', 's', 'y' };

  const mxArray *m_y;
  static const int32_T iv178[2] = { 1, 12 };

  const mxArray *n_y;
  static const int32_T iv179[2] = { 1, 26 };

  char_T cv219[26];
  static const char_T cv220[26] = { 's', 'd', 'r', 'u', ':', 'r', 'e', 'p', 'o',
    'r', 't', 'S', 'D', 'R', 'u', 'S', 't', 'a', 't', 'u', 's', ':', 'B', 'u',
    's', 'y' };

  const mxArray *o_y;
  static const int32_T iv180[2] = { 1, 12 };

  const mxArray *p_y;
  static const int32_T iv181[2] = { 1, 35 };

  static const char_T cv221[35] = { 's', 'd', 'r', 'u', ':', 'r', 'e', 'p', 'o',
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
    m38 = mxCreateCharArray(2, iv166);
    for (i = 0; i < 45; i++) {
      cv201[i] = cv202[i];
    }

    emlrtInitCharArrayR2013a(sp, 45, m38, cv201);
    emlrtAssign(&y, m38);
    b_y = NULL;
    m38 = mxCreateCharArray(2, iv167);
    for (i = 0; i < 4; i++) {
      cv203[i] = cv204[i];
    }

    emlrtInitCharArrayR2013a(sp, 4, m38, cv203);
    emlrtAssign(&b_y, m38);
    st.site = &cb_emlrtRSI;
    c_error(&st, message(&st, y, b_y, &emlrtMCI), &emlrtMCI);
  }

  if (!obj->isInitialized) {
    st.site = &cb_emlrtRSI;
    b_obj = obj;
    if (!b_obj->isInitialized) {
    } else {
      c_y = NULL;
      m38 = mxCreateCharArray(2, iv168);
      for (i = 0; i < 51; i++) {
        cv205[i] = cv206[i];
      }

      emlrtInitCharArrayR2013a(&st, 51, m38, cv205);
      emlrtAssign(&c_y, m38);
      d_y = NULL;
      m38 = mxCreateCharArray(2, iv169);
      for (i = 0; i < 5; i++) {
        cv207[i] = cv208[i];
      }

      emlrtInitCharArrayR2013a(&st, 5, m38, cv207);
      emlrtAssign(&d_y, m38);
      b_st.site = &cb_emlrtRSI;
      c_error(&b_st, message(&b_st, c_y, d_y, &emlrtMCI), &emlrtMCI);
    }

    b_st.site = &cb_emlrtRSI;
    b_obj->isInitialized = TRUE;
    c_st.site = &db_emlrtRSI;
    b_st.site = &cb_emlrtRSI;
    c_st.site = &cb_emlrtRSI;
    d_st.site = &db_emlrtRSI;
    c_st.site = &cb_emlrtRSI;
    d_st.site = &db_emlrtRSI;
    b_st.site = &cb_emlrtRSI;
    c_st.site = &cb_emlrtRSI;
    c_st.site = &cb_emlrtRSI;
    c_st.site = &cb_emlrtRSI;
    d_st.site = &db_emlrtRSI;
    b_st.site = &cb_emlrtRSI;
    c_st.site = &cb_emlrtRSI;
    for (i = 0; i < 8; i++) {
      b_obj->inputVarSize1[i] = value[i];
    }

    d_st.site = &db_emlrtRSI;
    b_st.site = &cb_emlrtRSI;
    c_st.site = &cb_emlrtRSI;
    b_st.site = &cb_emlrtRSI;
    c_st.site = &cb_emlrtRSI;
    d_st.site = &cb_emlrtRSI;
    d_st.site = &cb_emlrtRSI;
    b_st.site = &cb_emlrtRSI;
    c_st.site = &cb_emlrtRSI;
    c_st.site = &cb_emlrtRSI;
    b_st.site = &cb_emlrtRSI;
    b_st.site = &cb_emlrtRSI;
    b_st.site = &cb_emlrtRSI;
    b_st.site = &cb_emlrtRSI;
    c_st.site = &sj_emlrtRSI;
    SDRuTransmitter_setupImplLocal(&c_st, b_obj, &deviceStatus, errMsg_data,
      errMsg_size);
    if (deviceStatus == UsrpDriverSuccess) {
      c_st.site = &sj_emlrtRSI;
      d_st.site = &db_emlrtRSI;
    } else {
      c_st.site = &sj_emlrtRSI;
      closeDataConnection(&c_st, b_obj->pDriverHandle);
      c_st.site = &sj_emlrtRSI;
      d_st.site = &db_emlrtRSI;
    }

    c_st.site = &sj_emlrtRSI;

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
      d_st.site = &mn_emlrtRSI;
      if (!(deviceStatus == UsrpDriverNotCompatible)) {
      } else {
        e_y = NULL;
        m38 = mxCreateCharArray(2, iv170);
        for (i = 0; i < 35; i++) {
          cv209[i] = cv210[i];
        }

        emlrtInitCharArrayR2013a(&d_st, 35, m38, cv209);
        emlrtAssign(&e_y, m38);
        f_y = NULL;
        m38 = mxCreateCharArray(2, iv171);
        for (i = 0; i < 12; i++) {
          cv211[i] = cv212[i];
        }

        emlrtInitCharArrayR2013a(&d_st, 12, m38, cv211);
        emlrtAssign(&f_y, m38);
        g_y = NULL;
        m38 = mxCreateCharArray(2, iv172);
        for (i = 0; i < 43; i++) {
          cv213[i] = cv214[i];
        }

        emlrtInitCharArrayR2013a(&d_st, 43, m38, cv213);
        emlrtAssign(&g_y, m38);
        e_st.site = &mv_emlrtRSI;
        c_error(&e_st, c_message(&e_st, e_y, f_y, g_y, &g_emlrtMCI), &g_emlrtMCI);
      }
      break;

     case UsrpDriverNotResponding:
      d_st.site = &kn_emlrtRSI;
      if (!(deviceStatus == UsrpDriverNotResponding)) {
      } else {
        h_y = NULL;
        m38 = mxCreateCharArray(2, iv173);
        for (i = 0; i < 35; i++) {
          cv209[i] = cv215[i];
        }

        emlrtInitCharArrayR2013a(&d_st, 35, m38, cv209);
        emlrtAssign(&h_y, m38);
        i_y = NULL;
        m38 = mxCreateCharArray(2, iv174);
        for (i = 0; i < 12; i++) {
          cv211[i] = cv212[i];
        }

        emlrtInitCharArrayR2013a(&d_st, 12, m38, cv211);
        emlrtAssign(&i_y, m38);
        e_st.site = &mv_emlrtRSI;
        c_error(&e_st, message(&e_st, h_y, i_y, &g_emlrtMCI), &g_emlrtMCI);
      }
      break;

     case UsrpDriverRxBusy:
      d_st.site = &in_emlrtRSI;
      if (!(deviceStatus == UsrpDriverRxBusy)) {
      } else {
        j_y = NULL;
        m38 = mxCreateCharArray(2, iv175);
        for (i = 0; i < 28; i++) {
          cv216[i] = cv217[i];
        }

        emlrtInitCharArrayR2013a(&d_st, 28, m38, cv216);
        emlrtAssign(&j_y, m38);
        k_y = NULL;
        m38 = mxCreateCharArray(2, iv176);
        for (i = 0; i < 12; i++) {
          cv211[i] = cv212[i];
        }

        emlrtInitCharArrayR2013a(&d_st, 12, m38, cv211);
        emlrtAssign(&k_y, m38);
        e_st.site = &mv_emlrtRSI;
        c_error(&e_st, message(&e_st, j_y, k_y, &g_emlrtMCI), &g_emlrtMCI);
      }
      break;

     case UsrpDriverTxBusy:
      d_st.site = &gn_emlrtRSI;
      if (!(deviceStatus == UsrpDriverTxBusy)) {
      } else {
        l_y = NULL;
        m38 = mxCreateCharArray(2, iv177);
        for (i = 0; i < 28; i++) {
          cv216[i] = cv218[i];
        }

        emlrtInitCharArrayR2013a(&d_st, 28, m38, cv216);
        emlrtAssign(&l_y, m38);
        m_y = NULL;
        m38 = mxCreateCharArray(2, iv178);
        for (i = 0; i < 12; i++) {
          cv211[i] = cv212[i];
        }

        emlrtInitCharArrayR2013a(&d_st, 12, m38, cv211);
        emlrtAssign(&m_y, m38);
        e_st.site = &mv_emlrtRSI;
        c_error(&e_st, message(&e_st, l_y, m_y, &g_emlrtMCI), &g_emlrtMCI);
      }
      break;

     case UsrpDriverBusy:
      d_st.site = &en_emlrtRSI;
      if (!(deviceStatus == UsrpDriverBusy)) {
      } else {
        n_y = NULL;
        m38 = mxCreateCharArray(2, iv179);
        for (i = 0; i < 26; i++) {
          cv219[i] = cv220[i];
        }

        emlrtInitCharArrayR2013a(&d_st, 26, m38, cv219);
        emlrtAssign(&n_y, m38);
        o_y = NULL;
        m38 = mxCreateCharArray(2, iv180);
        for (i = 0; i < 12; i++) {
          cv211[i] = cv212[i];
        }

        emlrtInitCharArrayR2013a(&d_st, 12, m38, cv211);
        emlrtAssign(&o_y, m38);
        e_st.site = &mv_emlrtRSI;
        c_error(&e_st, message(&e_st, n_y, o_y, &g_emlrtMCI), &g_emlrtMCI);
      }
      break;

     case UsrpDriverError:
      d_st.site = &cn_emlrtRSI;
      if (!(deviceStatus == UsrpDriverError)) {
      } else {
        p_y = NULL;
        m38 = mxCreateCharArray(2, iv181);
        for (i = 0; i < 35; i++) {
          cv209[i] = cv221[i];
        }

        emlrtInitCharArrayR2013a(&d_st, 35, m38, cv209);
        emlrtAssign(&p_y, m38);
        u_size[0] = 1;
        u_size[1] = errMsg_size[1];
        loop_ub = errMsg_size[0] * errMsg_size[1];
        for (i = 0; i < loop_ub; i++) {
          u_data[i] = errMsg_data[i];
        }

        q_y = NULL;
        m38 = mxCreateCharArray(2, u_size);
        emlrtInitCharArrayR2013a(&d_st, u_size[1], m38, (char_T *)&u_data);
        emlrtAssign(&q_y, m38);
        e_st.site = &mv_emlrtRSI;
        c_error(&e_st, message(&e_st, p_y, q_y, &g_emlrtMCI), &g_emlrtMCI);
      }
      break;
    }

    b_st.site = &cb_emlrtRSI;
    b_st.site = &cb_emlrtRSI;
    b_obj->TunablePropsChanged = FALSE;
    c_st.site = &db_emlrtRSI;
  }

  st.site = &cb_emlrtRSI;
  st.site = &cb_emlrtRSI;
  b_obj = obj;
  if (b_obj->TunablePropsChanged) {
    b_st.site = &cb_emlrtRSI;
    b_st.site = &cb_emlrtRSI;
    b_obj->TunablePropsChanged = FALSE;
    c_st.site = &db_emlrtRSI;
    b_st.site = &cb_emlrtRSI;
    b_st.site = &cb_emlrtRSI;
    c_st.site = &db_emlrtRSI;
    for (i = 0; i < 4; i++) {
      b_obj->tunablePropertyChanged[i] = FALSE;
    }

    d_st.site = &db_emlrtRSI;
  }

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
    if (b_obj->inputVarSize1[i] != uv0[i]) {
      anyInputSizeChanged = TRUE;
      b_st.site = &cb_emlrtRSI;
      for (i = 0; i < 8; i++) {
        b_obj->inputVarSize1[i] = value[i];
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
  st.site = &cb_emlrtRSI;
  st.site = &cb_emlrtRSI;
  st.site = &cb_emlrtRSI;
  SDRuTransmitter_stepImpl(SD, &st, obj, varargin_1);
}

void j_SystemCore_step(testMACReceiverStackData *SD, const emlrtStack *sp,
  comm_SDRuReceiver *obj)
{
  const mxArray *y;
  static const int32_T iv185[2] = { 1, 45 };

  const mxArray *m42;
  char_T cv228[45];
  int32_T i;
  static const char_T cv229[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C',
    'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv186[2] = { 1, 4 };

  char_T cv230[4];
  static const char_T cv231[4] = { 's', 't', 'e', 'p' };

  comm_SDRuReceiver *b_obj;
  const mxArray *c_y;
  static const int32_T iv187[2] = { 1, 51 };

  char_T cv232[51];
  static const char_T cv233[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l',
    'e', 'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *d_y;
  static const int32_T iv188[2] = { 1, 5 };

  char_T cv234[5];
  static const char_T cv235[5] = { 's', 'e', 't', 'u', 'p' };

  int32_T errMsg_size[2];
  char_T errMsg_data[1024];
  UsrpErrorCapiEnumT deviceStatus;
  const mxArray *e_y;
  static const int32_T iv189[2] = { 1, 35 };

  char_T cv236[35];
  static const char_T cv237[35] = { 's', 'd', 'r', 'u', ':', 'r', 'e', 'p', 'o',
    'r', 't', 'S', 'D', 'R', 'u', 'S', 't', 'a', 't', 'u', 's', ':', 'N', 'o',
    't', 'C', 'o', 'm', 'p', 'a', 't', 'i', 'b', 'l', 'e' };

  const mxArray *f_y;
  static const int32_T iv190[2] = { 1, 12 };

  char_T cv238[12];
  static const char_T cv239[12] = { '1', '9', '2', '.', '1', '6', '8', '.', '1',
    '0', '.', '2' };

  const mxArray *g_y;
  static const int32_T iv191[2] = { 1, 43 };

  char_T cv240[43];
  static const char_T cv241[43] = { 'r', 'e', 't', 'u', 'r', 'n', 'e', 'd', ' ',
    'b', 'y', ' ', '\'', 'g', 'e', 't', 'S', 'D', 'R', 'u', 'D', 'r', 'i', 'v',
    'e', 'r', 'V', 'e', 'r', 's', 'i', 'o', 'n', '\'', ' ', 'f', 'u', 'n', 'c',
    't', 'i', 'o', 'n' };

  const mxArray *h_y;
  static const int32_T iv192[2] = { 1, 35 };

  static const char_T cv242[35] = { 's', 'd', 'r', 'u', ':', 'r', 'e', 'p', 'o',
    'r', 't', 'S', 'D', 'R', 'u', 'S', 't', 'a', 't', 'u', 's', ':', 'N', 'o',
    't', 'R', 'e', 's', 'p', 'o', 'n', 'd', 'i', 'n', 'g' };

  const mxArray *i_y;
  static const int32_T iv193[2] = { 1, 12 };

  const mxArray *j_y;
  static const int32_T iv194[2] = { 1, 28 };

  char_T cv243[28];
  static const char_T cv244[28] = { 's', 'd', 'r', 'u', ':', 'r', 'e', 'p', 'o',
    'r', 't', 'S', 'D', 'R', 'u', 'S', 't', 'a', 't', 'u', 's', ':', 'R', 'x',
    'B', 'u', 's', 'y' };

  const mxArray *k_y;
  static const int32_T iv195[2] = { 1, 12 };

  const mxArray *l_y;
  static const int32_T iv196[2] = { 1, 28 };

  static const char_T cv245[28] = { 's', 'd', 'r', 'u', ':', 'r', 'e', 'p', 'o',
    'r', 't', 'S', 'D', 'R', 'u', 'S', 't', 'a', 't', 'u', 's', ':', 'T', 'x',
    'B', 'u', 's', 'y' };

  const mxArray *m_y;
  static const int32_T iv197[2] = { 1, 12 };

  const mxArray *n_y;
  static const int32_T iv198[2] = { 1, 26 };

  char_T cv246[26];
  static const char_T cv247[26] = { 's', 'd', 'r', 'u', ':', 'r', 'e', 'p', 'o',
    'r', 't', 'S', 'D', 'R', 'u', 'S', 't', 'a', 't', 'u', 's', ':', 'B', 'u',
    's', 'y' };

  const mxArray *o_y;
  static const int32_T iv199[2] = { 1, 12 };

  const mxArray *p_y;
  static const int32_T iv200[2] = { 1, 35 };

  static const char_T cv248[35] = { 's', 'd', 'r', 'u', ':', 'r', 'e', 'p', 'o',
    'r', 't', 'S', 'D', 'R', 'u', 'S', 't', 'a', 't', 'u', 's', ':', 'U', 'n',
    'k', 'n', 'o', 'w', 'n', 'S', 't', 'a', 't', 'u', 's' };

  int32_T u_size[2];
  int32_T i31;
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
    m42 = mxCreateCharArray(2, iv185);
    for (i = 0; i < 45; i++) {
      cv228[i] = cv229[i];
    }

    emlrtInitCharArrayR2013a(sp, 45, m42, cv228);
    emlrtAssign(&y, m42);
    b_y = NULL;
    m42 = mxCreateCharArray(2, iv186);
    for (i = 0; i < 4; i++) {
      cv230[i] = cv231[i];
    }

    emlrtInitCharArrayR2013a(sp, 4, m42, cv230);
    emlrtAssign(&b_y, m42);
    st.site = &cb_emlrtRSI;
    c_error(&st, message(&st, y, b_y, &emlrtMCI), &emlrtMCI);
  }

  if (!obj->isInitialized) {
    st.site = &cb_emlrtRSI;
    b_obj = obj;
    if (!b_obj->isInitialized) {
    } else {
      c_y = NULL;
      m42 = mxCreateCharArray(2, iv187);
      for (i = 0; i < 51; i++) {
        cv232[i] = cv233[i];
      }

      emlrtInitCharArrayR2013a(&st, 51, m42, cv232);
      emlrtAssign(&c_y, m42);
      d_y = NULL;
      m42 = mxCreateCharArray(2, iv188);
      for (i = 0; i < 5; i++) {
        cv234[i] = cv235[i];
      }

      emlrtInitCharArrayR2013a(&st, 5, m42, cv234);
      emlrtAssign(&d_y, m42);
      b_st.site = &cb_emlrtRSI;
      c_error(&b_st, message(&b_st, c_y, d_y, &emlrtMCI), &emlrtMCI);
    }

    b_st.site = &cb_emlrtRSI;
    b_obj->isInitialized = TRUE;
    c_st.site = &db_emlrtRSI;
    b_st.site = &cb_emlrtRSI;
    b_st.site = &cb_emlrtRSI;
    c_st.site = &cb_emlrtRSI;
    b_st.site = &cb_emlrtRSI;
    b_st.site = &cb_emlrtRSI;
    c_st.site = &cb_emlrtRSI;
    b_st.site = &cb_emlrtRSI;
    c_st.site = &cb_emlrtRSI;
    d_st.site = &cb_emlrtRSI;
    d_st.site = &cb_emlrtRSI;
    b_st.site = &cb_emlrtRSI;
    c_st.site = &cb_emlrtRSI;
    c_st.site = &cb_emlrtRSI;
    b_st.site = &cb_emlrtRSI;
    b_st.site = &cb_emlrtRSI;
    b_st.site = &cb_emlrtRSI;
    b_st.site = &cb_emlrtRSI;
    c_st.site = &sj_emlrtRSI;
    SDRuReceiver_setupImplLocal(&c_st, b_obj, &deviceStatus, errMsg_data,
      errMsg_size);
    if (deviceStatus == UsrpDriverSuccess) {
      c_st.site = &sj_emlrtRSI;
      d_st.site = &db_emlrtRSI;
    } else {
      c_st.site = &sj_emlrtRSI;
      closeDataConnection(&c_st, b_obj->pDriverHandle);
      c_st.site = &sj_emlrtRSI;
      d_st.site = &db_emlrtRSI;
    }

    c_st.site = &sj_emlrtRSI;

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
      d_st.site = &mn_emlrtRSI;
      if (!(deviceStatus == UsrpDriverNotCompatible)) {
      } else {
        e_y = NULL;
        m42 = mxCreateCharArray(2, iv189);
        for (i = 0; i < 35; i++) {
          cv236[i] = cv237[i];
        }

        emlrtInitCharArrayR2013a(&d_st, 35, m42, cv236);
        emlrtAssign(&e_y, m42);
        f_y = NULL;
        m42 = mxCreateCharArray(2, iv190);
        for (i = 0; i < 12; i++) {
          cv238[i] = cv239[i];
        }

        emlrtInitCharArrayR2013a(&d_st, 12, m42, cv238);
        emlrtAssign(&f_y, m42);
        g_y = NULL;
        m42 = mxCreateCharArray(2, iv191);
        for (i = 0; i < 43; i++) {
          cv240[i] = cv241[i];
        }

        emlrtInitCharArrayR2013a(&d_st, 43, m42, cv240);
        emlrtAssign(&g_y, m42);
        e_st.site = &mv_emlrtRSI;
        c_error(&e_st, c_message(&e_st, e_y, f_y, g_y, &g_emlrtMCI), &g_emlrtMCI);
      }
      break;

     case UsrpDriverNotResponding:
      d_st.site = &kn_emlrtRSI;
      if (!(deviceStatus == UsrpDriverNotResponding)) {
      } else {
        h_y = NULL;
        m42 = mxCreateCharArray(2, iv192);
        for (i = 0; i < 35; i++) {
          cv236[i] = cv242[i];
        }

        emlrtInitCharArrayR2013a(&d_st, 35, m42, cv236);
        emlrtAssign(&h_y, m42);
        i_y = NULL;
        m42 = mxCreateCharArray(2, iv193);
        for (i = 0; i < 12; i++) {
          cv238[i] = cv239[i];
        }

        emlrtInitCharArrayR2013a(&d_st, 12, m42, cv238);
        emlrtAssign(&i_y, m42);
        e_st.site = &mv_emlrtRSI;
        c_error(&e_st, message(&e_st, h_y, i_y, &g_emlrtMCI), &g_emlrtMCI);
      }
      break;

     case UsrpDriverRxBusy:
      d_st.site = &in_emlrtRSI;
      if (!(deviceStatus == UsrpDriverRxBusy)) {
      } else {
        j_y = NULL;
        m42 = mxCreateCharArray(2, iv194);
        for (i = 0; i < 28; i++) {
          cv243[i] = cv244[i];
        }

        emlrtInitCharArrayR2013a(&d_st, 28, m42, cv243);
        emlrtAssign(&j_y, m42);
        k_y = NULL;
        m42 = mxCreateCharArray(2, iv195);
        for (i = 0; i < 12; i++) {
          cv238[i] = cv239[i];
        }

        emlrtInitCharArrayR2013a(&d_st, 12, m42, cv238);
        emlrtAssign(&k_y, m42);
        e_st.site = &mv_emlrtRSI;
        c_error(&e_st, message(&e_st, j_y, k_y, &g_emlrtMCI), &g_emlrtMCI);
      }
      break;

     case UsrpDriverTxBusy:
      d_st.site = &gn_emlrtRSI;
      if (!(deviceStatus == UsrpDriverTxBusy)) {
      } else {
        l_y = NULL;
        m42 = mxCreateCharArray(2, iv196);
        for (i = 0; i < 28; i++) {
          cv243[i] = cv245[i];
        }

        emlrtInitCharArrayR2013a(&d_st, 28, m42, cv243);
        emlrtAssign(&l_y, m42);
        m_y = NULL;
        m42 = mxCreateCharArray(2, iv197);
        for (i = 0; i < 12; i++) {
          cv238[i] = cv239[i];
        }

        emlrtInitCharArrayR2013a(&d_st, 12, m42, cv238);
        emlrtAssign(&m_y, m42);
        e_st.site = &mv_emlrtRSI;
        c_error(&e_st, message(&e_st, l_y, m_y, &g_emlrtMCI), &g_emlrtMCI);
      }
      break;

     case UsrpDriverBusy:
      d_st.site = &en_emlrtRSI;
      if (!(deviceStatus == UsrpDriverBusy)) {
      } else {
        n_y = NULL;
        m42 = mxCreateCharArray(2, iv198);
        for (i = 0; i < 26; i++) {
          cv246[i] = cv247[i];
        }

        emlrtInitCharArrayR2013a(&d_st, 26, m42, cv246);
        emlrtAssign(&n_y, m42);
        o_y = NULL;
        m42 = mxCreateCharArray(2, iv199);
        for (i = 0; i < 12; i++) {
          cv238[i] = cv239[i];
        }

        emlrtInitCharArrayR2013a(&d_st, 12, m42, cv238);
        emlrtAssign(&o_y, m42);
        e_st.site = &mv_emlrtRSI;
        c_error(&e_st, message(&e_st, n_y, o_y, &g_emlrtMCI), &g_emlrtMCI);
      }
      break;

     case UsrpDriverError:
      d_st.site = &cn_emlrtRSI;
      if (!(deviceStatus == UsrpDriverError)) {
      } else {
        p_y = NULL;
        m42 = mxCreateCharArray(2, iv200);
        for (i = 0; i < 35; i++) {
          cv236[i] = cv248[i];
        }

        emlrtInitCharArrayR2013a(&d_st, 35, m42, cv236);
        emlrtAssign(&p_y, m42);
        u_size[0] = 1;
        u_size[1] = errMsg_size[1];
        i = errMsg_size[0] * errMsg_size[1];
        for (i31 = 0; i31 < i; i31++) {
          u_data[i31] = errMsg_data[i31];
        }

        q_y = NULL;
        m42 = mxCreateCharArray(2, u_size);
        emlrtInitCharArrayR2013a(&d_st, u_size[1], m42, (char_T *)&u_data);
        emlrtAssign(&q_y, m42);
        e_st.site = &mv_emlrtRSI;
        c_error(&e_st, message(&e_st, p_y, q_y, &g_emlrtMCI), &g_emlrtMCI);
      }
      break;
    }

    b_st.site = &cb_emlrtRSI;
    b_st.site = &cb_emlrtRSI;
    b_obj->TunablePropsChanged = FALSE;
    c_st.site = &db_emlrtRSI;
  }

  st.site = &cb_emlrtRSI;
  st.site = &cb_emlrtRSI;
  b_obj = obj;
  if (b_obj->TunablePropsChanged) {
    b_st.site = &cb_emlrtRSI;
    b_st.site = &cb_emlrtRSI;
    b_obj->TunablePropsChanged = FALSE;
    c_st.site = &db_emlrtRSI;
    b_st.site = &cb_emlrtRSI;
    b_st.site = &cb_emlrtRSI;
    c_st.site = &db_emlrtRSI;
    for (i31 = 0; i31 < 4; i31++) {
      b_obj->tunablePropertyChanged[i31] = FALSE;
    }

    d_st.site = &db_emlrtRSI;
  }

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
  b_SDRuReceiver_stepImpl(SD, &st, obj);
}

/* End of code generation (SystemCore.c) */
