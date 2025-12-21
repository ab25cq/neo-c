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

typedef unsigned long  int nfds_t;

/// previous struct definition ///
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

struct pollfd
{
    int fd;
    short int events;
    short int revents;
};

struct sReturnNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* value;
    char* value_source;
};

struct sCSourceNode
{
    int sline;
    char* sname;
    int sline_real;
    char* contents;
};

struct sInlineAssembler
{
    int sline;
    char* sname;
    int sline_real;
    char* source;
    struct list$1sNode$ph* exps;
};

struct sLineNode
{
    int sline;
    char* sname;
    int sline_real;
};

struct sSNameNode
{
    int sline;
    char* sname;
    int sline_real;
};

struct sFuncNode
{
    int sline;
    char* sname;
    int sline_real;
};

struct sCallerFuncNode
{
    int sline;
    char* sname;
    int sline_real;
};

struct sCallerLineNode
{
    int sline;
    char* sname;
    int sline_real;
};

struct sCallerSNameNode
{
    int sline;
    char* sname;
    int sline_real;
};

struct sFunCallNode
{
    int sline;
    char* sname;
    int sline_real;
    char* fun_name;
    struct list$1tuple2$2char$phsNode$ph$ph* params;
    struct list$1sType$ph* method_generics_types;
    struct buffer* method_block;
    int method_block_sline;
};

struct sComeCallNode
{
    int sline;
    char* sname;
    int sline_real;
    struct buffer* come_block;
    int come_block_sline;
};

struct sComeJoinNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* node;
};

struct list_item$1sBlock$ph
{
    struct sBlock* item;
    struct list_item$1sBlock$ph* prev;
    struct list_item$1sBlock$ph* next;
};

struct list$1sBlock$ph
{
    struct list_item$1sBlock$ph* head;
    struct list_item$1sBlock$ph* tail;
    int len;
    struct list_item$1sBlock$ph* it;
};

struct sComePollNode
{
    int sline;
    char* sname;
    int sline_real;
    struct list$1sNode$ph* vars;
    struct list$1sBlock$ph* blocks;
    struct sBlock* else_block;
    int time_out;
};

struct sLambdaCall
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* node;
    struct list$1tuple2$2char$phsNode$ph$ph* params;
};

struct sVarArgTypeName
{
    int sline;
    char* sname;
    int sline_real;
    struct sType* type;
};

struct sInnerAttribute
{
    int sline;
    char* sname;
    int sline_real;
    char* attr;
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
struct sNode* top_level_v99(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* expression_node_v99(struct sInfo* info);
struct sNode* expression_node_v97(struct sInfo* info);
int transpile(struct sInfo* info);
void parse_sharp_v5(struct sInfo* info);
struct sNode* create_null_value(struct sType* type, struct sInfo* info);
struct sNode* create_null_return_value(struct sInfo* info);
struct sNode* create_some(struct sNode* exp, struct sInfo* info);
struct sNode* expression_node_v96(struct sInfo* info);
struct sNode* parse_tuple(struct sInfo* info, _Bool named_tuple);
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
struct sNode* top_level_v98(char* buf, char* head, int head_sline, struct sInfo* info);
_Bool output_generics_struct(struct sType* type, struct sType* generics_type, struct sInfo* info);
void output_struct(struct sClass* klass, char* pragma, struct sInfo* info);
struct sNode* string_node_v15(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* parse_union(char* type_name, char* union_attribute, struct sInfo* info);
struct sNode* top_level_v97(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* string_node_v16(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* parse_enum(char* type_name, char* attribute, struct sInfo* info);
struct sNode* top_level_v96(char* buf, char* head, int head_sline, struct sInfo* info);
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
int poll(struct pollfd* __fds, unsigned long  int __nfds, int __timeout);
int ppoll(struct pollfd* __fds, unsigned long  int __nfds, const struct timespec* __timeout, const struct anonymous_typeX8* __ss);
struct sReturnNode* sReturnNode_initialize(struct sReturnNode* self, struct sNode* value, char* value_source, struct sInfo* info);
char* sReturnNode_kind(struct sReturnNode* self);
_Bool sReturnNode_compile(struct sReturnNode* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
static void sReturnNode_finalize(struct sReturnNode* self);
static struct sType* sType_clone(struct sType* self);
static void sType_finalize(struct sType* self);
static void list$1sType$ph$p_finalize(struct list$1sType$ph* self);
static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self);
static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self);
static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self);
static void list$1int$$p_finalize(struct list$1int$* self);
static void list_item$1int$$p_finalize(struct list_item$1int$* self);
static void list$1char$ph$p_finalize(struct list$1char$ph* self);
static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self);
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
static struct sVar* list$1sVar$ph_begin(struct list$1sVar$ph* self);
static _Bool list$1sVar$ph_end(struct list$1sVar$ph* self);
static struct sVar* list$1sVar$ph_next(struct list$1sVar$ph* self);
static void list$1sVar$ph$p_finalize(struct list$1sVar$ph* self);
static void list_item$1sVar$ph$p_finalize(struct list_item$1sVar$ph* self);
static void sVar_finalize(struct sVar* self);
static void list$1sVar$ph_finalize(struct list$1sVar$ph* self);
static void CVALUE_finalize(struct CVALUE* self);
struct sNode* create_return_node(struct sNode* value, char* value_source, struct sInfo* info);
static struct sReturnNode* sReturnNode_clone(struct sReturnNode* self);
struct sCSourceNode* sCSourceNode_initialize(struct sCSourceNode* self, char* contents, struct sInfo* info);
char* sCSourceNode_kind(struct sCSourceNode* self);
_Bool sCSourceNode_compile(struct sCSourceNode* self, struct sInfo* info);
static void sCSourceNode_finalize(struct sCSourceNode* self);
struct sInlineAssembler* sInlineAssembler_initialize(struct sInlineAssembler* self, char* source, struct list$1sNode$ph* exps, struct sInfo* info);
char* sInlineAssembler_kind(struct sInlineAssembler* self);
_Bool sInlineAssembler_compile(struct sInlineAssembler* self, struct sInfo* info);
static void sInlineAssembler_finalize(struct sInlineAssembler* self);
static struct sNode* list$1sNode$ph$p_operator_load_element(struct list$1sNode$ph* self, int position);
static struct sNode* list$1sNode$ph_operator_load_element(struct list$1sNode$ph* self, int position);
static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item);
struct sLineNode* sLineNode_initialize(struct sLineNode* self, struct sInfo* info);
char* sLineNode_kind(struct sLineNode* self);
_Bool sLineNode_compile(struct sLineNode* self, struct sInfo* info);
static void sLineNode_finalize(struct sLineNode* self);
struct sSNameNode* sSNameNode_initialize(struct sSNameNode* self, struct sInfo* info);
char* sSNameNode_kind(struct sSNameNode* self);
_Bool sSNameNode_compile(struct sSNameNode* self, struct sInfo* info);
static void sSNameNode_finalize(struct sSNameNode* self);
struct sFuncNode* sFuncNode_initialize(struct sFuncNode* self, struct sInfo* info);
char* sFuncNode_kind(struct sFuncNode* self);
_Bool sFuncNode_compile(struct sFuncNode* self, struct sInfo* info);
static void sFuncNode_finalize(struct sFuncNode* self);
struct sCallerFuncNode* sCallerFuncNode_initialize(struct sCallerFuncNode* self, struct sInfo* info);
char* sCallerFuncNode_kind(struct sCallerFuncNode* self);
_Bool sCallerFuncNode_compile(struct sCallerFuncNode* self, struct sInfo* info);
static void sCallerFuncNode_finalize(struct sCallerFuncNode* self);
struct sCallerLineNode* sCallerLineNode_initialize(struct sCallerLineNode* self, struct sInfo* info);
_Bool sCallerLineNode_compile(struct sCallerLineNode* self, struct sInfo* info);
char* sCallerLineNode_kind(struct sCallerLineNode* self);
static void sCallerLineNode_finalize(struct sCallerLineNode* self);
struct sCallerSNameNode* sCallerSNameNode_initialize(struct sCallerSNameNode* self, struct sInfo* info);
_Bool sCallerSNameNode_compile(struct sCallerSNameNode* self, struct sInfo* info);
char* sCallerSNameNode_kind(struct sCallerSNameNode* self);
static void sCallerSNameNode_finalize(struct sCallerSNameNode* self);
struct sFunCallNode* sFunCallNode_initialize(struct sFunCallNode* self, char* fun_name, struct list$1tuple2$2char$phsNode$ph$ph* params, struct list$1sType$ph* method_generics_types, struct buffer* method_block, int method_block_sline, struct sInfo* info);
char* sFunCallNode_kind(struct sFunCallNode* self);
_Bool sFunCallNode_terminated(struct sFunCallNode* self);
_Bool sFunCallNode_compile(struct sFunCallNode* self, struct sInfo* info);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_clone(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void list$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void list_item$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsNode$ph$ph* self);
static void tuple2$2char$phsNode$ph$p_finalize(struct tuple2$2char$phsNode$ph* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_initialize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_add(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item);
static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_clone(struct tuple2$2char$phsNode$ph* self);
static void tuple2$2char$phsNode$ph_finalize(struct tuple2$2char$phsNode$ph* self);
static void list$1tuple2$2char$phsNode$ph$ph_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void sFunCallNode_finalize(struct sFunCallNode* self);
static struct list$1CVALUE$ph* list$1CVALUE$ph_initialize(struct list$1CVALUE$ph* self);
static void list$1CVALUE$ph$p_finalize(struct list$1CVALUE$ph* self);
static void list_item$1CVALUE$ph$p_finalize(struct list_item$1CVALUE$ph* self);
static int list$1sType$ph_length(struct list$1sType$ph* self);
static int list$1tuple2$2char$phsNode$ph$ph_length(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_begin(struct list$1tuple2$2char$phsNode$ph$ph* self);
static _Bool list$1tuple2$2char$phsNode$ph$ph_end(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_next(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position);
static struct sType* list$1sType$ph_operator_load_element(struct list$1sType$ph* self, int position);
static struct CVALUE* list$1CVALUE$ph_begin(struct list$1CVALUE$ph* self);
static _Bool list$1CVALUE$ph_end(struct list$1CVALUE$ph* self);
static struct CVALUE* list$1CVALUE$ph_next(struct list$1CVALUE$ph* self);
static int list$1CVALUE$ph_length(struct list$1CVALUE$ph* self);
static struct sGenericsFun* map$2char$phsGenericsFun$ph_at(struct map$2char$phsGenericsFun$ph* self, char* key, struct sGenericsFun* default_value);
static void sGenericsFun_finalize(struct sGenericsFun* self);
static int list$1char$ph_length(struct list$1char$ph* self);
static void tuple2$2char$phsGenericsFun$p$p_finalize(struct tuple2$2char$phsGenericsFun$p* self);
static struct sFun* map$2char$phsFun$ph_at(struct map$2char$phsFun$ph* self, char* key, struct sFun* default_value);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static struct CVALUE* list$1CVALUE$ph$p_operator_load_element(struct list$1CVALUE$ph* self, int position);
static struct CVALUE* list$1CVALUE$ph_operator_load_element(struct list$1CVALUE$ph* self, int position);
static void list$1sType$ph_operator_store_element(struct list$1sType$ph* self, int position, struct sType* item);
static struct list$1sType$ph* list$1sType$ph_replace(struct list$1sType$ph* self, int position, struct sType* item);
static struct list$1sType$ph* list$1sType$ph_push_back(struct list$1sType$ph* self, struct sType* item);
static struct sType* list$1sType$ph_begin(struct list$1sType$ph* self);
static _Bool list$1sType$ph_end(struct list$1sType$ph* self);
static struct sType* list$1sType$ph_next(struct list$1sType$ph* self);
static struct list$1CVALUE$ph* list$1CVALUE$ph_add(struct list$1CVALUE$ph* self, struct CVALUE* item);
static struct map$2char$phsFun$ph* map$2char$phsFun$ph_remove(struct map$2char$phsFun$ph* self, char* key);
static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char* item);
static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail);
static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self);
static struct sFun* map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char* key);
static struct sFun* map$2char$phsFun$ph_operator_load_element(struct map$2char$phsFun$ph* self, char* key);
static char* list$1char$ph_begin(struct list$1char$ph* self);
static _Bool list$1char$ph_end(struct list$1char$ph* self);
static char* list$1char$ph_next(struct list$1char$ph* self);
static struct list$1CVALUE$ph* list$1CVALUE$ph_replace(struct list$1CVALUE$ph* self, int position, struct CVALUE* item);
static char* list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position);
static char* list$1char$ph_operator_load_element(struct list$1char$ph* self, int position);
static void sCurrentNode_finalize(struct sCurrentNode* self);
static struct sCurrentNode* sCurrentNode_clone(struct sCurrentNode* self);
static struct sClass* map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char* key);
static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2char$phsType$ph$ph$p_finalize(struct list$1tuple2$2char$phsType$ph$ph* self);
static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self);
static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self);
static struct sClass* map$2char$phsClass$ph_operator_load_element(struct map$2char$phsClass$ph* self, char* key);
struct sComeCallNode* sComeCallNode_initialize(struct sComeCallNode* self, struct buffer* come_block, int come_block_sline, struct sInfo* info);
char* sComeCallNode_kind(struct sComeCallNode* self);
_Bool sComeCallNode_terminated(struct sComeCallNode* self);
_Bool sComeCallNode_compile(struct sComeCallNode* self, struct sInfo* info);
static void sComeCallNode_finalize(struct sComeCallNode* self);
static struct sType* map$2char$phsType$ph_at(struct map$2char$phsType$ph* self, char* key, struct sType* default_value);
struct sComeJoinNode* sComeJoinNode_initialize(struct sComeJoinNode* self, struct sNode* node, struct sInfo* info);
char* sComeJoinNode_kind(struct sComeJoinNode* self);
_Bool sComeJoinNode_terminated(struct sComeJoinNode* self);
_Bool sComeJoinNode_compile(struct sComeJoinNode* self, struct sInfo* info);
static void sComeJoinNode_finalize(struct sComeJoinNode* self);
struct sComePollNode* sComePollNode_initialize(struct sComePollNode* self, struct list$1sNode$ph* vars, struct list$1sBlock$ph* blocks, struct sBlock* else_block, int time_out, struct sInfo* info);
char* sComePollNode_kind(struct sComePollNode* self);
_Bool sComePollNode_terminated(struct sComePollNode* self);
_Bool sComePollNode_compile(struct sComePollNode* self, struct sInfo* info);
static void list$1sBlock$ph_finalize(struct list$1sBlock$ph* self);
static void list_item$1sBlock$ph$p_finalize(struct list_item$1sBlock$ph* self);
static void sComePollNode_finalize(struct sComePollNode* self);
static void list$1sBlock$ph$p_finalize(struct list$1sBlock$ph* self);
static int list$1sNode$ph_length(struct list$1sNode$ph* self);
static struct sNode* list$1sNode$ph_begin(struct list$1sNode$ph* self);
static _Bool list$1sNode$ph_end(struct list$1sNode$ph* self);
static struct sNode* list$1sNode$ph_next(struct list$1sNode$ph* self);
static struct sBlock* list$1sBlock$ph$p_operator_load_element(struct list$1sBlock$ph* self, int position);
static struct sBlock* list$1sBlock$ph_operator_load_element(struct list$1sBlock$ph* self, int position);
struct sLambdaCall* sLambdaCall_initialize(struct sLambdaCall* self, struct sNode* node, struct list$1tuple2$2char$phsNode$ph$ph* params, struct sInfo* info);
char* sLambdaCall_kind(struct sLambdaCall* self);
_Bool sLambdaCall_compile(struct sLambdaCall* self, struct sInfo* info);
static void sLambdaCall_finalize(struct sLambdaCall* self);
struct sVarArgTypeName* sVarArgTypeName_initialize(struct sVarArgTypeName* self, struct sType* type, struct sInfo* info);
char* sVarArgTypeName_kind(struct sVarArgTypeName* self);
_Bool sVarArgTypeName_compile(struct sVarArgTypeName* self, struct sInfo* info);
static void sVarArgTypeName_finalize(struct sVarArgTypeName* self);
struct sInnerAttribute* sInnerAttribute_initialize(struct sInnerAttribute* self, char* attr, struct sInfo* info);
char* sInnerAttribute_kind(struct sInnerAttribute* self);
_Bool sInnerAttribute_compile(struct sInnerAttribute* self, struct sInfo* info);
static void sInnerAttribute_finalize(struct sInnerAttribute* self);
struct sNode* parse_function_call(char* fun_name, struct sInfo* info, _Bool come_);
static void tuple3$3sType$phchar$ph_Bool$$p_finalize(struct tuple3$3sType$phchar$ph_Bool$* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_push_back(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item);
static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_initialize(struct tuple2$2char$phsNode$ph* self, char* v1, struct sNode* v2);
static struct sFunCallNode* sFunCallNode_clone(struct sFunCallNode* self);
struct sNode* expression_node_v1(struct sInfo* info);
char* parse_inner_attribute(struct sInfo* info);
struct sNode* expression_node_v98(struct sInfo* info);
static struct sVar* map$2char$phsVar$ph$p_operator_load_element(struct map$2char$phsVar$ph* self, char* key);
static struct sVar* map$2char$phsVar$ph_operator_load_element(struct map$2char$phsVar$ph* self, char* key);
static struct sInnerAttribute* sInnerAttribute_clone(struct sInnerAttribute* self);
static struct sCSourceNode* sCSourceNode_clone(struct sCSourceNode* self);
static struct sComeCallNode* sComeCallNode_clone(struct sComeCallNode* self);
static struct sComeJoinNode* sComeJoinNode_clone(struct sComeJoinNode* self);
static struct list$1sBlock$ph* list$1sBlock$ph_initialize(struct list$1sBlock$ph* self);
static struct list$1sBlock$ph* list$1sBlock$ph_add(struct list$1sBlock$ph* self, struct sBlock* item);
static struct sComePollNode* sComePollNode_clone(struct sComePollNode* self);
static struct list$1sBlock$ph* list$1sBlock$ph$p_clone(struct list$1sBlock$ph* self);
static struct sBlock* sBlock_clone(struct sBlock* self);
static struct list$1sNode$ph* list$1sNode$ph_clone(struct list$1sNode$ph* self);
static struct sVarTable* sVarTable_clone(struct sVarTable* self);
static struct map$2char$phsVar$ph* map$2char$phsVar$ph_clone(struct map$2char$phsVar$ph* self);
static void map$2char$phsVar$ph$p_finalize(struct map$2char$phsVar$ph* self);
static struct map$2char$phsVar$ph* map$2char$phsVar$ph_initialize(struct map$2char$phsVar$ph* self);
static char* map$2char$phsVar$ph_begin(struct map$2char$phsVar$ph* self);
static _Bool map$2char$phsVar$ph_end(struct map$2char$phsVar$ph* self);
static char* map$2char$phsVar$ph_next(struct map$2char$phsVar$ph* self);
static struct sVar* map$2char$phsVar$ph_at(struct map$2char$phsVar$ph* self, char* key, struct sVar* default_value);
static struct map$2char$phsVar$ph* map$2char$phsVar$ph_put(struct map$2char$phsVar$ph* self, char* key, struct sVar* item);
static void map$2char$phsVar$ph_rehash(struct map$2char$phsVar$ph* self);
static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item);
static struct sVar* sVar_clone(struct sVar* self);
static void map$2char$phsVar$ph_finalize(struct map$2char$phsVar$ph* self);
static struct sFuncNode* sFuncNode_clone(struct sFuncNode* self);
static struct sLineNode* sLineNode_clone(struct sLineNode* self);
static struct sSNameNode* sSNameNode_clone(struct sSNameNode* self);
static struct sCallerFuncNode* sCallerFuncNode_clone(struct sCallerFuncNode* self);
static struct sCallerLineNode* sCallerLineNode_clone(struct sCallerLineNode* self);
static struct sCallerSNameNode* sCallerSNameNode_clone(struct sCallerSNameNode* self);
static struct sVarArgTypeName* sVarArgTypeName_clone(struct sVarArgTypeName* self);
static struct sInlineAssembler* sInlineAssembler_clone(struct sInlineAssembler* self);
struct sNode* expression_v5(struct sInfo* info);
static struct sNode* post_position_operator_of_statment(struct sNode* node, struct sInfo* info);
struct sNode* statment(struct sInfo* info);
char* get_none_generics_name(char* class_name);
char* create_generics_name(struct sType* generics_type, struct sInfo* info);
char* create_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);
char* create_method_name_original_obj_type(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);
char* create_non_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);
char* create_method_name_using_class(struct sClass* obj_class, char* fun_name, struct sInfo* info);
struct sNode* top_level_v1(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* post_position_operator(struct sNode* node, struct sInfo* info);
static struct sLambdaCall* sLambdaCall_clone(struct sLambdaCall* self);
// uniq global variable
// inline function
static inline unsigned short int __bswap_16(unsigned short int __bsx){
    return ((unsigned short int)((((__bsx)>>8)&0xff)|(((__bsx)&0xff)<<8)));
}
static inline unsigned int __bswap_32(unsigned int __bsx){
    return ((((__bsx)&0xff000000u)>>24)|(((__bsx)&0x00ff0000u)>>8)|(((__bsx)&0x0000ff00u)<<8)|(((__bsx)&0x000000ffu)<<24));
}
static inline unsigned long  int __bswap_64(unsigned long  int __bsx){
    return ((((__bsx)&0xff00000000000000ull)>>56)|(((__bsx)&0x00ff000000000000ull)>>40)|(((__bsx)&0x0000ff0000000000ull)>>24)|(((__bsx)&0x000000ff00000000ull)>>8)|(((__bsx)&0x00000000ff000000ull)<<8)|(((__bsx)&0x0000000000ff0000ull)<<24)|(((__bsx)&0x000000000000ff00ull)<<40)|(((__bsx)&0x00000000000000ffull)<<56));
}
static inline unsigned short int __uint16_identity(unsigned short int __x){
    return __x;
}
static inline unsigned int __uint32_identity(unsigned int __x){
    return __x;
}
static inline unsigned long  int __uint64_identity(unsigned long  int __x){
    return __x;
}

// body function
struct sReturnNode* sReturnNode_initialize(struct sReturnNode* self, struct sNode* value, char* value_source, struct sInfo* info){
void* __right_value0 = (void*)0;
struct sNode* __dec_obj1;
char* __dec_obj2;
struct sReturnNode* __result_obj__1;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj1=self->value,
    self->value=(struct sNode*)come_increment_ref_count(value);
    (__dec_obj1 ? __dec_obj1 = come_decrement_ref_count(__dec_obj1, ((struct sNode*)__dec_obj1)->finalize, ((struct sNode*)__dec_obj1)->_protocol_obj, 0,0, (void*)0) :0);
    __right_value0 = (void*)0;
    __dec_obj2=self->value_source,
    self->value_source=(char*)come_increment_ref_count((char*)come_memdup(value_source, "05call.c", 13, "char*"));
    __dec_obj2 = come_decrement_ref_count(__dec_obj2, (void*)0, (void*)0, 0,0, (void*)0);
    __result_obj__1 = (struct sReturnNode*)come_increment_ref_count(self);
    come_call_finalizer(sReturnNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    (value_source = come_decrement_ref_count(value_source, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sReturnNode_finalize, __result_obj__1, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__1;
}

char* sReturnNode_kind(struct sReturnNode* self){
void* __right_value0 = (void*)0;
char* __result_obj__2;
    __result_obj__2 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string("sReturnNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__2 = come_decrement_ref_count(__result_obj__2, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__2;
}

_Bool sReturnNode_compile(struct sReturnNode* self, struct sInfo* info){
struct sFun* come_fun;
void* __right_value0 = (void*)0;
struct sType* result_type;
struct sType* result_type2;
struct sType* __dec_obj34;
struct sType* result_type3;
_Bool Value;
_Bool __result_obj__27;
struct CVALUE* come_value;
struct sType* come_value_type;
struct sType* __dec_obj35;
void* __right_value1 = (void*)0;
void* __right_value2 = (void*)0;
char* type_name;
struct list$1sVar$ph* o2_saved;
struct sVar* it;
struct list$1sVar$ph* __dec_obj36;
struct sFun* come_fun_10;
struct list$1sVar$ph* o2_saved_11;
struct sVar* it_12;
struct list$1sVar$ph* __dec_obj37;
    if(    self->value    ) {
        come_fun=info->come_fun;
        result_type=(struct sType*)come_increment_ref_count(sType_clone(come_fun->mResultType));
        __right_value0 = (void*)0;
        result_type2=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(result_type),(struct sType*)come_increment_ref_count(info->generics_type),info));
        __right_value0 = (void*)0;
        __dec_obj34=result_type2,
        result_type2=(struct sType*)come_increment_ref_count(solve_method_generics(result_type2,info));
        come_call_finalizer(sType_finalize, __dec_obj34,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        result_type3=result_type2->mNoSolvedGenericsType;
        if(        result_type2->mNoSolvedGenericsType        ) {
            result_type3=result_type2->mNoSolvedGenericsType;
        }
        else {
            result_type3=result_type2;
        }
        Value=node_compile(self->value,info);
        if(        !Value        ) {
            __result_obj__27 = 0;
            come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, result_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result_obj__27;
        }
        else {
        }
        __right_value0 = (void*)0;
        come_value=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        __right_value0 = (void*)0;
        come_value_type=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(come_value->type),(struct sType*)come_increment_ref_count(info->generics_type),info));
        __right_value0 = (void*)0;
        __dec_obj35=info->function_result_type,
        info->function_result_type=(struct sType*)come_increment_ref_count(sType_clone(come_value->type));
        come_call_finalizer(sType_finalize, __dec_obj35,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(        gComeC        ) {
            add_come_code(info,"return %s;\n",come_value->c_value);
        }
        else if(        string_operator_not_equals(info->come_fun->mName,"main")&&info->come_fun->mNoResultType&&!existance_free_objects_on_return(come_fun->mBlock,info,come_value->var,0)&&!existance_free_right_value_objects(info)        ) {
            add_come_code(info,"return %s;\n",come_value->c_value);
        }
        else {
            static int result_num=0;
            result_num++;
            __right_value0 = (void*)0;
            add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value2=make_define_var(result_type2,((char*)(__right_value1=xsprintf("__result_obj__\%s",((char*)(__right_value0=int_to_string(result_num)))))),info,0,0))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0));
            if(            !info->come_fun->mNoResultType            ) {
                if(                !gComeC||!(strlen(result_type2->mClass->mName)>strlen("tuple")&&memcmp(result_type2->mClass->mName,"tuple",strlen("tuple"))==0)                ) {
                    check_assign_type("result type",result_type2,come_value_type,come_value,0,1,1,info);
                }
                if(                result_type2->mHeap                ) {
                    __right_value0 = (void*)0;
                    type_name=(char*)come_increment_ref_count(make_type_name_string(result_type2,info,0,0,0));
                    __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    add_come_code(info,((char*)(__right_value1=xsprintf("__result_obj__\%s = (%%s)come_increment_ref_count(%%s);\n",((char*)(__right_value0=int_to_string(result_num)))))),type_name,come_value->c_value);
                    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
                    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
                }
                else {
                    __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    add_come_code(info,((char*)(__right_value1=xsprintf("__result_obj__\%s = %%s;\n",((char*)(__right_value0=int_to_string(result_num)))))),come_value->c_value);
                    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
                }
            }
            else {
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                add_come_code(info,((char*)(__right_value1=xsprintf("__result_obj__\%s = %%s;\n",((char*)(__right_value0=int_to_string(result_num)))))),come_value->c_value);
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            }
            add_last_code_to_source(info);
            free_objects_on_return(come_fun->mBlock,info,come_value->var,0);
            free_right_value_objects(info);
            if(            info->block_level==1            ) {
                info->inhibits_output_code=1;
                if(                info->match_it_var                ) {
                    for(                    o2_saved=(struct list$1sVar$ph*)come_increment_ref_count(info->match_it_var),it=list$1sVar$ph_begin(o2_saved)                    ;                    !list$1sVar$ph_end(o2_saved)                    ;                    it=list$1sVar$ph_next(o2_saved)                    ){
                        __right_value0 = (void*)0;
                        free_object((struct sType*)come_increment_ref_count(sType_clone(it->mType)),it->mCValueName,0,0,info,0);
                    }
                    come_call_finalizer(list$1sVar$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    __dec_obj36=info->match_it_var,
                    info->match_it_var=((void*)0);
                    come_call_finalizer(list$1sVar$ph_finalize, __dec_obj36,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            if(            !gComeC&&string_operator_equals(info->come_fun->mName,"main")            ) {
                free_objects(info->gv_table,((void*)0),info);
                __right_value0 = (void*)0;
                add_come_code(info,((char*)(__right_value0=xsprintf("come_heap_final();\n"))));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            }
            if(            result_type2->mHeap            ) {
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                free_object((struct sType*)come_increment_ref_count(result_type2),((char*)(__right_value1=xsprintf("__result_obj__\%s",((char*)(__right_value0=int_to_string(result_num)))))),0,1,info,0);
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            }
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            add_come_code(info,((char*)(__right_value1=xsprintf("return __result_obj__\%s;\n",((char*)(__right_value0=int_to_string(result_num)))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, result_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, come_value_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        come_fun_10=info->come_fun;
        add_last_code_to_source(info);
        free_objects_on_return(come_fun_10->mBlock,info,((void*)0),0);
        free_right_value_objects(info);
        if(        info->block_level==1        ) {
            info->inhibits_output_code=1;
            if(            info->match_it_var            ) {
                for(                o2_saved_11=(struct list$1sVar$ph*)come_increment_ref_count(info->match_it_var),it_12=list$1sVar$ph_begin(o2_saved_11)                ;                !list$1sVar$ph_end(o2_saved_11)                ;                it_12=list$1sVar$ph_next(o2_saved_11)                ){
                    __right_value0 = (void*)0;
                    free_object((struct sType*)come_increment_ref_count(sType_clone(it_12->mType)),it_12->mCValueName,0,0,info,0);
                }
                come_call_finalizer(list$1sVar$ph$p_finalize, o2_saved_11, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                __dec_obj37=info->match_it_var,
                info->match_it_var=((void*)0);
                come_call_finalizer(list$1sVar$ph_finalize, __dec_obj37,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        if(        !gComeC&&string_operator_equals(info->come_fun->mName,"main")        ) {
            free_objects(info->gv_table,((void*)0),info);
            __right_value0 = (void*)0;
            add_come_code(info,((char*)(__right_value0=xsprintf("come_heap_final();\n"))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        add_come_code(info,"return;\n");
    }
    info->last_statment_is_return=1;
    return 1;
}

static void sNodeBase_finalize(struct sNodeBase* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

static void sReturnNode_finalize(struct sReturnNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)    ) {
        ((self->value) ? self->value = come_decrement_ref_count(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->value_source!=((void*)0)    ) {
        (self->value_source = come_decrement_ref_count(self->value_source, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

static struct sType* sType_clone(struct sType* self){
struct sType* __result_obj__3;
void* __right_value0 = (void*)0;
struct sType* result;
struct sType* __dec_obj3;
struct sType* __dec_obj4;
struct list$1sType$ph* __dec_obj8;
struct sType* __dec_obj9;
struct sNode* __dec_obj10;
struct sNode* __dec_obj11;
char* __dec_obj12;
char* __dec_obj13;
char* __dec_obj14;
char* __dec_obj15;
char* __dec_obj16;
char* __dec_obj17;
struct list$1sNode$ph* __dec_obj21;
struct list$1sNode$ph* __dec_obj22;
struct list$1int$* __dec_obj23;
struct list$1int$* __dec_obj24;
struct sType* __dec_obj25;
char* __dec_obj26;
struct list$1sType$ph* __dec_obj27;
struct list$1char$ph* __dec_obj31;
struct sType* __dec_obj32;
struct sNode* __dec_obj33;
struct sType* __result_obj__26;
    if(    self==(void*)0    ) {
        __result_obj__3 = (struct sType*)come_increment_ref_count((void*)0);
        come_call_finalizer(sType_finalize, __result_obj__3, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__3;
    }
    result=(struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType*"));
    if(    self!=((void*)0)    ) {
        result->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj3=result->mOriginalLoadVarType,
        result->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(sType_clone(self->mOriginalLoadVarType));
        come_call_finalizer(sType_finalize, __dec_obj3,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj4=result->mChannelType,
        result->mChannelType=(struct sType*)come_increment_ref_count(sType_clone(self->mChannelType));
        come_call_finalizer(sType_finalize, __dec_obj4,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj8=result->mGenericsTypes,
        result->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mGenericsTypes));
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj8,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj9=result->mNoSolvedGenericsType,
        result->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(sType_clone(self->mNoSolvedGenericsType));
        come_call_finalizer(sType_finalize, __dec_obj9,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj10=result->mSizeNum,
        result->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        (__dec_obj10 ? __dec_obj10 = come_decrement_ref_count(__dec_obj10, ((struct sNode*)__dec_obj10)->finalize, ((struct sNode*)__dec_obj10)->_protocol_obj, 0,0, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj11=result->mAlignas,
        result->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        (__dec_obj11 ? __dec_obj11 = come_decrement_ref_count(__dec_obj11, ((struct sNode*)__dec_obj11)->finalize, ((struct sNode*)__dec_obj11)->_protocol_obj, 0,0, (void*)0) :0);
    }
    if(    self!=((void*)0)    ) {
        result->mAlignasDouble=self->mAlignasDouble;
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj12=result->mTupleName,
        result->mTupleName=(char*)come_increment_ref_count((char*)come_memdup(self->mTupleName, "sType_clone", 12, "char*"));
        __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj13=result->mAttribute,
        result->mAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mAttribute, "sType_clone", 13, "char*"));
        __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarAttribute!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj14=result->mVarAttribute,
        result->mVarAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mVarAttribute, "sType_clone", 14, "char*"));
        __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)    ) {
        result->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)    ) {
        result->mShort=self->mShort;
    }
    if(    self!=((void*)0)    ) {
        result->mLong=self->mLong;
    }
    if(    self!=((void*)0)    ) {
        result->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)    ) {
        result->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)    ) {
        result->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)    ) {
        result->mThreadLocal=self->mThreadLocal;
    }
    if(    self!=((void*)0)    ) {
        result->mComplex=self->mComplex;
    }
    if(    self!=((void*)0)    ) {
        result->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)    ) {
        result->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)    ) {
        result->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)    ) {
        result->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)    ) {
        result->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)    ) {
        result->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)    ) {
        result->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)    ) {
        result->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)    ) {
        result->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)    ) {
        result->mDefferRightValue=self->mDefferRightValue;
    }
    if(    self!=((void*)0)    ) {
        result->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)    ) {
        result->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)    ) {
        result->mException=self->mException;
    }
    if(    self!=((void*)0)    ) {
        result->mTypeName=self->mTypeName;
    }
    if(    self!=((void*)0)    ) {
        result->mAnonymous=self->mAnonymous;
    }
    if(    self!=((void*)0)&&self->mAnonymousName!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj15=result->mAnonymousName,
        result->mAnonymousName=(char*)come_increment_ref_count((char*)come_memdup(self->mAnonymousName, "sType_clone", 39, "char*"));
        __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result->mInnerStruct=self->mInnerStruct;
    }
    if(    self!=((void*)0)&&self->mInnerStructName!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj16=result->mInnerStructName,
        result->mInnerStructName=(char*)come_increment_ref_count((char*)come_memdup(self->mInnerStructName, "sType_clone", 41, "char*"));
        __dec_obj16 = come_decrement_ref_count(__dec_obj16, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result->mAnonymousVarName=self->mAnonymousVarName;
    }
    if(    self!=((void*)0)    ) {
        result->mInline=self->mInline;
    }
    if(    self!=((void*)0)    ) {
        result->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)    ) {
        result->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj17=result->mAsmName,
        result->mAsmName=(char*)come_increment_ref_count((char*)come_memdup(self->mAsmName, "sType_clone", 46, "char*"));
        __dec_obj17 = come_decrement_ref_count(__dec_obj17, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)    ) {
        result->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj21=result->mArrayNum,
        result->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mArrayNum));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj21,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarNameArrayNum!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj22=result->mVarNameArrayNum,
        result->mVarNameArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mVarNameArrayNum));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj22,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mArrayStatic!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj23=result->mArrayStatic,
        result->mArrayStatic=(struct list$1int$*)come_increment_ref_count(list$1int$$p_clone(self->mArrayStatic));
        come_call_finalizer(list$1int$_finalize, __dec_obj23,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mArrayRestrict!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj24=result->mArrayRestrict,
        result->mArrayRestrict=(struct list$1int$*)come_increment_ref_count(list$1int$$p_clone(self->mArrayRestrict));
        come_call_finalizer(list$1int$_finalize, __dec_obj24,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)    ) {
        result->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)    ) {
        result->mArrayPointerNum=self->mArrayPointerNum;
    }
    if(    self!=((void*)0)    ) {
        result->mPointerParen=self->mPointerParen;
    }
    if(    self!=((void*)0)&&self->mTypedefOriginalType!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj25=result->mTypedefOriginalType,
        result->mTypedefOriginalType=(struct sType*)come_increment_ref_count(sType_clone(self->mTypedefOriginalType));
        come_call_finalizer(sType_finalize, __dec_obj25,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj26=result->mOriginalTypeName,
        result->mOriginalTypeName=(char*)come_increment_ref_count((char*)come_memdup(self->mOriginalTypeName, "sType_clone", 58, "char*"));
        __dec_obj26 = come_decrement_ref_count(__dec_obj26, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result->mOriginalTypePointerNum=self->mOriginalTypePointerNum;
    }
    if(    self!=((void*)0)    ) {
        result->mOriginalTypePointerHeap=self->mOriginalTypePointerHeap;
    }
    if(    self!=((void*)0)    ) {
        result->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj27=result->mParamTypes,
        result->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mParamTypes));
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj27,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj31=result->mParamNames,
        result->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->mParamNames));
        come_call_finalizer(list$1char$ph_finalize, __dec_obj31,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj32=result->mResultType,
        result->mResultType=(struct sType*)come_increment_ref_count(sType_clone(self->mResultType));
        come_call_finalizer(sType_finalize, __dec_obj32,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)&&self->mTypeOfNode!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj33=result->mTypeOfNode,
        result->mTypeOfNode=(struct sNode*)come_increment_ref_count(sNode_clone(self->mTypeOfNode));
        (__dec_obj33 ? __dec_obj33 = come_decrement_ref_count(__dec_obj33, ((struct sNode*)__dec_obj33)->finalize, ((struct sNode*)__dec_obj33)->_protocol_obj, 0,0, (void*)0) :0);
    }
    __result_obj__26 = (struct sType*)come_increment_ref_count(result);
    come_call_finalizer(sType_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sType_finalize, __result_obj__26, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__26;
}

static void sType_finalize(struct sType* self){
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->mChannelType, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)    ) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)    ) {
        ((self->mSizeNum) ? self->mSizeNum = come_decrement_ref_count(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)    ) {
        ((self->mAlignas) ? self->mAlignas = come_decrement_ref_count(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)    ) {
        (self->mTupleName = come_decrement_ref_count(self->mTupleName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)    ) {
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(    self!=((void*)0)&&self->mVarAttribute!=((void*)0)    ) {
        (self->mVarAttribute = come_decrement_ref_count(self->mVarAttribute, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(    self!=((void*)0)&&self->mAnonymousName!=((void*)0)    ) {
        (self->mAnonymousName = come_decrement_ref_count(self->mAnonymousName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(    self!=((void*)0)&&self->mInnerStructName!=((void*)0)    ) {
        (self->mInnerStructName = come_decrement_ref_count(self->mInnerStructName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)    ) {
        (self->mAsmName = come_decrement_ref_count(self->mAsmName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)    ) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarNameArrayNum!=((void*)0)    ) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mVarNameArrayNum, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mArrayStatic!=((void*)0)    ) {
        come_call_finalizer(list$1int$$p_finalize, self->mArrayStatic, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mArrayRestrict!=((void*)0)    ) {
        come_call_finalizer(list$1int$$p_finalize, self->mArrayRestrict, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mTypedefOriginalType!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->mTypedefOriginalType, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)    ) {
        (self->mOriginalTypeName = come_decrement_ref_count(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)    ) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)    ) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamNames, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->mResultType, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mTypeOfNode!=((void*)0)    ) {
        ((self->mTypeOfNode) ? self->mTypeOfNode = come_decrement_ref_count(self->mTypeOfNode, ((struct sNode*)self->mTypeOfNode)->finalize, ((struct sNode*)self->mTypeOfNode)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
}

static void list$1sType$ph$p_finalize(struct list$1sType$ph* self){
struct list_item$1sType$ph* it;
struct list_item$1sType$ph* prev_it;
    if(    self==((void*)0)    ) {
        return;
    }
    it=self->head;
    while(    it!=((void*)0)    ) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it;
struct list_item$1sNode$ph* prev_it;
    if(    self==((void*)0)    ) {
        return;
    }
    it=self->head;
    while(    it!=((void*)0)    ) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        ((self->item) ? self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
}

static void list$1int$$p_finalize(struct list$1int$* self){
struct list_item$1int$* it;
struct list_item$1int$* prev_it;
    if(    self==((void*)0)    ) {
        return;
    }
    it=self->head;
    while(    it!=((void*)0)    ) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1int$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1int$$p_finalize(struct list_item$1int$* self){
}

static void list$1char$ph$p_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it;
struct list_item$1char$ph* prev_it;
    if(    self==((void*)0)    ) {
        return;
    }
    it=self->head;
    while(    it!=((void*)0)    ) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

static struct list$1sType$ph* list$1sType$ph$p_clone(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__4;
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct list$1sType$ph* result;
struct list_item$1sType$ph* it;
struct list$1sType$ph* __result_obj__8;
    if(    self==((void*)0)    ) {
        __result_obj__4 = (struct list$1sType$ph*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__4, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__4;
    }
    result=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "./neo-c.h", 1060, "struct list$1sType$ph*"))));
    it=self->head;
    while(    it!=((void*)0)    ) {
        if(        1        ) {
            __right_value0 = (void*)0;
            list$1sType$ph_add(result,(struct sType*)come_increment_ref_count(sType_clone(it->item)));
        }
        else {
            __right_value0 = (void*)0;
            list$1sType$ph_add(result,(struct sType*)come_increment_ref_count(sType_clone(it->item)));
        }
        it=it->next;
    }
    __result_obj__8 = (struct list$1sType$ph*)come_increment_ref_count(result);
    come_call_finalizer(list$1sType$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__8, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__8;
}

static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__5;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__5 = (struct list$1sType$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1sType$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__5, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__5;
}

static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType* item){
struct list$1sType$ph* __result_obj__6;
void* __right_value0 = (void*)0;
struct list_item$1sType$ph* litem;
struct sType* __dec_obj5;
struct list_item$1sType$ph* litem_0;
struct sType* __dec_obj6;
struct list_item$1sType$ph* litem_1;
struct sType* __dec_obj7;
struct list$1sType$ph* __result_obj__7;
    if(    self==((void*)0)    ) {
        __result_obj__6 = self;
        come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result_obj__6;
    }
    if(    self->len==0    ) {
        litem=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./neo-c.h", 1081, "struct list_item$1sType$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj5=litem->item,
        litem->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj5,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(    self->len==1    ) {
        __right_value0 = (void*)0;
        litem_0=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./neo-c.h", 1091, "struct list_item$1sType$ph*"))));
        litem_0->prev=self->head;
        litem_0->next=((void*)0);
        __dec_obj6=litem_0->item,
        litem_0->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj6,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem_0;
        self->head->next=litem_0;
    }
    else {
        __right_value0 = (void*)0;
        litem_1=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./neo-c.h", 1101, "struct list_item$1sType$ph*"))));
        litem_1->prev=self->tail;
        litem_1->next=((void*)0);
        __dec_obj7=litem_1->item,
        litem_1->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj7,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail->next=litem_1;
        self->tail=litem_1;
    }
    self->len++;
    __result_obj__7 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__7;
}

static void list$1sType$ph_finalize(struct list$1sType$ph* self){
struct list_item$1sType$ph* it;
struct list_item$1sType$ph* prev_it;
    if(    self==((void*)0)    ) {
        return;
    }
    it=self->head;
    while(    it!=((void*)0)    ) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static struct sNode* sNode_clone(struct sNode* self){
struct sNode* __result_obj__9;
void* __right_value0 = (void*)0;
struct sNode* result;
struct sNode* __result_obj__10;
    if(    self==(void*)0    ) {
        __result_obj__9 = (struct sNode*)come_increment_ref_count((void*)0);
        ((__result_obj__9) ? __result_obj__9 = come_decrement_ref_count(__result_obj__9, ((struct sNode*)__result_obj__9)->finalize, ((struct sNode*)__result_obj__9)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__9;
    }
    result=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc_v2(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*"));
    if(    self!=((void*)0)&&self->clone!=((void*)0)    ) {
        result->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)    ) {
        result->finalize=self->finalize;
    }
    if(    self!=((void*)0)    ) {
        result->clone=self->clone;
    }
    if(    self!=((void*)0)    ) {
        result->compile=self->compile;
    }
    if(    self!=((void*)0)    ) {
        result->sline=self->sline;
    }
    if(    self!=((void*)0)    ) {
        result->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)    ) {
        result->sname=self->sname;
    }
    if(    self!=((void*)0)    ) {
        result->terminated=self->terminated;
    }
    if(    self!=((void*)0)    ) {
        result->kind=self->kind;
    }
    if(    self!=((void*)0)    ) {
        result->no_mutex=self->no_mutex;
    }
    __result_obj__10 = (struct sNode*)come_increment_ref_count(result);
    ((result) ? result = come_decrement_ref_count(result, ((struct sNode*)result)->finalize, ((struct sNode*)result)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    ((__result_obj__10) ? __result_obj__10 = come_decrement_ref_count(__result_obj__10, ((struct sNode*)__result_obj__10)->finalize, ((struct sNode*)__result_obj__10)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    return __result_obj__10;
}

static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__11;
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct list$1sNode$ph* result;
struct list_item$1sNode$ph* it;
struct list$1sNode$ph* __result_obj__15;
    if(    self==((void*)0)    ) {
        __result_obj__11 = (struct list$1sNode$ph*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__11, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__11;
    }
    result=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "./neo-c.h", 1060, "struct list$1sNode$ph*"))));
    it=self->head;
    while(    it!=((void*)0)    ) {
        if(        1        ) {
            __right_value0 = (void*)0;
            list$1sNode$ph_add(result,(struct sNode*)come_increment_ref_count(sNode_clone(it->item)));
        }
        else {
            __right_value0 = (void*)0;
            list$1sNode$ph_add(result,(struct sNode*)come_increment_ref_count(sNode_clone(it->item)));
        }
        it=it->next;
    }
    __result_obj__15 = (struct list$1sNode$ph*)come_increment_ref_count(result);
    come_call_finalizer(list$1sNode$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__15, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__15;
}

static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__12;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__12 = (struct list$1sNode$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1sNode$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__12, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__12;
}

static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item){
struct list$1sNode$ph* __result_obj__13;
void* __right_value0 = (void*)0;
struct list_item$1sNode$ph* litem;
struct sNode* __dec_obj18;
struct list_item$1sNode$ph* litem_2;
struct sNode* __dec_obj19;
struct list_item$1sNode$ph* litem_3;
struct sNode* __dec_obj20;
struct list$1sNode$ph* __result_obj__14;
    if(    self==((void*)0)    ) {
        __result_obj__13 = self;
        ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        return __result_obj__13;
    }
    if(    self->len==0    ) {
        litem=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./neo-c.h", 1081, "struct list_item$1sNode$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj18=litem->item,
        litem->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj18 ? __dec_obj18 = come_decrement_ref_count(__dec_obj18, ((struct sNode*)__dec_obj18)->finalize, ((struct sNode*)__dec_obj18)->_protocol_obj, 0,0, (void*)0) :0);
        self->tail=litem;
        self->head=litem;
    }
    else if(    self->len==1    ) {
        __right_value0 = (void*)0;
        litem_2=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./neo-c.h", 1091, "struct list_item$1sNode$ph*"))));
        litem_2->prev=self->head;
        litem_2->next=((void*)0);
        __dec_obj19=litem_2->item,
        litem_2->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj19 ? __dec_obj19 = come_decrement_ref_count(__dec_obj19, ((struct sNode*)__dec_obj19)->finalize, ((struct sNode*)__dec_obj19)->_protocol_obj, 0,0, (void*)0) :0);
        self->tail=litem_2;
        self->head->next=litem_2;
    }
    else {
        __right_value0 = (void*)0;
        litem_3=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./neo-c.h", 1101, "struct list_item$1sNode$ph*"))));
        litem_3->prev=self->tail;
        litem_3->next=((void*)0);
        __dec_obj20=litem_3->item,
        litem_3->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj20 ? __dec_obj20 = come_decrement_ref_count(__dec_obj20, ((struct sNode*)__dec_obj20)->finalize, ((struct sNode*)__dec_obj20)->_protocol_obj, 0,0, (void*)0) :0);
        self->tail->next=litem_3;
        self->tail=litem_3;
    }
    self->len++;
    __result_obj__14 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    return __result_obj__14;
}

static void list$1sNode$ph_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it;
struct list_item$1sNode$ph* prev_it;
    if(    self==((void*)0)    ) {
        return;
    }
    it=self->head;
    while(    it!=((void*)0)    ) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static struct list$1int$* list$1int$$p_clone(struct list$1int$* self){
struct list$1int$* __result_obj__16;
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct list$1int$* result;
struct list_item$1int$* it;
struct list$1int$* __result_obj__20;
    if(    self==((void*)0)    ) {
        __result_obj__16 = (struct list$1int$*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1int$$p_finalize, __result_obj__16, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__16;
    }
    result=(struct list$1int$*)come_increment_ref_count(list$1int$_initialize((struct list$1int$*)come_increment_ref_count((struct list$1int$*)come_calloc_v2(1, sizeof(struct list$1int$)*(1), "./neo-c.h", 1060, "struct list$1int$*"))));
    it=self->head;
    while(    it!=((void*)0)    ) {
        if(        0        ) {
            list$1int$_add(result,it->item);
        }
        else {
            list$1int$_add(result,it->item);
        }
        it=it->next;
    }
    __result_obj__20 = (struct list$1int$*)come_increment_ref_count(result);
    come_call_finalizer(list$1int$$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1int$$p_finalize, __result_obj__20, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__20;
}

static struct list$1int$* list$1int$_initialize(struct list$1int$* self){
struct list$1int$* __result_obj__17;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__17 = (struct list$1int$*)come_increment_ref_count(self);
    come_call_finalizer(list$1int$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1int$$p_finalize, __result_obj__17, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__17;
}

static struct list$1int$* list$1int$_add(struct list$1int$* self, int item){
struct list$1int$* __result_obj__18;
void* __right_value0 = (void*)0;
struct list_item$1int$* litem;
struct list_item$1int$* litem_4;
struct list_item$1int$* litem_5;
struct list$1int$* __result_obj__19;
    if(    self==((void*)0)    ) {
        __result_obj__18 = self;
        return __result_obj__18;
    }
    if(    self->len==0    ) {
        litem=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "./neo-c.h", 1081, "struct list_item$1int$*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        litem->item=item;
        self->tail=litem;
        self->head=litem;
    }
    else if(    self->len==1    ) {
        __right_value0 = (void*)0;
        litem_4=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "./neo-c.h", 1091, "struct list_item$1int$*"))));
        litem_4->prev=self->head;
        litem_4->next=((void*)0);
        litem_4->item=item;
        self->tail=litem_4;
        self->head->next=litem_4;
    }
    else {
        __right_value0 = (void*)0;
        litem_5=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "./neo-c.h", 1101, "struct list_item$1int$*"))));
        litem_5->prev=self->tail;
        litem_5->next=((void*)0);
        litem_5->item=item;
        self->tail->next=litem_5;
        self->tail=litem_5;
    }
    self->len++;
    __result_obj__19 = self;
    return __result_obj__19;
}

static void list$1int$_finalize(struct list$1int$* self){
struct list_item$1int$* it;
struct list_item$1int$* prev_it;
    if(    self==((void*)0)    ) {
        return;
    }
    it=self->head;
    while(    it!=((void*)0)    ) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1int$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__21;
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct list$1char$ph* result;
struct list_item$1char$ph* it;
struct list$1char$ph* __result_obj__25;
    if(    self==((void*)0)    ) {
        __result_obj__21 = (struct list$1char$ph*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__21, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__21;
    }
    result=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "./neo-c.h", 1060, "struct list$1char$ph*"))));
    it=self->head;
    while(    it!=((void*)0)    ) {
        if(        1        ) {
            __right_value0 = (void*)0;
            list$1char$ph_add(result,(char*)come_increment_ref_count((char*)come_memdup(it->item, "./neo-c.h", 1065, "char*")));
        }
        else {
            __right_value0 = (void*)0;
            list$1char$ph_add(result,(char*)come_increment_ref_count((char*)come_memdup(it->item, "./neo-c.h", 1068, "char*")));
        }
        it=it->next;
    }
    __result_obj__25 = (struct list$1char$ph*)come_increment_ref_count(result);
    come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__25, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__25;
}

static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__22;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__22 = (struct list$1char$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__22, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__22;
}

static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char* item){
struct list$1char$ph* __result_obj__23;
void* __right_value0 = (void*)0;
struct list_item$1char$ph* litem;
char* __dec_obj28;
struct list_item$1char$ph* litem_6;
char* __dec_obj29;
struct list_item$1char$ph* litem_7;
char* __dec_obj30;
struct list$1char$ph* __result_obj__24;
    if(    self==((void*)0)    ) {
        __result_obj__23 = self;
        (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0));
        return __result_obj__23;
    }
    if(    self->len==0    ) {
        litem=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./neo-c.h", 1081, "struct list_item$1char$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj28=litem->item,
        litem->item=(char*)come_increment_ref_count(item);
        __dec_obj28 = come_decrement_ref_count(__dec_obj28, (void*)0, (void*)0, 0,0, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(    self->len==1    ) {
        __right_value0 = (void*)0;
        litem_6=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./neo-c.h", 1091, "struct list_item$1char$ph*"))));
        litem_6->prev=self->head;
        litem_6->next=((void*)0);
        __dec_obj29=litem_6->item,
        litem_6->item=(char*)come_increment_ref_count(item);
        __dec_obj29 = come_decrement_ref_count(__dec_obj29, (void*)0, (void*)0, 0,0, (void*)0);
        self->tail=litem_6;
        self->head->next=litem_6;
    }
    else {
        __right_value0 = (void*)0;
        litem_7=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./neo-c.h", 1101, "struct list_item$1char$ph*"))));
        litem_7->prev=self->tail;
        litem_7->next=((void*)0);
        __dec_obj30=litem_7->item,
        litem_7->item=(char*)come_increment_ref_count(item);
        __dec_obj30 = come_decrement_ref_count(__dec_obj30, (void*)0, (void*)0, 0,0, (void*)0);
        self->tail->next=litem_7;
        self->tail=litem_7;
    }
    self->len++;
    __result_obj__24 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0));
    return __result_obj__24;
}

static void list$1char$ph_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it;
struct list_item$1char$ph* prev_it;
    if(    self==((void*)0)    ) {
        return;
    }
    it=self->head;
    while(    it!=((void*)0)    ) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static struct sVar* list$1sVar$ph_begin(struct list$1sVar$ph* self){
struct sVar* result;
struct sVar* __result_obj__28;
struct sVar* __result_obj__29;
struct sVar* result_8;
struct sVar* __result_obj__30;
    if(    self==((void*)0)    ) {
        memset(&result,0,sizeof(struct sVar*));
        __result_obj__28 = result;
        return __result_obj__28;
    }
    self->it=self->head;
    if(    self->it    ) {
        __result_obj__29 = self->it->item;
        return __result_obj__29;
    }
    memset(&result_8,0,sizeof(struct sVar*));
    __result_obj__30 = result_8;
    return __result_obj__30;
}

static _Bool list$1sVar$ph_end(struct list$1sVar$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sVar* list$1sVar$ph_next(struct list$1sVar$ph* self){
struct sVar* result;
struct sVar* __result_obj__31;
struct sVar* __result_obj__32;
struct sVar* result_9;
struct sVar* __result_obj__33;
    if(    self==((void*)0)||self->it==((void*)0)    ) {
        memset(&result,0,sizeof(struct sVar*));
        __result_obj__31 = result;
        return __result_obj__31;
    }
    self->it=self->it->next;
    if(    self->it    ) {
        __result_obj__32 = self->it->item;
        return __result_obj__32;
    }
    memset(&result_9,0,sizeof(struct sVar*));
    __result_obj__33 = result_9;
    return __result_obj__33;
}

static void list$1sVar$ph$p_finalize(struct list$1sVar$ph* self){
struct list_item$1sVar$ph* it;
struct list_item$1sVar$ph* prev_it;
    if(    self==((void*)0)    ) {
        return;
    }
    it=self->head;
    while(    it!=((void*)0)    ) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sVar$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sVar$ph$p_finalize(struct list_item$1sVar$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        come_call_finalizer(sVar_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void sVar_finalize(struct sVar* self){
    if(    self!=((void*)0)&&self->mName!=((void*)0)    ) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)    ) {
        (self->mCValueName = come_decrement_ref_count(self->mCValueName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->mType, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)    ) {
        (self->mFunName = come_decrement_ref_count(self->mFunName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

static void list$1sVar$ph_finalize(struct list$1sVar$ph* self){
struct list_item$1sVar$ph* it;
struct list_item$1sVar$ph* prev_it;
    if(    self==((void*)0)    ) {
        return;
    }
    it=self->head;
    while(    it!=((void*)0)    ) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sVar$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void CVALUE_finalize(struct CVALUE* self){
    if(    self!=((void*)0)&&self->c_value!=((void*)0)    ) {
        (self->c_value = come_decrement_ref_count(self->c_value, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)    ) {
        (self->c_value_without_right_value_objects = come_decrement_ref_count(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(    self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)    ) {
        (self->c_value_without_cast_object_value = come_decrement_ref_count(self->c_value_without_cast_object_value, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

struct sNode* create_return_node(struct sNode* value, char* value_source, struct sInfo* info){
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct sNode* _inf_value1;
struct sReturnNode* _inf_obj_value1;
void* __right_value2 = (void*)0;
struct sNode* __result_obj__36;
    _inf_value1=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 140, "struct sNode");
    _inf_obj_value1=(struct sReturnNode*)come_increment_ref_count(((struct sReturnNode*)(__right_value1=sReturnNode_initialize((struct sReturnNode*)come_increment_ref_count((struct sReturnNode*)come_calloc_v2(1, sizeof(struct sReturnNode)*(1), "05call.c", 140, "struct sReturnNode*")),(struct sNode*)come_increment_ref_count(value),(char*)come_increment_ref_count(value_source),info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sReturnNode_finalize;
    _inf_value1->clone=(void*)sReturnNode_clone;
    _inf_value1->compile=(void*)sReturnNode_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sline_real=(void*)sNodeBase_sline_real;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sNodeBase_terminated;
    _inf_value1->kind=(void*)sReturnNode_kind;
    _inf_value1->no_mutex=(void*)sNodeBase_no_mutex;
    __result_obj__36 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value1)));
    ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    (value_source = come_decrement_ref_count(value_source, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sReturnNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
    ((__result_obj__36) ? __result_obj__36 = come_decrement_ref_count(__result_obj__36, ((struct sNode*)__result_obj__36)->finalize, ((struct sNode*)__result_obj__36)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    return __result_obj__36;
}

static struct sReturnNode* sReturnNode_clone(struct sReturnNode* self){
struct sReturnNode* __result_obj__34;
void* __right_value0 = (void*)0;
struct sReturnNode* result;
char* __dec_obj38;
struct sNode* __dec_obj39;
char* __dec_obj40;
struct sReturnNode* __result_obj__35;
    if(    self==(void*)0    ) {
        __result_obj__34 = (void*)0;
        return __result_obj__34;
    }
    result=(struct sReturnNode*)come_increment_ref_count((struct sReturnNode*)come_calloc_v2(1, sizeof(struct sReturnNode)*(1), "sReturnNode_clone", 3, "struct sReturnNode*"));
    if(    self!=((void*)0)    ) {
        result->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj38=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sReturnNode_clone", 5, "char*"));
        __dec_obj38 = come_decrement_ref_count(__dec_obj38, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj39=result->value,
        result->value=(struct sNode*)come_increment_ref_count(sNode_clone(self->value));
        (__dec_obj39 ? __dec_obj39 = come_decrement_ref_count(__dec_obj39, ((struct sNode*)__dec_obj39)->finalize, ((struct sNode*)__dec_obj39)->_protocol_obj, 0,0, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->value_source!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj40=result->value_source,
        result->value_source=(char*)come_increment_ref_count((char*)come_memdup(self->value_source, "sReturnNode_clone", 8, "char*"));
        __dec_obj40 = come_decrement_ref_count(__dec_obj40, (void*)0, (void*)0, 0,0, (void*)0);
    }
    __result_obj__35 = result;
    come_call_finalizer(sReturnNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__35;
}

struct sCSourceNode* sCSourceNode_initialize(struct sCSourceNode* self, char* contents, struct sInfo* info){
void* __right_value0 = (void*)0;
char* __dec_obj41;
struct sCSourceNode* __result_obj__37;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj41=self->contents,
    self->contents=(char*)come_increment_ref_count(contents);
    __dec_obj41 = come_decrement_ref_count(__dec_obj41, (void*)0, (void*)0, 0,0, (void*)0);
    __result_obj__37 = (struct sCSourceNode*)come_increment_ref_count(self);
    come_call_finalizer(sCSourceNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    (contents = come_decrement_ref_count(contents, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sCSourceNode_finalize, __result_obj__37, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__37;
}

char* sCSourceNode_kind(struct sCSourceNode* self){
void* __right_value0 = (void*)0;
char* __result_obj__38;
    __result_obj__38 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string("sCSourceNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__38 = come_decrement_ref_count(__result_obj__38, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__38;
}

_Bool sCSourceNode_compile(struct sCSourceNode* self, struct sInfo* info){
void* __right_value0 = (void*)0;
    add_come_last_code(info,"%s",((char*)(__right_value0=string_operator_load_range_element(self->contents,1,-2))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    return 1;
}

static void sCSourceNode_finalize(struct sCSourceNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(    self!=((void*)0)&&self->contents!=((void*)0)    ) {
        (self->contents = come_decrement_ref_count(self->contents, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

struct sInlineAssembler* sInlineAssembler_initialize(struct sInlineAssembler* self, char* source, struct list$1sNode$ph* exps, struct sInfo* info){
void* __right_value0 = (void*)0;
char* __dec_obj42;
struct list$1sNode$ph* __dec_obj43;
struct sInlineAssembler* __result_obj__39;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj42=self->source,
    self->source=(char*)come_increment_ref_count(source);
    __dec_obj42 = come_decrement_ref_count(__dec_obj42, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj43=self->exps,
    self->exps=(struct list$1sNode$ph*)come_increment_ref_count(exps);
    come_call_finalizer(list$1sNode$ph_finalize, __dec_obj43,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __result_obj__39 = (struct sInlineAssembler*)come_increment_ref_count(self);
    come_call_finalizer(sInlineAssembler_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    (source = come_decrement_ref_count(source, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(list$1sNode$ph$p_finalize, exps, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sInlineAssembler_finalize, __result_obj__39, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__39;
}

char* sInlineAssembler_kind(struct sInlineAssembler* self){
void* __right_value0 = (void*)0;
char* __result_obj__40;
    __result_obj__40 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string("sInlineAssembler"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__40 = come_decrement_ref_count(__result_obj__40, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__40;
}

_Bool sInlineAssembler_compile(struct sInlineAssembler* self, struct sInfo* info){
char* source;
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct CVALUE* come_value;
struct buffer* buf;
char* p;
_Bool dquort;
int num_exp;
struct sNode* node;
_Bool Value;
_Bool __result_obj__47;
struct CVALUE* come_value_15;
void* __right_value2 = (void*)0;
char* __dec_obj44;
struct sType* __exception_result_var_b1;
struct sType* __exception_result_var_b2;
struct sType* __dec_obj45;
_Bool __result_obj__50;
    source=(char*)come_increment_ref_count(self->source);
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 184, "struct CVALUE*"))));
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    buf=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 186, "struct buffer*"))));
    p=source;
    while(    *p!=40    ) {
        buffer_append_char(buf,*p);
        p++;
    }
    if(    *p==40    ) {
        buffer_append_char(buf,*p);
        p++;
        while(        *p==32||*p==9||*p==10        ) {
            buffer_append_char(buf,*p);
            p++;
        }
    }
    dquort=0;
    num_exp=0;
    while(    *p    ) {
        if(        *p==34        ) {
            buffer_append_char(buf,*p);
            p++;
            dquort=!dquort;
        }
        else if(        dquort        ) {
            buffer_append_char(buf,*p);
            p++;
        }
        else if(        *p==40        ) {
            buffer_append_char(buf,*p);
            p++;
            __right_value0 = (void*)0;
            node=(struct sNode*)come_increment_ref_count(list$1sNode$ph_operator_load_element(self->exps,num_exp++));
            Value=node_compile(node,info);
            if(            !Value            ) {
                __result_obj__47 = 0;
                ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                (source = come_decrement_ref_count(source, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result_obj__47;
            }
            else {
            }
            __right_value0 = (void*)0;
            come_value_15=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            buffer_append_str(buf,come_value_15->c_value);
            if(            *p==41            ) {
                buffer_append_char(buf,*p);
                p++;
            }
            ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            come_call_finalizer(CVALUE_finalize, come_value_15, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            buffer_append_char(buf,*p);
            p++;
        }
    }
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj44=come_value->c_value,
    come_value->c_value=(char*)come_increment_ref_count(charp_operator_add("__asm ",((char*)(__right_value1=buffer_to_string(buf)))));
    __dec_obj44 = come_decrement_ref_count(__dec_obj44, (void*)0, (void*)0, 0,0, (void*)0);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __right_value2 = (void*)0;
    __dec_obj45=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count((come_push_stackframe("05call.c", 243, 0),__exception_result_var_b1=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 243, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),0,info,0), come_pop_stackframe(), __exception_result_var_b1));
    come_call_finalizer(sType_finalize, __dec_obj45,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_value->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value));
    add_come_last_code(info,"%s",come_value->c_value);
    __result_obj__50 = 1;
    (source = come_decrement_ref_count(source, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__50;
}

static void sInlineAssembler_finalize(struct sInlineAssembler* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(    self!=((void*)0)&&self->source!=((void*)0)    ) {
        (self->source = come_decrement_ref_count(self->source, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(    self!=((void*)0)&&self->exps!=((void*)0)    ) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->exps, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static struct sNode* list$1sNode$ph$p_operator_load_element(struct list$1sNode$ph* self, int position){
struct sNode* default_value;
struct sNode* __result_obj__41;
struct list_item$1sNode$ph* it;
int i;
struct sNode* __result_obj__42;
struct sNode* default_value_13;
struct sNode* __result_obj__43;
    if(    self==((void*)0)    ) {
        memset(&default_value,0,sizeof(struct sNode*));
        __result_obj__41 = (struct sNode*)come_increment_ref_count(default_value);
        ((default_value) ? default_value = come_decrement_ref_count(default_value, ((struct sNode*)default_value)->finalize, ((struct sNode*)default_value)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        ((__result_obj__41) ? __result_obj__41 = come_decrement_ref_count(__result_obj__41, ((struct sNode*)__result_obj__41)->finalize, ((struct sNode*)__result_obj__41)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__41;
        ((default_value) ? default_value = come_decrement_ref_count(default_value, ((struct sNode*)default_value)->finalize, ((struct sNode*)default_value)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    if(    position<0    ) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(    it!=((void*)0)    ) {
        if(        position==i        ) {
            __result_obj__42 = (struct sNode*)come_increment_ref_count(it->item);
            ((__result_obj__42) ? __result_obj__42 = come_decrement_ref_count(__result_obj__42, ((struct sNode*)__result_obj__42)->finalize, ((struct sNode*)__result_obj__42)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__42;
        }
        it=it->next;
        i++;
    }
    memset(&default_value_13,0,sizeof(struct sNode*));
    __result_obj__43 = (struct sNode*)come_increment_ref_count(default_value_13);
    ((default_value_13) ? default_value_13 = come_decrement_ref_count(default_value_13, ((struct sNode*)default_value_13)->finalize, ((struct sNode*)default_value_13)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    ((__result_obj__43) ? __result_obj__43 = come_decrement_ref_count(__result_obj__43, ((struct sNode*)__result_obj__43)->finalize, ((struct sNode*)__result_obj__43)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    return __result_obj__43;
}

static struct sNode* list$1sNode$ph_operator_load_element(struct list$1sNode$ph* self, int position){
struct sNode* default_value;
struct sNode* __result_obj__44;
struct list_item$1sNode$ph* it;
int i;
struct sNode* __result_obj__45;
struct sNode* default_value_14;
struct sNode* __result_obj__46;
    if(    self==((void*)0)    ) {
        memset(&default_value,0,sizeof(struct sNode*));
        __result_obj__44 = (struct sNode*)come_increment_ref_count(default_value);
        ((default_value) ? default_value = come_decrement_ref_count(default_value, ((struct sNode*)default_value)->finalize, ((struct sNode*)default_value)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        ((__result_obj__44) ? __result_obj__44 = come_decrement_ref_count(__result_obj__44, ((struct sNode*)__result_obj__44)->finalize, ((struct sNode*)__result_obj__44)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__44;
        ((default_value) ? default_value = come_decrement_ref_count(default_value, ((struct sNode*)default_value)->finalize, ((struct sNode*)default_value)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    if(    position<0    ) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(    it!=((void*)0)    ) {
        if(        position==i        ) {
            __result_obj__45 = (struct sNode*)come_increment_ref_count(it->item);
            ((__result_obj__45) ? __result_obj__45 = come_decrement_ref_count(__result_obj__45, ((struct sNode*)__result_obj__45)->finalize, ((struct sNode*)__result_obj__45)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__45;
        }
        it=it->next;
        i++;
    }
    memset(&default_value_14,0,sizeof(struct sNode*));
    __result_obj__46 = (struct sNode*)come_increment_ref_count(default_value_14);
    ((default_value_14) ? default_value_14 = come_decrement_ref_count(default_value_14, ((struct sNode*)default_value_14)->finalize, ((struct sNode*)default_value_14)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    ((__result_obj__46) ? __result_obj__46 = come_decrement_ref_count(__result_obj__46, ((struct sNode*)__result_obj__46)->finalize, ((struct sNode*)__result_obj__46)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    return __result_obj__46;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item){
struct list$1CVALUE$ph* __result_obj__48;
void* __right_value0 = (void*)0;
struct list_item$1CVALUE$ph* litem;
struct CVALUE* __dec_obj46;
struct list_item$1CVALUE$ph* litem_16;
struct CVALUE* __dec_obj47;
struct list_item$1CVALUE$ph* litem_17;
struct CVALUE* __dec_obj48;
struct list$1CVALUE$ph* __result_obj__49;
    if(    self==((void*)0)    ) {
        __result_obj__48 = self;
        come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result_obj__48;
    }
    if(    self->len==0    ) {
        litem=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./neo-c.h", 1166, "struct list_item$1CVALUE$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj46=litem->item,
        litem->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj46,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(    self->len==1    ) {
        __right_value0 = (void*)0;
        litem_16=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./neo-c.h", 1176, "struct list_item$1CVALUE$ph*"))));
        litem_16->prev=self->head;
        litem_16->next=((void*)0);
        __dec_obj47=litem_16->item,
        litem_16->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj47,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem_16;
        self->head->next=litem_16;
    }
    else {
        __right_value0 = (void*)0;
        litem_17=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./neo-c.h", 1186, "struct list_item$1CVALUE$ph*"))));
        litem_17->prev=self->tail;
        litem_17->next=((void*)0);
        __dec_obj48=litem_17->item,
        litem_17->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj48,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail->next=litem_17;
        self->tail=litem_17;
    }
    self->len++;
    __result_obj__49 = self;
    come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__49;
}

struct sLineNode* sLineNode_initialize(struct sLineNode* self, struct sInfo* info){
void* __right_value0 = (void*)0;
struct sLineNode* __result_obj__51;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __result_obj__51 = (struct sLineNode*)come_increment_ref_count(self);
    come_call_finalizer(sLineNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sLineNode_finalize, __result_obj__51, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__51;
}

char* sLineNode_kind(struct sLineNode* self){
void* __right_value0 = (void*)0;
char* __result_obj__52;
    __result_obj__52 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string("sLineNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__52 = come_decrement_ref_count(__result_obj__52, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__52;
}

_Bool sLineNode_compile(struct sLineNode* self, struct sInfo* info){
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct CVALUE* come_value;
char* __dec_obj49;
void* __right_value2 = (void*)0;
struct sType* __exception_result_var_b3;
struct sType* __exception_result_var_b4;
struct sType* __dec_obj50;
_Bool __result_obj__53;
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 268, "struct CVALUE*"))));
    __right_value0 = (void*)0;
    __dec_obj49=come_value->c_value,
    come_value->c_value=(char*)come_increment_ref_count(xsprintf("%d",info->sline));
    __dec_obj49 = come_decrement_ref_count(__dec_obj49, (void*)0, (void*)0, 0,0, (void*)0);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj50=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count((come_push_stackframe("05call.c", 271, 2),__exception_result_var_b3=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 271, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),0,info,0), come_pop_stackframe(), __exception_result_var_b3));
    come_call_finalizer(sType_finalize, __dec_obj50,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_value->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value));
    add_come_last_code(info,"%s",come_value->c_value);
    __result_obj__53 = 1;
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__53;
}

static void sLineNode_finalize(struct sLineNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

struct sSNameNode* sSNameNode_initialize(struct sSNameNode* self, struct sInfo* info){
void* __right_value0 = (void*)0;
struct sSNameNode* __result_obj__54;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __result_obj__54 = (struct sSNameNode*)come_increment_ref_count(self);
    come_call_finalizer(sSNameNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sSNameNode_finalize, __result_obj__54, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__54;
}

char* sSNameNode_kind(struct sSNameNode* self){
void* __right_value0 = (void*)0;
char* __result_obj__55;
    __result_obj__55 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string("sSNameNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__55 = come_decrement_ref_count(__result_obj__55, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__55;
}

_Bool sSNameNode_compile(struct sSNameNode* self, struct sInfo* info){
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct CVALUE* come_value;
char* __dec_obj51;
void* __right_value2 = (void*)0;
struct sType* __exception_result_var_b5;
struct sType* __exception_result_var_b6;
struct sType* __dec_obj52;
_Bool __result_obj__56;
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 296, "struct CVALUE*"))));
    __right_value0 = (void*)0;
    __dec_obj51=come_value->c_value,
    come_value->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",info->sname));
    __dec_obj51 = come_decrement_ref_count(__dec_obj51, (void*)0, (void*)0, 0,0, (void*)0);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj52=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count((come_push_stackframe("05call.c", 299, 4),__exception_result_var_b5=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 299, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char*")),0,info,0), come_pop_stackframe(), __exception_result_var_b5));
    come_call_finalizer(sType_finalize, __dec_obj52,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_value->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value));
    add_come_last_code(info,"%s",come_value->c_value);
    __result_obj__56 = 1;
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__56;
}

static void sSNameNode_finalize(struct sSNameNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

struct sFuncNode* sFuncNode_initialize(struct sFuncNode* self, struct sInfo* info){
void* __right_value0 = (void*)0;
struct sFuncNode* __result_obj__57;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __result_obj__57 = (struct sFuncNode*)come_increment_ref_count(self);
    come_call_finalizer(sFuncNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sFuncNode_finalize, __result_obj__57, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__57;
}

char* sFuncNode_kind(struct sFuncNode* self){
void* __right_value0 = (void*)0;
char* __result_obj__58;
    __result_obj__58 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string("sFuncNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__58 = come_decrement_ref_count(__result_obj__58, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__58;
}

_Bool sFuncNode_compile(struct sFuncNode* self, struct sInfo* info){
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct CVALUE* come_value;
char* __dec_obj53;
void* __right_value2 = (void*)0;
struct sType* __exception_result_var_b7;
struct sType* __exception_result_var_b8;
struct sType* __dec_obj54;
_Bool __result_obj__59;
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 324, "struct CVALUE*"))));
    __right_value0 = (void*)0;
    __dec_obj53=come_value->c_value,
    come_value->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",info->come_fun->mName));
    __dec_obj53 = come_decrement_ref_count(__dec_obj53, (void*)0, (void*)0, 0,0, (void*)0);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj54=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count((come_push_stackframe("05call.c", 327, 6),__exception_result_var_b7=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 327, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char*")),0,info,0), come_pop_stackframe(), __exception_result_var_b7));
    come_call_finalizer(sType_finalize, __dec_obj54,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_value->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value));
    add_come_last_code(info,"%s",come_value->c_value);
    __result_obj__59 = 1;
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__59;
}

static void sFuncNode_finalize(struct sFuncNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

struct sCallerFuncNode* sCallerFuncNode_initialize(struct sCallerFuncNode* self, struct sInfo* info){
void* __right_value0 = (void*)0;
struct sCallerFuncNode* __result_obj__60;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __result_obj__60 = (struct sCallerFuncNode*)come_increment_ref_count(self);
    come_call_finalizer(sCallerFuncNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sCallerFuncNode_finalize, __result_obj__60, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__60;
}

char* sCallerFuncNode_kind(struct sCallerFuncNode* self){
void* __right_value0 = (void*)0;
char* __result_obj__61;
    __result_obj__61 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string("sCallerFuncNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__61 = come_decrement_ref_count(__result_obj__61, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__61;
}

_Bool sCallerFuncNode_compile(struct sCallerFuncNode* self, struct sInfo* info){
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct CVALUE* come_value;
char* __dec_obj55;
char* __dec_obj56;
void* __right_value2 = (void*)0;
struct sType* __exception_result_var_b9;
struct sType* __exception_result_var_b10;
struct sType* __dec_obj57;
_Bool __result_obj__62;
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 353, "struct CVALUE*"))));
    if(    info->caller_fun    ) {
        __right_value0 = (void*)0;
        __dec_obj55=come_value->c_value,
        come_value->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",info->caller_fun->mName));
        __dec_obj55 = come_decrement_ref_count(__dec_obj55, (void*)0, (void*)0, 0,0, (void*)0);
    }
    else {
        __right_value0 = (void*)0;
        __dec_obj56=come_value->c_value,
        come_value->c_value=(char*)come_increment_ref_count(xsprintf("\"\""));
        __dec_obj56 = come_decrement_ref_count(__dec_obj56, (void*)0, (void*)0, 0,0, (void*)0);
    }
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj57=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count((come_push_stackframe("05call.c", 361, 8),__exception_result_var_b9=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 361, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char*")),0,info,0), come_pop_stackframe(), __exception_result_var_b9));
    come_call_finalizer(sType_finalize, __dec_obj57,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_value->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value));
    add_come_last_code(info,"%s",come_value->c_value);
    __result_obj__62 = 1;
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__62;
}

static void sCallerFuncNode_finalize(struct sCallerFuncNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

struct sCallerLineNode* sCallerLineNode_initialize(struct sCallerLineNode* self, struct sInfo* info){
void* __right_value0 = (void*)0;
struct sCallerLineNode* __result_obj__63;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __result_obj__63 = (struct sCallerLineNode*)come_increment_ref_count(self);
    come_call_finalizer(sCallerLineNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sCallerLineNode_finalize, __result_obj__63, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__63;
}

_Bool sCallerLineNode_compile(struct sCallerLineNode* self, struct sInfo* info){
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct CVALUE* come_value;
char* __dec_obj58;
void* __right_value2 = (void*)0;
struct sType* __exception_result_var_b11;
struct sType* __exception_result_var_b12;
struct sType* __dec_obj59;
_Bool __result_obj__64;
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 382, "struct CVALUE*"))));
    __right_value0 = (void*)0;
    __dec_obj58=come_value->c_value,
    come_value->c_value=(char*)come_increment_ref_count(xsprintf("%d",info->caller_line));
    __dec_obj58 = come_decrement_ref_count(__dec_obj58, (void*)0, (void*)0, 0,0, (void*)0);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj59=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count((come_push_stackframe("05call.c", 385, 10),__exception_result_var_b11=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 385, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),0,info,0), come_pop_stackframe(), __exception_result_var_b11));
    come_call_finalizer(sType_finalize, __dec_obj59,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_value->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value));
    add_come_last_code(info,"%s",come_value->c_value);
    __result_obj__64 = 1;
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__64;
}

char* sCallerLineNode_kind(struct sCallerLineNode* self){
void* __right_value0 = (void*)0;
char* __result_obj__65;
    __result_obj__65 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string("sCallerLineNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__65 = come_decrement_ref_count(__result_obj__65, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__65;
}

static void sCallerLineNode_finalize(struct sCallerLineNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

struct sCallerSNameNode* sCallerSNameNode_initialize(struct sCallerSNameNode* self, struct sInfo* info){
void* __right_value0 = (void*)0;
struct sCallerSNameNode* __result_obj__66;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __result_obj__66 = (struct sCallerSNameNode*)come_increment_ref_count(self);
    come_call_finalizer(sCallerSNameNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sCallerSNameNode_finalize, __result_obj__66, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__66;
}

_Bool sCallerSNameNode_compile(struct sCallerSNameNode* self, struct sInfo* info){
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct CVALUE* come_value;
char* __dec_obj60;
void* __right_value2 = (void*)0;
struct sType* __exception_result_var_b13;
struct sType* __exception_result_var_b14;
struct sType* __dec_obj61;
_Bool __result_obj__67;
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 410, "struct CVALUE*"))));
    __right_value0 = (void*)0;
    __dec_obj60=come_value->c_value,
    come_value->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",info->caller_sname));
    __dec_obj60 = come_decrement_ref_count(__dec_obj60, (void*)0, (void*)0, 0,0, (void*)0);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj61=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count((come_push_stackframe("05call.c", 413, 12),__exception_result_var_b13=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 413, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char*")),0,info,0), come_pop_stackframe(), __exception_result_var_b13));
    come_call_finalizer(sType_finalize, __dec_obj61,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_value->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value));
    add_come_last_code(info,"%s",come_value->c_value);
    __result_obj__67 = 1;
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__67;
}

char* sCallerSNameNode_kind(struct sCallerSNameNode* self){
void* __right_value0 = (void*)0;
char* __result_obj__68;
    __result_obj__68 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string("sCallerSNameNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__68 = come_decrement_ref_count(__result_obj__68, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__68;
}

static void sCallerSNameNode_finalize(struct sCallerSNameNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

struct sFunCallNode* sFunCallNode_initialize(struct sFunCallNode* self, char* fun_name, struct list$1tuple2$2char$phsNode$ph$ph* params, struct list$1sType$ph* method_generics_types, struct buffer* method_block, int method_block_sline, struct sInfo* info){
void* __right_value0 = (void*)0;
char* __dec_obj62;
struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj68;
struct list$1sType$ph* __dec_obj69;
struct buffer* __dec_obj70;
struct sFunCallNode* __result_obj__76;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __right_value0 = (void*)0;
    __dec_obj62=self->fun_name,
    self->fun_name=(char*)come_increment_ref_count(__builtin_string(fun_name));
    __dec_obj62 = come_decrement_ref_count(__dec_obj62, (void*)0, (void*)0, 0,0, (void*)0);
    __right_value0 = (void*)0;
    __dec_obj68=self->params,
    self->params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_clone(params));
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph_finalize, __dec_obj68,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj69=self->method_generics_types,
    self->method_generics_types=(struct list$1sType$ph*)come_increment_ref_count(method_generics_types);
    come_call_finalizer(list$1sType$ph_finalize, __dec_obj69,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj70=self->method_block,
    self->method_block=(struct buffer*)come_increment_ref_count(method_block);
    come_call_finalizer(buffer_finalize, __dec_obj70,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    self->method_block_sline=method_block_sline;
    __result_obj__76 = (struct sFunCallNode*)come_increment_ref_count(self);
    come_call_finalizer(sFunCallNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(buffer_finalize, method_block, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sFunCallNode_finalize, __result_obj__76, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__76;
}

char* sFunCallNode_kind(struct sFunCallNode* self){
void* __right_value0 = (void*)0;
char* __result_obj__77;
    __result_obj__77 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string("sFunCallNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__77 = come_decrement_ref_count(__result_obj__77, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__77;
}

_Bool sFunCallNode_terminated(struct sFunCallNode* self){
    if(    self->method_block    ) {
        return 1;
    }
    else {
        return 0;
    }
}

_Bool sFunCallNode_compile(struct sFunCallNode* self, struct sInfo* info){
char* fun_name;
struct list$1tuple2$2char$phsNode$ph$ph* params;
struct buffer* method_block;
int method_block_sline;
struct sVar* var_;
struct sType* lambda_type;
_Bool __result_obj__78;
void* __right_value0 = (void*)0;
struct sType* result_type;
void* __right_value1 = (void*)0;
struct list$1CVALUE$ph* come_params;
_Bool __result_obj__80;
int i;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved;
struct tuple2$2char$phsNode$ph* it;
struct tuple2$2char$phsNode$ph* multiple_assign_var1
;char* label=0;
struct sNode* node=0;
_Bool Value;
_Bool __result_obj__87;
struct CVALUE* come_value;
struct sType* __dec_obj71;
_Bool _conditional_value_X0;
void* __right_value2 = (void*)0;
void* __right_value3 = (void*)0;
_Bool _conditional_value_X1;
struct buffer* buf;
int j;
struct list$1CVALUE$ph* o2_saved_24;
struct CVALUE* it_26;
struct CVALUE* come_value_28;
char* __dec_obj72;
struct sType* __dec_obj73;
_Bool __result_obj__100;
struct sGenericsFun* generics_fun;
_Bool method_generics;
struct list$1sType$ph* method_generics_types;
struct tuple2$2char$phsGenericsFun$p* multiple_assign_var2
;char* name=0;
struct sGenericsFun* gfun=0;
char* generics_fun_name;
struct sFun* fun;
struct list$1CVALUE$ph* come_params_29;
struct sFun* fun_30;
_Bool no_output_come_code;
_Bool __result_obj__111;
struct CVALUE* method_block_node;
struct sType* method_block_lambda_type;
struct sType* method_block_result_type;
struct sType* generics_fun_method_block_lambda_type;
struct sType* generics_fun_method_block_result_type;
int method_generics_num;
int n;
struct list$1sType$ph* o2_saved_36;
struct sType* it_38;
int method_generics_num_40;
struct list$1CVALUE$ph* come_params_41;
int i_42;
struct sType* result_type_43;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_44;
struct tuple2$2char$phsNode$ph* it_45;
struct tuple2$2char$phsNode$ph* multiple_assign_var3
;char* label_46=0;
struct sNode* node_47=0;
_Bool Value_48;
_Bool __result_obj__129;
struct CVALUE* come_value_49;
struct sType* __dec_obj78;
int method_generics_num_52;
int n_53;
struct list$1sType$ph* o2_saved_54;
struct sType* it_55;
int method_generics_num_56;
struct tuple2$2char$phsGenericsFun$p* multiple_assign_var4
;char* name_63=0;
struct sGenericsFun* gfun_64=0;
char* __dec_obj82;
struct tuple2$2char$phsGenericsFun$p* multiple_assign_var5
;char* name_65=0;
struct sGenericsFun* gfun_66=0;
char* __dec_obj83;
_Bool __result_obj__142;
struct list$1CVALUE$ph* come_params_67;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_68;
struct tuple2$2char$phsNode$ph* it_69;
struct tuple2$2char$phsNode$ph* multiple_assign_var6
;char* label_70=0;
struct sNode* node_71=0;
_Bool Value_72;
_Bool __result_obj__143;
struct CVALUE* come_value_73;
struct sType* __dec_obj84;
char* type1;
char* type2;
struct CVALUE* come_value_74;
char* __dec_obj85;
struct sType* __exception_result_var_b15;
struct sType* __exception_result_var_b16;
struct sType* __dec_obj86;
_Bool __result_obj__144;
struct CVALUE* come_value_75;
char* __dec_obj87;
struct sType* __exception_result_var_b17;
struct sType* __exception_result_var_b18;
struct sType* __dec_obj88;
_Bool __result_obj__145;
struct list$1CVALUE$ph* come_params_76;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_77;
struct tuple2$2char$phsNode$ph* it_78;
struct tuple2$2char$phsNode$ph* multiple_assign_var7
;char* label_79=0;
struct sNode* node_80=0;
_Bool Value_81;
_Bool __result_obj__146;
struct CVALUE* come_value_82;
struct sType* __dec_obj89;
struct buffer* buf_83;
int j_84;
struct list$1CVALUE$ph* o2_saved_85;
struct CVALUE* it_86;
struct CVALUE* come_value_87;
char* __dec_obj90;
struct sType* __exception_result_var_b19;
struct sType* __exception_result_var_b20;
struct sType* __dec_obj91;
struct sType* __exception_result_var_b21;
struct sType* __exception_result_var_b22;
struct sType* __dec_obj92;
struct sType* __exception_result_var_b23;
struct sType* __exception_result_var_b24;
struct sType* __dec_obj93;
struct sType* __exception_result_var_b25;
struct sType* __exception_result_var_b26;
struct sType* __dec_obj94;
struct sType* __exception_result_var_b27;
struct sType* __exception_result_var_b28;
struct sType* __dec_obj95;
struct sType* __exception_result_var_b29;
struct sType* __exception_result_var_b30;
struct sType* __dec_obj96;
struct sType* __exception_result_var_b31;
struct sType* __exception_result_var_b32;
struct sType* __dec_obj97;
struct sType* __exception_result_var_b33;
struct sType* __exception_result_var_b34;
struct sType* __dec_obj98;
struct sType* __exception_result_var_b35;
struct sType* __exception_result_var_b36;
struct sType* __dec_obj99;
struct sType* __exception_result_var_b37;
struct sType* __exception_result_var_b38;
struct sType* __dec_obj100;
struct sType* __exception_result_var_b39;
struct sType* __exception_result_var_b40;
struct sType* __dec_obj101;
struct sType* __exception_result_var_b41;
struct sType* __exception_result_var_b42;
struct sType* __dec_obj102;
struct sType* __exception_result_var_b43;
struct sType* __exception_result_var_b44;
struct sType* __dec_obj103;
struct sType* __exception_result_var_b45;
struct sType* __exception_result_var_b46;
struct sType* __dec_obj104;
struct sType* __exception_result_var_b47;
struct sType* __exception_result_var_b48;
struct sType* __dec_obj105;
struct sType* __exception_result_var_b49;
struct sType* __exception_result_var_b50;
struct sType* __dec_obj106;
struct sType* __exception_result_var_b51;
struct sType* __exception_result_var_b52;
struct sType* __dec_obj107;
struct sType* __exception_result_var_b53;
struct sType* __exception_result_var_b54;
struct sType* __dec_obj108;
struct sType* __exception_result_var_b55;
struct sType* __exception_result_var_b56;
struct sType* __dec_obj109;
struct sType* __dec_obj110;
struct sType* __dec_obj111;
struct sType* __dec_obj112;
struct sType* __exception_result_var_b57;
struct sType* __exception_result_var_b58;
struct sType* __dec_obj113;
struct sType* __dec_obj114;
struct sType* __dec_obj115;
struct sType* __dec_obj116;
struct sType* __dec_obj117;
struct sType* __dec_obj118;
struct sType* __dec_obj119;
struct sType* __exception_result_var_b59;
struct sType* __exception_result_var_b60;
struct sType* __dec_obj120;
struct sType* __exception_result_var_b61;
struct sType* __exception_result_var_b62;
struct sType* __dec_obj121;
struct sType* __exception_result_var_b63;
struct sType* __exception_result_var_b64;
struct sType* __dec_obj122;
struct sType* __exception_result_var_b65;
struct sType* __exception_result_var_b66;
struct sType* __dec_obj123;
struct sType* __exception_result_var_b67;
struct sType* __exception_result_var_b68;
struct sType* __dec_obj124;
struct sType* __exception_result_var_b69;
struct sType* __exception_result_var_b70;
struct sType* __dec_obj125;
struct sType* __exception_result_var_b71;
struct sType* __exception_result_var_b72;
struct sType* __dec_obj126;
struct sType* __exception_result_var_b73;
struct sType* __exception_result_var_b74;
struct sType* __dec_obj127;
struct sType* __exception_result_var_b75;
struct sType* __exception_result_var_b76;
struct sType* __dec_obj128;
struct sType* __exception_result_var_b77;
struct sType* __exception_result_var_b78;
struct sType* __dec_obj129;
_Bool __result_obj__147;
char* __dec_obj130;
struct buffer* buf_88;
struct CVALUE* come_value_89;
char* __dec_obj131;
struct sType* __exception_result_var_b79;
struct sType* __exception_result_var_b80;
struct sType* __dec_obj132;
_Bool __result_obj__148;
struct list$1CVALUE$ph* come_params_90;
int i_91;
struct sType* result_type_92;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_93;
struct tuple2$2char$phsNode$ph* it_94;
struct tuple2$2char$phsNode$ph* multiple_assign_var8
;char* label_95=0;
struct sNode* node_96=0;
_Bool Value_97;
_Bool __result_obj__149;
struct CVALUE* come_value_98;
struct sType* __dec_obj133;
struct sType* __dec_obj134;
struct buffer* buf_99;
int j_100;
struct list$1CVALUE$ph* o2_saved_101;
struct CVALUE* it_102;
struct CVALUE* come_value_103;
char* __dec_obj135;
struct sType* __dec_obj136;
_Bool __result_obj__150;
struct list$1CVALUE$ph* come_params_104;
int i_105;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_106;
struct tuple2$2char$phsNode$ph* it_107;
struct tuple2$2char$phsNode$ph* multiple_assign_var9
;char* label_108=0;
struct sNode* node_109=0;
_Bool Value_110;
_Bool __result_obj__151;
struct CVALUE* come_value_111;
struct sType* __dec_obj137;
struct buffer* buf_112;
int j_113;
struct list$1CVALUE$ph* o2_saved_114;
struct CVALUE* it_115;
struct sType* __exception_result_var_b81;
struct sType* __exception_result_var_b82;
struct sType* __exception_result_var_b83;
struct sType* result_type_116;
struct CVALUE* come_value_117;
char* __dec_obj138;
struct sType* __dec_obj139;
_Bool __result_obj__152;
char* __dec_obj140;
char* __dec_obj141;
char* p;
int version;
char* p2;
int i_118;
char* new_fun_name;
char* __dec_obj142;
char* new_fun_name_119;
char* __dec_obj143;
_Bool __result_obj__163;
int i_120;
char* new_fun_name_121;
_Bool _conditional_value_X2;
char* __dec_obj144;
struct sFun* fun_122;
struct list$1CVALUE$ph* come_params_123;
int i_124;
struct sType* result_type_125;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_126;
struct tuple2$2char$phsNode$ph* it_127;
struct tuple2$2char$phsNode$ph* multiple_assign_var10
;char* label_128=0;
struct sNode* node_129=0;
_Bool Value_130;
_Bool __result_obj__164;
struct CVALUE* come_value_131;
struct sType* __dec_obj145;
struct sType* __dec_obj146;
struct buffer* buf_132;
int j_133;
struct list$1CVALUE$ph* o2_saved_134;
struct CVALUE* it_135;
struct CVALUE* come_value_136;
char* __dec_obj147;
struct sType* __exception_result_var_b84;
struct sType* __exception_result_var_b85;
struct sType* __dec_obj148;
_Bool __result_obj__165;
struct sType* result_type_137;
struct list$1sType$ph* param_types;
struct list$1sType$ph* o2_saved_138;
struct sType* it_139;
struct sType* it2;
struct sType* __dec_obj149;
struct list$1CVALUE$ph* come_params_140;
int i_141;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_142;
struct tuple2$2char$phsNode$ph* it_143;
struct tuple2$2char$phsNode$ph* multiple_assign_var11
;char* label_144=0;
struct sNode* node_145=0;
_Bool Value_146;
_Bool __result_obj__166;
struct CVALUE* come_value_147;
struct sType* __dec_obj150;
int n_148;
struct list$1char$ph* o2_saved_149;
char* it_151;
int i_154;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_155;
struct tuple2$2char$phsNode$ph* it_156;
struct tuple2$2char$phsNode$ph* multiple_assign_var12
;char* label_157=0;
struct sNode* node_158=0;
_Bool Value_159;
_Bool __result_obj__176;
struct CVALUE* come_value_160;
struct sType* __dec_obj152;
_Bool Value_161;
_Bool __result_obj__177;
struct CVALUE* come_value_162;
struct sType* __dec_obj153;
_Bool _conditional_value_X3;
char* default_param;
char* param_name;
struct buffer* source;
char* p_165;
char* head;
int sline;
struct buffer* __dec_obj154;
_Bool no_output_come_code_166;
struct sNode* node_167;
_Bool Value_168;
_Bool __result_obj__184;
struct buffer* __dec_obj155;
struct CVALUE* come_value_169;
struct sType* __dec_obj156;
_Bool __result_obj__185;
_Bool __result_obj__186;
struct sNode* _inf_value2;
struct sCurrentNode* _inf_obj_value2;
struct sNode* current_stack_frame_node;
_Bool Value_170;
_Bool __result_obj__189;
struct CVALUE* come_value_171;
struct sType* __dec_obj158;
struct buffer* method_block2;
struct sType* method_block_type;
char* class_name;
struct sClass* current_stack_frame_struct;
int num_method_block;
_Bool __result_obj__200;
struct sType* result_type_172;
struct sType* result_type2;
struct list$1sType$ph* param_types_173;
struct list$1char$ph* param_names;
struct buffer* all_alhabet_sname;
char* p_174;
struct list$1sType$ph* o2_saved_175;
struct sType* it_176;
struct sType* param_type;
char* param_name_177;
char* param_name_178;
struct sType* param_type2;
char* param_name_179;
struct sType* param_type2_180;
struct buffer* source3;
char* p_181;
char* head_182;
int sline_183;
struct buffer* __dec_obj159;
struct sNode* node_184;
_Bool Value_185;
_Bool __result_obj__201;
char* method_block_name;
struct CVALUE* come_value2;
struct sFun* fun2;
_Bool __result_obj__202;
struct sType* method_block_type2;
char* __dec_obj160;
struct sType* __dec_obj161;
struct buffer* __dec_obj162;
struct buffer* buf_186;
char* __dec_obj163;
char* __dec_obj164;
char* __dec_obj165;
int j_187;
struct list$1CVALUE$ph* o2_saved_188;
struct CVALUE* it_189;
struct CVALUE* come_value_190;
char* __dec_obj166;
struct sType* __dec_obj167;
char* __dec_obj168;
_Bool __result_obj__203;
memset(&i_118, 0, sizeof(i_118));
    fun_name=(char*)come_increment_ref_count(self->fun_name);
    params=self->params;
    method_block=self->method_block;
    method_block_sline=self->method_block_sline;
    var_=get_variable_from_table(info->lv_table,fun_name);
    if(    var_==((void*)0)    ) {
        var_=get_variable_from_table(info->gv_table,fun_name);
    }
    if(    var_    ) {
        lambda_type=var_->mType;
        if(        string_operator_not_equals(lambda_type->mClass->mName,"lambda")        ) {
            err_msg(info,"%s is not lambda, can't call",fun_name);
            __result_obj__78 = 1;
            (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
            return __result_obj__78;
        }
        result_type=(struct sType*)come_increment_ref_count(sType_clone(lambda_type->mResultType));
        if(        result_type        ) {
            result_type->mStatic=0;
        }
        __right_value0 = (void*)0;
        come_params=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 485, "struct list$1CVALUE$ph*"))));
        if(        list$1sType$ph_length(lambda_type->mParamTypes)!=list$1tuple2$2char$phsNode$ph$ph_length(params)&&!lambda_type->mVarArgs        ) {
            err_msg(info,"invalid param number(%s). function param number is %d. caller param number is %d",fun_name,list$1sType$ph_length(lambda_type->mParamTypes),list$1tuple2$2char$phsNode$ph$ph_length(params));
            __result_obj__80 = 1;
            come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
            return __result_obj__80;
        }
        i=0;
        for(        o2_saved=params,it=list$1tuple2$2char$phsNode$ph$ph_begin(o2_saved)        ;        !list$1tuple2$2char$phsNode$ph$ph_end(o2_saved)        ;        it=list$1tuple2$2char$phsNode$ph$ph_next(o2_saved)        ){
            multiple_assign_var1=it;
            label=(char*)come_increment_ref_count(multiple_assign_var1->v1);
            node=(struct sNode*)come_increment_ref_count(multiple_assign_var1->v2);
            Value=node_compile(node,info);
            if(            !Value            ) {
                __result_obj__87 = 0;
                (label = come_decrement_ref_count(label, (void*)0, (void*)0, 0, 0, (void*)0));
                ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
                return __result_obj__87;
            }
            else {
            }
            __right_value0 = (void*)0;
            come_value=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            __right_value0 = (void*)0;
            __dec_obj71=come_value->type,
            come_value->type=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(come_value->type),(struct sType*)come_increment_ref_count(info->generics_type),info));
            come_call_finalizer(sType_finalize, __dec_obj71,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(            __right_value0 = (void*)0,             ({(_conditional_value_X0=(lambda_type->mVarArgs&&((struct sType*)(__right_value0=list$1sType$ph_operator_load_element(lambda_type->mParamTypes,i)))==((void*)0)));            come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            _conditional_value_X0;})            ) {
            }
            else {
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                check_assign_type(((char*)(__right_value2=xsprintf("\%s calling param #\%s",((char*)(__right_value0=string_to_string(fun_name))),((char*)(__right_value1=int_to_string(i)))))),((struct sType*)(__right_value3=list$1sType$ph_operator_load_element(lambda_type->mParamTypes,i))),come_value->type,come_value,0,1,1,info);
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
                (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0));
                come_call_finalizer(sType_finalize, __right_value3, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                if(                __right_value0 = (void*)0,                 ({(_conditional_value_X1=(((struct sType*)(__right_value0=list$1sType$ph_operator_load_element(lambda_type->mParamTypes,i)))->mHeap&&come_value->type->mHeap));                come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                _conditional_value_X1;})                ) {
                    __right_value0 = (void*)0;
                    std_move(((struct sType*)(__right_value0=list$1sType$ph_operator_load_element(lambda_type->mParamTypes,i))),come_value->type,come_value,info);
                    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                }
            }
            list$1CVALUE$ph_push_back(come_params,(struct CVALUE*)come_increment_ref_count(come_value));
            i++;
            (label = come_decrement_ref_count(label, (void*)0, (void*)0, 0, 0, (void*)0));
            ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        buf=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 520, "struct buffer*"))));
        buffer_append_str(buf,var_->mCValueName);
        buffer_append_str(buf,"(");
        j=0;
        for(        o2_saved_24=(struct list$1CVALUE$ph*)come_increment_ref_count(come_params),it_26=list$1CVALUE$ph_begin(o2_saved_24)        ;        !list$1CVALUE$ph_end(o2_saved_24)        ;        it_26=list$1CVALUE$ph_next(o2_saved_24)        ){
            buffer_append_str(buf,it_26->c_value);
            if(            j!=list$1CVALUE$ph_length(come_params)-1            ) {
                buffer_append_str(buf,",");
            }
            j++;
        }
        come_call_finalizer(list$1CVALUE$ph$p_finalize, o2_saved_24, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        buffer_append_str(buf,")");
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        come_value_28=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 537, "struct CVALUE*"))));
        __right_value0 = (void*)0;
        __dec_obj72=come_value_28->c_value,
        come_value_28->c_value=(char*)come_increment_ref_count(buffer_to_string(buf));
        __dec_obj72 = come_decrement_ref_count(__dec_obj72, (void*)0, (void*)0, 0,0, (void*)0);
        __right_value0 = (void*)0;
        __dec_obj73=come_value_28->type,
        come_value_28->type=(struct sType*)come_increment_ref_count(sType_clone(result_type));
        come_call_finalizer(sType_finalize, __dec_obj73,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(        come_value_28->type        ) {
            come_value_28->type->mStatic=0;
        }
        come_value_28->var=((void*)0);
        if(        lambda_type->mResultType->mHeap        ) {
            append_object_to_right_values(come_value_28,(struct sType*)come_increment_ref_count(lambda_type->mResultType),info,0,((void*)0),((void*)0),((void*)0));
        }
        add_come_last_code(info,"%s",come_value_28->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_28));
        info->calling_fun=((void*)0);
        __result_obj__100 = 1;
        come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(CVALUE_finalize, come_value_28, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
        return __result_obj__100;
        come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(CVALUE_finalize, come_value_28, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    generics_fun=((struct sGenericsFun*)(__right_value1=map$2char$phsGenericsFun$ph_at(info->generics_funcs,((char*)(__right_value0=__builtin_string(fun_name))),((void*)0))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    come_call_finalizer(sGenericsFun_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    method_generics=0;
    if(    generics_fun    ) {
        method_generics=list$1char$ph_length(generics_fun->mMethodGenericsTypeNames)>0;
    }
    if(    list$1sType$ph_length(self->method_generics_types)>0||method_generics    ) {
        if(        list$1sType$ph_length(self->method_generics_types)==0        ) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            method_generics_types=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05call.c", 564, "struct list$1sType$ph*"))));
            __right_value0 = (void*)0;
            multiple_assign_var2=((struct tuple2$2char$phsGenericsFun$p*)(__right_value0=make_method_generics_function((char*)come_increment_ref_count(fun_name),(struct list$1sType$ph*)come_increment_ref_count(method_generics_types),info)));
            name=(char*)come_increment_ref_count(multiple_assign_var2->v1);
            gfun=multiple_assign_var2->v2;
            come_call_finalizer(tuple2$2char$phsGenericsFun$p$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            generics_fun_name=(char*)come_increment_ref_count(name);
            __right_value0 = (void*)0;
            fun=((struct sFun*)(__right_value0=map$2char$phsFun$ph_at(info->funcs,generics_fun_name,((void*)0))));
            come_call_finalizer(sFun_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            if(            method_block            ) {
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                come_params_29=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 571, "struct list$1CVALUE$ph*"))));
                __right_value0 = (void*)0;
                fun_30=((struct sFun*)(__right_value0=map$2char$phsFun$ph_at(info->funcs,generics_fun_name,((void*)0))));
                come_call_finalizer(sFun_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                no_output_come_code=info->no_output_come_code;
                info->no_output_come_code=1;
                if(                !compile_method_block(method_block,(struct list$1CVALUE$ph*)come_increment_ref_count(come_params_29),fun_30,fun_name,method_block_sline,info,1)                ) {
                    __result_obj__111 = 0;
                    come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_29, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
                    (generics_fun_name = come_decrement_ref_count(generics_fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
                    (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
                    return __result_obj__111;
                }
                info->no_output_come_code=no_output_come_code;
                __right_value0 = (void*)0;
                method_block_node=((struct CVALUE*)(__right_value0=list$1CVALUE$ph_operator_load_element(come_params_29,-1)));
                come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                __right_value0 = (void*)0;
                method_block_lambda_type=(struct sType*)come_increment_ref_count(sType_clone(method_block_node->type));
                __right_value0 = (void*)0;
                method_block_result_type=(struct sType*)come_increment_ref_count(sType_clone(info->come_method_block_function_result_type));
                __right_value0 = (void*)0;
                generics_fun_method_block_lambda_type=((struct sType*)(__right_value0=list$1sType$ph_operator_load_element(generics_fun->mParamTypes,-1)));
                come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                generics_fun_method_block_result_type=generics_fun_method_block_lambda_type->mResultType;
                if(                generics_fun_method_block_result_type->mClass->mMethodGenerics                ) {
                    method_generics_num=generics_fun_method_block_result_type->mClass->mMethodGenericsNum;
                    __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    list$1sType$ph_operator_store_element(method_generics_types,method_generics_num,(struct sType*)come_increment_ref_count(sType_clone(method_block_result_type)));
                    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                }
                n=0;
                for(                o2_saved_36=(struct list$1sType$ph*)come_increment_ref_count(generics_fun_method_block_lambda_type->mParamTypes),it_38=list$1sType$ph_begin(o2_saved_36)                ;                !list$1sType$ph_end(o2_saved_36)                ;                it_38=list$1sType$ph_next(o2_saved_36)                ){
                    if(                    it_38->mClass->mMethodGenerics                    ) {
                        method_generics_num_40=it_38->mClass->mMethodGenericsNum;
                        __right_value0 = (void*)0;
                        __right_value1 = (void*)0;
                        __right_value2 = (void*)0;
                        __right_value3 = (void*)0;
                        list$1sType$ph_operator_store_element(method_generics_types,method_generics_num_40,(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)(__right_value2=list$1sType$ph_operator_load_element(method_block_lambda_type->mParamTypes,n))))));
                        come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                        come_call_finalizer(sType_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                        come_call_finalizer(sType_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    }
                    n++;
                }
                come_call_finalizer(list$1sType$ph$p_finalize, o2_saved_36, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_29, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, method_block_lambda_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, method_block_result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            come_params_41=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 603, "struct list$1CVALUE$ph*"))));
            i_42=0;
            result_type_43=((void*)0);
            for(            o2_saved_44=params,it_45=list$1tuple2$2char$phsNode$ph$ph_begin(o2_saved_44)            ;            !list$1tuple2$2char$phsNode$ph$ph_end(o2_saved_44)            ;            it_45=list$1tuple2$2char$phsNode$ph$ph_next(o2_saved_44)            ){
                multiple_assign_var3=it_45;
                label_46=(char*)come_increment_ref_count(multiple_assign_var3->v1);
                node_47=(struct sNode*)come_increment_ref_count(multiple_assign_var3->v2);
                Value_48=node_compile(node_47,info);
                if(                !Value_48                ) {
                    __result_obj__129 = 0;
                    (label_46 = come_decrement_ref_count(label_46, (void*)0, (void*)0, 0, 0, (void*)0));
                    ((node_47) ? node_47 = come_decrement_ref_count(node_47, ((struct sNode*)node_47)->finalize, ((struct sNode*)node_47)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                    come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
                    (generics_fun_name = come_decrement_ref_count(generics_fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
                    come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_41, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer(sType_finalize, result_type_43, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
                    return __result_obj__129;
                }
                else {
                }
                __right_value0 = (void*)0;
                come_value_49=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                __right_value0 = (void*)0;
                __dec_obj78=come_value_49->type,
                come_value_49->type=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(come_value_49->type),(struct sType*)come_increment_ref_count(info->generics_type),info));
                come_call_finalizer(sType_finalize, __dec_obj78,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                list$1CVALUE$ph_add(come_params_41,(struct CVALUE*)come_increment_ref_count(come_value_49));
                (label_46 = come_decrement_ref_count(label_46, (void*)0, (void*)0, 0, 0, (void*)0));
                ((node_47) ? node_47 = come_decrement_ref_count(node_47, ((struct sNode*)node_47)->finalize, ((struct sNode*)node_47)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                come_call_finalizer(CVALUE_finalize, come_value_49, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(            generics_fun->mResultType->mClass->mMethodGenerics            ) {
                method_generics_num_52=generics_fun->mResultType->mClass->mMethodGenericsNum;
                if(                info->function_result_type                ) {
                    __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    list$1sType$ph_operator_store_element(method_generics_types,method_generics_num_52,(struct sType*)come_increment_ref_count(sType_clone(info->function_result_type)));
                    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                }
            }
            n_53=0;
            for(            o2_saved_54=(struct list$1sType$ph*)come_increment_ref_count(generics_fun->mParamTypes),it_55=list$1sType$ph_begin(o2_saved_54)            ;            !list$1sType$ph_end(o2_saved_54)            ;            it_55=list$1sType$ph_next(o2_saved_54)            ){
                if(                it_55->mClass->mMethodGenerics                ) {
                    method_generics_num_56=it_55->mClass->mMethodGenericsNum;
                    if(                    n_53<list$1CVALUE$ph_length(come_params_41)                    ) {
                        __right_value0 = (void*)0;
                        __right_value1 = (void*)0;
                        __right_value2 = (void*)0;
                        __right_value3 = (void*)0;
                        list$1sType$ph_operator_store_element(method_generics_types,method_generics_num_56,(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)(__right_value2=list$1CVALUE$ph_operator_load_element(come_params_41,n_53)))->type)));
                        come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                        come_call_finalizer(sType_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                        come_call_finalizer(CVALUE_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    }
                }
                n_53++;
            }
            come_call_finalizer(list$1sType$ph$p_finalize, o2_saved_54, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            map$2char$phsFun$ph_remove(info->funcs,(char*)come_increment_ref_count(generics_fun_name));
            __right_value0 = (void*)0;
            (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
            multiple_assign_var4=((struct tuple2$2char$phsGenericsFun$p*)(__right_value0=make_method_generics_function((char*)come_increment_ref_count(fun_name),(struct list$1sType$ph*)come_increment_ref_count(method_generics_types),info)));
            name_63=(char*)come_increment_ref_count(multiple_assign_var4->v1);
            gfun_64=multiple_assign_var4->v2;
            come_call_finalizer(tuple2$2char$phsGenericsFun$p$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            __dec_obj82=fun_name,
            fun_name=(char*)come_increment_ref_count(name_63);
            __dec_obj82 = come_decrement_ref_count(__dec_obj82, (void*)0, (void*)0, 0,0, (void*)0);
            come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (generics_fun_name = come_decrement_ref_count(generics_fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_41, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, result_type_43, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (name_63 = come_decrement_ref_count(name_63, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        else {
            __right_value0 = (void*)0;
            multiple_assign_var5=((struct tuple2$2char$phsGenericsFun$p*)(__right_value0=make_method_generics_function((char*)come_increment_ref_count(fun_name),(struct list$1sType$ph*)come_increment_ref_count(self->method_generics_types),info)));
            name_65=(char*)come_increment_ref_count(multiple_assign_var5->v1);
            gfun_66=multiple_assign_var5->v2;
            come_call_finalizer(tuple2$2char$phsGenericsFun$p$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            __dec_obj83=fun_name,
            fun_name=(char*)come_increment_ref_count(name_65);
            __dec_obj83 = come_decrement_ref_count(__dec_obj83, (void*)0, (void*)0, 0,0, (void*)0);
            (name_65 = come_decrement_ref_count(name_65, (void*)0, (void*)0, 0, 0, (void*)0));
        }
    }
    if(    string_operator_equals(fun_name,"__builtin_types_compatible_p")    ) {
        if(        list$1tuple2$2char$phsNode$ph$ph_length(params)!=2        ) {
            err_msg(info,"__builtin_types_compatible_p params error");
            __result_obj__142 = 0;
            (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
            return __result_obj__142;
        }
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        come_params_67=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 657, "struct list$1CVALUE$ph*"))));
        for(        o2_saved_68=params,it_69=list$1tuple2$2char$phsNode$ph$ph_begin(o2_saved_68)        ;        !list$1tuple2$2char$phsNode$ph$ph_end(o2_saved_68)        ;        it_69=list$1tuple2$2char$phsNode$ph$ph_next(o2_saved_68)        ){
            multiple_assign_var6=it_69;
            label_70=(char*)come_increment_ref_count(multiple_assign_var6->v1);
            node_71=(struct sNode*)come_increment_ref_count(multiple_assign_var6->v2);
            Value_72=node_compile(node_71,info);
            if(            !Value_72            ) {
                __result_obj__143 = 0;
                (label_70 = come_decrement_ref_count(label_70, (void*)0, (void*)0, 0, 0, (void*)0));
                ((node_71) ? node_71 = come_decrement_ref_count(node_71, ((struct sNode*)node_71)->finalize, ((struct sNode*)node_71)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_67, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
                return __result_obj__143;
            }
            else {
            }
            __right_value0 = (void*)0;
            come_value_73=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            __right_value0 = (void*)0;
            __dec_obj84=come_value_73->type,
            come_value_73->type=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(come_value_73->type),(struct sType*)come_increment_ref_count(info->generics_type),info));
            come_call_finalizer(sType_finalize, __dec_obj84,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            list$1CVALUE$ph_push_back(come_params_67,(struct CVALUE*)come_increment_ref_count(come_value_73));
            (label_70 = come_decrement_ref_count(label_70, (void*)0, (void*)0, 0, 0, (void*)0));
            ((node_71) ? node_71 = come_decrement_ref_count(node_71, ((struct sNode*)node_71)->finalize, ((struct sNode*)node_71)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            come_call_finalizer(CVALUE_finalize, come_value_73, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        __right_value0 = (void*)0;
        type1=(char*)come_increment_ref_count(((struct CVALUE*)(__right_value0=list$1CVALUE$ph_operator_load_element(come_params_67,0)))->c_value);
        come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        __right_value0 = (void*)0;
        type2=(char*)come_increment_ref_count(((struct CVALUE*)(__right_value0=list$1CVALUE$ph_operator_load_element(come_params_67,1)))->c_value);
        come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        if(        string_operator_equals(type1,type2)        ) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            come_value_74=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 676, "struct CVALUE*"))));
            __right_value0 = (void*)0;
            __dec_obj85=come_value_74->c_value,
            come_value_74->c_value=(char*)come_increment_ref_count(xsprintf("1"));
            __dec_obj85 = come_decrement_ref_count(__dec_obj85, (void*)0, (void*)0, 0,0, (void*)0);
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            __dec_obj86=come_value_74->type,
            come_value_74->type=(struct sType*)come_increment_ref_count((come_push_stackframe("05call.c", 679, 14),__exception_result_var_b15=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 679, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),0,info,0), come_pop_stackframe(), __exception_result_var_b15));
            come_call_finalizer(sType_finalize, __dec_obj86,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_value_74->var=((void*)0);
            add_come_last_code(info,"%s",come_value_74->c_value);
            list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_74));
            __result_obj__144 = 1;
            come_call_finalizer(CVALUE_finalize, come_value_74, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_67, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (type1 = come_decrement_ref_count(type1, (void*)0, (void*)0, 0, 0, (void*)0));
            (type2 = come_decrement_ref_count(type2, (void*)0, (void*)0, 0, 0, (void*)0));
            (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
            return __result_obj__144;
            come_call_finalizer(CVALUE_finalize, come_value_74, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            come_value_75=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 689, "struct CVALUE*"))));
            __right_value0 = (void*)0;
            __dec_obj87=come_value_75->c_value,
            come_value_75->c_value=(char*)come_increment_ref_count(xsprintf("0"));
            __dec_obj87 = come_decrement_ref_count(__dec_obj87, (void*)0, (void*)0, 0,0, (void*)0);
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            __dec_obj88=come_value_75->type,
            come_value_75->type=(struct sType*)come_increment_ref_count((come_push_stackframe("05call.c", 692, 16),__exception_result_var_b17=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 692, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),0,info,0), come_pop_stackframe(), __exception_result_var_b17));
            come_call_finalizer(sType_finalize, __dec_obj88,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_value_75->var=((void*)0);
            add_come_last_code(info,"%s",come_value_75->c_value);
            list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_75));
            __result_obj__145 = 1;
            come_call_finalizer(CVALUE_finalize, come_value_75, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_67, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (type1 = come_decrement_ref_count(type1, (void*)0, (void*)0, 0, 0, (void*)0));
            (type2 = come_decrement_ref_count(type2, (void*)0, (void*)0, 0, 0, (void*)0));
            (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
            return __result_obj__145;
            come_call_finalizer(CVALUE_finalize, come_value_75, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_67, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (type1 = come_decrement_ref_count(type1, (void*)0, (void*)0, 0, 0, (void*)0));
        (type2 = come_decrement_ref_count(type2, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    else if(    string_operator_equals(fun_name,"__builtin_memmove")||string_operator_equals(fun_name,"__builtin_memset")||string_operator_equals(fun_name,"__builtin_ffs")||string_operator_equals(fun_name,"__builtin_ffsl")||string_operator_equals(fun_name,"__builtin_ffsll")||string_operator_equals(fun_name,"__builtin_bswap16")||string_operator_equals(fun_name,"__builtin_bswap32")||string_operator_equals(fun_name,"__builtin_bswap64")||string_operator_equals(fun_name,"__builtin_constant_p")||string_operator_equals(fun_name,"__builtin_expect")||string_operator_equals(fun_name,"__builtin___memset_chk")||string_operator_equals(fun_name,"__builtin_object_size")||string_operator_equals(fun_name,"__builtin___memcpy_chk")||string_operator_equals(fun_name,"__builtin___strncpy_chk")||string_operator_equals(fun_name,"__builtin___strncat_chk")||string_operator_equals(fun_name,"__builtin___vsnprintf_chk")||string_operator_equals(fun_name,"__builtin_strrchr")||string_operator_equals(fun_name,"__builtin_clz")||string_operator_equals(fun_name,"__builtin_choose_expr")||string_operator_equals(fun_name,"__dsb")||string_operator_equals(fun_name,"__isb")||string_operator_equals(fun_name,"__dmb")||(strlen(fun_name)==strlen("__builtin_arm_")&&memcmp(fun_name,"__builtin_arm_",strlen("__builtin_arm_"))==0)||string_operator_equals(fun_name,"__c11_atomic_thread_fence")||string_operator_equals(fun_name,"__c11_atomic_signal_fence")||string_operator_equals(fun_name,"__c11_atomic_store")||string_operator_equals(fun_name,"__c11_atomic_load")||string_operator_equals(fun_name,"__c11_atomic_exchange")||string_operator_equals(fun_name,"__c11_atomic_compare_exchange_strong")||string_operator_equals(fun_name,"__c11_atomic_compare_exchange_weak")||string_operator_equals(fun_name,"__c11_atomic_compare_exchange_strong_explicit")||string_operator_equals(fun_name,"__c11_atomic_compare_exchange_weak_explicit")||string_operator_equals(fun_name,"__c11_atomic_exchange_strong")||string_operator_equals(fun_name,"__c11_atomic_exchange_weak")||string_operator_equals(fun_name,"__c11_atomic_fetch_add")||string_operator_equals(fun_name,"__c11_atomic_fetch_sub")||string_operator_equals(fun_name,"__c11_atomic_fetch_and")||string_operator_equals(fun_name,"__c11_atomic_fetch_or")||string_operator_equals(fun_name,"__c11_atomic_fetch_xor")||string_operator_equals(fun_name,"__c11_atomic_fetch_add_explicit")||string_operator_equals(fun_name,"__c11_atomic_fetch_sub_explicit")||string_operator_equals(fun_name,"__c11_atomic_fetch_and_explicit")||string_operator_equals(fun_name,"__c11_atomic_fetch_or_explicit")||string_operator_equals(fun_name,"__c11_atomic_fetch_xor_explicit")||string_operator_equals(fun_name,"__c11_atomic_init")||string_operator_equals(fun_name,"__c11_atomic_is_lock_free")    ) {
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        come_params_76=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 743, "struct list$1CVALUE$ph*"))));
        for(        o2_saved_77=params,it_78=list$1tuple2$2char$phsNode$ph$ph_begin(o2_saved_77)        ;        !list$1tuple2$2char$phsNode$ph$ph_end(o2_saved_77)        ;        it_78=list$1tuple2$2char$phsNode$ph$ph_next(o2_saved_77)        ){
            multiple_assign_var7=it_78;
            label_79=(char*)come_increment_ref_count(multiple_assign_var7->v1);
            node_80=(struct sNode*)come_increment_ref_count(multiple_assign_var7->v2);
            Value_81=node_compile(node_80,info);
            if(            !Value_81            ) {
                __result_obj__146 = 0;
                (label_79 = come_decrement_ref_count(label_79, (void*)0, (void*)0, 0, 0, (void*)0));
                ((node_80) ? node_80 = come_decrement_ref_count(node_80, ((struct sNode*)node_80)->finalize, ((struct sNode*)node_80)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_76, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
                return __result_obj__146;
            }
            else {
            }
            __right_value0 = (void*)0;
            come_value_82=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            __right_value0 = (void*)0;
            __dec_obj89=come_value_82->type,
            come_value_82->type=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(come_value_82->type),(struct sType*)come_increment_ref_count(info->generics_type),info));
            come_call_finalizer(sType_finalize, __dec_obj89,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            list$1CVALUE$ph_push_back(come_params_76,(struct CVALUE*)come_increment_ref_count(come_value_82));
            (label_79 = come_decrement_ref_count(label_79, (void*)0, (void*)0, 0, 0, (void*)0));
            ((node_80) ? node_80 = come_decrement_ref_count(node_80, ((struct sNode*)node_80)->finalize, ((struct sNode*)node_80)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            come_call_finalizer(CVALUE_finalize, come_value_82, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        buf_83=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 758, "struct buffer*"))));
        buffer_append_str(buf_83,fun_name);
        buffer_append_str(buf_83,"(");
        j_84=0;
        for(        o2_saved_85=(struct list$1CVALUE$ph*)come_increment_ref_count(come_params_76),it_86=list$1CVALUE$ph_begin(o2_saved_85)        ;        !list$1CVALUE$ph_end(o2_saved_85)        ;        it_86=list$1CVALUE$ph_next(o2_saved_85)        ){
            buffer_append_str(buf_83,it_86->c_value);
            if(            j_84!=list$1CVALUE$ph_length(come_params_76)-1            ) {
                buffer_append_str(buf_83,",");
            }
            j_84++;
        }
        come_call_finalizer(list$1CVALUE$ph$p_finalize, o2_saved_85, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_83,")");
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        come_value_87=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 775, "struct CVALUE*"))));
        __right_value0 = (void*)0;
        __dec_obj90=come_value_87->c_value,
        come_value_87->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_83));
        __dec_obj90 = come_decrement_ref_count(__dec_obj90, (void*)0, (void*)0, 0,0, (void*)0);
        if(        string_operator_equals(fun_name,"__builtin_memmove")||string_operator_equals(fun_name,"__builtin_memset")        ) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            __dec_obj91=come_value_87->type,
            come_value_87->type=(struct sType*)come_increment_ref_count((come_push_stackframe("05call.c", 779, 18),__exception_result_var_b19=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 779, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),0,info,0), come_pop_stackframe(), __exception_result_var_b19));
            come_call_finalizer(sType_finalize, __dec_obj91,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name,"__builtin_ffs")        ) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            __dec_obj92=come_value_87->type,
            come_value_87->type=(struct sType*)come_increment_ref_count((come_push_stackframe("05call.c", 782, 20),__exception_result_var_b21=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 782, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),0,info,0), come_pop_stackframe(), __exception_result_var_b21));
            come_call_finalizer(sType_finalize, __dec_obj92,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name,"__builtin_ffsl")        ) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            __dec_obj93=come_value_87->type,
            come_value_87->type=(struct sType*)come_increment_ref_count((come_push_stackframe("05call.c", 785, 22),__exception_result_var_b23=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 785, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),0,info,0), come_pop_stackframe(), __exception_result_var_b23));
            come_call_finalizer(sType_finalize, __dec_obj93,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name,"__builtin_ffsll")        ) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            __dec_obj94=come_value_87->type,
            come_value_87->type=(struct sType*)come_increment_ref_count((come_push_stackframe("05call.c", 788, 24),__exception_result_var_b25=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 788, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),0,info,0), come_pop_stackframe(), __exception_result_var_b25));
            come_call_finalizer(sType_finalize, __dec_obj94,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name,"__builtin_bswap16")        ) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            __dec_obj95=come_value_87->type,
            come_value_87->type=(struct sType*)come_increment_ref_count((come_push_stackframe("05call.c", 791, 26),__exception_result_var_b27=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 791, "struct sType*")),(char*)come_increment_ref_count(xsprintf("short")),0,info,0), come_pop_stackframe(), __exception_result_var_b27));
            come_call_finalizer(sType_finalize, __dec_obj95,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name,"__builtin_bswap32")        ) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            __dec_obj96=come_value_87->type,
            come_value_87->type=(struct sType*)come_increment_ref_count((come_push_stackframe("05call.c", 794, 28),__exception_result_var_b29=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 794, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),0,info,0), come_pop_stackframe(), __exception_result_var_b29));
            come_call_finalizer(sType_finalize, __dec_obj96,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name,"__builtin_bswap64")        ) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            __dec_obj97=come_value_87->type,
            come_value_87->type=(struct sType*)come_increment_ref_count((come_push_stackframe("05call.c", 797, 30),__exception_result_var_b31=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 797, "struct sType*")),(char*)come_increment_ref_count(xsprintf("long")),0,info,0), come_pop_stackframe(), __exception_result_var_b31));
            come_call_finalizer(sType_finalize, __dec_obj97,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name,"__builtin_constant_p")        ) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            __dec_obj98=come_value_87->type,
            come_value_87->type=(struct sType*)come_increment_ref_count((come_push_stackframe("05call.c", 800, 32),__exception_result_var_b33=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 800, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),0,info,0), come_pop_stackframe(), __exception_result_var_b33));
            come_call_finalizer(sType_finalize, __dec_obj98,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name,"__builtin_expect")        ) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            __dec_obj99=come_value_87->type,
            come_value_87->type=(struct sType*)come_increment_ref_count((come_push_stackframe("05call.c", 803, 34),__exception_result_var_b35=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 803, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),0,info,0), come_pop_stackframe(), __exception_result_var_b35));
            come_call_finalizer(sType_finalize, __dec_obj99,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name,"__builtin___memset_chk")        ) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            __dec_obj100=come_value_87->type,
            come_value_87->type=(struct sType*)come_increment_ref_count((come_push_stackframe("05call.c", 806, 36),__exception_result_var_b37=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 806, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),0,info,0), come_pop_stackframe(), __exception_result_var_b37));
            come_call_finalizer(sType_finalize, __dec_obj100,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_value_87->type->mPointerNum=1;
        }
        else if(        string_operator_equals(fun_name,"__builtin_object_size")        ) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            __dec_obj101=come_value_87->type,
            come_value_87->type=(struct sType*)come_increment_ref_count((come_push_stackframe("05call.c", 810, 38),__exception_result_var_b39=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 810, "struct sType*")),(char*)come_increment_ref_count(xsprintf("long")),0,info,0), come_pop_stackframe(), __exception_result_var_b39));
            come_call_finalizer(sType_finalize, __dec_obj101,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name,"__builtin___memcpy_chk")        ) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            __dec_obj102=come_value_87->type,
            come_value_87->type=(struct sType*)come_increment_ref_count((come_push_stackframe("05call.c", 813, 40),__exception_result_var_b41=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 813, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),0,info,0), come_pop_stackframe(), __exception_result_var_b41));
            come_call_finalizer(sType_finalize, __dec_obj102,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_value_87->type->mPointerNum=1;
        }
        else if(        string_operator_equals(fun_name,"__builtin___strncpy_chk")        ) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            __dec_obj103=come_value_87->type,
            come_value_87->type=(struct sType*)come_increment_ref_count((come_push_stackframe("05call.c", 817, 42),__exception_result_var_b43=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 817, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char")),0,info,0), come_pop_stackframe(), __exception_result_var_b43));
            come_call_finalizer(sType_finalize, __dec_obj103,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_value_87->type->mPointerNum=1;
        }
        else if(        string_operator_equals(fun_name,"__builtin___strncat_chk")        ) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            __dec_obj104=come_value_87->type,
            come_value_87->type=(struct sType*)come_increment_ref_count((come_push_stackframe("05call.c", 821, 44),__exception_result_var_b45=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 821, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char")),0,info,0), come_pop_stackframe(), __exception_result_var_b45));
            come_call_finalizer(sType_finalize, __dec_obj104,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_value_87->type->mPointerNum=1;
        }
        else if(        string_operator_equals(fun_name,"__builtin_strrchr")        ) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            __dec_obj105=come_value_87->type,
            come_value_87->type=(struct sType*)come_increment_ref_count((come_push_stackframe("05call.c", 825, 46),__exception_result_var_b47=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 825, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char")),0,info,0), come_pop_stackframe(), __exception_result_var_b47));
            come_call_finalizer(sType_finalize, __dec_obj105,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_value_87->type->mPointerNum=1;
        }
        else if(        string_operator_equals(fun_name,"__builtin___vsnprintf_chk")        ) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            __dec_obj106=come_value_87->type,
            come_value_87->type=(struct sType*)come_increment_ref_count((come_push_stackframe("05call.c", 829, 48),__exception_result_var_b49=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 829, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),0,info,0), come_pop_stackframe(), __exception_result_var_b49));
            come_call_finalizer(sType_finalize, __dec_obj106,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name,"__builtin_clz")        ) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            __dec_obj107=come_value_87->type,
            come_value_87->type=(struct sType*)come_increment_ref_count((come_push_stackframe("05call.c", 832, 50),__exception_result_var_b51=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 832, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),0,info,0), come_pop_stackframe(), __exception_result_var_b51));
            come_call_finalizer(sType_finalize, __dec_obj107,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name,"__c11_atomic_thread_fence")        ) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            __dec_obj108=come_value_87->type,
            come_value_87->type=(struct sType*)come_increment_ref_count((come_push_stackframe("05call.c", 835, 52),__exception_result_var_b53=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 835, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),0,info,0), come_pop_stackframe(), __exception_result_var_b53));
            come_call_finalizer(sType_finalize, __dec_obj108,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name,"__c11_atomic_signal_fence")        ) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            __dec_obj109=come_value_87->type,
            come_value_87->type=(struct sType*)come_increment_ref_count((come_push_stackframe("05call.c", 838, 54),__exception_result_var_b55=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 838, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),0,info,0), come_pop_stackframe(), __exception_result_var_b55));
            come_call_finalizer(sType_finalize, __dec_obj109,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name,"__c11_atomic_exchange")        ) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __dec_obj110=come_value_87->type,
            come_value_87->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)(__right_value0=list$1CVALUE$ph_operator_load_element(come_params_76,1)))->type));
            come_call_finalizer(sType_finalize, __dec_obj110,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name,"__c11_atomic_exchange_strong")        ) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __dec_obj111=come_value_87->type,
            come_value_87->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)(__right_value0=list$1CVALUE$ph_operator_load_element(come_params_76,2)))->type));
            come_call_finalizer(sType_finalize, __dec_obj111,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name,"__c11_atomic_exchange_weak")        ) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __dec_obj112=come_value_87->type,
            come_value_87->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)(__right_value0=list$1CVALUE$ph_operator_load_element(come_params_76,2)))->type));
            come_call_finalizer(sType_finalize, __dec_obj112,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name,"__c11_atomic_store")        ) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            __dec_obj113=come_value_87->type,
            come_value_87->type=(struct sType*)come_increment_ref_count((come_push_stackframe("05call.c", 850, 56),__exception_result_var_b57=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 850, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),0,info,0), come_pop_stackframe(), __exception_result_var_b57));
            come_call_finalizer(sType_finalize, __dec_obj113,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name,"__c11_atomic_load")        ) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __dec_obj114=come_value_87->type,
            come_value_87->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)(__right_value0=list$1CVALUE$ph_operator_load_element(come_params_76,0)))->type));
            come_call_finalizer(sType_finalize, __dec_obj114,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_value_87->type->mPointerNum--;
            come_value_87->type->mAtomic=0;
        }
        else if(        string_operator_equals(fun_name,"__c11_atomic_fetch_add")        ) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __dec_obj115=come_value_87->type,
            come_value_87->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)(__right_value0=list$1CVALUE$ph_operator_load_element(come_params_76,1)))->type));
            come_call_finalizer(sType_finalize, __dec_obj115,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name,"__c11_atomic_fetch_sub")        ) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __dec_obj116=come_value_87->type,
            come_value_87->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)(__right_value0=list$1CVALUE$ph_operator_load_element(come_params_76,1)))->type));
            come_call_finalizer(sType_finalize, __dec_obj116,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name,"__c11_atomic_fetch_and")        ) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __dec_obj117=come_value_87->type,
            come_value_87->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)(__right_value0=list$1CVALUE$ph_operator_load_element(come_params_76,1)))->type));
            come_call_finalizer(sType_finalize, __dec_obj117,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name,"__c11_atomic_fetch_or")        ) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __dec_obj118=come_value_87->type,
            come_value_87->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)(__right_value0=list$1CVALUE$ph_operator_load_element(come_params_76,1)))->type));
            come_call_finalizer(sType_finalize, __dec_obj118,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name,"__c11_atomic_fetch_xor")        ) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __dec_obj119=come_value_87->type,
            come_value_87->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)(__right_value0=list$1CVALUE$ph_operator_load_element(come_params_76,1)))->type));
            come_call_finalizer(sType_finalize, __dec_obj119,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name,"__dsb")        ) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            __dec_obj120=come_value_87->type,
            come_value_87->type=(struct sType*)come_increment_ref_count((come_push_stackframe("05call.c", 873, 58),__exception_result_var_b59=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 873, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),0,info,0), come_pop_stackframe(), __exception_result_var_b59));
            come_call_finalizer(sType_finalize, __dec_obj120,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name,"__isb")        ) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            __dec_obj121=come_value_87->type,
            come_value_87->type=(struct sType*)come_increment_ref_count((come_push_stackframe("05call.c", 876, 60),__exception_result_var_b61=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 876, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),0,info,0), come_pop_stackframe(), __exception_result_var_b61));
            come_call_finalizer(sType_finalize, __dec_obj121,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name,"__dmb")        ) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            __dec_obj122=come_value_87->type,
            come_value_87->type=(struct sType*)come_increment_ref_count((come_push_stackframe("05call.c", 879, 62),__exception_result_var_b63=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 879, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),0,info,0), come_pop_stackframe(), __exception_result_var_b63));
            come_call_finalizer(sType_finalize, __dec_obj122,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name,"__builtin_arm_cdp")        ) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            __dec_obj123=come_value_87->type,
            come_value_87->type=(struct sType*)come_increment_ref_count((come_push_stackframe("05call.c", 882, 64),__exception_result_var_b65=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 882, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),0,info,0), come_pop_stackframe(), __exception_result_var_b65));
            come_call_finalizer(sType_finalize, __dec_obj123,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name,"__builtin_arm_ldc")        ) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            __dec_obj124=come_value_87->type,
            come_value_87->type=(struct sType*)come_increment_ref_count((come_push_stackframe("05call.c", 885, 66),__exception_result_var_b67=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 885, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),0,info,0), come_pop_stackframe(), __exception_result_var_b67));
            come_call_finalizer(sType_finalize, __dec_obj124,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name,"__builtin_arm_stc")        ) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            __dec_obj125=come_value_87->type,
            come_value_87->type=(struct sType*)come_increment_ref_count((come_push_stackframe("05call.c", 888, 68),__exception_result_var_b69=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 888, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),0,info,0), come_pop_stackframe(), __exception_result_var_b69));
            come_call_finalizer(sType_finalize, __dec_obj125,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name,"__builtin_arm_stcl")        ) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            __dec_obj126=come_value_87->type,
            come_value_87->type=(struct sType*)come_increment_ref_count((come_push_stackframe("05call.c", 891, 70),__exception_result_var_b71=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 891, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),0,info,0), come_pop_stackframe(), __exception_result_var_b71));
            come_call_finalizer(sType_finalize, __dec_obj126,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name,"__builtin_arm_ldcl")        ) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            __dec_obj127=come_value_87->type,
            come_value_87->type=(struct sType*)come_increment_ref_count((come_push_stackframe("05call.c", 894, 72),__exception_result_var_b73=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 894, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),0,info,0), come_pop_stackframe(), __exception_result_var_b73));
            come_call_finalizer(sType_finalize, __dec_obj127,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name,"__builtin_choose_expr")        ) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            __dec_obj128=come_value_87->type,
            come_value_87->type=(struct sType*)come_increment_ref_count((come_push_stackframe("05call.c", 897, 74),__exception_result_var_b75=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 897, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),0,info,0), come_pop_stackframe(), __exception_result_var_b75));
            come_call_finalizer(sType_finalize, __dec_obj128,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            __dec_obj129=come_value_87->type,
            come_value_87->type=(struct sType*)come_increment_ref_count((come_push_stackframe("05call.c", 900, 76),__exception_result_var_b77=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 900, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),0,info,0), come_pop_stackframe(), __exception_result_var_b77));
            come_call_finalizer(sType_finalize, __dec_obj129,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        come_value_87->var=((void*)0);
        add_come_last_code(info,"%s",come_value_87->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_87));
        __result_obj__147 = 1;
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_76, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(buffer_finalize, buf_83, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(CVALUE_finalize, come_value_87, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
        return __result_obj__147;
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_76, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(buffer_finalize, buf_83, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(CVALUE_finalize, come_value_87, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    string_operator_equals(fun_name,"__nan")    ) {
        if(        string_operator_equals(fun_name,"__nan")        ) {
            __right_value0 = (void*)0;
            __dec_obj130=fun_name,
            fun_name=(char*)come_increment_ref_count(xsprintf("__builtin_nan"));
            __dec_obj130 = come_decrement_ref_count(__dec_obj130, (void*)0, (void*)0, 0,0, (void*)0);
        }
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        buf_88=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 916, "struct buffer*"))));
        buffer_append_str(buf_88,fun_name);
        buffer_append_str(buf_88,"(\"\")");
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        come_value_89=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 921, "struct CVALUE*"))));
        __right_value0 = (void*)0;
        __dec_obj131=come_value_89->c_value,
        come_value_89->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_88));
        __dec_obj131 = come_decrement_ref_count(__dec_obj131, (void*)0, (void*)0, 0,0, (void*)0);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        __dec_obj132=come_value_89->type,
        come_value_89->type=(struct sType*)come_increment_ref_count((come_push_stackframe("05call.c", 924, 78),__exception_result_var_b79=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 924, "struct sType*")),(char*)come_increment_ref_count(xsprintf("double")),0,info,0), come_pop_stackframe(), __exception_result_var_b79));
        come_call_finalizer(sType_finalize, __dec_obj132,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_value_89->var=((void*)0);
        add_come_last_code(info,"%s",come_value_89->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_89));
        __result_obj__148 = 1;
        come_call_finalizer(buffer_finalize, buf_88, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(CVALUE_finalize, come_value_89, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
        return __result_obj__148;
        come_call_finalizer(buffer_finalize, buf_88, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(CVALUE_finalize, come_value_89, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    string_operator_equals(fun_name,"__builtin_va_arg")    ) {
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        come_params_90=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 934, "struct list$1CVALUE$ph*"))));
        i_91=0;
        result_type_92=((void*)0);
        for(        o2_saved_93=params,it_94=list$1tuple2$2char$phsNode$ph$ph_begin(o2_saved_93)        ;        !list$1tuple2$2char$phsNode$ph$ph_end(o2_saved_93)        ;        it_94=list$1tuple2$2char$phsNode$ph$ph_next(o2_saved_93)        ){
            multiple_assign_var8=it_94;
            label_95=(char*)come_increment_ref_count(multiple_assign_var8->v1);
            node_96=(struct sNode*)come_increment_ref_count(multiple_assign_var8->v2);
            Value_97=node_compile(node_96,info);
            if(            !Value_97            ) {
                __result_obj__149 = 0;
                (label_95 = come_decrement_ref_count(label_95, (void*)0, (void*)0, 0, 0, (void*)0));
                ((node_96) ? node_96 = come_decrement_ref_count(node_96, ((struct sNode*)node_96)->finalize, ((struct sNode*)node_96)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_90, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, result_type_92, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
                return __result_obj__149;
            }
            else {
            }
            __right_value0 = (void*)0;
            come_value_98=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            __right_value0 = (void*)0;
            __dec_obj133=come_value_98->type,
            come_value_98->type=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(come_value_98->type),(struct sType*)come_increment_ref_count(info->generics_type),info));
            come_call_finalizer(sType_finalize, __dec_obj133,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            list$1CVALUE$ph_add(come_params_90,(struct CVALUE*)come_increment_ref_count(come_value_98));
            __dec_obj134=result_type_92,
            result_type_92=(struct sType*)come_increment_ref_count(come_value_98->type);
            come_call_finalizer(sType_finalize, __dec_obj134,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            (label_95 = come_decrement_ref_count(label_95, (void*)0, (void*)0, 0, 0, (void*)0));
            ((node_96) ? node_96 = come_decrement_ref_count(node_96, ((struct sNode*)node_96)->finalize, ((struct sNode*)node_96)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            come_call_finalizer(CVALUE_finalize, come_value_98, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        buf_99=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 954, "struct buffer*"))));
        buffer_append_str(buf_99,fun_name);
        buffer_append_str(buf_99,"(");
        j_100=0;
        for(        o2_saved_101=(struct list$1CVALUE$ph*)come_increment_ref_count(come_params_90),it_102=list$1CVALUE$ph_begin(o2_saved_101)        ;        !list$1CVALUE$ph_end(o2_saved_101)        ;        it_102=list$1CVALUE$ph_next(o2_saved_101)        ){
            buffer_append_str(buf_99,it_102->c_value);
            if(            j_100!=list$1CVALUE$ph_length(come_params_90)-1            ) {
                buffer_append_str(buf_99,",");
            }
            j_100++;
        }
        come_call_finalizer(list$1CVALUE$ph$p_finalize, o2_saved_101, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_99,")");
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        come_value_103=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 971, "struct CVALUE*"))));
        __right_value0 = (void*)0;
        __dec_obj135=come_value_103->c_value,
        come_value_103->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_99));
        __dec_obj135 = come_decrement_ref_count(__dec_obj135, (void*)0, (void*)0, 0,0, (void*)0);
        __dec_obj136=come_value_103->type,
        come_value_103->type=(struct sType*)come_increment_ref_count(result_type_92);
        come_call_finalizer(sType_finalize, __dec_obj136,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_value_103->var=((void*)0);
        add_come_last_code(info,"%s",come_value_103->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_103));
        __result_obj__150 = 1;
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_90, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, result_type_92, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(buffer_finalize, buf_99, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(CVALUE_finalize, come_value_103, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
        return __result_obj__150;
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_90, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, result_type_92, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(buffer_finalize, buf_99, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(CVALUE_finalize, come_value_103, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    string_operator_equals(fun_name,"__builtin_va_copy")    ) {
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        come_params_104=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 983, "struct list$1CVALUE$ph*"))));
        i_105=0;
        for(        o2_saved_106=params,it_107=list$1tuple2$2char$phsNode$ph$ph_begin(o2_saved_106)        ;        !list$1tuple2$2char$phsNode$ph$ph_end(o2_saved_106)        ;        it_107=list$1tuple2$2char$phsNode$ph$ph_next(o2_saved_106)        ){
            multiple_assign_var9=it_107;
            label_108=(char*)come_increment_ref_count(multiple_assign_var9->v1);
            node_109=(struct sNode*)come_increment_ref_count(multiple_assign_var9->v2);
            Value_110=node_compile(node_109,info);
            if(            !Value_110            ) {
                __result_obj__151 = 0;
                (label_108 = come_decrement_ref_count(label_108, (void*)0, (void*)0, 0, 0, (void*)0));
                ((node_109) ? node_109 = come_decrement_ref_count(node_109, ((struct sNode*)node_109)->finalize, ((struct sNode*)node_109)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_104, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
                return __result_obj__151;
            }
            else {
            }
            __right_value0 = (void*)0;
            come_value_111=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            __right_value0 = (void*)0;
            __dec_obj137=come_value_111->type,
            come_value_111->type=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(come_value_111->type),(struct sType*)come_increment_ref_count(info->generics_type),info));
            come_call_finalizer(sType_finalize, __dec_obj137,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            list$1CVALUE$ph_add(come_params_104,(struct CVALUE*)come_increment_ref_count(come_value_111));
            (label_108 = come_decrement_ref_count(label_108, (void*)0, (void*)0, 0, 0, (void*)0));
            ((node_109) ? node_109 = come_decrement_ref_count(node_109, ((struct sNode*)node_109)->finalize, ((struct sNode*)node_109)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            come_call_finalizer(CVALUE_finalize, come_value_111, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        buf_112=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 1000, "struct buffer*"))));
        buffer_append_str(buf_112,fun_name);
        buffer_append_str(buf_112,"(");
        j_113=0;
        for(        o2_saved_114=(struct list$1CVALUE$ph*)come_increment_ref_count(come_params_104),it_115=list$1CVALUE$ph_begin(o2_saved_114)        ;        !list$1CVALUE$ph_end(o2_saved_114)        ;        it_115=list$1CVALUE$ph_next(o2_saved_114)        ){
            buffer_append_str(buf_112,it_115->c_value);
            if(            j_113!=list$1CVALUE$ph_length(come_params_104)-1            ) {
                buffer_append_str(buf_112,",");
            }
            j_113++;
        }
        come_call_finalizer(list$1CVALUE$ph$p_finalize, o2_saved_114, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_112,")");
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        result_type_116=(struct sType*)come_increment_ref_count((come_push_stackframe("05call.c", 1017, 82),__exception_result_var_b83=(come_push_stackframe("05call.c", 1017, 80),__exception_result_var_b81=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 1017, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),0,info,0), come_pop_stackframe(), __exception_result_var_b81), come_pop_stackframe(), __exception_result_var_b83));
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        come_value_117=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 1019, "struct CVALUE*"))));
        __right_value0 = (void*)0;
        __dec_obj138=come_value_117->c_value,
        come_value_117->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_112));
        __dec_obj138 = come_decrement_ref_count(__dec_obj138, (void*)0, (void*)0, 0,0, (void*)0);
        __dec_obj139=come_value_117->type,
        come_value_117->type=(struct sType*)come_increment_ref_count(result_type_116);
        come_call_finalizer(sType_finalize, __dec_obj139,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_value_117->var=((void*)0);
        add_come_last_code(info,"%s",come_value_117->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_117));
        __result_obj__152 = 1;
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_104, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(buffer_finalize, buf_112, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, result_type_116, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(CVALUE_finalize, come_value_117, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
        return __result_obj__152;
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_104, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(buffer_finalize, buf_112, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, result_type_116, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(CVALUE_finalize, come_value_117, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    string_operator_equals(fun_name,"string")    ) {
        __right_value0 = (void*)0;
        __dec_obj140=fun_name,
        fun_name=(char*)come_increment_ref_count(__builtin_string("__builtin_string"));
        __dec_obj140 = come_decrement_ref_count(__dec_obj140, (void*)0, (void*)0, 0,0, (void*)0);
    }
    else if(    string_operator_equals(fun_name,"wstring")    ) {
        __right_value0 = (void*)0;
        __dec_obj141=fun_name,
        fun_name=(char*)come_increment_ref_count(__builtin_string("__builtin_wstring"));
        __dec_obj141 = come_decrement_ref_count(__dec_obj141, (void*)0, (void*)0, 0,0, (void*)0);
    }
    else if(    string_operator_equals(fun_name,"inherit")    ) {
        p=info->come_fun->mName;
        version=0;
        while(        *p        ) {
            if(            *p==95&&*(p+1)==118&&((*__ctype_b_loc())[(int)((*(p+2)))]&(unsigned short int)(((((3)<8)?(((1<<(3))<<8)):(((1<<(3))>>8))))))            ) {
                p2=p+2;
                version=0;
                while(                ((*__ctype_b_loc())[(int)((*p2))]&(unsigned short int)(((((3)<8)?(((1<<(3))<<8)):(((1<<(3))>>8))))))                ) {
                    version=version*10+(*p2-48);
                    p2++;
                }
                break;
            }
            else {
                p++;
            }
        }
        char real_fun_name[2048];
        memset(&real_fun_name, 0, sizeof(real_fun_name));
        memcpy(real_fun_name,info->come_fun->mName,p-info->come_fun->mName);
        real_fun_name[p-info->come_fun->mName]=0;
        for(        i_118=version-1        ;        i_118>=1        ;        i_118--        ){
            __right_value0 = (void*)0;
            new_fun_name=(char*)come_increment_ref_count(xsprintf("%s_v%d",real_fun_name,i_118));
            if(            __right_value0 = (void*)0,             ({(_conditional_value_X0=(((struct sFun*)(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,new_fun_name)))));            come_call_finalizer(sFun_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            _conditional_value_X0;})            ) {
                __right_value0 = (void*)0;
                __dec_obj142=fun_name,
                fun_name=(char*)come_increment_ref_count(__builtin_string(new_fun_name));
                __dec_obj142 = come_decrement_ref_count(__dec_obj142, (void*)0, (void*)0, 0,0, (void*)0);
                (new_fun_name = come_decrement_ref_count(new_fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
                break;
            }
            (new_fun_name = come_decrement_ref_count(new_fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        if(        i_118==0        ) {
            __right_value0 = (void*)0;
            new_fun_name_119=(char*)come_increment_ref_count(xsprintf("%s",real_fun_name));
            if(            __right_value0 = (void*)0,             ({(_conditional_value_X1=(((struct sFun*)(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,new_fun_name_119)))));            come_call_finalizer(sFun_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            _conditional_value_X1;})            ) {
                __right_value0 = (void*)0;
                __dec_obj143=fun_name,
                fun_name=(char*)come_increment_ref_count(__builtin_string(new_fun_name_119));
                __dec_obj143 = come_decrement_ref_count(__dec_obj143, (void*)0, (void*)0, 0,0, (void*)0);
            }
            if(            string_operator_equals(fun_name,info->come_fun->mName)            ) {
                err_msg(info,"invalid inherit");
                __result_obj__163 = 1;
                (new_fun_name_119 = come_decrement_ref_count(new_fun_name_119, (void*)0, (void*)0, 0, 0, (void*)0));
                (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
                return __result_obj__163;
            }
            (new_fun_name_119 = come_decrement_ref_count(new_fun_name_119, (void*)0, (void*)0, 0, 0, (void*)0));
        }
    }
    else {
        for(        i_120=128        ;        i_120>=1        ;        i_120--        ){
            __right_value0 = (void*)0;
            new_fun_name_121=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name,i_120));
            if(            __right_value0 = (void*)0,             ({(_conditional_value_X2=(((struct sFun*)(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,new_fun_name_121)))));            come_call_finalizer(sFun_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            _conditional_value_X2;})            ) {
                __right_value0 = (void*)0;
                __dec_obj144=fun_name,
                fun_name=(char*)come_increment_ref_count(__builtin_string(new_fun_name_121));
                __dec_obj144 = come_decrement_ref_count(__dec_obj144, (void*)0, (void*)0, 0,0, (void*)0);
                (new_fun_name_121 = come_decrement_ref_count(new_fun_name_121, (void*)0, (void*)0, 0, 0, (void*)0));
                break;
            }
            (new_fun_name_121 = come_decrement_ref_count(new_fun_name_121, (void*)0, (void*)0, 0, 0, (void*)0));
        }
    }
    __right_value0 = (void*)0;
    fun_122=((struct sFun*)(__right_value0=map$2char$phsFun$ph_at(info->funcs,fun_name,((void*)0))));
    come_call_finalizer(sFun_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    if(    fun_122==((void*)0)    ) {
        printf("function not found(%s) at function call(1), so no check types and no heap management\n",fun_name);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        come_params_123=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 1100, "struct list$1CVALUE$ph*"))));
        i_124=0;
        result_type_125=((void*)0);
        for(        o2_saved_126=params,it_127=list$1tuple2$2char$phsNode$ph$ph_begin(o2_saved_126)        ;        !list$1tuple2$2char$phsNode$ph$ph_end(o2_saved_126)        ;        it_127=list$1tuple2$2char$phsNode$ph$ph_next(o2_saved_126)        ){
            multiple_assign_var10=it_127;
            label_128=(char*)come_increment_ref_count(multiple_assign_var10->v1);
            node_129=(struct sNode*)come_increment_ref_count(multiple_assign_var10->v2);
            Value_130=node_compile(node_129,info);
            if(            !Value_130            ) {
                __result_obj__164 = 0;
                (label_128 = come_decrement_ref_count(label_128, (void*)0, (void*)0, 0, 0, (void*)0));
                ((node_129) ? node_129 = come_decrement_ref_count(node_129, ((struct sNode*)node_129)->finalize, ((struct sNode*)node_129)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_123, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, result_type_125, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
                return __result_obj__164;
            }
            else {
            }
            __right_value0 = (void*)0;
            come_value_131=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            __right_value0 = (void*)0;
            __dec_obj145=come_value_131->type,
            come_value_131->type=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(come_value_131->type),(struct sType*)come_increment_ref_count(info->generics_type),info));
            come_call_finalizer(sType_finalize, __dec_obj145,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            list$1CVALUE$ph_add(come_params_123,(struct CVALUE*)come_increment_ref_count(come_value_131));
            __dec_obj146=result_type_125,
            result_type_125=(struct sType*)come_increment_ref_count(come_value_131->type);
            come_call_finalizer(sType_finalize, __dec_obj146,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            (label_128 = come_decrement_ref_count(label_128, (void*)0, (void*)0, 0, 0, (void*)0));
            ((node_129) ? node_129 = come_decrement_ref_count(node_129, ((struct sNode*)node_129)->finalize, ((struct sNode*)node_129)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            come_call_finalizer(CVALUE_finalize, come_value_131, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        buf_132=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 1120, "struct buffer*"))));
        buffer_append_str(buf_132,fun_name);
        buffer_append_str(buf_132,"(");
        j_133=0;
        for(        o2_saved_134=(struct list$1CVALUE$ph*)come_increment_ref_count(come_params_123),it_135=list$1CVALUE$ph_begin(o2_saved_134)        ;        !list$1CVALUE$ph_end(o2_saved_134)        ;        it_135=list$1CVALUE$ph_next(o2_saved_134)        ){
            buffer_append_str(buf_132,it_135->c_value);
            if(            j_133!=list$1CVALUE$ph_length(come_params_123)-1            ) {
                buffer_append_str(buf_132,",");
            }
            j_133++;
        }
        come_call_finalizer(list$1CVALUE$ph$p_finalize, o2_saved_134, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_132,")");
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        come_value_136=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 1137, "struct CVALUE*"))));
        __right_value0 = (void*)0;
        __dec_obj147=come_value_136->c_value,
        come_value_136->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_132));
        __dec_obj147 = come_decrement_ref_count(__dec_obj147, (void*)0, (void*)0, 0,0, (void*)0);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        __dec_obj148=come_value_136->type,
        come_value_136->type=(struct sType*)come_increment_ref_count((come_push_stackframe("05call.c", 1139, 83),__exception_result_var_b84=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 1139, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),0,info,0), come_pop_stackframe(), __exception_result_var_b84));
        come_call_finalizer(sType_finalize, __dec_obj148,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_value_136->var=((void*)0);
        add_come_last_code(info,"%s",come_value_136->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_136));
        __result_obj__165 = 1;
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_123, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, result_type_125, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(buffer_finalize, buf_132, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(CVALUE_finalize, come_value_136, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
        return __result_obj__165;
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_123, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, result_type_125, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(buffer_finalize, buf_132, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(CVALUE_finalize, come_value_136, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __right_value0 = (void*)0;
    result_type_137=(struct sType*)come_increment_ref_count(sType_clone(fun_122->mResultType));
    result_type_137->mStatic=0;
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    param_types=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05call.c", 1157, "struct list$1sType$ph*"))));
    for(    o2_saved_138=(struct list$1sType$ph*)come_increment_ref_count(fun_122->mParamTypes),it_139=list$1sType$ph_begin(o2_saved_138)    ;    !list$1sType$ph_end(o2_saved_138)    ;    it_139=list$1sType$ph_next(o2_saved_138)    ){
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        it2=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(sType_clone(it_139)),(struct sType*)come_increment_ref_count(info->generics_type),info));
        __right_value0 = (void*)0;
        list$1sType$ph_push_back(param_types,(struct sType*)come_increment_ref_count(sType_clone(it2)));
        come_call_finalizer(sType_finalize, it2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer(list$1sType$ph$p_finalize, o2_saved_138, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    __right_value0 = (void*)0;
    __dec_obj149=result_type_137,
    result_type_137=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(result_type_137),(struct sType*)come_increment_ref_count(info->generics_type),info));
    come_call_finalizer(sType_finalize, __dec_obj149,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    come_params_140=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 1165, "struct list$1CVALUE$ph*"))));
    for(    i_141=0    ;    i_141<list$1sType$ph_length(fun_122->mParamTypes)-(((method_block)?(2):(0)))    ;    i_141++    ){
        list$1CVALUE$ph_add(come_params_140,((void*)0));
    }
    for(    o2_saved_142=params,it_143=list$1tuple2$2char$phsNode$ph$ph_begin(o2_saved_142)    ;    !list$1tuple2$2char$phsNode$ph$ph_end(o2_saved_142)    ;    it_143=list$1tuple2$2char$phsNode$ph$ph_next(o2_saved_142)    ){
        multiple_assign_var11=it_143;
        label_144=(char*)come_increment_ref_count(multiple_assign_var11->v1);
        node_145=(struct sNode*)come_increment_ref_count(multiple_assign_var11->v2);
        if(        fun_122->mVarArgs||string_operator_equals(fun_name,"__builtin_va_start")        ) {
        }
        else if(        label_144        ) {
            Value_146=node_compile(node_145,info);
            if(            !Value_146            ) {
                __result_obj__166 = 0;
                (label_144 = come_decrement_ref_count(label_144, (void*)0, (void*)0, 0, 0, (void*)0));
                ((node_145) ? node_145 = come_decrement_ref_count(node_145, ((struct sNode*)node_145)->finalize, ((struct sNode*)node_145)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(sType_finalize, result_type_137, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_140, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result_obj__166;
            }
            else {
            }
            __right_value0 = (void*)0;
            come_value_147=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            __right_value0 = (void*)0;
            __dec_obj150=come_value_147->type,
            come_value_147->type=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(come_value_147->type),(struct sType*)come_increment_ref_count(info->generics_type),info));
            come_call_finalizer(sType_finalize, __dec_obj150,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            n_148=0;
            for(            o2_saved_149=(struct list$1char$ph*)come_increment_ref_count(fun_122->mParamNames),it_151=list$1char$ph_begin(o2_saved_149)            ;            !list$1char$ph_end(o2_saved_149)            ;            it_151=list$1char$ph_next(o2_saved_149)            ){
                if(                string_operator_equals(label_144,it_151)                ) {
                    break;
                }
                n_148++;
            }
            come_call_finalizer(list$1char$ph$p_finalize, o2_saved_149, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(            __right_value0 = (void*)0,             ({(_conditional_value_X0=(((struct sType*)(__right_value0=list$1sType$ph_operator_load_element(param_types,n_148)))));            come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            _conditional_value_X0;})            ) {
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                __right_value2 = (void*)0;
                __right_value3 = (void*)0;
                check_assign_type(((char*)(__right_value2=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value0=string_to_string(fun_name))),((char*)(__right_value1=int_to_string(n_148)))))),((struct sType*)(__right_value3=list$1sType$ph_operator_load_element(param_types,n_148))),come_value_147->type,come_value_147,0,1,1,info);
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
                (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0));
                come_call_finalizer(sType_finalize, __right_value3, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            }
            if(            __right_value0 = (void*)0,             __right_value1 = (void*)0,             ({(_conditional_value_X1=(((struct sType*)(__right_value0=list$1sType$ph_operator_load_element(param_types,n_148)))&&((struct sType*)(__right_value1=list$1sType$ph_operator_load_element(param_types,n_148)))->mHeap&&come_value_147->type->mHeap));            come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer(sType_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            _conditional_value_X1;})            ) {
                __right_value0 = (void*)0;
                std_move(((struct sType*)(__right_value0=list$1sType$ph_operator_load_element(param_types,n_148))),come_value_147->type,come_value_147,info);
                come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            }
            list$1CVALUE$ph_replace(come_params_140,n_148,(struct CVALUE*)come_increment_ref_count(come_value_147));
            come_call_finalizer(CVALUE_finalize, come_value_147, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        (label_144 = come_decrement_ref_count(label_144, (void*)0, (void*)0, 0, 0, (void*)0));
        ((node_145) ? node_145 = come_decrement_ref_count(node_145, ((struct sNode*)node_145)->finalize, ((struct sNode*)node_145)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    i_154=0;
    for(    o2_saved_155=params,it_156=list$1tuple2$2char$phsNode$ph$ph_begin(o2_saved_155)    ;    !list$1tuple2$2char$phsNode$ph$ph_end(o2_saved_155)    ;    it_156=list$1tuple2$2char$phsNode$ph$ph_next(o2_saved_155)    ){
        multiple_assign_var12=it_156;
        label_157=(char*)come_increment_ref_count(multiple_assign_var12->v1);
        node_158=(struct sNode*)come_increment_ref_count(multiple_assign_var12->v2);
        if(        fun_122->mVarArgs||string_operator_equals(fun_name,"__builtin_va_start")        ) {
            Value_159=node_compile(node_158,info);
            if(            !Value_159            ) {
                __result_obj__176 = 0;
                (label_157 = come_decrement_ref_count(label_157, (void*)0, (void*)0, 0, 0, (void*)0));
                ((node_158) ? node_158 = come_decrement_ref_count(node_158, ((struct sNode*)node_158)->finalize, ((struct sNode*)node_158)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(sType_finalize, result_type_137, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_140, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result_obj__176;
            }
            else {
            }
            __right_value0 = (void*)0;
            come_value_160=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            __right_value0 = (void*)0;
            __dec_obj152=come_value_160->type,
            come_value_160->type=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(come_value_160->type),(struct sType*)come_increment_ref_count(info->generics_type),info));
            come_call_finalizer(sType_finalize, __dec_obj152,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            while(            1            ) {
                if(                __right_value0 = (void*)0,                 ({(_conditional_value_X0=(((struct CVALUE*)(__right_value0=list$1CVALUE$ph_operator_load_element(come_params_140,i_154)))==((void*)0)));                come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                _conditional_value_X0;})                ) {
                    break;
                }
                else {
                    i_154++;
                }
            }
            list$1CVALUE$ph_replace(come_params_140,i_154,(struct CVALUE*)come_increment_ref_count(come_value_160));
            i_154++;
            come_call_finalizer(CVALUE_finalize, come_value_160, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        label_157        ) {
        }
        else {
            Value_161=node_compile(node_158,info);
            if(            !Value_161            ) {
                __result_obj__177 = 0;
                (label_157 = come_decrement_ref_count(label_157, (void*)0, (void*)0, 0, 0, (void*)0));
                ((node_158) ? node_158 = come_decrement_ref_count(node_158, ((struct sNode*)node_158)->finalize, ((struct sNode*)node_158)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(sType_finalize, result_type_137, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_140, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result_obj__177;
            }
            else {
            }
            __right_value0 = (void*)0;
            come_value_162=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            __right_value0 = (void*)0;
            __dec_obj153=come_value_162->type,
            come_value_162->type=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(come_value_162->type),(struct sType*)come_increment_ref_count(info->generics_type),info));
            come_call_finalizer(sType_finalize, __dec_obj153,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            while(            1            ) {
                if(                __right_value0 = (void*)0,                 ({(_conditional_value_X1=(((struct CVALUE*)(__right_value0=list$1CVALUE$ph_operator_load_element(come_params_140,i_154)))==((void*)0)));                come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                _conditional_value_X1;})                ) {
                    break;
                }
                else {
                    i_154++;
                }
            }
            if(            __right_value0 = (void*)0,             ({(_conditional_value_X2=(((struct sType*)(__right_value0=list$1sType$ph_operator_load_element(param_types,i_154)))));            come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            _conditional_value_X2;})            ) {
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                __right_value2 = (void*)0;
                __right_value3 = (void*)0;
                check_assign_type(((char*)(__right_value2=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value0=string_to_string(fun_name))),((char*)(__right_value1=int_to_string(i_154)))))),((struct sType*)(__right_value3=list$1sType$ph_operator_load_element(param_types,i_154))),come_value_162->type,come_value_162,0,1,1,info);
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
                (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0));
                come_call_finalizer(sType_finalize, __right_value3, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            }
            if(            __right_value0 = (void*)0,             __right_value1 = (void*)0,             ({(_conditional_value_X3=(((struct sType*)(__right_value0=list$1sType$ph_operator_load_element(param_types,i_154)))&&((struct sType*)(__right_value1=list$1sType$ph_operator_load_element(param_types,i_154)))->mHeap&&come_value_162->type->mHeap));            come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer(sType_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            _conditional_value_X3;})            ) {
                __right_value0 = (void*)0;
                std_move(((struct sType*)(__right_value0=list$1sType$ph_operator_load_element(param_types,i_154))),come_value_162->type,come_value_162,info);
                come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            }
            list$1CVALUE$ph_replace(come_params_140,i_154,(struct CVALUE*)come_increment_ref_count(come_value_162));
            i_154++;
            come_call_finalizer(CVALUE_finalize, come_value_162, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        (label_157 = come_decrement_ref_count(label_157, (void*)0, (void*)0, 0, 0, (void*)0));
        ((node_158) ? node_158 = come_decrement_ref_count(node_158, ((struct sNode*)node_158)->finalize, ((struct sNode*)node_158)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    while(    1    ) {
        if(        __right_value0 = (void*)0,         ({(_conditional_value_X0=(((struct CVALUE*)(__right_value0=list$1CVALUE$ph_operator_load_element(come_params_140,i_154)))==((void*)0)));        come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        _conditional_value_X0;})        ) {
            break;
        }
        else {
            i_154++;
        }
    }
    if(    list$1tuple2$2char$phsNode$ph$ph_length(params)<list$1sType$ph_length(fun_122->mParamTypes)    ) {
        for(        ;        i_154<list$1sType$ph_length(fun_122->mParamTypes)-(((method_block)?(2):(0)))        ;        i_154++        ){
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            default_param=(char*)come_increment_ref_count((char*)come_memdup(((char*)(__right_value0=list$1char$ph_operator_load_element(fun_122->mParamDefaultParametors,i_154))), "05call.c", 1274, "char*"));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            __right_value0 = (void*)0;
            param_name=((char*)(__right_value0=list$1char$ph_operator_load_element(fun_122->mParamNames,i_154)));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            if(            __right_value0 = (void*)0,             ({(_conditional_value_X0=(default_param&&string_operator_not_equals(default_param,"")&&((struct CVALUE*)(__right_value0=list$1CVALUE$ph_operator_load_element(come_params_140,i_154)))==((void*)0)));            come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            _conditional_value_X0;})            ) {
                source=(struct buffer*)come_increment_ref_count(info->source);
                p_165=info->p;
                head=info->head;
                sline=info->sline;
                __right_value0 = (void*)0;
                __dec_obj154=info->source,
                info->source=(struct buffer*)come_increment_ref_count(charp_to_buffer(default_param));
                come_call_finalizer(buffer_finalize, __dec_obj154,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                info->p=info->source->buf;
                info->head=info->source->buf;
                no_output_come_code_166=info->no_output_come_code;
                info->no_output_come_code=1;
                __right_value0 = (void*)0;
                node_167=(struct sNode*)come_increment_ref_count(expression_v13(info,0));
                Value_168=node_compile(node_167,info);
                if(                !Value_168                ) {
                    __result_obj__184 = 0;
                    come_call_finalizer(buffer_finalize, source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    ((node_167) ? node_167 = come_decrement_ref_count(node_167, ((struct sNode*)node_167)->finalize, ((struct sNode*)node_167)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                    (default_param = come_decrement_ref_count(default_param, (void*)0, (void*)0, 0, 0, (void*)0));
                    (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
                    come_call_finalizer(sType_finalize, result_type_137, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_140, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    return __result_obj__184;
                }
                else {
                }
                info->no_output_come_code=no_output_come_code_166;
                __dec_obj155=info->source,
                info->source=(struct buffer*)come_increment_ref_count(source);
                come_call_finalizer(buffer_finalize, __dec_obj155,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                info->p=p_165;
                info->head=head;
                info->sline=sline;
                __right_value0 = (void*)0;
                come_value_169=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                __right_value0 = (void*)0;
                __dec_obj156=come_value_169->type,
                come_value_169->type=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(come_value_169->type),(struct sType*)come_increment_ref_count(info->generics_type),info));
                come_call_finalizer(sType_finalize, __dec_obj156,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(                __right_value0 = (void*)0,                 ({(_conditional_value_X1=(((struct sType*)(__right_value0=list$1sType$ph_operator_load_element(param_types,i_154)))));                come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                _conditional_value_X1;})                ) {
                    __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    __right_value2 = (void*)0;
                    __right_value3 = (void*)0;
                    check_assign_type(((char*)(__right_value2=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value0=string_to_string(fun_name))),((char*)(__right_value1=int_to_string(i_154)))))),((struct sType*)(__right_value3=list$1sType$ph_operator_load_element(param_types,i_154))),come_value_169->type,come_value_169,0,1,1,info);
                    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
                    (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0));
                    come_call_finalizer(sType_finalize, __right_value3, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                }
                if(                __right_value0 = (void*)0,                 __right_value1 = (void*)0,                 ({(_conditional_value_X2=(((struct sType*)(__right_value0=list$1sType$ph_operator_load_element(param_types,i_154)))&&((struct sType*)(__right_value1=list$1sType$ph_operator_load_element(param_types,i_154)))->mHeap&&come_value_169->type->mHeap));                come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                come_call_finalizer(sType_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                _conditional_value_X2;})                ) {
                    __right_value0 = (void*)0;
                    std_move(((struct sType*)(__right_value0=list$1sType$ph_operator_load_element(param_types,i_154))),come_value_169->type,come_value_169,info);
                    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                }
                list$1CVALUE$ph_replace(come_params_140,i_154,(struct CVALUE*)come_increment_ref_count(come_value_169));
                come_call_finalizer(buffer_finalize, source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                ((node_167) ? node_167 = come_decrement_ref_count(node_167, ((struct sNode*)node_167)->finalize, ((struct sNode*)node_167)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                come_call_finalizer(CVALUE_finalize, come_value_169, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                if(                __right_value0 = (void*)0,                 ({(_conditional_value_X3=(((struct CVALUE*)(__right_value0=list$1CVALUE$ph_operator_load_element(come_params_140,i_154)))==((void*)0)));                come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                _conditional_value_X3;})                ) {
                    err_msg(info,"require parametor(%s)(1) %d",fun_122->mName,i_154);
                    __result_obj__185 = 1;
                    (default_param = come_decrement_ref_count(default_param, (void*)0, (void*)0, 0, 0, (void*)0));
                    (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
                    come_call_finalizer(sType_finalize, result_type_137, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_140, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    return __result_obj__185;
                }
            }
            (default_param = come_decrement_ref_count(default_param, (void*)0, (void*)0, 0, 0, (void*)0));
        }
    }
    if(    list$1sType$ph_length(fun_122->mParamTypes)-(((method_block)?(2):(0)))!=list$1CVALUE$ph_length(come_params_140)&&!fun_122->mVarArgs&&string_operator_not_equals(fun_name,"__builtin_va_start")&&string_operator_not_equals(fun_name,"__builtin_va_end")    ) {
        err_msg(info,"invalid param number(%s). function param number is %d. caller param number is %d",fun_name,list$1sType$ph_length(fun_122->mParamTypes),list$1tuple2$2char$phsNode$ph$ph_length(params));
        __result_obj__186 = 1;
        (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sType_finalize, result_type_137, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_140, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result_obj__186;
    }
    if(    method_block    ) {
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        _inf_value2=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 1331, "struct sNode");
        _inf_obj_value2=(struct sCurrentNode*)come_increment_ref_count(((struct sCurrentNode*)(__right_value1=sCurrentNode_initialize((struct sCurrentNode*)come_increment_ref_count((struct sCurrentNode*)come_calloc_v2(1, sizeof(struct sCurrentNode)*(1), "05call.c", 1331, "struct sCurrentNode*")),info))));
        _inf_value2->_protocol_obj=_inf_obj_value2;
        _inf_value2->finalize=(void*)sCurrentNode_finalize;
        _inf_value2->clone=(void*)sCurrentNode_clone;
        _inf_value2->compile=(void*)sCurrentNode_compile;
        _inf_value2->sline=(void*)sCurrentNode_sline;
        _inf_value2->sline_real=(void*)sNodeBase_sline_real;
        _inf_value2->sname=(void*)sCurrentNode_sname;
        _inf_value2->terminated=(void*)sNodeBase_terminated;
        _inf_value2->kind=(void*)sCurrentNode_kind;
        _inf_value2->no_mutex=(void*)sNodeBase_no_mutex;
        __right_value2 = (void*)0;
        current_stack_frame_node=(struct sNode*)come_increment_ref_count(_inf_value2);
        come_call_finalizer(sCurrentNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        Value_170=node_compile(current_stack_frame_node,info);
        if(        !Value_170        ) {
            __result_obj__189 = 0;
            ((current_stack_frame_node) ? current_stack_frame_node = come_decrement_ref_count(current_stack_frame_node, ((struct sNode*)current_stack_frame_node)->finalize, ((struct sNode*)current_stack_frame_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sType_finalize, result_type_137, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_140, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result_obj__189;
        }
        else {
        }
        __right_value0 = (void*)0;
        come_value_171=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        __right_value0 = (void*)0;
        __dec_obj158=come_value_171->type,
        come_value_171->type=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(come_value_171->type),(struct sType*)come_increment_ref_count(info->generics_type),info));
        come_call_finalizer(sType_finalize, __dec_obj158,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        list$1CVALUE$ph_push_back(come_params_140,(struct CVALUE*)come_increment_ref_count(come_value_171));
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        method_block2=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 1341, "struct buffer*"))));
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        method_block_type=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)(__right_value0=list$1sType$ph_operator_load_element(fun_122->mParamTypes,-1)))));
        come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        __right_value0 = (void*)0;
        class_name=(char*)come_increment_ref_count(xsprintf("__current_stack%d__",info->current_stack_num));
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        ((struct sType*)(__right_value0=list$1sType$ph_operator_load_element(method_block_type->mParamTypes,0)))->mClass=((struct sClass*)(__right_value1=map$2char$phsClass$ph_operator_load_element(info->classes,class_name)));
        come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer(sClass_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        current_stack_frame_struct=info->current_stack_frame_struct;
        __right_value0 = (void*)0;
        info->current_stack_frame_struct=((struct sClass*)(__right_value0=map$2char$phsClass$ph_operator_load_element(info->classes,class_name)));
        come_call_finalizer(sClass_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        info->num_method_block++;
        num_method_block=info->num_method_block;
        if(        string_operator_not_equals(method_block_type->mClass->mName,"lambda")        ) {
            err_msg(info,"This function does not have method block(%s)",fun_name);
            __result_obj__200 = 1;
            ((current_stack_frame_node) ? current_stack_frame_node = come_decrement_ref_count(current_stack_frame_node, ((struct sNode*)current_stack_frame_node)->finalize, ((struct sNode*)current_stack_frame_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            come_call_finalizer(CVALUE_finalize, come_value_171, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(buffer_finalize, method_block2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, method_block_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (class_name = come_decrement_ref_count(class_name, (void*)0, (void*)0, 0, 0, (void*)0));
            (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sType_finalize, result_type_137, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_140, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result_obj__200;
        }
        __right_value0 = (void*)0;
        result_type_172=(struct sType*)come_increment_ref_count(sType_clone(method_block_type->mResultType));
        result_type_172->mStatic=0;
        __right_value0 = (void*)0;
        result_type2=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(result_type_172),(struct sType*)come_increment_ref_count(info->generics_type),info));
        __right_value0 = (void*)0;
        param_types_173=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(method_block_type->mParamTypes));
        param_names=method_block_type->mParamNames;
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        all_alhabet_sname=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 1365, "struct buffer*"))));
        {
            p_174=info->sname;
            while(            *p_174            ) {
                if(                xisalnum(*p_174)                ) {
                    buffer_append_char(all_alhabet_sname,*p_174++);
                }
                else {
                    p_174++;
                }
            }
        }
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        buffer_append_format(method_block2,"%s fun_block%d_%s(",((char*)(__right_value0=make_come_type_name_string(result_type2,info))),num_method_block,((char*)(__right_value1=buffer_to_string(all_alhabet_sname))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        i_154=0;
        for(        o2_saved_175=(struct list$1sType$ph*)come_increment_ref_count(param_types_173),it_176=list$1sType$ph_begin(o2_saved_175)        ;        !list$1sType$ph_end(o2_saved_175)        ;        it_176=list$1sType$ph_next(o2_saved_175)        ){
            param_type=(struct sType*)come_increment_ref_count(it_176);
            if(            i_154==0            ) {
                __right_value0 = (void*)0;
                param_name_177=(char*)come_increment_ref_count(xsprintf("parent"));
                __right_value0 = (void*)0;
                buffer_append_format(method_block2,"%s",((char*)(__right_value0=make_come_define_var(param_type,param_name_177,info))));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                (param_name_177 = come_decrement_ref_count(param_name_177, (void*)0, (void*)0, 0, 0, (void*)0));
            }
            else if(            i_154==1            ) {
                __right_value0 = (void*)0;
                param_name_178=(char*)come_increment_ref_count(xsprintf("it"));
                __right_value0 = (void*)0;
                param_type2=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(param_type),(struct sType*)come_increment_ref_count(info->generics_type),info));
                __right_value0 = (void*)0;
                buffer_append_format(method_block2,"%s",((char*)(__right_value0=make_come_define_var(param_type2,param_name_178,info))));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                (param_name_178 = come_decrement_ref_count(param_name_178, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(sType_finalize, param_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                __right_value0 = (void*)0;
                param_name_179=(char*)come_increment_ref_count(xsprintf("it%d",i_154));
                __right_value0 = (void*)0;
                param_type2_180=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(param_type),(struct sType*)come_increment_ref_count(info->generics_type),info));
                __right_value0 = (void*)0;
                buffer_append_format(method_block2,"%s",((char*)(__right_value0=make_come_define_var(param_type2_180,param_name_179,info))));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                (param_name_179 = come_decrement_ref_count(param_name_179, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(sType_finalize, param_type2_180, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(            i_154!=list$1sType$ph_length(param_types_173)-1            ) {
                buffer_append_str(method_block2,",");
            }
            i_154++;
            come_call_finalizer(sType_finalize, param_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer(list$1sType$ph$p_finalize, o2_saved_175, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        buffer_append_str(method_block2,")\n");
        __right_value0 = (void*)0;
        buffer_append_str(method_block2,((char*)(__right_value0=buffer_to_string(method_block))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        source3=(struct buffer*)come_increment_ref_count(info->source);
        p_181=info->p;
        head_182=info->head;
        sline_183=info->sline;
        __dec_obj159=info->source,
        info->source=(struct buffer*)come_increment_ref_count(method_block2);
        come_call_finalizer(buffer_finalize, __dec_obj159,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        info->sline=method_block_sline;
        __right_value0 = (void*)0;
        node_184=(struct sNode*)come_increment_ref_count(parse_function(info));
        Value_185=node_compile(node_184,info);
        if(        !Value_185        ) {
            __result_obj__201 = 0;
            ((current_stack_frame_node) ? current_stack_frame_node = come_decrement_ref_count(current_stack_frame_node, ((struct sNode*)current_stack_frame_node)->finalize, ((struct sNode*)current_stack_frame_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            come_call_finalizer(CVALUE_finalize, come_value_171, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(buffer_finalize, method_block2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, method_block_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (class_name = come_decrement_ref_count(class_name, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sType_finalize, result_type_172, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, result_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(list$1sType$ph$p_finalize, param_types_173, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(buffer_finalize, all_alhabet_sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(buffer_finalize, source3, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            ((node_184) ? node_184 = come_decrement_ref_count(node_184, ((struct sNode*)node_184)->finalize, ((struct sNode*)node_184)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sType_finalize, result_type_137, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_140, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result_obj__201;
        }
        else {
        }
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        method_block_name=(char*)come_increment_ref_count(xsprintf("fun_block%d_%s",num_method_block,((char*)(__right_value0=buffer_to_string(all_alhabet_sname)))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        come_value2=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 1432, "struct CVALUE*"))));
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        fun2=((struct sFun*)(__right_value1=map$2char$phsFun$ph_at(info->funcs,((char*)(__right_value0=__builtin_string(method_block_name))),((void*)0))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        come_call_finalizer(sFun_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        if(        fun2==((void*)0)        ) {
            err_msg(info,"method block function not found(%s)",method_block_name);
            __result_obj__202 = 1;
            ((current_stack_frame_node) ? current_stack_frame_node = come_decrement_ref_count(current_stack_frame_node, ((struct sNode*)current_stack_frame_node)->finalize, ((struct sNode*)current_stack_frame_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            come_call_finalizer(CVALUE_finalize, come_value_171, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(buffer_finalize, method_block2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, method_block_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (class_name = come_decrement_ref_count(class_name, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sType_finalize, result_type_172, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, result_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(list$1sType$ph$p_finalize, param_types_173, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(buffer_finalize, all_alhabet_sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(buffer_finalize, source3, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            ((node_184) ? node_184 = come_decrement_ref_count(node_184, ((struct sNode*)node_184)->finalize, ((struct sNode*)node_184)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            (method_block_name = come_decrement_ref_count(method_block_name, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(CVALUE_finalize, come_value2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sType_finalize, result_type_137, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_140, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result_obj__202;
        }
        method_block_type2=fun2->mLambdaType;
        __right_value0 = (void*)0;
        __dec_obj160=come_value2->c_value,
        come_value2->c_value=(char*)come_increment_ref_count(xsprintf("(void*)%s",method_block_name));
        __dec_obj160 = come_decrement_ref_count(__dec_obj160, (void*)0, (void*)0, 0,0, (void*)0);
        __right_value0 = (void*)0;
        __dec_obj161=come_value2->type,
        come_value2->type=(struct sType*)come_increment_ref_count(sType_clone(method_block_type2));
        come_call_finalizer(sType_finalize, __dec_obj161,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_value2->var=((void*)0);
        list$1CVALUE$ph_push_back(come_params_140,(struct CVALUE*)come_increment_ref_count(come_value2));
        __dec_obj162=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source3);
        come_call_finalizer(buffer_finalize, __dec_obj162,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        info->p=p_181;
        info->head=head_182;
        info->sline=sline_183;
        info->current_stack_frame_struct=current_stack_frame_struct;
        ((current_stack_frame_node) ? current_stack_frame_node = come_decrement_ref_count(current_stack_frame_node, ((struct sNode*)current_stack_frame_node)->finalize, ((struct sNode*)current_stack_frame_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, come_value_171, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(buffer_finalize, method_block2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, method_block_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (class_name = come_decrement_ref_count(class_name, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sType_finalize, result_type_172, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, result_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types_173, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(buffer_finalize, all_alhabet_sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(buffer_finalize, source3, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((node_184) ? node_184 = come_decrement_ref_count(node_184, ((struct sNode*)node_184)->finalize, ((struct sNode*)node_184)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        (method_block_name = come_decrement_ref_count(method_block_name, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(CVALUE_finalize, come_value2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    buf_186=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 1457, "struct buffer*"))));
    if(    string_operator_equals(fun_name,"__isoc23_strtoll")    ) {
        __right_value0 = (void*)0;
        __dec_obj163=fun_name,
        fun_name=(char*)come_increment_ref_count(xsprintf("strtoll"));
        __dec_obj163 = come_decrement_ref_count(__dec_obj163, (void*)0, (void*)0, 0,0, (void*)0);
    }
    else if(    string_operator_equals(fun_name,"__isoc23_strtoul")    ) {
        __right_value0 = (void*)0;
        __dec_obj164=fun_name,
        fun_name=(char*)come_increment_ref_count(xsprintf("strtoul"));
        __dec_obj164 = come_decrement_ref_count(__dec_obj164, (void*)0, (void*)0, 0,0, (void*)0);
    }
    else if(    string_operator_equals(fun_name,"__isoc23_strtoull")    ) {
        __right_value0 = (void*)0;
        __dec_obj165=fun_name,
        fun_name=(char*)come_increment_ref_count(xsprintf("strtoull"));
        __dec_obj165 = come_decrement_ref_count(__dec_obj165, (void*)0, (void*)0, 0,0, (void*)0);
    }
    buffer_append_str(buf_186,fun_name);
    buffer_append_str(buf_186,"(");
    j_187=0;
    for(    o2_saved_188=(struct list$1CVALUE$ph*)come_increment_ref_count(come_params_140),it_189=list$1CVALUE$ph_begin(o2_saved_188)    ;    !list$1CVALUE$ph_end(o2_saved_188)    ;    it_189=list$1CVALUE$ph_next(o2_saved_188)    ){
        buffer_append_str(buf_186,it_189->c_value);
        if(        j_187!=list$1CVALUE$ph_length(come_params_140)-1        ) {
            buffer_append_str(buf_186,",");
        }
        j_187++;
    }
    come_call_finalizer(list$1CVALUE$ph$p_finalize, o2_saved_188, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    buffer_append_str(buf_186,")");
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    come_value_190=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 1484, "struct CVALUE*"))));
    __right_value0 = (void*)0;
    __dec_obj166=come_value_190->c_value,
    come_value_190->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_186));
    __dec_obj166 = come_decrement_ref_count(__dec_obj166, (void*)0, (void*)0, 0,0, (void*)0);
    __right_value0 = (void*)0;
    __dec_obj167=come_value_190->type,
    come_value_190->type=(struct sType*)come_increment_ref_count(sType_clone(result_type_137));
    come_call_finalizer(sType_finalize, __dec_obj167,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(    come_value_190->type    ) {
        come_value_190->type->mStatic=0;
    }
    come_value_190->var=((void*)0);
    if(    fun_122->mResultType->mHeap    ) {
        append_object_to_right_values(come_value_190,(struct sType*)come_increment_ref_count(result_type_137),info,0,((void*)0),((void*)0),((void*)0));
    }
    if(    string_operator_equals(info->come_fun->mName,"come_alloc_mem_from_heap_pool")||string_operator_equals(info->come_fun->mName,"come_calloc")||string_operator_equals(info->come_fun->mName,"come_calloc_v2")||string_operator_equals(info->come_fun->mName,"come_free_mem_of_heap_pool")||string_operator_equals(info->come_fun->mName,"come_free")||string_operator_equals(info->come_fun->mName,"come_free_v2")    ) {
    }
    else if(    string_operator_equals(fun_name,"come_alloc_mem_from_heap_pool")||string_operator_equals(fun_name,"null_check")||string_operator_equals(fun_name,"come_push_stackframe")||string_operator_equals(fun_name,"come_push_stackframe_v2")||string_operator_equals(fun_name,"come_pop_stackframe")||string_operator_equals(fun_name,"come_pop_stackframe_v2")    ) {
    }
    else {
        __right_value0 = (void*)0;
        __dec_obj168=come_value_190->c_value,
        come_value_190->c_value=(char*)come_increment_ref_count(append_stackframe(come_value_190->c_value,come_value_190->type,info));
        __dec_obj168 = come_decrement_ref_count(__dec_obj168, (void*)0, (void*)0, 0,0, (void*)0);
    }
    add_come_last_code(info,"%s",come_value_190->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_190));
    info->calling_fun=fun_122;
    __result_obj__203 = 1;
    (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sType_finalize, result_type_137, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_140, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(buffer_finalize, buf_186, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value_190, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__203;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_clone(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__69;
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* result;
struct list_item$1tuple2$2char$phsNode$ph$ph* it;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__75;
    if(    self==((void*)0)    ) {
        __result_obj__69 = (struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, __result_obj__69, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__69;
    }
    result=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "./neo-c.h", 1060, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
    it=self->head;
    while(    it!=((void*)0)    ) {
        if(        1        ) {
            __right_value0 = (void*)0;
            list$1tuple2$2char$phsNode$ph$ph_add(result,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_clone(it->item)));
        }
        else {
            __right_value0 = (void*)0;
            list$1tuple2$2char$phsNode$ph$ph_add(result,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_clone(it->item)));
        }
        it=it->next;
    }
    __result_obj__75 = (struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(result);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, __result_obj__75, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__75;
}

static void list$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list_item$1tuple2$2char$phsNode$ph$ph* it;
struct list_item$1tuple2$2char$phsNode$ph$ph* prev_it;
    if(    self==((void*)0)    ) {
        return;
    }
    it=self->head;
    while(    it!=((void*)0)    ) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1tuple2$2char$phsNode$ph$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsNode$ph$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void tuple2$2char$phsNode$ph$p_finalize(struct tuple2$2char$phsNode$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)    ) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)    ) {
        ((self->v2) ? self->v2 = come_decrement_ref_count(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_initialize(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__70;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__70 = (struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, __result_obj__70, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__70;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_add(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item){
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__71;
void* __right_value0 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem;
struct tuple2$2char$phsNode$ph* __dec_obj63;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_18;
struct tuple2$2char$phsNode$ph* __dec_obj64;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_19;
struct tuple2$2char$phsNode$ph* __dec_obj65;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__72;
    if(    self==((void*)0)    ) {
        __result_obj__71 = self;
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result_obj__71;
    }
    if(    self->len==0    ) {
        litem=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./neo-c.h", 1081, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj63=litem->item,
        litem->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj63,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(    self->len==1    ) {
        __right_value0 = (void*)0;
        litem_18=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./neo-c.h", 1091, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_18->prev=self->head;
        litem_18->next=((void*)0);
        __dec_obj64=litem_18->item,
        litem_18->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj64,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem_18;
        self->head->next=litem_18;
    }
    else {
        __right_value0 = (void*)0;
        litem_19=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./neo-c.h", 1101, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_19->prev=self->tail;
        litem_19->next=((void*)0);
        __dec_obj65=litem_19->item,
        litem_19->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj65,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail->next=litem_19;
        self->tail=litem_19;
    }
    self->len++;
    __result_obj__72 = self;
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__72;
}

static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_clone(struct tuple2$2char$phsNode$ph* self){
struct tuple2$2char$phsNode$ph* __result_obj__73;
void* __right_value0 = (void*)0;
struct tuple2$2char$phsNode$ph* result;
char* __dec_obj66;
struct sNode* __dec_obj67;
struct tuple2$2char$phsNode$ph* __result_obj__74;
    if(    self==(void*)0    ) {
        __result_obj__73 = (struct tuple2$2char$phsNode$ph*)come_increment_ref_count((void*)0);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __result_obj__73, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__73;
    }
    result=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "tuple2$2char$phsNode$ph_clone", 3, "struct tuple2$2char$phsNode$ph*"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj66=result->v1,
        result->v1=(char*)come_increment_ref_count((char*)come_memdup(self->v1, "tuple2$2char$phsNode$ph_clone", 4, "char*"));
        __dec_obj66 = come_decrement_ref_count(__dec_obj66, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj67=result->v2,
        result->v2=(struct sNode*)come_increment_ref_count(sNode_clone(self->v2));
        (__dec_obj67 ? __dec_obj67 = come_decrement_ref_count(__dec_obj67, ((struct sNode*)__dec_obj67)->finalize, ((struct sNode*)__dec_obj67)->_protocol_obj, 0,0, (void*)0) :0);
    }
    __result_obj__74 = (struct tuple2$2char$phsNode$ph*)come_increment_ref_count(result);
    come_call_finalizer(tuple2$2char$phsNode$ph_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __result_obj__74, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__74;
}

static void tuple2$2char$phsNode$ph_finalize(struct tuple2$2char$phsNode$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)    ) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)    ) {
        ((self->v2) ? self->v2 = come_decrement_ref_count(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
}

static void list$1tuple2$2char$phsNode$ph$ph_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list_item$1tuple2$2char$phsNode$ph$ph* it;
struct list_item$1tuple2$2char$phsNode$ph$ph* prev_it;
    if(    self==((void*)0)    ) {
        return;
    }
    it=self->head;
    while(    it!=((void*)0)    ) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1tuple2$2char$phsNode$ph$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void sFunCallNode_finalize(struct sFunCallNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(    self!=((void*)0)&&self->fun_name!=((void*)0)    ) {
        (self->fun_name = come_decrement_ref_count(self->fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(    self!=((void*)0)&&self->params!=((void*)0)    ) {
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, self->params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->method_generics_types!=((void*)0)    ) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->method_generics_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->method_block!=((void*)0)    ) {
        come_call_finalizer(buffer_finalize, self->method_block, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_initialize(struct list$1CVALUE$ph* self){
struct list$1CVALUE$ph* __result_obj__79;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__79 = (struct list$1CVALUE$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1CVALUE$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1CVALUE$ph$p_finalize, __result_obj__79, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__79;
}

static void list$1CVALUE$ph$p_finalize(struct list$1CVALUE$ph* self){
struct list_item$1CVALUE$ph* it;
struct list_item$1CVALUE$ph* prev_it;
    if(    self==((void*)0)    ) {
        return;
    }
    it=self->head;
    while(    it!=((void*)0)    ) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1CVALUE$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1CVALUE$ph$p_finalize(struct list_item$1CVALUE$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        come_call_finalizer(CVALUE_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static int list$1sType$ph_length(struct list$1sType$ph* self){
    if(    self==((void*)0)    ) {
        return 0;
    }
    return self->len;
}

static int list$1tuple2$2char$phsNode$ph$ph_length(struct list$1tuple2$2char$phsNode$ph$ph* self){
    if(    self==((void*)0)    ) {
        return 0;
    }
    return self->len;
}

static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_begin(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct tuple2$2char$phsNode$ph* result;
struct tuple2$2char$phsNode$ph* __result_obj__81;
struct tuple2$2char$phsNode$ph* __result_obj__82;
struct tuple2$2char$phsNode$ph* result_20;
struct tuple2$2char$phsNode$ph* __result_obj__83;
    if(    self==((void*)0)    ) {
        memset(&result,0,sizeof(struct tuple2$2char$phsNode$ph*));
        __result_obj__81 = result;
        return __result_obj__81;
    }
    self->it=self->head;
    if(    self->it    ) {
        __result_obj__82 = self->it->item;
        return __result_obj__82;
    }
    memset(&result_20,0,sizeof(struct tuple2$2char$phsNode$ph*));
    __result_obj__83 = result_20;
    return __result_obj__83;
}

static _Bool list$1tuple2$2char$phsNode$ph$ph_end(struct list$1tuple2$2char$phsNode$ph$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_next(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct tuple2$2char$phsNode$ph* result;
struct tuple2$2char$phsNode$ph* __result_obj__84;
struct tuple2$2char$phsNode$ph* __result_obj__85;
struct tuple2$2char$phsNode$ph* result_21;
struct tuple2$2char$phsNode$ph* __result_obj__86;
    if(    self==((void*)0)||self->it==((void*)0)    ) {
        memset(&result,0,sizeof(struct tuple2$2char$phsNode$ph*));
        __result_obj__84 = result;
        return __result_obj__84;
    }
    self->it=self->it->next;
    if(    self->it    ) {
        __result_obj__85 = self->it->item;
        return __result_obj__85;
    }
    memset(&result_21,0,sizeof(struct tuple2$2char$phsNode$ph*));
    __result_obj__86 = result_21;
    return __result_obj__86;
}

static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position){
struct sType* default_value;
struct sType* __result_obj__88;
struct list_item$1sType$ph* it;
int i;
struct sType* __result_obj__89;
struct sType* default_value_22;
struct sType* __result_obj__90;
    if(    self==((void*)0)    ) {
        memset(&default_value,0,sizeof(struct sType*));
        __result_obj__88 = (struct sType*)come_increment_ref_count(default_value);
        come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        come_call_finalizer(sType_finalize, __result_obj__88, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__88;
        come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    position<0    ) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(    it!=((void*)0)    ) {
        if(        position==i        ) {
            __result_obj__89 = (struct sType*)come_increment_ref_count(it->item);
            come_call_finalizer(sType_finalize, __result_obj__89, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__89;
        }
        it=it->next;
        i++;
    }
    memset(&default_value_22,0,sizeof(struct sType*));
    __result_obj__90 = (struct sType*)come_increment_ref_count(default_value_22);
    come_call_finalizer(sType_finalize, default_value_22, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sType_finalize, __result_obj__90, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__90;
}

static struct sType* list$1sType$ph_operator_load_element(struct list$1sType$ph* self, int position){
struct sType* default_value;
struct sType* __result_obj__91;
struct list_item$1sType$ph* it;
int i;
struct sType* __result_obj__92;
struct sType* default_value_23;
struct sType* __result_obj__93;
    if(    self==((void*)0)    ) {
        memset(&default_value,0,sizeof(struct sType*));
        __result_obj__91 = (struct sType*)come_increment_ref_count(default_value);
        come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        come_call_finalizer(sType_finalize, __result_obj__91, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__91;
        come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    position<0    ) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(    it!=((void*)0)    ) {
        if(        position==i        ) {
            __result_obj__92 = (struct sType*)come_increment_ref_count(it->item);
            come_call_finalizer(sType_finalize, __result_obj__92, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__92;
        }
        it=it->next;
        i++;
    }
    memset(&default_value_23,0,sizeof(struct sType*));
    __result_obj__93 = (struct sType*)come_increment_ref_count(default_value_23);
    come_call_finalizer(sType_finalize, default_value_23, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sType_finalize, __result_obj__93, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__93;
}

static struct CVALUE* list$1CVALUE$ph_begin(struct list$1CVALUE$ph* self){
struct CVALUE* result;
struct CVALUE* __result_obj__94;
struct CVALUE* __result_obj__95;
struct CVALUE* result_25;
struct CVALUE* __result_obj__96;
    if(    self==((void*)0)    ) {
        memset(&result,0,sizeof(struct CVALUE*));
        __result_obj__94 = result;
        return __result_obj__94;
    }
    self->it=self->head;
    if(    self->it    ) {
        __result_obj__95 = self->it->item;
        return __result_obj__95;
    }
    memset(&result_25,0,sizeof(struct CVALUE*));
    __result_obj__96 = result_25;
    return __result_obj__96;
}

static _Bool list$1CVALUE$ph_end(struct list$1CVALUE$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct CVALUE* list$1CVALUE$ph_next(struct list$1CVALUE$ph* self){
struct CVALUE* result;
struct CVALUE* __result_obj__97;
struct CVALUE* __result_obj__98;
struct CVALUE* result_27;
struct CVALUE* __result_obj__99;
    if(    self==((void*)0)||self->it==((void*)0)    ) {
        memset(&result,0,sizeof(struct CVALUE*));
        __result_obj__97 = result;
        return __result_obj__97;
    }
    self->it=self->it->next;
    if(    self->it    ) {
        __result_obj__98 = self->it->item;
        return __result_obj__98;
    }
    memset(&result_27,0,sizeof(struct CVALUE*));
    __result_obj__99 = result_27;
    return __result_obj__99;
}

static int list$1CVALUE$ph_length(struct list$1CVALUE$ph* self){
    if(    self==((void*)0)    ) {
        return 0;
    }
    return self->len;
}

static struct sGenericsFun* map$2char$phsGenericsFun$ph_at(struct map$2char$phsGenericsFun$ph* self, char* key, struct sGenericsFun* default_value){
struct sGenericsFun* __result_obj__101;
unsigned int hash;
unsigned int it;
struct sGenericsFun* __result_obj__102;
struct sGenericsFun* __result_obj__103;
struct sGenericsFun* __result_obj__104;
struct sGenericsFun* __result_obj__105;
    if(    self==((void*)0)    ) {
        __result_obj__101 = (struct sGenericsFun*)come_increment_ref_count(default_value);
        come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        come_call_finalizer(sGenericsFun_finalize, __result_obj__101, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__101;
    }
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(    1    ) {
        if(        self->item_existance[it]        ) {
            if(            string_equals(self->keys[it],key)            ) {
                __result_obj__102 = (struct sGenericsFun*)come_increment_ref_count(self->items[it]);
                come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sGenericsFun_finalize, __result_obj__102, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__102;
            }
            it++;
            if(            it>=self->size            ) {
                it=0;
            }
            else if(            it==hash            ) {
                __result_obj__103 = (struct sGenericsFun*)come_increment_ref_count(default_value);
                come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                come_call_finalizer(sGenericsFun_finalize, __result_obj__103, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__103;
            }
        }
        else {
            __result_obj__104 = (struct sGenericsFun*)come_increment_ref_count(default_value);
            come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            come_call_finalizer(sGenericsFun_finalize, __result_obj__104, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__104;
        }
    }
    __result_obj__105 = (struct sGenericsFun*)come_increment_ref_count(default_value);
    come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sGenericsFun_finalize, __result_obj__105, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__105;
}

static void sGenericsFun_finalize(struct sGenericsFun* self){
    if(    self!=((void*)0)&&self->mImplType!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->mImplType, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0)    ) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mGenericsTypeNames, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0)    ) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mMethodGenericsTypeNames, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)    ) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->mResultType, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)    ) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)    ) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamNames, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)    ) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)    ) {
        (self->mBlock = come_decrement_ref_count(self->mBlock, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(    self!=((void*)0)&&self->mGenericsSName!=((void*)0)    ) {
        (self->mGenericsSName = come_decrement_ref_count(self->mGenericsSName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

static int list$1char$ph_length(struct list$1char$ph* self){
    if(    self==((void*)0)    ) {
        return 0;
    }
    return self->len;
}

static void tuple2$2char$phsGenericsFun$p$p_finalize(struct tuple2$2char$phsGenericsFun$p* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)    ) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

static struct sFun* map$2char$phsFun$ph_at(struct map$2char$phsFun$ph* self, char* key, struct sFun* default_value){
struct sFun* __result_obj__106;
unsigned int hash;
unsigned int it;
struct sFun* __result_obj__107;
struct sFun* __result_obj__108;
struct sFun* __result_obj__109;
struct sFun* __result_obj__110;
    if(    self==((void*)0)    ) {
        __result_obj__106 = (struct sFun*)come_increment_ref_count(default_value);
        come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        come_call_finalizer(sFun_finalize, __result_obj__106, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__106;
    }
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(    1    ) {
        if(        self->item_existance[it]        ) {
            if(            string_equals(self->keys[it],key)            ) {
                __result_obj__107 = (struct sFun*)come_increment_ref_count(self->items[it]);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__107, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__107;
            }
            it++;
            if(            it>=self->size            ) {
                it=0;
            }
            else if(            it==hash            ) {
                __result_obj__108 = (struct sFun*)come_increment_ref_count(default_value);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__108, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__108;
            }
        }
        else {
            __result_obj__109 = (struct sFun*)come_increment_ref_count(default_value);
            come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            come_call_finalizer(sFun_finalize, __result_obj__109, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__109;
        }
    }
    __result_obj__110 = (struct sFun*)come_increment_ref_count(default_value);
    come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sFun_finalize, __result_obj__110, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__110;
}

static void sFun_finalize(struct sFun* self){
    if(    self!=((void*)0)&&self->mName!=((void*)0)    ) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->mResultType, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)    ) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)    ) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamNames, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)    ) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mLambdaType!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->mLambdaType, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAllVar!=((void*)0)    ) {
        come_call_finalizer(list$1sVar$ph$p_finalize, self->mAllVar, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)    ) {
        come_call_finalizer(sBlock_finalize, self->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mTextBlock!=((void*)0)    ) {
        (self->mTextBlock = come_decrement_ref_count(self->mTextBlock, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(    self!=((void*)0)&&self->mTextBlockSName!=((void*)0)    ) {
        (self->mTextBlockSName = come_decrement_ref_count(self->mTextBlockSName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)    ) {
        come_call_finalizer(buffer_finalize, self->mSource, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)    ) {
        come_call_finalizer(buffer_finalize, self->mSourceHead, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceHead2!=((void*)0)    ) {
        come_call_finalizer(buffer_finalize, self->mSourceHead2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceDefer!=((void*)0)    ) {
        come_call_finalizer(buffer_finalize, self->mSourceDefer, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)    ) {
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(    self!=((void*)0)&&self->mFunAttribute!=((void*)0)    ) {
        (self->mFunAttribute = come_decrement_ref_count(self->mFunAttribute, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

static void sBlock_finalize(struct sBlock* self){
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)    ) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mNodes, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)    ) {
        come_call_finalizer(sVarTable_finalize, self->mVarTable, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static struct CVALUE* list$1CVALUE$ph$p_operator_load_element(struct list$1CVALUE$ph* self, int position){
struct CVALUE* default_value;
struct CVALUE* __result_obj__112;
struct list_item$1CVALUE$ph* it;
int i;
struct CVALUE* __result_obj__113;
struct CVALUE* default_value_31;
struct CVALUE* __result_obj__114;
    if(    self==((void*)0)    ) {
        memset(&default_value,0,sizeof(struct CVALUE*));
        __result_obj__112 = (struct CVALUE*)come_increment_ref_count(default_value);
        come_call_finalizer(CVALUE_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        come_call_finalizer(CVALUE_finalize, __result_obj__112, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__112;
        come_call_finalizer(CVALUE_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    position<0    ) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(    it!=((void*)0)    ) {
        if(        position==i        ) {
            __result_obj__113 = (struct CVALUE*)come_increment_ref_count(it->item);
            come_call_finalizer(CVALUE_finalize, __result_obj__113, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__113;
        }
        it=it->next;
        i++;
    }
    memset(&default_value_31,0,sizeof(struct CVALUE*));
    __result_obj__114 = (struct CVALUE*)come_increment_ref_count(default_value_31);
    come_call_finalizer(CVALUE_finalize, default_value_31, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(CVALUE_finalize, __result_obj__114, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__114;
}

static struct CVALUE* list$1CVALUE$ph_operator_load_element(struct list$1CVALUE$ph* self, int position){
struct CVALUE* default_value;
struct CVALUE* __result_obj__115;
struct list_item$1CVALUE$ph* it;
int i;
struct CVALUE* __result_obj__116;
struct CVALUE* default_value_32;
struct CVALUE* __result_obj__117;
    if(    self==((void*)0)    ) {
        memset(&default_value,0,sizeof(struct CVALUE*));
        __result_obj__115 = (struct CVALUE*)come_increment_ref_count(default_value);
        come_call_finalizer(CVALUE_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        come_call_finalizer(CVALUE_finalize, __result_obj__115, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__115;
        come_call_finalizer(CVALUE_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    position<0    ) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(    it!=((void*)0)    ) {
        if(        position==i        ) {
            __result_obj__116 = (struct CVALUE*)come_increment_ref_count(it->item);
            come_call_finalizer(CVALUE_finalize, __result_obj__116, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__116;
        }
        it=it->next;
        i++;
    }
    memset(&default_value_32,0,sizeof(struct CVALUE*));
    __result_obj__117 = (struct CVALUE*)come_increment_ref_count(default_value_32);
    come_call_finalizer(CVALUE_finalize, default_value_32, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(CVALUE_finalize, __result_obj__117, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__117;
}

static void list$1sType$ph_operator_store_element(struct list$1sType$ph* self, int position, struct sType* item){
    list$1sType$ph_replace(self,position,(struct sType*)come_increment_ref_count(item));
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct list$1sType$ph* list$1sType$ph_replace(struct list$1sType$ph* self, int position, struct sType* item){
struct list$1sType$ph* __result_obj__118;
int len;
int i;
struct sType* default_value;
struct list$1sType$ph* __result_obj__121;
struct list_item$1sType$ph* it;
int i_35;
struct sType* __dec_obj77;
struct list$1sType$ph* __result_obj__122;
    if(    self==((void*)0)    ) {
        __result_obj__118 = self;
        come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result_obj__118;
    }
    if(    position<0    ) {
        position+=self->len;
    }
    if(    position<0    ) {
        position=0;
    }
    if(    self->len==0||position>=self->len    ) {
        len=self->len;
        for(        i=0        ;        i<position-len        ;        i++        ){
            memset(&default_value,0,sizeof(struct sType*));
            list$1sType$ph_push_back(self,(struct sType*)come_increment_ref_count(default_value));
            come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        list$1sType$ph_push_back(self,(struct sType*)come_increment_ref_count(item));
        __result_obj__121 = self;
        come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result_obj__121;
    }
    it=self->head;
    i_35=0;
    while(    it!=((void*)0)    ) {
        if(        position==i_35        ) {
            __dec_obj77=it->item,
            it->item=(struct sType*)come_increment_ref_count(item);
            come_call_finalizer(sType_finalize, __dec_obj77,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            break;
        }
        it=it->next;
        i_35++;
    }
    __result_obj__122 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__122;
}

static struct list$1sType$ph* list$1sType$ph_push_back(struct list$1sType$ph* self, struct sType* item){
struct list$1sType$ph* __result_obj__119;
void* __right_value0 = (void*)0;
struct list_item$1sType$ph* litem;
struct sType* __dec_obj74;
struct list_item$1sType$ph* litem_33;
struct sType* __dec_obj75;
struct list_item$1sType$ph* litem_34;
struct sType* __dec_obj76;
struct list$1sType$ph* __result_obj__120;
    if(    self==((void*)0)    ) {
        __result_obj__119 = self;
        come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result_obj__119;
    }
    if(    self->len==0    ) {
        litem=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./neo-c.h", 1166, "struct list_item$1sType$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj74=litem->item,
        litem->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj74,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(    self->len==1    ) {
        __right_value0 = (void*)0;
        litem_33=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./neo-c.h", 1176, "struct list_item$1sType$ph*"))));
        litem_33->prev=self->head;
        litem_33->next=((void*)0);
        __dec_obj75=litem_33->item,
        litem_33->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj75,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem_33;
        self->head->next=litem_33;
    }
    else {
        __right_value0 = (void*)0;
        litem_34=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./neo-c.h", 1186, "struct list_item$1sType$ph*"))));
        litem_34->prev=self->tail;
        litem_34->next=((void*)0);
        __dec_obj76=litem_34->item,
        litem_34->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj76,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail->next=litem_34;
        self->tail=litem_34;
    }
    self->len++;
    __result_obj__120 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__120;
}

static struct sType* list$1sType$ph_begin(struct list$1sType$ph* self){
struct sType* result;
struct sType* __result_obj__123;
struct sType* __result_obj__124;
struct sType* result_37;
struct sType* __result_obj__125;
    if(    self==((void*)0)    ) {
        memset(&result,0,sizeof(struct sType*));
        __result_obj__123 = result;
        return __result_obj__123;
    }
    self->it=self->head;
    if(    self->it    ) {
        __result_obj__124 = self->it->item;
        return __result_obj__124;
    }
    memset(&result_37,0,sizeof(struct sType*));
    __result_obj__125 = result_37;
    return __result_obj__125;
}

static _Bool list$1sType$ph_end(struct list$1sType$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sType* list$1sType$ph_next(struct list$1sType$ph* self){
struct sType* result;
struct sType* __result_obj__126;
struct sType* __result_obj__127;
struct sType* result_39;
struct sType* __result_obj__128;
    if(    self==((void*)0)||self->it==((void*)0)    ) {
        memset(&result,0,sizeof(struct sType*));
        __result_obj__126 = result;
        return __result_obj__126;
    }
    self->it=self->it->next;
    if(    self->it    ) {
        __result_obj__127 = self->it->item;
        return __result_obj__127;
    }
    memset(&result_39,0,sizeof(struct sType*));
    __result_obj__128 = result_39;
    return __result_obj__128;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_add(struct list$1CVALUE$ph* self, struct CVALUE* item){
struct list$1CVALUE$ph* __result_obj__130;
void* __right_value0 = (void*)0;
struct list_item$1CVALUE$ph* litem;
struct CVALUE* __dec_obj79;
struct list_item$1CVALUE$ph* litem_50;
struct CVALUE* __dec_obj80;
struct list_item$1CVALUE$ph* litem_51;
struct CVALUE* __dec_obj81;
struct list$1CVALUE$ph* __result_obj__131;
    if(    self==((void*)0)    ) {
        __result_obj__130 = self;
        come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result_obj__130;
    }
    if(    self->len==0    ) {
        litem=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./neo-c.h", 1081, "struct list_item$1CVALUE$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj79=litem->item,
        litem->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj79,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(    self->len==1    ) {
        __right_value0 = (void*)0;
        litem_50=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./neo-c.h", 1091, "struct list_item$1CVALUE$ph*"))));
        litem_50->prev=self->head;
        litem_50->next=((void*)0);
        __dec_obj80=litem_50->item,
        litem_50->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj80,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem_50;
        self->head->next=litem_50;
    }
    else {
        __right_value0 = (void*)0;
        litem_51=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./neo-c.h", 1101, "struct list_item$1CVALUE$ph*"))));
        litem_51->prev=self->tail;
        litem_51->next=((void*)0);
        __dec_obj81=litem_51->item,
        litem_51->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj81,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail->next=litem_51;
        self->tail=litem_51;
    }
    self->len++;
    __result_obj__131 = self;
    come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__131;
}

static struct map$2char$phsFun$ph* map$2char$phsFun$ph_remove(struct map$2char$phsFun$ph* self, char* key){
struct map$2char$phsFun$ph* __result_obj__132;
unsigned int hash;
unsigned int it;
struct map$2char$phsFun$ph* __result_obj__141;
    if(    self==((void*)0)    ) {
        __result_obj__132 = self;
        (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0));
        return __result_obj__132;
    }
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(    1    ) {
        if(        self->item_existance[it]        ) {
            if(            string_equals(self->keys[it],key)            ) {
                list$1char$ph_remove(self->key_list,self->keys[it]);
                self->item_existance[it]=0;
                if(                1                ) {
                    (self->keys[it] = come_decrement_ref_count(self->keys[it], (void*)0, (void*)0, 0, 0, (void*)0));
                }
                self->keys[it]=((void*)0);
                if(                1                ) {
                    come_call_finalizer(sFun_finalize, self->items[it], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                memset(self->items+it,0,sizeof(struct sFun*));
                self->len--;
                break;
            }
            it++;
            if(            it>=self->size            ) {
                it=0;
            }
            else if(            it==hash            ) {
                break;
            }
        }
        else {
            break;
        }
    }
    __result_obj__141 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0));
    return __result_obj__141;
}

static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char* item){
struct list$1char$ph* __result_obj__133;
int it2;
struct list_item$1char$ph* it;
struct list$1char$ph* __result_obj__140;
    if(    self==((void*)0)    ) {
        __result_obj__133 = self;
        return __result_obj__133;
    }
    it2=0;
    it=self->head;
    while(    it!=((void*)0)    ) {
        if(        string_equals(it->item,item)        ) {
            list$1char$ph_delete(self,it2,it2+1);
            break;
        }
        it2++;
        it=it->next;
    }
    __result_obj__140 = self;
    return __result_obj__140;
}

static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail){
struct list$1char$ph* __result_obj__134;
int tmp;
struct list$1char$ph* __result_obj__135;
struct list$1char$ph* __result_obj__136;
struct list_item$1char$ph* it;
int i;
struct list_item$1char$ph* prev_it;
struct list_item$1char$ph* it_57;
int i_58;
struct list_item$1char$ph* prev_it_59;
struct list_item$1char$ph* it_60;
struct list_item$1char$ph* head_prev_it;
struct list_item$1char$ph* tail_it;
int i_61;
struct list_item$1char$ph* prev_it_62;
struct list$1char$ph* __result_obj__139;
    if(    self==((void*)0)    ) {
        __result_obj__134 = self;
        return __result_obj__134;
    }
    if(    head<0    ) {
        head+=self->len;
    }
    if(    tail<0    ) {
        tail+=self->len+1;
    }
    if(    head>tail    ) {
        tmp=tail;
        tail=head;
        head=tmp;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>self->len    ) {
        tail=self->len;
    }
    if(    head>=self->len    ) {
        __result_obj__135 = self;
        return __result_obj__135;
    }
    if(    head==tail    ) {
        __result_obj__136 = self;
        return __result_obj__136;
    }
    if(    head==0&&tail==self->len    ) {
        list$1char$ph_reset(self);
    }
    else if(    head==0    ) {
        it=self->head;
        i=0;
        while(        it!=((void*)0)        ) {
            if(            i<tail            ) {
                prev_it=it;
                it=it->next;
                i++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i==tail            ) {
                self->head=it;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it=it->next;
                i++;
            }
        }
    }
    else if(    tail==self->len    ) {
        it_57=self->head;
        i_58=0;
        while(        it_57!=((void*)0)        ) {
            if(            i_58==head            ) {
                self->tail=it_57->prev;
                self->tail->next=((void*)0);
            }
            if(            i_58>=head            ) {
                prev_it_59=it_57;
                it_57=it_57->next;
                i_58++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_59, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_57=it_57->next;
                i_58++;
            }
        }
    }
    else {
        it_60=self->head;
        head_prev_it=((void*)0);
        tail_it=((void*)0);
        i_61=0;
        while(        it_60!=((void*)0)        ) {
            if(            i_61==head            ) {
                head_prev_it=it_60->prev;
            }
            if(            i_61==tail            ) {
                tail_it=it_60;
            }
            if(            i_61>=head&&i_61<tail            ) {
                prev_it_62=it_60;
                it_60=it_60->next;
                i_61++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_62, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_60=it_60->next;
                i_61++;
            }
        }
        if(        head_prev_it!=((void*)0)        ) {
            head_prev_it->next=tail_it;
        }
        if(        tail_it!=((void*)0)        ) {
            tail_it->prev=head_prev_it;
        }
    }
    __result_obj__139 = self;
    return __result_obj__139;
}

static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__137;
struct list_item$1char$ph* it;
struct list_item$1char$ph* prev_it;
struct list$1char$ph* __result_obj__138;
    if(    self==((void*)0)    ) {
        __result_obj__137 = self;
        return __result_obj__137;
    }
    it=self->head;
    while(    it!=((void*)0)    ) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__138 = self;
    return __result_obj__138;
}

static struct sFun* map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char* key){
struct sFun* default_value;
struct sFun* __result_obj__153;
unsigned int hash;
unsigned int it;
struct sFun* __result_obj__154;
struct sFun* __result_obj__155;
struct sFun* __result_obj__156;
struct sFun* __result_obj__157;
    memset(&default_value,0,sizeof(struct sFun*));
    if(    self==((void*)0)    ) {
        __result_obj__153 = (struct sFun*)come_increment_ref_count(default_value);
        come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        come_call_finalizer(sFun_finalize, __result_obj__153, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__153;
    }
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(    1    ) {
        if(        self->item_existance[it]        ) {
            if(            string_equals(self->keys[it],key)            ) {
                __result_obj__154 = (struct sFun*)come_increment_ref_count(self->items[it]);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__154, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__154;
            }
            it++;
            if(            it>=self->size            ) {
                it=0;
            }
            else if(            it==hash            ) {
                __result_obj__155 = (struct sFun*)come_increment_ref_count(default_value);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__155, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__155;
            }
        }
        else {
            __result_obj__156 = (struct sFun*)come_increment_ref_count(default_value);
            come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            come_call_finalizer(sFun_finalize, __result_obj__156, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__156;
        }
    }
    __result_obj__157 = (struct sFun*)come_increment_ref_count(default_value);
    come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sFun_finalize, __result_obj__157, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__157;
}

static struct sFun* map$2char$phsFun$ph_operator_load_element(struct map$2char$phsFun$ph* self, char* key){
struct sFun* default_value;
struct sFun* __result_obj__158;
unsigned int hash;
unsigned int it;
struct sFun* __result_obj__159;
struct sFun* __result_obj__160;
struct sFun* __result_obj__161;
struct sFun* __result_obj__162;
    memset(&default_value,0,sizeof(struct sFun*));
    if(    self==((void*)0)    ) {
        __result_obj__158 = (struct sFun*)come_increment_ref_count(default_value);
        come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        come_call_finalizer(sFun_finalize, __result_obj__158, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__158;
    }
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(    1    ) {
        if(        self->item_existance[it]        ) {
            if(            string_equals(self->keys[it],key)            ) {
                __result_obj__159 = (struct sFun*)come_increment_ref_count(self->items[it]);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__159, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__159;
            }
            it++;
            if(            it>=self->size            ) {
                it=0;
            }
            else if(            it==hash            ) {
                __result_obj__160 = (struct sFun*)come_increment_ref_count(default_value);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__160, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__160;
            }
        }
        else {
            __result_obj__161 = (struct sFun*)come_increment_ref_count(default_value);
            come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            come_call_finalizer(sFun_finalize, __result_obj__161, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__161;
        }
    }
    __result_obj__162 = (struct sFun*)come_increment_ref_count(default_value);
    come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sFun_finalize, __result_obj__162, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__162;
}

static char* list$1char$ph_begin(struct list$1char$ph* self){
char* result;
char* __result_obj__167;
char* __result_obj__168;
char* result_150;
char* __result_obj__169;
    if(    self==((void*)0)    ) {
        memset(&result,0,sizeof(char*));
        __result_obj__167 = result;
        return __result_obj__167;
    }
    self->it=self->head;
    if(    self->it    ) {
        __result_obj__168 = self->it->item;
        return __result_obj__168;
    }
    memset(&result_150,0,sizeof(char*));
    __result_obj__169 = result_150;
    return __result_obj__169;
}

static _Bool list$1char$ph_end(struct list$1char$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1char$ph_next(struct list$1char$ph* self){
char* result;
char* __result_obj__170;
char* __result_obj__171;
char* result_152;
char* __result_obj__172;
    if(    self==((void*)0)||self->it==((void*)0)    ) {
        memset(&result,0,sizeof(char*));
        __result_obj__170 = result;
        return __result_obj__170;
    }
    self->it=self->it->next;
    if(    self->it    ) {
        __result_obj__171 = self->it->item;
        return __result_obj__171;
    }
    memset(&result_152,0,sizeof(char*));
    __result_obj__172 = result_152;
    return __result_obj__172;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_replace(struct list$1CVALUE$ph* self, int position, struct CVALUE* item){
struct list$1CVALUE$ph* __result_obj__173;
int len;
int i;
struct CVALUE* default_value;
struct list$1CVALUE$ph* __result_obj__174;
struct list_item$1CVALUE$ph* it;
int i_153;
struct CVALUE* __dec_obj151;
struct list$1CVALUE$ph* __result_obj__175;
    if(    self==((void*)0)    ) {
        __result_obj__173 = self;
        come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result_obj__173;
    }
    if(    position<0    ) {
        position+=self->len;
    }
    if(    position<0    ) {
        position=0;
    }
    if(    self->len==0||position>=self->len    ) {
        len=self->len;
        for(        i=0        ;        i<position-len        ;        i++        ){
            memset(&default_value,0,sizeof(struct CVALUE*));
            list$1CVALUE$ph_push_back(self,(struct CVALUE*)come_increment_ref_count(default_value));
            come_call_finalizer(CVALUE_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        list$1CVALUE$ph_push_back(self,(struct CVALUE*)come_increment_ref_count(item));
        __result_obj__174 = self;
        come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result_obj__174;
    }
    it=self->head;
    i_153=0;
    while(    it!=((void*)0)    ) {
        if(        position==i_153        ) {
            __dec_obj151=it->item,
            it->item=(struct CVALUE*)come_increment_ref_count(item);
            come_call_finalizer(CVALUE_finalize, __dec_obj151,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            break;
        }
        it=it->next;
        i_153++;
    }
    __result_obj__175 = self;
    come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__175;
}

static char* list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position){
char* default_value;
char* __result_obj__178;
struct list_item$1char$ph* it;
int i;
char* __result_obj__179;
char* default_value_163;
char* __result_obj__180;
    if(    self==((void*)0)    ) {
        memset(&default_value,0,sizeof(char*));
        __result_obj__178 = (char*)come_increment_ref_count(default_value);
        (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 1, (void*)0));
        (__result_obj__178 = come_decrement_ref_count(__result_obj__178, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__178;
        (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(    position<0    ) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(    it!=((void*)0)    ) {
        if(        position==i        ) {
            __result_obj__179 = (char*)come_increment_ref_count(it->item);
            (__result_obj__179 = come_decrement_ref_count(__result_obj__179, (void*)0, (void*)0, 0, 1, (void*)0));
            return __result_obj__179;
        }
        it=it->next;
        i++;
    }
    memset(&default_value_163,0,sizeof(char*));
    __result_obj__180 = (char*)come_increment_ref_count(default_value_163);
    (default_value_163 = come_decrement_ref_count(default_value_163, (void*)0, (void*)0, 0, 1, (void*)0));
    (__result_obj__180 = come_decrement_ref_count(__result_obj__180, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__180;
}

static char* list$1char$ph_operator_load_element(struct list$1char$ph* self, int position){
char* default_value;
char* __result_obj__181;
struct list_item$1char$ph* it;
int i;
char* __result_obj__182;
char* default_value_164;
char* __result_obj__183;
    if(    self==((void*)0)    ) {
        memset(&default_value,0,sizeof(char*));
        __result_obj__181 = (char*)come_increment_ref_count(default_value);
        (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 1, (void*)0));
        (__result_obj__181 = come_decrement_ref_count(__result_obj__181, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__181;
        (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(    position<0    ) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(    it!=((void*)0)    ) {
        if(        position==i        ) {
            __result_obj__182 = (char*)come_increment_ref_count(it->item);
            (__result_obj__182 = come_decrement_ref_count(__result_obj__182, (void*)0, (void*)0, 0, 1, (void*)0));
            return __result_obj__182;
        }
        it=it->next;
        i++;
    }
    memset(&default_value_164,0,sizeof(char*));
    __result_obj__183 = (char*)come_increment_ref_count(default_value_164);
    (default_value_164 = come_decrement_ref_count(default_value_164, (void*)0, (void*)0, 0, 1, (void*)0));
    (__result_obj__183 = come_decrement_ref_count(__result_obj__183, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__183;
}

static void sCurrentNode_finalize(struct sCurrentNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

static struct sCurrentNode* sCurrentNode_clone(struct sCurrentNode* self){
struct sCurrentNode* __result_obj__187;
void* __right_value0 = (void*)0;
struct sCurrentNode* result;
char* __dec_obj157;
struct sCurrentNode* __result_obj__188;
    if(    self==(void*)0    ) {
        __result_obj__187 = (void*)0;
        return __result_obj__187;
    }
    result=(struct sCurrentNode*)come_increment_ref_count((struct sCurrentNode*)come_calloc_v2(1, sizeof(struct sCurrentNode)*(1), "sCurrentNode_clone", 3, "struct sCurrentNode*"));
    if(    self!=((void*)0)    ) {
        result->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj157=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sCurrentNode_clone", 5, "char*"));
        __dec_obj157 = come_decrement_ref_count(__dec_obj157, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result->sline_real=self->sline_real;
    }
    __result_obj__188 = result;
    come_call_finalizer(sCurrentNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__188;
}

static struct sClass* map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char* key){
struct sClass* default_value;
struct sClass* __result_obj__190;
unsigned int hash;
unsigned int it;
struct sClass* __result_obj__191;
struct sClass* __result_obj__192;
struct sClass* __result_obj__193;
struct sClass* __result_obj__194;
    memset(&default_value,0,sizeof(struct sClass*));
    if(    self==((void*)0)    ) {
        __result_obj__190 = (struct sClass*)come_increment_ref_count(default_value);
        come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        come_call_finalizer(sClass_finalize, __result_obj__190, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__190;
    }
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(    1    ) {
        if(        self->item_existance[it]        ) {
            if(            string_equals(self->keys[it],key)            ) {
                __result_obj__191 = (struct sClass*)come_increment_ref_count(self->items[it]);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sClass_finalize, __result_obj__191, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__191;
            }
            it++;
            if(            it>=self->size            ) {
                it=0;
            }
            else if(            it==hash            ) {
                __result_obj__192 = (struct sClass*)come_increment_ref_count(default_value);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                come_call_finalizer(sClass_finalize, __result_obj__192, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__192;
            }
        }
        else {
            __result_obj__193 = (struct sClass*)come_increment_ref_count(default_value);
            come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            come_call_finalizer(sClass_finalize, __result_obj__193, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__193;
        }
    }
    __result_obj__194 = (struct sClass*)come_increment_ref_count(default_value);
    come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sClass_finalize, __result_obj__194, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__194;
}

static void sClass_finalize(struct sClass* self){
    if(    self!=((void*)0)&&self->mName!=((void*)0)    ) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(    self!=((void*)0)&&self->mFields!=((void*)0)    ) {
        come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, self->mFields, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParentClassName!=((void*)0)    ) {
        (self->mParentClassName = come_decrement_ref_count(self->mParentClassName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)    ) {
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

static void list$1tuple2$2char$phsType$ph$ph$p_finalize(struct list$1tuple2$2char$phsType$ph$ph* self){
struct list_item$1tuple2$2char$phsType$ph$ph* it;
struct list_item$1tuple2$2char$phsType$ph$ph* prev_it;
    if(    self==((void*)0)    ) {
        return;
    }
    it=self->head;
    while(    it!=((void*)0)    ) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1tuple2$2char$phsType$ph$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)    ) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static struct sClass* map$2char$phsClass$ph_operator_load_element(struct map$2char$phsClass$ph* self, char* key){
struct sClass* default_value;
struct sClass* __result_obj__195;
unsigned int hash;
unsigned int it;
struct sClass* __result_obj__196;
struct sClass* __result_obj__197;
struct sClass* __result_obj__198;
struct sClass* __result_obj__199;
    memset(&default_value,0,sizeof(struct sClass*));
    if(    self==((void*)0)    ) {
        __result_obj__195 = (struct sClass*)come_increment_ref_count(default_value);
        come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        come_call_finalizer(sClass_finalize, __result_obj__195, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__195;
    }
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(    1    ) {
        if(        self->item_existance[it]        ) {
            if(            string_equals(self->keys[it],key)            ) {
                __result_obj__196 = (struct sClass*)come_increment_ref_count(self->items[it]);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sClass_finalize, __result_obj__196, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__196;
            }
            it++;
            if(            it>=self->size            ) {
                it=0;
            }
            else if(            it==hash            ) {
                __result_obj__197 = (struct sClass*)come_increment_ref_count(default_value);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                come_call_finalizer(sClass_finalize, __result_obj__197, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__197;
            }
        }
        else {
            __result_obj__198 = (struct sClass*)come_increment_ref_count(default_value);
            come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            come_call_finalizer(sClass_finalize, __result_obj__198, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__198;
        }
    }
    __result_obj__199 = (struct sClass*)come_increment_ref_count(default_value);
    come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sClass_finalize, __result_obj__199, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__199;
}

struct sComeCallNode* sComeCallNode_initialize(struct sComeCallNode* self, struct buffer* come_block, int come_block_sline, struct sInfo* info){
void* __right_value0 = (void*)0;
struct buffer* __dec_obj169;
struct sComeCallNode* __result_obj__204;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj169=self->come_block,
    self->come_block=(struct buffer*)come_increment_ref_count(come_block);
    come_call_finalizer(buffer_finalize, __dec_obj169,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    self->come_block_sline=come_block_sline;
    __result_obj__204 = (struct sComeCallNode*)come_increment_ref_count(self);
    come_call_finalizer(sComeCallNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(buffer_finalize, come_block, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sComeCallNode_finalize, __result_obj__204, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__204;
}

char* sComeCallNode_kind(struct sComeCallNode* self){
void* __right_value0 = (void*)0;
char* __result_obj__205;
    __result_obj__205 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string("sComeCallNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__205 = come_decrement_ref_count(__result_obj__205, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__205;
}

_Bool sComeCallNode_terminated(struct sComeCallNode* self){
    return 1;
}

_Bool sComeCallNode_compile(struct sComeCallNode* self, struct sInfo* info){
int come_block_sline;
struct buffer* come_block;
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct list$1CVALUE$ph* come_params;
char* var_name;
void* __right_value2 = (void*)0;
struct sType* type_;
_Bool __result_obj__211;
struct sNode* var_node;
_Bool Value;
_Bool __result_obj__212;
struct CVALUE* thread_var_value;
struct CVALUE* come_value;
char* __dec_obj170;
struct sType* __dec_obj171;
struct sNode* null_node;
_Bool Value_191;
_Bool __result_obj__213;
struct CVALUE* __dec_obj172;
struct sType* __dec_obj173;
struct sNode* _inf_value3;
struct sCurrentNode* _inf_obj_value3;
struct sNode* current_stack_frame_node;
_Bool Value_192;
_Bool __result_obj__214;
struct CVALUE* current_stack_frame_value;
char* fun_name;
struct buffer* come_block2;
char* class_name;
struct sClass* current_stack_frame_struct;
struct buffer* source3;
char* p;
char* head;
int sline;
struct buffer* __dec_obj174;
struct sNode* node;
_Bool in_method_block;
_Bool Value_193;
_Bool __result_obj__215;
struct buffer* __dec_obj175;
struct CVALUE* fun_value;
char* __dec_obj176;
struct sType* __dec_obj177;
struct buffer* buf;
char* fun_name_194;
int j;
struct list$1CVALUE$ph* o2_saved;
struct CVALUE* it;
struct CVALUE* come_value_195;
char* __dec_obj178;
struct sType* type;
struct sType* __dec_obj179;
_Bool __result_obj__216;
    come_block_sline=self->come_block_sline;
    come_block=(struct buffer*)come_increment_ref_count(self->come_block);
    come_params=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 1539, "struct list$1CVALUE$ph*"))));
    static int thread_num=0;
    thread_num++;
    __right_value0 = (void*)0;
    var_name=(char*)come_increment_ref_count(xsprintf("__thread_info%d",thread_num));
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    type_=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)(__right_value1=map$2char$phsType$ph_at(info->types,((char*)(__right_value0=xsprintf("pthread_t"))),((void*)0))))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    come_call_finalizer(sType_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    if(    type_==((void*)0)    ) {
        err_msg(info,"pthread_t is not defined");
        __result_obj__211 = 1;
        come_call_finalizer(buffer_finalize, come_block, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sType_finalize, type_, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result_obj__211;
    }
    __right_value0 = (void*)0;
    var_node=(struct sNode*)come_increment_ref_count(store_var((char*)come_increment_ref_count(var_name),((void*)0),((void*)0),(struct sType*)come_increment_ref_count(type_),1,((void*)0),info));
    Value=node_compile(var_node,info);
    if(    !Value    ) {
        __result_obj__212 = 0;
        come_call_finalizer(buffer_finalize, come_block, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sType_finalize, type_, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((var_node) ? var_node = come_decrement_ref_count(var_node, ((struct sNode*)var_node)->finalize, ((struct sNode*)var_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        return __result_obj__212;
    }
    else {
    }
    __right_value0 = (void*)0;
    thread_var_value=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 1561, "struct CVALUE*"))));
    __right_value0 = (void*)0;
    __dec_obj170=come_value->c_value,
    come_value->c_value=(char*)come_increment_ref_count(xsprintf("&%s",thread_var_value->c_value));
    __dec_obj170 = come_decrement_ref_count(__dec_obj170, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj171=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count(thread_var_value->type);
    come_call_finalizer(sType_finalize, __dec_obj171,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_value->var=((void*)0);
    list$1CVALUE$ph_push_back(come_params,(struct CVALUE*)come_increment_ref_count(come_value));
    __right_value0 = (void*)0;
    null_node=(struct sNode*)come_increment_ref_count(create_null_node(info));
    Value_191=node_compile(null_node,info);
    if(    !Value_191    ) {
        __result_obj__213 = 0;
        come_call_finalizer(buffer_finalize, come_block, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sType_finalize, type_, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((var_node) ? var_node = come_decrement_ref_count(var_node, ((struct sNode*)var_node)->finalize, ((struct sNode*)var_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, thread_var_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((null_node) ? null_node = come_decrement_ref_count(null_node, ((struct sNode*)null_node)->finalize, ((struct sNode*)null_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        return __result_obj__213;
    }
    else {
    }
    __right_value0 = (void*)0;
    __dec_obj172=come_value,
    come_value=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    come_call_finalizer(CVALUE_finalize, __dec_obj172,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __right_value0 = (void*)0;
    __dec_obj173=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(come_value->type),(struct sType*)come_increment_ref_count(info->generics_type),info));
    come_call_finalizer(sType_finalize, __dec_obj173,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    list$1CVALUE$ph_push_back(come_params,(struct CVALUE*)come_increment_ref_count(come_value));
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    _inf_value3=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 1580, "struct sNode");
    _inf_obj_value3=(struct sCurrentNode*)come_increment_ref_count(((struct sCurrentNode*)(__right_value1=sCurrentNode_initialize((struct sCurrentNode*)come_increment_ref_count((struct sCurrentNode*)come_calloc_v2(1, sizeof(struct sCurrentNode)*(1), "05call.c", 1580, "struct sCurrentNode*")),info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sCurrentNode_finalize;
    _inf_value3->clone=(void*)sCurrentNode_clone;
    _inf_value3->compile=(void*)sCurrentNode_compile;
    _inf_value3->sline=(void*)sCurrentNode_sline;
    _inf_value3->sline_real=(void*)sNodeBase_sline_real;
    _inf_value3->sname=(void*)sCurrentNode_sname;
    _inf_value3->terminated=(void*)sNodeBase_terminated;
    _inf_value3->kind=(void*)sCurrentNode_kind;
    _inf_value3->no_mutex=(void*)sNodeBase_no_mutex;
    __right_value2 = (void*)0;
    current_stack_frame_node=(struct sNode*)come_increment_ref_count(_inf_value3);
    come_call_finalizer(sCurrentNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    Value_192=node_compile(current_stack_frame_node,info);
    if(    !Value_192    ) {
        __result_obj__214 = 0;
        come_call_finalizer(buffer_finalize, come_block, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sType_finalize, type_, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((var_node) ? var_node = come_decrement_ref_count(var_node, ((struct sNode*)var_node)->finalize, ((struct sNode*)var_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, thread_var_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((null_node) ? null_node = come_decrement_ref_count(null_node, ((struct sNode*)null_node)->finalize, ((struct sNode*)null_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        ((current_stack_frame_node) ? current_stack_frame_node = come_decrement_ref_count(current_stack_frame_node, ((struct sNode*)current_stack_frame_node)->finalize, ((struct sNode*)current_stack_frame_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        return __result_obj__214;
    }
    else {
    }
    __right_value0 = (void*)0;
    current_stack_frame_value=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    __right_value0 = (void*)0;
    fun_name=(char*)come_increment_ref_count(xsprintf("__thread_fun%d",thread_num));
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    come_block2=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 1590, "struct buffer*"))));
    __right_value0 = (void*)0;
    class_name=(char*)come_increment_ref_count(xsprintf("__current_stack%d__",info->current_stack_num));
    buffer_append_format(come_block2,"void* %s(%s* parent)\n",fun_name,class_name);
    __right_value0 = (void*)0;
    buffer_append_str(come_block2,((char*)(__right_value0=buffer_to_string(come_block))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    current_stack_frame_struct=info->current_stack_frame_struct;
    __right_value0 = (void*)0;
    info->current_stack_frame_struct=((struct sClass*)(__right_value0=map$2char$phsClass$ph_operator_load_element(info->classes,class_name)));
    come_call_finalizer(sClass_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    source3=(struct buffer*)come_increment_ref_count(info->source);
    p=info->p;
    head=info->head;
    sline=info->sline;
    __dec_obj174=info->source,
    info->source=(struct buffer*)come_increment_ref_count(come_block2);
    come_call_finalizer(buffer_finalize, __dec_obj174,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    info->sline=come_block_sline;
    __right_value0 = (void*)0;
    node=(struct sNode*)come_increment_ref_count(parse_function(info));
    in_method_block=info->in_method_block;
    info->in_method_block=1;
    Value_193=node_compile(node,info);
    if(    !Value_193    ) {
        __result_obj__215 = 0;
        come_call_finalizer(buffer_finalize, come_block, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sType_finalize, type_, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((var_node) ? var_node = come_decrement_ref_count(var_node, ((struct sNode*)var_node)->finalize, ((struct sNode*)var_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, thread_var_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((null_node) ? null_node = come_decrement_ref_count(null_node, ((struct sNode*)null_node)->finalize, ((struct sNode*)null_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        ((current_stack_frame_node) ? current_stack_frame_node = come_decrement_ref_count(current_stack_frame_node, ((struct sNode*)current_stack_frame_node)->finalize, ((struct sNode*)current_stack_frame_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, current_stack_frame_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(buffer_finalize, come_block2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (class_name = come_decrement_ref_count(class_name, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(buffer_finalize, source3, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        return __result_obj__215;
    }
    else {
    }
    info->in_method_block=in_method_block;
    __dec_obj175=info->source,
    info->source=(struct buffer*)come_increment_ref_count(source3);
    come_call_finalizer(buffer_finalize, __dec_obj175,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    info->p=p;
    info->head=head;
    info->sline=sline;
    info->current_stack_frame_struct=current_stack_frame_struct;
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    fun_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 1627, "struct CVALUE*"))));
    __right_value0 = (void*)0;
    __dec_obj176=fun_value->c_value,
    fun_value->c_value=(char*)come_increment_ref_count(xsprintf("(((void* (*)(void*))(%s)))",fun_name));
    __dec_obj176 = come_decrement_ref_count(__dec_obj176, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj177=come_value->type,
    come_value->type=((void*)0);
    come_call_finalizer(sType_finalize, __dec_obj177,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_value->var=((void*)0);
    list$1CVALUE$ph_add(come_params,(struct CVALUE*)come_increment_ref_count(fun_value));
    list$1CVALUE$ph_add(come_params,(struct CVALUE*)come_increment_ref_count(current_stack_frame_value));
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    buf=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 1637, "struct buffer*"))));
    (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
    __right_value0 = (void*)0;
    fun_name_194=(char*)come_increment_ref_count(xsprintf("pthread_create"));
    buffer_append_str(buf,"(");
    buffer_append_str(buf,fun_name_194);
    buffer_append_str(buf,"(");
    j=0;
    for(    o2_saved=(struct list$1CVALUE$ph*)come_increment_ref_count(come_params),it=list$1CVALUE$ph_begin(o2_saved)    ;    !list$1CVALUE$ph_end(o2_saved)    ;    it=list$1CVALUE$ph_next(o2_saved)    ){
        buffer_append_str(buf,it->c_value);
        if(        j!=list$1CVALUE$ph_length(come_params)-1        ) {
            buffer_append_str(buf,",");
        }
        j++;
    }
    come_call_finalizer(list$1CVALUE$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    buffer_append_str(buf,")");
    buffer_append_str(buf,", ");
    buffer_append_str(buf,thread_var_value->c_value);
    buffer_append_str(buf,")");
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    come_value_195=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 1660, "struct CVALUE*"))));
    __right_value0 = (void*)0;
    __dec_obj178=come_value_195->c_value,
    come_value_195->c_value=(char*)come_increment_ref_count(buffer_to_string(buf));
    __dec_obj178 = come_decrement_ref_count(__dec_obj178, (void*)0, (void*)0, 0,0, (void*)0);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __right_value2 = (void*)0;
    type=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)(__right_value1=map$2char$phsType$ph_at(info->types,((char*)(__right_value0=xsprintf("pthread_t"))),((void*)0))))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    come_call_finalizer(sType_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    if(    type==((void*)0)    ) {
        err_msg(info,"pthread_t is not defined");
    }
    __dec_obj179=come_value_195->type,
    come_value_195->type=(struct sType*)come_increment_ref_count(type);
    come_call_finalizer(sType_finalize, __dec_obj179,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_value_195->var=((void*)0);
    add_come_last_code(info,"%s",come_value_195->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_195));
    __result_obj__216 = 1;
    come_call_finalizer(buffer_finalize, come_block, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sType_finalize, type_, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    ((var_node) ? var_node = come_decrement_ref_count(var_node, ((struct sNode*)var_node)->finalize, ((struct sNode*)var_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, thread_var_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    ((null_node) ? null_node = come_decrement_ref_count(null_node, ((struct sNode*)null_node)->finalize, ((struct sNode*)null_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    ((current_stack_frame_node) ? current_stack_frame_node = come_decrement_ref_count(current_stack_frame_node, ((struct sNode*)current_stack_frame_node)->finalize, ((struct sNode*)current_stack_frame_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, current_stack_frame_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(buffer_finalize, come_block2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (class_name = come_decrement_ref_count(class_name, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(buffer_finalize, source3, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, fun_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (fun_name_194 = come_decrement_ref_count(fun_name_194, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(CVALUE_finalize, come_value_195, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__216;
}

static void sComeCallNode_finalize(struct sComeCallNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(    self!=((void*)0)&&self->come_block!=((void*)0)    ) {
        come_call_finalizer(buffer_finalize, self->come_block, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static struct sType* map$2char$phsType$ph_at(struct map$2char$phsType$ph* self, char* key, struct sType* default_value){
struct sType* __result_obj__206;
unsigned int hash;
unsigned int it;
struct sType* __result_obj__207;
struct sType* __result_obj__208;
struct sType* __result_obj__209;
struct sType* __result_obj__210;
    if(    self==((void*)0)    ) {
        __result_obj__206 = (struct sType*)come_increment_ref_count(default_value);
        come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        come_call_finalizer(sType_finalize, __result_obj__206, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__206;
    }
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(    1    ) {
        if(        self->item_existance[it]        ) {
            if(            string_equals(self->keys[it],key)            ) {
                __result_obj__207 = (struct sType*)come_increment_ref_count(self->items[it]);
                come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, __result_obj__207, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__207;
            }
            it++;
            if(            it>=self->size            ) {
                it=0;
            }
            else if(            it==hash            ) {
                __result_obj__208 = (struct sType*)come_increment_ref_count(default_value);
                come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                come_call_finalizer(sType_finalize, __result_obj__208, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__208;
            }
        }
        else {
            __result_obj__209 = (struct sType*)come_increment_ref_count(default_value);
            come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            come_call_finalizer(sType_finalize, __result_obj__209, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__209;
        }
    }
    __result_obj__210 = (struct sType*)come_increment_ref_count(default_value);
    come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sType_finalize, __result_obj__210, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__210;
}

struct sComeJoinNode* sComeJoinNode_initialize(struct sComeJoinNode* self, struct sNode* node, struct sInfo* info){
void* __right_value0 = (void*)0;
struct sNode* __dec_obj180;
struct sComeJoinNode* __result_obj__217;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj180=self->node,
    self->node=(struct sNode*)come_increment_ref_count(node);
    (__dec_obj180 ? __dec_obj180 = come_decrement_ref_count(__dec_obj180, ((struct sNode*)__dec_obj180)->finalize, ((struct sNode*)__dec_obj180)->_protocol_obj, 0,0, (void*)0) :0);
    __result_obj__217 = (struct sComeJoinNode*)come_increment_ref_count(self);
    come_call_finalizer(sComeJoinNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(sComeJoinNode_finalize, __result_obj__217, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__217;
}

char* sComeJoinNode_kind(struct sComeJoinNode* self){
void* __right_value0 = (void*)0;
char* __result_obj__218;
    __result_obj__218 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string("sComeJoinNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__218 = come_decrement_ref_count(__result_obj__218, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__218;
}

_Bool sComeJoinNode_terminated(struct sComeJoinNode* self){
    return 0;
}

_Bool sComeJoinNode_compile(struct sComeJoinNode* self, struct sInfo* info){
struct sNode* node;
_Bool Value;
_Bool __result_obj__219;
void* __right_value0 = (void*)0;
struct CVALUE* come_value;
void* __right_value1 = (void*)0;
struct buffer* buf;
struct CVALUE* come_value_196;
char* __dec_obj181;
void* __right_value2 = (void*)0;
struct sType* __exception_result_var_b86;
struct sType* __exception_result_var_b87;
struct sType* __dec_obj182;
_Bool __result_obj__220;
    node=(struct sNode*)come_increment_ref_count(self->node);
    Value=node_compile(node,info);
    if(    !Value    ) {
        __result_obj__219 = 0;
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        return __result_obj__219;
    }
    else {
    }
    come_value=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    __right_value0 = (void*)0;
    buf=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 1707, "struct buffer*"))));
    buffer_append_str(buf,"pthread_join(");
    buffer_append_str(buf,come_value->c_value);
    buffer_append_str(buf,", 0)");
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    come_value_196=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 1712, "struct CVALUE*"))));
    __right_value0 = (void*)0;
    __dec_obj181=come_value_196->c_value,
    come_value_196->c_value=(char*)come_increment_ref_count(buffer_to_string(buf));
    __dec_obj181 = come_decrement_ref_count(__dec_obj181, (void*)0, (void*)0, 0,0, (void*)0);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj182=come_value_196->type,
    come_value_196->type=(struct sType*)come_increment_ref_count((come_push_stackframe("05call.c", 1714, 85),__exception_result_var_b86=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 1714, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),0,info,0), come_pop_stackframe(), __exception_result_var_b86));
    come_call_finalizer(sType_finalize, __dec_obj182,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_value_196->var=((void*)0);
    add_come_last_code(info,"%s",come_value_196->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_196));
    __result_obj__220 = 1;
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value_196, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__220;
}

static void sComeJoinNode_finalize(struct sComeJoinNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)    ) {
        ((self->node) ? self->node = come_decrement_ref_count(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
}

struct sComePollNode* sComePollNode_initialize(struct sComePollNode* self, struct list$1sNode$ph* vars, struct list$1sBlock$ph* blocks, struct sBlock* else_block, int time_out, struct sInfo* info){
void* __right_value0 = (void*)0;
struct list$1sNode$ph* __dec_obj183;
struct list$1sBlock$ph* __dec_obj184;
struct sBlock* __dec_obj185;
struct sComePollNode* __result_obj__221;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj183=self->vars,
    self->vars=(struct list$1sNode$ph*)come_increment_ref_count(vars);
    come_call_finalizer(list$1sNode$ph_finalize, __dec_obj183,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj184=self->blocks,
    self->blocks=(struct list$1sBlock$ph*)come_increment_ref_count(blocks);
    come_call_finalizer(list$1sBlock$ph_finalize, __dec_obj184,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj185=self->else_block,
    self->else_block=(struct sBlock*)come_increment_ref_count(else_block);
    come_call_finalizer(sBlock_finalize, __dec_obj185,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    self->time_out=time_out;
    __result_obj__221 = (struct sComePollNode*)come_increment_ref_count(self);
    come_call_finalizer(sComePollNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, vars, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1sBlock$ph$p_finalize, blocks, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sBlock_finalize, else_block, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sComePollNode_finalize, __result_obj__221, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__221;
}

char* sComePollNode_kind(struct sComePollNode* self){
void* __right_value0 = (void*)0;
char* __result_obj__222;
    __result_obj__222 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string("sComePollNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__222 = come_decrement_ref_count(__result_obj__222, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__222;
}

_Bool sComePollNode_terminated(struct sComePollNode* self){
    return 1;
}

_Bool sComePollNode_compile(struct sComePollNode* self, struct sInfo* info){
struct list$1sNode$ph* vars;
struct list$1sBlock$ph* blocks;
int time_out;
int n;
struct list$1sNode$ph* o2_saved;
struct sNode* it;
_Bool Value;
_Bool __result_obj__229;
void* __right_value0 = (void*)0;
struct CVALUE* come_value;
int n_199;
struct list$1sNode$ph* o2_saved_200;
struct sNode* it_201;
_Bool __result_obj__236;
    vars=(struct list$1sNode$ph*)come_increment_ref_count(self->vars);
    blocks=(struct list$1sBlock$ph*)come_increment_ref_count(self->blocks);
    time_out=self->time_out;
    static int var_num=0;
    var_num++;
    add_come_code(info,"struct pollfd fds%d[%d];\n",var_num,list$1sNode$ph_length(vars));
    n=0;
    for(    o2_saved=(struct list$1sNode$ph*)come_increment_ref_count(self->vars),it=list$1sNode$ph_begin(o2_saved)    ;    !list$1sNode$ph_end(o2_saved)    ;    it=list$1sNode$ph_next(o2_saved)    ){
        Value=node_compile(it,info);
        if(        !Value        ) {
            __result_obj__229 = 0;
            come_call_finalizer(list$1sNode$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(list$1sNode$ph$p_finalize, vars, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(list$1sBlock$ph$p_finalize, blocks, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result_obj__229;
        }
        else {
        }
        come_value=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        add_come_code(info,"fds%d[%d].fd = %s[0];\n",var_num,n,come_value->c_value);
        add_come_code(info,"fds%d[%d].events = %d;\n",var_num,n,0x001);
        n++;
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer(list$1sNode$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    add_come_code(info,"int poll_ret%d = poll(fds%d, %d, %d);\n",var_num,var_num,list$1sNode$ph_length(vars),time_out);
    add_come_code(info,"if(poll_ret%d > 0) {\n",var_num);
    n_199=0;
    for(    o2_saved_200=(struct list$1sNode$ph*)come_increment_ref_count(self->vars),it_201=list$1sNode$ph_begin(o2_saved_200)    ;    !list$1sNode$ph_end(o2_saved_200)    ;    it_201=list$1sNode$ph_next(o2_saved_200)    ){
        add_come_code(info,"if(fds%d[%d].revents & %d) {\n",var_num,n_199,0x001);
        __right_value0 = (void*)0;
        transpile_block(((struct sBlock*)(__right_value0=list$1sBlock$ph_operator_load_element(blocks,n_199))),((void*)0),((void*)0),info,0,0);
        come_call_finalizer(sBlock_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        add_come_code(info,"}\n");
        n_199++;
    }
    come_call_finalizer(list$1sNode$ph$p_finalize, o2_saved_200, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    add_come_code(info,"}\n");
    add_come_code(info,"else {\n",var_num);
    transpile_block(self->else_block,((void*)0),((void*)0),info,0,0);
    add_come_code(info,"}\n");
    __result_obj__236 = 1;
    come_call_finalizer(list$1sNode$ph$p_finalize, vars, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1sBlock$ph$p_finalize, blocks, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__236;
}

static void list$1sBlock$ph_finalize(struct list$1sBlock$ph* self){
struct list_item$1sBlock$ph* it;
struct list_item$1sBlock$ph* prev_it;
    if(    self==((void*)0)    ) {
        return;
    }
    it=self->head;
    while(    it!=((void*)0)    ) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sBlock$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sBlock$ph$p_finalize(struct list_item$1sBlock$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        come_call_finalizer(sBlock_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void sComePollNode_finalize(struct sComePollNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(    self!=((void*)0)&&self->vars!=((void*)0)    ) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->vars, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->blocks!=((void*)0)    ) {
        come_call_finalizer(list$1sBlock$ph$p_finalize, self->blocks, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->else_block!=((void*)0)    ) {
        come_call_finalizer(sBlock_finalize, self->else_block, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void list$1sBlock$ph$p_finalize(struct list$1sBlock$ph* self){
struct list_item$1sBlock$ph* it;
struct list_item$1sBlock$ph* prev_it;
    if(    self==((void*)0)    ) {
        return;
    }
    it=self->head;
    while(    it!=((void*)0)    ) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sBlock$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static int list$1sNode$ph_length(struct list$1sNode$ph* self){
    if(    self==((void*)0)    ) {
        return 0;
    }
    return self->len;
}

static struct sNode* list$1sNode$ph_begin(struct list$1sNode$ph* self){
struct sNode* result;
struct sNode* __result_obj__223;
struct sNode* __result_obj__224;
struct sNode* result_197;
struct sNode* __result_obj__225;
    if(    self==((void*)0)    ) {
        memset(&result,0,sizeof(struct sNode*));
        __result_obj__223 = result;
        return __result_obj__223;
    }
    self->it=self->head;
    if(    self->it    ) {
        __result_obj__224 = self->it->item;
        return __result_obj__224;
    }
    memset(&result_197,0,sizeof(struct sNode*));
    __result_obj__225 = result_197;
    return __result_obj__225;
}

static _Bool list$1sNode$ph_end(struct list$1sNode$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNode$ph_next(struct list$1sNode$ph* self){
struct sNode* result;
struct sNode* __result_obj__226;
struct sNode* __result_obj__227;
struct sNode* result_198;
struct sNode* __result_obj__228;
    if(    self==((void*)0)||self->it==((void*)0)    ) {
        memset(&result,0,sizeof(struct sNode*));
        __result_obj__226 = result;
        return __result_obj__226;
    }
    self->it=self->it->next;
    if(    self->it    ) {
        __result_obj__227 = self->it->item;
        return __result_obj__227;
    }
    memset(&result_198,0,sizeof(struct sNode*));
    __result_obj__228 = result_198;
    return __result_obj__228;
}

static struct sBlock* list$1sBlock$ph$p_operator_load_element(struct list$1sBlock$ph* self, int position){
struct sBlock* default_value;
struct sBlock* __result_obj__230;
struct list_item$1sBlock$ph* it;
int i;
struct sBlock* __result_obj__231;
struct sBlock* default_value_202;
struct sBlock* __result_obj__232;
    if(    self==((void*)0)    ) {
        memset(&default_value,0,sizeof(struct sBlock*));
        __result_obj__230 = (struct sBlock*)come_increment_ref_count(default_value);
        come_call_finalizer(sBlock_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        come_call_finalizer(sBlock_finalize, __result_obj__230, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__230;
        come_call_finalizer(sBlock_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    position<0    ) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(    it!=((void*)0)    ) {
        if(        position==i        ) {
            __result_obj__231 = (struct sBlock*)come_increment_ref_count(it->item);
            come_call_finalizer(sBlock_finalize, __result_obj__231, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__231;
        }
        it=it->next;
        i++;
    }
    memset(&default_value_202,0,sizeof(struct sBlock*));
    __result_obj__232 = (struct sBlock*)come_increment_ref_count(default_value_202);
    come_call_finalizer(sBlock_finalize, default_value_202, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sBlock_finalize, __result_obj__232, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__232;
}

static struct sBlock* list$1sBlock$ph_operator_load_element(struct list$1sBlock$ph* self, int position){
struct sBlock* default_value;
struct sBlock* __result_obj__233;
struct list_item$1sBlock$ph* it;
int i;
struct sBlock* __result_obj__234;
struct sBlock* default_value_203;
struct sBlock* __result_obj__235;
    if(    self==((void*)0)    ) {
        memset(&default_value,0,sizeof(struct sBlock*));
        __result_obj__233 = (struct sBlock*)come_increment_ref_count(default_value);
        come_call_finalizer(sBlock_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        come_call_finalizer(sBlock_finalize, __result_obj__233, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__233;
        come_call_finalizer(sBlock_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    position<0    ) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(    it!=((void*)0)    ) {
        if(        position==i        ) {
            __result_obj__234 = (struct sBlock*)come_increment_ref_count(it->item);
            come_call_finalizer(sBlock_finalize, __result_obj__234, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__234;
        }
        it=it->next;
        i++;
    }
    memset(&default_value_203,0,sizeof(struct sBlock*));
    __result_obj__235 = (struct sBlock*)come_increment_ref_count(default_value_203);
    come_call_finalizer(sBlock_finalize, default_value_203, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sBlock_finalize, __result_obj__235, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__235;
}

struct sLambdaCall* sLambdaCall_initialize(struct sLambdaCall* self, struct sNode* node, struct list$1tuple2$2char$phsNode$ph$ph* params, struct sInfo* info){
void* __right_value0 = (void*)0;
struct sNode* __dec_obj186;
struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj187;
struct sLambdaCall* __result_obj__237;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj186=self->node,
    self->node=(struct sNode*)come_increment_ref_count(node);
    (__dec_obj186 ? __dec_obj186 = come_decrement_ref_count(__dec_obj186, ((struct sNode*)__dec_obj186)->finalize, ((struct sNode*)__dec_obj186)->_protocol_obj, 0,0, (void*)0) :0);
    __right_value0 = (void*)0;
    __dec_obj187=self->params,
    self->params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_clone(params));
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph_finalize, __dec_obj187,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __result_obj__237 = (struct sLambdaCall*)come_increment_ref_count(self);
    come_call_finalizer(sLambdaCall_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(sLambdaCall_finalize, __result_obj__237, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__237;
}

char* sLambdaCall_kind(struct sLambdaCall* self){
void* __right_value0 = (void*)0;
char* __result_obj__238;
    __result_obj__238 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string("sLambdaCall"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__238 = come_decrement_ref_count(__result_obj__238, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__238;
}

_Bool sLambdaCall_compile(struct sLambdaCall* self, struct sInfo* info){
struct sNode* node;
struct list$1tuple2$2char$phsNode$ph$ph* params;
_Bool Value;
_Bool __result_obj__239;
void* __right_value0 = (void*)0;
struct CVALUE* come_value;
struct sType* lambda_type;
_Bool __result_obj__240;
struct sType* result_type;
void* __right_value1 = (void*)0;
struct list$1CVALUE$ph* come_params;
_Bool __result_obj__241;
int i;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved;
struct tuple2$2char$phsNode$ph* it;
struct tuple2$2char$phsNode$ph* multiple_assign_var13
;char* label=0;
struct sNode* node_204=0;
_Bool Value_205;
_Bool __result_obj__242;
struct CVALUE* come_value_206;
struct sType* __dec_obj188;
_Bool _conditional_value_X0;
void* __right_value2 = (void*)0;
_Bool _conditional_value_X1;
struct buffer* buf;
int j;
struct list$1CVALUE$ph* o2_saved_207;
struct CVALUE* it_208;
struct CVALUE* come_value2;
char* __dec_obj189;
struct sType* __dec_obj190;
_Bool __result_obj__243;
    node=(struct sNode*)come_increment_ref_count(self->node);
    params=self->params;
    Value=node_compile(node,info);
    if(    !Value    ) {
        __result_obj__239 = 0;
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        return __result_obj__239;
    }
    else {
    }
    come_value=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    lambda_type=come_value->type;
    if(    lambda_type->mResultType==((void*)0)    ) {
        err_msg(info,"invalid lambda type");
        __result_obj__240 = 1;
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result_obj__240;
    }
    __right_value0 = (void*)0;
    result_type=(struct sType*)come_increment_ref_count(sType_clone(lambda_type->mResultType));
    result_type->mStatic=0;
    __right_value0 = (void*)0;
    come_params=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 1831, "struct list$1CVALUE$ph*"))));
    if(    list$1sType$ph_length(lambda_type->mParamTypes)!=list$1tuple2$2char$phsNode$ph$ph_length(params)&&!lambda_type->mVarArgs    ) {
        err_msg(info,"invalid param number. function param number is %d. caller param number is %d",list$1sType$ph_length(lambda_type->mParamTypes),list$1tuple2$2char$phsNode$ph$ph_length(params));
        __result_obj__241 = 1;
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result_obj__241;
    }
    i=0;
    for(    o2_saved=params,it=list$1tuple2$2char$phsNode$ph$ph_begin(o2_saved)    ;    !list$1tuple2$2char$phsNode$ph$ph_end(o2_saved)    ;    it=list$1tuple2$2char$phsNode$ph$ph_next(o2_saved)    ){
        multiple_assign_var13=it;
        label=(char*)come_increment_ref_count(multiple_assign_var13->v1);
        node_204=(struct sNode*)come_increment_ref_count(multiple_assign_var13->v2);
        Value_205=node_compile(node_204,info);
        if(        !Value_205        ) {
            __result_obj__242 = 0;
            (label = come_decrement_ref_count(label, (void*)0, (void*)0, 0, 0, (void*)0));
            ((node_204) ? node_204 = come_decrement_ref_count(node_204, ((struct sNode*)node_204)->finalize, ((struct sNode*)node_204)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result_obj__242;
        }
        else {
        }
        __right_value0 = (void*)0;
        come_value_206=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        __right_value0 = (void*)0;
        __dec_obj188=come_value_206->type,
        come_value_206->type=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(come_value_206->type),(struct sType*)come_increment_ref_count(info->generics_type),info));
        come_call_finalizer(sType_finalize, __dec_obj188,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(        __right_value0 = (void*)0,         ({(_conditional_value_X0=(lambda_type->mVarArgs&&((struct sType*)(__right_value0=list$1sType$ph_operator_load_element(lambda_type->mParamTypes,i)))==((void*)0)));        come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        _conditional_value_X0;})        ) {
        }
        else {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            check_assign_type(((char*)(__right_value1=xsprintf("calling param #\%s",((char*)(__right_value0=int_to_string(i)))))),((struct sType*)(__right_value2=list$1sType$ph_operator_load_element(lambda_type->mParamTypes,i))),come_value_206->type,come_value_206,0,1,1,info);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            come_call_finalizer(sType_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            if(            __right_value0 = (void*)0,             ({(_conditional_value_X1=(((struct sType*)(__right_value0=list$1sType$ph_operator_load_element(lambda_type->mParamTypes,i)))->mHeap&&come_value_206->type->mHeap));            come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            _conditional_value_X1;})            ) {
                __right_value0 = (void*)0;
                std_move(((struct sType*)(__right_value0=list$1sType$ph_operator_load_element(lambda_type->mParamTypes,i))),come_value_206->type,come_value_206,info);
                come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            }
        }
        list$1CVALUE$ph_push_back(come_params,(struct CVALUE*)come_increment_ref_count(come_value_206));
        i++;
        (label = come_decrement_ref_count(label, (void*)0, (void*)0, 0, 0, (void*)0));
        ((node_204) ? node_204 = come_decrement_ref_count(node_204, ((struct sNode*)node_204)->finalize, ((struct sNode*)node_204)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, come_value_206, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    buf=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 1863, "struct buffer*"))));
    buffer_append_str(buf,"(");
    buffer_append_str(buf,come_value->c_value);
    buffer_append_str(buf,")");
    buffer_append_str(buf,"(");
    j=0;
    for(    o2_saved_207=(struct list$1CVALUE$ph*)come_increment_ref_count(come_params),it_208=list$1CVALUE$ph_begin(o2_saved_207)    ;    !list$1CVALUE$ph_end(o2_saved_207)    ;    it_208=list$1CVALUE$ph_next(o2_saved_207)    ){
        buffer_append_str(buf,it_208->c_value);
        if(        j!=list$1CVALUE$ph_length(come_params)-1        ) {
            buffer_append_str(buf,",");
        }
        j++;
    }
    come_call_finalizer(list$1CVALUE$ph$p_finalize, o2_saved_207, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    buffer_append_str(buf,")");
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    come_value2=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 1882, "struct CVALUE*"))));
    __right_value0 = (void*)0;
    __dec_obj189=come_value2->c_value,
    come_value2->c_value=(char*)come_increment_ref_count(buffer_to_string(buf));
    __dec_obj189 = come_decrement_ref_count(__dec_obj189, (void*)0, (void*)0, 0,0, (void*)0);
    if(    lambda_type->mResultType->mHeap    ) {
        append_object_to_right_values(come_value2,(struct sType*)come_increment_ref_count(lambda_type->mResultType),info,0,((void*)0),((void*)0),((void*)0));
    }
    __right_value0 = (void*)0;
    __dec_obj190=come_value2->type,
    come_value2->type=(struct sType*)come_increment_ref_count(sType_clone(result_type));
    come_call_finalizer(sType_finalize, __dec_obj190,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(    come_value2->type    ) {
        come_value2->type->mStatic=0;
    }
    come_value2->var=((void*)0);
    add_come_last_code(info,"%s",come_value2->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2));
    __result_obj__243 = 1;
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__243;
}

static void sLambdaCall_finalize(struct sLambdaCall* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)    ) {
        ((self->node) ? self->node = come_decrement_ref_count(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->params!=((void*)0)    ) {
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, self->params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

struct sVarArgTypeName* sVarArgTypeName_initialize(struct sVarArgTypeName* self, struct sType* type, struct sInfo* info){
void* __right_value0 = (void*)0;
struct sType* __dec_obj191;
struct sVarArgTypeName* __result_obj__244;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj191=self->type,
    self->type=(struct sType*)come_increment_ref_count(type);
    come_call_finalizer(sType_finalize, __dec_obj191,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __result_obj__244 = (struct sVarArgTypeName*)come_increment_ref_count(self);
    come_call_finalizer(sVarArgTypeName_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sVarArgTypeName_finalize, __result_obj__244, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__244;
}

char* sVarArgTypeName_kind(struct sVarArgTypeName* self){
void* __right_value0 = (void*)0;
char* __result_obj__245;
    __result_obj__245 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string("sVarArgTypeName"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__245 = come_decrement_ref_count(__result_obj__245, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__245;
}

_Bool sVarArgTypeName_compile(struct sVarArgTypeName* self, struct sInfo* info){
struct sType* type;
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct CVALUE* come_value;
char* __dec_obj192;
struct sType* __dec_obj193;
_Bool __result_obj__246;
    type=(struct sType*)come_increment_ref_count(self->type);
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 1921, "struct CVALUE*"))));
    __right_value0 = (void*)0;
    __dec_obj192=come_value->c_value,
    come_value->c_value=(char*)come_increment_ref_count(make_type_name_string(type,info,0,0,0));
    __dec_obj192 = come_decrement_ref_count(__dec_obj192, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj193=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count(type);
    come_call_finalizer(sType_finalize, __dec_obj193,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_value->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value));
    __result_obj__246 = 1;
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__246;
}

static void sVarArgTypeName_finalize(struct sVarArgTypeName* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

struct sInnerAttribute* sInnerAttribute_initialize(struct sInnerAttribute* self, char* attr, struct sInfo* info){
void* __right_value0 = (void*)0;
char* __dec_obj194;
struct sInnerAttribute* __result_obj__247;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj194=self->attr,
    self->attr=(char*)come_increment_ref_count(attr);
    __dec_obj194 = come_decrement_ref_count(__dec_obj194, (void*)0, (void*)0, 0,0, (void*)0);
    __result_obj__247 = (struct sInnerAttribute*)come_increment_ref_count(self);
    come_call_finalizer(sInnerAttribute_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    (attr = come_decrement_ref_count(attr, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sInnerAttribute_finalize, __result_obj__247, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__247;
}

char* sInnerAttribute_kind(struct sInnerAttribute* self){
void* __right_value0 = (void*)0;
char* __result_obj__248;
    __result_obj__248 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string("sInnerAttribute"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__248 = come_decrement_ref_count(__result_obj__248, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__248;
}

_Bool sInnerAttribute_compile(struct sInnerAttribute* self, struct sInfo* info){
char* attr;
_Bool __result_obj__249;
    attr=(char*)come_increment_ref_count(self->attr);
    add_come_code(info,"__attribute__%s",attr);
    __result_obj__249 = 1;
    (attr = come_decrement_ref_count(attr, (void*)0, (void*)0, 0, 0, (void*)0));
    return __result_obj__249;
}

static void sInnerAttribute_finalize(struct sInnerAttribute* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(    self!=((void*)0)&&self->attr!=((void*)0)    ) {
        (self->attr = come_decrement_ref_count(self->attr, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

struct sNode* parse_function_call(char* fun_name, struct sInfo* info, _Bool come_){
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct list$1sType$ph* method_generics_types;
struct tuple3$3sType$phchar$ph_Bool$* __exception_result_var_b88;
struct tuple3$3sType$phchar$ph_Bool$* __exception_result_var_b89;
struct tuple3$3sType$phchar$ph_Bool$* multiple_assign_var14
;struct sType* type=0;
char* name=0;
_Bool err=0;
int __exception_result_var_b90;
struct list$1tuple2$2char$phsNode$ph$ph* params;
_Bool _va_arg;
char* p;
int sline;
_Bool err_flag;
char* label;
char* __dec_obj195;
char* __dec_obj196;
_Bool no_comma;
_Bool in_fun_param;
_Bool type_name_exp;
struct sNode* node;
struct sNode* __dec_obj197;
struct buffer* method_block;
int method_block_sline;
char* head;
char* tail;
struct buffer* __dec_obj203;
int len;
char* mem;
struct sNode* _inf_value4;
struct sFunCallNode* _inf_obj_value4;
void* __right_value2 = (void*)0;
struct sNode* node_211;
struct sNode* __dec_obj209;
struct sNode* __result_obj__255;
    method_generics_types=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05call.c", 1959, "struct list$1sType$ph*"))));
    if(    *info->p==60    ) {
        info->p++;
        skip_spaces_and_lf(info);
        while(        1        ) {
            if(            *info->p==0            ) {
                err_msg(info,"unexpected source end");
                exit(2);
            }
            else if(            *info->p==62            ) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            else if(            *info->p==44            ) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                __right_value0 = (void*)0;
                multiple_assign_var14=(come_push_stackframe("05call.c", 1980, 88),__exception_result_var_b89=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=parse_type(info,0,0,0))), come_pop_stackframe(), __exception_result_var_b89);
                type=(struct sType*)come_increment_ref_count(multiple_assign_var14->v1);
                name=(char*)come_increment_ref_count(multiple_assign_var14->v2);
                err=multiple_assign_var14->v3;
                come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                if(                !err                ) {
                    err_msg(info,"invalid method generics paramtor type");
                    exit(2);
                }
                __right_value0 = (void*)0;
                list$1sType$ph_push_back(method_generics_types,(struct sType*)come_increment_ref_count(sType_clone(type)));
                come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
            }
        }
    }
    (come_push_stackframe("05call.c", 1992, 89),__exception_result_var_b90=expected_next_character(40,info), come_pop_stackframe(), __exception_result_var_b90);
    skip_spaces_and_lf(info);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "05call.c", 1996, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
    _va_arg=info->va_arg;
    if(    charp_operator_equals(fun_name,"__builtin_va_arg")    ) {
        info->va_arg=1;
    }
    while(    1    ) {
        if(        *info->p==41        ) {
            info->p++;
            skip_spaces_and_lf(info);
            break;
        }
        p=info->p;
        sline=info->sline;
        err_flag=0;
        __right_value0 = (void*)0;
        label=(char*)come_increment_ref_count(__builtin_string(""));
        if(        ((*__ctype_b_loc())[(int)((*info->p))]&(unsigned short int)(((((2)<8)?(((1<<(2))<<8)):(((1<<(2))>>8))))))||*info->p==95        ) {
            __right_value0 = (void*)0;
            __dec_obj195=label,
            label=(char*)come_increment_ref_count(parse_word(0,info));
            __dec_obj195 = come_decrement_ref_count(__dec_obj195, (void*)0, (void*)0, 0,0, (void*)0);
            err_flag=1;
        }
        if(        err_flag==1&&*info->p==58        ) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        else {
            __dec_obj196=label,
            label=((void*)0);
            __dec_obj196 = come_decrement_ref_count(__dec_obj196, (void*)0, (void*)0, 0,0, (void*)0);
            info->p=p;
            info->sline=sline;
        }
        no_comma=info->no_comma;
        info->no_comma=1;
        in_fun_param=info->in_fun_param;
        info->in_fun_param=1;
        type_name_exp=0;
        if(        charp_operator_equals(fun_name,"__builtin_types_compatible_p")        ) {
            type_name_exp=1;
        }
        __right_value0 = (void*)0;
        node=(struct sNode*)come_increment_ref_count(expression_v13(info,type_name_exp));
        __right_value0 = (void*)0;
        __dec_obj197=node,
        node=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node),info));
        (__dec_obj197 ? __dec_obj197 = come_decrement_ref_count(__dec_obj197, ((struct sNode*)__dec_obj197)->finalize, ((struct sNode*)__dec_obj197)->_protocol_obj, 0,0, (void*)0) :0);
        info->no_comma=no_comma;
        info->in_fun_param=in_fun_param;
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        list$1tuple2$2char$phsNode$ph$ph_push_back(params,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "05call.c", 2050, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(label),(struct sNode*)come_increment_ref_count(node))));
        skip_spaces_and_lf(info);
        if(        *info->p==44        ) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        else if(        *info->p==41        ) {
            info->p++;
            skip_spaces_and_lf(info);
            (label = come_decrement_ref_count(label, (void*)0, (void*)0, 0, 0, (void*)0));
            ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            break;
        }
        (label = come_decrement_ref_count(label, (void*)0, (void*)0, 0, 0, (void*)0));
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    info->va_arg=_va_arg;
    skip_spaces_and_lf(info);
    method_block=((void*)0);
    method_block_sline=0;
    if(    *info->p==123    ) {
        head=info->p;
        method_block_sline=info->sline;
        __right_value0 = (void*)0;
        ((char*)(__right_value0=skip_block(info,0)));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        tail=info->p;
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __dec_obj203=method_block,
        method_block=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 2080, "struct buffer*"))));
        come_call_finalizer(buffer_finalize, __dec_obj203,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        len=tail-head;
        __right_value0 = (void*)0;
        mem=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len+1)), "05call.c", 2083, "char*"));
        memcpy(mem,head,len);
        mem[len]=0;
        buffer_append_str(method_block,mem);
        buffer_append_str(method_block,"\n");
        (mem = come_decrement_ref_count(mem, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    skip_spaces_and_lf(info);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    _inf_value4=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2093, "struct sNode");
    _inf_obj_value4=(struct sFunCallNode*)come_increment_ref_count(((struct sFunCallNode*)(__right_value1=sFunCallNode_initialize((struct sFunCallNode*)come_increment_ref_count((struct sFunCallNode*)come_calloc_v2(1, sizeof(struct sFunCallNode)*(1), "05call.c", 2093, "struct sFunCallNode*")),fun_name,params,(struct list$1sType$ph*)come_increment_ref_count(method_generics_types),(struct buffer*)come_increment_ref_count(method_block),method_block_sline,info))));
    _inf_value4->_protocol_obj=_inf_obj_value4;
    _inf_value4->finalize=(void*)sFunCallNode_finalize;
    _inf_value4->clone=(void*)sFunCallNode_clone;
    _inf_value4->compile=(void*)sFunCallNode_compile;
    _inf_value4->sline=(void*)sNodeBase_sline;
    _inf_value4->sline_real=(void*)sNodeBase_sline_real;
    _inf_value4->sname=(void*)sNodeBase_sname;
    _inf_value4->terminated=(void*)sFunCallNode_terminated;
    _inf_value4->kind=(void*)sFunCallNode_kind;
    _inf_value4->no_mutex=(void*)sNodeBase_no_mutex;
    node_211=(struct sNode*)come_increment_ref_count(_inf_value4);
    come_call_finalizer(sFunCallNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __right_value0 = (void*)0;
    __dec_obj209=node_211,
    node_211=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_211),info));
    (__dec_obj209 ? __dec_obj209 = come_decrement_ref_count(__dec_obj209, ((struct sNode*)__dec_obj209)->finalize, ((struct sNode*)__dec_obj209)->_protocol_obj, 0,0, (void*)0) :0);
    skip_spaces_and_lf(info);
    __result_obj__255 = (struct sNode*)come_increment_ref_count(node_211);
    come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(buffer_finalize, method_block, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    ((node_211) ? node_211 = come_decrement_ref_count(node_211, ((struct sNode*)node_211)->finalize, ((struct sNode*)node_211)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    ((__result_obj__255) ? __result_obj__255 = come_decrement_ref_count(__result_obj__255, ((struct sNode*)__result_obj__255)->finalize, ((struct sNode*)__result_obj__255)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    return __result_obj__255;
}

static void tuple3$3sType$phchar$ph_Bool$$p_finalize(struct tuple3$3sType$phchar$ph_Bool$* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)    ) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_push_back(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item){
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__250;
void* __right_value0 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem;
struct tuple2$2char$phsNode$ph* __dec_obj198;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_209;
struct tuple2$2char$phsNode$ph* __dec_obj199;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_210;
struct tuple2$2char$phsNode$ph* __dec_obj200;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__251;
    if(    self==((void*)0)    ) {
        __result_obj__250 = self;
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result_obj__250;
    }
    if(    self->len==0    ) {
        litem=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./neo-c.h", 1166, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj198=litem->item,
        litem->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsNode$ph_finalize, __dec_obj198,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(    self->len==1    ) {
        __right_value0 = (void*)0;
        litem_209=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./neo-c.h", 1176, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_209->prev=self->head;
        litem_209->next=((void*)0);
        __dec_obj199=litem_209->item,
        litem_209->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsNode$ph_finalize, __dec_obj199,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem_209;
        self->head->next=litem_209;
    }
    else {
        __right_value0 = (void*)0;
        litem_210=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./neo-c.h", 1186, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_210->prev=self->tail;
        litem_210->next=((void*)0);
        __dec_obj200=litem_210->item,
        litem_210->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsNode$ph_finalize, __dec_obj200,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail->next=litem_210;
        self->tail=litem_210;
    }
    self->len++;
    __result_obj__251 = self;
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__251;
}

static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_initialize(struct tuple2$2char$phsNode$ph* self, char* v1, struct sNode* v2){
char* __dec_obj201;
struct sNode* __dec_obj202;
struct tuple2$2char$phsNode$ph* __result_obj__252;
    __dec_obj201=self->v1,
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj201 = come_decrement_ref_count(__dec_obj201, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj202=self->v2,
    self->v2=(struct sNode*)come_increment_ref_count(v2);
    (__dec_obj202 ? __dec_obj202 = come_decrement_ref_count(__dec_obj202, ((struct sNode*)__dec_obj202)->finalize, ((struct sNode*)__dec_obj202)->_protocol_obj, 0,0, (void*)0) :0);
    __result_obj__252 = (struct tuple2$2char$phsNode$ph*)come_increment_ref_count(self);
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 0, (void*)0));
    ((v2) ? v2 = come_decrement_ref_count(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __result_obj__252, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__252;
}

static struct sFunCallNode* sFunCallNode_clone(struct sFunCallNode* self){
struct sFunCallNode* __result_obj__253;
void* __right_value0 = (void*)0;
struct sFunCallNode* result;
char* __dec_obj204;
char* __dec_obj205;
struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj206;
struct list$1sType$ph* __dec_obj207;
struct buffer* __dec_obj208;
struct sFunCallNode* __result_obj__254;
    if(    self==(void*)0    ) {
        __result_obj__253 = (void*)0;
        return __result_obj__253;
    }
    result=(struct sFunCallNode*)come_increment_ref_count((struct sFunCallNode*)come_calloc_v2(1, sizeof(struct sFunCallNode)*(1), "sFunCallNode_clone", 3, "struct sFunCallNode*"));
    if(    self!=((void*)0)    ) {
        result->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj204=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sFunCallNode_clone", 5, "char*"));
        __dec_obj204 = come_decrement_ref_count(__dec_obj204, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->fun_name!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj205=result->fun_name,
        result->fun_name=(char*)come_increment_ref_count((char*)come_memdup(self->fun_name, "sFunCallNode_clone", 7, "char*"));
        __dec_obj205 = come_decrement_ref_count(__dec_obj205, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->params!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj206=result->params,
        result->params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_clone(self->params));
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph_finalize, __dec_obj206,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->method_generics_types!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj207=result->method_generics_types,
        result->method_generics_types=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->method_generics_types));
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj207,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->method_block!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj208=result->method_block,
        result->method_block=(struct buffer*)come_increment_ref_count(buffer_clone(self->method_block));
        come_call_finalizer(buffer_finalize, __dec_obj208,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result->method_block_sline=self->method_block_sline;
    }
    __result_obj__254 = result;
    come_call_finalizer(sFunCallNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__254;
}

struct sNode* expression_node_v1(struct sInfo* info){
struct sNode* __result_obj__256;
    skip_spaces_and_lf(info);
    err_msg(info,"invalid character(1)(%d)(%c)",*info->p,*info->p);
    stackframe_v2();
    exit(3);
    __result_obj__256 = (struct sNode*)come_increment_ref_count((struct sNode*)((void*)0));
    ((__result_obj__256) ? __result_obj__256 = come_decrement_ref_count(__result_obj__256, ((struct sNode*)__result_obj__256)->finalize, ((struct sNode*)__result_obj__256)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    return __result_obj__256;
}

char* parse_inner_attribute(struct sInfo* info){
char* head;
_Bool in_dquort;
int brace_num;
char* tail;
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct buffer* buf;
char* __result_obj__257;
    head=info->p;
    if(    *info->p==40    ) {
        in_dquort=0;
        brace_num=0;
        while(        *info->p        ) {
            if(            *info->p==34            ) {
                info->p++;
                in_dquort=!in_dquort;
            }
            else if(            in_dquort            ) {
                info->p++;
            }
            else if(            *info->p==40            ) {
                info->p++;
                brace_num++;
            }
            else if(            *info->p==41            ) {
                info->p++;
                brace_num--;
                if(                brace_num==0                ) {
                    break;
                }
            }
            else {
                info->p++;
            }
        }
    }
    skip_spaces_and_lf(info);
    tail=info->p;
    buf=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 2149, "struct buffer*"))));
    buffer_append(buf,head,tail-head);
    __right_value0 = (void*)0;
    __result_obj__257 = (char*)come_increment_ref_count(((char*)(__right_value0=buffer_to_string(buf))));
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__257 = come_decrement_ref_count(__result_obj__257, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__257;
}

struct sNode* expression_node_v98(struct sInfo* info){
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
void* __right_value2 = (void*)0;
struct sNode* _inf_value5;
struct sReturnNode* _inf_obj_value5;
void* __right_value3 = (void*)0;
struct sNode* __result_obj__258;
char* head;
struct sNode* value;
char* tail;
struct sNode* __dec_obj210;
struct sNode* _inf_value6;
struct sReturnNode* _inf_obj_value6;
struct sNode* __result_obj__259;
int nest;
char* head_212;
int head_sline;
int sline_real;
char* buf_213;
_Bool is_type_name_;
_Bool is_special_word;
_Bool define_function_pointer_flag;
_Bool lambda_flag;
char* word2;
_Bool fun_name_with_type_name;
_Bool no_output_come_code;
_Bool flag;
char* word2_214;
_Bool call_method_generics_fun_call;
char* __dec_obj211;
void* __right_value4 = (void*)0;
void* __right_value5 = (void*)0;
_Bool _conditional_value_X0;
int nest_215;
_Bool inline_asm;
char* __dec_obj212;
char* __dec_obj213;
char* __dec_obj214;
struct sNode* node;
struct sNode* __result_obj__270;
int __exception_result_var_b91;
_Bool no_comma;
struct sNode* exp;
int __exception_result_var_b92;
struct sNode* exp2;
int __exception_result_var_b93;
struct sNode* __result_obj__271;
char* attr;
struct sNode* _inf_value7;
struct sInnerAttribute* _inf_obj_value7;
struct sNode* __result_obj__274;
char* block_text;
char* contents;
struct sNode* _inf_value8;
struct sCSourceNode* _inf_obj_value8;
struct sNode* __result_obj__277;
struct sNode* node_216;
struct sNode* __result_obj__278;
struct sNode* node_217;
struct sNode* __result_obj__279;
struct sNode* node_218;
struct sNode* __result_obj__280;
struct buffer* come_block;
int come_block_sline;
char* head_219;
char* tail_220;
struct buffer* __dec_obj219;
int len;
char* mem;
char* head_221;
_Bool no_output_come_code_222;
char* tail_223;
struct buffer* __dec_obj220;
int len_224;
char* mem_225;
struct sNode* _inf_value9;
struct sComeCallNode* _inf_obj_value9;
struct sNode* node_226;
struct sNode* __result_obj__283;
struct buffer* come_block_227;
int come_block_sline_228;
int __exception_result_var_b94;
struct sNode* node_229;
int __exception_result_var_b95;
struct sNode* _inf_value10;
struct sComeJoinNode* _inf_obj_value10;
struct sNode* __result_obj__286;
int time_out;
int __exception_result_var_b96;
int __exception_result_var_b97;
struct list$1sNode$ph* vars;
struct list$1sBlock$ph* blocks;
struct sBlock* else_block;
struct sBlock* __dec_obj225;
struct sNode* var_name;
struct sBlock* block;
int __exception_result_var_b98;
struct sNode* _inf_value11;
struct sComePollNode* _inf_obj_value11;
struct sNode* __result_obj__320;
struct sNode* _inf_value12;
struct sFuncNode* _inf_obj_value12;
struct sNode* __result_obj__323;
struct sNode* _inf_value13;
struct sLineNode* _inf_obj_value13;
struct sNode* __result_obj__326;
struct sNode* _inf_value14;
struct sSNameNode* _inf_obj_value14;
struct sNode* __result_obj__329;
struct sNode* _inf_value15;
struct sCallerFuncNode* _inf_obj_value15;
struct sNode* __result_obj__332;
struct sNode* _inf_value16;
struct sCallerLineNode* _inf_obj_value16;
struct sNode* __result_obj__335;
struct sNode* _inf_value17;
struct sCallerSNameNode* _inf_obj_value17;
struct sNode* __result_obj__338;
struct tuple3$3sType$phchar$ph_Bool$* __exception_result_var_b99;
struct tuple3$3sType$phchar$ph_Bool$* __exception_result_var_b100;
struct tuple3$3sType$phchar$ph_Bool$* multiple_assign_var15
;struct sType* type=0;
char* name=0;
_Bool err=0;
struct sNode* _inf_value18;
struct sVarArgTypeName* _inf_obj_value18;
struct sNode* __result_obj__341;
struct sNode* node_239;
struct sNode* __result_obj__342;
struct buffer* buf2;
char* word;
int __exception_result_var_b101;
struct list$1sNode$ph* exps;
struct sNode* exp_240;
int __exception_result_var_b102;
struct sNode* _inf_value19;
struct sInlineAssembler* _inf_obj_value19;
struct sNode* __result_obj__345;
struct tuple3$3sType$phchar$ph_Bool$* __exception_result_var_b103;
struct tuple3$3sType$phchar$ph_Bool$* __exception_result_var_b104;
struct tuple3$3sType$phchar$ph_Bool$* multiple_assign_var16
;struct sType* type_241=0;
char* name_242=0;
_Bool err_243=0;
int __exception_result_var_b105;
int __exception_result_var_b106;
char* base_fun_name;
char* fun_name;
struct sNode* node_244;
struct sNode* __result_obj__346;
struct buffer* fun_name_245;
char* buf2_246;
struct sNode* node_247;
struct sNode* __result_obj__347;
struct sNode* node_248;
struct sNode* __result_obj__348;
struct sNode* node_249;
struct sNode* __result_obj__349;
struct sNode* node_250;
struct sNode* __result_obj__350;
struct sNode* node_251;
struct sNode* __result_obj__351;
struct sNode* __result_obj__352;
    skip_spaces_and_lf(info);
    if(    parsecmp("return",info)    ) {
        info->p+=strlen("return");
        skip_spaces_and_lf(info);
        if(        *info->p==59        ) {
            _inf_value5=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2165, "struct sNode");
            _inf_obj_value5=(struct sReturnNode*)come_increment_ref_count(((struct sReturnNode*)(__right_value2=sReturnNode_initialize((struct sReturnNode*)come_increment_ref_count((struct sReturnNode*)come_calloc_v2(1, sizeof(struct sReturnNode)*(1), "05call.c", 2165, "struct sReturnNode*")),((void*)0),(char*)come_increment_ref_count(__builtin_string("0")),info))));
            _inf_value5->_protocol_obj=_inf_obj_value5;
            _inf_value5->finalize=(void*)sReturnNode_finalize;
            _inf_value5->clone=(void*)sReturnNode_clone;
            _inf_value5->compile=(void*)sReturnNode_compile;
            _inf_value5->sline=(void*)sNodeBase_sline;
            _inf_value5->sline_real=(void*)sNodeBase_sline_real;
            _inf_value5->sname=(void*)sNodeBase_sname;
            _inf_value5->terminated=(void*)sNodeBase_terminated;
            _inf_value5->kind=(void*)sReturnNode_kind;
            _inf_value5->no_mutex=(void*)sNodeBase_no_mutex;
            __result_obj__258 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value3=_inf_value5)));
            come_call_finalizer(sReturnNode_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((__right_value3) ? __right_value3 = come_decrement_ref_count(__right_value3, ((struct sNode*)__right_value3)->finalize, ((struct sNode*)__right_value3)->_protocol_obj, 1, 0,(void*)0):(void*)0);
            ((__result_obj__258) ? __result_obj__258 = come_decrement_ref_count(__result_obj__258, ((struct sNode*)__result_obj__258)->finalize, ((struct sNode*)__result_obj__258)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__258;
        }
        else {
            head=info->p;
            __right_value0 = (void*)0;
            value=(struct sNode*)come_increment_ref_count(expression_v13(info,0));
            tail=info->p;
            __right_value0 = (void*)0;
            __dec_obj210=value,
            value=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(value),info));
            (__dec_obj210 ? __dec_obj210 = come_decrement_ref_count(__dec_obj210, ((struct sNode*)__dec_obj210)->finalize, ((struct sNode*)__dec_obj210)->_protocol_obj, 0,0, (void*)0) :0);
            char buf[tail-head+1];
            memset(&buf, 0, sizeof(buf));
            memcpy(buf,head,tail-head);
            buf[tail-head]=0;
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            _inf_value6=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2177, "struct sNode");
            _inf_obj_value6=(struct sReturnNode*)come_increment_ref_count(((struct sReturnNode*)(__right_value2=sReturnNode_initialize((struct sReturnNode*)come_increment_ref_count((struct sReturnNode*)come_calloc_v2(1, sizeof(struct sReturnNode)*(1), "05call.c", 2177, "struct sReturnNode*")),(struct sNode*)come_increment_ref_count(value),(char*)come_increment_ref_count(__builtin_string(buf)),info))));
            _inf_value6->_protocol_obj=_inf_obj_value6;
            _inf_value6->finalize=(void*)sReturnNode_finalize;
            _inf_value6->clone=(void*)sReturnNode_clone;
            _inf_value6->compile=(void*)sReturnNode_compile;
            _inf_value6->sline=(void*)sNodeBase_sline;
            _inf_value6->sline_real=(void*)sNodeBase_sline_real;
            _inf_value6->sname=(void*)sNodeBase_sname;
            _inf_value6->terminated=(void*)sNodeBase_terminated;
            _inf_value6->kind=(void*)sReturnNode_kind;
            _inf_value6->no_mutex=(void*)sNodeBase_no_mutex;
            __right_value3 = (void*)0;
            __result_obj__259 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value3=_inf_value6)));
            ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            come_call_finalizer(sReturnNode_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((__right_value3) ? __right_value3 = come_decrement_ref_count(__right_value3, ((struct sNode*)__right_value3)->finalize, ((struct sNode*)__right_value3)->_protocol_obj, 1, 0,(void*)0):(void*)0);
            ((__result_obj__259) ? __result_obj__259 = come_decrement_ref_count(__result_obj__259, ((struct sNode*)__result_obj__259)->finalize, ((struct sNode*)__result_obj__259)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__259;
            ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
    }
    else if(    *info->p==47&&*(info->p+1)==42    ) {
        nest=0;
        while(        1        ) {
            if(            *info->p==47&&*(info->p+1)==42            ) {
                info->p+=2;
                nest++;
            }
            else if(            *info->p==42&&*(info->p+1)==47            ) {
                info->p+=2;
                nest--;
                if(                nest==0                ) {
                    break;
                }
            }
            else if(            *info->p==10            ) {
                info->p++;
                info->sline++;
            }
            else {
                info->p++;
            }
        }
    }
    else if(    *info->p==47&&*(info->p+1)==47    ) {
        info->p+=2;
        while(        1        ) {
            if(            *info->p==10            ) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            else if(            *info->p==0            ) {
                break;
            }
            else {
                info->p++;
            }
        }
    }
    else if(    (((*__ctype_b_loc())[(int)((*info->p))]&(unsigned short int)(((((2)<8)?(((1<<(2))<<8)):(((1<<(2))>>8))))))||*info->p==95)&&!((*info->p==76||*info->p==108||*info->p==115||*info->p==83||*info->p==98||*info->p==66||*info->p==104||*info->p==72)&&*(info->p+1)==34||(*info->p==76&&*(info->p+1)==39))    ) {
        head_212=info->p;
        head_sline=info->sline;
        sline_real=info->sline_real;
        info->sline_real=info->sline;
        __right_value0 = (void*)0;
        buf_213=(char*)come_increment_ref_count(backtrace_parse_word(info));
        is_type_name_=is_type_name(buf_213,info);
        static char* is_special_word_array[25]={ "if", "while", "for", "switch", "return", "sizeof", "offsetof", "isheap", "ispointer", "__typeof__"
                                    , "dynamic_typeof", "typeof", "gc_inc", "gc_dec", "gc_dec_nofree", "case", "_Alignof"
                                    , "_Alignas", "__alignof__", "_Atomic", "borrow", "dupe", "clone", "__builtin_offsetof", "_Generic" };
        is_special_word=charpa_contained(is_special_word_array,25,buf_213);
        define_function_pointer_flag=0;
        if(        !is_special_word&&*info->p==40&&*(info->p+1)!=42        ) {
            __right_value0 = (void*)0;
            ((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=backtrace_parse_type(0,info)));
            come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            if(            *info->p==40            ) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                *info->p==42                ) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    define_function_pointer_flag=1;
                }
            }
            info->p=head_212;
            info->sline=head_sline;
        }
        lambda_flag=0;
        if(        !is_special_word&&is_type_name_        ) {
            info->p=head_212;
            info->sline=head_sline;
            __right_value0 = (void*)0;
            ((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=backtrace_parse_type(0,info)));
            come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            __right_value0 = (void*)0;
            word2=(char*)come_increment_ref_count(backtrace_parse_word(info));
            if(            string_operator_equals(word2,"lambda")            ) {
                lambda_flag=1;
            }
            info->p=head_212;
            info->sline=head_sline;
            (word2 = come_decrement_ref_count(word2, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        fun_name_with_type_name=0;
        if(        !is_special_word        ) {
            info->p=head_212;
            info->sline=head_sline;
            no_output_come_code=info->no_output_come_code;
            info->no_output_come_code=1;
            flag=0;
            while(            ((*__ctype_b_loc())[(int)((*info->p))]&(unsigned short int)(((((2)<8)?(((1<<(2))<<8)):(((1<<(2))>>8))))))||*info->p==95            ) {
                flag=1;
                __right_value0 = (void*)0;
                word2_214=(char*)come_increment_ref_count(parse_word(0,info));
                (word2_214 = come_decrement_ref_count(word2_214, (void*)0, (void*)0, 0, 0, (void*)0));
            }
            while(            *info->p==42||*info->p==37            ) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            while(            *info->p==91&&*(info->p+1)==93            ) {
                info->p+=2;
                skip_spaces_and_lf(info);
            }
            if(            flag&&*info->p==58&&*(info->p+1)==58            ) {
                info->p+=2;
                skip_spaces_and_lf(info);
                if(                ((*__ctype_b_loc())[(int)((*info->p))]&(unsigned short int)(((((2)<8)?(((1<<(2))<<8)):(((1<<(2))>>8))))))||*info->p==95                ) {
                    fun_name_with_type_name=1;
                }
            }
            info->no_output_come_code=no_output_come_code;
            info->p=head_212;
            info->sline=head_sline;
        }
        call_method_generics_fun_call=0;
        if(        !is_special_word        ) {
            info->p=head_212;
            info->sline=head_sline;
            if(            ((*__ctype_b_loc())[(int)((*info->p))]&(unsigned short int)(((((2)<8)?(((1<<(2))<<8)):(((1<<(2))>>8))))))||*info->p==95            ) {
                __right_value0 = (void*)0;
                __dec_obj211=buf_213,
                buf_213=(char*)come_increment_ref_count(parse_word(0,info));
                __dec_obj211 = come_decrement_ref_count(__dec_obj211, (void*)0, (void*)0, 0,0, (void*)0);
            }
            if(            __right_value0 = (void*)0,             __right_value1 = (void*)0,             __right_value2 = (void*)0,             __right_value3 = (void*)0,             ({(_conditional_value_X0=(!is_type_name(buf_213,info)&&((struct sVar*)(__right_value2=map$2char$phsVar$ph_operator_load_element(info->lv_table->mVars,((char*)(__right_value1=__builtin_string(buf_213))))))==((void*)0)&&((struct sVar*)(__right_value5=map$2char$phsVar$ph_operator_load_element(info->gv_table->mVars,((char*)(__right_value4=__builtin_string(buf_213))))))==((void*)0)&&*info->p==60));            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            come_call_finalizer(sVar_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value4 = come_decrement_ref_count(__right_value4, (void*)0, (void*)0, 1, 0, (void*)0));
            come_call_finalizer(sVar_finalize, __right_value5, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            _conditional_value_X0;})            ) {
                nest_215=0;
                while(                *info->p                ) {
                    if(                    *info->p==60                    ) {
                        info->p++;
                        nest_215++;
                    }
                    else if(                    *info->p==62                    ) {
                        info->p++;
                        if(                        nest_215==0                        ) {
                            break;
                        }
                    }
                    else if(                    *info->p==10||*info->p==59                    ) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
                if(                *info->p==40                ) {
                    call_method_generics_fun_call=1;
                }
            }
            info->p=head_212;
            info->sline=head_sline;
        }
        inline_asm=0;
        if(        !is_special_word        ) {
            info->p=head_212;
            info->sline=head_sline;
            __right_value0 = (void*)0;
            __dec_obj212=buf_213,
            buf_213=(char*)come_increment_ref_count(parse_word(0,info));
            __dec_obj212 = come_decrement_ref_count(__dec_obj212, (void*)0, (void*)0, 0,0, (void*)0);
            if(            string_operator_equals(buf_213,"asm")||string_operator_equals(buf_213,"__asm")||string_operator_equals(buf_213,"__asm__")            ) {
                if(                *info->p==40                ) {
                    inline_asm=1;
                }
                else {
                    if(                    ((*__ctype_b_loc())[(int)((*info->p))]&(unsigned short int)(((((2)<8)?(((1<<(2))<<8)):(((1<<(2))>>8))))))||*info->p==95                    ) {
                        __right_value0 = (void*)0;
                        __dec_obj213=buf_213,
                        buf_213=(char*)come_increment_ref_count(parse_word(0,info));
                        __dec_obj213 = come_decrement_ref_count(__dec_obj213, (void*)0, (void*)0, 0,0, (void*)0);
                        if(                        *info->p==40                        ) {
                            inline_asm=1;
                        }
                    }
                }
            }
            info->p=head_212;
            info->sline=head_sline;
        }
        skip_spaces_and_lf(info);
        __right_value0 = (void*)0;
        __dec_obj214=buf_213,
        buf_213=(char*)come_increment_ref_count(parse_word(0,info));
        __dec_obj214 = come_decrement_ref_count(__dec_obj214, (void*)0, (void*)0, 0,0, (void*)0);
        skip_spaces_and_lf(info);
        if(        lambda_flag        ) {
            info->p=head_212;
            info->sline=head_sline;
            __right_value0 = (void*)0;
            node=(struct sNode*)come_increment_ref_count(parse_function(info));
            info->sline_real=sline_real;
            __result_obj__270 = (struct sNode*)come_increment_ref_count(node);
            ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            (buf_213 = come_decrement_ref_count(buf_213, (void*)0, (void*)0, 0, 0, (void*)0));
            ((__result_obj__270) ? __result_obj__270 = come_decrement_ref_count(__result_obj__270, ((struct sNode*)__result_obj__270)->finalize, ((struct sNode*)__result_obj__270)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__270;
            ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
        else if(        (string_operator_equals(buf_213,"_Static_assert")||string_operator_equals(buf_213,"static_assert"))&&*info->p==40        ) {
            (come_push_stackframe("05call.c", 2403, 90),__exception_result_var_b91=expected_next_character(40,info), come_pop_stackframe(), __exception_result_var_b91);
            no_comma=info->no_comma;
            info->no_comma=1;
            __right_value0 = (void*)0;
            exp=(struct sNode*)come_increment_ref_count(expression_v13(info,0));
            info->no_comma=no_comma;
            (come_push_stackframe("05call.c", 2410, 91),__exception_result_var_b92=expected_next_character(44,info), come_pop_stackframe(), __exception_result_var_b92);
            __right_value0 = (void*)0;
            exp2=(struct sNode*)come_increment_ref_count(expression_v13(info,0));
            (come_push_stackframe("05call.c", 2414, 92),__exception_result_var_b93=expected_next_character(41,info), come_pop_stackframe(), __exception_result_var_b93);
            __right_value0 = (void*)0;
            __result_obj__271 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=static_assert_node((struct sNode*)come_increment_ref_count(exp),(struct sNode*)come_increment_ref_count(exp2),info))));
            ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            ((exp2) ? exp2 = come_decrement_ref_count(exp2, ((struct sNode*)exp2)->finalize, ((struct sNode*)exp2)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            (buf_213 = come_decrement_ref_count(buf_213, (void*)0, (void*)0, 0, 0, (void*)0));
            ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0):(void*)0);
            ((__result_obj__271) ? __result_obj__271 = come_decrement_ref_count(__result_obj__271, ((struct sNode*)__result_obj__271)->finalize, ((struct sNode*)__result_obj__271)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__271;
            ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            ((exp2) ? exp2 = come_decrement_ref_count(exp2, ((struct sNode*)exp2)->finalize, ((struct sNode*)exp2)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
        else if(        string_operator_equals(buf_213,"__attribute__")&&*info->p==40        ) {
            __right_value0 = (void*)0;
            attr=(char*)come_increment_ref_count(parse_inner_attribute(info));
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value7=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2422, "struct sNode");
            _inf_obj_value7=(struct sInnerAttribute*)come_increment_ref_count(((struct sInnerAttribute*)(__right_value1=sInnerAttribute_initialize((struct sInnerAttribute*)come_increment_ref_count((struct sInnerAttribute*)come_calloc_v2(1, sizeof(struct sInnerAttribute)*(1), "05call.c", 2422, "struct sInnerAttribute*")),(char*)come_increment_ref_count(attr),info))));
            _inf_value7->_protocol_obj=_inf_obj_value7;
            _inf_value7->finalize=(void*)sInnerAttribute_finalize;
            _inf_value7->clone=(void*)sInnerAttribute_clone;
            _inf_value7->compile=(void*)sInnerAttribute_compile;
            _inf_value7->sline=(void*)sNodeBase_sline;
            _inf_value7->sline_real=(void*)sNodeBase_sline_real;
            _inf_value7->sname=(void*)sNodeBase_sname;
            _inf_value7->terminated=(void*)sNodeBase_terminated;
            _inf_value7->kind=(void*)sInnerAttribute_kind;
            _inf_value7->no_mutex=(void*)sNodeBase_no_mutex;
            __right_value2 = (void*)0;
            __result_obj__274 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value7)));
            (attr = come_decrement_ref_count(attr, (void*)0, (void*)0, 0, 0, (void*)0));
            (buf_213 = come_decrement_ref_count(buf_213, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sInnerAttribute_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
            ((__result_obj__274) ? __result_obj__274 = come_decrement_ref_count(__result_obj__274, ((struct sNode*)__result_obj__274)->finalize, ((struct sNode*)__result_obj__274)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__274;
            (attr = come_decrement_ref_count(attr, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        else if(        string_operator_equals(buf_213,"__c__")&&*info->p==123        ) {
            __right_value0 = (void*)0;
            block_text=(char*)come_increment_ref_count(skip_block(info,0));
            contents=(char*)come_increment_ref_count(block_text);
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value8=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2430, "struct sNode");
            _inf_obj_value8=(struct sCSourceNode*)come_increment_ref_count(((struct sCSourceNode*)(__right_value1=sCSourceNode_initialize((struct sCSourceNode*)come_increment_ref_count((struct sCSourceNode*)come_calloc_v2(1, sizeof(struct sCSourceNode)*(1), "05call.c", 2430, "struct sCSourceNode*")),(char*)come_increment_ref_count(contents),info))));
            _inf_value8->_protocol_obj=_inf_obj_value8;
            _inf_value8->finalize=(void*)sCSourceNode_finalize;
            _inf_value8->clone=(void*)sCSourceNode_clone;
            _inf_value8->compile=(void*)sCSourceNode_compile;
            _inf_value8->sline=(void*)sNodeBase_sline;
            _inf_value8->sline_real=(void*)sNodeBase_sline_real;
            _inf_value8->sname=(void*)sNodeBase_sname;
            _inf_value8->terminated=(void*)sNodeBase_terminated;
            _inf_value8->kind=(void*)sCSourceNode_kind;
            _inf_value8->no_mutex=(void*)sNodeBase_no_mutex;
            __right_value2 = (void*)0;
            __result_obj__277 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value8)));
            (block_text = come_decrement_ref_count(block_text, (void*)0, (void*)0, 0, 0, (void*)0));
            (contents = come_decrement_ref_count(contents, (void*)0, (void*)0, 0, 0, (void*)0));
            (buf_213 = come_decrement_ref_count(buf_213, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sCSourceNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
            ((__result_obj__277) ? __result_obj__277 = come_decrement_ref_count(__result_obj__277, ((struct sNode*)__result_obj__277)->finalize, ((struct sNode*)__result_obj__277)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__277;
            (block_text = come_decrement_ref_count(block_text, (void*)0, (void*)0, 0, 0, (void*)0));
            (contents = come_decrement_ref_count(contents, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        else if(        string_operator_equals(buf_213,"extern")        ) {
            __right_value0 = (void*)0;
            node_216=(struct sNode*)come_increment_ref_count(parse_function(info));
            __result_obj__278 = (struct sNode*)come_increment_ref_count(node_216);
            ((node_216) ? node_216 = come_decrement_ref_count(node_216, ((struct sNode*)node_216)->finalize, ((struct sNode*)node_216)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            (buf_213 = come_decrement_ref_count(buf_213, (void*)0, (void*)0, 0, 0, (void*)0));
            ((__result_obj__278) ? __result_obj__278 = come_decrement_ref_count(__result_obj__278, ((struct sNode*)__result_obj__278)->finalize, ((struct sNode*)__result_obj__278)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__278;
            ((node_216) ? node_216 = come_decrement_ref_count(node_216, ((struct sNode*)node_216)->finalize, ((struct sNode*)node_216)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
        else if(        !gComeC&&(string_operator_equals(buf_213,"string")||string_operator_equals(buf_213,"wstring"))&&*info->p==40        ) {
            __right_value0 = (void*)0;
            node_217=(struct sNode*)come_increment_ref_count(parse_function_call(buf_213,info,0));
            info->sline_real=sline_real;
            __result_obj__279 = (struct sNode*)come_increment_ref_count(node_217);
            ((node_217) ? node_217 = come_decrement_ref_count(node_217, ((struct sNode*)node_217)->finalize, ((struct sNode*)node_217)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            (buf_213 = come_decrement_ref_count(buf_213, (void*)0, (void*)0, 0, 0, (void*)0));
            ((__result_obj__279) ? __result_obj__279 = come_decrement_ref_count(__result_obj__279, ((struct sNode*)__result_obj__279)->finalize, ((struct sNode*)__result_obj__279)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__279;
            ((node_217) ? node_217 = come_decrement_ref_count(node_217, ((struct sNode*)node_217)->finalize, ((struct sNode*)node_217)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
        else if(        is_special_word        ) {
            __right_value0 = (void*)0;
            node_218=(struct sNode*)come_increment_ref_count(string_node_v21(buf_213,head_212,head_sline,info));
            info->sline_real=sline_real;
            __result_obj__280 = (struct sNode*)come_increment_ref_count(node_218);
            ((node_218) ? node_218 = come_decrement_ref_count(node_218, ((struct sNode*)node_218)->finalize, ((struct sNode*)node_218)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            (buf_213 = come_decrement_ref_count(buf_213, (void*)0, (void*)0, 0, 0, (void*)0));
            ((__result_obj__280) ? __result_obj__280 = come_decrement_ref_count(__result_obj__280, ((struct sNode*)__result_obj__280)->finalize, ((struct sNode*)__result_obj__280)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__280;
            ((node_218) ? node_218 = come_decrement_ref_count(node_218, ((struct sNode*)node_218)->finalize, ((struct sNode*)node_218)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
        else if(        gComePthread&&string_operator_equals(buf_213,"come")        ) {
            come_block=((void*)0);
            come_block_sline=0;
            if(            *info->p==123            ) {
                head_219=info->p;
                come_block_sline=info->sline;
                __right_value0 = (void*)0;
                ((char*)(__right_value0=skip_block(info,0)));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                tail_220=info->p;
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                __dec_obj219=come_block,
                come_block=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 2461, "struct buffer*"))));
                come_call_finalizer(buffer_finalize, __dec_obj219,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                len=tail_220-head_219;
                __right_value0 = (void*)0;
                mem=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len+1)), "05call.c", 2464, "char*"));
                memcpy(mem,head_219,len);
                mem[len]=0;
                buffer_append_str(come_block,mem);
                buffer_append_str(come_block,"\n");
                (mem = come_decrement_ref_count(mem, (void*)0, (void*)0, 0, 0, (void*)0));
            }
            else {
                head_221=info->p;
                come_block_sline=info->sline;
                no_output_come_code_222=info->no_output_come_code;
                info->no_output_come_code=1;
                __right_value0 = (void*)0;
                ((struct sNode*)(__right_value0=expression_v13(info,0)));
                ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0):(void*)0);
                info->no_output_come_code=no_output_come_code_222;
                tail_223=info->p;
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                __dec_obj220=come_block,
                come_block=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 2482, "struct buffer*"))));
                come_call_finalizer(buffer_finalize, __dec_obj220,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                len_224=tail_223-head_221;
                __right_value0 = (void*)0;
                mem_225=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_224+1)), "05call.c", 2485, "char*"));
                memcpy(mem_225,head_221,len_224);
                mem_225[len_224]=0;
                buffer_append_str(come_block,"{");
                buffer_append_str(come_block,mem_225);
                buffer_append_str(come_block,"; }");
                buffer_append_str(come_block,"return (void*)0;\n}");
                buffer_append_str(come_block,"\n");
                (mem_225 = come_decrement_ref_count(mem_225, (void*)0, (void*)0, 0, 0, (void*)0));
            }
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value9=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2496, "struct sNode");
            _inf_obj_value9=(struct sComeCallNode*)come_increment_ref_count(((struct sComeCallNode*)(__right_value1=sComeCallNode_initialize((struct sComeCallNode*)come_increment_ref_count((struct sComeCallNode*)come_calloc_v2(1, sizeof(struct sComeCallNode)*(1), "05call.c", 2496, "struct sComeCallNode*")),(struct buffer*)come_increment_ref_count(come_block),come_block_sline,info))));
            _inf_value9->_protocol_obj=_inf_obj_value9;
            _inf_value9->finalize=(void*)sComeCallNode_finalize;
            _inf_value9->clone=(void*)sComeCallNode_clone;
            _inf_value9->compile=(void*)sComeCallNode_compile;
            _inf_value9->sline=(void*)sNodeBase_sline;
            _inf_value9->sline_real=(void*)sNodeBase_sline_real;
            _inf_value9->sname=(void*)sNodeBase_sname;
            _inf_value9->terminated=(void*)sComeCallNode_terminated;
            _inf_value9->kind=(void*)sComeCallNode_kind;
            _inf_value9->no_mutex=(void*)sNodeBase_no_mutex;
            __right_value2 = (void*)0;
            node_226=(struct sNode*)come_increment_ref_count(_inf_value9);
            come_call_finalizer(sComeCallNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            info->sline_real=sline_real;
            __result_obj__283 = (struct sNode*)come_increment_ref_count(node_226);
            come_call_finalizer(buffer_finalize, come_block, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            ((node_226) ? node_226 = come_decrement_ref_count(node_226, ((struct sNode*)node_226)->finalize, ((struct sNode*)node_226)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            (buf_213 = come_decrement_ref_count(buf_213, (void*)0, (void*)0, 0, 0, (void*)0));
            ((__result_obj__283) ? __result_obj__283 = come_decrement_ref_count(__result_obj__283, ((struct sNode*)__result_obj__283)->finalize, ((struct sNode*)__result_obj__283)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__283;
            come_call_finalizer(buffer_finalize, come_block, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            ((node_226) ? node_226 = come_decrement_ref_count(node_226, ((struct sNode*)node_226)->finalize, ((struct sNode*)node_226)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
        else if(        gComePthread&&string_operator_equals(buf_213,"come_join")&&*info->p==40        ) {
            come_block_227=((void*)0);
            come_block_sline_228=0;
            (come_push_stackframe("05call.c", 2505, 93),__exception_result_var_b94=expected_next_character(40,info), come_pop_stackframe(), __exception_result_var_b94);
            __right_value0 = (void*)0;
            node_229=(struct sNode*)come_increment_ref_count(expression_v13(info,0));
            (come_push_stackframe("05call.c", 2507, 94),__exception_result_var_b95=expected_next_character(41,info), come_pop_stackframe(), __exception_result_var_b95);
            info->sline_real=sline_real;
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value10=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2510, "struct sNode");
            _inf_obj_value10=(struct sComeJoinNode*)come_increment_ref_count(((struct sComeJoinNode*)(__right_value1=sComeJoinNode_initialize((struct sComeJoinNode*)come_increment_ref_count((struct sComeJoinNode*)come_calloc_v2(1, sizeof(struct sComeJoinNode)*(1), "05call.c", 2510, "struct sComeJoinNode*")),(struct sNode*)come_increment_ref_count(node_229),info))));
            _inf_value10->_protocol_obj=_inf_obj_value10;
            _inf_value10->finalize=(void*)sComeJoinNode_finalize;
            _inf_value10->clone=(void*)sComeJoinNode_clone;
            _inf_value10->compile=(void*)sComeJoinNode_compile;
            _inf_value10->sline=(void*)sNodeBase_sline;
            _inf_value10->sline_real=(void*)sNodeBase_sline_real;
            _inf_value10->sname=(void*)sNodeBase_sname;
            _inf_value10->terminated=(void*)sComeJoinNode_terminated;
            _inf_value10->kind=(void*)sComeJoinNode_kind;
            _inf_value10->no_mutex=(void*)sNodeBase_no_mutex;
            __right_value2 = (void*)0;
            __result_obj__286 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value10)));
            come_call_finalizer(buffer_finalize, come_block_227, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            ((node_229) ? node_229 = come_decrement_ref_count(node_229, ((struct sNode*)node_229)->finalize, ((struct sNode*)node_229)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            (buf_213 = come_decrement_ref_count(buf_213, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sComeJoinNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
            ((__result_obj__286) ? __result_obj__286 = come_decrement_ref_count(__result_obj__286, ((struct sNode*)__result_obj__286)->finalize, ((struct sNode*)__result_obj__286)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__286;
            come_call_finalizer(buffer_finalize, come_block_227, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            ((node_229) ? node_229 = come_decrement_ref_count(node_229, ((struct sNode*)node_229)->finalize, ((struct sNode*)node_229)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
        else if(        gComePthread&&string_operator_equals(buf_213,"come_poll")&&(*info->p==40||*info->p==123)        ) {
            time_out=1;
            if(            *info->p==40            ) {
                info->p++;
                while(                ((*__ctype_b_loc())[(int)((*info->p))]&(unsigned short int)(((((3)<8)?(((1<<(3))<<8)):(((1<<(3))>>8))))))                ) {
                    time_out=time_out*10+(*info->p-48);
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                (come_push_stackframe("05call.c", 2524, 95),__exception_result_var_b96=expected_next_character(41,info), come_pop_stackframe(), __exception_result_var_b96);
            }
            (come_push_stackframe("05call.c", 2526, 96),__exception_result_var_b97=expected_next_character(123,info), come_pop_stackframe(), __exception_result_var_b97);
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            vars=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "05call.c", 2528, "struct list$1sNode$ph*"))));
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            blocks=(struct list$1sBlock$ph*)come_increment_ref_count(list$1sBlock$ph_initialize((struct list$1sBlock$ph*)come_increment_ref_count((struct list$1sBlock$ph*)come_calloc_v2(1, sizeof(struct list$1sBlock$ph)*(1), "05call.c", 2529, "struct list$1sBlock$ph*"))));
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            else_block=(struct sBlock*)come_increment_ref_count(sBlock_initialize((struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc_v2(1, sizeof(struct sBlock)*(1), "05call.c", 2530, "struct sBlock*"))));
            while(            1            ) {
                if(                ((info->end-info->p)>=strlen("else"))&&memcmp(info->p,"else",strlen("else"))==0                ) {
                    info->p+=strlen("else");
                    skip_spaces_and_lf(info);
                    __right_value0 = (void*)0;
                    __dec_obj225=else_block,
                    else_block=(struct sBlock*)come_increment_ref_count(parse_block(info,0,0));
                    come_call_finalizer(sBlock_finalize, __dec_obj225,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(                    *info->p==125                    ) {
                        break;
                    }
                }
                else {
                    __right_value0 = (void*)0;
                    var_name=(struct sNode*)come_increment_ref_count(expression_v13(info,0));
                    __right_value0 = (void*)0;
                    block=(struct sBlock*)come_increment_ref_count(parse_block(info,0,0));
                    list$1sNode$ph_add(vars,(struct sNode*)come_increment_ref_count(var_name));
                    list$1sBlock$ph_add(blocks,(struct sBlock*)come_increment_ref_count(block));
                    if(                    *info->p==125                    ) {
                        ((var_name) ? var_name = come_decrement_ref_count(var_name, ((struct sNode*)var_name)->finalize, ((struct sNode*)var_name)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                        come_call_finalizer(sBlock_finalize, block, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        break;
                    }
                    ((var_name) ? var_name = come_decrement_ref_count(var_name, ((struct sNode*)var_name)->finalize, ((struct sNode*)var_name)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                    come_call_finalizer(sBlock_finalize, block, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            (come_push_stackframe("05call.c", 2557, 97),__exception_result_var_b98=expected_next_character(125,info), come_pop_stackframe(), __exception_result_var_b98);
            info->sline_real=sline_real;
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value11=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2560, "struct sNode");
            _inf_obj_value11=(struct sComePollNode*)come_increment_ref_count(((struct sComePollNode*)(__right_value1=sComePollNode_initialize((struct sComePollNode*)come_increment_ref_count((struct sComePollNode*)come_calloc_v2(1, sizeof(struct sComePollNode)*(1), "05call.c", 2560, "struct sComePollNode*")),(struct list$1sNode$ph*)come_increment_ref_count(vars),(struct list$1sBlock$ph*)come_increment_ref_count(blocks),(struct sBlock*)come_increment_ref_count(else_block),time_out,info))));
            _inf_value11->_protocol_obj=_inf_obj_value11;
            _inf_value11->finalize=(void*)sComePollNode_finalize;
            _inf_value11->clone=(void*)sComePollNode_clone;
            _inf_value11->compile=(void*)sComePollNode_compile;
            _inf_value11->sline=(void*)sNodeBase_sline;
            _inf_value11->sline_real=(void*)sNodeBase_sline_real;
            _inf_value11->sname=(void*)sNodeBase_sname;
            _inf_value11->terminated=(void*)sComePollNode_terminated;
            _inf_value11->kind=(void*)sComePollNode_kind;
            _inf_value11->no_mutex=(void*)sNodeBase_no_mutex;
            __right_value2 = (void*)0;
            __result_obj__320 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value11)));
            come_call_finalizer(list$1sNode$ph$p_finalize, vars, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(list$1sBlock$ph$p_finalize, blocks, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sBlock_finalize, else_block, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (buf_213 = come_decrement_ref_count(buf_213, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sComePollNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
            ((__result_obj__320) ? __result_obj__320 = come_decrement_ref_count(__result_obj__320, ((struct sNode*)__result_obj__320)->finalize, ((struct sNode*)__result_obj__320)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__320;
            come_call_finalizer(list$1sNode$ph$p_finalize, vars, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(list$1sBlock$ph$p_finalize, blocks, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sBlock_finalize, else_block, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(buf_213,"__func__")||string_operator_equals(buf_213,"__FUNCTION__")        ) {
            info->sline_real=sline_real;
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value12=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2565, "struct sNode");
            _inf_obj_value12=(struct sFuncNode*)come_increment_ref_count(((struct sFuncNode*)(__right_value1=sFuncNode_initialize((struct sFuncNode*)come_increment_ref_count((struct sFuncNode*)come_calloc_v2(1, sizeof(struct sFuncNode)*(1), "05call.c", 2565, "struct sFuncNode*")),info))));
            _inf_value12->_protocol_obj=_inf_obj_value12;
            _inf_value12->finalize=(void*)sFuncNode_finalize;
            _inf_value12->clone=(void*)sFuncNode_clone;
            _inf_value12->compile=(void*)sFuncNode_compile;
            _inf_value12->sline=(void*)sNodeBase_sline;
            _inf_value12->sline_real=(void*)sNodeBase_sline_real;
            _inf_value12->sname=(void*)sNodeBase_sname;
            _inf_value12->terminated=(void*)sNodeBase_terminated;
            _inf_value12->kind=(void*)sFuncNode_kind;
            _inf_value12->no_mutex=(void*)sNodeBase_no_mutex;
            __right_value2 = (void*)0;
            __result_obj__323 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value12)));
            (buf_213 = come_decrement_ref_count(buf_213, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sFuncNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
            ((__result_obj__323) ? __result_obj__323 = come_decrement_ref_count(__result_obj__323, ((struct sNode*)__result_obj__323)->finalize, ((struct sNode*)__result_obj__323)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__323;
        }
        else if(        string_operator_equals(buf_213,"__line__")||string_operator_equals(buf_213,"__LINE__")        ) {
            info->sline_real=sline_real;
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value13=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2569, "struct sNode");
            _inf_obj_value13=(struct sLineNode*)come_increment_ref_count(((struct sLineNode*)(__right_value1=sLineNode_initialize((struct sLineNode*)come_increment_ref_count((struct sLineNode*)come_calloc_v2(1, sizeof(struct sLineNode)*(1), "05call.c", 2569, "struct sLineNode*")),info))));
            _inf_value13->_protocol_obj=_inf_obj_value13;
            _inf_value13->finalize=(void*)sLineNode_finalize;
            _inf_value13->clone=(void*)sLineNode_clone;
            _inf_value13->compile=(void*)sLineNode_compile;
            _inf_value13->sline=(void*)sNodeBase_sline;
            _inf_value13->sline_real=(void*)sNodeBase_sline_real;
            _inf_value13->sname=(void*)sNodeBase_sname;
            _inf_value13->terminated=(void*)sNodeBase_terminated;
            _inf_value13->kind=(void*)sLineNode_kind;
            _inf_value13->no_mutex=(void*)sNodeBase_no_mutex;
            __right_value2 = (void*)0;
            __result_obj__326 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value13)));
            (buf_213 = come_decrement_ref_count(buf_213, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sLineNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
            ((__result_obj__326) ? __result_obj__326 = come_decrement_ref_count(__result_obj__326, ((struct sNode*)__result_obj__326)->finalize, ((struct sNode*)__result_obj__326)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__326;
        }
        else if(        string_operator_equals(buf_213,"__sname__")        ) {
            info->sline_real=sline_real;
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value14=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2573, "struct sNode");
            _inf_obj_value14=(struct sSNameNode*)come_increment_ref_count(((struct sSNameNode*)(__right_value1=sSNameNode_initialize((struct sSNameNode*)come_increment_ref_count((struct sSNameNode*)come_calloc_v2(1, sizeof(struct sSNameNode)*(1), "05call.c", 2573, "struct sSNameNode*")),info))));
            _inf_value14->_protocol_obj=_inf_obj_value14;
            _inf_value14->finalize=(void*)sSNameNode_finalize;
            _inf_value14->clone=(void*)sSNameNode_clone;
            _inf_value14->compile=(void*)sSNameNode_compile;
            _inf_value14->sline=(void*)sNodeBase_sline;
            _inf_value14->sline_real=(void*)sNodeBase_sline_real;
            _inf_value14->sname=(void*)sNodeBase_sname;
            _inf_value14->terminated=(void*)sNodeBase_terminated;
            _inf_value14->kind=(void*)sSNameNode_kind;
            _inf_value14->no_mutex=(void*)sNodeBase_no_mutex;
            __right_value2 = (void*)0;
            __result_obj__329 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value14)));
            (buf_213 = come_decrement_ref_count(buf_213, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sSNameNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
            ((__result_obj__329) ? __result_obj__329 = come_decrement_ref_count(__result_obj__329, ((struct sNode*)__result_obj__329)->finalize, ((struct sNode*)__result_obj__329)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__329;
        }
        else if(        string_operator_equals(buf_213,"__caller_func__")        ) {
            info->sline_real=sline_real;
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value15=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2577, "struct sNode");
            _inf_obj_value15=(struct sCallerFuncNode*)come_increment_ref_count(((struct sCallerFuncNode*)(__right_value1=sCallerFuncNode_initialize((struct sCallerFuncNode*)come_increment_ref_count((struct sCallerFuncNode*)come_calloc_v2(1, sizeof(struct sCallerFuncNode)*(1), "05call.c", 2577, "struct sCallerFuncNode*")),info))));
            _inf_value15->_protocol_obj=_inf_obj_value15;
            _inf_value15->finalize=(void*)sCallerFuncNode_finalize;
            _inf_value15->clone=(void*)sCallerFuncNode_clone;
            _inf_value15->compile=(void*)sCallerFuncNode_compile;
            _inf_value15->sline=(void*)sNodeBase_sline;
            _inf_value15->sline_real=(void*)sNodeBase_sline_real;
            _inf_value15->sname=(void*)sNodeBase_sname;
            _inf_value15->terminated=(void*)sNodeBase_terminated;
            _inf_value15->kind=(void*)sCallerFuncNode_kind;
            _inf_value15->no_mutex=(void*)sNodeBase_no_mutex;
            __right_value2 = (void*)0;
            __result_obj__332 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value15)));
            (buf_213 = come_decrement_ref_count(buf_213, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sCallerFuncNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
            ((__result_obj__332) ? __result_obj__332 = come_decrement_ref_count(__result_obj__332, ((struct sNode*)__result_obj__332)->finalize, ((struct sNode*)__result_obj__332)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__332;
        }
        else if(        string_operator_equals(buf_213,"__caller_line__")        ) {
            info->sline_real=sline_real;
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value16=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2581, "struct sNode");
            _inf_obj_value16=(struct sCallerLineNode*)come_increment_ref_count(((struct sCallerLineNode*)(__right_value1=sCallerLineNode_initialize((struct sCallerLineNode*)come_increment_ref_count((struct sCallerLineNode*)come_calloc_v2(1, sizeof(struct sCallerLineNode)*(1), "05call.c", 2581, "struct sCallerLineNode*")),info))));
            _inf_value16->_protocol_obj=_inf_obj_value16;
            _inf_value16->finalize=(void*)sCallerLineNode_finalize;
            _inf_value16->clone=(void*)sCallerLineNode_clone;
            _inf_value16->compile=(void*)sCallerLineNode_compile;
            _inf_value16->sline=(void*)sNodeBase_sline;
            _inf_value16->sline_real=(void*)sNodeBase_sline_real;
            _inf_value16->sname=(void*)sNodeBase_sname;
            _inf_value16->terminated=(void*)sNodeBase_terminated;
            _inf_value16->kind=(void*)sCallerLineNode_kind;
            _inf_value16->no_mutex=(void*)sNodeBase_no_mutex;
            __right_value2 = (void*)0;
            __result_obj__335 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value16)));
            (buf_213 = come_decrement_ref_count(buf_213, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sCallerLineNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
            ((__result_obj__335) ? __result_obj__335 = come_decrement_ref_count(__result_obj__335, ((struct sNode*)__result_obj__335)->finalize, ((struct sNode*)__result_obj__335)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__335;
        }
        else if(        string_operator_equals(buf_213,"__caller_sname__")        ) {
            info->sline_real=sline_real;
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value17=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2585, "struct sNode");
            _inf_obj_value17=(struct sCallerSNameNode*)come_increment_ref_count(((struct sCallerSNameNode*)(__right_value1=sCallerSNameNode_initialize((struct sCallerSNameNode*)come_increment_ref_count((struct sCallerSNameNode*)come_calloc_v2(1, sizeof(struct sCallerSNameNode)*(1), "05call.c", 2585, "struct sCallerSNameNode*")),info))));
            _inf_value17->_protocol_obj=_inf_obj_value17;
            _inf_value17->finalize=(void*)sCallerSNameNode_finalize;
            _inf_value17->clone=(void*)sCallerSNameNode_clone;
            _inf_value17->compile=(void*)sCallerSNameNode_compile;
            _inf_value17->sline=(void*)sNodeBase_sline;
            _inf_value17->sline_real=(void*)sNodeBase_sline_real;
            _inf_value17->sname=(void*)sNodeBase_sname;
            _inf_value17->terminated=(void*)sNodeBase_terminated;
            _inf_value17->kind=(void*)sCallerSNameNode_kind;
            _inf_value17->no_mutex=(void*)sNodeBase_no_mutex;
            __right_value2 = (void*)0;
            __result_obj__338 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value17)));
            (buf_213 = come_decrement_ref_count(buf_213, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sCallerSNameNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
            ((__result_obj__338) ? __result_obj__338 = come_decrement_ref_count(__result_obj__338, ((struct sNode*)__result_obj__338)->finalize, ((struct sNode*)__result_obj__338)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__338;
        }
        else if(        info->va_arg&&is_type_name(buf_213,info)        ) {
            info->p=head_212;
            info->sline=head_sline;
            __right_value0 = (void*)0;
            multiple_assign_var15=(come_push_stackframe("05call.c", 2591, 99),__exception_result_var_b100=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=parse_type(info,0,0,0))), come_pop_stackframe(), __exception_result_var_b100);
            type=(struct sType*)come_increment_ref_count(multiple_assign_var15->v1);
            name=(char*)come_increment_ref_count(multiple_assign_var15->v2);
            err=multiple_assign_var15->v3;
            come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            info->sline_real=sline_real;
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value18=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2594, "struct sNode");
            _inf_obj_value18=(struct sVarArgTypeName*)come_increment_ref_count(((struct sVarArgTypeName*)(__right_value1=sVarArgTypeName_initialize((struct sVarArgTypeName*)come_increment_ref_count((struct sVarArgTypeName*)come_calloc_v2(1, sizeof(struct sVarArgTypeName)*(1), "05call.c", 2594, "struct sVarArgTypeName*")),(struct sType*)come_increment_ref_count(type),info))));
            _inf_value18->_protocol_obj=_inf_obj_value18;
            _inf_value18->finalize=(void*)sVarArgTypeName_finalize;
            _inf_value18->clone=(void*)sVarArgTypeName_clone;
            _inf_value18->compile=(void*)sVarArgTypeName_compile;
            _inf_value18->sline=(void*)sNodeBase_sline;
            _inf_value18->sline_real=(void*)sNodeBase_sline_real;
            _inf_value18->sname=(void*)sNodeBase_sname;
            _inf_value18->terminated=(void*)sNodeBase_terminated;
            _inf_value18->kind=(void*)sVarArgTypeName_kind;
            _inf_value18->no_mutex=(void*)sNodeBase_no_mutex;
            __right_value2 = (void*)0;
            __result_obj__341 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value18)));
            come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
            (buf_213 = come_decrement_ref_count(buf_213, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sVarArgTypeName_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
            ((__result_obj__341) ? __result_obj__341 = come_decrement_ref_count(__result_obj__341, ((struct sNode*)__result_obj__341)->finalize, ((struct sNode*)__result_obj__341)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__341;
            come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        else if(        string_operator_equals(buf_213,"sizeof")||string_operator_equals(buf_213,"_Alignof")||string_operator_equals(buf_213,"_Alignas")||string_operator_equals(buf_213,"__alignof__")||string_operator_equals(buf_213,"offsetof")||string_operator_equals(buf_213,"__builtin_offsetof")||string_operator_equals(buf_213,"_Generic")        ) {
            __right_value0 = (void*)0;
            node_239=(struct sNode*)come_increment_ref_count(string_node_v21(buf_213,head_212,head_sline,info));
            info->sline_real=sline_real;
            __result_obj__342 = (struct sNode*)come_increment_ref_count(node_239);
            ((node_239) ? node_239 = come_decrement_ref_count(node_239, ((struct sNode*)node_239)->finalize, ((struct sNode*)node_239)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            (buf_213 = come_decrement_ref_count(buf_213, (void*)0, (void*)0, 0, 0, (void*)0));
            ((__result_obj__342) ? __result_obj__342 = come_decrement_ref_count(__result_obj__342, ((struct sNode*)__result_obj__342)->finalize, ((struct sNode*)__result_obj__342)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__342;
            ((node_239) ? node_239 = come_decrement_ref_count(node_239, ((struct sNode*)node_239)->finalize, ((struct sNode*)node_239)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
        else if(        inline_asm        ) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            buf2=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 2603, "struct buffer*"))));
            if(            *info->p!=40            ) {
                __right_value0 = (void*)0;
                word=(char*)come_increment_ref_count(parse_word(0,info));
                buffer_append_str(buf2,word);
                (word = come_decrement_ref_count(word, (void*)0, (void*)0, 0, 0, (void*)0));
            }
            (come_push_stackframe("05call.c", 2611, 100),__exception_result_var_b101=expected_next_character(40,info), come_pop_stackframe(), __exception_result_var_b101);
            buffer_append_char(buf2,40);
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            exps=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "05call.c", 2614, "struct list$1sNode$ph*"))));
            while(            1            ) {
                if(                *info->p==40                ) {
                    buffer_append_char(buf2,40);
                    info->p++;
                    __right_value0 = (void*)0;
                    exp_240=(struct sNode*)come_increment_ref_count(expression_v13(info,0));
                    list$1sNode$ph_add(exps,(struct sNode*)come_increment_ref_count(exp_240));
                    (come_push_stackframe("05call.c", 2624, 101),__exception_result_var_b102=expected_next_character(41,info), come_pop_stackframe(), __exception_result_var_b102);
                    buffer_append_char(buf2,41);
                    ((exp_240) ? exp_240 = come_decrement_ref_count(exp_240, ((struct sNode*)exp_240)->finalize, ((struct sNode*)exp_240)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                }
                else if(                *info->p==41                ) {
                    buffer_append_char(buf2,41);
                    info->p++;
                    skip_spaces_and_lf(info);
                    break;
                }
                else if(                *info->p==10                ) {
                    info->sline++;
                    buffer_append_char(buf2,*info->p);
                    info->p++;
                }
                else if(                *info->p==0                ) {
                    err_msg(info,"invalid source end at inline assembler");
                    exit(2);
                }
                else {
                    buffer_append_char(buf2,*info->p);
                    info->p++;
                }
            }
            skip_spaces_and_lf(info);
            info->sline_real=sline_real;
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            _inf_value19=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2650, "struct sNode");
            _inf_obj_value19=(struct sInlineAssembler*)come_increment_ref_count(((struct sInlineAssembler*)(__right_value2=sInlineAssembler_initialize((struct sInlineAssembler*)come_increment_ref_count((struct sInlineAssembler*)come_calloc_v2(1, sizeof(struct sInlineAssembler)*(1), "05call.c", 2650, "struct sInlineAssembler*")),(char*)come_increment_ref_count(buffer_to_string(buf2)),(struct list$1sNode$ph*)come_increment_ref_count(exps),info))));
            _inf_value19->_protocol_obj=_inf_obj_value19;
            _inf_value19->finalize=(void*)sInlineAssembler_finalize;
            _inf_value19->clone=(void*)sInlineAssembler_clone;
            _inf_value19->compile=(void*)sInlineAssembler_compile;
            _inf_value19->sline=(void*)sNodeBase_sline;
            _inf_value19->sline_real=(void*)sNodeBase_sline_real;
            _inf_value19->sname=(void*)sNodeBase_sname;
            _inf_value19->terminated=(void*)sNodeBase_terminated;
            _inf_value19->kind=(void*)sInlineAssembler_kind;
            _inf_value19->no_mutex=(void*)sNodeBase_no_mutex;
            __right_value3 = (void*)0;
            __result_obj__345 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value3=_inf_value19)));
            come_call_finalizer(buffer_finalize, buf2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(list$1sNode$ph$p_finalize, exps, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (buf_213 = come_decrement_ref_count(buf_213, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sInlineAssembler_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((__right_value3) ? __right_value3 = come_decrement_ref_count(__right_value3, ((struct sNode*)__right_value3)->finalize, ((struct sNode*)__right_value3)->_protocol_obj, 1, 0,(void*)0):(void*)0);
            ((__result_obj__345) ? __result_obj__345 = come_decrement_ref_count(__result_obj__345, ((struct sNode*)__result_obj__345)->finalize, ((struct sNode*)__result_obj__345)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__345;
            come_call_finalizer(buffer_finalize, buf2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(list$1sNode$ph$p_finalize, exps, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        fun_name_with_type_name        ) {
            info->p=head_212;
            info->sline=head_sline;
            __right_value0 = (void*)0;
            multiple_assign_var16=(come_push_stackframe("05call.c", 2656, 103),__exception_result_var_b104=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=parse_type(info,0,1,0))), come_pop_stackframe(), __exception_result_var_b104);
            type_241=(struct sType*)come_increment_ref_count(multiple_assign_var16->v1);
            name_242=(char*)come_increment_ref_count(multiple_assign_var16->v2);
            err_243=multiple_assign_var16->v3;
            come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            (come_push_stackframe("05call.c", 2658, 104),__exception_result_var_b105=expected_next_character(58,info), come_pop_stackframe(), __exception_result_var_b105);
            (come_push_stackframe("05call.c", 2659, 105),__exception_result_var_b106=expected_next_character(58,info), come_pop_stackframe(), __exception_result_var_b106);
            __right_value0 = (void*)0;
            base_fun_name=(char*)come_increment_ref_count(parse_word(0,info));
            __right_value0 = (void*)0;
            fun_name=(char*)come_increment_ref_count(create_method_name(type_241,0,base_fun_name,info,1));
            __right_value0 = (void*)0;
            node_244=(struct sNode*)come_increment_ref_count(parse_function_call(fun_name,info,0));
            info->sline_real=sline_real;
            __result_obj__346 = (struct sNode*)come_increment_ref_count(node_244);
            come_call_finalizer(sType_finalize, type_241, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (name_242 = come_decrement_ref_count(name_242, (void*)0, (void*)0, 0, 0, (void*)0));
            (base_fun_name = come_decrement_ref_count(base_fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
            (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
            ((node_244) ? node_244 = come_decrement_ref_count(node_244, ((struct sNode*)node_244)->finalize, ((struct sNode*)node_244)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            (buf_213 = come_decrement_ref_count(buf_213, (void*)0, (void*)0, 0, 0, (void*)0));
            ((__result_obj__346) ? __result_obj__346 = come_decrement_ref_count(__result_obj__346, ((struct sNode*)__result_obj__346)->finalize, ((struct sNode*)__result_obj__346)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__346;
            come_call_finalizer(sType_finalize, type_241, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (name_242 = come_decrement_ref_count(name_242, (void*)0, (void*)0, 0, 0, (void*)0));
            (base_fun_name = come_decrement_ref_count(base_fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
            (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
            ((node_244) ? node_244 = come_decrement_ref_count(node_244, ((struct sNode*)node_244)->finalize, ((struct sNode*)node_244)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
        else if(        *info->p==58&&*(info->p+1)==58        ) {
            info->p+=2;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            fun_name_245=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 2674, "struct buffer*"))));
            buffer_append_str(fun_name_245,buf_213);
            buffer_append_str(fun_name_245,"_");
            __right_value0 = (void*)0;
            buf2_246=(char*)come_increment_ref_count(parse_word(0,info));
            buffer_append_str(fun_name_245,buf2_246);
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            node_247=(struct sNode*)come_increment_ref_count(parse_function_call(((char*)(__right_value0=buffer_to_string(fun_name_245))),info,0));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            info->sline_real=sline_real;
            __result_obj__347 = (struct sNode*)come_increment_ref_count(node_247);
            come_call_finalizer(buffer_finalize, fun_name_245, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (buf2_246 = come_decrement_ref_count(buf2_246, (void*)0, (void*)0, 0, 0, (void*)0));
            ((node_247) ? node_247 = come_decrement_ref_count(node_247, ((struct sNode*)node_247)->finalize, ((struct sNode*)node_247)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            (buf_213 = come_decrement_ref_count(buf_213, (void*)0, (void*)0, 0, 0, (void*)0));
            ((__result_obj__347) ? __result_obj__347 = come_decrement_ref_count(__result_obj__347, ((struct sNode*)__result_obj__347)->finalize, ((struct sNode*)__result_obj__347)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__347;
            come_call_finalizer(buffer_finalize, fun_name_245, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (buf2_246 = come_decrement_ref_count(buf2_246, (void*)0, (void*)0, 0, 0, (void*)0));
            ((node_247) ? node_247 = come_decrement_ref_count(node_247, ((struct sNode*)node_247)->finalize, ((struct sNode*)node_247)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
        else if(        call_method_generics_fun_call        ) {
            __right_value0 = (void*)0;
            node_248=(struct sNode*)come_increment_ref_count(parse_function_call(buf_213,info,0));
            info->sline_real=sline_real;
            __result_obj__348 = (struct sNode*)come_increment_ref_count(node_248);
            ((node_248) ? node_248 = come_decrement_ref_count(node_248, ((struct sNode*)node_248)->finalize, ((struct sNode*)node_248)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            (buf_213 = come_decrement_ref_count(buf_213, (void*)0, (void*)0, 0, 0, (void*)0));
            ((__result_obj__348) ? __result_obj__348 = come_decrement_ref_count(__result_obj__348, ((struct sNode*)__result_obj__348)->finalize, ((struct sNode*)__result_obj__348)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__348;
            ((node_248) ? node_248 = come_decrement_ref_count(node_248, ((struct sNode*)node_248)->finalize, ((struct sNode*)node_248)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
        else if(        !is_special_word&&*info->p==40&&!is_type_name_        ) {
            __right_value0 = (void*)0;
            node_249=(struct sNode*)come_increment_ref_count(parse_function_call(buf_213,info,0));
            info->sline_real=sline_real;
            __result_obj__349 = (struct sNode*)come_increment_ref_count(node_249);
            ((node_249) ? node_249 = come_decrement_ref_count(node_249, ((struct sNode*)node_249)->finalize, ((struct sNode*)node_249)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            (buf_213 = come_decrement_ref_count(buf_213, (void*)0, (void*)0, 0, 0, (void*)0));
            ((__result_obj__349) ? __result_obj__349 = come_decrement_ref_count(__result_obj__349, ((struct sNode*)__result_obj__349)->finalize, ((struct sNode*)__result_obj__349)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__349;
            ((node_249) ? node_249 = come_decrement_ref_count(node_249, ((struct sNode*)node_249)->finalize, ((struct sNode*)node_249)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
        else {
            __right_value0 = (void*)0;
            node_250=(struct sNode*)come_increment_ref_count(string_node_v21(buf_213,head_212,head_sline,info));
            info->sline_real=sline_real;
            __result_obj__350 = (struct sNode*)come_increment_ref_count(node_250);
            ((node_250) ? node_250 = come_decrement_ref_count(node_250, ((struct sNode*)node_250)->finalize, ((struct sNode*)node_250)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            (buf_213 = come_decrement_ref_count(buf_213, (void*)0, (void*)0, 0, 0, (void*)0));
            ((__result_obj__350) ? __result_obj__350 = come_decrement_ref_count(__result_obj__350, ((struct sNode*)__result_obj__350)->finalize, ((struct sNode*)__result_obj__350)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__350;
            ((node_250) ? node_250 = come_decrement_ref_count(node_250, ((struct sNode*)node_250)->finalize, ((struct sNode*)node_250)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
        (buf_213 = come_decrement_ref_count(buf_213, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    else {
        __right_value0 = (void*)0;
        node_251=(struct sNode*)come_increment_ref_count(expression_node_v97(info));
        __result_obj__351 = (struct sNode*)come_increment_ref_count(node_251);
        ((node_251) ? node_251 = come_decrement_ref_count(node_251, ((struct sNode*)node_251)->finalize, ((struct sNode*)node_251)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        ((__result_obj__351) ? __result_obj__351 = come_decrement_ref_count(__result_obj__351, ((struct sNode*)__result_obj__351)->finalize, ((struct sNode*)__result_obj__351)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__351;
        ((node_251) ? node_251 = come_decrement_ref_count(node_251, ((struct sNode*)node_251)->finalize, ((struct sNode*)node_251)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    err_msg(info,"unexpected operator(%c)",*info->p);
    exit(2);
    __result_obj__352 = (struct sNode*)come_increment_ref_count((struct sNode*)((void*)0));
    ((__result_obj__352) ? __result_obj__352 = come_decrement_ref_count(__result_obj__352, ((struct sNode*)__result_obj__352)->finalize, ((struct sNode*)__result_obj__352)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    return __result_obj__352;
}

static struct sVar* map$2char$phsVar$ph$p_operator_load_element(struct map$2char$phsVar$ph* self, char* key){
struct sVar* default_value;
struct sVar* __result_obj__260;
unsigned int hash;
unsigned int it;
struct sVar* __result_obj__261;
struct sVar* __result_obj__262;
struct sVar* __result_obj__263;
struct sVar* __result_obj__264;
    memset(&default_value,0,sizeof(struct sVar*));
    if(    self==((void*)0)    ) {
        __result_obj__260 = (struct sVar*)come_increment_ref_count(default_value);
        come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        come_call_finalizer(sVar_finalize, __result_obj__260, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__260;
    }
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(    1    ) {
        if(        self->item_existance[it]        ) {
            if(            string_equals(self->keys[it],key)            ) {
                __result_obj__261 = (struct sVar*)come_increment_ref_count(self->items[it]);
                come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sVar_finalize, __result_obj__261, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__261;
            }
            it++;
            if(            it>=self->size            ) {
                it=0;
            }
            else if(            it==hash            ) {
                __result_obj__262 = (struct sVar*)come_increment_ref_count(default_value);
                come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                come_call_finalizer(sVar_finalize, __result_obj__262, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__262;
            }
        }
        else {
            __result_obj__263 = (struct sVar*)come_increment_ref_count(default_value);
            come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            come_call_finalizer(sVar_finalize, __result_obj__263, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__263;
        }
    }
    __result_obj__264 = (struct sVar*)come_increment_ref_count(default_value);
    come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sVar_finalize, __result_obj__264, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__264;
}

static struct sVar* map$2char$phsVar$ph_operator_load_element(struct map$2char$phsVar$ph* self, char* key){
struct sVar* default_value;
struct sVar* __result_obj__265;
unsigned int hash;
unsigned int it;
struct sVar* __result_obj__266;
struct sVar* __result_obj__267;
struct sVar* __result_obj__268;
struct sVar* __result_obj__269;
    memset(&default_value,0,sizeof(struct sVar*));
    if(    self==((void*)0)    ) {
        __result_obj__265 = (struct sVar*)come_increment_ref_count(default_value);
        come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        come_call_finalizer(sVar_finalize, __result_obj__265, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__265;
    }
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(    1    ) {
        if(        self->item_existance[it]        ) {
            if(            string_equals(self->keys[it],key)            ) {
                __result_obj__266 = (struct sVar*)come_increment_ref_count(self->items[it]);
                come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sVar_finalize, __result_obj__266, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__266;
            }
            it++;
            if(            it>=self->size            ) {
                it=0;
            }
            else if(            it==hash            ) {
                __result_obj__267 = (struct sVar*)come_increment_ref_count(default_value);
                come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                come_call_finalizer(sVar_finalize, __result_obj__267, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__267;
            }
        }
        else {
            __result_obj__268 = (struct sVar*)come_increment_ref_count(default_value);
            come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            come_call_finalizer(sVar_finalize, __result_obj__268, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__268;
        }
    }
    __result_obj__269 = (struct sVar*)come_increment_ref_count(default_value);
    come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sVar_finalize, __result_obj__269, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__269;
}

static struct sInnerAttribute* sInnerAttribute_clone(struct sInnerAttribute* self){
struct sInnerAttribute* __result_obj__272;
void* __right_value0 = (void*)0;
struct sInnerAttribute* result;
char* __dec_obj215;
char* __dec_obj216;
struct sInnerAttribute* __result_obj__273;
    if(    self==(void*)0    ) {
        __result_obj__272 = (void*)0;
        return __result_obj__272;
    }
    result=(struct sInnerAttribute*)come_increment_ref_count((struct sInnerAttribute*)come_calloc_v2(1, sizeof(struct sInnerAttribute)*(1), "sInnerAttribute_clone", 3, "struct sInnerAttribute*"));
    if(    self!=((void*)0)    ) {
        result->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj215=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sInnerAttribute_clone", 5, "char*"));
        __dec_obj215 = come_decrement_ref_count(__dec_obj215, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->attr!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj216=result->attr,
        result->attr=(char*)come_increment_ref_count((char*)come_memdup(self->attr, "sInnerAttribute_clone", 7, "char*"));
        __dec_obj216 = come_decrement_ref_count(__dec_obj216, (void*)0, (void*)0, 0,0, (void*)0);
    }
    __result_obj__273 = result;
    come_call_finalizer(sInnerAttribute_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__273;
}

static struct sCSourceNode* sCSourceNode_clone(struct sCSourceNode* self){
struct sCSourceNode* __result_obj__275;
void* __right_value0 = (void*)0;
struct sCSourceNode* result;
char* __dec_obj217;
char* __dec_obj218;
struct sCSourceNode* __result_obj__276;
    if(    self==(void*)0    ) {
        __result_obj__275 = (void*)0;
        return __result_obj__275;
    }
    result=(struct sCSourceNode*)come_increment_ref_count((struct sCSourceNode*)come_calloc_v2(1, sizeof(struct sCSourceNode)*(1), "sCSourceNode_clone", 3, "struct sCSourceNode*"));
    if(    self!=((void*)0)    ) {
        result->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj217=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sCSourceNode_clone", 5, "char*"));
        __dec_obj217 = come_decrement_ref_count(__dec_obj217, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->contents!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj218=result->contents,
        result->contents=(char*)come_increment_ref_count((char*)come_memdup(self->contents, "sCSourceNode_clone", 7, "char*"));
        __dec_obj218 = come_decrement_ref_count(__dec_obj218, (void*)0, (void*)0, 0,0, (void*)0);
    }
    __result_obj__276 = result;
    come_call_finalizer(sCSourceNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__276;
}

static struct sComeCallNode* sComeCallNode_clone(struct sComeCallNode* self){
struct sComeCallNode* __result_obj__281;
void* __right_value0 = (void*)0;
struct sComeCallNode* result;
char* __dec_obj221;
struct buffer* __dec_obj222;
struct sComeCallNode* __result_obj__282;
    if(    self==(void*)0    ) {
        __result_obj__281 = (void*)0;
        return __result_obj__281;
    }
    result=(struct sComeCallNode*)come_increment_ref_count((struct sComeCallNode*)come_calloc_v2(1, sizeof(struct sComeCallNode)*(1), "sComeCallNode_clone", 3, "struct sComeCallNode*"));
    if(    self!=((void*)0)    ) {
        result->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj221=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sComeCallNode_clone", 5, "char*"));
        __dec_obj221 = come_decrement_ref_count(__dec_obj221, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->come_block!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj222=result->come_block,
        result->come_block=(struct buffer*)come_increment_ref_count(buffer_clone(self->come_block));
        come_call_finalizer(buffer_finalize, __dec_obj222,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result->come_block_sline=self->come_block_sline;
    }
    __result_obj__282 = result;
    come_call_finalizer(sComeCallNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__282;
}

static struct sComeJoinNode* sComeJoinNode_clone(struct sComeJoinNode* self){
struct sComeJoinNode* __result_obj__284;
void* __right_value0 = (void*)0;
struct sComeJoinNode* result;
char* __dec_obj223;
struct sNode* __dec_obj224;
struct sComeJoinNode* __result_obj__285;
    if(    self==(void*)0    ) {
        __result_obj__284 = (void*)0;
        return __result_obj__284;
    }
    result=(struct sComeJoinNode*)come_increment_ref_count((struct sComeJoinNode*)come_calloc_v2(1, sizeof(struct sComeJoinNode)*(1), "sComeJoinNode_clone", 3, "struct sComeJoinNode*"));
    if(    self!=((void*)0)    ) {
        result->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj223=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sComeJoinNode_clone", 5, "char*"));
        __dec_obj223 = come_decrement_ref_count(__dec_obj223, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj224=result->node,
        result->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node));
        (__dec_obj224 ? __dec_obj224 = come_decrement_ref_count(__dec_obj224, ((struct sNode*)__dec_obj224)->finalize, ((struct sNode*)__dec_obj224)->_protocol_obj, 0,0, (void*)0) :0);
    }
    __result_obj__285 = result;
    come_call_finalizer(sComeJoinNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__285;
}

static struct list$1sBlock$ph* list$1sBlock$ph_initialize(struct list$1sBlock$ph* self){
struct list$1sBlock$ph* __result_obj__287;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__287 = (struct list$1sBlock$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1sBlock$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1sBlock$ph$p_finalize, __result_obj__287, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__287;
}

static struct list$1sBlock$ph* list$1sBlock$ph_add(struct list$1sBlock$ph* self, struct sBlock* item){
struct list$1sBlock$ph* __result_obj__288;
void* __right_value0 = (void*)0;
struct list_item$1sBlock$ph* litem;
struct sBlock* __dec_obj226;
struct list_item$1sBlock$ph* litem_230;
struct sBlock* __dec_obj227;
struct list_item$1sBlock$ph* litem_231;
struct sBlock* __dec_obj228;
struct list$1sBlock$ph* __result_obj__289;
    if(    self==((void*)0)    ) {
        __result_obj__288 = self;
        come_call_finalizer(sBlock_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result_obj__288;
    }
    if(    self->len==0    ) {
        litem=(struct list_item$1sBlock$ph*)come_increment_ref_count(((struct list_item$1sBlock$ph*)(__right_value0=(struct list_item$1sBlock$ph*)come_calloc_v2(1, sizeof(struct list_item$1sBlock$ph)*(1), "./neo-c.h", 1081, "struct list_item$1sBlock$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj226=litem->item,
        litem->item=(struct sBlock*)come_increment_ref_count(item);
        come_call_finalizer(sBlock_finalize, __dec_obj226,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(    self->len==1    ) {
        __right_value0 = (void*)0;
        litem_230=(struct list_item$1sBlock$ph*)come_increment_ref_count(((struct list_item$1sBlock$ph*)(__right_value0=(struct list_item$1sBlock$ph*)come_calloc_v2(1, sizeof(struct list_item$1sBlock$ph)*(1), "./neo-c.h", 1091, "struct list_item$1sBlock$ph*"))));
        litem_230->prev=self->head;
        litem_230->next=((void*)0);
        __dec_obj227=litem_230->item,
        litem_230->item=(struct sBlock*)come_increment_ref_count(item);
        come_call_finalizer(sBlock_finalize, __dec_obj227,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem_230;
        self->head->next=litem_230;
    }
    else {
        __right_value0 = (void*)0;
        litem_231=(struct list_item$1sBlock$ph*)come_increment_ref_count(((struct list_item$1sBlock$ph*)(__right_value0=(struct list_item$1sBlock$ph*)come_calloc_v2(1, sizeof(struct list_item$1sBlock$ph)*(1), "./neo-c.h", 1101, "struct list_item$1sBlock$ph*"))));
        litem_231->prev=self->tail;
        litem_231->next=((void*)0);
        __dec_obj228=litem_231->item,
        litem_231->item=(struct sBlock*)come_increment_ref_count(item);
        come_call_finalizer(sBlock_finalize, __dec_obj228,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail->next=litem_231;
        self->tail=litem_231;
    }
    self->len++;
    __result_obj__289 = self;
    come_call_finalizer(sBlock_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__289;
}

static struct sComePollNode* sComePollNode_clone(struct sComePollNode* self){
struct sComePollNode* __result_obj__290;
void* __right_value0 = (void*)0;
struct sComePollNode* result;
char* __dec_obj229;
struct list$1sNode$ph* __dec_obj230;
struct list$1sBlock$ph* __dec_obj243;
struct sBlock* __dec_obj244;
struct sComePollNode* __result_obj__319;
    if(    self==(void*)0    ) {
        __result_obj__290 = (void*)0;
        return __result_obj__290;
    }
    result=(struct sComePollNode*)come_increment_ref_count((struct sComePollNode*)come_calloc_v2(1, sizeof(struct sComePollNode)*(1), "sComePollNode_clone", 3, "struct sComePollNode*"));
    if(    self!=((void*)0)    ) {
        result->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj229=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sComePollNode_clone", 5, "char*"));
        __dec_obj229 = come_decrement_ref_count(__dec_obj229, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->vars!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj230=result->vars,
        result->vars=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->vars));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj230,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->blocks!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj243=result->blocks,
        result->blocks=(struct list$1sBlock$ph*)come_increment_ref_count(list$1sBlock$ph$p_clone(self->blocks));
        come_call_finalizer(list$1sBlock$ph_finalize, __dec_obj243,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->else_block!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj244=result->else_block,
        result->else_block=(struct sBlock*)come_increment_ref_count(sBlock_clone(self->else_block));
        come_call_finalizer(sBlock_finalize, __dec_obj244,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result->time_out=self->time_out;
    }
    __result_obj__319 = result;
    come_call_finalizer(sComePollNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__319;
}

static struct list$1sBlock$ph* list$1sBlock$ph$p_clone(struct list$1sBlock$ph* self){
struct list$1sBlock$ph* __result_obj__291;
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct list$1sBlock$ph* result;
struct list_item$1sBlock$ph* it;
struct list$1sBlock$ph* __result_obj__318;
    if(    self==((void*)0)    ) {
        __result_obj__291 = (struct list$1sBlock$ph*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1sBlock$ph$p_finalize, __result_obj__291, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__291;
    }
    result=(struct list$1sBlock$ph*)come_increment_ref_count(list$1sBlock$ph_initialize((struct list$1sBlock$ph*)come_increment_ref_count((struct list$1sBlock$ph*)come_calloc_v2(1, sizeof(struct list$1sBlock$ph)*(1), "./neo-c.h", 1060, "struct list$1sBlock$ph*"))));
    it=self->head;
    while(    it!=((void*)0)    ) {
        if(        1        ) {
            __right_value0 = (void*)0;
            list$1sBlock$ph_add(result,(struct sBlock*)come_increment_ref_count(sBlock_clone(it->item)));
        }
        else {
            __right_value0 = (void*)0;
            list$1sBlock$ph_add(result,(struct sBlock*)come_increment_ref_count(sBlock_clone(it->item)));
        }
        it=it->next;
    }
    __result_obj__318 = (struct list$1sBlock$ph*)come_increment_ref_count(result);
    come_call_finalizer(list$1sBlock$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1sBlock$ph$p_finalize, __result_obj__318, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__318;
}

static struct sBlock* sBlock_clone(struct sBlock* self){
struct sBlock* __result_obj__292;
void* __right_value0 = (void*)0;
struct sBlock* result;
struct list$1sNode$ph* __dec_obj231;
struct sVarTable* __dec_obj242;
struct sBlock* __result_obj__317;
    if(    self==(void*)0    ) {
        __result_obj__292 = (struct sBlock*)come_increment_ref_count((void*)0);
        come_call_finalizer(sBlock_finalize, __result_obj__292, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__292;
    }
    result=(struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc_v2(1, sizeof(struct sBlock)*(1), "sBlock_clone", 3, "struct sBlock*"));
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj231=result->mNodes,
        result->mNodes=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_clone(self->mNodes));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj231,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj242=result->mVarTable,
        result->mVarTable=(struct sVarTable*)come_increment_ref_count(sVarTable_clone(self->mVarTable));
        come_call_finalizer(sVarTable_finalize, __dec_obj242,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result->mOmitSemicolon=self->mOmitSemicolon;
    }
    __result_obj__317 = (struct sBlock*)come_increment_ref_count(result);
    come_call_finalizer(sBlock_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sBlock_finalize, __result_obj__317, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__317;
}

static struct list$1sNode$ph* list$1sNode$ph_clone(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__293;
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct list$1sNode$ph* result;
struct list_item$1sNode$ph* it;
struct list$1sNode$ph* __result_obj__294;
    if(    self==((void*)0)    ) {
        __result_obj__293 = (struct list$1sNode$ph*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__293, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__293;
    }
    result=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "./neo-c.h", 1060, "struct list$1sNode$ph*"))));
    it=self->head;
    while(    it!=((void*)0)    ) {
        if(        1        ) {
            __right_value0 = (void*)0;
            list$1sNode$ph_add(result,(struct sNode*)come_increment_ref_count(sNode_clone(it->item)));
        }
        else {
            __right_value0 = (void*)0;
            list$1sNode$ph_add(result,(struct sNode*)come_increment_ref_count(sNode_clone(it->item)));
        }
        it=it->next;
    }
    __result_obj__294 = (struct list$1sNode$ph*)come_increment_ref_count(result);
    come_call_finalizer(list$1sNode$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__294, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__294;
}

static struct sVarTable* sVarTable_clone(struct sVarTable* self){
struct sVarTable* __result_obj__295;
void* __right_value0 = (void*)0;
struct sVarTable* result;
struct map$2char$phsVar$ph* __dec_obj241;
struct sVarTable* __result_obj__316;
    if(    self==(void*)0    ) {
        __result_obj__295 = (struct sVarTable*)come_increment_ref_count((void*)0);
        come_call_finalizer(sVarTable_finalize, __result_obj__295, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__295;
    }
    result=(struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc_v2(1, sizeof(struct sVarTable)*(1), "sVarTable_clone", 3, "struct sVarTable*"));
    if(    self!=((void*)0)&&self->mVars!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj241=result->mVars,
        result->mVars=(struct map$2char$phsVar$ph*)come_increment_ref_count(map$2char$phsVar$ph_clone(self->mVars));
        come_call_finalizer(map$2char$phsVar$ph_finalize, __dec_obj241,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)    ) {
        result->mParent=self->mParent;
    }
    __result_obj__316 = (struct sVarTable*)come_increment_ref_count(result);
    come_call_finalizer(sVarTable_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sVarTable_finalize, __result_obj__316, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__316;
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph_clone(struct map$2char$phsVar$ph* self){
struct map$2char$phsVar$ph* __result_obj__296;
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct map$2char$phsVar$ph* result;
struct list$1char$ph* __dec_obj233;
char* it;
struct sVar* default_value;
struct sVar* it2;
struct map$2char$phsVar$ph* __result_obj__315;
    if(    self==((void*)0)    ) {
        __result_obj__296 = (struct map$2char$phsVar$ph*)come_increment_ref_count(((void*)0));
        come_call_finalizer(map$2char$phsVar$ph$p_finalize, __result_obj__296, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__296;
    }
    result=(struct map$2char$phsVar$ph*)come_increment_ref_count(map$2char$phsVar$ph_initialize((struct map$2char$phsVar$ph*)come_increment_ref_count((struct map$2char$phsVar$ph*)come_calloc_v2(1, sizeof(struct map$2char$phsVar$ph)*(1), "./neo-c.h", 2197, "struct map$2char$phsVar$ph*"))));
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj233=result->key_list,
    result->key_list=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "./neo-c.h", 2199, "struct list$1char$ph*"))));
    come_call_finalizer(list$1char$ph_finalize, __dec_obj233,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    for(    it=map$2char$phsVar$ph_begin(self)    ;    !map$2char$phsVar$ph_end(self)    ;    it=map$2char$phsVar$ph_next(self)    ){
        memset(&default_value,0,sizeof(struct sVar*));
        __right_value0 = (void*)0;
        it2=(struct sVar*)come_increment_ref_count(map$2char$phsVar$ph_at(self,it,(struct sVar*)come_increment_ref_count(default_value)));
        if(        1&&1        ) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            map$2char$phsVar$ph_put(result,(char*)come_increment_ref_count((char*)come_memdup(it, "./neo-c.h", 2208, "char*")),(struct sVar*)come_increment_ref_count(sVar_clone(it2)));
        }
        else if(        1        ) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            map$2char$phsVar$ph_put(result,(char*)come_increment_ref_count((char*)come_memdup(it, "./neo-c.h", 2211, "char*")),(struct sVar*)come_increment_ref_count(sVar_clone(it2)));
        }
        else if(        1        ) {
            __right_value0 = (void*)0;
            map$2char$phsVar$ph_put(result,(char*)come_increment_ref_count(it),(struct sVar*)come_increment_ref_count(sVar_clone(it2)));
        }
        else {
            __right_value0 = (void*)0;
            map$2char$phsVar$ph_put(result,(char*)come_increment_ref_count(it),(struct sVar*)come_increment_ref_count(sVar_clone(it2)));
        }
        come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sVar_finalize, it2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result_obj__315 = (struct map$2char$phsVar$ph*)come_increment_ref_count(result);
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, __result_obj__315, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__315;
}

static void map$2char$phsVar$ph$p_finalize(struct map$2char$phsVar$ph* self){
int i;
int i_232;
    for(    i=0    ;    i<self->size    ;    i++    ){
        if(        self->item_existance[i]        ) {
            if(            1            ) {
                come_call_finalizer(sVar_finalize, self->items[i], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    i_232=0    ;    i_232<self->size    ;    i_232++    ){
        if(        self->item_existance[i_232]        ) {
            if(            1            ) {
                (self->keys[i_232] = come_decrement_ref_count(self->keys[i_232], (void*)0, (void*)0, 0, 0, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, (void*)0));
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph_initialize(struct map$2char$phsVar$ph* self){
void* __right_value0 = (void*)0;
int i;
void* __right_value1 = (void*)0;
struct list$1char$ph* __dec_obj232;
struct map$2char$phsVar$ph* __result_obj__297;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value0=(char**)come_calloc_v2(1, sizeof(char*)*(1*(128)), "./neo-c.h", 2126, "char**"))));
    __right_value0 = (void*)0;
    self->items=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value0=(struct sVar**)come_calloc_v2(1, sizeof(struct sVar*)*(1*(128)), "./neo-c.h", 2127, "struct sVar**"))));
    __right_value0 = (void*)0;
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value0=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(128)), "./neo-c.h", 2128, "_Bool*"))));
    for(    i=0    ;    i<128    ;    i++    ){
        self->item_existance[i]=0;
    }
    self->size=128;
    self->len=0;
    __right_value0 = (void*)0;
    __dec_obj232=self->key_list,
    self->key_list=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "./neo-c.h", 2138, "struct list$1char$ph*"))));
    come_call_finalizer(list$1char$ph_finalize, __dec_obj232,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    self->it=0;
    __result_obj__297 = (struct map$2char$phsVar$ph*)come_increment_ref_count(self);
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, __result_obj__297, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__297;
}

static char* map$2char$phsVar$ph_begin(struct map$2char$phsVar$ph* self){
char* result;
char* __result_obj__298;
char* __result_obj__299;
char* result_233;
char* __result_obj__300;
    if(    self==((void*)0)    ) {
        memset(&result,0,sizeof(char*));
        __result_obj__298 = result;
        return __result_obj__298;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it    ) {
        __result_obj__299 = self->key_list->it->item;
        return __result_obj__299;
    }
    memset(&result_233,0,sizeof(char*));
    __result_obj__300 = result_233;
    return __result_obj__300;
}

static _Bool map$2char$phsVar$ph_end(struct map$2char$phsVar$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsVar$ph_next(struct map$2char$phsVar$ph* self){
char* result;
char* __result_obj__301;
char* __result_obj__302;
char* result_234;
char* __result_obj__303;
    if(    self==((void*)0)||self->key_list->it==((void*)0)    ) {
        memset(&result,0,sizeof(char*));
        __result_obj__301 = result;
        return __result_obj__301;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it    ) {
        __result_obj__302 = self->key_list->it->item;
        return __result_obj__302;
    }
    memset(&result_234,0,sizeof(char*));
    __result_obj__303 = result_234;
    return __result_obj__303;
}

static struct sVar* map$2char$phsVar$ph_at(struct map$2char$phsVar$ph* self, char* key, struct sVar* default_value){
struct sVar* __result_obj__304;
unsigned int hash;
unsigned int it;
struct sVar* __result_obj__305;
struct sVar* __result_obj__306;
struct sVar* __result_obj__307;
struct sVar* __result_obj__308;
    if(    self==((void*)0)    ) {
        __result_obj__304 = (struct sVar*)come_increment_ref_count(default_value);
        come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        come_call_finalizer(sVar_finalize, __result_obj__304, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__304;
    }
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(    1    ) {
        if(        self->item_existance[it]        ) {
            if(            string_equals(self->keys[it],key)            ) {
                __result_obj__305 = (struct sVar*)come_increment_ref_count(self->items[it]);
                come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sVar_finalize, __result_obj__305, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__305;
            }
            it++;
            if(            it>=self->size            ) {
                it=0;
            }
            else if(            it==hash            ) {
                __result_obj__306 = (struct sVar*)come_increment_ref_count(default_value);
                come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                come_call_finalizer(sVar_finalize, __result_obj__306, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__306;
            }
        }
        else {
            __result_obj__307 = (struct sVar*)come_increment_ref_count(default_value);
            come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            come_call_finalizer(sVar_finalize, __result_obj__307, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__307;
        }
    }
    __result_obj__308 = (struct sVar*)come_increment_ref_count(default_value);
    come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sVar_finalize, __result_obj__308, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__308;
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph_put(struct map$2char$phsVar$ph* self, char* key, struct sVar* item){
struct map$2char$phsVar$ph* __result_obj__309;
unsigned int hash;
int it;
_Bool same_key_exist;
char* it2;
struct map$2char$phsVar$ph* __result_obj__312;
    if(    self==((void*)0)    ) {
        __result_obj__309 = self;
        (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sVar_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result_obj__309;
    }
    if(    self->len*2>=self->size    ) {
        map$2char$phsVar$ph_rehash(self);
    }
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(    1    ) {
        if(        self->item_existance[it]        ) {
            if(            string_equals(self->keys[it],key)            ) {
                if(                1                ) {
                    (self->keys[it] = come_decrement_ref_count(self->keys[it], (void*)0, (void*)0, 0, 0, (void*)0));
                    list$1char$ph_remove(self->key_list,self->keys[it]);
                    self->keys[it]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it]);
                    self->keys[it]=key;
                }
                if(                1                ) {
                    come_call_finalizer(sVar_finalize, self->items[it], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->items[it]=(struct sVar*)come_increment_ref_count(item);
                }
                else {
                    self->items[it]=item;
                }
                break;
            }
            it++;
            if(            it>=self->size            ) {
                it=0;
            }
            else if(            it==hash            ) {
                printf("unexpected error in map.insert\n");
                stackframe_v2();
                exit(2);
            }
        }
        else {
            self->item_existance[it]=1;
            if(            1            ) {
                self->keys[it]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it]=key;
            }
            if(            1            ) {
                self->items[it]=(struct sVar*)come_increment_ref_count(item);
            }
            else {
                self->items[it]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist=0;
    for(    it2=list$1char$ph_begin(self->key_list)    ;    !list$1char$ph_end(self->key_list)    ;    it2=list$1char$ph_next(self->key_list)    ){
        if(        string_equals(it2,key)        ) {
            same_key_exist=1;
        }
    }
    if(    !same_key_exist    ) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__312 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sVar_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__312;
}

static void map$2char$phsVar$ph_rehash(struct map$2char$phsVar$ph* self){
int size;
void* __right_value0 = (void*)0;
char** keys;
struct sVar** items;
_Bool* item_existance;
int len;
char* it;
struct sVar* default_value;
struct sVar* it2;
unsigned int hash;
int n;
struct sVar* default_value_235;
    size=self->size*10;
    keys=(char**)come_increment_ref_count(((char**)(__right_value0=(char**)come_calloc_v2(1, sizeof(char*)*(1*(size)), "./neo-c.h", 2426, "char**"))));
    __right_value0 = (void*)0;
    items=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value0=(struct sVar**)come_calloc_v2(1, sizeof(struct sVar*)*(1*(size)), "./neo-c.h", 2427, "struct sVar**"))));
    __right_value0 = (void*)0;
    item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value0=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(size)), "./neo-c.h", 2428, "_Bool*"))));
    len=0;
    for(    it=map$2char$phsVar$ph_begin(self)    ;    !map$2char$phsVar$ph_end(self)    ;    it=map$2char$phsVar$ph_next(self)    ){
        memset(&default_value,0,sizeof(struct sVar*));
        __right_value0 = (void*)0;
        it2=((struct sVar*)(__right_value0=map$2char$phsVar$ph_at(self,it,(struct sVar*)come_increment_ref_count(default_value))));
        come_call_finalizer(sVar_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        hash=string_get_hash_key(((char*)it))%size;
        n=hash;
        while(        1        ) {
            if(            item_existance[n]            ) {
                n++;
                if(                n>=size                ) {
                    n=0;
                }
                else if(                n==hash                ) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe_v2();
                    exit(2);
                }
            }
            else {
                item_existance[n]=1;
                keys[n]=it;
                memset(&default_value_235,0,sizeof(struct sVar*));
                __right_value0 = (void*)0;
                items[n]=((struct sVar*)(__right_value0=map$2char$phsVar$ph_at(self,it,(struct sVar*)come_increment_ref_count(default_value_235))));
                come_call_finalizer(sVar_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                len++;
                come_call_finalizer(sVar_finalize, default_value_235, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                come_call_finalizer(sVar_finalize, default_value_235, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    come_free_v2((char*)self->items);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, (void*)0));
    come_free_v2((char*)self->keys);
    self->keys=keys;
    self->items=items;
    self->item_existance=item_existance;
    self->size=size;
    self->len=len;
}

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item){
struct list$1char$ph* __result_obj__310;
void* __right_value0 = (void*)0;
struct list_item$1char$ph* litem;
char* __dec_obj234;
struct list_item$1char$ph* litem_236;
char* __dec_obj235;
struct list_item$1char$ph* litem_237;
char* __dec_obj236;
struct list$1char$ph* __result_obj__311;
    if(    self==((void*)0)    ) {
        __result_obj__310 = self;
        (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0));
        return __result_obj__310;
    }
    if(    self->len==0    ) {
        litem=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./neo-c.h", 1166, "struct list_item$1char$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj234=litem->item,
        litem->item=(char*)come_increment_ref_count(item);
        __dec_obj234 = come_decrement_ref_count(__dec_obj234, (void*)0, (void*)0, 0,0, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(    self->len==1    ) {
        __right_value0 = (void*)0;
        litem_236=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./neo-c.h", 1176, "struct list_item$1char$ph*"))));
        litem_236->prev=self->head;
        litem_236->next=((void*)0);
        __dec_obj235=litem_236->item,
        litem_236->item=(char*)come_increment_ref_count(item);
        __dec_obj235 = come_decrement_ref_count(__dec_obj235, (void*)0, (void*)0, 0,0, (void*)0);
        self->tail=litem_236;
        self->head->next=litem_236;
    }
    else {
        __right_value0 = (void*)0;
        litem_237=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./neo-c.h", 1186, "struct list_item$1char$ph*"))));
        litem_237->prev=self->tail;
        litem_237->next=((void*)0);
        __dec_obj236=litem_237->item,
        litem_237->item=(char*)come_increment_ref_count(item);
        __dec_obj236 = come_decrement_ref_count(__dec_obj236, (void*)0, (void*)0, 0,0, (void*)0);
        self->tail->next=litem_237;
        self->tail=litem_237;
    }
    self->len++;
    __result_obj__311 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0));
    return __result_obj__311;
}

static struct sVar* sVar_clone(struct sVar* self){
struct sVar* __result_obj__313;
void* __right_value0 = (void*)0;
struct sVar* result;
char* __dec_obj237;
char* __dec_obj238;
struct sType* __dec_obj239;
char* __dec_obj240;
struct sVar* __result_obj__314;
    if(    self==(void*)0    ) {
        __result_obj__313 = (struct sVar*)come_increment_ref_count((void*)0);
        come_call_finalizer(sVar_finalize, __result_obj__313, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__313;
    }
    result=(struct sVar*)come_increment_ref_count((struct sVar*)come_calloc_v2(1, sizeof(struct sVar)*(1), "sVar_clone", 3, "struct sVar*"));
    if(    self!=((void*)0)&&self->mName!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj237=result->mName,
        result->mName=(char*)come_increment_ref_count((char*)come_memdup(self->mName, "sVar_clone", 4, "char*"));
        __dec_obj237 = come_decrement_ref_count(__dec_obj237, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj238=result->mCValueName,
        result->mCValueName=(char*)come_increment_ref_count((char*)come_memdup(self->mCValueName, "sVar_clone", 5, "char*"));
        __dec_obj238 = come_decrement_ref_count(__dec_obj238, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj239=result->mType,
        result->mType=(struct sType*)come_increment_ref_count(sType_clone(self->mType));
        come_call_finalizer(sType_finalize, __dec_obj239,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)    ) {
        result->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)    ) {
        result->mNoFree=self->mNoFree;
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj240=result->mFunName,
        result->mFunName=(char*)come_increment_ref_count((char*)come_memdup(self->mFunName, "sVar_clone", 10, "char*"));
        __dec_obj240 = come_decrement_ref_count(__dec_obj240, (void*)0, (void*)0, 0,0, (void*)0);
    }
    __result_obj__314 = (struct sVar*)come_increment_ref_count(result);
    come_call_finalizer(sVar_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sVar_finalize, __result_obj__314, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__314;
}

static void map$2char$phsVar$ph_finalize(struct map$2char$phsVar$ph* self){
int i;
int i_238;
    for(    i=0    ;    i<self->size    ;    i++    ){
        if(        self->item_existance[i]        ) {
            if(            1            ) {
                come_call_finalizer(sVar_finalize, self->items[i], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    i_238=0    ;    i_238<self->size    ;    i_238++    ){
        if(        self->item_existance[i_238]        ) {
            if(            1            ) {
                (self->keys[i_238] = come_decrement_ref_count(self->keys[i_238], (void*)0, (void*)0, 0, 0, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, (void*)0));
}

static struct sFuncNode* sFuncNode_clone(struct sFuncNode* self){
struct sFuncNode* __result_obj__321;
void* __right_value0 = (void*)0;
struct sFuncNode* result;
char* __dec_obj245;
struct sFuncNode* __result_obj__322;
    if(    self==(void*)0    ) {
        __result_obj__321 = (void*)0;
        return __result_obj__321;
    }
    result=(struct sFuncNode*)come_increment_ref_count((struct sFuncNode*)come_calloc_v2(1, sizeof(struct sFuncNode)*(1), "sFuncNode_clone", 3, "struct sFuncNode*"));
    if(    self!=((void*)0)    ) {
        result->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj245=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sFuncNode_clone", 5, "char*"));
        __dec_obj245 = come_decrement_ref_count(__dec_obj245, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result->sline_real=self->sline_real;
    }
    __result_obj__322 = result;
    come_call_finalizer(sFuncNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__322;
}

static struct sLineNode* sLineNode_clone(struct sLineNode* self){
struct sLineNode* __result_obj__324;
void* __right_value0 = (void*)0;
struct sLineNode* result;
char* __dec_obj246;
struct sLineNode* __result_obj__325;
    if(    self==(void*)0    ) {
        __result_obj__324 = (void*)0;
        return __result_obj__324;
    }
    result=(struct sLineNode*)come_increment_ref_count((struct sLineNode*)come_calloc_v2(1, sizeof(struct sLineNode)*(1), "sLineNode_clone", 3, "struct sLineNode*"));
    if(    self!=((void*)0)    ) {
        result->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj246=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sLineNode_clone", 5, "char*"));
        __dec_obj246 = come_decrement_ref_count(__dec_obj246, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result->sline_real=self->sline_real;
    }
    __result_obj__325 = result;
    come_call_finalizer(sLineNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__325;
}

static struct sSNameNode* sSNameNode_clone(struct sSNameNode* self){
struct sSNameNode* __result_obj__327;
void* __right_value0 = (void*)0;
struct sSNameNode* result;
char* __dec_obj247;
struct sSNameNode* __result_obj__328;
    if(    self==(void*)0    ) {
        __result_obj__327 = (void*)0;
        return __result_obj__327;
    }
    result=(struct sSNameNode*)come_increment_ref_count((struct sSNameNode*)come_calloc_v2(1, sizeof(struct sSNameNode)*(1), "sSNameNode_clone", 3, "struct sSNameNode*"));
    if(    self!=((void*)0)    ) {
        result->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj247=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sSNameNode_clone", 5, "char*"));
        __dec_obj247 = come_decrement_ref_count(__dec_obj247, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result->sline_real=self->sline_real;
    }
    __result_obj__328 = result;
    come_call_finalizer(sSNameNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__328;
}

static struct sCallerFuncNode* sCallerFuncNode_clone(struct sCallerFuncNode* self){
struct sCallerFuncNode* __result_obj__330;
void* __right_value0 = (void*)0;
struct sCallerFuncNode* result;
char* __dec_obj248;
struct sCallerFuncNode* __result_obj__331;
    if(    self==(void*)0    ) {
        __result_obj__330 = (void*)0;
        return __result_obj__330;
    }
    result=(struct sCallerFuncNode*)come_increment_ref_count((struct sCallerFuncNode*)come_calloc_v2(1, sizeof(struct sCallerFuncNode)*(1), "sCallerFuncNode_clone", 3, "struct sCallerFuncNode*"));
    if(    self!=((void*)0)    ) {
        result->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj248=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sCallerFuncNode_clone", 5, "char*"));
        __dec_obj248 = come_decrement_ref_count(__dec_obj248, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result->sline_real=self->sline_real;
    }
    __result_obj__331 = result;
    come_call_finalizer(sCallerFuncNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__331;
}

static struct sCallerLineNode* sCallerLineNode_clone(struct sCallerLineNode* self){
struct sCallerLineNode* __result_obj__333;
void* __right_value0 = (void*)0;
struct sCallerLineNode* result;
char* __dec_obj249;
struct sCallerLineNode* __result_obj__334;
    if(    self==(void*)0    ) {
        __result_obj__333 = (void*)0;
        return __result_obj__333;
    }
    result=(struct sCallerLineNode*)come_increment_ref_count((struct sCallerLineNode*)come_calloc_v2(1, sizeof(struct sCallerLineNode)*(1), "sCallerLineNode_clone", 3, "struct sCallerLineNode*"));
    if(    self!=((void*)0)    ) {
        result->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj249=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sCallerLineNode_clone", 5, "char*"));
        __dec_obj249 = come_decrement_ref_count(__dec_obj249, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result->sline_real=self->sline_real;
    }
    __result_obj__334 = result;
    come_call_finalizer(sCallerLineNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__334;
}

static struct sCallerSNameNode* sCallerSNameNode_clone(struct sCallerSNameNode* self){
struct sCallerSNameNode* __result_obj__336;
void* __right_value0 = (void*)0;
struct sCallerSNameNode* result;
char* __dec_obj250;
struct sCallerSNameNode* __result_obj__337;
    if(    self==(void*)0    ) {
        __result_obj__336 = (void*)0;
        return __result_obj__336;
    }
    result=(struct sCallerSNameNode*)come_increment_ref_count((struct sCallerSNameNode*)come_calloc_v2(1, sizeof(struct sCallerSNameNode)*(1), "sCallerSNameNode_clone", 3, "struct sCallerSNameNode*"));
    if(    self!=((void*)0)    ) {
        result->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj250=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sCallerSNameNode_clone", 5, "char*"));
        __dec_obj250 = come_decrement_ref_count(__dec_obj250, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result->sline_real=self->sline_real;
    }
    __result_obj__337 = result;
    come_call_finalizer(sCallerSNameNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__337;
}

static struct sVarArgTypeName* sVarArgTypeName_clone(struct sVarArgTypeName* self){
struct sVarArgTypeName* __result_obj__339;
void* __right_value0 = (void*)0;
struct sVarArgTypeName* result;
char* __dec_obj251;
struct sType* __dec_obj252;
struct sVarArgTypeName* __result_obj__340;
    if(    self==(void*)0    ) {
        __result_obj__339 = (void*)0;
        return __result_obj__339;
    }
    result=(struct sVarArgTypeName*)come_increment_ref_count((struct sVarArgTypeName*)come_calloc_v2(1, sizeof(struct sVarArgTypeName)*(1), "sVarArgTypeName_clone", 3, "struct sVarArgTypeName*"));
    if(    self!=((void*)0)    ) {
        result->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj251=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sVarArgTypeName_clone", 5, "char*"));
        __dec_obj251 = come_decrement_ref_count(__dec_obj251, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj252=result->type,
        result->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        come_call_finalizer(sType_finalize, __dec_obj252,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result_obj__340 = result;
    come_call_finalizer(sVarArgTypeName_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__340;
}

static struct sInlineAssembler* sInlineAssembler_clone(struct sInlineAssembler* self){
struct sInlineAssembler* __result_obj__343;
void* __right_value0 = (void*)0;
struct sInlineAssembler* result;
char* __dec_obj253;
char* __dec_obj254;
struct list$1sNode$ph* __dec_obj255;
struct sInlineAssembler* __result_obj__344;
    if(    self==(void*)0    ) {
        __result_obj__343 = (void*)0;
        return __result_obj__343;
    }
    result=(struct sInlineAssembler*)come_increment_ref_count((struct sInlineAssembler*)come_calloc_v2(1, sizeof(struct sInlineAssembler)*(1), "sInlineAssembler_clone", 3, "struct sInlineAssembler*"));
    if(    self!=((void*)0)    ) {
        result->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj253=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sInlineAssembler_clone", 5, "char*"));
        __dec_obj253 = come_decrement_ref_count(__dec_obj253, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->source!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj254=result->source,
        result->source=(char*)come_increment_ref_count((char*)come_memdup(self->source, "sInlineAssembler_clone", 7, "char*"));
        __dec_obj254 = come_decrement_ref_count(__dec_obj254, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->exps!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj255=result->exps,
        result->exps=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->exps));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj255,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result_obj__344 = result;
    come_call_finalizer(sInlineAssembler_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__344;
}

struct sNode* expression_v5(struct sInfo* info){
void* __right_value0 = (void*)0;
struct sNode* __result_obj__353;
    __result_obj__353 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=expression_node_v99(info))));
    ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0):(void*)0);
    ((__result_obj__353) ? __result_obj__353 = come_decrement_ref_count(__result_obj__353, ((struct sNode*)__result_obj__353)->finalize, ((struct sNode*)__result_obj__353)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    return __result_obj__353;
}

static struct sNode* post_position_operator_of_statment(struct sNode* node, struct sInfo* info){
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct sNode* __dec_obj256;
struct sNode* __result_obj__354;
struct sNode* __dec_obj257;
struct sNode* __result_obj__355;
struct sNode* __result_obj__356;
    if(    !node->terminated(node->_protocol_obj)&&parsecmp("or",info)    ) {
        info->p+=strlen("or");
        skip_spaces_and_lf(info);
        __dec_obj256=node,
        node=(struct sNode*)come_increment_ref_count(parse_or_statment((struct sNode*)come_increment_ref_count(sNode_clone(node)),info));
        (__dec_obj256 ? __dec_obj256 = come_decrement_ref_count(__dec_obj256, ((struct sNode*)__dec_obj256)->finalize, ((struct sNode*)__dec_obj256)->_protocol_obj, 0,0, (void*)0) :0);
        __result_obj__354 = (struct sNode*)come_increment_ref_count(node);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        ((__result_obj__354) ? __result_obj__354 = come_decrement_ref_count(__result_obj__354, ((struct sNode*)__result_obj__354)->finalize, ((struct sNode*)__result_obj__354)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__354;
    }
    else if(    !node->terminated(node->_protocol_obj)&&parsecmp("and",info)    ) {
        info->p+=strlen("and");
        skip_spaces_and_lf(info);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __dec_obj257=node,
        node=(struct sNode*)come_increment_ref_count(parse_and_statment((struct sNode*)come_increment_ref_count(sNode_clone(node)),info));
        (__dec_obj257 ? __dec_obj257 = come_decrement_ref_count(__dec_obj257, ((struct sNode*)__dec_obj257)->finalize, ((struct sNode*)__dec_obj257)->_protocol_obj, 0,0, (void*)0) :0);
        __result_obj__355 = (struct sNode*)come_increment_ref_count(node);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        ((__result_obj__355) ? __result_obj__355 = come_decrement_ref_count(__result_obj__355, ((struct sNode*)__result_obj__355)->finalize, ((struct sNode*)__result_obj__355)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__355;
    }
    __result_obj__356 = (struct sNode*)come_increment_ref_count(node);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    ((__result_obj__356) ? __result_obj__356 = come_decrement_ref_count(__result_obj__356, ((struct sNode*)__result_obj__356)->finalize, ((struct sNode*)__result_obj__356)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    return __result_obj__356;
}

struct sNode* statment(struct sInfo* info){
void* __right_value0 = (void*)0;
struct sNode* node;
struct sNode* __dec_obj258;
struct sNode* __result_obj__357;
    node=(struct sNode*)come_increment_ref_count(expression_v13(info,0));
    __right_value0 = (void*)0;
    __dec_obj258=node,
    node=(struct sNode*)come_increment_ref_count(post_position_operator_of_statment((struct sNode*)come_increment_ref_count(node),info));
    (__dec_obj258 ? __dec_obj258 = come_decrement_ref_count(__dec_obj258, ((struct sNode*)__dec_obj258)->finalize, ((struct sNode*)__dec_obj258)->_protocol_obj, 0,0, (void*)0) :0);
    __result_obj__357 = (struct sNode*)come_increment_ref_count(node);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    ((__result_obj__357) ? __result_obj__357 = come_decrement_ref_count(__result_obj__357, ((struct sNode*)__result_obj__357)->finalize, ((struct sNode*)__result_obj__357)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    return __result_obj__357;
}

char* get_none_generics_name(char* class_name){
char* p;
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
char* __result_obj__358;
char* __result_obj__359;
    p=class_name;
    while(    *p    ) {
        if(        *p==36        ) {
            __result_obj__358 = (char*)come_increment_ref_count(((char*)(__right_value1=charp_substring(((char*)(__right_value0=__builtin_string(class_name))),0,p-class_name))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            (__result_obj__358 = come_decrement_ref_count(__result_obj__358, (void*)0, (void*)0, 0, 1, (void*)0));
            return __result_obj__358;
        }
        else {
            p++;
        }
    }
    __right_value0 = (void*)0;
    __result_obj__359 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(class_name))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__359 = come_decrement_ref_count(__result_obj__359, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__359;
}

char* create_generics_name(struct sType* generics_type, struct sInfo* info){
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct buffer* buf;
struct sClass* klass;
char* class_name;
int i;
struct sType* type;
char* type_name;
int i_252;
char* __result_obj__360;
    buf=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 2774, "struct buffer*"))));
    klass=generics_type->mClass;
    class_name=klass->mName;
    buffer_append_str(buf,class_name);
    if(    list$1sType$ph_length(generics_type->mGenericsTypes)>0    ) {
        buffer_append_char(buf,36);
        buffer_append_char(buf,list$1sType$ph_length(generics_type->mGenericsTypes)+48);
        for(        i=0        ;        i<list$1sType$ph_length(generics_type->mGenericsTypes)        ;        i++        ){
            __right_value0 = (void*)0;
            type=((struct sType*)(__right_value0=list$1sType$ph_operator_load_element(generics_type->mGenericsTypes,i)));
            come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            __right_value0 = (void*)0;
            type_name=(char*)come_increment_ref_count(create_generics_name(type,info));
            buffer_append_str(buf,type_name);
            buffer_append_char(buf,36);
            for(            i_252=0            ;            i_252<type->mPointerNum            ;            i_252++            ){
                buffer_append_char(buf,112);
            }
            if(            type->mHeap            ) {
                buffer_append_str(buf,"h");
            }
            (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
        }
    }
    __right_value0 = (void*)0;
    __result_obj__360 = (char*)come_increment_ref_count(((char*)(__right_value0=buffer_to_string(buf))));
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__360 = come_decrement_ref_count(__result_obj__360, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__360;
}

char* create_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
char* struct_name;
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct buffer* buf;
char* __dec_obj259;
char* __dec_obj260;
char* __dec_obj261;
char* __dec_obj262;
char* __dec_obj263;
int i;
int i_253;
char* __result_obj__361;
memset(&struct_name, 0, sizeof(struct_name));
    buf=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 2809, "struct buffer*"))));
    if(    string_operator_not_equals(obj_type->mOriginalTypeName,"")    ) {
        __right_value0 = (void*)0;
        __dec_obj259=struct_name,
        struct_name=(char*)come_increment_ref_count(__builtin_string(obj_type->mOriginalTypeName));
        __dec_obj259 = come_decrement_ref_count(__dec_obj259, (void*)0, (void*)0, 0,0, (void*)0);
        if(        string_operator_equals(struct_name,"_Bool")        ) {
            __right_value0 = (void*)0;
            __dec_obj260=struct_name,
            struct_name=(char*)come_increment_ref_count(xsprintf("bool"));
            __dec_obj260 = come_decrement_ref_count(__dec_obj260, (void*)0, (void*)0, 0,0, (void*)0);
        }
        if(        !obj_type->mClass->mStruct        ) {
            if(            list$1sType$ph_length(obj_type->mGenericsTypes)>0&&obj_type->mTypedefOriginalType->mPointerNum>0            ) {
                buffer_append_str(buf,"$");
            }
            if(            obj_type->mOriginalTypePointerNum            ) {
                buffer_append_str(buf,"p");
            }
        }
    }
    else if(    obj_type->mClass->mStruct||obj_type->mClass->mProtocol    ) {
        __right_value0 = (void*)0;
        __dec_obj261=struct_name,
        struct_name=(char*)come_increment_ref_count(__builtin_string(obj_type->mClass->mName));
        __dec_obj261 = come_decrement_ref_count(__dec_obj261, (void*)0, (void*)0, 0,0, (void*)0);
        if(        string_operator_equals(struct_name,"_Bool")        ) {
            __right_value0 = (void*)0;
            __dec_obj262=struct_name,
            struct_name=(char*)come_increment_ref_count(xsprintf("bool"));
            __dec_obj262 = come_decrement_ref_count(__dec_obj262, (void*)0, (void*)0, 0,0, (void*)0);
        }
    }
    else {
        __right_value0 = (void*)0;
        __dec_obj263=struct_name,
        struct_name=(char*)come_increment_ref_count(create_generics_name(obj_type,info));
        __dec_obj263 = come_decrement_ref_count(__dec_obj263, (void*)0, (void*)0, 0,0, (void*)0);
        if(        list$1sType$ph_length(obj_type->mGenericsTypes)>0&&obj_type->mPointerNum>0        ) {
            buffer_append_str(buf,"$");
        }
        for(        i=0        ;        i<obj_type->mPointerNum        ;        i++        ){
            buffer_append_str(buf,"p");
        }
        for(        i_253=0        ;        i_253<obj_type->mArrayPointerNum        ;        i_253++        ){
            buffer_append_str(buf,"p");
        }
    }
    if(    obj_type->mArrayPointerType    ) {
        buffer_append_str(buf,"a");
    }
    else if(    !array_equal_pointer&&list$1sNode$ph_length(obj_type->mArrayNum)>0    ) {
        buffer_append_str(buf,"a");
    }
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __result_obj__361 = (char*)come_increment_ref_count(((char*)(__right_value1=xsprintf("%s%s_%s",struct_name,((char*)(__right_value0=buffer_to_string(buf))),fun_name))));
    (struct_name = come_decrement_ref_count(struct_name, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__361 = come_decrement_ref_count(__result_obj__361, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__361;
}

char* create_method_name_original_obj_type(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
char* struct_name;
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct buffer* buf;
char* __dec_obj264;
char* __dec_obj265;
char* __dec_obj266;
int i;
char* __result_obj__362;
memset(&struct_name, 0, sizeof(struct_name));
    buf=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 2859, "struct buffer*"))));
    if(    obj_type->mClass->mStruct||obj_type->mClass->mProtocol    ) {
        __right_value0 = (void*)0;
        __dec_obj264=struct_name,
        struct_name=(char*)come_increment_ref_count(__builtin_string(obj_type->mClass->mName));
        __dec_obj264 = come_decrement_ref_count(__dec_obj264, (void*)0, (void*)0, 0,0, (void*)0);
        if(        string_operator_equals(struct_name,"_Bool")        ) {
            __right_value0 = (void*)0;
            __dec_obj265=struct_name,
            struct_name=(char*)come_increment_ref_count(xsprintf("bool"));
            __dec_obj265 = come_decrement_ref_count(__dec_obj265, (void*)0, (void*)0, 0,0, (void*)0);
        }
    }
    else {
        __right_value0 = (void*)0;
        __dec_obj266=struct_name,
        struct_name=(char*)come_increment_ref_count(create_generics_name(obj_type,info));
        __dec_obj266 = come_decrement_ref_count(__dec_obj266, (void*)0, (void*)0, 0,0, (void*)0);
        if(        list$1sType$ph_length(obj_type->mGenericsTypes)>0&&obj_type->mPointerNum>0        ) {
            buffer_append_str(buf,"$");
        }
        for(        i=0        ;        i<obj_type->mPointerNum        ;        i++        ){
            buffer_append_str(buf,"p");
        }
    }
    if(    obj_type->mArrayPointerType    ) {
        buffer_append_str(buf,"a");
    }
    if(    !array_equal_pointer&&list$1sNode$ph_length(obj_type->mArrayNum)>0    ) {
        buffer_append_str(buf,"pa");
    }
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __result_obj__362 = (char*)come_increment_ref_count(((char*)(__right_value1=xsprintf("%s%s_%s",struct_name,((char*)(__right_value0=buffer_to_string(buf))),fun_name))));
    (struct_name = come_decrement_ref_count(struct_name, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__362 = come_decrement_ref_count(__result_obj__362, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__362;
}

char* create_non_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
char* struct_name;
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct buffer* buf;
char* __dec_obj267;
char* __dec_obj268;
int i;
char* __dec_obj269;
char* __dec_obj270;
char* __dec_obj271;
int i_254;
int len;
char* __result_obj__363;
memset(&struct_name, 0, sizeof(struct_name));
    buf=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 2891, "struct buffer*"))));
    if(    string_operator_not_equals(obj_type->mOriginalTypeName,"")    ) {
        __right_value0 = (void*)0;
        __dec_obj267=struct_name,
        struct_name=(char*)come_increment_ref_count(__builtin_string(obj_type->mOriginalTypeName));
        __dec_obj267 = come_decrement_ref_count(__dec_obj267, (void*)0, (void*)0, 0,0, (void*)0);
        if(        string_operator_equals(struct_name,"_Bool")        ) {
            __right_value0 = (void*)0;
            __dec_obj268=struct_name,
            struct_name=(char*)come_increment_ref_count(xsprintf("bool"));
            __dec_obj268 = come_decrement_ref_count(__dec_obj268, (void*)0, (void*)0, 0,0, (void*)0);
        }
        if(        !obj_type->mClass->mStruct        ) {
            if(            obj_type->mTypedefOriginalType            ) {
                if(                list$1sType$ph_length(obj_type->mGenericsTypes)>0&&obj_type->mTypedefOriginalType->mPointerNum>0                ) {
                    buffer_append_str(buf,"$");
                }
                for(                i=0                ;                i<obj_type->mTypedefOriginalType->mPointerNum                ;                i++                ){
                    buffer_append_str(buf,"p");
                }
            }
        }
    }
    else if(    obj_type->mClass->mStruct||obj_type->mClass->mProtocol    ) {
        __right_value0 = (void*)0;
        __dec_obj269=struct_name,
        struct_name=(char*)come_increment_ref_count(__builtin_string(obj_type->mClass->mName));
        __dec_obj269 = come_decrement_ref_count(__dec_obj269, (void*)0, (void*)0, 0,0, (void*)0);
        if(        string_operator_equals(struct_name,"_Bool")        ) {
            __right_value0 = (void*)0;
            __dec_obj270=struct_name,
            struct_name=(char*)come_increment_ref_count(xsprintf("bool"));
            __dec_obj270 = come_decrement_ref_count(__dec_obj270, (void*)0, (void*)0, 0,0, (void*)0);
        }
    }
    else {
        __right_value0 = (void*)0;
        __dec_obj271=struct_name,
        struct_name=(char*)come_increment_ref_count(create_generics_name(obj_type,info));
        __dec_obj271 = come_decrement_ref_count(__dec_obj271, (void*)0, (void*)0, 0,0, (void*)0);
        if(        list$1sType$ph_length(obj_type->mGenericsTypes)>0&&obj_type->mPointerNum>0        ) {
            buffer_append_str(buf,"$");
        }
        for(        i_254=0        ;        i_254<obj_type->mPointerNum        ;        i_254++        ){
            buffer_append_str(buf,"p");
        }
    }
    if(    obj_type->mArrayPointerType    ) {
        buffer_append_str(buf,"a");
    }
    if(    !array_equal_pointer&&list$1sNode$ph_length(obj_type->mArrayNum)>0    ) {
        buffer_append_str(buf,"pa");
    }
    char none_method_name[charp_length(fun_name)+1];
    memset(&none_method_name, 0, sizeof(none_method_name));
    __right_value0 = (void*)0;
    len=string_length(struct_name)+string_length(((char*)(__right_value0=buffer_to_string(buf))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    memcpy(none_method_name,fun_name+len+1,charp_length(fun_name)-len-1);
    none_method_name[charp_length(fun_name)-len-1]=0;
    __right_value0 = (void*)0;
    __result_obj__363 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(none_method_name))));
    (struct_name = come_decrement_ref_count(struct_name, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__363 = come_decrement_ref_count(__result_obj__363, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__363;
}

char* create_method_name_using_class(struct sClass* obj_class, char* fun_name, struct sInfo* info){
void* __right_value0 = (void*)0;
char* struct_name;
char* __dec_obj272;
char* __result_obj__364;
    struct_name=(char*)come_increment_ref_count(__builtin_string(obj_class->mName));
    if(    string_operator_equals(struct_name,"_Bool")    ) {
        __right_value0 = (void*)0;
        __dec_obj272=struct_name,
        struct_name=(char*)come_increment_ref_count(xsprintf("bool"));
        __dec_obj272 = come_decrement_ref_count(__dec_obj272, (void*)0, (void*)0, 0,0, (void*)0);
    }
    __right_value0 = (void*)0;
    __result_obj__364 = (char*)come_increment_ref_count(((char*)(__right_value0=xsprintf("%s_%s",struct_name,fun_name))));
    (struct_name = come_decrement_ref_count(struct_name, (void*)0, (void*)0, 0, 0, (void*)0));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__364 = come_decrement_ref_count(__result_obj__364, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__364;
}

struct sNode* top_level_v1(char* buf, char* head, int head_sline, struct sInfo* info){
struct sNode* __result_obj__365;
    err_msg(info,"unexpected word(%s)(2)",buf);
    exit(2);
    __result_obj__365 = (struct sNode*)come_increment_ref_count((struct sNode*)((void*)0));
    ((__result_obj__365) ? __result_obj__365 = come_decrement_ref_count(__result_obj__365, ((struct sNode*)__result_obj__365)->finalize, ((struct sNode*)__result_obj__365)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    return __result_obj__365;
}

struct sNode* post_position_operator(struct sNode* node, struct sInfo* info){
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* params;
char* p;
int sline;
_Bool err_flag;
char* label;
char* __dec_obj273;
char* __dec_obj274;
_Bool no_comma;
_Bool in_fun_param;
struct sNode* node_255;
struct sNode* __dec_obj275;
struct sNode* _inf_value20;
struct sLambdaCall* _inf_obj_value20;
void* __right_value2 = (void*)0;
struct sNode* __result_obj__368;
struct sNode* __result_obj__369;
    skip_spaces_and_lf(info);
    if(    !node->terminated(node->_protocol_obj)&&*info->p==40    ) {
        info->p++;
        skip_spaces_and_lf(info);
        skip_spaces_and_lf(info);
        params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "05call.c", 2971, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
        while(        1        ) {
            if(            *info->p==41            ) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            p=info->p;
            sline=info->sline;
            err_flag=0;
            __right_value0 = (void*)0;
            label=(char*)come_increment_ref_count(__builtin_string(""));
            if(            ((*__ctype_b_loc())[(int)((*info->p))]&(unsigned short int)(((((2)<8)?(((1<<(2))<<8)):(((1<<(2))>>8))))))||*info->p==95            ) {
                __right_value0 = (void*)0;
                __dec_obj273=label,
                label=(char*)come_increment_ref_count(parse_word(0,info));
                __dec_obj273 = come_decrement_ref_count(__dec_obj273, (void*)0, (void*)0, 0,0, (void*)0);
                err_flag=1;
            }
            if(            err_flag==1&&*info->p==58            ) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                __dec_obj274=label,
                label=((void*)0);
                __dec_obj274 = come_decrement_ref_count(__dec_obj274, (void*)0, (void*)0, 0,0, (void*)0);
                info->p=p;
                info->sline=sline;
            }
            no_comma=info->no_comma;
            info->no_comma=1;
            in_fun_param=info->in_fun_param;
            info->in_fun_param=1;
            __right_value0 = (void*)0;
            node_255=(struct sNode*)come_increment_ref_count(expression_v13(info,0));
            __right_value0 = (void*)0;
            __dec_obj275=node_255,
            node_255=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_255),info));
            (__dec_obj275 ? __dec_obj275 = come_decrement_ref_count(__dec_obj275, ((struct sNode*)__dec_obj275)->finalize, ((struct sNode*)__dec_obj275)->_protocol_obj, 0,0, (void*)0) :0);
            info->no_comma=no_comma;
            info->in_fun_param=in_fun_param;
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            list$1tuple2$2char$phsNode$ph$ph_push_back(params,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "05call.c", 3014, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(label),(struct sNode*)come_increment_ref_count(node_255))));
            skip_spaces_and_lf(info);
            if(            *info->p==44            ) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else if(            *info->p==41            ) {
                info->p++;
                skip_spaces_and_lf(info);
                (label = come_decrement_ref_count(label, (void*)0, (void*)0, 0, 0, (void*)0));
                ((node_255) ? node_255 = come_decrement_ref_count(node_255, ((struct sNode*)node_255)->finalize, ((struct sNode*)node_255)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                break;
            }
            (label = come_decrement_ref_count(label, (void*)0, (void*)0, 0, 0, (void*)0));
            ((node_255) ? node_255 = come_decrement_ref_count(node_255, ((struct sNode*)node_255)->finalize, ((struct sNode*)node_255)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
        skip_spaces_and_lf(info);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        _inf_value20=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 3032, "struct sNode");
        _inf_obj_value20=(struct sLambdaCall*)come_increment_ref_count(((struct sLambdaCall*)(__right_value1=sLambdaCall_initialize((struct sLambdaCall*)come_increment_ref_count((struct sLambdaCall*)come_calloc_v2(1, sizeof(struct sLambdaCall)*(1), "05call.c", 3032, "struct sLambdaCall*")),(struct sNode*)come_increment_ref_count(node),params,info))));
        _inf_value20->_protocol_obj=_inf_obj_value20;
        _inf_value20->finalize=(void*)sLambdaCall_finalize;
        _inf_value20->clone=(void*)sLambdaCall_clone;
        _inf_value20->compile=(void*)sLambdaCall_compile;
        _inf_value20->sline=(void*)sNodeBase_sline;
        _inf_value20->sline_real=(void*)sNodeBase_sline_real;
        _inf_value20->sname=(void*)sNodeBase_sname;
        _inf_value20->terminated=(void*)sNodeBase_terminated;
        _inf_value20->kind=(void*)sLambdaCall_kind;
        _inf_value20->no_mutex=(void*)sNodeBase_no_mutex;
        __result_obj__368 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value20)));
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(sLambdaCall_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        ((__result_obj__368) ? __result_obj__368 = come_decrement_ref_count(__result_obj__368, ((struct sNode*)__result_obj__368)->finalize, ((struct sNode*)__result_obj__368)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__368;
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        __result_obj__369 = (struct sNode*)come_increment_ref_count((struct sNode*)((void*)0));
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        ((__result_obj__369) ? __result_obj__369 = come_decrement_ref_count(__result_obj__369, ((struct sNode*)__result_obj__369)->finalize, ((struct sNode*)__result_obj__369)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__369;
    }
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
}

static struct sLambdaCall* sLambdaCall_clone(struct sLambdaCall* self){
struct sLambdaCall* __result_obj__366;
void* __right_value0 = (void*)0;
struct sLambdaCall* result;
char* __dec_obj276;
struct sNode* __dec_obj277;
struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj278;
struct sLambdaCall* __result_obj__367;
    if(    self==(void*)0    ) {
        __result_obj__366 = (void*)0;
        return __result_obj__366;
    }
    result=(struct sLambdaCall*)come_increment_ref_count((struct sLambdaCall*)come_calloc_v2(1, sizeof(struct sLambdaCall)*(1), "sLambdaCall_clone", 3, "struct sLambdaCall*"));
    if(    self!=((void*)0)    ) {
        result->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj276=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sLambdaCall_clone", 5, "char*"));
        __dec_obj276 = come_decrement_ref_count(__dec_obj276, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj277=result->node,
        result->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node));
        (__dec_obj277 ? __dec_obj277 = come_decrement_ref_count(__dec_obj277, ((struct sNode*)__dec_obj277)->finalize, ((struct sNode*)__dec_obj277)->_protocol_obj, 0,0, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->params!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj278=result->params,
        result->params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_clone(self->params));
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph_finalize, __dec_obj278,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result_obj__367 = result;
    come_call_finalizer(sLambdaCall_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__367;
}

