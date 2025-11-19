// C 標準ライブラリ機能テスト (10):
// - pthread によるスレッド生成と条件変数/ミューテックスの同期
// - 高度な数学関数 (fma/hypot/erf/tgamma/log1p/tanh) の組み合わせ評価

#include <stdio.h>
#include <stdbool.h>
#include <pthread.h>
#include <math.h>

static bool g_ok = true;

#define REQUIRE(expr) do { \
    if (!(expr)) { \
        fprintf(stderr, "FAIL: %s at %s:%d\n", #expr, __FILE__, __LINE__); \
        g_ok = false; \
    } \
} while (0)

static pthread_mutex_t g_mutex = PTHREAD_MUTEX_INITIALIZER;
static pthread_cond_t g_cond = PTHREAD_COND_INITIALIZER;
static double g_shared_sum = 0.0;
static int g_done = 0;

struct WorkerArg {
    double base;
};

static double eval_expr(double x) {
    double sc = sin(x) + cos(x);
    double part = fma(sc, x, log1p(x));
    double root = hypot(x, x / 2.0);
    double erfv = erf(x / 3.0);
    double gamma = tgamma(x / 2.0 + 1.0);
    double tanhv = tanh(x / 4.0);
    return part + root + erfv + gamma + tanhv;
}

static void *worker(void *arg) {
    struct WorkerArg *w = (struct WorkerArg*)arg;
    double val = eval_expr(w->base);

    pthread_mutex_lock(&g_mutex);
    g_shared_sum += val;
    g_done++;
    pthread_cond_signal(&g_cond);
    pthread_mutex_unlock(&g_mutex);

    return NULL;
}

int main(void) {
    const double inputs[] = { 1.0, 2.5, 3.75, 5.0 };
    const int n = (int)(sizeof(inputs)/sizeof(inputs[0]));
    pthread_t threads[4];
    struct WorkerArg args[4];

    double expected = 0.0;
    for (int i = 0; i < n; i++) {
        args[i].base = inputs[i];
        expected += eval_expr(inputs[i]);
        int rc = pthread_create(&threads[i], NULL, worker, &args[i]);
        REQUIRE(rc == 0);
    }

    pthread_mutex_lock(&g_mutex);
    while (g_done < n) {
        pthread_cond_wait(&g_cond, &g_mutex);
    }
    double total = g_shared_sum;
    pthread_mutex_unlock(&g_mutex);

    for (int i = 0; i < n; i++) {
        pthread_join(threads[i], NULL);
    }

    double diff = fabs(total - expected);
    REQUIRE(diff < 1e-9);

    puts(g_ok ? "OK" : "NG");
    return g_ok ? 0 : 1;
}
