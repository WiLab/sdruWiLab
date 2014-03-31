/*
 * generateOFDMSignal_TX2.c
 *
 * Code generation for function 'generateOFDMSignal_TX2'
 *
 * C source code generated on: Thu Mar  6 18:47:04 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testMACReceiver.h"
#include "generateOFDMSignal_TX2.h"
#include "CRCGenerator.h"
#include "Nondirect1.h"
#include "step.h"
#include "testMACReceiver_emxutil.h"
#include "PHYReceive.h"
#include "OFDMDemodulator.h"
#include "SystemCore.h"
#include "OFDMModulator.h"
#include "OFDMletters2bits.h"
#include "testMACReceiver_mexutil.h"
#include "testMACReceiver_data.h"
#include <stdio.h>

/* Variable Definitions */
static emlrtRSInfo rb_emlrtRSI = { 16, "generateOFDMSignal_TX2",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/private/generateOFDMSignal_TX2.m"
};

static emlrtRSInfo sb_emlrtRSI = { 39, "generateOFDMSignal_TX2",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/private/generateOFDMSignal_TX2.m"
};

static emlrtRSInfo tb_emlrtRSI = { 46, "generateOFDMSignal_TX2",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/private/generateOFDMSignal_TX2.m"
};

static emlrtRSInfo ub_emlrtRSI = { 58, "generateOFDMSignal_TX2",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/private/generateOFDMSignal_TX2.m"
};

static emlrtRSInfo vb_emlrtRSI = { 69, "generateOFDMSignal_TX2",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/private/generateOFDMSignal_TX2.m"
};

static emlrtRSInfo wb_emlrtRSI = { 70, "generateOFDMSignal_TX2",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/private/generateOFDMSignal_TX2.m"
};

static emlrtRSInfo xb_emlrtRSI = { 73, "generateOFDMSignal_TX2",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/private/generateOFDMSignal_TX2.m"
};

static emlrtRSInfo yb_emlrtRSI = { 74, "generateOFDMSignal_TX2",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/private/generateOFDMSignal_TX2.m"
};

static emlrtRSInfo ac_emlrtRSI = { 77, "generateOFDMSignal_TX2",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/private/generateOFDMSignal_TX2.m"
};

static emlrtRSInfo bc_emlrtRSI = { 80, "generateOFDMSignal_TX2",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/private/generateOFDMSignal_TX2.m"
};

static emlrtRSInfo cc_emlrtRSI = { 87, "generateOFDMSignal_TX2",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/private/generateOFDMSignal_TX2.m"
};

static emlrtRSInfo dc_emlrtRSI = { 96, "generateOFDMSignal_TX2",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/private/generateOFDMSignal_TX2.m"
};

static emlrtRSInfo ec_emlrtRSI = { 99, "generateOFDMSignal_TX2",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/private/generateOFDMSignal_TX2.m"
};

static emlrtRSInfo fc_emlrtRSI = { 104, "generateOFDMSignal_TX2",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/private/generateOFDMSignal_TX2.m"
};

static emlrtRSInfo gc_emlrtRSI = { 105, "generateOFDMSignal_TX2",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/private/generateOFDMSignal_TX2.m"
};

static emlrtRSInfo hc_emlrtRSI = { 106, "generateOFDMSignal_TX2",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/private/generateOFDMSignal_TX2.m"
};

static emlrtRSInfo ic_emlrtRSI = { 107, "generateOFDMSignal_TX2",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/private/generateOFDMSignal_TX2.m"
};

static emlrtRSInfo jc_emlrtRSI = { 110, "generateOFDMSignal_TX2",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/private/generateOFDMSignal_TX2.m"
};

static emlrtRSInfo kc_emlrtRSI = { 121, "generateOFDMSignal_TX2",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/private/generateOFDMSignal_TX2.m"
};

static emlrtRSInfo lc_emlrtRSI = { 129, "generateOFDMSignal_TX2",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/private/generateOFDMSignal_TX2.m"
};

static emlrtRSInfo mc_emlrtRSI = { 134, "generateOFDMSignal_TX2",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/private/generateOFDMSignal_TX2.m"
};

static emlrtRSInfo nc_emlrtRSI = { 135, "generateOFDMSignal_TX2",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/private/generateOFDMSignal_TX2.m"
};

static emlrtRSInfo cv_emlrtRSI = { 17, "generateOFDMSignal_TX2",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/private/generateOFDMSignal_TX2.m"
};

static emlrtRSInfo dv_emlrtRSI = { 18, "generateOFDMSignal_TX2",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/private/generateOFDMSignal_TX2.m"
};

static emlrtRSInfo ev_emlrtRSI = { 138, "generateOFDMSignal_TX2",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/private/generateOFDMSignal_TX2.m"
};

static emlrtRTEInfo e_emlrtRTEI = { 110, 1, "generateOFDMSignal_TX2",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/private/generateOFDMSignal_TX2.m"
};

static emlrtRTEInfo f_emlrtRTEI = { 39, 1, "generateOFDMSignal_TX2",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/private/generateOFDMSignal_TX2.m"
};

