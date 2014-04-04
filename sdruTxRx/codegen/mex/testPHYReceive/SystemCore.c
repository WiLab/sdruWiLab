/*
 * SystemCore.c
 *
 * Code generation for function 'SystemCore'
 *
 * C source code generated on: Thu Apr  3 19:36:37 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testPHYReceive.h"
#include "SystemCore.h"
#include "receiveData.h"
#include "testPHYReceive_emxutil.h"
#include "equalizeOFDM.h"
#include "OFDMModulator.h"
#include "testPHYReceive_mexutil.h"
#include "testPHYReceive_data.h"
#include <stdio.h>

/* Variable Definitions */
static emlrtRSInfo tc_emlrtRSI = { 318, "OFDMModulator",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/OFDMModulator.m" };

static emlrtRSInfo dj_emlrtRSI = { 19, "reset",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/scomp/reset.m" };

static emlrtRSInfo ej_emlrtRSI = { 43, "output",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/scomp/output.m" };

static emlrtRTEInfo i_emlrtRTEI = { 1, 13, "SystemCore",
  "/opt/MATLAB/R2013a/toolbox/shared/system/coder/+matlab/+system/+coder/SystemCore.p"
};

static emlrtBCInfo d_emlrtBCI = { 1, 768, 403, 9, "packedData", "OFDMModulator",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/OFDMModulator.m", 0 };

static emlrtBCInfo y_emlrtBCI = { 1, 64, 171, 28, "postShift", "OFDMDemodulator",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/OFDMDemodulator.m", 0 };

static emlrtRTEInfo cc_emlrtRTEI = { 41, 1, "update",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/scomp/update.m" };

static emlrtRTEInfo dc_emlrtRTEI = { 43, 20, "output",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/scomp/output.m" };

static emlrtRTEInfo ec_emlrtRTEI = { 19, 1, "reset",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/scomp/reset.m" };

static emlrtRTEInfo fc_emlrtRTEI = { 43, 1, "setup",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/scomp/setup.m" };

/* Function Definitions */
void SystemCore_checkTunableProps(commcodegen_BPSKModulator *obj)
{
  commcodegen_BPSKModulator *b_obj;
  if (obj->TunablePropsChanged) {
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    b_obj = obj;
    b_obj->TunablePropsChanged = FALSE;
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  }
}

void SystemCore_reset(dspcodegen_FIRRateConverter *obj)
{
  const mxArray *y;
  static const int32_T iv121[2] = { 1, 45 };

  const mxArray *m27;
  char_T cv135[45];
  int32_T i;
  static const char_T cv136[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C',
    'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv122[2] = { 1, 5 };

  char_T cv137[5];
  static const char_T cv138[5] = { 'r', 'e', 's', 'e', 't' };

  dspcodegen_FIRRateConverter *b_obj;
  dsp_FIRRateConverter_7 *c_obj;
  if (!obj->isReleased) {
  } else {
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    y = NULL;
    m27 = mxCreateCharArray(2, iv121);
    for (i = 0; i < 45; i++) {
      cv135[i] = cv136[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 45, m27, cv135);
    emlrtAssign(&y, m27);
    b_y = NULL;
    m27 = mxCreateCharArray(2, iv122);
    for (i = 0; i < 5; i++) {
      cv137[i] = cv138[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 5, m27, cv137);
    emlrtAssign(&b_y, m27);
    b_error(message(y, b_y, &b_emlrtMCI), &b_emlrtMCI);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  }

  if (obj->isInitialized) {
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    b_obj = obj;
    emlrtPushRtStackR2012b(&cj_emlrtRSI, emlrtRootTLSGlobal);
    c_obj = &b_obj->cSFunObject;
    if (c_obj->S1_isReleased) {
      emlrtErrorWithMessageIdR2012b(emlrtRootTLSGlobal, &ec_emlrtRTEI,
        "MATLAB:system:runtimeMethodCalledWhenReleasedCodegen", 0);
    }

    emlrtPushRtStackR2012b(&dj_emlrtRSI, emlrtRootTLSGlobal);

    /* System object Initialization function: dsp.FIRRateConverter */
    c_obj->W1_InBufIdx = 0;
    for (i = 0; i < 252; i++) {
      c_obj->W0_InBuf[i].re = 0.0;
      c_obj->W0_InBuf[i].im = 0.0;
    }

    emlrtPopRtStackR2012b(&dj_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&cj_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  }
}

void SystemCore_setup(commcodegen_BPSKModulator *obj)
{
  const mxArray *y;
  static const int32_T iv30[2] = { 1, 51 };

  const mxArray *m6;
  char_T cv37[51];
  int32_T i;
  static const char_T cv38[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l',
    'e', 'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv31[2] = { 1, 5 };

  char_T cv39[5];
  static const char_T cv40[5] = { 's', 'e', 't', 'u', 'p' };

  commcodegen_BPSKModulator *b_obj;
  static const int16_T value[8] = { 563, 1, 1, 1, 1, 1, 1, 1 };

  if (!obj->isInitialized) {
  } else {
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    y = NULL;
    m6 = mxCreateCharArray(2, iv30);
    for (i = 0; i < 51; i++) {
      cv37[i] = cv38[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 51, m6, cv37);
    emlrtAssign(&y, m6);
    b_y = NULL;
    m6 = mxCreateCharArray(2, iv31);
    for (i = 0; i < 5; i++) {
      cv39[i] = cv40[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 5, m6, cv39);
    emlrtAssign(&b_y, m6);
    b_error(message(y, b_y, &b_emlrtMCI), &b_emlrtMCI);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  b_obj->isInitialized = TRUE;
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  for (i = 0; i < 8; i++) {
    b_obj->inputVarSize1[i] = (uint32_T)value[i];
  }

  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&ic_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&ic_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&ic_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&ic_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  b_obj->TunablePropsChanged = FALSE;
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
}

void SystemCore_step(OFDMModulator_4 *obj, creal_T varargout_1[64])
{
  const mxArray *y;
  static const int32_T iv11[2] = { 1, 45 };

  const mxArray *m1;
  char_T cv9[45];
  int32_T i;
  static const char_T cv10[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C',
    'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv12[2] = { 1, 4 };

  char_T cv11[4];
  static const char_T cv12[4] = { 's', 't', 'e', 'p' };

  OFDMModulator_4 *b_obj;
  const mxArray *c_y;
  static const int32_T iv13[2] = { 1, 51 };

  char_T cv13[51];
  static const char_T cv14[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l',
    'e', 'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *d_y;
  static const int32_T iv14[2] = { 1, 5 };

  char_T cv15[5];
  static const char_T cv16[5] = { 's', 'e', 't', 'u', 'p' };

  real_T value[64];
  static const int8_T iv15[11] = { 0, 1, 2, 3, 4, 5, 59, 60, 61, 62, 63 };

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
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    y = NULL;
    m1 = mxCreateCharArray(2, iv11);
    for (i = 0; i < 45; i++) {
      cv9[i] = cv10[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 45, m1, cv9);
    emlrtAssign(&y, m1);
    b_y = NULL;
    m1 = mxCreateCharArray(2, iv12);
    for (i = 0; i < 4; i++) {
      cv11[i] = cv12[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 4, m1, cv11);
    emlrtAssign(&b_y, m1);
    b_error(message(y, b_y, &b_emlrtMCI), &b_emlrtMCI);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  }

  if (!obj->isInitialized) {
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    b_obj = obj;
    if (!b_obj->isInitialized) {
    } else {
      emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
      c_y = NULL;
      m1 = mxCreateCharArray(2, iv13);
      for (i = 0; i < 51; i++) {
        cv13[i] = cv14[i];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 51, m1, cv13);
      emlrtAssign(&c_y, m1);
      d_y = NULL;
      m1 = mxCreateCharArray(2, iv14);
      for (i = 0; i < 5; i++) {
        cv15[i] = cv16[i];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 5, m1, cv15);
      emlrtAssign(&d_y, m1);
      b_error(message(c_y, d_y, &b_emlrtMCI), &b_emlrtMCI);
      emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    }

    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->isInitialized = TRUE;
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&ob_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&ob_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&pb_emlrtRSI, emlrtRootTLSGlobal);
    for (i = 0; i < 64; i++) {
      b_obj->pFullGrid[i] = 1.0;
    }

    emlrtPopRtStackR2012b(&pb_emlrtRSI, emlrtRootTLSGlobal);
    for (i = 0; i < 64; i++) {
      value[i] = b_obj->pFullGrid[i];
    }

    for (i = 0; i < 11; i++) {
      value[iv15[i]] = 0.0;
    }

    emlrtPushRtStackR2012b(&qb_emlrtRSI, emlrtRootTLSGlobal);
    for (i = 0; i < 64; i++) {
      b_obj->pFullGrid[i] = value[i];
    }

    emlrtPopRtStackR2012b(&qb_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&rb_emlrtRSI, emlrtRootTLSGlobal);
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
                      sizeof(real_T), &i_emlrtRTEI);
    for (i = 0; i < ii; i++) {
      b_obj->pDataLinearIndices->data[i] = ii_data[i];
    }

    emlrtPopRtStackR2012b(&rb_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->TunablePropsChanged = FALSE;
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  if (b_obj->TunablePropsChanged) {
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->TunablePropsChanged = FALSE;
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  OFDMModulator_stepImpl(obj, dcv1, varargout_1);
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
}

void b_SystemCore_checkTunableProps(commcodegen_BPSKModulator *obj)
{
  commcodegen_BPSKModulator *b_obj;
  if (obj->TunablePropsChanged) {
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    b_obj = obj;
    b_obj->TunablePropsChanged = FALSE;
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  }
}

void b_SystemCore_setup(commcodegen_BPSKModulator *obj)
{
  const mxArray *y;
  static const int32_T iv33[2] = { 1, 51 };

  const mxArray *m7;
  char_T cv41[51];
  int32_T i;
  static const char_T cv42[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l',
    'e', 'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv34[2] = { 1, 5 };

  char_T cv43[5];
  static const char_T cv44[5] = { 's', 'e', 't', 'u', 'p' };

  commcodegen_BPSKModulator *b_obj;
  static const int8_T value[8] = { 13, 1, 1, 1, 1, 1, 1, 1 };

  if (!obj->isInitialized) {
  } else {
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    y = NULL;
    m7 = mxCreateCharArray(2, iv33);
    for (i = 0; i < 51; i++) {
      cv41[i] = cv42[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 51, m7, cv41);
    emlrtAssign(&y, m7);
    b_y = NULL;
    m7 = mxCreateCharArray(2, iv34);
    for (i = 0; i < 5; i++) {
      cv43[i] = cv44[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 5, m7, cv43);
    emlrtAssign(&b_y, m7);
    b_error(message(y, b_y, &b_emlrtMCI), &b_emlrtMCI);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  b_obj->isInitialized = TRUE;
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  for (i = 0; i < 8; i++) {
    b_obj->inputVarSize1[i] = (uint32_T)value[i];
  }

  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&ic_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&ic_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&ic_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&ic_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  b_obj->TunablePropsChanged = FALSE;
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
}

void b_SystemCore_step(OFDMModulator_4 *obj, creal_T varargout_1[64])
{
  const mxArray *y;
  static const int32_T iv16[2] = { 1, 45 };

  const mxArray *m2;
  char_T cv17[45];
  int32_T i;
  static const char_T cv18[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C',
    'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv17[2] = { 1, 4 };

  char_T cv19[4];
  static const char_T cv20[4] = { 's', 't', 'e', 'p' };

  OFDMModulator_4 *b_obj;
  const mxArray *c_y;
  static const int32_T iv18[2] = { 1, 51 };

  char_T cv21[51];
  static const char_T cv22[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l',
    'e', 'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *d_y;
  static const int32_T iv19[2] = { 1, 5 };

  char_T cv23[5];
  static const char_T cv24[5] = { 's', 'e', 't', 'u', 'p' };

  real_T value[64];
  static const int8_T iv20[11] = { 0, 1, 2, 3, 4, 5, 59, 60, 61, 62, 63 };

  boolean_T x[64];
  int8_T ii_data[64];
  int32_T ii;
  boolean_T exitg1;
  boolean_T guard1 = FALSE;
  int8_T b_ii_data[64];
  creal_T dcv2[53];
  static const int8_T iv21[53] = { 1, 1, -1, -1, 1, 1, -1, 1, -1, 1, 1, 1, 1, 1,
    1, -1, -1, 1, 1, -1, 1, -1, 1, 1, 1, 1, 0, 1, -1, -1, 1, 1, -1, 1, -1, 1, -1,
    -1, -1, -1, -1, 1, 1, -1, -1, 1, -1, 1, -1, 1, 1, 1, 1 };

  if (!obj->isReleased) {
  } else {
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    y = NULL;
    m2 = mxCreateCharArray(2, iv16);
    for (i = 0; i < 45; i++) {
      cv17[i] = cv18[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 45, m2, cv17);
    emlrtAssign(&y, m2);
    b_y = NULL;
    m2 = mxCreateCharArray(2, iv17);
    for (i = 0; i < 4; i++) {
      cv19[i] = cv20[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 4, m2, cv19);
    emlrtAssign(&b_y, m2);
    b_error(message(y, b_y, &b_emlrtMCI), &b_emlrtMCI);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  }

  if (!obj->isInitialized) {
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    b_obj = obj;
    if (!b_obj->isInitialized) {
    } else {
      emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
      c_y = NULL;
      m2 = mxCreateCharArray(2, iv18);
      for (i = 0; i < 51; i++) {
        cv21[i] = cv22[i];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 51, m2, cv21);
      emlrtAssign(&c_y, m2);
      d_y = NULL;
      m2 = mxCreateCharArray(2, iv19);
      for (i = 0; i < 5; i++) {
        cv23[i] = cv24[i];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 5, m2, cv23);
      emlrtAssign(&d_y, m2);
      b_error(message(c_y, d_y, &b_emlrtMCI), &b_emlrtMCI);
      emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    }

    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->isInitialized = TRUE;
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&ob_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&ob_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&pb_emlrtRSI, emlrtRootTLSGlobal);
    for (i = 0; i < 64; i++) {
      b_obj->pFullGrid[i] = 1.0;
    }

    emlrtPopRtStackR2012b(&pb_emlrtRSI, emlrtRootTLSGlobal);
    for (i = 0; i < 64; i++) {
      value[i] = b_obj->pFullGrid[i];
    }

    for (i = 0; i < 11; i++) {
      value[iv20[i]] = 0.0;
    }

    emlrtPushRtStackR2012b(&qb_emlrtRSI, emlrtRootTLSGlobal);
    for (i = 0; i < 64; i++) {
      b_obj->pFullGrid[i] = value[i];
    }

    emlrtPopRtStackR2012b(&qb_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&rb_emlrtRSI, emlrtRootTLSGlobal);
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
                      sizeof(real_T), &i_emlrtRTEI);
    for (i = 0; i < ii; i++) {
      b_obj->pDataLinearIndices->data[i] = ii_data[i];
    }

    emlrtPopRtStackR2012b(&rb_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->TunablePropsChanged = FALSE;
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  if (b_obj->TunablePropsChanged) {
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->TunablePropsChanged = FALSE;
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  for (i = 0; i < 53; i++) {
    dcv2[i].re = iv21[i];
    dcv2[i].im = 0.0;
  }

  OFDMModulator_stepImpl(obj, dcv2, varargout_1);
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
}

void c_SystemCore_checkTunableProps(commcodegen_BPSKModulator_191 *obj)
{
  commcodegen_BPSKModulator_191 *b_obj;
  if (obj->TunablePropsChanged) {
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    b_obj = obj;
    b_obj->TunablePropsChanged = FALSE;
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  }
}

boolean_T c_SystemCore_detectInputSizeCha(commcodegen_BPSKModulator *obj)
{
  boolean_T anyInputSizeChanged;
  int32_T k;
  boolean_T exitg1;
  static const int16_T iv32[8] = { 563, 1, 1, 1, 1, 1, 1, 1 };

  commcodegen_BPSKModulator *b_obj;
  static const int16_T inputSize[8] = { 563, 1, 1, 1, 1, 1, 1, 1 };

  anyInputSizeChanged = FALSE;
  k = 0;
  exitg1 = FALSE;
  while ((exitg1 == FALSE) && (k < 8)) {
    if (obj->inputVarSize1[k] != (uint32_T)iv32[k]) {
      anyInputSizeChanged = TRUE;
      emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
      b_obj = obj;
      for (k = 0; k < 8; k++) {
        b_obj->inputVarSize1[k] = (uint32_T)inputSize[k];
      }

      emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
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
  static const int32_T iv72[2] = { 1, 51 };

  const mxArray *m14;
  char_T cv75[51];
  int32_T i;
  static const char_T cv76[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l',
    'e', 'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv73[2] = { 1, 5 };

  char_T cv77[5];
  static const char_T cv78[5] = { 's', 'e', 't', 'u', 'p' };

  commcodegen_BPSKModulator_191 *b_obj;
  static const int16_T value[8] = { 563, 1, 1, 1, 1, 1, 1, 1 };

  if (!obj->isInitialized) {
  } else {
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    y = NULL;
    m14 = mxCreateCharArray(2, iv72);
    for (i = 0; i < 51; i++) {
      cv75[i] = cv76[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 51, m14, cv75);
    emlrtAssign(&y, m14);
    b_y = NULL;
    m14 = mxCreateCharArray(2, iv73);
    for (i = 0; i < 5; i++) {
      cv77[i] = cv78[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 5, m14, cv77);
    emlrtAssign(&b_y, m14);
    b_error(message(y, b_y, &b_emlrtMCI), &b_emlrtMCI);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  b_obj->isInitialized = TRUE;
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  for (i = 0; i < 8; i++) {
    b_obj->inputVarSize1[i] = (uint32_T)value[i];
  }

  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&ic_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&ic_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&ic_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&ic_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  b_obj->TunablePropsChanged = FALSE;
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
}

void c_SystemCore_step(commcodegen_CRCGenerator *obj, const real_T varargin_1
  [560], real_T varargout_1[563])
{
  const mxArray *y;
  static const int32_T iv25[2] = { 1, 45 };

  const mxArray *m5;
  char_T cv29[45];
  int32_T i;
  static const char_T cv30[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C',
    'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv26[2] = { 1, 4 };

  char_T cv31[4];
  static const char_T cv32[4] = { 's', 't', 'e', 'p' };

  commcodegen_CRCGenerator *b_obj;
  const mxArray *c_y;
  static const int32_T iv27[2] = { 1, 51 };

  char_T cv33[51];
  static const char_T cv34[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l',
    'e', 'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *d_y;
  static const int32_T iv28[2] = { 1, 5 };

  char_T cv35[5];
  static const char_T cv36[5] = { 's', 'e', 't', 'u', 'p' };

  int32_T k;
  static const int16_T value[8] = { 560, 1, 1, 1, 1, 1, 1, 1 };

  boolean_T exitg1;
  static const int16_T iv29[8] = { 560, 1, 1, 1, 1, 1, 1, 1 };

  comm_CRCGenerator_0 *c_obj;
  uint32_T shReg;
  uint32_T input;
  uint32_T bitMask;
  int32_T j;
  uint32_T inpBit;
  if (!obj->isReleased) {
  } else {
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    y = NULL;
    m5 = mxCreateCharArray(2, iv25);
    for (i = 0; i < 45; i++) {
      cv29[i] = cv30[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 45, m5, cv29);
    emlrtAssign(&y, m5);
    b_y = NULL;
    m5 = mxCreateCharArray(2, iv26);
    for (i = 0; i < 4; i++) {
      cv31[i] = cv32[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 4, m5, cv31);
    emlrtAssign(&b_y, m5);
    b_error(message(y, b_y, &b_emlrtMCI), &b_emlrtMCI);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  }

  if (!obj->isInitialized) {
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    b_obj = obj;
    if (!b_obj->isInitialized) {
    } else {
      emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
      c_y = NULL;
      m5 = mxCreateCharArray(2, iv27);
      for (i = 0; i < 51; i++) {
        cv33[i] = cv34[i];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 51, m5, cv33);
      emlrtAssign(&c_y, m5);
      d_y = NULL;
      m5 = mxCreateCharArray(2, iv28);
      for (i = 0; i < 5; i++) {
        cv35[i] = cv36[i];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 5, m5, cv35);
      emlrtAssign(&d_y, m5);
      b_error(message(c_y, d_y, &b_emlrtMCI), &b_emlrtMCI);
      emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    }

    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->isInitialized = TRUE;
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    for (k = 0; k < 8; k++) {
      b_obj->inputVarSize1[k] = (uint32_T)value[k];
    }

    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&fc_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&fc_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&fc_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&fc_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->TunablePropsChanged = FALSE;
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  if (b_obj->TunablePropsChanged) {
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->TunablePropsChanged = FALSE;
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  k = 0;
  exitg1 = FALSE;
  while ((exitg1 == FALSE) && (k < 8)) {
    if (b_obj->inputVarSize1[k] != (uint32_T)iv29[k]) {
      emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
      for (k = 0; k < 8; k++) {
        b_obj->inputVarSize1[k] = (uint32_T)value[k];
      }

      emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
      exitg1 = TRUE;
    } else {
      k++;
    }
  }

  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&fc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&fc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  emlrtPushRtStackR2012b(&hc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&fc_emlrtRSI, emlrtRootTLSGlobal);
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
  emlrtPopRtStackR2012b(&fc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&hc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&hc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&fc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&fc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&hc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
}

void d_SystemCore_checkTunableProps(commcodegen_BPSKModulator_191 *obj)
{
  commcodegen_BPSKModulator_191 *b_obj;
  if (obj->TunablePropsChanged) {
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    b_obj = obj;
    b_obj->TunablePropsChanged = FALSE;
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  }
}

boolean_T d_SystemCore_detectInputSizeCha(commcodegen_BPSKModulator *obj)
{
  boolean_T anyInputSizeChanged;
  int32_T k;
  boolean_T exitg1;
  static const int8_T iv35[8] = { 13, 1, 1, 1, 1, 1, 1, 1 };

  commcodegen_BPSKModulator *b_obj;
  static const int8_T inputSize[8] = { 13, 1, 1, 1, 1, 1, 1, 1 };

  anyInputSizeChanged = FALSE;
  k = 0;
  exitg1 = FALSE;
  while ((exitg1 == FALSE) && (k < 8)) {
    if (obj->inputVarSize1[k] != (uint32_T)iv35[k]) {
      anyInputSizeChanged = TRUE;
      emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
      b_obj = obj;
      for (k = 0; k < 8; k++) {
        b_obj->inputVarSize1[k] = (uint32_T)inputSize[k];
      }

      emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
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
  static const int32_T iv75[2] = { 1, 51 };

  const mxArray *m15;
  char_T cv79[51];
  int32_T i;
  static const char_T cv80[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l',
    'e', 'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv76[2] = { 1, 5 };

  char_T cv81[5];
  static const char_T cv82[5] = { 's', 'e', 't', 'u', 'p' };

  commcodegen_BPSKModulator_191 *b_obj;
  static const int8_T value[8] = { 13, 1, 1, 1, 1, 1, 1, 1 };

  if (!obj->isInitialized) {
  } else {
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    y = NULL;
    m15 = mxCreateCharArray(2, iv75);
    for (i = 0; i < 51; i++) {
      cv79[i] = cv80[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 51, m15, cv79);
    emlrtAssign(&y, m15);
    b_y = NULL;
    m15 = mxCreateCharArray(2, iv76);
    for (i = 0; i < 5; i++) {
      cv81[i] = cv82[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 5, m15, cv81);
    emlrtAssign(&b_y, m15);
    b_error(message(y, b_y, &b_emlrtMCI), &b_emlrtMCI);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  b_obj->isInitialized = TRUE;
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  for (i = 0; i < 8; i++) {
    b_obj->inputVarSize1[i] = (uint32_T)value[i];
  }

  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&ic_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&ic_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&ic_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&ic_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  b_obj->TunablePropsChanged = FALSE;
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
}

void d_SystemCore_step(OFDMModulator_196 *obj, const creal_T varargin_1[576],
  const real_T varargin_2[48], creal_T varargout_1[960])
{
  const mxArray *y;
  static const int32_T iv37[2] = { 1, 45 };

  const mxArray *m9;
  char_T cv47[45];
  int32_T i;
  static const char_T cv48[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C',
    'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv38[2] = { 1, 4 };

  char_T cv49[4];
  static const char_T cv50[4] = { 's', 't', 'e', 'p' };

  OFDMModulator_196 *b_obj;
  const mxArray *c_y;
  static const int32_T iv39[2] = { 1, 51 };

  char_T cv51[51];
  static const char_T cv52[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l',
    'e', 'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *d_y;
  static const int32_T iv40[2] = { 1, 5 };

  char_T cv53[5];
  static const char_T cv54[5] = { 's', 'e', 't', 'u', 'p' };

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
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    y = NULL;
    m9 = mxCreateCharArray(2, iv37);
    for (i = 0; i < 45; i++) {
      cv47[i] = cv48[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 45, m9, cv47);
    emlrtAssign(&y, m9);
    b_y = NULL;
    m9 = mxCreateCharArray(2, iv38);
    for (i = 0; i < 4; i++) {
      cv49[i] = cv50[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 4, m9, cv49);
    emlrtAssign(&b_y, m9);
    b_error(message(y, b_y, &b_emlrtMCI), &b_emlrtMCI);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  }

  if (!obj->isInitialized) {
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    b_obj = obj;
    if (!b_obj->isInitialized) {
    } else {
      emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
      c_y = NULL;
      m9 = mxCreateCharArray(2, iv39);
      for (i = 0; i < 51; i++) {
        cv51[i] = cv52[i];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 51, m9, cv51);
      emlrtAssign(&c_y, m9);
      d_y = NULL;
      m9 = mxCreateCharArray(2, iv40);
      for (i = 0; i < 5; i++) {
        cv53[i] = cv54[i];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 5, m9, cv53);
      emlrtAssign(&d_y, m9);
      b_error(message(c_y, d_y, &b_emlrtMCI), &b_emlrtMCI);
      emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    }

    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->isInitialized = TRUE;
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&tc_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&uc_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&uc_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&tc_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    OFDMModulator_setupImpl(b_obj);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->TunablePropsChanged = FALSE;
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  if (b_obj->TunablePropsChanged) {
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&tc_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&uc_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&uc_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&tc_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->TunablePropsChanged = FALSE;
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  for (j = 0; j < 768; j++) {
    packedData[j].re = b_obj->pFullGrid[j];
    packedData[j].im = 0.0;
  }

  emxInit_int32_T(&r1, 1, &i_emlrtRTEI, TRUE);
  j = r1->size[0];
  r1->size[0] = b_obj->pDataLinearIndices->size[0];
  emxEnsureCapacity((emxArray__common *)r1, j, (int32_T)sizeof(int32_T),
                    &i_emlrtRTEI);
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
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtHeapReferenceStackLeaveFcnR2012b(emlrtRootTLSGlobal);
}

boolean_T e_SystemCore_detectInputSizeCha(commcodegen_BPSKModulator_191 *obj)
{
  boolean_T anyInputSizeChanged;
  int32_T k;
  boolean_T exitg1;
  static const int16_T iv74[8] = { 563, 1, 1, 1, 1, 1, 1, 1 };

  commcodegen_BPSKModulator_191 *b_obj;
  static const int16_T inputSize[8] = { 563, 1, 1, 1, 1, 1, 1, 1 };

  anyInputSizeChanged = FALSE;
  k = 0;
  exitg1 = FALSE;
  while ((exitg1 == FALSE) && (k < 8)) {
    if (obj->inputVarSize1[k] != (uint32_T)iv74[k]) {
      anyInputSizeChanged = TRUE;
      emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
      b_obj = obj;
      for (k = 0; k < 8; k++) {
        b_obj->inputVarSize1[k] = (uint32_T)inputSize[k];
      }

      emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
      exitg1 = TRUE;
    } else {
      k++;
    }
  }

  return anyInputSizeChanged;
}

void e_SystemCore_step(commcodegen_CRCGenerator_256 *obj, const real_T
  varargin_1[560], real_T varargout_1[563])
{
  const mxArray *y;
  static const int32_T iv67[2] = { 1, 45 };

  const mxArray *m13;
  char_T cv67[45];
  int32_T i;
  static const char_T cv68[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C',
    'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv68[2] = { 1, 4 };

  char_T cv69[4];
  static const char_T cv70[4] = { 's', 't', 'e', 'p' };

  commcodegen_CRCGenerator_256 *b_obj;
  const mxArray *c_y;
  static const int32_T iv69[2] = { 1, 51 };

  char_T cv71[51];
  static const char_T cv72[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l',
    'e', 'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *d_y;
  static const int32_T iv70[2] = { 1, 5 };

  char_T cv73[5];
  static const char_T cv74[5] = { 's', 'e', 't', 'u', 'p' };

  int32_T k;
  static const int16_T value[8] = { 560, 1, 1, 1, 1, 1, 1, 1 };

  boolean_T exitg1;
  static const int16_T iv71[8] = { 560, 1, 1, 1, 1, 1, 1, 1 };

  comm_CRCGenerator_3 *c_obj;
  uint32_T shReg;
  uint32_T input;
  uint32_T bitMask;
  int32_T j;
  uint32_T inpBit;
  if (!obj->isReleased) {
  } else {
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    y = NULL;
    m13 = mxCreateCharArray(2, iv67);
    for (i = 0; i < 45; i++) {
      cv67[i] = cv68[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 45, m13, cv67);
    emlrtAssign(&y, m13);
    b_y = NULL;
    m13 = mxCreateCharArray(2, iv68);
    for (i = 0; i < 4; i++) {
      cv69[i] = cv70[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 4, m13, cv69);
    emlrtAssign(&b_y, m13);
    b_error(message(y, b_y, &b_emlrtMCI), &b_emlrtMCI);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  }

  if (!obj->isInitialized) {
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    b_obj = obj;
    if (!b_obj->isInitialized) {
    } else {
      emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
      c_y = NULL;
      m13 = mxCreateCharArray(2, iv69);
      for (i = 0; i < 51; i++) {
        cv71[i] = cv72[i];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 51, m13, cv71);
      emlrtAssign(&c_y, m13);
      d_y = NULL;
      m13 = mxCreateCharArray(2, iv70);
      for (i = 0; i < 5; i++) {
        cv73[i] = cv74[i];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 5, m13, cv73);
      emlrtAssign(&d_y, m13);
      b_error(message(c_y, d_y, &b_emlrtMCI), &b_emlrtMCI);
      emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    }

    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->isInitialized = TRUE;
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    for (k = 0; k < 8; k++) {
      b_obj->inputVarSize1[k] = (uint32_T)value[k];
    }

    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&fc_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&fc_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&fc_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&fc_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->TunablePropsChanged = FALSE;
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  if (b_obj->TunablePropsChanged) {
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->TunablePropsChanged = FALSE;
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  k = 0;
  exitg1 = FALSE;
  while ((exitg1 == FALSE) && (k < 8)) {
    if (b_obj->inputVarSize1[k] != (uint32_T)iv71[k]) {
      emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
      for (k = 0; k < 8; k++) {
        b_obj->inputVarSize1[k] = (uint32_T)value[k];
      }

      emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
      exitg1 = TRUE;
    } else {
      k++;
    }
  }

  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&fc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&fc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  emlrtPushRtStackR2012b(&hc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&fc_emlrtRSI, emlrtRootTLSGlobal);
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
  emlrtPopRtStackR2012b(&fc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&hc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&hc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&fc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&fc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&hc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
}

boolean_T f_SystemCore_detectInputSizeCha(commcodegen_BPSKModulator_191 *obj)
{
  boolean_T anyInputSizeChanged;
  int32_T k;
  boolean_T exitg1;
  static const int8_T iv77[8] = { 13, 1, 1, 1, 1, 1, 1, 1 };

  commcodegen_BPSKModulator_191 *b_obj;
  static const int8_T inputSize[8] = { 13, 1, 1, 1, 1, 1, 1, 1 };

  anyInputSizeChanged = FALSE;
  k = 0;
  exitg1 = FALSE;
  while ((exitg1 == FALSE) && (k < 8)) {
    if (obj->inputVarSize1[k] != (uint32_T)iv77[k]) {
      anyInputSizeChanged = TRUE;
      emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
      b_obj = obj;
      for (k = 0; k < 8; k++) {
        b_obj->inputVarSize1[k] = (uint32_T)inputSize[k];
      }

      emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
      exitg1 = TRUE;
    } else {
      k++;
    }
  }

  return anyInputSizeChanged;
}

void f_SystemCore_step(OFDMDemodulator_1 *obj, const creal_T varargin_1[64],
  emxArray_creal_T *varargout_1)
{
  const mxArray *y;
  static const int32_T iv107[2] = { 1, 45 };

  const mxArray *m25;
  char_T cv115[45];
  int32_T i;
  static const char_T cv116[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C',
    'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv108[2] = { 1, 4 };

  char_T cv117[4];
  static const char_T cv118[4] = { 's', 't', 'e', 'p' };

  OFDMDemodulator_1 *b_obj;
  const mxArray *c_y;
  static const int32_T iv109[2] = { 1, 51 };

  char_T cv119[51];
  static const char_T cv120[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l',
    'e', 'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *d_y;
  static const int32_T iv110[2] = { 1, 5 };

  char_T cv121[5];
  static const char_T cv122[5] = { 's', 'e', 't', 'u', 'p' };

  int8_T fullGrid[64];
  int32_T ju;
  static const int8_T iv111[11] = { 0, 1, 2, 3, 4, 5, 59, 60, 61, 62, 63 };

  int32_T idx;
  int8_T ii_data[64];
  int32_T ix;
  boolean_T exitg1;
  boolean_T guard1 = FALSE;
  int8_T b_ii_data[64];
  creal_T inputIn3D[64];
  creal_T postFFT[64];
  boolean_T overflow;
  real_T tmp_re;
  real_T tmp_im;
  int32_T iDelta;
  int32_T iDelta2;
  int32_T k;
  int32_T iheight;
  static const real_T dv6[33] = { 0.0, -0.0980171403295606, -0.19509032201612825,
    -0.29028467725446233, -0.38268343236508978, -0.47139673682599764,
    -0.55557023301960218, -0.63439328416364549, -0.70710678118654757,
    -0.773010453362737, -0.83146961230254524, -0.881921264348355,
    -0.92387953251128674, -0.95694033573220882, -0.98078528040323043,
    -0.99518472667219693, -1.0, -0.99518472667219693, -0.98078528040323043,
    -0.95694033573220882, -0.92387953251128674, -0.881921264348355,
    -0.83146961230254524, -0.773010453362737, -0.70710678118654757,
    -0.63439328416364549, -0.55557023301960218, -0.47139673682599764,
    -0.38268343236508978, -0.29028467725446233, -0.19509032201612825,
    -0.0980171403295606, -0.0 };

  static const real_T dv7[33] = { 1.0, 0.99518472667219693, 0.98078528040323043,
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

  emxArray_real_T *x;
  emxArray_creal_T *b_x;
  int32_T b_varargin_1[3];
  const mxArray *e_y;
  static const int32_T iv112[2] = { 1, 21 };

  char_T cv123[21];
  static const char_T cv124[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'p', 'm', 'a', 'x', 's', 'i', 'z', 'e' };

  int32_T sz[3];
  emxArray_creal_T *f_y;
  const mxArray *g_y;
  static const int32_T iv113[2] = { 1, 40 };

  char_T cv125[40];
  static const char_T cv126[40] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'g', 'e', 't', 'R', 'e', 's', 'h', 'a', 'p', 'e', 'D',
    'i', 'm', 's', '_', 'n', 'o', 't', 'S', 'a', 'm', 'e', 'N', 'u', 'm', 'e',
    'l' };

  emlrtHeapReferenceStackEnterFcnR2012b(emlrtRootTLSGlobal);
  if (!obj->isReleased) {
  } else {
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    y = NULL;
    m25 = mxCreateCharArray(2, iv107);
    for (i = 0; i < 45; i++) {
      cv115[i] = cv116[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 45, m25, cv115);
    emlrtAssign(&y, m25);
    b_y = NULL;
    m25 = mxCreateCharArray(2, iv108);
    for (i = 0; i < 4; i++) {
      cv117[i] = cv118[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 4, m25, cv117);
    emlrtAssign(&b_y, m25);
    b_error(message(y, b_y, &b_emlrtMCI), &b_emlrtMCI);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  }

  if (!obj->isInitialized) {
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    b_obj = obj;
    if (!b_obj->isInitialized) {
    } else {
      emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
      c_y = NULL;
      m25 = mxCreateCharArray(2, iv109);
      for (i = 0; i < 51; i++) {
        cv119[i] = cv120[i];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 51, m25, cv119);
      emlrtAssign(&c_y, m25);
      d_y = NULL;
      m25 = mxCreateCharArray(2, iv110);
      for (i = 0; i < 5; i++) {
        cv121[i] = cv122[i];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 5, m25, cv121);
      emlrtAssign(&d_y, m25);
      b_error(message(c_y, d_y, &b_emlrtMCI), &b_emlrtMCI);
      emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    }

    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->isInitialized = TRUE;
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&li_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&uc_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&uc_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&li_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    memset(&fullGrid[0], 1, sizeof(int8_T) << 6);
    for (ju = 0; ju < 11; ju++) {
      fullGrid[iv111[ju]] = 0;
    }

    emlrtPushRtStackR2012b(&mi_emlrtRSI, emlrtRootTLSGlobal);
    idx = 0;
    ix = 1;
    exitg1 = FALSE;
    while ((exitg1 == FALSE) && (ix < 65)) {
      guard1 = FALSE;
      if (fullGrid[ix - 1] == 1) {
        idx++;
        ii_data[idx - 1] = (int8_T)ix;
        if (idx >= 64) {
          exitg1 = TRUE;
        } else {
          guard1 = TRUE;
        }
      } else {
        guard1 = TRUE;
      }

      if (guard1 == TRUE) {
        ix++;
      }
    }

    if (1 > idx) {
      idx = 0;
    }

    for (ju = 0; ju < idx; ju++) {
      b_ii_data[ju] = ii_data[ju];
    }

    for (ju = 0; ju < idx; ju++) {
      ii_data[ju] = b_ii_data[ju];
    }

    ju = b_obj->pDataLinearIndices->size[0];
    b_obj->pDataLinearIndices->size[0] = idx;
    emxEnsureCapacity((emxArray__common *)b_obj->pDataLinearIndices, ju,
                      (int32_T)sizeof(real_T), &i_emlrtRTEI);
    for (ju = 0; ju < idx; ju++) {
      b_obj->pDataLinearIndices->data[ju] = ii_data[ju];
    }

    emlrtPopRtStackR2012b(&mi_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->TunablePropsChanged = FALSE;
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  if (b_obj->TunablePropsChanged) {
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&li_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&uc_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&uc_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&li_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->TunablePropsChanged = FALSE;
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  memcpy(&inputIn3D[0], &varargin_1[0], sizeof(creal_T) << 6);
  ix = 0;
  ju = 0;
  idx = 0;
  for (i = 0; i < 63; i++) {
    postFFT[idx] = inputIn3D[ix];
    idx = 64;
    overflow = TRUE;
    while (overflow) {
      if (idx >= 0) {
        idx = (int32_T)((uint32_T)idx >> 1);
      } else {
        idx = ~(int32_T)((uint32_T)~idx >> 1);
      }

      ju ^= idx;
      overflow = ((ju & idx) == 0);
    }

    idx = ju;
    ix++;
  }

  postFFT[idx] = inputIn3D[ix];
  for (i = 0; i < 64; i += 2) {
    tmp_re = postFFT[i + 1].re;
    tmp_im = postFFT[i + 1].im;
    postFFT[i + 1].re = postFFT[i].re - postFFT[i + 1].re;
    postFFT[i + 1].im = postFFT[i].im - postFFT[i + 1].im;
    postFFT[i].re += tmp_re;
    postFFT[i].im += tmp_im;
  }

  iDelta = 2;
  iDelta2 = 4;
  k = 16;
  iheight = 61;
  while (k > 0) {
    for (i = 0; i < iheight; i += iDelta2) {
      idx = i + iDelta;
      tmp_re = postFFT[idx].re;
      tmp_im = postFFT[idx].im;
      postFFT[i + iDelta].re = postFFT[i].re - postFFT[idx].re;
      postFFT[i + iDelta].im = postFFT[i].im - postFFT[idx].im;
      postFFT[i].re += tmp_re;
      postFFT[i].im += tmp_im;
    }

    idx = 1;
    for (ix = k; ix < 32; ix += k) {
      i = idx;
      ju = idx + iheight;
      while (i < ju) {
        tmp_re = dv7[ix] * postFFT[i + iDelta].re - dv6[ix] * postFFT[i + iDelta]
          .im;
        tmp_im = dv7[ix] * postFFT[i + iDelta].im + dv6[ix] * postFFT[i + iDelta]
          .re;
        postFFT[i + iDelta].re = postFFT[i].re - tmp_re;
        postFFT[i + iDelta].im = postFFT[i].im - tmp_im;
        postFFT[i].re += tmp_re;
        postFFT[i].im += tmp_im;
        i += iDelta2;
      }

      idx++;
    }

    ju = k;
    k = (int32_T)((uint32_T)ju >> 1);
    iDelta = iDelta2;
    iDelta2 <<= 1;
    iheight -= iDelta;
  }

  idx = 0;
  ix = 32;
  for (k = 0; k < 32; k++) {
    tmp_re = postFFT[idx].re;
    tmp_im = postFFT[idx].im;
    postFFT[idx] = postFFT[ix];
    postFFT[ix].re = tmp_re;
    postFFT[ix].im = tmp_im;
    idx++;
    ix++;
  }

  emxInit_real_T(&x, 1, &i_emlrtRTEI, TRUE);
  emlrtPushRtStackR2012b(&ni_emlrtRSI, emlrtRootTLSGlobal);
  ju = x->size[0];
  x->size[0] = b_obj->pDataLinearIndices->size[0];
  emxEnsureCapacity((emxArray__common *)x, ju, (int32_T)sizeof(real_T),
                    &i_emlrtRTEI);
  idx = b_obj->pDataLinearIndices->size[0];
  for (ju = 0; ju < idx; ju++) {
    x->data[ju] = b_obj->pDataLinearIndices->data[ju];
  }

  b_emxInit_creal_T(&b_x, 1, &i_emlrtRTEI, TRUE);
  ju = b_x->size[0];
  b_x->size[0] = b_obj->pDataLinearIndices->size[0];
  emxEnsureCapacity((emxArray__common *)b_x, ju, (int32_T)sizeof(creal_T),
                    &i_emlrtRTEI);
  idx = b_obj->pDataLinearIndices->size[0];
  for (ju = 0; ju < idx; ju++) {
    tmp_re = b_obj->pDataLinearIndices->data[ju];
    ix = (int32_T)emlrtIntegerCheckFastR2012b(tmp_re, &c_emlrtDCI,
      emlrtRootTLSGlobal);
    b_x->data[ju] = postFFT[emlrtDynamicBoundsCheckFastR2012b(ix, 1, 64,
      &y_emlrtBCI, emlrtRootTLSGlobal) - 1];
  }

  b_varargin_1[0] = x->size[0];
  b_varargin_1[1] = 1;
  b_varargin_1[2] = 1;
  emlrtPushRtStackR2012b(&ri_emlrtRSI, emlrtRootTLSGlobal);
  emxFree_real_T(&x);
  tmp_re = 1.0;
  for (k = 0; k < 3; k++) {
    if (b_varargin_1[k] <= 0) {
      tmp_re = 0.0;
    } else {
      tmp_re *= (real_T)b_varargin_1[k];
    }
  }

  if (2.147483647E+9 >= tmp_re) {
  } else {
    emlrtPushRtStackR2012b(&ti_emlrtRSI, emlrtRootTLSGlobal);
    e_y = NULL;
    m25 = mxCreateCharArray(2, iv112);
    for (i = 0; i < 21; i++) {
      cv123[i] = cv124[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 21, m25, cv123);
    emlrtAssign(&e_y, m25);
    b_error(b_message(e_y, &qb_emlrtMCI), &rb_emlrtMCI);
    emlrtPopRtStackR2012b(&ti_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPopRtStackR2012b(&ri_emlrtRSI, emlrtRootTLSGlobal);
  for (ju = 0; ju < 3; ju++) {
    sz[ju] = b_varargin_1[ju];
  }

  idx = b_x->size[0];
  if (1 > idx) {
    idx = 1;
  }

  if (b_x->size[0] < idx) {
  } else {
    idx = b_x->size[0];
  }

  if (sz[0] > idx) {
    emlrtPushRtStackR2012b(&qi_emlrtRSI, emlrtRootTLSGlobal);
    c_eml_error();
    emlrtPopRtStackR2012b(&qi_emlrtRSI, emlrtRootTLSGlobal);
  }

  if (1 > idx) {
    emlrtPushRtStackR2012b(&qi_emlrtRSI, emlrtRootTLSGlobal);
    c_eml_error();
    emlrtPopRtStackR2012b(&qi_emlrtRSI, emlrtRootTLSGlobal);
  }

  emxInit_creal_T(&f_y, 3, &i_emlrtRTEI, TRUE);
  ju = f_y->size[0] * f_y->size[1] * f_y->size[2];
  f_y->size[0] = sz[0];
  f_y->size[1] = 1;
  f_y->size[2] = 1;
  emxEnsureCapacity((emxArray__common *)f_y, ju, (int32_T)sizeof(creal_T),
                    &qb_emlrtRTEI);
  if (b_x->size[0] == sz[0]) {
  } else {
    emlrtPushRtStackR2012b(&pi_emlrtRSI, emlrtRootTLSGlobal);
    g_y = NULL;
    m25 = mxCreateCharArray(2, iv113);
    for (i = 0; i < 40; i++) {
      cv125[i] = cv126[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 40, m25, cv125);
    emlrtAssign(&g_y, m25);
    b_error(b_message(g_y, &mb_emlrtMCI), &nb_emlrtMCI);
    emlrtPopRtStackR2012b(&pi_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPushRtStackR2012b(&oi_emlrtRSI, emlrtRootTLSGlobal);
  if (1 > b_x->size[0]) {
    overflow = FALSE;
  } else {
    overflow = (b_x->size[0] > 2147483646);
  }

  if (overflow) {
    emlrtPushRtStackR2012b(&dc_emlrtRSI, emlrtRootTLSGlobal);
    check_forloop_overflow_error();
    emlrtPopRtStackR2012b(&dc_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPopRtStackR2012b(&oi_emlrtRSI, emlrtRootTLSGlobal);
  for (k = 0; k + 1 <= b_x->size[0]; k++) {
    f_y->data[k] = b_x->data[k];
  }

  emxFree_creal_T(&b_x);
  ju = varargout_1->size[0] * varargout_1->size[1] * varargout_1->size[2];
  varargout_1->size[0] = f_y->size[0];
  varargout_1->size[1] = f_y->size[1];
  varargout_1->size[2] = 1;
  emxEnsureCapacity((emxArray__common *)varargout_1, ju, (int32_T)sizeof(creal_T),
                    &i_emlrtRTEI);
  idx = f_y->size[0] * f_y->size[1] * f_y->size[2];
  for (ju = 0; ju < idx; ju++) {
    varargout_1->data[ju] = f_y->data[ju];
  }

  emxFree_creal_T(&f_y);
  emlrtPopRtStackR2012b(&ni_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtHeapReferenceStackLeaveFcnR2012b(emlrtRootTLSGlobal);
}

void g_SystemCore_step(dspcodegen_FIRRateConverter *obj, const creal_T
  varargin_1[288], creal_T varargout_1[3456])
{
  const mxArray *y;
  static const int32_T iv116[2] = { 1, 45 };

  const mxArray *m26;
  char_T cv127[45];
  int32_T i;
  static const char_T cv128[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C',
    'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv117[2] = { 1, 4 };

  char_T cv129[4];
  static const char_T cv130[4] = { 's', 't', 'e', 'p' };

  dspcodegen_FIRRateConverter *b_obj;
  const mxArray *c_y;
  static const int32_T iv118[2] = { 1, 51 };

  char_T cv131[51];
  static const char_T cv132[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l',
    'e', 'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *d_y;
  static const int32_T iv119[2] = { 1, 5 };

  char_T cv133[5];
  static const char_T cv134[5] = { 's', 'e', 't', 'u', 'p' };

  static const int8_T value[8] = { 24, 12, 1, 1, 1, 1, 1, 1 };

  dsp_FIRRateConverter_7 *c_obj;
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
  if (!obj->isReleased) {
  } else {
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    y = NULL;
    m26 = mxCreateCharArray(2, iv116);
    for (i = 0; i < 45; i++) {
      cv127[i] = cv128[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 45, m26, cv127);
    emlrtAssign(&y, m26);
    b_y = NULL;
    m26 = mxCreateCharArray(2, iv117);
    for (i = 0; i < 4; i++) {
      cv129[i] = cv130[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 4, m26, cv129);
    emlrtAssign(&b_y, m26);
    b_error(message(y, b_y, &b_emlrtMCI), &b_emlrtMCI);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  }

  if (!obj->isInitialized) {
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    b_obj = obj;
    if (!b_obj->isInitialized) {
    } else {
      emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
      c_y = NULL;
      m26 = mxCreateCharArray(2, iv118);
      for (i = 0; i < 51; i++) {
        cv131[i] = cv132[i];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 51, m26, cv131);
      emlrtAssign(&c_y, m26);
      d_y = NULL;
      m26 = mxCreateCharArray(2, iv119);
      for (i = 0; i < 5; i++) {
        cv133[i] = cv134[i];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 5, m26, cv133);
      emlrtAssign(&d_y, m26);
      b_error(message(c_y, d_y, &b_emlrtMCI), &b_emlrtMCI);
      emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    }

    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->isInitialized = TRUE;
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    for (i = 0; i < 8; i++) {
      b_obj->inputVarSize1[i] = (uint32_T)value[i];
    }

    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&cj_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&cj_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&cj_emlrtRSI, emlrtRootTLSGlobal);
    c_obj = &b_obj->cSFunObject;
    if (!c_obj->S0_isInitialized) {
      c_obj->S0_isInitialized = TRUE;
      if (c_obj->S1_isReleased) {
        emlrtErrorWithMessageIdR2012b(emlrtRootTLSGlobal, &fc_emlrtRTEI,
          "MATLAB:system:setupCalledWhenLockedReleasedCodegen", 0);
      }

      /* System object Initialization function: dsp.FIRRateConverter */
      c_obj->W1_InBufIdx = 0;
      for (i = 0; i < 252; i++) {
        c_obj->W0_InBuf[i].re = 0.0;
        c_obj->W0_InBuf[i].im = 0.0;
      }
    } else {
      emlrtErrorWithMessageIdR2012b(emlrtRootTLSGlobal, &fc_emlrtRTEI,
        "MATLAB:system:setupCalledWhenLockedCodegen", 0);
    }

    emlrtPopRtStackR2012b(&cj_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&cj_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&cj_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&cj_emlrtRSI, emlrtRootTLSGlobal);
    c_obj = &b_obj->cSFunObject;
    if (c_obj->S1_isReleased) {
      emlrtErrorWithMessageIdR2012b(emlrtRootTLSGlobal, &ec_emlrtRTEI,
        "MATLAB:system:runtimeMethodCalledWhenReleasedCodegen", 0);
    }

    emlrtPushRtStackR2012b(&dj_emlrtRSI, emlrtRootTLSGlobal);

    /* System object Initialization function: dsp.FIRRateConverter */
    c_obj->W1_InBufIdx = 0;
    for (i = 0; i < 252; i++) {
      c_obj->W0_InBuf[i].re = 0.0;
      c_obj->W0_InBuf[i].im = 0.0;
    }

    emlrtPopRtStackR2012b(&dj_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&cj_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->TunablePropsChanged = FALSE;
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  if (b_obj->TunablePropsChanged) {
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->TunablePropsChanged = FALSE;
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  i = 0;
  exitg1 = FALSE;
  while ((exitg1 == FALSE) && (i < 8)) {
    if (b_obj->inputVarSize1[i] != (uint32_T)iv120[i]) {
      emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
      for (i = 0; i < 8; i++) {
        b_obj->inputVarSize1[i] = (uint32_T)value[i];
      }

      emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
      exitg1 = TRUE;
    } else {
      i++;
    }
  }

  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&cj_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&cj_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  emlrtPushRtStackR2012b(&hc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&cj_emlrtRSI, emlrtRootTLSGlobal);
  c_obj = &b_obj->cSFunObject;
  if (!c_obj->S0_isInitialized) {
    c_obj->S0_isInitialized = TRUE;
    if (c_obj->S1_isReleased) {
      emlrtErrorWithMessageIdR2012b(emlrtRootTLSGlobal, &dc_emlrtRTEI,
        "MATLAB:system:runtimeMethodCalledWhenReleasedCodegen", 0);
    }

    /* System object Initialization function: dsp.FIRRateConverter */
    c_obj->W1_InBufIdx = 0;
    for (i = 0; i < 252; i++) {
      c_obj->W0_InBuf[i].re = 0.0;
      c_obj->W0_InBuf[i].im = 0.0;
    }
  }

  emlrtPushRtStackR2012b(&ej_emlrtRSI, emlrtRootTLSGlobal);

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
  emlrtPopRtStackR2012b(&ej_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&cj_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&hc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&hc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&cj_emlrtRSI, emlrtRootTLSGlobal);
  if (!b_obj->cSFunObject.S0_isInitialized) {
    emlrtErrorWithMessageIdR2012b(emlrtRootTLSGlobal, &cc_emlrtRTEI,
      "MATLAB:system:updateCalledBeforeSetup", 0);
  }

  emlrtPopRtStackR2012b(&cj_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&hc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
}

/* End of code generation (SystemCore.c) */
