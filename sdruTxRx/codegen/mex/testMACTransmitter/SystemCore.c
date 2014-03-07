/*
 * SystemCore.c
 *
 * Code generation for function 'SystemCore'
 *
 * C source code generated on: Thu Mar  6 19:04:22 2014
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

static emlrtRSInfo dv_emlrtRSI = { 1, "FIRRateConverter",
  "/Applications/MATLAB_R2013b.app/toolbox/dsp/dsp/+dspcodegen/FIRRateConverter.p"
};

static emlrtRTEInfo h_emlrtRTEI = { 1, 13, "SystemCore",
  "/Applications/MATLAB_R2013b.app/toolbox/shared/system/coder/+matlab/+system/+coder/SystemCore.p"
};

static emlrtBCInfo d_emlrtBCI = { 1, 768, 403, 9, "packedData", "OFDMModulator",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/OFDMModulator.m", 0 };

static emlrtRTEInfo fc_emlrtRTEI = { 41, 1, "update",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/scomp/update.m" };

static emlrtRTEInfo gc_emlrtRTEI = { 43, 20, "output",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/scomp/output.m" };

static emlrtRTEInfo hc_emlrtRTEI = { 19, 1, "reset",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/scomp/reset.m" };

static emlrtRTEInfo ic_emlrtRTEI = { 43, 1, "setup",
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
  static const int32_T iv202[2] = { 1, 45 };

  const mxArray *m37;
  char_T cv237[45];
  int32_T i;
  static const char_T cv238[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C',
    'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv203[2] = { 1, 5 };

  char_T cv239[5];
  static const char_T cv240[5] = { 'r', 'e', 's', 'e', 't' };

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
    m37 = mxCreateCharArray(2, iv202);
    for (i = 0; i < 45; i++) {
      cv237[i] = cv238[i];
    }

    emlrtInitCharArrayR2013a(sp, 45, m37, cv237);
    emlrtAssign(&y, m37);
    b_y = NULL;
    m37 = mxCreateCharArray(2, iv203);
    for (i = 0; i < 5; i++) {
      cv239[i] = cv240[i];
    }

    emlrtInitCharArrayR2013a(sp, 5, m37, cv239);
    emlrtAssign(&b_y, m37);
    st.site = &fb_emlrtRSI;
    c_error(&st, message(&st, y, b_y, &emlrtMCI), &emlrtMCI);
  }

  if (obj->isInitialized) {
    st.site = NULL;
    b_obj = obj;
    b_st.site = &dv_emlrtRSI;
    c_obj = &b_obj->cSFunObject;
    if (c_obj->S1_isReleased) {
      emlrtErrorWithMessageIdR2012b(&b_st, &hc_emlrtRTEI,
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
                      (int32_T)sizeof(real_T), &h_emlrtRTEI);
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
                      (int32_T)sizeof(real_T), &h_emlrtRTEI);
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

  emxInit_int32_T(&st, &r1, 1, &h_emlrtRTEI, TRUE);
  j = r1->size[0];
  r1->size[0] = b_obj->pDataLinearIndices->size[0];
  emxEnsureCapacity(&st, (emxArray__common *)r1, j, (int32_T)sizeof(int32_T),
                    &h_emlrtRTEI);
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

void g_SystemCore_step(const emlrtStack *sp, commcodegen_CRCGenerator_12 *obj,
  const real_T varargin_1[560], real_T varargout_1[563])
{
  const mxArray *y;
  static const int32_T iv111[2] = { 1, 45 };

  const mxArray *m17;
  char_T cv117[45];
  int32_T i;
  static const char_T cv118[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C',
    'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv112[2] = { 1, 4 };

  char_T cv119[4];
  static const char_T cv120[4] = { 's', 't', 'e', 'p' };

  commcodegen_CRCGenerator_12 *b_obj;
  const mxArray *c_y;
  static const int32_T iv113[2] = { 1, 51 };

  char_T cv121[51];
  static const char_T cv122[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l',
    'e', 'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *d_y;
  static const int32_T iv114[2] = { 1, 5 };

  char_T cv123[5];
  static const char_T cv124[5] = { 's', 'e', 't', 'u', 'p' };

  int32_T k;
  static const int16_T value[8] = { 560, 1, 1, 1, 1, 1, 1, 1 };

  boolean_T anyInputSizeChanged;
  boolean_T exitg1;
  static const int16_T iv115[8] = { 560, 1, 1, 1, 1, 1, 1, 1 };

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
    m17 = mxCreateCharArray(2, iv111);
    for (i = 0; i < 45; i++) {
      cv117[i] = cv118[i];
    }

    emlrtInitCharArrayR2013a(sp, 45, m17, cv117);
    emlrtAssign(&y, m17);
    b_y = NULL;
    m17 = mxCreateCharArray(2, iv112);
    for (i = 0; i < 4; i++) {
      cv119[i] = cv120[i];
    }

    emlrtInitCharArrayR2013a(sp, 4, m17, cv119);
    emlrtAssign(&b_y, m17);
    st.site = &fb_emlrtRSI;
    c_error(&st, message(&st, y, b_y, &emlrtMCI), &emlrtMCI);
  }

  if (!obj->isInitialized) {
    st.site = &fb_emlrtRSI;
    b_obj = obj;
    if (!b_obj->isInitialized) {
    } else {
      c_y = NULL;
      m17 = mxCreateCharArray(2, iv113);
      for (i = 0; i < 51; i++) {
        cv121[i] = cv122[i];
      }

      emlrtInitCharArrayR2013a(&st, 51, m17, cv121);
      emlrtAssign(&c_y, m17);
      d_y = NULL;
      m17 = mxCreateCharArray(2, iv114);
      for (i = 0; i < 5; i++) {
        cv123[i] = cv124[i];
      }

      emlrtInitCharArrayR2013a(&st, 5, m17, cv123);
      emlrtAssign(&d_y, m17);
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
    if (b_obj->inputVarSize1[k] != (uint32_T)iv115[k]) {
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

void h_SystemCore_step(testMACTransmitterStackData *SD, const emlrtStack *sp,
  comm_SDRuTransmitter *obj, const creal_T varargin_1[38400])
{
  const mxArray *y;
  static const int32_T iv118[2] = { 1, 45 };

  const mxArray *m18;
  char_T cv125[45];
  int32_T i;
  static const char_T cv126[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C',
    'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv119[2] = { 1, 4 };

  char_T cv127[4];
  static const char_T cv128[4] = { 's', 't', 'e', 'p' };

  comm_SDRuTransmitter *b_obj;
  const mxArray *c_y;
  static const int32_T iv120[2] = { 1, 51 };

  char_T cv129[51];
  static const char_T cv130[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l',
    'e', 'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *d_y;
  static const int32_T iv121[2] = { 1, 5 };

  char_T cv131[5];
  static const char_T cv132[5] = { 's', 'e', 't', 'u', 'p' };

  static const uint16_T value[8] = { 38400U, 1U, 1U, 1U, 1U, 1U, 1U, 1U };

  int32_T errMsg_size[2];
  char_T errMsg_data[1024];
  UsrpErrorCapiEnumT deviceStatus;
  const mxArray *e_y;
  static const int32_T iv122[2] = { 1, 35 };

  char_T cv133[35];
  static const char_T cv134[35] = { 's', 'd', 'r', 'u', ':', 'r', 'e', 'p', 'o',
    'r', 't', 'S', 'D', 'R', 'u', 'S', 't', 'a', 't', 'u', 's', ':', 'N', 'o',
    't', 'C', 'o', 'm', 'p', 'a', 't', 'i', 'b', 'l', 'e' };

  const mxArray *f_y;
  static const int32_T iv123[2] = { 1, 12 };

  char_T cv135[12];
  static const char_T cv136[12] = { '1', '9', '2', '.', '1', '6', '8', '.', '1',
    '0', '.', '2' };

  const mxArray *g_y;
  static const int32_T iv124[2] = { 1, 43 };

  char_T cv137[43];
  static const char_T cv138[43] = { 'r', 'e', 't', 'u', 'r', 'n', 'e', 'd', ' ',
    'b', 'y', ' ', '\'', 'g', 'e', 't', 'S', 'D', 'R', 'u', 'D', 'r', 'i', 'v',
    'e', 'r', 'V', 'e', 'r', 's', 'i', 'o', 'n', '\'', ' ', 'f', 'u', 'n', 'c',
    't', 'i', 'o', 'n' };

  const mxArray *h_y;
  static const int32_T iv125[2] = { 1, 35 };

  static const char_T cv139[35] = { 's', 'd', 'r', 'u', ':', 'r', 'e', 'p', 'o',
    'r', 't', 'S', 'D', 'R', 'u', 'S', 't', 'a', 't', 'u', 's', ':', 'N', 'o',
    't', 'R', 'e', 's', 'p', 'o', 'n', 'd', 'i', 'n', 'g' };

  const mxArray *i_y;
  static const int32_T iv126[2] = { 1, 12 };

  const mxArray *j_y;
  static const int32_T iv127[2] = { 1, 28 };

  char_T cv140[28];
  static const char_T cv141[28] = { 's', 'd', 'r', 'u', ':', 'r', 'e', 'p', 'o',
    'r', 't', 'S', 'D', 'R', 'u', 'S', 't', 'a', 't', 'u', 's', ':', 'R', 'x',
    'B', 'u', 's', 'y' };

  const mxArray *k_y;
  static const int32_T iv128[2] = { 1, 12 };

  const mxArray *l_y;
  static const int32_T iv129[2] = { 1, 28 };

  static const char_T cv142[28] = { 's', 'd', 'r', 'u', ':', 'r', 'e', 'p', 'o',
    'r', 't', 'S', 'D', 'R', 'u', 'S', 't', 'a', 't', 'u', 's', ':', 'T', 'x',
    'B', 'u', 's', 'y' };

  const mxArray *m_y;
  static const int32_T iv130[2] = { 1, 12 };

  const mxArray *n_y;
  static const int32_T iv131[2] = { 1, 26 };

  char_T cv143[26];
  static const char_T cv144[26] = { 's', 'd', 'r', 'u', ':', 'r', 'e', 'p', 'o',
    'r', 't', 'S', 'D', 'R', 'u', 'S', 't', 'a', 't', 'u', 's', ':', 'B', 'u',
    's', 'y' };

  const mxArray *o_y;
  static const int32_T iv132[2] = { 1, 12 };

  const mxArray *p_y;
  static const int32_T iv133[2] = { 1, 35 };

  static const char_T cv145[35] = { 's', 'd', 'r', 'u', ':', 'r', 'e', 'p', 'o',
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
    m18 = mxCreateCharArray(2, iv118);
    for (i = 0; i < 45; i++) {
      cv125[i] = cv126[i];
    }

    emlrtInitCharArrayR2013a(sp, 45, m18, cv125);
    emlrtAssign(&y, m18);
    b_y = NULL;
    m18 = mxCreateCharArray(2, iv119);
    for (i = 0; i < 4; i++) {
      cv127[i] = cv128[i];
    }

    emlrtInitCharArrayR2013a(sp, 4, m18, cv127);
    emlrtAssign(&b_y, m18);
    st.site = &fb_emlrtRSI;
    c_error(&st, message(&st, y, b_y, &emlrtMCI), &emlrtMCI);
  }

  if (!obj->isInitialized) {
    st.site = &fb_emlrtRSI;
    b_obj = obj;
    if (!b_obj->isInitialized) {
    } else {
      c_y = NULL;
      m18 = mxCreateCharArray(2, iv120);
      for (i = 0; i < 51; i++) {
        cv129[i] = cv130[i];
      }

      emlrtInitCharArrayR2013a(&st, 51, m18, cv129);
      emlrtAssign(&c_y, m18);
      d_y = NULL;
      m18 = mxCreateCharArray(2, iv121);
      for (i = 0; i < 5; i++) {
        cv131[i] = cv132[i];
      }

      emlrtInitCharArrayR2013a(&st, 5, m18, cv131);
      emlrtAssign(&d_y, m18);
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
    c_st.site = &vj_emlrtRSI;
    SDRuTransmitter_setupImplLocal(&c_st, b_obj, &deviceStatus, errMsg_data,
      errMsg_size);
    if (deviceStatus == UsrpDriverSuccess) {
      c_st.site = &vj_emlrtRSI;
      d_st.site = &gb_emlrtRSI;
    } else {
      c_st.site = &vj_emlrtRSI;
      closeDataConnection(&c_st, b_obj->pDriverHandle);
      c_st.site = &vj_emlrtRSI;
      d_st.site = &gb_emlrtRSI;
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
      d_st.site = &xm_emlrtRSI;
      if (!(deviceStatus == UsrpDriverNotCompatible)) {
      } else {
        e_y = NULL;
        m18 = mxCreateCharArray(2, iv122);
        for (i = 0; i < 35; i++) {
          cv133[i] = cv134[i];
        }

        emlrtInitCharArrayR2013a(&d_st, 35, m18, cv133);
        emlrtAssign(&e_y, m18);
        f_y = NULL;
        m18 = mxCreateCharArray(2, iv123);
        for (i = 0; i < 12; i++) {
          cv135[i] = cv136[i];
        }

        emlrtInitCharArrayR2013a(&d_st, 12, m18, cv135);
        emlrtAssign(&f_y, m18);
        g_y = NULL;
        m18 = mxCreateCharArray(2, iv124);
        for (i = 0; i < 43; i++) {
          cv137[i] = cv138[i];
        }

        emlrtInitCharArrayR2013a(&d_st, 43, m18, cv137);
        emlrtAssign(&g_y, m18);
        e_st.site = &bw_emlrtRSI;
        c_error(&e_st, c_message(&e_st, e_y, f_y, g_y, &g_emlrtMCI), &g_emlrtMCI);
      }
      break;

     case UsrpDriverNotResponding:
      d_st.site = &vm_emlrtRSI;
      if (!(deviceStatus == UsrpDriverNotResponding)) {
      } else {
        h_y = NULL;
        m18 = mxCreateCharArray(2, iv125);
        for (i = 0; i < 35; i++) {
          cv133[i] = cv139[i];
        }

        emlrtInitCharArrayR2013a(&d_st, 35, m18, cv133);
        emlrtAssign(&h_y, m18);
        i_y = NULL;
        m18 = mxCreateCharArray(2, iv126);
        for (i = 0; i < 12; i++) {
          cv135[i] = cv136[i];
        }

        emlrtInitCharArrayR2013a(&d_st, 12, m18, cv135);
        emlrtAssign(&i_y, m18);
        e_st.site = &bw_emlrtRSI;
        c_error(&e_st, message(&e_st, h_y, i_y, &g_emlrtMCI), &g_emlrtMCI);
      }
      break;

     case UsrpDriverRxBusy:
      d_st.site = &tm_emlrtRSI;
      if (!(deviceStatus == UsrpDriverRxBusy)) {
      } else {
        j_y = NULL;
        m18 = mxCreateCharArray(2, iv127);
        for (i = 0; i < 28; i++) {
          cv140[i] = cv141[i];
        }

        emlrtInitCharArrayR2013a(&d_st, 28, m18, cv140);
        emlrtAssign(&j_y, m18);
        k_y = NULL;
        m18 = mxCreateCharArray(2, iv128);
        for (i = 0; i < 12; i++) {
          cv135[i] = cv136[i];
        }

        emlrtInitCharArrayR2013a(&d_st, 12, m18, cv135);
        emlrtAssign(&k_y, m18);
        e_st.site = &bw_emlrtRSI;
        c_error(&e_st, message(&e_st, j_y, k_y, &g_emlrtMCI), &g_emlrtMCI);
      }
      break;

     case UsrpDriverTxBusy:
      d_st.site = &rm_emlrtRSI;
      if (!(deviceStatus == UsrpDriverTxBusy)) {
      } else {
        l_y = NULL;
        m18 = mxCreateCharArray(2, iv129);
        for (i = 0; i < 28; i++) {
          cv140[i] = cv142[i];
        }

        emlrtInitCharArrayR2013a(&d_st, 28, m18, cv140);
        emlrtAssign(&l_y, m18);
        m_y = NULL;
        m18 = mxCreateCharArray(2, iv130);
        for (i = 0; i < 12; i++) {
          cv135[i] = cv136[i];
        }

        emlrtInitCharArrayR2013a(&d_st, 12, m18, cv135);
        emlrtAssign(&m_y, m18);
        e_st.site = &bw_emlrtRSI;
        c_error(&e_st, message(&e_st, l_y, m_y, &g_emlrtMCI), &g_emlrtMCI);
      }
      break;

     case UsrpDriverBusy:
      d_st.site = &pm_emlrtRSI;
      if (!(deviceStatus == UsrpDriverBusy)) {
      } else {
        n_y = NULL;
        m18 = mxCreateCharArray(2, iv131);
        for (i = 0; i < 26; i++) {
          cv143[i] = cv144[i];
        }

        emlrtInitCharArrayR2013a(&d_st, 26, m18, cv143);
        emlrtAssign(&n_y, m18);
        o_y = NULL;
        m18 = mxCreateCharArray(2, iv132);
        for (i = 0; i < 12; i++) {
          cv135[i] = cv136[i];
        }

        emlrtInitCharArrayR2013a(&d_st, 12, m18, cv135);
        emlrtAssign(&o_y, m18);
        e_st.site = &bw_emlrtRSI;
        c_error(&e_st, message(&e_st, n_y, o_y, &g_emlrtMCI), &g_emlrtMCI);
      }
      break;

     case UsrpDriverError:
      d_st.site = &nm_emlrtRSI;
      if (!(deviceStatus == UsrpDriverError)) {
      } else {
        p_y = NULL;
        m18 = mxCreateCharArray(2, iv133);
        for (i = 0; i < 35; i++) {
          cv133[i] = cv145[i];
        }

        emlrtInitCharArrayR2013a(&d_st, 35, m18, cv133);
        emlrtAssign(&p_y, m18);
        u_size[0] = 1;
        u_size[1] = errMsg_size[1];
        loop_ub = errMsg_size[0] * errMsg_size[1];
        for (i = 0; i < loop_ub; i++) {
          u_data[i] = errMsg_data[i];
        }

        q_y = NULL;
        m18 = mxCreateCharArray(2, u_size);
        emlrtInitCharArrayR2013a(&d_st, u_size[1], m18, (char_T *)&u_data);
        emlrtAssign(&q_y, m18);
        e_st.site = &bw_emlrtRSI;
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

void i_SystemCore_step(testMACTransmitterStackData *SD, const emlrtStack *sp,
  comm_SDRuReceiver *obj)
{
  const mxArray *y;
  static const int32_T iv138[2] = { 1, 45 };

  const mxArray *m23;
  char_T cv154[45];
  int32_T i;
  static const char_T cv155[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C',
    'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv139[2] = { 1, 4 };

  char_T cv156[4];
  static const char_T cv157[4] = { 's', 't', 'e', 'p' };

  comm_SDRuReceiver *b_obj;
  const mxArray *c_y;
  static const int32_T iv140[2] = { 1, 51 };

  char_T cv158[51];
  static const char_T cv159[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l',
    'e', 'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *d_y;
  static const int32_T iv141[2] = { 1, 5 };

  char_T cv160[5];
  static const char_T cv161[5] = { 's', 'e', 't', 'u', 'p' };

  int32_T errMsg_size[2];
  char_T errMsg_data[1024];
  UsrpErrorCapiEnumT deviceStatus;
  const mxArray *e_y;
  static const int32_T iv142[2] = { 1, 35 };

  char_T cv162[35];
  static const char_T cv163[35] = { 's', 'd', 'r', 'u', ':', 'r', 'e', 'p', 'o',
    'r', 't', 'S', 'D', 'R', 'u', 'S', 't', 'a', 't', 'u', 's', ':', 'N', 'o',
    't', 'C', 'o', 'm', 'p', 'a', 't', 'i', 'b', 'l', 'e' };

  const mxArray *f_y;
  static const int32_T iv143[2] = { 1, 12 };

  char_T cv164[12];
  static const char_T cv165[12] = { '1', '9', '2', '.', '1', '6', '8', '.', '1',
    '0', '.', '2' };

  const mxArray *g_y;
  static const int32_T iv144[2] = { 1, 43 };

  char_T cv166[43];
  static const char_T cv167[43] = { 'r', 'e', 't', 'u', 'r', 'n', 'e', 'd', ' ',
    'b', 'y', ' ', '\'', 'g', 'e', 't', 'S', 'D', 'R', 'u', 'D', 'r', 'i', 'v',
    'e', 'r', 'V', 'e', 'r', 's', 'i', 'o', 'n', '\'', ' ', 'f', 'u', 'n', 'c',
    't', 'i', 'o', 'n' };

  const mxArray *h_y;
  static const int32_T iv145[2] = { 1, 35 };

  static const char_T cv168[35] = { 's', 'd', 'r', 'u', ':', 'r', 'e', 'p', 'o',
    'r', 't', 'S', 'D', 'R', 'u', 'S', 't', 'a', 't', 'u', 's', ':', 'N', 'o',
    't', 'R', 'e', 's', 'p', 'o', 'n', 'd', 'i', 'n', 'g' };

  const mxArray *i_y;
  static const int32_T iv146[2] = { 1, 12 };

  const mxArray *j_y;
  static const int32_T iv147[2] = { 1, 28 };

  char_T cv169[28];
  static const char_T cv170[28] = { 's', 'd', 'r', 'u', ':', 'r', 'e', 'p', 'o',
    'r', 't', 'S', 'D', 'R', 'u', 'S', 't', 'a', 't', 'u', 's', ':', 'R', 'x',
    'B', 'u', 's', 'y' };

  const mxArray *k_y;
  static const int32_T iv148[2] = { 1, 12 };

  const mxArray *l_y;
  static const int32_T iv149[2] = { 1, 28 };

  static const char_T cv171[28] = { 's', 'd', 'r', 'u', ':', 'r', 'e', 'p', 'o',
    'r', 't', 'S', 'D', 'R', 'u', 'S', 't', 'a', 't', 'u', 's', ':', 'T', 'x',
    'B', 'u', 's', 'y' };

  const mxArray *m_y;
  static const int32_T iv150[2] = { 1, 12 };

  const mxArray *n_y;
  static const int32_T iv151[2] = { 1, 26 };

  char_T cv172[26];
  static const char_T cv173[26] = { 's', 'd', 'r', 'u', ':', 'r', 'e', 'p', 'o',
    'r', 't', 'S', 'D', 'R', 'u', 'S', 't', 'a', 't', 'u', 's', ':', 'B', 'u',
    's', 'y' };

  const mxArray *o_y;
  static const int32_T iv152[2] = { 1, 12 };

  const mxArray *p_y;
  static const int32_T iv153[2] = { 1, 35 };

  static const char_T cv174[35] = { 's', 'd', 'r', 'u', ':', 'r', 'e', 'p', 'o',
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
    m23 = mxCreateCharArray(2, iv138);
    for (i = 0; i < 45; i++) {
      cv154[i] = cv155[i];
    }

    emlrtInitCharArrayR2013a(sp, 45, m23, cv154);
    emlrtAssign(&y, m23);
    b_y = NULL;
    m23 = mxCreateCharArray(2, iv139);
    for (i = 0; i < 4; i++) {
      cv156[i] = cv157[i];
    }

    emlrtInitCharArrayR2013a(sp, 4, m23, cv156);
    emlrtAssign(&b_y, m23);
    st.site = &fb_emlrtRSI;
    c_error(&st, message(&st, y, b_y, &emlrtMCI), &emlrtMCI);
  }

  if (!obj->isInitialized) {
    st.site = &fb_emlrtRSI;
    b_obj = obj;
    if (!b_obj->isInitialized) {
    } else {
      c_y = NULL;
      m23 = mxCreateCharArray(2, iv140);
      for (i = 0; i < 51; i++) {
        cv158[i] = cv159[i];
      }

      emlrtInitCharArrayR2013a(&st, 51, m23, cv158);
      emlrtAssign(&c_y, m23);
      d_y = NULL;
      m23 = mxCreateCharArray(2, iv141);
      for (i = 0; i < 5; i++) {
        cv160[i] = cv161[i];
      }

      emlrtInitCharArrayR2013a(&st, 5, m23, cv160);
      emlrtAssign(&d_y, m23);
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
    c_st.site = &vj_emlrtRSI;
    SDRuReceiver_setupImplLocal(&c_st, b_obj, &deviceStatus, errMsg_data,
      errMsg_size);
    if (deviceStatus == UsrpDriverSuccess) {
      c_st.site = &vj_emlrtRSI;
      d_st.site = &gb_emlrtRSI;
    } else {
      c_st.site = &vj_emlrtRSI;
      closeDataConnection(&c_st, b_obj->pDriverHandle);
      c_st.site = &vj_emlrtRSI;
      d_st.site = &gb_emlrtRSI;
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
      d_st.site = &xm_emlrtRSI;
      if (!(deviceStatus == UsrpDriverNotCompatible)) {
      } else {
        e_y = NULL;
        m23 = mxCreateCharArray(2, iv142);
        for (i = 0; i < 35; i++) {
          cv162[i] = cv163[i];
        }

        emlrtInitCharArrayR2013a(&d_st, 35, m23, cv162);
        emlrtAssign(&e_y, m23);
        f_y = NULL;
        m23 = mxCreateCharArray(2, iv143);
        for (i = 0; i < 12; i++) {
          cv164[i] = cv165[i];
        }

        emlrtInitCharArrayR2013a(&d_st, 12, m23, cv164);
        emlrtAssign(&f_y, m23);
        g_y = NULL;
        m23 = mxCreateCharArray(2, iv144);
        for (i = 0; i < 43; i++) {
          cv166[i] = cv167[i];
        }

        emlrtInitCharArrayR2013a(&d_st, 43, m23, cv166);
        emlrtAssign(&g_y, m23);
        e_st.site = &bw_emlrtRSI;
        c_error(&e_st, c_message(&e_st, e_y, f_y, g_y, &g_emlrtMCI), &g_emlrtMCI);
      }
      break;

     case UsrpDriverNotResponding:
      d_st.site = &vm_emlrtRSI;
      if (!(deviceStatus == UsrpDriverNotResponding)) {
      } else {
        h_y = NULL;
        m23 = mxCreateCharArray(2, iv145);
        for (i = 0; i < 35; i++) {
          cv162[i] = cv168[i];
        }

        emlrtInitCharArrayR2013a(&d_st, 35, m23, cv162);
        emlrtAssign(&h_y, m23);
        i_y = NULL;
        m23 = mxCreateCharArray(2, iv146);
        for (i = 0; i < 12; i++) {
          cv164[i] = cv165[i];
        }

        emlrtInitCharArrayR2013a(&d_st, 12, m23, cv164);
        emlrtAssign(&i_y, m23);
        e_st.site = &bw_emlrtRSI;
        c_error(&e_st, message(&e_st, h_y, i_y, &g_emlrtMCI), &g_emlrtMCI);
      }
      break;

     case UsrpDriverRxBusy:
      d_st.site = &tm_emlrtRSI;
      if (!(deviceStatus == UsrpDriverRxBusy)) {
      } else {
        j_y = NULL;
        m23 = mxCreateCharArray(2, iv147);
        for (i = 0; i < 28; i++) {
          cv169[i] = cv170[i];
        }

        emlrtInitCharArrayR2013a(&d_st, 28, m23, cv169);
        emlrtAssign(&j_y, m23);
        k_y = NULL;
        m23 = mxCreateCharArray(2, iv148);
        for (i = 0; i < 12; i++) {
          cv164[i] = cv165[i];
        }

        emlrtInitCharArrayR2013a(&d_st, 12, m23, cv164);
        emlrtAssign(&k_y, m23);
        e_st.site = &bw_emlrtRSI;
        c_error(&e_st, message(&e_st, j_y, k_y, &g_emlrtMCI), &g_emlrtMCI);
      }
      break;

     case UsrpDriverTxBusy:
      d_st.site = &rm_emlrtRSI;
      if (!(deviceStatus == UsrpDriverTxBusy)) {
      } else {
        l_y = NULL;
        m23 = mxCreateCharArray(2, iv149);
        for (i = 0; i < 28; i++) {
          cv169[i] = cv171[i];
        }

        emlrtInitCharArrayR2013a(&d_st, 28, m23, cv169);
        emlrtAssign(&l_y, m23);
        m_y = NULL;
        m23 = mxCreateCharArray(2, iv150);
        for (i = 0; i < 12; i++) {
          cv164[i] = cv165[i];
        }

        emlrtInitCharArrayR2013a(&d_st, 12, m23, cv164);
        emlrtAssign(&m_y, m23);
        e_st.site = &bw_emlrtRSI;
        c_error(&e_st, message(&e_st, l_y, m_y, &g_emlrtMCI), &g_emlrtMCI);
      }
      break;

     case UsrpDriverBusy:
      d_st.site = &pm_emlrtRSI;
      if (!(deviceStatus == UsrpDriverBusy)) {
      } else {
        n_y = NULL;
        m23 = mxCreateCharArray(2, iv151);
        for (i = 0; i < 26; i++) {
          cv172[i] = cv173[i];
        }

        emlrtInitCharArrayR2013a(&d_st, 26, m23, cv172);
        emlrtAssign(&n_y, m23);
        o_y = NULL;
        m23 = mxCreateCharArray(2, iv152);
        for (i = 0; i < 12; i++) {
          cv164[i] = cv165[i];
        }

        emlrtInitCharArrayR2013a(&d_st, 12, m23, cv164);
        emlrtAssign(&o_y, m23);
        e_st.site = &bw_emlrtRSI;
        c_error(&e_st, message(&e_st, n_y, o_y, &g_emlrtMCI), &g_emlrtMCI);
      }
      break;

     case UsrpDriverError:
      d_st.site = &nm_emlrtRSI;
      if (!(deviceStatus == UsrpDriverError)) {
      } else {
        p_y = NULL;
        m23 = mxCreateCharArray(2, iv153);
        for (i = 0; i < 35; i++) {
          cv162[i] = cv174[i];
        }

        emlrtInitCharArrayR2013a(&d_st, 35, m23, cv162);
        emlrtAssign(&p_y, m23);
        u_size[0] = 1;
        u_size[1] = errMsg_size[1];
        i = errMsg_size[0] * errMsg_size[1];
        for (i17 = 0; i17 < i; i17++) {
          u_data[i17] = errMsg_data[i17];
        }

        q_y = NULL;
        m23 = mxCreateCharArray(2, u_size);
        emlrtInitCharArrayR2013a(&d_st, u_size[1], m23, (char_T *)&u_data);
        emlrtAssign(&q_y, m23);
        e_st.site = &bw_emlrtRSI;
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
    for (i17 = 0; i17 < 4; i17++) {
      b_obj->tunablePropertyChanged[i17] = FALSE;
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
  SDRuReceiver_stepImpl(SD, &st, obj);
}

void j_SystemCore_step(const emlrtStack *sp, dspcodegen_FIRRateConverter *obj,
  const creal_T varargin_1[288], creal_T varargout_1[3456])
{
  const mxArray *y;
  static const int32_T iv197[2] = { 1, 45 };

  const mxArray *m36;
  char_T cv229[45];
  int32_T i;
  static const char_T cv230[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C',
    'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv198[2] = { 1, 4 };

  char_T cv231[4];
  static const char_T cv232[4] = { 's', 't', 'e', 'p' };

  dspcodegen_FIRRateConverter *b_obj;
  const mxArray *c_y;
  static const int32_T iv199[2] = { 1, 51 };

  char_T cv233[51];
  static const char_T cv234[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l',
    'e', 'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *d_y;
  static const int32_T iv200[2] = { 1, 5 };

  char_T cv235[5];
  static const char_T cv236[5] = { 's', 'e', 't', 'u', 'p' };

  static const int8_T value[8] = { 24, 12, 1, 1, 1, 1, 1, 1 };

  dsp_FIRRateConverter_10 *c_obj;
  boolean_T anyInputSizeChanged;
  boolean_T exitg1;
  static const int8_T iv201[8] = { 24, 12, 1, 1, 1, 1, 1, 1 };

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
    m36 = mxCreateCharArray(2, iv197);
    for (i = 0; i < 45; i++) {
      cv229[i] = cv230[i];
    }

    emlrtInitCharArrayR2013a(sp, 45, m36, cv229);
    emlrtAssign(&y, m36);
    b_y = NULL;
    m36 = mxCreateCharArray(2, iv198);
    for (i = 0; i < 4; i++) {
      cv231[i] = cv232[i];
    }

    emlrtInitCharArrayR2013a(sp, 4, m36, cv231);
    emlrtAssign(&b_y, m36);
    st.site = &fb_emlrtRSI;
    c_error(&st, message(&st, y, b_y, &emlrtMCI), &emlrtMCI);
  }

  if (!obj->isInitialized) {
    st.site = &fb_emlrtRSI;
    b_obj = obj;
    if (!b_obj->isInitialized) {
    } else {
      c_y = NULL;
      m36 = mxCreateCharArray(2, iv199);
      for (i = 0; i < 51; i++) {
        cv233[i] = cv234[i];
      }

      emlrtInitCharArrayR2013a(&st, 51, m36, cv233);
      emlrtAssign(&c_y, m36);
      d_y = NULL;
      m36 = mxCreateCharArray(2, iv200);
      for (i = 0; i < 5; i++) {
        cv235[i] = cv236[i];
      }

      emlrtInitCharArrayR2013a(&st, 5, m36, cv235);
      emlrtAssign(&d_y, m36);
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
    c_st.site = &dv_emlrtRSI;
    c_obj = &b_obj->cSFunObject;
    if (!c_obj->S0_isInitialized) {
      c_obj->S0_isInitialized = TRUE;
      if (c_obj->S1_isReleased) {
        emlrtErrorWithMessageIdR2012b(&c_st, &ic_emlrtRTEI,
          "MATLAB:system:setupCalledWhenLockedReleasedCodegen", 0);
      }

      /* System object Initialization function: dsp.FIRRateConverter */
      c_obj->W1_InBufIdx = 0;
      for (i = 0; i < 252; i++) {
        c_obj->W0_InBuf[i].re = 0.0;
        c_obj->W0_InBuf[i].im = 0.0;
      }
    } else {
      emlrtErrorWithMessageIdR2012b(&c_st, &ic_emlrtRTEI,
        "MATLAB:system:setupCalledWhenLockedCodegen", 0);
    }

    c_st.site = &dv_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
    c_st.site = &dv_emlrtRSI;
    c_obj = &b_obj->cSFunObject;
    if (c_obj->S1_isReleased) {
      emlrtErrorWithMessageIdR2012b(&c_st, &hc_emlrtRTEI,
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
  c_st.site = &dv_emlrtRSI;
  st.site = &fb_emlrtRSI;
  st.site = &fb_emlrtRSI;
  b_obj = obj;
  anyInputSizeChanged = FALSE;
  i = 0;
  exitg1 = FALSE;
  while ((exitg1 == FALSE) && (i < 8)) {
    if (b_obj->inputVarSize1[i] != (uint32_T)iv201[i]) {
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
  c_st.site = &dv_emlrtRSI;
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
  c_st.site = &dv_emlrtRSI;
  c_obj = &b_obj->cSFunObject;
  if (!c_obj->S0_isInitialized) {
    c_obj->S0_isInitialized = TRUE;
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
  c_st.site = &dv_emlrtRSI;
  if (!b_obj->cSFunObject.S0_isInitialized) {
    emlrtErrorWithMessageIdR2012b(&c_st, &fc_emlrtRTEI,
      "MATLAB:system:updateCalledBeforeSetup", 0);
  }
}

void k_SystemCore_step(const emlrtStack *sp, commcodegen_CRCGenerator_18 *obj,
  const real_T varargin_1[560], real_T varargout_1[563])
{
  const mxArray *y;
  static const int32_T iv228[2] = { 1, 45 };

  const mxArray *m43;
  char_T cv268[45];
  int32_T i;
  static const char_T cv269[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C',
    'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv229[2] = { 1, 4 };

  char_T cv270[4];
  static const char_T cv271[4] = { 's', 't', 'e', 'p' };

  commcodegen_CRCGenerator_18 *b_obj;
  const mxArray *c_y;
  static const int32_T iv230[2] = { 1, 51 };

  char_T cv272[51];
  static const char_T cv273[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l',
    'e', 'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *d_y;
  static const int32_T iv231[2] = { 1, 5 };

  char_T cv274[5];
  static const char_T cv275[5] = { 's', 'e', 't', 'u', 'p' };

  int32_T k;
  static const int16_T value[8] = { 560, 1, 1, 1, 1, 1, 1, 1 };

  boolean_T anyInputSizeChanged;
  boolean_T exitg1;
  static const int16_T iv232[8] = { 560, 1, 1, 1, 1, 1, 1, 1 };

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
    m43 = mxCreateCharArray(2, iv228);
    for (i = 0; i < 45; i++) {
      cv268[i] = cv269[i];
    }

    emlrtInitCharArrayR2013a(sp, 45, m43, cv268);
    emlrtAssign(&y, m43);
    b_y = NULL;
    m43 = mxCreateCharArray(2, iv229);
    for (i = 0; i < 4; i++) {
      cv270[i] = cv271[i];
    }

    emlrtInitCharArrayR2013a(sp, 4, m43, cv270);
    emlrtAssign(&b_y, m43);
    st.site = &fb_emlrtRSI;
    c_error(&st, message(&st, y, b_y, &emlrtMCI), &emlrtMCI);
  }

  if (!obj->isInitialized) {
    st.site = &fb_emlrtRSI;
    b_obj = obj;
    if (!b_obj->isInitialized) {
    } else {
      c_y = NULL;
      m43 = mxCreateCharArray(2, iv230);
      for (i = 0; i < 51; i++) {
        cv272[i] = cv273[i];
      }

      emlrtInitCharArrayR2013a(&st, 51, m43, cv272);
      emlrtAssign(&c_y, m43);
      d_y = NULL;
      m43 = mxCreateCharArray(2, iv231);
      for (i = 0; i < 5; i++) {
        cv274[i] = cv275[i];
      }

      emlrtInitCharArrayR2013a(&st, 5, m43, cv274);
      emlrtAssign(&d_y, m43);
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
    if (b_obj->inputVarSize1[k] != (uint32_T)iv232[k]) {
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
