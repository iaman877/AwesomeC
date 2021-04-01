# ORG 4000 
 	   MVI C,00 
 	   MOV B,C 
 	   LXI H,4150 
 	   MOV A,M 
BACK:  CPI 64 
 	   JC STEP1 
 	   SUI 64 
 	   INR C 
 	   JMP BACK 
STEP1:  CPI 0A 
 	   JC STEP2 
 	   SUI 0A 
 	   INR B 
 	   JMP STEP1 
STEP2:  INX H 
 	   MOV M,C 
 	   INX H 
 	   MOV M,B 
 	   INX H 
 	   MOV M,A 
 	   HLT 
# ORG 4150 # DB A9 
