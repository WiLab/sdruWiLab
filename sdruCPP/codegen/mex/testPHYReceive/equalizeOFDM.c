/*
 * equalizeOFDM.c
 *
 * Code generation for function 'equalizeOFDM'
 *
 * C source code generated on: Thu Feb 27 11:53:20 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testPHYReceive.h"
#include "equalizeOFDM.h"
#include "rdivide.h"
#include "abs.h"
#include "power.h"
#include "mean.h"
#include "SystemProp.h"
#include "SystemCore.h"
#include "find.h"
#include "testPHYReceive_emxutil.h"
#include "PHYReceive.h"
#include "OFDMDemodulator.h"
#include "resample.h"
#include "testPHYReceive_mexutil.h"
#include "testPHYReceive_data.h"

/* Variable Definitions */
static emlrtRSInfo n_emlrtRSI = { 42, "power",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/power.m" };

static emlrtRSInfo o_emlrtRSI = { 58, "power",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/power.m" };

static emlrtRSInfo qc_emlrtRSI = { 19, "abs",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elfun/abs.m" };

static emlrtRSInfo en_emlrtRSI = { 20, "eml_scalar_abs",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elfun/eml_scalar_abs.m"
};

static emlrtRSInfo jo_emlrtRSI = { 51, "power",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/power.m" };

static emlrtRSInfo ar_emlrtRSI = { 16, "equalizeOFDM",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/private/equalizeOFDM.m" };

static emlrtRSInfo br_emlrtRSI = { 17, "equalizeOFDM",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/private/equalizeOFDM.m" };

static emlrtRSInfo cr_emlrtRSI = { 21, "equalizeOFDM",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/private/equalizeOFDM.m" };

static emlrtRSInfo dr_emlrtRSI = { 28, "equalizeOFDM",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/private/equalizeOFDM.m" };

static emlrtRSInfo er_emlrtRSI = { 31, "equalizeOFDM",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/private/equalizeOFDM.m" };

static emlrtRSInfo fr_emlrtRSI = { 42, "equalizeOFDM",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/private/equalizeOFDM.m" };

static emlrtRSInfo hr_emlrtRSI = { 141, "OFDMDemodulator",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/OFDMDemodulator.m" };

static emlrtRSInfo ds_emlrtRSI = { 59, "equalizeOFDM",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/private/equalizeOFDM.m" };

static emlrtRSInfo es_emlrtRSI = { 62, "equalizeOFDM",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/private/equalizeOFDM.m" };

static emlrtRSInfo fs_emlrtRSI = { 63, "equalizeOFDM",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/private/equalizeOFDM.m" };

static emlrtRSInfo gs_emlrtRSI = { 64, "equalizeOFDM",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/private/equalizeOFDM.m" };

static emlrtRSInfo us_emlrtRSI = { 136, "OFDMDemodulator",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/OFDMDemodulator.m" };

static emlrtRSInfo xs_emlrtRSI = { 72, "equalizeOFDM",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/private/equalizeOFDM.m" };

static emlrtRSInfo ys_emlrtRSI = { 75, "equalizeOFDM",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/private/equalizeOFDM.m" };

static emlrtRSInfo at_emlrtRSI = { 77, "equalizeOFDM",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/private/equalizeOFDM.m" };

static emlrtRSInfo bt_emlrtRSI = { 80, "equalizeOFDM",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/private/equalizeOFDM.m" };

static emlrtRTEInfo ob_emlrtRTEI = { 1, 32, "equalizeOFDM",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/private/equalizeOFDM.m" };

static emlrtRTEInfo ub_emlrtRTEI = { 16, 5, "equalizeOFDM",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/private/equalizeOFDM.m" };

static emlrtRTEInfo vb_emlrtRTEI = { 17, 5, "equalizeOFDM",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/private/equalizeOFDM.m" };

static emlrtECInfo o_emlrtECI = { 3, 38, 9, "equalizeOFDM",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/private/equalizeOFDM.m" };

static emlrtECInfo p_emlrtECI = { -1, 25, 16, "equalizeOFDM",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/private/equalizeOFDM.m" };

static emlrtECInfo q_emlrtECI = { 1, 21, 35, "equalizeOFDM",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/private/equalizeOFDM.m" };

static emlrtECInfo r_emlrtECI = { -1, 11, 13, "equalizeOFDM",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/private/equalizeOFDM.m" };

static emlrtBCInfo eb_emlrtBCI = { -1, -1, 58, 7, "R", "equalizeOFDM",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/private/equalizeOFDM.m", 0 };

/* Function Declarations */
static void b_equalizeOFDM(testPHYReceiveStackData *SD, const emlrtStack *sp,
  const creal_T recv_data[1280], const real_T tx_longPreamble[53], const real_T
  tx_pilots[48], const real_T c_tx_pilotLocationsWithoutGuard[4], const real_T
  tx_dataSubcarrierIndexies_data[48], const int32_T
  tx_dataSubcarrierIndexies_size[2], b_struct_T *estimate, OFDMDemodulator_1
  *hPreambleDemod, OFDMDemodulator_1 *hDataDemod, creal_T R[576],
  emxArray_creal_T *Rraw);

/* Function Definitions */
static void b_equalizeOFDM(testPHYReceiveStackData *SD, const emlrtStack *sp,
  const creal_T recv_data[1280], const real_T tx_longPreamble[53], const real_T
  tx_pilots[48], const real_T c_tx_pilotLocationsWithoutGuard[4], const real_T
  tx_dataSubcarrierIndexies_data[48], const int32_T
  tx_dataSubcarrierIndexies_size[2], b_struct_T *estimate, OFDMDemodulator_1
  *hPreambleDemod, OFDMDemodulator_1 *hDataDemod, creal_T R[576],
  emxArray_creal_T *Rraw)
{
  OFDMDemodulator_1 *obj;
  const mxArray *y;
  static const int32_T iv126[2] = { 1, 45 };

  const mxArray *m32;
  char_T cv152[45];
  int32_T i;
  static const char_T cv153[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C',
    'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv127[2] = { 1, 4 };

  char_T cv154[4];
  static const char_T cv155[4] = { 's', 't', 'e', 'p' };

  const mxArray *c_y;
  static const int32_T iv128[2] = { 1, 51 };

  char_T cv156[51];
  static const char_T cv157[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l',
    'e', 'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *d_y;
  static const int32_T iv129[2] = { 1, 5 };

  char_T cv158[5];
  static const char_T cv159[5] = { 's', 'e', 't', 'u', 'p' };

  int8_T fullGrid[64];
  int32_T k;
  static const int8_T iv130[11] = { 0, 1, 2, 3, 4, 5, 59, 60, 61, 62, 63 };

  int8_T ii_data[64];
  int32_T ii;
  boolean_T exitg2;
  boolean_T guard2 = FALSE;
  int8_T b_ii_data[64];
  creal_T recv[64];
  emxArray_creal_T *RLongFirst;
  const mxArray *e_y;
  static const int32_T iv131[2] = { 1, 45 };

  const mxArray *f_y;
  static const int32_T iv132[2] = { 1, 4 };

  const mxArray *g_y;
  static const int32_T iv133[2] = { 1, 51 };

  const mxArray *h_y;
  static const int32_T iv134[2] = { 1, 5 };

  boolean_T exitg1;
  boolean_T guard1 = FALSE;
  creal_T b_recv[64];
  emxArray_creal_T *RLongSecond;
  emxArray_creal_T *b_R;
  creal_T c_R[106];
  real_T b_tx_longPreamble[106];
  creal_T RNormal[106];
  real_T dv12[106];
  real_T dv13[106];
  real_T REnergy[53];
  creal_T RConj[53];
  creal_T b_RConj[53];
  const mxArray *i_y;
  static const int32_T iv135[2] = { 1, 45 };

  const mxArray *j_y;
  static const int32_T iv136[2] = { 1, 4 };

  const mxArray *k_y;
  static const int32_T iv137[2] = { 1, 51 };

  const mxArray *l_y;
  static const int32_T iv138[2] = { 1, 5 };

  int8_T b_fullGrid[768];
  static const int16_T iv139[48] = { 11, 25, 39, 53, 75, 89, 103, 117, 139, 153,
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
  int32_T iv140[3];
  static const int8_T iv141[3] = { 48, 12, 1 };

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
  emlrtVectorVectorIndexCheckR2012b(1280, 1, 1, 160, &r_emlrtECI, sp);

  /*  Demod */
  st.site = &ar_emlrtRSI;
  obj = hPreambleDemod;
  if (!obj->isReleased) {
  } else {
    y = NULL;
    m32 = mxCreateCharArray(2, iv126);
    for (i = 0; i < 45; i++) {
      cv152[i] = cv153[i];
    }

    emlrtInitCharArrayR2013a(&st, 45, m32, cv152);
    emlrtAssign(&y, m32);
    b_y = NULL;
    m32 = mxCreateCharArray(2, iv127);
    for (i = 0; i < 4; i++) {
      cv154[i] = cv155[i];
    }

    emlrtInitCharArrayR2013a(&st, 4, m32, cv154);
    emlrtAssign(&b_y, m32);
    b_st.site = &cb_emlrtRSI;
    b_error(&b_st, message(&b_st, y, b_y, &emlrtMCI), &emlrtMCI);
  }

  if (!obj->isInitialized) {
    b_st.site = &cb_emlrtRSI;
    if (!obj->isInitialized) {
    } else {
      c_y = NULL;
      m32 = mxCreateCharArray(2, iv128);
      for (i = 0; i < 51; i++) {
        cv156[i] = cv157[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 51, m32, cv156);
      emlrtAssign(&c_y, m32);
      d_y = NULL;
      m32 = mxCreateCharArray(2, iv129);
      for (i = 0; i < 5; i++) {
        cv158[i] = cv159[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 5, m32, cv158);
      emlrtAssign(&d_y, m32);
      c_st.site = &cb_emlrtRSI;
      b_error(&c_st, message(&c_st, c_y, d_y, &emlrtMCI), &emlrtMCI);
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
      fullGrid[iv130[k]] = 0;
    }

    d_st.site = &hr_emlrtRSI;
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

    d_st.site = &hr_emlrtRSI;
    k = obj->pDataLinearIndices->size[0];
    obj->pDataLinearIndices->size[0] = i;
    emxEnsureCapacity(&d_st, (emxArray__common *)obj->pDataLinearIndices, k,
                      (int32_T)sizeof(real_T), &ob_emlrtRTEI);
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
  emxInit_creal_T(&st, &RLongFirst, 3, &ub_emlrtRTEI, TRUE);
  b_st.site = &cb_emlrtRSI;
  OFDMDemodulator_stepImpl(&b_st, obj, recv, RLongFirst);

  /* First half of long preamble */
  st.site = &br_emlrtRSI;
  obj = hPreambleDemod;
  if (!obj->isReleased) {
  } else {
    e_y = NULL;
    m32 = mxCreateCharArray(2, iv131);
    for (i = 0; i < 45; i++) {
      cv152[i] = cv153[i];
    }

    emlrtInitCharArrayR2013a(&st, 45, m32, cv152);
    emlrtAssign(&e_y, m32);
    f_y = NULL;
    m32 = mxCreateCharArray(2, iv132);
    for (i = 0; i < 4; i++) {
      cv154[i] = cv155[i];
    }

    emlrtInitCharArrayR2013a(&st, 4, m32, cv154);
    emlrtAssign(&f_y, m32);
    b_st.site = &cb_emlrtRSI;
    b_error(&b_st, message(&b_st, e_y, f_y, &emlrtMCI), &emlrtMCI);
  }

  if (!obj->isInitialized) {
    b_st.site = &cb_emlrtRSI;
    if (!obj->isInitialized) {
    } else {
      g_y = NULL;
      m32 = mxCreateCharArray(2, iv133);
      for (i = 0; i < 51; i++) {
        cv156[i] = cv157[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 51, m32, cv156);
      emlrtAssign(&g_y, m32);
      h_y = NULL;
      m32 = mxCreateCharArray(2, iv134);
      for (i = 0; i < 5; i++) {
        cv158[i] = cv159[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 5, m32, cv158);
      emlrtAssign(&h_y, m32);
      c_st.site = &cb_emlrtRSI;
      b_error(&c_st, message(&c_st, g_y, h_y, &emlrtMCI), &emlrtMCI);
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
      fullGrid[iv130[k]] = 0;
    }

    d_st.site = &hr_emlrtRSI;
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

    d_st.site = &hr_emlrtRSI;
    k = obj->pDataLinearIndices->size[0];
    obj->pDataLinearIndices->size[0] = i;
    emxEnsureCapacity(&d_st, (emxArray__common *)obj->pDataLinearIndices, k,
                      (int32_T)sizeof(real_T), &ob_emlrtRTEI);
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
  emxInit_creal_T(&st, &RLongSecond, 3, &vb_emlrtRTEI, TRUE);
  emxInit_creal_T(&st, &b_R, 3, &ob_emlrtRTEI, TRUE);
  b_st.site = &cb_emlrtRSI;
  OFDMDemodulator_stepImpl(&b_st, obj, b_recv, RLongSecond);

  /* Second half of long preamble */
  /*     %% Preamble Equalization */
  /*  Get Equalizer tap gains */
  k = RLongFirst->size[0];
  ii = RLongSecond->size[0];
  emlrtDimSizeEqCheckFastR2012b(k, ii, &q_emlrtECI, sp);
  st.site = &cr_emlrtRSI;
  k = b_R->size[0] * b_R->size[1] * b_R->size[2];
  b_R->size[0] = RLongFirst->size[0];
  b_R->size[1] = 2;
  b_R->size[2] = 1;
  emxEnsureCapacity(&st, (emxArray__common *)b_R, k, (int32_T)sizeof(creal_T),
                    &ob_emlrtRTEI);
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
    emlrtDynamicBoundsCheckFastR2012b(i, 1, ii, &eb_emlrtBCI, &st);
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

  b_st.site = &ds_emlrtRSI;
  b_rdivide(c_R, b_tx_longPreamble, RNormal);

  /*  Known is the original Long Preamble symbols  */
  /*  Scale channel gains */
  b_st.site = &es_emlrtRSI;
  d_abs(RNormal, dv12);
  memcpy(&dv13[0], &dv12[0], 106U * sizeof(real_T));
  b_st.site = &es_emlrtRSI;
  b_power(dv13, dv12);
  b_st.site = &es_emlrtRSI;
  c_mean(dv12, REnergy);
  b_st.site = &fs_emlrtRSI;
  d_mean(RNormal, RConj);
  for (k = 0; k < 53; k++) {
    RConj[k].im = -RConj[k].im;
    b_RConj[k] = RConj[k];
  }

  b_st.site = &gs_emlrtRSI;
  c_rdivide(b_RConj, REnergy, RConj);

  /*  Separate data from preambles */
  /* recvData = recv(length(tx.preambles)+1:length(tx.preambles)+(hDataDemod.NumSymbols)*(tx.FFTLength+hDataDemod.CyclicPrefixLength)); */
  emlrtVectorVectorIndexCheckR2012b(1280, 1, 1, 960, &p_emlrtECI, sp);

  /*  CG */
  /*  OFDM Demod */
  st.site = &dr_emlrtRSI;
  obj = hDataDemod;
  if (!obj->isReleased) {
  } else {
    i_y = NULL;
    m32 = mxCreateCharArray(2, iv135);
    for (i = 0; i < 45; i++) {
      cv152[i] = cv153[i];
    }

    emlrtInitCharArrayR2013a(&st, 45, m32, cv152);
    emlrtAssign(&i_y, m32);
    j_y = NULL;
    m32 = mxCreateCharArray(2, iv136);
    for (i = 0; i < 4; i++) {
      cv154[i] = cv155[i];
    }

    emlrtInitCharArrayR2013a(&st, 4, m32, cv154);
    emlrtAssign(&j_y, m32);
    b_st.site = &cb_emlrtRSI;
    b_error(&b_st, message(&b_st, i_y, j_y, &emlrtMCI), &emlrtMCI);
  }

  if (!obj->isInitialized) {
    b_st.site = &cb_emlrtRSI;
    if (!obj->isInitialized) {
    } else {
      k_y = NULL;
      m32 = mxCreateCharArray(2, iv137);
      for (i = 0; i < 51; i++) {
        cv156[i] = cv157[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 51, m32, cv156);
      emlrtAssign(&k_y, m32);
      l_y = NULL;
      m32 = mxCreateCharArray(2, iv138);
      for (i = 0; i < 5; i++) {
        cv158[i] = cv159[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 5, m32, cv158);
      emlrtAssign(&l_y, m32);
      c_st.site = &cb_emlrtRSI;
      b_error(&c_st, message(&c_st, k_y, l_y, &emlrtMCI), &emlrtMCI);
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
        b_fullGrid[iv130[ii] + (k << 6)] = 0;
      }

      b_fullGrid[32 + (k << 6)] = 0;
    }

    d_st.site = &us_emlrtRSI;
    d_st.site = &us_emlrtRSI;
    for (k = 0; k < 48; k++) {
      b_fullGrid[iv139[k]] = 2;
    }

    d_st.site = &hr_emlrtRSI;
    for (k = 0; k < 768; k++) {
      c_fullGrid[k] = (b_fullGrid[k] == 1);
    }

    eml_find(c_fullGrid, c_ii_data, ii_size);
    b_ii_size[0] = ii_size[0];
    i = ii_size[0];
    for (k = 0; k < i; k++) {
      d_ii_data[k] = c_ii_data[k];
    }

    d_st.site = &hr_emlrtRSI;
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
  st.site = &er_emlrtRSI;
  i = 0;
  for (ii = 0; ii < 12; ii++) {
    ia = 0;
    for (k = 0; k < 53; k++) {
      preambleGainsFull[i] = RConj[ia];
      b_st.site = &ig_emlrtRSI;
      ia++;
      b_st.site = &jg_emlrtRSI;
      i++;
    }
  }

  /*  Isolate pilot gains from preamble equalizer */
  /*  Needed to correctly adjust pilot gains */
  /*  Apply preamble equalizer gains to data and pilots */
  /* Correct pilots */
  for (i = 0; i < 3; i++) {
    iv140[i] = iv141[i];
  }

  for (k = 0; k < 3; k++) {
    b_Rraw[k] = Rraw->size[k];
  }

  emlrtSizeEqCheckNDR2012b(iv140, b_Rraw, &o_emlrtECI, sp);

  /* Correct data */
  /*     %% Pilot Equalization */
  /*  Get pilot-based equalizer gains */
  st.site = &fr_emlrtRSI;

  /*  Calculate Equalizer Taps with pilot symbols */
  /*  Calculate non-normalized channel gains */
  b_st.site = &xs_emlrtRSI;
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
  b_st.site = &ys_emlrtRSI;
  for (k = 0; k < 48; k++) {
    c_st.site = &qc_emlrtRSI;
    d_st.site = &en_emlrtRSI;
    a[k] = muDoubleScalarHypot(PilotNormal[k].re, PilotNormal[k].im);
  }

  b_st.site = &ys_emlrtRSI;
  c_st.site = &n_emlrtRSI;
  d_st.site = &jo_emlrtRSI;
  for (k = 0; k < 48; k++) {
    d_st.site = &o_emlrtRSI;
    PilotEnergy[k] = a[k] * a[k];
  }

  b_st.site = &at_emlrtRSI;
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

  b_st.site = &bt_emlrtRSI;
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

void equalizeOFDM(testPHYReceiveStackData *SD, const emlrtStack *sp, const
                  creal_T recv_data[1280], const real_T tx_longPreamble[53],
                  const real_T tx_pilots[48], const real_T
                  c_tx_pilotLocationsWithoutGuard[4], const real_T
                  tx_dataSubcarrierIndexies_data[48], const int32_T
                  tx_dataSubcarrierIndexies_size[2], const b_struct_T *estimate,
                  OFDMDemodulator_1 *hPreambleDemod, OFDMDemodulator_1
                  *hDataDemod, creal_T R[576], emxArray_creal_T *Rraw,
                  b_struct_T *b_estimate)
{
  *b_estimate = *estimate;
  b_equalizeOFDM(SD, sp, recv_data, tx_longPreamble, tx_pilots,
                 c_tx_pilotLocationsWithoutGuard, tx_dataSubcarrierIndexies_data,
                 tx_dataSubcarrierIndexies_size, b_estimate, hPreambleDemod,
                 hDataDemod, R, Rraw);
}

/* End of code generation (equalizeOFDM.c) */
