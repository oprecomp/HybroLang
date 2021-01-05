# HybroLang
HybroLang programming language and compiler to create dynamic application : transprecision, dynamic optmization

This DSL (Domain Specific Language) help to developp applications that can re-generate a part of the binary code at run-time in order to take advantage of the knowledge of running values. The code regeneration is faster than any JIT compiler and very small (few Kb). The parameter to regenerate the code can be:
* Precision : regenerate the code with an adaptive precision
* Values : running code can be simplified by the knowledge of constants.
* Architecture : we can generate running code accross multiple architecture (e.g. generate RISCV binary code on a POWER system) which can be transfered on a computing node
