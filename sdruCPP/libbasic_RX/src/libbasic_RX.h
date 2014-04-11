//
// MATLAB Compiler: 4.18.1 (R2013a)
// Date: Mon Apr  7 15:06:12 2014
// Arguments: "-B" "macro_default" "-W" "cpplib:libbasic_RX" "-T" "link:lib"
// "-d" "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/libbasic_RX/src"
// "-N" "-p" "comm" "-p" "dsp" "-w" "enable:specified_file_mismatch" "-w"
// "enable:repeated_file" "-w" "enable:switch_ignored" "-w"
// "enable:missing_lib_sentinel" "-w" "enable:demo_license" "-v"
// "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/basic_RX.m"
// "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/BoardIdCapiEnumT.m" 
//

#ifndef __libbasic_RX_h
#define __libbasic_RX_h 1

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

#ifdef EXPORTING_libbasic_RX
#define PUBLIC_libbasic_RX_C_API __global
#else
#define PUBLIC_libbasic_RX_C_API /* No import statement needed. */
#endif

#define LIB_libbasic_RX_C_API PUBLIC_libbasic_RX_C_API

#elif defined(_HPUX_SOURCE)

#ifdef EXPORTING_libbasic_RX
#define PUBLIC_libbasic_RX_C_API __declspec(dllexport)
#else
#define PUBLIC_libbasic_RX_C_API __declspec(dllimport)
#endif

#define LIB_libbasic_RX_C_API PUBLIC_libbasic_RX_C_API


#else

#define LIB_libbasic_RX_C_API

#endif

/* This symbol is defined in shared libraries. Define it here
 * (to nothing) in case this isn't a shared library. 
 */
#ifndef LIB_libbasic_RX_C_API 
#define LIB_libbasic_RX_C_API /* No special import/export declaration */
#endif

extern LIB_libbasic_RX_C_API 
bool MW_CALL_CONV libbasic_RXInitializeWithHandlers(
       mclOutputHandlerFcn error_handler, 
       mclOutputHandlerFcn print_handler);

extern LIB_libbasic_RX_C_API 
bool MW_CALL_CONV libbasic_RXInitialize(void);

extern LIB_libbasic_RX_C_API 
void MW_CALL_CONV libbasic_RXTerminate(void);



extern LIB_libbasic_RX_C_API 
void MW_CALL_CONV libbasic_RXPrintStackTrace(void);

extern LIB_libbasic_RX_C_API 
bool MW_CALL_CONV mlxBasic_RX(int nlhs, mxArray *plhs[], int nrhs, mxArray *prhs[]);

extern LIB_libbasic_RX_C_API 
bool MW_CALL_CONV mlxBoardIdCapiEnumT(int nlhs, mxArray *plhs[], int nrhs, mxArray 
                                      *prhs[]);


#ifdef __cplusplus
}
#endif

#ifdef __cplusplus

/* On Windows, use __declspec to control the exported API */
#if defined(_MSC_VER) || defined(__BORLANDC__)

#ifdef EXPORTING_libbasic_RX
#define PUBLIC_libbasic_RX_CPP_API __declspec(dllexport)
#else
#define PUBLIC_libbasic_RX_CPP_API __declspec(dllimport)
#endif

#define LIB_libbasic_RX_CPP_API PUBLIC_libbasic_RX_CPP_API

#else

#if !defined(LIB_libbasic_RX_CPP_API)
#if defined(LIB_libbasic_RX_C_API)
#define LIB_libbasic_RX_CPP_API LIB_libbasic_RX_C_API
#else
#define LIB_libbasic_RX_CPP_API /* empty! */ 
#endif
#endif

#endif

extern LIB_libbasic_RX_CPP_API void MW_CALL_CONV basic_RX(int nargout, mwArray& result);

extern LIB_libbasic_RX_CPP_API void MW_CALL_CONV BoardIdCapiEnumT(int nargout, mwArray& varargout, const mwArray& varargin);

extern LIB_libbasic_RX_CPP_API void MW_CALL_CONV BoardIdCapiEnumT(int nargout, mwArray& varargout);

extern LIB_libbasic_RX_CPP_API void MW_CALL_CONV BoardIdCapiEnumT(const mwArray& varargin);

extern LIB_libbasic_RX_CPP_API void MW_CALL_CONV BoardIdCapiEnumT();

#endif
#endif
