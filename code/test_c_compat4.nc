// C 言語互換性テスト (4):
// - 2 次元配列引数 (static 長さ指定)
// - 関数ポインタとビット演算
// - pointer 差分と struct/enum の基本
// - volatile への書き込み、void* 変換
// - union 経由での共用体メモリ共有 (エンディアン非依存チェック)

#include <stdio.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <string.h>

#define REQUIRE(expr) do { \
    if (!(expr)) { \
        fprintf(stderr, "FAIL: %s at %s:%d\n", #expr, __FILE__, __LINE__); \
        ok = false; \
    } \
} while (0)

_Static_assert(sizeof(ptrdiff_t) >= sizeof(int), "ptrdiff_t size");
_Static_assert(_Alignof(long double) >= _Alignof(double), "long double align");

typedef unsigned (*uop_t)(unsigned);

static unsigned rotl5(unsigned x) {
    const unsigned bits = sizeof(unsigned) * 8;
    unsigned n = 5u % bits;
    return (x << n) | (x >> (bits - n));
}

static int sum_matrix(int rows, int cols, int m[static rows][cols]) {
    int s = 0;
    for (int r = 0; r < rows; r++) {
        for (int c = 0; c < cols; c++) s += m[r][c];
    }
    return s;
}

struct Pair {
    int a;
    int b;
};

enum Stage {
    STAGE_INIT = 1,
    STAGE_RUN,
    STAGE_DONE = STAGE_RUN + 2
};

union Bytes32 {
    uint32_t u32;
    unsigned char b[4];
};

int main(void) {
    bool ok = true;

    // pointer 差分は ptrdiff_t
    char buf[10] = {0};
    ptrdiff_t diff = &buf[7] - &buf[2];
    REQUIRE(diff == 5);

    // 2D 配列引数と static 長さ指定
    int mat[2][3] = { {1,2,3}, {4,5,6} };
    REQUIRE(sum_matrix(2, 3, mat) == 21);

    // 関数ポインタ + ビット演算
    uop_t ops[] = { rotl5 };
    unsigned v = 0x12345678u;
    unsigned rotated = ops[0](v);
    REQUIRE(rotated == 0x468acf02u);

    // struct の指定子と値コピー
    struct Pair p = { .b = 9, .a = 4 };
    REQUIRE(p.a == 4 && p.b == 9);
    struct Pair p2 = p;
    REQUIRE(memcmp(&p, &p2, sizeof(p)) == 0);
    REQUIRE(offsetof(struct Pair, b) >= (int)sizeof(int));

    // enum と switch
    enum Stage st = STAGE_DONE;
    int rs = 0;
    switch (st) {
        case STAGE_INIT: rs = 1; break;
        case STAGE_RUN: rs = 2; break;
        case STAGE_DONE: rs = 3; break;
        default: rs = -1; break;
    }
    REQUIRE(rs == 3);
    REQUIRE(st == 4);

    // volatile への書き込みと void* 変換
    volatile int vi = 0;
    void *vp = (void*)&vi;
    int *ip = (int*)vp;
    *ip = 7;
    REQUIRE(vi == 7);

    // union を使った共用体の別名アクセス (エンディアン非依存チェック)
    union Bytes32 u = { .u32 = 0x01020304u };
    unsigned sum = (unsigned)u.b[0] + (unsigned)u.b[3];
    REQUIRE(sum == 0x05u);

    // memmove のオーバーラップ
    char text[12] = "abcdef";
    memmove(text + 2, text, 6); // "ababcdef"
    REQUIRE(memcmp(text, "ababcdef", 9) == 0);

    puts(ok ? "OK" : "NG");
    return ok ? 0 : 1;
}
