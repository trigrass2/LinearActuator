;**** Assembler File: C:\Program Files (x86)\Technosoft\ESM\Projects\SETUP9-15\CYCLE_TEST\motion.asm
;****		generated with Technosoft Motion Language Compiler
;**************************************************
	.sect "MLP"
	.global _PROG_LOAD_ADDR
_PROG_LOAD_ADDR	.set	 04000h
	.global _PROG_RUN_ADDR
_PROG_RUN_ADDR :
;***		----------	File : C:\PROGRAM FILES (X86)\TECHNOSOFT\ESM\PROJECTS\SETUP9-15\CYCLE_TEST\MOTION.TML
;*** 1	----------
;*** 2	----------
;*** 3	----------
;***		----------	BEGIN
	.global _PROG_INI
_PROG_INI :
	.word 0649Ch
;*** 4	----------
;*** 5	----------
;***		----------	File : C:\PROGRAM FILES (X86)\TECHNOSOFT\ESM\PROJECTS\SETUP9-15\CYCLE_TEST\COPY_SEQUENCE.TML
;*** 1	----------
;*** 2	----------
;*** 3	----------
;*** 4	----------
;***		----------	File : C:\PROGRAM FILES (X86)\TECHNOSOFT\ESM\PROJECTS\SETUP9-15\CYCLE_TEST\MOTION.TML
;*** 6	----------
;***		----------	File : C:\PROGRAM FILES (X86)\TECHNOSOFT\ESM\PROJECTS\SETUP9-15\CYCLE_TEST\SETUP_INTERRUPTS.TML
;*** 1	----------
;*** 2	----------
;*** 3	----------
;*** 4	----------
;***		----------	HOMINGTABLE_POINTER = HOMINGTABLE
	.word 023C1h
	.word HOMINGTABLE
;*** 5	----------
;***		----------	FUNCTIONTABLE_POINTER = FUNCTIONTABLE
	.word 023C9h
	.word FUNCTIONTABLE
;*** 6	----------
;***		----------	EXECUTEMAIN = MAINSTARTADDRESS
	.word 023BFh
	.word MAINSTARTADDRESS
;*** 7	----------
;***		----------	EXECUTEAUTOTUNING = CONTINUEWITHENDINIT
	.word 02398h
	.word CONTINUEWITHENDINIT
;*** 8	----------
;***		----------	File : C:\PROGRAM FILES (X86)\TECHNOSOFT\ESM\PROJECTS\SETUP9-15\CYCLE_TEST\MOTION.TML
;*** 7	----------
;***		----------	File : C:\PROGRAM FILES (X86)\TECHNOSOFT\ESM\PROJECTS\SETUP9-15\CYCLE_TEST\INIT_CAM.TML
;*** 1	----------
;*** 2	----------
;*** 3	----------
;*** 4	----------
;***		----------	File : C:\PROGRAM FILES (X86)\TECHNOSOFT\ESM\PROJECTS\SETUP9-15\CYCLE_TEST\MOTION.TML
;*** 8	----------
;***		----------	File : C:\PROGRAM FILES (X86)\TECHNOSOFT\ESM\PROJECTS\SETUP9-15\CYCLE_TEST\SETUP_SETTINGS.TML
;*** 1	----------
;*** 2	----------
;*** 3	----------
;*** 4	----------
;***		----------	GOTO CONTINUEWITHENDINIT, DOTMLINITIALIZATIONS, EQ
	.word 074C0h
	.word 009C0h
	.word CONTINUEWITHENDINIT
;*** 5	----------
;*** 6	----------
;***		----------	RET
	.word 00404h
;*** 7	----------
;*** 8	----------
;***		----------	CONTINUEWITHENDINIT :
	.global CONTINUEWITHENDINIT
CONTINUEWITHENDINIT :
;*** 9	----------
;*** 10	----------
;***		----------	SRB UPGRADE, 0xFFFF, 0x8000
	.word 05A57h
	.word 0FFFFh
	.word 08000h
;*** 11	----------
;*** 12	----------
;***		----------	ENDINIT
	.word 00020h
;*** 13	----------
;*** 14	----------
;***		----------	WAIT_VDC :
	.global WAIT_VDC
WAIT_VDC :
;*** 15	----------
;*** 16	----------
;***		----------	GOTO WAIT_VDC, FLAGUV, GT
	.word 07484h
	.word 002FBh
	.word WAIT_VDC
;*** 17	----------
;*** 18	----------
;***		----------	AXISON
	.word 00102h
;*** 19	----------
;*** 20	----------
;***		----------	MAINSTARTADDRESS :
	.global MAINSTARTADDRESS
MAINSTARTADDRESS :
;*** 21	----------
;*** 22	----------
;***		----------	File : C:\PROGRAM FILES (X86)\TECHNOSOFT\ESM\PROJECTS\SETUP9-15\CYCLE_TEST\MOTION.TML
;*** 9	----------
;***		----------	File : C:\PROGRAM FILES (X86)\TECHNOSOFT\ESM\PROJECTS\SETUP9-15\CYCLE_TEST\MAIN.TML
;*** 1	----------
;*** 2	----------
;*** 3	----------
;*** 4	----------
;*** 5	----------
;***		----------	SRB UPGRADE, 0xF7FF, 0x0000
	.word 05A57h
	.word 0F7FFh
	.word 00000h
;*** 6	----------
;***		----------	POSOKLIM = 0(0x0000)
	.word 0216Ah
	.word 00000h
;*** 7	----------
;***		----------	TONPOSOK = -1(0xFFFF)
	.word 0216Bh
	.word 0FFFFh
;*** 8	----------
;***		----------	!MC
	.word 0700Fh
