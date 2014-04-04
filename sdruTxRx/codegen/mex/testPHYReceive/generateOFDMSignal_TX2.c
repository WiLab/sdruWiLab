/*
 * generateOFDMSignal_TX2.c
 *
 * Code generation for function 'generateOFDMSignal_TX2'
 *
 * C source code generated on: Thu Apr  3 19:36:37 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testPHYReceive.h"
#include "generateOFDMSignal_TX2.h"
#include "testPHYReceive_emxutil.h"
#include "receiveData.h"
#include "equalizeOFDM.h"
#include "SystemCore.h"
#include "OFDMModulator.h"
#include "setup.h"
#include "CRCGenerator.h"
#include "OFDMletters2bits.h"
#include "testPHYReceive_mexutil.h"
#include "testPHYReceive_data.h"
#include <stdio.h>

/* Type Definitions */
#ifndef struct_comm_PNSequence_2
#define struct_comm_PNSequence_2

struct comm_PNSequence_2
{
  boolean_T S0_isInitialized;
  boolean_T S1_isReleased;
  uint8_T W0_shiftReg[7];
  uint8_T P0_Polynomial[8];
  uint8_T P1_IniState[7];
  uint8_T P2_Mask[7];
};

#endif                                 /*struct_comm_PNSequence_2*/

#ifndef typedef_comm_PNSequence_2
#define typedef_comm_PNSequence_2

typedef struct comm_PNSequence_2 comm_PNSequence_2;

#endif                                 /*typedef_comm_PNSequence_2*/

/* Variable Definitions */
static emlrtRSInfo x_emlrtRSI = { 16, "generateOFDMSignal_TX2",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/private/generateOFDMSignal_TX2.m"
};

static emlrtRSInfo y_emlrtRSI = { 39, "generateOFDMSignal_TX2",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/private/generateOFDMSignal_TX2.m"
};

static emlrtRSInfo ab_emlrtRSI = { 46, "generateOFDMSignal_TX2",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/private/generateOFDMSignal_TX2.m"
};

static emlrtRSInfo bb_emlrtRSI = { 58, "generateOFDMSignal_TX2",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/private/generateOFDMSignal_TX2.m"
};

static emlrtRSInfo cb_emlrtRSI = { 69, "generateOFDMSignal_TX2",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/private/generateOFDMSignal_TX2.m"
};

static emlrtRSInfo db_emlrtRSI = { 73, "generateOFDMSignal_TX2",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/private/generateOFDMSignal_TX2.m"
};

static emlrtRSInfo eb_emlrtRSI = { 74, "generateOFDMSignal_TX2",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/private/generateOFDMSignal_TX2.m"
};

static emlrtRSInfo fb_emlrtRSI = { 77, "generateOFDMSignal_TX2",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/private/generateOFDMSignal_TX2.m"
};

static emlrtRSInfo gb_emlrtRSI = { 80, "generateOFDMSignal_TX2",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/private/generateOFDMSignal_TX2.m"
};

static emlrtRSInfo hb_emlrtRSI = { 87, "generateOFDMSignal_TX2",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/private/generateOFDMSignal_TX2.m"
};

static emlrtRSInfo ib_emlrtRSI = { 99, "generateOFDMSignal_TX2",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/private/generateOFDMSignal_TX2.m"
};

static emlrtRSInfo jb_emlrtRSI = { 106, "generateOFDMSignal_TX2",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/private/generateOFDMSignal_TX2.m"
};

static emlrtRSInfo kb_emlrtRSI = { 112, "generateOFDMSignal_TX2",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/private/generateOFDMSignal_TX2.m"
};

static emlrtRSInfo lb_emlrtRSI = { 123, "generateOFDMSignal_TX2",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/private/generateOFDMSignal_TX2.m"
};

static emlrtRSInfo mb_emlrtRSI = { 136, "generateOFDMSignal_TX2",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/private/generateOFDMSignal_TX2.m"
};

