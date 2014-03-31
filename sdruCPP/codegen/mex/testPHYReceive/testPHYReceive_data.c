/*
 * testPHYReceive_data.c
 *
 * Code generation for function 'testPHYReceive_data'
 *
 * C source code generated on: Thu Feb 27 11:53:20 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testPHYReceive.h"
#include "testPHYReceive_data.h"

/* Variable Definitions */
const volatile char_T *emlrtBreakCheckR2012bFlagVar;
boolean_T isSetupsdruCalled;
emlrtRSInfo j_emlrtRSI = { 1, "mrdivide",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/mrdivide.p" };

emlrtRSInfo k_emlrtRSI = { 15, "rdivide",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/rdivide.m" };

emlrtRSInfo l_emlrtRSI = { 12, "eml_div",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_div.m" };

emlrtRSInfo m_emlrtRSI = { 37, "mpower",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/mpower.m" };

emlrtRSInfo p_emlrtRSI = { 12, "floor",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elfun/floor.m" };

emlrtRSInfo q_emlrtRSI = { 98, "eml_assert_valid_size_arg",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m"
};

emlrtRSInfo r_emlrtRSI = { 86, "eml_assert_valid_size_arg",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m"
};

emlrtRSInfo s_emlrtRSI = { 24, "indexIntRelop",
  "/Applications/MATLAB_R2013b.app/toolbox/shared/coder/coder/+coder/+internal/indexIntRelop.m"
};

emlrtRSInfo t_emlrtRSI = { 239, "indexIntRelop",
  "/Applications/MATLAB_R2013b.app/toolbox/shared/coder/coder/+coder/+internal/indexIntRelop.m"
};

emlrtRSInfo u_emlrtRSI = { 36, "randi",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/randfun/randi.m" };

emlrtRSInfo v_emlrtRSI = { 38, "randi",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/randfun/randi.m" };

emlrtRSInfo w_emlrtRSI = { 125, "eml_assert_valid_size_arg",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m"
};

emlrtRSInfo x_emlrtRSI = { 117, "eml_assert_valid_size_arg",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m"
};

emlrtRSInfo y_emlrtRSI = { 45, "OFDMBase",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/OFDMBase.m" };

emlrtRSInfo ab_emlrtRSI = { 46, "OFDMBase",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/OFDMBase.m" };

emlrtRSInfo bb_emlrtRSI = { 1, "System",
  "/Applications/MATLAB_R2013b.app/toolbox/shared/system/coder/+matlab/+system/+coder/System.p"
};

emlrtRSInfo cb_emlrtRSI = { 1, "SystemCore",
  "/Applications/MATLAB_R2013b.app/toolbox/shared/system/coder/+matlab/+system/+coder/SystemCore.p"
};

emlrtRSInfo db_emlrtRSI = { 1, "SystemProp",
  "/Applications/MATLAB_R2013b.app/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p"
};

emlrtRSInfo gb_emlrtRSI = { 29, "log2",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elfun/log2.m" };

emlrtRSInfo hb_emlrtRSI = { 35, "log2",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elfun/log2.m" };

emlrtRSInfo ib_emlrtRSI = { 61, "log2",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elfun/log2.m" };

emlrtRSInfo jb_emlrtRSI = { 86, "log2",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elfun/log2.m" };

emlrtRSInfo kb_emlrtRSI = { 87, "log2",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elfun/log2.m" };

emlrtRSInfo lb_emlrtRSI = { 91, "log2",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elfun/log2.m" };

emlrtRSInfo mb_emlrtRSI = { 12, "isfinite",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elmat/isfinite.m" };

emlrtRSInfo nb_emlrtRSI = { 43, "log2",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elfun/log2.m" };

emlrtRSInfo ob_emlrtRSI = { 1, "pvParse",
  "/Applications/MATLAB_R2013b.app/toolbox/matlab/system/+matlab/+system/pvParse.p"
};

emlrtRSInfo pb_emlrtRSI = { 14, "sqrt",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elfun/sqrt.m" };

emlrtRSInfo qb_emlrtRSI = { 19, "sqrt",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elfun/sqrt.m" };

emlrtRSInfo oc_emlrtRSI = { 318, "OFDMModulator",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/OFDMModulator.m" };

emlrtRSInfo vc_emlrtRSI = { 41, "find",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elmat/find.m" };

emlrtRSInfo cd_emlrtRSI = { 16, "ifftshift",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/datafun/ifftshift.m" };

emlrtRSInfo dd_emlrtRSI = { 22, "eml_ifftshift",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_ifftshift.m" };

emlrtRSInfo gd_emlrtRSI = { 55, "prodsize",
  "/Applications/MATLAB_R2013b.app/toolbox/shared/coder/coder/+coder/+internal/prodsize.m"
};

emlrtRSInfo hd_emlrtRSI = { 25, "ifft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/datafun/ifft.m" };

emlrtRSInfo jd_emlrtRSI = { 101, "eml_fft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fft.m" };

emlrtRSInfo kd_emlrtRSI = { 102, "eml_fft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fft.m" };

emlrtRSInfo ld_emlrtRSI = { 103, "eml_fft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fft.m" };

emlrtRSInfo md_emlrtRSI = { 104, "eml_fft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fft.m" };

emlrtRSInfo nd_emlrtRSI = { 106, "eml_fft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fft.m" };

emlrtRSInfo od_emlrtRSI = { 114, "eml_fft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fft.m" };

emlrtRSInfo pd_emlrtRSI = { 115, "eml_fft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fft.m" };

emlrtRSInfo qd_emlrtRSI = { 116, "eml_fft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fft.m" };

emlrtRSInfo rd_emlrtRSI = { 129, "eml_fft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fft.m" };

emlrtRSInfo sd_emlrtRSI = { 131, "eml_fft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fft.m" };

emlrtRSInfo td_emlrtRSI = { 133, "eml_fft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fft.m" };

emlrtRSInfo ud_emlrtRSI = { 132, "eml_fft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fft.m" };

emlrtRSInfo vd_emlrtRSI = { 134, "eml_fft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fft.m" };

emlrtRSInfo wd_emlrtRSI = { 135, "eml_fft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fft.m" };

emlrtRSInfo xd_emlrtRSI = { 139, "eml_fft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fft.m" };

emlrtRSInfo yd_emlrtRSI = { 170, "eml_fft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fft.m" };

emlrtRSInfo ae_emlrtRSI = { 171, "eml_fft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fft.m" };

emlrtRSInfo be_emlrtRSI = { 191, "eml_fft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fft.m" };

emlrtRSInfo ce_emlrtRSI = { 193, "eml_fft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fft.m" };

emlrtRSInfo de_emlrtRSI = { 195, "eml_fft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fft.m" };

emlrtRSInfo ee_emlrtRSI = { 194, "eml_fft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fft.m" };

emlrtRSInfo fe_emlrtRSI = { 196, "eml_fft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fft.m" };

emlrtRSInfo ge_emlrtRSI = { 197, "eml_fft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fft.m" };

emlrtRSInfo he_emlrtRSI = { 199, "eml_fft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fft.m" };

emlrtRSInfo ie_emlrtRSI = { 200, "eml_fft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fft.m" };

emlrtRSInfo je_emlrtRSI = { 202, "eml_fft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fft.m" };

emlrtRSInfo ke_emlrtRSI = { 204, "eml_fft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fft.m" };

emlrtRSInfo le_emlrtRSI = { 205, "eml_fft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fft.m" };

emlrtRSInfo me_emlrtRSI = { 211, "eml_fft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fft.m" };

emlrtRSInfo ne_emlrtRSI = { 16, "min",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/datafun/min.m" };

emlrtRSInfo oe_emlrtRSI = { 18, "eml_min_or_max",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_min_or_max.m"
};

emlrtRSInfo pe_emlrtRSI = { 59, "eml_min_or_max",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_min_or_max.m"
};

emlrtRSInfo qe_emlrtRSI = { 124, "eml_min_or_max",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_min_or_max.m"
};

emlrtRSInfo re_emlrtRSI = { 153, "eml_min_or_max",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_min_or_max.m"
};

emlrtRSInfo se_emlrtRSI = { 23, "eml_relop",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_relop.m" };

emlrtRSInfo te_emlrtRSI = { 16, "max",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/datafun/max.m" };

emlrtRSInfo ue_emlrtRSI = { 242, "eml_fft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fft.m" };

emlrtRSInfo ve_emlrtRSI = { 245, "eml_fft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fft.m" };

emlrtRSInfo we_emlrtRSI = { 12, "cos",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elfun/cos.m" };

emlrtRSInfo xe_emlrtRSI = { 12, "sin",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elfun/sin.m" };

emlrtRSInfo ye_emlrtRSI = { 266, "eml_fft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fft.m" };

emlrtRSInfo af_emlrtRSI = { 267, "eml_fft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fft.m" };

emlrtRSInfo bf_emlrtRSI = { 270, "eml_fft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fft.m" };

emlrtRSInfo cf_emlrtRSI = { 271, "eml_fft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fft.m" };

emlrtRSInfo df_emlrtRSI = { 60, "cat",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elmat/cat.m" };

emlrtRSInfo ef_emlrtRSI = { 61, "cat",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elmat/cat.m" };

emlrtRSInfo hf_emlrtRSI = { 33, "dec2bin",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/strfun/dec2bin.m" };

emlrtRSInfo if_emlrtRSI = { 136, "dec2bin",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/strfun/dec2bin.m" };

emlrtRSInfo jf_emlrtRSI = { 141, "dec2bin",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/strfun/dec2bin.m" };

emlrtRSInfo kf_emlrtRSI = { 142, "dec2bin",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/strfun/dec2bin.m" };

emlrtRSInfo lf_emlrtRSI = { 146, "dec2bin",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/strfun/dec2bin.m" };

emlrtRSInfo mf_emlrtRSI = { 38, "bitget",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/bitget.m" };

emlrtRSInfo nf_emlrtRSI = { 37, "bitget",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/bitget.m" };

emlrtRSInfo of_emlrtRSI = { 105, "dec2bin",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/strfun/dec2bin.m" };

emlrtRSInfo pf_emlrtRSI = { 102, "dec2bin",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/strfun/dec2bin.m" };

emlrtRSInfo qf_emlrtRSI = { 101, "dec2bin",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/strfun/dec2bin.m" };

emlrtRSInfo rf_emlrtRSI = { 100, "dec2bin",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/strfun/dec2bin.m" };

emlrtRSInfo sf_emlrtRSI = { 94, "dec2bin",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/strfun/dec2bin.m" };

emlrtRSInfo tf_emlrtRSI = { 93, "dec2bin",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/strfun/dec2bin.m" };

emlrtRSInfo uf_emlrtRSI = { 9, "eml_int_forloop_overflow_check",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"
};

emlrtRSInfo vf_emlrtRSI = { 12, "eml_int_forloop_overflow_check",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"
};

emlrtRSInfo wf_emlrtRSI = { 20, "eml_index_prod",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_index_prod.m"
};

emlrtRSInfo xf_emlrtRSI = { 1, "CRCGenerator",
  "/Applications/MATLAB_R2013b.app/toolbox/comm/comm/+commcodegen/CRCGenerator.p"
};

emlrtRSInfo yf_emlrtRSI = { 1, "setProp",
  "/Applications/MATLAB_R2013b.app/toolbox/matlab/system/+matlab/+system/setProp.p"
};

emlrtRSInfo ag_emlrtRSI = { 1, "Nondirect",
  "/Applications/MATLAB_R2013b.app/toolbox/shared/system/coder/+matlab/+system/+mixin/+coder/Nondirect.p"
};

emlrtRSInfo bg_emlrtRSI = { 1, "BPSKModulator",
  "/Applications/MATLAB_R2013b.app/toolbox/comm/comm/+commcodegen/BPSKModulator.p"
};

emlrtRSInfo cg_emlrtRSI = { 73, "mod",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elfun/mod.m" };

emlrtRSInfo dg_emlrtRSI = { 83, "mod",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elfun/mod.m" };

emlrtRSInfo eg_emlrtRSI = { 84, "mod",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elfun/mod.m" };

emlrtRSInfo fg_emlrtRSI = { 89, "mod",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elfun/mod.m" };

emlrtRSInfo gg_emlrtRSI = { 90, "mod",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elfun/mod.m" };

emlrtRSInfo hg_emlrtRSI = { 93, "mod",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elfun/mod.m" };

emlrtRSInfo ig_emlrtRSI = { 65, "repmat",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elmat/repmat.m" };

emlrtRSInfo jg_emlrtRSI = { 66, "repmat",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elmat/repmat.m" };

emlrtRSInfo kg_emlrtRSI = { 37, "eml_sort_idx",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_sort_idx.m" };

emlrtRSInfo lg_emlrtRSI = { 139, "eml_sort_idx",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_sort_idx.m" };

emlrtRSInfo mg_emlrtRSI = { 141, "eml_sort_idx",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_sort_idx.m" };

emlrtRSInfo ng_emlrtRSI = { 148, "eml_sort_idx",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_sort_idx.m" };

emlrtRSInfo og_emlrtRSI = { 150, "eml_sort_idx",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_sort_idx.m" };

emlrtRSInfo pg_emlrtRSI = { 154, "eml_sort_idx",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_sort_idx.m" };

emlrtRSInfo qg_emlrtRSI = { 159, "eml_sort_idx",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_sort_idx.m" };

emlrtRSInfo rg_emlrtRSI = { 142, "eml_sort_idx",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_sort_idx.m" };

emlrtRSInfo sg_emlrtRSI = { 161, "eml_sort_idx",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_sort_idx.m" };

emlrtRSInfo tg_emlrtRSI = { 163, "eml_sort_idx",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_sort_idx.m" };

emlrtRSInfo ug_emlrtRSI = { 166, "eml_sort_idx",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_sort_idx.m" };

emlrtRSInfo vg_emlrtRSI = { 168, "eml_sort_idx",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_sort_idx.m" };

emlrtRSInfo wg_emlrtRSI = { 173, "eml_sort_idx",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_sort_idx.m" };

emlrtRSInfo xg_emlrtRSI = { 176, "eml_sort_idx",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_sort_idx.m" };

emlrtRSInfo yg_emlrtRSI = { 178, "eml_sort_idx",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_sort_idx.m" };

emlrtRSInfo ah_emlrtRSI = { 182, "eml_sort_idx",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_sort_idx.m" };

emlrtRSInfo bh_emlrtRSI = { 184, "eml_sort_idx",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_sort_idx.m" };

emlrtRSInfo ch_emlrtRSI = { 185, "eml_sort_idx",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_sort_idx.m" };

emlrtRSInfo dh_emlrtRSI = { 186, "eml_sort_idx",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_sort_idx.m" };

emlrtRSInfo eh_emlrtRSI = { 189, "eml_sort_idx",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_sort_idx.m" };

emlrtRSInfo fh_emlrtRSI = { 20, "eml_sort_le",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_sort_le.m" };

emlrtRSInfo gh_emlrtRSI = { 53, "eml_sort_le",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_sort_le.m" };

emlrtRSInfo hh_emlrtRSI = { 261, "unique",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/unique.m" };

emlrtRSInfo ih_emlrtRSI = { 260, "unique",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/unique.m" };

emlrtRSInfo jh_emlrtRSI = { 256, "unique",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/unique.m" };

emlrtRSInfo kh_emlrtRSI = { 251, "unique",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/unique.m" };

emlrtRSInfo lh_emlrtRSI = { 17, "eml_safe_eq",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_safe_eq.m" };

emlrtRSInfo mh_emlrtRSI = { 18, "eml_safe_eq",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_safe_eq.m" };

emlrtRSInfo nh_emlrtRSI = { 26, "eps",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elmat/eps.m" };

emlrtRSInfo oh_emlrtRSI = { 27, "eps",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elmat/eps.m" };

emlrtRSInfo ph_emlrtRSI = { 102, "OFDMBase",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/OFDMBase.m" };

emlrtRSInfo qh_emlrtRSI = { 42, "unique",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/unique.m" };

emlrtRSInfo rh_emlrtRSI = { 228, "unique",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/unique.m" };

emlrtRSInfo sh_emlrtRSI = { 220, "unique",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/unique.m" };

emlrtRSInfo th_emlrtRSI = { 219, "unique",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/unique.m" };

emlrtRSInfo uh_emlrtRSI = { 218, "unique",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/unique.m" };

emlrtRSInfo vh_emlrtRSI = { 217, "unique",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/unique.m" };

emlrtRSInfo wh_emlrtRSI = { 207, "unique",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/unique.m" };

emlrtRSInfo xh_emlrtRSI = { 206, "unique",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/unique.m" };

emlrtRSInfo yh_emlrtRSI = { 205, "unique",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/unique.m" };

emlrtRSInfo ai_emlrtRSI = { 194, "unique",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/unique.m" };

emlrtRSInfo bi_emlrtRSI = { 192, "unique",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/unique.m" };

emlrtRSInfo ci_emlrtRSI = { 187, "unique",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/unique.m" };

emlrtRSInfo di_emlrtRSI = { 186, "unique",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/unique.m" };

emlrtRSInfo ei_emlrtRSI = { 180, "unique",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/unique.m" };

emlrtRSInfo fi_emlrtRSI = { 179, "unique",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/unique.m" };

emlrtRSInfo gi_emlrtRSI = { 169, "unique",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/unique.m" };

emlrtRSInfo hi_emlrtRSI = { 163, "unique",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/unique.m" };

emlrtRSInfo ii_emlrtRSI = { 163, "OFDMBase",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/OFDMBase.m" };

emlrtRSInfo ji_emlrtRSI = { 355, "OFDMModulator",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/OFDMModulator.m" };

emlrtRSInfo ki_emlrtRSI = { 378, "OFDMModulator",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/OFDMModulator.m" };

emlrtRSInfo li_emlrtRSI = { 384, "OFDMModulator",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/OFDMModulator.m" };

emlrtRSInfo mi_emlrtRSI = { 65, "sub2ind",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elmat/sub2ind.m" };

emlrtRSInfo ni_emlrtRSI = { 233, "indexIntRelop",
  "/Applications/MATLAB_R2013b.app/toolbox/shared/coder/coder/+coder/+internal/indexIntRelop.m"
};

emlrtRSInfo oi_emlrtRSI = { 55, "sub2ind",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elmat/sub2ind.m" };

emlrtRSInfo pi_emlrtRSI = { 52, "sub2ind",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elmat/sub2ind.m" };

emlrtRSInfo qi_emlrtRSI = { 51, "sub2ind",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elmat/sub2ind.m" };

emlrtRSInfo ri_emlrtRSI = { 8, "isequal",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elmat/isequal.m" };

emlrtRSInfo si_emlrtRSI = { 30, "eml_isequal_core",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_isequal_core.m"
};

emlrtRSInfo ti_emlrtRSI = { 61, "eml_isequal_core",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_isequal_core.m"
};

emlrtRSInfo ui_emlrtRSI = { 78, "sub2ind",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elmat/sub2ind.m" };

emlrtRSInfo vi_emlrtRSI = { 97, "eml_scalar_eg",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m" };

emlrtRSInfo bj_emlrtRSI = { 108, "eml_fft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fft.m" };

emlrtRSInfo cj_emlrtRSI = { 111, "eml_fft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fft.m" };

emlrtRSInfo dj_emlrtRSI = { 138, "eml_fft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fft.m" };

emlrtRSInfo ej_emlrtRSI = { 51, "cat",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elmat/cat.m" };

emlrtRSInfo fj_emlrtRSI = { 57, "cat",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elmat/cat.m" };

emlrtRSInfo gj_emlrtRSI = { 66, "cat",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elmat/cat.m" };

emlrtRSInfo hj_emlrtRSI = { 70, "OFDMDemodulator",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/OFDMDemodulator.m" };

emlrtRSInfo ij_emlrtRSI = { 73, "OFDMDemodulator",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/OFDMDemodulator.m" };

emlrtRSInfo jj_emlrtRSI = { 74, "OFDMDemodulator",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/OFDMDemodulator.m" };

emlrtRSInfo kj_emlrtRSI = { 75, "OFDMDemodulator",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/OFDMDemodulator.m" };

emlrtRSInfo lj_emlrtRSI = { 76, "OFDMDemodulator",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/OFDMDemodulator.m" };

emlrtRSInfo mj_emlrtRSI = { 77, "OFDMDemodulator",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/OFDMDemodulator.m" };

emlrtRSInfo nj_emlrtRSI = { 78, "OFDMDemodulator",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/OFDMDemodulator.m" };

emlrtRSInfo oj_emlrtRSI = { 80, "OFDMDemodulator",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/OFDMDemodulator.m" };

emlrtRSInfo qj_emlrtRSI = { 1, "SDRuBase",
  "/Users/travis/Documents/sdru/+comm/+internal/SDRuBase.p" };

emlrtRSInfo ak_emlrtRSI = { 24, "eml_all_or_any",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_all_or_any.m"
};

emlrtRSInfo bk_emlrtRSI = { 98, "eml_all_or_any",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_all_or_any.m"
};

emlrtRSInfo ck_emlrtRSI = { 104, "eml_all_or_any",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_all_or_any.m"
};

emlrtRSInfo dk_emlrtRSI = { 106, "eml_all_or_any",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_all_or_any.m"
};

emlrtRSInfo ek_emlrtRSI = { 107, "eml_all_or_any",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_all_or_any.m"
};

emlrtRSInfo fk_emlrtRSI = { 109, "eml_all_or_any",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_all_or_any.m"
};

emlrtRSInfo gk_emlrtRSI = { 56, "eml_isequal_core",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_isequal_core.m"
};

emlrtRSInfo hk_emlrtRSI = { 50, "prodsize",
  "/Applications/MATLAB_R2013b.app/toolbox/shared/coder/coder/+coder/+internal/prodsize.m"
};

emlrtRSInfo ik_emlrtRSI = { 9, "warning",
  "/Applications/MATLAB_R2013b.app/toolbox/shared/coder/coder/+coder/+internal/warning.m"
};

emlrtRSInfo fl_emlrtRSI = { 376, "validateattributes",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/lang/validateattributes.m"
};

emlrtRSInfo gl_emlrtRSI = { 420, "validateattributes",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/lang/validateattributes.m"
};

emlrtRSInfo hl_emlrtRSI = { 140, "AGC",
  "/Applications/MATLAB_R2013b.app/toolbox/comm/comm/+comm/AGC.m" };

emlrtRSInfo il_emlrtRSI = { 141, "AGC",
  "/Applications/MATLAB_R2013b.app/toolbox/comm/comm/+comm/AGC.m" };

emlrtRSInfo jl_emlrtRSI = { 432, "validateattributes",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/lang/validateattributes.m"
};

emlrtRSInfo wl_emlrtRSI = { 12, "all",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/all.m" };

emlrtRSInfo bm_emlrtRSI = { 91, "reportSDRuStatus",
  "/Users/travis/Documents/sdru/reportSDRuStatus.m" };

emlrtRSInfo dm_emlrtRSI = { 81, "reportSDRuStatus",
  "/Users/travis/Documents/sdru/reportSDRuStatus.m" };

emlrtRSInfo fm_emlrtRSI = { 71, "reportSDRuStatus",
  "/Users/travis/Documents/sdru/reportSDRuStatus.m" };

emlrtRSInfo hm_emlrtRSI = { 61, "reportSDRuStatus",
  "/Users/travis/Documents/sdru/reportSDRuStatus.m" };

emlrtRSInfo jm_emlrtRSI = { 51, "reportSDRuStatus",
  "/Users/travis/Documents/sdru/reportSDRuStatus.m" };

emlrtRSInfo lm_emlrtRSI = { 35, "reportSDRuStatus",
  "/Users/travis/Documents/sdru/reportSDRuStatus.m" };

emlrtRSInfo mm_emlrtRSI = { 17, "getSDRuDriverVersion",
  "/Users/travis/Documents/sdru/usrp_uhd_mapi/getSDRuDriverVersion.m" };

emlrtRSInfo vm_emlrtRSI = { 8, "eml_is_positive_integer_scalar",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_is_positive_integer_scalar.m"
};

emlrtRSInfo xm_emlrtRSI = { 219, "AGC",
  "/Applications/MATLAB_R2013b.app/toolbox/comm/comm/+comm/AGC.m" };

emlrtRSInfo ym_emlrtRSI = { 225, "AGC",
  "/Applications/MATLAB_R2013b.app/toolbox/comm/comm/+comm/AGC.m" };

emlrtRSInfo an_emlrtRSI = { 227, "AGC",
  "/Applications/MATLAB_R2013b.app/toolbox/comm/comm/+comm/AGC.m" };

emlrtRSInfo bn_emlrtRSI = { 228, "AGC",
  "/Applications/MATLAB_R2013b.app/toolbox/comm/comm/+comm/AGC.m" };

emlrtRSInfo cn_emlrtRSI = { 251, "AGC",
  "/Applications/MATLAB_R2013b.app/toolbox/comm/comm/+comm/AGC.m" };

emlrtRSInfo dn_emlrtRSI = { 339, "AGC",
  "/Applications/MATLAB_R2013b.app/toolbox/comm/comm/+comm/AGC.m" };

emlrtRSInfo fn_emlrtRSI = { 36, "mean",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/datafun/mean.m" };

emlrtRSInfo gn_emlrtRSI = { 347, "AGC",
  "/Applications/MATLAB_R2013b.app/toolbox/comm/comm/+comm/AGC.m" };

emlrtRSInfo rn_emlrtRSI = { 79, "colon",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/colon.m" };

emlrtRSInfo sn_emlrtRSI = { 386, "colon",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/colon.m" };

emlrtRSInfo tn_emlrtRSI = { 387, "colon",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/colon.m" };

emlrtRSInfo un_emlrtRSI = { 301, "colon",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/colon.m" };

emlrtRSInfo vn_emlrtRSI = { 300, "colon",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/colon.m" };

emlrtRSInfo wn_emlrtRSI = { 297, "colon",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/colon.m" };

emlrtRSInfo xn_emlrtRSI = { 294, "colon",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/colon.m" };

emlrtRSInfo yn_emlrtRSI = { 293, "colon",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/colon.m" };

emlrtRSInfo ao_emlrtRSI = { 299, "colon",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/colon.m" };

emlrtRSInfo bo_emlrtRSI = { 296, "colon",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/colon.m" };

emlrtRSInfo co_emlrtRSI = { 292, "colon",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/colon.m" };

emlrtRSInfo do_emlrtRSI = { 291, "colon",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/colon.m" };

emlrtRSInfo eo_emlrtRSI = { 290, "colon",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/colon.m" };

emlrtRSInfo fo_emlrtRSI = { 289, "colon",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/colon.m" };

emlrtRSInfo go_emlrtRSI = { 283, "colon",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/colon.m" };

emlrtRSInfo ho_emlrtRSI = { 282, "colon",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/colon.m" };

emlrtRSInfo io_emlrtRSI = { 344, "colon",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/colon.m" };

emlrtRSInfo ko_emlrtRSI = { 74, "power",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/power.m" };

emlrtRSInfo lo_emlrtRSI = { 13, "rdivide",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/rdivide.m" };

emlrtRSInfo mo_emlrtRSI = { 14, "eml_scalexp_compatible",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_scalexp_compatible.m"
};

emlrtRSInfo uo_emlrtRSI = { 88, "eml_min_or_max",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_min_or_max.m"
};

emlrtRSInfo vo_emlrtRSI = { 225, "eml_min_or_max",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_min_or_max.m"
};

emlrtRSInfo wo_emlrtRSI = { 221, "eml_min_or_max",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_min_or_max.m"
};

emlrtRSInfo xo_emlrtRSI = { 200, "eml_min_or_max",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_min_or_max.m"
};

emlrtRSInfo yo_emlrtRSI = { 194, "eml_min_or_max",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_min_or_max.m"
};

emlrtRSInfo ap_emlrtRSI = { 190, "eml_min_or_max",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_min_or_max.m"
};

emlrtRSInfo bp_emlrtRSI = { 230, "find",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elmat/find.m" };

emlrtRSInfo ep_emlrtRSI = { 157, "colon",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/colon.m" };

emlrtRSInfo tp_emlrtRSI = { 21, "issorted",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/datafun/issorted.m" };

emlrtRSInfo up_emlrtRSI = { 22, "issorted",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/datafun/issorted.m" };

emlrtRSInfo vp_emlrtRSI = { 23, "issorted",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/datafun/issorted.m" };

emlrtRSInfo wp_emlrtRSI = { 454, "eml_setop",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/eml_setop.m" };

emlrtRSInfo xp_emlrtRSI = { 456, "eml_setop",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/eml_setop.m" };

emlrtRSInfo yp_emlrtRSI = { 457, "eml_setop",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/eml_setop.m" };

emlrtRSInfo aq_emlrtRSI = { 16, "eml_sort_lt",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_sort_lt.m" };

emlrtRSInfo hq_emlrtRSI = { 15, "eml_min_or_max",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_min_or_max.m"
};

emlrtRSInfo mq_emlrtRSI = { 17, "sum",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/datafun/sum.m" };

emlrtRSInfo nq_emlrtRSI = { 13, "angle",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elfun/angle.m" };

emlrtRSInfo oq_emlrtRSI = { 7, "eml_scalar_angle",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elfun/eml_scalar_angle.m"
};

emlrtRSInfo sq_emlrtRSI = { 17, "mean",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/datafun/mean.m" };

emlrtRSInfo tq_emlrtRSI = { 329, "colon",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/colon.m" };

emlrtRSInfo uq_emlrtRSI = { 328, "colon",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/colon.m" };

emlrtRSInfo vq_emlrtRSI = { 324, "colon",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/colon.m" };

emlrtRSInfo wq_emlrtRSI = { 314, "colon",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/colon.m" };

emlrtRSInfo xq_emlrtRSI = { 12, "exp",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elfun/exp.m" };

emlrtRSInfo yq_emlrtRSI = { 10, "eml_scalar_exp",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elfun/eml_scalar_exp.m"
};

emlrtRSInfo gr_emlrtRSI = { 104, "OFDMDemodulator",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/OFDMDemodulator.m" };

emlrtRSInfo or_emlrtRSI = { 275, "eml_fft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fft.m" };

emlrtRSInfo pr_emlrtRSI = { 276, "eml_fft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fft.m" };

emlrtRSInfo qr_emlrtRSI = { 279, "eml_fft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fft.m" };

emlrtRSInfo rr_emlrtRSI = { 280, "eml_fft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fft.m" };

emlrtRSInfo tr_emlrtRSI = { 68, "reshape",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elmat/reshape.m" };

emlrtRSInfo ur_emlrtRSI = { 66, "reshape",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elmat/reshape.m" };

emlrtRSInfo vr_emlrtRSI = { 61, "reshape",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elmat/reshape.m" };

emlrtRSInfo wr_emlrtRSI = { 58, "reshape",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elmat/reshape.m" };

emlrtRSInfo as_emlrtRSI = { 56, "eml_assert_valid_size_arg",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m"
};

emlrtRSInfo bs_emlrtRSI = { 225, "indexIntRelop",
  "/Applications/MATLAB_R2013b.app/toolbox/shared/coder/coder/+coder/+internal/indexIntRelop.m"
};

emlrtRSInfo cs_emlrtRSI = { 215, "indexIntRelop",
  "/Applications/MATLAB_R2013b.app/toolbox/shared/coder/coder/+coder/+internal/indexIntRelop.m"
};

emlrtRSInfo hs_emlrtRSI = { 30, "eml_div",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_div.m" };

emlrtRSInfo is_emlrtRSI = { 38, "eml_div",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_div.m" };

emlrtRSInfo js_emlrtRSI = { 39, "eml_div",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_div.m" };

emlrtRSInfo ks_emlrtRSI = { 58, "eml_div",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_div.m" };

emlrtRSInfo ls_emlrtRSI = { 59, "eml_div",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_div.m" };

emlrtRSInfo ms_emlrtRSI = { 70, "eml_div",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_div.m" };

emlrtRSInfo ns_emlrtRSI = { 71, "eml_div",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_div.m" };

emlrtRSInfo os_emlrtRSI = { 74, "eml_div",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_div.m" };

emlrtRSInfo ps_emlrtRSI = { 75, "eml_div",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_div.m" };

emlrtRSInfo qs_emlrtRSI = { 73, "sum",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/datafun/sum.m" };

emlrtRSInfo rs_emlrtRSI = { 77, "sum",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/datafun/sum.m" };

emlrtRSInfo ss_emlrtRSI = { 80, "sum",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/datafun/sum.m" };

emlrtRSInfo ts_emlrtRSI = { 157, "OFDMBase",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/OFDMBase.m" };

emlrtRSInfo ws_emlrtRSI = { 93, "reshape",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elmat/reshape.m" };

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

emlrtMCInfo u_emlrtMCI = { 14, 5, "rdivide",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/rdivide.m" };

emlrtMCInfo v_emlrtMCI = { 13, 15, "rdivide",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/rdivide.m" };

emlrtMCInfo w_emlrtMCI = { 41, 9, "eml_min_or_max",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_min_or_max.m"
};

emlrtMCInfo x_emlrtMCI = { 38, 19, "eml_min_or_max",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_min_or_max.m"
};

emlrtMCInfo db_emlrtMCI = { 18, 9, "sum",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/datafun/sum.m" };

emlrtMCInfo eb_emlrtMCI = { 17, 19, "sum",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/datafun/sum.m" };

emlrtMCInfo fb_emlrtMCI = { 23, 9, "sum",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/datafun/sum.m" };

emlrtMCInfo gb_emlrtMCI = { 20, 19, "sum",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/datafun/sum.m" };

emlrtMCInfo hb_emlrtMCI = { 18, 9, "mean",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/datafun/mean.m" };

emlrtMCInfo ib_emlrtMCI = { 17, 19, "mean",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/datafun/mean.m" };

emlrtMCInfo jb_emlrtMCI = { 23, 9, "mean",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/datafun/mean.m" };

emlrtMCInfo kb_emlrtMCI = { 20, 19, "mean",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/datafun/mean.m" };

emlrtMCInfo lb_emlrtMCI = { 67, 5, "reshape",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elmat/reshape.m" };

emlrtMCInfo mb_emlrtMCI = { 66, 15, "reshape",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elmat/reshape.m" };

emlrtRTEInfo emlrtRTEI = { 1, 10, "testPHYReceive",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/testPHYReceive.m" };

emlrtRTEInfo d_emlrtRTEI = { 159, 1, "unique",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/unique.m" };

emlrtRTEInfo e_emlrtRTEI = { 1, 48, "generateOFDMSignal_TX2",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/private/generateOFDMSignal_TX2.m" };

emlrtRTEInfo h_emlrtRTEI = { 127, 5, "find",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elmat/find.m" };

emlrtRTEInfo k_emlrtRTEI = { 1, 14, "OFDMletters2bits",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/private/OFDMletters2bits.m" };

emlrtRTEInfo l_emlrtRTEI = { 168, 21, "OFDMModulator",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/OFDMModulator.m" };

emlrtRTEInfo m_emlrtRTEI = { 47, 20, "find",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elmat/find.m" };

emlrtRTEInfo o_emlrtRTEI = { 111, 5, "find",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elmat/find.m" };

emlrtRTEInfo p_emlrtRTEI = { 1, 17, "checkIPAddressFormat",
  "/Users/travis/Documents/sdru/checkIPAddressFormat.m" };

emlrtRTEInfo q_emlrtRTEI = { 1, 48, "generateOFDMSignal",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/private/generateOFDMSignal.m" };

emlrtRTEInfo t_emlrtRTEI = { 1, 33, "initializeOFDMSyncMemory_sdr",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/private/initializeOFDMSyncMemory_sdr.m"
};

emlrtRTEInfo v_emlrtRTEI = { 58, 1, "strfind",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/strfun/strfind.m" };

emlrtRTEInfo w_emlrtRTEI = { 84, 1, "strfind",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/strfun/strfind.m" };

emlrtRTEInfo x_emlrtRTEI = { 1, 13, "SDRuReceiver",
  "/Users/travis/Documents/sdru/+comm/SDRuReceiver.p" };

emlrtRTEInfo y_emlrtRTEI = { 1, 30, "closeDataConnection",
  "/Users/travis/Documents/sdru/usrp_uhd_mapi/closeDataConnection.m" };

emlrtRTEInfo ab_emlrtRTEI = { 1, 58, "receiveData",
  "/Users/travis/Documents/sdru/usrp_uhd_mapi/receiveData.m" };

emlrtRTEInfo bb_emlrtRTEI = { 1, 10, "error",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/lang/error.m" };

emlrtRTEInfo cb_emlrtRTEI = { 155, 5, "xcorr",
  "/Applications/MATLAB_R2013b.app/toolbox/signal/eml/xcorr.m" };

emlrtRTEInfo db_emlrtRTEI = { 16, 5, "abs",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elfun/abs.m" };

emlrtRTEInfo eb_emlrtRTEI = { 15, 9, "eml_scalexp_alloc",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_scalexp_alloc.m"
};

emlrtRTEInfo fb_emlrtRTEI = { 1, 14, "rdivide",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/rdivide.m" };

emlrtRTEInfo gb_emlrtRTEI = { 33, 50, "locateOFDMFrame_sdr",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/private/locateOFDMFrame_sdr.m" };

emlrtRTEInfo hb_emlrtRTEI = { 191, 5, "eml_setop",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/eml_setop.m" };

emlrtRTEInfo ib_emlrtRTEI = { 192, 5, "eml_setop",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/eml_setop.m" };

emlrtRTEInfo jb_emlrtRTEI = { 193, 5, "eml_setop",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/eml_setop.m" };

emlrtRTEInfo kb_emlrtRTEI = { 131, 22, "eml_setop",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/eml_setop.m" };

emlrtRTEInfo lb_emlrtRTEI = { 20, 9, "eml_li_find",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_li_find.m" };

emlrtRTEInfo mb_emlrtRTEI = { 21, 40, "coarseOFDMFreqEst_sdr",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/private/coarseOFDMFreqEst_sdr.m" };

emlrtRTEInfo nb_emlrtRTEI = { 1, 14, "exp",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elfun/exp.m" };

emlrtRTEInfo rb_emlrtRTEI = { 1, 20, "OFDMbits2letters",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/private/OFDMbits2letters.m" };

emlrtRTEInfo sb_emlrtRTEI = { 1, 1, "setup",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/scomp/setup.m" };

emlrtRTEInfo tb_emlrtRTEI = { 284, 1, "colon",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/colon.m" };

emlrtRTEInfo wb_emlrtRTEI = { 52, 20, "step",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/scomp/step.m" };

emlrtBCInfo emlrtBCI = { 0, 255, 17, 9, "char", "char",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/strfun/char.m", 2 };

emlrtECInfo emlrtECI = { -1, 403, 9, "OFDMModulator",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/OFDMModulator.m" };

emlrtDCInfo emlrtDCI = { 403, 9, "OFDMModulator",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/OFDMModulator.m", 1 };

emlrtBCInfo q_emlrtBCI = { -1, -1, 267, 19, "errStr", "mapiPrivate",
  "/Users/travis/Documents/sdru/usrp_uhd_mapi/mapiPrivate.m", 0 };

testPHYReceiveStackData *testPHYReceiveStackDataLocal;
emlrtRSInfo bu_emlrtRSI = { 266, "mapiPrivate",
  "/Users/travis/Documents/sdru/usrp_uhd_mapi/mapiPrivate.m" };

emlrtRSInfo cu_emlrtRSI = { 15, "errorIf",
  "/Applications/MATLAB_R2013b.app/toolbox/shared/coder/coder/+coder/+internal/errorIf.m"
};

emlrtRSInfo eu_emlrtRSI = { 19, "mapiPrivate",
  "/Users/travis/Documents/sdru/usrp_uhd_mapi/mapiPrivate.m" };

emlrtRSInfo hu_emlrtRSI = { 67, "reshape",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elmat/reshape.m" };

/* End of code generation (testPHYReceive_data.c) */
