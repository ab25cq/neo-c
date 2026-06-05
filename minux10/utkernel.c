/// c_include definition ///
#ifndef __BAREMETAL__
#define __BAREMETAL__ 1
#endif


extern int errno;

#define __NEO_WEAK __attribute__((weak))

#ifdef __MICRO__
#elif defined(__MINUX__) && defined(__riscv)
#define SYS_write 64
#define SYS_read 65
#define SYS_open 66
#define SYS_close 67
#define SYS_exit 70
#define SYS_brk 74
#define SYS_getcwd 79
#define SYS_chdir 80
#define SYS_mkdir 81
#define SYS_rmdir 82
#define SYS_unlink 83
#define SYS_rename 84
#define SYS_stat 87
#define SYS_lstat 89
#define SYS_lseek 192
#define SYS_fstat 210

#ifndef SEEK_SET
#define SEEK_SET 0
#endif
#ifndef SEEK_CUR
#define SEEK_CUR 1
#endif
#ifndef SEEK_END
#define SEEK_END 2
#endif

static long __neo_minux_syscall1(long n, long a0)
{
    register long _a0 asm("a0") = a0;
    register long _a7 asm("a7") = n;
    asm volatile("ecall" : "+r"(_a0) : "r"(_a7) : "memory");
    return _a0;
}

static long __neo_minux_syscall2(long n, long a0, long a1)
{
    register long _a0 asm("a0") = a0;
    register long _a1 asm("a1") = a1;
    register long _a7 asm("a7") = n;
    asm volatile("ecall" : "+r"(_a0) : "r"(_a1), "r"(_a7) : "memory");
    return _a0;
}

static long __neo_minux_syscall3(long n, long a0, long a1, long a2)
{
    register long _a0 asm("a0") = a0;
    register long _a1 asm("a1") = a1;
    register long _a2 asm("a2") = a2;
    register long _a7 asm("a7") = n;
    asm volatile("ecall" : "+r"(_a0) : "r"(_a1), "r"(_a2), "r"(_a7) : "memory");
    return _a0;
}

__NEO_WEAK int* __errno_location(void)
{
    return &errno;
}

__NEO_WEAK int bcmp(const void* s1, const void* s2, unsigned long n)
{
    const unsigned char* p1 = (const unsigned char*)s1;
    const unsigned char* p2 = (const unsigned char*)s2;
    unsigned long i;
    for(i = 0; i < n; i++) {
        if(p1[i] != p2[i]) {
            return (int)p1[i] - (int)p2[i];
        }
    }
    return 0;
}

__NEO_WEAK long read(int fd, void* buf, unsigned long count)
{
    return __neo_minux_syscall3(SYS_read, fd, (long)buf, (long)count);
}

__NEO_WEAK long write(int fd, const void* buf, unsigned long count)
{
    return __neo_minux_syscall3(SYS_write, fd, (long)buf, (long)count);
}

__NEO_WEAK int open(const char* path, int flags, int mode)
{
    return (int)__neo_minux_syscall3(SYS_open, (long)path, flags, mode);
}

__NEO_WEAK int close(int fd)
{
    return (int)__neo_minux_syscall1(SYS_close, fd);
}

__NEO_WEAK int unlink(const char* path)
{
    return (int)__neo_minux_syscall1(SYS_unlink, (long)path);
}

__NEO_WEAK int rename(const char* oldpath, const char* newpath)
{
    return (int)__neo_minux_syscall2(SYS_rename, (long)oldpath, (long)newpath);
}

__NEO_WEAK long lseek(int fd, long offset, int whence)
{
    return __neo_minux_syscall3(SYS_lseek, fd, offset, whence);
}

struct stat {
    unsigned short type;
    unsigned short nlink;
    unsigned int size;
    unsigned int inum;
    unsigned int mode;
    unsigned short uid;
    unsigned short gid;
    unsigned int atime;
    unsigned int mtime;
    unsigned int ctime;
};

__NEO_WEAK int stat(const char* path, struct stat* st)
{
    return (int)__neo_minux_syscall2(SYS_stat, (long)path, (long)st);
}

__NEO_WEAK int lstat(const char* path, struct stat* st)
{
    return (int)__neo_minux_syscall2(SYS_lstat, (long)path, (long)st);
}

__NEO_WEAK int fstat(int fd, struct stat* st)
{
    return (int)__neo_minux_syscall2(SYS_fstat, fd, (long)st);
}

__NEO_WEAK char* getcwd(char* buf, unsigned long size)
{
    long n = __neo_minux_syscall2(SYS_getcwd, (long)buf, (long)size);
    return n < 0 ? (char*)0 : buf;
}

__NEO_WEAK int chdir(const char* path)
{
    return (int)__neo_minux_syscall1(SYS_chdir, (long)path);
}

__NEO_WEAK int mkdir(const char* path, int mode)
{
    return (int)__neo_minux_syscall2(SYS_mkdir, (long)path, mode);
}

__NEO_WEAK int rmdir(const char* path)
{
    return (int)__neo_minux_syscall1(SYS_rmdir, (long)path);
}

__attribute__((used, weak)) void exit(int status)
{
    __neo_minux_syscall1(SYS_exit, status);
    for(;;) {
    }
}

__NEO_WEAK void putchar(char c)
{
    write(1, &c, 1);
}

__NEO_WEAK unsigned long brk(unsigned long size)
{
    return (unsigned long)__neo_minux_syscall1(SYS_brk, (long)size);
}

struct utsname {
    char sysname[65];
    char nodename[65];
    char release[65];
    char version[65];
    char machine[65];
    char domainname[65];
};

static void __neo_copy_cstr(char* dst, const char* src, unsigned long n)
{
    unsigned long i = 0;
    if(n == 0) {
        return;
    }
    while(i + 1 < n && src[i]) {
        dst[i] = src[i];
        i++;
    }
    dst[i] = 0;
}

__NEO_WEAK int uname(struct utsname* buf)
{
    if(!buf) {
        errno = 22;
        return -1;
    }
    __neo_copy_cstr(buf->sysname, "Minux", sizeof(buf->sysname));
    __neo_copy_cstr(buf->nodename, "minux9", sizeof(buf->nodename));
    __neo_copy_cstr(buf->release, "", sizeof(buf->release));
    __neo_copy_cstr(buf->version, "", sizeof(buf->version));
    __neo_copy_cstr(buf->machine, "riscv64", sizeof(buf->machine));
    __neo_copy_cstr(buf->domainname, "", sizeof(buf->domainname));
    return 0;
}

typedef long time_t;

struct tm {
    int tm_sec;
    int tm_min;
    int tm_hour;
    int tm_mday;
    int tm_mon;
    int tm_year;
    int tm_wday;
    int tm_yday;
    int tm_isdst;
    long tm_gmtoff;
    const char* tm_zone;
};

__NEO_WEAK time_t time(time_t* t)
{
    time_t result = 0;
    if(t) {
        *t = result;
    }
    return result;
}

__NEO_WEAK struct tm* localtime(const time_t* t)
{
    static struct tm tm_;
    (void)t;
    tm_.tm_sec = 0;
    tm_.tm_min = 0;
    tm_.tm_hour = 0;
    tm_.tm_mday = 1;
    tm_.tm_mon = 0;
    tm_.tm_year = 70;
    tm_.tm_wday = 4;
    tm_.tm_yday = 0;
    tm_.tm_isdst = 0;
    tm_.tm_gmtoff = 0;
    tm_.tm_zone = "UTC";
    return &tm_;
}

extern int main(int argc, char** argv) __attribute__((used));

__attribute__((used, weak, naked, noreturn)) void _start(void)
{
    __asm__ volatile(
        "call main\n"
        "li a7, 70\n"
        "ecall\n"
        "1: j 1b\n"
    );
}
#else

static long __neo_linux_syscall1(long n, long a1)
{
    long ret;
    __asm__ volatile(
        "syscall"
        : "=a"(ret)
        : "a"(n), "D"(a1)
        : "rcx", "r11", "memory"
    );
    return ret;
}

static long __neo_linux_syscall3(long n, long a1, long a2, long a3)
{
    long ret;
    __asm__ volatile(
        "syscall"
        : "=a"(ret)
        : "a"(n), "D"(a1), "S"(a2), "d"(a3)
        : "rcx", "r11", "memory"
    );
    return ret;
}

