/*
 * testPHYTransmit_api.c
 *
 * Code generation for function 'testPHYTransmit_api'
 *
 * C source code generated on: Thu Apr 24 14:26:15 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testPHYTransmit.h"
#include "testPHYTransmit_api.h"

/* Function Declarations */
static void b_info_helper(ResolvedFunctionInfo info[470]);
static void c_info_helper(ResolvedFunctionInfo info[470]);
static void d_info_helper(ResolvedFunctionInfo info[470]);
static void e_info_helper(ResolvedFunctionInfo info[470]);
static const mxArray *emlrt_marshallOut(ResolvedFunctionInfo u[470]);
static void f_info_helper(ResolvedFunctionInfo info[470]);
static void g_info_helper(ResolvedFunctionInfo info[470]);
static void h_info_helper(ResolvedFunctionInfo info[470]);
static void info_helper(ResolvedFunctionInfo info[470]);

/* Function Definitions */
static void b_info_helper(ResolvedFunctionInfo info[470])
{
  info[64].context =
    "[C]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/OFDMBase.m";
  info[64].name = "coder.internal.errorIf";
  info[64].dominantType = "char";
  info[64].resolved =
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/errorIf.m";
  info[64].fileTimeLo = 1334093538U;
  info[64].fileTimeHi = 0U;
  info[64].mFileTimeLo = 0U;
  info[64].mFileTimeHi = 0U;
  info[65].context =
    "[PE]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/generateOFDMSignal_TX2.m";
  info[65].name = "mrdivide";
  info[65].dominantType = "double";
  info[65].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p";
  info[65].fileTimeLo = 1357973148U;
  info[65].fileTimeHi = 0U;
  info[65].mFileTimeLo = 1319751566U;
  info[65].mFileTimeHi = 0U;
  info[66].context =
    "[PE]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/generateOFDMSignal_TX2.m";
  info[66].name = "sqrt";
  info[66].dominantType = "double";
  info[66].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/sqrt.m";
  info[66].fileTimeLo = 1343851986U;
  info[66].fileTimeHi = 0U;
  info[66].mFileTimeLo = 0U;
  info[66].mFileTimeHi = 0U;
  info[67].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/sqrt.m";
  info[67].name = "eml_error";
  info[67].dominantType = "char";
  info[67].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_error.m";
  info[67].fileTimeLo = 1343851958U;
  info[67].fileTimeHi = 0U;
  info[67].mFileTimeLo = 0U;
  info[67].mFileTimeHi = 0U;
  info[68].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/sqrt.m";
  info[68].name = "eml_scalar_sqrt";
  info[68].dominantType = "double";
  info[68].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/eml_scalar_sqrt.m";
  info[68].fileTimeLo = 1286840338U;
  info[68].fileTimeHi = 0U;
  info[68].mFileTimeLo = 0U;
  info[68].mFileTimeHi = 0U;
  info[69].context =
    "[C]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/OFDMBase.m";
  info[69].name = "mrdivide";
  info[69].dominantType = "double";
  info[69].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p";
  info[69].fileTimeLo = 1357973148U;
  info[69].fileTimeHi = 0U;
  info[69].mFileTimeLo = 1319751566U;
  info[69].mFileTimeHi = 0U;
  info[70].context =
    "[C]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/OFDMBase.m";
  info[70].name = "any";
  info[70].dominantType = "logical";
  info[70].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/any.m";
  info[70].fileTimeLo = 1286840434U;
  info[70].fileTimeHi = 0U;
  info[70].mFileTimeLo = 0U;
  info[70].mFileTimeHi = 0U;
  info[71].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/any.m";
  info[71].name = "eml_all_or_any";
  info[71].dominantType = "char";
  info[71].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_all_or_any.m";
  info[71].fileTimeLo = 1286840294U;
  info[71].fileTimeHi = 0U;
  info[71].mFileTimeLo = 0U;
  info[71].mFileTimeHi = 0U;
  info[72].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_all_or_any.m";
  info[72].name = "isequal";
  info[72].dominantType = "double";
  info[72].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isequal.m";
  info[72].fileTimeLo = 1286840358U;
  info[72].fileTimeHi = 0U;
  info[72].mFileTimeLo = 0U;
  info[72].mFileTimeHi = 0U;
  info[73].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isequal.m";
  info[73].name = "eml_isequal_core";
  info[73].dominantType = "double";
  info[73].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_isequal_core.m";
  info[73].fileTimeLo = 1286840386U;
  info[73].fileTimeHi = 0U;
  info[73].mFileTimeLo = 0U;
  info[73].mFileTimeHi = 0U;
  info[74].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_all_or_any.m";
  info[74].name = "eml_const_nonsingleton_dim";
  info[74].dominantType = "logical";
  info[74].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_const_nonsingleton_dim.m";
  info[74].fileTimeLo = 1286840296U;
  info[74].fileTimeHi = 0U;
  info[74].mFileTimeLo = 0U;
  info[74].mFileTimeHi = 0U;
  info[75].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_all_or_any.m";
  info[75].name = "isnan";
  info[75].dominantType = "logical";
  info[75].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isnan.m";
  info[75].fileTimeLo = 1286840360U;
  info[75].fileTimeHi = 0U;
  info[75].mFileTimeLo = 0U;
  info[75].mFileTimeHi = 0U;
  info[76].context =
    "[C]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/OFDMBase.m";
  info[76].name = "sum";
  info[76].dominantType = "double";
  info[76].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/sum.m";
  info[76].fileTimeLo = 1314758212U;
  info[76].fileTimeHi = 0U;
  info[76].mFileTimeLo = 0U;
  info[76].mFileTimeHi = 0U;
  info[77].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/sum.m";
  info[77].name = "isequal";
  info[77].dominantType = "double";
  info[77].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isequal.m";
  info[77].fileTimeLo = 1286840358U;
  info[77].fileTimeHi = 0U;
  info[77].mFileTimeLo = 0U;
  info[77].mFileTimeHi = 0U;
  info[78].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/sum.m";
  info[78].name = "eml_const_nonsingleton_dim";
  info[78].dominantType = "double";
  info[78].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_const_nonsingleton_dim.m";
  info[78].fileTimeLo = 1286840296U;
  info[78].fileTimeHi = 0U;
  info[78].mFileTimeLo = 0U;
  info[78].mFileTimeHi = 0U;
  info[79].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/sum.m";
  info[79].name = "eml_scalar_eg";
  info[79].dominantType = "double";
  info[79].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m";
  info[79].fileTimeLo = 1286840396U;
  info[79].fileTimeHi = 0U;
  info[79].mFileTimeLo = 0U;
  info[79].mFileTimeHi = 0U;
  info[80].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/sum.m";
  info[80].name = "eml_index_class";
  info[80].dominantType = "";
  info[80].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[80].fileTimeLo = 1323192178U;
  info[80].fileTimeHi = 0U;
  info[80].mFileTimeLo = 0U;
  info[80].mFileTimeHi = 0U;
  info[81].context =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p";
  info[81].name = "isnan";
  info[81].dominantType = "logical";
  info[81].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isnan.m";
  info[81].fileTimeLo = 1286840360U;
  info[81].fileTimeHi = 0U;
  info[81].mFileTimeLo = 0U;
  info[81].mFileTimeHi = 0U;
  info[82].context =
    "[C]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/OFDMModulator.m";
  info[82].name = "colon";
  info[82].dominantType = "double";
  info[82].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m";
  info[82].fileTimeLo = 1348213528U;
  info[82].fileTimeHi = 0U;
  info[82].mFileTimeLo = 0U;
  info[82].mFileTimeHi = 0U;
  info[83].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m";
  info[83].name = "colon";
  info[83].dominantType = "double";
  info[83].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m";
  info[83].fileTimeLo = 1348213528U;
  info[83].fileTimeHi = 0U;
  info[83].mFileTimeLo = 0U;
  info[83].mFileTimeHi = 0U;
  info[84].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m!is_flint_colon";
  info[84].name = "isfinite";
  info[84].dominantType = "double";
  info[84].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isfinite.m";
  info[84].fileTimeLo = 1286840358U;
  info[84].fileTimeHi = 0U;
  info[84].mFileTimeLo = 0U;
  info[84].mFileTimeHi = 0U;
  info[85].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m!is_flint_colon";
  info[85].name = "floor";
  info[85].dominantType = "double";
  info[85].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/floor.m";
  info[85].fileTimeLo = 1343851980U;
  info[85].fileTimeHi = 0U;
  info[85].mFileTimeLo = 0U;
  info[85].mFileTimeHi = 0U;
  info[86].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m!maxabs";
  info[86].name = "abs";
  info[86].dominantType = "double";
  info[86].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/abs.m";
  info[86].fileTimeLo = 1343851966U;
  info[86].fileTimeHi = 0U;
  info[86].mFileTimeLo = 0U;
  info[86].mFileTimeHi = 0U;
  info[87].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/abs.m";
  info[87].name = "eml_scalar_abs";
  info[87].dominantType = "double";
  info[87].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/eml_scalar_abs.m";
  info[87].fileTimeLo = 1286840312U;
  info[87].fileTimeHi = 0U;
  info[87].mFileTimeLo = 0U;
  info[87].mFileTimeHi = 0U;
  info[88].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m!is_flint_colon";
  info[88].name = "eps";
  info[88].dominantType = "double";
  info[88].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/eps.m";
  info[88].fileTimeLo = 1326749596U;
  info[88].fileTimeHi = 0U;
  info[88].mFileTimeLo = 0U;
  info[88].mFileTimeHi = 0U;
  info[89].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/eps.m";
  info[89].name = "eml_mantissa_nbits";
  info[89].dominantType = "char";
  info[89].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_mantissa_nbits.m";
  info[89].fileTimeLo = 1307672842U;
  info[89].fileTimeHi = 0U;
  info[89].mFileTimeLo = 0U;
  info[89].mFileTimeHi = 0U;
  info[90].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_mantissa_nbits.m";
  info[90].name = "eml_float_model";
  info[90].dominantType = "char";
  info[90].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_float_model.m";
  info[90].fileTimeLo = 1326749596U;
  info[90].fileTimeHi = 0U;
  info[90].mFileTimeLo = 0U;
  info[90].mFileTimeHi = 0U;
  info[91].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/eps.m";
  info[91].name = "eml_realmin";
  info[91].dominantType = "char";
  info[91].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_realmin.m";
  info[91].fileTimeLo = 1307672844U;
  info[91].fileTimeHi = 0U;
  info[91].mFileTimeLo = 0U;
  info[91].mFileTimeHi = 0U;
  info[92].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_realmin.m";
  info[92].name = "eml_float_model";
  info[92].dominantType = "char";
  info[92].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_float_model.m";
  info[92].fileTimeLo = 1326749596U;
  info[92].fileTimeHi = 0U;
  info[92].mFileTimeLo = 0U;
  info[92].mFileTimeHi = 0U;
  info[93].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/eps.m";
  info[93].name = "eml_realmin_denormal";
  info[93].dominantType = "char";
  info[93].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_realmin_denormal.m";
  info[93].fileTimeLo = 1326749598U;
  info[93].fileTimeHi = 0U;
  info[93].mFileTimeLo = 0U;
  info[93].mFileTimeHi = 0U;
  info[94].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_realmin_denormal.m";
  info[94].name = "eml_float_model";
  info[94].dominantType = "char";
  info[94].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_float_model.m";
  info[94].fileTimeLo = 1326749596U;
  info[94].fileTimeHi = 0U;
  info[94].mFileTimeLo = 0U;
  info[94].mFileTimeHi = 0U;
  info[95].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/eps.m";
  info[95].name = "abs";
  info[95].dominantType = "double";
  info[95].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/abs.m";
  info[95].fileTimeLo = 1343851966U;
  info[95].fileTimeHi = 0U;
  info[95].mFileTimeLo = 0U;
  info[95].mFileTimeHi = 0U;
  info[96].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/eps.m";
  info[96].name = "isfinite";
  info[96].dominantType = "double";
  info[96].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isfinite.m";
  info[96].fileTimeLo = 1286840358U;
  info[96].fileTimeHi = 0U;
  info[96].mFileTimeLo = 0U;
  info[96].mFileTimeHi = 0U;
  info[97].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m!checkrange";
  info[97].name = "realmax";
  info[97].dominantType = "char";
  info[97].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/realmax.m";
  info[97].fileTimeLo = 1307672842U;
  info[97].fileTimeHi = 0U;
  info[97].mFileTimeLo = 0U;
  info[97].mFileTimeHi = 0U;
  info[98].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m!eml_flint_colon";
  info[98].name = "mrdivide";
  info[98].dominantType = "double";
  info[98].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p";
  info[98].fileTimeLo = 1357973148U;
  info[98].fileTimeHi = 0U;
  info[98].mFileTimeLo = 1319751566U;
  info[98].mFileTimeHi = 0U;
  info[99].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m!eml_flint_colon";
  info[99].name = "floor";
  info[99].dominantType = "double";
  info[99].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/floor.m";
  info[99].fileTimeLo = 1343851980U;
  info[99].fileTimeHi = 0U;
  info[99].mFileTimeLo = 0U;
  info[99].mFileTimeHi = 0U;
  info[100].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m!eml_flint_colon";
  info[100].name = "eml_index_class";
  info[100].dominantType = "";
  info[100].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[100].fileTimeLo = 1323192178U;
  info[100].fileTimeHi = 0U;
  info[100].mFileTimeLo = 0U;
  info[100].mFileTimeHi = 0U;
  info[101].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m!eml_flint_colon";
  info[101].name = "intmax";
  info[101].dominantType = "char";
  info[101].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/intmax.m";
  info[101].fileTimeLo = 1311276916U;
  info[101].fileTimeHi = 0U;
  info[101].mFileTimeLo = 0U;
  info[101].mFileTimeHi = 0U;
  info[102].context =
    "[C]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/OFDMModulator.m";
  info[102].name = "find";
  info[102].dominantType = "logical";
  info[102].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/find.m";
  info[102].fileTimeLo = 1303167806U;
  info[102].fileTimeHi = 0U;
  info[102].mFileTimeLo = 0U;
  info[102].mFileTimeHi = 0U;
  info[103].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/find.m!eml_find";
  info[103].name = "eml_index_class";
  info[103].dominantType = "";
  info[103].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[103].fileTimeLo = 1323192178U;
  info[103].fileTimeHi = 0U;
  info[103].mFileTimeLo = 0U;
  info[103].mFileTimeHi = 0U;
  info[104].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/find.m!eml_find";
  info[104].name = "eml_scalar_eg";
  info[104].dominantType = "logical";
  info[104].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m";
  info[104].fileTimeLo = 1286840396U;
  info[104].fileTimeHi = 0U;
  info[104].mFileTimeLo = 0U;
  info[104].mFileTimeHi = 0U;
  info[105].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/find.m!eml_find";
  info[105].name = "eml_int_forloop_overflow_check";
  info[105].dominantType = "";
  info[105].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m";
  info[105].fileTimeLo = 1346531940U;
  info[105].fileTimeHi = 0U;
  info[105].mFileTimeLo = 0U;
  info[105].mFileTimeHi = 0U;
  info[106].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m!eml_int_forloop_overflow_check_helper";
  info[106].name = "intmax";
  info[106].dominantType = "char";
  info[106].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/intmax.m";
  info[106].fileTimeLo = 1311276916U;
  info[106].fileTimeHi = 0U;
  info[106].mFileTimeLo = 0U;
  info[106].mFileTimeHi = 0U;
  info[107].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/find.m!eml_find";
  info[107].name = "eml_index_plus";
  info[107].dominantType = "double";
  info[107].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_plus.m";
  info[107].fileTimeLo = 1286840378U;
  info[107].fileTimeHi = 0U;
  info[107].mFileTimeLo = 0U;
  info[107].mFileTimeHi = 0U;
  info[108].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_plus.m";
  info[108].name = "eml_index_class";
  info[108].dominantType = "";
  info[108].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[108].fileTimeLo = 1323192178U;
  info[108].fileTimeHi = 0U;
  info[108].mFileTimeLo = 0U;
  info[108].mFileTimeHi = 0U;
  info[109].context =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemCore.p";
  info[109].name = "matlab.system.coder.SystemCore";
  info[109].dominantType = "";
  info[109].resolved =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemCore.p";
  info[109].fileTimeLo = 1357971318U;
  info[109].fileTimeHi = 0U;
  info[109].mFileTimeLo = 0U;
  info[109].mFileTimeHi = 0U;
  info[110].context =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p";
  info[110].name = "length";
  info[110].dominantType = "logical";
  info[110].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/length.m";
  info[110].fileTimeLo = 1303167806U;
  info[110].fileTimeHi = 0U;
  info[110].mFileTimeLo = 0U;
  info[110].mFileTimeHi = 0U;
  info[111].context =
    "[C]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/OFDMModulator.m";
  info[111].name = "ifftshift";
  info[111].dominantType = "double";
  info[111].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/ifftshift.m";
  info[111].fileTimeLo = 1286840294U;
  info[111].fileTimeHi = 0U;
  info[111].mFileTimeLo = 0U;
  info[111].mFileTimeHi = 0U;
  info[112].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/ifftshift.m";
  info[112].name = "eml_assert_valid_dim";
  info[112].dominantType = "double";
  info[112].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_assert_valid_dim.m";
  info[112].fileTimeLo = 1286840294U;
  info[112].fileTimeHi = 0U;
  info[112].mFileTimeLo = 0U;
  info[112].mFileTimeHi = 0U;
  info[113].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_assert_valid_dim.m";
  info[113].name = "eml_scalar_floor";
  info[113].dominantType = "double";
  info[113].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/eml_scalar_floor.m";
  info[113].fileTimeLo = 1286840326U;
  info[113].fileTimeHi = 0U;
  info[113].mFileTimeLo = 0U;
  info[113].mFileTimeHi = 0U;
  info[114].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_assert_valid_dim.m";
  info[114].name = "eml_index_class";
  info[114].dominantType = "";
  info[114].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[114].fileTimeLo = 1323192178U;
  info[114].fileTimeHi = 0U;
  info[114].mFileTimeLo = 0U;
  info[114].mFileTimeHi = 0U;
  info[115].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_assert_valid_dim.m";
  info[115].name = "intmax";
  info[115].dominantType = "char";
  info[115].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/intmax.m";
  info[115].fileTimeLo = 1311276916U;
  info[115].fileTimeHi = 0U;
  info[115].mFileTimeLo = 0U;
  info[115].mFileTimeHi = 0U;
  info[116].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/ifftshift.m";
  info[116].name = "eml_ifftshift";
  info[116].dominantType = "double";
  info[116].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_ifftshift.m";
  info[116].fileTimeLo = 1286840378U;
  info[116].fileTimeHi = 0U;
  info[116].mFileTimeLo = 0U;
  info[116].mFileTimeHi = 0U;
  info[117].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_ifftshift.m";
  info[117].name = "eml_index_rdivide";
  info[117].dominantType = "double";
  info[117].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_rdivide.m";
  info[117].fileTimeLo = 1286840380U;
  info[117].fileTimeHi = 0U;
  info[117].mFileTimeLo = 0U;
  info[117].mFileTimeHi = 0U;
  info[118].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_rdivide.m";
  info[118].name = "eml_index_class";
  info[118].dominantType = "";
  info[118].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[118].fileTimeLo = 1323192178U;
  info[118].fileTimeHi = 0U;
  info[118].mFileTimeLo = 0U;
  info[118].mFileTimeHi = 0U;
  info[119].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_ifftshift.m";
  info[119].name = "eml_index_times";
  info[119].dominantType = "double";
  info[119].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_times.m";
  info[119].fileTimeLo = 1286840380U;
  info[119].fileTimeHi = 0U;
  info[119].mFileTimeLo = 0U;
  info[119].mFileTimeHi = 0U;
  info[120].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_times.m";
  info[120].name = "eml_index_class";
  info[120].dominantType = "";
  info[120].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[120].fileTimeLo = 1323192178U;
  info[120].fileTimeHi = 0U;
  info[120].mFileTimeLo = 0U;
  info[120].mFileTimeHi = 0U;
  info[121].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_ifftshift.m";
  info[121].name = "eml_fftshift";
  info[121].dominantType = "double";
  info[121].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fftshift.m";
  info[121].fileTimeLo = 1286840376U;
  info[121].fileTimeHi = 0U;
  info[121].mFileTimeLo = 0U;
  info[121].mFileTimeHi = 0U;
  info[122].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fftshift.m";
  info[122].name = "eml_index_rdivide";
  info[122].dominantType = "double";
  info[122].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_rdivide.m";
  info[122].fileTimeLo = 1286840380U;
  info[122].fileTimeHi = 0U;
  info[122].mFileTimeLo = 0U;
  info[122].mFileTimeHi = 0U;
  info[123].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fftshift.m";
  info[123].name = "eml_matrix_vstride";
  info[123].dominantType = "double";
  info[123].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_matrix_vstride.m";
  info[123].fileTimeLo = 1286840388U;
  info[123].fileTimeHi = 0U;
  info[123].mFileTimeLo = 0U;
  info[123].mFileTimeHi = 0U;
  info[124].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_matrix_vstride.m";
  info[124].name = "eml_index_minus";
  info[124].dominantType = "double";
  info[124].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_minus.m";
  info[124].fileTimeLo = 1286840378U;
  info[124].fileTimeHi = 0U;
  info[124].mFileTimeLo = 0U;
  info[124].mFileTimeHi = 0U;
  info[125].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_matrix_vstride.m";
  info[125].name = "eml_index_class";
  info[125].dominantType = "";
  info[125].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[125].fileTimeLo = 1323192178U;
  info[125].fileTimeHi = 0U;
  info[125].mFileTimeLo = 0U;
  info[125].mFileTimeHi = 0U;
  info[126].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_matrix_vstride.m";
  info[126].name = "eml_size_prod";
  info[126].dominantType = "double";
  info[126].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_size_prod.m";
  info[126].fileTimeLo = 1286840398U;
  info[126].fileTimeHi = 0U;
  info[126].mFileTimeLo = 0U;
  info[126].mFileTimeHi = 0U;
  info[127].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_size_prod.m";
  info[127].name = "eml_index_class";
  info[127].dominantType = "";
  info[127].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[127].fileTimeLo = 1323192178U;
  info[127].fileTimeHi = 0U;
  info[127].mFileTimeLo = 0U;
  info[127].mFileTimeHi = 0U;
}

