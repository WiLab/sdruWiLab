/*
 * testMACReceiver.c
 *
 * Code generation for function 'testMACReceiver'
 *
 * C source code generated on: Thu Apr  3 19:51:42 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testMACReceiver.h"
#include "PHYReceive.h"
#include "PHYTransmit.h"
#include "SDRuReceiver.h"
#include "receiveData.h"
#include "coarseOFDMFreqEst_sdr.h"
#include "SystemCore.h"
#include "testMACReceiver_emxutil.h"
#include "CRCDetector.h"
#include "AGC.h"
#include "initializeOFDMSyncMemory_sdr.h"
#include "generateOFDMSignal.h"
#include "SDRuTransmitter.h"
#include "generateOFDMSignal_TX2.h"
#include "testMACReceiver_mexutil.h"
#include "testMACReceiver_data.h"

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 30, "testMACReceiver",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/testMACReceiver.m" };

static emlrtRSInfo b_emlrtRSI = { 46, "testMACReceiver",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/testMACReceiver.m" };

static emlrtRSInfo c_emlrtRSI = { 5, "testMACReceiver",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/testMACReceiver.m" };

static emlrtRSInfo d_emlrtRSI = { 19, "CreateTXRX_2",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/CreateTXRX_2.m" };

static emlrtRSInfo e_emlrtRSI = { 44, "CreateTXRX_2",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/CreateTXRX_2.m" };

static emlrtRSInfo f_emlrtRSI = { 47, "CreateTXRX_2",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/CreateTXRX_2.m" };

static emlrtRSInfo g_emlrtRSI = { 55, "CreateTXRX_2",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/CreateTXRX_2.m" };

static emlrtRSInfo h_emlrtRSI = { 11, "CreateTXRX_2",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/CreateTXRX_2.m" };

static emlrtRSInfo i_emlrtRSI = { 26, "CreateTXRX_2",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/CreateTXRX_2.m" };

static emlrtRSInfo te_emlrtRSI = { 23, "MACLayerReceiver",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/MACLayerReceiver.m" };

static emlrtRSInfo ue_emlrtRSI = { 50, "MACLayerReceiver",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/MACLayerReceiver.m" };

static emlrtRSInfo ve_emlrtRSI = { 51, "MACLayerReceiver",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/MACLayerReceiver.m" };

static emlrtRSInfo we_emlrtRSI = { 66, "MACLayerReceiver",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/MACLayerReceiver.m" };

static emlrtRSInfo xe_emlrtRSI = { 67, "MACLayerReceiver",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/MACLayerReceiver.m" };

static emlrtRSInfo ye_emlrtRSI = { 48, "DLLayer",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/DLLayer.m" };

static emlrtRSInfo nk_emlrtRSI = { 10, "Wait",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/Wait.m" };

static emlrtRTEInfo b_emlrtRTEI = { 11, 5, "testMACReceiver",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/testMACReceiver.m" };

static emlrtRTEInfo c_emlrtRTEI = { 10, 5, "testMACReceiver",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/testMACReceiver.m" };

static emlrtECInfo emlrtECI = { 2, 43, 17, "DLLayer",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/DLLayer.m" };

static emlrtECInfo b_emlrtECI = { 2, 77, 17, "DLLayer",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/DLLayer.m" };

static emlrtECInfo c_emlrtECI = { 2, 105, 17, "DLLayer",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/DLLayer.m" };

static emlrtBCInfo emlrtBCI = { -1, -1, 105, 28, "Response", "DLLayer",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/DLLayer.m", 0 };

static emlrtECInfo d_emlrtECI = { 2, 100, 17, "DLLayer",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/DLLayer.m" };

static emlrtECInfo e_emlrtECI = { 2, 32, 1, "DLLayer",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/DLLayer.m" };

static emlrtBCInfo b_emlrtBCI = { 1, 3, 66, 63, "tx.offsetTable",
  "MACLayerReceiver",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/MACLayerReceiver.m", 0 };

static emlrtDCInfo emlrtDCI = { 66, 63, "MACLayerReceiver",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/MACLayerReceiver.m", 1 };

static emlrtBCInfo c_emlrtBCI = { 1, 3, 50, 67, "tx.offsetTable",
  "MACLayerReceiver",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/MACLayerReceiver.m", 0 };

static emlrtDCInfo b_emlrtDCI = { 50, 67, "MACLayerReceiver",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/MACLayerReceiver.m", 1 };

static emlrtECInfo f_emlrtECI = { 2, 30, 9, "testMACReceiver",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/testMACReceiver.m" };

static emlrtECInfo g_emlrtECI = { 2, 25, 1, "testMACReceiver",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/testMACReceiver.m" };

static emlrtBCInfo d_emlrtBCI = { -1, -1, 103, 39, "Response", "DLLayer",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/DLLayer.m", 0 };

static emlrtBCInfo e_emlrtBCI = { -1, -1, 104, 37, "Response", "DLLayer",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/DLLayer.m", 0 };

static emlrtBCInfo f_emlrtBCI = { -1, -1, 98, 39, "Response", "DLLayer",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/DLLayer.m", 0 };

static emlrtBCInfo g_emlrtBCI = { -1, -1, 99, 37, "Response", "DLLayer",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/DLLayer.m", 0 };

/* Function Definitions */
void testMACReceiver(testMACReceiverStackData *SD, const real_T offsets[3],
                     real_T nodeNum)
{
  OFDMDemodulator ObjDataDemod;
  OFDMDemodulator ObjPreambleDemod;
  OFDMDemodulator_2 *unusedU1;
  OFDMDemodulator_3 *unusedU0;
  OFDMDemodulator_3 b_unusedU0;
  OFDMDemodulator_2 b_unusedU1;
  creal_T tx_shortPreambleOFDM[64];
  int32_T i;
  real_T tx_longPreamble[53];
  real_T tx_pilots[48];
  int32_T i0;
  real_T c_tx_pilotLocationsWithoutGuard[4];
  real_T tx_dataSubcarrierIndexies_data[48];
  comm_SDRuTransmitter ObjSDRuTransmitter;
  OFDMDemodulator *b_ObjDataDemod;
  OFDMDemodulator_1 *b_ObjPreambleDemod;
  struct_T estimate;
  comm_AGC ObjAGC;
  comm_SDRuReceiver ObjSDRuReceiver;
  commcodegen_CRCDetector ObjDetect;
  creal_T b_tx_shortPreambleOFDM[64];
  real_T b_tx_longPreamble[53];
  real_T b_tx_pilots[48];
  real_T d_tx_pilotLocationsWithoutGuard[4];
  int32_T tx_dataSubcarrierIndexies_size[2];
  real_T b_tx_dataSubcarrierIndexies_dat[48];
  int32_T previousMessage_size[2];
  int32_T run;
  comm_SDRuReceiver *b_ObjSDRuReceiver;
  comm_SDRuTransmitter *b_ObjSDRuTransmitter;
  int32_T previousMessage_size_idx_1;
  char_T previousMessage_data[80];
  char_T b_previousMessage_data[77];
  real_T originNodeID;
  real_T destNodeID;
  real_T timeouts;
  int32_T Response_size[2];
  int32_T exitg7;
  boolean_T guard1 = FALSE;
  static const char_T b[7] = { 'T', 'i', 'm', 'e', 'o', 'u', 't' };

  char_T Response_data[80];
  struct_T b_estimate;
  int32_T messageBits_size[2];
  boolean_T b_bool;
  int32_T exitg13;
  int32_T exitg12;
  static const char_T cv0[7] = { 'T', 'i', 'm', 'e', 'o', 'u', 't' };

  int32_T exitg11;
  int32_T exitg10;
  static const char_T cv1[9] = { 'C', 'R', 'C', ' ', 'E', 'r', 'r', 'o', 'r' };

  int32_T exitg9;
  int32_T exitg8;
  static const char_T b_b[9] = { 'D', 'u', 'p', 'l', 'i', 'c', 'a', 't', 'e' };

  int32_T tmp_data[74];
  char_T b_Response_data[80];
  int32_T buffer;
  int32_T exitg6;
  int32_T exitg5;
  boolean_T b_guard1 = FALSE;
  int32_T exitg4;
  int32_T exitg3;
  static const char_T cv2[9] = { 'D', 'u', 'p', 'l', 'i', 'c', 'a', 't', 'e' };

  int32_T exitg2;
  int32_T exitg1;
  const mxArray *y;
  static const int32_T iv0[2] = { 1, 45 };

  const mxArray *m0;
  char_T cv3[45];
  static const char_T cv4[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C',
    'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv1[2] = { 1, 4 };

  char_T cv5[4];
  static const char_T cv6[4] = { 's', 't', 'e', 'p' };

  const mxArray *c_y;
  static const int32_T iv2[2] = { 1, 51 };

  char_T cv7[51];
  static const char_T cv8[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l',
    'e', 'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *d_y;
  static const int32_T iv3[2] = { 1, 5 };

  char_T cv9[5];
  static const char_T cv10[5] = { 's', 'e', 't', 'u', 'p' };

  int32_T errMsg_size[2];
  char_T errMsg_data[1024];
  UsrpErrorCapiEnumT deviceStatus;
  const mxArray *e_y;
  static const int32_T iv4[2] = { 1, 35 };

  char_T cv11[35];
  static const char_T cv12[35] = { 's', 'd', 'r', 'u', ':', 'r', 'e', 'p', 'o',
    'r', 't', 'S', 'D', 'R', 'u', 'S', 't', 'a', 't', 'u', 's', ':', 'N', 'o',
    't', 'C', 'o', 'm', 'p', 'a', 't', 'i', 'b', 'l', 'e' };

  const mxArray *f_y;
  static const int32_T iv5[2] = { 1, 12 };

  char_T cv13[12];
  static const char_T cv14[12] = { '1', '9', '2', '.', '1', '6', '8', '.', '1',
    '0', '.', '2' };

  const mxArray *g_y;
  static const int32_T iv6[2] = { 1, 43 };

  char_T cv15[43];
  static const char_T cv16[43] = { 'r', 'e', 't', 'u', 'r', 'n', 'e', 'd', ' ',
    'b', 'y', ' ', '\'', 'g', 'e', 't', 'S', 'D', 'R', 'u', 'D', 'r', 'i', 'v',
    'e', 'r', 'V', 'e', 'r', 's', 'i', 'o', 'n', '\'', ' ', 'f', 'u', 'n', 'c',
    't', 'i', 'o', 'n' };

  const mxArray *h_y;
  static const int32_T iv7[2] = { 1, 35 };

  static const char_T cv17[35] = { 's', 'd', 'r', 'u', ':', 'r', 'e', 'p', 'o',
    'r', 't', 'S', 'D', 'R', 'u', 'S', 't', 'a', 't', 'u', 's', ':', 'N', 'o',
    't', 'R', 'e', 's', 'p', 'o', 'n', 'd', 'i', 'n', 'g' };

  const mxArray *i_y;
  static const int32_T iv8[2] = { 1, 12 };

  const mxArray *j_y;
  static const int32_T iv9[2] = { 1, 26 };

  char_T cv18[26];
  static const char_T cv19[26] = { 's', 'd', 'r', 'u', ':', 'r', 'e', 'p', 'o',
    'r', 't', 'S', 'D', 'R', 'u', 'S', 't', 'a', 't', 'u', 's', ':', 'B', 'u',
    's', 'y' };

  const mxArray *k_y;
  static const int32_T iv10[2] = { 1, 12 };

  const mxArray *l_y;
  static const int32_T iv11[2] = { 1, 35 };

  static const char_T cv20[35] = { 's', 'd', 'r', 'u', ':', 'r', 'e', 'p', 'o',
    'r', 't', 'S', 'D', 'R', 'u', 'S', 't', 'a', 't', 'u', 's', ':', 'U', 'n',
    'k', 'n', 'o', 'w', 'n', 'S', 't', 'a', 't', 'u', 's' };

  boolean_T value[4];
  emlrtHeapReferenceStackEnterFcnR2012b(emlrtRootTLSGlobal);
  emxInitStruct_OFDMDemodulator(&ObjDataDemod, &b_emlrtRTEI, TRUE);
  emxInitStruct_OFDMDemodulator(&ObjPreambleDemod, &c_emlrtRTEI, TRUE);

  /*  Create needed objects and structs */
  /*            %Objects */
  /*          %Structs */
  /*   %Values/Vectors */
  emlrtPushRtStackR2012b(&c_emlrtRSI, emlrtRootTLSGlobal);

  /*  System parameters to adjust because of hardware limitation */
  /*  Frames to capture */
  emlrtPushRtStackR2012b(&h_emlrtRSI, emlrtRootTLSGlobal);
  generateOFDMSignal_TX2(&b_unusedU1, &b_unusedU0, &unusedU0, &unusedU1,
    SD->f11.unusedU2, &SD->f11.tx);
  for (i = 0; i < 64; i++) {
    tx_shortPreambleOFDM[i] = SD->f11.tx.shortPreambleOFDM[i];
  }

  for (i = 0; i < 53; i++) {
    tx_longPreamble[i] = SD->f11.tx.longPreamble[i];
  }

  for (i0 = 0; i0 < 48; i0++) {
    tx_pilots[i0] = SD->f11.tx.pilots[i0];
  }

  for (i = 0; i < 4; i++) {
    c_tx_pilotLocationsWithoutGuard[i] =
      SD->f11.tx.pilotLocationsWithoutGuardbands[i];
  }

  i = SD->f11.tx.dataSubcarrierIndexies.size[0] *
    SD->f11.tx.dataSubcarrierIndexies.size[1];
  for (i0 = 0; i0 < i; i0++) {
    tx_dataSubcarrierIndexies_data[i0] = SD->
      f11.tx.dataSubcarrierIndexies.data[i0];
  }

  emlrtPopRtStackR2012b(&h_emlrtRSI, emlrtRootTLSGlobal);

  /*  Set desired frequeny */
  /*  Set frequency bin width */
  /*  Setup transmitter */
  emlrtPushRtStackR2012b(&d_emlrtRSI, emlrtRootTLSGlobal);
  SDRuTransmitter_SDRuTransmitter(&ObjSDRuTransmitter);
  emlrtPopRtStackR2012b(&d_emlrtRSI, emlrtRootTLSGlobal);

  /*  Setup Parameters */
  emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  generateOFDMSignal(&ObjDataDemod, &ObjPreambleDemod, &b_ObjPreambleDemod,
                     &b_ObjDataDemod, SD->f11.unusedU3, &SD->f11.rx);
  emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);

  /* _TX2('HelloShannon'); */
  /* ceil( rx.frameLength*4 ); %Size of Buffer of sliding window */
  /* offsetCompensationValue = -77148;% Get from calibration */
  /* offsetCompensationValue = 71289;% Get from calibration */
  /*  Sync Algorithms */
  /* Number of frequency estimates to be averaged together for frequency corrections (Higher==More stability, Lower==More responsiveness) */
  /* Create memory structure to collect measurements for sync algorithms */
  initializeOFDMSyncMemory_sdr(&estimate);

  /*  Gain control */
  emlrtPushRtStackR2012b(&e_emlrtRSI, emlrtRootTLSGlobal);
  AGC_AGC(&ObjAGC);
  emlrtPopRtStackR2012b(&e_emlrtRSI, emlrtRootTLSGlobal);

  /*  Value must be constant, equal to rx.receiveBufferLength */
  /*  USRP */
  emlrtPushRtStackR2012b(&f_emlrtRSI, emlrtRootTLSGlobal);
  SDRuReceiver_SDRuReceiver(&ObjSDRuReceiver);
  emlrtPopRtStackR2012b(&f_emlrtRSI, emlrtRootTLSGlobal);

  /*  CRC */
  emlrtPushRtStackR2012b(&g_emlrtRSI, emlrtRootTLSGlobal);
  CRCDetector_CRCDetector(&ObjDetect);
  emlrtPopRtStackR2012b(&g_emlrtRSI, emlrtRootTLSGlobal);

  /*  Timeout info */
  /*  Soft decisions */
  memset(&SD->f11.messageBits_data[0], 0, 1689U * sizeof(real_T));

  /* 3 for CRC */
  emlrtPopRtStackR2012b(&c_emlrtRSI, emlrtRootTLSGlobal);
  memcpy(&b_tx_shortPreambleOFDM[0], &tx_shortPreambleOFDM[0], sizeof(creal_T) <<
         6);
  memcpy(&b_tx_longPreamble[0], &tx_longPreamble[0], 53U * sizeof(real_T));
  memcpy(&b_tx_pilots[0], &tx_pilots[0], 48U * sizeof(real_T));
  for (i = 0; i < 4; i++) {
    d_tx_pilotLocationsWithoutGuard[i] = c_tx_pilotLocationsWithoutGuard[i];
  }

  tx_dataSubcarrierIndexies_size[0] = 1;
  tx_dataSubcarrierIndexies_size[1] = 48;
  for (i0 = 0; i0 < 48; i0++) {
    b_tx_dataSubcarrierIndexies_dat[i0] = tx_dataSubcarrierIndexies_data[i0];
  }

  /*  Previous Message string holder */
  emlrtDimSizeGeqCheckFastR2012b(80, 0, &g_emlrtECI, emlrtRootTLSGlobal);
  previousMessage_size[0] = 1;
  previousMessage_size[1] = 0;
  for (run = 0; run < 100000000; run++) {
    /*  MAC */
    /*            %Objects */
    /*          %Structs */
    /*   %Values/Vectors */
    emlrtPushRtStackR2012b(&emlrtRSI, emlrtRootTLSGlobal);
    b_ObjSDRuReceiver = &ObjSDRuReceiver;
    b_ObjSDRuTransmitter = &ObjSDRuTransmitter;

    /*            %Objects */
    /*          %Structs */
    /*   %Values/Vectors */
    /*  This function is called when the node is just listening to the spectrum */
    /*  waiting for a message to be transmitted to them */
    /* % Listen to the spectrum */
    /*  previousMessage will be updated for next run */
    /*            %Objects */
    /*          %Structs */
    /*   %Values/Vectors */
    emlrtPushRtStackR2012b(&te_emlrtRSI, emlrtRootTLSGlobal);
    previousMessage_size_idx_1 = previousMessage_size[1];
    i = previousMessage_size[1];
    for (i0 = 0; i0 < i; i0++) {
      b_previousMessage_data[i0] = previousMessage_data[i0];
    }

    /*            %Objects */
    /*          %Structs */
    /*   %Values/Vectors */
    /* Initialize values */
    originNodeID = -1.0;
    destNodeID = -1.0;

    /*  0 = Call PHY Receiver */
    /*  1 = Timeout */
    /*  2 = Corrupt Message */
    /*  3 = Message Reception Successfull */
    /*  Duplicates are checked at the last stage */
    i = 0;

    /*  Initial state */
    timeouts = 0.0;

    /*  Counter */
    /*  Message string holder */
    emlrtDimSizeGeqCheckFastR2012b(80, 0, &e_emlrtECI, emlrtRootTLSGlobal);
    Response_size[0] = 1;
    Response_size[1] = 0;

    /*  Run system */
    do {
      exitg7 = 0;

      /*     %% Process Messages */
      guard1 = FALSE;
      switch (i) {
       case 0:
        /* Wait for message */
        if (timeouts > 4.0) {
          emlrtDimSizeGeqCheckFastR2012b(80, 7, &emlrtECI, emlrtRootTLSGlobal);
          Response_size[0] = 1;
          Response_size[1] = 7;
          for (i0 = 0; i0 < 7; i0++) {
            Response_data[i0] = b[i0];
          }

          exitg7 = 1;
        } else {
          /*  Call Physical Layer */
          /*            %Objects */
          /*          %Structs */
          /*   %Values/Vectors */
          emlrtPushRtStackR2012b(&ye_emlrtRSI, emlrtRootTLSGlobal);
          b_estimate = estimate;
          messageBits_size[0] = 3;
          messageBits_size[1] = 563;
          for (i0 = 0; i0 < 1689; i0++) {
            SD->f11.b_messageBits_data[i0] = SD->f11.messageBits_data[i0];
          }

          PHYReceive(SD, &ObjAGC, b_ObjSDRuReceiver, &ObjDetect,
                     &ObjPreambleDemod, &ObjDataDemod, &b_estimate,
                     b_tx_shortPreambleOFDM, b_tx_longPreamble, b_tx_pilots,
                     d_tx_pilotLocationsWithoutGuard,
                     b_tx_dataSubcarrierIndexies_dat,
                     tx_dataSubcarrierIndexies_size, SD->f11.b_messageBits_data,
                     messageBits_size, Response_data, Response_size);
          emlrtPopRtStackR2012b(&ye_emlrtRSI, emlrtRootTLSGlobal);

          /*  Choose next state */
          b_bool = FALSE;
          i = 0;
          do {
            exitg13 = 0;
            if (i < 2) {
              if (Response_size[i] != 1 + 6 * i) {
                exitg13 = 1;
              } else {
                i++;
              }
            } else {
              i = 0;
              exitg13 = 2;
            }
          } while (exitg13 == 0);

          if (exitg13 == 1) {
          } else {
            do {
              exitg12 = 0;
              if (i <= Response_size[1] - 1) {
                if (Response_data[i] != cv0[i]) {
                  exitg12 = 1;
                } else {
                  i++;
                }
              } else {
                b_bool = TRUE;
                exitg12 = 1;
              }
            } while (exitg12 == 0);
          }

          if (b_bool) {
            i = 1;
          } else {
            b_bool = FALSE;
            i = 0;
            do {
              exitg11 = 0;
              if (i < 2) {
                if (Response_size[i] != 1 + (i << 3)) {
                  exitg11 = 1;
                } else {
                  i++;
                }
              } else {
                i = 0;
                exitg11 = 2;
              }
            } while (exitg11 == 0);

            if (exitg11 == 1) {
            } else {
              do {
                exitg10 = 0;
                if (i <= Response_size[1] - 1) {
                  if (Response_data[i] != cv1[i]) {
                    exitg10 = 1;
                  } else {
                    i++;
                  }
                } else {
                  b_bool = TRUE;
                  exitg10 = 1;
                }
              } while (exitg10 == 0);
            }

            if (b_bool || (Response_size[1] == 0)) {
              i = 2;
            } else {
              /*  Successfully decoded */
              i = 3;
            }
          }

          /*  Timeout occured     */
          guard1 = TRUE;
        }
        break;

       case 1:
        timeouts++;
        if (timeouts > 4.0) {
          /* if DebugFlag;fprintf('DL| Max timeouts reached\n');end */
          emlrtDimSizeGeqCheckFastR2012b(80, 7, &b_emlrtECI, emlrtRootTLSGlobal);
          Response_size[0] = 1;
          Response_size[1] = 7;
          for (i0 = 0; i0 < 7; i0++) {
            Response_data[i0] = b[i0];
          }

          exitg7 = 1;
        } else {
          i = 0;

          /* Get another message */
          /*  Message corrupted     */
          guard1 = TRUE;
        }
        break;

       case 2:
        timeouts += 0.001;
        i = 0;

        /* Get another message */
        /*  Default: Message successfully received     */
        guard1 = TRUE;
        break;

       case 3:
        /* otherwise */
        /* disp(['DL| MSG: ',Response]) */
        /* disp(['DL| Timeouts: ',num2str(timeouts)]) */
        /*  Final Duplication check */
        b_bool = FALSE;
        i = 0;
        do {
          exitg9 = 0;
          if (i < 2) {
            if (previousMessage_size[i] != Response_size[i]) {
              exitg9 = 1;
            } else {
              i++;
            }
          } else {
            i = 0;
            exitg9 = 2;
          }
        } while (exitg9 == 0);

        if (exitg9 == 1) {
        } else {
          do {
            exitg8 = 0;
            if (i <= previousMessage_size[1] - 1) {
              if (previousMessage_data[i] != Response_data[i]) {
                exitg8 = 1;
              } else {
                i++;
              }
            } else {
              b_bool = TRUE;
              exitg8 = 1;
            }
          } while (exitg8 == 0);
        }

        if (b_bool) {
          /* Dupe */
          /* if DebugFlag;fprintf('DL| Duplicate Message\n');end */
          previousMessage_size_idx_1 = Response_size[1];
          i = Response_size[0] * Response_size[1];
          for (i0 = 0; i0 < i; i0++) {
            b_previousMessage_data[i0] = Response_data[i0];
          }

          /* Update history for next iteration */
          i0 = Response_size[1] - 2;
          originNodeID = (real_T)(uint8_T)
            Response_data[emlrtDynamicBoundsCheckFastR2012b(i0, 1,
            Response_size[1], &f_emlrtBCI, emlrtRootTLSGlobal) - 1] - 48.0;

          /* extract node ID and convert char to number */
          i0 = Response_size[1] - 1;
          destNodeID = (real_T)(uint8_T)
            Response_data[emlrtDynamicBoundsCheckFastR2012b(i0, 1,
            Response_size[1], &g_emlrtBCI, emlrtRootTLSGlobal) - 1] - 48.0;

          /* extract node ID and convert char to number */
          emlrtDimSizeGeqCheckFastR2012b(80, 9, &d_emlrtECI, emlrtRootTLSGlobal);
          Response_size[0] = 1;
          Response_size[1] = 9;
          for (i0 = 0; i0 < 9; i0++) {
            Response_data[i0] = b_b[i0];
          }

          /* Tell upper layers duplicate */
        } else {
          /* No Dupe */
          previousMessage_size_idx_1 = Response_size[1];
          i = Response_size[0] * Response_size[1];
          for (i0 = 0; i0 < i; i0++) {
            b_previousMessage_data[i0] = Response_data[i0];
          }

          /* Update history for next iteration */
          i0 = Response_size[1] - 2;
          originNodeID = (real_T)(uint8_T)
            Response_data[emlrtDynamicBoundsCheckFastR2012b(i0, 1,
            Response_size[1], &d_emlrtBCI, emlrtRootTLSGlobal) - 1] - 48.0;

          /* extract node ID and convert char to number */
          i0 = Response_size[1] - 1;
          destNodeID = (real_T)(uint8_T)
            Response_data[emlrtDynamicBoundsCheckFastR2012b(i0, 1,
            Response_size[1], &e_emlrtBCI, emlrtRootTLSGlobal) - 1] - 48.0;

          /* extract node ID and convert char to number */
          if (1 > Response_size[1] - 3) {
            i = 0;
          } else {
            emlrtDynamicBoundsCheckFastR2012b(1, 1, Response_size[1], &emlrtBCI,
              emlrtRootTLSGlobal);
            i0 = Response_size[1] - 3;
            i = emlrtDynamicBoundsCheckFastR2012b(i0, 1, Response_size[1],
              &emlrtBCI, emlrtRootTLSGlobal);
          }

          emlrtDimSizeGeqCheckFastR2012b(80, i, &c_emlrtECI, emlrtRootTLSGlobal);
          for (i0 = 0; i0 < i; i0++) {
            tmp_data[i0] = 1 + i0;
          }

          for (i0 = 0; i0 < i; i0++) {
            buffer = 0;
            while (buffer <= 0) {
              b_Response_data[i0] = Response_data[tmp_data[i0] - 1];
              buffer = 1;
            }
          }

          Response_size[0] = 1;
          Response_size[1] = i;
          for (i0 = 0; i0 < i; i0++) {
            Response_data[i0] = b_Response_data[i0];
          }

          /* Remove identifer key and nodeIDs */
        }

        exitg7 = 1;
        break;

       default:
        guard1 = TRUE;
        break;
      }

      if (guard1 == TRUE) {
        emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar,
          emlrtRootTLSGlobal);
      }
    } while (exitg7 == 0);

    /*  Final check */
    if ((muDoubleScalarAbs(destNodeID) > 3.0) || (destNodeID == 0.0)) {
      destNodeID = nodeNum;

      /*  Something went wrong, probably corrupt message, reset to self */
    }

    if ((muDoubleScalarAbs(originNodeID) > 3.0) || (originNodeID == 0.0)) {
      originNodeID = nodeNum;

      /*  Something went wrong, probably corrupt message, reset to self */
    }

    emlrtPopRtStackR2012b(&te_emlrtRSI, emlrtRootTLSGlobal);

    /* % Possible response messages */
    /*  1.) Timeout */
    /*  2.) Some message */
    b_bool = FALSE;
    i = 0;
    do {
      exitg6 = 0;
      if (i < 2) {
        if (Response_size[i] != 1 + 6 * i) {
          exitg6 = 1;
        } else {
          i++;
        }
      } else {
        i = 0;
        exitg6 = 2;
      }
    } while (exitg6 == 0);

    if (exitg6 == 1) {
    } else {
      do {
        exitg5 = 0;
        if (i <= Response_size[1] - 1) {
          if (Response_data[i] != cv0[i]) {
            exitg5 = 1;
          } else {
            i++;
          }
        } else {
          b_bool = TRUE;
          exitg5 = 1;
        }
      } while (exitg5 == 0);
    }

    b_guard1 = FALSE;
    if (!b_bool) {
      b_bool = FALSE;
      i = 0;
      do {
        exitg4 = 0;
        if (i < 2) {
          if (Response_size[i] != 1 + (i << 3)) {
            exitg4 = 1;
          } else {
            i++;
          }
        } else {
          i = 0;
          exitg4 = 2;
        }
      } while (exitg4 == 0);

      if (exitg4 == 1) {
      } else {
        do {
          exitg3 = 0;
          if (i <= Response_size[1] - 1) {
            if (Response_data[i] != cv2[i]) {
              exitg3 = 1;
            } else {
              i++;
            }
          } else {
            b_bool = TRUE;
            exitg3 = 1;
          }
        } while (exitg3 == 0);
      }

      if (!b_bool) {
        /* fprintf('###########################################\n'); */
        /* fprintf('MAC| Got message: %s\n',Response); */
        /* fprintf('MAC| From Node: %d\n',int16(originNodeID)); */
        /*  Send ACK */
        /* fprintf('Transmitting to node: %d, with offset: %f\n',int16(originNodeID),tx.offsetTable(originNodeID)); */
        emlrtPushRtStackR2012b(&ue_emlrtRSI, emlrtRootTLSGlobal);
        i0 = (int32_T)emlrtIntegerCheckFastR2012b(originNodeID, &b_emlrtDCI,
          emlrtRootTLSGlobal);
        emlrtDynamicBoundsCheckFastR2012b(i0, 1, 3, &c_emlrtBCI,
          emlrtRootTLSGlobal);
        emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
        b_ObjSDRuTransmitter->CenterFrequency = 2.24E+9 + offsets[(int32_T)
          originNodeID - 1];
        emlrtPushRtStackR2012b(&ld_emlrtRSI, emlrtRootTLSGlobal);
        emlrtPopRtStackR2012b(&ld_emlrtRSI, emlrtRootTLSGlobal);
        emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
        if (b_ObjSDRuTransmitter->isInitialized &&
            (!b_ObjSDRuTransmitter->isReleased)) {
          b_bool = TRUE;
        } else {
          b_bool = FALSE;
        }

        if (b_bool) {
          b_ObjSDRuTransmitter->TunablePropsChanged = TRUE;
          b_ObjSDRuTransmitter->tunablePropertyChanged[1] = TRUE;
        }

        emlrtPopRtStackR2012b(&ue_emlrtRSI, emlrtRootTLSGlobal);

        /*  Adjust offset for node        */
        emlrtPushRtStackR2012b(&ve_emlrtRSI, emlrtRootTLSGlobal);
        PHYTransmit(SD, b_ObjSDRuTransmitter, b_ObjSDRuReceiver, originNodeID,
                    destNodeID);
        emlrtPopRtStackR2012b(&ve_emlrtRSI, emlrtRootTLSGlobal);
      } else {
        b_guard1 = TRUE;
      }
    } else {
      b_guard1 = TRUE;
    }

    if (b_guard1 == TRUE) {
      b_bool = FALSE;
      i = 0;
      do {
        exitg2 = 0;
        if (i < 2) {
          if (Response_size[i] != 1 + (i << 3)) {
            exitg2 = 1;
          } else {
            i++;
          }
        } else {
          i = 0;
          exitg2 = 2;
        }
      } while (exitg2 == 0);

      if (exitg2 == 1) {
      } else {
        do {
          exitg1 = 0;
          if (i <= Response_size[1] - 1) {
            if (Response_data[i] != cv2[i]) {
              exitg1 = 1;
            } else {
              i++;
            }
          } else {
            b_bool = TRUE;
            exitg1 = 1;
          }
        } while (exitg1 == 0);
      }

      if (b_bool) {
        /*     %% Send ACK */
        /* fprintf('Transmitting to node: %d, with offset: %f\n',int16(originNodeID),tx.offsetTable(originNodeID)); */
        emlrtPushRtStackR2012b(&we_emlrtRSI, emlrtRootTLSGlobal);
        i0 = (int32_T)emlrtIntegerCheckFastR2012b(originNodeID, &emlrtDCI,
          emlrtRootTLSGlobal);
        emlrtDynamicBoundsCheckFastR2012b(i0, 1, 3, &b_emlrtBCI,
          emlrtRootTLSGlobal);
        emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
        b_ObjSDRuTransmitter->CenterFrequency = 2.24E+9 + offsets[(int32_T)
          originNodeID - 1];
        emlrtPushRtStackR2012b(&ld_emlrtRSI, emlrtRootTLSGlobal);
        emlrtPopRtStackR2012b(&ld_emlrtRSI, emlrtRootTLSGlobal);
        emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
        if (b_ObjSDRuTransmitter->isInitialized &&
            (!b_ObjSDRuTransmitter->isReleased)) {
          b_bool = TRUE;
        } else {
          b_bool = FALSE;
        }

        if (b_bool) {
          b_ObjSDRuTransmitter->TunablePropsChanged = TRUE;
          b_ObjSDRuTransmitter->tunablePropertyChanged[1] = TRUE;
        }

        emlrtPopRtStackR2012b(&we_emlrtRSI, emlrtRootTLSGlobal);

        /*  Adjust offset for node */
        emlrtPushRtStackR2012b(&xe_emlrtRSI, emlrtRootTLSGlobal);
        PHYTransmit(SD, b_ObjSDRuTransmitter, b_ObjSDRuReceiver, originNodeID,
                    destNodeID);
        emlrtPopRtStackR2012b(&xe_emlrtRSI, emlrtRootTLSGlobal);
      }
    }

    emlrtPopRtStackR2012b(&emlrtRSI, emlrtRootTLSGlobal);
    emlrtDimSizeGeqCheckFastR2012b(80, previousMessage_size_idx_1, &f_emlrtECI,
      emlrtRootTLSGlobal);
    previousMessage_size[0] = 1;
    previousMessage_size[1] = previousMessage_size_idx_1;
    i = previousMessage_size_idx_1;
    for (i0 = 0; i0 < i; i0++) {
      previousMessage_data[i0] = b_previousMessage_data[i0];
    }

    /* Wait some time */
    /*  Calculated in seconds buts thats far from realistic  */
    emlrtPushRtStackR2012b(&b_emlrtRSI, emlrtRootTLSGlobal);
    b_ObjSDRuReceiver = &ObjSDRuReceiver;

    /*  Do nothing aka waste time */
    /*  Calculate how many buffer needed to step through to wait */
    /*  desired time */
    for (buffer = 0; buffer < 49; buffer++) {
      emlrtPushRtStackR2012b(&nk_emlrtRSI, emlrtRootTLSGlobal);
      if (!b_ObjSDRuReceiver->isReleased) {
      } else {
        emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
        y = NULL;
        m0 = mxCreateCharArray(2, iv0);
        for (i = 0; i < 45; i++) {
          cv3[i] = cv4[i];
        }

        emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 45, m0, cv3);
        emlrtAssign(&y, m0);
        b_y = NULL;
        m0 = mxCreateCharArray(2, iv1);
        for (i = 0; i < 4; i++) {
          cv5[i] = cv6[i];
        }

        emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 4, m0, cv5);
        emlrtAssign(&b_y, m0);
        c_error(message(y, b_y, &b_emlrtMCI), &b_emlrtMCI);
        emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
      }

      if (!b_ObjSDRuReceiver->isInitialized) {
        emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
        if (!b_ObjSDRuReceiver->isInitialized) {
        } else {
          emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
          c_y = NULL;
          m0 = mxCreateCharArray(2, iv2);
          for (i = 0; i < 51; i++) {
            cv7[i] = cv8[i];
          }

          emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 51, m0, cv7);
          emlrtAssign(&c_y, m0);
          d_y = NULL;
          m0 = mxCreateCharArray(2, iv3);
          for (i = 0; i < 5; i++) {
            cv9[i] = cv10[i];
          }

          emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 5, m0, cv9);
          emlrtAssign(&d_y, m0);
          c_error(message(c_y, d_y, &b_emlrtMCI), &b_emlrtMCI);
          emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
        }

        emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
        b_ObjSDRuReceiver->isInitialized = TRUE;
        emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
        emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
        emlrtPushRtStackR2012b(&ld_emlrtRSI, emlrtRootTLSGlobal);
        SDRuReceiver_setupImplLocal(b_ObjSDRuReceiver, &deviceStatus,
          errMsg_data, errMsg_size);
        emlrtPopRtStackR2012b(&ld_emlrtRSI, emlrtRootTLSGlobal);
        emlrtPushRtStackR2012b(&ld_emlrtRSI, emlrtRootTLSGlobal);

        /* reportSDRuStatus SDRu status reporter */
        /*    reportSDRuStatus(STATUS,MSG,IP,METHOD) reports the SDRu status based on */
        /*    the STATUS input. STATUS is a UsrpErrorCapiEnumT type. IP is the IP */
        /*    address of the USRP(R) radio. METHOD is a UsrpReportMethodEnumT type and */
        /*    can be Warning, Error , or None. */
        /*  */
        /*    USRP(R) is a trademark of National Instruments Corp. */
        /*    Copyright 2012 The MathWorks, Inc. */
        switch (deviceStatus) {
         case UsrpDriverNotCompatible:
          emlrtPushRtStackR2012b(&xf_emlrtRSI, emlrtRootTLSGlobal);
          if (!(deviceStatus == UsrpDriverNotCompatible)) {
          } else {
            emlrtPushRtStackR2012b(&rc_emlrtRSI, emlrtRootTLSGlobal);
            e_y = NULL;
            m0 = mxCreateCharArray(2, iv4);
            for (i = 0; i < 35; i++) {
              cv11[i] = cv12[i];
            }

            emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 35, m0, cv11);
            emlrtAssign(&e_y, m0);
            f_y = NULL;
            m0 = mxCreateCharArray(2, iv5);
            for (i = 0; i < 12; i++) {
              cv13[i] = cv14[i];
            }

            emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 12, m0, cv13);
            emlrtAssign(&f_y, m0);
            g_y = NULL;
            m0 = mxCreateCharArray(2, iv6);
            for (i = 0; i < 43; i++) {
              cv15[i] = cv16[i];
            }

            emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 43, m0, cv15);
            emlrtAssign(&g_y, m0);
            c_error(c_message(e_y, f_y, g_y, &h_emlrtMCI), &h_emlrtMCI);
            emlrtPopRtStackR2012b(&rc_emlrtRSI, emlrtRootTLSGlobal);
          }

          emlrtPopRtStackR2012b(&xf_emlrtRSI, emlrtRootTLSGlobal);
          break;

         case UsrpDriverNotResponding:
          emlrtPushRtStackR2012b(&vf_emlrtRSI, emlrtRootTLSGlobal);
          if (!(deviceStatus == UsrpDriverNotResponding)) {
          } else {
            emlrtPushRtStackR2012b(&rc_emlrtRSI, emlrtRootTLSGlobal);
            h_y = NULL;
            m0 = mxCreateCharArray(2, iv7);
            for (i = 0; i < 35; i++) {
              cv11[i] = cv17[i];
            }

            emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 35, m0, cv11);
            emlrtAssign(&h_y, m0);
            i_y = NULL;
            m0 = mxCreateCharArray(2, iv8);
            for (i = 0; i < 12; i++) {
              cv13[i] = cv14[i];
            }

            emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 12, m0, cv13);
            emlrtAssign(&i_y, m0);
            c_error(message(h_y, i_y, &h_emlrtMCI), &h_emlrtMCI);
            emlrtPopRtStackR2012b(&rc_emlrtRSI, emlrtRootTLSGlobal);
          }

          emlrtPopRtStackR2012b(&vf_emlrtRSI, emlrtRootTLSGlobal);
          break;

         case UsrpDriverBusy:
          emlrtPushRtStackR2012b(&tf_emlrtRSI, emlrtRootTLSGlobal);
          if (!(deviceStatus == UsrpDriverBusy)) {
          } else {
            emlrtPushRtStackR2012b(&rc_emlrtRSI, emlrtRootTLSGlobal);
            j_y = NULL;
            m0 = mxCreateCharArray(2, iv9);
            for (i = 0; i < 26; i++) {
              cv18[i] = cv19[i];
            }

            emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 26, m0, cv18);
            emlrtAssign(&j_y, m0);
            k_y = NULL;
            m0 = mxCreateCharArray(2, iv10);
            for (i = 0; i < 12; i++) {
              cv13[i] = cv14[i];
            }

            emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 12, m0, cv13);
            emlrtAssign(&k_y, m0);
            c_error(message(j_y, k_y, &h_emlrtMCI), &h_emlrtMCI);
            emlrtPopRtStackR2012b(&rc_emlrtRSI, emlrtRootTLSGlobal);
          }

          emlrtPopRtStackR2012b(&tf_emlrtRSI, emlrtRootTLSGlobal);
          break;

         case UsrpDriverError:
          emlrtPushRtStackR2012b(&rf_emlrtRSI, emlrtRootTLSGlobal);
          if (!(deviceStatus == UsrpDriverError)) {
          } else {
            emlrtPushRtStackR2012b(&rc_emlrtRSI, emlrtRootTLSGlobal);
            l_y = NULL;
            m0 = mxCreateCharArray(2, iv11);
            for (i = 0; i < 35; i++) {
              cv11[i] = cv20[i];
            }

            emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 35, m0, cv11);
            emlrtAssign(&l_y, m0);
            c_error(b_message(l_y, &h_emlrtMCI), &h_emlrtMCI);
            emlrtPopRtStackR2012b(&rc_emlrtRSI, emlrtRootTLSGlobal);
          }

          emlrtPopRtStackR2012b(&rf_emlrtRSI, emlrtRootTLSGlobal);
          break;
        }

        emlrtPopRtStackR2012b(&ld_emlrtRSI, emlrtRootTLSGlobal);
        if (deviceStatus == UsrpDriverSuccess) {
          emlrtPushRtStackR2012b(&ld_emlrtRSI, emlrtRootTLSGlobal);
          emlrtPopRtStackR2012b(&ld_emlrtRSI, emlrtRootTLSGlobal);
        } else {
          emlrtPushRtStackR2012b(&ld_emlrtRSI, emlrtRootTLSGlobal);
          emlrtPopRtStackR2012b(&ld_emlrtRSI, emlrtRootTLSGlobal);
        }

        emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
        emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
        b_ObjSDRuReceiver->TunablePropsChanged = FALSE;
        emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
        emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
      }

      emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
      if (b_ObjSDRuReceiver->TunablePropsChanged) {
        emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
        b_ObjSDRuReceiver->TunablePropsChanged = FALSE;
        emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
        emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
        for (i = 0; i < 4; i++) {
          for (i0 = 0; i0 < 4; i0++) {
            value[i0] = b_ObjSDRuReceiver->tunablePropertyChanged[i0];
          }

          value[i] = FALSE;
          emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
          for (i0 = 0; i0 < 4; i0++) {
            b_ObjSDRuReceiver->tunablePropertyChanged[i0] = value[i0];
          }

          emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
        }

        emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
      }

      emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
      b_SDRuReceiver_stepImpl(SD, b_ObjSDRuReceiver);
      emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPopRtStackR2012b(&nk_emlrtRSI, emlrtRootTLSGlobal);
      emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, emlrtRootTLSGlobal);
    }

    emlrtPopRtStackR2012b(&b_emlrtRSI, emlrtRootTLSGlobal);
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, emlrtRootTLSGlobal);
  }

  emxFreeStruct_OFDMDemodulator(&ObjPreambleDemod);
  emxFreeStruct_OFDMDemodulator(&ObjDataDemod);
  emlrtHeapReferenceStackLeaveFcnR2012b(emlrtRootTLSGlobal);
}

/* End of code generation (testMACReceiver.c) */