;*** 9	----------
;***		----------	WAIT!
	.word 00408h
;*** 10	----------
;*** 11	----------
;*** 12	----------
;***		----------	CACC = 2.00000(0x00020000)
	.word 024A2h
	.word 00000h
	.word 00002h
;*** 13	----------
;***		----------	CDEC = 2.00000(0x00020000)
	.word 02658h
	.word 00000h
	.word 00002h
;*** 14	----------
;***		----------	CSPD = 666.66667(0x029AAAAB)
	.word 024A0h
	.word 0AAABh
	.word 0029Ah
;*** 15	----------
;***		----------	HOMESPD = 500.00000(0x01F40000)
	.word 02794h
	.word 00000h
	.word 001F4h
;*** 16	----------
;***		----------	HOMEPOS = 900000(0x000DBBA0)
	.word 02792h
	.word 0BBA0h
	.word 0000Dh
;*** 17	----------
;***		----------	HOMECRT = 12285(0x2FFD)
	.word 022ACh
	.word 02FFDh
;*** 18	----------
;***		----------	HOMETIME = 500(0x01F4)
	.word 022ADh
	.word 001F4h
;*** 19	----------
;*** 20	----------
;***		----------	HOMING 40(0x0028)
	.word 0EA28h
;*** 21	----------
;*** 22	----------
;***		----------	SAP 0(0x00000000)
	.word 08400h
	.word 00000h
	.word 00000h
;*** 23	----------
;*** 24	----------
;*** 25	----------
;***		----------	CACC = 2.00000(0x00020000)
	.word 024A2h
	.word 00000h
	.word 00002h
;*** 26	----------
;***		----------	CSPD = 733.33333(0x02DD5555)
	.word 024A0h
	.word 05555h
	.word 002DDh
;*** 27	----------
;***		----------	CPOS = 0(0x00000000)
	.word 0249Eh
	.word 00000h
	.word 00000h
;*** 28	----------
;***		----------	CPA
	.word 05909h
	.word 0FFFFh
	.word 02000h
;*** 29	----------
;***		----------	MODE PP
	.word 05909h
	.word 0BFC1h
	.word 08701h
;*** 30	----------
;***		----------	TUM1
	.word 05909h
	.word 0FFFFh
	.word 04000h
;*** 31	----------
;***		----------	UPD
	.word 00108h
;*** 32	----------
;***		----------	!MC
	.word 0700Fh
;***		----------	WAIT!
	.word 00408h
;*** 33	----------
;*** 34	----------
;***		----------	File : C:\PROGRAM FILES (X86)\TECHNOSOFT\ESM\PROJECTS\SETUP9-15\CYCLE_TEST\MOTION.TML
;*** 10	----------
;*** 11	----------
;***		----------	END
	.word 00001h
;*** 12	----------
;*** 13	----------
;***		----------	File : C:\PROGRAM FILES (X86)\TECHNOSOFT\ESM\PROJECTS\SETUP9-15\CYCLE_TEST\HOMINGMODES.TML
;*** 1	----------
;*** 2	----------
;*** 3	----------
;*** 4	----------
;***		----------	HOMINGTABLE :
	.global HOMINGTABLE
HOMINGTABLE :
;*** 5	----------
;***		----------	@ DEFAULT_HOME1
	.word 00029h
;*** 6	----------
;***		----------	@ DEFAULT_HOME2
	.word 00029h
;*** 7	----------
;***		----------	@ DEFAULT_HOME3
	.word 00106h
;*** 8	----------
;***		----------	@ DEFAULT_HOME4
	.word 00106h
;*** 9	----------
;***		----------	@ DEFAULT_HOME5
	.word 00106h
;*** 10	----------
;***		----------	@ DEFAULT_HOME6
	.word 00106h
;*** 11	----------
;***		----------	@ DEFAULT_HOME7
	.word 001D0h
;*** 12	----------
;***		----------	@ DEFAULT_HOME8
	.word 002E6h
;*** 13	----------
;***		----------	@ DEFAULT_HOME9
	.word 003D8h
;*** 14	----------
;***		----------	@ DEFAULT_HOME10
	.word 001D0h
;*** 15	----------
;***		----------	@ DEFAULT_HOME11
	.word 001D0h
;*** 16	----------
;***		----------	@ DEFAULT_HOME12
	.word 002E6h
;*** 17	----------
;***		----------	@ DEFAULT_HOME13
	.word 003D8h
;*** 18	----------
;***		----------	@ DEFAULT_HOME14
	.word 001D0h
;*** 19	----------
;***		----------	@0x0000
	.word 00000h
;*** 20	----------
;***		----------	@0x0000
	.word 00000h
;*** 21	----------
;***		----------	@ DEFAULT_HOME17
	.word 00029h
;*** 22	----------
;***		----------	@ DEFAULT_HOME18
	.word 00029h
;*** 23	----------
;***		----------	@ DEFAULT_HOME19
	.word 00106h
;*** 24	----------
;***		----------	@ DEFAULT_HOME20
	.word 00106h
;*** 25	----------
;***		----------	@ DEFAULT_HOME21
	.word 00106h
;*** 26	----------
;***		----------	@ DEFAULT_HOME22
	.word 00106h
;*** 27	----------
;***		----------	@ DEFAULT_HOME23
	.word 001D0h
;*** 28	----------
;***		----------	@ DEFAULT_HOME24
	.word 002E6h
;*** 29	----------
;***		----------	@ DEFAULT_HOME25
	.word 003D8h
;*** 30	----------
;***		----------	@ DEFAULT_HOME26
	.word 001D0h
;*** 31	----------
;***		----------	@ DEFAULT_HOME27
	.word 001D0h
