/*
 * generateOFDMSignal_TX2.c
 *
 * Code generation for function 'generateOFDMSignal_TX2'
 *
 * C source code generated on: Thu Apr  3 19:51:42 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testMACReceiver.h"
#include "generateOFDMSignal_TX2.h"
#include "testMACReceiver_emxutil.h"
#include "OFDMDemodulator.h"
#include "SystemCore.h"
#include "OFDMModulator.h"
#include "setup.h"
#include "receiveData.h"
#include "OFDMletters2bits.h"
#include "randi.h"
#include "testMACReceiver_mexutil.h"
#include "testMACReceiver_data.h"

/* Type Definitions */
#ifndef struct_comm_PNSequence_10
#define struct_comm_PNSequence_10

struct comm_PNSequence_10
{
  boolean_T S0_isInitialized;
  boolean_T S1_isReleased;
  uint8_T W0_shiftReg[7];
  uint8_T P0_Polynomial[8];
  uint8_T P1_IniState[7];
  uint8_T P2_Mask[7];
};

#endif                                 /*struct_comm_PNSequence_10*/

#ifndef typedef_comm_PNSequence_10
#define typedef_comm_PNSequence_10

typedef struct comm_PNSequence_10 comm_PNSequence_10;

#endif                                 /*typedef_comm_PNSequence_10*/

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

#ifndef struct_comm_CRCGenerator_0
#define struct_comm_CRCGenerator_0

struct comm_CRCGenerator_0
{
  boolean_T S0_isInitialized;
  boolean_T S1_isReleased;
  uint32_T P0_CRCTable[256];
};

#endif                                 /*struct_comm_CRCGenerator_0*/

#ifndef typedef_comm_CRCGenerator_0
#define typedef_comm_CRCGenerator_0

typedef struct comm_CRCGenerator_0 comm_CRCGenerator_0;

#endif                                 /*typedef_comm_CRCGenerator_0*/

#ifndef typedef_commcodegen_CRCGenerator
#define typedef_commcodegen_CRCGenerator

typedef struct {
  boolean_T isInitialized;
  boolean_T isReleased;
  boolean_T TunablePropsChanged;
  uint32_T inputVarSize1[8];
  boolean_T inputDirectFeedthrough1;
  comm_CRCGenerator_0 cSFunObject;
} commcodegen_CRCGenerator;

#endif                                 /*typedef_commcodegen_CRCGenerator*/

#ifndef struct_comm_CRCGenerator_8
#define struct_comm_CRCGenerator_8

struct comm_CRCGenerator_8
{
  boolean_T S0_isInitialized;
  boolean_T S1_isReleased;
  uint32_T P0_CRCTable[256];
};

#endif                                 /*struct_comm_CRCGenerator_8*/

#ifndef typedef_comm_CRCGenerator_8
#define typedef_comm_CRCGenerator_8

typedef struct comm_CRCGenerator_8 comm_CRCGenerator_8;

#endif                                 /*typedef_comm_CRCGenerator_8*/

#ifndef typedef_commcodegen_CRCGenerator_478
#define typedef_commcodegen_CRCGenerator_478

typedef struct {
  boolean_T isInitialized;
  boolean_T isReleased;
  boolean_T TunablePropsChanged;
  uint32_T inputVarSize1[8];
  boolean_T inputDirectFeedthrough1;
  comm_CRCGenerator_8 cSFunObject;
} commcodegen_CRCGenerator_478;

#endif                                 /*typedef_commcodegen_CRCGenerator_478*/

/* Variable Definitions */
static emlrtRSInfo w_emlrtRSI = { 16, "generateOFDMSignal_TX2",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/private/generateOFDMSignal_TX2.m"
};

static emlrtRSInfo x_emlrtRSI = { 39, "generateOFDMSignal_TX2",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/private/generateOFDMSignal_TX2.m"
};

static emlrtRSInfo y_emlrtRSI = { 46, "generateOFDMSignal_TX2",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/private/generateOFDMSignal_TX2.m"
};

static emlrtRSInfo ab_emlrtRSI = { 58, "generateOFDMSignal_TX2",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/private/generateOFDMSignal_TX2.m"
};

static emlrtRSInfo bb_emlrtRSI = { 69, "generateOFDMSignal_TX2",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/private/generateOFDMSignal_TX2.m"
};

static emlrtRSInfo cb_emlrtRSI = { 73, "generateOFDMSignal_TX2",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/private/generateOFDMSignal_TX2.m"
};

static emlrtRSInfo db_emlrtRSI = { 74, "generateOFDMSignal_TX2",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/private/generateOFDMSignal_TX2.m"
};

static emlrtRSInfo eb_emlrtRSI = { 77, "generateOFDMSignal_TX2",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/private/generateOFDMSignal_TX2.m"
};

static emlrtRSInfo fb_emlrtRSI = { 80, "generateOFDMSignal_TX2",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/private/generateOFDMSignal_TX2.m"
};

static emlrtRSInfo gb_emlrtRSI = { 87, "generateOFDMSignal_TX2",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/private/generateOFDMSignal_TX2.m"
};

static emlrtRSInfo hb_emlrtRSI = { 99, "generateOFDMSignal_TX2",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/private/generateOFDMSignal_TX2.m"
};

static emlrtRSInfo ib_emlrtRSI = { 106, "generateOFDMSignal_TX2",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/private/generateOFDMSignal_TX2.m"
};

static emlrtRSInfo jb_emlrtRSI = { 112, "generateOFDMSignal_TX2",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/private/generateOFDMSignal_TX2.m"
};

static emlrtRSInfo kb_emlrtRSI = { 123, "generateOFDMSignal_TX2",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/private/generateOFDMSignal_TX2.m"
};

static emlrtRSInfo lb_emlrtRSI = { 136, "generateOFDMSignal_TX2",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/private/generateOFDMSignal_TX2.m"
};

static emlrtRSInfo mb_emlrtRSI = { 137, "generateOFDMSignal_TX2",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/private/generateOFDMSignal_TX2.m"
};

static emlrtRSInfo ek_emlrtRSI = { 17, "generateOFDMSignal_TX2",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/private/generateOFDMSignal_TX2.m"
};

static emlrtRSInfo fk_emlrtRSI = { 18, "generateOFDMSignal_TX2",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/private/generateOFDMSignal_TX2.m"
};

static emlrtRTEInfo e_emlrtRTEI = { 112, 1, "generateOFDMSignal_TX2",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/private/generateOFDMSignal_TX2.m"
};

static emlrtRTEInfo f_emlrtRTEI = { 39, 1, "generateOFDMSignal_TX2",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/private/generateOFDMSignal_TX2.m"
};

