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
    char* class_name;
};

extern struct sMemHeader* gAllocMem;

extern int gComeDebugLib;

extern int gNumAlloc;

extern int gNumFree;

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

extern _Bool gComeMalloc;
extern _Bool gCommonHeader;
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
    int err_num2;
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
    _Bool exp_value;
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

struct sNothingNode
{
    int sline;
    char* sname;
    int sline_real;
};

_Bool gComeC=1;
_Bool gComeNet=0;
_Bool gComePthread=0;
_Bool gComeDebug=0;
_Bool gComeOriginalSourcePosition=1;
int gComeDebugStackFrameID=0;
_Bool gComeBareMetal=0;
char* CC="clang";
static char* RM="rm -rf";
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
void come_push_stackframe(char* sname, int sline, int id);
void come_pop_stackframe();
void come_save_stackframe(char* sname, int sline);
void stackframe();
char* come_get_stackframe();
_Bool die(char* msg);
void come_heap_init(int come_debug);
void come_heap_final();
void* alloc_from_pages(unsigned long  int size);
void come_free_mem_of_heap_pool(void* mem);
void* come_alloc_mem_from_heap_pool(unsigned long  int size, char* sname, int sline, char* class_name);
char* come_dynamic_typeof(void* mem);
void* come_calloc(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name);
void come_free(void* mem);
void* come_memdup(void* block, char* sname, int sline, char* class_name);
void* come_increment_ref_count(void* mem);
void* come_print_ref_count(void* mem);
int come_get_ref_count(void* mem);
void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, void* result_obj);
void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, void* result_obj);
void xassert(char* msg, _Bool test);
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
int err_msg(struct sInfo* info, char* msg, ...);
int err_msg2(struct sInfo* info, char* msg, ...);
int expected_next_character(char c, struct sInfo* info);
_Bool node_conditional_compile(struct sNode* node, struct sInfo* info);
char* make_type_name_string(struct sType* type, struct sInfo* info, _Bool no_static, _Bool cast_type, _Bool typedef_extended);
char* make_come_type_name_string(struct sType* type, struct sInfo* info);
char* make_come_define_var(struct sType* type, char* name, struct sInfo* info);
struct sType* get_no_solved_type(struct sType* type);
struct sType* get_no_solved_type2(struct sType* type);
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
_Bool check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, _Bool print_err_msg, _Bool pointer_massive, _Bool check_params, struct sInfo* info);
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
struct sNode* create_true_object(struct sInfo* info);
struct sNode* create_false_object(struct sInfo* info);
struct sNode* string_node_v21(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* top_level_v94(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* post_position_operator_v21(struct sNode* node, struct sInfo* info);
struct sNode* top_level_v93(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* top_level_v92(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* top_level_v91(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* static_assert_node(struct sNode* exp, struct sNode* exp2, struct sInfo* info);
struct sNothingNode* sNothingNode_initialize(struct sNothingNode* self, struct sInfo* info);
_Bool sNothingNode_terminated(struct sNothingNode* self);
char* sNothingNode_kind(struct sNothingNode* self);
_Bool sNothingNode_compile(struct sNothingNode* self, struct sInfo* info);
static void write_source_file_position_to_source(struct sInfo* info);
_Bool node_compile(struct sNode* node, struct sInfo* info);
_Bool transpile_conditional_with_free_right_object_value(struct sNode* node, struct sInfo* info);
static void CVALUE_finalize(struct CVALUE* self);
static void sType_finalize(struct sType* self);
static void list$1sType$ph$p_finalize(struct list$1sType$ph* self);
static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self);
static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self);
static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self);
static void list$1int$$p_finalize(struct list$1int$* self);
static void list_item$1int$$p_finalize(struct list_item$1int$* self);
static void list$1char$ph$p_finalize(struct list$1char$ph* self);
static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self);
static void clear_tmp_file(struct sInfo* info);
static void clear_tmp_file_without_object_file(struct sInfo* info);
static void clear_tmp_file_without_object_file_and_ccfile(struct sInfo* info);
static _Bool cpp(struct sInfo* info);
static _Bool compile(struct sInfo* info, _Bool output_object_file, struct list$1char$ph* object_files);
static struct list$1char$ph* list$1char$ph_insert(struct list$1char$ph* self, int position, char* item);
static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item);
static _Bool linker(struct sInfo* info, struct list$1char$ph* object_files);
static char* list$1char$ph_begin(struct list$1char$ph* self);
static _Bool list$1char$ph_end(struct list$1char$ph* self);
static char* list$1char$ph_next(struct list$1char$ph* self);
static void init_classes(struct sInfo* info);
static struct map$2char$phsClass$ph* map$2char$phsClass$ph_insert(struct map$2char$phsClass$ph* self, char* key, struct sClass* item);
static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2char$phsType$ph$ph$p_finalize(struct list$1tuple2$2char$phsType$ph$ph* self);
static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self);
static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self);
static void map$2char$phsClass$ph_rehash(struct map$2char$phsClass$ph* self);
static char* map$2char$phsClass$ph_begin(struct map$2char$phsClass$ph* self);
static _Bool map$2char$phsClass$ph_end(struct map$2char$phsClass$ph* self);
static char* map$2char$phsClass$ph_next(struct map$2char$phsClass$ph* self);
static struct sClass* map$2char$phsClass$ph_at(struct map$2char$phsClass$ph* self, char* key, struct sClass* default_value);
static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char* item);
static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail);
static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self);
static struct map$2char$phsType$ph* map$2char$phsType$ph_insert(struct map$2char$phsType$ph* self, char* key, struct sType* item);
static void map$2char$phsType$ph_rehash(struct map$2char$phsType$ph* self);
static char* map$2char$phsType$ph_begin(struct map$2char$phsType$ph* self);
static _Bool map$2char$phsType$ph_end(struct map$2char$phsType$ph* self);
static char* map$2char$phsType$ph_next(struct map$2char$phsType$ph* self);
static struct sType* map$2char$phsType$ph_at(struct map$2char$phsType$ph* self, char* key, struct sType* default_value);
static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph_push_back(struct list$1tuple2$2char$phsType$ph$ph* self, struct tuple2$2char$phsType$ph* item);
static struct tuple2$2char$phsType$ph* tuple2$2char$phsType$ph_initialize(struct tuple2$2char$phsType$ph* self, char* v1, struct sType* v2);
void create_pico_version_header();
int come_main(int argc, char** argv);
static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self);
static void sInfo_finalize(struct sInfo* self);
static void map$2char$phsFun$ph$p_finalize(struct map$2char$phsFun$ph* self);
static void sFun_finalize(struct sFun* self);
static void list$1sVar$ph$p_finalize(struct list$1sVar$ph* self);
static void list_item$1sVar$ph$p_finalize(struct list_item$1sVar$ph* self);
static void sVar_finalize(struct sVar* self);
static void sBlock_finalize(struct sBlock* self);
static void map$2char$phsGenericsFun$ph$p_finalize(struct map$2char$phsGenericsFun$ph* self);
static void sGenericsFun_finalize(struct sGenericsFun* self);
static void map$2char$phsClass$ph$p_finalize(struct map$2char$phsClass$ph* self);
static void map$2char$phsClassModule$ph$p_finalize(struct map$2char$phsClassModule$ph* self);
static void sClassModule_finalize(struct sClassModule* self);
static void map$2char$phsType$ph$p_finalize(struct map$2char$phsType$ph* self);
static void map$2char$phbuffer$ph$p_finalize(struct map$2char$phbuffer$ph* self);
static void map$2char$phchar$ph$p_finalize(struct map$2char$phchar$ph* self);
static void sModule_finalize(struct sModule* self);
static void list$1sRightValueObject$ph$p_finalize(struct list$1sRightValueObject$ph* self);
static void list_item$1sRightValueObject$ph$p_finalize(struct list_item$1sRightValueObject$ph* self);
static void sRightValueObject_finalize(struct sRightValueObject* self);
static void list$1CVALUE$ph$p_finalize(struct list$1CVALUE$ph* self);
static void list_item$1CVALUE$ph$p_finalize(struct list_item$1CVALUE$ph* self);
static struct map$2char$phsFun$ph* map$2char$phsFun$ph_initialize(struct map$2char$phsFun$ph* self);
static void list$1char$ph_finalize(struct list$1char$ph* self);
static void map$2char$phsFun$ph_finalize(struct map$2char$phsFun$ph* self);
static struct map$2char$phbuffer$ph* map$2char$phbuffer$ph_initialize(struct map$2char$phbuffer$ph* self);
static void map$2char$phbuffer$ph_finalize(struct map$2char$phbuffer$ph* self);
static struct map$2char$phchar$ph* map$2char$phchar$ph_initialize(struct map$2char$phchar$ph* self);
static void map$2char$phchar$ph_finalize(struct map$2char$phchar$ph* self);
static struct map$2char$phsGenericsFun$ph* map$2char$phsGenericsFun$ph_initialize(struct map$2char$phsGenericsFun$ph* self);
static void map$2char$phsGenericsFun$ph_finalize(struct map$2char$phsGenericsFun$ph* self);
static struct map$2char$phsClass$ph* map$2char$phsClass$ph_initialize(struct map$2char$phsClass$ph* self);
static void map$2char$phsClass$ph_finalize(struct map$2char$phsClass$ph* self);
static struct map$2char$phsClassModule$ph* map$2char$phsClassModule$ph_initialize(struct map$2char$phsClassModule$ph* self);
static void map$2char$phsClassModule$ph_finalize(struct map$2char$phsClassModule$ph* self);
static struct map$2char$phsType$ph* map$2char$phsType$ph_initialize(struct map$2char$phsType$ph* self);
static void map$2char$phsType$ph_finalize(struct map$2char$phsType$ph* self);
static struct list$1sRightValueObject$ph* list$1sRightValueObject$ph_initialize(struct list$1sRightValueObject$ph* self);
static void list$1sRightValueObject$ph_finalize(struct list$1sRightValueObject$ph* self);
static struct list$1CVALUE$ph* list$1CVALUE$ph_initialize(struct list$1CVALUE$ph* self);
static void list$1CVALUE$ph_finalize(struct list$1CVALUE$ph* self);
static int list$1char$ph_length(struct list$1char$ph* self);
static char* list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position);
static char* list$1char$ph_operator_load_element(struct list$1char$ph* self, int position);
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
static void write_source_file_position_to_source(struct sInfo* info)
{
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    void* __right_value2 = (void*)0;
    if(gComeOriginalSourcePosition) {
        if(info->writing_source_file_position) {
            add_come_code(info,((char*)(__right_value2=xsprintf("# \%s \"\%s\"\n",((char*)(__right_value0=int_to_string(info->sline))),((char*)(__right_value1=string_to_string(info->sname)))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0));
            info->writing_source_file_position=0;
        }
    }
}

_Bool node_compile(struct sNode* node, struct sInfo* info)
{
    void* __right_value0 = (void*)0;
    char* sname;
    int sline;
    int sline_real;
    void* __right_value1 = (void*)0;
    char* __dec_obj1;
    _Bool result;
    char* __dec_obj2;
    _Bool __result_obj__0;
    sname=(char*)come_increment_ref_count(__builtin_string(info->sname));
    sline=info->sline;
    sline_real=info->sline_real;
    __dec_obj1=info->sname,
    info->sname=(char*)come_increment_ref_count(__builtin_string(((char*)(__right_value0=node->sname(node->_protocol_obj)))));
    __dec_obj1 = come_decrement_ref_count(__dec_obj1, (void*)0, (void*)0, 0,0, (void*)0);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    info->sline=node->sline(node->_protocol_obj);
    info->sline_real=node->sline_real(node->_protocol_obj);
    write_source_file_position_to_source(info);
    result=node->compile(node->_protocol_obj,info);
    __dec_obj2=info->sname,
    info->sname=(char*)come_increment_ref_count(__builtin_string(sname));
    __dec_obj2 = come_decrement_ref_count(__dec_obj2, (void*)0, (void*)0, 0,0, (void*)0);
    info->sline=sline;
    info->sline_real=sline_real;
    __result_obj__0 = result;
    (sname = come_decrement_ref_count(sname, (void*)0, (void*)0, 0, 0, (void*)0));
    return __result_obj__0;
}

_Bool transpile_conditional_with_free_right_object_value(struct sNode* node, struct sInfo* info)
{
    _Bool in_conditional;
    _Bool Value;
    _Bool existance_right_value_object;
    void* __right_value0 = (void*)0;
    struct CVALUE* conditional_value;
    _Bool already_defined;
    int num_conditional;
    _Bool in_conditional_0;
    _Bool in_conditional_1;
    _Bool in_conditional_2;
    _Bool __result_obj__0;
    in_conditional=info->in_conditional;
    info->in_conditional=1;
    Value=node_compile(node,info);
    if(!Value) {
        info->in_conditional=in_conditional;
        return 0;
    }
    else {
    }
    info->in_conditional=in_conditional;
    existance_right_value_object=existance_free_right_value_objects(info);
    conditional_value=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    add_last_code_to_source(info);
    already_defined=info->num_conditional<info->max_conditional;
    num_conditional=info->num_conditional;
    if(!existance_right_value_object) {
    }
    else if(already_defined) {
        info->num_conditional++;
    }
    else {
        add_come_code_at_function_head(info,"_Bool _conditional_value_X%d;\n",info->num_conditional++);
    }
    if(info->num_conditional>=info->max_conditional) {
        info->max_conditional=info->num_conditional;
    }
    if(existance_right_value_object) {
        if(string_operator_not_equals(conditional_value->c_value,"")) {
            in_conditional_0=info->in_conditional;
            info->in_conditional=1;
            add_come_code(info,"({(_conditional_value_X%d=(%s));",num_conditional,conditional_value->c_value);
            info->in_conditional=in_conditional_0;
        }
        free_right_value_objects(info);
        if(string_operator_not_equals(conditional_value->c_value,"")) {
            in_conditional_1=info->in_conditional;
            info->in_conditional=1;
            add_come_code(info,"_conditional_value_X%d;})",num_conditional);
            info->in_conditional=in_conditional_1;
        }
    }
    else {
        in_conditional_2=info->in_conditional;
        info->in_conditional=1;
        add_come_code(info,"%s",conditional_value->c_value,1);
        info->in_conditional=in_conditional_2;
    }
    __result_obj__0 = 1;
    come_call_finalizer(CVALUE_finalize, conditional_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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

static void clear_tmp_file(struct sInfo* info)
{
    char* input_file_name;
    void* __right_value0 = (void*)0;
    input_file_name=(char*)come_increment_ref_count(info->sname);
    if(input_file_name!=((void*)0)&&string_operator_not_equals(input_file_name,"")) {
        (void)system(((char*)(__right_value0=xsprintf("%s \"%s\".*",RM,input_file_name))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    }
    (input_file_name = come_decrement_ref_count(input_file_name, (void*)0, (void*)0, 0, 0, (void*)0));
}

static void clear_tmp_file_without_object_file(struct sInfo* info)
{
    char* input_file_name;
    void* __right_value0 = (void*)0;
    input_file_name=(char*)come_increment_ref_count(info->sname);
    if(input_file_name!=((void*)0)&&string_operator_not_equals(input_file_name,"")) {
        (void)system(((char*)(__right_value0=xsprintf("%s \"%s\".i* \"%s\".c*",RM,input_file_name,input_file_name))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    }
    (input_file_name = come_decrement_ref_count(input_file_name, (void*)0, (void*)0, 0, 0, (void*)0));
}

static void clear_tmp_file_without_object_file_and_ccfile(struct sInfo* info)
{
    char* input_file_name;
    void* __right_value0 = (void*)0;
    input_file_name=(char*)come_increment_ref_count(info->sname);
    if(input_file_name!=((void*)0)&&string_operator_not_equals(input_file_name,"")) {
        (void)system(((char*)(__right_value0=xsprintf("%s \"%s\".i* \"%s\".c.out",RM,input_file_name,input_file_name))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    }
    (input_file_name = come_decrement_ref_count(input_file_name, (void*)0, (void*)0, 0, 0, (void*)0));
}

static _Bool cpp(struct sInfo* info)
{
    char* input_file_name;
    char* output_file_name;
    void* __right_value0 = (void*)0;
    char* __dec_obj3;
    char* __dec_obj4;
    int is_mac;
    int is_android;
    int is_linux;
    int is_arm64;
    int is_m5stack;
    int is_pico;
    int is_emb;
    _Bool _32bit;
    struct _IO_FILE* f;
    int is_raspi;
    void* __right_value1 = (void*)0;
    void* __right_value2 = (void*)0;
    char* __dec_obj5;
    char* cmd3;
    int rc;
    char* command2;
    char* cmd2;
    int rc_3;
    char* command2_4;
    char* command2_5;
    char* cmd2_6;
    char* command2_7;
    int rc_8;
    char* command2_9;
    char* cmd2_10;
    char* command2_11;
    int rc_12;
    char* command2_13;
    char* cmd3_14;
    int rc_15;
    char* command2_16;
    char* cmd4;
    char* command2_17;
    char* cmd3_18;
    int rc_19;
    char* command2_20;
    char* cmd4_21;
    char* command2_22;
    char* __dec_obj6;
    char* cmd3_23;
    int rc_24;
    char* command2_25;
    char* cmd4_26;
    char* command2_27;
    _Bool __result_obj__0;
    memset(&output_file_name, 0, sizeof(output_file_name));
    memset(&is_raspi, 0, sizeof(is_raspi));
    input_file_name=(char*)come_increment_ref_count(info->sname);
    if(info->output_file_name) {
        __dec_obj3=output_file_name,
        output_file_name=(char*)come_increment_ref_count(string_operator_add(info->output_file_name,".i"));
        __dec_obj3 = come_decrement_ref_count(__dec_obj3, (void*)0, (void*)0, 0,0, (void*)0);
    }
    else {
        __dec_obj4=output_file_name,
        output_file_name=(char*)come_increment_ref_count(string_operator_add(info->sname,".i"));
        __dec_obj4 = come_decrement_ref_count(__dec_obj4, (void*)0, (void*)0, 0,0, (void*)0);
    }
    is_mac=system("uname -a | grep Darwin 1> /dev/null 2>/dev/null")==0;
    is_android=system("uname -a | grep Android 1> /dev/null 2>/dev/null")==0;
    is_linux=1;
    is_arm64=system("uname -a | grep arm64 1> /dev/null 2> /dev/null")==0;
    is_m5stack=info->m5stack_cpp;
    is_pico=info->pico_cpp;
    is_emb=info->emb_cpp;
    _32bit=0;
    f=fopen("/proc/cpuinfo","r");
    if(f) {
        fclose(f);
        is_raspi=system("cat /proc/cpuinfo | grep 'Model' | grep 'Raspberry Pi' > /dev/null 2> /dev/null ")==0;
        if(is_raspi) {
            _32bit=system(" lscpu | grep armv7l > /dev/null 2> /dev/null ")==0;
        }
    }
    else {
        is_raspi=0;
    }
    if(is_pico||is_m5stack) {
        _32bit=1;
    }
    if(_32bit) {
        __dec_obj5=info->cpp_option,
        info->cpp_option=(char*)come_increment_ref_count(string_operator_add(info->cpp_option,((char*)(__right_value1=xsprintf(" -D__32BIT_CPU__ ")))));
        __dec_obj5 = come_decrement_ref_count(__dec_obj5, (void*)0, (void*)0, 0,0, (void*)0);
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
    }
    if(is_android) {
        cmd3=(char*)come_increment_ref_count(xsprintf("cpp %s -lang-c %s -I. -I\"%s\"/include -DPREFIX=\"\\\"%s\\\"\" -I\"%s\"/include -I/data/data/com.termux/files/usr/include/mariadb -D__ANDROID__ \"%s\" > \"%s\" 2> \"%s\".cpp.out",(((info->remove_comment)?(""):(" -C"))),info->cpp_option,getenv("HOME"),"/usr/local/","/usr/local/",input_file_name,output_file_name,output_file_name));
        if(info->verbose) {
            puts(cmd3);
        }
        rc=system(cmd3);
        command2=(char*)come_increment_ref_count(xsprintf("grep error\\: \"%s\".cpp.out 2>/dev/null",output_file_name));
        if(info->verbose) {
            puts(command2);
        }
        (void)system(command2);
        if(rc!=0) {
            printf("cpp failed(%s)\n",command2);
            exit(2);
        }
        (cmd3 = come_decrement_ref_count(cmd3, (void*)0, (void*)0, 0, 0, (void*)0));
        (command2 = come_decrement_ref_count(command2, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    else if(is_m5stack) {
        cmd2=(char*)come_increment_ref_count(xsprintf("xtensa-esp-elf-cpp -E %s -lang-c %s -I. -I/usr/local/include -DPREFIX=\"\\\"%s\\\"\" -I\"%s\"/include -DNEO_C -D__M5STACK__ \"%s\" > \"%s\" 2> \"%s\".cpp.out",((info->remove_comment)?(""):(" -C")),info->cpp_option,"/usr/local/","/usr/local/",input_file_name,output_file_name,output_file_name));
        if(info->verbose) {
            puts(cmd2);
        }
        rc_3=system(cmd2);
        command2_4=(char*)come_increment_ref_count(xsprintf("grep error\\: \"%s\".cpp.out 2>/dev/null",output_file_name));
        if(info->verbose) {
            puts(command2_4);
        }
        (void)system(command2_4);
        if(rc_3!=0) {
            printf("failed to cpp(2) (%s)\n",cmd2);
            exit(5);
        }
        (command2_4 = come_decrement_ref_count(command2_4, (void*)0, (void*)0, 0, 0, (void*)0));
        command2_5=(char*)come_increment_ref_count(xsprintf("grep error\\: \"%s\".cpp.out 2>/dev/null",output_file_name));
        if(info->verbose) {
            puts(command2_5);
        }
        (void)system(command2_5);
        (cmd2 = come_decrement_ref_count(cmd2, (void*)0, (void*)0, 0, 0, (void*)0));
        (command2_5 = come_decrement_ref_count(command2_5, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    else if(is_pico) {
        cmd2_6=(char*)come_increment_ref_count(xsprintf("arm-none-eabi-gcc -E %s -lang-c %s -I. -I/usr/local/include -DPREFIX=\"\\\"%s\\\"\" -I\"%s\"/include -DNEO_C -D__PICO__ \"%s\" > \"%s\" 2> \"%s\".cpp.out",((info->remove_comment)?(""):(" -C")),info->cpp_option,"/usr/local/","/usr/local/",input_file_name,output_file_name,output_file_name));
        if(info->verbose) {
            puts(cmd2_6);
        }
        command2_7=(char*)come_increment_ref_count(xsprintf("grep error\\: \"%s\".cpp.out 2>/dev/null",output_file_name));
        if(info->verbose) {
            puts(command2_7);
        }
        (void)system(command2_7);
        rc_8=system(cmd2_6);
        if(rc_8!=0) {
            printf("failed to cpp(2) (%s)\n",cmd2_6);
            exit(5);
        }
        (command2_7 = come_decrement_ref_count(command2_7, (void*)0, (void*)0, 0, 0, (void*)0));
        command2_9=(char*)come_increment_ref_count(xsprintf("grep error\\: \"%s\".cpp.out 2>/dev/null",output_file_name));
        if(info->verbose) {
            puts(command2_9);
        }
        (void)system(command2_9);
        (cmd2_6 = come_decrement_ref_count(cmd2_6, (void*)0, (void*)0, 0, 0, (void*)0));
        (command2_9 = come_decrement_ref_count(command2_9, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    else if(is_mac) {
        cmd2_10=(char*)come_increment_ref_count(xsprintf("gcc -E %s -lang-c %s -I. -I/usr/local/include -DPREFIX=\"\\\"%s\\\"\" -I\"%s\"/include -DNEO_C -D__MAC__ -I/opt/homebrew/opt/boehmgc/include/ -I/opt/homebrew/opt/openssl/include \"%s\" > \"%s\" 2> \"%s\".cpp.out",(((info->remove_comment)?(""):(" -C"))),info->cpp_option,"/usr/local/","/usr/local/",input_file_name,output_file_name,output_file_name));
        if(info->verbose) {
            puts(cmd2_10);
        }
        command2_11=(char*)come_increment_ref_count(xsprintf("grep error\\: \"%s\".cpp.out 2>/dev/null",output_file_name));
        if(info->verbose) {
            puts(command2_11);
        }
        (void)system(command2_11);
        rc_12=system(cmd2_10);
        if(rc_12!=0) {
            printf("failed to cpp(2) (%s)\n",cmd2_10);
            exit(5);
        }
        (command2_11 = come_decrement_ref_count(command2_11, (void*)0, (void*)0, 0, 0, (void*)0));
        command2_13=(char*)come_increment_ref_count(xsprintf("grep error\\: \"%s\".cpp.out 2>/dev/null",output_file_name));
        if(info->verbose) {
            puts(command2_13);
        }
        (void)system(command2_13);
        (cmd2_10 = come_decrement_ref_count(cmd2_10, (void*)0, (void*)0, 0, 0, (void*)0));
        (command2_13 = come_decrement_ref_count(command2_13, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    else if(is_emb) {
        cmd3_14=(char*)come_increment_ref_count(xsprintf("clang -E %s -lang-c %s -I. -I\"%s\"/include -DPREFIX=\"\\\"%s\\\"\" -I\"%s\"/include -D__EMB__ \"%s\" > \"%s\" 2> \"%s\".cpp.out",(((info->remove_comment)?(""):(" -C"))),info->cpp_option,getenv("HOME"),"/usr/local/","/usr/local/",input_file_name,output_file_name,output_file_name));
        if(info->verbose) {
            puts(cmd3_14);
        }
        rc_15=system(cmd3_14);
        command2_16=(char*)come_increment_ref_count(xsprintf("grep error\\: \"%s\".cpp.out 2>/dev/null",output_file_name));
        if(info->verbose) {
            puts(command2_16);
        }
        (void)system(command2_16);
        if(rc_15!=0) {
            cmd4=(char*)come_increment_ref_count(xsprintf("clang -E %s -I. %s -DPREFIX=\"%s\" -I\"%s\"/include -D__EMB__ \"%s\" > \"%s\" 2> \"%s\".cpp.out",((info->remove_comment)?(""):(" -C")),info->cpp_option,"/usr/local/","/usr/local/",input_file_name,output_file_name,output_file_name));
            command2_17=(char*)come_increment_ref_count(xsprintf("grep error\\: \"%s\".cpp.out 2>/dev/null",output_file_name));
            if(info->verbose) {
                puts(command2_17);
            }
            (void)system(command2_17);
            if(rc_15!=0) {
                printf("failed to cpp(2) (%s)\n",cmd4);
                exit(5);
            }
            (cmd4 = come_decrement_ref_count(cmd4, (void*)0, (void*)0, 0, 0, (void*)0));
            (command2_17 = come_decrement_ref_count(command2_17, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        (cmd3_14 = come_decrement_ref_count(cmd3_14, (void*)0, (void*)0, 0, 0, (void*)0));
        (command2_16 = come_decrement_ref_count(command2_16, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    else if(is_raspi) {
        cmd3_18=(char*)come_increment_ref_count(xsprintf("cpp %s -lang-c %s -I. -I\"%s\"/include -DPREFIX=\"\\\"%s\\\"\" -I\"%s\"/include -D__RASPBERRY_PI__ \"%s\" > \"%s\" 2> \"%s\".cpp.out",(((info->remove_comment)?(""):(" -C"))),info->cpp_option,getenv("HOME"),"/usr/local/","/usr/local/",input_file_name,output_file_name,output_file_name));
        if(info->verbose) {
            puts(cmd3_18);
        }
        rc_19=system(cmd3_18);
        command2_20=(char*)come_increment_ref_count(xsprintf("grep error\\: \"%s\".cpp.out 2>/dev/null",output_file_name));
        if(info->verbose) {
            puts(command2_20);
        }
        (void)system(command2_20);
        if(rc_19!=0) {
            cmd4_21=(char*)come_increment_ref_count(xsprintf("cpp %s -I. %s -DPREFIX=\"%s\" -I\"%s\"/include -D__RASPBERRY_PI__ \"%s\" > \"%s\" 2> \"%s\".cpp.out",((info->remove_comment)?(""):(" -C")),info->cpp_option,"/usr/local/","/usr/local/",input_file_name,output_file_name,output_file_name));
            command2_22=(char*)come_increment_ref_count(xsprintf("grep error\\: %s.cpp.out 2>/dev/null",output_file_name));
            if(info->verbose) {
                puts(command2_22);
            }
            (void)system(command2_22);
            if(rc_19!=0) {
                printf("failed to cpp(2) (%s)\n",cmd4_21);
                exit(5);
            }
            (cmd4_21 = come_decrement_ref_count(cmd4_21, (void*)0, (void*)0, 0, 0, (void*)0));
            (command2_22 = come_decrement_ref_count(command2_22, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        (cmd3_18 = come_decrement_ref_count(cmd3_18, (void*)0, (void*)0, 0, 0, (void*)0));
        (command2_20 = come_decrement_ref_count(command2_20, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    else if(is_linux) {
        if(is_arm64) {
            __dec_obj6=info->cpp_option,
            info->cpp_option=(char*)come_increment_ref_count(info->cpp_option);
            __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0,0, (void*)0);
        }
        cmd3_23=(char*)come_increment_ref_count(xsprintf("clang -E %s -lang-c %s -I. -I\"%s\"/include -DPREFIX=\"\\\"%s\\\"\" -I\"%s\"/include -D__LINUX__ \"%s\" > \"%s\" 2> \"%s\".cpp.out",(((info->remove_comment)?(""):(" -C"))),info->cpp_option,getenv("HOME"),"/usr/local/","/usr/local/",input_file_name,output_file_name,output_file_name));
        if(info->verbose) {
            puts(cmd3_23);
        }
        rc_24=system(cmd3_23);
        command2_25=(char*)come_increment_ref_count(xsprintf("grep error\\: \"%s\".cpp.out 2>/dev/null",output_file_name));
        if(info->verbose) {
            puts(command2_25);
        }
        (void)system(command2_25);
        if(rc_24!=0) {
            cmd4_26=(char*)come_increment_ref_count(xsprintf("cpp %s -I. %s -DPREFIX=\"%s\" -I\"%s\"/include -D__LINUX__ \"%s\" > \"%s\" 2> \"%s\".cpp.out",((info->remove_comment)?(""):(" -C")),info->cpp_option,"/usr/local/","/usr/local/",input_file_name,output_file_name,output_file_name));
            command2_27=(char*)come_increment_ref_count(xsprintf("grep error\\: \"%s\".cpp.out 2>/dev/null",output_file_name));
            if(info->verbose) {
                puts(command2_27);
            }
            (void)system(command2_27);
            if(rc_24!=0) {
                printf("failed to cpp(2) (%s)\n",cmd4_26);
                exit(5);
            }
            (cmd4_26 = come_decrement_ref_count(cmd4_26, (void*)0, (void*)0, 0, 0, (void*)0));
            (command2_27 = come_decrement_ref_count(command2_27, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        (cmd3_23 = come_decrement_ref_count(cmd3_23, (void*)0, (void*)0, 0, 0, (void*)0));
        (command2_25 = come_decrement_ref_count(command2_25, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    __result_obj__0 = 1;
    (input_file_name = come_decrement_ref_count(input_file_name, (void*)0, (void*)0, 0, 0, (void*)0));
    (output_file_name = come_decrement_ref_count(output_file_name, (void*)0, (void*)0, 0, 0, (void*)0));
    return __result_obj__0;
}

static _Bool compile(struct sInfo* info, _Bool output_object_file, struct list$1char$ph* object_files)
{
    void* __right_value0 = (void*)0;
    char* input_file_name;
    char* output_file_name;
    char* __dec_obj7;
    char* __dec_obj8;
    int is_mac;
    int is_arm64;
    char* __dec_obj9;
    char* __dec_obj10;
    char* command;
    int rc;
    char* command2;
    _Bool __result_obj__0;
    memset(&output_file_name, 0, sizeof(output_file_name));
    input_file_name=(char*)come_increment_ref_count(string_operator_add(info->sname,".c"));
    if(info->output_file_name&&output_object_file) {
        __dec_obj7=output_file_name,
        output_file_name=(char*)come_increment_ref_count(__builtin_string(info->output_file_name));
        __dec_obj7 = come_decrement_ref_count(__dec_obj7, (void*)0, (void*)0, 0,0, (void*)0);
    }
    else {
        __dec_obj8=output_file_name,
        output_file_name=(char*)come_increment_ref_count(string_operator_add(info->sname,".o"));
        __dec_obj8 = come_decrement_ref_count(__dec_obj8, (void*)0, (void*)0, 0,0, (void*)0);
    }
    is_mac=system("uname -a | grep Darwin 1> /dev/null 2>/dev/null")==0;
    is_arm64=system("uname -a | grep arm64 1> /dev/null 2> /dev/null")==0;
    if(is_mac) {
        __dec_obj9=info->clang_option,
        info->clang_option=(char*)come_increment_ref_count(string_operator_add(info->clang_option," -std=gnu17 "));
        __dec_obj9 = come_decrement_ref_count(__dec_obj9, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(is_arm64) {
        __dec_obj10=info->clang_option,
        info->clang_option=(char*)come_increment_ref_count(info->clang_option);
        __dec_obj10 = come_decrement_ref_count(__dec_obj10, (void*)0, (void*)0, 0,0, (void*)0);
    }
    command=(char*)come_increment_ref_count(xsprintf("%s -o \"%s\" -c \"%s\" %s >> %s.out 2>&1",CC,output_file_name,input_file_name,info->clang_option,input_file_name));
    if(info->verbose) {
        puts(command);
    }
    rc=system(command);
    if(rc!=0) {
        printf("%s is faild\n",CC);
        command2=(char*)come_increment_ref_count(xsprintf("grep error\\: \"%s\".out 2>/dev/null",input_file_name));
        if(info->verbose) {
            puts(command2);
        }
        (void)system(command2);
        exit(2);
        (command2 = come_decrement_ref_count(command2, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(!output_object_file) {
        list$1char$ph_insert(object_files,0,(char*)come_increment_ref_count(__builtin_string(output_file_name)));
    }
    __result_obj__0 = 1;
    (input_file_name = come_decrement_ref_count(input_file_name, (void*)0, (void*)0, 0, 0, (void*)0));
    (output_file_name = come_decrement_ref_count(output_file_name, (void*)0, (void*)0, 0, 0, (void*)0));
    (command = come_decrement_ref_count(command, (void*)0, (void*)0, 0, 0, (void*)0));
    return __result_obj__0;
}

static struct list$1char$ph* list$1char$ph_insert(struct list$1char$ph* self, int position, char* item)
{
    struct list$1char$ph* __result_obj__0;
    int len;
    int i;
    char* default_value;
    void* __right_value0 = (void*)0;
    struct list_item$1char$ph* litem;
    char* __dec_obj14;
    struct list_item$1char$ph* litem_30;
    char* __dec_obj15;
    struct list_item$1char$ph* it;
    int i_31;
    struct list_item$1char$ph* litem_32;
    char* __dec_obj16;
    if(self==((void*)0)) {
        __result_obj__0 = ((void*)0);
        (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0));
        return __result_obj__0;
    }
    if(position<0) {
        position+=self->len+1;
    }
    if(position<0) {
        position=0;
    }
    if(self->len==0||position>=self->len) {
        len=self->len;
        for(i=0;i<position-len;i++){
            memset(&default_value,0,sizeof(char*));
            list$1char$ph_push_back(self,(char*)come_increment_ref_count(default_value));
            (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        list$1char$ph_push_back(self,(char*)come_increment_ref_count(item));
        __result_obj__0 = self;
        (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0));
        return __result_obj__0;
    }
    if(position==0) {
        litem=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./neo-c.h", 1128, "struct list_item$1char$ph*"))));
        litem->prev=((void*)0);
        litem->next=self->head;
        __dec_obj14=litem->item,
        litem->item=(char*)come_increment_ref_count(item);
        __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0,0, (void*)0);
        self->head->prev=litem;
        self->head=litem;
        self->len++;
    }
    else if(self->len==1) {
        litem_30=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./neo-c.h", 1140, "struct list_item$1char$ph*"))));
        litem_30->prev=self->head;
        litem_30->next=self->tail;
        __dec_obj15=litem_30->item,
        litem_30->item=(char*)come_increment_ref_count(item);
        __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0,0, (void*)0);
        self->tail->prev=litem_30;
        self->head->next=litem_30;
        self->len++;
    }
    else {
        it=self->head;
        i_31=0;
        while(it!=((void*)0)) {
            if(position==i_31) {
                litem_32=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./neo-c.h", 1156, "struct list_item$1char$ph*"))));
                litem_32->prev=it->prev;
                litem_32->next=it;
                __dec_obj16=litem_32->item,
                litem_32->item=(char*)come_increment_ref_count(item);
                __dec_obj16 = come_decrement_ref_count(__dec_obj16, (void*)0, (void*)0, 0,0, (void*)0);
                it->prev->next=litem_32;
                it->prev=litem_32;
                self->len++;
            }
            it=it->next;
            i_31++;
        }
    }
    __result_obj__0 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0));
    return __result_obj__0;
}

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item)
{
    struct list$1char$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1char$ph* litem;
    char* __dec_obj11;
    struct list_item$1char$ph* litem_28;
    char* __dec_obj12;
    struct list_item$1char$ph* litem_29;
    char* __dec_obj13;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0));
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./neo-c.h", 953, "struct list_item$1char$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj11=litem->item,
        litem->item=(char*)come_increment_ref_count(item);
        __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0,0, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        litem_28=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./neo-c.h", 963, "struct list_item$1char$ph*"))));
        litem_28->prev=self->head;
        litem_28->next=((void*)0);
        __dec_obj12=litem_28->item,
        litem_28->item=(char*)come_increment_ref_count(item);
        __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0,0, (void*)0);
        self->tail=litem_28;
        self->head->next=litem_28;
    }
    else {
        litem_29=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./neo-c.h", 973, "struct list_item$1char$ph*"))));
        litem_29->prev=self->tail;
        litem_29->next=((void*)0);
        __dec_obj13=litem_29->item,
        litem_29->item=(char*)come_increment_ref_count(item);
        __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0,0, (void*)0);
        self->tail->next=litem_29;
        self->tail=litem_29;
    }
    self->len++;
    __result_obj__0 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0));
    return __result_obj__0;
}

static _Bool linker(struct sInfo* info, struct list$1char$ph* object_files)
{
    char* output_file_name;
    void* __right_value0 = (void*)0;
    char* __dec_obj17;
    char* __dec_obj18;
    void* __right_value1 = (void*)0;
    struct buffer* command;
    int is_mac;
    void* __right_value2 = (void*)0;
    char* __dec_obj19;
    struct list$1char$ph* o2_saved;
    char* it;
    int is_mac_35;
    char* cmd;
    int rc;
    char* cmd_36;
    int rc_37;
    char* cmd_38;
    int rc_39;
    int is_mac2;
    int Value;
    _Bool _conditional_value_X0;
    int is_mac3;
    struct buffer* retry;
    int Value_40;
    _Bool _conditional_value_X1;
    _Bool __result_obj__0;
    void* __right_value3 = (void*)0;
    void* __right_value4 = (void*)0;
    void* __right_value5 = (void*)0;
    void* __right_value6 = (void*)0;
    char* str;
    int Value_41;
    char* str2;
    int Value_42;
    output_file_name=((void*)0);
    if(info->output_file_name) {
        __dec_obj17=output_file_name,
        output_file_name=(char*)come_increment_ref_count(__builtin_string(info->output_file_name));
        __dec_obj17 = come_decrement_ref_count(__dec_obj17, (void*)0, (void*)0, 0,0, (void*)0);
    }
    else {
        __dec_obj18=output_file_name,
        output_file_name=(char*)come_increment_ref_count(xnoextname(info->sname));
        __dec_obj18 = come_decrement_ref_count(__dec_obj18, (void*)0, (void*)0, 0,0, (void*)0);
    }
    command=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "02transpile.c", 423, "struct buffer*"))));
    buffer_append_format(command,"%s -o \"%s\" ",CC,output_file_name);
    is_mac=system("uname -a | grep Darwin 1> /dev/null 2>/dev/null")==0;
    if(is_mac) {
        __dec_obj19=info->linker_option,
        info->linker_option=(char*)come_increment_ref_count(string_operator_add(info->linker_option,((char*)(__right_value1=xsprintf(" -std=gnu17 ")))));
        __dec_obj19 = come_decrement_ref_count(__dec_obj19, (void*)0, (void*)0, 0,0, (void*)0);
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
    }
    buffer_append_str(command,((char*)(__right_value2=string_operator_add(((char*)(__right_value1=charp_operator_add(" ",info->linker_option)))," "))));
    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
    (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0));
    for(o2_saved=object_files,it=list$1char$ph_begin(o2_saved);!list$1char$ph_end(o2_saved);it=list$1char$ph_next(o2_saved)){
        buffer_append_format(command,"%s ",it);
    }
    is_mac_35=system("uname -a | grep Darwin 1> /dev/null 2>/dev/null")==0;
    if(is_mac_35) {
        buffer_append_str(command," -L/opt/homebrew/opt/openssl/lib -L/opt/homebrew/opt/boehmgc/lib -L/opt/homebrew/opt/zstd/lib ");
    }
    cmd=(char*)come_increment_ref_count(xsprintf("ls /usr/local/lib 1> /dev/null 2>/dev/null"));
    rc=system(cmd);
    if(rc==0) {
        buffer_append_str(command," -L. -L/usr/local/lib ");
    }
    (cmd = come_decrement_ref_count(cmd, (void*)0, (void*)0, 0, 0, (void*)0));
    cmd_36=(char*)come_increment_ref_count(xsprintf("ls \"%s\"/lib 1> /dev/null 2>/dev/null",getenv("HOME")));
    rc_37=system(cmd_36);
    if(rc_37==0) {
        buffer_append_format(command," -L\"%s\"/lib ",getenv("HOME"));
    }
    (cmd_36 = come_decrement_ref_count(cmd_36, (void*)0, (void*)0, 0, 0, (void*)0));
    cmd_38=(char*)come_increment_ref_count(xsprintf("ls \"%s\"/lib 1> /dev/null 2>/dev/null","/usr/local/"));
    rc_39=system(cmd_38);
    if(rc_39==0) {
        buffer_append_format(command," -L\"%s\"/lib ","/usr/local/");
    }
    buffer_append_str(command,((char*)(__right_value2=string_operator_add(((char*)(__right_value1=charp_operator_add(" ",info->linker_option2)))," "))));
    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
    (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0));
    buffer_append_format(command," %s ",info->clang_option);
    if(gComePthread) {
        buffer_append_str(command," -lpthread ");
    }
    if(gComeNet) {
        buffer_append_str(command," -lssl ");
    }
    is_mac2=system("uname -a | grep Darwin 1> /dev/null 2>/dev/null")==0;
    if(!is_mac2) {
        buffer_append_str(command," -latomic ");
    }
    if(info->verbose) {
        puts(((char*)(__right_value0=buffer_to_string(command))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    }
    Value=system(((char*)(__right_value0=buffer_to_string(command))));
    if(({(_conditional_value_X0=(Value));    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
_conditional_value_X0;})) {
        is_mac3=system("uname -a | grep Darwin 1> /dev/null 2>/dev/null")==0;
        if(!is_mac3) {
            retry=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "02transpile.c", 482, "struct buffer*"))));
            buffer_append_str(retry,((char*)(__right_value0=buffer_to_string(command))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            buffer_append_str(retry," -latomic ");
            if(info->verbose) {
                puts(((char*)(__right_value0=buffer_to_string(retry))));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            }
            Value_40=system(((char*)(__right_value0=buffer_to_string(retry))));
            if(({(_conditional_value_X1=(Value_40));            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
_conditional_value_X1;})) {
            }
            else {
                __result_obj__0 = 1;
                come_call_finalizer(buffer_finalize, retry, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (output_file_name = come_decrement_ref_count(output_file_name, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(buffer_finalize, command, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (cmd_38 = come_decrement_ref_count(cmd_38, (void*)0, (void*)0, 0, 0, (void*)0));
                return __result_obj__0;
            }
            come_call_finalizer(buffer_finalize, retry, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        str=(char*)come_increment_ref_count(charp_operator_add(((char*)(__right_value3=xsprintf("gcc"))),((char*)(__right_value5=charp_substring(((char*)(__right_value4=buffer_to_string(command))),strlen(CC),-1)))));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1, 0, (void*)0));
        (__right_value4 = come_decrement_ref_count(__right_value4, (void*)0, (void*)0, 1, 0, (void*)0));
        (__right_value5 = come_decrement_ref_count(__right_value5, (void*)0, (void*)0, 1, 0, (void*)0));
        Value_41=system(str);
        if(Value_41) {
            if(!is_mac3) {
                str2=(char*)come_increment_ref_count(string_operator_add(str,((char*)(__right_value1=xsprintf(" -latomic ")))));
                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
                if(info->verbose) {
                    puts(str2);
                }
                Value_42=system(str2);
                if(Value_42) {
                    printf("%s is failed\n",CC);
                    __result_obj__0 = 0;
                    (str2 = come_decrement_ref_count(str2, (void*)0, (void*)0, 0, 0, (void*)0));
                    (str = come_decrement_ref_count(str, (void*)0, (void*)0, 0, 0, (void*)0));
                    (output_file_name = come_decrement_ref_count(output_file_name, (void*)0, (void*)0, 0, 0, (void*)0));
                    come_call_finalizer(buffer_finalize, command, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    (cmd_38 = come_decrement_ref_count(cmd_38, (void*)0, (void*)0, 0, 0, (void*)0));
                    return __result_obj__0;
                }
                else {
                    __result_obj__0 = 1;
                    (str2 = come_decrement_ref_count(str2, (void*)0, (void*)0, 0, 0, (void*)0));
                    (str = come_decrement_ref_count(str, (void*)0, (void*)0, 0, 0, (void*)0));
                    (output_file_name = come_decrement_ref_count(output_file_name, (void*)0, (void*)0, 0, 0, (void*)0));
                    come_call_finalizer(buffer_finalize, command, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    (cmd_38 = come_decrement_ref_count(cmd_38, (void*)0, (void*)0, 0, 0, (void*)0));
                    return __result_obj__0;
                }
                (str2 = come_decrement_ref_count(str2, (void*)0, (void*)0, 0, 0, (void*)0));
            }
            printf("%s is failed\n",CC);
            __result_obj__0 = 0;
            (str = come_decrement_ref_count(str, (void*)0, (void*)0, 0, 0, (void*)0));
            (output_file_name = come_decrement_ref_count(output_file_name, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(buffer_finalize, command, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (cmd_38 = come_decrement_ref_count(cmd_38, (void*)0, (void*)0, 0, 0, (void*)0));
            return __result_obj__0;
        }
        else {
        }
        (str = come_decrement_ref_count(str, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    else {
    }
    __result_obj__0 = 1;
    (output_file_name = come_decrement_ref_count(output_file_name, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(buffer_finalize, command, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (cmd_38 = come_decrement_ref_count(cmd_38, (void*)0, (void*)0, 0, 0, (void*)0));
    return __result_obj__0;
}

static char* list$1char$ph_begin(struct list$1char$ph* self)
{
    char* result;
    char* __result_obj__0;
    char* result_33;
    if(self==((void*)0)) {
        memset(&result,0,sizeof(char*));
        __result_obj__0 = result;
        return __result_obj__0;
    }
    self->it=self->head;
    if(self->it) {
        __result_obj__0 = self->it->item;
        return __result_obj__0;
    }
    memset(&result_33,0,sizeof(char*));
    __result_obj__0 = result_33;
    return __result_obj__0;
}

static _Bool list$1char$ph_end(struct list$1char$ph* self)
{
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1char$ph_next(struct list$1char$ph* self)
{
    char* result;
    char* __result_obj__0;
    char* result_34;
    if(self==((void*)0)||self->it==((void*)0)) {
        memset(&result,0,sizeof(char*));
        __result_obj__0 = result;
        return __result_obj__0;
    }
    self->it=self->it->next;
    if(self->it) {
        __result_obj__0 = self->it->item;
        return __result_obj__0;
    }
    memset(&result_34,0,sizeof(char*));
    __result_obj__0 = result_34;
    return __result_obj__0;
}

static void init_classes(struct sInfo* info)
{
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    void* __right_value2 = (void*)0;
    void* __right_value3 = (void*)0;
    int i;
    char* generics_type;
    int i_52;
    char* generics_type_53;
    int is_mac;
    char* type_name;
    struct sType* __exception_result_var_b1;
    struct sType* __exception_result_var_b2;
    struct sType* __exception_result_var_b3;
    struct sType* type;
    char* __dec_obj20;
    struct sClass* klass;
    struct sType* __exception_result_var_b4;
    struct sType* __exception_result_var_b5;
    void* __right_value4 = (void*)0;
    struct sType* __exception_result_var_b6;
    void* __right_value5 = (void*)0;
    struct sType* __exception_result_var_b7;
    struct sType* __exception_result_var_b8;
    struct sType* __exception_result_var_b9;
    struct sType* __exception_result_var_b10;
    struct sType* __exception_result_var_b11;
    struct sType* __exception_result_var_b12;
    struct sType* __exception_result_var_b13;
    struct sType* __exception_result_var_b14;
    struct sType* __exception_result_var_b15;
    struct sType* __exception_result_var_b16;
    struct sType* __exception_result_var_b17;
    struct sType* __exception_result_var_b18;
    map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("int")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc_v2(1, sizeof(struct sClass)*(1), "02transpile.c", 522, "struct sClass*")),((char*)(__right_value2=xsprintf("int"))),1,0,0,0,0,0,0,-1,-1,0,0,0,info)));
    (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0));
    map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("short")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc_v2(1, sizeof(struct sClass)*(1), "02transpile.c", 523, "struct sClass*")),((char*)(__right_value2=xsprintf("short"))),1,0,0,0,0,0,0,-1,-1,0,0,0,info)));
    (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0));
    map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("long")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc_v2(1, sizeof(struct sClass)*(1), "02transpile.c", 524, "struct sClass*")),((char*)(__right_value2=xsprintf("long"))),1,0,0,0,0,0,0,-1,-1,0,0,0,info)));
    (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0));
    map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("char")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc_v2(1, sizeof(struct sClass)*(1), "02transpile.c", 525, "struct sClass*")),((char*)(__right_value2=xsprintf("char"))),1,0,0,0,0,0,0,-1,-1,0,0,0,info)));
    (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0));
    map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("bool")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc_v2(1, sizeof(struct sClass)*(1), "02transpile.c", 526, "struct sClass*")),((char*)(__right_value2=xsprintf("bool"))),1,0,0,0,0,0,0,-1,-1,0,0,0,info)));
    (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0));
    map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("_Bool")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc_v2(1, sizeof(struct sClass)*(1), "02transpile.c", 527, "struct sClass*")),((char*)(__right_value2=xsprintf("_Bool"))),1,0,0,0,0,0,0,-1,-1,0,0,0,info)));
    (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0));
    map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("void")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc_v2(1, sizeof(struct sClass)*(1), "02transpile.c", 528, "struct sClass*")),((char*)(__right_value2=xsprintf("void"))),0,0,0,0,0,0,0,-1,-1,0,0,0,info)));
    (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0));
    map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("float")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc_v2(1, sizeof(struct sClass)*(1), "02transpile.c", 529, "struct sClass*")),((char*)(__right_value2=xsprintf("float"))),0,0,0,0,0,0,1,-1,-1,0,0,0,info)));
    (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0));
    map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("double")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc_v2(1, sizeof(struct sClass)*(1), "02transpile.c", 530, "struct sClass*")),((char*)(__right_value2=xsprintf("double"))),0,0,0,0,0,0,1,-1,-1,0,0,0,info)));
    (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0));
    map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("_Float16")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc_v2(1, sizeof(struct sClass)*(1), "02transpile.c", 531, "struct sClass*")),((char*)(__right_value2=xsprintf("_Float16"))),0,0,0,0,0,0,1,-1,-1,0,0,0,info)));
    (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0));
    map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("lambda")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc_v2(1, sizeof(struct sClass)*(1), "02transpile.c", 532, "struct sClass*")),((char*)(__right_value2=xsprintf("lambda"))),0,0,0,0,0,0,0,-1,-1,0,0,0,info)));
    (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0));
    map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("__uint128_t")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc_v2(1, sizeof(struct sClass)*(1), "02transpile.c", 533, "struct sClass*")),((char*)(__right_value2=xsprintf("__uint128_t"))),1,0,0,0,0,0,0,-1,-1,0,0,0,info)));
    (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0));
    map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("_Float128")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc_v2(1, sizeof(struct sClass)*(1), "02transpile.c", 534, "struct sClass*")),((char*)(__right_value2=xsprintf("_Float128"))),1,0,0,0,0,0,0,-1,-1,0,0,0,info)));
    (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0));
    map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("__float128")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc_v2(1, sizeof(struct sClass)*(1), "02transpile.c", 535, "struct sClass*")),((char*)(__right_value2=xsprintf("__float128"))),0,0,0,0,0,0,1,-1,-1,0,0,0,info)));
    (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0));
    map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("__typename")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc_v2(1, sizeof(struct sClass)*(1), "02transpile.c", 536, "struct sClass*")),((char*)(__right_value2=xsprintf("__typename"))),0,0,0,0,0,0,0,-1,-1,0,0,1,info)));
    (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0));
    map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("_Complex")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc_v2(1, sizeof(struct sClass)*(1), "02transpile.c", 537, "struct sClass*")),((char*)(__right_value2=xsprintf("_Complex"))),0,0,0,0,0,0,1,-1,-1,0,0,0,info)));
    (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0));
    map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("__int128")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc_v2(1, sizeof(struct sClass)*(1), "02transpile.c", 538, "struct sClass*")),((char*)(__right_value2=xsprintf("__int128"))),1,0,0,0,0,0,0,-1,-1,0,0,0,info)));
    (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0));
    for(i=0;i<12;i++){
        generics_type=(char*)come_increment_ref_count(xsprintf("__generics_type%d",i));
        map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(generics_type),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc_v2(1, sizeof(struct sClass)*(1), "02transpile.c", 541, "struct sClass*")),generics_type,0,0,1,0,0,0,0,i,-1,0,0,0,info)));
        (generics_type = come_decrement_ref_count(generics_type, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    for(i_52=0;i_52<7;i_52++){
        generics_type_53=(char*)come_increment_ref_count(xsprintf("__mgenerics_type%d",i_52));
        map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(generics_type_53),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc_v2(1, sizeof(struct sClass)*(1), "02transpile.c", 545, "struct sClass*")),generics_type_53,0,0,0,1,0,0,0,-1,i_52,0,0,0,info)));
        (generics_type_53 = come_decrement_ref_count(generics_type_53, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    is_mac=system("uname -a | grep Darwin 1> /dev/null 2>/dev/null")==0;
    if(is_mac) {
        map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("__builtin_va_list")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc_v2(1, sizeof(struct sClass)*(1), "02transpile.c", 551, "struct sClass*")),((char*)(__right_value2=xsprintf("__builtin_va_list"))),1,0,0,0,0,0,0,-1,-1,0,0,0,info)));
        (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0));
        type_name=(char*)come_increment_ref_count(__builtin_string("__builtin_va_list"));
        type=(struct sType*)come_increment_ref_count((come_push_stackframe("02transpile.c", 555, 2),__exception_result_var_b3=(come_push_stackframe("02transpile.c", 555, 0),__exception_result_var_b1=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "02transpile.c", 555, "struct sType*")),(char*)come_increment_ref_count(xsprintf("__builtin_va_list")),0,info,0), come_pop_stackframe(), __exception_result_var_b1), come_pop_stackframe(), __exception_result_var_b3));
        __dec_obj20=type->mOriginalTypeName,
        type->mOriginalTypeName=(char*)come_increment_ref_count(__builtin_string("__builtin_va_list"));
        __dec_obj20 = come_decrement_ref_count(__dec_obj20, (void*)0, (void*)0, 0,0, (void*)0);
        map$2char$phsType$ph_insert(info->types,(char*)come_increment_ref_count(__builtin_string(type_name)),(struct sType*)come_increment_ref_count(type));
        (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        klass=(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc_v2(1, sizeof(struct sClass)*(1), "02transpile.c", 561, "struct sClass*")),((char*)(__right_value1=xsprintf("__builtin_va_list"))),0,0,0,0,0,1,0,-1,-1,0,0,0,info));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        list$1tuple2$2char$phsType$ph$ph_push_back(klass->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph*)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "02transpile.c", 563, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(__builtin_string("v1")),(struct sType*)come_increment_ref_count((come_push_stackframe("02transpile.c", 563, 5),__exception_result_var_b6=(come_push_stackframe("02transpile.c", 563, 3),__exception_result_var_b4=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "02transpile.c", 563, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char*")),0,info,0), come_pop_stackframe(), __exception_result_var_b4), come_pop_stackframe(), __exception_result_var_b6)))));
        list$1tuple2$2char$phsType$ph$ph_push_back(klass->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph*)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "02transpile.c", 564, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(__builtin_string("v2")),(struct sType*)come_increment_ref_count((come_push_stackframe("02transpile.c", 564, 8),__exception_result_var_b9=(come_push_stackframe("02transpile.c", 564, 6),__exception_result_var_b7=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "02transpile.c", 564, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char*")),0,info,0), come_pop_stackframe(), __exception_result_var_b7), come_pop_stackframe(), __exception_result_var_b9)))));
        list$1tuple2$2char$phsType$ph$ph_push_back(klass->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph*)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "02transpile.c", 565, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(__builtin_string("v3")),(struct sType*)come_increment_ref_count((come_push_stackframe("02transpile.c", 565, 11),__exception_result_var_b12=(come_push_stackframe("02transpile.c", 565, 9),__exception_result_var_b10=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "02transpile.c", 565, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char*")),0,info,0), come_pop_stackframe(), __exception_result_var_b10), come_pop_stackframe(), __exception_result_var_b12)))));
        list$1tuple2$2char$phsType$ph$ph_push_back(klass->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph*)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "02transpile.c", 566, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(__builtin_string("v4")),(struct sType*)come_increment_ref_count((come_push_stackframe("02transpile.c", 566, 14),__exception_result_var_b15=(come_push_stackframe("02transpile.c", 566, 12),__exception_result_var_b13=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "02transpile.c", 566, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),0,info,0), come_pop_stackframe(), __exception_result_var_b13), come_pop_stackframe(), __exception_result_var_b15)))));
        list$1tuple2$2char$phsType$ph$ph_push_back(klass->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph*)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "02transpile.c", 567, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(__builtin_string("v5")),(struct sType*)come_increment_ref_count((come_push_stackframe("02transpile.c", 567, 17),__exception_result_var_b18=(come_push_stackframe("02transpile.c", 567, 15),__exception_result_var_b16=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "02transpile.c", 567, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),0,info,0), come_pop_stackframe(), __exception_result_var_b16), come_pop_stackframe(), __exception_result_var_b18)))));
        map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("__builtin_va_list")),(struct sClass*)come_increment_ref_count(klass));
        come_call_finalizer(sClass_finalize, klass, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static struct map$2char$phsClass$ph* map$2char$phsClass$ph_insert(struct map$2char$phsClass$ph* self, char* key, struct sClass* item)
{
    struct map$2char$phsClass$ph* __result_obj__0;
    unsigned int hash;
    unsigned int it;
    _Bool same_key_exist;
    char* it2;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sClass_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result_obj__0;
    }
    if(self->len*10>=self->size) {
        map$2char$phsClass$ph_rehash(self);
    }
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(1) {
        if(self->item_existance[it]) {
            if(string_equals(self->keys[it],key)) {
                if(1) {
                    list$1char$ph_remove(self->key_list,self->keys[it]);
                    (self->keys[it] = come_decrement_ref_count(self->keys[it], (void*)0, (void*)0, 0, 0, (void*)0));
                    self->keys[it]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it]);
                    self->keys[it]=key;
                }
                if(1) {
                    come_call_finalizer(sClass_finalize, self->items[it], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->items[it]=(struct sClass*)come_increment_ref_count(item);
                }
                else {
                    self->items[it]=item;
                }
                break;
            }
            it++;
            if(it>=self->size) {
                it=0;
            }
            else if(it==hash) {
                printf("unexpected error in map.insert\n");
                stackframe_v2();
                exit(2);
            }
        }
        else {
            self->item_existance[it]=1;
            if(1) {
                self->keys[it]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it]=key;
            }
            if(1) {
                self->items[it]=(struct sClass*)come_increment_ref_count(item);
            }
            else {
                self->items[it]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist=0;
    for(it2=list$1char$ph_begin(self->key_list);!list$1char$ph_end(self->key_list);it2=list$1char$ph_next(self->key_list)){
        if(string_equals(it2,key)) {
            same_key_exist=1;
        }
    }
    if(!same_key_exist) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__0 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sClass_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__0;
}

static void sClass_finalize(struct sClass* self)
{
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->mFields!=((void*)0)) {
        come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, self->mFields, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        (self->mParentClassName = come_decrement_ref_count(self->mParentClassName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

static void list$1tuple2$2char$phsType$ph$ph$p_finalize(struct list$1tuple2$2char$phsType$ph$ph* self)
{
    struct list_item$1tuple2$2char$phsType$ph$ph* it;
    struct list_item$1tuple2$2char$phsType$ph$ph* prev_it;
    if(self==((void*)0)) {
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1tuple2$2char$phsType$ph$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self)
{
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self)
{
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void map$2char$phsClass$ph_rehash(struct map$2char$phsClass$ph* self)
{
    int size;
    void* __right_value0 = (void*)0;
    char** keys;
    struct sClass** items;
    _Bool* item_existance;
    int len;
    char* it;
    struct sClass* default_value;
    struct sClass* it2;
    unsigned int hash;
    int n;
    struct sClass* default_value_45;
    size=self->size*10;
    keys=(char**)come_increment_ref_count(((char**)(__right_value0=(char**)come_calloc_v2(1, sizeof(char*)*(1*(size)), "./neo-c.h", 2213, "char**"))));
    items=(struct sClass**)come_increment_ref_count(((struct sClass**)(__right_value0=(struct sClass**)come_calloc_v2(1, sizeof(struct sClass*)*(1*(size)), "./neo-c.h", 2214, "struct sClass**"))));
    item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value0=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(size)), "./neo-c.h", 2215, "_Bool*"))));
    len=0;
    for(it=map$2char$phsClass$ph_begin(self);!map$2char$phsClass$ph_end(self);it=map$2char$phsClass$ph_next(self)){
        memset(&default_value,0,sizeof(struct sClass*));
        it2=((struct sClass*)(__right_value0=map$2char$phsClass$ph_at(self,it,(struct sClass*)come_increment_ref_count(default_value))));
        hash=string_get_hash_key(((char*)it))%size;
        n=hash;
        while(1) {
            if(item_existance[n]) {
                n++;
                if(n>=size) {
                    n=0;
                }
                else if(n==hash) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe_v2();
                    exit(2);
                }
            }
            else {
                item_existance[n]=1;
                keys[n]=it;
                memset(&default_value_45,0,sizeof(struct sClass*));
                items[n]=((struct sClass*)(__right_value0=map$2char$phsClass$ph_at(self,it,(struct sClass*)come_increment_ref_count(default_value_45))));
                len++;
                come_call_finalizer(sClass_finalize, default_value_45, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                come_call_finalizer(sClass_finalize, default_value_45, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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

static char* map$2char$phsClass$ph_begin(struct map$2char$phsClass$ph* self)
{
    char* result;
    char* __result_obj__0;
    char* result_43;
    if(self==((void*)0)) {
        memset(&result,0,sizeof(char*));
        __result_obj__0 = result;
        return __result_obj__0;
    }
    self->key_list->it=self->key_list->head;
    if(self->key_list->it) {
        __result_obj__0 = self->key_list->it->item;
        return __result_obj__0;
    }
    memset(&result_43,0,sizeof(char*));
    __result_obj__0 = result_43;
    return __result_obj__0;
}

static _Bool map$2char$phsClass$ph_end(struct map$2char$phsClass$ph* self)
{
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsClass$ph_next(struct map$2char$phsClass$ph* self)
{
    char* result;
    char* __result_obj__0;
    char* result_44;
    if(self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result,0,sizeof(char*));
        __result_obj__0 = result;
        return __result_obj__0;
    }
    self->key_list->it=self->key_list->it->next;
    if(self->key_list->it) {
        __result_obj__0 = self->key_list->it->item;
        return __result_obj__0;
    }
    memset(&result_44,0,sizeof(char*));
    __result_obj__0 = result_44;
    return __result_obj__0;
}

static struct sClass* map$2char$phsClass$ph_at(struct map$2char$phsClass$ph* self, char* key, struct sClass* default_value)
{
    struct sClass* __result_obj__0;
    unsigned int hash;
    unsigned int it;
    if(self==((void*)0)) {
        __result_obj__0 = (struct sClass*)come_increment_ref_count(default_value);
        come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(1) {
        if(self->item_existance[it]) {
            if(string_equals(self->keys[it],key)) {
                __result_obj__0 = (struct sClass*)come_increment_ref_count(self->items[it]);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
            it++;
            if(it>=self->size) {
                it=0;
            }
            else if(it==hash) {
                __result_obj__0 = (struct sClass*)come_increment_ref_count(default_value);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
        }
        else {
            __result_obj__0 = (struct sClass*)come_increment_ref_count(default_value);
            come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__0;
        }
    }
    __result_obj__0 = (struct sClass*)come_increment_ref_count(default_value);
    come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char* item)
{
    struct list$1char$ph* __result_obj__0;
    int it2;
    struct list_item$1char$ph* it;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        return __result_obj__0;
    }
    it2=0;
    it=self->head;
    while(it!=((void*)0)) {
        if(string_equals(it->item,item)) {
            list$1char$ph_delete(self,it2,it2+1);
            break;
        }
        it2++;
        it=it->next;
    }
    __result_obj__0 = self;
    return __result_obj__0;
}

static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail)
{
    struct list$1char$ph* __result_obj__0;
    int tmp;
    struct list_item$1char$ph* it;
    int i;
    struct list_item$1char$ph* prev_it;
    struct list_item$1char$ph* it_46;
    int i_47;
    struct list_item$1char$ph* prev_it_48;
    struct list_item$1char$ph* it_49;
    struct list_item$1char$ph* head_prev_it;
    struct list_item$1char$ph* tail_it;
    int i_50;
    struct list_item$1char$ph* prev_it_51;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        return __result_obj__0;
    }
    if(head<0) {
        head+=self->len;
    }
    if(tail<0) {
        tail+=self->len+1;
    }
    if(head>tail) {
        tmp=tail;
        tail=head;
        head=tmp;
    }
    if(head<0) {
        head=0;
    }
    if(tail>self->len) {
        tail=self->len;
    }
    if(head>=self->len) {
        __result_obj__0 = self;
        return __result_obj__0;
    }
    if(head==tail) {
        __result_obj__0 = self;
        return __result_obj__0;
    }
    if(head==0&&tail==self->len) {
        list$1char$ph_reset(self);
    }
    else if(head==0) {
        it=self->head;
        i=0;
        while(it!=((void*)0)) {
            if(i<tail) {
                prev_it=it;
                it=it->next;
                i++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(i==tail) {
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
    else if(tail==self->len) {
        it_46=self->head;
        i_47=0;
        while(it_46!=((void*)0)) {
            if(i_47==head) {
                self->tail=it_46->prev;
                self->tail->next=((void*)0);
            }
            if(i_47>=head) {
                prev_it_48=it_46;
                it_46=it_46->next;
                i_47++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_48, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_46=it_46->next;
                i_47++;
            }
        }
    }
    else {
        it_49=self->head;
        head_prev_it=((void*)0);
        tail_it=((void*)0);
        i_50=0;
        while(it_49!=((void*)0)) {
            if(i_50==head) {
                head_prev_it=it_49->prev;
            }
            if(i_50==tail) {
                tail_it=it_49;
            }
            if(i_50>=head&&i_50<tail) {
                prev_it_51=it_49;
                it_49=it_49->next;
                i_50++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_51, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_49=it_49->next;
                i_50++;
            }
        }
        if(head_prev_it!=((void*)0)) {
            head_prev_it->next=tail_it;
        }
        if(tail_it!=((void*)0)) {
            tail_it->prev=head_prev_it;
        }
    }
    __result_obj__0 = self;
    return __result_obj__0;
}

static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self)
{
    struct list$1char$ph* __result_obj__0;
    struct list_item$1char$ph* it;
    struct list_item$1char$ph* prev_it;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        return __result_obj__0;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__0 = self;
    return __result_obj__0;
}

static struct map$2char$phsType$ph* map$2char$phsType$ph_insert(struct map$2char$phsType$ph* self, char* key, struct sType* item)
{
    struct map$2char$phsType$ph* __result_obj__0;
    unsigned int hash;
    unsigned int it;
    _Bool same_key_exist;
    char* it2;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result_obj__0;
    }
    if(self->len*10>=self->size) {
        map$2char$phsType$ph_rehash(self);
    }
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(1) {
        if(self->item_existance[it]) {
            if(string_equals(self->keys[it],key)) {
                if(1) {
                    list$1char$ph_remove(self->key_list,self->keys[it]);
                    (self->keys[it] = come_decrement_ref_count(self->keys[it], (void*)0, (void*)0, 0, 0, (void*)0));
                    self->keys[it]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it]);
                    self->keys[it]=key;
                }
                if(1) {
                    come_call_finalizer(sType_finalize, self->items[it], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->items[it]=(struct sType*)come_increment_ref_count(item);
                }
                else {
                    self->items[it]=item;
                }
                break;
            }
            it++;
            if(it>=self->size) {
                it=0;
            }
            else if(it==hash) {
                printf("unexpected error in map.insert\n");
                stackframe_v2();
                exit(2);
            }
        }
        else {
            self->item_existance[it]=1;
            if(1) {
                self->keys[it]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it]=key;
            }
            if(1) {
                self->items[it]=(struct sType*)come_increment_ref_count(item);
            }
            else {
                self->items[it]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist=0;
    for(it2=list$1char$ph_begin(self->key_list);!list$1char$ph_end(self->key_list);it2=list$1char$ph_next(self->key_list)){
        if(string_equals(it2,key)) {
            same_key_exist=1;
        }
    }
    if(!same_key_exist) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__0 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__0;
}

static void map$2char$phsType$ph_rehash(struct map$2char$phsType$ph* self)
{
    int size;
    void* __right_value0 = (void*)0;
    char** keys;
    struct sType** items;
    _Bool* item_existance;
    int len;
    char* it;
    struct sType* default_value;
    struct sType* it2;
    unsigned int hash;
    int n;
    struct sType* default_value_56;
    size=self->size*10;
    keys=(char**)come_increment_ref_count(((char**)(__right_value0=(char**)come_calloc_v2(1, sizeof(char*)*(1*(size)), "./neo-c.h", 2213, "char**"))));
    items=(struct sType**)come_increment_ref_count(((struct sType**)(__right_value0=(struct sType**)come_calloc_v2(1, sizeof(struct sType*)*(1*(size)), "./neo-c.h", 2214, "struct sType**"))));
    item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value0=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(size)), "./neo-c.h", 2215, "_Bool*"))));
    len=0;
    for(it=map$2char$phsType$ph_begin(self);!map$2char$phsType$ph_end(self);it=map$2char$phsType$ph_next(self)){
        memset(&default_value,0,sizeof(struct sType*));
        it2=((struct sType*)(__right_value0=map$2char$phsType$ph_at(self,it,(struct sType*)come_increment_ref_count(default_value))));
        hash=string_get_hash_key(((char*)it))%size;
        n=hash;
        while(1) {
            if(item_existance[n]) {
                n++;
                if(n>=size) {
                    n=0;
                }
                else if(n==hash) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe_v2();
                    exit(2);
                }
            }
            else {
                item_existance[n]=1;
                keys[n]=it;
                memset(&default_value_56,0,sizeof(struct sType*));
                items[n]=((struct sType*)(__right_value0=map$2char$phsType$ph_at(self,it,(struct sType*)come_increment_ref_count(default_value_56))));
                len++;
                come_call_finalizer(sType_finalize, default_value_56, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                come_call_finalizer(sType_finalize, default_value_56, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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

static char* map$2char$phsType$ph_begin(struct map$2char$phsType$ph* self)
{
    char* result;
    char* __result_obj__0;
    char* result_54;
    if(self==((void*)0)) {
        memset(&result,0,sizeof(char*));
        __result_obj__0 = result;
        return __result_obj__0;
    }
    self->key_list->it=self->key_list->head;
    if(self->key_list->it) {
        __result_obj__0 = self->key_list->it->item;
        return __result_obj__0;
    }
    memset(&result_54,0,sizeof(char*));
    __result_obj__0 = result_54;
    return __result_obj__0;
}

static _Bool map$2char$phsType$ph_end(struct map$2char$phsType$ph* self)
{
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsType$ph_next(struct map$2char$phsType$ph* self)
{
    char* result;
    char* __result_obj__0;
    char* result_55;
    if(self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result,0,sizeof(char*));
        __result_obj__0 = result;
        return __result_obj__0;
    }
    self->key_list->it=self->key_list->it->next;
    if(self->key_list->it) {
        __result_obj__0 = self->key_list->it->item;
        return __result_obj__0;
    }
    memset(&result_55,0,sizeof(char*));
    __result_obj__0 = result_55;
    return __result_obj__0;
}

static struct sType* map$2char$phsType$ph_at(struct map$2char$phsType$ph* self, char* key, struct sType* default_value)
{
    struct sType* __result_obj__0;
    unsigned int hash;
    unsigned int it;
    if(self==((void*)0)) {
        __result_obj__0 = (struct sType*)come_increment_ref_count(default_value);
        come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(1) {
        if(self->item_existance[it]) {
            if(string_equals(self->keys[it],key)) {
                __result_obj__0 = (struct sType*)come_increment_ref_count(self->items[it]);
                come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
            it++;
            if(it>=self->size) {
                it=0;
            }
            else if(it==hash) {
                __result_obj__0 = (struct sType*)come_increment_ref_count(default_value);
                come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
        }
        else {
            __result_obj__0 = (struct sType*)come_increment_ref_count(default_value);
            come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__0;
        }
    }
    __result_obj__0 = (struct sType*)come_increment_ref_count(default_value);
    come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph_push_back(struct list$1tuple2$2char$phsType$ph$ph* self, struct tuple2$2char$phsType$ph* item)
{
    struct list$1tuple2$2char$phsType$ph$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1tuple2$2char$phsType$ph$ph* litem;
    struct tuple2$2char$phsType$ph* __dec_obj21;
    struct list_item$1tuple2$2char$phsType$ph$ph* litem_57;
    struct tuple2$2char$phsType$ph* __dec_obj22;
    struct list_item$1tuple2$2char$phsType$ph$ph* litem_58;
    struct tuple2$2char$phsType$ph* __dec_obj23;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "./neo-c.h", 953, "struct list_item$1tuple2$2char$phsType$ph$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj21=litem->item,
        litem->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __dec_obj21,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        litem_57=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "./neo-c.h", 963, "struct list_item$1tuple2$2char$phsType$ph$ph*"))));
        litem_57->prev=self->head;
        litem_57->next=((void*)0);
        __dec_obj22=litem_57->item,
        litem_57->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __dec_obj22,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem_57;
        self->head->next=litem_57;
    }
    else {
        litem_58=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "./neo-c.h", 973, "struct list_item$1tuple2$2char$phsType$ph$ph*"))));
        litem_58->prev=self->tail;
        litem_58->next=((void*)0);
        __dec_obj23=litem_58->item,
        litem_58->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __dec_obj23,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail->next=litem_58;
        self->tail=litem_58;
    }
    self->len++;
    __result_obj__0 = self;
    come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__0;
}

static struct tuple2$2char$phsType$ph* tuple2$2char$phsType$ph_initialize(struct tuple2$2char$phsType$ph* self, char* v1, struct sType* v2)
{
    char* __dec_obj24;
    struct sType* __dec_obj25;
    struct tuple2$2char$phsType$ph* __result_obj__0;
    __dec_obj24=self->v1,
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj24 = come_decrement_ref_count(__dec_obj24, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj25=self->v2,
    self->v2=(struct sType*)come_increment_ref_count(v2);
    come_call_finalizer(sType_finalize, __dec_obj25,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __result_obj__0 = (struct tuple2$2char$phsType$ph*)come_increment_ref_count(self);
    come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sType_finalize, v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

void create_pico_version_header()
{
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    char* Value;
    _Bool _conditional_value_X0;
    int version_major;
    char* p;
    int version_miner;
    char* p_59;
    int version_revision;
    char* p_60;
    void* __right_value2 = (void*)0;
    void* __right_value3 = (void*)0;
    char* version_string;
    int Value_61;
    void* __right_value4 = (void*)0;
    if(getenv("PICO_SDK_PATH")) {
        Value=(char*)come_increment_ref_count(charp_read((((char*)(__right_value0=charp_operator_add(getenv("PICO_SDK_PATH"),"/pico_sdk_version.cmake"))))));
        if(({(_conditional_value_X0=(Value));        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
_conditional_value_X0;})) {
            version_major=0;
            p=strstr(Value,"set(PICO_SDK_VERSION_MAJOR");
            if(p) {
                p+=strlen("set(PICO_SDK_VERSION_MAJOR");
                while(*p==32||*p==9) {
                    p++;
                }
                while(xisdigit(*p)) {
                    version_major=version_major*10+(*p-48);
                    p++;
                }
            }
            version_miner=0;
            p_59=strstr(Value,"set(PICO_SDK_VERSION_MINOR");
            if(p_59) {
                p_59+=strlen("set(PICO_SDK_VERSION_MINOR");
                while(*p_59==32||*p_59==9) {
                    p_59++;
                }
                while(xisdigit(*p_59)) {
                    version_miner=version_miner*10+*p_59-48;
                    p_59++;
                }
            }
            version_revision=0;
            p_60=strstr(Value,"set(PICO_SDK_VERSION_REVISION");
            if(p_60) {
                p_60+=strlen("set(PICO_SDK_VERSION_REVISION");
                while(*p_60==32||*p_60==9) {
                    p_60++;
                }
                while(xisdigit(*p_60)) {
                    version_revision=version_revision*10+*p_60-48;
                    p_60++;
                }
            }
            version_string=(char*)come_increment_ref_count(xsprintf("\%s.\%s.\%s",((char*)(__right_value0=int_to_string(version_major))),((char*)(__right_value1=int_to_string(version_miner))),((char*)(__right_value2=int_to_string(version_revision)))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0));
            Value_61=system("mkdir -p pico");
            if(!Value_61) {
                charp_write(((char*)(__right_value4=xsprintf("\#ifndef _PICO_VERSION_H\n\#define _PICO_VERSION_H\n\n\#define PICO_SDK_VERSION_MAJOR \%s\n\#define PICO_SDK_VERSION_MINOR \%s\n\#define PICO_SDK_VERSION_REVISION \%s\n\#define PICO_SDK_VERSION_STRING \"\%s\"\n\n\#endif\n",((char*)(__right_value0=int_to_string(version_major))),((char*)(__right_value1=int_to_string(version_miner))),((char*)(__right_value2=int_to_string(version_revision))),((char*)(__right_value3=string_to_string(version_string)))))),"pico/version.h",0);
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
                (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0));
                (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1, 0, (void*)0));
                (__right_value4 = come_decrement_ref_count(__right_value4, (void*)0, (void*)0, 1, 0, (void*)0));
            }
            else {
            }
            (version_string = come_decrement_ref_count(version_string, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        else {
        }
        (Value = come_decrement_ref_count(Value, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    (void)system("touch pico_config_extra_headers.h");
    (void)system("touch pico_config_platform_headers.h");
}

int come_main(int argc, char** argv)
{
    int start_num;
    char* output_file_name_str;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer* clang_option;
    struct buffer* linker_option;
    struct buffer* linker_option2;
    struct buffer* cpp_option;
    struct list$1char$ph* files;
    struct list$1char$ph* object_files;
    _Bool output_object_file;
    _Bool output_cpp_file;
    _Bool output_source_file_flag;
    _Bool output_object_file_flag;
    char* output_file_name;
    _Bool verbose;
    _Bool come_debug;
    _Bool m5stack_cpp;
    _Bool pico_cpp;
    _Bool emb_cpp;
    _Bool gcc_compiler;
    int i;
    char* ext_name;
    char* __dec_obj26;
    char* env;
    struct buffer* __dec_obj27;
    void* __right_value2 = (void*)0;
    char* env_62;
    struct buffer* __dec_obj28;
    void* __right_value3 = (void*)0;
    void* __right_value4 = (void*)0;
    void* __right_value5 = (void*)0;
    void* __right_value6 = (void*)0;
    void* __right_value7 = (void*)0;
    void* __right_value8 = (void*)0;
    void* __right_value9 = (void*)0;
    void* __right_value10 = (void*)0;
    void* __right_value11 = (void*)0;
    void* __right_value12 = (void*)0;
    void* __right_value13 = (void*)0;
    void* __right_value14 = (void*)0;
    void* __right_value15 = (void*)0;
    void* __right_value16 = (void*)0;
    void* __right_value17 = (void*)0;
    void* __right_value18 = (void*)0;
    void* __right_value19 = (void*)0;
    void* __right_value20 = (void*)0;
    void* __right_value21 = (void*)0;
    _Bool _conditional_value_X0;
    _Bool _conditional_value_X1;
    _Bool _conditional_value_X2;
    _Bool _conditional_value_X3;
    struct list$1char$ph* o2_saved;
    char* it;
    struct sInfo info;
    struct _IO_FILE* Value;
    char* __dec_obj29;
    char* __dec_obj30;
    char* __dec_obj31;
    char* __dec_obj32;
    char* __dec_obj33;
    struct map$2char$phsFun$ph* __dec_obj35;
    struct map$2char$phsFun$ph* __dec_obj36;
    struct map$2char$phbuffer$ph* __dec_obj38;
    struct map$2char$phchar$ph* __dec_obj40;
    struct map$2char$phbuffer$ph* __dec_obj41;
    struct map$2char$phbuffer$ph* __dec_obj42;
    struct map$2char$phchar$ph* __dec_obj43;
    struct map$2char$phsGenericsFun$ph* __dec_obj45;
    struct map$2char$phsClass$ph* __dec_obj47;
    struct map$2char$phsClassModule$ph* __dec_obj49;
    struct map$2char$phsType$ph* __dec_obj51;
    struct sModule* __dec_obj52;
    struct list$1sRightValueObject$ph* __dec_obj53;
    struct list$1CVALUE$ph* __dec_obj54;
    struct sVarTable* __dec_obj55;
    struct sVarTable* lv_table;
    struct list$1char$ph* __dec_obj56;
    struct list$1char$ph* __dec_obj57;
    struct map$2char$phsClass$ph* __dec_obj58;
    _Bool Value_77;
    struct buffer* __dec_obj59;
    char* __dec_obj60;
    char* __dec_obj61;
    _Bool Value_78;
    _Bool Value_79;
    _Bool Value_80;
    _Bool Value_81;
    struct sInfo info_82;
    char* __dec_obj62;
    char* __dec_obj63;
    char* __dec_obj64;
    char* __dec_obj65;
    char* __dec_obj66;
    char* __dec_obj67;
    _Bool Value_85;
    int __result_obj__0;
    memset(&info, 0, sizeof(info));
    memset(&info_82, 0, sizeof(info_82));
    start_num=1;
    output_file_name_str=((void*)0);
    clang_option=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "02transpile.c", 649, "struct buffer*"))));
    buffer_append_str(clang_option," -std=c11 ");
    linker_option=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "02transpile.c", 652, "struct buffer*"))));
    linker_option2=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "02transpile.c", 653, "struct buffer*"))));
    cpp_option=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "02transpile.c", 654, "struct buffer*"))));
    buffer_append_str(cpp_option,"-U__GNUC__");
    buffer_append_str(cpp_option," -std=c11 ");
    files=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "02transpile.c", 657, "struct list$1char$ph*"))));
    object_files=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "02transpile.c", 658, "struct list$1char$ph*"))));
    output_object_file=0;
    output_cpp_file=0;
    output_source_file_flag=0;
    output_object_file_flag=1;
    output_file_name=(char*)come_increment_ref_count(output_file_name_str);
    verbose=0;
    come_debug=0;
    m5stack_cpp=0;
    pico_cpp=0;
    emb_cpp=0;
    gcc_compiler=0;
    for(i=start_num;i<argc;i++){
        ext_name=(char*)come_increment_ref_count(xextname(argv[i]));
        if(charp_operator_equals(argv[i],"-o")&&i+1<argc) {
            __dec_obj26=output_file_name,
            output_file_name=(char*)come_increment_ref_count(__builtin_string(argv[i+1]));
            __dec_obj26 = come_decrement_ref_count(__dec_obj26, (void*)0, (void*)0, 0,0, (void*)0);
            i++;
        }
        else if(charp_operator_equals(argv[i],"-e")&&i+1<argc) {
            buffer_append_str(linker_option,((char*)(__right_value1=xsprintf(" -e \%s ",((char*)(__right_value0=charp_to_string(argv[i+1])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            i++;
        }
        else if(charp_operator_equals(argv[i],"-Bstatic")||charp_operator_equals(argv[i],"-Bdynamic")||charp_operator_equals(argv[i],"-Bsymbolic")||charp_operator_equals(argv[i],"-Bsymbolic-functions")) {
            buffer_append_str(linker_option,((char*)(__right_value1=xsprintf(" \%s ",((char*)(__right_value0=charp_to_string(argv[i])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        else if(charp_operator_equals(argv[i],"-B")&&i+1<argc) {
            buffer_append_str(clang_option,((char*)(__right_value1=xsprintf(" -B\%s ",((char*)(__right_value0=charp_to_string(argv[i+1])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            i++;
        }
        else if(strlen(argv[i])>=2&&memcmp(argv[i],"-B",strlen("-B"))==0) {
            buffer_append_str(clang_option,((char*)(__right_value1=xsprintf(" \%s ",((char*)(__right_value0=charp_to_string(argv[i])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        else if(charp_operator_equals(argv[i],"-L")&&i+1<argc) {
            buffer_append_str(linker_option,((char*)(__right_value1=xsprintf(" -L\%s ",((char*)(__right_value0=charp_to_string(argv[i+1])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            i++;
        }
        else if(strlen(argv[i])>=2&&memcmp(argv[i],"-L",strlen("-L"))==0) {
            buffer_append_str(linker_option,((char*)(__right_value1=xsprintf(" \%s ",((char*)(__right_value0=charp_to_string(argv[i])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        else if(charp_operator_equals(argv[i],"-l")&&i+1<argc) {
            buffer_append_str(linker_option2,((char*)(__right_value1=xsprintf(" -l\%s ",((char*)(__right_value0=charp_to_string(argv[i+1])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            i++;
        }
        else if(strlen(argv[i])>=2&&memcmp(argv[i],"-l",strlen("-l"))==0) {
            buffer_append_str(linker_option2,((char*)(__right_value1=xsprintf(" \%s ",((char*)(__right_value0=charp_to_string(argv[i])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        else if(strlen(argv[i])>=4&&memcmp(argv[i],"-Wl,",strlen("-Wl,"))==0) {
            buffer_append_str(linker_option,((char*)(__right_value1=xsprintf(" \%s ",((char*)(__right_value0=charp_to_string(argv[i])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        else if(charp_operator_equals(argv[i],"-Xlinker")&&i+1<argc) {
            buffer_append_str(linker_option,((char*)(__right_value1=xsprintf(" -Xlinker \%s ",((char*)(__right_value0=charp_to_string(argv[i+1])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            i++;
        }
        else if(charp_operator_equals(argv[i],"-rpath")&&i+1<argc) {
            buffer_append_str(linker_option,((char*)(__right_value1=xsprintf(" -Wl,-rpath,\%s ",((char*)(__right_value0=charp_to_string(argv[i+1])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            i++;
        }
        else if(charp_operator_equals(argv[i],"-rpath-link")&&i+1<argc) {
            buffer_append_str(linker_option,((char*)(__right_value1=xsprintf(" -Wl,-rpath-link,\%s ",((char*)(__right_value0=charp_to_string(argv[i+1])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            i++;
        }
        else if(charp_operator_equals(argv[i],"-u")&&i+1<argc) {
            buffer_append_str(linker_option,((char*)(__right_value1=xsprintf(" -u \%s ",((char*)(__right_value0=charp_to_string(argv[i+1])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            i++;
        }
        else if(charp_operator_equals(argv[i],"-Map")&&i+1<argc) {
            buffer_append_str(linker_option,((char*)(__right_value1=xsprintf(" -Wl,-Map,\%s ",((char*)(__right_value0=charp_to_string(argv[i+1])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            i++;
        }
        else if(charp_operator_equals(argv[i],"-z")&&i+1<argc) {
            buffer_append_str(linker_option,((char*)(__right_value1=xsprintf(" -Wl,-z,\%s ",((char*)(__right_value0=charp_to_string(argv[i+1])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            i++;
        }
        else if(charp_operator_equals(argv[i],"-soname")&&i+1<argc) {
            buffer_append_str(linker_option,((char*)(__right_value1=xsprintf(" -Wl,-soname,\%s ",((char*)(__right_value0=charp_to_string(argv[i+1])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            i++;
        }
        else if(charp_operator_equals(argv[i],"--soname")&&i+1<argc) {
            buffer_append_str(linker_option,((char*)(__right_value1=xsprintf(" -Wl,--soname,\%s ",((char*)(__right_value0=charp_to_string(argv[i+1])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            i++;
        }
        else if(charp_operator_equals(argv[i],"--version-script")&&i+1<argc) {
            buffer_append_str(linker_option,((char*)(__right_value1=xsprintf(" -Wl,--version-script,\%s ",((char*)(__right_value0=charp_to_string(argv[i+1])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            i++;
        }
        else if(charp_operator_equals(argv[i],"--dynamic-list")&&i+1<argc) {
            buffer_append_str(linker_option,((char*)(__right_value1=xsprintf(" -Wl,--dynamic-list,\%s ",((char*)(__right_value0=charp_to_string(argv[i+1])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            i++;
        }
        else if(charp_operator_equals(argv[i],"--defsym")&&i+1<argc) {
            buffer_append_str(linker_option,((char*)(__right_value1=xsprintf(" -Wl,--defsym,\%s ",((char*)(__right_value0=charp_to_string(argv[i+1])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            i++;
        }
        else if(charp_operator_equals(argv[i],"--wrap")&&i+1<argc) {
            buffer_append_str(linker_option,((char*)(__right_value1=xsprintf(" -Wl,--wrap,\%s ",((char*)(__right_value0=charp_to_string(argv[i+1])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            i++;
        }
        else if(charp_operator_equals(argv[i],"--exclude-libs")&&i+1<argc) {
            buffer_append_str(linker_option,((char*)(__right_value1=xsprintf(" -Wl,--exclude-libs,\%s ",((char*)(__right_value0=charp_to_string(argv[i+1])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            i++;
        }
        else if(charp_operator_equals(argv[i],"--export-dynamic")||charp_operator_equals(argv[i],"-export-dynamic")) {
            buffer_append_str(linker_option," -Wl,--export-dynamic ");
        }
        else if(charp_operator_equals(argv[i],"--print-gc-sections")) {
            buffer_append_str(linker_option," -Wl,--print-gc-sections ");
        }
        else if(charp_operator_equals(argv[i],"--strip-all")||charp_operator_equals(argv[i],"--strip-debug")) {
            buffer_append_str(linker_option,((char*)(__right_value1=xsprintf(" -Wl,\%s ",((char*)(__right_value0=charp_to_string(argv[i])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        else if(strlen(argv[i])>strlen("--soname")&&memcmp(argv[i],"--soname",strlen("--soname"))==0) {
            buffer_append_str(linker_option,((char*)(__right_value1=xsprintf(" -Wl,\%s ",((char*)(__right_value0=charp_to_string(argv[i])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        else if(strlen(argv[i])>strlen("--version-script")&&memcmp(argv[i],"--version-script",strlen("--version-script"))==0) {
            buffer_append_str(linker_option,((char*)(__right_value1=xsprintf(" -Wl,\%s ",((char*)(__right_value0=charp_to_string(argv[i])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        else if(strlen(argv[i])>strlen("--dynamic-list")&&memcmp(argv[i],"--dynamic-list",strlen("--dynamic-list"))==0) {
            buffer_append_str(linker_option,((char*)(__right_value1=xsprintf(" -Wl,\%s ",((char*)(__right_value0=charp_to_string(argv[i])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        else if(strlen(argv[i])>strlen("--defsym")&&memcmp(argv[i],"--defsym",strlen("--defsym"))==0) {
            buffer_append_str(linker_option,((char*)(__right_value1=xsprintf(" -Wl,\%s ",((char*)(__right_value0=charp_to_string(argv[i])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        else if(strlen(argv[i])>strlen("--wrap")&&memcmp(argv[i],"--wrap",strlen("--wrap"))==0) {
            buffer_append_str(linker_option,((char*)(__right_value1=xsprintf(" -Wl,\%s ",((char*)(__right_value0=charp_to_string(argv[i])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        else if(strlen(argv[i])>strlen("--exclude-libs")&&memcmp(argv[i],"--exclude-libs",strlen("--exclude-libs"))==0) {
            buffer_append_str(linker_option,((char*)(__right_value1=xsprintf(" -Wl,\%s ",((char*)(__right_value0=charp_to_string(argv[i])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        else if(charp_operator_equals(argv[i],"-r")) {
            buffer_append_str(linker_option," -r ");
        }
        else if(charp_operator_equals(argv[i],"--gc-sections")||charp_operator_equals(argv[i],"--no-undefined")||charp_operator_equals(argv[i],"-dead_strip")||charp_operator_equals(argv[i],"--start-group")||charp_operator_equals(argv[i],"--end-group")||charp_operator_equals(argv[i],"--whole-archive")||charp_operator_equals(argv[i],"--no-whole-archive")||charp_operator_equals(argv[i],"--as-needed")||charp_operator_equals(argv[i],"--no-as-needed")) {
            buffer_append_str(linker_option,((char*)(__right_value1=xsprintf(" \%s ",((char*)(__right_value0=charp_to_string(argv[i])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        else if(strlen(argv[i])>=strlen("--build-id")&&memcmp(argv[i],"--build-id",strlen("--build-id"))==0) {
            buffer_append_str(linker_option,((char*)(__right_value1=xsprintf(" \%s ",((char*)(__right_value0=charp_to_string(argv[i])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        else if(charp_operator_equals(argv[i],"-framework")&&i+1<argc) {
            buffer_append_str(linker_option,((char*)(__right_value1=xsprintf(" -framework \%s ",((char*)(__right_value0=charp_to_string(argv[i+1])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            i++;
        }
        else if(charp_operator_equals(argv[i],"-dynamiclib")||charp_operator_equals(argv[i],"-bundle")) {
            buffer_append_str(linker_option,((char*)(__right_value1=xsprintf(" \%s ",((char*)(__right_value0=charp_to_string(argv[i])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        else if(charp_operator_equals(argv[i],"-install_name")&&i+1<argc) {
            buffer_append_str(linker_option,((char*)(__right_value1=xsprintf(" -Wl,-install_name,\%s ",((char*)(__right_value0=charp_to_string(argv[i+1])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            i++;
        }
        else if(charp_operator_equals(argv[i],"-compatibility_version")&&i+1<argc) {
            buffer_append_str(linker_option,((char*)(__right_value1=xsprintf(" -Wl,-compatibility_version,\%s ",((char*)(__right_value0=charp_to_string(argv[i+1])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            i++;
        }
        else if(charp_operator_equals(argv[i],"-current_version")&&i+1<argc) {
            buffer_append_str(linker_option,((char*)(__right_value1=xsprintf(" -Wl,-current_version,\%s ",((char*)(__right_value0=charp_to_string(argv[i+1])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            i++;
        }
        else if(charp_operator_equals(argv[i],"-exported_symbols_list")&&i+1<argc) {
            buffer_append_str(linker_option,((char*)(__right_value1=xsprintf(" -Wl,-exported_symbols_list,\%s ",((char*)(__right_value0=charp_to_string(argv[i+1])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            i++;
        }
        else if(charp_operator_equals(argv[i],"-unexported_symbols_list")&&i+1<argc) {
            buffer_append_str(linker_option,((char*)(__right_value1=xsprintf(" -Wl,-unexported_symbols_list,\%s ",((char*)(__right_value0=charp_to_string(argv[i+1])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            i++;
        }
        else if(charp_operator_equals(argv[i],"-dead_strip_dylibs")) {
            buffer_append_str(linker_option," -Wl,-dead_strip_dylibs ");
        }
        else if(charp_operator_equals(argv[i],"-shared")) {
            buffer_append_str(linker_option," -shared ");
        }
        else if(charp_operator_equals(argv[i],"-static")) {
            buffer_append_str(linker_option," -static ");
        }
        else if(charp_operator_equals(argv[i],"-rdynamic")) {
            buffer_append_str(linker_option," -rdynamic ");
        }
        else if(charp_operator_equals(argv[i],"-pie")) {
            buffer_append_str(linker_option," -pie ");
        }
        else if(charp_operator_equals(argv[i],"-no-pie")) {
            buffer_append_str(linker_option," -no-pie ");
        }
        else if(charp_operator_equals(argv[i],"-static-libgcc")) {
            buffer_append_str(linker_option," -static-libgcc ");
        }
        else if(charp_operator_equals(argv[i],"-static-libstdc++")) {
            buffer_append_str(linker_option," -static-libstdc++ ");
        }
        else if(charp_operator_equals(argv[i],"-nostdlib")) {
            buffer_append_str(clang_option," -nostdlib ");
            buffer_append_str(linker_option," -nostdlib ");
        }
        else if(charp_operator_equals(argv[i],"-nostartfiles")) {
            buffer_append_str(clang_option," -nostartfiles ");
            buffer_append_str(linker_option," -nostartfiles ");
        }
        else if(charp_operator_equals(argv[i],"-nodefaultlibs")) {
            buffer_append_str(clang_option," -nodefaultlibs ");
            buffer_append_str(linker_option," -nodefaultlibs ");
        }
        else if(charp_operator_equals(argv[i],"-stdlib")&&i+1<argc) {
            buffer_append_str(clang_option,((char*)(__right_value1=xsprintf(" -stdlib=\%s ",((char*)(__right_value0=charp_to_string(argv[i+1])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            buffer_append_str(linker_option,((char*)(__right_value1=xsprintf(" -stdlib=\%s ",((char*)(__right_value0=charp_to_string(argv[i+1])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            i++;
        }
        else if(strlen(argv[i])>=8&&memcmp(argv[i],"-stdlib",strlen("-stdlib"))==0) {
            buffer_append_str(clang_option,((char*)(__right_value1=xsprintf(" \%s ",((char*)(__right_value0=charp_to_string(argv[i])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            buffer_append_str(linker_option,((char*)(__right_value1=xsprintf(" \%s ",((char*)(__right_value0=charp_to_string(argv[i])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        else if(charp_operator_equals(argv[i],"-pthread")) {
            gComePthread=1;
            buffer_append_str(cpp_option," -pthread ");
            buffer_append_str(clang_option," -pthread ");
            buffer_append_str(linker_option," -pthread ");
        }
        else if(charp_operator_equals(argv[i],"-gcc")) {
            gcc_compiler=1;
            CC="gcc";
        }
        else if(charp_operator_equals(argv[i],"-riscv")) {
            gcc_compiler=1;
            output_object_file_flag=0;
            CC="riscv64-unknown-elf-gcc";
            buffer_append_format(cpp_option,((char*)(__right_value0=xsprintf(" -D__BARE_METAL__ -D__RISCV__ "))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            buffer_append_str(clang_option,((char*)(__right_value0=xsprintf(" -nostdlib -ffreestanding -D__RISCV__"))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            gComeBareMetal=1;
        }
        else if(charp_operator_equals(argv[i],"-bare")) {
            output_source_file_flag=1;
            gcc_compiler=1;
            output_object_file_flag=0;
            gComeOriginalSourcePosition=0;
            CC="gcc";
            gComeBareMetal=1;
            buffer_append_format(cpp_option,((char*)(__right_value0=xsprintf(" -D__BARE_METAL__ "))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            buffer_append_str(clang_option,((char*)(__right_value0=xsprintf(" -nostdlib -ffreestanding "))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        else if(charp_operator_equals(argv[i],"-pico")) {
            output_source_file_flag=1;
            output_object_file_flag=0;
            gComeOriginalSourcePosition=0;
            env=getenv("PICO_SDK_PATH");
            __dec_obj27=cpp_option,
            cpp_option=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "02transpile.c", 902, "struct buffer*"))));
            come_call_finalizer(buffer_finalize, __dec_obj27,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            buffer_append_format(cpp_option,((char*)(__right_value2=xsprintf(" -I $PICO_SDK_PATH/src/common/pico_stdlib_headers/include/ -I$PICO_SDK_PATH/src/common/pico_base_headers/include/ -I \%s/src/rp2_common/hardware_sync/include \$(find \%s -type d -name include | sed 's/^/ -I/g') -I$PICO_SDK_PATH/src/boards/include -I$PICO_SDK_PATH/src/rp2040/pico_platform/include/ -I$PICO_SDK_PATH/src/rp2040/hardware_regs/include/ -I$PICO_SDK_PATH/src/rp2040/hardware_structs/include -I$PICO_SDK_PATH/src/rp2350/hardware_structs/include/ -I build/generated/pico_base/ -D__PICO__",((char*)(__right_value0=charp_to_string(env))),((char*)(__right_value1=charp_to_string(env)))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0));
            create_pico_version_header();
            pico_cpp=1;
        }
        else if(charp_operator_equals(argv[i],"-emb")) {
            output_source_file_flag=1;
            output_object_file_flag=0;
            gComeOriginalSourcePosition=0;
            emb_cpp=1;
        }
        else if(charp_operator_equals(argv[i],"-m5stack")) {
            m5stack_cpp=1;
            output_source_file_flag=1;
            output_object_file_flag=0;
            gComeOriginalSourcePosition=0;
            env_62=getenv("IDF_PATH");
            __dec_obj28=cpp_option,
            cpp_option=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "02transpile.c", 921, "struct buffer*"))));
            come_call_finalizer(buffer_finalize, __dec_obj28,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            buffer_append_format(cpp_option,((char*)(__right_value21=xsprintf(" -I\%s/.espressif/tools/xtensa-esp-elf/esp-14.2.0_20241119/xtensa-esp-elf/xtensa-esp-elf/include -I\%s/components/freertos/include -I\%s/components/esp32/include -I\%s/components/driver/include -I\%s/components/lwip/include -I\%s/components/freertos/FreeRTOS-Kernel/include -I\%s/components/freertos/config/include/freertos -I\%s/components/freertos/config/xtensa/include -I\%s/components/xtensa/include -I\%s/components/xtensa/esp32/include -I\%s/components/freertos/FreeRTOS-Kernel/portable/xtensa/include/freertos -I\%s/components/esp_hw_support/include -I\%s/components/soc/esp32/include/ -I\%s/components/esp_common/include/components $(find \%s/components -type d -name include | grep esp_ | sed 's/^/ -I/g') -I\%s/components/esp_common/include/ -I\%s/components/soc/esp32/register/soc/ -I\%s/components/soc/esp32/register -I\%s/components/heap/include -I\%s/components/hal/include -I\%s/components/newlib/platform_include -D__M5STACK__",((char*)(__right_value0=charp_to_string(getenv("HOME")))),((char*)(__right_value1=charp_to_string(env_62))),((char*)(__right_value2=charp_to_string(env_62))),((char*)(__right_value3=charp_to_string(env_62))),((char*)(__right_value4=charp_to_string(env_62))),((char*)(__right_value5=charp_to_string(env_62))),((char*)(__right_value6=charp_to_string(env_62))),((char*)(__right_value7=charp_to_string(env_62))),((char*)(__right_value8=charp_to_string(env_62))),((char*)(__right_value9=charp_to_string(env_62))),((char*)(__right_value10=charp_to_string(env_62))),((char*)(__right_value11=charp_to_string(env_62))),((char*)(__right_value12=charp_to_string(env_62))),((char*)(__right_value13=charp_to_string(env_62))),((char*)(__right_value14=charp_to_string(env_62))),((char*)(__right_value15=charp_to_string(env_62))),((char*)(__right_value16=charp_to_string(env_62))),((char*)(__right_value17=charp_to_string(env_62))),((char*)(__right_value18=charp_to_string(env_62))),((char*)(__right_value19=charp_to_string(env_62))),((char*)(__right_value20=charp_to_string(env_62)))))),"/usr/local/");
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value4 = come_decrement_ref_count(__right_value4, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value5 = come_decrement_ref_count(__right_value5, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value6 = come_decrement_ref_count(__right_value6, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value7 = come_decrement_ref_count(__right_value7, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value8 = come_decrement_ref_count(__right_value8, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value9 = come_decrement_ref_count(__right_value9, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value10 = come_decrement_ref_count(__right_value10, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value11 = come_decrement_ref_count(__right_value11, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value12 = come_decrement_ref_count(__right_value12, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value13 = come_decrement_ref_count(__right_value13, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value14 = come_decrement_ref_count(__right_value14, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value15 = come_decrement_ref_count(__right_value15, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value16 = come_decrement_ref_count(__right_value16, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value17 = come_decrement_ref_count(__right_value17, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value18 = come_decrement_ref_count(__right_value18, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value19 = come_decrement_ref_count(__right_value19, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value20 = come_decrement_ref_count(__right_value20, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value21 = come_decrement_ref_count(__right_value21, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        else if(i+1<argc&&charp_operator_equals(argv[i],"-target")) {
            buffer_append_str(clang_option,((char*)(__right_value1=xsprintf(" -target \%s ",((char*)(__right_value0=charp_to_string(argv[i+1])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            i++;
        }
        else if(charp_operator_equals(argv[i],"-x")&&i+1<argc) {
            buffer_append_str(cpp_option,((char*)(__right_value1=xsprintf(" -x \%s ",((char*)(__right_value0=charp_to_string(argv[i+1])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            buffer_append_str(clang_option,((char*)(__right_value1=xsprintf(" -x \%s ",((char*)(__right_value0=charp_to_string(argv[i+1])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            i++;
        }
        else if(charp_operator_equals(argv[i],"-std")&&i+1<argc) {
            buffer_append_str(cpp_option,((char*)(__right_value2=xsprintf(" \%s \%s ",((char*)(__right_value0=charp_to_string(argv[i]))),((char*)(__right_value1=charp_to_string(argv[i+1])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0));
            buffer_append_str(clang_option,((char*)(__right_value2=xsprintf(" \%s \%s ",((char*)(__right_value0=charp_to_string(argv[i]))),((char*)(__right_value1=charp_to_string(argv[i+1])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0));
            i++;
        }
        else if(({(_conditional_value_X0=(string_operator_equals(((char*)(__right_value1=charp_operator_load_range_element(argv[i],0,4))),"-std")));        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
_conditional_value_X0;})) {
            buffer_append_str(cpp_option,((char*)(__right_value1=xsprintf(" \%s ",((char*)(__right_value0=charp_to_string(argv[i])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            buffer_append_str(clang_option,((char*)(__right_value1=xsprintf(" \%s",((char*)(__right_value0=charp_to_string(argv[i])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        else if(i+1<argc&&charp_operator_equals(argv[i],"-T")) {
            buffer_append_str(clang_option,((char*)(__right_value1=xsprintf(" -T \%s ",((char*)(__right_value0=charp_to_string(argv[i+1])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            i++;
        }
        else if(charp_operator_equals(argv[i],"-net")) {
            gComeNet=1;
        }
        else if(charp_operator_equals(argv[i],"-cg")) {
            come_debug=1;
            buffer_append_str(clang_option," -g ");
        }
        else if(charp_operator_equals(argv[i],"-cg2")) {
            buffer_append_str(clang_option," -fsanitize=address,undefined -g ");
            buffer_append_str(linker_option," -fsanitize=address,undefined -g ");
        }
        else if(charp_operator_equals(argv[i],"-C")) {
            buffer_append_str(cpp_option,((char*)(__right_value1=xsprintf("\%s ",((char*)(__right_value0=charp_to_string(argv[i])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        else if(charp_operator_equals(argv[i],"-M")) {
            buffer_append_str(cpp_option,((char*)(__right_value1=xsprintf("\%s ",((char*)(__right_value0=charp_to_string(argv[i])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        else if(charp_operator_equals(argv[i],"-MM")) {
            buffer_append_str(cpp_option,((char*)(__right_value1=xsprintf("\%s ",((char*)(__right_value0=charp_to_string(argv[i])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        else if(charp_operator_equals(argv[i],"-MD")||charp_operator_equals(argv[i],"-MMD")||charp_operator_equals(argv[i],"-MP")||charp_operator_equals(argv[i],"-MG")) {
            buffer_append_str(cpp_option,((char*)(__right_value1=xsprintf("\%s ",((char*)(__right_value0=charp_to_string(argv[i])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        else if(charp_operator_equals(argv[i],"-MF")&&i+1<argc) {
            buffer_append_str(cpp_option,((char*)(__right_value1=xsprintf("-MF \%s ",((char*)(__right_value0=charp_to_string(argv[i+1])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            i++;
        }
        else if(charp_operator_equals(argv[i],"-MT")&&i+1<argc) {
            buffer_append_str(cpp_option,((char*)(__right_value1=xsprintf("-MT \%s ",((char*)(__right_value0=charp_to_string(argv[i+1])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            i++;
        }
        else if(charp_operator_equals(argv[i],"-MQ")&&i+1<argc) {
            buffer_append_str(cpp_option,((char*)(__right_value1=xsprintf("-MQ \%s ",((char*)(__right_value0=charp_to_string(argv[i+1])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            i++;
        }
        else if(charp_operator_equals(argv[i],"-MJ")&&i+1<argc) {
            buffer_append_str(clang_option,((char*)(__right_value1=xsprintf(" -MJ \%s ",((char*)(__right_value0=charp_to_string(argv[i+1])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            i++;
        }
        else if(charp_operator_equals(argv[i],"-dM")) {
            buffer_append_str(cpp_option,((char*)(__right_value1=xsprintf("\%s ",((char*)(__right_value0=charp_to_string(argv[i])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        else if(charp_operator_equals(argv[i],"-dD")) {
            buffer_append_str(cpp_option,((char*)(__right_value1=xsprintf("\%s ",((char*)(__right_value0=charp_to_string(argv[i])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        else if(charp_operator_equals(argv[i],"-dI")) {
            buffer_append_str(cpp_option,((char*)(__right_value1=xsprintf("\%s ",((char*)(__right_value0=charp_to_string(argv[i])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        else if(charp_operator_equals(argv[i],"-traditional-cpp")) {
            buffer_append_str(cpp_option,((char*)(__right_value1=xsprintf("\%s ",((char*)(__right_value0=charp_to_string(argv[i])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        else if(charp_operator_equals(argv[i],"-trigraphs")) {
            buffer_append_str(cpp_option,((char*)(__right_value1=xsprintf("\%s ",((char*)(__right_value0=charp_to_string(argv[i])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            buffer_append_str(clang_option,((char*)(__right_value1=xsprintf("\%s ",((char*)(__right_value0=charp_to_string(argv[i])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        else if(charp_operator_equals(argv[i],"-H")) {
            buffer_append_str(cpp_option,((char*)(__right_value1=xsprintf("\%s ",((char*)(__right_value0=charp_to_string(argv[i])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        else if(charp_operator_equals(argv[i],"-P")) {
            buffer_append_str(cpp_option,((char*)(__right_value1=xsprintf("\%s ",((char*)(__right_value0=charp_to_string(argv[i])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        else if(charp_operator_equals(argv[i],"-fdirectives-only")) {
            buffer_append_str(cpp_option,((char*)(__right_value1=xsprintf("\%s ",((char*)(__right_value0=charp_to_string(argv[i])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        else if(charp_operator_equals(argv[i],"-frewrite-includes")) {
            buffer_append_str(cpp_option,((char*)(__right_value1=xsprintf("\%s ",((char*)(__right_value0=charp_to_string(argv[i])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        else if(charp_operator_equals(argv[i],"-fworking-directory")||charp_operator_equals(argv[i],"-fno-working-directory")) {
            buffer_append_str(cpp_option,((char*)(__right_value1=xsprintf("\%s ",((char*)(__right_value0=charp_to_string(argv[i])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            buffer_append_str(clang_option,((char*)(__right_value1=xsprintf("\%s ",((char*)(__right_value0=charp_to_string(argv[i])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        else if(charp_operator_equals(argv[i],"-finput-charset")&&i+1<argc) {
            buffer_append_str(cpp_option,((char*)(__right_value1=xsprintf(" -finput-charset=\%s ",((char*)(__right_value0=charp_to_string(argv[i+1])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            buffer_append_str(clang_option,((char*)(__right_value1=xsprintf(" -finput-charset=\%s ",((char*)(__right_value0=charp_to_string(argv[i+1])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            i++;
        }
        else if(charp_operator_equals(argv[i],"-fexec-charset")&&i+1<argc) {
            buffer_append_str(cpp_option,((char*)(__right_value1=xsprintf(" -fexec-charset=\%s ",((char*)(__right_value0=charp_to_string(argv[i+1])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            buffer_append_str(clang_option,((char*)(__right_value1=xsprintf(" -fexec-charset=\%s ",((char*)(__right_value0=charp_to_string(argv[i+1])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            i++;
        }
        else if(charp_operator_equals(argv[i],"-fwide-exec-charset")&&i+1<argc) {
            buffer_append_str(cpp_option,((char*)(__right_value1=xsprintf(" -fwide-exec-charset=\%s ",((char*)(__right_value0=charp_to_string(argv[i+1])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            buffer_append_str(clang_option,((char*)(__right_value1=xsprintf(" -fwide-exec-charset=\%s ",((char*)(__right_value0=charp_to_string(argv[i+1])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            i++;
        }
        else if(strlen(argv[i])>strlen("-finput-charset")&&memcmp(argv[i],"-finput-charset",strlen("-finput-charset"))==0) {
            buffer_append_str(cpp_option,((char*)(__right_value1=xsprintf(" \%s ",((char*)(__right_value0=charp_to_string(argv[i])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            buffer_append_str(clang_option,((char*)(__right_value1=xsprintf(" \%s ",((char*)(__right_value0=charp_to_string(argv[i])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        else if(strlen(argv[i])>strlen("-fexec-charset")&&memcmp(argv[i],"-fexec-charset",strlen("-fexec-charset"))==0) {
            buffer_append_str(cpp_option,((char*)(__right_value1=xsprintf(" \%s ",((char*)(__right_value0=charp_to_string(argv[i])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            buffer_append_str(clang_option,((char*)(__right_value1=xsprintf(" \%s ",((char*)(__right_value0=charp_to_string(argv[i])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        else if(strlen(argv[i])>strlen("-fwide-exec-charset")&&memcmp(argv[i],"-fwide-exec-charset",strlen("-fwide-exec-charset"))==0) {
            buffer_append_str(cpp_option,((char*)(__right_value1=xsprintf(" \%s ",((char*)(__right_value0=charp_to_string(argv[i])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            buffer_append_str(clang_option,((char*)(__right_value1=xsprintf(" \%s ",((char*)(__right_value0=charp_to_string(argv[i])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        else if(charp_operator_equals(argv[i],"-nostdinc")) {
            buffer_append_str(cpp_option,((char*)(__right_value1=xsprintf("\%s ",((char*)(__right_value0=charp_to_string(argv[i])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            buffer_append_str(clang_option,((char*)(__right_value1=xsprintf("\%s ",((char*)(__right_value0=charp_to_string(argv[i])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        else if(charp_operator_equals(argv[i],"-nostdinc++")) {
            buffer_append_str(cpp_option,((char*)(__right_value1=xsprintf("\%s ",((char*)(__right_value0=charp_to_string(argv[i])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            buffer_append_str(clang_option,((char*)(__right_value1=xsprintf("\%s ",((char*)(__right_value0=charp_to_string(argv[i])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        else if(charp_operator_equals(argv[i],"-nobuiltininc")||charp_operator_equals(argv[i],"-nostdlibinc")) {
            buffer_append_str(cpp_option,((char*)(__right_value1=xsprintf("\%s ",((char*)(__right_value0=charp_to_string(argv[i])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            buffer_append_str(clang_option,((char*)(__right_value1=xsprintf("\%s ",((char*)(__right_value0=charp_to_string(argv[i])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        else if(charp_operator_equals(argv[i],"-CC")) {
            buffer_append_str(cpp_option,((char*)(__right_value1=xsprintf("\%s ",((char*)(__right_value0=charp_to_string(argv[i])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        else if(strlen(argv[i])>=4&&memcmp(argv[i],"-Wp,",strlen("-Wp,"))==0) {
            buffer_append_str(cpp_option,((char*)(__right_value1=xsprintf(" \%s ",((char*)(__right_value0=charp_to_string(argv[i])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        else if(charp_operator_equals(argv[i],"-Xpreprocessor")&&i+1<argc) {
            buffer_append_str(cpp_option,((char*)(__right_value1=xsprintf(" -Xpreprocessor \%s ",((char*)(__right_value0=charp_to_string(argv[i+1])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            i++;
        }
        else if(charp_operator_equals(argv[i],"-Xassembler")&&i+1<argc) {
            buffer_append_str(clang_option,((char*)(__right_value1=xsprintf(" -Xassembler \%s ",((char*)(__right_value0=charp_to_string(argv[i+1])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            i++;
        }
        else if(charp_operator_equals(argv[i],"-Xclang")&&i+1<argc) {
            buffer_append_str(clang_option,((char*)(__right_value1=xsprintf(" -Xclang \%s ",((char*)(__right_value0=charp_to_string(argv[i+1])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            i++;
        }
        else if(charp_operator_equals(argv[i],"-mllvm")&&i+1<argc) {
            buffer_append_str(clang_option,((char*)(__right_value1=xsprintf(" -mllvm \%s ",((char*)(__right_value0=charp_to_string(argv[i+1])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            i++;
        }
        else if(charp_operator_equals(argv[i],"-resource-dir")&&i+1<argc) {
            buffer_append_str(clang_option,((char*)(__right_value1=xsprintf(" -resource-dir \%s ",((char*)(__right_value0=charp_to_string(argv[i+1])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            i++;
        }
        else if(i+1<argc&&charp_operator_equals(argv[i],"-target")) {
            buffer_append_str(clang_option,((char*)(__right_value1=xsprintf(" -target \%s ",((char*)(__right_value0=charp_to_string(argv[i+1])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            i++;
        }
        else if(i+1<argc&&charp_operator_equals(argv[i],"-include")) {
            buffer_append_str(cpp_option,((char*)(__right_value1=xsprintf(" -include \%s ",((char*)(__right_value0=charp_to_string(argv[i+1])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            buffer_append_str(clang_option,((char*)(__right_value1=xsprintf(" -include \%s ",((char*)(__right_value0=charp_to_string(argv[i+1])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            i++;
        }
        else if(i+1<argc&&charp_operator_equals(argv[i],"-include-pch")) {
            buffer_append_str(cpp_option,((char*)(__right_value1=xsprintf(" -include-pch \%s ",((char*)(__right_value0=charp_to_string(argv[i+1])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            buffer_append_str(clang_option,((char*)(__right_value1=xsprintf(" -include-pch \%s ",((char*)(__right_value0=charp_to_string(argv[i+1])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            i++;
        }
        else if(strlen(argv[i])>strlen("-include-pch")&&memcmp(argv[i],"-include-pch",strlen("-include-pch"))==0) {
            buffer_append_str(cpp_option,((char*)(__right_value1=xsprintf(" \%s ",((char*)(__right_value0=charp_to_string(argv[i])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            buffer_append_str(clang_option,((char*)(__right_value1=xsprintf(" \%s ",((char*)(__right_value0=charp_to_string(argv[i])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        else if(charp_operator_equals(argv[i],"-fpch-preprocess")) {
            buffer_append_str(cpp_option,((char*)(__right_value1=xsprintf(" \%s ",((char*)(__right_value0=charp_to_string(argv[i])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            buffer_append_str(clang_option,((char*)(__right_value1=xsprintf(" \%s ",((char*)(__right_value0=charp_to_string(argv[i])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        else if(charp_operator_equals(argv[i],"-Winvalid-pch")) {
            buffer_append_str(cpp_option,((char*)(__right_value1=xsprintf(" \%s ",((char*)(__right_value0=charp_to_string(argv[i])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            buffer_append_str(clang_option,((char*)(__right_value1=xsprintf(" \%s ",((char*)(__right_value0=charp_to_string(argv[i])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        else if(charp_operator_equals(argv[i],"-fmodules")) {
            buffer_append_str(cpp_option,((char*)(__right_value1=xsprintf(" \%s ",((char*)(__right_value0=charp_to_string(argv[i])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            buffer_append_str(clang_option,((char*)(__right_value1=xsprintf(" \%s ",((char*)(__right_value0=charp_to_string(argv[i])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        else if(i+1<argc&&charp_operator_equals(argv[i],"-fmodules-cache-path")) {
            buffer_append_str(cpp_option,((char*)(__right_value1=xsprintf(" -fmodules-cache-path=\%s ",((char*)(__right_value0=charp_to_string(argv[i+1])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            buffer_append_str(clang_option,((char*)(__right_value1=xsprintf(" -fmodules-cache-path=\%s ",((char*)(__right_value0=charp_to_string(argv[i+1])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            i++;
        }
        else if(strlen(argv[i])>strlen("-fmodules-cache-path")&&memcmp(argv[i],"-fmodules-cache-path",strlen("-fmodules-cache-path"))==0) {
            buffer_append_str(cpp_option,((char*)(__right_value1=xsprintf(" \%s ",((char*)(__right_value0=charp_to_string(argv[i])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            buffer_append_str(clang_option,((char*)(__right_value1=xsprintf(" \%s ",((char*)(__right_value0=charp_to_string(argv[i])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        else if(i+1<argc&&charp_operator_equals(argv[i],"-fmodule-map-file")) {
            buffer_append_str(cpp_option,((char*)(__right_value1=xsprintf(" -fmodule-map-file=\%s ",((char*)(__right_value0=charp_to_string(argv[i+1])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            buffer_append_str(clang_option,((char*)(__right_value1=xsprintf(" -fmodule-map-file=\%s ",((char*)(__right_value0=charp_to_string(argv[i+1])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            i++;
        }
        else if(strlen(argv[i])>strlen("-fmodule-map-file")&&memcmp(argv[i],"-fmodule-map-file",strlen("-fmodule-map-file"))==0) {
            buffer_append_str(cpp_option,((char*)(__right_value1=xsprintf(" \%s ",((char*)(__right_value0=charp_to_string(argv[i])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            buffer_append_str(clang_option,((char*)(__right_value1=xsprintf(" \%s ",((char*)(__right_value0=charp_to_string(argv[i])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        else if(i+1<argc&&charp_operator_equals(argv[i],"-fmodule-name")) {
            buffer_append_str(cpp_option,((char*)(__right_value1=xsprintf(" -fmodule-name=\%s ",((char*)(__right_value0=charp_to_string(argv[i+1])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            buffer_append_str(clang_option,((char*)(__right_value1=xsprintf(" -fmodule-name=\%s ",((char*)(__right_value0=charp_to_string(argv[i+1])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            i++;
        }
        else if(strlen(argv[i])>strlen("-fmodule-name")&&memcmp(argv[i],"-fmodule-name",strlen("-fmodule-name"))==0) {
            buffer_append_str(cpp_option,((char*)(__right_value1=xsprintf(" \%s ",((char*)(__right_value0=charp_to_string(argv[i])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            buffer_append_str(clang_option,((char*)(__right_value1=xsprintf(" \%s ",((char*)(__right_value0=charp_to_string(argv[i])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        else if(i+1<argc&&charp_operator_equals(argv[i],"-imacro")) {
            buffer_append_str(cpp_option,((char*)(__right_value1=xsprintf(" -imacros \%s ",((char*)(__right_value0=charp_to_string(argv[i+1])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            buffer_append_str(clang_option,((char*)(__right_value1=xsprintf(" -imacros \%s ",((char*)(__right_value0=charp_to_string(argv[i+1])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            i++;
        }
        else if(i+1<argc&&charp_operator_equals(argv[i],"-imacros")) {
            buffer_append_str(cpp_option,((char*)(__right_value1=xsprintf(" -imacros \%s ",((char*)(__right_value0=charp_to_string(argv[i+1])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            buffer_append_str(clang_option,((char*)(__right_value1=xsprintf(" -imacros \%s ",((char*)(__right_value0=charp_to_string(argv[i+1])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            i++;
        }
        else if(i+1<argc&&charp_operator_equals(argv[i],"-idirafter")) {
            buffer_append_str(cpp_option,((char*)(__right_value1=xsprintf(" -idirafter \%s ",((char*)(__right_value0=charp_to_string(argv[i+1])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            buffer_append_str(clang_option,((char*)(__right_value1=xsprintf(" -idirafter \%s ",((char*)(__right_value0=charp_to_string(argv[i+1])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            i++;
        }
        else if(i+1<argc&&charp_operator_equals(argv[i],"-isystem")) {
            buffer_append_str(cpp_option,((char*)(__right_value1=xsprintf(" -isystem \%s ",((char*)(__right_value0=charp_to_string(argv[i+1])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            buffer_append_str(clang_option,((char*)(__right_value1=xsprintf(" -isystem \%s ",((char*)(__right_value0=charp_to_string(argv[i+1])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            i++;
        }
        else if(i+1<argc&&charp_operator_equals(argv[i],"-iquote")) {
            buffer_append_str(cpp_option,((char*)(__right_value1=xsprintf(" -iquote \%s ",((char*)(__right_value0=charp_to_string(argv[i+1])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            buffer_append_str(clang_option,((char*)(__right_value1=xsprintf(" -iquote \%s ",((char*)(__right_value0=charp_to_string(argv[i+1])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            i++;
        }
        else if(i+1<argc&&charp_operator_equals(argv[i],"-iprefix")) {
            buffer_append_str(cpp_option,((char*)(__right_value1=xsprintf(" -iprefix \%s ",((char*)(__right_value0=charp_to_string(argv[i+1])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            buffer_append_str(clang_option,((char*)(__right_value1=xsprintf(" -iprefix \%s ",((char*)(__right_value0=charp_to_string(argv[i+1])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            i++;
        }
        else if(i+1<argc&&charp_operator_equals(argv[i],"-iwithprefix")) {
            buffer_append_str(cpp_option,((char*)(__right_value1=xsprintf(" -iwithprefix \%s ",((char*)(__right_value0=charp_to_string(argv[i+1])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            buffer_append_str(clang_option,((char*)(__right_value1=xsprintf(" -iwithprefix \%s ",((char*)(__right_value0=charp_to_string(argv[i+1])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            i++;
        }
        else if(i+1<argc&&charp_operator_equals(argv[i],"-iwithprefixbefore")) {
            buffer_append_str(cpp_option,((char*)(__right_value1=xsprintf(" -iwithprefixbefore \%s ",((char*)(__right_value0=charp_to_string(argv[i+1])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            buffer_append_str(clang_option,((char*)(__right_value1=xsprintf(" -iwithprefixbefore \%s ",((char*)(__right_value0=charp_to_string(argv[i+1])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            i++;
        }
        else if(i+1<argc&&charp_operator_equals(argv[i],"-iframework")) {
            buffer_append_str(cpp_option,((char*)(__right_value1=xsprintf(" -iframework \%s ",((char*)(__right_value0=charp_to_string(argv[i+1])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            buffer_append_str(clang_option,((char*)(__right_value1=xsprintf(" -iframework \%s ",((char*)(__right_value0=charp_to_string(argv[i+1])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            i++;
        }
        else if(charp_operator_equals(argv[i],"-F")&&i+1<argc) {
            buffer_append_str(cpp_option,((char*)(__right_value1=xsprintf(" -F\%s ",((char*)(__right_value0=charp_to_string(argv[i+1])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            buffer_append_str(clang_option,((char*)(__right_value1=xsprintf(" -F\%s ",((char*)(__right_value0=charp_to_string(argv[i+1])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            i++;
        }
        else if(strlen(argv[i])>=2&&memcmp(argv[i],"-F",strlen("-F"))==0) {
            buffer_append_str(cpp_option,((char*)(__right_value1=xsprintf(" \%s ",((char*)(__right_value0=charp_to_string(argv[i])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            buffer_append_str(clang_option,((char*)(__right_value1=xsprintf(" \%s ",((char*)(__right_value0=charp_to_string(argv[i])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        else if(i+1<argc&&charp_operator_equals(argv[i],"-isysroot")) {
            buffer_append_str(cpp_option,((char*)(__right_value1=xsprintf(" -isysroot \%s ",((char*)(__right_value0=charp_to_string(argv[i+1])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            buffer_append_str(clang_option,((char*)(__right_value1=xsprintf(" -isysroot \%s ",((char*)(__right_value0=charp_to_string(argv[i+1])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            i++;
        }
        else if(i+1<argc&&charp_operator_equals(argv[i],"-sysroot")) {
            buffer_append_str(cpp_option,((char*)(__right_value1=xsprintf(" -sysroot \%s ",((char*)(__right_value0=charp_to_string(argv[i+1])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            buffer_append_str(clang_option,((char*)(__right_value1=xsprintf(" -sysroot \%s ",((char*)(__right_value0=charp_to_string(argv[i+1])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            i++;
        }
        else if(i+1<argc&&charp_operator_equals(argv[i],"--sysroot")) {
            buffer_append_str(cpp_option,((char*)(__right_value1=xsprintf(" --sysroot=\%s ",((char*)(__right_value0=charp_to_string(argv[i+1])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            buffer_append_str(clang_option,((char*)(__right_value1=xsprintf(" --sysroot=\%s ",((char*)(__right_value0=charp_to_string(argv[i+1])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            i++;
        }
        else if(strlen(argv[i])>=10&&memcmp(argv[i],"--sysroot",strlen("--sysroot"))==0) {
            buffer_append_str(cpp_option,((char*)(__right_value1=xsprintf(" \%s ",((char*)(__right_value0=charp_to_string(argv[i])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            buffer_append_str(clang_option,((char*)(__right_value1=xsprintf(" \%s ",((char*)(__right_value0=charp_to_string(argv[i])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        else if(i+1<argc&&charp_operator_equals(argv[i],"-T")) {
            buffer_append_str(clang_option,((char*)(__right_value1=xsprintf(" -T \%s ",((char*)(__right_value0=charp_to_string(argv[i+1])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            i++;
        }
        else if(charp_operator_equals(argv[i],"-original-position")) {
            gComeOriginalSourcePosition=0;
        }
        else if(({(_conditional_value_X1=(string_operator_equals(((char*)(__right_value1=charp_operator_load_range_element(argv[i],0,2))),"-O")));        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
_conditional_value_X1;})) {
            buffer_append_str(clang_option,((char*)(__right_value1=xsprintf(" \%s ",((char*)(__right_value0=charp_to_string(argv[i])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            come_debug=0;
        }
        else if(charp_operator_equals(argv[i],"-D")&&i+1<argc) {
            buffer_append_str(cpp_option,((char*)(__right_value1=xsprintf(" -D\%s ",((char*)(__right_value0=charp_to_string(argv[i+1])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            buffer_append_str(clang_option,((char*)(__right_value1=xsprintf(" -D\%s ",((char*)(__right_value0=charp_to_string(argv[i+1])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            i++;
        }
        else if(({(_conditional_value_X2=(string_operator_equals(((char*)(__right_value1=charp_operator_load_range_element(argv[i],0,2))),"-D")));        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
_conditional_value_X2;})) {
            buffer_append_str(cpp_option,((char*)(__right_value1=xsprintf(" \%s ",((char*)(__right_value0=charp_to_string(argv[i])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            buffer_append_str(clang_option,((char*)(__right_value1=xsprintf(" \%s ",((char*)(__right_value0=charp_to_string(argv[i])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        else if(charp_operator_equals(argv[i],"-U")&&i+1<argc) {
            buffer_append_str(cpp_option,((char*)(__right_value1=xsprintf(" -U\%s ",((char*)(__right_value0=charp_to_string(argv[i+1])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            buffer_append_str(clang_option,((char*)(__right_value1=xsprintf(" -U\%s ",((char*)(__right_value0=charp_to_string(argv[i+1])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            i++;
        }
        else if(({(_conditional_value_X3=(string_operator_equals(((char*)(__right_value1=charp_operator_load_range_element(argv[i],0,2))),"-U")));        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
_conditional_value_X3;})) {
            buffer_append_str(cpp_option,((char*)(__right_value1=xsprintf(" \%s ",((char*)(__right_value0=charp_to_string(argv[i])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            buffer_append_str(clang_option,((char*)(__right_value1=xsprintf(" \%s ",((char*)(__right_value0=charp_to_string(argv[i])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        else if(charp_operator_equals(argv[i],"-undef")) {
            buffer_append_str(cpp_option," -undef ");
            buffer_append_str(clang_option," -undef ");
        }
        else if(charp_operator_equals(argv[i],"-fdiagnostics-color")||charp_operator_equals(argv[i],"-fno-diagnostics-color")) {
            buffer_append_str(clang_option,((char*)(__right_value1=xsprintf(" \%s ",((char*)(__right_value0=charp_to_string(argv[i])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        else if(strlen(argv[i])>=20&&memcmp(argv[i],"-fdiagnostics-color",strlen("-fdiagnostics-color"))==0) {
            buffer_append_str(clang_option,((char*)(__right_value1=xsprintf(" \%s ",((char*)(__right_value0=charp_to_string(argv[i])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        else if(charp_operator_equals(argv[i],"-fcolor-diagnostics")||charp_operator_equals(argv[i],"-fno-color-diagnostics")) {
            buffer_append_str(clang_option,((char*)(__right_value1=xsprintf(" \%s ",((char*)(__right_value0=charp_to_string(argv[i])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        else if(charp_operator_equals(argv[i],"-pipe")) {
            buffer_append_str(clang_option," -pipe ");
        }
        else if(charp_operator_equals(argv[i],"-march")&&i+1<argc) {
            buffer_append_str(cpp_option,((char*)(__right_value1=xsprintf(" -march=\%s ",((char*)(__right_value0=charp_to_string(argv[i+1])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            buffer_append_str(clang_option,((char*)(__right_value1=xsprintf(" -march=\%s ",((char*)(__right_value0=charp_to_string(argv[i+1])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            i++;
        }
        else if(charp_operator_equals(argv[i],"-mtune")&&i+1<argc) {
            buffer_append_str(cpp_option,((char*)(__right_value1=xsprintf(" -mtune=\%s ",((char*)(__right_value0=charp_to_string(argv[i+1])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            buffer_append_str(clang_option,((char*)(__right_value1=xsprintf(" -mtune=\%s ",((char*)(__right_value0=charp_to_string(argv[i+1])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            i++;
        }
        else if(charp_operator_equals(argv[i],"-mcpu")&&i+1<argc) {
            buffer_append_str(cpp_option,((char*)(__right_value1=xsprintf(" -mcpu=\%s ",((char*)(__right_value0=charp_to_string(argv[i+1])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            buffer_append_str(clang_option,((char*)(__right_value1=xsprintf(" -mcpu=\%s ",((char*)(__right_value0=charp_to_string(argv[i+1])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            i++;
        }
        else if(charp_operator_equals(argv[i],"-mabi")&&i+1<argc) {
            buffer_append_str(cpp_option,((char*)(__right_value1=xsprintf(" -mabi=\%s ",((char*)(__right_value0=charp_to_string(argv[i+1])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            buffer_append_str(clang_option,((char*)(__right_value1=xsprintf(" -mabi=\%s ",((char*)(__right_value0=charp_to_string(argv[i+1])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            i++;
        }
        else if(charp_operator_equals(argv[i],"-mfloat-abi")&&i+1<argc) {
            buffer_append_str(cpp_option,((char*)(__right_value1=xsprintf(" -mfloat-abi=\%s ",((char*)(__right_value0=charp_to_string(argv[i+1])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            buffer_append_str(clang_option,((char*)(__right_value1=xsprintf(" -mfloat-abi=\%s ",((char*)(__right_value0=charp_to_string(argv[i+1])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            i++;
        }
        else if(charp_operator_equals(argv[i],"-mfpu")&&i+1<argc) {
            buffer_append_str(cpp_option,((char*)(__right_value1=xsprintf(" -mfpu=\%s ",((char*)(__right_value0=charp_to_string(argv[i+1])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            buffer_append_str(clang_option,((char*)(__right_value1=xsprintf(" -mfpu=\%s ",((char*)(__right_value0=charp_to_string(argv[i+1])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            i++;
        }
        else if(charp_operator_equals(argv[i],"-mcmodel")&&i+1<argc) {
            buffer_append_str(cpp_option,((char*)(__right_value1=xsprintf(" -mcmodel=\%s ",((char*)(__right_value0=charp_to_string(argv[i+1])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            buffer_append_str(clang_option,((char*)(__right_value1=xsprintf(" -mcmodel=\%s ",((char*)(__right_value0=charp_to_string(argv[i+1])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            i++;
        }
        else if(strlen(argv[i])>=strlen("-mabi")&&memcmp(argv[i],"-mabi",strlen("-mabi"))==0) {
            buffer_append_str(cpp_option,((char*)(__right_value1=xsprintf(" \%s ",((char*)(__right_value0=charp_to_string(argv[i])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            buffer_append_str(clang_option,((char*)(__right_value1=xsprintf(" \%s ",((char*)(__right_value0=charp_to_string(argv[i])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        else if(strlen(argv[i])>=strlen("-mfloat-abi")&&memcmp(argv[i],"-mfloat-abi",strlen("-mfloat-abi"))==0) {
            buffer_append_str(cpp_option,((char*)(__right_value1=xsprintf(" \%s ",((char*)(__right_value0=charp_to_string(argv[i])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            buffer_append_str(clang_option,((char*)(__right_value1=xsprintf(" \%s ",((char*)(__right_value0=charp_to_string(argv[i])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        else if(strlen(argv[i])>=strlen("-mfpu")&&memcmp(argv[i],"-mfpu",strlen("-mfpu"))==0) {
            buffer_append_str(cpp_option,((char*)(__right_value1=xsprintf(" \%s ",((char*)(__right_value0=charp_to_string(argv[i])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            buffer_append_str(clang_option,((char*)(__right_value1=xsprintf(" \%s ",((char*)(__right_value0=charp_to_string(argv[i])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        else if(strlen(argv[i])>=strlen("-mcmodel")&&memcmp(argv[i],"-mcmodel",strlen("-mcmodel"))==0) {
            buffer_append_str(cpp_option,((char*)(__right_value1=xsprintf(" \%s ",((char*)(__right_value0=charp_to_string(argv[i])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            buffer_append_str(clang_option,((char*)(__right_value1=xsprintf(" \%s ",((char*)(__right_value0=charp_to_string(argv[i])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        else if(strlen(argv[i])>=2&&(memcmp(argv[i],"-march",strlen("-march"))==0||memcmp(argv[i],"-mtune",strlen("-mtune"))==0||memcmp(argv[i],"-mcpu",strlen("-mcpu"))==0)) {
            buffer_append_str(cpp_option,((char*)(__right_value1=xsprintf(" \%s ",((char*)(__right_value0=charp_to_string(argv[i])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            buffer_append_str(clang_option,((char*)(__right_value1=xsprintf(" \%s ",((char*)(__right_value0=charp_to_string(argv[i])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        else if(charp_operator_equals(argv[i],"-m32")||charp_operator_equals(argv[i],"-m64")) {
            buffer_append_str(cpp_option,((char*)(__right_value1=xsprintf(" \%s ",((char*)(__right_value0=charp_to_string(argv[i])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            buffer_append_str(clang_option,((char*)(__right_value1=xsprintf(" \%s ",((char*)(__right_value0=charp_to_string(argv[i])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        else if(charp_operator_equals(argv[i],"-fPIC")||charp_operator_equals(argv[i],"-fpic")||charp_operator_equals(argv[i],"-fPIE")||charp_operator_equals(argv[i],"-fpie")) {
            buffer_append_str(clang_option,((char*)(__right_value1=xsprintf(" \%s ",((char*)(__right_value0=charp_to_string(argv[i])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        else if(charp_operator_equals(argv[i],"-fno-pic")||charp_operator_equals(argv[i],"-fno-pie")) {
            buffer_append_str(clang_option,((char*)(__right_value1=xsprintf(" \%s ",((char*)(__right_value0=charp_to_string(argv[i])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        else if(charp_operator_equals(argv[i],"-ffunction-sections")||charp_operator_equals(argv[i],"-fdata-sections")) {
            buffer_append_str(clang_option,((char*)(__right_value1=xsprintf(" \%s ",((char*)(__right_value0=charp_to_string(argv[i])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        else if(strlen(argv[i])>=13&&memcmp(argv[i],"-fvisibility",strlen("-fvisibility"))==0) {
            buffer_append_str(clang_option,((char*)(__right_value1=xsprintf(" \%s ",((char*)(__right_value0=charp_to_string(argv[i])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        else if(charp_operator_equals(argv[i],"-fno-common")||charp_operator_equals(argv[i],"-fcommon")) {
            buffer_append_str(clang_option,((char*)(__right_value1=xsprintf(" \%s ",((char*)(__right_value0=charp_to_string(argv[i])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        else if(charp_operator_equals(argv[i],"-fwrapv")||charp_operator_equals(argv[i],"-fno-wrapv")) {
            buffer_append_str(clang_option,((char*)(__right_value1=xsprintf(" \%s ",((char*)(__right_value0=charp_to_string(argv[i])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        else if(charp_operator_equals(argv[i],"-fstrict-aliasing")||charp_operator_equals(argv[i],"-fno-strict-aliasing")) {
            buffer_append_str(clang_option,((char*)(__right_value1=xsprintf(" \%s ",((char*)(__right_value0=charp_to_string(argv[i])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        else if(charp_operator_equals(argv[i],"-fstack-protector")||charp_operator_equals(argv[i],"-fstack-protector-strong")||charp_operator_equals(argv[i],"-fstack-protector-all")) {
            buffer_append_str(clang_option,((char*)(__right_value1=xsprintf(" \%s ",((char*)(__right_value0=charp_to_string(argv[i])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        else if(charp_operator_equals(argv[i],"-fno-stack-protector")) {
            buffer_append_str(clang_option," -fno-stack-protector ");
        }
        else if(strlen(argv[i])>=12&&memcmp(argv[i],"-fno-builtin",strlen("-fno-builtin"))==0) {
            buffer_append_str(clang_option,((char*)(__right_value1=xsprintf(" \%s ",((char*)(__right_value0=charp_to_string(argv[i])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        else if(i+1<argc&&charp_operator_equals(argv[i],"-fmacro-prefix-map")) {
            buffer_append_str(cpp_option,((char*)(__right_value1=xsprintf(" -fmacro-prefix-map=\%s ",((char*)(__right_value0=charp_to_string(argv[i+1])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            buffer_append_str(clang_option,((char*)(__right_value1=xsprintf(" -fmacro-prefix-map=\%s ",((char*)(__right_value0=charp_to_string(argv[i+1])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            i++;
        }
        else if(strlen(argv[i])>strlen("-fmacro-prefix-map")&&memcmp(argv[i],"-fmacro-prefix-map",strlen("-fmacro-prefix-map"))==0) {
            buffer_append_str(cpp_option,((char*)(__right_value1=xsprintf(" \%s ",((char*)(__right_value0=charp_to_string(argv[i])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            buffer_append_str(clang_option,((char*)(__right_value1=xsprintf(" \%s ",((char*)(__right_value0=charp_to_string(argv[i])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        else if(i+1<argc&&charp_operator_equals(argv[i],"-ffile-prefix-map")) {
            buffer_append_str(cpp_option,((char*)(__right_value1=xsprintf(" -ffile-prefix-map=\%s ",((char*)(__right_value0=charp_to_string(argv[i+1])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            buffer_append_str(clang_option,((char*)(__right_value1=xsprintf(" -ffile-prefix-map=\%s ",((char*)(__right_value0=charp_to_string(argv[i+1])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            i++;
        }
        else if(strlen(argv[i])>strlen("-ffile-prefix-map")&&memcmp(argv[i],"-ffile-prefix-map",strlen("-ffile-prefix-map"))==0) {
            buffer_append_str(cpp_option,((char*)(__right_value1=xsprintf(" \%s ",((char*)(__right_value0=charp_to_string(argv[i])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            buffer_append_str(clang_option,((char*)(__right_value1=xsprintf(" \%s ",((char*)(__right_value0=charp_to_string(argv[i])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        else if(i+1<argc&&charp_operator_equals(argv[i],"-fdebug-prefix-map")) {
            buffer_append_str(cpp_option,((char*)(__right_value1=xsprintf(" -fdebug-prefix-map=\%s ",((char*)(__right_value0=charp_to_string(argv[i+1])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            buffer_append_str(clang_option,((char*)(__right_value1=xsprintf(" -fdebug-prefix-map=\%s ",((char*)(__right_value0=charp_to_string(argv[i+1])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            i++;
        }
        else if(strlen(argv[i])>strlen("-fdebug-prefix-map")&&memcmp(argv[i],"-fdebug-prefix-map",strlen("-fdebug-prefix-map"))==0) {
            buffer_append_str(cpp_option,((char*)(__right_value1=xsprintf(" \%s ",((char*)(__right_value0=charp_to_string(argv[i])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            buffer_append_str(clang_option,((char*)(__right_value1=xsprintf(" \%s ",((char*)(__right_value0=charp_to_string(argv[i])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        else if(i+1<argc&&charp_operator_equals(argv[i],"-ftrack-macro-expansion")) {
            buffer_append_str(cpp_option,((char*)(__right_value1=xsprintf(" -ftrack-macro-expansion=\%s ",((char*)(__right_value0=charp_to_string(argv[i+1])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            buffer_append_str(clang_option,((char*)(__right_value1=xsprintf(" -ftrack-macro-expansion=\%s ",((char*)(__right_value0=charp_to_string(argv[i+1])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            i++;
        }
        else if(strlen(argv[i])>strlen("-ftrack-macro-expansion")&&memcmp(argv[i],"-ftrack-macro-expansion",strlen("-ftrack-macro-expansion"))==0) {
            buffer_append_str(cpp_option,((char*)(__right_value1=xsprintf(" \%s ",((char*)(__right_value0=charp_to_string(argv[i])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            buffer_append_str(clang_option,((char*)(__right_value1=xsprintf(" \%s ",((char*)(__right_value0=charp_to_string(argv[i])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        else if(i+1<argc&&charp_operator_equals(argv[i],"-fmacro-backtrace-limit")) {
            buffer_append_str(cpp_option,((char*)(__right_value1=xsprintf(" -fmacro-backtrace-limit=\%s ",((char*)(__right_value0=charp_to_string(argv[i+1])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            buffer_append_str(clang_option,((char*)(__right_value1=xsprintf(" -fmacro-backtrace-limit=\%s ",((char*)(__right_value0=charp_to_string(argv[i+1])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            i++;
        }
        else if(strlen(argv[i])>strlen("-fmacro-backtrace-limit")&&memcmp(argv[i],"-fmacro-backtrace-limit",strlen("-fmacro-backtrace-limit"))==0) {
            buffer_append_str(cpp_option,((char*)(__right_value1=xsprintf(" \%s ",((char*)(__right_value0=charp_to_string(argv[i])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            buffer_append_str(clang_option,((char*)(__right_value1=xsprintf(" \%s ",((char*)(__right_value0=charp_to_string(argv[i])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        else if(charp_operator_equals(argv[i],"-fprofile-use")&&i+1<argc) {
            buffer_append_str(clang_option,((char*)(__right_value1=xsprintf(" -fprofile-use=\%s ",((char*)(__right_value0=charp_to_string(argv[i+1])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            i++;
        }
        else if(charp_operator_equals(argv[i],"-fprofile-instr-use")&&i+1<argc) {
            buffer_append_str(clang_option,((char*)(__right_value1=xsprintf(" -fprofile-instr-use=\%s ",((char*)(__right_value0=charp_to_string(argv[i+1])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            i++;
        }
        else if(charp_operator_equals(argv[i],"-fprofile-dir")&&i+1<argc) {
            buffer_append_str(clang_option,((char*)(__right_value1=xsprintf(" -fprofile-dir=\%s ",((char*)(__right_value0=charp_to_string(argv[i+1])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            i++;
        }
        else if(charp_operator_equals(argv[i],"-fdebug-compilation-dir")&&i+1<argc) {
            buffer_append_str(clang_option,((char*)(__right_value1=xsprintf(" -fdebug-compilation-dir=\%s ",((char*)(__right_value0=charp_to_string(argv[i+1])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            i++;
        }
        else if(charp_operator_equals(argv[i],"-serialize-diagnostics")&&i+1<argc) {
            buffer_append_str(clang_option,((char*)(__right_value1=xsprintf(" -serialize-diagnostics \%s ",((char*)(__right_value0=charp_to_string(argv[i+1])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            i++;
        }
        else if(charp_operator_equals(argv[i],"-fsanitize-blacklist")&&i+1<argc) {
            buffer_append_str(clang_option,((char*)(__right_value1=xsprintf(" -fsanitize-blacklist=\%s ",((char*)(__right_value0=charp_to_string(argv[i+1])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            i++;
        }
        else if(charp_operator_equals(argv[i],"-fsanitize-ignorelist")&&i+1<argc) {
            buffer_append_str(clang_option,((char*)(__right_value1=xsprintf(" -fsanitize-ignorelist=\%s ",((char*)(__right_value0=charp_to_string(argv[i+1])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            i++;
        }
        else if(strlen(argv[i])>strlen("-fprofile-use")&&memcmp(argv[i],"-fprofile-use",strlen("-fprofile-use"))==0) {
            buffer_append_str(clang_option,((char*)(__right_value1=xsprintf(" \%s ",((char*)(__right_value0=charp_to_string(argv[i])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        else if(strlen(argv[i])>strlen("-fprofile-instr-use")&&memcmp(argv[i],"-fprofile-instr-use",strlen("-fprofile-instr-use"))==0) {
            buffer_append_str(clang_option,((char*)(__right_value1=xsprintf(" \%s ",((char*)(__right_value0=charp_to_string(argv[i])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        else if(strlen(argv[i])>strlen("-fprofile-dir")&&memcmp(argv[i],"-fprofile-dir",strlen("-fprofile-dir"))==0) {
            buffer_append_str(clang_option,((char*)(__right_value1=xsprintf(" \%s ",((char*)(__right_value0=charp_to_string(argv[i])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        else if(strlen(argv[i])>strlen("-fdebug-compilation-dir")&&memcmp(argv[i],"-fdebug-compilation-dir",strlen("-fdebug-compilation-dir"))==0) {
            buffer_append_str(clang_option,((char*)(__right_value1=xsprintf(" \%s ",((char*)(__right_value0=charp_to_string(argv[i])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        else if(strlen(argv[i])>strlen("-serialize-diagnostics")&&memcmp(argv[i],"-serialize-diagnostics",strlen("-serialize-diagnostics"))==0) {
            buffer_append_str(clang_option,((char*)(__right_value1=xsprintf(" \%s ",((char*)(__right_value0=charp_to_string(argv[i])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        else if(strlen(argv[i])>strlen("-fsanitize-blacklist")&&memcmp(argv[i],"-fsanitize-blacklist",strlen("-fsanitize-blacklist"))==0) {
            buffer_append_str(clang_option,((char*)(__right_value1=xsprintf(" \%s ",((char*)(__right_value0=charp_to_string(argv[i])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        else if(strlen(argv[i])>strlen("-fsanitize-ignorelist")&&memcmp(argv[i],"-fsanitize-ignorelist",strlen("-fsanitize-ignorelist"))==0) {
            buffer_append_str(clang_option,((char*)(__right_value1=xsprintf(" \%s ",((char*)(__right_value0=charp_to_string(argv[i])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        else if(charp_operator_equals(argv[i],"-fno-plt")) {
            buffer_append_str(clang_option," -fno-plt ");
        }
        else if(charp_operator_equals(argv[i],"-fno-exceptions")||charp_operator_equals(argv[i],"-fno-unwind-tables")||charp_operator_equals(argv[i],"-fno-asynchronous-unwind-tables")) {
            buffer_append_str(clang_option,((char*)(__right_value1=xsprintf(" \%s ",((char*)(__right_value0=charp_to_string(argv[i])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        else if(charp_operator_equals(argv[i],"-fuse-ld")&&i+1<argc) {
            buffer_append_str(clang_option,((char*)(__right_value1=xsprintf(" -fuse-ld=\%s ",((char*)(__right_value0=charp_to_string(argv[i+1])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            i++;
        }
        else if(strlen(argv[i])>=8&&memcmp(argv[i],"-fuse-ld",strlen("-fuse-ld"))==0) {
            buffer_append_str(clang_option,((char*)(__right_value1=xsprintf(" \%s ",((char*)(__right_value0=charp_to_string(argv[i])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        else if(charp_operator_equals(argv[i],"-fanalyzer")) {
            buffer_append_str(clang_option,((char*)(__right_value1=xsprintf(" \%s ",((char*)(__right_value0=charp_to_string(argv[i])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        else if(charp_operator_equals(argv[i],"-Xanalyzer")&&i+1<argc) {
            buffer_append_str(clang_option,((char*)(__right_value1=xsprintf(" -Xanalyzer \%s ",((char*)(__right_value0=charp_to_string(argv[i+1])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            i++;
        }
        else if(charp_operator_equals(argv[i],"-analyzer-config")&&i+1<argc) {
            buffer_append_str(clang_option,((char*)(__right_value1=xsprintf(" -analyzer-config=\%s ",((char*)(__right_value0=charp_to_string(argv[i+1])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            i++;
        }
        else if(charp_operator_equals(argv[i],"-analyzer-output")&&i+1<argc) {
            buffer_append_str(clang_option,((char*)(__right_value1=xsprintf(" -analyzer-output=\%s ",((char*)(__right_value0=charp_to_string(argv[i+1])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            i++;
        }
        else if(charp_operator_equals(argv[i],"-analyzer-checker")&&i+1<argc) {
            buffer_append_str(clang_option,((char*)(__right_value1=xsprintf(" -analyzer-checker \%s ",((char*)(__right_value0=charp_to_string(argv[i+1])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            i++;
        }
        else if(charp_operator_equals(argv[i],"-analyzer-disable-checker")&&i+1<argc) {
            buffer_append_str(clang_option,((char*)(__right_value1=xsprintf(" -analyzer-disable-checker \%s ",((char*)(__right_value0=charp_to_string(argv[i+1])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            i++;
        }
        else if(charp_operator_equals(argv[i],"-analyzer-checker-help")||charp_operator_equals(argv[i],"-analyzer-checker-help-alpha")||charp_operator_equals(argv[i],"-analyzer-checker-help-developer")||charp_operator_equals(argv[i],"-analyzer-config-help")) {
            buffer_append_str(clang_option,((char*)(__right_value1=xsprintf(" \%s ",((char*)(__right_value0=charp_to_string(argv[i])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        else if(strlen(argv[i])>strlen("-analyzer-config")&&memcmp(argv[i],"-analyzer-config",strlen("-analyzer-config"))==0) {
            buffer_append_str(clang_option,((char*)(__right_value1=xsprintf(" \%s ",((char*)(__right_value0=charp_to_string(argv[i])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        else if(strlen(argv[i])>strlen("-analyzer-output")&&memcmp(argv[i],"-analyzer-output",strlen("-analyzer-output"))==0) {
            buffer_append_str(clang_option,((char*)(__right_value1=xsprintf(" \%s ",((char*)(__right_value0=charp_to_string(argv[i])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        else if(strlen(argv[i])>strlen("-analyzer-checker")&&memcmp(argv[i],"-analyzer-checker",strlen("-analyzer-checker"))==0) {
            buffer_append_str(clang_option,((char*)(__right_value1=xsprintf(" \%s ",((char*)(__right_value0=charp_to_string(argv[i])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        else if(strlen(argv[i])>strlen("-analyzer-disable-checker")&&memcmp(argv[i],"-analyzer-disable-checker",strlen("-analyzer-disable-checker"))==0) {
            buffer_append_str(clang_option,((char*)(__right_value1=xsprintf(" \%s ",((char*)(__right_value0=charp_to_string(argv[i])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        else if(charp_operator_equals(argv[i],"--analyze")||charp_operator_equals(argv[i],"-analyze")) {
            buffer_append_str(clang_option,((char*)(__right_value1=xsprintf(" \%s ",((char*)(__right_value0=charp_to_string(argv[i])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            output_object_file=1;
        }
        else if(charp_operator_equals(argv[i],"-fsyntax-only")) {
            buffer_append_str(clang_option," -fsyntax-only ");
            output_object_file=1;
        }
        else if(strlen(argv[i])>=10&&memcmp(argv[i],"-fsanitize",strlen("-fsanitize"))==0) {
            buffer_append_str(clang_option,((char*)(__right_value1=xsprintf(" \%s ",((char*)(__right_value0=charp_to_string(argv[i])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            buffer_append_str(linker_option,((char*)(__right_value1=xsprintf(" \%s ",((char*)(__right_value0=charp_to_string(argv[i])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        else if(strlen(argv[i])>=14&&memcmp(argv[i],"-fno-sanitize",strlen("-fno-sanitize"))==0) {
            buffer_append_str(clang_option,((char*)(__right_value1=xsprintf(" \%s ",((char*)(__right_value0=charp_to_string(argv[i])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            buffer_append_str(linker_option,((char*)(__right_value1=xsprintf(" \%s ",((char*)(__right_value0=charp_to_string(argv[i])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        else if(strlen(argv[i])>=20&&memcmp(argv[i],"-fsanitize-recover",strlen("-fsanitize-recover"))==0) {
            buffer_append_str(clang_option,((char*)(__right_value1=xsprintf(" \%s ",((char*)(__right_value0=charp_to_string(argv[i])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            buffer_append_str(linker_option,((char*)(__right_value1=xsprintf(" \%s ",((char*)(__right_value0=charp_to_string(argv[i])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        else if(strlen(argv[i])>=22&&memcmp(argv[i],"-fno-sanitize-recover",strlen("-fno-sanitize-recover"))==0) {
            buffer_append_str(clang_option,((char*)(__right_value1=xsprintf(" \%s ",((char*)(__right_value0=charp_to_string(argv[i])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            buffer_append_str(linker_option,((char*)(__right_value1=xsprintf(" \%s ",((char*)(__right_value0=charp_to_string(argv[i])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        else if(strlen(argv[i])>=13&&memcmp(argv[i],"-fsanitize-trap",strlen("-fsanitize-trap"))==0) {
            buffer_append_str(clang_option,((char*)(__right_value1=xsprintf(" \%s ",((char*)(__right_value0=charp_to_string(argv[i])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        else if(charp_operator_equals(argv[i],"-fprofile-arcs")||charp_operator_equals(argv[i],"-ftest-coverage")||charp_operator_equals(argv[i],"-coverage")) {
            buffer_append_str(clang_option,((char*)(__right_value1=xsprintf(" \%s ",((char*)(__right_value0=charp_to_string(argv[i])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            buffer_append_str(linker_option,((char*)(__right_value1=xsprintf(" \%s ",((char*)(__right_value0=charp_to_string(argv[i])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        else if(charp_operator_equals(argv[i],"-fprofile-instr-generate")||charp_operator_equals(argv[i],"-fcoverage-mapping")) {
            buffer_append_str(clang_option,((char*)(__right_value1=xsprintf(" \%s ",((char*)(__right_value0=charp_to_string(argv[i])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            buffer_append_str(linker_option,((char*)(__right_value1=xsprintf(" \%s ",((char*)(__right_value0=charp_to_string(argv[i])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        else if(strlen(argv[i])>=5&&memcmp(argv[i],"-flto",strlen("-flto"))==0) {
            buffer_append_str(clang_option,((char*)(__right_value1=xsprintf(" \%s ",((char*)(__right_value0=charp_to_string(argv[i])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        else if(strlen(argv[i])>=9&&memcmp(argv[i],"-fno-lto",strlen("-fno-lto"))==0) {
            buffer_append_str(clang_option,((char*)(__right_value1=xsprintf(" \%s ",((char*)(__right_value0=charp_to_string(argv[i])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        else if(charp_operator_equals(argv[i],"-fomit-frame-pointer")) {
            buffer_append_str(clang_option," -fomit-frame-pointer ");
        }
        else if(charp_operator_equals(argv[i],"-fno-omit-frame-pointer")) {
            buffer_append_str(clang_option," -fno-omit-frame-pointer ");
        }
        else if(charp_operator_equals(argv[i],"-ffast-math")) {
            buffer_append_str(clang_option," -ffast-math ");
        }
        else if(charp_operator_equals(argv[i],"-fno-fast-math")) {
            buffer_append_str(clang_option," -fno-fast-math ");
        }
        else if(charp_operator_equals(argv[i],"-g")) {
            buffer_append_str(clang_option," -g ");
        }
        else if(charp_operator_equals(argv[i],"-v")) {
            buffer_append_str(clang_option," -v ");
            buffer_append_str(cpp_option," -v ");
            verbose=1;
        }
        else if(charp_operator_equals(argv[i],"-I")&&i+1<argc) {
            buffer_append_str(cpp_option,((char*)(__right_value1=xsprintf(" -I\%s ",((char*)(__right_value0=charp_to_string(argv[i+1])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            buffer_append_str(clang_option,((char*)(__right_value1=xsprintf(" -I\%s ",((char*)(__right_value0=charp_to_string(argv[i+1])))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            i++;
        }
        else if(charp_operator_equals(argv[i],"-I-")) {
            buffer_append_str(cpp_option," -I- ");
            buffer_append_str(clang_option," -I- ");
        }
        else if(strlen(argv[i])>=2&&memcmp(argv[i],"-I",strlen("-I"))==0) {
            buffer_append_str(cpp_option,((char*)(__right_value2=string_operator_add(((char*)(__right_value1=charp_operator_add(" ",argv[i])))," "))));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0));
            buffer_append_str(clang_option,((char*)(__right_value2=string_operator_add(((char*)(__right_value1=charp_operator_add(" ",argv[i])))," "))));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        else if(charp_operator_equals(argv[i],"-gdwarf-4")) {
            buffer_append_str(clang_option," -gdwarf-4 ");
        }
        else if(charp_operator_equals(argv[i],"-S")) {
            output_source_file_flag=1;
            output_object_file_flag=0;
            gComeOriginalSourcePosition=0;
        }
        else if(charp_operator_equals(argv[i],"-Sc")) {
            output_source_file_flag=1;
            output_object_file_flag=1;
            gComeOriginalSourcePosition=0;
            buffer_append_str(linker_option," -s ");
        }
        else if(charp_operator_equals(argv[i],"-s")) {
            buffer_append_str(linker_option," -s ");
        }
        else if(charp_operator_equals(argv[i],"-c")) {
            output_object_file=1;
        }
        else if(charp_operator_equals(argv[i],"-E")) {
            output_cpp_file=1;
        }
        else if(argv[i][0]==45) {
            buffer_append_str(clang_option,((char*)(__right_value0=charp_operator_add(argv[i]," "))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        else if(strlen(argv[i])>2&&memcmp(argv[i]+strlen(argv[i])-2,".o",2)==0) {
            list$1char$ph_push_back(object_files,(char*)come_increment_ref_count(__builtin_string(argv[i])));
        }
        else if(strlen(argv[i])>2&&memcmp(argv[i]+strlen(argv[i])-2,".a",2)==0) {
            list$1char$ph_push_back(object_files,(char*)come_increment_ref_count(__builtin_string(argv[i])));
        }
        else if(string_operator_equals(ext_name,"c")) {
            list$1char$ph_push_back(files,(char*)come_increment_ref_count(__builtin_string(argv[i])));
        }
        else {
            buffer_append_str(clang_option,((char*)(__right_value0=charp_operator_add(argv[i]," "))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        (ext_name = come_decrement_ref_count(ext_name, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(gcc_compiler) {
        buffer_append_str(cpp_option," -U__clang__ ");
    }
    else {
        buffer_append_str(cpp_option," -D__clang__ ");
    }
    gComeDebug=come_debug;
    for(o2_saved=(struct list$1char$ph*)come_increment_ref_count(files),it=list$1char$ph_begin(o2_saved);!list$1char$ph_end(o2_saved);it=list$1char$ph_next(o2_saved)){
        memset(&info,0,sizeof(struct sInfo));
        Value=fopen(it,"r");
        if(Value) {
            fclose(Value);
        }
        else {
            come_call_finalizer(sInfo_finalize, (&info), (void*)0, (void*)0, 1, 0, 0, (void*)0);
            continue;
        }
        __dec_obj29=info.sname,
        info.sname=(char*)come_increment_ref_count(__builtin_string(it));
        __dec_obj29 = come_decrement_ref_count(__dec_obj29, (void*)0, (void*)0, 0,0, (void*)0);
        info.sline=1;
        info.err_num=0;
        __dec_obj30=info.clang_option,
        info.clang_option=(char*)come_increment_ref_count(buffer_to_string(clang_option));
        __dec_obj30 = come_decrement_ref_count(__dec_obj30, (void*)0, (void*)0, 0,0, (void*)0);
        __dec_obj31=info.cpp_option,
        info.cpp_option=(char*)come_increment_ref_count(buffer_to_string(cpp_option));
        __dec_obj31 = come_decrement_ref_count(__dec_obj31, (void*)0, (void*)0, 0,0, (void*)0);
        __dec_obj32=info.linker_option,
        info.linker_option=(char*)come_increment_ref_count(buffer_to_string(linker_option));
        __dec_obj32 = come_decrement_ref_count(__dec_obj32, (void*)0, (void*)0, 0,0, (void*)0);
        __dec_obj33=info.linker_option2,
        info.linker_option2=(char*)come_increment_ref_count(buffer_to_string(linker_option2));
        __dec_obj33 = come_decrement_ref_count(__dec_obj33, (void*)0, (void*)0, 0,0, (void*)0);
        __dec_obj35=info.funcs,
        info.funcs=(struct map$2char$phsFun$ph*)come_increment_ref_count(map$2char$phsFun$ph_initialize((struct map$2char$phsFun$ph*)come_increment_ref_count((struct map$2char$phsFun$ph*)come_calloc_v2(1, sizeof(struct map$2char$phsFun$ph)*(1), "02transpile.c", 1650, "struct map$2char$phsFun$ph*"))));
        come_call_finalizer(map$2char$phsFun$ph_finalize, __dec_obj35,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        __dec_obj36=info.uniq_funcs,
        info.uniq_funcs=(struct map$2char$phsFun$ph*)come_increment_ref_count(map$2char$phsFun$ph_initialize((struct map$2char$phsFun$ph*)come_increment_ref_count((struct map$2char$phsFun$ph*)come_calloc_v2(1, sizeof(struct map$2char$phsFun$ph)*(1), "02transpile.c", 1651, "struct map$2char$phsFun$ph*"))));
        come_call_finalizer(map$2char$phsFun$ph_finalize, __dec_obj36,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        __dec_obj38=info.struct_definition,
        info.struct_definition=(struct map$2char$phbuffer$ph*)come_increment_ref_count(map$2char$phbuffer$ph_initialize((struct map$2char$phbuffer$ph*)come_increment_ref_count((struct map$2char$phbuffer$ph*)come_calloc_v2(1, sizeof(struct map$2char$phbuffer$ph)*(1), "02transpile.c", 1652, "struct map$2char$phbuffer$ph*"))));
        come_call_finalizer(map$2char$phbuffer$ph_finalize, __dec_obj38,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        __dec_obj40=info.uniq_definition,
        info.uniq_definition=(struct map$2char$phchar$ph*)come_increment_ref_count(map$2char$phchar$ph_initialize((struct map$2char$phchar$ph*)come_increment_ref_count((struct map$2char$phchar$ph*)come_calloc_v2(1, sizeof(struct map$2char$phchar$ph)*(1), "02transpile.c", 1653, "struct map$2char$phchar$ph*"))));
        come_call_finalizer(map$2char$phchar$ph_finalize, __dec_obj40,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        __dec_obj41=info.previous_struct_definition,
        info.previous_struct_definition=(struct map$2char$phbuffer$ph*)come_increment_ref_count(map$2char$phbuffer$ph_initialize((struct map$2char$phbuffer$ph*)come_increment_ref_count((struct map$2char$phbuffer$ph*)come_calloc_v2(1, sizeof(struct map$2char$phbuffer$ph)*(1), "02transpile.c", 1654, "struct map$2char$phbuffer$ph*"))));
        come_call_finalizer(map$2char$phbuffer$ph_finalize, __dec_obj41,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        __dec_obj42=info.typedef_definition,
        info.typedef_definition=(struct map$2char$phbuffer$ph*)come_increment_ref_count(map$2char$phbuffer$ph_initialize((struct map$2char$phbuffer$ph*)come_increment_ref_count((struct map$2char$phbuffer$ph*)come_calloc_v2(1, sizeof(struct map$2char$phbuffer$ph)*(1), "02transpile.c", 1655, "struct map$2char$phbuffer$ph*"))));
        come_call_finalizer(map$2char$phbuffer$ph_finalize, __dec_obj42,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        __dec_obj43=info.reflection_vars,
        info.reflection_vars=(struct map$2char$phchar$ph*)come_increment_ref_count(map$2char$phchar$ph_initialize((struct map$2char$phchar$ph*)come_increment_ref_count((struct map$2char$phchar$ph*)come_calloc_v2(1, sizeof(struct map$2char$phchar$ph)*(1), "02transpile.c", 1656, "struct map$2char$phchar$ph*"))));
        come_call_finalizer(map$2char$phchar$ph_finalize, __dec_obj43,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        __dec_obj45=info.generics_funcs,
        info.generics_funcs=(struct map$2char$phsGenericsFun$ph*)come_increment_ref_count(map$2char$phsGenericsFun$ph_initialize((struct map$2char$phsGenericsFun$ph*)come_increment_ref_count((struct map$2char$phsGenericsFun$ph*)come_calloc_v2(1, sizeof(struct map$2char$phsGenericsFun$ph)*(1), "02transpile.c", 1657, "struct map$2char$phsGenericsFun$ph*"))));
        come_call_finalizer(map$2char$phsGenericsFun$ph_finalize, __dec_obj45,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        __dec_obj47=info.classes,
        info.classes=(struct map$2char$phsClass$ph*)come_increment_ref_count(map$2char$phsClass$ph_initialize((struct map$2char$phsClass$ph*)come_increment_ref_count((struct map$2char$phsClass$ph*)come_calloc_v2(1, sizeof(struct map$2char$phsClass$ph)*(1), "02transpile.c", 1658, "struct map$2char$phsClass$ph*"))));
        come_call_finalizer(map$2char$phsClass$ph_finalize, __dec_obj47,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        __dec_obj49=info.modules,
        info.modules=(struct map$2char$phsClassModule$ph*)come_increment_ref_count(map$2char$phsClassModule$ph_initialize((struct map$2char$phsClassModule$ph*)come_increment_ref_count((struct map$2char$phsClassModule$ph*)come_calloc_v2(1, sizeof(struct map$2char$phsClassModule$ph)*(1), "02transpile.c", 1659, "struct map$2char$phsClassModule$ph*"))));
        come_call_finalizer(map$2char$phsClassModule$ph_finalize, __dec_obj49,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        __dec_obj51=info.types,
        info.types=(struct map$2char$phsType$ph*)come_increment_ref_count(map$2char$phsType$ph_initialize((struct map$2char$phsType$ph*)come_increment_ref_count((struct map$2char$phsType$ph*)come_calloc_v2(1, sizeof(struct map$2char$phsType$ph)*(1), "02transpile.c", 1660, "struct map$2char$phsType$ph*"))));
        come_call_finalizer(map$2char$phsType$ph_finalize, __dec_obj51,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        __dec_obj52=info.module,
        info.module=(struct sModule*)come_increment_ref_count(sModule_initialize((struct sModule*)come_increment_ref_count((struct sModule*)come_calloc_v2(1, sizeof(struct sModule)*(1), "02transpile.c", 1661, "struct sModule*"))));
        come_call_finalizer(sModule_finalize, __dec_obj52,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        __dec_obj53=info.right_value_objects,
        info.right_value_objects=(struct list$1sRightValueObject$ph*)come_increment_ref_count(list$1sRightValueObject$ph_initialize((struct list$1sRightValueObject$ph*)come_increment_ref_count((struct list$1sRightValueObject$ph*)come_calloc_v2(1, sizeof(struct list$1sRightValueObject$ph)*(1), "02transpile.c", 1662, "struct list$1sRightValueObject$ph*"))));
        come_call_finalizer(list$1sRightValueObject$ph_finalize, __dec_obj53,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        __dec_obj54=info.stack,
        info.stack=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "02transpile.c", 1663, "struct list$1CVALUE$ph*"))));
        come_call_finalizer(list$1CVALUE$ph_finalize, __dec_obj54,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        __dec_obj55=info.gv_table,
        info.gv_table=(struct sVarTable*)come_increment_ref_count(sVarTable_initialize((struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc_v2(1, sizeof(struct sVarTable)*(1), "02transpile.c", 1664, "struct sVarTable*")),1,((void*)0)));
        come_call_finalizer(sVarTable_finalize, __dec_obj55,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        lv_table=(struct sVarTable*)come_increment_ref_count(sVarTable_initialize((struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc_v2(1, sizeof(struct sVarTable)*(1), "02transpile.c", 1665, "struct sVarTable*")),0,((void*)0)));
        info.lv_table=lv_table;
        __dec_obj56=info.generics_type_names,
        info.generics_type_names=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "02transpile.c", 1667, "struct list$1char$ph*"))));
        come_call_finalizer(list$1char$ph_finalize, __dec_obj56,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        __dec_obj57=info.method_generics_type_names,
        info.method_generics_type_names=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "02transpile.c", 1668, "struct list$1char$ph*"))));
        come_call_finalizer(list$1char$ph_finalize, __dec_obj57,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        __dec_obj58=info.generics_classes,
        info.generics_classes=(struct map$2char$phsClass$ph*)come_increment_ref_count(map$2char$phsClass$ph_initialize((struct map$2char$phsClass$ph*)come_increment_ref_count((struct map$2char$phsClass$ph*)come_calloc_v2(1, sizeof(struct map$2char$phsClass$ph)*(1), "02transpile.c", 1669, "struct map$2char$phsClass$ph*"))));
        come_call_finalizer(map$2char$phsClass$ph_finalize, __dec_obj58,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        info.verbose=verbose;
        info.m5stack_cpp=m5stack_cpp;
        info.pico_cpp=pico_cpp;
        info.emb_cpp=emb_cpp;
        info.gcc_compiler=gcc_compiler;
        init_classes(&info);
        clear_tmp_file(&info);
        Value_77=cpp(&info);
        if(!Value_77) {
            printf("transpile failed\n");
            exit(2);
        }
        else {
        }
        __dec_obj59=info.source,
        info.source=(struct buffer*)come_increment_ref_count(charp_to_buffer(((char*)(__right_value1=charp_read(((char*)(__right_value0=xsprintf("%s.i",it))))))));
        come_call_finalizer(buffer_finalize, __dec_obj59,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        info.p=info.source->buf;
        info.head=info.source->buf;
        info.end=info.source->buf+info.source->len;
        if(output_file_name) {
            __dec_obj60=info.output_file_name,
            info.output_file_name=(char*)come_increment_ref_count(__builtin_string(output_file_name));
            __dec_obj60 = come_decrement_ref_count(__dec_obj60, (void*)0, (void*)0, 0,0, (void*)0);
        }
        else {
            __dec_obj61=info.output_file_name,
            info.output_file_name=((void*)0);
            __dec_obj61 = come_decrement_ref_count(__dec_obj61, (void*)0, (void*)0, 0,0, (void*)0);
        }
        Value_78=output_cpp_file;
        if(!Value_78) {
            transpile(&info);
            Value_79=output_source_file(&info);
            if(!Value_79) {
                printf("output source file faield\n");
                exit(2);
            }
            else {
            }
            if(info.err_num>0) {
                printf("transpile error. err num %d\n",info.err_num);
                exit(2);
            }
            if(info.err_num2>0) {
                printf("transpile error. err num %d\n",info.err_num2);
            }
            Value_80=output_object_file_flag;
            if(Value_80) {
                Value_81=compile(&info,output_object_file,object_files);
                if(!Value_81) {
                    printf("compile faield\n");
                    exit(27);
                }
                else {
                }
            }
            else {
            }
        }
        else {
        }
        if(output_cpp_file) {
        }
        else if(info.err_num>0) {
        }
        else if(output_source_file_flag) {
            clear_tmp_file_without_object_file_and_ccfile(&info);
        }
        else {
            clear_tmp_file_without_object_file(&info);
        }
        come_call_finalizer(sInfo_finalize, (&info), (void*)0, (void*)0, 1, 0, 0, (void*)0);
        come_call_finalizer(sVarTable_finalize, lv_table, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer(list$1char$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(!output_object_file&&!output_cpp_file&&(list$1char$ph_length(files)>0||list$1char$ph_length(object_files)>0)) {
        memset(&info_82,0,sizeof(struct sInfo));
        __dec_obj62=info_82.sname,
        info_82.sname=(char*)come_increment_ref_count((char*)come_memdup(((char*)(__right_value0=list$1char$ph_operator_load_element(files,0))), "02transpile.c", 1744, "char*"));
        __dec_obj62 = come_decrement_ref_count(__dec_obj62, (void*)0, (void*)0, 0,0, (void*)0);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        __dec_obj63=info_82.clang_option,
        info_82.clang_option=(char*)come_increment_ref_count(buffer_to_string(clang_option));
        __dec_obj63 = come_decrement_ref_count(__dec_obj63, (void*)0, (void*)0, 0,0, (void*)0);
        __dec_obj64=info_82.linker_option,
        info_82.linker_option=(char*)come_increment_ref_count(buffer_to_string(linker_option));
        __dec_obj64 = come_decrement_ref_count(__dec_obj64, (void*)0, (void*)0, 0,0, (void*)0);
        __dec_obj65=info_82.linker_option2,
        info_82.linker_option2=(char*)come_increment_ref_count(buffer_to_string(linker_option2));
        __dec_obj65 = come_decrement_ref_count(__dec_obj65, (void*)0, (void*)0, 0,0, (void*)0);
        info_82.verbose=verbose;
        if(output_file_name) {
            __dec_obj66=info_82.output_file_name,
            info_82.output_file_name=(char*)come_increment_ref_count(__builtin_string(output_file_name));
            __dec_obj66 = come_decrement_ref_count(__dec_obj66, (void*)0, (void*)0, 0,0, (void*)0);
        }
        else {
            __dec_obj67=info_82.output_file_name,
            info_82.output_file_name=((void*)0);
            __dec_obj67 = come_decrement_ref_count(__dec_obj67, (void*)0, (void*)0, 0,0, (void*)0);
        }
        if(output_object_file_flag) {
            Value_85=linker(&info_82,object_files);
            if(!Value_85) {
                printf("linker faield\n");
                exit(13);
            }
            else {
            }
        }
        if(!output_cpp_file&&!output_source_file_flag) {
            clear_tmp_file(&info_82);
        }
        come_call_finalizer(sInfo_finalize, (&info_82), (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    __result_obj__0 = 0;
    (output_file_name_str = come_decrement_ref_count(output_file_name_str, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(buffer_finalize, clang_option, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(buffer_finalize, linker_option, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(buffer_finalize, linker_option2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(buffer_finalize, cpp_option, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, files, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, object_files, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (output_file_name = come_decrement_ref_count(output_file_name, (void*)0, (void*)0, 0, 0, (void*)0));
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

static void sInfo_finalize(struct sInfo* self)
{
    if(self!=((void*)0)&&self->source!=((void*)0)) {
        come_call_finalizer(buffer_finalize, self->source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->sname_at_head!=((void*)0)) {
        (self->sname_at_head = come_decrement_ref_count(self->sname_at_head, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->base_sname!=((void*)0)) {
        (self->base_sname = come_decrement_ref_count(self->base_sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->clang_option!=((void*)0)) {
        (self->clang_option = come_decrement_ref_count(self->clang_option, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->cpp_option!=((void*)0)) {
        (self->cpp_option = come_decrement_ref_count(self->cpp_option, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->linker_option!=((void*)0)) {
        (self->linker_option = come_decrement_ref_count(self->linker_option, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->linker_option2!=((void*)0)) {
        (self->linker_option2 = come_decrement_ref_count(self->linker_option2, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->funcs!=((void*)0)) {
        come_call_finalizer(map$2char$phsFun$ph$p_finalize, self->funcs, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->uniq_funcs!=((void*)0)) {
        come_call_finalizer(map$2char$phsFun$ph$p_finalize, self->uniq_funcs, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->generics_funcs!=((void*)0)) {
        come_call_finalizer(map$2char$phsGenericsFun$ph$p_finalize, self->generics_funcs, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->classes!=((void*)0)) {
        come_call_finalizer(map$2char$phsClass$ph$p_finalize, self->classes, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->modules!=((void*)0)) {
        come_call_finalizer(map$2char$phsClassModule$ph$p_finalize, self->modules, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->types!=((void*)0)) {
        come_call_finalizer(map$2char$phsType$ph$p_finalize, self->types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->generics_classes!=((void*)0)) {
        come_call_finalizer(map$2char$phsClass$ph$p_finalize, self->generics_classes, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->struct_definition!=((void*)0)) {
        come_call_finalizer(map$2char$phbuffer$ph$p_finalize, self->struct_definition, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->previous_struct_definition!=((void*)0)) {
        come_call_finalizer(map$2char$phbuffer$ph$p_finalize, self->previous_struct_definition, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->typedef_definition!=((void*)0)) {
        come_call_finalizer(map$2char$phbuffer$ph$p_finalize, self->typedef_definition, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->reflection_vars!=((void*)0)) {
        come_call_finalizer(map$2char$phchar$ph$p_finalize, self->reflection_vars, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->module!=((void*)0)) {
        come_call_finalizer(sModule_finalize, self->module, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->right_value_objects!=((void*)0)) {
        come_call_finalizer(list$1sRightValueObject$ph$p_finalize, self->right_value_objects, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->generics_type!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->generics_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->method_generics_types!=((void*)0)) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->method_generics_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->stack!=((void*)0)) {
        come_call_finalizer(list$1CVALUE$ph$p_finalize, self->stack, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->come_function_result_type!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->come_function_result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->come_method_block_function_result_type!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->come_method_block_function_result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->gv_table!=((void*)0)) {
        come_call_finalizer(sVarTable_finalize, self->gv_table, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->generics_type_names!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, self->generics_type_names, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->method_generics_type_names!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, self->method_generics_type_names, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->impl_type!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->impl_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->class_type!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->class_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->output_file_name!=((void*)0)) {
        (self->output_file_name = come_decrement_ref_count(self->output_file_name, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->function_result_type!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->function_result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->module_params!=((void*)0)) {
        come_call_finalizer(map$2char$phchar$ph$p_finalize, self->module_params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->match_it_var!=((void*)0)) {
        come_call_finalizer(list$1sVar$ph$p_finalize, self->match_it_var, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->uniq_definition!=((void*)0)) {
        come_call_finalizer(map$2char$phchar$ph$p_finalize, self->uniq_definition, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->pragma!=((void*)0)) {
        (self->pragma = come_decrement_ref_count(self->pragma, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->paren_block_buffer!=((void*)0)) {
        come_call_finalizer(buffer_finalize, self->paren_block_buffer, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void map$2char$phsFun$ph$p_finalize(struct map$2char$phsFun$ph* self)
{
    int i;
    int i_63;
    for(i=0;i<self->size;i++){
        if(self->item_existance[i]) {
            if(1) {
                come_call_finalizer(sFun_finalize, self->items[i], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free_v2((char*)self->items);
    for(i_63=0;i_63<self->size;i_63++){
        if(self->item_existance[i_63]) {
            if(1) {
                (self->keys[i_63] = come_decrement_ref_count(self->keys[i_63], (void*)0, (void*)0, 0, 0, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, (void*)0));
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

static void map$2char$phsGenericsFun$ph$p_finalize(struct map$2char$phsGenericsFun$ph* self)
{
    int i;
    int i_64;
    for(i=0;i<self->size;i++){
        if(self->item_existance[i]) {
            if(1) {
                come_call_finalizer(sGenericsFun_finalize, self->items[i], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free_v2((char*)self->items);
    for(i_64=0;i_64<self->size;i_64++){
        if(self->item_existance[i_64]) {
            if(1) {
                (self->keys[i_64] = come_decrement_ref_count(self->keys[i_64], (void*)0, (void*)0, 0, 0, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, (void*)0));
}

static void sGenericsFun_finalize(struct sGenericsFun* self)
{
    if(self!=((void*)0)&&self->mImplType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mImplType, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mGenericsTypeNames, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mMethodGenericsTypeNames, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
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
    if(self!=((void*)0)&&self->mBlock!=((void*)0)) {
        (self->mBlock = come_decrement_ref_count(self->mBlock, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->mGenericsSName!=((void*)0)) {
        (self->mGenericsSName = come_decrement_ref_count(self->mGenericsSName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

static void map$2char$phsClass$ph$p_finalize(struct map$2char$phsClass$ph* self)
{
    int i;
    int i_65;
    for(i=0;i<self->size;i++){
        if(self->item_existance[i]) {
            if(1) {
                come_call_finalizer(sClass_finalize, self->items[i], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free_v2((char*)self->items);
    for(i_65=0;i_65<self->size;i_65++){
        if(self->item_existance[i_65]) {
            if(1) {
                (self->keys[i_65] = come_decrement_ref_count(self->keys[i_65], (void*)0, (void*)0, 0, 0, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, (void*)0));
}

static void map$2char$phsClassModule$ph$p_finalize(struct map$2char$phsClassModule$ph* self)
{
    int i;
    int i_66;
    for(i=0;i<self->size;i++){
        if(self->item_existance[i]) {
            if(1) {
                come_call_finalizer(sClassModule_finalize, self->items[i], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free_v2((char*)self->items);
    for(i_66=0;i_66<self->size;i_66++){
        if(self->item_existance[i_66]) {
            if(1) {
                (self->keys[i_66] = come_decrement_ref_count(self->keys[i_66], (void*)0, (void*)0, 0, 0, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, (void*)0));
}

static void sClassModule_finalize(struct sClassModule* self)
{
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->mText!=((void*)0)) {
        (self->mText = come_decrement_ref_count(self->mText, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->mParams!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParams, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mSName!=((void*)0)) {
        (self->mSName = come_decrement_ref_count(self->mSName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

static void map$2char$phsType$ph$p_finalize(struct map$2char$phsType$ph* self)
{
    int i;
    int i_67;
    for(i=0;i<self->size;i++){
        if(self->item_existance[i]) {
            if(1) {
                come_call_finalizer(sType_finalize, self->items[i], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free_v2((char*)self->items);
    for(i_67=0;i_67<self->size;i_67++){
        if(self->item_existance[i_67]) {
            if(1) {
                (self->keys[i_67] = come_decrement_ref_count(self->keys[i_67], (void*)0, (void*)0, 0, 0, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, (void*)0));
}

static void map$2char$phbuffer$ph$p_finalize(struct map$2char$phbuffer$ph* self)
{
    int i;
    int i_68;
    for(i=0;i<self->size;i++){
        if(self->item_existance[i]) {
            if(1) {
                come_call_finalizer(buffer_finalize, self->items[i], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free_v2((char*)self->items);
    for(i_68=0;i_68<self->size;i_68++){
        if(self->item_existance[i_68]) {
            if(1) {
                (self->keys[i_68] = come_decrement_ref_count(self->keys[i_68], (void*)0, (void*)0, 0, 0, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, (void*)0));
}

static void map$2char$phchar$ph$p_finalize(struct map$2char$phchar$ph* self)
{
    int i;
    int i_69;
    for(i=0;i<self->size;i++){
        if(self->item_existance[i]) {
            if(1) {
                (self->items[i] = come_decrement_ref_count(self->items[i], (void*)0, (void*)0, 0, 0, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->items);
    for(i_69=0;i_69<self->size;i_69++){
        if(self->item_existance[i_69]) {
            if(1) {
                (self->keys[i_69] = come_decrement_ref_count(self->keys[i_69], (void*)0, (void*)0, 0, 0, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, (void*)0));
}

static void sModule_finalize(struct sModule* self)
{
    if(self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        come_call_finalizer(buffer_finalize, self->mSourceHead, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mSource!=((void*)0)) {
        come_call_finalizer(buffer_finalize, self->mSource, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mLastCode!=((void*)0)) {
        (self->mLastCode = come_decrement_ref_count(self->mLastCode, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->mLastCode2!=((void*)0)) {
        (self->mLastCode2 = come_decrement_ref_count(self->mLastCode2, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->mHeader!=((void*)0)) {
        come_call_finalizer(map$2char$phchar$ph$p_finalize, self->mHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void list$1sRightValueObject$ph$p_finalize(struct list$1sRightValueObject$ph* self)
{
    struct list_item$1sRightValueObject$ph* it;
    struct list_item$1sRightValueObject$ph* prev_it;
    if(self==((void*)0)) {
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sRightValueObject$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sRightValueObject$ph$p_finalize(struct list_item$1sRightValueObject$ph* self)
{
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer(sRightValueObject_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void sRightValueObject_finalize(struct sRightValueObject* self)
{
    if(self!=((void*)0)&&self->mType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mType, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mVarName!=((void*)0)) {
        (self->mVarName = come_decrement_ref_count(self->mVarName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->mFunName!=((void*)0)) {
        (self->mFunName = come_decrement_ref_count(self->mFunName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->mObjType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mObjType, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mObjValue!=((void*)0)) {
        (self->mObjValue = come_decrement_ref_count(self->mObjValue, (void*)0, (void*)0, 0, 0, (void*)0));
    }
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

static struct map$2char$phsFun$ph* map$2char$phsFun$ph_initialize(struct map$2char$phsFun$ph* self)
{
    void* __right_value0 = (void*)0;
    int i;
    void* __right_value1 = (void*)0;
    struct list$1char$ph* __dec_obj34;
    struct map$2char$phsFun$ph* __result_obj__0;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value0=(char**)come_calloc_v2(1, sizeof(char*)*(1*(128)), "./neo-c.h", 1913, "char**"))));
    self->items=(struct sFun**)come_increment_ref_count(((struct sFun**)(__right_value0=(struct sFun**)come_calloc_v2(1, sizeof(struct sFun*)*(1*(128)), "./neo-c.h", 1914, "struct sFun**"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value0=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(128)), "./neo-c.h", 1915, "_Bool*"))));
    for(i=0;i<128;i++){
        self->item_existance[i]=0;
    }
    self->size=128;
    self->len=0;
    __dec_obj34=self->key_list,
    self->key_list=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "./neo-c.h", 1925, "struct list$1char$ph*"))));
    come_call_finalizer(list$1char$ph_finalize, __dec_obj34,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    self->it=0;
    __result_obj__0 = (struct map$2char$phsFun$ph*)come_increment_ref_count(self);
    come_call_finalizer(map$2char$phsFun$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(map$2char$phsFun$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
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

static void map$2char$phsFun$ph_finalize(struct map$2char$phsFun$ph* self)
{
    int i;
    int i_70;
    for(i=0;i<self->size;i++){
        if(self->item_existance[i]) {
            if(1) {
                come_call_finalizer(sFun_finalize, self->items[i], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free_v2((char*)self->items);
    for(i_70=0;i_70<self->size;i_70++){
        if(self->item_existance[i_70]) {
            if(1) {
                (self->keys[i_70] = come_decrement_ref_count(self->keys[i_70], (void*)0, (void*)0, 0, 0, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, (void*)0));
}

static struct map$2char$phbuffer$ph* map$2char$phbuffer$ph_initialize(struct map$2char$phbuffer$ph* self)
{
    void* __right_value0 = (void*)0;
    int i;
    void* __right_value1 = (void*)0;
    struct list$1char$ph* __dec_obj37;
    struct map$2char$phbuffer$ph* __result_obj__0;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value0=(char**)come_calloc_v2(1, sizeof(char*)*(1*(128)), "./neo-c.h", 1913, "char**"))));
    self->items=(struct buffer**)come_increment_ref_count(((struct buffer**)(__right_value0=(struct buffer**)come_calloc_v2(1, sizeof(struct buffer*)*(1*(128)), "./neo-c.h", 1914, "struct buffer**"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value0=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(128)), "./neo-c.h", 1915, "_Bool*"))));
    for(i=0;i<128;i++){
        self->item_existance[i]=0;
    }
    self->size=128;
    self->len=0;
    __dec_obj37=self->key_list,
    self->key_list=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "./neo-c.h", 1925, "struct list$1char$ph*"))));
    come_call_finalizer(list$1char$ph_finalize, __dec_obj37,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    self->it=0;
    __result_obj__0 = (struct map$2char$phbuffer$ph*)come_increment_ref_count(self);
    come_call_finalizer(map$2char$phbuffer$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(map$2char$phbuffer$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static void map$2char$phbuffer$ph_finalize(struct map$2char$phbuffer$ph* self)
{
    int i;
    int i_71;
    for(i=0;i<self->size;i++){
        if(self->item_existance[i]) {
            if(1) {
                come_call_finalizer(buffer_finalize, self->items[i], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free_v2((char*)self->items);
    for(i_71=0;i_71<self->size;i_71++){
        if(self->item_existance[i_71]) {
            if(1) {
                (self->keys[i_71] = come_decrement_ref_count(self->keys[i_71], (void*)0, (void*)0, 0, 0, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, (void*)0));
}

static struct map$2char$phchar$ph* map$2char$phchar$ph_initialize(struct map$2char$phchar$ph* self)
{
    void* __right_value0 = (void*)0;
    int i;
    void* __right_value1 = (void*)0;
    struct list$1char$ph* __dec_obj39;
    struct map$2char$phchar$ph* __result_obj__0;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value0=(char**)come_calloc_v2(1, sizeof(char*)*(1*(128)), "./neo-c.h", 1913, "char**"))));
    self->items=(char**)come_increment_ref_count(((char**)(__right_value0=(char**)come_calloc_v2(1, sizeof(char*)*(1*(128)), "./neo-c.h", 1914, "char**"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value0=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(128)), "./neo-c.h", 1915, "_Bool*"))));
    for(i=0;i<128;i++){
        self->item_existance[i]=0;
    }
    self->size=128;
    self->len=0;
    __dec_obj39=self->key_list,
    self->key_list=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "./neo-c.h", 1925, "struct list$1char$ph*"))));
    come_call_finalizer(list$1char$ph_finalize, __dec_obj39,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    self->it=0;
    __result_obj__0 = (struct map$2char$phchar$ph*)come_increment_ref_count(self);
    come_call_finalizer(map$2char$phchar$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(map$2char$phchar$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static void map$2char$phchar$ph_finalize(struct map$2char$phchar$ph* self)
{
    int i;
    int i_72;
    for(i=0;i<self->size;i++){
        if(self->item_existance[i]) {
            if(1) {
                (self->items[i] = come_decrement_ref_count(self->items[i], (void*)0, (void*)0, 0, 0, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->items);
    for(i_72=0;i_72<self->size;i_72++){
        if(self->item_existance[i_72]) {
            if(1) {
                (self->keys[i_72] = come_decrement_ref_count(self->keys[i_72], (void*)0, (void*)0, 0, 0, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, (void*)0));
}

static struct map$2char$phsGenericsFun$ph* map$2char$phsGenericsFun$ph_initialize(struct map$2char$phsGenericsFun$ph* self)
{
    void* __right_value0 = (void*)0;
    int i;
    void* __right_value1 = (void*)0;
    struct list$1char$ph* __dec_obj44;
    struct map$2char$phsGenericsFun$ph* __result_obj__0;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value0=(char**)come_calloc_v2(1, sizeof(char*)*(1*(128)), "./neo-c.h", 1913, "char**"))));
    self->items=(struct sGenericsFun**)come_increment_ref_count(((struct sGenericsFun**)(__right_value0=(struct sGenericsFun**)come_calloc_v2(1, sizeof(struct sGenericsFun*)*(1*(128)), "./neo-c.h", 1914, "struct sGenericsFun**"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value0=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(128)), "./neo-c.h", 1915, "_Bool*"))));
    for(i=0;i<128;i++){
        self->item_existance[i]=0;
    }
    self->size=128;
    self->len=0;
    __dec_obj44=self->key_list,
    self->key_list=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "./neo-c.h", 1925, "struct list$1char$ph*"))));
    come_call_finalizer(list$1char$ph_finalize, __dec_obj44,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    self->it=0;
    __result_obj__0 = (struct map$2char$phsGenericsFun$ph*)come_increment_ref_count(self);
    come_call_finalizer(map$2char$phsGenericsFun$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(map$2char$phsGenericsFun$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static void map$2char$phsGenericsFun$ph_finalize(struct map$2char$phsGenericsFun$ph* self)
{
    int i;
    int i_73;
    for(i=0;i<self->size;i++){
        if(self->item_existance[i]) {
            if(1) {
                come_call_finalizer(sGenericsFun_finalize, self->items[i], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free_v2((char*)self->items);
    for(i_73=0;i_73<self->size;i_73++){
        if(self->item_existance[i_73]) {
            if(1) {
                (self->keys[i_73] = come_decrement_ref_count(self->keys[i_73], (void*)0, (void*)0, 0, 0, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, (void*)0));
}

static struct map$2char$phsClass$ph* map$2char$phsClass$ph_initialize(struct map$2char$phsClass$ph* self)
{
    void* __right_value0 = (void*)0;
    int i;
    void* __right_value1 = (void*)0;
    struct list$1char$ph* __dec_obj46;
    struct map$2char$phsClass$ph* __result_obj__0;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value0=(char**)come_calloc_v2(1, sizeof(char*)*(1*(128)), "./neo-c.h", 1913, "char**"))));
    self->items=(struct sClass**)come_increment_ref_count(((struct sClass**)(__right_value0=(struct sClass**)come_calloc_v2(1, sizeof(struct sClass*)*(1*(128)), "./neo-c.h", 1914, "struct sClass**"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value0=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(128)), "./neo-c.h", 1915, "_Bool*"))));
    for(i=0;i<128;i++){
        self->item_existance[i]=0;
    }
    self->size=128;
    self->len=0;
    __dec_obj46=self->key_list,
    self->key_list=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "./neo-c.h", 1925, "struct list$1char$ph*"))));
    come_call_finalizer(list$1char$ph_finalize, __dec_obj46,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    self->it=0;
    __result_obj__0 = (struct map$2char$phsClass$ph*)come_increment_ref_count(self);
    come_call_finalizer(map$2char$phsClass$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(map$2char$phsClass$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static void map$2char$phsClass$ph_finalize(struct map$2char$phsClass$ph* self)
{
    int i;
    int i_74;
    for(i=0;i<self->size;i++){
        if(self->item_existance[i]) {
            if(1) {
                come_call_finalizer(sClass_finalize, self->items[i], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free_v2((char*)self->items);
    for(i_74=0;i_74<self->size;i_74++){
        if(self->item_existance[i_74]) {
            if(1) {
                (self->keys[i_74] = come_decrement_ref_count(self->keys[i_74], (void*)0, (void*)0, 0, 0, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, (void*)0));
}

static struct map$2char$phsClassModule$ph* map$2char$phsClassModule$ph_initialize(struct map$2char$phsClassModule$ph* self)
{
    void* __right_value0 = (void*)0;
    int i;
    void* __right_value1 = (void*)0;
    struct list$1char$ph* __dec_obj48;
    struct map$2char$phsClassModule$ph* __result_obj__0;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value0=(char**)come_calloc_v2(1, sizeof(char*)*(1*(128)), "./neo-c.h", 1913, "char**"))));
    self->items=(struct sClassModule**)come_increment_ref_count(((struct sClassModule**)(__right_value0=(struct sClassModule**)come_calloc_v2(1, sizeof(struct sClassModule*)*(1*(128)), "./neo-c.h", 1914, "struct sClassModule**"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value0=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(128)), "./neo-c.h", 1915, "_Bool*"))));
    for(i=0;i<128;i++){
        self->item_existance[i]=0;
    }
    self->size=128;
    self->len=0;
    __dec_obj48=self->key_list,
    self->key_list=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "./neo-c.h", 1925, "struct list$1char$ph*"))));
    come_call_finalizer(list$1char$ph_finalize, __dec_obj48,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    self->it=0;
    __result_obj__0 = (struct map$2char$phsClassModule$ph*)come_increment_ref_count(self);
    come_call_finalizer(map$2char$phsClassModule$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(map$2char$phsClassModule$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static void map$2char$phsClassModule$ph_finalize(struct map$2char$phsClassModule$ph* self)
{
    int i;
    int i_75;
    for(i=0;i<self->size;i++){
        if(self->item_existance[i]) {
            if(1) {
                come_call_finalizer(sClassModule_finalize, self->items[i], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free_v2((char*)self->items);
    for(i_75=0;i_75<self->size;i_75++){
        if(self->item_existance[i_75]) {
            if(1) {
                (self->keys[i_75] = come_decrement_ref_count(self->keys[i_75], (void*)0, (void*)0, 0, 0, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, (void*)0));
}

static struct map$2char$phsType$ph* map$2char$phsType$ph_initialize(struct map$2char$phsType$ph* self)
{
    void* __right_value0 = (void*)0;
    int i;
    void* __right_value1 = (void*)0;
    struct list$1char$ph* __dec_obj50;
    struct map$2char$phsType$ph* __result_obj__0;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value0=(char**)come_calloc_v2(1, sizeof(char*)*(1*(128)), "./neo-c.h", 1913, "char**"))));
    self->items=(struct sType**)come_increment_ref_count(((struct sType**)(__right_value0=(struct sType**)come_calloc_v2(1, sizeof(struct sType*)*(1*(128)), "./neo-c.h", 1914, "struct sType**"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value0=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(128)), "./neo-c.h", 1915, "_Bool*"))));
    for(i=0;i<128;i++){
        self->item_existance[i]=0;
    }
    self->size=128;
    self->len=0;
    __dec_obj50=self->key_list,
    self->key_list=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "./neo-c.h", 1925, "struct list$1char$ph*"))));
    come_call_finalizer(list$1char$ph_finalize, __dec_obj50,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    self->it=0;
    __result_obj__0 = (struct map$2char$phsType$ph*)come_increment_ref_count(self);
    come_call_finalizer(map$2char$phsType$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(map$2char$phsType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static void map$2char$phsType$ph_finalize(struct map$2char$phsType$ph* self)
{
    int i;
    int i_76;
    for(i=0;i<self->size;i++){
        if(self->item_existance[i]) {
            if(1) {
                come_call_finalizer(sType_finalize, self->items[i], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free_v2((char*)self->items);
    for(i_76=0;i_76<self->size;i_76++){
        if(self->item_existance[i_76]) {
            if(1) {
                (self->keys[i_76] = come_decrement_ref_count(self->keys[i_76], (void*)0, (void*)0, 0, 0, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, (void*)0));
}

static struct list$1sRightValueObject$ph* list$1sRightValueObject$ph_initialize(struct list$1sRightValueObject$ph* self)
{
    struct list$1sRightValueObject$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__0 = (struct list$1sRightValueObject$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1sRightValueObject$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1sRightValueObject$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static void list$1sRightValueObject$ph_finalize(struct list$1sRightValueObject$ph* self)
{
    struct list_item$1sRightValueObject$ph* it;
    struct list_item$1sRightValueObject$ph* prev_it;
    if(self==((void*)0)) {
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sRightValueObject$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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

static void list$1CVALUE$ph_finalize(struct list$1CVALUE$ph* self)
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

static int list$1char$ph_length(struct list$1char$ph* self)
{
    if(self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static char* list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position)
{
    char* default_value;
    char* __result_obj__0;
    struct list_item$1char$ph* it;
    int i;
    char* default_value_83;
    if(self==((void*)0)) {
        memset(&default_value,0,sizeof(char*));
        __result_obj__0 = (char*)come_increment_ref_count(default_value);
        (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 1, (void*)0));
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
        (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(position<0) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(it!=((void*)0)) {
        if(position==i) {
            __result_obj__0 = (char*)come_increment_ref_count(it->item);
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
            return __result_obj__0;
        }
        it=it->next;
        i++;
    }
    memset(&default_value_83,0,sizeof(char*));
    __result_obj__0 = (char*)come_increment_ref_count(default_value_83);
    (default_value_83 = come_decrement_ref_count(default_value_83, (void*)0, (void*)0, 0, 1, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

static char* list$1char$ph_operator_load_element(struct list$1char$ph* self, int position)
{
    char* default_value;
    char* __result_obj__0;
    struct list_item$1char$ph* it;
    int i;
    char* default_value_84;
    if(self==((void*)0)) {
        memset(&default_value,0,sizeof(char*));
        __result_obj__0 = (char*)come_increment_ref_count(default_value);
        (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 1, (void*)0));
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
        (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(position<0) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(it!=((void*)0)) {
        if(position==i) {
            __result_obj__0 = (char*)come_increment_ref_count(it->item);
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
            return __result_obj__0;
        }
        it=it->next;
        i++;
    }
    memset(&default_value_84,0,sizeof(char*));
    __result_obj__0 = (char*)come_increment_ref_count(default_value_84);
    (default_value_84 = come_decrement_ref_count(default_value_84, (void*)0, (void*)0, 0, 1, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

