/*
 * testPHYReceive.c
 *
 * Code generation for function 'testPHYReceive'
 *
 * C source code generated on: Thu Apr 17 22:51:41 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testPHYReceive.h"
#include "PHYReceive.h"
#include "testPHYReceive_emxutil.h"
#include "generateOFDMSignal_TX2.h"
#include "generateOFDMSignal.h"
#include "initializeOFDMSyncMemory_sdr.h"
#include "AGC.h"
#include "SDRuReceiver.h"
#include "CRCDetector.h"
#include "equalizeOFDM.h"
#include "fprintf.h"
#include "testPHYReceive_mexutil.h"
#include "testPHYReceive_data.h"
#include <stdio.h>

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 17, "testPHYReceive",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/testPHYReceive.m" };

static emlrtRSInfo b_emlrtRSI = { 21, "testPHYReceive",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/testPHYReceive.m" };

static emlrtRSInfo c_emlrtRSI = { 24, "testPHYReceive",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/testPHYReceive.m" };

static emlrtRSInfo d_emlrtRSI = { 38, "testPHYReceive",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/testPHYReceive.m" };

static emlrtRSInfo e_emlrtRSI = { 5, "testPHYReceive",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/testPHYReceive.m" };

static emlrtRSInfo f_emlrtRSI = { 41, "CreateTXRX",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/CreateTXRX.m" };

static emlrtRSInfo g_emlrtRSI = { 44, "CreateTXRX",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/CreateTXRX.m" };

static emlrtRSInfo h_emlrtRSI = { 52, "CreateTXRX",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/CreateTXRX.m" };

static emlrtRSInfo i_emlrtRSI = { 11, "CreateTXRX",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/CreateTXRX.m" };

static emlrtRSInfo j_emlrtRSI = { 25, "CreateTXRX",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/CreateTXRX.m" };

static emlrtRSInfo me_emlrtRSI = { 9, "warning",
  "/opt/MATLAB/R2013a/toolbox/shared/coder/coder/+coder/+internal/warning.m" };

static emlrtRSInfo ne_emlrtRSI = { 16, "eml_warning",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_warning.m" };

static emlrtMCInfo m_emlrtMCI = { 16, 13, "eml_warning",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_warning.m" };

static emlrtMCInfo n_emlrtMCI = { 16, 5, "eml_warning",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_warning.m" };

static emlrtRTEInfo b_emlrtRTEI = { 10, 5, "testPHYReceive",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/testPHYReceive.m" };

static emlrtRTEInfo c_emlrtRTEI = { 9, 5, "testPHYReceive",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/testPHYReceive.m" };

/* Function Declarations */
static void eml_warning(void);
static void warning(const mxArray *b, emlrtMCInfo *location);

/* Function Definitions */
static void eml_warning(void)
{
  const mxArray *y;
  static const int32_T iv78[2] = { 1, 39 };

  const mxArray *m15;
  char_T cv84[39];
  int32_T i;
  static const char_T cv85[39] = { 's', 'd', 'r', 'u', ':', 'S', 'D', 'R', 'u',
    'R', 'e', 'c', 'e', 'i', 'v', 'e', 'r', ':', 'O', 'u', 't', 'O', 'f', 'R',
    'a', 'n', 'g', 'e', 'D', 'e', 'c', 'i', 'm', 'F', 'a', 'c', 't', 'o', 'r' };

  emlrtPushRtStackR2012b(&ne_emlrtRSI, emlrtRootTLSGlobal);
  y = NULL;
  m15 = mxCreateCharArray(2, iv78);
  for (i = 0; i < 39; i++) {
    cv84[i] = cv85[i];
  }

  emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 39, m15, cv84);
  emlrtAssign(&y, m15);
  warning(b_message(y, &m_emlrtMCI), &n_emlrtMCI);
  emlrtPopRtStackR2012b(&ne_emlrtRSI, emlrtRootTLSGlobal);
}