;*** 32	----------
;***		----------	@ DEFAULT_HOME28
	.word 002E6h
;*** 33	----------
;***		----------	@ DEFAULT_HOME29
	.word 003D8h
;*** 34	----------
;***		----------	@ DEFAULT_HOME30
	.word 001D0h
;*** 35	----------
;***		----------	@0x0000
	.word 00000h
;*** 36	----------
;***		----------	@0x0000
	.word 00000h
;*** 37	----------
;***		----------	@ DEFAULT_HOME33
	.word 004CCh
;*** 38	----------
;***		----------	@ DEFAULT_HOME34
	.word 004CCh
;*** 39	----------
;***		----------	@ DEFAULT_HOME35
	.word 00509h
;*** 40	----------
;***		----------	@0x0000
	.word 00000h
;*** 41	----------
;***		----------	@ DEFAULT_HOME37
	.word 0050Bh
;*** 42	----------
;***		----------	@ DEFAULT_HOME38
	.word 0050Bh
;*** 43	----------
;***		----------	@ DEFAULT_HOME39
	.word 0050Bh
;*** 44	----------
;***		----------	@ HOME40
	.word HOME40
;*** 45	----------
;*** 46	----------
;***		----------	HOME40 :
	.global HOME40
HOME40 :
;*** 47	----------
;*** 48	----------
;*** 49	----------
;***		----------	PROD(L) = ASR
	.word 0290Eh
	.word 00201h
;*** 50	----------
;*** 51	----------
;***		----------	PROD(H) = LSACTIVE
	.word 0290Fh
	.word 00832h
;*** 52	----------
;*** 53	----------
;***		----------	VAR_LF(H) = 0(0x0000)
	.word 02169h
	.word 00000h
;*** 54	----------
;*** 55	----------
;***		----------	PRODH(H) = TERRMAX
	.word 02910h
	.word 002C6h
;*** 56	----------
;*** 57	----------
;***		----------	LSACTIVE = 1(0x0001)
	.word 02232h
	.word 00001h
;*** 58	----------
;*** 59	----------
;***		----------	SRB ASR, 0xEFFF, 0x0000
	.word 05801h
	.word 0EFFFh
	.word 00000h
;*** 60	----------
;*** 61	----------
;***		----------	VAR_LF(L) = HOMETIME
	.word 02968h
	.word 008ADh
;*** 62	----------
;*** 63	----------
;***		----------	TERRMAX = -1(0xFFFF)
	.word 020C6h
	.word 0FFFFh
;*** 64	----------
;*** 65	----------
;***		----------	GOTO H40_TSH37_HOMECRT_GT0_F, HOMECRT, GEQ
	.word 07482h
	.word 008ACh
	.word H40_TSH37_HOMECRT_GT0_F
;*** 66	----------
;*** 67	----------
;***		----------	HOMECRT = -HOMECRT
	.word 032ACh
	.word 008ACh
;*** 68	----------
;*** 69	----------
;***		----------	H40_TSH37_HOMECRT_GT0_F :
	.global H40_TSH37_HOMECRT_GT0_F
H40_TSH37_HOMECRT_GT0_F :
;*** 70	----------
;*** 71	----------
;***		----------	VAR_I3 = HOMING_NR
	.word 02B79h
	.word 009B7h
;*** 72	----------
;*** 73	----------
;***		----------	SRB VAR_I3, 0x0001, 0x0000
	.word 05B79h
	.word 00001h
	.word 00000h
;*** 74	----------
;*** 75	----------
;***		----------	GOTO H40_TSH37_NONEG1_TRANSM, TRANSMISSION, GEQ
	.word 07582h
	.word 0037Ch
	.word H40_TSH37_NONEG1_TRANSM
;*** 76	----------
;*** 77	----------
;***		----------	GOTO H40_TSH37_HOMING_ODD_INIT, VAR_I3, EQ
	.word 074C0h
	.word 00979h
	.word H40_TSH37_HOMING_ODD_INIT
;*** 78	----------
;*** 79	----------
;***		----------	GOTO H40_TSH37_HOMING_MODE_37_INIT
	.word 07400h
	.word H40_TSH37_HOMING_MODE_37_INIT
;*** 80	----------
;*** 81	----------
;***		----------	H40_TSH37_NONEG1_TRANSM :
	.global H40_TSH37_NONEG1_TRANSM
H40_TSH37_NONEG1_TRANSM :
;*** 82	----------
;*** 83	----------
;***		----------	GOTO H40_TSH37_HOMING_MODE_37_INIT, VAR_I3, EQ
	.word 074C0h
	.word 00979h
	.word H40_TSH37_HOMING_MODE_37_INIT
;*** 84	----------
;*** 85	----------
;***		----------	H40_TSH37_HOMING_ODD_INIT :
	.global H40_TSH37_HOMING_ODD_INIT
H40_TSH37_HOMING_ODD_INIT :
;*** 86	----------
;*** 87	----------
;***		----------	CPOS = -1000000000(0xC4653600)
	.word 0249Eh
	.word 03600h
	.word 0C465h
;*** 88	----------
;*** 89	----------
;*** 90	----------
;***		----------	CPR
	.word 05909h
	.word 0DFFFh
	.word 00000h
;*** 91	----------
;***		----------	MODE PP
	.word 05909h
	.word 0BFC1h
	.word 08701h
;*** 92	----------
;***		----------	TUM1
	.word 05909h
	.word 0FFFFh
	.word 04000h
;*** 93	----------
;***		----------	UPD
	.word 00108h
;*** 94	----------
;*** 95	----------
;***		----------	VAR_I2 = SCR
	.word 02967h
	.word 00300h
