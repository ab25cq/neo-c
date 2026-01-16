using C
{
#include <sys/ipc.h>
#include <sys/msg.h>
#include <sys/sem.h>
#include <sys/shm.h>
#if __has_include(<sys/eventfd.h>)
#include <sys/eventfd.h>
#endif
#if __has_include(<sys/epoll.h>)
#include <sys/epoll.h>
#endif
#if __has_include(<sys/inotify.h>)
#include <sys/inotify.h>
#endif
#if __has_include(<sys/signalfd.h>)
#include <sys/signalfd.h>
#endif
#if __has_include(<sys/timerfd.h>)
#include <sys/timerfd.h>
#endif
#if __has_include(<sys/sysinfo.h>)
#include <sys/sysinfo.h>
#endif
#if __has_include(<sys/syscall.h>)
#include <sys/syscall.h>
#endif
#if __has_include(<sys/prctl.h>)
#include <sys/prctl.h>
#endif
}

int test_headers_ipc(void)
{
    return 0;
}
