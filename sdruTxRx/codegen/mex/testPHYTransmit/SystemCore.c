/*
 * SystemCore.c
 *
 * Code generation for function 'SystemCore'
 *
 * C source code generated on: Sat Mar 29 15:48:37 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testPHYTransmit.h"
#include "SystemCore.h"
#include "SDRuTransmitter.h"
#include "sendComplexDoubleData.h"
#include "SDRuReceiver.h"
#include "testPHYTransmit_emxutil.h"
#include "OFDMModulator.h"
#include "testPHYTransmit_mexutil.h"
#include "testPHYTransmit_data.h"

/* Variable Definitions */
static emlrtRSInfo rc_emlrtRSI = { 318, "OFDMModulator",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/OFDMModulator.m" };

static emlrtRSInfo sc_emlrtRSI = { 163, "OFDMBase",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/OFDMBase.m" };

static emlrtRSInfo wc_emlrtRSI = { 419, "OFDMModulator",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/OFDMModulator.m" };

static emlrtRSInfo xc_emlrtRSI = { 25, "ifft",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/datafun/ifft.m" };

static emlrtRSInfo yc_emlrtRSI = { 49, "eml_fft",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_fft.m" };

static emlrtRSInfo ad_emlrtRSI = { 113, "eml_fft",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_fft.m" };

static emlrtRSInfo ef_emlrtRSI = { 73, "reportSDRuStatus",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdru/reportSDRuStatus.m" };

static emlrtRSInfo gf_emlrtRSI = { 63, "reportSDRuStatus",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdru/reportSDRuStatus.m" };

static emlrtRSInfo if_emlrtRSI = { 53, "reportSDRuStatus",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdru/reportSDRuStatus.m" };

static emlrtRSInfo kf_emlrtRSI = { 42, "reportSDRuStatus",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdru/reportSDRuStatus.m" };

static emlrtRTEInfo f_emlrtRTEI = { 1, 13, "SystemCore",
  "/opt/MATLAB/R2013a/toolbox/shared/system/coder/+matlab/+system/+coder/SystemCore.p"
};

static emlrtBCInfo d_emlrtBCI = { 1, 768, 403, 9, "packedData", "OFDMModulator",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/OFDMModulator.m", 0 };

/* Function Declarations */
static const mxArray *c_message(const mxArray *b, const mxArray *c, const
  mxArray *d, emlrtMCInfo *location);

/* Function Definitions */
static const mxArray *c_message(const mxArray *b, const mxArray *c, const
  mxArray *d, emlrtMCInfo *location)
{
  const mxArray *pArrays[3];
  const mxArray *m35;
  pArrays[0] = b;
  pArrays[1] = c;
  pArrays[2] = d;
  return emlrtCallMATLABR2012b(emlrtRootTLSGlobal, 1, &m35, 3, pArrays,
    "message", TRUE, location);
}

void SystemCore_checkTunableProps(commcodegen_BPSKModulator *obj)
{
  commcodegen_BPSKModulator *b_obj;
  if (obj->TunablePropsChanged) {
    emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    b_obj = obj;
    b_obj->TunablePropsChanged = FALSE;
    emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  }
}

void SystemCore_setup(commcodegen_BPSKModulator *obj)
{
  const mxArray *y;
  static const int32_T iv31[2] = { 1, 51 };

  const mxArray *m6;
  char_T cv35[51];
  int32_T i;
  static const char_T cv36[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l',
    'e', 'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv32[2] = { 1, 5 };

  char_T cv37[5];
  static const char_T cv38[5] = { 's', 'e', 't', 'u', 'p' };

  commcodegen_BPSKModulator *b_obj;
  static const int16_T value[8] = { 563, 1, 1, 1, 1, 1, 1, 1 };

  if (!obj->isInitialized) {
  } else {
    emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    y = NULL;
    m6 = mxCreateCharArray(2, iv31);
    for (i = 0; i < 51; i++) {
      cv35[i] = cv36[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 51, m6, cv35);
    emlrtAssign(&y, m6);
    b_y = NULL;
    m6 = mxCreateCharArray(2, iv32);
    for (i = 0; i < 5; i++) {
      cv37[i] = cv38[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 5, m6, cv37);
    emlrtAssign(&b_y, m6);
    c_error(message(y, b_y, &b_emlrtMCI), &b_emlrtMCI);
    emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  b_obj->isInitialized = TRUE;
  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  for (i = 0; i < 8; i++) {
    b_obj->inputVarSize1[i] = (uint32_T)value[i];
  }

  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&gc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&gc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&gc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&gc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  b_obj->TunablePropsChanged = FALSE;
  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
}

void SystemCore_step(OFDMModulator_4 *obj, creal_T varargout_1[64])
{
  const mxArray *y;
  static const int32_T iv12[2] = { 1, 45 };

  const mxArray *m1;
  char_T cv7[45];
  int32_T i;
  static const char_T cv8[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C',
    'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv13[2] = { 1, 4 };

  char_T cv9[4];
  static const char_T cv10[4] = { 's', 't', 'e', 'p' };

  OFDMModulator_4 *b_obj;
  const mxArray *c_y;
  static const int32_T iv14[2] = { 1, 51 };

  char_T cv11[51];
  static const char_T cv12[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l',
    'e', 'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *d_y;
  static const int32_T iv15[2] = { 1, 5 };

  char_T cv13[5];
  static const char_T cv14[5] = { 's', 'e', 't', 'u', 'p' };

  real_T value[64];
  static const int8_T iv16[11] = { 0, 1, 2, 3, 4, 5, 59, 60, 61, 62, 63 };

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

  if (!obj->isReleased) {
  } else {
    emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    y = NULL;
    m1 = mxCreateCharArray(2, iv12);
    for (i = 0; i < 45; i++) {
      cv7[i] = cv8[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 45, m1, cv7);
    emlrtAssign(&y, m1);
    b_y = NULL;
    m1 = mxCreateCharArray(2, iv13);
    for (i = 0; i < 4; i++) {
      cv9[i] = cv10[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 4, m1, cv9);
    emlrtAssign(&b_y, m1);
    c_error(message(y, b_y, &b_emlrtMCI), &b_emlrtMCI);
    emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  }

  if (!obj->isInitialized) {
    emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    b_obj = obj;
    if (!b_obj->isInitialized) {
    } else {
      emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
      c_y = NULL;
      m1 = mxCreateCharArray(2, iv14);
      for (i = 0; i < 51; i++) {
        cv11[i] = cv12[i];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 51, m1, cv11);
      emlrtAssign(&c_y, m1);
      d_y = NULL;
      m1 = mxCreateCharArray(2, iv15);
      for (i = 0; i < 5; i++) {
        cv13[i] = cv14[i];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 5, m1, cv13);
      emlrtAssign(&d_y, m1);
      c_error(message(c_y, d_y, &b_emlrtMCI), &b_emlrtMCI);
      emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    }

    emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->isInitialized = TRUE;
    emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&mb_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&mb_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&nb_emlrtRSI, emlrtRootTLSGlobal);
    for (i = 0; i < 64; i++) {
      b_obj->pFullGrid[i] = 1.0;
    }

    emlrtPopRtStackR2012b(&nb_emlrtRSI, emlrtRootTLSGlobal);
    for (i = 0; i < 64; i++) {
      value[i] = b_obj->pFullGrid[i];
    }

    for (i = 0; i < 11; i++) {
      value[iv16[i]] = 0.0;
    }

    emlrtPushRtStackR2012b(&ob_emlrtRSI, emlrtRootTLSGlobal);
    for (i = 0; i < 64; i++) {
      b_obj->pFullGrid[i] = value[i];
    }

    emlrtPopRtStackR2012b(&ob_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&pb_emlrtRSI, emlrtRootTLSGlobal);
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

    i = b_obj->pDataLinearIndices->size[0];
    b_obj->pDataLinearIndices->size[0] = ii;
    emxEnsureCapacity((emxArray__common *)b_obj->pDataLinearIndices, i, (int32_T)
                      sizeof(real_T), &f_emlrtRTEI);
    for (i = 0; i < ii; i++) {
      b_obj->pDataLinearIndices->data[i] = ii_data[i];
    }

    emlrtPopRtStackR2012b(&pb_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->TunablePropsChanged = FALSE;
    emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  if (b_obj->TunablePropsChanged) {
    emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->TunablePropsChanged = FALSE;
    emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  OFDMModulator_stepImpl(obj, dcv1, varargout_1);
  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
}

void b_SystemCore_checkTunableProps(commcodegen_BPSKModulator *obj)
{
  commcodegen_BPSKModulator *b_obj;
  if (obj->TunablePropsChanged) {
    emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    b_obj = obj;
    b_obj->TunablePropsChanged = FALSE;
    emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  }
}

void b_SystemCore_setup(commcodegen_BPSKModulator *obj)
{
  const mxArray *y;
  static const int32_T iv34[2] = { 1, 51 };

  const mxArray *m7;
  char_T cv39[51];
  int32_T i;
  static const char_T cv40[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l',
    'e', 'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv35[2] = { 1, 5 };

  char_T cv41[5];
  static const char_T cv42[5] = { 's', 'e', 't', 'u', 'p' };

  commcodegen_BPSKModulator *b_obj;
  static const int8_T value[8] = { 13, 1, 1, 1, 1, 1, 1, 1 };

  if (!obj->isInitialized) {
  } else {
    emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    y = NULL;
    m7 = mxCreateCharArray(2, iv34);
    for (i = 0; i < 51; i++) {
      cv39[i] = cv40[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 51, m7, cv39);
    emlrtAssign(&y, m7);
    b_y = NULL;
    m7 = mxCreateCharArray(2, iv35);
    for (i = 0; i < 5; i++) {
      cv41[i] = cv42[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 5, m7, cv41);
    emlrtAssign(&b_y, m7);
    c_error(message(y, b_y, &b_emlrtMCI), &b_emlrtMCI);
    emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  b_obj->isInitialized = TRUE;
  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  for (i = 0; i < 8; i++) {
    b_obj->inputVarSize1[i] = (uint32_T)value[i];
  }

  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&gc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&gc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&gc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&gc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  b_obj->TunablePropsChanged = FALSE;
  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
}

void b_SystemCore_step(OFDMModulator_4 *obj, creal_T varargout_1[64])
{
  const mxArray *y;
  static const int32_T iv17[2] = { 1, 45 };

  const mxArray *m2;
  char_T cv15[45];
  int32_T i;
  static const char_T cv16[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C',
    'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv18[2] = { 1, 4 };

  char_T cv17[4];
  static const char_T cv18[4] = { 's', 't', 'e', 'p' };

  OFDMModulator_4 *b_obj;
  const mxArray *c_y;
  static const int32_T iv19[2] = { 1, 51 };

  char_T cv19[51];
  static const char_T cv20[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l',
    'e', 'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *d_y;
  static const int32_T iv20[2] = { 1, 5 };

  char_T cv21[5];
  static const char_T cv22[5] = { 's', 'e', 't', 'u', 'p' };

  real_T value[64];
  static const int8_T iv21[11] = { 0, 1, 2, 3, 4, 5, 59, 60, 61, 62, 63 };

  boolean_T x[64];
  int8_T ii_data[64];
  int32_T ii;
  boolean_T exitg1;
  boolean_T guard1 = FALSE;
  int8_T b_ii_data[64];
  creal_T dcv2[53];
  static const int8_T iv22[53] = { 1, 1, -1, -1, 1, 1, -1, 1, -1, 1, 1, 1, 1, 1,
    1, -1, -1, 1, 1, -1, 1, -1, 1, 1, 1, 1, 0, 1, -1, -1, 1, 1, -1, 1, -1, 1, -1,
    -1, -1, -1, -1, 1, 1, -1, -1, 1, -1, 1, -1, 1, 1, 1, 1 };

  if (!obj->isReleased) {
  } else {
    emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    y = NULL;
    m2 = mxCreateCharArray(2, iv17);
    for (i = 0; i < 45; i++) {
      cv15[i] = cv16[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 45, m2, cv15);
    emlrtAssign(&y, m2);
    b_y = NULL;
    m2 = mxCreateCharArray(2, iv18);
    for (i = 0; i < 4; i++) {
      cv17[i] = cv18[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 4, m2, cv17);
    emlrtAssign(&b_y, m2);
    c_error(message(y, b_y, &b_emlrtMCI), &b_emlrtMCI);
    emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  }

  if (!obj->isInitialized) {
    emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    b_obj = obj;
    if (!b_obj->isInitialized) {
    } else {
      emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
      c_y = NULL;
      m2 = mxCreateCharArray(2, iv19);
      for (i = 0; i < 51; i++) {
        cv19[i] = cv20[i];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 51, m2, cv19);
      emlrtAssign(&c_y, m2);
      d_y = NULL;
      m2 = mxCreateCharArray(2, iv20);
      for (i = 0; i < 5; i++) {
        cv21[i] = cv22[i];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 5, m2, cv21);
      emlrtAssign(&d_y, m2);
      c_error(message(c_y, d_y, &b_emlrtMCI), &b_emlrtMCI);
      emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    }

    emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->isInitialized = TRUE;
    emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&mb_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&mb_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&nb_emlrtRSI, emlrtRootTLSGlobal);
    for (i = 0; i < 64; i++) {
      b_obj->pFullGrid[i] = 1.0;
    }

    emlrtPopRtStackR2012b(&nb_emlrtRSI, emlrtRootTLSGlobal);
    for (i = 0; i < 64; i++) {
      value[i] = b_obj->pFullGrid[i];
    }

    for (i = 0; i < 11; i++) {
      value[iv21[i]] = 0.0;
    }

    emlrtPushRtStackR2012b(&ob_emlrtRSI, emlrtRootTLSGlobal);
    for (i = 0; i < 64; i++) {
      b_obj->pFullGrid[i] = value[i];
    }

    emlrtPopRtStackR2012b(&ob_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&pb_emlrtRSI, emlrtRootTLSGlobal);
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

    i = b_obj->pDataLinearIndices->size[0];
    b_obj->pDataLinearIndices->size[0] = ii;
    emxEnsureCapacity((emxArray__common *)b_obj->pDataLinearIndices, i, (int32_T)
                      sizeof(real_T), &f_emlrtRTEI);
    for (i = 0; i < ii; i++) {
      b_obj->pDataLinearIndices->data[i] = ii_data[i];
    }

    emlrtPopRtStackR2012b(&pb_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->TunablePropsChanged = FALSE;
    emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  if (b_obj->TunablePropsChanged) {
    emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->TunablePropsChanged = FALSE;
    emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  for (i = 0; i < 53; i++) {
    dcv2[i].re = iv22[i];
    dcv2[i].im = 0.0;
  }

  OFDMModulator_stepImpl(obj, dcv2, varargout_1);
  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
}

void c_SystemCore_checkTunableProps(commcodegen_BPSKModulator_191 *obj)
{
  commcodegen_BPSKModulator_191 *b_obj;
  if (obj->TunablePropsChanged) {
    emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    b_obj = obj;
    b_obj->TunablePropsChanged = FALSE;
    emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  }
}

boolean_T c_SystemCore_detectInputSizeCha(commcodegen_BPSKModulator *obj)
{
  boolean_T anyInputSizeChanged;
  int32_T k;
  boolean_T exitg1;
  static const int16_T iv33[8] = { 563, 1, 1, 1, 1, 1, 1, 1 };

  commcodegen_BPSKModulator *b_obj;
  static const int16_T inputSize[8] = { 563, 1, 1, 1, 1, 1, 1, 1 };

  anyInputSizeChanged = FALSE;
  k = 0;
  exitg1 = FALSE;
  while ((exitg1 == FALSE) && (k < 8)) {
    if (obj->inputVarSize1[k] != (uint32_T)iv33[k]) {
      anyInputSizeChanged = TRUE;
      emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
      b_obj = obj;
      for (k = 0; k < 8; k++) {
        b_obj->inputVarSize1[k] = (uint32_T)inputSize[k];
      }

      emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
      exitg1 = TRUE;
    } else {
      k++;
    }
  }

  return anyInputSizeChanged;
}

void c_SystemCore_setup(commcodegen_BPSKModulator_191 *obj)
{
  const mxArray *y;
  static const int32_T iv73[2] = { 1, 51 };

  const mxArray *m14;
  char_T cv72[51];
  int32_T i;
  static const char_T cv73[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l',
    'e', 'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv74[2] = { 1, 5 };

  char_T cv74[5];
  static const char_T cv75[5] = { 's', 'e', 't', 'u', 'p' };

  commcodegen_BPSKModulator_191 *b_obj;
  static const int16_T value[8] = { 563, 1, 1, 1, 1, 1, 1, 1 };

  if (!obj->isInitialized) {
  } else {
    emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    y = NULL;
    m14 = mxCreateCharArray(2, iv73);
    for (i = 0; i < 51; i++) {
      cv72[i] = cv73[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 51, m14, cv72);
    emlrtAssign(&y, m14);
    b_y = NULL;
    m14 = mxCreateCharArray(2, iv74);
    for (i = 0; i < 5; i++) {
      cv74[i] = cv75[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 5, m14, cv74);
    emlrtAssign(&b_y, m14);
    c_error(message(y, b_y, &b_emlrtMCI), &b_emlrtMCI);
    emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  b_obj->isInitialized = TRUE;
  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  for (i = 0; i < 8; i++) {
    b_obj->inputVarSize1[i] = (uint32_T)value[i];
  }

  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&gc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&gc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&gc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&gc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  b_obj->TunablePropsChanged = FALSE;
  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
}

void c_SystemCore_step(commcodegen_CRCGenerator *obj, const real_T varargin_1
  [560], real_T varargout_1[563])
{
  const mxArray *y;
  static const int32_T iv26[2] = { 1, 45 };

  const mxArray *m5;
  char_T cv27[45];
  int32_T i;
  static const char_T cv28[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C',
    'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv27[2] = { 1, 4 };

  char_T cv29[4];
  static const char_T cv30[4] = { 's', 't', 'e', 'p' };

  commcodegen_CRCGenerator *b_obj;
  const mxArray *c_y;
  static const int32_T iv28[2] = { 1, 51 };

  char_T cv31[51];
  static const char_T cv32[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l',
    'e', 'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *d_y;
  static const int32_T iv29[2] = { 1, 5 };

  char_T cv33[5];
  static const char_T cv34[5] = { 's', 'e', 't', 'u', 'p' };

  int32_T k;
  static const int16_T value[8] = { 560, 1, 1, 1, 1, 1, 1, 1 };

  boolean_T exitg1;
  static const int16_T iv30[8] = { 560, 1, 1, 1, 1, 1, 1, 1 };

  comm_CRCGenerator_0 *c_obj;
  uint32_T shReg;
  uint32_T input;
  uint32_T bitMask;
  int32_T j;
  uint32_T inpBit;
  if (!obj->isReleased) {
  } else {
    emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    y = NULL;
    m5 = mxCreateCharArray(2, iv26);
    for (i = 0; i < 45; i++) {
      cv27[i] = cv28[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 45, m5, cv27);
    emlrtAssign(&y, m5);
    b_y = NULL;
    m5 = mxCreateCharArray(2, iv27);
    for (i = 0; i < 4; i++) {
      cv29[i] = cv30[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 4, m5, cv29);
    emlrtAssign(&b_y, m5);
    c_error(message(y, b_y, &b_emlrtMCI), &b_emlrtMCI);
    emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  }

  if (!obj->isInitialized) {
    emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    b_obj = obj;
    if (!b_obj->isInitialized) {
    } else {
      emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
      c_y = NULL;
      m5 = mxCreateCharArray(2, iv28);
      for (i = 0; i < 51; i++) {
        cv31[i] = cv32[i];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 51, m5, cv31);
      emlrtAssign(&c_y, m5);
      d_y = NULL;
      m5 = mxCreateCharArray(2, iv29);
      for (i = 0; i < 5; i++) {
        cv33[i] = cv34[i];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 5, m5, cv33);
      emlrtAssign(&d_y, m5);
      c_error(message(c_y, d_y, &b_emlrtMCI), &b_emlrtMCI);
      emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    }

    emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->isInitialized = TRUE;
    emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    for (k = 0; k < 8; k++) {
      b_obj->inputVarSize1[k] = (uint32_T)value[k];
    }

    emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&dc_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&dc_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&dc_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&dc_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->TunablePropsChanged = FALSE;
    emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  if (b_obj->TunablePropsChanged) {
    emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->TunablePropsChanged = FALSE;
    emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  k = 0;
  exitg1 = FALSE;
  while ((exitg1 == FALSE) && (k < 8)) {
    if (b_obj->inputVarSize1[k] != (uint32_T)iv30[k]) {
      emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
      for (k = 0; k < 8; k++) {
        b_obj->inputVarSize1[k] = (uint32_T)value[k];
      }

      emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
      exitg1 = TRUE;
    } else {
      k++;
    }
  }

  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&dc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&dc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  emlrtPushRtStackR2012b(&fc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&dc_emlrtRSI, emlrtRootTLSGlobal);
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
  emlrtPopRtStackR2012b(&dc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&fc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&fc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&dc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&dc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&fc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
}

void d_SystemCore_checkTunableProps(commcodegen_BPSKModulator_191 *obj)
{
  commcodegen_BPSKModulator_191 *b_obj;
  if (obj->TunablePropsChanged) {
    emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    b_obj = obj;
    b_obj->TunablePropsChanged = FALSE;
    emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  }
}

boolean_T d_SystemCore_detectInputSizeCha(commcodegen_BPSKModulator *obj)
{
  boolean_T anyInputSizeChanged;
  int32_T k;
  boolean_T exitg1;
  static const int8_T iv36[8] = { 13, 1, 1, 1, 1, 1, 1, 1 };

  commcodegen_BPSKModulator *b_obj;
  static const int8_T inputSize[8] = { 13, 1, 1, 1, 1, 1, 1, 1 };

  anyInputSizeChanged = FALSE;
  k = 0;
  exitg1 = FALSE;
  while ((exitg1 == FALSE) && (k < 8)) {
    if (obj->inputVarSize1[k] != (uint32_T)iv36[k]) {
      anyInputSizeChanged = TRUE;
      emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
      b_obj = obj;
      for (k = 0; k < 8; k++) {
        b_obj->inputVarSize1[k] = (uint32_T)inputSize[k];
      }

      emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
      exitg1 = TRUE;
    } else {
      k++;
    }
  }

  return anyInputSizeChanged;
}

void d_SystemCore_setup(commcodegen_BPSKModulator_191 *obj)
{
  const mxArray *y;
  static const int32_T iv76[2] = { 1, 51 };

  const mxArray *m15;
  char_T cv76[51];
  int32_T i;
  static const char_T cv77[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l',
    'e', 'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv77[2] = { 1, 5 };

  char_T cv78[5];
  static const char_T cv79[5] = { 's', 'e', 't', 'u', 'p' };

  commcodegen_BPSKModulator_191 *b_obj;
  static const int8_T value[8] = { 13, 1, 1, 1, 1, 1, 1, 1 };

  if (!obj->isInitialized) {
  } else {
    emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    y = NULL;
    m15 = mxCreateCharArray(2, iv76);
    for (i = 0; i < 51; i++) {
      cv76[i] = cv77[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 51, m15, cv76);
    emlrtAssign(&y, m15);
    b_y = NULL;
    m15 = mxCreateCharArray(2, iv77);
    for (i = 0; i < 5; i++) {
      cv78[i] = cv79[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 5, m15, cv78);
    emlrtAssign(&b_y, m15);
    c_error(message(y, b_y, &b_emlrtMCI), &b_emlrtMCI);
    emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  b_obj->isInitialized = TRUE;
  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  for (i = 0; i < 8; i++) {
    b_obj->inputVarSize1[i] = (uint32_T)value[i];
  }

  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&gc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&gc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&gc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&gc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  b_obj->TunablePropsChanged = FALSE;
  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
}

void d_SystemCore_step(OFDMModulator_196 *obj, const creal_T varargin_1[576],
  const real_T varargin_2[48], creal_T varargout_1[960])
{
  const mxArray *y;
  static const int32_T iv37[2] = { 1, 45 };

  const mxArray *m8;
  char_T cv43[45];
  int32_T i;
  static const char_T cv44[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C',
    'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv38[2] = { 1, 4 };

  char_T cv45[4];
  static const char_T cv46[4] = { 's', 't', 'e', 'p' };

  OFDMModulator_196 *b_obj;
  const mxArray *c_y;
  static const int32_T iv39[2] = { 1, 51 };

  char_T cv47[51];
  static const char_T cv48[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l',
    'e', 'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *d_y;
  static const int32_T iv40[2] = { 1, 5 };

  char_T cv49[5];
  static const char_T cv50[5] = { 's', 'e', 't', 'u', 'p' };

  creal_T packedData[768];
  int32_T j;
  emxArray_int32_T *r1;
  int32_T i2;
  real_T temp_re;
  int32_T iy;
  static const int16_T iv41[48] = { 11, 25, 39, 53, 75, 89, 103, 117, 139, 153,
    167, 181, 203, 217, 231, 245, 267, 281, 295, 309, 331, 345, 359, 373, 395,
    409, 423, 437, 459, 473, 487, 501, 523, 537, 551, 565, 587, 601, 615, 629,
    651, 665, 679, 693, 715, 729, 743, 757 };

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
  emlrtHeapReferenceStackEnterFcnR2012b(emlrtRootTLSGlobal);
  if (!obj->isReleased) {
  } else {
    emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    y = NULL;
    m8 = mxCreateCharArray(2, iv37);
    for (i = 0; i < 45; i++) {
      cv43[i] = cv44[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 45, m8, cv43);
    emlrtAssign(&y, m8);
    b_y = NULL;
    m8 = mxCreateCharArray(2, iv38);
    for (i = 0; i < 4; i++) {
      cv45[i] = cv46[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 4, m8, cv45);
    emlrtAssign(&b_y, m8);
    c_error(message(y, b_y, &b_emlrtMCI), &b_emlrtMCI);
    emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  }

  if (!obj->isInitialized) {
    emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    b_obj = obj;
    if (!b_obj->isInitialized) {
    } else {
      emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
      c_y = NULL;
      m8 = mxCreateCharArray(2, iv39);
      for (i = 0; i < 51; i++) {
        cv47[i] = cv48[i];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 51, m8, cv47);
      emlrtAssign(&c_y, m8);
      d_y = NULL;
      m8 = mxCreateCharArray(2, iv40);
      for (i = 0; i < 5; i++) {
        cv49[i] = cv50[i];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 5, m8, cv49);
      emlrtAssign(&d_y, m8);
      c_error(message(c_y, d_y, &b_emlrtMCI), &b_emlrtMCI);
      emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    }

    emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->isInitialized = TRUE;
    emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&rc_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&sc_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&sc_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&rc_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    OFDMModulator_setupImpl(b_obj);
    emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->TunablePropsChanged = FALSE;
    emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  if (b_obj->TunablePropsChanged) {
    emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&rc_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&sc_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&sc_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&rc_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->TunablePropsChanged = FALSE;
    emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  for (j = 0; j < 768; j++) {
    packedData[j].re = b_obj->pFullGrid[j];
    packedData[j].im = 0.0;
  }

  emxInit_int32_T(&r1, 1, &f_emlrtRTEI, TRUE);
  j = r1->size[0];
  r1->size[0] = b_obj->pDataLinearIndices->size[0];
  emxEnsureCapacity((emxArray__common *)r1, j, (int32_T)sizeof(int32_T),
                    &f_emlrtRTEI);
  i2 = b_obj->pDataLinearIndices->size[0];
  for (j = 0; j < i2; j++) {
    temp_re = b_obj->pDataLinearIndices->data[j];
    iy = (int32_T)emlrtIntegerCheckFastR2012b(temp_re, &emlrtDCI,
      emlrtRootTLSGlobal);
    r1->data[j] = emlrtDynamicBoundsCheckFastR2012b(iy, 1, 768, &d_emlrtBCI,
      emlrtRootTLSGlobal);
  }

  j = r1->size[0];
  emlrtSizeEqCheck1DFastR2012b(j, 576, &emlrtECI, emlrtRootTLSGlobal);
  i2 = r1->size[0];
  for (j = 0; j < i2; j++) {
    packedData[r1->data[j] - 1] = varargin_1[j];
  }

  emxFree_int32_T(&r1);
  for (j = 0; j < 48; j++) {
    packedData[iv41[j]].re = varargin_2[j];
    packedData[iv41[j]].im = 0.0;
  }

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

  emlrtPushRtStackR2012b(&wc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&xc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&yc_emlrtRSI, emlrtRootTLSGlobal);
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
    emlrtPushRtStackR2012b(&ad_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&ad_emlrtRSI, emlrtRootTLSGlobal);
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

  emlrtPopRtStackR2012b(&yc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&xc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&wc_emlrtRSI, emlrtRootTLSGlobal);
  iy = 0;
  for (i = 0; i < 12; i++) {
    ix = i << 4;
    for (i2 = 0; i2 < 16; i2++) {
      if (ix >= 0) {
        b_ix = (int32_T)((uint32_T)ix >> 4);
      } else {
        b_ix = ~(int32_T)((uint32_T)~ix >> 4);
      }

      postCP[iy] = postIFFT[(ix % 16 + (b_ix << 6)) + 48];
      ix++;
      iy++;
    }

    ix = i << 6;
    for (i2 = 0; i2 < 64; i2++) {
      postCP[iy] = postIFFT[ix];
      ix++;
      iy++;
    }
  }

  memcpy(&varargout_1[0], &postCP[0], 960U * sizeof(creal_T));
  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtHeapReferenceStackLeaveFcnR2012b(emlrtRootTLSGlobal);
}

void e_SystemCore_checkTunableProps(commcodegen_BPSKModulator_348 *obj)
{
  commcodegen_BPSKModulator_348 *b_obj;
  if (obj->TunablePropsChanged) {
    emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    b_obj = obj;
    b_obj->TunablePropsChanged = FALSE;
    emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  }
}

boolean_T e_SystemCore_detectInputSizeCha(commcodegen_BPSKModulator_191 *obj)
{
  boolean_T anyInputSizeChanged;
  int32_T k;
  boolean_T exitg1;
  static const int16_T iv75[8] = { 563, 1, 1, 1, 1, 1, 1, 1 };

  commcodegen_BPSKModulator_191 *b_obj;
  static const int16_T inputSize[8] = { 563, 1, 1, 1, 1, 1, 1, 1 };

  anyInputSizeChanged = FALSE;
  k = 0;
  exitg1 = FALSE;
  while ((exitg1 == FALSE) && (k < 8)) {
    if (obj->inputVarSize1[k] != (uint32_T)iv75[k]) {
      anyInputSizeChanged = TRUE;
      emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
      b_obj = obj;
      for (k = 0; k < 8; k++) {
        b_obj->inputVarSize1[k] = (uint32_T)inputSize[k];
      }

      emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
      exitg1 = TRUE;
    } else {
      k++;
    }
  }

  return anyInputSizeChanged;
}

void e_SystemCore_setup(commcodegen_BPSKModulator_348 *obj)
{
  const mxArray *y;
  static const int32_T iv97[2] = { 1, 51 };

  const mxArray *m19;
  char_T cv96[51];
  int32_T i;
  static const char_T cv97[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l',
    'e', 'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv98[2] = { 1, 5 };

  char_T cv98[5];
  static const char_T cv99[5] = { 's', 'e', 't', 'u', 'p' };

  commcodegen_BPSKModulator_348 *b_obj;
  static const int16_T value[8] = { 563, 1, 1, 1, 1, 1, 1, 1 };

  if (!obj->isInitialized) {
  } else {
    emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    y = NULL;
    m19 = mxCreateCharArray(2, iv97);
    for (i = 0; i < 51; i++) {
      cv96[i] = cv97[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 51, m19, cv96);
    emlrtAssign(&y, m19);
    b_y = NULL;
    m19 = mxCreateCharArray(2, iv98);
    for (i = 0; i < 5; i++) {
      cv98[i] = cv99[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 5, m19, cv98);
    emlrtAssign(&b_y, m19);
    c_error(message(y, b_y, &b_emlrtMCI), &b_emlrtMCI);
    emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  b_obj->isInitialized = TRUE;
  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  for (i = 0; i < 8; i++) {
    b_obj->inputVarSize1[i] = (uint32_T)value[i];
  }

  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&gc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&gc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&gc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&gc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  b_obj->TunablePropsChanged = FALSE;
  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
}

void e_SystemCore_step(commcodegen_CRCGenerator_256 *obj, const real_T
  varargin_1[560], real_T varargout_1[563])
{
  const mxArray *y;
  static const int32_T iv68[2] = { 1, 45 };

  const mxArray *m13;
  char_T cv64[45];
  int32_T i;
  static const char_T cv65[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C',
    'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv69[2] = { 1, 4 };

  char_T cv66[4];
  static const char_T cv67[4] = { 's', 't', 'e', 'p' };

  commcodegen_CRCGenerator_256 *b_obj;
  const mxArray *c_y;
  static const int32_T iv70[2] = { 1, 51 };

  char_T cv68[51];
  static const char_T cv69[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l',
    'e', 'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *d_y;
  static const int32_T iv71[2] = { 1, 5 };

  char_T cv70[5];
  static const char_T cv71[5] = { 's', 'e', 't', 'u', 'p' };

  int32_T k;
  static const int16_T value[8] = { 560, 1, 1, 1, 1, 1, 1, 1 };

  boolean_T exitg1;
  static const int16_T iv72[8] = { 560, 1, 1, 1, 1, 1, 1, 1 };

  comm_CRCGenerator_3 *c_obj;
  uint32_T shReg;
  uint32_T input;
  uint32_T bitMask;
  int32_T j;
  uint32_T inpBit;
  if (!obj->isReleased) {
  } else {
    emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    y = NULL;
    m13 = mxCreateCharArray(2, iv68);
    for (i = 0; i < 45; i++) {
      cv64[i] = cv65[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 45, m13, cv64);
    emlrtAssign(&y, m13);
    b_y = NULL;
    m13 = mxCreateCharArray(2, iv69);
    for (i = 0; i < 4; i++) {
      cv66[i] = cv67[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 4, m13, cv66);
    emlrtAssign(&b_y, m13);
    c_error(message(y, b_y, &b_emlrtMCI), &b_emlrtMCI);
    emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  }

  if (!obj->isInitialized) {
    emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    b_obj = obj;
    if (!b_obj->isInitialized) {
    } else {
      emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
      c_y = NULL;
      m13 = mxCreateCharArray(2, iv70);
      for (i = 0; i < 51; i++) {
        cv68[i] = cv69[i];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 51, m13, cv68);
      emlrtAssign(&c_y, m13);
      d_y = NULL;
      m13 = mxCreateCharArray(2, iv71);
      for (i = 0; i < 5; i++) {
        cv70[i] = cv71[i];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 5, m13, cv70);
      emlrtAssign(&d_y, m13);
      c_error(message(c_y, d_y, &b_emlrtMCI), &b_emlrtMCI);
      emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    }

    emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->isInitialized = TRUE;
    emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    for (k = 0; k < 8; k++) {
      b_obj->inputVarSize1[k] = (uint32_T)value[k];
    }

    emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&dc_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&dc_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&dc_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&dc_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->TunablePropsChanged = FALSE;
    emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  if (b_obj->TunablePropsChanged) {
    emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->TunablePropsChanged = FALSE;
    emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  k = 0;
  exitg1 = FALSE;
  while ((exitg1 == FALSE) && (k < 8)) {
    if (b_obj->inputVarSize1[k] != (uint32_T)iv72[k]) {
      emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
      for (k = 0; k < 8; k++) {
        b_obj->inputVarSize1[k] = (uint32_T)value[k];
      }

      emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
      exitg1 = TRUE;
    } else {
      k++;
    }
  }

  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&dc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&dc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  emlrtPushRtStackR2012b(&fc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&dc_emlrtRSI, emlrtRootTLSGlobal);
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
  emlrtPopRtStackR2012b(&dc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&fc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&fc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&dc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&dc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&fc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
}

void f_SystemCore_checkTunableProps(commcodegen_BPSKModulator_348 *obj)
{
  commcodegen_BPSKModulator_348 *b_obj;
  if (obj->TunablePropsChanged) {
    emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    b_obj = obj;
    b_obj->TunablePropsChanged = FALSE;
    emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  }
}

boolean_T f_SystemCore_detectInputSizeCha(commcodegen_BPSKModulator_191 *obj)
{
  boolean_T anyInputSizeChanged;
  int32_T k;
  boolean_T exitg1;
  static const int8_T iv78[8] = { 13, 1, 1, 1, 1, 1, 1, 1 };

  commcodegen_BPSKModulator_191 *b_obj;
  static const int8_T inputSize[8] = { 13, 1, 1, 1, 1, 1, 1, 1 };

  anyInputSizeChanged = FALSE;
  k = 0;
  exitg1 = FALSE;
  while ((exitg1 == FALSE) && (k < 8)) {
    if (obj->inputVarSize1[k] != (uint32_T)iv78[k]) {
      anyInputSizeChanged = TRUE;
      emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
      b_obj = obj;
      for (k = 0; k < 8; k++) {
        b_obj->inputVarSize1[k] = (uint32_T)inputSize[k];
      }

      emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
      exitg1 = TRUE;
    } else {
      k++;
    }
  }

  return anyInputSizeChanged;
}

void f_SystemCore_setup(commcodegen_BPSKModulator_348 *obj)
{
  const mxArray *y;
  static const int32_T iv100[2] = { 1, 51 };

  const mxArray *m20;
  char_T cv100[51];
  int32_T i;
  static const char_T cv101[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l',
    'e', 'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv101[2] = { 1, 5 };

  char_T cv102[5];
  static const char_T cv103[5] = { 's', 'e', 't', 'u', 'p' };

  commcodegen_BPSKModulator_348 *b_obj;
  static const int8_T value[8] = { 13, 1, 1, 1, 1, 1, 1, 1 };

  if (!obj->isInitialized) {
  } else {
    emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    y = NULL;
    m20 = mxCreateCharArray(2, iv100);
    for (i = 0; i < 51; i++) {
      cv100[i] = cv101[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 51, m20, cv100);
    emlrtAssign(&y, m20);
    b_y = NULL;
    m20 = mxCreateCharArray(2, iv101);
    for (i = 0; i < 5; i++) {
      cv102[i] = cv103[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 5, m20, cv102);
    emlrtAssign(&b_y, m20);
    c_error(message(y, b_y, &b_emlrtMCI), &b_emlrtMCI);
    emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  b_obj->isInitialized = TRUE;
  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  for (i = 0; i < 8; i++) {
    b_obj->inputVarSize1[i] = (uint32_T)value[i];
  }

  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&gc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&gc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&gc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&gc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  b_obj->TunablePropsChanged = FALSE;
  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
}

void f_SystemCore_step(commcodegen_CRCGenerator_478 *obj, const real_T
  varargin_1[560], real_T varargout_1[563])
{
  const mxArray *y;
  static const int32_T iv92[2] = { 1, 45 };

  const mxArray *m18;
  char_T cv88[45];
  int32_T i;
  static const char_T cv89[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C',
    'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv93[2] = { 1, 4 };

  char_T cv90[4];
  static const char_T cv91[4] = { 's', 't', 'e', 'p' };

  commcodegen_CRCGenerator_478 *b_obj;
  const mxArray *c_y;
  static const int32_T iv94[2] = { 1, 51 };

  char_T cv92[51];
  static const char_T cv93[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l',
    'e', 'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *d_y;
  static const int32_T iv95[2] = { 1, 5 };

  char_T cv94[5];
  static const char_T cv95[5] = { 's', 'e', 't', 'u', 'p' };

  int32_T k;
  static const int16_T value[8] = { 560, 1, 1, 1, 1, 1, 1, 1 };

  boolean_T exitg1;
  static const int16_T iv96[8] = { 560, 1, 1, 1, 1, 1, 1, 1 };

  comm_CRCGenerator_7 *c_obj;
  uint32_T shReg;
  uint32_T input;
  uint32_T bitMask;
  int32_T j;
  uint32_T inpBit;
  if (!obj->isReleased) {
  } else {
    emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    y = NULL;
    m18 = mxCreateCharArray(2, iv92);
    for (i = 0; i < 45; i++) {
      cv88[i] = cv89[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 45, m18, cv88);
    emlrtAssign(&y, m18);
    b_y = NULL;
    m18 = mxCreateCharArray(2, iv93);
    for (i = 0; i < 4; i++) {
      cv90[i] = cv91[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 4, m18, cv90);
    emlrtAssign(&b_y, m18);
    c_error(message(y, b_y, &b_emlrtMCI), &b_emlrtMCI);
    emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  }

  if (!obj->isInitialized) {
    emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    b_obj = obj;
    if (!b_obj->isInitialized) {
    } else {
      emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
      c_y = NULL;
      m18 = mxCreateCharArray(2, iv94);
      for (i = 0; i < 51; i++) {
        cv92[i] = cv93[i];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 51, m18, cv92);
      emlrtAssign(&c_y, m18);
      d_y = NULL;
      m18 = mxCreateCharArray(2, iv95);
      for (i = 0; i < 5; i++) {
        cv94[i] = cv95[i];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 5, m18, cv94);
      emlrtAssign(&d_y, m18);
      c_error(message(c_y, d_y, &b_emlrtMCI), &b_emlrtMCI);
      emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    }

    emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->isInitialized = TRUE;
    emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    for (k = 0; k < 8; k++) {
      b_obj->inputVarSize1[k] = (uint32_T)value[k];
    }

    emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&dc_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&dc_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&dc_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&dc_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->TunablePropsChanged = FALSE;
    emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  if (b_obj->TunablePropsChanged) {
    emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->TunablePropsChanged = FALSE;
    emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  k = 0;
  exitg1 = FALSE;
  while ((exitg1 == FALSE) && (k < 8)) {
    if (b_obj->inputVarSize1[k] != (uint32_T)iv96[k]) {
      emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
      for (k = 0; k < 8; k++) {
        b_obj->inputVarSize1[k] = (uint32_T)value[k];
      }

      emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
      exitg1 = TRUE;
    } else {
      k++;
    }
  }

  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&dc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&dc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  emlrtPushRtStackR2012b(&fc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&dc_emlrtRSI, emlrtRootTLSGlobal);
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
  emlrtPopRtStackR2012b(&dc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&fc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&fc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&dc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&dc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&fc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
}

boolean_T g_SystemCore_detectInputSizeCha(commcodegen_BPSKModulator_348 *obj)
{
  boolean_T anyInputSizeChanged;
  int32_T k;
  boolean_T exitg1;
  static const int16_T iv99[8] = { 563, 1, 1, 1, 1, 1, 1, 1 };

  commcodegen_BPSKModulator_348 *b_obj;
  static const int16_T inputSize[8] = { 563, 1, 1, 1, 1, 1, 1, 1 };

  anyInputSizeChanged = FALSE;
  k = 0;
  exitg1 = FALSE;
  while ((exitg1 == FALSE) && (k < 8)) {
    if (obj->inputVarSize1[k] != (uint32_T)iv99[k]) {
      anyInputSizeChanged = TRUE;
      emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
      b_obj = obj;
      for (k = 0; k < 8; k++) {
        b_obj->inputVarSize1[k] = (uint32_T)inputSize[k];
      }

      emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
      exitg1 = TRUE;
    } else {
      k++;
    }
  }

  return anyInputSizeChanged;
}

void g_SystemCore_step(testPHYTransmitStackData *SD, comm_SDRuTransmitter *obj,
  const creal_T varargin_1[38400])
{
  const mxArray *y;
  static const int32_T iv103[2] = { 1, 45 };

  const mxArray *m21;
  char_T cv104[45];
  int32_T i;
  static const char_T cv105[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C',
    'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv104[2] = { 1, 4 };

  char_T cv106[4];
  static const char_T cv107[4] = { 's', 't', 'e', 'p' };

  comm_SDRuTransmitter *b_obj;
  const mxArray *c_y;
  static const int32_T iv105[2] = { 1, 51 };

  char_T cv108[51];
  static const char_T cv109[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l',
    'e', 'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *d_y;
  static const int32_T iv106[2] = { 1, 5 };

  char_T cv110[5];
  static const char_T cv111[5] = { 's', 'e', 't', 'u', 'p' };

  int32_T i18;
  static const uint16_T value[8] = { 38400U, 1U, 1U, 1U, 1U, 1U, 1U, 1U };

  int32_T errMsg_size[2];
  char_T errMsg_data[1024];
  UsrpErrorCapiEnumT deviceStatus;
  const mxArray *e_y;
  static const int32_T iv107[2] = { 1, 35 };

  char_T cv112[35];
  static const char_T cv113[35] = { 's', 'd', 'r', 'u', ':', 'r', 'e', 'p', 'o',
    'r', 't', 'S', 'D', 'R', 'u', 'S', 't', 'a', 't', 'u', 's', ':', 'N', 'o',
    't', 'C', 'o', 'm', 'p', 'a', 't', 'i', 'b', 'l', 'e' };

  const mxArray *f_y;
  static const int32_T iv108[2] = { 1, 12 };

  char_T cv114[12];
  static const char_T cv115[12] = { '1', '9', '2', '.', '1', '6', '8', '.', '1',
    '0', '.', '2' };

  const mxArray *g_y;
  static const int32_T iv109[2] = { 1, 43 };

  char_T cv116[43];
  static const char_T cv117[43] = { 'r', 'e', 't', 'u', 'r', 'n', 'e', 'd', ' ',
    'b', 'y', ' ', '\'', 'g', 'e', 't', 'S', 'D', 'R', 'u', 'D', 'r', 'i', 'v',
    'e', 'r', 'V', 'e', 'r', 's', 'i', 'o', 'n', '\'', ' ', 'f', 'u', 'n', 'c',
    't', 'i', 'o', 'n' };

  const mxArray *h_y;
  static const int32_T iv110[2] = { 1, 35 };

  static const char_T cv118[35] = { 's', 'd', 'r', 'u', ':', 'r', 'e', 'p', 'o',
    'r', 't', 'S', 'D', 'R', 'u', 'S', 't', 'a', 't', 'u', 's', ':', 'N', 'o',
    't', 'R', 'e', 's', 'p', 'o', 'n', 'd', 'i', 'n', 'g' };

  const mxArray *i_y;
  static const int32_T iv111[2] = { 1, 12 };

  const mxArray *j_y;
  static const int32_T iv112[2] = { 1, 26 };

  char_T cv119[26];
  static const char_T cv120[26] = { 's', 'd', 'r', 'u', ':', 'r', 'e', 'p', 'o',
    'r', 't', 'S', 'D', 'R', 'u', 'S', 't', 'a', 't', 'u', 's', ':', 'B', 'u',
    's', 'y' };

  const mxArray *k_y;
  static const int32_T iv113[2] = { 1, 12 };

  const mxArray *l_y;
  static const int32_T iv114[2] = { 1, 35 };

  static const char_T cv121[35] = { 's', 'd', 'r', 'u', ':', 'r', 'e', 'p', 'o',
    'r', 't', 'S', 'D', 'R', 'u', 'S', 't', 'a', 't', 'u', 's', ':', 'U', 'n',
    'k', 'n', 'o', 'w', 'n', 'S', 't', 'a', 't', 'u', 's' };

  boolean_T b_value[4];
  boolean_T exitg1;
  static const uint16_T uv0[8] = { 38400U, 1U, 1U, 1U, 1U, 1U, 1U, 1U };

  if (!obj->isReleased) {
  } else {
    emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    y = NULL;
    m21 = mxCreateCharArray(2, iv103);
    for (i = 0; i < 45; i++) {
      cv104[i] = cv105[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 45, m21, cv104);
    emlrtAssign(&y, m21);
    b_y = NULL;
    m21 = mxCreateCharArray(2, iv104);
    for (i = 0; i < 4; i++) {
      cv106[i] = cv107[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 4, m21, cv106);
    emlrtAssign(&b_y, m21);
    c_error(message(y, b_y, &b_emlrtMCI), &b_emlrtMCI);
    emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  }

  if (!obj->isInitialized) {
    emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    b_obj = obj;
    if (!b_obj->isInitialized) {
    } else {
      emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
      c_y = NULL;
      m21 = mxCreateCharArray(2, iv105);
      for (i = 0; i < 51; i++) {
        cv108[i] = cv109[i];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 51, m21, cv108);
      emlrtAssign(&c_y, m21);
      d_y = NULL;
      m21 = mxCreateCharArray(2, iv106);
      for (i = 0; i < 5; i++) {
        cv110[i] = cv111[i];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 5, m21, cv110);
      emlrtAssign(&d_y, m21);
      c_error(message(c_y, d_y, &b_emlrtMCI), &b_emlrtMCI);
      emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    }

    emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->isInitialized = TRUE;
    emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    for (i18 = 0; i18 < 8; i18++) {
      b_obj->inputVarSize1[i18] = value[i18];
    }

    emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&kd_emlrtRSI, emlrtRootTLSGlobal);
    SDRuTransmitter_setupImplLocal(b_obj, &deviceStatus, errMsg_data,
      errMsg_size);
    emlrtPopRtStackR2012b(&kd_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&kd_emlrtRSI, emlrtRootTLSGlobal);

    /* reportSDRuStatus SDRu status reporter */
    /*    reportSDRuStatus(STATUS,MSG,IP,METHOD) reports the SDRu status based on */
    /*    the STATUS input. STATUS is a UsrpErrorCapiEnumT type. IP is the IP */
    /*    address of the USRP(R) radio. METHOD is a UsrpReportMethodEnumT type and */
    /*    can be Warning, Error , or None. */
    /*  */
    /*    USRP(R) is a trademark of National Instruments Corp. */
    /*    Copyright 2012 The MathWorks, Inc. */
    switch (deviceStatus) {
     case UsrpDriverNotCompatible:
      emlrtPushRtStackR2012b(&kf_emlrtRSI, emlrtRootTLSGlobal);
      if (!(deviceStatus == UsrpDriverNotCompatible)) {
      } else {
        emlrtPushRtStackR2012b(&qc_emlrtRSI, emlrtRootTLSGlobal);
        e_y = NULL;
        m21 = mxCreateCharArray(2, iv107);
        for (i = 0; i < 35; i++) {
          cv112[i] = cv113[i];
        }

        emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 35, m21, cv112);
        emlrtAssign(&e_y, m21);
        f_y = NULL;
        m21 = mxCreateCharArray(2, iv108);
        for (i = 0; i < 12; i++) {
          cv114[i] = cv115[i];
        }

        emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 12, m21, cv114);
        emlrtAssign(&f_y, m21);
        g_y = NULL;
        m21 = mxCreateCharArray(2, iv109);
        for (i = 0; i < 43; i++) {
          cv116[i] = cv117[i];
        }

        emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 43, m21, cv116);
        emlrtAssign(&g_y, m21);
        c_error(c_message(e_y, f_y, g_y, &h_emlrtMCI), &h_emlrtMCI);
        emlrtPopRtStackR2012b(&qc_emlrtRSI, emlrtRootTLSGlobal);
      }

      emlrtPopRtStackR2012b(&kf_emlrtRSI, emlrtRootTLSGlobal);
      break;

     case UsrpDriverNotResponding:
      emlrtPushRtStackR2012b(&if_emlrtRSI, emlrtRootTLSGlobal);
      if (!(deviceStatus == UsrpDriverNotResponding)) {
      } else {
        emlrtPushRtStackR2012b(&qc_emlrtRSI, emlrtRootTLSGlobal);
        h_y = NULL;
        m21 = mxCreateCharArray(2, iv110);
        for (i = 0; i < 35; i++) {
          cv112[i] = cv118[i];
        }

        emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 35, m21, cv112);
        emlrtAssign(&h_y, m21);
        i_y = NULL;
        m21 = mxCreateCharArray(2, iv111);
        for (i = 0; i < 12; i++) {
          cv114[i] = cv115[i];
        }

        emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 12, m21, cv114);
        emlrtAssign(&i_y, m21);
        c_error(message(h_y, i_y, &h_emlrtMCI), &h_emlrtMCI);
        emlrtPopRtStackR2012b(&qc_emlrtRSI, emlrtRootTLSGlobal);
      }

      emlrtPopRtStackR2012b(&if_emlrtRSI, emlrtRootTLSGlobal);
      break;

     case UsrpDriverBusy:
      emlrtPushRtStackR2012b(&gf_emlrtRSI, emlrtRootTLSGlobal);
      if (!(deviceStatus == UsrpDriverBusy)) {
      } else {
        emlrtPushRtStackR2012b(&qc_emlrtRSI, emlrtRootTLSGlobal);
        j_y = NULL;
        m21 = mxCreateCharArray(2, iv112);
        for (i = 0; i < 26; i++) {
          cv119[i] = cv120[i];
        }

        emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 26, m21, cv119);
        emlrtAssign(&j_y, m21);
        k_y = NULL;
        m21 = mxCreateCharArray(2, iv113);
        for (i = 0; i < 12; i++) {
          cv114[i] = cv115[i];
        }

        emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 12, m21, cv114);
        emlrtAssign(&k_y, m21);
        c_error(message(j_y, k_y, &h_emlrtMCI), &h_emlrtMCI);
        emlrtPopRtStackR2012b(&qc_emlrtRSI, emlrtRootTLSGlobal);
      }

      emlrtPopRtStackR2012b(&gf_emlrtRSI, emlrtRootTLSGlobal);
      break;

     case UsrpDriverError:
      emlrtPushRtStackR2012b(&ef_emlrtRSI, emlrtRootTLSGlobal);
      if (!(deviceStatus == UsrpDriverError)) {
      } else {
        emlrtPushRtStackR2012b(&qc_emlrtRSI, emlrtRootTLSGlobal);
        l_y = NULL;
        m21 = mxCreateCharArray(2, iv114);
        for (i = 0; i < 35; i++) {
          cv112[i] = cv121[i];
        }

        emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 35, m21, cv112);
        emlrtAssign(&l_y, m21);
        c_error(b_message(l_y, &h_emlrtMCI), &h_emlrtMCI);
        emlrtPopRtStackR2012b(&qc_emlrtRSI, emlrtRootTLSGlobal);
      }

      emlrtPopRtStackR2012b(&ef_emlrtRSI, emlrtRootTLSGlobal);
      break;
    }

    emlrtPopRtStackR2012b(&kd_emlrtRSI, emlrtRootTLSGlobal);
    if (deviceStatus == UsrpDriverSuccess) {
      emlrtPushRtStackR2012b(&kd_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPopRtStackR2012b(&kd_emlrtRSI, emlrtRootTLSGlobal);
    } else {
      emlrtPushRtStackR2012b(&kd_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPopRtStackR2012b(&kd_emlrtRSI, emlrtRootTLSGlobal);
    }

    emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->TunablePropsChanged = FALSE;
    emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  if (b_obj->TunablePropsChanged) {
    emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->TunablePropsChanged = FALSE;
    emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    for (i = 0; i < 4; i++) {
      for (i18 = 0; i18 < 4; i18++) {
        b_value[i18] = b_obj->tunablePropertyChanged[i18];
      }

      b_value[i] = FALSE;
      emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
      for (i18 = 0; i18 < 4; i18++) {
        b_obj->tunablePropertyChanged[i18] = b_value[i18];
      }

      emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    }

    emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  i = 0;
  exitg1 = FALSE;
  while ((exitg1 == FALSE) && (i < 8)) {
    if (b_obj->inputVarSize1[i] != uv0[i]) {
      emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
      for (i18 = 0; i18 < 8; i18++) {
        b_obj->inputVarSize1[i18] = value[i18];
      }

      emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
      exitg1 = TRUE;
    } else {
      i++;
    }
  }

  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  SDRuTransmitter_stepImpl(SD, obj, varargin_1);
  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
}

boolean_T h_SystemCore_detectInputSizeCha(commcodegen_BPSKModulator_348 *obj)
{
  boolean_T anyInputSizeChanged;
  int32_T k;
  boolean_T exitg1;
  static const int8_T iv102[8] = { 13, 1, 1, 1, 1, 1, 1, 1 };

  commcodegen_BPSKModulator_348 *b_obj;
  static const int8_T inputSize[8] = { 13, 1, 1, 1, 1, 1, 1, 1 };

  anyInputSizeChanged = FALSE;
  k = 0;
  exitg1 = FALSE;
  while ((exitg1 == FALSE) && (k < 8)) {
    if (obj->inputVarSize1[k] != (uint32_T)iv102[k]) {
      anyInputSizeChanged = TRUE;
      emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
      b_obj = obj;
      for (k = 0; k < 8; k++) {
        b_obj->inputVarSize1[k] = (uint32_T)inputSize[k];
      }

      emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
      exitg1 = TRUE;
    } else {
      k++;
    }
  }

  return anyInputSizeChanged;
}

void h_SystemCore_step(testPHYTransmitStackData *SD, comm_SDRuReceiver *obj)
{
  const mxArray *y;
  static const int32_T iv118[2] = { 1, 45 };

  const mxArray *m25;
  char_T cv128[45];
  int32_T i;
  static const char_T cv129[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C',
    'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv119[2] = { 1, 4 };

  char_T cv130[4];
  static const char_T cv131[4] = { 's', 't', 'e', 'p' };

  comm_SDRuReceiver *b_obj;
  const mxArray *c_y;
  static const int32_T iv120[2] = { 1, 51 };

  char_T cv132[51];
  static const char_T cv133[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l',
    'e', 'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *d_y;
  static const int32_T iv121[2] = { 1, 5 };

  char_T cv134[5];
  static const char_T cv135[5] = { 's', 'e', 't', 'u', 'p' };

  int32_T errMsg_size[2];
  char_T errMsg_data[1024];
  UsrpErrorCapiEnumT deviceStatus;
  const mxArray *e_y;
  static const int32_T iv122[2] = { 1, 35 };

  char_T cv136[35];
  static const char_T cv137[35] = { 's', 'd', 'r', 'u', ':', 'r', 'e', 'p', 'o',
    'r', 't', 'S', 'D', 'R', 'u', 'S', 't', 'a', 't', 'u', 's', ':', 'N', 'o',
    't', 'C', 'o', 'm', 'p', 'a', 't', 'i', 'b', 'l', 'e' };

  const mxArray *f_y;
  static const int32_T iv123[2] = { 1, 12 };

  char_T cv138[12];
  static const char_T cv139[12] = { '1', '9', '2', '.', '1', '6', '8', '.', '1',
    '0', '.', '2' };

  const mxArray *g_y;
  static const int32_T iv124[2] = { 1, 43 };

  char_T cv140[43];
  static const char_T cv141[43] = { 'r', 'e', 't', 'u', 'r', 'n', 'e', 'd', ' ',
    'b', 'y', ' ', '\'', 'g', 'e', 't', 'S', 'D', 'R', 'u', 'D', 'r', 'i', 'v',
    'e', 'r', 'V', 'e', 'r', 's', 'i', 'o', 'n', '\'', ' ', 'f', 'u', 'n', 'c',
    't', 'i', 'o', 'n' };

  const mxArray *h_y;
  static const int32_T iv125[2] = { 1, 35 };

  static const char_T cv142[35] = { 's', 'd', 'r', 'u', ':', 'r', 'e', 'p', 'o',
    'r', 't', 'S', 'D', 'R', 'u', 'S', 't', 'a', 't', 'u', 's', ':', 'N', 'o',
    't', 'R', 'e', 's', 'p', 'o', 'n', 'd', 'i', 'n', 'g' };

  const mxArray *i_y;
  static const int32_T iv126[2] = { 1, 12 };

  const mxArray *j_y;
  static const int32_T iv127[2] = { 1, 26 };

  char_T cv143[26];
  static const char_T cv144[26] = { 's', 'd', 'r', 'u', ':', 'r', 'e', 'p', 'o',
    'r', 't', 'S', 'D', 'R', 'u', 'S', 't', 'a', 't', 'u', 's', ':', 'B', 'u',
    's', 'y' };

  const mxArray *k_y;
  static const int32_T iv128[2] = { 1, 12 };

  const mxArray *l_y;
  static const int32_T iv129[2] = { 1, 35 };

  static const char_T cv145[35] = { 's', 'd', 'r', 'u', ':', 'r', 'e', 'p', 'o',
    'r', 't', 'S', 'D', 'R', 'u', 'S', 't', 'a', 't', 'u', 's', ':', 'U', 'n',
    'k', 'n', 'o', 'w', 'n', 'S', 't', 'a', 't', 'u', 's' };

  boolean_T value[4];
  int32_T i22;
  if (!obj->isReleased) {
  } else {
    emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    y = NULL;
    m25 = mxCreateCharArray(2, iv118);
    for (i = 0; i < 45; i++) {
      cv128[i] = cv129[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 45, m25, cv128);
    emlrtAssign(&y, m25);
    b_y = NULL;
    m25 = mxCreateCharArray(2, iv119);
    for (i = 0; i < 4; i++) {
      cv130[i] = cv131[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 4, m25, cv130);
    emlrtAssign(&b_y, m25);
    c_error(message(y, b_y, &b_emlrtMCI), &b_emlrtMCI);
    emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  }

  if (!obj->isInitialized) {
    emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    b_obj = obj;
    if (!b_obj->isInitialized) {
    } else {
      emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
      c_y = NULL;
      m25 = mxCreateCharArray(2, iv120);
      for (i = 0; i < 51; i++) {
        cv132[i] = cv133[i];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 51, m25, cv132);
      emlrtAssign(&c_y, m25);
      d_y = NULL;
      m25 = mxCreateCharArray(2, iv121);
      for (i = 0; i < 5; i++) {
        cv134[i] = cv135[i];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 5, m25, cv134);
      emlrtAssign(&d_y, m25);
      c_error(message(c_y, d_y, &b_emlrtMCI), &b_emlrtMCI);
      emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    }

    emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->isInitialized = TRUE;
    emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&kd_emlrtRSI, emlrtRootTLSGlobal);
    SDRuReceiver_setupImplLocal(b_obj, &deviceStatus, errMsg_data, errMsg_size);
    emlrtPopRtStackR2012b(&kd_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&kd_emlrtRSI, emlrtRootTLSGlobal);

    /* reportSDRuStatus SDRu status reporter */
    /*    reportSDRuStatus(STATUS,MSG,IP,METHOD) reports the SDRu status based on */
    /*    the STATUS input. STATUS is a UsrpErrorCapiEnumT type. IP is the IP */
    /*    address of the USRP(R) radio. METHOD is a UsrpReportMethodEnumT type and */
    /*    can be Warning, Error , or None. */
    /*  */
    /*    USRP(R) is a trademark of National Instruments Corp. */
    /*    Copyright 2012 The MathWorks, Inc. */
    switch (deviceStatus) {
     case UsrpDriverNotCompatible:
      emlrtPushRtStackR2012b(&kf_emlrtRSI, emlrtRootTLSGlobal);
      if (!(deviceStatus == UsrpDriverNotCompatible)) {
      } else {
        emlrtPushRtStackR2012b(&qc_emlrtRSI, emlrtRootTLSGlobal);
        e_y = NULL;
        m25 = mxCreateCharArray(2, iv122);
        for (i = 0; i < 35; i++) {
          cv136[i] = cv137[i];
        }

        emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 35, m25, cv136);
        emlrtAssign(&e_y, m25);
        f_y = NULL;
        m25 = mxCreateCharArray(2, iv123);
        for (i = 0; i < 12; i++) {
          cv138[i] = cv139[i];
        }

        emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 12, m25, cv138);
        emlrtAssign(&f_y, m25);
        g_y = NULL;
        m25 = mxCreateCharArray(2, iv124);
        for (i = 0; i < 43; i++) {
          cv140[i] = cv141[i];
        }

        emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 43, m25, cv140);
        emlrtAssign(&g_y, m25);
        c_error(c_message(e_y, f_y, g_y, &h_emlrtMCI), &h_emlrtMCI);
        emlrtPopRtStackR2012b(&qc_emlrtRSI, emlrtRootTLSGlobal);
      }

      emlrtPopRtStackR2012b(&kf_emlrtRSI, emlrtRootTLSGlobal);
      break;

     case UsrpDriverNotResponding:
      emlrtPushRtStackR2012b(&if_emlrtRSI, emlrtRootTLSGlobal);
      if (!(deviceStatus == UsrpDriverNotResponding)) {
      } else {
        emlrtPushRtStackR2012b(&qc_emlrtRSI, emlrtRootTLSGlobal);
        h_y = NULL;
        m25 = mxCreateCharArray(2, iv125);
        for (i = 0; i < 35; i++) {
          cv136[i] = cv142[i];
        }

        emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 35, m25, cv136);
        emlrtAssign(&h_y, m25);
        i_y = NULL;
        m25 = mxCreateCharArray(2, iv126);
        for (i = 0; i < 12; i++) {
          cv138[i] = cv139[i];
        }

        emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 12, m25, cv138);
        emlrtAssign(&i_y, m25);
        c_error(message(h_y, i_y, &h_emlrtMCI), &h_emlrtMCI);
        emlrtPopRtStackR2012b(&qc_emlrtRSI, emlrtRootTLSGlobal);
      }

      emlrtPopRtStackR2012b(&if_emlrtRSI, emlrtRootTLSGlobal);
      break;

     case UsrpDriverBusy:
      emlrtPushRtStackR2012b(&gf_emlrtRSI, emlrtRootTLSGlobal);
      if (!(deviceStatus == UsrpDriverBusy)) {
      } else {
        emlrtPushRtStackR2012b(&qc_emlrtRSI, emlrtRootTLSGlobal);
        j_y = NULL;
        m25 = mxCreateCharArray(2, iv127);
        for (i = 0; i < 26; i++) {
          cv143[i] = cv144[i];
        }

        emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 26, m25, cv143);
        emlrtAssign(&j_y, m25);
        k_y = NULL;
        m25 = mxCreateCharArray(2, iv128);
        for (i = 0; i < 12; i++) {
          cv138[i] = cv139[i];
        }

        emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 12, m25, cv138);
        emlrtAssign(&k_y, m25);
        c_error(message(j_y, k_y, &h_emlrtMCI), &h_emlrtMCI);
        emlrtPopRtStackR2012b(&qc_emlrtRSI, emlrtRootTLSGlobal);
      }

      emlrtPopRtStackR2012b(&gf_emlrtRSI, emlrtRootTLSGlobal);
      break;

     case UsrpDriverError:
      emlrtPushRtStackR2012b(&ef_emlrtRSI, emlrtRootTLSGlobal);
      if (!(deviceStatus == UsrpDriverError)) {
      } else {
        emlrtPushRtStackR2012b(&qc_emlrtRSI, emlrtRootTLSGlobal);
        l_y = NULL;
        m25 = mxCreateCharArray(2, iv129);
        for (i = 0; i < 35; i++) {
          cv136[i] = cv145[i];
        }

        emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 35, m25, cv136);
        emlrtAssign(&l_y, m25);
        c_error(b_message(l_y, &h_emlrtMCI), &h_emlrtMCI);
        emlrtPopRtStackR2012b(&qc_emlrtRSI, emlrtRootTLSGlobal);
      }

      emlrtPopRtStackR2012b(&ef_emlrtRSI, emlrtRootTLSGlobal);
      break;
    }

    emlrtPopRtStackR2012b(&kd_emlrtRSI, emlrtRootTLSGlobal);
    if (deviceStatus == UsrpDriverSuccess) {
      emlrtPushRtStackR2012b(&kd_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPopRtStackR2012b(&kd_emlrtRSI, emlrtRootTLSGlobal);
    } else {
      emlrtPushRtStackR2012b(&kd_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPopRtStackR2012b(&kd_emlrtRSI, emlrtRootTLSGlobal);
    }

    emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->TunablePropsChanged = FALSE;
    emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  if (b_obj->TunablePropsChanged) {
    emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->TunablePropsChanged = FALSE;
    emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    for (i = 0; i < 4; i++) {
      for (i22 = 0; i22 < 4; i22++) {
        value[i22] = b_obj->tunablePropertyChanged[i22];
      }

      value[i] = FALSE;
      emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
      for (i22 = 0; i22 < 4; i22++) {
        b_obj->tunablePropertyChanged[i22] = value[i22];
      }

      emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    }

    emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  SDRuReceiver_stepImpl(SD, obj);
  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
}

/* End of code generation (SystemCore.c) */
