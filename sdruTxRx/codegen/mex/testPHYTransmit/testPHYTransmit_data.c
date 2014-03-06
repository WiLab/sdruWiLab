/*
 * testPHYTransmit_data.c
 *
 * Code generation for function 'testPHYTransmit_data'
 *
 * C source code generated on: Thu Feb 27 11:47:47 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testPHYTransmit.h"
#include "testPHYTransmit_data.h"

/* Variable Definitions */
const volatile char_T *emlrtBreakCheckR2012bFlagVar;
boolean_T isSetupsdruCalled;
emlrtRSInfo o_emlrtRSI = { 12, "eml_div",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_div.m" };

emlrtRSInfo p_emlrtRSI = { 37, "mpower",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/mpower.m" };

emlrtRSInfo q_emlrtRSI = { 42, "power",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/power.m" };

emlrtRSInfo r_emlrtRSI = { 58, "power",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/power.m" };

emlrtRSInfo s_emlrtRSI = { 12, "floor",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elfun/floor.m" };

emlrtRSInfo t_emlrtRSI = { 98, "eml_assert_valid_size_arg",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m"
};

emlrtRSInfo u_emlrtRSI = { 86, "eml_assert_valid_size_arg",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m"
};

emlrtRSInfo v_emlrtRSI = { 24, "indexIntRelop",
  "/Applications/MATLAB_R2013b.app/toolbox/shared/coder/coder/+coder/+internal/indexIntRelop.m"
};

emlrtRSInfo w_emlrtRSI = { 227, "indexIntRelop",
  "/Applications/MATLAB_R2013b.app/toolbox/shared/coder/coder/+coder/+internal/indexIntRelop.m"
};

emlrtRSInfo x_emlrtRSI = { 239, "indexIntRelop",
  "/Applications/MATLAB_R2013b.app/toolbox/shared/coder/coder/+coder/+internal/indexIntRelop.m"
};

emlrtRSInfo y_emlrtRSI = { 36, "randi",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/randfun/randi.m" };

emlrtRSInfo ab_emlrtRSI = { 38, "randi",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/randfun/randi.m" };

emlrtRSInfo bb_emlrtRSI = { 125, "eml_assert_valid_size_arg",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m"
};

emlrtRSInfo cb_emlrtRSI = { 117, "eml_assert_valid_size_arg",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m"
};

emlrtRSInfo db_emlrtRSI = { 45, "OFDMBase",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/OFDMBase.m" };

emlrtRSInfo eb_emlrtRSI = { 46, "OFDMBase",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/OFDMBase.m" };

emlrtRSInfo fb_emlrtRSI = { 1, "System",
  "/Applications/MATLAB_R2013b.app/toolbox/shared/system/coder/+matlab/+system/+coder/System.p"
};

emlrtRSInfo gb_emlrtRSI = { 1, "SystemCore",
  "/Applications/MATLAB_R2013b.app/toolbox/shared/system/coder/+matlab/+system/+coder/SystemCore.p"
};

emlrtRSInfo hb_emlrtRSI = { 1, "SystemProp",
  "/Applications/MATLAB_R2013b.app/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p"
};

emlrtRSInfo ib_emlrtRSI = { 168, "OFDMModulator",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/OFDMModulator.m" };

emlrtRSInfo jb_emlrtRSI = { 182, "OFDMModulator",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/OFDMModulator.m" };

emlrtRSInfo kb_emlrtRSI = { 29, "log2",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elfun/log2.m" };

emlrtRSInfo lb_emlrtRSI = { 35, "log2",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elfun/log2.m" };

emlrtRSInfo mb_emlrtRSI = { 61, "log2",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elfun/log2.m" };

emlrtRSInfo nb_emlrtRSI = { 86, "log2",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elfun/log2.m" };

emlrtRSInfo ob_emlrtRSI = { 87, "log2",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elfun/log2.m" };

emlrtRSInfo pb_emlrtRSI = { 91, "log2",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elfun/log2.m" };

emlrtRSInfo qb_emlrtRSI = { 43, "log2",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elfun/log2.m" };

emlrtRSInfo rb_emlrtRSI = { 1, "pvParse",
  "/Applications/MATLAB_R2013b.app/toolbox/matlab/system/+matlab/+system/pvParse.p"
};

emlrtRSInfo sb_emlrtRSI = { 14, "sqrt",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elfun/sqrt.m" };

emlrtRSInfo tb_emlrtRSI = { 19, "sqrt",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elfun/sqrt.m" };

emlrtRSInfo rc_emlrtRSI = { 318, "OFDMModulator",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/OFDMModulator.m" };

emlrtRSInfo tc_emlrtRSI = { 19, "abs",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elfun/abs.m" };

emlrtRSInfo fd_emlrtRSI = { 16, "ifftshift",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/datafun/ifftshift.m" };

emlrtRSInfo gd_emlrtRSI = { 22, "eml_ifftshift",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_ifftshift.m" };

emlrtRSInfo hd_emlrtRSI = { 35, "eml_fftshift",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fftshift.m" };

emlrtRSInfo id_emlrtRSI = { 40, "eml_fftshift",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fftshift.m" };

emlrtRSInfo jd_emlrtRSI = { 41, "eml_fftshift",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fftshift.m" };

emlrtRSInfo kd_emlrtRSI = { 55, "prodsize",
  "/Applications/MATLAB_R2013b.app/toolbox/shared/coder/coder/+coder/+internal/prodsize.m"
};

emlrtRSInfo ld_emlrtRSI = { 25, "ifft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/datafun/ifft.m" };

emlrtRSInfo md_emlrtRSI = { 49, "eml_fft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fft.m" };

emlrtRSInfo nd_emlrtRSI = { 101, "eml_fft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fft.m" };

emlrtRSInfo od_emlrtRSI = { 102, "eml_fft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fft.m" };

emlrtRSInfo pd_emlrtRSI = { 103, "eml_fft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fft.m" };

emlrtRSInfo qd_emlrtRSI = { 104, "eml_fft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fft.m" };

emlrtRSInfo rd_emlrtRSI = { 106, "eml_fft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fft.m" };

emlrtRSInfo sd_emlrtRSI = { 114, "eml_fft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fft.m" };

emlrtRSInfo td_emlrtRSI = { 115, "eml_fft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fft.m" };

emlrtRSInfo ud_emlrtRSI = { 116, "eml_fft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fft.m" };

emlrtRSInfo vd_emlrtRSI = { 129, "eml_fft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fft.m" };

emlrtRSInfo wd_emlrtRSI = { 131, "eml_fft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fft.m" };

emlrtRSInfo xd_emlrtRSI = { 133, "eml_fft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fft.m" };

emlrtRSInfo yd_emlrtRSI = { 132, "eml_fft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fft.m" };

emlrtRSInfo ae_emlrtRSI = { 134, "eml_fft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fft.m" };

emlrtRSInfo be_emlrtRSI = { 135, "eml_fft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fft.m" };

emlrtRSInfo ce_emlrtRSI = { 138, "eml_fft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fft.m" };

emlrtRSInfo de_emlrtRSI = { 139, "eml_fft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fft.m" };

emlrtRSInfo ee_emlrtRSI = { 170, "eml_fft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fft.m" };

emlrtRSInfo fe_emlrtRSI = { 171, "eml_fft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fft.m" };

emlrtRSInfo ge_emlrtRSI = { 191, "eml_fft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fft.m" };

emlrtRSInfo he_emlrtRSI = { 193, "eml_fft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fft.m" };

emlrtRSInfo ie_emlrtRSI = { 195, "eml_fft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fft.m" };

emlrtRSInfo je_emlrtRSI = { 194, "eml_fft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fft.m" };

emlrtRSInfo ke_emlrtRSI = { 196, "eml_fft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fft.m" };

emlrtRSInfo le_emlrtRSI = { 197, "eml_fft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fft.m" };

emlrtRSInfo me_emlrtRSI = { 199, "eml_fft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fft.m" };

emlrtRSInfo ne_emlrtRSI = { 200, "eml_fft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fft.m" };

emlrtRSInfo oe_emlrtRSI = { 202, "eml_fft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fft.m" };

emlrtRSInfo pe_emlrtRSI = { 204, "eml_fft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fft.m" };

emlrtRSInfo qe_emlrtRSI = { 205, "eml_fft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fft.m" };

emlrtRSInfo re_emlrtRSI = { 211, "eml_fft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fft.m" };

emlrtRSInfo se_emlrtRSI = { 16, "min",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/datafun/min.m" };

emlrtRSInfo te_emlrtRSI = { 18, "eml_min_or_max",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_min_or_max.m"
};

emlrtRSInfo ue_emlrtRSI = { 59, "eml_min_or_max",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_min_or_max.m"
};

emlrtRSInfo ve_emlrtRSI = { 124, "eml_min_or_max",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_min_or_max.m"
};

emlrtRSInfo we_emlrtRSI = { 153, "eml_min_or_max",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_min_or_max.m"
};

emlrtRSInfo xe_emlrtRSI = { 23, "eml_relop",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_relop.m" };

emlrtRSInfo ye_emlrtRSI = { 16, "max",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/datafun/max.m" };

emlrtRSInfo af_emlrtRSI = { 242, "eml_fft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fft.m" };

emlrtRSInfo bf_emlrtRSI = { 245, "eml_fft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fft.m" };

emlrtRSInfo cf_emlrtRSI = { 12, "cos",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elfun/cos.m" };

emlrtRSInfo df_emlrtRSI = { 12, "sin",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elfun/sin.m" };

emlrtRSInfo ef_emlrtRSI = { 266, "eml_fft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fft.m" };

emlrtRSInfo ff_emlrtRSI = { 267, "eml_fft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fft.m" };

emlrtRSInfo gf_emlrtRSI = { 270, "eml_fft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fft.m" };

emlrtRSInfo hf_emlrtRSI = { 271, "eml_fft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fft.m" };

emlrtRSInfo if_emlrtRSI = { 51, "cat",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elmat/cat.m" };

emlrtRSInfo jf_emlrtRSI = { 57, "cat",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elmat/cat.m" };

emlrtRSInfo kf_emlrtRSI = { 60, "cat",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elmat/cat.m" };

emlrtRSInfo lf_emlrtRSI = { 61, "cat",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elmat/cat.m" };

emlrtRSInfo nf_emlrtRSI = { 30, "dec2bin",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/strfun/dec2bin.m" };

emlrtRSInfo of_emlrtRSI = { 33, "dec2bin",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/strfun/dec2bin.m" };

emlrtRSInfo pf_emlrtRSI = { 136, "dec2bin",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/strfun/dec2bin.m" };

emlrtRSInfo qf_emlrtRSI = { 141, "dec2bin",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/strfun/dec2bin.m" };

emlrtRSInfo rf_emlrtRSI = { 142, "dec2bin",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/strfun/dec2bin.m" };

emlrtRSInfo sf_emlrtRSI = { 146, "dec2bin",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/strfun/dec2bin.m" };

emlrtRSInfo tf_emlrtRSI = { 38, "bitget",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/bitget.m" };

emlrtRSInfo uf_emlrtRSI = { 37, "bitget",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/bitget.m" };

emlrtRSInfo vf_emlrtRSI = { 105, "dec2bin",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/strfun/dec2bin.m" };

emlrtRSInfo wf_emlrtRSI = { 102, "dec2bin",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/strfun/dec2bin.m" };

emlrtRSInfo xf_emlrtRSI = { 101, "dec2bin",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/strfun/dec2bin.m" };

emlrtRSInfo yf_emlrtRSI = { 100, "dec2bin",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/strfun/dec2bin.m" };

emlrtRSInfo ag_emlrtRSI = { 94, "dec2bin",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/strfun/dec2bin.m" };

emlrtRSInfo bg_emlrtRSI = { 93, "dec2bin",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/strfun/dec2bin.m" };

emlrtRSInfo cg_emlrtRSI = { 9, "eml_int_forloop_overflow_check",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"
};

emlrtRSInfo dg_emlrtRSI = { 12, "eml_int_forloop_overflow_check",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"
};

emlrtRSInfo eg_emlrtRSI = { 116, "reshape",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elmat/reshape.m" };

emlrtRSInfo fg_emlrtRSI = { 20, "eml_index_prod",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_index_prod.m"
};

emlrtRSInfo gg_emlrtRSI = { 1, "CRCGenerator",
  "/Applications/MATLAB_R2013b.app/toolbox/comm/comm/+commcodegen/CRCGenerator.p"
};

emlrtRSInfo hg_emlrtRSI = { 1, "setProp",
  "/Applications/MATLAB_R2013b.app/toolbox/matlab/system/+matlab/+system/setProp.p"
};

emlrtRSInfo jg_emlrtRSI = { 1, "BPSKModulator",
  "/Applications/MATLAB_R2013b.app/toolbox/comm/comm/+commcodegen/BPSKModulator.p"
};

emlrtRSInfo kg_emlrtRSI = { 73, "mod",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elfun/mod.m" };

emlrtRSInfo lg_emlrtRSI = { 83, "mod",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elfun/mod.m" };

emlrtRSInfo mg_emlrtRSI = { 84, "mod",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elfun/mod.m" };

emlrtRSInfo ng_emlrtRSI = { 89, "mod",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elfun/mod.m" };

emlrtRSInfo og_emlrtRSI = { 90, "mod",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elfun/mod.m" };

emlrtRSInfo pg_emlrtRSI = { 93, "mod",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elfun/mod.m" };

emlrtRSInfo qg_emlrtRSI = { 65, "repmat",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elmat/repmat.m" };

emlrtRSInfo rg_emlrtRSI = { 66, "repmat",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elmat/repmat.m" };

emlrtRSInfo sg_emlrtRSI = { 37, "eml_sort_idx",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_sort_idx.m" };

emlrtRSInfo tg_emlrtRSI = { 139, "eml_sort_idx",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_sort_idx.m" };

emlrtRSInfo ug_emlrtRSI = { 141, "eml_sort_idx",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_sort_idx.m" };

emlrtRSInfo vg_emlrtRSI = { 148, "eml_sort_idx",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_sort_idx.m" };

emlrtRSInfo wg_emlrtRSI = { 150, "eml_sort_idx",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_sort_idx.m" };

emlrtRSInfo xg_emlrtRSI = { 154, "eml_sort_idx",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_sort_idx.m" };

emlrtRSInfo yg_emlrtRSI = { 159, "eml_sort_idx",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_sort_idx.m" };

emlrtRSInfo ah_emlrtRSI = { 142, "eml_sort_idx",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_sort_idx.m" };

emlrtRSInfo bh_emlrtRSI = { 161, "eml_sort_idx",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_sort_idx.m" };

emlrtRSInfo ch_emlrtRSI = { 163, "eml_sort_idx",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_sort_idx.m" };

emlrtRSInfo dh_emlrtRSI = { 166, "eml_sort_idx",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_sort_idx.m" };

emlrtRSInfo eh_emlrtRSI = { 168, "eml_sort_idx",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_sort_idx.m" };

emlrtRSInfo fh_emlrtRSI = { 173, "eml_sort_idx",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_sort_idx.m" };

emlrtRSInfo gh_emlrtRSI = { 176, "eml_sort_idx",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_sort_idx.m" };

emlrtRSInfo hh_emlrtRSI = { 178, "eml_sort_idx",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_sort_idx.m" };

emlrtRSInfo ih_emlrtRSI = { 182, "eml_sort_idx",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_sort_idx.m" };

emlrtRSInfo jh_emlrtRSI = { 184, "eml_sort_idx",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_sort_idx.m" };

emlrtRSInfo kh_emlrtRSI = { 185, "eml_sort_idx",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_sort_idx.m" };

emlrtRSInfo lh_emlrtRSI = { 186, "eml_sort_idx",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_sort_idx.m" };

emlrtRSInfo mh_emlrtRSI = { 189, "eml_sort_idx",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_sort_idx.m" };

emlrtRSInfo nh_emlrtRSI = { 20, "eml_sort_le",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_sort_le.m" };

emlrtRSInfo oh_emlrtRSI = { 53, "eml_sort_le",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_sort_le.m" };

emlrtRSInfo ph_emlrtRSI = { 261, "unique",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/unique.m" };

emlrtRSInfo qh_emlrtRSI = { 260, "unique",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/unique.m" };

emlrtRSInfo rh_emlrtRSI = { 256, "unique",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/unique.m" };

emlrtRSInfo sh_emlrtRSI = { 251, "unique",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/unique.m" };

emlrtRSInfo th_emlrtRSI = { 17, "eml_safe_eq",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_safe_eq.m" };

emlrtRSInfo uh_emlrtRSI = { 26, "eps",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elmat/eps.m" };

emlrtRSInfo vh_emlrtRSI = { 102, "OFDMBase",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/OFDMBase.m" };

emlrtRSInfo wh_emlrtRSI = { 42, "unique",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/unique.m" };

emlrtRSInfo xh_emlrtRSI = { 228, "unique",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/unique.m" };

emlrtRSInfo yh_emlrtRSI = { 220, "unique",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/unique.m" };

emlrtRSInfo ai_emlrtRSI = { 219, "unique",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/unique.m" };

emlrtRSInfo bi_emlrtRSI = { 218, "unique",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/unique.m" };

emlrtRSInfo ci_emlrtRSI = { 217, "unique",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/unique.m" };

emlrtRSInfo di_emlrtRSI = { 207, "unique",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/unique.m" };

emlrtRSInfo ei_emlrtRSI = { 206, "unique",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/unique.m" };

emlrtRSInfo fi_emlrtRSI = { 205, "unique",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/unique.m" };

emlrtRSInfo gi_emlrtRSI = { 194, "unique",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/unique.m" };

emlrtRSInfo hi_emlrtRSI = { 192, "unique",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/unique.m" };

emlrtRSInfo ii_emlrtRSI = { 187, "unique",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/unique.m" };

emlrtRSInfo ji_emlrtRSI = { 186, "unique",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/unique.m" };

emlrtRSInfo ki_emlrtRSI = { 180, "unique",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/unique.m" };

emlrtRSInfo li_emlrtRSI = { 179, "unique",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/unique.m" };

emlrtRSInfo mi_emlrtRSI = { 169, "unique",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/unique.m" };

emlrtRSInfo ni_emlrtRSI = { 163, "unique",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/unique.m" };

emlrtRSInfo oi_emlrtRSI = { 163, "OFDMBase",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/OFDMBase.m" };

emlrtRSInfo pi_emlrtRSI = { 355, "OFDMModulator",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/OFDMModulator.m" };

emlrtRSInfo qi_emlrtRSI = { 378, "OFDMModulator",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/OFDMModulator.m" };

emlrtRSInfo ri_emlrtRSI = { 384, "OFDMModulator",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/OFDMModulator.m" };

emlrtRSInfo si_emlrtRSI = { 65, "sub2ind",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elmat/sub2ind.m" };

emlrtRSInfo ti_emlrtRSI = { 233, "indexIntRelop",
  "/Applications/MATLAB_R2013b.app/toolbox/shared/coder/coder/+coder/+internal/indexIntRelop.m"
};

emlrtRSInfo ui_emlrtRSI = { 55, "sub2ind",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elmat/sub2ind.m" };

emlrtRSInfo vi_emlrtRSI = { 52, "sub2ind",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elmat/sub2ind.m" };

emlrtRSInfo wi_emlrtRSI = { 51, "sub2ind",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elmat/sub2ind.m" };

emlrtRSInfo xi_emlrtRSI = { 8, "isequal",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elmat/isequal.m" };

emlrtRSInfo yi_emlrtRSI = { 30, "eml_isequal_core",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_isequal_core.m"
};

emlrtRSInfo aj_emlrtRSI = { 61, "eml_isequal_core",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_isequal_core.m"
};

emlrtRSInfo bj_emlrtRSI = { 81, "eml_isequal_core",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_isequal_core.m"
};

emlrtRSInfo cj_emlrtRSI = { 78, "sub2ind",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elmat/sub2ind.m" };

emlrtRSInfo dj_emlrtRSI = { 97, "eml_scalar_eg",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m" };

emlrtRSInfo ej_emlrtRSI = { 29, "eml_fftshift",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fftshift.m" };

emlrtRSInfo fj_emlrtRSI = { 31, "eml_fftshift",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fftshift.m" };

emlrtRSInfo gj_emlrtRSI = { 32, "eml_fftshift",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fftshift.m" };

emlrtRSInfo hj_emlrtRSI = { 108, "eml_fft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fft.m" };

emlrtRSInfo ij_emlrtRSI = { 111, "eml_fft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fft.m" };

emlrtRSInfo jj_emlrtRSI = { 113, "eml_fft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fft.m" };

emlrtRSInfo kj_emlrtRSI = { 122, "eml_fft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fft.m" };

emlrtRSInfo lj_emlrtRSI = { 66, "cat",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elmat/cat.m" };

emlrtRSInfo mj_emlrtRSI = { 70, "OFDMDemodulator",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/OFDMDemodulator.m" };

emlrtRSInfo nj_emlrtRSI = { 73, "OFDMDemodulator",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/OFDMDemodulator.m" };

emlrtRSInfo oj_emlrtRSI = { 74, "OFDMDemodulator",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/OFDMDemodulator.m" };

emlrtRSInfo pj_emlrtRSI = { 75, "OFDMDemodulator",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/OFDMDemodulator.m" };

emlrtRSInfo qj_emlrtRSI = { 76, "OFDMDemodulator",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/OFDMDemodulator.m" };

emlrtRSInfo rj_emlrtRSI = { 77, "OFDMDemodulator",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/OFDMDemodulator.m" };

emlrtRSInfo sj_emlrtRSI = { 78, "OFDMDemodulator",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/OFDMDemodulator.m" };

emlrtRSInfo tj_emlrtRSI = { 80, "OFDMDemodulator",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/OFDMDemodulator.m" };

emlrtRSInfo vj_emlrtRSI = { 1, "SDRuBase",
  "/Users/travis/Documents/sdru/+comm/+internal/SDRuBase.p" };

emlrtRSInfo fk_emlrtRSI = { 24, "eml_all_or_any",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_all_or_any.m"
};

emlrtRSInfo gk_emlrtRSI = { 98, "eml_all_or_any",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_all_or_any.m"
};

emlrtRSInfo hk_emlrtRSI = { 104, "eml_all_or_any",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_all_or_any.m"
};

emlrtRSInfo ik_emlrtRSI = { 106, "eml_all_or_any",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_all_or_any.m"
};

emlrtRSInfo jk_emlrtRSI = { 107, "eml_all_or_any",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_all_or_any.m"
};

emlrtRSInfo kk_emlrtRSI = { 109, "eml_all_or_any",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_all_or_any.m"
};

emlrtRSInfo lk_emlrtRSI = { 56, "eml_isequal_core",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_isequal_core.m"
};

emlrtRSInfo mk_emlrtRSI = { 50, "prodsize",
  "/Applications/MATLAB_R2013b.app/toolbox/shared/coder/coder/+coder/+internal/prodsize.m"
};

emlrtRSInfo nk_emlrtRSI = { 9, "warning",
  "/Applications/MATLAB_R2013b.app/toolbox/shared/coder/coder/+coder/+internal/warning.m"
};

emlrtRSInfo kl_emlrtRSI = { 376, "validateattributes",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/lang/validateattributes.m"
};

emlrtRSInfo ll_emlrtRSI = { 420, "validateattributes",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/lang/validateattributes.m"
};

emlrtRSInfo ml_emlrtRSI = { 140, "AGC",
  "/Applications/MATLAB_R2013b.app/toolbox/comm/comm/+comm/AGC.m" };

emlrtRSInfo nl_emlrtRSI = { 141, "AGC",
  "/Applications/MATLAB_R2013b.app/toolbox/comm/comm/+comm/AGC.m" };

emlrtRSInfo ol_emlrtRSI = { 432, "validateattributes",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/lang/validateattributes.m"
};

emlrtRSInfo ql_emlrtRSI = { 1, "CRCDetector",
  "/Applications/MATLAB_R2013b.app/toolbox/comm/comm/+commcodegen/CRCDetector.p"
};

emlrtRSInfo vl_emlrtRSI = { 12, "all",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/all.m" };

emlrtRSInfo wl_emlrtRSI = { 6, "openDataConnection",
  "/Users/travis/Documents/sdru/usrp_uhd_mapi/openDataConnection.m" };

emlrtRSInfo am_emlrtRSI = { 91, "reportSDRuStatus",
  "/Users/travis/Documents/sdru/reportSDRuStatus.m" };

emlrtRSInfo cm_emlrtRSI = { 81, "reportSDRuStatus",
  "/Users/travis/Documents/sdru/reportSDRuStatus.m" };

emlrtRSInfo em_emlrtRSI = { 71, "reportSDRuStatus",
  "/Users/travis/Documents/sdru/reportSDRuStatus.m" };

emlrtRSInfo gm_emlrtRSI = { 61, "reportSDRuStatus",
  "/Users/travis/Documents/sdru/reportSDRuStatus.m" };

emlrtRSInfo im_emlrtRSI = { 51, "reportSDRuStatus",
  "/Users/travis/Documents/sdru/reportSDRuStatus.m" };

emlrtRSInfo km_emlrtRSI = { 35, "reportSDRuStatus",
  "/Users/travis/Documents/sdru/reportSDRuStatus.m" };

emlrtRSInfo lm_emlrtRSI = { 17, "getSDRuDriverVersion",
  "/Users/travis/Documents/sdru/usrp_uhd_mapi/getSDRuDriverVersion.m" };

emlrtRSInfo mm_emlrtRSI = { 9, "sendInt16Data",
  "/Users/travis/Documents/sdru/usrp_uhd_mapi/sendInt16Data.m" };

emlrtRSInfo nm_emlrtRSI = { 9, "sendComplexInt16Data",
  "/Users/travis/Documents/sdru/usrp_uhd_mapi/sendComplexInt16Data.m" };

emlrtRSInfo om_emlrtRSI = { 9, "sendSingleData",
  "/Users/travis/Documents/sdru/usrp_uhd_mapi/sendSingleData.m" };

emlrtRSInfo pm_emlrtRSI = { 9, "sendComplexSingleData",
  "/Users/travis/Documents/sdru/usrp_uhd_mapi/sendComplexSingleData.m" };

emlrtRSInfo qm_emlrtRSI = { 9, "sendDoubleData",
  "/Users/travis/Documents/sdru/usrp_uhd_mapi/sendDoubleData.m" };

emlrtMCInfo emlrtMCI = { 1, 1, "SystemCore",
  "/Applications/MATLAB_R2013b.app/toolbox/shared/system/coder/+matlab/+system/+coder/SystemCore.p"
};

emlrtMCInfo c_emlrtMCI = { 31, 5, "dec2bin",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/strfun/dec2bin.m" };

emlrtMCInfo d_emlrtMCI = { 30, 15, "dec2bin",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/strfun/dec2bin.m" };

emlrtMCInfo g_emlrtMCI = { 15, 19, "errorIf",
  "/Applications/MATLAB_R2013b.app/toolbox/shared/coder/coder/+coder/+internal/errorIf.m"
};

emlrtMCInfo h_emlrtMCI = { 25, 9, "eml_all_or_any",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_all_or_any.m"
};

emlrtMCInfo i_emlrtMCI = { 24, 19, "eml_all_or_any",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_all_or_any.m"
};

emlrtMCInfo j_emlrtMCI = { 30, 9, "eml_all_or_any",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_all_or_any.m"
};

emlrtMCInfo k_emlrtMCI = { 27, 19, "eml_all_or_any",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_all_or_any.m"
};

emlrtMCInfo l_emlrtMCI = { 16, 13, "eml_warning",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_warning.m" };

emlrtMCInfo m_emlrtMCI = { 16, 5, "eml_warning",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_warning.m" };

emlrtMCInfo n_emlrtMCI = { 266, 5, "mapiPrivate",
  "/Users/travis/Documents/sdru/usrp_uhd_mapi/mapiPrivate.m" };

emlrtMCInfo o_emlrtMCI = { 19, 15, "mapiPrivate",
  "/Users/travis/Documents/sdru/usrp_uhd_mapi/mapiPrivate.m" };

emlrtMCInfo p_emlrtMCI = { 19, 5, "mapiPrivate",
  "/Users/travis/Documents/sdru/usrp_uhd_mapi/mapiPrivate.m" };

emlrtMCInfo q_emlrtMCI = { 104, 13, "mapiPrivate",
  "/Users/travis/Documents/sdru/usrp_uhd_mapi/mapiPrivate.m" };

emlrtRTEInfo emlrtRTEI = { 159, 1, "unique",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/unique.m" };

emlrtRTEInfo b_emlrtRTEI = { 1, 48, "generateOFDMSignal_TX2",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/private/generateOFDMSignal_TX2.m" };

emlrtRTEInfo e_emlrtRTEI = { 127, 5, "find",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elmat/find.m" };

emlrtRTEInfo h_emlrtRTEI = { 1, 14, "OFDMletters2bits",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/private/OFDMletters2bits.m" };

emlrtRTEInfo i_emlrtRTEI = { 168, 21, "OFDMModulator",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/OFDMModulator.m" };

emlrtRTEInfo j_emlrtRTEI = { 47, 20, "find",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elmat/find.m" };

emlrtRTEInfo l_emlrtRTEI = { 111, 5, "find",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elmat/find.m" };

emlrtRTEInfo m_emlrtRTEI = { 1, 17, "checkIPAddressFormat",
  "/Users/travis/Documents/sdru/checkIPAddressFormat.m" };

emlrtRTEInfo n_emlrtRTEI = { 1, 48, "generateOFDMSignal",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/private/generateOFDMSignal.m" };

emlrtRTEInfo q_emlrtRTEI = { 1, 33, "initializeOFDMSyncMemory_sdr",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/private/initializeOFDMSyncMemory_sdr.m"
};

emlrtRTEInfo r_emlrtRTEI = { 1, 13, "SDRuTransmitter",
  "/Users/travis/Documents/sdru/+comm/SDRuTransmitter.p" };

emlrtRTEInfo s_emlrtRTEI = { 1, 30, "closeDataConnection",
  "/Users/travis/Documents/sdru/usrp_uhd_mapi/closeDataConnection.m" };

emlrtRTEInfo t_emlrtRTEI = { 1, 41, "sendComplexDoubleData",
  "/Users/travis/Documents/sdru/usrp_uhd_mapi/sendComplexDoubleData.m" };

emlrtRTEInfo u_emlrtRTEI = { 1, 10, "error",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/lang/error.m" };

emlrtRTEInfo v_emlrtRTEI = { 1, 13, "SDRuReceiver",
  "/Users/travis/Documents/sdru/+comm/SDRuReceiver.p" };

emlrtRTEInfo w_emlrtRTEI = { 1, 58, "receiveData",
  "/Users/travis/Documents/sdru/usrp_uhd_mapi/receiveData.m" };

emlrtRTEInfo x_emlrtRTEI = { 1, 1, "setup",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/scomp/setup.m" };

emlrtRTEInfo y_emlrtRTEI = { 52, 20, "step",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/scomp/step.m" };

emlrtBCInfo emlrtBCI = { 0, 255, 17, 9, "char", "char",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/strfun/char.m", 2 };

emlrtECInfo emlrtECI = { -1, 403, 9, "OFDMModulator",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/OFDMModulator.m" };

emlrtDCInfo emlrtDCI = { 403, 9, "OFDMModulator",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/OFDMModulator.m", 1 };

emlrtRTEInfo ab_emlrtRTEI = { 20, 5, "eml_error",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_error.m" };

emlrtBCInfo o_emlrtBCI = { -1, -1, 267, 19, "errStr", "mapiPrivate",
  "/Users/travis/Documents/sdru/usrp_uhd_mapi/mapiPrivate.m", 0 };

testPHYTransmitStackData *testPHYTransmitStackDataLocal;
emlrtRSInfo tm_emlrtRSI = { 266, "mapiPrivate",
  "/Users/travis/Documents/sdru/usrp_uhd_mapi/mapiPrivate.m" };

emlrtRSInfo um_emlrtRSI = { 15, "errorIf",
  "/Applications/MATLAB_R2013b.app/toolbox/shared/coder/coder/+coder/+internal/errorIf.m"
};

emlrtRSInfo wm_emlrtRSI = { 19, "mapiPrivate",
  "/Users/travis/Documents/sdru/usrp_uhd_mapi/mapiPrivate.m" };

/* End of code generation (testPHYTransmit_data.c) */
