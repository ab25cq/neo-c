// 配列の初期化・ポインタ変換・多次元配列の基本動作を確認するテスト
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

static int sum_ints(const int *xs, size_t n) {
    int s = 0;
    for (size_t i = 0; i < n; i++) {
        s += xs[i];
    }
    return s;
}

static int sum_rows(const int (*matrix)[3], size_t rows) {
    int s = 0;
    for (size_t r = 0; r < rows; r++) {
        for (size_t c = 0; c < 3; c++) {
            s += matrix[r][c];
        }
    }
    return s;
}

int main(void) {
    bool ok = true;

    // 配列コピーと長さ計算
    const int primes[] = { 2, 3, 5, 7, 11, 13 };
    int copy[sizeof primes / sizeof primes[0]];
    memcpy(copy, primes, sizeof primes);
    CHECK(sum_ints(copy, sizeof copy / sizeof copy[0]) == 41);

    // 多次元配列と配列ポインタ
    int grid[3][3] = {
        { 1, 2, 3 },
        { 4, 5, 6 },
        [2] = { 7, 8, 9 },
    };
    CHECK((sizeof grid / sizeof grid[0]) == (size_t)3);
    CHECK((sizeof grid[0] / sizeof grid[0][0]) == (size_t)3);
    CHECK(sum_rows(grid, sizeof grid / sizeof grid[0]) == 45);
    int (*row1)[3] = &grid[1];
    CHECK((*row1)[1] == 5);
    int *flat = &grid[0][0];
    CHECK(*(flat + 4) == 5);
    CHECK(*(*(grid + 2) + 1) == 8);

    // 指定子初期化子で間引き埋め
    int sparse[5] = { [1] = 7, [4] = 9 };
    CHECK(sparse[0] == 0 && sparse[2] == 0 && sparse[1] == 7 && sparse[4] == 9);

    // 構造体配列の部分初期化
    struct Pair { int a; int b; };
    struct Pair pairs[3] = { { 1, 2 }, [2] = { 5, 6 } };
    CHECK(pairs[1].a == 0 && pairs[1].b == 0);
    CHECK(pairs[2].a == 5 && pairs[2].b == 6);

    // 配列の複合リテラルを渡す
    int via_literal = sum_ints((int[]){ 10, 20, 30, 40 }, 4);
    CHECK(via_literal == 100);

    // 配列ポインタのポインタ演算
    int data[4] = { 0, 1, 2, 3 };
    int (*p_data)[4] = &data;
    ptrdiff_t diff = (char *)(p_data + 1) - (char *)p_data;
    CHECK((size_t)diff == sizeof data);

    puts(ok ? "OK" : "NG");
    return ok ? 0 : 1;
}
