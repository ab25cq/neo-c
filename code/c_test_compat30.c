// Pointer/array corner cases: pointer-to-array params, restrict, static array args, VLA pointers, const qualification
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

static int sum_row4(const int (*row)[4]) {
    int s = 0;
    for (size_t i = 0; i < 4; i++) s += (*row)[i];
    return s;
}

static void bump3(int xs[static 3]) {
    xs[0] += 1;
    xs[1] += 1;
    xs[2] += 1;
}

static void copy_restrict(int *restrict dst, const int *restrict src, size_t n) {
    for (size_t i = 0; i < n; i++) dst[i] = src[i];
}

static void test_pointer_to_array(void) {
    int grid[2][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8}
    };
    REQUIRE(sum_row4(&grid[0]) == 10);
    REQUIRE(sum_row4(&grid[1]) == 26);

    int (*cursor)[4] = grid;
    REQUIRE(sum_row4(cursor) == 10);
    cursor += 1;
    REQUIRE(sum_row4(cursor) == 26);
}

static void test_static_array_param(void) {
    int buf[3] = {1, 2, 3};
    bump3(buf);
    REQUIRE(buf[0] == 2 && buf[1] == 3 && buf[2] == 4);
}

static void test_restrict_copy(void) {
    int src[4] = {7, 8, 9, 10};
    int dst[4] = {0, 0, 0, 0};
    copy_restrict(dst, src, 4);
    REQUIRE(dst[0] == 7 && dst[3] == 10);
}

static void test_vla_pointer(void) {
    int n = 5;
    int vla[n];
    for (int i = 0; i < n; i++) vla[i] = (i + 1) * 10;

    int (*pvla)[n] = &vla;
    REQUIRE((*pvla)[0] == 10);
    REQUIRE((*pvla)[n - 1] == 50);

    int *tail = &(*pvla)[2];
    REQUIRE(tail[0] == 30 && tail[2] == 50);
}

static void test_const_qualification(void) {
    int value = 11;
    const int *cp = &value;
    const void *vp = cp;
    const int *roundtrip = vp;
    REQUIRE(*roundtrip == 11);

    int pair[2] = {4, 9};
    int (*p)[2] = &pair;
    const int (*pc)[2] = p;
    REQUIRE((*pc)[1] == 9);
}

int main(void) {
    test_pointer_to_array();
    test_static_array_param();
    test_restrict_copy();
    test_vla_pointer();
    test_const_qualification();

    puts(g_ok ? "OK" : "NG");
    return g_ok ? 0 : 1;
}
