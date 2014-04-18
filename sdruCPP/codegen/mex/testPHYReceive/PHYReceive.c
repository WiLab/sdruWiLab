/*
 * PHYReceive.c
 *
 * Code generation for function 'PHYReceive'
 *
 * C source code generated on: Thu Apr 17 22:51:42 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testPHYReceive.h"
#include "PHYReceive.h"
#include "SDRuReceiver.h"
#include "equalizeOFDM.h"
#include "OFDMbits2letters.h"
#include "receiveData.h"
#include "SystemCore.h"
#include "testPHYReceive_emxutil.h"
#include "coarseOFDMFreqEst_sdr.h"
#include "sum.h"
#include "locateOFDMFrame_sdr.h"
#include "rdivide.h"
#include "power.h"
#include "abs.h"
#include "xcorr.h"
#include "AGC.h"
#include "testPHYReceive_mexutil.h"
#include "testPHYReceive_data.h"
#include <stdio.h>

/* Variable Definitions */
static emlrtRSInfo se_emlrtRSI = { 99, "PHYReceive",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/PHYReceive.m" };

static emlrtRSInfo te_emlrtRSI = { 97, "PHYReceive",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/PHYReceive.m" };

static emlrtRSInfo ue_emlrtRSI = { 93, "PHYReceive",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/PHYReceive.m" };

static emlrtRSInfo ve_emlrtRSI = { 67, "PHYReceive",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/PHYReceive.m" };

static emlrtRSInfo we_emlrtRSI = { 64, "PHYReceive",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/PHYReceive.m" };

static emlrtRSInfo xe_emlrtRSI = { 61, "PHYReceive",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/PHYReceive.m" };

static emlrtRSInfo ye_emlrtRSI = { 47, "PHYReceive",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/PHYReceive.m" };

static emlrtRSInfo af_emlrtRSI = { 41, "PHYReceive",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/PHYReceive.m" };

static emlrtRSInfo bf_emlrtRSI = { 33, "PHYReceive",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/PHYReceive.m" };

static emlrtRSInfo kf_emlrtRSI = { 73, "reportSDRuStatus",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdru/reportSDRuStatus.m" };

static emlrtRSInfo mf_emlrtRSI = { 63, "reportSDRuStatus",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdru/reportSDRuStatus.m" };

static emlrtRSInfo of_emlrtRSI = { 53, "reportSDRuStatus",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdru/reportSDRuStatus.m" };

static emlrtRSInfo qf_emlrtRSI = { 42, "reportSDRuStatus",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdru/reportSDRuStatus.m" };

static emlrtRSInfo ag_emlrtRSI = { 172, "AGC",
  "/opt/MATLAB/R2013a/toolbox/comm/comm/+comm/AGC.m" };

static emlrtRSInfo bg_emlrtRSI = { 173, "AGC",
  "/opt/MATLAB/R2013a/toolbox/comm/comm/+comm/AGC.m" };

static emlrtRSInfo cg_emlrtRSI = { 176, "AGC",
  "/opt/MATLAB/R2013a/toolbox/comm/comm/+comm/AGC.m" };

static emlrtRSInfo dg_emlrtRSI = { 183, "AGC",
  "/opt/MATLAB/R2013a/toolbox/comm/comm/+comm/AGC.m" };

static emlrtRSInfo eg_emlrtRSI = { 184, "AGC",
  "/opt/MATLAB/R2013a/toolbox/comm/comm/+comm/AGC.m" };

static emlrtRSInfo fg_emlrtRSI = { 185, "AGC",
  "/opt/MATLAB/R2013a/toolbox/comm/comm/+comm/AGC.m" };

static emlrtRSInfo gg_emlrtRSI = { 189, "AGC",
  "/opt/MATLAB/R2013a/toolbox/comm/comm/+comm/AGC.m" };

static emlrtRSInfo hg_emlrtRSI = { 282, "AGC",
  "/opt/MATLAB/R2013a/toolbox/comm/comm/+comm/AGC.m" };

static emlrtRSInfo jg_emlrtRSI = { 28, "locateOFDMFrame_sdr",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/locateOFDMFrame_sdr.m"
};

static emlrtRSInfo kg_emlrtRSI = { 24, "locateOFDMFrame_sdr",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/locateOFDMFrame_sdr.m"
};

static emlrtRSInfo lg_emlrtRSI = { 17, "locateOFDMFrame_sdr",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/locateOFDMFrame_sdr.m"
};

static emlrtRSInfo mg_emlrtRSI = { 16, "locateOFDMFrame_sdr",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/locateOFDMFrame_sdr.m"
};

static emlrtRSInfo ai_emlrtRSI = { 17, "coarseOFDMFreqEst_sdr",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/coarseOFDMFreqEst_sdr.m"
};

static emlrtRSInfo bi_emlrtRSI = { 6, "coarseOFDMFreqEst_sdr",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/coarseOFDMFreqEst_sdr.m"
};

static emlrtRSInfo hj_emlrtRSI = { 45, "output",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/scomp/output.m" };

static emlrtRSInfo nj_emlrtRSI = { 44, "strfind",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/strfun/strfind.m" };

static emlrtRSInfo oj_emlrtRSI = { 63, "strfind",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/strfun/strfind.m" };

static emlrtRSInfo pj_emlrtRSI = { 76, "strfind",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/strfun/strfind.m" };

static emlrtRSInfo qj_emlrtRSI = { 85, "strfind",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/strfun/strfind.m" };

static emlrtRTEInfo u_emlrtRTEI = { 1, 31, "PHYReceive",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/PHYReceive.m" };

static emlrtECInfo c_emlrtECI = { 2, 109, 9, "PHYReceive",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/PHYReceive.m" };

static emlrtECInfo d_emlrtECI = { 2, 101, 13, "PHYReceive",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/PHYReceive.m" };

static emlrtECInfo e_emlrtECI = { 2, 82, 9, "PHYReceive",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/PHYReceive.m" };

static emlrtECInfo f_emlrtECI = { 2, 26, 1, "PHYReceive",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/PHYReceive.m" };

static emlrtBCInfo o_emlrtBCI = { -1, -1, 101, 32, "message", "PHYReceive",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/PHYReceive.m", 0 };

static emlrtECInfo g_emlrtECI = { -1, 73, 9, "PHYReceive",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/PHYReceive.m" };

static emlrtRTEInfo bc_emlrtRTEI = { 61, 25, "PHYReceive",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/PHYReceive.m" };

static emlrtECInfo h_emlrtECI = { -1, 21, 13, "locateOFDMFrame_sdr",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/locateOFDMFrame_sdr.m"
};

static emlrtECInfo i_emlrtECI = { -1, 20, 13, "locateOFDMFrame_sdr",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/locateOFDMFrame_sdr.m"
};

static emlrtECInfo j_emlrtECI = { -1, 6, 33, "coarseOFDMFreqEst_sdr",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/coarseOFDMFreqEst_sdr.m"
};

static emlrtECInfo k_emlrtECI = { -1, 6, 15, "coarseOFDMFreqEst_sdr",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/coarseOFDMFreqEst_sdr.m"
};

static emlrtBCInfo p_emlrtBCI = { 1, 5120, 61, 18, "buffer", "PHYReceive",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/PHYReceive.m", 0 };

static emlrtDCInfo b_emlrtDCI = { 61, 18, "PHYReceive",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/PHYReceive.m", 1 };

/* Function Declarations */
static const mxArray *c_message(const mxArray *b, const mxArray *c, const
  mxArray *d, emlrtMCInfo *location);
static int32_T div_ssu32_floor(int32_T numerator, uint32_T denominator);

/* Function Definitions */
static const mxArray *c_message(const mxArray *b, const mxArray *c, const
  mxArray *d, emlrtMCInfo *location)
{
  const mxArray *pArrays[3];
  const mxArray *m38;
  pArrays[0] = b;
  pArrays[1] = c;
  pArrays[2] = d;
  return emlrtCallMATLABR2012b(emlrtRootTLSGlobal, 1, &m38, 3, pArrays,
    "message", TRUE, location);
}

static int32_T div_ssu32_floor(int32_T numerator, uint32_T denominator)
{
  int32_T quotient;
  uint32_T absNumerator;
  int32_T quotientNeedsNegation;
  uint32_T tempAbsQuotient;
  if (denominator == (uint32_T)0) {
    if (numerator >= 0) {
      quotient = MAX_int32_T;
    } else {
      quotient = MIN_int32_T;
    }

    emlrtDivisionByZeroErrorR2012b(0, emlrtRootTLSGlobal);
  } else {
    if (numerator >= 0) {
      absNumerator = (uint32_T)numerator;
    } else {
      absNumerator = (uint32_T)-numerator;
    }

    quotientNeedsNegation = (numerator < 0);
    tempAbsQuotient = absNumerator / denominator;
    if ((uint32_T)quotientNeedsNegation) {
      absNumerator %= denominator;
      if (absNumerator > (uint32_T)0) {
        tempAbsQuotient++;
      }
    }

    if ((uint32_T)quotientNeedsNegation) {
      quotient = -(int32_T)tempAbsQuotient;
    } else {
      quotient = (int32_T)tempAbsQuotient;
    }
  }

  return quotient;
}

void PHYReceive(testPHYReceiveStackData *SD, comm_AGC *ObjAGC, comm_SDRuReceiver
                *ObjSDRuReceiver, commcodegen_CRCDetector *ObjDetect,
                OFDMDemodulator_1 *ObjPreambleDemod, OFDMDemodulator
                *ObjDataDemod, struct_T *estimate, const creal_T
                rx_shortPreambleOFDM[64], const real_T rx_longPreamble[53],
                const real_T rx_pilots[48], const real_T
                c_rx_pilotLocationsWithoutGuard[4], const real_T
                rx_dataSubcarrierIndexies_data[48], const int32_T
                rx_dataSubcarrierIndexies_size[2], real_T messageBits_data[1689],
                int32_T messageBits_size[2], char_T recoveredMessage_data[80],
                int32_T recoveredMessage_size[2])
{
  int32_T lastFound;
  int32_T numBuffersProcessed;
  emxArray_creal_T *unusedU0;
  boolean_T exitg2;
  comm_SDRuReceiver *obj;
  const mxArray *y;
  static const int32_T iv82[2] = { 1, 45 };

  const mxArray *m17;
  char_T cv90[45];
  int32_T i;
  static const char_T cv91[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C',
    'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv83[2] = { 1, 4 };

  char_T cv92[4];
  static const char_T cv93[4] = { 's', 't', 'e', 'p' };

  const mxArray *c_y;
  static const int32_T iv84[2] = { 1, 51 };

  char_T cv94[51];
  static const char_T cv95[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l',
    'e', 'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *d_y;
  static const int32_T iv85[2] = { 1, 5 };

  char_T cv96[5];
  static const char_T cv97[5] = { 's', 'e', 't', 'u', 'p' };

  int32_T errMsg_size[2];
  char_T errMsg_data[1024];
  UsrpErrorCapiEnumT deviceStatus;
  const mxArray *e_y;
  static const int32_T iv86[2] = { 1, 35 };

  char_T cv98[35];
  static const char_T cv99[35] = { 's', 'd', 'r', 'u', ':', 'r', 'e', 'p', 'o',
    'r', 't', 'S', 'D', 'R', 'u', 'S', 't', 'a', 't', 'u', 's', ':', 'N', 'o',
    't', 'C', 'o', 'm', 'p', 'a', 't', 'i', 'b', 'l', 'e' };

  const mxArray *f_y;
  static const int32_T iv87[2] = { 1, 12 };

  char_T cv100[12];
  static const char_T cv101[12] = { '1', '9', '2', '.', '1', '6', '8', '.', '1',
    '0', '.', '2' };

  const mxArray *g_y;
  static const int32_T iv88[2] = { 1, 43 };

  char_T cv102[43];
  static const char_T cv103[43] = { 'r', 'e', 't', 'u', 'r', 'n', 'e', 'd', ' ',
    'b', 'y', ' ', '\'', 'g', 'e', 't', 'S', 'D', 'R', 'u', 'D', 'r', 'i', 'v',
    'e', 'r', 'V', 'e', 'r', 's', 'i', 'o', 'n', '\'', ' ', 'f', 'u', 'n', 'c',
    't', 'i', 'o', 'n' };

  const mxArray *h_y;
  static const int32_T iv89[2] = { 1, 35 };

  static const char_T cv104[35] = { 's', 'd', 'r', 'u', ':', 'r', 'e', 'p', 'o',
    'r', 't', 'S', 'D', 'R', 'u', 'S', 't', 'a', 't', 'u', 's', ':', 'N', 'o',
    't', 'R', 'e', 's', 'p', 'o', 'n', 'd', 'i', 'n', 'g' };

  const mxArray *i_y;
  static const int32_T iv90[2] = { 1, 12 };

  const mxArray *j_y;
  static const int32_T iv91[2] = { 1, 26 };

  char_T cv105[26];
  static const char_T cv106[26] = { 's', 'd', 'r', 'u', ':', 'r', 'e', 'p', 'o',
    'r', 't', 'S', 'D', 'R', 'u', 'S', 't', 'a', 't', 'u', 's', ':', 'B', 'u',
    's', 'y' };

  const mxArray *k_y;
  static const int32_T iv92[2] = { 1, 12 };

  const mxArray *l_y;
  static const int32_T iv93[2] = { 1, 35 };

  static const char_T cv107[35] = { 's', 'd', 'r', 'u', ':', 'r', 'e', 'p', 'o',
    'r', 't', 'S', 'D', 'R', 'u', 'S', 't', 'a', 't', 'u', 's', ':', 'U', 'n',
    'k', 'n', 'o', 'w', 'n', 'S', 't', 'a', 't', 'u', 's' };

  boolean_T value[4];
  int32_T i13;
  creal_T P;
  int32_T match_idx;
  boolean_T guard1 = FALSE;
  comm_AGC *b_obj;
  const mxArray *m_y;
  static const int32_T iv94[2] = { 1, 45 };

  const mxArray *n_y;
  static const int32_T iv95[2] = { 1, 4 };

  const mxArray *o_y;
  static const int32_T iv96[2] = { 1, 51 };

  const mxArray *p_y;
  static const int32_T iv97[2] = { 1, 5 };

  static const int16_T b_value[8] = { 5120, 1, 1, 1, 1, 1, 1, 1 };

  boolean_T exitg3;
  static const int16_T iv98[8] = { 5120, 1, 1, 1, 1, 1, 1, 1 };

  creal_T rx_shortPreambleOFDM_data[16];
  int32_T Phat_size[1];
  int32_T buffer_size[1];
  real_T tmp_data[1231];
  real_T b_tmp_data[1231];
  int32_T tmp_size[1];
  int32_T b_Phat_size[1];
  int32_T b_tmp_size[1];
  int32_T Rhat_size[1];
  real_T Rhat_data[1224];
  real_T M_data[1224];
  real_T numPeaks;
  real_T preambleEstimatedLocation;
  boolean_T b3;
  int16_T c_tmp_data[1280];
  int32_T bitNumber;
  struct_T b_estimate;
  int32_T d_tmp_data[1280];
  int32_T e_tmp_data[1280];
  creal_T buffer_data[32];
  creal_T RPostEqualizer[576];
  creal_T b_RPostEqualizer[576];
  creal_T RLinear[576];
  int32_T RHard_size[1];
  boolean_T RHard_data[563];
  int8_T b_RHard_data[563];
  static const char_T cv108[7] = { 'T', 'i', 'm', 'e', 'o', 'u', 't' };

  commcodegen_CRCDetector *c_obj;
  const mxArray *q_y;
  static const int32_T iv99[2] = { 1, 45 };

  const mxArray *r_y;
  static const int32_T iv100[2] = { 1, 4 };

  const mxArray *s_y;
  static const int32_T iv101[2] = { 1, 51 };

  const mxArray *t_y;
  static const int32_T iv102[2] = { 1, 5 };

  static const int16_T c_value[8] = { 563, 1, 1, 1, 1, 1, 1, 1 };

  boolean_T exitg1;
  static const int16_T iv103[8] = { 563, 1, 1, 1, 1, 1, 1, 1 };

  static const int16_T inputSize[8] = { 563, 1, 1, 1, 1, 1, 1, 1 };

  comm_CRCDetector_6 *d_obj;
  uint32_T shReg;
  uint32_T input;
  uint32_T bitMask;
  boolean_T varargout_1_data[560];
  uint32_T leftoverBits;
  boolean_T b_leftoverBits;
  boolean_T b_varargout_1_data[560];
  int32_T varargout_1_size[2];
  real_T f_tmp_data[80];
  int32_T messageEnd_size[2];
  real_T messageEnd_data[80];
  int8_T iv104[2];
  char_T message_data[80];
  int8_T matches_data[80];
  static const char_T cv109[3] = { 'E', 'O', 'F' };

  int8_T match_out_data[80];
  boolean_T b4;
  int32_T g_tmp_data[77];
  static const char_T cv110[9] = { 'C', 'R', 'C', ' ', 'E', 'r', 'r', 'o', 'r' };

  emlrtHeapReferenceStackEnterFcnR2012b(emlrtRootTLSGlobal);

  /*            %Objects */
  /*          %Structs */
  /*   %Values/Vectors */
  /* DEBUG */
  /* DEBUG */
  estimate->numProcessed = 0.0;

  /*  # correct frames found */
  lastFound = -2;

  /* Flag for found frame, used for dup check */
  numBuffersProcessed = 0;

  /* Track received data, needed for separate indexing of processed and unprocessed data (processed==preamble found) */
  /*  Frames to capture */
  /*  Message string holder */
  emlrtDimSizeGeqCheckFastR2012b(80, 0, &f_emlrtECI, emlrtRootTLSGlobal);
  recoveredMessage_size[0] = 1;
  recoveredMessage_size[1] = 0;

  /* % Process received data */
  /*  Locate frames in buffer and compensate for channel affects */
  emxInit_creal_T(&unusedU0, 3, &u_emlrtRTEI, TRUE);
  exitg2 = FALSE;
  while ((exitg2 == FALSE) && (estimate->numProcessed < 3.0)) {
    /*  Get data from USRP */
    emlrtPushRtStackR2012b(&bf_emlrtRSI, emlrtRootTLSGlobal);
    obj = ObjSDRuReceiver;
    if (!obj->isReleased) {
    } else {
      emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
      y = NULL;
      m17 = mxCreateCharArray(2, iv82);
      for (i = 0; i < 45; i++) {
        cv90[i] = cv91[i];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 45, m17, cv90);
      emlrtAssign(&y, m17);
      b_y = NULL;
      m17 = mxCreateCharArray(2, iv83);
      for (i = 0; i < 4; i++) {
        cv92[i] = cv93[i];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 4, m17, cv92);
      emlrtAssign(&b_y, m17);
      b_error(message(y, b_y, &b_emlrtMCI), &b_emlrtMCI);
      emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    }

    if (!obj->isInitialized) {
      emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
      if (!obj->isInitialized) {
      } else {
        emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
        c_y = NULL;
        m17 = mxCreateCharArray(2, iv84);
        for (i = 0; i < 51; i++) {
          cv94[i] = cv95[i];
        }

        emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 51, m17, cv94);
        emlrtAssign(&c_y, m17);
        d_y = NULL;
        m17 = mxCreateCharArray(2, iv85);
        for (i = 0; i < 5; i++) {
          cv96[i] = cv97[i];
        }

        emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 5, m17, cv96);
        emlrtAssign(&d_y, m17);
        b_error(message(c_y, d_y, &b_emlrtMCI), &b_emlrtMCI);
        emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
      }

      emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
      obj->isInitialized = TRUE;
      emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPushRtStackR2012b(&ae_emlrtRSI, emlrtRootTLSGlobal);
      SDRuReceiver_setupImplLocal(obj, &deviceStatus, errMsg_data, errMsg_size);
      emlrtPopRtStackR2012b(&ae_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPushRtStackR2012b(&ae_emlrtRSI, emlrtRootTLSGlobal);

      /* reportSDRuStatus SDRu status reporter */
      /*    reportSDRuStatus(STATUS,MSG,IP,METHOD) reports the SDRu status based on */
      /*    the STATUS input. STATUS is a UsrpErrorCapiEnumT type. IP is the IP */
      /*    address of the USRP(R) radio. METHOD is a UsrpReportMethodEnumT type and */
      /*    can be Warning, Error , or None. */
      /*  */
      /*    USRP(R) is a trademark of National Instruments Corp. */
      /*    Copyright 2012 The MathWorks, Inc. */
      switch (deviceStatus) {
       case UsrpDriverNotCompatible:
        emlrtPushRtStackR2012b(&qf_emlrtRSI, emlrtRootTLSGlobal);
        if (!(deviceStatus == UsrpDriverNotCompatible)) {
        } else {
          emlrtPushRtStackR2012b(&sc_emlrtRSI, emlrtRootTLSGlobal);
          e_y = NULL;
          m17 = mxCreateCharArray(2, iv86);
          for (i = 0; i < 35; i++) {
            cv98[i] = cv99[i];
          }

          emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 35, m17, cv98);
          emlrtAssign(&e_y, m17);
          f_y = NULL;
          m17 = mxCreateCharArray(2, iv87);
          for (i = 0; i < 12; i++) {
            cv100[i] = cv101[i];
          }

          emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 12, m17, cv100);
          emlrtAssign(&f_y, m17);
          g_y = NULL;
          m17 = mxCreateCharArray(2, iv88);
          for (i = 0; i < 43; i++) {
            cv102[i] = cv103[i];
          }

          emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 43, m17, cv102);
          emlrtAssign(&g_y, m17);
          b_error(c_message(e_y, f_y, g_y, &h_emlrtMCI), &h_emlrtMCI);
          emlrtPopRtStackR2012b(&sc_emlrtRSI, emlrtRootTLSGlobal);
        }

        emlrtPopRtStackR2012b(&qf_emlrtRSI, emlrtRootTLSGlobal);
        break;

       case UsrpDriverNotResponding:
        emlrtPushRtStackR2012b(&of_emlrtRSI, emlrtRootTLSGlobal);
        if (!(deviceStatus == UsrpDriverNotResponding)) {
        } else {
          emlrtPushRtStackR2012b(&sc_emlrtRSI, emlrtRootTLSGlobal);
          h_y = NULL;
          m17 = mxCreateCharArray(2, iv89);
          for (i = 0; i < 35; i++) {
            cv98[i] = cv104[i];
          }

          emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 35, m17, cv98);
          emlrtAssign(&h_y, m17);
          i_y = NULL;
          m17 = mxCreateCharArray(2, iv90);
          for (i = 0; i < 12; i++) {
            cv100[i] = cv101[i];
          }

          emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 12, m17, cv100);
          emlrtAssign(&i_y, m17);
          b_error(message(h_y, i_y, &h_emlrtMCI), &h_emlrtMCI);
          emlrtPopRtStackR2012b(&sc_emlrtRSI, emlrtRootTLSGlobal);
        }

        emlrtPopRtStackR2012b(&of_emlrtRSI, emlrtRootTLSGlobal);
        break;

       case UsrpDriverBusy:
        emlrtPushRtStackR2012b(&mf_emlrtRSI, emlrtRootTLSGlobal);
        if (!(deviceStatus == UsrpDriverBusy)) {
        } else {
          emlrtPushRtStackR2012b(&sc_emlrtRSI, emlrtRootTLSGlobal);
          j_y = NULL;
          m17 = mxCreateCharArray(2, iv91);
          for (i = 0; i < 26; i++) {
            cv105[i] = cv106[i];
          }

          emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 26, m17, cv105);
          emlrtAssign(&j_y, m17);
          k_y = NULL;
          m17 = mxCreateCharArray(2, iv92);
          for (i = 0; i < 12; i++) {
            cv100[i] = cv101[i];
          }

          emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 12, m17, cv100);
          emlrtAssign(&k_y, m17);
          b_error(message(j_y, k_y, &h_emlrtMCI), &h_emlrtMCI);
          emlrtPopRtStackR2012b(&sc_emlrtRSI, emlrtRootTLSGlobal);
        }

        emlrtPopRtStackR2012b(&mf_emlrtRSI, emlrtRootTLSGlobal);
        break;

       case UsrpDriverError:
        emlrtPushRtStackR2012b(&kf_emlrtRSI, emlrtRootTLSGlobal);
        if (!(deviceStatus == UsrpDriverError)) {
        } else {
          emlrtPushRtStackR2012b(&sc_emlrtRSI, emlrtRootTLSGlobal);
          l_y = NULL;
          m17 = mxCreateCharArray(2, iv93);
          for (i = 0; i < 35; i++) {
            cv98[i] = cv107[i];
          }

          emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 35, m17, cv98);
          emlrtAssign(&l_y, m17);
          b_error(b_message(l_y, &h_emlrtMCI), &h_emlrtMCI);
          emlrtPopRtStackR2012b(&sc_emlrtRSI, emlrtRootTLSGlobal);
        }

        emlrtPopRtStackR2012b(&kf_emlrtRSI, emlrtRootTLSGlobal);
        break;
      }

      emlrtPopRtStackR2012b(&ae_emlrtRSI, emlrtRootTLSGlobal);
      if (deviceStatus == UsrpDriverSuccess) {
        emlrtPushRtStackR2012b(&ae_emlrtRSI, emlrtRootTLSGlobal);
        emlrtPopRtStackR2012b(&ae_emlrtRSI, emlrtRootTLSGlobal);
      } else {
        emlrtPushRtStackR2012b(&ae_emlrtRSI, emlrtRootTLSGlobal);
        emlrtPopRtStackR2012b(&ae_emlrtRSI, emlrtRootTLSGlobal);
      }

      emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
      obj->TunablePropsChanged = FALSE;
      emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    }

    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    if (obj->TunablePropsChanged) {
      emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
      obj->TunablePropsChanged = FALSE;
      emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
      for (i = 0; i < 4; i++) {
        for (i13 = 0; i13 < 4; i13++) {
          value[i13] = obj->tunablePropertyChanged[i13];
        }

        value[i] = FALSE;
        emlrtPushRtStackR2012b(&q_emlrtRSI, emlrtRootTLSGlobal);
        for (i13 = 0; i13 < 4; i13++) {
          obj->tunablePropertyChanged[i13] = value[i13];
        }

        emlrtPopRtStackR2012b(&q_emlrtRSI, emlrtRootTLSGlobal);
      }

      emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    }

    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    SDRuReceiver_stepImpl(SD, obj, SD->f3.buffer);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&bf_emlrtRSI, emlrtRootTLSGlobal);
    P = SD->f3.buffer[0];
    for (match_idx = 0; match_idx < 5119; match_idx++) {
      P.re += SD->f3.buffer[match_idx + 1].re;
      P.im += SD->f3.buffer[match_idx + 1].im;
    }

    guard1 = FALSE;
    if ((P.re == 0.0) && (P.im == 0.0)) {
      /*  All zeros from radio (Bug?) */
      guard1 = TRUE;
    } else {
      /*  Automatic Gain Control */
      emlrtPushRtStackR2012b(&af_emlrtRSI, emlrtRootTLSGlobal);
      b_obj = ObjAGC;
      if (!b_obj->isReleased) {
      } else {
        emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
        m_y = NULL;
        m17 = mxCreateCharArray(2, iv94);
        for (i = 0; i < 45; i++) {
          cv90[i] = cv91[i];
        }

        emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 45, m17, cv90);
        emlrtAssign(&m_y, m17);
        n_y = NULL;
        m17 = mxCreateCharArray(2, iv95);
        for (i = 0; i < 4; i++) {
          cv92[i] = cv93[i];
        }

        emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 4, m17, cv92);
        emlrtAssign(&n_y, m17);
        b_error(message(m_y, n_y, &b_emlrtMCI), &b_emlrtMCI);
        emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
      }

      if (!b_obj->isInitialized) {
        emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
        if (!b_obj->isInitialized) {
        } else {
          emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
          o_y = NULL;
          m17 = mxCreateCharArray(2, iv96);
          for (i = 0; i < 51; i++) {
            cv94[i] = cv95[i];
          }

          emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 51, m17, cv94);
          emlrtAssign(&o_y, m17);
          p_y = NULL;
          m17 = mxCreateCharArray(2, iv97);
          for (i = 0; i < 5; i++) {
            cv96[i] = cv97[i];
          }

          emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 5, m17, cv96);
          emlrtAssign(&p_y, m17);
          b_error(message(o_y, p_y, &b_emlrtMCI), &b_emlrtMCI);
          emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
        }

        emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
        b_obj->isInitialized = TRUE;
        emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
        emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
        emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
        emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
        emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
        emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
        emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
        emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
        emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
        emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
        emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
        emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
        emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
        for (i13 = 0; i13 < 8; i13++) {
          b_obj->inputVarSize1[i13] = (uint32_T)b_value[i13];
        }

        emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
        emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
        emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
        emlrtPushRtStackR2012b(&ag_emlrtRSI, emlrtRootTLSGlobal);
        emlrtPopRtStackR2012b(&ag_emlrtRSI, emlrtRootTLSGlobal);
        emlrtPushRtStackR2012b(&bg_emlrtRSI, emlrtRootTLSGlobal);
        b_obj->Gain = 1.0;
        emlrtPopRtStackR2012b(&bg_emlrtRSI, emlrtRootTLSGlobal);
        emlrtPushRtStackR2012b(&cg_emlrtRSI, emlrtRootTLSGlobal);
        emlrtPopRtStackR2012b(&cg_emlrtRSI, emlrtRootTLSGlobal);
        emlrtPushRtStackR2012b(&dg_emlrtRSI, emlrtRootTLSGlobal);
        emlrtPopRtStackR2012b(&dg_emlrtRSI, emlrtRootTLSGlobal);
        emlrtPushRtStackR2012b(&eg_emlrtRSI, emlrtRootTLSGlobal);
        emlrtPopRtStackR2012b(&eg_emlrtRSI, emlrtRootTLSGlobal);
        emlrtPushRtStackR2012b(&fg_emlrtRSI, emlrtRootTLSGlobal);
        emlrtPopRtStackR2012b(&fg_emlrtRSI, emlrtRootTLSGlobal);
        emlrtPushRtStackR2012b(&gg_emlrtRSI, emlrtRootTLSGlobal);
        b_obj->pDetectorIsRectifier = TRUE;
        emlrtPopRtStackR2012b(&gg_emlrtRSI, emlrtRootTLSGlobal);
        emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
        emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
        emlrtPushRtStackR2012b(&hg_emlrtRSI, emlrtRootTLSGlobal);
        b_obj->Gain = 1.0;
        emlrtPopRtStackR2012b(&hg_emlrtRSI, emlrtRootTLSGlobal);
        emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
        emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
        b_obj->TunablePropsChanged = FALSE;
        emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
        emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
      }

      emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
      if (b_obj->TunablePropsChanged) {
        emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
        b_obj->TunablePropsChanged = FALSE;
        emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
      }

      emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
      match_idx = 0;
      exitg3 = FALSE;
      while ((exitg3 == FALSE) && (match_idx < 8)) {
        if (b_obj->inputVarSize1[match_idx] != (uint32_T)iv98[match_idx]) {
          emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
          for (i13 = 0; i13 < 8; i13++) {
            b_obj->inputVarSize1[i13] = (uint32_T)b_value[i13];
          }

          emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
          exitg3 = TRUE;
        } else {
          match_idx++;
        }
      }

      emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
      memcpy(&SD->f3.b_buffer[0], &SD->f3.buffer[0], 5120U * sizeof(creal_T));
      AGC_stepImpl(b_obj, SD->f3.b_buffer, SD->f3.buffer);
      emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPopRtStackR2012b(&af_emlrtRSI, emlrtRootTLSGlobal);

      /*  Increment processed data index */
      numBuffersProcessed++;

      /*     %% Find preamble in buffer */
      emlrtPushRtStackR2012b(&ye_emlrtRSI, emlrtRootTLSGlobal);

      /*  locateOFDMFrame: Locate 802.11a based preamble from input data stream. */
      /*  It is assumed that the received signal is still in the time domain.  The */
      /*  location of the start of the preamble will be returned, if not found -1 */
      /*  is returned */
      /* % Timing Estimate */
      /*  Quarter of short preamble sequence */
      /*  Cross correlate */
      emlrtPushRtStackR2012b(&mg_emlrtRSI, emlrtRootTLSGlobal);
      memcpy(&SD->f3.b_buffer_data[0], &SD->f3.buffer[0], 1231U * sizeof(creal_T));
      for (i13 = 0; i13 < 16; i13++) {
        rx_shortPreambleOFDM_data[i13].re = rx_shortPreambleOFDM[i13].re;
        rx_shortPreambleOFDM_data[i13].im = -rx_shortPreambleOFDM[i13].im;
      }

      xcorr(SD->f3.b_buffer_data, rx_shortPreambleOFDM_data, SD->f3.Phat_data,
            Phat_size);
      emlrtPopRtStackR2012b(&mg_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPushRtStackR2012b(&lg_emlrtRSI, emlrtRootTLSGlobal);
      buffer_size[0] = 1231;
      memcpy(&SD->f3.c_buffer_data[0], &SD->f3.buffer[0], 1231U * sizeof(creal_T));
      b_abs(SD->f3.c_buffer_data, buffer_size, tmp_data, Phat_size);
      tmp_size[0] = Phat_size[0];
      match_idx = Phat_size[0];
      for (i13 = 0; i13 < match_idx; i13++) {
        b_tmp_data[i13] = tmp_data[i13];
      }

      power(b_tmp_data, tmp_size, tmp_data, Phat_size);
      b_xcorr(tmp_data, SD->f3.Rhat_data, Phat_size);
      emlrtPopRtStackR2012b(&lg_emlrtRSI, emlrtRootTLSGlobal);

      /*  moving average */
      /*  Remove leading and tail zeros overlaps */
      emlrtVectorVectorIndexCheckR2012b(2461, 1, 1, 1224, &i_emlrtECI,
        emlrtRootTLSGlobal);
      emlrtVectorVectorIndexCheckR2012b(2461, 1, 1, 1224, &h_emlrtECI,
        emlrtRootTLSGlobal);

      /*  Calculate timing metric */
      emlrtPushRtStackR2012b(&kg_emlrtRSI, emlrtRootTLSGlobal);
      b_Phat_size[0] = 1224;
      memcpy(&SD->f3.b_Phat_data[0], &SD->f3.Phat_data[1230], 1224U * sizeof
             (creal_T));
      b_abs(SD->f3.b_Phat_data, b_Phat_size, tmp_data, Phat_size);
      b_tmp_size[0] = Phat_size[0];
      match_idx = Phat_size[0];
      for (i13 = 0; i13 < match_idx; i13++) {
        b_tmp_data[i13] = tmp_data[i13];
      }

      power(b_tmp_data, b_tmp_size, tmp_data, Phat_size);
      Rhat_size[0] = 1224;
      memcpy(&Rhat_data[0], &SD->f3.Rhat_data[1230], 1224U * sizeof(real_T));
      power(Rhat_data, Rhat_size, b_tmp_data, Phat_size);
      rdivide(tmp_data, b_tmp_data, M_data, Phat_size);
      emlrtPopRtStackR2012b(&kg_emlrtRSI, emlrtRootTLSGlobal);

      /*  Determine start of short preamble */
      /*  peak threshold after normalization (TUNABLE) */
      emlrtPushRtStackR2012b(&jg_emlrtRSI, emlrtRootTLSGlobal);
      locateShortpreamble(M_data, &preambleEstimatedLocation, &numPeaks);
      emlrtPopRtStackR2012b(&jg_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPopRtStackR2012b(&ye_emlrtRSI, emlrtRootTLSGlobal);
      estimate->delay = preambleEstimatedLocation;
      estimate->numPeaks = numPeaks;

      /*  Check if frame exists in correct location and whether it's duplicate */
      /*  %Check if full data frame exists in buffer */
      /*  %Check if preamble located */
      if ((preambleEstimatedLocation > -1.0) && (numBuffersProcessed - lastFound
           >= 2)) {
        b3 = TRUE;
      } else {
        b3 = FALSE;
      }

      /* Check if duplicate frame */
      /*     %% Recover found frame */
      if (b3) {
        lastFound = numBuffersProcessed;

        /* Flag frame as found so duplicate frames are not processed */
        estimate->numProcessed++;

        /* Increment processed found frames */
        /*  Extract single frame from input buffer */
        if (preambleEstimatedLocation == preambleEstimatedLocation) {
        } else {
          emlrtPushRtStackR2012b(&xe_emlrtRSI, emlrtRootTLSGlobal);
          emlrtErrorWithMessageIdR2012b(emlrtRootTLSGlobal, &bc_emlrtRTEI,
            "EMLRT:runTime:RepeatedExprWithDifferentResultsInColonIndexing", 0);
          emlrtPopRtStackR2012b(&xe_emlrtRSI, emlrtRootTLSGlobal);
        }

        for (i13 = 0; i13 < 1280; i13++) {
          c_tmp_data[i13] = (int16_T)(1 + i13);
        }

        for (i13 = 0; i13 < 1280; i13++) {
          numPeaks = preambleEstimatedLocation + (real_T)c_tmp_data[i13];
          bitNumber = (int32_T)emlrtIntegerCheckFastR2012b(numPeaks, &b_emlrtDCI,
            emlrtRootTLSGlobal);
          emlrtDynamicBoundsCheckFastR2012b(bitNumber, 1, 5120, &p_emlrtBCI,
            emlrtRootTLSGlobal);
        }

        /*  Correct frequency offset */
        emlrtPushRtStackR2012b(&we_emlrtRSI, emlrtRootTLSGlobal);
        b_estimate = *estimate;

        /*  coarseOFDMFreqEst: Frequency Correction based on the Schmidl and Cox */
        /*  method, utilizing halves of the short preamble from the 802.11a standard */
        emlrtVectorVectorIndexCheckR2012b(1280, 1, 1, 32, &k_emlrtECI,
          emlrtRootTLSGlobal);
        emlrtVectorVectorIndexCheckR2012b(1280, 1, 1, 32, &j_emlrtECI,
          emlrtRootTLSGlobal);
        emlrtPushRtStackR2012b(&bi_emlrtRSI, emlrtRootTLSGlobal);
        for (i13 = 0; i13 < 1280; i13++) {
          c_tmp_data[i13] = (int16_T)(1 + i13);
        }

        for (i13 = 0; i13 < 1280; i13++) {
          d_tmp_data[i13] = (int32_T)(preambleEstimatedLocation + (real_T)
            c_tmp_data[i13]);
        }

        for (i13 = 0; i13 < 1280; i13++) {
          c_tmp_data[i13] = (int16_T)(1 + i13);
        }

        for (i13 = 0; i13 < 1280; i13++) {
          e_tmp_data[i13] = (int32_T)(preambleEstimatedLocation + (real_T)
            c_tmp_data[i13]);
        }

        for (i13 = 0; i13 < 32; i13++) {
          buffer_data[i13].re = SD->f3.buffer[d_tmp_data[i13] - 1].re *
            SD->f3.buffer[e_tmp_data[32 + i13] - 1].re - -SD->
            f3.buffer[d_tmp_data[i13] - 1].im * SD->f3.buffer[e_tmp_data[32 +
            i13] - 1].im;
          buffer_data[i13].im = SD->f3.buffer[d_tmp_data[i13] - 1].re *
            SD->f3.buffer[e_tmp_data[32 + i13] - 1].im + -SD->
            f3.buffer[d_tmp_data[i13] - 1].im * SD->f3.buffer[e_tmp_data[32 +
            i13] - 1].re;
        }

        P = sum(buffer_data);
        emlrtPopRtStackR2012b(&bi_emlrtRSI, emlrtRootTLSGlobal);

        /* Cross-correlate preamble */
        b_estimate.phi = muDoubleScalarAtan2(P.im, P.re);

        /*  Determine phase angle between preamble halves */
        /*  Buffer not full */
        b_estimate.frequency[(int32_T)estimate->numProcessed - 1] =
          muDoubleScalarAtan2(P.im, P.re) / 0.00020106192982974677;

        /*  Convert angle to frequency */
        /*  Apply frequency estimate */
        emlrtPushRtStackR2012b(&ai_emlrtRSI, emlrtRootTLSGlobal);
        for (i13 = 0; i13 < 1280; i13++) {
          c_tmp_data[i13] = (int16_T)(1 + i13);
        }

        for (i13 = 0; i13 < 1280; i13++) {
          d_tmp_data[i13] = (int32_T)(preambleEstimatedLocation + (real_T)
            c_tmp_data[i13]);
        }

        for (i13 = 0; i13 < 1280; i13++) {
          SD->f3.buffer_data[i13] = SD->f3.buffer[d_tmp_data[i13] - 1];
        }

        freqCorrectOFDM(&b_estimate, SD->f3.buffer_data,
                        SD->f3.rFreqShifted_data, Phat_size);
        emlrtPopRtStackR2012b(&ai_emlrtRSI, emlrtRootTLSGlobal);
        emlrtPopRtStackR2012b(&we_emlrtRSI, emlrtRootTLSGlobal);

        /*  Equalize */
        emlrtPushRtStackR2012b(&ve_emlrtRSI, emlrtRootTLSGlobal);
        equalizeOFDM(SD, SD->f3.rFreqShifted_data, rx_longPreamble, rx_pilots,
                     c_rx_pilotLocationsWithoutGuard,
                     rx_dataSubcarrierIndexies_data,
                     rx_dataSubcarrierIndexies_size, &b_estimate,
                     ObjPreambleDemod, ObjDataDemod, RPostEqualizer, unusedU0,
                     estimate);
        emlrtPopRtStackR2012b(&ve_emlrtRSI, emlrtRootTLSGlobal);
        memcpy(&b_RPostEqualizer[0], &RPostEqualizer[0], 576U * sizeof(creal_T));

        /*  Demod subcarriers */
        /*  demodOFDMSubcarriers: Hard demodulate then compare received and */
        /*  transmitted data */
        /*  Demodulate subcarrier data */
        memcpy(&RLinear[0], &b_RPostEqualizer[0], 576U * sizeof(creal_T));
        RHard_size[0] = 563;
        for (i13 = 0; i13 < 563; i13++) {
          RHard_data[i13] = (RLinear[i13].re < 0.0);
        }

        /* Bits */
        /*  Decode received text */
        /* estimate.message = OFDMbits2letters(RHard > 0); */
        /*  Check results (remove CRC for compare) */
        /* BER = sum(RHard(1:end-3)~=tx.originalData)/numel(RHard); */
        /*  Save additional information */
        /* estimate.totalFrameErrors(estimate.numProcessed) = sum(RHard~=tx.originalData); */
        /* estimate.totalFrameBits(estimate.numProcessed) = numel(RHard);            */
        /*  Save for later decoding and CRC */
        for (i13 = 0; i13 < 2; i13++) {
          errMsg_size[i13] = 1 + 562 * i13;
        }

        emlrtSubAssignSizeCheckR2012b(errMsg_size, 2, RHard_size, 1, &g_emlrtECI,
          emlrtRootTLSGlobal);
        match_idx = (int32_T)estimate->numProcessed;
        for (i13 = 0; i13 < 563; i13++) {
          b_RHard_data[i13] = (int8_T)RHard_data[i13];
        }

        for (i13 = 0; i13 < 563; i13++) {
          messageBits_data[(match_idx + messageBits_size[0] * i13) - 1] =
            b_RHard_data[i13];
        }
      }

      /*     %% Timeout */
      /* fprintf('%f\n',numBuffersProcessed); */
      /* fprintf('%f\n',timeoutDuration); */
      if (numBuffersProcessed > 9) {
        emlrtDimSizeGeqCheckFastR2012b(80, 7, &e_emlrtECI, emlrtRootTLSGlobal);
        recoveredMessage_size[0] = 1;
        recoveredMessage_size[1] = 7;
        for (i13 = 0; i13 < 7; i13++) {
          recoveredMessage_data[i13] = cv108[i13];
        }

        exitg2 = TRUE;
      } else {
        guard1 = TRUE;
      }
    }

    if (guard1 == TRUE) {
      emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, emlrtRootTLSGlobal);
    }
  }

  emxFree_creal_T(&unusedU0);

  /* % Process Messages */
  numBuffersProcessed = 0;
  while (numBuffersProcessed <= (int32_T)estimate->numProcessed - 1) {
    /*  CRC Check */
    emlrtPushRtStackR2012b(&ue_emlrtRSI, emlrtRootTLSGlobal);
    c_obj = ObjDetect;
    for (i13 = 0; i13 < 563; i13++) {
      RHard_data[i13] = (messageBits_data[((int32_T)(1.0 + (real_T)
        numBuffersProcessed) + messageBits_size[0] * i13) - 1] > 0.0);
    }

    if (!c_obj->isReleased) {
    } else {
      emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
      q_y = NULL;
      m17 = mxCreateCharArray(2, iv99);
      for (i = 0; i < 45; i++) {
        cv90[i] = cv91[i];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 45, m17, cv90);
      emlrtAssign(&q_y, m17);
      r_y = NULL;
      m17 = mxCreateCharArray(2, iv100);
      for (i = 0; i < 4; i++) {
        cv92[i] = cv93[i];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 4, m17, cv92);
      emlrtAssign(&r_y, m17);
      b_error(message(q_y, r_y, &b_emlrtMCI), &b_emlrtMCI);
      emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    }

    if (!c_obj->isInitialized) {
      emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
      if (!c_obj->isInitialized) {
      } else {
        emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
        s_y = NULL;
        m17 = mxCreateCharArray(2, iv101);
        for (i = 0; i < 51; i++) {
          cv94[i] = cv95[i];
        }

        emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 51, m17, cv94);
        emlrtAssign(&s_y, m17);
        t_y = NULL;
        m17 = mxCreateCharArray(2, iv102);
        for (i = 0; i < 5; i++) {
          cv96[i] = cv97[i];
        }

        emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 5, m17, cv96);
        emlrtAssign(&t_y, m17);
        b_error(message(s_y, t_y, &b_emlrtMCI), &b_emlrtMCI);
        emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
      }

      emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
      c_obj->isInitialized = TRUE;
      emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
      for (i13 = 0; i13 < 8; i13++) {
        c_obj->inputVarSize1[i13] = (uint32_T)c_value[i13];
      }

      emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPushRtStackR2012b(&oe_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPopRtStackR2012b(&oe_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPushRtStackR2012b(&oe_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPopRtStackR2012b(&oe_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
      c_obj->TunablePropsChanged = FALSE;
      emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    }

    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    if (c_obj->TunablePropsChanged) {
      emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
      c_obj->TunablePropsChanged = FALSE;
      emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    }

    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    match_idx = 0;
    exitg1 = FALSE;
    while ((exitg1 == FALSE) && (match_idx < 8)) {
      if (c_obj->inputVarSize1[match_idx] != (uint32_T)iv103[match_idx]) {
        emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
        for (i13 = 0; i13 < 8; i13++) {
          c_obj->inputVarSize1[i13] = (uint32_T)inputSize[i13];
        }

        emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
        exitg1 = TRUE;
      } else {
        match_idx++;
      }
    }

    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&oe_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&oe_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&hc_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&oe_emlrtRSI, emlrtRootTLSGlobal);
    d_obj = &c_obj->cSFunObject;
    emlrtPushRtStackR2012b(&hj_emlrtRSI, emlrtRootTLSGlobal);

    /* System object Outputs function: comm.CRCDetector */
    match_idx = div_ssu32_floor(563, 3U);

    /* Initialize for current sub-frame */
    shReg = 0U;
    bitNumber = 0;
    for (i = 0; (uint32_T)i < (uint32_T)match_idx; i++) {
      input = 0U;
      bitMask = 4U;
      for (lastFound = 0; lastFound < 3; lastFound++) {
        if (bitNumber < 560) {
          varargout_1_data[bitNumber] = RHard_data[bitNumber];

          /* Build input data chunk */
          input |= bitMask * RHard_data[bitNumber];
          bitMask >>= 1U;
          bitNumber++;
        }
      }

      /* Retrieve value from CRC table and update register */
      shReg = d_obj->P0_CRCTable[shReg & 7U] ^ (shReg << 3U | input);
    }

    /* Process the leftover bits */
    for (i = 0; i < 2L; i++) {
      match_idx = (int32_T)(shReg >> 2U & 1U);
      shReg <<= 1U;
      if ((uint32_T)match_idx != 0U) {
        shReg ^= 1U;
      }
    }

    /* Apply final XOR */
    /* Output flag to indicate if error occurred (0 => no error) */
    leftoverBits = 0U;
    for (i = 0; i < 3; i++) {
      leftoverBits <<= 1U;
      leftoverBits ^= RHard_data[i + 560];
    }

    leftoverBits = (leftoverBits ^ shReg) << 29U;
    emlrtPopRtStackR2012b(&hj_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&oe_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&hc_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&hc_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&oe_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&oe_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&hc_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&ue_emlrtRSI, emlrtRootTLSGlobal);
    if (leftoverBits == 0U) {
      b_leftoverBits = FALSE;
    } else {
      b_leftoverBits = TRUE;
    }

    if (!b_leftoverBits) {
      /*  Convert Bits to characters */
      emlrtPushRtStackR2012b(&te_emlrtRSI, emlrtRootTLSGlobal);
      varargout_1_size[0] = 560;
      varargout_1_size[1] = 1;
      for (i13 = 0; i13 < 560; i13++) {
        b_varargout_1_data[i13] = (varargout_1_data[i13] > 0);
      }

      OFDMbits2letters(b_varargout_1_data, varargout_1_size, f_tmp_data,
                       Phat_size);
      messageEnd_size[0] = 1;
      messageEnd_size[1] = Phat_size[0];
      match_idx = Phat_size[0];
      for (i13 = 0; i13 < match_idx; i13++) {
        messageEnd_data[i13] = f_tmp_data[i13];
      }

      for (i13 = 0; i13 < 2; i13++) {
        iv104[i13] = (int8_T)messageEnd_size[i13];
      }

      match_idx = iv104[1];
      for (i13 = 0; i13 < match_idx; i13++) {
        numPeaks = muDoubleScalarFloor(messageEnd_data[i13]);
        if (muDoubleScalarIsNaN(numPeaks) || muDoubleScalarIsInf(numPeaks)) {
          numPeaks = 0.0;
        } else {
          numPeaks = muDoubleScalarRem(numPeaks, 256.0);
        }

        if (numPeaks < 0.0) {
          message_data[i13] = (int8_T)-(int8_T)(uint8_T)-numPeaks;
        } else {
          message_data[i13] = (int8_T)(uint8_T)numPeaks;
        }
      }

      emlrtPopRtStackR2012b(&te_emlrtRSI, emlrtRootTLSGlobal);

      /* messageBits(recMessage,1:end-3) */
      /* Remove padding */
      emlrtPushRtStackR2012b(&se_emlrtRSI, emlrtRootTLSGlobal);
      if (iv104[1] == 0) {
        messageEnd_size[1] = 0;
      } else {
        emlrtPushRtStackR2012b(&nj_emlrtRSI, emlrtRootTLSGlobal);
        match_idx = 0;
        emlrtPushRtStackR2012b(&oj_emlrtRSI, emlrtRootTLSGlobal);
        emlrtPopRtStackR2012b(&oj_emlrtRSI, emlrtRootTLSGlobal);
        for (i = 1; i <= iv104[1] - 2; i++) {
          lastFound = 1;
          while ((lastFound <= 3) && (message_data[(i + lastFound) - 2] ==
                  cv109[lastFound - 1])) {
            lastFound++;
          }

          if (lastFound > 3) {
            matches_data[match_idx] = (int8_T)i;
            match_idx++;
          }
        }

        emlrtPushRtStackR2012b(&pj_emlrtRSI, emlrtRootTLSGlobal);
        emlrtPushRtStackR2012b(&qj_emlrtRSI, emlrtRootTLSGlobal);
        if (1 > match_idx) {
          b4 = FALSE;
        } else {
          b4 = (match_idx > 2147483646);
        }

        if (b4) {
          emlrtPushRtStackR2012b(&dc_emlrtRSI, emlrtRootTLSGlobal);
          check_forloop_overflow_error();
          emlrtPopRtStackR2012b(&dc_emlrtRSI, emlrtRootTLSGlobal);
        }

        emlrtPopRtStackR2012b(&qj_emlrtRSI, emlrtRootTLSGlobal);
        for (i = 0; i + 1 <= match_idx; i++) {
          match_out_data[i] = matches_data[i];
        }

        emlrtPopRtStackR2012b(&pj_emlrtRSI, emlrtRootTLSGlobal);
        messageEnd_size[1] = match_idx;
        for (i13 = 0; i13 < match_idx; i13++) {
          messageEnd_data[i13] = match_out_data[i13];
        }

        emlrtPopRtStackR2012b(&nj_emlrtRSI, emlrtRootTLSGlobal);
      }

      emlrtPopRtStackR2012b(&se_emlrtRSI, emlrtRootTLSGlobal);
      if (!(messageEnd_size[1] == 0)) {
        if (1.0 > messageEnd_data[0] - 1.0) {
          match_idx = 0;
        } else {
          i13 = iv104[1];
          emlrtDynamicBoundsCheckFastR2012b(1, 1, i13, &o_emlrtBCI,
            emlrtRootTLSGlobal);
          i13 = iv104[1];
          bitNumber = (int32_T)messageEnd_data[0] - 1;
          match_idx = emlrtDynamicBoundsCheckFastR2012b(bitNumber, 1, i13,
            &o_emlrtBCI, emlrtRootTLSGlobal);
        }

        emlrtDimSizeGeqCheckFastR2012b(80, match_idx, &d_emlrtECI,
          emlrtRootTLSGlobal);
        for (i13 = 0; i13 < match_idx; i13++) {
          g_tmp_data[i13] = 1 + i13;
        }

        recoveredMessage_size[0] = 1;
        recoveredMessage_size[1] = match_idx;
        for (i13 = 0; i13 < match_idx; i13++) {
          recoveredMessage_data[i13] = message_data[g_tmp_data[i13] - 1];
        }
      }
    } else {
      /* View corrupted messages */
      /* recoveredMessage = char(OFDMbits2letters(msg > 0).');%messageBits(recMessage,1:end-3) */
      /* fprintf('Corrupted Message: %s\n',recoveredMessage); */
      emlrtDimSizeGeqCheckFastR2012b(80, 9, &c_emlrtECI, emlrtRootTLSGlobal);
      recoveredMessage_size[0] = 1;
      recoveredMessage_size[1] = 9;
      for (i13 = 0; i13 < 9; i13++) {
        recoveredMessage_data[i13] = cv110[i13];
      }
    }

    numBuffersProcessed++;
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, emlrtRootTLSGlobal);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(emlrtRootTLSGlobal);
}

/* End of code generation (PHYReceive.c) */