static void c_info_helper(ResolvedFunctionInfo info[470])
{
  info[128].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fftshift.m";
  info[128].name = "eml_matrix_npages";
  info[128].dominantType = "double";
  info[128].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_matrix_npages.m";
  info[128].fileTimeLo = 1286840386U;
  info[128].fileTimeHi = 0U;
  info[128].mFileTimeLo = 0U;
  info[128].mFileTimeHi = 0U;
  info[129].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_matrix_npages.m";
  info[129].name = "eml_index_plus";
  info[129].dominantType = "double";
  info[129].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_plus.m";
  info[129].fileTimeLo = 1286840378U;
  info[129].fileTimeHi = 0U;
  info[129].mFileTimeLo = 0U;
  info[129].mFileTimeHi = 0U;
  info[130].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_matrix_npages.m";
  info[130].name = "eml_index_class";
  info[130].dominantType = "";
  info[130].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[130].fileTimeLo = 1323192178U;
  info[130].fileTimeHi = 0U;
  info[130].mFileTimeLo = 0U;
  info[130].mFileTimeHi = 0U;
  info[131].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_matrix_npages.m";
  info[131].name = "eml_size_prod";
  info[131].dominantType = "double";
  info[131].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_size_prod.m";
  info[131].fileTimeLo = 1286840398U;
  info[131].fileTimeHi = 0U;
  info[131].mFileTimeLo = 0U;
  info[131].mFileTimeHi = 0U;
  info[132].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_size_prod.m";
  info[132].name = "eml_index_times";
  info[132].dominantType = "double";
  info[132].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_times.m";
  info[132].fileTimeLo = 1286840380U;
  info[132].fileTimeHi = 0U;
  info[132].mFileTimeLo = 0U;
  info[132].mFileTimeHi = 0U;
  info[133].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fftshift.m";
  info[133].name = "eml_index_minus";
  info[133].dominantType = "double";
  info[133].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_minus.m";
  info[133].fileTimeLo = 1286840378U;
  info[133].fileTimeHi = 0U;
  info[133].mFileTimeLo = 0U;
  info[133].mFileTimeHi = 0U;
  info[134].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fftshift.m";
  info[134].name = "eml_index_times";
  info[134].dominantType = "coder.internal.indexInt";
  info[134].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_times.m";
  info[134].fileTimeLo = 1286840380U;
  info[134].fileTimeHi = 0U;
  info[134].mFileTimeLo = 0U;
  info[134].mFileTimeHi = 0U;
  info[135].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fftshift.m";
  info[135].name = "eml_index_times";
  info[135].dominantType = "double";
  info[135].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_times.m";
  info[135].fileTimeLo = 1286840380U;
  info[135].fileTimeHi = 0U;
  info[135].mFileTimeLo = 0U;
  info[135].mFileTimeHi = 0U;
  info[136].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fftshift.m";
  info[136].name = "eml_index_class";
  info[136].dominantType = "";
  info[136].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[136].fileTimeLo = 1323192178U;
  info[136].fileTimeHi = 0U;
  info[136].mFileTimeLo = 0U;
  info[136].mFileTimeHi = 0U;
  info[137].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fftshift.m";
  info[137].name = "eml_index_plus";
  info[137].dominantType = "coder.internal.indexInt";
  info[137].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_plus.m";
  info[137].fileTimeLo = 1286840378U;
  info[137].fileTimeHi = 0U;
  info[137].mFileTimeLo = 0U;
  info[137].mFileTimeHi = 0U;
  info[138].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fftshift.m";
  info[138].name = "eml_index_plus";
  info[138].dominantType = "double";
  info[138].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_plus.m";
  info[138].fileTimeLo = 1286840378U;
  info[138].fileTimeHi = 0U;
  info[138].mFileTimeLo = 0U;
  info[138].mFileTimeHi = 0U;
  info[139].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fftshift.m";
  info[139].name = "eml_int_forloop_overflow_check";
  info[139].dominantType = "";
  info[139].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m";
  info[139].fileTimeLo = 1346531940U;
  info[139].fileTimeHi = 0U;
  info[139].mFileTimeLo = 0U;
  info[139].mFileTimeHi = 0U;
  info[140].context =
    "[C]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/OFDMModulator.m";
  info[140].name = "ifft";
  info[140].dominantType = "double";
  info[140].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/ifft.m";
  info[140].fileTimeLo = 1286840292U;
  info[140].fileTimeHi = 0U;
  info[140].mFileTimeLo = 0U;
  info[140].mFileTimeHi = 0U;
  info[141].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/ifft.m";
  info[141].name = "eml_fft";
  info[141].dominantType = "char";
  info[141].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m";
  info[141].fileTimeLo = 1286840374U;
  info[141].fileTimeHi = 0U;
  info[141].mFileTimeLo = 0U;
  info[141].mFileTimeHi = 0U;
  info[142].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m";
  info[142].name = "eml_assert_valid_dim";
  info[142].dominantType = "double";
  info[142].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_assert_valid_dim.m";
  info[142].fileTimeLo = 1286840294U;
  info[142].fileTimeHi = 0U;
  info[142].mFileTimeLo = 0U;
  info[142].mFileTimeHi = 0U;
  info[143].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m";
  info[143].name = "eml_index_class";
  info[143].dominantType = "";
  info[143].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[143].fileTimeLo = 1323192178U;
  info[143].fileTimeHi = 0U;
  info[143].mFileTimeLo = 0U;
  info[143].mFileTimeHi = 0U;
  info[144].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m";
  info[144].name = "eml_unsigned_class";
  info[144].dominantType = "char";
  info[144].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_unsigned_class.m";
  info[144].fileTimeLo = 1323192180U;
  info[144].fileTimeHi = 0U;
  info[144].mFileTimeLo = 0U;
  info[144].mFileTimeHi = 0U;
  info[145].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_unsigned_class.m";
  info[145].name = "eml_index_class";
  info[145].dominantType = "";
  info[145].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[145].fileTimeLo = 1323192178U;
  info[145].fileTimeHi = 0U;
  info[145].mFileTimeLo = 0U;
  info[145].mFileTimeHi = 0U;
  info[146].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m";
  info[146].name = "eml_size_ispow2";
  info[146].dominantType = "coder.internal.indexInt";
  info[146].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_size_ispow2.m";
  info[146].fileTimeLo = 1286840398U;
  info[146].fileTimeHi = 0U;
  info[146].mFileTimeLo = 0U;
  info[146].mFileTimeHi = 0U;
  info[147].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_size_ispow2.m";
  info[147].name = "eml_unsigned_class";
  info[147].dominantType = "char";
  info[147].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_unsigned_class.m";
  info[147].fileTimeLo = 1323192180U;
  info[147].fileTimeHi = 0U;
  info[147].mFileTimeLo = 0U;
  info[147].mFileTimeHi = 0U;
  info[148].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m!r2br_r2dit_trig";
  info[148].name = "eml_scalar_eg";
  info[148].dominantType = "double";
  info[148].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m";
  info[148].fileTimeLo = 1286840396U;
  info[148].fileTimeHi = 0U;
  info[148].mFileTimeLo = 0U;
  info[148].mFileTimeHi = 0U;
  info[149].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m!r2br_r2dit_trig";
  info[149].name = "eml_index_class";
  info[149].dominantType = "";
  info[149].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[149].fileTimeLo = 1323192178U;
  info[149].fileTimeHi = 0U;
  info[149].mFileTimeLo = 0U;
  info[149].mFileTimeHi = 0U;
  info[150].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m!r2br_r2dit_trig";
  info[150].name = "min";
  info[150].dominantType = "double";
  info[150].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/min.m";
  info[150].fileTimeLo = 1311276918U;
  info[150].fileTimeHi = 0U;
  info[150].mFileTimeLo = 0U;
  info[150].mFileTimeHi = 0U;
  info[151].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/min.m";
  info[151].name = "eml_min_or_max";
  info[151].dominantType = "char";
  info[151].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m";
  info[151].fileTimeLo = 1334093090U;
  info[151].fileTimeHi = 0U;
  info[151].mFileTimeLo = 0U;
  info[151].mFileTimeHi = 0U;
  info[152].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_bin_extremum";
  info[152].name = "eml_scalar_eg";
  info[152].dominantType = "double";
  info[152].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m";
  info[152].fileTimeLo = 1286840396U;
  info[152].fileTimeHi = 0U;
  info[152].mFileTimeLo = 0U;
  info[152].mFileTimeHi = 0U;
  info[153].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_bin_extremum";
  info[153].name = "eml_scalexp_alloc";
  info[153].dominantType = "double";
  info[153].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalexp_alloc.m";
  info[153].fileTimeLo = 1352446460U;
  info[153].fileTimeHi = 0U;
  info[153].mFileTimeLo = 0U;
  info[153].mFileTimeHi = 0U;
  info[154].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_bin_extremum";
  info[154].name = "eml_index_class";
  info[154].dominantType = "";
  info[154].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[154].fileTimeLo = 1323192178U;
  info[154].fileTimeHi = 0U;
  info[154].mFileTimeLo = 0U;
  info[154].mFileTimeHi = 0U;
  info[155].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_scalar_bin_extremum";
  info[155].name = "eml_scalar_eg";
  info[155].dominantType = "double";
  info[155].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m";
  info[155].fileTimeLo = 1286840396U;
  info[155].fileTimeHi = 0U;
  info[155].mFileTimeLo = 0U;
  info[155].mFileTimeHi = 0U;
  info[156].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_scalar_bin_extremum";
  info[156].name = "eml_relop";
  info[156].dominantType = "function_handle";
  info[156].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_relop.m";
  info[156].fileTimeLo = 1342472782U;
  info[156].fileTimeHi = 0U;
  info[156].mFileTimeLo = 0U;
  info[156].mFileTimeHi = 0U;
  info[157].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_relop.m";
  info[157].name = "coder.internal.indexIntRelop";
  info[157].dominantType = "";
  info[157].resolved =
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/indexIntRelop.m";
  info[157].fileTimeLo = 1326749922U;
  info[157].fileTimeHi = 0U;
  info[157].mFileTimeLo = 0U;
  info[157].mFileTimeHi = 0U;
  info[158].context =
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/indexIntRelop.m!float_class_contains_indexIntClass";
  info[158].name = "eml_float_model";
  info[158].dominantType = "char";
  info[158].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_float_model.m";
  info[158].fileTimeLo = 1326749596U;
  info[158].fileTimeHi = 0U;
  info[158].mFileTimeLo = 0U;
  info[158].mFileTimeHi = 0U;
  info[159].context =
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/indexIntRelop.m!is_signed_indexIntClass";
  info[159].name = "intmin";
  info[159].dominantType = "char";
  info[159].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/intmin.m";
  info[159].fileTimeLo = 1311276918U;
  info[159].fileTimeHi = 0U;
  info[159].mFileTimeLo = 0U;
  info[159].mFileTimeHi = 0U;
  info[160].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_scalar_bin_extremum";
  info[160].name = "isnan";
  info[160].dominantType = "double";
  info[160].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isnan.m";
  info[160].fileTimeLo = 1286840360U;
  info[160].fileTimeHi = 0U;
  info[160].mFileTimeLo = 0U;
  info[160].mFileTimeHi = 0U;
  info[161].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m!r2br_r2dit_trig";
  info[161].name = "eml_index_minus";
  info[161].dominantType = "double";
  info[161].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_minus.m";
  info[161].fileTimeLo = 1286840378U;
  info[161].fileTimeHi = 0U;
  info[161].mFileTimeLo = 0U;
  info[161].mFileTimeHi = 0U;
  info[162].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m!r2br_r2dit_trig";
  info[162].name = "max";
  info[162].dominantType = "coder.internal.indexInt";
  info[162].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/max.m";
  info[162].fileTimeLo = 1311276916U;
  info[162].fileTimeHi = 0U;
  info[162].mFileTimeLo = 0U;
  info[162].mFileTimeHi = 0U;
  info[163].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/max.m";
  info[163].name = "eml_min_or_max";
  info[163].dominantType = "char";
  info[163].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m";
  info[163].fileTimeLo = 1334093090U;
  info[163].fileTimeHi = 0U;
  info[163].mFileTimeLo = 0U;
  info[163].mFileTimeHi = 0U;
  info[164].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_bin_extremum";
  info[164].name = "eml_scalar_eg";
  info[164].dominantType = "coder.internal.indexInt";
  info[164].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m";
  info[164].fileTimeLo = 1286840396U;
  info[164].fileTimeHi = 0U;
  info[164].mFileTimeLo = 0U;
  info[164].mFileTimeHi = 0U;
  info[165].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_bin_extremum";
  info[165].name = "eml_scalexp_alloc";
  info[165].dominantType = "coder.internal.indexInt";
  info[165].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalexp_alloc.m";
  info[165].fileTimeLo = 1352446460U;
  info[165].fileTimeHi = 0U;
  info[165].mFileTimeLo = 0U;
  info[165].mFileTimeHi = 0U;
  info[166].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_scalar_bin_extremum";
  info[166].name = "eml_scalar_eg";
  info[166].dominantType = "coder.internal.indexInt";
  info[166].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m";
  info[166].fileTimeLo = 1286840396U;
  info[166].fileTimeHi = 0U;
  info[166].mFileTimeLo = 0U;
  info[166].mFileTimeHi = 0U;
  info[167].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m!r2br_r2dit_trig";
  info[167].name = "eml_index_minus";
  info[167].dominantType = "coder.internal.indexInt";
  info[167].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_minus.m";
  info[167].fileTimeLo = 1286840378U;
  info[167].fileTimeHi = 0U;
  info[167].mFileTimeLo = 0U;
  info[167].mFileTimeHi = 0U;
  info[168].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m!r2br_r2dit_trig";
  info[168].name = "eml_index_rdivide";
  info[168].dominantType = "coder.internal.indexInt";
  info[168].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_rdivide.m";
  info[168].fileTimeLo = 1286840380U;
  info[168].fileTimeHi = 0U;
  info[168].mFileTimeLo = 0U;
  info[168].mFileTimeHi = 0U;
  info[169].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m!r2br_r2dit_trig";
  info[169].name = "eml_index_rdivide";
  info[169].dominantType = "double";
  info[169].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_rdivide.m";
  info[169].fileTimeLo = 1286840380U;
  info[169].fileTimeHi = 0U;
  info[169].mFileTimeLo = 0U;
  info[169].mFileTimeHi = 0U;
  info[170].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m!r2br_r2dit_trig";
  info[170].name = "eml_index_times";
  info[170].dominantType = "coder.internal.indexInt";
  info[170].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_times.m";
  info[170].fileTimeLo = 1286840380U;
  info[170].fileTimeHi = 0U;
  info[170].mFileTimeLo = 0U;
  info[170].mFileTimeHi = 0U;
  info[171].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m!r2br_r2dit_trig";
  info[171].name = "mtimes";
  info[171].dominantType = "double";
  info[171].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  info[171].fileTimeLo = 1289541292U;
  info[171].fileTimeHi = 0U;
  info[171].mFileTimeLo = 0U;
  info[171].mFileTimeHi = 0U;
  info[172].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m!r2br_r2dit_trig";
  info[172].name = "mrdivide";
  info[172].dominantType = "double";
  info[172].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p";
  info[172].fileTimeLo = 1357973148U;
  info[172].fileTimeHi = 0U;
  info[172].mFileTimeLo = 1319751566U;
  info[172].mFileTimeHi = 0U;
  info[173].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m!make_1q_cosine_table";
  info[173].name = "eml_index_plus";
  info[173].dominantType = "double";
  info[173].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_plus.m";
  info[173].fileTimeLo = 1286840378U;
  info[173].fileTimeHi = 0U;
  info[173].mFileTimeLo = 0U;
  info[173].mFileTimeHi = 0U;
  info[174].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m!make_1q_cosine_table";
  info[174].name = "eml_index_rdivide";
  info[174].dominantType = "double";
  info[174].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_rdivide.m";
  info[174].fileTimeLo = 1286840380U;
  info[174].fileTimeHi = 0U;
  info[174].mFileTimeLo = 0U;
  info[174].mFileTimeHi = 0U;
  info[175].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m!make_1q_cosine_table";
  info[175].name = "eml_int_forloop_overflow_check";
  info[175].dominantType = "";
  info[175].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m";
  info[175].fileTimeLo = 1346531940U;
  info[175].fileTimeHi = 0U;
  info[175].mFileTimeLo = 0U;
  info[175].mFileTimeHi = 0U;
  info[176].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m!make_1q_cosine_table";
  info[176].name = "mtimes";
  info[176].dominantType = "double";
  info[176].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  info[176].fileTimeLo = 1289541292U;
  info[176].fileTimeHi = 0U;
  info[176].mFileTimeLo = 0U;
  info[176].mFileTimeHi = 0U;
  info[177].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m!make_1q_cosine_table";
  info[177].name = "cos";
  info[177].dominantType = "double";
  info[177].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/cos.m";
  info[177].fileTimeLo = 1343851972U;
  info[177].fileTimeHi = 0U;
  info[177].mFileTimeLo = 0U;
  info[177].mFileTimeHi = 0U;
  info[178].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/cos.m";
  info[178].name = "eml_scalar_cos";
  info[178].dominantType = "double";
  info[178].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/eml_scalar_cos.m";
  info[178].fileTimeLo = 1286840322U;
  info[178].fileTimeHi = 0U;
  info[178].mFileTimeLo = 0U;
  info[178].mFileTimeHi = 0U;
  info[179].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m!make_1q_cosine_table";
  info[179].name = "eml_index_minus";
  info[179].dominantType = "double";
  info[179].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_minus.m";
  info[179].fileTimeLo = 1286840378U;
  info[179].fileTimeHi = 0U;
  info[179].mFileTimeLo = 0U;
  info[179].mFileTimeHi = 0U;
  info[180].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m!make_1q_cosine_table";
  info[180].name = "eml_index_minus";
  info[180].dominantType = "coder.internal.indexInt";
  info[180].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_minus.m";
  info[180].fileTimeLo = 1286840378U;
  info[180].fileTimeHi = 0U;
  info[180].mFileTimeLo = 0U;
  info[180].mFileTimeHi = 0U;
  info[181].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m!make_1q_cosine_table";
  info[181].name = "sin";
  info[181].dominantType = "double";
  info[181].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/sin.m";
  info[181].fileTimeLo = 1343851986U;
  info[181].fileTimeHi = 0U;
  info[181].mFileTimeLo = 0U;
  info[181].mFileTimeHi = 0U;
  info[182].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/sin.m";
  info[182].name = "eml_scalar_sin";
  info[182].dominantType = "double";
  info[182].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/eml_scalar_sin.m";
  info[182].fileTimeLo = 1286840336U;
  info[182].fileTimeHi = 0U;
  info[182].mFileTimeLo = 0U;
  info[182].mFileTimeHi = 0U;
  info[183].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m!make_twiddle_table";
  info[183].name = "eml_index_class";
  info[183].dominantType = "";
  info[183].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[183].fileTimeLo = 1323192178U;
  info[183].fileTimeHi = 0U;
  info[183].mFileTimeLo = 0U;
  info[183].mFileTimeHi = 0U;
  info[184].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m!make_twiddle_table";
  info[184].name = "eml_index_times";
  info[184].dominantType = "double";
  info[184].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_times.m";
  info[184].fileTimeLo = 1286840380U;
  info[184].fileTimeHi = 0U;
  info[184].mFileTimeLo = 0U;
  info[184].mFileTimeHi = 0U;
  info[185].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m!make_twiddle_table";
  info[185].name = "eml_index_plus";
  info[185].dominantType = "double";
  info[185].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_plus.m";
  info[185].fileTimeLo = 1286840378U;
  info[185].fileTimeHi = 0U;
  info[185].mFileTimeLo = 0U;
  info[185].mFileTimeHi = 0U;
  info[186].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m!make_twiddle_table";
  info[186].name = "eml_int_forloop_overflow_check";
  info[186].dominantType = "";
  info[186].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m";
  info[186].fileTimeLo = 1346531940U;
  info[186].fileTimeHi = 0U;
  info[186].mFileTimeLo = 0U;
  info[186].mFileTimeHi = 0U;
  info[187].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m!make_twiddle_table";
  info[187].name = "eml_index_minus";
  info[187].dominantType = "coder.internal.indexInt";
  info[187].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_minus.m";
  info[187].fileTimeLo = 1286840378U;
  info[187].fileTimeHi = 0U;
  info[187].mFileTimeLo = 0U;
  info[187].mFileTimeHi = 0U;
  info[188].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m!ucls";
  info[188].name = "eml_index_class";
  info[188].dominantType = "";
  info[188].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[188].fileTimeLo = 1323192178U;
  info[188].fileTimeHi = 0U;
  info[188].mFileTimeLo = 0U;
  info[188].mFileTimeHi = 0U;
  info[189].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m!ucls";
  info[189].name = "eml_unsigned_class";
  info[189].dominantType = "char";
  info[189].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_unsigned_class.m";
  info[189].fileTimeLo = 1323192180U;
  info[189].fileTimeHi = 0U;
  info[189].mFileTimeLo = 0U;
  info[189].mFileTimeHi = 0U;
  info[190].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m!r2br_r2dit_trig";
  info[190].name = "eml_int_forloop_overflow_check";
  info[190].dominantType = "";
  info[190].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m";
  info[190].fileTimeLo = 1346531940U;
  info[190].fileTimeHi = 0U;
  info[190].mFileTimeLo = 0U;
  info[190].mFileTimeHi = 0U;
  info[191].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m!r2br_r2dit_trig";
  info[191].name = "eml_index_plus";
  info[191].dominantType = "double";
  info[191].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_plus.m";
  info[191].fileTimeLo = 1286840378U;
  info[191].fileTimeHi = 0U;
  info[191].mFileTimeLo = 0U;
  info[191].mFileTimeHi = 0U;
}

