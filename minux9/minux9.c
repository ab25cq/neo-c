#include <stdarg.h>
#include <stddef.h>
#include <stdint.h>
#include <stdbool.h>

long write(int fd, const void* buf, unsigned long len) {
  register long _a0 asm("a0") = (long)fd;
  register long _a1 asm("a1") = (long)buf;
  register long _a2 asm("a2") = (long)len;
  register long _a7 asm("a7") = 64;
  asm volatile("ecall" : "+r"(_a0) : "r"(_a1), "r"(_a2), "r"(_a7) : "memory");
  return _a0;
}

void putchar(char c) {
  write(1, &c, 1);
}

void puts(const char* s) {
  while (*s) {
    putchar(*s++);
  }
  putchar('\n');
}

void exit(int status) {
  // perform SYS_exit
  register long _a0 asm("a0") = (long)status;
  register long _a7 asm("a7") = 70;
  asm volatile("ecall" : "+r"(_a0) : "r"(_a7) : "memory");
  while (1) { }
}
