/// typedef definition ///
typedef char* string;

typedef unsigned long  int size_t;

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

typedef char __int_least8_t;

typedef unsigned char __uint_least8_t;

typedef short int __int_least16_t;

typedef unsigned short int __uint_least16_t;

typedef int __int_least32_t;

typedef unsigned int __uint_least32_t;

typedef long  int __int_least64_t;

typedef unsigned long  int __uint_least64_t;

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

typedef struct anonymous_typeX1 __fsid_t;

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

typedef long  int __loff_t;

typedef char* __caddr_t;

typedef long  int __intptr_t;

typedef unsigned int __socklen_t;

typedef int __sig_atomic_t;

typedef struct anonymous_typeX2 __mbstate_t;

typedef struct _G_fpos_t __fpos_t;

typedef struct _G_fpos64_t __fpos64_t;

typedef struct _IO_FILE __FILE;

typedef struct _IO_FILE FILE;

typedef void _IO_lock_t;

typedef long  int (*cookie_read_function_t)(void*,char*,unsigned long  int);

typedef long  int (*cookie_write_function_t)(void*,const char*,unsigned long  int);

typedef int (*cookie_seek_function_t)(void*,long  int*,int);

typedef int (*cookie_close_function_t)(void*);

typedef struct _IO_cookie_io_functions_t cookie_io_functions_t;

typedef __builtin_va_list va_list;

typedef long  int off_t;

typedef long  int off64_t;

typedef long  int ssize_t;

typedef struct _G_fpos_t fpos_t;

typedef struct _G_fpos64_t fpos64_t;

typedef _Complex float __cfloat128 __attribute__ ((__mode__ (__TC__)));

typedef __float128 _Float128;

typedef float _Float32;

typedef double _Float64;

typedef double _Float32x;

typedef long  double _Float64x;

typedef int wchar_t;

typedef struct anonymous_typeX5 div_t;

typedef struct anonymous_typeX6 ldiv_t;

typedef struct anonymous_typeX7 lldiv_t;

typedef struct __locale_struct* __locale_t;

typedef struct __locale_struct* locale_t;

typedef unsigned char u_char;

typedef unsigned short int u_short;

typedef unsigned int u_int;

typedef unsigned long  int u_long;

typedef long  int quad_t;

typedef unsigned long  int u_quad_t;

typedef struct anonymous_typeX1 fsid_t;

typedef long  int loff_t;

typedef unsigned long  int ino_t;

typedef unsigned long  int ino64_t;

typedef unsigned long  int dev_t;

typedef unsigned int gid_t;

typedef unsigned int mode_t;

typedef unsigned long  int nlink_t;

typedef unsigned int uid_t;

typedef int pid_t;

typedef unsigned int id_t;

typedef int daddr_t;

typedef char* caddr_t;

typedef int key_t;

typedef long  int clock_t;

typedef int clockid_t;

typedef long  int time_t;

typedef void* timer_t;

typedef unsigned int useconds_t;

typedef long  int suseconds_t;

typedef unsigned long  int ulong;

typedef unsigned short int ushort;

typedef unsigned int uint;

typedef char int8_t;

typedef short int int16_t;

typedef int int32_t;

typedef long  int int64_t;

typedef unsigned char u_int8_t;

typedef unsigned short int u_int16_t;

typedef unsigned int u_int32_t;

typedef unsigned long  int u_int64_t;

typedef int register_t;

typedef struct anonymous_typeX8 __sigset_t;

typedef struct anonymous_typeX8 sigset_t;

typedef long  int __fd_mask;

typedef struct anonymous_typeX9 fd_set;

typedef long  int fd_mask;

typedef long  int blksize_t;

typedef long  int blkcnt_t;

typedef unsigned long  int fsblkcnt_t;

typedef unsigned long  int fsfilcnt_t;

typedef long  int blkcnt64_t;

typedef unsigned long  int fsblkcnt64_t;

typedef unsigned long  int fsfilcnt64_t;

typedef union anonymous_typeZ10 __atomic_wide_counter;

typedef struct __pthread_internal_list __pthread_list_t;

typedef struct __pthread_internal_slist __pthread_slist_t;

typedef unsigned int __tss_t;

typedef unsigned long  int __thrd_t;

typedef struct anonymous_typeX12 __once_flag;

typedef unsigned long  int pthread_t;

typedef union anonymous_typeZ13 pthread_mutexattr_t;

typedef union anonymous_typeZ14 pthread_condattr_t;

typedef unsigned int pthread_key_t;

typedef int pthread_once_t;

typedef union pthread_attr_t pthread_attr_t;

typedef union anonymous_typeZ15 pthread_mutex_t;

typedef union anonymous_typeZ16 pthread_cond_t;

typedef union anonymous_typeZ17 pthread_rwlock_t;

typedef union anonymous_typeZ18 pthread_rwlockattr_t;

typedef int pthread_spinlock_t;

typedef union anonymous_typeZ19 pthread_barrier_t;

typedef union anonymous_typeZ20 pthread_barrierattr_t;

typedef int (*__compar_fn_t)(const void*,const void*);

typedef int (*comparison_fn_t)(const void*,const void*);

typedef int (*__compar_d_fn_t)(const void*,const void*,void*);

typedef int error_t;

typedef struct re_program* re_t;

typedef struct re_capture re_capture;

typedef struct regex_t regex_t;

typedef struct re_program regex_program_t;

typedef struct anonymous_typeX25 compiler_state;

typedef struct anonymous_typeX26 match_context;

typedef unsigned int wint_t;

typedef struct anonymous_typeX2 mbstate_t;

typedef int* wstring;

/// previous struct definition ///
#if defined(__MAC__)
typedef long double float128_t;
typedef long double _Float128;
typedef long double __float128;
#endif
struct _IO_FILE;

struct _IO_marker;

struct _IO_codecvt;

struct _IO_wide_data;

struct obstack;

struct re_program;

struct tm;

struct sType;

struct sClass;

struct sInfo;

struct sVar;

struct sRightValueObject;

struct sVarTable;

struct sBlock;

/// struct definition ///
struct anonymous_typeX1
{
    int __val[2];
};

union anonymous_typeZ3
{
unsigned int __wch;
char __wchb[4];
};

union anonymous_typeZ4
{
unsigned int __wch;
char __wchb[4];
};

struct anonymous_typeX2
{
    int __count;
    union {
        unsigned int __wch;
        char __wchb[4];
    } __value;
};

struct _G_fpos_t
{
    long  int __pos;
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
    long  int __pos;
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
    struct _IO_marker* _markers;
    struct _IO_FILE* _chain;
    int _fileno;
    int _flags2:24;
    char _short_backupbuf[1];
    long  int _old_offset;
    unsigned short int _cur_column;
    char _vtable_offset;
    char _shortbuf[1];
    void* _lock;
    long  int _offset;
    struct _IO_codecvt* _codecvt;
    struct _IO_wide_data* _wide_data;
    struct _IO_FILE* _freeres_list;
    void* _freeres_buf;
    struct _IO_FILE** _prevchain;
    int _mode;
    int _unused3;
    unsigned long  int _total_written;
    char _unused2[12*sizeof(int)-5*sizeof(void*)];
};

struct _IO_cookie_io_functions_t
{
    long  int (*(*read))(void*,char*,unsigned long  int);
    long  int (*(*write))(void*,const char*,unsigned long  int);
    int (*(*seek))(void*,long  int*,int);
    int (*(*close))(void*);
};

extern struct _IO_FILE* stdin;
extern struct _IO_FILE* stdout;
extern struct _IO_FILE* stderr;
struct anonymous_typeX5
{
    int quot;
    int rem;
};

struct anonymous_typeX6
{
    long  int quot;
    long  int rem;
};

struct anonymous_typeX7
{
    long long int quot;
    long long int rem;
};

struct __locale_struct
{
    struct __locale_data* __locales[13];
    const unsigned short int* __ctype_b;
    const int* __ctype_tolower;
    const int* __ctype_toupper;
    const char* __names[13];
};

struct anonymous_typeX8
{
    unsigned long  int __val[(1024/(8*sizeof(unsigned long  int)))];
};

struct timeval
{
    long  int tv_sec;
    long  int tv_usec;
};

struct timespec
{
    long  int tv_sec;
    long  int tv_nsec;
};

struct anonymous_typeX9
{
    long  int fds_bits[1024/(8*(int)sizeof(long  int))];
};

struct anonymous_typeX11
{
    unsigned int __low;
    unsigned int __high;
};

union anonymous_typeZ10
{
unsigned long long int __value64;
    struct {
        unsigned int __low;
        unsigned int __high;
    } __value32;
};

struct __pthread_internal_list
{
    struct __pthread_internal_list* __prev;
    struct __pthread_internal_list* __next;
};

struct __pthread_internal_slist
{
    struct __pthread_internal_slist* __next;
};

struct __pthread_mutex_s
{
    int __lock;
    unsigned int __count;
    int __owner;
    unsigned int __nusers;
    int __kind;
    short __spins;
    short __elision;
    struct __pthread_internal_list __list;
};

struct __pthread_rwlock_arch_t
{
    unsigned int __readers;
    unsigned int __writers;
    unsigned int __wrphase_futex;
    unsigned int __writers_futex;
    unsigned int __pad3;
    unsigned int __pad4;
    int __cur_writer;
    int __shared;
    char __rwelision;
    unsigned char __pad1[7];
    unsigned long  int __pad2;
    unsigned int __flags;
};

struct __pthread_cond_s
{
    union {
        unsigned long long int __value64;
        struct {
            unsigned int __low;
            unsigned int __high;
        } __value32;
    } __wseq;
    union {
        unsigned long long int __value64;
        struct {
            unsigned int __low;
            unsigned int __high;
        } __value32;
    } __g1_start;
    unsigned int __g_size[2];
    unsigned int __g1_orig_size;
    unsigned int __wrefs;
    unsigned int __g_signals[2];
    unsigned int __unused_initialized_1;
    unsigned int __unused_initialized_2;
};

struct anonymous_typeX12
{
    int __data;
};

union anonymous_typeZ13
{
char __size[4];
int __align;
};

union anonymous_typeZ14
{
char __size[4];
int __align;
};

union pthread_attr_t
{
char __size[56];
long  int __align;
};

union anonymous_typeZ15
{
struct __pthread_mutex_s __data;
char __size[40];
long  int __align;
};

union anonymous_typeZ16
{
struct __pthread_cond_s __data;
char __size[48];
long long int __align;
};

union anonymous_typeZ17
{
struct __pthread_rwlock_arch_t __data;
char __size[56];
long  int __align;
};

union anonymous_typeZ18
{
char __size[8];
long  int __align;
};

union anonymous_typeZ19
{
char __size[32];
long  int __align;
};

union anonymous_typeZ20
{
char __size[4];
int __align;
};

struct random_data
{
    int* fptr;
    int* rptr;
    int* state;
    int rand_type;
    int rand_deg;
    int rand_sep;
    int* end_ptr;
};

struct drand48_data
{
    unsigned short int __x[3];
    unsigned short int __old_x[3];
    unsigned short int __c;
    unsigned short int __init;
    unsigned long long int __a;
};

struct lconv
{
    char* decimal_point;
    char* thousands_sep;
    char* grouping;
    char* int_curr_symbol;
    char* currency_symbol;
    char* mon_decimal_point;
    char* mon_thousands_sep;
    char* mon_grouping;
    char* positive_sign;
    char* negative_sign;
    char int_frac_digits;
    char frac_digits;
    char p_cs_precedes;
    char p_sep_by_space;
    char n_cs_precedes;
    char n_sep_by_space;
    char p_sign_posn;
    char n_sign_posn;
    char int_p_cs_precedes;
    char int_p_sep_by_space;
    char int_n_cs_precedes;
    char int_n_sep_by_space;
    char int_p_sign_posn;
    char int_n_sign_posn;
};

extern char* program_invocation_name;
extern char* program_invocation_short_name;
enum { _ISupper=(((((0)<8)?(((1<<(0))<<8)):(((1<<(0))>>8))))),
_ISlower=(((((1)<8)?(((1<<(1))<<8)):(((1<<(1))>>8))))),
_ISalpha=(((((2)<8)?(((1<<(2))<<8)):(((1<<(2))>>8))))),
_ISdigit=(((((3)<8)?(((1<<(3))<<8)):(((1<<(3))>>8))))),
_ISxdigit=(((((4)<8)?(((1<<(4))<<8)):(((1<<(4))>>8))))),
_ISspace=(((((5)<8)?(((1<<(5))<<8)):(((1<<(5))>>8))))),
_ISprint=(((((6)<8)?(((1<<(6))<<8)):(((1<<(6))>>8))))),
_ISgraph=(((((7)<8)?(((1<<(7))<<8)):(((1<<(7))>>8))))),
_ISblank=(((((8)<8)?(((1<<(8))<<8)):(((1<<(8))>>8))))),
_IScntrl=(((((9)<8)?(((1<<(9))<<8)):(((1<<(9))>>8))))),
_ISpunct=(((((10)<8)?(((1<<(10))<<8)):(((1<<(10))>>8))))),
_ISalnum=(((((11)<8)?(((1<<(11))<<8)):(((1<<(11))>>8)))))
};

struct buffer
{
    char* buf;
    int len;
    int size;
};

extern char* gComeStackFrameSName[128];

extern int gComeStackFrameSLine[128];

extern int gComeStackFrameID[128];

extern int gNumComeStackFrame;

extern char* gComeStackFrameBuffer;

struct sMemHeaderTiny
{
    long size;
    int allocated;
    struct sMemHeaderTiny* next;
    struct sMemHeaderTiny* prev;
    struct sMemHeaderTiny* free_next;
    char* class_name;
    char* sname;
    int sline;
};

struct sMemHeader
{
    long size;
    int allocated;
    struct sMemHeader* next;
    struct sMemHeader* prev;
    struct sMemHeader* free_next;
    char* sname[16];
    int sline[16];
    int id[16];
    char* class_name;
};

extern struct sMemHeader* gAllocMem;

extern int gComeDebugLib;

extern int gNumAlloc;

extern int gNumFree;

struct sHeapPage
{
    char** mPages;
    int mSizePages;
    char* mTop;
    int mCurrentPages;
    struct sMemHeaderTiny* mFreeMem[4096];
};

extern struct sHeapPage gHeapPages;

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
    char* item;
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

struct re_capture
{
    int start;
    int length;
};

enum { RE_UNUSED 
,RE_DOT 
,RE_BEGIN 
,RE_END 
,RE_QUESTIONMARK 
,RE_STAR 
,RE_PLUS 
,RE_CHAR 
,RE_CHAR_CLASS 
,RE_INV_CHAR_CLASS 
,RE_DIGIT 
,RE_NOT_DIGIT 
,RE_ALPHA 
,RE_NOT_ALPHA 
,RE_WHITESPACE 
,RE_NOT_WHITESPACE 
,RE_GROUP 
,RE_GROUP_END 
};

struct anonymous_typeX22
{
    struct regex_t* first;
    struct regex_t* last;
    int id;
};

union anonymous_typeZ21
{
unsigned char ch;
unsigned char* ccl;
    struct {
        struct regex_t* first;
        struct regex_t* last;
        int id;
    } group;
};

struct anonymous_typeX24
{
    struct regex_t* first;
    struct regex_t* last;
    int id;
};

union anonymous_typeZ23
{
unsigned char ch;
unsigned char* ccl;
    struct {
        struct regex_t* first;
        struct regex_t* last;
        int id;
    } group;
};

struct regex_t
{
    unsigned char type;
    union {
        unsigned char ch;
        unsigned char* ccl;
        struct {
            struct regex_t* first;
            struct regex_t* last;
            int id;
        } group;
    } u;
    struct regex_t* next;
};

struct re_program
{
    struct regex_t* start;
    int group_count;
};

struct anonymous_typeX25
{
    struct regex_t* pool;
    int pool_capacity;
    int pool_size;
    unsigned char* ccl_buf;
    int ccl_capacity;
    int ccl_idx;
    int group_count;
};

struct anonymous_typeX26
{
    const char* base;
    struct re_capture* captures;
    int capture_capacity;
    int total_groups;
};

extern _Bool gComeDebug;
extern _Bool gComeC;
extern _Bool gComePthread;
extern _Bool gComeNet;
extern _Bool gComeMalloc;
extern _Bool gCommonHeader;
extern int gComeDebugStackFrameID;
extern _Bool gComeBareMetal;
struct sNode
{
    void* _protocol_obj;
    void (*finalize)(void*);
    void* (*clone)(void*);
    _Bool (*compile)(void*,struct sInfo*);
    int (*sline)(void*);
    int (*sline_real)(void*);
    char* (*sname)(void*);
    _Bool (*terminated)(void*);
    char* (*kind)(void*);
    _Bool (*no_mutex)(void*);
};

struct tuple2$2char$phsType$ph
{
    char* v1;
    struct sType* v2;
};

struct list_item$1tuple2$2char$phsType$ph$ph
{
    struct tuple2$2char$phsType$ph* item;
    struct list_item$1tuple2$2char$phsType$ph$ph* prev;
    struct list_item$1tuple2$2char$phsType$ph$ph* next;
};

struct list$1tuple2$2char$phsType$ph$ph
{
    struct list_item$1tuple2$2char$phsType$ph$ph* head;
    struct list_item$1tuple2$2char$phsType$ph$ph* tail;
    int len;
    struct list_item$1tuple2$2char$phsType$ph$ph* it;
};

struct sClass
{
    _Bool mStruct;
    _Bool mFloat;
    _Bool mUnion;
    _Bool mGenerics;
    _Bool mMethodGenerics;
    _Bool mEnum;
    _Bool mProtocol;
    _Bool mNumber;
    _Bool mUniq;
    _Bool mTypeName;
    char* mName;
    int mGenericsNum;
    int mMethodGenericsNum;
    struct list$1tuple2$2char$phsType$ph$ph* mFields;
    char* mParentClassName;
    char* mAttribute;
};

struct list_item$1sType$ph
{
    struct sType* item;
    struct list_item$1sType$ph* prev;
    struct list_item$1sType$ph* next;
};

struct list$1sType$ph
{
    struct list_item$1sType$ph* head;
    struct list_item$1sType$ph* tail;
    int len;
    struct list_item$1sType$ph* it;
};

struct list_item$1sNode$ph
{
    struct sNode* item;
    struct list_item$1sNode$ph* prev;
    struct list_item$1sNode$ph* next;
};

struct list$1sNode$ph
{
    struct list_item$1sNode$ph* head;
    struct list_item$1sNode$ph* tail;
    int len;
    struct list_item$1sNode$ph* it;
};

struct sType
{
    struct sClass* mClass;
    struct sType* mOriginalLoadVarType;
    struct sType* mChannelType;
    struct list$1sType$ph* mGenericsTypes;
    struct sType* mNoSolvedGenericsType;
    struct sNode* mSizeNum;
    struct sNode* mAlignas;
    _Bool mAlignasDouble;
    char* mTupleName;
    char* mAttribute;
    char* mVarAttribute;
    _Bool mAllocaValue;
    _Bool mUnsigned;
    _Bool mShort;
    _Bool mLong;
    _Bool mLongLong;
    _Bool mConstant;
    _Bool mAtomic;
    _Bool mThreadLocal;
    _Bool mComplex;
    _Bool mRegister;
    _Bool mVolatile;
    _Bool mStatic;
    _Bool mUniq;
    _Bool mRecord;
    _Bool mExtern;
    _Bool mRestrict;
    _Bool mHeap;
    _Bool mChannel;
    _Bool mDefferRightValue;
    _Bool mNoHeap;
    _Bool mNoCallingDestructor;
    _Bool mException;
    _Bool mTypeName;
    _Bool mAnonymous;
    char* mAnonymousName;
    _Bool mInnerStruct;
    char* mInnerStructName;
    _Bool mAnonymousVarName;
    _Bool mInline;
    _Bool mNullValue;
    _Bool mGuardValue;
    char* mAsmName;
    _Bool mTypedef;
    _Bool mMultipleTypes;
    struct list$1sNode$ph* mArrayNum;
    struct list$1sNode$ph* mVarNameArrayNum;
    struct list$1int$* mArrayStatic;
    struct list$1int$* mArrayRestrict;
    int mPointerNum;
    int mFunctionPointerNum;
    int mArrayPointerNum;
    _Bool mPointerParen;
    struct sType* mTypedefOriginalType;
    char* mOriginalTypeName;
    int mOriginalTypePointerNum;
    int mOriginalTypePointerHeap;
    _Bool mArrayPointerType;
    struct list$1sType$ph* mParamTypes;
    struct list$1char$ph* mParamNames;
    struct sType* mResultType;
    _Bool mVarArgs;
    struct sNode* mTypeOfNode;
};

struct sVar
{
    char* mName;
    char* mCValueName;
    struct sType* mType;
    _Bool mGlobal;
    _Bool mAllocaValue;
    _Bool mNoFree;
    char* mFunName;
};

struct list_item$1sVar$ph
{
    struct sVar* item;
    struct list_item$1sVar$ph* prev;
    struct list_item$1sVar$ph* next;
};

struct list$1sVar$ph
{
    struct list_item$1sVar$ph* head;
    struct list_item$1sVar$ph* tail;
    int len;
    struct list_item$1sVar$ph* it;
};

struct sFun
{
    char* mName;
    struct sType* mResultType;
    struct list$1sType$ph* mParamTypes;
    struct list$1char$ph* mParamNames;
    struct list$1char$ph* mParamDefaultParametors;
    struct sType* mLambdaType;
    struct list$1sVar$ph* mAllVar;
    struct sBlock* mBlock;
    char* mTextBlock;
    char* mTextBlockSName;
    int mTextBlockSline;
    struct buffer* mSource;
    struct buffer* mSourceHead;
    struct buffer* mSourceHead2;
    struct buffer* mSourceDefer;
    _Bool mStatic;
    _Bool mInline;
    _Bool mUniq;
    _Bool mGenerate;
    _Bool mExternal;
    _Bool mVarArgs;
    _Bool mNoResultType;
    _Bool mConstFun;
    char* mAttribute;
    char* mFunAttribute;
    _Bool mGenericsFun;
    _Bool mDefineReturnVar;
};

struct sGenericsFun
{
    struct sType* mImplType;
    struct list$1char$ph* mGenericsTypeNames;
    struct list$1char$ph* mMethodGenericsTypeNames;
    char* mName;
    struct sType* mResultType;
    struct list$1sType$ph* mParamTypes;
    struct list$1char$ph* mParamNames;
    struct list$1char$ph* mParamDefaultParametors;
    char* mBlock;
    int mSLine;
    _Bool mVarArgs;
    _Bool mGenerate;
    char* mGenericsSName;
    int mGenericsSLine;
    _Bool mConstFun;
};

struct CVALUE
{
    char* c_value;
    struct sType* type;
    struct sVar* var;
    struct sRightValueObject* right_value_objects;
    char* c_value_without_right_value_objects;
    char* c_value_without_cast_object_value;
};

struct map$2char$phchar$ph
{
    char** keys;
    _Bool* item_existance;
    char** items;
    int size;
    int len;
    struct list$1char$ph* key_list;
    int it;
};

struct sModule
{
    struct buffer* mSourceHead;
    struct buffer* mSource;
    char* mLastCode;
    char* mLastCode2;
    struct map$2char$phchar$ph* mHeader;
};

struct map$2char$phsVar$ph
{
    char** keys;
    _Bool* item_existance;
    struct sVar** items;
    int size;
    int len;
    struct list$1char$ph* key_list;
    int it;
};

struct sVarTable
{
    struct map$2char$phsVar$ph* mVars;
    _Bool mGlobal;
    struct sVarTable* mParent;
};

struct sBlock
{
    struct list$1sNode$ph* mNodes;
    struct sVarTable* mVarTable;
    _Bool mOmitSemicolon;
};

struct sRightValueObject
{
    struct sType* mType;
    char* mVarName;
    char* mFunName;
    _Bool mFreed;
    int mID;
    int mBlockLevel;
    _Bool mStored;
    _Bool mDecrementRefCount;
    struct sType* mObjType;
    char* mObjValue;
    struct sVar* mObjVar;
    _Bool mNoFree;
};

struct sClassModule
{
    char* mName;
    char* mText;
    struct list$1char$ph* mParams;
    char* mSName;
    int mSLine;
};

struct map$2char$phsFun$ph
{
    char** keys;
    _Bool* item_existance;
    struct sFun** items;
    int size;
    int len;
    struct list$1char$ph* key_list;
    int it;
};

struct map$2char$phsGenericsFun$ph
{
    char** keys;
    _Bool* item_existance;
    struct sGenericsFun** items;
    int size;
    int len;
    struct list$1char$ph* key_list;
    int it;
};

struct map$2char$phsClass$ph
{
    char** keys;
    _Bool* item_existance;
    struct sClass** items;
    int size;
    int len;
    struct list$1char$ph* key_list;
    int it;
};

struct map$2char$phsClassModule$ph
{
    char** keys;
    _Bool* item_existance;
    struct sClassModule** items;
    int size;
    int len;
    struct list$1char$ph* key_list;
    int it;
};

struct map$2char$phsType$ph
{
    char** keys;
    _Bool* item_existance;
    struct sType** items;
    int size;
    int len;
    struct list$1char$ph* key_list;
    int it;
};

struct map$2char$phbuffer$ph
{
    char** keys;
    _Bool* item_existance;
    struct buffer** items;
    int size;
    int len;
    struct list$1char$ph* key_list;
    int it;
};

struct list_item$1sRightValueObject$ph
{
    struct sRightValueObject* item;
    struct list_item$1sRightValueObject$ph* prev;
    struct list_item$1sRightValueObject$ph* next;
};

struct list$1sRightValueObject$ph
{
    struct list_item$1sRightValueObject$ph* head;
    struct list_item$1sRightValueObject$ph* tail;
    int len;
    struct list_item$1sRightValueObject$ph* it;
};

struct list_item$1CVALUE$ph
{
    struct CVALUE* item;
    struct list_item$1CVALUE$ph* prev;
    struct list_item$1CVALUE$ph* next;
};

struct list$1CVALUE$ph
{
    struct list_item$1CVALUE$ph* head;
    struct list_item$1CVALUE$ph* tail;
    int len;
    struct list_item$1CVALUE$ph* it;
};

struct sInfo
{
    char* p;
    char* head;
    struct buffer* source;
    char* end;
    char* sname;
    char* sname_at_head;
    char* base_sname;
    int sline;
    int err_num;
    char* clang_option;
    char* cpp_option;
    char* linker_option;
    char* linker_option2;
    _Bool no_output_err;
    _Bool no_output_come_code;
    _Bool undefined_array_num_var;
    struct sFun* come_fun;
    struct sFun* caller_fun;
    int caller_line;
    char* caller_sname;
    int block_level;
    struct map$2char$phsFun$ph* funcs;
    struct map$2char$phsFun$ph* uniq_funcs;
    struct map$2char$phsGenericsFun$ph* generics_funcs;
    struct map$2char$phsClass$ph* classes;
    struct map$2char$phsClassModule$ph* modules;
    struct map$2char$phsType$ph* types;
    struct map$2char$phsClass$ph* generics_classes;
    struct map$2char$phbuffer$ph* struct_definition;
    struct map$2char$phbuffer$ph* previous_struct_definition;
    struct map$2char$phbuffer$ph* typedef_definition;
    struct map$2char$phchar$ph* reflection_vars;
    struct sModule* module;
    struct sType* type;
    struct list$1sRightValueObject$ph* right_value_objects;
    struct sType* generics_type;
    struct list$1sType$ph* method_generics_types;
    struct list$1CVALUE$ph* stack;
    struct sType* come_function_result_type;
    struct sType* come_method_block_function_result_type;
    struct sVarTable* lv_table;
    struct sVarTable* gv_table;
    _Bool no_comma;
    _Bool no_assign;
    _Bool no_label;
    _Bool last_statment_is_return;
    struct list$1char$ph* generics_type_names;
    struct list$1char$ph* method_generics_type_names;
    struct sType* impl_type;
    struct sType* class_type;
    int current_stack_num;
    int num_method_block;
    struct sClass* current_stack_frame_struct;
    _Bool define_struct;
    _Bool in_typedef;
    char* output_file_name;
    struct sVarTable* current_loop_vtable;
    _Bool verbose;
    int num_current_stack;
    int num_source_files;
    int max_source_files;
    _Bool writing_source_file_position;
    struct sType* function_result_type;
    _Bool in_class;
    struct map$2char$phchar$ph* module_params;
    _Bool constructor_;
    struct sClass* defining_class;
    _Bool array_initializer;
    _Bool va_arg;
    _Bool in_fun_param;
    _Bool inhibits_output_code;
    _Bool inhibits_output_code2;
    _Bool in_generics_fun;
    _Bool in_clone_object;
    _Bool in_conditional_operator;
    struct list$1sVar$ph* match_it_var;
    int sline_top;
    struct sFun* calling_fun;
    struct map$2char$phchar$ph* uniq_definition;
    _Bool in_top_level;
    _Bool remove_comment;
    int sline_real;
    int sline_block;
    _Bool m5stack_cpp;
    _Bool pico_cpp;
    _Bool emb_cpp;
    _Bool gcc_compiler;
    _Bool in_method_block;
    _Bool in_offsetof;
    int right_value_num;
    int right_value_max;
    _Bool in_conditional;
    int num_conditional;
    int max_conditional;
    char* pragma;
    _Bool in_refference;
    struct buffer* paren_block_buffer;
    _Bool in_typeof;
    _Bool in_store_array;
    int parse_struct_recursive_count;
};

struct sNodeBase
{
    int sline;
    char* sname;
    int sline_real;
};

struct sCurrentNode
{
    int sline;
    char* sname;
    int sline_real;
};

struct tuple2$2sType$phchar$ph
{
    struct sType* v1;
    char* v2;
};

struct tuple2$2char$phsGenericsFun$p
{
    char* v1;
    struct sGenericsFun* v2;
};

struct tuple3$3sType$phchar$ph_Bool$
{
    struct sType* v1;
    char* v2;
    _Bool v3;
};

struct tuple2$2char$phchar$ph
{
    char* v1;
    char* v2;
};

struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$
{
    struct list$1sType$ph* v1;
    struct list$1char$ph* v2;
    struct list$1char$ph* v3;
    _Bool v4;
};

struct tuple2$2sFun$pchar$ph
{
    struct sFun* v1;
    char* v2;
};

struct tuple2$2char$ph_Bool$
{
    char* v1;
    _Bool v2;
};

struct tuple3$3sType$phchar$phsNode$ph
{
    struct sType* v1;
    char* v2;
    struct sNode* v3;
};

struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph
{
    struct tuple3$3sType$phchar$phsNode$ph* item;
    struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* prev;
    struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* next;
};

struct list$1tuple3$3sType$phchar$phsNode$ph$ph
{
    struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* head;
    struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* tail;
    int len;
    struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* it;
};

struct tuple3$3char$phsFun$psGenericsFun$p
{
    char* v1;
    struct sFun* v2;
    struct sGenericsFun* v3;
};

struct tuple2$2char$phsNode$ph
{
    char* v1;
    struct sNode* v2;
};

struct list_item$1tuple2$2char$phsNode$ph$ph
{
    struct tuple2$2char$phsNode$ph* item;
    struct list_item$1tuple2$2char$phsNode$ph$ph* prev;
    struct list_item$1tuple2$2char$phsNode$ph$ph* next;
};

struct list$1tuple2$2char$phsNode$ph$ph
{
    struct list_item$1tuple2$2char$phsNode$ph$ph* head;
    struct list_item$1tuple2$2char$phsNode$ph$ph* tail;
    int len;
    struct list_item$1tuple2$2char$phsNode$ph$ph* it;
};

struct tuple4$4char$phchar$phchar$phchar$ph
{
    char* v1;
    char* v2;
    char* v3;
    char* v4;
};

struct sNothingNode
{
    int sline;
    char* sname;
    int sline_real;
};

struct sStrNode
{
    int sline;
    char* sname;
    int sline_real;
    char* value;
};

struct sBufferNode
{
    int sline;
    char* sname;
    int sline_real;
    struct buffer* value;
    unsigned long  int size;
};

struct sSStringNode
{
    int sline;
    char* sname;
    int sline_real;
    char* value;
    struct list$1sNode$ph* exps;
};

struct sCharNode
{
    int sline;
    char* sname;
    int sline_real;
    int value;
};

struct sWCharNode
{
    int sline;
    char* sname;
    int sline_real;
    int value;
    _Bool quote;
};

struct sWStringNode
{
    int sline;
    char* sname;
    int sline_real;
    int* value;
};

struct sListNode
{
    int sline;
    char* sname;
    int sline_real;
    struct list$1sNode$ph* list_elements;
};

struct sTupleNode
{
    int sline;
    char* sname;
    int sline_real;
    struct list$1tuple2$2char$phsNode$ph$ph* tuple_elements;
};

struct sMapNode
{
    int sline;
    char* sname;
    int sline_real;
    struct list$1sNode$ph* map_key_elements;
    struct list$1sNode$ph* map_elements;
};

// source head

