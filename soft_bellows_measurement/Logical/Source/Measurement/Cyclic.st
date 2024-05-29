PROGRAM _CYCLIC
	
	TON_0(IN := measurement.timer_start, PT := INT_TO_TIME(measurement.time));
	
	CASE measurement.step OF			

		0:	
			// Waiting for Start button press
			IF measurement.start = TRUE THEN
				measurement.actual_cycle	:= 1;
				FOR i:=0 TO 3 BY 1 DO
					valve.valve[i]			:= 0;			// zero pressure to all valves
				END_FOR
				measurement.step			:= 1;
			END_IF
								
		1:
			IF measurement.start = FALSE THEN 
				FOR i:=0 TO 3 BY 1 DO
					valve.valve[i]		:= 0;			// zero pressure to all valves
				END_FOR
			ELSE
				// Set pressure for all valves	
				measurement.timer_start	:= TRUE;		// start timer
				FOR i:=0 TO 3 BY 1 DO
					measurement.pressures[i]:= measurement.desired_pressures[i]*32767/9;
					valve.valve[i]			:= REAL_TO_INT(measurement.pressures[i]);
				END_FOR
				measurement.step			:= 2;			// next step
			END_IF	
		
		2:
			// Waiting for timer
			IF TON_0.Q = TRUE THEN
				measurement.timer_start	:= FALSE;
				FOR i:=0 TO 3 BY 1 DO
					sensor.voltage[i]	:= INT_TO_REAL(sensor.bellow[i])*10/32767;
				END_FOR
				measurement.done		:= 1;
				measurement.step		:= 3;
			END_IF
		
		3: 
			// Zero valves pressure
			measurement.done			:= 0;
			FOR i:=0 TO 3 BY 1 DO
				valve.valve[i]			:= 0;
			END_FOR
			measurement.step			:= 4;
			measurement.timer_start		:= TRUE;
		
		4:
		
			//Waiting for timer
			IF TON_0.Q = TRUE THEN
				measurement.timer_start	:= FALSE;
				measurement.step		:= 1;
				measurement.actual_cycle:= measurement.actual_cycle + 1;
				IF measurement.actual_cycle > measurement.number_of_cycles THEN
					measurement.start		:= FALSE;
					measurement.step		:= 5;
				END_IF
			END_IF
			
		5:
			IF measurement.start = FALSE THEN
				measurement.step			:= 0;
			END_IF

	END_CASE
 
END_PROGRAM
