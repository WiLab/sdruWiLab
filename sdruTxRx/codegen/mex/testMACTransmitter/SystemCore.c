/*
 * SystemCore.c
 *
 * Code generation for function 'SystemCore'
 *
 * C source code generated on: Thu Mar  6 22:22:38 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testMACTransmitter.h"
#include "SystemCore.h"
#include "SystemProp.h"
#include "find.h"
#include "testMACTransmitter_emxutil.h"
#include "OFDMModulator.h"
#include "Nondirect1.h"
#include "SDRuTransmitter.h"
#include "closeDataConnection.h"
#include "SDRuReceiver.h"
#include "testMACTransmitter_mexutil.h"
#include "testMACTransmitter_data.h"
#include <stdio.h>

/* Variable Definitions */
static emlrtRSInfo uc_emlrtRSI = { 345, "OFDMModulator",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/OFDMModulator.m" };

static emlrtRSInfo vc_emlrtRSI = { 374, "OFDMModulator",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/OFDMModulator.m" };

static emlrtRSInfo wc_emlrtRSI = { 375, "OFDMModulator",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/OFDMModulator.m" };

static emlrtRSInfo xc_emlrtRSI = { 388, "OFDMModulator",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/OFDMModulator.m" };

static emlrtRSInfo bd_emlrtRSI = { 415, "OFDMModulator",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/OFDMModulator.m" };

static emlrtRSInfo cd_emlrtRSI = { 419, "OFDMModulator",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/OFDMModulator.m" };

static emlrtRSInfo dd_emlrtRSI = { 423, "OFDMModulator",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/OFDMModulator.m" };

static emlrtRSInfo ed_emlrtRSI = { 424, "OFDMModulator",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/OFDMModulator.m" };

static emlrtRSInfo oab_emlrtRSI = { 1, "FIRRateConverter",
  "/Applications/MATLAB_R2013b.app/toolbox/dsp/dsp/+dspcodegen/FIRRateConverter.p"
};

static emlrtRTEInfo j_emlrtRTEI = { 1, 13, "SystemCore",
  "/Applications/MATLAB_R2013b.app/toolbox/shared/system/coder/+matlab/+system/+coder/SystemCore.p"
};

static emlrtBCInfo d_emlrtBCI = { 1, 768, 403, 9, "packedData", "OFDMModulator",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/OFDMModulator.m", 0 };

static emlrtRTEInfo xc_emlrtRTEI = { 41, 1, "update",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/scomp/update.m" };

static emlrtRTEInfo yc_emlrtRTEI = { 43, 20, "output",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/scomp/output.m" };

static emlrtRTEInfo ad_emlrtRTEI = { 19, 1, "reset",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/scomp/reset.m" };

static emlrtRTEInfo bd_emlrtRTEI = { 43, 1, "setup",
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
  static const int32_T iv235[2] = { 1, 45 };

  const mxArray *m42;
  char_T cv280[45];
  int32_T i;
  static const char_T cv281[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C',
    'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv236[2] = { 1, 5 };

  char_T cv282[5];
  static const char_T cv283[5] = { 'r', 'e', 's', 'e', 't' };

  dspcodegen_FIRRateConverter *b_obj;
  dsp_FIRRateConverter_10 *c_obj;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (!obj->isReleased) {
  } else {
    y = NULL;
    m42 = mxCreateCharArray(2, iv235);
    for (i = 0; i < 45; i++) {
      cv280[i] = cv281[i];
    }

    emlrtInitCharArrayR2013a(sp, 45, m42, cv280);
    emlrtAssign(&y, m42);
    b_y = NULL;
    m42 = mxCreateCharArray(2, iv236);
    for (i = 0; i < 5; i++) {
      cv282[i] = cv283[i];
    }

    emlrtInitCharArrayR2013a(sp, 5, m42, cv282);
    emlrtAssign(&b_y, m42);
    st.site = &fb_emlrtRSI;
    c_error(&st, message(&st, y, b_y, &emlrtMCI), &emlrtMCI);
  }

  if (obj->isInitialized) {
    st.site = NULL;
    b_obj = obj;
    b_st.site = &oab_emlrtRSI;
    c_obj = &b_obj->cSFunObject;
    if (c_obj->S1_isReleased) {
      emlrtErrorWithMessageIdR2012b(&b_st, &ad_emlrtRTEI,
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
  static const int32_T iv30[2] = { 1, 45 };

  const mxArray *m2;
  char_T cv30[45];
  int32_T i;
  static const char_T cv31[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C',
    'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv31[2] = { 1, 4 };

  char_T cv32[4];
  static const char_T cv33[4] = { 's', 't', 'e', 'p' };

  OFDMModulator *b_obj;
  const mxArray *c_y;
  static const int32_T iv32[2] = { 1, 51 };

  char_T cv34[51];
  static const char_T cv35[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l',
    'e', 'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *d_y;
  static const int32_T iv33[2] = { 1, 5 };

  char_T cv36[5];
  static const char_T cv37[5] = { 's', 'e', 't', 'u', 'p' };

  real_T value[64];
  static const int8_T iv34[11] = { 0, 1, 2, 3, 4, 5, 59, 60, 61, 62, 63 };

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
    m2 = mxCreateCharArray(2, iv30);
    for (i = 0; i < 45; i++) {
      cv30[i] = cv31[i];
    }

    emlrtInitCharArrayR2013a(sp, 45, m2, cv30);
    emlrtAssign(&y, m2);
    b_y = NULL;
    m2 = mxCreateCharArray(2, iv31);
    for (i = 0; i < 4; i++) {
      cv32[i] = cv33[i];
    }

    emlrtInitCharArrayR2013a(sp, 4, m2, cv32);
    emlrtAssign(&b_y, m2);
    st.site = &fb_emlrtRSI;
    c_error(&st, message(&st, y, b_y, &emlrtMCI), &emlrtMCI);
  }

  if (!obj->isInitialized) {
    st.site = &fb_emlrtRSI;
    b_obj = obj;
    if (!b_obj->isInitialized) {
    } else {
      c_y = NULL;
      m2 = mxCreateCharArray(2, iv32);
      for (i = 0; i < 51; i++) {
        cv34[i] = cv35[i];
      }

      emlrtInitCharArrayR2013a(&st, 51, m2, cv34);
      emlrtAssign(&c_y, m2);
      d_y = NULL;
      m2 = mxCreateCharArray(2, iv33);
      for (i = 0; i < 5; i++) {
        cv36[i] = cv37[i];
      }

      emlrtInitCharArrayR2013a(&st, 5, m2, cv36);
      emlrtAssign(&d_y, m2);
      b_st.site = &fb_emlrtRSI;
      c_error(&b_st, message(&b_st, c_y, d_y, &emlrtMCI), &emlrtMCI);
    }

    b_st.site = &fb_emlrtRSI;
    b_obj->isInitialized = TRUE;
    c_st.site = &gb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
    c_st.site = &fb_emlrtRSI;
    c_st.site = &fb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
    c_st.site = &fb_emlrtRSI;
    c_st.site = &fb_emlrtRSI;
    c_st.site = &fb_emlrtRSI;
    c_st.site = &fb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
    c_st.site = &fb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
    c_st.site = &fb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
    c_st.site = &fb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
    c_st.site = &fb_emlrtRSI;
    c_st.site = &fb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
    c_st.site = &uc_emlrtRSI;
    c_st.site = &vc_emlrtRSI;
    for (i = 0; i < 64; i++) {
      b_obj->pFullGrid[i] = 1.0;
    }

    for (i = 0; i < 64; i++) {
      value[i] = b_obj->pFullGrid[i];
    }

    for (i = 0; i < 11; i++) {
      value[iv34[i]] = 0.0;
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
                      (int32_T)sizeof(real_T), &j_emlrtRTEI);
    for (i = 0; i < ii; i++) {
      b_obj->pDataLinearIndices->data[i] = ii_data[i];
    }

    b_st.site = &fb_emlrtRSI;
  }

  st.site = &fb_emlrtRSI;
  st.site = &fb_emlrtRSI;
  st.site = &fb_emlrtRSI;
  b_st.site = &fb_emlrtRSI;
  b_st.site = &fb_emlrtRSI;
  st.site = &fb_emlrtRSI;
  st.site = &fb_emlrtRSI;
  st.site = &fb_emlrtRSI;
  b_st.site = &fb_emlrtRSI;
  b_st.site = &fb_emlrtRSI;
  st.site = &fb_emlrtRSI;
  st.site = &fb_emlrtRSI;
  st.site = &fb_emlrtRSI;
  OFDMModulator_stepImpl(&st, obj, dcv1, varargout_1);
}

void b_SystemCore_step(const emlrtStack *sp, OFDMModulator *obj, creal_T
  varargout_1[64])
{
  const mxArray *y;
  static const int32_T iv35[2] = { 1, 45 };

  const mxArray *m3;
  char_T cv38[45];
  int32_T i;
  static const char_T cv39[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C',
    'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv36[2] = { 1, 4 };

  char_T cv40[4];
  static const char_T cv41[4] = { 's', 't', 'e', 'p' };

  OFDMModulator *b_obj;
  const mxArray *c_y;
  static const int32_T iv37[2] = { 1, 51 };

  char_T cv42[51];
  static const char_T cv43[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l',
    'e', 'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *d_y;
  static const int32_T iv38[2] = { 1, 5 };

  char_T cv44[5];
  static const char_T cv45[5] = { 's', 'e', 't', 'u', 'p' };

  real_T value[64];
  static const int8_T iv39[11] = { 0, 1, 2, 3, 4, 5, 59, 60, 61, 62, 63 };

  boolean_T x[64];
  int8_T ii_data[64];
  int32_T ii;
  boolean_T exitg1;
  boolean_T guard1 = FALSE;
  int8_T b_ii_data[64];
  creal_T dcv2[53];
  static const int8_T iv40[53] = { 1, 1, -1, -1, 1, 1, -1, 1, -1, 1, 1, 1, 1, 1,
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
    m3 = mxCreateCharArray(2, iv35);
    for (i = 0; i < 45; i++) {
      cv38[i] = cv39[i];
    }

    emlrtInitCharArrayR2013a(sp, 45, m3, cv38);
    emlrtAssign(&y, m3);
    b_y = NULL;
    m3 = mxCreateCharArray(2, iv36);
    for (i = 0; i < 4; i++) {
      cv40[i] = cv41[i];
    }

    emlrtInitCharArrayR2013a(sp, 4, m3, cv40);
    emlrtAssign(&b_y, m3);
    st.site = &fb_emlrtRSI;
    c_error(&st, message(&st, y, b_y, &emlrtMCI), &emlrtMCI);
  }

  if (!obj->isInitialized) {
    st.site = &fb_emlrtRSI;
    b_obj = obj;
    if (!b_obj->isInitialized) {
    } else {
      c_y = NULL;
      m3 = mxCreateCharArray(2, iv37);
      for (i = 0; i < 51; i++) {
        cv42[i] = cv43[i];
      }

      emlrtInitCharArrayR2013a(&st, 51, m3, cv42);
      emlrtAssign(&c_y, m3);
      d_y = NULL;
      m3 = mxCreateCharArray(2, iv38);
      for (i = 0; i < 5; i++) {
        cv44[i] = cv45[i];
      }

      emlrtInitCharArrayR2013a(&st, 5, m3, cv44);
      emlrtAssign(&d_y, m3);
      b_st.site = &fb_emlrtRSI;
      c_error(&b_st, message(&b_st, c_y, d_y, &emlrtMCI), &emlrtMCI);
    }

    b_st.site = &fb_emlrtRSI;
    b_obj->isInitialized = TRUE;
    c_st.site = &gb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
    c_st.site = &fb_emlrtRSI;
    c_st.site = &fb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
    c_st.site = &fb_emlrtRSI;
    c_st.site = &fb_emlrtRSI;
    c_st.site = &fb_emlrtRSI;
    c_st.site = &fb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
    c_st.site = &fb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
    c_st.site = &fb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
    c_st.site = &fb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
    c_st.site = &fb_emlrtRSI;
    c_st.site = &fb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
    c_st.site = &uc_emlrtRSI;
    c_st.site = &vc_emlrtRSI;
    for (i = 0; i < 64; i++) {
      b_obj->pFullGrid[i] = 1.0;
    }

    for (i = 0; i < 64; i++) {
      value[i] = b_obj->pFullGrid[i];
    }

    for (i = 0; i < 11; i++) {
      value[iv39[i]] = 0.0;
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
                      (int32_T)sizeof(real_T), &j_emlrtRTEI);
    for (i = 0; i < ii; i++) {
      b_obj->pDataLinearIndices->data[i] = ii_data[i];
    }

    b_st.site = &fb_emlrtRSI;
  }

  st.site = &fb_emlrtRSI;
  st.site = &fb_emlrtRSI;
  st.site = &fb_emlrtRSI;
  b_st.site = &fb_emlrtRSI;
  b_st.site = &fb_emlrtRSI;
  st.site = &fb_emlrtRSI;
  st.site = &fb_emlrtRSI;
  st.site = &fb_emlrtRSI;
  b_st.site = &fb_emlrtRSI;
  b_st.site = &fb_emlrtRSI;
  st.site = &fb_emlrtRSI;
  st.site = &fb_emlrtRSI;
  for (i = 0; i < 53; i++) {
    dcv2[i].re = iv40[i];
    dcv2[i].im = 0.0;
  }

  st.site = &fb_emlrtRSI;
  OFDMModulator_stepImpl(&st, obj, dcv2, varargout_1);
}

void b_SystemCore_validateProperties(void)
{
}

void c_SystemCore_step(const emlrtStack *sp, commcodegen_CRCGenerator *obj,
  const real_T varargin_1[560], real_T varargout_1[563])
{
  const mxArray *y;
  static const int32_T iv44[2] = { 1, 45 };

  const mxArray *m6;
  char_T cv50[45];
  int32_T i;
  static const char_T cv51[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C',
    'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv45[2] = { 1, 4 };

  char_T cv52[4];
  static const char_T cv53[4] = { 's', 't', 'e', 'p' };

  commcodegen_CRCGenerator *b_obj;
  const mxArray *c_y;
  static const int32_T iv46[2] = { 1, 51 };

  char_T cv54[51];
  static const char_T cv55[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l',
    'e', 'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *d_y;
  static const int32_T iv47[2] = { 1, 5 };

  char_T cv56[5];
  static const char_T cv57[5] = { 's', 'e', 't', 'u', 'p' };

  int32_T k;
  static const int16_T value[8] = { 560, 1, 1, 1, 1, 1, 1, 1 };

  boolean_T anyInputSizeChanged;
  boolean_T exitg1;
  static const int16_T iv48[8] = { 560, 1, 1, 1, 1, 1, 1, 1 };

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
    m6 = mxCreateCharArray(2, iv44);
    for (i = 0; i < 45; i++) {
      cv50[i] = cv51[i];
    }

    emlrtInitCharArrayR2013a(sp, 45, m6, cv50);
    emlrtAssign(&y, m6);
    b_y = NULL;
    m6 = mxCreateCharArray(2, iv45);
    for (i = 0; i < 4; i++) {
      cv52[i] = cv53[i];
    }

    emlrtInitCharArrayR2013a(sp, 4, m6, cv52);
    emlrtAssign(&b_y, m6);
    st.site = &fb_emlrtRSI;
    c_error(&st, message(&st, y, b_y, &emlrtMCI), &emlrtMCI);
  }

  if (!obj->isInitialized) {
    st.site = &fb_emlrtRSI;
    b_obj = obj;
    if (!b_obj->isInitialized) {
    } else {
      c_y = NULL;
      m6 = mxCreateCharArray(2, iv46);
      for (i = 0; i < 51; i++) {
        cv54[i] = cv55[i];
      }

      emlrtInitCharArrayR2013a(&st, 51, m6, cv54);
      emlrtAssign(&c_y, m6);
      d_y = NULL;
      m6 = mxCreateCharArray(2, iv47);
      for (i = 0; i < 5; i++) {
        cv56[i] = cv57[i];
      }

      emlrtInitCharArrayR2013a(&st, 5, m6, cv56);
      emlrtAssign(&d_y, m6);
      b_st.site = &fb_emlrtRSI;
      c_error(&b_st, message(&b_st, c_y, d_y, &emlrtMCI), &emlrtMCI);
    }

    b_st.site = &fb_emlrtRSI;
    b_obj->isInitialized = TRUE;
    b_st.site = &fb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
    for (k = 0; k < 8; k++) {
      b_obj->inputVarSize1[k] = (uint32_T)value[k];
    }

    b_st.site = &fb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
  }

  st.site = &fb_emlrtRSI;
  st.site = &fb_emlrtRSI;
  st.site = &fb_emlrtRSI;
  b_st.site = &fb_emlrtRSI;
  b_st.site = &fb_emlrtRSI;
  st.site = &fb_emlrtRSI;
  st.site = &fb_emlrtRSI;
  b_obj = obj;
  anyInputSizeChanged = FALSE;
  k = 0;
  exitg1 = FALSE;
  while ((exitg1 == FALSE) && (k < 8)) {
    if (b_obj->inputVarSize1[k] != (uint32_T)iv48[k]) {
      anyInputSizeChanged = TRUE;
      b_st.site = &fb_emlrtRSI;
      for (k = 0; k < 8; k++) {
        b_obj->inputVarSize1[k] = (uint32_T)value[k];
      }

      exitg1 = TRUE;
    } else {
      k++;
    }
  }

  if (anyInputSizeChanged) {
    st.site = &fb_emlrtRSI;
    st.site = &fb_emlrtRSI;
  }

  st.site = &fb_emlrtRSI;
  b_st.site = &fb_emlrtRSI;
  b_st.site = &fb_emlrtRSI;
  st.site = &fb_emlrtRSI;
  st.site = &fb_emlrtRSI;
  st.site = &fb_emlrtRSI;
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

void d_SystemCore_step(const emlrtStack *sp, OFDMModulator_1 *obj, const creal_T
  varargin_1[576], const real_T varargin_2[48], creal_T varargout_1[960])
{
  const mxArray *y;
  static const int32_T iv52[2] = { 1, 45 };

  const mxArray *m8;
  char_T cv60[45];
  int32_T i;
  static const char_T cv61[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C',
    'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv53[2] = { 1, 4 };

  char_T cv62[4];
  static const char_T cv63[4] = { 's', 't', 'e', 'p' };

  OFDMModulator_1 *b_obj;
  const mxArray *c_y;
  static const int32_T iv54[2] = { 1, 51 };

  char_T cv64[51];
  static const char_T cv65[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l',
    'e', 'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *d_y;
  static const int32_T iv55[2] = { 1, 5 };

  char_T cv66[5];
  static const char_T cv67[5] = { 's', 'e', 't', 'u', 'p' };

  real_T ii_data[768];
  int32_T j;
  int32_T iy;
  static const int8_T iv56[11] = { 0, 1, 2, 3, 4, 5, 59, 60, 61, 62, 63 };

  static const int16_T iv57[48] = { 11, 25, 39, 53, 75, 89, 103, 117, 139, 153,
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
    m8 = mxCreateCharArray(2, iv52);
    for (i = 0; i < 45; i++) {
      cv60[i] = cv61[i];
    }

    emlrtInitCharArrayR2013a(sp, 45, m8, cv60);
    emlrtAssign(&y, m8);
    b_y = NULL;
    m8 = mxCreateCharArray(2, iv53);
    for (i = 0; i < 4; i++) {
      cv62[i] = cv63[i];
    }

    emlrtInitCharArrayR2013a(sp, 4, m8, cv62);
    emlrtAssign(&b_y, m8);
    st.site = &fb_emlrtRSI;
    c_error(&st, message(&st, y, b_y, &emlrtMCI), &emlrtMCI);
  }

  if (!obj->isInitialized) {
    st.site = &fb_emlrtRSI;
    b_obj = obj;
    if (!b_obj->isInitialized) {
    } else {
      c_y = NULL;
      m8 = mxCreateCharArray(2, iv54);
      for (i = 0; i < 51; i++) {
        cv64[i] = cv65[i];
      }

      emlrtInitCharArrayR2013a(&st, 51, m8, cv64);
      emlrtAssign(&c_y, m8);
      d_y = NULL;
      m8 = mxCreateCharArray(2, iv55);
      for (i = 0; i < 5; i++) {
        cv66[i] = cv67[i];
      }

      emlrtInitCharArrayR2013a(&st, 5, m8, cv66);
      emlrtAssign(&d_y, m8);
      b_st.site = &fb_emlrtRSI;
      c_error(&b_st, message(&b_st, c_y, d_y, &emlrtMCI), &emlrtMCI);
    }

    b_st.site = &fb_emlrtRSI;
    c_SystemProp_matlabCodegenSetAn(b_obj);
    b_st.site = &fb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
    SystemCore_validateProperties();
    b_st.site = &fb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
    for (j = 0; j < 768; j++) {
      ii_data[j] = 1.0;
    }

    d_SystemProp_matlabCodegenSetAn(b_obj, ii_data);
    for (j = 0; j < 768; j++) {
      ii_data[j] = b_obj->pFullGrid[j];
    }

    for (j = 0; j < 12; j++) {
      for (iy = 0; iy < 11; iy++) {
        ii_data[iv56[iy] + (j << 6)] = 0.0;
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
      ii_data[iv57[j]] = 2.0;
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
    b_st.site = &fb_emlrtRSI;
  }

  st.site = &fb_emlrtRSI;
  st.site = &fb_emlrtRSI;
  st.site = &fb_emlrtRSI;
  b_st.site = &fb_emlrtRSI;
  b_st.site = &fb_emlrtRSI;
  st.site = &fb_emlrtRSI;
  st.site = &fb_emlrtRSI;
  st.site = &fb_emlrtRSI;
  b_st.site = &fb_emlrtRSI;
  b_st.site = &fb_emlrtRSI;
  st.site = &fb_emlrtRSI;
  st.site = &fb_emlrtRSI;
  st.site = &fb_emlrtRSI;
  b_obj = obj;
  for (j = 0; j < 768; j++) {
    packedData[j].re = b_obj->pFullGrid[j];
    packedData[j].im = 0.0;
  }

  emxInit_int32_T(&st, &r1, 1, &j_emlrtRTEI, TRUE);
  j = r1->size[0];
  r1->size[0] = b_obj->pDataLinearIndices->size[0];
  emxEnsureCapacity(&st, (emxArray__common *)r1, j, (int32_T)sizeof(int32_T),
                    &j_emlrtRTEI);
  i2 = b_obj->pDataLinearIndices->size[0];
  for (j = 0; j < i2; j++) {
    temp_re = b_obj->pDataLinearIndices->data[j];
    iy = (int32_T)emlrtIntegerCheckFastR2012b(temp_re, &emlrtDCI, &st);
    r1->data[j] = emlrtDynamicBoundsCheckFastR2012b(iy, 1, 768, &d_emlrtBCI, &st);
  }

  j = r1->size[0];
  emlrtSizeEqCheck1DFastR2012b(j, 576, &c_emlrtECI, &st);
  i2 = r1->size[0];
  for (j = 0; j < i2; j++) {
    packedData[r1->data[j] - 1] = varargin_1[j];
  }

  emxFree_int32_T(&r1);
  for (j = 0; j < 48; j++) {
    packedData[iv57[j]].re = varargin_2[j];
    packedData[iv57[j]].im = 0.0;
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

void e_SystemCore_step(const emlrtStack *sp, commcodegen_CRCGenerator_6 *obj,
  const real_T varargin_1[560], real_T varargout_1[563])
{
  const mxArray *y;
  static const int32_T iv81[2] = { 1, 45 };

  const mxArray *m13;
  char_T cv87[45];
  int32_T i;
  static const char_T cv88[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C',
    'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv82[2] = { 1, 4 };

  char_T cv89[4];
  static const char_T cv90[4] = { 's', 't', 'e', 'p' };

  commcodegen_CRCGenerator_6 *b_obj;
  const mxArray *c_y;
  static const int32_T iv83[2] = { 1, 51 };

  char_T cv91[51];
  static const char_T cv92[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l',
    'e', 'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *d_y;
  static const int32_T iv84[2] = { 1, 5 };

  char_T cv93[5];
  static const char_T cv94[5] = { 's', 'e', 't', 'u', 'p' };

  int32_T k;
  static const int16_T value[8] = { 560, 1, 1, 1, 1, 1, 1, 1 };

  boolean_T anyInputSizeChanged;
  boolean_T exitg1;
  static const int16_T iv85[8] = { 560, 1, 1, 1, 1, 1, 1, 1 };

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
    m13 = mxCreateCharArray(2, iv81);
    for (i = 0; i < 45; i++) {
      cv87[i] = cv88[i];
    }

    emlrtInitCharArrayR2013a(sp, 45, m13, cv87);
    emlrtAssign(&y, m13);
    b_y = NULL;
    m13 = mxCreateCharArray(2, iv82);
    for (i = 0; i < 4; i++) {
      cv89[i] = cv90[i];
    }

    emlrtInitCharArrayR2013a(sp, 4, m13, cv89);
    emlrtAssign(&b_y, m13);
    st.site = &fb_emlrtRSI;
    c_error(&st, message(&st, y, b_y, &emlrtMCI), &emlrtMCI);
  }

  if (!obj->isInitialized) {
    st.site = &fb_emlrtRSI;
    b_obj = obj;
    if (!b_obj->isInitialized) {
    } else {
      c_y = NULL;
      m13 = mxCreateCharArray(2, iv83);
      for (i = 0; i < 51; i++) {
        cv91[i] = cv92[i];
      }

      emlrtInitCharArrayR2013a(&st, 51, m13, cv91);
      emlrtAssign(&c_y, m13);
      d_y = NULL;
      m13 = mxCreateCharArray(2, iv84);
      for (i = 0; i < 5; i++) {
        cv93[i] = cv94[i];
      }

      emlrtInitCharArrayR2013a(&st, 5, m13, cv93);
      emlrtAssign(&d_y, m13);
      b_st.site = &fb_emlrtRSI;
      c_error(&b_st, message(&b_st, c_y, d_y, &emlrtMCI), &emlrtMCI);
    }

    b_st.site = &fb_emlrtRSI;
    b_obj->isInitialized = TRUE;
    b_st.site = &fb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
    for (k = 0; k < 8; k++) {
      b_obj->inputVarSize1[k] = (uint32_T)value[k];
    }

    b_st.site = &fb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
  }

  st.site = &fb_emlrtRSI;
  st.site = &fb_emlrtRSI;
  st.site = &fb_emlrtRSI;
  b_st.site = &fb_emlrtRSI;
  b_st.site = &fb_emlrtRSI;
  st.site = &fb_emlrtRSI;
  st.site = &fb_emlrtRSI;
  b_obj = obj;
  anyInputSizeChanged = FALSE;
  k = 0;
  exitg1 = FALSE;
  while ((exitg1 == FALSE) && (k < 8)) {
    if (b_obj->inputVarSize1[k] != (uint32_T)iv85[k]) {
      anyInputSizeChanged = TRUE;
      b_st.site = &fb_emlrtRSI;
      for (k = 0; k < 8; k++) {
        b_obj->inputVarSize1[k] = (uint32_T)value[k];
      }

      exitg1 = TRUE;
    } else {
      k++;
    }
  }

  if (anyInputSizeChanged) {
    st.site = &fb_emlrtRSI;
    st.site = &fb_emlrtRSI;
  }

  st.site = &fb_emlrtRSI;
  b_st.site = &fb_emlrtRSI;
  b_st.site = &fb_emlrtRSI;
  st.site = &fb_emlrtRSI;
  st.site = &fb_emlrtRSI;
  st.site = &fb_emlrtRSI;
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

void f_SystemCore_step(const emlrtStack *sp, commcodegen_BPSKModulator_1 *obj,
  const real_T varargin_1[563], creal_T varargout_1[563])
{
  const mxArray *y;
  static const int32_T iv86[2] = { 1, 45 };

  const mxArray *m14;
  char_T cv95[45];
  int32_T i;
  static const char_T cv96[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C',
    'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv87[2] = { 1, 4 };

  char_T cv97[4];
  static const char_T cv98[4] = { 's', 't', 'e', 'p' };

  commcodegen_BPSKModulator_1 *b_obj;
  const mxArray *c_y;
  static const int32_T iv88[2] = { 1, 51 };

  char_T cv99[51];
  static const char_T cv100[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l',
    'e', 'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *d_y;
  static const int32_T iv89[2] = { 1, 5 };

  char_T cv101[5];
  static const char_T cv102[5] = { 's', 'e', 't', 'u', 'p' };

  static const int16_T value[8] = { 563, 1, 1, 1, 1, 1, 1, 1 };

  boolean_T anyInputSizeChanged;
  boolean_T exitg1;
  static const int16_T iv90[8] = { 563, 1, 1, 1, 1, 1, 1, 1 };

  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (!obj->isReleased) {
  } else {
    y = NULL;
    m14 = mxCreateCharArray(2, iv86);
    for (i = 0; i < 45; i++) {
      cv95[i] = cv96[i];
    }

    emlrtInitCharArrayR2013a(sp, 45, m14, cv95);
    emlrtAssign(&y, m14);
    b_y = NULL;
    m14 = mxCreateCharArray(2, iv87);
    for (i = 0; i < 4; i++) {
      cv97[i] = cv98[i];
    }

    emlrtInitCharArrayR2013a(sp, 4, m14, cv97);
    emlrtAssign(&b_y, m14);
    st.site = &fb_emlrtRSI;
    c_error(&st, message(&st, y, b_y, &emlrtMCI), &emlrtMCI);
  }

  if (!obj->isInitialized) {
    st.site = &fb_emlrtRSI;
    b_obj = obj;
    if (!b_obj->isInitialized) {
    } else {
      c_y = NULL;
      m14 = mxCreateCharArray(2, iv88);
      for (i = 0; i < 51; i++) {
        cv99[i] = cv100[i];
      }

      emlrtInitCharArrayR2013a(&st, 51, m14, cv99);
      emlrtAssign(&c_y, m14);
      d_y = NULL;
      m14 = mxCreateCharArray(2, iv89);
      for (i = 0; i < 5; i++) {
        cv101[i] = cv102[i];
      }

      emlrtInitCharArrayR2013a(&st, 5, m14, cv101);
      emlrtAssign(&d_y, m14);
      b_st.site = &fb_emlrtRSI;
      c_error(&b_st, message(&b_st, c_y, d_y, &emlrtMCI), &emlrtMCI);
    }

    b_st.site = &fb_emlrtRSI;
    b_obj->isInitialized = TRUE;
    b_st.site = &fb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
    for (i = 0; i < 8; i++) {
      b_obj->inputVarSize1[i] = (uint32_T)value[i];
    }

    b_st.site = &fb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
  }

  st.site = &fb_emlrtRSI;
  st.site = &fb_emlrtRSI;
  st.site = &fb_emlrtRSI;
  b_st.site = &fb_emlrtRSI;
  b_st.site = &fb_emlrtRSI;
  st.site = &fb_emlrtRSI;
  st.site = &fb_emlrtRSI;
  b_obj = obj;
  anyInputSizeChanged = FALSE;
  i = 0;
  exitg1 = FALSE;
  while ((exitg1 == FALSE) && (i < 8)) {
    if (b_obj->inputVarSize1[i] != (uint32_T)iv90[i]) {
      anyInputSizeChanged = TRUE;
      b_st.site = &fb_emlrtRSI;
      for (i = 0; i < 8; i++) {
        b_obj->inputVarSize1[i] = (uint32_T)value[i];
      }

      exitg1 = TRUE;
    } else {
      i++;
    }
  }

  if (anyInputSizeChanged) {
    st.site = &fb_emlrtRSI;
    st.site = &fb_emlrtRSI;
  }

  st.site = &fb_emlrtRSI;
  b_st.site = &fb_emlrtRSI;
  b_st.site = &fb_emlrtRSI;
  st.site = &fb_emlrtRSI;
  st.site = &fb_emlrtRSI;
  st.site = &fb_emlrtRSI;
  c_Nondirect_stepImpl(obj, varargin_1, varargout_1);
}

void g_SystemCore_step(testMACTransmitterStackData *SD, const emlrtStack *sp,
  comm_SDRuReceiver *obj, creal_T varargout_1[5120])
{
  const mxArray *y;
  static const int32_T iv103[2] = { 1, 45 };

  const mxArray *m16;
  char_T cv114[45];
  int32_T i;
  static const char_T cv115[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C',
    'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv104[2] = { 1, 4 };

  char_T cv116[4];
  static const char_T cv117[4] = { 's', 't', 'e', 'p' };

  comm_SDRuReceiver *b_obj;
  const mxArray *c_y;
  static const int32_T iv105[2] = { 1, 51 };

  char_T cv118[51];
  static const char_T cv119[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l',
    'e', 'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *d_y;
  static const int32_T iv106[2] = { 1, 5 };

  char_T cv120[5];
  static const char_T cv121[5] = { 's', 'e', 't', 'u', 'p' };

  int32_T errMsg_size[2];
  char_T errMsg_data[1024];
  UsrpErrorCapiEnumT deviceStatus;
  const mxArray *e_y;
  static const int32_T iv107[2] = { 1, 35 };

  char_T cv122[35];
  static const char_T cv123[35] = { 's', 'd', 'r', 'u', ':', 'r', 'e', 'p', 'o',
    'r', 't', 'S', 'D', 'R', 'u', 'S', 't', 'a', 't', 'u', 's', ':', 'N', 'o',
    't', 'C', 'o', 'm', 'p', 'a', 't', 'i', 'b', 'l', 'e' };

  const mxArray *f_y;
  static const int32_T iv108[2] = { 1, 12 };

  char_T cv124[12];
  static const char_T cv125[12] = { '1', '9', '2', '.', '1', '6', '8', '.', '1',
    '0', '.', '2' };

  const mxArray *g_y;
  static const int32_T iv109[2] = { 1, 43 };

  char_T cv126[43];
  static const char_T cv127[43] = { 'r', 'e', 't', 'u', 'r', 'n', 'e', 'd', ' ',
    'b', 'y', ' ', '\'', 'g', 'e', 't', 'S', 'D', 'R', 'u', 'D', 'r', 'i', 'v',
    'e', 'r', 'V', 'e', 'r', 's', 'i', 'o', 'n', '\'', ' ', 'f', 'u', 'n', 'c',
    't', 'i', 'o', 'n' };

  const mxArray *h_y;
  static const int32_T iv110[2] = { 1, 35 };

  static const char_T cv128[35] = { 's', 'd', 'r', 'u', ':', 'r', 'e', 'p', 'o',
    'r', 't', 'S', 'D', 'R', 'u', 'S', 't', 'a', 't', 'u', 's', ':', 'N', 'o',
    't', 'R', 'e', 's', 'p', 'o', 'n', 'd', 'i', 'n', 'g' };

  const mxArray *i_y;
  static const int32_T iv111[2] = { 1, 12 };

  const mxArray *j_y;
  static const int32_T iv112[2] = { 1, 28 };

  char_T cv129[28];
  static const char_T cv130[28] = { 's', 'd', 'r', 'u', ':', 'r', 'e', 'p', 'o',
    'r', 't', 'S', 'D', 'R', 'u', 'S', 't', 'a', 't', 'u', 's', ':', 'R', 'x',
    'B', 'u', 's', 'y' };

  const mxArray *k_y;
  static const int32_T iv113[2] = { 1, 12 };

  const mxArray *l_y;
  static const int32_T iv114[2] = { 1, 28 };

  static const char_T cv131[28] = { 's', 'd', 'r', 'u', ':', 'r', 'e', 'p', 'o',
    'r', 't', 'S', 'D', 'R', 'u', 'S', 't', 'a', 't', 'u', 's', ':', 'T', 'x',
    'B', 'u', 's', 'y' };

  const mxArray *m_y;
  static const int32_T iv115[2] = { 1, 12 };

  const mxArray *n_y;
  static const int32_T iv116[2] = { 1, 26 };

  char_T cv132[26];
  static const char_T cv133[26] = { 's', 'd', 'r', 'u', ':', 'r', 'e', 'p', 'o',
    'r', 't', 'S', 'D', 'R', 'u', 'S', 't', 'a', 't', 'u', 's', ':', 'B', 'u',
    's', 'y' };

  const mxArray *o_y;
  static const int32_T iv117[2] = { 1, 12 };

  const mxArray *p_y;
  static const int32_T iv118[2] = { 1, 35 };

  static const char_T cv134[35] = { 's', 'd', 'r', 'u', ':', 'r', 'e', 'p', 'o',
    'r', 't', 'S', 'D', 'R', 'u', 'S', 't', 'a', 't', 'u', 's', ':', 'U', 'n',
    'k', 'n', 'o', 'w', 'n', 'S', 't', 'a', 't', 'u', 's' };

  int32_T u_size[2];
  int32_T i16;
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
    m16 = mxCreateCharArray(2, iv103);
    for (i = 0; i < 45; i++) {
      cv114[i] = cv115[i];
    }

    emlrtInitCharArrayR2013a(sp, 45, m16, cv114);
    emlrtAssign(&y, m16);
    b_y = NULL;
    m16 = mxCreateCharArray(2, iv104);
    for (i = 0; i < 4; i++) {
      cv116[i] = cv117[i];
    }

    emlrtInitCharArrayR2013a(sp, 4, m16, cv116);
    emlrtAssign(&b_y, m16);
    st.site = &fb_emlrtRSI;
    c_error(&st, message(&st, y, b_y, &emlrtMCI), &emlrtMCI);
  }

  if (!obj->isInitialized) {
    st.site = &fb_emlrtRSI;
    b_obj = obj;
    if (!b_obj->isInitialized) {
    } else {
      c_y = NULL;
      m16 = mxCreateCharArray(2, iv105);
      for (i = 0; i < 51; i++) {
        cv118[i] = cv119[i];
      }

      emlrtInitCharArrayR2013a(&st, 51, m16, cv118);
      emlrtAssign(&c_y, m16);
      d_y = NULL;
      m16 = mxCreateCharArray(2, iv106);
      for (i = 0; i < 5; i++) {
        cv120[i] = cv121[i];
      }

      emlrtInitCharArrayR2013a(&st, 5, m16, cv120);
      emlrtAssign(&d_y, m16);
      b_st.site = &fb_emlrtRSI;
      c_error(&b_st, message(&b_st, c_y, d_y, &emlrtMCI), &emlrtMCI);
    }

    b_st.site = &fb_emlrtRSI;
    b_obj->isInitialized = TRUE;
    c_st.site = &gb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
    c_st.site = &fb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
    c_st.site = &fb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
    c_st.site = &fb_emlrtRSI;
    d_st.site = &fb_emlrtRSI;
    d_st.site = &fb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
    c_st.site = &fb_emlrtRSI;
    c_st.site = &fb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
    c_st.site = &ck_emlrtRSI;
    SDRuReceiver_setupImplLocal(&c_st, b_obj, &deviceStatus, errMsg_data,
      errMsg_size);
    if (deviceStatus == UsrpDriverSuccess) {
      c_st.site = &ck_emlrtRSI;
      d_st.site = &gb_emlrtRSI;
    } else {
      c_st.site = &ck_emlrtRSI;
      closeDataConnection(&c_st, b_obj->pDriverHandle);
      c_st.site = &ck_emlrtRSI;
      d_st.site = &gb_emlrtRSI;
    }

    c_st.site = &ck_emlrtRSI;

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
      d_st.site = &gn_emlrtRSI;
      if (!(deviceStatus == UsrpDriverNotCompatible)) {
      } else {
        e_y = NULL;
        m16 = mxCreateCharArray(2, iv107);
        for (i = 0; i < 35; i++) {
          cv122[i] = cv123[i];
        }

        emlrtInitCharArrayR2013a(&d_st, 35, m16, cv122);
        emlrtAssign(&e_y, m16);
        f_y = NULL;
        m16 = mxCreateCharArray(2, iv108);
        for (i = 0; i < 12; i++) {
          cv124[i] = cv125[i];
        }

        emlrtInitCharArrayR2013a(&d_st, 12, m16, cv124);
        emlrtAssign(&f_y, m16);
        g_y = NULL;
        m16 = mxCreateCharArray(2, iv109);
        for (i = 0; i < 43; i++) {
          cv126[i] = cv127[i];
        }

        emlrtInitCharArrayR2013a(&d_st, 43, m16, cv126);
        emlrtAssign(&g_y, m16);
        e_st.site = &lbb_emlrtRSI;
        c_error(&e_st, c_message(&e_st, e_y, f_y, g_y, &g_emlrtMCI), &g_emlrtMCI);
      }
      break;

     case UsrpDriverNotResponding:
      d_st.site = &en_emlrtRSI;
      if (!(deviceStatus == UsrpDriverNotResponding)) {
      } else {
        h_y = NULL;
        m16 = mxCreateCharArray(2, iv110);
        for (i = 0; i < 35; i++) {
          cv122[i] = cv128[i];
        }

        emlrtInitCharArrayR2013a(&d_st, 35, m16, cv122);
        emlrtAssign(&h_y, m16);
        i_y = NULL;
        m16 = mxCreateCharArray(2, iv111);
        for (i = 0; i < 12; i++) {
          cv124[i] = cv125[i];
        }

        emlrtInitCharArrayR2013a(&d_st, 12, m16, cv124);
        emlrtAssign(&i_y, m16);
        e_st.site = &lbb_emlrtRSI;
        c_error(&e_st, message(&e_st, h_y, i_y, &g_emlrtMCI), &g_emlrtMCI);
      }
      break;

     case UsrpDriverRxBusy:
      d_st.site = &cn_emlrtRSI;
      if (!(deviceStatus == UsrpDriverRxBusy)) {
      } else {
        j_y = NULL;
        m16 = mxCreateCharArray(2, iv112);
        for (i = 0; i < 28; i++) {
          cv129[i] = cv130[i];
        }

        emlrtInitCharArrayR2013a(&d_st, 28, m16, cv129);
        emlrtAssign(&j_y, m16);
        k_y = NULL;
        m16 = mxCreateCharArray(2, iv113);
        for (i = 0; i < 12; i++) {
          cv124[i] = cv125[i];
        }

        emlrtInitCharArrayR2013a(&d_st, 12, m16, cv124);
        emlrtAssign(&k_y, m16);
        e_st.site = &lbb_emlrtRSI;
        c_error(&e_st, message(&e_st, j_y, k_y, &g_emlrtMCI), &g_emlrtMCI);
      }
      break;

     case UsrpDriverTxBusy:
      d_st.site = &an_emlrtRSI;
      if (!(deviceStatus == UsrpDriverTxBusy)) {
      } else {
        l_y = NULL;
        m16 = mxCreateCharArray(2, iv114);
        for (i = 0; i < 28; i++) {
          cv129[i] = cv131[i];
        }

        emlrtInitCharArrayR2013a(&d_st, 28, m16, cv129);
        emlrtAssign(&l_y, m16);
        m_y = NULL;
        m16 = mxCreateCharArray(2, iv115);
        for (i = 0; i < 12; i++) {
          cv124[i] = cv125[i];
        }

        emlrtInitCharArrayR2013a(&d_st, 12, m16, cv124);
        emlrtAssign(&m_y, m16);
        e_st.site = &lbb_emlrtRSI;
        c_error(&e_st, message(&e_st, l_y, m_y, &g_emlrtMCI), &g_emlrtMCI);
      }
      break;

     case UsrpDriverBusy:
      d_st.site = &xm_emlrtRSI;
      if (!(deviceStatus == UsrpDriverBusy)) {
      } else {
        n_y = NULL;
        m16 = mxCreateCharArray(2, iv116);
        for (i = 0; i < 26; i++) {
          cv132[i] = cv133[i];
        }

        emlrtInitCharArrayR2013a(&d_st, 26, m16, cv132);
        emlrtAssign(&n_y, m16);
        o_y = NULL;
        m16 = mxCreateCharArray(2, iv117);
        for (i = 0; i < 12; i++) {
          cv124[i] = cv125[i];
        }

        emlrtInitCharArrayR2013a(&d_st, 12, m16, cv124);
        emlrtAssign(&o_y, m16);
        e_st.site = &lbb_emlrtRSI;
        c_error(&e_st, message(&e_st, n_y, o_y, &g_emlrtMCI), &g_emlrtMCI);
      }
      break;

     case UsrpDriverError:
      d_st.site = &vm_emlrtRSI;
      if (!(deviceStatus == UsrpDriverError)) {
      } else {
        p_y = NULL;
        m16 = mxCreateCharArray(2, iv118);
        for (i = 0; i < 35; i++) {
          cv122[i] = cv134[i];
        }

        emlrtInitCharArrayR2013a(&d_st, 35, m16, cv122);
        emlrtAssign(&p_y, m16);
        u_size[0] = 1;
        u_size[1] = errMsg_size[1];
        i = errMsg_size[0] * errMsg_size[1];
        for (i16 = 0; i16 < i; i16++) {
          u_data[i16] = errMsg_data[i16];
        }

        q_y = NULL;
        m16 = mxCreateCharArray(2, u_size);
        emlrtInitCharArrayR2013a(&d_st, u_size[1], m16, (char_T *)&u_data);
        emlrtAssign(&q_y, m16);
        e_st.site = &lbb_emlrtRSI;
        c_error(&e_st, message(&e_st, p_y, q_y, &g_emlrtMCI), &g_emlrtMCI);
      }
      break;
    }

    b_st.site = &fb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
    b_obj->TunablePropsChanged = FALSE;
    c_st.site = &gb_emlrtRSI;
  }

  st.site = &fb_emlrtRSI;
  st.site = &fb_emlrtRSI;
  b_obj = obj;
  if (b_obj->TunablePropsChanged) {
    b_st.site = &fb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
    b_obj->TunablePropsChanged = FALSE;
    c_st.site = &gb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
    c_st.site = &gb_emlrtRSI;
    for (i16 = 0; i16 < 4; i16++) {
      b_obj->tunablePropertyChanged[i16] = FALSE;
    }

    d_st.site = &gb_emlrtRSI;
  }

  st.site = &fb_emlrtRSI;
  b_st.site = &fb_emlrtRSI;
  b_st.site = &fb_emlrtRSI;
  st.site = &fb_emlrtRSI;
  st.site = &fb_emlrtRSI;
  st.site = &fb_emlrtRSI;
  b_st.site = &fb_emlrtRSI;
  b_st.site = &fb_emlrtRSI;
  st.site = &fb_emlrtRSI;
  st.site = &fb_emlrtRSI;
  st.site = &fb_emlrtRSI;
  SDRuReceiver_stepImpl(SD, &st, obj, varargout_1);
}

void h_SystemCore_step(const emlrtStack *sp, commcodegen_CRCGenerator_12 *obj,
  const real_T varargin_1[560], real_T varargout_1[563])
{
  const mxArray *y;
  static const int32_T iv149[2] = { 1, 45 };

  const mxArray *m27;
  char_T cv170[45];
  int32_T i;
  static const char_T cv171[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C',
    'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv150[2] = { 1, 4 };

  char_T cv172[4];
  static const char_T cv173[4] = { 's', 't', 'e', 'p' };

  commcodegen_CRCGenerator_12 *b_obj;
  const mxArray *c_y;
  static const int32_T iv151[2] = { 1, 51 };

  char_T cv174[51];
  static const char_T cv175[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l',
    'e', 'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *d_y;
  static const int32_T iv152[2] = { 1, 5 };

  char_T cv176[5];
  static const char_T cv177[5] = { 's', 'e', 't', 'u', 'p' };

  int32_T k;
  static const int16_T value[8] = { 560, 1, 1, 1, 1, 1, 1, 1 };

  boolean_T anyInputSizeChanged;
  boolean_T exitg1;
  static const int16_T iv153[8] = { 560, 1, 1, 1, 1, 1, 1, 1 };

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
    m27 = mxCreateCharArray(2, iv149);
    for (i = 0; i < 45; i++) {
      cv170[i] = cv171[i];
    }

    emlrtInitCharArrayR2013a(sp, 45, m27, cv170);
    emlrtAssign(&y, m27);
    b_y = NULL;
    m27 = mxCreateCharArray(2, iv150);
    for (i = 0; i < 4; i++) {
      cv172[i] = cv173[i];
    }

    emlrtInitCharArrayR2013a(sp, 4, m27, cv172);
    emlrtAssign(&b_y, m27);
    st.site = &fb_emlrtRSI;
    c_error(&st, message(&st, y, b_y, &emlrtMCI), &emlrtMCI);
  }

  if (!obj->isInitialized) {
    st.site = &fb_emlrtRSI;
    b_obj = obj;
    if (!b_obj->isInitialized) {
    } else {
      c_y = NULL;
      m27 = mxCreateCharArray(2, iv151);
      for (i = 0; i < 51; i++) {
        cv174[i] = cv175[i];
      }

      emlrtInitCharArrayR2013a(&st, 51, m27, cv174);
      emlrtAssign(&c_y, m27);
      d_y = NULL;
      m27 = mxCreateCharArray(2, iv152);
      for (i = 0; i < 5; i++) {
        cv176[i] = cv177[i];
      }

      emlrtInitCharArrayR2013a(&st, 5, m27, cv176);
      emlrtAssign(&d_y, m27);
      b_st.site = &fb_emlrtRSI;
      c_error(&b_st, message(&b_st, c_y, d_y, &emlrtMCI), &emlrtMCI);
    }

    b_st.site = &fb_emlrtRSI;
    b_obj->isInitialized = TRUE;
    b_st.site = &fb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
    for (k = 0; k < 8; k++) {
      b_obj->inputVarSize1[k] = (uint32_T)value[k];
    }

    b_st.site = &fb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
  }

  st.site = &fb_emlrtRSI;
  st.site = &fb_emlrtRSI;
  st.site = &fb_emlrtRSI;
  b_st.site = &fb_emlrtRSI;
  b_st.site = &fb_emlrtRSI;
  st.site = &fb_emlrtRSI;
  st.site = &fb_emlrtRSI;
  b_obj = obj;
  anyInputSizeChanged = FALSE;
  k = 0;
  exitg1 = FALSE;
  while ((exitg1 == FALSE) && (k < 8)) {
    if (b_obj->inputVarSize1[k] != (uint32_T)iv153[k]) {
      anyInputSizeChanged = TRUE;
      b_st.site = &fb_emlrtRSI;
      for (k = 0; k < 8; k++) {
        b_obj->inputVarSize1[k] = (uint32_T)value[k];
      }

      exitg1 = TRUE;
    } else {
      k++;
    }
  }

  if (anyInputSizeChanged) {
    st.site = &fb_emlrtRSI;
    st.site = &fb_emlrtRSI;
  }

  st.site = &fb_emlrtRSI;
  b_st.site = &fb_emlrtRSI;
  b_st.site = &fb_emlrtRSI;
  st.site = &fb_emlrtRSI;
  st.site = &fb_emlrtRSI;
  st.site = &fb_emlrtRSI;
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

void i_SystemCore_step(testMACTransmitterStackData *SD, const emlrtStack *sp,
  comm_SDRuTransmitter *obj, const creal_T varargin_1[38400])
{
  const mxArray *y;
  static const int32_T iv156[2] = { 1, 45 };

  const mxArray *m28;
  char_T cv178[45];
  int32_T i;
  static const char_T cv179[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C',
    'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv157[2] = { 1, 4 };

  char_T cv180[4];
  static const char_T cv181[4] = { 's', 't', 'e', 'p' };

  comm_SDRuTransmitter *b_obj;
  const mxArray *c_y;
  static const int32_T iv158[2] = { 1, 51 };

  char_T cv182[51];
  static const char_T cv183[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l',
    'e', 'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *d_y;
  static const int32_T iv159[2] = { 1, 5 };

  char_T cv184[5];
  static const char_T cv185[5] = { 's', 'e', 't', 'u', 'p' };

  static const uint16_T value[8] = { 38400U, 1U, 1U, 1U, 1U, 1U, 1U, 1U };

  int32_T errMsg_size[2];
  char_T errMsg_data[1024];
  UsrpErrorCapiEnumT deviceStatus;
  const mxArray *e_y;
  static const int32_T iv160[2] = { 1, 35 };

  char_T cv186[35];
  static const char_T cv187[35] = { 's', 'd', 'r', 'u', ':', 'r', 'e', 'p', 'o',
    'r', 't', 'S', 'D', 'R', 'u', 'S', 't', 'a', 't', 'u', 's', ':', 'N', 'o',
    't', 'C', 'o', 'm', 'p', 'a', 't', 'i', 'b', 'l', 'e' };

  const mxArray *f_y;
  static const int32_T iv161[2] = { 1, 12 };

  char_T cv188[12];
  static const char_T cv189[12] = { '1', '9', '2', '.', '1', '6', '8', '.', '1',
    '0', '.', '2' };

  const mxArray *g_y;
  static const int32_T iv162[2] = { 1, 43 };

  char_T cv190[43];
  static const char_T cv191[43] = { 'r', 'e', 't', 'u', 'r', 'n', 'e', 'd', ' ',
    'b', 'y', ' ', '\'', 'g', 'e', 't', 'S', 'D', 'R', 'u', 'D', 'r', 'i', 'v',
    'e', 'r', 'V', 'e', 'r', 's', 'i', 'o', 'n', '\'', ' ', 'f', 'u', 'n', 'c',
    't', 'i', 'o', 'n' };

  const mxArray *h_y;
  static const int32_T iv163[2] = { 1, 35 };

  static const char_T cv192[35] = { 's', 'd', 'r', 'u', ':', 'r', 'e', 'p', 'o',
    'r', 't', 'S', 'D', 'R', 'u', 'S', 't', 'a', 't', 'u', 's', ':', 'N', 'o',
    't', 'R', 'e', 's', 'p', 'o', 'n', 'd', 'i', 'n', 'g' };

  const mxArray *i_y;
  static const int32_T iv164[2] = { 1, 12 };

  const mxArray *j_y;
  static const int32_T iv165[2] = { 1, 28 };

  char_T cv193[28];
  static const char_T cv194[28] = { 's', 'd', 'r', 'u', ':', 'r', 'e', 'p', 'o',
    'r', 't', 'S', 'D', 'R', 'u', 'S', 't', 'a', 't', 'u', 's', ':', 'R', 'x',
    'B', 'u', 's', 'y' };

  const mxArray *k_y;
  static const int32_T iv166[2] = { 1, 12 };

  const mxArray *l_y;
  static const int32_T iv167[2] = { 1, 28 };

  static const char_T cv195[28] = { 's', 'd', 'r', 'u', ':', 'r', 'e', 'p', 'o',
    'r', 't', 'S', 'D', 'R', 'u', 'S', 't', 'a', 't', 'u', 's', ':', 'T', 'x',
    'B', 'u', 's', 'y' };

  const mxArray *m_y;
  static const int32_T iv168[2] = { 1, 12 };

  const mxArray *n_y;
  static const int32_T iv169[2] = { 1, 26 };

  char_T cv196[26];
  static const char_T cv197[26] = { 's', 'd', 'r', 'u', ':', 'r', 'e', 'p', 'o',
    'r', 't', 'S', 'D', 'R', 'u', 'S', 't', 'a', 't', 'u', 's', ':', 'B', 'u',
    's', 'y' };

  const mxArray *o_y;
  static const int32_T iv170[2] = { 1, 12 };

  const mxArray *p_y;
  static const int32_T iv171[2] = { 1, 35 };

  static const char_T cv198[35] = { 's', 'd', 'r', 'u', ':', 'r', 'e', 'p', 'o',
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
    m28 = mxCreateCharArray(2, iv156);
    for (i = 0; i < 45; i++) {
      cv178[i] = cv179[i];
    }

    emlrtInitCharArrayR2013a(sp, 45, m28, cv178);
    emlrtAssign(&y, m28);
    b_y = NULL;
    m28 = mxCreateCharArray(2, iv157);
    for (i = 0; i < 4; i++) {
      cv180[i] = cv181[i];
    }

    emlrtInitCharArrayR2013a(sp, 4, m28, cv180);
    emlrtAssign(&b_y, m28);
    st.site = &fb_emlrtRSI;
    c_error(&st, message(&st, y, b_y, &emlrtMCI), &emlrtMCI);
  }

  if (!obj->isInitialized) {
    st.site = &fb_emlrtRSI;
    b_obj = obj;
    if (!b_obj->isInitialized) {
    } else {
      c_y = NULL;
      m28 = mxCreateCharArray(2, iv158);
      for (i = 0; i < 51; i++) {
        cv182[i] = cv183[i];
      }

      emlrtInitCharArrayR2013a(&st, 51, m28, cv182);
      emlrtAssign(&c_y, m28);
      d_y = NULL;
      m28 = mxCreateCharArray(2, iv159);
      for (i = 0; i < 5; i++) {
        cv184[i] = cv185[i];
      }

      emlrtInitCharArrayR2013a(&st, 5, m28, cv184);
      emlrtAssign(&d_y, m28);
      b_st.site = &fb_emlrtRSI;
      c_error(&b_st, message(&b_st, c_y, d_y, &emlrtMCI), &emlrtMCI);
    }

    b_st.site = &fb_emlrtRSI;
    b_obj->isInitialized = TRUE;
    c_st.site = &gb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
    c_st.site = &fb_emlrtRSI;
    d_st.site = &gb_emlrtRSI;
    c_st.site = &fb_emlrtRSI;
    d_st.site = &gb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
    c_st.site = &fb_emlrtRSI;
    c_st.site = &fb_emlrtRSI;
    c_st.site = &fb_emlrtRSI;
    d_st.site = &gb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
    c_st.site = &fb_emlrtRSI;
    for (i = 0; i < 8; i++) {
      b_obj->inputVarSize1[i] = value[i];
    }

    d_st.site = &gb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
    c_st.site = &fb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
    c_st.site = &fb_emlrtRSI;
    d_st.site = &fb_emlrtRSI;
    d_st.site = &fb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
    c_st.site = &fb_emlrtRSI;
    c_st.site = &fb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
    c_st.site = &ck_emlrtRSI;
    SDRuTransmitter_setupImplLocal(&c_st, b_obj, &deviceStatus, errMsg_data,
      errMsg_size);
    if (deviceStatus == UsrpDriverSuccess) {
      c_st.site = &ck_emlrtRSI;
      d_st.site = &gb_emlrtRSI;
    } else {
      c_st.site = &ck_emlrtRSI;
      closeDataConnection(&c_st, b_obj->pDriverHandle);
      c_st.site = &ck_emlrtRSI;
      d_st.site = &gb_emlrtRSI;
    }

    c_st.site = &ck_emlrtRSI;

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
      d_st.site = &gn_emlrtRSI;
      if (!(deviceStatus == UsrpDriverNotCompatible)) {
      } else {
        e_y = NULL;
        m28 = mxCreateCharArray(2, iv160);
        for (i = 0; i < 35; i++) {
          cv186[i] = cv187[i];
        }

        emlrtInitCharArrayR2013a(&d_st, 35, m28, cv186);
        emlrtAssign(&e_y, m28);
        f_y = NULL;
        m28 = mxCreateCharArray(2, iv161);
        for (i = 0; i < 12; i++) {
          cv188[i] = cv189[i];
        }

        emlrtInitCharArrayR2013a(&d_st, 12, m28, cv188);
        emlrtAssign(&f_y, m28);
        g_y = NULL;
        m28 = mxCreateCharArray(2, iv162);
        for (i = 0; i < 43; i++) {
          cv190[i] = cv191[i];
        }

        emlrtInitCharArrayR2013a(&d_st, 43, m28, cv190);
        emlrtAssign(&g_y, m28);
        e_st.site = &lbb_emlrtRSI;
        c_error(&e_st, c_message(&e_st, e_y, f_y, g_y, &g_emlrtMCI), &g_emlrtMCI);
      }
      break;

     case UsrpDriverNotResponding:
      d_st.site = &en_emlrtRSI;
      if (!(deviceStatus == UsrpDriverNotResponding)) {
      } else {
        h_y = NULL;
        m28 = mxCreateCharArray(2, iv163);
        for (i = 0; i < 35; i++) {
          cv186[i] = cv192[i];
        }

        emlrtInitCharArrayR2013a(&d_st, 35, m28, cv186);
        emlrtAssign(&h_y, m28);
        i_y = NULL;
        m28 = mxCreateCharArray(2, iv164);
        for (i = 0; i < 12; i++) {
          cv188[i] = cv189[i];
        }

        emlrtInitCharArrayR2013a(&d_st, 12, m28, cv188);
        emlrtAssign(&i_y, m28);
        e_st.site = &lbb_emlrtRSI;
        c_error(&e_st, message(&e_st, h_y, i_y, &g_emlrtMCI), &g_emlrtMCI);
      }
      break;

     case UsrpDriverRxBusy:
      d_st.site = &cn_emlrtRSI;
      if (!(deviceStatus == UsrpDriverRxBusy)) {
      } else {
        j_y = NULL;
        m28 = mxCreateCharArray(2, iv165);
        for (i = 0; i < 28; i++) {
          cv193[i] = cv194[i];
        }

        emlrtInitCharArrayR2013a(&d_st, 28, m28, cv193);
        emlrtAssign(&j_y, m28);
        k_y = NULL;
        m28 = mxCreateCharArray(2, iv166);
        for (i = 0; i < 12; i++) {
          cv188[i] = cv189[i];
        }

        emlrtInitCharArrayR2013a(&d_st, 12, m28, cv188);
        emlrtAssign(&k_y, m28);
        e_st.site = &lbb_emlrtRSI;
        c_error(&e_st, message(&e_st, j_y, k_y, &g_emlrtMCI), &g_emlrtMCI);
      }
      break;

     case UsrpDriverTxBusy:
      d_st.site = &an_emlrtRSI;
      if (!(deviceStatus == UsrpDriverTxBusy)) {
      } else {
        l_y = NULL;
        m28 = mxCreateCharArray(2, iv167);
        for (i = 0; i < 28; i++) {
          cv193[i] = cv195[i];
        }

        emlrtInitCharArrayR2013a(&d_st, 28, m28, cv193);
        emlrtAssign(&l_y, m28);
        m_y = NULL;
        m28 = mxCreateCharArray(2, iv168);
        for (i = 0; i < 12; i++) {
          cv188[i] = cv189[i];
        }

        emlrtInitCharArrayR2013a(&d_st, 12, m28, cv188);
        emlrtAssign(&m_y, m28);
        e_st.site = &lbb_emlrtRSI;
        c_error(&e_st, message(&e_st, l_y, m_y, &g_emlrtMCI), &g_emlrtMCI);
      }
      break;

     case UsrpDriverBusy:
      d_st.site = &xm_emlrtRSI;
      if (!(deviceStatus == UsrpDriverBusy)) {
      } else {
        n_y = NULL;
        m28 = mxCreateCharArray(2, iv169);
        for (i = 0; i < 26; i++) {
          cv196[i] = cv197[i];
        }

        emlrtInitCharArrayR2013a(&d_st, 26, m28, cv196);
        emlrtAssign(&n_y, m28);
        o_y = NULL;
        m28 = mxCreateCharArray(2, iv170);
        for (i = 0; i < 12; i++) {
          cv188[i] = cv189[i];
        }

        emlrtInitCharArrayR2013a(&d_st, 12, m28, cv188);
        emlrtAssign(&o_y, m28);
        e_st.site = &lbb_emlrtRSI;
        c_error(&e_st, message(&e_st, n_y, o_y, &g_emlrtMCI), &g_emlrtMCI);
      }
      break;

     case UsrpDriverError:
      d_st.site = &vm_emlrtRSI;
      if (!(deviceStatus == UsrpDriverError)) {
      } else {
        p_y = NULL;
        m28 = mxCreateCharArray(2, iv171);
        for (i = 0; i < 35; i++) {
          cv186[i] = cv198[i];
        }

        emlrtInitCharArrayR2013a(&d_st, 35, m28, cv186);
        emlrtAssign(&p_y, m28);
        u_size[0] = 1;
        u_size[1] = errMsg_size[1];
        loop_ub = errMsg_size[0] * errMsg_size[1];
        for (i = 0; i < loop_ub; i++) {
          u_data[i] = errMsg_data[i];
        }

        q_y = NULL;
        m28 = mxCreateCharArray(2, u_size);
        emlrtInitCharArrayR2013a(&d_st, u_size[1], m28, (char_T *)&u_data);
        emlrtAssign(&q_y, m28);
        e_st.site = &lbb_emlrtRSI;
        c_error(&e_st, message(&e_st, p_y, q_y, &g_emlrtMCI), &g_emlrtMCI);
      }
      break;
    }

    b_st.site = &fb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
    b_obj->TunablePropsChanged = FALSE;
    c_st.site = &gb_emlrtRSI;
  }

  st.site = &fb_emlrtRSI;
  st.site = &fb_emlrtRSI;
  b_obj = obj;
  if (b_obj->TunablePropsChanged) {
    b_st.site = &fb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
    b_obj->TunablePropsChanged = FALSE;
    c_st.site = &gb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
    c_st.site = &gb_emlrtRSI;
    for (i = 0; i < 4; i++) {
      b_obj->tunablePropertyChanged[i] = FALSE;
    }

    d_st.site = &gb_emlrtRSI;
  }

  st.site = &fb_emlrtRSI;
  b_st.site = &fb_emlrtRSI;
  b_st.site = &fb_emlrtRSI;
  st.site = &fb_emlrtRSI;
  st.site = &fb_emlrtRSI;
  b_obj = obj;
  anyInputSizeChanged = FALSE;
  i = 0;
  exitg1 = FALSE;
  while ((exitg1 == FALSE) && (i < 8)) {
    if (b_obj->inputVarSize1[i] != uv0[i]) {
      anyInputSizeChanged = TRUE;
      b_st.site = &fb_emlrtRSI;
      for (i = 0; i < 8; i++) {
        b_obj->inputVarSize1[i] = value[i];
      }

      c_st.site = &gb_emlrtRSI;
      exitg1 = TRUE;
    } else {
      i++;
    }
  }

  if (anyInputSizeChanged) {
    st.site = &fb_emlrtRSI;
    st.site = &fb_emlrtRSI;
  }

  st.site = &fb_emlrtRSI;
  b_st.site = &fb_emlrtRSI;
  b_st.site = &fb_emlrtRSI;
  st.site = &fb_emlrtRSI;
  st.site = &fb_emlrtRSI;
  st.site = &fb_emlrtRSI;
  SDRuTransmitter_stepImpl(SD, &st, obj, varargin_1);
}

void j_SystemCore_step(testMACTransmitterStackData *SD, const emlrtStack *sp,
  comm_SDRuReceiver *obj)
{
  const mxArray *y;
  static const int32_T iv175[2] = { 1, 45 };

  const mxArray *m32;
  char_T cv205[45];
  int32_T i;
  static const char_T cv206[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C',
    'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv176[2] = { 1, 4 };

  char_T cv207[4];
  static const char_T cv208[4] = { 's', 't', 'e', 'p' };

  comm_SDRuReceiver *b_obj;
  const mxArray *c_y;
  static const int32_T iv177[2] = { 1, 51 };

  char_T cv209[51];
  static const char_T cv210[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l',
    'e', 'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *d_y;
  static const int32_T iv178[2] = { 1, 5 };

  char_T cv211[5];
  static const char_T cv212[5] = { 's', 'e', 't', 'u', 'p' };

  int32_T errMsg_size[2];
  char_T errMsg_data[1024];
  UsrpErrorCapiEnumT deviceStatus;
  const mxArray *e_y;
  static const int32_T iv179[2] = { 1, 35 };

  char_T cv213[35];
  static const char_T cv214[35] = { 's', 'd', 'r', 'u', ':', 'r', 'e', 'p', 'o',
    'r', 't', 'S', 'D', 'R', 'u', 'S', 't', 'a', 't', 'u', 's', ':', 'N', 'o',
    't', 'C', 'o', 'm', 'p', 'a', 't', 'i', 'b', 'l', 'e' };

  const mxArray *f_y;
  static const int32_T iv180[2] = { 1, 12 };

  char_T cv215[12];
  static const char_T cv216[12] = { '1', '9', '2', '.', '1', '6', '8', '.', '1',
    '0', '.', '2' };

  const mxArray *g_y;
  static const int32_T iv181[2] = { 1, 43 };

  char_T cv217[43];
  static const char_T cv218[43] = { 'r', 'e', 't', 'u', 'r', 'n', 'e', 'd', ' ',
    'b', 'y', ' ', '\'', 'g', 'e', 't', 'S', 'D', 'R', 'u', 'D', 'r', 'i', 'v',
    'e', 'r', 'V', 'e', 'r', 's', 'i', 'o', 'n', '\'', ' ', 'f', 'u', 'n', 'c',
    't', 'i', 'o', 'n' };

  const mxArray *h_y;
  static const int32_T iv182[2] = { 1, 35 };

  static const char_T cv219[35] = { 's', 'd', 'r', 'u', ':', 'r', 'e', 'p', 'o',
    'r', 't', 'S', 'D', 'R', 'u', 'S', 't', 'a', 't', 'u', 's', ':', 'N', 'o',
    't', 'R', 'e', 's', 'p', 'o', 'n', 'd', 'i', 'n', 'g' };

  const mxArray *i_y;
  static const int32_T iv183[2] = { 1, 12 };

  const mxArray *j_y;
  static const int32_T iv184[2] = { 1, 28 };

  char_T cv220[28];
  static const char_T cv221[28] = { 's', 'd', 'r', 'u', ':', 'r', 'e', 'p', 'o',
    'r', 't', 'S', 'D', 'R', 'u', 'S', 't', 'a', 't', 'u', 's', ':', 'R', 'x',
    'B', 'u', 's', 'y' };

  const mxArray *k_y;
  static const int32_T iv185[2] = { 1, 12 };

  const mxArray *l_y;
  static const int32_T iv186[2] = { 1, 28 };

  static const char_T cv222[28] = { 's', 'd', 'r', 'u', ':', 'r', 'e', 'p', 'o',
    'r', 't', 'S', 'D', 'R', 'u', 'S', 't', 'a', 't', 'u', 's', ':', 'T', 'x',
    'B', 'u', 's', 'y' };

  const mxArray *m_y;
  static const int32_T iv187[2] = { 1, 12 };

  const mxArray *n_y;
  static const int32_T iv188[2] = { 1, 26 };

  char_T cv223[26];
  static const char_T cv224[26] = { 's', 'd', 'r', 'u', ':', 'r', 'e', 'p', 'o',
    'r', 't', 'S', 'D', 'R', 'u', 'S', 't', 'a', 't', 'u', 's', ':', 'B', 'u',
    's', 'y' };

  const mxArray *o_y;
  static const int32_T iv189[2] = { 1, 12 };

  const mxArray *p_y;
  static const int32_T iv190[2] = { 1, 35 };

  static const char_T cv225[35] = { 's', 'd', 'r', 'u', ':', 'r', 'e', 'p', 'o',
    'r', 't', 'S', 'D', 'R', 'u', 'S', 't', 'a', 't', 'u', 's', ':', 'U', 'n',
    'k', 'n', 'o', 'w', 'n', 'S', 't', 'a', 't', 'u', 's' };

  int32_T u_size[2];
  int32_T i21;
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
    m32 = mxCreateCharArray(2, iv175);
    for (i = 0; i < 45; i++) {
      cv205[i] = cv206[i];
    }

    emlrtInitCharArrayR2013a(sp, 45, m32, cv205);
    emlrtAssign(&y, m32);
    b_y = NULL;
    m32 = mxCreateCharArray(2, iv176);
    for (i = 0; i < 4; i++) {
      cv207[i] = cv208[i];
    }

    emlrtInitCharArrayR2013a(sp, 4, m32, cv207);
    emlrtAssign(&b_y, m32);
    st.site = &fb_emlrtRSI;
    c_error(&st, message(&st, y, b_y, &emlrtMCI), &emlrtMCI);
  }

  if (!obj->isInitialized) {
    st.site = &fb_emlrtRSI;
    b_obj = obj;
    if (!b_obj->isInitialized) {
    } else {
      c_y = NULL;
      m32 = mxCreateCharArray(2, iv177);
      for (i = 0; i < 51; i++) {
        cv209[i] = cv210[i];
      }

      emlrtInitCharArrayR2013a(&st, 51, m32, cv209);
      emlrtAssign(&c_y, m32);
      d_y = NULL;
      m32 = mxCreateCharArray(2, iv178);
      for (i = 0; i < 5; i++) {
        cv211[i] = cv212[i];
      }

      emlrtInitCharArrayR2013a(&st, 5, m32, cv211);
      emlrtAssign(&d_y, m32);
      b_st.site = &fb_emlrtRSI;
      c_error(&b_st, message(&b_st, c_y, d_y, &emlrtMCI), &emlrtMCI);
    }

    b_st.site = &fb_emlrtRSI;
    b_obj->isInitialized = TRUE;
    c_st.site = &gb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
    c_st.site = &fb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
    c_st.site = &fb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
    c_st.site = &fb_emlrtRSI;
    d_st.site = &fb_emlrtRSI;
    d_st.site = &fb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
    c_st.site = &fb_emlrtRSI;
    c_st.site = &fb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
    c_st.site = &ck_emlrtRSI;
    SDRuReceiver_setupImplLocal(&c_st, b_obj, &deviceStatus, errMsg_data,
      errMsg_size);
    if (deviceStatus == UsrpDriverSuccess) {
      c_st.site = &ck_emlrtRSI;
      d_st.site = &gb_emlrtRSI;
    } else {
      c_st.site = &ck_emlrtRSI;
      closeDataConnection(&c_st, b_obj->pDriverHandle);
      c_st.site = &ck_emlrtRSI;
      d_st.site = &gb_emlrtRSI;
    }

    c_st.site = &ck_emlrtRSI;

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
      d_st.site = &gn_emlrtRSI;
      if (!(deviceStatus == UsrpDriverNotCompatible)) {
      } else {
        e_y = NULL;
        m32 = mxCreateCharArray(2, iv179);
        for (i = 0; i < 35; i++) {
          cv213[i] = cv214[i];
        }

        emlrtInitCharArrayR2013a(&d_st, 35, m32, cv213);
        emlrtAssign(&e_y, m32);
        f_y = NULL;
        m32 = mxCreateCharArray(2, iv180);
        for (i = 0; i < 12; i++) {
          cv215[i] = cv216[i];
        }

        emlrtInitCharArrayR2013a(&d_st, 12, m32, cv215);
        emlrtAssign(&f_y, m32);
        g_y = NULL;
        m32 = mxCreateCharArray(2, iv181);
        for (i = 0; i < 43; i++) {
          cv217[i] = cv218[i];
        }

        emlrtInitCharArrayR2013a(&d_st, 43, m32, cv217);
        emlrtAssign(&g_y, m32);
        e_st.site = &lbb_emlrtRSI;
        c_error(&e_st, c_message(&e_st, e_y, f_y, g_y, &g_emlrtMCI), &g_emlrtMCI);
      }
      break;

     case UsrpDriverNotResponding:
      d_st.site = &en_emlrtRSI;
      if (!(deviceStatus == UsrpDriverNotResponding)) {
      } else {
        h_y = NULL;
        m32 = mxCreateCharArray(2, iv182);
        for (i = 0; i < 35; i++) {
          cv213[i] = cv219[i];
        }

        emlrtInitCharArrayR2013a(&d_st, 35, m32, cv213);
        emlrtAssign(&h_y, m32);
        i_y = NULL;
        m32 = mxCreateCharArray(2, iv183);
        for (i = 0; i < 12; i++) {
          cv215[i] = cv216[i];
        }

        emlrtInitCharArrayR2013a(&d_st, 12, m32, cv215);
        emlrtAssign(&i_y, m32);
        e_st.site = &lbb_emlrtRSI;
        c_error(&e_st, message(&e_st, h_y, i_y, &g_emlrtMCI), &g_emlrtMCI);
      }
      break;

     case UsrpDriverRxBusy:
      d_st.site = &cn_emlrtRSI;
      if (!(deviceStatus == UsrpDriverRxBusy)) {
      } else {
        j_y = NULL;
        m32 = mxCreateCharArray(2, iv184);
        for (i = 0; i < 28; i++) {
          cv220[i] = cv221[i];
        }

        emlrtInitCharArrayR2013a(&d_st, 28, m32, cv220);
        emlrtAssign(&j_y, m32);
        k_y = NULL;
        m32 = mxCreateCharArray(2, iv185);
        for (i = 0; i < 12; i++) {
          cv215[i] = cv216[i];
        }

        emlrtInitCharArrayR2013a(&d_st, 12, m32, cv215);
        emlrtAssign(&k_y, m32);
        e_st.site = &lbb_emlrtRSI;
        c_error(&e_st, message(&e_st, j_y, k_y, &g_emlrtMCI), &g_emlrtMCI);
      }
      break;

     case UsrpDriverTxBusy:
      d_st.site = &an_emlrtRSI;
      if (!(deviceStatus == UsrpDriverTxBusy)) {
      } else {
        l_y = NULL;
        m32 = mxCreateCharArray(2, iv186);
        for (i = 0; i < 28; i++) {
          cv220[i] = cv222[i];
        }

        emlrtInitCharArrayR2013a(&d_st, 28, m32, cv220);
        emlrtAssign(&l_y, m32);
        m_y = NULL;
        m32 = mxCreateCharArray(2, iv187);
        for (i = 0; i < 12; i++) {
          cv215[i] = cv216[i];
        }

        emlrtInitCharArrayR2013a(&d_st, 12, m32, cv215);
        emlrtAssign(&m_y, m32);
        e_st.site = &lbb_emlrtRSI;
        c_error(&e_st, message(&e_st, l_y, m_y, &g_emlrtMCI), &g_emlrtMCI);
      }
      break;

     case UsrpDriverBusy:
      d_st.site = &xm_emlrtRSI;
      if (!(deviceStatus == UsrpDriverBusy)) {
      } else {
        n_y = NULL;
        m32 = mxCreateCharArray(2, iv188);
        for (i = 0; i < 26; i++) {
          cv223[i] = cv224[i];
        }

        emlrtInitCharArrayR2013a(&d_st, 26, m32, cv223);
        emlrtAssign(&n_y, m32);
        o_y = NULL;
        m32 = mxCreateCharArray(2, iv189);
        for (i = 0; i < 12; i++) {
          cv215[i] = cv216[i];
        }

        emlrtInitCharArrayR2013a(&d_st, 12, m32, cv215);
        emlrtAssign(&o_y, m32);
        e_st.site = &lbb_emlrtRSI;
        c_error(&e_st, message(&e_st, n_y, o_y, &g_emlrtMCI), &g_emlrtMCI);
      }
      break;

     case UsrpDriverError:
      d_st.site = &vm_emlrtRSI;
      if (!(deviceStatus == UsrpDriverError)) {
      } else {
        p_y = NULL;
        m32 = mxCreateCharArray(2, iv190);
        for (i = 0; i < 35; i++) {
          cv213[i] = cv225[i];
        }

        emlrtInitCharArrayR2013a(&d_st, 35, m32, cv213);
        emlrtAssign(&p_y, m32);
        u_size[0] = 1;
        u_size[1] = errMsg_size[1];
        i = errMsg_size[0] * errMsg_size[1];
        for (i21 = 0; i21 < i; i21++) {
          u_data[i21] = errMsg_data[i21];
        }

        q_y = NULL;
        m32 = mxCreateCharArray(2, u_size);
        emlrtInitCharArrayR2013a(&d_st, u_size[1], m32, (char_T *)&u_data);
        emlrtAssign(&q_y, m32);
        e_st.site = &lbb_emlrtRSI;
        c_error(&e_st, message(&e_st, p_y, q_y, &g_emlrtMCI), &g_emlrtMCI);
      }
      break;
    }

    b_st.site = &fb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
    b_obj->TunablePropsChanged = FALSE;
    c_st.site = &gb_emlrtRSI;
  }

  st.site = &fb_emlrtRSI;
  st.site = &fb_emlrtRSI;
  b_obj = obj;
  if (b_obj->TunablePropsChanged) {
    b_st.site = &fb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
    b_obj->TunablePropsChanged = FALSE;
    c_st.site = &gb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
    c_st.site = &gb_emlrtRSI;
    for (i21 = 0; i21 < 4; i21++) {
      b_obj->tunablePropertyChanged[i21] = FALSE;
    }

    d_st.site = &gb_emlrtRSI;
  }

  st.site = &fb_emlrtRSI;
  b_st.site = &fb_emlrtRSI;
  b_st.site = &fb_emlrtRSI;
  st.site = &fb_emlrtRSI;
  st.site = &fb_emlrtRSI;
  st.site = &fb_emlrtRSI;
  b_st.site = &fb_emlrtRSI;
  b_st.site = &fb_emlrtRSI;
  st.site = &fb_emlrtRSI;
  st.site = &fb_emlrtRSI;
  st.site = &fb_emlrtRSI;
  b_SDRuReceiver_stepImpl(SD, &st, obj);
}

void k_SystemCore_step(const emlrtStack *sp, dspcodegen_FIRRateConverter *obj,
  const creal_T varargin_1[288], creal_T varargout_1[3456])
{
  const mxArray *y;
  static const int32_T iv230[2] = { 1, 45 };

  const mxArray *m41;
  char_T cv272[45];
  int32_T i;
  static const char_T cv273[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C',
    'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv231[2] = { 1, 4 };

  char_T cv274[4];
  static const char_T cv275[4] = { 's', 't', 'e', 'p' };

  dspcodegen_FIRRateConverter *b_obj;
  const mxArray *c_y;
  static const int32_T iv232[2] = { 1, 51 };

  char_T cv276[51];
  static const char_T cv277[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l',
    'e', 'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *d_y;
  static const int32_T iv233[2] = { 1, 5 };

  char_T cv278[5];
  static const char_T cv279[5] = { 's', 'e', 't', 'u', 'p' };

  static const int8_T value[8] = { 24, 12, 1, 1, 1, 1, 1, 1 };

  dsp_FIRRateConverter_10 *c_obj;
  boolean_T anyInputSizeChanged;
  boolean_T exitg1;
  static const int8_T iv234[8] = { 24, 12, 1, 1, 1, 1, 1, 1 };

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
    m41 = mxCreateCharArray(2, iv230);
    for (i = 0; i < 45; i++) {
      cv272[i] = cv273[i];
    }

    emlrtInitCharArrayR2013a(sp, 45, m41, cv272);
    emlrtAssign(&y, m41);
    b_y = NULL;
    m41 = mxCreateCharArray(2, iv231);
    for (i = 0; i < 4; i++) {
      cv274[i] = cv275[i];
    }

    emlrtInitCharArrayR2013a(sp, 4, m41, cv274);
    emlrtAssign(&b_y, m41);
    st.site = &fb_emlrtRSI;
    c_error(&st, message(&st, y, b_y, &emlrtMCI), &emlrtMCI);
  }

  if (!obj->isInitialized) {
    st.site = &fb_emlrtRSI;
    b_obj = obj;
    if (!b_obj->isInitialized) {
    } else {
      c_y = NULL;
      m41 = mxCreateCharArray(2, iv232);
      for (i = 0; i < 51; i++) {
        cv276[i] = cv277[i];
      }

      emlrtInitCharArrayR2013a(&st, 51, m41, cv276);
      emlrtAssign(&c_y, m41);
      d_y = NULL;
      m41 = mxCreateCharArray(2, iv233);
      for (i = 0; i < 5; i++) {
        cv278[i] = cv279[i];
      }

      emlrtInitCharArrayR2013a(&st, 5, m41, cv278);
      emlrtAssign(&d_y, m41);
      b_st.site = &fb_emlrtRSI;
      c_error(&b_st, message(&b_st, c_y, d_y, &emlrtMCI), &emlrtMCI);
    }

    b_st.site = &fb_emlrtRSI;
    b_obj->isInitialized = TRUE;
    c_st.site = &gb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
    c_st.site = &fb_emlrtRSI;
    c_st.site = &fb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
    c_st.site = &fb_emlrtRSI;
    c_st.site = &fb_emlrtRSI;
    c_st.site = &fb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
    c_st.site = &fb_emlrtRSI;
    for (i = 0; i < 8; i++) {
      b_obj->inputVarSize1[i] = (uint32_T)value[i];
    }

    b_st.site = &fb_emlrtRSI;
    c_st.site = &fb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
    c_st.site = &fb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
    c_st.site = &fb_emlrtRSI;
    c_st.site = &fb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
    c_st.site = &oab_emlrtRSI;
    c_obj = &b_obj->cSFunObject;
    if (!c_obj->S0_isInitialized) {
      c_obj->S0_isInitialized = TRUE;
      if (c_obj->S1_isReleased) {
        emlrtErrorWithMessageIdR2012b(&c_st, &bd_emlrtRTEI,
          "MATLAB:system:setupCalledWhenLockedReleasedCodegen", 0);
      }

      /* System object Initialization function: dsp.FIRRateConverter */
      c_obj->W1_InBufIdx = 0;
      for (i = 0; i < 252; i++) {
        c_obj->W0_InBuf[i].re = 0.0;
        c_obj->W0_InBuf[i].im = 0.0;
      }
    } else {
      emlrtErrorWithMessageIdR2012b(&c_st, &bd_emlrtRTEI,
        "MATLAB:system:setupCalledWhenLockedCodegen", 0);
    }

    c_st.site = &oab_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
    c_st.site = &oab_emlrtRSI;
    c_obj = &b_obj->cSFunObject;
    if (c_obj->S1_isReleased) {
      emlrtErrorWithMessageIdR2012b(&c_st, &ad_emlrtRTEI,
        "MATLAB:system:runtimeMethodCalledWhenReleasedCodegen", 0);
    }

    /* System object Initialization function: dsp.FIRRateConverter */
    c_obj->W1_InBufIdx = 0;
    for (i = 0; i < 252; i++) {
      c_obj->W0_InBuf[i].re = 0.0;
      c_obj->W0_InBuf[i].im = 0.0;
    }
  }

  st.site = &fb_emlrtRSI;
  st.site = &fb_emlrtRSI;
  st.site = &fb_emlrtRSI;
  b_st.site = &fb_emlrtRSI;
  b_st.site = &fb_emlrtRSI;
  c_st.site = &oab_emlrtRSI;
  st.site = &fb_emlrtRSI;
  st.site = &fb_emlrtRSI;
  b_obj = obj;
  anyInputSizeChanged = FALSE;
  i = 0;
  exitg1 = FALSE;
  while ((exitg1 == FALSE) && (i < 8)) {
    if (b_obj->inputVarSize1[i] != (uint32_T)iv234[i]) {
      anyInputSizeChanged = TRUE;
      b_st.site = &fb_emlrtRSI;
      for (i = 0; i < 8; i++) {
        b_obj->inputVarSize1[i] = (uint32_T)value[i];
      }

      c_st.site = &gb_emlrtRSI;
      exitg1 = TRUE;
    } else {
      i++;
    }
  }

  if (anyInputSizeChanged) {
    st.site = &fb_emlrtRSI;
    st.site = &fb_emlrtRSI;
  }

  st.site = &fb_emlrtRSI;
  b_st.site = &fb_emlrtRSI;
  b_st.site = &fb_emlrtRSI;
  c_st.site = &oab_emlrtRSI;
  st.site = &fb_emlrtRSI;
  st.site = &fb_emlrtRSI;
  st.site = &fb_emlrtRSI;
  b_obj = obj;
  b_st.site = &ig_emlrtRSI;
  c_st.site = &fb_emlrtRSI;
  c_st.site = &fb_emlrtRSI;
  b_st.site = &ig_emlrtRSI;
  c_st.site = &fb_emlrtRSI;
  c_st.site = &fb_emlrtRSI;
  b_st.site = &ig_emlrtRSI;
  b_st.site = &ig_emlrtRSI;
  c_st.site = &fb_emlrtRSI;
  c_st.site = &fb_emlrtRSI;
  b_st.site = &ig_emlrtRSI;
  b_st.site = &ig_emlrtRSI;
  c_st.site = &oab_emlrtRSI;
  c_obj = &b_obj->cSFunObject;
  if (!c_obj->S0_isInitialized) {
    c_obj->S0_isInitialized = TRUE;
    if (c_obj->S1_isReleased) {
      emlrtErrorWithMessageIdR2012b(&c_st, &yc_emlrtRTEI,
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
  b_st.site = &ig_emlrtRSI;
  c_st.site = &oab_emlrtRSI;
  if (!b_obj->cSFunObject.S0_isInitialized) {
    emlrtErrorWithMessageIdR2012b(&c_st, &xc_emlrtRTEI,
      "MATLAB:system:updateCalledBeforeSetup", 0);
  }
}

void l_SystemCore_step(const emlrtStack *sp, commcodegen_CRCGenerator_18 *obj,
  const real_T varargin_1[560], real_T varargout_1[563])
{
  const mxArray *y;
  static const int32_T iv261[2] = { 1, 45 };

  const mxArray *m48;
  char_T cv311[45];
  int32_T i;
  static const char_T cv312[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C',
    'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv262[2] = { 1, 4 };

  char_T cv313[4];
  static const char_T cv314[4] = { 's', 't', 'e', 'p' };

  commcodegen_CRCGenerator_18 *b_obj;
  const mxArray *c_y;
  static const int32_T iv263[2] = { 1, 51 };

  char_T cv315[51];
  static const char_T cv316[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l',
    'e', 'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *d_y;
  static const int32_T iv264[2] = { 1, 5 };

  char_T cv317[5];
  static const char_T cv318[5] = { 's', 'e', 't', 'u', 'p' };

  int32_T k;
  static const int16_T value[8] = { 560, 1, 1, 1, 1, 1, 1, 1 };

  boolean_T anyInputSizeChanged;
  boolean_T exitg1;
  static const int16_T iv265[8] = { 560, 1, 1, 1, 1, 1, 1, 1 };

  comm_CRCGenerator_11 *c_obj;
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
    m48 = mxCreateCharArray(2, iv261);
    for (i = 0; i < 45; i++) {
      cv311[i] = cv312[i];
    }

    emlrtInitCharArrayR2013a(sp, 45, m48, cv311);
    emlrtAssign(&y, m48);
    b_y = NULL;
    m48 = mxCreateCharArray(2, iv262);
    for (i = 0; i < 4; i++) {
      cv313[i] = cv314[i];
    }

    emlrtInitCharArrayR2013a(sp, 4, m48, cv313);
    emlrtAssign(&b_y, m48);
    st.site = &fb_emlrtRSI;
    c_error(&st, message(&st, y, b_y, &emlrtMCI), &emlrtMCI);
  }

  if (!obj->isInitialized) {
    st.site = &fb_emlrtRSI;
    b_obj = obj;
    if (!b_obj->isInitialized) {
    } else {
      c_y = NULL;
      m48 = mxCreateCharArray(2, iv263);
      for (i = 0; i < 51; i++) {
        cv315[i] = cv316[i];
      }

      emlrtInitCharArrayR2013a(&st, 51, m48, cv315);
      emlrtAssign(&c_y, m48);
      d_y = NULL;
      m48 = mxCreateCharArray(2, iv264);
      for (i = 0; i < 5; i++) {
        cv317[i] = cv318[i];
      }

      emlrtInitCharArrayR2013a(&st, 5, m48, cv317);
      emlrtAssign(&d_y, m48);
      b_st.site = &fb_emlrtRSI;
      c_error(&b_st, message(&b_st, c_y, d_y, &emlrtMCI), &emlrtMCI);
    }

    b_st.site = &fb_emlrtRSI;
    b_obj->isInitialized = TRUE;
    b_st.site = &fb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
    for (k = 0; k < 8; k++) {
      b_obj->inputVarSize1[k] = (uint32_T)value[k];
    }

    b_st.site = &fb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
  }

  st.site = &fb_emlrtRSI;
  st.site = &fb_emlrtRSI;
  st.site = &fb_emlrtRSI;
  b_st.site = &fb_emlrtRSI;
  b_st.site = &fb_emlrtRSI;
  st.site = &fb_emlrtRSI;
  st.site = &fb_emlrtRSI;
  b_obj = obj;
  anyInputSizeChanged = FALSE;
  k = 0;
  exitg1 = FALSE;
  while ((exitg1 == FALSE) && (k < 8)) {
    if (b_obj->inputVarSize1[k] != (uint32_T)iv265[k]) {
      anyInputSizeChanged = TRUE;
      b_st.site = &fb_emlrtRSI;
      for (k = 0; k < 8; k++) {
        b_obj->inputVarSize1[k] = (uint32_T)value[k];
      }

      exitg1 = TRUE;
    } else {
      k++;
    }
  }

  if (anyInputSizeChanged) {
    st.site = &fb_emlrtRSI;
    st.site = &fb_emlrtRSI;
  }

  st.site = &fb_emlrtRSI;
  b_st.site = &fb_emlrtRSI;
  b_st.site = &fb_emlrtRSI;
  st.site = &fb_emlrtRSI;
  st.site = &fb_emlrtRSI;
  st.site = &fb_emlrtRSI;
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

/* End of code generation (SystemCore.c) */
