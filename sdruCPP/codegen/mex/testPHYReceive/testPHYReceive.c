/*
 * testPHYReceive.c
 *
 * Code generation for function 'testPHYReceive'
 *
 * C source code generated on: Thu Feb 27 11:53:20 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testPHYReceive.h"
#include "initializeOFDMSyncMemory_sdr.h"
#include "AGC.h"
#include "CRCDetector.h"
#include "testPHYReceive_emxutil.h"
#include "PHYReceive.h"
#include "SDRuReceiver.h"
#include "generateOFDMSignal.h"
#include "SDRuTransmitter.h"
#include "generateOFDMSignal_TX2.h"

/* Type Definitions */
#ifndef struct_emxArray_char_T_1x80
#define struct_emxArray_char_T_1x80

struct emxArray_char_T_1x80
{
  char_T data[80];
  int32_T size[2];
};

#endif                                 /*struct_emxArray_char_T_1x80*/

#ifndef typedef_emxArray_char_T_1x80
#define typedef_emxArray_char_T_1x80

typedef struct emxArray_char_T_1x80 emxArray_char_T_1x80;

#endif                                 /*typedef_emxArray_char_T_1x80*/

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 16, "testPHYReceive",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/testPHYReceive.m" };

static emlrtRSInfo b_emlrtRSI = { 3, "testPHYReceive",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/testPHYReceive.m" };

static emlrtRSInfo c_emlrtRSI = { 18, "CreateTXRX",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/CreateTXRX.m" };

static emlrtRSInfo d_emlrtRSI = { 40, "CreateTXRX",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/CreateTXRX.m" };

static emlrtRSInfo e_emlrtRSI = { 43, "CreateTXRX",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/CreateTXRX.m" };

static emlrtRSInfo f_emlrtRSI = { 46, "CreateTXRX",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/CreateTXRX.m" };

static emlrtRSInfo g_emlrtRSI = { 54, "CreateTXRX",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/CreateTXRX.m" };

static emlrtRSInfo h_emlrtRSI = { 11, "CreateTXRX",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/CreateTXRX.m" };

static emlrtRSInfo i_emlrtRSI = { 25, "CreateTXRX",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/CreateTXRX.m" };

static emlrtRTEInfo b_emlrtRTEI = { 9, 5, "testPHYReceive",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/testPHYReceive.m" };

static emlrtRTEInfo c_emlrtRTEI = { 8, 5, "testPHYReceive",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/testPHYReceive.m" };

/* Function Definitions */
void testPHYReceive(testPHYReceiveStackData *SD, const emlrtStack *sp)
{
  OFDMDemodulator_1 ObjDataDemod;
  OFDMDemodulator_1 ObjPreambleDemod;
  OFDMDemodulator_2 *unusedU1;
  OFDMDemodulator_3 *unusedU0;
  OFDMDemodulator_3 b_unusedU0;
  OFDMDemodulator_2 b_unusedU1;
  creal_T rx_shortPreambleOFDM[64];
  int32_T i;
  real_T rx_longPreamble[53];
  real_T rx_pilots[48];
  real_T c_rx_pilotLocationsWithoutGuard[4];
  real_T rx_dataSubcarrierIndexies_data[48];
  creal_T b_rx_shortPreambleOFDM[64];
  real_T b_rx_longPreamble[53];
  real_T b_rx_pilots[48];
  real_T d_rx_pilotLocationsWithoutGuard[4];
  int32_T rx_dataSubcarrierIndexies_size[2];
  real_T b_rx_dataSubcarrierIndexies_dat[48];
  comm_SDRuTransmitter ObjSDRuTransmitter;
  OFDMDemodulator_1 *b_ObjDataDemod;
  OFDMDemodulator_1 *b_ObjPreambleDemod;
  b_struct_T estimate;
  comm_AGC ObjAGC;
  comm_SDRuReceiver ObjSDRuReceiver;
  commcodegen_CRCDetector ObjDetect;
  int32_T tmp_size[2];
  real_T tmp_data[563];
  emxArray_char_T_1x80 nu_emlrtRSI;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInitStruct_OFDMDemodulator_1(sp, &ObjDataDemod, &b_emlrtRTEI, TRUE);
  emxInitStruct_OFDMDemodulator_1(sp, &ObjPreambleDemod, &c_emlrtRTEI, TRUE);

  /*            %Objects */
  /*          %Structs */
  /*   %Values/Vectors */
  st.site = &b_emlrtRSI;

  /*  System parameters to adjust because of hardware limitation */
  /*  Frames to capture */
  b_st.site = &h_emlrtRSI;
  generateOFDMSignal_TX2(&b_st, &b_unusedU1, &b_unusedU0, &unusedU0, &unusedU1,
    SD->f6.unusedU2, &SD->f6.rx);
  for (i = 0; i < 64; i++) {
    rx_shortPreambleOFDM[i] = SD->f6.rx.shortPreambleOFDM[i];
  }

  for (i = 0; i < 53; i++) {
    rx_longPreamble[i] = SD->f6.rx.longPreamble[i];
  }

  for (i = 0; i < 48; i++) {
    rx_pilots[i] = SD->f6.rx.pilots[i];
  }

  for (i = 0; i < 4; i++) {
    c_rx_pilotLocationsWithoutGuard[i] =
      SD->f6.rx.pilotLocationsWithoutGuardbands[i];
  }

  for (i = 0; i < 48; i++) {
    rx_dataSubcarrierIndexies_data[i] = SD->f6.rx.dataSubcarrierIndexies.data[i];
  }

  memcpy(&b_rx_shortPreambleOFDM[0], &rx_shortPreambleOFDM[0], sizeof(creal_T) <<
         6);
  memcpy(&b_rx_longPreamble[0], &rx_longPreamble[0], 53U * sizeof(real_T));
  memcpy(&b_rx_pilots[0], &rx_pilots[0], 48U * sizeof(real_T));
  for (i = 0; i < 4; i++) {
    d_rx_pilotLocationsWithoutGuard[i] = c_rx_pilotLocationsWithoutGuard[i];
  }

  rx_dataSubcarrierIndexies_size[0] = 1;
  rx_dataSubcarrierIndexies_size[1] = 48;
  memcpy(&b_rx_dataSubcarrierIndexies_dat[0], &rx_dataSubcarrierIndexies_data[0],
         48U * sizeof(real_T));

  /*  Set desired frequeny */
  /*  Set frequency bin width */
  /*  Setup transmitter */
  b_st.site = &c_emlrtRSI;
  SDRuTransmitter_SDRuTransmitter(&b_st, &ObjSDRuTransmitter);

  /*  Setup Parameters */
  b_st.site = &i_emlrtRSI;
  generateOFDMSignal(&b_st, &ObjDataDemod, &ObjPreambleDemod,
                     &b_ObjPreambleDemod, &b_ObjDataDemod, SD->f6.unusedU3,
                     &SD->f6.b_rx);

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
  /* 3 for CRC */
  /*            %Objects */
  /*          %Structs */
  /*   %Values/Vectors */
  tmp_size[0] = 1;
  tmp_size[1] = 563;
  memset(&tmp_data[0], 0, 563U * sizeof(real_T));
  st.site = &emlrtRSI;
  PHYReceive(SD, &st, &ObjAGC, &ObjSDRuReceiver, &ObjDetect, &ObjPreambleDemod,
             &ObjDataDemod, &estimate, b_rx_shortPreambleOFDM, b_rx_longPreamble,
             b_rx_pilots, d_rx_pilotLocationsWithoutGuard,
             b_rx_dataSubcarrierIndexies_dat, rx_dataSubcarrierIndexies_size,
             tmp_data, tmp_size, nu_emlrtRSI.data, nu_emlrtRSI.size);
  emxFreeStruct_OFDMDemodulator_1(&ObjPreambleDemod);
  emxFreeStruct_OFDMDemodulator_1(&ObjDataDemod);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (testPHYReceive.c) */
