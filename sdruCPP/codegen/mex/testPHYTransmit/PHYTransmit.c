/*
 * PHYTransmit.c
 *
 * Code generation for function 'PHYTransmit'
 *
 * C source code generated on: Thu Feb 27 11:47:47 2014
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
static emlrtRSInfo rl_emlrtRSI = { 27, "PHYTransmit",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/PHYTransmit.m" };

static emlrtRSInfo sl_emlrtRSI = { 30, "PHYTransmit",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/PHYTransmit.m" };

static emlrtRSInfo tl_emlrtRSI = { 14, "PHYTransmit",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/PHYTransmit.m" };

/* Function Definitions */
void PHYTransmit(testPHYTransmitStackData *SD, const emlrtStack *sp,
                 comm_SDRuTransmitter *ObjSDRuTransmitter, comm_SDRuReceiver
                 *ObjSDRuReceiver)
{
  b_struct_T unusedU2;
  OFDMDemodulator *unusedU1;
  OFDMDemodulator_1 *unusedU0;
  OFDMDemodulator_1 b_unusedU0;
  OFDMDemodulator b_unusedU1;
  int32_T framesTransmitted;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;

  /*  Send Messages */
  /* % Create message bits */
  /*  The output needs to be duplicated to long vectors to help prevent */
  /*  Underflow for the USRP */
  st.site = &tl_emlrtRSI;
  b_generateOFDMSignal_TX2(&st, &b_unusedU1, &b_unusedU0, &unusedU0, &unusedU1,
    SD->f2.dataToTx, &unusedU2);

  /*  30 Dupe frames created (NOTE! author shouldcreate shorter simpler function) */
  /* % Run transmitter */
  /* increasing value will help receiver */
  /*  This should be longer to help transmit over periods when the RX is */
  /*  cleaning its buffer */
  for (framesTransmitted = 0; framesTransmitted < 10; framesTransmitted++) {
    st.site = &rl_emlrtRSI;
    j_SystemCore_step(SD, &st, ObjSDRuTransmitter, SD->f2.dataToTx);

    /* if mod(framesTransmitted,60) == 0 */
    st.site = &sl_emlrtRSI;
    k_SystemCore_step(SD, &st, ObjSDRuReceiver);

    /*  Call used to prevent Overflow.  Essentially will clean up receive buffer, will be filled with crosstalk frames */
    /* end */
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
  }

  /* obj.pSDRuTransmitter.reset;%stop transmitting? */
}

/* End of code generation (PHYTransmit.c) */
