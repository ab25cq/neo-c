neo-c -bare neoc_hello.nc
cc -S -o neoc_hello.s neoc_hello.c
as -c neoc_hello.s -o neoc_hello.o
ld -o neoc_hello crt0.o neoc_hello.o
neoc_hello
