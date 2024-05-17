/********************************************************************
 * COPYRIGHT -- B&R Industrial Automation GmbH
 ********************************************************************
 * Program: traj_lib
 * File: traj_lib.c
 * Author: MartinV
 * Last modified by: MartinV
 * Created: 25-Mar-2022 13:28:52
 * Last modified: Fri Mar 25 13:28:41 2022
 * Model Version: 1.23
 * Description: 
 * modified Comment: 
 ********************************************************************
 * Implementation of program traj_lib
 ********************************************************************
 * Generated with B&R Automation Studio Target for Simulink V6.5
 * (GRT based)
 ********************************************************************/

#include <bur/plctypes.h>

#include "rtwtypes.h"
#include "rtmodel.h"

#define EXPAND_CONCAT(name1,name2) name1 ## name2
#define CONCAT(name1,name2) EXPAND_CONCAT(name1,name2)
#define RT_MODEL            CONCAT(MODEL,_rtModel)

#ifdef __cplusplus

extern "C" {

#endif

/* Defines */
#define SS_TERMINATE 4
#define SS_OUTPUT 3
#define SS_INITIALIZE 2



#ifdef __cplusplus

}

#endif


#ifdef __cplusplus
    unsigned long bur_heap_size = 6553500;
#endif



void traj(struct traj* inst)
{
  tag_RTM_generator_trajektorie_T* const generator_trajektorie_test_M = &(inst)->bur_generator_trajektorie_test;
	inst->bur_generator_trajektorie_test.blockIO = &(inst)->bur_B_generator_trajektorie_tes;
	
  switch (inst->ssMethodType)
  {
    case SS_INITIALIZE:
	  

      /* call model initialize functions */
		/*memInit function */
		generator_trajektorie_test_initializeMemory(generator_trajektorie_test_M, inst);
		generator_trajektorie_test_initialize(generator_trajektorie_test_M, inst);
      break;

    case SS_OUTPUT:
      /* call model step functions */
		generator_trajektorie_test_step(generator_trajektorie_test_M, inst);
      break;

    case SS_TERMINATE:
      /* call model terminate function */
		generator_trajektorie_test_terminate(generator_trajektorie_test_M, inst);
	  break;
  }
}

/*****************************************************************************
   Function block sample time: 0.008
 *****************************************************************************/

/*****************************************************************************
   B&R Automation Studio Target for Simulink Version: V6.5.1 (03-Dec-2021)
 *****************************************************************************/
