/*
 * testPHYReceive_data.h
 *
 * Code generation for function 'testPHYReceive_data'
 *
 * C source code generated on: Thu Apr  3 19:36:37 2014
 *
 */

#ifndef __TESTPHYRECEIVE_DATA_H__
#define __TESTPHYRECEIVE_DATA_H__
/* Include files */
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include "mwmathutil.h"

#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include "blas.h"
#include "rtwtypes.h"
#include "testPHYReceive_types.h"

/* Variable Declarations */
extern const volatile char_T *emlrtBreakCheckR2012bFlagVar;
extern boolean_T isSetupsdruCalled;
extern emlrtRSInfo k_emlrtRSI;
extern emlrtRSInfo l_emlrtRSI;
extern emlrtRSInfo m_emlrtRSI;
extern emlrtRSInfo n_emlrtRSI;
extern emlrtRSInfo o_emlrtRSI;
extern emlrtRSInfo p_emlrtRSI;
extern emlrtRSInfo q_emlrtRSI;
extern emlrtRSInfo r_emlrtRSI;
extern emlrtRSInfo s_emlrtRSI;
extern emlrtRSInfo t_emlrtRSI;
extern emlrtRSInfo u_emlrtRSI;
extern emlrtRSInfo v_emlrtRSI;
extern emlrtRSInfo w_emlrtRSI;
extern emlrtRSInfo ob_emlrtRSI;
extern emlrtRSInfo pb_emlrtRSI;
extern emlrtRSInfo qb_emlrtRSI;
extern emlrtRSInfo rb_emlrtRSI;
extern emlrtRSInfo sb_emlrtRSI;
extern emlrtRSInfo tb_emlrtRSI;
extern emlrtRSInfo ub_emlrtRSI;
extern emlrtRSInfo vb_emlrtRSI;
extern emlrtRSInfo wb_emlrtRSI;
extern emlrtRSInfo xb_emlrtRSI;
extern emlrtRSInfo yb_emlrtRSI;
extern emlrtRSInfo ac_emlrtRSI;
extern emlrtRSInfo bc_emlrtRSI;
extern emlrtRSInfo cc_emlrtRSI;
extern emlrtRSInfo dc_emlrtRSI;
extern emlrtRSInfo fc_emlrtRSI;
extern emlrtRSInfo gc_emlrtRSI;
extern emlrtRSInfo hc_emlrtRSI;
extern emlrtRSInfo ic_emlrtRSI;
extern emlrtRSInfo jc_emlrtRSI;
extern emlrtRSInfo kc_emlrtRSI;
extern emlrtRSInfo lc_emlrtRSI;
extern emlrtRSInfo mc_emlrtRSI;
extern emlrtRSInfo nc_emlrtRSI;
extern emlrtRSInfo oc_emlrtRSI;
extern emlrtRSInfo pc_emlrtRSI;
extern emlrtRSInfo qc_emlrtRSI;
extern emlrtRSInfo rc_emlrtRSI;
extern emlrtRSInfo sc_emlrtRSI;
extern emlrtRSInfo uc_emlrtRSI;
extern emlrtRSInfo yc_emlrtRSI;
extern emlrtRSInfo ad_emlrtRSI;
extern emlrtRSInfo bd_emlrtRSI;
extern emlrtRSInfo cd_emlrtRSI;
extern emlrtRSInfo dd_emlrtRSI;
extern emlrtRSInfo ed_emlrtRSI;
extern emlrtRSInfo fd_emlrtRSI;
extern emlrtRSInfo gd_emlrtRSI;
extern emlrtRSInfo id_emlrtRSI;
extern emlrtRSInfo rd_emlrtRSI;
extern emlrtRSInfo sd_emlrtRSI;
extern emlrtRSInfo ud_emlrtRSI;
extern emlrtRSInfo vd_emlrtRSI;
extern emlrtRSInfo pe_emlrtRSI;
extern emlrtRSInfo gf_emlrtRSI;
extern emlrtRSInfo hf_emlrtRSI;
extern emlrtRSInfo jf_emlrtRSI;
extern emlrtRSInfo lf_emlrtRSI;
extern emlrtRSInfo nf_emlrtRSI;
extern emlrtRSInfo pf_emlrtRSI;
extern emlrtRSInfo qf_emlrtRSI;
extern emlrtRSInfo rf_emlrtRSI;
extern emlrtRSInfo sf_emlrtRSI;
extern emlrtRSInfo tf_emlrtRSI;
extern emlrtRSInfo pg_emlrtRSI;
extern emlrtRSInfo qg_emlrtRSI;
extern emlrtRSInfo rg_emlrtRSI;
extern emlrtRSInfo sg_emlrtRSI;
extern emlrtRSInfo tg_emlrtRSI;
extern emlrtRSInfo dh_emlrtRSI;
extern emlrtRSInfo ai_emlrtRSI;
extern emlrtRSInfo bi_emlrtRSI;
extern emlrtRSInfo ei_emlrtRSI;
extern emlrtRSInfo fi_emlrtRSI;
extern emlrtRSInfo li_emlrtRSI;
extern emlrtRSInfo mi_emlrtRSI;
extern emlrtRSInfo ni_emlrtRSI;
extern emlrtRSInfo oi_emlrtRSI;
extern emlrtRSInfo pi_emlrtRSI;
extern emlrtRSInfo qi_emlrtRSI;
extern emlrtRSInfo ri_emlrtRSI;
extern emlrtRSInfo ti_emlrtRSI;
extern emlrtRSInfo vi_emlrtRSI;
extern emlrtRSInfo cj_emlrtRSI;
extern emlrtRSInfo rj_emlrtRSI;
extern emlrtMCInfo emlrtMCI;
extern emlrtMCInfo b_emlrtMCI;
extern emlrtMCInfo c_emlrtMCI;
extern emlrtMCInfo d_emlrtMCI;
extern emlrtMCInfo e_emlrtMCI;
extern emlrtMCInfo h_emlrtMCI;
extern emlrtMCInfo i_emlrtMCI;
extern emlrtMCInfo j_emlrtMCI;
extern emlrtMCInfo k_emlrtMCI;
extern emlrtMCInfo l_emlrtMCI;
extern emlrtMCInfo m_emlrtMCI;
extern emlrtMCInfo n_emlrtMCI;
extern emlrtMCInfo o_emlrtMCI;
extern emlrtMCInfo p_emlrtMCI;
extern emlrtMCInfo q_emlrtMCI;
extern emlrtMCInfo r_emlrtMCI;
extern emlrtMCInfo t_emlrtMCI;
extern emlrtMCInfo u_emlrtMCI;
extern emlrtMCInfo v_emlrtMCI;
extern emlrtMCInfo w_emlrtMCI;
extern emlrtMCInfo x_emlrtMCI;
extern emlrtMCInfo y_emlrtMCI;
extern emlrtMCInfo eb_emlrtMCI;
extern emlrtMCInfo fb_emlrtMCI;
extern emlrtMCInfo gb_emlrtMCI;
extern emlrtMCInfo hb_emlrtMCI;
extern emlrtMCInfo ib_emlrtMCI;
extern emlrtMCInfo jb_emlrtMCI;
extern emlrtMCInfo kb_emlrtMCI;
extern emlrtMCInfo lb_emlrtMCI;
extern emlrtMCInfo mb_emlrtMCI;
extern emlrtMCInfo nb_emlrtMCI;
extern emlrtMCInfo qb_emlrtMCI;
extern emlrtMCInfo rb_emlrtMCI;
extern emlrtRTEInfo emlrtRTEI;
extern emlrtRTEInfo d_emlrtRTEI;
extern emlrtRTEInfo e_emlrtRTEI;
extern emlrtRTEInfo h_emlrtRTEI;
extern emlrtRTEInfo k_emlrtRTEI;
extern emlrtRTEInfo l_emlrtRTEI;
extern emlrtRTEInfo m_emlrtRTEI;
extern emlrtRTEInfo o_emlrtRTEI;
extern emlrtRTEInfo p_emlrtRTEI;
extern emlrtRTEInfo q_emlrtRTEI;
extern emlrtRTEInfo t_emlrtRTEI;
extern emlrtRTEInfo v_emlrtRTEI;
extern emlrtRTEInfo w_emlrtRTEI;
extern emlrtRTEInfo x_emlrtRTEI;
extern emlrtRTEInfo y_emlrtRTEI;
extern emlrtRTEInfo ab_emlrtRTEI;
extern emlrtRTEInfo bb_emlrtRTEI;
extern emlrtRTEInfo cb_emlrtRTEI;
extern emlrtRTEInfo db_emlrtRTEI;
extern emlrtRTEInfo eb_emlrtRTEI;
extern emlrtRTEInfo fb_emlrtRTEI;
extern emlrtRTEInfo gb_emlrtRTEI;
extern emlrtRTEInfo hb_emlrtRTEI;
extern emlrtRTEInfo ib_emlrtRTEI;
extern emlrtRTEInfo jb_emlrtRTEI;
extern emlrtRTEInfo kb_emlrtRTEI;
extern emlrtRTEInfo lb_emlrtRTEI;
extern emlrtRTEInfo mb_emlrtRTEI;
extern emlrtRTEInfo nb_emlrtRTEI;
extern emlrtRTEInfo ob_emlrtRTEI;
extern emlrtRTEInfo qb_emlrtRTEI;
extern emlrtRTEInfo rb_emlrtRTEI;
extern emlrtRTEInfo sb_emlrtRTEI;
extern emlrtRTEInfo tb_emlrtRTEI;
extern emlrtRTEInfo ub_emlrtRTEI;
extern emlrtRTEInfo vb_emlrtRTEI;
extern emlrtRTEInfo yb_emlrtRTEI;
extern emlrtBCInfo emlrtBCI;
extern emlrtECInfo emlrtECI;
extern emlrtDCInfo emlrtDCI;
extern emlrtBCInfo c_emlrtBCI;
extern emlrtRTEInfo ac_emlrtRTEI;
extern emlrtBCInfo q_emlrtBCI;
extern emlrtDCInfo c_emlrtDCI;
extern testPHYReceiveStackData *testPHYReceiveStackDataLocal;
#endif
/* End of code generation (testPHYReceive_data.h) */
