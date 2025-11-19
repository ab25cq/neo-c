// C 言語互換性テスト (7):
// - fenv: 例外フラグの保存/復元と明示的な発火
// - C11 atomics: lock-free 判断、compare_exchange、fetch_add

#include <stdio.h>
#include <stdbool.h>
#include <fenv.h>
#include <stdatomic.h>

#pragma STDC FENV_ACCESS ON

#define REQUIRE(expr) do { \
    if (!(expr)) { \
        fprintf(stderr, "FAIL: %s at %s:%d\n", #expr, __FILE__, __LINE__); \
        ok = false; \
    } \
} while (0)

int main(void) {
    bool ok = true;

    // fenv: 例外フラグの設定と保存/復元
    fenv_t saved;
    REQUIRE(feclearexcept(FE_ALL_EXCEPT) == 0);
    REQUIRE(feraiseexcept(FE_INVALID | FE_DIVBYZERO) == 0);
    int raised = fetestexcept(FE_ALL_EXCEPT);
    REQUIRE((raised & (FE_INVALID | FE_DIVBYZERO)) == (FE_INVALID | FE_DIVBYZERO));

    REQUIRE(feholdexcept(&saved) == 0); // save & clear
    REQUIRE(fetestexcept(FE_ALL_EXCEPT) == 0);
    REQUIRE(feraiseexcept(FE_OVERFLOW) == 0);
    REQUIRE(fetestexcept(FE_OVERFLOW) == FE_OVERFLOW);
    REQUIRE(fesetenv(&saved) == 0); // restore
    REQUIRE(fetestexcept(FE_ALL_EXCEPT) == (FE_INVALID | FE_DIVBYZERO));

    // C11 atomics
    atomic_int ai;
    atomic_init(&ai, 1);
    REQUIRE(atomic_is_lock_free(&ai));

    int expected = 1;
    REQUIRE(atomic_compare_exchange_strong_explicit(&ai, &expected, 5,
                                                    memory_order_seq_cst,
                                                    memory_order_seq_cst));
    REQUIRE(ai == 5);
    REQUIRE(expected == 1);

    int old = atomic_fetch_add_explicit(&ai, 3, memory_order_seq_cst);
    REQUIRE(old == 5);
    REQUIRE(ai == 8);

    puts(ok ? "OK" : "NG");
    return ok ? 0 : 1;
}
