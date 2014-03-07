/*
 * testSpectrumSenseP25.c
 *
 * Code generation for function 'testSpectrumSenseP25'
 *
 * C source code generated on: Thu Mar  6 23:19:54 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testSpectrumSenseP25.h"
#include "AGC.h"
#include "testSpectrumSenseP25_emxutil.h"
#include "CreateTXRX.h"
#include "fprintf.h"
#include "commP25sscaGen.h"
#include "SDRuReceiver.h"
#include "closeDataConnection.h"
#include "testSpectrumSenseP25_mexutil.h"
#include "testSpectrumSenseP25_data.h"
#include <stdio.h>

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 18, "testSpectrumSenseP25",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/testSpectrumSenseP25.m" };

static emlrtRSInfo b_emlrtRSI = { 19, "testSpectrumSenseP25",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/testSpectrumSenseP25.m" };

static emlrtRSInfo c_emlrtRSI = { 3, "testSpectrumSenseP25",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/testSpectrumSenseP25.m" };

static emlrtRSInfo pl_emlrtRSI = { 8, "SpectrumSenseP25",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/SpectrumSenseP25.m" };

static emlrtRSInfo ql_emlrtRSI = { 9, "SpectrumSenseP25",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/SpectrumSenseP25.m" };

static emlrtRSInfo rl_emlrtRSI = { 19, "SpectrumSenseP25",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/SpectrumSenseP25.m" };

static emlrtRSInfo vl_emlrtRSI = { 93, "reportSDRuStatus",
  "/Users/travis/Documents/sdru/reportSDRuStatus.m" };

static emlrtRSInfo xl_emlrtRSI = { 83, "reportSDRuStatus",
  "/Users/travis/Documents/sdru/reportSDRuStatus.m" };

static emlrtRSInfo am_emlrtRSI = { 73, "reportSDRuStatus",
  "/Users/travis/Documents/sdru/reportSDRuStatus.m" };

static emlrtRSInfo cm_emlrtRSI = { 63, "reportSDRuStatus",
  "/Users/travis/Documents/sdru/reportSDRuStatus.m" };

static emlrtRSInfo em_emlrtRSI = { 53, "reportSDRuStatus",
  "/Users/travis/Documents/sdru/reportSDRuStatus.m" };

static emlrtRSInfo gm_emlrtRSI = { 42, "reportSDRuStatus",
  "/Users/travis/Documents/sdru/reportSDRuStatus.m" };

static emlrtRSInfo km_emlrtRSI = { 179, "AGC",
  "/Applications/MATLAB_R2013b.app/toolbox/comm/comm/+comm/AGC.m" };

static emlrtRSInfo lm_emlrtRSI = { 180, "AGC",
  "/Applications/MATLAB_R2013b.app/toolbox/comm/comm/+comm/AGC.m" };

static emlrtRSInfo mm_emlrtRSI = { 183, "AGC",
  "/Applications/MATLAB_R2013b.app/toolbox/comm/comm/+comm/AGC.m" };

static emlrtRSInfo nm_emlrtRSI = { 189, "AGC",
  "/Applications/MATLAB_R2013b.app/toolbox/comm/comm/+comm/AGC.m" };

static emlrtRSInfo om_emlrtRSI = { 190, "AGC",
  "/Applications/MATLAB_R2013b.app/toolbox/comm/comm/+comm/AGC.m" };

static emlrtRSInfo pm_emlrtRSI = { 194, "AGC",
  "/Applications/MATLAB_R2013b.app/toolbox/comm/comm/+comm/AGC.m" };

static emlrtRSInfo qm_emlrtRSI = { 195, "AGC",
  "/Applications/MATLAB_R2013b.app/toolbox/comm/comm/+comm/AGC.m" };

static emlrtRSInfo sm_emlrtRSI = { 262, "AGC",
  "/Applications/MATLAB_R2013b.app/toolbox/comm/comm/+comm/AGC.m" };

static emlrtRTEInfo emlrtRTEI = { 1, 10, "testSpectrumSenseP25",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/testSpectrumSenseP25.m" };

static emlrtECInfo emlrtECI = { -1, 9, 5, "SpectrumSenseP25",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/SpectrumSenseP25.m" };

/* Function Declarations */
static const mxArray *c_message(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, emlrtMCInfo *location);

