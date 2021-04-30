CFLAGS = -g -DH2_DEBUG -I../../HybroGen/include

demo-celciusFarenheit-riscv:
	make clean
	make CelciusFarenheit.riscv CC="riscv32-elf-gcc"
	make run-celciusFarenheit ARCH="riscv" SIM="qemu-riscv32"

demo-celciusFarenheit-power:
	make clean
	make CelciusFarenheit.power CC="powerpc64le-linux-gnu-gcc-8"
	make run-celciusFarenheit ARCH="power" SIM="qemu-ppc64le -L /usr/powerpc64le-linux-gnu/"

demo-mult-riscv:
	make clean
	make Mult-With-Specialization.riscv CC="riscv32-elf-gcc"
	make run-mult ARCH="riscv" SIM="qemu-riscv32"

demo-mult-power:
	make clean
	make Mult-With-Specialization.power CC="powerpc64le-linux-gnu-gcc-8"
	make run-mult ARCH="power" SIM="qemu-ppc64le -L /usr/powerpc64le-linux-gnu/"

demo-newton-riscv:
	make clean
	make Newton.riscv CC="riscv32-elf-gcc"
	make run-newton ARCH="riscv" SIM="qemu-riscv32"

demo-newton-power:
	make clean
	make Newton.power CC="powerpc64le-linux-gnu-gcc-8"
	make run-newton ARCH="power" SIM="qemu-ppc64le -L /usr/powerpc64le-linux-gnu/"


%.power: %.power.c
	$(CC) $< -o $@ ${CFLAGS}

%.riscv: %.riscv.c
	$(CC) $< -o $@ ${CFLAGS}


run-celciusFarenheit:
	make run-demo DEMOCODE=CelciusFarenheit.$(ARCH) DEMOARGS="3"

run-mult:
	make run-demo DEMOCODE=Mult-With-Specialization.$(ARCH) DEMOARGS="3, 25"

run-newton:
	make run-demo DEMOCODE=Newton.$(ARCH) DEMOARGS="65536 1e-13"

run-demo:
	$(SIM) ${DEMOCODE} ${DEMOARGS}

clean:
	rm -f *.power *.riscv
