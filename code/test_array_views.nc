// 配列ビューと配列ポインタの扱いを集中的に試すサンプル
#include <stdio.h>
#include <stdbool.h>
#include <stddef.h>
#include <string.h>

#define CHECK(expr) do { \
    if (!(expr)) { \
        fprintf(stderr, "FAIL: %s at %s:%d\n", #expr, __FILE__, __LINE__); \
        ok = false; \
    } \
} while (0)

typedef int quad_t[4];

static int sum_quad(const quad_t *q) {
    int s = 0;
    for (size_t i = 0; i < 4; i++) {
        s += (*q)[i];
    }
    return s;
}

static void fill_rows(quad_t *m, size_t rows, int start) {
    for (size_t r = 0; r < rows; r++) {
        for (size_t c = 0; c < 4; c++) {
            m[r][c] = start + (int)(r * 10 + c);
        }
    }
}

static void copy_middle3(int dst[static 3], const int src[static 5]) {
    memcpy(dst, src + 1, 3 * sizeof(int));
}

int main(void) {
    bool ok = true;

    quad_t table[3];
    fill_rows(table, 3, 0);
    CHECK(table[0][0] == 0);
    CHECK(table[1][3] == 13);
    CHECK(table[2][1] == 21);

    size_t stride = (size_t)((char *)(table + 1) - (char *)table);
    CHECK(stride == sizeof table[0]);

    quad_t *row1 = &table[1];
    CHECK((*row1)[2] == 12);
    quad_t *tail = table + 1;
    CHECK(tail[1][3] == 23);

    const quad_t *rows = table;
    CHECK(sum_quad(&rows[2]) == 20 + 21 + 22 + 23);

    quad_t scratch = { 3, 1, 4, 1 };
    CHECK(sum_quad(&scratch) == 9);

    int window[5] = { 5, 6, 7, 8, 9 };
    int middle[3] = { 0 };
    copy_middle3(middle, window);
    CHECK(middle[0] == 6 && middle[2] == 8);

    int projected[3];
    for (size_t r = 0; r < 3; r++) {
        projected[r] = table[r][2];
    }
    CHECK(projected[0] == 2 && projected[2] == 22);

    puts(ok ? "OK" : "NG");
    return ok ? 0 : 1;
}