static long __neo_linux_errno_result(long ret)
{
    if(ret < 0 && ret >= -4095) {
        errno = (int)-ret;
        return -1;
    }
    return ret;
}

__NEO_WEAK int* __errno_location(void)
{
    return &errno;
}

__NEO_WEAK int bcmp(const void* s1, const void* s2, unsigned long n)
{
    const unsigned char* p1 = (const unsigned char*)s1;
    const unsigned char* p2 = (const unsigned char*)s2;
    unsigned long i;
    for(i = 0; i < n; i++) {
        if(p1[i] != p2[i]) {
            return (int)p1[i] - (int)p2[i];
        }
    }
    return 0;
}

__NEO_WEAK long read(int fd, void* buf, unsigned long count)
{
    return __neo_linux_errno_result(__neo_linux_syscall3(0, fd, (long)buf, (long)count));
}

__NEO_WEAK long write(int fd, const void* buf, unsigned long count)
{
    return __neo_linux_errno_result(__neo_linux_syscall3(1, fd, (long)buf, (long)count));
}

__NEO_WEAK int open(const char* path, int flags, int mode)
{
    return (int)__neo_linux_errno_result(__neo_linux_syscall3(2, (long)path, flags, mode));
}

__NEO_WEAK int close(int fd)
{
    return (int)__neo_linux_errno_result(__neo_linux_syscall1(3, fd));
}

__NEO_WEAK int unlink(const char* path)
{
    return (int)__neo_linux_errno_result(__neo_linux_syscall1(87, (long)path));
}

__attribute__((used, weak)) void exit(int status)
{
    __neo_linux_syscall1(60, status);
    for(;;) {
    }
}

__NEO_WEAK void putchar(char c)
{
    write(1, &c, 1);
}

__NEO_WEAK unsigned long brk(unsigned long size)
{
    return (unsigned long)__neo_linux_syscall1(12, (long)size);
}

struct utsname {
    char sysname[65];
    char nodename[65];
    char release[65];
    char version[65];
    char machine[65];
    char domainname[65];
};

static void __neo_copy_cstr(char* dst, const char* src, unsigned long n)
{
    unsigned long i = 0;
    if(n == 0) {
        return;
    }
    while(i + 1 < n && src[i]) {
        dst[i] = src[i];
        i++;
    }
    dst[i] = 0;
}

__NEO_WEAK int uname(struct utsname* buf)
{
    if(!buf) {
        errno = 22;
        return -1;
    }
    __neo_copy_cstr(buf->sysname, "Linux", sizeof(buf->sysname));
    __neo_copy_cstr(buf->nodename, "neo-c-bare", sizeof(buf->nodename));
    __neo_copy_cstr(buf->release, "", sizeof(buf->release));
    __neo_copy_cstr(buf->version, "", sizeof(buf->version));
    __neo_copy_cstr(buf->machine, "x86_64", sizeof(buf->machine));
    __neo_copy_cstr(buf->domainname, "", sizeof(buf->domainname));
    return 0;
}

typedef long time_t;

struct tm {
    int tm_sec;
    int tm_min;
    int tm_hour;
    int tm_mday;
    int tm_mon;
    int tm_year;
    int tm_wday;
    int tm_yday;
    int tm_isdst;
    long tm_gmtoff;
    const char* tm_zone;
};

__NEO_WEAK time_t time(time_t* t)
{
    time_t result = (time_t)__neo_linux_syscall1(201, 0);
    if(result < 0) {
        result = 0;
    }
    if(t) {
        *t = result;
    }
    return result;
}

__NEO_WEAK struct tm* localtime(const time_t* t)
{
    static struct tm tm_;
    (void)t;
    tm_.tm_sec = 0;
    tm_.tm_min = 0;
    tm_.tm_hour = 0;
    tm_.tm_mday = 1;
    tm_.tm_mon = 0;
    tm_.tm_year = 70;
    tm_.tm_wday = 4;
    tm_.tm_yday = 0;
    tm_.tm_isdst = 0;
    tm_.tm_gmtoff = 0;
    tm_.tm_zone = "UTC";
    return &tm_;
}

extern int main(int argc, char** argv) __attribute__((used));

__attribute__((used, weak, naked, noreturn)) void _start(void)
{
    __asm__ volatile(
        "mov (%rsp), %rdi\n"
        "lea 8(%rsp), %rsi\n"
        "andq $-16, %rsp\n"
        "call main\n"
        "mov %eax, %edi\n"
        "call exit\n"
    );
}
#endif

/// typedef definition ///
typedef unsigned long size_t;

typedef __builtin_va_list __gnuc_va_list;

typedef char* string;

typedef __builtin_va_list va_list;

typedef unsigned long  long    ;

typedef long ptrdiff_t;

typedef unsigned long  int uintptr_t;

typedef long intptr_t;

typedef char int8_t;

typedef short int16_t;

typedef int int32_t;

typedef long long int64_t;

typedef unsigned char uint8_t;

typedef unsigned short int uint16_t;

typedef unsigned int uint32_t;

typedef unsigned long  long uint64_t;

typedef int wchar_t;

typedef _Bool bool;

typedef struct anonymous_typeX1 glob_t;

typedef struct mem_block  mem_block_t  ;

typedef struct anonymous_typeX2 __buf_ctx_t;

typedef struct anonymous_typeX3 __str_ctx_t;

typedef struct anonymous_typeX4 __fmt_out_t;

typedef int*  wstring  ;

typedef int  ER  ;

typedef int  ID  ;

typedef int  PRI  ;

typedef unsigned int  ATR  ;

typedef unsigned int  RELTIM  ;

typedef unsigned int  FLGPTN  ;

typedef long  INTEXINF  ;

typedef void (*FP)(long );

typedef struct anonymous_typeX5 T_CTSK;

typedef struct anonymous_typeX6 T_CSEM;

typedef struct anonymous_typeX7 T_CFLG;

typedef struct T_MSG  T_MSG  ;

typedef struct anonymous_typeX8 T_CMBX;

typedef enum anonymous_typeY9 task_state_t;

typedef struct anonymous_typeX10 tcb_t;

typedef struct anonymous_typeX11 sem_t;

typedef struct anonymous_typeX12 flg_t;

typedef struct anonymous_typeX13 mbx_t;

typedef struct anonymous_typeX14 demo_msg_t;

/// previous struct definition ///
/// struct definition ///
struct anonymous_typeX1
{
    unsigned long  gl_pathc  ;
    char** gl_pathv;
};

struct mem_block
{
    unsigned long  size  ;
    struct mem_block*  next  ;
};

enum  arg_kind { ARG_KIND_LIT=(1),
ARG_KIND_FILE=(2),
ARG_KIND_END=(3)
};

struct arg_hdr
{
    enum arg_kind  kind  ;
    const char* shortopts;
    const char* longopts;
    const char* datatype;
    const char* glossary;
    int mincount;
    int maxcount;
};

struct arg_lit
{
    struct arg_hdr  hdr  ;
    int count;
};

struct arg_file
{
    struct arg_hdr  hdr  ;
    int count;
    const char** filename;
};

struct arg_error
{
    const char* msg;
    const char* argval;
    const struct arg_hdr*  hdr  ;
};

struct arg_end
{
    struct arg_hdr  hdr  ;
    int count;
    int maxerrors;
    struct arg_error*  errors  ;
};

struct anonymous_typeX2
{
    char* p;
    unsigned long  int rem;
};

struct anonymous_typeX3
{
    char* p;
};

struct anonymous_typeX4
{
    int mode;
    void* ctx;
    int count;
};

struct buffer
{
    char* buf;
    int len;
    int size;
};

struct neo_frame
{
    struct neo_frame*  prev  ;
    char* fun_name;
    unsigned long  int frame_id;
};

struct sMemHeader
{
    long size;
    long compiletime_size;
    long alloc_size;
    int allocated;
    int alive;
    struct sMemHeader*  next  ;
    struct sMemHeader*  prev  ;
    struct sMemHeader*  free_next  ;
    char* fun_name[8];
    const char* class_name;
    const char* sname;
    int sline;
    int id;
};

