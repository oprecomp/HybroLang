/* Begin Header autogenerated part */
#include "h2-riscv-RV32G.h"
#define riscv_G32(INSN){ *(h2_asm_pc++) = (INSN);}

void RV32I_RET__I_32(void){ /* RET */
#ifdef H2_DEBUG
    printf("%p : RV32I_RET__I_32\n", h2_asm_pc);
#endif
	riscv_G32(((0x8067 >> 0) & 0xffffffff)); \
}  

void RV32M_MUL_RRR_I_32(int r3, int r1, int r2){ /* MUL */
#ifdef H2_DEBUG
    printf("%p : RV32M_MUL_RRR_I_32\n", h2_asm_pc);
#endif
	riscv_G32(((0x1 & 0x7f) << 25)|((r2 & 0x1f) << 20)|((r1 & 0x1f) << 15)|((0x0 & 0x7) << 12)|((r3 & 0x1f) << 7)|((0x33 & 0x7f) >> 0)); \
}  

void RV32I_MV_RR_I_32(int r0, int r1){ /* MV */
#ifdef H2_DEBUG
    printf("%p : RV32I_MV_RR_I_32\n", h2_asm_pc);
#endif
	riscv_G32(((0x0 & 0xfff) << 20)|((r1 & 0x1f) << 15)|((0x0 & 0x7) << 12)|((r0 & 0x1f) << 7)|((0x13 & 0x7f) >> 0)); \
}  

void RV32I_MV_RI_I_32(int r3, int i1){ /* MV */
#ifdef H2_DEBUG
    printf("%p : RV32I_MV_RI_I_32\n", h2_asm_pc);
#endif
	riscv_G32(((i1 & 0xfff) << 20)|((0x6 & 0xff) << 12)|((r3 & 0x1f) << 7)|((0x13 & 0x7f) >> 0)); \
}  
void riscv_genMUL_3(h2_sValue_t P0, h2_sValue_t P1, h2_sValue_t P2)
{

    if ((P0.arith == 'i') && (P0.wLen <= 32) && (P0.vLen == 1) && P0.ValOrReg == REGISTER && P1.ValOrReg == REGISTER && P2.ValOrReg == REGISTER)
    {
        RV32M_MUL_RRR_I_32(P0.regNro, P1.regNro, P2.regNro);
    }
    
    else
    {
        printf("Warning, generation of MUL is not possible with this arguments P0: %c, %i, %i,  P0: %i , P1: %i , P2: %i \n", P0.arith, P0.wLen, P0.vLen, P0.ValOrReg ,P1.ValOrReg ,P2.ValOrReg);
        h2_codeGenerationOK = 0;
    }
}
void riscv_genMUL_4(h2_sValue_t P0, h2_sValue_t P1, h2_sValue_t P2, h2_sValue_t P3)
{

    printf("Warning, generation of MUL is not possible with this arguments P0: %c, %i, %i,  P0: %i , P1: %i , P2: %i , P3: %i \n", P0.arith, P0.wLen, P0.vLen, P0.ValOrReg ,P1.ValOrReg ,P2.ValOrReg ,P3.ValOrReg);
    h2_codeGenerationOK = 0;

}
void riscv_genRET_0()
{

    RV32I_RET__I_32();

}
void riscv_genMV_2(h2_sValue_t P0, h2_sValue_t P1)
{

    if ((P0.arith == 'i') && (P0.wLen <= 32) && (P0.vLen == 1) && P0.ValOrReg == REGISTER && P1.ValOrReg == REGISTER)
    {
        RV32I_MV_RR_I_32(P0.regNro, P1.regNro);
    }
    
    else if ((P0.arith == 'i') && (P0.wLen <= 32) && (P0.vLen == 1) && P0.ValOrReg == REGISTER && P1.ValOrReg == VALUE)
    {
        RV32I_MV_RI_I_32(P0.regNro, P1.valueImm);
    }
    
    else
    {
        printf("Warning, generation of MV is not possible with this arguments P0: %c, %i, %i,  P0: %i , P1: %i \n", P0.arith, P0.wLen, P0.vLen, P0.ValOrReg ,P1.ValOrReg);
        h2_codeGenerationOK = 0;
    }
}

/* End Header autogenerated part */
// -*- c -*-
#include <stdio.h>
#include <stdlib.h>

typedef  int (*pifi)(int);

h2_insn_t * genMult(h2_insn_t * ptr, int  b)
{
/* Code Generation of 3 instructions */
/* Symbol table :*/
	/*VarName = { ValOrLen, arith, vectorLen, wordLen, regNo, Value} */
	h2_sValue_t a = {REGISTER, 'i', 1, 32, 10, 0};
	h2_sValue_t h2_outputVarName = {REGISTER, 'i', 1, 32, 10, 0};
	h2_sValue_t r = {REGISTER, 'i', 1, 32, 5, 0};
	h2_sValue_t h2_00000000 = {REGISTER, 'i', 1, 32, 6, 0};


/* Label  table :*/
#define riscv_genLABEL(LABEL_ID) labelAddresses[LABEL_ID] = h2_asm_pc;
h2_insn_t   * labelAddresses []={
	};


	h2_asm_pc = (h2_insn_t *) ptr;
	h2_codeGenerationOK = 1;
	riscv_genMV_2(h2_00000000, (h2_sValue_t) {VALUE, 'i', 1, 32, 0, (b)});
	riscv_genMUL_3(h2_00000000, h2_00000000, a);
	riscv_genMV_2(r, h2_00000000);
	riscv_genMV_2(h2_outputVarName, r);
	riscv_genRET_0();
	/* Call back code for loops */
	h2_save_asm_pc = h2_asm_pc;
	h2_asm_pc = h2_save_asm_pc;
	iflush(ptr, h2_asm_pc);

  return (h2_insn_t *) ptr;
}


int main(int argc, char * argv[])
{
  h2_insn_t * ptr;
  int in0, in1, res;
  pifi fPtr;


  if (argc < 3)
    {
      printf("Give 2 values\n");
      exit(-1);
    }
  in0  = atoi (argv[1]);   // Get the users values in1 & in2
  in1  = atoi (argv[2]);
  ptr  = h2_malloc (1024);  // Allocate memory for 1024 instructions
  printf("// Compilette for simple addition between 1 variable with\n");
  printf("// code specialization on value = %d\n", in0);
  fPtr = (pifi) genMult (ptr, in0); // Generate instructions
  res  = fPtr(in1);  // Call generated code
  printf("%d * %d = %d\n", in0, in1, res);
  if (res == (in0 * in1))
    return 0;
  else
    return -1;
}