static void d_info_helper(ResolvedFunctionInfo info[470])
{
  info[192].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m!eml_fft_bitrevidx";
  info[192].name = "eml_index_class";
  info[192].dominantType = "";
  info[192].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[192].fileTimeLo = 1323192178U;
  info[192].fileTimeHi = 0U;
  info[192].mFileTimeLo = 0U;
  info[192].mFileTimeHi = 0U;
  info[193].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m!r2br_r2dit_trig";
  info[193].name = "eml_index_plus";
  info[193].dominantType = "coder.internal.indexInt";
  info[193].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_plus.m";
  info[193].fileTimeLo = 1286840378U;
  info[193].fileTimeHi = 0U;
  info[193].mFileTimeLo = 0U;
  info[193].mFileTimeHi = 0U;
  info[194].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m!r2br_r2dit_trig";
  info[194].name = "eml_index_times";
  info[194].dominantType = "double";
  info[194].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_times.m";
  info[194].fileTimeLo = 1286840380U;
  info[194].fileTimeHi = 0U;
  info[194].mFileTimeLo = 0U;
  info[194].mFileTimeHi = 0U;
  info[195].context =
    "[C]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/OFDMModulator.m";
  info[195].name = "cat";
  info[195].dominantType = "double";
  info[195].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/cat.m";
  info[195].fileTimeLo = 1307672838U;
  info[195].fileTimeHi = 0U;
  info[195].mFileTimeLo = 0U;
  info[195].mFileTimeHi = 0U;
  info[196].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/cat.m";
  info[196].name = "eml_assert_valid_dim";
  info[196].dominantType = "double";
  info[196].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_assert_valid_dim.m";
  info[196].fileTimeLo = 1286840294U;
  info[196].fileTimeHi = 0U;
  info[196].mFileTimeLo = 0U;
  info[196].mFileTimeHi = 0U;
  info[197].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/cat.m";
  info[197].name = "eml_index_class";
  info[197].dominantType = "";
  info[197].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[197].fileTimeLo = 1323192178U;
  info[197].fileTimeHi = 0U;
  info[197].mFileTimeLo = 0U;
  info[197].mFileTimeHi = 0U;
  info[198].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/cat.m!is_static_empty";
  info[198].name = "isequal";
  info[198].dominantType = "double";
  info[198].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isequal.m";
  info[198].fileTimeLo = 1286840358U;
  info[198].fileTimeHi = 0U;
  info[198].mFileTimeLo = 0U;
  info[198].mFileTimeHi = 0U;
  info[199].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/cat.m!cattype";
  info[199].name = "eml_scalar_eg";
  info[199].dominantType = "double";
  info[199].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m";
  info[199].fileTimeLo = 1286840396U;
  info[199].fileTimeHi = 0U;
  info[199].mFileTimeLo = 0U;
  info[199].mFileTimeHi = 0U;
  info[200].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/cat.m";
  info[200].name = "eml_matrix_vstride";
  info[200].dominantType = "double";
  info[200].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_matrix_vstride.m";
  info[200].fileTimeLo = 1286840388U;
  info[200].fileTimeHi = 0U;
  info[200].mFileTimeLo = 0U;
  info[200].mFileTimeHi = 0U;
  info[201].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_matrix_vstride.m";
  info[201].name = "eml_size_prod";
  info[201].dominantType = "logical";
  info[201].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_size_prod.m";
  info[201].fileTimeLo = 1286840398U;
  info[201].fileTimeHi = 0U;
  info[201].mFileTimeLo = 0U;
  info[201].mFileTimeHi = 0U;
  info[202].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/cat.m";
  info[202].name = "eml_matrix_npages";
  info[202].dominantType = "double";
  info[202].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_matrix_npages.m";
  info[202].fileTimeLo = 1286840386U;
  info[202].fileTimeHi = 0U;
  info[202].mFileTimeLo = 0U;
  info[202].mFileTimeHi = 0U;
  info[203].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_matrix_npages.m";
  info[203].name = "eml_size_prod";
  info[203].dominantType = "logical";
  info[203].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_size_prod.m";
  info[203].fileTimeLo = 1286840398U;
  info[203].fileTimeHi = 0U;
  info[203].mFileTimeLo = 0U;
  info[203].mFileTimeHi = 0U;
  info[204].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/cat.m";
  info[204].name = "eml_index_minus";
  info[204].dominantType = "coder.internal.indexInt";
  info[204].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_minus.m";
  info[204].fileTimeLo = 1286840378U;
  info[204].fileTimeHi = 0U;
  info[204].mFileTimeLo = 0U;
  info[204].mFileTimeHi = 0U;
  info[205].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/cat.m";
  info[205].name = "eml_index_plus";
  info[205].dominantType = "coder.internal.indexInt";
  info[205].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_plus.m";
  info[205].fileTimeLo = 1286840378U;
  info[205].fileTimeHi = 0U;
  info[205].mFileTimeLo = 0U;
  info[205].mFileTimeHi = 0U;
  info[206].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/cat.m";
  info[206].name = "eml_index_times";
  info[206].dominantType = "coder.internal.indexInt";
  info[206].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_times.m";
  info[206].fileTimeLo = 1286840380U;
  info[206].fileTimeHi = 0U;
  info[206].mFileTimeLo = 0U;
  info[206].mFileTimeHi = 0U;
  info[207].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/cat.m";
  info[207].name = "eml_int_forloop_overflow_check";
  info[207].dominantType = "";
  info[207].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m";
  info[207].fileTimeLo = 1346531940U;
  info[207].fileTimeHi = 0U;
  info[207].mFileTimeLo = 0U;
  info[207].mFileTimeHi = 0U;
  info[208].context =
    "[C]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/OFDMModulator.m";
  info[208].name = "mtimes";
  info[208].dominantType = "double";
  info[208].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  info[208].fileTimeLo = 1289541292U;
  info[208].fileTimeHi = 0U;
  info[208].mFileTimeLo = 0U;
  info[208].mFileTimeHi = 0U;
  info[209].context =
    "[C]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/OFDMModulator.m";
  info[209].name = "reshape";
  info[209].dominantType = "double";
  info[209].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/reshape.m";
  info[209].fileTimeLo = 1286840368U;
  info[209].fileTimeHi = 0U;
  info[209].mFileTimeLo = 0U;
  info[209].mFileTimeHi = 0U;
  info[210].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/reshape.m";
  info[210].name = "eml_index_class";
  info[210].dominantType = "";
  info[210].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[210].fileTimeLo = 1323192178U;
  info[210].fileTimeHi = 0U;
  info[210].mFileTimeLo = 0U;
  info[210].mFileTimeHi = 0U;
  info[211].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/reshape.m!reshape_varargin_to_size";
  info[211].name = "eml_index_class";
  info[211].dominantType = "";
  info[211].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[211].fileTimeLo = 1323192178U;
  info[211].fileTimeHi = 0U;
  info[211].mFileTimeLo = 0U;
  info[211].mFileTimeHi = 0U;
  info[212].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/reshape.m!reshape_varargin_to_size";
  info[212].name = "eml_assert_valid_size_arg";
  info[212].dominantType = "double";
  info[212].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m";
  info[212].fileTimeLo = 1286840294U;
  info[212].fileTimeHi = 0U;
  info[212].mFileTimeLo = 0U;
  info[212].mFileTimeHi = 0U;
  info[213].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/reshape.m";
  info[213].name = "eml_scalar_eg";
  info[213].dominantType = "double";
  info[213].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m";
  info[213].fileTimeLo = 1286840396U;
  info[213].fileTimeHi = 0U;
  info[213].mFileTimeLo = 0U;
  info[213].mFileTimeHi = 0U;
  info[214].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/reshape.m";
  info[214].name = "eml_int_forloop_overflow_check";
  info[214].dominantType = "";
  info[214].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m";
  info[214].fileTimeLo = 1346531940U;
  info[214].fileTimeHi = 0U;
  info[214].mFileTimeLo = 0U;
  info[214].mFileTimeHi = 0U;
  info[215].context =
    "[PE]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/generateOFDMSignal_TX2.m";
  info[215].name = "mtimes";
  info[215].dominantType = "double";
  info[215].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  info[215].fileTimeLo = 1289541292U;
  info[215].fileTimeHi = 0U;
  info[215].mFileTimeLo = 0U;
  info[215].mFileTimeHi = 0U;
  info[216].context =
    "[PE]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/generateOFDMSignal_TX2.m";
  info[216].name = "OFDMletters2bits";
  info[216].dominantType = "char";
  info[216].resolved =
    "[PE]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/OFDMletters2bits.m";
  info[216].fileTimeLo = 1398358315U;
  info[216].fileTimeHi = 0U;
  info[216].mFileTimeLo = 0U;
  info[216].mFileTimeHi = 0U;
  info[217].context =
    "[PE]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/OFDMletters2bits.m";
  info[217].name = "length";
  info[217].dominantType = "char";
  info[217].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/length.m";
  info[217].fileTimeLo = 1303167806U;
  info[217].fileTimeHi = 0U;
  info[217].mFileTimeLo = 0U;
  info[217].mFileTimeHi = 0U;
  info[218].context =
    "[PE]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/OFDMletters2bits.m";
  info[218].name = "dec2bin";
  info[218].dominantType = "char";
  info[218].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/strfun/dec2bin.m";
  info[218].fileTimeLo = 1346531990U;
  info[218].fileTimeHi = 0U;
  info[218].mFileTimeLo = 0U;
  info[218].mFileTimeHi = 0U;
  info[219].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/strfun/dec2bin.m";
  info[219].name = "eml_index_class";
  info[219].dominantType = "";
  info[219].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[219].fileTimeLo = 1323192178U;
  info[219].fileTimeHi = 0U;
  info[219].mFileTimeLo = 0U;
  info[219].mFileTimeHi = 0U;
  info[220].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/strfun/dec2bin.m!idec2bin";
  info[220].name = "eml_index_class";
  info[220].dominantType = "";
  info[220].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[220].fileTimeLo = 1323192178U;
  info[220].fileTimeHi = 0U;
  info[220].mFileTimeLo = 0U;
  info[220].mFileTimeHi = 0U;
  info[221].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/strfun/dec2bin.m!char_nbits";
  info[221].name = "eml_index_class";
  info[221].dominantType = "";
  info[221].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[221].fileTimeLo = 1323192178U;
  info[221].fileTimeHi = 0U;
  info[221].mFileTimeLo = 0U;
  info[221].mFileTimeHi = 0U;
  info[222].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/strfun/dec2bin.m!idec2bin";
  info[222].name = "eml_int_forloop_overflow_check";
  info[222].dominantType = "";
  info[222].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m";
  info[222].fileTimeLo = 1346531940U;
  info[222].fileTimeHi = 0U;
  info[222].mFileTimeLo = 0U;
  info[222].mFileTimeHi = 0U;
  info[223].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/strfun/dec2bin.m!idec2bin";
  info[223].name = "bitget";
  info[223].dominantType = "uint16";
  info[223].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/bitget.m";
  info[223].fileTimeLo = 1344493636U;
  info[223].fileTimeHi = 0U;
  info[223].mFileTimeLo = 0U;
  info[223].mFileTimeHi = 0U;
  info[224].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/bitget.m";
  info[224].name = "eml_scalar_eg";
  info[224].dominantType = "uint16";
  info[224].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m";
  info[224].fileTimeLo = 1286840396U;
  info[224].fileTimeHi = 0U;
  info[224].mFileTimeLo = 0U;
  info[224].mFileTimeHi = 0U;
  info[225].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/bitget.m";
  info[225].name = "eml_scalexp_alloc";
  info[225].dominantType = "uint16";
  info[225].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalexp_alloc.m";
  info[225].fileTimeLo = 1352446460U;
  info[225].fileTimeHi = 0U;
  info[225].mFileTimeLo = 0U;
  info[225].mFileTimeHi = 0U;
  info[226].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/bitget.m";
  info[226].name = "eml_int_nbits";
  info[226].dominantType = "char";
  info[226].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_int_nbits.m";
  info[226].fileTimeLo = 1323192178U;
  info[226].fileTimeHi = 0U;
  info[226].mFileTimeLo = 0U;
  info[226].mFileTimeHi = 0U;
  info[227].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/bitget.m";
  info[227].name = "floor";
  info[227].dominantType = "coder.internal.indexInt";
  info[227].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/floor.m";
  info[227].fileTimeLo = 1343851980U;
  info[227].fileTimeHi = 0U;
  info[227].mFileTimeLo = 0U;
  info[227].mFileTimeHi = 0U;
  info[228].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/floor.m";
  info[228].name = "eml_scalar_floor";
  info[228].dominantType = "coder.internal.indexInt";
  info[228].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/eml_scalar_floor.m";
  info[228].fileTimeLo = 1286840326U;
  info[228].fileTimeHi = 0U;
  info[228].mFileTimeLo = 0U;
  info[228].mFileTimeHi = 0U;
  info[229].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/bitget.m";
  info[229].name = "eml_error";
  info[229].dominantType = "uint8";
  info[229].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_error.m";
  info[229].fileTimeLo = 1343851958U;
  info[229].fileTimeHi = 0U;
  info[229].mFileTimeLo = 0U;
  info[229].mFileTimeHi = 0U;
  info[230].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/strfun/dec2bin.m!idec2bin";
  info[230].name = "eml_index_minus";
  info[230].dominantType = "coder.internal.indexInt";
  info[230].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_minus.m";
  info[230].fileTimeLo = 1286840378U;
  info[230].fileTimeHi = 0U;
  info[230].mFileTimeLo = 0U;
  info[230].mFileTimeHi = 0U;
  info[231].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/strfun/dec2bin.m!idec2bin";
  info[231].name = "eml_index_plus";
  info[231].dominantType = "double";
  info[231].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_plus.m";
  info[231].fileTimeLo = 1286840378U;
  info[231].fileTimeHi = 0U;
  info[231].mFileTimeLo = 0U;
  info[231].mFileTimeHi = 0U;
  info[232].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/strfun/dec2bin.m!trim";
  info[232].name = "eml_index_class";
  info[232].dominantType = "";
  info[232].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[232].fileTimeLo = 1323192178U;
  info[232].fileTimeHi = 0U;
  info[232].mFileTimeLo = 0U;
  info[232].mFileTimeHi = 0U;
  info[233].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/strfun/dec2bin.m!trim";
  info[233].name = "eml_index_minus";
  info[233].dominantType = "coder.internal.indexInt";
  info[233].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_minus.m";
  info[233].fileTimeLo = 1286840378U;
  info[233].fileTimeHi = 0U;
  info[233].mFileTimeLo = 0U;
  info[233].mFileTimeHi = 0U;
  info[234].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/strfun/dec2bin.m!trim";
  info[234].name = "eml_index_plus";
  info[234].dominantType = "double";
  info[234].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_plus.m";
  info[234].fileTimeLo = 1286840378U;
  info[234].fileTimeHi = 0U;
  info[234].mFileTimeLo = 0U;
  info[234].mFileTimeHi = 0U;
  info[235].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/strfun/dec2bin.m!trim";
  info[235].name = "eml_int_forloop_overflow_check";
  info[235].dominantType = "";
  info[235].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m";
  info[235].fileTimeLo = 1346531940U;
  info[235].fileTimeHi = 0U;
  info[235].mFileTimeLo = 0U;
  info[235].mFileTimeHi = 0U;
  info[236].context =
    "[PE]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/generateOFDMSignal_TX2.m";
  info[236].name = "reshape";
  info[236].dominantType = "double";
  info[236].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/reshape.m";
  info[236].fileTimeLo = 1286840368U;
  info[236].fileTimeHi = 0U;
  info[236].mFileTimeLo = 0U;
  info[236].mFileTimeHi = 0U;
  info[237].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/reshape.m!varargin_nempty";
  info[237].name = "eml_index_class";
  info[237].dominantType = "";
  info[237].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[237].fileTimeLo = 1323192178U;
  info[237].fileTimeHi = 0U;
  info[237].mFileTimeLo = 0U;
  info[237].mFileTimeHi = 0U;
  info[238].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/reshape.m!reshape_varargin_to_size";
  info[238].name = "eml_index_prod";
  info[238].dominantType = "coder.internal.indexInt";
  info[238].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_prod.m";
  info[238].fileTimeLo = 1286840380U;
  info[238].fileTimeHi = 0U;
  info[238].mFileTimeLo = 0U;
  info[238].mFileTimeHi = 0U;
  info[239].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_prod.m";
  info[239].name = "eml_index_class";
  info[239].dominantType = "";
  info[239].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[239].fileTimeLo = 1323192178U;
  info[239].fileTimeHi = 0U;
  info[239].mFileTimeLo = 0U;
  info[239].mFileTimeHi = 0U;
  info[240].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_prod.m";
  info[240].name = "eml_int_forloop_overflow_check";
  info[240].dominantType = "";
  info[240].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m";
  info[240].fileTimeLo = 1346531940U;
  info[240].fileTimeHi = 0U;
  info[240].mFileTimeLo = 0U;
  info[240].mFileTimeHi = 0U;
  info[241].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_prod.m";
  info[241].name = "eml_index_times";
  info[241].dominantType = "coder.internal.indexInt";
  info[241].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_times.m";
  info[241].fileTimeLo = 1286840380U;
  info[241].fileTimeHi = 0U;
  info[241].mFileTimeLo = 0U;
  info[241].mFileTimeHi = 0U;
  info[242].context =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/CRCGenerator.p";
  info[242].name = "matlab.system.coder.System";
  info[242].dominantType = "unknown";
  info[242].resolved =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/System.p";
  info[242].fileTimeLo = 1357971318U;
  info[242].fileTimeHi = 0U;
  info[242].mFileTimeLo = 0U;
  info[242].mFileTimeHi = 0U;
  info[243].context =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/CRCGenerator.p";
  info[243].name = "matlab.system.mixin.coder.Nondirect";
  info[243].dominantType = "unknown";
  info[243].resolved =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+mixin/+coder/Nondirect.p";
  info[243].fileTimeLo = 1357971320U;
  info[243].fileTimeHi = 0U;
  info[243].mFileTimeLo = 0U;
  info[243].mFileTimeHi = 0U;
  info[244].context =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/CRCGenerator.p";
  info[244].name = "matlab.system.mixin.Nondirect";
  info[244].dominantType = "unknown";
  info[244].resolved =
    "[IXC]$matlabroot$/toolbox/matlab/system/+matlab/+system/+mixin/Nondirect.p";
  info[244].fileTimeLo = 1357962382U;
  info[244].fileTimeHi = 0U;
  info[244].mFileTimeLo = 0U;
  info[244].mFileTimeHi = 0U;
  info[245].context =
    "[PE]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/generateOFDMSignal_TX2.m";
  info[245].name = "commcodegen.CRCGenerator";
  info[245].dominantType = "int32";
  info[245].resolved =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/CRCGenerator.p";
  info[245].fileTimeLo = 1358405060U;
  info[245].fileTimeHi = 0U;
  info[245].mFileTimeLo = 0U;
  info[245].mFileTimeHi = 0U;
  info[246].context =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/CRCGenerator.p";
  info[246].name = "createsystemobjectv2";
  info[246].dominantType = "";
  info[246].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/createsystemobjectv2.m";
  info[246].fileTimeLo = 1343851958U;
  info[246].fileTimeHi = 0U;
  info[246].mFileTimeLo = 0U;
  info[246].mFileTimeHi = 0U;
  info[247].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/createsystemobjectv2.m";
  info[247].name = "length";
  info[247].dominantType = "cell";
  info[247].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/length.m";
  info[247].fileTimeLo = 1303167806U;
  info[247].fileTimeHi = 0U;
  info[247].mFileTimeLo = 0U;
  info[247].mFileTimeHi = 0U;
  info[248].context =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p";
  info[248].name = "matlab.system.isSystemObject";
  info[248].dominantType = "double";
  info[248].resolved =
    "[IXE]$matlabroot$/toolbox/matlab/system/+matlab/+system/isSystemObject.p";
  info[248].fileTimeLo = 1357962380U;
  info[248].fileTimeHi = 0U;
  info[248].mFileTimeLo = 0U;
  info[248].mFileTimeHi = 0U;
  info[249].context =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p";
  info[249].name = "matlab.system.coder.System";
  info[249].dominantType = "";
  info[249].resolved =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/System.p";
  info[249].fileTimeLo = 1357971318U;
  info[249].fileTimeHi = 0U;
  info[249].mFileTimeLo = 0U;
  info[249].mFileTimeHi = 0U;
  info[250].context =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p";
  info[250].name = "matlab.system.setProp";
  info[250].dominantType = "commcodegen.CRCGenerator";
  info[250].resolved =
    "[IXE]$matlabroot$/toolbox/matlab/system/+matlab/+system/setProp.p";
  info[250].fileTimeLo = 1357962380U;
  info[250].fileTimeHi = 0U;
  info[250].mFileTimeLo = 0U;
  info[250].mFileTimeHi = 0U;
  info[251].context =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p";
  info[251].name = "matlab.system.pvParse";
  info[251].dominantType = "commcodegen.CRCGenerator";
  info[251].resolved =
    "[IXE]$matlabroot$/toolbox/matlab/system/+matlab/+system/pvParse.p";
  info[251].fileTimeLo = 1357962380U;
  info[251].fileTimeHi = 0U;
  info[251].mFileTimeLo = 0U;
  info[251].mFileTimeHi = 0U;
  info[252].context =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/CRCGenerator.p";
  info[252].name = "commcodegen.CRCGenerator";
  info[252].dominantType = "";
  info[252].resolved =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/CRCGenerator.p";
  info[252].fileTimeLo = 1358405060U;
  info[252].fileTimeHi = 0U;
  info[252].mFileTimeLo = 0U;
  info[252].mFileTimeHi = 0U;
  info[253].context =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/CRCGenerator.p";
  info[253].name = "matlab.system.coder.SystemProp";
  info[253].dominantType = "";
  info[253].resolved =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p";
  info[253].fileTimeLo = 1357971320U;
  info[253].fileTimeHi = 0U;
  info[253].mFileTimeLo = 0U;
  info[253].mFileTimeHi = 0U;
  info[254].context =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/CRCGenerator.p";
  info[254].name = "get";
  info[254].dominantType = "comm.CRCGenerator";
  info[254].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/get.m";
  info[254].fileTimeLo = 1349900344U;
  info[254].fileTimeHi = 0U;
  info[254].mFileTimeLo = 0U;
  info[254].mFileTimeHi = 0U;
  info[255].context =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/CRCGenerator.p";
  info[255].name = "getNumInputs";
  info[255].dominantType = "comm.CRCGenerator";
  info[255].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/getNumInputs.m";
  info[255].fileTimeLo = 1349900348U;
  info[255].fileTimeHi = 0U;
  info[255].mFileTimeLo = 0U;
  info[255].mFileTimeHi = 0U;
}

