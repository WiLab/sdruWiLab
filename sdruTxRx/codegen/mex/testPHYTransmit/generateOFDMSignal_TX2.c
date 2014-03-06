/*
 * generateOFDMSignal_TX2.c
 *
 * Code generation for function 'generateOFDMSignal_TX2'
 *
 * C source code generated on: Thu Feb 27 11:47:47 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testPHYTransmit.h"
#include "generateOFDMSignal_TX2.h"
#include "OFDMModulator.h"
#include "CRCGenerator.h"
#include "BPSKModulator.h"
#include "Nondirect1.h"
#include "step.h"
#include "testPHYTransmit_emxutil.h"
#include "SystemCore.h"
#include "eml_int_forloop_overflow_check.h"
#include "OFDMletters2bits.h"
#include "testPHYTransmit_mexutil.h"
#include "testPHYTransmit_data.h"

/* Variable Definitions */
static emlrtRSInfo m_emlrtRSI = { 1, "mrdivide",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/mrdivide.p" };

static emlrtRSInfo n_emlrtRSI = { 15, "rdivide",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/rdivide.m" };

static emlrtRSInfo ub_emlrtRSI = { 15, "generateOFDMSignal_TX2",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/private/generateOFDMSignal_TX2.m" };

static emlrtRSInfo vb_emlrtRSI = { 33, "generateOFDMSignal_TX2",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/private/generateOFDMSignal_TX2.m" };

static emlrtRSInfo wb_emlrtRSI = { 40, "generateOFDMSignal_TX2",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/private/generateOFDMSignal_TX2.m" };

static emlrtRSInfo xb_emlrtRSI = { 52, "generateOFDMSignal_TX2",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/private/generateOFDMSignal_TX2.m" };

static emlrtRSInfo yb_emlrtRSI = { 63, "generateOFDMSignal_TX2",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/private/generateOFDMSignal_TX2.m" };

static emlrtRSInfo ac_emlrtRSI = { 64, "generateOFDMSignal_TX2",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/private/generateOFDMSignal_TX2.m" };

static emlrtRSInfo bc_emlrtRSI = { 67, "generateOFDMSignal_TX2",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/private/generateOFDMSignal_TX2.m" };

static emlrtRSInfo cc_emlrtRSI = { 68, "generateOFDMSignal_TX2",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/private/generateOFDMSignal_TX2.m" };

static emlrtRSInfo dc_emlrtRSI = { 71, "generateOFDMSignal_TX2",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/private/generateOFDMSignal_TX2.m" };

static emlrtRSInfo ec_emlrtRSI = { 74, "generateOFDMSignal_TX2",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/private/generateOFDMSignal_TX2.m" };

static emlrtRSInfo fc_emlrtRSI = { 81, "generateOFDMSignal_TX2",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/private/generateOFDMSignal_TX2.m" };

static emlrtRSInfo gc_emlrtRSI = { 90, "generateOFDMSignal_TX2",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/private/generateOFDMSignal_TX2.m" };

static emlrtRSInfo hc_emlrtRSI = { 93, "generateOFDMSignal_TX2",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/private/generateOFDMSignal_TX2.m" };

static emlrtRSInfo ic_emlrtRSI = { 98, "generateOFDMSignal_TX2",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/private/generateOFDMSignal_TX2.m" };

static emlrtRSInfo jc_emlrtRSI = { 99, "generateOFDMSignal_TX2",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/private/generateOFDMSignal_TX2.m" };

static emlrtRSInfo kc_emlrtRSI = { 100, "generateOFDMSignal_TX2",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/private/generateOFDMSignal_TX2.m" };

static emlrtRSInfo lc_emlrtRSI = { 101, "generateOFDMSignal_TX2",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/private/generateOFDMSignal_TX2.m" };

static emlrtRSInfo mc_emlrtRSI = { 104, "generateOFDMSignal_TX2",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/private/generateOFDMSignal_TX2.m" };

static emlrtRSInfo nc_emlrtRSI = { 115, "generateOFDMSignal_TX2",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/private/generateOFDMSignal_TX2.m" };

static emlrtRSInfo oc_emlrtRSI = { 123, "generateOFDMSignal_TX2",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/private/generateOFDMSignal_TX2.m" };

static emlrtRSInfo pc_emlrtRSI = { 128, "generateOFDMSignal_TX2",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/private/generateOFDMSignal_TX2.m" };

static emlrtRSInfo qc_emlrtRSI = { 129, "generateOFDMSignal_TX2",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/private/generateOFDMSignal_TX2.m" };

static emlrtRSInfo ul_emlrtRSI = { 132, "generateOFDMSignal_TX2",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/private/generateOFDMSignal_TX2.m" };

static emlrtRTEInfo c_emlrtRTEI = { 104, 1, "generateOFDMSignal_TX2",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/private/generateOFDMSignal_TX2.m" };

static emlrtRTEInfo d_emlrtRTEI = { 33, 1, "generateOFDMSignal_TX2",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/private/generateOFDMSignal_TX2.m" };

/* Function Definitions */
void b_generateOFDMSignal_TX2(const emlrtStack *sp, OFDMDemodulator *iobj_0,
  OFDMDemodulator_1 *iobj_1, OFDMDemodulator_1 **hPreambleDemod, OFDMDemodulator
  **hDataDemod, creal_T r[38400], b_struct_T *tx)
{
  OFDMModulator_1 hDataMod;
  OFDMModulator hPreambleMod;
  real_T a;
  int32_T i;
  creal_T shortPreambleOFDM[64];
  creal_T completeShortPreambleOFDM[160];
  creal_T longPreambleOFDM[64];
  creal_T completeLongPreambleOFDM[160];
  char_T inputPayloadMessage[80];
  static const char_T b_inputPayloadMessage[14] = { 'R', 'a', 'n', 'd', 'o', 'm',
    ' ', 'M', 'e', 's', 's', 'a', 'g', 'e' };

  static const char_T cv91[3] = { 'E', 'O', 'F' };

  real_T originalData[560];
  real_T x[560];
  int32_T ib;
  real_T b_originalData[560];
  commcodegen_CRCGenerator_12 hGen;
  real_T dataWithCRC[563];
  commcodegen_BPSKModulator_2 hMod;
  creal_T modData[563];
  real_T varargin_1[13];
  int32_T k;
  commcodegen_BPSKModulator_2 *obj;
  const mxArray *y;
  static const int32_T iv77[2] = { 1, 45 };

  const mxArray *m14;
  char_T cv92[45];
  static const char_T cv93[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C',
    'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv78[2] = { 1, 4 };

  char_T cv94[4];
  static const char_T cv95[4] = { 's', 't', 'e', 'p' };

  const mxArray *c_y;
  static const int32_T iv79[2] = { 1, 51 };

  char_T cv96[51];
  static const char_T cv97[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l',
    'e', 'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *d_y;
  static const int32_T iv80[2] = { 1, 5 };

  char_T cv98[5];
  static const char_T cv99[5] = { 's', 'e', 't', 'u', 'p' };

  static const int8_T value[8] = { 13, 1, 1, 1, 1, 1, 1, 1 };

  boolean_T anyInputSizeChanged;
  boolean_T exitg2;
  static const int8_T iv81[8] = { 13, 1, 1, 1, 1, 1, 1, 1 };

  creal_T varargout_1[13];
  creal_T b_modData[576];
  creal_T ofdmData[576];
  comm_PNSequence_9 hPN;
  comm_PNSequence_9 *b_obj;
  static const int8_T iv82[8] = { 1, 0, 0, 0, 1, 0, 0, 1 };

  static const int8_T iv83[7] = { 0, 0, 0, 0, 0, 0, 1 };

  int8_T pilot[12];
  uint8_T tmp;
  uint8_T tmp2;
  int8_T pilots[48];
  int32_T ia;
  real_T b_pilots[48];
  creal_T b_r[960];
  creal_T preambles[320];
  creal_T c_r[1280];
  OFDMDemodulator *object;
  int8_T x_data[4];
  int32_T exitg1;
  int32_T exponent;
  boolean_T b3;
  int32_T i15;
  const mxArray *e_y;
  static const int32_T iv84[2] = { 1, 13 };

  char_T cv100[13];
  static const char_T cv101[13] = { 'c', 'o', 'm', 'm', ':', 'O', 'F', 'D', 'M',
    ':', 'x', 'x', 'x' };

  OFDMDemodulator_1 *b_object;
  static const creal_T dcv4[53] = { { 0.0, 0.0 }, { 0.0, 0.0 }, { 1.0, 1.0 }, {
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

  static const int8_T iv85[53] = { 1, 1, -1, -1, 1, 1, -1, 1, -1, 1, 1, 1, 1, 1,
    1, -1, -1, 1, 1, -1, 1, -1, 1, 1, 1, 1, 0, 1, -1, -1, 1, 1, -1, 1, -1, 1, -1,
    -1, -1, -1, -1, 1, 1, -1, -1, 1, -1, 1, -1, 1, 1, 1, 1 };

  static const int8_T iv86[48] = { 1, 2, 3, 4, 5, 7, 8, 9, 10, 11, 12, 13, 14,
    15, 16, 17, 18, 19, 21, 22, 23, 24, 25, 26, 28, 29, 30, 31, 32, 33, 35, 36,
    37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 49, 50, 51, 52, 53 };

  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
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
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  g_st.prev = &f_st;
  g_st.tls = f_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInitStruct_OFDMModulator_1(sp, &hDataMod, &c_emlrtRTEI, TRUE);
  emxInitStruct_OFDMModulator(sp, &hPreambleMod, &d_emlrtRTEI, TRUE);

  /*  generateOFDMSignal: Generate OFDM signal based on the 802.11a standard. */
  /*  This function returns the time domain signal and a structure containing */
  /*  details about the signal itself.  This information is required by the */
  /*  receiver to operate correctly. */
  /* % System Parameters */
  /*  OFDM modulator FFT size */
  /*  Enable moving averages for estimates */
  /* 30     % Make larger to reduce underflow */
  /*  Message to transmit */
  /*  message is 80 characters max, so extra 3 for EOF and 1 for uniqueID */
  st.site = &ub_emlrtRSI;
  b_st.site = &y_emlrtRSI;
  emlrtRandu(&a, 1);
  b_st.site = &ab_emlrtRSI;
  b_st.site = &ab_emlrtRSI;
  c_st.site = &s_emlrtRSI;
  st.site = &ub_emlrtRSI;
  i = (int32_T)muDoubleScalarFloor(a * 128.0);
  emlrtDynamicBoundsCheckFastR2012b(i, 0, 255, &emlrtBCI, &st);

  /* Add additional character to differentiate messages */
  /* % Create Short Preamble */
  /*  % [-27:-17] */
  /*  % [-16:-1] */
  /*  % [0:15] */
  /*  [16:27] */
  /*  % Create modulator */
  /*  hPreambleMod = OFDMModulator(... */
  /*      'NumGuardBandCarriers', [6; 5],... */
  /*      'CyclicPrefixLength',   0,... */
  /*      'FFTLength' ,           FFTLength,... */
  /*      'NumSymbols',           1);     */
  /*  Create modulator */
  st.site = &vb_emlrtRSI;
  OFDMModulator_OFDMModulator(&hPreambleMod);

  /*  Modulate and scale */
  st.site = &wb_emlrtRSI;
  SystemCore_step(&st, &hPreambleMod, shortPreambleOFDM);
  st.site = &wb_emlrtRSI;
  for (i = 0; i < 64; i++) {
    shortPreambleOFDM[i].re *= 1.4719601443879744;
    shortPreambleOFDM[i].im *= 1.4719601443879744;
  }

  /*  Form 10 Short Preambles */
  memcpy(&completeShortPreambleOFDM[0], &shortPreambleOFDM[0], sizeof(creal_T) <<
         6);
  memcpy(&completeShortPreambleOFDM[64], &shortPreambleOFDM[0], sizeof(creal_T) <<
         6);
  memcpy(&completeShortPreambleOFDM[128], &shortPreambleOFDM[0], sizeof(creal_T)
         << 5);

  /* % Create Long Preamble */
  /*  Modulate */
  st.site = &xb_emlrtRSI;
  b_SystemCore_step(&st, &hPreambleMod, longPreambleOFDM);

  /*  Form 2 Long Preambles */
  memcpy(&completeLongPreambleOFDM[0], &longPreambleOFDM[32], sizeof(creal_T) <<
         5);
  memcpy(&completeLongPreambleOFDM[32], &longPreambleOFDM[0], sizeof(creal_T) <<
         6);
  memcpy(&completeLongPreambleOFDM[96], &longPreambleOFDM[0], sizeof(creal_T) <<
         6);

  /* % Generate Data */
  /*  Use string as message */
  for (i = 0; i < 14; i++) {
    inputPayloadMessage[i] = b_inputPayloadMessage[i];
  }

  a = muDoubleScalarFloor(a * 128.0);
  if (muDoubleScalarIsNaN(a) || muDoubleScalarIsInf(a)) {
    a = 0.0;
  } else {
    a = muDoubleScalarRem(a, 256.0);
  }

  if (a < 0.0) {
    inputPayloadMessage[14] = (int8_T)-(int8_T)(uint8_T)-a;
  } else {
    inputPayloadMessage[14] = (int8_T)(uint8_T)a;
  }

  for (i = 0; i < 3; i++) {
    inputPayloadMessage[i + 15] = cv91[i];
  }

  for (i = 0; i < 62; i++) {
    inputPayloadMessage[i + 18] = '-';
  }

  st.site = &yb_emlrtRSI;
  OFDMletters2bits(&st, inputPayloadMessage, originalData);
  st.site = &ac_emlrtRSI;
  for (i = 0; i < 80; i++) {
    for (ib = 0; ib < 7; ib++) {
      x[ib + 7 * i] = originalData[i + 80 * ib];
    }
  }

  memcpy(&b_originalData[0], &x[0], 560U * sizeof(real_T));

  /*  Generate CRC */
  st.site = &bc_emlrtRSI;
  c_CRCGenerator_CRCGenerator(&hGen);
  st.site = &cc_emlrtRSI;
  h_SystemCore_step(&st, &hGen, b_originalData, dataWithCRC);

  /*  Add CRC */
  /*  Construct modulator for each subcarrier */
  st.site = &dc_emlrtRSI;
  c_BPSKModulator_BPSKModulator(&hMod);

  /*  BPSK */
  /*  Apply modulator for each subcarrier */
  st.site = &ec_emlrtRSI;
  i_SystemCore_step(&st, &hMod, dataWithCRC, modData);

  /*  Pad IFFT */
  st.site = &fc_emlrtRSI;
  b_st.site = &y_emlrtRSI;
  emlrtRandu(varargin_1, 13);
  for (k = 0; k < 13; k++) {
    b_st.site = &ab_emlrtRSI;
    b_st.site = &ab_emlrtRSI;
    c_st.site = &s_emlrtRSI;
    varargin_1[k] = muDoubleScalarFloor(varargin_1[k] * 2.0);
  }

  st.site = &fc_emlrtRSI;
  obj = &hMod;
  if (!obj->isReleased) {
  } else {
    y = NULL;
    m14 = mxCreateCharArray(2, iv77);
    for (i = 0; i < 45; i++) {
      cv92[i] = cv93[i];
    }

    emlrtInitCharArrayR2013a(&st, 45, m14, cv92);
    emlrtAssign(&y, m14);
    b_y = NULL;
    m14 = mxCreateCharArray(2, iv78);
    for (i = 0; i < 4; i++) {
      cv94[i] = cv95[i];
    }

    emlrtInitCharArrayR2013a(&st, 4, m14, cv94);
    emlrtAssign(&b_y, m14);
    b_st.site = &gb_emlrtRSI;
    c_error(&b_st, message(&b_st, y, b_y, &emlrtMCI), &emlrtMCI);
  }

  if (!obj->isInitialized) {
    b_st.site = &gb_emlrtRSI;
    if (!obj->isInitialized) {
    } else {
      c_y = NULL;
      m14 = mxCreateCharArray(2, iv79);
      for (i = 0; i < 51; i++) {
        cv96[i] = cv97[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 51, m14, cv96);
      emlrtAssign(&c_y, m14);
      d_y = NULL;
      m14 = mxCreateCharArray(2, iv80);
      for (i = 0; i < 5; i++) {
        cv98[i] = cv99[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 5, m14, cv98);
      emlrtAssign(&d_y, m14);
      c_st.site = &gb_emlrtRSI;
      c_error(&c_st, message(&c_st, c_y, d_y, &emlrtMCI), &emlrtMCI);
    }

    c_st.site = &gb_emlrtRSI;
    obj->isInitialized = TRUE;
    d_st.site = &hb_emlrtRSI;
    c_st.site = &gb_emlrtRSI;
    d_st.site = &gb_emlrtRSI;
    e_st.site = &hb_emlrtRSI;
    d_st.site = &gb_emlrtRSI;
    e_st.site = &hb_emlrtRSI;
    c_st.site = &gb_emlrtRSI;
    d_st.site = &gb_emlrtRSI;
    d_st.site = &gb_emlrtRSI;
    d_st.site = &gb_emlrtRSI;
    e_st.site = &hb_emlrtRSI;
    c_st.site = &gb_emlrtRSI;
    d_st.site = &gb_emlrtRSI;
    for (i = 0; i < 8; i++) {
      obj->inputVarSize1[i] = (uint32_T)value[i];
    }

    e_st.site = &hb_emlrtRSI;
    c_st.site = &gb_emlrtRSI;
    d_st.site = &gb_emlrtRSI;
    c_st.site = &gb_emlrtRSI;
    d_st.site = &gb_emlrtRSI;
    e_st.site = &gb_emlrtRSI;
    e_st.site = &gb_emlrtRSI;
    f_st.site = &jg_emlrtRSI;
    c_st.site = &gb_emlrtRSI;
    d_st.site = &gb_emlrtRSI;
    d_st.site = &gb_emlrtRSI;
    e_st.site = &jg_emlrtRSI;
    c_st.site = &gb_emlrtRSI;
    c_st.site = &gb_emlrtRSI;
    c_st.site = &gb_emlrtRSI;
    c_st.site = &gb_emlrtRSI;
    d_st.site = &jg_emlrtRSI;
    d_st.site = &jg_emlrtRSI;
    e_st.site = &hb_emlrtRSI;
    c_st.site = &gb_emlrtRSI;
    d_st.site = &jg_emlrtRSI;
    e_st.site = NULL;
  }

  b_st.site = &gb_emlrtRSI;
  b_st.site = &gb_emlrtRSI;
  b_st.site = &gb_emlrtRSI;
  c_st.site = &gb_emlrtRSI;
  c_st.site = &gb_emlrtRSI;
  d_st.site = &jg_emlrtRSI;
  b_st.site = &gb_emlrtRSI;
  b_st.site = &gb_emlrtRSI;
  anyInputSizeChanged = FALSE;
  k = 0;
  exitg2 = FALSE;
  while ((exitg2 == FALSE) && (k < 8)) {
    if (obj->inputVarSize1[k] != (uint32_T)iv81[k]) {
      anyInputSizeChanged = TRUE;
      c_st.site = &gb_emlrtRSI;
      for (i = 0; i < 8; i++) {
        obj->inputVarSize1[i] = (uint32_T)value[i];
      }

      d_st.site = &hb_emlrtRSI;
      exitg2 = TRUE;
    } else {
      k++;
    }
  }

  if (anyInputSizeChanged) {
    b_st.site = &gb_emlrtRSI;
    b_st.site = &gb_emlrtRSI;
  }

  b_st.site = &gb_emlrtRSI;
  c_st.site = &gb_emlrtRSI;
  c_st.site = &gb_emlrtRSI;
  d_st.site = &jg_emlrtRSI;
  b_st.site = &gb_emlrtRSI;
  b_st.site = &gb_emlrtRSI;
  b_st.site = &gb_emlrtRSI;
  f_Nondirect_stepImpl(obj, varargin_1, varargout_1);
  memcpy(&b_modData[0], &modData[0], 563U * sizeof(creal_T));
  memcpy(&b_modData[563], &varargout_1[0], 13U * sizeof(creal_T));

  /*  Calculate required data sizes for correct receiver operation */
  /*  Save desired message size */
  /*  Save number of transmitted frames */
  /*  Convert data into subcarrier streams */
  st.site = &gc_emlrtRSI;
  memcpy(&ofdmData[0], &b_modData[0], 576U * sizeof(creal_T));

  /*  Create Pilots */
  st.site = &hc_emlrtRSI;
  b_obj = &hPN;

  /* System object Constructor function: comm.PNSequence */
  b_obj->S0_isInitialized = FALSE;
  b_obj->S1_isReleased = FALSE;
  for (i = 0; i < 8; i++) {
    b_obj->P0_Polynomial[i] = (uint8_T)iv82[i];
  }

  for (i = 0; i < 7; i++) {
    b_obj->P1_IniState[i] = 1;
    b_obj->P2_Mask[i] = (uint8_T)iv83[i];
  }

  st.site = &ic_emlrtRSI;
  b_obj = &hPN;
  if (!b_obj->S0_isInitialized) {
    b_obj->S0_isInitialized = TRUE;
    if (b_obj->S1_isReleased) {
      emlrtErrorWithMessageIdR2012b(&st, &y_emlrtRTEI,
        "MATLAB:system:runtimeMethodCalledWhenReleasedCodegen", 0);
    }

    b_st.site = NULL;
    b_st.site = NULL;

    /* System object Initialization function: comm.PNSequence */
    for (ib = 0; ib < 7; ib++) {
      b_obj->W0_shiftReg[ib] = b_obj->P1_IniState[ib];
      emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, &b_st);
    }
  }

  b_st.site = NULL;

  /* System object Outputs function: comm.PNSequence */
  for (ib = 0; ib < 12; ib++) {
    tmp = 0;
    for (i = 0; i < 7; i++) {
      tmp = (uint8_T)((uint32_T)tmp + (uint8_T)((uint32_T)b_obj->P0_Polynomial[i
        + 1] * b_obj->W0_shiftReg[i]));
    }

    tmp &= 1;
    tmp2 = 0;
    for (i = 0; i < 7; i++) {
      tmp2 = (uint8_T)((uint32_T)tmp2 + (uint8_T)((uint32_T)b_obj->W0_shiftReg[i]
        * b_obj->P2_Mask[i]));
    }

    pilot[ib] = (int8_T)(tmp2 & 1);
    for (i = 5; i > -1; i += -1) {
      b_obj->W0_shiftReg[i + 1] = b_obj->W0_shiftReg[i];
    }

    b_obj->W0_shiftReg[0U] = tmp;
  }

  /*  Create pilot */
  st.site = &jc_emlrtRSI;
  ib = 0;
  for (i = 0; i < 4; i++) {
    ia = 0;
    for (k = 0; k < 12; k++) {
      pilots[ib] = pilot[ia];
      b_st.site = &qg_emlrtRSI;
      ia++;
      b_st.site = &rg_emlrtRSI;
      ib++;
    }
  }

  /*  Expand to all pilot tones */
  st.site = &kc_emlrtRSI;
  for (i = 0; i < 12; i++) {
    for (ib = 0; ib < 4; ib++) {
      b_pilots[ib + (i << 2)] = 2.0 * (real_T)(pilots[i + 12 * ib] < 1) - 1.0;
    }
  }

  /*  Bipolar to unipolar */
  st.site = &lc_emlrtRSI;
  for (i = 0; i < 12; i++) {
    b_pilots[3 + (i << 2)] = -b_pilots[3 + (i << 2)];
  }

  /*  Invert last pilot */
  /*  Construct Modulator */
  st.site = &mc_emlrtRSI;
  b_OFDMModulator_OFDMModulator(&st, &hDataMod);

  /*  Modulate */
  st.site = &nc_emlrtRSI;
  e_SystemCore_step(&st, &hDataMod, ofdmData, b_pilots, b_r);

  /*  Add preambles to data */
  memcpy(&preambles[0], &completeShortPreambleOFDM[0], 160U * sizeof(creal_T));
  memcpy(&preambles[160], &completeLongPreambleOFDM[0], 160U * sizeof(creal_T));
  memcpy(&c_r[0], &preambles[0], 320U * sizeof(creal_T));
  memcpy(&c_r[320], &b_r[0], 960U * sizeof(creal_T));

  /*  Repeat frame (Used in debugging) */
  st.site = &oc_emlrtRSI;
  ib = 0;
  for (i = 0; i < 30; i++) {
    ia = 0;
    for (k = 0; k < 1280; k++) {
      r[ib] = c_r[ia];
      b_st.site = &qg_emlrtRSI;
      ia++;
      b_st.site = &rg_emlrtRSI;
      ib++;
    }
  }

  /*  Save Demodulator object data for receiver */
  /* hDataDemod = get(OFDMDemodulator(hDataMod)); */
  /* hPreambleDemod = get(OFDMDemodulator(hPreambleMod)); */
  st.site = &pc_emlrtRSI;
  object = iobj_0;
  *hDataDemod = object;
  b_st.site = &mj_emlrtRSI;
  object = *hDataDemod;
  c_st.site = &db_emlrtRSI;
  d_st.site = &fb_emlrtRSI;
  d_st.site = &fb_emlrtRSI;
  object->isInitialized = FALSE;
  object->isReleased = FALSE;
  e_st.site = &gb_emlrtRSI;
  f_st.site = &hb_emlrtRSI;
  e_st.site = &gb_emlrtRSI;
  f_st.site = &hb_emlrtRSI;
  c_st.site = &db_emlrtRSI;
  c_st.site = &eb_emlrtRSI;
  b_st.site = &nj_emlrtRSI;
  c_st.site = &hb_emlrtRSI;
  c_st.site = &hb_emlrtRSI;
  b_st.site = &oj_emlrtRSI;
  c_st.site = &hb_emlrtRSI;
  c_st.site = &hb_emlrtRSI;
  b_st.site = &pj_emlrtRSI;
  c_st.site = &hb_emlrtRSI;
  c_st.site = &hb_emlrtRSI;
  b_st.site = &qj_emlrtRSI;
  c_st.site = &hb_emlrtRSI;
  b_st.site = &rj_emlrtRSI;
  c_st.site = &hb_emlrtRSI;
  c_st.site = &hb_emlrtRSI;
  b_st.site = &sj_emlrtRSI;
  c_st.site = &hb_emlrtRSI;
  b_st.site = &tj_emlrtRSI;
  c_st.site = &hb_emlrtRSI;

  /* OFDMBase Base object for OFDMModulator and OFDMDemodulator System objects */
  /*  Copyright 2013 The MathWorks, Inc. */
  /* FFTLength FFT length */
  /*  Specify the IFFT length. This property can be set to an integer */
  /*  scalar. The value must be a power of two. The default value of */
  /*  this property is 64. */
  /* CyclicPrefixLength Cyclic prefix length */
  /*  Specify the cyclic prefix length. This property can be set to a */
  /*  non-negative interher scalar. The default value of this property is 16. */
  /* NumGuardBandCarriers Number of guard bands */
  /*  Specify the lower and upper guard bands in frequency domain.This */
  /*  property can be set to a non-nagative two-element vector.  */
  /*  The default setting of this property is [6 5]. */
  /* NumSymbols Number of OFDM symbols */
  /*  Specify the number of OFDM symbols at the output. The default value  */
  /*  of this property is 1. */
  /* PilotCarrierIndices Pilot subcarrier indices */
  /*  Specify the locations where pilots are to be inserted. You can */
  /*  set this property to a numeric scalar, column vector, matrix, or */
  /*  3-D array. The defalut value of the property is [-21; -7; 7; 21]. */
  /*  Nontunable ideally */
  /*  Constructor */
  /*      validateattributes(fftLen, {'numeric'}, ... */
  /*          {'real','scalar','integer','finite','>=',8}, ... */
  /*          [class(obj) '.' propName], propName);   */
  /*      validateattributes(CPLen, {'numeric'}, ... */
  /*          {'real','row','integer','nonnegative','finite'}, ... */
  /*          [class(obj) '.' propName], propName);   */
  /*      validateattributes(guardBands, {'numeric'}, ... */
  /*          {'real','integer','nonnegative','finite','size', [2, 1]}, ... */
  /*          [class(obj) '.' propName], propName);   */
  /*      validateattributes(numSym, {'numeric'}, ... */
  /*          {'real','scalar','integer','positive','finite'}, ... */
  /*          [class(obj) '.' propName], propName);   */
  /*      validateattributes(pilotIdx, {'numeric'}, ... */
  /*          {'real','integer','positive','finite','3d'}, ... */
  /*          [class(obj) '.' propName], propName);   */
  /*  Check the 3rd dimension for numTx */
  d_st.site = &vh_emlrtRSI;
  e_st.site = &wh_emlrtRSI;
  for (k = 0; k < 4; k++) {
    x_data[k] = (int8_T)(12 + 14 * k);
  }

  f_st.site = &ni_emlrtRSI;
  i = 0;
  f_st.site = &li_emlrtRSI;
  f_st.site = &ki_emlrtRSI;
  k = 1;
  while (k <= 4) {
    ib = x_data[k - 1];
    do {
      exitg1 = 0;
      f_st.site = &ji_emlrtRSI;
      k++;
      if (k > 4) {
        exitg1 = 1;
      } else {
        f_st.site = &ii_emlrtRSI;
        frexp((real_T)ib / 2.0, &exponent);
        if (!(muDoubleScalarAbs(ib - x_data[k - 1]) < ldexp(1.0, exponent - 53)))
        {
          exitg1 = 1;
        }
      }
    } while (exitg1 == 0);

    f_st.site = &hi_emlrtRSI;
    i++;
    x_data[i - 1] = (int8_T)ib;
    f_st.site = &gi_emlrtRSI;
    f_st.site = &gi_emlrtRSI;
  }

  f_st.site = &ci_emlrtRSI;
  f_st.site = &bi_emlrtRSI;
  f_st.site = &xh_emlrtRSI;
  if (1 > i) {
    b3 = FALSE;
  } else {
    b3 = (i > 2147483646);
  }

  if (b3) {
    g_st.site = &dg_emlrtRSI;
    check_forloop_overflow_error(&g_st);
  }

  d_st.site = &vh_emlrtRSI;
  d_st.site = &vh_emlrtRSI;
  if (1 > i) {
    i15 = 0;
  } else {
    i15 = i;
  }

  if (!(4 != i15)) {
  } else {
    e_y = NULL;
    m14 = mxCreateCharArray(2, iv84);
    for (i = 0; i < 13; i++) {
      cv100[i] = cv101[i];
    }

    emlrtInitCharArrayR2013a(&d_st, 13, m14, cv100);
    emlrtAssign(&e_y, m14);
    e_st.site = &um_emlrtRSI;
    c_error(&e_st, b_message(&e_st, e_y, &g_emlrtMCI), &g_emlrtMCI);
  }

  /*  Error message:  */
  /*  If pilot index is 2-D, the indices per symbol must be unique; */
  /*  If pilot index is 3-D, the indices across transmit antennas per symbol must be unique. */
  c_st.site = &hb_emlrtRSI;
  st.site = &qc_emlrtRSI;
  b_object = iobj_1;
  *hPreambleDemod = b_object;
  b_st.site = &mj_emlrtRSI;
  b_object = *hPreambleDemod;
  c_st.site = &db_emlrtRSI;
  d_st.site = &fb_emlrtRSI;
  d_st.site = &fb_emlrtRSI;
  b_object->isInitialized = FALSE;
  b_object->isReleased = FALSE;
  e_st.site = &gb_emlrtRSI;
  f_st.site = &hb_emlrtRSI;
  e_st.site = &gb_emlrtRSI;
  f_st.site = &hb_emlrtRSI;
  c_st.site = &db_emlrtRSI;
  c_st.site = &eb_emlrtRSI;
  b_st.site = &nj_emlrtRSI;
  c_st.site = &hb_emlrtRSI;
  c_st.site = &hb_emlrtRSI;
  b_st.site = &oj_emlrtRSI;
  c_st.site = &hb_emlrtRSI;
  c_st.site = &hb_emlrtRSI;
  b_st.site = &pj_emlrtRSI;
  c_st.site = &hb_emlrtRSI;
  c_st.site = &hb_emlrtRSI;
  b_st.site = &qj_emlrtRSI;
  c_st.site = &hb_emlrtRSI;
  b_st.site = &rj_emlrtRSI;
  c_st.site = &hb_emlrtRSI;
  c_st.site = &hb_emlrtRSI;
  b_st.site = &sj_emlrtRSI;
  c_st.site = &hb_emlrtRSI;

  /*  Calcuate OFDM frequency bin size */
  st.site = &ul_emlrtRSI;
  b_st.site = &m_emlrtRSI;
  c_st.site = &n_emlrtRSI;

  /*  Calculate locations of pilots without guardbands */
  /*  Calculate locations of subcarrier datastreams without guardbands */
  /* Remove guardband offsets */
  /* Remove index offsets for pilots and guardbands */
  /* dataSubcarrierIndexies([pilotLocationsWithoutGuardbands;DCNullLocation]) = [];%Remove pilot and DCNull locations */
  /*  Preallocate values needed later */
  /*  Create return structure */
  for (i = 0; i < 560; i++) {
    tx->originalData[i] = b_originalData[i];
  }

  for (i = 0; i < 64; i++) {
    tx->shortPreambleOFDM[i] = shortPreambleOFDM[i];
  }

  for (i = 0; i < 160; i++) {
    tx->completeShortPreambleOFDM[i] = completeShortPreambleOFDM[i];
  }

  for (i = 0; i < 53; i++) {
    tx->shortPreamble[i] = dcv4[i];
  }

  for (i = 0; i < 53; i++) {
    tx->longPreamble[i] = iv85[i];
  }

  for (i = 0; i < 64; i++) {
    tx->longPreambleOFDM[i] = longPreambleOFDM[i];
  }

  for (i = 0; i < 160; i++) {
    tx->completeLongPreambleOFDM[i] = completeLongPreambleOFDM[i];
  }

  for (i = 0; i < 48; i++) {
    tx->pilots[i] = b_pilots[i];
  }

  for (i = 0; i < 320; i++) {
    tx->preambles[i] = preambles[i];
  }

  for (i = 0; i < 4; i++) {
    tx->pilotLocationsWithoutGuardbands[i] = 6.0 + 14.0 * (real_T)i;
  }

  tx->dataSubcarrierIndexies.size[0] = 1;
  tx->dataSubcarrierIndexies.size[1] = 48;
  for (i = 0; i < 48; i++) {
    tx->dataSubcarrierIndexies.data[i] = iv86[i];
  }

  tx->samplingFreq = 5.0E+6;
  tx->FFTLength = 64.0;
  tx->enableMA = TRUE;
  tx->numCarriers = 48.0;
  tx->padBits = 13.0;
  tx->numSamples = 576.0;
  tx->messageCharacters = 80.0;
  tx->numFrames = 30.0;
  tx->frameLength = 1280.0;
  tx->freqBin = 78125.0;
  tx->DecimationFactor = 0.0;
  tx->receiveBufferLength = 0.0;

  /*                              padBits: 13 */
  /*                           numSamples: 576 */
  /*                    messageCharacters: 80 */
  /*                            numFrames: 1000 */
  /*                          frameLength: 1280 */
  /*                              freqBin: 312500 */
  /*                           hDataDemod: [1x1 struct] */
  /*                       hPreambleDemod: [1x1 struct] */
  st.site = NULL;
  c_Destructor(&hPN);
  emxFreeStruct_OFDMModulator(&hPreambleMod);
  emxFreeStruct_OFDMModulator_1(&hDataMod);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void generateOFDMSignal_TX2(const emlrtStack *sp, OFDMDemodulator *iobj_0,
  OFDMDemodulator_1 *iobj_1, OFDMDemodulator_1 **hPreambleDemod, OFDMDemodulator
  **hDataDemod, creal_T r[38400], b_struct_T *tx)
{
  OFDMModulator_1 hDataMod;
  OFDMModulator hPreambleMod;
  real_T a;
  int32_T i;
  creal_T shortPreambleOFDM[64];
  creal_T completeShortPreambleOFDM[160];
  creal_T longPreambleOFDM[64];
  creal_T completeLongPreambleOFDM[160];
  char_T inputPayloadMessage[80];
  static const char_T b_inputPayloadMessage[18] = { 'U', 'n', 'i', 'm', 'p', 'o',
    'r', 't', 'a', 'n', 't', 'M', 'e', 's', 's', 'a', 'g', 'e' };

  static const char_T cv0[3] = { 'E', 'O', 'F' };

  real_T originalData[560];
  real_T x[560];
  int32_T ib;
  real_T b_originalData[560];
  commcodegen_CRCGenerator hGen;
  real_T dataWithCRC[563];
  commcodegen_BPSKModulator hMod;
  creal_T modData[563];
  real_T varargin_1[13];
  int32_T k;
  commcodegen_BPSKModulator *obj;
  const mxArray *y;
  static const int32_T iv0[2] = { 1, 45 };

  const mxArray *m0;
  char_T cv1[45];
  static const char_T cv2[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C',
    'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv1[2] = { 1, 4 };

  char_T cv3[4];
  static const char_T cv4[4] = { 's', 't', 'e', 'p' };

  const mxArray *c_y;
  static const int32_T iv2[2] = { 1, 51 };

  char_T cv5[51];
  static const char_T cv6[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l',
    'e', 'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *d_y;
  static const int32_T iv3[2] = { 1, 5 };

  char_T cv7[5];
  static const char_T cv8[5] = { 's', 'e', 't', 'u', 'p' };

  static const int8_T value[8] = { 13, 1, 1, 1, 1, 1, 1, 1 };

  boolean_T anyInputSizeChanged;
  boolean_T exitg2;
  static const int8_T iv4[8] = { 13, 1, 1, 1, 1, 1, 1, 1 };

  creal_T varargout_1[13];
  creal_T b_modData[576];
  creal_T ofdmData[576];
  comm_PNSequence_2 hPN;
  comm_PNSequence_2 *b_obj;
  static const int8_T iv5[8] = { 1, 0, 0, 0, 1, 0, 0, 1 };

  static const int8_T iv6[7] = { 0, 0, 0, 0, 0, 0, 1 };

  int8_T pilot[12];
  uint8_T tmp;
  uint8_T tmp2;
  int8_T pilots[48];
  int32_T ia;
  real_T b_pilots[48];
  creal_T b_r[960];
  creal_T preambles[320];
  creal_T c_r[1280];
  OFDMDemodulator *object;
  int8_T x_data[4];
  int32_T exitg1;
  int32_T exponent;
  boolean_T b0;
  int32_T i0;
  const mxArray *e_y;
  static const int32_T iv7[2] = { 1, 13 };

  char_T cv9[13];
  static const char_T cv10[13] = { 'c', 'o', 'm', 'm', ':', 'O', 'F', 'D', 'M',
    ':', 'x', 'x', 'x' };

  OFDMDemodulator_1 *b_object;
  static const creal_T dcv0[53] = { { 0.0, 0.0 }, { 0.0, 0.0 }, { 1.0, 1.0 }, {
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

  static const int8_T iv8[53] = { 1, 1, -1, -1, 1, 1, -1, 1, -1, 1, 1, 1, 1, 1,
    1, -1, -1, 1, 1, -1, 1, -1, 1, 1, 1, 1, 0, 1, -1, -1, 1, 1, -1, 1, -1, 1, -1,
    -1, -1, -1, -1, 1, 1, -1, -1, 1, -1, 1, -1, 1, 1, 1, 1 };

  static const int8_T iv9[48] = { 1, 2, 3, 4, 5, 7, 8, 9, 10, 11, 12, 13, 14, 15,
    16, 17, 18, 19, 21, 22, 23, 24, 25, 26, 28, 29, 30, 31, 32, 33, 35, 36, 37,
    38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 49, 50, 51, 52, 53 };

  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
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
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  g_st.prev = &f_st;
  g_st.tls = f_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInitStruct_OFDMModulator_1(sp, &hDataMod, &c_emlrtRTEI, TRUE);
  emxInitStruct_OFDMModulator(sp, &hPreambleMod, &d_emlrtRTEI, TRUE);

  /*  generateOFDMSignal: Generate OFDM signal based on the 802.11a standard. */
  /*  This function returns the time domain signal and a structure containing */
  /*  details about the signal itself.  This information is required by the */
  /*  receiver to operate correctly. */
  /* % System Parameters */
  /*  OFDM modulator FFT size */
  /*  Enable moving averages for estimates */
  /* 30     % Make larger to reduce underflow */
  /*  Message to transmit */
  /*  message is 80 characters max, so extra 3 for EOF and 1 for uniqueID */
  st.site = &ub_emlrtRSI;
  b_st.site = &y_emlrtRSI;
  emlrtRandu(&a, 1);
  b_st.site = &ab_emlrtRSI;
  b_st.site = &ab_emlrtRSI;
  c_st.site = &s_emlrtRSI;
  st.site = &ub_emlrtRSI;
  i = (int32_T)muDoubleScalarFloor(a * 128.0);
  emlrtDynamicBoundsCheckFastR2012b(i, 0, 255, &emlrtBCI, &st);

  /* Add additional character to differentiate messages */
  /* % Create Short Preamble */
  /*  % [-27:-17] */
  /*  % [-16:-1] */
  /*  % [0:15] */
  /*  [16:27] */
  /*  % Create modulator */
  /*  hPreambleMod = OFDMModulator(... */
  /*      'NumGuardBandCarriers', [6; 5],... */
  /*      'CyclicPrefixLength',   0,... */
  /*      'FFTLength' ,           FFTLength,... */
  /*      'NumSymbols',           1);     */
  /*  Create modulator */
  st.site = &vb_emlrtRSI;
  OFDMModulator_OFDMModulator(&hPreambleMod);

  /*  Modulate and scale */
  st.site = &wb_emlrtRSI;
  SystemCore_step(&st, &hPreambleMod, shortPreambleOFDM);
  st.site = &wb_emlrtRSI;
  for (i = 0; i < 64; i++) {
    shortPreambleOFDM[i].re *= 1.4719601443879744;
    shortPreambleOFDM[i].im *= 1.4719601443879744;
  }

  /*  Form 10 Short Preambles */
  memcpy(&completeShortPreambleOFDM[0], &shortPreambleOFDM[0], sizeof(creal_T) <<
         6);
  memcpy(&completeShortPreambleOFDM[64], &shortPreambleOFDM[0], sizeof(creal_T) <<
         6);
  memcpy(&completeShortPreambleOFDM[128], &shortPreambleOFDM[0], sizeof(creal_T)
         << 5);

  /* % Create Long Preamble */
  /*  Modulate */
  st.site = &xb_emlrtRSI;
  b_SystemCore_step(&st, &hPreambleMod, longPreambleOFDM);

  /*  Form 2 Long Preambles */
  memcpy(&completeLongPreambleOFDM[0], &longPreambleOFDM[32], sizeof(creal_T) <<
         5);
  memcpy(&completeLongPreambleOFDM[32], &longPreambleOFDM[0], sizeof(creal_T) <<
         6);
  memcpy(&completeLongPreambleOFDM[96], &longPreambleOFDM[0], sizeof(creal_T) <<
         6);

  /* % Generate Data */
  /*  Use string as message */
  for (i = 0; i < 18; i++) {
    inputPayloadMessage[i] = b_inputPayloadMessage[i];
  }

  a = muDoubleScalarFloor(a * 128.0);
  if (muDoubleScalarIsNaN(a) || muDoubleScalarIsInf(a)) {
    a = 0.0;
  } else {
    a = muDoubleScalarRem(a, 256.0);
  }

  if (a < 0.0) {
    inputPayloadMessage[18] = (int8_T)-(int8_T)(uint8_T)-a;
  } else {
    inputPayloadMessage[18] = (int8_T)(uint8_T)a;
  }

  for (i = 0; i < 3; i++) {
    inputPayloadMessage[i + 19] = cv0[i];
  }

  for (i = 0; i < 58; i++) {
    inputPayloadMessage[i + 22] = '-';
  }

  st.site = &yb_emlrtRSI;
  OFDMletters2bits(&st, inputPayloadMessage, originalData);
  st.site = &ac_emlrtRSI;
  for (i = 0; i < 80; i++) {
    for (ib = 0; ib < 7; ib++) {
      x[ib + 7 * i] = originalData[i + 80 * ib];
    }
  }

  memcpy(&b_originalData[0], &x[0], 560U * sizeof(real_T));

  /*  Generate CRC */
  st.site = &bc_emlrtRSI;
  CRCGenerator_CRCGenerator(&hGen);
  st.site = &cc_emlrtRSI;
  c_SystemCore_step(&st, &hGen, b_originalData, dataWithCRC);

  /*  Add CRC */
  /*  Construct modulator for each subcarrier */
  st.site = &dc_emlrtRSI;
  BPSKModulator_BPSKModulator(&hMod);

  /*  BPSK */
  /*  Apply modulator for each subcarrier */
  st.site = &ec_emlrtRSI;
  d_SystemCore_step(&st, &hMod, dataWithCRC, modData);

  /*  Pad IFFT */
  st.site = &fc_emlrtRSI;
  b_st.site = &y_emlrtRSI;
  emlrtRandu(varargin_1, 13);
  for (k = 0; k < 13; k++) {
    b_st.site = &ab_emlrtRSI;
    b_st.site = &ab_emlrtRSI;
    c_st.site = &s_emlrtRSI;
    varargin_1[k] = muDoubleScalarFloor(varargin_1[k] * 2.0);
  }

  st.site = &fc_emlrtRSI;
  obj = &hMod;
  if (!obj->isReleased) {
  } else {
    y = NULL;
    m0 = mxCreateCharArray(2, iv0);
    for (i = 0; i < 45; i++) {
      cv1[i] = cv2[i];
    }

    emlrtInitCharArrayR2013a(&st, 45, m0, cv1);
    emlrtAssign(&y, m0);
    b_y = NULL;
    m0 = mxCreateCharArray(2, iv1);
    for (i = 0; i < 4; i++) {
      cv3[i] = cv4[i];
    }

    emlrtInitCharArrayR2013a(&st, 4, m0, cv3);
    emlrtAssign(&b_y, m0);
    b_st.site = &gb_emlrtRSI;
    c_error(&b_st, message(&b_st, y, b_y, &emlrtMCI), &emlrtMCI);
  }

  if (!obj->isInitialized) {
    b_st.site = &gb_emlrtRSI;
    if (!obj->isInitialized) {
    } else {
      c_y = NULL;
      m0 = mxCreateCharArray(2, iv2);
      for (i = 0; i < 51; i++) {
        cv5[i] = cv6[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 51, m0, cv5);
      emlrtAssign(&c_y, m0);
      d_y = NULL;
      m0 = mxCreateCharArray(2, iv3);
      for (i = 0; i < 5; i++) {
        cv7[i] = cv8[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 5, m0, cv7);
      emlrtAssign(&d_y, m0);
      c_st.site = &gb_emlrtRSI;
      c_error(&c_st, message(&c_st, c_y, d_y, &emlrtMCI), &emlrtMCI);
    }

    c_st.site = &gb_emlrtRSI;
    obj->isInitialized = TRUE;
    d_st.site = &hb_emlrtRSI;
    c_st.site = &gb_emlrtRSI;
    d_st.site = &gb_emlrtRSI;
    e_st.site = &hb_emlrtRSI;
    d_st.site = &gb_emlrtRSI;
    e_st.site = &hb_emlrtRSI;
    c_st.site = &gb_emlrtRSI;
    d_st.site = &gb_emlrtRSI;
    d_st.site = &gb_emlrtRSI;
    d_st.site = &gb_emlrtRSI;
    e_st.site = &hb_emlrtRSI;
    c_st.site = &gb_emlrtRSI;
    d_st.site = &gb_emlrtRSI;
    for (i = 0; i < 8; i++) {
      obj->inputVarSize1[i] = (uint32_T)value[i];
    }

    e_st.site = &hb_emlrtRSI;
    c_st.site = &gb_emlrtRSI;
    d_st.site = &gb_emlrtRSI;
    c_st.site = &gb_emlrtRSI;
    d_st.site = &gb_emlrtRSI;
    e_st.site = &gb_emlrtRSI;
    e_st.site = &gb_emlrtRSI;
    f_st.site = &jg_emlrtRSI;
    c_st.site = &gb_emlrtRSI;
    d_st.site = &gb_emlrtRSI;
    d_st.site = &gb_emlrtRSI;
    e_st.site = &jg_emlrtRSI;
    c_st.site = &gb_emlrtRSI;
    c_st.site = &gb_emlrtRSI;
    c_st.site = &gb_emlrtRSI;
    c_st.site = &gb_emlrtRSI;
    d_st.site = &jg_emlrtRSI;
    d_st.site = &jg_emlrtRSI;
    e_st.site = &hb_emlrtRSI;
    c_st.site = &gb_emlrtRSI;
    d_st.site = &jg_emlrtRSI;
    e_st.site = NULL;
  }

  b_st.site = &gb_emlrtRSI;
  b_st.site = &gb_emlrtRSI;
  b_st.site = &gb_emlrtRSI;
  c_st.site = &gb_emlrtRSI;
  c_st.site = &gb_emlrtRSI;
  d_st.site = &jg_emlrtRSI;
  b_st.site = &gb_emlrtRSI;
  b_st.site = &gb_emlrtRSI;
  anyInputSizeChanged = FALSE;
  k = 0;
  exitg2 = FALSE;
  while ((exitg2 == FALSE) && (k < 8)) {
    if (obj->inputVarSize1[k] != (uint32_T)iv4[k]) {
      anyInputSizeChanged = TRUE;
      c_st.site = &gb_emlrtRSI;
      for (i = 0; i < 8; i++) {
        obj->inputVarSize1[i] = (uint32_T)value[i];
      }

      d_st.site = &hb_emlrtRSI;
      exitg2 = TRUE;
    } else {
      k++;
    }
  }

  if (anyInputSizeChanged) {
    b_st.site = &gb_emlrtRSI;
    b_st.site = &gb_emlrtRSI;
  }

  b_st.site = &gb_emlrtRSI;
  c_st.site = &gb_emlrtRSI;
  c_st.site = &gb_emlrtRSI;
  d_st.site = &jg_emlrtRSI;
  b_st.site = &gb_emlrtRSI;
  b_st.site = &gb_emlrtRSI;
  b_st.site = &gb_emlrtRSI;
  b_Nondirect_stepImpl(obj, varargin_1, varargout_1);
  memcpy(&b_modData[0], &modData[0], 563U * sizeof(creal_T));
  memcpy(&b_modData[563], &varargout_1[0], 13U * sizeof(creal_T));

  /*  Calculate required data sizes for correct receiver operation */
  /*  Save desired message size */
  /*  Save number of transmitted frames */
  /*  Convert data into subcarrier streams */
  st.site = &gc_emlrtRSI;
  memcpy(&ofdmData[0], &b_modData[0], 576U * sizeof(creal_T));

  /*  Create Pilots */
  st.site = &hc_emlrtRSI;
  b_obj = &hPN;

  /* System object Constructor function: comm.PNSequence */
  b_obj->S0_isInitialized = FALSE;
  b_obj->S1_isReleased = FALSE;
  for (i = 0; i < 8; i++) {
    b_obj->P0_Polynomial[i] = (uint8_T)iv5[i];
  }

  for (i = 0; i < 7; i++) {
    b_obj->P1_IniState[i] = 1;
    b_obj->P2_Mask[i] = (uint8_T)iv6[i];
  }

  st.site = &ic_emlrtRSI;
  b_obj = &hPN;
  if (!b_obj->S0_isInitialized) {
    b_obj->S0_isInitialized = TRUE;
    if (b_obj->S1_isReleased) {
      emlrtErrorWithMessageIdR2012b(&st, &y_emlrtRTEI,
        "MATLAB:system:runtimeMethodCalledWhenReleasedCodegen", 0);
    }

    b_st.site = NULL;
    b_st.site = NULL;

    /* System object Initialization function: comm.PNSequence */
    for (ib = 0; ib < 7; ib++) {
      b_obj->W0_shiftReg[ib] = b_obj->P1_IniState[ib];
      emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, &b_st);
    }
  }

  b_st.site = NULL;

  /* System object Outputs function: comm.PNSequence */
  for (ib = 0; ib < 12; ib++) {
    tmp = 0;
    for (i = 0; i < 7; i++) {
      tmp = (uint8_T)((uint32_T)tmp + (uint8_T)((uint32_T)b_obj->P0_Polynomial[i
        + 1] * b_obj->W0_shiftReg[i]));
    }

    tmp &= 1;
    tmp2 = 0;
    for (i = 0; i < 7; i++) {
      tmp2 = (uint8_T)((uint32_T)tmp2 + (uint8_T)((uint32_T)b_obj->W0_shiftReg[i]
        * b_obj->P2_Mask[i]));
    }

    pilot[ib] = (int8_T)(tmp2 & 1);
    for (i = 5; i > -1; i += -1) {
      b_obj->W0_shiftReg[i + 1] = b_obj->W0_shiftReg[i];
    }

    b_obj->W0_shiftReg[0U] = tmp;
  }

  /*  Create pilot */
  st.site = &jc_emlrtRSI;
  ib = 0;
  for (i = 0; i < 4; i++) {
    ia = 0;
    for (k = 0; k < 12; k++) {
      pilots[ib] = pilot[ia];
      b_st.site = &qg_emlrtRSI;
      ia++;
      b_st.site = &rg_emlrtRSI;
      ib++;
    }
  }

  /*  Expand to all pilot tones */
  st.site = &kc_emlrtRSI;
  for (i = 0; i < 12; i++) {
    for (ib = 0; ib < 4; ib++) {
      b_pilots[ib + (i << 2)] = 2.0 * (real_T)(pilots[i + 12 * ib] < 1) - 1.0;
    }
  }

  /*  Bipolar to unipolar */
  st.site = &lc_emlrtRSI;
  for (i = 0; i < 12; i++) {
    b_pilots[3 + (i << 2)] = -b_pilots[3 + (i << 2)];
  }

  /*  Invert last pilot */
  /*  Construct Modulator */
  st.site = &mc_emlrtRSI;
  b_OFDMModulator_OFDMModulator(&st, &hDataMod);

  /*  Modulate */
  st.site = &nc_emlrtRSI;
  e_SystemCore_step(&st, &hDataMod, ofdmData, b_pilots, b_r);

  /*  Add preambles to data */
  memcpy(&preambles[0], &completeShortPreambleOFDM[0], 160U * sizeof(creal_T));
  memcpy(&preambles[160], &completeLongPreambleOFDM[0], 160U * sizeof(creal_T));
  memcpy(&c_r[0], &preambles[0], 320U * sizeof(creal_T));
  memcpy(&c_r[320], &b_r[0], 960U * sizeof(creal_T));

  /*  Repeat frame (Used in debugging) */
  st.site = &oc_emlrtRSI;
  ib = 0;
  for (i = 0; i < 30; i++) {
    ia = 0;
    for (k = 0; k < 1280; k++) {
      r[ib] = c_r[ia];
      b_st.site = &qg_emlrtRSI;
      ia++;
      b_st.site = &rg_emlrtRSI;
      ib++;
    }
  }

  /*  Save Demodulator object data for receiver */
  /* hDataDemod = get(OFDMDemodulator(hDataMod)); */
  /* hPreambleDemod = get(OFDMDemodulator(hPreambleMod)); */
  st.site = &pc_emlrtRSI;
  object = iobj_0;
  *hDataDemod = object;
  b_st.site = &mj_emlrtRSI;
  object = *hDataDemod;
  c_st.site = &db_emlrtRSI;
  d_st.site = &fb_emlrtRSI;
  d_st.site = &fb_emlrtRSI;
  object->isInitialized = FALSE;
  object->isReleased = FALSE;
  e_st.site = &gb_emlrtRSI;
  f_st.site = &hb_emlrtRSI;
  e_st.site = &gb_emlrtRSI;
  f_st.site = &hb_emlrtRSI;
  c_st.site = &db_emlrtRSI;
  c_st.site = &eb_emlrtRSI;
  b_st.site = &nj_emlrtRSI;
  c_st.site = &hb_emlrtRSI;
  c_st.site = &hb_emlrtRSI;
  b_st.site = &oj_emlrtRSI;
  c_st.site = &hb_emlrtRSI;
  c_st.site = &hb_emlrtRSI;
  b_st.site = &pj_emlrtRSI;
  c_st.site = &hb_emlrtRSI;
  c_st.site = &hb_emlrtRSI;
  b_st.site = &qj_emlrtRSI;
  c_st.site = &hb_emlrtRSI;
  b_st.site = &rj_emlrtRSI;
  c_st.site = &hb_emlrtRSI;
  c_st.site = &hb_emlrtRSI;
  b_st.site = &sj_emlrtRSI;
  c_st.site = &hb_emlrtRSI;
  b_st.site = &tj_emlrtRSI;
  c_st.site = &hb_emlrtRSI;

  /* OFDMBase Base object for OFDMModulator and OFDMDemodulator System objects */
  /*  Copyright 2013 The MathWorks, Inc. */
  /* FFTLength FFT length */
  /*  Specify the IFFT length. This property can be set to an integer */
  /*  scalar. The value must be a power of two. The default value of */
  /*  this property is 64. */
  /* CyclicPrefixLength Cyclic prefix length */
  /*  Specify the cyclic prefix length. This property can be set to a */
  /*  non-negative interher scalar. The default value of this property is 16. */
  /* NumGuardBandCarriers Number of guard bands */
  /*  Specify the lower and upper guard bands in frequency domain.This */
  /*  property can be set to a non-nagative two-element vector.  */
  /*  The default setting of this property is [6 5]. */
  /* NumSymbols Number of OFDM symbols */
  /*  Specify the number of OFDM symbols at the output. The default value  */
  /*  of this property is 1. */
  /* PilotCarrierIndices Pilot subcarrier indices */
  /*  Specify the locations where pilots are to be inserted. You can */
  /*  set this property to a numeric scalar, column vector, matrix, or */
  /*  3-D array. The defalut value of the property is [-21; -7; 7; 21]. */
  /*  Nontunable ideally */
  /*  Constructor */
  /*      validateattributes(fftLen, {'numeric'}, ... */
  /*          {'real','scalar','integer','finite','>=',8}, ... */
  /*          [class(obj) '.' propName], propName);   */
  /*      validateattributes(CPLen, {'numeric'}, ... */
  /*          {'real','row','integer','nonnegative','finite'}, ... */
  /*          [class(obj) '.' propName], propName);   */
  /*      validateattributes(guardBands, {'numeric'}, ... */
  /*          {'real','integer','nonnegative','finite','size', [2, 1]}, ... */
  /*          [class(obj) '.' propName], propName);   */
  /*      validateattributes(numSym, {'numeric'}, ... */
  /*          {'real','scalar','integer','positive','finite'}, ... */
  /*          [class(obj) '.' propName], propName);   */
  /*      validateattributes(pilotIdx, {'numeric'}, ... */
  /*          {'real','integer','positive','finite','3d'}, ... */
  /*          [class(obj) '.' propName], propName);   */
  /*  Check the 3rd dimension for numTx */
  d_st.site = &vh_emlrtRSI;
  e_st.site = &wh_emlrtRSI;
  for (k = 0; k < 4; k++) {
    x_data[k] = (int8_T)(12 + 14 * k);
  }

  f_st.site = &ni_emlrtRSI;
  i = 0;
  f_st.site = &li_emlrtRSI;
  f_st.site = &ki_emlrtRSI;
  k = 1;
  while (k <= 4) {
    ib = x_data[k - 1];
    do {
      exitg1 = 0;
      f_st.site = &ji_emlrtRSI;
      k++;
      if (k > 4) {
        exitg1 = 1;
      } else {
        f_st.site = &ii_emlrtRSI;
        frexp((real_T)ib / 2.0, &exponent);
        if (!(muDoubleScalarAbs(ib - x_data[k - 1]) < ldexp(1.0, exponent - 53)))
        {
          exitg1 = 1;
        }
      }
    } while (exitg1 == 0);

    f_st.site = &hi_emlrtRSI;
    i++;
    x_data[i - 1] = (int8_T)ib;
    f_st.site = &gi_emlrtRSI;
    f_st.site = &gi_emlrtRSI;
  }

  f_st.site = &ci_emlrtRSI;
  f_st.site = &bi_emlrtRSI;
  f_st.site = &xh_emlrtRSI;
  if (1 > i) {
    b0 = FALSE;
  } else {
    b0 = (i > 2147483646);
  }

  if (b0) {
    g_st.site = &dg_emlrtRSI;
    check_forloop_overflow_error(&g_st);
  }

  d_st.site = &vh_emlrtRSI;
  d_st.site = &vh_emlrtRSI;
  if (1 > i) {
    i0 = 0;
  } else {
    i0 = i;
  }

  if (!(4 != i0)) {
  } else {
    e_y = NULL;
    m0 = mxCreateCharArray(2, iv7);
    for (i = 0; i < 13; i++) {
      cv9[i] = cv10[i];
    }

    emlrtInitCharArrayR2013a(&d_st, 13, m0, cv9);
    emlrtAssign(&e_y, m0);
    e_st.site = &um_emlrtRSI;
    c_error(&e_st, b_message(&e_st, e_y, &g_emlrtMCI), &g_emlrtMCI);
  }

  /*  Error message:  */
  /*  If pilot index is 2-D, the indices per symbol must be unique; */
  /*  If pilot index is 3-D, the indices across transmit antennas per symbol must be unique. */
  c_st.site = &hb_emlrtRSI;
  st.site = &qc_emlrtRSI;
  b_object = iobj_1;
  *hPreambleDemod = b_object;
  b_st.site = &mj_emlrtRSI;
  b_object = *hPreambleDemod;
  c_st.site = &db_emlrtRSI;
  d_st.site = &fb_emlrtRSI;
  d_st.site = &fb_emlrtRSI;
  b_object->isInitialized = FALSE;
  b_object->isReleased = FALSE;
  e_st.site = &gb_emlrtRSI;
  f_st.site = &hb_emlrtRSI;
  e_st.site = &gb_emlrtRSI;
  f_st.site = &hb_emlrtRSI;
  c_st.site = &db_emlrtRSI;
  c_st.site = &eb_emlrtRSI;
  b_st.site = &nj_emlrtRSI;
  c_st.site = &hb_emlrtRSI;
  c_st.site = &hb_emlrtRSI;
  b_st.site = &oj_emlrtRSI;
  c_st.site = &hb_emlrtRSI;
  c_st.site = &hb_emlrtRSI;
  b_st.site = &pj_emlrtRSI;
  c_st.site = &hb_emlrtRSI;
  c_st.site = &hb_emlrtRSI;
  b_st.site = &qj_emlrtRSI;
  c_st.site = &hb_emlrtRSI;
  b_st.site = &rj_emlrtRSI;
  c_st.site = &hb_emlrtRSI;
  c_st.site = &hb_emlrtRSI;
  b_st.site = &sj_emlrtRSI;
  c_st.site = &hb_emlrtRSI;

  /*  Calcuate OFDM frequency bin size */
  /*  Calculate locations of pilots without guardbands */
  /*  Calculate locations of subcarrier datastreams without guardbands */
  /* Remove guardband offsets */
  /* Remove index offsets for pilots and guardbands */
  /* dataSubcarrierIndexies([pilotLocationsWithoutGuardbands;DCNullLocation]) = [];%Remove pilot and DCNull locations */
  /*  Preallocate values needed later */
  /*  Create return structure */
  for (i = 0; i < 560; i++) {
    tx->originalData[i] = b_originalData[i];
  }

  for (i = 0; i < 64; i++) {
    tx->shortPreambleOFDM[i] = shortPreambleOFDM[i];
  }

  for (i = 0; i < 160; i++) {
    tx->completeShortPreambleOFDM[i] = completeShortPreambleOFDM[i];
  }

  for (i = 0; i < 53; i++) {
    tx->shortPreamble[i] = dcv0[i];
  }

  for (i = 0; i < 53; i++) {
    tx->longPreamble[i] = iv8[i];
  }

  for (i = 0; i < 64; i++) {
    tx->longPreambleOFDM[i] = longPreambleOFDM[i];
  }

  for (i = 0; i < 160; i++) {
    tx->completeLongPreambleOFDM[i] = completeLongPreambleOFDM[i];
  }

  for (i = 0; i < 48; i++) {
    tx->pilots[i] = b_pilots[i];
  }

  for (i = 0; i < 320; i++) {
    tx->preambles[i] = preambles[i];
  }

  for (i = 0; i < 4; i++) {
    tx->pilotLocationsWithoutGuardbands[i] = 6.0 + 14.0 * (real_T)i;
  }

  tx->dataSubcarrierIndexies.size[0] = 1;
  tx->dataSubcarrierIndexies.size[1] = 48;
  for (i = 0; i < 48; i++) {
    tx->dataSubcarrierIndexies.data[i] = iv9[i];
  }

  tx->samplingFreq = 5.0E+6;
  tx->FFTLength = 64.0;
  tx->enableMA = TRUE;
  tx->numCarriers = 48.0;
  tx->padBits = 13.0;
  tx->numSamples = 576.0;
  tx->messageCharacters = 80.0;
  tx->numFrames = 30.0;
  tx->frameLength = 1280.0;
  tx->freqBin = 78125.0;
  tx->DecimationFactor = 0.0;
  tx->receiveBufferLength = 0.0;

  /*                              padBits: 13 */
  /*                           numSamples: 576 */
  /*                    messageCharacters: 80 */
  /*                            numFrames: 1000 */
  /*                          frameLength: 1280 */
  /*                              freqBin: 312500 */
  /*                           hDataDemod: [1x1 struct] */
  /*                       hPreambleDemod: [1x1 struct] */
  st.site = NULL;
  Destructor(&hPN);
  emxFreeStruct_OFDMModulator(&hPreambleMod);
  emxFreeStruct_OFDMModulator_1(&hDataMod);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (generateOFDMSignal_TX2.c) */
