# HybroLang
HybroLang programming language and compiler to create dynamic application : transprecision, dynamic optmization

This DSL (Domain Specific Language) help to developp applications that can re-generate a part of the binary code at run-time in order to take advantage of the knowledge of running values. The code regeneration is faster than any JIT compiler and very small (few Kb). The parameter to regenerate the code can be:
* Precision : regenerate the code with an adaptive precision
* Values : running code can be simplified by the knowledge of constants.
* Architecture : we can generate running code accross multiple architecture (e.g. generate RISCV binary code on a POWER system) which can be transfered on a computing node

This directory contains three demonstrators

* CelciusFarenheit : which is an example of dynamic compilation for an
  arithmetic expression

* Mult-With-Specialization : is a more sophisticated example where a
  run-time constant is included during the code generation

* Newton : is a trans-precision example where the Newton algorithm is
  transformed at run time from 32 bits to 64 bis version to increase
  precision.

In order to run the demonstration you should install the following software

* For riscv : qemu-riscv32 as emulator and the cross compiler riscv32-elf-gcc
* For power : qemu-ppc64le as emulator and the cross compiler powerpc64le-linux-gnu-gcc-8