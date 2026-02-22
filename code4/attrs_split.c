/// c_include definition ///
/// typedef definition ///
typedef __builtin_va_list __gnuc_va_list;

typedef char __int8_t;

typedef unsigned char __uint8_t;

typedef short __int16_t;

typedef unsigned short int __uint16_t;

typedef int __int32_t;

typedef unsigned int __uint32_t;

typedef long long __int64_t;

typedef unsigned long  long __uint64_t;

typedef long __darwin_intptr_t;

typedef unsigned int __darwin_natural_t;

typedef int __darwin_ct_rune_t;

typedef union anonymous_typeZ1 __mbstate_t;

typedef union anonymous_typeZ1  __darwin_mbstate_t  ;

typedef long __darwin_ptrdiff_t;

typedef unsigned long  int __darwin_size_t;

typedef __builtin_va_list __darwin_va_list;

typedef int __darwin_wchar_t;

typedef int  __darwin_rune_t  ;

typedef unsigned int __darwin_wint_t;

typedef unsigned long  int __darwin_clock_t;

typedef unsigned int  __darwin_socklen_t  ;

typedef long __darwin_ssize_t;

typedef long __darwin_time_t;

typedef long long  __darwin_blkcnt_t  ;

typedef int  __darwin_blksize_t  ;

typedef int  __darwin_dev_t  ;

typedef unsigned int __darwin_fsblkcnt_t;

typedef unsigned int __darwin_fsfilcnt_t;

typedef unsigned int  __darwin_gid_t  ;

typedef unsigned int  __darwin_id_t  ;

typedef unsigned long  long  __darwin_ino64_t  ;

typedef unsigned long  long  __darwin_ino_t  ;

typedef unsigned int  __darwin_mach_port_name_t  ;

typedef unsigned int  __darwin_mach_port_t  ;

typedef unsigned short int  __darwin_mode_t  ;

typedef long long  __darwin_off_t  ;

typedef int  __darwin_pid_t  ;

typedef unsigned int  __darwin_sigset_t  ;

typedef int  __darwin_suseconds_t  ;

typedef unsigned int  __darwin_uid_t  ;

typedef unsigned int  __darwin_useconds_t  ;

typedef struct _opaque_pthread_attr_t  __darwin_pthread_attr_t  ;

typedef struct _opaque_pthread_cond_t  __darwin_pthread_cond_t  ;

typedef struct _opaque_pthread_condattr_t  __darwin_pthread_condattr_t  ;

typedef unsigned long  int __darwin_pthread_key_t;

typedef struct _opaque_pthread_mutex_t  __darwin_pthread_mutex_t  ;

typedef struct _opaque_pthread_mutexattr_t  __darwin_pthread_mutexattr_t  ;

typedef struct _opaque_pthread_once_t  __darwin_pthread_once_t  ;

typedef struct _opaque_pthread_rwlock_t  __darwin_pthread_rwlock_t  ;

typedef struct _opaque_pthread_rwlockattr_t  __darwin_pthread_rwlockattr_t  ;

typedef struct _opaque_pthread_t*  __darwin_pthread_t  ;

typedef int __darwin_nl_item;

typedef int __darwin_wctrans_t;

typedef unsigned int  __darwin_wctype_t  ;

typedef char int8_t;

typedef short int16_t;

typedef int int32_t;

typedef long long int64_t;

typedef unsigned char u_int8_t;

typedef unsigned short int u_int16_t;

typedef unsigned int u_int32_t;

typedef unsigned long  long u_int64_t;

typedef long long  register_t  ;

typedef long  intptr_t  ;

typedef unsigned long  int uintptr_t;

typedef unsigned long  long  user_addr_t  ;

typedef unsigned long  long  user_size_t  ;

typedef long long  user_ssize_t  ;

typedef long long  user_long_t  ;

typedef unsigned long  long  user_ulong_t  ;

typedef long long  user_time_t  ;

typedef long long  user_off_t  ;

typedef unsigned long  long  syscall_arg_t  ;

typedef __darwin_va_list  va_list  ;

typedef unsigned long  int  size_t  ;

typedef long long  fpos_t  ;

typedef struct __sFILE  FILE  ;

typedef long long  off_t  ;

typedef long  ssize_t  ;

typedef long  ptrdiff_t  ;

typedef unsigned long  int  rsize_t  ;

typedef int  wchar_t  ;

typedef unsigned int  wint_t  ;

typedef long  double max_align_t;

/// previous struct definition ///
struct __sFILEX;

/// struct definition ///
union anonymous_typeZ1
{
char __mbstate8[128];
long long _mbstateL;
};

typedef unsigned char __darwin_uuid_t[16];

typedef char __darwin_uuid_string_t[37];

struct __darwin_pthread_handler_rec
{
    void (*__routine)(void*);
    void* __arg;
    struct __darwin_pthread_handler_rec*  __next  ;
};

struct _opaque_pthread_attr_t
{
    long __sig;
    char __opaque[56];
};

