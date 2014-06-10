/*
 * generateOFDMSignal.c
 *
 * Code generation for function 'generateOFDMSignal'
 *
 * C source code generated on: Thu Apr 24 14:26:15 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testPHYTransmit.h"
#include "generateOFDMSignal.h"
#include "testPHYTransmit_emxutil.h"
#include "generateOFDMSignal_TX2.h"
#include "SystemCore.h"
#include "setup.h"
#include "BPSKModulator.h"
#include "CRCGenerator.h"
#include "OFDMletters2bits.h"
#include "OFDMModulator.h"
#include "testPHYTransmit_mexutil.h"
#include "testPHYTransmit_data.h"

/* Type Definitions */
#ifndef struct_comm_PNSequence_5
#define struct_comm_PNSequence_5

struct comm_PNSequence_5
{
  boolean_T S0_isInitialized;
  boolean_T S1_isReleased;
  uint8_T W0_shiftReg[7];
  uint8_T P0_Polynomial[8];
  uint8_T P1_IniState[7];
  uint8_T P2_Mask[7];
};

#endif                                 /*struct_comm_PNSequence_5*/

#ifndef typedef_comm_PNSequence_5
#define typedef_comm_PNSequence_5

typedef struct comm_PNSequence_5 comm_PNSequence_5;

#endif                                 /*typedef_comm_PNSequence_5*/

/* Variable Definitions */
static emlrtRSInfo xd_emlrtRSI = { 33, "generateOFDMSignal",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/generateOFDMSignal.m"
};

static emlrtRSInfo yd_emlrtRSI = { 40, "generateOFDMSignal",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/generateOFDMSignal.m"
};

static emlrtRSInfo ae_emlrtRSI = { 52, "generateOFDMSignal",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/generateOFDMSignal.m"
};

static emlrtRSInfo be_emlrtRSI = { 63, "generateOFDMSignal",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/generateOFDMSignal.m"
};

static emlrtRSInfo ce_emlrtRSI = { 67, "generateOFDMSignal",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/generateOFDMSignal.m"
};

static emlrtRSInfo de_emlrtRSI = { 68, "generateOFDMSignal",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/generateOFDMSignal.m"
};

static emlrtRSInfo ee_emlrtRSI = { 71, "generateOFDMSignal",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/generateOFDMSignal.m"
};

static emlrtRSInfo fe_emlrtRSI = { 74, "generateOFDMSignal",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/generateOFDMSignal.m"
};

static emlrtRSInfo ge_emlrtRSI = { 81, "generateOFDMSignal",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/generateOFDMSignal.m"
};

static emlrtRSInfo he_emlrtRSI = { 93, "generateOFDMSignal",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/generateOFDMSignal.m"
};

static emlrtRSInfo ie_emlrtRSI = { 98, "generateOFDMSignal",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/generateOFDMSignal.m"
};

static emlrtRSInfo je_emlrtRSI = { 104, "generateOFDMSignal",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/generateOFDMSignal.m"
};

static emlrtRSInfo ke_emlrtRSI = { 115, "generateOFDMSignal",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/generateOFDMSignal.m"
};

static emlrtRSInfo le_emlrtRSI = { 128, "generateOFDMSignal",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/generateOFDMSignal.m"
};

static emlrtRSInfo me_emlrtRSI = { 129, "generateOFDMSignal",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/generateOFDMSignal.m"
};

static emlrtRTEInfo s_emlrtRTEI = { 104, 1, "generateOFDMSignal",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/generateOFDMSignal.m"
};

static emlrtRTEInfo t_emlrtRTEI = { 33, 1, "generateOFDMSignal",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/generateOFDMSignal.m"
};

