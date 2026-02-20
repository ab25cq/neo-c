/// c_include definition ///
/// typedef definition ///
typedef unsigned long size_t;

typedef int wchar_t;

typedef unsigned long  long    ;

typedef __builtin_va_list __gnuc_va_list;

typedef unsigned char __u_char;

typedef unsigned short int __u_short;

typedef unsigned int __u_int;

typedef unsigned long  int __u_long;

typedef char __int8_t;

typedef unsigned char __uint8_t;

typedef short int __int16_t;

typedef unsigned short int __uint16_t;

typedef int __int32_t;

typedef unsigned int __uint32_t;

typedef long  int __int64_t;

typedef unsigned long  int __uint64_t;

typedef char  __int_least8_t  ;

typedef unsigned char  __uint_least8_t  ;

typedef short int  __int_least16_t  ;

typedef unsigned short int  __uint_least16_t  ;

typedef int  __int_least32_t  ;

typedef unsigned int  __uint_least32_t  ;

typedef long  int  __int_least64_t  ;

typedef unsigned long  int  __uint_least64_t  ;

typedef long  int __quad_t;

typedef unsigned long  int __u_quad_t;

typedef long  int __intmax_t;

typedef unsigned long  int __uintmax_t;

typedef unsigned long  int __dev_t;

typedef unsigned int __uid_t;

typedef unsigned int __gid_t;

typedef unsigned long  int __ino_t;

typedef unsigned long  int __ino64_t;

typedef unsigned int __mode_t;

typedef unsigned long  int __nlink_t;

typedef long  int __off_t;

typedef long  int __off64_t;

typedef int __pid_t;

typedef struct __fsid_t  __fsid_t  ;

typedef long  int __clock_t;

typedef unsigned long  int __rlim_t;

typedef unsigned long  int __rlim64_t;

typedef unsigned int __id_t;

typedef long  int __time_t;

typedef unsigned int __useconds_t;

typedef long  int __suseconds_t;

typedef long  int __suseconds64_t;

typedef int __daddr_t;

typedef int __key_t;

typedef int __clockid_t;

typedef void* __timer_t;

typedef long  int __blksize_t;

typedef long  int __blkcnt_t;

typedef long  int __blkcnt64_t;

typedef unsigned long  int __fsblkcnt_t;

typedef unsigned long  int __fsblkcnt64_t;

typedef unsigned long  int __fsfilcnt_t;

typedef unsigned long  int __fsfilcnt64_t;

typedef long  int __fsword_t;

typedef long  int __ssize_t;

typedef long  int __syscall_slong_t;

typedef unsigned long  int __syscall_ulong_t;

typedef long  int  __loff_t  ;

typedef char* __caddr_t;

typedef long  int __intptr_t;

typedef unsigned int __socklen_t;

typedef int __sig_atomic_t;

typedef struct anonymous_typeX1 __mbstate_t;

typedef struct _G_fpos_t  __fpos_t  ;

typedef struct _G_fpos64_t  __fpos64_t  ;

typedef struct _IO_FILE  __FILE  ;

typedef struct _IO_FILE  FILE  ;

typedef void _IO_lock_t;

typedef long  int (*cookie_read_function_t)(void*,char*,unsigned long );

typedef long  int (*cookie_write_function_t)(void*,const char*,unsigned long );

typedef int (*cookie_seek_function_t)(void*,long  int* ,int);

typedef int (*cookie_close_function_t)(void*);

typedef struct _IO_cookie_io_functions_t  cookie_io_functions_t  ;

typedef __builtin_va_list  va_list  ;

typedef long  int  off_t  ;

typedef long  int  off64_t  ;

typedef long  int  ssize_t  ;

typedef struct _G_fpos_t  fpos_t  ;

typedef struct _G_fpos64_t  fpos64_t  ;

/// previous struct definition ///
struct _IO_FILE;

struct _IO_marker;

struct _IO_codecvt;

struct _IO_wide_data;

struct obstack;

/// struct definition ///
struct __fsid_t
{
    int __val[2];
};

union anonymous_typeZ2
{
unsigned int __wch;
char __wchb[4];
};

union anonymous_typeZ3
{
unsigned int __wch;
char __wchb[4];
};

