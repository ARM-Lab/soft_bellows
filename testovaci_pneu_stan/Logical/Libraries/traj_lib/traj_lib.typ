

TYPE
	B_generator_trajektorie_test_T :  STRUCT   
		Input1 :  REAL;   
		Input2 :  REAL;   
		Input3 :  REAL;   
		Input4 :  REAL;   
		Input :  REAL;   
		Gain :  ARRAY[0..299] OF REAL;   
		Gain1 :  INT;   
	END_STRUCT;

	tag_RTM_generator_trajektorie_T :  STRUCT   
		errorStatus :  REFERENCE TO USINT;   
		blockIO :  REFERENCE TO B_generator_trajektorie_test_T;   
	END_STRUCT;

	RT_MODEL_generator_trajektori_T :tag_RTM_generator_trajektorie_T;	(*  *)

END_TYPE
