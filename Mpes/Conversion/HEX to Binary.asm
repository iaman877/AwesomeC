# ORG 4000 
 	   LXI H,4150 
 	   MOV A,M 
 	   INX H 
 	   MVI B,08 
 
LOOP:   RRC 
 	   JC LOOP1 
 	   MVI M,00 
 	   JMP NEXT 
 
LOOP1: MVI M,01 
 
NEXT:  INX H 
 	   DCR B 
 	   JNZ LOOP 
 	   HLT 
# ORG 4150 
# DB 5A 
