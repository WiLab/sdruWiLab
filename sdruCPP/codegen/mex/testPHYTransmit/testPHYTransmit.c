/*
 * testPHYTransmit.c
 *
 * Code generation for function 'testPHYTransmit'
 *
 * C source code generated on: Thu Apr 24 14:26:15 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testPHYTransmit.h"
#include "CreateTXRX_TX.h"
#include "PHYTransmit.h"
#include "testPHYTransmit_data.h"

/* Variable Definitions */
static OFDMDemodulator ObjDataDemod;
static OFDMDemodulator_1 ObjPreambleDemod;
static commcodegen_CRCDetector ObjDetect;
static comm_SDRuTransmitter ObjSDRuTransmitter;
static comm_AGC ObjAGC;
static emlrtRSInfo emlrtRSI = { 41, "testPHYTransmit",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/testPHYTransmit.m" };

static emlrtRSInfo b_emlrtRSI = { 16, "testPHYTransmit",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/testPHYTransmit.m" };

/* Function Definitions */
void testPHYTransmit(testPHYTransmitStackData *SD)
{
  struct_T r0;
  real_T tmp_data[1689];
  int32_T tmp_size[2];
  real_T timeoutDuration;
  OFDMDemodulator *b_ObjDataDemod;
  OFDMDemodulator_1 *b_ObjPreambleDemod;
  commcodegen_CRCDetector *b_ObjDetect;
  comm_SDRuTransmitter *b_ObjSDRuTransmitter;
  comm_AGC *b_ObjAGC;
  int32_T loop_ub;
  int32_T i0;

  /*            %Objects */
  /*          %Structs */
  /*   %Values/Vectors */
  if (!ObjSDRuTransmitter_not_empty) {
    /*            %Objects */
    /*          %Structs */
    /*   %Values/Vectors */
    emlrtPushRtStackR2012b(&b_emlrtRSI, emlrtRootTLSGlobal);
    CreateTXRX_TX(SD, &ObjSDRuTransmitter, &ObjPreambleDemod, &ObjDataDemod,
                  &ObjAGC, &ObjDetect, &b_ObjAGC, &b_ObjSDRuTransmitter,
                  &b_ObjDetect, &b_ObjPreambleDemod, &b_ObjDataDemod, &r0,
                  &SD->f5.r1, &timeoutDuration, tmp_data, tmp_size);
    messageBits.size[0] = 3;
    messageBits.size[1] = 563;
    loop_ub = tmp_size[0] * tmp_size[1];
    for (i0 = 0; i0 < loop_ub; i0++) {
      messageBits.data[i0] = tmp_data[i0];
    }

    tx = SD->f5.r1;
    estimate = r0;
    emlrtPopRtStackR2012b(&b_emlrtRSI, emlrtRootTLSGlobal);
    ObjSDRuTransmitter_not_empty = TRUE;
  }

  /*  Adjust offset for node */
  /* ObjSDRuTransmitter.CenterFrequency = tx.CenterFrequency + offset; */
  for (loop_ub = 0; loop_ub < 100000; loop_ub++) {
    /* fprintf('Transmitting\n'); */
    emlrtPushRtStackR2012b(&emlrtRSI, emlrtRootTLSGlobal);
    PHYTransmit(SD, &ObjSDRuTransmitter);
    emlrtPopRtStackR2012b(&emlrtRSI, emlrtRootTLSGlobal);
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, emlrtRootTLSGlobal);
  }
}

/* End of code generation (testPHYTransmit.c) */