struct _opaque_pthread_cond_t
{
    long __sig;
    char __opaque[40];
};

struct _opaque_pthread_condattr_t
{
    long __sig;
    char __opaque[8];
};

struct _opaque_pthread_mutex_t
{
    long __sig;
    char __opaque[56];
};

struct _opaque_pthread_mutexattr_t
{
    long __sig;
    char __opaque[8];
};

struct _opaque_pthread_once_t
{
    long __sig;
    char __opaque[8];
};

struct _opaque_pthread_rwlock_t
{
    long __sig;
    char __opaque[192];
};

struct _opaque_pthread_rwlockattr_t
{
    long __sig;
    char __opaque[16];
};

struct _opaque_pthread_t
{
    long __sig;
    struct __darwin_pthread_handler_rec*  __cleanup_stack  ;
    char __opaque[8176];
};

struct __sbuf
{
    unsigned char* _base;
    int _size;
};

struct __sFILE
{
    unsigned char* _p;
    int _r;
    int _w;
    short _flags;
    short _file;
    struct __sbuf  _bf  ;
    int _lbfsize;
    void* _cookie;
    int (*_close)(void*);
    int (*_read)(void*,char*,int);
    long long  (*_seek)(void*,long long ,int);
    int (*_write)(void*,const char*,int);
    struct __sbuf  _ub  ;
    struct __sFILEX*  _extra  ;
    int _ur;
    unsigned char _ubuf[3];
    unsigned char _nbuf[1];
    struct __sbuf  _lb  ;
    int _blksize;
    long long  _offset  ;
};

struct Packed
{
    char a;
    int b;
} __attribute__((packed)) ;

/// variable definition ///
extern struct __sFILE*  __stdinp  ;
extern struct __sFILE*  __stdoutp  ;
extern struct __sFILE*  __stderrp  ;
extern const int sys_nerr;
extern const char* const sys_errlist[];
int g1 __attribute__((aligned(16))) =0;
// source head