/* Function Definitions */
static const mxArray *c_message(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, emlrtMCInfo *location)
{
  const mxArray *pArrays[3];
  const mxArray *m25;
  pArrays[0] = b;
  pArrays[1] = c;
  pArrays[2] = d;
  return emlrtCallMATLABR2012b(sp, 1, &m25, 3, pArrays, "message", TRUE,
    location);
}

void testSpectrumSenseP25(testSpectrumSenseP25StackData *SD, const emlrtStack
  *sp)
{
  int32_T messageBits_size[2];
  real_T messageBits_data[563];
  real_T timeoutDuration;
  OFDMDemodulator *ObjDataDemod;
  OFDMDemodulator_1 *ObjPreambleDemod;
  commcodegen_CRCDetector *ObjDetect;
  comm_SDRuTransmitter *ObjSDRuTransmitter;
  comm_SDRuReceiver *ObjSDRuReceiver;
  comm_AGC *ObjAGC;
  commcodegen_CRCDetector b_ObjDetect;
  comm_SDRuReceiver b_ObjSDRuReceiver;
  comm_AGC b_ObjAGC;
  OFDMDemodulator b_ObjDataDemod;
  OFDMDemodulator_1 b_ObjPreambleDemod;
  comm_SDRuTransmitter b_ObjSDRuTransmitter;
  emxArray_real_T *alphao;
  int32_T k;
  int32_T exitg1;
  comm_AGC *c_ObjAGC;
  comm_SDRuReceiver *c_ObjSDRuReceiver;
  int32_T b_k;
  const mxArray *y;
  static const int32_T iv0[2] = { 1, 45 };

  const mxArray *m0;
  char_T cv0[45];
  int32_T i;
  static const char_T cv1[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C',
    'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv1[2] = { 1, 4 };

  char_T cv2[4];
  static const char_T cv3[4] = { 's', 't', 'e', 'p' };

  const mxArray *c_y;
  static const int32_T iv2[2] = { 1, 51 };

  char_T cv4[51];
  static const char_T cv5[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l',
    'e', 'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *d_y;
  static const int32_T iv3[2] = { 1, 5 };

  char_T cv6[5];
  static const char_T cv7[5] = { 's', 'e', 't', 'u', 'p' };

  int32_T errMsg_size[2];
  char_T errMsg_data[1024];
  UsrpErrorCapiEnumT deviceStatus;
  const mxArray *e_y;
  static const int32_T iv4[2] = { 1, 35 };

  char_T cv8[35];
  static const char_T cv9[35] = { 's', 'd', 'r', 'u', ':', 'r', 'e', 'p', 'o',
    'r', 't', 'S', 'D', 'R', 'u', 'S', 't', 'a', 't', 'u', 's', ':', 'N', 'o',
    't', 'C', 'o', 'm', 'p', 'a', 't', 'i', 'b', 'l', 'e' };

  const mxArray *f_y;
  static const int32_T iv5[2] = { 1, 12 };

  char_T cv10[12];
  static const char_T cv11[12] = { '1', '9', '2', '.', '1', '6', '8', '.', '1',
    '0', '.', '2' };

  const mxArray *g_y;
  static const int32_T iv6[2] = { 1, 43 };

  char_T cv12[43];
  static const char_T cv13[43] = { 'r', 'e', 't', 'u', 'r', 'n', 'e', 'd', ' ',
    'b', 'y', ' ', '\'', 'g', 'e', 't', 'S', 'D', 'R', 'u', 'D', 'r', 'i', 'v',
    'e', 'r', 'V', 'e', 'r', 's', 'i', 'o', 'n', '\'', ' ', 'f', 'u', 'n', 'c',
    't', 'i', 'o', 'n' };

  const mxArray *h_y;
  static const int32_T iv7[2] = { 1, 35 };

  static const char_T cv14[35] = { 's', 'd', 'r', 'u', ':', 'r', 'e', 'p', 'o',
    'r', 't', 'S', 'D', 'R', 'u', 'S', 't', 'a', 't', 'u', 's', ':', 'N', 'o',
    't', 'R', 'e', 's', 'p', 'o', 'n', 'd', 'i', 'n', 'g' };

  const mxArray *i_y;
  static const int32_T iv8[2] = { 1, 12 };

  const mxArray *j_y;
  static const int32_T iv9[2] = { 1, 28 };

  char_T cv15[28];
  static const char_T cv16[28] = { 's', 'd', 'r', 'u', ':', 'r', 'e', 'p', 'o',
    'r', 't', 'S', 'D', 'R', 'u', 'S', 't', 'a', 't', 'u', 's', ':', 'R', 'x',
    'B', 'u', 's', 'y' };

  const mxArray *k_y;
  static const int32_T iv10[2] = { 1, 12 };

  const mxArray *l_y;
  static const int32_T iv11[2] = { 1, 28 };

  static const char_T cv17[28] = { 's', 'd', 'r', 'u', ':', 'r', 'e', 'p', 'o',
    'r', 't', 'S', 'D', 'R', 'u', 'S', 't', 'a', 't', 'u', 's', ':', 'T', 'x',
    'B', 'u', 's', 'y' };

  const mxArray *m_y;
  static const int32_T iv12[2] = { 1, 12 };

  const mxArray *n_y;
  static const int32_T iv13[2] = { 1, 26 };

  char_T cv18[26];
  static const char_T cv19[26] = { 's', 'd', 'r', 'u', ':', 'r', 'e', 'p', 'o',
    'r', 't', 'S', 'D', 'R', 'u', 'S', 't', 'a', 't', 'u', 's', ':', 'B', 'u',
    's', 'y' };

  const mxArray *o_y;
  static const int32_T iv14[2] = { 1, 12 };

  const mxArray *p_y;
  static const int32_T iv15[2] = { 1, 35 };

  static const char_T cv20[35] = { 's', 'd', 'r', 'u', ':', 'r', 'e', 'p', 'o',
    'r', 't', 'S', 'D', 'R', 'u', 'S', 't', 'a', 't', 'u', 's', ':', 'U', 'n',
    'k', 'n', 'o', 'w', 'n', 'S', 't', 'a', 't', 'u', 's' };

  int32_T u_size[2];
  int32_T i0;
  char_T u_data[1024];
  const mxArray *q_y;
  static const int32_T iv16[1] = { 5120 };

  static const int32_T iv17[1] = { 0 };

  const mxArray *r_y;
  static const int32_T iv18[2] = { 1, 45 };

  const mxArray *s_y;
  static const int32_T iv19[2] = { 1, 4 };

  const mxArray *t_y;
  static const int32_T iv20[2] = { 1, 51 };

  const mxArray *u_y;
  static const int32_T iv21[2] = { 1, 5 };

  static const int16_T value[8] = { 5120, 1, 1, 1, 1, 1, 1, 1 };

  boolean_T anyInputSizeChanged;
  boolean_T exitg2;
  static const int16_T iv22[8] = { 5120, 1, 1, 1, 1, 1, 1, 1 };

  creal_T data_data[1];
  int32_T data_size[1];
  int32_T Sx_size[2];
  real_T Sx_data[195];
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  g_st.prev = &f_st;
  g_st.tls = f_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);

  /*            %Objects */
  /*          %Structs */
  /*   %Values/Vectors */
  st.site = &c_emlrtRSI;
  CreateTXRX(SD, &st, &b_ObjSDRuTransmitter, &b_ObjPreambleDemod,
             &b_ObjDataDemod, &b_ObjAGC, &b_ObjSDRuReceiver, &b_ObjDetect,
             &ObjAGC, &ObjSDRuReceiver, &ObjSDRuTransmitter, &ObjDetect,
             &ObjPreambleDemod, &ObjDataDemod, &SD->f1.tx, &timeoutDuration,
             messageBits_data, messageBits_size);
  emxInit_real_T(sp, &alphao, 2, &emlrtRTEI, TRUE);
  while (1) {
    k = 0;
    do {
      exitg1 = 0;
      emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
      if (k < 10) {
        st.site = &emlrtRSI;
        c_ObjAGC = &b_ObjAGC;
        c_ObjSDRuReceiver = &b_ObjSDRuReceiver;

        /*  Collect Data */
        for (b_k = 0; b_k < 10; b_k++) {
          b_st.site = &pl_emlrtRSI;
          if (!c_ObjSDRuReceiver->isReleased) {
          } else {
            y = NULL;
            m0 = mxCreateCharArray(2, iv0);
            for (i = 0; i < 45; i++) {
              cv0[i] = cv1[i];
            }

            emlrtInitCharArrayR2013a(&b_st, 45, m0, cv0);
            emlrtAssign(&y, m0);
            b_y = NULL;
            m0 = mxCreateCharArray(2, iv1);
            for (i = 0; i < 4; i++) {
              cv2[i] = cv3[i];
            }

            emlrtInitCharArrayR2013a(&b_st, 4, m0, cv2);
            emlrtAssign(&b_y, m0);
            c_st.site = &eb_emlrtRSI;
            b_error(&c_st, message(&c_st, y, b_y, &emlrtMCI), &emlrtMCI);
          }

          if (!c_ObjSDRuReceiver->isInitialized) {
            c_st.site = &eb_emlrtRSI;
            if (!c_ObjSDRuReceiver->isInitialized) {
            } else {
              c_y = NULL;
              m0 = mxCreateCharArray(2, iv2);
              for (i = 0; i < 51; i++) {
                cv4[i] = cv5[i];
              }

              emlrtInitCharArrayR2013a(&c_st, 51, m0, cv4);
              emlrtAssign(&c_y, m0);
              d_y = NULL;
              m0 = mxCreateCharArray(2, iv3);
              for (i = 0; i < 5; i++) {
                cv6[i] = cv7[i];
              }

              emlrtInitCharArrayR2013a(&c_st, 5, m0, cv6);
              emlrtAssign(&d_y, m0);
              d_st.site = &eb_emlrtRSI;
              b_error(&d_st, message(&d_st, c_y, d_y, &emlrtMCI), &emlrtMCI);
            }

            d_st.site = &eb_emlrtRSI;
            c_ObjSDRuReceiver->isInitialized = TRUE;
            e_st.site = &fb_emlrtRSI;
            d_st.site = &eb_emlrtRSI;
            d_st.site = &eb_emlrtRSI;
            e_st.site = &eb_emlrtRSI;
            d_st.site = &eb_emlrtRSI;
            d_st.site = &eb_emlrtRSI;
            e_st.site = &eb_emlrtRSI;
            d_st.site = &eb_emlrtRSI;
            e_st.site = &eb_emlrtRSI;
            f_st.site = &eb_emlrtRSI;
            f_st.site = &eb_emlrtRSI;
            d_st.site = &eb_emlrtRSI;
            e_st.site = &eb_emlrtRSI;
            e_st.site = &eb_emlrtRSI;
            d_st.site = &eb_emlrtRSI;
            d_st.site = &eb_emlrtRSI;
            d_st.site = &eb_emlrtRSI;
            d_st.site = &eb_emlrtRSI;
            e_st.site = &tj_emlrtRSI;
            SDRuReceiver_setupImplLocal(&e_st, c_ObjSDRuReceiver, &deviceStatus,
              errMsg_data, errMsg_size);
            if (deviceStatus == UsrpDriverSuccess) {
              e_st.site = &tj_emlrtRSI;
              f_st.site = &fb_emlrtRSI;
            } else {
              e_st.site = &tj_emlrtRSI;
              closeDataConnection(&e_st, c_ObjSDRuReceiver->pDriverHandle);
              e_st.site = &tj_emlrtRSI;
              f_st.site = &fb_emlrtRSI;
            }

            e_st.site = &tj_emlrtRSI;

            /* reportSDRuStatus SDRu status reporter */
            /*    reportSDRuStatus(STATUS,MSG,IP,METHOD) reports the SDRu status based on */
            /*    the STATUS input. STATUS is a UsrpErrorCapiEnumT type. IP is the IP */
            /*    address of the USRP(R) radio. METHOD is a UsrpReportMethodEnumT type and */
            /*    can be Warning, Error , or None. */
            /*  */
            /*    USRP(R) is a trademark of National Instruments Corp. */
            /*    Copyright 2012-2013 The MathWorks, Inc. */
            switch (deviceStatus) {
             case UsrpDriverNotCompatible:
              f_st.site = &gm_emlrtRSI;
              if (!(deviceStatus == UsrpDriverNotCompatible)) {
              } else {
                e_y = NULL;
                m0 = mxCreateCharArray(2, iv4);
                for (i = 0; i < 35; i++) {
                  cv8[i] = cv9[i];
                }

                emlrtInitCharArrayR2013a(&f_st, 35, m0, cv8);
                emlrtAssign(&e_y, m0);
                f_y = NULL;
                m0 = mxCreateCharArray(2, iv5);
                for (i = 0; i < 12; i++) {
                  cv10[i] = cv11[i];
                }

                emlrtInitCharArrayR2013a(&f_st, 12, m0, cv10);
                emlrtAssign(&f_y, m0);
                g_y = NULL;
                m0 = mxCreateCharArray(2, iv6);
                for (i = 0; i < 43; i++) {
                  cv12[i] = cv13[i];
                }

                emlrtInitCharArrayR2013a(&f_st, 43, m0, cv12);
                emlrtAssign(&g_y, m0);
                g_st.site = &yq_emlrtRSI;
                b_error(&g_st, c_message(&g_st, e_y, f_y, g_y, &g_emlrtMCI),
                        &g_emlrtMCI);
              }
              break;

             case UsrpDriverNotResponding:
              f_st.site = &em_emlrtRSI;
              if (!(deviceStatus == UsrpDriverNotResponding)) {
              } else {
                h_y = NULL;
                m0 = mxCreateCharArray(2, iv7);
                for (i = 0; i < 35; i++) {
                  cv8[i] = cv14[i];
                }

                emlrtInitCharArrayR2013a(&f_st, 35, m0, cv8);
                emlrtAssign(&h_y, m0);
                i_y = NULL;
                m0 = mxCreateCharArray(2, iv8);
                for (i = 0; i < 12; i++) {
                  cv10[i] = cv11[i];
                }

                emlrtInitCharArrayR2013a(&f_st, 12, m0, cv10);
                emlrtAssign(&i_y, m0);
                g_st.site = &yq_emlrtRSI;
                b_error(&g_st, message(&g_st, h_y, i_y, &g_emlrtMCI),
                        &g_emlrtMCI);
              }
              break;

             case UsrpDriverRxBusy:
              f_st.site = &cm_emlrtRSI;
              if (!(deviceStatus == UsrpDriverRxBusy)) {
              } else {
                j_y = NULL;
                m0 = mxCreateCharArray(2, iv9);
                for (i = 0; i < 28; i++) {
                  cv15[i] = cv16[i];
                }

                emlrtInitCharArrayR2013a(&f_st, 28, m0, cv15);
                emlrtAssign(&j_y, m0);
                k_y = NULL;
                m0 = mxCreateCharArray(2, iv10);
                for (i = 0; i < 12; i++) {
                  cv10[i] = cv11[i];
                }

                emlrtInitCharArrayR2013a(&f_st, 12, m0, cv10);
                emlrtAssign(&k_y, m0);
                g_st.site = &yq_emlrtRSI;
                b_error(&g_st, message(&g_st, j_y, k_y, &g_emlrtMCI),
                        &g_emlrtMCI);
              }
              break;

             case UsrpDriverTxBusy:
              f_st.site = &am_emlrtRSI;
              if (!(deviceStatus == UsrpDriverTxBusy)) {
              } else {
                l_y = NULL;
                m0 = mxCreateCharArray(2, iv11);
                for (i = 0; i < 28; i++) {
                  cv15[i] = cv17[i];
                }

                emlrtInitCharArrayR2013a(&f_st, 28, m0, cv15);
                emlrtAssign(&l_y, m0);
                m_y = NULL;
                m0 = mxCreateCharArray(2, iv12);
                for (i = 0; i < 12; i++) {
                  cv10[i] = cv11[i];
                }

                emlrtInitCharArrayR2013a(&f_st, 12, m0, cv10);
                emlrtAssign(&m_y, m0);
                g_st.site = &yq_emlrtRSI;
                b_error(&g_st, message(&g_st, l_y, m_y, &g_emlrtMCI),
                        &g_emlrtMCI);
              }
              break;

             case UsrpDriverBusy:
              f_st.site = &xl_emlrtRSI;
              if (!(deviceStatus == UsrpDriverBusy)) {
              } else {
                n_y = NULL;
                m0 = mxCreateCharArray(2, iv13);
                for (i = 0; i < 26; i++) {
                  cv18[i] = cv19[i];
                }

                emlrtInitCharArrayR2013a(&f_st, 26, m0, cv18);
                emlrtAssign(&n_y, m0);
                o_y = NULL;
                m0 = mxCreateCharArray(2, iv14);
                for (i = 0; i < 12; i++) {
                  cv10[i] = cv11[i];
                }

                emlrtInitCharArrayR2013a(&f_st, 12, m0, cv10);
                emlrtAssign(&o_y, m0);
                g_st.site = &yq_emlrtRSI;
                b_error(&g_st, message(&g_st, n_y, o_y, &g_emlrtMCI),
                        &g_emlrtMCI);
              }
              break;

             case UsrpDriverError:
              f_st.site = &vl_emlrtRSI;
              if (!(deviceStatus == UsrpDriverError)) {
              } else {
                p_y = NULL;
                m0 = mxCreateCharArray(2, iv15);
                for (i = 0; i < 35; i++) {
                  cv8[i] = cv20[i];
                }

                emlrtInitCharArrayR2013a(&f_st, 35, m0, cv8);
                emlrtAssign(&p_y, m0);
                u_size[0] = 1;
                u_size[1] = errMsg_size[1];
                i = errMsg_size[0] * errMsg_size[1];
                for (i0 = 0; i0 < i; i0++) {
                  u_data[i0] = errMsg_data[i0];
                }

                q_y = NULL;
                m0 = mxCreateCharArray(2, u_size);
                emlrtInitCharArrayR2013a(&f_st, u_size[1], m0, (char_T *)&u_data);
                emlrtAssign(&q_y, m0);
                g_st.site = &yq_emlrtRSI;
                b_error(&g_st, message(&g_st, p_y, q_y, &g_emlrtMCI),
                        &g_emlrtMCI);
              }
              break;
            }

            d_st.site = &eb_emlrtRSI;
            d_st.site = &eb_emlrtRSI;
            c_ObjSDRuReceiver->TunablePropsChanged = FALSE;
            e_st.site = &fb_emlrtRSI;
          }

          c_st.site = &eb_emlrtRSI;
          c_st.site = &eb_emlrtRSI;
          if (c_ObjSDRuReceiver->TunablePropsChanged) {
            d_st.site = &eb_emlrtRSI;
            d_st.site = &eb_emlrtRSI;
            c_ObjSDRuReceiver->TunablePropsChanged = FALSE;
            e_st.site = &fb_emlrtRSI;
            d_st.site = &eb_emlrtRSI;
            d_st.site = &eb_emlrtRSI;
            e_st.site = &fb_emlrtRSI;
            for (i0 = 0; i0 < 4; i0++) {
              c_ObjSDRuReceiver->tunablePropertyChanged[i0] = FALSE;
            }

            f_st.site = &fb_emlrtRSI;
          }

          c_st.site = &eb_emlrtRSI;
          d_st.site = &eb_emlrtRSI;
          d_st.site = &eb_emlrtRSI;
          c_st.site = &eb_emlrtRSI;
          c_st.site = &eb_emlrtRSI;
          c_st.site = &eb_emlrtRSI;
          d_st.site = &eb_emlrtRSI;
          d_st.site = &eb_emlrtRSI;
          c_st.site = &eb_emlrtRSI;
          c_st.site = &eb_emlrtRSI;
          c_st.site = &eb_emlrtRSI;
          SDRuReceiver_stepImpl(&c_st, c_ObjSDRuReceiver, SD->f1.tmp);
          emlrtSubAssignSizeCheckR2012b(iv17, 1, iv16, 1, &emlrtECI, &st);
          b_st.site = &ql_emlrtRSI;
          if (!c_ObjAGC->isReleased) {
          } else {
            r_y = NULL;
            m0 = mxCreateCharArray(2, iv18);
            for (i = 0; i < 45; i++) {
              cv0[i] = cv1[i];
            }

            emlrtInitCharArrayR2013a(&b_st, 45, m0, cv0);
            emlrtAssign(&r_y, m0);
            s_y = NULL;
            m0 = mxCreateCharArray(2, iv19);
            for (i = 0; i < 4; i++) {
              cv2[i] = cv3[i];
            }

            emlrtInitCharArrayR2013a(&b_st, 4, m0, cv2);
            emlrtAssign(&s_y, m0);
            c_st.site = &eb_emlrtRSI;
            b_error(&c_st, message(&c_st, r_y, s_y, &emlrtMCI), &emlrtMCI);
          }

          if (!c_ObjAGC->isInitialized) {
            c_st.site = &eb_emlrtRSI;
            if (!c_ObjAGC->isInitialized) {
            } else {
              t_y = NULL;
              m0 = mxCreateCharArray(2, iv20);
              for (i = 0; i < 51; i++) {
                cv4[i] = cv5[i];
              }

              emlrtInitCharArrayR2013a(&c_st, 51, m0, cv4);
              emlrtAssign(&t_y, m0);
              u_y = NULL;
              m0 = mxCreateCharArray(2, iv21);
              for (i = 0; i < 5; i++) {
                cv6[i] = cv7[i];
              }

              emlrtInitCharArrayR2013a(&c_st, 5, m0, cv6);
              emlrtAssign(&u_y, m0);
              d_st.site = &eb_emlrtRSI;
              b_error(&d_st, message(&d_st, t_y, u_y, &emlrtMCI), &emlrtMCI);
            }

            d_st.site = &eb_emlrtRSI;
            c_ObjAGC->isInitialized = TRUE;
            e_st.site = &fb_emlrtRSI;
            d_st.site = &eb_emlrtRSI;
            e_st.site = &eb_emlrtRSI;
            f_st.site = &fb_emlrtRSI;
            e_st.site = &eb_emlrtRSI;
            f_st.site = &fb_emlrtRSI;
            d_st.site = &eb_emlrtRSI;
            e_st.site = &eb_emlrtRSI;
            e_st.site = &eb_emlrtRSI;
            e_st.site = &eb_emlrtRSI;
            f_st.site = &fb_emlrtRSI;
            d_st.site = &eb_emlrtRSI;
            e_st.site = &eb_emlrtRSI;
            for (i0 = 0; i0 < 8; i0++) {
              c_ObjAGC->inputVarSize1[i0] = (uint32_T)value[i0];
            }

            f_st.site = &fb_emlrtRSI;
            d_st.site = &eb_emlrtRSI;
            e_st.site = &eb_emlrtRSI;
            d_st.site = &eb_emlrtRSI;
            e_st.site = &eb_emlrtRSI;
            f_st.site = &eb_emlrtRSI;
            f_st.site = &eb_emlrtRSI;
            d_st.site = &eb_emlrtRSI;
            e_st.site = &eb_emlrtRSI;
            e_st.site = &eb_emlrtRSI;
            d_st.site = &eb_emlrtRSI;
            d_st.site = &eb_emlrtRSI;
            d_st.site = &eb_emlrtRSI;
            d_st.site = &eb_emlrtRSI;
            e_st.site = &km_emlrtRSI;
            f_st.site = &fb_emlrtRSI;
            e_st.site = &lm_emlrtRSI;
            c_ObjAGC->Gain = 1.0;
            f_st.site = &fb_emlrtRSI;
            e_st.site = &mm_emlrtRSI;
            f_st.site = &fb_emlrtRSI;
            e_st.site = &nm_emlrtRSI;
            f_st.site = &fb_emlrtRSI;
            e_st.site = &om_emlrtRSI;
            f_st.site = &fb_emlrtRSI;
            e_st.site = &pm_emlrtRSI;
            f_st.site = &fb_emlrtRSI;
            e_st.site = &qm_emlrtRSI;
            f_st.site = &fb_emlrtRSI;
            d_st.site = &eb_emlrtRSI;
            e_st.site = &sm_emlrtRSI;
            c_ObjAGC->Gain = 1.0;
            f_st.site = &fb_emlrtRSI;
          }

          c_st.site = &eb_emlrtRSI;
          c_st.site = &eb_emlrtRSI;
          c_st.site = &eb_emlrtRSI;
          d_st.site = &eb_emlrtRSI;
          d_st.site = &eb_emlrtRSI;
          c_st.site = &eb_emlrtRSI;
          c_st.site = &eb_emlrtRSI;
          anyInputSizeChanged = FALSE;
          i = 0;
          exitg2 = FALSE;
          while ((exitg2 == FALSE) && (i < 8)) {
            if (c_ObjAGC->inputVarSize1[i] != (uint32_T)iv22[i]) {
              anyInputSizeChanged = TRUE;
              d_st.site = &eb_emlrtRSI;
              for (i0 = 0; i0 < 8; i0++) {
                c_ObjAGC->inputVarSize1[i0] = (uint32_T)value[i0];
              }

              e_st.site = &fb_emlrtRSI;
              exitg2 = TRUE;
            } else {
              i++;
            }
          }

          if (anyInputSizeChanged) {
            c_st.site = &eb_emlrtRSI;
            c_st.site = &eb_emlrtRSI;
          }

          c_st.site = &eb_emlrtRSI;
          d_st.site = &eb_emlrtRSI;
          d_st.site = &eb_emlrtRSI;
          c_st.site = &eb_emlrtRSI;
          c_st.site = &eb_emlrtRSI;
          memcpy(&SD->f1.b_tmp[0], &SD->f1.tmp[0], 5120U * sizeof(creal_T));
          c_st.site = &eb_emlrtRSI;
          AGC_stepImpl(c_ObjAGC, SD->f1.b_tmp, SD->f1.unusedExpr);
          emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, &st);
        }

        for (b_k = 0; b_k < 10; b_k++) {
          /*  64 represents the window time Tw, 4*N represents the observation time T */
          /* H = 4096; */
          /* input = randn(4*H,1); */
          /* [Sx,alphao,fo] = commP25sscaGen(input,1,1/64,1/(4*H)); */
          b_st.site = &rl_emlrtRSI;
          c_st.site = &k_emlrtRSI;
          d_st.site = &l_emlrtRSI;
          data_size[0] = 0;
          b_st.site = &rl_emlrtRSI;
          commP25sscaGen(&b_st, data_data, data_size, rtInf, Sx_data, Sx_size,
                         alphao);

          /*      [c,d] = size(Sx); */
          /*      [Ades,Index] = sort(Sx(:),'descend');   % sort Sx by its element and store in Ades */
          /*      [Ridx,Cidx]  = ind2sub(size(Sx),Index); % corresponding row index and column index */
          /*      leng = length(Ades); */
          /*       */
          /*      decisions(k) = commP25decision_noiseGen(Ades,Ridx,Cidx,leng,c,d); */
          emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, &st);
        }

        st.site = &b_emlrtRSI;
        b_fprintf(&st, (int16_T)(k + 1));
        k++;
        emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
      } else {
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }
}

/* End of code generation (testSpectrumSenseP25.c) */
