LXI H,4150 
 	   MOV A,M 
 	   SUI 30 
 	   CPI 0A 
 	   MOV M,A 
 	   JC LOOP 
 	   MVI A,FF 
LOOP:    INX H 
 	   MOV M,A 
 	   HLT 
# ORG 4150 
# DB 36 
