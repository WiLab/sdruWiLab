/*
 * generateOFDMSignal.c
 *
 * Code generation for function 'generateOFDMSignal'
 *
 * C source code generated on: Thu Apr  3 19:36:37 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testPHYReceive.h"
#include "generateOFDMSignal.h"
#include "OFDMletters2bits.h"
#include "testPHYReceive_emxutil.h"
#include "receiveData.h"
#include "equalizeOFDM.h"
#include "SystemCore.h"
#include "OFDMModulator.h"
#include "setup.h"
#include "generateOFDMSignal_TX2.h"
#include "CRCGenerator.h"
#include "testPHYReceive_mexutil.h"
#include "testPHYReceive_data.h"
#include <stdio.h>

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
static emlrtRSInfo wd_emlrtRSI = { 33, "generateOFDMSignal",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/private/generateOFDMSignal.m"
};

static emlrtRSInfo xd_emlrtRSI = { 40, "generateOFDMSignal",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/private/generateOFDMSignal.m"
};

static emlrtRSInfo yd_emlrtRSI = { 52, "generateOFDMSignal",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/private/generateOFDMSignal.m"
};

static emlrtRSInfo ae_emlrtRSI = { 63, "generateOFDMSignal",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/private/generateOFDMSignal.m"
};

static emlrtRSInfo be_emlrtRSI = { 67, "generateOFDMSignal",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/private/generateOFDMSignal.m"
};

static emlrtRSInfo ce_emlrtRSI = { 68, "generateOFDMSignal",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/private/generateOFDMSignal.m"
};

static emlrtRSInfo de_emlrtRSI = { 71, "generateOFDMSignal",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/private/generateOFDMSignal.m"
};

static emlrtRSInfo ee_emlrtRSI = { 74, "generateOFDMSignal",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/private/generateOFDMSignal.m"
};

static emlrtRSInfo fe_emlrtRSI = { 81, "generateOFDMSignal",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/private/generateOFDMSignal.m"
};

static emlrtRSInfo ge_emlrtRSI = { 93, "generateOFDMSignal",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/private/generateOFDMSignal.m"
};

static emlrtRSInfo he_emlrtRSI = { 98, "generateOFDMSignal",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/private/generateOFDMSignal.m"
};

static emlrtRSInfo ie_emlrtRSI = { 104, "generateOFDMSignal",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/private/generateOFDMSignal.m"
};

static emlrtRSInfo je_emlrtRSI = { 115, "generateOFDMSignal",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/private/generateOFDMSignal.m"
};

static emlrtRSInfo ke_emlrtRSI = { 128, "generateOFDMSignal",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/private/generateOFDMSignal.m"
};

static emlrtRSInfo le_emlrtRSI = { 129, "generateOFDMSignal",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/private/generateOFDMSignal.m"
};

static emlrtRTEInfo r_emlrtRTEI = { 104, 1, "generateOFDMSignal",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/private/generateOFDMSignal.m"
};

static emlrtRTEInfo s_emlrtRTEI = { 33, 1, "generateOFDMSignal",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/private/generateOFDMSignal.m"
};

/* Function Definitions */
void generateOFDMSignal(OFDMDemodulator *iobj_0, OFDMDemodulator_1 *iobj_1,
  OFDMDemodulator_1 **hPreambleDemod, OFDMDemodulator **hDataDemod, creal_T r
  [25600], b_struct_T *tx)
{
  OFDMModulator_196 hDataMod;
  OFDMModulator_4 hPreambleMod;
  creal_T shortPreambleOFDM[64];
  int32_T ia;
  creal_T completeShortPreambleOFDM[160];
  creal_T longPreambleOFDM[64];
  creal_T completeLongPreambleOFDM[160];
  int32_T bits_size_idx_1;
  char_T bits_data[1280];
  int32_T k;
  static const char_T cv60[80] = { 'L', 'i', 'v', 'e', ' ', 'l', 'o', 'n', 'g',
    ' ', 'a', 'n', 'd', ' ', 'p', 'r', 'o', 's', 'p', 'e', 'r', ',', ' ', 'f',
    'r', 'o', 'm', ' ', 't', 'h', 'e', ' ', 'C', 'o', 'm', 'm', 'u', 'n', 'i',
    'c', 'a', 't', 'i', 'o', 'n', 's', ' ', 'S', 'y', 's', 't', 'e', 'm', ' ',
    'T', 'o', 'o', 'l', 'b', 'o', 'x', ' ', 'T', 'e', 'a', 'm', ' ', 'a', 't',
    ' ', 'M', 'a', 't', 'h', 'W', 'o', 'r', 'k', 's', '!' };

  uint16_T dk;
  int32_T nb;
  int32_T firstcol;
  boolean_T exitg2;
  boolean_T p;
  int32_T i;
  boolean_T exitg3;
  char_T b_bits_data[1280];
  real_T originalData[560];
  const mxArray *y;
  const mxArray *m12;
  real_T x[560];
  real_T b_originalData[560];
  commcodegen_CRCGenerator_256 hGen;
  real_T dataWithCRC[563];
  commcodegen_BPSKModulator_191 hMod;
  commcodegen_BPSKModulator_191 *obj;
  comm_BPSKModulator_4 *b_obj;
  static const real_T dv5[4] = { 1.0, 0.0, -1.0, 1.2246063538223773E-16 };

  const mxArray *b_y;
  static const int32_T iv55[2] = { 1, 45 };

  char_T cv61[45];
  static const char_T cv62[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C',
    'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *c_y;
  static const int32_T iv56[2] = { 1, 4 };

  char_T cv63[4];
  static const char_T cv64[4] = { 's', 't', 'e', 'p' };

  int32_T tmp_size[2];
  creal_T tmp_data[563];
  static int32_T iv57[2] = { 563, 1 };

  const mxArray *d_y;
  const mxArray *e_y;
  real_T b_r[13];
  const mxArray *f_y;
  static const int32_T iv58[2] = { 1, 45 };

  const mxArray *g_y;
  static const int32_T iv59[2] = { 1, 4 };

  creal_T b_tmp_data[563];
  static int32_T iv60[2] = { 13, 1 };

  creal_T modData[576];
  creal_T ofdmData[576];
  comm_PNSequence_5 hPN;
  comm_PNSequence_5 *c_obj;
  static const int8_T iv61[8] = { 1, 0, 0, 0, 1, 0, 0, 1 };

  static const int8_T iv62[7] = { 0, 0, 0, 0, 0, 0, 1 };

  int8_T pilot[12];
  uint8_T tmp;
  uint8_T tmp2;
  int8_T pilots[48];
  real_T b_pilots[48];
  creal_T c_r[960];
  creal_T preambles[320];
  creal_T d_r[1280];
  OFDMDemodulator *object;
  int8_T b_data[4];
  int32_T exitg1;
  int32_T exponent;
  boolean_T b2;
  int32_T i12;
  const mxArray *h_y;
  static const int32_T iv63[2] = { 1, 13 };

  char_T cv65[13];
  static const char_T cv66[13] = { 'c', 'o', 'm', 'm', ':', 'O', 'F', 'D', 'M',
    ':', 'x', 'x', 'x' };

  OFDMDemodulator_1 *b_object;
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

  static const int8_T iv64[53] = { 1, 1, -1, -1, 1, 1, -1, 1, -1, 1, 1, 1, 1, 1,
    1, -1, -1, 1, 1, -1, 1, -1, 1, 1, 1, 1, 0, 1, -1, -1, 1, 1, -1, 1, -1, 1, -1,
    -1, -1, -1, -1, 1, 1, -1, -1, 1, -1, 1, -1, 1, 1, 1, 1 };

  static const int8_T iv65[48] = { 1, 2, 3, 4, 5, 7, 8, 9, 10, 11, 12, 13, 14,
    15, 16, 17, 18, 19, 21, 22, 23, 24, 25, 26, 28, 29, 30, 31, 32, 33, 35, 36,
    37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 49, 50, 51, 52, 53 };

  emlrtHeapReferenceStackEnterFcnR2012b(emlrtRootTLSGlobal);
  emxInitStruct_OFDMModulator_196(&hDataMod, &r_emlrtRTEI, TRUE);
  emxInitStruct_OFDMModulator_4(&hPreambleMod, &s_emlrtRTEI, TRUE);

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
  emlrtPushRtStackR2012b(&wd_emlrtRSI, emlrtRootTLSGlobal);
  OFDMModulator_OFDMModulator(&hPreambleMod);
  emlrtPopRtStackR2012b(&wd_emlrtRSI, emlrtRootTLSGlobal);

  /*  Modulate and scale */
  emlrtPushRtStackR2012b(&xd_emlrtRSI, emlrtRootTLSGlobal);
  SystemCore_step(&hPreambleMod, shortPreambleOFDM);
  for (ia = 0; ia < 64; ia++) {
    shortPreambleOFDM[ia].re *= 1.4719601443879744;
    shortPreambleOFDM[ia].im *= 1.4719601443879744;
  }

  emlrtPopRtStackR2012b(&xd_emlrtRSI, emlrtRootTLSGlobal);

  /*  Form 10 Short Preambles */
  memcpy(&completeShortPreambleOFDM[0], &shortPreambleOFDM[0], sizeof(creal_T) <<
         6);
  memcpy(&completeShortPreambleOFDM[64], &shortPreambleOFDM[0], sizeof(creal_T) <<
         6);
  memcpy(&completeShortPreambleOFDM[128], &shortPreambleOFDM[0], sizeof(creal_T)
         << 5);

  /* % Create Long Preamble */
  /*  Modulate */
  emlrtPushRtStackR2012b(&yd_emlrtRSI, emlrtRootTLSGlobal);
  b_SystemCore_step(&hPreambleMod, longPreambleOFDM);
  emlrtPopRtStackR2012b(&yd_emlrtRSI, emlrtRootTLSGlobal);

  /*  Form 2 Long Preambles */
  memcpy(&completeLongPreambleOFDM[0], &longPreambleOFDM[32], sizeof(creal_T) <<
         5);
  memcpy(&completeLongPreambleOFDM[32], &longPreambleOFDM[0], sizeof(creal_T) <<
         6);
  memcpy(&completeLongPreambleOFDM[96], &longPreambleOFDM[0], sizeof(creal_T) <<
         6);

  /* % Generate Data */
  /*  Use string as message */
  emlrtPushRtStackR2012b(&ae_emlrtRSI, emlrtRootTLSGlobal);

  /*  Encode a string of ASCII text into bits(1,0) */
  emlrtPushRtStackR2012b(&tb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&vb_emlrtRSI, emlrtRootTLSGlobal);
  bits_size_idx_1 = 16;
  for (ia = 0; ia < 1280; ia++) {
    bits_data[ia] = '0';
  }

  for (k = 0; k < 80; k++) {
    dk = (uint16_T)cv60[k];
    for (nb = 0; nb < 16; nb++) {
      emlrtPushRtStackR2012b(&wb_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPopRtStackR2012b(&wb_emlrtRSI, emlrtRootTLSGlobal);
      if ((dk & 1 << nb) != 0) {
        bits_data[k + 80 * (15 - nb)] = '1';
      }
    }
  }

  emlrtPushRtStackR2012b(&xb_emlrtRSI, emlrtRootTLSGlobal);
  firstcol = 16;
  emlrtPushRtStackR2012b(&cc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&cc_emlrtRSI, emlrtRootTLSGlobal);
  nb = 1;
  exitg2 = FALSE;
  while ((exitg2 == FALSE) && (nb <= 15)) {
    p = FALSE;
    i = 0;
    exitg3 = FALSE;
    while ((exitg3 == FALSE) && (i <= 79)) {
      if (bits_data[i + 80 * (nb - 1)] != '0') {
        p = TRUE;
        exitg3 = TRUE;
      } else {
        i++;
      }
    }

    if (p) {
      firstcol = nb;
      exitg2 = TRUE;
    } else {
      nb++;
    }
  }

  if (firstcol > 1) {
    emlrtPushRtStackR2012b(&bc_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&bc_emlrtRSI, emlrtRootTLSGlobal);
    for (nb = firstcol; nb < 17; nb++) {
      emlrtPushRtStackR2012b(&ac_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPopRtStackR2012b(&ac_emlrtRSI, emlrtRootTLSGlobal);
      for (i = 0; i < 80; i++) {
        bits_data[i + 80 * (nb - firstcol)] = bits_data[i + 80 * (nb - 1)];
      }
    }

    nb = 17 - firstcol;
    for (ia = 0; ia < nb; ia++) {
      memcpy(&b_bits_data[80 * ia], &bits_data[80 * ia], 80U * sizeof(char_T));
    }

    bits_size_idx_1 = 17 - firstcol;
    nb = 17 - firstcol;
    for (ia = 0; ia < nb; ia++) {
      memcpy(&bits_data[80 * ia], &b_bits_data[80 * ia], 80U * sizeof(char_T));
    }
  }

  emlrtPopRtStackR2012b(&xb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&vb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&tb_emlrtRSI, emlrtRootTLSGlobal);
  for (k = 0; k < 80; k++) {
    for (i = 0; i < 7; i++) {
      emlrtPushRtStackR2012b(&sb_emlrtRSI, emlrtRootTLSGlobal);
      ia = 1 + i;
      emlrtDynamicBoundsCheckFastR2012b(ia, 1, bits_size_idx_1, &c_emlrtBCI,
        emlrtRootTLSGlobal);
      y = NULL;
      m12 = emlrtCreateString1(bits_data[k + 80 * i]);
      emlrtAssign(&y, m12);
      originalData[k + 80 * i] = c_emlrt_marshallIn(str2double(y, &c_emlrtMCI),
        "str2double");
      emlrtPopRtStackR2012b(&sb_emlrtRSI, emlrtRootTLSGlobal);
      emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, emlrtRootTLSGlobal);
    }

    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, emlrtRootTLSGlobal);
  }

  emlrtPopRtStackR2012b(&ae_emlrtRSI, emlrtRootTLSGlobal);
  for (ia = 0; ia < 80; ia++) {
    for (nb = 0; nb < 7; nb++) {
      x[nb + 7 * ia] = originalData[ia + 80 * nb];
    }
  }

  memcpy(&b_originalData[0], &x[0], 560U * sizeof(real_T));

  /*  Generate CRC */
  emlrtPushRtStackR2012b(&be_emlrtRSI, emlrtRootTLSGlobal);
  b_CRCGenerator_CRCGenerator(&hGen);
  emlrtPopRtStackR2012b(&be_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&ce_emlrtRSI, emlrtRootTLSGlobal);
  e_SystemCore_step(&hGen, b_originalData, dataWithCRC);
  emlrtPopRtStackR2012b(&ce_emlrtRSI, emlrtRootTLSGlobal);

  /*  Add CRC */
  /*  Construct modulator for each subcarrier */
  emlrtPushRtStackR2012b(&de_emlrtRSI, emlrtRootTLSGlobal);
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
    b_obj->P0_modmap[i] = dv5[i];
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
  emlrtPopRtStackR2012b(&de_emlrtRSI, emlrtRootTLSGlobal);

  /*  BPSK */
  /*  Apply modulator for each subcarrier */
  emlrtPushRtStackR2012b(&ee_emlrtRSI, emlrtRootTLSGlobal);
  obj = &hMod;
  if (!obj->isReleased) {
  } else {
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    b_y = NULL;
    m12 = mxCreateCharArray(2, iv55);
    for (i = 0; i < 45; i++) {
      cv61[i] = cv62[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 45, m12, cv61);
    emlrtAssign(&b_y, m12);
    c_y = NULL;
    m12 = mxCreateCharArray(2, iv56);
    for (i = 0; i < 4; i++) {
      cv63[i] = cv64[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 4, m12, cv63);
    emlrtAssign(&c_y, m12);
    b_error(message(b_y, c_y, &b_emlrtMCI), &b_emlrtMCI);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  }

  if (!obj->isInitialized) {
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    c_SystemCore_setup(obj);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  c_SystemCore_checkTunableProps(obj);
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  e_SystemCore_detectInputSizeCha(obj);
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
  b_Outputs(&obj->cSFunObject, dataWithCRC, iv57, tmp_data, tmp_size);
  emlrtPopRtStackR2012b(&ic_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&hc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&hc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&ic_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&ic_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&hc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&ee_emlrtRSI, emlrtRootTLSGlobal);

  /*  Pad IFFT */
  emlrtPushRtStackR2012b(&fe_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  d_y = NULL;
  m12 = mxCreateDoubleScalar(13.0);
  emlrtAssign(&d_y, m12);
  e_y = NULL;
  m12 = mxCreateDoubleScalar(1.0);
  emlrtAssign(&e_y, m12);
  e_emlrt_marshallIn(b_rand(d_y, e_y, &emlrtMCI), "rand", b_r);
  emlrtPopRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  for (k = 0; k < 13; k++) {
    b_r[k] = muDoubleScalarFloor(b_r[k] * 2.0);
  }

  obj = &hMod;
  if (!obj->isReleased) {
  } else {
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    f_y = NULL;
    m12 = mxCreateCharArray(2, iv58);
    for (i = 0; i < 45; i++) {
      cv61[i] = cv62[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 45, m12, cv61);
    emlrtAssign(&f_y, m12);
    g_y = NULL;
    m12 = mxCreateCharArray(2, iv59);
    for (i = 0; i < 4; i++) {
      cv63[i] = cv64[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 4, m12, cv63);
    emlrtAssign(&g_y, m12);
    b_error(message(f_y, g_y, &b_emlrtMCI), &b_emlrtMCI);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  }

  if (!obj->isInitialized) {
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    d_SystemCore_setup(obj);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  d_SystemCore_checkTunableProps(obj);
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  f_SystemCore_detectInputSizeCha(obj);
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
  b_Outputs(&obj->cSFunObject, b_r, iv60, b_tmp_data, tmp_size);
  emlrtPopRtStackR2012b(&ic_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&hc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&hc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&ic_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&ic_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&hc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  memcpy(&modData[0], &tmp_data[0], 563U * sizeof(creal_T));
  memcpy(&modData[563], &b_tmp_data[0], 13U * sizeof(creal_T));
  emlrtPopRtStackR2012b(&fe_emlrtRSI, emlrtRootTLSGlobal);

  /*  Calculate required data sizes for correct receiver operation */
  /*  Save desired message size */
  /*  Save number of transmitted frames */
  /*  Convert data into subcarrier streams */
  memcpy(&ofdmData[0], &modData[0], 576U * sizeof(creal_T));

  /*  Create Pilots */
  emlrtPushRtStackR2012b(&ge_emlrtRSI, emlrtRootTLSGlobal);
  c_obj = &hPN;

  /* System object Constructor function: comm.PNSequence */
  c_obj->S0_isInitialized = FALSE;
  c_obj->S1_isReleased = FALSE;
  for (i = 0; i < 8; i++) {
    c_obj->P0_Polynomial[i] = (uint8_T)iv61[i];
  }

  for (i = 0; i < 7; i++) {
    c_obj->P1_IniState[i] = 1;
    c_obj->P2_Mask[i] = (uint8_T)iv62[i];
  }

  emlrtPopRtStackR2012b(&ge_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&he_emlrtRSI, emlrtRootTLSGlobal);
  c_obj = &hPN;
  if (!c_obj->S0_isInitialized) {
    c_obj->S0_isInitialized = TRUE;
    if (c_obj->S1_isReleased) {
      emlrtErrorWithMessageIdR2012b(emlrtRootTLSGlobal, &yb_emlrtRTEI,
        "MATLAB:system:runtimeMethodCalledWhenReleasedCodegen", 0);
    }

    /* System object Initialization function: comm.PNSequence */
    for (nb = 0; nb < 7; nb++) {
      c_obj->W0_shiftReg[nb] = c_obj->P1_IniState[nb];
      emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, emlrtRootTLSGlobal);
    }
  }

  emlrtPushRtStackR2012b(&jc_emlrtRSI, emlrtRootTLSGlobal);

  /* System object Outputs function: comm.PNSequence */
  for (nb = 0; nb < 12; nb++) {
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

    pilot[nb] = (int8_T)(tmp2 & 1);
    for (i = 5; i > -1; i += -1) {
      c_obj->W0_shiftReg[i + 1] = c_obj->W0_shiftReg[i];
    }

    c_obj->W0_shiftReg[0U] = tmp;
  }

  emlrtPopRtStackR2012b(&jc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&he_emlrtRSI, emlrtRootTLSGlobal);

  /*  Create pilot */
  firstcol = 0;
  for (nb = 0; nb < 4; nb++) {
    ia = 0;
    for (k = 0; k < 12; k++) {
      pilots[firstcol] = pilot[ia];
      ia++;
      firstcol++;
    }
  }

  /*  Expand to all pilot tones */
  for (ia = 0; ia < 12; ia++) {
    for (nb = 0; nb < 4; nb++) {
      b_pilots[nb + (ia << 2)] = 2.0 * (real_T)(pilots[ia + 12 * nb] < 1) - 1.0;
    }

    /*  Bipolar to unipolar */
    b_pilots[3 + (ia << 2)] = -b_pilots[3 + (ia << 2)];
  }

  /*  Invert last pilot */
  /*  Construct Modulator */
  emlrtPushRtStackR2012b(&ie_emlrtRSI, emlrtRootTLSGlobal);
  b_OFDMModulator_OFDMModulator(&hDataMod);
  emlrtPopRtStackR2012b(&ie_emlrtRSI, emlrtRootTLSGlobal);

  /*  Modulate */
  emlrtPushRtStackR2012b(&je_emlrtRSI, emlrtRootTLSGlobal);
  d_SystemCore_step(&hDataMod, ofdmData, b_pilots, c_r);
  emlrtPopRtStackR2012b(&je_emlrtRSI, emlrtRootTLSGlobal);

  /*  Add preambles to data */
  memcpy(&preambles[0], &completeShortPreambleOFDM[0], 160U * sizeof(creal_T));
  memcpy(&preambles[160], &completeLongPreambleOFDM[0], 160U * sizeof(creal_T));
  memcpy(&d_r[0], &preambles[0], 320U * sizeof(creal_T));
  memcpy(&d_r[320], &c_r[0], 960U * sizeof(creal_T));

  /*  Repeat frame */
  firstcol = 0;
  for (nb = 0; nb < 20; nb++) {
    ia = 0;
    for (k = 0; k < 1280; k++) {
      r[firstcol] = d_r[ia];
      ia++;
      firstcol++;
    }
  }

  /*  Save Demodulator object data for receiver */
  /* hDataDemod = get(OFDMDemodulator(hDataMod)); */
  /* hPreambleDemod = get(OFDMDemodulator(hPreambleMod)); */
  emlrtPushRtStackR2012b(&ke_emlrtRSI, emlrtRootTLSGlobal);
  object = iobj_0;
  *hDataDemod = object;
  emlrtPushRtStackR2012b(&yc_emlrtRSI, emlrtRootTLSGlobal);
  object = *hDataDemod;
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

  nb = 0;
  k = 1;
  while (k <= 4) {
    firstcol = b_data[k - 1];
    do {
      exitg1 = 0;
      k++;
      if (k > 4) {
        exitg1 = 1;
      } else {
        frexp((real_T)firstcol / 2.0, &exponent);
        if (!(muDoubleScalarAbs(firstcol - b_data[k - 1]) < ldexp(1.0, exponent
              - 53))) {
          exitg1 = 1;
        }
      }
    } while (exitg1 == 0);

    nb++;
    b_data[nb - 1] = (int8_T)firstcol;
    emlrtPushRtStackR2012b(&qc_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&qc_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPushRtStackR2012b(&oc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&oc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&nc_emlrtRSI, emlrtRootTLSGlobal);
  if (1 > nb) {
    b2 = FALSE;
  } else {
    b2 = (nb > 2147483646);
  }

  if (b2) {
    emlrtPushRtStackR2012b(&dc_emlrtRSI, emlrtRootTLSGlobal);
    check_forloop_overflow_error();
    emlrtPopRtStackR2012b(&dc_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPopRtStackR2012b(&nc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&mc_emlrtRSI, emlrtRootTLSGlobal);
  if (1 > nb) {
    i12 = 0;
  } else {
    i12 = nb;
  }

  if (!(4 != i12)) {
  } else {
    emlrtPushRtStackR2012b(&sc_emlrtRSI, emlrtRootTLSGlobal);
    h_y = NULL;
    m12 = mxCreateCharArray(2, iv63);
    for (i = 0; i < 13; i++) {
      cv65[i] = cv66[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 13, m12, cv65);
    emlrtAssign(&h_y, m12);
    b_error(b_message(h_y, &h_emlrtMCI), &h_emlrtMCI);
    emlrtPopRtStackR2012b(&sc_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPopRtStackR2012b(&lc_emlrtRSI, emlrtRootTLSGlobal);

  /*  Error message:  */
  /*  If pilot index is 2-D, the indices per symbol must be unique; */
  /*  If pilot index is 3-D, the indices across transmit antennas per symbol must be unique. */
  emlrtPopRtStackR2012b(&q_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&gd_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&ke_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&le_emlrtRSI, emlrtRootTLSGlobal);
  b_object = iobj_1;
  *hPreambleDemod = b_object;
  emlrtPushRtStackR2012b(&yc_emlrtRSI, emlrtRootTLSGlobal);
  b_object = *hPreambleDemod;
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
  emlrtPopRtStackR2012b(&le_emlrtRSI, emlrtRootTLSGlobal);

  /*  Calcuate OFDM frequency bin size */
  /*  Calculate locations of pilots without guardbands */
  /*  Calculate locations of subcarrier datastreams without guardbands */
  /* Remove guardband offsets */
  /* Remove index offsets for pilots and guardbands */
  /* dataSubcarrierIndexies([pilotLocationsWithoutGuardbands;DCNullLocation]) = [];%Remove pilot and DCNull locations */
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
    tx->shortPreamble[i] = dcv3[i];
  }

  for (i = 0; i < 53; i++) {
    tx->longPreamble[i] = iv64[i];
  }

  for (i = 0; i < 64; i++) {
    tx->longPreambleOFDM[i] = longPreambleOFDM[i];
  }

  for (i = 0; i < 160; i++) {
    tx->completeLongPreambleOFDM[i] = completeLongPreambleOFDM[i];
  }

  for (ia = 0; ia < 48; ia++) {
    tx->pilots[ia] = b_pilots[ia];
  }

  for (i = 0; i < 320; i++) {
    tx->preambles[i] = preambles[i];
  }

  for (ia = 0; ia < 4; ia++) {
    tx->pilotLocationsWithoutGuardbands[ia] = 6.0 + 14.0 * (real_T)ia;
  }

  tx->dataSubcarrierIndexies.size[0] = 1;
  tx->dataSubcarrierIndexies.size[1] = 48;
  for (ia = 0; ia < 48; ia++) {
    tx->dataSubcarrierIndexies.data[ia] = iv65[ia];
  }

  tx->samplingFreq = 5.0E+6;
  tx->FFTLength = 64.0;
  tx->enableMA = TRUE;
  tx->numCarriers = 48.0;
  tx->padBits = 13.0;
  tx->numSamples = 576.0;
  tx->messageCharacters = 80.0;
  tx->numFrames = 20.0;
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

/* End of code generation (generateOFDMSignal.c) */
