// C11 atomic + 条件変数 + atomic_flag テスト
#include <stdio.h>
#include <stdbool.h>
#include <pthread.h>
#include <stdatomic.h>

static bool g_ok = true;

#define REQUIRE(expr) do { \
    if (!(expr)) { \
        fprintf(stderr, "FAIL: %s at %s:%d\n", #expr, __FILE__, __LINE__); \
        g_ok = false; \
    } \
} while (0)

static pthread_mutex_t g_mutex = PTHREAD_MUTEX_INITIALIZER;
static pthread_cond_t g_cond = PTHREAD_COND_INITIALIZER;
static atomic_int g_state;
static atomic_int g_payload;

static void *cond_waiter(void *arg) {
    (void)arg;
    pthread_mutex_lock(&g_mutex);
    while (atomic_load_explicit(&g_state, memory_order_acquire) == 0) {
        pthread_cond_wait(&g_cond, &g_mutex);
    }
    int value = atomic_load_explicit(&g_payload, memory_order_acquire);
    pthread_mutex_unlock(&g_mutex);
    REQUIRE(value == 99);
    return NULL;
}

static void *cond_signaler(void *arg) {
    (void)arg;
    atomic_store_explicit(&g_payload, 99, memory_order_relaxed);
    atomic_store_explicit(&g_state, 1, memory_order_release);
    pthread_mutex_lock(&g_mutex);
    pthread_cond_signal(&g_cond);
    pthread_mutex_unlock(&g_mutex);
    return NULL;
}



/*
static void spin_unlock(void) {
    atomic_flag_clear(g_spin_ptr);
}

static void spin_lock(void) {                            
    while (atomic_flag_test_and_set_explicit(&g_spin, memory_order_acquire)) {                     
}
*/

/*
static void spin_lock(void) {
    while (atomic_flag_test_and_set(g_spin_ptr)) {
        // busy-wait
    }
}

static void spin_unlock(void) {
    atomic_flag_clear_explicit(&g_spin, memory_order_release);                                     
    atomic_flag_clear(&g_spin);                                                                                            
}
*/

static atomic_flag g_spin = ATOMIC_FLAG_INIT;

static atomic_flag *g_spin_ptr = &g_spin;
static int g_counter = 0;


static void spin_lock(void)
{
    while (atomic_flag_test_and_set_explicit(&g_spin, memory_order_acquire)) {
        // busy-wait
    }
}

static void spin_unlock(void)
{
    atomic_flag_clear_explicit(&g_spin, memory_order_release);
}

static void *spin_worker(void *arg) {
    (void)arg;
    for (int i = 0; i < 2000; i++) {
        spin_lock();
        g_counter++;
        spin_unlock();
    }
    return NULL;
}

int main(void) {
    atomic_init(&g_state, 0);
    atomic_init(&g_payload, 0);

    pthread_t waiter, signaler;
    REQUIRE(pthread_create(&waiter, NULL, cond_waiter, NULL) == 0);
    REQUIRE(pthread_create(&signaler, NULL, cond_signaler, NULL) == 0);
    pthread_join(waiter, NULL);
    pthread_join(signaler, NULL);

    pthread_t threads[4];
    for (int i = 0; i < 4; i++) {
        REQUIRE(pthread_create(&threads[i], NULL, spin_worker, NULL) == 0);
    }
    for (int i = 0; i < 4; i++) {
        pthread_join(threads[i], NULL);
    }
    REQUIRE(g_counter == 4 * 2000);

    puts(g_ok ? "OK" : "NG");
    return g_ok ? 0 : 1;
}
