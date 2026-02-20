// Packed union + zero-width bitfield + flexible array
#include <stdio.h>
#include <stdbool.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>

#define REQUIRE(expr) do { \
    if (!(expr)) { \
        fprintf(stderr, "FAIL: %s at %s:%d\n", #expr, __FILE__, __LINE__); \
        ok = false; \
    } \
} while (0)

union __attribute__((packed)) PackedFlex {
    struct {
        unsigned a:3;
        unsigned :0; // next storage unit
        unsigned b:5;
    };
    struct {
        unsigned short count;
        char data[];
    };
};

int main(void) {
    bool ok = true;

    // bitfield view
    union PackedFlex pf = { .a = 5, .b = 7 };
    REQUIRE(pf.a == 5);
    REQUIRE(pf.b == 7);

    // flexible array view
    size_t n = 4;
    union PackedFlex *dyn = (union PackedFlex*)malloc(sizeof(unsigned short) + n);
    REQUIRE(dyn != NULL);
    if (dyn) {
        dyn->count = (unsigned short)n;
        memcpy(dyn->data, "xyz", n); // includes '\0'
        REQUIRE(dyn->count == 4);
        REQUIRE(strcmp(dyn->data, "xyz") == 0);
        free(dyn);
    }

    puts(ok ? "OK" : "NG");
    return ok ? 0 : 1;
}
