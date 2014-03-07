/*
 * commP25sscaGen.c
 *
 * Code generation for function 'commP25sscaGen'
 *
 * C source code generated on: Thu Mar  6 22:22:40 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testMACTransmitter.h"
#include "commP25sscaGen.h"
#include "testMACTransmitter_emxutil.h"
#include "OFDMDemodulator.h"
#include "eml_int_forloop_overflow_check.h"
#include "fftshift.h"
#include "fft.h"
#include "testMACTransmitter_mexutil.h"
#include "testMACTransmitter_data.h"
#include <stdio.h>

/* Variable Definitions */
static emlrtRSInfo do_emlrtRSI = { 314, "colon",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/colon.m" };

static emlrtRSInfo eo_emlrtRSI = { 329, "colon",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/colon.m" };

static emlrtRSInfo fo_emlrtRSI = { 336, "colon",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/colon.m" };

static emlrtRSInfo go_emlrtRSI = { 337, "colon",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/colon.m" };

static emlrtRSInfo ho_emlrtRSI = { 344, "colon",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/colon.m" };

static emlrtRSInfo io_emlrtRSI = { 348, "colon",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/colon.m" };

static emlrtRSInfo jo_emlrtRSI = { 353, "colon",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/colon.m" };

static emlrtRSInfo ko_emlrtRSI = { 15, "commP25sscaGen",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/commP25sscaGen.m" };

static emlrtRSInfo lo_emlrtRSI = { 18, "commP25sscaGen",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/commP25sscaGen.m" };

static emlrtRSInfo mo_emlrtRSI = { 19, "commP25sscaGen",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/commP25sscaGen.m" };

static emlrtRSInfo no_emlrtRSI = { 31, "commP25sscaGen",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/commP25sscaGen.m" };

static emlrtRSInfo oo_emlrtRSI = { 40, "commP25sscaGen",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/commP25sscaGen.m" };

static emlrtRSInfo po_emlrtRSI = { 45, "commP25sscaGen",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/commP25sscaGen.m" };

static emlrtRSInfo qo_emlrtRSI = { 48, "commP25sscaGen",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/commP25sscaGen.m" };

static emlrtRSInfo ro_emlrtRSI = { 49, "commP25sscaGen",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/commP25sscaGen.m" };

static emlrtRSInfo so_emlrtRSI = { 55, "commP25sscaGen",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/commP25sscaGen.m" };

static emlrtRSInfo to_emlrtRSI = { 62, "commP25sscaGen",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/commP25sscaGen.m" };

static emlrtRSInfo uo_emlrtRSI = { 64, "commP25sscaGen",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/commP25sscaGen.m" };

static emlrtRSInfo vo_emlrtRSI = { 70, "commP25sscaGen",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/commP25sscaGen.m" };

static emlrtRSInfo wo_emlrtRSI = { 74, "commP25sscaGen",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/commP25sscaGen.m" };

static emlrtRSInfo xo_emlrtRSI = { 77, "commP25sscaGen",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/commP25sscaGen.m" };

static emlrtRSInfo yo_emlrtRSI = { 80, "commP25sscaGen",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/commP25sscaGen.m" };

static emlrtRSInfo ap_emlrtRSI = { 83, "commP25sscaGen",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/commP25sscaGen.m" };

static emlrtRSInfo bp_emlrtRSI = { 84, "commP25sscaGen",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/commP25sscaGen.m" };

static emlrtRSInfo cp_emlrtRSI = { 85, "commP25sscaGen",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/commP25sscaGen.m" };

static emlrtRSInfo dp_emlrtRSI = { 86, "commP25sscaGen",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/commP25sscaGen.m" };

static emlrtRSInfo ep_emlrtRSI = { 88, "commP25sscaGen",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/commP25sscaGen.m" };

static emlrtRSInfo gp_emlrtRSI = { 282, "colon",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/colon.m" };

static emlrtRSInfo ip_emlrtRSI = { 289, "colon",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/colon.m" };

static emlrtRSInfo jp_emlrtRSI = { 290, "colon",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/colon.m" };

static emlrtRSInfo kp_emlrtRSI = { 291, "colon",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/colon.m" };

static emlrtRSInfo lp_emlrtRSI = { 292, "colon",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/colon.m" };

static emlrtRSInfo mp_emlrtRSI = { 296, "colon",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/colon.m" };

static emlrtRSInfo np_emlrtRSI = { 299, "colon",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/colon.m" };

static emlrtRSInfo op_emlrtRSI = { 293, "colon",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/colon.m" };

static emlrtRSInfo pp_emlrtRSI = { 294, "colon",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/colon.m" };

static emlrtRSInfo qp_emlrtRSI = { 297, "colon",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/colon.m" };

static emlrtRSInfo rp_emlrtRSI = { 300, "colon",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/colon.m" };

static emlrtRSInfo sp_emlrtRSI = { 301, "colon",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/colon.m" };

static emlrtRSInfo fr_emlrtRSI = { 12, "exp",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elfun/exp.m" };

static emlrtRSInfo gr_emlrtRSI = { 10, "eml_scalar_exp",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elfun/eml_scalar_exp.m"
};

static emlrtRSInfo sr_emlrtRSI = { 12, "round",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elfun/round.m" };

static emlrtMCInfo u_emlrtMCI = { 33, 9, "eml_fft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fft.m" };

static emlrtMCInfo v_emlrtMCI = { 32, 19, "eml_fft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fft.m" };

static emlrtRTEInfo eb_emlrtRTEI = { 284, 1, "colon",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/colon.m" };

static emlrtRTEInfo fb_emlrtRTEI = { 9, 27, "commP25sscaGen",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/commP25sscaGen.m" };

static emlrtRTEInfo ib_emlrtRTEI = { 38, 1, "commP25sscaGen",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/commP25sscaGen.m" };

static emlrtRTEInfo jb_emlrtRTEI = { 49, 1, "commP25sscaGen",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/commP25sscaGen.m" };

static emlrtDCInfo b_emlrtDCI = { 24, 5, "commP25sscaGen",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/commP25sscaGen.m", 1 };

static emlrtBCInfo q_emlrtBCI = { -1, -1, 24, 5, "input", "commP25sscaGen",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/commP25sscaGen.m", 0 };

static emlrtBCInfo r_emlrtBCI = { -1, -1, 26, 13, "input", "commP25sscaGen",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/commP25sscaGen.m", 0 };

static emlrtDCInfo c_emlrtDCI = { 26, 13, "commP25sscaGen",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/commP25sscaGen.m", 1 };

static emlrtECInfo h_emlrtECI = { -1, 26, 13, "commP25sscaGen",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/commP25sscaGen.m" };

static emlrtDCInfo d_emlrtDCI = { 34, 5, "commP25sscaGen",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/commP25sscaGen.m", 1 };

static emlrtBCInfo s_emlrtBCI = { -1, -1, 34, 5, "xx", "commP25sscaGen",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/commP25sscaGen.m", 0 };

static emlrtBCInfo t_emlrtBCI = { -1, -1, 36, 10, "xx", "commP25sscaGen",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/commP25sscaGen.m", 0 };

static emlrtDCInfo e_emlrtDCI = { 36, 10, "commP25sscaGen",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/commP25sscaGen.m", 1 };

static emlrtECInfo i_emlrtECI = { -1, 36, 10, "commP25sscaGen",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/commP25sscaGen.m" };

static emlrtRTEInfo rc_emlrtRTEI = { 39, 1, "commP25sscaGen",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/commP25sscaGen.m" };

static emlrtRTEInfo sc_emlrtRTEI = { 40, 19, "commP25sscaGen",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/commP25sscaGen.m" };

static emlrtECInfo j_emlrtECI = { -1, 40, 16, "commP25sscaGen",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/commP25sscaGen.m" };

static emlrtBCInfo u_emlrtBCI = { -1, -1, 40, 9, "x", "commP25sscaGen",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/commP25sscaGen.m", 0 };

static emlrtDCInfo f_emlrtDCI = { 49, 14, "commP25sscaGen",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/commP25sscaGen.m", 1 };

static emlrtBCInfo v_emlrtBCI = { -1, -1, 49, 14, "XFFT1", "commP25sscaGen",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/commP25sscaGen.m", 0 };

static emlrtBCInfo w_emlrtBCI = { -1, -1, 49, 31, "XFFT1", "commP25sscaGen",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/commP25sscaGen.m", 0 };

static emlrtDCInfo g_emlrtDCI = { 49, 31, "commP25sscaGen",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/commP25sscaGen.m", 1 };

static emlrtRTEInfo tc_emlrtRTEI = { 54, 5, "commP25sscaGen",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/commP25sscaGen.m" };

static emlrtECInfo k_emlrtECI = { 2, 58, 6, "commP25sscaGen",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/commP25sscaGen.m" };

static emlrtRTEInfo uc_emlrtRTEI = { 63, 1, "commP25sscaGen",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/commP25sscaGen.m" };

static emlrtBCInfo x_emlrtBCI = { -1, -1, 64, 34, "XT", "commP25sscaGen",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/commP25sscaGen.m", 0 };

static emlrtBCInfo y_emlrtBCI = { -1, -1, 64, 12, "XRep", "commP25sscaGen",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/commP25sscaGen.m", 0 };

static emlrtECInfo l_emlrtECI = { -1, 64, 5, "commP25sscaGen",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/commP25sscaGen.m" };

static emlrtECInfo m_emlrtECI = { 2, 71, 14, "commP25sscaGen",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/commP25sscaGen.m" };

static emlrtRTEInfo vc_emlrtRTEI = { 81, 1, "commP25sscaGen",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/commP25sscaGen.m" };

static emlrtDCInfo h_emlrtDCI = { 38, 22, "commP25sscaGen",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/commP25sscaGen.m", 1 };

static emlrtDCInfo i_emlrtDCI = { 38, 22, "commP25sscaGen",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/commP25sscaGen.m", 4 };

static emlrtDCInfo j_emlrtDCI = { 80, 17, "commP25sscaGen",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/commP25sscaGen.m", 1 };

static emlrtDCInfo k_emlrtDCI = { 80, 17, "commP25sscaGen",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/commP25sscaGen.m", 4 };

static emlrtBCInfo ab_emlrtBCI = { 1, 65, 88, 12, "Sx", "commP25sscaGen",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/commP25sscaGen.m", 0 };

static emlrtDCInfo l_emlrtDCI = { 88, 12, "commP25sscaGen",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/commP25sscaGen.m", 1 };

static emlrtBCInfo bb_emlrtBCI = { -1, -1, 88, 25, "Sx", "commP25sscaGen",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/commP25sscaGen.m", 0 };

static emlrtDCInfo m_emlrtDCI = { 88, 25, "commP25sscaGen",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/commP25sscaGen.m", 1 };

static emlrtBCInfo cb_emlrtBCI = { -1, -1, 88, 43, "M", "commP25sscaGen",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/commP25sscaGen.m", 0 };

static emlrtBCInfo db_emlrtBCI = { -1, -1, 55, 23, "E", "commP25sscaGen",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/commP25sscaGen.m", 0 };

static emlrtBCInfo eb_emlrtBCI = { -1, -1, 40, 16, "xx", "commP25sscaGen",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/commP25sscaGen.m", 0 };

static emlrtRSInfo obb_emlrtRSI = { 32, "eml_fft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fft.m" };

static emlrtRSInfo ubb_emlrtRSI = { 33, "eml_fft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fft.m" };

/* Function Definitions */
void commP25sscaGen(const emlrtStack *sp, creal_T input_data[1], int32_T
                    input_size[1], real_T dalpha, real_T Sx_data[195], int32_T
                    Sx_size[2], emxArray_real_T *alphao)
{
  real_T N;
  real_T P;
  real_T d;
  int32_T vlend2;
  real_T anew;
  real_T y;
  boolean_T n_too_large;
  real_T ndbl;
  real_T cdiff;
  const mxArray *b_y;
  static const int32_T iv123[2] = { 1, 21 };

  const mxArray *m21;
  char_T cv143[21];
  int32_T i;
  static const char_T cv144[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'p', 'm', 'a', 'x', 's', 'i', 'z', 'e' };

  int32_T i18;
  int32_T nm1d2;
  int32_T k;
  int32_T vstride;
  creal_T xx_data[1];
  emxArray_creal_T *x;
  emxArray_creal_T *r2;
  creal_T dcv5[4096];
  static const real_T dv7[4096] = { 0.080000000000000016, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.082285843331915354, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.089120655589669862, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.10043650933837528, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.11612094253961253, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.13601807624969486, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.15993016381464237, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.18761955616527015, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.21881106368040654,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.25319469114498255, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.29042871862175068, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.330143097617545, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.37194312879145824, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.41541338465421762, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.46012183827321207, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.50562415695024476, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.55146811819951347, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.59719810413784313,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.64235962961990467, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.68650385911577483, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.72919206744008125, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.76999999999999991, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.80852208922800328, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.84437548529455531, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.87720386104172, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.90668095332254417, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.93251380555079155, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.95444567923511281, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.97225860556151789,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.98577555166537589, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.9948621800635592, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.99942818376070441, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.99942818376070441, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.9948621800635592, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.98577555166537589, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.97225860556151789, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.95444567923511281, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.93251380555079155,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.90668095332254417, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.87720386104172,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.84437548529455531, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.80852208922800328, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.76999999999999991, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.72919206744008125, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.68650385911577483, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.64235962961990467, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.59719810413784313, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.55146811819951347, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.50562415695024476,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.46012183827321207, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.41541338465421762, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.37194312879145824, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.330143097617545, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.29042871862175068, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.25319469114498255, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.21881106368040654, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.18761955616527015, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.15993016381464237,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.13601807624969486, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.11612094253961253, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.10043650933837528, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.089120655589669862, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.082285843331915354, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.080000000000000016 };

  int32_T npages;
  emxArray_creal_T *X;
  int32_T b_X[2];
  int32_T b_x[2];
  emxArray_int32_T *r3;
  int32_T iv124[2];
  creal_T c_X[1024];
  int32_T tmp_size[2];
  const mxArray *c_y;
  static const int32_T iv125[2] = { 1, 38 };

  char_T cv145[38];
  static const char_T cv146[38] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'e', 'm', 'l', '_', 'f', 'f', 't', '_', 's', 'i',
    'z', 'e', 'M', 'u', 's', 't', 'B', 'e', 'P', 'o', 'w', 'e', 'r', '2' };

  int8_T XFFT2_size[2];
  static const int8_T iv126[2] = { 0, 64 };

  int32_T dim;
  boolean_T b3;
  boolean_T b4;
  real_T M_data[64];
  real_T b_k[64];
  real_T n[64];
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
  e_st.prev = &c_st;
  e_st.tls = c_st.tls;
  f_st.prev = &b_st;
  f_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);

  /*  This function is written according to (1) Figure 3 and Figure 5 of the */
  /*  reference: E. L. Da Costa, "Detection and Identification of */
  /*  Cyclostationary Signals". MS Thesis. 1996. (2) Section 3.2 of the */
  /*  reference: Eric April, "On the Implementation of the Strip Spectral */
  /*  Correlation Algorithm for Cyclic Spectrum Estimation". February, 1994. */
  /*    Copyright 2012 The MathWorks, Inc. */
  /*  fs is sampling frequency, df is spectral resolution, dalpha is cyclic */
  /*  resolution */
  /*  check the number of input variables */
  /*  Definition of Parameters */
  st.site = &ko_emlrtRSI;
  b_st.site = &m_emlrtRSI;
  c_st.site = &n_emlrtRSI;
  N = 1.0 / dalpha;

  /*  observation time T in discrete domain */
  /*  window time Tw in discrete domain, Eq (18) */
  /*  number of overlap samples */
  st.site = &lo_emlrtRSI;
  st.site = &lo_emlrtRSI;
  b_st.site = &m_emlrtRSI;
  c_st.site = &n_emlrtRSI;
  P = 1.0 / (16.0 * dalpha);

  /*  Eq (19), we can also get N = P*L */
  st.site = &mo_emlrtRSI;
  b_st.site = &m_emlrtRSI;
  c_st.site = &n_emlrtRSI;
  d = 1.0 / N;
  st.site = &mo_emlrtRSI;
  b_st.site = &fp_emlrtRSI;
  c_st.site = &gp_emlrtRSI;
  d_st.site = &do_emlrtRSI;
  if (muDoubleScalarIsNaN(d)) {
    vlend2 = 0;
    anew = rtNaN;
    y = 1.0;
    n_too_large = FALSE;
  } else if ((d == 0.0) || (d < 0.0)) {
    vlend2 = -1;
    anew = -1.0;
    y = 1.0;
    n_too_large = FALSE;
  } else {
    d_st.site = &eo_emlrtRSI;
    if (muDoubleScalarIsInf(d)) {
      vlend2 = 0;
      anew = -1.0;
      y = 1.0;
      n_too_large = FALSE;
    } else {
      anew = -1.0;
      d_st.site = &fo_emlrtRSI;
      ndbl = muDoubleScalarFloor(2.0 / d + 0.5);
      d_st.site = &go_emlrtRSI;
      y = ndbl * d;
      if (d > 0.0) {
        cdiff = (-1.0 + y) - 1.0;
      } else {
        cdiff = 1.0 - (-1.0 + y);
      }

      d_st.site = &ho_emlrtRSI;
      d_st.site = &ho_emlrtRSI;
      if (muDoubleScalarAbs(cdiff) < 4.4408920985006262E-16) {
        ndbl++;
        y = 1.0;
      } else if (cdiff > 0.0) {
        d_st.site = &io_emlrtRSI;
        y = -1.0 + (ndbl - 1.0) * d;
      } else {
        ndbl++;
        y += -1.0;
      }

      d_st.site = &jo_emlrtRSI;
      n_too_large = (2.147483647E+9 < ndbl);
      if (ndbl >= 0.0) {
        vlend2 = (int32_T)ndbl - 1;
      } else {
        vlend2 = -1;
      }
    }
  }

  c_st.site = &hp_emlrtRSI;
  if (!n_too_large) {
  } else {
    b_y = NULL;
    m21 = mxCreateCharArray(2, iv123);
    for (i = 0; i < 21; i++) {
      cv143[i] = cv144[i];
    }

    emlrtInitCharArrayR2013a(&c_st, 21, m21, cv143);
    emlrtAssign(&b_y, m21);
    d_st.site = &nbb_emlrtRSI;
    e_st.site = &tbb_emlrtRSI;
    c_error(&d_st, b_message(&e_st, b_y, &s_emlrtMCI), &t_emlrtMCI);
  }

  i18 = alphao->size[0] * alphao->size[1];
  alphao->size[0] = 1;
  alphao->size[1] = vlend2 + 1;
  emxEnsureCapacity(&b_st, (emxArray__common *)alphao, i18, (int32_T)sizeof
                    (real_T), &eb_emlrtRTEI);
  if (vlend2 + 1 > 0) {
    alphao->data[0] = anew;
    if (vlend2 + 1 > 1) {
      alphao->data[vlend2] = y;
      c_st.site = &ip_emlrtRSI;
      c_st.site = &jp_emlrtRSI;
      i18 = vlend2 + (vlend2 < 0);
      if (i18 >= 0) {
        nm1d2 = (int32_T)((uint32_T)i18 >> 1);
      } else {
        nm1d2 = ~(int32_T)((uint32_T)~i18 >> 1);
      }

      c_st.site = &kp_emlrtRSI;
      c_st.site = &kp_emlrtRSI;
      d_st.site = &dg_emlrtRSI;
      for (k = 1; k < nm1d2; k++) {
        c_st.site = &lp_emlrtRSI;
        cdiff = (real_T)k * d;
        c_st.site = &op_emlrtRSI;
        alphao->data[k] = anew + cdiff;
        c_st.site = &pp_emlrtRSI;
        alphao->data[vlend2 - k] = y - cdiff;
      }

      c_st.site = &mp_emlrtRSI;
      if (nm1d2 << 1 == vlend2) {
        c_st.site = &qp_emlrtRSI;
        alphao->data[nm1d2] = (anew + y) / 2.0;
      } else {
        c_st.site = &np_emlrtRSI;
        cdiff = (real_T)nm1d2 * d;
        c_st.site = &rp_emlrtRSI;
        alphao->data[nm1d2] = anew + cdiff;
        c_st.site = &sp_emlrtRSI;
        alphao->data[nm1d2 + 1] = y - cdiff;
      }
    }
  }

  st.site = &mo_emlrtRSI;

  /*  cyclic frequency (alpha) */
  /*  spectral frequency (f) */
  /*  Input vector processing, the length of input vector will be made to N */
  if (0.0 < N) {
    i18 = (int32_T)emlrtIntegerCheckFastR2012b(N, &b_emlrtDCI, sp);
    input_data[emlrtDynamicBoundsCheckFastR2012b(i18, 1, 0, &q_emlrtBCI, sp) - 1]
      .re = 0.0;
    i18 = (int32_T)emlrtIntegerCheckFastR2012b(N, &b_emlrtDCI, sp);
    input_data[emlrtDynamicBoundsCheckFastR2012b(i18, 1, 0, &q_emlrtBCI, sp) - 1]
      .im = 0.0;

    /*  pad zeros */
  } else {
    if (1.0 > N) {
    } else {
      emlrtDynamicBoundsCheckFastR2012b(1, 1, input_size[0], &r_emlrtBCI, sp);
      i18 = (int32_T)emlrtIntegerCheckFastR2012b(rtNaN, &c_emlrtDCI, sp);
      emlrtDynamicBoundsCheckFastR2012b(i18, 1, input_size[0], &r_emlrtBCI, sp);
    }

    emlrtVectorVectorIndexCheckR2012b(0, 1, 1, 0, &h_emlrtECI, sp);
    input_size[0] = 0;

    /*  truncate input to length N */
  }

  /*  Implement Figure 3 in (1): Computation of the Complex Demodulates */
  /*  Construct input matrix in Figure 3, call it x */
  st.site = &no_emlrtRSI;
  y = (P - 1.0) * 16.0;

  /*  number of elements in x matrix */
  vstride = input_size[0];
  for (i18 = 0; i18 < vstride; i18++) {
    xx_data[i18] = input_data[i18];
  }

  if (0.0 < y + 64.0) {
    i18 = (int32_T)emlrtIntegerCheckFastR2012b(y + 64.0, &d_emlrtDCI, sp);
    xx_data[emlrtDynamicBoundsCheckFastR2012b(i18, 1, 0, &s_emlrtBCI, sp) - 1].
      re = 0.0;
    i18 = (int32_T)emlrtIntegerCheckFastR2012b(y + 64.0, &d_emlrtDCI, sp);
    xx_data[emlrtDynamicBoundsCheckFastR2012b(i18, 1, 0, &s_emlrtBCI, sp) - 1].
      im = 0.0;

    /*  pad zeros */
  } else {
    if (1.0 > y + 64.0) {
    } else {
      emlrtDynamicBoundsCheckFastR2012b(1, 1, input_size[0], &t_emlrtBCI, sp);
      i18 = (int32_T)emlrtIntegerCheckFastR2012b(y + 64.0, &e_emlrtDCI, sp);
      emlrtDynamicBoundsCheckFastR2012b(i18, 1, input_size[0], &t_emlrtBCI, sp);
    }

    emlrtVectorVectorIndexCheckR2012b(0, 1, 1, 0, &i_emlrtECI, sp);

    /*  truncate input to length NN */
  }

  emxInit_creal_T(sp, &x, 2, &ib_emlrtRTEI, TRUE);
  i18 = x->size[0] * x->size[1];
  x->size[0] = 64;
  cdiff = emlrtNonNegativeCheckFastR2012b(P, &i_emlrtDCI, sp);
  x->size[1] = (int32_T)emlrtIntegerCheckFastR2012b(cdiff, &h_emlrtDCI, sp);
  emxEnsureCapacity(sp, (emxArray__common *)x, i18, (int32_T)sizeof(creal_T),
                    &fb_emlrtRTEI);
  cdiff = emlrtNonNegativeCheckFastR2012b(P, &i_emlrtDCI, sp);
  vstride = (int32_T)emlrtIntegerCheckFastR2012b(cdiff, &h_emlrtDCI, sp) << 6;
  for (i18 = 0; i18 < vstride; i18++) {
    x->data[i18].re = 0.0;
    x->data[i18].im = 0.0;
  }

  /*  x matrix initialization */
  emlrtForLoopVectorCheckR2012b(0.0, 1.0, P - 1.0, mxDOUBLE_CLASS, (int32_T)((P
    - 1.0) + 1.0), &rc_emlrtRTEI, sp);
  k = 0;
  while (k <= (int32_T)((P - 1.0) + 1.0) - 1) {
    st.site = &oo_emlrtRSI;
    cdiff = (real_T)k * 16.0;
    st.site = &oo_emlrtRSI;
    if (cdiff == (real_T)k * 16.0) {
    } else {
      emlrtErrorWithMessageIdR2012b(sp, &sc_emlrtRTEI,
        "EMLRT:runTime:RepeatedExprWithDifferentResultsInColonIndexing", 0);
    }

    emlrtVectorVectorIndexCheckR2012b(0, 1, 1, 64, &j_emlrtECI, sp);
    nm1d2 = x->size[1];
    emlrtDynamicBoundsCheckFastR2012b(k + 1, 1, nm1d2, &u_emlrtBCI, sp);
    for (i18 = 0; i18 < 64; i18++) {
      i = (int32_T)(cdiff + (1.0 + (real_T)i18));
      x->data[i18 + x->size[0] * k].re =
        xx_data[emlrtDynamicBoundsCheckFastR2012b(i, 1, 0, &eb_emlrtBCI, sp) - 1]
        .re;
      i = (int32_T)(cdiff + (1.0 + (real_T)i18));
      x->data[i18 + x->size[0] * k].im =
        xx_data[emlrtDynamicBoundsCheckFastR2012b(i, 1, 0, &eb_emlrtBCI, sp) - 1]
        .im;
    }

    k++;
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
  }

  emxInit_creal_T(sp, &r2, 2, &fb_emlrtRTEI, TRUE);

  /*  Windowing */
  /*  Construct N'-point Hamming window */
  st.site = &po_emlrtRSI;

  /*  Output of N'-point Hamming window */
  /*  Centered N'-point FFT (zero frequency in the 0 bin) */
  for (i18 = 0; i18 < 64; i18++) {
    for (i = 0; i < 64; i++) {
      dcv5[i + (i18 << 6)].re = dv7[i + (i18 << 6)];
      dcv5[i + (i18 << 6)].im = 0.0;
    }
  }

  i18 = r2->size[0] * r2->size[1];
  r2->size[0] = 64;
  r2->size[1] = x->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)r2, i18, (int32_T)sizeof(creal_T),
                    &fb_emlrtRTEI);
  for (i18 = 0; i18 < 64; i18++) {
    vstride = x->size[1];
    for (i = 0; i < vstride; i++) {
      r2->data[i18 + r2->size[0] * i].re = 0.0;
      r2->data[i18 + r2->size[0] * i].im = 0.0;
      for (npages = 0; npages < 64; npages++) {
        cdiff = dcv5[i18 + (npages << 6)].re * x->data[npages + x->size[0] * i].
          re - 0.0 * x->data[npages + x->size[0] * i].im;
        y = dcv5[i18 + (npages << 6)].re * x->data[npages + x->size[0] * i].im +
          0.0 * x->data[npages + x->size[0] * i].re;
        r2->data[i18 + r2->size[0] * i].re += cdiff;
        r2->data[i18 + r2->size[0] * i].im += y;
      }
    }
  }

  st.site = &qo_emlrtRSI;
  fft(&st, r2, x);
  st.site = &qo_emlrtRSI;
  fftshift(&st, x);
  st.site = &ro_emlrtRSI;
  b_st.site = &m_emlrtRSI;
  c_st.site = &n_emlrtRSI;
  y = P / 2.0;
  emxFree_creal_T(&r2);
  if (y + 1.0 > P) {
    i18 = 1;
    i = 1;
  } else {
    i18 = x->size[1];
    i = (int32_T)emlrtIntegerCheckFastR2012b(y + 1.0, &f_emlrtDCI, sp);
    i18 = emlrtDynamicBoundsCheckFastR2012b(i, 1, i18, &v_emlrtBCI, sp);
    i = x->size[1];
    npages = (int32_T)P;
    i = emlrtDynamicBoundsCheckFastR2012b(npages, 1, i, &v_emlrtBCI, sp) + 1;
  }

  st.site = &ro_emlrtRSI;
  b_st.site = &m_emlrtRSI;
  c_st.site = &n_emlrtRSI;
  cdiff = P / 2.0;
  if (1.0 > cdiff) {
    vstride = 0;
  } else {
    npages = x->size[1];
    emlrtDynamicBoundsCheckFastR2012b(1, 1, npages, &w_emlrtBCI, sp);
    npages = x->size[1];
    nm1d2 = (int32_T)emlrtIntegerCheckFastR2012b(cdiff, &g_emlrtDCI, sp);
    vstride = emlrtDynamicBoundsCheckFastR2012b(nm1d2, 1, npages, &w_emlrtBCI,
      sp);
  }

  emxInit_creal_T(sp, &X, 2, &jb_emlrtRTEI, TRUE);
  npages = X->size[0] * X->size[1];
  X->size[0] = 64;
  X->size[1] = (i - i18) + vstride;
  emxEnsureCapacity(sp, (emxArray__common *)X, npages, (int32_T)sizeof(creal_T),
                    &fb_emlrtRTEI);
  vlend2 = i - i18;
  for (npages = 0; npages < vlend2; npages++) {
    for (nm1d2 = 0; nm1d2 < 64; nm1d2++) {
      X->data[nm1d2 + X->size[0] * npages] = x->data[nm1d2 + x->size[0] * ((i18
        + npages) - 1)];
    }
  }

  for (npages = 0; npages < vstride; npages++) {
    for (nm1d2 = 0; nm1d2 < 64; nm1d2++) {
      X->data[nm1d2 + X->size[0] * ((npages + i) - i18)] = x->data[nm1d2 +
        x->size[0] * npages];
    }
  }

  /*  Downshift in frequency */
  i18 = x->size[0] * x->size[1];
  x->size[0] = 64;
  x->size[1] = (int32_T)P;
  emxEnsureCapacity(sp, (emxArray__common *)x, i18, (int32_T)sizeof(creal_T),
                    &fb_emlrtRTEI);
  vstride = (int32_T)P << 6;
  for (i18 = 0; i18 < vstride; i18++) {
    x->data[i18].re = 0.0;
    x->data[i18].im = 0.0;
  }

  for (nm1d2 = 0; nm1d2 < 64; nm1d2++) {
    /*  length of l is Np */
    emlrtForLoopVectorCheckR2012b(0.0, 1.0, P - 1.0, mxDOUBLE_CLASS, (int32_T)
      ((P - 1.0) + 1.0), &tc_emlrtRTEI, sp);
    k = 0;
    while (k <= (int32_T)((P - 1.0) + 1.0) - 1) {
      /*  length of k is P */
      st.site = &so_emlrtRSI;
      st.site = &so_emlrtRSI;
      st.site = &so_emlrtRSI;
      st.site = &so_emlrtRSI;
      b_st.site = &m_emlrtRSI;
      c_st.site = &n_emlrtRSI;
      cdiff = 16.0 * ((real_T)k * -6.2831853071795862) * (-32.0 + (real_T)nm1d2);
      if (cdiff == 0.0) {
        cdiff = 0.0;
      } else {
        cdiff /= 64.0;
      }

      st.site = &so_emlrtRSI;
      b_st.site = &fr_emlrtRSI;
      c_st.site = &gr_emlrtRSI;
      d_st.site = &m_emlrtRSI;
      i18 = x->size[1];
      x->data[nm1d2 + x->size[0] * (emlrtDynamicBoundsCheckFastR2012b(k + 1, 1,
        i18, &db_emlrtBCI, sp) - 1)].re = muDoubleScalarCos(cdiff);
      i18 = x->size[1];
      x->data[nm1d2 + x->size[0] * (emlrtDynamicBoundsCheckFastR2012b(k + 1, 1,
        i18, &db_emlrtBCI, sp) - 1)].im = muDoubleScalarSin(cdiff);
      k++;
      emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
    }

    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
  }

  for (i18 = 0; i18 < 2; i18++) {
    b_X[i18] = X->size[i18];
  }

  for (i18 = 0; i18 < 2; i18++) {
    b_x[i18] = x->size[i18];
  }

  emlrtSizeEqCheck2DFastR2012b(b_X, b_x, &k_emlrtECI, sp);
  i18 = X->size[0] * X->size[1];
  X->size[0] = 64;
  emxEnsureCapacity(sp, (emxArray__common *)X, i18, (int32_T)sizeof(creal_T),
                    &fb_emlrtRTEI);
  nm1d2 = X->size[0];
  vlend2 = X->size[1];
  vstride = nm1d2 * vlend2;
  for (i18 = 0; i18 < vstride; i18++) {
    y = X->data[i18].re;
    cdiff = X->data[i18].im;
    ndbl = x->data[i18].re;
    d = x->data[i18].im;
    X->data[i18].re = y * ndbl - cdiff * d;
    X->data[i18].im = y * d + cdiff * ndbl;
  }

  /*  Output of Figure 3 */
  /*  Implement Figure 5 in (1): Implementation of the SSCA */
  /*  Replication, repeat the k-th column of XT (XT(:,k)) L times */
  st.site = &to_emlrtRSI;
  y = P * 16.0;
  i18 = x->size[0] * x->size[1];
  x->size[0] = 64;
  x->size[1] = (int32_T)y;
  emxEnsureCapacity(sp, (emxArray__common *)x, i18, (int32_T)sizeof(creal_T),
                    &fb_emlrtRTEI);
  vstride = (int32_T)y << 6;
  for (i18 = 0; i18 < vstride; i18++) {
    x->data[i18].re = 0.0;
    x->data[i18].im = 0.0;
  }

  emlrtForLoopVectorCheckR2012b(1.0, 1.0, P, mxDOUBLE_CLASS, (int32_T)P,
    &uc_emlrtRTEI, sp);
  k = 0;
  emxInit_int32_T(sp, &r3, 1, &fb_emlrtRTEI, TRUE);
  while (k <= (int32_T)P - 1) {
    st.site = &uo_emlrtRSI;
    y = ((1.0 + (real_T)k) - 1.0) * 16.0;
    st.site = &uo_emlrtRSI;
    cdiff = (1.0 + (real_T)k) * 16.0;
    if (y + 1.0 > cdiff) {
      i18 = 0;
      i = 0;
    } else {
      i18 = x->size[1];
      i = (int32_T)(y + 1.0);
      i18 = emlrtDynamicBoundsCheckFastR2012b(i, 1, i18, &y_emlrtBCI, sp) - 1;
      i = x->size[1];
      npages = (int32_T)cdiff;
      i = emlrtDynamicBoundsCheckFastR2012b(npages, 1, i, &y_emlrtBCI, sp);
    }

    npages = r3->size[0];
    r3->size[0] = i - i18;
    emxEnsureCapacity(sp, (emxArray__common *)r3, npages, (int32_T)sizeof
                      (int32_T), &fb_emlrtRTEI);
    vstride = i - i18;
    for (i = 0; i < vstride; i++) {
      r3->data[i] = i18 + i;
    }

    iv124[0] = 64;
    iv124[1] = r3->size[0];
    for (i18 = 0; i18 < 2; i18++) {
      b_X[i18] = 64 + -48 * i18;
    }

    emlrtSubAssignSizeCheckR2012b(iv124, 2, b_X, 2, &l_emlrtECI, sp);
    st.site = &uo_emlrtRSI;
    i18 = X->size[1];
    i = k + 1;
    emlrtDynamicBoundsCheckFastR2012b(i, 1, i18, &x_emlrtBCI, &st);
    for (i18 = 0; i18 < 64; i18++) {
      for (i = 0; i < 16; i++) {
        c_X[i18 + (i << 6)].re = X->data[i18 + X->size[0] * k].re - X->data[i18
          + X->size[0] * k].im * 0.0;
        c_X[i18 + (i << 6)].im = X->data[i18 + X->size[0] * k].re * 0.0 +
          X->data[i18 + X->size[0] * k].im;
      }
    }

    vlend2 = r3->size[0];
    for (i18 = 0; i18 < vlend2; i18++) {
      for (i = 0; i < 64; i++) {
        x->data[i + x->size[0] * r3->data[i18]] = c_X[i + (i18 << 6)];
      }
    }

    k++;
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
  }

  emxFree_int32_T(&r3);
  emxFree_creal_T(&X);

  /*  Multiplication */
  /*  Convert input vector into a matrix, the vector first becomes a row */
  /*  vector, and repeat Np times. xc is (Np,N), the same size as XR */
  st.site = &vo_emlrtRSI;
  tmp_size[0] = 64;
  tmp_size[1] = input_size[0];
  for (i18 = 0; i18 < 2; i18++) {
    iv124[i18] = tmp_size[i18];
  }

  emlrtSizeEqCheckNDR2012b(*(int32_T (*)[2])x->size, iv124, &m_emlrtECI, sp);

  /*  Centered N-point FFT (zero frequency in the 0 bin) */
  st.site = &wo_emlrtRSI;
  b_st.site = &tp_emlrtRSI;
  c_y = NULL;
  m21 = mxCreateCharArray(2, iv125);
  emxFree_creal_T(&x);
  for (i = 0; i < 38; i++) {
    cv145[i] = cv146[i];
  }

  emlrtInitCharArrayR2013a(&b_st, 38, m21, cv145);
  emlrtAssign(&c_y, m21);
  c_st.site = &obb_emlrtRSI;
  f_st.site = &ubb_emlrtRSI;
  c_error(&c_st, b_message(&f_st, c_y, &u_emlrtMCI), &v_emlrtMCI);
  c_st.site = &nd_emlrtRSI;
  for (i18 = 0; i18 < 2; i18++) {
    XFFT2_size[i18] = iv126[i18];
  }

  st.site = &wo_emlrtRSI;
  for (dim = 0; dim < 2; dim++) {
    b_st.site = &cq_emlrtRSI;
    if (XFFT2_size[dim] <= 1) {
    } else {
      c_st.site = &uq_emlrtRSI;
      i18 = XFFT2_size[dim];
      vlend2 = (int32_T)((uint32_T)i18 >> 1);
      c_st.site = &tq_emlrtRSI;
      d_st.site = &vq_emlrtRSI;
      vstride = 1;
      k = 1;
      while (k <= dim) {
        vstride = 0;
        k = 2;
      }

      c_st.site = &sq_emlrtRSI;
      d_st.site = &xq_emlrtRSI;
      npages = 1;
      k = dim + 2;
      while (k < 3) {
        npages <<= 6;
        k = 3;
      }

      c_st.site = &rq_emlrtRSI;
      c_st.site = &rq_emlrtRSI;
      c_st.site = &qq_emlrtRSI;
      c_st.site = &pq_emlrtRSI;
      c_st.site = &pq_emlrtRSI;
      d_st.site = &v_emlrtRSI;
      if (vlend2 << 1 == XFFT2_size[dim]) {
        c_st.site = &oq_emlrtRSI;
        d_st.site = &dg_emlrtRSI;
        if (1 > npages) {
          b3 = FALSE;
        } else {
          b3 = (npages > 2147483646);
        }

        if (b3) {
          d_st.site = &eg_emlrtRSI;
          check_forloop_overflow_error(&d_st);
        }

        for (i = 1; i <= npages; i++) {
          c_st.site = &lj_emlrtRSI;
          c_st.site = &nq_emlrtRSI;
          d_st.site = &dg_emlrtRSI;
          nm1d2 = 1;
          while (nm1d2 <= vstride) {
            c_st.site = &hd_emlrtRSI;
            c_st.site = &mj_emlrtRSI;
            c_st.site = &id_emlrtRSI;
            c_st.site = &mq_emlrtRSI;
            d_st.site = &dg_emlrtRSI;
            for (k = 1; k <= vlend2; k++) {
              c_st.site = &jd_emlrtRSI;
              c_st.site = &kd_emlrtRSI;
            }

            nm1d2 = 2;
          }
        }
      } else {
        c_st.site = &lq_emlrtRSI;
        d_st.site = &dg_emlrtRSI;
        if (1 > npages) {
          b4 = FALSE;
        } else {
          b4 = (npages > 2147483646);
        }

        if (b4) {
          d_st.site = &eg_emlrtRSI;
          check_forloop_overflow_error(&d_st);
        }

        for (i = 1; i <= npages; i++) {
          c_st.site = &kq_emlrtRSI;
          c_st.site = &jq_emlrtRSI;
          d_st.site = &dg_emlrtRSI;
          nm1d2 = 1;
          while (nm1d2 <= vstride) {
            c_st.site = &iq_emlrtRSI;
            c_st.site = &hq_emlrtRSI;
            c_st.site = &gq_emlrtRSI;
            c_st.site = &fq_emlrtRSI;
            d_st.site = &dg_emlrtRSI;
            for (k = 1; k <= vlend2; k++) {
              c_st.site = &eq_emlrtRSI;
              c_st.site = &dq_emlrtRSI;
            }

            nm1d2 = 2;
          }
        }
      }
    }
  }

  /*  Output of Figure 5 */
  st.site = &xo_emlrtRSI;
  for (i18 = 0; i18 < 2; i18++) {
    XFFT2_size[i18] = iv126[i18];
  }

  /*  Convert M to Sx */
  st.site = &yo_emlrtRSI;
  y = 2.0 * N;
  Sx_size[0] = 65;
  cdiff = emlrtNonNegativeCheckFastR2012b(y + 1.0, &k_emlrtDCI, sp);
  Sx_size[1] = (int32_T)emlrtIntegerCheckFastR2012b(cdiff, &j_emlrtDCI, sp);
  cdiff = emlrtNonNegativeCheckFastR2012b(y + 1.0, &k_emlrtDCI, sp);
  vstride = 65 * (int32_T)emlrtIntegerCheckFastR2012b(cdiff, &j_emlrtDCI, sp);
  for (i18 = 0; i18 < vstride; i18++) {
    Sx_data[i18] = 0.0;
  }

  emlrtForLoopVectorCheckR2012b(1.0, 1.0, N, mxDOUBLE_CLASS, (int32_T)N,
    &vc_emlrtRTEI, sp);
  nm1d2 = 0;
  while (nm1d2 <= (int32_T)N - 1) {
    st.site = &ap_emlrtRSI;
    b_st.site = &m_emlrtRSI;
    c_st.site = &n_emlrtRSI;
    y = ((1.0 + (real_T)nm1d2) - 1.0) / N;
    st.site = &ap_emlrtRSI;
    b_st.site = &m_emlrtRSI;
    c_st.site = &n_emlrtRSI;
    st.site = &bp_emlrtRSI;
    b_st.site = &m_emlrtRSI;
    c_st.site = &n_emlrtRSI;
    st.site = &bp_emlrtRSI;
    b_st.site = &m_emlrtRSI;
    c_st.site = &n_emlrtRSI;
    cdiff = ((1.0 + (real_T)nm1d2) - 1.0) / N;
    st.site = &bp_emlrtRSI;
    b_st.site = &m_emlrtRSI;
    c_st.site = &n_emlrtRSI;
    st.site = &cp_emlrtRSI;
    for (i18 = 0; i18 < 64; i18++) {
      b_k[i18] = 1.0 + 64.0 * ((0.015625 * (real_T)i18 - cdiff) / 2.0 + 0.5);
    }

    st.site = &dp_emlrtRSI;
    for (i18 = 0; i18 < 64; i18++) {
      n[i18] = 1.0 + N * (((y + 0.015625 * (real_T)i18) - 1.0) + 1.0);
    }

    for (vlend2 = 0; vlend2 < 64; vlend2++) {
      st.site = &ep_emlrtRSI;
      b_st.site = &sr_emlrtRSI;
      st.site = &ep_emlrtRSI;
      b_st.site = &sr_emlrtRSI;
      cdiff = muDoubleScalarRound(b_k[vlend2]);
      i18 = (int32_T)emlrtIntegerCheckFastR2012b(cdiff, &l_emlrtDCI, sp);
      i = Sx_size[1];
      cdiff = muDoubleScalarRound(n[vlend2]);
      npages = (int32_T)emlrtIntegerCheckFastR2012b(cdiff, &m_emlrtDCI, sp);
      Sx_data[(emlrtDynamicBoundsCheckFastR2012b(i18, 1, 65, &ab_emlrtBCI, sp) +
               Sx_size[0] * (emlrtDynamicBoundsCheckFastR2012b(npages, 1, i,
                 &bb_emlrtBCI, sp) - 1)) - 1] = M_data
        [(emlrtDynamicBoundsCheckFastR2012b(nm1d2 + 1, 1, 0, &cb_emlrtBCI, sp) +
          XFFT2_size[0] * vlend2) - 1];
      emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
    }

    nm1d2++;
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (commP25sscaGen.c) */
