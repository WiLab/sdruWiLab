/*
 * PHYReceive.c
 *
 * Code generation for function 'PHYReceive'
 *
 * C source code generated on: Thu Mar  6 19:04:24 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testMACTransmitter.h"
#include "PHYReceive.h"
#include "abs.h"
#include "power.h"
#include "rdivide.h"
#include "sum.h"
#include "angle.h"
#include "AGC.h"
#include "testMACTransmitter_emxutil.h"
#include "SDRuReceiver.h"
#include "equalizeOFDM.h"
#include "eml_int_forloop_overflow_check.h"
#include "OFDMbits2letters.h"
#include "coarseOFDMFreqEst_sdr.h"
#include "locateOFDMFrame_sdr.h"
#include "xcorr.h"
#include "closeDataConnection.h"
#include "testMACTransmitter_mexutil.h"
#include "testMACTransmitter_data.h"
#include <stdio.h>

/* Variable Definitions */
static emlrtRSInfo ql_emlrtRSI = { 1, "CRCDetector",
  "/Applications/MATLAB_R2013b.app/toolbox/comm/comm/+commcodegen/CRCDetector.p"
};

static emlrtRSInfo ao_emlrtRSI = { 99, "PHYReceive",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/PHYReceive.m" };

static emlrtRSInfo bo_emlrtRSI = { 97, "PHYReceive",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/PHYReceive.m" };

static emlrtRSInfo co_emlrtRSI = { 93, "PHYReceive",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/PHYReceive.m" };

static emlrtRSInfo do_emlrtRSI = { 70, "PHYReceive",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/PHYReceive.m" };

static emlrtRSInfo eo_emlrtRSI = { 67, "PHYReceive",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/PHYReceive.m" };

static emlrtRSInfo fo_emlrtRSI = { 64, "PHYReceive",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/PHYReceive.m" };

static emlrtRSInfo go_emlrtRSI = { 47, "PHYReceive",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/PHYReceive.m" };

static emlrtRSInfo ho_emlrtRSI = { 41, "PHYReceive",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/PHYReceive.m" };

static emlrtRSInfo io_emlrtRSI = { 34, "PHYReceive",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/PHYReceive.m" };

static emlrtRSInfo jo_emlrtRSI = { 33, "PHYReceive",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/PHYReceive.m" };

static emlrtRSInfo ko_emlrtRSI = { 179, "AGC",
  "/Applications/MATLAB_R2013b.app/toolbox/comm/comm/+comm/AGC.m" };

static emlrtRSInfo lo_emlrtRSI = { 180, "AGC",
  "/Applications/MATLAB_R2013b.app/toolbox/comm/comm/+comm/AGC.m" };

static emlrtRSInfo mo_emlrtRSI = { 183, "AGC",
  "/Applications/MATLAB_R2013b.app/toolbox/comm/comm/+comm/AGC.m" };

static emlrtRSInfo no_emlrtRSI = { 189, "AGC",
  "/Applications/MATLAB_R2013b.app/toolbox/comm/comm/+comm/AGC.m" };

static emlrtRSInfo oo_emlrtRSI = { 190, "AGC",
  "/Applications/MATLAB_R2013b.app/toolbox/comm/comm/+comm/AGC.m" };

static emlrtRSInfo po_emlrtRSI = { 194, "AGC",
  "/Applications/MATLAB_R2013b.app/toolbox/comm/comm/+comm/AGC.m" };

static emlrtRSInfo qo_emlrtRSI = { 195, "AGC",
  "/Applications/MATLAB_R2013b.app/toolbox/comm/comm/+comm/AGC.m" };

static emlrtRSInfo so_emlrtRSI = { 262, "AGC",
  "/Applications/MATLAB_R2013b.app/toolbox/comm/comm/+comm/AGC.m" };

static emlrtRSInfo dp_emlrtRSI = { 28, "locateOFDMFrame_sdr",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/private/locateOFDMFrame_sdr.m"
};

static emlrtRSInfo ep_emlrtRSI = { 24, "locateOFDMFrame_sdr",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/private/locateOFDMFrame_sdr.m"
};

static emlrtRSInfo fp_emlrtRSI = { 17, "locateOFDMFrame_sdr",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/private/locateOFDMFrame_sdr.m"
};

static emlrtRSInfo gp_emlrtRSI = { 16, "locateOFDMFrame_sdr",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/private/locateOFDMFrame_sdr.m"
};

static emlrtRSInfo fs_emlrtRSI = { 17, "coarseOFDMFreqEst_sdr",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/private/coarseOFDMFreqEst_sdr.m"
};

static emlrtRSInfo gs_emlrtRSI = { 10, "coarseOFDMFreqEst_sdr",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/private/coarseOFDMFreqEst_sdr.m"
};

static emlrtRSInfo hs_emlrtRSI = { 7, "coarseOFDMFreqEst_sdr",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/private/coarseOFDMFreqEst_sdr.m"
};

static emlrtRSInfo is_emlrtRSI = { 6, "coarseOFDMFreqEst_sdr",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/private/coarseOFDMFreqEst_sdr.m"
};

static emlrtRSInfo ev_emlrtRSI = { 7, "demodOFDMSubcarriers_sdr",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/private/demodOFDMSubcarriers_sdr.m"
};

static emlrtRSInfo nv_emlrtRSI = { 44, "strfind",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/strfun/strfind.m" };

static emlrtRSInfo ov_emlrtRSI = { 63, "strfind",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/strfun/strfind.m" };

static emlrtRSInfo pv_emlrtRSI = { 76, "strfind",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/strfun/strfind.m" };

static emlrtRSInfo qv_emlrtRSI = { 85, "strfind",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/strfun/strfind.m" };

static emlrtRTEInfo db_emlrtRTEI = { 1, 31, "PHYReceive",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/PHYReceive.m" };

static emlrtECInfo e_emlrtECI = { 2, 108, 9, "PHYReceive",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/PHYReceive.m" };

static emlrtECInfo f_emlrtECI = { 2, 101, 13, "PHYReceive",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/PHYReceive.m" };

static emlrtECInfo g_emlrtECI = { 2, 82, 9, "PHYReceive",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/PHYReceive.m" };

static emlrtECInfo h_emlrtECI = { 2, 26, 1, "PHYReceive",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/PHYReceive.m" };

static emlrtBCInfo p_emlrtBCI = { -1, -1, 101, 32, "message", "PHYReceive",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/PHYReceive.m", 0 };

static emlrtECInfo i_emlrtECI = { -1, 73, 9, "PHYReceive",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/PHYReceive.m" };

static emlrtRTEInfo ec_emlrtRTEI = { 61, 25, "PHYReceive",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/PHYReceive.m" };

static emlrtECInfo j_emlrtECI = { -1, 21, 13, "locateOFDMFrame_sdr",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/private/locateOFDMFrame_sdr.m"
};

static emlrtECInfo k_emlrtECI = { -1, 20, 13, "locateOFDMFrame_sdr",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/private/locateOFDMFrame_sdr.m"
};

static emlrtECInfo l_emlrtECI = { -1, 6, 33, "coarseOFDMFreqEst_sdr",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/private/coarseOFDMFreqEst_sdr.m"
};

static emlrtECInfo m_emlrtECI = { -1, 6, 15, "coarseOFDMFreqEst_sdr",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/private/coarseOFDMFreqEst_sdr.m"
};

static emlrtBCInfo q_emlrtBCI = { 1, 5120, 61, 18, "buffer", "PHYReceive",
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

void PHYReceive(testMACTransmitterStackData *SD, const emlrtStack *sp, comm_AGC *
                ObjAGC, comm_SDRuReceiver *ObjSDRuReceiver,
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
  static const int32_T iv163[2] = { 1, 45 };

  const mxArray *m30;
  char_T cv193[45];
  int32_T i;
  static const char_T cv194[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C',
    'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv164[2] = { 1, 4 };

  char_T cv195[4];
  static const char_T cv196[4] = { 's', 't', 'e', 'p' };

  const mxArray *c_y;
  static const int32_T iv165[2] = { 1, 51 };

  char_T cv197[51];
  static const char_T cv198[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l',
    'e', 'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *d_y;
  static const int32_T iv166[2] = { 1, 5 };

  char_T cv199[5];
  static const char_T cv200[5] = { 's', 'e', 't', 'u', 'p' };

  int32_T errMsg_size[2];
  char_T errMsg_data[1024];
  UsrpErrorCapiEnumT deviceStatus;
  const mxArray *e_y;
  static const int32_T iv167[2] = { 1, 35 };

  char_T cv201[35];
  static const char_T cv202[35] = { 's', 'd', 'r', 'u', ':', 'r', 'e', 'p', 'o',
    'r', 't', 'S', 'D', 'R', 'u', 'S', 't', 'a', 't', 'u', 's', ':', 'N', 'o',
    't', 'C', 'o', 'm', 'p', 'a', 't', 'i', 'b', 'l', 'e' };

  const mxArray *f_y;
  static const int32_T iv168[2] = { 1, 12 };

  char_T cv203[12];
  static const char_T cv204[12] = { '1', '9', '2', '.', '1', '6', '8', '.', '1',
    '0', '.', '2' };

  const mxArray *g_y;
  static const int32_T iv169[2] = { 1, 43 };

  char_T cv205[43];
  static const char_T cv206[43] = { 'r', 'e', 't', 'u', 'r', 'n', 'e', 'd', ' ',
    'b', 'y', ' ', '\'', 'g', 'e', 't', 'S', 'D', 'R', 'u', 'D', 'r', 'i', 'v',
    'e', 'r', 'V', 'e', 'r', 's', 'i', 'o', 'n', '\'', ' ', 'f', 'u', 'n', 'c',
    't', 'i', 'o', 'n' };

  const mxArray *h_y;
  static const int32_T iv170[2] = { 1, 35 };

  static const char_T cv207[35] = { 's', 'd', 'r', 'u', ':', 'r', 'e', 'p', 'o',
    'r', 't', 'S', 'D', 'R', 'u', 'S', 't', 'a', 't', 'u', 's', ':', 'N', 'o',
    't', 'R', 'e', 's', 'p', 'o', 'n', 'd', 'i', 'n', 'g' };

  const mxArray *i_y;
  static const int32_T iv171[2] = { 1, 12 };

  const mxArray *j_y;
  static const int32_T iv172[2] = { 1, 28 };

  char_T cv208[28];
  static const char_T cv209[28] = { 's', 'd', 'r', 'u', ':', 'r', 'e', 'p', 'o',
    'r', 't', 'S', 'D', 'R', 'u', 'S', 't', 'a', 't', 'u', 's', ':', 'R', 'x',
    'B', 'u', 's', 'y' };

  const mxArray *k_y;
  static const int32_T iv173[2] = { 1, 12 };

  const mxArray *l_y;
  static const int32_T iv174[2] = { 1, 28 };

  static const char_T cv210[28] = { 's', 'd', 'r', 'u', ':', 'r', 'e', 'p', 'o',
    'r', 't', 'S', 'D', 'R', 'u', 'S', 't', 'a', 't', 'u', 's', ':', 'T', 'x',
    'B', 'u', 's', 'y' };

  const mxArray *m_y;
  static const int32_T iv175[2] = { 1, 12 };

  const mxArray *n_y;
  static const int32_T iv176[2] = { 1, 26 };

  char_T cv211[26];
  static const char_T cv212[26] = { 's', 'd', 'r', 'u', ':', 'r', 'e', 'p', 'o',
    'r', 't', 'S', 'D', 'R', 'u', 'S', 't', 'a', 't', 'u', 's', ':', 'B', 'u',
    's', 'y' };

  const mxArray *o_y;
  static const int32_T iv177[2] = { 1, 12 };

  const mxArray *p_y;
  static const int32_T iv178[2] = { 1, 35 };

  static const char_T cv213[35] = { 's', 'd', 'r', 'u', ':', 'r', 'e', 'p', 'o',
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
  static const int32_T iv179[2] = { 1, 45 };

  const mxArray *s_y;
  static const int32_T iv180[2] = { 1, 4 };

  const mxArray *t_y;
  static const int32_T iv181[2] = { 1, 51 };

  const mxArray *u_y;
  static const int32_T iv182[2] = { 1, 5 };

  static const int16_T value[8] = { 5120, 1, 1, 1, 1, 1, 1, 1 };

  boolean_T anyInputSizeChanged;
  boolean_T exitg3;
  static const int16_T iv183[8] = { 5120, 1, 1, 1, 1, 1, 1, 1 };

  int32_T rWin_size[1];
  creal_T rx_shortPreambleOFDM_data[16];
  int32_T Phat_size[1];
  real_T tmp_data[1231];
  int32_T tmp_size[1];
  int32_T b_Phat_size[1];
  int32_T b_tmp_size[1];
  int32_T Rhat_size[1];
  real_T Rhat_data[1224];
  real_T M_data[1224];
  real_T d3;
  real_T d4;
  int32_T bitNumber;
  creal_T rFrame_data[32];
  creal_T RPostEqualizer[576];
  creal_T RLinear[576];
  int32_T RHard_size[1];
  boolean_T RHard_data[563];
  int8_T b_RHard_data[563];
  static const char_T cv214[7] = { 'T', 'i', 'm', 'e', 'o', 'u', 't' };

  commcodegen_CRCDetector *c_obj;
  const mxArray *v_y;
  static const int32_T iv184[2] = { 1, 45 };

  const mxArray *w_y;
  static const int32_T iv185[2] = { 1, 4 };

  const mxArray *x_y;
  static const int32_T iv186[2] = { 1, 51 };

  const mxArray *y_y;
  static const int32_T iv187[2] = { 1, 5 };

  static const int16_T b_value[8] = { 563, 1, 1, 1, 1, 1, 1, 1 };

  boolean_T exitg1;
  static const int16_T iv188[8] = { 563, 1, 1, 1, 1, 1, 1, 1 };

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
  real_T b_tmp_data[80];
  int32_T messageEnd_size[2];
  real_T messageEnd_data[80];
  int8_T iv189[2];
  char_T message_data[80];
  int8_T matches_data[80];
  static const char_T cv215[3] = { 'E', 'O', 'F' };

  int8_T match_out_data[80];
  boolean_T b3;
  static const char_T cv216[9] = { 'C', 'R', 'C', ' ', 'E', 'r', 'r', 'o', 'r' };

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
  emlrtDimSizeGeqCheckFastR2012b(80, 0, &h_emlrtECI, sp);
  recoveredMessage_size[0] = 1;
  recoveredMessage_size[1] = 0;

  /* % Process received data */
  /*  Locate frames in buffer and compensate for channel affects */
  emxInit_creal_T(sp, &unusedU0, 3, &db_emlrtRTEI, TRUE);
  exitg2 = FALSE;
  while ((exitg2 == FALSE) && (estimate->numProcessed < 1.0)) {
    /*  Get data from USRP */
    st.site = &jo_emlrtRSI;
    obj = ObjSDRuReceiver;
    if (!obj->isReleased) {
    } else {
      y = NULL;
      m30 = mxCreateCharArray(2, iv163);
      for (i = 0; i < 45; i++) {
        cv193[i] = cv194[i];
      }

      emlrtInitCharArrayR2013a(&st, 45, m30, cv193);
      emlrtAssign(&y, m30);
      b_y = NULL;
      m30 = mxCreateCharArray(2, iv164);
      for (i = 0; i < 4; i++) {
        cv195[i] = cv196[i];
      }

      emlrtInitCharArrayR2013a(&st, 4, m30, cv195);
      emlrtAssign(&b_y, m30);
      b_st.site = &fb_emlrtRSI;
      c_error(&b_st, message(&b_st, y, b_y, &emlrtMCI), &emlrtMCI);
    }

    if (!obj->isInitialized) {
      b_st.site = &fb_emlrtRSI;
      if (!obj->isInitialized) {
      } else {
        c_y = NULL;
        m30 = mxCreateCharArray(2, iv165);
        for (i = 0; i < 51; i++) {
          cv197[i] = cv198[i];
        }

        emlrtInitCharArrayR2013a(&b_st, 51, m30, cv197);
        emlrtAssign(&c_y, m30);
        d_y = NULL;
        m30 = mxCreateCharArray(2, iv166);
        for (i = 0; i < 5; i++) {
          cv199[i] = cv200[i];
        }

        emlrtInitCharArrayR2013a(&b_st, 5, m30, cv199);
        emlrtAssign(&d_y, m30);
        c_st.site = &fb_emlrtRSI;
        c_error(&c_st, message(&c_st, c_y, d_y, &emlrtMCI), &emlrtMCI);
      }

      c_st.site = &fb_emlrtRSI;
      obj->isInitialized = TRUE;
      d_st.site = &gb_emlrtRSI;
      c_st.site = &fb_emlrtRSI;
      c_st.site = &fb_emlrtRSI;
      d_st.site = &fb_emlrtRSI;
      c_st.site = &fb_emlrtRSI;
      c_st.site = &fb_emlrtRSI;
      d_st.site = &fb_emlrtRSI;
      c_st.site = &fb_emlrtRSI;
      d_st.site = &fb_emlrtRSI;
      e_st.site = &fb_emlrtRSI;
      e_st.site = &fb_emlrtRSI;
      c_st.site = &fb_emlrtRSI;
      d_st.site = &fb_emlrtRSI;
      d_st.site = &fb_emlrtRSI;
      c_st.site = &fb_emlrtRSI;
      c_st.site = &fb_emlrtRSI;
      c_st.site = &fb_emlrtRSI;
      c_st.site = &fb_emlrtRSI;
      d_st.site = &vj_emlrtRSI;
      SDRuReceiver_setupImplLocal(&d_st, obj, &deviceStatus, errMsg_data,
        errMsg_size);
      if (deviceStatus == UsrpDriverSuccess) {
        d_st.site = &vj_emlrtRSI;
        e_st.site = &gb_emlrtRSI;
      } else {
        d_st.site = &vj_emlrtRSI;
        closeDataConnection(&d_st, obj->pDriverHandle);
        d_st.site = &vj_emlrtRSI;
        e_st.site = &gb_emlrtRSI;
      }

      d_st.site = &vj_emlrtRSI;

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
        e_st.site = &xm_emlrtRSI;
        if (!(deviceStatus == UsrpDriverNotCompatible)) {
        } else {
          e_y = NULL;
          m30 = mxCreateCharArray(2, iv167);
          for (i = 0; i < 35; i++) {
            cv201[i] = cv202[i];
          }

          emlrtInitCharArrayR2013a(&e_st, 35, m30, cv201);
          emlrtAssign(&e_y, m30);
          f_y = NULL;
          m30 = mxCreateCharArray(2, iv168);
          for (i = 0; i < 12; i++) {
            cv203[i] = cv204[i];
          }

          emlrtInitCharArrayR2013a(&e_st, 12, m30, cv203);
          emlrtAssign(&f_y, m30);
          g_y = NULL;
          m30 = mxCreateCharArray(2, iv169);
          for (i = 0; i < 43; i++) {
            cv205[i] = cv206[i];
          }

          emlrtInitCharArrayR2013a(&e_st, 43, m30, cv205);
          emlrtAssign(&g_y, m30);
          f_st.site = &bw_emlrtRSI;
          c_error(&f_st, c_message(&f_st, e_y, f_y, g_y, &g_emlrtMCI),
                  &g_emlrtMCI);
        }
        break;

       case UsrpDriverNotResponding:
        e_st.site = &vm_emlrtRSI;
        if (!(deviceStatus == UsrpDriverNotResponding)) {
        } else {
          h_y = NULL;
          m30 = mxCreateCharArray(2, iv170);
          for (i = 0; i < 35; i++) {
            cv201[i] = cv207[i];
          }

          emlrtInitCharArrayR2013a(&e_st, 35, m30, cv201);
          emlrtAssign(&h_y, m30);
          i_y = NULL;
          m30 = mxCreateCharArray(2, iv171);
          for (i = 0; i < 12; i++) {
            cv203[i] = cv204[i];
          }

          emlrtInitCharArrayR2013a(&e_st, 12, m30, cv203);
          emlrtAssign(&i_y, m30);
          f_st.site = &bw_emlrtRSI;
          c_error(&f_st, message(&f_st, h_y, i_y, &g_emlrtMCI), &g_emlrtMCI);
        }
        break;

       case UsrpDriverRxBusy:
        e_st.site = &tm_emlrtRSI;
        if (!(deviceStatus == UsrpDriverRxBusy)) {
        } else {
          j_y = NULL;
          m30 = mxCreateCharArray(2, iv172);
          for (i = 0; i < 28; i++) {
            cv208[i] = cv209[i];
          }

          emlrtInitCharArrayR2013a(&e_st, 28, m30, cv208);
          emlrtAssign(&j_y, m30);
          k_y = NULL;
          m30 = mxCreateCharArray(2, iv173);
          for (i = 0; i < 12; i++) {
            cv203[i] = cv204[i];
          }

          emlrtInitCharArrayR2013a(&e_st, 12, m30, cv203);
          emlrtAssign(&k_y, m30);
          f_st.site = &bw_emlrtRSI;
          c_error(&f_st, message(&f_st, j_y, k_y, &g_emlrtMCI), &g_emlrtMCI);
        }
        break;

       case UsrpDriverTxBusy:
        e_st.site = &rm_emlrtRSI;
        if (!(deviceStatus == UsrpDriverTxBusy)) {
        } else {
          l_y = NULL;
          m30 = mxCreateCharArray(2, iv174);
          for (i = 0; i < 28; i++) {
            cv208[i] = cv210[i];
          }

          emlrtInitCharArrayR2013a(&e_st, 28, m30, cv208);
          emlrtAssign(&l_y, m30);
          m_y = NULL;
          m30 = mxCreateCharArray(2, iv175);
          for (i = 0; i < 12; i++) {
            cv203[i] = cv204[i];
          }

          emlrtInitCharArrayR2013a(&e_st, 12, m30, cv203);
          emlrtAssign(&m_y, m30);
          f_st.site = &bw_emlrtRSI;
          c_error(&f_st, message(&f_st, l_y, m_y, &g_emlrtMCI), &g_emlrtMCI);
        }
        break;

       case UsrpDriverBusy:
        e_st.site = &pm_emlrtRSI;
        if (!(deviceStatus == UsrpDriverBusy)) {
        } else {
          n_y = NULL;
          m30 = mxCreateCharArray(2, iv176);
          for (i = 0; i < 26; i++) {
            cv211[i] = cv212[i];
          }

          emlrtInitCharArrayR2013a(&e_st, 26, m30, cv211);
          emlrtAssign(&n_y, m30);
          o_y = NULL;
          m30 = mxCreateCharArray(2, iv177);
          for (i = 0; i < 12; i++) {
            cv203[i] = cv204[i];
          }

          emlrtInitCharArrayR2013a(&e_st, 12, m30, cv203);
          emlrtAssign(&o_y, m30);
          f_st.site = &bw_emlrtRSI;
          c_error(&f_st, message(&f_st, n_y, o_y, &g_emlrtMCI), &g_emlrtMCI);
        }
        break;

       case UsrpDriverError:
        e_st.site = &nm_emlrtRSI;
        if (!(deviceStatus == UsrpDriverError)) {
        } else {
          p_y = NULL;
          m30 = mxCreateCharArray(2, iv178);
          for (i = 0; i < 35; i++) {
            cv201[i] = cv213[i];
          }

          emlrtInitCharArrayR2013a(&e_st, 35, m30, cv201);
          emlrtAssign(&p_y, m30);
          u_size[0] = 1;
          u_size[1] = errMsg_size[1];
          match_idx = errMsg_size[0] * errMsg_size[1];
          for (j = 0; j < match_idx; j++) {
            u_data[j] = errMsg_data[j];
          }

          q_y = NULL;
          m30 = mxCreateCharArray(2, u_size);
          emlrtInitCharArrayR2013a(&e_st, u_size[1], m30, (char_T *)&u_data);
          emlrtAssign(&q_y, m30);
          f_st.site = &bw_emlrtRSI;
          c_error(&f_st, message(&f_st, p_y, q_y, &g_emlrtMCI), &g_emlrtMCI);
        }
        break;
      }

      c_st.site = &fb_emlrtRSI;
      c_st.site = &fb_emlrtRSI;
      obj->TunablePropsChanged = FALSE;
      d_st.site = &gb_emlrtRSI;
    }

    b_st.site = &fb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
    if (obj->TunablePropsChanged) {
      c_st.site = &fb_emlrtRSI;
      c_st.site = &fb_emlrtRSI;
      obj->TunablePropsChanged = FALSE;
      d_st.site = &gb_emlrtRSI;
      c_st.site = &fb_emlrtRSI;
      c_st.site = &fb_emlrtRSI;
      d_st.site = &gb_emlrtRSI;
      for (j = 0; j < 4; j++) {
        obj->tunablePropertyChanged[j] = FALSE;
      }

      e_st.site = &gb_emlrtRSI;
    }

    b_st.site = &fb_emlrtRSI;
    c_st.site = &fb_emlrtRSI;
    c_st.site = &fb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
    c_st.site = &fb_emlrtRSI;
    c_st.site = &fb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
    b_SDRuReceiver_stepImpl(SD, &b_st, obj, SD->f13.buffer);
    st.site = &io_emlrtRSI;
    P = SD->f13.buffer[0];
    for (match_idx = 0; match_idx < 5119; match_idx++) {
      P.re += SD->f13.buffer[match_idx + 1].re;
      P.im += SD->f13.buffer[match_idx + 1].im;
    }

    guard1 = FALSE;
    if ((P.re == 0.0) && (P.im == 0.0)) {
      /*  All zeros from radio (Bug?) */
      guard1 = TRUE;
    } else {
      /*  Automatic Gain Control */
      st.site = &ho_emlrtRSI;
      b_obj = ObjAGC;
      if (!b_obj->isReleased) {
      } else {
        r_y = NULL;
        m30 = mxCreateCharArray(2, iv179);
        for (i = 0; i < 45; i++) {
          cv193[i] = cv194[i];
        }

        emlrtInitCharArrayR2013a(&st, 45, m30, cv193);
        emlrtAssign(&r_y, m30);
        s_y = NULL;
        m30 = mxCreateCharArray(2, iv180);
        for (i = 0; i < 4; i++) {
          cv195[i] = cv196[i];
        }

        emlrtInitCharArrayR2013a(&st, 4, m30, cv195);
        emlrtAssign(&s_y, m30);
        b_st.site = &fb_emlrtRSI;
        c_error(&b_st, message(&b_st, r_y, s_y, &emlrtMCI), &emlrtMCI);
      }

      if (!b_obj->isInitialized) {
        b_st.site = &fb_emlrtRSI;
        if (!b_obj->isInitialized) {
        } else {
          t_y = NULL;
          m30 = mxCreateCharArray(2, iv181);
          for (i = 0; i < 51; i++) {
            cv197[i] = cv198[i];
          }

          emlrtInitCharArrayR2013a(&b_st, 51, m30, cv197);
          emlrtAssign(&t_y, m30);
          u_y = NULL;
          m30 = mxCreateCharArray(2, iv182);
          for (i = 0; i < 5; i++) {
            cv199[i] = cv200[i];
          }

          emlrtInitCharArrayR2013a(&b_st, 5, m30, cv199);
          emlrtAssign(&u_y, m30);
          c_st.site = &fb_emlrtRSI;
          c_error(&c_st, message(&c_st, t_y, u_y, &emlrtMCI), &emlrtMCI);
        }

        c_st.site = &fb_emlrtRSI;
        b_obj->isInitialized = TRUE;
        d_st.site = &gb_emlrtRSI;
        c_st.site = &fb_emlrtRSI;
        d_st.site = &fb_emlrtRSI;
        e_st.site = &gb_emlrtRSI;
        d_st.site = &fb_emlrtRSI;
        e_st.site = &gb_emlrtRSI;
        c_st.site = &fb_emlrtRSI;
        d_st.site = &fb_emlrtRSI;
        d_st.site = &fb_emlrtRSI;
        d_st.site = &fb_emlrtRSI;
        e_st.site = &gb_emlrtRSI;
        c_st.site = &fb_emlrtRSI;
        d_st.site = &fb_emlrtRSI;
        for (j = 0; j < 8; j++) {
          b_obj->inputVarSize1[j] = (uint32_T)value[j];
        }

        e_st.site = &gb_emlrtRSI;
        c_st.site = &fb_emlrtRSI;
        d_st.site = &fb_emlrtRSI;
        c_st.site = &fb_emlrtRSI;
        d_st.site = &fb_emlrtRSI;
        e_st.site = &fb_emlrtRSI;
        e_st.site = &fb_emlrtRSI;
        c_st.site = &fb_emlrtRSI;
        d_st.site = &fb_emlrtRSI;
        d_st.site = &fb_emlrtRSI;
        c_st.site = &fb_emlrtRSI;
        c_st.site = &fb_emlrtRSI;
        c_st.site = &fb_emlrtRSI;
        c_st.site = &fb_emlrtRSI;
        d_st.site = &ko_emlrtRSI;
        e_st.site = &gb_emlrtRSI;
        d_st.site = &lo_emlrtRSI;
        b_obj->Gain = 1.0;
        e_st.site = &gb_emlrtRSI;
        d_st.site = &mo_emlrtRSI;
        e_st.site = &gb_emlrtRSI;
        d_st.site = &no_emlrtRSI;
        e_st.site = &gb_emlrtRSI;
        d_st.site = &oo_emlrtRSI;
        e_st.site = &gb_emlrtRSI;
        d_st.site = &po_emlrtRSI;
        e_st.site = &gb_emlrtRSI;
        d_st.site = &qo_emlrtRSI;
        e_st.site = &gb_emlrtRSI;
        c_st.site = &fb_emlrtRSI;
        d_st.site = &so_emlrtRSI;
        b_obj->Gain = 1.0;
        e_st.site = &gb_emlrtRSI;
      }

      b_st.site = &fb_emlrtRSI;
      b_st.site = &fb_emlrtRSI;
      b_st.site = &fb_emlrtRSI;
      c_st.site = &fb_emlrtRSI;
      c_st.site = &fb_emlrtRSI;
      b_st.site = &fb_emlrtRSI;
      b_st.site = &fb_emlrtRSI;
      anyInputSizeChanged = FALSE;
      match_idx = 0;
      exitg3 = FALSE;
      while ((exitg3 == FALSE) && (match_idx < 8)) {
        if (b_obj->inputVarSize1[match_idx] != (uint32_T)iv183[match_idx]) {
          anyInputSizeChanged = TRUE;
          c_st.site = &fb_emlrtRSI;
          for (j = 0; j < 8; j++) {
            b_obj->inputVarSize1[j] = (uint32_T)value[j];
          }

          d_st.site = &gb_emlrtRSI;
          exitg3 = TRUE;
        } else {
          match_idx++;
        }
      }

      if (anyInputSizeChanged) {
        b_st.site = &fb_emlrtRSI;
        b_st.site = &fb_emlrtRSI;
      }

      b_st.site = &fb_emlrtRSI;
      c_st.site = &fb_emlrtRSI;
      c_st.site = &fb_emlrtRSI;
      b_st.site = &fb_emlrtRSI;
      b_st.site = &fb_emlrtRSI;
      memcpy(&SD->f13.b_buffer[0], &SD->f13.buffer[0], 5120U * sizeof(creal_T));
      b_st.site = &fb_emlrtRSI;
      AGC_stepImpl(SD, b_obj, SD->f13.b_buffer, SD->f13.buffer);

      /*  Increment processed data index */
      numBuffersProcessed++;

      /*     %% Find preamble in buffer */
      st.site = &go_emlrtRSI;

      /*  locateOFDMFrame: Locate 802.11a based preamble from input data stream. */
      /*  It is assumed that the received signal is still in the time domain.  The */
      /*  location of the start of the preamble will be returned, if not found -1 */
      /*  is returned */
      /* % Timing Estimate */
      /*  Quarter of short preamble sequence */
      /*  Cross correlate */
      rWin_size[0] = 1231;
      memcpy(&SD->f13.rWin_data[0], &SD->f13.buffer[0], 1231U * sizeof(creal_T));
      for (j = 0; j < 16; j++) {
        rx_shortPreambleOFDM_data[j].re = rx_shortPreambleOFDM[j].re;
        rx_shortPreambleOFDM_data[j].im = -rx_shortPreambleOFDM[j].im;
      }

      b_st.site = &gp_emlrtRSI;
      xcorr(&b_st, SD->f13.rWin_data, rx_shortPreambleOFDM_data,
            SD->f13.Phat_data, Phat_size);
      b_st.site = &fp_emlrtRSI;
      c_abs(SD->f13.rWin_data, rWin_size, SD->f13.tmp_data, Phat_size);
      tmp_size[0] = Phat_size[0];
      match_idx = Phat_size[0];
      for (j = 0; j < match_idx; j++) {
        tmp_data[j] = SD->f13.tmp_data[j];
      }

      b_st.site = &fp_emlrtRSI;
      power(tmp_data, tmp_size, SD->f13.tmp_data, Phat_size);
      b_st.site = &fp_emlrtRSI;
      b_xcorr(&b_st, SD->f13.tmp_data, SD->f13.Rhat_data, Phat_size);

      /*  moving average */
      /*  Remove leading and tail zeros overlaps */
      emlrtVectorVectorIndexCheckR2012b(2461, 1, 1, 1224, &k_emlrtECI, &st);
      emlrtVectorVectorIndexCheckR2012b(2461, 1, 1, 1224, &j_emlrtECI, &st);

      /*  Calculate timing metric */
      b_Phat_size[0] = 1224;
      memcpy(&SD->f13.b_Phat_data[0], &SD->f13.Phat_data[1230], 1224U * sizeof
             (creal_T));
      b_st.site = &ep_emlrtRSI;
      c_abs(SD->f13.b_Phat_data, b_Phat_size, SD->f13.tmp_data, Phat_size);
      b_tmp_size[0] = Phat_size[0];
      match_idx = Phat_size[0];
      for (j = 0; j < match_idx; j++) {
        tmp_data[j] = SD->f13.tmp_data[j];
      }

      b_st.site = &ep_emlrtRSI;
      power(tmp_data, b_tmp_size, SD->f13.tmp_data, Phat_size);
      Rhat_size[0] = 1224;
      memcpy(&Rhat_data[0], &SD->f13.Rhat_data[1230], 1224U * sizeof(real_T));
      b_st.site = &ep_emlrtRSI;
      power(Rhat_data, Rhat_size, tmp_data, Phat_size);
      b_st.site = &ep_emlrtRSI;
      rdivide(SD->f13.tmp_data, tmp_data, M_data, Phat_size);

      /*  Determine start of short preamble */
      /*  peak threshold after normalization (TUNABLE) */
      b_st.site = &dp_emlrtRSI;
      locateShortpreamble(&b_st, M_data, &d4, &d3);
      estimate->delay = d4;
      estimate->numPeaks = d3;

      /*  Check if frame exists in correct location and whether it's duplicate */
      /*  %Check if full data frame exists in buffer */
      /*  %Check if preamble located */
      if ((d4 > -1.0) && (numBuffersProcessed - lastFound >= 2)) {
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
        if (d4 == d4) {
        } else {
          emlrtErrorWithMessageIdR2012b(sp, &ec_emlrtRTEI,
            "EMLRT:runTime:RepeatedExprWithDifferentResultsInColonIndexing", 0);
        }

        for (j = 0; j < 1280; j++) {
          d3 = d4 + (1.0 + (real_T)j);
          bitNumber = (int32_T)emlrtIntegerCheckFastR2012b(d3, &b_emlrtDCI, sp);
          SD->f13.rFrame_data[j].re = SD->
            f13.buffer[emlrtDynamicBoundsCheckFastR2012b(bitNumber, 1, 5120,
            &q_emlrtBCI, sp) - 1].re;
          d3 = d4 + (1.0 + (real_T)j);
          bitNumber = (int32_T)emlrtIntegerCheckFastR2012b(d3, &b_emlrtDCI, sp);
          SD->f13.rFrame_data[j].im = SD->
            f13.buffer[emlrtDynamicBoundsCheckFastR2012b(bitNumber, 1, 5120,
            &q_emlrtBCI, sp) - 1].im;
        }

        /*  Correct frequency offset */
        st.site = &fo_emlrtRSI;

        /*  coarseOFDMFreqEst: Frequency Correction based on the Schmidl and Cox */
        /*  method, utilizing halves of the short preamble from the 802.11a standard */
        emlrtVectorVectorIndexCheckR2012b(1280, 1, 1, 32, &m_emlrtECI, &st);
        emlrtVectorVectorIndexCheckR2012b(1280, 1, 1, 32, &l_emlrtECI, &st);
        for (j = 0; j < 32; j++) {
          rFrame_data[j].re = SD->f13.rFrame_data[j].re * SD->f13.rFrame_data[32
            + j].re - -SD->f13.rFrame_data[j].im * SD->f13.rFrame_data[32 + j].
            im;
          rFrame_data[j].im = SD->f13.rFrame_data[j].re * SD->f13.rFrame_data[32
            + j].im + -SD->f13.rFrame_data[j].im * SD->f13.rFrame_data[32 + j].
            re;
        }

        b_st.site = &is_emlrtRSI;
        P = sum(rFrame_data);

        /* Cross-correlate preamble */
        b_st.site = &hs_emlrtRSI;
        estimate->phi = angle(P);

        /*  Determine phase angle between preamble halves */
        /*  Buffer not full */
        b_st.site = &gs_emlrtRSI;
        c_st.site = &m_emlrtRSI;
        d_st.site = &n_emlrtRSI;
        estimate->frequency[0] = estimate->phi / 4.0212385965949353E-5;

        /*  Convert angle to frequency */
        /*  Apply frequency estimate */
        memcpy(&SD->f13.b_rFrame_data[0], &SD->f13.rFrame_data[0], 1280U *
               sizeof(creal_T));
        b_st.site = &fs_emlrtRSI;
        freqCorrectOFDM(&b_st, estimate, SD->f13.b_rFrame_data,
                        SD->f13.rFrame_data, Phat_size);

        /*  Equalize */
        SD->f13.estimate = *estimate;
        st.site = &eo_emlrtRSI;
        equalizeOFDM(SD, &st, SD->f13.rFrame_data, rx_longPreamble, rx_pilots,
                     c_rx_pilotLocationsWithoutGuard,
                     rx_dataSubcarrierIndexies_data,
                     rx_dataSubcarrierIndexies_size, &SD->f13.estimate,
                     ObjPreambleDemod, ObjDataDemod, RPostEqualizer, unusedU0,
                     estimate);

        /*  Demod subcarriers */
        st.site = &do_emlrtRSI;

        /*  demodOFDMSubcarriers: Hard demodulate then compare received and */
        /*  transmitted data */
        /*  Demodulate subcarrier data */
        b_st.site = &ev_emlrtRSI;
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

        emlrtSubAssignSizeCheckR2012b(errMsg_size, 2, RHard_size, 1, &i_emlrtECI,
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
        emlrtDimSizeGeqCheckFastR2012b(80, 7, &g_emlrtECI, sp);
        recoveredMessage_size[0] = 1;
        recoveredMessage_size[1] = 7;
        for (j = 0; j < 7; j++) {
          recoveredMessage_data[j] = cv214[j];
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
    st.site = &co_emlrtRSI;
    c_obj = ObjDetect;
    for (j = 0; j < 563; j++) {
      RHard_data[j] = (messageBits_data[messageBits_size[0] * j] > 0.0);
    }

    if (!c_obj->isReleased) {
    } else {
      v_y = NULL;
      m30 = mxCreateCharArray(2, iv184);
      for (i = 0; i < 45; i++) {
        cv193[i] = cv194[i];
      }

      emlrtInitCharArrayR2013a(&st, 45, m30, cv193);
      emlrtAssign(&v_y, m30);
      w_y = NULL;
      m30 = mxCreateCharArray(2, iv185);
      for (i = 0; i < 4; i++) {
        cv195[i] = cv196[i];
      }

      emlrtInitCharArrayR2013a(&st, 4, m30, cv195);
      emlrtAssign(&w_y, m30);
      b_st.site = &fb_emlrtRSI;
      c_error(&b_st, message(&b_st, v_y, w_y, &emlrtMCI), &emlrtMCI);
    }

    if (!c_obj->isInitialized) {
      b_st.site = &fb_emlrtRSI;
      if (!c_obj->isInitialized) {
      } else {
        x_y = NULL;
        m30 = mxCreateCharArray(2, iv186);
        for (i = 0; i < 51; i++) {
          cv197[i] = cv198[i];
        }

        emlrtInitCharArrayR2013a(&b_st, 51, m30, cv197);
        emlrtAssign(&x_y, m30);
        y_y = NULL;
        m30 = mxCreateCharArray(2, iv187);
        for (i = 0; i < 5; i++) {
          cv199[i] = cv200[i];
        }

        emlrtInitCharArrayR2013a(&b_st, 5, m30, cv199);
        emlrtAssign(&y_y, m30);
        c_st.site = &fb_emlrtRSI;
        c_error(&c_st, message(&c_st, x_y, y_y, &emlrtMCI), &emlrtMCI);
      }

      c_st.site = &fb_emlrtRSI;
      c_obj->isInitialized = TRUE;
      d_st.site = &gb_emlrtRSI;
      c_st.site = &fb_emlrtRSI;
      d_st.site = &fb_emlrtRSI;
      e_st.site = &gb_emlrtRSI;
      d_st.site = &fb_emlrtRSI;
      e_st.site = &gb_emlrtRSI;
      c_st.site = &fb_emlrtRSI;
      d_st.site = &fb_emlrtRSI;
      d_st.site = &fb_emlrtRSI;
      d_st.site = &fb_emlrtRSI;
      e_st.site = &gb_emlrtRSI;
      c_st.site = &fb_emlrtRSI;
      d_st.site = &fb_emlrtRSI;
      for (j = 0; j < 8; j++) {
        c_obj->inputVarSize1[j] = (uint32_T)b_value[j];
      }

      e_st.site = &gb_emlrtRSI;
      c_st.site = &fb_emlrtRSI;
      d_st.site = &fb_emlrtRSI;
      c_st.site = &fb_emlrtRSI;
      d_st.site = &fb_emlrtRSI;
      e_st.site = &fb_emlrtRSI;
      e_st.site = &fb_emlrtRSI;
      f_st.site = &ql_emlrtRSI;
      c_st.site = &fb_emlrtRSI;
      d_st.site = &fb_emlrtRSI;
      d_st.site = &fb_emlrtRSI;
      e_st.site = &ql_emlrtRSI;
      c_st.site = &fb_emlrtRSI;
      c_st.site = &fb_emlrtRSI;
      c_st.site = &fb_emlrtRSI;
      c_st.site = &fb_emlrtRSI;
      d_st.site = &ql_emlrtRSI;
      d_st.site = &ql_emlrtRSI;
      e_st.site = &gb_emlrtRSI;
      c_st.site = &fb_emlrtRSI;
      d_st.site = &ql_emlrtRSI;
      e_st.site = NULL;
    }

    b_st.site = &fb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
    c_st.site = &fb_emlrtRSI;
    c_st.site = &fb_emlrtRSI;
    d_st.site = &ql_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
    anyInputSizeChanged = FALSE;
    match_idx = 0;
    exitg1 = FALSE;
    while ((exitg1 == FALSE) && (match_idx < 8)) {
      if (c_obj->inputVarSize1[match_idx] != (uint32_T)iv188[match_idx]) {
        anyInputSizeChanged = TRUE;
        c_st.site = &fb_emlrtRSI;
        for (j = 0; j < 8; j++) {
          c_obj->inputVarSize1[j] = (uint32_T)inputSize[j];
        }

        d_st.site = &gb_emlrtRSI;
        exitg1 = TRUE;
      } else {
        match_idx++;
      }
    }

    if (anyInputSizeChanged) {
      b_st.site = &fb_emlrtRSI;
      b_st.site = &fb_emlrtRSI;
    }

    b_st.site = &fb_emlrtRSI;
    c_st.site = &fb_emlrtRSI;
    c_st.site = &fb_emlrtRSI;
    d_st.site = &ql_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
    c_st.site = &ig_emlrtRSI;
    d_st.site = &fb_emlrtRSI;
    d_st.site = &fb_emlrtRSI;
    e_st.site = &ql_emlrtRSI;
    c_st.site = &ig_emlrtRSI;
    d_st.site = &fb_emlrtRSI;
    d_st.site = &fb_emlrtRSI;
    e_st.site = &ql_emlrtRSI;
    c_st.site = &ig_emlrtRSI;
    c_st.site = &ig_emlrtRSI;
    d_st.site = &fb_emlrtRSI;
    d_st.site = &fb_emlrtRSI;
    e_st.site = &ql_emlrtRSI;
    c_st.site = &ig_emlrtRSI;
    c_st.site = &ig_emlrtRSI;
    d_st.site = &ql_emlrtRSI;
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
    c_st.site = &ig_emlrtRSI;
    d_st.site = &ql_emlrtRSI;
    e_st.site = NULL;
    if (leftoverBits == 0U) {
      b_leftoverBits = FALSE;
    } else {
      b_leftoverBits = TRUE;
    }

    if (!b_leftoverBits) {
      /*  Convert Bits to characters */
      st.site = &bo_emlrtRSI;
      varargout_1_size[0] = 560;
      varargout_1_size[1] = 1;
      for (j = 0; j < 560; j++) {
        b_varargout_1_data[j] = ((int32_T)varargout_1_data[j] > 0);
      }

      b_st.site = &bo_emlrtRSI;
      OFDMbits2letters(&b_st, b_varargout_1_data, varargout_1_size, b_tmp_data,
                       Phat_size);
      messageEnd_size[0] = 1;
      messageEnd_size[1] = Phat_size[0];
      match_idx = Phat_size[0];
      for (j = 0; j < match_idx; j++) {
        messageEnd_data[j] = b_tmp_data[j];
      }

      for (j = 0; j < 2; j++) {
        iv189[j] = (int8_T)messageEnd_size[j];
      }

      match_idx = iv189[1];
      for (j = 0; j < match_idx; j++) {
        d4 = muDoubleScalarFloor(messageEnd_data[j]);
        if (muDoubleScalarIsNaN(d4) || muDoubleScalarIsInf(d4)) {
          d4 = 0.0;
        } else {
          d4 = muDoubleScalarRem(d4, 256.0);
        }

        if (d4 < 0.0) {
          message_data[j] = (int8_T)-(int8_T)(uint8_T)-d4;
        } else {
          message_data[j] = (int8_T)(uint8_T)d4;
        }
      }

      /* messageBits(recMessage,1:end-3) */
      /* Remove padding */
      st.site = &ao_emlrtRSI;
      if (iv189[1] == 0) {
        messageEnd_size[1] = 0;
      } else {
        b_st.site = &nv_emlrtRSI;
        match_idx = 0;
        c_st.site = &ov_emlrtRSI;
        d_st.site = &dg_emlrtRSI;
        for (i = 1; i <= iv189[1] - 2; i++) {
          j = 1;
          while ((j <= 3) && (message_data[(i + j) - 2] == cv215[j - 1])) {
            j++;
          }

          if (j > 3) {
            matches_data[match_idx] = (int8_T)i;
            match_idx++;
          }
        }

        c_st.site = &pv_emlrtRSI;
        d_st.site = &qv_emlrtRSI;
        e_st.site = &dg_emlrtRSI;
        if (1 > match_idx) {
          b3 = FALSE;
        } else {
          b3 = (match_idx > 2147483646);
        }

        if (b3) {
          e_st.site = &eg_emlrtRSI;
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
          j = iv189[1];
          emlrtDynamicBoundsCheckFastR2012b(1, 1, j, &p_emlrtBCI, sp);
          j = iv189[1];
          bitNumber = (int32_T)messageEnd_data[0] - 1;
          match_idx = emlrtDynamicBoundsCheckFastR2012b(bitNumber, 1, j,
            &p_emlrtBCI, sp);
        }

        emlrtDimSizeGeqCheckFastR2012b(80, match_idx, &f_emlrtECI, sp);
        recoveredMessage_size[0] = 1;
        recoveredMessage_size[1] = match_idx;
        for (j = 0; j < match_idx; j++) {
          recoveredMessage_data[j] = message_data[j];
        }
      }
    } else {
      /* recoveredMessage = char(OFDMbits2letters(msg > 0).');%messageBits(recMessage,1:end-3) */
      /* fprintf('Corrupted Message: %s\n',recoveredMessage); */
      emlrtDimSizeGeqCheckFastR2012b(80, 9, &e_emlrtECI, sp);
      recoveredMessage_size[0] = 1;
      recoveredMessage_size[1] = 9;
      for (j = 0; j < 9; j++) {
        recoveredMessage_data[j] = cv216[j];
      }
    }

    match_idx = 1;
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (PHYReceive.c) */
