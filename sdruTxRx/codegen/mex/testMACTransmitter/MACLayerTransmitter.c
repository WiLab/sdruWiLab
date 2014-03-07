/*
 * MACLayerTransmitter.c
 *
 * Code generation for function 'MACLayerTransmitter'
 *
 * C source code generated on: Thu Mar  6 22:22:40 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testMACTransmitter.h"
#include "MACLayerTransmitter.h"
#include "PHYTransmit.h"
#include "PHYReceive.h"
#include "SpectrumSenseP25.h"
#include "fprintf.h"
#include "testMACTransmitter_data.h"
#include <stdio.h>

/* Variable Definitions */
static emlrtRSInfo xl_emlrtRSI = { 22, "MACLayerTransmitter",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/MACLayerTransmitter.m" };

static emlrtRSInfo yl_emlrtRSI = { 23, "MACLayerTransmitter",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/MACLayerTransmitter.m" };

static emlrtRSInfo am_emlrtRSI = { 44, "MACLayerTransmitter",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/MACLayerTransmitter.m" };

static emlrtRSInfo bm_emlrtRSI = { 45, "MACLayerTransmitter",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/MACLayerTransmitter.m" };

static emlrtRSInfo cm_emlrtRSI = { 51, "MACLayerTransmitter",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/MACLayerTransmitter.m" };

static emlrtRSInfo dm_emlrtRSI = { 61, "MACLayerTransmitter",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/MACLayerTransmitter.m" };

static emlrtRSInfo em_emlrtRSI = { 64, "MACLayerTransmitter",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/MACLayerTransmitter.m" };

static emlrtRSInfo fm_emlrtRSI = { 79, "MACLayerTransmitter",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/MACLayerTransmitter.m" };

static emlrtRSInfo gm_emlrtRSI = { 80, "MACLayerTransmitter",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/MACLayerTransmitter.m" };

static emlrtRSInfo hm_emlrtRSI = { 84, "MACLayerTransmitter",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/MACLayerTransmitter.m" };

static emlrtRSInfo im_emlrtRSI = { 87, "MACLayerTransmitter",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/MACLayerTransmitter.m" };

static emlrtRSInfo jm_emlrtRSI = { 88, "MACLayerTransmitter",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/MACLayerTransmitter.m" };

static emlrtRSInfo km_emlrtRSI = { 89, "MACLayerTransmitter",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/MACLayerTransmitter.m" };

static emlrtRSInfo rt_emlrtRSI = { 21, "MACLayerReceiver",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/MACLayerReceiver.m" };

static emlrtRSInfo st_emlrtRSI = { 39, "MACLayerReceiver",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/MACLayerReceiver.m" };

static emlrtRSInfo tt_emlrtRSI = { 41, "MACLayerReceiver",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/MACLayerReceiver.m" };

static emlrtRSInfo ut_emlrtRSI = { 42, "MACLayerReceiver",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/MACLayerReceiver.m" };

static emlrtRSInfo vt_emlrtRSI = { 59, "MACLayerReceiver",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/MACLayerReceiver.m" };

static emlrtRSInfo wt_emlrtRSI = { 61, "MACLayerReceiver",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/MACLayerReceiver.m" };

static emlrtRSInfo xt_emlrtRSI = { 63, "MACLayerReceiver",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/MACLayerReceiver.m" };

static emlrtRSInfo yt_emlrtRSI = { 64, "MACLayerReceiver",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/MACLayerReceiver.m" };

static emlrtRSInfo au_emlrtRSI = { 65, "MACLayerReceiver",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/MACLayerReceiver.m" };

static emlrtRSInfo bu_emlrtRSI = { 95, "DLLayer",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/DLLayer.m" };

static emlrtRSInfo cu_emlrtRSI = { 97, "DLLayer",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/DLLayer.m" };

static emlrtRSInfo du_emlrtRSI = { 76, "DLLayer",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/DLLayer.m" };

static emlrtRSInfo eu_emlrtRSI = { 48, "DLLayer",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/DLLayer.m" };

static emlrtRSInfo fu_emlrtRSI = { 62, "DLLayer",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/DLLayer.m" };

static emlrtRSInfo gu_emlrtRSI = { 64, "DLLayer",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/DLLayer.m" };

static emlrtRSInfo hu_emlrtRSI = { 116, "DLLayer",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/DLLayer.m" };

static emlrtECInfo y_emlrtECI = { 2, 32, 1, "DLLayer",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/DLLayer.m" };

static emlrtECInfo ab_emlrtECI = { 2, 101, 17, "DLLayer",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/DLLayer.m" };

static emlrtBCInfo tb_emlrtBCI = { -1, -1, 106, 28, "Response", "DLLayer",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/DLLayer.m", 0 };

static emlrtECInfo bb_emlrtECI = { 2, 106, 17, "DLLayer",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/DLLayer.m" };

static emlrtECInfo cb_emlrtECI = { 2, 77, 17, "DLLayer",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/DLLayer.m" };

static emlrtECInfo db_emlrtECI = { 2, 43, 17, "DLLayer",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/DLLayer.m" };

static emlrtBCInfo ub_emlrtBCI = { -1, -1, 104, 39, "Response", "DLLayer",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/DLLayer.m", 0 };

static emlrtBCInfo vb_emlrtBCI = { -1, -1, 105, 37, "Response", "DLLayer",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/DLLayer.m", 0 };

static emlrtBCInfo wb_emlrtBCI = { -1, -1, 99, 39, "Response", "DLLayer",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/DLLayer.m", 0 };

static emlrtBCInfo xb_emlrtBCI = { -1, -1, 100, 37, "Response", "DLLayer",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/DLLayer.m", 0 };

static emlrtBCInfo yb_emlrtBCI = { 1, 3, 63, 79, "tx.offsetTable",
  "MACLayerReceiver",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/MACLayerReceiver.m", 0 };

/* Function Declarations */
static boolean_T b_MACLayerTransmitter(testMACTransmitterStackData *SD, const
  emlrtStack *sp, comm_AGC *ObjAGC, comm_SDRuReceiver *ObjSDRuReceiver,
  comm_SDRuTransmitter *ObjSDRuTransmitter, commcodegen_CRCDetector *ObjDetect,
  OFDMDemodulator_1 *ObjPreambleDemod, OFDMDemodulator_1 *ObjDataDemod, const
  c_struct_T *estimate, const e_struct_T *tx, const real_T messageBits_data[563],
  char_T previousMessage_data[77], int32_T previousMessage_size[2]);

/* Function Definitions */
static boolean_T b_MACLayerTransmitter(testMACTransmitterStackData *SD, const
  emlrtStack *sp, comm_AGC *ObjAGC, comm_SDRuReceiver *ObjSDRuReceiver,
  comm_SDRuTransmitter *ObjSDRuTransmitter, commcodegen_CRCDetector *ObjDetect,
  OFDMDemodulator_1 *ObjPreambleDemod, OFDMDemodulator_1 *ObjDataDemod, const
  c_struct_T *estimate, const e_struct_T *tx, const real_T messageBits_data[563],
  char_T previousMessage_data[77], int32_T previousMessage_size[2])
{
  boolean_T msgStatus;
  int32_T tries;
  int32_T state;
  real_T decisions[10];
  real_T destNodeID;
  int16_T i36;
  comm_SDRuTransmitter *obj;
  boolean_T flag;
  boolean_T exitg1;
  comm_AGC *b_ObjAGC;
  comm_SDRuReceiver *b_ObjSDRuReceiver;
  commcodegen_CRCDetector *b_ObjDetect;
  OFDMDemodulator_1 *b_ObjPreambleDemod;
  OFDMDemodulator_1 *b_ObjDataDemod;
  int32_T originNodeID;
  real_T timeouts;
  int32_T Response_size[2];
  int32_T exitg10;
  boolean_T guard1 = FALSE;
  static const char_T b[7] = { 'T', 'i', 'm', 'e', 'o', 'u', 't' };

  char_T Response_data[80];
  int32_T messageBits_size[2];
  real_T b_messageBits_data[563];
  int8_T sza[2];
  int32_T exitg16;
  int32_T exitg15;
  static const char_T cv343[7] = { 'T', 'i', 'm', 'e', 'o', 'u', 't' };

  int32_T exitg14;
  int32_T exitg13;
  static const char_T cv344[9] = { 'C', 'R', 'C', ' ', 'E', 'r', 'r', 'o', 'r' };

  int8_T szb[2];
  int32_T exitg12;
  int32_T exitg11;
  int32_T loop_ub;
  static const char_T b_b[9] = { 'D', 'u', 'p', 'l', 'i', 'c', 'a', 't', 'e' };

  char_T b_Response_data[80];
  int32_T exitg9;
  int32_T exitg8;
  boolean_T b_guard1 = FALSE;
  int32_T exitg7;
  int32_T exitg6;
  static const char_T cv345[9] = { 'D', 'u', 'p', 'l', 'i', 'c', 'a', 't', 'e' };

  int32_T exitg5;
  int32_T exitg4;
  int32_T exitg3;
  int32_T exitg2;
  static const char_T cv346[3] = { 'A', 'C', 'K' };

  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;

  /*            %Objects */
  /*          %Structs */
  /*   %Values/Vectors */
  /* % This function is called when the node wants to transmit something */
  /*  % Sense spectrum and wait until it is unoccupied */
  for (tries = 0; tries < 4; tries++) {
    /*  try only so many times */
    for (state = 0; state < 10; state++) {
      st.site = &xl_emlrtRSI;
      SpectrumSenseP25(SD, &st, ObjAGC, ObjSDRuReceiver, decisions);
      destNodeID = muDoubleScalarRound(decisions[state]);
      if (destNodeID < 32768.0) {
        if (destNodeID >= -32768.0) {
          i36 = (int16_T)destNodeID;
        } else {
          i36 = MIN_int16_T;
        }
      } else if (destNodeID >= 32768.0) {
        i36 = MAX_int16_T;
      } else {
        i36 = 0;
      }

      st.site = &yl_emlrtRSI;
      d_fprintf(&st, (int16_T)(1 + state), i36);
      emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
    }

    /*      if occupied */
    /*          fprintf('MAC| Spectrum occupied, listening...\n'); */
    /*          %Recover signal and/or wait */
    /*          lookingForACK = false; */
    /*          %MACLayerReceiver(PHY,lookingForACK); */
    /*      else% Yay we can transmit now */
    /*          break; */
    /*      end     */
    /*      if tries >=4 */
    /*          fprintf('MAC| Spectrum Busy, try again later\n'); */
    /*          return; */
    /*      end */
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
  }

  msgStatus = FALSE;

  /*  Adjust offset for node */
  st.site = &am_emlrtRSI;
  f_fprintf(&st, 1, tx->offsetTable[0]);
  st.site = &bm_emlrtRSI;
  obj = ObjSDRuTransmitter;
  b_st.site = &gb_emlrtRSI;
  obj->CenterFrequency = 2.24E+9 + tx->offsetTable[0];
  c_st.site = &ck_emlrtRSI;
  b_st.site = &gb_emlrtRSI;
  if (obj->isInitialized && (!obj->isReleased)) {
    flag = TRUE;
  } else {
    flag = FALSE;
  }

  if (flag) {
    obj->TunablePropsChanged = TRUE;
    obj->tunablePropertyChanged[1] = TRUE;
  }

  /* % Spectrum clear, send message */
  tries = 0;
  exitg1 = FALSE;
  while ((exitg1 == FALSE) && (tries < 4)) {
    /*  Send message */
    /* %originator */
    /* %destination */
    st.site = &cm_emlrtRSI;
    PHYTransmit(SD, &st, ObjSDRuTransmitter, ObjSDRuReceiver, tx->nodeNum);

    /*  Listen for acknowledgement */
    /* fprintf('###########################################\n'); */
    st.site = &dm_emlrtRSI;
    h_fprintf(&st);

    /*  Call Receiver */
    /*            %Objects */
    /*          %Structs */
    /*   %Values/Vectors */
    st.site = &em_emlrtRSI;
    b_ObjAGC = ObjAGC;
    b_ObjSDRuReceiver = ObjSDRuReceiver;
    obj = ObjSDRuTransmitter;
    b_ObjDetect = ObjDetect;
    b_ObjPreambleDemod = ObjPreambleDemod;
    b_ObjDataDemod = ObjDataDemod;

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
    b_st.site = &rt_emlrtRSI;

    /*            %Objects */
    /*          %Structs */
    /*   %Values/Vectors */
    /* Initialize values */
    originNodeID = -1;
    destNodeID = -1.0;

    /*  0 = Call PHY Receiver */
    /*  1 = Timeout */
    /*  2 = Corrupt Message */
    /*  3 = Message Reception Successfull */
    /*  Duplicates are checked at the last stage */
    state = 0;

    /*  Initial state */
    timeouts = 0.0;

    /*  Counter */
    /*  Message string holder */
    emlrtDimSizeGeqCheckFastR2012b(80, 0, &y_emlrtECI, &b_st);
    Response_size[0] = 1;
    Response_size[1] = 0;

    /*  Run system */
    do {
      exitg10 = 0;

      /*     %% Process Messages */
      guard1 = FALSE;
      switch (state) {
       case 0:
        /* Wait for message */
        if (timeouts > 10.0) {
          emlrtDimSizeGeqCheckFastR2012b(80, 7, &db_emlrtECI, &b_st);
          Response_size[0] = 1;
          Response_size[1] = 7;
          for (state = 0; state < 7; state++) {
            Response_data[state] = b[state];
          }

          exitg10 = 1;
        } else {
          /*  Call Physical Layer */
          /*            %Objects */
          /*          %Structs */
          /*   %Values/Vectors */
          SD->f15.estimate = *estimate;
          messageBits_size[0] = 1;
          messageBits_size[1] = 563;
          memcpy(&b_messageBits_data[0], &messageBits_data[0], 563U * sizeof
                 (real_T));
          c_st.site = &eu_emlrtRSI;
          PHYReceive(SD, &c_st, b_ObjAGC, b_ObjSDRuReceiver, b_ObjDetect,
                     b_ObjPreambleDemod, b_ObjDataDemod, &SD->f15.estimate,
                     tx->shortPreambleOFDM, tx->longPreamble, tx->pilots,
                     tx->pilotLocationsWithoutGuardbands,
                     tx->dataSubcarrierIndexies.data,
                     tx->dataSubcarrierIndexies.size, b_messageBits_data,
                     messageBits_size, Response_data, Response_size);

          /*  Choose next state */
          c_st.site = &fu_emlrtRSI;
          flag = FALSE;
          for (state = 0; state < 2; state++) {
            sza[state] = (int8_T)Response_size[state];
          }

          state = 0;
          do {
            exitg16 = 0;
            if (state < 2) {
              if (sza[state] != 1 + 6 * state) {
                exitg16 = 1;
              } else {
                state++;
              }
            } else {
              state = 0;
              exitg16 = 2;
            }
          } while (exitg16 == 0);

          if (exitg16 == 1) {
          } else {
            do {
              exitg15 = 0;
              if (state <= Response_size[1] - 1) {
                if (Response_data[state] != cv343[state]) {
                  exitg15 = 1;
                } else {
                  state++;
                }
              } else {
                flag = TRUE;
                exitg15 = 1;
              }
            } while (exitg15 == 0);
          }

          if (flag) {
            state = 1;
          } else {
            c_st.site = &gu_emlrtRSI;
            flag = FALSE;
            for (state = 0; state < 2; state++) {
              sza[state] = (int8_T)Response_size[state];
            }

            state = 0;
            do {
              exitg14 = 0;
              if (state < 2) {
                if (sza[state] != 1 + (state << 3)) {
                  exitg14 = 1;
                } else {
                  state++;
                }
              } else {
                state = 0;
                exitg14 = 2;
              }
            } while (exitg14 == 0);

            if (exitg14 == 1) {
            } else {
              do {
                exitg13 = 0;
                if (state <= Response_size[1] - 1) {
                  if (Response_data[state] != cv344[state]) {
                    exitg13 = 1;
                  } else {
                    state++;
                  }
                } else {
                  flag = TRUE;
                  exitg13 = 1;
                }
              } while (exitg13 == 0);
            }

            if (flag || (Response_size[1] == 0)) {
              state = 2;
            } else {
              /*  Successfully decoded */
              state = 3;
            }
          }

          /*  Timeout occured     */
          guard1 = TRUE;
        }
        break;

       case 1:
        timeouts++;
        if (timeouts > 10.0) {
          /* if DebugFlag;fprintf('DL| Max timeouts reached\n');end */
          c_st.site = &du_emlrtRSI;
          l_fprintf(&c_st);
          emlrtDimSizeGeqCheckFastR2012b(80, 7, &cb_emlrtECI, &b_st);
          Response_size[0] = 1;
          Response_size[1] = 7;
          for (state = 0; state < 7; state++) {
            Response_data[state] = b[state];
          }

          exitg10 = 1;
        } else {
          state = 0;

          /* Get another message */
          /*  Message corrupted     */
          guard1 = TRUE;
        }
        break;

       case 2:
        timeouts += 0.01;
        state = 0;

        /* Get another message */
        /*  Default: Message successfully received     */
        guard1 = TRUE;
        break;

       case 3:
        /* otherwise */
        /* disp(['DL| MSG: ',Response]) */
        /* disp(['DL| Timeouts: ',num2str(timeouts)]) */
        /*  Final Duplication check */
        c_st.site = &bu_emlrtRSI;
        flag = FALSE;
        for (state = 0; state < 2; state++) {
          sza[state] = (int8_T)previousMessage_size[state];
        }

        for (state = 0; state < 2; state++) {
          szb[state] = (int8_T)Response_size[state];
        }

        state = 0;
        do {
          exitg12 = 0;
          if (state < 2) {
            if (sza[state] != szb[state]) {
              exitg12 = 1;
            } else {
              state++;
            }
          } else {
            state = 0;
            exitg12 = 2;
          }
        } while (exitg12 == 0);

        if (exitg12 == 1) {
        } else {
          do {
            exitg11 = 0;
            if (state <= previousMessage_size[1] - 1) {
              if (previousMessage_data[state] != Response_data[state]) {
                exitg11 = 1;
              } else {
                state++;
              }
            } else {
              flag = TRUE;
              exitg11 = 1;
            }
          } while (exitg11 == 0);
        }

        if (flag) {
          /* Dupe */
          /* if DebugFlag;fprintf('DL| Duplicate Message\n');end */
          c_st.site = &cu_emlrtRSI;
          j_fprintf(&c_st);
          previousMessage_size[0] = 1;
          previousMessage_size[1] = Response_size[1];
          loop_ub = Response_size[1];
          for (state = 0; state < loop_ub; state++) {
            previousMessage_data[previousMessage_size[0] * state] =
              Response_data[Response_size[0] * state];
          }

          /* Update history for next iteration */
          state = Response_size[1] - 2;
          originNodeID = (uint8_T)
            Response_data[emlrtDynamicBoundsCheckFastR2012b(state, 1,
            Response_size[1], &wb_emlrtBCI, &b_st) - 1] - 48;

          /* extract node ID and convert char to number */
          state = Response_size[1] - 1;
          destNodeID = (real_T)(uint8_T)
            Response_data[emlrtDynamicBoundsCheckFastR2012b(state, 1,
            Response_size[1], &xb_emlrtBCI, &b_st) - 1] - 48.0;

          /* extract node ID and convert char to number */
          emlrtDimSizeGeqCheckFastR2012b(80, 9, &ab_emlrtECI, &b_st);
          Response_size[0] = 1;
          Response_size[1] = 9;
          for (state = 0; state < 9; state++) {
            Response_data[state] = b_b[state];
          }

          /* Tell upper layers duplicate */
        } else {
          /* No Dupe */
          previousMessage_size[0] = 1;
          previousMessage_size[1] = Response_size[1];
          loop_ub = Response_size[1];
          for (state = 0; state < loop_ub; state++) {
            previousMessage_data[previousMessage_size[0] * state] =
              Response_data[Response_size[0] * state];
          }

          /* Update history for next iteration */
          state = Response_size[1] - 2;
          originNodeID = (uint8_T)
            Response_data[emlrtDynamicBoundsCheckFastR2012b(state, 1,
            Response_size[1], &ub_emlrtBCI, &b_st) - 1] - 48;

          /* extract node ID and convert char to number */
          state = Response_size[1] - 1;
          destNodeID = (real_T)(uint8_T)
            Response_data[emlrtDynamicBoundsCheckFastR2012b(state, 1,
            Response_size[1], &vb_emlrtBCI, &b_st) - 1] - 48.0;

          /* extract node ID and convert char to number */
          if (1 > Response_size[1] - 3) {
            loop_ub = 0;
          } else {
            emlrtDynamicBoundsCheckFastR2012b(1, 1, Response_size[1],
              &tb_emlrtBCI, &b_st);
            state = Response_size[1] - 3;
            loop_ub = emlrtDynamicBoundsCheckFastR2012b(state, 1, Response_size
              [1], &tb_emlrtBCI, &b_st);
          }

          emlrtDimSizeGeqCheckFastR2012b(80, loop_ub, &bb_emlrtECI, &b_st);
          for (state = 0; state < loop_ub; state++) {
            b_Response_data[state] = Response_data[state];
          }

          Response_size[0] = 1;
          Response_size[1] = loop_ub;
          for (state = 0; state < loop_ub; state++) {
            Response_data[state] = b_Response_data[state];
          }

          /* Remove identifer key and nodeIDs */
        }

        exitg10 = 1;
        break;

       default:
        guard1 = TRUE;
        break;
      }

      if (guard1 == TRUE) {
        emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, &b_st);
      }
    } while (exitg10 == 0);

    /*  Final check */
    c_st.site = &hu_emlrtRSI;
    if (muDoubleScalarAbs(destNodeID) > 3.0) {
      destNodeID = tx->nodeNum;

      /*  Something went wrong, probably corrupt message, reset to self */
    }

    /* % Possible response messages */
    /*  1.) Timeout */
    /*  2.) Some message */
    b_st.site = &st_emlrtRSI;
    flag = FALSE;
    for (state = 0; state < 2; state++) {
      sza[state] = (int8_T)Response_size[state];
    }

    state = 0;
    do {
      exitg9 = 0;
      if (state < 2) {
        if (sza[state] != 1 + 6 * state) {
          exitg9 = 1;
        } else {
          state++;
        }
      } else {
        state = 0;
        exitg9 = 2;
      }
    } while (exitg9 == 0);

    if (exitg9 == 1) {
    } else {
      do {
        exitg8 = 0;
        if (state <= Response_size[1] - 1) {
          if (Response_data[state] != cv343[state]) {
            exitg8 = 1;
          } else {
            state++;
          }
        } else {
          flag = TRUE;
          exitg8 = 1;
        }
      } while (exitg8 == 0);
    }

    b_guard1 = FALSE;
    if (!flag) {
      b_st.site = &st_emlrtRSI;
      flag = FALSE;
      for (state = 0; state < 2; state++) {
        sza[state] = (int8_T)Response_size[state];
      }

      state = 0;
      do {
        exitg7 = 0;
        if (state < 2) {
          if (sza[state] != 1 + (state << 3)) {
            exitg7 = 1;
          } else {
            state++;
          }
        } else {
          state = 0;
          exitg7 = 2;
        }
      } while (exitg7 == 0);

      if (exitg7 == 1) {
      } else {
        do {
          exitg6 = 0;
          if (state <= Response_size[1] - 1) {
            if (Response_data[state] != cv345[state]) {
              exitg6 = 1;
            } else {
              state++;
            }
          } else {
            flag = TRUE;
            exitg6 = 1;
          }
        } while (exitg6 == 0);
      }

      if (!flag) {
        /* fprintf('###########################################\n'); */
        b_st.site = &tt_emlrtRSI;
        n_fprintf(&b_st, Response_data, Response_size);
        b_st.site = &ut_emlrtRSI;
        p_fprintf(&b_st, (int16_T)originNodeID);
      } else {
        b_guard1 = TRUE;
      }
    } else {
      b_guard1 = TRUE;
    }

    if (b_guard1 == TRUE) {
      b_st.site = &vt_emlrtRSI;
      flag = FALSE;
      for (state = 0; state < 2; state++) {
        sza[state] = (int8_T)Response_size[state];
      }

      state = 0;
      do {
        exitg5 = 0;
        if (state < 2) {
          if (sza[state] != 1 + (state << 3)) {
            exitg5 = 1;
          } else {
            state++;
          }
        } else {
          state = 0;
          exitg5 = 2;
        }
      } while (exitg5 == 0);

      if (exitg5 == 1) {
      } else {
        do {
          exitg4 = 0;
          if (state <= Response_size[1] - 1) {
            if (Response_data[state] != cv345[state]) {
              exitg4 = 1;
            } else {
              state++;
            }
          } else {
            flag = TRUE;
            exitg4 = 1;
          }
        } while (exitg4 == 0);
      }

      if (flag) {
        b_st.site = &wt_emlrtRSI;
        r_fprintf(&b_st);

        /*     %% Send ACK */
        b_st.site = &xt_emlrtRSI;
        f_fprintf(&b_st, (int16_T)originNodeID, tx->
                  offsetTable[emlrtDynamicBoundsCheckFastR2012b(originNodeID, 1,
                   3, &yb_emlrtBCI, &st) - 1]);
        b_st.site = &yt_emlrtRSI;
        c_st.site = &gb_emlrtRSI;
        obj->CenterFrequency = 2.24E+9 + tx->offsetTable[originNodeID - 1];
        c_st.site = &gb_emlrtRSI;
        if (obj->isInitialized && (!obj->isReleased)) {
          flag = TRUE;
        } else {
          flag = FALSE;
        }

        if (flag) {
          obj->TunablePropsChanged = TRUE;
          obj->tunablePropertyChanged[1] = TRUE;
        }

        /*  Adjust offset for node */
        b_st.site = &au_emlrtRSI;
        b_PHYTransmit(SD, &b_st, obj, b_ObjSDRuReceiver, originNodeID,
                      destNodeID);
      }
    }

    st.site = &fm_emlrtRSI;
    flag = FALSE;
    for (state = 0; state < 2; state++) {
      sza[state] = (int8_T)Response_size[state];
    }

    state = 0;
    do {
      exitg3 = 0;
      if (state < 2) {
        if (sza[state] != 1 + (state << 1)) {
          exitg3 = 1;
        } else {
          state++;
        }
      } else {
        state = 0;
        exitg3 = 2;
      }
    } while (exitg3 == 0);

    if (exitg3 == 1) {
    } else {
      do {
        exitg2 = 0;
        if (state <= Response_size[1] - 1) {
          if (Response_data[state] != cv346[state]) {
            exitg2 = 1;
          } else {
            state++;
          }
        } else {
          flag = TRUE;
          exitg2 = 1;
        }
      } while (exitg2 == 0);
    }

    if (flag) {
      st.site = &gm_emlrtRSI;
      t_fprintf(&st);
      msgStatus = TRUE;
      exitg1 = TRUE;
    } else {
      st.site = &hm_emlrtRSI;
      v_fprintf(&st);
      if (tries + 1 >= 4) {
        st.site = &im_emlrtRSI;
        x_fprintf(&st);
        st.site = &jm_emlrtRSI;
        ab_fprintf(&st);
        st.site = &km_emlrtRSI;
        x_fprintf(&st);
        exitg1 = TRUE;
      } else {
        tries++;
        emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
      }
    }
  }

  return msgStatus;
}

void MACLayerTransmitter(testMACTransmitterStackData *SD, const emlrtStack *sp,
  comm_AGC *ObjAGC, comm_SDRuReceiver *ObjSDRuReceiver, comm_SDRuTransmitter
  *ObjSDRuTransmitter, commcodegen_CRCDetector *ObjDetect, OFDMDemodulator_1
  *ObjPreambleDemod, OFDMDemodulator_1 *ObjDataDemod, const c_struct_T *estimate,
  const e_struct_T *tx, const real_T messageBits_data[563], const char_T
  previousMessage_data[77], const int32_T previousMessage_size[2], char_T
  b_previousMessage_data[77], int32_T b_previousMessage_size[2], boolean_T
  *msgStatus)
{
  int32_T loop_ub;
  int32_T i15;
  b_previousMessage_size[0] = 1;
  b_previousMessage_size[1] = previousMessage_size[1];
  loop_ub = previousMessage_size[0] * previousMessage_size[1];
  for (i15 = 0; i15 < loop_ub; i15++) {
    b_previousMessage_data[i15] = previousMessage_data[i15];
  }

  *msgStatus = b_MACLayerTransmitter(SD, sp, ObjAGC, ObjSDRuReceiver,
    ObjSDRuTransmitter, ObjDetect, ObjPreambleDemod, ObjDataDemod, estimate, tx,
    messageBits_data, b_previousMessage_data, b_previousMessage_size);
}

/* End of code generation (MACLayerTransmitter.c) */
