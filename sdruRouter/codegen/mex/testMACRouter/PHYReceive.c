/*
 * PHYReceive.c
 *
 * Code generation for function 'PHYReceive'
 *
 * C source code generated on: Thu Mar  6 21:20:55 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testMACRouter.h"
#include "PHYReceive.h"
#include "abs.h"
#include "power.h"
#include "rdivide.h"
#include "sum.h"
#include "angle.h"
#include "AGC.h"
#include "testMACRouter_emxutil.h"
#include "SystemCore.h"
#include "SDRuReceiver.h"
#include "equalizeOFDM.h"
#include "eml_int_forloop_overflow_check.h"
#include "OFDMbits2letters.h"
#include "coarseOFDMFreqEst_sdr.h"
#include "locateOFDMFrame_sdr.h"
#include "xcorr.h"
#include "closeDataConnection.h"
#include "testMACRouter_mexutil.h"
#include "testMACRouter_data.h"
#include <stdio.h>

/* Variable Definitions */
static emlrtRSInfo nl_emlrtRSI = { 1, "CRCDetector",
  "/Applications/MATLAB_R2013b.app/toolbox/comm/comm/+commcodegen/CRCDetector.p"
};

static emlrtRSInfo km_emlrtRSI = { 99, "PHYReceive",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/PHYReceive.m" };

static emlrtRSInfo lm_emlrtRSI = { 97, "PHYReceive",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/PHYReceive.m" };

static emlrtRSInfo mm_emlrtRSI = { 93, "PHYReceive",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/PHYReceive.m" };

static emlrtRSInfo nm_emlrtRSI = { 70, "PHYReceive",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/PHYReceive.m" };

static emlrtRSInfo om_emlrtRSI = { 67, "PHYReceive",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/PHYReceive.m" };

static emlrtRSInfo pm_emlrtRSI = { 64, "PHYReceive",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/PHYReceive.m" };

static emlrtRSInfo qm_emlrtRSI = { 47, "PHYReceive",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/PHYReceive.m" };

static emlrtRSInfo rm_emlrtRSI = { 41, "PHYReceive",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/PHYReceive.m" };

static emlrtRSInfo sm_emlrtRSI = { 34, "PHYReceive",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/PHYReceive.m" };

static emlrtRSInfo tm_emlrtRSI = { 33, "PHYReceive",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/PHYReceive.m" };

static emlrtRSInfo mn_emlrtRSI = { 179, "AGC",
  "/Applications/MATLAB_R2013b.app/toolbox/comm/comm/+comm/AGC.m" };

static emlrtRSInfo nn_emlrtRSI = { 180, "AGC",
  "/Applications/MATLAB_R2013b.app/toolbox/comm/comm/+comm/AGC.m" };

static emlrtRSInfo on_emlrtRSI = { 183, "AGC",
  "/Applications/MATLAB_R2013b.app/toolbox/comm/comm/+comm/AGC.m" };

static emlrtRSInfo pn_emlrtRSI = { 189, "AGC",
  "/Applications/MATLAB_R2013b.app/toolbox/comm/comm/+comm/AGC.m" };

static emlrtRSInfo qn_emlrtRSI = { 190, "AGC",
  "/Applications/MATLAB_R2013b.app/toolbox/comm/comm/+comm/AGC.m" };

static emlrtRSInfo rn_emlrtRSI = { 194, "AGC",
  "/Applications/MATLAB_R2013b.app/toolbox/comm/comm/+comm/AGC.m" };

static emlrtRSInfo sn_emlrtRSI = { 195, "AGC",
  "/Applications/MATLAB_R2013b.app/toolbox/comm/comm/+comm/AGC.m" };

static emlrtRSInfo un_emlrtRSI = { 262, "AGC",
  "/Applications/MATLAB_R2013b.app/toolbox/comm/comm/+comm/AGC.m" };

static emlrtRSInfo fo_emlrtRSI = { 28, "locateOFDMFrame_sdr",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/private/locateOFDMFrame_sdr.m"
};

static emlrtRSInfo go_emlrtRSI = { 24, "locateOFDMFrame_sdr",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/private/locateOFDMFrame_sdr.m"
};

static emlrtRSInfo ho_emlrtRSI = { 17, "locateOFDMFrame_sdr",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/private/locateOFDMFrame_sdr.m"
};

static emlrtRSInfo io_emlrtRSI = { 16, "locateOFDMFrame_sdr",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/private/locateOFDMFrame_sdr.m"
};

static emlrtRSInfo gr_emlrtRSI = { 17, "coarseOFDMFreqEst_sdr",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/private/coarseOFDMFreqEst_sdr.m"
};

static emlrtRSInfo hr_emlrtRSI = { 10, "coarseOFDMFreqEst_sdr",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/private/coarseOFDMFreqEst_sdr.m"
};

static emlrtRSInfo ir_emlrtRSI = { 7, "coarseOFDMFreqEst_sdr",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/private/coarseOFDMFreqEst_sdr.m"
};

static emlrtRSInfo jr_emlrtRSI = { 6, "coarseOFDMFreqEst_sdr",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/private/coarseOFDMFreqEst_sdr.m"
};

static emlrtRSInfo fu_emlrtRSI = { 7, "demodOFDMSubcarriers_sdr",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/private/demodOFDMSubcarriers_sdr.m"
};

static emlrtRSInfo ou_emlrtRSI = { 44, "strfind",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/strfun/strfind.m" };

static emlrtRSInfo pu_emlrtRSI = { 63, "strfind",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/strfun/strfind.m" };

static emlrtRSInfo qu_emlrtRSI = { 76, "strfind",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/strfun/strfind.m" };

static emlrtRSInfo ru_emlrtRSI = { 85, "strfind",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/strfun/strfind.m" };

static emlrtRTEInfo v_emlrtRTEI = { 1, 31, "PHYReceive",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/PHYReceive.m" };

static emlrtECInfo j_emlrtECI = { 2, 108, 9, "PHYReceive",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/PHYReceive.m" };

static emlrtECInfo k_emlrtECI = { 2, 101, 13, "PHYReceive",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/PHYReceive.m" };

static emlrtECInfo l_emlrtECI = { 2, 82, 9, "PHYReceive",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/PHYReceive.m" };

static emlrtECInfo m_emlrtECI = { 2, 26, 1, "PHYReceive",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/PHYReceive.m" };

static emlrtBCInfo v_emlrtBCI = { -1, -1, 101, 32, "message", "PHYReceive",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/PHYReceive.m", 0 };

static emlrtECInfo n_emlrtECI = { -1, 73, 9, "PHYReceive",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/PHYReceive.m" };

static emlrtRTEInfo dc_emlrtRTEI = { 61, 25, "PHYReceive",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/PHYReceive.m" };

static emlrtECInfo o_emlrtECI = { -1, 21, 13, "locateOFDMFrame_sdr",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/private/locateOFDMFrame_sdr.m"
};

static emlrtECInfo p_emlrtECI = { -1, 20, 13, "locateOFDMFrame_sdr",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/private/locateOFDMFrame_sdr.m"
};

static emlrtECInfo q_emlrtECI = { -1, 6, 33, "coarseOFDMFreqEst_sdr",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/private/coarseOFDMFreqEst_sdr.m"
};

static emlrtECInfo r_emlrtECI = { -1, 6, 15, "coarseOFDMFreqEst_sdr",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/private/coarseOFDMFreqEst_sdr.m"
};

static emlrtBCInfo w_emlrtBCI = { 1, 5120, 61, 18, "buffer", "PHYReceive",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/PHYReceive.m", 0 };

static emlrtDCInfo b_emlrtDCI = { 61, 18, "PHYReceive",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/PHYReceive.m", 1 };

/* Function Declarations */
static int32_T div_ssu32_floor(const emlrtStack *sp, int32_T numerator, uint32_T
  denominator);

/* Function Definitions */
static int32_T div_ssu32_floor(const emlrtStack *sp, int32_T numerator, uint32_T
  denominator)
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

    emlrtDivisionByZeroErrorR2012b(0, sp);
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

void PHYReceive(testMACRouterStackData *SD, const emlrtStack *sp, comm_AGC
                *ObjAGC, comm_SDRuReceiver *ObjSDRuReceiver,
                commcodegen_CRCDetector *ObjDetect, OFDMDemodulator_1
                *ObjPreambleDemod, OFDMDemodulator_1 *ObjDataDemod, c_struct_T
                *estimate, const creal_T rx_shortPreambleOFDM[64], const real_T
                rx_longPreamble[53], const real_T rx_pilots[48], const real_T
                c_rx_pilotLocationsWithoutGuard[4], const real_T
                rx_dataSubcarrierIndexies_data[48], const int32_T
                rx_dataSubcarrierIndexies_size[2], real_T messageBits_data[563],
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

  const mxArray *m16;
  char_T cv94[45];
  int32_T i;
  static const char_T cv95[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C',
    'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv83[2] = { 1, 4 };

  char_T cv96[4];
  static const char_T cv97[4] = { 's', 't', 'e', 'p' };

  const mxArray *c_y;
  static const int32_T iv84[2] = { 1, 51 };

  char_T cv98[51];
  static const char_T cv99[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l',
    'e', 'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *d_y;
  static const int32_T iv85[2] = { 1, 5 };

  char_T cv100[5];
  static const char_T cv101[5] = { 's', 'e', 't', 'u', 'p' };

  int32_T errMsg_size[2];
  char_T errMsg_data[1024];
  UsrpErrorCapiEnumT deviceStatus;
  const mxArray *e_y;
  static const int32_T iv86[2] = { 1, 35 };

  char_T cv102[35];
  static const char_T cv103[35] = { 's', 'd', 'r', 'u', ':', 'r', 'e', 'p', 'o',
    'r', 't', 'S', 'D', 'R', 'u', 'S', 't', 'a', 't', 'u', 's', ':', 'N', 'o',
    't', 'C', 'o', 'm', 'p', 'a', 't', 'i', 'b', 'l', 'e' };

  const mxArray *f_y;
  static const int32_T iv87[2] = { 1, 12 };

  char_T cv104[12];
  static const char_T cv105[12] = { '1', '9', '2', '.', '1', '6', '8', '.', '1',
    '0', '.', '2' };

  const mxArray *g_y;
  static const int32_T iv88[2] = { 1, 43 };

  char_T cv106[43];
  static const char_T cv107[43] = { 'r', 'e', 't', 'u', 'r', 'n', 'e', 'd', ' ',
    'b', 'y', ' ', '\'', 'g', 'e', 't', 'S', 'D', 'R', 'u', 'D', 'r', 'i', 'v',
    'e', 'r', 'V', 'e', 'r', 's', 'i', 'o', 'n', '\'', ' ', 'f', 'u', 'n', 'c',
    't', 'i', 'o', 'n' };

  const mxArray *h_y;
  static const int32_T iv89[2] = { 1, 35 };

  static const char_T cv108[35] = { 's', 'd', 'r', 'u', ':', 'r', 'e', 'p', 'o',
    'r', 't', 'S', 'D', 'R', 'u', 'S', 't', 'a', 't', 'u', 's', ':', 'N', 'o',
    't', 'R', 'e', 's', 'p', 'o', 'n', 'd', 'i', 'n', 'g' };

  const mxArray *i_y;
  static const int32_T iv90[2] = { 1, 12 };

  const mxArray *j_y;
  static const int32_T iv91[2] = { 1, 28 };

  char_T cv109[28];
  static const char_T cv110[28] = { 's', 'd', 'r', 'u', ':', 'r', 'e', 'p', 'o',
    'r', 't', 'S', 'D', 'R', 'u', 'S', 't', 'a', 't', 'u', 's', ':', 'R', 'x',
    'B', 'u', 's', 'y' };

  const mxArray *k_y;
  static const int32_T iv92[2] = { 1, 12 };

  const mxArray *l_y;
  static const int32_T iv93[2] = { 1, 28 };

  static const char_T cv111[28] = { 's', 'd', 'r', 'u', ':', 'r', 'e', 'p', 'o',
    'r', 't', 'S', 'D', 'R', 'u', 'S', 't', 'a', 't', 'u', 's', ':', 'T', 'x',
    'B', 'u', 's', 'y' };

  const mxArray *m_y;
  static const int32_T iv94[2] = { 1, 12 };

  const mxArray *n_y;
  static const int32_T iv95[2] = { 1, 26 };

  char_T cv112[26];
  static const char_T cv113[26] = { 's', 'd', 'r', 'u', ':', 'r', 'e', 'p', 'o',
    'r', 't', 'S', 'D', 'R', 'u', 'S', 't', 'a', 't', 'u', 's', ':', 'B', 'u',
    's', 'y' };

  const mxArray *o_y;
  static const int32_T iv96[2] = { 1, 12 };

  const mxArray *p_y;
  static const int32_T iv97[2] = { 1, 35 };

  static const char_T cv114[35] = { 's', 'd', 'r', 'u', ':', 'r', 'e', 'p', 'o',
    'r', 't', 'S', 'D', 'R', 'u', 'S', 't', 'a', 't', 'u', 's', ':', 'U', 'n',
    'k', 'n', 'o', 'w', 'n', 'S', 't', 'a', 't', 'u', 's' };

  int32_T u_size[2];
  int32_T match_idx;
  int32_T j;
  char_T u_data[1024];
  const mxArray *q_y;
  creal_T P;
  boolean_T guard1 = FALSE;
  comm_AGC *b_obj;
  const mxArray *r_y;
  static const int32_T iv98[2] = { 1, 45 };

  const mxArray *s_y;
  static const int32_T iv99[2] = { 1, 4 };

  const mxArray *t_y;
  static const int32_T iv100[2] = { 1, 51 };

  const mxArray *u_y;
  static const int32_T iv101[2] = { 1, 5 };

  static const int16_T value[8] = { 5120, 1, 1, 1, 1, 1, 1, 1 };

  boolean_T anyInputSizeChanged;
  boolean_T exitg3;
  static const int16_T iv102[8] = { 5120, 1, 1, 1, 1, 1, 1, 1 };

  int32_T rWin_size[1];
  creal_T rx_shortPreambleOFDM_data[16];
  int32_T Phat_size[1];
  real_T tmp_data[1231];
  real_T b_tmp_data[1231];
  int32_T tmp_size[1];
  int32_T b_Phat_size[1];
  int32_T b_tmp_size[1];
  int32_T Rhat_size[1];
  real_T Rhat_data[1224];
  real_T M_data[1224];
  real_T d2;
  real_T d3;
  int32_T bitNumber;
  creal_T rFrame_data[32];
  c_struct_T b_estimate;
  creal_T RPostEqualizer[576];
  creal_T RLinear[576];
  int32_T RHard_size[1];
  boolean_T RHard_data[563];
  int8_T b_RHard_data[563];
  static const char_T cv115[7] = { 'T', 'i', 'm', 'e', 'o', 'u', 't' };

  commcodegen_CRCDetector *c_obj;
  const mxArray *v_y;
  static const int32_T iv103[2] = { 1, 45 };

  const mxArray *w_y;
  static const int32_T iv104[2] = { 1, 4 };

  const mxArray *x_y;
  static const int32_T iv105[2] = { 1, 51 };

  const mxArray *y_y;
  static const int32_T iv106[2] = { 1, 5 };

  static const int16_T b_value[8] = { 563, 1, 1, 1, 1, 1, 1, 1 };

  boolean_T exitg1;
  static const int16_T iv107[8] = { 563, 1, 1, 1, 1, 1, 1, 1 };

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
  real_T c_tmp_data[80];
  int32_T messageEnd_size[2];
  real_T messageEnd_data[80];
  int8_T iv108[2];
  char_T message_data[80];
  int8_T matches_data[80];
  static const char_T cv116[3] = { 'E', 'O', 'F' };

  int8_T match_out_data[80];
  boolean_T b3;
  static const char_T cv117[9] = { 'C', 'R', 'C', ' ', 'E', 'r', 'r', 'o', 'r' };

  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
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
  emlrtHeapReferenceStackEnterFcnR2012b(sp);

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
  emlrtDimSizeGeqCheckFastR2012b(80, 0, &m_emlrtECI, sp);
  recoveredMessage_size[0] = 1;
  recoveredMessage_size[1] = 0;

  /* % Process received data */
  /*  Locate frames in buffer and compensate for channel affects */
  emxInit_creal_T(sp, &unusedU0, 3, &v_emlrtRTEI, TRUE);
  exitg2 = FALSE;
  while ((exitg2 == FALSE) && (estimate->numProcessed < 1.0)) {
    /*  Get data from USRP */
    st.site = &tm_emlrtRSI;
    obj = ObjSDRuReceiver;
    if (!obj->isReleased) {
    } else {
      y = NULL;
      m16 = mxCreateCharArray(2, iv82);
      for (i = 0; i < 45; i++) {
        cv94[i] = cv95[i];
      }

      emlrtInitCharArrayR2013a(&st, 45, m16, cv94);
      emlrtAssign(&y, m16);
      b_y = NULL;
      m16 = mxCreateCharArray(2, iv83);
      for (i = 0; i < 4; i++) {
        cv96[i] = cv97[i];
      }

      emlrtInitCharArrayR2013a(&st, 4, m16, cv96);
      emlrtAssign(&b_y, m16);
      b_st.site = &cb_emlrtRSI;
      c_error(&b_st, message(&b_st, y, b_y, &emlrtMCI), &emlrtMCI);
    }

    if (!obj->isInitialized) {
      b_st.site = &cb_emlrtRSI;
      if (!obj->isInitialized) {
      } else {
        c_y = NULL;
        m16 = mxCreateCharArray(2, iv84);
        for (i = 0; i < 51; i++) {
          cv98[i] = cv99[i];
        }

        emlrtInitCharArrayR2013a(&b_st, 51, m16, cv98);
        emlrtAssign(&c_y, m16);
        d_y = NULL;
        m16 = mxCreateCharArray(2, iv85);
        for (i = 0; i < 5; i++) {
          cv100[i] = cv101[i];
        }

        emlrtInitCharArrayR2013a(&b_st, 5, m16, cv100);
        emlrtAssign(&d_y, m16);
        c_st.site = &cb_emlrtRSI;
        c_error(&c_st, message(&c_st, c_y, d_y, &emlrtMCI), &emlrtMCI);
      }

      c_st.site = &cb_emlrtRSI;
      obj->isInitialized = TRUE;
      d_st.site = &db_emlrtRSI;
      c_st.site = &cb_emlrtRSI;
      c_st.site = &cb_emlrtRSI;
      d_st.site = &cb_emlrtRSI;
      c_st.site = &cb_emlrtRSI;
      c_st.site = &cb_emlrtRSI;
      d_st.site = &cb_emlrtRSI;
      c_st.site = &cb_emlrtRSI;
      d_st.site = &cb_emlrtRSI;
      e_st.site = &cb_emlrtRSI;
      e_st.site = &cb_emlrtRSI;
      c_st.site = &cb_emlrtRSI;
      d_st.site = &cb_emlrtRSI;
      d_st.site = &cb_emlrtRSI;
      c_st.site = &cb_emlrtRSI;
      c_st.site = &cb_emlrtRSI;
      c_st.site = &cb_emlrtRSI;
      c_st.site = &cb_emlrtRSI;
      d_st.site = &sj_emlrtRSI;
      SDRuReceiver_setupImplLocal(&d_st, obj, &deviceStatus, errMsg_data,
        errMsg_size);
      if (deviceStatus == UsrpDriverSuccess) {
        d_st.site = &sj_emlrtRSI;
        e_st.site = &db_emlrtRSI;
      } else {
        d_st.site = &sj_emlrtRSI;
        closeDataConnection(&d_st, obj->pDriverHandle);
        d_st.site = &sj_emlrtRSI;
        e_st.site = &db_emlrtRSI;
      }

      d_st.site = &sj_emlrtRSI;

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
        e_st.site = &in_emlrtRSI;
        if (!(deviceStatus == UsrpDriverNotCompatible)) {
        } else {
          e_y = NULL;
          m16 = mxCreateCharArray(2, iv86);
          for (i = 0; i < 35; i++) {
            cv102[i] = cv103[i];
          }

          emlrtInitCharArrayR2013a(&e_st, 35, m16, cv102);
          emlrtAssign(&e_y, m16);
          f_y = NULL;
          m16 = mxCreateCharArray(2, iv87);
          for (i = 0; i < 12; i++) {
            cv104[i] = cv105[i];
          }

          emlrtInitCharArrayR2013a(&e_st, 12, m16, cv104);
          emlrtAssign(&f_y, m16);
          g_y = NULL;
          m16 = mxCreateCharArray(2, iv88);
          for (i = 0; i < 43; i++) {
            cv106[i] = cv107[i];
          }

          emlrtInitCharArrayR2013a(&e_st, 43, m16, cv106);
          emlrtAssign(&g_y, m16);
          f_st.site = &hv_emlrtRSI;
          c_error(&f_st, c_message(&f_st, e_y, f_y, g_y, &g_emlrtMCI),
                  &g_emlrtMCI);
        }
        break;

       case UsrpDriverNotResponding:
        e_st.site = &gn_emlrtRSI;
        if (!(deviceStatus == UsrpDriverNotResponding)) {
        } else {
          h_y = NULL;
          m16 = mxCreateCharArray(2, iv89);
          for (i = 0; i < 35; i++) {
            cv102[i] = cv108[i];
          }

          emlrtInitCharArrayR2013a(&e_st, 35, m16, cv102);
          emlrtAssign(&h_y, m16);
          i_y = NULL;
          m16 = mxCreateCharArray(2, iv90);
          for (i = 0; i < 12; i++) {
            cv104[i] = cv105[i];
          }

          emlrtInitCharArrayR2013a(&e_st, 12, m16, cv104);
          emlrtAssign(&i_y, m16);
          f_st.site = &hv_emlrtRSI;
          c_error(&f_st, message(&f_st, h_y, i_y, &g_emlrtMCI), &g_emlrtMCI);
        }
        break;

       case UsrpDriverRxBusy:
        e_st.site = &en_emlrtRSI;
        if (!(deviceStatus == UsrpDriverRxBusy)) {
        } else {
          j_y = NULL;
          m16 = mxCreateCharArray(2, iv91);
          for (i = 0; i < 28; i++) {
            cv109[i] = cv110[i];
          }

          emlrtInitCharArrayR2013a(&e_st, 28, m16, cv109);
          emlrtAssign(&j_y, m16);
          k_y = NULL;
          m16 = mxCreateCharArray(2, iv92);
          for (i = 0; i < 12; i++) {
            cv104[i] = cv105[i];
          }

          emlrtInitCharArrayR2013a(&e_st, 12, m16, cv104);
          emlrtAssign(&k_y, m16);
          f_st.site = &hv_emlrtRSI;
          c_error(&f_st, message(&f_st, j_y, k_y, &g_emlrtMCI), &g_emlrtMCI);
        }
        break;

       case UsrpDriverTxBusy:
        e_st.site = &cn_emlrtRSI;
        if (!(deviceStatus == UsrpDriverTxBusy)) {
        } else {
          l_y = NULL;
          m16 = mxCreateCharArray(2, iv93);
          for (i = 0; i < 28; i++) {
            cv109[i] = cv111[i];
          }

          emlrtInitCharArrayR2013a(&e_st, 28, m16, cv109);
          emlrtAssign(&l_y, m16);
          m_y = NULL;
          m16 = mxCreateCharArray(2, iv94);
          for (i = 0; i < 12; i++) {
            cv104[i] = cv105[i];
          }

          emlrtInitCharArrayR2013a(&e_st, 12, m16, cv104);
          emlrtAssign(&m_y, m16);
          f_st.site = &hv_emlrtRSI;
          c_error(&f_st, message(&f_st, l_y, m_y, &g_emlrtMCI), &g_emlrtMCI);
        }
        break;

       case UsrpDriverBusy:
        e_st.site = &an_emlrtRSI;
        if (!(deviceStatus == UsrpDriverBusy)) {
        } else {
          n_y = NULL;
          m16 = mxCreateCharArray(2, iv95);
          for (i = 0; i < 26; i++) {
            cv112[i] = cv113[i];
          }

          emlrtInitCharArrayR2013a(&e_st, 26, m16, cv112);
          emlrtAssign(&n_y, m16);
          o_y = NULL;
          m16 = mxCreateCharArray(2, iv96);
          for (i = 0; i < 12; i++) {
            cv104[i] = cv105[i];
          }

          emlrtInitCharArrayR2013a(&e_st, 12, m16, cv104);
          emlrtAssign(&o_y, m16);
          f_st.site = &hv_emlrtRSI;
          c_error(&f_st, message(&f_st, n_y, o_y, &g_emlrtMCI), &g_emlrtMCI);
        }
        break;

       case UsrpDriverError:
        e_st.site = &xm_emlrtRSI;
        if (!(deviceStatus == UsrpDriverError)) {
        } else {
          p_y = NULL;
          m16 = mxCreateCharArray(2, iv97);
          for (i = 0; i < 35; i++) {
            cv102[i] = cv114[i];
          }

          emlrtInitCharArrayR2013a(&e_st, 35, m16, cv102);
          emlrtAssign(&p_y, m16);
          u_size[0] = 1;
          u_size[1] = errMsg_size[1];
          match_idx = errMsg_size[0] * errMsg_size[1];
          for (j = 0; j < match_idx; j++) {
            u_data[j] = errMsg_data[j];
          }

          q_y = NULL;
          m16 = mxCreateCharArray(2, u_size);
          emlrtInitCharArrayR2013a(&e_st, u_size[1], m16, (char_T *)&u_data);
          emlrtAssign(&q_y, m16);
          f_st.site = &hv_emlrtRSI;
          c_error(&f_st, message(&f_st, p_y, q_y, &g_emlrtMCI), &g_emlrtMCI);
        }
        break;
      }

      c_st.site = &cb_emlrtRSI;
      c_st.site = &cb_emlrtRSI;
      obj->TunablePropsChanged = FALSE;
      d_st.site = &db_emlrtRSI;
    }

    b_st.site = &cb_emlrtRSI;
    b_st.site = &cb_emlrtRSI;
    if (obj->TunablePropsChanged) {
      c_st.site = &cb_emlrtRSI;
      c_st.site = &cb_emlrtRSI;
      obj->TunablePropsChanged = FALSE;
      d_st.site = &db_emlrtRSI;
      c_st.site = &cb_emlrtRSI;
      c_st.site = &cb_emlrtRSI;
      d_st.site = &db_emlrtRSI;
      for (j = 0; j < 4; j++) {
        obj->tunablePropertyChanged[j] = FALSE;
      }

      e_st.site = &db_emlrtRSI;
    }

    b_st.site = &cb_emlrtRSI;
    c_st.site = &cb_emlrtRSI;
    c_st.site = &cb_emlrtRSI;
    b_st.site = &cb_emlrtRSI;
    b_st.site = &cb_emlrtRSI;
    b_st.site = &cb_emlrtRSI;
    c_st.site = &cb_emlrtRSI;
    c_st.site = &cb_emlrtRSI;
    b_st.site = &cb_emlrtRSI;
    b_st.site = &cb_emlrtRSI;
    b_st.site = &cb_emlrtRSI;
    SDRuReceiver_stepImpl(SD, &b_st, obj, SD->f8.buffer);
    st.site = &sm_emlrtRSI;
    P = SD->f8.buffer[0];
    for (match_idx = 0; match_idx < 5119; match_idx++) {
      P.re += SD->f8.buffer[match_idx + 1].re;
      P.im += SD->f8.buffer[match_idx + 1].im;
    }

    guard1 = FALSE;
    if ((P.re == 0.0) && (P.im == 0.0)) {
      /*  All zeros from radio (Bug?) */
      guard1 = TRUE;
    } else {
      /*  Automatic Gain Control */
      st.site = &rm_emlrtRSI;
      b_obj = ObjAGC;
      if (!b_obj->isReleased) {
      } else {
        r_y = NULL;
        m16 = mxCreateCharArray(2, iv98);
        for (i = 0; i < 45; i++) {
          cv94[i] = cv95[i];
        }

        emlrtInitCharArrayR2013a(&st, 45, m16, cv94);
        emlrtAssign(&r_y, m16);
        s_y = NULL;
        m16 = mxCreateCharArray(2, iv99);
        for (i = 0; i < 4; i++) {
          cv96[i] = cv97[i];
        }

        emlrtInitCharArrayR2013a(&st, 4, m16, cv96);
        emlrtAssign(&s_y, m16);
        b_st.site = &cb_emlrtRSI;
        c_error(&b_st, message(&b_st, r_y, s_y, &emlrtMCI), &emlrtMCI);
      }

      if (!b_obj->isInitialized) {
        b_st.site = &cb_emlrtRSI;
        if (!b_obj->isInitialized) {
        } else {
          t_y = NULL;
          m16 = mxCreateCharArray(2, iv100);
          for (i = 0; i < 51; i++) {
            cv98[i] = cv99[i];
          }

          emlrtInitCharArrayR2013a(&b_st, 51, m16, cv98);
          emlrtAssign(&t_y, m16);
          u_y = NULL;
          m16 = mxCreateCharArray(2, iv101);
          for (i = 0; i < 5; i++) {
            cv100[i] = cv101[i];
          }

          emlrtInitCharArrayR2013a(&b_st, 5, m16, cv100);
          emlrtAssign(&u_y, m16);
          c_st.site = &cb_emlrtRSI;
          c_error(&c_st, message(&c_st, t_y, u_y, &emlrtMCI), &emlrtMCI);
        }

        c_st.site = &cb_emlrtRSI;
        b_obj->isInitialized = TRUE;
        d_st.site = &db_emlrtRSI;
        c_st.site = &cb_emlrtRSI;
        d_st.site = &cb_emlrtRSI;
        e_st.site = &db_emlrtRSI;
        d_st.site = &cb_emlrtRSI;
        e_st.site = &db_emlrtRSI;
        c_st.site = &cb_emlrtRSI;
        d_st.site = &cb_emlrtRSI;
        d_st.site = &cb_emlrtRSI;
        d_st.site = &cb_emlrtRSI;
        e_st.site = &db_emlrtRSI;
        c_st.site = &cb_emlrtRSI;
        d_st.site = &cb_emlrtRSI;
        for (j = 0; j < 8; j++) {
          b_obj->inputVarSize1[j] = (uint32_T)value[j];
        }

        e_st.site = &db_emlrtRSI;
        c_st.site = &cb_emlrtRSI;
        d_st.site = &cb_emlrtRSI;
        c_st.site = &cb_emlrtRSI;
        d_st.site = &cb_emlrtRSI;
        e_st.site = &cb_emlrtRSI;
        e_st.site = &cb_emlrtRSI;
        c_st.site = &cb_emlrtRSI;
        d_st.site = &cb_emlrtRSI;
        d_st.site = &cb_emlrtRSI;
        c_st.site = &cb_emlrtRSI;
        c_st.site = &cb_emlrtRSI;
        c_st.site = &cb_emlrtRSI;
        c_st.site = &cb_emlrtRSI;
        d_st.site = &mn_emlrtRSI;
        e_st.site = &db_emlrtRSI;
        d_st.site = &nn_emlrtRSI;
        b_obj->Gain = 1.0;
        e_st.site = &db_emlrtRSI;
        d_st.site = &on_emlrtRSI;
        e_st.site = &db_emlrtRSI;
        d_st.site = &pn_emlrtRSI;
        e_st.site = &db_emlrtRSI;
        d_st.site = &qn_emlrtRSI;
        e_st.site = &db_emlrtRSI;
        d_st.site = &rn_emlrtRSI;
        e_st.site = &db_emlrtRSI;
        d_st.site = &sn_emlrtRSI;
        e_st.site = &db_emlrtRSI;
        c_st.site = &cb_emlrtRSI;
        d_st.site = &un_emlrtRSI;
        b_obj->Gain = 1.0;
        e_st.site = &db_emlrtRSI;
      }

      b_st.site = &cb_emlrtRSI;
      b_st.site = &cb_emlrtRSI;
      b_st.site = &cb_emlrtRSI;
      c_st.site = &cb_emlrtRSI;
      c_st.site = &cb_emlrtRSI;
      b_st.site = &cb_emlrtRSI;
      b_st.site = &cb_emlrtRSI;
      anyInputSizeChanged = FALSE;
      match_idx = 0;
      exitg3 = FALSE;
      while ((exitg3 == FALSE) && (match_idx < 8)) {
        if (b_obj->inputVarSize1[match_idx] != (uint32_T)iv102[match_idx]) {
          anyInputSizeChanged = TRUE;
          c_st.site = &cb_emlrtRSI;
          for (j = 0; j < 8; j++) {
            b_obj->inputVarSize1[j] = (uint32_T)value[j];
          }

          d_st.site = &db_emlrtRSI;
          exitg3 = TRUE;
        } else {
          match_idx++;
        }
      }

      if (anyInputSizeChanged) {
        b_st.site = &cb_emlrtRSI;
        b_st.site = &cb_emlrtRSI;
      }

      b_st.site = &cb_emlrtRSI;
      c_st.site = &cb_emlrtRSI;
      c_st.site = &cb_emlrtRSI;
      b_st.site = &cb_emlrtRSI;
      b_st.site = &cb_emlrtRSI;
      memcpy(&SD->f8.b_buffer[0], &SD->f8.buffer[0], 5120U * sizeof(creal_T));
      b_st.site = &cb_emlrtRSI;
      AGC_stepImpl(SD, b_obj, SD->f8.b_buffer, SD->f8.buffer);

      /*  Increment processed data index */
      numBuffersProcessed++;

      /*     %% Find preamble in buffer */
      st.site = &qm_emlrtRSI;

      /*  locateOFDMFrame: Locate 802.11a based preamble from input data stream. */
      /*  It is assumed that the received signal is still in the time domain.  The */
      /*  location of the start of the preamble will be returned, if not found -1 */
      /*  is returned */
      /* % Timing Estimate */
      /*  Quarter of short preamble sequence */
      /*  Cross correlate */
      rWin_size[0] = 1231;
      memcpy(&SD->f8.rWin_data[0], &SD->f8.buffer[0], 1231U * sizeof(creal_T));
      for (j = 0; j < 16; j++) {
        rx_shortPreambleOFDM_data[j].re = rx_shortPreambleOFDM[j].re;
        rx_shortPreambleOFDM_data[j].im = -rx_shortPreambleOFDM[j].im;
      }

      b_st.site = &io_emlrtRSI;
      xcorr(&b_st, SD->f8.rWin_data, rx_shortPreambleOFDM_data, SD->f8.Phat_data,
            Phat_size);
      b_st.site = &ho_emlrtRSI;
      c_abs(SD->f8.rWin_data, rWin_size, tmp_data, Phat_size);
      tmp_size[0] = Phat_size[0];
      match_idx = Phat_size[0];
      for (j = 0; j < match_idx; j++) {
        b_tmp_data[j] = tmp_data[j];
      }

      b_st.site = &ho_emlrtRSI;
      power(b_tmp_data, tmp_size, tmp_data, Phat_size);
      b_st.site = &ho_emlrtRSI;
      b_xcorr(&b_st, tmp_data, SD->f8.Rhat_data, Phat_size);

      /*  moving average */
      /*  Remove leading and tail zeros overlaps */
      emlrtVectorVectorIndexCheckR2012b(2461, 1, 1, 1224, &p_emlrtECI, &st);
      emlrtVectorVectorIndexCheckR2012b(2461, 1, 1, 1224, &o_emlrtECI, &st);

      /*  Calculate timing metric */
      b_Phat_size[0] = 1224;
      memcpy(&SD->f8.b_Phat_data[0], &SD->f8.Phat_data[1230], 1224U * sizeof
             (creal_T));
      b_st.site = &go_emlrtRSI;
      c_abs(SD->f8.b_Phat_data, b_Phat_size, tmp_data, Phat_size);
      b_tmp_size[0] = Phat_size[0];
      match_idx = Phat_size[0];
      for (j = 0; j < match_idx; j++) {
        b_tmp_data[j] = tmp_data[j];
      }

      b_st.site = &go_emlrtRSI;
      power(b_tmp_data, b_tmp_size, tmp_data, Phat_size);
      Rhat_size[0] = 1224;
      memcpy(&Rhat_data[0], &SD->f8.Rhat_data[1230], 1224U * sizeof(real_T));
      b_st.site = &go_emlrtRSI;
      power(Rhat_data, Rhat_size, b_tmp_data, Phat_size);
      b_st.site = &go_emlrtRSI;
      rdivide(tmp_data, b_tmp_data, M_data, Phat_size);

      /*  Determine start of short preamble */
      /*  peak threshold after normalization (TUNABLE) */
      b_st.site = &fo_emlrtRSI;
      locateShortpreamble(&b_st, M_data, &d3, &d2);
      estimate->delay = d3;
      estimate->numPeaks = d2;

      /*  Check if frame exists in correct location and whether it's duplicate */
      /*  %Check if full data frame exists in buffer */
      /*  %Check if preamble located */
      if ((d3 > -1.0) && (numBuffersProcessed - lastFound >= 2)) {
        anyInputSizeChanged = TRUE;
      } else {
        anyInputSizeChanged = FALSE;
      }

      /* Check if duplicate frame */
      /*     %% Recover found frame */
      if (anyInputSizeChanged) {
        lastFound = numBuffersProcessed;

        /* Flag frame as found so duplicate frames are not processed */
        estimate->numProcessed = 1.0;

        /* Increment processed found frames */
        /*  Extract single frame from input buffer */
        if (d3 == d3) {
        } else {
          emlrtErrorWithMessageIdR2012b(sp, &dc_emlrtRTEI,
            "EMLRT:runTime:RepeatedExprWithDifferentResultsInColonIndexing", 0);
        }

        for (j = 0; j < 1280; j++) {
          d2 = d3 + (1.0 + (real_T)j);
          bitNumber = (int32_T)emlrtIntegerCheckFastR2012b(d2, &b_emlrtDCI, sp);
          SD->f8.rFrame_data[j].re = SD->
            f8.buffer[emlrtDynamicBoundsCheckFastR2012b(bitNumber, 1, 5120,
            &w_emlrtBCI, sp) - 1].re;
          d2 = d3 + (1.0 + (real_T)j);
          bitNumber = (int32_T)emlrtIntegerCheckFastR2012b(d2, &b_emlrtDCI, sp);
          SD->f8.rFrame_data[j].im = SD->
            f8.buffer[emlrtDynamicBoundsCheckFastR2012b(bitNumber, 1, 5120,
            &w_emlrtBCI, sp) - 1].im;
        }

        /*  Correct frequency offset */
        st.site = &pm_emlrtRSI;

        /*  coarseOFDMFreqEst: Frequency Correction based on the Schmidl and Cox */
        /*  method, utilizing halves of the short preamble from the 802.11a standard */
        emlrtVectorVectorIndexCheckR2012b(1280, 1, 1, 32, &r_emlrtECI, &st);
        emlrtVectorVectorIndexCheckR2012b(1280, 1, 1, 32, &q_emlrtECI, &st);
        for (j = 0; j < 32; j++) {
          rFrame_data[j].re = SD->f8.rFrame_data[j].re * SD->f8.rFrame_data[32 +
            j].re - -SD->f8.rFrame_data[j].im * SD->f8.rFrame_data[32 + j].im;
          rFrame_data[j].im = SD->f8.rFrame_data[j].re * SD->f8.rFrame_data[32 +
            j].im + -SD->f8.rFrame_data[j].im * SD->f8.rFrame_data[32 + j].re;
        }

        b_st.site = &jr_emlrtRSI;
        P = sum(rFrame_data);

        /* Cross-correlate preamble */
        b_st.site = &ir_emlrtRSI;
        estimate->phi = angle(P);

        /*  Determine phase angle between preamble halves */
        /*  Buffer not full */
        b_st.site = &hr_emlrtRSI;
        c_st.site = &j_emlrtRSI;
        d_st.site = &k_emlrtRSI;
        estimate->frequency[0] = estimate->phi / 4.0212385965949353E-5;

        /*  Convert angle to frequency */
        /*  Apply frequency estimate */
        memcpy(&SD->f8.b_rFrame_data[0], &SD->f8.rFrame_data[0], 1280U * sizeof
               (creal_T));
        b_st.site = &gr_emlrtRSI;
        freqCorrectOFDM(&b_st, estimate, SD->f8.b_rFrame_data,
                        SD->f8.rFrame_data, Phat_size);

        /*  Equalize */
        b_estimate = *estimate;
        st.site = &om_emlrtRSI;
        equalizeOFDM(SD, &st, SD->f8.rFrame_data, rx_longPreamble, rx_pilots,
                     c_rx_pilotLocationsWithoutGuard,
                     rx_dataSubcarrierIndexies_data,
                     rx_dataSubcarrierIndexies_size, &b_estimate,
                     ObjPreambleDemod, ObjDataDemod, RPostEqualizer, unusedU0,
                     estimate);

        /*  Demod subcarriers */
        st.site = &nm_emlrtRSI;

        /*  demodOFDMSubcarriers: Hard demodulate then compare received and */
        /*  transmitted data */
        /*  Demodulate subcarrier data */
        b_st.site = &fu_emlrtRSI;
        memcpy(&RLinear[0], &RPostEqualizer[0], 576U * sizeof(creal_T));
        RHard_size[0] = 563;
        for (j = 0; j < 563; j++) {
          RHard_data[j] = (RLinear[j].re < 0.0);
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
        for (j = 0; j < 2; j++) {
          errMsg_size[j] = 1 + 562 * j;
        }

        emlrtSubAssignSizeCheckR2012b(errMsg_size, 2, RHard_size, 1, &n_emlrtECI,
          sp);
        for (j = 0; j < 563; j++) {
          b_RHard_data[j] = (int8_T)RHard_data[j];
        }

        for (j = 0; j < 563; j++) {
          messageBits_data[messageBits_size[0] * j] = b_RHard_data[j];
        }
      }

      /*     %% Timeout */
      /* fprintf('%f\n',numBuffersProcessed); */
      /* fprintf('%f\n',timeoutDuration); */
      if (numBuffersProcessed > 48) {
        emlrtDimSizeGeqCheckFastR2012b(80, 7, &l_emlrtECI, sp);
        recoveredMessage_size[0] = 1;
        recoveredMessage_size[1] = 7;
        for (j = 0; j < 7; j++) {
          recoveredMessage_data[j] = cv115[j];
        }

        exitg2 = TRUE;
      } else {
        guard1 = TRUE;
      }
    }

    if (guard1 == TRUE) {
      emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
    }
  }

  emxFree_creal_T(&unusedU0);

  /* % Process Messages */
  match_idx = 0;
  while (match_idx <= (int32_T)estimate->numProcessed - 1) {
    /*  CRC Check */
    st.site = &mm_emlrtRSI;
    c_obj = ObjDetect;
    for (j = 0; j < 563; j++) {
      RHard_data[j] = (messageBits_data[messageBits_size[0] * j] > 0.0);
    }

    if (!c_obj->isReleased) {
    } else {
      v_y = NULL;
      m16 = mxCreateCharArray(2, iv103);
      for (i = 0; i < 45; i++) {
        cv94[i] = cv95[i];
      }

      emlrtInitCharArrayR2013a(&st, 45, m16, cv94);
      emlrtAssign(&v_y, m16);
      w_y = NULL;
      m16 = mxCreateCharArray(2, iv104);
      for (i = 0; i < 4; i++) {
        cv96[i] = cv97[i];
      }

      emlrtInitCharArrayR2013a(&st, 4, m16, cv96);
      emlrtAssign(&w_y, m16);
      b_st.site = &cb_emlrtRSI;
      c_error(&b_st, message(&b_st, v_y, w_y, &emlrtMCI), &emlrtMCI);
    }

    if (!c_obj->isInitialized) {
      b_st.site = &cb_emlrtRSI;
      if (!c_obj->isInitialized) {
      } else {
        x_y = NULL;
        m16 = mxCreateCharArray(2, iv105);
        for (i = 0; i < 51; i++) {
          cv98[i] = cv99[i];
        }

        emlrtInitCharArrayR2013a(&b_st, 51, m16, cv98);
        emlrtAssign(&x_y, m16);
        y_y = NULL;
        m16 = mxCreateCharArray(2, iv106);
        for (i = 0; i < 5; i++) {
          cv100[i] = cv101[i];
        }

        emlrtInitCharArrayR2013a(&b_st, 5, m16, cv100);
        emlrtAssign(&y_y, m16);
        c_st.site = &cb_emlrtRSI;
        c_error(&c_st, message(&c_st, x_y, y_y, &emlrtMCI), &emlrtMCI);
      }

      c_st.site = &cb_emlrtRSI;
      c_obj->isInitialized = TRUE;
      d_st.site = &db_emlrtRSI;
      c_st.site = &cb_emlrtRSI;
      d_st.site = &cb_emlrtRSI;
      e_st.site = &db_emlrtRSI;
      d_st.site = &cb_emlrtRSI;
      e_st.site = &db_emlrtRSI;
      c_st.site = &cb_emlrtRSI;
      d_st.site = &cb_emlrtRSI;
      d_st.site = &cb_emlrtRSI;
      d_st.site = &cb_emlrtRSI;
      e_st.site = &db_emlrtRSI;
      c_st.site = &cb_emlrtRSI;
      d_st.site = &cb_emlrtRSI;
      for (j = 0; j < 8; j++) {
        c_obj->inputVarSize1[j] = (uint32_T)b_value[j];
      }

      e_st.site = &db_emlrtRSI;
      c_st.site = &cb_emlrtRSI;
      d_st.site = &cb_emlrtRSI;
      c_st.site = &cb_emlrtRSI;
      d_st.site = &cb_emlrtRSI;
      e_st.site = &cb_emlrtRSI;
      e_st.site = &cb_emlrtRSI;
      f_st.site = &nl_emlrtRSI;
      c_st.site = &cb_emlrtRSI;
      d_st.site = &cb_emlrtRSI;
      d_st.site = &cb_emlrtRSI;
      e_st.site = &nl_emlrtRSI;
      c_st.site = &cb_emlrtRSI;
      c_st.site = &cb_emlrtRSI;
      c_st.site = &cb_emlrtRSI;
      c_st.site = &cb_emlrtRSI;
      d_st.site = &nl_emlrtRSI;
      d_st.site = &nl_emlrtRSI;
      e_st.site = &db_emlrtRSI;
      c_st.site = &cb_emlrtRSI;
      d_st.site = &nl_emlrtRSI;
      e_st.site = NULL;
    }

    b_st.site = &cb_emlrtRSI;
    b_st.site = &cb_emlrtRSI;
    b_st.site = &cb_emlrtRSI;
    c_st.site = &cb_emlrtRSI;
    c_st.site = &cb_emlrtRSI;
    d_st.site = &nl_emlrtRSI;
    b_st.site = &cb_emlrtRSI;
    b_st.site = &cb_emlrtRSI;
    anyInputSizeChanged = FALSE;
    match_idx = 0;
    exitg1 = FALSE;
    while ((exitg1 == FALSE) && (match_idx < 8)) {
      if (c_obj->inputVarSize1[match_idx] != (uint32_T)iv107[match_idx]) {
        anyInputSizeChanged = TRUE;
        c_st.site = &cb_emlrtRSI;
        for (j = 0; j < 8; j++) {
          c_obj->inputVarSize1[j] = (uint32_T)inputSize[j];
        }

        d_st.site = &db_emlrtRSI;
        exitg1 = TRUE;
      } else {
        match_idx++;
      }
    }

    if (anyInputSizeChanged) {
      b_st.site = &cb_emlrtRSI;
      b_st.site = &cb_emlrtRSI;
    }

    b_st.site = &cb_emlrtRSI;
    c_st.site = &cb_emlrtRSI;
    c_st.site = &cb_emlrtRSI;
    d_st.site = &nl_emlrtRSI;
    b_st.site = &cb_emlrtRSI;
    b_st.site = &cb_emlrtRSI;
    b_st.site = &cb_emlrtRSI;
    c_st.site = &fg_emlrtRSI;
    d_st.site = &cb_emlrtRSI;
    d_st.site = &cb_emlrtRSI;
    e_st.site = &nl_emlrtRSI;
    c_st.site = &fg_emlrtRSI;
    d_st.site = &cb_emlrtRSI;
    d_st.site = &cb_emlrtRSI;
    e_st.site = &nl_emlrtRSI;
    c_st.site = &fg_emlrtRSI;
    c_st.site = &fg_emlrtRSI;
    d_st.site = &cb_emlrtRSI;
    d_st.site = &cb_emlrtRSI;
    e_st.site = &nl_emlrtRSI;
    c_st.site = &fg_emlrtRSI;
    c_st.site = &fg_emlrtRSI;
    d_st.site = &nl_emlrtRSI;
    d_obj = &c_obj->cSFunObject;
    e_st.site = NULL;

    /* System object Outputs function: comm.CRCDetector */
    match_idx = div_ssu32_floor(&e_st, 563, 3U);

    /* Initialize for current sub-frame */
    shReg = 0U;
    bitNumber = 0;
    for (i = 0; (uint32_T)i < (uint32_T)match_idx; i++) {
      input = 0U;
      bitMask = 4U;
      for (j = 0; j < 3; j++) {
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
    c_st.site = &fg_emlrtRSI;
    d_st.site = &nl_emlrtRSI;
    e_st.site = NULL;
    if (leftoverBits == 0U) {
      b_leftoverBits = FALSE;
    } else {
      b_leftoverBits = TRUE;
    }

    if (!b_leftoverBits) {
      /*  Convert Bits to characters */
      st.site = &lm_emlrtRSI;
      varargout_1_size[0] = 560;
      varargout_1_size[1] = 1;
      for (j = 0; j < 560; j++) {
        b_varargout_1_data[j] = ((int32_T)varargout_1_data[j] > 0);
      }

      b_st.site = &lm_emlrtRSI;
      OFDMbits2letters(&b_st, b_varargout_1_data, varargout_1_size, c_tmp_data,
                       Phat_size);
      messageEnd_size[0] = 1;
      messageEnd_size[1] = Phat_size[0];
      match_idx = Phat_size[0];
      for (j = 0; j < match_idx; j++) {
        messageEnd_data[j] = c_tmp_data[j];
      }

      for (j = 0; j < 2; j++) {
        iv108[j] = (int8_T)messageEnd_size[j];
      }

      match_idx = iv108[1];
      for (j = 0; j < match_idx; j++) {
        d3 = muDoubleScalarFloor(messageEnd_data[j]);
        if (muDoubleScalarIsNaN(d3) || muDoubleScalarIsInf(d3)) {
          d3 = 0.0;
        } else {
          d3 = muDoubleScalarRem(d3, 256.0);
        }

        if (d3 < 0.0) {
          message_data[j] = (int8_T)-(int8_T)(uint8_T)-d3;
        } else {
          message_data[j] = (int8_T)(uint8_T)d3;
        }
      }

      /* messageBits(recMessage,1:end-3) */
      /* Remove padding */
      st.site = &km_emlrtRSI;
      if (iv108[1] == 0) {
        messageEnd_size[1] = 0;
      } else {
        b_st.site = &ou_emlrtRSI;
        match_idx = 0;
        c_st.site = &pu_emlrtRSI;
        d_st.site = &ag_emlrtRSI;
        for (i = 1; i <= iv108[1] - 2; i++) {
          j = 1;
          while ((j <= 3) && (message_data[(i + j) - 2] == cv116[j - 1])) {
            j++;
          }

          if (j > 3) {
            matches_data[match_idx] = (int8_T)i;
            match_idx++;
          }
        }

        c_st.site = &qu_emlrtRSI;
        d_st.site = &ru_emlrtRSI;
        e_st.site = &ag_emlrtRSI;
        if (1 > match_idx) {
          b3 = FALSE;
        } else {
          b3 = (match_idx > 2147483646);
        }

        if (b3) {
          e_st.site = &bg_emlrtRSI;
          check_forloop_overflow_error(&e_st);
        }

        for (i = 0; i + 1 <= match_idx; i++) {
          match_out_data[i] = matches_data[i];
        }

        messageEnd_size[1] = match_idx;
        for (j = 0; j < match_idx; j++) {
          messageEnd_data[j] = match_out_data[j];
        }
      }

      if (!(messageEnd_size[1] == 0)) {
        if (1.0 > messageEnd_data[0] - 1.0) {
          match_idx = 0;
        } else {
          j = iv108[1];
          emlrtDynamicBoundsCheckFastR2012b(1, 1, j, &v_emlrtBCI, sp);
          j = iv108[1];
          bitNumber = (int32_T)messageEnd_data[0] - 1;
          match_idx = emlrtDynamicBoundsCheckFastR2012b(bitNumber, 1, j,
            &v_emlrtBCI, sp);
        }

        emlrtDimSizeGeqCheckFastR2012b(80, match_idx, &k_emlrtECI, sp);
        recoveredMessage_size[0] = 1;
        recoveredMessage_size[1] = match_idx;
        for (j = 0; j < match_idx; j++) {
          recoveredMessage_data[j] = message_data[j];
        }
      }
    } else {
      /* recoveredMessage = char(OFDMbits2letters(msg > 0).');%messageBits(recMessage,1:end-3) */
      /* fprintf('Corrupted Message: %s\n',recoveredMessage); */
      emlrtDimSizeGeqCheckFastR2012b(80, 9, &j_emlrtECI, sp);
      recoveredMessage_size[0] = 1;
      recoveredMessage_size[1] = 9;
      for (j = 0; j < 9; j++) {
        recoveredMessage_data[j] = cv117[j];
      }
    }

    match_idx = 1;
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (PHYReceive.c) */
