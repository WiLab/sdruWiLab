/*
 * testMACReceiver.c
 *
 * Code generation for function 'testMACReceiver'
 *
 * C source code generated on: Thu Mar  6 18:47:04 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testMACReceiver.h"
#include "initializeOFDMSyncMemory_sdr.h"
#include "AGC.h"
#include "CRCDetector.h"
#include "testMACReceiver_emxutil.h"
#include "PHYReceive.h"
#include "PHYTransmit.h"
#include "fprintf.h"
#include "SDRuReceiver.h"
#include "generateOFDMSignal.h"
#include "SDRuTransmitter.h"
#include "generateOFDMSignal_TX2.h"
#include "testMACReceiver_data.h"
#include <stdio.h>

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 30, "testMACReceiver",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/testMACReceiver.m" };

static emlrtRSInfo b_emlrtRSI = { 5, "testMACReceiver",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/testMACReceiver.m" };

static emlrtRSInfo c_emlrtRSI = { 18, "CreateTXRX_2",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/CreateTXRX_2.m" };

static emlrtRSInfo d_emlrtRSI = { 40, "CreateTXRX_2",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/CreateTXRX_2.m" };

static emlrtRSInfo e_emlrtRSI = { 43, "CreateTXRX_2",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/CreateTXRX_2.m" };

static emlrtRSInfo f_emlrtRSI = { 46, "CreateTXRX_2",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/CreateTXRX_2.m" };

static emlrtRSInfo g_emlrtRSI = { 54, "CreateTXRX_2",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/CreateTXRX_2.m" };

static emlrtRSInfo h_emlrtRSI = { 11, "CreateTXRX_2",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/CreateTXRX_2.m" };

static emlrtRSInfo i_emlrtRSI = { 25, "CreateTXRX_2",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/CreateTXRX_2.m" };

static emlrtRSInfo pl_emlrtRSI = { 21, "MACLayerReceiver",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/MACLayerReceiver.m" };

static emlrtRSInfo ql_emlrtRSI = { 39, "MACLayerReceiver",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/MACLayerReceiver.m" };

static emlrtRSInfo rl_emlrtRSI = { 41, "MACLayerReceiver",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/MACLayerReceiver.m" };

static emlrtRSInfo sl_emlrtRSI = { 42, "MACLayerReceiver",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/MACLayerReceiver.m" };

static emlrtRSInfo tl_emlrtRSI = { 45, "MACLayerReceiver",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/MACLayerReceiver.m" };

static emlrtRSInfo ul_emlrtRSI = { 47, "MACLayerReceiver",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/MACLayerReceiver.m" };

static emlrtRSInfo vl_emlrtRSI = { 48, "MACLayerReceiver",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/MACLayerReceiver.m" };

static emlrtRSInfo wl_emlrtRSI = { 49, "MACLayerReceiver",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/MACLayerReceiver.m" };

static emlrtRSInfo xl_emlrtRSI = { 59, "MACLayerReceiver",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/MACLayerReceiver.m" };

static emlrtRSInfo yl_emlrtRSI = { 61, "MACLayerReceiver",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/MACLayerReceiver.m" };

static emlrtRSInfo am_emlrtRSI = { 63, "MACLayerReceiver",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/MACLayerReceiver.m" };

static emlrtRSInfo bm_emlrtRSI = { 64, "MACLayerReceiver",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/MACLayerReceiver.m" };

static emlrtRSInfo cm_emlrtRSI = { 65, "MACLayerReceiver",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/MACLayerReceiver.m" };

static emlrtRSInfo dm_emlrtRSI = { 94, "DLLayer",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/DLLayer.m" };

static emlrtRSInfo em_emlrtRSI = { 96, "DLLayer",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/DLLayer.m" };

static emlrtRSInfo fm_emlrtRSI = { 83, "DLLayer",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/DLLayer.m" };

static emlrtRSInfo gm_emlrtRSI = { 71, "DLLayer",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/DLLayer.m" };

static emlrtRSInfo hm_emlrtRSI = { 75, "DLLayer",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/DLLayer.m" };

static emlrtRSInfo im_emlrtRSI = { 41, "DLLayer",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/DLLayer.m" };

static emlrtRSInfo jm_emlrtRSI = { 47, "DLLayer",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/DLLayer.m" };

static emlrtRSInfo km_emlrtRSI = { 60, "DLLayer",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/DLLayer.m" };

static emlrtRSInfo lm_emlrtRSI = { 61, "DLLayer",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/DLLayer.m" };

static emlrtRSInfo mm_emlrtRSI = { 63, "DLLayer",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/DLLayer.m" };

static emlrtRSInfo nm_emlrtRSI = { 115, "DLLayer",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/DLLayer.m" };

static emlrtRTEInfo b_emlrtRTEI = { 11, 5, "testMACReceiver",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/testMACReceiver.m" };

static emlrtRTEInfo c_emlrtRTEI = { 10, 5, "testMACReceiver",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/testMACReceiver.m" };

static emlrtECInfo emlrtECI = { 2, 25, 1, "testMACReceiver",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/testMACReceiver.m" };

static emlrtECInfo b_emlrtECI = { 2, 30, 9, "testMACReceiver",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/testMACReceiver.m" };

static emlrtECInfo c_emlrtECI = { 2, 31, 1, "DLLayer",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/DLLayer.m" };

static emlrtECInfo d_emlrtECI = { 2, 100, 17, "DLLayer",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/DLLayer.m" };

static emlrtBCInfo emlrtBCI = { -1, -1, 105, 28, "Response", "DLLayer",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/DLLayer.m", 0 };

static emlrtECInfo e_emlrtECI = { 2, 105, 17, "DLLayer",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/DLLayer.m" };

static emlrtECInfo f_emlrtECI = { 2, 76, 17, "DLLayer",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/DLLayer.m" };

static emlrtECInfo g_emlrtECI = { 2, 42, 17, "DLLayer",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/DLLayer.m" };

static emlrtBCInfo b_emlrtBCI = { -1, -1, 60, 55, "Response", "DLLayer",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/DLLayer.m", 0 };

static emlrtBCInfo c_emlrtBCI = { -1, -1, 103, 39, "Response", "DLLayer",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/DLLayer.m", 0 };

static emlrtBCInfo d_emlrtBCI = { -1, -1, 104, 37, "Response", "DLLayer",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/DLLayer.m", 0 };

static emlrtBCInfo e_emlrtBCI = { -1, -1, 98, 39, "Response", "DLLayer",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/DLLayer.m", 0 };

static emlrtBCInfo f_emlrtBCI = { -1, -1, 99, 37, "Response", "DLLayer",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/DLLayer.m", 0 };

static emlrtBCInfo g_emlrtBCI = { 1, 3, 63, 79, "tx.offsetTable",
  "MACLayerReceiver",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/MACLayerReceiver.m", 0 };

static emlrtBCInfo h_emlrtBCI = { 1, 3, 47, 83, "tx.offsetTable",
  "MACLayerReceiver",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/MACLayerReceiver.m", 0 };

/* Function Definitions */
void testMACReceiver(testMACReceiverStackData *SD, const emlrtStack *sp, const
                     real_T offsets[3], real_T nodeNum)
{
  OFDMDemodulator_1 ObjDataDemod;
  OFDMDemodulator_1 ObjPreambleDemod;
  OFDMDemodulator_2 *unusedU1;
  OFDMDemodulator_3 *unusedU0;
  OFDMDemodulator_3 b_unusedU0;
  OFDMDemodulator_2 b_unusedU1;
  creal_T tx_shortPreambleOFDM[64];
  int32_T i;
  real_T tx_longPreamble[53];
  real_T tx_pilots[48];
  real_T c_tx_pilotLocationsWithoutGuard[4];
  real_T tx_dataSubcarrierIndexies_data[48];
  comm_SDRuTransmitter ObjSDRuTransmitter;
  OFDMDemodulator_1 *b_ObjDataDemod;
  OFDMDemodulator_1 *b_ObjPreambleDemod;
  c_struct_T estimate;
  comm_AGC ObjAGC;
  comm_SDRuReceiver ObjSDRuReceiver;
  commcodegen_CRCDetector ObjDetect;
  real_T messageBits_data[563];
  creal_T b_tx_shortPreambleOFDM[64];
  real_T b_tx_longPreamble[53];
  real_T b_tx_pilots[48];
  real_T d_tx_pilotLocationsWithoutGuard[4];
  int32_T tx_dataSubcarrierIndexies_size[2];
  real_T b_tx_dataSubcarrierIndexies_dat[48];
  int32_T previousMessage_size[2];
  int32_T run;
  comm_AGC *b_ObjAGC;
  comm_SDRuReceiver *b_ObjSDRuReceiver;
  comm_SDRuTransmitter *b_ObjSDRuTransmitter;
  commcodegen_CRCDetector *b_ObjDetect;
  OFDMDemodulator_1 *c_ObjPreambleDemod;
  OFDMDemodulator_1 *c_ObjDataDemod;
  int32_T previousMessage_size_idx_1;
  int32_T loop_ub;
  char_T previousMessage_data[80];
  char_T b_previousMessage_data[77];
  int32_T originNodeID;
  real_T destNodeID;
  real_T timeouts;
  int32_T Response_size[2];
  int32_T exitg7;
  boolean_T guard1 = FALSE;
  static const char_T b[7] = { 'T', 'i', 'm', 'e', 'o', 'u', 't' };

  char_T Response_data[80];
  c_struct_T b_estimate;
  real_T b_messageBits_data[563];
  int32_T messageBits_size[2];
  char_T b_Response_data[76];
  int32_T b_Response_size[2];
  boolean_T b_bool;
  int8_T sza[2];
  int32_T exitg13;
  int32_T exitg12;
  static const char_T cv0[7] = { 'T', 'i', 'm', 'e', 'o', 'u', 't' };

  int32_T exitg11;
  int32_T exitg10;
  static const char_T cv1[9] = { 'C', 'R', 'C', ' ', 'E', 'r', 'r', 'o', 'r' };

  int8_T szb[2];
  int32_T exitg9;
  int32_T exitg8;
  static const char_T b_b[9] = { 'D', 'u', 'p', 'l', 'i', 'c', 'a', 't', 'e' };

  char_T c_Response_data[80];
  int32_T exitg6;
  int32_T exitg5;
  boolean_T b_guard1 = FALSE;
  int32_T exitg4;
  int32_T exitg3;
  static const char_T cv2[9] = { 'D', 'u', 'p', 'l', 'i', 'c', 'a', 't', 'e' };

  int32_T exitg2;
  int32_T exitg1;
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
  emxInitStruct_OFDMDemodulator_1(sp, &ObjDataDemod, &b_emlrtRTEI, TRUE);
  emxInitStruct_OFDMDemodulator_1(sp, &ObjPreambleDemod, &c_emlrtRTEI, TRUE);

  /*  Create needed objects and structs */
  /*            %Objects */
  /*          %Structs */
  /*   %Values/Vectors */
  st.site = &b_emlrtRSI;

  /*  System parameters to adjust because of hardware limitation */
  /*  Frames to capture */
  b_st.site = &h_emlrtRSI;
  generateOFDMSignal_TX2(&b_st, &b_unusedU1, &b_unusedU0, &unusedU0, &unusedU1,
    SD->f9.unusedU2, &SD->f9.tx);
  for (i = 0; i < 64; i++) {
    tx_shortPreambleOFDM[i] = SD->f9.tx.shortPreambleOFDM[i];
  }

  for (i = 0; i < 53; i++) {
    tx_longPreamble[i] = SD->f9.tx.longPreamble[i];
  }

  for (i = 0; i < 48; i++) {
    tx_pilots[i] = SD->f9.tx.pilots[i];
  }

  for (i = 0; i < 4; i++) {
    c_tx_pilotLocationsWithoutGuard[i] =
      SD->f9.tx.pilotLocationsWithoutGuardbands[i];
  }

  for (i = 0; i < 48; i++) {
    tx_dataSubcarrierIndexies_data[i] = SD->f9.tx.dataSubcarrierIndexies.data[i];
  }

  /*  Set desired frequeny */
  /*  Set frequency bin width */
  /*  Setup transmitter */
  b_st.site = &c_emlrtRSI;
  SDRuTransmitter_SDRuTransmitter(&b_st, &ObjSDRuTransmitter);

  /*  Setup Parameters */
  b_st.site = &i_emlrtRSI;
  generateOFDMSignal(&b_st, &ObjDataDemod, &ObjPreambleDemod,
                     &b_ObjPreambleDemod, &b_ObjDataDemod, SD->f9.unusedU3,
                     &SD->f9.rx);

  /* _TX2('HelloShannon'); */
  /* ceil( rx.frameLength*4 ); %Size of Buffer of sliding window */
  /* offsetCompensationValue = -77148;% Get from calibration */
  /* offsetCompensationValue = 71289;% Get from calibration */
  /*  Sync Algorithms */
  /* Number of frequency estimates to be averaged together for frequency corrections (Higher==More stability, Lower==More responsiveness) */
  /* Create memory structure to collect measurements for sync algorithms */
  b_st.site = &d_emlrtRSI;
  initializeOFDMSyncMemory_sdr(&estimate);

  /*  Gain control */
  b_st.site = &e_emlrtRSI;
  AGC_AGC(&ObjAGC);

  /*  Value must be constant, equal to rx.receiveBufferLength */
  /*  USRP */
  b_st.site = &f_emlrtRSI;
  SDRuReceiver_SDRuReceiver(&b_st, &ObjSDRuReceiver);

  /*  CRC */
  b_st.site = &g_emlrtRSI;
  CRCDetector_CRCDetector(&ObjDetect);

  /*  Timeout info */
  /*  Soft decisions */
  memset(&messageBits_data[0], 0, 563U * sizeof(real_T));

  /* 3 for CRC */
  memcpy(&b_tx_shortPreambleOFDM[0], &tx_shortPreambleOFDM[0], sizeof(creal_T) <<
         6);
  memcpy(&b_tx_longPreamble[0], &tx_longPreamble[0], 53U * sizeof(real_T));
  memcpy(&b_tx_pilots[0], &tx_pilots[0], 48U * sizeof(real_T));
  for (i = 0; i < 4; i++) {
    d_tx_pilotLocationsWithoutGuard[i] = c_tx_pilotLocationsWithoutGuard[i];
  }

  tx_dataSubcarrierIndexies_size[0] = 1;
  tx_dataSubcarrierIndexies_size[1] = 48;
  memcpy(&b_tx_dataSubcarrierIndexies_dat[0], &tx_dataSubcarrierIndexies_data[0],
         48U * sizeof(real_T));

  /*  Previous Message string holder */
  emlrtDimSizeGeqCheckFastR2012b(80, 0, &emlrtECI, sp);
  previousMessage_size[0] = 1;
  previousMessage_size[1] = 0;
  for (run = 0; run < 100000000; run++) {
    /* MAC */
    /*            %Objects */
    /*          %Structs */
    /*   %Values/Vectors */
    st.site = &emlrtRSI;
    b_ObjAGC = &ObjAGC;
    b_ObjSDRuReceiver = &ObjSDRuReceiver;
    b_ObjSDRuTransmitter = &ObjSDRuTransmitter;
    b_ObjDetect = &ObjDetect;
    c_ObjPreambleDemod = &ObjPreambleDemod;
    c_ObjDataDemod = &ObjDataDemod;

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
    b_st.site = &pl_emlrtRSI;
    previousMessage_size_idx_1 = previousMessage_size[1];
    loop_ub = previousMessage_size[1];
    for (i = 0; i < loop_ub; i++) {
      b_previousMessage_data[i] = previousMessage_data[i];
    }

    /*            %Objects */
    /*          %Structs */
    /*   %Values/Vectors */
    originNodeID = -1;

    /* Initialize */
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
    emlrtDimSizeGeqCheckFastR2012b(80, 0, &c_emlrtECI, &b_st);
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
        if (timeouts > 10.0) {
          c_st.site = &im_emlrtRSI;
          h_fprintf(&c_st);
          emlrtDimSizeGeqCheckFastR2012b(80, 7, &g_emlrtECI, &b_st);
          Response_size[0] = 1;
          Response_size[1] = 7;
          for (i = 0; i < 7; i++) {
            Response_data[i] = b[i];
          }

          exitg7 = 1;
        } else {
          /*  Call Physical Layer */
          /*            %Objects */
          /*          %Structs */
          /*   %Values/Vectors */
          b_estimate = estimate;
          messageBits_size[0] = 1;
          messageBits_size[1] = 563;
          memcpy(&b_messageBits_data[0], &messageBits_data[0], 563U * sizeof
                 (real_T));
          c_st.site = &jm_emlrtRSI;
          PHYReceive(SD, &c_st, b_ObjAGC, b_ObjSDRuReceiver, b_ObjDetect,
                     c_ObjPreambleDemod, c_ObjDataDemod, &b_estimate,
                     b_tx_shortPreambleOFDM, b_tx_longPreamble, b_tx_pilots,
                     d_tx_pilotLocationsWithoutGuard,
                     b_tx_dataSubcarrierIndexies_dat,
                     tx_dataSubcarrierIndexies_size, b_messageBits_data,
                     messageBits_size, Response_data, Response_size);

          /*  Choose next state */
          if (1 > Response_size[1] - 1) {
            loop_ub = 0;
          } else {
            emlrtDynamicBoundsCheckFastR2012b(1, 1, Response_size[1],
              &b_emlrtBCI, &b_st);
            i = Response_size[1] - 1;
            loop_ub = emlrtDynamicBoundsCheckFastR2012b(i, 1, Response_size[1],
              &b_emlrtBCI, &b_st);
          }

          b_Response_size[0] = 1;
          b_Response_size[1] = loop_ub;
          for (i = 0; i < loop_ub; i++) {
            b_Response_data[i] = Response_data[i];
          }

          c_st.site = &km_emlrtRSI;
          j_fprintf(&c_st, b_Response_data, b_Response_size);
          c_st.site = &lm_emlrtRSI;
          b_bool = FALSE;
          for (i = 0; i < 2; i++) {
            sza[i] = (int8_T)Response_size[i];
          }

          i = 0;
          do {
            exitg13 = 0;
            if (i < 2) {
              if (sza[i] != 1 + 6 * i) {
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
            c_st.site = &mm_emlrtRSI;
            b_bool = FALSE;
            for (i = 0; i < 2; i++) {
              sza[i] = (int8_T)Response_size[i];
            }

            i = 0;
            do {
              exitg11 = 0;
              if (i < 2) {
                if (sza[i] != 1 + (i << 3)) {
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
        c_st.site = &gm_emlrtRSI;
        f_fprintf(&c_st);
        timeouts++;
        if (timeouts > 10.0) {
          /* if DebugFlag;fprintf('DL| Max timeouts reached\n');end */
          c_st.site = &hm_emlrtRSI;
          h_fprintf(&c_st);
          emlrtDimSizeGeqCheckFastR2012b(80, 7, &f_emlrtECI, &b_st);
          Response_size[0] = 1;
          Response_size[1] = 7;
          for (i = 0; i < 7; i++) {
            Response_data[i] = b[i];
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
        c_st.site = &fm_emlrtRSI;
        d_fprintf(&c_st);
        timeouts += 0.01;
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
        c_st.site = &dm_emlrtRSI;
        b_bool = FALSE;
        for (i = 0; i < 2; i++) {
          sza[i] = (int8_T)previousMessage_size[i];
          szb[i] = (int8_T)Response_size[i];
        }

        i = 0;
        do {
          exitg9 = 0;
          if (i < 2) {
            if (sza[i] != szb[i]) {
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
          c_st.site = &em_emlrtRSI;
          b_fprintf(&c_st);
          previousMessage_size_idx_1 = Response_size[1];
          loop_ub = Response_size[0] * Response_size[1];
          for (i = 0; i < loop_ub; i++) {
            b_previousMessage_data[i] = Response_data[i];
          }

          /* Update history for next iteration */
          i = Response_size[1] - 2;
          originNodeID = (uint8_T)
            Response_data[emlrtDynamicBoundsCheckFastR2012b(i, 1, Response_size
            [1], &e_emlrtBCI, &b_st) - 1] - 48;

          /* extract node ID and convert char to number */
          i = Response_size[1] - 1;
          destNodeID = (real_T)(uint8_T)
            Response_data[emlrtDynamicBoundsCheckFastR2012b(i, 1, Response_size
            [1], &f_emlrtBCI, &b_st) - 1] - 48.0;

          /* extract node ID and convert char to number */
          emlrtDimSizeGeqCheckFastR2012b(80, 9, &d_emlrtECI, &b_st);
          Response_size[0] = 1;
          Response_size[1] = 9;
          for (i = 0; i < 9; i++) {
            Response_data[i] = b_b[i];
          }

          /* Tell upper layers duplicate */
        } else {
          /* No Dupe */
          previousMessage_size_idx_1 = Response_size[1];
          loop_ub = Response_size[0] * Response_size[1];
          for (i = 0; i < loop_ub; i++) {
            b_previousMessage_data[i] = Response_data[i];
          }

          /* Update history for next iteration */
          i = Response_size[1] - 2;
          originNodeID = (uint8_T)
            Response_data[emlrtDynamicBoundsCheckFastR2012b(i, 1, Response_size
            [1], &c_emlrtBCI, &b_st) - 1] - 48;

          /* extract node ID and convert char to number */
          i = Response_size[1] - 1;
          destNodeID = (real_T)(uint8_T)
            Response_data[emlrtDynamicBoundsCheckFastR2012b(i, 1, Response_size
            [1], &d_emlrtBCI, &b_st) - 1] - 48.0;

          /* extract node ID and convert char to number */
          if (1 > Response_size[1] - 3) {
            loop_ub = 0;
          } else {
            emlrtDynamicBoundsCheckFastR2012b(1, 1, Response_size[1], &emlrtBCI,
              &b_st);
            i = Response_size[1] - 3;
            loop_ub = emlrtDynamicBoundsCheckFastR2012b(i, 1, Response_size[1],
              &emlrtBCI, &b_st);
          }

          emlrtDimSizeGeqCheckFastR2012b(80, loop_ub, &e_emlrtECI, &b_st);
          for (i = 0; i < loop_ub; i++) {
            c_Response_data[i] = Response_data[i];
          }

          Response_size[0] = 1;
          Response_size[1] = loop_ub;
          for (i = 0; i < loop_ub; i++) {
            Response_data[i] = c_Response_data[i];
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
        emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, &b_st);
      }
    } while (exitg7 == 0);

    /*  Final check */
    c_st.site = &nm_emlrtRSI;
    if (muDoubleScalarAbs(destNodeID) > 3.0) {
      destNodeID = nodeNum;

      /*  Something went wrong, probably corrupt message, reset to self */
    }

    /* % Possible response messages */
    /*  1.) Timeout */
    /*  2.) Some message */
    b_st.site = &ql_emlrtRSI;
    b_bool = FALSE;
    for (i = 0; i < 2; i++) {
      sza[i] = (int8_T)Response_size[i];
    }

    i = 0;
    do {
      exitg6 = 0;
      if (i < 2) {
        if (sza[i] != 1 + 6 * i) {
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
      b_st.site = &ql_emlrtRSI;
      b_bool = FALSE;
      for (i = 0; i < 2; i++) {
        sza[i] = (int8_T)Response_size[i];
      }

      i = 0;
      do {
        exitg4 = 0;
        if (i < 2) {
          if (sza[i] != 1 + (i << 3)) {
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
        b_st.site = &rl_emlrtRSI;
        l_fprintf(&b_st, Response_data, Response_size);
        b_st.site = &sl_emlrtRSI;
        n_fprintf(&b_st, (int16_T)originNodeID);
        b_st.site = &tl_emlrtRSI;
        p_fprintf(&b_st);

        /*  Send ACK */
        b_st.site = &ul_emlrtRSI;
        r_fprintf(&b_st, (int16_T)originNodeID,
                  offsets[emlrtDynamicBoundsCheckFastR2012b(originNodeID, 1, 3,
                   &h_emlrtBCI, &st) - 1]);
        b_st.site = &vl_emlrtRSI;
        c_st.site = &db_emlrtRSI;
        b_ObjSDRuTransmitter->CenterFrequency = 2.24E+9 + offsets[originNodeID -
          1];
        c_st.site = &db_emlrtRSI;
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

        /*  Adjust offset for node        */
        b_st.site = &wl_emlrtRSI;
        PHYTransmit(SD, &b_st, b_ObjSDRuTransmitter, b_ObjSDRuReceiver,
                    originNodeID, destNodeID);
      } else {
        b_guard1 = TRUE;
      }
    } else {
      b_guard1 = TRUE;
    }

    if (b_guard1 == TRUE) {
      b_st.site = &xl_emlrtRSI;
      b_bool = FALSE;
      for (i = 0; i < 2; i++) {
        sza[i] = (int8_T)Response_size[i];
      }

      i = 0;
      do {
        exitg2 = 0;
        if (i < 2) {
          if (sza[i] != 1 + (i << 3)) {
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
        b_st.site = &yl_emlrtRSI;
        t_fprintf(&b_st);

        /*     %% Send ACK */
        b_st.site = &am_emlrtRSI;
        r_fprintf(&b_st, (int16_T)originNodeID,
                  offsets[emlrtDynamicBoundsCheckFastR2012b(originNodeID, 1, 3,
                   &g_emlrtBCI, &st) - 1]);
        b_st.site = &bm_emlrtRSI;
        c_st.site = &db_emlrtRSI;
        b_ObjSDRuTransmitter->CenterFrequency = 2.24E+9 + offsets[originNodeID -
          1];
        c_st.site = &db_emlrtRSI;
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

        /*  Adjust offset for node */
        b_st.site = &cm_emlrtRSI;
        PHYTransmit(SD, &b_st, b_ObjSDRuTransmitter, b_ObjSDRuReceiver,
                    originNodeID, destNodeID);
      }
    }

    emlrtDimSizeGeqCheckFastR2012b(80, previousMessage_size_idx_1, &b_emlrtECI,
      sp);
    previousMessage_size[0] = 1;
    previousMessage_size[1] = previousMessage_size_idx_1;
    loop_ub = previousMessage_size_idx_1;
    for (i = 0; i < loop_ub; i++) {
      previousMessage_data[i] = b_previousMessage_data[i];
    }

    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
  }

  emxFreeStruct_OFDMDemodulator_1(&ObjPreambleDemod);
  emxFreeStruct_OFDMDemodulator_1(&ObjDataDemod);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (testMACReceiver.c) */