static emlrtRSInfo nb_emlrtRSI = { 137, "generateOFDMSignal_TX2",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/private/generateOFDMSignal_TX2.m"
};

static emlrtRTEInfo f_emlrtRTEI = { 112, 1, "generateOFDMSignal_TX2",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/private/generateOFDMSignal_TX2.m"
};

static emlrtRTEInfo g_emlrtRTEI = { 39, 1, "generateOFDMSignal_TX2",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/private/generateOFDMSignal_TX2.m"
};

/* Function Definitions */
void generateOFDMSignal_TX2(OFDMDemodulator_2 *iobj_0, OFDMDemodulator_3 *iobj_1,
  OFDMDemodulator_3 **hPreambleDemod, OFDMDemodulator_2 **hDataDemod, creal_T r
  [38400], b_struct_T *tx)
{
  OFDMModulator_196 hDataMod;
  OFDMModulator_4 hPreambleMod;
  const mxArray *y;
  const mxArray *m0;
  const mxArray *b_y;
  real_T b_r;
  int32_T i;
  char_T uniqueID;
  OFDMModulator_4 *object;
  creal_T shortPreambleOFDM[64];
  creal_T completeShortPreambleOFDM[160];
  creal_T longPreambleOFDM[64];
  creal_T completeLongPreambleOFDM[160];
  char_T inputPayloadMessage[80];
  static const char_T b_inputPayloadMessage[18] = { 'U', 'n', 'i', 'm', 'p', 'o',
    'r', 't', 'a', 'n', 't', 'M', 'e', 's', 's', 'a', 'g', 'e' };

  static const char_T cv2[3] = { 'E', 'O', 'F' };

  real_T originalData[560];
  real_T x[560];
  int32_T ib;
  real_T b_originalData[560];
  commcodegen_CRCGenerator hGen;
  real_T dataWithCRC[563];
  commcodegen_BPSKModulator hMod;
  commcodegen_BPSKModulator *obj;
  comm_BPSKModulator_1 *b_obj;
  static const real_T dv0[4] = { 1.0, 0.0, -1.0, 1.2246063538223773E-16 };

  const mxArray *c_y;
  static const int32_T iv0[2] = { 1, 45 };

  char_T cv3[45];
  static const char_T cv4[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C',
    'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *d_y;
  static const int32_T iv1[2] = { 1, 4 };

  char_T cv5[4];
  static const char_T cv6[4] = { 's', 't', 'e', 'p' };

  int32_T tmp_size[2];
  creal_T tmp_data[563];
  static int32_T iv2[2] = { 563, 1 };

  const mxArray *e_y;
  const mxArray *f_y;
  real_T c_r[13];
  int32_T k;
  const mxArray *g_y;
  static const int32_T iv3[2] = { 1, 45 };

  const mxArray *h_y;
  static const int32_T iv4[2] = { 1, 4 };

  creal_T b_tmp_data[563];
  static int32_T iv5[2] = { 13, 1 };

  creal_T modData[576];
  creal_T ofdmData[576];
  comm_PNSequence_2 hPN;
  comm_PNSequence_2 *c_obj;
  static const int8_T iv6[8] = { 1, 0, 0, 0, 1, 0, 0, 1 };

  static const int8_T iv7[7] = { 0, 0, 0, 0, 0, 0, 1 };

  int8_T pilot[12];
  uint8_T tmp;
  uint8_T tmp2;
  int8_T pilots[48];
  int32_T ia;
  real_T b_pilots[48];
  creal_T d_r[960];
  creal_T preambles[320];
  creal_T e_r[1280];
  OFDMDemodulator_2 *b_object;
  int8_T b_data[4];
  int32_T exitg1;
  int32_T exponent;
  boolean_T b0;
  int32_T i0;
  const mxArray *i_y;
  static const int32_T iv8[2] = { 1, 13 };

  char_T cv7[13];
  static const char_T cv8[13] = { 'c', 'o', 'm', 'm', ':', 'O', 'F', 'D', 'M',
    ':', 'x', 'x', 'x' };

  OFDMDemodulator_3 *c_object;
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

  static const int8_T iv9[53] = { 1, 1, -1, -1, 1, 1, -1, 1, -1, 1, 1, 1, 1, 1,
    1, -1, -1, 1, 1, -1, 1, -1, 1, 1, 1, 1, 0, 1, -1, -1, 1, 1, -1, 1, -1, 1, -1,
    -1, -1, -1, -1, 1, 1, -1, -1, 1, -1, 1, -1, 1, 1, 1, 1 };

  static const int8_T iv10[48] = { 1, 2, 3, 4, 5, 7, 8, 9, 10, 11, 12, 13, 14,
    15, 16, 17, 18, 19, 21, 22, 23, 24, 25, 26, 28, 29, 30, 31, 32, 33, 35, 36,
    37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 49, 50, 51, 52, 53 };

  emlrtHeapReferenceStackEnterFcnR2012b(emlrtRootTLSGlobal);
  emxInitStruct_OFDMModulator_196(&hDataMod, &f_emlrtRTEI, TRUE);
  emxInitStruct_OFDMModulator_4(&hPreambleMod, &g_emlrtRTEI, TRUE);

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
  emlrtPushRtStackR2012b(&x_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  y = NULL;
  m0 = mxCreateDoubleScalar(1.0);
  emlrtAssign(&y, m0);
  b_y = NULL;
  m0 = mxCreateDoubleScalar(1.0);
  emlrtAssign(&b_y, m0);
  b_r = emlrt_marshallIn(b_rand(y, b_y, &emlrtMCI), "rand");
  emlrtPopRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  i = (int32_T)muDoubleScalarFloor(b_r * 128.0);
  i = emlrtDynamicBoundsCheckFastR2012b(i, 0, 255, &emlrtBCI, emlrtRootTLSGlobal);
  i = (int32_T)muDoubleScalarRem(i, 256.0);
  if (i < 0) {
    uniqueID = (int8_T)-(int8_T)(uint8_T)-(real_T)i;
  } else {
    uniqueID = (int8_T)(uint8_T)(real_T)i;
  }

  emlrtPopRtStackR2012b(&x_emlrtRSI, emlrtRootTLSGlobal);

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
  emlrtPushRtStackR2012b(&y_emlrtRSI, emlrtRootTLSGlobal);
  object = &hPreambleMod;
  emlrtPushRtStackR2012b(&r_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  object->isInitialized = FALSE;
  object->isReleased = FALSE;
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&q_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&q_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&r_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&s_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&q_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&q_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&v_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&v_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&v_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&v_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&v_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&v_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&v_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&v_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&q_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&q_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&s_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&y_emlrtRSI, emlrtRootTLSGlobal);

  /*  Modulate and scale */
  emlrtPushRtStackR2012b(&ab_emlrtRSI, emlrtRootTLSGlobal);
  SystemCore_step(&hPreambleMod, shortPreambleOFDM);
  for (i = 0; i < 64; i++) {
    shortPreambleOFDM[i].re *= 1.4719601443879744;
    shortPreambleOFDM[i].im *= 1.4719601443879744;
  }

  emlrtPopRtStackR2012b(&ab_emlrtRSI, emlrtRootTLSGlobal);

  /*  Form 10 Short Preambles */
  memcpy(&completeShortPreambleOFDM[0], &shortPreambleOFDM[0], sizeof(creal_T) <<
         6);
  memcpy(&completeShortPreambleOFDM[64], &shortPreambleOFDM[0], sizeof(creal_T) <<
         6);
  memcpy(&completeShortPreambleOFDM[128], &shortPreambleOFDM[0], sizeof(creal_T)
         << 5);

  /* % Create Long Preamble */
  /*  Modulate */
  emlrtPushRtStackR2012b(&bb_emlrtRSI, emlrtRootTLSGlobal);
  b_SystemCore_step(&hPreambleMod, longPreambleOFDM);
  emlrtPopRtStackR2012b(&bb_emlrtRSI, emlrtRootTLSGlobal);

  /*  Form 2 Long Preambles */
  memcpy(&completeLongPreambleOFDM[0], &longPreambleOFDM[32], sizeof(creal_T) <<
         5);
  memcpy(&completeLongPreambleOFDM[32], &longPreambleOFDM[0], sizeof(creal_T) <<
         6);
  memcpy(&completeLongPreambleOFDM[96], &longPreambleOFDM[0], sizeof(creal_T) <<
         6);

  /* % Generate Data */
  /*  Use string as message */
  emlrtPushRtStackR2012b(&cb_emlrtRSI, emlrtRootTLSGlobal);
  for (i = 0; i < 18; i++) {
    inputPayloadMessage[i] = b_inputPayloadMessage[i];
  }

  inputPayloadMessage[18] = '1';
  inputPayloadMessage[19] = '1';
  inputPayloadMessage[20] = uniqueID;
  for (i = 0; i < 3; i++) {
    inputPayloadMessage[i + 21] = cv2[i];
  }

  for (i = 0; i < 56; i++) {
    inputPayloadMessage[i + 24] = '-';
  }

  OFDMletters2bits(inputPayloadMessage, originalData);
  emlrtPopRtStackR2012b(&cb_emlrtRSI, emlrtRootTLSGlobal);
  for (i = 0; i < 80; i++) {
    for (ib = 0; ib < 7; ib++) {
      x[ib + 7 * i] = originalData[i + 80 * ib];
    }
  }

  memcpy(&b_originalData[0], &x[0], 560U * sizeof(real_T));

  /*  Generate CRC */
  emlrtPushRtStackR2012b(&db_emlrtRSI, emlrtRootTLSGlobal);
  CRCGenerator_CRCGenerator(&hGen);
  emlrtPopRtStackR2012b(&db_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&eb_emlrtRSI, emlrtRootTLSGlobal);
  c_SystemCore_step(&hGen, b_originalData, dataWithCRC);
  emlrtPopRtStackR2012b(&eb_emlrtRSI, emlrtRootTLSGlobal);

  /*  Add CRC */
  /*  Construct modulator for each subcarrier */
  emlrtPushRtStackR2012b(&fb_emlrtRSI, emlrtRootTLSGlobal);
  obj = &hMod;
  emlrtPushRtStackR2012b(&ic_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  obj->isInitialized = FALSE;
  obj->isReleased = FALSE;
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  obj->inputDirectFeedthrough1 = FALSE;
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&q_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&q_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&ic_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&ic_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&ic_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&ic_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = &obj->cSFunObject;

  /* System object Constructor function: comm.BPSKModulator */
  b_obj->S0_isInitialized = FALSE;
  b_obj->S1_isReleased = FALSE;
  for (i = 0; i < 4; i++) {
    b_obj->P0_modmap[i] = dv0[i];
  }

  emlrtPopRtStackR2012b(&ic_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&ic_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&ic_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&ic_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&ic_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&ic_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&ic_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&ic_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&ic_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&fb_emlrtRSI, emlrtRootTLSGlobal);

  /*  BPSK */
  /*  Apply modulator for each subcarrier */
  emlrtPushRtStackR2012b(&gb_emlrtRSI, emlrtRootTLSGlobal);
  obj = &hMod;
  if (!obj->isReleased) {
  } else {
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    c_y = NULL;
    m0 = mxCreateCharArray(2, iv0);
    for (i = 0; i < 45; i++) {
      cv3[i] = cv4[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 45, m0, cv3);
    emlrtAssign(&c_y, m0);
    d_y = NULL;
    m0 = mxCreateCharArray(2, iv1);
    for (i = 0; i < 4; i++) {
      cv5[i] = cv6[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 4, m0, cv5);
    emlrtAssign(&d_y, m0);
    b_error(message(c_y, d_y, &b_emlrtMCI), &b_emlrtMCI);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  }

  if (!obj->isInitialized) {
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    SystemCore_setup(obj);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  SystemCore_checkTunableProps(obj);
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  c_SystemCore_detectInputSizeCha(obj);
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&ic_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&ic_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&hc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&ic_emlrtRSI, emlrtRootTLSGlobal);
  Outputs(&obj->cSFunObject, dataWithCRC, iv2, tmp_data, tmp_size);
  emlrtPopRtStackR2012b(&ic_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&hc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&hc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&ic_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&ic_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&hc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&gb_emlrtRSI, emlrtRootTLSGlobal);

  /*  Pad IFFT */
  emlrtPushRtStackR2012b(&hb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  e_y = NULL;
  m0 = mxCreateDoubleScalar(13.0);
  emlrtAssign(&e_y, m0);
  f_y = NULL;
  m0 = mxCreateDoubleScalar(1.0);
  emlrtAssign(&f_y, m0);
  e_emlrt_marshallIn(b_rand(e_y, f_y, &emlrtMCI), "rand", c_r);
  emlrtPopRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  for (k = 0; k < 13; k++) {
    c_r[k] = muDoubleScalarFloor(c_r[k] * 2.0);
  }

  obj = &hMod;
  if (!obj->isReleased) {
  } else {
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    g_y = NULL;
    m0 = mxCreateCharArray(2, iv3);
    for (i = 0; i < 45; i++) {
      cv3[i] = cv4[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 45, m0, cv3);
    emlrtAssign(&g_y, m0);
    h_y = NULL;
    m0 = mxCreateCharArray(2, iv4);
    for (i = 0; i < 4; i++) {
      cv5[i] = cv6[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 4, m0, cv5);
    emlrtAssign(&h_y, m0);
    b_error(message(g_y, h_y, &b_emlrtMCI), &b_emlrtMCI);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  }

  if (!obj->isInitialized) {
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    b_SystemCore_setup(obj);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  b_SystemCore_checkTunableProps(obj);
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  d_SystemCore_detectInputSizeCha(obj);
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&ic_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&ic_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&hc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&ic_emlrtRSI, emlrtRootTLSGlobal);
  Outputs(&obj->cSFunObject, c_r, iv5, b_tmp_data, tmp_size);
  emlrtPopRtStackR2012b(&ic_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&hc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&hc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&ic_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&ic_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&hc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  memcpy(&modData[0], &tmp_data[0], 563U * sizeof(creal_T));
  memcpy(&modData[563], &b_tmp_data[0], 13U * sizeof(creal_T));
  emlrtPopRtStackR2012b(&hb_emlrtRSI, emlrtRootTLSGlobal);

  /*  Calculate required data sizes for correct receiver operation */
  /*  Save desired message size */
  /*  Save number of transmitted frames */
  /*  Convert data into subcarrier streams */
  memcpy(&ofdmData[0], &modData[0], 576U * sizeof(creal_T));

  /*  Create Pilots */
  emlrtPushRtStackR2012b(&ib_emlrtRSI, emlrtRootTLSGlobal);
  c_obj = &hPN;

  /* System object Constructor function: comm.PNSequence */
  c_obj->S0_isInitialized = FALSE;
  c_obj->S1_isReleased = FALSE;
  for (i = 0; i < 8; i++) {
    c_obj->P0_Polynomial[i] = (uint8_T)iv6[i];
  }

  for (i = 0; i < 7; i++) {
    c_obj->P1_IniState[i] = 1;
    c_obj->P2_Mask[i] = (uint8_T)iv7[i];
  }

  emlrtPopRtStackR2012b(&ib_emlrtRSI, emlrtRootTLSGlobal);

  /* pilot=[1 0  0  1  0  0  1  0  0  0  0  0]'; */
  emlrtPushRtStackR2012b(&jb_emlrtRSI, emlrtRootTLSGlobal);
  c_obj = &hPN;
  if (!c_obj->S0_isInitialized) {
    c_obj->S0_isInitialized = TRUE;
    if (c_obj->S1_isReleased) {
      emlrtErrorWithMessageIdR2012b(emlrtRootTLSGlobal, &yb_emlrtRTEI,
        "MATLAB:system:runtimeMethodCalledWhenReleasedCodegen", 0);
    }

    /* System object Initialization function: comm.PNSequence */
    for (ib = 0; ib < 7; ib++) {
      c_obj->W0_shiftReg[ib] = c_obj->P1_IniState[ib];
      emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, emlrtRootTLSGlobal);
    }
  }

  emlrtPushRtStackR2012b(&jc_emlrtRSI, emlrtRootTLSGlobal);

  /* System object Outputs function: comm.PNSequence */
  for (ib = 0; ib < 12; ib++) {
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

    pilot[ib] = (int8_T)(tmp2 & 1);
    for (i = 5; i > -1; i += -1) {
      c_obj->W0_shiftReg[i + 1] = c_obj->W0_shiftReg[i];
    }

    c_obj->W0_shiftReg[0U] = tmp;
  }

  emlrtPopRtStackR2012b(&jc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&jb_emlrtRSI, emlrtRootTLSGlobal);

  /*  Create pilot */
  ib = 0;
  for (i = 0; i < 4; i++) {
    ia = 0;
    for (k = 0; k < 12; k++) {
      pilots[ib] = pilot[ia];
      ia++;
      ib++;
    }
  }

  /*  Expand to all pilot tones */
  for (i = 0; i < 12; i++) {
    for (ib = 0; ib < 4; ib++) {
      b_pilots[ib + (i << 2)] = 2.0 * (real_T)(pilots[i + 12 * ib] < 1) - 1.0;
    }

    /*  Bipolar to unipolar */
    b_pilots[3 + (i << 2)] = -b_pilots[3 + (i << 2)];
  }

  /*  Invert last pilot */
  /*  Construct Modulator */
  emlrtPushRtStackR2012b(&kb_emlrtRSI, emlrtRootTLSGlobal);
  b_OFDMModulator_OFDMModulator(&hDataMod);
  emlrtPopRtStackR2012b(&kb_emlrtRSI, emlrtRootTLSGlobal);

  /*  Modulate */
  emlrtPushRtStackR2012b(&lb_emlrtRSI, emlrtRootTLSGlobal);
  d_SystemCore_step(&hDataMod, ofdmData, b_pilots, d_r);
  emlrtPopRtStackR2012b(&lb_emlrtRSI, emlrtRootTLSGlobal);

  /*  Add preambles to data */
  memcpy(&preambles[0], &completeShortPreambleOFDM[0], 160U * sizeof(creal_T));
  memcpy(&preambles[160], &completeLongPreambleOFDM[0], 160U * sizeof(creal_T));
  memcpy(&e_r[0], &preambles[0], 320U * sizeof(creal_T));
  memcpy(&e_r[320], &d_r[0], 960U * sizeof(creal_T));

  /*  Repeat frame (Used in debugging) */
  ib = 0;
  for (i = 0; i < 30; i++) {
    ia = 0;
    for (k = 0; k < 1280; k++) {
      r[ib] = e_r[ia];
      ia++;
      ib++;
    }
  }

  /*  Save Demodulator object data for receiver */
  /* hDataDemod = get(OFDMDemodulator(hDataMod)); */
  /* hPreambleDemod = get(OFDMDemodulator(hPreambleMod)); */
  emlrtPushRtStackR2012b(&mb_emlrtRSI, emlrtRootTLSGlobal);
  b_object = iobj_0;
  *hDataDemod = b_object;
  emlrtPushRtStackR2012b(&yc_emlrtRSI, emlrtRootTLSGlobal);
  b_object = *hDataDemod;
  emlrtPushRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  b_object->isInitialized = FALSE;
  b_object->isReleased = FALSE;
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&q_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&q_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&yc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&ad_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&ad_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&bd_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&bd_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&cd_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&cd_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&dd_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&dd_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&ed_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&ed_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&fd_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&fd_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&gd_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&q_emlrtRSI, emlrtRootTLSGlobal);

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
  emlrtPushRtStackR2012b(&lc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&mc_emlrtRSI, emlrtRootTLSGlobal);
  for (k = 0; k < 4; k++) {
    b_data[k] = (int8_T)(12 + 14 * k);
  }

  i = 0;
  k = 1;
  while (k <= 4) {
    ib = b_data[k - 1];
    do {
      exitg1 = 0;
      k++;
      if (k > 4) {
        exitg1 = 1;
      } else {
        frexp((real_T)ib / 2.0, &exponent);
        if (!(muDoubleScalarAbs(ib - b_data[k - 1]) < ldexp(1.0, exponent - 53)))
        {
          exitg1 = 1;
        }
      }
    } while (exitg1 == 0);

    i++;
    b_data[i - 1] = (int8_T)ib;
    emlrtPushRtStackR2012b(&qc_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&qc_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPushRtStackR2012b(&oc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&oc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&nc_emlrtRSI, emlrtRootTLSGlobal);
  if (1 > i) {
    b0 = FALSE;
  } else {
    b0 = (i > 2147483646);
  }

  if (b0) {
    emlrtPushRtStackR2012b(&dc_emlrtRSI, emlrtRootTLSGlobal);
    check_forloop_overflow_error();
    emlrtPopRtStackR2012b(&dc_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPopRtStackR2012b(&nc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&mc_emlrtRSI, emlrtRootTLSGlobal);
  if (1 > i) {
    i0 = 0;
  } else {
    i0 = i;
  }

  if (!(4 != i0)) {
  } else {
    emlrtPushRtStackR2012b(&sc_emlrtRSI, emlrtRootTLSGlobal);
    i_y = NULL;
    m0 = mxCreateCharArray(2, iv8);
    for (i = 0; i < 13; i++) {
      cv7[i] = cv8[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 13, m0, cv7);
    emlrtAssign(&i_y, m0);
    b_error(b_message(i_y, &h_emlrtMCI), &h_emlrtMCI);
    emlrtPopRtStackR2012b(&sc_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPopRtStackR2012b(&lc_emlrtRSI, emlrtRootTLSGlobal);

  /*  Error message:  */
  /*  If pilot index is 2-D, the indices per symbol must be unique; */
  /*  If pilot index is 3-D, the indices across transmit antennas per symbol must be unique. */
  emlrtPopRtStackR2012b(&q_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&gd_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&mb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&nb_emlrtRSI, emlrtRootTLSGlobal);
  c_object = iobj_1;
  *hPreambleDemod = c_object;
  emlrtPushRtStackR2012b(&yc_emlrtRSI, emlrtRootTLSGlobal);
  c_object = *hPreambleDemod;
  emlrtPushRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  c_object->isInitialized = FALSE;
  c_object->isReleased = FALSE;
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&q_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&q_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&yc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&ad_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&ad_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&bd_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&bd_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&cd_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&cd_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&dd_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&dd_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&ed_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&ed_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&fd_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&fd_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&nb_emlrtRSI, emlrtRootTLSGlobal);

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
    tx->longPreamble[i] = iv9[i];
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
    tx->dataSubcarrierIndexies.data[i] = iv10[i];
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
  c_obj = &hPN;

  /* System object Destructor function: comm.PNSequence */
  if (c_obj->S0_isInitialized) {
    c_obj->S0_isInitialized = FALSE;
    if (!c_obj->S1_isReleased) {
      c_obj->S1_isReleased = TRUE;
    }
  }

  emxFreeStruct_OFDMModulator_4(&hPreambleMod);
  emxFreeStruct_OFDMModulator_196(&hDataMod);
  emlrtHeapReferenceStackLeaveFcnR2012b(emlrtRootTLSGlobal);
}

/* End of code generation (generateOFDMSignal_TX2.c) */