struct list_item$1char$
{
    char item;
    struct list_item$1char$* prev;
    struct list_item$1char$* next;
};

struct list$1char$
{
    struct list_item$1char$* head;
    struct list_item$1char$* tail;
    int len;
    struct list_item$1char$* it;
};

struct list_item$1char$p
{
    char* item;
    struct list_item$1char$p* prev;
    struct list_item$1char$p* next;
};

struct list$1char$p
{
    struct list_item$1char$p* head;
    struct list_item$1char$p* tail;
    int len;
    struct list_item$1char$p* it;
};

struct list_item$1short$
{
    short item;
    struct list_item$1short$* prev;
    struct list_item$1short$* next;
};

struct list$1short$
{
    struct list_item$1short$* head;
    struct list_item$1short$* tail;
    int len;
    struct list_item$1short$* it;
};

struct list_item$1int$
{
    int item;
    struct list_item$1int$* prev;
    struct list_item$1int$* next;
};

struct list$1int$
{
    struct list_item$1int$* head;
    struct list_item$1int$* tail;
    int len;
    struct list_item$1int$* it;
};

struct list_item$1long$
{
    long item;
    struct list_item$1long$* prev;
    struct list_item$1long$* next;
};

struct list$1long$
{
    struct list_item$1long$* head;
    struct list_item$1long$* tail;
    int len;
    struct list_item$1long$* it;
};

struct list_item$1float$
{
    float item;
    struct list_item$1float$* prev;
    struct list_item$1float$* next;
};

struct list$1float$
{
    struct list_item$1float$* head;
    struct list_item$1float$* tail;
    int len;
    struct list_item$1float$* it;
};

struct list_item$1double$
{
    double item;
    struct list_item$1double$* prev;
    struct list_item$1double$* next;
};

struct list$1double$
{
    struct list_item$1double$* head;
    struct list_item$1double$* tail;
    int len;
    struct list_item$1double$* it;
};

struct list_item$1char$ph
{
    char*  item  ;
    struct list_item$1char$ph* prev;
    struct list_item$1char$ph* next;
};

struct list$1char$ph
{
    struct list_item$1char$ph* head;
    struct list_item$1char$ph* tail;
    int len;
    struct list_item$1char$ph* it;
};

struct anonymous_typeX5
{
    unsigned int  tskatr  ;
    long  exinf  ;
    void (*task)(long )  ;
    int  itskpri  ;
    void* stk;
    int  stksz  ;
};

struct anonymous_typeX6
{
    unsigned int  sematr  ;
    int  isemcnt  ;
    int  maxsem  ;
};

struct anonymous_typeX7
{
    unsigned int  flgatr  ;
    unsigned int  iflgptn  ;
};

struct T_MSG
{
    struct T_MSG*  next  ;
};

struct anonymous_typeX8
{
    unsigned int  mbxatr  ;
};

enum  anonymous_typeY9 { TS_DORMANT 
,TS_READY 
,TS_RUNNING 
,TS_EXITED 
};

struct anonymous_typeX10
{
    void (*task)(long )  ;
    long  exinf  ;
    int  pri  ;
    enum anonymous_typeY9  state  ;
};

struct anonymous_typeX11
{
    int  count  ;
    int  max  ;
    int used;
};

struct anonymous_typeX12
{
    unsigned int  pattern  ;
    int used;
};

struct anonymous_typeX13
{
    struct T_MSG*  head  ;
    struct T_MSG*  tail  ;
    int used;
};

struct anonymous_typeX14
{
    struct T_MSG  hdr  ;
    int value;
};

/// variable definition ///
extern int errno;

extern struct mem_block*  free_list  ;

extern unsigned long  int  __neo_sbrk_cur  ;

extern int __neo_sbrk_inited;

void (*__atexit_funcs[32])();
extern int __atexit_count;

extern char* __strtok_save;

extern struct neo_frame*  neo_current_frame  ;

extern unsigned long  int neo_frame_id;

extern struct sMemHeader*  gAllocMem  ;

extern struct sMemHeader*  gFreeMem  ;

extern int gNumAlloc;

extern int gNumFree;

extern unsigned int  __bss_start__  ;
extern unsigned int  __bss_end__  ;
static struct anonymous_typeX10  g_tasks[8]  ;
static struct anonymous_typeX11  g_sems[4]  ;
static struct anonymous_typeX12  g_flgs[4]  ;
static struct anonymous_typeX13  g_mbx[4]  ;
static unsigned int  g_tick  ;
static int  g_current_tid  ;
static int  g_sem  ;
static int  g_flag  ;
static int  g_mbox  ;
static int g_msg_value;
static int g_worker_sum;
static struct anonymous_typeX14  g_msg  ;
// source head

