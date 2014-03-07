/*
 * commP25sscaGen.c
 *
 * Code generation for function 'commP25sscaGen'
 *
 * C source code generated on: Thu Mar  6 23:19:56 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testSpectrumSenseP25.h"
#include "commP25sscaGen.h"
#include "testSpectrumSenseP25_emxutil.h"
#include "generateOFDMSignal.h"
#include "eml_int_forloop_overflow_check.h"
#include "fftshift.h"
#include "fft.h"
#include "testSpectrumSenseP25_mexutil.h"
#include "testSpectrumSenseP25_data.h"
#include <stdio.h>

/* Variable Definitions */
static emlrtRSInfo t_emlrtRSI = { 24, "indexIntRelop",
  "/Applications/MATLAB_R2013b.app/toolbox/shared/coder/coder/+coder/+internal/indexIntRelop.m"
};

static emlrtRSInfo wf_emlrtRSI = { 9, "eml_int_forloop_overflow_check",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"
};

static emlrtRSInfo dn_emlrtRSI = { 314, "colon",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/colon.m" };

static emlrtRSInfo en_emlrtRSI = { 329, "colon",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/colon.m" };

static emlrtRSInfo fn_emlrtRSI = { 336, "colon",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/colon.m" };

static emlrtRSInfo gn_emlrtRSI = { 337, "colon",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/colon.m" };

static emlrtRSInfo hn_emlrtRSI = { 344, "colon",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/colon.m" };

static emlrtRSInfo in_emlrtRSI = { 348, "colon",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/colon.m" };

static emlrtRSInfo jn_emlrtRSI = { 353, "colon",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/colon.m" };

static emlrtRSInfo kn_emlrtRSI = { 15, "commP25sscaGen",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/commP25sscaGen.m" };

static emlrtRSInfo ln_emlrtRSI = { 18, "commP25sscaGen",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/commP25sscaGen.m" };

static emlrtRSInfo mn_emlrtRSI = { 19, "commP25sscaGen",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/commP25sscaGen.m" };

static emlrtRSInfo nn_emlrtRSI = { 31, "commP25sscaGen",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/commP25sscaGen.m" };

static emlrtRSInfo on_emlrtRSI = { 41, "commP25sscaGen",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/commP25sscaGen.m" };

static emlrtRSInfo pn_emlrtRSI = { 46, "commP25sscaGen",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/commP25sscaGen.m" };

static emlrtRSInfo qn_emlrtRSI = { 49, "commP25sscaGen",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/commP25sscaGen.m" };

static emlrtRSInfo rn_emlrtRSI = { 50, "commP25sscaGen",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/commP25sscaGen.m" };

static emlrtRSInfo sn_emlrtRSI = { 56, "commP25sscaGen",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/commP25sscaGen.m" };

static emlrtRSInfo tn_emlrtRSI = { 63, "commP25sscaGen",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/commP25sscaGen.m" };

static emlrtRSInfo un_emlrtRSI = { 65, "commP25sscaGen",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/commP25sscaGen.m" };

static emlrtRSInfo vn_emlrtRSI = { 71, "commP25sscaGen",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/commP25sscaGen.m" };

static emlrtRSInfo wn_emlrtRSI = { 75, "commP25sscaGen",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/commP25sscaGen.m" };

static emlrtRSInfo xn_emlrtRSI = { 78, "commP25sscaGen",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/commP25sscaGen.m" };

static emlrtRSInfo yn_emlrtRSI = { 81, "commP25sscaGen",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/commP25sscaGen.m" };

static emlrtRSInfo ao_emlrtRSI = { 84, "commP25sscaGen",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/commP25sscaGen.m" };

static emlrtRSInfo bo_emlrtRSI = { 85, "commP25sscaGen",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/commP25sscaGen.m" };

static emlrtRSInfo co_emlrtRSI = { 86, "commP25sscaGen",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/commP25sscaGen.m" };

static emlrtRSInfo do_emlrtRSI = { 87, "commP25sscaGen",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/commP25sscaGen.m" };

static emlrtRSInfo eo_emlrtRSI = { 89, "commP25sscaGen",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/commP25sscaGen.m" };

static emlrtRSInfo fo_emlrtRSI = { 79, "colon",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/colon.m" };

static emlrtRSInfo go_emlrtRSI = { 282, "colon",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/colon.m" };

static emlrtRSInfo ho_emlrtRSI = { 283, "colon",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/colon.m" };

static emlrtRSInfo io_emlrtRSI = { 289, "colon",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/colon.m" };

static emlrtRSInfo jo_emlrtRSI = { 290, "colon",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/colon.m" };

static emlrtRSInfo ko_emlrtRSI = { 291, "colon",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/colon.m" };

static emlrtRSInfo lo_emlrtRSI = { 292, "colon",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/colon.m" };

static emlrtRSInfo mo_emlrtRSI = { 296, "colon",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/colon.m" };

static emlrtRSInfo no_emlrtRSI = { 299, "colon",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/colon.m" };

static emlrtRSInfo oo_emlrtRSI = { 293, "colon",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/colon.m" };

static emlrtRSInfo po_emlrtRSI = { 294, "colon",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/colon.m" };

static emlrtRSInfo qo_emlrtRSI = { 297, "colon",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/colon.m" };

static emlrtRSInfo ro_emlrtRSI = { 300, "colon",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/colon.m" };

static emlrtRSInfo so_emlrtRSI = { 301, "colon",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/colon.m" };

static emlrtRSInfo vp_emlrtRSI = { 86, "eml_matrix_vstride",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_matrix_vstride.m"
};

static emlrtRSInfo xp_emlrtRSI = { 16, "eml_matrix_npages",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_matrix_npages.m"
};

static emlrtRSInfo fq_emlrtRSI = { 12, "exp",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elfun/exp.m" };

static emlrtRSInfo gq_emlrtRSI = { 10, "eml_scalar_exp",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elfun/eml_scalar_exp.m"
};

static emlrtRSInfo sq_emlrtRSI = { 12, "round",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elfun/round.m" };

static emlrtMCInfo s_emlrtMCI = { 405, 5, "colon",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/colon.m" };

static emlrtMCInfo t_emlrtMCI = { 404, 15, "colon",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/colon.m" };

static emlrtMCInfo u_emlrtMCI = { 33, 9, "eml_fft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fft.m" };

static emlrtMCInfo v_emlrtMCI = { 32, 19, "eml_fft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fft.m" };

static emlrtRTEInfo x_emlrtRTEI = { 284, 1, "colon",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/colon.m" };

static emlrtRTEInfo y_emlrtRTEI = { 9, 27, "commP25sscaGen",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/commP25sscaGen.m" };

static emlrtRTEInfo cb_emlrtRTEI = { 35, 5, "commP25sscaGen",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/commP25sscaGen.m" };

static emlrtRTEInfo db_emlrtRTEI = { 39, 1, "commP25sscaGen",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/commP25sscaGen.m" };

static emlrtRTEInfo eb_emlrtRTEI = { 50, 1, "commP25sscaGen",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/commP25sscaGen.m" };

static emlrtDCInfo b_emlrtDCI = { 24, 5, "commP25sscaGen",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/commP25sscaGen.m", 1 };

static emlrtBCInfo p_emlrtBCI = { -1, -1, 24, 5, "input", "commP25sscaGen",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/commP25sscaGen.m", 0 };

static emlrtBCInfo q_emlrtBCI = { -1, -1, 26, 13, "input", "commP25sscaGen",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/commP25sscaGen.m", 0 };

static emlrtDCInfo c_emlrtDCI = { 26, 13, "commP25sscaGen",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/commP25sscaGen.m", 1 };

static emlrtECInfo d_emlrtECI = { -1, 26, 13, "commP25sscaGen",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/commP25sscaGen.m" };

static emlrtBCInfo r_emlrtBCI = { -1, -1, 37, 10, "input", "commP25sscaGen",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/commP25sscaGen.m", 0 };

static emlrtDCInfo d_emlrtDCI = { 37, 10, "commP25sscaGen",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/commP25sscaGen.m", 1 };

static emlrtECInfo e_emlrtECI = { -1, 37, 10, "commP25sscaGen",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/commP25sscaGen.m" };

static emlrtRTEInfo jb_emlrtRTEI = { 40, 1, "commP25sscaGen",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/commP25sscaGen.m" };

static emlrtRTEInfo kb_emlrtRTEI = { 41, 19, "commP25sscaGen",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/commP25sscaGen.m" };

static emlrtECInfo f_emlrtECI = { -1, 41, 16, "commP25sscaGen",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/commP25sscaGen.m" };

static emlrtBCInfo s_emlrtBCI = { -1, -1, 41, 9, "x", "commP25sscaGen",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/commP25sscaGen.m", 0 };

static emlrtDCInfo e_emlrtDCI = { 50, 14, "commP25sscaGen",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/commP25sscaGen.m", 1 };

static emlrtBCInfo t_emlrtBCI = { -1, -1, 50, 14, "XFFT1", "commP25sscaGen",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/commP25sscaGen.m", 0 };

static emlrtBCInfo u_emlrtBCI = { -1, -1, 50, 31, "XFFT1", "commP25sscaGen",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/commP25sscaGen.m", 0 };

static emlrtDCInfo f_emlrtDCI = { 50, 31, "commP25sscaGen",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/commP25sscaGen.m", 1 };

static emlrtRTEInfo lb_emlrtRTEI = { 55, 5, "commP25sscaGen",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/commP25sscaGen.m" };

static emlrtECInfo g_emlrtECI = { 2, 59, 6, "commP25sscaGen",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/commP25sscaGen.m" };

static emlrtRTEInfo mb_emlrtRTEI = { 64, 1, "commP25sscaGen",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/commP25sscaGen.m" };

static emlrtBCInfo v_emlrtBCI = { -1, -1, 65, 34, "XT", "commP25sscaGen",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/commP25sscaGen.m", 0 };

static emlrtBCInfo w_emlrtBCI = { -1, -1, 65, 12, "XRep", "commP25sscaGen",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/commP25sscaGen.m", 0 };

static emlrtECInfo h_emlrtECI = { -1, 65, 5, "commP25sscaGen",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/commP25sscaGen.m" };

static emlrtECInfo i_emlrtECI = { 2, 72, 14, "commP25sscaGen",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/commP25sscaGen.m" };

static emlrtRTEInfo nb_emlrtRTEI = { 82, 1, "commP25sscaGen",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/commP25sscaGen.m" };

static emlrtDCInfo g_emlrtDCI = { 39, 22, "commP25sscaGen",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/commP25sscaGen.m", 1 };

static emlrtDCInfo h_emlrtDCI = { 39, 22, "commP25sscaGen",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/commP25sscaGen.m", 4 };

static emlrtDCInfo i_emlrtDCI = { 81, 17, "commP25sscaGen",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/commP25sscaGen.m", 1 };

static emlrtDCInfo j_emlrtDCI = { 81, 17, "commP25sscaGen",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/commP25sscaGen.m", 4 };

static emlrtDCInfo k_emlrtDCI = { 35, 23, "commP25sscaGen",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/commP25sscaGen.m", 1 };

static emlrtBCInfo x_emlrtBCI = { 1, 65, 89, 12, "Sx", "commP25sscaGen",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/commP25sscaGen.m", 0 };

static emlrtDCInfo l_emlrtDCI = { 89, 12, "commP25sscaGen",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/commP25sscaGen.m", 1 };

static emlrtBCInfo y_emlrtBCI = { -1, -1, 89, 25, "Sx", "commP25sscaGen",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/commP25sscaGen.m", 0 };

static emlrtDCInfo m_emlrtDCI = { 89, 25, "commP25sscaGen",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/commP25sscaGen.m", 1 };

static emlrtBCInfo ab_emlrtBCI = { -1, -1, 89, 43, "M", "commP25sscaGen",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/commP25sscaGen.m", 0 };

static emlrtBCInfo bb_emlrtBCI = { -1, -1, 56, 23, "E", "commP25sscaGen",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/commP25sscaGen.m", 0 };

static emlrtBCInfo cb_emlrtBCI = { -1, -1, 41, 16, "xx", "commP25sscaGen",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/commP25sscaGen.m", 0 };

static emlrtRSInfo vq_emlrtRSI = { 32, "eml_fft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fft.m" };

static emlrtRSInfo wq_emlrtRSI = { 404, "colon",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/colon.m" };

static emlrtRSInfo cr_emlrtRSI = { 33, "eml_fft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fft.m" };

static emlrtRSInfo dr_emlrtRSI = { 405, "colon",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/colon.m" };

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
  static const int32_T iv104[2] = { 1, 21 };

  const mxArray *m19;
  char_T cv119[21];
  int32_T i;
  static const char_T cv120[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'p', 'm', 'a', 'x', 's', 'i', 'z', 'e' };

  int32_T i17;
  int32_T nm1d2;
  int32_T k;
  emxArray_creal_T *xx;
  int32_T vstride;
  emxArray_creal_T *x;
  int32_T npages;
  emxArray_creal_T *r3;
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

  emxArray_creal_T *X;
  int32_T b_X[2];
  int32_T b_x[2];
  emxArray_int32_T *r4;
  int32_T iv105[2];
  creal_T c_X[1024];
  int32_T tmp_size[2];
  const mxArray *c_y;
  static const int32_T iv106[2] = { 1, 38 };

  char_T cv121[38];
  static const char_T cv122[38] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'e', 'm', 'l', '_', 'f', 'f', 't', '_', 's', 'i',
    'z', 'e', 'M', 'u', 's', 't', 'B', 'e', 'P', 'o', 'w', 'e', 'r', '2' };

  int8_T XFFT2_size[2];
  static const int8_T iv107[2] = { 0, 64 };

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
  /* narginchk(4,4);              % check the number of input variables */
  /*  Definition of Parameters */
  st.site = &kn_emlrtRSI;
  b_st.site = &k_emlrtRSI;
  c_st.site = &l_emlrtRSI;
  N = 1.0 / dalpha;

  /*  observation time T in discrete domain */
  /*  window time Tw in discrete domain, Eq (18) */
  /*  number of overlap samples */
  st.site = &ln_emlrtRSI;
  st.site = &ln_emlrtRSI;
  b_st.site = &k_emlrtRSI;
  c_st.site = &l_emlrtRSI;
  P = 1.0 / (16.0 * dalpha);

  /*  Eq (19), we can also get N = P*L */
  st.site = &mn_emlrtRSI;
  b_st.site = &k_emlrtRSI;
  c_st.site = &l_emlrtRSI;
  d = 1.0 / N;
  st.site = &mn_emlrtRSI;
  b_st.site = &fo_emlrtRSI;
  c_st.site = &go_emlrtRSI;
  d_st.site = &dn_emlrtRSI;
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
    d_st.site = &en_emlrtRSI;
    if (muDoubleScalarIsInf(d)) {
      vlend2 = 0;
      anew = -1.0;
      y = 1.0;
      n_too_large = FALSE;
    } else {
      anew = -1.0;
      d_st.site = &fn_emlrtRSI;
      ndbl = muDoubleScalarFloor(2.0 / d + 0.5);
      d_st.site = &gn_emlrtRSI;
      y = ndbl * d;
      if (d > 0.0) {
        cdiff = (-1.0 + y) - 1.0;
      } else {
        cdiff = 1.0 - (-1.0 + y);
      }

      d_st.site = &hn_emlrtRSI;
      d_st.site = &hn_emlrtRSI;
      if (muDoubleScalarAbs(cdiff) < 4.4408920985006262E-16) {
        ndbl++;
        y = 1.0;
      } else if (cdiff > 0.0) {
        d_st.site = &in_emlrtRSI;
        y = -1.0 + (ndbl - 1.0) * d;
      } else {
        ndbl++;
        y += -1.0;
      }

      d_st.site = &jn_emlrtRSI;
      n_too_large = (2.147483647E+9 < ndbl);
      if (ndbl >= 0.0) {
        vlend2 = (int32_T)ndbl - 1;
      } else {
        vlend2 = -1;
      }
    }
  }

  c_st.site = &ho_emlrtRSI;
  if (!n_too_large) {
  } else {
    b_y = NULL;
    m19 = mxCreateCharArray(2, iv104);
    for (i = 0; i < 21; i++) {
      cv119[i] = cv120[i];
    }

    emlrtInitCharArrayR2013a(&c_st, 21, m19, cv119);
    emlrtAssign(&b_y, m19);
    d_st.site = &wq_emlrtRSI;
    e_st.site = &dr_emlrtRSI;
    b_error(&d_st, b_message(&e_st, b_y, &s_emlrtMCI), &t_emlrtMCI);
  }

  i17 = alphao->size[0] * alphao->size[1];
  alphao->size[0] = 1;
  alphao->size[1] = vlend2 + 1;
  emxEnsureCapacity(&b_st, (emxArray__common *)alphao, i17, (int32_T)sizeof
                    (real_T), &x_emlrtRTEI);
  if (vlend2 + 1 > 0) {
    alphao->data[0] = anew;
    if (vlend2 + 1 > 1) {
      alphao->data[vlend2] = y;
      c_st.site = &io_emlrtRSI;
      c_st.site = &jo_emlrtRSI;
      i17 = vlend2 + (vlend2 < 0);
      if (i17 >= 0) {
        nm1d2 = (int32_T)((uint32_T)i17 >> 1);
      } else {
        nm1d2 = ~(int32_T)((uint32_T)~i17 >> 1);
      }

      c_st.site = &ko_emlrtRSI;
      c_st.site = &ko_emlrtRSI;
      d_st.site = &wf_emlrtRSI;
      for (k = 1; k < nm1d2; k++) {
        c_st.site = &lo_emlrtRSI;
        cdiff = (real_T)k * d;
        c_st.site = &oo_emlrtRSI;
        alphao->data[k] = anew + cdiff;
        c_st.site = &po_emlrtRSI;
        alphao->data[vlend2 - k] = y - cdiff;
      }

      c_st.site = &mo_emlrtRSI;
      if (nm1d2 << 1 == vlend2) {
        c_st.site = &qo_emlrtRSI;
        alphao->data[nm1d2] = (anew + y) / 2.0;
      } else {
        c_st.site = &no_emlrtRSI;
        cdiff = (real_T)nm1d2 * d;
        c_st.site = &ro_emlrtRSI;
        alphao->data[nm1d2] = anew + cdiff;
        c_st.site = &so_emlrtRSI;
        alphao->data[nm1d2 + 1] = y - cdiff;
      }
    }
  }

  st.site = &mn_emlrtRSI;

  /*  cyclic frequency (alpha) */
  /*  spectral frequency (f) */
  /*  Input vector processing, the length of input vector will be made to N */
  if (0.0 < N) {
    i17 = (int32_T)emlrtIntegerCheckFastR2012b(N, &b_emlrtDCI, sp);
    input_data[emlrtDynamicBoundsCheckFastR2012b(i17, 1, 0, &p_emlrtBCI, sp) - 1]
      .re = 0.0;
    i17 = (int32_T)emlrtIntegerCheckFastR2012b(N, &b_emlrtDCI, sp);
    input_data[emlrtDynamicBoundsCheckFastR2012b(i17, 1, 0, &p_emlrtBCI, sp) - 1]
      .im = 0.0;

    /*  pad zeros */
  } else {
    if (1.0 > N) {
    } else {
      emlrtDynamicBoundsCheckFastR2012b(1, 1, input_size[0], &q_emlrtBCI, sp);
      i17 = (int32_T)emlrtIntegerCheckFastR2012b(rtNaN, &c_emlrtDCI, sp);
      emlrtDynamicBoundsCheckFastR2012b(i17, 1, input_size[0], &q_emlrtBCI, sp);
    }

    emlrtVectorVectorIndexCheckR2012b(0, 1, 1, 0, &d_emlrtECI, sp);
    input_size[0] = 0;

    /*  truncate input to length N */
  }

  /*  Implement Figure 3 in (1): Computation of the Complex Demodulates */
  /*  Construct input matrix in Figure 3, call it x */
  st.site = &nn_emlrtRSI;
  y = (P - 1.0) * 16.0;

  /*  number of elements in x matrix */
  /* xx = input; */
  emxInit_creal_T(sp, &xx, 1, &cb_emlrtRTEI, TRUE);
  if (0.0 < y + 64.0) {
    /* xx(NN) = 0;             % pad zeros */
    i17 = xx->size[0];
    xx->size[0] = input_size[0] + (int32_T)emlrtIntegerCheckFastR2012b(y + 64.0,
      &k_emlrtDCI, sp);
    emxEnsureCapacity(sp, (emxArray__common *)xx, i17, (int32_T)sizeof(creal_T),
                      &y_emlrtRTEI);
    vstride = input_size[0];
    for (i17 = 0; i17 < vstride; i17++) {
      xx->data[i17] = input_data[i17];
    }

    vstride = (int32_T)emlrtIntegerCheckFastR2012b(y + 64.0, &k_emlrtDCI, sp);
    for (i17 = 0; i17 < vstride; i17++) {
      xx->data[i17 + input_size[0]].re = 0.0;
      xx->data[i17 + input_size[0]].im = 0.0;
    }
  } else {
    if (1.0 > y + 64.0) {
    } else {
      emlrtDynamicBoundsCheckFastR2012b(1, 1, input_size[0], &r_emlrtBCI, sp);
      i17 = (int32_T)emlrtIntegerCheckFastR2012b(y + 64.0, &d_emlrtDCI, sp);
      emlrtDynamicBoundsCheckFastR2012b(i17, 1, input_size[0], &r_emlrtBCI, sp);
    }

    emlrtVectorVectorIndexCheckR2012b(0, 1, 1, 0, &e_emlrtECI, sp);
    i17 = xx->size[0];
    xx->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)xx, i17, (int32_T)sizeof(creal_T),
                      &y_emlrtRTEI);

    /*  truncate input to length NN */
  }

  b_emxInit_creal_T(sp, &x, 2, &db_emlrtRTEI, TRUE);
  i17 = x->size[0] * x->size[1];
  x->size[0] = 64;
  cdiff = emlrtNonNegativeCheckFastR2012b(P, &h_emlrtDCI, sp);
  x->size[1] = (int32_T)emlrtIntegerCheckFastR2012b(cdiff, &g_emlrtDCI, sp);
  emxEnsureCapacity(sp, (emxArray__common *)x, i17, (int32_T)sizeof(creal_T),
                    &y_emlrtRTEI);
  cdiff = emlrtNonNegativeCheckFastR2012b(P, &h_emlrtDCI, sp);
  vstride = (int32_T)emlrtIntegerCheckFastR2012b(cdiff, &g_emlrtDCI, sp) << 6;
  for (i17 = 0; i17 < vstride; i17++) {
    x->data[i17].re = 0.0;
    x->data[i17].im = 0.0;
  }

  /*  x matrix initialization */
  emlrtForLoopVectorCheckR2012b(0.0, 1.0, P - 1.0, mxDOUBLE_CLASS, (int32_T)((P
    - 1.0) + 1.0), &jb_emlrtRTEI, sp);
  k = 0;
  while (k <= (int32_T)((P - 1.0) + 1.0) - 1) {
    st.site = &on_emlrtRSI;
    cdiff = (real_T)k * 16.0;
    st.site = &on_emlrtRSI;
    if (cdiff == (real_T)k * 16.0) {
    } else {
      emlrtErrorWithMessageIdR2012b(sp, &kb_emlrtRTEI,
        "EMLRT:runTime:RepeatedExprWithDifferentResultsInColonIndexing", 0);
    }

    emlrtVectorVectorIndexCheckR2012b(xx->size[0], 1, 1, 64, &f_emlrtECI, sp);
    nm1d2 = x->size[1];
    emlrtDynamicBoundsCheckFastR2012b(k + 1, 1, nm1d2, &s_emlrtBCI, sp);
    for (i17 = 0; i17 < 64; i17++) {
      i = xx->size[0];
      npages = (int32_T)(cdiff + (1.0 + (real_T)i17));
      x->data[i17 + x->size[0] * k].re = xx->
        data[emlrtDynamicBoundsCheckFastR2012b(npages, 1, i, &cb_emlrtBCI, sp) -
        1].re;
      i = xx->size[0];
      npages = (int32_T)(cdiff + (1.0 + (real_T)i17));
      x->data[i17 + x->size[0] * k].im = xx->
        data[emlrtDynamicBoundsCheckFastR2012b(npages, 1, i, &cb_emlrtBCI, sp) -
        1].im;
    }

    k++;
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
  }

  emxFree_creal_T(&xx);
  b_emxInit_creal_T(sp, &r3, 2, &y_emlrtRTEI, TRUE);

  /*  Windowing */
  /*  Construct N'-point Hamming window */
  st.site = &pn_emlrtRSI;

  /*  Output of N'-point Hamming window */
  /*  Centered N'-point FFT (zero frequency in the 0 bin) */
  for (i17 = 0; i17 < 64; i17++) {
    for (i = 0; i < 64; i++) {
      dcv5[i + (i17 << 6)].re = dv7[i + (i17 << 6)];
      dcv5[i + (i17 << 6)].im = 0.0;
    }
  }

  i17 = r3->size[0] * r3->size[1];
  r3->size[0] = 64;
  r3->size[1] = x->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)r3, i17, (int32_T)sizeof(creal_T),
                    &y_emlrtRTEI);
  for (i17 = 0; i17 < 64; i17++) {
    vstride = x->size[1];
    for (i = 0; i < vstride; i++) {
      r3->data[i17 + r3->size[0] * i].re = 0.0;
      r3->data[i17 + r3->size[0] * i].im = 0.0;
      for (npages = 0; npages < 64; npages++) {
        cdiff = dcv5[i17 + (npages << 6)].re * x->data[npages + x->size[0] * i].
          re - 0.0 * x->data[npages + x->size[0] * i].im;
        y = dcv5[i17 + (npages << 6)].re * x->data[npages + x->size[0] * i].im +
          0.0 * x->data[npages + x->size[0] * i].re;
        r3->data[i17 + r3->size[0] * i].re += cdiff;
        r3->data[i17 + r3->size[0] * i].im += y;
      }
    }
  }

  st.site = &qn_emlrtRSI;
  fft(&st, r3, x);
  st.site = &qn_emlrtRSI;
  fftshift(&st, x);
  st.site = &rn_emlrtRSI;
  b_st.site = &k_emlrtRSI;
  c_st.site = &l_emlrtRSI;
  y = P / 2.0;
  emxFree_creal_T(&r3);
  if (y + 1.0 > P) {
    i17 = 1;
    i = 1;
  } else {
    i17 = x->size[1];
    i = (int32_T)emlrtIntegerCheckFastR2012b(y + 1.0, &e_emlrtDCI, sp);
    i17 = emlrtDynamicBoundsCheckFastR2012b(i, 1, i17, &t_emlrtBCI, sp);
    i = x->size[1];
    npages = (int32_T)P;
    i = emlrtDynamicBoundsCheckFastR2012b(npages, 1, i, &t_emlrtBCI, sp) + 1;
  }

  st.site = &rn_emlrtRSI;
  b_st.site = &k_emlrtRSI;
  c_st.site = &l_emlrtRSI;
  cdiff = P / 2.0;
  if (1.0 > cdiff) {
    vstride = 0;
  } else {
    npages = x->size[1];
    emlrtDynamicBoundsCheckFastR2012b(1, 1, npages, &u_emlrtBCI, sp);
    npages = x->size[1];
    nm1d2 = (int32_T)emlrtIntegerCheckFastR2012b(cdiff, &f_emlrtDCI, sp);
    vstride = emlrtDynamicBoundsCheckFastR2012b(nm1d2, 1, npages, &u_emlrtBCI,
      sp);
  }

  b_emxInit_creal_T(sp, &X, 2, &eb_emlrtRTEI, TRUE);
  npages = X->size[0] * X->size[1];
  X->size[0] = 64;
  X->size[1] = (i - i17) + vstride;
  emxEnsureCapacity(sp, (emxArray__common *)X, npages, (int32_T)sizeof(creal_T),
                    &y_emlrtRTEI);
  vlend2 = i - i17;
  for (npages = 0; npages < vlend2; npages++) {
    for (nm1d2 = 0; nm1d2 < 64; nm1d2++) {
      X->data[nm1d2 + X->size[0] * npages] = x->data[nm1d2 + x->size[0] * ((i17
        + npages) - 1)];
    }
  }

  for (npages = 0; npages < vstride; npages++) {
    for (nm1d2 = 0; nm1d2 < 64; nm1d2++) {
      X->data[nm1d2 + X->size[0] * ((npages + i) - i17)] = x->data[nm1d2 +
        x->size[0] * npages];
    }
  }

  /*  Downshift in frequency */
  i17 = x->size[0] * x->size[1];
  x->size[0] = 64;
  x->size[1] = (int32_T)P;
  emxEnsureCapacity(sp, (emxArray__common *)x, i17, (int32_T)sizeof(creal_T),
                    &y_emlrtRTEI);
  vstride = (int32_T)P << 6;
  for (i17 = 0; i17 < vstride; i17++) {
    x->data[i17].re = 0.0;
    x->data[i17].im = 0.0;
  }

  for (nm1d2 = 0; nm1d2 < 64; nm1d2++) {
    /*  length of l is Np */
    emlrtForLoopVectorCheckR2012b(0.0, 1.0, P - 1.0, mxDOUBLE_CLASS, (int32_T)
      ((P - 1.0) + 1.0), &lb_emlrtRTEI, sp);
    k = 0;
    while (k <= (int32_T)((P - 1.0) + 1.0) - 1) {
      /*  length of k is P */
      st.site = &sn_emlrtRSI;
      st.site = &sn_emlrtRSI;
      st.site = &sn_emlrtRSI;
      st.site = &sn_emlrtRSI;
      b_st.site = &k_emlrtRSI;
      c_st.site = &l_emlrtRSI;
      cdiff = 16.0 * ((real_T)k * -6.2831853071795862) * (-32.0 + (real_T)nm1d2);
      if (cdiff == 0.0) {
        cdiff = 0.0;
      } else {
        cdiff /= 64.0;
      }

      st.site = &sn_emlrtRSI;
      b_st.site = &fq_emlrtRSI;
      c_st.site = &gq_emlrtRSI;
      d_st.site = &k_emlrtRSI;
      i17 = x->size[1];
      x->data[nm1d2 + x->size[0] * (emlrtDynamicBoundsCheckFastR2012b(k + 1, 1,
        i17, &bb_emlrtBCI, sp) - 1)].re = muDoubleScalarCos(cdiff);
      i17 = x->size[1];
      x->data[nm1d2 + x->size[0] * (emlrtDynamicBoundsCheckFastR2012b(k + 1, 1,
        i17, &bb_emlrtBCI, sp) - 1)].im = muDoubleScalarSin(cdiff);
      k++;
      emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
    }

    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
  }

  for (i17 = 0; i17 < 2; i17++) {
    b_X[i17] = X->size[i17];
  }

  for (i17 = 0; i17 < 2; i17++) {
    b_x[i17] = x->size[i17];
  }

  emlrtSizeEqCheck2DFastR2012b(b_X, b_x, &g_emlrtECI, sp);
  i17 = X->size[0] * X->size[1];
  X->size[0] = 64;
  emxEnsureCapacity(sp, (emxArray__common *)X, i17, (int32_T)sizeof(creal_T),
                    &y_emlrtRTEI);
  nm1d2 = X->size[0];
  vlend2 = X->size[1];
  vstride = nm1d2 * vlend2;
  for (i17 = 0; i17 < vstride; i17++) {
    y = X->data[i17].re;
    cdiff = X->data[i17].im;
    ndbl = x->data[i17].re;
    d = x->data[i17].im;
    X->data[i17].re = y * ndbl - cdiff * d;
    X->data[i17].im = y * d + cdiff * ndbl;
  }

  /*  Output of Figure 3 */
  /*  Implement Figure 5 in (1): Implementation of the SSCA */
  /*  Replication, repeat the k-th column of XT (XT(:,k)) L times */
  st.site = &tn_emlrtRSI;
  y = P * 16.0;
  i17 = x->size[0] * x->size[1];
  x->size[0] = 64;
  x->size[1] = (int32_T)y;
  emxEnsureCapacity(sp, (emxArray__common *)x, i17, (int32_T)sizeof(creal_T),
                    &y_emlrtRTEI);
  vstride = (int32_T)y << 6;
  for (i17 = 0; i17 < vstride; i17++) {
    x->data[i17].re = 0.0;
    x->data[i17].im = 0.0;
  }

  emlrtForLoopVectorCheckR2012b(1.0, 1.0, P, mxDOUBLE_CLASS, (int32_T)P,
    &mb_emlrtRTEI, sp);
  k = 0;
  emxInit_int32_T(sp, &r4, 1, &y_emlrtRTEI, TRUE);
  while (k <= (int32_T)P - 1) {
    st.site = &un_emlrtRSI;
    y = ((1.0 + (real_T)k) - 1.0) * 16.0;
    st.site = &un_emlrtRSI;
    cdiff = (1.0 + (real_T)k) * 16.0;
    if (y + 1.0 > cdiff) {
      i17 = 0;
      i = 0;
    } else {
      i17 = x->size[1];
      i = (int32_T)(y + 1.0);
      i17 = emlrtDynamicBoundsCheckFastR2012b(i, 1, i17, &w_emlrtBCI, sp) - 1;
      i = x->size[1];
      npages = (int32_T)cdiff;
      i = emlrtDynamicBoundsCheckFastR2012b(npages, 1, i, &w_emlrtBCI, sp);
    }

    npages = r4->size[0];
    r4->size[0] = i - i17;
    emxEnsureCapacity(sp, (emxArray__common *)r4, npages, (int32_T)sizeof
                      (int32_T), &y_emlrtRTEI);
    vstride = i - i17;
    for (i = 0; i < vstride; i++) {
      r4->data[i] = i17 + i;
    }

    iv105[0] = 64;
    iv105[1] = r4->size[0];
    for (i17 = 0; i17 < 2; i17++) {
      b_X[i17] = 64 + -48 * i17;
    }

    emlrtSubAssignSizeCheckR2012b(iv105, 2, b_X, 2, &h_emlrtECI, sp);
    st.site = &un_emlrtRSI;
    i17 = X->size[1];
    i = k + 1;
    emlrtDynamicBoundsCheckFastR2012b(i, 1, i17, &v_emlrtBCI, &st);
    for (i17 = 0; i17 < 64; i17++) {
      for (i = 0; i < 16; i++) {
        c_X[i17 + (i << 6)].re = X->data[i17 + X->size[0] * k].re - X->data[i17
          + X->size[0] * k].im * 0.0;
        c_X[i17 + (i << 6)].im = X->data[i17 + X->size[0] * k].re * 0.0 +
          X->data[i17 + X->size[0] * k].im;
      }
    }

    vlend2 = r4->size[0];
    for (i17 = 0; i17 < vlend2; i17++) {
      for (i = 0; i < 64; i++) {
        x->data[i + x->size[0] * r4->data[i17]] = c_X[i + (i17 << 6)];
      }
    }

    k++;
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
  }

  emxFree_int32_T(&r4);
  emxFree_creal_T(&X);

  /*  Multiplication */
  /*  Convert input vector into a matrix, the vector first becomes a row */
  /*  vector, and repeat Np times. xc is (Np,N), the same size as XR */
  st.site = &vn_emlrtRSI;
  tmp_size[0] = 64;
  tmp_size[1] = input_size[0];
  for (i17 = 0; i17 < 2; i17++) {
    iv105[i17] = tmp_size[i17];
  }

  emlrtSizeEqCheckNDR2012b(*(int32_T (*)[2])x->size, iv105, &i_emlrtECI, sp);

  /*  Centered N-point FFT (zero frequency in the 0 bin) */
  st.site = &wn_emlrtRSI;
  b_st.site = &to_emlrtRSI;
  c_y = NULL;
  m19 = mxCreateCharArray(2, iv106);
  emxFree_creal_T(&x);
  for (i = 0; i < 38; i++) {
    cv121[i] = cv122[i];
  }

  emlrtInitCharArrayR2013a(&b_st, 38, m19, cv121);
  emlrtAssign(&c_y, m19);
  c_st.site = &vq_emlrtRSI;
  f_st.site = &cr_emlrtRSI;
  b_error(&c_st, b_message(&f_st, c_y, &u_emlrtMCI), &v_emlrtMCI);
  c_st.site = &kd_emlrtRSI;
  for (i17 = 0; i17 < 2; i17++) {
    XFFT2_size[i17] = iv107[i17];
  }

  st.site = &wn_emlrtRSI;
  for (dim = 0; dim < 2; dim++) {
    b_st.site = &cp_emlrtRSI;
    if (XFFT2_size[dim] <= 1) {
    } else {
      c_st.site = &up_emlrtRSI;
      i17 = XFFT2_size[dim];
      vlend2 = (int32_T)((uint32_T)i17 >> 1);
      c_st.site = &tp_emlrtRSI;
      d_st.site = &vp_emlrtRSI;
      vstride = 1;
      k = 1;
      while (k <= dim) {
        vstride = 0;
        k = 2;
      }

      c_st.site = &sp_emlrtRSI;
      d_st.site = &xp_emlrtRSI;
      npages = 1;
      k = dim + 2;
      while (k < 3) {
        npages <<= 6;
        k = 3;
      }

      c_st.site = &rp_emlrtRSI;
      c_st.site = &rp_emlrtRSI;
      c_st.site = &qp_emlrtRSI;
      c_st.site = &pp_emlrtRSI;
      c_st.site = &pp_emlrtRSI;
      d_st.site = &t_emlrtRSI;
      if (vlend2 << 1 == XFFT2_size[dim]) {
        c_st.site = &op_emlrtRSI;
        d_st.site = &wf_emlrtRSI;
        if (1 > npages) {
          b3 = FALSE;
        } else {
          b3 = (npages > 2147483646);
        }

        if (b3) {
          d_st.site = &xf_emlrtRSI;
          check_forloop_overflow_error(&d_st);
        }

        for (i = 1; i <= npages; i++) {
          c_st.site = &yi_emlrtRSI;
          c_st.site = &np_emlrtRSI;
          d_st.site = &wf_emlrtRSI;
          nm1d2 = 1;
          while (nm1d2 <= vstride) {
            c_st.site = &aj_emlrtRSI;
            c_st.site = &bj_emlrtRSI;
            c_st.site = &cj_emlrtRSI;
            c_st.site = &mp_emlrtRSI;
            d_st.site = &wf_emlrtRSI;
            for (k = 1; k <= vlend2; k++) {
              c_st.site = &gd_emlrtRSI;
              c_st.site = &hd_emlrtRSI;
            }

            nm1d2 = 2;
          }
        }
      } else {
        c_st.site = &lp_emlrtRSI;
        d_st.site = &wf_emlrtRSI;
        if (1 > npages) {
          b4 = FALSE;
        } else {
          b4 = (npages > 2147483646);
        }

        if (b4) {
          d_st.site = &xf_emlrtRSI;
          check_forloop_overflow_error(&d_st);
        }

        for (i = 1; i <= npages; i++) {
          c_st.site = &kp_emlrtRSI;
          c_st.site = &jp_emlrtRSI;
          d_st.site = &wf_emlrtRSI;
          nm1d2 = 1;
          while (nm1d2 <= vstride) {
            c_st.site = &ip_emlrtRSI;
            c_st.site = &hp_emlrtRSI;
            c_st.site = &gp_emlrtRSI;
            c_st.site = &fp_emlrtRSI;
            d_st.site = &wf_emlrtRSI;
            for (k = 1; k <= vlend2; k++) {
              c_st.site = &ep_emlrtRSI;
              c_st.site = &dp_emlrtRSI;
            }

            nm1d2 = 2;
          }
        }
      }
    }
  }

  /*  Output of Figure 5 */
  st.site = &xn_emlrtRSI;
  for (i17 = 0; i17 < 2; i17++) {
    XFFT2_size[i17] = iv107[i17];
  }

  /*  Convert M to Sx */
  st.site = &yn_emlrtRSI;
  y = 2.0 * N;
  Sx_size[0] = 65;
  cdiff = emlrtNonNegativeCheckFastR2012b(y + 1.0, &j_emlrtDCI, sp);
  Sx_size[1] = (int32_T)emlrtIntegerCheckFastR2012b(cdiff, &i_emlrtDCI, sp);
  cdiff = emlrtNonNegativeCheckFastR2012b(y + 1.0, &j_emlrtDCI, sp);
  vstride = 65 * (int32_T)emlrtIntegerCheckFastR2012b(cdiff, &i_emlrtDCI, sp);
  for (i17 = 0; i17 < vstride; i17++) {
    Sx_data[i17] = 0.0;
  }

  emlrtForLoopVectorCheckR2012b(1.0, 1.0, N, mxDOUBLE_CLASS, (int32_T)N,
    &nb_emlrtRTEI, sp);
  nm1d2 = 0;
  while (nm1d2 <= (int32_T)N - 1) {
    st.site = &ao_emlrtRSI;
    b_st.site = &k_emlrtRSI;
    c_st.site = &l_emlrtRSI;
    y = ((1.0 + (real_T)nm1d2) - 1.0) / N;
    st.site = &ao_emlrtRSI;
    b_st.site = &k_emlrtRSI;
    c_st.site = &l_emlrtRSI;
    st.site = &bo_emlrtRSI;
    b_st.site = &k_emlrtRSI;
    c_st.site = &l_emlrtRSI;
    st.site = &bo_emlrtRSI;
    b_st.site = &k_emlrtRSI;
    c_st.site = &l_emlrtRSI;
    cdiff = ((1.0 + (real_T)nm1d2) - 1.0) / N;
    st.site = &bo_emlrtRSI;
    b_st.site = &k_emlrtRSI;
    c_st.site = &l_emlrtRSI;
    st.site = &co_emlrtRSI;
    for (i17 = 0; i17 < 64; i17++) {
      b_k[i17] = 1.0 + 64.0 * ((0.015625 * (real_T)i17 - cdiff) / 2.0 + 0.5);
    }

    st.site = &do_emlrtRSI;
    for (i17 = 0; i17 < 64; i17++) {
      n[i17] = 1.0 + N * (((y + 0.015625 * (real_T)i17) - 1.0) + 1.0);
    }

    for (vlend2 = 0; vlend2 < 64; vlend2++) {
      st.site = &eo_emlrtRSI;
      b_st.site = &sq_emlrtRSI;
      st.site = &eo_emlrtRSI;
      b_st.site = &sq_emlrtRSI;
      cdiff = muDoubleScalarRound(b_k[vlend2]);
      i17 = (int32_T)emlrtIntegerCheckFastR2012b(cdiff, &l_emlrtDCI, sp);
      i = Sx_size[1];
      cdiff = muDoubleScalarRound(n[vlend2]);
      npages = (int32_T)emlrtIntegerCheckFastR2012b(cdiff, &m_emlrtDCI, sp);
      Sx_data[(emlrtDynamicBoundsCheckFastR2012b(i17, 1, 65, &x_emlrtBCI, sp) +
               Sx_size[0] * (emlrtDynamicBoundsCheckFastR2012b(npages, 1, i,
                 &y_emlrtBCI, sp) - 1)) - 1] = M_data
        [(emlrtDynamicBoundsCheckFastR2012b(nm1d2 + 1, 1, 0, &ab_emlrtBCI, sp) +
          XFFT2_size[0] * vlend2) - 1];
      emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
    }

    nm1d2++;
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (commP25sscaGen.c) */
