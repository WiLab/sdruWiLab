/*
 * testPHYTransmit.c
 *
 * Code generation for function 'testPHYTransmit'
 *
 * C source code generated on: Sat Mar 29 15:48:37 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testPHYTransmit.h"
#include "PHYTransmit.h"
#include "generateOFDMSignal_TX2.h"
#include "SDRuTransmitter.h"
#include "generateOFDMSignal.h"
#include "initializeOFDMSyncMemory_sdr.h"
#include "AGC.h"
#include "SDRuReceiver.h"
#include "CRCDetector.h"
#include "testPHYTransmit_data.h"

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 26, "testPHYTransmit",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/testPHYTransmit.m" };

static emlrtRSInfo b_emlrtRSI = { 3, "testPHYTransmit",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/testPHYTransmit.m" };

static emlrtRSInfo c_emlrtRSI = { 18, "CreateTXRX",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/CreateTXRX.m" };

static emlrtRSInfo d_emlrtRSI = { 43, "CreateTXRX",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/CreateTXRX.m" };

static emlrtRSInfo e_emlrtRSI = { 46, "CreateTXRX",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/CreateTXRX.m" };

static emlrtRSInfo f_emlrtRSI = { 11, "CreateTXRX",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/CreateTXRX.m" };

static emlrtRSInfo g_emlrtRSI = { 25, "CreateTXRX",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/CreateTXRX.m" };

static emlrtRSInfo h_emlrtRSI = { 54, "CreateTXRX",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/CreateTXRX.m" };

/* Function Definitions */
void testPHYTransmit(testPHYTransmitStackData *SD)
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
  b_struct_T c_ObjPreambleDemod;
  comm_AGC ObjAGC;
  comm_SDRuReceiver ObjSDRuReceiver;
  commcodegen_CRCDetector ObjDetect;

  /*            %Objects */
  /*          %Structs */
  /*   %Values/Vectors */
  emlrtPushRtStackR2012b(&b_emlrtRSI, emlrtRootTLSGlobal);

  /*  System parameters to adjust because of hardware limitation */
  /*  Frames to capture */
  emlrtPushRtStackR2012b(&f_emlrtRSI, emlrtRootTLSGlobal);
  generateOFDMSignal_TX2(&b_unusedU1, &b_unusedU0, &unusedU0, &unusedU1,
    SD->f3.unusedU2, &SD->f3.rx);
  emlrtPopRtStackR2012b(&f_emlrtRSI, emlrtRootTLSGlobal);

  /* just need for sizing */
  /*  Set desired frequeny */
  /*  Set frequency bin width */
  /*  Setup transmitter */
  emlrtPushRtStackR2012b(&c_emlrtRSI, emlrtRootTLSGlobal);
  SDRuTransmitter_SDRuTransmitter(&ObjSDRuTransmitter);
  emlrtPopRtStackR2012b(&c_emlrtRSI, emlrtRootTLSGlobal);

  /*  Setup Parameters */
  emlrtPushRtStackR2012b(&g_emlrtRSI, emlrtRootTLSGlobal);
  generateOFDMSignal(&b_ObjDataDemod, &b_ObjPreambleDemod, &ObjPreambleDemod,
                     &ObjDataDemod, SD->f3.unusedU3, &SD->f3.b_rx);
  emlrtPopRtStackR2012b(&g_emlrtRSI, emlrtRootTLSGlobal);

  /* _TX2('HelloShannon'); */
  /* ceil( rx.frameLength*4 ); %Size of Buffer of sliding window */
  /* offsetCompensationValue = -77148;% Get from calibration */
  /* offsetCompensationValue = 71289;% Get from calibration */
  /*  Sync Algorithms */
  /* Number of frequency estimates to be averaged together for frequency corrections (Higher==More stability, Lower==More responsiveness) */
  /* Create memory structure to collect measurements for sync algorithms */
  initializeOFDMSyncMemory_sdr(&c_ObjPreambleDemod);

  /*  Gain control */
  emlrtPushRtStackR2012b(&d_emlrtRSI, emlrtRootTLSGlobal);
  AGC_AGC(&ObjAGC);
  emlrtPopRtStackR2012b(&d_emlrtRSI, emlrtRootTLSGlobal);

  /*  Value must be constant, equal to rx.receiveBufferLength */
  /*  USRP */
  emlrtPushRtStackR2012b(&e_emlrtRSI, emlrtRootTLSGlobal);
  SDRuReceiver_SDRuReceiver(&ObjSDRuReceiver);
  emlrtPopRtStackR2012b(&e_emlrtRSI, emlrtRootTLSGlobal);

  /*  CRC */
  emlrtPushRtStackR2012b(&h_emlrtRSI, emlrtRootTLSGlobal);
  CRCDetector_CRCDetector(&ObjDetect);
  emlrtPopRtStackR2012b(&h_emlrtRSI, emlrtRootTLSGlobal);

  /*  Timeout info */
  /*  Soft decisions */
  /* 3 for CRC */
  emlrtPopRtStackR2012b(&b_emlrtRSI, emlrtRootTLSGlobal);

  /*  Adjust offset for node */
  /* ObjSDRuTransmitter.CenterFrequency = tx.CenterFrequency + offset; */
  while (1) {
    emlrtPushRtStackR2012b(&emlrtRSI, emlrtRootTLSGlobal);
    PHYTransmit(SD, &ObjSDRuTransmitter, &ObjSDRuReceiver);
    emlrtPopRtStackR2012b(&emlrtRSI, emlrtRootTLSGlobal);
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, emlrtRootTLSGlobal);
  }
}

/* End of code generation (testPHYTransmit.c) */
