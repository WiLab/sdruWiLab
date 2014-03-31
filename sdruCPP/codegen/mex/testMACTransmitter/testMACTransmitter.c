/*
 * testMACTransmitter.c
 *
 * Code generation for function 'testMACTransmitter'
 *
 * C source code generated on: Thu Mar  6 22:22:38 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testMACTransmitter.h"
#include "initializeOFDMSyncMemory_sdr.h"
#include "AGC.h"
#include "CRCDetector.h"
#include "testMACTransmitter_emxutil.h"
#include "generateOFDMSignal_TX2.h"
#include "generateOFDMSignal.h"
#include "MACLayerTransmitter.h"
#include "SDRuReceiver.h"
#include "closeDataConnection.h"
#include "fprintf.h"
#include "SDRuTransmitter.h"
#include "testMACTransmitter_mexutil.h"
#include "testMACTransmitter_data.h"
#include <stdio.h>

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 34, "testMACTransmitter",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/testMACTransmitter.m" };

static emlrtRSInfo b_emlrtRSI = { 52, "testMACTransmitter",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/testMACTransmitter.m" };

static emlrtRSInfo c_emlrtRSI = { 55, "testMACTransmitter",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/testMACTransmitter.m" };

static emlrtRSInfo d_emlrtRSI = { 57, "testMACTransmitter",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/testMACTransmitter.m" };

static emlrtRSInfo e_emlrtRSI = { 5, "testMACTransmitter",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/testMACTransmitter.m" };

static emlrtRSInfo f_emlrtRSI = { 18, "CreateTXRX",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/CreateTXRX.m" };

static emlrtRSInfo g_emlrtRSI = { 40, "CreateTXRX",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/CreateTXRX.m" };

static emlrtRSInfo h_emlrtRSI = { 43, "CreateTXRX",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/CreateTXRX.m" };

static emlrtRSInfo i_emlrtRSI = { 46, "CreateTXRX",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/CreateTXRX.m" };

static emlrtRSInfo j_emlrtRSI = { 54, "CreateTXRX",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/CreateTXRX.m" };

static emlrtRSInfo k_emlrtRSI = { 11, "CreateTXRX",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/CreateTXRX.m" };

static emlrtRSInfo l_emlrtRSI = { 25, "CreateTXRX",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/CreateTXRX.m" };

static emlrtRSInfo wu_emlrtRSI = { 12, "ceil",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elfun/ceil.m" };

static emlrtRSInfo ebb_emlrtRSI = { 6, "Wait",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/Wait.m" };

static emlrtRSInfo fbb_emlrtRSI = { 7, "Wait",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/Wait.m" };

static emlrtRSInfo gbb_emlrtRSI = { 10, "Wait",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/Wait.m" };

static emlrtRTEInfo d_emlrtRTEI = { 11, 5, "testMACTransmitter",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/testMACTransmitter.m" };

static emlrtRTEInfo e_emlrtRTEI = { 10, 5, "testMACTransmitter",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/testMACTransmitter.m" };

static emlrtECInfo emlrtECI = { 2, 34, 6, "testMACTransmitter",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/testMACTransmitter.m" };

static emlrtECInfo b_emlrtECI = { 2, 23, 1, "testMACTransmitter",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/testMACTransmitter.m" };

/* Function Definitions */
void testMACTransmitter(testMACTransmitterStackData *SD, const emlrtStack *sp,
  const real_T offsets[3], real_T nodeNum)
{
  OFDMDemodulator_1 ObjDataDemod;
  OFDMDemodulator_1 ObjPreambleDemod;
  OFDMDemodulator_2 *unusedU1;
  OFDMDemodulator_3 *unusedU0;
  OFDMDemodulator_3 b_unusedU0;
  OFDMDemodulator_2 b_unusedU1;
  real_T tx_originalData[560];
  int32_T i;
  creal_T tx_shortPreambleOFDM[64];
  creal_T tx_completeShortPreambleOFDM[160];
  creal_T tx_shortPreamble[53];
  real_T tx_longPreamble[53];
  creal_T tx_longPreambleOFDM[64];
  creal_T tx_completeLongPreambleOFDM[160];
  real_T tx_pilots[48];
  creal_T tx_preambles[320];
  real_T c_tx_pilotLocationsWithoutGuard[4];
  real_T tx_dataSubcarrierIndexies_data[48];
  real_T tx_FFTLength;
  boolean_T tx_enableMA;
  real_T tx_numCarriers;
  real_T tx_padBits;
  real_T tx_numSamples;
  real_T tx_messageCharacters;
  real_T tx_numFrames;
  real_T tx_frameLength;
  real_T tx_DecimationFactor;
  real_T tx_receiveBufferLength;
  comm_SDRuTransmitter ObjSDRuTransmitter;
  OFDMDemodulator_1 *b_ObjDataDemod;
  OFDMDemodulator_1 *b_ObjPreambleDemod;
  comm_AGC ObjAGC;
  comm_SDRuReceiver ObjSDRuReceiver;
  commcodegen_CRCDetector ObjDetect;
  real_T messageBits_data[563];
  real_T b_tx_originalData[560];
  creal_T b_tx_shortPreambleOFDM[64];
  creal_T b_tx_completeShortPreambleOFDM[160];
  creal_T b_tx_shortPreamble[53];
  real_T b_tx_longPreamble[53];
  creal_T b_tx_longPreambleOFDM[64];
  creal_T b_tx_completeLongPreambleOFDM[160];
  real_T b_tx_pilots[48];
  creal_T b_tx_preambles[320];
  real_T d_tx_pilotLocationsWithoutGuard[4];
  real_T b_tx_dataSubcarrierIndexies_dat[48];
  real_T tx_offsetTable[3];
  int32_T previousMessage_size[2];
  real_T correct;
  int32_T run;
  boolean_T msgStatus;
  int32_T b_previousMessage_size[2];
  char_T previousMessage_data[77];
  char_T b_previousMessage_data[80];
  int32_T loop_ub;
  real_T d0;
  comm_SDRuReceiver *b_ObjSDRuReceiver;
  int32_T buffer;
  const mxArray *y;
  static const int32_T iv0[2] = { 1, 45 };

  const mxArray *m0;
  char_T cv0[45];
  static const char_T cv1[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C',
    'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv1[2] = { 1, 4 };

  char_T cv2[4];
  static const char_T cv3[4] = { 's', 't', 'e', 'p' };

  const mxArray *c_y;
  static const int32_T iv2[2] = { 1, 51 };

  char_T cv4[51];
  static const char_T cv5[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l',
    'e', 'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *d_y;
  static const int32_T iv3[2] = { 1, 5 };

  char_T cv6[5];
  static const char_T cv7[5] = { 's', 'e', 't', 'u', 'p' };

  char_T errMsg_data[1024];
  UsrpErrorCapiEnumT deviceStatus;
  const mxArray *e_y;
  static const int32_T iv4[2] = { 1, 35 };

  char_T cv8[35];
  static const char_T cv9[35] = { 's', 'd', 'r', 'u', ':', 'r', 'e', 'p', 'o',
    'r', 't', 'S', 'D', 'R', 'u', 'S', 't', 'a', 't', 'u', 's', ':', 'N', 'o',
    't', 'C', 'o', 'm', 'p', 'a', 't', 'i', 'b', 'l', 'e' };

  const mxArray *f_y;
  static const int32_T iv5[2] = { 1, 12 };

  char_T cv10[12];
  static const char_T cv11[12] = { '1', '9', '2', '.', '1', '6', '8', '.', '1',
    '0', '.', '2' };

  const mxArray *g_y;
  static const int32_T iv6[2] = { 1, 43 };

  char_T cv12[43];
  static const char_T cv13[43] = { 'r', 'e', 't', 'u', 'r', 'n', 'e', 'd', ' ',
    'b', 'y', ' ', '\'', 'g', 'e', 't', 'S', 'D', 'R', 'u', 'D', 'r', 'i', 'v',
    'e', 'r', 'V', 'e', 'r', 's', 'i', 'o', 'n', '\'', ' ', 'f', 'u', 'n', 'c',
    't', 'i', 'o', 'n' };

  const mxArray *h_y;
  static const int32_T iv7[2] = { 1, 35 };

  static const char_T cv14[35] = { 's', 'd', 'r', 'u', ':', 'r', 'e', 'p', 'o',
    'r', 't', 'S', 'D', 'R', 'u', 'S', 't', 'a', 't', 'u', 's', ':', 'N', 'o',
    't', 'R', 'e', 's', 'p', 'o', 'n', 'd', 'i', 'n', 'g' };

  const mxArray *i_y;
  static const int32_T iv8[2] = { 1, 12 };

  const mxArray *j_y;
  static const int32_T iv9[2] = { 1, 28 };

  char_T cv15[28];
  static const char_T cv16[28] = { 's', 'd', 'r', 'u', ':', 'r', 'e', 'p', 'o',
    'r', 't', 'S', 'D', 'R', 'u', 'S', 't', 'a', 't', 'u', 's', ':', 'R', 'x',
    'B', 'u', 's', 'y' };

  const mxArray *k_y;
  static const int32_T iv10[2] = { 1, 12 };

  const mxArray *l_y;
  static const int32_T iv11[2] = { 1, 28 };

  static const char_T cv17[28] = { 's', 'd', 'r', 'u', ':', 'r', 'e', 'p', 'o',
    'r', 't', 'S', 'D', 'R', 'u', 'S', 't', 'a', 't', 'u', 's', ':', 'T', 'x',
    'B', 'u', 's', 'y' };

  const mxArray *m_y;
  static const int32_T iv12[2] = { 1, 12 };

  const mxArray *n_y;
  static const int32_T iv13[2] = { 1, 26 };

  char_T cv18[26];
  static const char_T cv19[26] = { 's', 'd', 'r', 'u', ':', 'r', 'e', 'p', 'o',
    'r', 't', 'S', 'D', 'R', 'u', 'S', 't', 'a', 't', 'u', 's', ':', 'B', 'u',
    's', 'y' };

  const mxArray *o_y;
  static const int32_T iv14[2] = { 1, 12 };

  const mxArray *p_y;
  static const int32_T iv15[2] = { 1, 35 };

  static const char_T cv20[35] = { 's', 'd', 'r', 'u', ':', 'r', 'e', 'p', 'o',
    'r', 't', 'S', 'D', 'R', 'u', 'S', 't', 'a', 't', 'u', 's', ':', 'U', 'n',
    'k', 'n', 'o', 'w', 'n', 'S', 't', 'a', 't', 'u', 's' };

  int32_T u_size[2];
  char_T u_data[1024];
  const mxArray *q_y;
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
  emxInitStruct_OFDMDemodulator_1(sp, &ObjDataDemod, &d_emlrtRTEI, TRUE);
  emxInitStruct_OFDMDemodulator_1(sp, &ObjPreambleDemod, &e_emlrtRTEI, TRUE);

  /*            %Objects */
  /*          %Structs */
  /*   %Values/Vectors */
  st.site = &e_emlrtRSI;

  /*  System parameters to adjust because of hardware limitation */
  /*  Frames to capture */
  b_st.site = &k_emlrtRSI;
  generateOFDMSignal_TX2(SD, &b_st, &b_unusedU1, &b_unusedU0, &unusedU0,
    &unusedU1, SD->f16.unusedU2, &SD->f16.tx);
  for (i = 0; i < 560; i++) {
    tx_originalData[i] = SD->f16.tx.originalData[i];
  }

  for (i = 0; i < 64; i++) {
    tx_shortPreambleOFDM[i] = SD->f16.tx.shortPreambleOFDM[i];
  }

  for (i = 0; i < 160; i++) {
    tx_completeShortPreambleOFDM[i] = SD->f16.tx.completeShortPreambleOFDM[i];
  }

  for (i = 0; i < 53; i++) {
    tx_shortPreamble[i] = SD->f16.tx.shortPreamble[i];
  }

  for (i = 0; i < 53; i++) {
    tx_longPreamble[i] = SD->f16.tx.longPreamble[i];
  }

  for (i = 0; i < 64; i++) {
    tx_longPreambleOFDM[i] = SD->f16.tx.longPreambleOFDM[i];
  }

  for (i = 0; i < 160; i++) {
    tx_completeLongPreambleOFDM[i] = SD->f16.tx.completeLongPreambleOFDM[i];
  }

  for (i = 0; i < 48; i++) {
    tx_pilots[i] = SD->f16.tx.pilots[i];
  }

  for (i = 0; i < 320; i++) {
    tx_preambles[i] = SD->f16.tx.preambles[i];
  }

  for (i = 0; i < 4; i++) {
    c_tx_pilotLocationsWithoutGuard[i] =
      SD->f16.tx.pilotLocationsWithoutGuardbands[i];
  }

  for (i = 0; i < 48; i++) {
    tx_dataSubcarrierIndexies_data[i] = SD->f16.tx.dataSubcarrierIndexies.data[i];
  }

  tx_FFTLength = SD->f16.tx.FFTLength;
  tx_enableMA = SD->f16.tx.enableMA;
  tx_numCarriers = SD->f16.tx.numCarriers;
  tx_padBits = SD->f16.tx.padBits;
  tx_numSamples = SD->f16.tx.numSamples;
  tx_messageCharacters = SD->f16.tx.messageCharacters;
  tx_numFrames = SD->f16.tx.numFrames;
  tx_frameLength = SD->f16.tx.frameLength;
  tx_DecimationFactor = SD->f16.tx.DecimationFactor;
  tx_receiveBufferLength = SD->f16.tx.receiveBufferLength;

  /* just need for sizing */
  /*  Set desired frequeny */
  /*  Set frequency bin width */
  /*  Setup transmitter */
  b_st.site = &f_emlrtRSI;
  SDRuTransmitter_SDRuTransmitter(&b_st, &ObjSDRuTransmitter);

  /*  Setup Parameters */
  b_st.site = &l_emlrtRSI;
  generateOFDMSignal(SD, &b_st, &ObjDataDemod, &ObjPreambleDemod,
                     &b_ObjPreambleDemod, &b_ObjDataDemod, SD->f16.unusedU3,
                     &SD->f16.rx);

  /* _TX2('HelloShannon'); */
  /* ceil( rx.frameLength*4 ); %Size of Buffer of sliding window */
  /* offsetCompensationValue = -77148;% Get from calibration */
  /* offsetCompensationValue = 71289;% Get from calibration */
  /*  Sync Algorithms */
  /* Number of frequency estimates to be averaged together for frequency corrections (Higher==More stability, Lower==More responsiveness) */
  /* Create memory structure to collect measurements for sync algorithms */
  b_st.site = &g_emlrtRSI;
  initializeOFDMSyncMemory_sdr(&SD->f16.estimate);

  /*  Gain control */
  b_st.site = &h_emlrtRSI;
  AGC_AGC(&ObjAGC);

  /*  Value must be constant, equal to rx.receiveBufferLength */
  /*  USRP */
  b_st.site = &i_emlrtRSI;
  SDRuReceiver_SDRuReceiver(&b_st, &ObjSDRuReceiver);

  /*  CRC */
  b_st.site = &j_emlrtRSI;
  CRCDetector_CRCDetector(&ObjDetect);

  /*  Timeout info */
  /*  Soft decisions */
  memset(&messageBits_data[0], 0, 563U * sizeof(real_T));

  /* 3 for CRC */
  memcpy(&b_tx_originalData[0], &tx_originalData[0], 560U * sizeof(real_T));
  memcpy(&b_tx_shortPreambleOFDM[0], &tx_shortPreambleOFDM[0], sizeof(creal_T) <<
         6);
  memcpy(&b_tx_completeShortPreambleOFDM[0], &tx_completeShortPreambleOFDM[0],
         160U * sizeof(creal_T));
  for (i = 0; i < 53; i++) {
    b_tx_shortPreamble[i] = tx_shortPreamble[i];
    b_tx_longPreamble[i] = tx_longPreamble[i];
  }

  memcpy(&b_tx_longPreambleOFDM[0], &tx_longPreambleOFDM[0], sizeof(creal_T) <<
         6);
  memcpy(&b_tx_completeLongPreambleOFDM[0], &tx_completeLongPreambleOFDM[0],
         160U * sizeof(creal_T));
  memcpy(&b_tx_pilots[0], &tx_pilots[0], 48U * sizeof(real_T));
  memcpy(&b_tx_preambles[0], &tx_preambles[0], 320U * sizeof(creal_T));
  for (i = 0; i < 4; i++) {
    d_tx_pilotLocationsWithoutGuard[i] = c_tx_pilotLocationsWithoutGuard[i];
  }

  memcpy(&b_tx_dataSubcarrierIndexies_dat[0], &tx_dataSubcarrierIndexies_data[0],
         48U * sizeof(real_T));
  for (i = 0; i < 3; i++) {
    tx_offsetTable[i] = offsets[i];
  }

  /*  Previous Message string holder */
  emlrtDimSizeGeqCheckFastR2012b(80, 0, &b_emlrtECI, sp);
  previousMessage_size[0] = 1;
  previousMessage_size[1] = 0;
  correct = 0.0;

  /* Keep track of successful messages */
  for (run = 0; run < 10000; run++) {
    /* message = ['Random Message',char(96+run)];%Create different messages each times */
    /* Dont create different messages each times */
    /*  Who should get the message? */
    /*            %Objects */
    /*          %Structs */
    /*   %Values/Vectors */
    SD->f16.expl_temp.nodeNum = nodeNum;
    for (i = 0; i < 3; i++) {
      SD->f16.expl_temp.offsetTable[i] = tx_offsetTable[i];
    }

    SD->f16.expl_temp.CenterFrequency = 2.24E+9;
    SD->f16.expl_temp.receiveBufferLength = tx_receiveBufferLength;
    SD->f16.expl_temp.DecimationFactor = tx_DecimationFactor;
    SD->f16.expl_temp.freqBin = 78125.0;
    SD->f16.expl_temp.frameLength = tx_frameLength;
    SD->f16.expl_temp.numFrames = tx_numFrames;
    SD->f16.expl_temp.messageCharacters = tx_messageCharacters;
    SD->f16.expl_temp.numSamples = tx_numSamples;
    SD->f16.expl_temp.padBits = tx_padBits;
    SD->f16.expl_temp.numCarriers = tx_numCarriers;
    SD->f16.expl_temp.enableMA = tx_enableMA;
    SD->f16.expl_temp.FFTLength = tx_FFTLength;
    SD->f16.expl_temp.samplingFreq = 5.0E+6;
    SD->f16.expl_temp.dataSubcarrierIndexies.size[0] = 1;
    SD->f16.expl_temp.dataSubcarrierIndexies.size[1] = 48;
    for (i = 0; i < 48; i++) {
      SD->f16.expl_temp.dataSubcarrierIndexies.data[i] =
        b_tx_dataSubcarrierIndexies_dat[i];
    }

    for (i = 0; i < 4; i++) {
      SD->f16.expl_temp.pilotLocationsWithoutGuardbands[i] =
        d_tx_pilotLocationsWithoutGuard[i];
    }

    for (i = 0; i < 320; i++) {
      SD->f16.expl_temp.preambles[i] = b_tx_preambles[i];
    }

    for (i = 0; i < 48; i++) {
      SD->f16.expl_temp.pilots[i] = b_tx_pilots[i];
    }

    for (i = 0; i < 160; i++) {
      SD->f16.expl_temp.completeLongPreambleOFDM[i] =
        b_tx_completeLongPreambleOFDM[i];
    }

    for (i = 0; i < 64; i++) {
      SD->f16.expl_temp.longPreambleOFDM[i] = b_tx_longPreambleOFDM[i];
    }

    for (i = 0; i < 53; i++) {
      SD->f16.expl_temp.longPreamble[i] = b_tx_longPreamble[i];
      SD->f16.expl_temp.shortPreamble[i] = b_tx_shortPreamble[i];
    }

    for (i = 0; i < 160; i++) {
      SD->f16.expl_temp.completeShortPreambleOFDM[i] =
        b_tx_completeShortPreambleOFDM[i];
    }

    for (i = 0; i < 64; i++) {
      SD->f16.expl_temp.shortPreambleOFDM[i] = b_tx_shortPreambleOFDM[i];
    }

    for (i = 0; i < 560; i++) {
      SD->f16.expl_temp.originalData[i] = b_tx_originalData[i];
    }

    st.site = &emlrtRSI;
    MACLayerTransmitter(SD, &st, &ObjAGC, &ObjSDRuReceiver, &ObjSDRuTransmitter,
                        &ObjDetect, &ObjPreambleDemod, &ObjDataDemod,
                        &SD->f16.estimate, &SD->f16.expl_temp, messageBits_data,
                        b_previousMessage_data, previousMessage_size,
                        previousMessage_data, b_previousMessage_size, &msgStatus);
    emlrtDimSizeGeqCheckFastR2012b(80, b_previousMessage_size[1], &emlrtECI, sp);
    previousMessage_size[0] = 1;
    previousMessage_size[1] = b_previousMessage_size[1];
    loop_ub = b_previousMessage_size[0] * b_previousMessage_size[1];
    for (i = 0; i < loop_ub; i++) {
      b_previousMessage_data[i] = previousMessage_data[i];
    }

    /* Wait some time */
    /*  Calculated in seconds buts thats far from realistic  */
    st.site = &b_emlrtRSI;
    cb_fprintf(&st);
    if (msgStatus) {
      correct++;
      d0 = muDoubleScalarRound(correct);
      if (d0 < 2.147483648E+9) {
        i = (int32_T)d0;
      } else {
        i = MAX_int32_T;
      }

      st.site = &c_emlrtRSI;
      eb_fprintf(&st, i);
    }

    st.site = &d_emlrtRSI;
    b_ObjSDRuReceiver = &ObjSDRuReceiver;

    /*  Do nothing aka waste time */
    /*  Calculate how many buffer needed to step through to wait */
    /*  desired time */
    b_st.site = &ebb_emlrtRSI;
    c_st.site = &m_emlrtRSI;
    d_st.site = &n_emlrtRSI;
    b_st.site = &fbb_emlrtRSI;
    c_st.site = &m_emlrtRSI;
    d_st.site = &n_emlrtRSI;
    b_st.site = &fbb_emlrtRSI;
    c_st.site = &wu_emlrtRSI;
    for (buffer = 0; buffer < 19532; buffer++) {
      b_st.site = &gbb_emlrtRSI;
      if (!b_ObjSDRuReceiver->isReleased) {
      } else {
        y = NULL;
        m0 = mxCreateCharArray(2, iv0);
        for (i = 0; i < 45; i++) {
          cv0[i] = cv1[i];
        }

        emlrtInitCharArrayR2013a(&b_st, 45, m0, cv0);
        emlrtAssign(&y, m0);
        b_y = NULL;
        m0 = mxCreateCharArray(2, iv1);
        for (i = 0; i < 4; i++) {
          cv2[i] = cv3[i];
        }

        emlrtInitCharArrayR2013a(&b_st, 4, m0, cv2);
        emlrtAssign(&b_y, m0);
        c_st.site = &fb_emlrtRSI;
        c_error(&c_st, message(&c_st, y, b_y, &emlrtMCI), &emlrtMCI);
      }

      if (!b_ObjSDRuReceiver->isInitialized) {
        c_st.site = &fb_emlrtRSI;
        if (!b_ObjSDRuReceiver->isInitialized) {
        } else {
          c_y = NULL;
          m0 = mxCreateCharArray(2, iv2);
          for (i = 0; i < 51; i++) {
            cv4[i] = cv5[i];
          }

          emlrtInitCharArrayR2013a(&c_st, 51, m0, cv4);
          emlrtAssign(&c_y, m0);
          d_y = NULL;
          m0 = mxCreateCharArray(2, iv3);
          for (i = 0; i < 5; i++) {
            cv6[i] = cv7[i];
          }

          emlrtInitCharArrayR2013a(&c_st, 5, m0, cv6);
          emlrtAssign(&d_y, m0);
          d_st.site = &fb_emlrtRSI;
          c_error(&d_st, message(&d_st, c_y, d_y, &emlrtMCI), &emlrtMCI);
        }

        d_st.site = &fb_emlrtRSI;
        b_ObjSDRuReceiver->isInitialized = TRUE;
        e_st.site = &gb_emlrtRSI;
        d_st.site = &fb_emlrtRSI;
        d_st.site = &fb_emlrtRSI;
        e_st.site = &fb_emlrtRSI;
        d_st.site = &fb_emlrtRSI;
        d_st.site = &fb_emlrtRSI;
        e_st.site = &fb_emlrtRSI;
        d_st.site = &fb_emlrtRSI;
        e_st.site = &fb_emlrtRSI;
        f_st.site = &fb_emlrtRSI;
        f_st.site = &fb_emlrtRSI;
        d_st.site = &fb_emlrtRSI;
        e_st.site = &fb_emlrtRSI;
        e_st.site = &fb_emlrtRSI;
        d_st.site = &fb_emlrtRSI;
        d_st.site = &fb_emlrtRSI;
        d_st.site = &fb_emlrtRSI;
        d_st.site = &fb_emlrtRSI;
        e_st.site = &ck_emlrtRSI;
        SDRuReceiver_setupImplLocal(&e_st, b_ObjSDRuReceiver, &deviceStatus,
          errMsg_data, b_previousMessage_size);
        if (deviceStatus == UsrpDriverSuccess) {
          e_st.site = &ck_emlrtRSI;
          f_st.site = &gb_emlrtRSI;
        } else {
          e_st.site = &ck_emlrtRSI;
          closeDataConnection(&e_st, b_ObjSDRuReceiver->pDriverHandle);
          e_st.site = &ck_emlrtRSI;
          f_st.site = &gb_emlrtRSI;
        }

        e_st.site = &ck_emlrtRSI;

        /* reportSDRuStatus SDRu status reporter */
        /*    reportSDRuStatus(STATUS,MSG,IP,METHOD) reports the SDRu status based on */
        /*    the STATUS input. STATUS is a UsrpErrorCapiEnumT type. IP is the IP */
        /*    address of the USRP(R) radio. METHOD is a UsrpReportMethodEnumT type and */
        /*    can be Warning, Error , or None. */
        /*  */
        /*    USRP(R) is a trademark of National Instruments Corp. */
        /*    Copyright 2012-2013 The MathWorks, Inc. */
        switch (deviceStatus) {
         case UsrpDriverNotCompatible:
          f_st.site = &gn_emlrtRSI;
          if (!(deviceStatus == UsrpDriverNotCompatible)) {
          } else {
            e_y = NULL;
            m0 = mxCreateCharArray(2, iv4);
            for (i = 0; i < 35; i++) {
              cv8[i] = cv9[i];
            }

            emlrtInitCharArrayR2013a(&f_st, 35, m0, cv8);
            emlrtAssign(&e_y, m0);
            f_y = NULL;
            m0 = mxCreateCharArray(2, iv5);
            for (i = 0; i < 12; i++) {
              cv10[i] = cv11[i];
            }

            emlrtInitCharArrayR2013a(&f_st, 12, m0, cv10);
            emlrtAssign(&f_y, m0);
            g_y = NULL;
            m0 = mxCreateCharArray(2, iv6);
            for (i = 0; i < 43; i++) {
              cv12[i] = cv13[i];
            }

            emlrtInitCharArrayR2013a(&f_st, 43, m0, cv12);
            emlrtAssign(&g_y, m0);
            g_st.site = &lbb_emlrtRSI;
            c_error(&g_st, c_message(&g_st, e_y, f_y, g_y, &g_emlrtMCI),
                    &g_emlrtMCI);
          }
          break;

         case UsrpDriverNotResponding:
          f_st.site = &en_emlrtRSI;
          if (!(deviceStatus == UsrpDriverNotResponding)) {
          } else {
            h_y = NULL;
            m0 = mxCreateCharArray(2, iv7);
            for (i = 0; i < 35; i++) {
              cv8[i] = cv14[i];
            }

            emlrtInitCharArrayR2013a(&f_st, 35, m0, cv8);
            emlrtAssign(&h_y, m0);
            i_y = NULL;
            m0 = mxCreateCharArray(2, iv8);
            for (i = 0; i < 12; i++) {
              cv10[i] = cv11[i];
            }

            emlrtInitCharArrayR2013a(&f_st, 12, m0, cv10);
            emlrtAssign(&i_y, m0);
            g_st.site = &lbb_emlrtRSI;
            c_error(&g_st, message(&g_st, h_y, i_y, &g_emlrtMCI), &g_emlrtMCI);
          }
          break;

         case UsrpDriverRxBusy:
          f_st.site = &cn_emlrtRSI;
          if (!(deviceStatus == UsrpDriverRxBusy)) {
          } else {
            j_y = NULL;
            m0 = mxCreateCharArray(2, iv9);
            for (i = 0; i < 28; i++) {
              cv15[i] = cv16[i];
            }

            emlrtInitCharArrayR2013a(&f_st, 28, m0, cv15);
            emlrtAssign(&j_y, m0);
            k_y = NULL;
            m0 = mxCreateCharArray(2, iv10);
            for (i = 0; i < 12; i++) {
              cv10[i] = cv11[i];
            }

            emlrtInitCharArrayR2013a(&f_st, 12, m0, cv10);
            emlrtAssign(&k_y, m0);
            g_st.site = &lbb_emlrtRSI;
            c_error(&g_st, message(&g_st, j_y, k_y, &g_emlrtMCI), &g_emlrtMCI);
          }
          break;

         case UsrpDriverTxBusy:
          f_st.site = &an_emlrtRSI;
          if (!(deviceStatus == UsrpDriverTxBusy)) {
          } else {
            l_y = NULL;
            m0 = mxCreateCharArray(2, iv11);
            for (i = 0; i < 28; i++) {
              cv15[i] = cv17[i];
            }

            emlrtInitCharArrayR2013a(&f_st, 28, m0, cv15);
            emlrtAssign(&l_y, m0);
            m_y = NULL;
            m0 = mxCreateCharArray(2, iv12);
            for (i = 0; i < 12; i++) {
              cv10[i] = cv11[i];
            }

            emlrtInitCharArrayR2013a(&f_st, 12, m0, cv10);
            emlrtAssign(&m_y, m0);
            g_st.site = &lbb_emlrtRSI;
            c_error(&g_st, message(&g_st, l_y, m_y, &g_emlrtMCI), &g_emlrtMCI);
          }
          break;

         case UsrpDriverBusy:
          f_st.site = &xm_emlrtRSI;
          if (!(deviceStatus == UsrpDriverBusy)) {
          } else {
            n_y = NULL;
            m0 = mxCreateCharArray(2, iv13);
            for (i = 0; i < 26; i++) {
              cv18[i] = cv19[i];
            }

            emlrtInitCharArrayR2013a(&f_st, 26, m0, cv18);
            emlrtAssign(&n_y, m0);
            o_y = NULL;
            m0 = mxCreateCharArray(2, iv14);
            for (i = 0; i < 12; i++) {
              cv10[i] = cv11[i];
            }

            emlrtInitCharArrayR2013a(&f_st, 12, m0, cv10);
            emlrtAssign(&o_y, m0);
            g_st.site = &lbb_emlrtRSI;
            c_error(&g_st, message(&g_st, n_y, o_y, &g_emlrtMCI), &g_emlrtMCI);
          }
          break;

         case UsrpDriverError:
          f_st.site = &vm_emlrtRSI;
          if (!(deviceStatus == UsrpDriverError)) {
          } else {
            p_y = NULL;
            m0 = mxCreateCharArray(2, iv15);
            for (i = 0; i < 35; i++) {
              cv8[i] = cv20[i];
            }

            emlrtInitCharArrayR2013a(&f_st, 35, m0, cv8);
            emlrtAssign(&p_y, m0);
            u_size[0] = 1;
            u_size[1] = b_previousMessage_size[1];
            loop_ub = b_previousMessage_size[0] * b_previousMessage_size[1];
            for (i = 0; i < loop_ub; i++) {
              u_data[i] = errMsg_data[i];
            }

            q_y = NULL;
            m0 = mxCreateCharArray(2, u_size);
            emlrtInitCharArrayR2013a(&f_st, u_size[1], m0, (char_T *)&u_data);
            emlrtAssign(&q_y, m0);
            g_st.site = &lbb_emlrtRSI;
            c_error(&g_st, message(&g_st, p_y, q_y, &g_emlrtMCI), &g_emlrtMCI);
          }
          break;
        }

        d_st.site = &fb_emlrtRSI;
        d_st.site = &fb_emlrtRSI;
        b_ObjSDRuReceiver->TunablePropsChanged = FALSE;
        e_st.site = &gb_emlrtRSI;
      }

      c_st.site = &fb_emlrtRSI;
      c_st.site = &fb_emlrtRSI;
      if (b_ObjSDRuReceiver->TunablePropsChanged) {
        d_st.site = &fb_emlrtRSI;
        d_st.site = &fb_emlrtRSI;
        b_ObjSDRuReceiver->TunablePropsChanged = FALSE;
        e_st.site = &gb_emlrtRSI;
        d_st.site = &fb_emlrtRSI;
        d_st.site = &fb_emlrtRSI;
        e_st.site = &gb_emlrtRSI;
        for (i = 0; i < 4; i++) {
          b_ObjSDRuReceiver->tunablePropertyChanged[i] = FALSE;
        }

        f_st.site = &gb_emlrtRSI;
      }

      c_st.site = &fb_emlrtRSI;
      d_st.site = &fb_emlrtRSI;
      d_st.site = &fb_emlrtRSI;
      c_st.site = &fb_emlrtRSI;
      c_st.site = &fb_emlrtRSI;
      c_st.site = &fb_emlrtRSI;
      d_st.site = &fb_emlrtRSI;
      d_st.site = &fb_emlrtRSI;
      c_st.site = &fb_emlrtRSI;
      c_st.site = &fb_emlrtRSI;
      c_st.site = &fb_emlrtRSI;
      b_SDRuReceiver_stepImpl(SD, &c_st, b_ObjSDRuReceiver);
      emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, &st);
    }

    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
  }

  emxFreeStruct_OFDMDemodulator_1(&ObjPreambleDemod);
  emxFreeStruct_OFDMDemodulator_1(&ObjDataDemod);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (testMACTransmitter.c) */
