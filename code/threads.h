#ifndef CODE_THREADS_H
#define CODE_THREADS_H

#include <errno.h>
#include <pthread.h>
#include <sched.h>
#include <stdint.h>
#include <stdlib.h>
#include <time.h>

typedef pthread_t thrd_t;
typedef pthread_mutex_t mtx_t;
typedef pthread_cond_t cnd_t;
typedef pthread_key_t tss_t;
typedef pthread_once_t once_flag;

typedef int (*thrd_start_t)(void *);
typedef void (*tss_dtor_t)(void *);

#define ONCE_FLAG_INIT PTHREAD_ONCE_INIT

#ifndef TSS_DTOR_ITERATIONS
#if defined(PTHREAD_DESTRUCTOR_ITERATIONS)
#define TSS_DTOR_ITERATIONS PTHREAD_DESTRUCTOR_ITERATIONS
#elif defined(_POSIX_THREAD_DESTRUCTOR_ITERATIONS)
#define TSS_DTOR_ITERATIONS _POSIX_THREAD_DESTRUCTOR_ITERATIONS
#else
#define TSS_DTOR_ITERATIONS 4
#endif
#endif

enum {
    thrd_success = 0,
    thrd_busy = 1,
    thrd_error = 2,
    thrd_nomem = 3,
    thrd_timedout = 4
};

enum {
    mtx_plain = 0,
    mtx_recursive = 1,
    mtx_timed = 2
};

typedef struct code_thrd_start_pack {
    thrd_start_t fn;
    void *arg;
} code_thrd_start_pack;

static inline void *code_thrd_start(void *arg)
{
    code_thrd_start_pack *pack = (code_thrd_start_pack *)arg;
    thrd_start_t fn = pack->fn;
    void *fn_arg = pack->arg;
    free(pack);
    return (void *)(intptr_t)fn(fn_arg);
}

static inline int thrd_create(thrd_t *thr, thrd_start_t fn, void *arg)
{
    code_thrd_start_pack *pack = (code_thrd_start_pack *)malloc(sizeof(code_thrd_start_pack));
    if (!pack) return thrd_nomem;
    pack->fn = fn;
    pack->arg = arg;
    if (pthread_create(thr, NULL, code_thrd_start, pack) != 0) {
        free(pack);
        return thrd_error;
    }
    return thrd_success;
}

static inline int thrd_join(thrd_t thr, int *res)
{
    void *ret = NULL;
    if (pthread_join(thr, &ret) != 0) return thrd_error;
    if (res) *res = (int)(intptr_t)ret;
    return thrd_success;
}

static inline int thrd_detach(thrd_t thr)
{
    return pthread_detach(thr) == 0 ? thrd_success : thrd_error;
}

static inline thrd_t thrd_current(void)
{
    return pthread_self();
}

static inline int thrd_equal(thrd_t a, thrd_t b)
{
    return pthread_equal(a, b);
}

static inline void thrd_exit(int res)
{
    pthread_exit((void *)(intptr_t)res);
}

static inline int thrd_yield(void)
{
    return sched_yield();
}

static inline int thrd_sleep(const struct timespec *duration, struct timespec *remaining)
{
    if (!duration) return thrd_error;
    if (nanosleep(duration, remaining) == 0) return 0;
    if (errno == EINTR) return -1;
    return -2;
}

static inline int mtx_init(mtx_t *mtx, int type)
{
    pthread_mutexattr_t attr;
    if (pthread_mutexattr_init(&attr) != 0) return thrd_error;
    if (type & mtx_recursive) {
        (void)pthread_mutexattr_settype(&attr, PTHREAD_MUTEX_RECURSIVE);
    }
    int rc = pthread_mutex_init(mtx, &attr);
    (void)pthread_mutexattr_destroy(&attr);
    return rc == 0 ? thrd_success : thrd_error;
}

static inline int mtx_destroy(mtx_t *mtx)
{
    return pthread_mutex_destroy(mtx) == 0 ? thrd_success : thrd_error;
}

static inline int mtx_lock(mtx_t *mtx)
{
    return pthread_mutex_lock(mtx) == 0 ? thrd_success : thrd_error;
}

static inline int mtx_unlock(mtx_t *mtx)
{
    return pthread_mutex_unlock(mtx) == 0 ? thrd_success : thrd_error;
}

static inline int mtx_trylock(mtx_t *mtx)
{
    int rc = pthread_mutex_trylock(mtx);
    if (rc == 0) return thrd_success;
    if (rc == EBUSY) return thrd_busy;
    return thrd_error;
}

static inline int code_timespec_cmp(const struct timespec *a, const struct timespec *b)
{
    if (a->tv_sec < b->tv_sec) return -1;
    if (a->tv_sec > b->tv_sec) return 1;
    if (a->tv_nsec < b->tv_nsec) return -1;
    if (a->tv_nsec > b->tv_nsec) return 1;
    return 0;
}

static inline int mtx_timedlock(mtx_t *mtx, const struct timespec *ts)
{
    struct timespec now;
    struct timespec sleep_dur;

    if (!ts) return thrd_error;
    sleep_dur.tv_sec = 0;
    sleep_dur.tv_nsec = 1000000L; /* 1ms polling granularity */

    for (;;) {
        int rc = pthread_mutex_trylock(mtx);
        if (rc == 0) return thrd_success;
        if (rc != EBUSY) return thrd_error;
        if (clock_gettime(CLOCK_REALTIME, &now) != 0) return thrd_error;
        if (code_timespec_cmp(&now, ts) >= 0) return thrd_timedout;
        (void)nanosleep(&sleep_dur, NULL);
    }
}

static inline int cnd_init(cnd_t *cond)
{
    return pthread_cond_init(cond, NULL) == 0 ? thrd_success : thrd_error;
}

static inline int cnd_destroy(cnd_t *cond)
{
    return pthread_cond_destroy(cond) == 0 ? thrd_success : thrd_error;
}

static inline int cnd_signal(cnd_t *cond)
{
    return pthread_cond_signal(cond) == 0 ? thrd_success : thrd_error;
}

static inline int cnd_broadcast(cnd_t *cond)
{
    return pthread_cond_broadcast(cond) == 0 ? thrd_success : thrd_error;
}

static inline int cnd_wait(cnd_t *cond, mtx_t *mtx)
{
    return pthread_cond_wait(cond, mtx) == 0 ? thrd_success : thrd_error;
}

static inline int cnd_timedwait(cnd_t *cond, mtx_t *mtx, const struct timespec *ts)
{
    int rc = pthread_cond_timedwait(cond, mtx, ts);
    if (rc == 0) return thrd_success;
    if (rc == ETIMEDOUT) return thrd_timedout;
    return thrd_error;
}

static inline void call_once(once_flag *flag, void (*func)(void))
{
    (void)pthread_once(flag, func);
}

static inline int tss_create(tss_t *key, tss_dtor_t dtor)
{
    return pthread_key_create(key, dtor) == 0 ? thrd_success : thrd_error;
}

static inline void tss_delete(tss_t key)
{
    pthread_key_delete(key);
}

static inline int tss_set(tss_t key, void *val)
{
    return pthread_setspecific(key, val) == 0 ? thrd_success : thrd_error;
}

static inline void *tss_get(tss_t key)
{
    return pthread_getspecific(key);
}

#endif
