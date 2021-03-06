/* Begin Header autogenerated part */
#include "h2-riscv-RV32G.h"
#define riscv_G32(INSN){ *(h2_asm_pc++) = (INSN);}

void RV32I_RET__I_32(void){ /* RET */
#ifdef H2_DEBUG
    printf("%p : RV32I_RET__I_32\n", h2_asm_pc);
#endif
	riscv_G32(((0x8067 >> 0) & 0xffffffff)); \
}  

void RV32F_FMV_S_RR_F_32(int r3, int r1){ /* MV */
#ifdef H2_DEBUG
    printf("%p : RV32F_FMV_S_RR_F_32\n", h2_asm_pc);
#endif
	riscv_G32(((0x10 & 0x7f) << 25)|((r1 & 0x1f) << 20)|((r1 & 0x1f) << 15)|((0x0 & 0x7) << 12)|((r3 & 0x1f) << 7)|((0x53 & 0x7f) >> 0)); \
}  

void RV32D_FMV_D_RR_F_64(int r3, int r1){ /* MV */
#ifdef H2_DEBUG
    printf("%p : RV32D_FMV_D_RR_F_64\n", h2_asm_pc);
#endif
	riscv_G32(((0x11 & 0x7f) << 25)|((r1 & 0x1f) << 20)|((r1 & 0x1f) << 15)|((0x0 & 0x7) << 12)|((r3 & 0x1f) << 7)|((0x53 & 0x7f) >> 0)); \
}  

void RV32F_FDIV_S_RRR_F_32(int r3, int r1, int r2){ /* DIV */
#ifdef H2_DEBUG
    printf("%p : RV32F_FDIV_S_RRR_F_32\n", h2_asm_pc);
#endif
	riscv_G32(((0xc & 0x7f) << 25)|((r2 & 0x1f) << 20)|((r1 & 0x1f) << 15)|((0x0 & 0x7) << 12)|((r3 & 0x1f) << 7)|((0x53 & 0x7f) >> 0)); \
}  

void RV32D_FDIV_D_RRR_F_64(int r3, int r1, int r2){ /* DIV */
#ifdef H2_DEBUG
    printf("%p : RV32D_FDIV_D_RRR_F_64\n", h2_asm_pc);
#endif
	riscv_G32(((0xd & 0x7f) << 25)|((r2 & 0x1f) << 20)|((r1 & 0x1f) << 15)|((0x0 & 0x7) << 12)|((r3 & 0x1f) << 7)|((0x53 & 0x7f) >> 0)); \
}  

void RV32F_FADD_S_RRR_F_32(int r3, int r1, int r2){ /* ADD */
#ifdef H2_DEBUG
    printf("%p : RV32F_FADD_S_RRR_F_32\n", h2_asm_pc);
#endif
	riscv_G32(((0x0 & 0x7f) << 25)|((r2 & 0x1f) << 20)|((r1 & 0x1f) << 15)|((0x0 & 0x7) << 12)|((r3 & 0x1f) << 7)|((0x53 & 0x7f) >> 0)); \
}  

void RV32D_FADD_D_RRR_F_64(int r3, int r1, int r2){ /* ADD */
#ifdef H2_DEBUG
    printf("%p : RV32D_FADD_D_RRR_F_64\n", h2_asm_pc);
#endif
	riscv_G32(((0x1 & 0x7f) << 25)|((r2 & 0x1f) << 20)|((r1 & 0x1f) << 15)|((0x0 & 0x7) << 12)|((r3 & 0x1f) << 7)|((0x53 & 0x7f) >> 0)); \
}  
void riscv_genMV_2(h2_sValue_t P0, h2_sValue_t P1)
{

    if ((P0.arith == 'f') && (P0.wLen <= 32) && (P0.vLen == 1) && P0.ValOrReg == REGISTER && P1.ValOrReg == REGISTER)
    {
        RV32F_FMV_S_RR_F_32(P0.regNro, P1.regNro);
    }
    
    else if ((P0.arith == 'f') && (P0.wLen <= 64) && (P0.vLen == 1) && P0.ValOrReg == REGISTER && P1.ValOrReg == REGISTER)
    {
        RV32D_FMV_D_RR_F_64(P0.regNro, P1.regNro);
    }
    
    else
    {
        printf("Warning, generation of MV is not possible with this arguments P0: %c, %i, %i,  P0: %i , P1: %i \n", P0.arith, P0.wLen, P0.vLen, P0.ValOrReg ,P1.ValOrReg);
        h2_codeGenerationOK = 0;
    }
}
void riscv_genDIV_3(h2_sValue_t P0, h2_sValue_t P1, h2_sValue_t P2)
{

    if ((P0.arith == 'f') && (P0.wLen <= 32) && (P0.vLen == 1) && P0.ValOrReg == REGISTER && P1.ValOrReg == REGISTER && P2.ValOrReg == REGISTER)
    {
        RV32F_FDIV_S_RRR_F_32(P0.regNro, P1.regNro, P2.regNro);
    }
    
    else if ((P0.arith == 'f') && (P0.wLen <= 64) && (P0.vLen == 1) && P0.ValOrReg == REGISTER && P1.ValOrReg == REGISTER && P2.ValOrReg == REGISTER)
    {
        RV32D_FDIV_D_RRR_F_64(P0.regNro, P1.regNro, P2.regNro);
    }
    
    else
    {
        printf("Warning, generation of DIV is not possible with this arguments P0: %c, %i, %i,  P0: %i , P1: %i , P2: %i \n", P0.arith, P0.wLen, P0.vLen, P0.ValOrReg ,P1.ValOrReg ,P2.ValOrReg);
        h2_codeGenerationOK = 0;
    }
}
void riscv_genDIV_4(h2_sValue_t P0, h2_sValue_t P1, h2_sValue_t P2, h2_sValue_t P3)
{

    printf("Warning, generation of DIV is not possible with this arguments P0: %c, %i, %i,  P0: %i , P1: %i , P2: %i , P3: %i \n", P0.arith, P0.wLen, P0.vLen, P0.ValOrReg ,P1.ValOrReg ,P2.ValOrReg ,P3.ValOrReg);
    h2_codeGenerationOK = 0;

}
void riscv_genADD_3(h2_sValue_t P0, h2_sValue_t P1, h2_sValue_t P2)
{

    if ((P0.arith == 'f') && (P0.wLen <= 32) && (P0.vLen == 1) && P0.ValOrReg == REGISTER && P1.ValOrReg == REGISTER && P2.ValOrReg == REGISTER)
    {
        RV32F_FADD_S_RRR_F_32(P0.regNro, P1.regNro, P2.regNro);
    }
    
    else if ((P0.arith == 'f') && (P0.wLen <= 64) && (P0.vLen == 1) && P0.ValOrReg == REGISTER && P1.ValOrReg == REGISTER && P2.ValOrReg == REGISTER)
    {
        RV32D_FADD_D_RRR_F_64(P0.regNro, P1.regNro, P2.regNro);
    }
    
    else
    {
        printf("Warning, generation of ADD is not possible with this arguments P0: %c, %i, %i,  P0: %i , P1: %i , P2: %i \n", P0.arith, P0.wLen, P0.vLen, P0.ValOrReg ,P1.ValOrReg ,P2.ValOrReg);
        h2_codeGenerationOK = 0;
    }
}
void riscv_genRET_0()
{

    RV32I_RET__I_32();

}

