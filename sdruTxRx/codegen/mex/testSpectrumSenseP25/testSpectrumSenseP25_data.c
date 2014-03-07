/*
 * testSpectrumSenseP25_data.c
 *
 * Code generation for function 'testSpectrumSenseP25_data'
 *
 * C source code generated on: Thu Mar  6 23:19:54 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testSpectrumSenseP25.h"
#include "testSpectrumSenseP25_data.h"
#include <stdio.h>

/* Variable Definitions */
const volatile char_T *emlrtBreakCheckR2012bFlagVar;
boolean_T isSetupsdruCalled;
emlrtRSInfo k_emlrtRSI = { 1, "mrdivide",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/mrdivide.p" };

emlrtRSInfo l_emlrtRSI = { 15, "rdivide",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/rdivide.m" };

emlrtRSInfo m_emlrtRSI = { 12, "eml_div",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_div.m" };

emlrtRSInfo n_emlrtRSI = { 37, "mpower",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/mpower.m" };

emlrtRSInfo o_emlrtRSI = { 42, "power",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/power.m" };

emlrtRSInfo p_emlrtRSI = { 58, "power",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/power.m" };

emlrtRSInfo q_emlrtRSI = { 12, "floor",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elfun/floor.m" };

emlrtRSInfo r_emlrtRSI = { 98, "eml_assert_valid_size_arg",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m"
};

emlrtRSInfo s_emlrtRSI = { 86, "eml_assert_valid_size_arg",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m"
};

emlrtRSInfo u_emlrtRSI = { 227, "indexIntRelop",
  "/Applications/MATLAB_R2013b.app/toolbox/shared/coder/coder/+coder/+internal/indexIntRelop.m"
};

emlrtRSInfo v_emlrtRSI = { 239, "indexIntRelop",
  "/Applications/MATLAB_R2013b.app/toolbox/shared/coder/coder/+coder/+internal/indexIntRelop.m"
};

emlrtRSInfo w_emlrtRSI = { 36, "randi",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/randfun/randi.m" };

emlrtRSInfo x_emlrtRSI = { 38, "randi",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/randfun/randi.m" };

emlrtRSInfo y_emlrtRSI = { 125, "eml_assert_valid_size_arg",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m"
};

emlrtRSInfo ab_emlrtRSI = { 117, "eml_assert_valid_size_arg",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m"
};

emlrtRSInfo bb_emlrtRSI = { 45, "OFDMBase",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/OFDMBase.m" };

emlrtRSInfo cb_emlrtRSI = { 46, "OFDMBase",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/OFDMBase.m" };

emlrtRSInfo db_emlrtRSI = { 1, "System",
  "/Applications/MATLAB_R2013b.app/toolbox/shared/system/coder/+matlab/+system/+coder/System.p"
};

emlrtRSInfo eb_emlrtRSI = { 1, "SystemCore",
  "/Applications/MATLAB_R2013b.app/toolbox/shared/system/coder/+matlab/+system/+coder/SystemCore.p"
};

emlrtRSInfo fb_emlrtRSI = { 1, "SystemProp",
  "/Applications/MATLAB_R2013b.app/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p"
};

emlrtRSInfo gb_emlrtRSI = { 168, "OFDMModulator",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/OFDMModulator.m" };

emlrtRSInfo hb_emlrtRSI = { 182, "OFDMModulator",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/OFDMModulator.m" };

emlrtRSInfo ib_emlrtRSI = { 29, "log2",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elfun/log2.m" };

emlrtRSInfo jb_emlrtRSI = { 35, "log2",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elfun/log2.m" };

emlrtRSInfo kb_emlrtRSI = { 61, "log2",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elfun/log2.m" };

emlrtRSInfo lb_emlrtRSI = { 86, "log2",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elfun/log2.m" };

emlrtRSInfo mb_emlrtRSI = { 87, "log2",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elfun/log2.m" };

emlrtRSInfo nb_emlrtRSI = { 91, "log2",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elfun/log2.m" };

emlrtRSInfo ob_emlrtRSI = { 12, "isfinite",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elmat/isfinite.m" };

emlrtRSInfo pb_emlrtRSI = { 43, "log2",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elfun/log2.m" };

emlrtRSInfo qb_emlrtRSI = { 1, "pvParse",
  "/Applications/MATLAB_R2013b.app/toolbox/matlab/system/+matlab/+system/pvParse.p"
};

emlrtRSInfo rb_emlrtRSI = { 14, "sqrt",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elfun/sqrt.m" };

emlrtRSInfo sb_emlrtRSI = { 19, "sqrt",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elfun/sqrt.m" };

emlrtRSInfo qc_emlrtRSI = { 318, "OFDMModulator",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/OFDMModulator.m" };

emlrtRSInfo sc_emlrtRSI = { 19, "abs",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elfun/abs.m" };

emlrtRSInfo ed_emlrtRSI = { 16, "ifftshift",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/datafun/ifftshift.m" };

emlrtRSInfo fd_emlrtRSI = { 22, "eml_ifftshift",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_ifftshift.m" };

emlrtRSInfo gd_emlrtRSI = { 40, "eml_fftshift",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fftshift.m" };

emlrtRSInfo hd_emlrtRSI = { 41, "eml_fftshift",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fftshift.m" };

emlrtRSInfo id_emlrtRSI = { 55, "prodsize",
  "/Applications/MATLAB_R2013b.app/toolbox/shared/coder/coder/+coder/+internal/prodsize.m"
};

emlrtRSInfo jd_emlrtRSI = { 25, "ifft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/datafun/ifft.m" };

emlrtRSInfo kd_emlrtRSI = { 49, "eml_fft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fft.m" };

emlrtRSInfo oe_emlrtRSI = { 211, "eml_fft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fft.m" };

emlrtRSInfo pe_emlrtRSI = { 16, "min",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/datafun/min.m" };

emlrtRSInfo qe_emlrtRSI = { 18, "eml_min_or_max",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_min_or_max.m"
};

emlrtRSInfo re_emlrtRSI = { 59, "eml_min_or_max",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_min_or_max.m"
};

emlrtRSInfo se_emlrtRSI = { 124, "eml_min_or_max",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_min_or_max.m"
};

emlrtRSInfo te_emlrtRSI = { 153, "eml_min_or_max",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_min_or_max.m"
};

emlrtRSInfo ue_emlrtRSI = { 23, "eml_relop",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_relop.m" };

emlrtRSInfo ve_emlrtRSI = { 16, "max",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/datafun/max.m" };

emlrtRSInfo we_emlrtRSI = { 242, "eml_fft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fft.m" };

emlrtRSInfo xe_emlrtRSI = { 245, "eml_fft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fft.m" };

emlrtRSInfo ye_emlrtRSI = { 12, "cos",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elfun/cos.m" };

emlrtRSInfo af_emlrtRSI = { 12, "sin",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elfun/sin.m" };

emlrtRSInfo bf_emlrtRSI = { 266, "eml_fft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fft.m" };

emlrtRSInfo cf_emlrtRSI = { 267, "eml_fft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fft.m" };

emlrtRSInfo df_emlrtRSI = { 270, "eml_fft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fft.m" };

emlrtRSInfo ef_emlrtRSI = { 271, "eml_fft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fft.m" };

emlrtRSInfo ff_emlrtRSI = { 60, "cat",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elmat/cat.m" };

emlrtRSInfo gf_emlrtRSI = { 61, "cat",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elmat/cat.m" };

emlrtRSInfo if_emlrtRSI = { 30, "dec2bin",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/strfun/dec2bin.m" };

emlrtRSInfo jf_emlrtRSI = { 33, "dec2bin",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/strfun/dec2bin.m" };

emlrtRSInfo kf_emlrtRSI = { 136, "dec2bin",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/strfun/dec2bin.m" };

emlrtRSInfo lf_emlrtRSI = { 141, "dec2bin",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/strfun/dec2bin.m" };

emlrtRSInfo mf_emlrtRSI = { 142, "dec2bin",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/strfun/dec2bin.m" };

emlrtRSInfo nf_emlrtRSI = { 146, "dec2bin",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/strfun/dec2bin.m" };

emlrtRSInfo of_emlrtRSI = { 38, "bitget",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/bitget.m" };

emlrtRSInfo pf_emlrtRSI = { 37, "bitget",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/bitget.m" };

emlrtRSInfo qf_emlrtRSI = { 105, "dec2bin",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/strfun/dec2bin.m" };

emlrtRSInfo rf_emlrtRSI = { 102, "dec2bin",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/strfun/dec2bin.m" };

emlrtRSInfo sf_emlrtRSI = { 101, "dec2bin",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/strfun/dec2bin.m" };

emlrtRSInfo tf_emlrtRSI = { 100, "dec2bin",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/strfun/dec2bin.m" };

emlrtRSInfo uf_emlrtRSI = { 94, "dec2bin",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/strfun/dec2bin.m" };

emlrtRSInfo vf_emlrtRSI = { 93, "dec2bin",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/strfun/dec2bin.m" };

emlrtRSInfo xf_emlrtRSI = { 12, "eml_int_forloop_overflow_check",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"
};

emlrtRSInfo yf_emlrtRSI = { 116, "reshape",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elmat/reshape.m" };

emlrtRSInfo ag_emlrtRSI = { 20, "eml_index_prod",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_index_prod.m"
};

emlrtRSInfo bg_emlrtRSI = { 1, "CRCGenerator",
  "/Applications/MATLAB_R2013b.app/toolbox/comm/comm/+commcodegen/CRCGenerator.p"
};

emlrtRSInfo cg_emlrtRSI = { 1, "setProp",
  "/Applications/MATLAB_R2013b.app/toolbox/matlab/system/+matlab/+system/setProp.p"
};

emlrtRSInfo eg_emlrtRSI = { 1, "BPSKModulator",
  "/Applications/MATLAB_R2013b.app/toolbox/comm/comm/+commcodegen/BPSKModulator.p"
};

emlrtRSInfo fg_emlrtRSI = { 73, "mod",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elfun/mod.m" };

emlrtRSInfo gg_emlrtRSI = { 83, "mod",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elfun/mod.m" };

emlrtRSInfo hg_emlrtRSI = { 84, "mod",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elfun/mod.m" };

emlrtRSInfo ig_emlrtRSI = { 89, "mod",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elfun/mod.m" };

emlrtRSInfo jg_emlrtRSI = { 90, "mod",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elfun/mod.m" };

emlrtRSInfo kg_emlrtRSI = { 93, "mod",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elfun/mod.m" };

emlrtRSInfo lg_emlrtRSI = { 65, "repmat",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elmat/repmat.m" };

emlrtRSInfo mg_emlrtRSI = { 66, "repmat",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elmat/repmat.m" };

emlrtRSInfo ng_emlrtRSI = { 37, "eml_sort_idx",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_sort_idx.m" };

emlrtRSInfo og_emlrtRSI = { 139, "eml_sort_idx",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_sort_idx.m" };

emlrtRSInfo pg_emlrtRSI = { 141, "eml_sort_idx",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_sort_idx.m" };

emlrtRSInfo qg_emlrtRSI = { 148, "eml_sort_idx",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_sort_idx.m" };

emlrtRSInfo rg_emlrtRSI = { 150, "eml_sort_idx",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_sort_idx.m" };

emlrtRSInfo sg_emlrtRSI = { 154, "eml_sort_idx",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_sort_idx.m" };

emlrtRSInfo tg_emlrtRSI = { 159, "eml_sort_idx",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_sort_idx.m" };

emlrtRSInfo ug_emlrtRSI = { 142, "eml_sort_idx",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_sort_idx.m" };

emlrtRSInfo vg_emlrtRSI = { 161, "eml_sort_idx",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_sort_idx.m" };

emlrtRSInfo wg_emlrtRSI = { 163, "eml_sort_idx",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_sort_idx.m" };

emlrtRSInfo xg_emlrtRSI = { 166, "eml_sort_idx",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_sort_idx.m" };

emlrtRSInfo yg_emlrtRSI = { 168, "eml_sort_idx",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_sort_idx.m" };

emlrtRSInfo ah_emlrtRSI = { 173, "eml_sort_idx",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_sort_idx.m" };

emlrtRSInfo bh_emlrtRSI = { 176, "eml_sort_idx",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_sort_idx.m" };

emlrtRSInfo ch_emlrtRSI = { 178, "eml_sort_idx",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_sort_idx.m" };

emlrtRSInfo dh_emlrtRSI = { 182, "eml_sort_idx",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_sort_idx.m" };

emlrtRSInfo eh_emlrtRSI = { 184, "eml_sort_idx",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_sort_idx.m" };

emlrtRSInfo fh_emlrtRSI = { 185, "eml_sort_idx",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_sort_idx.m" };

emlrtRSInfo gh_emlrtRSI = { 186, "eml_sort_idx",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_sort_idx.m" };

emlrtRSInfo hh_emlrtRSI = { 189, "eml_sort_idx",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_sort_idx.m" };

emlrtRSInfo ih_emlrtRSI = { 20, "eml_sort_le",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_sort_le.m" };

emlrtRSInfo jh_emlrtRSI = { 53, "eml_sort_le",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_sort_le.m" };

emlrtRSInfo kh_emlrtRSI = { 261, "unique",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/unique.m" };

emlrtRSInfo lh_emlrtRSI = { 260, "unique",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/unique.m" };

emlrtRSInfo mh_emlrtRSI = { 256, "unique",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/unique.m" };

emlrtRSInfo nh_emlrtRSI = { 251, "unique",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/unique.m" };

emlrtRSInfo oh_emlrtRSI = { 17, "eml_safe_eq",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_safe_eq.m" };

emlrtRSInfo ph_emlrtRSI = { 26, "eps",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elmat/eps.m" };

emlrtRSInfo qh_emlrtRSI = { 102, "OFDMBase",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/OFDMBase.m" };

emlrtRSInfo rh_emlrtRSI = { 42, "unique",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/unique.m" };

emlrtRSInfo sh_emlrtRSI = { 228, "unique",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/unique.m" };

emlrtRSInfo th_emlrtRSI = { 220, "unique",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/unique.m" };

emlrtRSInfo uh_emlrtRSI = { 219, "unique",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/unique.m" };

emlrtRSInfo vh_emlrtRSI = { 218, "unique",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/unique.m" };

emlrtRSInfo wh_emlrtRSI = { 217, "unique",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/unique.m" };

emlrtRSInfo xh_emlrtRSI = { 207, "unique",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/unique.m" };

emlrtRSInfo yh_emlrtRSI = { 206, "unique",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/unique.m" };

emlrtRSInfo ai_emlrtRSI = { 205, "unique",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/unique.m" };

emlrtRSInfo bi_emlrtRSI = { 194, "unique",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/unique.m" };

emlrtRSInfo ci_emlrtRSI = { 192, "unique",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/unique.m" };

emlrtRSInfo di_emlrtRSI = { 187, "unique",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/unique.m" };

emlrtRSInfo ei_emlrtRSI = { 186, "unique",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/unique.m" };

emlrtRSInfo fi_emlrtRSI = { 180, "unique",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/unique.m" };

emlrtRSInfo gi_emlrtRSI = { 179, "unique",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/unique.m" };

emlrtRSInfo hi_emlrtRSI = { 169, "unique",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/unique.m" };

emlrtRSInfo ii_emlrtRSI = { 163, "unique",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/unique.m" };

emlrtRSInfo ji_emlrtRSI = { 163, "OFDMBase",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/OFDMBase.m" };

emlrtRSInfo ki_emlrtRSI = { 355, "OFDMModulator",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/OFDMModulator.m" };

emlrtRSInfo li_emlrtRSI = { 378, "OFDMModulator",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/OFDMModulator.m" };

emlrtRSInfo mi_emlrtRSI = { 384, "OFDMModulator",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/OFDMModulator.m" };

emlrtRSInfo ni_emlrtRSI = { 65, "sub2ind",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elmat/sub2ind.m" };

emlrtRSInfo oi_emlrtRSI = { 233, "indexIntRelop",
  "/Applications/MATLAB_R2013b.app/toolbox/shared/coder/coder/+coder/+internal/indexIntRelop.m"
};

emlrtRSInfo pi_emlrtRSI = { 55, "sub2ind",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elmat/sub2ind.m" };

emlrtRSInfo qi_emlrtRSI = { 52, "sub2ind",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elmat/sub2ind.m" };

emlrtRSInfo ri_emlrtRSI = { 51, "sub2ind",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elmat/sub2ind.m" };

emlrtRSInfo si_emlrtRSI = { 8, "isequal",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elmat/isequal.m" };

emlrtRSInfo ti_emlrtRSI = { 30, "eml_isequal_core",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_isequal_core.m"
};

emlrtRSInfo ui_emlrtRSI = { 61, "eml_isequal_core",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_isequal_core.m"
};

emlrtRSInfo vi_emlrtRSI = { 81, "eml_isequal_core",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_isequal_core.m"
};

emlrtRSInfo wi_emlrtRSI = { 78, "sub2ind",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elmat/sub2ind.m" };

emlrtRSInfo xi_emlrtRSI = { 97, "eml_scalar_eg",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m" };

emlrtRSInfo yi_emlrtRSI = { 29, "eml_fftshift",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fftshift.m" };

emlrtRSInfo aj_emlrtRSI = { 31, "eml_fftshift",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fftshift.m" };

emlrtRSInfo bj_emlrtRSI = { 32, "eml_fftshift",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fftshift.m" };

emlrtRSInfo cj_emlrtRSI = { 35, "eml_fftshift",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fftshift.m" };

emlrtRSInfo hj_emlrtRSI = { 51, "cat",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elmat/cat.m" };

emlrtRSInfo ij_emlrtRSI = { 57, "cat",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elmat/cat.m" };

emlrtRSInfo jj_emlrtRSI = { 66, "cat",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elmat/cat.m" };

emlrtRSInfo kj_emlrtRSI = { 70, "OFDMDemodulator",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/OFDMDemodulator.m" };

emlrtRSInfo lj_emlrtRSI = { 73, "OFDMDemodulator",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/OFDMDemodulator.m" };

emlrtRSInfo mj_emlrtRSI = { 74, "OFDMDemodulator",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/OFDMDemodulator.m" };

emlrtRSInfo nj_emlrtRSI = { 75, "OFDMDemodulator",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/OFDMDemodulator.m" };

emlrtRSInfo oj_emlrtRSI = { 76, "OFDMDemodulator",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/OFDMDemodulator.m" };

emlrtRSInfo pj_emlrtRSI = { 77, "OFDMDemodulator",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/OFDMDemodulator.m" };

emlrtRSInfo qj_emlrtRSI = { 78, "OFDMDemodulator",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/OFDMDemodulator.m" };

emlrtRSInfo rj_emlrtRSI = { 80, "OFDMDemodulator",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/OFDMDemodulator.m" };

emlrtRSInfo tj_emlrtRSI = { 1, "SDRuBase",
  "/Users/travis/Documents/sdru/+comm/+internal/SDRuBase.p" };

emlrtRSInfo dk_emlrtRSI = { 24, "eml_all_or_any",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_all_or_any.m"
};

emlrtRSInfo ek_emlrtRSI = { 98, "eml_all_or_any",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_all_or_any.m"
};

emlrtRSInfo fk_emlrtRSI = { 104, "eml_all_or_any",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_all_or_any.m"
};

emlrtRSInfo gk_emlrtRSI = { 106, "eml_all_or_any",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_all_or_any.m"
};

emlrtRSInfo hk_emlrtRSI = { 107, "eml_all_or_any",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_all_or_any.m"
};

emlrtRSInfo ik_emlrtRSI = { 109, "eml_all_or_any",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_all_or_any.m"
};

emlrtRSInfo jk_emlrtRSI = { 56, "eml_isequal_core",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_isequal_core.m"
};

emlrtRSInfo kk_emlrtRSI = { 50, "prodsize",
  "/Applications/MATLAB_R2013b.app/toolbox/shared/coder/coder/+coder/+internal/prodsize.m"
};

emlrtRSInfo lk_emlrtRSI = { 9, "warning",
  "/Applications/MATLAB_R2013b.app/toolbox/shared/coder/coder/+coder/+internal/warning.m"
};

emlrtRSInfo il_emlrtRSI = { 376, "validateattributes",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/lang/validateattributes.m"
};

emlrtRSInfo jl_emlrtRSI = { 420, "validateattributes",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/lang/validateattributes.m"
};

emlrtRSInfo kl_emlrtRSI = { 140, "AGC",
  "/Applications/MATLAB_R2013b.app/toolbox/comm/comm/+comm/AGC.m" };

emlrtRSInfo ll_emlrtRSI = { 141, "AGC",
  "/Applications/MATLAB_R2013b.app/toolbox/comm/comm/+comm/AGC.m" };

emlrtRSInfo ml_emlrtRSI = { 432, "validateattributes",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/lang/validateattributes.m"
};

emlrtRSInfo ol_emlrtRSI = { 1, "CRCDetector",
  "/Applications/MATLAB_R2013b.app/toolbox/comm/comm/+commcodegen/CRCDetector.p"
};

emlrtRSInfo sl_emlrtRSI = { 12, "all",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/all.m" };

emlrtRSInfo wl_emlrtRSI = { 91, "reportSDRuStatus",
  "/Users/travis/Documents/sdru/reportSDRuStatus.m" };

emlrtRSInfo yl_emlrtRSI = { 81, "reportSDRuStatus",
  "/Users/travis/Documents/sdru/reportSDRuStatus.m" };

emlrtRSInfo bm_emlrtRSI = { 71, "reportSDRuStatus",
  "/Users/travis/Documents/sdru/reportSDRuStatus.m" };

emlrtRSInfo dm_emlrtRSI = { 61, "reportSDRuStatus",
  "/Users/travis/Documents/sdru/reportSDRuStatus.m" };

emlrtRSInfo fm_emlrtRSI = { 51, "reportSDRuStatus",
  "/Users/travis/Documents/sdru/reportSDRuStatus.m" };

emlrtRSInfo hm_emlrtRSI = { 35, "reportSDRuStatus",
  "/Users/travis/Documents/sdru/reportSDRuStatus.m" };

emlrtRSInfo im_emlrtRSI = { 17, "getSDRuDriverVersion",
  "/Users/travis/Documents/sdru/usrp_uhd_mapi/getSDRuDriverVersion.m" };

emlrtRSInfo rm_emlrtRSI = { 8, "eml_is_positive_integer_scalar",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_is_positive_integer_scalar.m"
};

emlrtRSInfo tm_emlrtRSI = { 219, "AGC",
  "/Applications/MATLAB_R2013b.app/toolbox/comm/comm/+comm/AGC.m" };

emlrtRSInfo um_emlrtRSI = { 225, "AGC",
  "/Applications/MATLAB_R2013b.app/toolbox/comm/comm/+comm/AGC.m" };

emlrtRSInfo vm_emlrtRSI = { 227, "AGC",
  "/Applications/MATLAB_R2013b.app/toolbox/comm/comm/+comm/AGC.m" };

emlrtRSInfo wm_emlrtRSI = { 228, "AGC",
  "/Applications/MATLAB_R2013b.app/toolbox/comm/comm/+comm/AGC.m" };

emlrtRSInfo xm_emlrtRSI = { 251, "AGC",
  "/Applications/MATLAB_R2013b.app/toolbox/comm/comm/+comm/AGC.m" };

emlrtRSInfo ym_emlrtRSI = { 339, "AGC",
  "/Applications/MATLAB_R2013b.app/toolbox/comm/comm/+comm/AGC.m" };

emlrtRSInfo an_emlrtRSI = { 20, "eml_scalar_abs",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elfun/eml_scalar_abs.m"
};

emlrtRSInfo bn_emlrtRSI = { 36, "mean",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/datafun/mean.m" };

emlrtRSInfo cn_emlrtRSI = { 347, "AGC",
  "/Applications/MATLAB_R2013b.app/toolbox/comm/comm/+comm/AGC.m" };

emlrtRSInfo to_emlrtRSI = { 14, "fft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/datafun/fft.m" };

emlrtRSInfo xo_emlrtRSI = { 275, "eml_fft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fft.m" };

emlrtRSInfo yo_emlrtRSI = { 276, "eml_fft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fft.m" };

emlrtRSInfo ap_emlrtRSI = { 279, "eml_fft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fft.m" };

emlrtRSInfo bp_emlrtRSI = { 280, "eml_fft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fft.m" };

emlrtRSInfo cp_emlrtRSI = { 11, "fftshift",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/datafun/fftshift.m" };

emlrtRSInfo dp_emlrtRSI = { 62, "eml_fftshift",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fftshift.m" };

emlrtRSInfo ep_emlrtRSI = { 59, "eml_fftshift",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fftshift.m" };

emlrtRSInfo fp_emlrtRSI = { 58, "eml_fftshift",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fftshift.m" };

emlrtRSInfo gp_emlrtRSI = { 56, "eml_fftshift",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fftshift.m" };

emlrtRSInfo hp_emlrtRSI = { 53, "eml_fftshift",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fftshift.m" };

emlrtRSInfo ip_emlrtRSI = { 52, "eml_fftshift",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fftshift.m" };

emlrtRSInfo jp_emlrtRSI = { 51, "eml_fftshift",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fftshift.m" };

emlrtRSInfo kp_emlrtRSI = { 50, "eml_fftshift",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fftshift.m" };

emlrtRSInfo lp_emlrtRSI = { 48, "eml_fftshift",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fftshift.m" };

emlrtRSInfo mp_emlrtRSI = { 36, "eml_fftshift",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fftshift.m" };

emlrtRSInfo np_emlrtRSI = { 30, "eml_fftshift",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fftshift.m" };

emlrtRSInfo op_emlrtRSI = { 27, "eml_fftshift",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fftshift.m" };

emlrtRSInfo pp_emlrtRSI = { 24, "eml_fftshift",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fftshift.m" };

emlrtRSInfo qp_emlrtRSI = { 23, "eml_fftshift",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fftshift.m" };

emlrtRSInfo rp_emlrtRSI = { 22, "eml_fftshift",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fftshift.m" };

emlrtRSInfo sp_emlrtRSI = { 21, "eml_fftshift",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fftshift.m" };

emlrtRSInfo tp_emlrtRSI = { 20, "eml_fftshift",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fftshift.m" };

emlrtRSInfo up_emlrtRSI = { 19, "eml_fftshift",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fftshift.m" };

emlrtRSInfo wp_emlrtRSI = { 49, "prodsize",
  "/Applications/MATLAB_R2013b.app/toolbox/shared/coder/coder/+coder/+internal/prodsize.m"
};

emlrtRSInfo yp_emlrtRSI = { 213, "indexIntRelop",
  "/Applications/MATLAB_R2013b.app/toolbox/shared/coder/coder/+coder/+internal/indexIntRelop.m"
};

emlrtRSInfo aq_emlrtRSI = { 71, "eml_div",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_div.m" };

emlrtRSInfo bq_emlrtRSI = { 70, "eml_div",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_div.m" };

emlrtRSInfo cq_emlrtRSI = { 59, "eml_div",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_div.m" };

emlrtRSInfo dq_emlrtRSI = { 58, "eml_div",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_div.m" };

emlrtRSInfo eq_emlrtRSI = { 39, "eml_div",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_div.m" };

emlrtRSInfo hq_emlrtRSI = { 238, "eml_fft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fft.m" };

emlrtRSInfo iq_emlrtRSI = { 240, "eml_fft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fft.m" };

emlrtRSInfo jq_emlrtRSI = { 241, "eml_fft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fft.m" };

emlrtRSInfo kq_emlrtRSI = { 244, "eml_fft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fft.m" };

emlrtRSInfo lq_emlrtRSI = { 247, "eml_fft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fft.m" };

emlrtRSInfo mq_emlrtRSI = { 258, "eml_fft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fft.m" };

emlrtRSInfo nq_emlrtRSI = { 259, "eml_fft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fft.m" };

emlrtRSInfo oq_emlrtRSI = { 274, "eml_fft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fft.m" };

emlrtRSInfo pq_emlrtRSI = { 278, "eml_fft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fft.m" };

emlrtRSInfo qq_emlrtRSI = { 38, "eml_int_forloop_overflow_check",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"
};

emlrtRSInfo rq_emlrtRSI = { 40, "eml_int_forloop_overflow_check",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"
};

emlrtRSInfo uq_emlrtRSI = { 175, "fprintf",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/lang/fprintf.m" };

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

emlrtRTEInfo b_emlrtRTEI = { 2, 83, "CreateTXRX",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/CreateTXRX.m" };

emlrtRTEInfo c_emlrtRTEI = { 159, 1, "unique",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/unique.m" };

emlrtRTEInfo d_emlrtRTEI = { 1, 48, "generateOFDMSignal_TX2",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/private/generateOFDMSignal_TX2.m"
};

emlrtRTEInfo g_emlrtRTEI = { 127, 5, "find",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elmat/find.m" };

emlrtRTEInfo j_emlrtRTEI = { 1, 14, "OFDMletters2bits",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/private/OFDMletters2bits.m" };

emlrtRTEInfo k_emlrtRTEI = { 168, 21, "OFDMModulator",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/OFDMModulator.m" };

emlrtRTEInfo l_emlrtRTEI = { 47, 20, "find",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elmat/find.m" };

emlrtRTEInfo n_emlrtRTEI = { 111, 5, "find",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elmat/find.m" };

emlrtRTEInfo o_emlrtRTEI = { 1, 17, "checkIPAddressFormat",
  "/Users/travis/Documents/sdru/checkIPAddressFormat.m" };

emlrtRTEInfo p_emlrtRTEI = { 1, 48, "generateOFDMSignal",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/private/generateOFDMSignal.m" };

emlrtRTEInfo s_emlrtRTEI = { 1, 33, "initializeOFDMSyncMemory_sdr",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/private/initializeOFDMSyncMemory_sdr.m"
};

emlrtRTEInfo t_emlrtRTEI = { 1, 13, "SDRuReceiver",
  "/Users/travis/Documents/sdru/+comm/SDRuReceiver.p" };

emlrtRTEInfo u_emlrtRTEI = { 1, 30, "closeDataConnection",
  "/Users/travis/Documents/sdru/usrp_uhd_mapi/closeDataConnection.m" };

emlrtRTEInfo v_emlrtRTEI = { 1, 58, "receiveData",
  "/Users/travis/Documents/sdru/usrp_uhd_mapi/receiveData.m" };

emlrtRTEInfo w_emlrtRTEI = { 1, 10, "error",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/lang/error.m" };

emlrtRTEInfo bb_emlrtRTEI = { 16, 5, "abs",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elfun/abs.m" };

emlrtRTEInfo fb_emlrtRTEI = { 1, 14, "fftshift",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/datafun/fftshift.m" };

emlrtRTEInfo gb_emlrtRTEI = { 1, 1, "setup",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/scomp/setup.m" };

emlrtRTEInfo hb_emlrtRTEI = { 52, 20, "step",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/scomp/step.m" };

emlrtBCInfo emlrtBCI = { 0, 255, 17, 9, "char", "char",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/strfun/char.m", 2 };

emlrtECInfo b_emlrtECI = { -1, 403, 9, "OFDMModulator",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/OFDMModulator.m" };

emlrtDCInfo emlrtDCI = { 403, 9, "OFDMModulator",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/OFDMModulator.m", 1 };

emlrtRTEInfo ib_emlrtRTEI = { 20, 5, "eml_error",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_error.m" };

emlrtBCInfo o_emlrtBCI = { -1, -1, 267, 19, "errStr", "mapiPrivate",
  "/Users/travis/Documents/sdru/usrp_uhd_mapi/mapiPrivate.m", 0 };

testSpectrumSenseP25StackData *c_testSpectrumSenseP25StackData;
emlrtRSInfo xq_emlrtRSI = { 266, "mapiPrivate",
  "/Users/travis/Documents/sdru/usrp_uhd_mapi/mapiPrivate.m" };

emlrtRSInfo yq_emlrtRSI = { 15, "errorIf",
  "/Applications/MATLAB_R2013b.app/toolbox/shared/coder/coder/+coder/+internal/errorIf.m"
};

emlrtRSInfo gr_emlrtRSI = { 19, "mapiPrivate",
  "/Users/travis/Documents/sdru/usrp_uhd_mapi/mapiPrivate.m" };

/* End of code generation (testSpectrumSenseP25_data.c) */