;*** 96	----------
;*** 97	----------
;***		----------	SRB VAR_I2, 0x4000, 0x0000
	.word 05967h
	.word 04000h
	.word 00000h
;*** 98	----------
;*** 99	----------
;***		----------	GOTO H40_TSH37_WAITCURRENT_NEGMOT, VAR_I2, EQ
	.word 074C0h
	.word 00367h
	.word H40_TSH37_WAITCURRENT_NEGMOT
;*** 100	----------
;*** 101	----------
;***		----------	VAR_I2 = OSR
	.word 02967h
	.word 00302h
;*** 102	----------
;*** 103	----------
;***		----------	SRB VAR_I2, 0x0400, 0x0000
	.word 05967h
	.word 00400h
	.word 00000h
;*** 104	----------
;*** 105	----------
;***		----------	GOTO H40_TSH37_WAITCURRENT_NEGMOT, VAR_I2, NEQ
	.word 074A0h
	.word 00367h
	.word H40_TSH37_WAITCURRENT_NEGMOT
;*** 106	----------
;*** 107	----------
;***		----------	VAR_I2 = OSR
	.word 02967h
	.word 00302h
;*** 108	----------
;*** 109	----------
;***		----------	SRB VAR_I2, 0x1000, 0x0000
	.word 05967h
	.word 01000h
	.word 00000h
;*** 110	----------
;*** 111	----------
;***		----------	GOTO H40_TSH37_WAITPOSERR_NEGATIVE, VAR_I2, NEQ
	.word 074A0h
	.word 00367h
	.word H40_TSH37_WAITPOSERR_NEGATIVE
;*** 112	----------
;*** 113	----------
;***		----------	GOTO H40_TSH37_WAITPOSERR_POSITIVE
	.word 07400h
	.word H40_TSH37_WAITPOSERR_POSITIVE
;*** 114	----------
;*** 115	----------
;***		----------	H40_TSH37_HOMING_MODE_37_INIT :
	.global H40_TSH37_HOMING_MODE_37_INIT
H40_TSH37_HOMING_MODE_37_INIT :
;*** 116	----------
;*** 117	----------
;***		----------	CPOS = 1000000000(0x3B9ACA00)
	.word 0249Eh
	.word 0CA00h
	.word 03B9Ah
;*** 118	----------
;*** 119	----------
;*** 120	----------
;***		----------	CPR
	.word 05909h
	.word 0DFFFh
	.word 00000h
;*** 121	----------
;***		----------	MODE PP
	.word 05909h
	.word 0BFC1h
	.word 08701h
;*** 122	----------
;***		----------	TUM1
	.word 05909h
	.word 0FFFFh
	.word 04000h
;*** 123	----------
;***		----------	UPD
	.word 00108h
;*** 124	----------
;*** 125	----------
;***		----------	VAR_I2 = SCR
	.word 02967h
	.word 00300h
;*** 126	----------
;*** 127	----------
;***		----------	SRB VAR_I2, 0x4000, 0x0000
	.word 05967h
	.word 04000h
	.word 00000h
;*** 128	----------
;*** 129	----------
;***		----------	GOTO H40_TSH37_WAITCURRENT_POSMOT, VAR_I2, EQ
	.word 074C0h
	.word 00367h
	.word H40_TSH37_WAITCURRENT_POSMOT
;*** 130	----------
;*** 131	----------
;***		----------	VAR_I2 = OSR
	.word 02967h
	.word 00302h
;*** 132	----------
;*** 133	----------
;***		----------	SRB VAR_I2, 0x0400, 0x0000
	.word 05967h
	.word 00400h
	.word 00000h
;*** 134	----------
;*** 135	----------
;***		----------	GOTO H40_TSH37_WAITCURRENT_POSMOT, VAR_I2, NEQ
	.word 074A0h
	.word 00367h
	.word H40_TSH37_WAITCURRENT_POSMOT
;*** 136	----------
;*** 137	----------
;***		----------	GOTO H40_TSH37_WAITPOSERR_POSITIVE
	.word 07400h
	.word H40_TSH37_WAITPOSERR_POSITIVE
;*** 138	----------
;*** 139	----------
;***		----------	H40_TSH37_WAITCURRENT_NEGMOT :
	.global H40_TSH37_WAITCURRENT_NEGMOT
H40_TSH37_WAITCURRENT_NEGMOT :
;*** 140	----------
;*** 141	----------
;***		----------	VAR_I3 = HOMECRT
	.word 02B79h
	.word 008ACh
;*** 142	----------
;*** 143	----------
;***		----------	VAR_I3 += IQREF
	.word 04379h
	.word 0022Fh
;*** 144	----------
;*** 145	----------
;***		----------	GOTO H40_TSH37_WAITCURRENT_NEGMOT, VAR_I3, GT
	.word 07484h
	.word 00979h
	.word H40_TSH37_WAITCURRENT_NEGMOT
;*** 146	----------
;*** 147	----------
;*** 148	----------
;***		----------	!RT VAR_LF
	.word 071B9h
	.word 002C2h
	.word 00368h
;*** 149	----------
;***		----------	WAIT!
	.word 00408h
;*** 150	----------
;*** 151	----------
;***		----------	VAR_I3 = HOMECRT
	.word 02B79h
	.word 008ACh
;*** 152	----------
;*** 153	----------
;***		----------	VAR_I3 += IQREF
	.word 04379h
	.word 0022Fh
;*** 154	----------
;*** 155	----------
;***		----------	GOTO H40_TSH37_WAITCURRENT_NEGMOT, VAR_I3, GT
	.word 07484h
	.word 00979h
	.word H40_TSH37_WAITCURRENT_NEGMOT
