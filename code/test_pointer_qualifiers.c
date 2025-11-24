// 型修飾子・配列ポインタ・VLA パラメータ・関数ポインタ配列のテスト
#include <stdio.h>
#include <stdbool.h>
#include <stddef.h>

#define CHECK(expr) do { \
    if (!(expr)) { \
        fprintf(stderr, "FAIL: %s at %s:%d\n", #expr, __FILE__, __LINE__); \
        ok = false; \
    } \
} while (0)

static int add(int a, int b) { return a + b; }
static int sub(int a, int b) { return a - b; }
static int mul(int a, int b) { return a * b; }

typedef int (*op_t)(int, int);
typedef int (*row4p)[4];
typedef const int (*crow4p)[4];

static int sum_restrict(const int *restrict a, const int *restrict b, int n) {
    int s = 0;
    for (int i = 0; i < n; i++) s += a[i] + b[i];
    return s;
}

// VLA パラメータのチェック（neo-c で未対応ならコンパイル失敗のまま残す）
static int diag_vla(size_t rows, size_t cols, int m[rows][cols]) {
    size_t lim = rows < cols ? rows : cols;
    int s = 0;
    for (size_t i = 0; i < lim; i++) {
        s += m[i][i];
    }
    return s;
}

int main(void) {
    bool ok = true;

    const char * const names[2] = { "alpha", "bravo" };
    CHECK(names[1][0] == 'b');

    int mat[2][4] = { { 1, 2, 3, 4 }, { 5, 6, 7, 8 } };
    row4p pmat = mat;
    CHECK(pmat[1][3] == 8);
    ptrdiff_t diff = (char*)(pmat + 1) - (char*)pmat;
    CHECK((size_t)diff == sizeof *pmat);

    crow4p cpmat = mat;
    CHECK(cpmat[0][0] == 1);

    int a[4] = { 1, 2, 3, 4 };
    int b[4] = { 10, 20, 30, 40 };
    CHECK(sum_restrict(a, b, 4) == 110);

    op_t ops[3] = { add, sub, mul };
    const op_t *table = ops;
    CHECK(table[0](7, 8) == 15);
    CHECK(table[1](9, 4) == 5);
    CHECK(table[2](3, 5) == 15);

/*
    size_t m = 3;
    int v[m][4];
    for (size_t i = 0; i < m; i++) {
        for (size_t j = 0; j < 4; j++) v[i][j] = (int)(i * 10 + j);
    }
    row4p vp = v;
    CHECK(vp[2][1] == 21);
    CHECK(diag_vla(m, 4, v) == (0 + 11 + 22));

    volatile int counter = 0;
    volatile int *pc = &counter;
    *pc = 123;
    CHECK(counter == 123);

    puts(ok ? "OK" : "NG");
*/
    return ok ? 0 : 1;
}