static void e_info_helper(ResolvedFunctionInfo info[470])
{
  info[256].context = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/getNumInputs.m";
  info[256].name = "checkSystemObjectInput";
  info[256].dominantType = "comm.CRCGenerator";
  info[256].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/checkSystemObjectInput.m";
  info[256].fileTimeLo = 1349900346U;
  info[256].fileTimeHi = 0U;
  info[256].mFileTimeLo = 0U;
  info[256].mFileTimeHi = 0U;
  info[257].context =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/CRCGenerator.p";
  info[257].name = "setup";
  info[257].dominantType = "comm.CRCGenerator";
  info[257].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/setup.m";
  info[257].fileTimeLo = 1349900350U;
  info[257].fileTimeHi = 0U;
  info[257].mFileTimeLo = 0U;
  info[257].mFileTimeHi = 0U;
  info[258].context = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/setup.m";
  info[258].name = "checkSystemObjectInput";
  info[258].dominantType = "comm.CRCGenerator";
  info[258].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/checkSystemObjectInput.m";
  info[258].fileTimeLo = 1349900346U;
  info[258].fileTimeHi = 0U;
  info[258].mFileTimeLo = 0U;
  info[258].mFileTimeHi = 0U;
  info[259].context =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/CRCGenerator.p";
  info[259].name = "reset";
  info[259].dominantType = "comm.CRCGenerator";
  info[259].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/reset.m";
  info[259].fileTimeLo = 1349900350U;
  info[259].fileTimeHi = 0U;
  info[259].mFileTimeLo = 0U;
  info[259].mFileTimeHi = 0U;
  info[260].context = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/reset.m";
  info[260].name = "checkSystemObjectInput";
  info[260].dominantType = "comm.CRCGenerator";
  info[260].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/checkSystemObjectInput.m";
  info[260].fileTimeLo = 1349900346U;
  info[260].fileTimeHi = 0U;
  info[260].mFileTimeLo = 0U;
  info[260].mFileTimeHi = 0U;
  info[261].context =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/CRCGenerator.p";
  info[261].name = "getNumOutputs";
  info[261].dominantType = "comm.CRCGenerator";
  info[261].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/getNumOutputs.m";
  info[261].fileTimeLo = 1349900348U;
  info[261].fileTimeHi = 0U;
  info[261].mFileTimeLo = 0U;
  info[261].mFileTimeHi = 0U;
  info[262].context = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/getNumOutputs.m";
  info[262].name = "checkSystemObjectInput";
  info[262].dominantType = "comm.CRCGenerator";
  info[262].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/checkSystemObjectInput.m";
  info[262].fileTimeLo = 1349900346U;
  info[262].fileTimeHi = 0U;
  info[262].mFileTimeLo = 0U;
  info[262].mFileTimeHi = 0U;
  info[263].context =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/CRCGenerator.p";
  info[263].name = "output";
  info[263].dominantType = "comm.CRCGenerator";
  info[263].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/output.m";
  info[263].fileTimeLo = 1349900348U;
  info[263].fileTimeHi = 0U;
  info[263].mFileTimeLo = 0U;
  info[263].mFileTimeHi = 0U;
  info[264].context = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/output.m";
  info[264].name = "checkSystemObjectInput";
  info[264].dominantType = "comm.CRCGenerator";
  info[264].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/checkSystemObjectInput.m";
  info[264].fileTimeLo = 1349900346U;
  info[264].fileTimeHi = 0U;
  info[264].mFileTimeLo = 0U;
  info[264].mFileTimeHi = 0U;
  info[265].context =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/CRCGenerator.p";
  info[265].name = "update";
  info[265].dominantType = "comm.CRCGenerator";
  info[265].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/update.m";
  info[265].fileTimeLo = 1349900352U;
  info[265].fileTimeHi = 0U;
  info[265].mFileTimeLo = 0U;
  info[265].mFileTimeHi = 0U;
  info[266].context = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/update.m";
  info[266].name = "checkSystemObjectInput";
  info[266].dominantType = "comm.CRCGenerator";
  info[266].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/checkSystemObjectInput.m";
  info[266].fileTimeLo = 1349900346U;
  info[266].fileTimeHi = 0U;
  info[266].mFileTimeLo = 0U;
  info[266].mFileTimeHi = 0U;
  info[267].context =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/BPSKModulator.p";
  info[267].name = "matlab.system.coder.System";
  info[267].dominantType = "unknown";
  info[267].resolved =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/System.p";
  info[267].fileTimeLo = 1357971318U;
  info[267].fileTimeHi = 0U;
  info[267].mFileTimeLo = 0U;
  info[267].mFileTimeHi = 0U;
  info[268].context =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/BPSKModulator.p";
  info[268].name = "matlab.system.mixin.coder.Nondirect";
  info[268].dominantType = "unknown";
  info[268].resolved =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+mixin/+coder/Nondirect.p";
  info[268].fileTimeLo = 1357971320U;
  info[268].fileTimeHi = 0U;
  info[268].mFileTimeLo = 0U;
  info[268].mFileTimeHi = 0U;
  info[269].context =
    "[PE]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/generateOFDMSignal_TX2.m";
  info[269].name = "commcodegen.BPSKModulator";
  info[269].dominantType = "int32";
  info[269].resolved =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/BPSKModulator.p";
  info[269].fileTimeLo = 1358405060U;
  info[269].fileTimeHi = 0U;
  info[269].mFileTimeLo = 0U;
  info[269].mFileTimeHi = 0U;
  info[270].context =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/BPSKModulator.p";
  info[270].name = "createsystemobjectv2";
  info[270].dominantType = "";
  info[270].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/createsystemobjectv2.m";
  info[270].fileTimeLo = 1343851958U;
  info[270].fileTimeHi = 0U;
  info[270].mFileTimeLo = 0U;
  info[270].mFileTimeHi = 0U;
  info[271].context =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/BPSKModulator.p";
  info[271].name = "commcodegen.BPSKModulator";
  info[271].dominantType = "";
  info[271].resolved =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/BPSKModulator.p";
  info[271].fileTimeLo = 1358405060U;
  info[271].fileTimeHi = 0U;
  info[271].mFileTimeLo = 0U;
  info[271].mFileTimeHi = 0U;
  info[272].context =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/BPSKModulator.p";
  info[272].name = "matlab.system.coder.SystemProp";
  info[272].dominantType = "";
  info[272].resolved =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p";
  info[272].fileTimeLo = 1357971320U;
  info[272].fileTimeHi = 0U;
  info[272].mFileTimeLo = 0U;
  info[272].mFileTimeHi = 0U;
  info[273].context =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/BPSKModulator.p";
  info[273].name = "get";
  info[273].dominantType = "comm.BPSKModulator";
  info[273].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/get.m";
  info[273].fileTimeLo = 1349900344U;
  info[273].fileTimeHi = 0U;
  info[273].mFileTimeLo = 0U;
  info[273].mFileTimeHi = 0U;
  info[274].context =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/BPSKModulator.p";
  info[274].name = "getNumInputs";
  info[274].dominantType = "comm.BPSKModulator";
  info[274].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/getNumInputs.m";
  info[274].fileTimeLo = 1349900348U;
  info[274].fileTimeHi = 0U;
  info[274].mFileTimeLo = 0U;
  info[274].mFileTimeHi = 0U;
  info[275].context = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/getNumInputs.m";
  info[275].name = "checkSystemObjectInput";
  info[275].dominantType = "comm.BPSKModulator";
  info[275].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/checkSystemObjectInput.m";
  info[275].fileTimeLo = 1349900346U;
  info[275].fileTimeHi = 0U;
  info[275].mFileTimeLo = 0U;
  info[275].mFileTimeHi = 0U;
  info[276].context =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/BPSKModulator.p";
  info[276].name = "setup";
  info[276].dominantType = "comm.BPSKModulator";
  info[276].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/setup.m";
  info[276].fileTimeLo = 1349900350U;
  info[276].fileTimeHi = 0U;
  info[276].mFileTimeLo = 0U;
  info[276].mFileTimeHi = 0U;
  info[277].context = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/setup.m";
  info[277].name = "checkSystemObjectInput";
  info[277].dominantType = "comm.BPSKModulator";
  info[277].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/checkSystemObjectInput.m";
  info[277].fileTimeLo = 1349900346U;
  info[277].fileTimeHi = 0U;
  info[277].mFileTimeLo = 0U;
  info[277].mFileTimeHi = 0U;
  info[278].context =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/BPSKModulator.p";
  info[278].name = "reset";
  info[278].dominantType = "comm.BPSKModulator";
  info[278].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/reset.m";
  info[278].fileTimeLo = 1349900350U;
  info[278].fileTimeHi = 0U;
  info[278].mFileTimeLo = 0U;
  info[278].mFileTimeHi = 0U;
  info[279].context = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/reset.m";
  info[279].name = "checkSystemObjectInput";
  info[279].dominantType = "comm.BPSKModulator";
  info[279].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/checkSystemObjectInput.m";
  info[279].fileTimeLo = 1349900346U;
  info[279].fileTimeHi = 0U;
  info[279].mFileTimeLo = 0U;
  info[279].mFileTimeHi = 0U;
  info[280].context =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/BPSKModulator.p";
  info[280].name = "getNumOutputs";
  info[280].dominantType = "comm.BPSKModulator";
  info[280].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/getNumOutputs.m";
  info[280].fileTimeLo = 1349900348U;
  info[280].fileTimeHi = 0U;
  info[280].mFileTimeLo = 0U;
  info[280].mFileTimeHi = 0U;
  info[281].context = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/getNumOutputs.m";
  info[281].name = "checkSystemObjectInput";
  info[281].dominantType = "comm.BPSKModulator";
  info[281].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/checkSystemObjectInput.m";
  info[281].fileTimeLo = 1349900346U;
  info[281].fileTimeHi = 0U;
  info[281].mFileTimeLo = 0U;
  info[281].mFileTimeHi = 0U;
  info[282].context =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/BPSKModulator.p";
  info[282].name = "output";
  info[282].dominantType = "comm.BPSKModulator";
  info[282].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/output.m";
  info[282].fileTimeLo = 1349900348U;
  info[282].fileTimeHi = 0U;
  info[282].mFileTimeLo = 0U;
  info[282].mFileTimeHi = 0U;
  info[283].context = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/output.m";
  info[283].name = "checkSystemObjectInput";
  info[283].dominantType = "comm.BPSKModulator";
  info[283].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/checkSystemObjectInput.m";
  info[283].fileTimeLo = 1349900346U;
  info[283].fileTimeHi = 0U;
  info[283].mFileTimeLo = 0U;
  info[283].mFileTimeHi = 0U;
  info[284].context =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/BPSKModulator.p";
  info[284].name = "update";
  info[284].dominantType = "comm.BPSKModulator";
  info[284].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/update.m";
  info[284].fileTimeLo = 1349900352U;
  info[284].fileTimeHi = 0U;
  info[284].mFileTimeLo = 0U;
  info[284].mFileTimeHi = 0U;
  info[285].context = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/update.m";
  info[285].name = "checkSystemObjectInput";
  info[285].dominantType = "comm.BPSKModulator";
  info[285].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/checkSystemObjectInput.m";
  info[285].fileTimeLo = 1349900346U;
  info[285].fileTimeHi = 0U;
  info[285].mFileTimeLo = 0U;
  info[285].mFileTimeHi = 0U;
  info[286].context =
    "[PE]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/generateOFDMSignal_TX2.m";
  info[286].name = "length";
  info[286].dominantType = "double";
  info[286].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/length.m";
  info[286].fileTimeLo = 1303167806U;
  info[286].fileTimeHi = 0U;
  info[286].mFileTimeLo = 0U;
  info[286].mFileTimeHi = 0U;
  info[287].context =
    "[PE]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/generateOFDMSignal_TX2.m";
  info[287].name = "mod";
  info[287].dominantType = "double";
  info[287].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/mod.m";
  info[287].fileTimeLo = 1343851982U;
  info[287].fileTimeHi = 0U;
  info[287].mFileTimeLo = 0U;
  info[287].mFileTimeHi = 0U;
  info[288].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/mod.m";
  info[288].name = "eml_scalar_eg";
  info[288].dominantType = "double";
  info[288].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m";
  info[288].fileTimeLo = 1286840396U;
  info[288].fileTimeHi = 0U;
  info[288].mFileTimeLo = 0U;
  info[288].mFileTimeHi = 0U;
  info[289].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/mod.m";
  info[289].name = "eml_scalexp_alloc";
  info[289].dominantType = "double";
  info[289].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalexp_alloc.m";
  info[289].fileTimeLo = 1352446460U;
  info[289].fileTimeHi = 0U;
  info[289].mFileTimeLo = 0U;
  info[289].mFileTimeHi = 0U;
  info[290].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/mod.m!floatmod";
  info[290].name = "eml_scalar_eg";
  info[290].dominantType = "double";
  info[290].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m";
  info[290].fileTimeLo = 1286840396U;
  info[290].fileTimeHi = 0U;
  info[290].mFileTimeLo = 0U;
  info[290].mFileTimeHi = 0U;
  info[291].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/mod.m!floatmod";
  info[291].name = "eml_scalar_floor";
  info[291].dominantType = "double";
  info[291].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/eml_scalar_floor.m";
  info[291].fileTimeLo = 1286840326U;
  info[291].fileTimeHi = 0U;
  info[291].mFileTimeLo = 0U;
  info[291].mFileTimeHi = 0U;
  info[292].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/mod.m!floatmod";
  info[292].name = "eml_scalar_round";
  info[292].dominantType = "double";
  info[292].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/eml_scalar_round.m";
  info[292].fileTimeLo = 1307672838U;
  info[292].fileTimeHi = 0U;
  info[292].mFileTimeLo = 0U;
  info[292].mFileTimeHi = 0U;
  info[293].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/mod.m!floatmod";
  info[293].name = "eml_scalar_abs";
  info[293].dominantType = "double";
  info[293].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/eml_scalar_abs.m";
  info[293].fileTimeLo = 1286840312U;
  info[293].fileTimeHi = 0U;
  info[293].mFileTimeLo = 0U;
  info[293].mFileTimeHi = 0U;
  info[294].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/mod.m!floatmod";
  info[294].name = "eps";
  info[294].dominantType = "char";
  info[294].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/eps.m";
  info[294].fileTimeLo = 1326749596U;
  info[294].fileTimeHi = 0U;
  info[294].mFileTimeLo = 0U;
  info[294].mFileTimeHi = 0U;
  info[295].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/eps.m";
  info[295].name = "eml_is_float_class";
  info[295].dominantType = "char";
  info[295].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_is_float_class.m";
  info[295].fileTimeLo = 1286840382U;
  info[295].fileTimeHi = 0U;
  info[295].mFileTimeLo = 0U;
  info[295].mFileTimeHi = 0U;
  info[296].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/eps.m";
  info[296].name = "eml_eps";
  info[296].dominantType = "char";
  info[296].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_eps.m";
  info[296].fileTimeLo = 1326749596U;
  info[296].fileTimeHi = 0U;
  info[296].mFileTimeLo = 0U;
  info[296].mFileTimeHi = 0U;
  info[297].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_eps.m";
  info[297].name = "eml_float_model";
  info[297].dominantType = "char";
  info[297].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_float_model.m";
  info[297].fileTimeLo = 1326749596U;
  info[297].fileTimeHi = 0U;
  info[297].mFileTimeLo = 0U;
  info[297].mFileTimeHi = 0U;
  info[298].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/mod.m!floatmod";
  info[298].name = "mtimes";
  info[298].dominantType = "double";
  info[298].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  info[298].fileTimeLo = 1289541292U;
  info[298].fileTimeHi = 0U;
  info[298].mFileTimeLo = 0U;
  info[298].mFileTimeHi = 0U;
  info[299].context =
    "[PE]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/generateOFDMSignal_TX2.m";
  info[299].name = "createsystemobjectv2";
  info[299].dominantType = "";
  info[299].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/createsystemobjectv2.m";
  info[299].fileTimeLo = 1343851958U;
  info[299].fileTimeHi = 0U;
  info[299].mFileTimeLo = 0U;
  info[299].mFileTimeHi = 0U;
  info[300].context =
    "[PE]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/generateOFDMSignal_TX2.m";
  info[300].name = "step";
  info[300].dominantType = "comm.PNSequence";
  info[300].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/step.m";
  info[300].fileTimeLo = 1349900350U;
  info[300].fileTimeHi = 0U;
  info[300].mFileTimeLo = 0U;
  info[300].mFileTimeHi = 0U;
  info[301].context = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/step.m";
  info[301].name = "checkSystemObjectInput";
  info[301].dominantType = "comm.PNSequence";
  info[301].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/checkSystemObjectInput.m";
  info[301].fileTimeLo = 1349900346U;
  info[301].fileTimeHi = 0U;
  info[301].mFileTimeLo = 0U;
  info[301].mFileTimeHi = 0U;
  info[302].context =
    "[PE]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/generateOFDMSignal_TX2.m";
  info[302].name = "repmat";
  info[302].dominantType = "double";
  info[302].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/repmat.m";
  info[302].fileTimeLo = 1352446460U;
  info[302].fileTimeHi = 0U;
  info[302].mFileTimeLo = 0U;
  info[302].mFileTimeHi = 0U;
  info[303].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/repmat.m";
  info[303].name = "eml_scalar_eg";
  info[303].dominantType = "double";
  info[303].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m";
  info[303].fileTimeLo = 1286840396U;
  info[303].fileTimeHi = 0U;
  info[303].mFileTimeLo = 0U;
  info[303].mFileTimeHi = 0U;
  info[304].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/repmat.m";
  info[304].name = "eml_index_prod";
  info[304].dominantType = "double";
  info[304].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_prod.m";
  info[304].fileTimeLo = 1286840380U;
  info[304].fileTimeHi = 0U;
  info[304].mFileTimeLo = 0U;
  info[304].mFileTimeHi = 0U;
  info[305].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/repmat.m";
  info[305].name = "eml_int_forloop_overflow_check";
  info[305].dominantType = "";
  info[305].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m";
  info[305].fileTimeLo = 1346531940U;
  info[305].fileTimeHi = 0U;
  info[305].mFileTimeLo = 0U;
  info[305].mFileTimeHi = 0U;
  info[306].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/repmat.m";
  info[306].name = "eml_index_plus";
  info[306].dominantType = "coder.internal.indexInt";
  info[306].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_plus.m";
  info[306].fileTimeLo = 1286840378U;
  info[306].fileTimeHi = 0U;
  info[306].mFileTimeLo = 0U;
  info[306].mFileTimeHi = 0U;
  info[307].context =
    "[C]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/OFDMBase.m";
  info[307].name = "unique";
  info[307].dominantType = "double";
  info[307].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/unique.m";
  info[307].fileTimeLo = 1344493640U;
  info[307].fileTimeHi = 0U;
  info[307].mFileTimeLo = 0U;
  info[307].mFileTimeHi = 0U;
  info[308].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/unique.m!unique_vector";
  info[308].name = "eml_index_class";
  info[308].dominantType = "";
  info[308].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[308].fileTimeLo = 1323192178U;
  info[308].fileTimeHi = 0U;
  info[308].mFileTimeLo = 0U;
  info[308].mFileTimeHi = 0U;
  info[309].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/unique.m!unique_vector";
  info[309].name = "eml_sort_idx";
  info[309].dominantType = "double";
  info[309].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_sort_idx.m";
  info[309].fileTimeLo = 1305339604U;
  info[309].fileTimeHi = 0U;
  info[309].mFileTimeLo = 0U;
  info[309].mFileTimeHi = 0U;
  info[310].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_sort_idx.m";
  info[310].name = "eml_index_class";
  info[310].dominantType = "";
  info[310].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[310].fileTimeLo = 1323192178U;
  info[310].fileTimeHi = 0U;
  info[310].mFileTimeLo = 0U;
  info[310].mFileTimeHi = 0U;
  info[311].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_sort_idx.m";
  info[311].name = "eml_size_ispow2";
  info[311].dominantType = "coder.internal.indexInt";
  info[311].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_size_ispow2.m";
  info[311].fileTimeLo = 1286840398U;
  info[311].fileTimeHi = 0U;
  info[311].mFileTimeLo = 0U;
  info[311].mFileTimeHi = 0U;
  info[312].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_sort_idx.m";
  info[312].name = "eml_index_plus";
  info[312].dominantType = "coder.internal.indexInt";
  info[312].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_plus.m";
  info[312].fileTimeLo = 1286840378U;
  info[312].fileTimeHi = 0U;
  info[312].mFileTimeLo = 0U;
  info[312].mFileTimeHi = 0U;
  info[313].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_sort_idx.m";
  info[313].name = "eml_int_forloop_overflow_check";
  info[313].dominantType = "";
  info[313].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m";
  info[313].fileTimeLo = 1346531940U;
  info[313].fileTimeHi = 0U;
  info[313].mFileTimeLo = 0U;
  info[313].mFileTimeHi = 0U;
  info[314].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_sort_idx.m";
  info[314].name = "eml_index_minus";
  info[314].dominantType = "double";
  info[314].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_minus.m";
  info[314].fileTimeLo = 1286840378U;
  info[314].fileTimeHi = 0U;
  info[314].mFileTimeLo = 0U;
  info[314].mFileTimeHi = 0U;
  info[315].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_sort_idx.m";
  info[315].name = "eml_index_plus";
  info[315].dominantType = "double";
  info[315].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_plus.m";
  info[315].fileTimeLo = 1286840378U;
  info[315].fileTimeHi = 0U;
  info[315].mFileTimeLo = 0U;
  info[315].mFileTimeHi = 0U;
  info[316].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_sort_idx.m";
  info[316].name = "eml_sort_le";
  info[316].dominantType = "double";
  info[316].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_sort_le.m";
  info[316].fileTimeLo = 1292212110U;
  info[316].fileTimeHi = 0U;
  info[316].mFileTimeLo = 0U;
  info[316].mFileTimeHi = 0U;
  info[317].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_sort_le.m!eml_sort_ascending_le";
  info[317].name = "eml_relop";
  info[317].dominantType = "function_handle";
  info[317].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_relop.m";
  info[317].fileTimeLo = 1342472782U;
  info[317].fileTimeHi = 0U;
  info[317].mFileTimeLo = 0U;
  info[317].mFileTimeHi = 0U;
  info[318].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_sort_le.m!eml_sort_ascending_le";
  info[318].name = "isnan";
  info[318].dominantType = "double";
  info[318].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isnan.m";
  info[318].fileTimeLo = 1286840360U;
  info[318].fileTimeHi = 0U;
  info[318].mFileTimeLo = 0U;
  info[318].mFileTimeHi = 0U;
  info[319].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_sort_idx.m";
  info[319].name = "eml_index_times";
  info[319].dominantType = "double";
  info[319].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_times.m";
  info[319].fileTimeLo = 1286840380U;
  info[319].fileTimeHi = 0U;
  info[319].mFileTimeLo = 0U;
  info[319].mFileTimeHi = 0U;
}

