using C
{
#include <pthread.h>
#include <sched.h>
#include <semaphore.h>
#if __has_include(<threads.h>)
#include <threads.h>
#endif
#if __has_include(<ucontext.h>)
#include <ucontext.h>
#endif
}

int test_headers_thread(void)
{
    return 0;
}
