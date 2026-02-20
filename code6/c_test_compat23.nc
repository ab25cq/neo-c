// Anonymous member + flexible array
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#define REQUIRE(expr) do { \
    if (!(expr)) { \
        fprintf(stderr, "FAIL: %s at %s:%d\n", #expr, __FILE__, __LINE__); \
        ok = false; \
    } \
} while (0)

struct Flex {
    int len;
    struct {
        char data[];
    };
};

int main(void) {
    bool ok = true;

    int n = 5;
    struct Flex *f = malloc(sizeof(struct Flex) + n);
    REQUIRE(f != NULL);
    if (f) {
        f->len = n;
        memcpy(f->data, "abcd", n); // includes '\0'
        REQUIRE(f->len == 5);
        REQUIRE(strcmp(f->data, "abcd") == 0);
        free(f);
    }

    puts(ok ? "OK" : "NG");
    return ok ? 0 : 1;
}
