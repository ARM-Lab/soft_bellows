/*
 * generator_trajektorie_test.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "generator_trajektorie_test".
 *
 * Model version              : 1.23
 * Simulink Coder version : 9.6 (R2021b) 14-May-2021
 * C source code generated on : Fri Mar 25 13:28:48 2022
 *
 * Target selection: bur_grt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86/Pentium
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_generator_trajektorie_test_h_
#define RTW_HEADER_generator_trajektorie_test_h_
#include <math.h>
#include <stddef.h>
#include <string.h>
#ifndef generator_trajektorie_test_COMMON_INCLUDES_
#define generator_trajektorie_test_COMMON_INCLUDES_
#include <stdlib.h>
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#endif                         /* generator_trajektorie_test_COMMON_INCLUDES_ */

#include "generator_trajektorie_test_types.h"
#include "traj_lib.h"
/* Beginning of Dynamic TypeDefs: */
/* End of Dynamic TypeDefs: */
#ifndef MIN
#define MIN(a,b)	((a) < (b) ? (a) : (b))
#endif

#ifndef MAX
#define MAX(a,b)	((a) > (b) ? (a) : (b))
#endif

#ifndef AST_ROUND
#define AST_ROUND(x) ((x)>=0?(long long)((x)+0.5):(long long)((x)-0.5))
#endif


/* Shared type includes */
#include "multiword_types.h"
#include "rtGetNaN.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"
#include "rt_defines.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetBlockIO
#define rtmGetBlockIO(rtm)             ((rtm)->blockIO)
#endif

#ifndef rtmSetBlockIO
#define rtmSetBlockIO(rtm, val)        ((rtm)->blockIO = (val))
#endif

#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

#define generator_trajektorie_test_M_TYPE RT_MODEL_generator_trajektori_T

/* Block signals (default storage) */

/* Real-time Model Data Structure */

/* External data declarations for dependent source files */
extern const char *RT_MEMORY_ALLOCATION_ERROR;

/* Model entry point functions */
extern void generator_trajektorie_test_initializeMemory(RT_MODEL_generator_trajektori_T * const generator_trajektorie_test_M, struct traj* inst);
extern void generator_trajektorie_test_initialize
  (RT_MODEL_generator_trajektori_T *const generator_trajektorie_test_M, struct traj* inst);
extern void generator_trajektorie_test_step(RT_MODEL_generator_trajektori_T *
  const generator_trajektorie_test_M, struct traj* inst);
extern void generator_trajektorie_test_terminate(RT_MODEL_generator_trajektori_T
  * generator_trajektorie_test_M, struct traj* inst);

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'generator_trajektorie_test'
 * '<S1>'   : 'generator_trajektorie_test/MATLAB Function'
 */
#endif                            /* RTW_HEADER_generator_trajektorie_test_h_ */
