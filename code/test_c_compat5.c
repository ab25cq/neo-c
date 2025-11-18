// C 言語互換性テスト (5):
// - setjmp/longjmp と volatile 自動変数
// - isnan/isinf/copysign などの浮動小数境界
// - snprintf の戻り値と終端
// - 可変長マクロのトレーリングカンマ
// - wchar_t/wcslen の基本
// - ビットフィールドの符号付き/符号なし幅

#include <stdio.h>
#include <stdbool.h>
#include <setjmp.h>
#include <math.h>
#include <wchar.h>

#define REQUIRE(expr) do { \
    if (!(expr)) { \
        fprintf(stderr, "FAIL: %s at %s:%d\n", #expr, __FILE__, __LINE__); \
        ok = false; \
    } \
} while (0)

static jmp_buf env;

// 可変長マクロ: 引数なしでも動くようにする
#define MAKE_MSG(fmt, ...) ({ \
    char _buf[32]; \
    int _n = snprintf(_buf, sizeof(_buf), fmt, ##__VA_ARGS__); \
    (void)_n; \
    _buf[0]; \
})

struct Bits {
    unsigned a:3;
    signed b:5;
};

static bool test_setjmp(void) {
    volatile int x = 1;
    int val = setjmp(env);
    if (val == 0) {
        x = 2;
        longjmp(env, 42);
    }
    // longjmp から戻ったとき x が volatile のため 2 のまま
    return x == 2 && val == 42;
}

int main(void) {
    bool ok = true;

    // setjmp/longjmp + volatile
    REQUIRE(test_setjmp());

    // isnan/isinf/copysign
    double nanv = NAN;
    double infv = 1.0/0.0;
    REQUIRE(isnan(nanv));
    REQUIRE(isinf(infv));
    REQUIRE(signbit(copysign(1.0, -2.0)));

    // snprintf の戻り値と終端
    char buf[8];
    int n = snprintf(buf, sizeof(buf), "abc%d", 1234); // "abc1234" 長さ 7
    REQUIRE(n == 7);
    REQUIRE(buf[7] == '\0');

    // 可変長マクロ (引数なし)
    char ch = MAKE_MSG("X");
    REQUIRE(ch == 'X');

    // wchar_t / wcslen
    const wchar_t *ws = L"neo";
    REQUIRE(wcslen(ws) == 3);

    // ビットフィールド
    struct Bits bits = { .a = 7, .b = -3 }; // a は 3bit で 7, b は 5bit 符号付き
    REQUIRE(bits.a == 7);
    REQUIRE(bits.b == -3);

    puts(ok ? "OK" : "NG");
    return ok ? 0 : 1;
}
