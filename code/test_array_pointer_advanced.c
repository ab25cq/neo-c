// 配列とポインタの各種挙動を網羅的に確認するテスト
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

static int add(int x, int y) { return x + y; }
static int sub(int x, int y) { return x - y; }

typedef int (*binop_t)(int, int);

static binop_t select_op(bool plus) {
    return plus ? add : sub;
}

static int sum_static3(const int xs[static 3]) {
    return xs[0] + xs[1] + xs[2];
}

static int sum_mat2(const int (*m)[2], size_t rows) {
    int s = 0;
    for (size_t r = 0; r < rows; r++) {
        for (size_t c = 0; c < 2; c++) {
            s += m[r][c];
        }
    }
    return s;
}

static void fill_seq(int *p, size_t n) {
    for (size_t i = 0; i < n; i++) p[i] = (int)i;
}

int main(void) {
    bool ok = true;

    int a[4] = { 1, 2, 3, 4 };
    int *pa = a;
    CHECK(sizeof a == 4 * sizeof(int));
    CHECK(sizeof pa == sizeof(int*));
    CHECK(*(pa + 2) == 3);
    CHECK((&a[3] - &a[0]) == 3);
    ptrdiff_t byte_span = (char*)&a[3] - (char*)&a[1];
    CHECK((size_t)byte_span == 2 * sizeof(int));

    int mat[2][2] = { { 1, 2 }, { 3, 4 } };
    int (*pm)[2] = mat;
    CHECK(pm[1][1] == 4);
    ptrdiff_t row_bytes = (char*)(pm + 1) - (char*)pm;
    CHECK((size_t)row_bytes == sizeof mat[0]);
    CHECK(sum_mat2(mat, 2) == 10);

    int arr3[3] = { 5, 6, 7 };
    CHECK(sum_static3(arr3) == 18);

    int arr5[5];
    fill_seq(arr5, 5);
    int *end = arr5 + 5;
    CHECK(end - arr5 == 5);
    CHECK(arr5[3] == 3);

    size_t v = 3;
    int vla[v];
    for (size_t i = 0; i < v; i++) vla[i] = (int)(10 + i);
    // neo-c が対応しているか確認するための配列ポインタキャスト（失敗した場合はそのままにする）
    int (*pv)[3] = (int (*)[3])&vla; // VLA への配列ポインタキャスト
    CHECK((*pv)[2] == 12);
    int *dv = vla;
    CHECK(dv[1] == 11);

    char *words[] = { "alpha", "beta", "gamma" };
    char **wp = words;
    CHECK(strcmp(*(wp + 1), "beta") == 0);
    CHECK(wp[2][0] == 'g');

    int (*funcs[2])(int, int) = { add, sub };
    CHECK(funcs[0](9, 4) == 13);
    CHECK(funcs[1](9, 4) == 5);
    // 配列の先頭を指す関数ポインタのポインタ
    int (**pf)(int, int) = funcs;
    CHECK(pf[1](20, 5) == 15);
    // 関数ポインタを返す関数
    binop_t pick_plus = select_op(true);
    binop_t pick_minus = select_op(false);
    CHECK(pick_plus(7, 2) == 9);
    CHECK(pick_minus(7, 2) == 5);
    // 複数候補から添字で選択
    size_t idx = 1;
    CHECK((funcs + idx)[0](100, 30) == 70); // sub

    struct Holder { int buf[3]; int *p; };
    struct Holder h = { .buf = { 9, 8, 7 }, .p = NULL };
    h.p = h.buf;
    CHECK(*(h.p + 2) == 7);
    h.p = &h.buf[1];
    CHECK(h.p[0] == 8 && h.p[-1] == 9);

    int overlap[6];
    fill_seq(overlap, 6); // 0,1,2,3,4,5
    memmove(overlap + 1, overlap, 4 * sizeof(int)); // shift first 4 to the right
    CHECK(overlap[0] == 0);
    CHECK(overlap[1] == 0);
    CHECK(overlap[4] == 3);

    // 平坦な 2D 配列としてポインタ経由でアクセス
    int diag[2][3] = { { 1, 2, 3 }, { 4, 5, 6 } };
    int *flat = &diag[0][0];
    CHECK(*(flat + 5) == 6);
    CHECK(*(*(diag + 1) + 0) == 4);

    puts(ok ? "OK" : "NG");
    return ok ? 0 : 1;
}
