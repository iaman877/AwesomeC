# ORG 7000H
	   LXI H,7251
	   MOV A, M
	   CMA
	   STA 7253
	   INX H
	   MOV A, M
	   CMA
	   STA 7254
	   HLT
# ORG 7251H
# DB 85,54
