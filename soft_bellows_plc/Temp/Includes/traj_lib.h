/* Automation Studio generated header file */
/* Do not edit ! */
/* traj_lib 1.00.0 */

#ifndef _TRAJ_LIB_
#define _TRAJ_LIB_
#ifdef __cplusplus
extern "C" 
{
#endif
#ifndef _traj_lib_VERSION
#define _traj_lib_VERSION 1.00.0
#endif

#include <bur/plctypes.h>

#ifndef _BUR_PUBLIC
#define _BUR_PUBLIC
#endif
/* Datatypes and datatypes of function blocks */
typedef struct B_generator_trajektorie_test_T
{	float Input1;
	float Input2;
	float Input3;
	float Input4;
	float Input;
	float Gain[300];
	signed short Gain1;
} B_generator_trajektorie_test_T;

typedef struct tag_RTM_generator_trajektorie_T
{	unsigned char* errorStatus;
	struct B_generator_trajektorie_test_T* blockIO;
} tag_RTM_generator_trajektorie_T;

typedef struct traj
{
	/* VAR_INPUT (analog) */
	signed char ssMethodType;
	float aktualny_uhol_x;
	float aktualny_uhol_y;
	float pozadovany_uhol_x;
	float pozadovany_uhol_y;
	float dlzka_pohybu;
	/* VAR_OUTPUT (analog) */
	float trajektoria[3][100];
	signed short pocet_bodov_traj;
	/* VAR (analog) */
	struct B_generator_trajektorie_test_T bur_B_generator_trajektorie_tes;
	struct tag_RTM_generator_trajektorie_T bur_generator_trajektorie_test;
} traj_typ;

typedef tag_RTM_generator_trajektorie_T RT_MODEL_generator_trajektori_T;



/* Prototyping of functions and function blocks */
_BUR_PUBLIC void traj(struct traj* inst);


#ifdef __cplusplus
};
#endif
#endif /* _TRAJ_LIB_ */

