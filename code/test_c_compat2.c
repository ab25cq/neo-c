// C 言語互換性テスト (2):
// - VLA と static 配列長仮引数
// - restrict 付きポインタ
// - alignas/_Alignof による配置
// - offsetof と構造体の値コピー
// - enum の値と switch

#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include <stdbool.h>
#include <string.h>

#define REQUIRE(expr) do { \
    if (!(expr)) { \
        fprintf(stderr, "FAIL: %s at %s:%d\n", #expr, __FILE__, __LINE__); \
        ok = false; \
    } \
} while (0)

// restrict 付きの単純なドット積
static int dot3(const int x[restrict static 3], const int y[restrict static 3]) {
    int s = 0;
    for (int i = 0; i < 3; i++) s += x[i] * y[i];
    return s;
}

// VLA を使った簡易テーブル
static int vla_diag_sum(size_t n) {
    int m[n][n];
    for (size_t i = 0; i < n; i++) {
        for (size_t j = 0; j < n; j++) m[i][j] = (int)(i + j);
    }
    int diag = 0;
    for (size_t k = 0; k < n; k++) diag += m[k][k];
    return diag;
}

struct Packed {
    char tag;
    int count;
    double value;
};

// alignas で 32byte アラインされた塊を確保
struct AlignedBlock {
    _Alignas(32) unsigned char buf[32];
};
static struct AlignedBlock global_block;

enum Kind { KIND_NONE, KIND_ONE = 10, KIND_TWO };

int main(void) {
    bool ok = true;

    // restrict + static 配列長
    int a[3] = { 1, 2, 3 };
    int b[3] = { 4, 5, 6 };
    REQUIRE(dot3(a, b) == 32);

    // VLA の対角和
    REQUIRE(vla_diag_sum(4) == (0 + 2 + 4 + 6)); // 0+2+4+6 = 12

    // alignas / _Alignof
    REQUIRE(_Alignof(struct AlignedBlock) >= 32);
    REQUIRE(((uintptr_t)&global_block % _Alignof(struct AlignedBlock)) == 0);

    struct AlignedInts {
        _Alignas(16) int data[4];
    } stack_aligned = { .data = { 1, 2, 3, 4 } };
    REQUIRE(_Alignof(struct AlignedInts) >= 16);
    REQUIRE(((uintptr_t)&stack_aligned % _Alignof(struct AlignedInts)) == 0);

    // offsetof と構造体コピー
    REQUIRE(offsetof(struct Packed, value) >= sizeof(char) + sizeof(int));
    struct Packed p1 = { .tag = 'X', .count = 7, .value = 1.25 };
    struct Packed p2 = p1;
    REQUIRE(memcmp(&p1, &p2, sizeof(p1)) == 0);

    // enum の値と switch
    enum Kind k = KIND_TWO;
    int out = 0;
    switch (k) {
        case KIND_NONE: out = -1; break;
        case KIND_ONE:  out = 1; break;
        case KIND_TWO:  out = 2; break;
        default: out = 99; break;
    }
    REQUIRE(out == 2);
    REQUIRE(KIND_TWO == 11);

    puts(ok ? "OK" : "NG");
    return ok ? 0 : 1;
}
