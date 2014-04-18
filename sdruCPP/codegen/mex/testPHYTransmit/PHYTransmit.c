/*
 * PHYTransmit.c
 *
 * Code generation for function 'PHYTransmit'
 *
 * C source code generated on: Fri Apr 18 16:24:32 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testPHYTransmit.h"
#include "PHYTransmit.h"
#include "SystemCore.h"
#include "generateOFDMSignal_TX2.h"
#include "testPHYTransmit_data.h"
#include <stdio.h>

/* Variable Definitions */
static emlrtRSInfo ue_emlrtRSI = { 28, "PHYTransmit",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/PHYTransmit.m" };

static emlrtRSInfo ve_emlrtRSI = { 15, "PHYTransmit",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/PHYTransmit.m" };

/* Function Definitions */
void PHYTransmit(testPHYTransmitStackData *SD, comm_SDRuTransmitter
                 *b_ObjSDRuTransmitter)
{
  OFDMDemodulator *unusedU1;
  OFDMDemodulator_1 *unusedU0;
  OFDMDemodulator_1 b_unusedU0;
  OFDMDemodulator b_unusedU1;
  int32_T framesTransmitted;

  /*  Send Messages */
  /* % Create message bits */
  /*  The output needs to be duplicated to long vectors to help prevent */
  /*  Underflow for the USRP */
  emlrtPushRtStackR2012b(&ve_emlrtRSI, emlrtRootTLSGlobal);
  b_generateOFDMSignal_TX2(&b_unusedU1, &b_unusedU0, &unusedU0, &unusedU1,
    SD->u2.f4.dataToTx, &SD->u2.f4.unusedU2);
  emlrtPopRtStackR2012b(&ve_emlrtRSI, emlrtRootTLSGlobal);

  /*  30 Dupe frames created (NOTE! author shouldcreate shorter simpler function) */
  /* % Run transmitter */
  /* increasing value will help receiver, 10 */
  /*  This should be longer to help transmit over periods when the RX is */
  /*  cleaning its buffer */
  for (framesTransmitted = 0; framesTransmitted < 10; framesTransmitted++) {
    emlrtPushRtStackR2012b(&ue_emlrtRSI, emlrtRootTLSGlobal);
    g_SystemCore_step(SD, b_ObjSDRuTransmitter, SD->u2.f4.dataToTx);
    emlrtPopRtStackR2012b(&ue_emlrtRSI, emlrtRootTLSGlobal);

    /* if mod(framesTransmitted,60) == 0 */
    /* end */
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, emlrtRootTLSGlobal);
  }

  /* obj.pSDRuTransmitter.reset;%stop transmitting? */
}

/* End of code generation (PHYTransmit.c) */
