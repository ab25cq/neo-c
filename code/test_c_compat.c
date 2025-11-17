// C 言語互換性のスモークテスト:
// - ネストした代入指定子や配列の静的長さ指定
// - 構造体の値コピー / 戻り値
// - _Generic による型判定
// - 複合リテラルとインライン関数

#include <stdio.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <string.h>

_Static_assert(_Alignof(double) >= _Alignof(float), "double alignment");
_Static_assert(sizeof(uint32_t) == 4, "uint32_t is 32-bit");
_Static_assert(sizeof(void*) >= sizeof(uint8_t*), "pointer size sanity");

#define REQUIRE(expr) do { \
    if (!(expr)) { \
        fprintf(stderr, "FAIL: %s at %s:%d\n", #expr, __FILE__, __LINE__); \
        ok = false; \
    } \
} while (0)

struct Range {
    int start;
    int end;
};

struct Config {
    int left;
    int right;
    int values[4];
    struct Range range;
};

// インライン関数の戻り値と評価
static inline int clamp0_9(int v) {
    if (v < 0) return 0;
    if (v > 9) return 9;
    return v;
}

// C99 の静的配列長指定を扱う
static int sum3(const int xs[static 3]) {
    return xs[0] + xs[1] + xs[2];
}

// 構造体の値返し
static struct Config swap_lr(struct Config c) {
    int tmp = c.left;
    c.left = c.right;
    c.right = tmp;
    return c;
}

#define TYPE_TAG(x) _Generic((x), \
    int: 1, \
    double: 2, \
    const char *: 3, \
    default: 0)

int main(void) {
    bool ok = true;

    // 文字列リテラルの連結
    const char *concat = "neo-" "c" " compat";
    REQUIRE(strcmp(concat, "neo-c compat") == 0);

    // ネストした代入指定子
    struct Config cfg = {
        .right = 5,
        .values = { [0] = 1, [2] = 7, [3] = 9 },
        .range.start = -4,
        .range.end = 12,
        .left = 2
    };
    REQUIRE(cfg.left == 2);
    REQUIRE(cfg.right == 5);
    REQUIRE(cfg.values[0] == 1 && cfg.values[1] == 0 && cfg.values[2] == 7 && cfg.values[3] == 9);
    REQUIRE(cfg.range.start == -4 && cfg.range.end == 12);

    // 静的配列長指定のパラメータ
    int nums[3] = { 3, 4, 5 };
    REQUIRE(sum3(nums) == 12);

    // 複合リテラルとインライン関数の評価
    struct Config via_literal = (struct Config){
        .left = clamp0_9(cfg.left + cfg.right),
        .right = 1,
        .values = { 1, 2, 3, 4 },
        .range = { .start = 0, .end = 3 }
    };
    REQUIRE(via_literal.left == 7);
    REQUIRE(via_literal.values[2] == 3);
    REQUIRE(via_literal.range.end == 3);

    // 構造体の値コピーと戻り値
    struct Config flipped = swap_lr(cfg);
    REQUIRE(flipped.left == 5 && flipped.right == 2);

    // _Generic による型判定
    REQUIRE(TYPE_TAG(1) == 1);
    REQUIRE(TYPE_TAG(1.5) == 2);
    REQUIRE(TYPE_TAG(concat) == 3);

    // 値コピーの等価性
    struct Config copy = via_literal;
    REQUIRE(memcmp(&copy, &via_literal, sizeof(copy)) == 0);

    enum Mode { MODE_NONE, MODE_ONE = 4, MODE_TWO };
    enum Mode m = MODE_TWO;
    REQUIRE(m == 5);

    puts(ok ? "OK" : "NG");
    return ok ? 0 : 1;
}
