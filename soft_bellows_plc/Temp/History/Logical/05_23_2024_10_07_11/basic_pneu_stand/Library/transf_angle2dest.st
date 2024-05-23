
(* TODO: Add your comment here *)
FUNCTION_BLOCK transf_angle2dest
	
	A1:=143.252/2;
	B1:=102.45/2;
	A2:=0.5*A1*SQRT(3);
	A3:=A1/2;
	
	AlfaX:=AlfaX*3.14159265359/180;
	AlfaY:=AlfaY*3.14159265359/180;
	
	
	Tz23[0,0]:=1; Tz23[0,1]:=0; Tz23[0,2]:=0; Tz23[0,3]:=0;
	Tz23[1,0]:=0; Tz23[1,1]:=1; Tz23[1,2]:=0; Tz23[1,3]:=0;
	Tz23[2,0]:=0; Tz23[2,1]:=0; Tz23[2,2]:=1; Tz23[2,3]:=B1;
	Tz23[3,0]:=0; Tz23[3,1]:=0; Tz23[3,2]:=0; Tz23[3,3]:=1;
			
	Tz34[0,0]:=1; Tz34[0,1]:=0; Tz34[0,2]:=0; Tz34[0,3]:=0;
	Tz34[1,0]:=0; Tz34[1,1]:=1; Tz34[1,2]:=0; Tz34[1,3]:=0;
	Tz34[2,0]:=0; Tz34[2,1]:=0; Tz34[2,2]:=1; Tz34[2,3]:=B1;
	Tz34[3,0]:=0; Tz34[3,1]:=0; Tz34[3,2]:=0; Tz34[3,3]:=1;
			
	Rx01[0,0]:=1; 		Rx01[0,1]:=0; 					Rx01[0,2]:=0; 					Rx01[0,3]:=0;
	Rx01[1,0]:=0; 		Rx01[1,1]:=COS(AlfaX); 	Rx01[1,2]:=-SIN(AlfaX); 	Rx01[1,3]:=0;
	Rx01[2,0]:=0; 		Rx01[2,1]:=SIN(AlfaX); 	Rx01[2,2]:=COS(AlfaX); 	Rx01[2,3]:=0;
	Rx01[3,0]:=0; 		Rx01[3,1]:=0; 					Rx01[3,2]:=0; 					Rx01[3,3]:=1;
			
	Ry12[0,0]:=COS(AlfaY); 		Ry12[0,1]:=0; 					Ry12[0,2]:=SIN(AlfaY); 				Ry12[0,3]:=0;
	Ry12[1,0]:=0; 							Ry12[1,1]:=1; 					Ry12[1,2]:=0; 									Ry12[1,3]:=0;
	Ry12[2,0]:=-SIN(AlfaY); 		Ry12[2,1]:=0; 					Ry12[2,2]:=COS(AlfaY); 				Ry12[2,3]:=0;
	Ry12[3,0]:=0; 							Ry12[3,1]:=0; 					Ry12[3,2]:=0; 									Ry12[3,3]:=1;
			
			
	Tz23_type.Handle := ADR(Tz23[0,0]);		Tz34_type.Handle := ADR(Tz34[0,0]);		Rx01_type.Handle := ADR(Rx01[0,0]);		Ry12_type.Handle := ADR(Ry12[0,0]);		Htransform_yrelative_type.Handle := ADR(Htransform_yrelative[0,0]);		Htransform_base_type.Handle := ADR(Htransform_base[0,0]);
	Tz23_type.Columns := 4;					Tz34_type.Columns := 4;					Rx01_type.Columns := 4;					Ry12_type.Columns := 4;					Htransform_yrelative_type.Columns := 4;											Htransform_base_type.Columns := 4;
	Tz23_type.Rows := 4;					Tz34_type.Rows := 4;					Rx01_type.Rows := 4;					Ry12_type.Rows := 4;					Htransform_yrelative_type.Rows := 4;											Htransform_base_type.Rows := 4;
						
		
	green1_type.Handle := ADR(green1[0,0]);		yellow1_type.Handle := ADR(yellow1[0,0]);		blue1_type.Handle := ADR(blue1[0,0]);
	green1_type.Columns := 1;					yellow1_type.Columns := 1;						blue1_type.Columns := 1;
	green1_type.Rows := 4;						yellow1_type.Rows := 4;							blue1_type.Rows := 4;
			
	green_type.Handle := ADR(green[0,0]);		yellow_type.Handle := ADR(yellow[0,0]);		blue_type.Handle := ADR(blue[0,0]);
	green_type.Columns := 1;					yellow_type.Columns := 1;						blue_type.Columns := 1;
	green_type.Rows := 4;						yellow_type.Rows := 4;							blue_type.Rows := 4;
		
	//transformation matrix
	MTLinAlgMatrixMultiplication(Ry12_type, Tz23_type, Htransform_base_type);		
	MTLinAlgMatrixMultiplication(Rx01_type, Htransform_base_type ,Htransform_base_type);		
	MTLinAlgMatrixMultiplication(Tz23_type, Htransform_base_type ,Htransform_base_type);
			
			
	//convert from anglee to distance
	green[0,0]:=A1;
	green[1,0]:=0;
	green[2,0]:=0;
	green[3,0]:=1;
			
	yellow[0,0]:=-A3;
	yellow[1,0]:=A2;
	yellow[2,0]:=0;
	yellow[3,0]:=1;
			
	blue[0,0]:=-A3;
	blue[1,0]:=-A2;
	blue[2,0]:=0;
	blue[3,0]:=1;
			
	MTLinAlgMatrixMultiplication(Htransform_base_type, green_type, green1_type);
	MTLinAlgMatrixMultiplication(Htransform_base_type, yellow_type, yellow1_type);
	MTLinAlgMatrixMultiplication(Htransform_base_type, blue_type, blue1_type);
			
	Dist_green:=(SQRT((green[0,0]-green1[0,0])**2+(green[1,0]-green1[1,0])**2+(green[2,0]-green1[2,0])**2)-2*B1)/1000;
		
			
	Dist_yellow:=(SQRT((yellow[0,0]-yellow1[0,0])**2+(yellow[1,0]-yellow1[1,0])**2+(yellow[2,0]-yellow1[2,0])**2)-2*B1)/1000;
			
			
	Dist_blue:=(SQRT((blue[0,0]-blue1[0,0])**2+(blue[1,0]-blue1[1,0])**2+(blue[2,0]-blue1[2,0])**2)-2*B1)/1000;
	

	
	
Test_value:=1;
	
	
END_FUNCTION_BLOCK