struct anonymous_typeX1
{
    int __count;
    union {
        unsigned int __wch;
        char __wchb[4];
    } __value;
};

struct _G_fpos_t
{
    long  int  __pos  ;
    struct {
        int __count;
        union {
            unsigned int __wch;
            char __wchb[4];
        } __value;
    } __state;
};

struct _G_fpos64_t
{
    long  int  __pos  ;
    struct {
        int __count;
        union {
            unsigned int __wch;
            char __wchb[4];
        } __value;
    } __state;
};

struct _IO_FILE
{
    int _flags;
    char* _IO_read_ptr;
    char* _IO_read_end;
    char* _IO_read_base;
    char* _IO_write_base;
    char* _IO_write_ptr;
    char* _IO_write_end;
    char* _IO_buf_base;
    char* _IO_buf_end;
    char* _IO_save_base;
    char* _IO_backup_base;
    char* _IO_save_end;
    struct _IO_marker*  _markers  ;
    struct _IO_FILE*  _chain  ;
    int _fileno;
    int _flags2:24;
    char _short_backupbuf[1];
    long  int  _old_offset  ;
    unsigned short int _cur_column;
    char _vtable_offset;
    char _shortbuf[1];
    void*  _lock  ;
    long  int  _offset  ;
    struct _IO_codecvt*  _codecvt  ;
    struct _IO_wide_data*  _wide_data  ;
    struct _IO_FILE*  _freeres_list  ;
    void* _freeres_buf;
    struct _IO_FILE**  _prevchain  ;
    int _mode;
    int _unused3;
    unsigned long  int  _total_written  ;
    char _unused2[12*sizeof(int)-5*sizeof(void*)];
};

struct _IO_cookie_io_functions_t
{
    long  int (*(*read))(void*,char*,unsigned long )  ;
    long  int (*(*write))(void*,const char*,unsigned long )  ;
    int (*(*seek))(void*,long  int* ,int)  ;
    int (*(*close))(void*)  ;
};

/// variable definition ///
extern struct _IO_FILE*  stdin  ;
extern struct _IO_FILE*  stdout  ;
extern struct _IO_FILE*  stderr  ;
// source head

