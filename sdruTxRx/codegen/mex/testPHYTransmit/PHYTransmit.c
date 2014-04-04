/*
 * PHYTransmit.c
 *
 * Code generation for function 'PHYTransmit'
 *
 * C source code generated on: Sat Mar 29 15:48:37 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testPHYTransmit.h"
#include "PHYTransmit.h"
#include "SystemCore.h"
#include "generateOFDMSignal_TX2.h"
#include "testPHYTransmit_data.h"

/* Variable Definitions */
static emlrtRSInfo se_emlrtRSI = { 29, "PHYTransmit",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/PHYTransmit.m" };

static emlrtRSInfo te_emlrtRSI = { 32, "PHYTransmit",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/PHYTransmit.m" };

static emlrtRSInfo ue_emlrtRSI = { 16, "PHYTransmit",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/PHYTransmit.m" };

/* Function Definitions */
void PHYTransmit(testPHYTransmitStackData *SD, comm_SDRuTransmitter
                 *ObjSDRuTransmitter, comm_SDRuReceiver *ObjSDRuReceiver)
{
  struct_T unusedU2;
  OFDMDemodulator *unusedU1;
  OFDMDemodulator_1 *unusedU0;
  OFDMDemodulator_1 b_unusedU0;
  OFDMDemodulator b_unusedU1;
  int32_T framesTransmitted;

  /*  Send Messages */
  /* % Create message bits */
  /*  The output needs to be duplicated to long vectors to help prevent */
  /*  Underflow for the USRP */
  emlrtPushRtStackR2012b(&ue_emlrtRSI, emlrtRootTLSGlobal);
  b_generateOFDMSignal_TX2(&b_unusedU1, &b_unusedU0, &unusedU0, &unusedU1,
    SD->f2.dataToTx, &unusedU2);
  emlrtPopRtStackR2012b(&ue_emlrtRSI, emlrtRootTLSGlobal);

  /*  30 Dupe frames created (NOTE! author shouldcreate shorter simpler function) */
  /* % Run transmitter */
  /* increasing value will help receiver, 10 */
  /*  This should be longer to help transmit over periods when the RX is */
  /*  cleaning its buffer */
  for (framesTransmitted = 0; framesTransmitted < 10; framesTransmitted++) {
    emlrtPushRtStackR2012b(&se_emlrtRSI, emlrtRootTLSGlobal);
    g_SystemCore_step(SD, ObjSDRuTransmitter, SD->f2.dataToTx);
    emlrtPopRtStackR2012b(&se_emlrtRSI, emlrtRootTLSGlobal);

    /* if mod(framesTransmitted,60) == 0 */
    emlrtPushRtStackR2012b(&te_emlrtRSI, emlrtRootTLSGlobal);
    h_SystemCore_step(SD, ObjSDRuReceiver);
    emlrtPopRtStackR2012b(&te_emlrtRSI, emlrtRootTLSGlobal);

    /*  Call used to prevent Overflow.  Essentially will clean up receive buffer, will be filled with crosstalk frames */
    /* end */
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, emlrtRootTLSGlobal);
  }

  /* obj.pSDRuTransmitter.reset;%stop transmitting? */
}

/* End of code generation (PHYTransmit.c) */
