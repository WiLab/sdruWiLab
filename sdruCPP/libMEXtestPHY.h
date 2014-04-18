//
// MATLAB Compiler: 4.18.1 (R2013a)
// Date: Fri Apr 18 15:50:29 2014
// Arguments: "-B" "macro_default" "-v" "-W" "cpplib:libMEXtestPHY" "-T"
// "link:lib" "MEXtestPHYReceive_per.m" "MEXtestPHYTransmit.m" 
//

#ifndef __libMEXtestPHY_h
#define __libMEXtestPHY_h 1

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

#ifdef EXPORTING_libMEXtestPHY
#define PUBLIC_libMEXtestPHY_C_API __global
#else
#define PUBLIC_libMEXtestPHY_C_API /* No import statement needed. */
#endif

#define LIB_libMEXtestPHY_C_API PUBLIC_libMEXtestPHY_C_API

#elif defined(_HPUX_SOURCE)

#ifdef EXPORTING_libMEXtestPHY
#define PUBLIC_libMEXtestPHY_C_API __declspec(dllexport)
#else
#define PUBLIC_libMEXtestPHY_C_API __declspec(dllimport)
#endif

#define LIB_libMEXtestPHY_C_API PUBLIC_libMEXtestPHY_C_API


#else

#define LIB_libMEXtestPHY_C_API

#endif

/* This symbol is defined in shared libraries. Define it here
 * (to nothing) in case this isn't a shared library. 
 */
#ifndef LIB_libMEXtestPHY_C_API 
#define LIB_libMEXtestPHY_C_API /* No special import/export declaration */
#endif

extern LIB_libMEXtestPHY_C_API 
bool MW_CALL_CONV libMEXtestPHYInitializeWithHandlers(
       mclOutputHandlerFcn error_handler, 
       mclOutputHandlerFcn print_handler);

extern LIB_libMEXtestPHY_C_API 
bool MW_CALL_CONV libMEXtestPHYInitialize(void);

extern LIB_libMEXtestPHY_C_API 
void MW_CALL_CONV libMEXtestPHYTerminate(void);



extern LIB_libMEXtestPHY_C_API 
void MW_CALL_CONV libMEXtestPHYPrintStackTrace(void);

extern LIB_libMEXtestPHY_C_API 
bool MW_CALL_CONV mlxMEXtestPHYReceive_per(int nlhs, mxArray *plhs[], int nrhs, mxArray 
                                           *prhs[]);

extern LIB_libMEXtestPHY_C_API 
bool MW_CALL_CONV mlxMEXtestPHYTransmit(int nlhs, mxArray *plhs[], int nrhs, mxArray 
                                        *prhs[]);


#ifdef __cplusplus
}
#endif

#ifdef __cplusplus

/* On Windows, use __declspec to control the exported API */
#if defined(_MSC_VER) || defined(__BORLANDC__)

#ifdef EXPORTING_libMEXtestPHY
#define PUBLIC_libMEXtestPHY_CPP_API __declspec(dllexport)
#else
#define PUBLIC_libMEXtestPHY_CPP_API __declspec(dllimport)
#endif

#define LIB_libMEXtestPHY_CPP_API PUBLIC_libMEXtestPHY_CPP_API

#else

#if !defined(LIB_libMEXtestPHY_CPP_API)
#if defined(LIB_libMEXtestPHY_C_API)
#define LIB_libMEXtestPHY_CPP_API LIB_libMEXtestPHY_C_API
#else
#define LIB_libMEXtestPHY_CPP_API /* empty! */ 
#endif
#endif

#endif

extern LIB_libMEXtestPHY_CPP_API void MW_CALL_CONV MEXtestPHYReceive_per(int nargout, mwArray& result, const mwArray& decimation);

extern LIB_libMEXtestPHY_CPP_API void MW_CALL_CONV MEXtestPHYTransmit(int nargout, mwArray& result);

#endif
#endif
