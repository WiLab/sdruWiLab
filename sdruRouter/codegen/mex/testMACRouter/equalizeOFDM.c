/*
 * equalizeOFDM.c
 *
 * Code generation for function 'equalizeOFDM'
 *
 * C source code generated on: Thu Mar  6 21:20:56 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testMACRouter.h"
#include "equalizeOFDM.h"
#include "rdivide.h"
#include "abs.h"
#include "power.h"
#include "mean.h"
#include "SystemProp.h"
#include "SystemCore.h"
#include "find.h"
#include "testMACRouter_emxutil.h"
#include "OFDMDemodulator.h"
#include "resample.h"
#include "testMACRouter_mexutil.h"
#include "testMACRouter_data.h"
#include <stdio.h>

/* Variable Definitions */
static emlrtRSInfo n_emlrtRSI = { 42, "power",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/power.m" };

static emlrtRSInfo o_emlrtRSI = { 58, "power",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/power.m" };

static emlrtRSInfo qc_emlrtRSI = { 19, "abs",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elfun/abs.m" };

static emlrtRSInfo co_emlrtRSI = { 20, "eml_scalar_abs",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elfun/eml_scalar_abs.m"
};

static emlrtRSInfo hp_emlrtRSI = { 51, "power",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/power.m" };

static emlrtRSInfo xr_emlrtRSI = { 16, "equalizeOFDM",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/private/equalizeOFDM.m" };

static emlrtRSInfo yr_emlrtRSI = { 17, "equalizeOFDM",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/private/equalizeOFDM.m" };

static emlrtRSInfo as_emlrtRSI = { 21, "equalizeOFDM",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/private/equalizeOFDM.m" };

static emlrtRSInfo bs_emlrtRSI = { 28, "equalizeOFDM",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/private/equalizeOFDM.m" };

static emlrtRSInfo cs_emlrtRSI = { 31, "equalizeOFDM",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/private/equalizeOFDM.m" };

static emlrtRSInfo ds_emlrtRSI = { 42, "equalizeOFDM",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/private/equalizeOFDM.m" };

static emlrtRSInfo fs_emlrtRSI = { 141, "OFDMDemodulator",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/OFDMDemodulator.m" };

static emlrtRSInfo bt_emlrtRSI = { 59, "equalizeOFDM",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/private/equalizeOFDM.m" };

static emlrtRSInfo ct_emlrtRSI = { 62, "equalizeOFDM",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/private/equalizeOFDM.m" };

static emlrtRSInfo dt_emlrtRSI = { 63, "equalizeOFDM",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/private/equalizeOFDM.m" };

static emlrtRSInfo et_emlrtRSI = { 64, "equalizeOFDM",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/private/equalizeOFDM.m" };

static emlrtRSInfo st_emlrtRSI = { 136, "OFDMDemodulator",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/OFDMDemodulator.m" };

static emlrtRSInfo vt_emlrtRSI = { 72, "equalizeOFDM",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/private/equalizeOFDM.m" };

static emlrtRSInfo wt_emlrtRSI = { 75, "equalizeOFDM",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/private/equalizeOFDM.m" };

static emlrtRSInfo xt_emlrtRSI = { 77, "equalizeOFDM",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/private/equalizeOFDM.m" };

static emlrtRSInfo yt_emlrtRSI = { 80, "equalizeOFDM",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/private/equalizeOFDM.m" };

static emlrtRTEInfo pb_emlrtRTEI = { 1, 32, "equalizeOFDM",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/private/equalizeOFDM.m" };

static emlrtRTEInfo yb_emlrtRTEI = { 16, 5, "equalizeOFDM",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/private/equalizeOFDM.m" };

static emlrtRTEInfo ac_emlrtRTEI = { 17, 5, "equalizeOFDM",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/private/equalizeOFDM.m" };

static emlrtECInfo v_emlrtECI = { 3, 38, 9, "equalizeOFDM",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/private/equalizeOFDM.m" };

static emlrtECInfo w_emlrtECI = { -1, 25, 16, "equalizeOFDM",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/private/equalizeOFDM.m" };

static emlrtECInfo x_emlrtECI = { 1, 21, 35, "equalizeOFDM",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/private/equalizeOFDM.m" };

static emlrtECInfo y_emlrtECI = { -1, 11, 13, "equalizeOFDM",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/private/equalizeOFDM.m" };

static emlrtBCInfo lb_emlrtBCI = { -1, -1, 58, 7, "R", "equalizeOFDM",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/private/equalizeOFDM.m", 0 };

/* Function Declarations */
static void b_equalizeOFDM(testMACRouterStackData *SD, const emlrtStack *sp,
  const creal_T recv_data[1280], const real_T tx_longPreamble[53], const real_T
  tx_pilots[48], const real_T c_tx_pilotLocationsWithoutGuard[4], const real_T
  tx_dataSubcarrierIndexies_data[48], const int32_T
  tx_dataSubcarrierIndexies_size[2], c_struct_T *estimate, OFDMDemodulator_1
  *hPreambleDemod, OFDMDemodulator_1 *hDataDemod, creal_T R[576],
  emxArray_creal_T *Rraw);

/* Function Definitions */
static void b_equalizeOFDM(testMACRouterStackData *SD, const emlrtStack *sp,
  const creal_T recv_data[1280], const real_T tx_longPreamble[53], const real_T
  tx_pilots[48], const real_T c_tx_pilotLocationsWithoutGuard[4], const real_T
  tx_dataSubcarrierIndexies_data[48], const int32_T
  tx_dataSubcarrierIndexies_size[2], c_struct_T *estimate, OFDMDemodulator_1
  *hPreambleDemod, OFDMDemodulator_1 *hDataDemod, creal_T R[576],
  emxArray_creal_T *Rraw)
{
  OFDMDemodulator_1 *obj;
  const mxArray *y;
  static const int32_T iv198[2] = { 1, 45 };

  const mxArray *m49;
  char_T cv241[45];
  int32_T i;
  static const char_T cv242[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C',
    'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv199[2] = { 1, 4 };

  char_T cv243[4];
  static const char_T cv244[4] = { 's', 't', 'e', 'p' };

  const mxArray *c_y;
  static const int32_T iv200[2] = { 1, 51 };

  char_T cv245[51];
  static const char_T cv246[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l',
    'e', 'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *d_y;
  static const int32_T iv201[2] = { 1, 5 };

  char_T cv247[5];
  static const char_T cv248[5] = { 's', 'e', 't', 'u', 'p' };

  int8_T fullGrid[64];
  int32_T k;
  static const int8_T iv202[11] = { 0, 1, 2, 3, 4, 5, 59, 60, 61, 62, 63 };

  int8_T ii_data[64];
  int32_T ii;
  boolean_T exitg2;
  boolean_T guard2 = FALSE;
  int8_T b_ii_data[64];
  creal_T recv[64];
  emxArray_creal_T *RLongFirst;
  const mxArray *e_y;
  static const int32_T iv203[2] = { 1, 45 };

  const mxArray *f_y;
  static const int32_T iv204[2] = { 1, 4 };

  const mxArray *g_y;
  static const int32_T iv205[2] = { 1, 51 };

  const mxArray *h_y;
  static const int32_T iv206[2] = { 1, 5 };

  boolean_T exitg1;
  boolean_T guard1 = FALSE;
  creal_T b_recv[64];
  emxArray_creal_T *RLongSecond;
  emxArray_creal_T *b_R;
  creal_T c_R[106];
  real_T b_tx_longPreamble[106];
  creal_T RNormal[106];
  real_T dv13[106];
  real_T dv14[106];
  real_T REnergy[53];
  creal_T RConj[53];
  creal_T b_RConj[53];
  const mxArray *i_y;
  static const int32_T iv207[2] = { 1, 45 };

  const mxArray *j_y;
  static const int32_T iv208[2] = { 1, 4 };

  const mxArray *k_y;
  static const int32_T iv209[2] = { 1, 51 };

  const mxArray *l_y;
  static const int32_T iv210[2] = { 1, 5 };

  int8_T b_fullGrid[768];
  static const int16_T iv211[48] = { 11, 25, 39, 53, 75, 89, 103, 117, 139, 153,
    167, 181, 203, 217, 231, 245, 267, 281, 295, 309, 331, 345, 359, 373, 395,
    409, 423, 437, 459, 473, 487, 501, 523, 537, 551, 565, 587, 601, 615, 629,
    651, 665, 679, 693, 715, 729, 743, 757 };

  boolean_T c_fullGrid[768];
  int32_T ii_size[1];
  int32_T c_ii_data[768];
  real_T d_ii_data[768];
  int32_T b_ii_size[1];
  creal_T RXPilots[48];
  creal_T preambleGainsFull[636];
  int32_T ia;
  int32_T iv212[3];
  static const int8_T iv213[3] = { 48, 12, 1 };

  int32_T b_Rraw[3];
  creal_T PilotNormal[48];
  real_T pilotEqGains_re;
  real_T pilotEqGains_im;
  real_T a[48];
  real_T PilotEnergy[48];
  creal_T b_PilotNormal[48];
  creal_T pilotEqGains[576];
  creal_T preambleGainsFull_data[576];
  creal_T b_preambleGainsFull_data[576];
  creal_T c_preambleGainsFull_data[576];
  real_T preambleGainsFull_data_re;
  real_T preambleGainsFull_data_im;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);

  /*  equalizeOFDM: Equalize the entire OFDM frame through the use of both */
  /*  the long preamble from the 802.11a standard and four pilot tones in */
  /*  the data frames themselves.  The gains from the pilots are */
  /*  interpolated across frequency to fill the data frame and apply gains */
  /*  to all data subcarriers. */
  /*     %% Use Long Preamble frame to estimate channel in frequency domain */
  /*  Separate out received preambles */
  emlrtVectorVectorIndexCheckR2012b(1280, 1, 1, 160, &y_emlrtECI, sp);

  /*  Demod */
  st.site = &xr_emlrtRSI;
  obj = hPreambleDemod;
  if (!obj->isReleased) {
  } else {
    y = NULL;
    m49 = mxCreateCharArray(2, iv198);
    for (i = 0; i < 45; i++) {
      cv241[i] = cv242[i];
    }

    emlrtInitCharArrayR2013a(&st, 45, m49, cv241);
    emlrtAssign(&y, m49);
    b_y = NULL;
    m49 = mxCreateCharArray(2, iv199);
    for (i = 0; i < 4; i++) {
      cv243[i] = cv244[i];
    }

    emlrtInitCharArrayR2013a(&st, 4, m49, cv243);
    emlrtAssign(&b_y, m49);
    b_st.site = &cb_emlrtRSI;
    c_error(&b_st, message(&b_st, y, b_y, &emlrtMCI), &emlrtMCI);
  }

  if (!obj->isInitialized) {
    b_st.site = &cb_emlrtRSI;
    if (!obj->isInitialized) {
    } else {
      c_y = NULL;
      m49 = mxCreateCharArray(2, iv200);
      for (i = 0; i < 51; i++) {
        cv245[i] = cv246[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 51, m49, cv245);
      emlrtAssign(&c_y, m49);
      d_y = NULL;
      m49 = mxCreateCharArray(2, iv201);
      for (i = 0; i < 5; i++) {
        cv247[i] = cv248[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 5, m49, cv247);
      emlrtAssign(&d_y, m49);
      c_st.site = &cb_emlrtRSI;
      c_error(&c_st, message(&c_st, c_y, d_y, &emlrtMCI), &emlrtMCI);
    }

    c_st.site = &cb_emlrtRSI;
    obj->isInitialized = TRUE;
    d_st.site = &db_emlrtRSI;
    c_st.site = &cb_emlrtRSI;
    d_st.site = &cb_emlrtRSI;
    d_st.site = &cb_emlrtRSI;
    c_st.site = &cb_emlrtRSI;
    d_st.site = &cb_emlrtRSI;
    d_st.site = &cb_emlrtRSI;
    d_st.site = &cb_emlrtRSI;
    d_st.site = &cb_emlrtRSI;
    c_st.site = &cb_emlrtRSI;
    d_st.site = &cb_emlrtRSI;
    c_st.site = &cb_emlrtRSI;
    d_st.site = &cb_emlrtRSI;
    c_st.site = &cb_emlrtRSI;
    d_st.site = &cb_emlrtRSI;
    c_st.site = &cb_emlrtRSI;
    d_st.site = &cb_emlrtRSI;
    d_st.site = &cb_emlrtRSI;
    c_st.site = &cb_emlrtRSI;
    c_st.site = &cb_emlrtRSI;
    c_st.site = &cb_emlrtRSI;
    c_st.site = &cb_emlrtRSI;
    memset(&fullGrid[0], 1, sizeof(int8_T) << 6);
    for (k = 0; k < 11; k++) {
      fullGrid[iv202[k]] = 0;
    }

    d_st.site = &fs_emlrtRSI;
    i = 0;
    ii = 1;
    exitg2 = FALSE;
    while ((exitg2 == FALSE) && (ii < 65)) {
      guard2 = FALSE;
      if (fullGrid[ii - 1] == 1) {
        i++;
        ii_data[i - 1] = (int8_T)ii;
        if (i >= 64) {
          exitg2 = TRUE;
        } else {
          guard2 = TRUE;
        }
      } else {
        guard2 = TRUE;
      }

      if (guard2 == TRUE) {
        ii++;
      }
    }

    if (1 > i) {
      i = 0;
    }

    for (k = 0; k < i; k++) {
      b_ii_data[k] = ii_data[k];
    }

    for (k = 0; k < i; k++) {
      ii_data[k] = b_ii_data[k];
    }

    d_st.site = &fs_emlrtRSI;
    k = obj->pDataLinearIndices->size[0];
    obj->pDataLinearIndices->size[0] = i;
    emxEnsureCapacity(&d_st, (emxArray__common *)obj->pDataLinearIndices, k,
                      (int32_T)sizeof(real_T), &pb_emlrtRTEI);
    for (k = 0; k < i; k++) {
      obj->pDataLinearIndices->data[k] = ii_data[k];
    }

    c_st.site = &cb_emlrtRSI;
  }

  b_st.site = &cb_emlrtRSI;
  b_st.site = &cb_emlrtRSI;
  b_st.site = &cb_emlrtRSI;
  c_st.site = &cb_emlrtRSI;
  c_st.site = &cb_emlrtRSI;
  b_st.site = &cb_emlrtRSI;
  b_st.site = &cb_emlrtRSI;
  b_st.site = &cb_emlrtRSI;
  c_st.site = &cb_emlrtRSI;
  c_st.site = &cb_emlrtRSI;
  b_st.site = &cb_emlrtRSI;
  b_st.site = &cb_emlrtRSI;
  memcpy(&recv[0], &recv_data[192], sizeof(creal_T) << 6);
  emxInit_creal_T(&st, &RLongFirst, 3, &yb_emlrtRTEI, TRUE);
  b_st.site = &cb_emlrtRSI;
  OFDMDemodulator_stepImpl(&b_st, obj, recv, RLongFirst);

  /* First half of long preamble */
  st.site = &yr_emlrtRSI;
  obj = hPreambleDemod;
  if (!obj->isReleased) {
  } else {
    e_y = NULL;
    m49 = mxCreateCharArray(2, iv203);
    for (i = 0; i < 45; i++) {
      cv241[i] = cv242[i];
    }

    emlrtInitCharArrayR2013a(&st, 45, m49, cv241);
    emlrtAssign(&e_y, m49);
    f_y = NULL;
    m49 = mxCreateCharArray(2, iv204);
    for (i = 0; i < 4; i++) {
      cv243[i] = cv244[i];
    }

    emlrtInitCharArrayR2013a(&st, 4, m49, cv243);
    emlrtAssign(&f_y, m49);
    b_st.site = &cb_emlrtRSI;
    c_error(&b_st, message(&b_st, e_y, f_y, &emlrtMCI), &emlrtMCI);
  }

  if (!obj->isInitialized) {
    b_st.site = &cb_emlrtRSI;
    if (!obj->isInitialized) {
    } else {
      g_y = NULL;
      m49 = mxCreateCharArray(2, iv205);
      for (i = 0; i < 51; i++) {
        cv245[i] = cv246[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 51, m49, cv245);
      emlrtAssign(&g_y, m49);
      h_y = NULL;
      m49 = mxCreateCharArray(2, iv206);
      for (i = 0; i < 5; i++) {
        cv247[i] = cv248[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 5, m49, cv247);
      emlrtAssign(&h_y, m49);
      c_st.site = &cb_emlrtRSI;
      c_error(&c_st, message(&c_st, g_y, h_y, &emlrtMCI), &emlrtMCI);
    }

    c_st.site = &cb_emlrtRSI;
    obj->isInitialized = TRUE;
    d_st.site = &db_emlrtRSI;
    c_st.site = &cb_emlrtRSI;
    d_st.site = &cb_emlrtRSI;
    d_st.site = &cb_emlrtRSI;
    c_st.site = &cb_emlrtRSI;
    d_st.site = &cb_emlrtRSI;
    d_st.site = &cb_emlrtRSI;
    d_st.site = &cb_emlrtRSI;
    d_st.site = &cb_emlrtRSI;
    c_st.site = &cb_emlrtRSI;
    d_st.site = &cb_emlrtRSI;
    c_st.site = &cb_emlrtRSI;
    d_st.site = &cb_emlrtRSI;
    c_st.site = &cb_emlrtRSI;
    d_st.site = &cb_emlrtRSI;
    c_st.site = &cb_emlrtRSI;
    d_st.site = &cb_emlrtRSI;
    d_st.site = &cb_emlrtRSI;
    c_st.site = &cb_emlrtRSI;
    c_st.site = &cb_emlrtRSI;
    c_st.site = &cb_emlrtRSI;
    c_st.site = &cb_emlrtRSI;
    memset(&fullGrid[0], 1, sizeof(int8_T) << 6);
    for (k = 0; k < 11; k++) {
      fullGrid[iv202[k]] = 0;
    }

    d_st.site = &fs_emlrtRSI;
    i = 0;
    ii = 1;
    exitg1 = FALSE;
    while ((exitg1 == FALSE) && (ii < 65)) {
      guard1 = FALSE;
      if (fullGrid[ii - 1] == 1) {
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
      i = 0;
    }

    for (k = 0; k < i; k++) {
      b_ii_data[k] = ii_data[k];
    }

    for (k = 0; k < i; k++) {
      ii_data[k] = b_ii_data[k];
    }

    d_st.site = &fs_emlrtRSI;
    k = obj->pDataLinearIndices->size[0];
    obj->pDataLinearIndices->size[0] = i;
    emxEnsureCapacity(&d_st, (emxArray__common *)obj->pDataLinearIndices, k,
                      (int32_T)sizeof(real_T), &pb_emlrtRTEI);
    for (k = 0; k < i; k++) {
      obj->pDataLinearIndices->data[k] = ii_data[k];
    }

    c_st.site = &cb_emlrtRSI;
  }

  b_st.site = &cb_emlrtRSI;
  b_st.site = &cb_emlrtRSI;
  b_st.site = &cb_emlrtRSI;
  c_st.site = &cb_emlrtRSI;
  c_st.site = &cb_emlrtRSI;
  b_st.site = &cb_emlrtRSI;
  b_st.site = &cb_emlrtRSI;
  b_st.site = &cb_emlrtRSI;
  c_st.site = &cb_emlrtRSI;
  c_st.site = &cb_emlrtRSI;
  b_st.site = &cb_emlrtRSI;
  b_st.site = &cb_emlrtRSI;
  memcpy(&b_recv[0], &recv_data[256], sizeof(creal_T) << 6);
  emxInit_creal_T(&st, &RLongSecond, 3, &ac_emlrtRTEI, TRUE);
  emxInit_creal_T(&st, &b_R, 3, &pb_emlrtRTEI, TRUE);
  b_st.site = &cb_emlrtRSI;
  OFDMDemodulator_stepImpl(&b_st, obj, b_recv, RLongSecond);

  /* Second half of long preamble */
  /*     %% Preamble Equalization */
  /*  Get Equalizer tap gains */
  k = RLongFirst->size[0];
  ii = RLongSecond->size[0];
  emlrtDimSizeEqCheckFastR2012b(k, ii, &x_emlrtECI, sp);
  st.site = &as_emlrtRSI;
  k = b_R->size[0] * b_R->size[1] * b_R->size[2];
  b_R->size[0] = RLongFirst->size[0];
  b_R->size[1] = 2;
  b_R->size[2] = 1;
  emxEnsureCapacity(&st, (emxArray__common *)b_R, k, (int32_T)sizeof(creal_T),
                    &pb_emlrtRTEI);
  i = RLongFirst->size[0];
  for (k = 0; k < i; k++) {
    b_R->data[k] = RLongFirst->data[k];
  }

  emxFree_creal_T(&RLongFirst);
  i = RLongSecond->size[0];
  for (k = 0; k < i; k++) {
    b_R->data[k + b_R->size[0]] = RLongSecond->data[k];
  }

  emxFree_creal_T(&RLongSecond);

  /*  Calculate Equalizer Taps with preamble symbols */
  /*  Calculate non-normalized channel gains */
  for (k = 0; k < 53; k++) {
    ii = b_R->size[0];
    i = 1 + k;
    emlrtDynamicBoundsCheckFastR2012b(i, 1, ii, &lb_emlrtBCI, &st);
  }

  i = b_R->size[0];
  for (k = 0; k < 2; k++) {
    for (ii = 0; ii < 53; ii++) {
      c_R[ii + 53 * k] = b_R->data[ii + i * k];
    }
  }

  emxFree_creal_T(&b_R);
  for (k = 0; k < 53; k++) {
    b_tx_longPreamble[k] = tx_longPreamble[k];
    b_tx_longPreamble[53 + k] = tx_longPreamble[k];
  }

  b_st.site = &bt_emlrtRSI;
  b_rdivide(c_R, b_tx_longPreamble, RNormal);

  /*  Known is the original Long Preamble symbols  */
  /*  Scale channel gains */
  b_st.site = &ct_emlrtRSI;
  d_abs(RNormal, dv13);
  memcpy(&dv14[0], &dv13[0], 106U * sizeof(real_T));
  b_st.site = &ct_emlrtRSI;
  b_power(dv14, dv13);
  b_st.site = &ct_emlrtRSI;
  c_mean(dv13, REnergy);
  b_st.site = &dt_emlrtRSI;
  d_mean(RNormal, RConj);
  for (k = 0; k < 53; k++) {
    RConj[k].im = -RConj[k].im;
    b_RConj[k] = RConj[k];
  }

  b_st.site = &et_emlrtRSI;
  c_rdivide(b_RConj, REnergy, RConj);

  /*  Separate data from preambles */
  /* recvData = recv(length(tx.preambles)+1:length(tx.preambles)+(hDataDemod.NumSymbols)*(tx.FFTLength+hDataDemod.CyclicPrefixLength)); */
  emlrtVectorVectorIndexCheckR2012b(1280, 1, 1, 960, &w_emlrtECI, sp);

  /*  CG */
  /*  OFDM Demod */
  st.site = &bs_emlrtRSI;
  obj = hDataDemod;
  if (!obj->isReleased) {
  } else {
    i_y = NULL;
    m49 = mxCreateCharArray(2, iv207);
    for (i = 0; i < 45; i++) {
      cv241[i] = cv242[i];
    }

    emlrtInitCharArrayR2013a(&st, 45, m49, cv241);
    emlrtAssign(&i_y, m49);
    j_y = NULL;
    m49 = mxCreateCharArray(2, iv208);
    for (i = 0; i < 4; i++) {
      cv243[i] = cv244[i];
    }

    emlrtInitCharArrayR2013a(&st, 4, m49, cv243);
    emlrtAssign(&j_y, m49);
    b_st.site = &cb_emlrtRSI;
    c_error(&b_st, message(&b_st, i_y, j_y, &emlrtMCI), &emlrtMCI);
  }

  if (!obj->isInitialized) {
    b_st.site = &cb_emlrtRSI;
    if (!obj->isInitialized) {
    } else {
      k_y = NULL;
      m49 = mxCreateCharArray(2, iv209);
      for (i = 0; i < 51; i++) {
        cv245[i] = cv246[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 51, m49, cv245);
      emlrtAssign(&k_y, m49);
      l_y = NULL;
      m49 = mxCreateCharArray(2, iv210);
      for (i = 0; i < 5; i++) {
        cv247[i] = cv248[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 5, m49, cv247);
      emlrtAssign(&l_y, m49);
      c_st.site = &cb_emlrtRSI;
      c_error(&c_st, message(&c_st, k_y, l_y, &emlrtMCI), &emlrtMCI);
    }

    c_st.site = &cb_emlrtRSI;
    g_SystemProp_matlabCodegenSetAn(obj);
    c_st.site = &cb_emlrtRSI;
    c_st.site = &cb_emlrtRSI;
    c_st.site = &cb_emlrtRSI;
    c_st.site = &cb_emlrtRSI;
    b_SystemCore_validateProperties();
    c_st.site = &cb_emlrtRSI;
    d_st.site = &cb_emlrtRSI;
    c_st.site = &cb_emlrtRSI;
    d_st.site = &cb_emlrtRSI;
    d_st.site = &cb_emlrtRSI;
    c_st.site = &cb_emlrtRSI;
    c_st.site = &cb_emlrtRSI;
    c_st.site = &cb_emlrtRSI;
    c_st.site = &cb_emlrtRSI;
    memset(&b_fullGrid[0], 1, 768U * sizeof(int8_T));
    for (k = 0; k < 12; k++) {
      for (ii = 0; ii < 11; ii++) {
        b_fullGrid[iv202[ii] + (k << 6)] = 0;
      }

      b_fullGrid[32 + (k << 6)] = 0;
    }

    d_st.site = &st_emlrtRSI;
    d_st.site = &st_emlrtRSI;
    for (k = 0; k < 48; k++) {
      b_fullGrid[iv211[k]] = 2;
    }

    d_st.site = &fs_emlrtRSI;
    for (k = 0; k < 768; k++) {
      c_fullGrid[k] = (b_fullGrid[k] == 1);
    }

    eml_find(c_fullGrid, c_ii_data, ii_size);
    b_ii_size[0] = ii_size[0];
    i = ii_size[0];
    for (k = 0; k < i; k++) {
      d_ii_data[k] = c_ii_data[k];
    }

    d_st.site = &fs_emlrtRSI;
    h_SystemProp_matlabCodegenSetAn(&d_st, obj, d_ii_data, b_ii_size);
    c_st.site = &cb_emlrtRSI;
  }

  b_st.site = &cb_emlrtRSI;
  b_st.site = &cb_emlrtRSI;
  b_st.site = &cb_emlrtRSI;
  c_st.site = &cb_emlrtRSI;
  c_st.site = &cb_emlrtRSI;
  b_st.site = &cb_emlrtRSI;
  b_st.site = &cb_emlrtRSI;
  b_st.site = &cb_emlrtRSI;
  c_st.site = &cb_emlrtRSI;
  c_st.site = &cb_emlrtRSI;
  b_st.site = &cb_emlrtRSI;
  b_st.site = &cb_emlrtRSI;
  b_st.site = &cb_emlrtRSI;
  b_OFDMDemodulator_stepImpl(SD, &b_st, obj, *(creal_T (*)[960])&recv_data[320],
    Rraw, RXPilots);

  /*  Expand equalizer gains to full frame size */
  st.site = &cs_emlrtRSI;
  i = 0;
  for (ii = 0; ii < 12; ii++) {
    ia = 0;
    for (k = 0; k < 53; k++) {
      preambleGainsFull[i] = RConj[ia];
      b_st.site = &ng_emlrtRSI;
      ia++;
      b_st.site = &og_emlrtRSI;
      i++;
    }
  }

  /*  Isolate pilot gains from preamble equalizer */
  /*  Needed to correctly adjust pilot gains */
  /*  Apply preamble equalizer gains to data and pilots */
  /* Correct pilots */
  for (i = 0; i < 3; i++) {
    iv212[i] = iv213[i];
  }

  for (k = 0; k < 3; k++) {
    b_Rraw[k] = Rraw->size[k];
  }

  emlrtSizeEqCheckNDR2012b(iv212, b_Rraw, &v_emlrtECI, sp);

  /* Correct data */
  /*     %% Pilot Equalization */
  /*  Get pilot-based equalizer gains */
  st.site = &ds_emlrtRSI;

  /*  Calculate Equalizer Taps with pilot symbols */
  /*  Calculate non-normalized channel gains */
  b_st.site = &vt_emlrtRSI;
  c_st.site = &k_emlrtRSI;
  for (k = 0; k < 12; k++) {
    for (ii = 0; ii < 4; ii++) {
      pilotEqGains_re = preambleGainsFull[((int32_T)
        c_tx_pilotLocationsWithoutGuard[ii] + 53 * k) - 1].re * RXPilots[ii + (k
        << 2)].re - preambleGainsFull[((int32_T)
        c_tx_pilotLocationsWithoutGuard[ii] + 53 * k) - 1].im * RXPilots[ii + (k
        << 2)].im;
      pilotEqGains_im = preambleGainsFull[((int32_T)
        c_tx_pilotLocationsWithoutGuard[ii] + 53 * k) - 1].re * RXPilots[ii + (k
        << 2)].im + preambleGainsFull[((int32_T)
        c_tx_pilotLocationsWithoutGuard[ii] + 53 * k) - 1].im * RXPilots[ii + (k
        << 2)].re;
      if (pilotEqGains_im == 0.0) {
        PilotNormal[ii + (k << 2)].re = pilotEqGains_re / tx_pilots[ii + (k << 2)];
        PilotNormal[ii + (k << 2)].im = 0.0;
      } else if (pilotEqGains_re == 0.0) {
        PilotNormal[ii + (k << 2)].re = 0.0;
        PilotNormal[ii + (k << 2)].im = pilotEqGains_im / tx_pilots[ii + (k << 2)];
      } else {
        PilotNormal[ii + (k << 2)].re = pilotEqGains_re / tx_pilots[ii + (k << 2)];
        PilotNormal[ii + (k << 2)].im = pilotEqGains_im / tx_pilots[ii + (k << 2)];
      }
    }
  }

  /*  Scale channel gains */
  b_st.site = &wt_emlrtRSI;
  for (k = 0; k < 48; k++) {
    c_st.site = &qc_emlrtRSI;
    d_st.site = &co_emlrtRSI;
    a[k] = muDoubleScalarHypot(PilotNormal[k].re, PilotNormal[k].im);
  }

  b_st.site = &wt_emlrtRSI;
  c_st.site = &n_emlrtRSI;
  d_st.site = &hp_emlrtRSI;
  for (k = 0; k < 48; k++) {
    d_st.site = &o_emlrtRSI;
    PilotEnergy[k] = a[k] * a[k];
  }

  b_st.site = &xt_emlrtRSI;
  c_st.site = &k_emlrtRSI;

  /*  Interpolate to data carrier size */
  for (k = 0; k < 48; k++) {
    if (-PilotNormal[k].im == 0.0) {
      b_PilotNormal[k].re = PilotNormal[k].re / PilotEnergy[k];
      b_PilotNormal[k].im = 0.0;
    } else if (PilotNormal[k].re == 0.0) {
      b_PilotNormal[k].re = 0.0;
      b_PilotNormal[k].im = -PilotNormal[k].im / PilotEnergy[k];
    } else {
      b_PilotNormal[k].re = PilotNormal[k].re / PilotEnergy[k];
      b_PilotNormal[k].im = -PilotNormal[k].im / PilotEnergy[k];
    }
  }

  b_st.site = &yt_emlrtRSI;
  resample(SD, &b_st, b_PilotNormal, pilotEqGains);

  /*  Apply Equalizer from Pilots */
  for (k = 0; k < 12; k++) {
    for (ii = 0; ii < 48; ii++) {
      preambleGainsFull_data[ii + 48 * k] = preambleGainsFull[((int32_T)
        tx_dataSubcarrierIndexies_data[tx_dataSubcarrierIndexies_size[0] * ii] +
        53 * k) - 1];
    }
  }

  for (k = 0; k < 12; k++) {
    memcpy(&b_preambleGainsFull_data[48 * k], &preambleGainsFull_data[48 * k],
           48U * sizeof(creal_T));
  }

  i = Rraw->size[0];
  for (k = 0; k < 12; k++) {
    for (ii = 0; ii < 48; ii++) {
      c_preambleGainsFull_data[ii + 48 * k].re = b_preambleGainsFull_data[ii +
        48 * k].re * Rraw->data[ii + i * k].re - b_preambleGainsFull_data[ii +
        48 * k].im * Rraw->data[ii + i * k].im;
      c_preambleGainsFull_data[ii + 48 * k].im = b_preambleGainsFull_data[ii +
        48 * k].re * Rraw->data[ii + i * k].im + b_preambleGainsFull_data[ii +
        48 * k].im * Rraw->data[ii + i * k].re;
    }
  }

  for (k = 0; k < 12; k++) {
    for (ii = 0; ii < 48; ii++) {
      pilotEqGains_re = pilotEqGains[ii + 48 * k].re;
      pilotEqGains_im = pilotEqGains[ii + 48 * k].im;
      preambleGainsFull_data_re = c_preambleGainsFull_data[ii + 48 * k].re;
      preambleGainsFull_data_im = c_preambleGainsFull_data[ii + 48 * k].im;
      R[ii + 48 * k].re = pilotEqGains_re * preambleGainsFull_data_re -
        pilotEqGains_im * preambleGainsFull_data_im;
      R[ii + 48 * k].im = pilotEqGains_re * preambleGainsFull_data_im +
        pilotEqGains_im * preambleGainsFull_data_re;
    }
  }

  /*  Save Gains for visualization */
  estimate->pilotEqGains.size[0] = 48;
  estimate->pilotEqGains.size[1] = 12;
  for (k = 0; k < 576; k++) {
    estimate->pilotEqGains.data[k] = pilotEqGains[k];
  }

  estimate->preambleEqGains.size[0] = 53;
  for (k = 0; k < 53; k++) {
    estimate->preambleEqGains.data[k] = RConj[k];
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void equalizeOFDM(testMACRouterStackData *SD, const emlrtStack *sp, const
                  creal_T recv_data[1280], const real_T tx_longPreamble[53],
                  const real_T tx_pilots[48], const real_T
                  c_tx_pilotLocationsWithoutGuard[4], const real_T
                  tx_dataSubcarrierIndexies_data[48], const int32_T
                  tx_dataSubcarrierIndexies_size[2], const c_struct_T *estimate,
                  OFDMDemodulator_1 *hPreambleDemod, OFDMDemodulator_1
                  *hDataDemod, creal_T R[576], emxArray_creal_T *Rraw,
                  c_struct_T *b_estimate)
{
  *b_estimate = *estimate;
  b_equalizeOFDM(SD, sp, recv_data, tx_longPreamble, tx_pilots,
                 c_tx_pilotLocationsWithoutGuard, tx_dataSubcarrierIndexies_data,
                 tx_dataSubcarrierIndexies_size, b_estimate, hPreambleDemod,
                 hDataDemod, R, Rraw);
}

/* End of code generation (equalizeOFDM.c) */
