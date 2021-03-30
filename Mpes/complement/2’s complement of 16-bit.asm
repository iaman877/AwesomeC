# ORG 7000H
	   LXI H,7251
	   MVI B,00
	   MOV A, M
	   CMA
	   ADI 01
	   STA 7253
	   JNC GO
	   INR B

GO:	   INX H
	   MOV A, M
	   CMA
	   ADD B
	   STA 7254
	   HLT
# ORG 7251H
# DB 8C, 5B
