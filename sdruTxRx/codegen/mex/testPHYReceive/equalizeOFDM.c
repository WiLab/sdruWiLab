/*
 * equalizeOFDM.c
 *
 * Code generation for function 'equalizeOFDM'
 *
 * C source code generated on: Thu Apr  3 19:36:38 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testPHYReceive.h"
#include "equalizeOFDM.h"
#include "resample.h"
#include "testPHYReceive_emxutil.h"
#include "receiveData.h"
#include "SystemCore.h"
#include "OFDMDemodulator.h"
#include "rdivide.h"
#include "mean.h"
#include "power.h"
#include "abs.h"
#include "testPHYReceive_mexutil.h"
#include "testPHYReceive_data.h"
#include <stdio.h>

/* Variable Definitions */
static emlrtRSInfo ec_emlrtRSI = { 51, "eml_int_forloop_overflow_check",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"
};

static emlrtRSInfo gi_emlrtRSI = { 16, "equalizeOFDM",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/private/equalizeOFDM.m" };

static emlrtRSInfo hi_emlrtRSI = { 17, "equalizeOFDM",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/private/equalizeOFDM.m" };

static emlrtRSInfo ii_emlrtRSI = { 21, "equalizeOFDM",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/private/equalizeOFDM.m" };

static emlrtRSInfo ji_emlrtRSI = { 28, "equalizeOFDM",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/private/equalizeOFDM.m" };

static emlrtRSInfo ki_emlrtRSI = { 42, "equalizeOFDM",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/private/equalizeOFDM.m" };

static emlrtRSInfo si_emlrtRSI = { 41, "eml_assert_valid_size_arg",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m" };

static emlrtRSInfo wi_emlrtRSI = { 80, "equalizeOFDM",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/private/equalizeOFDM.m" };

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

static emlrtRTEInfo pb_emlrtRTEI = { 1, 32, "equalizeOFDM",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/private/equalizeOFDM.m" };

static emlrtRTEInfo wb_emlrtRTEI = { 16, 5, "equalizeOFDM",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/private/equalizeOFDM.m" };

static emlrtRTEInfo xb_emlrtRTEI = { 17, 5, "equalizeOFDM",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/private/equalizeOFDM.m" };

static emlrtECInfo o_emlrtECI = { 3, 38, 9, "equalizeOFDM",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/private/equalizeOFDM.m" };

static emlrtECInfo p_emlrtECI = { -1, 25, 16, "equalizeOFDM",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/private/equalizeOFDM.m" };

static emlrtECInfo q_emlrtECI = { 1, 21, 35, "equalizeOFDM",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/private/equalizeOFDM.m" };

static emlrtECInfo r_emlrtECI = { -1, 11, 13, "equalizeOFDM",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/private/equalizeOFDM.m" };

static emlrtBCInfo db_emlrtBCI = { -1, -1, 58, 7, "R", "equalizeOFDM",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/private/equalizeOFDM.m", 0
};

static emlrtBCInfo eb_emlrtBCI = { 1, 768, 171, 28, "postShift",
  "OFDMDemodulator",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/OFDMDemodulator.m", 0 };

/* Function Declarations */
static void b_equalizeOFDM(testPHYReceiveStackData *SD, const creal_T recv_data
  [1280], const real_T tx_longPreamble[53], const real_T tx_pilots[48], const
  real_T c_tx_pilotLocationsWithoutGuard[4], const real_T
  tx_dataSubcarrierIndexies_data[48], const int32_T
  tx_dataSubcarrierIndexies_size[2], struct_T *estimate, OFDMDemodulator_1
  *hPreambleDemod, OFDMDemodulator *hDataDemod, creal_T R[576], emxArray_creal_T
  *Rraw);

/* Function Definitions */
static void b_equalizeOFDM(testPHYReceiveStackData *SD, const creal_T recv_data
  [1280], const real_T tx_longPreamble[53], const real_T tx_pilots[48], const
  real_T c_tx_pilotLocationsWithoutGuard[4], const real_T
  tx_dataSubcarrierIndexies_data[48], const int32_T
  tx_dataSubcarrierIndexies_size[2], struct_T *estimate, OFDMDemodulator_1
  *hPreambleDemod, OFDMDemodulator *hDataDemod, creal_T R[576], emxArray_creal_T
  *Rraw)
{
  creal_T recv[64];
  emxArray_creal_T *RLongFirst;
  creal_T b_recv[64];
  emxArray_creal_T *RLongSecond;
  emxArray_creal_T *b_R;
  int32_T ib;
  int32_T ia;
  int32_T i2;
  creal_T c_R[106];
  real_T b_tx_longPreamble[106];
  creal_T RNormal[106];
  creal_T preambleEqGains[53];
  real_T dv9[106];
  real_T dv10[106];
  creal_T b_preambleEqGains[53];
  int32_T i;
  real_T dv11[106];
  real_T dv12[53];
  OFDMDemodulator *obj;
  const mxArray *y;
  static const int32_T iv132[2] = { 1, 45 };

  const mxArray *m39;
  char_T cv151[45];
  static const char_T cv152[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C',
    'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv133[2] = { 1, 4 };

  char_T cv153[4];
  static const char_T cv154[4] = { 's', 't', 'e', 'p' };

  const mxArray *c_y;
  static const int32_T iv134[2] = { 1, 51 };

  char_T cv155[51];
  static const char_T cv156[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l',
    'e', 'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *d_y;
  static const int32_T iv135[2] = { 1, 5 };

  char_T cv157[5];
  static const char_T cv158[5] = { 's', 'e', 't', 'u', 'p' };

  creal_T postFFT[768];
  int32_T ix;
  int32_T chanStart;
  int32_T b_ix;
  boolean_T overflow;
  int32_T c_ix;
  real_T tmp_re;
  real_T tmp_im;
  int32_T iDelta2;
  int32_T k;
  int32_T iheight;
  int32_T ihi;
  static const real_T dv13[33] = { 0.0, -0.0980171403295606,
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

  static const real_T dv14[33] = { 1.0, 0.99518472667219693, 0.98078528040323043,
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
  real_T varargin_1[3];
  int32_T exitg1;
  const mxArray *e_y;
  static const int32_T iv136[2] = { 1, 57 };

  char_T cv159[57];
  static const char_T cv160[57] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'e', 'm', 'l', '_', 'a', 's', 's', 'e', 'r', 't',
    '_', 'v', 'a', 'l', 'i', 'd', '_', 's', 'i', 'z', 'e', '_', 'a', 'r', 'g',
    '_', 'i', 'n', 'v', 'a', 'l', 'i', 'd', 'S', 'i', 'z', 'e', 'V', 'e', 'c',
    't', 'o', 'r' };

  const mxArray *f_y;
  static const int32_T iv137[2] = { 1, 21 };

  char_T cv161[21];
  static const char_T cv162[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'p', 'm', 'a', 'x', 's', 'i', 'z', 'e' };

  int32_T sz[3];
  emxArray_creal_T *g_y;
  const mxArray *h_y;
  static const int32_T iv138[2] = { 1, 40 };

  char_T cv163[40];
  static const char_T cv164[40] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'g', 'e', 't', 'R', 'e', 's', 'h', 'a', 'p', 'e', 'D',
    'i', 'm', 's', '_', 'n', 'o', 't', 'S', 'a', 'm', 'e', 'N', 'u', 'm', 'e',
    'l' };

  creal_T varargout_2[48];
  static const int16_T iv139[48] = { 11, 25, 39, 53, 75, 89, 103, 117, 139, 153,
    167, 181, 203, 217, 231, 245, 267, 281, 295, 309, 331, 345, 359, 373, 395,
    409, 423, 437, 459, 473, 487, 501, 523, 537, 551, 565, 587, 601, 615, 629,
    651, 665, 679, 693, 715, 729, 743, 757 };

  creal_T preambleGainsFull[636];
  static const int8_T iv140[3] = { 48, 12, 1 };

  int32_T i_y[3];
  creal_T PilotNormal[48];
  real_T PilotEnergy[48];
  creal_T pilotEqGains[576];
  creal_T preambleGainsFull_data[576];
  creal_T b_preambleGainsFull_data[576];
  emlrtHeapReferenceStackEnterFcnR2012b(emlrtRootTLSGlobal);

  /*  equalizeOFDM: Equalize the entire OFDM frame through the use of both */
  /*  the long preamble from the 802.11a standard and four pilot tones in */
  /*  the data frames themselves.  The gains from the pilots are */
  /*  interpolated across frequency to fill the data frame and apply gains */
  /*  to all data subcarriers. */
  /*     %% Use Long Preamble frame to estimate channel in frequency domain */
  /*  Separate out received preambles */
  emlrtVectorVectorIndexCheckR2012b(1280, 1, 1, 160, &r_emlrtECI,
    emlrtRootTLSGlobal);

  /*  Demod */
  emlrtPushRtStackR2012b(&gi_emlrtRSI, emlrtRootTLSGlobal);
  memcpy(&recv[0], &recv_data[192], sizeof(creal_T) << 6);
  emxInit_creal_T(&RLongFirst, 3, &wb_emlrtRTEI, TRUE);
  f_SystemCore_step(hPreambleDemod, recv, RLongFirst);
  emlrtPopRtStackR2012b(&gi_emlrtRSI, emlrtRootTLSGlobal);

  /* First half of long preamble */
  emlrtPushRtStackR2012b(&hi_emlrtRSI, emlrtRootTLSGlobal);
  memcpy(&b_recv[0], &recv_data[256], sizeof(creal_T) << 6);
  emxInit_creal_T(&RLongSecond, 3, &xb_emlrtRTEI, TRUE);
  emxInit_creal_T(&b_R, 3, &pb_emlrtRTEI, TRUE);
  f_SystemCore_step(hPreambleDemod, b_recv, RLongSecond);
  emlrtPopRtStackR2012b(&hi_emlrtRSI, emlrtRootTLSGlobal);

  /* Second half of long preamble */
  /*     %% Preamble Equalization */
  /*  Get Equalizer tap gains */
  ib = RLongFirst->size[0];
  ia = RLongSecond->size[0];
  emlrtDimSizeEqCheckFastR2012b(ib, ia, &q_emlrtECI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&ii_emlrtRSI, emlrtRootTLSGlobal);
  ib = b_R->size[0] * b_R->size[1] * b_R->size[2];
  b_R->size[0] = RLongFirst->size[0];
  b_R->size[1] = 2;
  b_R->size[2] = 1;
  emxEnsureCapacity((emxArray__common *)b_R, ib, (int32_T)sizeof(creal_T),
                    &pb_emlrtRTEI);
  i2 = RLongFirst->size[0];
  for (ib = 0; ib < i2; ib++) {
    b_R->data[ib] = RLongFirst->data[ib];
  }

  emxFree_creal_T(&RLongFirst);
  i2 = RLongSecond->size[0];
  for (ib = 0; ib < i2; ib++) {
    b_R->data[ib + b_R->size[0]] = RLongSecond->data[ib];
  }

  emxFree_creal_T(&RLongSecond);

  /*  Calculate Equalizer Taps with preamble symbols */
  /*  Calculate non-normalized channel gains */
  for (ib = 0; ib < 53; ib++) {
    ia = b_R->size[0];
    i2 = 1 + ib;
    emlrtDynamicBoundsCheckFastR2012b(i2, 1, ia, &db_emlrtBCI,
      emlrtRootTLSGlobal);
  }

  i2 = b_R->size[0];
  for (ib = 0; ib < 2; ib++) {
    for (ia = 0; ia < 53; ia++) {
      c_R[ia + 53 * ib] = b_R->data[ia + i2 * ib];
    }
  }

  emxFree_creal_T(&b_R);
  for (ib = 0; ib < 53; ib++) {
    b_tx_longPreamble[ib] = tx_longPreamble[ib];
    b_tx_longPreamble[53 + ib] = tx_longPreamble[ib];
  }

  b_rdivide(c_R, b_tx_longPreamble, RNormal);

  /*  Known is the original Long Preamble symbols  */
  /*  Scale channel gains */
  c_mean(RNormal, preambleEqGains);
  c_abs(RNormal, dv9);
  memcpy(&dv10[0], &dv9[0], 106U * sizeof(real_T));
  for (i = 0; i < 53; i++) {
    b_preambleEqGains[i].re = preambleEqGains[i].re;
    b_preambleEqGains[i].im = -preambleEqGains[i].im;
  }

  b_power(dv10, dv11);
  b_mean(dv11, dv12);
  c_rdivide(b_preambleEqGains, dv12, preambleEqGains);
  emlrtPopRtStackR2012b(&ii_emlrtRSI, emlrtRootTLSGlobal);

  /*  Separate data from preambles */
  /* recvData = recv(length(tx.preambles)+1:length(tx.preambles)+(hDataDemod.NumSymbols)*(tx.FFTLength+hDataDemod.CyclicPrefixLength)); */
  emlrtVectorVectorIndexCheckR2012b(1280, 1, 1, 960, &p_emlrtECI,
    emlrtRootTLSGlobal);

  /*  CG */
  /*  OFDM Demod */
  emlrtPushRtStackR2012b(&ji_emlrtRSI, emlrtRootTLSGlobal);
  obj = hDataDemod;
  if (!obj->isReleased) {
  } else {
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    y = NULL;
    m39 = mxCreateCharArray(2, iv132);
    for (i = 0; i < 45; i++) {
      cv151[i] = cv152[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 45, m39, cv151);
    emlrtAssign(&y, m39);
    b_y = NULL;
    m39 = mxCreateCharArray(2, iv133);
    for (i = 0; i < 4; i++) {
      cv153[i] = cv154[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 4, m39, cv153);
    emlrtAssign(&b_y, m39);
    b_error(message(y, b_y, &b_emlrtMCI), &b_emlrtMCI);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  }

  if (!obj->isInitialized) {
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    if (!obj->isInitialized) {
    } else {
      emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
      c_y = NULL;
      m39 = mxCreateCharArray(2, iv134);
      for (i = 0; i < 51; i++) {
        cv155[i] = cv156[i];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 51, m39, cv155);
      emlrtAssign(&c_y, m39);
      d_y = NULL;
      m39 = mxCreateCharArray(2, iv135);
      for (i = 0; i < 5; i++) {
        cv157[i] = cv158[i];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 5, m39, cv157);
      emlrtAssign(&d_y, m39);
      b_error(message(c_y, d_y, &b_emlrtMCI), &b_emlrtMCI);
      emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    }

    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    obj->isInitialized = TRUE;
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
    OFDMDemodulator_setupImpl(obj);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    obj->TunablePropsChanged = FALSE;
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  if (obj->TunablePropsChanged) {
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&li_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&uc_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&uc_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&li_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    obj->TunablePropsChanged = FALSE;
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  memcpy(&SD->f2.inputIn3D[0], &recv_data[320], 960U * sizeof(creal_T));
  ix = 0;
  for (chanStart = 0; chanStart < 706; chanStart += 64) {
    i2 = 0;
    ia = chanStart;
    for (i = 0; i < 63; i++) {
      if (ix >= 0) {
        b_ix = (int32_T)((uint32_T)ix >> 6);
      } else {
        b_ix = ~(int32_T)((uint32_T)~ix >> 6);
      }

      postFFT[ia] = SD->f2.inputIn3D[(ix % 64 + 80 * b_ix) + 16];
      ia = 64;
      overflow = TRUE;
      while (overflow) {
        if (ia >= 0) {
          ia = (int32_T)((uint32_T)ia >> 1);
        } else {
          ia = ~(int32_T)((uint32_T)~ia >> 1);
        }

        i2 ^= ia;
        overflow = ((i2 & ia) == 0);
      }

      ia = chanStart + i2;
      ix++;
    }

    if (ix >= 0) {
      c_ix = (int32_T)((uint32_T)ix >> 6);
    } else {
      c_ix = ~(int32_T)((uint32_T)~ix >> 6);
    }

    postFFT[ia] = SD->f2.inputIn3D[(ix % 64 + 80 * c_ix) + 16];
    ix++;
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
        ia = i + ib;
        tmp_re = postFFT[ia].re;
        tmp_im = postFFT[ia].im;
        postFFT[i + ib].re = postFFT[i].re - postFFT[ia].re;
        postFFT[i + ib].im = postFFT[i].im - postFFT[ia].im;
        postFFT[i].re += tmp_re;
        postFFT[i].im += tmp_im;
        i += iDelta2;
      }

      ia = chanStart + 1;
      for (i2 = k; i2 < 32; i2 += k) {
        i = ia;
        ihi = ia + iheight;
        while (i < ihi) {
          tmp_re = dv14[i2] * postFFT[i + ib].re - dv13[i2] * postFFT[i + ib].im;
          tmp_im = dv14[i2] * postFFT[i + ib].im + dv13[i2] * postFFT[i + ib].re;
          postFFT[i + ib].re = postFFT[i].re - tmp_re;
          postFFT[i + ib].im = postFFT[i].im - tmp_im;
          postFFT[i].re += tmp_re;
          postFFT[i].im += tmp_im;
          i += iDelta2;
        }

        ia++;
      }

      ib = k;
      k = (int32_T)((uint32_T)ib >> 1);
      ib = iDelta2;
      iDelta2 <<= 1;
      iheight -= ib;
    }
  }

  i2 = 0;
  for (i = 0; i < 12; i++) {
    ia = i2;
    i2 += 64;
    ib = ia + 32;
    for (k = 0; k < 32; k++) {
      tmp_re = postFFT[ia].re;
      tmp_im = postFFT[ia].im;
      postFFT[ia] = postFFT[ib];
      postFFT[ib].re = tmp_re;
      postFFT[ib].im = tmp_im;
      ia++;
      ib++;
    }
  }

  emxInit_real_T(&x, 1, &pb_emlrtRTEI, TRUE);
  emlrtPushRtStackR2012b(&ni_emlrtRSI, emlrtRootTLSGlobal);
  ib = x->size[0];
  x->size[0] = obj->pDataLinearIndices->size[0];
  emxEnsureCapacity((emxArray__common *)x, ib, (int32_T)sizeof(real_T),
                    &pb_emlrtRTEI);
  i2 = obj->pDataLinearIndices->size[0];
  for (ib = 0; ib < i2; ib++) {
    x->data[ib] = obj->pDataLinearIndices->data[ib];
  }

  b_emxInit_creal_T(&b_x, 1, &pb_emlrtRTEI, TRUE);
  ib = b_x->size[0];
  b_x->size[0] = obj->pDataLinearIndices->size[0];
  emxEnsureCapacity((emxArray__common *)b_x, ib, (int32_T)sizeof(creal_T),
                    &pb_emlrtRTEI);
  i2 = obj->pDataLinearIndices->size[0];
  for (ib = 0; ib < i2; ib++) {
    tmp_re = obj->pDataLinearIndices->data[ib];
    ia = (int32_T)emlrtIntegerCheckFastR2012b(tmp_re, &c_emlrtDCI,
      emlrtRootTLSGlobal);
    b_x->data[ib] = postFFT[emlrtDynamicBoundsCheckFastR2012b(ia, 1, 768,
      &eb_emlrtBCI, emlrtRootTLSGlobal) - 1];
  }

  varargin_1[0] = (real_T)x->size[0] / 12.0;
  varargin_1[1] = 12.0;
  varargin_1[2] = 1.0;
  emlrtPushRtStackR2012b(&ri_emlrtRSI, emlrtRootTLSGlobal);
  k = 0;
  emxFree_real_T(&x);
  do {
    exitg1 = 0;
    if (k < 3) {
      if (varargin_1[k] != muDoubleScalarFloor(varargin_1[k])) {
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
    emlrtPushRtStackR2012b(&si_emlrtRSI, emlrtRootTLSGlobal);
    e_y = NULL;
    m39 = mxCreateCharArray(2, iv136);
    for (i = 0; i < 57; i++) {
      cv159[i] = cv160[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 57, m39, cv159);
    emlrtAssign(&e_y, m39);
    b_error(b_message(e_y, &ob_emlrtMCI), &pb_emlrtMCI);
    emlrtPopRtStackR2012b(&si_emlrtRSI, emlrtRootTLSGlobal);
  }

  tmp_re = 1.0;
  for (k = 0; k < 3; k++) {
    if (varargin_1[k] <= 0.0) {
      tmp_re = 0.0;
    } else {
      tmp_re *= varargin_1[k];
    }
  }

  if (2.147483647E+9 >= tmp_re) {
  } else {
    emlrtPushRtStackR2012b(&ti_emlrtRSI, emlrtRootTLSGlobal);
    f_y = NULL;
    m39 = mxCreateCharArray(2, iv137);
    for (i = 0; i < 21; i++) {
      cv161[i] = cv162[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 21, m39, cv161);
    emlrtAssign(&f_y, m39);
    b_error(b_message(f_y, &qb_emlrtMCI), &rb_emlrtMCI);
    emlrtPopRtStackR2012b(&ti_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPopRtStackR2012b(&ri_emlrtRSI, emlrtRootTLSGlobal);
  for (ib = 0; ib < 3; ib++) {
    sz[ib] = (int32_T)varargin_1[ib];
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
    emlrtPushRtStackR2012b(&qi_emlrtRSI, emlrtRootTLSGlobal);
    c_eml_error();
    emlrtPopRtStackR2012b(&qi_emlrtRSI, emlrtRootTLSGlobal);
  }

  if (12 > i2) {
    emlrtPushRtStackR2012b(&qi_emlrtRSI, emlrtRootTLSGlobal);
    c_eml_error();
    emlrtPopRtStackR2012b(&qi_emlrtRSI, emlrtRootTLSGlobal);
  }

  emxInit_creal_T(&g_y, 3, &pb_emlrtRTEI, TRUE);
  ib = g_y->size[0] * g_y->size[1] * g_y->size[2];
  g_y->size[0] = sz[0];
  g_y->size[1] = 12;
  g_y->size[2] = 1;
  emxEnsureCapacity((emxArray__common *)g_y, ib, (int32_T)sizeof(creal_T),
                    &qb_emlrtRTEI);
  if (b_x->size[0] == sz[0] * 12) {
  } else {
    emlrtPushRtStackR2012b(&pi_emlrtRSI, emlrtRootTLSGlobal);
    h_y = NULL;
    m39 = mxCreateCharArray(2, iv138);
    for (i = 0; i < 40; i++) {
      cv163[i] = cv164[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 40, m39, cv163);
    emlrtAssign(&h_y, m39);
    b_error(b_message(h_y, &mb_emlrtMCI), &nb_emlrtMCI);
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
    g_y->data[k] = b_x->data[k];
  }

  emxFree_creal_T(&b_x);
  emlrtPopRtStackR2012b(&ni_emlrtRSI, emlrtRootTLSGlobal);
  for (k = 0; k < 48; k++) {
    varargout_2[k] = postFFT[iv139[k]];
  }

  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&ji_emlrtRSI, emlrtRootTLSGlobal);
  ib = Rraw->size[0] * Rraw->size[1] * Rraw->size[2];
  Rraw->size[0] = g_y->size[0];
  Rraw->size[1] = g_y->size[1];
  Rraw->size[2] = 1;
  emxEnsureCapacity((emxArray__common *)Rraw, ib, (int32_T)sizeof(creal_T),
                    &pb_emlrtRTEI);
  i2 = g_y->size[0] * g_y->size[1] * g_y->size[2];
  for (ib = 0; ib < i2; ib++) {
    Rraw->data[ib] = g_y->data[ib];
  }

  /*  Expand equalizer gains to full frame size */
  ib = 0;
  for (i2 = 0; i2 < 12; i2++) {
    ia = 0;
    for (k = 0; k < 53; k++) {
      preambleGainsFull[ib] = preambleEqGains[ia];
      ia++;
      ib++;
    }
  }

  /*  Isolate pilot gains from preamble equalizer */
  /*  Needed to correctly adjust pilot gains */
  /*  Apply preamble equalizer gains to data and pilots */
  /* Correct pilots */
  for (i = 0; i < 3; i++) {
    sz[i] = iv140[i];
  }

  for (ib = 0; ib < 3; ib++) {
    i_y[ib] = g_y->size[ib];
  }

  emlrtSizeEqCheckNDR2012b(sz, i_y, &o_emlrtECI, emlrtRootTLSGlobal);

  /* Correct data */
  /*     %% Pilot Equalization */
  /*  Get pilot-based equalizer gains */
  emlrtPushRtStackR2012b(&ki_emlrtRSI, emlrtRootTLSGlobal);

  /*  Calculate Equalizer Taps with pilot symbols */
  /*  Calculate non-normalized channel gains */
  for (ib = 0; ib < 12; ib++) {
    for (ia = 0; ia < 4; ia++) {
      tmp_re = preambleGainsFull[((int32_T)c_tx_pilotLocationsWithoutGuard[ia] +
        53 * ib) - 1].re * varargout_2[ia + (ib << 2)].re - preambleGainsFull
        [((int32_T)c_tx_pilotLocationsWithoutGuard[ia] + 53 * ib) - 1].im *
        varargout_2[ia + (ib << 2)].im;
      tmp_im = preambleGainsFull[((int32_T)c_tx_pilotLocationsWithoutGuard[ia] +
        53 * ib) - 1].re * varargout_2[ia + (ib << 2)].im + preambleGainsFull
        [((int32_T)c_tx_pilotLocationsWithoutGuard[ia] + 53 * ib) - 1].im *
        varargout_2[ia + (ib << 2)].re;
      if (tmp_im == 0.0) {
        PilotNormal[ia + (ib << 2)].re = tmp_re / tx_pilots[ia + (ib << 2)];
        PilotNormal[ia + (ib << 2)].im = 0.0;
      } else if (tmp_re == 0.0) {
        PilotNormal[ia + (ib << 2)].re = 0.0;
        PilotNormal[ia + (ib << 2)].im = tmp_im / tx_pilots[ia + (ib << 2)];
      } else {
        PilotNormal[ia + (ib << 2)].re = tmp_re / tx_pilots[ia + (ib << 2)];
        PilotNormal[ia + (ib << 2)].im = tmp_im / tx_pilots[ia + (ib << 2)];
      }
    }
  }

  /*  Scale channel gains */
  for (k = 0; k < 48; k++) {
    tmp_re = muDoubleScalarHypot(PilotNormal[k].re, PilotNormal[k].im);
    PilotEnergy[k] = tmp_re * tmp_re;
  }

  /*  Interpolate to data carrier size */
  emlrtPushRtStackR2012b(&wi_emlrtRSI, emlrtRootTLSGlobal);
  for (ib = 0; ib < 48; ib++) {
    if (-PilotNormal[ib].im == 0.0) {
      varargout_2[ib].re = PilotNormal[ib].re / PilotEnergy[ib];
      varargout_2[ib].im = 0.0;
    } else if (PilotNormal[ib].re == 0.0) {
      varargout_2[ib].re = 0.0;
      varargout_2[ib].im = -PilotNormal[ib].im / PilotEnergy[ib];
    } else {
      varargout_2[ib].re = PilotNormal[ib].re / PilotEnergy[ib];
      varargout_2[ib].im = -PilotNormal[ib].im / PilotEnergy[ib];
    }
  }

  resample(SD, varargout_2, pilotEqGains);
  emlrtPopRtStackR2012b(&wi_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&ki_emlrtRSI, emlrtRootTLSGlobal);

  /*  Apply Equalizer from Pilots */
  for (ib = 0; ib < 12; ib++) {
    i2 = tx_dataSubcarrierIndexies_size[1];
    for (ia = 0; ia < i2; ia++) {
      preambleGainsFull_data[ia + tx_dataSubcarrierIndexies_size[1] * ib] =
        preambleGainsFull[((int32_T)tx_dataSubcarrierIndexies_data[ia] + 53 * ib)
        - 1];
    }
  }

  for (ib = 0; ib < 12; ib++) {
    for (ia = 0; ia < 48; ia++) {
      b_preambleGainsFull_data[ia + 48 * ib].re = preambleGainsFull_data[ia + 48
        * ib].re * g_y->data[ia + g_y->size[0] * ib].re -
        preambleGainsFull_data[ia + 48 * ib].im * g_y->data[ia + g_y->size[0] *
        ib].im;
      b_preambleGainsFull_data[ia + 48 * ib].im = preambleGainsFull_data[ia + 48
        * ib].re * g_y->data[ia + g_y->size[0] * ib].im +
        preambleGainsFull_data[ia + 48 * ib].im * g_y->data[ia + g_y->size[0] *
        ib].re;
    }
  }

  emxFree_creal_T(&g_y);
  for (ib = 0; ib < 12; ib++) {
    for (ia = 0; ia < 48; ia++) {
      R[ia + 48 * ib].re = pilotEqGains[ia + 48 * ib].re *
        b_preambleGainsFull_data[ia + 48 * ib].re - pilotEqGains[ia + 48 * ib].
        im * b_preambleGainsFull_data[ia + 48 * ib].im;
      R[ia + 48 * ib].im = pilotEqGains[ia + 48 * ib].re *
        b_preambleGainsFull_data[ia + 48 * ib].im + pilotEqGains[ia + 48 * ib].
        im * b_preambleGainsFull_data[ia + 48 * ib].re;
    }
  }

  /*  Save Gains for visualization */
  estimate->pilotEqGains.size[0] = 48;
  estimate->pilotEqGains.size[1] = 12;
  for (ib = 0; ib < 576; ib++) {
    estimate->pilotEqGains.data[ib] = pilotEqGains[ib];
  }

  estimate->preambleEqGains.size[0] = 53;
  for (ib = 0; ib < 53; ib++) {
    estimate->preambleEqGains.data[ib] = preambleEqGains[ib];
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(emlrtRootTLSGlobal);
}

void c_eml_error(void)
{
  emlrtPushRtStackR2012b(&u_emlrtRSI, emlrtRootTLSGlobal);
  emlrtErrorWithMessageIdR2012b(emlrtRootTLSGlobal, &ac_emlrtRTEI,
    "Coder:toolbox:reshape_emptyReshapeLimit", 0);
  emlrtPopRtStackR2012b(&u_emlrtRSI, emlrtRootTLSGlobal);
}

void check_forloop_overflow_error(void)
{
  const mxArray *y;
  static const int32_T iv22[2] = { 1, 34 };

  const mxArray *m4;
  char_T cv25[34];
  int32_T i;
  static const char_T cv26[34] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'i', 'n', 't', '_', 'f', 'o', 'r', 'l', 'o', 'o',
    'p', '_', 'o', 'v', 'e', 'r', 'f', 'l', 'o', 'w' };

  const mxArray *b_y;
  static const int32_T iv23[2] = { 1, 23 };

  char_T cv27[23];
  static const char_T cv28[23] = { 'c', 'o', 'd', 'e', 'r', '.', 'i', 'n', 't',
    'e', 'r', 'n', 'a', 'l', '.', 'i', 'n', 'd', 'e', 'x', 'I', 'n', 't' };

  emlrtPushRtStackR2012b(&ec_emlrtRSI, emlrtRootTLSGlobal);
  y = NULL;
  m4 = mxCreateCharArray(2, iv22);
  for (i = 0; i < 34; i++) {
    cv25[i] = cv26[i];
  }

  emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 34, m4, cv25);
  emlrtAssign(&y, m4);
  b_y = NULL;
  m4 = mxCreateCharArray(2, iv23);
  for (i = 0; i < 23; i++) {
    cv27[i] = cv28[i];
  }

  emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 23, m4, cv27);
  emlrtAssign(&b_y, m4);
  b_error(message(y, b_y, &f_emlrtMCI), &g_emlrtMCI);
  emlrtPopRtStackR2012b(&ec_emlrtRSI, emlrtRootTLSGlobal);
}

void equalizeOFDM(testPHYReceiveStackData *SD, const creal_T recv_data[1280],
                  const real_T tx_longPreamble[53], const real_T tx_pilots[48],
                  const real_T c_tx_pilotLocationsWithoutGuard[4], const real_T
                  tx_dataSubcarrierIndexies_data[48], const int32_T
                  tx_dataSubcarrierIndexies_size[2], const struct_T *estimate,
                  OFDMDemodulator_1 *hPreambleDemod, OFDMDemodulator *hDataDemod,
                  creal_T R[576], emxArray_creal_T *Rraw, struct_T *b_estimate)
{
  *b_estimate = *estimate;
  b_equalizeOFDM(SD, recv_data, tx_longPreamble, tx_pilots,
                 c_tx_pilotLocationsWithoutGuard, tx_dataSubcarrierIndexies_data,
                 tx_dataSubcarrierIndexies_size, b_estimate, hPreambleDemod,
                 hDataDemod, R, Rraw);
}

/* End of code generation (equalizeOFDM.c) */