// header function
int __append_char(char** p, unsigned long  int* rem, char c);
void __append_str(char** p, unsigned long  int* rem, const char* s);
unsigned long  brk(unsigned long  size  );
long read(int fd, void* buf, unsigned long  count  );
long write(int fd, const void* buf, unsigned long  count  );
int open(const char* path, int flags, int mode);
int close(int fd);
int unlink(const char* path);
void exit(int status);
void* sbrk(long  increment  );
void* malloc(unsigned long  size  );
void free(void* ptr);
void* calloc(unsigned long  nmemb  , unsigned long  size  );
void* realloc(void* ptr, unsigned long  size  );
char* strdup(const char* s);
int strcmp(const char* s1, const char* s2);
char* strstr(const char* haystack, const char* needle);
void* memset(void* dst, int c, unsigned int n);
int memcmp(const void* v1, const void* v2, unsigned int n);
void* memchr(const void* s, int c, unsigned long  n  );
void* memmove(void* dst, const void* src, unsigned int n);
void* memcpy(void* dst, const void* src, unsigned int n);
int strncmp(const char* p, const char* q, unsigned int n);
char* strcpy(char* dest, const char* src);
char* strncpy(char* s, const char* t, int n);
int strlen(const char* s);
char* strchr(const char* s, int c);
char* strrchr(const char* s, int c);
char* strndup(const char* s, unsigned long  n  );
unsigned long  arg_file_capacity(const struct arg_file*  file  );
void arg_lit_reset(struct arg_lit*  lit  );
void arg_file_reset(struct arg_file*  file  );
void arg_end_reset(struct arg_end*  end  );
void arg_add_error(struct arg_end*  end  , const char* msg, const char* arg, const struct arg_hdr*  hdr  );
int arg_has_capacity(int count, int maxcount);
struct arg_lit*  arg_litn(const char* shortopts, const char* longopts, int mincount, int maxcount, const char* glossary);
struct arg_file*  arg_filen(const char* shortopts, const char* longopts, const char* datatype, int mincount, int maxcount, const char* glossary);
struct arg_end*  arg_end(int maxerrors);
int argtable_reset(void** argtable, struct arg_end**  end_out  );
int argtable_entries(void** argtable, struct arg_end**  end_out  );
int arg_long_match(const char* options, const char* name);
struct arg_hdr*  arg_find_short(void** argtable, int entries, char short_opt);
struct arg_hdr*  arg_find_long(void** argtable, int entries, const char* name);
struct arg_file*  arg_find_positional(void** argtable, int entries);
int arg_file_add(struct arg_file*  file  , const char* value, struct arg_end*  end  , const char* errmsg);
int arg_parse(int argc, char** argv, void** argtable);
void arg_print_joined_option(char* buf, unsigned long  bufsz  , const struct arg_hdr*  hdr  );
void arg_print_syntax(void** argtable, const char* suffix);
void arg_print_glossary(void** argtable, const char* format);
void arg_print_errors(struct arg_end*  end  , const char* progname);
void arg_freetable(void** argtable, unsigned long  n  );
int isprint(int c);
int isspace(int c);
int isalpha(int c);
int isdigit(int c);
int isalnum(int c);
int puts(const char* s);
char* strcat(char* dest, const char* src);
char* strncat(char* dest, const char* src, unsigned long  n  );
char* itoa(char* buf, unsigned long  int val_, int base, int is_signed);
int vasprintf(char** out, const char* fmt, __builtin_va_list  ap  );
int __utoa_ull(char* dst, unsigned long  long v, int base, int lower);
void __fmt_num(char** p, unsigned long  int* rem, unsigned long  long v, int base, int is_signed, int neg, int width, char pad, int lower);
void __fmt_putc(struct anonymous_typeX4*  o  , char c);
int __is_digit(char c);
void __emit_pad(struct anonymous_typeX4*  o  , char pad, int n);
void __emit_num(struct anonymous_typeX4*  o  , unsigned long  long v, int base, int is_signed, int neg, int width, char pad, int lower, int left);
void __vformat(struct anonymous_typeX4*  o  , const char* fmt, __builtin_va_list  ap  );
int printf(const char* fmt, ...);
void __buf_putc(void* ctx, char ch);
void __str_putc(void* ctx, char ch);
int vsnprintf(char* out, unsigned long  int out_size, const char* fmt, __builtin_va_list  ap  );
int snprintf(char* out, unsigned long  int out_size, const char* fmt, ...);
int vsprintf(char* out, const char* fmt, __builtin_va_list  ap  );
int sprintf(char* out, const char* fmt, ...);
int atexit(void (*func)());
void __run_atexit();
double strtod(const char* nptr, char** endptr);
unsigned long  long __minux_parse_unsigned(const char* nptr, char** endptr, int base, int* neg_out, int* any_out);
unsigned long  int strtoul(const char* nptr, char** endptr, int base);
unsigned long  long strtoull(const char* nptr, char** endptr, int base);
long strtol(const char* nptr, char** endptr, int base);
long long strtoll(const char* nptr, char** endptr, int base);
long atol(const char* nptr);
int atoi(const char* nptr);
int __tolower(int c);
int strncasecmp(const char* a, const char* b, unsigned long  n  );
char* strerror(int errnum);
int ispunct(int c);
char* strtok(char* s, const char* delim);
int isxdigit(int c);
int __minux_isspace(int c);
int sscanf(const char* str, const char* fmt, ...);
_Bool  neo_frame_is_alive(unsigned long  int frame_id);
void stackframe();
void stackframe2(void* mem);
_Bool  die(const char* msg, char* sname, int sline);
void come_memleak_checker();
void* alloc_from_pages(unsigned long  size  );
void come_free_mem_of_heap_pool(void* mem);
void* come_alloc_mem_from_heap_pool(unsigned long  compiletime_size  , unsigned long  size  , const char* sname, int sline, int id, const char* class_name);
char* come_dynamic_typeof(void* mem);
unsigned long  dynamic_sizeof(void* mem);
void* come_calloc(unsigned long  count  , unsigned long  size  , const char* sname, int sline, int id, const char* class_name);
_Bool  come_is_alive(void* mem);
void come_free(void* mem);
void* come_memdup(void* block, char* sname, int sline, int id, const char* class_name);
void* come_increment_ref_count(void* mem, char* sname, int sline, int id);
void* come_print_ref_count(void* mem);
int come_get_ref_count(void* mem);
void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool  no_decrement  , _Bool  no_free  , void* result_obj, char* sname, int sline, int id);
void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, void* result_obj, char* sname, int sline, int id);
void xassert(const char* msg, _Bool  test  );
void* come_null_checker(void* mem, const char* sname, int sline, int id);
void* come_heap_checker(void* mem, const char* sname, int sline, int id);
char*  __builtin_string(const char* str, char* sname, int sline);
void stackframe_v2();
void* come_calloc_v2(unsigned long  count  , unsigned long  size  , const char* sname, int sline, int id, const char* class_name);
void come_free_v2(void* mem);
struct buffer*  buffer_initialize(struct buffer*  self  );
struct buffer*  buffer_initialize_with_value(struct buffer*  self  , const char* mem, unsigned long  size  );
void buffer_finalize(struct buffer*  self  );
struct buffer*  buffer_clone(struct buffer*  self  );
_Bool  buffer_equals(struct buffer*  left  , struct buffer*  right  );
int buffer_length(struct buffer*  self  );
void buffer_reset(struct buffer*  self  );
void buffer_trim(struct buffer*  self  , int len);
struct buffer*  buffer_append(struct buffer*  self  , const char* mem, unsigned long  size  );
struct buffer*  buffer_append_char(struct buffer*  self  , char c);
struct buffer*  buffer_append_str(struct buffer*  self  , const char* mem);
struct buffer*  buffer_append_format(struct buffer*  self  , const char* msg, ...);
struct buffer*  buffer_append_nullterminated_str(struct buffer*  self  , const char* mem);
struct buffer*  buffer_append_int(struct buffer*  self  , int value);
struct buffer*  buffer_append_long(struct buffer*  self  , long value);
struct buffer*  buffer_append_short(struct buffer*  self  , short value);
struct buffer*  buffer_alignment(struct buffer*  self  );
int buffer_compare(struct buffer*  left  , struct buffer*  right  );
struct buffer*  charp_to_buffer(const char* self);
char*  buffer_to_string(struct buffer*  self  );
unsigned char* buffer_head_pointer(struct buffer*  self  );
struct buffer*  chara_to_buffer(char* self, unsigned long  len  );
struct buffer*  charpa_to_buffer(char** self, unsigned long  len  );
struct buffer*  shorta_to_buffer(short* self, unsigned long  len  );
struct buffer*  inta_to_buffer(int* self, unsigned long  len  );
struct buffer*  longa_to_buffer(long* self, unsigned long  len  );
struct buffer*  floata_to_buffer(float* self, unsigned long  len  );
struct buffer*  doublea_to_buffer(double* self, unsigned long  len  );
char*  buffer_printable(struct buffer*  self  );
struct list$1char$* chara_to_list(char* self, unsigned long  len  );
struct list$1char$p* charpa_to_list(char** self, unsigned long  len  );
struct list$1short$* shorta_to_list(short* self, unsigned long  len  );
struct list$1int$* inta_to_list(int* self, unsigned long  len  );
struct list$1long$* longa_to_list(long* self, unsigned long  len  );
struct list$1float$* floata_to_list(float* self, unsigned long  len  );
struct list$1double$* doublea_to_list(double* self, unsigned long  len  );
_Bool  bool_equals(_Bool  self  , _Bool  right  );
_Bool  _Bool_equals(_Bool self, _Bool right);
_Bool  char_equals(char self, char right);
_Bool  short_equals(short self, short right);
_Bool  int_equals(int self, int right);
_Bool  long_equals(long self, long right);
_Bool  size_t_equals(unsigned long  self  , unsigned long  right  );
_Bool  float_equals(float self, float right);
_Bool  double_equals(double self, double right);
_Bool  bool_operator_equals(_Bool  self  , _Bool  right  );
_Bool  _Bool_operator_equals(_Bool  self  , _Bool  right  );
_Bool  char_operator_equals(char self, char right);
_Bool  short_operator_equals(short self, short right);
_Bool  int_operator_equals(int self, int right);
_Bool  long_operator_equals(long self, long right);
_Bool  bool_operator_not_equals(_Bool  self  , _Bool  right  );
_Bool  _Bool_operator_not_equals(_Bool  self  , _Bool  right  );
_Bool  char_operator_not_equals(char self, char right);
_Bool  short_operator_not_equals(short self, short right);
_Bool  int_operator_not_equals(int self, int right);
_Bool  long_operator_not_equals(long self, long right);
_Bool  charp_equals(const char* self, const char* right);
_Bool  string_equals(char* self, const char* right);
_Bool  voidp_equals(void* self, void* right);
_Bool  boolp_equals(_Bool*  self  , _Bool*  right  );
_Bool  string_operator_equals(char* self, const char* right);
_Bool  charp_operator_equals(const char* self, const char* right);
_Bool  chara_operator_equals(char* self, const char* right);
_Bool  voidp_operator_equals(const char* self, const char* right);
_Bool  voidp_operator_not_equals(const char* self, const char* right);
_Bool  string_operator_not_equals(char* self, const char* right);
_Bool  charp_operator_not_equals(const char* self, const char* right);
_Bool  chara_operator_not_equals(char* self, const char* right);
char*  charp_operator_add(const char* self, const char* right);
char*  string_operator_add(char* self, const char* right);
char*  charp_operator_mult(const char* self, int right);
char*  string_operator_mult(const char* self, int right);
_Bool  charpa_contained(const char* self[], unsigned long  len  , const char* str);
unsigned long  shorta_length(short* self, unsigned long  len  );
unsigned long  inta_length(int* self, unsigned long  len  );
unsigned long  longa_length(long* self, unsigned long  len  );
unsigned long  floata_length(float* self, unsigned long  len  );
unsigned long  doublea_length(double* self, unsigned long  len  );
unsigned int bool_get_hash_key(_Bool  value  );
unsigned int _Bool_get_hash_key(_Bool  value  );
unsigned int char_get_hash_key(char value);
unsigned int short_get_hash_key(short int value);
unsigned int int_get_hash_key(int value);
unsigned int long_get_hash_key(long value);
unsigned int size_t_get_hash_key(unsigned long  value  );
unsigned int float_get_hash_key(float value);
unsigned int double_get_hash_key(double value);
unsigned int charp_get_hash_key(const char* value);
unsigned int string_get_hash_key(char* value);
unsigned int voidp_get_hash_key(void* value);
_Bool  bool_clone(_Bool  self  );
_Bool  _Bool_clone(_Bool  self  );
char char_clone(char self);
short int short_clone(short self);
int int_clone(int self);
long  int long_clone(long self);
unsigned long  size_t_clone(unsigned long  self  );
double double_clone(double self);
float float_clone(float self);
_Bool  xisalpha(char c);
_Bool  xisblank(char c);
_Bool  xisdigit(char c);
_Bool  xisspace(char c);
_Bool  xisalnum(char c);
_Bool  xisascii(char c);
_Bool  xispunct(char c);
int string_length(const char* str);
int charp_length(const char* str);
int chara_length(const char* str);
char*  charp_reverse(const char* str);
char*  string_operator_load_range_element(char* str, int head, int tail);
char*  charp_operator_load_range_element(char* str, int head, int tail);
char*  charp_substring(const char* str, int head, int tail);
char*  xsprintf(const char* msg, ...);
char*  charp_delete(char* str, int head, int tail);
struct list$1char$ph* charp_split_char(char* self, char c);
char*  charp_xsprintf(char* self, const char* msg, ...);
char*  int_xsprintf(int self, const char* msg, ...);
char*  charp_printable(char* str);
char*  chara_printable(char* str);
char*  charp_sub_plain(char* self, char* str, char* replace);
char*  xbasename(char* path);
char*  xnoextname(char* path);
char*  xextname(char* path);
char*  bool_to_string(_Bool  self  );
char*  _Bool_to_string(_Bool  self  );
char*  char_to_string(char self);
char*  short_to_string(short self);
char*  int_to_string(int self);
char*  long_to_string(long self);
char*  size_t_to_string(unsigned long  self  );
char*  float_to_string(float self);
char*  double_to_string(double self);
char*  string_to_string(char* self);
char*  charp_to_string(const char* self);
int bool_compare(_Bool  left  , _Bool  right  );
int _Bool_compare(_Bool  left  , _Bool  right  );
int char_compare(char left, char right);
int short_compare(short left, short right);
int int_compare(int left, int right);
int long_compare(long left, long right);
int size_t_compare(unsigned long  left  , unsigned long  right  );
int float_compare(float left, float right);
int double_compare(double left, double right);
int string_compare(char* left, char* right);
int charp_compare(char* left, char* right);
char*  charp_puts(char* self);
char*  charp_print(char* self);
char*  charp_printf(char* self, ...);
int int_printf(int self, char* msg);
long long_printf(long self, char* msg);
void int_times(int self, void* parent, void (*block)(void*,int));
int string_index(char* str, const char* search_str, int default_value);
int charp_index(const char* str, const char* search_str, int default_value);
int charp_index_regex(const char* self, const char* reg, int default_value, _Bool  ignore_case  );
int charp_rindex_regex(const char* self, const char* reg, int default_value, _Bool  ignore_case  );
char*  string_chomp(const char* str);
int string_rindex_regex(char* self, const char* reg, int default_value, _Bool  ignore_case  );
int string_index_regex(char* self, const char* reg, int default_value, _Bool  ignore_case  );
_Bool  charp_match(char* self, const char* reg, _Bool  ignore_case  );
struct list$1char$ph* charp_scan(const char* self, const char* reg, _Bool  ignore_case  );
struct list$1char$ph* charp_split(const char* self, const char* reg, _Bool  ignore_case  );
char*  string_sub(char* self, const char* reg, const char* replace, _Bool  ignore_case  );
struct list$1char$ph* string_scan(char* self, const char* reg, _Bool  ignore_case  );
struct list$1char$ph* string_split(char* self, const char* reg, _Bool  ignore_case  );
_Bool  string_match(char* self, const char* reg, _Bool  ignore_case  );
char*  charp_sub(char* self, const char* reg, const char* replace, _Bool  global  , _Bool  ignore_case  );
char*  charp_sub_block(char* self, const char* reg, _Bool  global  , _Bool  ignore_case  , void* parent, char* (*block)(void*,char*,struct list$1char$ph*));
struct list$1char$ph* charp_scan_block(const char* self, const char* reg, _Bool  ignore_case  , void* parent, char* (*block)(void*,char*,struct list$1char$ph*));
char*  string_sub_block(char* self, const char* reg, _Bool  global  , _Bool  ignore_case  , void* parent, char* (*block)(void*,char*,struct list$1char$ph*));
int*  __builtin_wstring(const char* str, char* sname, int sline);
int wchar_tp_length(const int*  str  );
int wchar_ta_length(const int*  str  );
int wstring_length(const int*  str  );
char*  string_lower_case(char* str);
char*  string_upper_case(char* str);
int*  wchar_tp_substring(const int*  str  , int head, int tail);
int charp_index_count(const char* str, const char* search_str, int count, int default_value);
int charp_rindex(const char* str, const char* search_str, int default_value);
int charp_rindex_count(const char* str, const char* search_str, int count, int default_value);
char*  charp_strip(const char* self);
char*  wchar_tp_to_string(const int*  wstr  );
char*  wchar_ta_to_string(const int*  wstr  );
int*  charp_to_wstring(const char* str);
int*  chara_to_wstring(char* str);
int*  wchar_tp_delete(int*  str  , int head, int tail);
int wchar_tp_index(const int*  str  , const int*  search_str  , int default_value);
int wchar_tp_rindex(const int*  str  , const int*  search_str  , int default_value);
int*  wchar_tp_reverse(const int*  str  );
int*  wchar_tp_multiply(const int*  str  , int n);
int*  wchar_tp_printable(const int*  str  );
int wchar_tp_compare(const int*  left  , int*  right  );
int wstring_compare(const int*  left  , const int*  right  );
int*  wchar_tp_operator_mult(const int*  str  , int n);
int*  wstring_operator_mult(const int*  str  , int n);
_Bool  wstring_operator_equals(const int*  left  , const int*  right  );
_Bool  wstring_operator_not_equals(const int*  left  , const int*  right  );
int*  wchar_tp_operator_add(const int*  left  , const int*  right  );
int*  wstring_operator_add(const int*  left  , const int*  right  );
char*  charp_replace(char* self, int index, char c);
char*  charp_multiply(const char* str, int n);
struct list$1char$ph* charp_split_str(const char* self, const char* str);
unsigned int wchar_tp_get_hash_key(const int*  value  );
_Bool  wstring_equals(const int*  left  , const int*  right  );
_Bool  wchar_t_operator_equals(int  left  , int  right  );
_Bool  wchar_t_operator_not_equals(int  left  , int  right  );
unsigned int wchar_t_get_hash_key(int  value  );
_Bool  wchar_t_equals(int  left  , int  right  );
char*  wchar_t_to_string(int  wc  );
char*  xrealpath(const char* path);
char*  xdirname(const char* path);
unsigned long  xwcslen(const int*  wstr  );
int*  wstring_substring(const int*  str  , int head, int tail);
int string_index_count(const char* str, const char* search_str, int count, int default_value);
int string_rindex(const char* str, const char* search_str, int default_value);
int string_rindex_count(const char* str, const char* search_str, int count, int default_value);
char*  string_strip(const char* self);
char*  wstring_to_string(const int*  wstr  );
int*  int_to_wstring(int self);
int*  wstring_delete(int*  str  , int head, int tail);
int wstring_index(const int*  str  , const int*  search_str  , int default_value);
int wstring_rindex(const int*  str  , const int*  search_str  , int default_value);
int*  wstring_reverse(const int*  str  );
int*  wstring_multiply(const int*  str  , int n);
int*  wstring_printable(const int*  str  );
unsigned int wstring_get_hash_key(const int*  value  );
char*  string_replace(char* self, int index, char c);
char*  string_multiply(const char* str, int n);
struct list$1char$ph* string_split_str(const char* self, const char* str);
int*  string_to_wstring(const char* str);
char*  charp_chomp(const char* str);
_Bool  wchar_tp_equals(const int*  left  , const int*  right  );
_Bool  wchar_tp_operator_equals(const int*  left  , const int*  right  );
_Bool  wchar_tp_operator_not_equals(const int*  left  , const int*  right  );
static void mmio_write32(unsigned int  addr  , unsigned int  value  );
void tk_putchar(int ch);
void putchar(char ch);
void tk_puts(const char* s);
void tk_puthex(unsigned int  value  );
void tk_kernel_exit(int code);
static int valid_task(int  id  );
static int valid_sem(int  id  );
static int valid_flg(int  id  );
static int valid_mbx(int  id  );
int  tk_cre_tsk(const struct anonymous_typeX5*  pk_ctsk  );
int  tk_sta_tsk(int  tskid  , long  stacd  );
void tk_ext_tsk();
void tk_dly_tsk(unsigned int  dlytim  );
unsigned int  tk_get_tick();
int  tk_get_tid();
int  tk_cre_sem(const struct anonymous_typeX6*  pk_csem  );
int  tk_sig_sem(int  semid  );
int  tk_wai_sem(int  semid  );
int  tk_cre_flg(const struct anonymous_typeX7*  pk_cflg  );
int  tk_set_flg(int  flgid  , unsigned int  setptn  );
int  tk_wai_flg(int  flgid  , unsigned int  waiptn  , unsigned int  wfmode  , unsigned int*  p_flgptn  );
int  tk_cre_mbx(const struct anonymous_typeX8*  pk_cmbx  );
int  tk_snd_mbx(int  mbxid  , struct T_MSG*  pk_msg  );
int  tk_rcv_mbx(int  mbxid  , struct T_MSG**  ppk_msg  );
static void tk_sta_ker();
static void producer_task(long  exinf  );
static void worker_task(long  exinf  );
static void monitor_task(long  exinf  );
static void tk_app_main();
static void T_CSEM_finalize(struct anonymous_typeX6*  self  );
static void T_CFLG_finalize(struct anonymous_typeX7*  self  );
static void T_CMBX_finalize(struct anonymous_typeX8*  self  );
static void T_CTSK_finalize(struct anonymous_typeX5*  self  );
void default_handler();
void reset_handler();
// uniq global variable
// inline function

