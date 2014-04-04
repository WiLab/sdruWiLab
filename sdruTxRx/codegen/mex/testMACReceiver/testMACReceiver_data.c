/*
 * testMACReceiver_data.c
 *
 * Code generation for function 'testMACReceiver_data'
 *
 * C source code generated on: Thu Apr  3 19:51:42 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testMACReceiver.h"
#include "testMACReceiver_data.h"

/* Variable Definitions */
const volatile char_T *emlrtBreakCheckR2012bFlagVar;
boolean_T isSetupsdruCalled;
emlrtRSInfo j_emlrtRSI = { 39, "randi",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/randfun/randi.m" };

emlrtRSInfo k_emlrtRSI = { 79, "rand",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/randfun/rand.m" };

emlrtRSInfo l_emlrtRSI = { 1, "OFDMBase",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/OFDMBase.m" };

emlrtRSInfo m_emlrtRSI = { 1, "System",
  "/opt/MATLAB/R2013a/toolbox/matlab/system/+matlab/System.p" };

emlrtRSInfo n_emlrtRSI = { 1, "System",
  "/opt/MATLAB/R2013a/toolbox/shared/system/coder/+matlab/+system/+coder/System.p"
};

emlrtRSInfo o_emlrtRSI = { 1, "SystemCore",
  "/opt/MATLAB/R2013a/toolbox/shared/system/coder/+matlab/+system/+coder/SystemCore.p"
};

emlrtRSInfo p_emlrtRSI = { 1, "SystemProp",
  "/opt/MATLAB/R2013a/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p"
};

emlrtRSInfo q_emlrtRSI = { 1, "OFDMModulator",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/OFDMModulator.m" };

emlrtRSInfo r_emlrtRSI = { 182, "OFDMModulator",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/OFDMModulator.m" };

emlrtRSInfo s_emlrtRSI = { 29, "log2",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/elfun/log2.m" };

emlrtRSInfo t_emlrtRSI = { 20, "eml_error",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_error.m" };

emlrtRSInfo u_emlrtRSI = { 1, "pvParse",
  "/opt/MATLAB/R2013a/toolbox/matlab/system/+matlab/+system/pvParse.p" };

emlrtRSInfo v_emlrtRSI = { 14, "sqrt",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/elfun/sqrt.m" };

emlrtRSInfo nb_emlrtRSI = { 345, "OFDMModulator",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/OFDMModulator.m" };

emlrtRSInfo ob_emlrtRSI = { 374, "OFDMModulator",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/OFDMModulator.m" };

emlrtRSInfo pb_emlrtRSI = { 375, "OFDMModulator",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/OFDMModulator.m" };

emlrtRSInfo qb_emlrtRSI = { 388, "OFDMModulator",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/OFDMModulator.m" };

emlrtRSInfo rb_emlrtRSI = { 11, "OFDMletters2bits",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/private/OFDMletters2bits.m"
};

emlrtRSInfo sb_emlrtRSI = { 7, "OFDMletters2bits",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/private/OFDMletters2bits.m"
};

emlrtRSInfo tb_emlrtRSI = { 30, "dec2bin",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/strfun/dec2bin.m" };

emlrtRSInfo ub_emlrtRSI = { 33, "dec2bin",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/strfun/dec2bin.m" };

emlrtRSInfo vb_emlrtRSI = { 141, "dec2bin",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/strfun/dec2bin.m" };

emlrtRSInfo wb_emlrtRSI = { 146, "dec2bin",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/strfun/dec2bin.m" };

emlrtRSInfo xb_emlrtRSI = { 38, "bitget",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/ops/bitget.m" };

emlrtRSInfo yb_emlrtRSI = { 101, "dec2bin",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/strfun/dec2bin.m" };

emlrtRSInfo ac_emlrtRSI = { 100, "dec2bin",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/strfun/dec2bin.m" };

emlrtRSInfo bc_emlrtRSI = { 93, "dec2bin",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/strfun/dec2bin.m" };

emlrtRSInfo cc_emlrtRSI = { 12, "eml_int_forloop_overflow_check",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"
};

emlrtRSInfo ec_emlrtRSI = { 1, "CRCGenerator",
  "/opt/MATLAB/R2013a/toolbox/comm/comm/+commcodegen/CRCGenerator.p" };

emlrtRSInfo fc_emlrtRSI = { 1, "setProp",
  "/opt/MATLAB/R2013a/toolbox/matlab/system/+matlab/+system/setProp.p" };

emlrtRSInfo gc_emlrtRSI = { 1, "Nondirect",
  "/opt/MATLAB/R2013a/toolbox/shared/system/coder/+matlab/+system/+mixin/+coder/Nondirect.p"
};

emlrtRSInfo hc_emlrtRSI = { 1, "BPSKModulator",
  "/opt/MATLAB/R2013a/toolbox/comm/comm/+commcodegen/BPSKModulator.p" };

emlrtRSInfo ic_emlrtRSI = { 52, "step",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/scomp/step.m" };

emlrtRSInfo jc_emlrtRSI = { 185, "eml_sort_idx",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_sort_idx.m" };

emlrtRSInfo kc_emlrtRSI = { 102, "OFDMBase",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/OFDMBase.m" };

emlrtRSInfo lc_emlrtRSI = { 42, "unique",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/ops/unique.m" };

emlrtRSInfo mc_emlrtRSI = { 228, "unique",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/ops/unique.m" };

emlrtRSInfo nc_emlrtRSI = { 218, "unique",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/ops/unique.m" };

emlrtRSInfo oc_emlrtRSI = { 207, "unique",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/ops/unique.m" };

emlrtRSInfo pc_emlrtRSI = { 194, "unique",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/ops/unique.m" };

emlrtRSInfo qc_emlrtRSI = { 169, "unique",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/ops/unique.m" };

emlrtRSInfo rc_emlrtRSI = { 15, "errorIf",
  "/opt/MATLAB/R2013a/toolbox/shared/coder/coder/+coder/+internal/errorIf.m" };

emlrtRSInfo cd_emlrtRSI = { 1, "OFDMDemodulator",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/OFDMDemodulator.m" };

emlrtRSInfo dd_emlrtRSI = { 73, "OFDMDemodulator",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/OFDMDemodulator.m" };

emlrtRSInfo ed_emlrtRSI = { 74, "OFDMDemodulator",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/OFDMDemodulator.m" };

emlrtRSInfo fd_emlrtRSI = { 75, "OFDMDemodulator",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/OFDMDemodulator.m" };

emlrtRSInfo gd_emlrtRSI = { 76, "OFDMDemodulator",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/OFDMDemodulator.m" };

emlrtRSInfo hd_emlrtRSI = { 77, "OFDMDemodulator",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/OFDMDemodulator.m" };

emlrtRSInfo id_emlrtRSI = { 78, "OFDMDemodulator",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/OFDMDemodulator.m" };

emlrtRSInfo jd_emlrtRSI = { 80, "OFDMDemodulator",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/OFDMDemodulator.m" };

emlrtRSInfo ld_emlrtRSI = { 1, "SDRuBase",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdru/+comm/+internal/SDRuBase.p" };

emlrtRSInfo ud_emlrtRSI = { 24, "eml_all_or_any",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_all_or_any.m" };

emlrtRSInfo vd_emlrtRSI = { 27, "eml_all_or_any",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_all_or_any.m" };

emlrtRSInfo xd_emlrtRSI = { 9, "warning",
  "/opt/MATLAB/R2013a/toolbox/shared/coder/coder/+coder/+internal/warning.m" };

emlrtRSInfo yd_emlrtRSI = { 16, "eml_warning",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_warning.m" };

emlrtRSInfo se_emlrtRSI = { 1, "CRCDetector",
  "/opt/MATLAB/R2013a/toolbox/comm/comm/+commcodegen/CRCDetector.p" };

emlrtRSInfo jf_emlrtRSI = { 6, "openDataConnection",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdru/usrp_uhd_mapi/openDataConnection.m"
};

emlrtRSInfo kf_emlrtRSI = { 138, "mapiPrivate",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdru/usrp_uhd_mapi/mapiPrivate.m" };

emlrtRSInfo lf_emlrtRSI = { 141, "mapiPrivate",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdru/usrp_uhd_mapi/mapiPrivate.m" };

emlrtRSInfo mf_emlrtRSI = { 146, "mapiPrivate",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdru/usrp_uhd_mapi/mapiPrivate.m" };

emlrtRSInfo nf_emlrtRSI = { 151, "mapiPrivate",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdru/usrp_uhd_mapi/mapiPrivate.m" };

emlrtRSInfo of_emlrtRSI = { 152, "mapiPrivate",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdru/usrp_uhd_mapi/mapiPrivate.m" };

emlrtRSInfo pf_emlrtRSI = { 248, "mapiPrivate",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdru/usrp_uhd_mapi/mapiPrivate.m" };

emlrtRSInfo qf_emlrtRSI = { 249, "mapiPrivate",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdru/usrp_uhd_mapi/mapiPrivate.m" };

emlrtRSInfo rf_emlrtRSI = { 73, "reportSDRuStatus",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdru/reportSDRuStatus.m" };

emlrtRSInfo sf_emlrtRSI = { 71, "reportSDRuStatus",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdru/reportSDRuStatus.m" };

emlrtRSInfo tf_emlrtRSI = { 63, "reportSDRuStatus",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdru/reportSDRuStatus.m" };

emlrtRSInfo uf_emlrtRSI = { 61, "reportSDRuStatus",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdru/reportSDRuStatus.m" };

emlrtRSInfo vf_emlrtRSI = { 53, "reportSDRuStatus",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdru/reportSDRuStatus.m" };

emlrtRSInfo wf_emlrtRSI = { 51, "reportSDRuStatus",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdru/reportSDRuStatus.m" };

emlrtRSInfo xf_emlrtRSI = { 42, "reportSDRuStatus",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdru/reportSDRuStatus.m" };

emlrtRSInfo yf_emlrtRSI = { 35, "reportSDRuStatus",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdru/reportSDRuStatus.m" };

emlrtRSInfo ag_emlrtRSI = { 17, "getSDRuDriverVersion",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdru/usrp_uhd_mapi/getSDRuDriverVersion.m"
};

emlrtRSInfo bg_emlrtRSI = { 85, "mapiPrivate",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdru/usrp_uhd_mapi/mapiPrivate.m" };

emlrtRSInfo cg_emlrtRSI = { 86, "mapiPrivate",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdru/usrp_uhd_mapi/mapiPrivate.m" };

emlrtRSInfo dg_emlrtRSI = { 87, "mapiPrivate",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdru/usrp_uhd_mapi/mapiPrivate.m" };

emlrtRSInfo yg_emlrtRSI = { 79, "colon",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/ops/colon.m" };

emlrtRSInfo ah_emlrtRSI = { 288, "colon",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/ops/colon.m" };

emlrtRSInfo bh_emlrtRSI = { 280, "colon",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/ops/colon.m" };

emlrtRSInfo ch_emlrtRSI = { 401, "colon",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/ops/colon.m" };

emlrtRSInfo dh_emlrtRSI = { 13, "rdivide",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/ops/rdivide.m" };

emlrtRSInfo mh_emlrtRSI = { 38, "eml_min_or_max",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_min_or_max.m" };

emlrtRSInfo ji_emlrtRSI = { 20, "sum",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/datafun/sum.m" };

emlrtRSInfo ki_emlrtRSI = { 17, "sum",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/datafun/sum.m" };

emlrtRSInfo ni_emlrtRSI = { 20, "mean",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/datafun/mean.m" };

emlrtRSInfo oi_emlrtRSI = { 17, "mean",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/datafun/mean.m" };

emlrtRSInfo vi_emlrtRSI = { 141, "OFDMDemodulator",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/OFDMDemodulator.m" };

emlrtRSInfo xi_emlrtRSI = { 68, "reshape",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/elmat/reshape.m" };

emlrtRSInfo yi_emlrtRSI = { 66, "reshape",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/elmat/reshape.m" };

emlrtRSInfo aj_emlrtRSI = { 61, "reshape",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/elmat/reshape.m" };

emlrtRSInfo gj_emlrtRSI = { 93, "reshape",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/elmat/reshape.m" };

emlrtRSInfo nj_emlrtRSI = { 1, "FIRRateConverter",
  "/opt/MATLAB/R2013a/toolbox/dsp/dsp/+dspcodegen/FIRRateConverter.p" };

emlrtRSInfo gk_emlrtRSI = { 9, "sendInt16Data",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdru/usrp_uhd_mapi/sendInt16Data.m"
};

emlrtRSInfo ik_emlrtRSI = { 9, "sendComplexInt16Data",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdru/usrp_uhd_mapi/sendComplexInt16Data.m"
};

emlrtRSInfo jk_emlrtRSI = { 9, "sendSingleData",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdru/usrp_uhd_mapi/sendSingleData.m"
};

emlrtRSInfo kk_emlrtRSI = { 9, "sendComplexSingleData",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdru/usrp_uhd_mapi/sendComplexSingleData.m"
};

emlrtRSInfo lk_emlrtRSI = { 9, "sendDoubleData",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdru/usrp_uhd_mapi/sendDoubleData.m"
};

emlrtMCInfo emlrtMCI = { 79, 9, "rand",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/randfun/rand.m" };

emlrtMCInfo b_emlrtMCI = { 1, 1, "SystemCore",
  "/opt/MATLAB/R2013a/toolbox/shared/system/coder/+matlab/+system/+coder/SystemCore.p"
};

emlrtMCInfo c_emlrtMCI = { 11, 16, "OFDMletters2bits",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/private/OFDMletters2bits.m"
};

emlrtMCInfo d_emlrtMCI = { 31, 5, "dec2bin",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/strfun/dec2bin.m" };

emlrtMCInfo e_emlrtMCI = { 30, 15, "dec2bin",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/strfun/dec2bin.m" };

emlrtMCInfo h_emlrtMCI = { 15, 19, "errorIf",
  "/opt/MATLAB/R2013a/toolbox/shared/coder/coder/+coder/+internal/errorIf.m" };

emlrtMCInfo i_emlrtMCI = { 25, 9, "eml_all_or_any",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_all_or_any.m" };

emlrtMCInfo j_emlrtMCI = { 24, 19, "eml_all_or_any",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_all_or_any.m" };

emlrtMCInfo k_emlrtMCI = { 30, 9, "eml_all_or_any",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_all_or_any.m" };

emlrtMCInfo l_emlrtMCI = { 27, 19, "eml_all_or_any",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_all_or_any.m" };

emlrtMCInfo m_emlrtMCI = { 16, 13, "eml_warning",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_warning.m" };

emlrtMCInfo n_emlrtMCI = { 16, 5, "eml_warning",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_warning.m" };

emlrtMCInfo o_emlrtMCI = { 249, 5, "mapiPrivate",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdru/usrp_uhd_mapi/mapiPrivate.m" };

emlrtMCInfo p_emlrtMCI = { 19, 15, "mapiPrivate",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdru/usrp_uhd_mapi/mapiPrivate.m" };

emlrtMCInfo q_emlrtMCI = { 19, 5, "mapiPrivate",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdru/usrp_uhd_mapi/mapiPrivate.m" };

emlrtMCInfo r_emlrtMCI = { 87, 13, "mapiPrivate",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdru/usrp_uhd_mapi/mapiPrivate.m" };

emlrtMCInfo t_emlrtMCI = { 402, 5, "colon",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/ops/colon.m" };

emlrtMCInfo u_emlrtMCI = { 401, 15, "colon",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/ops/colon.m" };

emlrtMCInfo v_emlrtMCI = { 14, 5, "rdivide",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/ops/rdivide.m" };

emlrtMCInfo w_emlrtMCI = { 13, 15, "rdivide",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/ops/rdivide.m" };

emlrtMCInfo x_emlrtMCI = { 41, 9, "eml_min_or_max",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_min_or_max.m" };

emlrtMCInfo y_emlrtMCI = { 38, 19, "eml_min_or_max",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_min_or_max.m" };

emlrtMCInfo eb_emlrtMCI = { 18, 9, "sum",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/datafun/sum.m" };

emlrtMCInfo fb_emlrtMCI = { 17, 19, "sum",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/datafun/sum.m" };

emlrtMCInfo gb_emlrtMCI = { 23, 9, "sum",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/datafun/sum.m" };

emlrtMCInfo hb_emlrtMCI = { 20, 19, "sum",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/datafun/sum.m" };

emlrtMCInfo ib_emlrtMCI = { 18, 9, "mean",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/datafun/mean.m" };

emlrtMCInfo jb_emlrtMCI = { 17, 19, "mean",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/datafun/mean.m" };

emlrtMCInfo kb_emlrtMCI = { 23, 9, "mean",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/datafun/mean.m" };

emlrtMCInfo lb_emlrtMCI = { 20, 19, "mean",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/datafun/mean.m" };

emlrtMCInfo mb_emlrtMCI = { 67, 5, "reshape",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/elmat/reshape.m" };

emlrtMCInfo nb_emlrtMCI = { 66, 15, "reshape",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/elmat/reshape.m" };

emlrtRTEInfo emlrtRTEI = { 1, 10, "testMACReceiver",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/testMACReceiver.m" };

emlrtRTEInfo d_emlrtRTEI = { 1, 48, "generateOFDMSignal_TX2",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/private/generateOFDMSignal_TX2.m"
};

emlrtRTEInfo g_emlrtRTEI = { 127, 5, "find",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/elmat/find.m" };

emlrtRTEInfo j_emlrtRTEI = { 1, 14, "OFDMletters2bits",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/private/OFDMletters2bits.m"
};

emlrtRTEInfo k_emlrtRTEI = { 159, 1, "unique",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/ops/unique.m" };

emlrtRTEInfo l_emlrtRTEI = { 168, 21, "OFDMModulator",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/OFDMModulator.m" };

emlrtRTEInfo m_emlrtRTEI = { 338, 12, "OFDMModulator",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/OFDMModulator.m" };

emlrtRTEInfo o_emlrtRTEI = { 70, 21, "OFDMDemodulator",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/OFDMDemodulator.m" };

emlrtRTEInfo p_emlrtRTEI = { 111, 5, "find",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/elmat/find.m" };

emlrtRTEInfo q_emlrtRTEI = { 1, 17, "checkIPAddressFormat",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdru/checkIPAddressFormat.m" };

emlrtRTEInfo r_emlrtRTEI = { 1, 48, "generateOFDMSignal",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/private/generateOFDMSignal.m"
};

emlrtRTEInfo u_emlrtRTEI = { 1, 33, "initializeOFDMSyncMemory_sdr",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/private/initializeOFDMSyncMemory_sdr.m"
};

emlrtRTEInfo w_emlrtRTEI = { 58, 1, "strfind",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/strfun/strfind.m" };

emlrtRTEInfo x_emlrtRTEI = { 84, 1, "strfind",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/strfun/strfind.m" };

emlrtRTEInfo y_emlrtRTEI = { 1, 74, "coarseOFDMFreqEst_sdr",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/private/coarseOFDMFreqEst_sdr.m"
};

emlrtRTEInfo ab_emlrtRTEI = { 1, 56, "equalizeOFDM",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/private/equalizeOFDM.m" };

emlrtRTEInfo db_emlrtRTEI = { 1, 13, "SDRuReceiver",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdru/+comm/SDRuReceiver.p" };

emlrtRTEInfo eb_emlrtRTEI = { 1, 58, "receiveData",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdru/usrp_uhd_mapi/receiveData.m" };

emlrtRTEInfo fb_emlrtRTEI = { 1, 10, "error",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/lang/error.m" };

emlrtRTEInfo gb_emlrtRTEI = { 155, 5, "xcorr",
  "/opt/MATLAB/R2013a/toolbox/signal/eml/xcorr.m" };

emlrtRTEInfo hb_emlrtRTEI = { 16, 5, "abs",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/elfun/abs.m" };

emlrtRTEInfo ib_emlrtRTEI = { 15, 9, "eml_scalexp_alloc",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_scalexp_alloc.m" };

emlrtRTEInfo jb_emlrtRTEI = { 1, 14, "rdivide",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/ops/rdivide.m" };

emlrtRTEInfo kb_emlrtRTEI = { 33, 50, "locateOFDMFrame_sdr",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/private/locateOFDMFrame_sdr.m"
};

emlrtRTEInfo lb_emlrtRTEI = { 189, 5, "eml_setop",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/ops/eml_setop.m" };

emlrtRTEInfo mb_emlrtRTEI = { 190, 5, "eml_setop",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/ops/eml_setop.m" };

emlrtRTEInfo nb_emlrtRTEI = { 191, 5, "eml_setop",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/ops/eml_setop.m" };

emlrtRTEInfo ob_emlrtRTEI = { 129, 22, "eml_setop",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/ops/eml_setop.m" };

emlrtRTEInfo pb_emlrtRTEI = { 20, 9, "eml_li_find",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_li_find.m" };

emlrtRTEInfo qb_emlrtRTEI = { 21, 40, "coarseOFDMFreqEst_sdr",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/private/coarseOFDMFreqEst_sdr.m"
};

emlrtRTEInfo rb_emlrtRTEI = { 1, 14, "exp",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/elfun/exp.m" };

emlrtRTEInfo tb_emlrtRTEI = { 113, 12, "OFDMDemodulator",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/OFDMDemodulator.m" };

emlrtRTEInfo ub_emlrtRTEI = { 1, 1, "CRCDetector",
  "/opt/MATLAB/R2013a/toolbox/comm/comm/+commcodegen/CRCDetector.p" };

emlrtRTEInfo vb_emlrtRTEI = { 1, 20, "OFDMbits2letters",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/private/OFDMbits2letters.m"
};

emlrtRTEInfo wb_emlrtRTEI = { 1, 13, "SDRuTransmitter",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdru/+comm/SDRuTransmitter.p" };

emlrtRTEInfo xb_emlrtRTEI = { 1, 41, "sendComplexDoubleData",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdru/usrp_uhd_mapi/sendComplexDoubleData.m"
};

emlrtRTEInfo yb_emlrtRTEI = { 1, 1, "setup",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/scomp/setup.m" };

emlrtRTEInfo ac_emlrtRTEI = { 281, 1, "colon",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/ops/colon.m" };

emlrtRTEInfo bc_emlrtRTEI = { 52, 20, "step",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/scomp/step.m" };

emlrtBCInfo h_emlrtBCI = { 0, 255, 17, 9, "char", "char",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/strfun/char.m", 2 };

emlrtECInfo h_emlrtECI = { -1, 403, 9, "OFDMModulator",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/OFDMModulator.m" };

emlrtDCInfo c_emlrtDCI = { 403, 9, "OFDMModulator",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/OFDMModulator.m", 1 };

emlrtBCInfo j_emlrtBCI = { -1, -1, 11, 27, "letter", "OFDMletters2bits",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/private/OFDMletters2bits.m",
  0 };

emlrtRTEInfo cc_emlrtRTEI = { 20, 5, "eml_error",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_error.m" };

emlrtBCInfo y_emlrtBCI = { -1, -1, 250, 19, "errStr", "mapiPrivate",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdru/usrp_uhd_mapi/mapiPrivate.m",
  0 };

testMACReceiverStackData *testMACReceiverStackDataLocal;

/* End of code generation (testMACReceiver_data.c) */
