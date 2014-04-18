/*
 * initializeOFDMSyncMemory_sdr.c
 *
 * Code generation for function 'initializeOFDMSyncMemory_sdr'
 *
 * C source code generated on: Thu Apr 17 22:51:42 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testPHYReceive.h"
#include "initializeOFDMSyncMemory_sdr.h"
#include <stdio.h>

/* Function Definitions */
void initializeOFDMSyncMemory_sdr(struct_T *estimate)
{
  int32_T i;

  /*  initializeOFDMSyncMemory: Initialize memory for simulation which is returned by */
  /*  the main function OFDM80211aReceiver */
  /*  Pre-initialize estimates to be saved between numFrames */
  estimate->phi = 0.0;
  estimate->delay = 0.0;

  /* Additional points needed for sliding buffer  */
  estimate->numPeaks = 0.0;

  /* Additional points needed for sliding buffer */
  for (i = 0; i < 15; i++) {
    estimate->frequency[i] = 0.0;
  }

  estimate->phase = 0.0;
  estimate->frequencyMA = 0.0;
  estimate->numProcessed = 0.0;

  /* Tracking number of processed found numFrames */
  estimate->inputBufferLength = 5120.0;

  /* Input buffer */
  estimate->numFreqToAverage = 15.0;

  /* Buffer for moving averages of offset estimates */
  estimate->pilotEqGains.size[0] = 48;
  estimate->pilotEqGains.size[1] = 12;
  for (i = 0; i < 576; i++) {
    estimate->pilotEqGains.data[i].re = 0.0;
    estimate->pilotEqGains.data[i].im = 0.0;
  }

  estimate->preambleEqGains.size[0] = 53;
  for (i = 0; i < 53; i++) {
    estimate->preambleEqGains.data[i].re = 0.0;
    estimate->preambleEqGains.data[i].im = 0.0;
  }

  estimate->message.size[0] = 80;
  for (i = 0; i < 80; i++) {
    estimate->message.data[i] = 0.0;
  }

  /* Save individual received frame BER's */
  estimate->printReceivedData = FALSE;
}

/* End of code generation (initializeOFDMSyncMemory_sdr.c) */
