/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|*Target Instruction Enum Values                                              *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

/* Capstone Disassembler Engine */
/* By Nguyen Anh Quynh <aquynh@gmail.com>, 2013> */

#ifdef GET_INSTRINFO_ENUM
#undef GET_INSTRINFO_ENUM

enum {
    Mips_PHI	= 0,
    Mips_INLINEASM	= 1,
    Mips_PROLOG_LABEL	= 2,
    Mips_EH_LABEL	= 3,
    Mips_GC_LABEL	= 4,
    Mips_KILL	= 5,
    Mips_EXTRACT_SUBREG	= 6,
    Mips_INSERT_SUBREG	= 7,
    Mips_IMPLICIT_DEF	= 8,
    Mips_SUBREG_TO_REG	= 9,
    Mips_COPY_TO_REGCLASS	= 10,
    Mips_DBG_VALUE	= 11,
    Mips_REG_SEQUENCE	= 12,
    Mips_COPY	= 13,
    Mips_BUNDLE	= 14,
    Mips_LIFETIME_START	= 15,
    Mips_LIFETIME_END	= 16,
    Mips_STACKMAP	= 17,
    Mips_PATCHPOINT	= 18,
    Mips_ABSQ_S_PH	= 19,
    Mips_ABSQ_S_QB	= 20,
    Mips_ABSQ_S_W	= 21,
    Mips_ADD	= 22,
    Mips_ADDQH_PH	= 23,
    Mips_ADDQH_R_PH	= 24,
    Mips_ADDQH_R_W	= 25,
    Mips_ADDQH_W	= 26,
    Mips_ADDQ_PH	= 27,
    Mips_ADDQ_S_PH	= 28,
    Mips_ADDQ_S_W	= 29,
    Mips_ADDSC	= 30,
    Mips_ADDS_A_B	= 31,
    Mips_ADDS_A_D	= 32,
    Mips_ADDS_A_H	= 33,
    Mips_ADDS_A_W	= 34,
    Mips_ADDS_S_B	= 35,
    Mips_ADDS_S_D	= 36,
    Mips_ADDS_S_H	= 37,
    Mips_ADDS_S_W	= 38,
    Mips_ADDS_U_B	= 39,
    Mips_ADDS_U_D	= 40,
    Mips_ADDS_U_H	= 41,
    Mips_ADDS_U_W	= 42,
    Mips_ADDUH_QB	= 43,
    Mips_ADDUH_R_QB	= 44,
    Mips_ADDU_PH	= 45,
    Mips_ADDU_QB	= 46,
    Mips_ADDU_S_PH	= 47,
    Mips_ADDU_S_QB	= 48,
    Mips_ADDVI_B	= 49,
    Mips_ADDVI_D	= 50,
    Mips_ADDVI_H	= 51,
    Mips_ADDVI_W	= 52,
    Mips_ADDV_B	= 53,
    Mips_ADDV_D	= 54,
    Mips_ADDV_H	= 55,
    Mips_ADDV_W	= 56,
    Mips_ADDWC	= 57,
    Mips_ADD_A_B	= 58,
    Mips_ADD_A_D	= 59,
    Mips_ADD_A_H	= 60,
    Mips_ADD_A_W	= 61,
    Mips_ADD_MM	= 62,
    Mips_ADDi	= 63,
    Mips_ADDi_MM	= 64,
    Mips_ADDiu	= 65,
    Mips_ADDiu_MM	= 66,
    Mips_ADDu	= 67,
    Mips_ADDu_MM	= 68,
    Mips_ADJCALLSTACKDOWN	= 69,
    Mips_ADJCALLSTACKUP	= 70,
    Mips_AND	= 71,
    Mips_AND64	= 72,
    Mips_ANDI_B	= 73,
    Mips_AND_MM	= 74,
    Mips_AND_V	= 75,
    Mips_AND_V_D_PSEUDO	= 76,
    Mips_AND_V_H_PSEUDO	= 77,
    Mips_AND_V_W_PSEUDO	= 78,
    Mips_ANDi	= 79,
    Mips_ANDi64	= 80,
    Mips_ANDi_MM	= 81,
    Mips_APPEND	= 82,
    Mips_ASUB_S_B	= 83,
    Mips_ASUB_S_D	= 84,
    Mips_ASUB_S_H	= 85,
    Mips_ASUB_S_W	= 86,
    Mips_ASUB_U_B	= 87,
    Mips_ASUB_U_D	= 88,
    Mips_ASUB_U_H	= 89,
    Mips_ASUB_U_W	= 90,
    Mips_ATOMIC_CMP_SWAP_I16	= 91,
    Mips_ATOMIC_CMP_SWAP_I32	= 92,
    Mips_ATOMIC_CMP_SWAP_I64	= 93,
    Mips_ATOMIC_CMP_SWAP_I8	= 94,
    Mips_ATOMIC_LOAD_ADD_I16	= 95,
    Mips_ATOMIC_LOAD_ADD_I32	= 96,
    Mips_ATOMIC_LOAD_ADD_I64	= 97,
    Mips_ATOMIC_LOAD_ADD_I8	= 98,
    Mips_ATOMIC_LOAD_AND_I16	= 99,
    Mips_ATOMIC_LOAD_AND_I32	= 100,
    Mips_ATOMIC_LOAD_AND_I64	= 101,
    Mips_ATOMIC_LOAD_AND_I8	= 102,
    Mips_ATOMIC_LOAD_NAND_I16	= 103,
    Mips_ATOMIC_LOAD_NAND_I32	= 104,
    Mips_ATOMIC_LOAD_NAND_I64	= 105,
    Mips_ATOMIC_LOAD_NAND_I8	= 106,
    Mips_ATOMIC_LOAD_OR_I16	= 107,
    Mips_ATOMIC_LOAD_OR_I32	= 108,
    Mips_ATOMIC_LOAD_OR_I64	= 109,
    Mips_ATOMIC_LOAD_OR_I8	= 110,
    Mips_ATOMIC_LOAD_SUB_I16	= 111,
    Mips_ATOMIC_LOAD_SUB_I32	= 112,
    Mips_ATOMIC_LOAD_SUB_I64	= 113,
    Mips_ATOMIC_LOAD_SUB_I8	= 114,
    Mips_ATOMIC_LOAD_XOR_I16	= 115,
    Mips_ATOMIC_LOAD_XOR_I32	= 116,
    Mips_ATOMIC_LOAD_XOR_I64	= 117,
    Mips_ATOMIC_LOAD_XOR_I8	= 118,
    Mips_ATOMIC_SWAP_I16	= 119,
    Mips_ATOMIC_SWAP_I32	= 120,
    Mips_ATOMIC_SWAP_I64	= 121,
    Mips_ATOMIC_SWAP_I8	= 122,
    Mips_AVER_S_B	= 123,
    Mips_AVER_S_D	= 124,
    Mips_AVER_S_H	= 125,
    Mips_AVER_S_W	= 126,
    Mips_AVER_U_B	= 127,
    Mips_AVER_U_D	= 128,
    Mips_AVER_U_H	= 129,
    Mips_AVER_U_W	= 130,
    Mips_AVE_S_B	= 131,
    Mips_AVE_S_D	= 132,
    Mips_AVE_S_H	= 133,
    Mips_AVE_S_W	= 134,
    Mips_AVE_U_B	= 135,
    Mips_AVE_U_D	= 136,
    Mips_AVE_U_H	= 137,
    Mips_AVE_U_W	= 138,
    Mips_AddiuRxImmX16	= 139,
    Mips_AddiuRxPcImmX16	= 140,
    Mips_AddiuRxRxImm16	= 141,
    Mips_AddiuRxRxImmX16	= 142,
    Mips_AddiuRxRyOffMemX16	= 143,
    Mips_AddiuSpImm16	= 144,
    Mips_AddiuSpImmX16	= 145,
    Mips_AdduRxRyRz16	= 146,
    Mips_AndRxRxRy16	= 147,
    Mips_B	= 148,
    Mips_BALIGN	= 149,
    Mips_BAL_BR	= 150,
    Mips_BC1F	= 151,
    Mips_BC1T	= 152,
    Mips_BCLRI_B	= 153,
    Mips_BCLRI_D	= 154,
    Mips_BCLRI_H	= 155,
    Mips_BCLRI_W	= 156,
    Mips_BCLR_B	= 157,
    Mips_BCLR_D	= 158,
    Mips_BCLR_H	= 159,
    Mips_BCLR_W	= 160,
    Mips_BEQ	= 161,
    Mips_BEQ64	= 162,
    Mips_BEQ_MM	= 163,
    Mips_BGEZ	= 164,
    Mips_BGEZ64	= 165,
    Mips_BGEZAL	= 166,
    Mips_BGEZAL_MM	= 167,
    Mips_BGEZ_MM	= 168,
    Mips_BGTZ	= 169,
    Mips_BGTZ64	= 170,
    Mips_BGTZ_MM	= 171,
    Mips_BINSLI_B	= 172,
    Mips_BINSLI_D	= 173,
    Mips_BINSLI_H	= 174,
    Mips_BINSLI_W	= 175,
    Mips_BINSL_B	= 176,
    Mips_BINSL_D	= 177,
    Mips_BINSL_H	= 178,
    Mips_BINSL_W	= 179,
    Mips_BINSRI_B	= 180,
    Mips_BINSRI_D	= 181,
    Mips_BINSRI_H	= 182,
    Mips_BINSRI_W	= 183,
    Mips_BINSR_B	= 184,
    Mips_BINSR_D	= 185,
    Mips_BINSR_H	= 186,
    Mips_BINSR_W	= 187,
    Mips_BITREV	= 188,
    Mips_BLEZ	= 189,
    Mips_BLEZ64	= 190,
    Mips_BLEZ_MM	= 191,
    Mips_BLTZ	= 192,
    Mips_BLTZ64	= 193,
    Mips_BLTZAL	= 194,
    Mips_BLTZAL_MM	= 195,
    Mips_BLTZ_MM	= 196,
    Mips_BMNZI_B	= 197,
    Mips_BMNZ_V	= 198,
    Mips_BMZI_B	= 199,
    Mips_BMZ_V	= 200,
    Mips_BNE	= 201,
    Mips_BNE64	= 202,
    Mips_BNEGI_B	= 203,
    Mips_BNEGI_D	= 204,
    Mips_BNEGI_H	= 205,
    Mips_BNEGI_W	= 206,
    Mips_BNEG_B	= 207,
    Mips_BNEG_D	= 208,
    Mips_BNEG_H	= 209,
    Mips_BNEG_W	= 210,
    Mips_BNE_MM	= 211,
    Mips_BNZ_B	= 212,
    Mips_BNZ_D	= 213,
    Mips_BNZ_H	= 214,
    Mips_BNZ_V	= 215,
    Mips_BNZ_W	= 216,
    Mips_BPOSGE32	= 217,
    Mips_BPOSGE32_PSEUDO	= 218,
    Mips_BREAK	= 219,
    Mips_BSELI_B	= 220,
    Mips_BSEL_D_PSEUDO	= 221,
    Mips_BSEL_FD_PSEUDO	= 222,
    Mips_BSEL_FW_PSEUDO	= 223,
    Mips_BSEL_H_PSEUDO	= 224,
    Mips_BSEL_V	= 225,
    Mips_BSEL_W_PSEUDO	= 226,
    Mips_BSETI_B	= 227,
    Mips_BSETI_D	= 228,
    Mips_BSETI_H	= 229,
    Mips_BSETI_W	= 230,
    Mips_BSET_B	= 231,
    Mips_BSET_D	= 232,
    Mips_BSET_H	= 233,
    Mips_BSET_W	= 234,
    Mips_BZ_B	= 235,
    Mips_BZ_D	= 236,
    Mips_BZ_H	= 237,
    Mips_BZ_V	= 238,
    Mips_BZ_W	= 239,
    Mips_BeqzRxImm16	= 240,
    Mips_BeqzRxImmX16	= 241,
    Mips_Bimm16	= 242,
    Mips_BimmX16	= 243,
    Mips_BnezRxImm16	= 244,
    Mips_BnezRxImmX16	= 245,
    Mips_Break16	= 246,
    Mips_Bteqz16	= 247,
    Mips_BteqzT8CmpX16	= 248,
    Mips_BteqzT8CmpiX16	= 249,
    Mips_BteqzT8SltX16	= 250,
    Mips_BteqzT8SltiX16	= 251,
    Mips_BteqzT8SltiuX16	= 252,
    Mips_BteqzT8SltuX16	= 253,
    Mips_BteqzX16	= 254,
    Mips_Btnez16	= 255,
    Mips_BtnezT8CmpX16	= 256,
    Mips_BtnezT8CmpiX16	= 257,
    Mips_BtnezT8SltX16	= 258,
    Mips_BtnezT8SltiX16	= 259,
    Mips_BtnezT8SltiuX16	= 260,
    Mips_BtnezT8SltuX16	= 261,
    Mips_BtnezX16	= 262,
    Mips_BuildPairF64	= 263,
    Mips_BuildPairF64_64	= 264,
    Mips_CEIL_L_D64	= 265,
    Mips_CEIL_L_S	= 266,
    Mips_CEIL_W_D32	= 267,
    Mips_CEIL_W_D64	= 268,
    Mips_CEIL_W_S	= 269,
    Mips_CEQI_B	= 270,
    Mips_CEQI_D	= 271,
    Mips_CEQI_H	= 272,
    Mips_CEQI_W	= 273,
    Mips_CEQ_B	= 274,
    Mips_CEQ_D	= 275,
    Mips_CEQ_H	= 276,
    Mips_CEQ_W	= 277,
    Mips_CFC1	= 278,
    Mips_CFCMSA	= 279,
    Mips_CLEI_S_B	= 280,
    Mips_CLEI_S_D	= 281,
    Mips_CLEI_S_H	= 282,
    Mips_CLEI_S_W	= 283,
    Mips_CLEI_U_B	= 284,
    Mips_CLEI_U_D	= 285,
    Mips_CLEI_U_H	= 286,
    Mips_CLEI_U_W	= 287,
    Mips_CLE_S_B	= 288,
    Mips_CLE_S_D	= 289,
    Mips_CLE_S_H	= 290,
    Mips_CLE_S_W	= 291,
    Mips_CLE_U_B	= 292,
    Mips_CLE_U_D	= 293,
    Mips_CLE_U_H	= 294,
    Mips_CLE_U_W	= 295,
    Mips_CLO	= 296,
    Mips_CLO_MM	= 297,
    Mips_CLTI_S_B	= 298,
    Mips_CLTI_S_D	= 299,
    Mips_CLTI_S_H	= 300,
    Mips_CLTI_S_W	= 301,
    Mips_CLTI_U_B	= 302,
    Mips_CLTI_U_D	= 303,
    Mips_CLTI_U_H	= 304,
    Mips_CLTI_U_W	= 305,
    Mips_CLT_S_B	= 306,
    Mips_CLT_S_D	= 307,
    Mips_CLT_S_H	= 308,
    Mips_CLT_S_W	= 309,
    Mips_CLT_U_B	= 310,
    Mips_CLT_U_D	= 311,
    Mips_CLT_U_H	= 312,
    Mips_CLT_U_W	= 313,
    Mips_CLZ	= 314,
    Mips_CLZ_MM	= 315,
    Mips_CMPGDU_EQ_QB	= 316,
    Mips_CMPGDU_LE_QB	= 317,
    Mips_CMPGDU_LT_QB	= 318,
    Mips_CMPGU_EQ_QB	= 319,
    Mips_CMPGU_LE_QB	= 320,
    Mips_CMPGU_LT_QB	= 321,
    Mips_CMPU_EQ_QB	= 322,
    Mips_CMPU_LE_QB	= 323,
    Mips_CMPU_LT_QB	= 324,
    Mips_CMP_EQ_PH	= 325,
    Mips_CMP_LE_PH	= 326,
    Mips_CMP_LT_PH	= 327,
    Mips_CONSTPOOL_ENTRY	= 328,
    Mips_COPY_FD_PSEUDO	= 329,
    Mips_COPY_FW_PSEUDO	= 330,
    Mips_COPY_S_B	= 331,
    Mips_COPY_S_H	= 332,
    Mips_COPY_S_W	= 333,
    Mips_COPY_U_B	= 334,
    Mips_COPY_U_H	= 335,
    Mips_COPY_U_W	= 336,
    Mips_CTC1	= 337,
    Mips_CTCMSA	= 338,
    Mips_CVT_D32_S	= 339,
    Mips_CVT_D32_W	= 340,
    Mips_CVT_D64_L	= 341,
    Mips_CVT_D64_S	= 342,
    Mips_CVT_D64_W	= 343,
    Mips_CVT_L_D64	= 344,
    Mips_CVT_L_S	= 345,
    Mips_CVT_S_D32	= 346,
    Mips_CVT_S_D64	= 347,
    Mips_CVT_S_L	= 348,
    Mips_CVT_S_W	= 349,
    Mips_CVT_W_D32	= 350,
    Mips_CVT_W_D64	= 351,
    Mips_CVT_W_S	= 352,
    Mips_C_EQ_D32	= 353,
    Mips_C_EQ_D64	= 354,
    Mips_C_EQ_S	= 355,
    Mips_C_F_D32	= 356,
    Mips_C_F_D64	= 357,
    Mips_C_F_S	= 358,
    Mips_C_LE_D32	= 359,
    Mips_C_LE_D64	= 360,
    Mips_C_LE_S	= 361,
    Mips_C_LT_D32	= 362,
    Mips_C_LT_D64	= 363,
    Mips_C_LT_S	= 364,
    Mips_C_NGE_D32	= 365,
    Mips_C_NGE_D64	= 366,
    Mips_C_NGE_S	= 367,
    Mips_C_NGLE_D32	= 368,
    Mips_C_NGLE_D64	= 369,
    Mips_C_NGLE_S	= 370,
    Mips_C_NGL_D32	= 371,
    Mips_C_NGL_D64	= 372,
    Mips_C_NGL_S	= 373,
    Mips_C_NGT_D32	= 374,
    Mips_C_NGT_D64	= 375,
    Mips_C_NGT_S	= 376,
    Mips_C_OLE_D32	= 377,
    Mips_C_OLE_D64	= 378,
    Mips_C_OLE_S	= 379,
    Mips_C_OLT_D32	= 380,
    Mips_C_OLT_D64	= 381,
    Mips_C_OLT_S	= 382,
    Mips_C_SEQ_D32	= 383,
    Mips_C_SEQ_D64	= 384,
    Mips_C_SEQ_S	= 385,
    Mips_C_SF_D32	= 386,
    Mips_C_SF_D64	= 387,
    Mips_C_SF_S	= 388,
    Mips_C_UEQ_D32	= 389,
    Mips_C_UEQ_D64	= 390,
    Mips_C_UEQ_S	= 391,
    Mips_C_ULE_D32	= 392,
    Mips_C_ULE_D64	= 393,
    Mips_C_ULE_S	= 394,
    Mips_C_ULT_D32	= 395,
    Mips_C_ULT_D64	= 396,
    Mips_C_ULT_S	= 397,
    Mips_C_UN_D32	= 398,
    Mips_C_UN_D64	= 399,
    Mips_C_UN_S	= 400,
    Mips_CmpRxRy16	= 401,
    Mips_CmpiRxImm16	= 402,
    Mips_CmpiRxImmX16	= 403,
    Mips_Constant32	= 404,
    Mips_DADD	= 405,
    Mips_DADDi	= 406,
    Mips_DADDiu	= 407,
    Mips_DADDu	= 408,
    Mips_DCLO	= 409,
    Mips_DCLZ	= 410,
    Mips_DERET	= 411,
    Mips_DEXT	= 412,
    Mips_DEXTM	= 413,
    Mips_DEXTU	= 414,
    Mips_DI	= 415,
    Mips_DINS	= 416,
    Mips_DINSM	= 417,
    Mips_DINSU	= 418,
    Mips_DIV_S_B	= 419,
    Mips_DIV_S_D	= 420,
    Mips_DIV_S_H	= 421,
    Mips_DIV_S_W	= 422,
    Mips_DIV_U_B	= 423,
    Mips_DIV_U_D	= 424,
    Mips_DIV_U_H	= 425,
    Mips_DIV_U_W	= 426,
    Mips_DMFC0	= 427,
    Mips_DMFC1	= 428,
    Mips_DMFC2	= 429,
    Mips_DMTC0	= 430,
    Mips_DMTC1	= 431,
    Mips_DMTC2	= 432,
    Mips_DMULT	= 433,
    Mips_DMULTu	= 434,
    Mips_DOTP_S_D	= 435,
    Mips_DOTP_S_H	= 436,
    Mips_DOTP_S_W	= 437,
    Mips_DOTP_U_D	= 438,
    Mips_DOTP_U_H	= 439,
    Mips_DOTP_U_W	= 440,
    Mips_DPADD_S_D	= 441,
    Mips_DPADD_S_H	= 442,
    Mips_DPADD_S_W	= 443,
    Mips_DPADD_U_D	= 444,
    Mips_DPADD_U_H	= 445,
    Mips_DPADD_U_W	= 446,
    Mips_DPAQX_SA_W_PH	= 447,
    Mips_DPAQX_S_W_PH	= 448,
    Mips_DPAQ_SA_L_W	= 449,
    Mips_DPAQ_S_W_PH	= 450,
    Mips_DPAU_H_QBL	= 451,
    Mips_DPAU_H_QBR	= 452,
    Mips_DPAX_W_PH	= 453,
    Mips_DPA_W_PH	= 454,
    Mips_DPSQX_SA_W_PH	= 455,
    Mips_DPSQX_S_W_PH	= 456,
    Mips_DPSQ_SA_L_W	= 457,
    Mips_DPSQ_S_W_PH	= 458,
    Mips_DPSUB_S_D	= 459,
    Mips_DPSUB_S_H	= 460,
    Mips_DPSUB_S_W	= 461,
    Mips_DPSUB_U_D	= 462,
    Mips_DPSUB_U_H	= 463,
    Mips_DPSUB_U_W	= 464,
    Mips_DPSU_H_QBL	= 465,
    Mips_DPSU_H_QBR	= 466,
    Mips_DPSX_W_PH	= 467,
    Mips_DPS_W_PH	= 468,
    Mips_DROTR	= 469,
    Mips_DROTR32	= 470,
    Mips_DROTRV	= 471,
    Mips_DSBH	= 472,
    Mips_DSDIV	= 473,
    Mips_DSHD	= 474,
    Mips_DSLL	= 475,
    Mips_DSLL32	= 476,
    Mips_DSLL64_32	= 477,
    Mips_DSLLV	= 478,
    Mips_DSRA	= 479,
    Mips_DSRA32	= 480,
    Mips_DSRAV	= 481,
    Mips_DSRL	= 482,
    Mips_DSRL32	= 483,
    Mips_DSRLV	= 484,
    Mips_DSUBu	= 485,
    Mips_DUDIV	= 486,
    Mips_DivRxRy16	= 487,
    Mips_DivuRxRy16	= 488,
    Mips_EI	= 489,
    Mips_ERET	= 490,
    Mips_EXT	= 491,
    Mips_EXTP	= 492,
    Mips_EXTPDP	= 493,
    Mips_EXTPDPV	= 494,
    Mips_EXTPV	= 495,
    Mips_EXTRV_RS_W	= 496,
    Mips_EXTRV_R_W	= 497,
    Mips_EXTRV_S_H	= 498,
    Mips_EXTRV_W	= 499,
    Mips_EXTR_RS_W	= 500,
    Mips_EXTR_R_W	= 501,
    Mips_EXTR_S_H	= 502,
    Mips_EXTR_W	= 503,
    Mips_EXT_MM	= 504,
    Mips_ExtractElementF64	= 505,
    Mips_ExtractElementF64_64	= 506,
    Mips_FABS_D	= 507,
    Mips_FABS_D32	= 508,
    Mips_FABS_D64	= 509,
    Mips_FABS_S	= 510,
    Mips_FABS_W	= 511,
    Mips_FADD_D	= 512,
    Mips_FADD_D32	= 513,
    Mips_FADD_D64	= 514,
    Mips_FADD_S	= 515,
    Mips_FADD_W	= 516,
    Mips_FCAF_D	= 517,
    Mips_FCAF_W	= 518,
    Mips_FCEQ_D	= 519,
    Mips_FCEQ_W	= 520,
    Mips_FCLASS_D	= 521,
    Mips_FCLASS_W	= 522,
    Mips_FCLE_D	= 523,
    Mips_FCLE_W	= 524,
    Mips_FCLT_D	= 525,
    Mips_FCLT_W	= 526,
    Mips_FCMP_D32	= 527,
    Mips_FCMP_D64	= 528,
    Mips_FCMP_S32	= 529,
    Mips_FCNE_D	= 530,
    Mips_FCNE_W	= 531,
    Mips_FCOR_D	= 532,
    Mips_FCOR_W	= 533,
    Mips_FCUEQ_D	= 534,
    Mips_FCUEQ_W	= 535,
    Mips_FCULE_D	= 536,
    Mips_FCULE_W	= 537,
    Mips_FCULT_D	= 538,
    Mips_FCULT_W	= 539,
    Mips_FCUNE_D	= 540,
    Mips_FCUNE_W	= 541,
    Mips_FCUN_D	= 542,
    Mips_FCUN_W	= 543,
    Mips_FDIV_D	= 544,
    Mips_FDIV_D32	= 545,
    Mips_FDIV_D64	= 546,
    Mips_FDIV_S	= 547,
    Mips_FDIV_W	= 548,
    Mips_FEXDO_H	= 549,
    Mips_FEXDO_W	= 550,
    Mips_FEXP2_D	= 551,
    Mips_FEXP2_D_1_PSEUDO	= 552,
    Mips_FEXP2_W	= 553,
    Mips_FEXP2_W_1_PSEUDO	= 554,
    Mips_FEXUPL_D	= 555,
    Mips_FEXUPL_W	= 556,
    Mips_FEXUPR_D	= 557,
    Mips_FEXUPR_W	= 558,
    Mips_FFINT_S_D	= 559,
    Mips_FFINT_S_W	= 560,
    Mips_FFINT_U_D	= 561,
    Mips_FFINT_U_W	= 562,
    Mips_FFQL_D	= 563,
    Mips_FFQL_W	= 564,
    Mips_FFQR_D	= 565,
    Mips_FFQR_W	= 566,
    Mips_FILL_B	= 567,
    Mips_FILL_FD_PSEUDO	= 568,
    Mips_FILL_FW_PSEUDO	= 569,
    Mips_FILL_H	= 570,
    Mips_FILL_W	= 571,
    Mips_FLOG2_D	= 572,
    Mips_FLOG2_W	= 573,
    Mips_FLOOR_L_D64	= 574,
    Mips_FLOOR_L_S	= 575,
    Mips_FLOOR_W_D32	= 576,
    Mips_FLOOR_W_D64	= 577,
    Mips_FLOOR_W_S	= 578,
    Mips_FMADD_D	= 579,
    Mips_FMADD_W	= 580,
    Mips_FMAX_A_D	= 581,
    Mips_FMAX_A_W	= 582,
    Mips_FMAX_D	= 583,
    Mips_FMAX_W	= 584,
    Mips_FMIN_A_D	= 585,
    Mips_FMIN_A_W	= 586,
    Mips_FMIN_D	= 587,
    Mips_FMIN_W	= 588,
    Mips_FMOV_D32	= 589,
    Mips_FMOV_D64	= 590,
    Mips_FMOV_S	= 591,
    Mips_FMSUB_D	= 592,
    Mips_FMSUB_W	= 593,
    Mips_FMUL_D	= 594,
    Mips_FMUL_D32	= 595,
    Mips_FMUL_D64	= 596,
    Mips_FMUL_S	= 597,
    Mips_FMUL_W	= 598,
    Mips_FNEG_D32	= 599,
    Mips_FNEG_D64	= 600,
    Mips_FNEG_S	= 601,
    Mips_FRCP_D	= 602,
    Mips_FRCP_W	= 603,
    Mips_FRINT_D	= 604,
    Mips_FRINT_W	= 605,
    Mips_FRSQRT_D	= 606,
    Mips_FRSQRT_W	= 607,
    Mips_FSAF_D	= 608,
    Mips_FSAF_W	= 609,
    Mips_FSEQ_D	= 610,
    Mips_FSEQ_W	= 611,
    Mips_FSLE_D	= 612,
    Mips_FSLE_W	= 613,
    Mips_FSLT_D	= 614,
    Mips_FSLT_W	= 615,
    Mips_FSNE_D	= 616,
    Mips_FSNE_W	= 617,
    Mips_FSOR_D	= 618,
    Mips_FSOR_W	= 619,
    Mips_FSQRT_D	= 620,
    Mips_FSQRT_D32	= 621,
    Mips_FSQRT_D64	= 622,
    Mips_FSQRT_S	= 623,
    Mips_FSQRT_W	= 624,
    Mips_FSUB_D	= 625,
    Mips_FSUB_D32	= 626,
    Mips_FSUB_D64	= 627,
    Mips_FSUB_S	= 628,
    Mips_FSUB_W	= 629,
    Mips_FSUEQ_D	= 630,
    Mips_FSUEQ_W	= 631,
    Mips_FSULE_D	= 632,
    Mips_FSULE_W	= 633,
    Mips_FSULT_D	= 634,
    Mips_FSULT_W	= 635,
    Mips_FSUNE_D	= 636,
    Mips_FSUNE_W	= 637,
    Mips_FSUN_D	= 638,
    Mips_FSUN_W	= 639,
    Mips_FTINT_S_D	= 640,
    Mips_FTINT_S_W	= 641,
    Mips_FTINT_U_D	= 642,
    Mips_FTINT_U_W	= 643,
    Mips_FTQ_H	= 644,
    Mips_FTQ_W	= 645,
    Mips_FTRUNC_S_D	= 646,
    Mips_FTRUNC_S_W	= 647,
    Mips_FTRUNC_U_D	= 648,
    Mips_FTRUNC_U_W	= 649,
    Mips_GotPrologue16	= 650,
    Mips_HADD_S_D	= 651,
    Mips_HADD_S_H	= 652,
    Mips_HADD_S_W	= 653,
    Mips_HADD_U_D	= 654,
    Mips_HADD_U_H	= 655,
    Mips_HADD_U_W	= 656,
    Mips_HSUB_S_D	= 657,
    Mips_HSUB_S_H	= 658,
    Mips_HSUB_S_W	= 659,
    Mips_HSUB_U_D	= 660,
    Mips_HSUB_U_H	= 661,
    Mips_HSUB_U_W	= 662,
    Mips_ILVEV_B	= 663,
    Mips_ILVEV_D	= 664,
    Mips_ILVEV_H	= 665,
    Mips_ILVEV_W	= 666,
    Mips_ILVL_B	= 667,
    Mips_ILVL_D	= 668,
    Mips_ILVL_H	= 669,
    Mips_ILVL_W	= 670,
    Mips_ILVOD_B	= 671,
    Mips_ILVOD_D	= 672,
    Mips_ILVOD_H	= 673,
    Mips_ILVOD_W	= 674,
    Mips_ILVR_B	= 675,
    Mips_ILVR_D	= 676,
    Mips_ILVR_H	= 677,
    Mips_ILVR_W	= 678,
    Mips_INS	= 679,
    Mips_INSERT_B	= 680,
    Mips_INSERT_FD_PSEUDO	= 681,
    Mips_INSERT_FW_PSEUDO	= 682,
    Mips_INSERT_H	= 683,
    Mips_INSERT_W	= 684,
    Mips_INSV	= 685,
    Mips_INSVE_B	= 686,
    Mips_INSVE_D	= 687,
    Mips_INSVE_H	= 688,
    Mips_INSVE_W	= 689,
    Mips_INS_MM	= 690,
    Mips_J	= 691,
    Mips_JAL	= 692,
    Mips_JALR	= 693,
    Mips_JALR64	= 694,
    Mips_JALR64Pseudo	= 695,
    Mips_JALRPseudo	= 696,
    Mips_JALR_MM	= 697,
    Mips_JAL_MM	= 698,
    Mips_JR	= 699,
    Mips_JR64	= 700,
    Mips_JR_MM	= 701,
    Mips_J_MM	= 702,
    Mips_Jal16	= 703,
    Mips_JalB16	= 704,
    Mips_JrRa16	= 705,
    Mips_JrcRa16	= 706,
    Mips_JrcRx16	= 707,
    Mips_JumpLinkReg16	= 708,
    Mips_LB	= 709,
    Mips_LB64	= 710,
    Mips_LBUX	= 711,
    Mips_LB_MM	= 712,
    Mips_LBu	= 713,
    Mips_LBu64	= 714,
    Mips_LBu_MM	= 715,
    Mips_LD	= 716,
    Mips_LDC1	= 717,
    Mips_LDC164	= 718,
    Mips_LDC2	= 719,
    Mips_LDI_B	= 720,
    Mips_LDI_D	= 721,
    Mips_LDI_H	= 722,
    Mips_LDI_W	= 723,
    Mips_LDL	= 724,
    Mips_LDR	= 725,
    Mips_LDXC1	= 726,
    Mips_LDXC164	= 727,
    Mips_LD_B	= 728,
    Mips_LD_D	= 729,
    Mips_LD_H	= 730,
    Mips_LD_W	= 731,
    Mips_LEA_ADDiu	= 732,
    Mips_LEA_ADDiu64	= 733,
    Mips_LH	= 734,
    Mips_LH64	= 735,
    Mips_LHX	= 736,
    Mips_LH_MM	= 737,
    Mips_LHu	= 738,
    Mips_LHu64	= 739,
    Mips_LHu_MM	= 740,
    Mips_LL	= 741,
    Mips_LLD	= 742,
    Mips_LOAD_ACC128	= 743,
    Mips_LOAD_ACC64	= 744,
    Mips_LOAD_ACC64DSP	= 745,
    Mips_LOAD_CCOND_DSP	= 746,
    Mips_LSA	= 747,
    Mips_LUXC1	= 748,
    Mips_LUXC164	= 749,
    Mips_LUi	= 750,
    Mips_LUi64	= 751,
    Mips_LUi_MM	= 752,
    Mips_LW	= 753,
    Mips_LW64	= 754,
    Mips_LWC1	= 755,
    Mips_LWC2	= 756,
    Mips_LWL	= 757,
    Mips_LWL64	= 758,
    Mips_LWL_MM	= 759,
    Mips_LWR	= 760,
    Mips_LWR64	= 761,
    Mips_LWR_MM	= 762,
    Mips_LWX	= 763,
    Mips_LWXC1	= 764,
    Mips_LW_MM	= 765,
    Mips_LWu	= 766,
    Mips_LbRxRyOffMemX16	= 767,
    Mips_LbuRxRyOffMemX16	= 768,
    Mips_LhRxRyOffMemX16	= 769,
    Mips_LhuRxRyOffMemX16	= 770,
    Mips_LiRxImm16	= 771,
    Mips_LiRxImmAlignX16	= 772,
    Mips_LiRxImmX16	= 773,
    Mips_LoadAddr32Imm	= 774,
    Mips_LoadAddr32Reg	= 775,
    Mips_LoadImm32Reg	= 776,
    Mips_LwConstant32	= 777,
    Mips_LwRxPcTcp16	= 778,
    Mips_LwRxPcTcpX16	= 779,
    Mips_LwRxRyOffMemX16	= 780,
    Mips_LwRxSpImmX16	= 781,
    Mips_MADD	= 782,
    Mips_MADDR_Q_H	= 783,
    Mips_MADDR_Q_W	= 784,
    Mips_MADDU	= 785,
    Mips_MADDU_DSP	= 786,
    Mips_MADDU_MM	= 787,
    Mips_MADDV_B	= 788,
    Mips_MADDV_D	= 789,
    Mips_MADDV_H	= 790,
    Mips_MADDV_W	= 791,
    Mips_MADD_D32	= 792,
    Mips_MADD_D64	= 793,
    Mips_MADD_DSP	= 794,
    Mips_MADD_MM	= 795,
    Mips_MADD_Q_H	= 796,
    Mips_MADD_Q_W	= 797,
    Mips_MADD_S	= 798,
    Mips_MAQ_SA_W_PHL	= 799,
    Mips_MAQ_SA_W_PHR	= 800,
    Mips_MAQ_S_W_PHL	= 801,
    Mips_MAQ_S_W_PHR	= 802,
    Mips_MAXI_S_B	= 803,
    Mips_MAXI_S_D	= 804,
    Mips_MAXI_S_H	= 805,
    Mips_MAXI_S_W	= 806,
    Mips_MAXI_U_B	= 807,
    Mips_MAXI_U_D	= 808,
    Mips_MAXI_U_H	= 809,
    Mips_MAXI_U_W	= 810,
    Mips_MAX_A_B	= 811,
    Mips_MAX_A_D	= 812,
    Mips_MAX_A_H	= 813,
    Mips_MAX_A_W	= 814,
    Mips_MAX_S_B	= 815,
    Mips_MAX_S_D	= 816,
    Mips_MAX_S_H	= 817,
    Mips_MAX_S_W	= 818,
    Mips_MAX_U_B	= 819,
    Mips_MAX_U_D	= 820,
    Mips_MAX_U_H	= 821,
    Mips_MAX_U_W	= 822,
    Mips_MFC0	= 823,
    Mips_MFC1	= 824,
    Mips_MFC2	= 825,
    Mips_MFHC1	= 826,
    Mips_MFHI	= 827,
    Mips_MFHI64	= 828,
    Mips_MFHI_DSP	= 829,
    Mips_MFHI_MM	= 830,
    Mips_MFLO	= 831,
    Mips_MFLO64	= 832,
    Mips_MFLO_DSP	= 833,
    Mips_MFLO_MM	= 834,
    Mips_MINI_S_B	= 835,
    Mips_MINI_S_D	= 836,
    Mips_MINI_S_H	= 837,
    Mips_MINI_S_W	= 838,
    Mips_MINI_U_B	= 839,
    Mips_MINI_U_D	= 840,
    Mips_MINI_U_H	= 841,
    Mips_MINI_U_W	= 842,
    Mips_MIN_A_B	= 843,
    Mips_MIN_A_D	= 844,
    Mips_MIN_A_H	= 845,
    Mips_MIN_A_W	= 846,
    Mips_MIN_S_B	= 847,
    Mips_MIN_S_D	= 848,
    Mips_MIN_S_H	= 849,
    Mips_MIN_S_W	= 850,
    Mips_MIN_U_B	= 851,
    Mips_MIN_U_D	= 852,
    Mips_MIN_U_H	= 853,
    Mips_MIN_U_W	= 854,
    Mips_MIPSeh_return32	= 855,
    Mips_MIPSeh_return64	= 856,
    Mips_MODSUB	= 857,
    Mips_MOD_S_B	= 858,
    Mips_MOD_S_D	= 859,
    Mips_MOD_S_H	= 860,
    Mips_MOD_S_W	= 861,
    Mips_MOD_U_B	= 862,
    Mips_MOD_U_D	= 863,
    Mips_MOD_U_H	= 864,
    Mips_MOD_U_W	= 865,
    Mips_MOVE_V	= 866,
    Mips_MOVF_D32	= 867,
    Mips_MOVF_D64	= 868,
    Mips_MOVF_I	= 869,
    Mips_MOVF_I64	= 870,
    Mips_MOVF_I_MM	= 871,
    Mips_MOVF_S	= 872,
    Mips_MOVN_I64_D64	= 873,
    Mips_MOVN_I64_I	= 874,
    Mips_MOVN_I64_I64	= 875,
    Mips_MOVN_I64_S	= 876,
    Mips_MOVN_I_D32	= 877,
    Mips_MOVN_I_D64	= 878,
    Mips_MOVN_I_I	= 879,
    Mips_MOVN_I_I64	= 880,
    Mips_MOVN_I_MM	= 881,
    Mips_MOVN_I_S	= 882,
    Mips_MOVT_D32	= 883,
    Mips_MOVT_D64	= 884,
    Mips_MOVT_I	= 885,
    Mips_MOVT_I64	= 886,
    Mips_MOVT_I_MM	= 887,
    Mips_MOVT_S	= 888,
    Mips_MOVZ_I64_D64	= 889,
    Mips_MOVZ_I64_I	= 890,
    Mips_MOVZ_I64_I64	= 891,
    Mips_MOVZ_I64_S	= 892,
    Mips_MOVZ_I_D32	= 893,
    Mips_MOVZ_I_D64	= 894,
    Mips_MOVZ_I_I	= 895,
    Mips_MOVZ_I_I64	= 896,
    Mips_MOVZ_I_MM	= 897,
    Mips_MOVZ_I_S	= 898,
    Mips_MSUB	= 899,
    Mips_MSUBR_Q_H	= 900,
    Mips_MSUBR_Q_W	= 901,
    Mips_MSUBU	= 902,
    Mips_MSUBU_DSP	= 903,
    Mips_MSUBU_MM	= 904,
    Mips_MSUBV_B	= 905,
    Mips_MSUBV_D	= 906,
    Mips_MSUBV_H	= 907,
    Mips_MSUBV_W	= 908,
    Mips_MSUB_D32	= 909,
    Mips_MSUB_D64	= 910,
    Mips_MSUB_DSP	= 911,
    Mips_MSUB_MM	= 912,
    Mips_MSUB_Q_H	= 913,
    Mips_MSUB_Q_W	= 914,
    Mips_MSUB_S	= 915,
    Mips_MTC0	= 916,
    Mips_MTC1	= 917,
    Mips_MTC2	= 918,
    Mips_MTHC1	= 919,
    Mips_MTHI	= 920,
    Mips_MTHI64	= 921,
    Mips_MTHI_DSP	= 922,
    Mips_MTHI_MM	= 923,
    Mips_MTHLIP	= 924,
    Mips_MTLO	= 925,
    Mips_MTLO64	= 926,
    Mips_MTLO_DSP	= 927,
    Mips_MTLO_MM	= 928,
    Mips_MUL	= 929,
    Mips_MULEQ_S_W_PHL	= 930,
    Mips_MULEQ_S_W_PHR	= 931,
    Mips_MULEU_S_PH_QBL	= 932,
    Mips_MULEU_S_PH_QBR	= 933,
    Mips_MULQ_RS_PH	= 934,
    Mips_MULQ_RS_W	= 935,
    Mips_MULQ_S_PH	= 936,
    Mips_MULQ_S_W	= 937,
    Mips_MULR_Q_H	= 938,
    Mips_MULR_Q_W	= 939,
    Mips_MULSAQ_S_W_PH	= 940,
    Mips_MULSA_W_PH	= 941,
    Mips_MULT	= 942,
    Mips_MULTU_DSP	= 943,
    Mips_MULT_DSP	= 944,
    Mips_MULT_MM	= 945,
    Mips_MULTu	= 946,
    Mips_MULTu_MM	= 947,
    Mips_MULV_B	= 948,
    Mips_MULV_D	= 949,
    Mips_MULV_H	= 950,
    Mips_MULV_W	= 951,
    Mips_MUL_MM	= 952,
    Mips_MUL_PH	= 953,
    Mips_MUL_Q_H	= 954,
    Mips_MUL_Q_W	= 955,
    Mips_MUL_S_PH	= 956,
    Mips_Mfhi16	= 957,
    Mips_Mflo16	= 958,
    Mips_Move32R16	= 959,
    Mips_MoveR3216	= 960,
    Mips_MultRxRy16	= 961,
    Mips_MultRxRyRz16	= 962,
    Mips_MultuRxRy16	= 963,
    Mips_MultuRxRyRz16	= 964,
    Mips_NLOC_B	= 965,
    Mips_NLOC_D	= 966,
    Mips_NLOC_H	= 967,
    Mips_NLOC_W	= 968,
    Mips_NLZC_B	= 969,
    Mips_NLZC_D	= 970,
    Mips_NLZC_H	= 971,
    Mips_NLZC_W	= 972,
    Mips_NMADD_D32	= 973,
    Mips_NMADD_D64	= 974,
    Mips_NMADD_S	= 975,
    Mips_NMSUB_D32	= 976,
    Mips_NMSUB_D64	= 977,
    Mips_NMSUB_S	= 978,
    Mips_NOP	= 979,
    Mips_NOR	= 980,
    Mips_NOR64	= 981,
    Mips_NORI_B	= 982,
    Mips_NOR_MM	= 983,
    Mips_NOR_V	= 984,
    Mips_NOR_V_D_PSEUDO	= 985,
    Mips_NOR_V_H_PSEUDO	= 986,
    Mips_NOR_V_W_PSEUDO	= 987,
    Mips_NegRxRy16	= 988,
    Mips_NotRxRy16	= 989,
    Mips_OR	= 990,
    Mips_OR64	= 991,
    Mips_ORI_B	= 992,
    Mips_OR_MM	= 993,
    Mips_OR_V	= 994,
    Mips_OR_V_D_PSEUDO	= 995,
    Mips_OR_V_H_PSEUDO	= 996,
    Mips_OR_V_W_PSEUDO	= 997,
    Mips_ORi	= 998,
    Mips_ORi64	= 999,
    Mips_ORi_MM	= 1000,
    Mips_OrRxRxRy16	= 1001,
    Mips_PACKRL_PH	= 1002,
    Mips_PCKEV_B	= 1003,
    Mips_PCKEV_D	= 1004,
    Mips_PCKEV_H	= 1005,
    Mips_PCKEV_W	= 1006,
    Mips_PCKOD_B	= 1007,
    Mips_PCKOD_D	= 1008,
    Mips_PCKOD_H	= 1009,
    Mips_PCKOD_W	= 1010,
    Mips_PCNT_B	= 1011,
    Mips_PCNT_D	= 1012,
    Mips_PCNT_H	= 1013,
    Mips_PCNT_W	= 1014,
    Mips_PICK_PH	= 1015,
    Mips_PICK_QB	= 1016,
    Mips_PRECEQU_PH_QBL	= 1017,
    Mips_PRECEQU_PH_QBLA	= 1018,
    Mips_PRECEQU_PH_QBR	= 1019,
    Mips_PRECEQU_PH_QBRA	= 1020,
    Mips_PRECEQ_W_PHL	= 1021,
    Mips_PRECEQ_W_PHR	= 1022,
    Mips_PRECEU_PH_QBL	= 1023,
    Mips_PRECEU_PH_QBLA	= 1024,
    Mips_PRECEU_PH_QBR	= 1025,
    Mips_PRECEU_PH_QBRA	= 1026,
    Mips_PRECRQU_S_QB_PH	= 1027,
    Mips_PRECRQ_PH_W	= 1028,
    Mips_PRECRQ_QB_PH	= 1029,
    Mips_PRECRQ_RS_PH_W	= 1030,
    Mips_PRECR_QB_PH	= 1031,
    Mips_PRECR_SRA_PH_W	= 1032,
    Mips_PRECR_SRA_R_PH_W	= 1033,
    Mips_PREPEND	= 1034,
    Mips_PseudoCMPU_EQ_QB	= 1035,
    Mips_PseudoCMPU_LE_QB	= 1036,
    Mips_PseudoCMPU_LT_QB	= 1037,
    Mips_PseudoCMP_EQ_PH	= 1038,
    Mips_PseudoCMP_LE_PH	= 1039,
    Mips_PseudoCMP_LT_PH	= 1040,
    Mips_PseudoCVT_D32_W	= 1041,
    Mips_PseudoCVT_D64_L	= 1042,
    Mips_PseudoCVT_D64_W	= 1043,
    Mips_PseudoCVT_S_L	= 1044,
    Mips_PseudoCVT_S_W	= 1045,
    Mips_PseudoDMULT	= 1046,
    Mips_PseudoDMULTu	= 1047,
    Mips_PseudoDSDIV	= 1048,
    Mips_PseudoDUDIV	= 1049,
    Mips_PseudoMADD	= 1050,
    Mips_PseudoMADDU	= 1051,
    Mips_PseudoMFHI	= 1052,
    Mips_PseudoMFHI64	= 1053,
    Mips_PseudoMFLO	= 1054,
    Mips_PseudoMFLO64	= 1055,
    Mips_PseudoMSUB	= 1056,
    Mips_PseudoMSUBU	= 1057,
    Mips_PseudoMTLOHI	= 1058,
    Mips_PseudoMTLOHI64	= 1059,
    Mips_PseudoMTLOHI_DSP	= 1060,
    Mips_PseudoMULT	= 1061,
    Mips_PseudoMULTu	= 1062,
    Mips_PseudoPICK_PH	= 1063,
    Mips_PseudoPICK_QB	= 1064,
    Mips_PseudoSDIV	= 1065,
    Mips_PseudoUDIV	= 1066,
    Mips_RADDU_W_QB	= 1067,
    Mips_RDDSP	= 1068,
    Mips_RDHWR	= 1069,
    Mips_RDHWR64	= 1070,
    Mips_REPLV_PH	= 1071,
    Mips_REPLV_QB	= 1072,
    Mips_REPL_PH	= 1073,
    Mips_REPL_QB	= 1074,
    Mips_RET	= 1075,
    Mips_RET_MM	= 1076,
    Mips_ROTR	= 1077,
    Mips_ROTRV	= 1078,
    Mips_ROTRV_MM	= 1079,
    Mips_ROTR_MM	= 1080,
    Mips_ROUND_L_D64	= 1081,
    Mips_ROUND_L_S	= 1082,
    Mips_ROUND_W_D32	= 1083,
    Mips_ROUND_W_D64	= 1084,
    Mips_ROUND_W_S	= 1085,
    Mips_RestoreIncSpF16	= 1086,
    Mips_RestoreRaF16	= 1087,
    Mips_RetRA	= 1088,
    Mips_RetRA16	= 1089,
    Mips_SAT_S_B	= 1090,
    Mips_SAT_S_D	= 1091,
    Mips_SAT_S_H	= 1092,
    Mips_SAT_S_W	= 1093,
    Mips_SAT_U_B	= 1094,
    Mips_SAT_U_D	= 1095,
    Mips_SAT_U_H	= 1096,
    Mips_SAT_U_W	= 1097,
    Mips_SB	= 1098,
    Mips_SB64	= 1099,
    Mips_SB_MM	= 1100,
    Mips_SC	= 1101,
    Mips_SCD	= 1102,
    Mips_SD	= 1103,
    Mips_SDC1	= 1104,
    Mips_SDC164	= 1105,
    Mips_SDC2	= 1106,
    Mips_SDIV	= 1107,
    Mips_SDIV_MM	= 1108,
    Mips_SDL	= 1109,
    Mips_SDR	= 1110,
    Mips_SDXC1	= 1111,
    Mips_SDXC164	= 1112,
    Mips_SEB	= 1113,
    Mips_SEB64	= 1114,
    Mips_SEB_MM	= 1115,
    Mips_SEH	= 1116,
    Mips_SEH64	= 1117,
    Mips_SEH_MM	= 1118,
    Mips_SH	= 1119,
    Mips_SH64	= 1120,
    Mips_SHF_B	= 1121,
    Mips_SHF_H	= 1122,
    Mips_SHF_W	= 1123,
    Mips_SHILO	= 1124,
    Mips_SHILOV	= 1125,
    Mips_SHLLV_PH	= 1126,
    Mips_SHLLV_QB	= 1127,
    Mips_SHLLV_S_PH	= 1128,
    Mips_SHLLV_S_W	= 1129,
    Mips_SHLL_PH	= 1130,
    Mips_SHLL_QB	= 1131,
    Mips_SHLL_S_PH	= 1132,
    Mips_SHLL_S_W	= 1133,
    Mips_SHRAV_PH	= 1134,
    Mips_SHRAV_QB	= 1135,
    Mips_SHRAV_R_PH	= 1136,
    Mips_SHRAV_R_QB	= 1137,
    Mips_SHRAV_R_W	= 1138,
    Mips_SHRA_PH	= 1139,
    Mips_SHRA_QB	= 1140,
    Mips_SHRA_R_PH	= 1141,
    Mips_SHRA_R_QB	= 1142,
    Mips_SHRA_R_W	= 1143,
    Mips_SHRLV_PH	= 1144,
    Mips_SHRLV_QB	= 1145,
    Mips_SHRL_PH	= 1146,
    Mips_SHRL_QB	= 1147,
    Mips_SH_MM	= 1148,
    Mips_SLDI_B	= 1149,
    Mips_SLDI_D	= 1150,
    Mips_SLDI_H	= 1151,
    Mips_SLDI_W	= 1152,
    Mips_SLD_B	= 1153,
    Mips_SLD_D	= 1154,
    Mips_SLD_H	= 1155,
    Mips_SLD_W	= 1156,
    Mips_SLL	= 1157,
    Mips_SLL64_32	= 1158,
    Mips_SLL64_64	= 1159,
    Mips_SLLI_B	= 1160,
    Mips_SLLI_D	= 1161,
    Mips_SLLI_H	= 1162,
    Mips_SLLI_W	= 1163,
    Mips_SLLV	= 1164,
    Mips_SLLV_MM	= 1165,
    Mips_SLL_B	= 1166,
    Mips_SLL_D	= 1167,
    Mips_SLL_H	= 1168,
    Mips_SLL_MM	= 1169,
    Mips_SLL_W	= 1170,
    Mips_SLT	= 1171,
    Mips_SLT64	= 1172,
    Mips_SLT_MM	= 1173,
    Mips_SLTi	= 1174,
    Mips_SLTi64	= 1175,
    Mips_SLTi_MM	= 1176,
    Mips_SLTiu	= 1177,
    Mips_SLTiu64	= 1178,
    Mips_SLTiu_MM	= 1179,
    Mips_SLTu	= 1180,
    Mips_SLTu64	= 1181,
    Mips_SLTu_MM	= 1182,
    Mips_SNZ_B_PSEUDO	= 1183,
    Mips_SNZ_D_PSEUDO	= 1184,
    Mips_SNZ_H_PSEUDO	= 1185,
    Mips_SNZ_V_PSEUDO	= 1186,
    Mips_SNZ_W_PSEUDO	= 1187,
    Mips_SPLATI_B	= 1188,
    Mips_SPLATI_D	= 1189,
    Mips_SPLATI_H	= 1190,
    Mips_SPLATI_W	= 1191,
    Mips_SPLAT_B	= 1192,
    Mips_SPLAT_D	= 1193,
    Mips_SPLAT_H	= 1194,
    Mips_SPLAT_W	= 1195,
    Mips_SRA	= 1196,
    Mips_SRAI_B	= 1197,
    Mips_SRAI_D	= 1198,
    Mips_SRAI_H	= 1199,
    Mips_SRAI_W	= 1200,
    Mips_SRARI_B	= 1201,
    Mips_SRARI_D	= 1202,
    Mips_SRARI_H	= 1203,
    Mips_SRARI_W	= 1204,
    Mips_SRAR_B	= 1205,
    Mips_SRAR_D	= 1206,
    Mips_SRAR_H	= 1207,
    Mips_SRAR_W	= 1208,
    Mips_SRAV	= 1209,
    Mips_SRAV_MM	= 1210,
    Mips_SRA_B	= 1211,
    Mips_SRA_D	= 1212,
    Mips_SRA_H	= 1213,
    Mips_SRA_MM	= 1214,
    Mips_SRA_W	= 1215,
    Mips_SRL	= 1216,
    Mips_SRLI_B	= 1217,
    Mips_SRLI_D	= 1218,
    Mips_SRLI_H	= 1219,
    Mips_SRLI_W	= 1220,
    Mips_SRLRI_B	= 1221,
    Mips_SRLRI_D	= 1222,
    Mips_SRLRI_H	= 1223,
    Mips_SRLRI_W	= 1224,
    Mips_SRLR_B	= 1225,
    Mips_SRLR_D	= 1226,
    Mips_SRLR_H	= 1227,
    Mips_SRLR_W	= 1228,
    Mips_SRLV	= 1229,
    Mips_SRLV_MM	= 1230,
    Mips_SRL_B	= 1231,
    Mips_SRL_D	= 1232,
    Mips_SRL_H	= 1233,
    Mips_SRL_MM	= 1234,
    Mips_SRL_W	= 1235,
    Mips_STORE_ACC128	= 1236,
    Mips_STORE_ACC64	= 1237,
    Mips_STORE_ACC64DSP	= 1238,
    Mips_STORE_CCOND_DSP	= 1239,
    Mips_ST_B	= 1240,
    Mips_ST_D	= 1241,
    Mips_ST_H	= 1242,
    Mips_ST_W	= 1243,
    Mips_SUB	= 1244,
    Mips_SUBQH_PH	= 1245,
    Mips_SUBQH_R_PH	= 1246,
    Mips_SUBQH_R_W	= 1247,
    Mips_SUBQH_W	= 1248,
    Mips_SUBQ_PH	= 1249,
    Mips_SUBQ_S_PH	= 1250,
    Mips_SUBQ_S_W	= 1251,
    Mips_SUBSUS_U_B	= 1252,
    Mips_SUBSUS_U_D	= 1253,
    Mips_SUBSUS_U_H	= 1254,
    Mips_SUBSUS_U_W	= 1255,
    Mips_SUBSUU_S_B	= 1256,
    Mips_SUBSUU_S_D	= 1257,
    Mips_SUBSUU_S_H	= 1258,
    Mips_SUBSUU_S_W	= 1259,
    Mips_SUBS_S_B	= 1260,
    Mips_SUBS_S_D	= 1261,
    Mips_SUBS_S_H	= 1262,
    Mips_SUBS_S_W	= 1263,
    Mips_SUBS_U_B	= 1264,
    Mips_SUBS_U_D	= 1265,
    Mips_SUBS_U_H	= 1266,
    Mips_SUBS_U_W	= 1267,
    Mips_SUBUH_QB	= 1268,
    Mips_SUBUH_R_QB	= 1269,
    Mips_SUBU_PH	= 1270,
    Mips_SUBU_QB	= 1271,
    Mips_SUBU_S_PH	= 1272,
    Mips_SUBU_S_QB	= 1273,
    Mips_SUBVI_B	= 1274,
    Mips_SUBVI_D	= 1275,
    Mips_SUBVI_H	= 1276,
    Mips_SUBVI_W	= 1277,
    Mips_SUBV_B	= 1278,
    Mips_SUBV_D	= 1279,
    Mips_SUBV_H	= 1280,
    Mips_SUBV_W	= 1281,
    Mips_SUB_MM	= 1282,
    Mips_SUBu	= 1283,
    Mips_SUBu_MM	= 1284,
    Mips_SUXC1	= 1285,
    Mips_SUXC164	= 1286,
    Mips_SW	= 1287,
    Mips_SW64	= 1288,
    Mips_SWC1	= 1289,
    Mips_SWC2	= 1290,
    Mips_SWL	= 1291,
    Mips_SWL64	= 1292,
    Mips_SWL_MM	= 1293,
    Mips_SWR	= 1294,
    Mips_SWR64	= 1295,
    Mips_SWR_MM	= 1296,
    Mips_SWXC1	= 1297,
    Mips_SW_MM	= 1298,
    Mips_SYNC	= 1299,
    Mips_SYSCALL	= 1300,
    Mips_SZ_B_PSEUDO	= 1301,
    Mips_SZ_D_PSEUDO	= 1302,
    Mips_SZ_H_PSEUDO	= 1303,
    Mips_SZ_V_PSEUDO	= 1304,
    Mips_SZ_W_PSEUDO	= 1305,
    Mips_SaveDecSpF16	= 1306,
    Mips_SaveRaF16	= 1307,
    Mips_SbRxRyOffMemX16	= 1308,
    Mips_SebRx16	= 1309,
    Mips_SehRx16	= 1310,
    Mips_SelBeqZ	= 1311,
    Mips_SelBneZ	= 1312,
    Mips_SelTBteqZCmp	= 1313,
    Mips_SelTBteqZCmpi	= 1314,
    Mips_SelTBteqZSlt	= 1315,
    Mips_SelTBteqZSlti	= 1316,
    Mips_SelTBteqZSltiu	= 1317,
    Mips_SelTBteqZSltu	= 1318,
    Mips_SelTBtneZCmp	= 1319,
    Mips_SelTBtneZCmpi	= 1320,
    Mips_SelTBtneZSlt	= 1321,
    Mips_SelTBtneZSlti	= 1322,
    Mips_SelTBtneZSltiu	= 1323,
    Mips_SelTBtneZSltu	= 1324,
    Mips_ShRxRyOffMemX16	= 1325,
    Mips_SllX16	= 1326,
    Mips_SllvRxRy16	= 1327,
    Mips_SltCCRxRy16	= 1328,
    Mips_SltRxRy16	= 1329,
    Mips_SltiCCRxImmX16	= 1330,
    Mips_SltiRxImm16	= 1331,
    Mips_SltiRxImmX16	= 1332,
    Mips_SltiuCCRxImmX16	= 1333,
    Mips_SltiuRxImm16	= 1334,
    Mips_SltiuRxImmX16	= 1335,
    Mips_SltuCCRxRy16	= 1336,
    Mips_SltuRxRy16	= 1337,
    Mips_SltuRxRyRz16	= 1338,
    Mips_SraX16	= 1339,
    Mips_SravRxRy16	= 1340,
    Mips_SrlX16	= 1341,
    Mips_SrlvRxRy16	= 1342,
    Mips_SubuRxRyRz16	= 1343,
    Mips_SwRxRyOffMemX16	= 1344,
    Mips_SwRxSpImmX16	= 1345,
    Mips_TAILCALL	= 1346,
    Mips_TAILCALL64_R	= 1347,
    Mips_TAILCALL_R	= 1348,
    Mips_TEQ	= 1349,
    Mips_TEQI	= 1350,
    Mips_TEQI_MM	= 1351,
    Mips_TEQ_MM	= 1352,
    Mips_TGE	= 1353,
    Mips_TGEI	= 1354,
    Mips_TGEIU	= 1355,
    Mips_TGEIU_MM	= 1356,
    Mips_TGEI_MM	= 1357,
    Mips_TGEU	= 1358,
    Mips_TGEU_MM	= 1359,
    Mips_TGE_MM	= 1360,
    Mips_TLT	= 1361,
    Mips_TLTI	= 1362,
    Mips_TLTIU_MM	= 1363,
    Mips_TLTI_MM	= 1364,
    Mips_TLTU	= 1365,
    Mips_TLTU_MM	= 1366,
    Mips_TLT_MM	= 1367,
    Mips_TNE	= 1368,
    Mips_TNEI	= 1369,
    Mips_TNEI_MM	= 1370,
    Mips_TNE_MM	= 1371,
    Mips_TRAP	= 1372,
    Mips_TRUNC_L_D64	= 1373,
    Mips_TRUNC_L_S	= 1374,
    Mips_TRUNC_W_D32	= 1375,
    Mips_TRUNC_W_D64	= 1376,
    Mips_TRUNC_W_S	= 1377,
    Mips_TTLTIU	= 1378,
    Mips_UDIV	= 1379,
    Mips_UDIV_MM	= 1380,
    Mips_VSHF_B	= 1381,
    Mips_VSHF_D	= 1382,
    Mips_VSHF_H	= 1383,
    Mips_VSHF_W	= 1384,
    Mips_WAIT	= 1385,
    Mips_WRDSP	= 1386,
    Mips_WSBH	= 1387,
    Mips_WSBH_MM	= 1388,
    Mips_XOR	= 1389,
    Mips_XOR64	= 1390,
    Mips_XORI_B	= 1391,
    Mips_XOR_MM	= 1392,
    Mips_XOR_V	= 1393,
    Mips_XOR_V_D_PSEUDO	= 1394,
    Mips_XOR_V_H_PSEUDO	= 1395,
    Mips_XOR_V_W_PSEUDO	= 1396,
    Mips_XORi	= 1397,
    Mips_XORi64	= 1398,
    Mips_XORi_MM	= 1399,
    Mips_XorRxRxRy16	= 1400,
    Mips_INSTRUCTION_LIST_END = 1401
};

#endif // GET_INSTRINFO_ENUM
