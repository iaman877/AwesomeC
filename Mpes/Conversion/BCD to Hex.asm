# ORG 7000H 
 	   LXI H,7250 
 	   MOV A, M 
 	   ADD A 
 	   MOV B, A 
 	   ADD A 
 	   ADD A 
 	   ADD B 
 	   INX H 
 	   ADD M 
 	   INX H 
 	   MOV M, A 
 	   HLT 
# ORG 7250H 
# DB 02H, 09H 
