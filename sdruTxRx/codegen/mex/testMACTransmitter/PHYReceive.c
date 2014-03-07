/*
 * PHYReceive.c
 *
 * Code generation for function 'PHYReceive'
 *
 * C source code generated on: Thu Mar  6 22:22:40 2014
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
static emlrtRSInfo wl_emlrtRSI = { 1, "CRCDetector",
  "/Applications/MATLAB_R2013b.app/toolbox/comm/comm/+commcodegen/CRCDetector.p"
};

static emlrtRSInfo kn_emlrtRSI = { 179, "AGC",
  "/Applications/MATLAB_R2013b.app/toolbox/comm/comm/+comm/AGC.m" };

static emlrtRSInfo ln_emlrtRSI = { 180, "AGC",
  "/Applications/MATLAB_R2013b.app/toolbox/comm/comm/+comm/AGC.m" };

static emlrtRSInfo mn_emlrtRSI = { 183, "AGC",
  "/Applications/MATLAB_R2013b.app/toolbox/comm/comm/+comm/AGC.m" };

static emlrtRSInfo nn_emlrtRSI = { 189, "AGC",
  "/Applications/MATLAB_R2013b.app/toolbox/comm/comm/+comm/AGC.m" };

static emlrtRSInfo on_emlrtRSI = { 190, "AGC",
  "/Applications/MATLAB_R2013b.app/toolbox/comm/comm/+comm/AGC.m" };

static emlrtRSInfo pn_emlrtRSI = { 194, "AGC",
  "/Applications/MATLAB_R2013b.app/toolbox/comm/comm/+comm/AGC.m" };

static emlrtRSInfo qn_emlrtRSI = { 195, "AGC",
  "/Applications/MATLAB_R2013b.app/toolbox/comm/comm/+comm/AGC.m" };

static emlrtRSInfo sn_emlrtRSI = { 262, "AGC",
  "/Applications/MATLAB_R2013b.app/toolbox/comm/comm/+comm/AGC.m" };

static emlrtRSInfo iu_emlrtRSI = { 99, "PHYReceive",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/PHYReceive.m" };

static emlrtRSInfo ju_emlrtRSI = { 97, "PHYReceive",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/PHYReceive.m" };

static emlrtRSInfo ku_emlrtRSI = { 93, "PHYReceive",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/PHYReceive.m" };

static emlrtRSInfo lu_emlrtRSI = { 70, "PHYReceive",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/PHYReceive.m" };

static emlrtRSInfo mu_emlrtRSI = { 67, "PHYReceive",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/PHYReceive.m" };

static emlrtRSInfo nu_emlrtRSI = { 64, "PHYReceive",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/PHYReceive.m" };

static emlrtRSInfo ou_emlrtRSI = { 47, "PHYReceive",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/PHYReceive.m" };

static emlrtRSInfo pu_emlrtRSI = { 41, "PHYReceive",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/PHYReceive.m" };

static emlrtRSInfo qu_emlrtRSI = { 34, "PHYReceive",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/PHYReceive.m" };

static emlrtRSInfo ru_emlrtRSI = { 33, "PHYReceive",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/PHYReceive.m" };

static emlrtRSInfo su_emlrtRSI = { 28, "locateOFDMFrame_sdr",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/private/locateOFDMFrame_sdr.m"
};

static emlrtRSInfo tu_emlrtRSI = { 24, "locateOFDMFrame_sdr",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/private/locateOFDMFrame_sdr.m"
};

static emlrtRSInfo uu_emlrtRSI = { 17, "locateOFDMFrame_sdr",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/private/locateOFDMFrame_sdr.m"
};

static emlrtRSInfo vu_emlrtRSI = { 16, "locateOFDMFrame_sdr",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/private/locateOFDMFrame_sdr.m"
};

static emlrtRSInfo gx_emlrtRSI = { 17, "coarseOFDMFreqEst_sdr",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/private/coarseOFDMFreqEst_sdr.m"
};

static emlrtRSInfo hx_emlrtRSI = { 10, "coarseOFDMFreqEst_sdr",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/private/coarseOFDMFreqEst_sdr.m"
};

static emlrtRSInfo ix_emlrtRSI = { 7, "coarseOFDMFreqEst_sdr",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/private/coarseOFDMFreqEst_sdr.m"
};

static emlrtRSInfo jx_emlrtRSI = { 6, "coarseOFDMFreqEst_sdr",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/private/coarseOFDMFreqEst_sdr.m"
};

static emlrtRSInfo pab_emlrtRSI = { 7, "demodOFDMSubcarriers_sdr",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/private/demodOFDMSubcarriers_sdr.m"
};

static emlrtRSInfo yab_emlrtRSI = { 44, "strfind",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/strfun/strfind.m" };

static emlrtRSInfo abb_emlrtRSI = { 63, "strfind",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/strfun/strfind.m" };

static emlrtRSInfo bbb_emlrtRSI = { 76, "strfind",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/strfun/strfind.m" };

static emlrtRSInfo cbb_emlrtRSI = { 85, "strfind",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/strfun/strfind.m" };

static emlrtRTEInfo sb_emlrtRTEI = { 1, 31, "PHYReceive",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/PHYReceive.m" };

static emlrtECInfo n_emlrtECI = { 2, 108, 9, "PHYReceive",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/PHYReceive.m" };

static emlrtECInfo o_emlrtECI = { 2, 101, 13, "PHYReceive",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/PHYReceive.m" };

static emlrtECInfo p_emlrtECI = { 2, 82, 9, "PHYReceive",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/PHYReceive.m" };

static emlrtECInfo q_emlrtECI = { 2, 26, 1, "PHYReceive",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/PHYReceive.m" };

static emlrtBCInfo fb_emlrtBCI = { -1, -1, 101, 32, "message", "PHYReceive",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/PHYReceive.m", 0 };

static emlrtECInfo r_emlrtECI = { -1, 73, 9, "PHYReceive",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/PHYReceive.m" };

static emlrtRTEInfo wc_emlrtRTEI = { 61, 25, "PHYReceive",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/PHYReceive.m" };

static emlrtECInfo s_emlrtECI = { -1, 21, 13, "locateOFDMFrame_sdr",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/private/locateOFDMFrame_sdr.m"
};

static emlrtECInfo t_emlrtECI = { -1, 20, 13, "locateOFDMFrame_sdr",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/private/locateOFDMFrame_sdr.m"
};

static emlrtECInfo u_emlrtECI = { -1, 6, 33, "coarseOFDMFreqEst_sdr",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/private/coarseOFDMFreqEst_sdr.m"
};

static emlrtECInfo v_emlrtECI = { -1, 6, 15, "coarseOFDMFreqEst_sdr",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/private/coarseOFDMFreqEst_sdr.m"
};

static emlrtBCInfo gb_emlrtBCI = { 1, 5120, 61, 18, "buffer", "PHYReceive",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/PHYReceive.m", 0 };

static emlrtDCInfo n_emlrtDCI = { 61, 18, "PHYReceive",
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
  static const int32_T iv197[2] = { 1, 45 };

  const mxArray *m36;
  char_T cv238[45];
  int32_T i;
  static const char_T cv239[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C',
    'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv198[2] = { 1, 4 };

  char_T cv240[4];
  static const char_T cv241[4] = { 's', 't', 'e', 'p' };

  const mxArray *c_y;
  static const int32_T iv199[2] = { 1, 51 };

  char_T cv242[51];
  static const char_T cv243[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l',
    'e', 'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *d_y;
  static const int32_T iv200[2] = { 1, 5 };

  char_T cv244[5];
  static const char_T cv245[5] = { 's', 'e', 't', 'u', 'p' };

  int32_T errMsg_size[2];
  char_T errMsg_data[1024];
  UsrpErrorCapiEnumT deviceStatus;
  const mxArray *e_y;
  static const int32_T iv201[2] = { 1, 35 };

  char_T cv246[35];
  static const char_T cv247[35] = { 's', 'd', 'r', 'u', ':', 'r', 'e', 'p', 'o',
    'r', 't', 'S', 'D', 'R', 'u', 'S', 't', 'a', 't', 'u', 's', ':', 'N', 'o',
    't', 'C', 'o', 'm', 'p', 'a', 't', 'i', 'b', 'l', 'e' };

  const mxArray *f_y;
  static const int32_T iv202[2] = { 1, 12 };

  char_T cv248[12];
  static const char_T cv249[12] = { '1', '9', '2', '.', '1', '6', '8', '.', '1',
    '0', '.', '2' };

  const mxArray *g_y;
  static const int32_T iv203[2] = { 1, 43 };

  char_T cv250[43];
  static const char_T cv251[43] = { 'r', 'e', 't', 'u', 'r', 'n', 'e', 'd', ' ',
    'b', 'y', ' ', '\'', 'g', 'e', 't', 'S', 'D', 'R', 'u', 'D', 'r', 'i', 'v',
    'e', 'r', 'V', 'e', 'r', 's', 'i', 'o', 'n', '\'', ' ', 'f', 'u', 'n', 'c',
    't', 'i', 'o', 'n' };

  const mxArray *h_y;
  static const int32_T iv204[2] = { 1, 35 };

  static const char_T cv252[35] = { 's', 'd', 'r', 'u', ':', 'r', 'e', 'p', 'o',
    'r', 't', 'S', 'D', 'R', 'u', 'S', 't', 'a', 't', 'u', 's', ':', 'N', 'o',
    't', 'R', 'e', 's', 'p', 'o', 'n', 'd', 'i', 'n', 'g' };

  const mxArray *i_y;
  static const int32_T iv205[2] = { 1, 12 };

  const mxArray *j_y;
  static const int32_T iv206[2] = { 1, 28 };

  char_T cv253[28];
  static const char_T cv254[28] = { 's', 'd', 'r', 'u', ':', 'r', 'e', 'p', 'o',
    'r', 't', 'S', 'D', 'R', 'u', 'S', 't', 'a', 't', 'u', 's', ':', 'R', 'x',
    'B', 'u', 's', 'y' };

  const mxArray *k_y;
  static const int32_T iv207[2] = { 1, 12 };

  const mxArray *l_y;
  static const int32_T iv208[2] = { 1, 28 };

  static const char_T cv255[28] = { 's', 'd', 'r', 'u', ':', 'r', 'e', 'p', 'o',
    'r', 't', 'S', 'D', 'R', 'u', 'S', 't', 'a', 't', 'u', 's', ':', 'T', 'x',
    'B', 'u', 's', 'y' };

  const mxArray *m_y;
  static const int32_T iv209[2] = { 1, 12 };

  const mxArray *n_y;
  static const int32_T iv210[2] = { 1, 26 };

  char_T cv256[26];
  static const char_T cv257[26] = { 's', 'd', 'r', 'u', ':', 'r', 'e', 'p', 'o',
    'r', 't', 'S', 'D', 'R', 'u', 'S', 't', 'a', 't', 'u', 's', ':', 'B', 'u',
    's', 'y' };

  const mxArray *o_y;
  static const int32_T iv211[2] = { 1, 12 };

  const mxArray *p_y;
  static const int32_T iv212[2] = { 1, 35 };

  static const char_T cv258[35] = { 's', 'd', 'r', 'u', ':', 'r', 'e', 'p', 'o',
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
  static const int32_T iv213[2] = { 1, 45 };

  const mxArray *s_y;
  static const int32_T iv214[2] = { 1, 4 };

  const mxArray *t_y;
  static const int32_T iv215[2] = { 1, 51 };

  const mxArray *u_y;
  static const int32_T iv216[2] = { 1, 5 };

  static const int16_T value[8] = { 5120, 1, 1, 1, 1, 1, 1, 1 };

  boolean_T anyInputSizeChanged;
  boolean_T exitg3;
  static const int16_T iv217[8] = { 5120, 1, 1, 1, 1, 1, 1, 1 };

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
  real_T d4;
  real_T d5;
  int32_T bitNumber;
  creal_T rFrame_data[32];
  creal_T RPostEqualizer[576];
  creal_T RLinear[576];
  int32_T RHard_size[1];
  boolean_T RHard_data[563];
  int8_T b_RHard_data[563];
  static const char_T cv259[7] = { 'T', 'i', 'm', 'e', 'o', 'u', 't' };

  commcodegen_CRCDetector *c_obj;
  const mxArray *v_y;
  static const int32_T iv218[2] = { 1, 45 };

  const mxArray *w_y;
  static const int32_T iv219[2] = { 1, 4 };

  const mxArray *x_y;
  static const int32_T iv220[2] = { 1, 51 };

  const mxArray *y_y;
  static const int32_T iv221[2] = { 1, 5 };

  static const int16_T b_value[8] = { 563, 1, 1, 1, 1, 1, 1, 1 };

  boolean_T exitg1;
  static const int16_T iv222[8] = { 563, 1, 1, 1, 1, 1, 1, 1 };

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
  int8_T iv223[2];
  char_T message_data[80];
  int8_T matches_data[80];
  static const char_T cv260[3] = { 'E', 'O', 'F' };

  int8_T match_out_data[80];
  boolean_T b8;
  static const char_T cv261[9] = { 'C', 'R', 'C', ' ', 'E', 'r', 'r', 'o', 'r' };

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
  emlrtDimSizeGeqCheckFastR2012b(80, 0, &q_emlrtECI, sp);
  recoveredMessage_size[0] = 1;
  recoveredMessage_size[1] = 0;

  /* % Process received data */
  /*  Locate frames in buffer and compensate for channel affects */
  b_emxInit_creal_T(sp, &unusedU0, 3, &sb_emlrtRTEI, TRUE);
  exitg2 = FALSE;
  while ((exitg2 == FALSE) && (estimate->numProcessed < 1.0)) {
    /*  Get data from USRP */
    st.site = &ru_emlrtRSI;
    obj = ObjSDRuReceiver;
    if (!obj->isReleased) {
    } else {
      y = NULL;
      m36 = mxCreateCharArray(2, iv197);
      for (i = 0; i < 45; i++) {
        cv238[i] = cv239[i];
      }

      emlrtInitCharArrayR2013a(&st, 45, m36, cv238);
      emlrtAssign(&y, m36);
      b_y = NULL;
      m36 = mxCreateCharArray(2, iv198);
      for (i = 0; i < 4; i++) {
        cv240[i] = cv241[i];
      }

      emlrtInitCharArrayR2013a(&st, 4, m36, cv240);
      emlrtAssign(&b_y, m36);
      b_st.site = &fb_emlrtRSI;
      c_error(&b_st, message(&b_st, y, b_y, &emlrtMCI), &emlrtMCI);
    }

    if (!obj->isInitialized) {
      b_st.site = &fb_emlrtRSI;
      if (!obj->isInitialized) {
      } else {
        c_y = NULL;
        m36 = mxCreateCharArray(2, iv199);
        for (i = 0; i < 51; i++) {
          cv242[i] = cv243[i];
        }

        emlrtInitCharArrayR2013a(&b_st, 51, m36, cv242);
        emlrtAssign(&c_y, m36);
        d_y = NULL;
        m36 = mxCreateCharArray(2, iv200);
        for (i = 0; i < 5; i++) {
          cv244[i] = cv245[i];
        }

        emlrtInitCharArrayR2013a(&b_st, 5, m36, cv244);
        emlrtAssign(&d_y, m36);
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
      d_st.site = &ck_emlrtRSI;
      SDRuReceiver_setupImplLocal(&d_st, obj, &deviceStatus, errMsg_data,
        errMsg_size);
      if (deviceStatus == UsrpDriverSuccess) {
        d_st.site = &ck_emlrtRSI;
        e_st.site = &gb_emlrtRSI;
      } else {
        d_st.site = &ck_emlrtRSI;
        closeDataConnection(&d_st, obj->pDriverHandle);
        d_st.site = &ck_emlrtRSI;
        e_st.site = &gb_emlrtRSI;
      }

      d_st.site = &ck_emlrtRSI;

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
        e_st.site = &gn_emlrtRSI;
        if (!(deviceStatus == UsrpDriverNotCompatible)) {
        } else {
          e_y = NULL;
          m36 = mxCreateCharArray(2, iv201);
          for (i = 0; i < 35; i++) {
            cv246[i] = cv247[i];
          }

          emlrtInitCharArrayR2013a(&e_st, 35, m36, cv246);
          emlrtAssign(&e_y, m36);
          f_y = NULL;
          m36 = mxCreateCharArray(2, iv202);
          for (i = 0; i < 12; i++) {
            cv248[i] = cv249[i];
          }

          emlrtInitCharArrayR2013a(&e_st, 12, m36, cv248);
          emlrtAssign(&f_y, m36);
          g_y = NULL;
          m36 = mxCreateCharArray(2, iv203);
          for (i = 0; i < 43; i++) {
            cv250[i] = cv251[i];
          }

          emlrtInitCharArrayR2013a(&e_st, 43, m36, cv250);
          emlrtAssign(&g_y, m36);
          f_st.site = &lbb_emlrtRSI;
          c_error(&f_st, c_message(&f_st, e_y, f_y, g_y, &g_emlrtMCI),
                  &g_emlrtMCI);
        }
        break;

       case UsrpDriverNotResponding:
        e_st.site = &en_emlrtRSI;
        if (!(deviceStatus == UsrpDriverNotResponding)) {
        } else {
          h_y = NULL;
          m36 = mxCreateCharArray(2, iv204);
          for (i = 0; i < 35; i++) {
            cv246[i] = cv252[i];
          }

          emlrtInitCharArrayR2013a(&e_st, 35, m36, cv246);
          emlrtAssign(&h_y, m36);
          i_y = NULL;
          m36 = mxCreateCharArray(2, iv205);
          for (i = 0; i < 12; i++) {
            cv248[i] = cv249[i];
          }

          emlrtInitCharArrayR2013a(&e_st, 12, m36, cv248);
          emlrtAssign(&i_y, m36);
          f_st.site = &lbb_emlrtRSI;
          c_error(&f_st, message(&f_st, h_y, i_y, &g_emlrtMCI), &g_emlrtMCI);
        }
        break;

       case UsrpDriverRxBusy:
        e_st.site = &cn_emlrtRSI;
        if (!(deviceStatus == UsrpDriverRxBusy)) {
        } else {
          j_y = NULL;
          m36 = mxCreateCharArray(2, iv206);
          for (i = 0; i < 28; i++) {
            cv253[i] = cv254[i];
          }

          emlrtInitCharArrayR2013a(&e_st, 28, m36, cv253);
          emlrtAssign(&j_y, m36);
          k_y = NULL;
          m36 = mxCreateCharArray(2, iv207);
          for (i = 0; i < 12; i++) {
            cv248[i] = cv249[i];
          }

          emlrtInitCharArrayR2013a(&e_st, 12, m36, cv248);
          emlrtAssign(&k_y, m36);
          f_st.site = &lbb_emlrtRSI;
          c_error(&f_st, message(&f_st, j_y, k_y, &g_emlrtMCI), &g_emlrtMCI);
        }
        break;

       case UsrpDriverTxBusy:
        e_st.site = &an_emlrtRSI;
        if (!(deviceStatus == UsrpDriverTxBusy)) {
        } else {
          l_y = NULL;
          m36 = mxCreateCharArray(2, iv208);
          for (i = 0; i < 28; i++) {
            cv253[i] = cv255[i];
          }

          emlrtInitCharArrayR2013a(&e_st, 28, m36, cv253);
          emlrtAssign(&l_y, m36);
          m_y = NULL;
          m36 = mxCreateCharArray(2, iv209);
          for (i = 0; i < 12; i++) {
            cv248[i] = cv249[i];
          }

          emlrtInitCharArrayR2013a(&e_st, 12, m36, cv248);
          emlrtAssign(&m_y, m36);
          f_st.site = &lbb_emlrtRSI;
          c_error(&f_st, message(&f_st, l_y, m_y, &g_emlrtMCI), &g_emlrtMCI);
        }
        break;

       case UsrpDriverBusy:
        e_st.site = &xm_emlrtRSI;
        if (!(deviceStatus == UsrpDriverBusy)) {
        } else {
          n_y = NULL;
          m36 = mxCreateCharArray(2, iv210);
          for (i = 0; i < 26; i++) {
            cv256[i] = cv257[i];
          }

          emlrtInitCharArrayR2013a(&e_st, 26, m36, cv256);
          emlrtAssign(&n_y, m36);
          o_y = NULL;
          m36 = mxCreateCharArray(2, iv211);
          for (i = 0; i < 12; i++) {
            cv248[i] = cv249[i];
          }

          emlrtInitCharArrayR2013a(&e_st, 12, m36, cv248);
          emlrtAssign(&o_y, m36);
          f_st.site = &lbb_emlrtRSI;
          c_error(&f_st, message(&f_st, n_y, o_y, &g_emlrtMCI), &g_emlrtMCI);
        }
        break;

       case UsrpDriverError:
        e_st.site = &vm_emlrtRSI;
        if (!(deviceStatus == UsrpDriverError)) {
        } else {
          p_y = NULL;
          m36 = mxCreateCharArray(2, iv212);
          for (i = 0; i < 35; i++) {
            cv246[i] = cv258[i];
          }

          emlrtInitCharArrayR2013a(&e_st, 35, m36, cv246);
          emlrtAssign(&p_y, m36);
          u_size[0] = 1;
          u_size[1] = errMsg_size[1];
          match_idx = errMsg_size[0] * errMsg_size[1];
          for (j = 0; j < match_idx; j++) {
            u_data[j] = errMsg_data[j];
          }

          q_y = NULL;
          m36 = mxCreateCharArray(2, u_size);
          emlrtInitCharArrayR2013a(&e_st, u_size[1], m36, (char_T *)&u_data);
          emlrtAssign(&q_y, m36);
          f_st.site = &lbb_emlrtRSI;
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
    SDRuReceiver_stepImpl(SD, &b_st, obj, SD->f14.buffer);
    st.site = &qu_emlrtRSI;
    P = SD->f14.buffer[0];
    for (match_idx = 0; match_idx < 5119; match_idx++) {
      P.re += SD->f14.buffer[match_idx + 1].re;
      P.im += SD->f14.buffer[match_idx + 1].im;
    }

    guard1 = FALSE;
    if ((P.re == 0.0) && (P.im == 0.0)) {
      /*  All zeros from radio (Bug?) */
      guard1 = TRUE;
    } else {
      /*  Automatic Gain Control */
      st.site = &pu_emlrtRSI;
      b_obj = ObjAGC;
      if (!b_obj->isReleased) {
      } else {
        r_y = NULL;
        m36 = mxCreateCharArray(2, iv213);
        for (i = 0; i < 45; i++) {
          cv238[i] = cv239[i];
        }

        emlrtInitCharArrayR2013a(&st, 45, m36, cv238);
        emlrtAssign(&r_y, m36);
        s_y = NULL;
        m36 = mxCreateCharArray(2, iv214);
        for (i = 0; i < 4; i++) {
          cv240[i] = cv241[i];
        }

        emlrtInitCharArrayR2013a(&st, 4, m36, cv240);
        emlrtAssign(&s_y, m36);
        b_st.site = &fb_emlrtRSI;
        c_error(&b_st, message(&b_st, r_y, s_y, &emlrtMCI), &emlrtMCI);
      }

      if (!b_obj->isInitialized) {
        b_st.site = &fb_emlrtRSI;
        if (!b_obj->isInitialized) {
        } else {
          t_y = NULL;
          m36 = mxCreateCharArray(2, iv215);
          for (i = 0; i < 51; i++) {
            cv242[i] = cv243[i];
          }

          emlrtInitCharArrayR2013a(&b_st, 51, m36, cv242);
          emlrtAssign(&t_y, m36);
          u_y = NULL;
          m36 = mxCreateCharArray(2, iv216);
          for (i = 0; i < 5; i++) {
            cv244[i] = cv245[i];
          }

          emlrtInitCharArrayR2013a(&b_st, 5, m36, cv244);
          emlrtAssign(&u_y, m36);
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
        d_st.site = &kn_emlrtRSI;
        e_st.site = &gb_emlrtRSI;
        d_st.site = &ln_emlrtRSI;
        b_obj->Gain = 1.0;
        e_st.site = &gb_emlrtRSI;
        d_st.site = &mn_emlrtRSI;
        e_st.site = &gb_emlrtRSI;
        d_st.site = &nn_emlrtRSI;
        e_st.site = &gb_emlrtRSI;
        d_st.site = &on_emlrtRSI;
        e_st.site = &gb_emlrtRSI;
        d_st.site = &pn_emlrtRSI;
        e_st.site = &gb_emlrtRSI;
        d_st.site = &qn_emlrtRSI;
        e_st.site = &gb_emlrtRSI;
        c_st.site = &fb_emlrtRSI;
        d_st.site = &sn_emlrtRSI;
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
        if (b_obj->inputVarSize1[match_idx] != (uint32_T)iv217[match_idx]) {
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
      memcpy(&SD->f14.b_buffer[0], &SD->f14.buffer[0], 5120U * sizeof(creal_T));
      b_st.site = &fb_emlrtRSI;
      AGC_stepImpl(SD, b_obj, SD->f14.b_buffer, SD->f14.buffer);

      /*  Increment processed data index */
      numBuffersProcessed++;

      /*     %% Find preamble in buffer */
      st.site = &ou_emlrtRSI;

      /*  locateOFDMFrame: Locate 802.11a based preamble from input data stream. */
      /*  It is assumed that the received signal is still in the time domain.  The */
      /*  location of the start of the preamble will be returned, if not found -1 */
      /*  is returned */
      /* % Timing Estimate */
      /*  Quarter of short preamble sequence */
      /*  Cross correlate */
      rWin_size[0] = 1231;
      memcpy(&SD->f14.rWin_data[0], &SD->f14.buffer[0], 1231U * sizeof(creal_T));
      for (j = 0; j < 16; j++) {
        rx_shortPreambleOFDM_data[j].re = rx_shortPreambleOFDM[j].re;
        rx_shortPreambleOFDM_data[j].im = -rx_shortPreambleOFDM[j].im;
      }

      b_st.site = &vu_emlrtRSI;
      xcorr(&b_st, SD->f14.rWin_data, rx_shortPreambleOFDM_data,
            SD->f14.Phat_data, Phat_size);
      b_st.site = &uu_emlrtRSI;
      c_abs(SD->f14.rWin_data, rWin_size, SD->f14.tmp_data, Phat_size);
      tmp_size[0] = Phat_size[0];
      match_idx = Phat_size[0];
      for (j = 0; j < match_idx; j++) {
        tmp_data[j] = SD->f14.tmp_data[j];
      }

      b_st.site = &uu_emlrtRSI;
      power(tmp_data, tmp_size, SD->f14.tmp_data, Phat_size);
      b_st.site = &uu_emlrtRSI;
      b_xcorr(&b_st, SD->f14.tmp_data, SD->f14.Rhat_data, Phat_size);

      /*  moving average */
      /*  Remove leading and tail zeros overlaps */
      emlrtVectorVectorIndexCheckR2012b(2461, 1, 1, 1224, &t_emlrtECI, &st);
      emlrtVectorVectorIndexCheckR2012b(2461, 1, 1, 1224, &s_emlrtECI, &st);

      /*  Calculate timing metric */
      b_Phat_size[0] = 1224;
      memcpy(&SD->f14.b_Phat_data[0], &SD->f14.Phat_data[1230], 1224U * sizeof
             (creal_T));
      b_st.site = &tu_emlrtRSI;
      c_abs(SD->f14.b_Phat_data, b_Phat_size, SD->f14.tmp_data, Phat_size);
      b_tmp_size[0] = Phat_size[0];
      match_idx = Phat_size[0];
      for (j = 0; j < match_idx; j++) {
        tmp_data[j] = SD->f14.tmp_data[j];
      }

      b_st.site = &tu_emlrtRSI;
      power(tmp_data, b_tmp_size, SD->f14.tmp_data, Phat_size);
      Rhat_size[0] = 1224;
      memcpy(&Rhat_data[0], &SD->f14.Rhat_data[1230], 1224U * sizeof(real_T));
      b_st.site = &tu_emlrtRSI;
      power(Rhat_data, Rhat_size, tmp_data, Phat_size);
      b_st.site = &tu_emlrtRSI;
      rdivide(SD->f14.tmp_data, tmp_data, M_data, Phat_size);

      /*  Determine start of short preamble */
      /*  peak threshold after normalization (TUNABLE) */
      b_st.site = &su_emlrtRSI;
      locateShortpreamble(&b_st, M_data, &d5, &d4);
      estimate->delay = d5;
      estimate->numPeaks = d4;

      /*  Check if frame exists in correct location and whether it's duplicate */
      /*  %Check if full data frame exists in buffer */
      /*  %Check if preamble located */
      if ((d5 > -1.0) && (numBuffersProcessed - lastFound >= 2)) {
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
        if (d5 == d5) {
        } else {
          emlrtErrorWithMessageIdR2012b(sp, &wc_emlrtRTEI,
            "EMLRT:runTime:RepeatedExprWithDifferentResultsInColonIndexing", 0);
        }

        for (j = 0; j < 1280; j++) {
          d4 = d5 + (1.0 + (real_T)j);
          bitNumber = (int32_T)emlrtIntegerCheckFastR2012b(d4, &n_emlrtDCI, sp);
          SD->f14.rFrame_data[j].re = SD->
            f14.buffer[emlrtDynamicBoundsCheckFastR2012b(bitNumber, 1, 5120,
            &gb_emlrtBCI, sp) - 1].re;
          d4 = d5 + (1.0 + (real_T)j);
          bitNumber = (int32_T)emlrtIntegerCheckFastR2012b(d4, &n_emlrtDCI, sp);
          SD->f14.rFrame_data[j].im = SD->
            f14.buffer[emlrtDynamicBoundsCheckFastR2012b(bitNumber, 1, 5120,
            &gb_emlrtBCI, sp) - 1].im;
        }

        /*  Correct frequency offset */
        st.site = &nu_emlrtRSI;

        /*  coarseOFDMFreqEst: Frequency Correction based on the Schmidl and Cox */
        /*  method, utilizing halves of the short preamble from the 802.11a standard */
        emlrtVectorVectorIndexCheckR2012b(1280, 1, 1, 32, &v_emlrtECI, &st);
        emlrtVectorVectorIndexCheckR2012b(1280, 1, 1, 32, &u_emlrtECI, &st);
        for (j = 0; j < 32; j++) {
          rFrame_data[j].re = SD->f14.rFrame_data[j].re * SD->f14.rFrame_data[32
            + j].re - -SD->f14.rFrame_data[j].im * SD->f14.rFrame_data[32 + j].
            im;
          rFrame_data[j].im = SD->f14.rFrame_data[j].re * SD->f14.rFrame_data[32
            + j].im + -SD->f14.rFrame_data[j].im * SD->f14.rFrame_data[32 + j].
            re;
        }

        b_st.site = &jx_emlrtRSI;
        P = sum(rFrame_data);

        /* Cross-correlate preamble */
        b_st.site = &ix_emlrtRSI;
        estimate->phi = angle(P);

        /*  Determine phase angle between preamble halves */
        /*  Buffer not full */
        b_st.site = &hx_emlrtRSI;
        c_st.site = &m_emlrtRSI;
        d_st.site = &n_emlrtRSI;
        estimate->frequency[0] = estimate->phi / 4.0212385965949353E-5;

        /*  Convert angle to frequency */
        /*  Apply frequency estimate */
        memcpy(&SD->f14.b_rFrame_data[0], &SD->f14.rFrame_data[0], 1280U *
               sizeof(creal_T));
        b_st.site = &gx_emlrtRSI;
        freqCorrectOFDM(&b_st, estimate, SD->f14.b_rFrame_data,
                        SD->f14.rFrame_data, Phat_size);

        /*  Equalize */
        SD->f14.estimate = *estimate;
        st.site = &mu_emlrtRSI;
        equalizeOFDM(SD, &st, SD->f14.rFrame_data, rx_longPreamble, rx_pilots,
                     c_rx_pilotLocationsWithoutGuard,
                     rx_dataSubcarrierIndexies_data,
                     rx_dataSubcarrierIndexies_size, &SD->f14.estimate,
                     ObjPreambleDemod, ObjDataDemod, RPostEqualizer, unusedU0,
                     estimate);

        /*  Demod subcarriers */
        st.site = &lu_emlrtRSI;

        /*  demodOFDMSubcarriers: Hard demodulate then compare received and */
        /*  transmitted data */
        /*  Demodulate subcarrier data */
        b_st.site = &pab_emlrtRSI;
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

        emlrtSubAssignSizeCheckR2012b(errMsg_size, 2, RHard_size, 1, &r_emlrtECI,
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
        emlrtDimSizeGeqCheckFastR2012b(80, 7, &p_emlrtECI, sp);
        recoveredMessage_size[0] = 1;
        recoveredMessage_size[1] = 7;
        for (j = 0; j < 7; j++) {
          recoveredMessage_data[j] = cv259[j];
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
    st.site = &ku_emlrtRSI;
    c_obj = ObjDetect;
    for (j = 0; j < 563; j++) {
      RHard_data[j] = (messageBits_data[messageBits_size[0] * j] > 0.0);
    }

    if (!c_obj->isReleased) {
    } else {
      v_y = NULL;
      m36 = mxCreateCharArray(2, iv218);
      for (i = 0; i < 45; i++) {
        cv238[i] = cv239[i];
      }

      emlrtInitCharArrayR2013a(&st, 45, m36, cv238);
      emlrtAssign(&v_y, m36);
      w_y = NULL;
      m36 = mxCreateCharArray(2, iv219);
      for (i = 0; i < 4; i++) {
        cv240[i] = cv241[i];
      }

      emlrtInitCharArrayR2013a(&st, 4, m36, cv240);
      emlrtAssign(&w_y, m36);
      b_st.site = &fb_emlrtRSI;
      c_error(&b_st, message(&b_st, v_y, w_y, &emlrtMCI), &emlrtMCI);
    }

    if (!c_obj->isInitialized) {
      b_st.site = &fb_emlrtRSI;
      if (!c_obj->isInitialized) {
      } else {
        x_y = NULL;
        m36 = mxCreateCharArray(2, iv220);
        for (i = 0; i < 51; i++) {
          cv242[i] = cv243[i];
        }

        emlrtInitCharArrayR2013a(&b_st, 51, m36, cv242);
        emlrtAssign(&x_y, m36);
        y_y = NULL;
        m36 = mxCreateCharArray(2, iv221);
        for (i = 0; i < 5; i++) {
          cv244[i] = cv245[i];
        }

        emlrtInitCharArrayR2013a(&b_st, 5, m36, cv244);
        emlrtAssign(&y_y, m36);
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
      f_st.site = &wl_emlrtRSI;
      c_st.site = &fb_emlrtRSI;
      d_st.site = &fb_emlrtRSI;
      d_st.site = &fb_emlrtRSI;
      e_st.site = &wl_emlrtRSI;
      c_st.site = &fb_emlrtRSI;
      c_st.site = &fb_emlrtRSI;
      c_st.site = &fb_emlrtRSI;
      c_st.site = &fb_emlrtRSI;
      d_st.site = &wl_emlrtRSI;
      d_st.site = &wl_emlrtRSI;
      e_st.site = &gb_emlrtRSI;
      c_st.site = &fb_emlrtRSI;
      d_st.site = &wl_emlrtRSI;
      e_st.site = NULL;
    }

    b_st.site = &fb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
    c_st.site = &fb_emlrtRSI;
    c_st.site = &fb_emlrtRSI;
    d_st.site = &wl_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
    anyInputSizeChanged = FALSE;
    match_idx = 0;
    exitg1 = FALSE;
    while ((exitg1 == FALSE) && (match_idx < 8)) {
      if (c_obj->inputVarSize1[match_idx] != (uint32_T)iv222[match_idx]) {
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
    d_st.site = &wl_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
    c_st.site = &ig_emlrtRSI;
    d_st.site = &fb_emlrtRSI;
    d_st.site = &fb_emlrtRSI;
    e_st.site = &wl_emlrtRSI;
    c_st.site = &ig_emlrtRSI;
    d_st.site = &fb_emlrtRSI;
    d_st.site = &fb_emlrtRSI;
    e_st.site = &wl_emlrtRSI;
    c_st.site = &ig_emlrtRSI;
    c_st.site = &ig_emlrtRSI;
    d_st.site = &fb_emlrtRSI;
    d_st.site = &fb_emlrtRSI;
    e_st.site = &wl_emlrtRSI;
    c_st.site = &ig_emlrtRSI;
    c_st.site = &ig_emlrtRSI;
    d_st.site = &wl_emlrtRSI;
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
    d_st.site = &wl_emlrtRSI;
    e_st.site = NULL;
    if (leftoverBits == 0U) {
      b_leftoverBits = FALSE;
    } else {
      b_leftoverBits = TRUE;
    }

    if (!b_leftoverBits) {
      /*  Convert Bits to characters */
      st.site = &ju_emlrtRSI;
      varargout_1_size[0] = 560;
      varargout_1_size[1] = 1;
      for (j = 0; j < 560; j++) {
        b_varargout_1_data[j] = ((int32_T)varargout_1_data[j] > 0);
      }

      b_st.site = &ju_emlrtRSI;
      OFDMbits2letters(&b_st, b_varargout_1_data, varargout_1_size, b_tmp_data,
                       Phat_size);
      messageEnd_size[0] = 1;
      messageEnd_size[1] = Phat_size[0];
      match_idx = Phat_size[0];
      for (j = 0; j < match_idx; j++) {
        messageEnd_data[j] = b_tmp_data[j];
      }

      for (j = 0; j < 2; j++) {
        iv223[j] = (int8_T)messageEnd_size[j];
      }

      match_idx = iv223[1];
      for (j = 0; j < match_idx; j++) {
        d5 = muDoubleScalarFloor(messageEnd_data[j]);
        if (muDoubleScalarIsNaN(d5) || muDoubleScalarIsInf(d5)) {
          d5 = 0.0;
        } else {
          d5 = muDoubleScalarRem(d5, 256.0);
        }

        if (d5 < 0.0) {
          message_data[j] = (int8_T)-(int8_T)(uint8_T)-d5;
        } else {
          message_data[j] = (int8_T)(uint8_T)d5;
        }
      }

      /* messageBits(recMessage,1:end-3) */
      /* Remove padding */
      st.site = &iu_emlrtRSI;
      if (iv223[1] == 0) {
        messageEnd_size[1] = 0;
      } else {
        b_st.site = &yab_emlrtRSI;
        match_idx = 0;
        c_st.site = &abb_emlrtRSI;
        d_st.site = &dg_emlrtRSI;
        for (i = 1; i <= iv223[1] - 2; i++) {
          j = 1;
          while ((j <= 3) && (message_data[(i + j) - 2] == cv260[j - 1])) {
            j++;
          }

          if (j > 3) {
            matches_data[match_idx] = (int8_T)i;
            match_idx++;
          }
        }

        c_st.site = &bbb_emlrtRSI;
        d_st.site = &cbb_emlrtRSI;
        e_st.site = &dg_emlrtRSI;
        if (1 > match_idx) {
          b8 = FALSE;
        } else {
          b8 = (match_idx > 2147483646);
        }

        if (b8) {
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
          j = iv223[1];
          emlrtDynamicBoundsCheckFastR2012b(1, 1, j, &fb_emlrtBCI, sp);
          j = iv223[1];
          bitNumber = (int32_T)messageEnd_data[0] - 1;
          match_idx = emlrtDynamicBoundsCheckFastR2012b(bitNumber, 1, j,
            &fb_emlrtBCI, sp);
        }

        emlrtDimSizeGeqCheckFastR2012b(80, match_idx, &o_emlrtECI, sp);
        recoveredMessage_size[0] = 1;
        recoveredMessage_size[1] = match_idx;
        for (j = 0; j < match_idx; j++) {
          recoveredMessage_data[j] = message_data[j];
        }
      }
    } else {
      /* recoveredMessage = char(OFDMbits2letters(msg > 0).');%messageBits(recMessage,1:end-3) */
      /* fprintf('Corrupted Message: %s\n',recoveredMessage); */
      emlrtDimSizeGeqCheckFastR2012b(80, 9, &n_emlrtECI, sp);
      recoveredMessage_size[0] = 1;
      recoveredMessage_size[1] = 9;
      for (j = 0; j < 9; j++) {
        recoveredMessage_data[j] = cv261[j];
      }
    }

    match_idx = 1;
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (PHYReceive.c) */
