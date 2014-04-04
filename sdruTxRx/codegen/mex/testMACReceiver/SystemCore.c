/*
 * SystemCore.c
 *
 * Code generation for function 'SystemCore'
 *
 * C source code generated on: Thu Apr  3 19:51:42 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testMACReceiver.h"
#include "SystemCore.h"
#include "testMACReceiver_emxutil.h"
#include "receiveData.h"
#include "coarseOFDMFreqEst_sdr.h"
#include "OFDMDemodulator.h"
#include "OFDMModulator.h"
#include "SDRuTransmitter.h"
#include "PHYReceive.h"
#include "SDRuReceiver.h"
#include "testMACReceiver_mexutil.h"
#include "testMACReceiver_data.h"

/* Variable Definitions */
static emlrtRSInfo dc_emlrtRSI = { 51, "eml_int_forloop_overflow_check",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"
};

static emlrtRSInfo sc_emlrtRSI = { 318, "OFDMModulator",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/OFDMModulator.m" };

static emlrtRSInfo tc_emlrtRSI = { 163, "OFDMBase",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/OFDMBase.m" };

static emlrtRSInfo xc_emlrtRSI = { 419, "OFDMModulator",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/OFDMModulator.m" };

static emlrtRSInfo yc_emlrtRSI = { 25, "ifft",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/datafun/ifft.m" };

static emlrtRSInfo ad_emlrtRSI = { 49, "eml_fft",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_fft.m" };

static emlrtRSInfo bd_emlrtRSI = { 113, "eml_fft",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_fft.m" };

static emlrtRSInfo ui_emlrtRSI = { 104, "OFDMDemodulator",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/OFDMDemodulator.m" };

static emlrtRSInfo wi_emlrtRSI = { 171, "OFDMDemodulator",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/OFDMDemodulator.m" };

static emlrtRSInfo bj_emlrtRSI = { 22, "reshape",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/elmat/reshape.m" };

static emlrtRSInfo cj_emlrtRSI = { 41, "eml_assert_valid_size_arg",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m" };

static emlrtRSInfo dj_emlrtRSI = { 52, "eml_assert_valid_size_arg",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m" };

static emlrtRSInfo fj_emlrtRSI = { 162, "OFDMDemodulator",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/OFDMDemodulator.m" };

static emlrtRSInfo hj_emlrtRSI = { 14, "fft",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/datafun/fft.m" };

static emlrtRSInfo oj_emlrtRSI = { 19, "reset",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/scomp/reset.m" };

static emlrtRSInfo pj_emlrtRSI = { 43, "output",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/scomp/output.m" };

static emlrtRSInfo qj_emlrtRSI = { 45, "output",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/scomp/output.m" };

static emlrtMCInfo f_emlrtMCI = { 52, 9, "eml_int_forloop_overflow_check",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"
};

static emlrtMCInfo g_emlrtMCI = { 51, 15, "eml_int_forloop_overflow_check",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"
};

static emlrtMCInfo ob_emlrtMCI = { 42, 9, "eml_assert_valid_size_arg",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m" };

static emlrtMCInfo pb_emlrtMCI = { 41, 19, "eml_assert_valid_size_arg",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m" };

static emlrtMCInfo qb_emlrtMCI = { 53, 5, "eml_assert_valid_size_arg",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m" };

static emlrtMCInfo rb_emlrtMCI = { 52, 15, "eml_assert_valid_size_arg",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m" };

static emlrtRTEInfo h_emlrtRTEI = { 1, 13, "SystemCore",
  "/opt/MATLAB/R2013a/toolbox/shared/system/coder/+matlab/+system/+coder/SystemCore.p"
};

static emlrtRTEInfo sb_emlrtRTEI = { 65, 1, "reshape",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/elmat/reshape.m" };

static emlrtBCInfo k_emlrtBCI = { 1, 768, 403, 9, "packedData", "OFDMModulator",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/OFDMModulator.m", 0 };

static emlrtBCInfo hb_emlrtBCI = { 1, 64, 171, 28, "postShift",
  "OFDMDemodulator",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/OFDMDemodulator.m", 0 };

static emlrtDCInfo e_emlrtDCI = { 171, 28, "OFDMDemodulator",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/OFDMDemodulator.m", 1 };

static emlrtBCInfo ib_emlrtBCI = { 1, 768, 171, 28, "postShift",
  "OFDMDemodulator",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/OFDMDemodulator.m", 0 };

static emlrtRTEInfo ec_emlrtRTEI = { 41, 1, "update",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/scomp/update.m" };

static emlrtRTEInfo fc_emlrtRTEI = { 43, 20, "output",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/scomp/output.m" };

static emlrtRTEInfo gc_emlrtRTEI = { 19, 1, "reset",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/scomp/reset.m" };

static emlrtRTEInfo hc_emlrtRTEI = { 43, 1, "setup",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/scomp/setup.m" };

/* Function Declarations */
static int32_T div_ssu32_floor(int32_T numerator, uint32_T denominator);

/* Function Definitions */
static int32_T div_ssu32_floor(int32_T numerator, uint32_T denominator)
{
  int32_T quotient;
  uint32_T absNumerator;
  int32_T quotientNeedsNegation;
  uint32_T tempAbsQuotient;
  if (denominator == (uint32_T)0) {
    if (numerator >= 0) {
      quotient = MAX_int32_T;
    } else {
      quotient = MIN_int32_T;
    }

    emlrtDivisionByZeroErrorR2012b(0, emlrtRootTLSGlobal);
  } else {
    if (numerator >= 0) {
      absNumerator = (uint32_T)numerator;
    } else {
      absNumerator = (uint32_T)-numerator;
    }

    quotientNeedsNegation = (numerator < 0);
    tempAbsQuotient = absNumerator / denominator;
    if ((uint32_T)quotientNeedsNegation) {
      absNumerator %= denominator;
      if (absNumerator > (uint32_T)0) {
        tempAbsQuotient++;
      }
    }

    if ((uint32_T)quotientNeedsNegation) {
      quotient = -(int32_T)tempAbsQuotient;
    } else {
      quotient = (int32_T)tempAbsQuotient;
    }
  }

  return quotient;
}

void SystemCore_checkTunableProps(commcodegen_BPSKModulator *obj)
{
  commcodegen_BPSKModulator *b_obj;
  if (obj->TunablePropsChanged) {
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    b_obj = obj;
    b_obj->TunablePropsChanged = FALSE;
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  }
}

void SystemCore_reset(dspcodegen_FIRRateConverter *obj)
{
  const mxArray *y;
  static const int32_T iv138[2] = { 1, 45 };

  const mxArray *m30;
  char_T cv165[45];
  int32_T i;
  static const char_T cv166[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C',
    'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv139[2] = { 1, 5 };

  char_T cv167[5];
  static const char_T cv168[5] = { 'r', 'e', 's', 'e', 't' };

  dspcodegen_FIRRateConverter *b_obj;
  dsp_FIRRateConverter_7 *c_obj;
  if (!obj->isReleased) {
  } else {
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    y = NULL;
    m30 = mxCreateCharArray(2, iv138);
    for (i = 0; i < 45; i++) {
      cv165[i] = cv166[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 45, m30, cv165);
    emlrtAssign(&y, m30);
    b_y = NULL;
    m30 = mxCreateCharArray(2, iv139);
    for (i = 0; i < 5; i++) {
      cv167[i] = cv168[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 5, m30, cv167);
    emlrtAssign(&b_y, m30);
    c_error(message(y, b_y, &b_emlrtMCI), &b_emlrtMCI);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  }

  if (obj->isInitialized) {
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    b_obj = obj;
    emlrtPushRtStackR2012b(&nj_emlrtRSI, emlrtRootTLSGlobal);
    c_obj = &b_obj->cSFunObject;
    if (c_obj->S1_isReleased) {
      emlrtErrorWithMessageIdR2012b(emlrtRootTLSGlobal, &gc_emlrtRTEI,
        "MATLAB:system:runtimeMethodCalledWhenReleasedCodegen", 0);
    }

    emlrtPushRtStackR2012b(&oj_emlrtRSI, emlrtRootTLSGlobal);

    /* System object Initialization function: dsp.FIRRateConverter */
    c_obj->W1_InBufIdx = 0;
    for (i = 0; i < 252; i++) {
      c_obj->W0_InBuf[i].re = 0.0;
      c_obj->W0_InBuf[i].im = 0.0;
    }

    emlrtPopRtStackR2012b(&oj_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&nj_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  }
}

void SystemCore_setup(commcodegen_BPSKModulator *obj)
{
  const mxArray *y;
  static const int32_T iv41[2] = { 1, 51 };

  const mxArray *m7;
  char_T cv50[51];
  int32_T i;
  static const char_T cv51[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l',
    'e', 'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv42[2] = { 1, 5 };

  char_T cv52[5];
  static const char_T cv53[5] = { 's', 'e', 't', 'u', 'p' };

  commcodegen_BPSKModulator *b_obj;
  static const int16_T value[8] = { 563, 1, 1, 1, 1, 1, 1, 1 };

  if (!obj->isInitialized) {
  } else {
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    y = NULL;
    m7 = mxCreateCharArray(2, iv41);
    for (i = 0; i < 51; i++) {
      cv50[i] = cv51[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 51, m7, cv50);
    emlrtAssign(&y, m7);
    b_y = NULL;
    m7 = mxCreateCharArray(2, iv42);
    for (i = 0; i < 5; i++) {
      cv52[i] = cv53[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 5, m7, cv52);
    emlrtAssign(&b_y, m7);
    c_error(message(y, b_y, &b_emlrtMCI), &b_emlrtMCI);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  b_obj->isInitialized = TRUE;
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  for (i = 0; i < 8; i++) {
    b_obj->inputVarSize1[i] = (uint32_T)value[i];
  }

  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&hc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&hc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&hc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&hc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  b_obj->TunablePropsChanged = FALSE;
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
}

void SystemCore_step(OFDMModulator_4 *obj, creal_T varargout_1[64])
{
  const mxArray *y;
  static const int32_T iv28[2] = { 1, 45 };

  const mxArray *m3;
  char_T cv30[45];
  int32_T i;
  static const char_T cv31[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C',
    'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv29[2] = { 1, 4 };

  char_T cv32[4];
  static const char_T cv33[4] = { 's', 't', 'e', 'p' };

  OFDMModulator_4 *b_obj;
  const mxArray *c_y;
  static const int32_T iv30[2] = { 1, 51 };

  char_T cv34[51];
  static const char_T cv35[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l',
    'e', 'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *d_y;
  static const int32_T iv31[2] = { 1, 5 };

  char_T cv36[5];
  static const char_T cv37[5] = { 's', 'e', 't', 'u', 'p' };

  real_T value[64];
  static const int8_T iv32[11] = { 0, 1, 2, 3, 4, 5, 59, 60, 61, 62, 63 };

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
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    y = NULL;
    m3 = mxCreateCharArray(2, iv28);
    for (i = 0; i < 45; i++) {
      cv30[i] = cv31[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 45, m3, cv30);
    emlrtAssign(&y, m3);
    b_y = NULL;
    m3 = mxCreateCharArray(2, iv29);
    for (i = 0; i < 4; i++) {
      cv32[i] = cv33[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 4, m3, cv32);
    emlrtAssign(&b_y, m3);
    c_error(message(y, b_y, &b_emlrtMCI), &b_emlrtMCI);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  }

  if (!obj->isInitialized) {
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    b_obj = obj;
    if (!b_obj->isInitialized) {
    } else {
      emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
      c_y = NULL;
      m3 = mxCreateCharArray(2, iv30);
      for (i = 0; i < 51; i++) {
        cv34[i] = cv35[i];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 51, m3, cv34);
      emlrtAssign(&c_y, m3);
      d_y = NULL;
      m3 = mxCreateCharArray(2, iv31);
      for (i = 0; i < 5; i++) {
        cv36[i] = cv37[i];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 5, m3, cv36);
      emlrtAssign(&d_y, m3);
      c_error(message(c_y, d_y, &b_emlrtMCI), &b_emlrtMCI);
      emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    }

    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->isInitialized = TRUE;
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&nb_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&nb_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&ob_emlrtRSI, emlrtRootTLSGlobal);
    for (i = 0; i < 64; i++) {
      b_obj->pFullGrid[i] = 1.0;
    }

    emlrtPopRtStackR2012b(&ob_emlrtRSI, emlrtRootTLSGlobal);
    for (i = 0; i < 64; i++) {
      value[i] = b_obj->pFullGrid[i];
    }

    for (i = 0; i < 11; i++) {
      value[iv32[i]] = 0.0;
    }

    emlrtPushRtStackR2012b(&pb_emlrtRSI, emlrtRootTLSGlobal);
    for (i = 0; i < 64; i++) {
      b_obj->pFullGrid[i] = value[i];
    }

    emlrtPopRtStackR2012b(&pb_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&qb_emlrtRSI, emlrtRootTLSGlobal);
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
                      sizeof(real_T), &h_emlrtRTEI);
    for (i = 0; i < ii; i++) {
      b_obj->pDataLinearIndices->data[i] = ii_data[i];
    }

    emlrtPopRtStackR2012b(&qb_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->TunablePropsChanged = FALSE;
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  if (b_obj->TunablePropsChanged) {
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->TunablePropsChanged = FALSE;
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  OFDMModulator_stepImpl(obj, dcv1, varargout_1);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
}

void b_SystemCore_checkTunableProps(commcodegen_BPSKModulator *obj)
{
  commcodegen_BPSKModulator *b_obj;
  if (obj->TunablePropsChanged) {
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    b_obj = obj;
    b_obj->TunablePropsChanged = FALSE;
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  }
}

void b_SystemCore_setup(commcodegen_BPSKModulator *obj)
{
  const mxArray *y;
  static const int32_T iv44[2] = { 1, 51 };

  const mxArray *m8;
  char_T cv54[51];
  int32_T i;
  static const char_T cv55[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l',
    'e', 'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv45[2] = { 1, 5 };

  char_T cv56[5];
  static const char_T cv57[5] = { 's', 'e', 't', 'u', 'p' };

  commcodegen_BPSKModulator *b_obj;
  static const int8_T value[8] = { 13, 1, 1, 1, 1, 1, 1, 1 };

  if (!obj->isInitialized) {
  } else {
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    y = NULL;
    m8 = mxCreateCharArray(2, iv44);
    for (i = 0; i < 51; i++) {
      cv54[i] = cv55[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 51, m8, cv54);
    emlrtAssign(&y, m8);
    b_y = NULL;
    m8 = mxCreateCharArray(2, iv45);
    for (i = 0; i < 5; i++) {
      cv56[i] = cv57[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 5, m8, cv56);
    emlrtAssign(&b_y, m8);
    c_error(message(y, b_y, &b_emlrtMCI), &b_emlrtMCI);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  b_obj->isInitialized = TRUE;
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  for (i = 0; i < 8; i++) {
    b_obj->inputVarSize1[i] = (uint32_T)value[i];
  }

  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&hc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&hc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&hc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&hc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  b_obj->TunablePropsChanged = FALSE;
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
}

void b_SystemCore_step(OFDMModulator_4 *obj, creal_T varargout_1[64])
{
  const mxArray *y;
  static const int32_T iv33[2] = { 1, 45 };

  const mxArray *m4;
  char_T cv38[45];
  int32_T i;
  static const char_T cv39[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C',
    'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv34[2] = { 1, 4 };

  char_T cv40[4];
  static const char_T cv41[4] = { 's', 't', 'e', 'p' };

  OFDMModulator_4 *b_obj;
  const mxArray *c_y;
  static const int32_T iv35[2] = { 1, 51 };

  char_T cv42[51];
  static const char_T cv43[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l',
    'e', 'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *d_y;
  static const int32_T iv36[2] = { 1, 5 };

  char_T cv44[5];
  static const char_T cv45[5] = { 's', 'e', 't', 'u', 'p' };

  real_T value[64];
  static const int8_T iv37[11] = { 0, 1, 2, 3, 4, 5, 59, 60, 61, 62, 63 };

  boolean_T x[64];
  int8_T ii_data[64];
  int32_T ii;
  boolean_T exitg1;
  boolean_T guard1 = FALSE;
  int8_T b_ii_data[64];
  creal_T dcv2[53];
  static const int8_T iv38[53] = { 1, 1, -1, -1, 1, 1, -1, 1, -1, 1, 1, 1, 1, 1,
    1, -1, -1, 1, 1, -1, 1, -1, 1, 1, 1, 1, 0, 1, -1, -1, 1, 1, -1, 1, -1, 1, -1,
    -1, -1, -1, -1, 1, 1, -1, -1, 1, -1, 1, -1, 1, 1, 1, 1 };

  if (!obj->isReleased) {
  } else {
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    y = NULL;
    m4 = mxCreateCharArray(2, iv33);
    for (i = 0; i < 45; i++) {
      cv38[i] = cv39[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 45, m4, cv38);
    emlrtAssign(&y, m4);
    b_y = NULL;
    m4 = mxCreateCharArray(2, iv34);
    for (i = 0; i < 4; i++) {
      cv40[i] = cv41[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 4, m4, cv40);
    emlrtAssign(&b_y, m4);
    c_error(message(y, b_y, &b_emlrtMCI), &b_emlrtMCI);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  }

  if (!obj->isInitialized) {
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    b_obj = obj;
    if (!b_obj->isInitialized) {
    } else {
      emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
      c_y = NULL;
      m4 = mxCreateCharArray(2, iv35);
      for (i = 0; i < 51; i++) {
        cv42[i] = cv43[i];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 51, m4, cv42);
      emlrtAssign(&c_y, m4);
      d_y = NULL;
      m4 = mxCreateCharArray(2, iv36);
      for (i = 0; i < 5; i++) {
        cv44[i] = cv45[i];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 5, m4, cv44);
      emlrtAssign(&d_y, m4);
      c_error(message(c_y, d_y, &b_emlrtMCI), &b_emlrtMCI);
      emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    }

    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->isInitialized = TRUE;
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&nb_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&nb_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&ob_emlrtRSI, emlrtRootTLSGlobal);
    for (i = 0; i < 64; i++) {
      b_obj->pFullGrid[i] = 1.0;
    }

    emlrtPopRtStackR2012b(&ob_emlrtRSI, emlrtRootTLSGlobal);
    for (i = 0; i < 64; i++) {
      value[i] = b_obj->pFullGrid[i];
    }

    for (i = 0; i < 11; i++) {
      value[iv37[i]] = 0.0;
    }

    emlrtPushRtStackR2012b(&pb_emlrtRSI, emlrtRootTLSGlobal);
    for (i = 0; i < 64; i++) {
      b_obj->pFullGrid[i] = value[i];
    }

    emlrtPopRtStackR2012b(&pb_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&qb_emlrtRSI, emlrtRootTLSGlobal);
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
                      sizeof(real_T), &h_emlrtRTEI);
    for (i = 0; i < ii; i++) {
      b_obj->pDataLinearIndices->data[i] = ii_data[i];
    }

    emlrtPopRtStackR2012b(&qb_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->TunablePropsChanged = FALSE;
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  if (b_obj->TunablePropsChanged) {
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->TunablePropsChanged = FALSE;
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  for (i = 0; i < 53; i++) {
    dcv2[i].re = iv38[i];
    dcv2[i].im = 0.0;
  }

  OFDMModulator_stepImpl(obj, dcv2, varargout_1);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
}

void c_SystemCore_checkTunableProps(commcodegen_BPSKModulator_191 *obj)
{
  commcodegen_BPSKModulator_191 *b_obj;
  if (obj->TunablePropsChanged) {
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    b_obj = obj;
    b_obj->TunablePropsChanged = FALSE;
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  }
}

boolean_T c_SystemCore_detectInputSizeCha(commcodegen_BPSKModulator *obj)
{
  boolean_T anyInputSizeChanged;
  int32_T k;
  boolean_T exitg1;
  static const int16_T iv43[8] = { 563, 1, 1, 1, 1, 1, 1, 1 };

  commcodegen_BPSKModulator *b_obj;
  static const int16_T inputSize[8] = { 563, 1, 1, 1, 1, 1, 1, 1 };

  anyInputSizeChanged = FALSE;
  k = 0;
  exitg1 = FALSE;
  while ((exitg1 == FALSE) && (k < 8)) {
    if (obj->inputVarSize1[k] != (uint32_T)iv43[k]) {
      anyInputSizeChanged = TRUE;
      emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
      b_obj = obj;
      for (k = 0; k < 8; k++) {
        b_obj->inputVarSize1[k] = (uint32_T)inputSize[k];
      }

      emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
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
  static const int32_T iv84[2] = { 1, 51 };

  const mxArray *m16;
  char_T cv91[51];
  int32_T i;
  static const char_T cv92[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l',
    'e', 'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv85[2] = { 1, 5 };

  char_T cv93[5];
  static const char_T cv94[5] = { 's', 'e', 't', 'u', 'p' };

  commcodegen_BPSKModulator_191 *b_obj;
  static const int16_T value[8] = { 563, 1, 1, 1, 1, 1, 1, 1 };

  if (!obj->isInitialized) {
  } else {
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    y = NULL;
    m16 = mxCreateCharArray(2, iv84);
    for (i = 0; i < 51; i++) {
      cv91[i] = cv92[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 51, m16, cv91);
    emlrtAssign(&y, m16);
    b_y = NULL;
    m16 = mxCreateCharArray(2, iv85);
    for (i = 0; i < 5; i++) {
      cv93[i] = cv94[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 5, m16, cv93);
    emlrtAssign(&b_y, m16);
    c_error(message(y, b_y, &b_emlrtMCI), &b_emlrtMCI);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  b_obj->isInitialized = TRUE;
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  for (i = 0; i < 8; i++) {
    b_obj->inputVarSize1[i] = (uint32_T)value[i];
  }

  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&hc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&hc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&hc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&hc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  b_obj->TunablePropsChanged = FALSE;
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
}

void c_SystemCore_step(OFDMModulator_196 *obj, const creal_T varargin_1[576],
  const real_T varargin_2[48], creal_T varargout_1[960])
{
  const mxArray *y;
  static const int32_T iv48[2] = { 1, 45 };

  const mxArray *m10;
  char_T cv60[45];
  int32_T i;
  static const char_T cv61[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C',
    'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv49[2] = { 1, 4 };

  char_T cv62[4];
  static const char_T cv63[4] = { 's', 't', 'e', 'p' };

  OFDMModulator_196 *b_obj;
  const mxArray *c_y;
  static const int32_T iv50[2] = { 1, 51 };

  char_T cv64[51];
  static const char_T cv65[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l',
    'e', 'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *d_y;
  static const int32_T iv51[2] = { 1, 5 };

  char_T cv66[5];
  static const char_T cv67[5] = { 's', 'e', 't', 'u', 'p' };

  creal_T packedData[768];
  int32_T j;
  emxArray_int32_T *r1;
  int32_T i2;
  real_T temp_re;
  int32_T iy;
  static const int16_T iv52[48] = { 11, 25, 39, 53, 75, 89, 103, 117, 139, 153,
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
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    y = NULL;
    m10 = mxCreateCharArray(2, iv48);
    for (i = 0; i < 45; i++) {
      cv60[i] = cv61[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 45, m10, cv60);
    emlrtAssign(&y, m10);
    b_y = NULL;
    m10 = mxCreateCharArray(2, iv49);
    for (i = 0; i < 4; i++) {
      cv62[i] = cv63[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 4, m10, cv62);
    emlrtAssign(&b_y, m10);
    c_error(message(y, b_y, &b_emlrtMCI), &b_emlrtMCI);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  }

  if (!obj->isInitialized) {
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    b_obj = obj;
    if (!b_obj->isInitialized) {
    } else {
      emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
      c_y = NULL;
      m10 = mxCreateCharArray(2, iv50);
      for (i = 0; i < 51; i++) {
        cv64[i] = cv65[i];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 51, m10, cv64);
      emlrtAssign(&c_y, m10);
      d_y = NULL;
      m10 = mxCreateCharArray(2, iv51);
      for (i = 0; i < 5; i++) {
        cv66[i] = cv67[i];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 5, m10, cv66);
      emlrtAssign(&d_y, m10);
      c_error(message(c_y, d_y, &b_emlrtMCI), &b_emlrtMCI);
      emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    }

    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->isInitialized = TRUE;
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&sc_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&tc_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&tc_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&sc_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    OFDMModulator_setupImpl(b_obj);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->TunablePropsChanged = FALSE;
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  if (b_obj->TunablePropsChanged) {
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&sc_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&tc_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&tc_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&sc_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->TunablePropsChanged = FALSE;
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  for (j = 0; j < 768; j++) {
    packedData[j].re = b_obj->pFullGrid[j];
    packedData[j].im = 0.0;
  }

  emxInit_int32_T(&r1, 1, &h_emlrtRTEI, TRUE);
  j = r1->size[0];
  r1->size[0] = b_obj->pDataLinearIndices->size[0];
  emxEnsureCapacity((emxArray__common *)r1, j, (int32_T)sizeof(int32_T),
                    &h_emlrtRTEI);
  i2 = b_obj->pDataLinearIndices->size[0];
  for (j = 0; j < i2; j++) {
    temp_re = b_obj->pDataLinearIndices->data[j];
    iy = (int32_T)emlrtIntegerCheckFastR2012b(temp_re, &c_emlrtDCI,
      emlrtRootTLSGlobal);
    r1->data[j] = emlrtDynamicBoundsCheckFastR2012b(iy, 1, 768, &k_emlrtBCI,
      emlrtRootTLSGlobal);
  }

  j = r1->size[0];
  emlrtSizeEqCheck1DFastR2012b(j, 576, &h_emlrtECI, emlrtRootTLSGlobal);
  i2 = r1->size[0];
  for (j = 0; j < i2; j++) {
    packedData[r1->data[j] - 1] = varargin_1[j];
  }

  emxFree_int32_T(&r1);
  for (j = 0; j < 48; j++) {
    packedData[iv52[j]].re = varargin_2[j];
    packedData[iv52[j]].im = 0.0;
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

  emlrtPushRtStackR2012b(&xc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&yc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&ad_emlrtRSI, emlrtRootTLSGlobal);
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
    emlrtPushRtStackR2012b(&bd_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&bd_emlrtRSI, emlrtRootTLSGlobal);
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

  emlrtPopRtStackR2012b(&ad_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&yc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&xc_emlrtRSI, emlrtRootTLSGlobal);
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
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtHeapReferenceStackLeaveFcnR2012b(emlrtRootTLSGlobal);
}

void c_eml_error(void)
{
  emlrtPushRtStackR2012b(&t_emlrtRSI, emlrtRootTLSGlobal);
  emlrtErrorWithMessageIdR2012b(emlrtRootTLSGlobal, &cc_emlrtRTEI,
    "Coder:toolbox:reshape_emptyReshapeLimit", 0);
  emlrtPopRtStackR2012b(&t_emlrtRSI, emlrtRootTLSGlobal);
}

void check_forloop_overflow_error(void)
{
  const mxArray *y;
  static const int32_T iv39[2] = { 1, 34 };

  const mxArray *m6;
  char_T cv46[34];
  int32_T i;
  static const char_T cv47[34] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'i', 'n', 't', '_', 'f', 'o', 'r', 'l', 'o', 'o',
    'p', '_', 'o', 'v', 'e', 'r', 'f', 'l', 'o', 'w' };

  const mxArray *b_y;
  static const int32_T iv40[2] = { 1, 23 };

  char_T cv48[23];
  static const char_T cv49[23] = { 'c', 'o', 'd', 'e', 'r', '.', 'i', 'n', 't',
    'e', 'r', 'n', 'a', 'l', '.', 'i', 'n', 'd', 'e', 'x', 'I', 'n', 't' };

  emlrtPushRtStackR2012b(&dc_emlrtRSI, emlrtRootTLSGlobal);
  y = NULL;
  m6 = mxCreateCharArray(2, iv39);
  for (i = 0; i < 34; i++) {
    cv46[i] = cv47[i];
  }

  emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 34, m6, cv46);
  emlrtAssign(&y, m6);
  b_y = NULL;
  m6 = mxCreateCharArray(2, iv40);
  for (i = 0; i < 23; i++) {
    cv48[i] = cv49[i];
  }

  emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 23, m6, cv48);
  emlrtAssign(&b_y, m6);
  c_error(message(y, b_y, &f_emlrtMCI), &g_emlrtMCI);
  emlrtPopRtStackR2012b(&dc_emlrtRSI, emlrtRootTLSGlobal);
}

void d_SystemCore_checkTunableProps(commcodegen_BPSKModulator_191 *obj)
{
  commcodegen_BPSKModulator_191 *b_obj;
  if (obj->TunablePropsChanged) {
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    b_obj = obj;
    b_obj->TunablePropsChanged = FALSE;
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  }
}

boolean_T d_SystemCore_detectInputSizeCha(commcodegen_BPSKModulator *obj)
{
  boolean_T anyInputSizeChanged;
  int32_T k;
  boolean_T exitg1;
  static const int8_T iv46[8] = { 13, 1, 1, 1, 1, 1, 1, 1 };

  commcodegen_BPSKModulator *b_obj;
  static const int8_T inputSize[8] = { 13, 1, 1, 1, 1, 1, 1, 1 };

  anyInputSizeChanged = FALSE;
  k = 0;
  exitg1 = FALSE;
  while ((exitg1 == FALSE) && (k < 8)) {
    if (obj->inputVarSize1[k] != (uint32_T)iv46[k]) {
      anyInputSizeChanged = TRUE;
      emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
      b_obj = obj;
      for (k = 0; k < 8; k++) {
        b_obj->inputVarSize1[k] = (uint32_T)inputSize[k];
      }

      emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
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
  static const int32_T iv87[2] = { 1, 51 };

  const mxArray *m17;
  char_T cv95[51];
  int32_T i;
  static const char_T cv96[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l',
    'e', 'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv88[2] = { 1, 5 };

  char_T cv97[5];
  static const char_T cv98[5] = { 's', 'e', 't', 'u', 'p' };

  commcodegen_BPSKModulator_191 *b_obj;
  static const int8_T value[8] = { 13, 1, 1, 1, 1, 1, 1, 1 };

  if (!obj->isInitialized) {
  } else {
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    y = NULL;
    m17 = mxCreateCharArray(2, iv87);
    for (i = 0; i < 51; i++) {
      cv95[i] = cv96[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 51, m17, cv95);
    emlrtAssign(&y, m17);
    b_y = NULL;
    m17 = mxCreateCharArray(2, iv88);
    for (i = 0; i < 5; i++) {
      cv97[i] = cv98[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 5, m17, cv97);
    emlrtAssign(&b_y, m17);
    c_error(message(y, b_y, &b_emlrtMCI), &b_emlrtMCI);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  b_obj->isInitialized = TRUE;
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  for (i = 0; i < 8; i++) {
    b_obj->inputVarSize1[i] = (uint32_T)value[i];
  }

  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&hc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&hc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&hc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&hc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  b_obj->TunablePropsChanged = FALSE;
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
}

void d_SystemCore_step(commcodegen_CRCGenerator_256 *obj, const real_T
  varargin_1[560], real_T varargout_1[563])
{
  const mxArray *y;
  static const int32_T iv79[2] = { 1, 45 };

  const mxArray *m15;
  char_T cv83[45];
  int32_T i;
  static const char_T cv84[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C',
    'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv80[2] = { 1, 4 };

  char_T cv85[4];
  static const char_T cv86[4] = { 's', 't', 'e', 'p' };

  commcodegen_CRCGenerator_256 *b_obj;
  const mxArray *c_y;
  static const int32_T iv81[2] = { 1, 51 };

  char_T cv87[51];
  static const char_T cv88[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l',
    'e', 'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *d_y;
  static const int32_T iv82[2] = { 1, 5 };

  char_T cv89[5];
  static const char_T cv90[5] = { 's', 'e', 't', 'u', 'p' };

  int32_T k;
  static const int16_T value[8] = { 560, 1, 1, 1, 1, 1, 1, 1 };

  boolean_T exitg1;
  static const int16_T iv83[8] = { 560, 1, 1, 1, 1, 1, 1, 1 };

  comm_CRCGenerator_3 *c_obj;
  uint32_T shReg;
  uint32_T input;
  uint32_T bitMask;
  int32_T j;
  uint32_T inpBit;
  if (!obj->isReleased) {
  } else {
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    y = NULL;
    m15 = mxCreateCharArray(2, iv79);
    for (i = 0; i < 45; i++) {
      cv83[i] = cv84[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 45, m15, cv83);
    emlrtAssign(&y, m15);
    b_y = NULL;
    m15 = mxCreateCharArray(2, iv80);
    for (i = 0; i < 4; i++) {
      cv85[i] = cv86[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 4, m15, cv85);
    emlrtAssign(&b_y, m15);
    c_error(message(y, b_y, &b_emlrtMCI), &b_emlrtMCI);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  }

  if (!obj->isInitialized) {
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    b_obj = obj;
    if (!b_obj->isInitialized) {
    } else {
      emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
      c_y = NULL;
      m15 = mxCreateCharArray(2, iv81);
      for (i = 0; i < 51; i++) {
        cv87[i] = cv88[i];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 51, m15, cv87);
      emlrtAssign(&c_y, m15);
      d_y = NULL;
      m15 = mxCreateCharArray(2, iv82);
      for (i = 0; i < 5; i++) {
        cv89[i] = cv90[i];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 5, m15, cv89);
      emlrtAssign(&d_y, m15);
      c_error(message(c_y, d_y, &b_emlrtMCI), &b_emlrtMCI);
      emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    }

    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->isInitialized = TRUE;
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    for (k = 0; k < 8; k++) {
      b_obj->inputVarSize1[k] = (uint32_T)value[k];
    }

    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&ec_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&ec_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&ec_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&ec_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->TunablePropsChanged = FALSE;
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  if (b_obj->TunablePropsChanged) {
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->TunablePropsChanged = FALSE;
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  k = 0;
  exitg1 = FALSE;
  while ((exitg1 == FALSE) && (k < 8)) {
    if (b_obj->inputVarSize1[k] != (uint32_T)iv83[k]) {
      emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
      for (k = 0; k < 8; k++) {
        b_obj->inputVarSize1[k] = (uint32_T)value[k];
      }

      emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
      exitg1 = TRUE;
    } else {
      k++;
    }
  }

  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&ec_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&ec_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  emlrtPushRtStackR2012b(&gc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&ec_emlrtRSI, emlrtRootTLSGlobal);
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
  emlrtPopRtStackR2012b(&ec_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&gc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&gc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&ec_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&ec_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&gc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
}

void e_SystemCore_checkTunableProps(commcodegen_BPSKModulator_348 *obj)
{
  commcodegen_BPSKModulator_348 *b_obj;
  if (obj->TunablePropsChanged) {
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    b_obj = obj;
    b_obj->TunablePropsChanged = FALSE;
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  }
}

boolean_T e_SystemCore_detectInputSizeCha(commcodegen_BPSKModulator_191 *obj)
{
  boolean_T anyInputSizeChanged;
  int32_T k;
  boolean_T exitg1;
  static const int16_T iv86[8] = { 563, 1, 1, 1, 1, 1, 1, 1 };

  commcodegen_BPSKModulator_191 *b_obj;
  static const int16_T inputSize[8] = { 563, 1, 1, 1, 1, 1, 1, 1 };

  anyInputSizeChanged = FALSE;
  k = 0;
  exitg1 = FALSE;
  while ((exitg1 == FALSE) && (k < 8)) {
    if (obj->inputVarSize1[k] != (uint32_T)iv86[k]) {
      anyInputSizeChanged = TRUE;
      emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
      b_obj = obj;
      for (k = 0; k < 8; k++) {
        b_obj->inputVarSize1[k] = (uint32_T)inputSize[k];
      }

      emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
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
  static const int32_T iv164[2] = { 1, 51 };

  const mxArray *m34;
  char_T cv192[51];
  int32_T i;
  static const char_T cv193[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l',
    'e', 'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv165[2] = { 1, 5 };

  char_T cv194[5];
  static const char_T cv195[5] = { 's', 'e', 't', 'u', 'p' };

  commcodegen_BPSKModulator_348 *b_obj;
  static const int16_T value[8] = { 563, 1, 1, 1, 1, 1, 1, 1 };

  if (!obj->isInitialized) {
  } else {
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    y = NULL;
    m34 = mxCreateCharArray(2, iv164);
    for (i = 0; i < 51; i++) {
      cv192[i] = cv193[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 51, m34, cv192);
    emlrtAssign(&y, m34);
    b_y = NULL;
    m34 = mxCreateCharArray(2, iv165);
    for (i = 0; i < 5; i++) {
      cv194[i] = cv195[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 5, m34, cv194);
    emlrtAssign(&b_y, m34);
    c_error(message(y, b_y, &b_emlrtMCI), &b_emlrtMCI);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  b_obj->isInitialized = TRUE;
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  for (i = 0; i < 8; i++) {
    b_obj->inputVarSize1[i] = (uint32_T)value[i];
  }

  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&hc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&hc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&hc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&hc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  b_obj->TunablePropsChanged = FALSE;
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
}

void e_SystemCore_step(OFDMDemodulator_1 *obj, const creal_T varargin_1[64],
  emxArray_creal_T *varargout_1)
{
  const mxArray *y;
  static const int32_T iv116[2] = { 1, 45 };

  const mxArray *m27;
  char_T cv131[45];
  int32_T i;
  static const char_T cv132[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C',
    'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv117[2] = { 1, 4 };

  char_T cv133[4];
  static const char_T cv134[4] = { 's', 't', 'e', 'p' };

  OFDMDemodulator_1 *b_obj;
  const mxArray *c_y;
  static const int32_T iv118[2] = { 1, 51 };

  char_T cv135[51];
  static const char_T cv136[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l',
    'e', 'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *d_y;
  static const int32_T iv119[2] = { 1, 5 };

  char_T cv137[5];
  static const char_T cv138[5] = { 's', 'e', 't', 'u', 'p' };

  int8_T fullGrid[64];
  int32_T ju;
  static const int8_T iv120[11] = { 0, 1, 2, 3, 4, 5, 59, 60, 61, 62, 63 };

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
  static const real_T dv10[33] = { 0.0, -0.0980171403295606,
    -0.19509032201612825, -0.29028467725446233, -0.38268343236508978,
    -0.47139673682599764, -0.55557023301960218, -0.63439328416364549,
    -0.70710678118654757, -0.773010453362737, -0.83146961230254524,
    -0.881921264348355, -0.92387953251128674, -0.95694033573220882,
    -0.98078528040323043, -0.99518472667219693, -1.0, -0.99518472667219693,
    -0.98078528040323043, -0.95694033573220882, -0.92387953251128674,
    -0.881921264348355, -0.83146961230254524, -0.773010453362737,
    -0.70710678118654757, -0.63439328416364549, -0.55557023301960218,
    -0.47139673682599764, -0.38268343236508978, -0.29028467725446233,
    -0.19509032201612825, -0.0980171403295606, -0.0 };

  static const real_T dv11[33] = { 1.0, 0.99518472667219693, 0.98078528040323043,
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
  static const int32_T iv121[2] = { 1, 21 };

  char_T cv139[21];
  static const char_T cv140[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'p', 'm', 'a', 'x', 's', 'i', 'z', 'e' };

  int32_T sz[3];
  emxArray_creal_T *f_y;
  const mxArray *g_y;
  static const int32_T iv122[2] = { 1, 40 };

  char_T cv141[40];
  static const char_T cv142[40] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'g', 'e', 't', 'R', 'e', 's', 'h', 'a', 'p', 'e', 'D',
    'i', 'm', 's', '_', 'n', 'o', 't', 'S', 'a', 'm', 'e', 'N', 'u', 'm', 'e',
    'l' };

  emlrtHeapReferenceStackEnterFcnR2012b(emlrtRootTLSGlobal);
  if (!obj->isReleased) {
  } else {
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    y = NULL;
    m27 = mxCreateCharArray(2, iv116);
    for (i = 0; i < 45; i++) {
      cv131[i] = cv132[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 45, m27, cv131);
    emlrtAssign(&y, m27);
    b_y = NULL;
    m27 = mxCreateCharArray(2, iv117);
    for (i = 0; i < 4; i++) {
      cv133[i] = cv134[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 4, m27, cv133);
    emlrtAssign(&b_y, m27);
    c_error(message(y, b_y, &b_emlrtMCI), &b_emlrtMCI);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  }

  if (!obj->isInitialized) {
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    b_obj = obj;
    if (!b_obj->isInitialized) {
    } else {
      emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
      c_y = NULL;
      m27 = mxCreateCharArray(2, iv118);
      for (i = 0; i < 51; i++) {
        cv135[i] = cv136[i];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 51, m27, cv135);
      emlrtAssign(&c_y, m27);
      d_y = NULL;
      m27 = mxCreateCharArray(2, iv119);
      for (i = 0; i < 5; i++) {
        cv137[i] = cv138[i];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 5, m27, cv137);
      emlrtAssign(&d_y, m27);
      c_error(message(c_y, d_y, &b_emlrtMCI), &b_emlrtMCI);
      emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    }

    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->isInitialized = TRUE;
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&ui_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&tc_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&tc_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&ui_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    memset(&fullGrid[0], 1, sizeof(int8_T) << 6);
    for (ju = 0; ju < 11; ju++) {
      fullGrid[iv120[ju]] = 0;
    }

    emlrtPushRtStackR2012b(&vi_emlrtRSI, emlrtRootTLSGlobal);
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
                      (int32_T)sizeof(real_T), &h_emlrtRTEI);
    for (ju = 0; ju < idx; ju++) {
      b_obj->pDataLinearIndices->data[ju] = ii_data[ju];
    }

    emlrtPopRtStackR2012b(&vi_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->TunablePropsChanged = FALSE;
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  if (b_obj->TunablePropsChanged) {
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&ui_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&tc_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&tc_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&ui_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->TunablePropsChanged = FALSE;
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
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
        tmp_re = dv11[ix] * postFFT[i + iDelta].re - dv10[ix] * postFFT[i +
          iDelta].im;
        tmp_im = dv11[ix] * postFFT[i + iDelta].im + dv10[ix] * postFFT[i +
          iDelta].re;
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

  emxInit_real_T(&x, 1, &h_emlrtRTEI, TRUE);
  emlrtPushRtStackR2012b(&wi_emlrtRSI, emlrtRootTLSGlobal);
  ju = x->size[0];
  x->size[0] = b_obj->pDataLinearIndices->size[0];
  emxEnsureCapacity((emxArray__common *)x, ju, (int32_T)sizeof(real_T),
                    &h_emlrtRTEI);
  idx = b_obj->pDataLinearIndices->size[0];
  for (ju = 0; ju < idx; ju++) {
    x->data[ju] = b_obj->pDataLinearIndices->data[ju];
  }

  b_emxInit_creal_T(&b_x, 1, &h_emlrtRTEI, TRUE);
  ju = b_x->size[0];
  b_x->size[0] = b_obj->pDataLinearIndices->size[0];
  emxEnsureCapacity((emxArray__common *)b_x, ju, (int32_T)sizeof(creal_T),
                    &h_emlrtRTEI);
  idx = b_obj->pDataLinearIndices->size[0];
  for (ju = 0; ju < idx; ju++) {
    tmp_re = b_obj->pDataLinearIndices->data[ju];
    ix = (int32_T)emlrtIntegerCheckFastR2012b(tmp_re, &e_emlrtDCI,
      emlrtRootTLSGlobal);
    b_x->data[ju] = postFFT[emlrtDynamicBoundsCheckFastR2012b(ix, 1, 64,
      &hb_emlrtBCI, emlrtRootTLSGlobal) - 1];
  }

  b_varargin_1[0] = x->size[0];
  b_varargin_1[1] = 1;
  b_varargin_1[2] = 1;
  emlrtPushRtStackR2012b(&bj_emlrtRSI, emlrtRootTLSGlobal);
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
    emlrtPushRtStackR2012b(&dj_emlrtRSI, emlrtRootTLSGlobal);
    e_y = NULL;
    m27 = mxCreateCharArray(2, iv121);
    for (i = 0; i < 21; i++) {
      cv139[i] = cv140[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 21, m27, cv139);
    emlrtAssign(&e_y, m27);
    c_error(b_message(e_y, &qb_emlrtMCI), &rb_emlrtMCI);
    emlrtPopRtStackR2012b(&dj_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPopRtStackR2012b(&bj_emlrtRSI, emlrtRootTLSGlobal);
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
    emlrtPushRtStackR2012b(&aj_emlrtRSI, emlrtRootTLSGlobal);
    c_eml_error();
    emlrtPopRtStackR2012b(&aj_emlrtRSI, emlrtRootTLSGlobal);
  }

  if (1 > idx) {
    emlrtPushRtStackR2012b(&aj_emlrtRSI, emlrtRootTLSGlobal);
    c_eml_error();
    emlrtPopRtStackR2012b(&aj_emlrtRSI, emlrtRootTLSGlobal);
  }

  emxInit_creal_T(&f_y, 3, &h_emlrtRTEI, TRUE);
  ju = f_y->size[0] * f_y->size[1] * f_y->size[2];
  f_y->size[0] = sz[0];
  f_y->size[1] = 1;
  f_y->size[2] = 1;
  emxEnsureCapacity((emxArray__common *)f_y, ju, (int32_T)sizeof(creal_T),
                    &sb_emlrtRTEI);
  if (b_x->size[0] == sz[0]) {
  } else {
    emlrtPushRtStackR2012b(&yi_emlrtRSI, emlrtRootTLSGlobal);
    g_y = NULL;
    m27 = mxCreateCharArray(2, iv122);
    for (i = 0; i < 40; i++) {
      cv141[i] = cv142[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 40, m27, cv141);
    emlrtAssign(&g_y, m27);
    c_error(b_message(g_y, &mb_emlrtMCI), &nb_emlrtMCI);
    emlrtPopRtStackR2012b(&yi_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPushRtStackR2012b(&xi_emlrtRSI, emlrtRootTLSGlobal);
  if (1 > b_x->size[0]) {
    overflow = FALSE;
  } else {
    overflow = (b_x->size[0] > 2147483646);
  }

  if (overflow) {
    emlrtPushRtStackR2012b(&cc_emlrtRSI, emlrtRootTLSGlobal);
    check_forloop_overflow_error();
    emlrtPopRtStackR2012b(&cc_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPopRtStackR2012b(&xi_emlrtRSI, emlrtRootTLSGlobal);
  for (k = 0; k + 1 <= b_x->size[0]; k++) {
    f_y->data[k] = b_x->data[k];
  }

  emxFree_creal_T(&b_x);
  ju = varargout_1->size[0] * varargout_1->size[1] * varargout_1->size[2];
  varargout_1->size[0] = f_y->size[0];
  varargout_1->size[1] = f_y->size[1];
  varargout_1->size[2] = 1;
  emxEnsureCapacity((emxArray__common *)varargout_1, ju, (int32_T)sizeof(creal_T),
                    &h_emlrtRTEI);
  idx = f_y->size[0] * f_y->size[1] * f_y->size[2];
  for (ju = 0; ju < idx; ju++) {
    varargout_1->data[ju] = f_y->data[ju];
  }

  emxFree_creal_T(&f_y);
  emlrtPopRtStackR2012b(&wi_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtHeapReferenceStackLeaveFcnR2012b(emlrtRootTLSGlobal);
}

void f_SystemCore_checkTunableProps(commcodegen_BPSKModulator_348 *obj)
{
  commcodegen_BPSKModulator_348 *b_obj;
  if (obj->TunablePropsChanged) {
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    b_obj = obj;
    b_obj->TunablePropsChanged = FALSE;
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  }
}

boolean_T f_SystemCore_detectInputSizeCha(commcodegen_BPSKModulator_191 *obj)
{
  boolean_T anyInputSizeChanged;
  int32_T k;
  boolean_T exitg1;
  static const int8_T iv89[8] = { 13, 1, 1, 1, 1, 1, 1, 1 };

  commcodegen_BPSKModulator_191 *b_obj;
  static const int8_T inputSize[8] = { 13, 1, 1, 1, 1, 1, 1, 1 };

  anyInputSizeChanged = FALSE;
  k = 0;
  exitg1 = FALSE;
  while ((exitg1 == FALSE) && (k < 8)) {
    if (obj->inputVarSize1[k] != (uint32_T)iv89[k]) {
      anyInputSizeChanged = TRUE;
      emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
      b_obj = obj;
      for (k = 0; k < 8; k++) {
        b_obj->inputVarSize1[k] = (uint32_T)inputSize[k];
      }

      emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
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
  static const int32_T iv167[2] = { 1, 51 };

  const mxArray *m35;
  char_T cv196[51];
  int32_T i;
  static const char_T cv197[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l',
    'e', 'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv168[2] = { 1, 5 };

  char_T cv198[5];
  static const char_T cv199[5] = { 's', 'e', 't', 'u', 'p' };

  commcodegen_BPSKModulator_348 *b_obj;
  static const int8_T value[8] = { 13, 1, 1, 1, 1, 1, 1, 1 };

  if (!obj->isInitialized) {
  } else {
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    y = NULL;
    m35 = mxCreateCharArray(2, iv167);
    for (i = 0; i < 51; i++) {
      cv196[i] = cv197[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 51, m35, cv196);
    emlrtAssign(&y, m35);
    b_y = NULL;
    m35 = mxCreateCharArray(2, iv168);
    for (i = 0; i < 5; i++) {
      cv198[i] = cv199[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 5, m35, cv198);
    emlrtAssign(&b_y, m35);
    c_error(message(y, b_y, &b_emlrtMCI), &b_emlrtMCI);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  b_obj->isInitialized = TRUE;
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  for (i = 0; i < 8; i++) {
    b_obj->inputVarSize1[i] = (uint32_T)value[i];
  }

  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&hc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&hc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&hc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&hc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  b_obj->TunablePropsChanged = FALSE;
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
}

void f_SystemCore_step(testMACReceiverStackData *SD, OFDMDemodulator *obj, const
  creal_T varargin_1[960], emxArray_creal_T *varargout_1, creal_T varargout_2[48])
{
  const mxArray *y;
  static const int32_T iv123[2] = { 1, 45 };

  const mxArray *m28;
  char_T cv143[45];
  int32_T i;
  static const char_T cv144[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C',
    'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv124[2] = { 1, 4 };

  char_T cv145[4];
  static const char_T cv146[4] = { 's', 't', 'e', 'p' };

  OFDMDemodulator *b_obj;
  const mxArray *c_y;
  static const int32_T iv125[2] = { 1, 51 };

  char_T cv147[51];
  static const char_T cv148[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l',
    'e', 'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *d_y;
  static const int32_T iv126[2] = { 1, 5 };

  char_T cv149[5];
  static const char_T cv150[5] = { 's', 'e', 't', 'u', 'p' };

  creal_T postFFT[768];
  int32_T ix;
  int32_T chanStart;
  int32_T i1;
  int32_T i2;
  int32_T b_ix;
  boolean_T overflow;
  int32_T c_ix;
  real_T tmp_re;
  real_T tmp_im;
  int32_T ib;
  int32_T iDelta2;
  int32_T k;
  int32_T iheight;
  int32_T ihi;
  static const real_T dv12[33] = { 0.0, -0.0980171403295606,
    -0.19509032201612825, -0.29028467725446233, -0.38268343236508978,
    -0.47139673682599764, -0.55557023301960218, -0.63439328416364549,
    -0.70710678118654757, -0.773010453362737, -0.83146961230254524,
    -0.881921264348355, -0.92387953251128674, -0.95694033573220882,
    -0.98078528040323043, -0.99518472667219693, -1.0, -0.99518472667219693,
    -0.98078528040323043, -0.95694033573220882, -0.92387953251128674,
    -0.881921264348355, -0.83146961230254524, -0.773010453362737,
    -0.70710678118654757, -0.63439328416364549, -0.55557023301960218,
    -0.47139673682599764, -0.38268343236508978, -0.29028467725446233,
    -0.19509032201612825, -0.0980171403295606, -0.0 };

  static const real_T dv13[33] = { 1.0, 0.99518472667219693, 0.98078528040323043,
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
  real_T b_varargin_1[3];
  int32_T exitg1;
  const mxArray *e_y;
  static const int32_T iv127[2] = { 1, 57 };

  char_T cv151[57];
  static const char_T cv152[57] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'e', 'm', 'l', '_', 'a', 's', 's', 'e', 'r', 't',
    '_', 'v', 'a', 'l', 'i', 'd', '_', 's', 'i', 'z', 'e', '_', 'a', 'r', 'g',
    '_', 'i', 'n', 'v', 'a', 'l', 'i', 'd', 'S', 'i', 'z', 'e', 'V', 'e', 'c',
    't', 'o', 'r' };

  const mxArray *f_y;
  static const int32_T iv128[2] = { 1, 21 };

  char_T cv153[21];
  static const char_T cv154[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'p', 'm', 'a', 'x', 's', 'i', 'z', 'e' };

  int32_T sz[3];
  emxArray_creal_T *g_y;
  const mxArray *h_y;
  static const int32_T iv129[2] = { 1, 40 };

  char_T cv155[40];
  static const char_T cv156[40] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'g', 'e', 't', 'R', 'e', 's', 'h', 'a', 'p', 'e', 'D',
    'i', 'm', 's', '_', 'n', 'o', 't', 'S', 'a', 'm', 'e', 'N', 'u', 'm', 'e',
    'l' };

  static const int16_T iv130[48] = { 11, 25, 39, 53, 75, 89, 103, 117, 139, 153,
    167, 181, 203, 217, 231, 245, 267, 281, 295, 309, 331, 345, 359, 373, 395,
    409, 423, 437, 459, 473, 487, 501, 523, 537, 551, 565, 587, 601, 615, 629,
    651, 665, 679, 693, 715, 729, 743, 757 };

  emlrtHeapReferenceStackEnterFcnR2012b(emlrtRootTLSGlobal);
  if (!obj->isReleased) {
  } else {
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    y = NULL;
    m28 = mxCreateCharArray(2, iv123);
    for (i = 0; i < 45; i++) {
      cv143[i] = cv144[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 45, m28, cv143);
    emlrtAssign(&y, m28);
    b_y = NULL;
    m28 = mxCreateCharArray(2, iv124);
    for (i = 0; i < 4; i++) {
      cv145[i] = cv146[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 4, m28, cv145);
    emlrtAssign(&b_y, m28);
    c_error(message(y, b_y, &b_emlrtMCI), &b_emlrtMCI);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  }

  if (!obj->isInitialized) {
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    b_obj = obj;
    if (!b_obj->isInitialized) {
    } else {
      emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
      c_y = NULL;
      m28 = mxCreateCharArray(2, iv125);
      for (i = 0; i < 51; i++) {
        cv147[i] = cv148[i];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 51, m28, cv147);
      emlrtAssign(&c_y, m28);
      d_y = NULL;
      m28 = mxCreateCharArray(2, iv126);
      for (i = 0; i < 5; i++) {
        cv149[i] = cv150[i];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 5, m28, cv149);
      emlrtAssign(&d_y, m28);
      c_error(message(c_y, d_y, &b_emlrtMCI), &b_emlrtMCI);
      emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    }

    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->isInitialized = TRUE;
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&ui_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&tc_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&tc_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&ui_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    OFDMDemodulator_setupImpl(b_obj);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->TunablePropsChanged = FALSE;
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  if (b_obj->TunablePropsChanged) {
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&ui_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&tc_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&tc_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&ui_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->TunablePropsChanged = FALSE;
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  memcpy(&SD->u1.f4.inputIn3D[0], &varargin_1[0], 960U * sizeof(creal_T));
  emlrtPushRtStackR2012b(&fj_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&hj_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&ad_emlrtRSI, emlrtRootTLSGlobal);
  ix = 0;
  for (chanStart = 0; chanStart < 706; chanStart += 64) {
    i1 = 0;
    i2 = chanStart;
    for (i = 0; i < 63; i++) {
      if (ix >= 0) {
        b_ix = (int32_T)((uint32_T)ix >> 6);
      } else {
        b_ix = ~(int32_T)((uint32_T)~ix >> 6);
      }

      postFFT[i2] = SD->u1.f4.inputIn3D[(ix % 64 + 80 * b_ix) + 16];
      i2 = 64;
      overflow = TRUE;
      while (overflow) {
        if (i2 >= 0) {
          i2 = (int32_T)((uint32_T)i2 >> 1);
        } else {
          i2 = ~(int32_T)((uint32_T)~i2 >> 1);
        }

        i1 ^= i2;
        overflow = ((i1 & i2) == 0);
      }

      i2 = chanStart + i1;
      ix++;
    }

    if (ix >= 0) {
      c_ix = (int32_T)((uint32_T)ix >> 6);
    } else {
      c_ix = ~(int32_T)((uint32_T)~ix >> 6);
    }

    postFFT[i2] = SD->u1.f4.inputIn3D[(ix % 64 + 80 * c_ix) + 16];
    ix++;
    emlrtPushRtStackR2012b(&bd_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&bd_emlrtRSI, emlrtRootTLSGlobal);
    for (i = chanStart; i <= chanStart + 62; i += 2) {
      tmp_re = postFFT[i + 1].re;
      tmp_im = postFFT[i + 1].im;
      postFFT[i + 1].re = postFFT[i].re - postFFT[i + 1].re;
      postFFT[i + 1].im = postFFT[i].im - postFFT[i + 1].im;
      postFFT[i].re += tmp_re;
      postFFT[i].im += tmp_im;
    }

    ib = 2;
    iDelta2 = 4;
    k = 16;
    iheight = 61;
    while (k > 0) {
      i = chanStart;
      ihi = chanStart + iheight;
      while (i < ihi) {
        i2 = i + ib;
        tmp_re = postFFT[i2].re;
        tmp_im = postFFT[i2].im;
        postFFT[i + ib].re = postFFT[i].re - postFFT[i2].re;
        postFFT[i + ib].im = postFFT[i].im - postFFT[i2].im;
        postFFT[i].re += tmp_re;
        postFFT[i].im += tmp_im;
        i += iDelta2;
      }

      i2 = chanStart + 1;
      for (i1 = k; i1 < 32; i1 += k) {
        i = i2;
        ihi = i2 + iheight;
        while (i < ihi) {
          tmp_re = dv13[i1] * postFFT[i + ib].re - dv12[i1] * postFFT[i + ib].im;
          tmp_im = dv13[i1] * postFFT[i + ib].im + dv12[i1] * postFFT[i + ib].re;
          postFFT[i + ib].re = postFFT[i].re - tmp_re;
          postFFT[i + ib].im = postFFT[i].im - tmp_im;
          postFFT[i].re += tmp_re;
          postFFT[i].im += tmp_im;
          i += iDelta2;
        }

        i2++;
      }

      ib = k;
      k = (int32_T)((uint32_T)ib >> 1);
      ib = iDelta2;
      iDelta2 <<= 1;
      iheight -= ib;
    }
  }

  emlrtPopRtStackR2012b(&ad_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&hj_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&fj_emlrtRSI, emlrtRootTLSGlobal);
  i2 = 0;
  for (i = 0; i < 12; i++) {
    i1 = i2;
    i2 += 64;
    ib = i1 + 32;
    for (k = 0; k < 32; k++) {
      tmp_re = postFFT[i1].re;
      tmp_im = postFFT[i1].im;
      postFFT[i1] = postFFT[ib];
      postFFT[ib].re = tmp_re;
      postFFT[ib].im = tmp_im;
      i1++;
      ib++;
    }
  }

  emxInit_real_T(&x, 1, &h_emlrtRTEI, TRUE);
  emlrtPushRtStackR2012b(&wi_emlrtRSI, emlrtRootTLSGlobal);
  ib = x->size[0];
  x->size[0] = b_obj->pDataLinearIndices->size[0];
  emxEnsureCapacity((emxArray__common *)x, ib, (int32_T)sizeof(real_T),
                    &h_emlrtRTEI);
  i2 = b_obj->pDataLinearIndices->size[0];
  for (ib = 0; ib < i2; ib++) {
    x->data[ib] = b_obj->pDataLinearIndices->data[ib];
  }

  b_emxInit_creal_T(&b_x, 1, &h_emlrtRTEI, TRUE);
  ib = b_x->size[0];
  b_x->size[0] = b_obj->pDataLinearIndices->size[0];
  emxEnsureCapacity((emxArray__common *)b_x, ib, (int32_T)sizeof(creal_T),
                    &h_emlrtRTEI);
  i2 = b_obj->pDataLinearIndices->size[0];
  for (ib = 0; ib < i2; ib++) {
    tmp_re = b_obj->pDataLinearIndices->data[ib];
    i1 = (int32_T)emlrtIntegerCheckFastR2012b(tmp_re, &e_emlrtDCI,
      emlrtRootTLSGlobal);
    b_x->data[ib] = postFFT[emlrtDynamicBoundsCheckFastR2012b(i1, 1, 768,
      &ib_emlrtBCI, emlrtRootTLSGlobal) - 1];
  }

  b_varargin_1[0] = (real_T)x->size[0] / 12.0;
  b_varargin_1[1] = 12.0;
  b_varargin_1[2] = 1.0;
  emlrtPushRtStackR2012b(&bj_emlrtRSI, emlrtRootTLSGlobal);
  k = 0;
  emxFree_real_T(&x);
  do {
    exitg1 = 0;
    if (k < 3) {
      if (b_varargin_1[k] != muDoubleScalarFloor(b_varargin_1[k])) {
        overflow = FALSE;
        exitg1 = 1;
      } else {
        k++;
      }
    } else {
      overflow = TRUE;
      exitg1 = 1;
    }
  } while (exitg1 == 0);

  if (overflow) {
  } else {
    emlrtPushRtStackR2012b(&cj_emlrtRSI, emlrtRootTLSGlobal);
    e_y = NULL;
    m28 = mxCreateCharArray(2, iv127);
    for (i = 0; i < 57; i++) {
      cv151[i] = cv152[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 57, m28, cv151);
    emlrtAssign(&e_y, m28);
    c_error(b_message(e_y, &ob_emlrtMCI), &pb_emlrtMCI);
    emlrtPopRtStackR2012b(&cj_emlrtRSI, emlrtRootTLSGlobal);
  }

  tmp_re = 1.0;
  for (k = 0; k < 3; k++) {
    if (b_varargin_1[k] <= 0.0) {
      tmp_re = 0.0;
    } else {
      tmp_re *= b_varargin_1[k];
    }
  }

  if (2.147483647E+9 >= tmp_re) {
  } else {
    emlrtPushRtStackR2012b(&dj_emlrtRSI, emlrtRootTLSGlobal);
    f_y = NULL;
    m28 = mxCreateCharArray(2, iv128);
    for (i = 0; i < 21; i++) {
      cv153[i] = cv154[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 21, m28, cv153);
    emlrtAssign(&f_y, m28);
    c_error(b_message(f_y, &qb_emlrtMCI), &rb_emlrtMCI);
    emlrtPopRtStackR2012b(&dj_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPopRtStackR2012b(&bj_emlrtRSI, emlrtRootTLSGlobal);
  for (ib = 0; ib < 3; ib++) {
    sz[ib] = (int32_T)b_varargin_1[ib];
  }

  i2 = b_x->size[0];
  if (1 > i2) {
    i2 = 1;
  }

  if (b_x->size[0] < i2) {
  } else {
    i2 = b_x->size[0];
  }

  if (sz[0] > i2) {
    emlrtPushRtStackR2012b(&aj_emlrtRSI, emlrtRootTLSGlobal);
    c_eml_error();
    emlrtPopRtStackR2012b(&aj_emlrtRSI, emlrtRootTLSGlobal);
  }

  if (12 > i2) {
    emlrtPushRtStackR2012b(&aj_emlrtRSI, emlrtRootTLSGlobal);
    c_eml_error();
    emlrtPopRtStackR2012b(&aj_emlrtRSI, emlrtRootTLSGlobal);
  }

  emxInit_creal_T(&g_y, 3, &h_emlrtRTEI, TRUE);
  ib = g_y->size[0] * g_y->size[1] * g_y->size[2];
  g_y->size[0] = sz[0];
  g_y->size[1] = 12;
  g_y->size[2] = 1;
  emxEnsureCapacity((emxArray__common *)g_y, ib, (int32_T)sizeof(creal_T),
                    &sb_emlrtRTEI);
  if (b_x->size[0] == sz[0] * 12) {
  } else {
    emlrtPushRtStackR2012b(&yi_emlrtRSI, emlrtRootTLSGlobal);
    h_y = NULL;
    m28 = mxCreateCharArray(2, iv129);
    for (i = 0; i < 40; i++) {
      cv155[i] = cv156[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 40, m28, cv155);
    emlrtAssign(&h_y, m28);
    c_error(b_message(h_y, &mb_emlrtMCI), &nb_emlrtMCI);
    emlrtPopRtStackR2012b(&yi_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPushRtStackR2012b(&xi_emlrtRSI, emlrtRootTLSGlobal);
  if (1 > b_x->size[0]) {
    overflow = FALSE;
  } else {
    overflow = (b_x->size[0] > 2147483646);
  }

  if (overflow) {
    emlrtPushRtStackR2012b(&cc_emlrtRSI, emlrtRootTLSGlobal);
    check_forloop_overflow_error();
    emlrtPopRtStackR2012b(&cc_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPopRtStackR2012b(&xi_emlrtRSI, emlrtRootTLSGlobal);
  for (k = 0; k + 1 <= b_x->size[0]; k++) {
    g_y->data[k] = b_x->data[k];
  }

  emxFree_creal_T(&b_x);
  emlrtPopRtStackR2012b(&wi_emlrtRSI, emlrtRootTLSGlobal);
  for (k = 0; k < 48; k++) {
    varargout_2[k] = postFFT[iv130[k]];
  }

  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  ib = varargout_1->size[0] * varargout_1->size[1] * varargout_1->size[2];
  varargout_1->size[0] = g_y->size[0];
  varargout_1->size[1] = g_y->size[1];
  varargout_1->size[2] = 1;
  emxEnsureCapacity((emxArray__common *)varargout_1, ib, (int32_T)sizeof(creal_T),
                    &h_emlrtRTEI);
  i2 = g_y->size[0] * g_y->size[1] * g_y->size[2];
  for (ib = 0; ib < i2; ib++) {
    varargout_1->data[ib] = g_y->data[ib];
  }

  emxFree_creal_T(&g_y);
  emlrtHeapReferenceStackLeaveFcnR2012b(emlrtRootTLSGlobal);
}

boolean_T g_SystemCore_detectInputSizeCha(commcodegen_BPSKModulator_348 *obj)
{
  boolean_T anyInputSizeChanged;
  int32_T k;
  boolean_T exitg1;
  static const int16_T iv166[8] = { 563, 1, 1, 1, 1, 1, 1, 1 };

  commcodegen_BPSKModulator_348 *b_obj;
  static const int16_T inputSize[8] = { 563, 1, 1, 1, 1, 1, 1, 1 };

  anyInputSizeChanged = FALSE;
  k = 0;
  exitg1 = FALSE;
  while ((exitg1 == FALSE) && (k < 8)) {
    if (obj->inputVarSize1[k] != (uint32_T)iv166[k]) {
      anyInputSizeChanged = TRUE;
      emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
      b_obj = obj;
      for (k = 0; k < 8; k++) {
        b_obj->inputVarSize1[k] = (uint32_T)inputSize[k];
      }

      emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
      exitg1 = TRUE;
    } else {
      k++;
    }
  }

  return anyInputSizeChanged;
}

void g_SystemCore_step(dspcodegen_FIRRateConverter *obj, const creal_T
  varargin_1[288], creal_T varargout_1[3456])
{
  const mxArray *y;
  static const int32_T iv133[2] = { 1, 45 };

  const mxArray *m29;
  char_T cv157[45];
  int32_T i;
  static const char_T cv158[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C',
    'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv134[2] = { 1, 4 };

  char_T cv159[4];
  static const char_T cv160[4] = { 's', 't', 'e', 'p' };

  dspcodegen_FIRRateConverter *b_obj;
  const mxArray *c_y;
  static const int32_T iv135[2] = { 1, 51 };

  char_T cv161[51];
  static const char_T cv162[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l',
    'e', 'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *d_y;
  static const int32_T iv136[2] = { 1, 5 };

  char_T cv163[5];
  static const char_T cv164[5] = { 's', 'e', 't', 'u', 'p' };

  static const int8_T value[8] = { 24, 12, 1, 1, 1, 1, 1, 1 };

  dsp_FIRRateConverter_7 *c_obj;
  boolean_T exitg1;
  static const int8_T iv137[8] = { 24, 12, 1, 1, 1, 1, 1, 1 };

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
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    y = NULL;
    m29 = mxCreateCharArray(2, iv133);
    for (i = 0; i < 45; i++) {
      cv157[i] = cv158[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 45, m29, cv157);
    emlrtAssign(&y, m29);
    b_y = NULL;
    m29 = mxCreateCharArray(2, iv134);
    for (i = 0; i < 4; i++) {
      cv159[i] = cv160[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 4, m29, cv159);
    emlrtAssign(&b_y, m29);
    c_error(message(y, b_y, &b_emlrtMCI), &b_emlrtMCI);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  }

  if (!obj->isInitialized) {
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    b_obj = obj;
    if (!b_obj->isInitialized) {
    } else {
      emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
      c_y = NULL;
      m29 = mxCreateCharArray(2, iv135);
      for (i = 0; i < 51; i++) {
        cv161[i] = cv162[i];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 51, m29, cv161);
      emlrtAssign(&c_y, m29);
      d_y = NULL;
      m29 = mxCreateCharArray(2, iv136);
      for (i = 0; i < 5; i++) {
        cv163[i] = cv164[i];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 5, m29, cv163);
      emlrtAssign(&d_y, m29);
      c_error(message(c_y, d_y, &b_emlrtMCI), &b_emlrtMCI);
      emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    }

    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->isInitialized = TRUE;
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    for (i = 0; i < 8; i++) {
      b_obj->inputVarSize1[i] = (uint32_T)value[i];
    }

    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&nj_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&nj_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&nj_emlrtRSI, emlrtRootTLSGlobal);
    c_obj = &b_obj->cSFunObject;
    if (!c_obj->S0_isInitialized) {
      c_obj->S0_isInitialized = TRUE;
      if (c_obj->S1_isReleased) {
        emlrtErrorWithMessageIdR2012b(emlrtRootTLSGlobal, &hc_emlrtRTEI,
          "MATLAB:system:setupCalledWhenLockedReleasedCodegen", 0);
      }

      /* System object Initialization function: dsp.FIRRateConverter */
      c_obj->W1_InBufIdx = 0;
      for (i = 0; i < 252; i++) {
        c_obj->W0_InBuf[i].re = 0.0;
        c_obj->W0_InBuf[i].im = 0.0;
      }
    } else {
      emlrtErrorWithMessageIdR2012b(emlrtRootTLSGlobal, &hc_emlrtRTEI,
        "MATLAB:system:setupCalledWhenLockedCodegen", 0);
    }

    emlrtPopRtStackR2012b(&nj_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&nj_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&nj_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&nj_emlrtRSI, emlrtRootTLSGlobal);
    c_obj = &b_obj->cSFunObject;
    if (c_obj->S1_isReleased) {
      emlrtErrorWithMessageIdR2012b(emlrtRootTLSGlobal, &gc_emlrtRTEI,
        "MATLAB:system:runtimeMethodCalledWhenReleasedCodegen", 0);
    }

    emlrtPushRtStackR2012b(&oj_emlrtRSI, emlrtRootTLSGlobal);

    /* System object Initialization function: dsp.FIRRateConverter */
    c_obj->W1_InBufIdx = 0;
    for (i = 0; i < 252; i++) {
      c_obj->W0_InBuf[i].re = 0.0;
      c_obj->W0_InBuf[i].im = 0.0;
    }

    emlrtPopRtStackR2012b(&oj_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&nj_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->TunablePropsChanged = FALSE;
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  if (b_obj->TunablePropsChanged) {
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->TunablePropsChanged = FALSE;
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  i = 0;
  exitg1 = FALSE;
  while ((exitg1 == FALSE) && (i < 8)) {
    if (b_obj->inputVarSize1[i] != (uint32_T)iv137[i]) {
      emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
      for (i = 0; i < 8; i++) {
        b_obj->inputVarSize1[i] = (uint32_T)value[i];
      }

      emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
      exitg1 = TRUE;
    } else {
      i++;
    }
  }

  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&nj_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&nj_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  emlrtPushRtStackR2012b(&gc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&nj_emlrtRSI, emlrtRootTLSGlobal);
  c_obj = &b_obj->cSFunObject;
  if (!c_obj->S0_isInitialized) {
    c_obj->S0_isInitialized = TRUE;
    if (c_obj->S1_isReleased) {
      emlrtErrorWithMessageIdR2012b(emlrtRootTLSGlobal, &fc_emlrtRTEI,
        "MATLAB:system:runtimeMethodCalledWhenReleasedCodegen", 0);
    }

    /* System object Initialization function: dsp.FIRRateConverter */
    c_obj->W1_InBufIdx = 0;
    for (i = 0; i < 252; i++) {
      c_obj->W0_InBuf[i].re = 0.0;
      c_obj->W0_InBuf[i].im = 0.0;
    }
  }

  emlrtPushRtStackR2012b(&pj_emlrtRSI, emlrtRootTLSGlobal);

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
  emlrtPopRtStackR2012b(&pj_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&nj_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&gc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&gc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&nj_emlrtRSI, emlrtRootTLSGlobal);
  if (!b_obj->cSFunObject.S0_isInitialized) {
    emlrtErrorWithMessageIdR2012b(emlrtRootTLSGlobal, &ec_emlrtRTEI,
      "MATLAB:system:updateCalledBeforeSetup", 0);
  }

  emlrtPopRtStackR2012b(&nj_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&gc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
}

boolean_T h_SystemCore_detectInputSizeCha(commcodegen_BPSKModulator_348 *obj)
{
  boolean_T anyInputSizeChanged;
  int32_T k;
  boolean_T exitg1;
  static const int8_T iv169[8] = { 13, 1, 1, 1, 1, 1, 1, 1 };

  commcodegen_BPSKModulator_348 *b_obj;
  static const int8_T inputSize[8] = { 13, 1, 1, 1, 1, 1, 1, 1 };

  anyInputSizeChanged = FALSE;
  k = 0;
  exitg1 = FALSE;
  while ((exitg1 == FALSE) && (k < 8)) {
    if (obj->inputVarSize1[k] != (uint32_T)iv169[k]) {
      anyInputSizeChanged = TRUE;
      emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
      b_obj = obj;
      for (k = 0; k < 8; k++) {
        b_obj->inputVarSize1[k] = (uint32_T)inputSize[k];
      }

      emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
      exitg1 = TRUE;
    } else {
      k++;
    }
  }

  return anyInputSizeChanged;
}

void h_SystemCore_step(commcodegen_CRCDetector *obj, const boolean_T
  varargin_1_data[563], boolean_T varargout_1_data[560], int32_T
  varargout_1_size[2], boolean_T *varargout_2)
{
  const mxArray *y;
  static const int32_T iv140[2] = { 1, 45 };

  const mxArray *m31;
  char_T cv169[45];
  int32_T i;
  static const char_T cv170[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C',
    'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv141[2] = { 1, 4 };

  char_T cv171[4];
  static const char_T cv172[4] = { 's', 't', 'e', 'p' };

  commcodegen_CRCDetector *b_obj;
  const mxArray *c_y;
  static const int32_T iv142[2] = { 1, 51 };

  char_T cv173[51];
  static const char_T cv174[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l',
    'e', 'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *d_y;
  static const int32_T iv143[2] = { 1, 5 };

  char_T cv175[5];
  static const char_T cv176[5] = { 's', 'e', 't', 'u', 'p' };

  int32_T k;
  static const int16_T value[8] = { 563, 1, 1, 1, 1, 1, 1, 1 };

  boolean_T exitg1;
  static const int16_T iv144[8] = { 563, 1, 1, 1, 1, 1, 1, 1 };

  static const int16_T inputSize[8] = { 563, 1, 1, 1, 1, 1, 1, 1 };

  comm_CRCDetector_6 *c_obj;
  uint32_T shReg;
  int32_T bitNumber;
  uint32_T input;
  uint32_T bitMask;
  int32_T j;
  uint32_T leftoverBits;
  if (!obj->isReleased) {
  } else {
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    y = NULL;
    m31 = mxCreateCharArray(2, iv140);
    for (i = 0; i < 45; i++) {
      cv169[i] = cv170[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 45, m31, cv169);
    emlrtAssign(&y, m31);
    b_y = NULL;
    m31 = mxCreateCharArray(2, iv141);
    for (i = 0; i < 4; i++) {
      cv171[i] = cv172[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 4, m31, cv171);
    emlrtAssign(&b_y, m31);
    c_error(message(y, b_y, &b_emlrtMCI), &b_emlrtMCI);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  }

  if (!obj->isInitialized) {
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    b_obj = obj;
    if (!b_obj->isInitialized) {
    } else {
      emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
      c_y = NULL;
      m31 = mxCreateCharArray(2, iv142);
      for (i = 0; i < 51; i++) {
        cv173[i] = cv174[i];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 51, m31, cv173);
      emlrtAssign(&c_y, m31);
      d_y = NULL;
      m31 = mxCreateCharArray(2, iv143);
      for (i = 0; i < 5; i++) {
        cv175[i] = cv176[i];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 5, m31, cv175);
      emlrtAssign(&d_y, m31);
      c_error(message(c_y, d_y, &b_emlrtMCI), &b_emlrtMCI);
      emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    }

    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->isInitialized = TRUE;
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    for (k = 0; k < 8; k++) {
      b_obj->inputVarSize1[k] = (uint32_T)value[k];
    }

    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&se_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&se_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&se_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&se_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->TunablePropsChanged = FALSE;
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  if (b_obj->TunablePropsChanged) {
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->TunablePropsChanged = FALSE;
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  k = 0;
  exitg1 = FALSE;
  while ((exitg1 == FALSE) && (k < 8)) {
    if (b_obj->inputVarSize1[k] != (uint32_T)iv144[k]) {
      emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
      for (k = 0; k < 8; k++) {
        b_obj->inputVarSize1[k] = (uint32_T)inputSize[k];
      }

      emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
      exitg1 = TRUE;
    } else {
      k++;
    }
  }

  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&se_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&se_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  emlrtPushRtStackR2012b(&gc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&se_emlrtRSI, emlrtRootTLSGlobal);
  c_obj = &b_obj->cSFunObject;
  emlrtPushRtStackR2012b(&qj_emlrtRSI, emlrtRootTLSGlobal);

  /* System object Outputs function: comm.CRCDetector */
  varargout_1_size[0] = 560;
  varargout_1_size[1] = 1;
  k = div_ssu32_floor(563, 3U);

  /* Initialize for current sub-frame */
  shReg = 0U;
  bitNumber = 0;
  for (i = 0; (uint32_T)i < (uint32_T)k; i++) {
    input = 0U;
    bitMask = 4U;
    for (j = 0; j < 3; j++) {
      if (bitNumber < 560) {
        varargout_1_data[bitNumber] = varargin_1_data[bitNumber];

        /* Build input data chunk */
        input |= bitMask * varargin_1_data[bitNumber];
        bitMask >>= 1U;
        bitNumber++;
      }
    }

    /* Retrieve value from CRC table and update register */
    shReg = c_obj->P0_CRCTable[shReg & 7U] ^ (shReg << 3U | input);
  }

  /* Process the leftover bits */
  for (i = 0; i < 2L; i++) {
    k = (int32_T)(shReg >> 2U & 1U);
    shReg <<= 1U;
    if ((uint32_T)k != 0U) {
      shReg ^= 1U;
    }
  }

  /* Apply final XOR */
  /* Output flag to indicate if error occurred (0 => no error) */
  leftoverBits = 0U;
  for (i = 0; i < 3; i++) {
    leftoverBits <<= 1U;
    leftoverBits ^= varargin_1_data[i + 560];
  }

  leftoverBits = (leftoverBits ^ shReg) << 29U;
  emlrtPopRtStackR2012b(&qj_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&se_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&gc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&gc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&se_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&se_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&gc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  if (leftoverBits == 0U) {
    *varargout_2 = FALSE;
  } else {
    *varargout_2 = TRUE;
  }
}

void i_SystemCore_step(testMACReceiverStackData *SD, comm_SDRuTransmitter *obj,
  const creal_T varargin_1[38400])
{
  const mxArray *y;
  static const int32_T iv170[2] = { 1, 45 };

  const mxArray *m36;
  char_T cv200[45];
  int32_T i;
  static const char_T cv201[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C',
    'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv171[2] = { 1, 4 };

  char_T cv202[4];
  static const char_T cv203[4] = { 's', 't', 'e', 'p' };

  comm_SDRuTransmitter *b_obj;
  const mxArray *c_y;
  static const int32_T iv172[2] = { 1, 51 };

  char_T cv204[51];
  static const char_T cv205[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l',
    'e', 'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *d_y;
  static const int32_T iv173[2] = { 1, 5 };

  char_T cv206[5];
  static const char_T cv207[5] = { 's', 'e', 't', 'u', 'p' };

  int32_T i30;
  static const uint16_T value[8] = { 38400U, 1U, 1U, 1U, 1U, 1U, 1U, 1U };

  int32_T errMsg_size[2];
  char_T errMsg_data[1024];
  UsrpErrorCapiEnumT deviceStatus;
  const mxArray *e_y;
  static const int32_T iv174[2] = { 1, 35 };

  char_T cv208[35];
  static const char_T cv209[35] = { 's', 'd', 'r', 'u', ':', 'r', 'e', 'p', 'o',
    'r', 't', 'S', 'D', 'R', 'u', 'S', 't', 'a', 't', 'u', 's', ':', 'N', 'o',
    't', 'C', 'o', 'm', 'p', 'a', 't', 'i', 'b', 'l', 'e' };

  const mxArray *f_y;
  static const int32_T iv175[2] = { 1, 12 };

  char_T cv210[12];
  static const char_T cv211[12] = { '1', '9', '2', '.', '1', '6', '8', '.', '1',
    '0', '.', '2' };

  const mxArray *g_y;
  static const int32_T iv176[2] = { 1, 43 };

  char_T cv212[43];
  static const char_T cv213[43] = { 'r', 'e', 't', 'u', 'r', 'n', 'e', 'd', ' ',
    'b', 'y', ' ', '\'', 'g', 'e', 't', 'S', 'D', 'R', 'u', 'D', 'r', 'i', 'v',
    'e', 'r', 'V', 'e', 'r', 's', 'i', 'o', 'n', '\'', ' ', 'f', 'u', 'n', 'c',
    't', 'i', 'o', 'n' };

  const mxArray *h_y;
  static const int32_T iv177[2] = { 1, 35 };

  static const char_T cv214[35] = { 's', 'd', 'r', 'u', ':', 'r', 'e', 'p', 'o',
    'r', 't', 'S', 'D', 'R', 'u', 'S', 't', 'a', 't', 'u', 's', ':', 'N', 'o',
    't', 'R', 'e', 's', 'p', 'o', 'n', 'd', 'i', 'n', 'g' };

  const mxArray *i_y;
  static const int32_T iv178[2] = { 1, 12 };

  const mxArray *j_y;
  static const int32_T iv179[2] = { 1, 26 };

  char_T cv215[26];
  static const char_T cv216[26] = { 's', 'd', 'r', 'u', ':', 'r', 'e', 'p', 'o',
    'r', 't', 'S', 'D', 'R', 'u', 'S', 't', 'a', 't', 'u', 's', ':', 'B', 'u',
    's', 'y' };

  const mxArray *k_y;
  static const int32_T iv180[2] = { 1, 12 };

  const mxArray *l_y;
  static const int32_T iv181[2] = { 1, 35 };

  static const char_T cv217[35] = { 's', 'd', 'r', 'u', ':', 'r', 'e', 'p', 'o',
    'r', 't', 'S', 'D', 'R', 'u', 'S', 't', 'a', 't', 'u', 's', ':', 'U', 'n',
    'k', 'n', 'o', 'w', 'n', 'S', 't', 'a', 't', 'u', 's' };

  boolean_T b_value[4];
  boolean_T exitg1;
  static const uint16_T uv0[8] = { 38400U, 1U, 1U, 1U, 1U, 1U, 1U, 1U };

  if (!obj->isReleased) {
  } else {
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    y = NULL;
    m36 = mxCreateCharArray(2, iv170);
    for (i = 0; i < 45; i++) {
      cv200[i] = cv201[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 45, m36, cv200);
    emlrtAssign(&y, m36);
    b_y = NULL;
    m36 = mxCreateCharArray(2, iv171);
    for (i = 0; i < 4; i++) {
      cv202[i] = cv203[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 4, m36, cv202);
    emlrtAssign(&b_y, m36);
    c_error(message(y, b_y, &b_emlrtMCI), &b_emlrtMCI);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  }

  if (!obj->isInitialized) {
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    b_obj = obj;
    if (!b_obj->isInitialized) {
    } else {
      emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
      c_y = NULL;
      m36 = mxCreateCharArray(2, iv172);
      for (i = 0; i < 51; i++) {
        cv204[i] = cv205[i];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 51, m36, cv204);
      emlrtAssign(&c_y, m36);
      d_y = NULL;
      m36 = mxCreateCharArray(2, iv173);
      for (i = 0; i < 5; i++) {
        cv206[i] = cv207[i];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 5, m36, cv206);
      emlrtAssign(&d_y, m36);
      c_error(message(c_y, d_y, &b_emlrtMCI), &b_emlrtMCI);
      emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    }

    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->isInitialized = TRUE;
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    for (i30 = 0; i30 < 8; i30++) {
      b_obj->inputVarSize1[i30] = value[i30];
    }

    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&ld_emlrtRSI, emlrtRootTLSGlobal);
    SDRuTransmitter_setupImplLocal(b_obj, &deviceStatus, errMsg_data,
      errMsg_size);
    emlrtPopRtStackR2012b(&ld_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&ld_emlrtRSI, emlrtRootTLSGlobal);

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
      emlrtPushRtStackR2012b(&xf_emlrtRSI, emlrtRootTLSGlobal);
      if (!(deviceStatus == UsrpDriverNotCompatible)) {
      } else {
        emlrtPushRtStackR2012b(&rc_emlrtRSI, emlrtRootTLSGlobal);
        e_y = NULL;
        m36 = mxCreateCharArray(2, iv174);
        for (i = 0; i < 35; i++) {
          cv208[i] = cv209[i];
        }

        emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 35, m36, cv208);
        emlrtAssign(&e_y, m36);
        f_y = NULL;
        m36 = mxCreateCharArray(2, iv175);
        for (i = 0; i < 12; i++) {
          cv210[i] = cv211[i];
        }

        emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 12, m36, cv210);
        emlrtAssign(&f_y, m36);
        g_y = NULL;
        m36 = mxCreateCharArray(2, iv176);
        for (i = 0; i < 43; i++) {
          cv212[i] = cv213[i];
        }

        emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 43, m36, cv212);
        emlrtAssign(&g_y, m36);
        c_error(c_message(e_y, f_y, g_y, &h_emlrtMCI), &h_emlrtMCI);
        emlrtPopRtStackR2012b(&rc_emlrtRSI, emlrtRootTLSGlobal);
      }

      emlrtPopRtStackR2012b(&xf_emlrtRSI, emlrtRootTLSGlobal);
      break;

     case UsrpDriverNotResponding:
      emlrtPushRtStackR2012b(&vf_emlrtRSI, emlrtRootTLSGlobal);
      if (!(deviceStatus == UsrpDriverNotResponding)) {
      } else {
        emlrtPushRtStackR2012b(&rc_emlrtRSI, emlrtRootTLSGlobal);
        h_y = NULL;
        m36 = mxCreateCharArray(2, iv177);
        for (i = 0; i < 35; i++) {
          cv208[i] = cv214[i];
        }

        emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 35, m36, cv208);
        emlrtAssign(&h_y, m36);
        i_y = NULL;
        m36 = mxCreateCharArray(2, iv178);
        for (i = 0; i < 12; i++) {
          cv210[i] = cv211[i];
        }

        emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 12, m36, cv210);
        emlrtAssign(&i_y, m36);
        c_error(message(h_y, i_y, &h_emlrtMCI), &h_emlrtMCI);
        emlrtPopRtStackR2012b(&rc_emlrtRSI, emlrtRootTLSGlobal);
      }

      emlrtPopRtStackR2012b(&vf_emlrtRSI, emlrtRootTLSGlobal);
      break;

     case UsrpDriverBusy:
      emlrtPushRtStackR2012b(&tf_emlrtRSI, emlrtRootTLSGlobal);
      if (!(deviceStatus == UsrpDriverBusy)) {
      } else {
        emlrtPushRtStackR2012b(&rc_emlrtRSI, emlrtRootTLSGlobal);
        j_y = NULL;
        m36 = mxCreateCharArray(2, iv179);
        for (i = 0; i < 26; i++) {
          cv215[i] = cv216[i];
        }

        emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 26, m36, cv215);
        emlrtAssign(&j_y, m36);
        k_y = NULL;
        m36 = mxCreateCharArray(2, iv180);
        for (i = 0; i < 12; i++) {
          cv210[i] = cv211[i];
        }

        emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 12, m36, cv210);
        emlrtAssign(&k_y, m36);
        c_error(message(j_y, k_y, &h_emlrtMCI), &h_emlrtMCI);
        emlrtPopRtStackR2012b(&rc_emlrtRSI, emlrtRootTLSGlobal);
      }

      emlrtPopRtStackR2012b(&tf_emlrtRSI, emlrtRootTLSGlobal);
      break;

     case UsrpDriverError:
      emlrtPushRtStackR2012b(&rf_emlrtRSI, emlrtRootTLSGlobal);
      if (!(deviceStatus == UsrpDriverError)) {
      } else {
        emlrtPushRtStackR2012b(&rc_emlrtRSI, emlrtRootTLSGlobal);
        l_y = NULL;
        m36 = mxCreateCharArray(2, iv181);
        for (i = 0; i < 35; i++) {
          cv208[i] = cv217[i];
        }

        emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 35, m36, cv208);
        emlrtAssign(&l_y, m36);
        c_error(b_message(l_y, &h_emlrtMCI), &h_emlrtMCI);
        emlrtPopRtStackR2012b(&rc_emlrtRSI, emlrtRootTLSGlobal);
      }

      emlrtPopRtStackR2012b(&rf_emlrtRSI, emlrtRootTLSGlobal);
      break;
    }

    emlrtPopRtStackR2012b(&ld_emlrtRSI, emlrtRootTLSGlobal);
    if (deviceStatus == UsrpDriverSuccess) {
      emlrtPushRtStackR2012b(&ld_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPopRtStackR2012b(&ld_emlrtRSI, emlrtRootTLSGlobal);
    } else {
      emlrtPushRtStackR2012b(&ld_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPopRtStackR2012b(&ld_emlrtRSI, emlrtRootTLSGlobal);
    }

    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->TunablePropsChanged = FALSE;
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  if (b_obj->TunablePropsChanged) {
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->TunablePropsChanged = FALSE;
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    for (i = 0; i < 4; i++) {
      for (i30 = 0; i30 < 4; i30++) {
        b_value[i30] = b_obj->tunablePropertyChanged[i30];
      }

      b_value[i] = FALSE;
      emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
      for (i30 = 0; i30 < 4; i30++) {
        b_obj->tunablePropertyChanged[i30] = b_value[i30];
      }

      emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    }

    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  i = 0;
  exitg1 = FALSE;
  while ((exitg1 == FALSE) && (i < 8)) {
    if (b_obj->inputVarSize1[i] != uv0[i]) {
      emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
      for (i30 = 0; i30 < 8; i30++) {
        b_obj->inputVarSize1[i30] = value[i30];
      }

      emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
      exitg1 = TRUE;
    } else {
      i++;
    }
  }

  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  SDRuTransmitter_stepImpl(SD, obj, varargin_1);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
}

void j_SystemCore_step(testMACReceiverStackData *SD, comm_SDRuReceiver *obj)
{
  const mxArray *y;
  static const int32_T iv185[2] = { 1, 45 };

  const mxArray *m40;
  char_T cv224[45];
  int32_T i;
  static const char_T cv225[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C',
    'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv186[2] = { 1, 4 };

  char_T cv226[4];
  static const char_T cv227[4] = { 's', 't', 'e', 'p' };

  comm_SDRuReceiver *b_obj;
  const mxArray *c_y;
  static const int32_T iv187[2] = { 1, 51 };

  char_T cv228[51];
  static const char_T cv229[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l',
    'e', 'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *d_y;
  static const int32_T iv188[2] = { 1, 5 };

  char_T cv230[5];
  static const char_T cv231[5] = { 's', 'e', 't', 'u', 'p' };

  int32_T errMsg_size[2];
  char_T errMsg_data[1024];
  UsrpErrorCapiEnumT deviceStatus;
  const mxArray *e_y;
  static const int32_T iv189[2] = { 1, 35 };

  char_T cv232[35];
  static const char_T cv233[35] = { 's', 'd', 'r', 'u', ':', 'r', 'e', 'p', 'o',
    'r', 't', 'S', 'D', 'R', 'u', 'S', 't', 'a', 't', 'u', 's', ':', 'N', 'o',
    't', 'C', 'o', 'm', 'p', 'a', 't', 'i', 'b', 'l', 'e' };

  const mxArray *f_y;
  static const int32_T iv190[2] = { 1, 12 };

  char_T cv234[12];
  static const char_T cv235[12] = { '1', '9', '2', '.', '1', '6', '8', '.', '1',
    '0', '.', '2' };

  const mxArray *g_y;
  static const int32_T iv191[2] = { 1, 43 };

  char_T cv236[43];
  static const char_T cv237[43] = { 'r', 'e', 't', 'u', 'r', 'n', 'e', 'd', ' ',
    'b', 'y', ' ', '\'', 'g', 'e', 't', 'S', 'D', 'R', 'u', 'D', 'r', 'i', 'v',
    'e', 'r', 'V', 'e', 'r', 's', 'i', 'o', 'n', '\'', ' ', 'f', 'u', 'n', 'c',
    't', 'i', 'o', 'n' };

  const mxArray *h_y;
  static const int32_T iv192[2] = { 1, 35 };

  static const char_T cv238[35] = { 's', 'd', 'r', 'u', ':', 'r', 'e', 'p', 'o',
    'r', 't', 'S', 'D', 'R', 'u', 'S', 't', 'a', 't', 'u', 's', ':', 'N', 'o',
    't', 'R', 'e', 's', 'p', 'o', 'n', 'd', 'i', 'n', 'g' };

  const mxArray *i_y;
  static const int32_T iv193[2] = { 1, 12 };

  const mxArray *j_y;
  static const int32_T iv194[2] = { 1, 26 };

  char_T cv239[26];
  static const char_T cv240[26] = { 's', 'd', 'r', 'u', ':', 'r', 'e', 'p', 'o',
    'r', 't', 'S', 'D', 'R', 'u', 'S', 't', 'a', 't', 'u', 's', ':', 'B', 'u',
    's', 'y' };

  const mxArray *k_y;
  static const int32_T iv195[2] = { 1, 12 };

  const mxArray *l_y;
  static const int32_T iv196[2] = { 1, 35 };

  static const char_T cv241[35] = { 's', 'd', 'r', 'u', ':', 'r', 'e', 'p', 'o',
    'r', 't', 'S', 'D', 'R', 'u', 'S', 't', 'a', 't', 'u', 's', ':', 'U', 'n',
    'k', 'n', 'o', 'w', 'n', 'S', 't', 'a', 't', 'u', 's' };

  boolean_T value[4];
  int32_T i34;
  if (!obj->isReleased) {
  } else {
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    y = NULL;
    m40 = mxCreateCharArray(2, iv185);
    for (i = 0; i < 45; i++) {
      cv224[i] = cv225[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 45, m40, cv224);
    emlrtAssign(&y, m40);
    b_y = NULL;
    m40 = mxCreateCharArray(2, iv186);
    for (i = 0; i < 4; i++) {
      cv226[i] = cv227[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 4, m40, cv226);
    emlrtAssign(&b_y, m40);
    c_error(message(y, b_y, &b_emlrtMCI), &b_emlrtMCI);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  }

  if (!obj->isInitialized) {
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    b_obj = obj;
    if (!b_obj->isInitialized) {
    } else {
      emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
      c_y = NULL;
      m40 = mxCreateCharArray(2, iv187);
      for (i = 0; i < 51; i++) {
        cv228[i] = cv229[i];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 51, m40, cv228);
      emlrtAssign(&c_y, m40);
      d_y = NULL;
      m40 = mxCreateCharArray(2, iv188);
      for (i = 0; i < 5; i++) {
        cv230[i] = cv231[i];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 5, m40, cv230);
      emlrtAssign(&d_y, m40);
      c_error(message(c_y, d_y, &b_emlrtMCI), &b_emlrtMCI);
      emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    }

    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->isInitialized = TRUE;
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&ld_emlrtRSI, emlrtRootTLSGlobal);
    SDRuReceiver_setupImplLocal(b_obj, &deviceStatus, errMsg_data, errMsg_size);
    emlrtPopRtStackR2012b(&ld_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&ld_emlrtRSI, emlrtRootTLSGlobal);

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
      emlrtPushRtStackR2012b(&xf_emlrtRSI, emlrtRootTLSGlobal);
      if (!(deviceStatus == UsrpDriverNotCompatible)) {
      } else {
        emlrtPushRtStackR2012b(&rc_emlrtRSI, emlrtRootTLSGlobal);
        e_y = NULL;
        m40 = mxCreateCharArray(2, iv189);
        for (i = 0; i < 35; i++) {
          cv232[i] = cv233[i];
        }

        emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 35, m40, cv232);
        emlrtAssign(&e_y, m40);
        f_y = NULL;
        m40 = mxCreateCharArray(2, iv190);
        for (i = 0; i < 12; i++) {
          cv234[i] = cv235[i];
        }

        emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 12, m40, cv234);
        emlrtAssign(&f_y, m40);
        g_y = NULL;
        m40 = mxCreateCharArray(2, iv191);
        for (i = 0; i < 43; i++) {
          cv236[i] = cv237[i];
        }

        emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 43, m40, cv236);
        emlrtAssign(&g_y, m40);
        c_error(c_message(e_y, f_y, g_y, &h_emlrtMCI), &h_emlrtMCI);
        emlrtPopRtStackR2012b(&rc_emlrtRSI, emlrtRootTLSGlobal);
      }

      emlrtPopRtStackR2012b(&xf_emlrtRSI, emlrtRootTLSGlobal);
      break;

     case UsrpDriverNotResponding:
      emlrtPushRtStackR2012b(&vf_emlrtRSI, emlrtRootTLSGlobal);
      if (!(deviceStatus == UsrpDriverNotResponding)) {
      } else {
        emlrtPushRtStackR2012b(&rc_emlrtRSI, emlrtRootTLSGlobal);
        h_y = NULL;
        m40 = mxCreateCharArray(2, iv192);
        for (i = 0; i < 35; i++) {
          cv232[i] = cv238[i];
        }

        emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 35, m40, cv232);
        emlrtAssign(&h_y, m40);
        i_y = NULL;
        m40 = mxCreateCharArray(2, iv193);
        for (i = 0; i < 12; i++) {
          cv234[i] = cv235[i];
        }

        emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 12, m40, cv234);
        emlrtAssign(&i_y, m40);
        c_error(message(h_y, i_y, &h_emlrtMCI), &h_emlrtMCI);
        emlrtPopRtStackR2012b(&rc_emlrtRSI, emlrtRootTLSGlobal);
      }

      emlrtPopRtStackR2012b(&vf_emlrtRSI, emlrtRootTLSGlobal);
      break;

     case UsrpDriverBusy:
      emlrtPushRtStackR2012b(&tf_emlrtRSI, emlrtRootTLSGlobal);
      if (!(deviceStatus == UsrpDriverBusy)) {
      } else {
        emlrtPushRtStackR2012b(&rc_emlrtRSI, emlrtRootTLSGlobal);
        j_y = NULL;
        m40 = mxCreateCharArray(2, iv194);
        for (i = 0; i < 26; i++) {
          cv239[i] = cv240[i];
        }

        emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 26, m40, cv239);
        emlrtAssign(&j_y, m40);
        k_y = NULL;
        m40 = mxCreateCharArray(2, iv195);
        for (i = 0; i < 12; i++) {
          cv234[i] = cv235[i];
        }

        emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 12, m40, cv234);
        emlrtAssign(&k_y, m40);
        c_error(message(j_y, k_y, &h_emlrtMCI), &h_emlrtMCI);
        emlrtPopRtStackR2012b(&rc_emlrtRSI, emlrtRootTLSGlobal);
      }

      emlrtPopRtStackR2012b(&tf_emlrtRSI, emlrtRootTLSGlobal);
      break;

     case UsrpDriverError:
      emlrtPushRtStackR2012b(&rf_emlrtRSI, emlrtRootTLSGlobal);
      if (!(deviceStatus == UsrpDriverError)) {
      } else {
        emlrtPushRtStackR2012b(&rc_emlrtRSI, emlrtRootTLSGlobal);
        l_y = NULL;
        m40 = mxCreateCharArray(2, iv196);
        for (i = 0; i < 35; i++) {
          cv232[i] = cv241[i];
        }

        emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 35, m40, cv232);
        emlrtAssign(&l_y, m40);
        c_error(b_message(l_y, &h_emlrtMCI), &h_emlrtMCI);
        emlrtPopRtStackR2012b(&rc_emlrtRSI, emlrtRootTLSGlobal);
      }

      emlrtPopRtStackR2012b(&rf_emlrtRSI, emlrtRootTLSGlobal);
      break;
    }

    emlrtPopRtStackR2012b(&ld_emlrtRSI, emlrtRootTLSGlobal);
    if (deviceStatus == UsrpDriverSuccess) {
      emlrtPushRtStackR2012b(&ld_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPopRtStackR2012b(&ld_emlrtRSI, emlrtRootTLSGlobal);
    } else {
      emlrtPushRtStackR2012b(&ld_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPopRtStackR2012b(&ld_emlrtRSI, emlrtRootTLSGlobal);
    }

    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->TunablePropsChanged = FALSE;
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  if (b_obj->TunablePropsChanged) {
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    b_obj->TunablePropsChanged = FALSE;
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    for (i = 0; i < 4; i++) {
      for (i34 = 0; i34 < 4; i34++) {
        value[i34] = b_obj->tunablePropertyChanged[i34];
      }

      value[i] = FALSE;
      emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
      for (i34 = 0; i34 < 4; i34++) {
        b_obj->tunablePropertyChanged[i34] = value[i34];
      }

      emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    }

    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  b_SDRuReceiver_stepImpl(SD, obj);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
}

/* End of code generation (SystemCore.c) */