;*** 156	----------
;*** 157	----------
;***		----------	GOTO H40_TSH37_STOPMOTION
	.word 07400h
	.word H40_TSH37_STOPMOTION
;*** 158	----------
;*** 159	----------
;***		----------	H40_TSH37_WAITCURRENT_POSMOT :
	.global H40_TSH37_WAITCURRENT_POSMOT
H40_TSH37_WAITCURRENT_POSMOT :
;*** 160	----------
;*** 161	----------
;***		----------	VAR_I3 = HOMECRT
	.word 02B79h
	.word 008ACh
;*** 162	----------
;*** 163	----------
;***		----------	VAR_I3 -= IQREF
	.word 05379h
	.word 0022Fh
;*** 164	----------
;*** 165	----------
;***		----------	GOTO H40_TSH37_WAITCURRENT_POSMOT, VAR_I3, GT
	.word 07484h
	.word 00979h
	.word H40_TSH37_WAITCURRENT_POSMOT
;*** 166	----------
;*** 167	----------
;*** 168	----------
;***		----------	!RT VAR_LF
	.word 071B9h
	.word 002C2h
	.word 00368h
;*** 169	----------
;***		----------	WAIT!
	.word 00408h
;*** 170	----------
;*** 171	----------
;***		----------	VAR_I3 = HOMECRT
	.word 02B79h
	.word 008ACh
;*** 172	----------
;*** 173	----------
;***		----------	VAR_I3 -= IQREF
	.word 05379h
	.word 0022Fh
;*** 174	----------
;*** 175	----------
;***		----------	GOTO H40_TSH37_WAITCURRENT_POSMOT, VAR_I3, GT
	.word 07484h
	.word 00979h
	.word H40_TSH37_WAITCURRENT_POSMOT
;*** 176	----------
;*** 177	----------
;***		----------	GOTO H40_TSH37_STOPMOTION
	.word 07400h
	.word H40_TSH37_STOPMOTION
;*** 178	----------
;*** 179	----------
;***		----------	H40_TSH37_WAITPOSERR_NEGATIVE :
	.global H40_TSH37_WAITPOSERR_NEGATIVE
H40_TSH37_WAITPOSERR_NEGATIVE :
;*** 180	----------
;*** 181	----------
;***		----------	VAR_I3 = ERRMAX
	.word 02B79h
	.word 002C5h
;*** 182	----------
;*** 183	----------
;***		----------	VAR_I3 += POSERR
	.word 04379h
	.word 0022Ah
;*** 184	----------
;*** 185	----------
;***		----------	GOTO H40_TSH37_WAITPOSERR_NEGATIVE, VAR_I3, GT
	.word 07484h
	.word 00979h
	.word H40_TSH37_WAITPOSERR_NEGATIVE
;*** 186	----------
;*** 187	----------
;*** 188	----------
;***		----------	!RT VAR_LF
	.word 071B9h
	.word 002C2h
	.word 00368h
;*** 189	----------
;***		----------	WAIT!
	.word 00408h
;*** 190	----------
;*** 191	----------
;***		----------	VAR_I3 = ERRMAX
	.word 02B79h
	.word 002C5h
;*** 192	----------
;*** 193	----------
;***		----------	VAR_I3 += POSERR
	.word 04379h
	.word 0022Ah
;*** 194	----------
;*** 195	----------
;***		----------	GOTO H40_TSH37_WAITPOSERR_NEGATIVE, VAR_I3, GT
	.word 07484h
	.word 00979h
	.word H40_TSH37_WAITPOSERR_NEGATIVE
;*** 196	----------
;*** 197	----------
;***		----------	GOTO H40_TSH37_STOPMOTION
	.word 07400h
	.word H40_TSH37_STOPMOTION
;*** 198	----------
;*** 199	----------
;***		----------	H40_TSH37_WAITPOSERR_POSITIVE :
	.global H40_TSH37_WAITPOSERR_POSITIVE
H40_TSH37_WAITPOSERR_POSITIVE :
;*** 200	----------
;*** 201	----------
;***		----------	VAR_I3 = ERRMAX
	.word 02B79h
	.word 002C5h
;*** 202	----------
;*** 203	----------
;***		----------	VAR_I3 -= POSERR
	.word 05379h
	.word 0022Ah
;*** 204	----------
;*** 205	----------
;***		----------	GOTO H40_TSH37_WAITPOSERR_POSITIVE, VAR_I3, GT
	.word 07484h
	.word 00979h
	.word H40_TSH37_WAITPOSERR_POSITIVE
;*** 206	----------
;*** 207	----------
;*** 208	----------
;***		----------	!RT VAR_LF
	.word 071B9h
	.word 002C2h
	.word 00368h
;*** 209	----------
;***		----------	WAIT!
	.word 00408h
;*** 210	----------
;*** 211	----------
;***		----------	VAR_I3 = ERRMAX
	.word 02B79h
	.word 002C5h
;*** 212	----------
;*** 213	----------
;***		----------	VAR_I3 -= POSERR
	.word 05379h
	.word 0022Ah
;*** 214	----------
;*** 215	----------
;***		----------	GOTO H40_TSH37_WAITPOSERR_POSITIVE, VAR_I3, GT
	.word 07484h
	.word 00979h
	.word H40_TSH37_WAITPOSERR_POSITIVE
;*** 216	----------
;*** 217	----------
;***		----------	H40_TSH37_STOPMOTION :
	.global H40_TSH37_STOPMOTION
H40_TSH37_STOPMOTION :
;*** 218	----------
;*** 219	----------
;***		----------	QUICKSTOPS = 1(0x0001)
	.word 0222Fh
	.word 00001h
