/*
 * testPHYTransmit.c
 *
 * Code generation for function 'testPHYTransmit'
 *
 * C source code generated on: Thu Feb 27 11:47:47 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testPHYTransmit.h"
#include "initializeOFDMSyncMemory_sdr.h"
#include "AGC.h"
#include "CRCDetector.h"
#include "PHYTransmit.h"
#include "SDRuReceiver.h"
#include "generateOFDMSignal.h"
#include "SDRuTransmitter.h"
#include "generateOFDMSignal_TX2.h"

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 18, "testPHYTransmit",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/testPHYTransmit.m" };

static emlrtRSInfo b_emlrtRSI = { 3, "testPHYTransmit",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/testPHYTransmit.m" };

static emlrtRSInfo c_emlrtRSI = { 14, "CreateTXRX",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/CreateTXRX.m" };

static emlrtRSInfo d_emlrtRSI = { 18, "CreateTXRX",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/CreateTXRX.m" };

static emlrtRSInfo e_emlrtRSI = { 40, "CreateTXRX",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/CreateTXRX.m" };

static emlrtRSInfo f_emlrtRSI = { 43, "CreateTXRX",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/CreateTXRX.m" };

static emlrtRSInfo g_emlrtRSI = { 46, "CreateTXRX",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/CreateTXRX.m" };

static emlrtRSInfo h_emlrtRSI = { 57, "CreateTXRX",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/CreateTXRX.m" };

static emlrtRSInfo i_emlrtRSI = { 58, "CreateTXRX",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/CreateTXRX.m" };

static emlrtRSInfo j_emlrtRSI = { 11, "CreateTXRX",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/CreateTXRX.m" };

static emlrtRSInfo k_emlrtRSI = { 25, "CreateTXRX",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/CreateTXRX.m" };

static emlrtRSInfo l_emlrtRSI = { 54, "CreateTXRX",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/CreateTXRX.m" };

/* Function Definitions */
void testPHYTransmit(testPHYTransmitStackData *SD, const emlrtStack *sp)
{
  OFDMDemodulator *unusedU1;
  OFDMDemodulator_1 *unusedU0;
  OFDMDemodulator_1 b_unusedU0;
  OFDMDemodulator b_unusedU1;
  comm_SDRuTransmitter ObjSDRuTransmitter;
  OFDMDemodulator *ObjDataDemod;
  OFDMDemodulator_1 *ObjPreambleDemod;
  OFDMDemodulator_1 b_ObjPreambleDemod;
  OFDMDemodulator b_ObjDataDemod;
  c_struct_T bn_emlrtRSI;
  comm_AGC ObjAGC;
  comm_SDRuReceiver ObjSDRuReceiver;
  commcodegen_CRCDetector ObjDetect;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;

  /*            %Objects */
  /*          %Structs */
  /*   %Values/Vectors */
  st.site = &b_emlrtRSI;

  /*  System parameters to adjust because of hardware limitation */
  /*  Frames to capture */
  b_st.site = &j_emlrtRSI;
  generateOFDMSignal_TX2(&b_st, &b_unusedU1, &b_unusedU0, &unusedU0, &unusedU1,
    SD->f3.unusedU2, &SD->f3.rx);

  /*  Set desired frequeny */
  b_st.site = &c_emlrtRSI;

  /*  Set frequency bin width */
  /*  Setup transmitter */
  b_st.site = &d_emlrtRSI;
  SDRuTransmitter_SDRuTransmitter(&b_st, &ObjSDRuTransmitter);

  /*  Setup Parameters */
  b_st.site = &k_emlrtRSI;
  generateOFDMSignal(&b_st, &b_ObjDataDemod, &b_ObjPreambleDemod,
                     &ObjPreambleDemod, &ObjDataDemod, SD->f3.unusedU3,
                     &SD->f3.b_rx);

  /* _TX2('HelloShannon'); */
  /* ceil( rx.frameLength*4 ); %Size of Buffer of sliding window */
  /* offsetCompensationValue = -77148;% Get from calibration */
  /* offsetCompensationValue = 71289;% Get from calibration */
  /*  Sync Algorithms */
  /* Number of frequency estimates to be averaged together for frequency corrections (Higher==More stability, Lower==More responsiveness) */
  /* Create memory structure to collect measurements for sync algorithms */
  b_st.site = &e_emlrtRSI;
  initializeOFDMSyncMemory_sdr(&bn_emlrtRSI);

  /*  Gain control */
  b_st.site = &f_emlrtRSI;
  AGC_AGC(&ObjAGC);

  /*  Value must be constant, equal to rx.receiveBufferLength */
  /*  USRP */
  b_st.site = &g_emlrtRSI;
  SDRuReceiver_SDRuReceiver(&b_st, &ObjSDRuReceiver);

  /*  CRC */
  b_st.site = &l_emlrtRSI;
  CRCDetector_CRCDetector(&ObjDetect);

  /*  Timeout info */
  b_st.site = &h_emlrtRSI;
  b_st.site = &h_emlrtRSI;
  b_st.site = &i_emlrtRSI;
  b_st.site = &i_emlrtRSI;

  /*  Soft decisions */
  /* 3 for CRC */
  st.site = &emlrtRSI;
  PHYTransmit(SD, &st, &ObjSDRuTransmitter, &ObjSDRuReceiver);
}

/* End of code generation (testPHYTransmit.c) */
