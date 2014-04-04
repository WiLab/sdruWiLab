/*
 * PHYTransmit.c
 *
 * Code generation for function 'PHYTransmit'
 *
 * C source code generated on: Thu Apr  3 19:51:42 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testMACReceiver.h"
#include "PHYTransmit.h"
#include "generateOFDMSignal_TX2.h"
#include "SystemCore.h"
#include "testMACReceiver_data.h"

/* Variable Definitions */
static emlrtRSInfo bk_emlrtRSI = { 29, "PHYTransmit",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/PHYTransmit.m" };

static emlrtRSInfo ck_emlrtRSI = { 32, "PHYTransmit",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/PHYTransmit.m" };

static emlrtRSInfo dk_emlrtRSI = { 16, "PHYTransmit",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/PHYTransmit.m" };

/* Function Definitions */
void PHYTransmit(testMACReceiverStackData *SD, comm_SDRuTransmitter
                 *ObjSDRuTransmitter, comm_SDRuReceiver *ObjSDRuReceiver, real_T
                 originNodeID, real_T destNodeID)
{
  OFDMDemodulator_2 *unusedU1;
  OFDMDemodulator_3 *unusedU0;
  OFDMDemodulator_3 b_unusedU0;
  OFDMDemodulator_2 b_unusedU1;
  int32_T framesTransmitted;

  /*  Send Messages */
  /* % Create message bits */
  /*  The output needs to be duplicated to long vectors to help prevent */
  /*  Underflow for the USRP */
  emlrtPushRtStackR2012b(&dk_emlrtRSI, emlrtRootTLSGlobal);
  b_generateOFDMSignal_TX2(SD, originNodeID, destNodeID, &b_unusedU1,
    &b_unusedU0, &unusedU0, &unusedU1, SD->u2.f9.dataToTx, &SD->u2.f9.unusedU2);
  emlrtPopRtStackR2012b(&dk_emlrtRSI, emlrtRootTLSGlobal);

  /*  30 Dupe frames created (NOTE! author shouldcreate shorter simpler function) */
  /* % Run transmitter */
  /* increasing value will help receiver, 10 */
  /*  This should be longer to help transmit over periods when the RX is */
  /*  cleaning its buffer */
  for (framesTransmitted = 0; framesTransmitted < 10; framesTransmitted++) {
    emlrtPushRtStackR2012b(&bk_emlrtRSI, emlrtRootTLSGlobal);
    i_SystemCore_step(SD, ObjSDRuTransmitter, SD->u2.f9.dataToTx);
    emlrtPopRtStackR2012b(&bk_emlrtRSI, emlrtRootTLSGlobal);

    /* if mod(framesTransmitted,60) == 0 */
    emlrtPushRtStackR2012b(&ck_emlrtRSI, emlrtRootTLSGlobal);
    j_SystemCore_step(SD, ObjSDRuReceiver);
    emlrtPopRtStackR2012b(&ck_emlrtRSI, emlrtRootTLSGlobal);

    /*  Call used to prevent Overflow.  Essentially will clean up receive buffer, will be filled with crosstalk frames */
    /* end */
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, emlrtRootTLSGlobal);
  }

  /* obj.pSDRuTransmitter.reset;%stop transmitting? */
}

/* End of code generation (PHYTransmit.c) */
