/*
 * generateOFDMSignal_TX2.c
 *
 * Code generation for function 'generateOFDMSignal_TX2'
 *
 * C source code generated on: Thu Mar  6 19:04:22 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testMACTransmitter.h"
#include "generateOFDMSignal_TX2.h"
#include "CRCGenerator.h"
#include "Nondirect1.h"
#include "step.h"
#include "testMACTransmitter_emxutil.h"
#include "OFDMDemodulator.h"
#include "SystemCore.h"
#include "OFDMModulator.h"
#include "OFDMletters2bits.h"
#include "testMACTransmitter_mexutil.h"
#include "testMACTransmitter_data.h"
#include <stdio.h>

/* Variable Definitions */
static emlrtRSInfo ub_emlrtRSI = { 16, "generateOFDMSignal_TX2",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/private/generateOFDMSignal_TX2.m"
};

static emlrtRSInfo vb_emlrtRSI = { 39, "generateOFDMSignal_TX2",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/private/generateOFDMSignal_TX2.m"
};

static emlrtRSInfo wb_emlrtRSI = { 46, "generateOFDMSignal_TX2",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/private/generateOFDMSignal_TX2.m"
};

static emlrtRSInfo xb_emlrtRSI = { 58, "generateOFDMSignal_TX2",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/private/generateOFDMSignal_TX2.m"
};

static emlrtRSInfo yb_emlrtRSI = { 69, "generateOFDMSignal_TX2",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/private/generateOFDMSignal_TX2.m"
};

static emlrtRSInfo ac_emlrtRSI = { 70, "generateOFDMSignal_TX2",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/private/generateOFDMSignal_TX2.m"
};

static emlrtRSInfo bc_emlrtRSI = { 73, "generateOFDMSignal_TX2",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/private/generateOFDMSignal_TX2.m"
};

static emlrtRSInfo cc_emlrtRSI = { 74, "generateOFDMSignal_TX2",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/private/generateOFDMSignal_TX2.m"
};

static emlrtRSInfo dc_emlrtRSI = { 77, "generateOFDMSignal_TX2",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/private/generateOFDMSignal_TX2.m"
};

static emlrtRSInfo ec_emlrtRSI = { 80, "generateOFDMSignal_TX2",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/private/generateOFDMSignal_TX2.m"
};

static emlrtRSInfo fc_emlrtRSI = { 87, "generateOFDMSignal_TX2",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/private/generateOFDMSignal_TX2.m"
};

static emlrtRSInfo gc_emlrtRSI = { 96, "generateOFDMSignal_TX2",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/private/generateOFDMSignal_TX2.m"
};

static emlrtRSInfo hc_emlrtRSI = { 99, "generateOFDMSignal_TX2",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/private/generateOFDMSignal_TX2.m"
};

static emlrtRSInfo ic_emlrtRSI = { 104, "generateOFDMSignal_TX2",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/private/generateOFDMSignal_TX2.m"
};

static emlrtRSInfo jc_emlrtRSI = { 105, "generateOFDMSignal_TX2",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/private/generateOFDMSignal_TX2.m"
};

static emlrtRSInfo kc_emlrtRSI = { 106, "generateOFDMSignal_TX2",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/private/generateOFDMSignal_TX2.m"
};

static emlrtRSInfo lc_emlrtRSI = { 107, "generateOFDMSignal_TX2",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/private/generateOFDMSignal_TX2.m"
};

static emlrtRSInfo mc_emlrtRSI = { 110, "generateOFDMSignal_TX2",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/private/generateOFDMSignal_TX2.m"
};

static emlrtRSInfo nc_emlrtRSI = { 121, "generateOFDMSignal_TX2",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/private/generateOFDMSignal_TX2.m"
};

static emlrtRSInfo oc_emlrtRSI = { 129, "generateOFDMSignal_TX2",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/private/generateOFDMSignal_TX2.m"
};

static emlrtRSInfo pc_emlrtRSI = { 134, "generateOFDMSignal_TX2",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/private/generateOFDMSignal_TX2.m"
};

static emlrtRSInfo qc_emlrtRSI = { 135, "generateOFDMSignal_TX2",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/private/generateOFDMSignal_TX2.m"
};

static emlrtRSInfo im_emlrtRSI = { 18, "generateOFDMSignal_TX2",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/private/generateOFDMSignal_TX2.m"
};

static emlrtRSInfo jm_emlrtRSI = { 138, "generateOFDMSignal_TX2",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/private/generateOFDMSignal_TX2.m"
};

static emlrtRSInfo rv_emlrtRSI = { 17, "generateOFDMSignal_TX2",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/private/generateOFDMSignal_TX2.m"
};

static emlrtRTEInfo e_emlrtRTEI = { 110, 1, "generateOFDMSignal_TX2",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/private/generateOFDMSignal_TX2.m"
};

static emlrtRTEInfo f_emlrtRTEI = { 39, 1, "generateOFDMSignal_TX2",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/private/generateOFDMSignal_TX2.m"
};

