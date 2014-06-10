/*
 * testPHYTransmit_data.c
 *
 * Code generation for function 'testPHYTransmit_data'
 *
 * C source code generated on: Thu Apr 24 14:26:14 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testPHYTransmit.h"
#include "testPHYTransmit_data.h"

/* Variable Definitions */
const volatile char_T *emlrtBreakCheckR2012bFlagVar;
boolean_T ObjSDRuTransmitter_not_empty;
struct_T estimate;
b_struct_T tx;
emxArray_real_T_3x563 messageBits;
boolean_T isSetupsdruCalled;
emlrtRSInfo h_emlrtRSI = { 39, "randi",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/randfun/randi.m" };

emlrtRSInfo i_emlrtRSI = { 79, "rand",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/randfun/rand.m" };

emlrtRSInfo j_emlrtRSI = { 1, "OFDMBase",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/OFDMBase.m" };

emlrtRSInfo k_emlrtRSI = { 1, "System",
  "/opt/MATLAB/R2013a/toolbox/matlab/system/+matlab/System.p" };

emlrtRSInfo l_emlrtRSI = { 1, "System",
  "/opt/MATLAB/R2013a/toolbox/shared/system/coder/+matlab/+system/+coder/System.p"
};

emlrtRSInfo m_emlrtRSI = { 1, "SystemCore",
  "/opt/MATLAB/R2013a/toolbox/shared/system/coder/+matlab/+system/+coder/SystemCore.p"
};

emlrtRSInfo n_emlrtRSI = { 1, "SystemProp",
  "/opt/MATLAB/R2013a/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p"
};

emlrtRSInfo o_emlrtRSI = { 1, "OFDMModulator",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/OFDMModulator.m" };

emlrtRSInfo p_emlrtRSI = { 182, "OFDMModulator",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/OFDMModulator.m" };

emlrtRSInfo q_emlrtRSI = { 29, "log2",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/elfun/log2.m" };

emlrtRSInfo r_emlrtRSI = { 20, "eml_error",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_error.m" };

emlrtRSInfo s_emlrtRSI = { 1, "pvParse",
  "/opt/MATLAB/R2013a/toolbox/matlab/system/+matlab/+system/pvParse.p" };

emlrtRSInfo t_emlrtRSI = { 14, "sqrt",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/elfun/sqrt.m" };

emlrtRSInfo lb_emlrtRSI = { 345, "OFDMModulator",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/OFDMModulator.m" };

emlrtRSInfo mb_emlrtRSI = { 374, "OFDMModulator",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/OFDMModulator.m" };

emlrtRSInfo nb_emlrtRSI = { 375, "OFDMModulator",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/OFDMModulator.m" };

emlrtRSInfo ob_emlrtRSI = { 388, "OFDMModulator",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/OFDMModulator.m" };

emlrtRSInfo rb_emlrtRSI = { 30, "dec2bin",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/strfun/dec2bin.m" };

emlrtRSInfo vb_emlrtRSI = { 38, "bitget",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/ops/bitget.m" };

emlrtRSInfo ac_emlrtRSI = { 12, "eml_int_forloop_overflow_check",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"
};

emlrtRSInfo cc_emlrtRSI = { 1, "CRCGenerator",
  "/opt/MATLAB/R2013a/toolbox/comm/comm/+commcodegen/CRCGenerator.p" };

emlrtRSInfo dc_emlrtRSI = { 1, "setProp",
  "/opt/MATLAB/R2013a/toolbox/matlab/system/+matlab/+system/setProp.p" };

emlrtRSInfo ec_emlrtRSI = { 1, "Nondirect",
  "/opt/MATLAB/R2013a/toolbox/shared/system/coder/+matlab/+system/+mixin/+coder/Nondirect.p"
};

emlrtRSInfo fc_emlrtRSI = { 1, "BPSKModulator",
  "/opt/MATLAB/R2013a/toolbox/comm/comm/+commcodegen/BPSKModulator.p" };

emlrtRSInfo gc_emlrtRSI = { 52, "step",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/scomp/step.m" };

emlrtRSInfo hc_emlrtRSI = { 185, "eml_sort_idx",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_sort_idx.m" };

emlrtRSInfo ic_emlrtRSI = { 102, "OFDMBase",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/OFDMBase.m" };

emlrtRSInfo jc_emlrtRSI = { 42, "unique",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/ops/unique.m" };

emlrtRSInfo kc_emlrtRSI = { 228, "unique",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/ops/unique.m" };

emlrtRSInfo lc_emlrtRSI = { 218, "unique",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/ops/unique.m" };

emlrtRSInfo mc_emlrtRSI = { 207, "unique",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/ops/unique.m" };

emlrtRSInfo nc_emlrtRSI = { 194, "unique",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/ops/unique.m" };

emlrtRSInfo oc_emlrtRSI = { 169, "unique",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/ops/unique.m" };

emlrtRSInfo pc_emlrtRSI = { 15, "errorIf",
  "/opt/MATLAB/R2013a/toolbox/shared/coder/coder/+coder/+internal/errorIf.m" };

emlrtRSInfo ad_emlrtRSI = { 1, "OFDMDemodulator",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/OFDMDemodulator.m" };

emlrtRSInfo bd_emlrtRSI = { 73, "OFDMDemodulator",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/OFDMDemodulator.m" };

emlrtRSInfo cd_emlrtRSI = { 74, "OFDMDemodulator",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/OFDMDemodulator.m" };

emlrtRSInfo dd_emlrtRSI = { 75, "OFDMDemodulator",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/OFDMDemodulator.m" };

emlrtRSInfo ed_emlrtRSI = { 76, "OFDMDemodulator",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/OFDMDemodulator.m" };

emlrtRSInfo fd_emlrtRSI = { 77, "OFDMDemodulator",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/OFDMDemodulator.m" };

emlrtRSInfo gd_emlrtRSI = { 78, "OFDMDemodulator",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/OFDMDemodulator.m" };

emlrtRSInfo hd_emlrtRSI = { 80, "OFDMDemodulator",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/OFDMDemodulator.m" };

emlrtRSInfo jd_emlrtRSI = { 1, "SDRuBase",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdru/+comm/+internal/SDRuBase.p" };

emlrtRSInfo sd_emlrtRSI = { 24, "eml_all_or_any",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_all_or_any.m" };

emlrtRSInfo td_emlrtRSI = { 27, "eml_all_or_any",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_all_or_any.m" };

emlrtRSInfo vd_emlrtRSI = { 9, "warning",
  "/opt/MATLAB/R2013a/toolbox/shared/coder/coder/+coder/+internal/warning.m" };

emlrtRSInfo wd_emlrtRSI = { 16, "eml_warning",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_warning.m" };

emlrtRSInfo ye_emlrtRSI = { 248, "mapiPrivate",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdru/usrp_uhd_mapi/mapiPrivate.m" };

emlrtRSInfo af_emlrtRSI = { 249, "mapiPrivate",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdru/usrp_uhd_mapi/mapiPrivate.m" };

emlrtRSInfo cf_emlrtRSI = { 71, "reportSDRuStatus",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdru/reportSDRuStatus.m" };

emlrtRSInfo ef_emlrtRSI = { 61, "reportSDRuStatus",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdru/reportSDRuStatus.m" };

emlrtRSInfo gf_emlrtRSI = { 51, "reportSDRuStatus",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdru/reportSDRuStatus.m" };

emlrtRSInfo if_emlrtRSI = { 35, "reportSDRuStatus",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdru/reportSDRuStatus.m" };

emlrtRSInfo jf_emlrtRSI = { 17, "getSDRuDriverVersion",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdru/usrp_uhd_mapi/getSDRuDriverVersion.m"
};

emlrtRSInfo kf_emlrtRSI = { 85, "mapiPrivate",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdru/usrp_uhd_mapi/mapiPrivate.m" };

emlrtRSInfo lf_emlrtRSI = { 86, "mapiPrivate",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdru/usrp_uhd_mapi/mapiPrivate.m" };

emlrtRSInfo mf_emlrtRSI = { 87, "mapiPrivate",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdru/usrp_uhd_mapi/mapiPrivate.m" };

emlrtRSInfo nf_emlrtRSI = { 9, "sendInt16Data",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdru/usrp_uhd_mapi/sendInt16Data.m"
};

emlrtRSInfo pf_emlrtRSI = { 9, "sendComplexInt16Data",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdru/usrp_uhd_mapi/sendComplexInt16Data.m"
};

emlrtRSInfo qf_emlrtRSI = { 9, "sendSingleData",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdru/usrp_uhd_mapi/sendSingleData.m"
};

emlrtRSInfo rf_emlrtRSI = { 9, "sendComplexSingleData",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdru/usrp_uhd_mapi/sendComplexSingleData.m"
};

emlrtRSInfo sf_emlrtRSI = { 9, "sendDoubleData",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdru/usrp_uhd_mapi/sendDoubleData.m"
};

emlrtMCInfo emlrtMCI = { 79, 9, "rand",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/randfun/rand.m" };

emlrtMCInfo b_emlrtMCI = { 1, 1, "SystemCore",
  "/opt/MATLAB/R2013a/toolbox/shared/system/coder/+matlab/+system/+coder/SystemCore.p"
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

emlrtRTEInfo emlrtRTEI = { 9, 5, "testPHYTransmit",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/testPHYTransmit.m" };

emlrtRTEInfo b_emlrtRTEI = { 10, 5, "testPHYTransmit",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/testPHYTransmit.m" };

emlrtRTEInfo c_emlrtRTEI = { 12, 5, "testPHYTransmit",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/testPHYTransmit.m" };

emlrtRTEInfo d_emlrtRTEI = { 1, 10, "testPHYTransmit",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/testPHYTransmit.m" };

emlrtRTEInfo e_emlrtRTEI = { 2, 129, "CreateTXRX_TX",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/CreateTXRX_TX.m" };

emlrtRTEInfo f_emlrtRTEI = { 159, 1, "unique",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/ops/unique.m" };

emlrtRTEInfo g_emlrtRTEI = { 1, 48, "generateOFDMSignal_TX2",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/generateOFDMSignal_TX2.m"
};

emlrtRTEInfo j_emlrtRTEI = { 127, 5, "find",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/elmat/find.m" };

emlrtRTEInfo m_emlrtRTEI = { 1, 14, "OFDMletters2bits",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/OFDMletters2bits.m"
};

emlrtRTEInfo n_emlrtRTEI = { 338, 12, "OFDMModulator",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/OFDMModulator.m" };

emlrtRTEInfo p_emlrtRTEI = { 111, 5, "find",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/elmat/find.m" };

emlrtRTEInfo q_emlrtRTEI = { 1, 17, "checkIPAddressFormat",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdru/checkIPAddressFormat.m" };

emlrtRTEInfo r_emlrtRTEI = { 1, 48, "generateOFDMSignal",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/generateOFDMSignal.m"
};

emlrtRTEInfo u_emlrtRTEI = { 1, 33, "initializeOFDMSyncMemory_sdr",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/initializeOFDMSyncMemory_sdr.m"
};

emlrtRTEInfo v_emlrtRTEI = { 1, 13, "SDRuTransmitter",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdru/+comm/SDRuTransmitter.p" };

emlrtRTEInfo w_emlrtRTEI = { 1, 41, "sendComplexDoubleData",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdru/usrp_uhd_mapi/sendComplexDoubleData.m"
};

emlrtRTEInfo x_emlrtRTEI = { 1, 10, "error",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/lang/error.m" };

emlrtRTEInfo y_emlrtRTEI = { 1, 1, "setup",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/scomp/setup.m" };

emlrtRTEInfo ab_emlrtRTEI = { 52, 20, "step",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/scomp/step.m" };

emlrtBCInfo emlrtBCI = { 0, 255, 17, 9, "char", "char",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/strfun/char.m", 2 };

emlrtECInfo emlrtECI = { -1, 403, 9, "OFDMModulator",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/OFDMModulator.m" };

emlrtDCInfo emlrtDCI = { 403, 9, "OFDMModulator",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/OFDMModulator.m", 1 };

emlrtRTEInfo bb_emlrtRTEI = { 20, 5, "eml_error",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_error.m" };

emlrtBCInfo o_emlrtBCI = { -1, -1, 250, 19, "errStr", "mapiPrivate",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdru/usrp_uhd_mapi/mapiPrivate.m",
  0 };

testPHYTransmitStackData *testPHYTransmitStackDataLocal;

/* End of code generation (testPHYTransmit_data.c) */
