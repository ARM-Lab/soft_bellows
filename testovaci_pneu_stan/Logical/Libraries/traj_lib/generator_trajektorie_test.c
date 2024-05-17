/*
 * generator_trajektorie_test.c
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

#include "generator_trajektorie_test.h"
#include "generator_trajektorie_test_private.h"

/* Model step function */
void generator_trajektorie_test_step(RT_MODEL_generator_trajektori_T *const
  generator_trajektorie_test_M, struct traj* inst)
{
  B_generator_trajektorie_test_T *generator_trajektorie_test_B =
    generator_trajektorie_test_M->blockIO;
  real_T rtb_usecka[300];
  real_T par_funkcie[100];
  real_T pocitadlo;
  int32_T b_poradie_0_1;
  int32_T i;
  real32_T a_tmp;
  real32_T b;
  real32_T b_a_tmp;
  real32_T cas_pohybu;
  real32_T pocet_skokov;
  real32_T tmp;
  boolean_T exitg1;

  /* S-Function (bur_in): '<Root>/Input1' */
  generator_trajektorie_test_B->Input1 = inst->aktualny_uhol_x;

  /* S-Function (bur_in): '<Root>/Input2' */
  generator_trajektorie_test_B->Input2 = inst->aktualny_uhol_y;

  /* S-Function (bur_in): '<Root>/Input3' */
  generator_trajektorie_test_B->Input3 = inst->pozadovany_uhol_x;

  /* S-Function (bur_in): '<Root>/Input4' */
  generator_trajektorie_test_B->Input4 = inst->pozadovany_uhol_y;

  /* S-Function (bur_in): '<Root>/Input' */
  generator_trajektorie_test_B->Input = inst->dlzka_pohybu;

  /* MATLAB Function: '<Root>/MATLAB Function' incorporates:
   *  SignalConversion generated from: '<S1>/ SFunction '
   */
  a_tmp = generator_trajektorie_test_B->Input3 -
    generator_trajektorie_test_B->Input1;
  b_a_tmp = generator_trajektorie_test_B->Input4 -
    generator_trajektorie_test_B->Input2;
  pocet_skokov = sqrtf(a_tmp * a_tmp + b_a_tmp * b_a_tmp);
  cas_pohybu = pocet_skokov * generator_trajektorie_test_B->Input / 42.4264107F;
  pocitadlo = 0.0;
  pocet_skokov = ceilf(pocet_skokov * 99.0F / 56.5685387F);
  for (i = 0; i < 100; i++) {
    par_funkcie[i] = 0.0;
  }

  for (i = 0; i < 300; i++) {
    rtb_usecka[i] = 0.0;
  }

  b = 1.0F / pocet_skokov;
  i = (int32_T)(((b - -0.5F) + 0.5F) / b);
  for (b_poradie_0_1 = 0; b_poradie_0_1 < i; b_poradie_0_1++) {
    real32_T poradie_0_1;
    poradie_0_1 = (real32_T)b_poradie_0_1 * b + -0.5F;
    pocitadlo++;
    tmp = fabsf(poradie_0_1);
    if (poradie_0_1 < 0.0F) {
      poradie_0_1 = -1.0F;
    } else if (poradie_0_1 > 0.0F) {
      poradie_0_1 = 1.0F;
    } else if (poradie_0_1 == 0.0F) {
      poradie_0_1 = 0.0F;
    } else {
      poradie_0_1 = (rtNaNF);
    }

    par_funkcie[(int32_T)pocitadlo - 1] = (poradie_0_1 * 4.0F * tmp * (1.0F -
      tmp) + 1.0F) / 2.0F;
  }

  i = 0;
  exitg1 = false;
  while ((!exitg1) && (i < 100)) {
    rtb_usecka[3 * i] = a_tmp * (real32_T)par_funkcie[i] +
      generator_trajektorie_test_B->Input1;
    rtb_usecka[3 * i + 1] = b_a_tmp * (real32_T)par_funkcie[i] +
      generator_trajektorie_test_B->Input2;
    rtb_usecka[3 * i + 2] = (((real32_T)i + 1.0F) - 1.0F) * cas_pohybu /
      (pocet_skokov + 1.0F);
    if ((real_T)i + 1.0 == pocet_skokov + 1.0F) {
      exitg1 = true;
    } else {
      i++;
    }
  }

  for (i = 0; i < 300; i++) {
    /* Gain: '<Root>/Gain' */
    generator_trajektorie_test_B->Gain[i] = (real32_T)rtb_usecka[i];
  }

  /* S-Function (bur_out): '<Root>/Output' */
  {
    real32_T *u1 = &inst->trajektoria
      [0]
      [0];

    {
      int_T i1;
      const real32_T *u0 = &generator_trajektorie_test_B->Gain[0];
      for (i1=0; i1 < 300; i1++) {
        u1[i1] = u0[i1];
      }
    }
  }

  /* MATLAB Function: '<Root>/MATLAB Function' */
  if (rtIsNaNF(pocet_skokov + 1.0F) || rtIsInfF(pocet_skokov + 1.0F)) {
    tmp = 0.0F;
  } else {
    tmp = fmodf(pocet_skokov + 1.0F, 65536.0F);
  }

  /* Gain: '<Root>/Gain1' incorporates:
   *  MATLAB Function: '<Root>/MATLAB Function'
   */
  generator_trajektorie_test_B->Gain1 = (int16_T)(tmp < 0.0F ? (int32_T)(int16_T)
    -(int16_T)(uint16_T)-tmp : (int32_T)(int16_T)(uint16_T)tmp);

  /* S-Function (bur_out): '<Root>/Output1' */
  inst->pocet_bodov_traj = generator_trajektorie_test_B->Gain1;
}

/* Model initialize function */
void generator_trajektorie_test_initialize(RT_MODEL_generator_trajektori_T *
  const generator_trajektorie_test_M, struct traj* inst)
{
  UNUSED_PARAMETER(generator_trajektorie_test_M);
}

/* Model terminate function */
void generator_trajektorie_test_terminate(RT_MODEL_generator_trajektori_T
  * generator_trajektorie_test_M, struct traj* inst)
{}

/* Model data allocation function */
void generator_trajektorie_test_initializeMemory(RT_MODEL_generator_trajektori_T* const generator_trajektorie_test_M, struct traj * inst)
{  /* block I/O */  {  }  {    B_generator_trajektorie_test_T *generator_trajektorie_test_B =      generator_trajektorie_test_M->blockIO;    /* initialize non-finites */    rt_InitInfAndNaN(sizeof(real_T));    /* block I/O */    (void) memset(((void *) generator_trajektorie_test_B), 0,                  sizeof(B_generator_trajektorie_test_T));    {      int32_T i;      for (i = 0; i < 300; i++) {        generator_trajektorie_test_B->Gain[i] = 0.0F;      }      generator_trajektorie_test_B->Input1 = 0.0F;      generator_trajektorie_test_B->Input2 = 0.0F;      generator_trajektorie_test_B->Input3 = 0.0F;      generator_trajektorie_test_B->Input4 = 0.0F;      generator_trajektorie_test_B->Input = 0.0F;    }  }}