// body function
static void mmio_write32(unsigned int  addr  , unsigned int  value  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "mmio_write32"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    volatile unsigned int*  p  ;
    memset(&p, 0, sizeof(p));
    p=(volatile unsigned int* )addr;
    *p=value;
    neo_current_frame = fr.prev;
}

void tk_putchar(int ch)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "tk_putchar"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    volatile unsigned int*  uart  ;
    memset(&uart, 0, sizeof(uart));
    uart=(volatile unsigned int* )0x40034000u;
    *uart=(unsigned int )(unsigned char )ch;
    neo_current_frame = fr.prev;
}

void putchar(char ch)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "putchar"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    tk_putchar((int)ch);
    neo_current_frame = fr.prev;
}

void tk_puts(const char* s)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "tk_puts"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    while(*s!=0) {
        if(*s==10) {
            tk_putchar(13);
        }
        tk_putchar((int)*s);
        s++;
    }
    neo_current_frame = fr.prev;
}

void tk_puthex(unsigned int  value  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "tk_puthex"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int i;
    memset(&i, 0, sizeof(i));
    static const char* hex="0123456789abcdef";
    tk_puts("0x");
    for(i=28    ;i>=0;i-=4){
        tk_putchar(hex[(value>>i)&0xfu]);
    }
    neo_current_frame = fr.prev;
}

