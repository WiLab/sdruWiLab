//
// MATLAB Compiler: 4.18.1 (R2013a)
// Date: Thu Mar 27 00:43:14 2014
// Arguments: "-B" "macro_default" "-W" "cpplib:libReceiver" "-T" "link:lib"
// "-d" "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/libReceiver/src"
// "-w" "enable:specified_file_mismatch" "-w" "enable:repeated_file" "-w"
// "enable:switch_ignored" "-w" "enable:missing_lib_sentinel" "-w"
// "enable:demo_license" "-v"
// "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/BoardIdCapiEnumT.m"
// "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/create_obj.m"
// "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/mccTXTest.m" 
//

#ifndef __libReceiver_h
#define __libReceiver_h 1

#if defined(__cplusplus) && !defined(mclmcrrt_h) && defined(__linux__)
#  pragma implementation "mclmcrrt.h"
#endif
#include "mclmcrrt.h"
#include "mclcppclass.h"
#ifdef __cplusplus
extern "C" {
#endif

#if defined(__SUNPRO_CC)
/* Solaris shared libraries use __global, rather than mapfiles
 * to define the API exported from a shared library. __global is
 * only necessary when building the library -- files including
 * this header file to use the library do not need the __global
 * declaration; hence the EXPORTING_<library> logic.
 */

#ifdef EXPORTING_libReceiver
#define PUBLIC_libReceiver_C_API __global
#else
#define PUBLIC_libReceiver_C_API /* No import statement needed. */
#endif

#define LIB_libReceiver_C_API PUBLIC_libReceiver_C_API

#elif defined(_HPUX_SOURCE)

#ifdef EXPORTING_libReceiver
#define PUBLIC_libReceiver_C_API __declspec(dllexport)
#else
#define PUBLIC_libReceiver_C_API __declspec(dllimport)
#endif

#define LIB_libReceiver_C_API PUBLIC_libReceiver_C_API


#else

#define LIB_libReceiver_C_API

#endif

/* This symbol is defined in shared libraries. Define it here
 * (to nothing) in case this isn't a shared library. 
 */
#ifndef LIB_libReceiver_C_API 
#define LIB_libReceiver_C_API /* No special import/export declaration */
#endif

extern LIB_libReceiver_C_API 
bool MW_CALL_CONV libReceiverInitializeWithHandlers(
       mclOutputHandlerFcn error_handler, 
       mclOutputHandlerFcn print_handler);

extern LIB_libReceiver_C_API 
bool MW_CALL_CONV libReceiverInitialize(void);

extern LIB_libReceiver_C_API 
void MW_CALL_CONV libReceiverTerminate(void);



extern LIB_libReceiver_C_API 
void MW_CALL_CONV libReceiverPrintStackTrace(void);

extern LIB_libReceiver_C_API 
bool MW_CALL_CONV mlxBoardIdCapiEnumT(int nlhs, mxArray *plhs[], int nrhs, mxArray 
                                      *prhs[]);

extern LIB_libReceiver_C_API 
bool MW_CALL_CONV mlxCreate_obj(int nlhs, mxArray *plhs[], int nrhs, mxArray *prhs[]);

extern LIB_libReceiver_C_API 
bool MW_CALL_CONV mlxMccTXTest(int nlhs, mxArray *plhs[], int nrhs, mxArray *prhs[]);


#ifdef __cplusplus
}
#endif

#ifdef __cplusplus

/* On Windows, use __declspec to control the exported API */
#if defined(_MSC_VER) || defined(__BORLANDC__)

#ifdef EXPORTING_libReceiver
#define PUBLIC_libReceiver_CPP_API __declspec(dllexport)
#else
#define PUBLIC_libReceiver_CPP_API __declspec(dllimport)
#endif

#define LIB_libReceiver_CPP_API PUBLIC_libReceiver_CPP_API

#else

#if !defined(LIB_libReceiver_CPP_API)
#if defined(LIB_libReceiver_C_API)
#define LIB_libReceiver_CPP_API LIB_libReceiver_C_API
#else
#define LIB_libReceiver_CPP_API /* empty! */ 
#endif
#endif

#endif

extern LIB_libReceiver_CPP_API void MW_CALL_CONV BoardIdCapiEnumT(int nargout, mwArray& varargout, const mwArray& varargin);

extern LIB_libReceiver_CPP_API void MW_CALL_CONV BoardIdCapiEnumT(int nargout, mwArray& varargout);

extern LIB_libReceiver_CPP_API void MW_CALL_CONV BoardIdCapiEnumT(const mwArray& varargin);

extern LIB_libReceiver_CPP_API void MW_CALL_CONV BoardIdCapiEnumT();

extern LIB_libReceiver_CPP_API void MW_CALL_CONV create_obj(int nargout, mwArray& ObjSDRuReceiver);

extern LIB_libReceiver_CPP_API void MW_CALL_CONV mccTXTest(int nargout, mwArray& value);

#endif
#endif
