/*
 * testPHYReceive_data.c
 *
 * Code generation for function 'testPHYReceive_data'
 *
 * C source code generated on: Thu Apr 17 22:51:41 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testPHYReceive.h"
#include "testPHYReceive_data.h"
#include <stdio.h>

/* Variable Definitions */
const volatile char_T *emlrtBreakCheckR2012bFlagVar;
boolean_T isSetupsdruCalled;
emlrtRSInfo k_emlrtRSI = { 39, "randi",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/randfun/randi.m" };

emlrtRSInfo l_emlrtRSI = { 79, "rand",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/randfun/rand.m" };

emlrtRSInfo m_emlrtRSI = { 1, "OFDMBase",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/OFDMBase.m" };

emlrtRSInfo n_emlrtRSI = { 1, "System",
  "/opt/MATLAB/R2013a/toolbox/matlab/system/+matlab/System.p" };

emlrtRSInfo o_emlrtRSI = { 1, "System",
  "/opt/MATLAB/R2013a/toolbox/shared/system/coder/+matlab/+system/+coder/System.p"
};

emlrtRSInfo p_emlrtRSI = { 1, "SystemCore",
  "/opt/MATLAB/R2013a/toolbox/shared/system/coder/+matlab/+system/+coder/SystemCore.p"
};

emlrtRSInfo q_emlrtRSI = { 1, "SystemProp",
  "/opt/MATLAB/R2013a/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p"
};

emlrtRSInfo r_emlrtRSI = { 1, "OFDMModulator",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/OFDMModulator.m" };

emlrtRSInfo s_emlrtRSI = { 182, "OFDMModulator",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/OFDMModulator.m" };

emlrtRSInfo t_emlrtRSI = { 29, "log2",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/elfun/log2.m" };

emlrtRSInfo u_emlrtRSI = { 20, "eml_error",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_error.m" };

emlrtRSInfo v_emlrtRSI = { 1, "pvParse",
  "/opt/MATLAB/R2013a/toolbox/matlab/system/+matlab/+system/pvParse.p" };

emlrtRSInfo w_emlrtRSI = { 14, "sqrt",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/elfun/sqrt.m" };

emlrtRSInfo ob_emlrtRSI = { 345, "OFDMModulator",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/OFDMModulator.m" };

emlrtRSInfo pb_emlrtRSI = { 374, "OFDMModulator",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/OFDMModulator.m" };

emlrtRSInfo qb_emlrtRSI = { 375, "OFDMModulator",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/OFDMModulator.m" };

emlrtRSInfo rb_emlrtRSI = { 388, "OFDMModulator",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/OFDMModulator.m" };

emlrtRSInfo sb_emlrtRSI = { 11, "OFDMletters2bits",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/OFDMletters2bits.m"
};

emlrtRSInfo tb_emlrtRSI = { 7, "OFDMletters2bits",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/OFDMletters2bits.m"
};

emlrtRSInfo ub_emlrtRSI = { 30, "dec2bin",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/strfun/dec2bin.m" };

emlrtRSInfo vb_emlrtRSI = { 33, "dec2bin",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/strfun/dec2bin.m" };

emlrtRSInfo wb_emlrtRSI = { 141, "dec2bin",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/strfun/dec2bin.m" };

emlrtRSInfo xb_emlrtRSI = { 146, "dec2bin",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/strfun/dec2bin.m" };

emlrtRSInfo yb_emlrtRSI = { 38, "bitget",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/ops/bitget.m" };

emlrtRSInfo ac_emlrtRSI = { 101, "dec2bin",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/strfun/dec2bin.m" };

emlrtRSInfo bc_emlrtRSI = { 100, "dec2bin",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/strfun/dec2bin.m" };

emlrtRSInfo cc_emlrtRSI = { 93, "dec2bin",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/strfun/dec2bin.m" };

emlrtRSInfo dc_emlrtRSI = { 12, "eml_int_forloop_overflow_check",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"
};

emlrtRSInfo fc_emlrtRSI = { 1, "CRCGenerator",
  "/opt/MATLAB/R2013a/toolbox/comm/comm/+commcodegen/CRCGenerator.p" };

emlrtRSInfo gc_emlrtRSI = { 1, "setProp",
  "/opt/MATLAB/R2013a/toolbox/matlab/system/+matlab/+system/setProp.p" };

emlrtRSInfo hc_emlrtRSI = { 1, "Nondirect",
  "/opt/MATLAB/R2013a/toolbox/shared/system/coder/+matlab/+system/+mixin/+coder/Nondirect.p"
};

emlrtRSInfo ic_emlrtRSI = { 1, "BPSKModulator",
  "/opt/MATLAB/R2013a/toolbox/comm/comm/+commcodegen/BPSKModulator.p" };

emlrtRSInfo jc_emlrtRSI = { 52, "step",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/scomp/step.m" };

emlrtRSInfo kc_emlrtRSI = { 185, "eml_sort_idx",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_sort_idx.m" };

emlrtRSInfo lc_emlrtRSI = { 102, "OFDMBase",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/OFDMBase.m" };

emlrtRSInfo mc_emlrtRSI = { 42, "unique",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/ops/unique.m" };

emlrtRSInfo nc_emlrtRSI = { 228, "unique",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/ops/unique.m" };

emlrtRSInfo oc_emlrtRSI = { 218, "unique",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/ops/unique.m" };

emlrtRSInfo pc_emlrtRSI = { 207, "unique",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/ops/unique.m" };

emlrtRSInfo qc_emlrtRSI = { 194, "unique",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/ops/unique.m" };

emlrtRSInfo rc_emlrtRSI = { 169, "unique",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/ops/unique.m" };

emlrtRSInfo sc_emlrtRSI = { 15, "errorIf",
  "/opt/MATLAB/R2013a/toolbox/shared/coder/coder/+coder/+internal/errorIf.m" };

emlrtRSInfo uc_emlrtRSI = { 163, "OFDMBase",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/OFDMBase.m" };

emlrtRSInfo yc_emlrtRSI = { 1, "OFDMDemodulator",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/OFDMDemodulator.m" };

emlrtRSInfo ad_emlrtRSI = { 73, "OFDMDemodulator",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/OFDMDemodulator.m" };

emlrtRSInfo bd_emlrtRSI = { 74, "OFDMDemodulator",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/OFDMDemodulator.m" };

emlrtRSInfo cd_emlrtRSI = { 75, "OFDMDemodulator",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/OFDMDemodulator.m" };

emlrtRSInfo dd_emlrtRSI = { 76, "OFDMDemodulator",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/OFDMDemodulator.m" };

emlrtRSInfo ed_emlrtRSI = { 77, "OFDMDemodulator",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/OFDMDemodulator.m" };

emlrtRSInfo fd_emlrtRSI = { 78, "OFDMDemodulator",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/OFDMDemodulator.m" };

emlrtRSInfo gd_emlrtRSI = { 80, "OFDMDemodulator",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/OFDMDemodulator.m" };

emlrtRSInfo yd_emlrtRSI = { 1, "SDRuReceiver",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdru/+comm/SDRuReceiver.p" };

emlrtRSInfo ae_emlrtRSI = { 1, "SDRuBase",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdru/+comm/+internal/SDRuBase.p" };

emlrtRSInfo je_emlrtRSI = { 24, "eml_all_or_any",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_all_or_any.m" };

emlrtRSInfo ke_emlrtRSI = { 27, "eml_all_or_any",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_all_or_any.m" };

emlrtRSInfo oe_emlrtRSI = { 1, "CRCDetector",
  "/opt/MATLAB/R2013a/toolbox/comm/comm/+commcodegen/CRCDetector.p" };

emlrtRSInfo re_emlrtRSI = { 76, "fprintf",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/lang/fprintf.m" };

emlrtRSInfo if_emlrtRSI = { 248, "mapiPrivate",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdru/usrp_uhd_mapi/mapiPrivate.m" };

emlrtRSInfo jf_emlrtRSI = { 249, "mapiPrivate",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdru/usrp_uhd_mapi/mapiPrivate.m" };

emlrtRSInfo lf_emlrtRSI = { 71, "reportSDRuStatus",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdru/reportSDRuStatus.m" };

emlrtRSInfo nf_emlrtRSI = { 61, "reportSDRuStatus",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdru/reportSDRuStatus.m" };

emlrtRSInfo pf_emlrtRSI = { 51, "reportSDRuStatus",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdru/reportSDRuStatus.m" };

emlrtRSInfo rf_emlrtRSI = { 35, "reportSDRuStatus",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdru/reportSDRuStatus.m" };

emlrtRSInfo sf_emlrtRSI = { 17, "getSDRuDriverVersion",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdru/usrp_uhd_mapi/getSDRuDriverVersion.m"
};

emlrtRSInfo tf_emlrtRSI = { 85, "mapiPrivate",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdru/usrp_uhd_mapi/mapiPrivate.m" };

emlrtRSInfo uf_emlrtRSI = { 86, "mapiPrivate",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdru/usrp_uhd_mapi/mapiPrivate.m" };

emlrtRSInfo vf_emlrtRSI = { 87, "mapiPrivate",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdru/usrp_uhd_mapi/mapiPrivate.m" };

emlrtRSInfo rg_emlrtRSI = { 79, "colon",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/ops/colon.m" };

emlrtRSInfo sg_emlrtRSI = { 288, "colon",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/ops/colon.m" };

emlrtRSInfo tg_emlrtRSI = { 280, "colon",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/ops/colon.m" };

emlrtRSInfo ug_emlrtRSI = { 401, "colon",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/ops/colon.m" };

emlrtRSInfo vg_emlrtRSI = { 13, "rdivide",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/ops/rdivide.m" };

emlrtRSInfo fh_emlrtRSI = { 38, "eml_min_or_max",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_min_or_max.m" };

emlrtRSInfo ci_emlrtRSI = { 20, "sum",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/datafun/sum.m" };

emlrtRSInfo di_emlrtRSI = { 17, "sum",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/datafun/sum.m" };

emlrtRSInfo gi_emlrtRSI = { 20, "mean",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/datafun/mean.m" };

emlrtRSInfo hi_emlrtRSI = { 17, "mean",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/datafun/mean.m" };

emlrtRSInfo ni_emlrtRSI = { 104, "OFDMDemodulator",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/OFDMDemodulator.m" };

emlrtRSInfo oi_emlrtRSI = { 141, "OFDMDemodulator",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/OFDMDemodulator.m" };

emlrtRSInfo pi_emlrtRSI = { 171, "OFDMDemodulator",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/OFDMDemodulator.m" };

emlrtRSInfo qi_emlrtRSI = { 68, "reshape",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/elmat/reshape.m" };

emlrtRSInfo ri_emlrtRSI = { 66, "reshape",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/elmat/reshape.m" };

emlrtRSInfo si_emlrtRSI = { 61, "reshape",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/elmat/reshape.m" };

emlrtRSInfo ti_emlrtRSI = { 22, "reshape",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/elmat/reshape.m" };

emlrtRSInfo vi_emlrtRSI = { 52, "eml_assert_valid_size_arg",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m" };

emlrtRSInfo xi_emlrtRSI = { 93, "reshape",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/elmat/reshape.m" };

emlrtRSInfo ej_emlrtRSI = { 1, "FIRRateConverter",
  "/opt/MATLAB/R2013a/toolbox/dsp/dsp/+dspcodegen/FIRRateConverter.p" };

emlrtMCInfo emlrtMCI = { 79, 9, "rand",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/randfun/rand.m" };

emlrtMCInfo b_emlrtMCI = { 1, 1, "SystemCore",
  "/opt/MATLAB/R2013a/toolbox/shared/system/coder/+matlab/+system/+coder/SystemCore.p"
};

emlrtMCInfo c_emlrtMCI = { 11, 16, "OFDMletters2bits",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/OFDMletters2bits.m"
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

emlrtMCInfo p_emlrtMCI = { 249, 5, "mapiPrivate",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdru/usrp_uhd_mapi/mapiPrivate.m" };

emlrtMCInfo q_emlrtMCI = { 19, 15, "mapiPrivate",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdru/usrp_uhd_mapi/mapiPrivate.m" };

emlrtMCInfo r_emlrtMCI = { 19, 5, "mapiPrivate",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdru/usrp_uhd_mapi/mapiPrivate.m" };

emlrtMCInfo s_emlrtMCI = { 87, 13, "mapiPrivate",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdru/usrp_uhd_mapi/mapiPrivate.m" };

emlrtMCInfo u_emlrtMCI = { 402, 5, "colon",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/ops/colon.m" };

emlrtMCInfo v_emlrtMCI = { 401, 15, "colon",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/ops/colon.m" };

emlrtMCInfo w_emlrtMCI = { 14, 5, "rdivide",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/ops/rdivide.m" };

emlrtMCInfo x_emlrtMCI = { 13, 15, "rdivide",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/ops/rdivide.m" };

emlrtMCInfo y_emlrtMCI = { 41, 9, "eml_min_or_max",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_min_or_max.m" };

emlrtMCInfo ab_emlrtMCI = { 38, 19, "eml_min_or_max",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_min_or_max.m" };

emlrtMCInfo fb_emlrtMCI = { 18, 9, "sum",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/datafun/sum.m" };

emlrtMCInfo gb_emlrtMCI = { 17, 19, "sum",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/datafun/sum.m" };

emlrtMCInfo hb_emlrtMCI = { 23, 9, "sum",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/datafun/sum.m" };

emlrtMCInfo ib_emlrtMCI = { 20, 19, "sum",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/datafun/sum.m" };

emlrtMCInfo jb_emlrtMCI = { 18, 9, "mean",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/datafun/mean.m" };

emlrtMCInfo kb_emlrtMCI = { 17, 19, "mean",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/datafun/mean.m" };

emlrtMCInfo lb_emlrtMCI = { 23, 9, "mean",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/datafun/mean.m" };

emlrtMCInfo mb_emlrtMCI = { 20, 19, "mean",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/datafun/mean.m" };

emlrtMCInfo nb_emlrtMCI = { 67, 5, "reshape",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/elmat/reshape.m" };

emlrtMCInfo ob_emlrtMCI = { 66, 15, "reshape",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/elmat/reshape.m" };

emlrtMCInfo rb_emlrtMCI = { 53, 5, "eml_assert_valid_size_arg",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m" };

emlrtMCInfo sb_emlrtMCI = { 52, 15, "eml_assert_valid_size_arg",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m" };

emlrtRTEInfo emlrtRTEI = { 1, 19, "testPHYReceive",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/testPHYReceive.m" };

emlrtRTEInfo d_emlrtRTEI = { 159, 1, "unique",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/ops/unique.m" };

emlrtRTEInfo e_emlrtRTEI = { 1, 48, "generateOFDMSignal_TX2",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/generateOFDMSignal_TX2.m"
};

emlrtRTEInfo h_emlrtRTEI = { 127, 5, "find",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/elmat/find.m" };

emlrtRTEInfo k_emlrtRTEI = { 1, 14, "OFDMletters2bits",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/OFDMletters2bits.m"
};

emlrtRTEInfo l_emlrtRTEI = { 168, 21, "OFDMModulator",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/OFDMModulator.m" };

emlrtRTEInfo m_emlrtRTEI = { 338, 12, "OFDMModulator",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/OFDMModulator.m" };

emlrtRTEInfo o_emlrtRTEI = { 1, 48, "generateOFDMSignal",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/generateOFDMSignal.m"
};

emlrtRTEInfo r_emlrtRTEI = { 1, 33, "initializeOFDMSyncMemory_sdr",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/initializeOFDMSyncMemory_sdr.m"
};

emlrtRTEInfo s_emlrtRTEI = { 111, 5, "find",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/elmat/find.m" };

emlrtRTEInfo t_emlrtRTEI = { 1, 17, "checkIPAddressFormat",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdru/checkIPAddressFormat.m" };

emlrtRTEInfo v_emlrtRTEI = { 1, 1, "CRCDetector",
  "/opt/MATLAB/R2013a/toolbox/comm/comm/+commcodegen/CRCDetector.p" };

emlrtRTEInfo w_emlrtRTEI = { 58, 1, "strfind",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/strfun/strfind.m" };

emlrtRTEInfo x_emlrtRTEI = { 84, 1, "strfind",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/strfun/strfind.m" };

emlrtRTEInfo y_emlrtRTEI = { 1, 74, "coarseOFDMFreqEst_sdr",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/coarseOFDMFreqEst_sdr.m"
};

emlrtRTEInfo ab_emlrtRTEI = { 1, 13, "SDRuReceiver",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdru/+comm/SDRuReceiver.p" };

emlrtRTEInfo bb_emlrtRTEI = { 1, 58, "receiveData",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdru/usrp_uhd_mapi/receiveData.m" };

emlrtRTEInfo cb_emlrtRTEI = { 1, 10, "error",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/lang/error.m" };

emlrtRTEInfo db_emlrtRTEI = { 155, 5, "xcorr",
  "/opt/MATLAB/R2013a/toolbox/signal/eml/xcorr.m" };

emlrtRTEInfo eb_emlrtRTEI = { 16, 5, "abs",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/elfun/abs.m" };

emlrtRTEInfo fb_emlrtRTEI = { 15, 9, "eml_scalexp_alloc",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_scalexp_alloc.m" };

emlrtRTEInfo gb_emlrtRTEI = { 1, 14, "rdivide",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/ops/rdivide.m" };

emlrtRTEInfo hb_emlrtRTEI = { 33, 50, "locateOFDMFrame_sdr",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/locateOFDMFrame_sdr.m"
};

emlrtRTEInfo ib_emlrtRTEI = { 189, 5, "eml_setop",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/ops/eml_setop.m" };

emlrtRTEInfo jb_emlrtRTEI = { 190, 5, "eml_setop",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/ops/eml_setop.m" };

emlrtRTEInfo kb_emlrtRTEI = { 191, 5, "eml_setop",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/ops/eml_setop.m" };

emlrtRTEInfo lb_emlrtRTEI = { 129, 22, "eml_setop",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/ops/eml_setop.m" };

emlrtRTEInfo mb_emlrtRTEI = { 20, 9, "eml_li_find",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_li_find.m" };

emlrtRTEInfo nb_emlrtRTEI = { 21, 40, "coarseOFDMFreqEst_sdr",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/coarseOFDMFreqEst_sdr.m"
};

emlrtRTEInfo ob_emlrtRTEI = { 1, 14, "exp",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/elfun/exp.m" };

emlrtRTEInfo qb_emlrtRTEI = { 65, 1, "reshape",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/elmat/reshape.m" };

emlrtRTEInfo rb_emlrtRTEI = { 113, 12, "OFDMDemodulator",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/OFDMDemodulator.m" };

emlrtRTEInfo sb_emlrtRTEI = { 1, 20, "OFDMbits2letters",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/OFDMbits2letters.m"
};

emlrtRTEInfo tb_emlrtRTEI = { 1, 31, "fprintf",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/lang/fprintf.m" };

emlrtRTEInfo ub_emlrtRTEI = { 1, 1, "setup",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/scomp/setup.m" };

emlrtRTEInfo vb_emlrtRTEI = { 281, 1, "colon",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/ops/colon.m" };

emlrtRTEInfo yb_emlrtRTEI = { 52, 20, "step",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/scomp/step.m" };

emlrtBCInfo emlrtBCI = { 0, 255, 17, 9, "char", "char",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/strfun/char.m", 2 };

emlrtECInfo emlrtECI = { -1, 403, 9, "OFDMModulator",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/OFDMModulator.m" };

emlrtDCInfo emlrtDCI = { 403, 9, "OFDMModulator",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/OFDMModulator.m", 1 };

emlrtBCInfo c_emlrtBCI = { -1, -1, 11, 27, "letter", "OFDMletters2bits",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/OFDMletters2bits.m",
  0 };

emlrtRTEInfo ac_emlrtRTEI = { 20, 5, "eml_error",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_error.m" };

emlrtBCInfo q_emlrtBCI = { -1, -1, 250, 19, "errStr", "mapiPrivate",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdru/usrp_uhd_mapi/mapiPrivate.m",
  0 };

emlrtDCInfo c_emlrtDCI = { 171, 28, "OFDMDemodulator",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/OFDMDemodulator.m", 1 };

testPHYReceiveStackData *testPHYReceiveStackDataLocal;

/* End of code generation (testPHYReceive_data.c) */