/* End Header autogenerated part */
/* -*- c -*- */

#include <stdio.h>
#include <stdlib.h>

typedef  float  (*piff)(float,  float,  float);
typedef  double (*pidd)(double, double, double);
#define True 1
#define False 0
#define FLOAT 32
#define DOUBLE 64


/* Newton square root demonstration with variable precision */
h2_insn_t * genIterate(h2_insn_t * ptr, int FloatWidth)
{
/* Code Generation of 4 instructions */
/* Symbol table :*/
	/*VarName = { ValOrLen, arith, vectorLen, wordLen, regNo, Value} */
	h2_sValue_t u = {REGISTER, 'f', 1, (FloatWidth), 10, 0};
	h2_sValue_t val = {REGISTER, 'f', 1, (FloatWidth), 11, 0};
	h2_sValue_t div = {REGISTER, 'f', 1, (FloatWidth), 12, 0};
	h2_sValue_t h2_outputVarName = {REGISTER, 'f', 1, (FloatWidth), 10, 0};
	h2_sValue_t r = {REGISTER, 'f', 1, (FloatWidth), 0, 0};
	h2_sValue_t tmp1 = {REGISTER, 'f', 1, (FloatWidth), 1, 0};
	h2_sValue_t tmp2 = {REGISTER, 'f', 1, (FloatWidth), 2, 0};
	h2_sValue_t h2_00000000 = {REGISTER, 'f', 1, (FloatWidth), 3, 0};


/* Label  table :*/
#define riscv_genLABEL(LABEL_ID) labelAddresses[LABEL_ID] = h2_asm_pc;
h2_insn_t   * labelAddresses []={
	};


	h2_asm_pc = (h2_insn_t *) ptr;
	h2_codeGenerationOK = 1;
	riscv_genDIV_3(h2_00000000, val, u);
	riscv_genMV_2(tmp1, h2_00000000);
	riscv_genADD_3(h2_00000000, u, tmp1);
	riscv_genMV_2(tmp2, h2_00000000);
	riscv_genDIV_3(h2_00000000, tmp2, div);
	riscv_genMV_2(h2_outputVarName, h2_00000000);
	riscv_genRET_0();
	/* Call back code for loops */
	h2_save_asm_pc = h2_asm_pc;
	h2_asm_pc = h2_save_asm_pc;
	iflush(ptr, h2_asm_pc);
 	  /* r = (u + (#(value) / u))  / 2.0*/

  return (h2_insn_t *) ptr;
}

#define ABS(x) ((x < 0) ? -(x) : (x))

int main(int argc, char **argv)
{
    int a, isFloat, iterationNumber;
    double af, precf, precd, value, next, diff;
    piff fPtr1;
    pidd fPtr2;
    h2_insn_t * ptr;
    char input;
    if (argc < 3)
    {
	printf ("Newton <value> <precision>\n");
	exit(-1);
    }
    iterationNumber = 0;
    a =  atoi (argv[1]);
    af = atof (argv[1]);
    precd = atof (argv[2]);
    precf = precd * 1.e14;
    ptr  = h2_malloc (1024);
    isFloat = True;
    printf ("Compute square root of %f\n", af);
    printf ("With precision of %e (float)\n", precf);
    printf ("With precision of %e (double)\n", precd);
    next = 1.0;
    diff = af;

    fPtr1 = (piff) genIterate (ptr, FLOAT);
    do
    {
	if ((diff < precf) && isFloat)
	{ 		/* Code re-generation with double for better precision */
	    fPtr2 = (pidd) genIterate (ptr, DOUBLE);
	    isFloat = False;
	}
	value = next;
	next = (isFloat)?fPtr1(value, af, 2.0):fPtr2(value, af, 2.0);
	diff = ABS(next - value);
	printf("%3d %s : %.20f, %e\n",
	       iterationNumber++,
	       isFloat?"float ":"double",
	       next, isFloat?precf:precd);
    } while ( isFloat || (!isFloat && (diff > precd)));
    return 0;
}
