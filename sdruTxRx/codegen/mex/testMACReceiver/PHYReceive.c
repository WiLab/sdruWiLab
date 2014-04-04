/*
 * PHYReceive.c
 *
 * Code generation for function 'PHYReceive'
 *
 * C source code generated on: Thu Apr  3 19:51:42 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testMACReceiver.h"
#include "PHYReceive.h"
#include "SDRuReceiver.h"
#include "AGC.h"
#include "coarseOFDMFreqEst_sdr.h"
#include "SystemCore.h"
#include "resample.h"
#include "OFDMbits2letters.h"
#include "testMACReceiver_emxutil.h"
#include "rdivide.h"
#include "mean.h"
#include "power.h"
#include "abs.h"
#include "sum.h"
#include "locateOFDMFrame_sdr.h"
#include "xcorr.h"
#include "receiveData.h"
#include "testMACReceiver_mexutil.h"
#include "testMACReceiver_data.h"

/* Variable Definitions */
static emlrtRSInfo af_emlrtRSI = { 99, "PHYReceive",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/PHYReceive.m" };

static emlrtRSInfo bf_emlrtRSI = { 97, "PHYReceive",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/PHYReceive.m" };

static emlrtRSInfo cf_emlrtRSI = { 93, "PHYReceive",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/PHYReceive.m" };

static emlrtRSInfo df_emlrtRSI = { 67, "PHYReceive",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/PHYReceive.m" };

static emlrtRSInfo ef_emlrtRSI = { 64, "PHYReceive",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/PHYReceive.m" };

static emlrtRSInfo ff_emlrtRSI = { 61, "PHYReceive",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/PHYReceive.m" };

static emlrtRSInfo gf_emlrtRSI = { 47, "PHYReceive",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/PHYReceive.m" };

static emlrtRSInfo hf_emlrtRSI = { 41, "PHYReceive",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/PHYReceive.m" };

static emlrtRSInfo if_emlrtRSI = { 33, "PHYReceive",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/PHYReceive.m" };

static emlrtRSInfo hg_emlrtRSI = { 172, "AGC",
  "/opt/MATLAB/R2013a/toolbox/comm/comm/+comm/AGC.m" };

static emlrtRSInfo ig_emlrtRSI = { 173, "AGC",
  "/opt/MATLAB/R2013a/toolbox/comm/comm/+comm/AGC.m" };

static emlrtRSInfo jg_emlrtRSI = { 176, "AGC",
  "/opt/MATLAB/R2013a/toolbox/comm/comm/+comm/AGC.m" };

static emlrtRSInfo kg_emlrtRSI = { 183, "AGC",
  "/opt/MATLAB/R2013a/toolbox/comm/comm/+comm/AGC.m" };

static emlrtRSInfo lg_emlrtRSI = { 184, "AGC",
  "/opt/MATLAB/R2013a/toolbox/comm/comm/+comm/AGC.m" };

static emlrtRSInfo mg_emlrtRSI = { 185, "AGC",
  "/opt/MATLAB/R2013a/toolbox/comm/comm/+comm/AGC.m" };

static emlrtRSInfo ng_emlrtRSI = { 189, "AGC",
  "/opt/MATLAB/R2013a/toolbox/comm/comm/+comm/AGC.m" };

static emlrtRSInfo og_emlrtRSI = { 282, "AGC",
  "/opt/MATLAB/R2013a/toolbox/comm/comm/+comm/AGC.m" };

static emlrtRSInfo qg_emlrtRSI = { 28, "locateOFDMFrame_sdr",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/private/locateOFDMFrame_sdr.m"
};

static emlrtRSInfo rg_emlrtRSI = { 24, "locateOFDMFrame_sdr",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/private/locateOFDMFrame_sdr.m"
};

static emlrtRSInfo sg_emlrtRSI = { 17, "locateOFDMFrame_sdr",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/private/locateOFDMFrame_sdr.m"
};

static emlrtRSInfo tg_emlrtRSI = { 16, "locateOFDMFrame_sdr",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/private/locateOFDMFrame_sdr.m"
};

static emlrtRSInfo hi_emlrtRSI = { 17, "coarseOFDMFreqEst_sdr",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/private/coarseOFDMFreqEst_sdr.m"
};

static emlrtRSInfo ii_emlrtRSI = { 6, "coarseOFDMFreqEst_sdr",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/private/coarseOFDMFreqEst_sdr.m"
};

static emlrtRSInfo pi_emlrtRSI = { 16, "equalizeOFDM",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/private/equalizeOFDM.m" };

static emlrtRSInfo qi_emlrtRSI = { 17, "equalizeOFDM",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/private/equalizeOFDM.m" };

static emlrtRSInfo ri_emlrtRSI = { 21, "equalizeOFDM",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/private/equalizeOFDM.m" };

static emlrtRSInfo si_emlrtRSI = { 28, "equalizeOFDM",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/private/equalizeOFDM.m" };

static emlrtRSInfo ti_emlrtRSI = { 42, "equalizeOFDM",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/private/equalizeOFDM.m" };

static emlrtRSInfo ij_emlrtRSI = { 80, "equalizeOFDM",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/private/equalizeOFDM.m" };

static emlrtRSInfo wj_emlrtRSI = { 44, "strfind",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/strfun/strfind.m" };

static emlrtRSInfo xj_emlrtRSI = { 63, "strfind",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/strfun/strfind.m" };

static emlrtRSInfo yj_emlrtRSI = { 76, "strfind",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/strfun/strfind.m" };

static emlrtRSInfo ak_emlrtRSI = { 85, "strfind",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/strfun/strfind.m" };

static emlrtRTEInfo v_emlrtRTEI = { 1, 31, "PHYReceive",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/PHYReceive.m" };

static emlrtRTEInfo bb_emlrtRTEI = { 16, 5, "equalizeOFDM",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/private/equalizeOFDM.m" };

static emlrtRTEInfo cb_emlrtRTEI = { 17, 5, "equalizeOFDM",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/private/equalizeOFDM.m" };

static emlrtECInfo j_emlrtECI = { 2, 109, 9, "PHYReceive",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/PHYReceive.m" };

static emlrtECInfo k_emlrtECI = { 2, 101, 13, "PHYReceive",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/PHYReceive.m" };

static emlrtECInfo l_emlrtECI = { 2, 82, 9, "PHYReceive",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/PHYReceive.m" };

static emlrtECInfo m_emlrtECI = { 2, 26, 1, "PHYReceive",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/PHYReceive.m" };

static emlrtBCInfo v_emlrtBCI = { -1, -1, 101, 32, "message", "PHYReceive",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/PHYReceive.m", 0 };

static emlrtECInfo n_emlrtECI = { -1, 73, 9, "PHYReceive",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/PHYReceive.m" };

static emlrtRTEInfo dc_emlrtRTEI = { 61, 25, "PHYReceive",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/PHYReceive.m" };

static emlrtECInfo o_emlrtECI = { -1, 21, 13, "locateOFDMFrame_sdr",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/private/locateOFDMFrame_sdr.m"
};

static emlrtECInfo p_emlrtECI = { -1, 20, 13, "locateOFDMFrame_sdr",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/private/locateOFDMFrame_sdr.m"
};

static emlrtECInfo q_emlrtECI = { -1, 6, 33, "coarseOFDMFreqEst_sdr",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/private/coarseOFDMFreqEst_sdr.m"
};

static emlrtECInfo r_emlrtECI = { -1, 6, 15, "coarseOFDMFreqEst_sdr",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/private/coarseOFDMFreqEst_sdr.m"
};

static emlrtECInfo s_emlrtECI = { -1, 11, 13, "equalizeOFDM",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/private/equalizeOFDM.m" };

static emlrtECInfo t_emlrtECI = { 1, 21, 35, "equalizeOFDM",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/private/equalizeOFDM.m" };

static emlrtECInfo u_emlrtECI = { -1, 25, 16, "equalizeOFDM",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/private/equalizeOFDM.m" };

static emlrtECInfo v_emlrtECI = { 3, 38, 9, "equalizeOFDM",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/private/equalizeOFDM.m" };

static emlrtBCInfo w_emlrtBCI = { 1, 5120, 61, 18, "buffer", "PHYReceive",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/PHYReceive.m", 0 };

static emlrtDCInfo d_emlrtDCI = { 61, 18, "PHYReceive",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/PHYReceive.m", 1 };

static emlrtBCInfo x_emlrtBCI = { -1, -1, 58, 7, "R", "equalizeOFDM",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/private/equalizeOFDM.m", 0
};

/* Function Definitions */
void PHYReceive(testMACReceiverStackData *SD, comm_AGC *ObjAGC,
                comm_SDRuReceiver *ObjSDRuReceiver, commcodegen_CRCDetector
                *ObjDetect, OFDMDemodulator_1 *ObjPreambleDemod, OFDMDemodulator
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
  emxArray_creal_T *RLongFirst;
  emxArray_creal_T *RLongSecond;
  emxArray_creal_T *Rraw;
  emxArray_creal_T *R;
  boolean_T exitg1;
  comm_SDRuReceiver *obj;
  const mxArray *y;
  static const int32_T iv91[2] = { 1, 45 };

  const mxArray *m19;
  char_T cv100[45];
  int32_T i;
  static const char_T cv101[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C',
    'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv92[2] = { 1, 4 };

  char_T cv102[4];
  static const char_T cv103[4] = { 's', 't', 'e', 'p' };

  const mxArray *c_y;
  static const int32_T iv93[2] = { 1, 51 };

  char_T cv104[51];
  static const char_T cv105[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l',
    'e', 'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *d_y;
  static const int32_T iv94[2] = { 1, 5 };

  char_T cv106[5];
  static const char_T cv107[5] = { 's', 'e', 't', 'u', 'p' };

  int32_T errMsg_size[2];
  char_T errMsg_data[1024];
  UsrpErrorCapiEnumT deviceStatus;
  const mxArray *e_y;
  static const int32_T iv95[2] = { 1, 35 };

  char_T cv108[35];
  static const char_T cv109[35] = { 's', 'd', 'r', 'u', ':', 'r', 'e', 'p', 'o',
    'r', 't', 'S', 'D', 'R', 'u', 'S', 't', 'a', 't', 'u', 's', ':', 'N', 'o',
    't', 'C', 'o', 'm', 'p', 'a', 't', 'i', 'b', 'l', 'e' };

  const mxArray *f_y;
  static const int32_T iv96[2] = { 1, 12 };

  char_T cv110[12];
  static const char_T cv111[12] = { '1', '9', '2', '.', '1', '6', '8', '.', '1',
    '0', '.', '2' };

  const mxArray *g_y;
  static const int32_T iv97[2] = { 1, 43 };

  char_T cv112[43];
  static const char_T cv113[43] = { 'r', 'e', 't', 'u', 'r', 'n', 'e', 'd', ' ',
    'b', 'y', ' ', '\'', 'g', 'e', 't', 'S', 'D', 'R', 'u', 'D', 'r', 'i', 'v',
    'e', 'r', 'V', 'e', 'r', 's', 'i', 'o', 'n', '\'', ' ', 'f', 'u', 'n', 'c',
    't', 'i', 'o', 'n' };

  const mxArray *h_y;
  static const int32_T iv98[2] = { 1, 35 };

  static const char_T cv114[35] = { 's', 'd', 'r', 'u', ':', 'r', 'e', 'p', 'o',
    'r', 't', 'S', 'D', 'R', 'u', 'S', 't', 'a', 't', 'u', 's', ':', 'N', 'o',
    't', 'R', 'e', 's', 'p', 'o', 'n', 'd', 'i', 'n', 'g' };

  const mxArray *i_y;
  static const int32_T iv99[2] = { 1, 12 };

  const mxArray *j_y;
  static const int32_T iv100[2] = { 1, 26 };

  char_T cv115[26];
  static const char_T cv116[26] = { 's', 'd', 'r', 'u', ':', 'r', 'e', 'p', 'o',
    'r', 't', 'S', 'D', 'R', 'u', 'S', 't', 'a', 't', 'u', 's', ':', 'B', 'u',
    's', 'y' };

  const mxArray *k_y;
  static const int32_T iv101[2] = { 1, 12 };

  const mxArray *l_y;
  static const int32_T iv102[2] = { 1, 35 };

  static const char_T cv117[35] = { 's', 'd', 'r', 'u', ':', 'r', 'e', 'p', 'o',
    'r', 't', 'S', 'D', 'R', 'u', 'S', 't', 'a', 't', 'u', 's', ':', 'U', 'n',
    'k', 'n', 'o', 'w', 'n', 'S', 't', 'a', 't', 'u', 's' };

  boolean_T value[4];
  int32_T i15;
  creal_T P;
  int32_T j;
  boolean_T guard1 = FALSE;
  comm_AGC *b_obj;
  const mxArray *m_y;
  static const int32_T iv103[2] = { 1, 45 };

  const mxArray *n_y;
  static const int32_T iv104[2] = { 1, 4 };

  const mxArray *o_y;
  static const int32_T iv105[2] = { 1, 51 };

  const mxArray *p_y;
  static const int32_T iv106[2] = { 1, 5 };

  static const int16_T b_value[8] = { 5120, 1, 1, 1, 1, 1, 1, 1 };

  boolean_T exitg2;
  static const int16_T iv107[8] = { 5120, 1, 1, 1, 1, 1, 1, 1 };

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
  boolean_T err;
  int16_T c_tmp_data[1280];
  int32_T ib;
  struct_T b_estimate;
  int32_T d_tmp_data[1280];
  int32_T e_tmp_data[1280];
  creal_T buffer_data[32];
  OFDMDemodulator_1 *hPreambleDemod;
  OFDMDemodulator *hDataDemod;
  creal_T rFreqShifted[64];
  creal_T b_rFreqShifted[64];
  creal_T b_R[106];
  real_T b_rx_longPreamble[106];
  creal_T RNormal[106];
  creal_T preambleEqGains[53];
  real_T dv6[106];
  real_T dv7[106];
  creal_T b_preambleEqGains[53];
  real_T dv8[106];
  real_T dv9[53];
  creal_T RXPilots[48];
  creal_T preambleGainsFull[636];
  int32_T ia;
  int32_T iv108[3];
  static const int8_T iv109[3] = { 48, 12, 1 };

  int32_T b_Rraw[3];
  creal_T PilotNormal[48];
  real_T PilotEnergy[48];
  creal_T b_PilotNormal[48];
  creal_T pilotEqGains[576];
  creal_T preambleGainsFull_data[576];
  creal_T b_preambleGainsFull_data[576];
  creal_T RPostEqualizer[576];
  creal_T RLinear[576];
  int32_T RHard_size[1];
  boolean_T RHard_data[563];
  int8_T b_RHard_data[563];
  static const char_T cv118[7] = { 'T', 'i', 'm', 'e', 'o', 'u', 't' };

  boolean_T msg_data[560];
  boolean_T b_msg_data[560];
  int32_T msg_size[2];
  real_T f_tmp_data[80];
  int32_T messageEnd_size[2];
  real_T messageEnd_data[80];
  int8_T iv110[2];
  char_T message_data[80];
  int8_T matches_data[80];
  static const char_T cv119[3] = { 'E', 'O', 'F' };

  int8_T match_out_data[80];
  boolean_T b3;
  int32_T g_tmp_data[77];
  static const char_T cv120[9] = { 'C', 'R', 'C', ' ', 'E', 'r', 'r', 'o', 'r' };

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
  emlrtDimSizeGeqCheckFastR2012b(80, 0, &m_emlrtECI, emlrtRootTLSGlobal);
  recoveredMessage_size[0] = 1;
  recoveredMessage_size[1] = 0;

  /* % Process received data */
  /*  Locate frames in buffer and compensate for channel affects */
  emxInit_creal_T(&RLongFirst, 3, &bb_emlrtRTEI, TRUE);
  emxInit_creal_T(&RLongSecond, 3, &cb_emlrtRTEI, TRUE);
  emxInit_creal_T(&Rraw, 3, &v_emlrtRTEI, TRUE);
  emxInit_creal_T(&R, 3, &v_emlrtRTEI, TRUE);
  exitg1 = FALSE;
  while ((exitg1 == FALSE) && (estimate->numProcessed < 3.0)) {
    /*  Get data from USRP */
    emlrtPushRtStackR2012b(&if_emlrtRSI, emlrtRootTLSGlobal);
    obj = ObjSDRuReceiver;
    if (!obj->isReleased) {
    } else {
      emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
      y = NULL;
      m19 = mxCreateCharArray(2, iv91);
      for (i = 0; i < 45; i++) {
        cv100[i] = cv101[i];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 45, m19, cv100);
      emlrtAssign(&y, m19);
      b_y = NULL;
      m19 = mxCreateCharArray(2, iv92);
      for (i = 0; i < 4; i++) {
        cv102[i] = cv103[i];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 4, m19, cv102);
      emlrtAssign(&b_y, m19);
      c_error(message(y, b_y, &b_emlrtMCI), &b_emlrtMCI);
      emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    }

    if (!obj->isInitialized) {
      emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
      if (!obj->isInitialized) {
      } else {
        emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
        c_y = NULL;
        m19 = mxCreateCharArray(2, iv93);
        for (i = 0; i < 51; i++) {
          cv104[i] = cv105[i];
        }

        emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 51, m19, cv104);
        emlrtAssign(&c_y, m19);
        d_y = NULL;
        m19 = mxCreateCharArray(2, iv94);
        for (i = 0; i < 5; i++) {
          cv106[i] = cv107[i];
        }

        emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 5, m19, cv106);
        emlrtAssign(&d_y, m19);
        c_error(message(c_y, d_y, &b_emlrtMCI), &b_emlrtMCI);
        emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
      }

      emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
      obj->isInitialized = TRUE;
      emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPushRtStackR2012b(&ld_emlrtRSI, emlrtRootTLSGlobal);
      SDRuReceiver_setupImplLocal(obj, &deviceStatus, errMsg_data, errMsg_size);
      emlrtPopRtStackR2012b(&ld_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPushRtStackR2012b(&ld_emlrtRSI, emlrtRootTLSGlobal);

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
        emlrtPushRtStackR2012b(&xf_emlrtRSI, emlrtRootTLSGlobal);
        if (!(deviceStatus == UsrpDriverNotCompatible)) {
        } else {
          emlrtPushRtStackR2012b(&rc_emlrtRSI, emlrtRootTLSGlobal);
          e_y = NULL;
          m19 = mxCreateCharArray(2, iv95);
          for (i = 0; i < 35; i++) {
            cv108[i] = cv109[i];
          }

          emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 35, m19, cv108);
          emlrtAssign(&e_y, m19);
          f_y = NULL;
          m19 = mxCreateCharArray(2, iv96);
          for (i = 0; i < 12; i++) {
            cv110[i] = cv111[i];
          }

          emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 12, m19, cv110);
          emlrtAssign(&f_y, m19);
          g_y = NULL;
          m19 = mxCreateCharArray(2, iv97);
          for (i = 0; i < 43; i++) {
            cv112[i] = cv113[i];
          }

          emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 43, m19, cv112);
          emlrtAssign(&g_y, m19);
          c_error(c_message(e_y, f_y, g_y, &h_emlrtMCI), &h_emlrtMCI);
          emlrtPopRtStackR2012b(&rc_emlrtRSI, emlrtRootTLSGlobal);
        }

        emlrtPopRtStackR2012b(&xf_emlrtRSI, emlrtRootTLSGlobal);
        break;

       case UsrpDriverNotResponding:
        emlrtPushRtStackR2012b(&vf_emlrtRSI, emlrtRootTLSGlobal);
        if (!(deviceStatus == UsrpDriverNotResponding)) {
        } else {
          emlrtPushRtStackR2012b(&rc_emlrtRSI, emlrtRootTLSGlobal);
          h_y = NULL;
          m19 = mxCreateCharArray(2, iv98);
          for (i = 0; i < 35; i++) {
            cv108[i] = cv114[i];
          }

          emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 35, m19, cv108);
          emlrtAssign(&h_y, m19);
          i_y = NULL;
          m19 = mxCreateCharArray(2, iv99);
          for (i = 0; i < 12; i++) {
            cv110[i] = cv111[i];
          }

          emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 12, m19, cv110);
          emlrtAssign(&i_y, m19);
          c_error(message(h_y, i_y, &h_emlrtMCI), &h_emlrtMCI);
          emlrtPopRtStackR2012b(&rc_emlrtRSI, emlrtRootTLSGlobal);
        }

        emlrtPopRtStackR2012b(&vf_emlrtRSI, emlrtRootTLSGlobal);
        break;

       case UsrpDriverBusy:
        emlrtPushRtStackR2012b(&tf_emlrtRSI, emlrtRootTLSGlobal);
        if (!(deviceStatus == UsrpDriverBusy)) {
        } else {
          emlrtPushRtStackR2012b(&rc_emlrtRSI, emlrtRootTLSGlobal);
          j_y = NULL;
          m19 = mxCreateCharArray(2, iv100);
          for (i = 0; i < 26; i++) {
            cv115[i] = cv116[i];
          }

          emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 26, m19, cv115);
          emlrtAssign(&j_y, m19);
          k_y = NULL;
          m19 = mxCreateCharArray(2, iv101);
          for (i = 0; i < 12; i++) {
            cv110[i] = cv111[i];
          }

          emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 12, m19, cv110);
          emlrtAssign(&k_y, m19);
          c_error(message(j_y, k_y, &h_emlrtMCI), &h_emlrtMCI);
          emlrtPopRtStackR2012b(&rc_emlrtRSI, emlrtRootTLSGlobal);
        }

        emlrtPopRtStackR2012b(&tf_emlrtRSI, emlrtRootTLSGlobal);
        break;

       case UsrpDriverError:
        emlrtPushRtStackR2012b(&rf_emlrtRSI, emlrtRootTLSGlobal);
        if (!(deviceStatus == UsrpDriverError)) {
        } else {
          emlrtPushRtStackR2012b(&rc_emlrtRSI, emlrtRootTLSGlobal);
          l_y = NULL;
          m19 = mxCreateCharArray(2, iv102);
          for (i = 0; i < 35; i++) {
            cv108[i] = cv117[i];
          }

          emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 35, m19, cv108);
          emlrtAssign(&l_y, m19);
          c_error(b_message(l_y, &h_emlrtMCI), &h_emlrtMCI);
          emlrtPopRtStackR2012b(&rc_emlrtRSI, emlrtRootTLSGlobal);
        }

        emlrtPopRtStackR2012b(&rf_emlrtRSI, emlrtRootTLSGlobal);
        break;
      }

      emlrtPopRtStackR2012b(&ld_emlrtRSI, emlrtRootTLSGlobal);
      if (deviceStatus == UsrpDriverSuccess) {
        emlrtPushRtStackR2012b(&ld_emlrtRSI, emlrtRootTLSGlobal);
        emlrtPopRtStackR2012b(&ld_emlrtRSI, emlrtRootTLSGlobal);
      } else {
        emlrtPushRtStackR2012b(&ld_emlrtRSI, emlrtRootTLSGlobal);
        emlrtPopRtStackR2012b(&ld_emlrtRSI, emlrtRootTLSGlobal);
      }

      emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
      obj->TunablePropsChanged = FALSE;
      emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    }

    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    if (obj->TunablePropsChanged) {
      emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
      obj->TunablePropsChanged = FALSE;
      emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
      for (i = 0; i < 4; i++) {
        for (i15 = 0; i15 < 4; i15++) {
          value[i15] = obj->tunablePropertyChanged[i15];
        }

        value[i] = FALSE;
        emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
        for (i15 = 0; i15 < 4; i15++) {
          obj->tunablePropertyChanged[i15] = value[i15];
        }

        emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
      }

      emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    }

    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    SDRuReceiver_stepImpl(SD, obj, SD->u2.f10.buffer);
    emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&if_emlrtRSI, emlrtRootTLSGlobal);
    P = SD->u2.f10.buffer[0];
    for (j = 0; j < 5119; j++) {
      P.re += SD->u2.f10.buffer[j + 1].re;
      P.im += SD->u2.f10.buffer[j + 1].im;
    }

    guard1 = FALSE;
    if ((P.re == 0.0) && (P.im == 0.0)) {
      /*  All zeros from radio (Bug?) */
      guard1 = TRUE;
    } else {
      /*  Automatic Gain Control */
      emlrtPushRtStackR2012b(&hf_emlrtRSI, emlrtRootTLSGlobal);
      b_obj = ObjAGC;
      if (!b_obj->isReleased) {
      } else {
        emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
        m_y = NULL;
        m19 = mxCreateCharArray(2, iv103);
        for (i = 0; i < 45; i++) {
          cv100[i] = cv101[i];
        }

        emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 45, m19, cv100);
        emlrtAssign(&m_y, m19);
        n_y = NULL;
        m19 = mxCreateCharArray(2, iv104);
        for (i = 0; i < 4; i++) {
          cv102[i] = cv103[i];
        }

        emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 4, m19, cv102);
        emlrtAssign(&n_y, m19);
        c_error(message(m_y, n_y, &b_emlrtMCI), &b_emlrtMCI);
        emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
      }

      if (!b_obj->isInitialized) {
        emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
        if (!b_obj->isInitialized) {
        } else {
          emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
          o_y = NULL;
          m19 = mxCreateCharArray(2, iv105);
          for (i = 0; i < 51; i++) {
            cv104[i] = cv105[i];
          }

          emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 51, m19, cv104);
          emlrtAssign(&o_y, m19);
          p_y = NULL;
          m19 = mxCreateCharArray(2, iv106);
          for (i = 0; i < 5; i++) {
            cv106[i] = cv107[i];
          }

          emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 5, m19, cv106);
          emlrtAssign(&p_y, m19);
          c_error(message(o_y, p_y, &b_emlrtMCI), &b_emlrtMCI);
          emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
        }

        emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
        b_obj->isInitialized = TRUE;
        emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
        emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
        emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
        emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
        emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
        emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
        emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
        emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
        emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
        emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
        emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
        emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
        emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
        for (i15 = 0; i15 < 8; i15++) {
          b_obj->inputVarSize1[i15] = (uint32_T)b_value[i15];
        }

        emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
        emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
        emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
        emlrtPushRtStackR2012b(&hg_emlrtRSI, emlrtRootTLSGlobal);
        emlrtPopRtStackR2012b(&hg_emlrtRSI, emlrtRootTLSGlobal);
        emlrtPushRtStackR2012b(&ig_emlrtRSI, emlrtRootTLSGlobal);
        b_obj->Gain = 1.0;
        emlrtPopRtStackR2012b(&ig_emlrtRSI, emlrtRootTLSGlobal);
        emlrtPushRtStackR2012b(&jg_emlrtRSI, emlrtRootTLSGlobal);
        emlrtPopRtStackR2012b(&jg_emlrtRSI, emlrtRootTLSGlobal);
        emlrtPushRtStackR2012b(&kg_emlrtRSI, emlrtRootTLSGlobal);
        emlrtPopRtStackR2012b(&kg_emlrtRSI, emlrtRootTLSGlobal);
        emlrtPushRtStackR2012b(&lg_emlrtRSI, emlrtRootTLSGlobal);
        emlrtPopRtStackR2012b(&lg_emlrtRSI, emlrtRootTLSGlobal);
        emlrtPushRtStackR2012b(&mg_emlrtRSI, emlrtRootTLSGlobal);
        emlrtPopRtStackR2012b(&mg_emlrtRSI, emlrtRootTLSGlobal);
        emlrtPushRtStackR2012b(&ng_emlrtRSI, emlrtRootTLSGlobal);
        b_obj->pDetectorIsRectifier = TRUE;
        emlrtPopRtStackR2012b(&ng_emlrtRSI, emlrtRootTLSGlobal);
        emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
        emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
        emlrtPushRtStackR2012b(&og_emlrtRSI, emlrtRootTLSGlobal);
        b_obj->Gain = 1.0;
        emlrtPopRtStackR2012b(&og_emlrtRSI, emlrtRootTLSGlobal);
        emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
        emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
        b_obj->TunablePropsChanged = FALSE;
        emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
        emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
      }

      emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
      if (b_obj->TunablePropsChanged) {
        emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
        b_obj->TunablePropsChanged = FALSE;
        emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
      }

      emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
      j = 0;
      exitg2 = FALSE;
      while ((exitg2 == FALSE) && (j < 8)) {
        if (b_obj->inputVarSize1[j] != (uint32_T)iv107[j]) {
          emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
          for (i15 = 0; i15 < 8; i15++) {
            b_obj->inputVarSize1[i15] = (uint32_T)b_value[i15];
          }

          emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
          exitg2 = TRUE;
        } else {
          j++;
        }
      }

      emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
      memcpy(&SD->u2.f10.b_buffer[0], &SD->u2.f10.buffer[0], 5120U * sizeof
             (creal_T));
      AGC_stepImpl(SD, b_obj, SD->u2.f10.b_buffer, SD->u2.f10.buffer);
      emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPopRtStackR2012b(&hf_emlrtRSI, emlrtRootTLSGlobal);

      /*  Increment processed data index */
      numBuffersProcessed++;

      /*     %% Find preamble in buffer */
      emlrtPushRtStackR2012b(&gf_emlrtRSI, emlrtRootTLSGlobal);

      /*  locateOFDMFrame: Locate 802.11a based preamble from input data stream. */
      /*  It is assumed that the received signal is still in the time domain.  The */
      /*  location of the start of the preamble will be returned, if not found -1 */
      /*  is returned */
      /* % Timing Estimate */
      /*  Quarter of short preamble sequence */
      /*  Cross correlate */
      emlrtPushRtStackR2012b(&tg_emlrtRSI, emlrtRootTLSGlobal);
      memcpy(&SD->u2.f10.b_buffer_data[0], &SD->u2.f10.buffer[0], 1231U * sizeof
             (creal_T));
      for (i15 = 0; i15 < 16; i15++) {
        rx_shortPreambleOFDM_data[i15].re = rx_shortPreambleOFDM[i15].re;
        rx_shortPreambleOFDM_data[i15].im = -rx_shortPreambleOFDM[i15].im;
      }

      xcorr(SD->u2.f10.b_buffer_data, rx_shortPreambleOFDM_data,
            SD->u2.f10.Phat_data, Phat_size);
      emlrtPopRtStackR2012b(&tg_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPushRtStackR2012b(&sg_emlrtRSI, emlrtRootTLSGlobal);
      buffer_size[0] = 1231;
      memcpy(&SD->u2.f10.c_buffer_data[0], &SD->u2.f10.buffer[0], 1231U * sizeof
             (creal_T));
      b_abs(SD->u2.f10.c_buffer_data, buffer_size, tmp_data, Phat_size);
      tmp_size[0] = Phat_size[0];
      j = Phat_size[0];
      for (i15 = 0; i15 < j; i15++) {
        b_tmp_data[i15] = tmp_data[i15];
      }

      power(b_tmp_data, tmp_size, tmp_data, Phat_size);
      b_xcorr(tmp_data, SD->u2.f10.Rhat_data, Phat_size);
      emlrtPopRtStackR2012b(&sg_emlrtRSI, emlrtRootTLSGlobal);

      /*  moving average */
      /*  Remove leading and tail zeros overlaps */
      emlrtVectorVectorIndexCheckR2012b(2461, 1, 1, 1224, &p_emlrtECI,
        emlrtRootTLSGlobal);
      emlrtVectorVectorIndexCheckR2012b(2461, 1, 1, 1224, &o_emlrtECI,
        emlrtRootTLSGlobal);

      /*  Calculate timing metric */
      emlrtPushRtStackR2012b(&rg_emlrtRSI, emlrtRootTLSGlobal);
      b_Phat_size[0] = 1224;
      memcpy(&SD->u2.f10.b_Phat_data[0], &SD->u2.f10.Phat_data[1230], 1224U *
             sizeof(creal_T));
      b_abs(SD->u2.f10.b_Phat_data, b_Phat_size, tmp_data, Phat_size);
      b_tmp_size[0] = Phat_size[0];
      j = Phat_size[0];
      for (i15 = 0; i15 < j; i15++) {
        b_tmp_data[i15] = tmp_data[i15];
      }

      power(b_tmp_data, b_tmp_size, tmp_data, Phat_size);
      Rhat_size[0] = 1224;
      memcpy(&Rhat_data[0], &SD->u2.f10.Rhat_data[1230], 1224U * sizeof(real_T));
      power(Rhat_data, Rhat_size, b_tmp_data, Phat_size);
      rdivide(tmp_data, b_tmp_data, M_data, Phat_size);
      emlrtPopRtStackR2012b(&rg_emlrtRSI, emlrtRootTLSGlobal);

      /*  Determine start of short preamble */
      /*  peak threshold after normalization (TUNABLE) */
      emlrtPushRtStackR2012b(&qg_emlrtRSI, emlrtRootTLSGlobal);
      locateShortpreamble(M_data, &preambleEstimatedLocation, &numPeaks);
      emlrtPopRtStackR2012b(&qg_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPopRtStackR2012b(&gf_emlrtRSI, emlrtRootTLSGlobal);
      estimate->delay = preambleEstimatedLocation;
      estimate->numPeaks = numPeaks;

      /*  Check if frame exists in correct location and whether it's duplicate */
      /*  %Check if full data frame exists in buffer */
      /*  %Check if preamble located */
      if ((preambleEstimatedLocation > -1.0) && (numBuffersProcessed - lastFound
           >= 2)) {
        err = TRUE;
      } else {
        err = FALSE;
      }

      /* Check if duplicate frame */
      /*     %% Recover found frame */
      if (err) {
        lastFound = numBuffersProcessed;

        /* Flag frame as found so duplicate frames are not processed */
        estimate->numProcessed++;

        /* Increment processed found frames */
        /*  Extract single frame from input buffer */
        if (preambleEstimatedLocation == preambleEstimatedLocation) {
        } else {
          emlrtPushRtStackR2012b(&ff_emlrtRSI, emlrtRootTLSGlobal);
          emlrtErrorWithMessageIdR2012b(emlrtRootTLSGlobal, &dc_emlrtRTEI,
            "EMLRT:runTime:RepeatedExprWithDifferentResultsInColonIndexing", 0);
          emlrtPopRtStackR2012b(&ff_emlrtRSI, emlrtRootTLSGlobal);
        }

        for (i15 = 0; i15 < 1280; i15++) {
          c_tmp_data[i15] = (int16_T)(1 + i15);
        }

        for (i15 = 0; i15 < 1280; i15++) {
          numPeaks = preambleEstimatedLocation + (real_T)c_tmp_data[i15];
          ib = (int32_T)emlrtIntegerCheckFastR2012b(numPeaks, &d_emlrtDCI,
            emlrtRootTLSGlobal);
          emlrtDynamicBoundsCheckFastR2012b(ib, 1, 5120, &w_emlrtBCI,
            emlrtRootTLSGlobal);
        }

        /*  Correct frequency offset */
        emlrtPushRtStackR2012b(&ef_emlrtRSI, emlrtRootTLSGlobal);
        b_estimate = *estimate;

        /*  coarseOFDMFreqEst: Frequency Correction based on the Schmidl and Cox */
        /*  method, utilizing halves of the short preamble from the 802.11a standard */
        emlrtVectorVectorIndexCheckR2012b(1280, 1, 1, 32, &r_emlrtECI,
          emlrtRootTLSGlobal);
        emlrtVectorVectorIndexCheckR2012b(1280, 1, 1, 32, &q_emlrtECI,
          emlrtRootTLSGlobal);
        emlrtPushRtStackR2012b(&ii_emlrtRSI, emlrtRootTLSGlobal);
        for (i15 = 0; i15 < 1280; i15++) {
          c_tmp_data[i15] = (int16_T)(1 + i15);
        }

        for (i15 = 0; i15 < 1280; i15++) {
          d_tmp_data[i15] = (int32_T)(preambleEstimatedLocation + (real_T)
            c_tmp_data[i15]);
        }

        for (i15 = 0; i15 < 1280; i15++) {
          c_tmp_data[i15] = (int16_T)(1 + i15);
        }

        for (i15 = 0; i15 < 1280; i15++) {
          e_tmp_data[i15] = (int32_T)(preambleEstimatedLocation + (real_T)
            c_tmp_data[i15]);
        }

        for (i15 = 0; i15 < 32; i15++) {
          buffer_data[i15].re = SD->u2.f10.buffer[d_tmp_data[i15] - 1].re *
            SD->u2.f10.buffer[e_tmp_data[32 + i15] - 1].re - -SD->
            u2.f10.buffer[d_tmp_data[i15] - 1].im * SD->
            u2.f10.buffer[e_tmp_data[32 + i15] - 1].im;
          buffer_data[i15].im = SD->u2.f10.buffer[d_tmp_data[i15] - 1].re *
            SD->u2.f10.buffer[e_tmp_data[32 + i15] - 1].im + -SD->
            u2.f10.buffer[d_tmp_data[i15] - 1].im * SD->
            u2.f10.buffer[e_tmp_data[32 + i15] - 1].re;
        }

        P = sum(buffer_data);
        emlrtPopRtStackR2012b(&ii_emlrtRSI, emlrtRootTLSGlobal);

        /* Cross-correlate preamble */
        b_estimate.phi = muDoubleScalarAtan2(P.im, P.re);

        /*  Determine phase angle between preamble halves */
        /*  Buffer not full */
        b_estimate.frequency[(int32_T)estimate->numProcessed - 1] =
          muDoubleScalarAtan2(P.im, P.re) / 4.0212385965949353E-5;

        /*  Convert angle to frequency */
        /*  Apply frequency estimate */
        emlrtPushRtStackR2012b(&hi_emlrtRSI, emlrtRootTLSGlobal);
        for (i15 = 0; i15 < 1280; i15++) {
          c_tmp_data[i15] = (int16_T)(1 + i15);
        }

        for (i15 = 0; i15 < 1280; i15++) {
          d_tmp_data[i15] = (int32_T)(preambleEstimatedLocation + (real_T)
            c_tmp_data[i15]);
        }

        for (i15 = 0; i15 < 1280; i15++) {
          SD->u2.f10.buffer_data[i15] = SD->u2.f10.buffer[d_tmp_data[i15] - 1];
        }

        freqCorrectOFDM(SD, &b_estimate, SD->u2.f10.buffer_data,
                        SD->u2.f10.rFreqShifted_data, Phat_size);
        emlrtPopRtStackR2012b(&hi_emlrtRSI, emlrtRootTLSGlobal);
        emlrtPopRtStackR2012b(&ef_emlrtRSI, emlrtRootTLSGlobal);

        /*  Equalize */
        emlrtPushRtStackR2012b(&df_emlrtRSI, emlrtRootTLSGlobal);
        hPreambleDemod = ObjPreambleDemod;
        hDataDemod = ObjDataDemod;
        *estimate = b_estimate;

        /*  equalizeOFDM: Equalize the entire OFDM frame through the use of both */
        /*  the long preamble from the 802.11a standard and four pilot tones in */
        /*  the data frames themselves.  The gains from the pilots are */
        /*  interpolated across frequency to fill the data frame and apply gains */
        /*  to all data subcarriers. */
        /*     %% Use Long Preamble frame to estimate channel in frequency domain */
        /*  Separate out received preambles */
        emlrtVectorVectorIndexCheckR2012b(1280, 1, 1, 160, &s_emlrtECI,
          emlrtRootTLSGlobal);

        /*  Demod */
        emlrtPushRtStackR2012b(&pi_emlrtRSI, emlrtRootTLSGlobal);
        memcpy(&rFreqShifted[0], &SD->u2.f10.rFreqShifted_data[192], sizeof
               (creal_T) << 6);
        e_SystemCore_step(hPreambleDemod, rFreqShifted, RLongFirst);
        emlrtPopRtStackR2012b(&pi_emlrtRSI, emlrtRootTLSGlobal);

        /* First half of long preamble */
        emlrtPushRtStackR2012b(&qi_emlrtRSI, emlrtRootTLSGlobal);
        memcpy(&b_rFreqShifted[0], &SD->u2.f10.rFreqShifted_data[256], sizeof
               (creal_T) << 6);
        e_SystemCore_step(hPreambleDemod, b_rFreqShifted, RLongSecond);
        emlrtPopRtStackR2012b(&qi_emlrtRSI, emlrtRootTLSGlobal);

        /* Second half of long preamble */
        /*     %% Preamble Equalization */
        /*  Get Equalizer tap gains */
        i15 = RLongFirst->size[0];
        ib = RLongSecond->size[0];
        emlrtDimSizeEqCheckFastR2012b(i15, ib, &t_emlrtECI, emlrtRootTLSGlobal);
        emlrtPushRtStackR2012b(&ri_emlrtRSI, emlrtRootTLSGlobal);
        i15 = R->size[0] * R->size[1] * R->size[2];
        R->size[0] = RLongFirst->size[0];
        R->size[1] = 2;
        R->size[2] = 1;
        emxEnsureCapacity((emxArray__common *)R, i15, (int32_T)sizeof(creal_T),
                          &v_emlrtRTEI);
        j = RLongFirst->size[0];
        for (i15 = 0; i15 < j; i15++) {
          R->data[i15] = RLongFirst->data[i15];
        }

        j = RLongSecond->size[0];
        for (i15 = 0; i15 < j; i15++) {
          R->data[i15 + R->size[0]] = RLongSecond->data[i15];
        }

        /*  Calculate Equalizer Taps with preamble symbols */
        /*  Calculate non-normalized channel gains */
        for (i15 = 0; i15 < 53; i15++) {
          ib = R->size[0];
          j = 1 + i15;
          emlrtDynamicBoundsCheckFastR2012b(j, 1, ib, &x_emlrtBCI,
            emlrtRootTLSGlobal);
        }

        j = R->size[0];
        for (i15 = 0; i15 < 2; i15++) {
          for (ib = 0; ib < 53; ib++) {
            b_R[ib + 53 * i15] = R->data[ib + j * i15];
          }
        }

        for (i15 = 0; i15 < 53; i15++) {
          b_rx_longPreamble[i15] = rx_longPreamble[i15];
          b_rx_longPreamble[53 + i15] = rx_longPreamble[i15];
        }

        b_rdivide(b_R, b_rx_longPreamble, RNormal);

        /*  Known is the original Long Preamble symbols  */
        /*  Scale channel gains */
        c_mean(RNormal, preambleEqGains);
        c_abs(RNormal, dv6);
        memcpy(&dv7[0], &dv6[0], 106U * sizeof(real_T));
        for (i = 0; i < 53; i++) {
          b_preambleEqGains[i].re = preambleEqGains[i].re;
          b_preambleEqGains[i].im = -preambleEqGains[i].im;
        }

        b_power(dv7, dv8);
        b_mean(dv8, dv9);
        c_rdivide(b_preambleEqGains, dv9, preambleEqGains);
        emlrtPopRtStackR2012b(&ri_emlrtRSI, emlrtRootTLSGlobal);

        /*  Separate data from preambles */
        /* recvData = recv(length(tx.preambles)+1:length(tx.preambles)+(hDataDemod.NumSymbols)*(tx.FFTLength+hDataDemod.CyclicPrefixLength)); */
        emlrtVectorVectorIndexCheckR2012b(1280, 1, 1, 960, &u_emlrtECI,
          emlrtRootTLSGlobal);

        /*  CG */
        /*  OFDM Demod */
        emlrtPushRtStackR2012b(&si_emlrtRSI, emlrtRootTLSGlobal);
        f_SystemCore_step(SD, hDataDemod, *(creal_T (*)[960])&
                          SD->u2.f10.rFreqShifted_data[320], Rraw, RXPilots);
        emlrtPopRtStackR2012b(&si_emlrtRSI, emlrtRootTLSGlobal);

        /*  Expand equalizer gains to full frame size */
        ib = 0;
        for (i = 0; i < 12; i++) {
          ia = 0;
          for (j = 0; j < 53; j++) {
            preambleGainsFull[ib] = preambleEqGains[ia];
            ia++;
            ib++;
          }
        }

        /*  Isolate pilot gains from preamble equalizer */
        /*  Needed to correctly adjust pilot gains */
        /*  Apply preamble equalizer gains to data and pilots */
        /* Correct pilots */
        for (i = 0; i < 3; i++) {
          iv108[i] = iv109[i];
        }

        for (i15 = 0; i15 < 3; i15++) {
          b_Rraw[i15] = Rraw->size[i15];
        }

        emlrtSizeEqCheckNDR2012b(iv108, b_Rraw, &v_emlrtECI, emlrtRootTLSGlobal);

        /* Correct data */
        /*     %% Pilot Equalization */
        /*  Get pilot-based equalizer gains */
        emlrtPushRtStackR2012b(&ti_emlrtRSI, emlrtRootTLSGlobal);

        /*  Calculate Equalizer Taps with pilot symbols */
        /*  Calculate non-normalized channel gains */
        for (i15 = 0; i15 < 12; i15++) {
          for (ib = 0; ib < 4; ib++) {
            numPeaks = preambleGainsFull[((int32_T)
              c_rx_pilotLocationsWithoutGuard[ib] + 53 * i15) - 1].re *
              RXPilots[ib + (i15 << 2)].re - preambleGainsFull[((int32_T)
              c_rx_pilotLocationsWithoutGuard[ib] + 53 * i15) - 1].im *
              RXPilots[ib + (i15 << 2)].im;
            preambleEstimatedLocation = preambleGainsFull[((int32_T)
              c_rx_pilotLocationsWithoutGuard[ib] + 53 * i15) - 1].re *
              RXPilots[ib + (i15 << 2)].im + preambleGainsFull[((int32_T)
              c_rx_pilotLocationsWithoutGuard[ib] + 53 * i15) - 1].im *
              RXPilots[ib + (i15 << 2)].re;
            if (preambleEstimatedLocation == 0.0) {
              PilotNormal[ib + (i15 << 2)].re = numPeaks / rx_pilots[ib + (i15 <<
                2)];
              PilotNormal[ib + (i15 << 2)].im = 0.0;
            } else if (numPeaks == 0.0) {
              PilotNormal[ib + (i15 << 2)].re = 0.0;
              PilotNormal[ib + (i15 << 2)].im = preambleEstimatedLocation /
                rx_pilots[ib + (i15 << 2)];
            } else {
              PilotNormal[ib + (i15 << 2)].re = numPeaks / rx_pilots[ib + (i15 <<
                2)];
              PilotNormal[ib + (i15 << 2)].im = preambleEstimatedLocation /
                rx_pilots[ib + (i15 << 2)];
            }
          }
        }

        /*  Scale channel gains */
        for (j = 0; j < 48; j++) {
          numPeaks = muDoubleScalarHypot(PilotNormal[j].re, PilotNormal[j].im);
          PilotEnergy[j] = numPeaks * numPeaks;
        }

        /*  Interpolate to data carrier size */
        emlrtPushRtStackR2012b(&ij_emlrtRSI, emlrtRootTLSGlobal);
        for (i15 = 0; i15 < 48; i15++) {
          if (-PilotNormal[i15].im == 0.0) {
            b_PilotNormal[i15].re = PilotNormal[i15].re / PilotEnergy[i15];
            b_PilotNormal[i15].im = 0.0;
          } else if (PilotNormal[i15].re == 0.0) {
            b_PilotNormal[i15].re = 0.0;
            b_PilotNormal[i15].im = -PilotNormal[i15].im / PilotEnergy[i15];
          } else {
            b_PilotNormal[i15].re = PilotNormal[i15].re / PilotEnergy[i15];
            b_PilotNormal[i15].im = -PilotNormal[i15].im / PilotEnergy[i15];
          }
        }

        resample(SD, b_PilotNormal, pilotEqGains);
        emlrtPopRtStackR2012b(&ij_emlrtRSI, emlrtRootTLSGlobal);
        emlrtPopRtStackR2012b(&ti_emlrtRSI, emlrtRootTLSGlobal);

        /*  Apply Equalizer from Pilots */
        /*  Save Gains for visualization */
        estimate->pilotEqGains.size[0] = 48;
        estimate->pilotEqGains.size[1] = 12;
        for (i15 = 0; i15 < 576; i15++) {
          estimate->pilotEqGains.data[i15] = pilotEqGains[i15];
        }

        estimate->preambleEqGains.size[0] = 53;
        for (i15 = 0; i15 < 53; i15++) {
          estimate->preambleEqGains.data[i15] = preambleEqGains[i15];
        }

        emlrtPopRtStackR2012b(&df_emlrtRSI, emlrtRootTLSGlobal);
        for (i15 = 0; i15 < 12; i15++) {
          j = rx_dataSubcarrierIndexies_size[1];
          for (ib = 0; ib < j; ib++) {
            preambleGainsFull_data[ib + rx_dataSubcarrierIndexies_size[1] * i15]
              = preambleGainsFull[((int32_T)rx_dataSubcarrierIndexies_data[ib] +
              53 * i15) - 1];
          }
        }

        for (i15 = 0; i15 < 12; i15++) {
          for (ib = 0; ib < 48; ib++) {
            b_preambleGainsFull_data[ib + 48 * i15].re =
              preambleGainsFull_data[ib + 48 * i15].re * Rraw->data[ib +
              Rraw->size[0] * i15].re - preambleGainsFull_data[ib + 48 * i15].im
              * Rraw->data[ib + Rraw->size[0] * i15].im;
            b_preambleGainsFull_data[ib + 48 * i15].im =
              preambleGainsFull_data[ib + 48 * i15].re * Rraw->data[ib +
              Rraw->size[0] * i15].im + preambleGainsFull_data[ib + 48 * i15].im
              * Rraw->data[ib + Rraw->size[0] * i15].re;
          }
        }

        for (i15 = 0; i15 < 12; i15++) {
          for (ib = 0; ib < 48; ib++) {
            RPostEqualizer[ib + 48 * i15].re = pilotEqGains[ib + 48 * i15].re *
              b_preambleGainsFull_data[ib + 48 * i15].re - pilotEqGains[ib + 48 *
              i15].im * b_preambleGainsFull_data[ib + 48 * i15].im;
            RPostEqualizer[ib + 48 * i15].im = pilotEqGains[ib + 48 * i15].re *
              b_preambleGainsFull_data[ib + 48 * i15].im + pilotEqGains[ib + 48 *
              i15].im * b_preambleGainsFull_data[ib + 48 * i15].re;
          }
        }

        /*  Demod subcarriers */
        /*  demodOFDMSubcarriers: Hard demodulate then compare received and */
        /*  transmitted data */
        /*  Demodulate subcarrier data */
        memcpy(&RLinear[0], &RPostEqualizer[0], 576U * sizeof(creal_T));
        RHard_size[0] = 563;
        for (i15 = 0; i15 < 563; i15++) {
          RHard_data[i15] = (RLinear[i15].re < 0.0);
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
        for (i15 = 0; i15 < 2; i15++) {
          errMsg_size[i15] = 1 + 562 * i15;
        }

        emlrtSubAssignSizeCheckR2012b(errMsg_size, 2, RHard_size, 1, &n_emlrtECI,
          emlrtRootTLSGlobal);
        for (i15 = 0; i15 < 563; i15++) {
          b_RHard_data[i15] = (int8_T)RHard_data[i15];
        }

        for (i15 = 0; i15 < 563; i15++) {
          messageBits_data[((int32_T)b_estimate.numProcessed + messageBits_size
                            [0] * i15) - 1] = b_RHard_data[i15];
        }
      }

      /*     %% Timeout */
      /* fprintf('%f\n',numBuffersProcessed); */
      /* fprintf('%f\n',timeoutDuration); */
      if (numBuffersProcessed > 48) {
        emlrtDimSizeGeqCheckFastR2012b(80, 7, &l_emlrtECI, emlrtRootTLSGlobal);
        recoveredMessage_size[0] = 1;
        recoveredMessage_size[1] = 7;
        for (i15 = 0; i15 < 7; i15++) {
          recoveredMessage_data[i15] = cv118[i15];
        }

        exitg1 = TRUE;
      } else {
        guard1 = TRUE;
      }
    }

    if (guard1 == TRUE) {
      emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, emlrtRootTLSGlobal);
    }
  }

  emxFree_creal_T(&R);
  emxFree_creal_T(&Rraw);
  emxFree_creal_T(&RLongSecond);
  emxFree_creal_T(&RLongFirst);

  /* % Process Messages */
  ia = 0;
  while (ia <= (int32_T)estimate->numProcessed - 1) {
    /*  CRC Check */
    emlrtPushRtStackR2012b(&cf_emlrtRSI, emlrtRootTLSGlobal);
    for (i15 = 0; i15 < 563; i15++) {
      RHard_data[i15] = (messageBits_data[((int32_T)(1.0 + (real_T)ia) +
        messageBits_size[0] * i15) - 1] > 0.0);
    }

    h_SystemCore_step(ObjDetect, RHard_data, msg_data, errMsg_size, &err);
    emlrtPopRtStackR2012b(&cf_emlrtRSI, emlrtRootTLSGlobal);
    if (!err) {
      /*  Convert Bits to characters */
      emlrtPushRtStackR2012b(&bf_emlrtRSI, emlrtRootTLSGlobal);
      msg_size[0] = errMsg_size[0];
      msg_size[1] = errMsg_size[1];
      j = errMsg_size[0] * errMsg_size[1];
      for (i15 = 0; i15 < j; i15++) {
        b_msg_data[i15] = (msg_data[i15] > 0);
      }

      OFDMbits2letters(b_msg_data, msg_size, f_tmp_data, Phat_size);
      messageEnd_size[0] = 1;
      messageEnd_size[1] = Phat_size[0];
      j = Phat_size[0];
      for (i15 = 0; i15 < j; i15++) {
        messageEnd_data[i15] = f_tmp_data[i15];
      }

      for (i15 = 0; i15 < 2; i15++) {
        iv110[i15] = (int8_T)messageEnd_size[i15];
      }

      j = iv110[1];
      for (i15 = 0; i15 < j; i15++) {
        numPeaks = muDoubleScalarFloor(messageEnd_data[i15]);
        if (muDoubleScalarIsNaN(numPeaks) || muDoubleScalarIsInf(numPeaks)) {
          numPeaks = 0.0;
        } else {
          numPeaks = muDoubleScalarRem(numPeaks, 256.0);
        }

        if (numPeaks < 0.0) {
          message_data[i15] = (int8_T)-(int8_T)(uint8_T)-numPeaks;
        } else {
          message_data[i15] = (int8_T)(uint8_T)numPeaks;
        }
      }

      emlrtPopRtStackR2012b(&bf_emlrtRSI, emlrtRootTLSGlobal);

      /* messageBits(recMessage,1:end-3) */
      /* Remove padding */
      emlrtPushRtStackR2012b(&af_emlrtRSI, emlrtRootTLSGlobal);
      if (iv110[1] == 0) {
        messageEnd_size[1] = 0;
      } else {
        emlrtPushRtStackR2012b(&wj_emlrtRSI, emlrtRootTLSGlobal);
        ib = 0;
        emlrtPushRtStackR2012b(&xj_emlrtRSI, emlrtRootTLSGlobal);
        emlrtPopRtStackR2012b(&xj_emlrtRSI, emlrtRootTLSGlobal);
        for (i = 1; i <= iv110[1] - 2; i++) {
          j = 1;
          while ((j <= 3) && (message_data[(i + j) - 2] == cv119[j - 1])) {
            j++;
          }

          if (j > 3) {
            matches_data[ib] = (int8_T)i;
            ib++;
          }
        }

        emlrtPushRtStackR2012b(&yj_emlrtRSI, emlrtRootTLSGlobal);
        emlrtPushRtStackR2012b(&ak_emlrtRSI, emlrtRootTLSGlobal);
        if (1 > ib) {
          b3 = FALSE;
        } else {
          b3 = (ib > 2147483646);
        }

        if (b3) {
          emlrtPushRtStackR2012b(&cc_emlrtRSI, emlrtRootTLSGlobal);
          check_forloop_overflow_error();
          emlrtPopRtStackR2012b(&cc_emlrtRSI, emlrtRootTLSGlobal);
        }

        emlrtPopRtStackR2012b(&ak_emlrtRSI, emlrtRootTLSGlobal);
        for (i = 0; i + 1 <= ib; i++) {
          match_out_data[i] = matches_data[i];
        }

        emlrtPopRtStackR2012b(&yj_emlrtRSI, emlrtRootTLSGlobal);
        messageEnd_size[1] = ib;
        for (i15 = 0; i15 < ib; i15++) {
          messageEnd_data[i15] = match_out_data[i15];
        }

        emlrtPopRtStackR2012b(&wj_emlrtRSI, emlrtRootTLSGlobal);
      }

      emlrtPopRtStackR2012b(&af_emlrtRSI, emlrtRootTLSGlobal);
      if (!(messageEnd_size[1] == 0)) {
        if (1.0 > messageEnd_data[0] - 1.0) {
          j = 0;
        } else {
          i15 = iv110[1];
          emlrtDynamicBoundsCheckFastR2012b(1, 1, i15, &v_emlrtBCI,
            emlrtRootTLSGlobal);
          i15 = iv110[1];
          ib = (int32_T)messageEnd_data[0] - 1;
          j = emlrtDynamicBoundsCheckFastR2012b(ib, 1, i15, &v_emlrtBCI,
            emlrtRootTLSGlobal);
        }

        emlrtDimSizeGeqCheckFastR2012b(80, j, &k_emlrtECI, emlrtRootTLSGlobal);
        for (i15 = 0; i15 < j; i15++) {
          g_tmp_data[i15] = 1 + i15;
        }

        recoveredMessage_size[0] = 1;
        recoveredMessage_size[1] = j;
        for (i15 = 0; i15 < j; i15++) {
          recoveredMessage_data[i15] = message_data[g_tmp_data[i15] - 1];
        }
      }
    } else {
      /* View corrupted messages */
      /* recoveredMessage = char(OFDMbits2letters(msg > 0).');%messageBits(recMessage,1:end-3) */
      /* fprintf('Corrupted Message: %s\n',recoveredMessage); */
      emlrtDimSizeGeqCheckFastR2012b(80, 9, &j_emlrtECI, emlrtRootTLSGlobal);
      recoveredMessage_size[0] = 1;
      recoveredMessage_size[1] = 9;
      for (i15 = 0; i15 < 9; i15++) {
        recoveredMessage_data[i15] = cv120[i15];
      }
    }

    ia++;
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, emlrtRootTLSGlobal);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(emlrtRootTLSGlobal);
}

/* End of code generation (PHYReceive.c) */
