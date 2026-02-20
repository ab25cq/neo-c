// Pointer/array edge cases: pointer subtraction, VLA params, pointer-to-array, pointer-of-pointer arrays, FAM buffers
#include <stdio.h>
#include <stdbool.h>
#include <stddef.h>
#include <string.h>

static bool g_ok = true;

#define REQUIRE(expr) do { \
    if (!(expr)) { \
        fprintf(stderr, "FAIL: %s at %s:%d\n", #expr, __FILE__, __LINE__); \
        g_ok = false; \
    } \
} while (0)

static void test_pointer_subtraction(void) {
    int xs[] = {10, 20, 30, 40};
    ptrdiff_t d = &xs[3] - &xs[0];
    REQUIRE(d == 3);
    REQUIRE(&xs[1] > &xs[0]);
    REQUIRE(&xs[0] < &xs[2]);
}

static int sum_matrix(int rows, int cols, int m[rows][cols]) {
    int total = 0;
    for (int r = 0; r < rows; r++) {
        for (int c = 0; c < cols; c++) total += m[r][c];
    }
    return total;
}

static void fill_matrix(int rows, int cols, int (*pm)[cols]) {
    for (int r = 0; r < rows; r++) {
        for (int c = 0; c < cols; c++) {
            pm[r][c] = (r + 1) * 10 + c;
        }
    }
}

static void test_vla_matrix(void) {
    int r = 2, c = 3;
    int mat[r][c];
    fill_matrix(r, c, mat);
    REQUIRE(mat[0][0] == 10);
    REQUIRE(mat[1][2] == 22);
    REQUIRE(sum_matrix(r, c, mat) == 10 + 11 + 12 + 20 + 21 + 22);
}

static void test_pointer_to_array_object(void) {
    static const char greeting[] = "hey";
    const char (*pg)[sizeof greeting] = &greeting;
    REQUIRE((*pg)[0] == 'h');
    REQUIRE((*pg)[2] == 'y');
}

static void test_pointer_of_pointer_array(void) {
    int a = 4, b = 9;
    int *table[2] = { &a, &b };
    int **pp = table;
    REQUIRE(pp[0] == &a && *pp[0] == 4);
    REQUIRE(pp[1] == &b && *pp[1] == 9);
}

struct Packet {
    size_t len;
    unsigned char data[];
};

static void test_flexible_array_buffer(void) {
    unsigned char storage[offsetof(struct Packet, data) + 4];
    struct Packet *pkt = (struct Packet *)storage;
    pkt->len = 4;
    memcpy(pkt->data, "ABCD", 4);
    REQUIRE(pkt->len == 4);
    REQUIRE(pkt->data[0] == 'A' && pkt->data[3] == 'D');
}

int main(void) {
    test_pointer_subtraction();
    test_vla_matrix();
    test_pointer_to_array_object();
    test_pointer_of_pointer_array();
    test_flexible_array_buffer();

    puts(g_ok ? "OK" : "NG");
    return g_ok ? 0 : 1;
}
