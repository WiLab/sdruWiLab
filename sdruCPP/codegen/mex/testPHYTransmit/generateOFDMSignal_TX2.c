/*
 * generateOFDMSignal_TX2.c
 *
 * Code generation for function 'generateOFDMSignal_TX2'
 *
 * C source code generated on: Thu Apr 24 14:26:15 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testPHYTransmit.h"
#include "generateOFDMSignal_TX2.h"
#include "testPHYTransmit_emxutil.h"
#include "SystemCore.h"
#include "setup.h"
#include "BPSKModulator.h"
#include "CRCGenerator.h"
#include "OFDMletters2bits.h"
#include "OFDMModulator.h"
#include "testPHYTransmit_mexutil.h"
#include "testPHYTransmit_data.h"

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

#ifndef struct_comm_PNSequence_9
#define struct_comm_PNSequence_9

struct comm_PNSequence_9
{
  boolean_T S0_isInitialized;
  boolean_T S1_isReleased;
  uint8_T W0_shiftReg[7];
  uint8_T P0_Polynomial[8];
  uint8_T P1_IniState[7];
  uint8_T P2_Mask[7];
};

#endif                                 /*struct_comm_PNSequence_9*/

#ifndef typedef_comm_PNSequence_9
#define typedef_comm_PNSequence_9

typedef struct comm_PNSequence_9 comm_PNSequence_9;

#endif                                 /*typedef_comm_PNSequence_9*/

/* Variable Definitions */
static emlrtRSInfo u_emlrtRSI = { 16, "generateOFDMSignal_TX2",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/generateOFDMSignal_TX2.m"
};

static emlrtRSInfo v_emlrtRSI = { 39, "generateOFDMSignal_TX2",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/generateOFDMSignal_TX2.m"
};

static emlrtRSInfo w_emlrtRSI = { 46, "generateOFDMSignal_TX2",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/generateOFDMSignal_TX2.m"
};

static emlrtRSInfo x_emlrtRSI = { 58, "generateOFDMSignal_TX2",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/generateOFDMSignal_TX2.m"
};

static emlrtRSInfo y_emlrtRSI = { 69, "generateOFDMSignal_TX2",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/generateOFDMSignal_TX2.m"
};

static emlrtRSInfo ab_emlrtRSI = { 73, "generateOFDMSignal_TX2",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/generateOFDMSignal_TX2.m"
};

static emlrtRSInfo bb_emlrtRSI = { 74, "generateOFDMSignal_TX2",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/generateOFDMSignal_TX2.m"
};

static emlrtRSInfo cb_emlrtRSI = { 77, "generateOFDMSignal_TX2",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/generateOFDMSignal_TX2.m"
};

static emlrtRSInfo db_emlrtRSI = { 80, "generateOFDMSignal_TX2",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/generateOFDMSignal_TX2.m"
};

static emlrtRSInfo eb_emlrtRSI = { 87, "generateOFDMSignal_TX2",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/generateOFDMSignal_TX2.m"
};

static emlrtRSInfo fb_emlrtRSI = { 99, "generateOFDMSignal_TX2",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/generateOFDMSignal_TX2.m"
};

static emlrtRSInfo gb_emlrtRSI = { 106, "generateOFDMSignal_TX2",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/generateOFDMSignal_TX2.m"
};

static emlrtRSInfo hb_emlrtRSI = { 112, "generateOFDMSignal_TX2",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/generateOFDMSignal_TX2.m"
};

static emlrtRSInfo ib_emlrtRSI = { 123, "generateOFDMSignal_TX2",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/generateOFDMSignal_TX2.m"
};

static emlrtRSInfo jb_emlrtRSI = { 136, "generateOFDMSignal_TX2",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/generateOFDMSignal_TX2.m"
};

static emlrtRSInfo kb_emlrtRSI = { 137, "generateOFDMSignal_TX2",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/generateOFDMSignal_TX2.m"
};

static emlrtRSInfo bc_emlrtRSI = { 51, "eml_int_forloop_overflow_check",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"
};

static emlrtMCInfo f_emlrtMCI = { 52, 9, "eml_int_forloop_overflow_check",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"
};

static emlrtMCInfo g_emlrtMCI = { 51, 15, "eml_int_forloop_overflow_check",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"
};

static emlrtRTEInfo h_emlrtRTEI = { 112, 1, "generateOFDMSignal_TX2",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/generateOFDMSignal_TX2.m"
};

static emlrtRTEInfo i_emlrtRTEI = { 39, 1, "generateOFDMSignal_TX2",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/generateOFDMSignal_TX2.m"
};

/* Function Declarations */
static real_T b_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId);
static real_T emlrt_marshallIn(const mxArray *c_rand, const char_T *identifier);