;*** 220	----------
;*** 221	----------
;***		----------	!MC
	.word 0700Fh
;***		----------	WAIT!
	.word 00408h
;*** 222	----------
;***		----------	VAR_I3 = HOMING_NR
	.word 02B79h
	.word 009B7h
;*** 223	----------
;*** 224	----------
;***		----------	VAR_I3 -= 39(0x0027)
	.word 04B79h
	.word 00027h
;*** 225	----------
;*** 226	----------
;***		----------	GOTO H40_TSH37_HOMING_39_OR_40, VAR_I3, GEQ
	.word 07482h
	.word 00979h
	.word H40_TSH37_HOMING_39_OR_40
;*** 227	----------
;*** 228	----------
;***		----------	SRB ASR, 0xFFFF, 0x0048
	.word 05801h
	.word 0FFFFh
	.word 00048h
;*** 229	----------
;*** 230	----------
;***		----------	CPOS = -CPOS
	.word 0349Eh
	.word 0029Eh
;*** 231	----------
;*** 232	----------
;***		----------	CSPD = HOMESPD
	.word 02CA0h
	.word 00994h
;*** 233	----------
;*** 234	----------
;*** 235	----------
;***		----------	CPR
	.word 05909h
	.word 0DFFFh
	.word 00000h
;*** 236	----------
;***		----------	MODE PP
	.word 05909h
	.word 0BFC1h
	.word 08701h
;*** 237	----------
;***		----------	UPD
	.word 00108h
;*** 238	----------
;*** 239	----------
;***		----------	H40_TSH37_WAITINDEX :
	.global H40_TSH37_WAITINDEX
H40_TSH37_WAITINDEX :
;*** 240	----------
;*** 241	----------
;***		----------	VAR_I3 = SCR
	.word 02B79h
	.word 00300h
;*** 242	----------
;*** 243	----------
;***		----------	SRB VAR_I3, 0x0400, 0x0000
	.word 05B79h
	.word 00400h
	.word 00000h
;*** 244	----------
;*** 245	----------
;***		----------	GOTO H40_THS37_WAITINDEX_ONFDBK2, VAR_I3, GT
	.word 07484h
	.word 00979h
	.word H40_THS37_WAITINDEX_ONFDBK2
;*** 246	----------
;*** 247	----------
;*** 248	----------
;***		----------	DISCAPI
	.word 00481h
;*** 249	----------
;***		----------	!CAP
	.word 0700Eh
;*** 250	----------
;***		----------	ENCAPI1
	.word 00501h
;*** 251	----------
;***		----------	WAIT!
	.word 00408h
;*** 252	----------
;*** 253	----------
;***		----------	CPOS = CAPPOS
	.word 02C9Eh
	.word 002BCh
;*** 254	----------
;*** 255	----------
;***		----------	GOTO H40_THS37_WAITINDEX_ONFDBK1
	.word 07400h
	.word H40_THS37_WAITINDEX_ONFDBK1
;*** 256	----------
;*** 257	----------
;***		----------	H40_THS37_WAITINDEX_ONFDBK2 :
	.global H40_THS37_WAITINDEX_ONFDBK2
H40_THS37_WAITINDEX_ONFDBK2 :
;*** 258	----------
;*** 259	----------
;*** 260	----------
;***		----------	DIS2CAPI
	.word 004A0h
;*** 261	----------
;***		----------	!CAP
	.word 0700Eh
;*** 262	----------
;***		----------	EN2CAPI1
	.word 00520h
;*** 263	----------
;***		----------	WAIT!
	.word 00408h
;*** 264	----------
;*** 265	----------
;***		----------	CPOS = CAPPOS2
	.word 02C9Eh
	.word 0081Eh
;*** 266	----------
;*** 267	----------
;***		----------	H40_THS37_WAITINDEX_ONFDBK1 :
	.global H40_THS37_WAITINDEX_ONFDBK1
H40_THS37_WAITINDEX_ONFDBK1 :
;*** 268	----------
;*** 269	----------
;***		----------	CSPD = HOMESPD
	.word 02CA0h
	.word 00994h
;*** 270	----------
;*** 271	----------
;*** 272	----------
;***		----------	CPA
	.word 05909h
	.word 0FFFFh
	.word 02000h
;*** 273	----------
;***		----------	MODE PP
	.word 05909h
	.word 0BFC1h
	.word 08701h
;*** 274	----------
;***		----------	TUM1
	.word 05909h
	.word 0FFFFh
	.word 04000h
;*** 275	----------
;***		----------	UPD
	.word 00108h
;*** 276	----------
;***		----------	!MC
	.word 0700Fh
;***		----------	WAIT!
	.word 00408h
;*** 277	----------
;*** 278	----------
;***		----------	GOTO H40_TSH37_EXIT_HOMING
	.word 07400h
	.word H40_TSH37_EXIT_HOMING
;*** 279	----------
;*** 280	----------
;***		----------	H40_TSH37_HOMING_39_OR_40 :
	.global H40_TSH37_HOMING_39_OR_40
H40_TSH37_HOMING_39_OR_40 :
;*** 281	----------
;*** 282	----------
;***		----------	VAR_I3 = HOMING_NR
	.word 02B79h
	.word 009B7h
;*** 283	----------
;*** 284	----------
;***		----------	SRB VAR_I3, 0x0001, 0x0000
	.word 05B79h
	.word 00001h
	.word 00000h
;*** 285	----------
;*** 286	----------
;***		----------	GOTO H40_TSH37_NONEG2_TRANSM, TRANSMISSION, GEQ
	.word 07582h
	.word 0037Ch
	.word H40_TSH37_NONEG2_TRANSM
