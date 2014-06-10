//
// MATLAB Compiler: 4.18.1 (R2013a)
// Date: Fri Apr 18 01:05:21 2014
// Arguments: "-B" "macro_default" "-W" "cpplib:libPassPointer" "-T" "link:lib"
// "-d" "/home/sdruser/git/traviscollins/sdruWiLab/PointerPasser" "-N" "-w"
// "enable:specified_file_mismatch" "-w" "enable:repeated_file" "-w"
// "enable:switch_ignored" "-w" "enable:missing_lib_sentinel" "-w"
// "enable:demo_license" "-v"
// "/home/sdruser/git/traviscollins/sdruWiLab/PointerPasser/WriteDataToPipe_wrap
// .m" 
//

#ifndef __libPassPointer_h
#define __libPassPointer_h 1

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

#ifdef EXPORTING_libPassPointer
#define PUBLIC_libPassPointer_C_API __global
#else
#define PUBLIC_libPassPointer_C_API /* No import statement needed. */
#endif

#define LIB_libPassPointer_C_API PUBLIC_libPassPointer_C_API

#elif defined(_HPUX_SOURCE)

#ifdef EXPORTING_libPassPointer
#define PUBLIC_libPassPointer_C_API __declspec(dllexport)
#else
#define PUBLIC_libPassPointer_C_API __declspec(dllimport)
#endif

#define LIB_libPassPointer_C_API PUBLIC_libPassPointer_C_API


#else

#define LIB_libPassPointer_C_API

#endif

/* This symbol is defined in shared libraries. Define it here
 * (to nothing) in case this isn't a shared library. 
 */
#ifndef LIB_libPassPointer_C_API 
#define LIB_libPassPointer_C_API /* No special import/export declaration */
#endif

extern LIB_libPassPointer_C_API 
bool MW_CALL_CONV libPassPointerInitializeWithHandlers(
       mclOutputHandlerFcn error_handler, 
       mclOutputHandlerFcn print_handler);

extern LIB_libPassPointer_C_API 
bool MW_CALL_CONV libPassPointerInitialize(void);

extern LIB_libPassPointer_C_API 
void MW_CALL_CONV libPassPointerTerminate(void);



extern LIB_libPassPointer_C_API 
void MW_CALL_CONV libPassPointerPrintStackTrace(void);

extern LIB_libPassPointer_C_API 
bool MW_CALL_CONV mlxWriteDataToPipe_wrap(int nlhs, mxArray *plhs[], int nrhs, mxArray 
                                          *prhs[]);


#ifdef __cplusplus
}
#endif

#ifdef __cplusplus

/* On Windows, use __declspec to control the exported API */
#if defined(_MSC_VER) || defined(__BORLANDC__)

#ifdef EXPORTING_libPassPointer
#define PUBLIC_libPassPointer_CPP_API __declspec(dllexport)
#else
#define PUBLIC_libPassPointer_CPP_API __declspec(dllimport)
#endif

#define LIB_libPassPointer_CPP_API PUBLIC_libPassPointer_CPP_API

#else

#if !defined(LIB_libPassPointer_CPP_API)
#if defined(LIB_libPassPointer_C_API)
#define LIB_libPassPointer_CPP_API LIB_libPassPointer_C_API
#else
#define LIB_libPassPointer_CPP_API /* empty! */ 
#endif
#endif

#endif

extern LIB_libPassPointer_CPP_API void MW_CALL_CONV WriteDataToPipe_wrap(const mwArray& pointer);

#endif
#endif
