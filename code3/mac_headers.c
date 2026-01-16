using C
{
#include <Availability.h>
#include <AvailabilityMacros.h>
#include <TargetConditionals.h>
#include <libkern/OSBase.h>
#include <libkern/OSAtomic.h>
#include <mach/mach.h>
#include <mach/mach_init.h>
#include <mach/mach_error.h>
#include <mach/mach_port.h>
#include <mach/mach_types.h>
#include <mach/mach_time.h>
#include <mach/mach_vm.h>
#include <mach/vm_map.h>
#include <mach/vm_types.h>
#include <mach/thread_act.h>
#include <mach/exception.h>
#include <mach-o/dyld.h>
#include <mach-o/loader.h>
#include <mach-o/fat.h>
#include <mach-o/arch.h>
#include <mach-o/getsect.h>
#include <mach/host_info.h>
#include <libproc.h>
#include <pthread.h>
#include <dispatch/dispatch.h>

#include <sys/param.h>
#include <sys/proc.h>
#include <sys/mount.h>
#include <sys/queue.h>
#include <sys/resource.h>
#include <sys/stat.h>
#include <sys/sysctl.h>
#include <sys/syslimits.h>
#include <sys/time.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <sys/event.h>
#include <sys/socket.h>
#include <sys/un.h>
#include <sys/ioctl.h>
#include <sys/ioccom.h>
#include <sys/mman.h>
#include <sys/select.h>
#include <sys/wait.h>
#include <sys/utsname.h>
#include <sys/file.h>
#include <sys/ipc.h>
#include <sys/msg.h>
#include <sys/sem.h>
#include <sys/shm.h>
#include <sys/statvfs.h>
#include <sys/statfs.h>
#include <sys/vfs.h>
#include <sys/times.h>
#include <sys/filio.h>
#include <sys/termios.h>
#include <sys/tty.h>
#include <sys/ttydev.h>
#include <sys/termio.h>
#include <sys/ttydisc.h>
#include <sys/ttycom.h>
#include <sys/ttydefaults.h>
#include <sys/ttychars.h>
#include <sys/dir.h>
#include <sys/mkdev.h>
#include <sys/poll.h>
#include <sys/sockio.h>
#include <sys/kern_event.h>
#include <sys/kern_control.h>
#include <sys/aio.h>

#include <net/if.h>
#include <net/if_types.h>
#include <net/if_dl.h>
#include <net/if_media.h>
#include <net/route.h>
#include <net/ethernet.h>
#include <net/if_bridgevar.h>
#include <net/if_vlan_var.h>
#include <net/if_tun.h>
#include <net/if_utun.h>
#include <net/if_gif.h>
#include <net/if_gre.h>
#include <net/if_stf.h>
#include <net/if_llc.h>
#include <net/if_ppp.h>
#include <net/if_pppvar.h>
#include <net/if_ipsec.h>
#include <net/if_ipsec_var.h>
#include <net/bpf.h>
#include <net/pfkeyv2.h>
#include <net/pfvar.h>

#include <netinet/in.h>
#include <netinet/ip.h>
#include <netinet/tcp.h>
#include <netinet/udp.h>
#include <netinet/ip6.h>
#include <netinet/if_ether.h>
#include <netinet/igmp.h>
#include <netinet/ip_icmp.h>
#include <netinet/icmp6.h>
#include <netinet/ipsec.h>
#include <netinet/udp_var.h>
#include <netinet/tcp_var.h>
#include <netinet/ip_var.h>
#include <netinet/tcp_fsm.h>
#include <netinet/tcp_timer.h>
#include <netinet/tcp_seq.h>
#include <netinet/tcpip.h>

#include <netinet6/ipsec.h>
#include <netinet6/in6_var.h>
#include <netinet6/ip6_var.h>
#include <netinet6/nd6.h>
#if __has_include(<netinet6/nd6_var.h>)
#include <netinet6/nd6_var.h>
#endif
#include <netinet6/in6_pcb.h>

#include <arpa/inet.h>
#include <ifaddrs.h>
#include <netdb.h>
#include <uuid/uuid.h>

#include <IOKit/serial/ioss.h>
#include <IOKit/serial/IOSerialKeys.h>
#include <IOKit/serial/IOSerialBSDClient.h>

#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include <limits.h>
#include <errno.h>
#include <signal.h>
#include <pwd.h>
#include <grp.h>
#include <dirent.h>
#include <dlfcn.h>
#include <spawn.h>
#include <copyfile.h>
#include <assert.h>
#include <ctype.h>
#include <float.h>
#include <inttypes.h>
#include <iso646.h>
#include <locale.h>
#include <math.h>
#include <setjmp.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <time.h>
#include <wchar.h>
#include <wctype.h>
#include <complex.h>
//#include <tgmath.h>
#include <fenv.h>
#include <monetary.h>
#include <aio.h>
#include <fnmatch.h>
#include <glob.h>
#include <iconv.h>
#include <langinfo.h>
#include <nl_types.h>
#include <poll.h>
#include <regex.h>
#include <sched.h>
#include <semaphore.h>
#include <termios.h>
#include <ucontext.h>
#include <utime.h>
#include <utmpx.h>
#include <utmp.h>
#include <wordexp.h>
#include <cpio.h>
#include <stropts.h>
#include <fmtmsg.h>
#include <ftw.h>
#include <fts.h>
#include <ndbm.h>
#include <dbm.h>
#include <tar.h>
#include <sysexits.h>
#include <libgen.h>
#include <paths.h>
#include <search.h>
#include <nlist.h>
#include <syslog.h>
#include <termcap.h>
#include <curses.h>
#include <ncurses.h>
#include <panel.h>
#include <menu.h>
#include <form.h>
#include <pty.h>
#include <term.h>
#include <stdalign.h>
#include <stdatomic.h>
#include <uchar.h>
#include <util.h>
#include <libutil.h>

#if defined(__has_include)
# if __has_include(<sys/timeb.h>)
#  include <sys/timeb.h>
# endif
# if __has_include(<sys/timerfd.h>)
#  include <sys/timerfd.h>
# endif
# if __has_include(<sys/ptrace.h>)
#  include <sys/ptrace.h>
# endif
# if __has_include(<sys/syscall.h>)
#  include <sys/syscall.h>
# endif
# if __has_include(<sys/signal.h>)
#  include <sys/signal.h>
# endif
# if __has_include(<sys/ucred.h>)
#  include <sys/ucred.h>
# endif
# if __has_include(<sys/xattr.h>)
#  include <sys/xattr.h>
# endif
# if __has_include(<sys/random.h>)
#  include <sys/random.h>
# endif
# if __has_include(<sys/acl.h>)
#  include <sys/acl.h>
# endif
# if __has_include(<sys/unistd.h>)
#  include <sys/unistd.h>
# endif
# if __has_include(<os/availability.h>)
#  include <os/availability.h>
# endif
# if __has_include(<sys/syslog.h>)
#  include <sys/syslog.h>
# endif
#endif
}