/* Function Definitions */
void b_generateOFDMSignal_TX2(testMACReceiverStackData *SD, real_T originNode,
  real_T destNode, OFDMDemodulator_2 *iobj_0, OFDMDemodulator_3 *iobj_1,
  OFDMDemodulator_3 **hPreambleDemod, OFDMDemodulator_2 **hDataDemod, creal_T r
  [38400], b_struct_T *tx)
{
  OFDMModulator_196 hDataMod;
  OFDMModulator_4 hPreambleMod;
  const mxArray *y;
  const mxArray *m33;
  const mxArray *b_y;
  real_T b_r;
  int32_T bitNumber;
  char_T uniqueID;
  char_T destNodeChar;
  char_T originNodeChar;
  creal_T shortPreambleOFDM[64];
  creal_T completeShortPreambleOFDM[160];
  creal_T longPreambleOFDM[64];
  creal_T completeLongPreambleOFDM[160];
  char_T inputPayloadMessage[80];
  static const char_T b_inputPayloadMessage[3] = { 'A', 'C', 'K' };

  static const char_T cv183[3] = { 'E', 'O', 'F' };

  real_T originalData[560];
  real_T x[560];
  int32_T k;
  real_T b_originalData[560];
  commcodegen_CRCGenerator_478 hGen;
  commcodegen_CRCGenerator_478 *obj;
  comm_CRCGenerator_8 *b_obj;
  int32_T i;
  static const int8_T iv148[256] = { 0, 1, 2, 3, 4, 5, 6, 7, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0 };

  const mxArray *c_y;
  static const int32_T iv149[2] = { 1, 45 };

  char_T cv184[45];
  static const char_T cv185[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C',
    'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *d_y;
  static const int32_T iv150[2] = { 1, 4 };

  char_T cv186[4];
  static const char_T cv187[4] = { 's', 't', 'e', 'p' };

  const mxArray *e_y;
  static const int32_T iv151[2] = { 1, 51 };

  char_T cv188[51];
  static const char_T cv189[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l',
    'e', 'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *f_y;
  static const int32_T iv152[2] = { 1, 5 };

  char_T cv190[5];
  static const char_T cv191[5] = { 's', 'e', 't', 'u', 'p' };

  static const int16_T value[8] = { 560, 1, 1, 1, 1, 1, 1, 1 };

  boolean_T exitg1;
  static const int16_T iv153[8] = { 560, 1, 1, 1, 1, 1, 1, 1 };

  uint32_T shReg;
  uint32_T input;
  uint32_T bitMask;
  uint32_T inpBit;
  real_T dataWithCRC[563];
  commcodegen_BPSKModulator_348 hMod;
  commcodegen_BPSKModulator_348 *c_obj;
  comm_BPSKModulator_9 *d_obj;
  static const real_T dv15[4] = { 1.0, 0.0, -1.0, 1.2246063538223773E-16 };

  const mxArray *g_y;
  static const int32_T iv154[2] = { 1, 45 };

  const mxArray *h_y;
  static const int32_T iv155[2] = { 1, 4 };

  int32_T tmp_size[2];
  creal_T tmp_data[563];
  static int32_T iv156[2] = { 563, 1 };

  const mxArray *i_y;
  const mxArray *j_y;
  real_T c_r[13];
  const mxArray *k_y;
  static const int32_T iv157[2] = { 1, 45 };

  const mxArray *l_y;
  static const int32_T iv158[2] = { 1, 4 };

  creal_T b_tmp_data[563];
  static int32_T iv159[2] = { 13, 1 };

  creal_T modData[576];
  creal_T ofdmData[576];
  comm_PNSequence_10 hPN;
  comm_PNSequence_10 *e_obj;
  static const int8_T iv160[8] = { 1, 0, 0, 0, 1, 0, 0, 1 };

  static const int8_T iv161[7] = { 0, 0, 0, 0, 0, 0, 1 };

  int8_T pilot[12];
  uint8_T tmp;
  uint8_T tmp2;
  int8_T pilots[48];
  int32_T ia;
  real_T b_pilots[48];
  creal_T d_r[960];
  creal_T preambles[320];
  OFDMDemodulator_3 *object;
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

  static const int8_T iv162[53] = { 1, 1, -1, -1, 1, 1, -1, 1, -1, 1, 1, 1, 1, 1,
    1, -1, -1, 1, 1, -1, 1, -1, 1, 1, 1, 1, 0, 1, -1, -1, 1, 1, -1, 1, -1, 1, -1,
    -1, -1, -1, -1, 1, 1, -1, -1, 1, -1, 1, -1, 1, 1, 1, 1 };

  static const int8_T iv163[48] = { 1, 2, 3, 4, 5, 7, 8, 9, 10, 11, 12, 13, 14,
    15, 16, 17, 18, 19, 21, 22, 23, 24, 25, 26, 28, 29, 30, 31, 32, 33, 35, 36,
    37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 49, 50, 51, 52, 53 };

  emlrtHeapReferenceStackEnterFcnR2012b(emlrtRootTLSGlobal);
  emxInitStruct_OFDMModulator_196(&hDataMod, &e_emlrtRTEI, TRUE);
  emxInitStruct_OFDMModulator_4(&hPreambleMod, &f_emlrtRTEI, TRUE);

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
  emlrtPushRtStackR2012b(&w_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&j_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  y = NULL;
  m33 = mxCreateDoubleScalar(1.0);
  emlrtAssign(&y, m33);
  b_y = NULL;
  m33 = mxCreateDoubleScalar(1.0);
  emlrtAssign(&b_y, m33);
  b_r = emlrt_marshallIn(b_rand(y, b_y, &emlrtMCI), "rand");
  emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&j_emlrtRSI, emlrtRootTLSGlobal);
  bitNumber = (int32_T)muDoubleScalarFloor(b_r * 128.0);
  bitNumber = emlrtDynamicBoundsCheckFastR2012b(bitNumber, 0, 255, &h_emlrtBCI,
    emlrtRootTLSGlobal);
  bitNumber = (int32_T)muDoubleScalarRem(bitNumber, 256.0);
  if (bitNumber < 0) {
    uniqueID = (int8_T)-(int8_T)(uint8_T)-(real_T)bitNumber;
  } else {
    uniqueID = (int8_T)(uint8_T)(real_T)bitNumber;
  }

  emlrtPopRtStackR2012b(&w_emlrtRSI, emlrtRootTLSGlobal);

  /* Add additional character to differentiate messages */
  emlrtPushRtStackR2012b(&ek_emlrtRSI, emlrtRootTLSGlobal);
  bitNumber = (int32_T)(48.0 + destNode);
  bitNumber = emlrtDynamicBoundsCheckFastR2012b(bitNumber, 0, 255, &h_emlrtBCI,
    emlrtRootTLSGlobal);
  bitNumber = (int32_T)muDoubleScalarRem(bitNumber, 256.0);
  if (bitNumber < 0) {
    destNodeChar = (int8_T)-(int8_T)(uint8_T)-(real_T)bitNumber;
  } else {
    destNodeChar = (int8_T)(uint8_T)(real_T)bitNumber;
  }

  emlrtPopRtStackR2012b(&ek_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&fk_emlrtRSI, emlrtRootTLSGlobal);
  bitNumber = (int32_T)(48.0 + originNode);
  bitNumber = emlrtDynamicBoundsCheckFastR2012b(bitNumber, 0, 255, &h_emlrtBCI,
    emlrtRootTLSGlobal);
  bitNumber = (int32_T)muDoubleScalarRem(bitNumber, 256.0);
  if (bitNumber < 0) {
    originNodeChar = (int8_T)-(int8_T)(uint8_T)-(real_T)bitNumber;
  } else {
    originNodeChar = (int8_T)(uint8_T)(real_T)bitNumber;
  }

  emlrtPopRtStackR2012b(&fk_emlrtRSI, emlrtRootTLSGlobal);

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
  emlrtPushRtStackR2012b(&x_emlrtRSI, emlrtRootTLSGlobal);
  OFDMModulator_OFDMModulator(&hPreambleMod);
  emlrtPopRtStackR2012b(&x_emlrtRSI, emlrtRootTLSGlobal);

  /*  Modulate and scale */
  emlrtPushRtStackR2012b(&y_emlrtRSI, emlrtRootTLSGlobal);
  SystemCore_step(&hPreambleMod, shortPreambleOFDM);
  for (bitNumber = 0; bitNumber < 64; bitNumber++) {
    shortPreambleOFDM[bitNumber].re *= 1.4719601443879744;
    shortPreambleOFDM[bitNumber].im *= 1.4719601443879744;
  }

  emlrtPopRtStackR2012b(&y_emlrtRSI, emlrtRootTLSGlobal);

  /*  Form 10 Short Preambles */
  memcpy(&completeShortPreambleOFDM[0], &shortPreambleOFDM[0], sizeof(creal_T) <<
         6);
  memcpy(&completeShortPreambleOFDM[64], &shortPreambleOFDM[0], sizeof(creal_T) <<
         6);
  memcpy(&completeShortPreambleOFDM[128], &shortPreambleOFDM[0], sizeof(creal_T)
         << 5);

  /* % Create Long Preamble */
  /*  Modulate */
  emlrtPushRtStackR2012b(&ab_emlrtRSI, emlrtRootTLSGlobal);
  b_SystemCore_step(&hPreambleMod, longPreambleOFDM);
  emlrtPopRtStackR2012b(&ab_emlrtRSI, emlrtRootTLSGlobal);

  /*  Form 2 Long Preambles */
  memcpy(&completeLongPreambleOFDM[0], &longPreambleOFDM[32], sizeof(creal_T) <<
         5);
  memcpy(&completeLongPreambleOFDM[32], &longPreambleOFDM[0], sizeof(creal_T) <<
         6);
  memcpy(&completeLongPreambleOFDM[96], &longPreambleOFDM[0], sizeof(creal_T) <<
         6);

  /* % Generate Data */
  /*  Use string as message */
  emlrtPushRtStackR2012b(&bb_emlrtRSI, emlrtRootTLSGlobal);
  for (bitNumber = 0; bitNumber < 3; bitNumber++) {
    inputPayloadMessage[bitNumber] = b_inputPayloadMessage[bitNumber];
  }

  inputPayloadMessage[3] = originNodeChar;
  inputPayloadMessage[4] = destNodeChar;
  inputPayloadMessage[5] = uniqueID;
  for (bitNumber = 0; bitNumber < 3; bitNumber++) {
    inputPayloadMessage[bitNumber + 6] = cv183[bitNumber];
  }

  for (bitNumber = 0; bitNumber < 71; bitNumber++) {
    inputPayloadMessage[bitNumber + 9] = '-';
  }

  OFDMletters2bits(inputPayloadMessage, originalData);
  emlrtPopRtStackR2012b(&bb_emlrtRSI, emlrtRootTLSGlobal);
  for (bitNumber = 0; bitNumber < 80; bitNumber++) {
    for (k = 0; k < 7; k++) {
      x[k + 7 * bitNumber] = originalData[bitNumber + 80 * k];
    }
  }

  memcpy(&b_originalData[0], &x[0], 560U * sizeof(real_T));

  /*  Generate CRC */
  emlrtPushRtStackR2012b(&cb_emlrtRSI, emlrtRootTLSGlobal);
  obj = &hGen;
  emlrtPushRtStackR2012b(&ec_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  obj->isInitialized = FALSE;
  obj->isReleased = FALSE;
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  obj->inputDirectFeedthrough1 = FALSE;
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&ec_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&ec_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&ec_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&ec_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = &obj->cSFunObject;

  /* System object Constructor function: comm.CRCGenerator */
  b_obj->S0_isInitialized = FALSE;
  b_obj->S1_isReleased = FALSE;
  for (i = 0; i < 256; i++) {
    b_obj->P0_CRCTable[i] = (uint32_T)iv148[i];
  }

  emlrtPopRtStackR2012b(&ec_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&ec_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&fc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&fc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&u_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&u_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&ec_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&ec_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&ec_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&ec_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&ec_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&ec_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&ec_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&ec_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&ec_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&ec_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&ec_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&ec_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&ec_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&cb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&db_emlrtRSI, emlrtRootTLSGlobal);
  obj = &hGen;
  if (!obj->isReleased) {
  } else {
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    c_y = NULL;
    m33 = mxCreateCharArray(2, iv149);
    for (i = 0; i < 45; i++) {
      cv184[i] = cv185[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 45, m33, cv184);
    emlrtAssign(&c_y, m33);
    d_y = NULL;
    m33 = mxCreateCharArray(2, iv150);
    for (i = 0; i < 4; i++) {
      cv186[i] = cv187[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 4, m33, cv186);
    emlrtAssign(&d_y, m33);
    c_error(message(c_y, d_y, &b_emlrtMCI), &b_emlrtMCI);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  }

  if (!obj->isInitialized) {
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    if (!obj->isInitialized) {
    } else {
      emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
      e_y = NULL;
      m33 = mxCreateCharArray(2, iv151);
      for (i = 0; i < 51; i++) {
        cv188[i] = cv189[i];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 51, m33, cv188);
      emlrtAssign(&e_y, m33);
      f_y = NULL;
      m33 = mxCreateCharArray(2, iv152);
      for (i = 0; i < 5; i++) {
        cv190[i] = cv191[i];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 5, m33, cv190);
      emlrtAssign(&f_y, m33);
      c_error(message(e_y, f_y, &b_emlrtMCI), &b_emlrtMCI);
      emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    }

    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    obj->isInitialized = TRUE;
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
    for (bitNumber = 0; bitNumber < 8; bitNumber++) {
      obj->inputVarSize1[bitNumber] = (uint32_T)value[bitNumber];
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
    obj->TunablePropsChanged = FALSE;
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  if (obj->TunablePropsChanged) {
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    obj->TunablePropsChanged = FALSE;
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  k = 0;
  exitg1 = FALSE;
  while ((exitg1 == FALSE) && (k < 8)) {
    if (obj->inputVarSize1[k] != (uint32_T)iv153[k]) {
      emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
      for (bitNumber = 0; bitNumber < 8; bitNumber++) {
        obj->inputVarSize1[bitNumber] = (uint32_T)value[bitNumber];
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
  emlrtPushRtStackR2012b(&gc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&ec_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = &obj->cSFunObject;

  /* System object Outputs function: comm.CRCGenerator */
  /* Initialize for current sub-frame */
  shReg = 0U;
  bitNumber = 0;
  for (i = 0; i < 187; i++) {
    input = 0U;
    bitMask = 4U;
    for (k = 0; k < 3; k++) {
      if (bitNumber < 560) {
        inpBit = (uint32_T)b_originalData[bitNumber] & 1U;
        dataWithCRC[bitNumber] = inpBit;

        /* Build input data chunk */
        input |= bitMask * inpBit;
        bitMask >>= 1U;
        bitNumber++;
      }
    }

    /* Retrieve value from CRC table and update register */
    shReg = b_obj->P0_CRCTable[shReg & 7U] ^ (shReg << 3U | input);
  }

  /* Process the leftover bits */
  for (i = 0; i < 2; i++) {
    bitNumber = (int32_T)(shReg >> 2U & 1U);
    shReg <<= 1U;
    if ((uint32_T)bitNumber != 0U) {
      shReg ^= 1U;
    }
  }

  /* Apply final XOR */
  /* Output the register */
  dataWithCRC[560] = (int32_T)(shReg >> 2U) & 1;
  dataWithCRC[561] = (int32_T)(shReg >> 1U) & 1;
  dataWithCRC[562] = (int32_T)shReg & 1;
  emlrtPopRtStackR2012b(&ec_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&gc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&gc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&ec_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&ec_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&gc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&db_emlrtRSI, emlrtRootTLSGlobal);

  /*  Add CRC */
  /*  Construct modulator for each subcarrier */
  emlrtPushRtStackR2012b(&eb_emlrtRSI, emlrtRootTLSGlobal);
  c_obj = &hMod;
  emlrtPushRtStackR2012b(&hc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  c_obj->isInitialized = FALSE;
  c_obj->isReleased = FALSE;
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  c_obj->inputDirectFeedthrough1 = FALSE;
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&hc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&hc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&hc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&hc_emlrtRSI, emlrtRootTLSGlobal);
  d_obj = &c_obj->cSFunObject;

  /* System object Constructor function: comm.BPSKModulator */
  d_obj->S0_isInitialized = FALSE;
  d_obj->S1_isReleased = FALSE;
  for (i = 0; i < 4; i++) {
    d_obj->P0_modmap[i] = dv15[i];
  }

  emlrtPopRtStackR2012b(&hc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&hc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&hc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&hc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&hc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&hc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&hc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&hc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&hc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&eb_emlrtRSI, emlrtRootTLSGlobal);

  /*  BPSK */
  /*  Apply modulator for each subcarrier */
  emlrtPushRtStackR2012b(&fb_emlrtRSI, emlrtRootTLSGlobal);
  c_obj = &hMod;
  if (!c_obj->isReleased) {
  } else {
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    g_y = NULL;
    m33 = mxCreateCharArray(2, iv154);
    for (i = 0; i < 45; i++) {
      cv184[i] = cv185[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 45, m33, cv184);
    emlrtAssign(&g_y, m33);
    h_y = NULL;
    m33 = mxCreateCharArray(2, iv155);
    for (i = 0; i < 4; i++) {
      cv186[i] = cv187[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 4, m33, cv186);
    emlrtAssign(&h_y, m33);
    c_error(message(g_y, h_y, &b_emlrtMCI), &b_emlrtMCI);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  }

  if (!c_obj->isInitialized) {
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    e_SystemCore_setup(c_obj);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  e_SystemCore_checkTunableProps(c_obj);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  g_SystemCore_detectInputSizeCha(c_obj);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&hc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&hc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&gc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&hc_emlrtRSI, emlrtRootTLSGlobal);
  c_Outputs(&c_obj->cSFunObject, dataWithCRC, iv156, tmp_data, tmp_size);
  emlrtPopRtStackR2012b(&hc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&gc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&gc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&hc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&hc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&gc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&fb_emlrtRSI, emlrtRootTLSGlobal);

  /*  Pad IFFT */
  emlrtPushRtStackR2012b(&gb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&j_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  i_y = NULL;
  m33 = mxCreateDoubleScalar(13.0);
  emlrtAssign(&i_y, m33);
  j_y = NULL;
  m33 = mxCreateDoubleScalar(1.0);
  emlrtAssign(&j_y, m33);
  e_emlrt_marshallIn(b_rand(i_y, j_y, &emlrtMCI), "rand", c_r);
  emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&j_emlrtRSI, emlrtRootTLSGlobal);
  for (k = 0; k < 13; k++) {
    c_r[k] = muDoubleScalarFloor(c_r[k] * 2.0);
  }

  c_obj = &hMod;
  if (!c_obj->isReleased) {
  } else {
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    k_y = NULL;
    m33 = mxCreateCharArray(2, iv157);
    for (i = 0; i < 45; i++) {
      cv184[i] = cv185[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 45, m33, cv184);
    emlrtAssign(&k_y, m33);
    l_y = NULL;
    m33 = mxCreateCharArray(2, iv158);
    for (i = 0; i < 4; i++) {
      cv186[i] = cv187[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 4, m33, cv186);
    emlrtAssign(&l_y, m33);
    c_error(message(k_y, l_y, &b_emlrtMCI), &b_emlrtMCI);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  }

  if (!c_obj->isInitialized) {
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    f_SystemCore_setup(c_obj);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  f_SystemCore_checkTunableProps(c_obj);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  h_SystemCore_detectInputSizeCha(c_obj);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&hc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&hc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&gc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&hc_emlrtRSI, emlrtRootTLSGlobal);
  c_Outputs(&c_obj->cSFunObject, c_r, iv159, b_tmp_data, tmp_size);
  emlrtPopRtStackR2012b(&hc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&gc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&gc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&hc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&hc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&gc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  memcpy(&modData[0], &tmp_data[0], 563U * sizeof(creal_T));
  memcpy(&modData[563], &b_tmp_data[0], 13U * sizeof(creal_T));
  emlrtPopRtStackR2012b(&gb_emlrtRSI, emlrtRootTLSGlobal);

  /*  Calculate required data sizes for correct receiver operation */
  /*  Save desired message size */
  /*  Save number of transmitted frames */
  /*  Convert data into subcarrier streams */
  memcpy(&ofdmData[0], &modData[0], 576U * sizeof(creal_T));

  /*  Create Pilots */
  emlrtPushRtStackR2012b(&hb_emlrtRSI, emlrtRootTLSGlobal);
  e_obj = &hPN;

  /* System object Constructor function: comm.PNSequence */
  e_obj->S0_isInitialized = FALSE;
  e_obj->S1_isReleased = FALSE;
  for (i = 0; i < 8; i++) {
    e_obj->P0_Polynomial[i] = (uint8_T)iv160[i];
  }

  for (i = 0; i < 7; i++) {
    e_obj->P1_IniState[i] = 1;
    e_obj->P2_Mask[i] = (uint8_T)iv161[i];
  }

  emlrtPopRtStackR2012b(&hb_emlrtRSI, emlrtRootTLSGlobal);

  /* pilot=[1 0  0  1  0  0  1  0  0  0  0  0]'; */
  emlrtPushRtStackR2012b(&ib_emlrtRSI, emlrtRootTLSGlobal);
  e_obj = &hPN;
  if (!e_obj->S0_isInitialized) {
    e_obj->S0_isInitialized = TRUE;
    if (e_obj->S1_isReleased) {
      emlrtErrorWithMessageIdR2012b(emlrtRootTLSGlobal, &bc_emlrtRTEI,
        "MATLAB:system:runtimeMethodCalledWhenReleasedCodegen", 0);
    }

    /* System object Initialization function: comm.PNSequence */
    for (bitNumber = 0; bitNumber < 7; bitNumber++) {
      e_obj->W0_shiftReg[bitNumber] = e_obj->P1_IniState[bitNumber];
      emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, emlrtRootTLSGlobal);
    }
  }

  emlrtPushRtStackR2012b(&ic_emlrtRSI, emlrtRootTLSGlobal);

  /* System object Outputs function: comm.PNSequence */
  for (bitNumber = 0; bitNumber < 12; bitNumber++) {
    tmp = 0;
    for (i = 0; i < 7; i++) {
      tmp = (uint8_T)((uint32_T)tmp + (uint8_T)((uint32_T)e_obj->P0_Polynomial[i
        + 1] * e_obj->W0_shiftReg[i]));
    }

    tmp &= 1;
    tmp2 = 0;
    for (i = 0; i < 7; i++) {
      tmp2 = (uint8_T)((uint32_T)tmp2 + (uint8_T)((uint32_T)e_obj->W0_shiftReg[i]
        * e_obj->P2_Mask[i]));
    }

    pilot[bitNumber] = (int8_T)(tmp2 & 1);
    for (i = 5; i > -1; i += -1) {
      e_obj->W0_shiftReg[i + 1] = e_obj->W0_shiftReg[i];
    }

    e_obj->W0_shiftReg[0U] = tmp;
  }

  emlrtPopRtStackR2012b(&ic_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&ib_emlrtRSI, emlrtRootTLSGlobal);

  /*  Create pilot */
  i = 0;
  for (bitNumber = 0; bitNumber < 4; bitNumber++) {
    ia = 0;
    for (k = 0; k < 12; k++) {
      pilots[i] = pilot[ia];
      ia++;
      i++;
    }
  }

  /*  Expand to all pilot tones */
  for (bitNumber = 0; bitNumber < 12; bitNumber++) {
    for (k = 0; k < 4; k++) {
      b_pilots[k + (bitNumber << 2)] = 2.0 * (real_T)(pilots[bitNumber + 12 * k]
        < 1) - 1.0;
    }

    /*  Bipolar to unipolar */
    b_pilots[3 + (bitNumber << 2)] = -b_pilots[3 + (bitNumber << 2)];
  }

  /*  Invert last pilot */
  /*  Construct Modulator */
  emlrtPushRtStackR2012b(&jb_emlrtRSI, emlrtRootTLSGlobal);
  b_OFDMModulator_OFDMModulator(&hDataMod);
  emlrtPopRtStackR2012b(&jb_emlrtRSI, emlrtRootTLSGlobal);

  /*  Modulate */
  emlrtPushRtStackR2012b(&kb_emlrtRSI, emlrtRootTLSGlobal);
  c_SystemCore_step(&hDataMod, ofdmData, b_pilots, d_r);
  emlrtPopRtStackR2012b(&kb_emlrtRSI, emlrtRootTLSGlobal);

  /*  Add preambles to data */
  memcpy(&preambles[0], &completeShortPreambleOFDM[0], 160U * sizeof(creal_T));
  memcpy(&preambles[160], &completeLongPreambleOFDM[0], 160U * sizeof(creal_T));
  memcpy(&SD->u1.f2.r[0], &preambles[0], 320U * sizeof(creal_T));
  memcpy(&SD->u1.f2.r[320], &d_r[0], 960U * sizeof(creal_T));

  /*  Repeat frame (Used in debugging) */
  i = 0;
  for (bitNumber = 0; bitNumber < 30; bitNumber++) {
    ia = 0;
    for (k = 0; k < 1280; k++) {
      r[i] = SD->u1.f2.r[ia];
      ia++;
      i++;
    }
  }

  /*  Save Demodulator object data for receiver */
  /* hDataDemod = get(OFDMDemodulator(hDataMod)); */
  /* hPreambleDemod = get(OFDMDemodulator(hPreambleMod)); */
  emlrtPushRtStackR2012b(&lb_emlrtRSI, emlrtRootTLSGlobal);
  *hDataDemod = OFDMDemodulator_OFDMDemodulator(iobj_0);
  emlrtPopRtStackR2012b(&lb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&mb_emlrtRSI, emlrtRootTLSGlobal);
  object = iobj_1;
  *hPreambleDemod = object;
  emlrtPushRtStackR2012b(&cd_emlrtRSI, emlrtRootTLSGlobal);
  object = *hPreambleDemod;
  emlrtPushRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  object->isInitialized = FALSE;
  object->isReleased = FALSE;
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&cd_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&dd_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&dd_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&ed_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&ed_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&fd_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&fd_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&gd_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&gd_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&hd_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&hd_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&id_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&id_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&mb_emlrtRSI, emlrtRootTLSGlobal);

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
    tx->shortPreamble[i] = dcv4[i];
  }

  for (i = 0; i < 53; i++) {
    tx->longPreamble[i] = iv162[i];
  }

  for (i = 0; i < 64; i++) {
    tx->longPreambleOFDM[i] = longPreambleOFDM[i];
  }

  for (i = 0; i < 160; i++) {
    tx->completeLongPreambleOFDM[i] = completeLongPreambleOFDM[i];
  }

  for (bitNumber = 0; bitNumber < 48; bitNumber++) {
    tx->pilots[bitNumber] = b_pilots[bitNumber];
  }

  for (i = 0; i < 320; i++) {
    tx->preambles[i] = preambles[i];
  }

  for (bitNumber = 0; bitNumber < 4; bitNumber++) {
    tx->pilotLocationsWithoutGuardbands[bitNumber] = 6.0 + 14.0 * (real_T)
      bitNumber;
  }

  tx->dataSubcarrierIndexies.size[0] = 1;
  tx->dataSubcarrierIndexies.size[1] = 48;
  for (bitNumber = 0; bitNumber < 48; bitNumber++) {
    tx->dataSubcarrierIndexies.data[bitNumber] = iv163[bitNumber];
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
  e_obj = &hPN;

  /* System object Destructor function: comm.PNSequence */
  if (e_obj->S0_isInitialized) {
    e_obj->S0_isInitialized = FALSE;
    if (!e_obj->S1_isReleased) {
      e_obj->S1_isReleased = TRUE;
    }
  }

  emxFreeStruct_OFDMModulator_4(&hPreambleMod);
  emxFreeStruct_OFDMModulator_196(&hDataMod);
  emlrtHeapReferenceStackLeaveFcnR2012b(emlrtRootTLSGlobal);
}

void generateOFDMSignal_TX2(OFDMDemodulator_2 *iobj_0, OFDMDemodulator_3 *iobj_1,
  OFDMDemodulator_3 **hPreambleDemod, OFDMDemodulator_2 **hDataDemod, creal_T r
  [38400], b_struct_T *tx)
{
  OFDMModulator_196 hDataMod;
  OFDMModulator_4 hPreambleMod;
  real_T varargin_1;
  int32_T bitNumber;
  char_T uniqueID;
  OFDMModulator_4 *object;
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
  commcodegen_CRCGenerator *obj;
  comm_CRCGenerator_0 *b_obj;
  int32_T i;
  static const int8_T iv12[256] = { 0, 1, 2, 3, 4, 5, 6, 7, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0 };

  const mxArray *y;
  static const int32_T iv13[2] = { 1, 45 };

  const mxArray *m2;
  char_T cv22[45];
  static const char_T cv23[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C',
    'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv14[2] = { 1, 4 };

  char_T cv24[4];
  static const char_T cv25[4] = { 's', 't', 'e', 'p' };

  const mxArray *c_y;
  static const int32_T iv15[2] = { 1, 51 };

  char_T cv26[51];
  static const char_T cv27[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l',
    'e', 'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *d_y;
  static const int32_T iv16[2] = { 1, 5 };

  char_T cv28[5];
  static const char_T cv29[5] = { 's', 'e', 't', 'u', 'p' };

  static const int16_T value[8] = { 560, 1, 1, 1, 1, 1, 1, 1 };

  boolean_T exitg1;
  static const int16_T iv17[8] = { 560, 1, 1, 1, 1, 1, 1, 1 };

  uint32_T shReg;
  uint32_T input;
  uint32_T bitMask;
  uint32_T inpBit;
  real_T dataWithCRC[563];
  commcodegen_BPSKModulator hMod;
  commcodegen_BPSKModulator *c_obj;
  comm_BPSKModulator_1 *d_obj;
  static const real_T dv0[4] = { 1.0, 0.0, -1.0, 1.2246063538223773E-16 };

  const mxArray *e_y;
  static const int32_T iv18[2] = { 1, 45 };

  const mxArray *f_y;
  static const int32_T iv19[2] = { 1, 4 };

  int32_T tmp_size[2];
  creal_T tmp_data[563];
  static int32_T iv20[2] = { 563, 1 };

  const mxArray *g_y;
  const mxArray *h_y;
  real_T b_r[13];
  const mxArray *i_y;
  static const int32_T iv21[2] = { 1, 45 };

  const mxArray *j_y;
  static const int32_T iv22[2] = { 1, 4 };

  creal_T b_tmp_data[563];
  static int32_T iv23[2] = { 13, 1 };

  creal_T modData[576];
  creal_T ofdmData[576];
  comm_PNSequence_2 hPN;
  comm_PNSequence_2 *e_obj;
  static const int8_T iv24[8] = { 1, 0, 0, 0, 1, 0, 0, 1 };

  static const int8_T iv25[7] = { 0, 0, 0, 0, 0, 0, 1 };

  int8_T pilot[12];
  uint8_T tmp;
  uint8_T tmp2;
  int8_T pilots[48];
  int32_T ia;
  real_T b_pilots[48];
  creal_T c_r[960];
  creal_T preambles[320];
  creal_T d_r[1280];
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

  static const int8_T iv26[53] = { 1, 1, -1, -1, 1, 1, -1, 1, -1, 1, 1, 1, 1, 1,
    1, -1, -1, 1, 1, -1, 1, -1, 1, 1, 1, 1, 0, 1, -1, -1, 1, 1, -1, 1, -1, 1, -1,
    -1, -1, -1, -1, 1, 1, -1, -1, 1, -1, 1, -1, 1, 1, 1, 1 };

  static const int8_T iv27[48] = { 1, 2, 3, 4, 5, 7, 8, 9, 10, 11, 12, 13, 14,
    15, 16, 17, 18, 19, 21, 22, 23, 24, 25, 26, 28, 29, 30, 31, 32, 33, 35, 36,
    37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 49, 50, 51, 52, 53 };

  emlrtHeapReferenceStackEnterFcnR2012b(emlrtRootTLSGlobal);
  emxInitStruct_OFDMModulator_196(&hDataMod, &e_emlrtRTEI, TRUE);
  emxInitStruct_OFDMModulator_4(&hPreambleMod, &f_emlrtRTEI, TRUE);

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
  emlrtPushRtStackR2012b(&w_emlrtRSI, emlrtRootTLSGlobal);
  varargin_1 = randi();
  bitNumber = (int32_T)varargin_1;
  bitNumber = emlrtDynamicBoundsCheckFastR2012b(bitNumber, 0, 255, &h_emlrtBCI,
    emlrtRootTLSGlobal);
  bitNumber = (int32_T)muDoubleScalarRem(bitNumber, 256.0);
  if (bitNumber < 0) {
    uniqueID = (int8_T)-(int8_T)(uint8_T)-(real_T)bitNumber;
  } else {
    uniqueID = (int8_T)(uint8_T)(real_T)bitNumber;
  }

  emlrtPopRtStackR2012b(&w_emlrtRSI, emlrtRootTLSGlobal);

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
  emlrtPushRtStackR2012b(&x_emlrtRSI, emlrtRootTLSGlobal);
  object = &hPreambleMod;
  emlrtPushRtStackR2012b(&q_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  object->isInitialized = FALSE;
  object->isReleased = FALSE;
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&q_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&r_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&u_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&u_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&u_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&u_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&u_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&u_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&u_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&u_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&r_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&x_emlrtRSI, emlrtRootTLSGlobal);

  /*  Modulate and scale */
  emlrtPushRtStackR2012b(&y_emlrtRSI, emlrtRootTLSGlobal);
  SystemCore_step(&hPreambleMod, shortPreambleOFDM);
  for (bitNumber = 0; bitNumber < 64; bitNumber++) {
    shortPreambleOFDM[bitNumber].re *= 1.4719601443879744;
    shortPreambleOFDM[bitNumber].im *= 1.4719601443879744;
  }

  emlrtPopRtStackR2012b(&y_emlrtRSI, emlrtRootTLSGlobal);

  /*  Form 10 Short Preambles */
  memcpy(&completeShortPreambleOFDM[0], &shortPreambleOFDM[0], sizeof(creal_T) <<
         6);
  memcpy(&completeShortPreambleOFDM[64], &shortPreambleOFDM[0], sizeof(creal_T) <<
         6);
  memcpy(&completeShortPreambleOFDM[128], &shortPreambleOFDM[0], sizeof(creal_T)
         << 5);

  /* % Create Long Preamble */
  /*  Modulate */
  emlrtPushRtStackR2012b(&ab_emlrtRSI, emlrtRootTLSGlobal);
  b_SystemCore_step(&hPreambleMod, longPreambleOFDM);
  emlrtPopRtStackR2012b(&ab_emlrtRSI, emlrtRootTLSGlobal);

  /*  Form 2 Long Preambles */
  memcpy(&completeLongPreambleOFDM[0], &longPreambleOFDM[32], sizeof(creal_T) <<
         5);
  memcpy(&completeLongPreambleOFDM[32], &longPreambleOFDM[0], sizeof(creal_T) <<
         6);
  memcpy(&completeLongPreambleOFDM[96], &longPreambleOFDM[0], sizeof(creal_T) <<
         6);

  /* % Generate Data */
  /*  Use string as message */
  emlrtPushRtStackR2012b(&bb_emlrtRSI, emlrtRootTLSGlobal);
  for (bitNumber = 0; bitNumber < 18; bitNumber++) {
    inputPayloadMessage[bitNumber] = b_inputPayloadMessage[bitNumber];
  }

  inputPayloadMessage[18] = '1';
  inputPayloadMessage[19] = '1';
  inputPayloadMessage[20] = uniqueID;
  for (bitNumber = 0; bitNumber < 3; bitNumber++) {
    inputPayloadMessage[bitNumber + 21] = cv21[bitNumber];
  }

  for (bitNumber = 0; bitNumber < 56; bitNumber++) {
    inputPayloadMessage[bitNumber + 24] = '-';
  }

  OFDMletters2bits(inputPayloadMessage, originalData);
  emlrtPopRtStackR2012b(&bb_emlrtRSI, emlrtRootTLSGlobal);
  for (bitNumber = 0; bitNumber < 80; bitNumber++) {
    for (k = 0; k < 7; k++) {
      x[k + 7 * bitNumber] = originalData[bitNumber + 80 * k];
    }
  }

  memcpy(&b_originalData[0], &x[0], 560U * sizeof(real_T));

  /*  Generate CRC */
  emlrtPushRtStackR2012b(&cb_emlrtRSI, emlrtRootTLSGlobal);
  obj = &hGen;
  emlrtPushRtStackR2012b(&ec_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  obj->isInitialized = FALSE;
  obj->isReleased = FALSE;
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  obj->inputDirectFeedthrough1 = FALSE;
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&ec_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&ec_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&ec_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&ec_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = &obj->cSFunObject;

  /* System object Constructor function: comm.CRCGenerator */
  b_obj->S0_isInitialized = FALSE;
  b_obj->S1_isReleased = FALSE;
  for (i = 0; i < 256; i++) {
    b_obj->P0_CRCTable[i] = (uint32_T)iv12[i];
  }

  emlrtPopRtStackR2012b(&ec_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&ec_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&fc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&fc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&u_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&u_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&ec_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&ec_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&ec_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&ec_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&ec_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&ec_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&ec_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&ec_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&ec_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&ec_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&ec_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&ec_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&ec_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&cb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&db_emlrtRSI, emlrtRootTLSGlobal);
  obj = &hGen;
  if (!obj->isReleased) {
  } else {
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    y = NULL;
    m2 = mxCreateCharArray(2, iv13);
    for (i = 0; i < 45; i++) {
      cv22[i] = cv23[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 45, m2, cv22);
    emlrtAssign(&y, m2);
    b_y = NULL;
    m2 = mxCreateCharArray(2, iv14);
    for (i = 0; i < 4; i++) {
      cv24[i] = cv25[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 4, m2, cv24);
    emlrtAssign(&b_y, m2);
    c_error(message(y, b_y, &b_emlrtMCI), &b_emlrtMCI);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  }

  if (!obj->isInitialized) {
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    if (!obj->isInitialized) {
    } else {
      emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
      c_y = NULL;
      m2 = mxCreateCharArray(2, iv15);
      for (i = 0; i < 51; i++) {
        cv26[i] = cv27[i];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 51, m2, cv26);
      emlrtAssign(&c_y, m2);
      d_y = NULL;
      m2 = mxCreateCharArray(2, iv16);
      for (i = 0; i < 5; i++) {
        cv28[i] = cv29[i];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 5, m2, cv28);
      emlrtAssign(&d_y, m2);
      c_error(message(c_y, d_y, &b_emlrtMCI), &b_emlrtMCI);
      emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    }

    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    obj->isInitialized = TRUE;
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
    for (bitNumber = 0; bitNumber < 8; bitNumber++) {
      obj->inputVarSize1[bitNumber] = (uint32_T)value[bitNumber];
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
    obj->TunablePropsChanged = FALSE;
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  if (obj->TunablePropsChanged) {
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    obj->TunablePropsChanged = FALSE;
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  k = 0;
  exitg1 = FALSE;
  while ((exitg1 == FALSE) && (k < 8)) {
    if (obj->inputVarSize1[k] != (uint32_T)iv17[k]) {
      emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
      for (bitNumber = 0; bitNumber < 8; bitNumber++) {
        obj->inputVarSize1[bitNumber] = (uint32_T)value[bitNumber];
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
  emlrtPushRtStackR2012b(&gc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&ec_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = &obj->cSFunObject;

  /* System object Outputs function: comm.CRCGenerator */
  /* Initialize for current sub-frame */
  shReg = 0U;
  bitNumber = 0;
  for (i = 0; i < 187; i++) {
    input = 0U;
    bitMask = 4U;
    for (k = 0; k < 3; k++) {
      if (bitNumber < 560) {
        inpBit = (uint32_T)b_originalData[bitNumber] & 1U;
        dataWithCRC[bitNumber] = inpBit;

        /* Build input data chunk */
        input |= bitMask * inpBit;
        bitMask >>= 1U;
        bitNumber++;
      }
    }

    /* Retrieve value from CRC table and update register */
    shReg = b_obj->P0_CRCTable[shReg & 7U] ^ (shReg << 3U | input);
  }

  /* Process the leftover bits */
  for (i = 0; i < 2; i++) {
    bitNumber = (int32_T)(shReg >> 2U & 1U);
    shReg <<= 1U;
    if ((uint32_T)bitNumber != 0U) {
      shReg ^= 1U;
    }
  }

  /* Apply final XOR */
  /* Output the register */
  dataWithCRC[560] = (int32_T)(shReg >> 2U) & 1;
  dataWithCRC[561] = (int32_T)(shReg >> 1U) & 1;
  dataWithCRC[562] = (int32_T)shReg & 1;
  emlrtPopRtStackR2012b(&ec_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&gc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&gc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&ec_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&ec_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&gc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&db_emlrtRSI, emlrtRootTLSGlobal);

  /*  Add CRC */
  /*  Construct modulator for each subcarrier */
  emlrtPushRtStackR2012b(&eb_emlrtRSI, emlrtRootTLSGlobal);
  c_obj = &hMod;
  emlrtPushRtStackR2012b(&hc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  c_obj->isInitialized = FALSE;
  c_obj->isReleased = FALSE;
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  c_obj->inputDirectFeedthrough1 = FALSE;
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&hc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&hc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&hc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&hc_emlrtRSI, emlrtRootTLSGlobal);
  d_obj = &c_obj->cSFunObject;

  /* System object Constructor function: comm.BPSKModulator */
  d_obj->S0_isInitialized = FALSE;
  d_obj->S1_isReleased = FALSE;
  for (i = 0; i < 4; i++) {
    d_obj->P0_modmap[i] = dv0[i];
  }

  emlrtPopRtStackR2012b(&hc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&hc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&hc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&hc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&hc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&hc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&hc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&hc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&hc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&eb_emlrtRSI, emlrtRootTLSGlobal);

  /*  BPSK */
  /*  Apply modulator for each subcarrier */
  emlrtPushRtStackR2012b(&fb_emlrtRSI, emlrtRootTLSGlobal);
  c_obj = &hMod;
  if (!c_obj->isReleased) {
  } else {
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    e_y = NULL;
    m2 = mxCreateCharArray(2, iv18);
    for (i = 0; i < 45; i++) {
      cv22[i] = cv23[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 45, m2, cv22);
    emlrtAssign(&e_y, m2);
    f_y = NULL;
    m2 = mxCreateCharArray(2, iv19);
    for (i = 0; i < 4; i++) {
      cv24[i] = cv25[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 4, m2, cv24);
    emlrtAssign(&f_y, m2);
    c_error(message(e_y, f_y, &b_emlrtMCI), &b_emlrtMCI);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  }

  if (!c_obj->isInitialized) {
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    SystemCore_setup(c_obj);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  SystemCore_checkTunableProps(c_obj);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  c_SystemCore_detectInputSizeCha(c_obj);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&hc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&hc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&gc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&hc_emlrtRSI, emlrtRootTLSGlobal);
  Outputs(&c_obj->cSFunObject, dataWithCRC, iv20, tmp_data, tmp_size);
  emlrtPopRtStackR2012b(&hc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&gc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&gc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&hc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&hc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&gc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&fb_emlrtRSI, emlrtRootTLSGlobal);

  /*  Pad IFFT */
  emlrtPushRtStackR2012b(&gb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&j_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  g_y = NULL;
  m2 = mxCreateDoubleScalar(13.0);
  emlrtAssign(&g_y, m2);
  h_y = NULL;
  m2 = mxCreateDoubleScalar(1.0);
  emlrtAssign(&h_y, m2);
  e_emlrt_marshallIn(b_rand(g_y, h_y, &emlrtMCI), "rand", b_r);
  emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&j_emlrtRSI, emlrtRootTLSGlobal);
  for (k = 0; k < 13; k++) {
    b_r[k] = muDoubleScalarFloor(b_r[k] * 2.0);
  }

  c_obj = &hMod;
  if (!c_obj->isReleased) {
  } else {
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    i_y = NULL;
    m2 = mxCreateCharArray(2, iv21);
    for (i = 0; i < 45; i++) {
      cv22[i] = cv23[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 45, m2, cv22);
    emlrtAssign(&i_y, m2);
    j_y = NULL;
    m2 = mxCreateCharArray(2, iv22);
    for (i = 0; i < 4; i++) {
      cv24[i] = cv25[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 4, m2, cv24);
    emlrtAssign(&j_y, m2);
    c_error(message(i_y, j_y, &b_emlrtMCI), &b_emlrtMCI);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  }

  if (!c_obj->isInitialized) {
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    b_SystemCore_setup(c_obj);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  b_SystemCore_checkTunableProps(c_obj);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  d_SystemCore_detectInputSizeCha(c_obj);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&hc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&hc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&gc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&hc_emlrtRSI, emlrtRootTLSGlobal);
  Outputs(&c_obj->cSFunObject, b_r, iv23, b_tmp_data, tmp_size);
  emlrtPopRtStackR2012b(&hc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&gc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&gc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&hc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&hc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&gc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  memcpy(&modData[0], &tmp_data[0], 563U * sizeof(creal_T));
  memcpy(&modData[563], &b_tmp_data[0], 13U * sizeof(creal_T));
  emlrtPopRtStackR2012b(&gb_emlrtRSI, emlrtRootTLSGlobal);

  /*  Calculate required data sizes for correct receiver operation */
  /*  Save desired message size */
  /*  Save number of transmitted frames */
  /*  Convert data into subcarrier streams */
  memcpy(&ofdmData[0], &modData[0], 576U * sizeof(creal_T));

  /*  Create Pilots */
  emlrtPushRtStackR2012b(&hb_emlrtRSI, emlrtRootTLSGlobal);
  e_obj = &hPN;

  /* System object Constructor function: comm.PNSequence */
  e_obj->S0_isInitialized = FALSE;
  e_obj->S1_isReleased = FALSE;
  for (i = 0; i < 8; i++) {
    e_obj->P0_Polynomial[i] = (uint8_T)iv24[i];
  }

  for (i = 0; i < 7; i++) {
    e_obj->P1_IniState[i] = 1;
    e_obj->P2_Mask[i] = (uint8_T)iv25[i];
  }

  emlrtPopRtStackR2012b(&hb_emlrtRSI, emlrtRootTLSGlobal);

  /* pilot=[1 0  0  1  0  0  1  0  0  0  0  0]'; */
  emlrtPushRtStackR2012b(&ib_emlrtRSI, emlrtRootTLSGlobal);
  e_obj = &hPN;
  if (!e_obj->S0_isInitialized) {
    e_obj->S0_isInitialized = TRUE;
    if (e_obj->S1_isReleased) {
      emlrtErrorWithMessageIdR2012b(emlrtRootTLSGlobal, &bc_emlrtRTEI,
        "MATLAB:system:runtimeMethodCalledWhenReleasedCodegen", 0);
    }

    /* System object Initialization function: comm.PNSequence */
    for (bitNumber = 0; bitNumber < 7; bitNumber++) {
      e_obj->W0_shiftReg[bitNumber] = e_obj->P1_IniState[bitNumber];
      emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, emlrtRootTLSGlobal);
    }
  }

  emlrtPushRtStackR2012b(&ic_emlrtRSI, emlrtRootTLSGlobal);

  /* System object Outputs function: comm.PNSequence */
  for (bitNumber = 0; bitNumber < 12; bitNumber++) {
    tmp = 0;
    for (i = 0; i < 7; i++) {
      tmp = (uint8_T)((uint32_T)tmp + (uint8_T)((uint32_T)e_obj->P0_Polynomial[i
        + 1] * e_obj->W0_shiftReg[i]));
    }

    tmp &= 1;
    tmp2 = 0;
    for (i = 0; i < 7; i++) {
      tmp2 = (uint8_T)((uint32_T)tmp2 + (uint8_T)((uint32_T)e_obj->W0_shiftReg[i]
        * e_obj->P2_Mask[i]));
    }

    pilot[bitNumber] = (int8_T)(tmp2 & 1);
    for (i = 5; i > -1; i += -1) {
      e_obj->W0_shiftReg[i + 1] = e_obj->W0_shiftReg[i];
    }

    e_obj->W0_shiftReg[0U] = tmp;
  }

  emlrtPopRtStackR2012b(&ic_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&ib_emlrtRSI, emlrtRootTLSGlobal);

  /*  Create pilot */
  i = 0;
  for (bitNumber = 0; bitNumber < 4; bitNumber++) {
    ia = 0;
    for (k = 0; k < 12; k++) {
      pilots[i] = pilot[ia];
      ia++;
      i++;
    }
  }

  /*  Expand to all pilot tones */
  for (bitNumber = 0; bitNumber < 12; bitNumber++) {
    for (k = 0; k < 4; k++) {
      b_pilots[k + (bitNumber << 2)] = 2.0 * (real_T)(pilots[bitNumber + 12 * k]
        < 1) - 1.0;
    }

    /*  Bipolar to unipolar */
    b_pilots[3 + (bitNumber << 2)] = -b_pilots[3 + (bitNumber << 2)];
  }

  /*  Invert last pilot */
  /*  Construct Modulator */
  emlrtPushRtStackR2012b(&jb_emlrtRSI, emlrtRootTLSGlobal);
  b_OFDMModulator_OFDMModulator(&hDataMod);
  emlrtPopRtStackR2012b(&jb_emlrtRSI, emlrtRootTLSGlobal);

  /*  Modulate */
  emlrtPushRtStackR2012b(&kb_emlrtRSI, emlrtRootTLSGlobal);
  c_SystemCore_step(&hDataMod, ofdmData, b_pilots, c_r);
  emlrtPopRtStackR2012b(&kb_emlrtRSI, emlrtRootTLSGlobal);

  /*  Add preambles to data */
  memcpy(&preambles[0], &completeShortPreambleOFDM[0], 160U * sizeof(creal_T));
  memcpy(&preambles[160], &completeLongPreambleOFDM[0], 160U * sizeof(creal_T));
  memcpy(&d_r[0], &preambles[0], 320U * sizeof(creal_T));
  memcpy(&d_r[320], &c_r[0], 960U * sizeof(creal_T));

  /*  Repeat frame (Used in debugging) */
  i = 0;
  for (bitNumber = 0; bitNumber < 30; bitNumber++) {
    ia = 0;
    for (k = 0; k < 1280; k++) {
      r[i] = d_r[ia];
      ia++;
      i++;
    }
  }

  /*  Save Demodulator object data for receiver */
  /* hDataDemod = get(OFDMDemodulator(hDataMod)); */
  /* hPreambleDemod = get(OFDMDemodulator(hPreambleMod)); */
  emlrtPushRtStackR2012b(&lb_emlrtRSI, emlrtRootTLSGlobal);
  *hDataDemod = OFDMDemodulator_OFDMDemodulator(iobj_0);
  emlrtPopRtStackR2012b(&lb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&mb_emlrtRSI, emlrtRootTLSGlobal);
  b_object = iobj_1;
  *hPreambleDemod = b_object;
  emlrtPushRtStackR2012b(&cd_emlrtRSI, emlrtRootTLSGlobal);
  b_object = *hPreambleDemod;
  emlrtPushRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  b_object->isInitialized = FALSE;
  b_object->isReleased = FALSE;
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&cd_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&dd_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&dd_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&ed_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&ed_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&fd_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&fd_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&gd_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&gd_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&hd_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&hd_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&id_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&id_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&mb_emlrtRSI, emlrtRootTLSGlobal);

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
    tx->longPreamble[i] = iv26[i];
  }

  for (i = 0; i < 64; i++) {
    tx->longPreambleOFDM[i] = longPreambleOFDM[i];
  }

  for (i = 0; i < 160; i++) {
    tx->completeLongPreambleOFDM[i] = completeLongPreambleOFDM[i];
  }

  for (bitNumber = 0; bitNumber < 48; bitNumber++) {
    tx->pilots[bitNumber] = b_pilots[bitNumber];
  }

  for (i = 0; i < 320; i++) {
    tx->preambles[i] = preambles[i];
  }

  for (bitNumber = 0; bitNumber < 4; bitNumber++) {
    tx->pilotLocationsWithoutGuardbands[bitNumber] = 6.0 + 14.0 * (real_T)
      bitNumber;
  }

  tx->dataSubcarrierIndexies.size[0] = 1;
  tx->dataSubcarrierIndexies.size[1] = 48;
  for (bitNumber = 0; bitNumber < 48; bitNumber++) {
    tx->dataSubcarrierIndexies.data[bitNumber] = iv27[bitNumber];
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
  e_obj = &hPN;

  /* System object Destructor function: comm.PNSequence */
  if (e_obj->S0_isInitialized) {
    e_obj->S0_isInitialized = FALSE;
    if (!e_obj->S1_isReleased) {
      e_obj->S1_isReleased = TRUE;
    }
  }

  emxFreeStruct_OFDMModulator_4(&hPreambleMod);
  emxFreeStruct_OFDMModulator_196(&hDataMod);
  emlrtHeapReferenceStackLeaveFcnR2012b(emlrtRootTLSGlobal);
}

/* End of code generation (generateOFDMSignal_TX2.c) */
