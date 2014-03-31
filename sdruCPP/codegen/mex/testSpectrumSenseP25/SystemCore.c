/*
 * SystemCore.c
 *
 * Code generation for function 'SystemCore'
 *
 * C source code generated on: Thu Mar  6 23:19:55 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testSpectrumSenseP25.h"
#include "SystemCore.h"
#include "SystemProp.h"
#include "find.h"
#include "testSpectrumSenseP25_emxutil.h"
#include "Nondirect1.h"
#include "OFDMModulator.h"
#include "testSpectrumSenseP25_mexutil.h"
#include "testSpectrumSenseP25_data.h"
#include <stdio.h>

/* Variable Definitions */
static emlrtRSInfo tc_emlrtRSI = { 345, "OFDMModulator",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/OFDMModulator.m" };

static emlrtRSInfo uc_emlrtRSI = { 374, "OFDMModulator",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/OFDMModulator.m" };

static emlrtRSInfo vc_emlrtRSI = { 375, "OFDMModulator",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/OFDMModulator.m" };

static emlrtRSInfo wc_emlrtRSI = { 388, "OFDMModulator",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/OFDMModulator.m" };

static emlrtRSInfo ad_emlrtRSI = { 415, "OFDMModulator",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/OFDMModulator.m" };

static emlrtRSInfo bd_emlrtRSI = { 419, "OFDMModulator",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/OFDMModulator.m" };

static emlrtRSInfo cd_emlrtRSI = { 423, "OFDMModulator",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/OFDMModulator.m" };

static emlrtRSInfo dd_emlrtRSI = { 424, "OFDMModulator",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/OFDMModulator.m" };

static emlrtRSInfo dg_emlrtRSI = { 1, "Nondirect",
  "/Applications/MATLAB_R2013b.app/toolbox/shared/system/coder/+matlab/+system/+mixin/+coder/Nondirect.p"
};

static emlrtRTEInfo h_emlrtRTEI = { 1, 13, "SystemCore",
  "/Applications/MATLAB_R2013b.app/toolbox/shared/system/coder/+matlab/+system/+coder/SystemCore.p"
};

static emlrtBCInfo d_emlrtBCI = { 1, 768, 403, 9, "packedData", "OFDMModulator",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/OFDMModulator.m", 0 };

/* Function Declarations */
static void SystemCore_validateProperties(void);

/* Function Definitions */
static void SystemCore_validateProperties(void)
{
}

void SystemCore_step(const emlrtStack *sp, OFDMModulator *obj, creal_T
                     varargout_1[64])
{
  const mxArray *y;
  static const int32_T iv33[2] = { 1, 45 };

  const mxArray *m2;
  char_T cv32[45];
  int32_T i;
  static const char_T cv33[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C',
    'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv34[2] = { 1, 4 };

  char_T cv34[4];
  static const char_T cv35[4] = { 's', 't', 'e', 'p' };

  OFDMModulator *b_obj;
  const mxArray *c_y;
  static const int32_T iv35[2] = { 1, 51 };

  char_T cv36[51];
  static const char_T cv37[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l',
    'e', 'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *d_y;
  static const int32_T iv36[2] = { 1, 5 };

  char_T cv38[5];
  static const char_T cv39[5] = { 's', 'e', 't', 'u', 'p' };

  real_T value[64];
  static const int8_T iv37[11] = { 0, 1, 2, 3, 4, 5, 59, 60, 61, 62, 63 };

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
    m2 = mxCreateCharArray(2, iv33);
    for (i = 0; i < 45; i++) {
      cv32[i] = cv33[i];
    }

    emlrtInitCharArrayR2013a(sp, 45, m2, cv32);
    emlrtAssign(&y, m2);
    b_y = NULL;
    m2 = mxCreateCharArray(2, iv34);
    for (i = 0; i < 4; i++) {
      cv34[i] = cv35[i];
    }

    emlrtInitCharArrayR2013a(sp, 4, m2, cv34);
    emlrtAssign(&b_y, m2);
    st.site = &eb_emlrtRSI;
    b_error(&st, message(&st, y, b_y, &emlrtMCI), &emlrtMCI);
  }

  if (!obj->isInitialized) {
    st.site = &eb_emlrtRSI;
    b_obj = obj;
    if (!b_obj->isInitialized) {
    } else {
      c_y = NULL;
      m2 = mxCreateCharArray(2, iv35);
      for (i = 0; i < 51; i++) {
        cv36[i] = cv37[i];
      }

      emlrtInitCharArrayR2013a(&st, 51, m2, cv36);
      emlrtAssign(&c_y, m2);
      d_y = NULL;
      m2 = mxCreateCharArray(2, iv36);
      for (i = 0; i < 5; i++) {
        cv38[i] = cv39[i];
      }

      emlrtInitCharArrayR2013a(&st, 5, m2, cv38);
      emlrtAssign(&d_y, m2);
      b_st.site = &eb_emlrtRSI;
      b_error(&b_st, message(&b_st, c_y, d_y, &emlrtMCI), &emlrtMCI);
    }

    b_st.site = &eb_emlrtRSI;
    b_obj->isInitialized = TRUE;
    c_st.site = &fb_emlrtRSI;
    b_st.site = &eb_emlrtRSI;
    c_st.site = &eb_emlrtRSI;
    c_st.site = &eb_emlrtRSI;
    b_st.site = &eb_emlrtRSI;
    c_st.site = &eb_emlrtRSI;
    c_st.site = &eb_emlrtRSI;
    c_st.site = &eb_emlrtRSI;
    c_st.site = &eb_emlrtRSI;
    b_st.site = &eb_emlrtRSI;
    c_st.site = &eb_emlrtRSI;
    b_st.site = &eb_emlrtRSI;
    c_st.site = &eb_emlrtRSI;
    b_st.site = &eb_emlrtRSI;
    c_st.site = &eb_emlrtRSI;
    b_st.site = &eb_emlrtRSI;
    c_st.site = &eb_emlrtRSI;
    c_st.site = &eb_emlrtRSI;
    b_st.site = &eb_emlrtRSI;
    b_st.site = &eb_emlrtRSI;
    b_st.site = &eb_emlrtRSI;
    b_st.site = &eb_emlrtRSI;
    c_st.site = &tc_emlrtRSI;
    c_st.site = &uc_emlrtRSI;
    for (i = 0; i < 64; i++) {
      b_obj->pFullGrid[i] = 1.0;
    }

    for (i = 0; i < 64; i++) {
      value[i] = b_obj->pFullGrid[i];
    }

    for (i = 0; i < 11; i++) {
      value[iv37[i]] = 0.0;
    }

    c_st.site = &vc_emlrtRSI;
    for (i = 0; i < 64; i++) {
      b_obj->pFullGrid[i] = value[i];
    }

    c_st.site = &wc_emlrtRSI;
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

    c_st.site = &wc_emlrtRSI;
    i = b_obj->pDataLinearIndices->size[0];
    b_obj->pDataLinearIndices->size[0] = ii;
    emxEnsureCapacity(&c_st, (emxArray__common *)b_obj->pDataLinearIndices, i,
                      (int32_T)sizeof(real_T), &h_emlrtRTEI);
    for (i = 0; i < ii; i++) {
      b_obj->pDataLinearIndices->data[i] = ii_data[i];
    }

    b_st.site = &eb_emlrtRSI;
  }

  st.site = &eb_emlrtRSI;
  st.site = &eb_emlrtRSI;
  st.site = &eb_emlrtRSI;
  b_st.site = &eb_emlrtRSI;
  b_st.site = &eb_emlrtRSI;
  st.site = &eb_emlrtRSI;
  st.site = &eb_emlrtRSI;
  st.site = &eb_emlrtRSI;
  b_st.site = &eb_emlrtRSI;
  b_st.site = &eb_emlrtRSI;
  st.site = &eb_emlrtRSI;
  st.site = &eb_emlrtRSI;
  st.site = &eb_emlrtRSI;
  OFDMModulator_stepImpl(&st, obj, dcv1, varargout_1);
}

void b_SystemCore_step(const emlrtStack *sp, OFDMModulator *obj, creal_T
  varargout_1[64])
{
  const mxArray *y;
  static const int32_T iv38[2] = { 1, 45 };

  const mxArray *m3;
  char_T cv40[45];
  int32_T i;
  static const char_T cv41[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C',
    'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv39[2] = { 1, 4 };

  char_T cv42[4];
  static const char_T cv43[4] = { 's', 't', 'e', 'p' };

  OFDMModulator *b_obj;
  const mxArray *c_y;
  static const int32_T iv40[2] = { 1, 51 };

  char_T cv44[51];
  static const char_T cv45[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l',
    'e', 'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *d_y;
  static const int32_T iv41[2] = { 1, 5 };

  char_T cv46[5];
  static const char_T cv47[5] = { 's', 'e', 't', 'u', 'p' };

  real_T value[64];
  static const int8_T iv42[11] = { 0, 1, 2, 3, 4, 5, 59, 60, 61, 62, 63 };

  boolean_T x[64];
  int8_T ii_data[64];
  int32_T ii;
  boolean_T exitg1;
  boolean_T guard1 = FALSE;
  int8_T b_ii_data[64];
  creal_T dcv2[53];
  static const int8_T iv43[53] = { 1, 1, -1, -1, 1, 1, -1, 1, -1, 1, 1, 1, 1, 1,
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
    m3 = mxCreateCharArray(2, iv38);
    for (i = 0; i < 45; i++) {
      cv40[i] = cv41[i];
    }

    emlrtInitCharArrayR2013a(sp, 45, m3, cv40);
    emlrtAssign(&y, m3);
    b_y = NULL;
    m3 = mxCreateCharArray(2, iv39);
    for (i = 0; i < 4; i++) {
      cv42[i] = cv43[i];
    }

    emlrtInitCharArrayR2013a(sp, 4, m3, cv42);
    emlrtAssign(&b_y, m3);
    st.site = &eb_emlrtRSI;
    b_error(&st, message(&st, y, b_y, &emlrtMCI), &emlrtMCI);
  }

  if (!obj->isInitialized) {
    st.site = &eb_emlrtRSI;
    b_obj = obj;
    if (!b_obj->isInitialized) {
    } else {
      c_y = NULL;
      m3 = mxCreateCharArray(2, iv40);
      for (i = 0; i < 51; i++) {
        cv44[i] = cv45[i];
      }

      emlrtInitCharArrayR2013a(&st, 51, m3, cv44);
      emlrtAssign(&c_y, m3);
      d_y = NULL;
      m3 = mxCreateCharArray(2, iv41);
      for (i = 0; i < 5; i++) {
        cv46[i] = cv47[i];
      }

      emlrtInitCharArrayR2013a(&st, 5, m3, cv46);
      emlrtAssign(&d_y, m3);
      b_st.site = &eb_emlrtRSI;
      b_error(&b_st, message(&b_st, c_y, d_y, &emlrtMCI), &emlrtMCI);
    }

    b_st.site = &eb_emlrtRSI;
    b_obj->isInitialized = TRUE;
    c_st.site = &fb_emlrtRSI;
    b_st.site = &eb_emlrtRSI;
    c_st.site = &eb_emlrtRSI;
    c_st.site = &eb_emlrtRSI;
    b_st.site = &eb_emlrtRSI;
    c_st.site = &eb_emlrtRSI;
    c_st.site = &eb_emlrtRSI;
    c_st.site = &eb_emlrtRSI;
    c_st.site = &eb_emlrtRSI;
    b_st.site = &eb_emlrtRSI;
    c_st.site = &eb_emlrtRSI;
    b_st.site = &eb_emlrtRSI;
    c_st.site = &eb_emlrtRSI;
    b_st.site = &eb_emlrtRSI;
    c_st.site = &eb_emlrtRSI;
    b_st.site = &eb_emlrtRSI;
    c_st.site = &eb_emlrtRSI;
    c_st.site = &eb_emlrtRSI;
    b_st.site = &eb_emlrtRSI;
    b_st.site = &eb_emlrtRSI;
    b_st.site = &eb_emlrtRSI;
    b_st.site = &eb_emlrtRSI;
    c_st.site = &tc_emlrtRSI;
    c_st.site = &uc_emlrtRSI;
    for (i = 0; i < 64; i++) {
      b_obj->pFullGrid[i] = 1.0;
    }

    for (i = 0; i < 64; i++) {
      value[i] = b_obj->pFullGrid[i];
    }

    for (i = 0; i < 11; i++) {
      value[iv42[i]] = 0.0;
    }

    c_st.site = &vc_emlrtRSI;
    for (i = 0; i < 64; i++) {
      b_obj->pFullGrid[i] = value[i];
    }

    c_st.site = &wc_emlrtRSI;
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

    c_st.site = &wc_emlrtRSI;
    i = b_obj->pDataLinearIndices->size[0];
    b_obj->pDataLinearIndices->size[0] = ii;
    emxEnsureCapacity(&c_st, (emxArray__common *)b_obj->pDataLinearIndices, i,
                      (int32_T)sizeof(real_T), &h_emlrtRTEI);
    for (i = 0; i < ii; i++) {
      b_obj->pDataLinearIndices->data[i] = ii_data[i];
    }

    b_st.site = &eb_emlrtRSI;
  }

  st.site = &eb_emlrtRSI;
  st.site = &eb_emlrtRSI;
  st.site = &eb_emlrtRSI;
  b_st.site = &eb_emlrtRSI;
  b_st.site = &eb_emlrtRSI;
  st.site = &eb_emlrtRSI;
  st.site = &eb_emlrtRSI;
  st.site = &eb_emlrtRSI;
  b_st.site = &eb_emlrtRSI;
  b_st.site = &eb_emlrtRSI;
  st.site = &eb_emlrtRSI;
  st.site = &eb_emlrtRSI;
  for (i = 0; i < 53; i++) {
    dcv2[i].re = iv43[i];
    dcv2[i].im = 0.0;
  }

  st.site = &eb_emlrtRSI;
  OFDMModulator_stepImpl(&st, obj, dcv2, varargout_1);
}

void c_SystemCore_step(const emlrtStack *sp, commcodegen_CRCGenerator *obj,
  const real_T varargin_1[560], real_T varargout_1[563])
{
  const mxArray *y;
  static const int32_T iv47[2] = { 1, 45 };

  const mxArray *m6;
  char_T cv52[45];
  int32_T i;
  static const char_T cv53[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C',
    'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv48[2] = { 1, 4 };

  char_T cv54[4];
  static const char_T cv55[4] = { 's', 't', 'e', 'p' };

  commcodegen_CRCGenerator *b_obj;
  const mxArray *c_y;
  static const int32_T iv49[2] = { 1, 51 };

  char_T cv56[51];
  static const char_T cv57[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l',
    'e', 'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *d_y;
  static const int32_T iv50[2] = { 1, 5 };

  char_T cv58[5];
  static const char_T cv59[5] = { 's', 'e', 't', 'u', 'p' };

  int32_T k;
  static const int16_T value[8] = { 560, 1, 1, 1, 1, 1, 1, 1 };

  boolean_T anyInputSizeChanged;
  boolean_T exitg1;
  static const int16_T iv51[8] = { 560, 1, 1, 1, 1, 1, 1, 1 };

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
    m6 = mxCreateCharArray(2, iv47);
    for (i = 0; i < 45; i++) {
      cv52[i] = cv53[i];
    }

    emlrtInitCharArrayR2013a(sp, 45, m6, cv52);
    emlrtAssign(&y, m6);
    b_y = NULL;
    m6 = mxCreateCharArray(2, iv48);
    for (i = 0; i < 4; i++) {
      cv54[i] = cv55[i];
    }

    emlrtInitCharArrayR2013a(sp, 4, m6, cv54);
    emlrtAssign(&b_y, m6);
    st.site = &eb_emlrtRSI;
    b_error(&st, message(&st, y, b_y, &emlrtMCI), &emlrtMCI);
  }

  if (!obj->isInitialized) {
    st.site = &eb_emlrtRSI;
    b_obj = obj;
    if (!b_obj->isInitialized) {
    } else {
      c_y = NULL;
      m6 = mxCreateCharArray(2, iv49);
      for (i = 0; i < 51; i++) {
        cv56[i] = cv57[i];
      }

      emlrtInitCharArrayR2013a(&st, 51, m6, cv56);
      emlrtAssign(&c_y, m6);
      d_y = NULL;
      m6 = mxCreateCharArray(2, iv50);
      for (i = 0; i < 5; i++) {
        cv58[i] = cv59[i];
      }

      emlrtInitCharArrayR2013a(&st, 5, m6, cv58);
      emlrtAssign(&d_y, m6);
      b_st.site = &eb_emlrtRSI;
      b_error(&b_st, message(&b_st, c_y, d_y, &emlrtMCI), &emlrtMCI);
    }

    b_st.site = &eb_emlrtRSI;
    b_obj->isInitialized = TRUE;
    b_st.site = &eb_emlrtRSI;
    b_st.site = &eb_emlrtRSI;
    b_st.site = &eb_emlrtRSI;
    for (k = 0; k < 8; k++) {
      b_obj->inputVarSize1[k] = (uint32_T)value[k];
    }

    b_st.site = &eb_emlrtRSI;
    b_st.site = &eb_emlrtRSI;
    b_st.site = &eb_emlrtRSI;
    b_st.site = &eb_emlrtRSI;
    b_st.site = &eb_emlrtRSI;
    b_st.site = &eb_emlrtRSI;
    b_st.site = &eb_emlrtRSI;
    b_st.site = &eb_emlrtRSI;
  }

  st.site = &eb_emlrtRSI;
  st.site = &eb_emlrtRSI;
  st.site = &eb_emlrtRSI;
  b_st.site = &eb_emlrtRSI;
  b_st.site = &eb_emlrtRSI;
  st.site = &eb_emlrtRSI;
  st.site = &eb_emlrtRSI;
  b_obj = obj;
  anyInputSizeChanged = FALSE;
  k = 0;
  exitg1 = FALSE;
  while ((exitg1 == FALSE) && (k < 8)) {
    if (b_obj->inputVarSize1[k] != (uint32_T)iv51[k]) {
      anyInputSizeChanged = TRUE;
      b_st.site = &eb_emlrtRSI;
      for (k = 0; k < 8; k++) {
        b_obj->inputVarSize1[k] = (uint32_T)value[k];
      }

      exitg1 = TRUE;
    } else {
      k++;
    }
  }

  if (anyInputSizeChanged) {
    st.site = &eb_emlrtRSI;
    st.site = &eb_emlrtRSI;
  }

  st.site = &eb_emlrtRSI;
  b_st.site = &eb_emlrtRSI;
  b_st.site = &eb_emlrtRSI;
  st.site = &eb_emlrtRSI;
  st.site = &eb_emlrtRSI;
  st.site = &eb_emlrtRSI;
  b_obj = obj;
  b_st.site = &dg_emlrtRSI;
  b_st.site = &dg_emlrtRSI;
  b_st.site = &dg_emlrtRSI;
  b_st.site = &dg_emlrtRSI;
  b_st.site = &dg_emlrtRSI;
  b_st.site = &dg_emlrtRSI;
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
  b_st.site = &dg_emlrtRSI;
}

void d_SystemCore_step(const emlrtStack *sp, commcodegen_BPSKModulator *obj,
  const real_T varargin_1[563], creal_T varargout_1[563])
{
  const mxArray *y;
  static const int32_T iv52[2] = { 1, 45 };

  const mxArray *m7;
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

  commcodegen_BPSKModulator *b_obj;
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

  static const int16_T value[8] = { 563, 1, 1, 1, 1, 1, 1, 1 };

  boolean_T anyInputSizeChanged;
  boolean_T exitg1;
  static const int16_T iv56[8] = { 563, 1, 1, 1, 1, 1, 1, 1 };

  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (!obj->isReleased) {
  } else {
    y = NULL;
    m7 = mxCreateCharArray(2, iv52);
    for (i = 0; i < 45; i++) {
      cv60[i] = cv61[i];
    }

    emlrtInitCharArrayR2013a(sp, 45, m7, cv60);
    emlrtAssign(&y, m7);
    b_y = NULL;
    m7 = mxCreateCharArray(2, iv53);
    for (i = 0; i < 4; i++) {
      cv62[i] = cv63[i];
    }

    emlrtInitCharArrayR2013a(sp, 4, m7, cv62);
    emlrtAssign(&b_y, m7);
    st.site = &eb_emlrtRSI;
    b_error(&st, message(&st, y, b_y, &emlrtMCI), &emlrtMCI);
  }

  if (!obj->isInitialized) {
    st.site = &eb_emlrtRSI;
    b_obj = obj;
    if (!b_obj->isInitialized) {
    } else {
      c_y = NULL;
      m7 = mxCreateCharArray(2, iv54);
      for (i = 0; i < 51; i++) {
        cv64[i] = cv65[i];
      }

      emlrtInitCharArrayR2013a(&st, 51, m7, cv64);
      emlrtAssign(&c_y, m7);
      d_y = NULL;
      m7 = mxCreateCharArray(2, iv55);
      for (i = 0; i < 5; i++) {
        cv66[i] = cv67[i];
      }

      emlrtInitCharArrayR2013a(&st, 5, m7, cv66);
      emlrtAssign(&d_y, m7);
      b_st.site = &eb_emlrtRSI;
      b_error(&b_st, message(&b_st, c_y, d_y, &emlrtMCI), &emlrtMCI);
    }

    b_st.site = &eb_emlrtRSI;
    b_obj->isInitialized = TRUE;
    b_st.site = &eb_emlrtRSI;
    b_st.site = &eb_emlrtRSI;
    b_st.site = &eb_emlrtRSI;
    for (i = 0; i < 8; i++) {
      b_obj->inputVarSize1[i] = (uint32_T)value[i];
    }

    b_st.site = &eb_emlrtRSI;
    b_st.site = &eb_emlrtRSI;
    b_st.site = &eb_emlrtRSI;
    b_st.site = &eb_emlrtRSI;
    b_st.site = &eb_emlrtRSI;
    b_st.site = &eb_emlrtRSI;
    b_st.site = &eb_emlrtRSI;
    b_st.site = &eb_emlrtRSI;
  }

  st.site = &eb_emlrtRSI;
  st.site = &eb_emlrtRSI;
  st.site = &eb_emlrtRSI;
  b_st.site = &eb_emlrtRSI;
  b_st.site = &eb_emlrtRSI;
  st.site = &eb_emlrtRSI;
  st.site = &eb_emlrtRSI;
  b_obj = obj;
  anyInputSizeChanged = FALSE;
  i = 0;
  exitg1 = FALSE;
  while ((exitg1 == FALSE) && (i < 8)) {
    if (b_obj->inputVarSize1[i] != (uint32_T)iv56[i]) {
      anyInputSizeChanged = TRUE;
      b_st.site = &eb_emlrtRSI;
      for (i = 0; i < 8; i++) {
        b_obj->inputVarSize1[i] = (uint32_T)value[i];
      }

      exitg1 = TRUE;
    } else {
      i++;
    }
  }

  if (anyInputSizeChanged) {
    st.site = &eb_emlrtRSI;
    st.site = &eb_emlrtRSI;
  }

  st.site = &eb_emlrtRSI;
  b_st.site = &eb_emlrtRSI;
  b_st.site = &eb_emlrtRSI;
  st.site = &eb_emlrtRSI;
  st.site = &eb_emlrtRSI;
  st.site = &eb_emlrtRSI;
  Nondirect_stepImpl(obj, varargin_1, varargout_1);
}

void e_SystemCore_step(const emlrtStack *sp, OFDMModulator_1 *obj, const creal_T
  varargin_1[576], const real_T varargin_2[48], creal_T varargout_1[960])
{
  const mxArray *y;
  static const int32_T iv60[2] = { 1, 45 };

  const mxArray *m9;
  char_T cv70[45];
  int32_T i;
  static const char_T cv71[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C',
    'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv61[2] = { 1, 4 };

  char_T cv72[4];
  static const char_T cv73[4] = { 's', 't', 'e', 'p' };

  OFDMModulator_1 *b_obj;
  const mxArray *c_y;
  static const int32_T iv62[2] = { 1, 51 };

  char_T cv74[51];
  static const char_T cv75[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l',
    'e', 'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *d_y;
  static const int32_T iv63[2] = { 1, 5 };

  char_T cv76[5];
  static const char_T cv77[5] = { 's', 'e', 't', 'u', 'p' };

  real_T ii_data[768];
  int32_T j;
  int32_T iy;
  static const int8_T iv64[11] = { 0, 1, 2, 3, 4, 5, 59, 60, 61, 62, 63 };

  static const int16_T iv65[48] = { 11, 25, 39, 53, 75, 89, 103, 117, 139, 153,
    167, 181, 203, 217, 231, 245, 267, 281, 295, 309, 331, 345, 359, 373, 395,
    409, 423, 437, 459, 473, 487, 501, 523, 537, 551, 565, 587, 601, 615, 629,
    651, 665, 679, 693, 715, 729, 743, 757 };

  boolean_T x[768];
  int32_T ii_size[1];
  int32_T b_ii_data[768];
  int32_T b_ii_size[1];
  int32_T i2;
  creal_T packedData[768];
  emxArray_int32_T *r2;
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
    m9 = mxCreateCharArray(2, iv60);
    for (i = 0; i < 45; i++) {
      cv70[i] = cv71[i];
    }

    emlrtInitCharArrayR2013a(sp, 45, m9, cv70);
    emlrtAssign(&y, m9);
    b_y = NULL;
    m9 = mxCreateCharArray(2, iv61);
    for (i = 0; i < 4; i++) {
      cv72[i] = cv73[i];
    }

    emlrtInitCharArrayR2013a(sp, 4, m9, cv72);
    emlrtAssign(&b_y, m9);
    st.site = &eb_emlrtRSI;
    b_error(&st, message(&st, y, b_y, &emlrtMCI), &emlrtMCI);
  }

  if (!obj->isInitialized) {
    st.site = &eb_emlrtRSI;
    b_obj = obj;
    if (!b_obj->isInitialized) {
    } else {
      c_y = NULL;
      m9 = mxCreateCharArray(2, iv62);
      for (i = 0; i < 51; i++) {
        cv74[i] = cv75[i];
      }

      emlrtInitCharArrayR2013a(&st, 51, m9, cv74);
      emlrtAssign(&c_y, m9);
      d_y = NULL;
      m9 = mxCreateCharArray(2, iv63);
      for (i = 0; i < 5; i++) {
        cv76[i] = cv77[i];
      }

      emlrtInitCharArrayR2013a(&st, 5, m9, cv76);
      emlrtAssign(&d_y, m9);
      b_st.site = &eb_emlrtRSI;
      b_error(&b_st, message(&b_st, c_y, d_y, &emlrtMCI), &emlrtMCI);
    }

    b_st.site = &eb_emlrtRSI;
    c_SystemProp_matlabCodegenSetAn(b_obj);
    b_st.site = &eb_emlrtRSI;
    b_st.site = &eb_emlrtRSI;
    b_st.site = &eb_emlrtRSI;
    b_st.site = &eb_emlrtRSI;
    SystemCore_validateProperties();
    b_st.site = &eb_emlrtRSI;
    b_st.site = &eb_emlrtRSI;
    b_st.site = &eb_emlrtRSI;
    b_st.site = &eb_emlrtRSI;
    b_st.site = &eb_emlrtRSI;
    b_st.site = &eb_emlrtRSI;
    for (j = 0; j < 768; j++) {
      ii_data[j] = 1.0;
    }

    d_SystemProp_matlabCodegenSetAn(b_obj, ii_data);
    for (j = 0; j < 768; j++) {
      ii_data[j] = b_obj->pFullGrid[j];
    }

    for (j = 0; j < 12; j++) {
      for (iy = 0; iy < 11; iy++) {
        ii_data[iv64[iy] + (j << 6)] = 0.0;
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
      ii_data[iv65[j]] = 2.0;
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

    c_st.site = &wc_emlrtRSI;
    e_SystemProp_matlabCodegenSetAn(&c_st, b_obj, ii_data, b_ii_size);
    b_st.site = &eb_emlrtRSI;
  }

  st.site = &eb_emlrtRSI;
  st.site = &eb_emlrtRSI;
  st.site = &eb_emlrtRSI;
  b_st.site = &eb_emlrtRSI;
  b_st.site = &eb_emlrtRSI;
  st.site = &eb_emlrtRSI;
  st.site = &eb_emlrtRSI;
  st.site = &eb_emlrtRSI;
  b_st.site = &eb_emlrtRSI;
  b_st.site = &eb_emlrtRSI;
  st.site = &eb_emlrtRSI;
  st.site = &eb_emlrtRSI;
  st.site = &eb_emlrtRSI;
  b_obj = obj;
  for (j = 0; j < 768; j++) {
    packedData[j].re = b_obj->pFullGrid[j];
    packedData[j].im = 0.0;
  }

  emxInit_int32_T(&st, &r2, 1, &h_emlrtRTEI, TRUE);
  j = r2->size[0];
  r2->size[0] = b_obj->pDataLinearIndices->size[0];
  emxEnsureCapacity(&st, (emxArray__common *)r2, j, (int32_T)sizeof(int32_T),
                    &h_emlrtRTEI);
  i2 = b_obj->pDataLinearIndices->size[0];
  for (j = 0; j < i2; j++) {
    temp_re = b_obj->pDataLinearIndices->data[j];
    iy = (int32_T)emlrtIntegerCheckFastR2012b(temp_re, &emlrtDCI, &st);
    r2->data[j] = emlrtDynamicBoundsCheckFastR2012b(iy, 1, 768, &d_emlrtBCI, &st);
  }

  j = r2->size[0];
  emlrtSizeEqCheck1DFastR2012b(j, 576, &b_emlrtECI, &st);
  i2 = r2->size[0];
  for (j = 0; j < i2; j++) {
    packedData[r2->data[j] - 1] = varargin_1[j];
  }

  emxFree_int32_T(&r2);
  for (j = 0; j < 48; j++) {
    packedData[iv65[j]].re = varargin_2[j];
    packedData[iv65[j]].im = 0.0;
  }

  b_st.site = &ad_emlrtRSI;
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

  b_st.site = &bd_emlrtRSI;
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

  b_st.site = &cd_emlrtRSI;
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

  b_st.site = &dd_emlrtRSI;
  memcpy(&varargout_1[0], &postCP[0], 960U * sizeof(creal_T));
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void f_SystemCore_step(const emlrtStack *sp, commcodegen_CRCGenerator_6 *obj,
  const real_T varargin_1[560], real_T varargout_1[563])
{
  const mxArray *y;
  static const int32_T iv88[2] = { 1, 45 };

  const mxArray *m13;
  char_T cv94[45];
  int32_T i;
  static const char_T cv95[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C',
    'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv89[2] = { 1, 4 };

  char_T cv96[4];
  static const char_T cv97[4] = { 's', 't', 'e', 'p' };

  commcodegen_CRCGenerator_6 *b_obj;
  const mxArray *c_y;
  static const int32_T iv90[2] = { 1, 51 };

  char_T cv98[51];
  static const char_T cv99[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l',
    'e', 'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *d_y;
  static const int32_T iv91[2] = { 1, 5 };

  char_T cv100[5];
  static const char_T cv101[5] = { 's', 'e', 't', 'u', 'p' };

  int32_T k;
  static const int16_T value[8] = { 560, 1, 1, 1, 1, 1, 1, 1 };

  boolean_T anyInputSizeChanged;
  boolean_T exitg1;
  static const int16_T iv92[8] = { 560, 1, 1, 1, 1, 1, 1, 1 };

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
    m13 = mxCreateCharArray(2, iv88);
    for (i = 0; i < 45; i++) {
      cv94[i] = cv95[i];
    }

    emlrtInitCharArrayR2013a(sp, 45, m13, cv94);
    emlrtAssign(&y, m13);
    b_y = NULL;
    m13 = mxCreateCharArray(2, iv89);
    for (i = 0; i < 4; i++) {
      cv96[i] = cv97[i];
    }

    emlrtInitCharArrayR2013a(sp, 4, m13, cv96);
    emlrtAssign(&b_y, m13);
    st.site = &eb_emlrtRSI;
    b_error(&st, message(&st, y, b_y, &emlrtMCI), &emlrtMCI);
  }

  if (!obj->isInitialized) {
    st.site = &eb_emlrtRSI;
    b_obj = obj;
    if (!b_obj->isInitialized) {
    } else {
      c_y = NULL;
      m13 = mxCreateCharArray(2, iv90);
      for (i = 0; i < 51; i++) {
        cv98[i] = cv99[i];
      }

      emlrtInitCharArrayR2013a(&st, 51, m13, cv98);
      emlrtAssign(&c_y, m13);
      d_y = NULL;
      m13 = mxCreateCharArray(2, iv91);
      for (i = 0; i < 5; i++) {
        cv100[i] = cv101[i];
      }

      emlrtInitCharArrayR2013a(&st, 5, m13, cv100);
      emlrtAssign(&d_y, m13);
      b_st.site = &eb_emlrtRSI;
      b_error(&b_st, message(&b_st, c_y, d_y, &emlrtMCI), &emlrtMCI);
    }

    b_st.site = &eb_emlrtRSI;
    b_obj->isInitialized = TRUE;
    b_st.site = &eb_emlrtRSI;
    b_st.site = &eb_emlrtRSI;
    b_st.site = &eb_emlrtRSI;
    for (k = 0; k < 8; k++) {
      b_obj->inputVarSize1[k] = (uint32_T)value[k];
    }

    b_st.site = &eb_emlrtRSI;
    b_st.site = &eb_emlrtRSI;
    b_st.site = &eb_emlrtRSI;
    b_st.site = &eb_emlrtRSI;
    b_st.site = &eb_emlrtRSI;
    b_st.site = &eb_emlrtRSI;
    b_st.site = &eb_emlrtRSI;
    b_st.site = &eb_emlrtRSI;
  }

  st.site = &eb_emlrtRSI;
  st.site = &eb_emlrtRSI;
  st.site = &eb_emlrtRSI;
  b_st.site = &eb_emlrtRSI;
  b_st.site = &eb_emlrtRSI;
  st.site = &eb_emlrtRSI;
  st.site = &eb_emlrtRSI;
  b_obj = obj;
  anyInputSizeChanged = FALSE;
  k = 0;
  exitg1 = FALSE;
  while ((exitg1 == FALSE) && (k < 8)) {
    if (b_obj->inputVarSize1[k] != (uint32_T)iv92[k]) {
      anyInputSizeChanged = TRUE;
      b_st.site = &eb_emlrtRSI;
      for (k = 0; k < 8; k++) {
        b_obj->inputVarSize1[k] = (uint32_T)value[k];
      }

      exitg1 = TRUE;
    } else {
      k++;
    }
  }

  if (anyInputSizeChanged) {
    st.site = &eb_emlrtRSI;
    st.site = &eb_emlrtRSI;
  }

  st.site = &eb_emlrtRSI;
  b_st.site = &eb_emlrtRSI;
  b_st.site = &eb_emlrtRSI;
  st.site = &eb_emlrtRSI;
  st.site = &eb_emlrtRSI;
  st.site = &eb_emlrtRSI;
  b_obj = obj;
  b_st.site = &dg_emlrtRSI;
  b_st.site = &dg_emlrtRSI;
  b_st.site = &dg_emlrtRSI;
  b_st.site = &dg_emlrtRSI;
  b_st.site = &dg_emlrtRSI;
  b_st.site = &dg_emlrtRSI;
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
  b_st.site = &dg_emlrtRSI;
}

void g_SystemCore_step(const emlrtStack *sp, commcodegen_BPSKModulator_1 *obj,
  const real_T varargin_1[563], creal_T varargout_1[563])
{
  const mxArray *y;
  static const int32_T iv93[2] = { 1, 45 };

  const mxArray *m14;
  char_T cv102[45];
  int32_T i;
  static const char_T cv103[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C',
    'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv94[2] = { 1, 4 };

  char_T cv104[4];
  static const char_T cv105[4] = { 's', 't', 'e', 'p' };

  commcodegen_BPSKModulator_1 *b_obj;
  const mxArray *c_y;
  static const int32_T iv95[2] = { 1, 51 };

  char_T cv106[51];
  static const char_T cv107[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l',
    'e', 'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *d_y;
  static const int32_T iv96[2] = { 1, 5 };

  char_T cv108[5];
  static const char_T cv109[5] = { 's', 'e', 't', 'u', 'p' };

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
    m14 = mxCreateCharArray(2, iv93);
    for (i = 0; i < 45; i++) {
      cv102[i] = cv103[i];
    }

    emlrtInitCharArrayR2013a(sp, 45, m14, cv102);
    emlrtAssign(&y, m14);
    b_y = NULL;
    m14 = mxCreateCharArray(2, iv94);
    for (i = 0; i < 4; i++) {
      cv104[i] = cv105[i];
    }

    emlrtInitCharArrayR2013a(sp, 4, m14, cv104);
    emlrtAssign(&b_y, m14);
    st.site = &eb_emlrtRSI;
    b_error(&st, message(&st, y, b_y, &emlrtMCI), &emlrtMCI);
  }

  if (!obj->isInitialized) {
    st.site = &eb_emlrtRSI;
    b_obj = obj;
    if (!b_obj->isInitialized) {
    } else {
      c_y = NULL;
      m14 = mxCreateCharArray(2, iv95);
      for (i = 0; i < 51; i++) {
        cv106[i] = cv107[i];
      }

      emlrtInitCharArrayR2013a(&st, 51, m14, cv106);
      emlrtAssign(&c_y, m14);
      d_y = NULL;
      m14 = mxCreateCharArray(2, iv96);
      for (i = 0; i < 5; i++) {
        cv108[i] = cv109[i];
      }

      emlrtInitCharArrayR2013a(&st, 5, m14, cv108);
      emlrtAssign(&d_y, m14);
      b_st.site = &eb_emlrtRSI;
      b_error(&b_st, message(&b_st, c_y, d_y, &emlrtMCI), &emlrtMCI);
    }

    b_st.site = &eb_emlrtRSI;
    b_obj->isInitialized = TRUE;
    b_st.site = &eb_emlrtRSI;
    b_st.site = &eb_emlrtRSI;
    b_st.site = &eb_emlrtRSI;
    for (i = 0; i < 8; i++) {
      b_obj->inputVarSize1[i] = (uint32_T)value[i];
    }

    b_st.site = &eb_emlrtRSI;
    b_st.site = &eb_emlrtRSI;
    b_st.site = &eb_emlrtRSI;
    b_st.site = &eb_emlrtRSI;
    b_st.site = &eb_emlrtRSI;
    b_st.site = &eb_emlrtRSI;
    b_st.site = &eb_emlrtRSI;
    b_st.site = &eb_emlrtRSI;
  }

  st.site = &eb_emlrtRSI;
  st.site = &eb_emlrtRSI;
  st.site = &eb_emlrtRSI;
  b_st.site = &eb_emlrtRSI;
  b_st.site = &eb_emlrtRSI;
  st.site = &eb_emlrtRSI;
  st.site = &eb_emlrtRSI;
  b_obj = obj;
  anyInputSizeChanged = FALSE;
  i = 0;
  exitg1 = FALSE;
  while ((exitg1 == FALSE) && (i < 8)) {
    if (b_obj->inputVarSize1[i] != (uint32_T)iv97[i]) {
      anyInputSizeChanged = TRUE;
      b_st.site = &eb_emlrtRSI;
      for (i = 0; i < 8; i++) {
        b_obj->inputVarSize1[i] = (uint32_T)value[i];
      }

      exitg1 = TRUE;
    } else {
      i++;
    }
  }

  if (anyInputSizeChanged) {
    st.site = &eb_emlrtRSI;
    st.site = &eb_emlrtRSI;
  }

  st.site = &eb_emlrtRSI;
  b_st.site = &eb_emlrtRSI;
  b_st.site = &eb_emlrtRSI;
  st.site = &eb_emlrtRSI;
  st.site = &eb_emlrtRSI;
  st.site = &eb_emlrtRSI;
  c_Nondirect_stepImpl(obj, varargin_1, varargout_1);
}

/* End of code generation (SystemCore.c) */