/* Function Definitions */
static real_T b_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId)
{
  real_T y;
  y = i_emlrt_marshallIn(emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static real_T emlrt_marshallIn(const mxArray *c_rand, const char_T *identifier)
{
  real_T y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  y = b_emlrt_marshallIn(emlrtAlias(c_rand), &thisId);
  emlrtDestroyArray(&c_rand);
  return y;
}

void b_generateOFDMSignal_TX2(OFDMDemodulator *iobj_0, OFDMDemodulator_1 *iobj_1,
  OFDMDemodulator_1 **hPreambleDemod, OFDMDemodulator **hDataDemod, creal_T r
  [38400], c_struct_T *b_tx)
{
  OFDMModulator_196 hDataMod;
  OFDMModulator_4 hPreambleMod;
  const mxArray *y;
  const mxArray *m16;
  const mxArray *b_y;
  real_T b_r;
  int32_T i;
  char_T uniqueID;
  creal_T shortPreambleOFDM[64];
  creal_T completeShortPreambleOFDM[160];
  creal_T longPreambleOFDM[64];
  creal_T completeLongPreambleOFDM[160];
  char_T inputPayloadMessage[80];
  static const char_T b_inputPayloadMessage[11] = { 'H', 'e', 'l', 'l', 'o', ' ',
    'W', 'o', 'r', 'l', 'd' };

  static const char_T cv80[3] = { 'E', 'O', 'F' };

  real_T originalData[560];
  real_T x[560];
  int32_T ib;
  real_T b_originalData[560];
  commcodegen_CRCGenerator_478 hGen;
  real_T dataWithCRC[563];
  commcodegen_BPSKModulator_348 hMod;
  commcodegen_BPSKModulator_348 *obj;
  const mxArray *c_y;
  static const int32_T iv79[2] = { 1, 45 };

  char_T cv81[45];
  static const char_T cv82[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C',
    'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *d_y;
  static const int32_T iv80[2] = { 1, 4 };

  char_T cv83[4];
  static const char_T cv84[4] = { 's', 't', 'e', 'p' };

  int32_T tmp_size[2];
  creal_T tmp_data[563];
  static int32_T iv81[2] = { 563, 1 };

  const mxArray *e_y;
  const mxArray *f_y;
  real_T c_r[13];
  int32_T k;
  const mxArray *g_y;
  static const int32_T iv82[2] = { 1, 45 };

  const mxArray *h_y;
  static const int32_T iv83[2] = { 1, 4 };

  creal_T b_tmp_data[563];
  static int32_T iv84[2] = { 13, 1 };

  creal_T modData[576];
  creal_T ofdmData[576];
  comm_PNSequence_9 hPN;
  comm_PNSequence_9 *b_obj;
  static const int8_T iv85[8] = { 1, 0, 0, 0, 1, 0, 0, 1 };

  static const int8_T iv86[7] = { 0, 0, 0, 0, 0, 0, 1 };

  int8_T pilot[12];
  uint8_T tmp;
  uint8_T tmp2;
  int8_T pilots[48];
  int32_T ia;
  real_T b_pilots[48];
  OFDMModulator_196 *object;
  int8_T b_data[4];
  int32_T exitg2;
  int32_T exponent;
  boolean_T b4;
  int32_T i16;
  const mxArray *i_y;
  static const int32_T iv87[2] = { 1, 13 };

  char_T cv85[13];
  static const char_T cv86[13] = { 'c', 'o', 'm', 'm', ':', 'O', 'F', 'D', 'M',
    ':', 'x', 'x', 'x' };

  creal_T d_r[960];
  creal_T preambles[320];
  creal_T e_r[1280];
  OFDMDemodulator *b_object;
  int32_T exitg1;
  int32_T b_exponent;
  boolean_T b5;
  int32_T i17;
  const mxArray *j_y;
  static const int32_T iv88[2] = { 1, 13 };

  OFDMDemodulator_1 *c_object;
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

  static const int8_T iv89[53] = { 1, 1, -1, -1, 1, 1, -1, 1, -1, 1, 1, 1, 1, 1,
    1, -1, -1, 1, 1, -1, 1, -1, 1, 1, 1, 1, 0, 1, -1, -1, 1, 1, -1, 1, -1, 1, -1,
    -1, -1, -1, -1, 1, 1, -1, -1, 1, -1, 1, -1, 1, 1, 1, 1 };

  static const int8_T iv90[48] = { 1, 2, 3, 4, 5, 7, 8, 9, 10, 11, 12, 13, 14,
    15, 16, 17, 18, 19, 21, 22, 23, 24, 25, 26, 28, 29, 30, 31, 32, 33, 35, 36,
    37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 49, 50, 51, 52, 53 };

  emlrtHeapReferenceStackEnterFcnR2012b(emlrtRootTLSGlobal);
  emxInitStruct_OFDMModulator_196(&hDataMod, &h_emlrtRTEI, TRUE);
  emxInitStruct_OFDMModulator_4(&hPreambleMod, &i_emlrtRTEI, TRUE);

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
  emlrtPushRtStackR2012b(&u_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&h_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  y = NULL;
  m16 = mxCreateDoubleScalar(1.0);
  emlrtAssign(&y, m16);
  b_y = NULL;
  m16 = mxCreateDoubleScalar(1.0);
  emlrtAssign(&b_y, m16);
  b_r = emlrt_marshallIn(b_rand(y, b_y, &emlrtMCI), "rand");
  emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&h_emlrtRSI, emlrtRootTLSGlobal);
  i = (int32_T)muDoubleScalarFloor(b_r * 128.0);
  i = emlrtDynamicBoundsCheckFastR2012b(i, 0, 255, &emlrtBCI, emlrtRootTLSGlobal);
  i = (int32_T)muDoubleScalarRem(i, 256.0);
  if (i < 0) {
    uniqueID = (int8_T)-(int8_T)(uint8_T)-(real_T)i;
  } else {
    uniqueID = (int8_T)(uint8_T)(real_T)i;
  }

  emlrtPopRtStackR2012b(&u_emlrtRSI, emlrtRootTLSGlobal);

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
  emlrtPushRtStackR2012b(&v_emlrtRSI, emlrtRootTLSGlobal);
  OFDMModulator_OFDMModulator(&hPreambleMod);
  emlrtPopRtStackR2012b(&v_emlrtRSI, emlrtRootTLSGlobal);

  /*  Modulate and scale */
  emlrtPushRtStackR2012b(&w_emlrtRSI, emlrtRootTLSGlobal);
  SystemCore_step(&hPreambleMod, shortPreambleOFDM);
  for (i = 0; i < 64; i++) {
    shortPreambleOFDM[i].re *= 1.4719601443879744;
    shortPreambleOFDM[i].im *= 1.4719601443879744;
  }

  emlrtPopRtStackR2012b(&w_emlrtRSI, emlrtRootTLSGlobal);

  /*  Form 10 Short Preambles */
  memcpy(&completeShortPreambleOFDM[0], &shortPreambleOFDM[0], sizeof(creal_T) <<
         6);
  memcpy(&completeShortPreambleOFDM[64], &shortPreambleOFDM[0], sizeof(creal_T) <<
         6);
  memcpy(&completeShortPreambleOFDM[128], &shortPreambleOFDM[0], sizeof(creal_T)
         << 5);

  /* % Create Long Preamble */
  /*  Modulate */
  emlrtPushRtStackR2012b(&x_emlrtRSI, emlrtRootTLSGlobal);
  b_SystemCore_step(&hPreambleMod, longPreambleOFDM);
  emlrtPopRtStackR2012b(&x_emlrtRSI, emlrtRootTLSGlobal);

  /*  Form 2 Long Preambles */
  memcpy(&completeLongPreambleOFDM[0], &longPreambleOFDM[32], sizeof(creal_T) <<
         5);
  memcpy(&completeLongPreambleOFDM[32], &longPreambleOFDM[0], sizeof(creal_T) <<
         6);
  memcpy(&completeLongPreambleOFDM[96], &longPreambleOFDM[0], sizeof(creal_T) <<
         6);

  /* % Generate Data */
  /*  Use string as message */
  emlrtPushRtStackR2012b(&y_emlrtRSI, emlrtRootTLSGlobal);
  for (i = 0; i < 11; i++) {
    inputPayloadMessage[i] = b_inputPayloadMessage[i];
  }

  inputPayloadMessage[11] = '2';
  inputPayloadMessage[12] = '1';
  inputPayloadMessage[13] = uniqueID;
  for (i = 0; i < 3; i++) {
    inputPayloadMessage[i + 14] = cv80[i];
  }

  for (i = 0; i < 63; i++) {
    inputPayloadMessage[i + 17] = '-';
  }

  OFDMletters2bits(inputPayloadMessage, originalData);
  emlrtPopRtStackR2012b(&y_emlrtRSI, emlrtRootTLSGlobal);
  for (i = 0; i < 80; i++) {
    for (ib = 0; ib < 7; ib++) {
      x[ib + 7 * i] = originalData[i + 80 * ib];
    }
  }

  memcpy(&b_originalData[0], &x[0], 560U * sizeof(real_T));

  /*  Generate CRC */
  emlrtPushRtStackR2012b(&ab_emlrtRSI, emlrtRootTLSGlobal);
  c_CRCGenerator_CRCGenerator(&hGen);
  emlrtPopRtStackR2012b(&ab_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&bb_emlrtRSI, emlrtRootTLSGlobal);
  f_SystemCore_step(&hGen, b_originalData, dataWithCRC);
  emlrtPopRtStackR2012b(&bb_emlrtRSI, emlrtRootTLSGlobal);

  /*  Add CRC */
  /*  Construct modulator for each subcarrier */
  emlrtPushRtStackR2012b(&cb_emlrtRSI, emlrtRootTLSGlobal);
  c_BPSKModulator_BPSKModulator(&hMod);
  emlrtPopRtStackR2012b(&cb_emlrtRSI, emlrtRootTLSGlobal);

  /*  BPSK */
  /*  Apply modulator for each subcarrier */
  emlrtPushRtStackR2012b(&db_emlrtRSI, emlrtRootTLSGlobal);
  obj = &hMod;
  if (!obj->isReleased) {
  } else {
    emlrtPushRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
    c_y = NULL;
    m16 = mxCreateCharArray(2, iv79);
    for (i = 0; i < 45; i++) {
      cv81[i] = cv82[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 45, m16, cv81);
    emlrtAssign(&c_y, m16);
    d_y = NULL;
    m16 = mxCreateCharArray(2, iv80);
    for (i = 0; i < 4; i++) {
      cv83[i] = cv84[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 4, m16, cv83);
    emlrtAssign(&d_y, m16);
    b_error(message(c_y, d_y, &b_emlrtMCI), &b_emlrtMCI);
    emlrtPopRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  }

  if (!obj->isInitialized) {
    emlrtPushRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
    e_SystemCore_setup(obj);
    emlrtPopRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPushRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  e_SystemCore_checkTunableProps(obj);
  emlrtPopRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  g_SystemCore_detectInputSizeCha(obj);
  emlrtPopRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&fc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&fc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&ec_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&fc_emlrtRSI, emlrtRootTLSGlobal);
  c_Outputs(&obj->cSFunObject, dataWithCRC, iv81, tmp_data, tmp_size);
  emlrtPopRtStackR2012b(&fc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&ec_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&ec_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&fc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&fc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&ec_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&db_emlrtRSI, emlrtRootTLSGlobal);

  /*  Pad IFFT */
  emlrtPushRtStackR2012b(&eb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&h_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  e_y = NULL;
  m16 = mxCreateDoubleScalar(13.0);
  emlrtAssign(&e_y, m16);
  f_y = NULL;
  m16 = mxCreateDoubleScalar(1.0);
  emlrtAssign(&f_y, m16);
  e_emlrt_marshallIn(b_rand(e_y, f_y, &emlrtMCI), "rand", c_r);
  emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&h_emlrtRSI, emlrtRootTLSGlobal);
  for (k = 0; k < 13; k++) {
    c_r[k] = muDoubleScalarFloor(c_r[k] * 2.0);
  }

  obj = &hMod;
  if (!obj->isReleased) {
  } else {
    emlrtPushRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
    g_y = NULL;
    m16 = mxCreateCharArray(2, iv82);
    for (i = 0; i < 45; i++) {
      cv81[i] = cv82[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 45, m16, cv81);
    emlrtAssign(&g_y, m16);
    h_y = NULL;
    m16 = mxCreateCharArray(2, iv83);
    for (i = 0; i < 4; i++) {
      cv83[i] = cv84[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 4, m16, cv83);
    emlrtAssign(&h_y, m16);
    b_error(message(g_y, h_y, &b_emlrtMCI), &b_emlrtMCI);
    emlrtPopRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  }

  if (!obj->isInitialized) {
    emlrtPushRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
    f_SystemCore_setup(obj);
    emlrtPopRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPushRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  f_SystemCore_checkTunableProps(obj);
  emlrtPopRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  h_SystemCore_detectInputSizeCha(obj);
  emlrtPopRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&fc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&fc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&ec_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&fc_emlrtRSI, emlrtRootTLSGlobal);
  c_Outputs(&obj->cSFunObject, c_r, iv84, b_tmp_data, tmp_size);
  emlrtPopRtStackR2012b(&fc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&ec_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&ec_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&fc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&fc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&ec_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  memcpy(&modData[0], &tmp_data[0], 563U * sizeof(creal_T));
  memcpy(&modData[563], &b_tmp_data[0], 13U * sizeof(creal_T));
  emlrtPopRtStackR2012b(&eb_emlrtRSI, emlrtRootTLSGlobal);

  /*  Calculate required data sizes for correct receiver operation */
  /*  Save desired message size */
  /*  Save number of transmitted frames */
  /*  Convert data into subcarrier streams */
  memcpy(&ofdmData[0], &modData[0], 576U * sizeof(creal_T));

  /*  Create Pilots */
  emlrtPushRtStackR2012b(&fb_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = &hPN;

  /* System object Constructor function: comm.PNSequence */
  b_obj->S0_isInitialized = FALSE;
  b_obj->S1_isReleased = FALSE;
  for (i = 0; i < 8; i++) {
    b_obj->P0_Polynomial[i] = (uint8_T)iv85[i];
  }

  for (i = 0; i < 7; i++) {
    b_obj->P1_IniState[i] = 1;
    b_obj->P2_Mask[i] = (uint8_T)iv86[i];
  }

  emlrtPopRtStackR2012b(&fb_emlrtRSI, emlrtRootTLSGlobal);

  /* pilot=[1 0  0  1  0  0  1  0  0  0  0  0]'; */
  emlrtPushRtStackR2012b(&gb_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = &hPN;
  if (!b_obj->S0_isInitialized) {
    b_obj->S0_isInitialized = TRUE;
    if (b_obj->S1_isReleased) {
      emlrtErrorWithMessageIdR2012b(emlrtRootTLSGlobal, &ab_emlrtRTEI,
        "MATLAB:system:runtimeMethodCalledWhenReleasedCodegen", 0);
    }

    /* System object Initialization function: comm.PNSequence */
    for (ib = 0; ib < 7; ib++) {
      b_obj->W0_shiftReg[ib] = b_obj->P1_IniState[ib];
      emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, emlrtRootTLSGlobal);
    }
  }

  emlrtPushRtStackR2012b(&gc_emlrtRSI, emlrtRootTLSGlobal);

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

  emlrtPopRtStackR2012b(&gc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&gb_emlrtRSI, emlrtRootTLSGlobal);

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
  emlrtPushRtStackR2012b(&hb_emlrtRSI, emlrtRootTLSGlobal);
  object = &hDataMod;
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&j_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  object->isInitialized = FALSE;
  object->isReleased = FALSE;
  emlrtPushRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&j_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&s_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&s_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&s_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&s_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&s_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&s_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&s_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&s_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&s_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&s_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&s_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);

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
  emlrtPushRtStackR2012b(&ic_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&jc_emlrtRSI, emlrtRootTLSGlobal);
  for (k = 0; k < 4; k++) {
    b_data[k] = (int8_T)(12 + 14 * k);
  }

  i = 0;
  k = 1;
  while (k <= 4) {
    ib = b_data[k - 1];
    do {
      exitg2 = 0;
      k++;
      if (k > 4) {
        exitg2 = 1;
      } else {
        frexp((real_T)ib / 2.0, &exponent);
        if (!(muDoubleScalarAbs(ib - b_data[k - 1]) < ldexp(1.0, exponent - 53)))
        {
          exitg2 = 1;
        }
      }
    } while (exitg2 == 0);

    i++;
    b_data[i - 1] = (int8_T)ib;
    emlrtPushRtStackR2012b(&nc_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&nc_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPushRtStackR2012b(&lc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&lc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&kc_emlrtRSI, emlrtRootTLSGlobal);
  if (1 > i) {
    b4 = FALSE;
  } else {
    b4 = (i > 2147483646);
  }

  if (b4) {
    emlrtPushRtStackR2012b(&ac_emlrtRSI, emlrtRootTLSGlobal);
    check_forloop_overflow_error();
    emlrtPopRtStackR2012b(&ac_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPopRtStackR2012b(&kc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&jc_emlrtRSI, emlrtRootTLSGlobal);
  if (1 > i) {
    i16 = 0;
  } else {
    i16 = i;
  }

  if (!(4 != i16)) {
  } else {
    emlrtPushRtStackR2012b(&pc_emlrtRSI, emlrtRootTLSGlobal);
    i_y = NULL;
    m16 = mxCreateCharArray(2, iv87);
    for (i = 0; i < 13; i++) {
      cv85[i] = cv86[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 13, m16, cv85);
    emlrtAssign(&i_y, m16);
    b_error(b_message(i_y, &h_emlrtMCI), &h_emlrtMCI);
    emlrtPopRtStackR2012b(&pc_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPopRtStackR2012b(&ic_emlrtRSI, emlrtRootTLSGlobal);

  /*  Error message:  */
  /*  If pilot index is 2-D, the indices per symbol must be unique; */
  /*  If pilot index is 3-D, the indices across transmit antennas per symbol must be unique. */
  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&s_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&s_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&s_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&hb_emlrtRSI, emlrtRootTLSGlobal);

  /*  Modulate */
  emlrtPushRtStackR2012b(&ib_emlrtRSI, emlrtRootTLSGlobal);
  d_SystemCore_step(&hDataMod, ofdmData, b_pilots, d_r);
  emlrtPopRtStackR2012b(&ib_emlrtRSI, emlrtRootTLSGlobal);

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
  emlrtPushRtStackR2012b(&jb_emlrtRSI, emlrtRootTLSGlobal);
  b_object = iobj_0;
  *hDataDemod = b_object;
  emlrtPushRtStackR2012b(&ad_emlrtRSI, emlrtRootTLSGlobal);
  b_object = *hDataDemod;
  emlrtPushRtStackR2012b(&j_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  b_object->isInitialized = FALSE;
  b_object->isReleased = FALSE;
  emlrtPushRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&j_emlrtRSI, emlrtRootTLSGlobal);
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
  emlrtPopRtStackR2012b(&gd_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&hd_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);

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
  emlrtPushRtStackR2012b(&ic_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&jc_emlrtRSI, emlrtRootTLSGlobal);
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
        frexp((real_T)ib / 2.0, &b_exponent);
        if (!(muDoubleScalarAbs(ib - b_data[k - 1]) < ldexp(1.0, b_exponent - 53)))
        {
          exitg1 = 1;
        }
      }
    } while (exitg1 == 0);

    i++;
    b_data[i - 1] = (int8_T)ib;
    emlrtPushRtStackR2012b(&nc_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&nc_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPushRtStackR2012b(&lc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&lc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&kc_emlrtRSI, emlrtRootTLSGlobal);
  if (1 > i) {
    b5 = FALSE;
  } else {
    b5 = (i > 2147483646);
  }

  if (b5) {
    emlrtPushRtStackR2012b(&ac_emlrtRSI, emlrtRootTLSGlobal);
    check_forloop_overflow_error();
    emlrtPopRtStackR2012b(&ac_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPopRtStackR2012b(&kc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&jc_emlrtRSI, emlrtRootTLSGlobal);
  if (1 > i) {
    i17 = 0;
  } else {
    i17 = i;
  }

  if (!(4 != i17)) {
  } else {
    emlrtPushRtStackR2012b(&pc_emlrtRSI, emlrtRootTLSGlobal);
    j_y = NULL;
    m16 = mxCreateCharArray(2, iv88);
    for (i = 0; i < 13; i++) {
      cv85[i] = cv86[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 13, m16, cv85);
    emlrtAssign(&j_y, m16);
    b_error(b_message(j_y, &h_emlrtMCI), &h_emlrtMCI);
    emlrtPopRtStackR2012b(&pc_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPopRtStackR2012b(&ic_emlrtRSI, emlrtRootTLSGlobal);

  /*  Error message:  */
  /*  If pilot index is 2-D, the indices per symbol must be unique; */
  /*  If pilot index is 3-D, the indices across transmit antennas per symbol must be unique. */
  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&hd_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&jb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&kb_emlrtRSI, emlrtRootTLSGlobal);
  c_object = iobj_1;
  *hPreambleDemod = c_object;
  emlrtPushRtStackR2012b(&ad_emlrtRSI, emlrtRootTLSGlobal);
  c_object = *hPreambleDemod;
  emlrtPushRtStackR2012b(&j_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  c_object->isInitialized = FALSE;
  c_object->isReleased = FALSE;
  emlrtPushRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&j_emlrtRSI, emlrtRootTLSGlobal);
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
  emlrtPopRtStackR2012b(&gd_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&kb_emlrtRSI, emlrtRootTLSGlobal);

  /*  Calcuate OFDM frequency bin size */
  /*  Calculate locations of pilots without guardbands */
  /*  Calculate locations of subcarrier datastreams without guardbands */
  /* Remove guardband offsets */
  /* Remove index offsets for pilots and guardbands */
  /* dataSubcarrierIndexies([pilotLocationsWithoutGuardbands;DCNullLocation]) = [];%Remove pilot and DCNull locations */
  /*  Preallocate values needed later */
  /*  Create return structure */
  for (i = 0; i < 560; i++) {
    b_tx->originalData[i] = b_originalData[i];
  }

  for (i = 0; i < 64; i++) {
    b_tx->shortPreambleOFDM[i] = shortPreambleOFDM[i];
  }

  for (i = 0; i < 160; i++) {
    b_tx->completeShortPreambleOFDM[i] = completeShortPreambleOFDM[i];
  }

  for (i = 0; i < 53; i++) {
    b_tx->shortPreamble[i] = dcv4[i];
  }

  for (i = 0; i < 53; i++) {
    b_tx->longPreamble[i] = iv89[i];
  }

  for (i = 0; i < 64; i++) {
    b_tx->longPreambleOFDM[i] = longPreambleOFDM[i];
  }

  for (i = 0; i < 160; i++) {
    b_tx->completeLongPreambleOFDM[i] = completeLongPreambleOFDM[i];
  }

  for (i = 0; i < 48; i++) {
    b_tx->pilots[i] = b_pilots[i];
  }

  for (i = 0; i < 320; i++) {
    b_tx->preambles[i] = preambles[i];
  }

  for (i = 0; i < 4; i++) {
    b_tx->pilotLocationsWithoutGuardbands[i] = 6.0 + 14.0 * (real_T)i;
  }

  b_tx->dataSubcarrierIndexies.size[0] = 1;
  b_tx->dataSubcarrierIndexies.size[1] = 48;
  for (i = 0; i < 48; i++) {
    b_tx->dataSubcarrierIndexies.data[i] = iv90[i];
  }

  b_tx->samplingFreq = 5.0E+6;
  b_tx->FFTLength = 64.0;
  b_tx->enableMA = TRUE;
  b_tx->numCarriers = 48.0;
  b_tx->padBits = 13.0;
  b_tx->numSamples = 576.0;
  b_tx->messageCharacters = 80.0;
  b_tx->numFrames = 30.0;
  b_tx->frameLength = 1280.0;
  b_tx->freqBin = 78125.0;
  b_tx->DecimationFactor = 0.0;
  b_tx->receiveBufferLength = 0.0;
  b_obj = &hPN;

  /* System object Destructor function: comm.PNSequence */
  if (b_obj->S0_isInitialized) {
    b_obj->S0_isInitialized = FALSE;
    if (!b_obj->S1_isReleased) {
      b_obj->S1_isReleased = TRUE;
    }
  }

  emxFreeStruct_OFDMModulator_4(&hPreambleMod);
  emxFreeStruct_OFDMModulator_196(&hDataMod);
  emlrtHeapReferenceStackLeaveFcnR2012b(emlrtRootTLSGlobal);
}

void check_forloop_overflow_error(void)
{
  const mxArray *y;
  static const int32_T iv23[2] = { 1, 34 };

  const mxArray *m4;
  char_T cv23[34];
  int32_T i;
  static const char_T cv24[34] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'i', 'n', 't', '_', 'f', 'o', 'r', 'l', 'o', 'o',
    'p', '_', 'o', 'v', 'e', 'r', 'f', 'l', 'o', 'w' };

  const mxArray *b_y;
  static const int32_T iv24[2] = { 1, 23 };

  char_T cv25[23];
  static const char_T cv26[23] = { 'c', 'o', 'd', 'e', 'r', '.', 'i', 'n', 't',
    'e', 'r', 'n', 'a', 'l', '.', 'i', 'n', 'd', 'e', 'x', 'I', 'n', 't' };

  emlrtPushRtStackR2012b(&bc_emlrtRSI, emlrtRootTLSGlobal);
  y = NULL;
  m4 = mxCreateCharArray(2, iv23);
  for (i = 0; i < 34; i++) {
    cv23[i] = cv24[i];
  }

  emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 34, m4, cv23);
  emlrtAssign(&y, m4);
  b_y = NULL;
  m4 = mxCreateCharArray(2, iv24);
  for (i = 0; i < 23; i++) {
    cv25[i] = cv26[i];
  }

  emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 23, m4, cv25);
  emlrtAssign(&b_y, m4);
  b_error(message(y, b_y, &f_emlrtMCI), &g_emlrtMCI);
  emlrtPopRtStackR2012b(&bc_emlrtRSI, emlrtRootTLSGlobal);
}

void generateOFDMSignal_TX2(testPHYTransmitStackData *SD, OFDMDemodulator
  *iobj_0, OFDMDemodulator_1 *iobj_1, OFDMDemodulator_1 **hPreambleDemod,
  OFDMDemodulator **hDataDemod, creal_T r[38400], c_struct_T *b_tx)
{
  OFDMModulator_196 hDataMod;
  OFDMModulator_4 hPreambleMod;
  const mxArray *y;
  const mxArray *m0;
  const mxArray *b_y;
  real_T b_r;
  int32_T i;
  char_T uniqueID;
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
  commcodegen_BPSKModulator *obj;
  const mxArray *c_y;
  static const int32_T iv0[2] = { 1, 45 };

  char_T cv1[45];
  static const char_T cv2[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C',
    'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *d_y;
  static const int32_T iv1[2] = { 1, 4 };

  char_T cv3[4];
  static const char_T cv4[4] = { 's', 't', 'e', 'p' };

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
  comm_PNSequence_2 *b_obj;
  static const int8_T iv6[8] = { 1, 0, 0, 0, 1, 0, 0, 1 };

  static const int8_T iv7[7] = { 0, 0, 0, 0, 0, 0, 1 };

  int8_T pilot[12];
  uint8_T tmp;
  uint8_T tmp2;
  int8_T pilots[48];
  int32_T ia;
  real_T b_pilots[48];
  OFDMModulator_196 *object;
  int8_T b_data[4];
  int32_T exitg2;
  int32_T exponent;
  boolean_T b0;
  int32_T i1;
  const mxArray *i_y;
  static const int32_T iv8[2] = { 1, 13 };

  char_T cv5[13];
  static const char_T cv6[13] = { 'c', 'o', 'm', 'm', ':', 'O', 'F', 'D', 'M',
    ':', 'x', 'x', 'x' };

  creal_T d_r[960];
  creal_T preambles[320];
  OFDMDemodulator *b_object;
  int32_T exitg1;
  int32_T b_exponent;
  boolean_T b1;
  int32_T i2;
  const mxArray *j_y;
  static const int32_T iv9[2] = { 1, 13 };

  OFDMDemodulator_1 *c_object;
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

  static const int8_T iv10[53] = { 1, 1, -1, -1, 1, 1, -1, 1, -1, 1, 1, 1, 1, 1,
    1, -1, -1, 1, 1, -1, 1, -1, 1, 1, 1, 1, 0, 1, -1, -1, 1, 1, -1, 1, -1, 1, -1,
    -1, -1, -1, -1, 1, 1, -1, -1, 1, -1, 1, -1, 1, 1, 1, 1 };

  static const int8_T iv11[48] = { 1, 2, 3, 4, 5, 7, 8, 9, 10, 11, 12, 13, 14,
    15, 16, 17, 18, 19, 21, 22, 23, 24, 25, 26, 28, 29, 30, 31, 32, 33, 35, 36,
    37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 49, 50, 51, 52, 53 };

  emlrtHeapReferenceStackEnterFcnR2012b(emlrtRootTLSGlobal);
  emxInitStruct_OFDMModulator_196(&hDataMod, &h_emlrtRTEI, TRUE);
  emxInitStruct_OFDMModulator_4(&hPreambleMod, &i_emlrtRTEI, TRUE);

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
  emlrtPushRtStackR2012b(&u_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&h_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  y = NULL;
  m0 = mxCreateDoubleScalar(1.0);
  emlrtAssign(&y, m0);
  b_y = NULL;
  m0 = mxCreateDoubleScalar(1.0);
  emlrtAssign(&b_y, m0);
  b_r = emlrt_marshallIn(b_rand(y, b_y, &emlrtMCI), "rand");
  emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&h_emlrtRSI, emlrtRootTLSGlobal);
  i = (int32_T)muDoubleScalarFloor(b_r * 128.0);
  i = emlrtDynamicBoundsCheckFastR2012b(i, 0, 255, &emlrtBCI, emlrtRootTLSGlobal);
  i = (int32_T)muDoubleScalarRem(i, 256.0);
  if (i < 0) {
    uniqueID = (int8_T)-(int8_T)(uint8_T)-(real_T)i;
  } else {
    uniqueID = (int8_T)(uint8_T)(real_T)i;
  }

  emlrtPopRtStackR2012b(&u_emlrtRSI, emlrtRootTLSGlobal);

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
  emlrtPushRtStackR2012b(&v_emlrtRSI, emlrtRootTLSGlobal);
  OFDMModulator_OFDMModulator(&hPreambleMod);
  emlrtPopRtStackR2012b(&v_emlrtRSI, emlrtRootTLSGlobal);

  /*  Modulate and scale */
  emlrtPushRtStackR2012b(&w_emlrtRSI, emlrtRootTLSGlobal);
  SystemCore_step(&hPreambleMod, shortPreambleOFDM);
  for (i = 0; i < 64; i++) {
    shortPreambleOFDM[i].re *= 1.4719601443879744;
    shortPreambleOFDM[i].im *= 1.4719601443879744;
  }

  emlrtPopRtStackR2012b(&w_emlrtRSI, emlrtRootTLSGlobal);

  /*  Form 10 Short Preambles */
  memcpy(&completeShortPreambleOFDM[0], &shortPreambleOFDM[0], sizeof(creal_T) <<
         6);
  memcpy(&completeShortPreambleOFDM[64], &shortPreambleOFDM[0], sizeof(creal_T) <<
         6);
  memcpy(&completeShortPreambleOFDM[128], &shortPreambleOFDM[0], sizeof(creal_T)
         << 5);

  /* % Create Long Preamble */
  /*  Modulate */
  emlrtPushRtStackR2012b(&x_emlrtRSI, emlrtRootTLSGlobal);
  b_SystemCore_step(&hPreambleMod, longPreambleOFDM);
  emlrtPopRtStackR2012b(&x_emlrtRSI, emlrtRootTLSGlobal);

  /*  Form 2 Long Preambles */
  memcpy(&completeLongPreambleOFDM[0], &longPreambleOFDM[32], sizeof(creal_T) <<
         5);
  memcpy(&completeLongPreambleOFDM[32], &longPreambleOFDM[0], sizeof(creal_T) <<
         6);
  memcpy(&completeLongPreambleOFDM[96], &longPreambleOFDM[0], sizeof(creal_T) <<
         6);

  /* % Generate Data */
  /*  Use string as message */
  emlrtPushRtStackR2012b(&y_emlrtRSI, emlrtRootTLSGlobal);
  for (i = 0; i < 18; i++) {
    inputPayloadMessage[i] = b_inputPayloadMessage[i];
  }

  inputPayloadMessage[18] = '1';
  inputPayloadMessage[19] = '1';
  inputPayloadMessage[20] = uniqueID;
  for (i = 0; i < 3; i++) {
    inputPayloadMessage[i + 21] = cv0[i];
  }

  for (i = 0; i < 56; i++) {
    inputPayloadMessage[i + 24] = '-';
  }

  OFDMletters2bits(inputPayloadMessage, originalData);
  emlrtPopRtStackR2012b(&y_emlrtRSI, emlrtRootTLSGlobal);
  for (i = 0; i < 80; i++) {
    for (ib = 0; ib < 7; ib++) {
      x[ib + 7 * i] = originalData[i + 80 * ib];
    }
  }

  memcpy(&b_originalData[0], &x[0], 560U * sizeof(real_T));

  /*  Generate CRC */
  emlrtPushRtStackR2012b(&ab_emlrtRSI, emlrtRootTLSGlobal);
  CRCGenerator_CRCGenerator(&hGen);
  emlrtPopRtStackR2012b(&ab_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&bb_emlrtRSI, emlrtRootTLSGlobal);
  c_SystemCore_step(&hGen, b_originalData, dataWithCRC);
  emlrtPopRtStackR2012b(&bb_emlrtRSI, emlrtRootTLSGlobal);

  /*  Add CRC */
  /*  Construct modulator for each subcarrier */
  emlrtPushRtStackR2012b(&cb_emlrtRSI, emlrtRootTLSGlobal);
  BPSKModulator_BPSKModulator(&hMod);
  emlrtPopRtStackR2012b(&cb_emlrtRSI, emlrtRootTLSGlobal);

  /*  BPSK */
  /*  Apply modulator for each subcarrier */
  emlrtPushRtStackR2012b(&db_emlrtRSI, emlrtRootTLSGlobal);
  obj = &hMod;
  if (!obj->isReleased) {
  } else {
    emlrtPushRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
    c_y = NULL;
    m0 = mxCreateCharArray(2, iv0);
    for (i = 0; i < 45; i++) {
      cv1[i] = cv2[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 45, m0, cv1);
    emlrtAssign(&c_y, m0);
    d_y = NULL;
    m0 = mxCreateCharArray(2, iv1);
    for (i = 0; i < 4; i++) {
      cv3[i] = cv4[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 4, m0, cv3);
    emlrtAssign(&d_y, m0);
    b_error(message(c_y, d_y, &b_emlrtMCI), &b_emlrtMCI);
    emlrtPopRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  }

  if (!obj->isInitialized) {
    emlrtPushRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
    SystemCore_setup(obj);
    emlrtPopRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPushRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  SystemCore_checkTunableProps(obj);
  emlrtPopRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  c_SystemCore_detectInputSizeCha(obj);
  emlrtPopRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&fc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&fc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&ec_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&fc_emlrtRSI, emlrtRootTLSGlobal);
  Outputs(&obj->cSFunObject, dataWithCRC, iv2, tmp_data, tmp_size);
  emlrtPopRtStackR2012b(&fc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&ec_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&ec_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&fc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&fc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&ec_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&db_emlrtRSI, emlrtRootTLSGlobal);

  /*  Pad IFFT */
  emlrtPushRtStackR2012b(&eb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&h_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  e_y = NULL;
  m0 = mxCreateDoubleScalar(13.0);
  emlrtAssign(&e_y, m0);
  f_y = NULL;
  m0 = mxCreateDoubleScalar(1.0);
  emlrtAssign(&f_y, m0);
  e_emlrt_marshallIn(b_rand(e_y, f_y, &emlrtMCI), "rand", c_r);
  emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&h_emlrtRSI, emlrtRootTLSGlobal);
  for (k = 0; k < 13; k++) {
    c_r[k] = muDoubleScalarFloor(c_r[k] * 2.0);
  }

  obj = &hMod;
  if (!obj->isReleased) {
  } else {
    emlrtPushRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
    g_y = NULL;
    m0 = mxCreateCharArray(2, iv3);
    for (i = 0; i < 45; i++) {
      cv1[i] = cv2[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 45, m0, cv1);
    emlrtAssign(&g_y, m0);
    h_y = NULL;
    m0 = mxCreateCharArray(2, iv4);
    for (i = 0; i < 4; i++) {
      cv3[i] = cv4[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 4, m0, cv3);
    emlrtAssign(&h_y, m0);
    b_error(message(g_y, h_y, &b_emlrtMCI), &b_emlrtMCI);
    emlrtPopRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  }

  if (!obj->isInitialized) {
    emlrtPushRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
    b_SystemCore_setup(obj);
    emlrtPopRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPushRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  b_SystemCore_checkTunableProps(obj);
  emlrtPopRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  d_SystemCore_detectInputSizeCha(obj);
  emlrtPopRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&fc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&fc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&ec_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&fc_emlrtRSI, emlrtRootTLSGlobal);
  Outputs(&obj->cSFunObject, c_r, iv5, b_tmp_data, tmp_size);
  emlrtPopRtStackR2012b(&fc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&ec_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&ec_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&fc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&fc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&ec_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  memcpy(&modData[0], &tmp_data[0], 563U * sizeof(creal_T));
  memcpy(&modData[563], &b_tmp_data[0], 13U * sizeof(creal_T));
  emlrtPopRtStackR2012b(&eb_emlrtRSI, emlrtRootTLSGlobal);

  /*  Calculate required data sizes for correct receiver operation */
  /*  Save desired message size */
  /*  Save number of transmitted frames */
  /*  Convert data into subcarrier streams */
  memcpy(&ofdmData[0], &modData[0], 576U * sizeof(creal_T));

  /*  Create Pilots */
  emlrtPushRtStackR2012b(&fb_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = &hPN;

  /* System object Constructor function: comm.PNSequence */
  b_obj->S0_isInitialized = FALSE;
  b_obj->S1_isReleased = FALSE;
  for (i = 0; i < 8; i++) {
    b_obj->P0_Polynomial[i] = (uint8_T)iv6[i];
  }

  for (i = 0; i < 7; i++) {
    b_obj->P1_IniState[i] = 1;
    b_obj->P2_Mask[i] = (uint8_T)iv7[i];
  }

  emlrtPopRtStackR2012b(&fb_emlrtRSI, emlrtRootTLSGlobal);

  /* pilot=[1 0  0  1  0  0  1  0  0  0  0  0]'; */
  emlrtPushRtStackR2012b(&gb_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = &hPN;
  if (!b_obj->S0_isInitialized) {
    b_obj->S0_isInitialized = TRUE;
    if (b_obj->S1_isReleased) {
      emlrtErrorWithMessageIdR2012b(emlrtRootTLSGlobal, &ab_emlrtRTEI,
        "MATLAB:system:runtimeMethodCalledWhenReleasedCodegen", 0);
    }

    /* System object Initialization function: comm.PNSequence */
    for (ib = 0; ib < 7; ib++) {
      b_obj->W0_shiftReg[ib] = b_obj->P1_IniState[ib];
      emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, emlrtRootTLSGlobal);
    }
  }

  emlrtPushRtStackR2012b(&gc_emlrtRSI, emlrtRootTLSGlobal);

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

  emlrtPopRtStackR2012b(&gc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&gb_emlrtRSI, emlrtRootTLSGlobal);

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
  emlrtPushRtStackR2012b(&hb_emlrtRSI, emlrtRootTLSGlobal);
  object = &hDataMod;
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&j_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  object->isInitialized = FALSE;
  object->isReleased = FALSE;
  emlrtPushRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&j_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&s_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&s_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&s_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&s_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&s_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&s_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&s_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&s_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&s_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&s_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&s_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);

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
  emlrtPushRtStackR2012b(&ic_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&jc_emlrtRSI, emlrtRootTLSGlobal);
  for (k = 0; k < 4; k++) {
    b_data[k] = (int8_T)(12 + 14 * k);
  }

  i = 0;
  k = 1;
  while (k <= 4) {
    ib = b_data[k - 1];
    do {
      exitg2 = 0;
      k++;
      if (k > 4) {
        exitg2 = 1;
      } else {
        frexp((real_T)ib / 2.0, &exponent);
        if (!(muDoubleScalarAbs(ib - b_data[k - 1]) < ldexp(1.0, exponent - 53)))
        {
          exitg2 = 1;
        }
      }
    } while (exitg2 == 0);

    i++;
    b_data[i - 1] = (int8_T)ib;
    emlrtPushRtStackR2012b(&nc_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&nc_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPushRtStackR2012b(&lc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&lc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&kc_emlrtRSI, emlrtRootTLSGlobal);
  if (1 > i) {
    b0 = FALSE;
  } else {
    b0 = (i > 2147483646);
  }

  if (b0) {
    emlrtPushRtStackR2012b(&ac_emlrtRSI, emlrtRootTLSGlobal);
    check_forloop_overflow_error();
    emlrtPopRtStackR2012b(&ac_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPopRtStackR2012b(&kc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&jc_emlrtRSI, emlrtRootTLSGlobal);
  if (1 > i) {
    i1 = 0;
  } else {
    i1 = i;
  }

  if (!(4 != i1)) {
  } else {
    emlrtPushRtStackR2012b(&pc_emlrtRSI, emlrtRootTLSGlobal);
    i_y = NULL;
    m0 = mxCreateCharArray(2, iv8);
    for (i = 0; i < 13; i++) {
      cv5[i] = cv6[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 13, m0, cv5);
    emlrtAssign(&i_y, m0);
    b_error(b_message(i_y, &h_emlrtMCI), &h_emlrtMCI);
    emlrtPopRtStackR2012b(&pc_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPopRtStackR2012b(&ic_emlrtRSI, emlrtRootTLSGlobal);

  /*  Error message:  */
  /*  If pilot index is 2-D, the indices per symbol must be unique; */
  /*  If pilot index is 3-D, the indices across transmit antennas per symbol must be unique. */
  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&s_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&s_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&s_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&hb_emlrtRSI, emlrtRootTLSGlobal);

  /*  Modulate */
  emlrtPushRtStackR2012b(&ib_emlrtRSI, emlrtRootTLSGlobal);
  d_SystemCore_step(&hDataMod, ofdmData, b_pilots, d_r);
  emlrtPopRtStackR2012b(&ib_emlrtRSI, emlrtRootTLSGlobal);

  /*  Add preambles to data */
  memcpy(&preambles[0], &completeShortPreambleOFDM[0], 160U * sizeof(creal_T));
  memcpy(&preambles[160], &completeLongPreambleOFDM[0], 160U * sizeof(creal_T));
  memcpy(&SD->u1.f2.r[0], &preambles[0], 320U * sizeof(creal_T));
  memcpy(&SD->u1.f2.r[320], &d_r[0], 960U * sizeof(creal_T));

  /*  Repeat frame (Used in debugging) */
  ib = 0;
  for (i = 0; i < 30; i++) {
    ia = 0;
    for (k = 0; k < 1280; k++) {
      r[ib] = SD->u1.f2.r[ia];
      ia++;
      ib++;
    }
  }

  /*  Save Demodulator object data for receiver */
  /* hDataDemod = get(OFDMDemodulator(hDataMod)); */
  /* hPreambleDemod = get(OFDMDemodulator(hPreambleMod)); */
  emlrtPushRtStackR2012b(&jb_emlrtRSI, emlrtRootTLSGlobal);
  b_object = iobj_0;
  *hDataDemod = b_object;
  emlrtPushRtStackR2012b(&ad_emlrtRSI, emlrtRootTLSGlobal);
  b_object = *hDataDemod;
  emlrtPushRtStackR2012b(&j_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  b_object->isInitialized = FALSE;
  b_object->isReleased = FALSE;
  emlrtPushRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&j_emlrtRSI, emlrtRootTLSGlobal);
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
  emlrtPopRtStackR2012b(&gd_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&hd_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);

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
  emlrtPushRtStackR2012b(&ic_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&jc_emlrtRSI, emlrtRootTLSGlobal);
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
        frexp((real_T)ib / 2.0, &b_exponent);
        if (!(muDoubleScalarAbs(ib - b_data[k - 1]) < ldexp(1.0, b_exponent - 53)))
        {
          exitg1 = 1;
        }
      }
    } while (exitg1 == 0);

    i++;
    b_data[i - 1] = (int8_T)ib;
    emlrtPushRtStackR2012b(&nc_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&nc_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPushRtStackR2012b(&lc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&lc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&kc_emlrtRSI, emlrtRootTLSGlobal);
  if (1 > i) {
    b1 = FALSE;
  } else {
    b1 = (i > 2147483646);
  }

  if (b1) {
    emlrtPushRtStackR2012b(&ac_emlrtRSI, emlrtRootTLSGlobal);
    check_forloop_overflow_error();
    emlrtPopRtStackR2012b(&ac_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPopRtStackR2012b(&kc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&jc_emlrtRSI, emlrtRootTLSGlobal);
  if (1 > i) {
    i2 = 0;
  } else {
    i2 = i;
  }

  if (!(4 != i2)) {
  } else {
    emlrtPushRtStackR2012b(&pc_emlrtRSI, emlrtRootTLSGlobal);
    j_y = NULL;
    m0 = mxCreateCharArray(2, iv9);
    for (i = 0; i < 13; i++) {
      cv5[i] = cv6[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 13, m0, cv5);
    emlrtAssign(&j_y, m0);
    b_error(b_message(j_y, &h_emlrtMCI), &h_emlrtMCI);
    emlrtPopRtStackR2012b(&pc_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPopRtStackR2012b(&ic_emlrtRSI, emlrtRootTLSGlobal);

  /*  Error message:  */
  /*  If pilot index is 2-D, the indices per symbol must be unique; */
  /*  If pilot index is 3-D, the indices across transmit antennas per symbol must be unique. */
  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&hd_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&jb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&kb_emlrtRSI, emlrtRootTLSGlobal);
  c_object = iobj_1;
  *hPreambleDemod = c_object;
  emlrtPushRtStackR2012b(&ad_emlrtRSI, emlrtRootTLSGlobal);
  c_object = *hPreambleDemod;
  emlrtPushRtStackR2012b(&j_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  c_object->isInitialized = FALSE;
  c_object->isReleased = FALSE;
  emlrtPushRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&j_emlrtRSI, emlrtRootTLSGlobal);
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
  emlrtPopRtStackR2012b(&gd_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&kb_emlrtRSI, emlrtRootTLSGlobal);

  /*  Calcuate OFDM frequency bin size */
  /*  Calculate locations of pilots without guardbands */
  /*  Calculate locations of subcarrier datastreams without guardbands */
  /* Remove guardband offsets */
  /* Remove index offsets for pilots and guardbands */
  /* dataSubcarrierIndexies([pilotLocationsWithoutGuardbands;DCNullLocation]) = [];%Remove pilot and DCNull locations */
  /*  Preallocate values needed later */
  /*  Create return structure */
  for (i = 0; i < 560; i++) {
    b_tx->originalData[i] = b_originalData[i];
  }

  for (i = 0; i < 64; i++) {
    b_tx->shortPreambleOFDM[i] = shortPreambleOFDM[i];
  }

  for (i = 0; i < 160; i++) {
    b_tx->completeShortPreambleOFDM[i] = completeShortPreambleOFDM[i];
  }

  for (i = 0; i < 53; i++) {
    b_tx->shortPreamble[i] = dcv0[i];
  }

  for (i = 0; i < 53; i++) {
    b_tx->longPreamble[i] = iv10[i];
  }

  for (i = 0; i < 64; i++) {
    b_tx->longPreambleOFDM[i] = longPreambleOFDM[i];
  }

  for (i = 0; i < 160; i++) {
    b_tx->completeLongPreambleOFDM[i] = completeLongPreambleOFDM[i];
  }

  for (i = 0; i < 48; i++) {
    b_tx->pilots[i] = b_pilots[i];
  }

  for (i = 0; i < 320; i++) {
    b_tx->preambles[i] = preambles[i];
  }

  for (i = 0; i < 4; i++) {
    b_tx->pilotLocationsWithoutGuardbands[i] = 6.0 + 14.0 * (real_T)i;
  }

  b_tx->dataSubcarrierIndexies.size[0] = 1;
  b_tx->dataSubcarrierIndexies.size[1] = 48;
  for (i = 0; i < 48; i++) {
    b_tx->dataSubcarrierIndexies.data[i] = iv11[i];
  }

  b_tx->samplingFreq = 5.0E+6;
  b_tx->FFTLength = 64.0;
  b_tx->enableMA = TRUE;
  b_tx->numCarriers = 48.0;
  b_tx->padBits = 13.0;
  b_tx->numSamples = 576.0;
  b_tx->messageCharacters = 80.0;
  b_tx->numFrames = 30.0;
  b_tx->frameLength = 1280.0;
  b_tx->freqBin = 78125.0;
  b_tx->DecimationFactor = 0.0;
  b_tx->receiveBufferLength = 0.0;
  b_obj = &hPN;

  /* System object Destructor function: comm.PNSequence */
  if (b_obj->S0_isInitialized) {
    b_obj->S0_isInitialized = FALSE;
    if (!b_obj->S1_isReleased) {
      b_obj->S1_isReleased = TRUE;
    }
  }

  emxFreeStruct_OFDMModulator_4(&hPreambleMod);
  emxFreeStruct_OFDMModulator_196(&hDataMod);
  emlrtHeapReferenceStackLeaveFcnR2012b(emlrtRootTLSGlobal);
}

/* End of code generation (generateOFDMSignal_TX2.c) */