/* Function Definitions */
void generateOFDMSignal(testPHYTransmitStackData *SD, OFDMDemodulator *iobj_0,
  OFDMDemodulator_1 *iobj_1, OFDMDemodulator_1 **hPreambleDemod, OFDMDemodulator
  **hDataDemod, creal_T r[25600], c_struct_T *b_tx)
{
  OFDMModulator_196 hDataMod;
  OFDMModulator_4 hPreambleMod;
  creal_T shortPreambleOFDM[64];
  int32_T i;
  creal_T completeShortPreambleOFDM[160];
  creal_T longPreambleOFDM[64];
  creal_T completeLongPreambleOFDM[160];
  real_T originalData[560];
  real_T x[560];
  int32_T ib;
  real_T b_originalData[560];
  commcodegen_CRCGenerator_256 hGen;
  real_T dataWithCRC[563];
  commcodegen_BPSKModulator_191 hMod;
  commcodegen_BPSKModulator_191 *obj;
  const mxArray *y;
  static const int32_T iv55[2] = { 1, 45 };

  const mxArray *m11;
  char_T cv57[45];
  static const char_T cv58[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C',
    'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv56[2] = { 1, 4 };

  char_T cv59[4];
  static const char_T cv60[4] = { 's', 't', 'e', 'p' };

  int32_T tmp_size[2];
  creal_T tmp_data[563];
  static int32_T iv57[2] = { 563, 1 };

  const mxArray *c_y;
  const mxArray *d_y;
  real_T b_r[13];
  int32_T k;
  const mxArray *e_y;
  static const int32_T iv58[2] = { 1, 45 };

  const mxArray *f_y;
  static const int32_T iv59[2] = { 1, 4 };

  creal_T b_tmp_data[563];
  static int32_T iv60[2] = { 13, 1 };

  creal_T modData[576];
  creal_T ofdmData[576];
  comm_PNSequence_5 hPN;
  comm_PNSequence_5 *b_obj;
  static const int8_T iv61[8] = { 1, 0, 0, 0, 1, 0, 0, 1 };

  static const int8_T iv62[7] = { 0, 0, 0, 0, 0, 0, 1 };

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
  boolean_T b2;
  int32_T i13;
  const mxArray *g_y;
  static const int32_T iv63[2] = { 1, 13 };

  char_T cv61[13];
  static const char_T cv62[13] = { 'c', 'o', 'm', 'm', ':', 'O', 'F', 'D', 'M',
    ':', 'x', 'x', 'x' };

  creal_T c_r[960];
  creal_T preambles[320];
  OFDMDemodulator *b_object;
  int32_T exitg1;
  int32_T b_exponent;
  boolean_T b3;
  int32_T i14;
  const mxArray *h_y;
  static const int32_T iv64[2] = { 1, 13 };

  OFDMDemodulator_1 *c_object;
  static const creal_T dcv3[53] = { { 0.0, 0.0 }, { 0.0, 0.0 }, { 1.0, 1.0 }, {
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

  static const int8_T iv65[53] = { 1, 1, -1, -1, 1, 1, -1, 1, -1, 1, 1, 1, 1, 1,
    1, -1, -1, 1, 1, -1, 1, -1, 1, 1, 1, 1, 0, 1, -1, -1, 1, 1, -1, 1, -1, 1, -1,
    -1, -1, -1, -1, 1, 1, -1, -1, 1, -1, 1, -1, 1, 1, 1, 1 };

  static const int8_T iv66[48] = { 1, 2, 3, 4, 5, 7, 8, 9, 10, 11, 12, 13, 14,
    15, 16, 17, 18, 19, 21, 22, 23, 24, 25, 26, 28, 29, 30, 31, 32, 33, 35, 36,
    37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 49, 50, 51, 52, 53 };

  emlrtHeapReferenceStackEnterFcnR2012b(emlrtRootTLSGlobal);
  emxInitStruct_OFDMModulator_196(&hDataMod, &s_emlrtRTEI, TRUE);
  emxInitStruct_OFDMModulator_4(&hPreambleMod, &t_emlrtRTEI, TRUE);

  /*  generateOFDMSignal: Generate OFDM signal based on the 802.11a standard. */
  /*  This function returns the time domain signal and a structure containing */
  /*  details about the signal itself.  This information is required by the */
  /*  receiver to operate correctly. */
  /* % System Parameters */
  /*  OFDM modulator FFT size */
  /*  Enable moving averages for estimates */
  /* 1e3 */
  /*  Message to transmit */
  /*  String holder */
  /* coder.varsize('payloadMessage', [1, 80], [0 1]); */
  /* payloadMessage = ''; */
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
  emlrtPushRtStackR2012b(&xd_emlrtRSI, emlrtRootTLSGlobal);
  OFDMModulator_OFDMModulator(&hPreambleMod);
  emlrtPopRtStackR2012b(&xd_emlrtRSI, emlrtRootTLSGlobal);

  /*  Modulate and scale */
  emlrtPushRtStackR2012b(&yd_emlrtRSI, emlrtRootTLSGlobal);
  SystemCore_step(&hPreambleMod, shortPreambleOFDM);
  for (i = 0; i < 64; i++) {
    shortPreambleOFDM[i].re *= 1.4719601443879744;
    shortPreambleOFDM[i].im *= 1.4719601443879744;
  }

  emlrtPopRtStackR2012b(&yd_emlrtRSI, emlrtRootTLSGlobal);

  /*  Form 10 Short Preambles */
  memcpy(&completeShortPreambleOFDM[0], &shortPreambleOFDM[0], sizeof(creal_T) <<
         6);
  memcpy(&completeShortPreambleOFDM[64], &shortPreambleOFDM[0], sizeof(creal_T) <<
         6);
  memcpy(&completeShortPreambleOFDM[128], &shortPreambleOFDM[0], sizeof(creal_T)
         << 5);

  /* % Create Long Preamble */
  /*  Modulate */
  emlrtPushRtStackR2012b(&ae_emlrtRSI, emlrtRootTLSGlobal);
  b_SystemCore_step(&hPreambleMod, longPreambleOFDM);
  emlrtPopRtStackR2012b(&ae_emlrtRSI, emlrtRootTLSGlobal);

  /*  Form 2 Long Preambles */
  memcpy(&completeLongPreambleOFDM[0], &longPreambleOFDM[32], sizeof(creal_T) <<
         5);
  memcpy(&completeLongPreambleOFDM[32], &longPreambleOFDM[0], sizeof(creal_T) <<
         6);
  memcpy(&completeLongPreambleOFDM[96], &longPreambleOFDM[0], sizeof(creal_T) <<
         6);

  /* % Generate Data */
  /*  Use string as message */
  emlrtPushRtStackR2012b(&be_emlrtRSI, emlrtRootTLSGlobal);
  b_OFDMletters2bits(originalData);
  emlrtPopRtStackR2012b(&be_emlrtRSI, emlrtRootTLSGlobal);
  for (i = 0; i < 80; i++) {
    for (ib = 0; ib < 7; ib++) {
      x[ib + 7 * i] = originalData[i + 80 * ib];
    }
  }

  memcpy(&b_originalData[0], &x[0], 560U * sizeof(real_T));

  /*  Generate CRC */
  emlrtPushRtStackR2012b(&ce_emlrtRSI, emlrtRootTLSGlobal);
  b_CRCGenerator_CRCGenerator(&hGen);
  emlrtPopRtStackR2012b(&ce_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&de_emlrtRSI, emlrtRootTLSGlobal);
  e_SystemCore_step(&hGen, b_originalData, dataWithCRC);
  emlrtPopRtStackR2012b(&de_emlrtRSI, emlrtRootTLSGlobal);

  /*  Add CRC */
  /*  Construct modulator for each subcarrier */
  emlrtPushRtStackR2012b(&ee_emlrtRSI, emlrtRootTLSGlobal);
  b_BPSKModulator_BPSKModulator(&hMod);
  emlrtPopRtStackR2012b(&ee_emlrtRSI, emlrtRootTLSGlobal);

  /*  BPSK */
  /*  Apply modulator for each subcarrier */
  emlrtPushRtStackR2012b(&fe_emlrtRSI, emlrtRootTLSGlobal);
  obj = &hMod;
  if (!obj->isReleased) {
  } else {
    emlrtPushRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
    y = NULL;
    m11 = mxCreateCharArray(2, iv55);
    for (i = 0; i < 45; i++) {
      cv57[i] = cv58[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 45, m11, cv57);
    emlrtAssign(&y, m11);
    b_y = NULL;
    m11 = mxCreateCharArray(2, iv56);
    for (i = 0; i < 4; i++) {
      cv59[i] = cv60[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 4, m11, cv59);
    emlrtAssign(&b_y, m11);
    b_error(message(y, b_y, &b_emlrtMCI), &b_emlrtMCI);
    emlrtPopRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  }

  if (!obj->isInitialized) {
    emlrtPushRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
    c_SystemCore_setup(obj);
    emlrtPopRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPushRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  c_SystemCore_checkTunableProps(obj);
  emlrtPopRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  e_SystemCore_detectInputSizeCha(obj);
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
  b_Outputs(&obj->cSFunObject, dataWithCRC, iv57, tmp_data, tmp_size);
  emlrtPopRtStackR2012b(&fc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&ec_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&ec_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&fc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&fc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&ec_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&fe_emlrtRSI, emlrtRootTLSGlobal);

  /*  Pad IFFT */
  emlrtPushRtStackR2012b(&ge_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&h_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  c_y = NULL;
  m11 = mxCreateDoubleScalar(13.0);
  emlrtAssign(&c_y, m11);
  d_y = NULL;
  m11 = mxCreateDoubleScalar(1.0);
  emlrtAssign(&d_y, m11);
  e_emlrt_marshallIn(b_rand(c_y, d_y, &emlrtMCI), "rand", b_r);
  emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&h_emlrtRSI, emlrtRootTLSGlobal);
  for (k = 0; k < 13; k++) {
    b_r[k] = muDoubleScalarFloor(b_r[k] * 2.0);
  }

  obj = &hMod;
  if (!obj->isReleased) {
  } else {
    emlrtPushRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
    e_y = NULL;
    m11 = mxCreateCharArray(2, iv58);
    for (i = 0; i < 45; i++) {
      cv57[i] = cv58[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 45, m11, cv57);
    emlrtAssign(&e_y, m11);
    f_y = NULL;
    m11 = mxCreateCharArray(2, iv59);
    for (i = 0; i < 4; i++) {
      cv59[i] = cv60[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 4, m11, cv59);
    emlrtAssign(&f_y, m11);
    b_error(message(e_y, f_y, &b_emlrtMCI), &b_emlrtMCI);
    emlrtPopRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  }

  if (!obj->isInitialized) {
    emlrtPushRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
    d_SystemCore_setup(obj);
    emlrtPopRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPushRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  d_SystemCore_checkTunableProps(obj);
  emlrtPopRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  f_SystemCore_detectInputSizeCha(obj);
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
  b_Outputs(&obj->cSFunObject, b_r, iv60, b_tmp_data, tmp_size);
  emlrtPopRtStackR2012b(&fc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&ec_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&ec_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&fc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&fc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&ec_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  memcpy(&modData[0], &tmp_data[0], 563U * sizeof(creal_T));
  memcpy(&modData[563], &b_tmp_data[0], 13U * sizeof(creal_T));
  emlrtPopRtStackR2012b(&ge_emlrtRSI, emlrtRootTLSGlobal);

  /*  Calculate required data sizes for correct receiver operation */
  /*  Save desired message size */
  /*  Save number of transmitted frames */
  /*  Convert data into subcarrier streams */
  memcpy(&ofdmData[0], &modData[0], 576U * sizeof(creal_T));

  /*  Create Pilots */
  emlrtPushRtStackR2012b(&he_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = &hPN;

  /* System object Constructor function: comm.PNSequence */
  b_obj->S0_isInitialized = FALSE;
  b_obj->S1_isReleased = FALSE;
  for (i = 0; i < 8; i++) {
    b_obj->P0_Polynomial[i] = (uint8_T)iv61[i];
  }

  for (i = 0; i < 7; i++) {
    b_obj->P1_IniState[i] = 1;
    b_obj->P2_Mask[i] = (uint8_T)iv62[i];
  }

  emlrtPopRtStackR2012b(&he_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&ie_emlrtRSI, emlrtRootTLSGlobal);
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
  emlrtPopRtStackR2012b(&ie_emlrtRSI, emlrtRootTLSGlobal);

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
  emlrtPushRtStackR2012b(&je_emlrtRSI, emlrtRootTLSGlobal);
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
    b2 = FALSE;
  } else {
    b2 = (i > 2147483646);
  }

  if (b2) {
    emlrtPushRtStackR2012b(&ac_emlrtRSI, emlrtRootTLSGlobal);
    check_forloop_overflow_error();
    emlrtPopRtStackR2012b(&ac_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPopRtStackR2012b(&kc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&jc_emlrtRSI, emlrtRootTLSGlobal);
  if (1 > i) {
    i13 = 0;
  } else {
    i13 = i;
  }

  if (!(4 != i13)) {
  } else {
    emlrtPushRtStackR2012b(&pc_emlrtRSI, emlrtRootTLSGlobal);
    g_y = NULL;
    m11 = mxCreateCharArray(2, iv63);
    for (i = 0; i < 13; i++) {
      cv61[i] = cv62[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 13, m11, cv61);
    emlrtAssign(&g_y, m11);
    b_error(b_message(g_y, &h_emlrtMCI), &h_emlrtMCI);
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
  emlrtPopRtStackR2012b(&je_emlrtRSI, emlrtRootTLSGlobal);

  /*  Modulate */
  emlrtPushRtStackR2012b(&ke_emlrtRSI, emlrtRootTLSGlobal);
  d_SystemCore_step(&hDataMod, ofdmData, b_pilots, c_r);
  emlrtPopRtStackR2012b(&ke_emlrtRSI, emlrtRootTLSGlobal);

  /*  Add preambles to data */
  memcpy(&preambles[0], &completeShortPreambleOFDM[0], 160U * sizeof(creal_T));
  memcpy(&preambles[160], &completeLongPreambleOFDM[0], 160U * sizeof(creal_T));
  memcpy(&SD->u1.f1.r[0], &preambles[0], 320U * sizeof(creal_T));
  memcpy(&SD->u1.f1.r[320], &c_r[0], 960U * sizeof(creal_T));

  /*  Repeat frame */
  ib = 0;
  for (i = 0; i < 20; i++) {
    ia = 0;
    for (k = 0; k < 1280; k++) {
      r[ib] = SD->u1.f1.r[ia];
      ia++;
      ib++;
    }
  }

  /*  Save Demodulator object data for receiver */
  /* hDataDemod = get(OFDMDemodulator(hDataMod)); */
  /* hPreambleDemod = get(OFDMDemodulator(hPreambleMod)); */
  emlrtPushRtStackR2012b(&le_emlrtRSI, emlrtRootTLSGlobal);
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
    b3 = FALSE;
  } else {
    b3 = (i > 2147483646);
  }

  if (b3) {
    emlrtPushRtStackR2012b(&ac_emlrtRSI, emlrtRootTLSGlobal);
    check_forloop_overflow_error();
    emlrtPopRtStackR2012b(&ac_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPopRtStackR2012b(&kc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&jc_emlrtRSI, emlrtRootTLSGlobal);
  if (1 > i) {
    i14 = 0;
  } else {
    i14 = i;
  }

  if (!(4 != i14)) {
  } else {
    emlrtPushRtStackR2012b(&pc_emlrtRSI, emlrtRootTLSGlobal);
    h_y = NULL;
    m11 = mxCreateCharArray(2, iv64);
    for (i = 0; i < 13; i++) {
      cv61[i] = cv62[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 13, m11, cv61);
    emlrtAssign(&h_y, m11);
    b_error(b_message(h_y, &h_emlrtMCI), &h_emlrtMCI);
    emlrtPopRtStackR2012b(&pc_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPopRtStackR2012b(&ic_emlrtRSI, emlrtRootTLSGlobal);

  /*  Error message:  */
  /*  If pilot index is 2-D, the indices per symbol must be unique; */
  /*  If pilot index is 3-D, the indices across transmit antennas per symbol must be unique. */
  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&hd_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&le_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&me_emlrtRSI, emlrtRootTLSGlobal);
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
  emlrtPopRtStackR2012b(&me_emlrtRSI, emlrtRootTLSGlobal);

  /*  Calcuate OFDM frequency bin size */
  /*  Calculate locations of pilots without guardbands */
  /*  Calculate locations of subcarrier datastreams without guardbands */
  /* Remove guardband offsets */
  /* Remove index offsets for pilots and guardbands */
  /* dataSubcarrierIndexies([pilotLocationsWithoutGuardbands;DCNullLocation]) = [];%Remove pilot and DCNull locations */
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
    b_tx->shortPreamble[i] = dcv3[i];
  }

  for (i = 0; i < 53; i++) {
    b_tx->longPreamble[i] = iv65[i];
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
    b_tx->dataSubcarrierIndexies.data[i] = iv66[i];
  }

  b_tx->samplingFreq = 5.0E+6;
  b_tx->FFTLength = 64.0;
  b_tx->enableMA = TRUE;
  b_tx->numCarriers = 48.0;
  b_tx->padBits = 13.0;
  b_tx->numSamples = 576.0;
  b_tx->messageCharacters = 80.0;
  b_tx->numFrames = 20.0;
  b_tx->frameLength = 1280.0;
  b_tx->freqBin = 78125.0;
  b_tx->DecimationFactor = 0.0;
  b_tx->receiveBufferLength = 0.0;

  /*                              padBits: 13 */
  /*                           numSamples: 576 */
  /*                    messageCharacters: 80 */
  /*                            numFrames: 1000 */
  /*                          frameLength: 1280 */
  /*                              freqBin: 312500 */
  /*                           hDataDemod: [1x1 struct] */
  /*                       hPreambleDemod: [1x1 struct] */
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

/* End of code generation (generateOFDMSignal.c) */