void tk_kernel_exit(int code)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "tk_kernel_exit"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    mmio_write32(0x40000000u,(unsigned int )code);
    for(;;){
    }
    neo_current_frame = fr.prev;
}

static int valid_task(int  id  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "valid_task"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return id>0&&id<=8&&(*({ long long __neo_array_index1_0 = (long long)(id-1); if(__neo_array_index1_0 < 0 || __neo_array_index1_0 >= (long long)(8)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_tasks[__neo_array_index1_0]; })).task /* uho */!=0;
    neo_current_frame = fr.prev;
}

static int valid_sem(int  id  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "valid_sem"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return id>0&&id<=4&&(*({ long long __neo_array_index2_0 = (long long)(id-1); if(__neo_array_index2_0 < 0 || __neo_array_index2_0 >= (long long)(4)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_sems[__neo_array_index2_0]; })).used /* uho */!=0;
    neo_current_frame = fr.prev;
}

static int valid_flg(int  id  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "valid_flg"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return id>0&&id<=4&&(*({ long long __neo_array_index3_0 = (long long)(id-1); if(__neo_array_index3_0 < 0 || __neo_array_index3_0 >= (long long)(4)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_flgs[__neo_array_index3_0]; })).used /* uho */!=0;
    neo_current_frame = fr.prev;
}

static int valid_mbx(int  id  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "valid_mbx"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return id>0&&id<=4&&(*({ long long __neo_array_index4_0 = (long long)(id-1); if(__neo_array_index4_0 < 0 || __neo_array_index4_0 >= (long long)(4)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_mbx[__neo_array_index4_0]; })).used /* uho */!=0;
    neo_current_frame = fr.prev;
}

int  tk_cre_tsk(const struct anonymous_typeX5*  pk_ctsk  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "tk_cre_tsk"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int i;
    memset(&i, 0, sizeof(i));
    for(i=0    ;i<8;i++){
        if((*({ long long __neo_array_index5_0 = (long long)(i); if(__neo_array_index5_0 < 0 || __neo_array_index5_0 >= (long long)(8)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_tasks[__neo_array_index5_0]; })).task /* uho */==0) {
            (*({ long long __neo_array_index6_0 = (long long)(i); if(__neo_array_index6_0 < 0 || __neo_array_index6_0 >= (long long)(8)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_tasks[__neo_array_index6_0]; })).task=pk_ctsk->task;
            (*({ long long __neo_array_index7_0 = (long long)(i); if(__neo_array_index7_0 < 0 || __neo_array_index7_0 >= (long long)(8)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_tasks[__neo_array_index7_0]; })).exinf=pk_ctsk->exinf;
            (*({ long long __neo_array_index8_0 = (long long)(i); if(__neo_array_index8_0 < 0 || __neo_array_index8_0 >= (long long)(8)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_tasks[__neo_array_index8_0]; })).pri=pk_ctsk->itskpri;
            (*({ long long __neo_array_index9_0 = (long long)(i); if(__neo_array_index9_0 < 0 || __neo_array_index9_0 >= (long long)(8)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_tasks[__neo_array_index9_0]; })).state=(0);
                        neo_current_frame = fr.prev;
            return i+1;
        }
    }
        neo_current_frame = fr.prev;
    return (-34);
    neo_current_frame = fr.prev;
}

int  tk_sta_tsk(int  tskid  , long  stacd  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "tk_sta_tsk"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(!valid_task(tskid)) {
                neo_current_frame = fr.prev;
        return (-18);
    }
    (*({ long long __neo_array_index10_0 = (long long)(tskid-1); if(__neo_array_index10_0 < 0 || __neo_array_index10_0 >= (long long)(8)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_tasks[__neo_array_index10_0]; })).exinf=stacd;
    (*({ long long __neo_array_index11_0 = (long long)(tskid-1); if(__neo_array_index11_0 < 0 || __neo_array_index11_0 >= (long long)(8)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_tasks[__neo_array_index11_0]; })).state=(1);
        neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

void tk_ext_tsk()
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "tk_ext_tsk"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(valid_task(g_current_tid)) {
        (*({ long long __neo_array_index12_0 = (long long)(g_current_tid-1); if(__neo_array_index12_0 < 0 || __neo_array_index12_0 >= (long long)(8)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_tasks[__neo_array_index12_0]; })).state=(3);
    }
    neo_current_frame = fr.prev;
}

void tk_dly_tsk(unsigned int  dlytim  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "tk_dly_tsk"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    g_tick+=dlytim;
    mmio_write32(0xe000e018u,g_tick);
    neo_current_frame = fr.prev;
}

unsigned int  tk_get_tick()
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "tk_get_tick"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return g_tick;
    neo_current_frame = fr.prev;
}

int  tk_get_tid()
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "tk_get_tid"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return g_current_tid;
    neo_current_frame = fr.prev;
}

int  tk_cre_sem(const struct anonymous_typeX6*  pk_csem  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "tk_cre_sem"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int i;
    memset(&i, 0, sizeof(i));
    for(i=0    ;i<4;i++){
        if((*({ long long __neo_array_index13_0 = (long long)(i); if(__neo_array_index13_0 < 0 || __neo_array_index13_0 >= (long long)(4)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_sems[__neo_array_index13_0]; })).used /* uho */==0) {
            (*({ long long __neo_array_index14_0 = (long long)(i); if(__neo_array_index14_0 < 0 || __neo_array_index14_0 >= (long long)(4)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_sems[__neo_array_index14_0]; })).used=1;
            (*({ long long __neo_array_index15_0 = (long long)(i); if(__neo_array_index15_0 < 0 || __neo_array_index15_0 >= (long long)(4)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_sems[__neo_array_index15_0]; })).count=pk_csem->isemcnt;
            (*({ long long __neo_array_index16_0 = (long long)(i); if(__neo_array_index16_0 < 0 || __neo_array_index16_0 >= (long long)(4)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_sems[__neo_array_index16_0]; })).max=pk_csem->maxsem;
                        neo_current_frame = fr.prev;
            return i+1;
        }
    }
        neo_current_frame = fr.prev;
    return (-34);
    neo_current_frame = fr.prev;
}

int  tk_sig_sem(int  semid  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "tk_sig_sem"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct anonymous_typeX11*  sem  ;
    memset(&sem, 0, sizeof(sem));
    if(!valid_sem(semid)) {
                neo_current_frame = fr.prev;
        return (-18);
    }
    sem=&g_sems[semid-1];
    if(sem->count<sem->max) {
        sem->count++;
    }
        neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

int  tk_wai_sem(int  semid  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "tk_wai_sem"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct anonymous_typeX11*  sem  ;
    memset(&sem, 0, sizeof(sem));
    if(!valid_sem(semid)) {
                neo_current_frame = fr.prev;
        return (-18);
    }
    sem=&g_sems[semid-1];
    if(sem->count<=0) {
                neo_current_frame = fr.prev;
        return (-50);
    }
    sem->count--;
        neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

int  tk_cre_flg(const struct anonymous_typeX7*  pk_cflg  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "tk_cre_flg"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int i;
    memset(&i, 0, sizeof(i));
    for(i=0    ;i<4;i++){
        if((*({ long long __neo_array_index19_0 = (long long)(i); if(__neo_array_index19_0 < 0 || __neo_array_index19_0 >= (long long)(4)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_flgs[__neo_array_index19_0]; })).used /* uho */==0) {
            (*({ long long __neo_array_index20_0 = (long long)(i); if(__neo_array_index20_0 < 0 || __neo_array_index20_0 >= (long long)(4)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_flgs[__neo_array_index20_0]; })).used=1;
            (*({ long long __neo_array_index21_0 = (long long)(i); if(__neo_array_index21_0 < 0 || __neo_array_index21_0 >= (long long)(4)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_flgs[__neo_array_index21_0]; })).pattern=pk_cflg->iflgptn;
                        neo_current_frame = fr.prev;
            return i+1;
        }
    }
        neo_current_frame = fr.prev;
    return (-34);
    neo_current_frame = fr.prev;
}

int  tk_set_flg(int  flgid  , unsigned int  setptn  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "tk_set_flg"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(!valid_flg(flgid)) {
                neo_current_frame = fr.prev;
        return (-18);
    }
    (*({ long long __neo_array_index22_0 = (long long)(flgid-1); if(__neo_array_index22_0 < 0 || __neo_array_index22_0 >= (long long)(4)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_flgs[__neo_array_index22_0]; })).pattern /* uho */|=setptn;
        neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

int  tk_wai_flg(int  flgid  , unsigned int  waiptn  , unsigned int  wfmode  , unsigned int*  p_flgptn  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "tk_wai_flg"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct anonymous_typeX12*  flg  ;
    unsigned int  hit  ;
    memset(&flg, 0, sizeof(flg));
    memset(&hit, 0, sizeof(hit));
    if(!valid_flg(flgid)) {
                neo_current_frame = fr.prev;
        return (-18);
    }
    flg=&g_flgs[flgid-1];
    if((wfmode&0x01)!=0) {
        hit=flg->pattern&waiptn;
    }
    else {
        hit=((((flg->pattern&waiptn)==waiptn))?(waiptn):(0));
    }
    if(hit==0) {
                neo_current_frame = fr.prev;
        return (-50);
    }
    *p_flgptn=flg->pattern;
    if((wfmode&0x10)!=0) {
        flg->pattern=0;
    }
        neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

int  tk_cre_mbx(const struct anonymous_typeX8*  pk_cmbx  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "tk_cre_mbx"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int i;
    memset(&i, 0, sizeof(i));
    (void)pk_cmbx;
    for(i=0    ;i<4;i++){
        if((*({ long long __neo_array_index24_0 = (long long)(i); if(__neo_array_index24_0 < 0 || __neo_array_index24_0 >= (long long)(4)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_mbx[__neo_array_index24_0]; })).used /* uho */==0) {
            (*({ long long __neo_array_index25_0 = (long long)(i); if(__neo_array_index25_0 < 0 || __neo_array_index25_0 >= (long long)(4)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_mbx[__neo_array_index25_0]; })).used=1;
            (*({ long long __neo_array_index26_0 = (long long)(i); if(__neo_array_index26_0 < 0 || __neo_array_index26_0 >= (long long)(4)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_mbx[__neo_array_index26_0]; })).head=0;
            (*({ long long __neo_array_index27_0 = (long long)(i); if(__neo_array_index27_0 < 0 || __neo_array_index27_0 >= (long long)(4)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_mbx[__neo_array_index27_0]; })).tail=0;
                        neo_current_frame = fr.prev;
            return i+1;
        }
    }
        neo_current_frame = fr.prev;
    return (-34);
    neo_current_frame = fr.prev;
}

int  tk_snd_mbx(int  mbxid  , struct T_MSG*  pk_msg  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "tk_snd_mbx"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct anonymous_typeX13*  mbx  ;
    memset(&mbx, 0, sizeof(mbx));
    if(!valid_mbx(mbxid)) {
                neo_current_frame = fr.prev;
        return (-18);
    }
    mbx=&g_mbx[mbxid-1];
    pk_msg->next=0;
    if(mbx->tail!=0) {
        mbx->tail->next=pk_msg;
    }
    else {
        mbx->head=pk_msg;
    }
    mbx->tail=pk_msg;
        neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

int  tk_rcv_mbx(int  mbxid  , struct T_MSG**  ppk_msg  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "tk_rcv_mbx"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct anonymous_typeX13*  mbx  ;
    memset(&mbx, 0, sizeof(mbx));
    if(!valid_mbx(mbxid)) {
                neo_current_frame = fr.prev;
        return (-18);
    }
    mbx=&g_mbx[mbxid-1];
    if(mbx->head==0) {
                neo_current_frame = fr.prev;
        return (-50);
    }
    *ppk_msg=mbx->head;
    mbx->head=mbx->head->next;
    if(mbx->head==0) {
        mbx->tail=0;
    }
        neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

static void tk_sta_ker()
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "tk_sta_ker"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int  best  ;
    int  best_pri  ;
    int i;
    void (*entry)(long )  ;
    long  exinf  ;
    memset(&best, 0, sizeof(best));
    memset(&best_pri, 0, sizeof(best_pri));
    memset(&i, 0, sizeof(i));
    memset(&entry, 0, sizeof(entry));
    memset(&exinf, 0, sizeof(exinf));
    for(;;){
        best=0;
        best_pri=0x7fffffff;
        for(i=0        ;i<8;i++){
            if((*({ long long __neo_array_index30_0 = (long long)(i); if(__neo_array_index30_0 < 0 || __neo_array_index30_0 >= (long long)(8)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_tasks[__neo_array_index30_0]; })).state /* uho */==(1)&&(*({ long long __neo_array_index31_0 = (long long)(i); if(__neo_array_index31_0 < 0 || __neo_array_index31_0 >= (long long)(8)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_tasks[__neo_array_index31_0]; })).pri /* uho */<best_pri) {
                best=i+1;
                best_pri=(*({ long long __neo_array_index32_0 = (long long)(i); if(__neo_array_index32_0 < 0 || __neo_array_index32_0 >= (long long)(8)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_tasks[__neo_array_index32_0]; })).pri /* uho */;
            }
        }
        if(best==0) {
            break;
        }
        g_current_tid=best;
        (*({ long long __neo_array_index33_0 = (long long)(best-1); if(__neo_array_index33_0 < 0 || __neo_array_index33_0 >= (long long)(8)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_tasks[__neo_array_index33_0]; })).state=(2);
        entry=(*({ long long __neo_array_index34_0 = (long long)(best-1); if(__neo_array_index34_0 < 0 || __neo_array_index34_0 >= (long long)(8)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_tasks[__neo_array_index34_0]; })).task /* uho */;
        exinf=(*({ long long __neo_array_index35_0 = (long long)(best-1); if(__neo_array_index35_0 < 0 || __neo_array_index35_0 >= (long long)(8)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_tasks[__neo_array_index35_0]; })).exinf /* uho */;
        entry(exinf);
        if((*({ long long __neo_array_index36_0 = (long long)(best-1); if(__neo_array_index36_0 < 0 || __neo_array_index36_0 >= (long long)(8)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_tasks[__neo_array_index36_0]; })).state /* uho */==(2)) {
            (*({ long long __neo_array_index37_0 = (long long)(best-1); if(__neo_array_index37_0 < 0 || __neo_array_index37_0 >= (long long)(8)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_tasks[__neo_array_index37_0]; })).state=(3);
        }
    }
    neo_current_frame = fr.prev;
}

static void producer_task(long  exinf  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "producer_task"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    (void)exinf;
    tk_puts("task producer start\n");
    g_msg.value=42;
    g_msg_value=42;
    tk_snd_mbx(g_mbox,&g_msg.hdr /* uho */);
    tk_sig_sem(g_sem);
    tk_set_flg(g_flag,0x01);
    tk_dly_tsk(3);
    tk_puts("task producer done\n");
    tk_ext_tsk();
    neo_current_frame = fr.prev;
}

static void worker_task(long  exinf  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "worker_task"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct T_MSG*  raw  ;
    struct anonymous_typeX14*  msg  ;
    memset(&raw, 0, sizeof(raw));
    memset(&msg, 0, sizeof(msg));
    (void)exinf;
    raw=0;
    tk_puts("task worker start\n");
    if(tk_wai_sem(g_sem)==0&&tk_rcv_mbx(g_mbox,&raw)==0) {
        msg=(struct anonymous_typeX14* )raw;
        g_worker_sum+=msg->value;
        tk_puts("task worker got message\n");
    }
    tk_set_flg(g_flag,0x02);
    tk_ext_tsk();
    neo_current_frame = fr.prev;
}

static void monitor_task(long  exinf  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "monitor_task"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    unsigned int  pattern  ;
    memset(&pattern, 0, sizeof(pattern));
    (void)exinf;
    pattern=0;
    tk_puts("task monitor start\n");
    if(tk_wai_flg(g_flag,0x03,0x00|0x10,&pattern)!=0) {
        tk_puts("monitor flag wait failed\n");
        tk_kernel_exit(1);
    }
    tk_puts("monitor flags=");
    tk_puthex(pattern);
    tk_puts(" tick=");
    tk_puthex(tk_get_tick());
    tk_puts(" tid=");
    tk_puthex((unsigned int )tk_get_tid());
    tk_puts("\n");
    if(g_msg_value==42&&g_worker_sum==42&&pattern==0x03) {
        tk_puts("uT-Kernel demo PASS\n");
        tk_kernel_exit(0);
    }
    tk_puts("uT-Kernel demo FAIL\n");
    tk_kernel_exit(1);
    neo_current_frame = fr.prev;
}

static void tk_app_main()
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "tk_app_main"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct anonymous_typeX6  csem  ;
    struct anonymous_typeX7  cflg  ;
    struct anonymous_typeX8  cmbx  ;
    struct anonymous_typeX5  ctsk  ;
    int  producer  ;
    int  worker  ;
    int  monitor  ;
    memset(&csem, 0, sizeof(csem));
    memset(&cflg, 0, sizeof(cflg));
    memset(&cmbx, 0, sizeof(cmbx));
    memset(&ctsk, 0, sizeof(ctsk));
    memset(&producer, 0, sizeof(producer));
    memset(&worker, 0, sizeof(worker));
    memset(&monitor, 0, sizeof(monitor));
    tk_puts("uT-Kernel on neo-c Pico emulator\n");
    csem.sematr=0;
    csem.isemcnt=0;
    csem.maxsem=1;
    g_sem=tk_cre_sem(&csem);
    cflg.flgatr=0;
    cflg.iflgptn=0;
    g_flag=tk_cre_flg(&cflg);
    cmbx.mbxatr=0;
    g_mbox=tk_cre_mbx(&cmbx);
    ctsk.tskatr=0;
    ctsk.stk=0;
    ctsk.stksz=0;
    ctsk.exinf=0;
    ctsk.task=producer_task;
    ctsk.itskpri=1;
    producer=tk_cre_tsk(&ctsk);
    ctsk.task=worker_task;
    ctsk.itskpri=2;
    worker=tk_cre_tsk(&ctsk);
    ctsk.task=monitor_task;
    ctsk.itskpri=3;
    monitor=tk_cre_tsk(&ctsk);
    tk_sta_tsk(producer,0);
    tk_sta_tsk(worker,0);
    tk_sta_tsk(monitor,0);
    tk_sta_ker();
    tk_kernel_exit(2);
    come_call_finalizer(T_CSEM_finalize, (&csem), (void*)0, (void*)0, 1, 0, 0, (void*)0, "utkernel.nc}", 481, 1);
    come_call_finalizer(T_CFLG_finalize, (&cflg), (void*)0, (void*)0, 1, 0, 0, (void*)0, "utkernel.nc}", 481, 2);
    come_call_finalizer(T_CMBX_finalize, (&cmbx), (void*)0, (void*)0, 1, 0, 0, (void*)0, "utkernel.nc}", 481, 3);
    come_call_finalizer(T_CTSK_finalize, (&ctsk), (void*)0, (void*)0, 1, 0, 0, (void*)0, "utkernel.nc}", 481, 4);
    neo_current_frame = fr.prev;
}

static void T_CSEM_finalize(struct anonymous_typeX6*  self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "T_CSEM_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
}

static void T_CFLG_finalize(struct anonymous_typeX7*  self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "T_CFLG_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
}

static void T_CMBX_finalize(struct anonymous_typeX8*  self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "T_CMBX_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
}

static void T_CTSK_finalize(struct anonymous_typeX5*  self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "T_CTSK_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
}

void default_handler()
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "default_handler"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    tk_puts("default exception\n");
    tk_kernel_exit(3);
    neo_current_frame = fr.prev;
}

void reset_handler()
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "reset_handler"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    unsigned int*  p  ;
    memset(&p, 0, sizeof(p));
    p=&__bss_start__;
    while(p<&__bss_end__) {
        *p=0;
        p++;
    }
    tk_app_main();
    tk_kernel_exit(4);
    neo_current_frame = fr.prev;
}