/* Function Definitions */
void b_generateOFDMSignal_TX2(testMACTransmitterStackData *SD, const emlrtStack *
  sp, real_T originNode, OFDMDemodulator_2 *iobj_0, OFDMDemodulator_3 *iobj_1,
  OFDMDemodulator_3 **hPreambleDemod, OFDMDemodulator_2 **hDataDemod, creal_T r
  [38400], d_struct_T *tx)
{
  OFDMModulator_1 hDataMod;
  OFDMModulator hPreambleMod;
  real_T a;
  int32_T i;
  OFDMModulator *object;
  creal_T shortPreambleOFDM[64];
  creal_T completeShortPreambleOFDM[160];
  creal_T longPreambleOFDM[64];
  creal_T completeLongPreambleOFDM[160];
  char_T inputPayloadMessage[80];
  static const char_T b_inputPayloadMessage[14] = { 'R', 'a', 'n', 'd', 'o', 'm',
    ' ', 'M', 'e', 's', 's', 'a', 'g', 'e' };

  real_T d2;
  static const char_T cv108[3] = { 'E', 'O', 'F' };

  real_T originalData[560];
  real_T x[560];
  int32_T k;
  real_T b_originalData[560];
  commcodegen_CRCGenerator_12 hGen;
  real_T dataWithCRC[563];
  commcodegen_BPSKModulator_2 hMod;
  commcodegen_BPSKModulator_2 *obj;
  comm_BPSKModulator_8 *b_obj;
  static const real_T dv6[4] = { 1.0, 0.0, -1.0, 1.2246467991473532E-16 };

  const mxArray *y;
  static const int32_T iv96[2] = { 1, 45 };

  const mxArray *m16;
  char_T cv109[45];
  static const char_T cv110[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C',
    'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv97[2] = { 1, 4 };

  char_T cv111[4];
  static const char_T cv112[4] = { 's', 't', 'e', 'p' };

  const mxArray *c_y;
  static const int32_T iv98[2] = { 1, 51 };

  char_T cv113[51];
  static const char_T cv114[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l',
    'e', 'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *d_y;
  static const int32_T iv99[2] = { 1, 5 };

  char_T cv115[5];
  static const char_T cv116[5] = { 's', 'e', 't', 'u', 'p' };

  static const int16_T value[8] = { 563, 1, 1, 1, 1, 1, 1, 1 };

  boolean_T anyInputSizeChanged;
  boolean_T exitg2;
  static const int16_T iv100[8] = { 563, 1, 1, 1, 1, 1, 1, 1 };

  creal_T modData[563];
  real_T varargin_1[13];
  const mxArray *e_y;
  static const int32_T iv101[2] = { 1, 45 };

  const mxArray *f_y;
  static const int32_T iv102[2] = { 1, 4 };

  const mxArray *g_y;
  static const int32_T iv103[2] = { 1, 51 };

  const mxArray *h_y;
  static const int32_T iv104[2] = { 1, 5 };

  static const int8_T b_value[8] = { 13, 1, 1, 1, 1, 1, 1, 1 };

  boolean_T exitg1;
  static const int8_T iv105[8] = { 13, 1, 1, 1, 1, 1, 1, 1 };

  creal_T varargout_1[13];
  creal_T b_modData[576];
  creal_T ofdmData[576];
  comm_PNSequence_9 hPN;
  comm_PNSequence_9 *c_obj;
  static const int8_T iv106[8] = { 1, 0, 0, 0, 1, 0, 0, 1 };

  static const int8_T iv107[7] = { 0, 0, 0, 0, 0, 0, 1 };

  int8_T pilot[12];
  uint8_T tmp;
  uint8_T tmp2;
  int8_T pilots[48];
  int32_T ib;
  int32_T ia;
  real_T b_pilots[48];
  creal_T b_r[960];
  creal_T preambles[320];
  OFDMDemodulator_3 *b_object;
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

  static const int8_T iv108[53] = { 1, 1, -1, -1, 1, 1, -1, 1, -1, 1, 1, 1, 1, 1,
    1, -1, -1, 1, 1, -1, 1, -1, 1, 1, 1, 1, 0, 1, -1, -1, 1, 1, -1, 1, -1, 1, -1,
    -1, -1, -1, -1, 1, 1, -1, -1, 1, -1, 1, -1, 1, 1, 1, 1 };

  static const int8_T iv109[48] = { 1, 2, 3, 4, 5, 7, 8, 9, 10, 11, 12, 13, 14,
    15, 16, 17, 18, 19, 21, 22, 23, 24, 25, 26, 28, 29, 30, 31, 32, 33, 35, 36,
    37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 49, 50, 51, 52, 53 };

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
  emxInitStruct_OFDMModulator_1(sp, &hDataMod, &e_emlrtRTEI, TRUE);
  emxInitStruct_OFDMModulator(sp, &hPreambleMod, &f_emlrtRTEI, TRUE);

  /*  generateOFDMSignal: Generate OFDM signal based on the 802.11a standard. */
  /*  This function returns the time domain signal and a structure containing */
  /*  details about the signal itself.  This information is required by the */
  /*  receiver to operate correctly. */
  /* % System Parameters */
  /*  OFDM modulator FFT size */
  /*  Enable moving averages for estimates */
  /* 30     % Make larger to reduce underflow on USRP */
  /*  Message to transmit */
  /*  message is 80 characters max, so extra 3 for EOF, 1 for uniqueID, 1 for */
  /*  the node number of recipient, 1 for origin node */
  st.site = &ub_emlrtRSI;
  b_st.site = &x_emlrtRSI;
  emlrtRandu(&a, 1);
  b_st.site = &y_emlrtRSI;
  b_st.site = &y_emlrtRSI;
  c_st.site = &s_emlrtRSI;
  st.site = &ub_emlrtRSI;
  i = (int32_T)muDoubleScalarFloor(a * 128.0);
  emlrtDynamicBoundsCheckFastR2012b(i, 0, 255, &emlrtBCI, &st);

  /* Add additional character to differentiate messages */
  st.site = &im_emlrtRSI;
  i = (int32_T)(48.0 + originNode);
  emlrtDynamicBoundsCheckFastR2012b(i, 0, 255, &emlrtBCI, &st);

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
  object = &hPreambleMod;
  b_st.site = &hb_emlrtRSI;
  c_st.site = &cb_emlrtRSI;
  object->isInitialized = FALSE;
  object->isReleased = FALSE;
  c_st.site = &cb_emlrtRSI;
  c_st.site = &db_emlrtRSI;
  b_st.site = &ib_emlrtRSI;
  c_st.site = &gb_emlrtRSI;

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

  d2 = muDoubleScalarFloor(48.0 + originNode);
  if (muDoubleScalarIsNaN(d2) || muDoubleScalarIsInf(d2)) {
    d2 = 0.0;
  } else {
    d2 = muDoubleScalarRem(d2, 256.0);
  }

  if (d2 < 0.0) {
    inputPayloadMessage[14] = (int8_T)-(int8_T)(uint8_T)-d2;
  } else {
    inputPayloadMessage[14] = (int8_T)(uint8_T)d2;
  }

  inputPayloadMessage[15] = '1';
  d2 = muDoubleScalarFloor(a * 128.0);
  if (muDoubleScalarIsNaN(d2) || muDoubleScalarIsInf(d2)) {
    d2 = 0.0;
  } else {
    d2 = muDoubleScalarRem(d2, 256.0);
  }

  if (d2 < 0.0) {
    inputPayloadMessage[16] = (int8_T)-(int8_T)(uint8_T)-d2;
  } else {
    inputPayloadMessage[16] = (int8_T)(uint8_T)d2;
  }

  for (i = 0; i < 3; i++) {
    inputPayloadMessage[i + 17] = cv108[i];
  }

  for (i = 0; i < 60; i++) {
    inputPayloadMessage[i + 20] = '-';
  }

  st.site = &yb_emlrtRSI;
  OFDMletters2bits(&st, inputPayloadMessage, originalData);
  st.site = &ac_emlrtRSI;
  for (i = 0; i < 80; i++) {
    for (k = 0; k < 7; k++) {
      x[k + 7 * i] = originalData[i + 80 * k];
    }
  }

  memcpy(&b_originalData[0], &x[0], 560U * sizeof(real_T));

  /*  Generate CRC */
  st.site = &bc_emlrtRSI;
  c_CRCGenerator_CRCGenerator(&hGen);
  st.site = &cc_emlrtRSI;
  g_SystemCore_step(&st, &hGen, b_originalData, dataWithCRC);

  /*  Add CRC */
  /*  Construct modulator for each subcarrier */
  st.site = &dc_emlrtRSI;
  obj = &hMod;
  b_st.site = &jg_emlrtRSI;
  c_st.site = &eb_emlrtRSI;
  c_st.site = &eb_emlrtRSI;
  obj->isInitialized = FALSE;
  obj->isReleased = FALSE;
  obj->inputDirectFeedthrough1 = FALSE;
  b_st.site = &jg_emlrtRSI;
  b_st.site = &jg_emlrtRSI;
  c_st.site = &gb_emlrtRSI;
  b_st.site = &jg_emlrtRSI;
  b_obj = &obj->cSFunObject;

  /* System object Constructor function: comm.BPSKModulator */
  b_obj->S0_isInitialized = FALSE;
  b_obj->S1_isReleased = FALSE;
  for (i = 0; i < 4; i++) {
    b_obj->P0_modmap[i] = dv6[i];
  }

  b_st.site = &jg_emlrtRSI;
  b_st.site = &jg_emlrtRSI;
  c_st.site = &gb_emlrtRSI;
  b_st.site = &jg_emlrtRSI;
  c_st.site = &gb_emlrtRSI;
  b_st.site = &jg_emlrtRSI;
  c_st.site = &gb_emlrtRSI;
  b_st.site = &jg_emlrtRSI;
  c_st.site = &gb_emlrtRSI;

  /*  BPSK */
  /*  Apply modulator for each subcarrier */
  st.site = &ec_emlrtRSI;
  obj = &hMod;
  if (!obj->isReleased) {
  } else {
    y = NULL;
    m16 = mxCreateCharArray(2, iv96);
    for (i = 0; i < 45; i++) {
      cv109[i] = cv110[i];
    }

    emlrtInitCharArrayR2013a(&st, 45, m16, cv109);
    emlrtAssign(&y, m16);
    b_y = NULL;
    m16 = mxCreateCharArray(2, iv97);
    for (i = 0; i < 4; i++) {
      cv111[i] = cv112[i];
    }

    emlrtInitCharArrayR2013a(&st, 4, m16, cv111);
    emlrtAssign(&b_y, m16);
    b_st.site = &fb_emlrtRSI;
    c_error(&b_st, message(&b_st, y, b_y, &emlrtMCI), &emlrtMCI);
  }

  if (!obj->isInitialized) {
    b_st.site = &fb_emlrtRSI;
    if (!obj->isInitialized) {
    } else {
      c_y = NULL;
      m16 = mxCreateCharArray(2, iv98);
      for (i = 0; i < 51; i++) {
        cv113[i] = cv114[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 51, m16, cv113);
      emlrtAssign(&c_y, m16);
      d_y = NULL;
      m16 = mxCreateCharArray(2, iv99);
      for (i = 0; i < 5; i++) {
        cv115[i] = cv116[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 5, m16, cv115);
      emlrtAssign(&d_y, m16);
      c_st.site = &fb_emlrtRSI;
      c_error(&c_st, message(&c_st, c_y, d_y, &emlrtMCI), &emlrtMCI);
    }

    c_st.site = &fb_emlrtRSI;
    obj->isInitialized = TRUE;
    c_st.site = &fb_emlrtRSI;
    c_st.site = &fb_emlrtRSI;
    c_st.site = &fb_emlrtRSI;
    for (i = 0; i < 8; i++) {
      obj->inputVarSize1[i] = (uint32_T)value[i];
    }

    c_st.site = &fb_emlrtRSI;
    c_st.site = &fb_emlrtRSI;
    c_st.site = &fb_emlrtRSI;
    c_st.site = &fb_emlrtRSI;
    c_st.site = &fb_emlrtRSI;
    c_st.site = &fb_emlrtRSI;
    c_st.site = &fb_emlrtRSI;
    c_st.site = &fb_emlrtRSI;
  }

  b_st.site = &fb_emlrtRSI;
  b_st.site = &fb_emlrtRSI;
  b_st.site = &fb_emlrtRSI;
  c_st.site = &fb_emlrtRSI;
  c_st.site = &fb_emlrtRSI;
  b_st.site = &fb_emlrtRSI;
  b_st.site = &fb_emlrtRSI;
  anyInputSizeChanged = FALSE;
  k = 0;
  exitg2 = FALSE;
  while ((exitg2 == FALSE) && (k < 8)) {
    if (obj->inputVarSize1[k] != (uint32_T)iv100[k]) {
      anyInputSizeChanged = TRUE;
      c_st.site = &fb_emlrtRSI;
      for (i = 0; i < 8; i++) {
        obj->inputVarSize1[i] = (uint32_T)value[i];
      }

      exitg2 = TRUE;
    } else {
      k++;
    }
  }

  if (anyInputSizeChanged) {
    b_st.site = &fb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
  }

  b_st.site = &fb_emlrtRSI;
  c_st.site = &fb_emlrtRSI;
  c_st.site = &fb_emlrtRSI;
  b_st.site = &fb_emlrtRSI;
  b_st.site = &fb_emlrtRSI;
  b_st.site = &fb_emlrtRSI;
  e_Nondirect_stepImpl(obj, dataWithCRC, modData);

  /*  Pad IFFT */
  st.site = &fc_emlrtRSI;
  b_st.site = &x_emlrtRSI;
  emlrtRandu(varargin_1, 13);
  for (k = 0; k < 13; k++) {
    b_st.site = &y_emlrtRSI;
    b_st.site = &y_emlrtRSI;
    c_st.site = &s_emlrtRSI;
    varargin_1[k] = muDoubleScalarFloor(varargin_1[k] * 2.0);
  }

  st.site = &fc_emlrtRSI;
  obj = &hMod;
  if (!obj->isReleased) {
  } else {
    e_y = NULL;
    m16 = mxCreateCharArray(2, iv101);
    for (i = 0; i < 45; i++) {
      cv109[i] = cv110[i];
    }

    emlrtInitCharArrayR2013a(&st, 45, m16, cv109);
    emlrtAssign(&e_y, m16);
    f_y = NULL;
    m16 = mxCreateCharArray(2, iv102);
    for (i = 0; i < 4; i++) {
      cv111[i] = cv112[i];
    }

    emlrtInitCharArrayR2013a(&st, 4, m16, cv111);
    emlrtAssign(&f_y, m16);
    b_st.site = &fb_emlrtRSI;
    c_error(&b_st, message(&b_st, e_y, f_y, &emlrtMCI), &emlrtMCI);
  }

  if (!obj->isInitialized) {
    b_st.site = &fb_emlrtRSI;
    if (!obj->isInitialized) {
    } else {
      g_y = NULL;
      m16 = mxCreateCharArray(2, iv103);
      for (i = 0; i < 51; i++) {
        cv113[i] = cv114[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 51, m16, cv113);
      emlrtAssign(&g_y, m16);
      h_y = NULL;
      m16 = mxCreateCharArray(2, iv104);
      for (i = 0; i < 5; i++) {
        cv115[i] = cv116[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 5, m16, cv115);
      emlrtAssign(&h_y, m16);
      c_st.site = &fb_emlrtRSI;
      c_error(&c_st, message(&c_st, g_y, h_y, &emlrtMCI), &emlrtMCI);
    }

    c_st.site = &fb_emlrtRSI;
    obj->isInitialized = TRUE;
    c_st.site = &fb_emlrtRSI;
    c_st.site = &fb_emlrtRSI;
    c_st.site = &fb_emlrtRSI;
    for (i = 0; i < 8; i++) {
      obj->inputVarSize1[i] = (uint32_T)b_value[i];
    }

    c_st.site = &fb_emlrtRSI;
    c_st.site = &fb_emlrtRSI;
    c_st.site = &fb_emlrtRSI;
    c_st.site = &fb_emlrtRSI;
    c_st.site = &fb_emlrtRSI;
    c_st.site = &fb_emlrtRSI;
    c_st.site = &fb_emlrtRSI;
    c_st.site = &fb_emlrtRSI;
  }

  b_st.site = &fb_emlrtRSI;
  b_st.site = &fb_emlrtRSI;
  b_st.site = &fb_emlrtRSI;
  c_st.site = &fb_emlrtRSI;
  c_st.site = &fb_emlrtRSI;
  b_st.site = &fb_emlrtRSI;
  b_st.site = &fb_emlrtRSI;
  anyInputSizeChanged = FALSE;
  k = 0;
  exitg1 = FALSE;
  while ((exitg1 == FALSE) && (k < 8)) {
    if (obj->inputVarSize1[k] != (uint32_T)iv105[k]) {
      anyInputSizeChanged = TRUE;
      c_st.site = &fb_emlrtRSI;
      for (i = 0; i < 8; i++) {
        obj->inputVarSize1[i] = (uint32_T)b_value[i];
      }

      exitg1 = TRUE;
    } else {
      k++;
    }
  }

  if (anyInputSizeChanged) {
    b_st.site = &fb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
  }

  b_st.site = &fb_emlrtRSI;
  c_st.site = &fb_emlrtRSI;
  c_st.site = &fb_emlrtRSI;
  b_st.site = &fb_emlrtRSI;
  b_st.site = &fb_emlrtRSI;
  b_st.site = &fb_emlrtRSI;
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
  c_obj = &hPN;

  /* System object Constructor function: comm.PNSequence */
  c_obj->S0_isInitialized = FALSE;
  c_obj->S1_isReleased = FALSE;
  for (i = 0; i < 8; i++) {
    c_obj->P0_Polynomial[i] = (uint8_T)iv106[i];
  }

  for (i = 0; i < 7; i++) {
    c_obj->P1_IniState[i] = 1;
    c_obj->P2_Mask[i] = (uint8_T)iv107[i];
  }

  st.site = &ic_emlrtRSI;
  c_obj = &hPN;
  if (!c_obj->S0_isInitialized) {
    c_obj->S0_isInitialized = TRUE;
    if (c_obj->S1_isReleased) {
      emlrtErrorWithMessageIdR2012b(&st, &cc_emlrtRTEI,
        "MATLAB:system:runtimeMethodCalledWhenReleasedCodegen", 0);
    }

    b_st.site = NULL;
    b_st.site = NULL;

    /* System object Initialization function: comm.PNSequence */
    for (k = 0; k < 7; k++) {
      c_obj->W0_shiftReg[k] = c_obj->P1_IniState[k];
      emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, &b_st);
    }
  }

  b_st.site = NULL;

  /* System object Outputs function: comm.PNSequence */
  for (k = 0; k < 12; k++) {
    tmp = 0;
    for (i = 0; i < 7; i++) {
      tmp = (uint8_T)((uint32_T)tmp + (uint8_T)((uint32_T)c_obj->P0_Polynomial[i
        + 1] * c_obj->W0_shiftReg[i]));
    }

    tmp &= 1;
    tmp2 = 0;
    for (i = 0; i < 7; i++) {
      tmp2 = (uint8_T)((uint32_T)tmp2 + (uint8_T)((uint32_T)c_obj->W0_shiftReg[i]
        * c_obj->P2_Mask[i]));
    }

    pilot[k] = (int8_T)(tmp2 & 1);
    for (i = 5; i > -1; i += -1) {
      c_obj->W0_shiftReg[i + 1] = c_obj->W0_shiftReg[i];
    }

    c_obj->W0_shiftReg[0U] = tmp;
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
    for (k = 0; k < 4; k++) {
      b_pilots[k + (i << 2)] = 2.0 * (real_T)(pilots[i + 12 * k] < 1) - 1.0;
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
  d_SystemCore_step(&st, &hDataMod, ofdmData, b_pilots, b_r);

  /*  Add preambles to data */
  memcpy(&preambles[0], &completeShortPreambleOFDM[0], 160U * sizeof(creal_T));
  memcpy(&preambles[160], &completeLongPreambleOFDM[0], 160U * sizeof(creal_T));
  memcpy(&SD->u1.f7.r[0], &preambles[0], 320U * sizeof(creal_T));
  memcpy(&SD->u1.f7.r[320], &b_r[0], 960U * sizeof(creal_T));

  /*  Repeat frame (Used in debugging) */
  st.site = &oc_emlrtRSI;
  ib = 0;
  for (i = 0; i < 30; i++) {
    ia = 0;
    for (k = 0; k < 1280; k++) {
      r[ib] = SD->u1.f7.r[ia];
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
  *hDataDemod = OFDMDemodulator_OFDMDemodulator(&st, iobj_0);
  st.site = &qc_emlrtRSI;
  b_object = iobj_1;
  *hPreambleDemod = b_object;
  b_st.site = &mj_emlrtRSI;
  b_object = *hPreambleDemod;
  c_st.site = &cb_emlrtRSI;
  b_object->isInitialized = FALSE;
  b_object->isReleased = FALSE;
  c_st.site = &cb_emlrtRSI;
  c_st.site = &db_emlrtRSI;
  b_st.site = &nj_emlrtRSI;
  c_st.site = &gb_emlrtRSI;
  c_st.site = &gb_emlrtRSI;
  b_st.site = &oj_emlrtRSI;
  c_st.site = &gb_emlrtRSI;
  c_st.site = &gb_emlrtRSI;
  b_st.site = &pj_emlrtRSI;
  c_st.site = &gb_emlrtRSI;
  c_st.site = &gb_emlrtRSI;
  b_st.site = &qj_emlrtRSI;
  c_st.site = &gb_emlrtRSI;
  b_st.site = &rj_emlrtRSI;
  c_st.site = &gb_emlrtRSI;
  c_st.site = &gb_emlrtRSI;
  b_st.site = &sj_emlrtRSI;
  c_st.site = &gb_emlrtRSI;

  /*  Calcuate OFDM frequency bin size */
  st.site = &jm_emlrtRSI;
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
    tx->longPreamble[i] = iv108[i];
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
    tx->dataSubcarrierIndexies.data[i] = iv109[i];
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
  st.site = NULL;
  c_Destructor(&hPN);
  emxFreeStruct_OFDMModulator(&hPreambleMod);
  emxFreeStruct_OFDMModulator_1(&hDataMod);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void c_generateOFDMSignal_TX2(testMACTransmitterStackData *SD, const emlrtStack *
  sp, real_T originNode, real_T destNode, OFDMDemodulator_2 *iobj_0,
  OFDMDemodulator_3 *iobj_1, OFDMDemodulator_3 **hPreambleDemod,
  OFDMDemodulator_2 **hDataDemod, creal_T r[38400], d_struct_T *tx)
{
  OFDMModulator_1 hDataMod;
  OFDMModulator hPreambleMod;
  real_T a;
  int32_T i;
  OFDMModulator *object;
  creal_T shortPreambleOFDM[64];
  creal_T completeShortPreambleOFDM[160];
  creal_T longPreambleOFDM[64];
  creal_T completeLongPreambleOFDM[160];
  char_T inputPayloadMessage[80];
  static const char_T b_inputPayloadMessage[3] = { 'A', 'C', 'K' };

  real_T d5;
  static const char_T cv259[3] = { 'E', 'O', 'F' };

  real_T originalData[560];
  real_T x[560];
  int32_T k;
  real_T b_originalData[560];
  commcodegen_CRCGenerator_18 hGen;
  real_T dataWithCRC[563];
  commcodegen_BPSKModulator_3 hMod;
  commcodegen_BPSKModulator_3 *obj;
  comm_BPSKModulator_12 *b_obj;
  static const real_T dv13[4] = { 1.0, 0.0, -1.0, 1.2246467991473532E-16 };

  const mxArray *y;
  static const int32_T iv213[2] = { 1, 45 };

  const mxArray *m42;
  char_T cv260[45];
  static const char_T cv261[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C',
    'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv214[2] = { 1, 4 };

  char_T cv262[4];
  static const char_T cv263[4] = { 's', 't', 'e', 'p' };

  const mxArray *c_y;
  static const int32_T iv215[2] = { 1, 51 };

  char_T cv264[51];
  static const char_T cv265[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l',
    'e', 'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *d_y;
  static const int32_T iv216[2] = { 1, 5 };

  char_T cv266[5];
  static const char_T cv267[5] = { 's', 'e', 't', 'u', 'p' };

  static const int16_T value[8] = { 563, 1, 1, 1, 1, 1, 1, 1 };

  boolean_T anyInputSizeChanged;
  boolean_T exitg2;
  static const int16_T iv217[8] = { 563, 1, 1, 1, 1, 1, 1, 1 };

  creal_T modData[563];
  real_T varargin_1[13];
  const mxArray *e_y;
  static const int32_T iv218[2] = { 1, 45 };

  const mxArray *f_y;
  static const int32_T iv219[2] = { 1, 4 };

  const mxArray *g_y;
  static const int32_T iv220[2] = { 1, 51 };

  const mxArray *h_y;
  static const int32_T iv221[2] = { 1, 5 };

  static const int8_T b_value[8] = { 13, 1, 1, 1, 1, 1, 1, 1 };

  boolean_T exitg1;
  static const int8_T iv222[8] = { 13, 1, 1, 1, 1, 1, 1, 1 };

  creal_T varargout_1[13];
  creal_T b_modData[576];
  creal_T ofdmData[576];
  comm_PNSequence_13 hPN;
  comm_PNSequence_13 *c_obj;
  static const int8_T iv223[8] = { 1, 0, 0, 0, 1, 0, 0, 1 };

  static const int8_T iv224[7] = { 0, 0, 0, 0, 0, 0, 1 };

  int8_T pilot[12];
  uint8_T tmp;
  uint8_T tmp2;
  int8_T pilots[48];
  int32_T ib;
  int32_T ia;
  real_T b_pilots[48];
  creal_T b_r[960];
  creal_T preambles[320];
  OFDMDemodulator_3 *b_object;
  static const creal_T dcv6[53] = { { 0.0, 0.0 }, { 0.0, 0.0 }, { 1.0, 1.0 }, {
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

  static const int8_T iv225[53] = { 1, 1, -1, -1, 1, 1, -1, 1, -1, 1, 1, 1, 1, 1,
    1, -1, -1, 1, 1, -1, 1, -1, 1, 1, 1, 1, 0, 1, -1, -1, 1, 1, -1, 1, -1, 1, -1,
    -1, -1, -1, -1, 1, 1, -1, -1, 1, -1, 1, -1, 1, 1, 1, 1 };

  static const int8_T iv226[48] = { 1, 2, 3, 4, 5, 7, 8, 9, 10, 11, 12, 13, 14,
    15, 16, 17, 18, 19, 21, 22, 23, 24, 25, 26, 28, 29, 30, 31, 32, 33, 35, 36,
    37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 49, 50, 51, 52, 53 };

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
  emxInitStruct_OFDMModulator_1(sp, &hDataMod, &e_emlrtRTEI, TRUE);
  emxInitStruct_OFDMModulator(sp, &hPreambleMod, &f_emlrtRTEI, TRUE);

  /*  generateOFDMSignal: Generate OFDM signal based on the 802.11a standard. */
  /*  This function returns the time domain signal and a structure containing */
  /*  details about the signal itself.  This information is required by the */
  /*  receiver to operate correctly. */
  /* % System Parameters */
  /*  OFDM modulator FFT size */
  /*  Enable moving averages for estimates */
  /* 30     % Make larger to reduce underflow on USRP */
  /*  Message to transmit */
  /*  message is 80 characters max, so extra 3 for EOF, 1 for uniqueID, 1 for */
  /*  the node number of recipient, 1 for origin node */
  st.site = &ub_emlrtRSI;
  b_st.site = &x_emlrtRSI;
  emlrtRandu(&a, 1);
  b_st.site = &y_emlrtRSI;
  b_st.site = &y_emlrtRSI;
  c_st.site = &s_emlrtRSI;
  st.site = &ub_emlrtRSI;
  i = (int32_T)muDoubleScalarFloor(a * 128.0);
  emlrtDynamicBoundsCheckFastR2012b(i, 0, 255, &emlrtBCI, &st);

  /* Add additional character to differentiate messages */
  st.site = &rv_emlrtRSI;
  i = (int32_T)(48.0 + destNode);
  emlrtDynamicBoundsCheckFastR2012b(i, 0, 255, &emlrtBCI, &st);
  st.site = &im_emlrtRSI;
  i = (int32_T)(48.0 + originNode);
  emlrtDynamicBoundsCheckFastR2012b(i, 0, 255, &emlrtBCI, &st);

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
  object = &hPreambleMod;
  b_st.site = &hb_emlrtRSI;
  c_st.site = &cb_emlrtRSI;
  object->isInitialized = FALSE;
  object->isReleased = FALSE;
  c_st.site = &cb_emlrtRSI;
  c_st.site = &db_emlrtRSI;
  b_st.site = &ib_emlrtRSI;
  c_st.site = &gb_emlrtRSI;

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
  for (i = 0; i < 3; i++) {
    inputPayloadMessage[i] = b_inputPayloadMessage[i];
  }

  d5 = muDoubleScalarFloor(48.0 + originNode);
  if (muDoubleScalarIsNaN(d5) || muDoubleScalarIsInf(d5)) {
    d5 = 0.0;
  } else {
    d5 = muDoubleScalarRem(d5, 256.0);
  }

  if (d5 < 0.0) {
    inputPayloadMessage[3] = (int8_T)-(int8_T)(uint8_T)-d5;
  } else {
    inputPayloadMessage[3] = (int8_T)(uint8_T)d5;
  }

  d5 = muDoubleScalarFloor(48.0 + destNode);
  if (muDoubleScalarIsNaN(d5) || muDoubleScalarIsInf(d5)) {
    d5 = 0.0;
  } else {
    d5 = muDoubleScalarRem(d5, 256.0);
  }

  if (d5 < 0.0) {
    inputPayloadMessage[4] = (int8_T)-(int8_T)(uint8_T)-d5;
  } else {
    inputPayloadMessage[4] = (int8_T)(uint8_T)d5;
  }

  d5 = muDoubleScalarFloor(a * 128.0);
  if (muDoubleScalarIsNaN(d5) || muDoubleScalarIsInf(d5)) {
    d5 = 0.0;
  } else {
    d5 = muDoubleScalarRem(d5, 256.0);
  }

  if (d5 < 0.0) {
    inputPayloadMessage[5] = (int8_T)-(int8_T)(uint8_T)-d5;
  } else {
    inputPayloadMessage[5] = (int8_T)(uint8_T)d5;
  }

  for (i = 0; i < 3; i++) {
    inputPayloadMessage[i + 6] = cv259[i];
  }

  for (i = 0; i < 71; i++) {
    inputPayloadMessage[i + 9] = '-';
  }

  st.site = &yb_emlrtRSI;
  OFDMletters2bits(&st, inputPayloadMessage, originalData);
  st.site = &ac_emlrtRSI;
  for (i = 0; i < 80; i++) {
    for (k = 0; k < 7; k++) {
      x[k + 7 * i] = originalData[i + 80 * k];
    }
  }

  memcpy(&b_originalData[0], &x[0], 560U * sizeof(real_T));

  /*  Generate CRC */
  st.site = &bc_emlrtRSI;
  d_CRCGenerator_CRCGenerator(&hGen);
  st.site = &cc_emlrtRSI;
  k_SystemCore_step(&st, &hGen, b_originalData, dataWithCRC);

  /*  Add CRC */
  /*  Construct modulator for each subcarrier */
  st.site = &dc_emlrtRSI;
  obj = &hMod;
  b_st.site = &jg_emlrtRSI;
  c_st.site = &eb_emlrtRSI;
  c_st.site = &eb_emlrtRSI;
  obj->isInitialized = FALSE;
  obj->isReleased = FALSE;
  obj->inputDirectFeedthrough1 = FALSE;
  b_st.site = &jg_emlrtRSI;
  b_st.site = &jg_emlrtRSI;
  c_st.site = &gb_emlrtRSI;
  b_st.site = &jg_emlrtRSI;
  b_obj = &obj->cSFunObject;

  /* System object Constructor function: comm.BPSKModulator */
  b_obj->S0_isInitialized = FALSE;
  b_obj->S1_isReleased = FALSE;
  for (i = 0; i < 4; i++) {
    b_obj->P0_modmap[i] = dv13[i];
  }

  b_st.site = &jg_emlrtRSI;
  b_st.site = &jg_emlrtRSI;
  c_st.site = &gb_emlrtRSI;
  b_st.site = &jg_emlrtRSI;
  c_st.site = &gb_emlrtRSI;
  b_st.site = &jg_emlrtRSI;
  c_st.site = &gb_emlrtRSI;
  b_st.site = &jg_emlrtRSI;
  c_st.site = &gb_emlrtRSI;

  /*  BPSK */
  /*  Apply modulator for each subcarrier */
  st.site = &ec_emlrtRSI;
  obj = &hMod;
  if (!obj->isReleased) {
  } else {
    y = NULL;
    m42 = mxCreateCharArray(2, iv213);
    for (i = 0; i < 45; i++) {
      cv260[i] = cv261[i];
    }

    emlrtInitCharArrayR2013a(&st, 45, m42, cv260);
    emlrtAssign(&y, m42);
    b_y = NULL;
    m42 = mxCreateCharArray(2, iv214);
    for (i = 0; i < 4; i++) {
      cv262[i] = cv263[i];
    }

    emlrtInitCharArrayR2013a(&st, 4, m42, cv262);
    emlrtAssign(&b_y, m42);
    b_st.site = &fb_emlrtRSI;
    c_error(&b_st, message(&b_st, y, b_y, &emlrtMCI), &emlrtMCI);
  }

  if (!obj->isInitialized) {
    b_st.site = &fb_emlrtRSI;
    if (!obj->isInitialized) {
    } else {
      c_y = NULL;
      m42 = mxCreateCharArray(2, iv215);
      for (i = 0; i < 51; i++) {
        cv264[i] = cv265[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 51, m42, cv264);
      emlrtAssign(&c_y, m42);
      d_y = NULL;
      m42 = mxCreateCharArray(2, iv216);
      for (i = 0; i < 5; i++) {
        cv266[i] = cv267[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 5, m42, cv266);
      emlrtAssign(&d_y, m42);
      c_st.site = &fb_emlrtRSI;
      c_error(&c_st, message(&c_st, c_y, d_y, &emlrtMCI), &emlrtMCI);
    }

    c_st.site = &fb_emlrtRSI;
    obj->isInitialized = TRUE;
    c_st.site = &fb_emlrtRSI;
    c_st.site = &fb_emlrtRSI;
    c_st.site = &fb_emlrtRSI;
    for (i = 0; i < 8; i++) {
      obj->inputVarSize1[i] = (uint32_T)value[i];
    }

    c_st.site = &fb_emlrtRSI;
    c_st.site = &fb_emlrtRSI;
    c_st.site = &fb_emlrtRSI;
    c_st.site = &fb_emlrtRSI;
    c_st.site = &fb_emlrtRSI;
    c_st.site = &fb_emlrtRSI;
    c_st.site = &fb_emlrtRSI;
    c_st.site = &fb_emlrtRSI;
  }

  b_st.site = &fb_emlrtRSI;
  b_st.site = &fb_emlrtRSI;
  b_st.site = &fb_emlrtRSI;
  c_st.site = &fb_emlrtRSI;
  c_st.site = &fb_emlrtRSI;
  b_st.site = &fb_emlrtRSI;
  b_st.site = &fb_emlrtRSI;
  anyInputSizeChanged = FALSE;
  k = 0;
  exitg2 = FALSE;
  while ((exitg2 == FALSE) && (k < 8)) {
    if (obj->inputVarSize1[k] != (uint32_T)iv217[k]) {
      anyInputSizeChanged = TRUE;
      c_st.site = &fb_emlrtRSI;
      for (i = 0; i < 8; i++) {
        obj->inputVarSize1[i] = (uint32_T)value[i];
      }

      exitg2 = TRUE;
    } else {
      k++;
    }
  }

  if (anyInputSizeChanged) {
    b_st.site = &fb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
  }

  b_st.site = &fb_emlrtRSI;
  c_st.site = &fb_emlrtRSI;
  c_st.site = &fb_emlrtRSI;
  b_st.site = &fb_emlrtRSI;
  b_st.site = &fb_emlrtRSI;
  b_st.site = &fb_emlrtRSI;
  g_Nondirect_stepImpl(obj, dataWithCRC, modData);

  /*  Pad IFFT */
  st.site = &fc_emlrtRSI;
  b_st.site = &x_emlrtRSI;
  emlrtRandu(varargin_1, 13);
  for (k = 0; k < 13; k++) {
    b_st.site = &y_emlrtRSI;
    b_st.site = &y_emlrtRSI;
    c_st.site = &s_emlrtRSI;
    varargin_1[k] = muDoubleScalarFloor(varargin_1[k] * 2.0);
  }

  st.site = &fc_emlrtRSI;
  obj = &hMod;
  if (!obj->isReleased) {
  } else {
    e_y = NULL;
    m42 = mxCreateCharArray(2, iv218);
    for (i = 0; i < 45; i++) {
      cv260[i] = cv261[i];
    }

    emlrtInitCharArrayR2013a(&st, 45, m42, cv260);
    emlrtAssign(&e_y, m42);
    f_y = NULL;
    m42 = mxCreateCharArray(2, iv219);
    for (i = 0; i < 4; i++) {
      cv262[i] = cv263[i];
    }

    emlrtInitCharArrayR2013a(&st, 4, m42, cv262);
    emlrtAssign(&f_y, m42);
    b_st.site = &fb_emlrtRSI;
    c_error(&b_st, message(&b_st, e_y, f_y, &emlrtMCI), &emlrtMCI);
  }

  if (!obj->isInitialized) {
    b_st.site = &fb_emlrtRSI;
    if (!obj->isInitialized) {
    } else {
      g_y = NULL;
      m42 = mxCreateCharArray(2, iv220);
      for (i = 0; i < 51; i++) {
        cv264[i] = cv265[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 51, m42, cv264);
      emlrtAssign(&g_y, m42);
      h_y = NULL;
      m42 = mxCreateCharArray(2, iv221);
      for (i = 0; i < 5; i++) {
        cv266[i] = cv267[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 5, m42, cv266);
      emlrtAssign(&h_y, m42);
      c_st.site = &fb_emlrtRSI;
      c_error(&c_st, message(&c_st, g_y, h_y, &emlrtMCI), &emlrtMCI);
    }

    c_st.site = &fb_emlrtRSI;
    obj->isInitialized = TRUE;
    c_st.site = &fb_emlrtRSI;
    c_st.site = &fb_emlrtRSI;
    c_st.site = &fb_emlrtRSI;
    for (i = 0; i < 8; i++) {
      obj->inputVarSize1[i] = (uint32_T)b_value[i];
    }

    c_st.site = &fb_emlrtRSI;
    c_st.site = &fb_emlrtRSI;
    c_st.site = &fb_emlrtRSI;
    c_st.site = &fb_emlrtRSI;
    c_st.site = &fb_emlrtRSI;
    c_st.site = &fb_emlrtRSI;
    c_st.site = &fb_emlrtRSI;
    c_st.site = &fb_emlrtRSI;
  }

  b_st.site = &fb_emlrtRSI;
  b_st.site = &fb_emlrtRSI;
  b_st.site = &fb_emlrtRSI;
  c_st.site = &fb_emlrtRSI;
  c_st.site = &fb_emlrtRSI;
  b_st.site = &fb_emlrtRSI;
  b_st.site = &fb_emlrtRSI;
  anyInputSizeChanged = FALSE;
  k = 0;
  exitg1 = FALSE;
  while ((exitg1 == FALSE) && (k < 8)) {
    if (obj->inputVarSize1[k] != (uint32_T)iv222[k]) {
      anyInputSizeChanged = TRUE;
      c_st.site = &fb_emlrtRSI;
      for (i = 0; i < 8; i++) {
        obj->inputVarSize1[i] = (uint32_T)b_value[i];
      }

      exitg1 = TRUE;
    } else {
      k++;
    }
  }

  if (anyInputSizeChanged) {
    b_st.site = &fb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
  }

  b_st.site = &fb_emlrtRSI;
  c_st.site = &fb_emlrtRSI;
  c_st.site = &fb_emlrtRSI;
  b_st.site = &fb_emlrtRSI;
  b_st.site = &fb_emlrtRSI;
  b_st.site = &fb_emlrtRSI;
  h_Nondirect_stepImpl(obj, varargin_1, varargout_1);
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
  c_obj = &hPN;

  /* System object Constructor function: comm.PNSequence */
  c_obj->S0_isInitialized = FALSE;
  c_obj->S1_isReleased = FALSE;
  for (i = 0; i < 8; i++) {
    c_obj->P0_Polynomial[i] = (uint8_T)iv223[i];
  }

  for (i = 0; i < 7; i++) {
    c_obj->P1_IniState[i] = 1;
    c_obj->P2_Mask[i] = (uint8_T)iv224[i];
  }

  st.site = &ic_emlrtRSI;
  c_obj = &hPN;
  if (!c_obj->S0_isInitialized) {
    c_obj->S0_isInitialized = TRUE;
    if (c_obj->S1_isReleased) {
      emlrtErrorWithMessageIdR2012b(&st, &cc_emlrtRTEI,
        "MATLAB:system:runtimeMethodCalledWhenReleasedCodegen", 0);
    }

    b_st.site = NULL;
    b_st.site = NULL;

    /* System object Initialization function: comm.PNSequence */
    for (k = 0; k < 7; k++) {
      c_obj->W0_shiftReg[k] = c_obj->P1_IniState[k];
      emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, &b_st);
    }
  }

  b_st.site = NULL;

  /* System object Outputs function: comm.PNSequence */
  for (k = 0; k < 12; k++) {
    tmp = 0;
    for (i = 0; i < 7; i++) {
      tmp = (uint8_T)((uint32_T)tmp + (uint8_T)((uint32_T)c_obj->P0_Polynomial[i
        + 1] * c_obj->W0_shiftReg[i]));
    }

    tmp &= 1;
    tmp2 = 0;
    for (i = 0; i < 7; i++) {
      tmp2 = (uint8_T)((uint32_T)tmp2 + (uint8_T)((uint32_T)c_obj->W0_shiftReg[i]
        * c_obj->P2_Mask[i]));
    }

    pilot[k] = (int8_T)(tmp2 & 1);
    for (i = 5; i > -1; i += -1) {
      c_obj->W0_shiftReg[i + 1] = c_obj->W0_shiftReg[i];
    }

    c_obj->W0_shiftReg[0U] = tmp;
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
    for (k = 0; k < 4; k++) {
      b_pilots[k + (i << 2)] = 2.0 * (real_T)(pilots[i + 12 * k] < 1) - 1.0;
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
  d_SystemCore_step(&st, &hDataMod, ofdmData, b_pilots, b_r);

  /*  Add preambles to data */
  memcpy(&preambles[0], &completeShortPreambleOFDM[0], 160U * sizeof(creal_T));
  memcpy(&preambles[160], &completeLongPreambleOFDM[0], 160U * sizeof(creal_T));
  memcpy(&SD->u1.f2.r[0], &preambles[0], 320U * sizeof(creal_T));
  memcpy(&SD->u1.f2.r[320], &b_r[0], 960U * sizeof(creal_T));

  /*  Repeat frame (Used in debugging) */
  st.site = &oc_emlrtRSI;
  ib = 0;
  for (i = 0; i < 30; i++) {
    ia = 0;
    for (k = 0; k < 1280; k++) {
      r[ib] = SD->u1.f2.r[ia];
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
  *hDataDemod = OFDMDemodulator_OFDMDemodulator(&st, iobj_0);
  st.site = &qc_emlrtRSI;
  b_object = iobj_1;
  *hPreambleDemod = b_object;
  b_st.site = &mj_emlrtRSI;
  b_object = *hPreambleDemod;
  c_st.site = &cb_emlrtRSI;
  b_object->isInitialized = FALSE;
  b_object->isReleased = FALSE;
  c_st.site = &cb_emlrtRSI;
  c_st.site = &db_emlrtRSI;
  b_st.site = &nj_emlrtRSI;
  c_st.site = &gb_emlrtRSI;
  c_st.site = &gb_emlrtRSI;
  b_st.site = &oj_emlrtRSI;
  c_st.site = &gb_emlrtRSI;
  c_st.site = &gb_emlrtRSI;
  b_st.site = &pj_emlrtRSI;
  c_st.site = &gb_emlrtRSI;
  c_st.site = &gb_emlrtRSI;
  b_st.site = &qj_emlrtRSI;
  c_st.site = &gb_emlrtRSI;
  b_st.site = &rj_emlrtRSI;
  c_st.site = &gb_emlrtRSI;
  c_st.site = &gb_emlrtRSI;
  b_st.site = &sj_emlrtRSI;
  c_st.site = &gb_emlrtRSI;

  /*  Calcuate OFDM frequency bin size */
  st.site = &jm_emlrtRSI;
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
    tx->shortPreamble[i] = dcv6[i];
  }

  for (i = 0; i < 53; i++) {
    tx->longPreamble[i] = iv225[i];
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
    tx->dataSubcarrierIndexies.data[i] = iv226[i];
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
  st.site = NULL;
  e_Destructor(&hPN);
  emxFreeStruct_OFDMModulator(&hPreambleMod);
  emxFreeStruct_OFDMModulator_1(&hDataMod);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void generateOFDMSignal_TX2(testMACTransmitterStackData *SD, const emlrtStack
  *sp, OFDMDemodulator_2 *iobj_0, OFDMDemodulator_3 *iobj_1, OFDMDemodulator_3 **
  hPreambleDemod, OFDMDemodulator_2 **hDataDemod, creal_T r[38400], d_struct_T
  *tx)
{
  OFDMModulator_1 hDataMod;
  OFDMModulator hPreambleMod;
  real_T a;
  int32_T i;
  OFDMModulator *object;
  creal_T shortPreambleOFDM[64];
  creal_T completeShortPreambleOFDM[160];
  creal_T longPreambleOFDM[64];
  creal_T completeLongPreambleOFDM[160];
  char_T inputPayloadMessage[80];
  static const char_T b_inputPayloadMessage[18] = { 'U', 'n', 'i', 'm', 'p', 'o',
    'r', 't', 'a', 'n', 't', 'M', 'e', 's', 's', 'a', 'g', 'e' };

  static const char_T cv21[3] = { 'E', 'O', 'F' };

  real_T originalData[560];
  real_T x[560];
  int32_T k;
  real_T b_originalData[560];
  commcodegen_CRCGenerator hGen;
  real_T dataWithCRC[563];
  commcodegen_BPSKModulator hMod;
  commcodegen_BPSKModulator *obj;
  comm_BPSKModulator_1 *b_obj;
  static const real_T dv0[4] = { 1.0, 0.0, -1.0, 1.2246467991473532E-16 };

  const mxArray *y;
  static const int32_T iv16[2] = { 1, 45 };

  const mxArray *m1;
  char_T cv22[45];
  static const char_T cv23[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C',
    'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv17[2] = { 1, 4 };

  char_T cv24[4];
  static const char_T cv25[4] = { 's', 't', 'e', 'p' };

  const mxArray *c_y;
  static const int32_T iv18[2] = { 1, 51 };

  char_T cv26[51];
  static const char_T cv27[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l',
    'e', 'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *d_y;
  static const int32_T iv19[2] = { 1, 5 };

  char_T cv28[5];
  static const char_T cv29[5] = { 's', 'e', 't', 'u', 'p' };

  static const int16_T value[8] = { 563, 1, 1, 1, 1, 1, 1, 1 };

  boolean_T anyInputSizeChanged;
  boolean_T exitg2;
  static const int16_T iv20[8] = { 563, 1, 1, 1, 1, 1, 1, 1 };

  creal_T modData[563];
  real_T varargin_1[13];
  const mxArray *e_y;
  static const int32_T iv21[2] = { 1, 45 };

  const mxArray *f_y;
  static const int32_T iv22[2] = { 1, 4 };

  const mxArray *g_y;
  static const int32_T iv23[2] = { 1, 51 };

  const mxArray *h_y;
  static const int32_T iv24[2] = { 1, 5 };

  static const int8_T b_value[8] = { 13, 1, 1, 1, 1, 1, 1, 1 };

  boolean_T exitg1;
  static const int8_T iv25[8] = { 13, 1, 1, 1, 1, 1, 1, 1 };

  creal_T varargout_1[13];
  creal_T b_modData[576];
  creal_T ofdmData[576];
  comm_PNSequence_2 hPN;
  comm_PNSequence_2 *c_obj;
  static const int8_T iv26[8] = { 1, 0, 0, 0, 1, 0, 0, 1 };

  static const int8_T iv27[7] = { 0, 0, 0, 0, 0, 0, 1 };

  int8_T pilot[12];
  uint8_T tmp;
  uint8_T tmp2;
  int8_T pilots[48];
  int32_T ib;
  int32_T ia;
  real_T b_pilots[48];
  creal_T b_r[960];
  creal_T preambles[320];
  OFDMDemodulator_3 *b_object;
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

  static const int8_T iv28[53] = { 1, 1, -1, -1, 1, 1, -1, 1, -1, 1, 1, 1, 1, 1,
    1, -1, -1, 1, 1, -1, 1, -1, 1, 1, 1, 1, 0, 1, -1, -1, 1, 1, -1, 1, -1, 1, -1,
    -1, -1, -1, -1, 1, 1, -1, -1, 1, -1, 1, -1, 1, 1, 1, 1 };

  static const int8_T iv29[48] = { 1, 2, 3, 4, 5, 7, 8, 9, 10, 11, 12, 13, 14,
    15, 16, 17, 18, 19, 21, 22, 23, 24, 25, 26, 28, 29, 30, 31, 32, 33, 35, 36,
    37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 49, 50, 51, 52, 53 };

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
  emxInitStruct_OFDMModulator_1(sp, &hDataMod, &e_emlrtRTEI, TRUE);
  emxInitStruct_OFDMModulator(sp, &hPreambleMod, &f_emlrtRTEI, TRUE);

  /*  generateOFDMSignal: Generate OFDM signal based on the 802.11a standard. */
  /*  This function returns the time domain signal and a structure containing */
  /*  details about the signal itself.  This information is required by the */
  /*  receiver to operate correctly. */
  /* % System Parameters */
  /*  OFDM modulator FFT size */
  /*  Enable moving averages for estimates */
  /* 30     % Make larger to reduce underflow on USRP */
  /*  Message to transmit */
  /*  message is 80 characters max, so extra 3 for EOF, 1 for uniqueID, 1 for */
  /*  the node number of recipient, 1 for origin node */
  st.site = &ub_emlrtRSI;
  b_st.site = &x_emlrtRSI;
  emlrtRandu(&a, 1);
  b_st.site = &y_emlrtRSI;
  b_st.site = &y_emlrtRSI;
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
  object = &hPreambleMod;
  b_st.site = &hb_emlrtRSI;
  c_st.site = &cb_emlrtRSI;
  object->isInitialized = FALSE;
  object->isReleased = FALSE;
  c_st.site = &cb_emlrtRSI;
  c_st.site = &db_emlrtRSI;
  b_st.site = &ib_emlrtRSI;
  c_st.site = &gb_emlrtRSI;

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

  inputPayloadMessage[18] = '1';
  inputPayloadMessage[19] = '1';
  a = muDoubleScalarFloor(a * 128.0);
  if (muDoubleScalarIsNaN(a) || muDoubleScalarIsInf(a)) {
    a = 0.0;
  } else {
    a = muDoubleScalarRem(a, 256.0);
  }

  if (a < 0.0) {
    inputPayloadMessage[20] = (int8_T)-(int8_T)(uint8_T)-a;
  } else {
    inputPayloadMessage[20] = (int8_T)(uint8_T)a;
  }

  for (i = 0; i < 3; i++) {
    inputPayloadMessage[i + 21] = cv21[i];
  }

  for (i = 0; i < 56; i++) {
    inputPayloadMessage[i + 24] = '-';
  }

  st.site = &yb_emlrtRSI;
  OFDMletters2bits(&st, inputPayloadMessage, originalData);
  st.site = &ac_emlrtRSI;
  for (i = 0; i < 80; i++) {
    for (k = 0; k < 7; k++) {
      x[k + 7 * i] = originalData[i + 80 * k];
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
  obj = &hMod;
  b_st.site = &jg_emlrtRSI;
  c_st.site = &eb_emlrtRSI;
  c_st.site = &eb_emlrtRSI;
  obj->isInitialized = FALSE;
  obj->isReleased = FALSE;
  obj->inputDirectFeedthrough1 = FALSE;
  b_st.site = &jg_emlrtRSI;
  b_st.site = &jg_emlrtRSI;
  c_st.site = &gb_emlrtRSI;
  b_st.site = &jg_emlrtRSI;
  b_obj = &obj->cSFunObject;

  /* System object Constructor function: comm.BPSKModulator */
  b_obj->S0_isInitialized = FALSE;
  b_obj->S1_isReleased = FALSE;
  for (i = 0; i < 4; i++) {
    b_obj->P0_modmap[i] = dv0[i];
  }

  b_st.site = &jg_emlrtRSI;
  b_st.site = &jg_emlrtRSI;
  c_st.site = &gb_emlrtRSI;
  b_st.site = &jg_emlrtRSI;
  c_st.site = &gb_emlrtRSI;
  b_st.site = &jg_emlrtRSI;
  c_st.site = &gb_emlrtRSI;
  b_st.site = &jg_emlrtRSI;
  c_st.site = &gb_emlrtRSI;

  /*  BPSK */
  /*  Apply modulator for each subcarrier */
  st.site = &ec_emlrtRSI;
  obj = &hMod;
  if (!obj->isReleased) {
  } else {
    y = NULL;
    m1 = mxCreateCharArray(2, iv16);
    for (i = 0; i < 45; i++) {
      cv22[i] = cv23[i];
    }

    emlrtInitCharArrayR2013a(&st, 45, m1, cv22);
    emlrtAssign(&y, m1);
    b_y = NULL;
    m1 = mxCreateCharArray(2, iv17);
    for (i = 0; i < 4; i++) {
      cv24[i] = cv25[i];
    }

    emlrtInitCharArrayR2013a(&st, 4, m1, cv24);
    emlrtAssign(&b_y, m1);
    b_st.site = &fb_emlrtRSI;
    c_error(&b_st, message(&b_st, y, b_y, &emlrtMCI), &emlrtMCI);
  }

  if (!obj->isInitialized) {
    b_st.site = &fb_emlrtRSI;
    if (!obj->isInitialized) {
    } else {
      c_y = NULL;
      m1 = mxCreateCharArray(2, iv18);
      for (i = 0; i < 51; i++) {
        cv26[i] = cv27[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 51, m1, cv26);
      emlrtAssign(&c_y, m1);
      d_y = NULL;
      m1 = mxCreateCharArray(2, iv19);
      for (i = 0; i < 5; i++) {
        cv28[i] = cv29[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 5, m1, cv28);
      emlrtAssign(&d_y, m1);
      c_st.site = &fb_emlrtRSI;
      c_error(&c_st, message(&c_st, c_y, d_y, &emlrtMCI), &emlrtMCI);
    }

    c_st.site = &fb_emlrtRSI;
    obj->isInitialized = TRUE;
    c_st.site = &fb_emlrtRSI;
    c_st.site = &fb_emlrtRSI;
    c_st.site = &fb_emlrtRSI;
    for (i = 0; i < 8; i++) {
      obj->inputVarSize1[i] = (uint32_T)value[i];
    }

    c_st.site = &fb_emlrtRSI;
    c_st.site = &fb_emlrtRSI;
    c_st.site = &fb_emlrtRSI;
    c_st.site = &fb_emlrtRSI;
    c_st.site = &fb_emlrtRSI;
    c_st.site = &fb_emlrtRSI;
    c_st.site = &fb_emlrtRSI;
    c_st.site = &fb_emlrtRSI;
  }

  b_st.site = &fb_emlrtRSI;
  b_st.site = &fb_emlrtRSI;
  b_st.site = &fb_emlrtRSI;
  c_st.site = &fb_emlrtRSI;
  c_st.site = &fb_emlrtRSI;
  b_st.site = &fb_emlrtRSI;
  b_st.site = &fb_emlrtRSI;
  anyInputSizeChanged = FALSE;
  k = 0;
  exitg2 = FALSE;
  while ((exitg2 == FALSE) && (k < 8)) {
    if (obj->inputVarSize1[k] != (uint32_T)iv20[k]) {
      anyInputSizeChanged = TRUE;
      c_st.site = &fb_emlrtRSI;
      for (i = 0; i < 8; i++) {
        obj->inputVarSize1[i] = (uint32_T)value[i];
      }

      exitg2 = TRUE;
    } else {
      k++;
    }
  }

  if (anyInputSizeChanged) {
    b_st.site = &fb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
  }

  b_st.site = &fb_emlrtRSI;
  c_st.site = &fb_emlrtRSI;
  c_st.site = &fb_emlrtRSI;
  b_st.site = &fb_emlrtRSI;
  b_st.site = &fb_emlrtRSI;
  b_st.site = &fb_emlrtRSI;
  Nondirect_stepImpl(obj, dataWithCRC, modData);

  /*  Pad IFFT */
  st.site = &fc_emlrtRSI;
  b_st.site = &x_emlrtRSI;
  emlrtRandu(varargin_1, 13);
  for (k = 0; k < 13; k++) {
    b_st.site = &y_emlrtRSI;
    b_st.site = &y_emlrtRSI;
    c_st.site = &s_emlrtRSI;
    varargin_1[k] = muDoubleScalarFloor(varargin_1[k] * 2.0);
  }

  st.site = &fc_emlrtRSI;
  obj = &hMod;
  if (!obj->isReleased) {
  } else {
    e_y = NULL;
    m1 = mxCreateCharArray(2, iv21);
    for (i = 0; i < 45; i++) {
      cv22[i] = cv23[i];
    }

    emlrtInitCharArrayR2013a(&st, 45, m1, cv22);
    emlrtAssign(&e_y, m1);
    f_y = NULL;
    m1 = mxCreateCharArray(2, iv22);
    for (i = 0; i < 4; i++) {
      cv24[i] = cv25[i];
    }

    emlrtInitCharArrayR2013a(&st, 4, m1, cv24);
    emlrtAssign(&f_y, m1);
    b_st.site = &fb_emlrtRSI;
    c_error(&b_st, message(&b_st, e_y, f_y, &emlrtMCI), &emlrtMCI);
  }

  if (!obj->isInitialized) {
    b_st.site = &fb_emlrtRSI;
    if (!obj->isInitialized) {
    } else {
      g_y = NULL;
      m1 = mxCreateCharArray(2, iv23);
      for (i = 0; i < 51; i++) {
        cv26[i] = cv27[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 51, m1, cv26);
      emlrtAssign(&g_y, m1);
      h_y = NULL;
      m1 = mxCreateCharArray(2, iv24);
      for (i = 0; i < 5; i++) {
        cv28[i] = cv29[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 5, m1, cv28);
      emlrtAssign(&h_y, m1);
      c_st.site = &fb_emlrtRSI;
      c_error(&c_st, message(&c_st, g_y, h_y, &emlrtMCI), &emlrtMCI);
    }

    c_st.site = &fb_emlrtRSI;
    obj->isInitialized = TRUE;
    c_st.site = &fb_emlrtRSI;
    c_st.site = &fb_emlrtRSI;
    c_st.site = &fb_emlrtRSI;
    for (i = 0; i < 8; i++) {
      obj->inputVarSize1[i] = (uint32_T)b_value[i];
    }

    c_st.site = &fb_emlrtRSI;
    c_st.site = &fb_emlrtRSI;
    c_st.site = &fb_emlrtRSI;
    c_st.site = &fb_emlrtRSI;
    c_st.site = &fb_emlrtRSI;
    c_st.site = &fb_emlrtRSI;
    c_st.site = &fb_emlrtRSI;
    c_st.site = &fb_emlrtRSI;
  }

  b_st.site = &fb_emlrtRSI;
  b_st.site = &fb_emlrtRSI;
  b_st.site = &fb_emlrtRSI;
  c_st.site = &fb_emlrtRSI;
  c_st.site = &fb_emlrtRSI;
  b_st.site = &fb_emlrtRSI;
  b_st.site = &fb_emlrtRSI;
  anyInputSizeChanged = FALSE;
  k = 0;
  exitg1 = FALSE;
  while ((exitg1 == FALSE) && (k < 8)) {
    if (obj->inputVarSize1[k] != (uint32_T)iv25[k]) {
      anyInputSizeChanged = TRUE;
      c_st.site = &fb_emlrtRSI;
      for (i = 0; i < 8; i++) {
        obj->inputVarSize1[i] = (uint32_T)b_value[i];
      }

      exitg1 = TRUE;
    } else {
      k++;
    }
  }

  if (anyInputSizeChanged) {
    b_st.site = &fb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
  }

  b_st.site = &fb_emlrtRSI;
  c_st.site = &fb_emlrtRSI;
  c_st.site = &fb_emlrtRSI;
  b_st.site = &fb_emlrtRSI;
  b_st.site = &fb_emlrtRSI;
  b_st.site = &fb_emlrtRSI;
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
  c_obj = &hPN;

  /* System object Constructor function: comm.PNSequence */
  c_obj->S0_isInitialized = FALSE;
  c_obj->S1_isReleased = FALSE;
  for (i = 0; i < 8; i++) {
    c_obj->P0_Polynomial[i] = (uint8_T)iv26[i];
  }

  for (i = 0; i < 7; i++) {
    c_obj->P1_IniState[i] = 1;
    c_obj->P2_Mask[i] = (uint8_T)iv27[i];
  }

  st.site = &ic_emlrtRSI;
  c_obj = &hPN;
  if (!c_obj->S0_isInitialized) {
    c_obj->S0_isInitialized = TRUE;
    if (c_obj->S1_isReleased) {
      emlrtErrorWithMessageIdR2012b(&st, &cc_emlrtRTEI,
        "MATLAB:system:runtimeMethodCalledWhenReleasedCodegen", 0);
    }

    b_st.site = NULL;
    b_st.site = NULL;

    /* System object Initialization function: comm.PNSequence */
    for (k = 0; k < 7; k++) {
      c_obj->W0_shiftReg[k] = c_obj->P1_IniState[k];
      emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, &b_st);
    }
  }

  b_st.site = NULL;

  /* System object Outputs function: comm.PNSequence */
  for (k = 0; k < 12; k++) {
    tmp = 0;
    for (i = 0; i < 7; i++) {
      tmp = (uint8_T)((uint32_T)tmp + (uint8_T)((uint32_T)c_obj->P0_Polynomial[i
        + 1] * c_obj->W0_shiftReg[i]));
    }

    tmp &= 1;
    tmp2 = 0;
    for (i = 0; i < 7; i++) {
      tmp2 = (uint8_T)((uint32_T)tmp2 + (uint8_T)((uint32_T)c_obj->W0_shiftReg[i]
        * c_obj->P2_Mask[i]));
    }

    pilot[k] = (int8_T)(tmp2 & 1);
    for (i = 5; i > -1; i += -1) {
      c_obj->W0_shiftReg[i + 1] = c_obj->W0_shiftReg[i];
    }

    c_obj->W0_shiftReg[0U] = tmp;
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
    for (k = 0; k < 4; k++) {
      b_pilots[k + (i << 2)] = 2.0 * (real_T)(pilots[i + 12 * k] < 1) - 1.0;
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
  d_SystemCore_step(&st, &hDataMod, ofdmData, b_pilots, b_r);

  /*  Add preambles to data */
  memcpy(&preambles[0], &completeShortPreambleOFDM[0], 160U * sizeof(creal_T));
  memcpy(&preambles[160], &completeLongPreambleOFDM[0], 160U * sizeof(creal_T));
  memcpy(&SD->u1.f9.r[0], &preambles[0], 320U * sizeof(creal_T));
  memcpy(&SD->u1.f9.r[320], &b_r[0], 960U * sizeof(creal_T));

  /*  Repeat frame (Used in debugging) */
  st.site = &oc_emlrtRSI;
  ib = 0;
  for (i = 0; i < 30; i++) {
    ia = 0;
    for (k = 0; k < 1280; k++) {
      r[ib] = SD->u1.f9.r[ia];
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
  *hDataDemod = OFDMDemodulator_OFDMDemodulator(&st, iobj_0);
  st.site = &qc_emlrtRSI;
  b_object = iobj_1;
  *hPreambleDemod = b_object;
  b_st.site = &mj_emlrtRSI;
  b_object = *hPreambleDemod;
  c_st.site = &cb_emlrtRSI;
  b_object->isInitialized = FALSE;
  b_object->isReleased = FALSE;
  c_st.site = &cb_emlrtRSI;
  c_st.site = &db_emlrtRSI;
  b_st.site = &nj_emlrtRSI;
  c_st.site = &gb_emlrtRSI;
  c_st.site = &gb_emlrtRSI;
  b_st.site = &oj_emlrtRSI;
  c_st.site = &gb_emlrtRSI;
  c_st.site = &gb_emlrtRSI;
  b_st.site = &pj_emlrtRSI;
  c_st.site = &gb_emlrtRSI;
  c_st.site = &gb_emlrtRSI;
  b_st.site = &qj_emlrtRSI;
  c_st.site = &gb_emlrtRSI;
  b_st.site = &rj_emlrtRSI;
  c_st.site = &gb_emlrtRSI;
  c_st.site = &gb_emlrtRSI;
  b_st.site = &sj_emlrtRSI;
  c_st.site = &gb_emlrtRSI;

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
    tx->longPreamble[i] = iv28[i];
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
    tx->dataSubcarrierIndexies.data[i] = iv29[i];
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
  st.site = NULL;
  Destructor(&hPN);
  emxFreeStruct_OFDMModulator(&hPreambleMod);
  emxFreeStruct_OFDMModulator_1(&hDataMod);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (generateOFDMSignal_TX2.c) */
