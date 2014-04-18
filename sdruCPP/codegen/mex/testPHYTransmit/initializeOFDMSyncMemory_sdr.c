/*
 * initializeOFDMSyncMemory_sdr.c
 *
 * Code generation for function 'initializeOFDMSyncMemory_sdr'
 *
 * C source code generated on: Fri Apr 18 16:24:32 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testPHYTransmit.h"
#include "initializeOFDMSyncMemory_sdr.h"
#include <stdio.h>

/* Function Definitions */
void initializeOFDMSyncMemory_sdr(struct_T *b_estimate)
{
  int32_T i;

  /*  initializeOFDMSyncMemory: Initialize memory for simulation which is returned by */
  /*  the main function OFDM80211aReceiver */
  /*  Pre-initialize estimates to be saved between numFrames */
  b_estimate->phi = 0.0;
  b_estimate->delay = 0.0;

  /* Additional points needed for sliding buffer  */
  b_estimate->numPeaks = 0.0;

  /* Additional points needed for sliding buffer */
  for (i = 0; i < 15; i++) {
    b_estimate->frequency[i] = 0.0;
  }

  b_estimate->phase = 0.0;
  b_estimate->frequencyMA = 0.0;
  b_estimate->numProcessed = 0.0;

  /* Tracking number of processed found numFrames */
  b_estimate->inputBufferLength = 5120.0;

  /* Input buffer */
  b_estimate->numFreqToAverage = 15.0;

  /* Buffer for moving averages of offset estimates */
  b_estimate->pilotEqGains.size[0] = 48;
  b_estimate->pilotEqGains.size[1] = 12;
  for (i = 0; i < 576; i++) {
    b_estimate->pilotEqGains.data[i].re = 0.0;
    b_estimate->pilotEqGains.data[i].im = 0.0;
  }

  b_estimate->preambleEqGains.size[0] = 53;
  for (i = 0; i < 53; i++) {
    b_estimate->preambleEqGains.data[i].re = 0.0;
    b_estimate->preambleEqGains.data[i].im = 0.0;
  }

  b_estimate->message.size[0] = 80;
  for (i = 0; i < 80; i++) {
    b_estimate->message.data[i] = 0.0;
  }

  /* Save individual received frame BER's */
  b_estimate->printReceivedData = FALSE;
}

/* End of code generation (initializeOFDMSyncMemory_sdr.c) */
