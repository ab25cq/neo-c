// C23/C++ style [[...]] attribute compatibility
#include <stdio.h>
#include <stdbool.h>

#define REQUIRE(expr) do { \
    if (!(expr)) { \
        fprintf(stderr, "FAIL: %s at %s:%d\n", #expr, __FILE__, __LINE__); \
        ok = false; \
    } \
} while (0)

[[maybe_unused]] static int g_unused = 0;

[[nodiscard]] static int make_value(void) {
    return 7;
}

[[deprecated("legacy")]] static int old_api(void) {
    return 1;
}

struct [[gnu::packed]] PackedByGnu {
    char c;
    int i;
};

struct [[gnu::aligned(32)]] AlignedByGnu {
    char c;
};

[[gnu::noinline]] static int add1(int x) {
    return x + 1;
}

int main(void) {
    bool ok = true;

    REQUIRE(sizeof(struct PackedByGnu) == 5);
    REQUIRE(_Alignof(struct AlignedByGnu) >= 32);
    REQUIRE(add1(10) == 11);
    REQUIRE(make_value() == 7);
    REQUIRE(old_api() == 1);
    REQUIRE(g_unused == 0);

    puts(ok ? "OK" : "NG");
    return ok ? 0 : 1;
}
