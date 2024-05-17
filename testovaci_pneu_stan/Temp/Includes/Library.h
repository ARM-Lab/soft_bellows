/* Automation Studio generated header file */
/* Do not edit ! */
/* Library  */

#ifndef _LIBRARY_
#define _LIBRARY_
#ifdef __cplusplus
extern "C" 
{
#endif

#include <bur/plctypes.h>

#ifndef _BUR_PUBLIC
#define _BUR_PUBLIC
#endif
/* Datatypes and datatypes of function blocks */
typedef struct suma
{
	/* VAR_INPUT (digital) */
	plcbit a;
	plcbit b;
	/* VAR_OUTPUT (digital) */
	plcbit c;
} suma_typ;

typedef struct transf_angle2dest
{
	/* VAR_INPUT (analog) */
	double AlfaX;
	double AlfaY;
	/* VAR_OUTPUT (analog) */
	double Dist_green;
	double Dist_yellow;
	double Dist_blue;
	double Test_value;
	/* VAR (analog) */
	double A1;
	double A2;
	double A3;
	double B1;
	double blue[4][1];
	double blue1[4][1];
	struct MTLinAlgMatrixType blue1_type;
	struct MTLinAlgMatrixType blue_type;
	double Distance_blue;
	double Distance_green;
	double Distance_yellow;
	double green[4][1];
	double green1[4][1];
	struct MTLinAlgMatrixType green1_type;
	struct MTLinAlgMatrixType green_type;
	double Htransform_base[4][4];
	struct MTLinAlgMatrixType Htransform_base_type;
	double Htransform_yrelative[4][4];
	struct MTLinAlgMatrixType Htransform_yrelative_type;
	double Rx01[4][4];
	struct MTLinAlgMatrixType Rx01_type;
	double Ry12[4][4];
	struct MTLinAlgMatrixType Ry12_type;
	double Tz23[4][4];
	struct MTLinAlgMatrixType Tz23_type;
	double Tz34[4][4];
	struct MTLinAlgMatrixType Tz34_type;
	float uholx_real_test;
	float uholy_real_test;
	double yellow[4][1];
	double yellow1[4][1];
	struct MTLinAlgMatrixType yellow1_type;
	struct MTLinAlgMatrixType yellow_type;
} transf_angle2dest_typ;

typedef struct Sin_signal
{
	/* VAR_INPUT (analog) */
	float time;
	float Amplitude;
	float frequency;
	float phase;
	/* VAR_OUTPUT (analog) */
	float angle;
} Sin_signal_typ;



/* Prototyping of functions and function blocks */
_BUR_PUBLIC void suma(struct suma* inst);
_BUR_PUBLIC void transf_angle2dest(struct transf_angle2dest* inst);
_BUR_PUBLIC void Sin_signal(struct Sin_signal* inst);


#ifdef __cplusplus
};
#endif
#endif /* _LIBRARY_ */