static void warning(const mxArray *b, emlrtMCInfo *location)
{
  const mxArray *pArray;
  pArray = b;
  emlrtCallMATLABR2012b(emlrtRootTLSGlobal, 0, NULL, 1, &pArray, "warning", TRUE,
                        location);
}

real_T testPHYReceive(testPHYReceiveStackData *SD, real_T decimation)
{
  real_T result;
  OFDMDemodulator ObjDataDemod;
  OFDMDemodulator ObjPreambleDemod;
  OFDMDemodulator_2 *unusedU1;
  OFDMDemodulator_3 *unusedU0;
  OFDMDemodulator_3 b_unusedU0;
  OFDMDemodulator_2 b_unusedU1;
  creal_T rx_shortPreambleOFDM[64];
  int32_T i;
  real_T rx_longPreamble[53];
  real_T rx_pilots[48];
  real_T c_rx_pilotLocationsWithoutGuard[4];
  int32_T loop_ub;
  real_T rx_dataSubcarrierIndexies_data[48];
  creal_T b_rx_shortPreambleOFDM[64];
  real_T b_rx_longPreamble[53];
  real_T b_rx_pilots[48];
  real_T d_rx_pilotLocationsWithoutGuard[4];
  int32_T rx_dataSubcarrierIndexies_size[2];
  real_T b_rx_dataSubcarrierIndexies_dat[48];
  OFDMDemodulator *b_ObjDataDemod;
  OFDMDemodulator_1 *b_ObjPreambleDemod;
  struct_T estimate;
  comm_AGC ObjAGC;
  comm_SDRuReceiver ObjSDRuReceiver;
  commcodegen_CRCDetector ObjDetect;
  comm_SDRuReceiver *obj;
  boolean_T flag;
  struct_T b_estimate;
  int32_T messageBits_size[2];
  int32_T tmp_size[2];
  char_T tmp_data[80];
  int32_T recoveredMessage_size[2];
  char_T recoveredMessage_data[77];
  int32_T exitg4;
  int32_T exitg3;
  static const char_T cv0[9] = { 'C', 'R', 'C', ' ', 'E', 'r', 'r', 'o', 'r' };

  int32_T exitg2;
  int32_T exitg1;
  static const char_T cv1[7] = { 'T', 'i', 'm', 'e', 'o', 'u', 't' };

  emlrtHeapReferenceStackEnterFcnR2012b(emlrtRootTLSGlobal);
  emxInitStruct_OFDMDemodulator(&ObjDataDemod, &b_emlrtRTEI, TRUE);
  emxInitStruct_OFDMDemodulator(&ObjPreambleDemod, &c_emlrtRTEI, TRUE);
  result = 100.0;

  /*            %Objects */
  /*          %Structs */
  /*   %Values/Vectors */
  emlrtPushRtStackR2012b(&e_emlrtRSI, emlrtRootTLSGlobal);

  /*  System parameters to adjust because of hardware limitation */
  /*  Frames to capture */
  emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  generateOFDMSignal_TX2(&b_unusedU1, &b_unusedU0, &unusedU0, &unusedU1,
    SD->f4.unusedU2, &SD->f4.rx);
  for (i = 0; i < 64; i++) {
    rx_shortPreambleOFDM[i] = SD->f4.rx.shortPreambleOFDM[i];
  }

  for (i = 0; i < 53; i++) {
    rx_longPreamble[i] = SD->f4.rx.longPreamble[i];
  }

  for (i = 0; i < 48; i++) {
    rx_pilots[i] = SD->f4.rx.pilots[i];
  }

  for (i = 0; i < 4; i++) {
    c_rx_pilotLocationsWithoutGuard[i] =
      SD->f4.rx.pilotLocationsWithoutGuardbands[i];
  }

  loop_ub = SD->f4.rx.dataSubcarrierIndexies.size[0] *
    SD->f4.rx.dataSubcarrierIndexies.size[1];
  for (i = 0; i < loop_ub; i++) {
    rx_dataSubcarrierIndexies_data[i] = SD->f4.rx.dataSubcarrierIndexies.data[i];
  }

  emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  memcpy(&b_rx_shortPreambleOFDM[0], &rx_shortPreambleOFDM[0], sizeof(creal_T) <<
         6);
  memcpy(&b_rx_longPreamble[0], &rx_longPreamble[0], 53U * sizeof(real_T));
  memcpy(&b_rx_pilots[0], &rx_pilots[0], 48U * sizeof(real_T));
  for (i = 0; i < 4; i++) {
    d_rx_pilotLocationsWithoutGuard[i] = c_rx_pilotLocationsWithoutGuard[i];
  }

  rx_dataSubcarrierIndexies_size[0] = 1;
  rx_dataSubcarrierIndexies_size[1] = 48;
  for (i = 0; i < 48; i++) {
    b_rx_dataSubcarrierIndexies_dat[i] = rx_dataSubcarrierIndexies_data[i];
  }

  /* just need for sizing */
  /*  Set desired frequeny */
  /*  Set frequency bin width */
  /*  Setup transmitter */
  /* ObjSDRuTransmitter = comm.SDRuTransmitter('192.168.10.2', ... */
  /*     'CenterFrequency',      CenterFrequency, ... */
  /*     'InterpolationFactor',  InterpolationFactor,... */
  /*     'Gain',                 25); */
  /*  Setup Parameters */
  emlrtPushRtStackR2012b(&j_emlrtRSI, emlrtRootTLSGlobal);
  generateOFDMSignal(&ObjDataDemod, &ObjPreambleDemod, &b_ObjPreambleDemod,
                     &b_ObjDataDemod, SD->f4.unusedU3, &SD->f4.b_rx);
  emlrtPopRtStackR2012b(&j_emlrtRSI, emlrtRootTLSGlobal);

  /* ceil( rx.frameLength*4 ); %Size of Buffer of sliding window */
  /*  Sync Algorithms */
  /* Number of frequency estimates to be averaged together for frequency corrections (Higher==More stability, Lower==More responsiveness) */
  /* Create memory structure to collect measurements for sync algorithms */
  initializeOFDMSyncMemory_sdr(&estimate);

  /*  Gain control */
  emlrtPushRtStackR2012b(&f_emlrtRSI, emlrtRootTLSGlobal);
  AGC_AGC(&ObjAGC);
  emlrtPopRtStackR2012b(&f_emlrtRSI, emlrtRootTLSGlobal);

  /*  Value must be constant, equal to rx.receiveBufferLength */
  /*  USRP */
  emlrtPushRtStackR2012b(&g_emlrtRSI, emlrtRootTLSGlobal);
  SDRuReceiver_SDRuReceiver(&ObjSDRuReceiver);
  emlrtPopRtStackR2012b(&g_emlrtRSI, emlrtRootTLSGlobal);

  /*  CRC */
  emlrtPushRtStackR2012b(&h_emlrtRSI, emlrtRootTLSGlobal);
  CRCDetector_CRCDetector(&ObjDetect);
  emlrtPopRtStackR2012b(&h_emlrtRSI, emlrtRootTLSGlobal);

  /*  Timeout info */
  /*  Soft decisions */
  memset(&SD->f4.messageBits_data[0], 0, 1689U * sizeof(real_T));

  /* 3 for CRC */
  emlrtPopRtStackR2012b(&e_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&emlrtRSI, emlrtRootTLSGlobal);
  obj = &ObjSDRuReceiver;
  emlrtPushRtStackR2012b(&q_emlrtRSI, emlrtRootTLSGlobal);
  if (decimation > 512.0) {
    emlrtPushRtStackR2012b(&yd_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&me_emlrtRSI, emlrtRootTLSGlobal);
    eml_warning();
    emlrtPopRtStackR2012b(&me_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&yd_emlrtRSI, emlrtRootTLSGlobal);
  }

  obj->DecimationFactor = decimation;
  emlrtPushRtStackR2012b(&yd_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&yd_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&q_emlrtRSI, emlrtRootTLSGlobal);
  if (obj->isInitialized && (!obj->isReleased)) {
    flag = TRUE;
  } else {
    flag = FALSE;
  }

  if (flag) {
    obj->TunablePropsChanged = TRUE;
    obj->tunablePropertyChanged[0] = TRUE;
  }

  emlrtPopRtStackR2012b(&emlrtRSI, emlrtRootTLSGlobal);

  /*  Adjust offset for node */
  /* ObjSDRuReceiver.CenterFrequency = rx.CenterFrequency - offset; */
  emlrtPushRtStackR2012b(&b_emlrtRSI, emlrtRootTLSGlobal);
  b_fprintf();
  emlrtPopRtStackR2012b(&b_emlrtRSI, emlrtRootTLSGlobal);
  while (1) {
    /*            %Objects */
    /*          %Structs */
    /*   %Values/Vectors */
    emlrtPushRtStackR2012b(&c_emlrtRSI, emlrtRootTLSGlobal);
    b_estimate = estimate;
    messageBits_size[0] = 3;
    messageBits_size[1] = 563;
    for (i = 0; i < 1689; i++) {
      SD->f4.b_messageBits_data[i] = SD->f4.messageBits_data[i];
    }

    PHYReceive(SD, &ObjAGC, &ObjSDRuReceiver, &ObjDetect, &ObjPreambleDemod,
               &ObjDataDemod, &b_estimate, b_rx_shortPreambleOFDM,
               b_rx_longPreamble, b_rx_pilots, d_rx_pilotLocationsWithoutGuard,
               b_rx_dataSubcarrierIndexies_dat, rx_dataSubcarrierIndexies_size,
               SD->f4.b_messageBits_data, messageBits_size, tmp_data, tmp_size);
    recoveredMessage_size[0] = 1;
    recoveredMessage_size[1] = tmp_size[1];
    loop_ub = tmp_size[0] * tmp_size[1];
    for (i = 0; i < loop_ub; i++) {
      recoveredMessage_data[i] = tmp_data[i];
    }

    emlrtPopRtStackR2012b(&c_emlrtRSI, emlrtRootTLSGlobal);
    flag = FALSE;
    i = 0;
    do {
      exitg4 = 0;
      if (i < 2) {
        if (recoveredMessage_size[i] != 1 + (i << 3)) {
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
        if (i <= tmp_size[1] - 1) {
          if (recoveredMessage_data[i] != cv0[i]) {
            exitg3 = 1;
          } else {
            i++;
          }
        } else {
          flag = TRUE;
          exitg3 = 1;
        }
      } while (exitg3 == 0);
    }

    if (!flag) {
      flag = FALSE;
      i = 0;
      do {
        exitg2 = 0;
        if (i < 2) {
          if (recoveredMessage_size[i] != 1 + 6 * i) {
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
          if (i <= tmp_size[1] - 1) {
            if (recoveredMessage_data[i] != cv1[i]) {
              exitg1 = 1;
            } else {
              i++;
            }
          } else {
            flag = TRUE;
            exitg1 = 1;
          }
        } while (exitg1 == 0);
      }

      if (!flag) {
        emlrtPushRtStackR2012b(&d_emlrtRSI, emlrtRootTLSGlobal);
        d_fprintf(recoveredMessage_data, recoveredMessage_size);
        emlrtPopRtStackR2012b(&d_emlrtRSI, emlrtRootTLSGlobal);
      }
    }

    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, emlrtRootTLSGlobal);
  }

  return result;
}

/* End of code generation (testPHYReceive.c) */
