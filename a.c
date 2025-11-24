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

typedef int row4[4];

static int sum_row(row4 r) {
    return r[0] + r[1] + r[2] + r[3];
}

static int dot_restrict(const int *restrict a, const int *restrict b, int n) {
    int s = 0;
    for (int i = 0; i < n; i++) s += a[i] * b[i];
    return s;
}

static row4* select_row(row4 *m, size_t idx) {
    return &m[idx];
}

// VLA パラメータを neo-c が受け付けるか確認するテスト（失敗したらそのまま）
static int vla_diag_sum(size_t n, int m[n][n]) {
    int diag = 0;
    for (size_t i = 0; i < n; i++) {
        diag += m[i][i];
    }
    return diag;
}

int main(void) {
    bool ok = true;

    row4 mat[3] = {
        { 1, 2, 3, 4 },
        { 5, 6, 7, 8 },
        { 9,10,11,12 },
    };
    CHECK(sum_row(mat[0]) == 10);
    CHECK(sum_row(mat[2]) == 42);

    row4 *prow = mat;
    CHECK(prow[1][2] == 7);
/*
    ptrdiff_t row_bytes = (char*)(prow + 1) - (char*)prow;
    CHECK((size_t)row_bytes == sizeof(row4));

    row4 *picked = select_row(mat, 2);
    CHECK((*picked)[3] == 12);

    const int c1[4] = { 1, 2, 3, 4 };
    const int c2[4] = { 10, 20, 30, 40 };
    CHECK(dot_restrict(c1, c2, 4) == 300);

    int diag2[2][2] = { { 1, 2 }, { 3, 4 } };
    CHECK(diag2[1][0] == 3);

    // フラットアクセス
    int *flat = &mat[0][0];
    CHECK(*(flat + 5) == 6);
    CHECK(*(*(mat + 2) + 1) == 10);

    // VLA サマリ（neo-c が対応していない場合はエラーのまま残す）
    size_t n = 3;
    int vla[n][n];
    for (size_t i = 0; i < n; i++) {
        for (size_t j = 0; j < n; j++) vla[i][j] = (int)(i + j);
    }
    CHECK(vla_diag_sum(n, vla) == (0 + 2 + 4));

    // 配列ポインタを const で受ける関数が通るか
    const row4 *pcmat = mat;
    CHECK(pcmat[0][1] == 2);
*/

    puts(ok ? "OK" : "NG");
    return ok ? 0 : 1;
}
