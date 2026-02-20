// __declspec compatibility (mapped to GNU attributes where possible)
#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>

#define REQUIRE(expr) do { \
    if (!(expr)) { \
        fprintf(stderr, "FAIL: %s at %s:%d\n", #expr, __FILE__, __LINE__); \
        ok = false; \
    } \
} while (0)

__declspec(align(16)) struct DeclspecPrefix {
    char c;
};

struct __declspec(align(8)) DeclspecMiddle {
    char c;
};

__declspec(noinline) int noinline_prefix(int x) {
    return x + 1;
}

int noinline_suffix(int x) __declspec(noinline);
int noinline_suffix(int x) {
    return x + 2;
}

int aligned_global __declspec(align(32)) = 11;
__declspec(selectany) int ignored_declspec = 9;

int main(void) {
    bool ok = true;

    REQUIRE(_Alignof(struct DeclspecPrefix) >= 16);
    REQUIRE(_Alignof(struct DeclspecMiddle) >= 8);
    REQUIRE((((uintptr_t)&aligned_global) & 31) == 0);
    REQUIRE(noinline_prefix(10) == 11);
    REQUIRE(noinline_suffix(10) == 12);
    REQUIRE(ignored_declspec == 9);

    puts(ok ? "OK" : "NG");
    return ok ? 0 : 1;
}