// header function
int remove(const char* __filename);
int rename(const char* __old, const char* __new);
int renameat(int __oldfd, const char* __old, int __newfd, const char* __new);
int renameat2(int __oldfd, const char* __old, int __newfd, const char* __new, unsigned int __flags);
int fclose(struct _IO_FILE* __stream);
struct _IO_FILE* tmpfile();
struct _IO_FILE* tmpfile64();
char* tmpnam(char [20]);
char* tmpnam_r(char __s[20]);
char* tempnam(const char* __dir, const char* __pfx);
int fflush(struct _IO_FILE* __stream);
int fflush_unlocked(struct _IO_FILE* __stream);
int fcloseall();
struct _IO_FILE* fopen(const char* __filename, const char* __modes);
struct _IO_FILE* freopen(const char* __filename, const char* __modes, struct _IO_FILE* __stream);
struct _IO_FILE* fopen64(const char* __filename, const char* __modes);
struct _IO_FILE* freopen64(const char* __filename, const char* __modes, struct _IO_FILE* __stream);
struct _IO_FILE* fdopen(int __fd, const char* __modes);
struct _IO_FILE* fopencookie(void* __magic_cookie, const char* __modes, struct _IO_cookie_io_functions_t __io_funcs);
struct _IO_FILE* fmemopen(void* __s, unsigned long  int __len, const char* __modes);
struct _IO_FILE* open_memstream(char** __bufloc, unsigned long  int* __sizeloc);
void setbuf(struct _IO_FILE* __stream, char* __buf);
int setvbuf(struct _IO_FILE* __stream, char* __buf, int __modes, unsigned long  int __n);
void setbuffer(struct _IO_FILE* __stream, char* __buf, unsigned long  int __size);
void setlinebuf(struct _IO_FILE* __stream);
int fprintf(struct _IO_FILE* __stream, const char* __format, ...);
int printf(const char* __format, ...);
int sprintf(char* __s, const char* __format, ...);
int vfprintf(struct _IO_FILE* __s, const char* __format, __builtin_va_list __arg);
int vprintf(const char* __format, __builtin_va_list __arg);
int vsprintf(char* __s, const char* __format, __builtin_va_list __arg);
int snprintf(char* __s, unsigned long  int __maxlen, const char* __format, ...);
int vsnprintf(char* __s, unsigned long  int __maxlen, const char* __format, __builtin_va_list __arg);
int vasprintf(char** __ptr, const char* __f, __builtin_va_list __arg);
int __asprintf(char** __ptr, const char* __fmt, ...);
int asprintf(char** __ptr, const char* __fmt, ...);
int vdprintf(int __fd, const char* __fmt, __builtin_va_list __arg);
int dprintf(int __fd, const char* __fmt, ...);
int fscanf(struct _IO_FILE* __stream, const char* __format, ...);
int scanf(const char* __format, ...);
int sscanf(const char* __s, const char* __format, ...);
int __isoc23_fscanf(struct _IO_FILE* __stream, const char* __format, ...);
int __isoc23_scanf(const char* __format, ...);
int __isoc23_sscanf(const char* __s, const char* __format, ...);
int vfscanf(struct _IO_FILE* __s, const char* __format, __builtin_va_list __arg);
int vscanf(const char* __format, __builtin_va_list __arg);
int vsscanf(const char* __s, const char* __format, __builtin_va_list __arg);
int __isoc23_vfscanf(struct _IO_FILE* __s, const char* __format, __builtin_va_list __arg);
int __isoc23_vscanf(const char* __format, __builtin_va_list __arg);
int __isoc23_vsscanf(const char* __s, const char* __format, __builtin_va_list __arg);
int fgetc(struct _IO_FILE* __stream);
int getc(struct _IO_FILE* __stream);
int getchar();
int getc_unlocked(struct _IO_FILE* __stream);
int getchar_unlocked();
int fgetc_unlocked(struct _IO_FILE* __stream);
int fputc(int __c, struct _IO_FILE* __stream);
int putc(int __c, struct _IO_FILE* __stream);
int putchar(int __c);
int fputc_unlocked(int __c, struct _IO_FILE* __stream);
int putc_unlocked(int __c, struct _IO_FILE* __stream);
int putchar_unlocked(int __c);
int getw(struct _IO_FILE* __stream);
int putw(int __w, struct _IO_FILE* __stream);
char* fgets(char* __s, int __n, struct _IO_FILE* __stream);
char* fgets_unlocked(char* __s, int __n, struct _IO_FILE* __stream);
long  int __getdelim(char** __lineptr, unsigned long  int* __n, int __delimiter, struct _IO_FILE* __stream);
long  int getdelim(char** __lineptr, unsigned long  int* __n, int __delimiter, struct _IO_FILE* __stream);
long  int getline(char** __lineptr, unsigned long  int* __n, struct _IO_FILE* __stream);
int fputs(const char* __s, struct _IO_FILE* __stream);
int puts(const char* __s);
int ungetc(int __c, struct _IO_FILE* __stream);
unsigned long  int fread(void* __ptr, unsigned long  int __size, unsigned long  int __n, struct _IO_FILE* __stream);
unsigned long  int fwrite(const void* __ptr, unsigned long  int __size, unsigned long  int __n, struct _IO_FILE* __s);
int fputs_unlocked(const char* __s, struct _IO_FILE* __stream);
unsigned long  int fread_unlocked(void* __ptr, unsigned long  int __size, unsigned long  int __n, struct _IO_FILE* __stream);
unsigned long  int fwrite_unlocked(const void* __ptr, unsigned long  int __size, unsigned long  int __n, struct _IO_FILE* __stream);
int fseek(struct _IO_FILE* __stream, long  int __off, int __whence);
long  int ftell(struct _IO_FILE* __stream);
void rewind(struct _IO_FILE* __stream);
int fseeko(struct _IO_FILE* __stream, long  int __off, int __whence);
long  int ftello(struct _IO_FILE* __stream);
int fgetpos(struct _IO_FILE* __stream, struct _G_fpos_t* __pos);
int fsetpos(struct _IO_FILE* __stream, const struct _G_fpos_t* __pos);
int fseeko64(struct _IO_FILE* __stream, long  int __off, int __whence);
long  int ftello64(struct _IO_FILE* __stream);
int fgetpos64(struct _IO_FILE* __stream, struct _G_fpos64_t* __pos);
int fsetpos64(struct _IO_FILE* __stream, const struct _G_fpos64_t* __pos);
void clearerr(struct _IO_FILE* __stream);
int feof(struct _IO_FILE* __stream);
int ferror(struct _IO_FILE* __stream);
void clearerr_unlocked(struct _IO_FILE* __stream);
int feof_unlocked(struct _IO_FILE* __stream);
int ferror_unlocked(struct _IO_FILE* __stream);
void perror(const char* __s);
int fileno(struct _IO_FILE* __stream);
int fileno_unlocked(struct _IO_FILE* __stream);
int pclose(struct _IO_FILE* __stream);
struct _IO_FILE* popen(const char* __command, const char* __modes);
char* ctermid(char* __s);
char* cuserid(char* __s);
int obstack_printf(struct obstack* __obstack, const char* __format, ...);
int obstack_vprintf(struct obstack* __obstack, const char* __format, __builtin_va_list __args);
void flockfile(struct _IO_FILE* __stream);
int ftrylockfile(struct _IO_FILE* __stream);
void funlockfile(struct _IO_FILE* __stream);
int __uflow(struct _IO_FILE* );
int __overflow(struct _IO_FILE* , int );
unsigned long  int __ctype_get_mb_cur_max();
double atof(const char* __nptr);
int atoi(const char* __nptr);
long  int atol(const char* __nptr);
long long int atoll(const char* __nptr);
double strtod(const char* __nptr, char** __endptr);
float strtof(const char* __nptr, char** __endptr);
long  double strtold(const char* __nptr, char** __endptr);
float strtof32(const char* __nptr, char** __endptr);
double strtof64(const char* __nptr, char** __endptr);
__float128 strtof128(const char* __nptr, char** __endptr);
double strtof32x(const char* __nptr, char** __endptr);
long  double strtof64x(const char* __nptr, char** __endptr);
long  int strtol(const char* __nptr, char** __endptr, int __base);
unsigned long  int strtoul(const char* __nptr, char** __endptr, int __base);
long long int strtoq(const char* __nptr, char** __endptr, int __base);
unsigned long long int strtouq(const char* __nptr, char** __endptr, int __base);
long long int strtoll(const char* __nptr, char** __endptr, int __base);
unsigned long long int strtoull(const char* __nptr, char** __endptr, int __base);
long  int __isoc23_strtol(const char* __nptr, char** __endptr, int __base);
unsigned long  int __isoc23_strtoul(const char* __nptr, char** __endptr, int __base);
long long int __isoc23_strtoll(const char* __nptr, char** __endptr, int __base);
unsigned long long int __isoc23_strtoull(const char* __nptr, char** __endptr, int __base);
int strfromd(char* __dest, unsigned long  int __size, const char* __format, double __f);
int strfromf(char* __dest, unsigned long  int __size, const char* __format, float __f);
int strfroml(char* __dest, unsigned long  int __size, const char* __format, long  double __f);
int strfromf32(char* __dest, unsigned long  int __size, const char* __format, float __f);
int strfromf64(char* __dest, unsigned long  int __size, const char* __format, double __f);
int strfromf128(char* __dest, unsigned long  int __size, const char* __format, __float128 __f);
int strfromf32x(char* __dest, unsigned long  int __size, const char* __format, double __f);
int strfromf64x(char* __dest, unsigned long  int __size, const char* __format, long  double __f);
long  int strtol_l(const char* __nptr, char** __endptr, int __base, struct __locale_struct* __loc);
unsigned long  int strtoul_l(const char* __nptr, char** __endptr, int __base, struct __locale_struct* __loc);
long long int strtoll_l(const char* __nptr, char** __endptr, int __base, struct __locale_struct* __loc);
unsigned long long int strtoull_l(const char* __nptr, char** __endptr, int __base, struct __locale_struct* __loc);
long  int __isoc23_strtol_l(const char* __nptr, char** __endptr, int __base, struct __locale_struct* __loc);
unsigned long  int __isoc23_strtoul_l(const char* __nptr, char** __endptr, int __base, struct __locale_struct* __loc);
long long int __isoc23_strtoll_l(const char* __nptr, char** __endptr, int __base, struct __locale_struct* __loc);
unsigned long long int __isoc23_strtoull_l(const char* __nptr, char** __endptr, int __base, struct __locale_struct* __loc);
double strtod_l(const char* __nptr, char** __endptr, struct __locale_struct* __loc);
float strtof_l(const char* __nptr, char** __endptr, struct __locale_struct* __loc);
long  double strtold_l(const char* __nptr, char** __endptr, struct __locale_struct* __loc);
float strtof32_l(const char* __nptr, char** __endptr, struct __locale_struct* __loc);
double strtof64_l(const char* __nptr, char** __endptr, struct __locale_struct* __loc);
__float128 strtof128_l(const char* __nptr, char** __endptr, struct __locale_struct* __loc);
double strtof32x_l(const char* __nptr, char** __endptr, struct __locale_struct* __loc);
long  double strtof64x_l(const char* __nptr, char** __endptr, struct __locale_struct* __loc);
char* l64a(long  int __n);
long  int a64l(const char* __s);
int select(int __nfds, struct anonymous_typeX9* __readfds, struct anonymous_typeX9* __writefds, struct anonymous_typeX9* __exceptfds, struct timeval* __timeout);
int pselect(int __nfds, struct anonymous_typeX9* __readfds, struct anonymous_typeX9* __writefds, struct anonymous_typeX9* __exceptfds, const struct timespec* __timeout, const struct anonymous_typeX8* __sigmask);
long  int random();
void srandom(unsigned int __seed);
char* initstate(unsigned int __seed, char* __statebuf, unsigned long  int __statelen);
char* setstate(char* __statebuf);
int random_r(struct random_data* __buf, int* __result);
int srandom_r(unsigned int __seed, struct random_data* __buf);
int initstate_r(unsigned int __seed, char* __statebuf, unsigned long  int __statelen, struct random_data* __buf);
int setstate_r(char* __statebuf, struct random_data* __buf);
int rand();
void srand(unsigned int __seed);
int rand_r(unsigned int* __seed);
double drand48();
double erand48(unsigned short int __xsubi[3]);
long  int lrand48();
long  int nrand48(unsigned short int __xsubi[3]);
long  int mrand48();
long  int jrand48(unsigned short int __xsubi[3]);
void srand48(long  int __seedval);
unsigned short int* seed48(unsigned short int __seed16v[3]);
void lcong48(unsigned short int __param[7]);
int drand48_r(struct drand48_data* __buffer, double* __result);
int erand48_r(unsigned short int __xsubi[3], struct drand48_data* __buffer, double* __result);
int lrand48_r(struct drand48_data* __buffer, long  int* __result);
int nrand48_r(unsigned short int __xsubi[3], struct drand48_data* __buffer, long  int* __result);
int mrand48_r(struct drand48_data* __buffer, long  int* __result);
int jrand48_r(unsigned short int __xsubi[3], struct drand48_data* __buffer, long  int* __result);
int srand48_r(long  int __seedval, struct drand48_data* __buffer);
int seed48_r(unsigned short int __seed16v[3], struct drand48_data* __buffer);
int lcong48_r(unsigned short int __param[7], struct drand48_data* __buffer);
unsigned int arc4random();
void arc4random_buf(void* __buf, unsigned long  int __size);
unsigned int arc4random_uniform(unsigned int __upper_bound);
void* malloc(unsigned long  int __size);
void* calloc(unsigned long  int __nmemb, unsigned long  int __size);
void* realloc(void* __ptr, unsigned long  int __size);
void free(void* __ptr);
void* reallocarray(void* __ptr, unsigned long  int __nmemb, unsigned long  int __size);
void* alloca(unsigned long  int __size);
void* valloc(unsigned long  int __size);
int posix_memalign(void** __memptr, unsigned long  int __alignment, unsigned long  int __size);
void* aligned_alloc(unsigned long  int __alignment, unsigned long  int __size);
void abort();
int atexit(void (*__func)());
int at_quick_exit(void (*__func)());
int on_exit(void (*__func)(int,void*), void* __arg);
void exit(int __status);
void quick_exit(int __status);
void _Exit(int __status);
char* getenv(const char* __name);
char* secure_getenv(const char* __name);
int putenv(char* __string);
int setenv(const char* __name, const char* __value, int __replace);
int unsetenv(const char* __name);
int clearenv();
char* mktemp(char* __template);
int mkstemp(char* __template);
int mkstemp64(char* __template);
int mkstemps(char* __template, int __suffixlen);
int mkstemps64(char* __template, int __suffixlen);
char* mkdtemp(char* __template);
int mkostemp(char* __template, int __flags);
int mkostemp64(char* __template, int __flags);
int mkostemps(char* __template, int __suffixlen, int __flags);
int mkostemps64(char* __template, int __suffixlen, int __flags);
int system(const char* __command);
char* canonicalize_file_name(const char* __name);
char* realpath(const char* __name, char* __resolved);
void* bsearch(const void* __key, const void* __base, unsigned long  int __nmemb, unsigned long  int __size, int (*__compar)(const void*,const void*));
void qsort(void* __base, unsigned long  int __nmemb, unsigned long  int __size, int (*__compar)(const void*,const void*));
void qsort_r(void* __base, unsigned long  int __nmemb, unsigned long  int __size, int (*__compar)(const void*,const void*,void*), void* __arg);
int abs(int __x);
long  int labs(long  int __x);
long long int llabs(long long int __x);
unsigned int uabs(int __x);
unsigned long  int ulabs(long  int __x);
unsigned long long int ullabs(long long int __x);
struct anonymous_typeX5 div(int __numer, int __denom);
struct anonymous_typeX6 ldiv(long  int __numer, long  int __denom);
struct anonymous_typeX7 lldiv(long long int __numer, long long int __denom);
char* ecvt(double __value, int __ndigit, int* __decpt, int* __sign);
char* fcvt(double __value, int __ndigit, int* __decpt, int* __sign);
char* gcvt(double __value, int __ndigit, char* __buf);
char* qecvt(long  double __value, int __ndigit, int* __decpt, int* __sign);
char* qfcvt(long  double __value, int __ndigit, int* __decpt, int* __sign);
char* qgcvt(long  double __value, int __ndigit, char* __buf);
int ecvt_r(double __value, int __ndigit, int* __decpt, int* __sign, char* __buf, unsigned long  int __len);
int fcvt_r(double __value, int __ndigit, int* __decpt, int* __sign, char* __buf, unsigned long  int __len);
int qecvt_r(long  double __value, int __ndigit, int* __decpt, int* __sign, char* __buf, unsigned long  int __len);
int qfcvt_r(long  double __value, int __ndigit, int* __decpt, int* __sign, char* __buf, unsigned long  int __len);
int mblen(const char* __s, unsigned long  int __n);
int mbtowc(int* __pwc, const char* __s, unsigned long  int __n);
int wctomb(char* __s, int __wchar);
unsigned long  int mbstowcs(int* __pwcs, const char* __s, unsigned long  int __n);
unsigned long  int wcstombs(char* __s, const int* __pwcs, unsigned long  int __n);
int rpmatch(const char* __response);
int getsubopt(char** __optionp, char** __tokens, char** __valuep);
int posix_openpt(int __oflag);
int grantpt(int __fd);
int unlockpt(int __fd);
char* ptsname(int __fd);
int ptsname_r(int __fd, char* __buf, unsigned long  int __buflen);
int getpt();
int getloadavg(double __loadavg[], int __nelem);
void* memcpy(void* __dest, const void* __src, unsigned long  int __n);
void* memmove(void* __dest, const void* __src, unsigned long  int __n);
void* memccpy(void* __dest, const void* __src, int __c, unsigned long  int __n);
void* memset(void* __s, int __c, unsigned long  int __n);
int memcmp(const void* __s1, const void* __s2, unsigned long  int __n);
int __memcmpeq(const void* __s1, const void* __s2, unsigned long  int __n);
void* memchr(const void* __s, int __c, unsigned long  int __n);
void* rawmemchr(const void* __s, int __c);
void* memrchr(const void* __s, int __c, unsigned long  int __n);
char* strcpy(char* __dest, const char* __src);
char* strncpy(char* __dest, const char* __src, unsigned long  int __n);
char* strcat(char* __dest, const char* __src);
char* strncat(char* __dest, const char* __src, unsigned long  int __n);
int strcmp(const char* __s1, const char* __s2);
int strncmp(const char* __s1, const char* __s2, unsigned long  int __n);
int strcoll(const char* __s1, const char* __s2);
unsigned long  int strxfrm(char* __dest, const char* __src, unsigned long  int __n);
int strcoll_l(const char* __s1, const char* __s2, struct __locale_struct* __l);
unsigned long  int strxfrm_l(char* __dest, const char* __src, unsigned long  int __n, struct __locale_struct* __l);
char* strdup(const char* __s);
char* strndup(const char* __string, unsigned long  int __n);
char* strchr(const char* __s, int __c);
char* strrchr(const char* __s, int __c);
char* strchrnul(const char* __s, int __c);
unsigned long  int strcspn(const char* __s, const char* __reject);
unsigned long  int strspn(const char* __s, const char* __accept);
char* strpbrk(const char* __s, const char* __accept);
char* strstr(const char* __haystack, const char* __needle);
char* strtok(char* __s, const char* __delim);
char* __strtok_r(char* __s, const char* __delim, char** __save_ptr);
char* strtok_r(char* __s, const char* __delim, char** __save_ptr);
char* strcasestr(const char* __haystack, const char* __needle);
void* memmem(const void* __haystack, unsigned long  int __haystacklen, const void* __needle, unsigned long  int __needlelen);
void* __mempcpy(void* __dest, const void* __src, unsigned long  int __n);
void* mempcpy(void* __dest, const void* __src, unsigned long  int __n);
unsigned long  int strlen(const char* __s);
unsigned long  int strnlen(const char* __string, unsigned long  int __maxlen);
char* strerror(int __errnum);
char* strerror_r(int __errnum, char* __buf, unsigned long  int __buflen);
const char* strerrordesc_np(int __err);
const char* strerrorname_np(int __err);
char* strerror_l(int __errnum, struct __locale_struct* __l);
int bcmp(const void* __s1, const void* __s2, unsigned long  int __n);
void bcopy(const void* __src, void* __dest, unsigned long  int __n);
void bzero(void* __s, unsigned long  int __n);
char* index(const char* __s, int __c);
char* rindex(const char* __s, int __c);
int ffs(int __i);
int ffsl(long  int __l);
int ffsll(long long int __ll);
int strcasecmp(const char* __s1, const char* __s2);
int strncasecmp(const char* __s1, const char* __s2, unsigned long  int __n);
int strcasecmp_l(const char* __s1, const char* __s2, struct __locale_struct* __loc);
int strncasecmp_l(const char* __s1, const char* __s2, unsigned long  int __n, struct __locale_struct* __loc);
void explicit_bzero(void* __s, unsigned long  int __n);
char* strsep(char** __stringp, const char* __delim);
char* strsignal(int __sig);
const char* sigabbrev_np(int __sig);
const char* sigdescr_np(int __sig);
char* __stpcpy(char* __dest, const char* __src);
char* stpcpy(char* __dest, const char* __src);
char* __stpncpy(char* __dest, const char* __src, unsigned long  int __n);
char* stpncpy(char* __dest, const char* __src, unsigned long  int __n);
unsigned long  int strlcpy(char* __dest, const char* __src, unsigned long  int __n);
unsigned long  int strlcat(char* __dest, const char* __src, unsigned long  int __n);
int strverscmp(const char* __s1, const char* __s2);
char* strfry(char* __string);
void* memfrob(void* __s, unsigned long  int __n);
char* basename(const char* __filename);
long  int __sysconf(int __name);
char* setlocale(int __category, const char* __locale);
struct lconv* localeconv();
struct __locale_struct* newlocale(int __category_mask, const char* __locale, struct __locale_struct* __base);
struct __locale_struct* duplocale(struct __locale_struct* __dataset);
void freelocale(struct __locale_struct* __dataset);
struct __locale_struct* uselocale(struct __locale_struct* __dataset);
int* __errno_location();
void __assert_fail(const char* __assertion, const char* __file, unsigned int __line, const char* __function);
void __assert_perror_fail(int __errnum, const char* __file, unsigned int __line, const char* __function);
void __assert(const char* __assertion, const char* __file, int __line);
const unsigned short int** __ctype_b_loc();
const int** __ctype_tolower_loc();
const int** __ctype_toupper_loc();
int isalnum(int );
int isalpha(int );
int iscntrl(int );
int isdigit(int );
int islower(int );
int isgraph(int );
int isprint(int );
int ispunct(int );
int isspace(int );
int isupper(int );
int isxdigit(int );
int tolower(int __c);
int toupper(int __c);
int isblank(int );
int isctype(int __c, int __mask);
int isascii(int __c);
int toascii(int __c);
int _toupper(int );
int _tolower(int );
int isalnum_l(int , struct __locale_struct* );
int isalpha_l(int , struct __locale_struct* );
int iscntrl_l(int , struct __locale_struct* );
int isdigit_l(int , struct __locale_struct* );
int islower_l(int , struct __locale_struct* );
int isgraph_l(int , struct __locale_struct* );
int isprint_l(int , struct __locale_struct* );
int ispunct_l(int , struct __locale_struct* );
int isspace_l(int , struct __locale_struct* );
int isupper_l(int , struct __locale_struct* );
int isxdigit_l(int , struct __locale_struct* );
int isblank_l(int , struct __locale_struct* );
int __tolower_l(int __c, struct __locale_struct* __l);
int tolower_l(int __c, struct __locale_struct* __l);
int __toupper_l(int __c, struct __locale_struct* __l);
int toupper_l(int __c, struct __locale_struct* __l);
void come_push_stackframe(char* sname, int sline, int id);
void come_pop_stackframe();
void come_save_stackframe(char* sname, int sline);
void stackframe();
char* come_get_stackframe();
void xassert(char* msg, _Bool test);
_Bool die(char* msg);
void come_heap_init(int come_debug);
void come_heap_final();
void* alloc_from_pages(unsigned long  int size);
void come_free_mem_of_heap_pool(void* mem);
void* come_alloc_mem_from_heap_pool(unsigned long  int size, char* sname, int sline, char* class_name);
void come_print_heap_info(void* mem);
char* come_dynamic_typeof(void* mem);
void* come_calloc(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name);
void come_free(void* mem);
void* come_memdup(void* block, char* sname, int sline, char* class_name);
void* come_increment_ref_count(void* mem);
void* come_print_ref_count(void* mem);
int come_get_ref_count(void* mem);
void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, void* result_obj);
void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, void* result_obj);
char* __builtin_string(char* str);
void come_push_stackframe_v2(char* sname, int sline, int id);
void come_pop_stackframe_v2();
void come_save_stackframe_v2(char* sname, int sline);
void stackframe_v2();
char* come_get_stackframe_v2();
void* come_calloc_v2(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name);
void come_free_v2(void* mem);
struct buffer* buffer_initialize(struct buffer* self);
struct buffer* buffer_initialize_with_value(struct buffer* self, char* mem, unsigned long  int size);
void buffer_finalize(struct buffer* self);
struct buffer* buffer_clone(struct buffer* self);
_Bool buffer_equals(struct buffer* left, struct buffer* right);
int buffer_length(struct buffer* self);
void buffer_reset(struct buffer* self);
void buffer_trim(struct buffer* self, int len);
struct buffer* buffer_append(struct buffer* self, char* mem, unsigned long  int size);
struct buffer* buffer_append_char(struct buffer* self, char c);
struct buffer* buffer_append_str(struct buffer* self, char* mem);
struct buffer* buffer_append_format(struct buffer* self, char* msg, ...);
struct buffer* buffer_append_nullterminated_str(struct buffer* self, char* mem);
struct buffer* buffer_append_int(struct buffer* self, int value);
struct buffer* buffer_append_long(struct buffer* self, long value);
struct buffer* buffer_append_short(struct buffer* self, short value);
struct buffer* buffer_alignment(struct buffer* self);
int buffer_compare(struct buffer* left, struct buffer* right);
struct buffer* charp_to_buffer(char* self);
char* buffer_to_string(struct buffer* self);
unsigned char* buffer_head_pointer(struct buffer* self);
struct buffer* chara_to_buffer(char* self, unsigned long  int len);
struct buffer* charpa_to_buffer(char** self, unsigned long  int len);
struct buffer* shorta_to_buffer(short* self, unsigned long  int len);
struct buffer* inta_to_buffer(int* self, unsigned long  int len);
struct buffer* longa_to_buffer(long* self, unsigned long  int len);
struct buffer* floata_to_buffer(float* self, unsigned long  int len);
struct buffer* doublea_to_buffer(double* self, unsigned long  int len);
char* buffer_printable(struct buffer* self);
struct list$1char$* chara_to_list(char* self, unsigned long  int len);
struct list$1char$p* charpa_to_list(char** self, unsigned long  int len);
struct list$1short$* shorta_to_list(short* self, unsigned long  int len);
struct list$1int$* inta_to_list(int* self, unsigned long  int len);
struct list$1long$* longa_to_list(long* self, unsigned long  int len);
struct list$1float$* floata_to_list(float* self, unsigned long  int len);
struct list$1double$* doublea_to_list(double* self, unsigned long  int len);
_Bool _Bool_equals(_Bool self, _Bool right);
_Bool char_equals(char self, char right);
_Bool short_equals(short self, short right);
_Bool int_equals(int self, int right);
_Bool long_equals(long self, long right);
_Bool size_t_equals(unsigned long  int self, unsigned long  int right);
_Bool float_equals(float self, float right);
_Bool double_equals(double self, double right);
_Bool _Bool_operator_equals(_Bool self, _Bool right);
_Bool char_operator_equals(char self, char right);
_Bool short_operator_equals(short self, short right);
_Bool int_operator_equals(int self, int right);
_Bool long_operator_equals(long self, long right);
_Bool _Bool_operator_not_equals(_Bool self, _Bool right);
_Bool char_operator_not_equals(char self, char right);
_Bool short_operator_not_equals(short self, short right);
_Bool int_operator_not_equals(int self, int right);
_Bool long_operator_not_equals(long self, long right);
_Bool charp_equals(char* self, char* right);
_Bool string_equals(char* self, char* right);
_Bool voidp_equals(void* self, void* right);
_Bool _Boolp_equals(_Bool* self, _Bool* right);
_Bool string_operator_equals(char* self, char* right);
_Bool charp_operator_equals(char* self, char* right);
_Bool voidp_operator_equals(char* self, char* right);
_Bool voidp_operator_not_equals(char* self, char* right);
_Bool string_operator_not_equals(char* self, char* right);
_Bool charp_operator_not_equals(char* self, char* right);
char* charp_operator_add(char* self, char* right);
char* string_operator_add(char* self, char* right);
char* charp_operator_mult(char* self, int right);
char* string_operator_mult(char* self, int right);
_Bool charpa_contained(char** self, unsigned long  int len, char* str);
unsigned long  int shorta_length(short* self, unsigned long  int len);
unsigned long  int inta_length(int* self, unsigned long  int len);
unsigned long  int longa_length(long* self, unsigned long  int len);
unsigned long  int floata_length(float* self, unsigned long  int len);
unsigned long  int doublea_length(double* self, unsigned long  int len);
unsigned int _Bool_get_hash_key(_Bool value);
unsigned int char_get_hash_key(char value);
unsigned int short_get_hash_key(short int value);
unsigned int int_get_hash_key(int value);
unsigned int long_get_hash_key(long value);
unsigned int size_t_get_hash_key(unsigned long  int value);
unsigned int float_get_hash_key(float value);
unsigned int double_get_hash_key(double value);
unsigned int charp_get_hash_key(char* value);
unsigned int string_get_hash_key(char* value);
unsigned int voidp_get_hash_key(void* value);
_Bool _Bool_clone(_Bool self);
char char_clone(char self);
short int short_clone(short self);
int int_clone(int self);
long  int long_clone(long self);
unsigned long  int size_t_clone(unsigned long  int self);
double double_clone(double self);
float float_clone(float self);
_Bool xisalpha(char c);
_Bool xisblank(char c);
_Bool xisdigit(char c);
_Bool xisspace(char c);
_Bool xisalnum(char c);
_Bool xisascii(char c);
_Bool xispunct(char c);
int string_length(char* str);
int charp_length(char* str);
int chara_length(char* str);
char* charp_reverse(char* str);
char* string_operator_load_range_element(char* str, int head, int tail);
char* charp_operator_load_range_element(char* str, int head, int tail);
char* charp_substring(char* str, int head, int tail);
char* xsprintf(char* msg, ...);
char* charp_delete(char* str, int head, int tail);
struct list$1char$ph* charp_split_char(char* self, char c);
char* charp_xsprintf(char* self, char* msg, ...);
char* int_xsprintf(int self, char* msg, ...);
char* charp_printable(char* str);
char* chara_printable(char* str);
char* charp_sub_plain(char* self, char* str, char* replace);
char* xbasename(char* path);
char* xnoextname(char* path);
char* xextname(char* path);
char* _Bool_to_string(_Bool self);
char* char_to_string(char self);
char* short_to_string(short self);
char* int_to_string(int self);
char* long_to_string(long self);
char* size_t_to_string(unsigned long  int self);
char* float_to_string(float self);
char* double_to_string(double self);
char* string_to_string(char* self);
char* charp_to_string(char* self);
int _Bool_compare(_Bool left, _Bool right);
int char_compare(char left, char right);
int short_compare(short left, short right);
int int_compare(int left, int right);
int long_compare(long left, long right);
int size_t_compare(unsigned long  int left, unsigned long  int right);
int float_compare(float left, float right);
int double_compare(double left, double right);
int string_compare(char* left, char* right);
int charp_compare(char* left, char* right);
char* charp_puts(char* self);
char* charp_print(char* self);
char* charp_printf(char* self, ...);
int int_printf(int self, char* msg);
long long_printf(long self, char* msg);
int assert_v2(int exp);
void int_times(int self, void* parent, void (*block)(void*,int));
int re_matchp(struct re_program* pattern, const char* text, int* matchlength, struct re_capture* captures, int max_captures);
int re_match(const char* pattern, const char* text, int* matchlength);
struct re_program* re_compile(const char* pattern);
void re_print(struct re_program* pattern);
void clear_captures(struct anonymous_typeX26* ctx);
void snapshot_captures(const struct anonymous_typeX26* ctx, struct re_capture* buffer_);
void restore_captures(struct anonymous_typeX26* ctx, const struct re_capture* buffer_);
struct regex_t* new_token(struct anonymous_typeX25* st);
int append_token(struct regex_t** head, struct regex_t** tail, struct regex_t* token);
struct regex_t* compile_sequence(struct anonymous_typeX25* st, const char* pattern, int* pos, int in_group);
const char* matchpattern(struct regex_t* pattern, const char* text, struct anonymous_typeX26* ctx);
const char* matchgroup(struct regex_t* token, struct regex_t* rest, const char* text, struct anonymous_typeX26* ctx);
const char* matchstar(struct regex_t* token, struct regex_t* rest, const char* text, struct anonymous_typeX26* ctx);
const char* matchplus(struct regex_t* token, struct regex_t* rest, const char* text, struct anonymous_typeX26* ctx);
const char* matchquestion(struct regex_t* token, struct regex_t* rest, const char* text, struct anonymous_typeX26* ctx);
const char* matchtoken(struct regex_t* token, const char* text, struct anonymous_typeX26* ctx);
int matchdigit(char c);
int matchalpha(char c);
int matchwhitespace(char c);
int matchalphanum(char c);
int matchrange(char c, const char* str);
int matchdot(char c);
int ismetachar(char c);
int matchmetachar(char c, const char* str);
int matchcharclass(char c, const char* str);
void re_print_internal(struct regex_t* pattern, int depth);
int re_get_group_count(struct re_program* pattern);
int charp_index_regex(char* self, char* reg, int default_value);
int charp_rindex_regex(char* self, char* reg, int default_value);
char* string_chomp(char* str);
int string_rindex_regex(char* self, char* reg, int default_value);
int string_index_regex(char* self, char* reg, int default_value);
_Bool charp_match(char* self, char* reg);
struct list$1char$ph* charp_scan(char* self, char* reg);
struct list$1char$ph* charp_split(char* self, char* reg);
char* string_sub(char* self, char* reg, char* replace);
struct list$1char$ph* string_scan(char* self, char* reg);
struct list$1char$ph* string_split(char* self, char* reg);
_Bool string_match(char* self, char* reg);
char* charp_sub(char* self, char* reg, char* replace);
char* charp_sub_block(char* self, char* reg, void* parent, char* (*block)(void*,char*,struct list$1char$ph*));
struct list$1char$ph* charp_scan_block(char* self, char* reg, void* parent, char* (*block)(void*,char*,struct list$1char$ph*));
char* string_sub_block(char* self, char* reg, void* parent, char* (*block)(void*,char*,struct list$1char$ph*));
int* wcscpy(int* __dest, const int* __src);
int* wcsncpy(int* __dest, const int* __src, unsigned long  int __n);
unsigned long  int wcslcpy(int* __dest, const int* __src, unsigned long  int __n);
unsigned long  int wcslcat(int* __dest, const int* __src, unsigned long  int __n);
int* wcscat(int* __dest, const int* __src);
int* wcsncat(int* __dest, const int* __src, unsigned long  int __n);
int wcscmp(const int* __s1, const int* __s2);
int wcsncmp(const int* __s1, const int* __s2, unsigned long  int __n);
int wcscasecmp(const int* __s1, const int* __s2);
int wcsncasecmp(const int* __s1, const int* __s2, unsigned long  int __n);
int wcscasecmp_l(const int* __s1, const int* __s2, struct __locale_struct* __loc);
int wcsncasecmp_l(const int* __s1, const int* __s2, unsigned long  int __n, struct __locale_struct* __loc);
int wcscoll(const int* __s1, const int* __s2);
unsigned long  int wcsxfrm(int* __s1, const int* __s2, unsigned long  int __n);
int wcscoll_l(const int* __s1, const int* __s2, struct __locale_struct* __loc);
unsigned long  int wcsxfrm_l(int* __s1, const int* __s2, unsigned long  int __n, struct __locale_struct* __loc);
int* wcsdup(const int* __s);
int* wcschr(const int* __wcs, int __wc);
int* wcsrchr(const int* __wcs, int __wc);
int* wcschrnul(const int* __s, int __wc);
unsigned long  int wcscspn(const int* __wcs, const int* __reject);
unsigned long  int wcsspn(const int* __wcs, const int* __accept);
int* wcspbrk(const int* __wcs, const int* __accept);
int* wcsstr(const int* __haystack, const int* __needle);
int* wcstok(int* __s, const int* __delim, int** __ptr);
unsigned long  int wcslen(const int* __s);
int* wcswcs(const int* __haystack, const int* __needle);
unsigned long  int wcsnlen(const int* __s, unsigned long  int __maxlen);
int* wmemchr(const int* __s, int __c, unsigned long  int __n);
int wmemcmp(const int* __s1, const int* __s2, unsigned long  int __n);
int* wmemcpy(int* __s1, const int* __s2, unsigned long  int __n);
int* wmemmove(int* __s1, const int* __s2, unsigned long  int __n);
int* wmemset(int* __s, int __c, unsigned long  int __n);
int* wmempcpy(int* __s1, const int* __s2, unsigned long  int __n);
unsigned int btowc(int __c);
int wctob(unsigned int __c);
int mbsinit(const struct anonymous_typeX2* __ps);
unsigned long  int mbrtowc(int* __pwc, const char* __s, unsigned long  int __n, struct anonymous_typeX2* __p);
unsigned long  int wcrtomb(char* __s, int __wc, struct anonymous_typeX2* __ps);
unsigned long  int __mbrlen(const char* __s, unsigned long  int __n, struct anonymous_typeX2* __ps);
unsigned long  int mbrlen(const char* __s, unsigned long  int __n, struct anonymous_typeX2* __ps);
unsigned long  int mbsrtowcs(int* __dst, const char** __src, unsigned long  int __len, struct anonymous_typeX2* __ps);
unsigned long  int wcsrtombs(char* __dst, const int** __src, unsigned long  int __len, struct anonymous_typeX2* __ps);
unsigned long  int mbsnrtowcs(int* __dst, const char** __src, unsigned long  int __nmc, unsigned long  int __len, struct anonymous_typeX2* __ps);
unsigned long  int wcsnrtombs(char* __dst, const int** __src, unsigned long  int __nwc, unsigned long  int __len, struct anonymous_typeX2* __ps);
int wcwidth(int __c);
int wcswidth(const int* __s, unsigned long  int __n);
double wcstod(const int* __nptr, int** __endptr);
float wcstof(const int* __nptr, int** __endptr);
long  double wcstold(const int* __nptr, int** __endptr);
float wcstof32(const int* __nptr, int** __endptr);
double wcstof64(const int* __nptr, int** __endptr);
__float128 wcstof128(const int* __nptr, int** __endptr);
double wcstof32x(const int* __nptr, int** __endptr);
long  double wcstof64x(const int* __nptr, int** __endptr);
long  int wcstol(const int* __nptr, int** __endptr, int __base);
unsigned long  int wcstoul(const int* __nptr, int** __endptr, int __base);
long long int wcstoll(const int* __nptr, int** __endptr, int __base);
unsigned long long int wcstoull(const int* __nptr, int** __endptr, int __base);
long long int wcstoq(const int* __nptr, int** __endptr, int __base);
unsigned long long int wcstouq(const int* __nptr, int** __endptr, int __base);
long  int __isoc23_wcstol(const int* __nptr, int** __endptr, int __base);
unsigned long  int __isoc23_wcstoul(const int* __nptr, int** __endptr, int __base);
long long int __isoc23_wcstoll(const int* __nptr, int** __endptr, int __base);
unsigned long long int __isoc23_wcstoull(const int* __nptr, int** __endptr, int __base);
long  int wcstol_l(const int* __nptr, int** __endptr, int __base, struct __locale_struct* __loc);
unsigned long  int wcstoul_l(const int* __nptr, int** __endptr, int __base, struct __locale_struct* __loc);
long long int wcstoll_l(const int* __nptr, int** __endptr, int __base, struct __locale_struct* __loc);
unsigned long long int wcstoull_l(const int* __nptr, int** __endptr, int __base, struct __locale_struct* __loc);
long  int __isoc23_wcstol_l(const int* __nptr, int** __endptr, int __base, struct __locale_struct* __loc);
unsigned long  int __isoc23_wcstoul_l(const int* __nptr, int** __endptr, int __base, struct __locale_struct* __loc);
long long int __isoc23_wcstoll_l(const int* __nptr, int** __endptr, int __base, struct __locale_struct* __loc);
unsigned long long int __isoc23_wcstoull_l(const int* __nptr, int** __endptr, int __base, struct __locale_struct* __loc);
double wcstod_l(const int* __nptr, int** __endptr, struct __locale_struct* __loc);
float wcstof_l(const int* __nptr, int** __endptr, struct __locale_struct* __loc);
long  double wcstold_l(const int* __nptr, int** __endptr, struct __locale_struct* __loc);
float wcstof32_l(const int* __nptr, int** __endptr, struct __locale_struct* __loc);
double wcstof64_l(const int* __nptr, int** __endptr, struct __locale_struct* __loc);
__float128 wcstof128_l(const int* __nptr, int** __endptr, struct __locale_struct* __loc);
double wcstof32x_l(const int* __nptr, int** __endptr, struct __locale_struct* __loc);
long  double wcstof64x_l(const int* __nptr, int** __endptr, struct __locale_struct* __loc);
int* wcpcpy(int* __dest, const int* __src);
int* wcpncpy(int* __dest, const int* __src, unsigned long  int __n);
struct _IO_FILE* open_wmemstream(int** __bufloc, unsigned long  int* __sizeloc);
int fwide(struct _IO_FILE* __fp, int __mode);
int fwprintf(struct _IO_FILE* __stream, const int* __format, ...);
int wprintf(const int* __format, ...);
int swprintf(int* __s, unsigned long  int __n, const int* __format, ...);
int vfwprintf(struct _IO_FILE* __s, const int* __format, __builtin_va_list __arg);
int vwprintf(const int* __format, __builtin_va_list __arg);
int vswprintf(int* __s, unsigned long  int __n, const int* __format, __builtin_va_list __arg);
int fwscanf(struct _IO_FILE* __stream, const int* __format, ...);
int wscanf(const int* __format, ...);
int swscanf(const int* __s, const int* __format, ...);
int __isoc23_fwscanf(struct _IO_FILE* __stream, const int* __format, ...);
int __isoc23_wscanf(const int* __format, ...);
int __isoc23_swscanf(const int* __s, const int* __format, ...);
int vfwscanf(struct _IO_FILE* __s, const int* __format, __builtin_va_list __arg);
int vwscanf(const int* __format, __builtin_va_list __arg);
int vswscanf(const int* __s, const int* __format, __builtin_va_list __arg);
int __isoc23_vfwscanf(struct _IO_FILE* __s, const int* __format, __builtin_va_list __arg);
int __isoc23_vwscanf(const int* __format, __builtin_va_list __arg);
int __isoc23_vswscanf(const int* __s, const int* __format, __builtin_va_list __arg);
unsigned int fgetwc(struct _IO_FILE* __stream);
unsigned int getwc(struct _IO_FILE* __stream);
unsigned int getwchar();
unsigned int fputwc(int __wc, struct _IO_FILE* __stream);
unsigned int putwc(int __wc, struct _IO_FILE* __stream);
unsigned int putwchar(int __wc);
int* fgetws(int* __ws, int __n, struct _IO_FILE* __stream);
int fputws(const int* __ws, struct _IO_FILE* __stream);
unsigned int ungetwc(unsigned int __wc, struct _IO_FILE* __stream);
unsigned int getwc_unlocked(struct _IO_FILE* __stream);
unsigned int getwchar_unlocked();
unsigned int fgetwc_unlocked(struct _IO_FILE* __stream);
unsigned int fputwc_unlocked(int __wc, struct _IO_FILE* __stream);
unsigned int putwc_unlocked(int __wc, struct _IO_FILE* __stream);
unsigned int putwchar_unlocked(int __wc);
int* fgetws_unlocked(int* __ws, int __n, struct _IO_FILE* __stream);
int fputws_unlocked(const int* __ws, struct _IO_FILE* __stream);
unsigned long  int wcsftime(int* __s, unsigned long  int __maxsize, const int* __format, const struct tm* __tp);
unsigned long  int wcsftime_l(int* __s, unsigned long  int __maxsize, const int* __format, const struct tm* __tp, struct __locale_struct* __loc);
char* dirname(char* __path);
char* __xpg_basename(char* __path);
int* __builtin_wstring(char* str);
int wchar_tp_length(int* str);
int wchar_ta_length(int* str);
int wstring_length(int* str);
char* string_lower_case(char* str);
char* string_upper_case(char* str);
int* wchar_tp_substring(int* str, int head, int tail);
int charp_index_count(char* str, char* search_str, int count, int default_value);
int charp_rindex(char* str, char* search_str, int default_value);
int charp_rindex_count(char* str, char* search_str, int count, int default_value);
char* charp_strip(char* self);
char* wchar_tp_to_string(int* wstr);
char* wchar_ta_to_string(int* wstr);
int* charp_to_wstring(char* str);
int* chara_to_wstring(char* str);
int* wchar_tp_delete(int* str, int head, int tail);
int wchar_tp_index(int* str, int* search_str, int default_value);
int wchar_tp_rindex(int* str, int* search_str, int default_value);
int* wchar_tp_reverse(int* str);
int* wchar_tp_multiply(int* str, int n);
int* wchar_tp_printable(int* str);
int wchar_tp_compare(int* left, int* right);
int wstring_compare(int* left, int* right);
int* wchar_tp_operator_mult(int* str, int n);
int* wstring_operator_mult(int* str, int n);
_Bool wstring_operator_equals(int* left, int* right);
_Bool wstring_operator_not_equals(int* left, int* right);
int* wchar_tp_operator_add(int* left, int* right);
int* wstring_operator_add(int* left, int* right);
int charp_index(char* str, char* search_str, int default_value);
char* charp_replace(char* self, int index, char c);
char* charp_multiply(char* str, int n);
struct list$1char$ph* charp_split_str(char* self, char* str);
unsigned int wchar_tp_get_hash_key(int* value);
_Bool wstring_equals(int* left, int* right);
_Bool wchar_t_operator_equals(int left, int right);
_Bool wchar_t_operator_not_equals(int left, int right);
unsigned int wchar_t_get_hash_key(int value);
_Bool wchar_t_equals(int left, int right);
char* wchar_t_to_string(int wc);
char* xrealpath(char* path);
char* xdirname(char* path);
unsigned long  int xwcslen(int* wstr);
int* wstring_substring(int* str, int head, int tail);
int string_index_count(char* str, char* search_str, int count, int default_value);
int string_rindex(char* str, char* search_str, int default_value);
int string_rindex_count(char* str, char* search_str, int count, int default_value);
char* string_strip(char* self);
char* wstring_to_string(int* wstr);
int* int_to_wstring(int self);
int* wstring_delete(int* str, int head, int tail);
int wstring_index(int* str, int* search_str, int default_value);
int wstring_rindex(int* str, int* search_str, int default_value);
int* wstring_reverse(int* str);
int* wstring_multiply(int* str, int n);
int* wstring_printable(int* str);
unsigned int wstring_get_hash_key(int* value);
int string_index(char* str, char* search_str, int default_value);
char* string_replace(char* self, int index, char c);
char* string_multiply(char* str, int n);
struct list$1char$ph* string_split_str(char* self, char* str);
int* string_to_wstring(char* str);
char* charp_chomp(char* str);
_Bool wchar_tp_equals(int* left, int* right);
_Bool wchar_tp_operator_equals(int* left, int* right);
_Bool wchar_tp_operator_not_equals(int* left, int* right);
char* FILE_read(struct _IO_FILE* f);
int FILE_write(struct _IO_FILE* f, char* str);
int FILE_fclose(struct _IO_FILE* f);
struct _IO_FILE* FILE_fprintf(struct _IO_FILE* f, const char* msg, ...);
int charp_write(char* self, char* file_name, _Bool append);
char* charp_read(char* file_name);
struct list$1char$ph* FILE_readlines(struct _IO_FILE* f);
_Bool xiswalpha(int c);
_Bool xiswblank(int c);
_Bool xiswdigit(int c);
_Bool xiswalnum(int c);
_Bool xiswascii(int c);
struct sClass* sClass_initialize(struct sClass* self, char* name, _Bool number, _Bool union_, _Bool generics, _Bool method_generics, _Bool protocol_, _Bool struct_, _Bool float_, int generics_num, int method_generics_num, _Bool enum_, _Bool uniq_, _Bool typename, struct sInfo* info);
struct sType* sType_initialize(struct sType* self, char* name, _Bool heap, struct sInfo* info, _Bool unsinged_);
struct sFun* sFun_initialize(struct sFun* self, char* name, struct sType* result_type, struct list$1sType$ph* param_types, struct list$1char$ph* param_names, struct list$1char$ph* param_default_parametors, _Bool external, _Bool var_args, struct sBlock* block, _Bool static_, struct sInfo* info, _Bool inline_, _Bool uniq_, _Bool generate_, char* attribute, char* fun_attribute, _Bool const_fun, char* text_block, char* generics_sname, int generics_sline, _Bool immutable_);
struct sGenericsFun* sGenericsFun_initialize(struct sGenericsFun* self, struct sType* impl_type, struct list$1char$ph* generics_type_names, struct list$1char$ph* method_generics_type_names, char* name, struct sType* result_type, struct list$1sType$ph* param_types, struct list$1char$ph* param_names, struct list$1char$ph* param_default_parametors, _Bool var_args, char* block, struct sInfo* info, char* generics_sname, int generics_sline, _Bool const_fun);
struct CVALUE* CVALUE_initialize(struct CVALUE* self);
struct sModule* sModule_initialize(struct sModule* self);
struct sVarTable* sVarTable_initialize(struct sVarTable* self, _Bool global, struct sVarTable* parent);
void sVarTable_finalize(struct sVarTable* self);
struct sBlock* sBlock_initialize(struct sBlock* self);
struct sClassModule* sClassModule_initialize(struct sClassModule* self, char* name, char* text, char* sname, int sline);
struct sNodeBase* sNodeBase_initialize(struct sNodeBase* self, struct sInfo* info);
int sNodeBase_sline(struct sNodeBase* self, struct sInfo* info);
int sNodeBase_sline_real(struct sNodeBase* self, struct sInfo* info);
_Bool sNodeBase_terminated(struct sNodeBase* self);
_Bool sNodeBase_no_mutex(struct sNodeBase* self);
char* sNodeBase_sname(struct sNodeBase* self, struct sInfo* info);
struct sCurrentNode* sCurrentNode_initialize(struct sCurrentNode* self, struct sInfo* info);
int sCurrentNode_sline(struct sCurrentNode* self, struct sInfo* info);
char* sCurrentNode_sname(struct sCurrentNode* self, struct sInfo* info);
char* sCurrentNode_kind(struct sCurrentNode* self);
_Bool sCurrentNode_compile(struct sCurrentNode* self, struct sInfo* info);
_Bool transpile_conditional_with_free_right_object_value(struct sNode* node, struct sInfo* info);
int err_msg(struct sInfo* info, char* msg, ...);
int expected_next_character(char c, struct sInfo* info);
_Bool node_compile(struct sNode* node, struct sInfo* info);
_Bool node_conditional_compile(struct sNode* node, struct sInfo* info);
int come_main(int argc, char** argv);
char* make_type_name_string(struct sType* type, struct sInfo* info, _Bool no_static, _Bool cast_type, _Bool typedef_extended);
char* make_come_type_name_string(struct sType* type, struct sInfo* info);
char* make_come_define_var(struct sType* type, char* name, struct sInfo* info);
char* header_function(struct sFun* fun, struct sInfo* info);
_Bool output_source_file(struct sInfo* info);
void show_type(struct sType* type, struct sInfo* info);
char* create_generics_name(struct sType* generics_type, struct sInfo* info);
void add_last_code_to_source(struct sInfo* info);
void add_come_code_at_function_head(struct sInfo* info, char* code, ...);
void add_come_code_at_come_header(struct sInfo* info, char* id, const char* msg, ...);
void add_come_code_at_come_struct_header(struct sInfo* info, char* id, const char* msg, ...);
void add_come_code_at_function_head2(struct sInfo* info, char* code, ...);
void add_come_code(struct sInfo* info, const char* msg, ...);
void add_come_last_code(struct sInfo* info, const char* msg, ...);
void add_come_last_code2(struct sInfo* info, const char* msg, ...);
void dec_stack_ptr(int value, struct sInfo* info);
struct CVALUE* get_value_from_stack(int offset, struct sInfo* info);
char* make_define_var(struct sType* type, char* name, struct sInfo* info, _Bool no_static, _Bool in_typedef);
char* make_var_name(struct sType* type, char* name, struct sInfo* info, _Bool no_static);
void transpiler_clear_last_code(struct sInfo* info);
_Bool output_header_file(struct sInfo* info);
void on_drop_object(struct sType* type, char* obj, struct sInfo* info);
void on_load_object(struct sType* type, char* obj, struct sInfo* info);
struct sType* solve_method_generics(struct sType* type, struct sInfo* info);
_Bool existance_free_right_value_objects(struct sInfo* info);
_Bool existance_free_objects_on_return(struct sBlock* current_block, struct sInfo* info, struct sVar* ret_value, _Bool top_block);
void std_move(struct sType* left_type, struct sType* right_type, struct CVALUE* right_value, struct sInfo* info);
char* append_stackframe(char* c_value, struct sType* type, struct sInfo* info);
_Bool create_equals_method(struct sType* type, struct sInfo* info);
_Bool create_operator_equals_method(struct sType* type, struct sInfo* info);
_Bool create_operator_not_equals_method(struct sType* type, struct sInfo* info);
struct sType* solve_generics(struct sType* type, struct sType* generics_type, struct sInfo* info);
struct sVar* get_variable_from_table(struct sVarTable* table, char* name);
void free_objects_on_return(struct sBlock* current_block, struct sInfo* info, struct sVar* ret_value, _Bool top_block);
void free_objects_of_match_lv_tables(struct sInfo* info);
void free_objects_on_break(struct sInfo* info);
void free_object(struct sType* type, char* obj, _Bool no_decrement, _Bool no_free, struct sInfo* info, _Bool ret_value);
struct tuple2$2sType$phchar$ph* clone_object(struct sType* type, char* obj, struct sInfo* info);
void free_right_value_objects(struct sInfo* info);
void free_objects(struct sVarTable* table, struct sVar* ret_value, struct sInfo* info);
void append_object_to_right_values(struct CVALUE* come_value, struct sType* type, struct sInfo* info, _Bool decrement_ref_count, struct sType* obj_type, char* obj_value, struct sVar* obj_var);
void remove_object_from_right_values(int right_value_num, struct sInfo* info);
char* increment_ref_count_object(struct sType* type, char* obj, struct sInfo* info);
void decrement_ref_count_object(struct sType* type, char* obj, struct sInfo* info, _Bool no_free);
void transpile_toplevel(_Bool block, struct sInfo* info);
struct sNode* reverse_node(struct sNode* value, struct sInfo* info);
struct sFun* compile_uniq_function(struct sFun* fun, struct sInfo* info);
struct sNode* cast_node(struct sType* type, struct sNode* node, struct sInfo* info);
struct sNode* reffence_node(struct sNode* value, struct sInfo* info);
struct tuple2$2char$phsGenericsFun$p* make_method_generics_function(char* fun_name, struct list$1sType$ph* method_generics_types, struct sInfo* info);
struct sNode* create_return_node(struct sNode* value, char* value_source, struct sInfo* info);
struct sNode* post_position_operator(struct sNode* node, struct sInfo* info);
_Bool create_method_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sInfo* info);
_Bool operator_overload_fun_self(struct sType* type, char* fun_name, struct sNode* node, struct CVALUE* left_value, struct sInfo* info);
void caller_begin(struct sInfo* info);
void caller_end(struct sInfo* info);
struct sNode* craete_logical_denial(struct sNode* node, struct sInfo* info);
struct tuple3$3sType$phchar$ph_Bool$* backtrace_parse_type(_Bool parse_variable_name, struct sInfo* info);
void skip_pointer_attribute(struct sInfo* info);
void skip_paren(struct sInfo* info);
struct sNode* parse_normal_block(_Bool clang, struct sInfo* info);
_Bool check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, _Bool print_err_msg, _Bool pointer_massive, struct sInfo* info);
void cast_type(struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, struct sInfo* info);
struct tuple2$2char$phchar$ph* parse_attribute(struct sInfo* info, _Bool parse_function_attribute);
struct tuple2$2char$phchar$ph* parse_function_attribute(struct sInfo* info);
struct sNode* get_number(_Bool minus, struct sInfo* info);
struct sNode* get_oct_number(struct sInfo* info);
struct sNode* get_hex_number(_Bool minus, struct sInfo* info);
struct sNode* create_int_node(char* value, struct sInfo* info);
struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$* parse_params(struct sInfo* info, _Bool in_constructor_);
struct tuple2$2sFun$pchar$ph* create_pthread_fun(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFun$pchar$ph* create_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFun$pchar$ph* create_to_string_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFun$pchar$ph* create_cloner_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFun$pchar$ph* create_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFun$pchar$ph* create_operator_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFun$pchar$ph* create_operator_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFun$pchar$ph* create_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFun$pchar$ph* create_get_hash_key_automatically(struct sType* type, char* fun_name, struct sInfo* info);
char* skip_block(struct sInfo* info, _Bool return_self_at_last);
_Bool is_contained_generics_class(struct sType* type, struct sInfo* info);
_Bool is_type_name(char* buf, struct sInfo* info);
_Bool parsecmp(char* p2, struct sInfo* info);
char* parse_word(_Bool digits, struct sInfo* info);
char* backtrace_parse_word(struct sInfo* info);
void skip_spaces_and_lf(struct sInfo* info);
void skip_spaces_and_lf2(struct sInfo* info);
struct tuple2$2char$ph_Bool$* create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info);
struct tuple3$3sType$phchar$ph_Bool$* parse_type(struct sInfo* info, _Bool parse_variable_name, _Bool parse_multiple_type, _Bool in_function_parametor);
struct tuple2$2sType$phchar$ph* parse_variable_name_on_multiple_declare(struct sType* base_type_name, _Bool first, struct sInfo* info);
struct sBlock* parse_block(struct sInfo* info, _Bool return_self_at_last, _Bool in_function);
int transpile_block(struct sBlock* block, struct list$1sType$ph* param_types, struct list$1char$ph* param_names, struct sInfo* info, _Bool no_var_table, _Bool loop_block);
void arrange_stack(struct sInfo* info, int top);
struct sNode* parse_function(struct sInfo* info);
struct sNode* statment(struct sInfo* info);
struct sNode* top_level_v1(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* top_level_v99(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* expression_node_v1(struct sInfo* info);
struct sNode* expression_node_v99(struct sInfo* info);
struct sNode* expression_node_v98(struct sInfo* info);
struct sNode* expression_node_v97(struct sInfo* info);
int transpile(struct sInfo* info);
void parse_sharp_v5(struct sInfo* info);
char* create_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);
char* create_method_name_original_obj_type(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);
char* create_non_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);
char* create_method_name_using_class(struct sClass* obj_class, char* fun_name, struct sInfo* info);
struct sNode* create_null_value(struct sType* type, struct sInfo* info);
struct sNode* create_null_return_value(struct sInfo* info);
struct sNode* create_some(struct sNode* exp, struct sInfo* info);
struct sNode* parse_some(struct sInfo* info);
struct sNode* parse_none(struct sInfo* info);
_Bool is_inner_calling(struct sNode* node, struct sInfo* info);
struct sNode* post_position_operator_v7(struct sNode* node, struct sInfo* info);
struct sNode* expression_node_v95(struct sInfo* info);
struct sNode* store_var(char* name, struct list$1char$ph* multiple_assign, struct list$1tuple3$3sType$phchar$phsNode$ph$ph* multiple_declare, struct sType* type, _Bool alloc, struct sNode* right_value, struct sInfo* info);
struct sNode* create_load_var(char* var_name, struct sInfo* info);
struct sNode* parse_array_initializer(struct sInfo* info);
struct sNode* parse_struct_initializer(struct sInfo* info);
struct sNode* parse_global_variable(struct sInfo* info);
struct sNode* load_var(char* name, struct sInfo* info);
struct sNode* string_node_v7(char* buf, char* head, int head_sline, struct sInfo* info);
void add_variable_to_table(char* name, struct sType* type, struct sInfo* info, _Bool function_param, _Bool comma);
void add_variable_to_global_table(char* name, struct sType* type, struct sInfo* info);
void add_variable_to_global_table_with_int_value(char* name, struct sType* type, char* c_value, struct sInfo* info);
struct sNode* parse_match(struct sNode* expression_node, struct sInfo* info);
struct sNode* string_node_v8(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* parse_if_method_call(struct sNode* expression_node, struct sInfo* info);
struct sNode* parse_less_method_call(struct sNode* expression_node, struct sInfo* info);
struct sNode* parse_elif_method_call(struct sNode* expression_node, struct sInfo* info);
struct sNode* parse_or_statment(struct sNode* expression_node, struct sInfo* info);
struct sNode* parse_and_statment(struct sNode* expression_node, struct sInfo* info);
struct sNode* string_node_v9(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* string_node_v10(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* string_node_v11(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* string_node_v12(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* create_comma_exp(struct sNode* node, struct sNode* node2, struct sInfo* info);
struct sNode* create_less(struct sNode* node, struct sNode* right, struct sInfo* info);
struct sNode* create_null_node(struct sInfo* info);
struct sNode* conditional_node(struct sNode* value1, struct sNode* value2, struct sNode* value3, struct sInfo* info);
_Bool operator_overload_fun(struct sType* type, char* fun_name, struct sNode* left_node, struct sNode* right_node, struct CVALUE* left_value, struct CVALUE* right_value, _Bool break_guard, struct sInfo* info);
struct sNode* expression_v13(struct sInfo* info, _Bool type_name_exp);
struct sNode* post_op_v13(struct sNode* node, struct sInfo* info);
struct sNode* string_node_v13(char* buf, char* head, int head_sline, struct sInfo* info);
void child_output_struct(struct sType* type, char* struct_name, struct buffer* buf, _Bool* existance_generics, char* name, int indent, struct sInfo* info);
char* parse_struct_attribute(struct sInfo* info);
struct sNode* create_nothing_node(struct sInfo* info);
_Bool is_contained_method_generics_types(struct sType* type, struct sInfo* info);
_Bool is_contained_generics_types(struct sType* type, struct sInfo* info);
struct sNode* string_node_v14(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* parse_struct(char* type_name, char* struct_attribute, struct sInfo* info);
char* get_none_generics_name(char* class_name);
struct sNode* top_level_v98(char* buf, char* head, int head_sline, struct sInfo* info);
_Bool output_generics_struct(struct sType* type, struct sType* generics_type, struct sInfo* info);
void output_struct(struct sClass* klass, char* pragma, struct sInfo* info);
struct sNode* string_node_v15(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* parse_union(char* type_name, char* union_attribute, struct sInfo* info);
struct sNode* top_level_v97(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* string_node_v16(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* parse_enum(char* type_name, char* attribute, struct sInfo* info);
struct sNode* top_level_v96(char* buf, char* head, int head_sline, struct sInfo* info);
_Bool add_typedef(char* type_name, struct sType* type, struct sInfo* info);
struct sNode* top_level_v95(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* string_node_v17(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* create_nullable_node(struct sNode* left, struct sInfo* info);
struct sNode* load_field(struct sNode* left, char* name, struct sInfo* info);
struct sNode* store_field(struct sNode* left, struct sNode* right, char* name, struct sInfo* info);
struct sNode* post_position_operator_v99(struct sNode* node, struct sInfo* info);
struct sNode* parse_method_call_v18(struct sNode* obj, char* fun_name, struct sInfo* info);
struct sNode* post_position_operator_v19(struct sNode* node, struct sInfo* info);
struct tuple3$3char$phsFun$psGenericsFun$p* get_method(char* fun_name, struct sType* obj_type, struct sInfo* info);
struct sNode* create_method_call(char* fun_name, struct sNode* obj, struct list$1tuple2$2char$phsNode$ph$ph* params, struct buffer* method_block, int method_block_sline, struct list$1sType$ph* method_generics_types, struct sInfo* info);
struct sNode* create_guard_break_method_call(struct sNode* expression_node, struct sInfo* info);
_Bool compile_method_block(struct buffer* method_block, struct list$1CVALUE$ph* come_params, struct sFun* fun, char* fun_name, int method_block_sline, struct sInfo* info, _Bool no_create_current_stack);
struct tuple2$2char$phsGenericsFun$p* make_generics_function(struct sType* type, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);
struct sNode* parse_method_call_v20(struct sNode* obj, char* fun_name, struct sInfo* info);
struct sNode* string_node_v20(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* create_implements(struct sNode* node, struct sType* inf_type, struct sInfo* info);
struct sNode* create_object(struct sType* type, struct sInfo* info);
struct sNode* create_true_object(struct sInfo* info);
struct sNode* create_false_object(struct sInfo* info);
struct sNode* string_node_v21(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* top_level_v94(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* post_position_operator_v21(struct sNode* node, struct sInfo* info);
struct tuple4$4char$phchar$phchar$phchar$ph* create_vtable(struct sType* any_type, struct sInfo* info);
struct sNode* top_level_v93(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* top_level_v92(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* top_level_v91(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* static_assert_node(struct sNode* exp, struct sNode* exp2, struct sInfo* info);
struct sNothingNode* sNothingNode_initialize(struct sNothingNode* self, struct sInfo* info);
_Bool sNothingNode_terminated(struct sNothingNode* self);
char* sNothingNode_kind(struct sNothingNode* self);
_Bool sNothingNode_compile(struct sNothingNode* self, struct sInfo* info);
struct sStrNode* sStrNode_initialize(struct sStrNode* self, char* value, int sline, struct sInfo* info);
char* sStrNode_kind(struct sStrNode* self);
_Bool sStrNode_compile(struct sStrNode* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
static void sStrNode_finalize(struct sStrNode* self);
static void sType_finalize(struct sType* self);
static void list$1sType$ph$p_finalize(struct list$1sType$ph* self);
static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self);
static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self);
static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self);
static void list$1int$$p_finalize(struct list$1int$* self);
static void list_item$1int$$p_finalize(struct list_item$1int$* self);
static void list$1char$ph$p_finalize(struct list$1char$ph* self);
static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self);
static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item);
static void CVALUE_finalize(struct CVALUE* self);
struct sBufferNode* sBufferNode_initialize(struct sBufferNode* self, struct buffer* value, unsigned long  int size, struct sInfo* info);
char* sBufferNode_kind(struct sBufferNode* self);
_Bool sBufferNode_compile(struct sBufferNode* self, struct sInfo* info);
static void sBufferNode_finalize(struct sBufferNode* self);
static struct sFun* map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char* key);
static void sFun_finalize(struct sFun* self);
static void list$1sVar$ph$p_finalize(struct list$1sVar$ph* self);
static void list_item$1sVar$ph$p_finalize(struct list_item$1sVar$ph* self);
static void sVar_finalize(struct sVar* self);
static void sBlock_finalize(struct sBlock* self);
static struct sFun* map$2char$phsFun$ph_operator_load_element(struct map$2char$phsFun$ph* self, char* key);
static struct sType* sType_clone(struct sType* self);
static struct list$1sType$ph* list$1sType$ph$p_clone(struct list$1sType$ph* self);
static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self);
static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType* item);
static void list$1sType$ph_finalize(struct list$1sType$ph* self);
static struct sNode* sNode_clone(struct sNode* self);
static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self);
static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self);
static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item);
static void list$1sNode$ph_finalize(struct list$1sNode$ph* self);
static struct list$1int$* list$1int$$p_clone(struct list$1int$* self);
static struct list$1int$* list$1int$_initialize(struct list$1int$* self);
static struct list$1int$* list$1int$_add(struct list$1int$* self, int item);
static void list$1int$_finalize(struct list$1int$* self);
static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self);
static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self);
static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char* item);
static void list$1char$ph_finalize(struct list$1char$ph* self);
struct sSStringNode* sSStringNode_initialize(struct sSStringNode* self, char* value, struct list$1sNode$ph* exps, int sline, struct sInfo* info);
char* sSStringNode_kind(struct sSStringNode* self);
_Bool sSStringNode_compile(struct sSStringNode* self, struct sInfo* info);
static void sSStringNode_finalize(struct sSStringNode* self);
static int list$1sNode$ph_length(struct list$1sNode$ph* self);
static struct sNode* list$1sNode$ph_begin(struct list$1sNode$ph* self);
static _Bool list$1sNode$ph_end(struct list$1sNode$ph* self);
static struct sNode* list$1sNode$ph_next(struct list$1sNode$ph* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_initialize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void list$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void list_item$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsNode$ph$ph* self);
static void tuple2$2char$phsNode$ph$p_finalize(struct tuple2$2char$phsNode$ph* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_add(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item);
static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_initialize(struct tuple2$2char$phsNode$ph* self, char* v1, struct sNode* v2);
struct sCharNode* sCharNode_initialize(struct sCharNode* self, int value, struct sInfo* info);
char* sCharNode_kind(struct sCharNode* self);
_Bool sCharNode_compile(struct sCharNode* self, struct sInfo* info);
static void sCharNode_finalize(struct sCharNode* self);
struct sWCharNode* sWCharNode_initialize(struct sWCharNode* self, int value, _Bool quote, struct sInfo* info);
char* sWCharNode_kind(struct sWCharNode* self);
_Bool sWCharNode_compile(struct sWCharNode* self, struct sInfo* info);
static void sWCharNode_finalize(struct sWCharNode* self);
struct sWStringNode* sWStringNode_initialize(struct sWStringNode* self, int* value, int sline, struct sInfo* info);
char* sWStringNode_kind(struct sWStringNode* self);
_Bool sWStringNode_compile(struct sWStringNode* self, struct sInfo* info);
static void sWStringNode_finalize(struct sWStringNode* self);
struct sListNode* sListNode_initialize(struct sListNode* self, struct list$1sNode$ph* list_elements, struct sInfo* info);
char* sListNode_kind(struct sListNode* self);
_Bool sListNode_compile(struct sListNode* self, struct sInfo* info);
static void sListNode_finalize(struct sListNode* self);
static struct list$1CVALUE$ph* list$1CVALUE$ph_initialize(struct list$1CVALUE$ph* self);
static void list$1CVALUE$ph$p_finalize(struct list$1CVALUE$ph* self);
static void list_item$1CVALUE$ph$p_finalize(struct list_item$1CVALUE$ph* self);
static struct list$1sNode$ph* list$1sNode$ph_push_back(struct list$1sNode$ph* self, struct sNode* item);
static int list$1CVALUE$ph_length(struct list$1CVALUE$ph* self);
static struct CVALUE* list$1CVALUE$ph_begin(struct list$1CVALUE$ph* self);
static _Bool list$1CVALUE$ph_end(struct list$1CVALUE$ph* self);
static struct CVALUE* list$1CVALUE$ph_next(struct list$1CVALUE$ph* self);
static struct CVALUE* list$1CVALUE$ph$p_operator_load_element(struct list$1CVALUE$ph* self, int position);
static struct CVALUE* list$1CVALUE$ph_operator_load_element(struct list$1CVALUE$ph* self, int position);
static struct list$1sType$ph* list$1sType$ph_push_back(struct list$1sType$ph* self, struct sType* item);
static void tuple2$2char$phsGenericsFun$p$p_finalize(struct tuple2$2char$phsGenericsFun$p* self);
static struct sFun* map$2char$phsFun$ph_at(struct map$2char$phsFun$ph* self, char* key, struct sFun* default_value);
static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position);
static struct sType* list$1sType$ph_operator_load_element(struct list$1sType$ph* self, int position);
struct sTupleNode* sTupleNode_initialize(struct sTupleNode* self, struct list$1tuple2$2char$phsNode$ph$ph* tuple_elements, struct sInfo* info);
char* sTupleNode_kind(struct sTupleNode* self);
_Bool sTupleNode_compile(struct sTupleNode* self, struct sInfo* info);
static void list$1tuple2$2char$phsNode$ph$ph_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void sTupleNode_finalize(struct sTupleNode* self);
static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_begin(struct list$1tuple2$2char$phsNode$ph$ph* self);
static _Bool list$1tuple2$2char$phsNode$ph$ph_end(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_next(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct CVALUE* CVALUE_clone(struct CVALUE* self);
static int list$1sType$ph_length(struct list$1sType$ph* self);
static struct sType* list$1sType$ph_begin(struct list$1sType$ph* self);
static _Bool list$1sType$ph_end(struct list$1sType$ph* self);
static struct sType* list$1sType$ph_next(struct list$1sType$ph* self);
struct sMapNode* sMapNode_initialize(struct sMapNode* self, struct list$1sNode$ph* map_key_elements, struct list$1sNode$ph* map_elements, struct sInfo* info);
char* sMapNode_kind(struct sMapNode* self);
_Bool sMapNode_compile(struct sMapNode* self, struct sInfo* info);
static void sMapNode_finalize(struct sMapNode* self);
static struct sNode* list$1sNode$ph$p_operator_load_element(struct list$1sNode$ph* self, int position);
static struct sNode* list$1sNode$ph_operator_load_element(struct list$1sNode$ph* self, int position);
struct sNode* expression_node_v96(struct sInfo* info);
static struct sSStringNode* sSStringNode_clone(struct sSStringNode* self);
static struct sStrNode* sStrNode_clone(struct sStrNode* self);
static struct sBufferNode* sBufferNode_clone(struct sBufferNode* self);
static struct sCharNode* sCharNode_clone(struct sCharNode* self);
static struct sWCharNode* sWCharNode_clone(struct sWCharNode* self);
static struct sWStringNode* sWStringNode_clone(struct sWStringNode* self);
static struct sMapNode* sMapNode_clone(struct sMapNode* self);
static struct sListNode* sListNode_clone(struct sListNode* self);
struct sNode* parse_tuple(struct sInfo* info, _Bool named_tuple);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_push_back(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item);
static struct sTupleNode* sTupleNode_clone(struct sTupleNode* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_clone(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_clone(struct tuple2$2char$phsNode$ph* self);
static void tuple2$2char$phsNode$ph_finalize(struct tuple2$2char$phsNode$ph* self);
// uniq global variable
// inline function
static inline unsigned short int __bswap_16(unsigned short int __bsx)
{
    return ((unsigned short int)((((__bsx)>>8)&0xff)|(((__bsx)&0xff)<<8)));
}
static inline unsigned int __bswap_32(unsigned int __bsx)
{
    return ((((__bsx)&0xff000000u)>>24)|(((__bsx)&0x00ff0000u)>>8)|(((__bsx)&0x0000ff00u)<<8)|(((__bsx)&0x000000ffu)<<24));
}
static inline unsigned long  int __bswap_64(unsigned long  int __bsx)
{
    return ((((__bsx)&0xff00000000000000ull)>>56)|(((__bsx)&0x00ff000000000000ull)>>40)|(((__bsx)&0x0000ff0000000000ull)>>24)|(((__bsx)&0x000000ff00000000ull)>>8)|(((__bsx)&0x00000000ff000000ull)<<8)|(((__bsx)&0x0000000000ff0000ull)<<24)|(((__bsx)&0x000000000000ff00ull)<<40)|(((__bsx)&0x00000000000000ffull)<<56));
}
static inline unsigned short int __uint16_identity(unsigned short int __x)
{
    return __x;
}
static inline unsigned int __uint32_identity(unsigned int __x)
{
    return __x;
}
static inline unsigned long  int __uint64_identity(unsigned long  int __x)
{
    return __x;
}

// body function
struct sStrNode* sStrNode_initialize(struct sStrNode* self, char* value, int sline, struct sInfo* info)
{
    void* __right_value0 = (void*)0;
    char* __dec_obj1;
    struct sStrNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj1=self->value,
    self->value=(char*)come_increment_ref_count(__builtin_string(value));
    __dec_obj1 = come_decrement_ref_count(__dec_obj1, (void*)0, (void*)0, 0,0, (void*)0);
    __result_obj__0 = (struct sStrNode*)come_increment_ref_count(self);
    come_call_finalizer(sStrNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    (value = come_decrement_ref_count(value, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sStrNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char* sStrNode_kind(struct sStrNode* self)
{
    void* __right_value0 = (void*)0;
    char* __result_obj__0;
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string("sStrNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool sStrNode_compile(struct sStrNode* self, struct sInfo* info)
{
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct CVALUE* come_value;
    char* __dec_obj2;
    void* __right_value2 = (void*)0;
    struct sType* __exception_result_var_b1;
    struct sType* __exception_result_var_b2;
    struct sType* __dec_obj3;
    _Bool __result_obj__0;
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "06str.c", 18, "struct CVALUE*"))));
    __dec_obj2=come_value->c_value,
    come_value->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",self->value));
    __dec_obj2 = come_decrement_ref_count(__dec_obj2, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj3=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count((come_push_stackframe("06str.c", 21, 0),__exception_result_var_b1=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "06str.c", 21, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char*")),0,info,0), come_pop_stackframe(), __exception_result_var_b1));
    come_call_finalizer(sType_finalize, __dec_obj3,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_value->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value));
    add_come_last_code(info,"%s",come_value->c_value);
    __result_obj__0 = 1;
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__0;
}

static void sNodeBase_finalize(struct sNodeBase* self)
{
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

static void sStrNode_finalize(struct sStrNode* self)
{
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->value!=((void*)0)) {
        (self->value = come_decrement_ref_count(self->value, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

static void sType_finalize(struct sType* self)
{
    if(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mChannelType, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        ((self->mSizeNum) ? self->mSizeNum = come_decrement_ref_count(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    if(self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        ((self->mAlignas) ? self->mAlignas = come_decrement_ref_count(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    if(self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        (self->mTupleName = come_decrement_ref_count(self->mTupleName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->mVarAttribute!=((void*)0)) {
        (self->mVarAttribute = come_decrement_ref_count(self->mVarAttribute, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->mAnonymousName!=((void*)0)) {
        (self->mAnonymousName = come_decrement_ref_count(self->mAnonymousName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->mInnerStructName!=((void*)0)) {
        (self->mInnerStructName = come_decrement_ref_count(self->mInnerStructName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        (self->mAsmName = come_decrement_ref_count(self->mAsmName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mVarNameArrayNum!=((void*)0)) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mVarNameArrayNum, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mArrayStatic!=((void*)0)) {
        come_call_finalizer(list$1int$$p_finalize, self->mArrayStatic, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mArrayRestrict!=((void*)0)) {
        come_call_finalizer(list$1int$$p_finalize, self->mArrayRestrict, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mTypedefOriginalType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mTypedefOriginalType, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        (self->mOriginalTypeName = come_decrement_ref_count(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamNames, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mResultType, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mTypeOfNode!=((void*)0)) {
        ((self->mTypeOfNode) ? self->mTypeOfNode = come_decrement_ref_count(self->mTypeOfNode, ((struct sNode*)self->mTypeOfNode)->finalize, ((struct sNode*)self->mTypeOfNode)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
}

static void list$1sType$ph$p_finalize(struct list$1sType$ph* self)
{
    struct list_item$1sType$ph* it;
    struct list_item$1sType$ph* prev_it;
    if(self==((void*)0)) {
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self)
{
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self)
{
    struct list_item$1sNode$ph* it;
    struct list_item$1sNode$ph* prev_it;
    if(self==((void*)0)) {
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self)
{
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        ((self->item) ? self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
}

static void list$1int$$p_finalize(struct list$1int$* self)
{
    struct list_item$1int$* it;
    struct list_item$1int$* prev_it;
    if(self==((void*)0)) {
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1int$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1int$$p_finalize(struct list_item$1int$* self)
{
}

static void list$1char$ph$p_finalize(struct list$1char$ph* self)
{
    struct list_item$1char$ph* it;
    struct list_item$1char$ph* prev_it;
    if(self==((void*)0)) {
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self)
{
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item)
{
    struct list$1CVALUE$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1CVALUE$ph* litem;
    struct CVALUE* __dec_obj4;
    struct list_item$1CVALUE$ph* litem_0;
    struct CVALUE* __dec_obj5;
    struct list_item$1CVALUE$ph* litem_1;
    struct CVALUE* __dec_obj6;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./neo-c.h", 1177, "struct list_item$1CVALUE$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj4=litem->item,
        litem->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj4,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        litem_0=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./neo-c.h", 1187, "struct list_item$1CVALUE$ph*"))));
        litem_0->prev=self->head;
        litem_0->next=((void*)0);
        __dec_obj5=litem_0->item,
        litem_0->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj5,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem_0;
        self->head->next=litem_0;
    }
    else {
        litem_1=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./neo-c.h", 1197, "struct list_item$1CVALUE$ph*"))));
        litem_1->prev=self->tail;
        litem_1->next=((void*)0);
        __dec_obj6=litem_1->item,
        litem_1->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj6,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail->next=litem_1;
        self->tail=litem_1;
    }
    self->len++;
    __result_obj__0 = self;
    come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__0;
}

static void CVALUE_finalize(struct CVALUE* self)
{
    if(self!=((void*)0)&&self->c_value!=((void*)0)) {
        (self->c_value = come_decrement_ref_count(self->c_value, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        (self->c_value_without_right_value_objects = come_decrement_ref_count(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)) {
        (self->c_value_without_cast_object_value = come_decrement_ref_count(self->c_value_without_cast_object_value, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

struct sBufferNode* sBufferNode_initialize(struct sBufferNode* self, struct buffer* value, unsigned long  int size, struct sInfo* info)
{
    void* __right_value0 = (void*)0;
    struct buffer* __dec_obj7;
    struct sBufferNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj7=self->value,
    self->value=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer(buffer_finalize, __dec_obj7,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    self->size=size;
    __result_obj__0 = (struct sBufferNode*)come_increment_ref_count(self);
    come_call_finalizer(sBufferNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(buffer_finalize, value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sBufferNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char* sBufferNode_kind(struct sBufferNode* self)
{
    void* __right_value0 = (void*)0;
    char* __result_obj__0;
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string("sBufferNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool sBufferNode_compile(struct sBufferNode* self, struct sInfo* info)
{
    struct buffer* value;
    unsigned long  int size;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct CVALUE* come_value;
    struct buffer* buf;
    void* __right_value2 = (void*)0;
    struct sType* __exception_result_var_b3;
    struct sType* __exception_result_var_b4;
    struct sType* __exception_result_var_b5;
    struct sType* type2;
    struct sType* __exception_result_var_b6;
    struct sType* __exception_result_var_b7;
    struct sType* __exception_result_var_b8;
    struct sType* any_type;
    _Bool _conditional_value_X0;
    struct sType* __exception_result_var_b9;
    struct sType* __exception_result_var_b10;
    struct sType* __exception_result_var_b11;
    struct sType* type2_2;
    char* __dec_obj8;
    struct sType* __dec_obj40;
    _Bool __result_obj__0;
    value=(struct buffer*)come_increment_ref_count(self->value);
    size=self->size;
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "06str.c", 53, "struct CVALUE*"))));
    buf=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "06str.c", 55, "struct buffer*"))));
    type2=(struct sType*)come_increment_ref_count((come_push_stackframe("06str.c", 57, 4),__exception_result_var_b5=(come_push_stackframe("06str.c", 57, 2),__exception_result_var_b3=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "06str.c", 57, "struct sType*")),(char*)come_increment_ref_count(xsprintf("buffer")),0,info,0), come_pop_stackframe(), __exception_result_var_b3), come_pop_stackframe(), __exception_result_var_b5));
    type2->mPointerNum++;
    any_type=(struct sType*)come_increment_ref_count((come_push_stackframe("06str.c", 60, 7),__exception_result_var_b8=(come_push_stackframe("06str.c", 60, 5),__exception_result_var_b6=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "06str.c", 60, "struct sType*")),(char*)come_increment_ref_count(xsprintf("buffer")),0,info,0), come_pop_stackframe(), __exception_result_var_b6), come_pop_stackframe(), __exception_result_var_b8));
    any_type->mPointerNum=1;
    any_type->mHeap=1;
    if(({(_conditional_value_X0=(((struct sFun*)(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,"come_calloc_v2")))));    come_call_finalizer(sFun_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
_conditional_value_X0;})) {
        buffer_append_format(buf,"buffer_initialize_with_value((struct buffer*)come_increment_ref_count(come_calloc_v2(1, sizeof(struct buffer), \"%s\", %d, \"buffer\")), \"%s\", %ld)",info->sname,info->sline,((char*)(__right_value0=buffer_to_string(value))),size);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    }
    else {
        buffer_append_format(buf,"buffer_initialize_with_value((struct buffer*)come_increment_ref_count(come_calloc(1, sizeof(struct buffer), \"%s\", %d, \"buffer\")), \"%s\", %ld)",info->sname,info->sline,((char*)(__right_value0=buffer_to_string(value))),size);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    }
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    type2_2=(struct sType*)come_increment_ref_count((come_push_stackframe("06str.c", 71, 10),__exception_result_var_b11=(come_push_stackframe("06str.c", 71, 8),__exception_result_var_b9=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "06str.c", 71, "struct sType*")),(char*)come_increment_ref_count(xsprintf("buffer*")),0,info,0), come_pop_stackframe(), __exception_result_var_b9), come_pop_stackframe(), __exception_result_var_b11));
    type2_2->mHeap=1;
    __dec_obj8=come_value->c_value,
    come_value->c_value=(char*)come_increment_ref_count(buffer_to_string(buf));
    __dec_obj8 = come_decrement_ref_count(__dec_obj8, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj40=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count(sType_clone(type2_2));
    come_call_finalizer(sType_finalize, __dec_obj40,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_value->var=((void*)0);
    append_object_to_right_values(come_value,(struct sType*)come_increment_ref_count(type2_2),info,0,((void*)0),((void*)0),((void*)0));
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value));
    add_come_last_code(info,"%s",come_value->c_value);
    __result_obj__0 = 1;
    come_call_finalizer(buffer_finalize, value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, any_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type2_2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__0;
}

static void sBufferNode_finalize(struct sBufferNode* self)
{
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->value!=((void*)0)) {
        come_call_finalizer(buffer_finalize, self->value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static struct sFun* map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char* key)
{
    struct sFun* default_value;
    struct sFun* __result_obj__0;
    unsigned int hash;
    unsigned int it;
    memset(&default_value,0,sizeof(struct sFun*));
    if(self==((void*)0)) {
        __result_obj__0 = (struct sFun*)come_increment_ref_count(default_value);
        come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(1) {
        if(self->item_existance[it]) {
            if(string_equals(self->keys[it],key)) {
                __result_obj__0 = (struct sFun*)come_increment_ref_count(self->items[it]);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
            it++;
            if(it>=self->size) {
                it=0;
            }
            else if(it==hash) {
                __result_obj__0 = (struct sFun*)come_increment_ref_count(default_value);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
        }
        else {
            __result_obj__0 = (struct sFun*)come_increment_ref_count(default_value);
            come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__0;
        }
    }
    __result_obj__0 = (struct sFun*)come_increment_ref_count(default_value);
    come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static void sFun_finalize(struct sFun* self)
{
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mResultType, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamNames, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mLambdaType, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mAllVar!=((void*)0)) {
        come_call_finalizer(list$1sVar$ph$p_finalize, self->mAllVar, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mBlock!=((void*)0)) {
        come_call_finalizer(sBlock_finalize, self->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mTextBlock!=((void*)0)) {
        (self->mTextBlock = come_decrement_ref_count(self->mTextBlock, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->mTextBlockSName!=((void*)0)) {
        (self->mTextBlockSName = come_decrement_ref_count(self->mTextBlockSName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->mSource!=((void*)0)) {
        come_call_finalizer(buffer_finalize, self->mSource, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        come_call_finalizer(buffer_finalize, self->mSourceHead, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        come_call_finalizer(buffer_finalize, self->mSourceHead2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
        come_call_finalizer(buffer_finalize, self->mSourceDefer, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->mFunAttribute!=((void*)0)) {
        (self->mFunAttribute = come_decrement_ref_count(self->mFunAttribute, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

static void list$1sVar$ph$p_finalize(struct list$1sVar$ph* self)
{
    struct list_item$1sVar$ph* it;
    struct list_item$1sVar$ph* prev_it;
    if(self==((void*)0)) {
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sVar$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sVar$ph$p_finalize(struct list_item$1sVar$ph* self)
{
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer(sVar_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void sVar_finalize(struct sVar* self)
{
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        (self->mCValueName = come_decrement_ref_count(self->mCValueName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->mType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mType, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mFunName!=((void*)0)) {
        (self->mFunName = come_decrement_ref_count(self->mFunName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

static void sBlock_finalize(struct sBlock* self)
{
    if(self!=((void*)0)&&self->mNodes!=((void*)0)) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mNodes, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        come_call_finalizer(sVarTable_finalize, self->mVarTable, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static struct sFun* map$2char$phsFun$ph_operator_load_element(struct map$2char$phsFun$ph* self, char* key)
{
    struct sFun* default_value;
    struct sFun* __result_obj__0;
    unsigned int hash;
    unsigned int it;
    memset(&default_value,0,sizeof(struct sFun*));
    if(self==((void*)0)) {
        __result_obj__0 = (struct sFun*)come_increment_ref_count(default_value);
        come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(1) {
        if(self->item_existance[it]) {
            if(string_equals(self->keys[it],key)) {
                __result_obj__0 = (struct sFun*)come_increment_ref_count(self->items[it]);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
            it++;
            if(it>=self->size) {
                it=0;
            }
            else if(it==hash) {
                __result_obj__0 = (struct sFun*)come_increment_ref_count(default_value);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
        }
        else {
            __result_obj__0 = (struct sFun*)come_increment_ref_count(default_value);
            come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__0;
        }
    }
    __result_obj__0 = (struct sFun*)come_increment_ref_count(default_value);
    come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct sType* sType_clone(struct sType* self)
{
    struct sType* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sType* result;
    struct sType* __dec_obj9;
    struct sType* __dec_obj10;
    struct list$1sType$ph* __dec_obj14;
    struct sType* __dec_obj15;
    struct sNode* __dec_obj16;
    struct sNode* __dec_obj17;
    char* __dec_obj18;
    char* __dec_obj19;
    char* __dec_obj20;
    char* __dec_obj21;
    char* __dec_obj22;
    char* __dec_obj23;
    struct list$1sNode$ph* __dec_obj27;
    struct list$1sNode$ph* __dec_obj28;
    struct list$1int$* __dec_obj29;
    struct list$1int$* __dec_obj30;
    struct sType* __dec_obj31;
    char* __dec_obj32;
    struct list$1sType$ph* __dec_obj33;
    struct list$1char$ph* __dec_obj37;
    struct sType* __dec_obj38;
    struct sNode* __dec_obj39;
    if(self==(void*)0) {
        __result_obj__0 = (struct sType*)come_increment_ref_count((void*)0);
        come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    result=(struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType*"));
    if(self!=((void*)0)) {
        result->mClass=self->mClass;
    }
    if(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj9=result->mOriginalLoadVarType,
        result->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(sType_clone(self->mOriginalLoadVarType));
        come_call_finalizer(sType_finalize, __dec_obj9,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj10=result->mChannelType,
        result->mChannelType=(struct sType*)come_increment_ref_count(sType_clone(self->mChannelType));
        come_call_finalizer(sType_finalize, __dec_obj10,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj14=result->mGenericsTypes,
        result->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mGenericsTypes));
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj14,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj15=result->mNoSolvedGenericsType,
        result->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(sType_clone(self->mNoSolvedGenericsType));
        come_call_finalizer(sType_finalize, __dec_obj15,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj16=result->mSizeNum,
        result->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        (__dec_obj16 ? __dec_obj16 = come_decrement_ref_count(__dec_obj16, ((struct sNode*)__dec_obj16)->finalize, ((struct sNode*)__dec_obj16)->_protocol_obj, 0,0, (void*)0) :0);
    }
    if(self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj17=result->mAlignas,
        result->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        (__dec_obj17 ? __dec_obj17 = come_decrement_ref_count(__dec_obj17, ((struct sNode*)__dec_obj17)->finalize, ((struct sNode*)__dec_obj17)->_protocol_obj, 0,0, (void*)0) :0);
    }
    if(self!=((void*)0)) {
        result->mAlignasDouble=self->mAlignasDouble;
    }
    if(self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj18=result->mTupleName,
        result->mTupleName=(char*)come_increment_ref_count((char*)come_memdup(self->mTupleName, "sType_clone", 12, "char*"));
        __dec_obj18 = come_decrement_ref_count(__dec_obj18, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj19=result->mAttribute,
        result->mAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mAttribute, "sType_clone", 13, "char*"));
        __dec_obj19 = come_decrement_ref_count(__dec_obj19, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->mVarAttribute!=((void*)0)) {
        __dec_obj20=result->mVarAttribute,
        result->mVarAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mVarAttribute, "sType_clone", 14, "char*"));
        __dec_obj20 = come_decrement_ref_count(__dec_obj20, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result->mAllocaValue=self->mAllocaValue;
    }
    if(self!=((void*)0)) {
        result->mUnsigned=self->mUnsigned;
    }
    if(self!=((void*)0)) {
        result->mShort=self->mShort;
    }
    if(self!=((void*)0)) {
        result->mLong=self->mLong;
    }
    if(self!=((void*)0)) {
        result->mLongLong=self->mLongLong;
    }
    if(self!=((void*)0)) {
        result->mConstant=self->mConstant;
    }
    if(self!=((void*)0)) {
        result->mAtomic=self->mAtomic;
    }
    if(self!=((void*)0)) {
        result->mThreadLocal=self->mThreadLocal;
    }
    if(self!=((void*)0)) {
        result->mComplex=self->mComplex;
    }
    if(self!=((void*)0)) {
        result->mRegister=self->mRegister;
    }
    if(self!=((void*)0)) {
        result->mVolatile=self->mVolatile;
    }
    if(self!=((void*)0)) {
        result->mStatic=self->mStatic;
    }
    if(self!=((void*)0)) {
        result->mUniq=self->mUniq;
    }
    if(self!=((void*)0)) {
        result->mRecord=self->mRecord;
    }
    if(self!=((void*)0)) {
        result->mExtern=self->mExtern;
    }
    if(self!=((void*)0)) {
        result->mRestrict=self->mRestrict;
    }
    if(self!=((void*)0)) {
        result->mHeap=self->mHeap;
    }
    if(self!=((void*)0)) {
        result->mChannel=self->mChannel;
    }
    if(self!=((void*)0)) {
        result->mDefferRightValue=self->mDefferRightValue;
    }
    if(self!=((void*)0)) {
        result->mNoHeap=self->mNoHeap;
    }
    if(self!=((void*)0)) {
        result->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(self!=((void*)0)) {
        result->mException=self->mException;
    }
    if(self!=((void*)0)) {
        result->mTypeName=self->mTypeName;
    }
    if(self!=((void*)0)) {
        result->mAnonymous=self->mAnonymous;
    }
    if(self!=((void*)0)&&self->mAnonymousName!=((void*)0)) {
        __dec_obj21=result->mAnonymousName,
        result->mAnonymousName=(char*)come_increment_ref_count((char*)come_memdup(self->mAnonymousName, "sType_clone", 39, "char*"));
        __dec_obj21 = come_decrement_ref_count(__dec_obj21, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result->mInnerStruct=self->mInnerStruct;
    }
    if(self!=((void*)0)&&self->mInnerStructName!=((void*)0)) {
        __dec_obj22=result->mInnerStructName,
        result->mInnerStructName=(char*)come_increment_ref_count((char*)come_memdup(self->mInnerStructName, "sType_clone", 41, "char*"));
        __dec_obj22 = come_decrement_ref_count(__dec_obj22, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result->mAnonymousVarName=self->mAnonymousVarName;
    }
    if(self!=((void*)0)) {
        result->mInline=self->mInline;
    }
    if(self!=((void*)0)) {
        result->mNullValue=self->mNullValue;
    }
    if(self!=((void*)0)) {
        result->mGuardValue=self->mGuardValue;
    }
    if(self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj23=result->mAsmName,
        result->mAsmName=(char*)come_increment_ref_count((char*)come_memdup(self->mAsmName, "sType_clone", 46, "char*"));
        __dec_obj23 = come_decrement_ref_count(__dec_obj23, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result->mTypedef=self->mTypedef;
    }
    if(self!=((void*)0)) {
        result->mMultipleTypes=self->mMultipleTypes;
    }
    if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj27=result->mArrayNum,
        result->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mArrayNum));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj27,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mVarNameArrayNum!=((void*)0)) {
        __dec_obj28=result->mVarNameArrayNum,
        result->mVarNameArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mVarNameArrayNum));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj28,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mArrayStatic!=((void*)0)) {
        __dec_obj29=result->mArrayStatic,
        result->mArrayStatic=(struct list$1int$*)come_increment_ref_count(list$1int$$p_clone(self->mArrayStatic));
        come_call_finalizer(list$1int$_finalize, __dec_obj29,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mArrayRestrict!=((void*)0)) {
        __dec_obj30=result->mArrayRestrict,
        result->mArrayRestrict=(struct list$1int$*)come_increment_ref_count(list$1int$$p_clone(self->mArrayRestrict));
        come_call_finalizer(list$1int$_finalize, __dec_obj30,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)) {
        result->mPointerNum=self->mPointerNum;
    }
    if(self!=((void*)0)) {
        result->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(self!=((void*)0)) {
        result->mArrayPointerNum=self->mArrayPointerNum;
    }
    if(self!=((void*)0)) {
        result->mPointerParen=self->mPointerParen;
    }
    if(self!=((void*)0)&&self->mTypedefOriginalType!=((void*)0)) {
        __dec_obj31=result->mTypedefOriginalType,
        result->mTypedefOriginalType=(struct sType*)come_increment_ref_count(sType_clone(self->mTypedefOriginalType));
        come_call_finalizer(sType_finalize, __dec_obj31,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj32=result->mOriginalTypeName,
        result->mOriginalTypeName=(char*)come_increment_ref_count((char*)come_memdup(self->mOriginalTypeName, "sType_clone", 58, "char*"));
        __dec_obj32 = come_decrement_ref_count(__dec_obj32, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result->mOriginalTypePointerNum=self->mOriginalTypePointerNum;
    }
    if(self!=((void*)0)) {
        result->mOriginalTypePointerHeap=self->mOriginalTypePointerHeap;
    }
    if(self!=((void*)0)) {
        result->mArrayPointerType=self->mArrayPointerType;
    }
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj33=result->mParamTypes,
        result->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mParamTypes));
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj33,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj37=result->mParamNames,
        result->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->mParamNames));
        come_call_finalizer(list$1char$ph_finalize, __dec_obj37,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj38=result->mResultType,
        result->mResultType=(struct sType*)come_increment_ref_count(sType_clone(self->mResultType));
        come_call_finalizer(sType_finalize, __dec_obj38,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)) {
        result->mVarArgs=self->mVarArgs;
    }
    if(self!=((void*)0)&&self->mTypeOfNode!=((void*)0)) {
        __dec_obj39=result->mTypeOfNode,
        result->mTypeOfNode=(struct sNode*)come_increment_ref_count(sNode_clone(self->mTypeOfNode));
        (__dec_obj39 ? __dec_obj39 = come_decrement_ref_count(__dec_obj39, ((struct sNode*)__dec_obj39)->finalize, ((struct sNode*)__dec_obj39)->_protocol_obj, 0,0, (void*)0) :0);
    }
    __result_obj__0 = (struct sType*)come_increment_ref_count(result);
    come_call_finalizer(sType_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct list$1sType$ph* list$1sType$ph$p_clone(struct list$1sType$ph* self)
{
    struct list$1sType$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1sType$ph* result;
    struct list_item$1sType$ph* it;
    if(self==((void*)0)) {
        __result_obj__0 = (struct list$1sType$ph*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    result=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "./neo-c.h", 1071, "struct list$1sType$ph*"))));
    it=self->head;
    while(it!=((void*)0)) {
        if(1) {
            list$1sType$ph_add(result,(struct sType*)come_increment_ref_count(sType_clone(it->item)));
        }
        else {
            list$1sType$ph_add(result,(struct sType*)come_increment_ref_count(sType_clone(it->item)));
        }
        it=it->next;
    }
    __result_obj__0 = (struct list$1sType$ph*)come_increment_ref_count(result);
    come_call_finalizer(list$1sType$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self)
{
    struct list$1sType$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__0 = (struct list$1sType$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1sType$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType* item)
{
    struct list$1sType$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1sType$ph* litem;
    struct sType* __dec_obj11;
    struct list_item$1sType$ph* litem_3;
    struct sType* __dec_obj12;
    struct list_item$1sType$ph* litem_4;
    struct sType* __dec_obj13;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./neo-c.h", 1092, "struct list_item$1sType$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj11=litem->item,
        litem->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj11,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        litem_3=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./neo-c.h", 1102, "struct list_item$1sType$ph*"))));
        litem_3->prev=self->head;
        litem_3->next=((void*)0);
        __dec_obj12=litem_3->item,
        litem_3->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj12,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem_3;
        self->head->next=litem_3;
    }
    else {
        litem_4=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./neo-c.h", 1112, "struct list_item$1sType$ph*"))));
        litem_4->prev=self->tail;
        litem_4->next=((void*)0);
        __dec_obj13=litem_4->item,
        litem_4->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj13,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail->next=litem_4;
        self->tail=litem_4;
    }
    self->len++;
    __result_obj__0 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__0;
}

static void list$1sType$ph_finalize(struct list$1sType$ph* self)
{
    struct list_item$1sType$ph* it;
    struct list_item$1sType$ph* prev_it;
    if(self==((void*)0)) {
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static struct sNode* sNode_clone(struct sNode* self)
{
    struct sNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sNode* result;
    if(self==(void*)0) {
        __result_obj__0 = (struct sNode*)come_increment_ref_count((void*)0);
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__0;
    }
    result=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc_v2(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*"));
    if(self!=((void*)0)&&self->clone!=((void*)0)) {
        result->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(self!=((void*)0)) {
        result->finalize=self->finalize;
    }
    if(self!=((void*)0)) {
        result->clone=self->clone;
    }
    if(self!=((void*)0)) {
        result->compile=self->compile;
    }
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)) {
        result->sname=self->sname;
    }
    if(self!=((void*)0)) {
        result->terminated=self->terminated;
    }
    if(self!=((void*)0)) {
        result->kind=self->kind;
    }
    if(self!=((void*)0)) {
        result->no_mutex=self->no_mutex;
    }
    __result_obj__0 = (struct sNode*)come_increment_ref_count(result);
    ((result) ? result = come_decrement_ref_count(result, ((struct sNode*)result)->finalize, ((struct sNode*)result)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    return __result_obj__0;
}

static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self)
{
    struct list$1sNode$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1sNode$ph* result;
    struct list_item$1sNode$ph* it;
    if(self==((void*)0)) {
        __result_obj__0 = (struct list$1sNode$ph*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    result=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "./neo-c.h", 1071, "struct list$1sNode$ph*"))));
    it=self->head;
    while(it!=((void*)0)) {
        if(1) {
            list$1sNode$ph_add(result,(struct sNode*)come_increment_ref_count(sNode_clone(it->item)));
        }
        else {
            list$1sNode$ph_add(result,(struct sNode*)come_increment_ref_count(sNode_clone(it->item)));
        }
        it=it->next;
    }
    __result_obj__0 = (struct list$1sNode$ph*)come_increment_ref_count(result);
    come_call_finalizer(list$1sNode$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self)
{
    struct list$1sNode$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__0 = (struct list$1sNode$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1sNode$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item)
{
    struct list$1sNode$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1sNode$ph* litem;
    struct sNode* __dec_obj24;
    struct list_item$1sNode$ph* litem_5;
    struct sNode* __dec_obj25;
    struct list_item$1sNode$ph* litem_6;
    struct sNode* __dec_obj26;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./neo-c.h", 1092, "struct list_item$1sNode$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj24=litem->item,
        litem->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj24 ? __dec_obj24 = come_decrement_ref_count(__dec_obj24, ((struct sNode*)__dec_obj24)->finalize, ((struct sNode*)__dec_obj24)->_protocol_obj, 0,0, (void*)0) :0);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        litem_5=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./neo-c.h", 1102, "struct list_item$1sNode$ph*"))));
        litem_5->prev=self->head;
        litem_5->next=((void*)0);
        __dec_obj25=litem_5->item,
        litem_5->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj25 ? __dec_obj25 = come_decrement_ref_count(__dec_obj25, ((struct sNode*)__dec_obj25)->finalize, ((struct sNode*)__dec_obj25)->_protocol_obj, 0,0, (void*)0) :0);
        self->tail=litem_5;
        self->head->next=litem_5;
    }
    else {
        litem_6=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./neo-c.h", 1112, "struct list_item$1sNode$ph*"))));
        litem_6->prev=self->tail;
        litem_6->next=((void*)0);
        __dec_obj26=litem_6->item,
        litem_6->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj26 ? __dec_obj26 = come_decrement_ref_count(__dec_obj26, ((struct sNode*)__dec_obj26)->finalize, ((struct sNode*)__dec_obj26)->_protocol_obj, 0,0, (void*)0) :0);
        self->tail->next=litem_6;
        self->tail=litem_6;
    }
    self->len++;
    __result_obj__0 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    return __result_obj__0;
}

static void list$1sNode$ph_finalize(struct list$1sNode$ph* self)
{
    struct list_item$1sNode$ph* it;
    struct list_item$1sNode$ph* prev_it;
    if(self==((void*)0)) {
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static struct list$1int$* list$1int$$p_clone(struct list$1int$* self)
{
    struct list$1int$* __result_obj__0;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1int$* result;
    struct list_item$1int$* it;
    if(self==((void*)0)) {
        __result_obj__0 = (struct list$1int$*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    result=(struct list$1int$*)come_increment_ref_count(list$1int$_initialize((struct list$1int$*)come_increment_ref_count((struct list$1int$*)come_calloc_v2(1, sizeof(struct list$1int$)*(1), "./neo-c.h", 1071, "struct list$1int$*"))));
    it=self->head;
    while(it!=((void*)0)) {
        if(0) {
            list$1int$_add(result,it->item);
        }
        else {
            list$1int$_add(result,it->item);
        }
        it=it->next;
    }
    __result_obj__0 = (struct list$1int$*)come_increment_ref_count(result);
    come_call_finalizer(list$1int$$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct list$1int$* list$1int$_initialize(struct list$1int$* self)
{
    struct list$1int$* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__0 = (struct list$1int$*)come_increment_ref_count(self);
    come_call_finalizer(list$1int$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct list$1int$* list$1int$_add(struct list$1int$* self, int item)
{
    struct list$1int$* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1int$* litem;
    struct list_item$1int$* litem_7;
    struct list_item$1int$* litem_8;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "./neo-c.h", 1092, "struct list_item$1int$*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        litem->item=item;
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        litem_7=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "./neo-c.h", 1102, "struct list_item$1int$*"))));
        litem_7->prev=self->head;
        litem_7->next=((void*)0);
        litem_7->item=item;
        self->tail=litem_7;
        self->head->next=litem_7;
    }
    else {
        litem_8=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "./neo-c.h", 1112, "struct list_item$1int$*"))));
        litem_8->prev=self->tail;
        litem_8->next=((void*)0);
        litem_8->item=item;
        self->tail->next=litem_8;
        self->tail=litem_8;
    }
    self->len++;
    __result_obj__0 = self;
    return __result_obj__0;
}

static void list$1int$_finalize(struct list$1int$* self)
{
    struct list_item$1int$* it;
    struct list_item$1int$* prev_it;
    if(self==((void*)0)) {
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1int$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self)
{
    struct list$1char$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1char$ph* result;
    struct list_item$1char$ph* it;
    if(self==((void*)0)) {
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    result=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "./neo-c.h", 1071, "struct list$1char$ph*"))));
    it=self->head;
    while(it!=((void*)0)) {
        if(1) {
            list$1char$ph_add(result,(char*)come_increment_ref_count((char*)come_memdup(it->item, "./neo-c.h", 1076, "char*")));
        }
        else {
            list$1char$ph_add(result,(char*)come_increment_ref_count((char*)come_memdup(it->item, "./neo-c.h", 1079, "char*")));
        }
        it=it->next;
    }
    __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(result);
    come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self)
{
    struct list$1char$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char* item)
{
    struct list$1char$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1char$ph* litem;
    char* __dec_obj34;
    struct list_item$1char$ph* litem_9;
    char* __dec_obj35;
    struct list_item$1char$ph* litem_10;
    char* __dec_obj36;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0));
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./neo-c.h", 1092, "struct list_item$1char$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj34=litem->item,
        litem->item=(char*)come_increment_ref_count(item);
        __dec_obj34 = come_decrement_ref_count(__dec_obj34, (void*)0, (void*)0, 0,0, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        litem_9=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./neo-c.h", 1102, "struct list_item$1char$ph*"))));
        litem_9->prev=self->head;
        litem_9->next=((void*)0);
        __dec_obj35=litem_9->item,
        litem_9->item=(char*)come_increment_ref_count(item);
        __dec_obj35 = come_decrement_ref_count(__dec_obj35, (void*)0, (void*)0, 0,0, (void*)0);
        self->tail=litem_9;
        self->head->next=litem_9;
    }
    else {
        litem_10=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./neo-c.h", 1112, "struct list_item$1char$ph*"))));
        litem_10->prev=self->tail;
        litem_10->next=((void*)0);
        __dec_obj36=litem_10->item,
        litem_10->item=(char*)come_increment_ref_count(item);
        __dec_obj36 = come_decrement_ref_count(__dec_obj36, (void*)0, (void*)0, 0,0, (void*)0);
        self->tail->next=litem_10;
        self->tail=litem_10;
    }
    self->len++;
    __result_obj__0 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0));
    return __result_obj__0;
}

static void list$1char$ph_finalize(struct list$1char$ph* self)
{
    struct list_item$1char$ph* it;
    struct list_item$1char$ph* prev_it;
    if(self==((void*)0)) {
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

struct sSStringNode* sSStringNode_initialize(struct sSStringNode* self, char* value, struct list$1sNode$ph* exps, int sline, struct sInfo* info)
{
    void* __right_value0 = (void*)0;
    char* __dec_obj41;
    struct list$1sNode$ph* __dec_obj42;
    struct sSStringNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj41=self->value,
    self->value=(char*)come_increment_ref_count(__builtin_string(value));
    __dec_obj41 = come_decrement_ref_count(__dec_obj41, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj42=self->exps,
    self->exps=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(exps));
    come_call_finalizer(list$1sNode$ph_finalize, __dec_obj42,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __result_obj__0 = (struct sSStringNode*)come_increment_ref_count(self);
    come_call_finalizer(sSStringNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    (value = come_decrement_ref_count(value, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(list$1sNode$ph$p_finalize, exps, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sSStringNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char* sSStringNode_kind(struct sSStringNode* self)
{
    void* __right_value0 = (void*)0;
    char* __result_obj__0;
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string("sSStringNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool sSStringNode_compile(struct sSStringNode* self, struct sInfo* info)
{
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct CVALUE* come_value;
    struct buffer* buf;
    struct list$1sNode$ph* o2_saved;
    struct sNode* it;
    struct sNode* obj;
    struct list$1tuple2$2char$phsNode$ph$ph* params;
    void* __right_value2 = (void*)0;
    void* __right_value3 = (void*)0;
    struct sNode* node;
    _Bool Value;
    _Bool __result_obj__0;
    struct CVALUE* come_value_15;
    struct sType* __exception_result_var_b12;
    struct sType* __exception_result_var_b13;
    struct sType* __exception_result_var_b14;
    struct sType* type2;
    char* __dec_obj48;
    struct sType* __dec_obj49;
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "06str.c", 105, "struct CVALUE*"))));
    buf=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "06str.c", 107, "struct buffer*"))));
    buffer_append_str(buf,"xsprintf(\"");
    buffer_append_str(buf,self->value);
    buffer_append_str(buf,"\"");
    if(list$1sNode$ph_length(self->exps)>0) {
        for(o2_saved=(struct list$1sNode$ph*)come_increment_ref_count(self->exps),it=list$1sNode$ph_begin(o2_saved);!list$1sNode$ph_end(o2_saved);it=list$1sNode$ph_next(o2_saved)){
            obj=(struct sNode*)come_increment_ref_count(sNode_clone(it));
            params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "06str.c", 117, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
            list$1tuple2$2char$phsNode$ph$ph_add(params,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 118, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(sNode_clone(it)))));
            node=(struct sNode*)come_increment_ref_count(create_method_call("to_string",(struct sNode*)come_increment_ref_count(obj),(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(params),((void*)0),0,((void*)0),info));
            Value=node_compile(node,info);
            if(!Value) {
                __result_obj__0 = 0;
                ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                come_call_finalizer(list$1sNode$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result_obj__0;
            }
            else {
            }
            come_value_15=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            buffer_append_str(buf,",");
            buffer_append_str(buf,come_value_15->c_value);
            ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            come_call_finalizer(CVALUE_finalize, come_value_15, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer(list$1sNode$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    buffer_append_str(buf,")");
    type2=(struct sType*)come_increment_ref_count((come_push_stackframe("06str.c", 135, 13),__exception_result_var_b14=(come_push_stackframe("06str.c", 135, 11),__exception_result_var_b12=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "06str.c", 135, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char*")),0,info,0), come_pop_stackframe(), __exception_result_var_b12), come_pop_stackframe(), __exception_result_var_b14));
    type2->mHeap=1;
    __dec_obj48=come_value->c_value,
    come_value->c_value=(char*)come_increment_ref_count(buffer_to_string(buf));
    __dec_obj48 = come_decrement_ref_count(__dec_obj48, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj49=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count(sType_clone(type2));
    come_call_finalizer(sType_finalize, __dec_obj49,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_value->var=((void*)0);
    append_object_to_right_values(come_value,(struct sType*)come_increment_ref_count(type2),info,0,((void*)0),((void*)0),((void*)0));
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value));
    add_come_last_code(info,"%s",come_value->c_value);
    __result_obj__0 = 1;
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__0;
}

static void sSStringNode_finalize(struct sSStringNode* self)
{
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->value!=((void*)0)) {
        (self->value = come_decrement_ref_count(self->value, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->exps!=((void*)0)) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->exps, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static int list$1sNode$ph_length(struct list$1sNode$ph* self)
{
    if(self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sNode* list$1sNode$ph_begin(struct list$1sNode$ph* self)
{
    struct sNode* result;
    struct sNode* __result_obj__0;
    struct sNode* result_11;
    if(self==((void*)0)) {
        memset(&result,0,sizeof(struct sNode*));
        __result_obj__0 = result;
        return __result_obj__0;
    }
    self->it=self->head;
    if(self->it) {
        __result_obj__0 = self->it->item;
        return __result_obj__0;
    }
    memset(&result_11,0,sizeof(struct sNode*));
    __result_obj__0 = result_11;
    return __result_obj__0;
}

static _Bool list$1sNode$ph_end(struct list$1sNode$ph* self)
{
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNode$ph_next(struct list$1sNode$ph* self)
{
    struct sNode* result;
    struct sNode* __result_obj__0;
    struct sNode* result_12;
    if(self==((void*)0)||self->it==((void*)0)) {
        memset(&result,0,sizeof(struct sNode*));
        __result_obj__0 = result;
        return __result_obj__0;
    }
    self->it=self->it->next;
    if(self->it) {
        __result_obj__0 = self->it->item;
        return __result_obj__0;
    }
    memset(&result_12,0,sizeof(struct sNode*));
    __result_obj__0 = result_12;
    return __result_obj__0;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_initialize(struct list$1tuple2$2char$phsNode$ph$ph* self)
{
    struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__0 = (struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static void list$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self)
{
    struct list_item$1tuple2$2char$phsNode$ph$ph* it;
    struct list_item$1tuple2$2char$phsNode$ph$ph* prev_it;
    if(self==((void*)0)) {
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1tuple2$2char$phsNode$ph$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsNode$ph$ph* self)
{
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void tuple2$2char$phsNode$ph$p_finalize(struct tuple2$2char$phsNode$ph* self)
{
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        ((self->v2) ? self->v2 = come_decrement_ref_count(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_add(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item)
{
    struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1tuple2$2char$phsNode$ph$ph* litem;
    struct tuple2$2char$phsNode$ph* __dec_obj43;
    struct list_item$1tuple2$2char$phsNode$ph$ph* litem_13;
    struct tuple2$2char$phsNode$ph* __dec_obj44;
    struct list_item$1tuple2$2char$phsNode$ph$ph* litem_14;
    struct tuple2$2char$phsNode$ph* __dec_obj45;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./neo-c.h", 1092, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj43=litem->item,
        litem->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj43,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        litem_13=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./neo-c.h", 1102, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_13->prev=self->head;
        litem_13->next=((void*)0);
        __dec_obj44=litem_13->item,
        litem_13->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj44,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem_13;
        self->head->next=litem_13;
    }
    else {
        litem_14=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./neo-c.h", 1112, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_14->prev=self->tail;
        litem_14->next=((void*)0);
        __dec_obj45=litem_14->item,
        litem_14->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj45,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail->next=litem_14;
        self->tail=litem_14;
    }
    self->len++;
    __result_obj__0 = self;
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__0;
}

static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_initialize(struct tuple2$2char$phsNode$ph* self, char* v1, struct sNode* v2)
{
    char* __dec_obj46;
    struct sNode* __dec_obj47;
    struct tuple2$2char$phsNode$ph* __result_obj__0;
    __dec_obj46=self->v1,
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj46 = come_decrement_ref_count(__dec_obj46, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj47=self->v2,
    self->v2=(struct sNode*)come_increment_ref_count(v2);
    (__dec_obj47 ? __dec_obj47 = come_decrement_ref_count(__dec_obj47, ((struct sNode*)__dec_obj47)->finalize, ((struct sNode*)__dec_obj47)->_protocol_obj, 0,0, (void*)0) :0);
    __result_obj__0 = (struct tuple2$2char$phsNode$ph*)come_increment_ref_count(self);
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 0, (void*)0));
    ((v2) ? v2 = come_decrement_ref_count(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

struct sCharNode* sCharNode_initialize(struct sCharNode* self, int value, struct sInfo* info)
{
    void* __right_value0 = (void*)0;
    struct sCharNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    self->value=value;
    __result_obj__0 = (struct sCharNode*)come_increment_ref_count(self);
    come_call_finalizer(sCharNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sCharNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char* sCharNode_kind(struct sCharNode* self)
{
    void* __right_value0 = (void*)0;
    char* __result_obj__0;
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string("sCharNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool sCharNode_compile(struct sCharNode* self, struct sInfo* info)
{
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct CVALUE* come_value;
    char* __dec_obj50;
    void* __right_value2 = (void*)0;
    struct sType* __exception_result_var_b15;
    struct sType* __exception_result_var_b16;
    struct sType* __dec_obj51;
    _Bool __result_obj__0;
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "06str.c", 168, "struct CVALUE*"))));
    __dec_obj50=come_value->c_value,
    come_value->c_value=(char*)come_increment_ref_count(xsprintf("%d",self->value));
    __dec_obj50 = come_decrement_ref_count(__dec_obj50, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj51=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count((come_push_stackframe("06str.c", 171, 14),__exception_result_var_b15=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "06str.c", 171, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char")),0,info,0), come_pop_stackframe(), __exception_result_var_b15));
    come_call_finalizer(sType_finalize, __dec_obj51,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_value->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value));
    add_come_last_code(info,"%s",come_value->c_value);
    __result_obj__0 = 1;
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__0;
}

static void sCharNode_finalize(struct sCharNode* self)
{
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

struct sWCharNode* sWCharNode_initialize(struct sWCharNode* self, int value, _Bool quote, struct sInfo* info)
{
    void* __right_value0 = (void*)0;
    struct sWCharNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    self->value=value;
    self->quote=quote;
    __result_obj__0 = (struct sWCharNode*)come_increment_ref_count(self);
    come_call_finalizer(sWCharNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sWCharNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char* sWCharNode_kind(struct sWCharNode* self)
{
    void* __right_value0 = (void*)0;
    char* __result_obj__0;
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string("sWCharNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool sWCharNode_compile(struct sWCharNode* self, struct sInfo* info)
{
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct CVALUE* come_value;
    char* __dec_obj52;
    char* __dec_obj53;
    void* __right_value2 = (void*)0;
    struct sType* __exception_result_var_b17;
    struct sType* __exception_result_var_b18;
    struct sType* __dec_obj54;
    _Bool __result_obj__0;
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "06str.c", 199, "struct CVALUE*"))));
    if(self->quote) {
        __dec_obj52=come_value->c_value,
        come_value->c_value=(char*)come_increment_ref_count(xsprintf("L'\\%o'",self->value));
        __dec_obj52 = come_decrement_ref_count(__dec_obj52, (void*)0, (void*)0, 0,0, (void*)0);
    }
    else {
        __dec_obj53=come_value->c_value,
        come_value->c_value=(char*)come_increment_ref_count(xsprintf("L'%lc'",self->value));
        __dec_obj53 = come_decrement_ref_count(__dec_obj53, (void*)0, (void*)0, 0,0, (void*)0);
    }
    __dec_obj54=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count((come_push_stackframe("06str.c", 207, 16),__exception_result_var_b17=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "06str.c", 207, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),0,info,0), come_pop_stackframe(), __exception_result_var_b17));
    come_call_finalizer(sType_finalize, __dec_obj54,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_value->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value));
    add_come_last_code(info,"%s",come_value->c_value);
    __result_obj__0 = 1;
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__0;
}

static void sWCharNode_finalize(struct sWCharNode* self)
{
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

struct sWStringNode* sWStringNode_initialize(struct sWStringNode* self, int* value, int sline, struct sInfo* info)
{
    void* __right_value0 = (void*)0;
    int* __dec_obj55;
    struct sWStringNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj55=self->value,
    self->value=(int*)come_increment_ref_count(value);
    __dec_obj55 = come_decrement_ref_count(__dec_obj55, (void*)0, (void*)0, 0,0, (void*)0);
    __result_obj__0 = (struct sWStringNode*)come_increment_ref_count(self);
    come_call_finalizer(sWStringNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    (value = come_decrement_ref_count(value, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sWStringNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char* sWStringNode_kind(struct sWStringNode* self)
{
    void* __right_value0 = (void*)0;
    char* __result_obj__0;
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string("sWStringNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool sWStringNode_compile(struct sWStringNode* self, struct sInfo* info)
{
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct CVALUE* come_value;
    char* __dec_obj56;
    void* __right_value2 = (void*)0;
    struct sType* __exception_result_var_b19;
    struct sType* __exception_result_var_b20;
    struct sType* __dec_obj57;
    _Bool __result_obj__0;
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "06str.c", 234, "struct CVALUE*"))));
    __dec_obj56=come_value->c_value,
    come_value->c_value=(char*)come_increment_ref_count(xsprintf("L\"%ls\"",self->value));
    __dec_obj56 = come_decrement_ref_count(__dec_obj56, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj57=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count((come_push_stackframe("06str.c", 237, 18),__exception_result_var_b19=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "06str.c", 237, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int*")),0,info,0), come_pop_stackframe(), __exception_result_var_b19));
    come_call_finalizer(sType_finalize, __dec_obj57,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_value->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value));
    add_come_last_code(info,"%s",come_value->c_value);
    __result_obj__0 = 1;
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__0;
}

static void sWStringNode_finalize(struct sWStringNode* self)
{
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->value!=((void*)0)) {
        (self->value = come_decrement_ref_count(self->value, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

struct sListNode* sListNode_initialize(struct sListNode* self, struct list$1sNode$ph* list_elements, struct sInfo* info)
{
    void* __right_value0 = (void*)0;
    struct list$1sNode$ph* __dec_obj58;
    struct sListNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj58=self->list_elements,
    self->list_elements=(struct list$1sNode$ph*)come_increment_ref_count(list_elements);
    come_call_finalizer(list$1sNode$ph_finalize, __dec_obj58,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __result_obj__0 = (struct sListNode*)come_increment_ref_count(self);
    come_call_finalizer(sListNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, list_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sListNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char* sListNode_kind(struct sListNode* self)
{
    void* __right_value0 = (void*)0;
    char* __result_obj__0;
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string("sListNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool sListNode_compile(struct sListNode* self, struct sInfo* info)
{
    struct list$1sNode$ph* list_elements;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1CVALUE$ph* params;
    struct sType* list_element_type;
    int n;
    struct list$1sNode$ph* o2_saved;
    struct sNode* it;
    _Bool Value;
    _Bool __result_obj__0;
    struct CVALUE* come_value;
    struct sType* __dec_obj59;
    struct sType* type_values;
    char* var_name;
    struct sVar* var_;
    struct buffer* source;
    int i;
    struct list$1CVALUE$ph* o2_saved_18;
    struct CVALUE* it_20;
    void* __right_value2 = (void*)0;
    struct sType* __exception_result_var_b21;
    struct sType* __exception_result_var_b22;
    struct sType* __exception_result_var_b23;
    struct sType* list_type;
    struct sType* obj_type;
    struct tuple2$2char$phsGenericsFun$p* multiple_assign_var1
;    char* name=0;
    struct sGenericsFun* generics_fun=0;
    char* generics_fun_name;
    struct sFun* fun;
    char* __dec_obj66;
    struct sType* result_type;
    struct sType* type;
    struct CVALUE* obj_value;
    struct buffer* num_string;
    struct sType* type2;
    char* type_name;
    struct sType* any_type;
    _Bool _conditional_value_X0;
    char* __dec_obj67;
    char* __dec_obj68;
    struct sType* type3;
    struct sType* __dec_obj69;
    struct list$1CVALUE$ph* come_params;
    struct CVALUE* come_value2;
    char* __dec_obj70;
    struct sType* __dec_obj71;
    struct CVALUE* come_value3;
    char* __dec_obj72;
    struct sType* __dec_obj73;
    int j;
    struct list$1CVALUE$ph* o2_saved_28;
    struct CVALUE* it_29;
    struct CVALUE* come_value4;
    char* __dec_obj74;
    struct sType* __dec_obj75;
    list_elements=self->list_elements;
    params=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "06str.c", 266, "struct list$1CVALUE$ph*"))));
    list_element_type=((void*)0);
    n=0;
    for(o2_saved=list_elements,it=list$1sNode$ph_begin(o2_saved);!list$1sNode$ph_end(o2_saved);it=list$1sNode$ph_next(o2_saved)){
        Value=node_compile(it,info);
        if(!Value) {
            __result_obj__0 = 0;
            come_call_finalizer(list$1CVALUE$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, list_element_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result_obj__0;
        }
        else {
        }
        come_value=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        if(list_element_type) {
            check_assign_type(((char*)(__right_value0=xsprintf("invalid list element type"))),list_element_type,come_value->type,come_value,0,1,1,info);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        list$1CVALUE$ph_push_back(params,(struct CVALUE*)come_increment_ref_count(come_value));
        if(list_element_type) {
            if(list_element_type->mHeap!=come_value->type->mHeap) {
                err_msg(info,"List element type");
                exit(2);
            }
            else {
                check_assign_type(((char*)(__right_value0=xsprintf("List element type"))),list_element_type,come_value->type,come_value,0,1,1,info);
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            }
        }
        __dec_obj59=list_element_type,
        list_element_type=(struct sType*)come_increment_ref_count(sType_clone(come_value->type));
        come_call_finalizer(sType_finalize, __dec_obj59,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        n++;
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    type_values=(struct sType*)come_increment_ref_count(sType_clone(list_element_type));
    list$1sNode$ph_push_back(type_values->mArrayNum,(struct sNode*)come_increment_ref_count(create_int_node((char*)come_increment_ref_count(int_to_string(list$1CVALUE$ph_length(params))),info)));
    type_values->mHeap=0;
    static int list_value_num=0;
    var_name=(char*)come_increment_ref_count(xsprintf("__list_values%d__",++list_value_num));
    add_variable_to_table(var_name,(struct sType*)come_increment_ref_count(sType_clone(type_values)),info,0,0);
    var_=get_variable_from_table(info->lv_table,var_name);
    add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value0=make_define_var(type_values,var_->mCValueName,info,0,0))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    source=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "06str.c", 310, "struct buffer*"))));
    buffer_append_str(source,"(");
    i=0;
    for(o2_saved_18=(struct list$1CVALUE$ph*)come_increment_ref_count(params),it_20=list$1CVALUE$ph_begin(o2_saved_18);!list$1CVALUE$ph_end(o2_saved_18);it_20=list$1CVALUE$ph_next(o2_saved_18)){
        if(list_element_type->mHeap) {
            buffer_append_format(source,"%s[%d]=%s,\n",var_->mCValueName,i,((struct CVALUE*)(__right_value0=list$1CVALUE$ph_operator_load_element(params,i)))->c_value);
            come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        }
        else {
            buffer_append_format(source,"%s[%d]=%s,\n",var_->mCValueName,i,((struct CVALUE*)(__right_value0=list$1CVALUE$ph_operator_load_element(params,i)))->c_value);
            come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        }
        i++;
    }
    come_call_finalizer(list$1CVALUE$ph$p_finalize, o2_saved_18, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    list_type=(struct sType*)come_increment_ref_count((come_push_stackframe("06str.c", 330, 22),__exception_result_var_b23=(come_push_stackframe("06str.c", 330, 20),__exception_result_var_b21=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "06str.c", 330, "struct sType*")),(char*)come_increment_ref_count(xsprintf("list")),0,info,0), come_pop_stackframe(), __exception_result_var_b21), come_pop_stackframe(), __exception_result_var_b23));
    list$1sType$ph_push_back(list_type->mGenericsTypes,(struct sType*)come_increment_ref_count((((struct sType*)(__right_value0=sType_clone(list_element_type))))));
    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    obj_type=(struct sType*)come_increment_ref_count(sType_clone(list_type));
    char* fun_name="initialize_with_values";
    multiple_assign_var1=((struct tuple2$2char$phsGenericsFun$p*)(__right_value1=make_generics_function(obj_type,(char*)come_increment_ref_count(__builtin_string(fun_name)),info,1)));
    name=(char*)come_increment_ref_count(multiple_assign_var1->v1);
    generics_fun=multiple_assign_var1->v2;
    come_call_finalizer(tuple2$2char$phsGenericsFun$p$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    generics_fun_name=(char*)come_increment_ref_count(name);
    fun=((struct sFun*)(__right_value0=map$2char$phsFun$ph_at(info->funcs,generics_fun_name,((void*)0))));
    come_call_finalizer(sFun_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    if(fun==((void*)0)) {
        __dec_obj66=generics_fun_name,
        generics_fun_name=(char*)come_increment_ref_count(create_method_name(obj_type,0,((char*)(__right_value0=__builtin_string(fun_name))),info,1));
        __dec_obj66 = come_decrement_ref_count(__dec_obj66, (void*)0, (void*)0, 0,0, (void*)0);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        fun=((struct sFun*)(__right_value0=map$2char$phsFun$ph_at(info->funcs,generics_fun_name,((void*)0))));
        come_call_finalizer(sFun_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        if(fun==((void*)0)) {
            err_msg(info,"function not found(%s) at method(%s)(1)",generics_fun_name,info->come_fun->mName);
            __result_obj__0 = 1;
            come_call_finalizer(list$1CVALUE$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, list_element_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, type_values, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(buffer_finalize, source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, list_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, obj_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
            (generics_fun_name = come_decrement_ref_count(generics_fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
            return __result_obj__0;
        }
    }
    result_type=(struct sType*)come_increment_ref_count(sType_clone(fun->mResultType));
    result_type->mStatic=0;
    type=(struct sType*)come_increment_ref_count(list_type);
    obj_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "06str.c", 357, "struct CVALUE*"))));
    num_string=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "06str.c", 359, "struct buffer*"))));
    buffer_append_str(num_string,"1");
    type2=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(type),(struct sType*)come_increment_ref_count(type),info));
    type_name=(char*)come_increment_ref_count(make_type_name_string(type2,info,0,1,0));
    any_type=(struct sType*)come_increment_ref_count(type2);
    any_type->mPointerNum=1;
    any_type->mHeap=1;
    if(({(_conditional_value_X0=(((struct sFun*)(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,"come_calloc_v2")))));    come_call_finalizer(sFun_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
_conditional_value_X0;})) {
        __dec_obj67=obj_value->c_value,
        obj_value->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc_v2(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",type_name,type_name,((char*)(__right_value0=buffer_to_string(num_string))),info->sname,info->sline,type_name));
        __dec_obj67 = come_decrement_ref_count(__dec_obj67, (void*)0, (void*)0, 0,0, (void*)0);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    }
    else {
        __dec_obj68=obj_value->c_value,
        obj_value->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",type_name,type_name,((char*)(__right_value0=buffer_to_string(num_string))),info->sname,info->sline,type_name));
        __dec_obj68 = come_decrement_ref_count(__dec_obj68, (void*)0, (void*)0, 0,0, (void*)0);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    }
    type3=(struct sType*)come_increment_ref_count(sType_clone(type2));
    type3->mPointerNum++;
    type3->mHeap=1;
    type2->mHeap=1;
    __dec_obj69=obj_value->type,
    obj_value->type=(struct sType*)come_increment_ref_count(sType_clone(type2));
    come_call_finalizer(sType_finalize, __dec_obj69,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    obj_value->var=((void*)0);
    append_object_to_right_values(obj_value,(struct sType*)come_increment_ref_count(type3),info,0,((void*)0),((void*)0),((void*)0));
    come_params=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "06str.c", 388, "struct list$1CVALUE$ph*"))));
    if(({(_conditional_value_X0=(((struct sType*)(__right_value0=list$1sType$ph_operator_load_element(fun->mParamTypes,0)))->mHeap&&obj_value->type->mHeap));    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
_conditional_value_X0;})) {
        std_move(((struct sType*)(__right_value0=list$1sType$ph_operator_load_element(fun->mParamTypes,0))),obj_value->type,obj_value,info);
        come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    }
    list$1CVALUE$ph_push_back(come_params,(struct CVALUE*)come_increment_ref_count(obj_value));
    come_value2=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "06str.c", 395, "struct CVALUE*"))));
    __dec_obj70=come_value2->c_value,
    come_value2->c_value=(char*)come_increment_ref_count(xsprintf("%d",list$1CVALUE$ph_length(params)));
    __dec_obj70 = come_decrement_ref_count(__dec_obj70, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj71=come_value2->type,
    come_value2->type=((void*)0);
    come_call_finalizer(sType_finalize, __dec_obj71,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_value2->var=((void*)0);
    list$1CVALUE$ph_push_back(come_params,(struct CVALUE*)come_increment_ref_count(come_value2));
    come_value3=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "06str.c", 403, "struct CVALUE*"))));
    __dec_obj72=come_value3->c_value,
    come_value3->c_value=(char*)come_increment_ref_count(xsprintf("%s",var_->mCValueName));
    __dec_obj72 = come_decrement_ref_count(__dec_obj72, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj73=come_value3->type,
    come_value3->type=((void*)0);
    come_call_finalizer(sType_finalize, __dec_obj73,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_value3->var=((void*)0);
    list$1CVALUE$ph_push_back(come_params,(struct CVALUE*)come_increment_ref_count(come_value3));
    buffer_append_str(source,generics_fun_name);
    buffer_append_str(source,"(");
    j=0;
    for(o2_saved_28=(struct list$1CVALUE$ph*)come_increment_ref_count(come_params),it_29=list$1CVALUE$ph_begin(o2_saved_28);!list$1CVALUE$ph_end(o2_saved_28);it_29=list$1CVALUE$ph_next(o2_saved_28)){
        buffer_append_str(source,it_29->c_value);
        if(j!=list$1CVALUE$ph_length(come_params)-1) {
            buffer_append_str(source,",");
        }
        j++;
    }
    come_call_finalizer(list$1CVALUE$ph$p_finalize, o2_saved_28, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    buffer_append_str(source,")");
    buffer_append_str(source,")");
    come_value4=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "06str.c", 429, "struct CVALUE*"))));
    __dec_obj74=come_value4->c_value,
    come_value4->c_value=(char*)come_increment_ref_count(buffer_to_string(source));
    __dec_obj74 = come_decrement_ref_count(__dec_obj74, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj75=come_value4->type,
    come_value4->type=(struct sType*)come_increment_ref_count(sType_clone(result_type));
    come_call_finalizer(sType_finalize, __dec_obj75,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_value4->type->mStatic=0;
    come_value4->var=((void*)0);
    if(result_type->mHeap) {
        append_object_to_right_values(come_value4,(struct sType*)come_increment_ref_count(result_type),info,0,((void*)0),((void*)0),((void*)0));
    }
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value4));
    add_come_last_code(info,"%s",come_value4->c_value);
    __result_obj__0 = 1;
    come_call_finalizer(list$1CVALUE$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, list_element_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type_values, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(buffer_finalize, source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, list_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, obj_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
    (generics_fun_name = come_decrement_ref_count(generics_fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(CVALUE_finalize, obj_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(buffer_finalize, num_string, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sType_finalize, any_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type3, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value3, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value4, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__0;
}

static void sListNode_finalize(struct sListNode* self)
{
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->list_elements!=((void*)0)) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->list_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_initialize(struct list$1CVALUE$ph* self)
{
    struct list$1CVALUE$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__0 = (struct list$1CVALUE$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1CVALUE$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1CVALUE$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static void list$1CVALUE$ph$p_finalize(struct list$1CVALUE$ph* self)
{
    struct list_item$1CVALUE$ph* it;
    struct list_item$1CVALUE$ph* prev_it;
    if(self==((void*)0)) {
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1CVALUE$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1CVALUE$ph$p_finalize(struct list_item$1CVALUE$ph* self)
{
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer(CVALUE_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static struct list$1sNode$ph* list$1sNode$ph_push_back(struct list$1sNode$ph* self, struct sNode* item)
{
    struct list$1sNode$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1sNode$ph* litem;
    struct sNode* __dec_obj60;
    struct list_item$1sNode$ph* litem_16;
    struct sNode* __dec_obj61;
    struct list_item$1sNode$ph* litem_17;
    struct sNode* __dec_obj62;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./neo-c.h", 1177, "struct list_item$1sNode$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj60=litem->item,
        litem->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj60 ? __dec_obj60 = come_decrement_ref_count(__dec_obj60, ((struct sNode*)__dec_obj60)->finalize, ((struct sNode*)__dec_obj60)->_protocol_obj, 0,0, (void*)0) :0);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        litem_16=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./neo-c.h", 1187, "struct list_item$1sNode$ph*"))));
        litem_16->prev=self->head;
        litem_16->next=((void*)0);
        __dec_obj61=litem_16->item,
        litem_16->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj61 ? __dec_obj61 = come_decrement_ref_count(__dec_obj61, ((struct sNode*)__dec_obj61)->finalize, ((struct sNode*)__dec_obj61)->_protocol_obj, 0,0, (void*)0) :0);
        self->tail=litem_16;
        self->head->next=litem_16;
    }
    else {
        litem_17=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./neo-c.h", 1197, "struct list_item$1sNode$ph*"))));
        litem_17->prev=self->tail;
        litem_17->next=((void*)0);
        __dec_obj62=litem_17->item,
        litem_17->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj62 ? __dec_obj62 = come_decrement_ref_count(__dec_obj62, ((struct sNode*)__dec_obj62)->finalize, ((struct sNode*)__dec_obj62)->_protocol_obj, 0,0, (void*)0) :0);
        self->tail->next=litem_17;
        self->tail=litem_17;
    }
    self->len++;
    __result_obj__0 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    return __result_obj__0;
}

static int list$1CVALUE$ph_length(struct list$1CVALUE$ph* self)
{
    if(self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct CVALUE* list$1CVALUE$ph_begin(struct list$1CVALUE$ph* self)
{
    struct CVALUE* result;
    struct CVALUE* __result_obj__0;
    struct CVALUE* result_19;
    if(self==((void*)0)) {
        memset(&result,0,sizeof(struct CVALUE*));
        __result_obj__0 = result;
        return __result_obj__0;
    }
    self->it=self->head;
    if(self->it) {
        __result_obj__0 = self->it->item;
        return __result_obj__0;
    }
    memset(&result_19,0,sizeof(struct CVALUE*));
    __result_obj__0 = result_19;
    return __result_obj__0;
}

static _Bool list$1CVALUE$ph_end(struct list$1CVALUE$ph* self)
{
    return self==((void*)0)||self->it==((void*)0);
}

static struct CVALUE* list$1CVALUE$ph_next(struct list$1CVALUE$ph* self)
{
    struct CVALUE* result;
    struct CVALUE* __result_obj__0;
    struct CVALUE* result_21;
    if(self==((void*)0)||self->it==((void*)0)) {
        memset(&result,0,sizeof(struct CVALUE*));
        __result_obj__0 = result;
        return __result_obj__0;
    }
    self->it=self->it->next;
    if(self->it) {
        __result_obj__0 = self->it->item;
        return __result_obj__0;
    }
    memset(&result_21,0,sizeof(struct CVALUE*));
    __result_obj__0 = result_21;
    return __result_obj__0;
}

static struct CVALUE* list$1CVALUE$ph$p_operator_load_element(struct list$1CVALUE$ph* self, int position)
{
    struct CVALUE* default_value;
    struct CVALUE* __result_obj__0;
    struct list_item$1CVALUE$ph* it;
    int i;
    struct CVALUE* default_value_22;
    if(self==((void*)0)) {
        memset(&default_value,0,sizeof(struct CVALUE*));
        __result_obj__0 = (struct CVALUE*)come_increment_ref_count(default_value);
        come_call_finalizer(CVALUE_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        come_call_finalizer(CVALUE_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
        come_call_finalizer(CVALUE_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(position<0) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(it!=((void*)0)) {
        if(position==i) {
            __result_obj__0 = (struct CVALUE*)come_increment_ref_count(it->item);
            come_call_finalizer(CVALUE_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__0;
        }
        it=it->next;
        i++;
    }
    memset(&default_value_22,0,sizeof(struct CVALUE*));
    __result_obj__0 = (struct CVALUE*)come_increment_ref_count(default_value_22);
    come_call_finalizer(CVALUE_finalize, default_value_22, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(CVALUE_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct CVALUE* list$1CVALUE$ph_operator_load_element(struct list$1CVALUE$ph* self, int position)
{
    struct CVALUE* default_value;
    struct CVALUE* __result_obj__0;
    struct list_item$1CVALUE$ph* it;
    int i;
    struct CVALUE* default_value_23;
    if(self==((void*)0)) {
        memset(&default_value,0,sizeof(struct CVALUE*));
        __result_obj__0 = (struct CVALUE*)come_increment_ref_count(default_value);
        come_call_finalizer(CVALUE_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        come_call_finalizer(CVALUE_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
        come_call_finalizer(CVALUE_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(position<0) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(it!=((void*)0)) {
        if(position==i) {
            __result_obj__0 = (struct CVALUE*)come_increment_ref_count(it->item);
            come_call_finalizer(CVALUE_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__0;
        }
        it=it->next;
        i++;
    }
    memset(&default_value_23,0,sizeof(struct CVALUE*));
    __result_obj__0 = (struct CVALUE*)come_increment_ref_count(default_value_23);
    come_call_finalizer(CVALUE_finalize, default_value_23, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(CVALUE_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct list$1sType$ph* list$1sType$ph_push_back(struct list$1sType$ph* self, struct sType* item)
{
    struct list$1sType$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1sType$ph* litem;
    struct sType* __dec_obj63;
    struct list_item$1sType$ph* litem_24;
    struct sType* __dec_obj64;
    struct list_item$1sType$ph* litem_25;
    struct sType* __dec_obj65;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./neo-c.h", 1177, "struct list_item$1sType$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj63=litem->item,
        litem->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj63,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        litem_24=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./neo-c.h", 1187, "struct list_item$1sType$ph*"))));
        litem_24->prev=self->head;
        litem_24->next=((void*)0);
        __dec_obj64=litem_24->item,
        litem_24->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj64,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem_24;
        self->head->next=litem_24;
    }
    else {
        litem_25=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./neo-c.h", 1197, "struct list_item$1sType$ph*"))));
        litem_25->prev=self->tail;
        litem_25->next=((void*)0);
        __dec_obj65=litem_25->item,
        litem_25->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj65,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail->next=litem_25;
        self->tail=litem_25;
    }
    self->len++;
    __result_obj__0 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__0;
}

static void tuple2$2char$phsGenericsFun$p$p_finalize(struct tuple2$2char$phsGenericsFun$p* self)
{
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

static struct sFun* map$2char$phsFun$ph_at(struct map$2char$phsFun$ph* self, char* key, struct sFun* default_value)
{
    struct sFun* __result_obj__0;
    unsigned int hash;
    unsigned int it;
    if(self==((void*)0)) {
        __result_obj__0 = (struct sFun*)come_increment_ref_count(default_value);
        come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(1) {
        if(self->item_existance[it]) {
            if(string_equals(self->keys[it],key)) {
                __result_obj__0 = (struct sFun*)come_increment_ref_count(self->items[it]);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
            it++;
            if(it>=self->size) {
                it=0;
            }
            else if(it==hash) {
                __result_obj__0 = (struct sFun*)come_increment_ref_count(default_value);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
        }
        else {
            __result_obj__0 = (struct sFun*)come_increment_ref_count(default_value);
            come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__0;
        }
    }
    __result_obj__0 = (struct sFun*)come_increment_ref_count(default_value);
    come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position)
{
    struct sType* default_value;
    struct sType* __result_obj__0;
    struct list_item$1sType$ph* it;
    int i;
    struct sType* default_value_26;
    if(self==((void*)0)) {
        memset(&default_value,0,sizeof(struct sType*));
        __result_obj__0 = (struct sType*)come_increment_ref_count(default_value);
        come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
        come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(position<0) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(it!=((void*)0)) {
        if(position==i) {
            __result_obj__0 = (struct sType*)come_increment_ref_count(it->item);
            come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__0;
        }
        it=it->next;
        i++;
    }
    memset(&default_value_26,0,sizeof(struct sType*));
    __result_obj__0 = (struct sType*)come_increment_ref_count(default_value_26);
    come_call_finalizer(sType_finalize, default_value_26, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct sType* list$1sType$ph_operator_load_element(struct list$1sType$ph* self, int position)
{
    struct sType* default_value;
    struct sType* __result_obj__0;
    struct list_item$1sType$ph* it;
    int i;
    struct sType* default_value_27;
    if(self==((void*)0)) {
        memset(&default_value,0,sizeof(struct sType*));
        __result_obj__0 = (struct sType*)come_increment_ref_count(default_value);
        come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
        come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(position<0) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(it!=((void*)0)) {
        if(position==i) {
            __result_obj__0 = (struct sType*)come_increment_ref_count(it->item);
            come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__0;
        }
        it=it->next;
        i++;
    }
    memset(&default_value_27,0,sizeof(struct sType*));
    __result_obj__0 = (struct sType*)come_increment_ref_count(default_value_27);
    come_call_finalizer(sType_finalize, default_value_27, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

struct sTupleNode* sTupleNode_initialize(struct sTupleNode* self, struct list$1tuple2$2char$phsNode$ph$ph* tuple_elements, struct sInfo* info)
{
    void* __right_value0 = (void*)0;
    struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj76;
    struct sTupleNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj76=self->tuple_elements,
    self->tuple_elements=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(tuple_elements);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph_finalize, __dec_obj76,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __result_obj__0 = (struct sTupleNode*)come_increment_ref_count(self);
    come_call_finalizer(sTupleNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, tuple_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sTupleNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char* sTupleNode_kind(struct sTupleNode* self)
{
    void* __right_value0 = (void*)0;
    char* __result_obj__0;
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string("sTupleNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool sTupleNode_compile(struct sTupleNode* self, struct sInfo* info)
{
    struct list$1tuple2$2char$phsNode$ph$ph* tuple_elements;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1sType$ph* tuple_types;
    struct list$1CVALUE$ph* tuple_values;
    int n;
    struct list$1tuple2$2char$phsNode$ph$ph* o2_saved;
    struct tuple2$2char$phsNode$ph* it;
    struct tuple2$2char$phsNode$ph* multiple_assign_var2
;    char* name=0;
    struct sNode* node=0;
    _Bool Value;
    _Bool __result_obj__0;
    struct CVALUE* come_value;
    struct sType* type;
    char* __dec_obj81;
    void* __right_value2 = (void*)0;
    struct sType* __exception_result_var_b24;
    struct sType* __exception_result_var_b25;
    struct sType* __exception_result_var_b26;
    struct sType* type_32;
    struct list$1sType$ph* o2_saved_33;
    struct sType* it_35;
    struct CVALUE* obj_value;
    struct buffer* num_string;
    struct sType* type2;
    char* type_name;
    struct sType* any_type;
    _Bool _conditional_value_X0;
    char* __dec_obj82;
    char* __dec_obj83;
    struct sType* type3;
    struct sType* __dec_obj84;
    struct sType* obj_type;
    struct tuple2$2char$phsGenericsFun$p* multiple_assign_var3
;    char* name_37=0;
    struct sGenericsFun* generics_fun=0;
    char* generics_fun_name;
    struct sFun* fun;
    char* __dec_obj85;
    struct sType* result_type;
    struct list$1CVALUE$ph* come_params;
    int i;
    struct list$1CVALUE$ph* o2_saved_38;
    struct CVALUE* it_39;
    struct CVALUE* come_value_40;
    struct buffer* buf;
    int j;
    struct list$1CVALUE$ph* o2_saved_41;
    struct CVALUE* it_42;
    struct CVALUE* come_value2;
    char* __dec_obj86;
    struct sType* __dec_obj87;
    tuple_elements=self->tuple_elements;
    tuple_types=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "06str.c", 466, "struct list$1sType$ph*"))));
    tuple_values=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "06str.c", 467, "struct list$1CVALUE$ph*"))));
    n=0;
    for(o2_saved=tuple_elements,it=list$1tuple2$2char$phsNode$ph$ph_begin(o2_saved);!list$1tuple2$2char$phsNode$ph$ph_end(o2_saved);it=list$1tuple2$2char$phsNode$ph$ph_next(o2_saved)){
        multiple_assign_var2=it;
        name=(char*)come_increment_ref_count(multiple_assign_var2->v1);
        node=(struct sNode*)come_increment_ref_count(multiple_assign_var2->v2);
        Value=node_compile(node,info);
        if(!Value) {
            __result_obj__0 = 0;
            (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
            ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            come_call_finalizer(list$1sType$ph$p_finalize, tuple_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(list$1CVALUE$ph$p_finalize, tuple_values, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result_obj__0;
        }
        else {
        }
        come_value=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        list$1CVALUE$ph_push_back(tuple_values,(struct CVALUE*)come_increment_ref_count(CVALUE_clone(come_value)));
        type=(struct sType*)come_increment_ref_count(sType_clone(come_value->type));
        __dec_obj81=type->mTupleName,
        type->mTupleName=(char*)come_increment_ref_count(name);
        __dec_obj81 = come_decrement_ref_count(__dec_obj81, (void*)0, (void*)0, 0,0, (void*)0);
        list$1sType$ph_push_back(tuple_types,(struct sType*)come_increment_ref_count(type));
        n++;
        (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    type_32=(struct sType*)come_increment_ref_count((come_push_stackframe("06str.c", 487, 25),__exception_result_var_b26=(come_push_stackframe("06str.c", 487, 23),__exception_result_var_b24=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "06str.c", 487, "struct sType*")),(char*)come_increment_ref_count(xsprintf("tuple%d",list$1sType$ph_length(tuple_types))),0,info,0), come_pop_stackframe(), __exception_result_var_b24), come_pop_stackframe(), __exception_result_var_b26));
    for(o2_saved_33=(struct list$1sType$ph*)come_increment_ref_count(tuple_types),it_35=list$1sType$ph_begin(o2_saved_33);!list$1sType$ph_end(o2_saved_33);it_35=list$1sType$ph_next(o2_saved_33)){
        list$1sType$ph_push_back(type_32->mGenericsTypes,(struct sType*)come_increment_ref_count((((struct sType*)(__right_value0=sType_clone(it_35))))));
        come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    }
    come_call_finalizer(list$1sType$ph$p_finalize, o2_saved_33, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    obj_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "06str.c", 493, "struct CVALUE*"))));
    num_string=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "06str.c", 495, "struct buffer*"))));
    buffer_append_str(num_string,"1");
    type2=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(type_32),(struct sType*)come_increment_ref_count(type_32),info));
    type_name=(char*)come_increment_ref_count(make_type_name_string(type2,info,0,1,0));
    any_type=(struct sType*)come_increment_ref_count(type2);
    any_type->mPointerNum=1;
    any_type->mHeap=1;
    if(({(_conditional_value_X0=(((struct sFun*)(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,"come_calloc_v2")))));    come_call_finalizer(sFun_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
_conditional_value_X0;})) {
        __dec_obj82=obj_value->c_value,
        obj_value->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc_v2(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",type_name,type_name,((char*)(__right_value0=buffer_to_string(num_string))),info->sname,info->sline,type_name));
        __dec_obj82 = come_decrement_ref_count(__dec_obj82, (void*)0, (void*)0, 0,0, (void*)0);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    }
    else {
        __dec_obj83=obj_value->c_value,
        obj_value->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",type_name,type_name,((char*)(__right_value0=buffer_to_string(num_string))),info->sname,info->sline,type_name));
        __dec_obj83 = come_decrement_ref_count(__dec_obj83, (void*)0, (void*)0, 0,0, (void*)0);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    }
    type3=(struct sType*)come_increment_ref_count(sType_clone(type2));
    type3->mPointerNum++;
    type3->mHeap=1;
    type2->mHeap=1;
    __dec_obj84=obj_value->type,
    obj_value->type=(struct sType*)come_increment_ref_count(sType_clone(type2));
    come_call_finalizer(sType_finalize, __dec_obj84,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    obj_value->var=((void*)0);
    append_object_to_right_values(obj_value,(struct sType*)come_increment_ref_count(type3),info,0,((void*)0),((void*)0),((void*)0));
    obj_type=(struct sType*)come_increment_ref_count(sType_clone(type2));
    char* fun_name="initialize";
    multiple_assign_var3=((struct tuple2$2char$phsGenericsFun$p*)(__right_value1=make_generics_function(obj_type,(char*)come_increment_ref_count(__builtin_string(fun_name)),info,1)));
    name_37=(char*)come_increment_ref_count(multiple_assign_var3->v1);
    generics_fun=multiple_assign_var3->v2;
    come_call_finalizer(tuple2$2char$phsGenericsFun$p$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    generics_fun_name=(char*)come_increment_ref_count(name_37);
    fun=((struct sFun*)(__right_value0=map$2char$phsFun$ph_at(info->funcs,generics_fun_name,((void*)0))));
    come_call_finalizer(sFun_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    if(fun==((void*)0)) {
        __dec_obj85=generics_fun_name,
        generics_fun_name=(char*)come_increment_ref_count(create_method_name(obj_type,0,((char*)(__right_value0=__builtin_string(fun_name))),info,1));
        __dec_obj85 = come_decrement_ref_count(__dec_obj85, (void*)0, (void*)0, 0,0, (void*)0);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        fun=((struct sFun*)(__right_value0=map$2char$phsFun$ph_at(info->funcs,generics_fun_name,((void*)0))));
        come_call_finalizer(sFun_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        if(fun==((void*)0)) {
            err_msg(info,"function not found(%s) at method(%s)(2)",generics_fun_name,info->come_fun->mName);
            __result_obj__0 = 1;
            come_call_finalizer(list$1sType$ph$p_finalize, tuple_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(list$1CVALUE$ph$p_finalize, tuple_values, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, type_32, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(CVALUE_finalize, obj_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(buffer_finalize, num_string, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sType_finalize, any_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, type3, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, obj_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (name_37 = come_decrement_ref_count(name_37, (void*)0, (void*)0, 0, 0, (void*)0));
            (generics_fun_name = come_decrement_ref_count(generics_fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
            return __result_obj__0;
        }
    }
    result_type=(struct sType*)come_increment_ref_count(sType_clone(fun->mResultType));
    result_type->mStatic=0;
    come_params=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "06str.c", 546, "struct list$1CVALUE$ph*"))));
    if(({(_conditional_value_X0=(((struct sType*)(__right_value0=list$1sType$ph_operator_load_element(fun->mParamTypes,0)))->mHeap&&obj_value->type->mHeap));    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
_conditional_value_X0;})) {
        std_move(((struct sType*)(__right_value0=list$1sType$ph_operator_load_element(fun->mParamTypes,0))),obj_value->type,obj_value,info);
        come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    }
    list$1CVALUE$ph_push_back(come_params,(struct CVALUE*)come_increment_ref_count(obj_value));
    i=1;
    for(o2_saved_38=(struct list$1CVALUE$ph*)come_increment_ref_count(tuple_values),it_39=list$1CVALUE$ph_begin(o2_saved_38);!list$1CVALUE$ph_end(o2_saved_38);it_39=list$1CVALUE$ph_next(o2_saved_38)){
        come_value_40=(struct CVALUE*)come_increment_ref_count(CVALUE_clone(it_39));
        if(({(_conditional_value_X0=(((struct sType*)(__right_value0=list$1sType$ph_operator_load_element(fun->mParamTypes,i)))&&((struct sType*)(__right_value1=list$1sType$ph_operator_load_element(fun->mParamTypes,i)))->mHeap&&come_value_40->type->mHeap));        come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer(sType_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
_conditional_value_X0;})) {
            std_move(((struct sType*)(__right_value0=list$1sType$ph_operator_load_element(fun->mParamTypes,i))),come_value_40->type,come_value_40,info);
            come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        }
        list$1CVALUE$ph_push_back(come_params,(struct CVALUE*)come_increment_ref_count(come_value_40));
        i++;
        come_call_finalizer(CVALUE_finalize, come_value_40, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer(list$1CVALUE$ph$p_finalize, o2_saved_38, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    buf=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "06str.c", 565, "struct buffer*"))));
    buffer_append_str(buf,generics_fun_name);
    buffer_append_str(buf,"(");
    j=0;
    for(o2_saved_41=(struct list$1CVALUE$ph*)come_increment_ref_count(come_params),it_42=list$1CVALUE$ph_begin(o2_saved_41);!list$1CVALUE$ph_end(o2_saved_41);it_42=list$1CVALUE$ph_next(o2_saved_41)){
        buffer_append_str(buf,it_42->c_value);
        if(j!=list$1CVALUE$ph_length(come_params)-1) {
            buffer_append_str(buf,",");
        }
        j++;
    }
    come_call_finalizer(list$1CVALUE$ph$p_finalize, o2_saved_41, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    buffer_append_str(buf,")");
    come_value2=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "06str.c", 582, "struct CVALUE*"))));
    __dec_obj86=come_value2->c_value,
    come_value2->c_value=(char*)come_increment_ref_count(buffer_to_string(buf));
    __dec_obj86 = come_decrement_ref_count(__dec_obj86, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj87=come_value2->type,
    come_value2->type=(struct sType*)come_increment_ref_count(sType_clone(result_type));
    come_call_finalizer(sType_finalize, __dec_obj87,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_value2->type->mStatic=0;
    come_value2->var=((void*)0);
    if(result_type->mHeap) {
        append_object_to_right_values(come_value2,(struct sType*)come_increment_ref_count(result_type),info,0,((void*)0),((void*)0),((void*)0));
    }
    add_come_last_code(info,"%s",come_value2->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2));
    __result_obj__0 = 1;
    come_call_finalizer(list$1sType$ph$p_finalize, tuple_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1CVALUE$ph$p_finalize, tuple_values, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type_32, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(CVALUE_finalize, obj_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(buffer_finalize, num_string, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sType_finalize, any_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type3, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, obj_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (name_37 = come_decrement_ref_count(name_37, (void*)0, (void*)0, 0, 0, (void*)0));
    (generics_fun_name = come_decrement_ref_count(generics_fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__0;
}

static void list$1tuple2$2char$phsNode$ph$ph_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self)
{
    struct list_item$1tuple2$2char$phsNode$ph$ph* it;
    struct list_item$1tuple2$2char$phsNode$ph$ph* prev_it;
    if(self==((void*)0)) {
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1tuple2$2char$phsNode$ph$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void sTupleNode_finalize(struct sTupleNode* self)
{
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->tuple_elements!=((void*)0)) {
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, self->tuple_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_begin(struct list$1tuple2$2char$phsNode$ph$ph* self)
{
    struct tuple2$2char$phsNode$ph* result;
    struct tuple2$2char$phsNode$ph* __result_obj__0;
    struct tuple2$2char$phsNode$ph* result_30;
    if(self==((void*)0)) {
        memset(&result,0,sizeof(struct tuple2$2char$phsNode$ph*));
        __result_obj__0 = result;
        return __result_obj__0;
    }
    self->it=self->head;
    if(self->it) {
        __result_obj__0 = self->it->item;
        return __result_obj__0;
    }
    memset(&result_30,0,sizeof(struct tuple2$2char$phsNode$ph*));
    __result_obj__0 = result_30;
    return __result_obj__0;
}

static _Bool list$1tuple2$2char$phsNode$ph$ph_end(struct list$1tuple2$2char$phsNode$ph$ph* self)
{
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_next(struct list$1tuple2$2char$phsNode$ph$ph* self)
{
    struct tuple2$2char$phsNode$ph* result;
    struct tuple2$2char$phsNode$ph* __result_obj__0;
    struct tuple2$2char$phsNode$ph* result_31;
    if(self==((void*)0)||self->it==((void*)0)) {
        memset(&result,0,sizeof(struct tuple2$2char$phsNode$ph*));
        __result_obj__0 = result;
        return __result_obj__0;
    }
    self->it=self->it->next;
    if(self->it) {
        __result_obj__0 = self->it->item;
        return __result_obj__0;
    }
    memset(&result_31,0,sizeof(struct tuple2$2char$phsNode$ph*));
    __result_obj__0 = result_31;
    return __result_obj__0;
}

static struct CVALUE* CVALUE_clone(struct CVALUE* self)
{
    struct CVALUE* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE* result;
    char* __dec_obj77;
    struct sType* __dec_obj78;
    char* __dec_obj79;
    char* __dec_obj80;
    if(self==(void*)0) {
        __result_obj__0 = (struct CVALUE*)come_increment_ref_count((void*)0);
        come_call_finalizer(CVALUE_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    result=(struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "CVALUE_clone", 3, "struct CVALUE*"));
    if(self!=((void*)0)&&self->c_value!=((void*)0)) {
        __dec_obj77=result->c_value,
        result->c_value=(char*)come_increment_ref_count((char*)come_memdup(self->c_value, "CVALUE_clone", 4, "char*"));
        __dec_obj77 = come_decrement_ref_count(__dec_obj77, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj78=result->type,
        result->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        come_call_finalizer(sType_finalize, __dec_obj78,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)) {
        result->var=self->var;
    }
    if(self!=((void*)0)) {
        result->right_value_objects=self->right_value_objects;
    }
    if(self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        __dec_obj79=result->c_value_without_right_value_objects,
        result->c_value_without_right_value_objects=(char*)come_increment_ref_count((char*)come_memdup(self->c_value_without_right_value_objects, "CVALUE_clone", 8, "char*"));
        __dec_obj79 = come_decrement_ref_count(__dec_obj79, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)) {
        __dec_obj80=result->c_value_without_cast_object_value,
        result->c_value_without_cast_object_value=(char*)come_increment_ref_count((char*)come_memdup(self->c_value_without_cast_object_value, "CVALUE_clone", 9, "char*"));
        __dec_obj80 = come_decrement_ref_count(__dec_obj80, (void*)0, (void*)0, 0,0, (void*)0);
    }
    __result_obj__0 = (struct CVALUE*)come_increment_ref_count(result);
    come_call_finalizer(CVALUE_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(CVALUE_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static int list$1sType$ph_length(struct list$1sType$ph* self)
{
    if(self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sType* list$1sType$ph_begin(struct list$1sType$ph* self)
{
    struct sType* result;
    struct sType* __result_obj__0;
    struct sType* result_34;
    if(self==((void*)0)) {
        memset(&result,0,sizeof(struct sType*));
        __result_obj__0 = result;
        return __result_obj__0;
    }
    self->it=self->head;
    if(self->it) {
        __result_obj__0 = self->it->item;
        return __result_obj__0;
    }
    memset(&result_34,0,sizeof(struct sType*));
    __result_obj__0 = result_34;
    return __result_obj__0;
}

static _Bool list$1sType$ph_end(struct list$1sType$ph* self)
{
    return self==((void*)0)||self->it==((void*)0);
}

static struct sType* list$1sType$ph_next(struct list$1sType$ph* self)
{
    struct sType* result;
    struct sType* __result_obj__0;
    struct sType* result_36;
    if(self==((void*)0)||self->it==((void*)0)) {
        memset(&result,0,sizeof(struct sType*));
        __result_obj__0 = result;
        return __result_obj__0;
    }
    self->it=self->it->next;
    if(self->it) {
        __result_obj__0 = self->it->item;
        return __result_obj__0;
    }
    memset(&result_36,0,sizeof(struct sType*));
    __result_obj__0 = result_36;
    return __result_obj__0;
}

struct sMapNode* sMapNode_initialize(struct sMapNode* self, struct list$1sNode$ph* map_key_elements, struct list$1sNode$ph* map_elements, struct sInfo* info)
{
    void* __right_value0 = (void*)0;
    struct list$1sNode$ph* __dec_obj88;
    struct list$1sNode$ph* __dec_obj89;
    struct sMapNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj88=self->map_key_elements,
    self->map_key_elements=(struct list$1sNode$ph*)come_increment_ref_count(map_key_elements);
    come_call_finalizer(list$1sNode$ph_finalize, __dec_obj88,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj89=self->map_elements,
    self->map_elements=(struct list$1sNode$ph*)come_increment_ref_count(map_elements);
    come_call_finalizer(list$1sNode$ph_finalize, __dec_obj89,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __result_obj__0 = (struct sMapNode*)come_increment_ref_count(self);
    come_call_finalizer(sMapNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, map_key_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, map_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sMapNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char* sMapNode_kind(struct sMapNode* self)
{
    void* __right_value0 = (void*)0;
    char* __result_obj__0;
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string("sMapNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool sMapNode_compile(struct sMapNode* self, struct sInfo* info)
{
    struct list$1sNode$ph* map_key_elements;
    struct list$1sNode$ph* map_elements;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1CVALUE$ph* key_params;
    struct list$1CVALUE$ph* element_params;
    struct sType* map_key_type;
    struct sType* map_element_type;
    int i;
    struct sNode* key_elements;
    struct sNode* elements;
    _Bool Value;
    _Bool __result_obj__0;
    struct CVALUE* come_value;
    struct sType* __dec_obj90;
    _Bool Value_45;
    struct CVALUE* come_value2;
    struct sType* __dec_obj91;
    struct sType* key_type_values;
    char* var_name;
    struct sVar* var_;
    struct sType* element_type_values;
    char* var_name2;
    struct sVar* var2_;
    struct buffer* source;
    int i_46;
    struct CVALUE* key_param;
    struct CVALUE* element_param;
    void* __right_value2 = (void*)0;
    struct sType* __exception_result_var_b27;
    struct sType* __exception_result_var_b28;
    struct sType* __exception_result_var_b29;
    struct sType* map_type;
    struct sType* obj_type;
    struct tuple2$2char$phsGenericsFun$p* multiple_assign_var4
;    char* name=0;
    struct sGenericsFun* generics_fun=0;
    char* generics_fun_name;
    struct sFun* fun;
    char* __dec_obj92;
    struct sType* result_type;
    struct sType* type;
    struct CVALUE* obj_value;
    struct buffer* num_string;
    struct sType* type2;
    char* type_name;
    struct sType* any_type;
    _Bool _conditional_value_X0;
    char* __dec_obj93;
    char* __dec_obj94;
    struct sType* type3;
    struct sType* __dec_obj95;
    struct list$1CVALUE$ph* come_params;
    struct CVALUE* come_value2_47;
    char* __dec_obj96;
    struct sType* __dec_obj97;
    struct CVALUE* come_value3;
    char* __dec_obj98;
    struct sType* __dec_obj99;
    struct CVALUE* come_value4;
    char* __dec_obj100;
    struct sType* __dec_obj101;
    int j;
    struct list$1CVALUE$ph* o2_saved;
    struct CVALUE* it;
    struct CVALUE* come_value5;
    char* __dec_obj102;
    struct sType* __dec_obj103;
    map_key_elements=self->map_key_elements;
    map_elements=self->map_elements;
    key_params=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "06str.c", 622, "struct list$1CVALUE$ph*"))));
    element_params=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "06str.c", 623, "struct list$1CVALUE$ph*"))));
    map_key_type=((void*)0);
    map_element_type=((void*)0);
    for(i=0;i<list$1sNode$ph_length(map_key_elements);i++){
        key_elements=((struct sNode*)(__right_value0=list$1sNode$ph_operator_load_element(map_key_elements,i)));
        ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        elements=((struct sNode*)(__right_value0=list$1sNode$ph_operator_load_element(map_elements,i)));
        ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        Value=node_compile(key_elements,info);
        if(!Value) {
            __result_obj__0 = 0;
            come_call_finalizer(list$1CVALUE$ph$p_finalize, key_params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(list$1CVALUE$ph$p_finalize, element_params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, map_key_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, map_element_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result_obj__0;
        }
        else {
        }
        come_value=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        if(map_key_type) {
            if(map_key_type->mHeap!=come_value->type->mHeap) {
                err_msg(info,"Map key type");
                exit(2);
            }
            else {
                check_assign_type(((char*)(__right_value0=xsprintf("Map key type"))),map_key_type,come_value->type,come_value,0,1,1,info);
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            }
        }
        list$1CVALUE$ph_push_back(key_params,(struct CVALUE*)come_increment_ref_count(come_value));
        __dec_obj90=map_key_type,
        map_key_type=(struct sType*)come_increment_ref_count(sType_clone(come_value->type));
        come_call_finalizer(sType_finalize, __dec_obj90,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        Value_45=node_compile(elements,info);
        if(!Value_45) {
            __result_obj__0 = 0;
            come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(list$1CVALUE$ph$p_finalize, key_params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(list$1CVALUE$ph$p_finalize, element_params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, map_key_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, map_element_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result_obj__0;
        }
        else {
        }
        come_value2=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        if(map_element_type) {
            if(map_element_type->mHeap!=come_value2->type->mHeap) {
                err_msg(info,"Map element type");
                exit(2);
            }
            else {
                check_assign_type(((char*)(__right_value0=xsprintf("Map element type"))),map_element_type,come_value2->type,come_value2,0,1,1,info);
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            }
        }
        list$1CVALUE$ph_push_back(element_params,(struct CVALUE*)come_increment_ref_count(come_value2));
        __dec_obj91=map_element_type,
        map_element_type=(struct sType*)come_increment_ref_count(sType_clone(come_value2->type));
        come_call_finalizer(sType_finalize, __dec_obj91,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(CVALUE_finalize, come_value2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    static int map_value_num=0;
    key_type_values=(struct sType*)come_increment_ref_count(sType_clone(map_key_type));
    list$1sNode$ph_push_back(key_type_values->mArrayNum,(struct sNode*)come_increment_ref_count(create_int_node((char*)come_increment_ref_count(int_to_string(list$1CVALUE$ph_length(key_params))),info)));
    key_type_values->mHeap=0;
    var_name=(char*)come_increment_ref_count(xsprintf("__map_keys%d__",++map_value_num));
    add_variable_to_table(var_name,(struct sType*)come_increment_ref_count(sType_clone(key_type_values)),info,0,0);
    var_=get_variable_from_table(info->lv_table,var_name);
    add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value0=make_define_var(key_type_values,var_->mCValueName,info,0,0))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    element_type_values=(struct sType*)come_increment_ref_count(sType_clone(map_element_type));
    list$1sNode$ph_push_back(element_type_values->mArrayNum,(struct sNode*)come_increment_ref_count(create_int_node((char*)come_increment_ref_count(int_to_string(list$1CVALUE$ph_length(element_params))),info)));
    element_type_values->mHeap=0;
    var_name2=(char*)come_increment_ref_count(xsprintf("__map_element%d__",map_value_num));
    add_variable_to_table(var_name2,(struct sType*)come_increment_ref_count(sType_clone(element_type_values)),info,0,0);
    var2_=get_variable_from_table(info->lv_table,var_name2);
    add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value0=make_define_var(element_type_values,var2_->mCValueName,info,0,0))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    source=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "06str.c", 696, "struct buffer*"))));
    buffer_append_str(source,"(");
    for(i_46=0;i_46<list$1CVALUE$ph_length(key_params);i_46++){
        key_param=((struct CVALUE*)(__right_value0=list$1CVALUE$ph_operator_load_element(key_params,i_46)));
        come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        element_param=((struct CVALUE*)(__right_value0=list$1CVALUE$ph_operator_load_element(element_params,i_46)));
        come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        if(map_key_type->mHeap) {
            buffer_append_format(source,"%s[%d]=%s,\n",var_->mCValueName,i_46,key_param->c_value);
        }
        else {
            buffer_append_format(source,"%s[%d]=%s,\n",var_->mCValueName,i_46,key_param->c_value);
        }
        if(map_element_type->mHeap) {
            buffer_append_format(source,"%s[%d]=%s,\n",var2_->mCValueName,i_46,element_param->c_value);
        }
        else {
            buffer_append_format(source,"%s[%d]=%s,\n",var2_->mCValueName,i_46,element_param->c_value);
        }
    }
    map_type=(struct sType*)come_increment_ref_count((come_push_stackframe("06str.c", 721, 28),__exception_result_var_b29=(come_push_stackframe("06str.c", 721, 26),__exception_result_var_b27=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "06str.c", 721, "struct sType*")),(char*)come_increment_ref_count(xsprintf("map")),0,info,0), come_pop_stackframe(), __exception_result_var_b27), come_pop_stackframe(), __exception_result_var_b29));
    list$1sType$ph_push_back(map_type->mGenericsTypes,(struct sType*)come_increment_ref_count((((struct sType*)(__right_value0=sType_clone(map_key_type))))));
    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    list$1sType$ph_push_back(map_type->mGenericsTypes,(struct sType*)come_increment_ref_count((((struct sType*)(__right_value0=sType_clone(map_element_type))))));
    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    obj_type=(struct sType*)come_increment_ref_count(sType_clone(map_type));
    char* fun_name="initialize_with_values";
    multiple_assign_var4=((struct tuple2$2char$phsGenericsFun$p*)(__right_value1=make_generics_function(obj_type,(char*)come_increment_ref_count(__builtin_string(fun_name)),info,1)));
    name=(char*)come_increment_ref_count(multiple_assign_var4->v1);
    generics_fun=multiple_assign_var4->v2;
    come_call_finalizer(tuple2$2char$phsGenericsFun$p$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    generics_fun_name=(char*)come_increment_ref_count(name);
    fun=((struct sFun*)(__right_value0=map$2char$phsFun$ph_at(info->funcs,generics_fun_name,((void*)0))));
    come_call_finalizer(sFun_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    if(fun==((void*)0)) {
        __dec_obj92=generics_fun_name,
        generics_fun_name=(char*)come_increment_ref_count(create_method_name(obj_type,0,((char*)(__right_value0=__builtin_string(fun_name))),info,1));
        __dec_obj92 = come_decrement_ref_count(__dec_obj92, (void*)0, (void*)0, 0,0, (void*)0);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        fun=((struct sFun*)(__right_value0=map$2char$phsFun$ph_at(info->funcs,generics_fun_name,((void*)0))));
        come_call_finalizer(sFun_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        if(fun==((void*)0)) {
            err_msg(info,"function not found(%s) at method(%s)(3)",generics_fun_name,info->come_fun->mName);
            __result_obj__0 = 1;
            come_call_finalizer(list$1CVALUE$ph$p_finalize, key_params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(list$1CVALUE$ph$p_finalize, element_params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, map_key_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, map_element_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, key_type_values, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sType_finalize, element_type_values, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (var_name2 = come_decrement_ref_count(var_name2, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(buffer_finalize, source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, map_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, obj_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
            (generics_fun_name = come_decrement_ref_count(generics_fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
            return __result_obj__0;
        }
    }
    result_type=(struct sType*)come_increment_ref_count(sType_clone(fun->mResultType));
    result_type->mStatic=0;
    type=(struct sType*)come_increment_ref_count(map_type);
    obj_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "06str.c", 749, "struct CVALUE*"))));
    num_string=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "06str.c", 751, "struct buffer*"))));
    buffer_append_str(num_string,"1");
    type2=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(type),(struct sType*)come_increment_ref_count(type),info));
    type_name=(char*)come_increment_ref_count(make_type_name_string(type2,info,0,1,0));
    any_type=(struct sType*)come_increment_ref_count(type2);
    any_type->mPointerNum=1;
    any_type->mHeap=1;
    if(({(_conditional_value_X0=(((struct sFun*)(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,"come_calloc_v2")))));    come_call_finalizer(sFun_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
_conditional_value_X0;})) {
        __dec_obj93=obj_value->c_value,
        obj_value->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc_v2(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",type_name,type_name,((char*)(__right_value0=buffer_to_string(num_string))),info->sname,info->sline,type_name));
        __dec_obj93 = come_decrement_ref_count(__dec_obj93, (void*)0, (void*)0, 0,0, (void*)0);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    }
    else {
        __dec_obj94=obj_value->c_value,
        obj_value->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",type_name,type_name,((char*)(__right_value0=buffer_to_string(num_string))),info->sname,info->sline,type_name));
        __dec_obj94 = come_decrement_ref_count(__dec_obj94, (void*)0, (void*)0, 0,0, (void*)0);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    }
    type3=(struct sType*)come_increment_ref_count(sType_clone(type2));
    type3->mPointerNum++;
    type3->mHeap=1;
    type2->mHeap=1;
    __dec_obj95=obj_value->type,
    obj_value->type=(struct sType*)come_increment_ref_count(sType_clone(type2));
    come_call_finalizer(sType_finalize, __dec_obj95,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    obj_value->var=((void*)0);
    append_object_to_right_values(obj_value,(struct sType*)come_increment_ref_count(type3),info,0,((void*)0),((void*)0),((void*)0));
    come_params=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "06str.c", 780, "struct list$1CVALUE$ph*"))));
    if(({(_conditional_value_X0=(((struct sType*)(__right_value0=list$1sType$ph_operator_load_element(fun->mParamTypes,0)))->mHeap&&obj_value->type->mHeap));    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
_conditional_value_X0;})) {
        std_move(((struct sType*)(__right_value0=list$1sType$ph_operator_load_element(fun->mParamTypes,0))),obj_value->type,obj_value,info);
        come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    }
    list$1CVALUE$ph_push_back(come_params,(struct CVALUE*)come_increment_ref_count(obj_value));
    come_value2_47=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "06str.c", 787, "struct CVALUE*"))));
    __dec_obj96=come_value2_47->c_value,
    come_value2_47->c_value=(char*)come_increment_ref_count(xsprintf("%d",list$1CVALUE$ph_length(key_params)));
    __dec_obj96 = come_decrement_ref_count(__dec_obj96, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj97=come_value2_47->type,
    come_value2_47->type=((void*)0);
    come_call_finalizer(sType_finalize, __dec_obj97,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_value2_47->var=((void*)0);
    list$1CVALUE$ph_push_back(come_params,(struct CVALUE*)come_increment_ref_count(come_value2_47));
    come_value3=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "06str.c", 795, "struct CVALUE*"))));
    __dec_obj98=come_value3->c_value,
    come_value3->c_value=(char*)come_increment_ref_count(xsprintf("%s",var_->mCValueName));
    __dec_obj98 = come_decrement_ref_count(__dec_obj98, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj99=come_value3->type,
    come_value3->type=((void*)0);
    come_call_finalizer(sType_finalize, __dec_obj99,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_value3->var=((void*)0);
    list$1CVALUE$ph_push_back(come_params,(struct CVALUE*)come_increment_ref_count(come_value3));
    come_value4=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "06str.c", 803, "struct CVALUE*"))));
    __dec_obj100=come_value4->c_value,
    come_value4->c_value=(char*)come_increment_ref_count(xsprintf("%s",var2_->mCValueName));
    __dec_obj100 = come_decrement_ref_count(__dec_obj100, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj101=come_value4->type,
    come_value4->type=((void*)0);
    come_call_finalizer(sType_finalize, __dec_obj101,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_value4->var=((void*)0);
    list$1CVALUE$ph_push_back(come_params,(struct CVALUE*)come_increment_ref_count(come_value4));
    buffer_append_str(source,generics_fun_name);
    buffer_append_str(source,"(");
    j=0;
    for(o2_saved=(struct list$1CVALUE$ph*)come_increment_ref_count(come_params),it=list$1CVALUE$ph_begin(o2_saved);!list$1CVALUE$ph_end(o2_saved);it=list$1CVALUE$ph_next(o2_saved)){
        buffer_append_str(source,it->c_value);
        if(j!=list$1CVALUE$ph_length(come_params)-1) {
            buffer_append_str(source,",");
        }
        j++;
    }
    come_call_finalizer(list$1CVALUE$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    buffer_append_str(source,")");
    buffer_append_str(source,")");
    come_value5=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "06str.c", 829, "struct CVALUE*"))));
    __dec_obj102=come_value5->c_value,
    come_value5->c_value=(char*)come_increment_ref_count(buffer_to_string(source));
    __dec_obj102 = come_decrement_ref_count(__dec_obj102, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj103=come_value5->type,
    come_value5->type=(struct sType*)come_increment_ref_count(sType_clone(result_type));
    come_call_finalizer(sType_finalize, __dec_obj103,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_value5->type->mStatic=0;
    come_value5->var=((void*)0);
    if(result_type->mHeap) {
        append_object_to_right_values(come_value5,(struct sType*)come_increment_ref_count(result_type),info,0,((void*)0),((void*)0),((void*)0));
    }
    add_come_last_code(info,"%s",come_value5->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value5));
    __result_obj__0 = 1;
    come_call_finalizer(list$1CVALUE$ph$p_finalize, key_params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1CVALUE$ph$p_finalize, element_params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, map_key_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, map_element_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, key_type_values, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sType_finalize, element_type_values, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (var_name2 = come_decrement_ref_count(var_name2, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(buffer_finalize, source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, map_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, obj_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
    (generics_fun_name = come_decrement_ref_count(generics_fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(CVALUE_finalize, obj_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(buffer_finalize, num_string, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sType_finalize, any_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type3, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value2_47, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value3, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value4, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value5, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__0;
}

static void sMapNode_finalize(struct sMapNode* self)
{
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->map_key_elements!=((void*)0)) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->map_key_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->map_elements!=((void*)0)) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->map_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static struct sNode* list$1sNode$ph$p_operator_load_element(struct list$1sNode$ph* self, int position)
{
    struct sNode* default_value;
    struct sNode* __result_obj__0;
    struct list_item$1sNode$ph* it;
    int i;
    struct sNode* default_value_43;
    if(self==((void*)0)) {
        memset(&default_value,0,sizeof(struct sNode*));
        __result_obj__0 = (struct sNode*)come_increment_ref_count(default_value);
        ((default_value) ? default_value = come_decrement_ref_count(default_value, ((struct sNode*)default_value)->finalize, ((struct sNode*)default_value)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__0;
        ((default_value) ? default_value = come_decrement_ref_count(default_value, ((struct sNode*)default_value)->finalize, ((struct sNode*)default_value)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    if(position<0) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(it!=((void*)0)) {
        if(position==i) {
            __result_obj__0 = (struct sNode*)come_increment_ref_count(it->item);
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__0;
        }
        it=it->next;
        i++;
    }
    memset(&default_value_43,0,sizeof(struct sNode*));
    __result_obj__0 = (struct sNode*)come_increment_ref_count(default_value_43);
    ((default_value_43) ? default_value_43 = come_decrement_ref_count(default_value_43, ((struct sNode*)default_value_43)->finalize, ((struct sNode*)default_value_43)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    return __result_obj__0;
}

static struct sNode* list$1sNode$ph_operator_load_element(struct list$1sNode$ph* self, int position)
{
    struct sNode* default_value;
    struct sNode* __result_obj__0;
    struct list_item$1sNode$ph* it;
    int i;
    struct sNode* default_value_44;
    if(self==((void*)0)) {
        memset(&default_value,0,sizeof(struct sNode*));
        __result_obj__0 = (struct sNode*)come_increment_ref_count(default_value);
        ((default_value) ? default_value = come_decrement_ref_count(default_value, ((struct sNode*)default_value)->finalize, ((struct sNode*)default_value)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__0;
        ((default_value) ? default_value = come_decrement_ref_count(default_value, ((struct sNode*)default_value)->finalize, ((struct sNode*)default_value)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    if(position<0) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(it!=((void*)0)) {
        if(position==i) {
            __result_obj__0 = (struct sNode*)come_increment_ref_count(it->item);
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__0;
        }
        it=it->next;
        i++;
    }
    memset(&default_value_44,0,sizeof(struct sNode*));
    __result_obj__0 = (struct sNode*)come_increment_ref_count(default_value_44);
    ((default_value_44) ? default_value_44 = come_decrement_ref_count(default_value_44, ((struct sNode*)default_value_44)->finalize, ((struct sNode*)default_value_44)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    return __result_obj__0;
}

struct sNode* expression_node_v96(struct sInfo* info)
{
    int sline_real;
    int sline;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1sNode$ph* exps;
    struct buffer* value;
    char* head_of_last_line;
    int len;
    struct sNode* exp;
    int sline2;
    void* __right_value2 = (void*)0;
    struct sNode* _inf_value1;
    struct sSStringNode* _inf_obj_value1;
    void* __right_value3 = (void*)0;
    struct sNode* __result_obj__0;
    int sline_real_48;
    int sline_49;
    struct buffer* value_50;
    char* p;
    int sline_51;
    int sline2_52;
    struct sNode* _inf_value2;
    struct sStrNode* _inf_obj_value2;
    int sline_real_53;
    int sline_54;
    struct buffer* value_55;
    unsigned long  int size;
    char* p_56;
    int sline_57;
    int len_58;
    int sline2_59;
    struct sNode* _inf_value3;
    struct sBufferNode* _inf_obj_value3;
    int sline_real_60;
    int sline_61;
    struct buffer* buf;
    _Bool global;
    _Bool ignore_case;
    struct sNode* _inf_value4;
    struct sStrNode* _inf_obj_value4;
    struct sNode* obj;
    struct list$1tuple2$2char$phsNode$ph$ph* params;
    void* __right_value4 = (void*)0;
    void* __right_value5 = (void*)0;
    void* __right_value6 = (void*)0;
    struct buffer* method_block;
    int method_block_sline;
    struct list$1sType$ph* method_generics_types;
    struct sNode* node;
    int sline_real_62;
    int sline_63;
    struct buffer* value_64;
    char* p_65;
    int sline_66;
    int len_67;
    int sline2_68;
    _Bool global_69;
    _Bool ignore_case_70;
    struct sNode* _inf_value5;
    struct sStrNode* _inf_obj_value5;
    struct sNode* obj_71;
    struct list$1tuple2$2char$phsNode$ph$ph* params_72;
    struct buffer* method_block_73;
    int method_block_sline_74;
    struct list$1sType$ph* method_generics_types_75;
    struct sNode* node_76;
    int sline_real_77;
    int c;
    int n;
    int n_78;
    unsigned long long int n_80;
    struct sNode* _inf_value6;
    struct sCharNode* _inf_obj_value6;
    int sline_real_81;
    int c_82;
    _Bool quote;
    int n_83;
    int n_84;
    unsigned long long int n_87;
    unsigned char p2;
    int size_88;
    struct sNode* _inf_value7;
    struct sWCharNode* _inf_obj_value7;
    int sline_real_89;
    int sline_90;
    struct buffer* value_91;
    char* p_92;
    int sline_93;
    int sline2_94;
    int len_95;
    int* wstr;
    char* str_96;
    struct sNode* _inf_value8;
    struct sWStringNode* _inf_obj_value8;
    int sline_real_97;
    int sline_98;
    struct list$1sNode$ph* exps_99;
    struct buffer* value_100;
    char* p_101;
    int sline_102;
    int len_103;
    struct sNode* exp_104;
    int sline2_105;
    struct sNode* _inf_value9;
    struct sSStringNode* _inf_obj_value9;
    int sline_real_106;
    char* p_107;
    _Bool no_comma;
    struct sNode* node_108;
    char* p2_109;
    struct buffer* first_element_source;
    struct list$1sNode$ph* list_elements;
    struct list$1sNode$ph* map_keys;
    struct list$1sNode$ph* map_elements;
    _Bool no_comma_110;
    struct sNode* node2;
    struct sNode* _inf_value10;
    struct sMapNode* _inf_obj_value10;
    int __exception_result_var_b30;
    _Bool no_comma_111;
    struct sNode* node2_112;
    int __exception_result_var_b31;
    struct sNode* node3;
    struct sNode* _inf_value11;
    struct sMapNode* _inf_obj_value11;
    _Bool no_comma_113;
    struct sNode* node2_114;
    struct sNode* _inf_value12;
    struct sListNode* _inf_obj_value12;
    struct sNode* node_115;
    memset(&c, 0, sizeof(c));
    memset(&c_82, 0, sizeof(c_82));
    memset(&quote, 0, sizeof(quote));
    memset(&size_88, 0, sizeof(size_88));
    if(*info->p==34&&*(info->p+1)==34&&*(info->p+2)==34&&*(info->p+3)==10) {
        sline_real=info->sline_real;
        info->sline_real=info->sline;
        info->p+=4;
        info->sline++;
        sline=info->sline;
        exps=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "06str.c", 859, "struct list$1sNode$ph*"))));
        value=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "06str.c", 860, "struct buffer*"))));
        head_of_last_line=((void*)0);
        while(1) {
            if(*info->p==34&&*(info->p+1)==34&&*(info->p+2)==34) {
                if(head_of_last_line) {
                    buffer_trim(value,info->p-head_of_last_line);
                }
                info->p+=3;
                skip_spaces_and_lf(info);
                break;
            }
            else if(*info->p==37) {
                buffer_append_char(value,37);
                buffer_append_char(value,37);
                info->p++;
            }
            else if(*info->p==34) {
                buffer_append_char(value,92);
                buffer_append_char(value,34);
                info->p++;
            }
            else if(*info->p==92) {
                buffer_append_char(value,92);
                info->p++;
                if(((*__ctype_b_loc())[(int)((*info->p))]&(unsigned short int)(((((3)<8)?(((1<<(3))<<8)):(((1<<(3))>>8))))))) {
                    len=0;
                    while(((*__ctype_b_loc())[(int)((*info->p))]&(unsigned short int)(((((3)<8)?(((1<<(3))<<8)):(((1<<(3))>>8))))))&&len<3) {
                        buffer_append_char(value,*info->p);
                        info->p++;
                        len++;
                    }
                }
                else if(*info->p==120||*info->p==88) {
                    buffer_append_char(value,*info->p);
                    info->p++;
                    while(*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70) {
                        buffer_append_char(value,*info->p);
                        info->p++;
                    }
                }
                else if(*info->p==123) {
                    info->p++;
                    exp=(struct sNode*)come_increment_ref_count(expression_v13(info,0));
                    list$1sNode$ph_add(exps,(struct sNode*)come_increment_ref_count(exp));
                    if(*info->p==125) {
                        info->p++;
                    }
                    buffer_append_str(value,"%s");
                    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                }
                else {
                    switch (                    *info->p) {
                        case 48:
                        buffer_append_char(value,*info->p);
                        info->p++;
                        break;
                        case 110:
                        buffer_append_char(value,*info->p);
                        info->p++;
                        break;
                        case 116:
                        buffer_append_char(value,*info->p);
                        info->p++;
                        break;
                        case 114:
                        buffer_append_char(value,*info->p);
                        info->p++;
                        break;
                        case 118:
                        buffer_append_char(value,*info->p);
                        info->p++;
                        break;
                        case 102:
                        buffer_append_char(value,*info->p);
                        info->p++;
                        break;
                        case 97:
                        buffer_append_char(value,*info->p);
                        info->p++;
                        break;
                        case 98:
                        buffer_append_char(value,*info->p);
                        info->p++;
                        break;
                        case 92:
                        buffer_append_char(value,*info->p);
                        info->p++;
                        break;
                        default:
                        buffer_append_char(value,*info->p);
                        info->p++;
                        break;
                    }
                }
            }
            else if(*info->p==0) {
                sline2=info->sline;
                info->sline=sline;
                err_msg(info,"close \" to make embbeded string value");
                exit(2);
            }
            else {
                if(*info->p==10) {
                    buffer_append_char(value,92);
                    buffer_append_char(value,110);
                    info->p++;
                    info->sline++;
                    head_of_last_line=info->p;
                }
                else {
                    buffer_append_char(value,*info->p);
                    info->p++;
                }
            }
        }
        skip_spaces_and_lf(info);
        info->sline_real=sline_real;
        _inf_value1=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "06str.c", 999, "struct sNode");
        _inf_obj_value1=(struct sSStringNode*)come_increment_ref_count(((struct sSStringNode*)(__right_value2=sSStringNode_initialize((struct sSStringNode*)come_increment_ref_count((struct sSStringNode*)come_calloc_v2(1, sizeof(struct sSStringNode)*(1), "06str.c", 999, "struct sSStringNode*")),(char*)come_increment_ref_count(buffer_to_string(value)),(struct list$1sNode$ph*)come_increment_ref_count(exps),sline,info))));
        _inf_value1->_protocol_obj=_inf_obj_value1;
        _inf_value1->finalize=(void*)sSStringNode_finalize;
        _inf_value1->clone=(void*)sSStringNode_clone;
        _inf_value1->compile=(void*)sSStringNode_compile;
        _inf_value1->sline=(void*)sNodeBase_sline;
        _inf_value1->sline_real=(void*)sNodeBase_sline_real;
        _inf_value1->sname=(void*)sNodeBase_sname;
        _inf_value1->terminated=(void*)sNodeBase_terminated;
        _inf_value1->kind=(void*)sSStringNode_kind;
        _inf_value1->no_mutex=(void*)sNodeBase_no_mutex;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value3=_inf_value1)));
        come_call_finalizer(list$1sNode$ph$p_finalize, exps, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(buffer_finalize, value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sSStringNode_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        ((__right_value3) ? __right_value3 = come_decrement_ref_count(__right_value3, ((struct sNode*)__right_value3)->finalize, ((struct sNode*)__right_value3)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__0;
        come_call_finalizer(list$1sNode$ph$p_finalize, exps, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(buffer_finalize, value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(*info->p==34) {
        sline_real_48=info->sline_real;
        info->sline_real=info->sline;
        info->p++;
        sline_49=info->sline;
        value_50=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "06str.c", 1009, "struct buffer*"))));
        while(1) {
            if(*info->p==34) {
                info->p++;
                p=info->p;
                sline_51=info->sline;
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                if(*info->p==34) {
                    info->p++;
                }
                else {
                    info->p=p;
                    info->sline=sline_51;
                    break;
                }
            }
            else if(*info->p==92) {
                buffer_append_char(value_50,92);
                info->p++;
                if(*info->p==34) {
                    buffer_append_char(value_50,34);
                    info->p++;
                }
                else {
                    buffer_append_char(value_50,*info->p);
                    info->p++;
                }
            }
            else if(*info->p==0) {
                sline2_52=info->sline;
                info->sline=sline_49;
                err_msg(info,"close \" to make c string value");
                info->sline=sline2_52;
                exit(2);
            }
            else {
                if(*info->p==10) {
                    info->sline++;
                }
                buffer_append_char(value_50,*info->p);
                info->p++;
            }
        }
        skip_spaces_and_lf(info);
        info->sline_real=sline_real_48;
        _inf_value2=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "06str.c", 1062, "struct sNode");
        _inf_obj_value2=(struct sStrNode*)come_increment_ref_count(((struct sStrNode*)(__right_value2=sStrNode_initialize((struct sStrNode*)come_increment_ref_count((struct sStrNode*)come_calloc_v2(1, sizeof(struct sStrNode)*(1), "06str.c", 1062, "struct sStrNode*")),(char*)come_increment_ref_count(buffer_to_string(value_50)),sline_49,info))));
        _inf_value2->_protocol_obj=_inf_obj_value2;
        _inf_value2->finalize=(void*)sStrNode_finalize;
        _inf_value2->clone=(void*)sStrNode_clone;
        _inf_value2->compile=(void*)sStrNode_compile;
        _inf_value2->sline=(void*)sNodeBase_sline;
        _inf_value2->sline_real=(void*)sNodeBase_sline_real;
        _inf_value2->sname=(void*)sNodeBase_sname;
        _inf_value2->terminated=(void*)sNodeBase_terminated;
        _inf_value2->kind=(void*)sStrNode_kind;
        _inf_value2->no_mutex=(void*)sNodeBase_no_mutex;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value3=_inf_value2)));
        come_call_finalizer(buffer_finalize, value_50, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sStrNode_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        ((__right_value3) ? __right_value3 = come_decrement_ref_count(__right_value3, ((struct sNode*)__right_value3)->finalize, ((struct sNode*)__right_value3)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__0;
        come_call_finalizer(buffer_finalize, value_50, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if((*info->p==98||*info->p==66)&&*(info->p+1)==34) {
        sline_real_53=info->sline_real;
        info->sline_real=info->sline;
        info->p+=2;
        sline_54=info->sline;
        value_55=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "06str.c", 1072, "struct buffer*"))));
        size=0;
        while(1) {
            if(*info->p==34) {
                info->p++;
                p_56=info->p;
                sline_57=info->sline;
                skip_spaces_and_lf(info);
                if(*info->p==34) {
                    info->p++;
                }
                else {
                    info->p=p_56;
                    info->sline=sline_57;
                    break;
                }
            }
            else if(*info->p==92) {
                buffer_append_char(value_55,92);
                info->p++;
                if(((*__ctype_b_loc())[(int)((*info->p))]&(unsigned short int)(((((3)<8)?(((1<<(3))<<8)):(((1<<(3))>>8))))))) {
                    len_58=0;
                    while(((*__ctype_b_loc())[(int)((*info->p))]&(unsigned short int)(((((3)<8)?(((1<<(3))<<8)):(((1<<(3))>>8))))))&&len_58<3) {
                        buffer_append_char(value_55,*info->p);
                        info->p++;
                        len_58++;
                    }
                    size++;
                }
                else if(*info->p==120||*info->p==88) {
                    buffer_append_char(value_55,*info->p);
                    info->p++;
                    while(*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70) {
                        buffer_append_char(value_55,*info->p);
                        info->p++;
                    }
                    size++;
                }
                else {
                    switch (                    *info->p) {
                        case 48:
                        buffer_append_char(value_55,*info->p);
                        info->p++;
                        size++;
                        break;
                        case 110:
                        buffer_append_char(value_55,*info->p);
                        info->p++;
                        size++;
                        break;
                        case 116:
                        buffer_append_char(value_55,*info->p);
                        info->p++;
                        size++;
                        break;
                        case 114:
                        buffer_append_char(value_55,*info->p);
                        info->p++;
                        size++;
                        break;
                        case 118:
                        buffer_append_char(value_55,*info->p);
                        info->p++;
                        size++;
                        break;
                        case 102:
                        buffer_append_char(value_55,*info->p);
                        info->p++;
                        size++;
                        break;
                        case 97:
                        buffer_append_char(value_55,*info->p);
                        info->p++;
                        size++;
                        break;
                        case 98:
                        buffer_append_char(value_55,*info->p);
                        info->p++;
                        size++;
                        break;
                        case 92:
                        buffer_append_char(value_55,*info->p);
                        info->p++;
                        size++;
                        break;
                        default:
                        buffer_append_char(value_55,*info->p);
                        info->p++;
                        size++;
                        break;
                    }
                }
            }
            else if(*info->p==0) {
                sline2_59=info->sline;
                info->sline=sline_54;
                err_msg(info,"close \" to make embbeded string value");
                exit(2);
            }
            else {
                if(*info->p==10) {
                    info->sline++;
                }
                buffer_append_char(value_55,*info->p);
                info->p++;
                size++;
            }
        }
        skip_spaces_and_lf(info);
        info->sline_real=sline_real_53;
        _inf_value3=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "06str.c", 1199, "struct sNode");
        _inf_obj_value3=(struct sBufferNode*)come_increment_ref_count(((struct sBufferNode*)(__right_value1=sBufferNode_initialize((struct sBufferNode*)come_increment_ref_count((struct sBufferNode*)come_calloc_v2(1, sizeof(struct sBufferNode)*(1), "06str.c", 1199, "struct sBufferNode*")),(struct buffer*)come_increment_ref_count(value_55),size,info))));
        _inf_value3->_protocol_obj=_inf_obj_value3;
        _inf_value3->finalize=(void*)sBufferNode_finalize;
        _inf_value3->clone=(void*)sBufferNode_clone;
        _inf_value3->compile=(void*)sBufferNode_compile;
        _inf_value3->sline=(void*)sNodeBase_sline;
        _inf_value3->sline_real=(void*)sNodeBase_sline_real;
        _inf_value3->sname=(void*)sNodeBase_sname;
        _inf_value3->terminated=(void*)sNodeBase_terminated;
        _inf_value3->kind=(void*)sBufferNode_kind;
        _inf_value3->no_mutex=(void*)sNodeBase_no_mutex;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value3)));
        come_call_finalizer(buffer_finalize, value_55, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sBufferNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__0;
        come_call_finalizer(buffer_finalize, value_55, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(*info->p==47&&*(info->p-1)!=42&&*(info->p+1)!=42) {
        sline_real_60=info->sline_real;
        info->sline_real=info->sline;
        info->p++;
        sline_61=info->sline;
        buf=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "06str.c", 1208, "struct buffer*"))));
        while(1) {
            if(*info->p==92&&*(info->p+1)==47) {
                info->p++;
                buffer_append_char(buf,*info->p);
                info->p++;
            }
            else if(*info->p==47) {
                info->p++;
                break;
            }
            else if(*info->p==0) {
                err_msg(info,"require closing / for regex");
                exit(5);
            }
            else {
                buffer_append_char(buf,*info->p);
                info->p++;
            }
        }
        global=0;
        ignore_case=0;
        while(*info->p==103||*info->p==105) {
            if(*info->p==103) {
                info->p++;
                global=1;
            }
            else if(*info->p==105) {
                info->p++;
                ignore_case=1;
            }
            else {
                break;
            }
        }
        skip_spaces_and_lf(info);
        _inf_value4=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "06str.c", 1247, "struct sNode");
        _inf_obj_value4=(struct sStrNode*)come_increment_ref_count(((struct sStrNode*)(__right_value2=sStrNode_initialize((struct sStrNode*)come_increment_ref_count((struct sStrNode*)come_calloc_v2(1, sizeof(struct sStrNode)*(1), "06str.c", 1247, "struct sStrNode*")),(char*)come_increment_ref_count(buffer_to_string(buf)),sline_61,info))));
        _inf_value4->_protocol_obj=_inf_obj_value4;
        _inf_value4->finalize=(void*)sStrNode_finalize;
        _inf_value4->clone=(void*)sStrNode_clone;
        _inf_value4->compile=(void*)sStrNode_compile;
        _inf_value4->sline=(void*)sNodeBase_sline;
        _inf_value4->sline_real=(void*)sNodeBase_sline_real;
        _inf_value4->sname=(void*)sNodeBase_sname;
        _inf_value4->terminated=(void*)sNodeBase_terminated;
        _inf_value4->kind=(void*)sStrNode_kind;
        _inf_value4->no_mutex=(void*)sNodeBase_no_mutex;
        obj=(struct sNode*)come_increment_ref_count(_inf_value4);
        come_call_finalizer(sStrNode_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "06str.c", 1249, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
        list$1tuple2$2char$phsNode$ph$ph_add(params,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1251, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(obj))));
        list$1tuple2$2char$phsNode$ph$ph_add(params,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1252, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("ignore_case")),(struct sNode*)come_increment_ref_count(((ignore_case)?(((struct sNode*)(__right_value2=create_int_node((char*)come_increment_ref_count(int_to_string(1)),info)))):(((struct sNode*)(__right_value4=create_int_node((char*)come_increment_ref_count(int_to_string(0)),info)))))))));
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        ((__right_value4) ? __right_value4 = come_decrement_ref_count(__right_value4, ((struct sNode*)__right_value4)->finalize, ((struct sNode*)__right_value4)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        list$1tuple2$2char$phsNode$ph$ph_add(params,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1253, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("multiline")),(struct sNode*)come_increment_ref_count(create_int_node((char*)come_increment_ref_count(int_to_string(0)),info)))));
        list$1tuple2$2char$phsNode$ph$ph_add(params,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1254, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("global")),(struct sNode*)come_increment_ref_count(((global)?(((struct sNode*)(__right_value2=create_int_node((char*)come_increment_ref_count(int_to_string(1)),info)))):(((struct sNode*)(__right_value4=create_int_node((char*)come_increment_ref_count(int_to_string(0)),info)))))))));
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        ((__right_value4) ? __right_value4 = come_decrement_ref_count(__right_value4, ((struct sNode*)__right_value4)->finalize, ((struct sNode*)__right_value4)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        list$1tuple2$2char$phsNode$ph$ph_add(params,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1255, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("extended")),(struct sNode*)come_increment_ref_count(create_int_node((char*)come_increment_ref_count(int_to_string(0)),info)))));
        list$1tuple2$2char$phsNode$ph$ph_add(params,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1256, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("dotall")),(struct sNode*)come_increment_ref_count(create_int_node((char*)come_increment_ref_count(int_to_string(0)),info)))));
        list$1tuple2$2char$phsNode$ph$ph_add(params,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1257, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("anchored")),(struct sNode*)come_increment_ref_count(create_int_node((char*)come_increment_ref_count(int_to_string(0)),info)))));
        list$1tuple2$2char$phsNode$ph$ph_add(params,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1258, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("dollar_endonly")),(struct sNode*)come_increment_ref_count(create_int_node((char*)come_increment_ref_count(int_to_string(0)),info)))));
        list$1tuple2$2char$phsNode$ph$ph_add(params,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1259, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("ungreedy")),(struct sNode*)come_increment_ref_count(create_int_node((char*)come_increment_ref_count(int_to_string(0)),info)))));
        method_block=((void*)0);
        method_block_sline=info->sline;
        method_generics_types=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "06str.c", 1265, "struct list$1sType$ph*"))));
        node=(struct sNode*)come_increment_ref_count(create_method_call("to_regex",(struct sNode*)come_increment_ref_count(obj),(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(params),method_block,method_block_sline,method_generics_types,info));
        info->sline_real=sline_real_60;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(node);
        come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__0;
        come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    else if((*info->p==82||*info->p==114)&&*(info->p+1)==34) {
        sline_real_62=info->sline_real;
        info->sline_real=info->sline;
        info->p+=2;
        sline_63=info->sline;
        value_64=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "06str.c", 1279, "struct buffer*"))));
        while(1) {
            if(*info->p==34) {
                info->p++;
                p_65=info->p;
                sline_66=info->sline;
                skip_spaces_and_lf(info);
                if(*info->p==34) {
                    info->p++;
                }
                else {
                    info->p=p_65;
                    info->sline=sline_66;
                    break;
                }
            }
            else if(*info->p==92) {
                buffer_append_char(value_64,92);
                info->p++;
                if(((*__ctype_b_loc())[(int)((*info->p))]&(unsigned short int)(((((3)<8)?(((1<<(3))<<8)):(((1<<(3))>>8))))))) {
                    len_67=0;
                    while(((*__ctype_b_loc())[(int)((*info->p))]&(unsigned short int)(((((3)<8)?(((1<<(3))<<8)):(((1<<(3))>>8))))))&&len_67<3) {
                        buffer_append_char(value_64,*info->p);
                        info->p++;
                        len_67++;
                    }
                }
                else if(*info->p==120||*info->p==88) {
                    buffer_append_char(value_64,*info->p);
                    info->p++;
                    while(*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70) {
                        buffer_append_char(value_64,*info->p);
                        info->p++;
                    }
                }
                else {
                    switch (                    *info->p) {
                        case 48:
                        buffer_append_char(value_64,*info->p);
                        info->p++;
                        break;
                        case 110:
                        buffer_append_char(value_64,*info->p);
                        info->p++;
                        break;
                        case 116:
                        buffer_append_char(value_64,*info->p);
                        info->p++;
                        break;
                        case 114:
                        buffer_append_char(value_64,*info->p);
                        info->p++;
                        break;
                        case 118:
                        buffer_append_char(value_64,*info->p);
                        info->p++;
                        break;
                        case 102:
                        buffer_append_char(value_64,*info->p);
                        info->p++;
                        break;
                        case 97:
                        buffer_append_char(value_64,*info->p);
                        info->p++;
                        break;
                        case 98:
                        buffer_append_char(value_64,*info->p);
                        info->p++;
                        break;
                        case 92:
                        buffer_append_char(value_64,*info->p);
                        info->p++;
                        break;
                        default:
                        buffer_append_char(value_64,*info->p);
                        info->p++;
                        break;
                    }
                }
            }
            else if(*info->p==0) {
                sline2_68=info->sline;
                info->sline=sline_63;
                err_msg(info,"close \" to make embbeded string value");
                exit(2);
            }
            else {
                if(*info->p==10) {
                    info->sline++;
                }
                buffer_append_char(value_64,*info->p);
                info->p++;
            }
        }
        global_69=0;
        ignore_case_70=0;
        while(*info->p==103||*info->p==105) {
            if(*info->p==103) {
                info->p++;
                global_69=1;
            }
            else if(*info->p==105) {
                info->p++;
                ignore_case_70=1;
            }
            else {
                break;
            }
        }
        skip_spaces_and_lf(info);
        _inf_value5=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "06str.c", 1405, "struct sNode");
        _inf_obj_value5=(struct sStrNode*)come_increment_ref_count(((struct sStrNode*)(__right_value2=sStrNode_initialize((struct sStrNode*)come_increment_ref_count((struct sStrNode*)come_calloc_v2(1, sizeof(struct sStrNode)*(1), "06str.c", 1405, "struct sStrNode*")),(char*)come_increment_ref_count(buffer_to_string(value_64)),sline_63,info))));
        _inf_value5->_protocol_obj=_inf_obj_value5;
        _inf_value5->finalize=(void*)sStrNode_finalize;
        _inf_value5->clone=(void*)sStrNode_clone;
        _inf_value5->compile=(void*)sStrNode_compile;
        _inf_value5->sline=(void*)sNodeBase_sline;
        _inf_value5->sline_real=(void*)sNodeBase_sline_real;
        _inf_value5->sname=(void*)sNodeBase_sname;
        _inf_value5->terminated=(void*)sNodeBase_terminated;
        _inf_value5->kind=(void*)sStrNode_kind;
        _inf_value5->no_mutex=(void*)sNodeBase_no_mutex;
        obj_71=(struct sNode*)come_increment_ref_count(_inf_value5);
        come_call_finalizer(sStrNode_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        params_72=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "06str.c", 1407, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
        list$1tuple2$2char$phsNode$ph$ph_add(params_72,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1409, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(obj_71))));
        list$1tuple2$2char$phsNode$ph$ph_add(params_72,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1410, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("ignore_case")),(struct sNode*)come_increment_ref_count(((ignore_case_70)?(((struct sNode*)(__right_value2=create_int_node((char*)come_increment_ref_count(int_to_string(1)),info)))):(((struct sNode*)(__right_value4=create_int_node((char*)come_increment_ref_count(int_to_string(0)),info)))))))));
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        ((__right_value4) ? __right_value4 = come_decrement_ref_count(__right_value4, ((struct sNode*)__right_value4)->finalize, ((struct sNode*)__right_value4)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        list$1tuple2$2char$phsNode$ph$ph_add(params_72,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1411, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("multiline")),(struct sNode*)come_increment_ref_count(create_int_node((char*)come_increment_ref_count(int_to_string(0)),info)))));
        list$1tuple2$2char$phsNode$ph$ph_add(params_72,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1412, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("global")),(struct sNode*)come_increment_ref_count(((global_69)?(((struct sNode*)(__right_value2=create_int_node((char*)come_increment_ref_count(int_to_string(1)),info)))):(((struct sNode*)(__right_value4=create_int_node((char*)come_increment_ref_count(int_to_string(0)),info)))))))));
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        ((__right_value4) ? __right_value4 = come_decrement_ref_count(__right_value4, ((struct sNode*)__right_value4)->finalize, ((struct sNode*)__right_value4)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        list$1tuple2$2char$phsNode$ph$ph_add(params_72,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1413, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("extended")),(struct sNode*)come_increment_ref_count(create_int_node((char*)come_increment_ref_count(int_to_string(0)),info)))));
        list$1tuple2$2char$phsNode$ph$ph_add(params_72,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1414, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("dotall")),(struct sNode*)come_increment_ref_count(create_int_node((char*)come_increment_ref_count(int_to_string(0)),info)))));
        list$1tuple2$2char$phsNode$ph$ph_add(params_72,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1415, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("anchored")),(struct sNode*)come_increment_ref_count(create_int_node((char*)come_increment_ref_count(int_to_string(0)),info)))));
        list$1tuple2$2char$phsNode$ph$ph_add(params_72,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1416, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("dollar_endonly")),(struct sNode*)come_increment_ref_count(create_int_node((char*)come_increment_ref_count(int_to_string(0)),info)))));
        list$1tuple2$2char$phsNode$ph$ph_add(params_72,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1417, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("ungreedy")),(struct sNode*)come_increment_ref_count(create_int_node((char*)come_increment_ref_count(int_to_string(0)),info)))));
        method_block_73=((void*)0);
        method_block_sline_74=info->sline;
        method_generics_types_75=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "06str.c", 1423, "struct list$1sType$ph*"))));
        node_76=(struct sNode*)come_increment_ref_count(create_method_call("to_regex",(struct sNode*)come_increment_ref_count(obj_71),(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(params_72),method_block_73,method_block_sline_74,method_generics_types_75,info));
        info->sline_real=sline_real_62;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(node_76);
        come_call_finalizer(buffer_finalize, value_64, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((obj_71) ? obj_71 = come_decrement_ref_count(obj_71, ((struct sNode*)obj_71)->finalize, ((struct sNode*)obj_71)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params_72, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types_75, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((node_76) ? node_76 = come_decrement_ref_count(node_76, ((struct sNode*)node_76)->finalize, ((struct sNode*)node_76)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__0;
        come_call_finalizer(buffer_finalize, value_64, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((obj_71) ? obj_71 = come_decrement_ref_count(obj_71, ((struct sNode*)obj_71)->finalize, ((struct sNode*)obj_71)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params_72, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types_75, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((node_76) ? node_76 = come_decrement_ref_count(node_76, ((struct sNode*)node_76)->finalize, ((struct sNode*)node_76)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    else if(*info->p==39) {
        sline_real_77=info->sline_real;
        info->sline_real=info->sline;
        info->p++;
        if(*info->p==92) {
            info->p++;
            if(((*__ctype_b_loc())[(int)((*info->p))]&(unsigned short int)(((((3)<8)?(((1<<(3))<<8)):(((1<<(3))>>8))))))) {
                n=0;
                while(((*__ctype_b_loc())[(int)((*info->p))]&(unsigned short int)(((((3)<8)?(((1<<(3))<<8)):(((1<<(3))>>8))))))) {
                    n=n*8+*info->p-48;
                    info->p++;
                }
                c=n;
            }
            else {
                switch (                *info->p) {
                    case 110:
                    c=10;
                    info->p++;
                    break;
                    case 116:
                    c=9;
                    info->p++;
                    break;
                    case 114:
                    c=13;
                    info->p++;
                    break;
                    case 97:
                    c=7;
                    info->p++;
                    break;
                    case 102:
                    c=12;
                    info->p++;
                    break;
                    case 118:
                    c=11;
                    info->p++;
                    break;
                    case 98:
                    c=8;
                    info->p++;
                    break;
                    case 92:
                    c=92;
                    info->p++;
                    break;
                    case 48:
                    c=0;
                    info->p++;
                    if(((*__ctype_b_loc())[(int)((*info->p))]&(unsigned short int)(((((3)<8)?(((1<<(3))<<8)):(((1<<(3))>>8))))))) {
                        n_78=0;
                        while(((*__ctype_b_loc())[(int)((*info->p))]&(unsigned short int)(((((3)<8)?(((1<<(3))<<8)):(((1<<(3))>>8))))))) {
                            n_78=n_78*8+*info->p-48;
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        c=n_78;
                    }
                    break;
                    case 120:
                    case 88:
                    {
                        info->p++;
                        char buf_79[128];
                        memset(&buf_79, 0, sizeof(buf_79));
                        strncpy(buf_79,"0x",128);
                        while(*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70) {
                            char buf2[2];
                            memset(&buf2, 0, sizeof(buf2));
                            buf2[0]=*info->p;
                            buf2[1]=0;
                            info->p++;
                            strncat(buf_79,buf2,128);
                        }
                        n_80=strtoll(buf_79,((void*)0),0);
                        c=n_80;
                    }
                    break;
                    default:
                    c=*info->p;
                    info->p++;
                    break;
                }
            }
        }
        else {
            c=*info->p;
            info->p++;
        }
        if(*info->p!=39) {
            err_msg(info,"close \' to make character value");
            exit(1);
        }
        else {
            info->p++;
            skip_spaces_and_lf(info);
            info->sline_real=sline_real_77;
            _inf_value6=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "06str.c", 1549, "struct sNode");
            _inf_obj_value6=(struct sCharNode*)come_increment_ref_count(((struct sCharNode*)(__right_value1=sCharNode_initialize((struct sCharNode*)come_increment_ref_count((struct sCharNode*)come_calloc_v2(1, sizeof(struct sCharNode)*(1), "06str.c", 1549, "struct sCharNode*")),c,info))));
            _inf_value6->_protocol_obj=_inf_obj_value6;
            _inf_value6->finalize=(void*)sCharNode_finalize;
            _inf_value6->clone=(void*)sCharNode_clone;
            _inf_value6->compile=(void*)sCharNode_compile;
            _inf_value6->sline=(void*)sNodeBase_sline;
            _inf_value6->sline_real=(void*)sNodeBase_sline_real;
            _inf_value6->sname=(void*)sNodeBase_sname;
            _inf_value6->terminated=(void*)sNodeBase_terminated;
            _inf_value6->kind=(void*)sCharNode_kind;
            _inf_value6->no_mutex=(void*)sNodeBase_no_mutex;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value6)));
            come_call_finalizer(sCharNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__0;
        }
    }
    else if(*info->p==76&&*(info->p+1)==39) {
        sline_real_81=info->sline_real;
        info->sline_real=info->sline;
        info->p+=2;
        if(*info->p==92) {
            quote=1;
            info->p++;
            if(((*__ctype_b_loc())[(int)((*info->p))]&(unsigned short int)(((((3)<8)?(((1<<(3))<<8)):(((1<<(3))>>8))))))) {
                n_83=0;
                while(((*__ctype_b_loc())[(int)((*info->p))]&(unsigned short int)(((((3)<8)?(((1<<(3))<<8)):(((1<<(3))>>8))))))) {
                    n_83=n_83*8+*info->p-48;
                    info->p++;
                }
                c_82=n_83;
            }
            else {
                switch (                *info->p) {
                    case 110:
                    c_82=10;
                    info->p++;
                    break;
                    case 116:
                    c_82=9;
                    info->p++;
                    break;
                    case 114:
                    c_82=13;
                    info->p++;
                    break;
                    case 97:
                    c_82=7;
                    info->p++;
                    break;
                    case 92:
                    c_82=92;
                    info->p++;
                    break;
                    case 48:
                    c_82=0;
                    info->p++;
                    if(((*__ctype_b_loc())[(int)((*info->p))]&(unsigned short int)(((((3)<8)?(((1<<(3))<<8)):(((1<<(3))>>8))))))) {
                        n_84=0;
                        while(((*__ctype_b_loc())[(int)((*info->p))]&(unsigned short int)(((((3)<8)?(((1<<(3))<<8)):(((1<<(3))>>8))))))) {
                            n_84=n_84*8+*info->p-48;
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        c_82=n_84;
                    }
                    break;
                    case 120:
                    case 88:
                    {
                        info->p++;
                        char buf_85[128];
                        memset(&buf_85, 0, sizeof(buf_85));
                        strncpy(buf_85,"0x",128);
                        while(*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70) {
                            char buf2_86[2];
                            memset(&buf2_86, 0, sizeof(buf2_86));
                            buf2_86[0]=*info->p;
                            buf2_86[1]=0;
                            info->p++;
                            strncat(buf_85,buf2_86,128);
                        }
                        n_87=strtoll(buf_85,((void*)0),0);
                        c_82=n_87;
                    }
                    break;
                    default:
                    c_82=*info->p;
                    info->p++;
                    break;
                }
            }
        }
        else {
            quote=0;
            p2=*(unsigned char*)info->p;
            if(p2>127) {
                char str[16+1];
                memset(&str, 0, sizeof(str));
                size_88=((p2&0x80)>>7)+((p2&0x40)>>6)+((p2&0x20)>>5)+((p2&0x10)>>4);
                if(size_88>16) {
                    err_msg(info,"invalid utf-8 character. MB_LEN_MAX");
                    info->err_num++;
                    exit(2);
                }
                else {
                    memcpy(str,info->p,size_88);
                    str[size_88]=0;
                    if(mbtowc(&c_82,str,size_88)<0) {
                        perror("mbtowc");
                        err_msg(info,"invalid utf-8 character. mbtowc");
                        info->err_num++;
                        exit(2);
                    }
                    else {
                        info->p+=size_88;
                    }
                }
            }
            else {
                c_82=*info->p;
                info->p++;
            }
        }
        if(*info->p!=39) {
            err_msg(info,"close \' to make character value");
            info->err_num++;
            exit(2);
        }
        else {
            info->p++;
            skip_spaces_and_lf(info);
            info->sline_real=sline_real_81;
            _inf_value7=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "06str.c", 1695, "struct sNode");
            _inf_obj_value7=(struct sWCharNode*)come_increment_ref_count(((struct sWCharNode*)(__right_value1=sWCharNode_initialize((struct sWCharNode*)come_increment_ref_count((struct sWCharNode*)come_calloc_v2(1, sizeof(struct sWCharNode)*(1), "06str.c", 1695, "struct sWCharNode*")),c_82,quote,info))));
            _inf_value7->_protocol_obj=_inf_obj_value7;
            _inf_value7->finalize=(void*)sWCharNode_finalize;
            _inf_value7->clone=(void*)sWCharNode_clone;
            _inf_value7->compile=(void*)sWCharNode_compile;
            _inf_value7->sline=(void*)sNodeBase_sline;
            _inf_value7->sline_real=(void*)sNodeBase_sline_real;
            _inf_value7->sname=(void*)sNodeBase_sname;
            _inf_value7->terminated=(void*)sNodeBase_terminated;
            _inf_value7->kind=(void*)sWCharNode_kind;
            _inf_value7->no_mutex=(void*)sNodeBase_no_mutex;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value7)));
            come_call_finalizer(sWCharNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__0;
        }
    }
    else if(*info->p==76&&*(info->p+1)==34) {
        sline_real_89=info->sline_real;
        info->sline_real=info->sline;
        info->p+=2;
        sline_90=info->sline;
        value_91=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "06str.c", 1706, "struct buffer*"))));
        while(1) {
            if(*info->p==34) {
                info->p++;
                p_92=info->p;
                sline_93=info->sline;
                skip_spaces_and_lf(info);
                if(*info->p==34) {
                    info->p++;
                }
                else {
                    info->p=p_92;
                    info->sline=sline_93;
                    break;
                }
            }
            else if(*info->p==92) {
                buffer_append_char(value_91,92);
                info->p++;
                if(*info->p==34) {
                    buffer_append_char(value_91,34);
                    info->p++;
                }
                else {
                    buffer_append_char(value_91,*info->p);
                    info->p++;
                }
            }
            else if(*info->p==0) {
                sline2_94=info->sline;
                info->sline=sline_90;
                err_msg(info,"close \" to make c string value");
                exit(2);
            }
            else {
                if(*info->p==10) {
                    info->sline++;
                }
                buffer_append_char(value_91,*info->p);
                info->p++;
            }
        }
        skip_spaces_and_lf(info);
        len_95=value_91->len;
        wstr=(int*)come_increment_ref_count((int*)come_calloc_v2(1, sizeof(int)*(1*(len_95+1)), "06str.c", 1757, "int*"));
        str_96=value_91->buf;
        if(mbstowcs(wstr,str_96,len_95+1)<0) {
            perror("mbstowcs");
            exit(1);
        }
        wstr[len_95]=0;
        info->sline_real=sline_real_89;
        _inf_value8=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "06str.c", 1769, "struct sNode");
        _inf_obj_value8=(struct sWStringNode*)come_increment_ref_count(((struct sWStringNode*)(__right_value1=sWStringNode_initialize((struct sWStringNode*)come_increment_ref_count((struct sWStringNode*)come_calloc_v2(1, sizeof(struct sWStringNode)*(1), "06str.c", 1769, "struct sWStringNode*")),(int*)come_increment_ref_count(wstr),sline_90,info))));
        _inf_value8->_protocol_obj=_inf_obj_value8;
        _inf_value8->finalize=(void*)sWStringNode_finalize;
        _inf_value8->clone=(void*)sWStringNode_clone;
        _inf_value8->compile=(void*)sWStringNode_compile;
        _inf_value8->sline=(void*)sNodeBase_sline;
        _inf_value8->sline_real=(void*)sNodeBase_sline_real;
        _inf_value8->sname=(void*)sNodeBase_sname;
        _inf_value8->terminated=(void*)sNodeBase_terminated;
        _inf_value8->kind=(void*)sWStringNode_kind;
        _inf_value8->no_mutex=(void*)sNodeBase_no_mutex;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value8)));
        come_call_finalizer(buffer_finalize, value_91, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (wstr = come_decrement_ref_count(wstr, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sWStringNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__0;
        come_call_finalizer(buffer_finalize, value_91, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (wstr = come_decrement_ref_count(wstr, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    else if((*info->p==115||*info->p==83)&&*(info->p+1)==34) {
        sline_real_97=info->sline_real;
        info->sline_real=info->sline;
        info->p+=2;
        sline_98=info->sline;
        exps_99=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "06str.c", 1780, "struct list$1sNode$ph*"))));
        value_100=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "06str.c", 1781, "struct buffer*"))));
        while(1) {
            if(*info->p==34) {
                info->p++;
                p_101=info->p;
                sline_102=info->sline;
                skip_spaces_and_lf(info);
                if(*info->p==34) {
                    info->p++;
                }
                else {
                    info->p=p_101;
                    info->sline=sline_102;
                    break;
                }
            }
            else if(*info->p==37) {
                buffer_append_char(value_100,37);
                buffer_append_char(value_100,37);
                info->p++;
            }
            else if(*info->p==92) {
                buffer_append_char(value_100,92);
                info->p++;
                if(((*__ctype_b_loc())[(int)((*info->p))]&(unsigned short int)(((((3)<8)?(((1<<(3))<<8)):(((1<<(3))>>8))))))) {
                    len_103=0;
                    while(((*__ctype_b_loc())[(int)((*info->p))]&(unsigned short int)(((((3)<8)?(((1<<(3))<<8)):(((1<<(3))>>8))))))&&len_103<3) {
                        buffer_append_char(value_100,*info->p);
                        info->p++;
                        len_103++;
                    }
                }
                else if(*info->p==120||*info->p==88) {
                    buffer_append_char(value_100,*info->p);
                    info->p++;
                    while(*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70) {
                        buffer_append_char(value_100,*info->p);
                        info->p++;
                    }
                }
                else if(*info->p==123) {
                    info->p++;
                    exp_104=(struct sNode*)come_increment_ref_count(expression_v13(info,0));
                    list$1sNode$ph_add(exps_99,(struct sNode*)come_increment_ref_count(exp_104));
                    if(*info->p==125) {
                        info->p++;
                    }
                    buffer_append_str(value_100,"%s");
                    ((exp_104) ? exp_104 = come_decrement_ref_count(exp_104, ((struct sNode*)exp_104)->finalize, ((struct sNode*)exp_104)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                }
                else {
                    switch (                    *info->p) {
                        case 48:
                        buffer_append_char(value_100,*info->p);
                        info->p++;
                        break;
                        case 110:
                        buffer_append_char(value_100,*info->p);
                        info->p++;
                        break;
                        case 116:
                        buffer_append_char(value_100,*info->p);
                        info->p++;
                        break;
                        case 114:
                        buffer_append_char(value_100,*info->p);
                        info->p++;
                        break;
                        case 118:
                        buffer_append_char(value_100,*info->p);
                        info->p++;
                        break;
                        case 102:
                        buffer_append_char(value_100,*info->p);
                        info->p++;
                        break;
                        case 97:
                        buffer_append_char(value_100,*info->p);
                        info->p++;
                        break;
                        case 98:
                        buffer_append_char(value_100,*info->p);
                        info->p++;
                        break;
                        case 92:
                        buffer_append_char(value_100,*info->p);
                        info->p++;
                        break;
                        default:
                        buffer_append_char(value_100,*info->p);
                        info->p++;
                        break;
                    }
                }
            }
            else if(*info->p==0) {
                sline2_105=info->sline;
                info->sline=sline_98;
                err_msg(info,"close \" to make embbeded string value");
                exit(2);
            }
            else {
                if(*info->p==10) {
                    info->sline++;
                }
                buffer_append_char(value_100,*info->p);
                info->p++;
            }
        }
        skip_spaces_and_lf(info);
        info->sline_real=sline_real_97;
        _inf_value9=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "06str.c", 1929, "struct sNode");
        _inf_obj_value9=(struct sSStringNode*)come_increment_ref_count(((struct sSStringNode*)(__right_value2=sSStringNode_initialize((struct sSStringNode*)come_increment_ref_count((struct sSStringNode*)come_calloc_v2(1, sizeof(struct sSStringNode)*(1), "06str.c", 1929, "struct sSStringNode*")),(char*)come_increment_ref_count(buffer_to_string(value_100)),(struct list$1sNode$ph*)come_increment_ref_count(exps_99),sline_98,info))));
        _inf_value9->_protocol_obj=_inf_obj_value9;
        _inf_value9->finalize=(void*)sSStringNode_finalize;
        _inf_value9->clone=(void*)sSStringNode_clone;
        _inf_value9->compile=(void*)sSStringNode_compile;
        _inf_value9->sline=(void*)sNodeBase_sline;
        _inf_value9->sline_real=(void*)sNodeBase_sline_real;
        _inf_value9->sname=(void*)sNodeBase_sname;
        _inf_value9->terminated=(void*)sNodeBase_terminated;
        _inf_value9->kind=(void*)sSStringNode_kind;
        _inf_value9->no_mutex=(void*)sNodeBase_no_mutex;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value3=_inf_value9)));
        come_call_finalizer(list$1sNode$ph$p_finalize, exps_99, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(buffer_finalize, value_100, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sSStringNode_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        ((__right_value3) ? __right_value3 = come_decrement_ref_count(__right_value3, ((struct sNode*)__right_value3)->finalize, ((struct sNode*)__right_value3)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__0;
        come_call_finalizer(list$1sNode$ph$p_finalize, exps_99, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(buffer_finalize, value_100, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(*info->p==91) {
        sline_real_106=info->sline_real;
        info->sline_real=info->sline;
        info->p++;
        skip_spaces_and_lf(info);
        p_107=info->p;
        no_comma=info->no_comma;
        info->no_comma=1;
        node_108=(struct sNode*)come_increment_ref_count(expression_v13(info,0));
        info->no_comma=no_comma;
        p2_109=info->p;
        first_element_source=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "06str.c", 1948, "struct buffer*"))));
        buffer_append(first_element_source,p_107,p2_109-p_107);
        buffer_append_char(first_element_source,0);
        list_elements=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "06str.c", 1953, "struct list$1sNode$ph*"))));
        map_keys=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "06str.c", 1955, "struct list$1sNode$ph*"))));
        map_elements=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "06str.c", 1956, "struct list$1sNode$ph*"))));
        if(*info->p==58) {
            info->p++;
            skip_spaces_and_lf(info);
            list$1sNode$ph_push_back(map_keys,(struct sNode*)come_increment_ref_count(node_108));
            no_comma_110=info->no_comma;
            info->no_comma=1;
            node2=(struct sNode*)come_increment_ref_count(expression_v13(info,0));
            info->no_comma=no_comma_110;
            list$1sNode$ph_push_back(map_elements,(struct sNode*)come_increment_ref_count(node2));
            if(*info->p==93) {
                info->p++;
                skip_spaces_and_lf(info);
                _inf_value10=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "06str.c", 1979, "struct sNode");
                _inf_obj_value10=(struct sMapNode*)come_increment_ref_count(((struct sMapNode*)(__right_value1=sMapNode_initialize((struct sMapNode*)come_increment_ref_count((struct sMapNode*)come_calloc_v2(1, sizeof(struct sMapNode)*(1), "06str.c", 1979, "struct sMapNode*")),(struct list$1sNode$ph*)come_increment_ref_count(map_keys),(struct list$1sNode$ph*)come_increment_ref_count(map_elements),info))));
                _inf_value10->_protocol_obj=_inf_obj_value10;
                _inf_value10->finalize=(void*)sMapNode_finalize;
                _inf_value10->clone=(void*)sMapNode_clone;
                _inf_value10->compile=(void*)sMapNode_compile;
                _inf_value10->sline=(void*)sNodeBase_sline;
                _inf_value10->sline_real=(void*)sNodeBase_sline_real;
                _inf_value10->sname=(void*)sNodeBase_sname;
                _inf_value10->terminated=(void*)sNodeBase_terminated;
                _inf_value10->kind=(void*)sMapNode_kind;
                _inf_value10->no_mutex=(void*)sNodeBase_no_mutex;
                __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value10)));
                ((node2) ? node2 = come_decrement_ref_count(node2, ((struct sNode*)node2)->finalize, ((struct sNode*)node2)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                ((node_108) ? node_108 = come_decrement_ref_count(node_108, ((struct sNode*)node_108)->finalize, ((struct sNode*)node_108)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                come_call_finalizer(buffer_finalize, first_element_source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(list$1sNode$ph$p_finalize, list_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(list$1sNode$ph$p_finalize, map_keys, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(list$1sNode$ph$p_finalize, map_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sMapNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
                ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
                return __result_obj__0;
            }
            else {
                (come_push_stackframe("06str.c", 1982, 29),__exception_result_var_b30=expected_next_character(44,info), come_pop_stackframe(), __exception_result_var_b30);
                while(1) {
                    no_comma_111=info->no_comma;
                    info->no_comma=1;
                    node2_112=(struct sNode*)come_increment_ref_count(expression_v13(info,0));
                    info->no_comma=no_comma_111;
                    list$1sNode$ph_push_back(map_keys,(struct sNode*)come_increment_ref_count(node2_112));
                    (come_push_stackframe("06str.c", 1994, 30),__exception_result_var_b31=expected_next_character(58,info), come_pop_stackframe(), __exception_result_var_b31);
                    no_comma_111=info->no_comma;
                    info->no_comma=1;
                    node3=(struct sNode*)come_increment_ref_count(expression_v13(info,0));
                    info->no_comma=no_comma_111;
                    list$1sNode$ph_push_back(map_elements,(struct sNode*)come_increment_ref_count(node3));
                    if(*info->p==0) {
                        err_msg(info,"invalid source end");
                        exit(2);
                    }
                    else if(*info->p==44) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    else if(*info->p==93) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        ((node2_112) ? node2_112 = come_decrement_ref_count(node2_112, ((struct sNode*)node2_112)->finalize, ((struct sNode*)node2_112)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                        ((node3) ? node3 = come_decrement_ref_count(node3, ((struct sNode*)node3)->finalize, ((struct sNode*)node3)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                        break;
                    }
                    else {
                        err_msg(info,"invalid character(3)(%c)",*info->p);
                        exit(2);
                    }
                    ((node2_112) ? node2_112 = come_decrement_ref_count(node2_112, ((struct sNode*)node2_112)->finalize, ((struct sNode*)node2_112)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                    ((node3) ? node3 = come_decrement_ref_count(node3, ((struct sNode*)node3)->finalize, ((struct sNode*)node3)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                }
                _inf_value11=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "06str.c", 2024, "struct sNode");
                _inf_obj_value11=(struct sMapNode*)come_increment_ref_count(((struct sMapNode*)(__right_value1=sMapNode_initialize((struct sMapNode*)come_increment_ref_count((struct sMapNode*)come_calloc_v2(1, sizeof(struct sMapNode)*(1), "06str.c", 2024, "struct sMapNode*")),(struct list$1sNode$ph*)come_increment_ref_count(map_keys),(struct list$1sNode$ph*)come_increment_ref_count(map_elements),info))));
                _inf_value11->_protocol_obj=_inf_obj_value11;
                _inf_value11->finalize=(void*)sMapNode_finalize;
                _inf_value11->clone=(void*)sMapNode_clone;
                _inf_value11->compile=(void*)sMapNode_compile;
                _inf_value11->sline=(void*)sNodeBase_sline;
                _inf_value11->sline_real=(void*)sNodeBase_sline_real;
                _inf_value11->sname=(void*)sNodeBase_sname;
                _inf_value11->terminated=(void*)sNodeBase_terminated;
                _inf_value11->kind=(void*)sMapNode_kind;
                _inf_value11->no_mutex=(void*)sNodeBase_no_mutex;
                __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value11)));
                ((node2) ? node2 = come_decrement_ref_count(node2, ((struct sNode*)node2)->finalize, ((struct sNode*)node2)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                ((node_108) ? node_108 = come_decrement_ref_count(node_108, ((struct sNode*)node_108)->finalize, ((struct sNode*)node_108)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                come_call_finalizer(buffer_finalize, first_element_source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(list$1sNode$ph$p_finalize, list_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(list$1sNode$ph$p_finalize, map_keys, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(list$1sNode$ph$p_finalize, map_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sMapNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
                ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
                return __result_obj__0;
            }
            ((node2) ? node2 = come_decrement_ref_count(node2, ((struct sNode*)node2)->finalize, ((struct sNode*)node2)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
        else if(*info->p==93) {
            info->p++;
            skip_spaces_and_lf(info);
            list$1sNode$ph_push_back(list_elements,(struct sNode*)come_increment_ref_count(node_108));
        }
        else if(*info->p==44) {
            info->p++;
            skip_spaces_and_lf(info);
            list$1sNode$ph_push_back(list_elements,(struct sNode*)come_increment_ref_count(node_108));
            while(1) {
                no_comma_113=info->no_comma;
                info->no_comma=1;
                node2_114=(struct sNode*)come_increment_ref_count(expression_v13(info,0));
                info->no_comma=no_comma_113;
                list$1sNode$ph_push_back(list_elements,(struct sNode*)come_increment_ref_count(node2_114));
                if(*info->p==0) {
                    err_msg(info,"invalid source end");
                    exit(2);
                }
                else if(*info->p==44) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                else if(*info->p==93) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    ((node2_114) ? node2_114 = come_decrement_ref_count(node2_114, ((struct sNode*)node2_114)->finalize, ((struct sNode*)node2_114)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                    break;
                }
                else {
                    err_msg(info,"invalid character(4)(%c)",*info->p);
                    exit(2);
                }
                ((node2_114) ? node2_114 = come_decrement_ref_count(node2_114, ((struct sNode*)node2_114)->finalize, ((struct sNode*)node2_114)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            }
        }
        else {
            err_msg(info,"invalid character(5)(%c)",*info->p);
            exit(2);
        }
        if(list$1sNode$ph_length(list_elements)>0) {
            info->sline_real=sline_real_106;
            _inf_value12=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "06str.c", 2076, "struct sNode");
            _inf_obj_value12=(struct sListNode*)come_increment_ref_count(((struct sListNode*)(__right_value1=sListNode_initialize((struct sListNode*)come_increment_ref_count((struct sListNode*)come_calloc_v2(1, sizeof(struct sListNode)*(1), "06str.c", 2076, "struct sListNode*")),(struct list$1sNode$ph*)come_increment_ref_count(list_elements),info))));
            _inf_value12->_protocol_obj=_inf_obj_value12;
            _inf_value12->finalize=(void*)sListNode_finalize;
            _inf_value12->clone=(void*)sListNode_clone;
            _inf_value12->compile=(void*)sListNode_compile;
            _inf_value12->sline=(void*)sNodeBase_sline;
            _inf_value12->sline_real=(void*)sNodeBase_sline_real;
            _inf_value12->sname=(void*)sNodeBase_sname;
            _inf_value12->terminated=(void*)sNodeBase_terminated;
            _inf_value12->kind=(void*)sListNode_kind;
            _inf_value12->no_mutex=(void*)sNodeBase_no_mutex;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value12)));
            ((node_108) ? node_108 = come_decrement_ref_count(node_108, ((struct sNode*)node_108)->finalize, ((struct sNode*)node_108)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            come_call_finalizer(buffer_finalize, first_element_source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(list$1sNode$ph$p_finalize, list_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(list$1sNode$ph$p_finalize, map_keys, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(list$1sNode$ph$p_finalize, map_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sListNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__0;
        }
        else {
        }
        ((node_108) ? node_108 = come_decrement_ref_count(node_108, ((struct sNode*)node_108)->finalize, ((struct sNode*)node_108)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(buffer_finalize, first_element_source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1sNode$ph$p_finalize, list_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1sNode$ph$p_finalize, map_keys, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1sNode$ph$p_finalize, map_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        node_115=(struct sNode*)come_increment_ref_count(expression_node_v95(info));
        __result_obj__0 = (struct sNode*)come_increment_ref_count(node_115);
        ((node_115) ? node_115 = come_decrement_ref_count(node_115, ((struct sNode*)node_115)->finalize, ((struct sNode*)node_115)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__0;
        ((node_115) ? node_115 = come_decrement_ref_count(node_115, ((struct sNode*)node_115)->finalize, ((struct sNode*)node_115)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    __result_obj__0 = (struct sNode*)come_increment_ref_count((struct sNode*)((void*)0));
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    return __result_obj__0;
}

static struct sSStringNode* sSStringNode_clone(struct sSStringNode* self)
{
    struct sSStringNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sSStringNode* result;
    char* __dec_obj104;
    char* __dec_obj105;
    struct list$1sNode$ph* __dec_obj106;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        return __result_obj__0;
    }
    result=(struct sSStringNode*)come_increment_ref_count((struct sSStringNode*)come_calloc_v2(1, sizeof(struct sSStringNode)*(1), "sSStringNode_clone", 3, "struct sSStringNode*"));
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj104=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sSStringNode_clone", 5, "char*"));
        __dec_obj104 = come_decrement_ref_count(__dec_obj104, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj105=result->value,
        result->value=(char*)come_increment_ref_count((char*)come_memdup(self->value, "sSStringNode_clone", 7, "char*"));
        __dec_obj105 = come_decrement_ref_count(__dec_obj105, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->exps!=((void*)0)) {
        __dec_obj106=result->exps,
        result->exps=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->exps));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj106,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result_obj__0 = result;
    come_call_finalizer(sSStringNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct sStrNode* sStrNode_clone(struct sStrNode* self)
{
    struct sStrNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sStrNode* result;
    char* __dec_obj107;
    char* __dec_obj108;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        return __result_obj__0;
    }
    result=(struct sStrNode*)come_increment_ref_count((struct sStrNode*)come_calloc_v2(1, sizeof(struct sStrNode)*(1), "sStrNode_clone", 3, "struct sStrNode*"));
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj107=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sStrNode_clone", 5, "char*"));
        __dec_obj107 = come_decrement_ref_count(__dec_obj107, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj108=result->value,
        result->value=(char*)come_increment_ref_count((char*)come_memdup(self->value, "sStrNode_clone", 7, "char*"));
        __dec_obj108 = come_decrement_ref_count(__dec_obj108, (void*)0, (void*)0, 0,0, (void*)0);
    }
    __result_obj__0 = result;
    come_call_finalizer(sStrNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct sBufferNode* sBufferNode_clone(struct sBufferNode* self)
{
    struct sBufferNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sBufferNode* result;
    char* __dec_obj109;
    struct buffer* __dec_obj110;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        return __result_obj__0;
    }
    result=(struct sBufferNode*)come_increment_ref_count((struct sBufferNode*)come_calloc_v2(1, sizeof(struct sBufferNode)*(1), "sBufferNode_clone", 3, "struct sBufferNode*"));
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj109=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sBufferNode_clone", 5, "char*"));
        __dec_obj109 = come_decrement_ref_count(__dec_obj109, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj110=result->value,
        result->value=(struct buffer*)come_increment_ref_count(buffer_clone(self->value));
        come_call_finalizer(buffer_finalize, __dec_obj110,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)) {
        result->size=self->size;
    }
    __result_obj__0 = result;
    come_call_finalizer(sBufferNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct sCharNode* sCharNode_clone(struct sCharNode* self)
{
    struct sCharNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sCharNode* result;
    char* __dec_obj111;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        return __result_obj__0;
    }
    result=(struct sCharNode*)come_increment_ref_count((struct sCharNode*)come_calloc_v2(1, sizeof(struct sCharNode)*(1), "sCharNode_clone", 3, "struct sCharNode*"));
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj111=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sCharNode_clone", 5, "char*"));
        __dec_obj111 = come_decrement_ref_count(__dec_obj111, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)) {
        result->value=self->value;
    }
    __result_obj__0 = result;
    come_call_finalizer(sCharNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct sWCharNode* sWCharNode_clone(struct sWCharNode* self)
{
    struct sWCharNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sWCharNode* result;
    char* __dec_obj112;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        return __result_obj__0;
    }
    result=(struct sWCharNode*)come_increment_ref_count((struct sWCharNode*)come_calloc_v2(1, sizeof(struct sWCharNode)*(1), "sWCharNode_clone", 3, "struct sWCharNode*"));
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj112=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sWCharNode_clone", 5, "char*"));
        __dec_obj112 = come_decrement_ref_count(__dec_obj112, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)) {
        result->value=self->value;
    }
    if(self!=((void*)0)) {
        result->quote=self->quote;
    }
    __result_obj__0 = result;
    come_call_finalizer(sWCharNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct sWStringNode* sWStringNode_clone(struct sWStringNode* self)
{
    struct sWStringNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sWStringNode* result;
    char* __dec_obj113;
    int* __dec_obj114;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        return __result_obj__0;
    }
    result=(struct sWStringNode*)come_increment_ref_count((struct sWStringNode*)come_calloc_v2(1, sizeof(struct sWStringNode)*(1), "sWStringNode_clone", 3, "struct sWStringNode*"));
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj113=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sWStringNode_clone", 5, "char*"));
        __dec_obj113 = come_decrement_ref_count(__dec_obj113, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj114=result->value,
        result->value=(int*)come_increment_ref_count((int*)come_memdup(self->value, "sWStringNode_clone", 7, "int*"));
        __dec_obj114 = come_decrement_ref_count(__dec_obj114, (void*)0, (void*)0, 0,0, (void*)0);
    }
    __result_obj__0 = result;
    come_call_finalizer(sWStringNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct sMapNode* sMapNode_clone(struct sMapNode* self)
{
    struct sMapNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sMapNode* result;
    char* __dec_obj115;
    struct list$1sNode$ph* __dec_obj116;
    struct list$1sNode$ph* __dec_obj117;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        return __result_obj__0;
    }
    result=(struct sMapNode*)come_increment_ref_count((struct sMapNode*)come_calloc_v2(1, sizeof(struct sMapNode)*(1), "sMapNode_clone", 3, "struct sMapNode*"));
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj115=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sMapNode_clone", 5, "char*"));
        __dec_obj115 = come_decrement_ref_count(__dec_obj115, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->map_key_elements!=((void*)0)) {
        __dec_obj116=result->map_key_elements,
        result->map_key_elements=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->map_key_elements));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj116,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->map_elements!=((void*)0)) {
        __dec_obj117=result->map_elements,
        result->map_elements=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->map_elements));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj117,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result_obj__0 = result;
    come_call_finalizer(sMapNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct sListNode* sListNode_clone(struct sListNode* self)
{
    struct sListNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sListNode* result;
    char* __dec_obj118;
    struct list$1sNode$ph* __dec_obj119;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        return __result_obj__0;
    }
    result=(struct sListNode*)come_increment_ref_count((struct sListNode*)come_calloc_v2(1, sizeof(struct sListNode)*(1), "sListNode_clone", 3, "struct sListNode*"));
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj118=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sListNode_clone", 5, "char*"));
        __dec_obj118 = come_decrement_ref_count(__dec_obj118, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->list_elements!=((void*)0)) {
        __dec_obj119=result->list_elements,
        result->list_elements=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->list_elements));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj119,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result_obj__0 = result;
    come_call_finalizer(sListNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

struct sNode* parse_tuple(struct sInfo* info, _Bool named_tuple)
{
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1tuple2$2char$phsNode$ph$ph* tuple_elements;
    char* p;
    char* name;
    char* __dec_obj120;
    int __exception_result_var_b32;
    _Bool no_comma;
    struct sNode* node;
    struct sNode* __dec_obj121;
    void* __right_value2 = (void*)0;
    struct sNode* _inf_value13;
    struct sTupleNode* _inf_obj_value13;
    struct sNode* __result_obj__0;
    memset(&name, 0, sizeof(name));
    tuple_elements=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "06str.c", 2091, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
    while(1) {
        p=info->p;
        if(named_tuple) {
            __dec_obj120=name,
            name=(char*)come_increment_ref_count(parse_word(0,info));
            __dec_obj120 = come_decrement_ref_count(__dec_obj120, (void*)0, (void*)0, 0,0, (void*)0);
            (come_push_stackframe("06str.c", 2099, 31),__exception_result_var_b32=expected_next_character(58,info), come_pop_stackframe(), __exception_result_var_b32);
        }
        no_comma=info->no_comma;
        info->no_comma=1;
        node=(struct sNode*)come_increment_ref_count(expression_v13(info,0));
        __dec_obj121=node,
        node=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node),info));
        (__dec_obj121 ? __dec_obj121 = come_decrement_ref_count(__dec_obj121, ((struct sNode*)__dec_obj121)->finalize, ((struct sNode*)__dec_obj121)->_protocol_obj, 0,0, (void*)0) :0);
        info->no_comma=no_comma;
        list$1tuple2$2char$phsNode$ph$ph_push_back(tuple_elements,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 2110, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count((char*)come_memdup(name, "06str.c", 2110, "char*")),(struct sNode*)come_increment_ref_count(node))));
        if(*info->p==44) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        else if(*info->p==41) {
            info->p++;
            skip_spaces_and_lf(info);
            (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
            ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            break;
        }
        else {
            err_msg(info,"invalid character in tuple expression (%c)",*info->p);
            exit(2);
        }
        (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    _inf_value13=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "06str.c", 2127, "struct sNode");
    _inf_obj_value13=(struct sTupleNode*)come_increment_ref_count(((struct sTupleNode*)(__right_value1=sTupleNode_initialize((struct sTupleNode*)come_increment_ref_count((struct sTupleNode*)come_calloc_v2(1, sizeof(struct sTupleNode)*(1), "06str.c", 2127, "struct sTupleNode*")),(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(tuple_elements),info))));
    _inf_value13->_protocol_obj=_inf_obj_value13;
    _inf_value13->finalize=(void*)sTupleNode_finalize;
    _inf_value13->clone=(void*)sTupleNode_clone;
    _inf_value13->compile=(void*)sTupleNode_compile;
    _inf_value13->sline=(void*)sNodeBase_sline;
    _inf_value13->sline_real=(void*)sNodeBase_sline_real;
    _inf_value13->sname=(void*)sNodeBase_sname;
    _inf_value13->terminated=(void*)sNodeBase_terminated;
    _inf_value13->kind=(void*)sTupleNode_kind;
    _inf_value13->no_mutex=(void*)sNodeBase_no_mutex;
    __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value13)));
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, tuple_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sTupleNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    return __result_obj__0;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_push_back(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item)
{
    struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1tuple2$2char$phsNode$ph$ph* litem;
    struct tuple2$2char$phsNode$ph* __dec_obj122;
    struct list_item$1tuple2$2char$phsNode$ph$ph* litem_116;
    struct tuple2$2char$phsNode$ph* __dec_obj123;
    struct list_item$1tuple2$2char$phsNode$ph$ph* litem_117;
    struct tuple2$2char$phsNode$ph* __dec_obj124;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./neo-c.h", 1177, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj122=litem->item,
        litem->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj122,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        litem_116=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./neo-c.h", 1187, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_116->prev=self->head;
        litem_116->next=((void*)0);
        __dec_obj123=litem_116->item,
        litem_116->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj123,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem_116;
        self->head->next=litem_116;
    }
    else {
        litem_117=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./neo-c.h", 1197, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_117->prev=self->tail;
        litem_117->next=((void*)0);
        __dec_obj124=litem_117->item,
        litem_117->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj124,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail->next=litem_117;
        self->tail=litem_117;
    }
    self->len++;
    __result_obj__0 = self;
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__0;
}

static struct sTupleNode* sTupleNode_clone(struct sTupleNode* self)
{
    struct sTupleNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sTupleNode* result;
    char* __dec_obj125;
    struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj128;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        return __result_obj__0;
    }
    result=(struct sTupleNode*)come_increment_ref_count((struct sTupleNode*)come_calloc_v2(1, sizeof(struct sTupleNode)*(1), "sTupleNode_clone", 3, "struct sTupleNode*"));
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj125=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sTupleNode_clone", 5, "char*"));
        __dec_obj125 = come_decrement_ref_count(__dec_obj125, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->tuple_elements!=((void*)0)) {
        __dec_obj128=result->tuple_elements,
        result->tuple_elements=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_clone(self->tuple_elements));
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph_finalize, __dec_obj128,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result_obj__0 = result;
    come_call_finalizer(sTupleNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_clone(struct list$1tuple2$2char$phsNode$ph$ph* self)
{
    struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1tuple2$2char$phsNode$ph$ph* result;
    struct list_item$1tuple2$2char$phsNode$ph$ph* it;
    if(self==((void*)0)) {
        __result_obj__0 = (struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    result=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "./neo-c.h", 1071, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
    it=self->head;
    while(it!=((void*)0)) {
        if(1) {
            list$1tuple2$2char$phsNode$ph$ph_add(result,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_clone(it->item)));
        }
        else {
            list$1tuple2$2char$phsNode$ph$ph_add(result,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_clone(it->item)));
        }
        it=it->next;
    }
    __result_obj__0 = (struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(result);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_clone(struct tuple2$2char$phsNode$ph* self)
{
    struct tuple2$2char$phsNode$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct tuple2$2char$phsNode$ph* result;
    char* __dec_obj126;
    struct sNode* __dec_obj127;
    if(self==(void*)0) {
        __result_obj__0 = (struct tuple2$2char$phsNode$ph*)come_increment_ref_count((void*)0);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    result=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "tuple2$2char$phsNode$ph_clone", 3, "struct tuple2$2char$phsNode$ph*"));
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj126=result->v1,
        result->v1=(char*)come_increment_ref_count((char*)come_memdup(self->v1, "tuple2$2char$phsNode$ph_clone", 4, "char*"));
        __dec_obj126 = come_decrement_ref_count(__dec_obj126, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj127=result->v2,
        result->v2=(struct sNode*)come_increment_ref_count(sNode_clone(self->v2));
        (__dec_obj127 ? __dec_obj127 = come_decrement_ref_count(__dec_obj127, ((struct sNode*)__dec_obj127)->finalize, ((struct sNode*)__dec_obj127)->_protocol_obj, 0,0, (void*)0) :0);
    }
    __result_obj__0 = (struct tuple2$2char$phsNode$ph*)come_increment_ref_count(result);
    come_call_finalizer(tuple2$2char$phsNode$ph_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static void tuple2$2char$phsNode$ph_finalize(struct tuple2$2char$phsNode$ph* self)
{
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        ((self->v2) ? self->v2 = come_decrement_ref_count(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
}

