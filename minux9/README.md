# minux9

version 1.2.4

unix like operating system on riscv.

VI, SHELL AND CC AND AS WORKS. ALSO NEO-C CPP LD.

This system is developed with neo-c too. Kernel and userland parts are built from neo-c sources and transpiled C sources.

This repository also includes its own RISC-V emulator. MINUX9 boots on that emulator, and MINUX9 can now run neo-c on MINUX9 itself. The guest /neo-c can transpile a Neo-C hello world program, then the guest cc, as, and ld can build a RISC-V executable, and MINUX9 can run that executable on the emulator.

Regression tests:

```
make test
make test-neoc-hello
```

sh fast_build.sh 

1.2.4 worked on almost all linux distribution. and mac os.
1.2.3 cpp works.
1.2.2 system
1.2.1 more stable cc
1.2.0 more stable cc
1.1.0 more stable cc and as
