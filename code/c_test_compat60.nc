// C11 VLA + restrict static parameters
#include <stdio.h>
#include <stdbool.h>
#include <stddef.h>

static bool g_ok = true;

#define REQUIRE(expr) do { \
    if (!(expr)) { \
        fprintf(stderr, "FAIL: %s at %s:%d\n", #expr, __FILE__, __LINE__); \
        g_ok = false; \
    } \
} while (0)

static int dot_n(size_t n, const int a[restrict static n], const int b[restrict static n])
{
    int sum = 0;
    for (size_t i = 0; i < n; ++i) {
        sum += a[i] * b[i];
    }
    return sum;
}

static int matrix_sum(size_t rows, size_t cols, int m[rows][cols])
{
    int sum = 0;
    for (size_t r = 0; r < rows; ++r) {
        for (size_t c = 0; c < cols; ++c) {
            sum += m[r][c];
        }
    }
    return sum;
}

int main(void)
{
    size_t n = 4;
    int a[4] = { 1, 2, 3, 4 };
    int b[4] = { 5, 6, 7, 8 };
    REQUIRE(dot_n(n, a, b) == 70);

    size_t rows = 2;
    size_t cols = 3;
    int m[2][3] = {
        { 1, 2, 3 },
        { 4, 5, 6 },
    };
    int (*pm)[cols] = m;
    REQUIRE(pm[1][2] == 6);
    REQUIRE(matrix_sum(rows, cols, m) == 21);

    int vla[n];
    for (size_t i = 0; i < n; ++i) {
        vla[i] = (int)i;
    }
    REQUIRE(vla[3] == 3);
    REQUIRE(_Alignof(int) >= sizeof(int));

    puts(g_ok ? "OK" : "NG");
    return g_ok ? 0 : 1;
}