static const mxArray *emlrt_marshallOut(ResolvedFunctionInfo u[470])
{
  const mxArray *y;
  int32_T iv118[1];
  int32_T i22;
  ResolvedFunctionInfo *r4;
  const char * b_u;
  const mxArray *b_y;
  const mxArray *m24;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  uint32_T c_u;
  const mxArray *f_y;
  const mxArray *g_y;
  const mxArray *h_y;
  const mxArray *i_y;
  y = NULL;
  iv118[0] = 470;
  emlrtAssign(&y, mxCreateStructArray(1, iv118, 0, NULL));
  for (i22 = 0; i22 < 470; i22++) {
    r4 = &u[i22];
    b_u = r4->context;
    b_y = NULL;
    m24 = mxCreateString(b_u);
    emlrtAssign(&b_y, m24);
    emlrtAddField(y, b_y, "context", i22);
    b_u = r4->name;
    c_y = NULL;
    m24 = mxCreateString(b_u);
    emlrtAssign(&c_y, m24);
    emlrtAddField(y, c_y, "name", i22);
    b_u = r4->dominantType;
    d_y = NULL;
    m24 = mxCreateString(b_u);
    emlrtAssign(&d_y, m24);
    emlrtAddField(y, d_y, "dominantType", i22);
    b_u = r4->resolved;
    e_y = NULL;
    m24 = mxCreateString(b_u);
    emlrtAssign(&e_y, m24);
    emlrtAddField(y, e_y, "resolved", i22);
    c_u = r4->fileTimeLo;
    f_y = NULL;
    m24 = mxCreateNumericMatrix(1, 1, mxUINT32_CLASS, mxREAL);
    *(uint32_T *)mxGetData(m24) = c_u;
    emlrtAssign(&f_y, m24);
    emlrtAddField(y, f_y, "fileTimeLo", i22);
    c_u = r4->fileTimeHi;
    g_y = NULL;
    m24 = mxCreateNumericMatrix(1, 1, mxUINT32_CLASS, mxREAL);
    *(uint32_T *)mxGetData(m24) = c_u;
    emlrtAssign(&g_y, m24);
    emlrtAddField(y, g_y, "fileTimeHi", i22);
    c_u = r4->mFileTimeLo;
    h_y = NULL;
    m24 = mxCreateNumericMatrix(1, 1, mxUINT32_CLASS, mxREAL);
    *(uint32_T *)mxGetData(m24) = c_u;
    emlrtAssign(&h_y, m24);
    emlrtAddField(y, h_y, "mFileTimeLo", i22);
    c_u = r4->mFileTimeHi;
    i_y = NULL;
    m24 = mxCreateNumericMatrix(1, 1, mxUINT32_CLASS, mxREAL);
    *(uint32_T *)mxGetData(m24) = c_u;
    emlrtAssign(&i_y, m24);
    emlrtAddField(y, i_y, "mFileTimeHi", i22);
  }

  return y;
}

static void f_info_helper(ResolvedFunctionInfo info[470])
{
  info[320].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_sort_idx.m";
  info[320].name = "eml_index_minus";
  info[320].dominantType = "coder.internal.indexInt";
  info[320].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_minus.m";
  info[320].fileTimeLo = 1286840378U;
  info[320].fileTimeHi = 0U;
  info[320].mFileTimeLo = 0U;
  info[320].mFileTimeHi = 0U;
  info[321].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/unique.m!unique_vector";
  info[321].name = "eml_scalar_eg";
  info[321].dominantType = "double";
  info[321].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m";
  info[321].fileTimeLo = 1286840396U;
  info[321].fileTimeHi = 0U;
  info[321].mFileTimeLo = 0U;
  info[321].mFileTimeHi = 0U;
  info[322].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/unique.m!unique_vector";
  info[322].name = "eml_int_forloop_overflow_check";
  info[322].dominantType = "";
  info[322].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m";
  info[322].fileTimeLo = 1346531940U;
  info[322].fileTimeHi = 0U;
  info[322].mFileTimeLo = 0U;
  info[322].mFileTimeHi = 0U;
  info[323].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/unique.m!count_nonfinites";
  info[323].name = "eml_index_class";
  info[323].dominantType = "";
  info[323].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[323].fileTimeLo = 1323192178U;
  info[323].fileTimeHi = 0U;
  info[323].mFileTimeLo = 0U;
  info[323].mFileTimeHi = 0U;
  info[324].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/unique.m!count_nonfinites";
  info[324].name = "isinf";
  info[324].dominantType = "double";
  info[324].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isinf.m";
  info[324].fileTimeLo = 1286840360U;
  info[324].fileTimeHi = 0U;
  info[324].mFileTimeLo = 0U;
  info[324].mFileTimeHi = 0U;
  info[325].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/unique.m!count_nonfinites";
  info[325].name = "eml_index_plus";
  info[325].dominantType = "double";
  info[325].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_plus.m";
  info[325].fileTimeLo = 1286840378U;
  info[325].fileTimeHi = 0U;
  info[325].mFileTimeLo = 0U;
  info[325].mFileTimeHi = 0U;
  info[326].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/unique.m!count_nonfinites";
  info[326].name = "eml_index_minus";
  info[326].dominantType = "double";
  info[326].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_minus.m";
  info[326].fileTimeLo = 1286840378U;
  info[326].fileTimeHi = 0U;
  info[326].mFileTimeLo = 0U;
  info[326].mFileTimeHi = 0U;
  info[327].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/unique.m!count_nonfinites";
  info[327].name = "isnan";
  info[327].dominantType = "double";
  info[327].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isnan.m";
  info[327].fileTimeLo = 1286840360U;
  info[327].fileTimeHi = 0U;
  info[327].mFileTimeLo = 0U;
  info[327].mFileTimeHi = 0U;
  info[328].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/unique.m!count_nonfinites";
  info[328].name = "eml_index_minus";
  info[328].dominantType = "coder.internal.indexInt";
  info[328].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_minus.m";
  info[328].fileTimeLo = 1286840378U;
  info[328].fileTimeHi = 0U;
  info[328].mFileTimeLo = 0U;
  info[328].mFileTimeHi = 0U;
  info[329].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/unique.m!unique_vector";
  info[329].name = "eml_index_plus";
  info[329].dominantType = "coder.internal.indexInt";
  info[329].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_plus.m";
  info[329].fileTimeLo = 1286840378U;
  info[329].fileTimeHi = 0U;
  info[329].mFileTimeLo = 0U;
  info[329].mFileTimeHi = 0U;
  info[330].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/unique.m!unique_vector";
  info[330].name = "eml_index_plus";
  info[330].dominantType = "double";
  info[330].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_plus.m";
  info[330].fileTimeLo = 1286840378U;
  info[330].fileTimeHi = 0U;
  info[330].mFileTimeLo = 0U;
  info[330].mFileTimeHi = 0U;
  info[331].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/unique.m!unique_vector";
  info[331].name = "eml_safe_eq";
  info[331].dominantType = "double";
  info[331].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_safe_eq.m";
  info[331].fileTimeLo = 1348213518U;
  info[331].fileTimeHi = 0U;
  info[331].mFileTimeLo = 0U;
  info[331].mFileTimeHi = 0U;
  info[332].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_safe_eq.m";
  info[332].name = "abs";
  info[332].dominantType = "double";
  info[332].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/abs.m";
  info[332].fileTimeLo = 1343851966U;
  info[332].fileTimeHi = 0U;
  info[332].mFileTimeLo = 0U;
  info[332].mFileTimeHi = 0U;
  info[333].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_safe_eq.m";
  info[333].name = "mrdivide";
  info[333].dominantType = "double";
  info[333].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p";
  info[333].fileTimeLo = 1357973148U;
  info[333].fileTimeHi = 0U;
  info[333].mFileTimeLo = 1319751566U;
  info[333].mFileTimeHi = 0U;
  info[334].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_safe_eq.m";
  info[334].name = "eps";
  info[334].dominantType = "double";
  info[334].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/eps.m";
  info[334].fileTimeLo = 1326749596U;
  info[334].fileTimeHi = 0U;
  info[334].mFileTimeLo = 0U;
  info[334].mFileTimeHi = 0U;
  info[335].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/eps.m";
  info[335].name = "eml_guarded_nan";
  info[335].dominantType = "";
  info[335].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_guarded_nan.m";
  info[335].fileTimeLo = 1286840376U;
  info[335].fileTimeHi = 0U;
  info[335].mFileTimeLo = 0U;
  info[335].mFileTimeHi = 0U;
  info[336].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_safe_eq.m";
  info[336].name = "isinf";
  info[336].dominantType = "double";
  info[336].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isinf.m";
  info[336].fileTimeLo = 1286840360U;
  info[336].fileTimeHi = 0U;
  info[336].mFileTimeLo = 0U;
  info[336].mFileTimeHi = 0U;
  info[337].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/unique.m!unique_vector";
  info[337].name = "eml_index_minus";
  info[337].dominantType = "double";
  info[337].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_minus.m";
  info[337].fileTimeLo = 1286840378U;
  info[337].fileTimeHi = 0U;
  info[337].mFileTimeLo = 0U;
  info[337].mFileTimeHi = 0U;
  info[338].context =
    "[C]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/OFDMBase.m";
  info[338].name = "length";
  info[338].dominantType = "double";
  info[338].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/length.m";
  info[338].fileTimeLo = 1303167806U;
  info[338].fileTimeHi = 0U;
  info[338].mFileTimeLo = 0U;
  info[338].mFileTimeHi = 0U;
  info[339].context =
    "[C]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/OFDMModulator.m";
  info[339].name = "coder.internal.errorIf";
  info[339].dominantType = "char";
  info[339].resolved =
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/errorIf.m";
  info[339].fileTimeLo = 1334093538U;
  info[339].fileTimeHi = 0U;
  info[339].mFileTimeLo = 0U;
  info[339].mFileTimeHi = 0U;
  info[340].context =
    "[C]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/OFDMModulator.m";
  info[340].name = "ismatrix";
  info[340].dominantType = "double";
  info[340].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/ismatrix.m";
  info[340].fileTimeLo = 1331326458U;
  info[340].fileTimeHi = 0U;
  info[340].mFileTimeLo = 0U;
  info[340].mFileTimeHi = 0U;
  info[341].context =
    "[C]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/OFDMModulator.m";
  info[341].name = "mrdivide";
  info[341].dominantType = "double";
  info[341].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p";
  info[341].fileTimeLo = 1357973148U;
  info[341].fileTimeHi = 0U;
  info[341].mFileTimeLo = 1319751566U;
  info[341].mFileTimeHi = 0U;
  info[342].context =
    "[C]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/OFDMModulator.m";
  info[342].name = "repmat";
  info[342].dominantType = "double";
  info[342].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/repmat.m";
  info[342].fileTimeLo = 1352446460U;
  info[342].fileTimeHi = 0U;
  info[342].mFileTimeLo = 0U;
  info[342].mFileTimeHi = 0U;
  info[343].context =
    "[C]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/OFDMBase.m";
  info[343].name = "colon";
  info[343].dominantType = "double";
  info[343].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m";
  info[343].fileTimeLo = 1348213528U;
  info[343].fileTimeHi = 0U;
  info[343].mFileTimeLo = 0U;
  info[343].mFileTimeHi = 0U;
  info[344].context =
    "[C]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/OFDMBase.m";
  info[344].name = "repmat";
  info[344].dominantType = "double";
  info[344].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/repmat.m";
  info[344].fileTimeLo = 1352446460U;
  info[344].fileTimeHi = 0U;
  info[344].mFileTimeLo = 0U;
  info[344].mFileTimeHi = 0U;
  info[345].context =
    "[C]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/OFDMBase.m";
  info[345].name = "mtimes";
  info[345].dominantType = "double";
  info[345].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  info[345].fileTimeLo = 1289541292U;
  info[345].fileTimeHi = 0U;
  info[345].mFileTimeLo = 0U;
  info[345].mFileTimeHi = 0U;
  info[346].context =
    "[C]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/OFDMBase.m";
  info[346].name = "sub2ind";
  info[346].dominantType = "double";
  info[346].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/sub2ind.m";
  info[346].fileTimeLo = 1286840370U;
  info[346].fileTimeHi = 0U;
  info[346].mFileTimeLo = 0U;
  info[346].mFileTimeHi = 0U;
  info[347].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/sub2ind.m";
  info[347].name = "eml_index_class";
  info[347].dominantType = "";
  info[347].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[347].fileTimeLo = 1323192178U;
  info[347].fileTimeHi = 0U;
  info[347].mFileTimeLo = 0U;
  info[347].mFileTimeHi = 0U;
  info[348].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/sub2ind.m!eml_sub2ind";
  info[348].name = "min";
  info[348].dominantType = "double";
  info[348].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/min.m";
  info[348].fileTimeLo = 1311276918U;
  info[348].fileTimeHi = 0U;
  info[348].mFileTimeLo = 0U;
  info[348].mFileTimeHi = 0U;
  info[349].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/sub2ind.m!allinrange";
  info[349].name = "coder.internal.indexIntRelop";
  info[349].dominantType = "";
  info[349].resolved =
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/indexIntRelop.m";
  info[349].fileTimeLo = 1326749922U;
  info[349].fileTimeHi = 0U;
  info[349].mFileTimeLo = 0U;
  info[349].mFileTimeHi = 0U;
  info[350].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/sub2ind.m!eml_sub2ind";
  info[350].name = "isequal";
  info[350].dominantType = "double";
  info[350].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isequal.m";
  info[350].fileTimeLo = 1286840358U;
  info[350].fileTimeHi = 0U;
  info[350].mFileTimeLo = 0U;
  info[350].mFileTimeHi = 0U;
  info[351].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_isequal_core.m!isequal_scalar";
  info[351].name = "isnan";
  info[351].dominantType = "double";
  info[351].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isnan.m";
  info[351].fileTimeLo = 1286840360U;
  info[351].fileTimeHi = 0U;
  info[351].mFileTimeLo = 0U;
  info[351].mFileTimeHi = 0U;
  info[352].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/sub2ind.m!prodsub";
  info[352].name = "eml_index_class";
  info[352].dominantType = "";
  info[352].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[352].fileTimeLo = 1323192178U;
  info[352].fileTimeHi = 0U;
  info[352].mFileTimeLo = 0U;
  info[352].mFileTimeHi = 0U;
  info[353].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/sub2ind.m!prodsub";
  info[353].name = "eml_index_times";
  info[353].dominantType = "coder.internal.indexInt";
  info[353].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_times.m";
  info[353].fileTimeLo = 1286840380U;
  info[353].fileTimeHi = 0U;
  info[353].mFileTimeLo = 0U;
  info[353].mFileTimeHi = 0U;
  info[354].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/sub2ind.m!eml_sub2ind";
  info[354].name = "eml_index_class";
  info[354].dominantType = "";
  info[354].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[354].fileTimeLo = 1323192178U;
  info[354].fileTimeHi = 0U;
  info[354].mFileTimeLo = 0U;
  info[354].mFileTimeHi = 0U;
  info[355].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/sub2ind.m!eml_sub2ind";
  info[355].name = "eml_index_minus";
  info[355].dominantType = "double";
  info[355].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_minus.m";
  info[355].fileTimeLo = 1286840378U;
  info[355].fileTimeHi = 0U;
  info[355].mFileTimeLo = 0U;
  info[355].mFileTimeHi = 0U;
  info[356].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/sub2ind.m!eml_sub2ind";
  info[356].name = "eml_index_times";
  info[356].dominantType = "coder.internal.indexInt";
  info[356].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_times.m";
  info[356].fileTimeLo = 1286840380U;
  info[356].fileTimeHi = 0U;
  info[356].mFileTimeLo = 0U;
  info[356].mFileTimeHi = 0U;
  info[357].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/sub2ind.m!eml_sub2ind";
  info[357].name = "eml_index_plus";
  info[357].dominantType = "coder.internal.indexInt";
  info[357].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_plus.m";
  info[357].fileTimeLo = 1286840378U;
  info[357].fileTimeHi = 0U;
  info[357].mFileTimeLo = 0U;
  info[357].mFileTimeHi = 0U;
  info[358].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/sub2ind.m!eml_sub2ind";
  info[358].name = "eml_scalar_eg";
  info[358].dominantType = "double";
  info[358].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m";
  info[358].fileTimeLo = 1286840396U;
  info[358].fileTimeHi = 0U;
  info[358].mFileTimeLo = 0U;
  info[358].mFileTimeHi = 0U;
  info[359].context =
    "[C]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/OFDMDemodulator.m";
  info[359].name = "OFDMBase";
  info[359].dominantType = "unknown";
  info[359].resolved =
    "[C]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/OFDMBase.m";
  info[359].fileTimeLo = 1398358298U;
  info[359].fileTimeHi = 0U;
  info[359].mFileTimeLo = 0U;
  info[359].mFileTimeHi = 0U;
  info[360].context =
    "[PE]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/generateOFDMSignal_TX2.m";
  info[360].name = "OFDMDemodulator";
  info[360].dominantType = "OFDMModulator";
  info[360].resolved =
    "[C]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/OFDMDemodulator.m";
  info[360].fileTimeLo = 1398358298U;
  info[360].fileTimeHi = 0U;
  info[360].mFileTimeLo = 0U;
  info[360].mFileTimeHi = 0U;
  info[361].context =
    "[PE]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/generateOFDMSignal_TX2.m";
  info[361].name = "sum";
  info[361].dominantType = "double";
  info[361].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/sum.m";
  info[361].fileTimeLo = 1314758212U;
  info[361].fileTimeHi = 0U;
  info[361].mFileTimeLo = 0U;
  info[361].mFileTimeHi = 0U;
  info[362].context =
    "[PE]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/generateOFDMSignal_TX2.m";
  info[362].name = "colon";
  info[362].dominantType = "double";
  info[362].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m";
  info[362].fileTimeLo = 1348213528U;
  info[362].fileTimeHi = 0U;
  info[362].mFileTimeLo = 0U;
  info[362].mFileTimeHi = 0U;
  info[363].context =
    "[C]/home/sdruser/git/traviscollins/sdruWiLab/sdru/+comm/+internal/SDRuBase.p";
  info[363].name = "matlab.System";
  info[363].dominantType = "unknown";
  info[363].resolved =
    "[IXC]$matlabroot$/toolbox/matlab/system/+matlab/System.p";
  info[363].fileTimeLo = 1357962380U;
  info[363].fileTimeHi = 0U;
  info[363].mFileTimeLo = 0U;
  info[363].mFileTimeHi = 0U;
  info[364].context =
    "[C]/home/sdruser/git/traviscollins/sdruWiLab/sdru/+comm/SDRuTransmitter.p";
  info[364].name = "comm.internal.SDRuBase";
  info[364].dominantType = "unknown";
  info[364].resolved =
    "[C]/home/sdruser/git/traviscollins/sdruWiLab/sdru/+comm/+internal/SDRuBase.p";
  info[364].fileTimeLo = 1398358298U;
  info[364].fileTimeHi = 0U;
  info[364].mFileTimeLo = 0U;
  info[364].mFileTimeHi = 0U;
  info[365].context =
    "[E]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/CreateTXRX_TX.m";
  info[365].name = "comm.SDRuTransmitter";
  info[365].dominantType = "char";
  info[365].resolved =
    "[C]/home/sdruser/git/traviscollins/sdruWiLab/sdru/+comm/SDRuTransmitter.p";
  info[365].fileTimeLo = 1398358298U;
  info[365].fileTimeHi = 0U;
  info[365].mFileTimeLo = 0U;
  info[365].mFileTimeHi = 0U;
  info[366].context =
    "[C]/home/sdruser/git/traviscollins/sdruWiLab/sdru/+comm/+internal/SDRuBase.p";
  info[366].name = "coder.internal.getHostName";
  info[366].dominantType = "char";
  info[366].resolved =
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/getHostName.m";
  info[366].fileTimeLo = 1327440774U;
  info[366].fileTimeHi = 0U;
  info[366].mFileTimeLo = 0U;
  info[366].mFileTimeHi = 0U;
  info[367].context =
    "[C]/home/sdruser/git/traviscollins/sdruWiLab/sdru/+comm/+internal/SDRuBase.p";
  info[367].name = "randi";
  info[367].dominantType = "double";
  info[367].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/randfun/randi.m";
  info[367].fileTimeLo = 1320911042U;
  info[367].fileTimeHi = 0U;
  info[367].mFileTimeLo = 0U;
  info[367].mFileTimeHi = 0U;
  info[368].context =
    "[C]/home/sdruser/git/traviscollins/sdruWiLab/sdru/+comm/+internal/SDRuBase.p";
  info[368].name = "char";
  info[368].dominantType = "double";
  info[368].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/strfun/char.m";
  info[368].fileTimeLo = 1319751568U;
  info[368].fileTimeHi = 0U;
  info[368].mFileTimeLo = 0U;
  info[368].mFileTimeHi = 0U;
  info[369].context =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p";
  info[369].name = "matlab.system.setProp";
  info[369].dominantType = "comm.SDRuTransmitter";
  info[369].resolved =
    "[IXE]$matlabroot$/toolbox/matlab/system/+matlab/+system/setProp.p";
  info[369].fileTimeLo = 1357962380U;
  info[369].fileTimeHi = 0U;
  info[369].mFileTimeLo = 0U;
  info[369].mFileTimeHi = 0U;
  info[370].context =
    "[C]/home/sdruser/git/traviscollins/sdruWiLab/sdru/+comm/+internal/SDRuBase.p";
  info[370].name = "checkIPAddressFormat";
  info[370].dominantType = "char";
  info[370].resolved =
    "[E]/home/sdruser/git/traviscollins/sdruWiLab/sdru/checkIPAddressFormat.m";
  info[370].fileTimeLo = 1398358298U;
  info[370].fileTimeHi = 0U;
  info[370].mFileTimeLo = 0U;
  info[370].mFileTimeHi = 0U;
  info[371].context =
    "[E]/home/sdruser/git/traviscollins/sdruWiLab/sdru/checkIPAddressFormat.m";
  info[371].name = "nargchk";
  info[371].dominantType = "double";
  info[371].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/lang/nargchk.m";
  info[371].fileTimeLo = 1286840418U;
  info[371].fileTimeHi = 0U;
  info[371].mFileTimeLo = 0U;
  info[371].mFileTimeHi = 0U;
  info[372].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/lang/nargchk.m";
  info[372].name = "floor";
  info[372].dominantType = "double";
  info[372].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/floor.m";
  info[372].fileTimeLo = 1343851980U;
  info[372].fileTimeHi = 0U;
  info[372].mFileTimeLo = 0U;
  info[372].mFileTimeHi = 0U;
  info[373].context =
    "[E]/home/sdruser/git/traviscollins/sdruWiLab/sdru/checkIPAddressFormat.m";
  info[373].name = "coder.internal.errorIf";
  info[373].dominantType = "char";
  info[373].resolved =
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/errorIf.m";
  info[373].fileTimeLo = 1334093538U;
  info[373].fileTimeHi = 0U;
  info[373].mFileTimeLo = 0U;
  info[373].mFileTimeHi = 0U;
  info[374].context =
    "[E]/home/sdruser/git/traviscollins/sdruWiLab/sdru/checkIPAddressFormat.m";
  info[374].name = "isrow";
  info[374].dominantType = "char";
  info[374].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/isrow.m";
  info[374].fileTimeLo = 1346531960U;
  info[374].fileTimeHi = 0U;
  info[374].mFileTimeLo = 0U;
  info[374].mFileTimeHi = 0U;
  info[375].context =
    "[E]/home/sdruser/git/traviscollins/sdruWiLab/sdru/checkIPAddressFormat.m";
  info[375].name = "find";
  info[375].dominantType = "logical";
  info[375].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/find.m";
  info[375].fileTimeLo = 1303167806U;
  info[375].fileTimeHi = 0U;
  info[375].mFileTimeLo = 0U;
  info[375].mFileTimeHi = 0U;
  info[376].context =
    "[E]/home/sdruser/git/traviscollins/sdruWiLab/sdru/checkIPAddressFormat.m";
  info[376].name = "length";
  info[376].dominantType = "double";
  info[376].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/length.m";
  info[376].fileTimeLo = 1303167806U;
  info[376].fileTimeHi = 0U;
  info[376].mFileTimeLo = 0U;
  info[376].mFileTimeHi = 0U;
  info[377].context =
    "[E]/home/sdruser/git/traviscollins/sdruWiLab/sdru/checkIPAddressFormat.m";
  info[377].name = "length";
  info[377].dominantType = "char";
  info[377].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/length.m";
  info[377].fileTimeLo = 1303167806U;
  info[377].fileTimeHi = 0U;
  info[377].mFileTimeLo = 0U;
  info[377].mFileTimeHi = 0U;
  info[378].context =
    "[E]/home/sdruser/git/traviscollins/sdruWiLab/sdru/checkIPAddressFormat.m!checkNumeric";
  info[378].name = "any";
  info[378].dominantType = "logical";
  info[378].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/any.m";
  info[378].fileTimeLo = 1286840434U;
  info[378].fileTimeHi = 0U;
  info[378].mFileTimeLo = 0U;
  info[378].mFileTimeHi = 0U;
  info[379].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_all_or_any.m";
  info[379].name = "eml_matrix_vstride";
  info[379].dominantType = "double";
  info[379].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_matrix_vstride.m";
  info[379].fileTimeLo = 1286840388U;
  info[379].fileTimeHi = 0U;
  info[379].mFileTimeLo = 0U;
  info[379].mFileTimeHi = 0U;
  info[380].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_all_or_any.m";
  info[380].name = "eml_index_minus";
  info[380].dominantType = "double";
  info[380].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_minus.m";
  info[380].fileTimeLo = 1286840378U;
  info[380].fileTimeHi = 0U;
  info[380].mFileTimeLo = 0U;
  info[380].mFileTimeHi = 0U;
  info[381].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_all_or_any.m";
  info[381].name = "eml_index_times";
  info[381].dominantType = "coder.internal.indexInt";
  info[381].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_times.m";
  info[381].fileTimeLo = 1286840380U;
  info[381].fileTimeHi = 0U;
  info[381].mFileTimeLo = 0U;
  info[381].mFileTimeHi = 0U;
  info[382].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_all_or_any.m";
  info[382].name = "eml_matrix_npages";
  info[382].dominantType = "double";
  info[382].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_matrix_npages.m";
  info[382].fileTimeLo = 1286840386U;
  info[382].fileTimeHi = 0U;
  info[382].mFileTimeLo = 0U;
  info[382].mFileTimeHi = 0U;
  info[383].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_all_or_any.m";
  info[383].name = "eml_index_class";
  info[383].dominantType = "";
  info[383].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[383].fileTimeLo = 1323192178U;
  info[383].fileTimeHi = 0U;
  info[383].mFileTimeLo = 0U;
  info[383].mFileTimeHi = 0U;
}

