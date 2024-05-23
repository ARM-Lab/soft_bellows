(********************************************************************
 * COPYRIGHT -- Bernecker + Rainer
 ********************************************************************
 * Program: Server
 * File: Server.st
 * Author: Bernecker + Rainer
 * Created: June 02, 2008
 ********************************************************************
 * Implementation of program Server
 ********************************************************************)

PROGRAM _CYCLIC


	CASE Server.sStep OF
		
		0:	(* Open UDP Port *)
			Server.UdpOpen_0.enable := 1;
			Server.UdpOpen_0.pIfAddr := 0;	(* Listen on all TCP/IP Interfaces*)
			Server.UdpOpen_0.port := 12050;	(* Port to listen*)
			Server.UdpOpen_0.options := 0;
			Server.UdpOpen_0;	(* Call the Function*)
			
			IF Server.UdpOpen_0.status = 0 THEN  (* UdpOpen successful*)
				Server.sStep := 1;	
			ELSIF Server.UdpOpen_0.status = ERR_FUB_BUSY THEN  (* UdpOpen not finished -> redo *)			
			  (* Busy *)	
			ELSE  (* Goto Error Step *)
				Server.sStep := 10;
			END_IF
			
		1:	(* Wait for Data *)
			Server.UdpRecv_0.enable := 1;
			Server.UdpRecv_0.ident := Server.UdpOpen_0.ident;	(* Client Ident from AsUDP.UDP_Open *)
			Server.UdpRecv_0.pData := ADR(Server.data_buffer);	(* Where to store the incoming data *)
			Server.UdpRecv_0.datamax := SIZEOF(Server.data_buffer);	(* Lenght of data buffer *)
			Server.UdpRecv_0.flags := 0;
			Server.UdpRecv_0.pIpAddr := ADR(Server.client_address);	(* IP Address of the Client *)
			Server.UdpRecv_0;	(* Call the Function*)
			
			IF Server.UdpRecv_0.status = 0 THEN  (* Data received *)
				Server.sStep := 2;
			ELSIF Server.UdpRecv_0.status = udpERR_NO_DATA THEN  (* No data received - wait *)
			  (* No Data received *)
			ELSIF Server.UdpRecv_0.status = ERR_FUB_BUSY THEN  (* UdpRecv not finished -> redo *)					
			  (* Busy *)
			ELSE  (* Goto Error Step *)
				Server.sStep := 10;
			END_IF
			
		2:	(* Send Data back to Client *)
			Server.UdpSend_0.enable := 1;
			Server.UdpSend_0.ident := Server.UdpOpen_0.ident;	(* Client Ident from AsUDP.UDP_Open *)
			Server.UdpSend_0.pHost := ADR(Server.client_address);	(* IP Address of the Client *)
			Server.UdpSend_0.port := Server.UdpRecv_0.port;		(* Port number of the Client *)
			Server.UdpSend_0.pData := ADR(Server.data_buffer);	(* Which data to send *)
			Server.UdpSend_0.datalen := SIZEOF(Server.data_buffer);	(* Lenght of data to send *)
			Server.UdpSend_0.flags := 0;
			Server.UdpSend_0;	(* Call the Function*)
			
			IF Server.UdpSend_0.status = 0 THEN  (* Data sent *)
				Server.sStep := 1;					   
			ELSIF Server.UdpSend_0.status = ERR_FUB_BUSY THEN  (* UdpSend not finished -> redo *)						
			  (* Busy *)
			ELSE  (* Goto Error Step *)
				Server.sStep := 10;
			END_IF
	    
		10:  (* Here some error Handling has to be implemented *)
			
	END_CASE		
			

END_PROGRAM