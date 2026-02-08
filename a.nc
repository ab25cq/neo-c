#include <stdio.h>
#include <stdlib.h>


__attribute__((noreturn, cold)) static void nn_fail(const char* f, int line) {
    printf("null pointer exception %s %d\n", sname, sline);
    exit(1);
}

static inline __attribute__((always_inline)) void* come_null_check(void* p, const char* f, int line) {
    if (__builtin_expect(p != 0, 1)) return p;
    // 失敗は cold へ
    nn_fail(f, line);
}