;*** 287	----------
;*** 288	----------
;***		----------	GOTO H40_TSH37_HOMING_ODD2, VAR_I3, EQ
	.word 074C0h
	.word 00979h
	.word H40_TSH37_HOMING_ODD2
;*** 289	----------
;*** 290	----------
;***		----------	GOTO H40_TSH37_HOMING_NR_EVEN_F
	.word 07400h
	.word H40_TSH37_HOMING_NR_EVEN_F
;*** 291	----------
;*** 292	----------
;***		----------	H40_TSH37_NONEG2_TRANSM :
	.global H40_TSH37_NONEG2_TRANSM
H40_TSH37_NONEG2_TRANSM :
;*** 293	----------
;*** 294	----------
;***		----------	GOTO H40_TSH37_HOMING_NR_EVEN_F, VAR_I3, EQ
	.word 074C0h
	.word 00979h
	.word H40_TSH37_HOMING_NR_EVEN_F
;*** 295	----------
;*** 296	----------
;***		----------	H40_TSH37_HOMING_ODD2 :
	.global H40_TSH37_HOMING_ODD2
H40_TSH37_HOMING_ODD2 :
;*** 297	----------
;*** 298	----------
;***		----------	CPOS = HOMEPOS
	.word 02C9Eh
	.word 00992h
;*** 299	----------
;*** 300	----------
;***		----------	GOTO H40_TSH37_MOVEAWAY_F, CPOS, GEQ
	.word 07582h
	.word 0029Eh
	.word H40_TSH37_MOVEAWAY_F
;*** 301	----------
;*** 302	----------
;***		----------	CPOS = -HOMEPOS
	.word 0349Eh
	.word 00992h
;*** 303	----------
;*** 304	----------
;***		----------	GOTO H40_TSH37_MOVEAWAY_F
	.word 07400h
	.word H40_TSH37_MOVEAWAY_F
;*** 305	----------
;*** 306	----------
;***		----------	H40_TSH37_HOMING_NR_EVEN_F :
	.global H40_TSH37_HOMING_NR_EVEN_F
H40_TSH37_HOMING_NR_EVEN_F :
;*** 307	----------
;*** 308	----------
;***		----------	CPOS = HOMEPOS
	.word 02C9Eh
	.word 00992h
;*** 309	----------
;*** 310	----------
;***		----------	GOTO H40_TSH37_MOVEAWAY_F, CPOS, LT
	.word 07590h
	.word 0029Eh
	.word H40_TSH37_MOVEAWAY_F
;*** 311	----------
;*** 312	----------
;***		----------	CPOS = -HOMEPOS
	.word 0349Eh
	.word 00992h
;*** 313	----------
;*** 314	----------
;***		----------	H40_TSH37_MOVEAWAY_F :
	.global H40_TSH37_MOVEAWAY_F
H40_TSH37_MOVEAWAY_F :
;*** 315	----------
;*** 316	----------
;***		----------	SRB ASR, 0xFFFF, 0x0048
	.word 05801h
	.word 0FFFFh
	.word 00048h
;*** 317	----------
;*** 318	----------
;***		----------	CSPD = HOMESPD
	.word 02CA0h
	.word 00994h
;*** 319	----------
;*** 320	----------
;***		----------	SAP 0(0x00000000)
	.word 08400h
	.word 00000h
	.word 00000h
;*** 321	----------
;*** 322	----------
;*** 323	----------
;***		----------	CPR
	.word 05909h
	.word 0DFFFh
	.word 00000h
;*** 324	----------
;***		----------	MODE PP
	.word 05909h
	.word 0BFC1h
	.word 08701h
;*** 325	----------
;***		----------	UPD
	.word 00108h
;*** 326	----------
;***		----------	!MC
	.word 0700Fh
;***		----------	WAIT!
	.word 00408h
;*** 327	----------
;*** 328	----------
;***		----------	H40_TSH37_EXIT_HOMING :
	.global H40_TSH37_EXIT_HOMING
H40_TSH37_EXIT_HOMING :
;*** 329	----------
;*** 330	----------
;***		----------	SAP HOMEPOS
	.word 08392h
;*** 331	----------
;*** 332	----------
;***		----------	ASR = PROD(L)
	.word 02801h
	.word 0030Eh
;*** 333	----------
;*** 334	----------
;***		----------	LSACTIVE = PROD(H)
	.word 02A32h
	.word 0030Fh
;*** 335	----------
;*** 336	----------
;***		----------	TERRMAX = PRODH(H)
	.word 028C6h
	.word 00310h
;*** 337	----------
;*** 338	----------
;***		----------	RET
	.word 00404h
;*** 339	----------
;*** 340	----------
;***		----------	File : C:\PROGRAM FILES (X86)\TECHNOSOFT\ESM\PROJECTS\SETUP9-15\CYCLE_TEST\MOTION.TML
;*** 14	----------
;***		----------	File : C:\PROGRAM FILES (X86)\TECHNOSOFT\ESM\PROJECTS\SETUP9-15\CYCLE_TEST\FUNCTIONS.TML
;*** 1	----------
;*** 2	----------
;*** 3	----------
;*** 4	----------
;***		----------	FUNCTIONTABLE :
	.global FUNCTIONTABLE
FUNCTIONTABLE :
;*** 5	----------
;***		----------	@ MOVEPLUS_ZERO
	.word MOVEPLUS_ZERO
;*** 6	----------
;***		----------	@ MOVEMINUS_ZERO
	.word MOVEMINUS_ZERO
;*** 7	----------
;***		----------	@0x0000
	.word 00000h
;*** 8	----------
;***		----------	@0x0000
	.word 00000h
