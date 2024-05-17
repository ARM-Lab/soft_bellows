

FUNCTION_BLOCK traj   
	VAR_INPUT
		ssMethodType :  SINT;   
		aktualny_uhol_x :  REAL :=  0; (**)  
		aktualny_uhol_y :  REAL :=  0; (**)  
		pozadovany_uhol_x :  REAL :=  0; (**)  
		pozadovany_uhol_y :  REAL :=  0; (**)  
		dlzka_pohybu :  REAL :=  0; (**)  
	END_VAR
	VAR_OUTPUT
		trajektoria :  ARRAY[0..2,0..99] OF REAL :=  [300(0)]; (**)  
		pocet_bodov_traj :  INT :=  0; (**)  
	END_VAR
	VAR
		bur_B_generator_trajektorie_tes :  B_generator_trajektorie_test_T;   
		bur_generator_trajektorie_test :  tag_RTM_generator_trajektorie_T;   
	END_VAR
END_FUNCTION_BLOCK