static void g_info_helper(ResolvedFunctionInfo info[470])
{
  info[384].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_all_or_any.m";
  info[384].name = "eml_index_plus";
  info[384].dominantType = "coder.internal.indexInt";
  info[384].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_plus.m";
  info[384].fileTimeLo = 1286840378U;
  info[384].fileTimeHi = 0U;
  info[384].mFileTimeLo = 0U;
  info[384].mFileTimeHi = 0U;
  info[385].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_all_or_any.m";
  info[385].name = "eml_index_plus";
  info[385].dominantType = "double";
  info[385].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_plus.m";
  info[385].fileTimeLo = 1286840378U;
  info[385].fileTimeHi = 0U;
  info[385].mFileTimeLo = 0U;
  info[385].mFileTimeHi = 0U;
  info[386].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_all_or_any.m";
  info[386].name = "eml_int_forloop_overflow_check";
  info[386].dominantType = "";
  info[386].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m";
  info[386].fileTimeLo = 1346531940U;
  info[386].fileTimeHi = 0U;
  info[386].mFileTimeLo = 0U;
  info[386].mFileTimeHi = 0U;
  info[387].context =
    "[E]/home/sdruser/git/traviscollins/sdruWiLab/sdru/checkIPAddressFormat.m!checkNumeric";
  info[387].name = "coder.internal.errorIf";
  info[387].dominantType = "char";
  info[387].resolved =
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/errorIf.m";
  info[387].fileTimeLo = 1334093538U;
  info[387].fileTimeHi = 0U;
  info[387].mFileTimeLo = 0U;
  info[387].mFileTimeHi = 0U;
  info[388].context =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p";
  info[388].name = "matlab.system.pvParse";
  info[388].dominantType = "comm.SDRuTransmitter";
  info[388].resolved =
    "[IXE]$matlabroot$/toolbox/matlab/system/+matlab/+system/pvParse.p";
  info[388].fileTimeLo = 1357962380U;
  info[388].fileTimeHi = 0U;
  info[388].mFileTimeLo = 0U;
  info[388].mFileTimeHi = 0U;
  info[389].context =
    "[C]/home/sdruser/git/traviscollins/sdruWiLab/sdru/+comm/SDRuTransmitter.p";
  info[389].name = "coder.internal.warning";
  info[389].dominantType = "char";
  info[389].resolved =
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/warning.m";
  info[389].fileTimeLo = 1311277408U;
  info[389].fileTimeHi = 0U;
  info[389].mFileTimeLo = 0U;
  info[389].mFileTimeHi = 0U;
  info[390].context =
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/warning.m";
  info[390].name = "eml_warning";
  info[390].dominantType = "char";
  info[390].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_warning.m";
  info[390].fileTimeLo = 1286840402U;
  info[390].fileTimeHi = 0U;
  info[390].mFileTimeLo = 0U;
  info[390].mFileTimeHi = 0U;
  info[391].context =
    "[E]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/CreateTXRX_TX.m";
  info[391].name = "generateOFDMSignal";
  info[391].dominantType = "double";
  info[391].resolved =
    "[PE]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/generateOFDMSignal.m";
  info[391].fileTimeLo = 1398358315U;
  info[391].fileTimeHi = 0U;
  info[391].mFileTimeLo = 0U;
  info[391].mFileTimeHi = 0U;
  info[392].context =
    "[PE]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/generateOFDMSignal.m";
  info[392].name = "OFDMModulator";
  info[392].dominantType = "char";
  info[392].resolved =
    "[C]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/OFDMModulator.m";
  info[392].fileTimeLo = 1398358298U;
  info[392].fileTimeHi = 0U;
  info[392].mFileTimeLo = 0U;
  info[392].mFileTimeHi = 0U;
  info[393].context =
    "[PE]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/generateOFDMSignal.m";
  info[393].name = "mrdivide";
  info[393].dominantType = "double";
  info[393].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p";
  info[393].fileTimeLo = 1357973148U;
  info[393].fileTimeHi = 0U;
  info[393].mFileTimeLo = 1319751566U;
  info[393].mFileTimeHi = 0U;
  info[394].context =
    "[PE]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/generateOFDMSignal.m";
  info[394].name = "sqrt";
  info[394].dominantType = "double";
  info[394].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/sqrt.m";
  info[394].fileTimeLo = 1343851986U;
  info[394].fileTimeHi = 0U;
  info[394].mFileTimeLo = 0U;
  info[394].mFileTimeHi = 0U;
  info[395].context =
    "[PE]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/generateOFDMSignal.m";
  info[395].name = "mtimes";
  info[395].dominantType = "double";
  info[395].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  info[395].fileTimeLo = 1289541292U;
  info[395].fileTimeHi = 0U;
  info[395].mFileTimeLo = 0U;
  info[395].mFileTimeHi = 0U;
  info[396].context =
    "[PE]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/generateOFDMSignal.m";
  info[396].name = "OFDMletters2bits";
  info[396].dominantType = "char";
  info[396].resolved =
    "[PE]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/OFDMletters2bits.m";
  info[396].fileTimeLo = 1398358315U;
  info[396].fileTimeHi = 0U;
  info[396].mFileTimeLo = 0U;
  info[396].mFileTimeHi = 0U;
  info[397].context =
    "[PE]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/generateOFDMSignal.m";
  info[397].name = "reshape";
  info[397].dominantType = "double";
  info[397].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/reshape.m";
  info[397].fileTimeLo = 1286840368U;
  info[397].fileTimeHi = 0U;
  info[397].mFileTimeLo = 0U;
  info[397].mFileTimeHi = 0U;
  info[398].context =
    "[PE]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/generateOFDMSignal.m";
  info[398].name = "commcodegen.CRCGenerator";
  info[398].dominantType = "int32";
  info[398].resolved =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/CRCGenerator.p";
  info[398].fileTimeLo = 1358405060U;
  info[398].fileTimeHi = 0U;
  info[398].mFileTimeLo = 0U;
  info[398].mFileTimeHi = 0U;
  info[399].context =
    "[PE]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/generateOFDMSignal.m";
  info[399].name = "commcodegen.BPSKModulator";
  info[399].dominantType = "int32";
  info[399].resolved =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/BPSKModulator.p";
  info[399].fileTimeLo = 1358405060U;
  info[399].fileTimeHi = 0U;
  info[399].mFileTimeLo = 0U;
  info[399].mFileTimeHi = 0U;
  info[400].context =
    "[PE]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/generateOFDMSignal.m";
  info[400].name = "length";
  info[400].dominantType = "double";
  info[400].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/length.m";
  info[400].fileTimeLo = 1303167806U;
  info[400].fileTimeHi = 0U;
  info[400].mFileTimeLo = 0U;
  info[400].mFileTimeHi = 0U;
  info[401].context =
    "[PE]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/generateOFDMSignal.m";
  info[401].name = "mod";
  info[401].dominantType = "double";
  info[401].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/mod.m";
  info[401].fileTimeLo = 1343851982U;
  info[401].fileTimeHi = 0U;
  info[401].mFileTimeLo = 0U;
  info[401].mFileTimeHi = 0U;
  info[402].context =
    "[PE]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/generateOFDMSignal.m";
  info[402].name = "randi";
  info[402].dominantType = "double";
  info[402].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/randfun/randi.m";
  info[402].fileTimeLo = 1320911042U;
  info[402].fileTimeHi = 0U;
  info[402].mFileTimeLo = 0U;
  info[402].mFileTimeHi = 0U;
  info[403].context =
    "[PE]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/generateOFDMSignal.m";
  info[403].name = "length";
  info[403].dominantType = "char";
  info[403].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/length.m";
  info[403].fileTimeLo = 1303167806U;
  info[403].fileTimeHi = 0U;
  info[403].mFileTimeLo = 0U;
  info[403].mFileTimeHi = 0U;
  info[404].context =
    "[PE]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/generateOFDMSignal.m";
  info[404].name = "createsystemobjectv2";
  info[404].dominantType = "";
  info[404].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/createsystemobjectv2.m";
  info[404].fileTimeLo = 1343851958U;
  info[404].fileTimeHi = 0U;
  info[404].mFileTimeLo = 0U;
  info[404].mFileTimeHi = 0U;
  info[405].context =
    "[PE]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/generateOFDMSignal.m";
  info[405].name = "step";
  info[405].dominantType = "comm.PNSequence";
  info[405].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/step.m";
  info[405].fileTimeLo = 1349900350U;
  info[405].fileTimeHi = 0U;
  info[405].mFileTimeLo = 0U;
  info[405].mFileTimeHi = 0U;
  info[406].context =
    "[PE]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/generateOFDMSignal.m";
  info[406].name = "repmat";
  info[406].dominantType = "double";
  info[406].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/repmat.m";
  info[406].fileTimeLo = 1352446460U;
  info[406].fileTimeHi = 0U;
  info[406].mFileTimeLo = 0U;
  info[406].mFileTimeHi = 0U;
  info[407].context =
    "[PE]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/generateOFDMSignal.m";
  info[407].name = "OFDMDemodulator";
  info[407].dominantType = "OFDMModulator";
  info[407].resolved =
    "[C]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/OFDMDemodulator.m";
  info[407].fileTimeLo = 1398358298U;
  info[407].fileTimeHi = 0U;
  info[407].mFileTimeLo = 0U;
  info[407].mFileTimeHi = 0U;
  info[408].context =
    "[PE]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/generateOFDMSignal.m";
  info[408].name = "sum";
  info[408].dominantType = "double";
  info[408].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/sum.m";
  info[408].fileTimeLo = 1314758212U;
  info[408].fileTimeHi = 0U;
  info[408].mFileTimeLo = 0U;
  info[408].mFileTimeHi = 0U;
  info[409].context =
    "[PE]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/generateOFDMSignal.m";
  info[409].name = "colon";
  info[409].dominantType = "double";
  info[409].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m";
  info[409].fileTimeLo = 1348213528U;
  info[409].fileTimeHi = 0U;
  info[409].mFileTimeLo = 0U;
  info[409].mFileTimeHi = 0U;
  info[410].context =
    "[E]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/CreateTXRX_TX.m";
  info[410].name = "initializeOFDMSyncMemory_sdr";
  info[410].dominantType = "OFDMDemodulator";
  info[410].resolved =
    "[PE]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/initializeOFDMSyncMemory_sdr.m";
  info[410].fileTimeLo = 1398358315U;
  info[410].fileTimeHi = 0U;
  info[410].mFileTimeLo = 0U;
  info[410].mFileTimeHi = 0U;
  info[411].context =
    "[PE]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/initializeOFDMSyncMemory_sdr.m";
  info[411].name = "sum";
  info[411].dominantType = "double";
  info[411].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/sum.m";
  info[411].fileTimeLo = 1314758212U;
  info[411].fileTimeHi = 0U;
  info[411].mFileTimeLo = 0U;
  info[411].mFileTimeHi = 0U;
  info[412].context = "[IXC]$matlabroot$/toolbox/comm/comm/+comm/AGC.m";
  info[412].name = "matlab.System";
  info[412].dominantType = "unknown";
  info[412].resolved =
    "[IXC]$matlabroot$/toolbox/matlab/system/+matlab/System.p";
  info[412].fileTimeLo = 1357962380U;
  info[412].fileTimeHi = 0U;
  info[412].mFileTimeLo = 0U;
  info[412].mFileTimeHi = 0U;
  info[413].context =
    "[E]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/CreateTXRX_TX.m";
  info[413].name = "comm.AGC";
  info[413].dominantType = "char";
  info[413].resolved = "[IXC]$matlabroot$/toolbox/comm/comm/+comm/AGC.m";
  info[413].fileTimeLo = 1355611432U;
  info[413].fileTimeHi = 0U;
  info[413].mFileTimeLo = 0U;
  info[413].mFileTimeHi = 0U;
  info[414].context =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p";
  info[414].name = "matlab.system.pvParse";
  info[414].dominantType = "comm.AGC";
  info[414].resolved =
    "[IXE]$matlabroot$/toolbox/matlab/system/+matlab/+system/pvParse.p";
  info[414].fileTimeLo = 1357962380U;
  info[414].fileTimeHi = 0U;
  info[414].mFileTimeLo = 0U;
  info[414].mFileTimeHi = 0U;
  info[415].context = "[IXC]$matlabroot$/toolbox/comm/comm/+comm/AGC.m";
  info[415].name = "coder.internal.cell";
  info[415].dominantType = "char";
  info[415].resolved =
    "[IXC]$matlabroot$/toolbox/coder/coder/+coder/+internal/cell.p";
  info[415].fileTimeLo = 1357973172U;
  info[415].fileTimeHi = 0U;
  info[415].mFileTimeLo = 0U;
  info[415].mFileTimeHi = 0U;
  info[416].context = "[IXC]$matlabroot$/toolbox/comm/comm/+comm/AGC.m";
  info[416].name = "validateattributes";
  info[416].dominantType = "coder.internal.cell";
  info[416].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/lang/validateattributes.m";
  info[416].fileTimeLo = 1352446462U;
  info[416].fileTimeHi = 0U;
  info[416].mFileTimeLo = 0U;
  info[416].mFileTimeHi = 0U;
  info[417].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/lang/validateattributes.m";
  info[417].name = "char";
  info[417].dominantType = "char";
  info[417].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/strfun/char.m";
  info[417].fileTimeLo = 1319751568U;
  info[417].fileTimeHi = 0U;
  info[417].mFileTimeLo = 0U;
  info[417].mFileTimeHi = 0U;
  info[418].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/lang/validateattributes.m!isintegral";
  info[418].name = "isfinite";
  info[418].dominantType = "double";
  info[418].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isfinite.m";
  info[418].fileTimeLo = 1286840358U;
  info[418].fileTimeHi = 0U;
  info[418].mFileTimeLo = 0U;
  info[418].mFileTimeHi = 0U;
  info[419].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/lang/validateattributes.m!isintegral";
  info[419].name = "floor";
  info[419].dominantType = "double";
  info[419].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/floor.m";
  info[419].fileTimeLo = 1343851980U;
  info[419].fileTimeHi = 0U;
  info[419].mFileTimeLo = 0U;
  info[419].mFileTimeHi = 0U;
  info[420].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/lang/validateattributes.m";
  info[420].name = "isfinite";
  info[420].dominantType = "";
  info[420].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isfinite.m";
  info[420].fileTimeLo = 1286840358U;
  info[420].fileTimeHi = 0U;
  info[420].mFileTimeLo = 0U;
  info[420].mFileTimeHi = 0U;
  info[421].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/lang/validateattributes.m!all";
  info[421].name = "isfinite";
  info[421].dominantType = "double";
  info[421].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isfinite.m";
  info[421].fileTimeLo = 1286840358U;
  info[421].fileTimeHi = 0U;
  info[421].mFileTimeLo = 0U;
  info[421].mFileTimeHi = 0U;
  info[422].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/lang/validateattributes.m!notisnan";
  info[422].name = "isnan";
  info[422].dominantType = "double";
  info[422].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isnan.m";
  info[422].fileTimeLo = 1286840360U;
  info[422].fileTimeHi = 0U;
  info[422].mFileTimeLo = 0U;
  info[422].mFileTimeHi = 0U;
  info[423].context =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/CRCDetector.p";
  info[423].name = "matlab.system.coder.System";
  info[423].dominantType = "unknown";
  info[423].resolved =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/System.p";
  info[423].fileTimeLo = 1357971318U;
  info[423].fileTimeHi = 0U;
  info[423].mFileTimeLo = 0U;
  info[423].mFileTimeHi = 0U;
  info[424].context =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/CRCDetector.p";
  info[424].name = "matlab.system.mixin.coder.Nondirect";
  info[424].dominantType = "unknown";
  info[424].resolved =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+mixin/+coder/Nondirect.p";
  info[424].fileTimeLo = 1357971320U;
  info[424].fileTimeHi = 0U;
  info[424].mFileTimeLo = 0U;
  info[424].mFileTimeHi = 0U;
  info[425].context =
    "[E]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/CreateTXRX_TX.m";
  info[425].name = "commcodegen.CRCDetector";
  info[425].dominantType = "int32";
  info[425].resolved =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/CRCDetector.p";
  info[425].fileTimeLo = 1358405060U;
  info[425].fileTimeHi = 0U;
  info[425].mFileTimeLo = 0U;
  info[425].mFileTimeHi = 0U;
  info[426].context =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/CRCDetector.p";
  info[426].name = "createsystemobjectv2";
  info[426].dominantType = "";
  info[426].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/createsystemobjectv2.m";
  info[426].fileTimeLo = 1343851958U;
  info[426].fileTimeHi = 0U;
  info[426].mFileTimeLo = 0U;
  info[426].mFileTimeHi = 0U;
  info[427].context =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p";
  info[427].name = "matlab.system.setProp";
  info[427].dominantType = "commcodegen.CRCDetector";
  info[427].resolved =
    "[IXE]$matlabroot$/toolbox/matlab/system/+matlab/+system/setProp.p";
  info[427].fileTimeLo = 1357962380U;
  info[427].fileTimeHi = 0U;
  info[427].mFileTimeLo = 0U;
  info[427].mFileTimeHi = 0U;
  info[428].context =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p";
  info[428].name = "matlab.system.pvParse";
  info[428].dominantType = "commcodegen.CRCDetector";
  info[428].resolved =
    "[IXE]$matlabroot$/toolbox/matlab/system/+matlab/+system/pvParse.p";
  info[428].fileTimeLo = 1357962380U;
  info[428].fileTimeHi = 0U;
  info[428].mFileTimeLo = 0U;
  info[428].mFileTimeHi = 0U;
  info[429].context =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/CRCDetector.p";
  info[429].name = "commcodegen.CRCDetector";
  info[429].dominantType = "";
  info[429].resolved =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/CRCDetector.p";
  info[429].fileTimeLo = 1358405060U;
  info[429].fileTimeHi = 0U;
  info[429].mFileTimeLo = 0U;
  info[429].mFileTimeHi = 0U;
  info[430].context =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/CRCDetector.p";
  info[430].name = "matlab.system.coder.SystemProp";
  info[430].dominantType = "";
  info[430].resolved =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p";
  info[430].fileTimeLo = 1357971320U;
  info[430].fileTimeHi = 0U;
  info[430].mFileTimeLo = 0U;
  info[430].mFileTimeHi = 0U;
  info[431].context =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/CRCDetector.p";
  info[431].name = "get";
  info[431].dominantType = "comm.CRCDetector";
  info[431].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/get.m";
  info[431].fileTimeLo = 1349900344U;
  info[431].fileTimeHi = 0U;
  info[431].mFileTimeLo = 0U;
  info[431].mFileTimeHi = 0U;
  info[432].context =
    "[E]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/CreateTXRX_TX.m";
  info[432].name = "mtimes";
  info[432].dominantType = "double";
  info[432].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  info[432].fileTimeLo = 1289541292U;
  info[432].fileTimeHi = 0U;
  info[432].mFileTimeLo = 0U;
  info[432].mFileTimeHi = 0U;
  info[433].context =
    "[E]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/CreateTXRX_TX.m";
  info[433].name = "floor";
  info[433].dominantType = "double";
  info[433].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/floor.m";
  info[433].fileTimeLo = 1343851980U;
  info[433].fileTimeHi = 0U;
  info[433].mFileTimeLo = 0U;
  info[433].mFileTimeHi = 0U;
  info[434].context =
    "[E]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/testPHYTransmit.m";
  info[434].name = "PHYTransmit";
  info[434].dominantType = "comm.SDRuTransmitter";
  info[434].resolved =
    "[E]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/PHYTransmit.m";
  info[434].fileTimeLo = 1398358298U;
  info[434].fileTimeHi = 0U;
  info[434].mFileTimeLo = 0U;
  info[434].mFileTimeHi = 0U;
  info[435].context =
    "[E]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/PHYTransmit.m";
  info[435].name = "generateOFDMSignal_TX2";
  info[435].dominantType = "char";
  info[435].resolved =
    "[PE]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/generateOFDMSignal_TX2.m";
  info[435].fileTimeLo = 1398358315U;
  info[435].fileTimeHi = 0U;
  info[435].mFileTimeLo = 0U;
  info[435].mFileTimeHi = 0U;
  info[436].context =
    "[C]/home/sdruser/git/traviscollins/sdruWiLab/sdru/+comm/+internal/SDRuBase.p";
  info[436].name = "coder.internal.assert";
  info[436].dominantType = "char";
  info[436].resolved =
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/assert.m";
  info[436].fileTimeLo = 1334093538U;
  info[436].fileTimeHi = 0U;
  info[436].mFileTimeLo = 0U;
  info[436].mFileTimeHi = 0U;
  info[437].context =
    "[C]/home/sdruser/git/traviscollins/sdruWiLab/sdru/+comm/+internal/SDRuBase.p";
  info[437].name = "length";
  info[437].dominantType = "char";
  info[437].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/length.m";
  info[437].fileTimeLo = 1303167806U;
  info[437].fileTimeHi = 0U;
  info[437].mFileTimeLo = 0U;
  info[437].mFileTimeHi = 0U;
  info[438].context =
    "[C]/home/sdruser/git/traviscollins/sdruWiLab/sdru/+comm/+internal/SDRuBase.p";
  info[438].name = "all";
  info[438].dominantType = "logical";
  info[438].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/all.m";
  info[438].fileTimeLo = 1286840434U;
  info[438].fileTimeHi = 0U;
  info[438].mFileTimeLo = 0U;
  info[438].mFileTimeHi = 0U;
  info[439].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/all.m";
  info[439].name = "eml_all_or_any";
  info[439].dominantType = "char";
  info[439].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_all_or_any.m";
  info[439].fileTimeLo = 1286840294U;
  info[439].fileTimeHi = 0U;
  info[439].mFileTimeLo = 0U;
  info[439].mFileTimeHi = 0U;
  info[440].context =
    "[C]/home/sdruser/git/traviscollins/sdruWiLab/sdru/+comm/SDRuTransmitter.p";
  info[440].name = "DataPortDataTypeCapiEnumT";
  info[440].dominantType = "";
  info[440].resolved =
    "[N]/home/sdruser/git/traviscollins/sdruWiLab/sdru/usrp_uhd_mapi/DataPortDataTypeCapiEnumT.m";
  info[440].fileTimeLo = 1398358298U;
  info[440].fileTimeHi = 0U;
  info[440].mFileTimeLo = 0U;
  info[440].mFileTimeHi = 0U;
  info[441].context =
    "[C]/home/sdruser/git/traviscollins/sdruWiLab/sdru/+comm/SDRuTransmitter.p";
  info[441].name = "length";
  info[441].dominantType = "double";
  info[441].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/length.m";
  info[441].fileTimeLo = 1303167806U;
  info[441].fileTimeHi = 0U;
  info[441].mFileTimeLo = 0U;
  info[441].mFileTimeHi = 0U;
  info[442].context =
    "[C]/home/sdruser/git/traviscollins/sdruWiLab/sdru/+comm/SDRuTransmitter.p";
  info[442].name = "openDataConnection";
  info[442].dominantType = "BoardIdCapiEnumT";
  info[442].resolved =
    "[E]/home/sdruser/git/traviscollins/sdruWiLab/sdru/usrp_uhd_mapi/openDataConnection.m";
  info[442].fileTimeLo = 1398358298U;
  info[442].fileTimeHi = 0U;
  info[442].mFileTimeLo = 0U;
  info[442].mFileTimeHi = 0U;
  info[443].context =
    "[E]/home/sdruser/git/traviscollins/sdruWiLab/sdru/usrp_uhd_mapi/openDataConnection.m";
  info[443].name = "mapiPrivate";
  info[443].dominantType = "BoardIdCapiEnumT";
  info[443].resolved =
    "[E]/home/sdruser/git/traviscollins/sdruWiLab/sdru/usrp_uhd_mapi/mapiPrivate.m";
  info[443].fileTimeLo = 1398358298U;
  info[443].fileTimeHi = 0U;
  info[443].mFileTimeLo = 0U;
  info[443].mFileTimeHi = 0U;
  info[444].context =
    "[E]/home/sdruser/git/traviscollins/sdruWiLab/sdru/usrp_uhd_mapi/mapiPrivate.m";
  info[444].name = "UsrpErrorCapiEnumT";
  info[444].dominantType = "double";
  info[444].resolved =
    "[N]/home/sdruser/git/traviscollins/sdruWiLab/sdru/usrp_uhd_mapi/UsrpErrorCapiEnumT.m";
  info[444].fileTimeLo = 1398358298U;
  info[444].fileTimeHi = 0U;
  info[444].mFileTimeLo = 0U;
  info[444].mFileTimeHi = 0U;
  info[445].context =
    "[E]/home/sdruser/git/traviscollins/sdruWiLab/sdru/usrp_uhd_mapi/mapiPrivate.m";
  info[445].name = "char";
  info[445].dominantType = "double";
  info[445].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/strfun/char.m";
  info[445].fileTimeLo = 1319751568U;
  info[445].fileTimeHi = 0U;
  info[445].mFileTimeLo = 0U;
  info[445].mFileTimeHi = 0U;
  info[446].context =
    "[C]/home/sdruser/git/traviscollins/sdruWiLab/sdru/+comm/+internal/SDRuBase.p";
  info[446].name = "UsrpReportMethodEnumT";
  info[446].dominantType = "";
  info[446].resolved =
    "[N]/home/sdruser/git/traviscollins/sdruWiLab/sdru/usrp_uhd_mapi/UsrpReportMethodEnumT.m";
  info[446].fileTimeLo = 1398358298U;
  info[446].fileTimeHi = 0U;
  info[446].mFileTimeLo = 0U;
  info[446].mFileTimeHi = 0U;
  info[447].context =
    "[C]/home/sdruser/git/traviscollins/sdruWiLab/sdru/+comm/+internal/SDRuBase.p";
  info[447].name = "reportSDRuStatus";
  info[447].dominantType = "UsrpErrorCapiEnumT";
  info[447].resolved =
    "[E]/home/sdruser/git/traviscollins/sdruWiLab/sdru/reportSDRuStatus.m";
  info[447].fileTimeLo = 1398358298U;
  info[447].fileTimeHi = 0U;
  info[447].mFileTimeLo = 0U;
  info[447].mFileTimeHi = 0U;
}