// header function
int renameat(int , const char* , int , const char* );
int renamex_np(const char* , const char* , unsigned int );
int renameatx_np(int , const char* , int , const char* , unsigned int );
int printf(const char* restrict , ...) __attribute__((__format__ (__printf__, 1, 2)));
void clearerr(struct __sFILE*    );
int fclose(struct __sFILE*    );
int feof(struct __sFILE*    );
int ferror(struct __sFILE*    );
int fflush(struct __sFILE*    );
int fgetc(struct __sFILE*    );
int fgetpos(struct __sFILE* restrict    , long long*    );
char* fgets(char* restrict , int __size, struct __sFILE*    );
struct __sFILE*  fopen(const char* restrict __filename, const char* restrict __mode) __asm("_" "fopen" "$DARWIN_EXTSN");
int fprintf(struct __sFILE* restrict    , const char* restrict , ...) __attribute__((__format__ (__printf__, 2, 3)));
int fputc(int , struct __sFILE*    );
int fputs(const char* restrict , struct __sFILE* restrict    ) __asm("_" "fputs" );
unsigned long  int  fread(void* restrict __ptr, unsigned long  int  __size  , unsigned long  int  __nitems  , struct __sFILE* restrict  __stream  );
struct __sFILE*  freopen(const char* restrict , const char* restrict , struct __sFILE* restrict    ) __asm("_" "freopen" );
int fscanf(struct __sFILE* restrict    , const char* restrict , ...) __attribute__((__format__ (__scanf__, 2, 3)));
int fseek(struct __sFILE*    , long , int );
int fsetpos(struct __sFILE*    , const long long*    );
long ftell(struct __sFILE*    );
unsigned long  int  fwrite(const void* restrict __ptr, unsigned long  int  __size  , unsigned long  int  __nitems  , struct __sFILE* restrict  __stream  ) __asm("_" "fwrite" );
int getc(struct __sFILE*    );
int getchar();
char* gets(char* );
void perror(const char* );
int putc(int , struct __sFILE*    );
int putchar(int );
int puts(const char* );
int remove(const char* );
int rename(const char* __old, const char* __new);
void rewind(struct __sFILE*    );
int scanf(const char* restrict , ...) __attribute__((__format__ (__scanf__, 1, 2)));
void setbuf(struct __sFILE* restrict    , char* restrict );
int setvbuf(struct __sFILE* restrict    , char* restrict , int , unsigned long  int  __size  );
int sprintf(char* restrict , const char* restrict , ...) __attribute__((__format__ (__printf__, 2, 3))) ;
int sscanf(const char* restrict , const char* restrict , ...) __attribute__((__format__ (__scanf__, 2, 3)));
struct __sFILE*  tmpfile();
char* tmpnam(char* );
int ungetc(int , struct __sFILE*    );
int vfprintf(struct __sFILE* restrict    , const char* restrict , __darwin_va_list    ) __attribute__((__format__ (__printf__, 2, 0)));
int vprintf(const char* restrict , __darwin_va_list    ) __attribute__((__format__ (__printf__, 1, 0)));
int vsprintf(char* restrict , const char* restrict , __darwin_va_list    ) __attribute__((__format__ (__printf__, 2, 0))) ;
char* ctermid(char* );
struct __sFILE*  fdopen(int , const char* ) __asm("_" "fdopen" "$DARWIN_EXTSN");
int fileno(struct __sFILE*    );
int pclose(struct __sFILE*    );
struct __sFILE*  popen(const char* , const char* ) __asm("_" "popen" "$DARWIN_EXTSN") ;
int __srget(struct __sFILE*    );
int __svfscanf(struct __sFILE*    , const char* , __darwin_va_list    ) __attribute__((__format__ (__scanf__, 2, 0)));
int __swbuf(int , struct __sFILE*    );
void flockfile(struct __sFILE*    );
int ftrylockfile(struct __sFILE*    );
void funlockfile(struct __sFILE*    );
int getc_unlocked(struct __sFILE*    );
int getchar_unlocked();
int putc_unlocked(int , struct __sFILE*    );
int putchar_unlocked(int );
char* tempnam(const char* __dir, const char* __prefix) __asm("_" "tempnam" );
int fseeko(struct __sFILE*  __stream  , long long  __offset  , int __whence);
long long  ftello(struct __sFILE*  __stream  );
int snprintf(char* restrict __str, unsigned long  int  __size  , const char* restrict __format, ...) __attribute__((__format__ (__printf__, 3, 4)));
int vfscanf(struct __sFILE* restrict  __stream  , const char* restrict __format, __darwin_va_list    ) __attribute__((__format__ (__scanf__, 2, 0)));
int vscanf(const char* restrict __format, __darwin_va_list    ) __attribute__((__format__ (__scanf__, 1, 0)));
int vsnprintf(char* restrict __str, unsigned long  int  __size  , const char* restrict __format, __darwin_va_list    ) __attribute__((__format__ (__printf__, 3, 0)));
int vsscanf(const char* restrict __str, const char* restrict __format, __darwin_va_list    ) __attribute__((__format__ (__scanf__, 2, 0)));
int dprintf(int , const char* restrict , ...) __attribute__((__format__ (__printf__, 2, 3))) ;
int vdprintf(int , const char* restrict , __darwin_va_list    ) __attribute__((__format__ (__printf__, 2, 0))) ;
long  getdelim(char** restrict __linep, unsigned long  int* restrict  __linecapp  , int __delimiter, struct __sFILE* restrict  __stream  );
long  getline(char** restrict __linep, unsigned long  int* restrict  __linecapp  , struct __sFILE* restrict  __stream  );
struct __sFILE*  fmemopen(void* restrict __buf, unsigned long  int  __size  , const char* restrict __mode);
struct __sFILE*  open_memstream(char** __bufp, unsigned long  int*  __sizep  );
int asprintf(char** restrict , const char* restrict , ...) __attribute__((__format__ (__printf__, 2, 3)));
char* ctermid_r(char* );
char* fgetln(struct __sFILE*    , unsigned long  int*  __len  );
const char* fmtcheck(const char* , const char* ) __attribute__((format_arg(2)));
int fpurge(struct __sFILE*    );
void setbuffer(struct __sFILE*    , char* , int __size);
int setlinebuf(struct __sFILE*    );
int vasprintf(char** restrict , const char* restrict , __darwin_va_list    ) __attribute__((__format__ (__printf__, 2, 0)));
struct __sFILE*  funopen(const void* , int (*anonymous_lambda_var_nameZ1)(void*,char*,int), int (*anonymous_lambda_var_nameZ2)(void*,const char*,int), long long  (*anonymous_lambda_var_nameZ3)(void*,long long ,int), int (*anonymous_lambda_var_nameZ4)(void*));
int __snprintf_chk(char* restrict , unsigned long  int  __maxlen  , int , unsigned long  int    , const char* restrict , ...);
int __vsnprintf_chk(char* restrict , unsigned long  int  __maxlen  , int , unsigned long  int    , const char* restrict , __darwin_va_list    );
int __sprintf_chk(char* restrict , int , unsigned long  int    , const char* restrict , ...);
int __vsprintf_chk(char* restrict , int , unsigned long  int    , const char* restrict , __darwin_va_list    );
__attribute__((noreturn))  void die() __attribute__((cold))
;
int main();
// uniq global variable
// inline function
inline int  __attribute__((__always_inline__))  __sputc(int _c, struct __sFILE*  _p  )
{
    if(--_p->_w>=0||(_p->_w>=_p->_lbfsize&&(char)_c!=10)) {
                return (*_p->_p++=_c);
    }
    else {
                return (__swbuf(_c,_p));
    }
}

// body function
__attribute__((noreturn))  void die()
{
    for(;;){
    }
}

int main()
{
    struct Packed  p  ={0};
    printf("packed=%zu aligned=%d\n",sizeof(p),g1);
        return 0;
}

