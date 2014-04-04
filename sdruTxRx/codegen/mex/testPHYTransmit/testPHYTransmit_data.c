/*
 * testPHYTransmit_data.c
 *
 * Code generation for function 'testPHYTransmit_data'
 *
 * C source code generated on: Sat Mar 29 15:48:37 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testPHYTransmit.h"
#include "testPHYTransmit_data.h"

/* Variable Definitions */
const volatile char_T *emlrtBreakCheckR2012bFlagVar;
boolean_T isSetupsdruCalled;
emlrtRSInfo i_emlrtRSI = { 39, "randi",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/randfun/randi.m" };

emlrtRSInfo j_emlrtRSI = { 79, "rand",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/randfun/rand.m" };

emlrtRSInfo k_emlrtRSI = { 1, "OFDMBase",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/OFDMBase.m" };

emlrtRSInfo l_emlrtRSI = { 1, "System",
  "/opt/MATLAB/R2013a/toolbox/matlab/system/+matlab/System.p" };

emlrtRSInfo m_emlrtRSI = { 1, "System",
  "/opt/MATLAB/R2013a/toolbox/shared/system/coder/+matlab/+system/+coder/System.p"
};

emlrtRSInfo n_emlrtRSI = { 1, "SystemCore",
  "/opt/MATLAB/R2013a/toolbox/shared/system/coder/+matlab/+system/+coder/SystemCore.p"
};

emlrtRSInfo o_emlrtRSI = { 1, "SystemProp",
  "/opt/MATLAB/R2013a/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p"
};

emlrtRSInfo p_emlrtRSI = { 1, "OFDMModulator",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/OFDMModulator.m" };

emlrtRSInfo q_emlrtRSI = { 182, "OFDMModulator",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/OFDMModulator.m" };

emlrtRSInfo r_emlrtRSI = { 29, "log2",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/elfun/log2.m" };

emlrtRSInfo s_emlrtRSI = { 20, "eml_error",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_error.m" };

emlrtRSInfo t_emlrtRSI = { 1, "pvParse",
  "/opt/MATLAB/R2013a/toolbox/matlab/system/+matlab/+system/pvParse.p" };

emlrtRSInfo u_emlrtRSI = { 14, "sqrt",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/elfun/sqrt.m" };

emlrtRSInfo mb_emlrtRSI = { 345, "OFDMModulator",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/OFDMModulator.m" };

emlrtRSInfo nb_emlrtRSI = { 374, "OFDMModulator",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/OFDMModulator.m" };

emlrtRSInfo ob_emlrtRSI = { 375, "OFDMModulator",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/OFDMModulator.m" };

emlrtRSInfo pb_emlrtRSI = { 388, "OFDMModulator",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/OFDMModulator.m" };

emlrtRSInfo sb_emlrtRSI = { 30, "dec2bin",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/strfun/dec2bin.m" };

emlrtRSInfo wb_emlrtRSI = { 38, "bitget",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/ops/bitget.m" };

emlrtRSInfo bc_emlrtRSI = { 12, "eml_int_forloop_overflow_check",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"
};

emlrtRSInfo dc_emlrtRSI = { 1, "CRCGenerator",
  "/opt/MATLAB/R2013a/toolbox/comm/comm/+commcodegen/CRCGenerator.p" };

emlrtRSInfo ec_emlrtRSI = { 1, "setProp",
  "/opt/MATLAB/R2013a/toolbox/matlab/system/+matlab/+system/setProp.p" };

emlrtRSInfo fc_emlrtRSI = { 1, "Nondirect",
  "/opt/MATLAB/R2013a/toolbox/shared/system/coder/+matlab/+system/+mixin/+coder/Nondirect.p"
};

emlrtRSInfo gc_emlrtRSI = { 1, "BPSKModulator",
  "/opt/MATLAB/R2013a/toolbox/comm/comm/+commcodegen/BPSKModulator.p" };

emlrtRSInfo hc_emlrtRSI = { 52, "step",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/scomp/step.m" };

emlrtRSInfo ic_emlrtRSI = { 185, "eml_sort_idx",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_sort_idx.m" };

emlrtRSInfo jc_emlrtRSI = { 102, "OFDMBase",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/OFDMBase.m" };

emlrtRSInfo kc_emlrtRSI = { 42, "unique",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/ops/unique.m" };

emlrtRSInfo lc_emlrtRSI = { 228, "unique",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/ops/unique.m" };

emlrtRSInfo mc_emlrtRSI = { 218, "unique",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/ops/unique.m" };

emlrtRSInfo nc_emlrtRSI = { 207, "unique",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/ops/unique.m" };

emlrtRSInfo oc_emlrtRSI = { 194, "unique",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/ops/unique.m" };

emlrtRSInfo pc_emlrtRSI = { 169, "unique",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/ops/unique.m" };

emlrtRSInfo qc_emlrtRSI = { 15, "errorIf",
  "/opt/MATLAB/R2013a/toolbox/shared/coder/coder/+coder/+internal/errorIf.m" };

emlrtRSInfo bd_emlrtRSI = { 1, "OFDMDemodulator",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/OFDMDemodulator.m" };

emlrtRSInfo cd_emlrtRSI = { 73, "OFDMDemodulator",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/OFDMDemodulator.m" };

emlrtRSInfo dd_emlrtRSI = { 74, "OFDMDemodulator",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/OFDMDemodulator.m" };

emlrtRSInfo ed_emlrtRSI = { 75, "OFDMDemodulator",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/OFDMDemodulator.m" };

emlrtRSInfo fd_emlrtRSI = { 76, "OFDMDemodulator",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/OFDMDemodulator.m" };

emlrtRSInfo gd_emlrtRSI = { 77, "OFDMDemodulator",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/OFDMDemodulator.m" };

emlrtRSInfo hd_emlrtRSI = { 78, "OFDMDemodulator",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/OFDMDemodulator.m" };

emlrtRSInfo id_emlrtRSI = { 80, "OFDMDemodulator",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/OFDMDemodulator.m" };

emlrtRSInfo kd_emlrtRSI = { 1, "SDRuBase",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdru/+comm/+internal/SDRuBase.p" };

emlrtRSInfo td_emlrtRSI = { 24, "eml_all_or_any",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_all_or_any.m" };

emlrtRSInfo ud_emlrtRSI = { 27, "eml_all_or_any",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_all_or_any.m" };

emlrtRSInfo wd_emlrtRSI = { 9, "warning",
  "/opt/MATLAB/R2013a/toolbox/shared/coder/coder/+coder/+internal/warning.m" };

emlrtRSInfo xd_emlrtRSI = { 16, "eml_warning",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_warning.m" };

emlrtRSInfo ve_emlrtRSI = { 6, "openDataConnection",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdru/usrp_uhd_mapi/openDataConnection.m"
};

emlrtRSInfo we_emlrtRSI = { 138, "mapiPrivate",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdru/usrp_uhd_mapi/mapiPrivate.m" };

emlrtRSInfo xe_emlrtRSI = { 141, "mapiPrivate",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdru/usrp_uhd_mapi/mapiPrivate.m" };

emlrtRSInfo ye_emlrtRSI = { 146, "mapiPrivate",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdru/usrp_uhd_mapi/mapiPrivate.m" };

emlrtRSInfo af_emlrtRSI = { 151, "mapiPrivate",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdru/usrp_uhd_mapi/mapiPrivate.m" };

emlrtRSInfo bf_emlrtRSI = { 152, "mapiPrivate",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdru/usrp_uhd_mapi/mapiPrivate.m" };

emlrtRSInfo cf_emlrtRSI = { 248, "mapiPrivate",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdru/usrp_uhd_mapi/mapiPrivate.m" };

emlrtRSInfo df_emlrtRSI = { 249, "mapiPrivate",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdru/usrp_uhd_mapi/mapiPrivate.m" };

emlrtRSInfo ff_emlrtRSI = { 71, "reportSDRuStatus",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdru/reportSDRuStatus.m" };

emlrtRSInfo hf_emlrtRSI = { 61, "reportSDRuStatus",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdru/reportSDRuStatus.m" };

emlrtRSInfo jf_emlrtRSI = { 51, "reportSDRuStatus",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdru/reportSDRuStatus.m" };

emlrtRSInfo lf_emlrtRSI = { 35, "reportSDRuStatus",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdru/reportSDRuStatus.m" };

emlrtRSInfo mf_emlrtRSI = { 17, "getSDRuDriverVersion",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdru/usrp_uhd_mapi/getSDRuDriverVersion.m"
};

emlrtRSInfo nf_emlrtRSI = { 85, "mapiPrivate",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdru/usrp_uhd_mapi/mapiPrivate.m" };

emlrtRSInfo of_emlrtRSI = { 86, "mapiPrivate",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdru/usrp_uhd_mapi/mapiPrivate.m" };

emlrtRSInfo pf_emlrtRSI = { 87, "mapiPrivate",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdru/usrp_uhd_mapi/mapiPrivate.m" };

emlrtRSInfo qf_emlrtRSI = { 9, "sendInt16Data",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdru/usrp_uhd_mapi/sendInt16Data.m"
};

emlrtRSInfo sf_emlrtRSI = { 9, "sendComplexInt16Data",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdru/usrp_uhd_mapi/sendComplexInt16Data.m"
};

emlrtRSInfo tf_emlrtRSI = { 9, "sendSingleData",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdru/usrp_uhd_mapi/sendSingleData.m"
};

emlrtRSInfo uf_emlrtRSI = { 9, "sendComplexSingleData",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdru/usrp_uhd_mapi/sendComplexSingleData.m"
};

emlrtRSInfo vf_emlrtRSI = { 9, "sendDoubleData",
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

emlrtRTEInfo emlrtRTEI = { 159, 1, "unique",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/ops/unique.m" };

emlrtRTEInfo b_emlrtRTEI = { 1, 48, "generateOFDMSignal_TX2",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/private/generateOFDMSignal_TX2.m"
};

emlrtRTEInfo e_emlrtRTEI = { 127, 5, "find",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/elmat/find.m" };

emlrtRTEInfo h_emlrtRTEI = { 1, 14, "OFDMletters2bits",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/private/OFDMletters2bits.m"
};

emlrtRTEInfo i_emlrtRTEI = { 338, 12, "OFDMModulator",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/OFDMModulator.m" };

emlrtRTEInfo k_emlrtRTEI = { 111, 5, "find",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/elmat/find.m" };

emlrtRTEInfo l_emlrtRTEI = { 1, 17, "checkIPAddressFormat",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdru/checkIPAddressFormat.m" };

emlrtRTEInfo m_emlrtRTEI = { 1, 48, "generateOFDMSignal",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/private/generateOFDMSignal.m"
};

emlrtRTEInfo p_emlrtRTEI = { 1, 33, "initializeOFDMSyncMemory_sdr",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/private/initializeOFDMSyncMemory_sdr.m"
};

emlrtRTEInfo q_emlrtRTEI = { 1, 13, "SDRuTransmitter",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdru/+comm/SDRuTransmitter.p" };

emlrtRTEInfo r_emlrtRTEI = { 1, 41, "sendComplexDoubleData",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdru/usrp_uhd_mapi/sendComplexDoubleData.m"
};

emlrtRTEInfo s_emlrtRTEI = { 1, 10, "error",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/lang/error.m" };

emlrtRTEInfo t_emlrtRTEI = { 1, 13, "SDRuReceiver",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdru/+comm/SDRuReceiver.p" };

emlrtRTEInfo u_emlrtRTEI = { 1, 58, "receiveData",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdru/usrp_uhd_mapi/receiveData.m" };

emlrtRTEInfo v_emlrtRTEI = { 1, 1, "setup",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/scomp/setup.m" };

emlrtRTEInfo w_emlrtRTEI = { 52, 20, "step",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/scomp/step.m" };

emlrtBCInfo emlrtBCI = { 0, 255, 17, 9, "char", "char",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/strfun/char.m", 2 };

emlrtECInfo emlrtECI = { -1, 403, 9, "OFDMModulator",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/OFDMModulator.m" };

emlrtDCInfo emlrtDCI = { 403, 9, "OFDMModulator",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/OFDMModulator.m", 1 };

emlrtRTEInfo x_emlrtRTEI = { 20, 5, "eml_error",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_error.m" };

emlrtBCInfo o_emlrtBCI = { -1, -1, 250, 19, "errStr", "mapiPrivate",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdru/usrp_uhd_mapi/mapiPrivate.m",
  0 };

testPHYTransmitStackData *testPHYTransmitStackDataLocal;

/* End of code generation (testPHYTransmit_data.c) */
