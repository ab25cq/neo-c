#include <stdarg.h>
#include <stddef.h>
#include <stdint.h>
#include <stdbool.h>

void exit(int status) {
  // perform SYS_exit
  register long _a0 asm("a0") = (long)status;
  register long _a7 asm("a7") = 70;
  asm volatile("ecall" : "+r"(_a0) : "r"(_a7) : "memory");
  while (1) { }
}