static void h_info_helper(ResolvedFunctionInfo info[470])
{
  info[448].context =
    "[E]/home/sdruser/git/traviscollins/sdruWiLab/sdru/reportSDRuStatus.m";
  info[448].name = "coder.internal.errorIf";
  info[448].dominantType = "char";
  info[448].resolved =
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/errorIf.m";
  info[448].fileTimeLo = 1334093538U;
  info[448].fileTimeHi = 0U;
  info[448].mFileTimeLo = 0U;
  info[448].mFileTimeHi = 0U;
  info[449].context =
    "[E]/home/sdruser/git/traviscollins/sdruWiLab/sdru/reportSDRuStatus.m";
  info[449].name = "isrow";
  info[449].dominantType = "char";
  info[449].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/isrow.m";
  info[449].fileTimeLo = 1346531960U;
  info[449].fileTimeHi = 0U;
  info[449].mFileTimeLo = 0U;
  info[449].mFileTimeHi = 0U;
  info[450].context =
    "[E]/home/sdruser/git/traviscollins/sdruWiLab/sdru/reportSDRuStatus.m";
  info[450].name = "UsrpErrorCapiEnumT";
  info[450].dominantType = "";
  info[450].resolved =
    "[N]/home/sdruser/git/traviscollins/sdruWiLab/sdru/usrp_uhd_mapi/UsrpErrorCapiEnumT.m";
  info[450].fileTimeLo = 1398358298U;
  info[450].fileTimeHi = 0U;
  info[450].mFileTimeLo = 0U;
  info[450].mFileTimeHi = 0U;
  info[451].context =
    "[E]/home/sdruser/git/traviscollins/sdruWiLab/sdru/reportSDRuStatus.m";
  info[451].name = "UsrpReportMethodEnumT";
  info[451].dominantType = "";
  info[451].resolved =
    "[N]/home/sdruser/git/traviscollins/sdruWiLab/sdru/usrp_uhd_mapi/UsrpReportMethodEnumT.m";
  info[451].fileTimeLo = 1398358298U;
  info[451].fileTimeHi = 0U;
  info[451].mFileTimeLo = 0U;
  info[451].mFileTimeHi = 0U;
  info[452].context =
    "[E]/home/sdruser/git/traviscollins/sdruWiLab/sdru/reportSDRuStatus.m";
  info[452].name = "coder.internal.warning";
  info[452].dominantType = "char";
  info[452].resolved =
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/warning.m";
  info[452].fileTimeLo = 1311277408U;
  info[452].fileTimeHi = 0U;
  info[452].mFileTimeLo = 0U;
  info[452].mFileTimeHi = 0U;
  info[453].context =
    "[E]/home/sdruser/git/traviscollins/sdruWiLab/sdru/reportSDRuStatus.m";
  info[453].name = "getSDRuDriverVersion";
  info[453].dominantType = "";
  info[453].resolved =
    "[E]/home/sdruser/git/traviscollins/sdruWiLab/sdru/usrp_uhd_mapi/getSDRuDriverVersion.m";
  info[453].fileTimeLo = 1398358298U;
  info[453].fileTimeHi = 0U;
  info[453].mFileTimeLo = 0U;
  info[453].mFileTimeHi = 0U;
  info[454].context =
    "[E]/home/sdruser/git/traviscollins/sdruWiLab/sdru/usrp_uhd_mapi/getSDRuDriverVersion.m";
  info[454].name = "mapiPrivate";
  info[454].dominantType = "char";
  info[454].resolved =
    "[E]/home/sdruser/git/traviscollins/sdruWiLab/sdru/usrp_uhd_mapi/mapiPrivate.m";
  info[454].fileTimeLo = 1398358298U;
  info[454].fileTimeHi = 0U;
  info[454].mFileTimeLo = 0U;
  info[454].mFileTimeHi = 0U;
  info[455].context =
    "[C]/home/sdruser/git/traviscollins/sdruWiLab/sdru/+comm/+internal/SDRuBase.p";
  info[455].name = "UsrpErrorCapiEnumT";
  info[455].dominantType = "";
  info[455].resolved =
    "[N]/home/sdruser/git/traviscollins/sdruWiLab/sdru/usrp_uhd_mapi/UsrpErrorCapiEnumT.m";
  info[455].fileTimeLo = 1398358298U;
  info[455].fileTimeHi = 0U;
  info[455].mFileTimeLo = 0U;
  info[455].mFileTimeHi = 0U;
  info[456].context =
    "[C]/home/sdruser/git/traviscollins/sdruWiLab/sdru/+comm/SDRuTransmitter.p";
  info[456].name = "sendInt16Data";
  info[456].dominantType = "DataPortDataTypeCapiEnumT";
  info[456].resolved =
    "[E]/home/sdruser/git/traviscollins/sdruWiLab/sdru/usrp_uhd_mapi/sendInt16Data.m";
  info[456].fileTimeLo = 1398358298U;
  info[456].fileTimeHi = 0U;
  info[456].mFileTimeLo = 0U;
  info[456].mFileTimeHi = 0U;
  info[457].context =
    "[E]/home/sdruser/git/traviscollins/sdruWiLab/sdru/usrp_uhd_mapi/sendInt16Data.m";
  info[457].name = "mapiPrivate";
  info[457].dominantType = "DataPortDataTypeCapiEnumT";
  info[457].resolved =
    "[E]/home/sdruser/git/traviscollins/sdruWiLab/sdru/usrp_uhd_mapi/mapiPrivate.m";
  info[457].fileTimeLo = 1398358298U;
  info[457].fileTimeHi = 0U;
  info[457].mFileTimeLo = 0U;
  info[457].mFileTimeHi = 0U;
  info[458].context =
    "[C]/home/sdruser/git/traviscollins/sdruWiLab/sdru/+comm/SDRuTransmitter.p";
  info[458].name = "sendComplexInt16Data";
  info[458].dominantType = "DataPortDataTypeCapiEnumT";
  info[458].resolved =
    "[E]/home/sdruser/git/traviscollins/sdruWiLab/sdru/usrp_uhd_mapi/sendComplexInt16Data.m";
  info[458].fileTimeLo = 1398358298U;
  info[458].fileTimeHi = 0U;
  info[458].mFileTimeLo = 0U;
  info[458].mFileTimeHi = 0U;
  info[459].context =
    "[E]/home/sdruser/git/traviscollins/sdruWiLab/sdru/usrp_uhd_mapi/sendComplexInt16Data.m";
  info[459].name = "mapiPrivate";
  info[459].dominantType = "DataPortDataTypeCapiEnumT";
  info[459].resolved =
    "[E]/home/sdruser/git/traviscollins/sdruWiLab/sdru/usrp_uhd_mapi/mapiPrivate.m";
  info[459].fileTimeLo = 1398358298U;
  info[459].fileTimeHi = 0U;
  info[459].mFileTimeLo = 0U;
  info[459].mFileTimeHi = 0U;
  info[460].context =
    "[C]/home/sdruser/git/traviscollins/sdruWiLab/sdru/+comm/SDRuTransmitter.p";
  info[460].name = "sendSingleData";
  info[460].dominantType = "DataPortDataTypeCapiEnumT";
  info[460].resolved =
    "[E]/home/sdruser/git/traviscollins/sdruWiLab/sdru/usrp_uhd_mapi/sendSingleData.m";
  info[460].fileTimeLo = 1398358298U;
  info[460].fileTimeHi = 0U;
  info[460].mFileTimeLo = 0U;
  info[460].mFileTimeHi = 0U;
  info[461].context =
    "[E]/home/sdruser/git/traviscollins/sdruWiLab/sdru/usrp_uhd_mapi/sendSingleData.m";
  info[461].name = "mapiPrivate";
  info[461].dominantType = "DataPortDataTypeCapiEnumT";
  info[461].resolved =
    "[E]/home/sdruser/git/traviscollins/sdruWiLab/sdru/usrp_uhd_mapi/mapiPrivate.m";
  info[461].fileTimeLo = 1398358298U;
  info[461].fileTimeHi = 0U;
  info[461].mFileTimeLo = 0U;
  info[461].mFileTimeHi = 0U;
  info[462].context =
    "[C]/home/sdruser/git/traviscollins/sdruWiLab/sdru/+comm/SDRuTransmitter.p";
  info[462].name = "sendComplexSingleData";
  info[462].dominantType = "DataPortDataTypeCapiEnumT";
  info[462].resolved =
    "[E]/home/sdruser/git/traviscollins/sdruWiLab/sdru/usrp_uhd_mapi/sendComplexSingleData.m";
  info[462].fileTimeLo = 1398358298U;
  info[462].fileTimeHi = 0U;
  info[462].mFileTimeLo = 0U;
  info[462].mFileTimeHi = 0U;
  info[463].context =
    "[E]/home/sdruser/git/traviscollins/sdruWiLab/sdru/usrp_uhd_mapi/sendComplexSingleData.m";
  info[463].name = "mapiPrivate";
  info[463].dominantType = "DataPortDataTypeCapiEnumT";
  info[463].resolved =
    "[E]/home/sdruser/git/traviscollins/sdruWiLab/sdru/usrp_uhd_mapi/mapiPrivate.m";
  info[463].fileTimeLo = 1398358298U;
  info[463].fileTimeHi = 0U;
  info[463].mFileTimeLo = 0U;
  info[463].mFileTimeHi = 0U;
  info[464].context =
    "[C]/home/sdruser/git/traviscollins/sdruWiLab/sdru/+comm/SDRuTransmitter.p";
  info[464].name = "sendDoubleData";
  info[464].dominantType = "DataPortDataTypeCapiEnumT";
  info[464].resolved =
    "[E]/home/sdruser/git/traviscollins/sdruWiLab/sdru/usrp_uhd_mapi/sendDoubleData.m";
  info[464].fileTimeLo = 1398358298U;
  info[464].fileTimeHi = 0U;
  info[464].mFileTimeLo = 0U;
  info[464].mFileTimeHi = 0U;
  info[465].context =
    "[E]/home/sdruser/git/traviscollins/sdruWiLab/sdru/usrp_uhd_mapi/sendDoubleData.m";
  info[465].name = "mapiPrivate";
  info[465].dominantType = "DataPortDataTypeCapiEnumT";
  info[465].resolved =
    "[E]/home/sdruser/git/traviscollins/sdruWiLab/sdru/usrp_uhd_mapi/mapiPrivate.m";
  info[465].fileTimeLo = 1398358298U;
  info[465].fileTimeHi = 0U;
  info[465].mFileTimeLo = 0U;
  info[465].mFileTimeHi = 0U;
  info[466].context =
    "[C]/home/sdruser/git/traviscollins/sdruWiLab/sdru/+comm/SDRuTransmitter.p";
  info[466].name = "sendComplexDoubleData";
  info[466].dominantType = "DataPortDataTypeCapiEnumT";
  info[466].resolved =
    "[E]/home/sdruser/git/traviscollins/sdruWiLab/sdru/usrp_uhd_mapi/sendComplexDoubleData.m";
  info[466].fileTimeLo = 1398358298U;
  info[466].fileTimeHi = 0U;
  info[466].mFileTimeLo = 0U;
  info[466].mFileTimeHi = 0U;
  info[467].context =
    "[E]/home/sdruser/git/traviscollins/sdruWiLab/sdru/usrp_uhd_mapi/sendComplexDoubleData.m";
  info[467].name = "mapiPrivate";
  info[467].dominantType = "DataPortDataTypeCapiEnumT";
  info[467].resolved =
    "[E]/home/sdruser/git/traviscollins/sdruWiLab/sdru/usrp_uhd_mapi/mapiPrivate.m";
  info[467].fileTimeLo = 1398358298U;
  info[467].fileTimeHi = 0U;
  info[467].mFileTimeLo = 0U;
  info[467].mFileTimeHi = 0U;
  info[468].context =
    "[C]/home/sdruser/git/traviscollins/sdruWiLab/sdru/+comm/SDRuTransmitter.p";
  info[468].name = "UsrpErrorCapiEnumT";
  info[468].dominantType = "";
  info[468].resolved =
    "[N]/home/sdruser/git/traviscollins/sdruWiLab/sdru/usrp_uhd_mapi/UsrpErrorCapiEnumT.m";
  info[468].fileTimeLo = 1398358298U;
  info[468].fileTimeHi = 0U;
  info[468].mFileTimeLo = 0U;
  info[468].mFileTimeHi = 0U;
  info[469].context =
    "[C]/home/sdruser/git/traviscollins/sdruWiLab/sdru/+comm/SDRuTransmitter.p";
  info[469].name = "error";
  info[469].dominantType = "char";
  info[469].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/lang/error.m";
  info[469].fileTimeLo = 1319751566U;
  info[469].fileTimeHi = 0U;
  info[469].mFileTimeLo = 0U;
  info[469].mFileTimeHi = 0U;
}

