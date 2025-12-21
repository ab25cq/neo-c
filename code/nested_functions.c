// Demonstrates GCC nested functions (not supported by Clang)
#include <stdio.h>
#include <stdbool.h>

#define REQUIRE(expr) do { \
    if (!(expr)) { \
        fprintf(stderr, "FAIL: %s at %s:%d\n", #expr, __FILE__, __LINE__); \
        ok = false; \
    } \
} while (0)

#if defined(__clang__)
int main(void) {
    puts("[nested] skipped: requires GCC (nested functions)");
    return 0;
}
#else
int sum_scaled(const int *arr, int n, int factor) {
    // Nested function capturing 'factor' from the outer scope
    int scale(int x) { return x * factor; }

    int sum = 0;
    for (int i = 0; i < n; ++i) sum += scale(arr[i]);
    return sum;
}

int main(void) {
    bool ok = true;
    int xs[] = {1, 2, 3, 4};
    int s = sum_scaled(xs, 4, 5);
    REQUIRE(s == 50);
    puts(ok ? "OK" : "NG");
    return ok ? 0 : 1;
}
#endif
