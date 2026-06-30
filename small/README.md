# small

Minimal Linux x86_64 `-bare` sample for neo-c.

This project avoids libc and the neo-c runtime entirely. The `.nc` source emits
a tiny `_start` with Linux `write`/`exit` syscalls directly, then the Makefile
links it with a minimal ELF layout and strips section headers. On x86_64 Linux
the resulting runnable ELF is currently 174 bytes in this workspace.

```sh
../cpm/cpm build
make size
make run
```

Expected output:

```text
Hello World
```