static void info_helper(ResolvedFunctionInfo info[470])
{
  info[0].context =
    "[E]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/testPHYTransmit.m";
  info[0].name = "CreateTXRX_TX";
  info[0].dominantType = "";
  info[0].resolved =
    "[E]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/CreateTXRX_TX.m";
  info[0].fileTimeLo = 1398358298U;
  info[0].fileTimeHi = 0U;
  info[0].mFileTimeLo = 0U;
  info[0].mFileTimeHi = 0U;
  info[1].context =
    "[E]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/CreateTXRX_TX.m";
  info[1].name = "mrdivide";
  info[1].dominantType = "double";
  info[1].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p";
  info[1].fileTimeLo = 1357973148U;
  info[1].fileTimeHi = 0U;
  info[1].mFileTimeLo = 1319751566U;
  info[1].mFileTimeHi = 0U;
  info[2].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p";
  info[2].name = "rdivide";
  info[2].dominantType = "double";
  info[2].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/rdivide.m";
  info[2].fileTimeLo = 1346531988U;
  info[2].fileTimeHi = 0U;
  info[2].mFileTimeLo = 0U;
  info[2].mFileTimeHi = 0U;
  info[3].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/rdivide.m";
  info[3].name = "eml_scalexp_compatible";
  info[3].dominantType = "double";
  info[3].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalexp_compatible.m";
  info[3].fileTimeLo = 1286840396U;
  info[3].fileTimeHi = 0U;
  info[3].mFileTimeLo = 0U;
  info[3].mFileTimeHi = 0U;
  info[4].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/rdivide.m";
  info[4].name = "eml_div";
  info[4].dominantType = "double";
  info[4].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_div.m";
  info[4].fileTimeLo = 1313369410U;
  info[4].fileTimeHi = 0U;
  info[4].mFileTimeLo = 0U;
  info[4].mFileTimeHi = 0U;
  info[5].context =
    "[E]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/CreateTXRX_TX.m";
  info[5].name = "generateOFDMSignal_TX2";
  info[5].dominantType = "char";
  info[5].resolved =
    "[PE]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/generateOFDMSignal_TX2.m";
  info[5].fileTimeLo = 1398358315U;
  info[5].fileTimeHi = 0U;
  info[5].mFileTimeLo = 0U;
  info[5].mFileTimeHi = 0U;
  info[6].context =
    "[PE]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/generateOFDMSignal_TX2.m";
  info[6].name = "length";
  info[6].dominantType = "char";
  info[6].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/length.m";
  info[6].fileTimeLo = 1303167806U;
  info[6].fileTimeHi = 0U;
  info[6].mFileTimeLo = 0U;
  info[6].mFileTimeHi = 0U;
  info[7].context =
    "[PE]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/generateOFDMSignal_TX2.m";
  info[7].name = "mpower";
  info[7].dominantType = "double";
  info[7].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mpower.m";
  info[7].fileTimeLo = 1286840442U;
  info[7].fileTimeHi = 0U;
  info[7].mFileTimeLo = 0U;
  info[7].mFileTimeHi = 0U;
  info[8].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mpower.m";
  info[8].name = "power";
  info[8].dominantType = "double";
  info[8].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/power.m";
  info[8].fileTimeLo = 1348213530U;
  info[8].fileTimeHi = 0U;
  info[8].mFileTimeLo = 0U;
  info[8].mFileTimeHi = 0U;
  info[9].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/power.m!fltpower";
  info[9].name = "eml_scalar_eg";
  info[9].dominantType = "double";
  info[9].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m";
  info[9].fileTimeLo = 1286840396U;
  info[9].fileTimeHi = 0U;
  info[9].mFileTimeLo = 0U;
  info[9].mFileTimeHi = 0U;
  info[10].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/power.m!fltpower";
  info[10].name = "eml_scalexp_alloc";
  info[10].dominantType = "double";
  info[10].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalexp_alloc.m";
  info[10].fileTimeLo = 1352446460U;
  info[10].fileTimeHi = 0U;
  info[10].mFileTimeLo = 0U;
  info[10].mFileTimeHi = 0U;
  info[11].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/power.m!fltpower";
  info[11].name = "floor";
  info[11].dominantType = "double";
  info[11].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/floor.m";
  info[11].fileTimeLo = 1343851980U;
  info[11].fileTimeHi = 0U;
  info[11].mFileTimeLo = 0U;
  info[11].mFileTimeHi = 0U;
  info[12].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/floor.m";
  info[12].name = "eml_scalar_floor";
  info[12].dominantType = "double";
  info[12].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/eml_scalar_floor.m";
  info[12].fileTimeLo = 1286840326U;
  info[12].fileTimeHi = 0U;
  info[12].mFileTimeLo = 0U;
  info[12].mFileTimeHi = 0U;
  info[13].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/power.m!scalar_float_power";
  info[13].name = "eml_scalar_eg";
  info[13].dominantType = "double";
  info[13].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m";
  info[13].fileTimeLo = 1286840396U;
  info[13].fileTimeHi = 0U;
  info[13].mFileTimeLo = 0U;
  info[13].mFileTimeHi = 0U;
  info[14].context =
    "[PE]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/generateOFDMSignal_TX2.m";
  info[14].name = "randi";
  info[14].dominantType = "double";
  info[14].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/randfun/randi.m";
  info[14].fileTimeLo = 1320911042U;
  info[14].fileTimeHi = 0U;
  info[14].mFileTimeLo = 0U;
  info[14].mFileTimeHi = 0U;
  info[15].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/randfun/randi.m";
  info[15].name = "eml_assert_valid_size_arg";
  info[15].dominantType = "double";
  info[15].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m";
  info[15].fileTimeLo = 1286840294U;
  info[15].fileTimeHi = 0U;
  info[15].mFileTimeLo = 0U;
  info[15].mFileTimeHi = 0U;
  info[16].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m!isintegral";
  info[16].name = "isinf";
  info[16].dominantType = "double";
  info[16].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isinf.m";
  info[16].fileTimeLo = 1286840360U;
  info[16].fileTimeHi = 0U;
  info[16].mFileTimeLo = 0U;
  info[16].mFileTimeHi = 0U;
  info[17].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m!numel_for_size";
  info[17].name = "mtimes";
  info[17].dominantType = "double";
  info[17].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  info[17].fileTimeLo = 1289541292U;
  info[17].fileTimeHi = 0U;
  info[17].mFileTimeLo = 0U;
  info[17].mFileTimeHi = 0U;
  info[18].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m";
  info[18].name = "eml_index_class";
  info[18].dominantType = "";
  info[18].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[18].fileTimeLo = 1323192178U;
  info[18].fileTimeHi = 0U;
  info[18].mFileTimeLo = 0U;
  info[18].mFileTimeHi = 0U;
  info[19].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m";
  info[19].name = "intmax";
  info[19].dominantType = "char";
  info[19].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/intmax.m";
  info[19].fileTimeLo = 1311276916U;
  info[19].fileTimeHi = 0U;
  info[19].mFileTimeLo = 0U;
  info[19].mFileTimeHi = 0U;
  info[20].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/randfun/randi.m";
  info[20].name = "rand";
  info[20].dominantType = "double";
  info[20].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/randfun/rand.m";
  info[20].fileTimeLo = 1313369422U;
  info[20].fileTimeHi = 0U;
  info[20].mFileTimeLo = 0U;
  info[20].mFileTimeHi = 0U;
  info[21].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/randfun/rand.m";
  info[21].name = "eml_is_rand_extrinsic";
  info[21].dominantType = "";
  info[21].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/randfun/eml_is_rand_extrinsic.m";
  info[21].fileTimeLo = 1334093090U;
  info[21].fileTimeHi = 0U;
  info[21].mFileTimeLo = 0U;
  info[21].mFileTimeHi = 0U;
  info[22].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/randfun/randi.m";
  info[22].name = "mtimes";
  info[22].dominantType = "double";
  info[22].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  info[22].fileTimeLo = 1289541292U;
  info[22].fileTimeHi = 0U;
  info[22].mFileTimeLo = 0U;
  info[22].mFileTimeHi = 0U;
  info[23].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/randfun/randi.m";
  info[23].name = "floor";
  info[23].dominantType = "double";
  info[23].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/floor.m";
  info[23].fileTimeLo = 1343851980U;
  info[23].fileTimeHi = 0U;
  info[23].mFileTimeLo = 0U;
  info[23].mFileTimeHi = 0U;
  info[24].context =
    "[PE]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/generateOFDMSignal_TX2.m";
  info[24].name = "char";
  info[24].dominantType = "double";
  info[24].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/strfun/char.m";
  info[24].fileTimeLo = 1319751568U;
  info[24].fileTimeHi = 0U;
  info[24].mFileTimeLo = 0U;
  info[24].mFileTimeHi = 0U;
  info[25].context =
    "[PE]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/generateOFDMSignal_TX2.m";
  info[25].name = "repmat";
  info[25].dominantType = "char";
  info[25].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/repmat.m";
  info[25].fileTimeLo = 1352446460U;
  info[25].fileTimeHi = 0U;
  info[25].mFileTimeLo = 0U;
  info[25].mFileTimeHi = 0U;
  info[26].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/repmat.m";
  info[26].name = "eml_assert_valid_size_arg";
  info[26].dominantType = "double";
  info[26].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m";
  info[26].fileTimeLo = 1286840294U;
  info[26].fileTimeHi = 0U;
  info[26].mFileTimeLo = 0U;
  info[26].mFileTimeHi = 0U;
  info[27].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/repmat.m";
  info[27].name = "eml_index_class";
  info[27].dominantType = "";
  info[27].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[27].fileTimeLo = 1323192178U;
  info[27].fileTimeHi = 0U;
  info[27].mFileTimeLo = 0U;
  info[27].mFileTimeHi = 0U;
  info[28].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/repmat.m";
  info[28].name = "eml_index_minus";
  info[28].dominantType = "coder.internal.indexInt";
  info[28].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_minus.m";
  info[28].fileTimeLo = 1286840378U;
  info[28].fileTimeHi = 0U;
  info[28].mFileTimeLo = 0U;
  info[28].mFileTimeHi = 0U;
  info[29].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_minus.m";
  info[29].name = "eml_index_class";
  info[29].dominantType = "";
  info[29].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[29].fileTimeLo = 1323192178U;
  info[29].fileTimeHi = 0U;
  info[29].mFileTimeLo = 0U;
  info[29].mFileTimeHi = 0U;
  info[30].context =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/System.p";
  info[30].name = "matlab.system.coder.SystemProp";
  info[30].dominantType = "unknown";
  info[30].resolved =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p";
  info[30].fileTimeLo = 1357971320U;
  info[30].fileTimeHi = 0U;
  info[30].mFileTimeLo = 0U;
  info[30].mFileTimeHi = 0U;
  info[31].context =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/System.p";
  info[31].name = "matlab.system.coder.SystemCore";
  info[31].dominantType = "unknown";
  info[31].resolved =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemCore.p";
  info[31].fileTimeLo = 1357971318U;
  info[31].fileTimeHi = 0U;
  info[31].mFileTimeLo = 0U;
  info[31].mFileTimeHi = 0U;
  info[32].context = "[IXC]$matlabroot$/toolbox/matlab/system/+matlab/System.p";
  info[32].name = "matlab.system.coder.System";
  info[32].dominantType = "unknown";
  info[32].resolved =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/System.p";
  info[32].fileTimeLo = 1357971318U;
  info[32].fileTimeHi = 0U;
  info[32].mFileTimeLo = 0U;
  info[32].mFileTimeHi = 0U;
  info[33].context = "[IXC]$matlabroot$/toolbox/matlab/system/+matlab/System.p";
  info[33].name = "matlab.system.System";
  info[33].dominantType = "unknown";
  info[33].resolved =
    "[IXC]$matlabroot$/toolbox/matlab/system/+matlab/+system/System.p";
  info[33].fileTimeLo = 1357962380U;
  info[33].fileTimeHi = 0U;
  info[33].mFileTimeLo = 0U;
  info[33].mFileTimeHi = 0U;
  info[34].context =
    "[C]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/OFDMBase.m";
  info[34].name = "matlab.System";
  info[34].dominantType = "unknown";
  info[34].resolved = "[IXC]$matlabroot$/toolbox/matlab/system/+matlab/System.p";
  info[34].fileTimeLo = 1357962380U;
  info[34].fileTimeHi = 0U;
  info[34].mFileTimeLo = 0U;
  info[34].mFileTimeHi = 0U;
  info[35].context =
    "[C]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/OFDMBase.m";
  info[35].name = "matlab.system.mixin.coder.Propagates";
  info[35].dominantType = "unknown";
  info[35].resolved =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+mixin/+coder/Propagates.p";
  info[35].fileTimeLo = 1357971320U;
  info[35].fileTimeHi = 0U;
  info[35].mFileTimeLo = 0U;
  info[35].mFileTimeHi = 0U;
  info[36].context =
    "[C]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/OFDMBase.m";
  info[36].name = "matlab.system.mixin.Propagates";
  info[36].dominantType = "unknown";
  info[36].resolved =
    "[IXC]$matlabroot$/toolbox/matlab/system/+matlab/+system/+mixin/Propagates.p";
  info[36].fileTimeLo = 1357962382U;
  info[36].fileTimeHi = 0U;
  info[36].mFileTimeLo = 0U;
  info[36].mFileTimeHi = 0U;
  info[37].context =
    "[C]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/OFDMModulator.m";
  info[37].name = "OFDMBase";
  info[37].dominantType = "unknown";
  info[37].resolved =
    "[C]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/OFDMBase.m";
  info[37].fileTimeLo = 1398358298U;
  info[37].fileTimeHi = 0U;
  info[37].mFileTimeLo = 0U;
  info[37].mFileTimeHi = 0U;
  info[38].context =
    "[PE]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/generateOFDMSignal_TX2.m";
  info[38].name = "OFDMModulator";
  info[38].dominantType = "char";
  info[38].resolved =
    "[C]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/OFDMModulator.m";
  info[38].fileTimeLo = 1398358298U;
  info[38].fileTimeHi = 0U;
  info[38].mFileTimeLo = 0U;
  info[38].mFileTimeHi = 0U;
  info[39].context =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p";
  info[39].name = "matlab.system.coder.SystemProp";
  info[39].dominantType = "";
  info[39].resolved =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p";
  info[39].fileTimeLo = 1357971320U;
  info[39].fileTimeHi = 0U;
  info[39].mFileTimeLo = 0U;
  info[39].mFileTimeHi = 0U;
  info[40].context =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p";
  info[40].name = "matlab.system.isSystemObject";
  info[40].dominantType = "char";
  info[40].resolved =
    "[IXE]$matlabroot$/toolbox/matlab/system/+matlab/+system/isSystemObject.p";
  info[40].fileTimeLo = 1357962380U;
  info[40].fileTimeHi = 0U;
  info[40].mFileTimeLo = 0U;
  info[40].mFileTimeHi = 0U;
  info[41].context =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p";
  info[41].name = "length";
  info[41].dominantType = "cell";
  info[41].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/length.m";
  info[41].fileTimeLo = 1303167806U;
  info[41].fileTimeHi = 0U;
  info[41].mFileTimeLo = 0U;
  info[41].mFileTimeHi = 0U;
  info[42].context =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p";
  info[42].name = "matlab.system.pvParse";
  info[42].dominantType = "OFDMModulator";
  info[42].resolved =
    "[IXE]$matlabroot$/toolbox/matlab/system/+matlab/+system/pvParse.p";
  info[42].fileTimeLo = 1357962380U;
  info[42].fileTimeHi = 0U;
  info[42].mFileTimeLo = 0U;
  info[42].mFileTimeHi = 0U;
  info[43].context =
    "[IXE]$matlabroot$/toolbox/matlab/system/+matlab/+system/pvParse.p";
  info[43].name = "length";
  info[43].dominantType = "cell";
  info[43].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/length.m";
  info[43].fileTimeLo = 1303167806U;
  info[43].fileTimeHi = 0U;
  info[43].mFileTimeLo = 0U;
  info[43].mFileTimeHi = 0U;
  info[44].context =
    "[IXE]$matlabroot$/toolbox/matlab/system/+matlab/+system/pvParse.p";
  info[44].name = "rem";
  info[44].dominantType = "double";
  info[44].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/rem.m";
  info[44].fileTimeLo = 1343851984U;
  info[44].fileTimeHi = 0U;
  info[44].mFileTimeLo = 0U;
  info[44].mFileTimeHi = 0U;
  info[45].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/rem.m";
  info[45].name = "eml_scalar_eg";
  info[45].dominantType = "double";
  info[45].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m";
  info[45].fileTimeLo = 1286840396U;
  info[45].fileTimeHi = 0U;
  info[45].mFileTimeLo = 0U;
  info[45].mFileTimeHi = 0U;
  info[46].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/rem.m";
  info[46].name = "eml_scalexp_alloc";
  info[46].dominantType = "double";
  info[46].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalexp_alloc.m";
  info[46].fileTimeLo = 1352446460U;
  info[46].fileTimeHi = 0U;
  info[46].mFileTimeLo = 0U;
  info[46].mFileTimeHi = 0U;
  info[47].context =
    "[C]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/OFDMBase.m";
  info[47].name = "log2";
  info[47].dominantType = "double";
  info[47].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/log2.m";
  info[47].fileTimeLo = 1343851982U;
  info[47].fileTimeHi = 0U;
  info[47].mFileTimeLo = 0U;
  info[47].mFileTimeHi = 0U;
  info[48].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/log2.m";
  info[48].name = "eml_error";
  info[48].dominantType = "char";
  info[48].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_error.m";
  info[48].fileTimeLo = 1343851958U;
  info[48].fileTimeHi = 0U;
  info[48].mFileTimeLo = 0U;
  info[48].mFileTimeHi = 0U;
  info[49].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/log2.m!scalar_log2";
  info[49].name = "realmax";
  info[49].dominantType = "char";
  info[49].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/realmax.m";
  info[49].fileTimeLo = 1307672842U;
  info[49].fileTimeHi = 0U;
  info[49].mFileTimeLo = 0U;
  info[49].mFileTimeHi = 0U;
  info[50].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/realmax.m";
  info[50].name = "eml_realmax";
  info[50].dominantType = "char";
  info[50].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_realmax.m";
  info[50].fileTimeLo = 1326749596U;
  info[50].fileTimeHi = 0U;
  info[50].mFileTimeLo = 0U;
  info[50].mFileTimeHi = 0U;
  info[51].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_realmax.m";
  info[51].name = "eml_float_model";
  info[51].dominantType = "char";
  info[51].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_float_model.m";
  info[51].fileTimeLo = 1326749596U;
  info[51].fileTimeHi = 0U;
  info[51].mFileTimeLo = 0U;
  info[51].mFileTimeHi = 0U;
  info[52].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_realmax.m";
  info[52].name = "mtimes";
  info[52].dominantType = "double";
  info[52].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  info[52].fileTimeLo = 1289541292U;
  info[52].fileTimeHi = 0U;
  info[52].mFileTimeLo = 0U;
  info[52].mFileTimeHi = 0U;
  info[53].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/log2.m!scalar_log2";
  info[53].name = "mrdivide";
  info[53].dominantType = "double";
  info[53].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p";
  info[53].fileTimeLo = 1357973148U;
  info[53].fileTimeHi = 0U;
  info[53].mFileTimeLo = 1319751566U;
  info[53].mFileTimeHi = 0U;
  info[54].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/log2.m!scalar_real_log2";
  info[54].name = "eml_guarded_inf";
  info[54].dominantType = "char";
  info[54].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_guarded_inf.m";
  info[54].fileTimeLo = 1286840376U;
  info[54].fileTimeHi = 0U;
  info[54].mFileTimeLo = 0U;
  info[54].mFileTimeHi = 0U;
  info[55].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_guarded_inf.m";
  info[55].name = "eml_is_float_class";
  info[55].dominantType = "char";
  info[55].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_is_float_class.m";
  info[55].fileTimeLo = 1286840382U;
  info[55].fileTimeHi = 0U;
  info[55].mFileTimeLo = 0U;
  info[55].mFileTimeHi = 0U;
  info[56].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/log2.m!scalar_real_log2";
  info[56].name = "eml_guarded_nan";
  info[56].dominantType = "char";
  info[56].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_guarded_nan.m";
  info[56].fileTimeLo = 1286840376U;
  info[56].fileTimeHi = 0U;
  info[56].mFileTimeLo = 0U;
  info[56].mFileTimeHi = 0U;
  info[57].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_guarded_nan.m";
  info[57].name = "eml_is_float_class";
  info[57].dominantType = "char";
  info[57].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_is_float_class.m";
  info[57].fileTimeLo = 1286840382U;
  info[57].fileTimeHi = 0U;
  info[57].mFileTimeLo = 0U;
  info[57].mFileTimeHi = 0U;
  info[58].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/log2.m!scalar_real_log2";
  info[58].name = "isfinite";
  info[58].dominantType = "double";
  info[58].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isfinite.m";
  info[58].fileTimeLo = 1286840358U;
  info[58].fileTimeHi = 0U;
  info[58].mFileTimeLo = 0U;
  info[58].mFileTimeHi = 0U;
  info[59].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isfinite.m";
  info[59].name = "isinf";
  info[59].dominantType = "double";
  info[59].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isinf.m";
  info[59].fileTimeLo = 1286840360U;
  info[59].fileTimeHi = 0U;
  info[59].mFileTimeLo = 0U;
  info[59].mFileTimeHi = 0U;
  info[60].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isfinite.m";
  info[60].name = "isnan";
  info[60].dominantType = "double";
  info[60].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isnan.m";
  info[60].fileTimeLo = 1286840360U;
  info[60].fileTimeHi = 0U;
  info[60].mFileTimeLo = 0U;
  info[60].mFileTimeHi = 0U;
  info[61].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/log2.m!scalar_frexp";
  info[61].name = "isfinite";
  info[61].dominantType = "double";
  info[61].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isfinite.m";
  info[61].fileTimeLo = 1286840358U;
  info[61].fileTimeHi = 0U;
  info[61].mFileTimeLo = 0U;
  info[61].mFileTimeHi = 0U;
  info[62].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/log2.m!scalar_real_log2";
  info[62].name = "mrdivide";
  info[62].dominantType = "double";
  info[62].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p";
  info[62].fileTimeLo = 1357973148U;
  info[62].fileTimeHi = 0U;
  info[62].mFileTimeLo = 1319751566U;
  info[62].mFileTimeHi = 0U;
  info[63].context =
    "[C]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/OFDMBase.m";
  info[63].name = "floor";
  info[63].dominantType = "double";
  info[63].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/floor.m";
  info[63].fileTimeLo = 1343851980U;
  info[63].fileTimeHi = 0U;
  info[63].mFileTimeLo = 0U;
  info[63].mFileTimeHi = 0U;
}

const mxArray *emlrtMexFcnResolvedFunctionsInfo(void)
{
  const mxArray *nameCaptureInfo;
  ResolvedFunctionInfo info[470];
  nameCaptureInfo = NULL;
  info_helper(info);
  b_info_helper(info);
  c_info_helper(info);
  d_info_helper(info);
  e_info_helper(info);
  f_info_helper(info);
  g_info_helper(info);
  h_info_helper(info);
  emlrtAssign(&nameCaptureInfo, emlrt_marshallOut(info));
  emlrtNameCapturePostProcessR2012a(emlrtAlias(nameCaptureInfo));
  return nameCaptureInfo;
}

void testPHYTransmit_api(testPHYTransmitStackData *SD)
{
  /* Invoke the target function */
  testPHYTransmit(SD);
}

/* End of code generation (testPHYTransmit_api.c) */