int test_headers_mac(void)
{
    struct timespec ts;
    ts.tv_sec = 0;
    ts.tv_nsec = 0;
    (void)ts;
#if defined(CLOCK_REALTIME)
    clockid_t cid = CLOCK_REALTIME;
    (void)cid;
#if defined(_POSIX_C_SOURCE) && (_POSIX_C_SOURCE >= 199309L)
    (void)clock_gettime(cid, &ts);
# ifdef CLOCK_MONOTONIC
    (void)clock_gettime(CLOCK_MONOTONIC, &ts);
# endif
# if defined(_POSIX_CLOCK_SELECTION) && (_POSIX_CLOCK_SELECTION > 0)
    (void)clock_nanosleep(cid, 0, &ts, (struct timespec*)0);
# endif
#endif
#endif
#if defined(_POSIX_TIMERS) && _POSIX_TIMERS > 0
    timer_t tid = (timer_t)0;
    struct sigevent sev;
    struct itimerspec its;
    memset(&sev, 0, sizeof(sev));
    memset(&its, 0, sizeof(its));
    (void)tid;
    (void)sev;
    (void)its;
# ifdef TIMER_ABSTIME
    (void)timer_settime(tid, TIMER_ABSTIME, &its, (struct itimerspec*)0);
# else
    (void)timer_settime(tid, 0, &its, (struct itimerspec*)0);
# endif
#endif
    return 0;
}