;*** 9	----------
;***		----------	@0x0000
	.word 00000h
;*** 10	----------
;***		----------	@0x0000
	.word 00000h
;*** 11	----------
;***		----------	@0x0000
	.word 00000h
;*** 12	----------
;***		----------	@0x0000
	.word 00000h
;*** 13	----------
;***		----------	@0x0000
	.word 00000h
;*** 14	----------
;***		----------	@0x0000
	.word 00000h
;*** 15	----------
;*** 16	----------
;***		----------	MOVEPLUS_ZERO :
	.global MOVEPLUS_ZERO
MOVEPLUS_ZERO :
;*** 17	----------
;*** 18	----------
;***		----------	CACC = 0.39999(0x00006666)
	.word 024A2h
	.word 06666h
	.word 00000h
;*** 19	----------
;***		----------	CSPD = 250.00000(0x00FA0000)
	.word 024A0h
	.word 00000h
	.word 000FAh
;*** 20	----------
;***		----------	CPOS = 60000(0x0000EA60)
	.word 0249Eh
	.word 0EA60h
	.word 00000h
;*** 21	----------
;***		----------	CPR
	.word 05909h
	.word 0DFFFh
	.word 00000h
;*** 22	----------
;***		----------	MODE PP
	.word 05909h
	.word 0BFC1h
	.word 08701h
;*** 23	----------
;***		----------	TUM1
	.word 05909h
	.word 0FFFFh
	.word 04000h
;*** 24	----------
;***		----------	UPD
	.word 00108h
;*** 25	----------
;***		----------	!MC
	.word 0700Fh
;***		----------	WAIT!
	.word 00408h
;*** 26	----------
;*** 27	----------
;***		----------	SAP 0(0x00000000)
	.word 08400h
	.word 00000h
	.word 00000h
;*** 28	----------
;*** 29	----------
;*** 30	----------
;***		----------	CPOS = 0(0x00000000)
	.word 0249Eh
	.word 00000h
	.word 00000h
;*** 31	----------
;***		----------	CPA
	.word 05909h
	.word 0FFFFh
	.word 02000h
;*** 32	----------
;***		----------	MODE PP
	.word 05909h
	.word 0BFC1h
	.word 08701h
;*** 33	----------
;***		----------	TUM1
	.word 05909h
	.word 0FFFFh
	.word 04000h
;*** 34	----------
;***		----------	UPD
	.word 00108h
;*** 35	----------
;***		----------	!MC
	.word 0700Fh
;***		----------	WAIT!
	.word 00408h
;*** 36	----------
;*** 37	----------
;***		----------	RET
	.word 00404h
;*** 38	----------
;*** 39	----------
;***		----------	MOVEMINUS_ZERO :
	.global MOVEMINUS_ZERO
MOVEMINUS_ZERO :
;*** 40	----------
;*** 41	----------
;***		----------	CACC = 0.39999(0x00006666)
	.word 024A2h
	.word 06666h
	.word 00000h
;*** 42	----------
;***		----------	CSPD = 66.66667(0x0042AAAB)
	.word 024A0h
	.word 0AAABh
	.word 00042h
;*** 43	----------
;***		----------	CPOS = -40000(0xFFFF63C0)
	.word 0249Eh
	.word 063C0h
	.word 0FFFFh
;*** 44	----------
;***		----------	CPR
	.word 05909h
	.word 0DFFFh
	.word 00000h
;*** 45	----------
;***		----------	MODE PP
	.word 05909h
	.word 0BFC1h
	.word 08701h
;*** 46	----------
;***		----------	TUM1
	.word 05909h
	.word 0FFFFh
	.word 04000h
;*** 47	----------
;***		----------	UPD
	.word 00108h
;*** 48	----------
;***		----------	!MC
	.word 0700Fh
;***		----------	WAIT!
	.word 00408h
;*** 49	----------
;*** 50	----------
;***		----------	SAP 0(0x00000000)
	.word 08400h
	.word 00000h
	.word 00000h
;*** 51	----------
;*** 52	----------
;*** 53	----------
;***		----------	CPOS = 0(0x00000000)
	.word 0249Eh
	.word 00000h
	.word 00000h
;*** 54	----------
;***		----------	CPA
	.word 05909h
	.word 0FFFFh
	.word 02000h
;*** 55	----------
;***		----------	MODE PP
	.word 05909h
	.word 0BFC1h
	.word 08701h
;*** 56	----------
;***		----------	TUM1
	.word 05909h
	.word 0FFFFh
	.word 04000h
;*** 57	----------
;***		----------	UPD
	.word 00108h
;*** 58	----------
;***		----------	!MC
	.word 0700Fh
;***		----------	WAIT!
	.word 00408h
;*** 59	----------
;*** 60	----------
;***		----------	RET
	.word 00404h
;*** 61	----------
;*** 62	----------
;***		----------	File : C:\PROGRAM FILES (X86)\TECHNOSOFT\ESM\PROJECTS\SETUP9-15\CYCLE_TEST\MOTION.TML
;*** 15	----------
;***		----------	File : C:\PROGRAM FILES (X86)\TECHNOSOFT\ESM\PROJECTS\SETUP9-15\CYCLE_TEST\INTERRUPTS.TML
;*** 1	----------
;*** 2	----------
;*** 3	----------
;*** 4	----------
;***		----------	File : C:\PROGRAM FILES (X86)\TECHNOSOFT\ESM\PROJECTS\SETUP9-15\CYCLE_TEST\MOTION.TML
;*** 16	----------
;*** 17	----------
	.global _PROG_END_ADDR
_PROG_END_ADDR :
	.word 00000h
