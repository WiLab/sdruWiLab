/*
 * CreateTXRX.c
 *
 * Code generation for function 'CreateTXRX'
 *
 * C source code generated on: Thu Mar  6 23:19:54 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testSpectrumSenseP25.h"
#include "CreateTXRX.h"
#include "initializeOFDMSyncMemory_sdr.h"
#include "AGC.h"
#include "CRCDetector.h"
#include "SDRuReceiver.h"
#include "generateOFDMSignal.h"
#include "SDRuTransmitter.h"
#include "generateOFDMSignal_TX2.h"
#include <stdio.h>

/* Variable Definitions */
static emlrtRSInfo d_emlrtRSI = { 18, "CreateTXRX",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/CreateTXRX.m" };

static emlrtRSInfo e_emlrtRSI = { 40, "CreateTXRX",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/CreateTXRX.m" };

static emlrtRSInfo f_emlrtRSI = { 43, "CreateTXRX",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/CreateTXRX.m" };

static emlrtRSInfo g_emlrtRSI = { 46, "CreateTXRX",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/CreateTXRX.m" };

static emlrtRSInfo h_emlrtRSI = { 11, "CreateTXRX",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/CreateTXRX.m" };

static emlrtRSInfo i_emlrtRSI = { 25, "CreateTXRX",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/CreateTXRX.m" };

static emlrtRSInfo j_emlrtRSI = { 54, "CreateTXRX",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/CreateTXRX.m" };

/* Function Definitions */
void CreateTXRX(testSpectrumSenseP25StackData *SD, const emlrtStack *sp,
                comm_SDRuTransmitter *iobj_0, OFDMDemodulator_1 *iobj_1,
                OFDMDemodulator *iobj_2, comm_AGC *iobj_3, comm_SDRuReceiver
                *iobj_4, commcodegen_CRCDetector *iobj_5, comm_AGC **ObjAGC,
                comm_SDRuReceiver **ObjSDRuReceiver, comm_SDRuTransmitter
                **ObjSDRuTransmitter, commcodegen_CRCDetector **ObjDetect,
                OFDMDemodulator_1 **ObjPreambleDemod, OFDMDemodulator
                **ObjDataDemod, c_struct_T *tx, real_T *timeoutDuration, real_T
                messageBits_data[563], int32_T messageBits_size[2])
{
  OFDMDemodulator *unusedU1;
  OFDMDemodulator_1 *unusedU0;
  OFDMDemodulator_1 b_unusedU0;
  OFDMDemodulator b_unusedU1;
  real_T rx_originalData[560];
  int32_T i;
  creal_T rx_shortPreambleOFDM[64];
  creal_T rx_completeShortPreambleOFDM[160];
  creal_T rx_shortPreamble[53];
  real_T rx_longPreamble[53];
  creal_T rx_longPreambleOFDM[64];
  creal_T rx_completeLongPreambleOFDM[160];
  real_T rx_pilots[48];
  creal_T rx_preambles[320];
  real_T c_rx_pilotLocationsWithoutGuard[4];
  real_T rx_dataSubcarrierIndexies_data[48];
  real_T rx_FFTLength;
  boolean_T rx_enableMA;
  real_T rx_numCarriers;
  real_T rx_padBits;
  real_T rx_numSamples;
  real_T rx_messageCharacters;
  real_T rx_numFrames;
  real_T rx_frameLength;
  real_T rx_DecimationFactor;
  real_T rx_receiveBufferLength;
  OFDMDemodulator *b_ObjDataDemod;
  OFDMDemodulator_1 *r0;
  e_struct_T ir_emlrtRSI;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;

  /*  System parameters to adjust because of hardware limitation */
  /*  Frames to capture */
  st.site = &h_emlrtRSI;
  generateOFDMSignal_TX2(&st, &b_unusedU1, &b_unusedU0, &unusedU0, &unusedU1,
    SD->f0.unusedU2, &SD->f0.rx);
  for (i = 0; i < 560; i++) {
    rx_originalData[i] = SD->f0.rx.originalData[i];
  }

  for (i = 0; i < 64; i++) {
    rx_shortPreambleOFDM[i] = SD->f0.rx.shortPreambleOFDM[i];
  }

  for (i = 0; i < 160; i++) {
    rx_completeShortPreambleOFDM[i] = SD->f0.rx.completeShortPreambleOFDM[i];
  }

  for (i = 0; i < 53; i++) {
    rx_shortPreamble[i] = SD->f0.rx.shortPreamble[i];
  }

  for (i = 0; i < 53; i++) {
    rx_longPreamble[i] = SD->f0.rx.longPreamble[i];
  }

  for (i = 0; i < 64; i++) {
    rx_longPreambleOFDM[i] = SD->f0.rx.longPreambleOFDM[i];
  }

  for (i = 0; i < 160; i++) {
    rx_completeLongPreambleOFDM[i] = SD->f0.rx.completeLongPreambleOFDM[i];
  }

  for (i = 0; i < 48; i++) {
    rx_pilots[i] = SD->f0.rx.pilots[i];
  }

  for (i = 0; i < 320; i++) {
    rx_preambles[i] = SD->f0.rx.preambles[i];
  }

  for (i = 0; i < 4; i++) {
    c_rx_pilotLocationsWithoutGuard[i] =
      SD->f0.rx.pilotLocationsWithoutGuardbands[i];
  }

  for (i = 0; i < 48; i++) {
    rx_dataSubcarrierIndexies_data[i] = SD->f0.rx.dataSubcarrierIndexies.data[i];
  }

  rx_FFTLength = SD->f0.rx.FFTLength;
  rx_enableMA = SD->f0.rx.enableMA;
  rx_numCarriers = SD->f0.rx.numCarriers;
  rx_padBits = SD->f0.rx.padBits;
  rx_numSamples = SD->f0.rx.numSamples;
  rx_messageCharacters = SD->f0.rx.messageCharacters;
  rx_numFrames = SD->f0.rx.numFrames;
  rx_frameLength = SD->f0.rx.frameLength;
  rx_DecimationFactor = SD->f0.rx.DecimationFactor;
  rx_receiveBufferLength = SD->f0.rx.receiveBufferLength;
  for (i = 0; i < 560; i++) {
    tx->originalData[i] = rx_originalData[i];
  }

  for (i = 0; i < 64; i++) {
    tx->shortPreambleOFDM[i] = rx_shortPreambleOFDM[i];
  }

  for (i = 0; i < 160; i++) {
    tx->completeShortPreambleOFDM[i] = rx_completeShortPreambleOFDM[i];
  }

  for (i = 0; i < 53; i++) {
    tx->shortPreamble[i] = rx_shortPreamble[i];
  }

  for (i = 0; i < 53; i++) {
    tx->longPreamble[i] = rx_longPreamble[i];
  }

  for (i = 0; i < 64; i++) {
    tx->longPreambleOFDM[i] = rx_longPreambleOFDM[i];
  }

  for (i = 0; i < 160; i++) {
    tx->completeLongPreambleOFDM[i] = rx_completeLongPreambleOFDM[i];
  }

  for (i = 0; i < 48; i++) {
    tx->pilots[i] = rx_pilots[i];
  }

  for (i = 0; i < 320; i++) {
    tx->preambles[i] = rx_preambles[i];
  }

  for (i = 0; i < 4; i++) {
    tx->pilotLocationsWithoutGuardbands[i] = c_rx_pilotLocationsWithoutGuard[i];
  }

  tx->dataSubcarrierIndexies.size[0] = 1;
  tx->dataSubcarrierIndexies.size[1] = 48;
  for (i = 0; i < 48; i++) {
    tx->dataSubcarrierIndexies.data[i] = rx_dataSubcarrierIndexies_data[i];
  }

  tx->FFTLength = rx_FFTLength;
  tx->enableMA = rx_enableMA;
  tx->numCarriers = rx_numCarriers;
  tx->padBits = rx_padBits;
  tx->numSamples = rx_numSamples;
  tx->messageCharacters = rx_messageCharacters;
  tx->numFrames = rx_numFrames;
  tx->frameLength = rx_frameLength;
  tx->DecimationFactor = rx_DecimationFactor;
  tx->receiveBufferLength = rx_receiveBufferLength;

  /* just need for sizing */
  tx->samplingFreq = 5.0E+6;

  /*  Set desired frequeny */
  tx->CenterFrequency = 2.24E+9;
  tx->freqBin = 78125.0;

  /*  Set frequency bin width */
  /*  Setup transmitter */
  st.site = &d_emlrtRSI;
  *ObjSDRuTransmitter = SDRuTransmitter_SDRuTransmitter(&st, iobj_0);

  /*  Setup Parameters */
  st.site = &i_emlrtRSI;
  generateOFDMSignal(&st, iobj_2, iobj_1, &r0, &b_ObjDataDemod, SD->f0.unusedU3,
                     &SD->f0.b_rx);
  *ObjPreambleDemod = r0;
  *ObjDataDemod = b_ObjDataDemod;

  /* _TX2('HelloShannon'); */
  /* ceil( rx.frameLength*4 ); %Size of Buffer of sliding window */
  /* offsetCompensationValue = -77148;% Get from calibration */
  /* offsetCompensationValue = 71289;% Get from calibration */
  /*  Sync Algorithms */
  /* Number of frequency estimates to be averaged together for frequency corrections (Higher==More stability, Lower==More responsiveness) */
  /* Create memory structure to collect measurements for sync algorithms */
  st.site = &e_emlrtRSI;
  initializeOFDMSyncMemory_sdr(&ir_emlrtRSI);

  /*  Gain control */
  st.site = &f_emlrtRSI;
  *ObjAGC = AGC_AGC(iobj_3);

  /*  Value must be constant, equal to rx.receiveBufferLength */
  /*  USRP */
  st.site = &g_emlrtRSI;
  *ObjSDRuReceiver = SDRuReceiver_SDRuReceiver(&st, iobj_4);

  /*  CRC */
  st.site = &j_emlrtRSI;
  *ObjDetect = CRCDetector_CRCDetector(iobj_5);

  /*  Timeout info */
  *timeoutDuration = 48.0;

  /*  Soft decisions */
  messageBits_size[0] = 1;
  messageBits_size[1] = 563;
  for (i = 0; i < 563; i++) {
    messageBits_data[i] = 0.0;
  }

  /* 3 for CRC */
}

/* End of code generation (CreateTXRX.c) */