/* Function Definitions */
void b_generateOFDMSignal_TX2(const emlrtStack *sp, real_T originNode, real_T
  destNode, OFDMDemodulator_2 *iobj_0, OFDMDemodulator_3 *iobj_1,
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
  static const char_T b_inputPayloadMessage[3] = { 'A', 'C', 'K' };

  real_T d4;
  static const char_T cv184[3] = { 'E', 'O', 'F' };

  real_T originalData[560];
  real_T x[560];
  int32_T k;
  real_T b_originalData[560];
  commcodegen_CRCGenerator_12 hGen;
  real_T dataWithCRC[563];
  commcodegen_BPSKModulator_2 hMod;
  commcodegen_BPSKModulator_2 *obj;
  comm_BPSKModulator_9 *b_obj;
  static const real_T dv12[4] = { 1.0, 0.0, -1.0, 1.2246467991473532E-16 };

  const mxArray *y;
  static const int32_T iv144[2] = { 1, 45 };

  const mxArray *m36;
  char_T cv185[45];
  static const char_T cv186[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C',
    'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv145[2] = { 1, 4 };

  char_T cv187[4];
  static const char_T cv188[4] = { 's', 't', 'e', 'p' };

  const mxArray *c_y;
  static const int32_T iv146[2] = { 1, 51 };

  char_T cv189[51];
  static const char_T cv190[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l',
    'e', 'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *d_y;
  static const int32_T iv147[2] = { 1, 5 };

  char_T cv191[5];
  static const char_T cv192[5] = { 's', 'e', 't', 'u', 'p' };

  static const int16_T value[8] = { 563, 1, 1, 1, 1, 1, 1, 1 };

  boolean_T anyInputSizeChanged;
  boolean_T exitg2;
  static const int16_T iv148[8] = { 563, 1, 1, 1, 1, 1, 1, 1 };

  creal_T modData[563];
  real_T varargin_1[13];
  const mxArray *e_y;
  static const int32_T iv149[2] = { 1, 45 };

  const mxArray *f_y;
  static const int32_T iv150[2] = { 1, 4 };

  const mxArray *g_y;
  static const int32_T iv151[2] = { 1, 51 };

  const mxArray *h_y;
  static const int32_T iv152[2] = { 1, 5 };

  static const int8_T b_value[8] = { 13, 1, 1, 1, 1, 1, 1, 1 };

  boolean_T exitg1;
  static const int8_T iv153[8] = { 13, 1, 1, 1, 1, 1, 1, 1 };

  creal_T varargout_1[13];
  creal_T b_modData[576];
  creal_T ofdmData[576];
  comm_PNSequence_10 hPN;
  comm_PNSequence_10 *c_obj;
  static const int8_T iv154[8] = { 1, 0, 0, 0, 1, 0, 0, 1 };

  static const int8_T iv155[7] = { 0, 0, 0, 0, 0, 0, 1 };

  int8_T pilot[12];
  uint8_T tmp;
  uint8_T tmp2;
  int8_T pilots[48];
  int32_T ib;
  int32_T ia;
  real_T b_pilots[48];
  creal_T b_r[960];
  creal_T preambles[320];
  creal_T c_r[1280];
  OFDMDemodulator_3 *b_object;
  static const creal_T dcv5[53] = { { 0.0, 0.0 }, { 0.0, 0.0 }, { 1.0, 1.0 }, {
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

  static const int8_T iv156[53] = { 1, 1, -1, -1, 1, 1, -1, 1, -1, 1, 1, 1, 1, 1,
    1, -1, -1, 1, 1, -1, 1, -1, 1, 1, 1, 1, 0, 1, -1, -1, 1, 1, -1, 1, -1, 1, -1,
    -1, -1, -1, -1, 1, 1, -1, -1, 1, -1, 1, -1, 1, 1, 1, 1 };

  static const int8_T iv157[48] = { 1, 2, 3, 4, 5, 7, 8, 9, 10, 11, 12, 13, 14,
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
  st.site = &rb_emlrtRSI;
  b_st.site = &u_emlrtRSI;
  emlrtRandu(&a, 1);
  b_st.site = &v_emlrtRSI;
  b_st.site = &v_emlrtRSI;
  c_st.site = &p_emlrtRSI;
  st.site = &rb_emlrtRSI;
  i = (int32_T)muDoubleScalarFloor(a * 128.0);
  emlrtDynamicBoundsCheckFastR2012b(i, 0, 255, &i_emlrtBCI, &st);

  /* Add additional character to differentiate messages */
  st.site = &cv_emlrtRSI;
  i = (int32_T)(48.0 + destNode);
  emlrtDynamicBoundsCheckFastR2012b(i, 0, 255, &i_emlrtBCI, &st);
  st.site = &dv_emlrtRSI;
  i = (int32_T)(48.0 + originNode);
  emlrtDynamicBoundsCheckFastR2012b(i, 0, 255, &i_emlrtBCI, &st);

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
  st.site = &sb_emlrtRSI;
  object = &hPreambleMod;
  b_st.site = &eb_emlrtRSI;
  c_st.site = &y_emlrtRSI;
  object->isInitialized = FALSE;
  object->isReleased = FALSE;
  c_st.site = &y_emlrtRSI;
  c_st.site = &ab_emlrtRSI;
  b_st.site = &fb_emlrtRSI;
  c_st.site = &db_emlrtRSI;

  /*  Modulate and scale */
  st.site = &tb_emlrtRSI;
  SystemCore_step(&st, &hPreambleMod, shortPreambleOFDM);
  st.site = &tb_emlrtRSI;
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
  st.site = &ub_emlrtRSI;
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

  d4 = muDoubleScalarFloor(48.0 + originNode);
  if (muDoubleScalarIsNaN(d4) || muDoubleScalarIsInf(d4)) {
    d4 = 0.0;
  } else {
    d4 = muDoubleScalarRem(d4, 256.0);
  }

  if (d4 < 0.0) {
    inputPayloadMessage[3] = (int8_T)-(int8_T)(uint8_T)-d4;
  } else {
    inputPayloadMessage[3] = (int8_T)(uint8_T)d4;
  }

  d4 = muDoubleScalarFloor(48.0 + destNode);
  if (muDoubleScalarIsNaN(d4) || muDoubleScalarIsInf(d4)) {
    d4 = 0.0;
  } else {
    d4 = muDoubleScalarRem(d4, 256.0);
  }

  if (d4 < 0.0) {
    inputPayloadMessage[4] = (int8_T)-(int8_T)(uint8_T)-d4;
  } else {
    inputPayloadMessage[4] = (int8_T)(uint8_T)d4;
  }

  d4 = muDoubleScalarFloor(a * 128.0);
  if (muDoubleScalarIsNaN(d4) || muDoubleScalarIsInf(d4)) {
    d4 = 0.0;
  } else {
    d4 = muDoubleScalarRem(d4, 256.0);
  }

  if (d4 < 0.0) {
    inputPayloadMessage[5] = (int8_T)-(int8_T)(uint8_T)-d4;
  } else {
    inputPayloadMessage[5] = (int8_T)(uint8_T)d4;
  }

  for (i = 0; i < 3; i++) {
    inputPayloadMessage[i + 6] = cv184[i];
  }

  for (i = 0; i < 71; i++) {
    inputPayloadMessage[i + 9] = '-';
  }

  st.site = &vb_emlrtRSI;
  OFDMletters2bits(&st, inputPayloadMessage, originalData);
  st.site = &wb_emlrtRSI;
  for (i = 0; i < 80; i++) {
    for (k = 0; k < 7; k++) {
      x[k + 7 * i] = originalData[i + 80 * k];
    }
  }

  memcpy(&b_originalData[0], &x[0], 560U * sizeof(real_T));

  /*  Generate CRC */
  st.site = &xb_emlrtRSI;
  c_CRCGenerator_CRCGenerator(&hGen);
  st.site = &yb_emlrtRSI;
  h_SystemCore_step(&st, &hGen, b_originalData, dataWithCRC);

  /*  Add CRC */
  /*  Construct modulator for each subcarrier */
  st.site = &ac_emlrtRSI;
  obj = &hMod;
  b_st.site = &gg_emlrtRSI;
  c_st.site = &bb_emlrtRSI;
  c_st.site = &bb_emlrtRSI;
  obj->isInitialized = FALSE;
  obj->isReleased = FALSE;
  obj->inputDirectFeedthrough1 = FALSE;
  b_st.site = &gg_emlrtRSI;
  b_st.site = &gg_emlrtRSI;
  c_st.site = &db_emlrtRSI;
  b_st.site = &gg_emlrtRSI;
  b_obj = &obj->cSFunObject;

  /* System object Constructor function: comm.BPSKModulator */
  b_obj->S0_isInitialized = FALSE;
  b_obj->S1_isReleased = FALSE;
  for (i = 0; i < 4; i++) {
    b_obj->P0_modmap[i] = dv12[i];
  }

  b_st.site = &gg_emlrtRSI;
  b_st.site = &gg_emlrtRSI;
  c_st.site = &db_emlrtRSI;
  b_st.site = &gg_emlrtRSI;
  c_st.site = &db_emlrtRSI;
  b_st.site = &gg_emlrtRSI;
  c_st.site = &db_emlrtRSI;
  b_st.site = &gg_emlrtRSI;
  c_st.site = &db_emlrtRSI;

  /*  BPSK */
  /*  Apply modulator for each subcarrier */
  st.site = &bc_emlrtRSI;
  obj = &hMod;
  if (!obj->isReleased) {
  } else {
    y = NULL;
    m36 = mxCreateCharArray(2, iv144);
    for (i = 0; i < 45; i++) {
      cv185[i] = cv186[i];
    }

    emlrtInitCharArrayR2013a(&st, 45, m36, cv185);
    emlrtAssign(&y, m36);
    b_y = NULL;
    m36 = mxCreateCharArray(2, iv145);
    for (i = 0; i < 4; i++) {
      cv187[i] = cv188[i];
    }

    emlrtInitCharArrayR2013a(&st, 4, m36, cv187);
    emlrtAssign(&b_y, m36);
    b_st.site = &cb_emlrtRSI;
    c_error(&b_st, message(&b_st, y, b_y, &emlrtMCI), &emlrtMCI);
  }

  if (!obj->isInitialized) {
    b_st.site = &cb_emlrtRSI;
    if (!obj->isInitialized) {
    } else {
      c_y = NULL;
      m36 = mxCreateCharArray(2, iv146);
      for (i = 0; i < 51; i++) {
        cv189[i] = cv190[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 51, m36, cv189);
      emlrtAssign(&c_y, m36);
      d_y = NULL;
      m36 = mxCreateCharArray(2, iv147);
      for (i = 0; i < 5; i++) {
        cv191[i] = cv192[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 5, m36, cv191);
      emlrtAssign(&d_y, m36);
      c_st.site = &cb_emlrtRSI;
      c_error(&c_st, message(&c_st, c_y, d_y, &emlrtMCI), &emlrtMCI);
    }

    c_st.site = &cb_emlrtRSI;
    obj->isInitialized = TRUE;
    c_st.site = &cb_emlrtRSI;
    c_st.site = &cb_emlrtRSI;
    c_st.site = &cb_emlrtRSI;
    for (i = 0; i < 8; i++) {
      obj->inputVarSize1[i] = (uint32_T)value[i];
    }

    c_st.site = &cb_emlrtRSI;
    c_st.site = &cb_emlrtRSI;
    c_st.site = &cb_emlrtRSI;
    c_st.site = &cb_emlrtRSI;
    c_st.site = &cb_emlrtRSI;
    c_st.site = &cb_emlrtRSI;
    c_st.site = &cb_emlrtRSI;
    c_st.site = &cb_emlrtRSI;
  }

  b_st.site = &cb_emlrtRSI;
  b_st.site = &cb_emlrtRSI;
  b_st.site = &cb_emlrtRSI;
  c_st.site = &cb_emlrtRSI;
  c_st.site = &cb_emlrtRSI;
  b_st.site = &cb_emlrtRSI;
  b_st.site = &cb_emlrtRSI;
  anyInputSizeChanged = FALSE;
  k = 0;
  exitg2 = FALSE;
  while ((exitg2 == FALSE) && (k < 8)) {
    if (obj->inputVarSize1[k] != (uint32_T)iv148[k]) {
      anyInputSizeChanged = TRUE;
      c_st.site = &cb_emlrtRSI;
      for (i = 0; i < 8; i++) {
        obj->inputVarSize1[i] = (uint32_T)value[i];
      }

      exitg2 = TRUE;
    } else {
      k++;
    }
  }

  if (anyInputSizeChanged) {
    b_st.site = &cb_emlrtRSI;
    b_st.site = &cb_emlrtRSI;
  }

  b_st.site = &cb_emlrtRSI;
  c_st.site = &cb_emlrtRSI;
  c_st.site = &cb_emlrtRSI;
  b_st.site = &cb_emlrtRSI;
  b_st.site = &cb_emlrtRSI;
  b_st.site = &cb_emlrtRSI;
  e_Nondirect_stepImpl(obj, dataWithCRC, modData);

  /*  Pad IFFT */
  st.site = &cc_emlrtRSI;
  b_st.site = &u_emlrtRSI;
  emlrtRandu(varargin_1, 13);
  for (k = 0; k < 13; k++) {
    b_st.site = &v_emlrtRSI;
    b_st.site = &v_emlrtRSI;
    c_st.site = &p_emlrtRSI;
    varargin_1[k] = muDoubleScalarFloor(varargin_1[k] * 2.0);
  }

  st.site = &cc_emlrtRSI;
  obj = &hMod;
  if (!obj->isReleased) {
  } else {
    e_y = NULL;
    m36 = mxCreateCharArray(2, iv149);
    for (i = 0; i < 45; i++) {
      cv185[i] = cv186[i];
    }

    emlrtInitCharArrayR2013a(&st, 45, m36, cv185);
    emlrtAssign(&e_y, m36);
    f_y = NULL;
    m36 = mxCreateCharArray(2, iv150);
    for (i = 0; i < 4; i++) {
      cv187[i] = cv188[i];
    }

    emlrtInitCharArrayR2013a(&st, 4, m36, cv187);
    emlrtAssign(&f_y, m36);
    b_st.site = &cb_emlrtRSI;
    c_error(&b_st, message(&b_st, e_y, f_y, &emlrtMCI), &emlrtMCI);
  }

  if (!obj->isInitialized) {
    b_st.site = &cb_emlrtRSI;
    if (!obj->isInitialized) {
    } else {
      g_y = NULL;
      m36 = mxCreateCharArray(2, iv151);
      for (i = 0; i < 51; i++) {
        cv189[i] = cv190[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 51, m36, cv189);
      emlrtAssign(&g_y, m36);
      h_y = NULL;
      m36 = mxCreateCharArray(2, iv152);
      for (i = 0; i < 5; i++) {
        cv191[i] = cv192[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 5, m36, cv191);
      emlrtAssign(&h_y, m36);
      c_st.site = &cb_emlrtRSI;
      c_error(&c_st, message(&c_st, g_y, h_y, &emlrtMCI), &emlrtMCI);
    }

    c_st.site = &cb_emlrtRSI;
    obj->isInitialized = TRUE;
    c_st.site = &cb_emlrtRSI;
    c_st.site = &cb_emlrtRSI;
    c_st.site = &cb_emlrtRSI;
    for (i = 0; i < 8; i++) {
      obj->inputVarSize1[i] = (uint32_T)b_value[i];
    }

    c_st.site = &cb_emlrtRSI;
    c_st.site = &cb_emlrtRSI;
    c_st.site = &cb_emlrtRSI;
    c_st.site = &cb_emlrtRSI;
    c_st.site = &cb_emlrtRSI;
    c_st.site = &cb_emlrtRSI;
    c_st.site = &cb_emlrtRSI;
    c_st.site = &cb_emlrtRSI;
  }

  b_st.site = &cb_emlrtRSI;
  b_st.site = &cb_emlrtRSI;
  b_st.site = &cb_emlrtRSI;
  c_st.site = &cb_emlrtRSI;
  c_st.site = &cb_emlrtRSI;
  b_st.site = &cb_emlrtRSI;
  b_st.site = &cb_emlrtRSI;
  anyInputSizeChanged = FALSE;
  k = 0;
  exitg1 = FALSE;
  while ((exitg1 == FALSE) && (k < 8)) {
    if (obj->inputVarSize1[k] != (uint32_T)iv153[k]) {
      anyInputSizeChanged = TRUE;
      c_st.site = &cb_emlrtRSI;
      for (i = 0; i < 8; i++) {
        obj->inputVarSize1[i] = (uint32_T)b_value[i];
      }

      exitg1 = TRUE;
    } else {
      k++;
    }
  }

  if (anyInputSizeChanged) {
    b_st.site = &cb_emlrtRSI;
    b_st.site = &cb_emlrtRSI;
  }

  b_st.site = &cb_emlrtRSI;
  c_st.site = &cb_emlrtRSI;
  c_st.site = &cb_emlrtRSI;
  b_st.site = &cb_emlrtRSI;
  b_st.site = &cb_emlrtRSI;
  b_st.site = &cb_emlrtRSI;
  f_Nondirect_stepImpl(obj, varargin_1, varargout_1);
  memcpy(&b_modData[0], &modData[0], 563U * sizeof(creal_T));
  memcpy(&b_modData[563], &varargout_1[0], 13U * sizeof(creal_T));

  /*  Calculate required data sizes for correct receiver operation */
  /*  Save desired message size */
  /*  Save number of transmitted frames */
  /*  Convert data into subcarrier streams */
  st.site = &dc_emlrtRSI;
  memcpy(&ofdmData[0], &b_modData[0], 576U * sizeof(creal_T));

  /*  Create Pilots */
  st.site = &ec_emlrtRSI;
  c_obj = &hPN;

  /* System object Constructor function: comm.PNSequence */
  c_obj->S0_isInitialized = FALSE;
  c_obj->S1_isReleased = FALSE;
  for (i = 0; i < 8; i++) {
    c_obj->P0_Polynomial[i] = (uint8_T)iv154[i];
  }

  for (i = 0; i < 7; i++) {
    c_obj->P1_IniState[i] = 1;
    c_obj->P2_Mask[i] = (uint8_T)iv155[i];
  }

  st.site = &fc_emlrtRSI;
  c_obj = &hPN;
  if (!c_obj->S0_isInitialized) {
    c_obj->S0_isInitialized = TRUE;
    if (c_obj->S1_isReleased) {
      emlrtErrorWithMessageIdR2012b(&st, &bc_emlrtRTEI,
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
  st.site = &gc_emlrtRSI;
  ib = 0;
  for (i = 0; i < 4; i++) {
    ia = 0;
    for (k = 0; k < 12; k++) {
      pilots[ib] = pilot[ia];
      b_st.site = &ng_emlrtRSI;
      ia++;
      b_st.site = &og_emlrtRSI;
      ib++;
    }
  }

  /*  Expand to all pilot tones */
  st.site = &hc_emlrtRSI;
  for (i = 0; i < 12; i++) {
    for (k = 0; k < 4; k++) {
      b_pilots[k + (i << 2)] = 2.0 * (real_T)(pilots[i + 12 * k] < 1) - 1.0;
    }
  }

  /*  Bipolar to unipolar */
  st.site = &ic_emlrtRSI;
  for (i = 0; i < 12; i++) {
    b_pilots[3 + (i << 2)] = -b_pilots[3 + (i << 2)];
  }

  /*  Invert last pilot */
  /*  Construct Modulator */
  st.site = &jc_emlrtRSI;
  b_OFDMModulator_OFDMModulator(&st, &hDataMod);

  /*  Modulate */
  st.site = &kc_emlrtRSI;
  d_SystemCore_step(&st, &hDataMod, ofdmData, b_pilots, b_r);

  /*  Add preambles to data */
  memcpy(&preambles[0], &completeShortPreambleOFDM[0], 160U * sizeof(creal_T));
  memcpy(&preambles[160], &completeLongPreambleOFDM[0], 160U * sizeof(creal_T));
  memcpy(&c_r[0], &preambles[0], 320U * sizeof(creal_T));
  memcpy(&c_r[320], &b_r[0], 960U * sizeof(creal_T));

  /*  Repeat frame (Used in debugging) */
  st.site = &lc_emlrtRSI;
  ib = 0;
  for (i = 0; i < 30; i++) {
    ia = 0;
    for (k = 0; k < 1280; k++) {
      r[ib] = c_r[ia];
      b_st.site = &ng_emlrtRSI;
      ia++;
      b_st.site = &og_emlrtRSI;
      ib++;
    }
  }

  /*  Save Demodulator object data for receiver */
  /* hDataDemod = get(OFDMDemodulator(hDataMod)); */
  /* hPreambleDemod = get(OFDMDemodulator(hPreambleMod)); */
  st.site = &mc_emlrtRSI;
  *hDataDemod = OFDMDemodulator_OFDMDemodulator(&st, iobj_0);
  st.site = &nc_emlrtRSI;
  b_object = iobj_1;
  *hPreambleDemod = b_object;
  b_st.site = &jj_emlrtRSI;
  b_object = *hPreambleDemod;
  c_st.site = &y_emlrtRSI;
  b_object->isInitialized = FALSE;
  b_object->isReleased = FALSE;
  c_st.site = &y_emlrtRSI;
  c_st.site = &ab_emlrtRSI;
  b_st.site = &kj_emlrtRSI;
  c_st.site = &db_emlrtRSI;
  c_st.site = &db_emlrtRSI;
  b_st.site = &lj_emlrtRSI;
  c_st.site = &db_emlrtRSI;
  c_st.site = &db_emlrtRSI;
  b_st.site = &mj_emlrtRSI;
  c_st.site = &db_emlrtRSI;
  c_st.site = &db_emlrtRSI;
  b_st.site = &nj_emlrtRSI;
  c_st.site = &db_emlrtRSI;
  b_st.site = &oj_emlrtRSI;
  c_st.site = &db_emlrtRSI;
  c_st.site = &db_emlrtRSI;
  b_st.site = &pj_emlrtRSI;
  c_st.site = &db_emlrtRSI;

  /*  Calcuate OFDM frequency bin size */
  st.site = &ev_emlrtRSI;
  b_st.site = &j_emlrtRSI;
  c_st.site = &k_emlrtRSI;

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
    tx->shortPreamble[i] = dcv5[i];
  }

  for (i = 0; i < 53; i++) {
    tx->longPreamble[i] = iv156[i];
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
    tx->dataSubcarrierIndexies.data[i] = iv157[i];
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
  d_Destructor(&hPN);
  emxFreeStruct_OFDMModulator(&hPreambleMod);
  emxFreeStruct_OFDMModulator_1(&hDataMod);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void generateOFDMSignal_TX2(const emlrtStack *sp, OFDMDemodulator_2 *iobj_0,
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
  static const char_T b_inputPayloadMessage[18] = { 'U', 'n', 'i', 'm', 'p', 'o',
    'r', 't', 'a', 'n', 't', 'M', 'e', 's', 's', 'a', 'g', 'e' };

  static const char_T cv3[3] = { 'E', 'O', 'F' };

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
  static const int32_T iv0[2] = { 1, 45 };

  const mxArray *m0;
  char_T cv4[45];
  static const char_T cv5[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C',
    'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv1[2] = { 1, 4 };

  char_T cv6[4];
  static const char_T cv7[4] = { 's', 't', 'e', 'p' };

  const mxArray *c_y;
  static const int32_T iv2[2] = { 1, 51 };

  char_T cv8[51];
  static const char_T cv9[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l',
    'e', 'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *d_y;
  static const int32_T iv3[2] = { 1, 5 };

  char_T cv10[5];
  static const char_T cv11[5] = { 's', 'e', 't', 'u', 'p' };

  static const int16_T value[8] = { 563, 1, 1, 1, 1, 1, 1, 1 };

  boolean_T anyInputSizeChanged;
  boolean_T exitg2;
  static const int16_T iv4[8] = { 563, 1, 1, 1, 1, 1, 1, 1 };

  creal_T modData[563];
  real_T varargin_1[13];
  const mxArray *e_y;
  static const int32_T iv5[2] = { 1, 45 };

  const mxArray *f_y;
  static const int32_T iv6[2] = { 1, 4 };

  const mxArray *g_y;
  static const int32_T iv7[2] = { 1, 51 };

  const mxArray *h_y;
  static const int32_T iv8[2] = { 1, 5 };

  static const int8_T b_value[8] = { 13, 1, 1, 1, 1, 1, 1, 1 };

  boolean_T exitg1;
  static const int8_T iv9[8] = { 13, 1, 1, 1, 1, 1, 1, 1 };

  creal_T varargout_1[13];
  creal_T b_modData[576];
  creal_T ofdmData[576];
  comm_PNSequence_2 hPN;
  comm_PNSequence_2 *c_obj;
  static const int8_T iv10[8] = { 1, 0, 0, 0, 1, 0, 0, 1 };

  static const int8_T iv11[7] = { 0, 0, 0, 0, 0, 0, 1 };

  int8_T pilot[12];
  uint8_T tmp;
  uint8_T tmp2;
  int8_T pilots[48];
  int32_T ib;
  int32_T ia;
  real_T b_pilots[48];
  creal_T b_r[960];
  creal_T preambles[320];
  creal_T c_r[1280];
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

  static const int8_T iv12[53] = { 1, 1, -1, -1, 1, 1, -1, 1, -1, 1, 1, 1, 1, 1,
    1, -1, -1, 1, 1, -1, 1, -1, 1, 1, 1, 1, 0, 1, -1, -1, 1, 1, -1, 1, -1, 1, -1,
    -1, -1, -1, -1, 1, 1, -1, -1, 1, -1, 1, -1, 1, 1, 1, 1 };

  static const int8_T iv13[48] = { 1, 2, 3, 4, 5, 7, 8, 9, 10, 11, 12, 13, 14,
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
  st.site = &rb_emlrtRSI;
  b_st.site = &u_emlrtRSI;
  emlrtRandu(&a, 1);
  b_st.site = &v_emlrtRSI;
  b_st.site = &v_emlrtRSI;
  c_st.site = &p_emlrtRSI;
  st.site = &rb_emlrtRSI;
  i = (int32_T)muDoubleScalarFloor(a * 128.0);
  emlrtDynamicBoundsCheckFastR2012b(i, 0, 255, &i_emlrtBCI, &st);

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
  st.site = &sb_emlrtRSI;
  object = &hPreambleMod;
  b_st.site = &eb_emlrtRSI;
  c_st.site = &y_emlrtRSI;
  object->isInitialized = FALSE;
  object->isReleased = FALSE;
  c_st.site = &y_emlrtRSI;
  c_st.site = &ab_emlrtRSI;
  b_st.site = &fb_emlrtRSI;
  c_st.site = &db_emlrtRSI;

  /*  Modulate and scale */
  st.site = &tb_emlrtRSI;
  SystemCore_step(&st, &hPreambleMod, shortPreambleOFDM);
  st.site = &tb_emlrtRSI;
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
  st.site = &ub_emlrtRSI;
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
    inputPayloadMessage[i + 21] = cv3[i];
  }

  for (i = 0; i < 56; i++) {
    inputPayloadMessage[i + 24] = '-';
  }

  st.site = &vb_emlrtRSI;
  OFDMletters2bits(&st, inputPayloadMessage, originalData);
  st.site = &wb_emlrtRSI;
  for (i = 0; i < 80; i++) {
    for (k = 0; k < 7; k++) {
      x[k + 7 * i] = originalData[i + 80 * k];
    }
  }

  memcpy(&b_originalData[0], &x[0], 560U * sizeof(real_T));

  /*  Generate CRC */
  st.site = &xb_emlrtRSI;
  CRCGenerator_CRCGenerator(&hGen);
  st.site = &yb_emlrtRSI;
  c_SystemCore_step(&st, &hGen, b_originalData, dataWithCRC);

  /*  Add CRC */
  /*  Construct modulator for each subcarrier */
  st.site = &ac_emlrtRSI;
  obj = &hMod;
  b_st.site = &gg_emlrtRSI;
  c_st.site = &bb_emlrtRSI;
  c_st.site = &bb_emlrtRSI;
  obj->isInitialized = FALSE;
  obj->isReleased = FALSE;
  obj->inputDirectFeedthrough1 = FALSE;
  b_st.site = &gg_emlrtRSI;
  b_st.site = &gg_emlrtRSI;
  c_st.site = &db_emlrtRSI;
  b_st.site = &gg_emlrtRSI;
  b_obj = &obj->cSFunObject;

  /* System object Constructor function: comm.BPSKModulator */
  b_obj->S0_isInitialized = FALSE;
  b_obj->S1_isReleased = FALSE;
  for (i = 0; i < 4; i++) {
    b_obj->P0_modmap[i] = dv0[i];
  }

  b_st.site = &gg_emlrtRSI;
  b_st.site = &gg_emlrtRSI;
  c_st.site = &db_emlrtRSI;
  b_st.site = &gg_emlrtRSI;
  c_st.site = &db_emlrtRSI;
  b_st.site = &gg_emlrtRSI;
  c_st.site = &db_emlrtRSI;
  b_st.site = &gg_emlrtRSI;
  c_st.site = &db_emlrtRSI;

  /*  BPSK */
  /*  Apply modulator for each subcarrier */
  st.site = &bc_emlrtRSI;
  obj = &hMod;
  if (!obj->isReleased) {
  } else {
    y = NULL;
    m0 = mxCreateCharArray(2, iv0);
    for (i = 0; i < 45; i++) {
      cv4[i] = cv5[i];
    }

    emlrtInitCharArrayR2013a(&st, 45, m0, cv4);
    emlrtAssign(&y, m0);
    b_y = NULL;
    m0 = mxCreateCharArray(2, iv1);
    for (i = 0; i < 4; i++) {
      cv6[i] = cv7[i];
    }

    emlrtInitCharArrayR2013a(&st, 4, m0, cv6);
    emlrtAssign(&b_y, m0);
    b_st.site = &cb_emlrtRSI;
    c_error(&b_st, message(&b_st, y, b_y, &emlrtMCI), &emlrtMCI);
  }

  if (!obj->isInitialized) {
    b_st.site = &cb_emlrtRSI;
    if (!obj->isInitialized) {
    } else {
      c_y = NULL;
      m0 = mxCreateCharArray(2, iv2);
      for (i = 0; i < 51; i++) {
        cv8[i] = cv9[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 51, m0, cv8);
      emlrtAssign(&c_y, m0);
      d_y = NULL;
      m0 = mxCreateCharArray(2, iv3);
      for (i = 0; i < 5; i++) {
        cv10[i] = cv11[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 5, m0, cv10);
      emlrtAssign(&d_y, m0);
      c_st.site = &cb_emlrtRSI;
      c_error(&c_st, message(&c_st, c_y, d_y, &emlrtMCI), &emlrtMCI);
    }

    c_st.site = &cb_emlrtRSI;
    obj->isInitialized = TRUE;
    c_st.site = &cb_emlrtRSI;
    c_st.site = &cb_emlrtRSI;
    c_st.site = &cb_emlrtRSI;
    for (i = 0; i < 8; i++) {
      obj->inputVarSize1[i] = (uint32_T)value[i];
    }

    c_st.site = &cb_emlrtRSI;
    c_st.site = &cb_emlrtRSI;
    c_st.site = &cb_emlrtRSI;
    c_st.site = &cb_emlrtRSI;
    c_st.site = &cb_emlrtRSI;
    c_st.site = &cb_emlrtRSI;
    c_st.site = &cb_emlrtRSI;
    c_st.site = &cb_emlrtRSI;
  }

  b_st.site = &cb_emlrtRSI;
  b_st.site = &cb_emlrtRSI;
  b_st.site = &cb_emlrtRSI;
  c_st.site = &cb_emlrtRSI;
  c_st.site = &cb_emlrtRSI;
  b_st.site = &cb_emlrtRSI;
  b_st.site = &cb_emlrtRSI;
  anyInputSizeChanged = FALSE;
  k = 0;
  exitg2 = FALSE;
  while ((exitg2 == FALSE) && (k < 8)) {
    if (obj->inputVarSize1[k] != (uint32_T)iv4[k]) {
      anyInputSizeChanged = TRUE;
      c_st.site = &cb_emlrtRSI;
      for (i = 0; i < 8; i++) {
        obj->inputVarSize1[i] = (uint32_T)value[i];
      }

      exitg2 = TRUE;
    } else {
      k++;
    }
  }

  if (anyInputSizeChanged) {
    b_st.site = &cb_emlrtRSI;
    b_st.site = &cb_emlrtRSI;
  }

  b_st.site = &cb_emlrtRSI;
  c_st.site = &cb_emlrtRSI;
  c_st.site = &cb_emlrtRSI;
  b_st.site = &cb_emlrtRSI;
  b_st.site = &cb_emlrtRSI;
  b_st.site = &cb_emlrtRSI;
  Nondirect_stepImpl(obj, dataWithCRC, modData);

  /*  Pad IFFT */
  st.site = &cc_emlrtRSI;
  b_st.site = &u_emlrtRSI;
  emlrtRandu(varargin_1, 13);
  for (k = 0; k < 13; k++) {
    b_st.site = &v_emlrtRSI;
    b_st.site = &v_emlrtRSI;
    c_st.site = &p_emlrtRSI;
    varargin_1[k] = muDoubleScalarFloor(varargin_1[k] * 2.0);
  }

  st.site = &cc_emlrtRSI;
  obj = &hMod;
  if (!obj->isReleased) {
  } else {
    e_y = NULL;
    m0 = mxCreateCharArray(2, iv5);
    for (i = 0; i < 45; i++) {
      cv4[i] = cv5[i];
    }

    emlrtInitCharArrayR2013a(&st, 45, m0, cv4);
    emlrtAssign(&e_y, m0);
    f_y = NULL;
    m0 = mxCreateCharArray(2, iv6);
    for (i = 0; i < 4; i++) {
      cv6[i] = cv7[i];
    }

    emlrtInitCharArrayR2013a(&st, 4, m0, cv6);
    emlrtAssign(&f_y, m0);
    b_st.site = &cb_emlrtRSI;
    c_error(&b_st, message(&b_st, e_y, f_y, &emlrtMCI), &emlrtMCI);
  }

  if (!obj->isInitialized) {
    b_st.site = &cb_emlrtRSI;
    if (!obj->isInitialized) {
    } else {
      g_y = NULL;
      m0 = mxCreateCharArray(2, iv7);
      for (i = 0; i < 51; i++) {
        cv8[i] = cv9[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 51, m0, cv8);
      emlrtAssign(&g_y, m0);
      h_y = NULL;
      m0 = mxCreateCharArray(2, iv8);
      for (i = 0; i < 5; i++) {
        cv10[i] = cv11[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 5, m0, cv10);
      emlrtAssign(&h_y, m0);
      c_st.site = &cb_emlrtRSI;
      c_error(&c_st, message(&c_st, g_y, h_y, &emlrtMCI), &emlrtMCI);
    }

    c_st.site = &cb_emlrtRSI;
    obj->isInitialized = TRUE;
    c_st.site = &cb_emlrtRSI;
    c_st.site = &cb_emlrtRSI;
    c_st.site = &cb_emlrtRSI;
    for (i = 0; i < 8; i++) {
      obj->inputVarSize1[i] = (uint32_T)b_value[i];
    }

    c_st.site = &cb_emlrtRSI;
    c_st.site = &cb_emlrtRSI;
    c_st.site = &cb_emlrtRSI;
    c_st.site = &cb_emlrtRSI;
    c_st.site = &cb_emlrtRSI;
    c_st.site = &cb_emlrtRSI;
    c_st.site = &cb_emlrtRSI;
    c_st.site = &cb_emlrtRSI;
  }

  b_st.site = &cb_emlrtRSI;
  b_st.site = &cb_emlrtRSI;
  b_st.site = &cb_emlrtRSI;
  c_st.site = &cb_emlrtRSI;
  c_st.site = &cb_emlrtRSI;
  b_st.site = &cb_emlrtRSI;
  b_st.site = &cb_emlrtRSI;
  anyInputSizeChanged = FALSE;
  k = 0;
  exitg1 = FALSE;
  while ((exitg1 == FALSE) && (k < 8)) {
    if (obj->inputVarSize1[k] != (uint32_T)iv9[k]) {
      anyInputSizeChanged = TRUE;
      c_st.site = &cb_emlrtRSI;
      for (i = 0; i < 8; i++) {
        obj->inputVarSize1[i] = (uint32_T)b_value[i];
      }

      exitg1 = TRUE;
    } else {
      k++;
    }
  }

  if (anyInputSizeChanged) {
    b_st.site = &cb_emlrtRSI;
    b_st.site = &cb_emlrtRSI;
  }

  b_st.site = &cb_emlrtRSI;
  c_st.site = &cb_emlrtRSI;
  c_st.site = &cb_emlrtRSI;
  b_st.site = &cb_emlrtRSI;
  b_st.site = &cb_emlrtRSI;
  b_st.site = &cb_emlrtRSI;
  b_Nondirect_stepImpl(obj, varargin_1, varargout_1);
  memcpy(&b_modData[0], &modData[0], 563U * sizeof(creal_T));
  memcpy(&b_modData[563], &varargout_1[0], 13U * sizeof(creal_T));

  /*  Calculate required data sizes for correct receiver operation */
  /*  Save desired message size */
  /*  Save number of transmitted frames */
  /*  Convert data into subcarrier streams */
  st.site = &dc_emlrtRSI;
  memcpy(&ofdmData[0], &b_modData[0], 576U * sizeof(creal_T));

  /*  Create Pilots */
  st.site = &ec_emlrtRSI;
  c_obj = &hPN;

  /* System object Constructor function: comm.PNSequence */
  c_obj->S0_isInitialized = FALSE;
  c_obj->S1_isReleased = FALSE;
  for (i = 0; i < 8; i++) {
    c_obj->P0_Polynomial[i] = (uint8_T)iv10[i];
  }

  for (i = 0; i < 7; i++) {
    c_obj->P1_IniState[i] = 1;
    c_obj->P2_Mask[i] = (uint8_T)iv11[i];
  }

  st.site = &fc_emlrtRSI;
  c_obj = &hPN;
  if (!c_obj->S0_isInitialized) {
    c_obj->S0_isInitialized = TRUE;
    if (c_obj->S1_isReleased) {
      emlrtErrorWithMessageIdR2012b(&st, &bc_emlrtRTEI,
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
  st.site = &gc_emlrtRSI;
  ib = 0;
  for (i = 0; i < 4; i++) {
    ia = 0;
    for (k = 0; k < 12; k++) {
      pilots[ib] = pilot[ia];
      b_st.site = &ng_emlrtRSI;
      ia++;
      b_st.site = &og_emlrtRSI;
      ib++;
    }
  }

  /*  Expand to all pilot tones */
  st.site = &hc_emlrtRSI;
  for (i = 0; i < 12; i++) {
    for (k = 0; k < 4; k++) {
      b_pilots[k + (i << 2)] = 2.0 * (real_T)(pilots[i + 12 * k] < 1) - 1.0;
    }
  }

  /*  Bipolar to unipolar */
  st.site = &ic_emlrtRSI;
  for (i = 0; i < 12; i++) {
    b_pilots[3 + (i << 2)] = -b_pilots[3 + (i << 2)];
  }

  /*  Invert last pilot */
  /*  Construct Modulator */
  st.site = &jc_emlrtRSI;
  b_OFDMModulator_OFDMModulator(&st, &hDataMod);

  /*  Modulate */
  st.site = &kc_emlrtRSI;
  d_SystemCore_step(&st, &hDataMod, ofdmData, b_pilots, b_r);

  /*  Add preambles to data */
  memcpy(&preambles[0], &completeShortPreambleOFDM[0], 160U * sizeof(creal_T));
  memcpy(&preambles[160], &completeLongPreambleOFDM[0], 160U * sizeof(creal_T));
  memcpy(&c_r[0], &preambles[0], 320U * sizeof(creal_T));
  memcpy(&c_r[320], &b_r[0], 960U * sizeof(creal_T));

  /*  Repeat frame (Used in debugging) */
  st.site = &lc_emlrtRSI;
  ib = 0;
  for (i = 0; i < 30; i++) {
    ia = 0;
    for (k = 0; k < 1280; k++) {
      r[ib] = c_r[ia];
      b_st.site = &ng_emlrtRSI;
      ia++;
      b_st.site = &og_emlrtRSI;
      ib++;
    }
  }

  /*  Save Demodulator object data for receiver */
  /* hDataDemod = get(OFDMDemodulator(hDataMod)); */
  /* hPreambleDemod = get(OFDMDemodulator(hPreambleMod)); */
  st.site = &mc_emlrtRSI;
  *hDataDemod = OFDMDemodulator_OFDMDemodulator(&st, iobj_0);
  st.site = &nc_emlrtRSI;
  b_object = iobj_1;
  *hPreambleDemod = b_object;
  b_st.site = &jj_emlrtRSI;
  b_object = *hPreambleDemod;
  c_st.site = &y_emlrtRSI;
  b_object->isInitialized = FALSE;
  b_object->isReleased = FALSE;
  c_st.site = &y_emlrtRSI;
  c_st.site = &ab_emlrtRSI;
  b_st.site = &kj_emlrtRSI;
  c_st.site = &db_emlrtRSI;
  c_st.site = &db_emlrtRSI;
  b_st.site = &lj_emlrtRSI;
  c_st.site = &db_emlrtRSI;
  c_st.site = &db_emlrtRSI;
  b_st.site = &mj_emlrtRSI;
  c_st.site = &db_emlrtRSI;
  c_st.site = &db_emlrtRSI;
  b_st.site = &nj_emlrtRSI;
  c_st.site = &db_emlrtRSI;
  b_st.site = &oj_emlrtRSI;
  c_st.site = &db_emlrtRSI;
  c_st.site = &db_emlrtRSI;
  b_st.site = &pj_emlrtRSI;
  c_st.site = &db_emlrtRSI;

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
    tx->longPreamble[i] = iv12[i];
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
    tx->dataSubcarrierIndexies.data[i] = iv13[i];
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
