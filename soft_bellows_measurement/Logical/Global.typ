
TYPE
	valves : 	STRUCT 
		valve : ARRAY[0..3]OF INT;
	END_STRUCT;
	sensors : 	STRUCT 
		bellow : ARRAY[0..3]OF INT;
		voltage : ARRAY[0..3]OF REAL;
	END_STRUCT;
	measurement_parameters : 	STRUCT 
		number_of_cycles : INT;
		time : INT := 1500;
		start : BOOL;
		timer_start : BOOL;
		step : INT := 0;
		desired_pressures : ARRAY[0..3]OF REAL := [3,4,5,6];
		done : INT;
		pressures : ARRAY[0..3]OF REAL;
		actual_cycle : INT := 1;
		remaining_time : INT;
	END_STRUCT;
END_TYPE