// header function
int remove(const char* __filename);
int rename(const char* __old, const char* __new);
int renameat(int __oldfd, const char* __old, int __newfd, const char* __new);
int renameat2(int __oldfd, const char* __old, int __newfd, const char* __new, unsigned int __flags);
int fclose(struct _IO_FILE*  __stream  );
struct _IO_FILE*  tmpfile() __attribute__ ((__malloc__))  ;
struct _IO_FILE*  tmpfile64() __attribute__ ((__malloc__))  ;
char* tmpnam(char [20]);
char* tmpnam_r(char __s[20]);
char* tempnam(const char* __dir, const char* __pfx) __attribute__ ((__malloc__))  ;
int fflush(struct _IO_FILE*  __stream  );
int fflush_unlocked(struct _IO_FILE*  __stream  );
int fcloseall();
struct _IO_FILE*  fopen(const char* __restrict __filename, const char* __restrict __modes) __attribute__ ((__malloc__))  ;
struct _IO_FILE*  freopen(const char* __restrict __filename, const char* __restrict __modes, struct _IO_FILE* __restrict  __stream  );
struct _IO_FILE*  fopen64(const char* __restrict __filename, const char* __restrict __modes) __attribute__ ((__malloc__))  ;
struct _IO_FILE*  freopen64(const char* __restrict __filename, const char* __restrict __modes, struct _IO_FILE* __restrict  __stream  );
struct _IO_FILE*  fdopen(int __fd, const char* __modes) __attribute__ ((__malloc__))  ;
struct _IO_FILE*  fopencookie(void* __restrict __magic_cookie, const char* __restrict __modes, struct _IO_cookie_io_functions_t  __io_funcs  ) __attribute__ ((__malloc__))  ;
struct _IO_FILE*  fmemopen(void* __s, unsigned long  __len  , const char* __modes) __attribute__ ((__malloc__))  ;
struct _IO_FILE*  open_memstream(char** __bufloc, unsigned long*  __sizeloc  ) __attribute__ ((__malloc__))  ;
void setbuf(struct _IO_FILE* __restrict  __stream  , char* __restrict __buf);
int setvbuf(struct _IO_FILE* __restrict  __stream  , char* __restrict __buf, int __modes, unsigned long  __n  );
void setbuffer(struct _IO_FILE* __restrict  __stream  , char* __restrict __buf, unsigned long  __size  );
void setlinebuf(struct _IO_FILE*  __stream  );
int fprintf(struct _IO_FILE* __restrict  __stream  , const char* __restrict __format, ...);
int printf(const char* __restrict __format, ...);
int sprintf(char* __restrict __s, const char* __restrict __format, ...);
int vfprintf(struct _IO_FILE* __restrict  __s  , const char* __restrict __format, __builtin_va_list  __arg  );
int vprintf(const char* __restrict __format, __builtin_va_list  __arg  );
int vsprintf(char* __restrict __s, const char* __restrict __format, __builtin_va_list  __arg  );
int snprintf(char* __restrict __s, unsigned long  __maxlen  , const char* __restrict __format, ...) __attribute__ ((__format__ (__printf__, 3, 4)));
int vsnprintf(char* __restrict __s, unsigned long  __maxlen  , const char* __restrict __format, __builtin_va_list  __arg  ) __attribute__ ((__format__ (__printf__, 3, 0)));
int vasprintf(char** __restrict __ptr, const char* __restrict __f, __builtin_va_list  __arg  ) __attribute__ ((__format__ (__printf__, 2, 0))) ;
int __asprintf(char** __restrict __ptr, const char* __restrict __fmt, ...) __attribute__ ((__format__ (__printf__, 2, 3))) ;
int asprintf(char** __restrict __ptr, const char* __restrict __fmt, ...) __attribute__ ((__format__ (__printf__, 2, 3))) ;
int vdprintf(int __fd, const char* __restrict __fmt, __builtin_va_list  __arg  ) __attribute__ ((__format__ (__printf__, 2, 0)));
int dprintf(int __fd, const char* __restrict __fmt, ...) __attribute__ ((__format__ (__printf__, 2, 3)));
int fscanf(struct _IO_FILE* __restrict  __stream  , const char* __restrict __format, ...);
int scanf(const char* __restrict __format, ...);
int sscanf(const char* __restrict __s, const char* __restrict __format, ...);
int __isoc23_fscanf(struct _IO_FILE* __restrict  __stream  , const char* __restrict __format, ...);
int __isoc23_scanf(const char* __restrict __format, ...);
int __isoc23_sscanf(const char* __restrict __s, const char* __restrict __format, ...);
int vfscanf(struct _IO_FILE* __restrict  __s  , const char* __restrict __format, __builtin_va_list  __arg  ) __attribute__ ((__format__ (__scanf__, 2, 0)))  ;
int vscanf(const char* __restrict __format, __builtin_va_list  __arg  ) __attribute__ ((__format__ (__scanf__, 1, 0))) ;
int vsscanf(const char* __restrict __s, const char* __restrict __format, __builtin_va_list  __arg  ) __attribute__ ((__format__ (__scanf__, 2, 0)));
int __isoc23_vfscanf(struct _IO_FILE* __restrict  __s  , const char* __restrict __format, __builtin_va_list  __arg  );
int __isoc23_vscanf(const char* __restrict __format, __builtin_va_list  __arg  );
int __isoc23_vsscanf(const char* __restrict __s, const char* __restrict __format, __builtin_va_list  __arg  );
int fgetc(struct _IO_FILE*  __stream  );
int getc(struct _IO_FILE*  __stream  );
int getchar();
int getc_unlocked(struct _IO_FILE*  __stream  );
int getchar_unlocked();
int fgetc_unlocked(struct _IO_FILE*  __stream  );
int fputc(int __c, struct _IO_FILE*  __stream  );
int putc(int __c, struct _IO_FILE*  __stream  );
int putchar(int __c);
int fputc_unlocked(int __c, struct _IO_FILE*  __stream  );
int putc_unlocked(int __c, struct _IO_FILE*  __stream  );
int putchar_unlocked(int __c);
int getw(struct _IO_FILE*  __stream  );
int putw(int __w, struct _IO_FILE*  __stream  );
char* fgets(char* __restrict __s, int __n, struct _IO_FILE* __restrict  __stream  );
char* fgets_unlocked(char* __restrict __s, int __n, struct _IO_FILE* __restrict  __stream  );
long  int  __getdelim(char** __restrict __lineptr, unsigned long* __restrict  __n  , int __delimiter, struct _IO_FILE* __restrict  __stream  );
long  int  getdelim(char** __restrict __lineptr, unsigned long* __restrict  __n  , int __delimiter, struct _IO_FILE* __restrict  __stream  );
long  int  getline(char** __restrict __lineptr, unsigned long* __restrict  __n  , struct _IO_FILE* __restrict  __stream  );
int fputs(const char* __restrict __s, struct _IO_FILE* __restrict  __stream  );
int puts(const char* __s);
int ungetc(int __c, struct _IO_FILE*  __stream  );
unsigned long  fread(void* __restrict __ptr, unsigned long  __size  , unsigned long  __n  , struct _IO_FILE* __restrict  __stream  );
unsigned long  fwrite(const void* __restrict __ptr, unsigned long  __size  , unsigned long  __n  , struct _IO_FILE* __restrict  __s  );
int fputs_unlocked(const char* __restrict __s, struct _IO_FILE* __restrict  __stream  );
unsigned long  fread_unlocked(void* __restrict __ptr, unsigned long  __size  , unsigned long  __n  , struct _IO_FILE* __restrict  __stream  );
unsigned long  fwrite_unlocked(const void* __restrict __ptr, unsigned long  __size  , unsigned long  __n  , struct _IO_FILE* __restrict  __stream  );
int fseek(struct _IO_FILE*  __stream  , long  int __off, int __whence);
long  int ftell(struct _IO_FILE*  __stream  );
void rewind(struct _IO_FILE*  __stream  );
int fseeko(struct _IO_FILE*  __stream  , long  int  __off  , int __whence);
long  int  ftello(struct _IO_FILE*  __stream  );
int fgetpos(struct _IO_FILE* __restrict  __stream  , struct _G_fpos_t* __restrict  __pos  );
int fsetpos(struct _IO_FILE*  __stream  , const struct _G_fpos_t*  __pos  );
int fseeko64(struct _IO_FILE*  __stream  , long  int  __off  , int __whence);
long  int  ftello64(struct _IO_FILE*  __stream  );
int fgetpos64(struct _IO_FILE* __restrict  __stream  , struct _G_fpos64_t* __restrict  __pos  );
int fsetpos64(struct _IO_FILE*  __stream  , const struct _G_fpos64_t*  __pos  );
void clearerr(struct _IO_FILE*  __stream  );
int feof(struct _IO_FILE*  __stream  );
int ferror(struct _IO_FILE*  __stream  );
void clearerr_unlocked(struct _IO_FILE*  __stream  );
int feof_unlocked(struct _IO_FILE*  __stream  );
int ferror_unlocked(struct _IO_FILE*  __stream  );
void perror(const char* __s);
int fileno(struct _IO_FILE*  __stream  );
int fileno_unlocked(struct _IO_FILE*  __stream  );
int pclose(struct _IO_FILE*  __stream  );
struct _IO_FILE*  popen(const char* __command, const char* __modes) __attribute__ ((__malloc__))  ;
char* ctermid(char* __s);
char* cuserid(char* __s);
int obstack_printf(struct obstack* __restrict  __obstack  , const char* __restrict __format, ...) __attribute__ ((__format__ (__printf__, 2, 3)));
int obstack_vprintf(struct obstack* __restrict  __obstack  , const char* __restrict __format, __builtin_va_list  __args  ) __attribute__ ((__format__ (__printf__, 2, 0)));
void flockfile(struct _IO_FILE*  __stream  );
int ftrylockfile(struct _IO_FILE*  __stream  );
void funlockfile(struct _IO_FILE*  __stream  );
int __uflow(struct _IO_FILE*    );
int __overflow(struct _IO_FILE*    , int );
_Complex double cacos(_Complex double __z);
_Complex double __cacos(_Complex double __z);
_Complex double casin(_Complex double __z);
_Complex double __casin(_Complex double __z);
_Complex double catan(_Complex double __z);
_Complex double __catan(_Complex double __z);
_Complex double ccos(_Complex double __z);
_Complex double __ccos(_Complex double __z);
_Complex double csin(_Complex double __z);
_Complex double __csin(_Complex double __z);
_Complex double ctan(_Complex double __z);
_Complex double __ctan(_Complex double __z);
_Complex double cacosh(_Complex double __z);
_Complex double __cacosh(_Complex double __z);
_Complex double casinh(_Complex double __z);
_Complex double __casinh(_Complex double __z);
_Complex double catanh(_Complex double __z);
_Complex double __catanh(_Complex double __z);
_Complex double ccosh(_Complex double __z);
_Complex double __ccosh(_Complex double __z);
_Complex double csinh(_Complex double __z);
_Complex double __csinh(_Complex double __z);
_Complex double ctanh(_Complex double __z);
_Complex double __ctanh(_Complex double __z);
_Complex double cexp(_Complex double __z);
_Complex double __cexp(_Complex double __z);
_Complex double clog(_Complex double __z);
_Complex double __clog(_Complex double __z);
_Complex double clog10(_Complex double __z);
_Complex double __clog10(_Complex double __z);
_Complex double cpow(_Complex double __x, _Complex double __y);
_Complex double __cpow(_Complex double __x, _Complex double __y);
_Complex double csqrt(_Complex double __z);
_Complex double __csqrt(_Complex double __z);
double cabs(_Complex double __z);
double __cabs(_Complex double __z);
double carg(_Complex double __z);
double __carg(_Complex double __z);
_Complex double conj(_Complex double __z);
_Complex double __conj(_Complex double __z);
_Complex double cproj(_Complex double __z);
_Complex double __cproj(_Complex double __z);
double cimag(_Complex double __z);
double __cimag(_Complex double __z);
double creal(_Complex double __z);
double __creal(_Complex double __z);
_Complex float cacosf(_Complex float __z);
_Complex float __cacosf(_Complex float __z);
_Complex float casinf(_Complex float __z);
_Complex float __casinf(_Complex float __z);
_Complex float catanf(_Complex float __z);
_Complex float __catanf(_Complex float __z);
_Complex float ccosf(_Complex float __z);
_Complex float __ccosf(_Complex float __z);
_Complex float csinf(_Complex float __z);
_Complex float __csinf(_Complex float __z);
_Complex float ctanf(_Complex float __z);
_Complex float __ctanf(_Complex float __z);
_Complex float cacoshf(_Complex float __z);
_Complex float __cacoshf(_Complex float __z);
_Complex float casinhf(_Complex float __z);
_Complex float __casinhf(_Complex float __z);
_Complex float catanhf(_Complex float __z);
_Complex float __catanhf(_Complex float __z);
_Complex float ccoshf(_Complex float __z);
_Complex float __ccoshf(_Complex float __z);
_Complex float csinhf(_Complex float __z);
_Complex float __csinhf(_Complex float __z);
_Complex float ctanhf(_Complex float __z);
_Complex float __ctanhf(_Complex float __z);
_Complex float cexpf(_Complex float __z);
_Complex float __cexpf(_Complex float __z);
_Complex float clogf(_Complex float __z);
_Complex float __clogf(_Complex float __z);
_Complex float clog10f(_Complex float __z);
_Complex float __clog10f(_Complex float __z);
_Complex float cpowf(_Complex float __x, _Complex float __y);
_Complex float __cpowf(_Complex float __x, _Complex float __y);
_Complex float csqrtf(_Complex float __z);
_Complex float __csqrtf(_Complex float __z);
float cabsf(_Complex float __z);
float __cabsf(_Complex float __z);
float cargf(_Complex float __z);
float __cargf(_Complex float __z);
_Complex float conjf(_Complex float __z);
_Complex float __conjf(_Complex float __z);
_Complex float cprojf(_Complex float __z);
_Complex float __cprojf(_Complex float __z);
float cimagf(_Complex float __z);
float __cimagf(_Complex float __z);
float crealf(_Complex float __z);
float __crealf(_Complex float __z);
_Complex long  double cacosl(_Complex long  double __z);
_Complex long  double __cacosl(_Complex long  double __z);
_Complex long  double casinl(_Complex long  double __z);
_Complex long  double __casinl(_Complex long  double __z);
_Complex long  double catanl(_Complex long  double __z);
_Complex long  double __catanl(_Complex long  double __z);
_Complex long  double ccosl(_Complex long  double __z);
_Complex long  double __ccosl(_Complex long  double __z);
_Complex long  double csinl(_Complex long  double __z);
_Complex long  double __csinl(_Complex long  double __z);
_Complex long  double ctanl(_Complex long  double __z);
_Complex long  double __ctanl(_Complex long  double __z);
_Complex long  double cacoshl(_Complex long  double __z);
_Complex long  double __cacoshl(_Complex long  double __z);
_Complex long  double casinhl(_Complex long  double __z);
_Complex long  double __casinhl(_Complex long  double __z);
_Complex long  double catanhl(_Complex long  double __z);
_Complex long  double __catanhl(_Complex long  double __z);
_Complex long  double ccoshl(_Complex long  double __z);
_Complex long  double __ccoshl(_Complex long  double __z);
_Complex long  double csinhl(_Complex long  double __z);
_Complex long  double __csinhl(_Complex long  double __z);
_Complex long  double ctanhl(_Complex long  double __z);
_Complex long  double __ctanhl(_Complex long  double __z);
_Complex long  double cexpl(_Complex long  double __z);
_Complex long  double __cexpl(_Complex long  double __z);
_Complex long  double clogl(_Complex long  double __z);
_Complex long  double __clogl(_Complex long  double __z);
_Complex long  double clog10l(_Complex long  double __z);
_Complex long  double __clog10l(_Complex long  double __z);
_Complex long  double cpowl(_Complex long  double __x, _Complex long  double __y);
_Complex long  double __cpowl(_Complex long  double __x, _Complex long  double __y);
_Complex long  double csqrtl(_Complex long  double __z);
_Complex long  double __csqrtl(_Complex long  double __z);
long  double cabsl(_Complex long  double __z);
long  double __cabsl(_Complex long  double __z);
long  double cargl(_Complex long  double __z);
long  double __cargl(_Complex long  double __z);
_Complex long  double conjl(_Complex long  double __z);
_Complex long  double __conjl(_Complex long  double __z);
_Complex long  double cprojl(_Complex long  double __z);
_Complex long  double __cprojl(_Complex long  double __z);
long  double cimagl(_Complex long  double __z);
long  double __cimagl(_Complex long  double __z);
long  double creall(_Complex long  double __z);
long  double __creall(_Complex long  double __z);
_Complex float cacosf32(_Complex float __z);
_Complex float __cacosf32(_Complex float __z);
_Complex float casinf32(_Complex float __z);
_Complex float __casinf32(_Complex float __z);
_Complex float catanf32(_Complex float __z);
_Complex float __catanf32(_Complex float __z);
_Complex float ccosf32(_Complex float __z);
_Complex float __ccosf32(_Complex float __z);
_Complex float csinf32(_Complex float __z);
_Complex float __csinf32(_Complex float __z);
_Complex float ctanf32(_Complex float __z);
_Complex float __ctanf32(_Complex float __z);
_Complex float cacoshf32(_Complex float __z);
_Complex float __cacoshf32(_Complex float __z);
_Complex float casinhf32(_Complex float __z);
_Complex float __casinhf32(_Complex float __z);
_Complex float catanhf32(_Complex float __z);
_Complex float __catanhf32(_Complex float __z);
_Complex float ccoshf32(_Complex float __z);
_Complex float __ccoshf32(_Complex float __z);
_Complex float csinhf32(_Complex float __z);
_Complex float __csinhf32(_Complex float __z);
_Complex float ctanhf32(_Complex float __z);
_Complex float __ctanhf32(_Complex float __z);
_Complex float cexpf32(_Complex float __z);
_Complex float __cexpf32(_Complex float __z);
_Complex float clogf32(_Complex float __z);
_Complex float __clogf32(_Complex float __z);
_Complex float clog10f32(_Complex float __z);
_Complex float __clog10f32(_Complex float __z);
_Complex float cpowf32(_Complex float __x, _Complex float __y);
_Complex float __cpowf32(_Complex float __x, _Complex float __y);
_Complex float csqrtf32(_Complex float __z);
_Complex float __csqrtf32(_Complex float __z);
float  cabsf32(_Complex float __z);
float  __cabsf32(_Complex float __z);
float  cargf32(_Complex float __z);
float  __cargf32(_Complex float __z);
_Complex float conjf32(_Complex float __z);
_Complex float __conjf32(_Complex float __z);
_Complex float cprojf32(_Complex float __z);
_Complex float __cprojf32(_Complex float __z);
float  cimagf32(_Complex float __z);
float  __cimagf32(_Complex float __z);
float  crealf32(_Complex float __z);
float  __crealf32(_Complex float __z);
_Complex double cacosf64(_Complex double __z);
_Complex double __cacosf64(_Complex double __z);
_Complex double casinf64(_Complex double __z);
_Complex double __casinf64(_Complex double __z);
_Complex double catanf64(_Complex double __z);
_Complex double __catanf64(_Complex double __z);
_Complex double ccosf64(_Complex double __z);
_Complex double __ccosf64(_Complex double __z);
_Complex double csinf64(_Complex double __z);
_Complex double __csinf64(_Complex double __z);
_Complex double ctanf64(_Complex double __z);
_Complex double __ctanf64(_Complex double __z);
_Complex double cacoshf64(_Complex double __z);
_Complex double __cacoshf64(_Complex double __z);
_Complex double casinhf64(_Complex double __z);
_Complex double __casinhf64(_Complex double __z);
_Complex double catanhf64(_Complex double __z);
_Complex double __catanhf64(_Complex double __z);
_Complex double ccoshf64(_Complex double __z);
_Complex double __ccoshf64(_Complex double __z);
_Complex double csinhf64(_Complex double __z);
_Complex double __csinhf64(_Complex double __z);
_Complex double ctanhf64(_Complex double __z);
_Complex double __ctanhf64(_Complex double __z);
_Complex double cexpf64(_Complex double __z);
_Complex double __cexpf64(_Complex double __z);
_Complex double clogf64(_Complex double __z);
_Complex double __clogf64(_Complex double __z);
_Complex double clog10f64(_Complex double __z);
_Complex double __clog10f64(_Complex double __z);
_Complex double cpowf64(_Complex double __x, _Complex double __y);
_Complex double __cpowf64(_Complex double __x, _Complex double __y);
_Complex double csqrtf64(_Complex double __z);
_Complex double __csqrtf64(_Complex double __z);
double  cabsf64(_Complex double __z);
double  __cabsf64(_Complex double __z);
double  cargf64(_Complex double __z);
double  __cargf64(_Complex double __z);
_Complex double conjf64(_Complex double __z);
_Complex double __conjf64(_Complex double __z);
_Complex double cprojf64(_Complex double __z);
_Complex double __cprojf64(_Complex double __z);
double  cimagf64(_Complex double __z);
double  __cimagf64(_Complex double __z);
double  crealf64(_Complex double __z);
double  __crealf64(_Complex double __z);
_Complex double cacosf32x(_Complex double __z);
_Complex double __cacosf32x(_Complex double __z);
_Complex double casinf32x(_Complex double __z);
_Complex double __casinf32x(_Complex double __z);
_Complex double catanf32x(_Complex double __z);
_Complex double __catanf32x(_Complex double __z);
_Complex double ccosf32x(_Complex double __z);
_Complex double __ccosf32x(_Complex double __z);
_Complex double csinf32x(_Complex double __z);
_Complex double __csinf32x(_Complex double __z);
_Complex double ctanf32x(_Complex double __z);
_Complex double __ctanf32x(_Complex double __z);
_Complex double cacoshf32x(_Complex double __z);
_Complex double __cacoshf32x(_Complex double __z);
_Complex double casinhf32x(_Complex double __z);
_Complex double __casinhf32x(_Complex double __z);
_Complex double catanhf32x(_Complex double __z);
_Complex double __catanhf32x(_Complex double __z);
_Complex double ccoshf32x(_Complex double __z);
_Complex double __ccoshf32x(_Complex double __z);
_Complex double csinhf32x(_Complex double __z);
_Complex double __csinhf32x(_Complex double __z);
_Complex double ctanhf32x(_Complex double __z);
_Complex double __ctanhf32x(_Complex double __z);
_Complex double cexpf32x(_Complex double __z);
_Complex double __cexpf32x(_Complex double __z);
_Complex double clogf32x(_Complex double __z);
_Complex double __clogf32x(_Complex double __z);
_Complex double clog10f32x(_Complex double __z);
_Complex double __clog10f32x(_Complex double __z);
_Complex double cpowf32x(_Complex double __x, _Complex double __y);
_Complex double __cpowf32x(_Complex double __x, _Complex double __y);
_Complex double csqrtf32x(_Complex double __z);
_Complex double __csqrtf32x(_Complex double __z);
double  cabsf32x(_Complex double __z);
double  __cabsf32x(_Complex double __z);
double  cargf32x(_Complex double __z);
double  __cargf32x(_Complex double __z);
_Complex double conjf32x(_Complex double __z);
_Complex double __conjf32x(_Complex double __z);
_Complex double cprojf32x(_Complex double __z);
_Complex double __cprojf32x(_Complex double __z);
double  cimagf32x(_Complex double __z);
double  __cimagf32x(_Complex double __z);
double  crealf32x(_Complex double __z);
double  __crealf32x(_Complex double __z);
_Complex long  double cacosf64x(_Complex long  double __z);
_Complex long  double __cacosf64x(_Complex long  double __z);
_Complex long  double casinf64x(_Complex long  double __z);
_Complex long  double __casinf64x(_Complex long  double __z);
_Complex long  double catanf64x(_Complex long  double __z);
_Complex long  double __catanf64x(_Complex long  double __z);
_Complex long  double ccosf64x(_Complex long  double __z);
_Complex long  double __ccosf64x(_Complex long  double __z);
_Complex long  double csinf64x(_Complex long  double __z);
_Complex long  double __csinf64x(_Complex long  double __z);
_Complex long  double ctanf64x(_Complex long  double __z);
_Complex long  double __ctanf64x(_Complex long  double __z);
_Complex long  double cacoshf64x(_Complex long  double __z);
_Complex long  double __cacoshf64x(_Complex long  double __z);
_Complex long  double casinhf64x(_Complex long  double __z);
_Complex long  double __casinhf64x(_Complex long  double __z);
_Complex long  double catanhf64x(_Complex long  double __z);
_Complex long  double __catanhf64x(_Complex long  double __z);
_Complex long  double ccoshf64x(_Complex long  double __z);
_Complex long  double __ccoshf64x(_Complex long  double __z);
_Complex long  double csinhf64x(_Complex long  double __z);
_Complex long  double __csinhf64x(_Complex long  double __z);
_Complex long  double ctanhf64x(_Complex long  double __z);
_Complex long  double __ctanhf64x(_Complex long  double __z);
_Complex long  double cexpf64x(_Complex long  double __z);
_Complex long  double __cexpf64x(_Complex long  double __z);
_Complex long  double clogf64x(_Complex long  double __z);
_Complex long  double __clogf64x(_Complex long  double __z);
_Complex long  double clog10f64x(_Complex long  double __z);
_Complex long  double __clog10f64x(_Complex long  double __z);
_Complex long  double cpowf64x(_Complex long  double __x, _Complex long  double __y);
_Complex long  double __cpowf64x(_Complex long  double __x, _Complex long  double __y);
_Complex long  double csqrtf64x(_Complex long  double __z);
_Complex long  double __csqrtf64x(_Complex long  double __z);
long  double  cabsf64x(_Complex long  double __z);
long  double  __cabsf64x(_Complex long  double __z);
long  double  cargf64x(_Complex long  double __z);
long  double  __cargf64x(_Complex long  double __z);
_Complex long  double conjf64x(_Complex long  double __z);
_Complex long  double __conjf64x(_Complex long  double __z);
_Complex long  double cprojf64x(_Complex long  double __z);
_Complex long  double __cprojf64x(_Complex long  double __z);
long  double  cimagf64x(_Complex long  double __z);
long  double  __cimagf64x(_Complex long  double __z);
long  double  crealf64x(_Complex long  double __z);
long  double  __crealf64x(_Complex long  double __z);
int main();
// uniq global variable
// inline function

// body function
int main()
{
    _Complex double z1;
    z1=1.0+2.0*(1.0iF);
    printf("%f\n",creal(z1));
        return 0;
}

