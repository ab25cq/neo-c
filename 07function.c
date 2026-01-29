/// c_include definition ///
/// typedef definition ///
typedef unsigned long size_t;

typedef char* string;

typedef unsigned long  long   ;

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

typedef char __int_least8_t  ;

typedef unsigned char __uint_least8_t  ;

typedef short int __int_least16_t  ;

typedef unsigned short int __uint_least16_t  ;

typedef int __int_least32_t  ;

typedef unsigned int __uint_least32_t  ;

typedef long  int __int_least64_t  ;

typedef unsigned long  int __uint_least64_t  ;

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

typedef struct __fsid_t __fsid_t  ;

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

typedef long  int __loff_t  ;

typedef char* __caddr_t;

typedef long  int __intptr_t;

typedef unsigned int __socklen_t;

typedef int __sig_atomic_t;

typedef struct anonymous_typeX1 __mbstate_t;

typedef struct _G_fpos_t __fpos_t  ;

typedef struct _G_fpos64_t __fpos64_t  ;

typedef struct _IO_FILE __FILE  ;

typedef struct _IO_FILE FILE  ;

typedef void _IO_lock_t;

typedef long  int (*cookie_read_function_t)(void*,char*,unsigned long);

typedef long  int (*cookie_write_function_t)(void*,const char*,unsigned long);

typedef int (*cookie_seek_function_t)(void*,long  int*,int);

typedef int (*cookie_close_function_t)(void*);

typedef struct _IO_cookie_io_functions_t cookie_io_functions_t  ;

typedef long  int off_t  ;

typedef long  int off64_t  ;

typedef long  int ssize_t  ;

typedef struct _G_fpos_t fpos_t  ;

typedef struct _G_fpos64_t fpos64_t  ;

typedef int wchar_t;

typedef struct anonymous_typeX4 div_t;

typedef struct anonymous_typeX5 ldiv_t;

typedef struct anonymous_typeX6 lldiv_t;

typedef struct __locale_struct* __locale_t  ;

typedef struct __locale_struct* locale_t  ;

typedef unsigned char u_char  ;

typedef unsigned short int u_short  ;

typedef unsigned int u_int  ;

typedef unsigned long  int u_long  ;

typedef long  int quad_t  ;

typedef unsigned long  int u_quad_t  ;

typedef struct __fsid_t fsid_t  ;

typedef long  int loff_t  ;

typedef unsigned long  int ino_t  ;

typedef unsigned long  int ino64_t  ;

typedef unsigned long  int dev_t  ;

typedef unsigned int gid_t  ;

typedef unsigned int mode_t  ;

typedef unsigned long  int nlink_t  ;

typedef unsigned int uid_t  ;

typedef int pid_t  ;

typedef unsigned int id_t  ;

typedef int daddr_t  ;

typedef char* caddr_t  ;

typedef int key_t  ;

typedef long  int clock_t  ;

typedef int clockid_t  ;

typedef long  int time_t  ;

typedef void* timer_t  ;

typedef unsigned int useconds_t  ;

typedef long  int suseconds_t  ;

typedef unsigned long  int ulong;

typedef unsigned short int ushort;

typedef unsigned int uint;

typedef char int8_t  ;

typedef short int int16_t  ;

typedef int int32_t  ;

typedef long  int int64_t  ;

typedef unsigned char u_int8_t  ;

typedef unsigned short int u_int16_t  ;

typedef unsigned int u_int32_t  ;

typedef unsigned long  int u_int64_t  ;

typedef int register_t __attribute__ ((__mode__ (__word__)));

typedef struct anonymous_typeX7 __sigset_t;

typedef struct anonymous_typeX7 sigset_t  ;

typedef long  int __fd_mask;

typedef struct anonymous_typeX8 fd_set;

typedef long  int fd_mask  ;

typedef long  int blksize_t  ;

typedef long  int blkcnt_t  ;

typedef unsigned long  int fsblkcnt_t  ;

typedef unsigned long  int fsfilcnt_t  ;

typedef long  int blkcnt64_t  ;

typedef unsigned long  int fsblkcnt64_t  ;

typedef unsigned long  int fsfilcnt64_t  ;

typedef union anonymous_typeZ9 __atomic_wide_counter;

typedef struct __pthread_internal_list __pthread_list_t  ;

typedef struct __pthread_internal_slist __pthread_slist_t  ;

typedef unsigned int __tss_t;

typedef unsigned long  int __thrd_t;

typedef struct anonymous_typeX11 __once_flag;

typedef unsigned long  int pthread_t;

typedef union anonymous_typeZ12 pthread_mutexattr_t;

typedef union anonymous_typeZ13 pthread_condattr_t;

typedef unsigned int pthread_key_t;

typedef int pthread_once_t;

typedef union pthread_attr_t pthread_attr_t  ;

typedef union anonymous_typeZ14 pthread_mutex_t;

typedef union anonymous_typeZ15 pthread_cond_t;

typedef union anonymous_typeZ16 pthread_rwlock_t;

typedef union anonymous_typeZ17 pthread_rwlockattr_t;

typedef int pthread_spinlock_t;

typedef union anonymous_typeZ18 pthread_barrier_t;

typedef union anonymous_typeZ19 pthread_barrierattr_t;

typedef int (*__compar_fn_t)(const void*,const void*);

typedef int (*comparison_fn_t)(const void*,const void*)  ;

typedef int (*__compar_d_fn_t)(const void*,const void*,void*);

typedef __builtin_va_list va_list;

typedef int error_t;

typedef struct re_program* re_t  ;

typedef struct re_capture re_capture  ;

typedef struct regex_t regex_t;

typedef struct re_program regex_program_t  ;

typedef struct anonymous_typeX24 compiler_state;

typedef struct anonymous_typeX25 match_context;

typedef unsigned int wint_t;

typedef struct anonymous_typeX1 mbstate_t  ;

typedef int* wstring  ;

typedef struct MacroSnapshot MacroSnapshot;

/// previous struct definition ///
struct _IO_FILE;

struct _IO_marker;

struct _IO_codecvt;

struct _IO_wide_data;

struct obstack;

#include <assert.h>
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
    long  int __pos  ;
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
    long  int __pos  ;
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
    struct _IO_marker* _markers  ;
    struct _IO_FILE* _chain  ;
    int _fileno;
    int _flags2:24;
    char _short_backupbuf[1];
    long  int _old_offset  ;
    unsigned short int _cur_column;
    char _vtable_offset;
    char _shortbuf[1];
    void* _lock  ;
    long  int _offset  ;
    struct _IO_codecvt* _codecvt  ;
    struct _IO_wide_data* _wide_data  ;
    struct _IO_FILE* _freeres_list  ;
    void* _freeres_buf;
    struct _IO_FILE** _prevchain  ;
    int _mode;
    int _unused3;
    unsigned long  int _total_written  ;
    char _unused2[12*sizeof(int)-5*sizeof(void*)];
};

struct _IO_cookie_io_functions_t
{
    long  int (*(*read))(void*,char*,unsigned long)  ;
    long  int (*(*write))(void*,const char*,unsigned long)  ;
    int (*(*seek))(void*,long  int*,int)  ;
    int (*(*close))(void*)  ;
};

struct anonymous_typeX4
{
    int quot;
    int rem;
};

struct anonymous_typeX5
{
    long  int quot;
    long  int rem;
};

struct anonymous_typeX6
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

struct anonymous_typeX7
{
    unsigned long  int __val[(1024/(8*sizeof(unsigned long  int)))];
};

struct timeval
{
    long  int tv_sec  ;
    long  int tv_usec  ;
};

struct timespec
{
    long  int tv_sec  ;
    long  int tv_nsec  ;
};

struct anonymous_typeX8
{
    long  int fds_bits[1024/(8*(int)sizeof(long  int))]  ;
};

struct anonymous_typeX10
{
    unsigned int __low;
    unsigned int __high;
};

union anonymous_typeZ9
{
unsigned long long int __value64;
    struct {
        unsigned int __low;
        unsigned int __high;
    } __value32;
};

struct __pthread_internal_list
{
    struct __pthread_internal_list* __prev  ;
    struct __pthread_internal_list* __next  ;
};

struct __pthread_internal_slist
{
    struct __pthread_internal_slist* __next  ;
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
    struct __pthread_internal_list __list  ;
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

struct anonymous_typeX11
{
    int __data;
};

union anonymous_typeZ12
{
char __size[4];
int __align;
};

union anonymous_typeZ13
{
char __size[4];
int __align;
};

union pthread_attr_t
{
char __size[56];
long  int __align;
};

union anonymous_typeZ14
{
struct __pthread_mutex_s __data  ;
char __size[40];
long  int __align;
};

union anonymous_typeZ15
{
struct __pthread_cond_s __data  ;
char __size[48];
long long int __align;
};

union anonymous_typeZ16
{
struct __pthread_rwlock_arch_t __data  ;
char __size[56];
long  int __align;
};

union anonymous_typeZ17
{
char __size[8];
long  int __align;
};

union anonymous_typeZ18
{
char __size[32];
long  int __align;
};

union anonymous_typeZ19
{
char __size[4];
int __align;
};

struct random_data
{
    int* fptr  ;
    int* rptr  ;
    int* state  ;
    int rand_type;
    int rand_deg;
    int rand_sep;
    int* end_ptr  ;
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

struct buffer
{
    char* buf;
    int len;
    int size;
};

struct neo_frame
{
    struct neo_frame* prev  ;
    char* fun_name;
};

struct sMemHeader
{
    long size;
    int allocated;
    struct sMemHeader* next  ;
    struct sMemHeader* prev  ;
    struct sMemHeader* free_next  ;
    char* fun_name[8];
    const char* class_name;
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
    char* item  ;
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

struct anonymous_typeX21
{
    struct regex_t* first  ;
    struct regex_t* last  ;
    int id;
};

union anonymous_typeZ20
{
unsigned char ch;
unsigned char* ccl;
    struct {
        struct regex_t* first  ;
        struct regex_t* last  ;
        int id;
    } group;
};

struct anonymous_typeX23
{
    struct regex_t* first  ;
    struct regex_t* last  ;
    int id;
};

union anonymous_typeZ22
{
unsigned char ch;
unsigned char* ccl;
    struct {
        struct regex_t* first  ;
        struct regex_t* last  ;
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
            struct regex_t* first  ;
            struct regex_t* last  ;
            int id;
        } group;
    } u;
    struct regex_t* next  ;
};

struct re_program
{
    struct regex_t* start  ;
    int group_count;
};

struct anonymous_typeX24
{
    struct regex_t* pool  ;
    int pool_capacity;
    int pool_size;
    unsigned char* ccl_buf;
    int ccl_capacity;
    int ccl_idx;
    int group_count;
};

struct anonymous_typeX25
{
    const char* base;
    struct re_capture* captures  ;
    int capture_capacity;
    int total_groups;
    _Bool ignore_case;
};

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
    char* v1  ;
    struct sType* v2  ;
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
    _Bool mAnonymous;
    char* mName  ;
    int mGenericsNum;
    int mMethodGenericsNum;
    struct list$1tuple2$2char$phsType$ph$ph* mFields;
    char* mParentClassName  ;
    char* mAttribute  ;
};

struct list_item$1sType$ph
{
    struct sType* item  ;
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
    struct sClass* mClass  ;
    struct sType* mOriginalLoadVarType  ;
    struct sType* mChannelType  ;
    struct list$1sType$ph* mGenericsTypes;
    struct sType* mNoSolvedGenericsType  ;
    struct sNode* mSizeNum;
    struct sNode* mAlignas;
    _Bool mAlignasDouble;
    char* mTupleName  ;
    char* mAttribute  ;
    char* mVarAttribute  ;
    _Bool mAllocaValue;
    _Bool mUnsigned;
    _Bool mShort;
    _Bool mLong;
    _Bool mLongLong;
    _Bool mConstant;
    _Bool mAtomic;
    _Bool mThreadLocal;
    _Bool mThread;
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
    char* mAnonymousName  ;
    _Bool mInnerStruct;
    char* mInnerStructName  ;
    _Bool mAnonymousVarName;
    _Bool mInline;
    _Bool mNullValue;
    _Bool mGuardValue;
    char* mAsmName  ;
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
    struct sType* mTypedefOriginalType  ;
    char* mOriginalTypeName  ;
    int mOriginalTypePointerNum;
    int mOriginalTypePointerHeap;
    _Bool mArrayPointerType;
    struct list$1sType$ph* mParamTypes;
    struct list$1char$ph* mParamNames;
    struct sType* mResultType  ;
    _Bool mVarArgs;
    struct sNode* mTypeOfNode;
};

struct sVar
{
    char* mName  ;
    char* mCValueName  ;
    struct sType* mType  ;
    _Bool mGlobal;
    _Bool mAllocaValue;
    _Bool mNoFree;
    char* mFunName  ;
};

struct list_item$1sVar$ph
{
    struct sVar* item  ;
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
    char* mName  ;
    struct sType* mResultType  ;
    struct list$1sType$ph* mParamTypes;
    struct list$1char$ph* mParamNames;
    struct list$1char$ph* mParamDefaultParametors;
    struct sType* mLambdaType  ;
    struct list$1sVar$ph* mAllVar;
    struct sBlock* mBlock  ;
    char* mTextBlock  ;
    char* mTextBlockSName  ;
    int mTextBlockSline;
    struct buffer* mSource  ;
    struct buffer* mSourceHead  ;
    struct buffer* mSourceHead2  ;
    struct buffer* mSourceDefer  ;
    _Bool mStatic;
    _Bool mInline;
    _Bool mUniq;
    _Bool mGenerate;
    _Bool mExternal;
    _Bool mVarArgs;
    _Bool mNoResultType;
    _Bool mConstFun;
    char* mAttribute  ;
    char* mFunAttribute  ;
    _Bool mGenericsFun;
    _Bool mDefineReturnVar;
};

struct sGenericsFun
{
    struct sType* mImplType  ;
    struct list$1char$ph* mGenericsTypeNames;
    struct list$1char$ph* mMethodGenericsTypeNames;
    char* mName  ;
    struct sType* mResultType  ;
    struct list$1sType$ph* mParamTypes;
    struct list$1char$ph* mParamNames;
    struct list$1char$ph* mParamDefaultParametors;
    char* mBlock  ;
    int mSLine;
    _Bool mVarArgs;
    _Bool mGenerate;
    char* mGenericsSName  ;
    int mGenericsSLine;
    _Bool mConstFun;
};

struct CVALUE
{
    char* c_value  ;
    struct sType* type  ;
    struct sVar* var  ;
    struct sRightValueObject* right_value_objects  ;
    char* c_value_without_right_value_objects  ;
    char* c_value_without_cast_object_value  ;
};

struct map$2char$phchar$ph
{
    char** keys  ;
    _Bool* item_existance;
    char** items  ;
    int size;
    int len;
    struct list$1char$ph* key_list;
    int it;
};

struct sModule
{
    struct buffer* mSourceHead  ;
    struct buffer* mSource  ;
    char* mLastCode  ;
    char* mLastCode2  ;
    struct map$2char$phchar$ph* mHeader;
};

struct map$2char$phsVar$ph
{
    char** keys  ;
    _Bool* item_existance;
    struct sVar** items  ;
    int size;
    int len;
    struct list$1char$ph* key_list;
    int it;
};

struct sVarTable
{
    struct map$2char$phsVar$ph* mVars;
    _Bool mGlobal;
    struct sVarTable* mParent  ;
};

struct sBlock
{
    struct list$1sNode$ph* mNodes;
    struct sVarTable* mVarTable  ;
    _Bool mOmitSemicolon;
};

struct sRightValueObject
{
    struct sType* mType  ;
    char* mVarName  ;
    char* mFunName  ;
    _Bool mFreed;
    int mID;
    int mBlockLevel;
    _Bool mStored;
    _Bool mDecrementRefCount;
    struct sType* mObjType  ;
    char* mObjValue  ;
    struct sVar* mObjVar  ;
    _Bool mNoFree;
};

struct sClassModule
{
    char* mName  ;
    char* mText  ;
    struct list$1char$ph* mParams;
    char* mSName  ;
    int mSLine;
};

struct map$2char$phsFun$ph
{
    char** keys  ;
    _Bool* item_existance;
    struct sFun** items  ;
    int size;
    int len;
    struct list$1char$ph* key_list;
    int it;
};

struct map$2char$phsGenericsFun$ph
{
    char** keys  ;
    _Bool* item_existance;
    struct sGenericsFun** items  ;
    int size;
    int len;
    struct list$1char$ph* key_list;
    int it;
};

struct map$2char$phsClass$ph
{
    char** keys  ;
    _Bool* item_existance;
    struct sClass** items  ;
    int size;
    int len;
    struct list$1char$ph* key_list;
    int it;
};

struct map$2char$phsClassModule$ph
{
    char** keys  ;
    _Bool* item_existance;
    struct sClassModule** items  ;
    int size;
    int len;
    struct list$1char$ph* key_list;
    int it;
};

struct map$2char$phsType$ph
{
    char** keys  ;
    _Bool* item_existance;
    struct sType** items  ;
    int size;
    int len;
    struct list$1char$ph* key_list;
    int it;
};

struct map$2char$phbuffer$ph
{
    char** keys  ;
    _Bool* item_existance;
    struct buffer** items  ;
    int size;
    int len;
    struct list$1char$ph* key_list;
    int it;
};

struct list_item$1sRightValueObject$ph
{
    struct sRightValueObject* item  ;
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
    struct CVALUE* item  ;
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
    struct buffer* source  ;
    char* original_source  ;
    char* end;
    char* sname  ;
    char* sname_at_head  ;
    char* base_sname  ;
    int sline;
    int err_num;
    int err_num2;
    char* clang_option  ;
    char* cpp_option  ;
    char* linker_option  ;
    char* linker_option2  ;
    _Bool no_output_err;
    _Bool no_output_come_code;
    _Bool undefined_array_num_var;
    struct sFun* come_fun  ;
    struct sFun* caller_fun  ;
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
    struct map$2char$phbuffer$ph* c_include_definition;
    struct map$2char$phbuffer$ph* var_definition;
    struct map$2char$phbuffer$ph* previous_struct_definition;
    struct map$2char$phbuffer$ph* typedef_definition;
    struct map$2char$phsType$ph* named_child_struct;
    struct map$2char$phchar$ph* reflection_vars;
    struct sModule* module  ;
    struct sType* type  ;
    struct list$1sRightValueObject$ph* right_value_objects;
    struct sType* generics_type  ;
    struct list$1sType$ph* method_generics_types;
    struct list$1CVALUE$ph* stack;
    struct sType* come_function_result_type  ;
    struct sType* come_method_block_function_result_type  ;
    struct sVarTable* lv_table  ;
    struct sVarTable* gv_table  ;
    _Bool no_comma;
    _Bool no_assign;
    _Bool no_label;
    _Bool last_statment_is_return;
    struct list$1char$ph* generics_type_names;
    struct list$1char$ph* method_generics_type_names;
    struct sType* impl_type  ;
    struct sType* class_type  ;
    int current_stack_num;
    int num_method_block;
    struct sClass* current_stack_frame_struct  ;
    _Bool define_struct;
    _Bool in_typedef;
    char* output_file_name  ;
    struct sVarTable* current_loop_vtable  ;
    _Bool verbose;
    int num_current_stack;
    int num_source_files;
    int max_source_files;
    _Bool writing_source_file_position;
    struct sType* function_result_type  ;
    _Bool in_class;
    struct map$2char$phchar$ph* module_params;
    _Bool constructor_;
    struct sClass* defining_class  ;
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
    struct sFun* calling_fun  ;
    struct map$2char$phchar$ph* uniq_definition;
    _Bool in_top_level;
    _Bool remove_comment;
    int sline_real;
    int sline_block;
    _Bool m5stack_cpp;
    _Bool pico_cpp;
    _Bool baremetal_cpp;
    _Bool gcc_compiler;
    _Bool in_method_block;
    _Bool in_offsetof;
    int right_value_num;
    int right_value_max;
    _Bool in_conditional;
    int num_conditional;
    int max_conditional;
    char* pragma  ;
    _Bool in_refference;
    struct buffer* paren_block_buffer  ;
    _Bool in_typeof;
    _Bool in_store_array;
    int parse_struct_recursive_count;
    _Bool exp_value;
    struct buffer* if_expression_buffer  ;
    char* if_result_value_name  ;
    _Bool if_result_value_name_defined;
    struct sType* if_result_type  ;
};

struct sNodeBase
{
    int sline;
    char* sname  ;
    int sline_real;
};

struct sCurrentNode
{
    int sline;
    char* sname  ;
    int sline_real;
};

struct tuple2$2sType$phchar$ph
{
    struct sType* v1  ;
    char* v2  ;
};

struct tuple2$2char$phsGenericsFun$p
{
    char* v1  ;
    struct sGenericsFun* v2  ;
};

struct tuple3$3sType$phchar$ph_Bool$
{
    struct sType* v1  ;
    char* v2  ;
    _Bool v3;
};

struct tuple2$2char$phchar$ph
{
    char* v1  ;
    char* v2  ;
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
    struct sFun* v1  ;
    char* v2  ;
};

struct tuple2$2char$ph_Bool$
{
    char* v1  ;
    _Bool v2;
};

struct tuple3$3sType$phchar$phsNode$ph
{
    struct sType* v1  ;
    char* v2  ;
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
    char* v1  ;
    struct sFun* v2  ;
    struct sGenericsFun* v3  ;
};

struct tuple2$2char$phsNode$ph
{
    char* v1  ;
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
    char* sname  ;
    int sline_real;
};

struct sSemicolonNode
{
    int sline;
    char* sname  ;
    int sline_real;
};

struct sLambdaNode
{
    int sline;
    char* sname  ;
    int sline_real;
    struct sFun* mFun  ;
};

struct sRawCodeNode
{
    int sline;
    char* sname  ;
    int sline_real;
    char* mCode  ;
};

struct sFunNode
{
    int sline;
    char* sname  ;
    int sline_real;
    struct sFun* mFun  ;
};

/// variable definition ///
extern struct _IO_FILE* stdin  ;
extern struct _IO_FILE* stdout  ;
extern struct _IO_FILE* stderr  ;
extern char* program_invocation_name;
extern char* program_invocation_short_name;
extern struct neo_frame* neo_current_frame  ;

extern struct sMemHeader* gAllocMem  ;

extern int gComeDebugLib;

extern int gNumAlloc;

extern int gNumFree;

extern _Bool gComeDebug;
extern _Bool gComeUniq;
extern _Bool gComeC;
extern _Bool gComePthread;
extern _Bool gComeNet;
extern _Bool gComeMalloc;
extern _Bool gComeBareMetal;
// source head

// header function
int remove(const char* __filename);
int rename(const char* __old, const char* __new);
int renameat(int __oldfd, const char* __old, int __newfd, const char* __new);
int renameat2(int __oldfd, const char* __old, int __newfd, const char* __new, unsigned int __flags);
int fclose(struct _IO_FILE* __stream  );
struct _IO_FILE* tmpfile();
struct _IO_FILE* tmpfile64();
char* tmpnam(char [20]);
char* tmpnam_r(char __s[20]);
char* tempnam(const char* __dir, const char* __pfx);
int fflush(struct _IO_FILE* __stream  );
int fflush_unlocked(struct _IO_FILE* __stream  );
int fcloseall();
struct _IO_FILE* fopen(const char* __filename, const char* __modes);
struct _IO_FILE* freopen(const char* __filename, const char* __modes, struct _IO_FILE* __stream  );
struct _IO_FILE* fopen64(const char* __filename, const char* __modes);
struct _IO_FILE* freopen64(const char* __filename, const char* __modes, struct _IO_FILE* __stream  );
struct _IO_FILE* fdopen(int __fd, const char* __modes);
struct _IO_FILE* fopencookie(void* __magic_cookie, const char* __modes, struct _IO_cookie_io_functions_t __io_funcs  );
struct _IO_FILE* fmemopen(void* __s, unsigned long __len  , const char* __modes);
struct _IO_FILE* open_memstream(char** __bufloc, unsigned long* __sizeloc  );
void setbuf(struct _IO_FILE* __stream  , char* __buf);
int setvbuf(struct _IO_FILE* __stream  , char* __buf, int __modes, unsigned long __n  );
void setbuffer(struct _IO_FILE* __stream  , char* __buf, unsigned long __size  );
void setlinebuf(struct _IO_FILE* __stream  );
int fprintf(struct _IO_FILE* __stream  , const char* __format, ...);
int printf(const char* __format, ...);
int sprintf(char* __s, const char* __format, ...);
int vfprintf(struct _IO_FILE* __s  , const char* __format, __builtin_va_list __arg  );
int vprintf(const char* __format, __builtin_va_list __arg  );
int vsprintf(char* __s, const char* __format, __builtin_va_list __arg  );
int snprintf(char* __s, unsigned long __maxlen  , const char* __format, ...);
int vsnprintf(char* __s, unsigned long __maxlen  , const char* __format, __builtin_va_list __arg  );
int vasprintf(char** __ptr, const char* __f, __builtin_va_list __arg  );
int __asprintf(char** __ptr, const char* __fmt, ...);
int asprintf(char** __ptr, const char* __fmt, ...);
int vdprintf(int __fd, const char* __fmt, __builtin_va_list __arg  );
int dprintf(int __fd, const char* __fmt, ...);
int fscanf(struct _IO_FILE* __stream  , const char* __format, ...);
int scanf(const char* __format, ...);
int sscanf(const char* __s, const char* __format, ...);
int __isoc23_fscanf(struct _IO_FILE* __stream  , const char* __format, ...);
int __isoc23_scanf(const char* __format, ...);
int __isoc23_sscanf(const char* __s, const char* __format, ...);
int vfscanf(struct _IO_FILE* __s  , const char* __format, __builtin_va_list __arg  );
int vscanf(const char* __format, __builtin_va_list __arg  );
int vsscanf(const char* __s, const char* __format, __builtin_va_list __arg  );
int __isoc23_vfscanf(struct _IO_FILE* __s  , const char* __format, __builtin_va_list __arg  );
int __isoc23_vscanf(const char* __format, __builtin_va_list __arg  );
int __isoc23_vsscanf(const char* __s, const char* __format, __builtin_va_list __arg  );
int fgetc(struct _IO_FILE* __stream  );
int getc(struct _IO_FILE* __stream  );
int getchar();
int getc_unlocked(struct _IO_FILE* __stream  );
int getchar_unlocked();
int fgetc_unlocked(struct _IO_FILE* __stream  );
int fputc(int __c, struct _IO_FILE* __stream  );
int putc(int __c, struct _IO_FILE* __stream  );
int putchar(int __c);
int fputc_unlocked(int __c, struct _IO_FILE* __stream  );
int putc_unlocked(int __c, struct _IO_FILE* __stream  );
int putchar_unlocked(int __c);
int getw(struct _IO_FILE* __stream  );
int putw(int __w, struct _IO_FILE* __stream  );
char* fgets(char* __s, int __n, struct _IO_FILE* __stream  );
char* fgets_unlocked(char* __s, int __n, struct _IO_FILE* __stream  );
long  int __getdelim(char** __lineptr, unsigned long* __n  , int __delimiter, struct _IO_FILE* __stream  );
long  int getdelim(char** __lineptr, unsigned long* __n  , int __delimiter, struct _IO_FILE* __stream  );
long  int getline(char** __lineptr, unsigned long* __n  , struct _IO_FILE* __stream  );
int fputs(const char* __s, struct _IO_FILE* __stream  );
int puts(const char* __s);
int ungetc(int __c, struct _IO_FILE* __stream  );
unsigned long fread(void* __ptr, unsigned long __size  , unsigned long __n  , struct _IO_FILE* __stream  );
unsigned long fwrite(const void* __ptr, unsigned long __size  , unsigned long __n  , struct _IO_FILE* __s  );
int fputs_unlocked(const char* __s, struct _IO_FILE* __stream  );
unsigned long fread_unlocked(void* __ptr, unsigned long __size  , unsigned long __n  , struct _IO_FILE* __stream  );
unsigned long fwrite_unlocked(const void* __ptr, unsigned long __size  , unsigned long __n  , struct _IO_FILE* __stream  );
int fseek(struct _IO_FILE* __stream  , long  int __off, int __whence);
long  int ftell(struct _IO_FILE* __stream  );
void rewind(struct _IO_FILE* __stream  );
int fseeko(struct _IO_FILE* __stream  , long  int __off  , int __whence);
long  int ftello(struct _IO_FILE* __stream  );
int fgetpos(struct _IO_FILE* __stream  , struct _G_fpos_t* __pos  );
int fsetpos(struct _IO_FILE* __stream  , const struct _G_fpos_t* __pos  );
int fseeko64(struct _IO_FILE* __stream  , long  int __off  , int __whence);
long  int ftello64(struct _IO_FILE* __stream  );
int fgetpos64(struct _IO_FILE* __stream  , struct _G_fpos64_t* __pos  );
int fsetpos64(struct _IO_FILE* __stream  , const struct _G_fpos64_t* __pos  );
void clearerr(struct _IO_FILE* __stream  );
int feof(struct _IO_FILE* __stream  );
int ferror(struct _IO_FILE* __stream  );
void clearerr_unlocked(struct _IO_FILE* __stream  );
int feof_unlocked(struct _IO_FILE* __stream  );
int ferror_unlocked(struct _IO_FILE* __stream  );
void perror(const char* __s);
int fileno(struct _IO_FILE* __stream  );
int fileno_unlocked(struct _IO_FILE* __stream  );
int pclose(struct _IO_FILE* __stream  );
struct _IO_FILE* popen(const char* __command, const char* __modes);
char* ctermid(char* __s);
char* cuserid(char* __s);
int obstack_printf(struct obstack* __obstack  , const char* __format, ...);
int obstack_vprintf(struct obstack* __obstack  , const char* __format, __builtin_va_list __args  );
void flockfile(struct _IO_FILE* __stream  );
int ftrylockfile(struct _IO_FILE* __stream  );
void funlockfile(struct _IO_FILE* __stream  );
int __uflow(struct _IO_FILE*   );
int __overflow(struct _IO_FILE*   , int );
unsigned long __ctype_get_mb_cur_max();
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
int strfromd(char* __dest, unsigned long __size  , const char* __format, double __f);
int strfromf(char* __dest, unsigned long __size  , const char* __format, float __f);
int strfroml(char* __dest, unsigned long __size  , const char* __format, long  double __f);
int strfromf32(char* __dest, unsigned long __size  , const char* __format, float __f  );
int strfromf64(char* __dest, unsigned long __size  , const char* __format, double __f  );
int strfromf32x(char* __dest, unsigned long __size  , const char* __format, double __f  );
int strfromf64x(char* __dest, unsigned long __size  , const char* __format, long  double __f  );
long  int strtol_l(const char* __nptr, char** __endptr, int __base, struct __locale_struct* __loc  );
unsigned long  int strtoul_l(const char* __nptr, char** __endptr, int __base, struct __locale_struct* __loc  );
long long int strtoll_l(const char* __nptr, char** __endptr, int __base, struct __locale_struct* __loc  );
unsigned long long int strtoull_l(const char* __nptr, char** __endptr, int __base, struct __locale_struct* __loc  );
long  int __isoc23_strtol_l(const char* __nptr, char** __endptr, int __base, struct __locale_struct* __loc  );
unsigned long  int __isoc23_strtoul_l(const char* __nptr, char** __endptr, int __base, struct __locale_struct* __loc  );
long long int __isoc23_strtoll_l(const char* __nptr, char** __endptr, int __base, struct __locale_struct* __loc  );
unsigned long long int __isoc23_strtoull_l(const char* __nptr, char** __endptr, int __base, struct __locale_struct* __loc  );
double strtod_l(const char* __nptr, char** __endptr, struct __locale_struct* __loc  );
float strtof_l(const char* __nptr, char** __endptr, struct __locale_struct* __loc  );
long  double strtold_l(const char* __nptr, char** __endptr, struct __locale_struct* __loc  );
float strtof32_l(const char* __nptr, char** __endptr, struct __locale_struct* __loc  );
double strtof64_l(const char* __nptr, char** __endptr, struct __locale_struct* __loc  );
double strtof32x_l(const char* __nptr, char** __endptr, struct __locale_struct* __loc  );
long  double strtof64x_l(const char* __nptr, char** __endptr, struct __locale_struct* __loc  );
char* l64a(long  int __n);
long  int a64l(const char* __s);
int select(int __nfds, struct anonymous_typeX8* __readfds  , struct anonymous_typeX8* __writefds  , struct anonymous_typeX8* __exceptfds  , struct timeval* __timeout  );
int pselect(int __nfds, struct anonymous_typeX8* __readfds  , struct anonymous_typeX8* __writefds  , struct anonymous_typeX8* __exceptfds  , const struct timespec* __timeout  , const struct anonymous_typeX7* __sigmask  );
long  int random();
void srandom(unsigned int __seed);
char* initstate(unsigned int __seed, char* __statebuf, unsigned long __statelen  );
char* setstate(char* __statebuf);
int random_r(struct random_data* __buf  , int* __result  );
int srandom_r(unsigned int __seed, struct random_data* __buf  );
int initstate_r(unsigned int __seed, char* __statebuf, unsigned long __statelen  , struct random_data* __buf  );
int setstate_r(char* __statebuf, struct random_data* __buf  );
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
int drand48_r(struct drand48_data* __buffer  , double* __result);
int erand48_r(unsigned short int __xsubi[3], struct drand48_data* __buffer  , double* __result);
int lrand48_r(struct drand48_data* __buffer  , long  int* __result);
int nrand48_r(unsigned short int __xsubi[3], struct drand48_data* __buffer  , long  int* __result);
int mrand48_r(struct drand48_data* __buffer  , long  int* __result);
int jrand48_r(unsigned short int __xsubi[3], struct drand48_data* __buffer  , long  int* __result);
int srand48_r(long  int __seedval, struct drand48_data* __buffer  );
int seed48_r(unsigned short int __seed16v[3], struct drand48_data* __buffer  );
int lcong48_r(unsigned short int __param[7], struct drand48_data* __buffer  );
unsigned int arc4random();
void arc4random_buf(void* __buf, unsigned long __size  );
unsigned int arc4random_uniform(unsigned int __upper_bound  );
void* malloc(unsigned long __size  );
void* calloc(unsigned long __nmemb  , unsigned long __size  );
void* realloc(void* __ptr, unsigned long __size  );
void free(void* __ptr);
void* reallocarray(void* __ptr, unsigned long __nmemb  , unsigned long __size  );
void* alloca(unsigned long __size  );
void* valloc(unsigned long __size  );
int posix_memalign(void** __memptr, unsigned long __alignment  , unsigned long __size  );
void* aligned_alloc(unsigned long __alignment  , unsigned long __size  );
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
void* bsearch(const void* __key, const void* __base, unsigned long __nmemb  , unsigned long __size  , int (*__compar)(const void*,const void*)  );
void qsort(void* __base, unsigned long __nmemb  , unsigned long __size  , int (*__compar)(const void*,const void*)  );
void qsort_r(void* __base, unsigned long __nmemb  , unsigned long __size  , int (*__compar)(const void*,const void*,void*)  , void* __arg);
int abs(int __x);
long  int labs(long  int __x);
long long int llabs(long long int __x);
unsigned int uabs(int __x);
unsigned long  int ulabs(long  int __x);
unsigned long long int ullabs(long long int __x);
struct anonymous_typeX4 div(int __numer, int __denom);
struct anonymous_typeX5 ldiv(long  int __numer, long  int __denom);
struct anonymous_typeX6 lldiv(long long int __numer, long long int __denom);
char* ecvt(double __value, int __ndigit, int* __decpt, int* __sign);
char* fcvt(double __value, int __ndigit, int* __decpt, int* __sign);
char* gcvt(double __value, int __ndigit, char* __buf);
char* qecvt(long  double __value, int __ndigit, int* __decpt, int* __sign);
char* qfcvt(long  double __value, int __ndigit, int* __decpt, int* __sign);
char* qgcvt(long  double __value, int __ndigit, char* __buf);
int ecvt_r(double __value, int __ndigit, int* __decpt, int* __sign, char* __buf, unsigned long __len  );
int fcvt_r(double __value, int __ndigit, int* __decpt, int* __sign, char* __buf, unsigned long __len  );
int qecvt_r(long  double __value, int __ndigit, int* __decpt, int* __sign, char* __buf, unsigned long __len  );
int qfcvt_r(long  double __value, int __ndigit, int* __decpt, int* __sign, char* __buf, unsigned long __len  );
int mblen(const char* __s, unsigned long __n  );
int mbtowc(int* __pwc  , const char* __s, unsigned long __n  );
int wctomb(char* __s, int __wchar  );
unsigned long mbstowcs(int* __pwcs  , const char* __s, unsigned long __n  );
unsigned long wcstombs(char* __s, const int* __pwcs  , unsigned long __n  );
int rpmatch(const char* __response);
int getsubopt(char** __optionp, char** __tokens, char** __valuep);
int posix_openpt(int __oflag);
int grantpt(int __fd);
int unlockpt(int __fd);
char* ptsname(int __fd);
int ptsname_r(int __fd, char* __buf, unsigned long __buflen  );
int getpt();
int getloadavg(double __loadavg[], int __nelem);
void* memcpy(void* __dest, const void* __src, unsigned long __n  );
void* memmove(void* __dest, const void* __src, unsigned long __n  );
void* memccpy(void* __dest, const void* __src, int __c, unsigned long __n  );
void* memset(void* __s, int __c, unsigned long __n  );
int memcmp(const void* __s1, const void* __s2, unsigned long __n  );
int __memcmpeq(const void* __s1, const void* __s2, unsigned long __n  );
void* memchr(const void* __s, int __c, unsigned long __n  );
void* rawmemchr(const void* __s, int __c);
void* memrchr(const void* __s, int __c, unsigned long __n  );
char* strcpy(char* __dest, const char* __src);
char* strncpy(char* __dest, const char* __src, unsigned long __n  );
char* strcat(char* __dest, const char* __src);
char* strncat(char* __dest, const char* __src, unsigned long __n  );
int strcmp(const char* __s1, const char* __s2);
int strncmp(const char* __s1, const char* __s2, unsigned long __n  );
int strcoll(const char* __s1, const char* __s2);
unsigned long strxfrm(char* __dest, const char* __src, unsigned long __n  );
int strcoll_l(const char* __s1, const char* __s2, struct __locale_struct* __l  );
unsigned long strxfrm_l(char* __dest, const char* __src, unsigned long __n  , struct __locale_struct* __l  );
char* strdup(const char* __s);
char* strndup(const char* __string, unsigned long __n  );
char* strchr(const char* __s, int __c);
char* strrchr(const char* __s, int __c);
char* strchrnul(const char* __s, int __c);
unsigned long strcspn(const char* __s, const char* __reject);
unsigned long strspn(const char* __s, const char* __accept);
char* strpbrk(const char* __s, const char* __accept);
char* strstr(const char* __haystack, const char* __needle);
char* strtok(char* __s, const char* __delim);
char* __strtok_r(char* __s, const char* __delim, char** __save_ptr);
char* strtok_r(char* __s, const char* __delim, char** __save_ptr);
char* strcasestr(const char* __haystack, const char* __needle);
void* memmem(const void* __haystack, unsigned long __haystacklen  , const void* __needle, unsigned long __needlelen  );
void* __mempcpy(void* __dest, const void* __src, unsigned long __n  );
void* mempcpy(void* __dest, const void* __src, unsigned long __n  );
unsigned long strlen(const char* __s);
unsigned long strnlen(const char* __string, unsigned long __maxlen  );
char* strerror(int __errnum);
char* strerror_r(int __errnum, char* __buf, unsigned long __buflen  );
const char* strerrordesc_np(int __err);
const char* strerrorname_np(int __err);
char* strerror_l(int __errnum, struct __locale_struct* __l  );
int bcmp(const void* __s1, const void* __s2, unsigned long __n  );
void bcopy(const void* __src, void* __dest, unsigned long __n  );
void bzero(void* __s, unsigned long __n  );
char* index(const char* __s, int __c);
char* rindex(const char* __s, int __c);
int ffs(int __i);
int ffsl(long  int __l);
int ffsll(long long int __ll);
int strcasecmp(const char* __s1, const char* __s2);
int strncasecmp(const char* __s1, const char* __s2, unsigned long __n  );
int strcasecmp_l(const char* __s1, const char* __s2, struct __locale_struct* __loc  );
int strncasecmp_l(const char* __s1, const char* __s2, unsigned long __n  , struct __locale_struct* __loc  );
void explicit_bzero(void* __s, unsigned long __n  );
char* strsep(char** __stringp, const char* __delim);
char* strsignal(int __sig);
const char* sigabbrev_np(int __sig);
const char* sigdescr_np(int __sig);
char* __stpcpy(char* __dest, const char* __src);
char* stpcpy(char* __dest, const char* __src);
char* __stpncpy(char* __dest, const char* __src, unsigned long __n  );
char* stpncpy(char* __dest, const char* __src, unsigned long __n  );
unsigned long strlcpy(char* __dest, const char* __src, unsigned long __n  );
unsigned long strlcat(char* __dest, const char* __src, unsigned long __n  );
int strverscmp(const char* __s1, const char* __s2);
char* strfry(char* __string);
void* memfrob(void* __s, unsigned long __n  );
char* basename(const char* __filename);
long  int __sysconf(int __name);
char* setlocale(int __category, const char* __locale);
struct lconv* localeconv();
struct __locale_struct* newlocale(int __category_mask, const char* __locale, struct __locale_struct* __base  );
struct __locale_struct* duplocale(struct __locale_struct* __dataset  );
void freelocale(struct __locale_struct* __dataset  );
struct __locale_struct* uselocale(struct __locale_struct* __dataset  );
int* __errno_location();
void stackframe();
_Bool die(const char* msg);
void come_heap_init(int come_debug);
void come_heap_final();
void* alloc_from_pages(unsigned long size  );
void come_free_mem_of_heap_pool(void* mem);
void* come_alloc_mem_from_heap_pool(unsigned long size  , const char* sname, int sline, const char* class_name);
char* come_dynamic_typeof(void* mem);
void* come_calloc(unsigned long count  , unsigned long size  , const char* sname, int sline, const char* class_name);
void come_free(void* mem);
void* come_memdup(void* block, const char* sname, int sline, const char* class_name);
void* come_increment_ref_count(void* mem);
void* come_print_ref_count(void* mem);
int come_get_ref_count(void* mem);
void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, void* result_obj);
void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, void* result_obj);
void xassert(const char* msg, _Bool test);
char* __builtin_string(const char* str);
struct buffer* buffer_initialize(struct buffer* self  );
struct buffer* buffer_initialize_with_value(struct buffer* self  , const char* mem, unsigned long size  );
void buffer_finalize(struct buffer* self  );
struct buffer* buffer_clone(struct buffer* self  );
_Bool buffer_equals(struct buffer* left  , struct buffer* right  );
int buffer_length(struct buffer* self  );
void buffer_reset(struct buffer* self  );
void buffer_trim(struct buffer* self  , int len);
struct buffer* buffer_append(struct buffer* self  , const char* mem, unsigned long size  );
struct buffer* buffer_append_char(struct buffer* self  , char c);
struct buffer* buffer_append_str(struct buffer* self  , const char* mem);
struct buffer* buffer_append_format(struct buffer* self  , const char* msg, ...);
struct buffer* buffer_append_nullterminated_str(struct buffer* self  , const char* mem);
struct buffer* buffer_append_int(struct buffer* self  , int value);
struct buffer* buffer_append_long(struct buffer* self  , long value);
struct buffer* buffer_append_short(struct buffer* self  , short value);
struct buffer* buffer_alignment(struct buffer* self  );
int buffer_compare(struct buffer* left  , struct buffer* right  );
struct buffer* charp_to_buffer(const char* self);
char* buffer_to_string(struct buffer* self  );
unsigned char* buffer_head_pointer(struct buffer* self  );
struct buffer* chara_to_buffer(char* self, unsigned long len  );
struct buffer* charpa_to_buffer(char** self, unsigned long len  );
struct buffer* shorta_to_buffer(short* self, unsigned long len  );
struct buffer* inta_to_buffer(int* self, unsigned long len  );
struct buffer* longa_to_buffer(long* self, unsigned long len  );
struct buffer* floata_to_buffer(float* self, unsigned long len  );
struct buffer* doublea_to_buffer(double* self, unsigned long len  );
char* buffer_printable(struct buffer* self  );
struct list$1char$* chara_to_list(char* self, unsigned long len  );
struct list$1char$p* charpa_to_list(char** self, unsigned long len  );
struct list$1short$* shorta_to_list(short* self, unsigned long len  );
struct list$1int$* inta_to_list(int* self, unsigned long len  );
struct list$1long$* longa_to_list(long* self, unsigned long len  );
struct list$1float$* floata_to_list(float* self, unsigned long len  );
struct list$1double$* doublea_to_list(double* self, unsigned long len  );
_Bool _Bool_equals(_Bool self, _Bool right);
_Bool char_equals(char self, char right);
_Bool short_equals(short self, short right);
_Bool int_equals(int self, int right);
_Bool long_equals(long self, long right);
_Bool size_t_equals(unsigned long self  , unsigned long right  );
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
_Bool charp_equals(const char* self, const char* right);
_Bool string_equals(char* self, const char* right);
_Bool voidp_equals(void* self, void* right);
_Bool _Boolp_equals(_Bool* self, _Bool* right);
_Bool string_operator_equals(char* self, const char* right);
_Bool charp_operator_equals(const char* self, const char* right);
_Bool chara_operator_equals(char* self, const char* right);
_Bool voidp_operator_equals(const char* self, const char* right);
_Bool voidp_operator_not_equals(const char* self, const char* right);
_Bool string_operator_not_equals(char* self, const char* right);
_Bool charp_operator_not_equals(const char* self, const char* right);
_Bool chara_operator_not_equals(char* self, const char* right);
char* charp_operator_add(const char* self, const char* right);
char* string_operator_add(char* self, const char* right);
char* charp_operator_mult(const char* self, int right);
char* string_operator_mult(const char* self, int right);
_Bool charpa_contained(char** self, unsigned long len  , const char* str);
unsigned long shorta_length(short* self, unsigned long len  );
unsigned long inta_length(int* self, unsigned long len  );
unsigned long longa_length(long* self, unsigned long len  );
unsigned long floata_length(float* self, unsigned long len  );
unsigned long doublea_length(double* self, unsigned long len  );
unsigned int _Bool_get_hash_key(_Bool value);
unsigned int char_get_hash_key(char value);
unsigned int short_get_hash_key(short int value);
unsigned int int_get_hash_key(int value);
unsigned int long_get_hash_key(long value);
unsigned int size_t_get_hash_key(unsigned long value  );
unsigned int float_get_hash_key(float value);
unsigned int double_get_hash_key(double value);
unsigned int charp_get_hash_key(const char* value);
unsigned int string_get_hash_key(char* value);
unsigned int voidp_get_hash_key(void* value);
_Bool _Bool_clone(_Bool self);
char char_clone(char self);
short int short_clone(short self);
int int_clone(int self);
long  int long_clone(long self);
unsigned long size_t_clone(unsigned long self  );
double double_clone(double self);
float float_clone(float self);
_Bool xisalpha(char c);
_Bool xisblank(char c);
_Bool xisdigit(char c);
_Bool xisspace(char c);
_Bool xisalnum(char c);
_Bool xisascii(char c);
_Bool xispunct(char c);
int string_length(const char* str);
int charp_length(const char* str);
int chara_length(const char* str);
char* charp_reverse(const char* str);
char* string_operator_load_range_element(char* str, int head, int tail);
char* charp_operator_load_range_element(char* str, int head, int tail);
char* charp_substring(const char* str, int head, int tail);
char* xsprintf(const char* msg, ...);
char* charp_delete(char* str, int head, int tail);
struct list$1char$ph* charp_split_char(char* self, char c);
char* charp_xsprintf(char* self, const char* msg, ...);
char* int_xsprintf(int self, const char* msg, ...);
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
char* size_t_to_string(unsigned long self  );
char* float_to_string(float self);
char* double_to_string(double self);
char* string_to_string(char* self);
char* charp_to_string(const char* self);
int _Bool_compare(_Bool left, _Bool right);
int char_compare(char left, char right);
int short_compare(short left, short right);
int int_compare(int left, int right);
int long_compare(long left, long right);
int size_t_compare(unsigned long left  , unsigned long right  );
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
int re_matchp_ex(struct re_program* pattern  , const char* text, int* matchlength, struct re_capture* captures  , int max_captures, _Bool ignore_case);
int re_matchp(struct re_program* pattern  , const char* text, int* matchlength, struct re_capture* captures  , int max_captures);
int re_match(const char* pattern, const char* text, int* matchlength);
struct re_program* re_compile(const char* pattern);
void re_print(struct re_program* pattern  );
void clear_captures(struct anonymous_typeX25* ctx  );
void snapshot_captures(const struct anonymous_typeX25* ctx  , struct re_capture* buffer_  );
void restore_captures(struct anonymous_typeX25* ctx  , const struct re_capture* buffer_  );
struct regex_t* new_token(struct anonymous_typeX24* st  );
int append_token(struct regex_t** head  , struct regex_t** tail  , struct regex_t* token  );
struct regex_t* compile_sequence(struct anonymous_typeX24* st  , const char* pattern, int* pos, int in_group);
const char* matchpattern(struct regex_t* pattern  , const char* text, struct anonymous_typeX25* ctx  );
const char* matchgroup(struct regex_t* token  , struct regex_t* rest  , const char* text, struct anonymous_typeX25* ctx  );
const char* matchstar(struct regex_t* token  , struct regex_t* rest  , const char* text, struct anonymous_typeX25* ctx  );
const char* matchplus(struct regex_t* token  , struct regex_t* rest  , const char* text, struct anonymous_typeX25* ctx  );
const char* matchquestion(struct regex_t* token  , struct regex_t* rest  , const char* text, struct anonymous_typeX25* ctx  );
unsigned char re_fold_char(unsigned char c, _Bool ignore_case);
const char* matchtoken(struct regex_t* token  , const char* text, struct anonymous_typeX25* ctx  );
int matchdigit(char c);
int matchalpha(char c);
int matchwhitespace(char c);
int matchalphanum(char c);
int matchrange(char c, const char* str, _Bool ignore_case);
int matchdot(char c);
int ismetachar(char c);
int matchmetachar(char c, const char* str);
int matchcharclass(char c, const char* str, _Bool ignore_case);
void re_print_internal(struct regex_t* pattern  , int depth);
int re_get_group_count(struct re_program* pattern  );
int charp_index_regex(const char* self, const char* reg, int default_value, _Bool ignore_case);
int charp_rindex_regex(const char* self, const char* reg, int default_value, _Bool ignore_case);
char* string_chomp(const char* str);
int string_rindex_regex(char* self, const char* reg, int default_value, _Bool ignore_case);
int string_index_regex(char* self, const char* reg, int default_value, _Bool ignore_case);
_Bool charp_match(char* self, const char* reg, _Bool ignore_case);
struct list$1char$ph* charp_scan(const char* self, const char* reg, _Bool ignore_case);
struct list$1char$ph* charp_split(const char* self, const char* reg, _Bool ignore_case);
char* string_sub(char* self, const char* reg, const char* replace, _Bool ignore_case);
struct list$1char$ph* string_scan(char* self, const char* reg, _Bool ignore_case);
struct list$1char$ph* string_split(char* self, const char* reg, _Bool ignore_case);
_Bool string_match(char* self, const char* reg, _Bool ignore_case);
char* charp_sub(char* self, const char* reg, const char* replace, _Bool global, _Bool ignore_case);
char* charp_sub_block(char* self, const char* reg, _Bool global, _Bool ignore_case, void* parent, char* (*block)(void*,char*,struct list$1char$ph*));
struct list$1char$ph* charp_scan_block(const char* self, const char* reg, _Bool ignore_case, void* parent, char* (*block)(void*,char*,struct list$1char$ph*));
char* string_sub_block(char* self, const char* reg, _Bool global, _Bool ignore_case, void* parent, char* (*block)(void*,char*,struct list$1char$ph*));
int* wcscpy(int* __dest  , const int* __src  );
int* wcsncpy(int* __dest  , const int* __src  , unsigned long __n  );
unsigned long wcslcpy(int* __dest  , const int* __src  , unsigned long __n  );
unsigned long wcslcat(int* __dest  , const int* __src  , unsigned long __n  );
int* wcscat(int* __dest  , const int* __src  );
int* wcsncat(int* __dest  , const int* __src  , unsigned long __n  );
int wcscmp(const int* __s1  , const int* __s2  );
int wcsncmp(const int* __s1  , const int* __s2  , unsigned long __n  );
int wcscasecmp(const int* __s1  , const int* __s2  );
int wcsncasecmp(const int* __s1  , const int* __s2  , unsigned long __n  );
int wcscasecmp_l(const int* __s1  , const int* __s2  , struct __locale_struct* __loc  );
int wcsncasecmp_l(const int* __s1  , const int* __s2  , unsigned long __n  , struct __locale_struct* __loc  );
int wcscoll(const int* __s1  , const int* __s2  );
unsigned long wcsxfrm(int* __s1  , const int* __s2  , unsigned long __n  );
int wcscoll_l(const int* __s1  , const int* __s2  , struct __locale_struct* __loc  );
unsigned long wcsxfrm_l(int* __s1  , const int* __s2  , unsigned long __n  , struct __locale_struct* __loc  );
int* wcsdup(const int* __s  );
int* wcschr(const int* __wcs  , int __wc  );
int* wcsrchr(const int* __wcs  , int __wc  );
int* wcschrnul(const int* __s  , int __wc  );
unsigned long wcscspn(const int* __wcs  , const int* __reject  );
unsigned long wcsspn(const int* __wcs  , const int* __accept  );
int* wcspbrk(const int* __wcs  , const int* __accept  );
int* wcsstr(const int* __haystack  , const int* __needle  );
int* wcstok(int* __s  , const int* __delim  , int** __ptr  );
unsigned long wcslen(const int* __s  );
int* wcswcs(const int* __haystack  , const int* __needle  );
unsigned long wcsnlen(const int* __s  , unsigned long __maxlen  );
int* wmemchr(const int* __s  , int __c  , unsigned long __n  );
int wmemcmp(const int* __s1  , const int* __s2  , unsigned long __n  );
int* wmemcpy(int* __s1  , const int* __s2  , unsigned long __n  );
int* wmemmove(int* __s1  , const int* __s2  , unsigned long __n  );
int* wmemset(int* __s  , int __c  , unsigned long __n  );
int* wmempcpy(int* __s1  , const int* __s2  , unsigned long __n  );
unsigned int btowc(int __c);
int wctob(unsigned int __c  );
int mbsinit(const struct anonymous_typeX1* __ps  );
unsigned long mbrtowc(int* __pwc  , const char* __s, unsigned long __n  , struct anonymous_typeX1* __p  );
unsigned long wcrtomb(char* __s, int __wc  , struct anonymous_typeX1* __ps  );
unsigned long __mbrlen(const char* __s, unsigned long __n  , struct anonymous_typeX1* __ps  );
unsigned long mbrlen(const char* __s, unsigned long __n  , struct anonymous_typeX1* __ps  );
unsigned long mbsrtowcs(int* __dst  , const char** __src, unsigned long __len  , struct anonymous_typeX1* __ps  );
unsigned long wcsrtombs(char* __dst, const int** __src  , unsigned long __len  , struct anonymous_typeX1* __ps  );
unsigned long mbsnrtowcs(int* __dst  , const char** __src, unsigned long __nmc  , unsigned long __len  , struct anonymous_typeX1* __ps  );
unsigned long wcsnrtombs(char* __dst, const int** __src  , unsigned long __nwc  , unsigned long __len  , struct anonymous_typeX1* __ps  );
int wcwidth(int __c  );
int wcswidth(const int* __s  , unsigned long __n  );
double wcstod(const int* __nptr  , int** __endptr  );
float wcstof(const int* __nptr  , int** __endptr  );
long  double wcstold(const int* __nptr  , int** __endptr  );
float wcstof32(const int* __nptr  , int** __endptr  );
double wcstof64(const int* __nptr  , int** __endptr  );
double wcstof32x(const int* __nptr  , int** __endptr  );
long  double wcstof64x(const int* __nptr  , int** __endptr  );
long  int wcstol(const int* __nptr  , int** __endptr  , int __base);
unsigned long  int wcstoul(const int* __nptr  , int** __endptr  , int __base);
long long int wcstoll(const int* __nptr  , int** __endptr  , int __base);
unsigned long long int wcstoull(const int* __nptr  , int** __endptr  , int __base);
long long int wcstoq(const int* __nptr  , int** __endptr  , int __base);
unsigned long long int wcstouq(const int* __nptr  , int** __endptr  , int __base);
long  int __isoc23_wcstol(const int* __nptr  , int** __endptr  , int __base);
unsigned long  int __isoc23_wcstoul(const int* __nptr  , int** __endptr  , int __base);
long long int __isoc23_wcstoll(const int* __nptr  , int** __endptr  , int __base);
unsigned long long int __isoc23_wcstoull(const int* __nptr  , int** __endptr  , int __base);
long  int wcstol_l(const int* __nptr  , int** __endptr  , int __base, struct __locale_struct* __loc  );
unsigned long  int wcstoul_l(const int* __nptr  , int** __endptr  , int __base, struct __locale_struct* __loc  );
long long int wcstoll_l(const int* __nptr  , int** __endptr  , int __base, struct __locale_struct* __loc  );
unsigned long long int wcstoull_l(const int* __nptr  , int** __endptr  , int __base, struct __locale_struct* __loc  );
long  int __isoc23_wcstol_l(const int* __nptr  , int** __endptr  , int __base, struct __locale_struct* __loc  );
unsigned long  int __isoc23_wcstoul_l(const int* __nptr  , int** __endptr  , int __base, struct __locale_struct* __loc  );
long long int __isoc23_wcstoll_l(const int* __nptr  , int** __endptr  , int __base, struct __locale_struct* __loc  );
unsigned long long int __isoc23_wcstoull_l(const int* __nptr  , int** __endptr  , int __base, struct __locale_struct* __loc  );
double wcstod_l(const int* __nptr  , int** __endptr  , struct __locale_struct* __loc  );
float wcstof_l(const int* __nptr  , int** __endptr  , struct __locale_struct* __loc  );
long  double wcstold_l(const int* __nptr  , int** __endptr  , struct __locale_struct* __loc  );
float wcstof32_l(const int* __nptr  , int** __endptr  , struct __locale_struct* __loc  );
double wcstof64_l(const int* __nptr  , int** __endptr  , struct __locale_struct* __loc  );
double wcstof32x_l(const int* __nptr  , int** __endptr  , struct __locale_struct* __loc  );
long  double wcstof64x_l(const int* __nptr  , int** __endptr  , struct __locale_struct* __loc  );
int* wcpcpy(int* __dest  , const int* __src  );
int* wcpncpy(int* __dest  , const int* __src  , unsigned long __n  );
struct _IO_FILE* open_wmemstream(int** __bufloc  , unsigned long* __sizeloc  );
int fwide(struct _IO_FILE* __fp  , int __mode);
int fwprintf(struct _IO_FILE* __stream  , const int* __format  , ...);
int wprintf(const int* __format  , ...);
int swprintf(int* __s  , unsigned long __n  , const int* __format  , ...);
int vfwprintf(struct _IO_FILE* __s  , const int* __format  , __builtin_va_list __arg  );
int vwprintf(const int* __format  , __builtin_va_list __arg  );
int vswprintf(int* __s  , unsigned long __n  , const int* __format  , __builtin_va_list __arg  );
int fwscanf(struct _IO_FILE* __stream  , const int* __format  , ...);
int wscanf(const int* __format  , ...);
int swscanf(const int* __s  , const int* __format  , ...);
int __isoc23_fwscanf(struct _IO_FILE* __stream  , const int* __format  , ...);
int __isoc23_wscanf(const int* __format  , ...);
int __isoc23_swscanf(const int* __s  , const int* __format  , ...);
int vfwscanf(struct _IO_FILE* __s  , const int* __format  , __builtin_va_list __arg  );
int vwscanf(const int* __format  , __builtin_va_list __arg  );
int vswscanf(const int* __s  , const int* __format  , __builtin_va_list __arg  );
int __isoc23_vfwscanf(struct _IO_FILE* __s  , const int* __format  , __builtin_va_list __arg  );
int __isoc23_vwscanf(const int* __format  , __builtin_va_list __arg  );
int __isoc23_vswscanf(const int* __s  , const int* __format  , __builtin_va_list __arg  );
unsigned int fgetwc(struct _IO_FILE* __stream  );
unsigned int getwc(struct _IO_FILE* __stream  );
unsigned int getwchar();
unsigned int fputwc(int __wc  , struct _IO_FILE* __stream  );
unsigned int putwc(int __wc  , struct _IO_FILE* __stream  );
unsigned int putwchar(int __wc  );
int* fgetws(int* __ws  , int __n, struct _IO_FILE* __stream  );
int fputws(const int* __ws  , struct _IO_FILE* __stream  );
unsigned int ungetwc(unsigned int __wc  , struct _IO_FILE* __stream  );
unsigned int getwc_unlocked(struct _IO_FILE* __stream  );
unsigned int getwchar_unlocked();
unsigned int fgetwc_unlocked(struct _IO_FILE* __stream  );
unsigned int fputwc_unlocked(int __wc  , struct _IO_FILE* __stream  );
unsigned int putwc_unlocked(int __wc  , struct _IO_FILE* __stream  );
unsigned int putwchar_unlocked(int __wc  );
int* fgetws_unlocked(int* __ws  , int __n, struct _IO_FILE* __stream  );
int fputws_unlocked(const int* __ws  , struct _IO_FILE* __stream  );
unsigned long wcsftime(int* __s  , unsigned long __maxsize  , const int* __format  , const struct tm* __tp  );
unsigned long wcsftime_l(int* __s  , unsigned long __maxsize  , const int* __format  , const struct tm* __tp  , struct __locale_struct* __loc  );
char* dirname(char* __path);
char* __xpg_basename(char* __path);
int* __builtin_wstring(const char* str);
int wchar_tp_length(const int* str  );
int wchar_ta_length(const int* str  );
int wstring_length(const int* str  );
char* string_lower_case(char* str);
char* string_upper_case(char* str);
int* wchar_tp_substring(const int* str  , int head, int tail);
int charp_index_count(const char* str, const char* search_str, int count, int default_value);
int charp_rindex(const char* str, const char* search_str, int default_value);
int charp_rindex_count(const char* str, const char* search_str, int count, int default_value);
char* charp_strip(const char* self);
char* wchar_tp_to_string(const int* wstr  );
char* wchar_ta_to_string(const int* wstr  );
int* charp_to_wstring(const char* str);
int* chara_to_wstring(char* str);
int* wchar_tp_delete(const int* str  , int head, int tail);
int wchar_tp_index(const int* str  , const int* search_str  , int default_value);
int wchar_tp_rindex(const int* str  , const int* search_str  , int default_value);
int* wchar_tp_reverse(const int* str  );
int* wchar_tp_multiply(const int* str  , int n);
int* wchar_tp_printable(const int* str  );
int wchar_tp_compare(const int* left  , int* right  );
int wstring_compare(const int* left  , const int* right  );
int* wchar_tp_operator_mult(const int* str  , int n);
int* wstring_operator_mult(const int* str  , int n);
_Bool wstring_operator_equals(const int* left  , const int* right  );
_Bool wstring_operator_not_equals(const int* left  , const int* right  );
int* wchar_tp_operator_add(const int* left  , const int* right  );
int* wstring_operator_add(const int* left  , const int* right  );
int charp_index(const char* str, const char* search_str, int default_value);
char* charp_replace(char* self, int index, char c);
char* charp_multiply(const char* str, int n);
struct list$1char$ph* charp_split_str(const char* self, const char* str);
unsigned int wchar_tp_get_hash_key(const int* value  );
_Bool wstring_equals(const int* left  , const int* right  );
_Bool wchar_t_operator_equals(int left  , int right  );
_Bool wchar_t_operator_not_equals(int left  , int right  );
unsigned int wchar_t_get_hash_key(int value  );
_Bool wchar_t_equals(int left  , int right  );
char* wchar_t_to_string(int wc  );
char* xrealpath(const char* path);
char* xdirname(const char* path);
unsigned long xwcslen(const int* wstr  );
int* wstring_substring(const int* str  , int head, int tail);
int string_index_count(const char* str, const char* search_str, int count, int default_value);
int string_rindex(const char* str, const char* search_str, int default_value);
int string_rindex_count(const char* str, const char* search_str, int count, int default_value);
char* string_strip(const char* self);
char* wstring_to_string(const int* wstr  );
int* int_to_wstring(int self);
int* wstring_delete(const int* str  , int head, int tail);
int wstring_index(const int* str  , const int* search_str  , int default_value);
int wstring_rindex(const int* str  , const int* search_str  , int default_value);
int* wstring_reverse(const int* str  );
int* wstring_multiply(const int* str  , int n);
int* wstring_printable(const int* str  );
unsigned int wstring_get_hash_key(const int* value  );
int string_index(const char* str, const char* search_str, int default_value);
char* string_replace(char* self, int index, char c);
char* string_multiply(const char* str, int n);
struct list$1char$ph* string_split_str(const char* self, const char* str);
int* string_to_wstring(const char* str);
char* charp_chomp(const char* str);
_Bool wchar_tp_equals(const int* left  , const int* right  );
_Bool wchar_tp_operator_equals(const int* left  , const int* right  );
_Bool wchar_tp_operator_not_equals(const int* left  , const int* right  );
char* FILE_read(struct _IO_FILE* f  );
int FILE_write(struct _IO_FILE* f  , const char* str);
int FILE_fclose(struct _IO_FILE* f  );
struct _IO_FILE* FILE_fprintf(struct _IO_FILE* f  , const char* msg, ...);
int charp_write(const char* self, const char* file_name, _Bool append);
char* charp_read(const char* file_name);
struct list$1char$ph* FILE_readlines(struct _IO_FILE* f  );
_Bool xiswalpha(int c  );
_Bool xiswblank(int c  );
_Bool xiswdigit(int c  );
_Bool xiswalnum(int c  );
_Bool xiswascii(int c  );
struct sClass* sClass_initialize(struct sClass* self, const char* name, _Bool number, _Bool union_, _Bool generics, _Bool method_generics, _Bool protocol_, _Bool struct_, _Bool float_, int generics_num, int method_generics_num, _Bool enum_, _Bool uniq_, _Bool typename, struct sInfo* info  );
struct sType* sType_initialize(struct sType* self, char* name  , _Bool heap, struct sInfo* info  , _Bool unsinged_);
struct sFun* sFun_initialize(struct sFun* self, char* name  , struct sType* result_type  , struct list$1sType$ph* param_types, struct list$1char$ph* param_names, struct list$1char$ph* param_default_parametors, _Bool external, _Bool var_args, struct sBlock* block  , _Bool static_, struct sInfo* info  , _Bool inline_, _Bool uniq_, _Bool generate_, char* attribute  , char* fun_attribute  , _Bool const_fun, char* text_block  , char* generics_sname  , int generics_sline, _Bool immutable_);
struct sGenericsFun* sGenericsFun_initialize(struct sGenericsFun* self, struct sType* impl_type  , struct list$1char$ph* generics_type_names, struct list$1char$ph* method_generics_type_names, char* name  , struct sType* result_type  , struct list$1sType$ph* param_types, struct list$1char$ph* param_names, struct list$1char$ph* param_default_parametors, _Bool var_args, char* block  , struct sInfo* info  , char* generics_sname  , int generics_sline, _Bool const_fun);
struct CVALUE* CVALUE_initialize(struct CVALUE* self);
struct sModule* sModule_initialize(struct sModule* self);
struct sVarTable* sVarTable_initialize(struct sVarTable* self, _Bool global, struct sVarTable* parent  );
void sVarTable_finalize(struct sVarTable* self);
struct sBlock* sBlock_initialize(struct sBlock* self);
struct sClassModule* sClassModule_initialize(struct sClassModule* self, char* name  , char* text  , char* sname  , int sline);
struct sNodeBase* sNodeBase_initialize(struct sNodeBase* self, struct sInfo* info  );
int sNodeBase_sline(struct sNodeBase* self, struct sInfo* info  );
int sNodeBase_sline_real(struct sNodeBase* self, struct sInfo* info  );
_Bool sNodeBase_terminated(struct sNodeBase* self);
_Bool sNodeBase_no_mutex(struct sNodeBase* self);
char* sNodeBase_sname(struct sNodeBase* self, struct sInfo* info  );
struct sCurrentNode* sCurrentNode_initialize(struct sCurrentNode* self, struct sInfo* info  );
int sCurrentNode_sline(struct sCurrentNode* self, struct sInfo* info  );
char* sCurrentNode_sname(struct sCurrentNode* self, struct sInfo* info  );
char* sCurrentNode_kind(struct sCurrentNode* self);
_Bool sCurrentNode_compile(struct sCurrentNode* self, struct sInfo* info  );
_Bool transpile_conditional_with_free_right_object_value(struct sNode* node, struct sInfo* info  );
int err_msg(struct sInfo* info  , const char* msg, ...);
int err_msg2(struct sInfo* info  , const char* msg, ...);
int expected_next_character(char c, struct sInfo* info  );
_Bool node_compile(struct sNode* node, struct sInfo* info  );
_Bool node_conditional_compile(struct sNode* node, struct sInfo* info  );
int come_main(int argc, char** argv);
char* make_type_name_string(struct sType* type  , struct sInfo* info  , _Bool no_static, _Bool cast_type, _Bool typedef_extended);
char* make_come_type_name_string(struct sType* type  , struct sInfo* info  );
char* make_come_define_var(struct sType* type  , char* name, struct sInfo* info  );
struct sType* get_no_solved_type(struct sType* type  );
struct sType* get_no_solved_type2(struct sType* type  );
char* header_function(struct sFun* fun  , struct sInfo* info  );
_Bool output_source_file(struct sInfo* info  );
void show_type(struct sType* type  , struct sInfo* info  );
char* create_generics_name(struct sType* generics_type  , struct sInfo* info  );
void add_last_code_to_source(struct sInfo* info  );
void add_come_code_at_function_head(struct sInfo* info  , const char* code, ...);
void add_come_code_at_come_header(struct sInfo* info  , char* id  , const char* msg, ...);
void add_come_code_no_indent(struct sInfo* info  , const char* msg, ...);
void add_come_code_at_come_struct_header(struct sInfo* info  , char* id  , const char* msg, ...);
void add_come_code_at_function_head2(struct sInfo* info  , const char* code, ...);
void add_come_code(struct sInfo* info  , const char* msg, ...);
void add_come_last_code(struct sInfo* info  , const char* msg, ...);
void add_come_last_code2(struct sInfo* info  , const char* msg, ...);
void dec_stack_ptr(int value, struct sInfo* info  );
struct CVALUE* get_value_from_stack(int offset, struct sInfo* info  );
char* make_define_var(struct sType* type  , char* name, struct sInfo* info  , _Bool no_static, _Bool in_typedef);
char* make_var_name(struct sType* type  , char* name, struct sInfo* info  , _Bool no_static);
void transpiler_clear_last_code(struct sInfo* info  );
_Bool output_header_file(struct sInfo* info  );
void on_drop_object(struct sType* type  , char* obj, struct sInfo* info  );
void on_load_object(struct sType* type  , char* obj, struct sInfo* info  );
struct sType* solve_method_generics(struct sType* type  , struct sInfo* info  );
_Bool existance_free_right_value_objects(struct sInfo* info  );
_Bool existance_free_objects_on_return(struct sBlock* current_block  , struct sInfo* info  , struct sVar* ret_value  , _Bool top_block);
void std_move(struct sType* left_type  , struct sType* right_type  , struct CVALUE* right_value  , struct sInfo* info  );
struct sType* solve_generics(struct sType* type  , struct sType* generics_type  , struct sInfo* info  );
struct sVar* get_variable_from_table(struct sVarTable* table  , char* name);
void free_objects_on_return(struct sBlock* current_block  , struct sInfo* info  , struct sVar* ret_value  , _Bool top_block);
void free_objects_of_match_lv_tables(struct sInfo* info  );
void free_objects_on_break(struct sInfo* info  );
void free_object(struct sType* type  , char* obj, _Bool no_decrement, _Bool no_free, struct sInfo* info  , _Bool ret_value);
struct tuple2$2sType$phchar$ph* clone_object(struct sType* type  , char* obj, struct sInfo* info  );
void free_right_value_objects(struct sInfo* info  );
void free_objects(struct sVarTable* table  , struct sVar* ret_value  , struct sInfo* info  );
void append_object_to_right_values(struct CVALUE* come_value  , struct sType* type  , struct sInfo* info  , _Bool decrement_ref_count, struct sType* obj_type  , char* obj_value, struct sVar* obj_var  );
void remove_object_from_right_values(int right_value_num, struct sInfo* info  );
char* increment_ref_count_object(struct sType* type  , char* obj, struct sInfo* info  );
void decrement_ref_count_object(struct sType* type  , char* obj, struct sInfo* info  , _Bool no_free);
struct sNode* reverse_node(struct sNode* value, struct sInfo* info  );
struct sNode* cast_node(struct sType* type  , struct sNode* node, struct sInfo* info  );
struct sNode* reffence_node(struct sNode* value, struct sInfo* info  );
struct tuple2$2char$phsGenericsFun$p* make_method_generics_function(char* fun_name  , struct list$1sType$ph* method_generics_types, struct sInfo* info  );
struct sNode* create_return_node(struct sNode* value, char* value_source  , struct sInfo* info  );
struct sNode* post_position_operator(struct sNode* node, struct sInfo* info  );
_Bool operator_overload_fun_self(struct sType* type  , const char* fun_name, struct sNode* node, struct CVALUE* left_value  , struct sInfo* info  );
void caller_begin(struct sInfo* info  );
void caller_end(struct sInfo* info  );
struct sNode* craete_logical_denial(struct sNode* node, struct sInfo* info  );
struct tuple3$3sType$phchar$ph_Bool$* backtrace_parse_type(_Bool parse_variable_name, struct sInfo* info  );
void skip_pointer_attribute(struct sInfo* info  );
struct sNode* parse_normal_block(_Bool clang, struct sInfo* info  );
void cast_type(struct sType* left_type  , struct sType* right_type  , struct CVALUE* come_value  , struct sInfo* info  );
_Bool check_assign_type(const char* msg, struct sType* left_type  , struct sType* right_type  , struct CVALUE* come_value  , struct sInfo* info  );
struct tuple2$2char$phchar$ph* parse_attribute(struct sInfo* info  , _Bool parse_function_attribute);
struct sNode* get_number(_Bool minus, struct sInfo* info  );
struct sNode* get_oct_number(struct sInfo* info  );
struct sNode* get_hex_number(_Bool minus, struct sInfo* info  );
struct sNode* create_int_node(char* value  , struct sInfo* info  );
struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$* parse_params(struct sInfo* info  , _Bool in_constructor_);
struct tuple2$2sFun$pchar$ph* create_pthread_fun(struct sType* type  , char* fun_name, struct sInfo* info  );
char* skip_paren(struct sInfo* info  );
_Bool is_contained_generics_class(struct sType* type  , struct sInfo* info  );
_Bool is_type_name(char* buf, struct sInfo* info  );
_Bool parsecmp(const char* p2, struct sInfo* info  );
char* parse_word(_Bool digits, struct sInfo* info  );
char* backtrace_parse_word(struct sInfo* info  );
void skip_spaces_and_lf(struct sInfo* info  );
void skip_spaces_and_lf2(struct sInfo* info  );
struct tuple3$3sType$phchar$ph_Bool$* parse_type(struct sInfo* info  , _Bool parse_variable_name, _Bool parse_multiple_type, _Bool in_function_parametor);
struct tuple2$2sType$phchar$ph* parse_variable_name_on_multiple_declare(struct sType* base_type_name  , _Bool first, struct sInfo* info  );
struct sNode* statment(struct sInfo* info  );
struct sNode* top_level_v1(char* buf, char* head, int head_sline, struct sInfo* info  );
struct sNode* expression_node_v1(struct sInfo* info  );
struct sNode* expression_node_v99(struct sInfo* info  );
struct sNode* expression_node_v98(struct sInfo* info  );
struct sNode* expression_node_v97(struct sInfo* info  );
void parse_sharp_v5(struct sInfo* info  );
char* create_method_name(struct sType* obj_type  , _Bool no_pointer_name, const char* fun_name, struct sInfo* info  , _Bool array_equal_pointer);
char* create_method_name_original_obj_type(struct sType* obj_type  , _Bool no_pointer_name, const char* fun_name, struct sInfo* info  , _Bool array_equal_pointer);
char* create_non_method_name(struct sType* obj_type  , _Bool no_pointer_name, const char* fun_name, struct sInfo* info  , _Bool array_equal_pointer);
char* create_method_name_using_class(struct sClass* obj_class  , const char* fun_name, struct sInfo* info  );
struct sNode* create_null_return_value(struct sInfo* info  );
struct sNode* create_some(struct sNode* exp, struct sInfo* info  );
struct sNode* expression_node_v96(struct sInfo* info  );
struct sNode* parse_tuple(struct sInfo* info  , _Bool named_tuple);
struct sNode* parse_some(struct sInfo* info  );
struct sNode* parse_none(struct sInfo* info  );
_Bool is_inner_calling(struct sNode* node, struct sInfo* info  );
struct sNode* post_position_operator_v7(struct sNode* node, struct sInfo* info  );
struct sNode* expression_node_v95(struct sInfo* info  );
struct sNode* store_var(char* name  , struct list$1char$ph* multiple_assign, struct list$1tuple3$3sType$phchar$phsNode$ph$ph* multiple_declare, struct sType* type  , _Bool alloc, struct sNode* right_value, struct sInfo* info  );
struct sNode* create_load_var(const char* var_name, struct sInfo* info  );
struct sNode* parse_array_initializer(struct sInfo* info  );
struct sNode* parse_struct_initializer(struct sInfo* info  );
struct sNode* parse_global_variable(struct sInfo* info  );
struct sNode* load_var(char* name  , struct sInfo* info  );
struct sNode* string_node_v7(char* buf, char* head, int head_sline, struct sInfo* info  );
void add_variable_to_table(char* name, struct sType* type  , struct sInfo* info  , _Bool function_param, _Bool comma, _Bool to_function_table);
void add_variable_to_global_table(char* name, struct sType* type  , struct sInfo* info  );
void add_variable_to_global_table_with_int_value(char* name, struct sType* type  , char* c_value, struct sInfo* info  );
struct sNode* parse_match(struct sNode* expression_node, struct sInfo* info  );
struct sNode* string_node_v8(char* buf, char* head, int head_sline, struct sInfo* info  );
struct sNode* parse_if_method_call(struct sNode* expression_node, struct sInfo* info  );
struct sNode* parse_less_method_call(struct sNode* expression_node, struct sInfo* info  );
struct sNode* parse_elif_method_call(struct sNode* expression_node, struct sInfo* info  );
struct sNode* parse_or_statment(struct sNode* expression_node, struct sInfo* info  );
struct sNode* parse_and_statment(struct sNode* expression_node, struct sInfo* info  );
struct sNode* string_node_v9(char* buf, char* head, int head_sline, struct sInfo* info  );
struct sNode* string_node_v10(char* buf, char* head, int head_sline, struct sInfo* info  );
struct sNode* string_node_v11(char* buf, char* head, int head_sline, struct sInfo* info  );
struct sNode* string_node_v12(char* buf, char* head, int head_sline, struct sInfo* info  );
struct sNode* create_comma_exp(struct sNode* node, struct sNode* node2, struct sInfo* info  );
struct sNode* create_less(struct sNode* node, struct sNode* right, struct sInfo* info  );
struct sNode* create_null_node(struct sInfo* info  );
struct sNode* conditional_node(struct sNode* value1, struct sNode* value2, struct sNode* value3, struct sInfo* info  );
_Bool operator_overload_fun(struct sType* type  , const char* fun_name, struct sNode* left_node, struct sNode* right_node, struct CVALUE* left_value  , struct CVALUE* right_value  , _Bool break_guard, struct sInfo* info  );
struct sNode* expression_v13(struct sInfo* info  , _Bool type_name_exp);
struct sNode* post_op_v13(struct sNode* node, struct sInfo* info  );
struct sNode* string_node_v13(char* buf, char* head, int head_sline, struct sInfo* info  );
void child_output_struct(struct sType* type  , char* struct_name  , struct buffer* buf  , _Bool* existance_generics, char* name  , int indent, struct sInfo* info  , _Bool* named_child);
char* parse_struct_attribute(struct sInfo* info  );
struct sNode* create_nothing_node(struct sInfo* info  );
_Bool is_contained_method_generics_types(struct sType* type  , struct sInfo* info  );
_Bool is_contained_generics_types(struct sType* type  , struct sInfo* info  );
struct sNode* string_node_v14(char* buf, char* head, int head_sline, struct sInfo* info  );
struct sNode* parse_struct(char* type_name  , char* struct_attribute  , struct sInfo* info  , _Bool anonymous);
char* get_none_generics_name(char* class_name);
struct sNode* top_level_v98(char* buf, char* head, int head_sline, struct sInfo* info  );
_Bool output_generics_struct(struct sType* type  , struct sType* generics_type  , struct sInfo* info  );
void output_struct(struct sClass* klass  , char* pragma  , struct sInfo* info  , _Bool anonymous);
struct sNode* string_node_v15(char* buf, char* head, int head_sline, struct sInfo* info  );
struct sNode* parse_union(char* type_name  , char* union_attribute  , struct sInfo* info  , _Bool anonymous);
struct sNode* top_level_v97(char* buf, char* head, int head_sline, struct sInfo* info  );
struct sNode* string_node_v16(char* buf, char* head, int head_sline, struct sInfo* info  );
struct sNode* parse_enum(char* type_name  , char* attribute  , struct sInfo* info  );
struct sNode* top_level_v96(char* buf, char* head, int head_sline, struct sInfo* info  );
_Bool add_typedef(char* type_name  , struct sType* type  , struct sInfo* info  );
struct sNode* top_level_v95(char* buf, char* head, int head_sline, struct sInfo* info  );
struct sNode* string_node_v17(char* buf, char* head, int head_sline, struct sInfo* info  );
struct sNode* create_nullable_node(struct sNode* left, struct sInfo* info  );
struct sNode* load_field(struct sNode* left, char* name  , struct sInfo* info  );
struct sNode* store_field(struct sNode* left, struct sNode* right, char* name  , struct sInfo* info  );
struct sNode* post_position_operator_v99(struct sNode* node, struct sInfo* info  );
struct sNode* parse_method_call_v18(struct sNode* obj, char* fun_name  , struct sInfo* info  );
struct sNode* post_position_operator_v19(struct sNode* node, struct sInfo* info  );
struct tuple3$3char$phsFun$psGenericsFun$p* get_method(const char* fun_name, struct sType* obj_type  , struct sInfo* info  );
struct sNode* create_method_call(const char* fun_name, struct sNode* obj, struct list$1tuple2$2char$phsNode$ph$ph* params, struct buffer* method_block  , int method_block_sline, struct list$1sType$ph* method_generics_types, struct sInfo* info  );
struct sNode* create_guard_break_method_call(struct sNode* expression_node, struct sInfo* info  );
_Bool compile_method_block(struct buffer* method_block  , struct list$1CVALUE$ph* come_params, struct sFun* fun  , char* fun_name, int method_block_sline, struct sInfo* info  , _Bool no_create_current_stack);
struct tuple2$2char$phsGenericsFun$p* make_generics_function(struct sType* type  , char* fun_name  , struct sInfo* info  , _Bool array_equal_pointer);
struct sNode* parse_method_call_v20(struct sNode* obj, char* fun_name  , struct sInfo* info  );
struct sNode* string_node_v20(char* buf, char* head, int head_sline, struct sInfo* info  );
struct sNode* create_implements(struct sNode* node, struct sType* inf_type  , struct sInfo* info  );
struct sNode* create_true_object(struct sInfo* info  );
struct sNode* create_false_object(struct sInfo* info  );
struct sNode* string_node_v21(char* buf, char* head, int head_sline, struct sInfo* info  );
struct sNode* top_level_v94(char* buf, char* head, int head_sline, struct sInfo* info  );
struct sNode* post_position_operator_v21(struct sNode* node, struct sInfo* info  );
struct sNode* top_level_v93(char* buf, char* head, int head_sline, struct sInfo* info  );
struct sNode* top_level_v92(char* buf, char* head, int head_sline, struct sInfo* info  );
struct sNode* top_level_v91(char* buf, char* head, int head_sline, struct sInfo* info  );
struct sNode* static_assert_node(struct sNode* exp, struct sNode* exp2, struct sInfo* info  );
struct sNothingNode* sNothingNode_initialize(struct sNothingNode* self, struct sInfo* info  );
_Bool sNothingNode_terminated(struct sNothingNode* self);
char* sNothingNode_kind(struct sNothingNode* self);
_Bool sNothingNode_compile(struct sNothingNode* self, struct sInfo* info  );
void preprocess_file_neo_c(const char* path, struct _IO_FILE* out  );
void init_ccpp(int argc, char** argv);
void incldue_file_neo_c(char* path, int quoted, struct _IO_FILE* out  );
const char* get_macro(const char* macro_name);
void macro_define(const char* def);
void macro_undef(const char* name);
const char* call_func_macro(const char* macro_name, const char* args, const char* file, long line);
void set_macro(const char* name, const char* value);
struct MacroSnapshot* macro_snapshot_create();
char* macro_snapshot_diff_defines(struct MacroSnapshot* snap  );
void macro_snapshot_free(struct MacroSnapshot* snap  );
void init_global_opts();
struct sSemicolonNode* sSemicolonNode_initialize(struct sSemicolonNode* self, struct sInfo* info  );
char* sSemicolonNode_kind(struct sSemicolonNode* self);
_Bool sSemicolonNode_compile(struct sSemicolonNode* self, struct sInfo* info  );
static void sNodeBase_finalize(struct sNodeBase* self);
static void sSemicolonNode_finalize(struct sSemicolonNode* self);
struct sLambdaNode* sLambdaNode_initialize(struct sLambdaNode* self, struct sFun* fun  , struct sInfo* info  );
char* sLambdaNode_kind(struct sLambdaNode* self);
_Bool sLambdaNode_compile(struct sLambdaNode* self, struct sInfo* info  );
static void sLambdaNode_finalize(struct sLambdaNode* self);
static struct sType* sType_clone(struct sType* self  );
static void sType_finalize(struct sType* self  );
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
static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType* item  );
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
static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char* item  );
static void list$1char$ph_finalize(struct list$1char$ph* self);
static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item  );
static void CVALUE_finalize(struct CVALUE* self  );
struct sRawCodeNode* sRawCodeNode_initialize(struct sRawCodeNode* self, char* code  , struct sInfo* info  );
_Bool sRawCodeNode_terminated(struct sRawCodeNode* self);
char* sRawCodeNode_kind(struct sRawCodeNode* self);
_Bool sRawCodeNode_compile(struct sRawCodeNode* self, struct sInfo* info  );
static void sRawCodeNode_finalize(struct sRawCodeNode* self);
struct sFunNode* sFunNode_initialize(struct sFunNode* self, struct sFun* fun  , struct sInfo* info  );
char* sFunNode_kind(struct sFunNode* self);
_Bool sFunNode_compile(struct sFunNode* self, struct sInfo* info  );
static void sFun_finalize(struct sFun* self  );
static void list$1sVar$ph$p_finalize(struct list$1sVar$ph* self);
static void list_item$1sVar$ph$p_finalize(struct list_item$1sVar$ph* self);
static void sVar_finalize(struct sVar* self  );
static void sBlock_finalize(struct sBlock* self  );
static void sFunNode_finalize(struct sFunNode* self);
static struct sFun* map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char* key  );
static struct sFun* map$2char$phsFun$ph_operator_load_element(struct map$2char$phsFun$ph* self, char* key  );
struct sBlock* parse_block(struct sInfo* info  , _Bool return_self_at_last, _Bool in_function);
static void map$2char$phchar$ph_finalize(struct map$2char$phchar$ph* self);
static struct sClassModule* map$2char$phsClassModule$ph$p_operator_load_element(struct map$2char$phsClassModule$ph* self, char* key  );
static void sClassModule_finalize(struct sClassModule* self  );
static struct sClassModule* map$2char$phsClassModule$ph_operator_load_element(struct map$2char$phsClassModule$ph* self, char* key  );
static int list$1char$ph_length(struct list$1char$ph* self);
static struct map$2char$phchar$ph* map$2char$phchar$ph_initialize(struct map$2char$phchar$ph* self);
static void map$2char$phchar$ph$p_finalize(struct map$2char$phchar$ph* self);
static char* list$1char$ph_begin(struct list$1char$ph* self);
static _Bool list$1char$ph_end(struct list$1char$ph* self);
static char* list$1char$ph_next(struct list$1char$ph* self);
static void map$2char$phchar$ph_operator_store_element(struct map$2char$phchar$ph* self, char* key  , char* item  );
static struct map$2char$phchar$ph* map$2char$phchar$ph_insert(struct map$2char$phchar$ph* self, char* key  , char* item  , _Bool by_pointer);
static void map$2char$phchar$ph_rehash(struct map$2char$phchar$ph* self);
static char* map$2char$phchar$ph_begin(struct map$2char$phchar$ph* self);
static _Bool map$2char$phchar$ph_end(struct map$2char$phchar$ph* self);
static char* map$2char$phchar$ph_next(struct map$2char$phchar$ph* self);
static char* map$2char$phchar$ph_at(struct map$2char$phchar$ph* self, char* key  , char* default_value  , _Bool by_pointer);
static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char* item  , _Bool by_pointer);
static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail);
static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self);
static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item  );
static char* list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position);
static char* list$1char$ph_operator_load_element(struct list$1char$ph* self, int position);
static void tuple3$3sType$phchar$ph_Bool$$p_finalize(struct tuple3$3sType$phchar$ph_Bool$* self);
static void tuple2$2char$phchar$ph$p_finalize(struct tuple2$2char$phchar$ph* self);
static struct sRawCodeNode* sRawCodeNode_clone(struct sRawCodeNode* self);
static struct list$1sNode$ph* list$1sNode$ph_push_back(struct list$1sNode$ph* self, struct sNode* item);
static struct list$1sNode$ph* list$1sNode$ph_delete(struct list$1sNode$ph* self, int head, int tail);
static struct list$1sNode$ph* list$1sNode$ph_reset(struct list$1sNode$ph* self);
static struct sSemicolonNode* sSemicolonNode_clone(struct sSemicolonNode* self);
int transpile_block(struct sBlock* block  , struct list$1sType$ph* param_types, struct list$1char$ph* param_names, struct sInfo* info  , _Bool no_var_table, _Bool loop_block, _Bool if_result_value);
static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position);
static struct sType* list$1sType$ph_operator_load_element(struct list$1sType$ph* self, int position);
static int list$1sNode$ph_length(struct list$1sNode$ph* self);
static struct sNode* list$1sNode$ph_begin(struct list$1sNode$ph* self);
static _Bool list$1sNode$ph_end(struct list$1sNode$ph* self);
static struct sNode* list$1sNode$ph_next(struct list$1sNode$ph* self);
static struct list$1sRightValueObject$ph* list$1sRightValueObject$ph_initialize(struct list$1sRightValueObject$ph* self);
static void list$1sRightValueObject$ph$p_finalize(struct list$1sRightValueObject$ph* self);
static void list_item$1sRightValueObject$ph$p_finalize(struct list_item$1sRightValueObject$ph* self);
static void sRightValueObject_finalize(struct sRightValueObject* self  );
static void list$1sRightValueObject$ph_finalize(struct list$1sRightValueObject$ph* self);
static int list$1CVALUE$ph_length(struct list$1CVALUE$ph* self);
static struct list$1sRightValueObject$ph* list$1sRightValueObject$ph_reset(struct list$1sRightValueObject$ph* self);
static struct sVar* list$1sVar$ph_begin(struct list$1sVar$ph* self);
static _Bool list$1sVar$ph_end(struct list$1sVar$ph* self);
static struct sVar* list$1sVar$ph_next(struct list$1sVar$ph* self);
static void list$1sVar$ph_finalize(struct list$1sVar$ph* self);
void arrange_stack(struct sInfo* info  , int top);
char* skip_block(struct sInfo* info  , _Bool return_self_at_last);
void parse_function_attribute_skip_paren(struct sInfo* info  );
struct tuple2$2char$phchar$ph* parse_function_attribute(struct sInfo* info  );
static struct tuple2$2char$phchar$ph* tuple2$2char$phchar$ph_initialize(struct tuple2$2char$phchar$ph* self, char* v1  , char* v2  );
void transpile_toplevel(_Bool block, struct sInfo* info  );
int transpile(struct sInfo* info  );
static struct map$2char$phsFun$ph* map$2char$phsFun$ph_insert(struct map$2char$phsFun$ph* self, char* key  , struct sFun* item  , _Bool by_pointer);
static void map$2char$phsFun$ph_rehash(struct map$2char$phsFun$ph* self);
static char* map$2char$phsFun$ph_begin(struct map$2char$phsFun$ph* self);
static _Bool map$2char$phsFun$ph_end(struct map$2char$phsFun$ph* self);
static char* map$2char$phsFun$ph_next(struct map$2char$phsFun$ph* self);
static struct sFun* map$2char$phsFun$ph_at(struct map$2char$phsFun$ph* self, char* key  , struct sFun* default_value  , _Bool by_pointer);
struct sNode* top_level_v99(char* buf, char* head, int head_sline, struct sInfo* info  );
static struct list$1sType$ph* list$1sType$ph_push_back(struct list$1sType$ph* self, struct sType* item  );
static struct sFunNode* sFunNode_clone(struct sFunNode* self);
static struct sFun* sFun_clone(struct sFun* self  );
static struct list$1sVar$ph* list$1sVar$ph$p_clone(struct list$1sVar$ph* self);
static struct list$1sVar$ph* list$1sVar$ph_initialize(struct list$1sVar$ph* self);
static struct list$1sVar$ph* list$1sVar$ph_add(struct list$1sVar$ph* self, struct sVar* item  );
static struct sVar* sVar_clone(struct sVar* self  );
static struct sBlock* sBlock_clone(struct sBlock* self  );
static struct sVarTable* sVarTable_clone(struct sVarTable* self  );
static struct map$2char$phsVar$ph* map$2char$phsVar$ph$p_clone(struct map$2char$phsVar$ph* self);
static void map$2char$phsVar$ph$p_finalize(struct map$2char$phsVar$ph* self);
static struct map$2char$phsVar$ph* map$2char$phsVar$ph_initialize(struct map$2char$phsVar$ph* self);
static char* map$2char$phsVar$ph_begin(struct map$2char$phsVar$ph* self);
static _Bool map$2char$phsVar$ph_end(struct map$2char$phsVar$ph* self);
static char* map$2char$phsVar$ph_next(struct map$2char$phsVar$ph* self);
static struct sVar* map$2char$phsVar$ph_at(struct map$2char$phsVar$ph* self, char* key  , struct sVar* default_value  , _Bool by_pointer);
static struct map$2char$phsVar$ph* map$2char$phsVar$ph_put(struct map$2char$phsVar$ph* self, char* key  , struct sVar* item  , _Bool by_pointer);
static void map$2char$phsVar$ph_rehash(struct map$2char$phsVar$ph* self);
static void map$2char$phsVar$ph_finalize(struct map$2char$phsVar$ph* self);
struct tuple2$2char$ph_Bool$* create_generics_fun(char* fun_name  , struct sGenericsFun* generics_fun  , struct sType* generics_type  , struct sInfo* info  );
static struct tuple2$2char$ph_Bool$* tuple2$2char$ph_Bool$_initialize(struct tuple2$2char$ph_Bool$* self, char* v1  , _Bool v2);
static void tuple2$2char$ph_Bool$$p_finalize(struct tuple2$2char$ph_Bool$* self);
static struct sType* list$1sType$ph_begin(struct list$1sType$ph* self);
static _Bool list$1sType$ph_end(struct list$1sType$ph* self);
static struct sType* list$1sType$ph_next(struct list$1sType$ph* self);
_Bool create_method_generics_fun(char* fun_name  , struct sGenericsFun* generics_fun  , struct sInfo* info  );
struct sNode* parse_function(struct sInfo* info  );
static void tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$$p_finalize(struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$* self);
static struct sLambdaNode* sLambdaNode_clone(struct sLambdaNode* self);
static struct map$2char$phsGenericsFun$ph* map$2char$phsGenericsFun$ph_insert(struct map$2char$phsGenericsFun$ph* self, char* key  , struct sGenericsFun* item  , _Bool by_pointer);
static void sGenericsFun_finalize(struct sGenericsFun* self  );
static void map$2char$phsGenericsFun$ph_rehash(struct map$2char$phsGenericsFun$ph* self);
static char* map$2char$phsGenericsFun$ph_begin(struct map$2char$phsGenericsFun$ph* self);
static _Bool map$2char$phsGenericsFun$ph_end(struct map$2char$phsGenericsFun$ph* self);
static char* map$2char$phsGenericsFun$ph_next(struct map$2char$phsGenericsFun$ph* self);
static struct sGenericsFun* map$2char$phsGenericsFun$ph_at(struct map$2char$phsGenericsFun$ph* self, char* key  , struct sGenericsFun* default_value  , _Bool by_pointer);
struct tuple2$2sFun$pchar$ph* create_finalizer_automatically(struct sType* type  , const char* fun_name, struct sInfo* info  );
static int list$1sType$ph_length(struct list$1sType$ph* self);
static struct sGenericsFun* map$2char$phsGenericsFun$ph$p_operator_load_element(struct map$2char$phsGenericsFun$ph* self, char* key  );
static struct sGenericsFun* map$2char$phsGenericsFun$ph_operator_load_element(struct map$2char$phsGenericsFun$ph* self, char* key  );
static struct sClass* map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char* key  );
static void sClass_finalize(struct sClass* self  );
static void list$1tuple2$2char$phsType$ph$ph$p_finalize(struct list$1tuple2$2char$phsType$ph$ph* self);
static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self);
static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self);
static struct sClass* map$2char$phsClass$ph_operator_load_element(struct map$2char$phsClass$ph* self, char* key  );
static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_begin(struct list$1tuple2$2char$phsType$ph$ph* self);
static _Bool list$1tuple2$2char$phsType$ph$ph_end(struct list$1tuple2$2char$phsType$ph$ph* self);
static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_next(struct list$1tuple2$2char$phsType$ph$ph* self);
static struct list$1sType$ph* list$1sType$ph_initialize_with_values(struct list$1sType$ph* self, int num_value, struct sType** values  );
static struct list$1char$ph* list$1char$ph_initialize_with_values(struct list$1char$ph* self, int num_value, char** values  );
static struct tuple2$2sFun$pchar$ph* tuple2$2sFun$pchar$ph_initialize(struct tuple2$2sFun$pchar$ph* self, struct sFun* v1  , char* v2  );
static void tuple2$2sFun$pchar$ph$p_finalize(struct tuple2$2sFun$pchar$ph* self);
struct tuple2$2sFun$pchar$ph* create_equals_automatically(struct sType* type  , const char* fun_name, struct sInfo* info  );
struct tuple2$2sFun$pchar$ph* create_operator_not_equals_automatically(struct sType* type  , const char* fun_name, struct sInfo* info  );
static int list$1tuple2$2char$phsType$ph$ph_length(struct list$1tuple2$2char$phsType$ph$ph* self);
struct tuple2$2sFun$pchar$ph* create_not_equals_automatically(struct sType* type  , const char* fun_name, struct sInfo* info  );
struct tuple2$2sFun$pchar$ph* create_operator_equals_automatically(struct sType* type  , const char* fun_name, struct sInfo* info  );
struct tuple2$2sFun$pchar$ph* create_cloner_automatically(struct sType* type  , const char* fun_name, struct sInfo* info  );
struct tuple2$2sFun$pchar$ph* create_to_string_automatically(struct sType* type  , const char* fun_name, struct sInfo* info  );
struct tuple2$2sFun$pchar$ph* create_get_hash_key_automatically(struct sType* type  , const char* fun_name, struct sInfo* info  );
struct sFun* compile_uniq_function(struct sFun* fun  , struct sInfo* info  );
_Bool create_equals_method(struct sType* type  , struct sInfo* info  );
static void list$1CVALUE$ph$p_finalize(struct list$1CVALUE$ph* self);
static void list_item$1CVALUE$ph$p_finalize(struct list_item$1CVALUE$ph* self);
static void list$1CVALUE$ph_finalize(struct list$1CVALUE$ph* self);
_Bool create_operator_equals_method(struct sType* type  , struct sInfo* info  );
_Bool create_operator_not_equals_method(struct sType* type  , struct sInfo* info  );
// uniq global variable
// inline function
static inline unsigned short int __bswap_16(unsigned short int __bsx  )
{
    return ((unsigned short int)((((__bsx)>>8)&0xff)|(((__bsx)&0xff)<<8)));
}
static inline unsigned int __bswap_32(unsigned int __bsx  )
{
    return ((((__bsx)&0xff000000u)>>24)|(((__bsx)&0x00ff0000u)>>8)|(((__bsx)&0x0000ff00u)<<8)|(((__bsx)&0x000000ffu)<<24));
}
static inline unsigned long  int __bswap_64(unsigned long  int __bsx  )
{
    return ((((__bsx)&0xff00000000000000ull)>>56)|(((__bsx)&0x00ff000000000000ull)>>40)|(((__bsx)&0x0000ff0000000000ull)>>24)|(((__bsx)&0x000000ff00000000ull)>>8)|(((__bsx)&0x00000000ff000000ull)<<8)|(((__bsx)&0x0000000000ff0000ull)<<24)|(((__bsx)&0x000000000000ff00ull)<<40)|(((__bsx)&0x00000000000000ffull)<<56));
}
static inline unsigned short int __uint16_identity(unsigned short int __x  )
{
    return __x;
}
static inline unsigned int __uint32_identity(unsigned int __x  )
{
    return __x;
}
static inline unsigned long  int __uint64_identity(unsigned long  int __x  )
{
    return __x;
}

// body function
struct sSemicolonNode* sSemicolonNode_initialize(struct sSemicolonNode* self, struct sInfo* info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sSemicolonNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sSemicolonNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sSemicolonNode*)come_increment_ref_count(self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __result_obj__0 = (struct sSemicolonNode*)come_increment_ref_count(self);
    come_call_finalizer(sSemicolonNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sSemicolonNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char* sSemicolonNode_kind(struct sSemicolonNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sSemicolonNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string("sSemicolonNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool sSemicolonNode_compile(struct sSemicolonNode* self, struct sInfo* info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sSemicolonNode_compile"; neo_current_frame = &fr;
    add_come_code(info,";\n");
    neo_current_frame = fr.prev;
    return (_Bool)1;
    neo_current_frame = fr.prev;
}

static void sNodeBase_finalize(struct sNodeBase* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sNodeBase_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    neo_current_frame = fr.prev;
}

static void sSemicolonNode_finalize(struct sSemicolonNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sSemicolonNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    neo_current_frame = fr.prev;
}

struct sLambdaNode* sLambdaNode_initialize(struct sLambdaNode* self, struct sFun* fun  , struct sInfo* info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sLambdaNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sLambdaNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sLambdaNode*)come_increment_ref_count(self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    self->mFun=fun;
    __result_obj__0 = (struct sLambdaNode*)come_increment_ref_count(self);
    come_call_finalizer(sLambdaNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sLambdaNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char* sLambdaNode_kind(struct sLambdaNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sLambdaNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string("sLambdaNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool sLambdaNode_compile(struct sLambdaNode* self, struct sInfo* info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sLambdaNode_compile"; neo_current_frame = &fr;
    struct sFun* come_fun  ;
    int right_value_max;
    int right_value_num;
    int block_level;
    int max_conditional;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct CVALUE* come_value  ;
    char* __dec_obj1  ;
    struct sType* __dec_obj33  ;
    _Bool __result_obj__0;
    come_fun=info->come_fun;
    info->come_fun=self->mFun;
    right_value_max=info->right_value_max;
    info->right_value_max=0;
    right_value_num=info->right_value_num;
    info->right_value_num=0;
    block_level=info->block_level;
    info->block_level=0;
    max_conditional=info->max_conditional;
    info->max_conditional=0;
    if(!gComeC) {
        add_come_code_at_function_head(info,((char*)(__right_value1=xsprintf("struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = \"\%s\"; neo_current_frame = &fr;\n",((char*)(__right_value0=string_to_string(info->come_fun->mName)))))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
    }
    if(self->mFun->mBlock) {
        transpile_block(self->mFun->mBlock,self->mFun->mParamTypes,self->mFun->mParamNames,info,(_Bool)0,(_Bool)0,(_Bool)0);
    }
    if(!gComeC&&!info->inhibits_output_code2) {
        add_come_code_no_indent(info,"neo_current_frame = fr.prev;\n");
    }
    info->block_level=block_level;
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), (void*)0, 67, "struct CVALUE*"))));
    __dec_obj1=come_value->c_value,
    come_value->c_value=(char*)come_increment_ref_count(xsprintf("%s",self->mFun->mName));
    __dec_obj1 = come_decrement_ref_count(__dec_obj1, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj33=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count(sType_clone(self->mFun->mLambdaType));
    come_call_finalizer(sType_finalize, __dec_obj33,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_value->var=((void*)0);
    add_come_last_code(info,"%s",come_value->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value));
    info->come_fun=come_fun;
    info->right_value_max=right_value_max;
    info->right_value_num=right_value_num;
    info->max_conditional=max_conditional;
    __result_obj__0 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sLambdaNode_finalize(struct sLambdaNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sLambdaNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    neo_current_frame = fr.prev;
}

static struct sType* sType_clone(struct sType* self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sType_clone"; neo_current_frame = &fr;
    struct sType* __result_obj__0  ;
    void* __right_value0 = (void*)0;
    struct sType* result  ;
    struct sType* __dec_obj2  ;
    struct sType* __dec_obj3  ;
    struct list$1sType$ph* __dec_obj7;
    struct sType* __dec_obj8  ;
    struct sNode* __dec_obj9;
    struct sNode* __dec_obj10;
    char* __dec_obj11  ;
    char* __dec_obj12  ;
    char* __dec_obj13  ;
    char* __dec_obj14  ;
    char* __dec_obj15  ;
    char* __dec_obj16  ;
    struct list$1sNode$ph* __dec_obj20;
    struct list$1sNode$ph* __dec_obj21;
    struct list$1int$* __dec_obj22;
    struct list$1int$* __dec_obj23;
    struct sType* __dec_obj24  ;
    char* __dec_obj25  ;
    struct list$1sType$ph* __dec_obj26;
    struct list$1char$ph* __dec_obj30;
    struct sType* __dec_obj31  ;
    struct sNode* __dec_obj32;
    if(self==(void*)0) {
        __result_obj__0 = (struct sType*)come_increment_ref_count((void*)0);
        neo_current_frame = fr.prev;
        come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    result=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), (void*)0, 3, "struct sType*"));
    if(self!=((void*)0)) {
        result->mClass=self->mClass;
    }
    if(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj2=result->mOriginalLoadVarType,
        result->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(sType_clone(self->mOriginalLoadVarType));
        come_call_finalizer(sType_finalize, __dec_obj2,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj3=result->mChannelType,
        result->mChannelType=(struct sType*)come_increment_ref_count(sType_clone(self->mChannelType));
        come_call_finalizer(sType_finalize, __dec_obj3,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj7=result->mGenericsTypes,
        result->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mGenericsTypes));
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj7,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj8=result->mNoSolvedGenericsType,
        result->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(sType_clone(self->mNoSolvedGenericsType));
        come_call_finalizer(sType_finalize, __dec_obj8,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj9=result->mSizeNum,
        result->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        (__dec_obj9 ? __dec_obj9 = come_decrement_ref_count(__dec_obj9, ((struct sNode*)__dec_obj9)->finalize, ((struct sNode*)__dec_obj9)->_protocol_obj, 0,0, (void*)0) :0);
    }
    if(self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj10=result->mAlignas,
        result->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        (__dec_obj10 ? __dec_obj10 = come_decrement_ref_count(__dec_obj10, ((struct sNode*)__dec_obj10)->finalize, ((struct sNode*)__dec_obj10)->_protocol_obj, 0,0, (void*)0) :0);
    }
    if(self!=((void*)0)) {
        result->mAlignasDouble=self->mAlignasDouble;
    }
    if(self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj11=result->mTupleName,
        result->mTupleName=(char*)come_increment_ref_count((char*)come_memdup(self->mTupleName, "sType_clone", 12, "char*"));
        __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj12=result->mAttribute,
        result->mAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mAttribute, "sType_clone", 13, "char*"));
        __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->mVarAttribute!=((void*)0)) {
        __dec_obj13=result->mVarAttribute,
        result->mVarAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mVarAttribute, "sType_clone", 14, "char*"));
        __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0,0, (void*)0);
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
        result->mThread=self->mThread;
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
        __dec_obj14=result->mAnonymousName,
        result->mAnonymousName=(char*)come_increment_ref_count((char*)come_memdup(self->mAnonymousName, "sType_clone", 40, "char*"));
        __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result->mInnerStruct=self->mInnerStruct;
    }
    if(self!=((void*)0)&&self->mInnerStructName!=((void*)0)) {
        __dec_obj15=result->mInnerStructName,
        result->mInnerStructName=(char*)come_increment_ref_count((char*)come_memdup(self->mInnerStructName, "sType_clone", 42, "char*"));
        __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0,0, (void*)0);
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
        __dec_obj16=result->mAsmName,
        result->mAsmName=(char*)come_increment_ref_count((char*)come_memdup(self->mAsmName, "sType_clone", 47, "char*"));
        __dec_obj16 = come_decrement_ref_count(__dec_obj16, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result->mTypedef=self->mTypedef;
    }
    if(self!=((void*)0)) {
        result->mMultipleTypes=self->mMultipleTypes;
    }
    if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj20=result->mArrayNum,
        result->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mArrayNum));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj20,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mVarNameArrayNum!=((void*)0)) {
        __dec_obj21=result->mVarNameArrayNum,
        result->mVarNameArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mVarNameArrayNum));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj21,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mArrayStatic!=((void*)0)) {
        __dec_obj22=result->mArrayStatic,
        result->mArrayStatic=(struct list$1int$*)come_increment_ref_count(list$1int$$p_clone(self->mArrayStatic));
        come_call_finalizer(list$1int$_finalize, __dec_obj22,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mArrayRestrict!=((void*)0)) {
        __dec_obj23=result->mArrayRestrict,
        result->mArrayRestrict=(struct list$1int$*)come_increment_ref_count(list$1int$$p_clone(self->mArrayRestrict));
        come_call_finalizer(list$1int$_finalize, __dec_obj23,(void*)0, (void*)0, 0, 0, 0, (void*)0);
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
        __dec_obj24=result->mTypedefOriginalType,
        result->mTypedefOriginalType=(struct sType*)come_increment_ref_count(sType_clone(self->mTypedefOriginalType));
        come_call_finalizer(sType_finalize, __dec_obj24,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj25=result->mOriginalTypeName,
        result->mOriginalTypeName=(char*)come_increment_ref_count((char*)come_memdup(self->mOriginalTypeName, "sType_clone", 59, "char*"));
        __dec_obj25 = come_decrement_ref_count(__dec_obj25, (void*)0, (void*)0, 0,0, (void*)0);
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
        __dec_obj26=result->mParamTypes,
        result->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mParamTypes));
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj26,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj30=result->mParamNames,
        result->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->mParamNames));
        come_call_finalizer(list$1char$ph_finalize, __dec_obj30,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj31=result->mResultType,
        result->mResultType=(struct sType*)come_increment_ref_count(sType_clone(self->mResultType));
        come_call_finalizer(sType_finalize, __dec_obj31,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)) {
        result->mVarArgs=self->mVarArgs;
    }
    if(self!=((void*)0)&&self->mTypeOfNode!=((void*)0)) {
        __dec_obj32=result->mTypeOfNode,
        result->mTypeOfNode=(struct sNode*)come_increment_ref_count(sNode_clone(self->mTypeOfNode));
        (__dec_obj32 ? __dec_obj32 = come_decrement_ref_count(__dec_obj32, ((struct sNode*)__dec_obj32)->finalize, ((struct sNode*)__dec_obj32)->_protocol_obj, 0,0, (void*)0) :0);
    }
    __result_obj__0 = (struct sType*)come_increment_ref_count(result);
    come_call_finalizer(sType_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static void sType_finalize(struct sType* self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sType_finalize"; neo_current_frame = &fr;
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
    neo_current_frame = fr.prev;
}

static void list$1sType$ph$p_finalize(struct list$1sType$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph$p_finalize"; neo_current_frame = &fr;
    struct list_item$1sType$ph* it;
    struct list_item$1sType$ph* prev_it;
    if(self==((void*)0)) {
        neo_current_frame = fr.prev;
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1sType$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph$p_finalize"; neo_current_frame = &fr;
    struct list_item$1sNode$ph* it;
    struct list_item$1sNode$ph* prev_it;
    if(self==((void*)0)) {
        neo_current_frame = fr.prev;
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1sNode$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        ((self->item) ? self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    neo_current_frame = fr.prev;
}

static void list$1int$$p_finalize(struct list$1int$* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$$p_finalize"; neo_current_frame = &fr;
    struct list_item$1int$* it;
    struct list_item$1int$* prev_it;
    if(self==((void*)0)) {
        neo_current_frame = fr.prev;
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1int$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

static void list_item$1int$$p_finalize(struct list_item$1int$* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1int$$p_finalize"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
}

static void list$1char$ph$p_finalize(struct list$1char$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph$p_finalize"; neo_current_frame = &fr;
    struct list_item$1char$ph* it;
    struct list_item$1char$ph* prev_it;
    if(self==((void*)0)) {
        neo_current_frame = fr.prev;
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1char$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    neo_current_frame = fr.prev;
}

static struct list$1sType$ph* list$1sType$ph$p_clone(struct list$1sType$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph$p_clone"; neo_current_frame = &fr;
    struct list$1sType$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1sType$ph* result;
    struct list_item$1sType$ph* it;
    if(self==((void*)0)) {
        __result_obj__0 = (struct list$1sType$ph*)come_increment_ref_count(((void*)0));
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    result=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), (void*)0, 595, "struct list$1sType$ph*"))));
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
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_initialize"; neo_current_frame = &fr;
    struct list$1sType$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__0 = (struct list$1sType$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1sType$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType* item  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_add"; neo_current_frame = &fr;
    struct list$1sType$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1sType$ph* litem;
    struct sType* __dec_obj4  ;
    struct list_item$1sType$ph* litem_0;
    struct sType* __dec_obj5  ;
    struct list_item$1sType$ph* litem_1;
    struct sType* __dec_obj6  ;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), (void*)0, 616, "struct list_item$1sType$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj4=litem->item,
        litem->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj4,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        litem_0=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), (void*)0, 626, "struct list_item$1sType$ph*"))));
        litem_0->prev=self->head;
        litem_0->next=((void*)0);
        __dec_obj5=litem_0->item,
        litem_0->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj5,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem_0;
        self->head->next=litem_0;
    }
    else {
        litem_1=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), (void*)0, 636, "struct list_item$1sType$ph*"))));
        litem_1->prev=self->tail;
        litem_1->next=((void*)0);
        __dec_obj6=litem_1->item,
        litem_1->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj6,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail->next=litem_1;
        self->tail=litem_1;
    }
    self->len++;
    __result_obj__0 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void list$1sType$ph_finalize(struct list$1sType$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_finalize"; neo_current_frame = &fr;
    struct list_item$1sType$ph* it;
    struct list_item$1sType$ph* prev_it;
    if(self==((void*)0)) {
        neo_current_frame = fr.prev;
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

static struct sNode* sNode_clone(struct sNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sNode_clone"; neo_current_frame = &fr;
    struct sNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sNode* result;
    if(self==(void*)0) {
        __result_obj__0 = (struct sNode*)come_increment_ref_count((void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__0;
    }
    result=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), (void*)0, 3, "struct sNode*"));
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
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    return __result_obj__0;
}

static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph$p_clone"; neo_current_frame = &fr;
    struct list$1sNode$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1sNode$ph* result;
    struct list_item$1sNode$ph* it;
    if(self==((void*)0)) {
        __result_obj__0 = (struct list$1sNode$ph*)come_increment_ref_count(((void*)0));
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    result=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), (void*)0, 595, "struct list$1sNode$ph*"))));
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
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_initialize"; neo_current_frame = &fr;
    struct list$1sNode$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__0 = (struct list$1sNode$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1sNode$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_add"; neo_current_frame = &fr;
    struct list$1sNode$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1sNode$ph* litem;
    struct sNode* __dec_obj17;
    struct list_item$1sNode$ph* litem_2;
    struct sNode* __dec_obj18;
    struct list_item$1sNode$ph* litem_3;
    struct sNode* __dec_obj19;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), (void*)0, 616, "struct list_item$1sNode$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj17=litem->item,
        litem->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj17 ? __dec_obj17 = come_decrement_ref_count(__dec_obj17, ((struct sNode*)__dec_obj17)->finalize, ((struct sNode*)__dec_obj17)->_protocol_obj, 0,0, (void*)0) :0);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        litem_2=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), (void*)0, 626, "struct list_item$1sNode$ph*"))));
        litem_2->prev=self->head;
        litem_2->next=((void*)0);
        __dec_obj18=litem_2->item,
        litem_2->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj18 ? __dec_obj18 = come_decrement_ref_count(__dec_obj18, ((struct sNode*)__dec_obj18)->finalize, ((struct sNode*)__dec_obj18)->_protocol_obj, 0,0, (void*)0) :0);
        self->tail=litem_2;
        self->head->next=litem_2;
    }
    else {
        litem_3=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), (void*)0, 636, "struct list_item$1sNode$ph*"))));
        litem_3->prev=self->tail;
        litem_3->next=((void*)0);
        __dec_obj19=litem_3->item,
        litem_3->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj19 ? __dec_obj19 = come_decrement_ref_count(__dec_obj19, ((struct sNode*)__dec_obj19)->finalize, ((struct sNode*)__dec_obj19)->_protocol_obj, 0,0, (void*)0) :0);
        self->tail->next=litem_3;
        self->tail=litem_3;
    }
    self->len++;
    __result_obj__0 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void list$1sNode$ph_finalize(struct list$1sNode$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_finalize"; neo_current_frame = &fr;
    struct list_item$1sNode$ph* it;
    struct list_item$1sNode$ph* prev_it;
    if(self==((void*)0)) {
        neo_current_frame = fr.prev;
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

static struct list$1int$* list$1int$$p_clone(struct list$1int$* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$$p_clone"; neo_current_frame = &fr;
    struct list$1int$* __result_obj__0;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1int$* result;
    struct list_item$1int$* it;
    if(self==((void*)0)) {
        __result_obj__0 = (struct list$1int$*)come_increment_ref_count(((void*)0));
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    result=(struct list$1int$*)come_increment_ref_count(list$1int$_initialize((struct list$1int$*)come_increment_ref_count((struct list$1int$*)come_calloc(1, sizeof(struct list$1int$)*(1), (void*)0, 595, "struct list$1int$*"))));
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
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct list$1int$* list$1int$_initialize(struct list$1int$* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$_initialize"; neo_current_frame = &fr;
    struct list$1int$* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__0 = (struct list$1int$*)come_increment_ref_count(self);
    come_call_finalizer(list$1int$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct list$1int$* list$1int$_add(struct list$1int$* self, int item)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$_add"; neo_current_frame = &fr;
    struct list$1int$* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1int$* litem;
    struct list_item$1int$* litem_4;
    struct list_item$1int$* litem_5;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), (void*)0, 616, "struct list_item$1int$*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        litem->item=item;
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        litem_4=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), (void*)0, 626, "struct list_item$1int$*"))));
        litem_4->prev=self->head;
        litem_4->next=((void*)0);
        litem_4->item=item;
        self->tail=litem_4;
        self->head->next=litem_4;
    }
    else {
        litem_5=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), (void*)0, 636, "struct list_item$1int$*"))));
        litem_5->prev=self->tail;
        litem_5->next=((void*)0);
        litem_5->item=item;
        self->tail->next=litem_5;
        self->tail=litem_5;
    }
    self->len++;
    __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void list$1int$_finalize(struct list$1int$* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$_finalize"; neo_current_frame = &fr;
    struct list_item$1int$* it;
    struct list_item$1int$* prev_it;
    if(self==((void*)0)) {
        neo_current_frame = fr.prev;
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1int$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph$p_clone"; neo_current_frame = &fr;
    struct list$1char$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1char$ph* result;
    struct list_item$1char$ph* it;
    if(self==((void*)0)) {
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(((void*)0));
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    result=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), (void*)0, 595, "struct list$1char$ph*"))));
    it=self->head;
    while(it!=((void*)0)) {
        if(1) {
            list$1char$ph_add(result,(char*)come_increment_ref_count((char*)come_memdup(it->item, "/usr/local/include/neo-c.h", 600, "char*")));
        }
        else {
            list$1char$ph_add(result,(char*)come_increment_ref_count((char*)come_memdup(it->item, "/usr/local/include/neo-c.h", 603, "char*")));
        }
        it=it->next;
    }
    __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(result);
    come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_initialize"; neo_current_frame = &fr;
    struct list$1char$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char* item  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_add"; neo_current_frame = &fr;
    struct list$1char$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1char$ph* litem;
    char* __dec_obj27  ;
    struct list_item$1char$ph* litem_6;
    char* __dec_obj28  ;
    struct list_item$1char$ph* litem_7;
    char* __dec_obj29  ;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), (void*)0, 616, "struct list_item$1char$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj27=litem->item,
        litem->item=(char*)come_increment_ref_count(item);
        __dec_obj27 = come_decrement_ref_count(__dec_obj27, (void*)0, (void*)0, 0,0, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        litem_6=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), (void*)0, 626, "struct list_item$1char$ph*"))));
        litem_6->prev=self->head;
        litem_6->next=((void*)0);
        __dec_obj28=litem_6->item,
        litem_6->item=(char*)come_increment_ref_count(item);
        __dec_obj28 = come_decrement_ref_count(__dec_obj28, (void*)0, (void*)0, 0,0, (void*)0);
        self->tail=litem_6;
        self->head->next=litem_6;
    }
    else {
        litem_7=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), (void*)0, 636, "struct list_item$1char$ph*"))));
        litem_7->prev=self->tail;
        litem_7->next=((void*)0);
        __dec_obj29=litem_7->item,
        litem_7->item=(char*)come_increment_ref_count(item);
        __dec_obj29 = come_decrement_ref_count(__dec_obj29, (void*)0, (void*)0, 0,0, (void*)0);
        self->tail->next=litem_7;
        self->tail=litem_7;
    }
    self->len++;
    __result_obj__0 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void list$1char$ph_finalize(struct list$1char$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_finalize"; neo_current_frame = &fr;
    struct list_item$1char$ph* it;
    struct list_item$1char$ph* prev_it;
    if(self==((void*)0)) {
        neo_current_frame = fr.prev;
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1CVALUE$ph_push_back"; neo_current_frame = &fr;
    struct list$1CVALUE$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1CVALUE$ph* litem;
    struct CVALUE* __dec_obj34  ;
    struct list_item$1CVALUE$ph* litem_8;
    struct CVALUE* __dec_obj35  ;
    struct list_item$1CVALUE$ph* litem_9;
    struct CVALUE* __dec_obj36  ;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), (void*)0, 701, "struct list_item$1CVALUE$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj34=litem->item,
        litem->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj34,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        litem_8=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), (void*)0, 711, "struct list_item$1CVALUE$ph*"))));
        litem_8->prev=self->head;
        litem_8->next=((void*)0);
        __dec_obj35=litem_8->item,
        litem_8->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj35,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem_8;
        self->head->next=litem_8;
    }
    else {
        litem_9=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), (void*)0, 721, "struct list_item$1CVALUE$ph*"))));
        litem_9->prev=self->tail;
        litem_9->next=((void*)0);
        __dec_obj36=litem_9->item,
        litem_9->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj36,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail->next=litem_9;
        self->tail=litem_9;
    }
    self->len++;
    __result_obj__0 = self;
    come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void CVALUE_finalize(struct CVALUE* self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "CVALUE_finalize"; neo_current_frame = &fr;
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
    neo_current_frame = fr.prev;
}

struct sRawCodeNode* sRawCodeNode_initialize(struct sRawCodeNode* self, char* code  , struct sInfo* info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sRawCodeNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char* __dec_obj37  ;
    struct sRawCodeNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sRawCodeNode*)come_increment_ref_count(self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj37=self->mCode,
    self->mCode=(char*)come_increment_ref_count(__builtin_string(code));
    __dec_obj37 = come_decrement_ref_count(__dec_obj37, (void*)0, (void*)0, 0,0, (void*)0);
    __result_obj__0 = (struct sRawCodeNode*)come_increment_ref_count(self);
    come_call_finalizer(sRawCodeNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    (code = come_decrement_ref_count(code, (void*)0, (void*)0, 0, 0, (void*)0));
    neo_current_frame = fr.prev;
    come_call_finalizer(sRawCodeNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

_Bool sRawCodeNode_terminated(struct sRawCodeNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sRawCodeNode_terminated"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return (_Bool)1;
    neo_current_frame = fr.prev;
}

char* sRawCodeNode_kind(struct sRawCodeNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sRawCodeNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string("sRawCodeNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool sRawCodeNode_compile(struct sRawCodeNode* self, struct sInfo* info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sRawCodeNode_compile"; neo_current_frame = &fr;
    add_come_code(info,"%s\n",self->mCode);
    neo_current_frame = fr.prev;
    return (_Bool)1;
    neo_current_frame = fr.prev;
}

static void sRawCodeNode_finalize(struct sRawCodeNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sRawCodeNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->mCode!=((void*)0)) {
        (self->mCode = come_decrement_ref_count(self->mCode, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    neo_current_frame = fr.prev;
}

struct sFunNode* sFunNode_initialize(struct sFunNode* self, struct sFun* fun  , struct sInfo* info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sFunNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sFun* __dec_obj38  ;
    struct sFunNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sFunNode*)come_increment_ref_count(self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj38=self->mFun,
    self->mFun=(struct sFun*)come_increment_ref_count(fun);
    come_call_finalizer(sFun_finalize, __dec_obj38,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __result_obj__0 = (struct sFunNode*)come_increment_ref_count(self);
    come_call_finalizer(sFunNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sFun_finalize, fun, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sFunNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char* sFunNode_kind(struct sFunNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sFunNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string("sFunNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool sFunNode_compile(struct sFunNode* self, struct sInfo* info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sFunNode_compile"; neo_current_frame = &fr;
    struct sFun* come_fun  ;
    int right_value_num;
    int right_value_max;
    int max_conditional;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    void* __right_value2 = (void*)0;
    _Bool _conditional_value_X0;
    int block_level;
    _Bool _conditional_value_X1;
    come_fun=info->come_fun;
    info->come_fun=self->mFun;
    info->come_fun->mDefineReturnVar=(_Bool)0;
    right_value_num=info->right_value_num;
    info->right_value_num=0;
    right_value_max=info->right_value_max;
    info->right_value_max=0;
    max_conditional=info->max_conditional;
    info->max_conditional=0;
    if(self->mFun->mBlock) {
        if(({(_conditional_value_X0=(!gComeC&&string_operator_equals(info->come_fun->mName,"main")&&((struct sFun*)(__right_value2=map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value1=xsprintf("come_heap_init"))))))));        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        come_call_finalizer(sFun_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
_conditional_value_X0;})) {
            add_come_code(info,"    come_heap_init(%d);\n",gComeDebug);
            add_come_code(info,((char*)(__right_value1=xsprintf("    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = \"\%s\"; neo_current_frame = &fr;\n",((char*)(__right_value0=string_to_string(info->come_fun->mName)))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        else if(!gComeC) {
            add_come_code_at_function_head(info,((char*)(__right_value1=xsprintf("struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = \"\%s\"; neo_current_frame = &fr;\n",((char*)(__right_value0=string_to_string(info->come_fun->mName)))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        block_level=info->block_level;
        info->block_level=0;
        transpile_block(self->mFun->mBlock,self->mFun->mParamTypes,self->mFun->mParamNames,info,(_Bool)0,(_Bool)0,(_Bool)0);
        info->block_level=block_level;
        if(!gComeC&&!info->inhibits_output_code2) {
            add_come_code_no_indent(info,"neo_current_frame = fr.prev;\n");
        }
        if(({(_conditional_value_X1=(!gComeC&&string_operator_equals(info->come_fun->mName,"main")&&!info->inhibits_output_code2&&((struct sFun*)(__right_value2=map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value1=xsprintf("come_heap_final"))))))));        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        come_call_finalizer(sFun_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
_conditional_value_X1;})) {
            free_objects(info->gv_table,((void*)0),info);
            add_come_code(info,((char*)(__right_value0=xsprintf("come_heap_final();\n"))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        }
    }
    info->come_fun=come_fun;
    info->right_value_max=right_value_max;
    info->right_value_num=right_value_num;
    info->max_conditional=max_conditional;
    neo_current_frame = fr.prev;
    return (_Bool)1;
    neo_current_frame = fr.prev;
}

static void sFun_finalize(struct sFun* self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sFun_finalize"; neo_current_frame = &fr;
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
    neo_current_frame = fr.prev;
}

static void list$1sVar$ph$p_finalize(struct list$1sVar$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sVar$ph$p_finalize"; neo_current_frame = &fr;
    struct list_item$1sVar$ph* it;
    struct list_item$1sVar$ph* prev_it;
    if(self==((void*)0)) {
        neo_current_frame = fr.prev;
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sVar$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

static void list_item$1sVar$ph$p_finalize(struct list_item$1sVar$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1sVar$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer(sVar_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

static void sVar_finalize(struct sVar* self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sVar_finalize"; neo_current_frame = &fr;
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
    neo_current_frame = fr.prev;
}

static void sBlock_finalize(struct sBlock* self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sBlock_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->mNodes!=((void*)0)) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mNodes, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        come_call_finalizer(sVarTable_finalize, self->mVarTable, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

static void sFunNode_finalize(struct sFunNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sFunNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->mFun!=((void*)0)) {
        come_call_finalizer(sFun_finalize, self->mFun, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

static struct sFun* map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char* key  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsFun$ph$p_operator_load_element"; neo_current_frame = &fr;
    struct sFun* default_value  ;
    struct sFun* __result_obj__0  ;
    unsigned int hash;
    unsigned int it;
    memset(&default_value,0,sizeof(struct sFun*));
    if(self==((void*)0)) {
        __result_obj__0 = (struct sFun*)come_increment_ref_count(default_value);
        come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        neo_current_frame = fr.prev;
        come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if(string_equals(self->keys[it],key)) {
                __result_obj__0 = (struct sFun*)come_increment_ref_count(self->items[it]);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                neo_current_frame = fr.prev;
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
                neo_current_frame = fr.prev;
                come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
        }
        else {
            __result_obj__0 = (struct sFun*)come_increment_ref_count(default_value);
            come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            neo_current_frame = fr.prev;
            come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__0;
        }
    }
    __result_obj__0 = (struct sFun*)come_increment_ref_count(default_value);
    come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct sFun* map$2char$phsFun$ph_operator_load_element(struct map$2char$phsFun$ph* self, char* key  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsFun$ph_operator_load_element"; neo_current_frame = &fr;
    struct sFun* default_value  ;
    struct sFun* __result_obj__0  ;
    unsigned int hash;
    unsigned int it;
    memset(&default_value,0,sizeof(struct sFun*));
    if(self==((void*)0)) {
        __result_obj__0 = (struct sFun*)come_increment_ref_count(default_value);
        come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        neo_current_frame = fr.prev;
        come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if(string_equals(self->keys[it],key)) {
                __result_obj__0 = (struct sFun*)come_increment_ref_count(self->items[it]);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                neo_current_frame = fr.prev;
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
                neo_current_frame = fr.prev;
                come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
        }
        else {
            __result_obj__0 = (struct sFun*)come_increment_ref_count(default_value);
            come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            neo_current_frame = fr.prev;
            come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__0;
        }
    }
    __result_obj__0 = (struct sFun*)come_increment_ref_count(default_value);
    come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

struct sBlock* parse_block(struct sInfo* info  , _Bool return_self_at_last, _Bool in_function)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "parse_block"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct sBlock* result;
    int sline_top;
    int block_level;
    char* p_saved;
    int sline_saved;
    char* sname_saved  ;
    char* __dec_obj39  ;
    char* __dec_obj40  ;
    struct map$2char$phchar$ph* __dec_obj41;
    char* p;
    int sline;
    char* sname  ;
    char* module_name  ;
    struct list$1char$ph* params;
    char* word  ;
    char* __dec_obj42  ;
    char* __dec_obj43  ;
    void* __right_value2 = (void*)0;
    _Bool _conditional_value_X0;
    struct sBlock* __result_obj__0  ;
    struct sClassModule* module  ;
    struct map$2char$phchar$ph* __dec_obj45;
    int i;
    struct list$1char$ph* o2_saved;
    char* it  ;
    void* __right_value3 = (void*)0;
    void* __right_value4 = (void*)0;
    void* __right_value5 = (void*)0;
    char* __dec_obj49  ;
    struct sNode* node;
    struct sNode* nested_fun;
    char* head;
    int head_sline;
    char* head_sname  ;
    char* p0;
    int sline0;
    char* word_27  ;
    _Bool is_type;
    _Bool no_output_come_code;
    struct tuple3$3sType$phchar$ph_Bool$* multiple_assign_var1
;    struct sType* type  =0;
    char* name  =0;
    _Bool err=0;
    struct tuple2$2char$phchar$ph* multiple_assign_var2
;    char* asm_name  =0;
    char* fun_attr  =0;
    char* block  ;
    char* tail;
    struct buffer* buf  ;
    struct sNode* _inf_value1;
    struct sRawCodeNode* _inf_obj_value1;
    struct sNode* __dec_obj52;
    struct sNode* __dec_obj53;
    char* __dec_obj54  ;
    struct sNode* __dec_obj55;
    char* __dec_obj56  ;
    _Bool omit_semicolon;
    char* __dec_obj60  ;
    char* head_36;
    struct sNode* value;
    char* tail_37;
    struct sNode* __dec_obj61;
    struct sNode* node_39;
    char* __dec_obj62  ;
    struct sNode* node_40;
    struct sNode* _inf_value2;
    struct sSemicolonNode* _inf_obj_value2;
    struct sNode* __dec_obj64;
    struct sNode* __dec_obj65;
    _Bool omit_semicolon_41;
    char* p_42;
    char* head_43;
    char* source  ;
    struct sNode* node_44;
    memset(&node_40, 0, sizeof(node_40));
    result=(struct sBlock*)come_increment_ref_count(sBlock_initialize((struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), (void*)0, 183, "struct sBlock*"))));
    sline_top=info->sline_top;
    info->sline_top=info->sline;
    block_level=info->block_level;
    info->block_level++;
    if(*info->p==123) {
        p_saved=((void*)0);
        sline_saved=0;
        sname_saved=((void*)0);
        info->p++;
        skip_spaces_and_lf(info);
        while((_Bool)1) {
            if(p_saved) {
                if(*info->p==0) {
                    info->p=p_saved;
                    info->sline=sline_saved;
                    __dec_obj39=info->sname,
                    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_saved));
                    __dec_obj39 = come_decrement_ref_count(__dec_obj39, (void*)0, (void*)0, 0,0, (void*)0);
                    p_saved=((void*)0);
                    sline_saved=0;
                    __dec_obj40=sname_saved,
                    sname_saved=((void*)0);
                    __dec_obj40 = come_decrement_ref_count(__dec_obj40, (void*)0, (void*)0, 0,0, (void*)0);
                    __dec_obj41=info->module_params,
                    info->module_params=((void*)0);
                    come_call_finalizer(map$2char$phchar$ph_finalize, __dec_obj41,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            skip_spaces_and_lf(info);
            if(*info->p==125) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            while(*info->p==59) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            skip_spaces_and_lf(info);
            p=info->p;
            sline=info->sline;
            sname=(char*)come_increment_ref_count(__builtin_string(info->sname));
            if(*info->p==123) {
                info->sline_top=sline;
            }
            if(strncmp(info->p,"include ",strlen("include "))==0) {
                ((char*)(__right_value0=parse_word((_Bool)0,info)));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                module_name=(char*)come_increment_ref_count(parse_word((_Bool)0,info));
                params=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), (void*)0, 238, "struct list$1char$ph*"))));
                if(*info->p==60) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    while((_Bool)1) {
                        word=(char*)come_increment_ref_count(parse_word((_Bool)0,info));
                        list$1char$ph_add(params,(char*)come_increment_ref_count(word));
                        if(*info->p==44) {
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        else if(*info->p==0) {
                            err_msg(info,"invalid source end");
                            exit(2);
                        }
                        else if(*info->p==62) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            (word = come_decrement_ref_count(word, (void*)0, (void*)0, 0, 0, (void*)0));
                            break;
                        }
                        else {
                            err_msg(info,"invalid charactor(%c)",*info->p);
                            exit(2);
                        }
                        (word = come_decrement_ref_count(word, (void*)0, (void*)0, 0, 0, (void*)0));
                    }
                }
                if(*info->p==59) {
                    info->p++;
                }
                skip_spaces_and_lf(info);
                p_saved=info->p;
                sline_saved=info->sline;
                __dec_obj42=sname_saved,
                sname_saved=(char*)come_increment_ref_count(__builtin_string(info->sname));
                __dec_obj42 = come_decrement_ref_count(__dec_obj42, (void*)0, (void*)0, 0,0, (void*)0);
                __dec_obj43=info->sname,
                info->sname=(char*)come_increment_ref_count(__builtin_string(module_name));
                __dec_obj43 = come_decrement_ref_count(__dec_obj43, (void*)0, (void*)0, 0,0, (void*)0);
                info->sline=0;
                if(({(_conditional_value_X0=(((struct sClassModule*)(__right_value2=map$2char$phsClassModule$ph_operator_load_element(info->modules,((char*)(__right_value1=__builtin_string(module_name))))))==((void*)0)));                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
                come_call_finalizer(sClassModule_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
_conditional_value_X0;})) {
                    err_msg(info,"module not found");
                    __result_obj__0 = (struct sBlock*)come_increment_ref_count(((void*)0));
                    (module_name = come_decrement_ref_count(module_name, (void*)0, (void*)0, 0, 0, (void*)0));
                    come_call_finalizer(list$1char$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    (sname = come_decrement_ref_count(sname, (void*)0, (void*)0, 0, 0, (void*)0));
                    (sname_saved = come_decrement_ref_count(sname_saved, (void*)0, (void*)0, 0, 0, (void*)0));
                    come_call_finalizer(sBlock_finalize, result, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    neo_current_frame = fr.prev;
                    come_call_finalizer(sBlock_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                    return __result_obj__0;
                }
                module=((struct sClassModule*)(__right_value2=map$2char$phsClassModule$ph_operator_load_element(info->modules,((char*)(__right_value1=__builtin_string(module_name))))));
                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
                if(list$1char$ph_length(module->mParams)!=list$1char$ph_length(params)) {
                    err_msg(info,"invalid parametor number");
                    __result_obj__0 = (struct sBlock*)come_increment_ref_count(((void*)0));
                    (module_name = come_decrement_ref_count(module_name, (void*)0, (void*)0, 0, 0, (void*)0));
                    come_call_finalizer(list$1char$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    (sname = come_decrement_ref_count(sname, (void*)0, (void*)0, 0, 0, (void*)0));
                    (sname_saved = come_decrement_ref_count(sname_saved, (void*)0, (void*)0, 0, 0, (void*)0));
                    come_call_finalizer(sBlock_finalize, result, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    neo_current_frame = fr.prev;
                    come_call_finalizer(sBlock_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                    return __result_obj__0;
                }
                __dec_obj45=info->module_params,
                info->module_params=(struct map$2char$phchar$ph*)come_increment_ref_count(map$2char$phchar$ph_initialize((struct map$2char$phchar$ph*)come_increment_ref_count((struct map$2char$phchar$ph*)come_calloc(1, sizeof(struct map$2char$phchar$ph)*(1), (void*)0, 292, "struct map$2char$phchar$ph*"))));
                come_call_finalizer(map$2char$phchar$ph_finalize, __dec_obj45,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                i=0;
                for(o2_saved=(struct list$1char$ph*)come_increment_ref_count(module->mParams),it=list$1char$ph_begin(o2_saved);!list$1char$ph_end(o2_saved);it=list$1char$ph_next(o2_saved)){
                    map$2char$phchar$ph_operator_store_element(info->module_params,(char*)come_increment_ref_count(__builtin_string(it)),(char*)come_increment_ref_count(__builtin_string(((char*)(__right_value4=list$1char$ph_operator_load_element(params,i))))));
                    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
                    (__right_value4 = come_decrement_ref_count(__right_value4, (void*)0, (void*)0, 1, 0, (void*)0));
                    i++;
                }
                come_call_finalizer(list$1char$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                info->p=module->mText;
                info->sline=module->mSLine;
                __dec_obj49=info->sname,
                info->sname=(char*)come_increment_ref_count(__builtin_string(module->mSName));
                __dec_obj49 = come_decrement_ref_count(__dec_obj49, (void*)0, (void*)0, 0,0, (void*)0);
                (module_name = come_decrement_ref_count(module_name, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(list$1char$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            node=((void*)0);
            if(in_function) {
                nested_fun=((void*)0);
                head=info->p;
                head_sline=info->sline;
                head_sname=(char*)come_increment_ref_count(__builtin_string(info->sname));
                if(xisalpha(*info->p)||*info->p==95) {
                    p0=info->p;
                    sline0=info->sline;
                    word_27=(char*)come_increment_ref_count(parse_word((_Bool)0,info));
                    is_type=is_type_name(word_27,info);
                    info->p=p0;
                    info->sline=sline0;
                    if(is_type) {
                        no_output_come_code=info->no_output_come_code;
                        info->no_output_come_code=(_Bool)1;
                        multiple_assign_var1=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
                        type=(struct sType*)come_increment_ref_count(multiple_assign_var1->v1);
                        name=(char*)come_increment_ref_count(multiple_assign_var1->v2);
                        err=multiple_assign_var1->v3;
                        come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                        skip_spaces_and_lf(info);
                        if(err&&*info->p==40) {
                            ((char*)(__right_value0=skip_paren(info)));
                            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                            skip_spaces_and_lf(info);
                            multiple_assign_var2=((struct tuple2$2char$phchar$ph*)(__right_value0=parse_function_attribute(info)));
                            asm_name=(char*)come_increment_ref_count(multiple_assign_var2->v1);
                            fun_attr=(char*)come_increment_ref_count(multiple_assign_var2->v2);
                            come_call_finalizer(tuple2$2char$phchar$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                            skip_spaces_and_lf(info);
                            if(*info->p==123) {
                                block=(char*)come_increment_ref_count(skip_block(info,(_Bool)0));
                                tail=info->p;
                                buf=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), (void*)0, 338, "struct buffer*"))));
                                buffer_append(buf,head,tail-head);
                                _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 341, "struct sNode");
                                _inf_obj_value1=(struct sRawCodeNode*)come_increment_ref_count(((struct sRawCodeNode*)(__right_value2=sRawCodeNode_initialize((struct sRawCodeNode*)come_increment_ref_count((struct sRawCodeNode*)come_calloc(1, sizeof(struct sRawCodeNode)*(1), (void*)0, 341, "struct sRawCodeNode*")),(char*)come_increment_ref_count(buffer_to_string(buf)),info))));
                                _inf_value1->_protocol_obj=_inf_obj_value1;
                                _inf_value1->finalize=(void*)sRawCodeNode_finalize;
                                _inf_value1->clone=(void*)sRawCodeNode_clone;
                                _inf_value1->compile=(void*)sRawCodeNode_compile;
                                _inf_value1->sline=(void*)sNodeBase_sline;
                                _inf_value1->sline_real=(void*)sNodeBase_sline_real;
                                _inf_value1->sname=(void*)sNodeBase_sname;
                                _inf_value1->terminated=(void*)sRawCodeNode_terminated;
                                _inf_value1->kind=(void*)sRawCodeNode_kind;
                                _inf_value1->no_mutex=(void*)sNodeBase_no_mutex;
                                __dec_obj52=nested_fun,
                                nested_fun=(struct sNode*)come_increment_ref_count(_inf_value1);
                                (__dec_obj52 ? __dec_obj52 = come_decrement_ref_count(__dec_obj52, ((struct sNode*)__dec_obj52)->finalize, ((struct sNode*)__dec_obj52)->_protocol_obj, 0,0, (void*)0) :0);
                                come_call_finalizer(sRawCodeNode_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                (block = come_decrement_ref_count(block, (void*)0, (void*)0, 0, 0, (void*)0));
                                come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            (asm_name = come_decrement_ref_count(asm_name, (void*)0, (void*)0, 0, 0, (void*)0));
                            (fun_attr = come_decrement_ref_count(fun_attr, (void*)0, (void*)0, 0, 0, (void*)0));
                        }
                        info->no_output_come_code=no_output_come_code;
                        come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
                    }
                    (word_27 = come_decrement_ref_count(word_27, (void*)0, (void*)0, 0, 0, (void*)0));
                }
                if(nested_fun) {
                    __dec_obj53=node,
                    node=(struct sNode*)come_increment_ref_count(nested_fun);
                    (__dec_obj53 ? __dec_obj53 = come_decrement_ref_count(__dec_obj53, ((struct sNode*)__dec_obj53)->finalize, ((struct sNode*)__dec_obj53)->_protocol_obj, 0,0, (void*)0) :0);
                }
                else {
                    info->p=head;
                    info->sline=head_sline;
                    __dec_obj54=info->sname,
                    info->sname=(char*)come_increment_ref_count(__builtin_string(head_sname));
                    __dec_obj54 = come_decrement_ref_count(__dec_obj54, (void*)0, (void*)0, 0,0, (void*)0);
                }
                ((nested_fun) ? nested_fun = come_decrement_ref_count(nested_fun, ((struct sNode*)nested_fun)->finalize, ((struct sNode*)nested_fun)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                (head_sname = come_decrement_ref_count(head_sname, (void*)0, (void*)0, 0, 0, (void*)0));
            }
            if(node==((void*)0)) {
                __dec_obj55=node,
                node=(struct sNode*)come_increment_ref_count(statment(info));
                (__dec_obj55 ? __dec_obj55 = come_decrement_ref_count(__dec_obj55, ((struct sNode*)__dec_obj55)->finalize, ((struct sNode*)__dec_obj55)->_protocol_obj, 0,0, (void*)0) :0);
            }
            __dec_obj56=info->sname,
            info->sname=(char*)come_increment_ref_count(node->sname(node->_protocol_obj));
            __dec_obj56 = come_decrement_ref_count(__dec_obj56, (void*)0, (void*)0, 0,0, (void*)0);
            info->sline=node->sline(node->_protocol_obj);
            if(node==((void*)0)) {
                err_msg(info,"Invalid expression");
                __result_obj__0 = (struct sBlock*)come_increment_ref_count(((void*)0));
                (sname = come_decrement_ref_count(sname, (void*)0, (void*)0, 0, 0, (void*)0));
                ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                (sname_saved = come_decrement_ref_count(sname_saved, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(sBlock_finalize, result, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                neo_current_frame = fr.prev;
                come_call_finalizer(sBlock_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
            list$1sNode$ph_push_back(result->mNodes,(struct sNode*)come_increment_ref_count(node));
            skip_spaces_and_lf(info);
            if(node->terminated(node->_protocol_obj)) {
                skip_spaces_and_lf(info);
            }
            omit_semicolon=(_Bool)1;
            if(node->terminated(node->_protocol_obj)) {
                omit_semicolon=(_Bool)0;
            }
            while(*info->p==59) {
                info->p++;
                skip_spaces_and_lf(info);
                omit_semicolon=(_Bool)0;
            }
            skip_spaces_and_lf(info);
            if(*info->p==125) {
                result->mOmitSemicolon=omit_semicolon;
                if(omit_semicolon&&in_function) {
                    list$1sNode$ph_delete(result->mNodes,-1,-1);
                    dec_stack_ptr(1,info);
                    info->p=p;
                    info->sline=sline;
                    __dec_obj60=info->sname,
                    info->sname=(char*)come_increment_ref_count(__builtin_string(sname));
                    __dec_obj60 = come_decrement_ref_count(__dec_obj60, (void*)0, (void*)0, 0,0, (void*)0);
                    head_36=info->p;
                    value=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0));
                    tail_37=info->p;
                    __dec_obj61=value,
                    value=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(value),info));
                    (__dec_obj61 ? __dec_obj61 = come_decrement_ref_count(__dec_obj61, ((struct sNode*)__dec_obj61)->finalize, ((struct sNode*)__dec_obj61)->_protocol_obj, 0,0, (void*)0) :0);
                    char buf_38[tail_37-head_36+1];
                    memset(&buf_38, 0, sizeof(buf_38));
                    memcpy(buf_38,head_36,tail_37-head_36);
                    buf_38[tail_37-head_36]=0;
                    expected_next_character(125,info);
                    node_39=(struct sNode*)come_increment_ref_count(create_return_node((struct sNode*)come_increment_ref_count(value),(char*)come_increment_ref_count(__builtin_string(buf_38)),info));
                    list$1sNode$ph_push_back(result->mNodes,(struct sNode*)come_increment_ref_count(node_39));
                    ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                    ((node_39) ? node_39 = come_decrement_ref_count(node_39, ((struct sNode*)node_39)->finalize, ((struct sNode*)node_39)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                    (sname = come_decrement_ref_count(sname, (void*)0, (void*)0, 0, 0, (void*)0));
                    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                    break;
                    ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                    ((node_39) ? node_39 = come_decrement_ref_count(node_39, ((struct sNode*)node_39)->finalize, ((struct sNode*)node_39)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                }
                else {
                    info->p++;
                    skip_spaces_and_lf(info);
                    (sname = come_decrement_ref_count(sname, (void*)0, (void*)0, 0, 0, (void*)0));
                    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                    break;
                }
            }
            (sname = come_decrement_ref_count(sname, (void*)0, (void*)0, 0, 0, (void*)0));
            ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
        if(p_saved) {
            if(info->p==0) {
                info->p=p_saved;
                info->sline=sline_saved;
                __dec_obj62=info->sname,
                info->sname=(char*)come_increment_ref_count(__builtin_string(sname_saved));
                __dec_obj62 = come_decrement_ref_count(__dec_obj62, (void*)0, (void*)0, 0,0, (void*)0);
                p_saved=((void*)0);
                sline_saved=0;
            }
        }
        (sname_saved = come_decrement_ref_count(sname_saved, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    else {
        info->sline_block=info->sline;
        skip_spaces_and_lf(info);
        if(*info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
            _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 449, "struct sNode");
            _inf_obj_value2=(struct sSemicolonNode*)come_increment_ref_count(((struct sSemicolonNode*)(__right_value1=sSemicolonNode_initialize((struct sSemicolonNode*)come_increment_ref_count((struct sSemicolonNode*)come_calloc(1, sizeof(struct sSemicolonNode)*(1), (void*)0, 449, "struct sSemicolonNode*")),info))));
            _inf_value2->_protocol_obj=_inf_obj_value2;
            _inf_value2->finalize=(void*)sSemicolonNode_finalize;
            _inf_value2->clone=(void*)sSemicolonNode_clone;
            _inf_value2->compile=(void*)sSemicolonNode_compile;
            _inf_value2->sline=(void*)sNodeBase_sline;
            _inf_value2->sline_real=(void*)sNodeBase_sline_real;
            _inf_value2->sname=(void*)sNodeBase_sname;
            _inf_value2->terminated=(void*)sNodeBase_terminated;
            _inf_value2->kind=(void*)sSemicolonNode_kind;
            _inf_value2->no_mutex=(void*)sNodeBase_no_mutex;
            __dec_obj64=node_40,
            node_40=(struct sNode*)come_increment_ref_count(_inf_value2);
            (__dec_obj64 ? __dec_obj64 = come_decrement_ref_count(__dec_obj64, ((struct sNode*)__dec_obj64)->finalize, ((struct sNode*)__dec_obj64)->_protocol_obj, 0,0, (void*)0) :0);
            come_call_finalizer(sSemicolonNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            list$1sNode$ph_push_back(result->mNodes,(struct sNode*)come_increment_ref_count(node_40));
        }
        else {
            __dec_obj65=node_40,
            node_40=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0));
            (__dec_obj65 ? __dec_obj65 = come_decrement_ref_count(__dec_obj65, ((struct sNode*)__dec_obj65)->finalize, ((struct sNode*)__dec_obj65)->_protocol_obj, 0,0, (void*)0) :0);
            skip_spaces_and_lf(info);
            if(node_40==((void*)0)) {
                err_msg(info,"Invalid expression");
                __result_obj__0 = (struct sBlock*)come_increment_ref_count(((void*)0));
                ((node_40) ? node_40 = come_decrement_ref_count(node_40, ((struct sNode*)node_40)->finalize, ((struct sNode*)node_40)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                come_call_finalizer(sBlock_finalize, result, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                neo_current_frame = fr.prev;
                come_call_finalizer(sBlock_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
            skip_spaces_and_lf(info);
            if(node_40->terminated(node_40->_protocol_obj)) {
                skip_spaces_and_lf(info);
            }
            omit_semicolon_41=(_Bool)1;
            if(node_40->terminated(node_40->_protocol_obj)) {
                omit_semicolon_41=(_Bool)0;
            }
            while(*info->p==59) {
                info->p++;
                skip_spaces_and_lf(info);
                omit_semicolon_41=(_Bool)0;
            }
            skip_spaces_and_lf(info);
            result->mOmitSemicolon=omit_semicolon_41;
            list$1sNode$ph_push_back(result->mNodes,(struct sNode*)come_increment_ref_count(node_40));
        }
        ((node_40) ? node_40 = come_decrement_ref_count(node_40, ((struct sNode*)node_40)->finalize, ((struct sNode*)node_40)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    if(return_self_at_last) {
        p_42=info->p;
        head_43=info->head;
        source=(char*)come_increment_ref_count(__builtin_string("return self;"));
        info->p=source;
        info->head=source;
        node_44=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0));
        if(node_44==((void*)0)) {
            err_msg(info,"Invalid expression");
            __result_obj__0 = (struct sBlock*)come_increment_ref_count(((void*)0));
            (source = come_decrement_ref_count(source, (void*)0, (void*)0, 0, 0, (void*)0));
            ((node_44) ? node_44 = come_decrement_ref_count(node_44, ((struct sNode*)node_44)->finalize, ((struct sNode*)node_44)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            come_call_finalizer(sBlock_finalize, result, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            neo_current_frame = fr.prev;
            come_call_finalizer(sBlock_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__0;
        }
        list$1sNode$ph_push_back(result->mNodes,(struct sNode*)come_increment_ref_count(node_44));
        info->p=p_42;
        info->head=head_43;
        (source = come_decrement_ref_count(source, (void*)0, (void*)0, 0, 0, (void*)0));
        ((node_44) ? node_44 = come_decrement_ref_count(node_44, ((struct sNode*)node_44)->finalize, ((struct sNode*)node_44)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    info->block_level=block_level;
    __result_obj__0 = (struct sBlock*)come_increment_ref_count(result);
    come_call_finalizer(sBlock_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sBlock_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static void map$2char$phchar$ph_finalize(struct map$2char$phchar$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phchar$ph_finalize"; neo_current_frame = &fr;
    int i;
    int i_10;
    for(i=0;i<self->size;i++){
        if(self->item_existance[i]) {
            if(1) {
                (self->items[i] = come_decrement_ref_count(self->items[i], (void*)0, (void*)0, 0, 0, (void*)0));
            }
        }
    }
    come_free((char*)self->items);
    for(i_10=0;i_10<self->size;i_10++){
        if(self->item_existance[i_10]) {
            if(1) {
                (self->keys[i_10] = come_decrement_ref_count(self->keys[i_10], (void*)0, (void*)0, 0, 0, (void*)0));
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, (void*)0));
    neo_current_frame = fr.prev;
}

static struct sClassModule* map$2char$phsClassModule$ph$p_operator_load_element(struct map$2char$phsClassModule$ph* self, char* key  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsClassModule$ph$p_operator_load_element"; neo_current_frame = &fr;
    struct sClassModule* default_value  ;
    struct sClassModule* __result_obj__0  ;
    unsigned int hash;
    unsigned int it;
    memset(&default_value,0,sizeof(struct sClassModule*));
    if(self==((void*)0)) {
        __result_obj__0 = (struct sClassModule*)come_increment_ref_count(default_value);
        come_call_finalizer(sClassModule_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        neo_current_frame = fr.prev;
        come_call_finalizer(sClassModule_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if(string_equals(self->keys[it],key)) {
                __result_obj__0 = (struct sClassModule*)come_increment_ref_count(self->items[it]);
                come_call_finalizer(sClassModule_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                neo_current_frame = fr.prev;
                come_call_finalizer(sClassModule_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
            it++;
            if(it>=self->size) {
                it=0;
            }
            else if(it==hash) {
                __result_obj__0 = (struct sClassModule*)come_increment_ref_count(default_value);
                come_call_finalizer(sClassModule_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                neo_current_frame = fr.prev;
                come_call_finalizer(sClassModule_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
        }
        else {
            __result_obj__0 = (struct sClassModule*)come_increment_ref_count(default_value);
            come_call_finalizer(sClassModule_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            neo_current_frame = fr.prev;
            come_call_finalizer(sClassModule_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__0;
        }
    }
    __result_obj__0 = (struct sClassModule*)come_increment_ref_count(default_value);
    come_call_finalizer(sClassModule_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sClassModule_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static void sClassModule_finalize(struct sClassModule* self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sClassModule_finalize"; neo_current_frame = &fr;
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
    neo_current_frame = fr.prev;
}

static struct sClassModule* map$2char$phsClassModule$ph_operator_load_element(struct map$2char$phsClassModule$ph* self, char* key  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsClassModule$ph_operator_load_element"; neo_current_frame = &fr;
    struct sClassModule* default_value  ;
    struct sClassModule* __result_obj__0  ;
    unsigned int hash;
    unsigned int it;
    memset(&default_value,0,sizeof(struct sClassModule*));
    if(self==((void*)0)) {
        __result_obj__0 = (struct sClassModule*)come_increment_ref_count(default_value);
        come_call_finalizer(sClassModule_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        neo_current_frame = fr.prev;
        come_call_finalizer(sClassModule_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if(string_equals(self->keys[it],key)) {
                __result_obj__0 = (struct sClassModule*)come_increment_ref_count(self->items[it]);
                come_call_finalizer(sClassModule_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                neo_current_frame = fr.prev;
                come_call_finalizer(sClassModule_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
            it++;
            if(it>=self->size) {
                it=0;
            }
            else if(it==hash) {
                __result_obj__0 = (struct sClassModule*)come_increment_ref_count(default_value);
                come_call_finalizer(sClassModule_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                neo_current_frame = fr.prev;
                come_call_finalizer(sClassModule_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
        }
        else {
            __result_obj__0 = (struct sClassModule*)come_increment_ref_count(default_value);
            come_call_finalizer(sClassModule_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            neo_current_frame = fr.prev;
            come_call_finalizer(sClassModule_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__0;
        }
    }
    __result_obj__0 = (struct sClassModule*)come_increment_ref_count(default_value);
    come_call_finalizer(sClassModule_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sClassModule_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static int list$1char$ph_length(struct list$1char$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_length"; neo_current_frame = &fr;
    if(self==((void*)0)) {
        neo_current_frame = fr.prev;
        return 0;
    }
    neo_current_frame = fr.prev;
    return self->len;
    neo_current_frame = fr.prev;
}

static struct map$2char$phchar$ph* map$2char$phchar$ph_initialize(struct map$2char$phchar$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phchar$ph_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    int i;
    void* __right_value1 = (void*)0;
    struct list$1char$ph* __dec_obj44;
    struct map$2char$phchar$ph* __result_obj__0;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value0=(char**)come_calloc(1, sizeof(char*)*(1*(128)), (void*)0, 1612, "char**"))));
    self->items=(char**)come_increment_ref_count(((char**)(__right_value0=(char**)come_calloc(1, sizeof(char*)*(1*(128)), (void*)0, 1613, "char**"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value0=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), (void*)0, 1614, "_Bool*"))));
    for(i=0;i<128;i++){
        self->item_existance[i]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj44=self->key_list,
    self->key_list=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), (void*)0, 1624, "struct list$1char$ph*"))));
    come_call_finalizer(list$1char$ph_finalize, __dec_obj44,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    self->it=0;
    __result_obj__0 = (struct map$2char$phchar$ph*)come_increment_ref_count(self);
    come_call_finalizer(map$2char$phchar$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(map$2char$phchar$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static void map$2char$phchar$ph$p_finalize(struct map$2char$phchar$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phchar$ph$p_finalize"; neo_current_frame = &fr;
    int i;
    int i_11;
    for(i=0;i<self->size;i++){
        if(self->item_existance[i]) {
            if(1) {
                (self->items[i] = come_decrement_ref_count(self->items[i], (void*)0, (void*)0, 0, 0, (void*)0));
            }
        }
    }
    come_free((char*)self->items);
    for(i_11=0;i_11<self->size;i_11++){
        if(self->item_existance[i_11]) {
            if(1) {
                (self->keys[i_11] = come_decrement_ref_count(self->keys[i_11], (void*)0, (void*)0, 0, 0, (void*)0));
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, (void*)0));
    neo_current_frame = fr.prev;
}

static char* list$1char$ph_begin(struct list$1char$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_begin"; neo_current_frame = &fr;
    char* result  ;
    char* __result_obj__0  ;
    char* result_12  ;
    if(self==((void*)0)) {
        memset(&result,0,sizeof(char*));
        __result_obj__0 = result;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    self->it=self->head;
    if(self->it) {
        __result_obj__0 = self->it->item;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    memset(&result_12,0,sizeof(char*));
    __result_obj__0 = result_12;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static _Bool list$1char$ph_end(struct list$1char$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_end"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return self==((void*)0)||self->it==((void*)0);
    neo_current_frame = fr.prev;
}

static char* list$1char$ph_next(struct list$1char$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_next"; neo_current_frame = &fr;
    char* result  ;
    char* __result_obj__0  ;
    char* result_13  ;
    if(self==((void*)0)||self->it==((void*)0)) {
        memset(&result,0,sizeof(char*));
        __result_obj__0 = result;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    self->it=self->it->next;
    if(self->it) {
        __result_obj__0 = self->it->item;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    memset(&result_13,0,sizeof(char*));
    __result_obj__0 = result_13;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void map$2char$phchar$ph_operator_store_element(struct map$2char$phchar$ph* self, char* key  , char* item  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phchar$ph_operator_store_element"; neo_current_frame = &fr;
    if(self==((void*)0)) {
        (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0));
        (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0));
        neo_current_frame = fr.prev;
        return;
    }
    map$2char$phchar$ph_insert(self,(char*)come_increment_ref_count(key),(char*)come_increment_ref_count(item),(_Bool)0);
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0));
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0));
    neo_current_frame = fr.prev;
}

static struct map$2char$phchar$ph* map$2char$phchar$ph_insert(struct map$2char$phchar$ph* self, char* key  , char* item  , _Bool by_pointer)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phchar$ph_insert"; neo_current_frame = &fr;
    struct map$2char$phchar$ph* __result_obj__0;
    unsigned int hash;
    unsigned int it;
    _Bool same_key_exist;
    char* it2  ;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0));
        (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len*10>=self->size) {
        map$2char$phchar$ph_rehash(self);
    }
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if((!by_pointer&&string_equals(self->keys[it],key))||(by_pointer&&self->keys[it]==key)) {
                if(1) {
                    list$1char$ph_remove(self->key_list,self->keys[it],(_Bool)0);
                    (self->keys[it] = come_decrement_ref_count(self->keys[it], (void*)0, (void*)0, 0, 0, (void*)0));
                    self->keys[it]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it],(_Bool)0);
                    self->keys[it]=key;
                }
                if(1) {
                    (self->items[it] = come_decrement_ref_count(self->items[it], (void*)0, (void*)0, 0, 0, (void*)0));
                    self->items[it]=(char*)come_increment_ref_count(item);
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
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it]=(_Bool)1;
            if(1) {
                self->keys[it]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it]=key;
            }
            if(1) {
                self->items[it]=(char*)come_increment_ref_count(item);
            }
            else {
                self->items[it]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist=(_Bool)0;
    for(it2=list$1char$ph_begin(self->key_list);!list$1char$ph_end(self->key_list);it2=list$1char$ph_next(self->key_list)){
        if((!by_pointer&&string_equals(it2,key))||(by_pointer&&it2==key)) {
            same_key_exist=(_Bool)1;
        }
    }
    if(!same_key_exist) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__0 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0));
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void map$2char$phchar$ph_rehash(struct map$2char$phchar$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phchar$ph_rehash"; neo_current_frame = &fr;
    int size;
    void* __right_value0 = (void*)0;
    char** keys  ;
    char** items  ;
    _Bool* item_existance;
    int len;
    char* it  ;
    char* default_value  ;
    char* it2  ;
    unsigned int hash;
    int n;
    char* default_value_16  ;
    size=self->size*10;
    keys=(char**)come_increment_ref_count(((char**)(__right_value0=(char**)come_calloc(1, sizeof(char*)*(1*(size)), (void*)0, 1867, "char**"))));
    items=(char**)come_increment_ref_count(((char**)(__right_value0=(char**)come_calloc(1, sizeof(char*)*(1*(size)), (void*)0, 1868, "char**"))));
    item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value0=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size)), (void*)0, 1869, "_Bool*"))));
    len=0;
    for(it=map$2char$phchar$ph_begin(self);!map$2char$phchar$ph_end(self);it=map$2char$phchar$ph_next(self)){
        memset(&default_value,0,sizeof(char*));
        it2=((char*)(__right_value0=map$2char$phchar$ph_at(self,it,(char*)come_increment_ref_count(default_value),(_Bool)0)));
        hash=string_get_hash_key(((char*)it))%size;
        n=hash;
        while((_Bool)1) {
            if(item_existance[n]) {
                n++;
                if(n>=size) {
                    n=0;
                }
                else if(n==hash) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance[n]=(_Bool)1;
                keys[n]=it;
                memset(&default_value_16,0,sizeof(char*));
                items[n]=((char*)(__right_value0=map$2char$phchar$ph_at(self,it,(char*)come_increment_ref_count(default_value_16),(_Bool)0)));
                len++;
                (default_value_16 = come_decrement_ref_count(default_value_16, (void*)0, (void*)0, 0, 0, (void*)0));
                break;
                (default_value_16 = come_decrement_ref_count(default_value_16, (void*)0, (void*)0, 0, 0, (void*)0));
            }
        }
        (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    come_free((char*)self->items);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, (void*)0));
    come_free((char*)self->keys);
    self->keys=keys;
    self->items=items;
    self->item_existance=item_existance;
    self->size=size;
    self->len=len;
    neo_current_frame = fr.prev;
}

static char* map$2char$phchar$ph_begin(struct map$2char$phchar$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phchar$ph_begin"; neo_current_frame = &fr;
    char* result  ;
    char* __result_obj__0  ;
    char* result_14  ;
    if(self==((void*)0)) {
        memset(&result,0,sizeof(char*));
        __result_obj__0 = result;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    self->key_list->it=self->key_list->head;
    if(self->key_list->it) {
        __result_obj__0 = self->key_list->it->item;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    memset(&result_14,0,sizeof(char*));
    __result_obj__0 = result_14;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static _Bool map$2char$phchar$ph_end(struct map$2char$phchar$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phchar$ph_end"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
    neo_current_frame = fr.prev;
}

static char* map$2char$phchar$ph_next(struct map$2char$phchar$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phchar$ph_next"; neo_current_frame = &fr;
    char* result  ;
    char* __result_obj__0  ;
    char* result_15  ;
    if(self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result,0,sizeof(char*));
        __result_obj__0 = result;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    self->key_list->it=self->key_list->it->next;
    if(self->key_list->it) {
        __result_obj__0 = self->key_list->it->item;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    memset(&result_15,0,sizeof(char*));
    __result_obj__0 = result_15;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static char* map$2char$phchar$ph_at(struct map$2char$phchar$ph* self, char* key  , char* default_value  , _Bool by_pointer)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phchar$ph_at"; neo_current_frame = &fr;
    char* __result_obj__0  ;
    unsigned int hash;
    unsigned int it;
    if(self==((void*)0)) {
        __result_obj__0 = (char*)come_increment_ref_count(default_value);
        (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 1, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if((!by_pointer&&string_equals(self->keys[it],key))||(by_pointer&&self->keys[it]==key)) {
                __result_obj__0 = (char*)come_increment_ref_count(self->items[it]);
                (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 0, (void*)0));
                neo_current_frame = fr.prev;
                (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
                return __result_obj__0;
            }
            it++;
            if(it>=self->size) {
                it=0;
            }
            else if(it==hash) {
                __result_obj__0 = (char*)come_increment_ref_count(default_value);
                (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 1, (void*)0));
                neo_current_frame = fr.prev;
                (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
                return __result_obj__0;
            }
        }
        else {
            __result_obj__0 = (char*)come_increment_ref_count(default_value);
            (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 1, (void*)0));
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
            return __result_obj__0;
        }
    }
    __result_obj__0 = (char*)come_increment_ref_count(default_value);
    (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 1, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char* item  , _Bool by_pointer)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_remove"; neo_current_frame = &fr;
    struct list$1char$ph* __result_obj__0;
    int it2;
    struct list_item$1char$ph* it;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    it2=0;
    it=self->head;
    while(it!=((void*)0)) {
        if((!by_pointer&&string_equals(it->item,item))||(by_pointer&&it->item==item)) {
            list$1char$ph_delete(self,it2,it2+1);
            break;
        }
        it2++;
        it=it->next;
    }
    __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_delete"; neo_current_frame = &fr;
    struct list$1char$ph* __result_obj__0;
    int tmp;
    struct list_item$1char$ph* it;
    int i;
    struct list_item$1char$ph* prev_it;
    struct list_item$1char$ph* it_17;
    int i_18;
    struct list_item$1char$ph* prev_it_19;
    struct list_item$1char$ph* it_20;
    struct list_item$1char$ph* head_prev_it;
    struct list_item$1char$ph* tail_it;
    int i_21;
    struct list_item$1char$ph* prev_it_22;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        neo_current_frame = fr.prev;
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
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(head==tail) {
        __result_obj__0 = self;
        neo_current_frame = fr.prev;
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
        it_17=self->head;
        i_18=0;
        while(it_17!=((void*)0)) {
            if(i_18==head) {
                self->tail=it_17->prev;
                self->tail->next=((void*)0);
            }
            if(i_18>=head) {
                prev_it_19=it_17;
                it_17=it_17->next;
                i_18++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_19, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_17=it_17->next;
                i_18++;
            }
        }
    }
    else {
        it_20=self->head;
        head_prev_it=((void*)0);
        tail_it=((void*)0);
        i_21=0;
        while(it_20!=((void*)0)) {
            if(i_21==head) {
                head_prev_it=it_20->prev;
            }
            if(i_21==tail) {
                tail_it=it_20;
            }
            if(i_21>=head&&i_21<tail) {
                prev_it_22=it_20;
                it_20=it_20->next;
                i_21++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_22, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_20=it_20->next;
                i_21++;
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
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_reset"; neo_current_frame = &fr;
    struct list$1char$ph* __result_obj__0;
    struct list_item$1char$ph* it;
    struct list_item$1char$ph* prev_it;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        neo_current_frame = fr.prev;
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
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_push_back"; neo_current_frame = &fr;
    struct list$1char$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1char$ph* litem;
    char* __dec_obj46  ;
    struct list_item$1char$ph* litem_23;
    char* __dec_obj47  ;
    struct list_item$1char$ph* litem_24;
    char* __dec_obj48  ;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), (void*)0, 701, "struct list_item$1char$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj46=litem->item,
        litem->item=(char*)come_increment_ref_count(item);
        __dec_obj46 = come_decrement_ref_count(__dec_obj46, (void*)0, (void*)0, 0,0, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        litem_23=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), (void*)0, 711, "struct list_item$1char$ph*"))));
        litem_23->prev=self->head;
        litem_23->next=((void*)0);
        __dec_obj47=litem_23->item,
        litem_23->item=(char*)come_increment_ref_count(item);
        __dec_obj47 = come_decrement_ref_count(__dec_obj47, (void*)0, (void*)0, 0,0, (void*)0);
        self->tail=litem_23;
        self->head->next=litem_23;
    }
    else {
        litem_24=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), (void*)0, 721, "struct list_item$1char$ph*"))));
        litem_24->prev=self->tail;
        litem_24->next=((void*)0);
        __dec_obj48=litem_24->item,
        litem_24->item=(char*)come_increment_ref_count(item);
        __dec_obj48 = come_decrement_ref_count(__dec_obj48, (void*)0, (void*)0, 0,0, (void*)0);
        self->tail->next=litem_24;
        self->tail=litem_24;
    }
    self->len++;
    __result_obj__0 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static char* list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph$p_operator_load_element"; neo_current_frame = &fr;
    char* default_value  ;
    char* __result_obj__0  ;
    struct list_item$1char$ph* it;
    int i;
    char* default_value_25  ;
    if(self==((void*)0)) {
        memset(&default_value,0,sizeof(char*));
        __result_obj__0 = (char*)come_increment_ref_count(default_value);
        (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 1, (void*)0));
        neo_current_frame = fr.prev;
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
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
            return __result_obj__0;
        }
        it=it->next;
        i++;
    }
    memset(&default_value_25,0,sizeof(char*));
    __result_obj__0 = (char*)come_increment_ref_count(default_value_25);
    (default_value_25 = come_decrement_ref_count(default_value_25, (void*)0, (void*)0, 0, 1, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

static char* list$1char$ph_operator_load_element(struct list$1char$ph* self, int position)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_operator_load_element"; neo_current_frame = &fr;
    char* default_value  ;
    char* __result_obj__0  ;
    struct list_item$1char$ph* it;
    int i;
    char* default_value_26  ;
    if(self==((void*)0)) {
        memset(&default_value,0,sizeof(char*));
        __result_obj__0 = (char*)come_increment_ref_count(default_value);
        (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 1, (void*)0));
        neo_current_frame = fr.prev;
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
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
            return __result_obj__0;
        }
        it=it->next;
        i++;
    }
    memset(&default_value_26,0,sizeof(char*));
    __result_obj__0 = (char*)come_increment_ref_count(default_value_26);
    (default_value_26 = come_decrement_ref_count(default_value_26, (void*)0, (void*)0, 0, 1, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

static void tuple3$3sType$phchar$ph_Bool$$p_finalize(struct tuple3$3sType$phchar$ph_Bool$* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "tuple3$3sType$phchar$ph_Bool$$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    neo_current_frame = fr.prev;
}

static void tuple2$2char$phchar$ph$p_finalize(struct tuple2$2char$phchar$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2char$phchar$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    neo_current_frame = fr.prev;
}

static struct sRawCodeNode* sRawCodeNode_clone(struct sRawCodeNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sRawCodeNode_clone"; neo_current_frame = &fr;
    struct sRawCodeNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sRawCodeNode* result  ;
    char* __dec_obj50  ;
    char* __dec_obj51  ;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sRawCodeNode*)come_increment_ref_count((struct sRawCodeNode*)come_calloc(1, sizeof(struct sRawCodeNode)*(1), (void*)0, 3, "struct sRawCodeNode*"));
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj50=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sRawCodeNode_clone", 5, "char*"));
        __dec_obj50 = come_decrement_ref_count(__dec_obj50, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->mCode!=((void*)0)) {
        __dec_obj51=result->mCode,
        result->mCode=(char*)come_increment_ref_count((char*)come_memdup(self->mCode, "sRawCodeNode_clone", 7, "char*"));
        __dec_obj51 = come_decrement_ref_count(__dec_obj51, (void*)0, (void*)0, 0,0, (void*)0);
    }
    __result_obj__0 = result;
    come_call_finalizer(sRawCodeNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct list$1sNode$ph* list$1sNode$ph_push_back(struct list$1sNode$ph* self, struct sNode* item)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_push_back"; neo_current_frame = &fr;
    struct list$1sNode$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1sNode$ph* litem;
    struct sNode* __dec_obj57;
    struct list_item$1sNode$ph* litem_28;
    struct sNode* __dec_obj58;
    struct list_item$1sNode$ph* litem_29;
    struct sNode* __dec_obj59;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), (void*)0, 701, "struct list_item$1sNode$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj57=litem->item,
        litem->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj57 ? __dec_obj57 = come_decrement_ref_count(__dec_obj57, ((struct sNode*)__dec_obj57)->finalize, ((struct sNode*)__dec_obj57)->_protocol_obj, 0,0, (void*)0) :0);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        litem_28=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), (void*)0, 711, "struct list_item$1sNode$ph*"))));
        litem_28->prev=self->head;
        litem_28->next=((void*)0);
        __dec_obj58=litem_28->item,
        litem_28->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj58 ? __dec_obj58 = come_decrement_ref_count(__dec_obj58, ((struct sNode*)__dec_obj58)->finalize, ((struct sNode*)__dec_obj58)->_protocol_obj, 0,0, (void*)0) :0);
        self->tail=litem_28;
        self->head->next=litem_28;
    }
    else {
        litem_29=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), (void*)0, 721, "struct list_item$1sNode$ph*"))));
        litem_29->prev=self->tail;
        litem_29->next=((void*)0);
        __dec_obj59=litem_29->item,
        litem_29->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj59 ? __dec_obj59 = come_decrement_ref_count(__dec_obj59, ((struct sNode*)__dec_obj59)->finalize, ((struct sNode*)__dec_obj59)->_protocol_obj, 0,0, (void*)0) :0);
        self->tail->next=litem_29;
        self->tail=litem_29;
    }
    self->len++;
    __result_obj__0 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct list$1sNode$ph* list$1sNode$ph_delete(struct list$1sNode$ph* self, int head, int tail)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_delete"; neo_current_frame = &fr;
    struct list$1sNode$ph* __result_obj__0;
    int tmp;
    struct list_item$1sNode$ph* it;
    int i;
    struct list_item$1sNode$ph* prev_it;
    struct list_item$1sNode$ph* it_30;
    int i_31;
    struct list_item$1sNode$ph* prev_it_32;
    struct list_item$1sNode$ph* it_33;
    struct list_item$1sNode$ph* head_prev_it;
    struct list_item$1sNode$ph* tail_it;
    int i_34;
    struct list_item$1sNode$ph* prev_it_35;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        neo_current_frame = fr.prev;
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
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(head==tail) {
        __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(head==0&&tail==self->len) {
        list$1sNode$ph_reset(self);
    }
    else if(head==0) {
        it=self->head;
        i=0;
        while(it!=((void*)0)) {
            if(i<tail) {
                prev_it=it;
                it=it->next;
                i++;
                come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
        it_30=self->head;
        i_31=0;
        while(it_30!=((void*)0)) {
            if(i_31==head) {
                self->tail=it_30->prev;
                self->tail->next=((void*)0);
            }
            if(i_31>=head) {
                prev_it_32=it_30;
                it_30=it_30->next;
                i_31++;
                come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it_32, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_30=it_30->next;
                i_31++;
            }
        }
    }
    else {
        it_33=self->head;
        head_prev_it=((void*)0);
        tail_it=((void*)0);
        i_34=0;
        while(it_33!=((void*)0)) {
            if(i_34==head) {
                head_prev_it=it_33->prev;
            }
            if(i_34==tail) {
                tail_it=it_33;
            }
            if(i_34>=head&&i_34<tail) {
                prev_it_35=it_33;
                it_33=it_33->next;
                i_34++;
                come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it_35, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_33=it_33->next;
                i_34++;
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
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct list$1sNode$ph* list$1sNode$ph_reset(struct list$1sNode$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_reset"; neo_current_frame = &fr;
    struct list$1sNode$ph* __result_obj__0;
    struct list_item$1sNode$ph* it;
    struct list_item$1sNode$ph* prev_it;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sSemicolonNode* sSemicolonNode_clone(struct sSemicolonNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sSemicolonNode_clone"; neo_current_frame = &fr;
    struct sSemicolonNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sSemicolonNode* result  ;
    char* __dec_obj63  ;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sSemicolonNode*)come_increment_ref_count((struct sSemicolonNode*)come_calloc(1, sizeof(struct sSemicolonNode)*(1), (void*)0, 3, "struct sSemicolonNode*"));
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj63=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sSemicolonNode_clone", 5, "char*"));
        __dec_obj63 = come_decrement_ref_count(__dec_obj63, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    __result_obj__0 = result;
    come_call_finalizer(sSemicolonNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

int transpile_block(struct sBlock* block  , struct list$1sType$ph* param_types, struct list$1char$ph* param_names, struct sInfo* info  , _Bool no_var_table, _Bool loop_block, _Bool if_result_value)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "transpile_block"; neo_current_frame = &fr;
    _Bool inhibits_output_code;
    _Bool omit_semicolon;
    struct sVarTable* old_table  ;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct sVarTable* __dec_obj66  ;
    struct sVarTable* current_loop_vtable  ;
    int i;
    struct list$1char$ph* o2_saved;
    char* name  ;
    struct sType* type  ;
    int block_level;
    int i_47;
    struct list$1sNode$ph* o2_saved_48;
    struct sNode* node;
    int num_conditional;
    struct list$1sRightValueObject$ph* right_value_objects;
    struct list$1sRightValueObject$ph* __dec_obj67;
    char* __dec_obj68  ;
    char* __dec_obj69  ;
    int stack_num_before;
    int sline;
    char* sname  ;
    char* __dec_obj70  ;
    _Bool Value;
    char* __dec_obj71  ;
    struct CVALUE* come_value  ;
    struct sType* right_type__  ;
    struct sType* right_type_  ;
    struct sType* right_type2  ;
    char* var_name  ;
    struct sType* result_type  ;
    void* __right_value2 = (void*)0;
    _Bool _conditional_value_X0;
    struct sType* __dec_obj72  ;
    struct sType* result_type_51  ;
    struct sType* left_type  ;
    struct list$1sRightValueObject$ph* __dec_obj73;
    struct list$1sVar$ph* o2_saved_52;
    struct sVar* it  ;
    struct list$1sVar$ph* __dec_obj74;
    memset(&i, 0, sizeof(i));
    memset(&i_47, 0, sizeof(i_47));
    inhibits_output_code=info->inhibits_output_code;
    info->inhibits_output_code=(_Bool)0;
    omit_semicolon=block->mOmitSemicolon;
    old_table=info->lv_table;
    if(!no_var_table) {
        __dec_obj66=block->mVarTable,
        block->mVarTable=(struct sVarTable*)come_increment_ref_count(sVarTable_initialize((struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), (void*)0, 521, "struct sVarTable*")),(_Bool)0,old_table));
        come_call_finalizer(sVarTable_finalize, __dec_obj66,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        info->lv_table=block->mVarTable;
    }
    current_loop_vtable=info->current_loop_vtable;
    if(loop_block) {
        info->current_loop_vtable=block->mVarTable;
    }
    if(param_types&&param_names) {
        for(o2_saved=param_names,name=list$1char$ph_begin(o2_saved);!list$1char$ph_end(o2_saved);name=list$1char$ph_next(o2_saved)){
            type=(struct sType*)come_increment_ref_count(list$1sType$ph_operator_load_element(param_types,i));
            type->mAllocaValue=(_Bool)0;
            add_variable_to_table(name,((struct sType*)(__right_value0=sType_clone(type))),info,(_Bool)1,(_Bool)0,(_Bool)0);
            come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            i++;
            come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    block_level=info->block_level;
    if(!no_var_table) {
        info->block_level++;
    }
    if(list$1sNode$ph_length(block->mNodes)==0) {
    }
    else {
        for(o2_saved_48=(struct list$1sNode$ph*)come_increment_ref_count(block->mNodes),node=list$1sNode$ph_begin(o2_saved_48);!list$1sNode$ph_end(o2_saved_48);node=list$1sNode$ph_next(o2_saved_48)){
            num_conditional=info->num_conditional;
            if(info->block_level==1) {
                info->num_conditional=0;
            }
            right_value_objects=(struct list$1sRightValueObject$ph*)come_increment_ref_count(info->right_value_objects);
            __dec_obj67=info->right_value_objects,
            info->right_value_objects=(struct list$1sRightValueObject$ph*)come_increment_ref_count(list$1sRightValueObject$ph_initialize((struct list$1sRightValueObject$ph*)come_increment_ref_count((struct list$1sRightValueObject$ph*)come_calloc(1, sizeof(struct list$1sRightValueObject$ph)*(1), (void*)0, 554, "struct list$1sRightValueObject$ph*"))));
            come_call_finalizer(list$1sRightValueObject$ph_finalize, __dec_obj67,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            __dec_obj68=info->module->mLastCode,
            info->module->mLastCode=((void*)0);
            __dec_obj68 = come_decrement_ref_count(__dec_obj68, (void*)0, (void*)0, 0,0, (void*)0);
            __dec_obj69=info->module->mLastCode2,
            info->module->mLastCode2=((void*)0);
            __dec_obj69 = come_decrement_ref_count(__dec_obj69, (void*)0, (void*)0, 0,0, (void*)0);
            stack_num_before=list$1CVALUE$ph_length(info->stack);
            info->writing_source_file_position=(_Bool)1;
            sline=info->sline;
            sname=(char*)come_increment_ref_count(__builtin_string(info->sname));
            info->last_statment_is_return=(_Bool)0;
            info->sline=node->sline(node->_protocol_obj);
            __dec_obj70=info->sname,
            info->sname=(char*)come_increment_ref_count(node->sname(node->_protocol_obj));
            __dec_obj70 = come_decrement_ref_count(__dec_obj70, (void*)0, (void*)0, 0,0, (void*)0);
            Value=node_compile(node,info);
            if(!Value) {
                puts(((char*)(__right_value0=node->kind(node->_protocol_obj))));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                printf("%s %d: compiling is failed(5)\n",info->sname,info->sline);
                exit(2);
            }
            info->sline=sline;
            __dec_obj71=info->sname,
            info->sname=(char*)come_increment_ref_count(__builtin_string(sname));
            __dec_obj71 = come_decrement_ref_count(__dec_obj71, (void*)0, (void*)0, 0,0, (void*)0);
            if(omit_semicolon&&if_result_value&&i_47==list$1sNode$ph_length(block->mNodes)-1) {
                come_value=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                right_type__=(struct sType*)come_increment_ref_count(sType_clone(come_value->type));
                right_type_=(struct sType*)come_increment_ref_count(solve_generics(right_type__,info->generics_type,info));
                right_type2=(struct sType*)come_increment_ref_count(solve_method_generics(right_type_,info));
                if(!info->if_result_value_name_defined) {
                    info->if_result_value_name_defined=(_Bool)1;
                    var_name=(char*)come_increment_ref_count(info->if_result_value_name);
                    result_type=(struct sType*)come_increment_ref_count(sType_clone(come_value->type));
                    add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value0=make_define_var(result_type,var_name,info,(_Bool)0,(_Bool)0))));
                    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                    if(({(_conditional_value_X0=(string_operator_not_equals(info->come_fun->mName,"memset")&&((struct sFun*)(__right_value2=map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value1=xsprintf("memset"))))))));                    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
                    come_call_finalizer(sFun_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
_conditional_value_X0;})) {
                        add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var_name,var_name);
                    }
                    add_variable_to_table(var_name,result_type,info,(_Bool)0,(_Bool)0,(_Bool)1);
                    __dec_obj72=info->if_result_type,
                    info->if_result_type=(struct sType*)come_increment_ref_count(sType_clone(result_type));
                    come_call_finalizer(sType_finalize, __dec_obj72,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                    (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0));
                    come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                else {
                    result_type_51=(struct sType*)come_increment_ref_count(sType_clone(come_value->type));
                    check_assign_type("invalid if result type",info->if_result_type,result_type_51,come_value,info);
                    come_call_finalizer(sType_finalize, result_type_51, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(come_value->type->mHeap) {
                    left_type=(struct sType*)come_increment_ref_count(sType_clone(right_type2));
                    std_move(left_type,right_type2,come_value,info);
                    come_call_finalizer(sType_finalize, left_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                add_come_code(info,((char*)(__right_value1=xsprintf("\%s = %%s;\n",((char*)(__right_value0=string_to_string(info->if_result_value_name)))))),come_value->c_value);
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
                come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, right_type__, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, right_type_, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                add_last_code_to_source(info);
                arrange_stack(info,stack_num_before);
            }
            free_right_value_objects(info);
            if(info->right_value_objects) {
                list$1sRightValueObject$ph_reset(info->right_value_objects);
            }
            __dec_obj73=info->right_value_objects,
            info->right_value_objects=(struct list$1sRightValueObject$ph*)come_increment_ref_count(right_value_objects);
            come_call_finalizer(list$1sRightValueObject$ph_finalize, __dec_obj73,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            i_47++;
            if(info->block_level==1) {
                info->num_conditional=num_conditional;
            }
            come_call_finalizer(list$1sRightValueObject$ph$p_finalize, right_value_objects, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (sname = come_decrement_ref_count(sname, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        come_call_finalizer(list$1sNode$ph$p_finalize, o2_saved_48, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(!no_var_table&&!info->inhibits_output_code) {
        free_objects(info->lv_table,((void*)0),info);
        if(info->match_it_var&&block_level==0) {
            for(o2_saved_52=(struct list$1sVar$ph*)come_increment_ref_count(info->match_it_var),it=list$1sVar$ph_begin(o2_saved_52);!list$1sVar$ph_end(o2_saved_52);it=list$1sVar$ph_next(o2_saved_52)){
                free_object(((struct sType*)(__right_value0=sType_clone(it->mType))),it->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0);
                come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            }
            come_call_finalizer(list$1sVar$ph$p_finalize, o2_saved_52, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            __dec_obj74=info->match_it_var,
            info->match_it_var=((void*)0);
            come_call_finalizer(list$1sVar$ph_finalize, __dec_obj74,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    info->lv_table=old_table;
    info->block_level=block_level;
    info->inhibits_output_code2=info->inhibits_output_code;
    info->current_loop_vtable=current_loop_vtable;
    info->inhibits_output_code=inhibits_output_code;
    neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph$p_operator_load_element"; neo_current_frame = &fr;
    struct sType* default_value  ;
    struct sType* __result_obj__0  ;
    struct list_item$1sType$ph* it;
    int i;
    struct sType* default_value_45  ;
    if(self==((void*)0)) {
        memset(&default_value,0,sizeof(struct sType*));
        __result_obj__0 = (struct sType*)come_increment_ref_count(default_value);
        come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        neo_current_frame = fr.prev;
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
            neo_current_frame = fr.prev;
            come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__0;
        }
        it=it->next;
        i++;
    }
    memset(&default_value_45,0,sizeof(struct sType*));
    __result_obj__0 = (struct sType*)come_increment_ref_count(default_value_45);
    come_call_finalizer(sType_finalize, default_value_45, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct sType* list$1sType$ph_operator_load_element(struct list$1sType$ph* self, int position)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_operator_load_element"; neo_current_frame = &fr;
    struct sType* default_value  ;
    struct sType* __result_obj__0  ;
    struct list_item$1sType$ph* it;
    int i;
    struct sType* default_value_46  ;
    if(self==((void*)0)) {
        memset(&default_value,0,sizeof(struct sType*));
        __result_obj__0 = (struct sType*)come_increment_ref_count(default_value);
        come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        neo_current_frame = fr.prev;
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
            neo_current_frame = fr.prev;
            come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__0;
        }
        it=it->next;
        i++;
    }
    memset(&default_value_46,0,sizeof(struct sType*));
    __result_obj__0 = (struct sType*)come_increment_ref_count(default_value_46);
    come_call_finalizer(sType_finalize, default_value_46, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static int list$1sNode$ph_length(struct list$1sNode$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_length"; neo_current_frame = &fr;
    if(self==((void*)0)) {
        neo_current_frame = fr.prev;
        return 0;
    }
    neo_current_frame = fr.prev;
    return self->len;
    neo_current_frame = fr.prev;
}

static struct sNode* list$1sNode$ph_begin(struct list$1sNode$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_begin"; neo_current_frame = &fr;
    struct sNode* result;
    struct sNode* __result_obj__0;
    struct sNode* result_49;
    if(self==((void*)0)) {
        memset(&result,0,sizeof(struct sNode*));
        __result_obj__0 = result;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    self->it=self->head;
    if(self->it) {
        __result_obj__0 = self->it->item;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    memset(&result_49,0,sizeof(struct sNode*));
    __result_obj__0 = result_49;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static _Bool list$1sNode$ph_end(struct list$1sNode$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_end"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return self==((void*)0)||self->it==((void*)0);
    neo_current_frame = fr.prev;
}

static struct sNode* list$1sNode$ph_next(struct list$1sNode$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_next"; neo_current_frame = &fr;
    struct sNode* result;
    struct sNode* __result_obj__0;
    struct sNode* result_50;
    if(self==((void*)0)||self->it==((void*)0)) {
        memset(&result,0,sizeof(struct sNode*));
        __result_obj__0 = result;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    self->it=self->it->next;
    if(self->it) {
        __result_obj__0 = self->it->item;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    memset(&result_50,0,sizeof(struct sNode*));
    __result_obj__0 = result_50;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct list$1sRightValueObject$ph* list$1sRightValueObject$ph_initialize(struct list$1sRightValueObject$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sRightValueObject$ph_initialize"; neo_current_frame = &fr;
    struct list$1sRightValueObject$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__0 = (struct list$1sRightValueObject$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1sRightValueObject$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sRightValueObject$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static void list$1sRightValueObject$ph$p_finalize(struct list$1sRightValueObject$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sRightValueObject$ph$p_finalize"; neo_current_frame = &fr;
    struct list_item$1sRightValueObject$ph* it;
    struct list_item$1sRightValueObject$ph* prev_it;
    if(self==((void*)0)) {
        neo_current_frame = fr.prev;
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sRightValueObject$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

static void list_item$1sRightValueObject$ph$p_finalize(struct list_item$1sRightValueObject$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1sRightValueObject$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer(sRightValueObject_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

static void sRightValueObject_finalize(struct sRightValueObject* self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sRightValueObject_finalize"; neo_current_frame = &fr;
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
    neo_current_frame = fr.prev;
}

static void list$1sRightValueObject$ph_finalize(struct list$1sRightValueObject$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sRightValueObject$ph_finalize"; neo_current_frame = &fr;
    struct list_item$1sRightValueObject$ph* it;
    struct list_item$1sRightValueObject$ph* prev_it;
    if(self==((void*)0)) {
        neo_current_frame = fr.prev;
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sRightValueObject$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

static int list$1CVALUE$ph_length(struct list$1CVALUE$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1CVALUE$ph_length"; neo_current_frame = &fr;
    if(self==((void*)0)) {
        neo_current_frame = fr.prev;
        return 0;
    }
    neo_current_frame = fr.prev;
    return self->len;
    neo_current_frame = fr.prev;
}

static struct list$1sRightValueObject$ph* list$1sRightValueObject$ph_reset(struct list$1sRightValueObject$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sRightValueObject$ph_reset"; neo_current_frame = &fr;
    struct list$1sRightValueObject$ph* __result_obj__0;
    struct list_item$1sRightValueObject$ph* it;
    struct list_item$1sRightValueObject$ph* prev_it;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sRightValueObject$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sVar* list$1sVar$ph_begin(struct list$1sVar$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sVar$ph_begin"; neo_current_frame = &fr;
    struct sVar* result  ;
    struct sVar* __result_obj__0  ;
    struct sVar* result_53  ;
    if(self==((void*)0)) {
        memset(&result,0,sizeof(struct sVar*));
        __result_obj__0 = result;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    self->it=self->head;
    if(self->it) {
        __result_obj__0 = self->it->item;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    memset(&result_53,0,sizeof(struct sVar*));
    __result_obj__0 = result_53;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static _Bool list$1sVar$ph_end(struct list$1sVar$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sVar$ph_end"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return self==((void*)0)||self->it==((void*)0);
    neo_current_frame = fr.prev;
}

static struct sVar* list$1sVar$ph_next(struct list$1sVar$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sVar$ph_next"; neo_current_frame = &fr;
    struct sVar* result  ;
    struct sVar* __result_obj__0  ;
    struct sVar* result_54  ;
    if(self==((void*)0)||self->it==((void*)0)) {
        memset(&result,0,sizeof(struct sVar*));
        __result_obj__0 = result;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    self->it=self->it->next;
    if(self->it) {
        __result_obj__0 = self->it->item;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    memset(&result_54,0,sizeof(struct sVar*));
    __result_obj__0 = result_54;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void list$1sVar$ph_finalize(struct list$1sVar$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sVar$ph_finalize"; neo_current_frame = &fr;
    struct list_item$1sVar$ph* it;
    struct list_item$1sVar$ph* prev_it;
    if(self==((void*)0)) {
        neo_current_frame = fr.prev;
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sVar$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

void arrange_stack(struct sInfo* info  , int top)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "arrange_stack"; neo_current_frame = &fr;
    if(list$1CVALUE$ph_length(info->stack)>top) {
        dec_stack_ptr(list$1CVALUE$ph_length(info->stack)-top,info);
    }
    if(list$1CVALUE$ph_length(info->stack)<top) {
        printf("%s %d: unexpected stack value. The stack num is %d. top is %d\n",info->sname,info->sline,list$1CVALUE$ph_length(info->stack),top);
        exit(2);
    }
    neo_current_frame = fr.prev;
}

char* skip_block(struct sInfo* info  , _Bool return_self_at_last)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "skip_block"; neo_current_frame = &fr;
    char* head;
    _Bool dquort;
    _Bool squort;
    int sline;
    int nest;
    char* tail;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer* buf  ;
    char* __result_obj__0  ;
    head=info->p;
    if(*info->p==123) {
        info->p++;
        dquort=(_Bool)0;
        squort=(_Bool)0;
        sline=0;
        nest=0;
        while(1) {
            parse_sharp_v5(info);
            if(dquort) {
                if(*info->p==92) {
                    info->p++;
                    if(*info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline);
                        exit(2);
                    }
                    if(*info->p==10) {
                        info->p++;
                    }
                    info->p++;
                }
                else if(*info->p==34) {
                    info->p++;
                    dquort=!dquort;
                }
                else if(*info->p==10) {
                    info->p++;
                    info->sline++;
                    if(*info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline);
                        exit(2);
                    }
                }
                else {
                    info->p++;
                    if(*info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline);
                        exit(2);
                    }
                }
            }
            else if(squort) {
                if(*info->p==92) {
                    info->p++;
                    if(*info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline);
                        exit(2);
                    }
                    if(*info->p==10) {
                        info->sline++;
                    }
                    info->p++;
                }
                else if(*info->p==39) {
                    info->p++;
                    squort=!squort;
                }
                else if(*info->p==10) {
                    info->p++;
                    info->sline++;
                    if(*info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline);
                        exit(2);
                    }
                }
                else {
                    info->p++;
                    if(*info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline);
                        exit(2);
                    }
                }
            }
            else if(*info->p==39) {
                sline=info->sline;
                info->p++;
                squort=!squort;
            }
            else if(*info->p==34) {
                sline=info->sline;
                info->p++;
                dquort=!dquort;
            }
            else if(*info->p==35) {
                skip_spaces_and_lf(info);
            }
            else if(*info->p==47&&*(info->p+1)==42) {
                skip_spaces_and_lf(info);
            }
            else if(*info->p==47&&*(info->p+1)==47) {
                skip_spaces_and_lf(info);
            }
            else if(*info->p==123) {
                info->p++;
                nest++;
            }
            else if(*info->p==125) {
                info->p++;
                if(nest==0) {
                    break;
                }
                nest--;
            }
            else if(*info->p==0) {
                err_msg(info,"The block requires } character for closing block");
                exit(2);
            }
            else if(*info->p==10) {
                info->p++;
                info->sline++;
            }
            else {
                info->p++;
            }
        }
    }
    else {
        err_msg(info,"Require block. This is %c",*info->p);
        stackframe();
        exit(1);
    }
    tail=info->p;
    buf=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), (void*)0, 792, "struct buffer*"))));
    buffer_append(buf,head,tail-head-1);
    if(return_self_at_last) {
        buffer_append_str(buf,"return self; }");
    }
    else {
        buffer_append_str(buf,"}");
    }
    skip_spaces_and_lf(info);
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=buffer_to_string(buf))));
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

void parse_function_attribute_skip_paren(struct sInfo* info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "parse_function_attribute_skip_paren"; neo_current_frame = &fr;
    int nest;
    skip_spaces_and_lf(info);
    if(*info->p==40) {
        nest=0;
        while(1) {
            if(*info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                nest++;
            }
            else if(*info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
                nest--;
                if(nest==0) {
                    break;
                }
            }
            else if(*info->p==0) {
                break;
            }
            else {
                info->p++;
            }
        }
    }
    skip_spaces_and_lf(info);
    neo_current_frame = fr.prev;
}

struct tuple2$2char$phchar$ph* parse_function_attribute(struct sInfo* info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "parse_function_attribute"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer* asm_fun_name  ;
    struct buffer* result  ;
    char* head;
    char* tail;
    char* head_55;
    char* tail_56;
    char* head_57;
    char* tail_58;
    char* head_59;
    char* tail_60;
    int len;
    _Bool in_dquort;
    int brace_num;
    char* head_61;
    char* tail_62;
    char* head_63;
    char* tail_64;
    char* head_65;
    char* tail_66;
    char* head_67;
    char* tail_68;
    char* head_69;
    char* tail_70;
    char* head_71;
    char* tail_72;
    char* head_73;
    char* tail_74;
    char* head_75;
    char* tail_76;
    char* head_77;
    char* tail_78;
    char* head_79;
    char* tail_80;
    char* head_81;
    char* tail_82;
    char* head_83;
    char* tail_84;
    char* head_85;
    char* tail_86;
    char* head_87;
    char* tail_88;
    void* __right_value2 = (void*)0;
    void* __right_value3 = (void*)0;
    struct tuple2$2char$phchar$ph* __result_obj__0;
    asm_fun_name=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), (void*)0, 985, "struct buffer*"))));
    result=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), (void*)0, 986, "struct buffer*"))));
    while((_Bool)1) {
        if(parsecmp("__attribute__",info)) {
            head=info->p;
            info->p+=strlen("__attribute__");
            parse_function_attribute_skip_paren(info);
            tail=info->p;
            buffer_append(result,head,tail-head);
        }
        else if(parsecmp("_Noreturn",info)) {
            head_55=info->p;
            info->p+=strlen("_Noreturn");
            parse_function_attribute_skip_paren(info);
            tail_56=info->p;
            buffer_append(result,head_55,tail_56-head_55);
        }
        else if(parsecmp("_Nonnull",info)) {
            head_57=info->p;
            info->p+=strlen("_Nonnull");
            parse_function_attribute_skip_paren(info);
            tail_58=info->p;
            buffer_append(result,head_57,tail_58-head_57);
        }
        else if(parsecmp("__noreturn",info)) {
            head_59=info->p;
            info->p+=strlen("__noreturn");
            parse_function_attribute_skip_paren(info);
            tail_60=info->p;
            buffer_append(result,head_59,tail_60-head_59);
        }
        else if(parsecmp("__asm__",info)) {
            info->p+=strlen("__asm__");
            skip_spaces_and_lf(info);
            if(((info->end-info->p)>=strlen("__ASMNAME"))&&memcmp(info->p,"__ASMNAME",strlen("__ASMNAME"))==0) {
                info->p+=strlen("__ASMNAME");
                skip_spaces_and_lf(info);
            }
            len=0;
            if(*info->p==40) {
                in_dquort=(_Bool)0;
                brace_num=0;
                while(*info->p) {
                    if(*info->p==34) {
                        info->p++;
                        in_dquort=!in_dquort;
                    }
                    else if(in_dquort) {
                        buffer_append_char(asm_fun_name,*info->p);
                        info->p++;
                    }
                    else if(*info->p==40) {
                        info->p++;
                        brace_num++;
                    }
                    else if(*info->p==41) {
                        info->p++;
                        brace_num--;
                        if(brace_num==0) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
        }
        else if(parsecmp("__attribute_pure__",info)) {
            head_61=info->p;
            info->p+=strlen("__attribute_pure__");
            parse_function_attribute_skip_paren(info);
            tail_62=info->p;
            buffer_append(result,head_61,tail_62-head_61);
        }
        else if(parsecmp("__malloc_like",info)) {
            head_63=info->p;
            info->p+=strlen("__malloc_like");
            parse_function_attribute_skip_paren(info);
            tail_64=info->p;
            buffer_append(result,head_63,tail_64-head_63);
        }
        else if(parsecmp("__result_use_check",info)) {
            head_65=info->p;
            info->p+=strlen("__result_use_check");
            parse_function_attribute_skip_paren(info);
            tail_66=info->p;
            buffer_append(result,head_65,tail_66-head_65);
        }
        else if(parsecmp("__alloc_size2",info)) {
            head_67=info->p;
            info->p+=strlen("__alloc_size2");
            parse_function_attribute_skip_paren(info);
            tail_68=info->p;
            buffer_append(result,head_67,tail_68-head_67);
        }
        else if(parsecmp("__alloc_size",info)) {
            head_69=info->p;
            info->p+=strlen("__alloc_size");
            parse_function_attribute_skip_paren(info);
            tail_70=info->p;
            buffer_append(result,head_69,tail_70-head_69);
        }
        else if(parsecmp("__nonnull",info)) {
            head_71=info->p;
            info->p+=strlen("__nonnull");
            parse_function_attribute_skip_paren(info);
            tail_72=info->p;
            buffer_append(result,head_71,tail_72-head_71);
        }
        else if(parsecmp("__alloc_align",info)) {
            head_73=info->p;
            info->p+=strlen("__alloc_align");
            parse_function_attribute_skip_paren(info);
            tail_74=info->p;
            buffer_append(result,head_73,tail_74-head_73);
        }
        else if(parsecmp("__attribute_malloc__",info)) {
            head_75=info->p;
            info->p+=strlen("__attribute_malloc__");
            parse_function_attribute_skip_paren(info);
            tail_76=info->p;
            buffer_append(result,head_75,tail_76-head_75);
        }
        else if(parsecmp("__attr_dealloc_fclose",info)) {
            head_77=info->p;
            info->p+=strlen("__attr_dealloc_fclose");
            parse_function_attribute_skip_paren(info);
            tail_78=info->p;
            buffer_append(result,head_77,tail_78-head_77);
        }
        else if(parsecmp("__wur",info)) {
            head_79=info->p;
            info->p+=strlen("__wur");
            parse_function_attribute_skip_paren(info);
            tail_80=info->p;
            buffer_append(result,head_79,tail_80-head_79);
        }
        else if(parsecmp("__pure2",info)) {
            head_81=info->p;
            info->p+=strlen("__pure2");
            parse_function_attribute_skip_paren(info);
            tail_82=info->p;
            buffer_append(result,head_81,tail_82-head_81);
        }
        else if(parsecmp("__pure",info)) {
            head_83=info->p;
            info->p+=strlen("__pure");
            parse_function_attribute_skip_paren(info);
            tail_84=info->p;
            buffer_append(result,head_83,tail_84-head_83);
        }
        else if(parsecmp("__THROW",info)) {
            head_85=info->p;
            info->p+=strlen("__THROW");
            parse_function_attribute_skip_paren(info);
            tail_86=info->p;
            buffer_append(result,head_85,tail_86-head_85);
        }
        else if(parsecmp("__asm",info)) {
            head_87=info->p;
            info->p+=strlen("__asm");
            skip_spaces_and_lf(info);
            parse_function_attribute_skip_paren(info);
            tail_88=info->p;
            buffer_append(result,head_87,tail_88-head_87);
        }
        else {
            break;
        }
    }
    __result_obj__0 = (struct tuple2$2char$phchar$ph*)come_increment_ref_count(((struct tuple2$2char$phchar$ph*)(__right_value3=tuple2$2char$phchar$ph_initialize((struct tuple2$2char$phchar$ph*)come_increment_ref_count((struct tuple2$2char$phchar$ph*)come_calloc(1, sizeof(struct tuple2$2char$phchar$ph)*(1), "07function.nc", 1219, "struct tuple2$2char$phchar$ph")),(char*)come_increment_ref_count(buffer_to_string(asm_fun_name)),(char*)come_increment_ref_count(buffer_to_string(result))))));
    come_call_finalizer(buffer_finalize, asm_fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(tuple2$2char$phchar$ph$p_finalize, __right_value3, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple2$2char$phchar$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct tuple2$2char$phchar$ph* tuple2$2char$phchar$ph_initialize(struct tuple2$2char$phchar$ph* self, char* v1  , char* v2  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2char$phchar$ph_initialize"; neo_current_frame = &fr;
    char* __dec_obj75  ;
    char* __dec_obj76  ;
    struct tuple2$2char$phchar$ph* __result_obj__0;
    __dec_obj75=self->v1,
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj75 = come_decrement_ref_count(__dec_obj75, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj76=self->v2,
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj76 = come_decrement_ref_count(__dec_obj76, (void*)0, (void*)0, 0,0, (void*)0);
    __result_obj__0 = (struct tuple2$2char$phchar$ph*)come_increment_ref_count(self);
    come_call_finalizer(tuple2$2char$phchar$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 0, (void*)0));
    (v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0, 0, (void*)0));
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple2$2char$phchar$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

void transpile_toplevel(_Bool block, struct sInfo* info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "transpile_toplevel"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char* __dec_obj77  ;
    char* head;
    int head_sline;
    char* buf  ;
    struct sNode* node;
    _Bool Value;
    while(*info->p) {
        __dec_obj77=info->sname_at_head,
        info->sname_at_head=(char*)come_increment_ref_count((char*)come_memdup(info->sname, "07function.nc", 1226, "char*"));
        __dec_obj77 = come_decrement_ref_count(__dec_obj77, (void*)0, (void*)0, 0,0, (void*)0);
        skip_spaces_and_lf(info);
        if(*info->p==0) {
            break;
        }
        if(block&&*info->p==125) {
            info->p++;
            skip_spaces_and_lf(info);
            break;
        }
        head=info->p;
        head_sline=info->sline;
        buf=(char*)come_increment_ref_count(parse_word((_Bool)0,info));
        skip_spaces_and_lf(info);
        if(block&&*info->p==125) {
            info->p++;
            skip_spaces_and_lf(info);
            (buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 0, (void*)0));
            break;
        }
        node=(struct sNode*)come_increment_ref_count(top_level_v99(buf,head,head_sline,info));
        skip_spaces_and_lf(info);
        while(*info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        skip_spaces_and_lf(info);
        if(node!=((void*)0)) {
            Value=node_compile(node,info);
            if(!Value) {
                printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                exit(2);
            }
        }
        skip_spaces_and_lf(info);
        if(block&&*info->p==125) {
            info->p++;
            skip_spaces_and_lf(info);
            (buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 0, (void*)0));
            ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            break;
        }
        (buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 0, (void*)0));
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    neo_current_frame = fr.prev;
}

int transpile(struct sInfo* info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "transpile"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char* name  ;
    void* __right_value1 = (void*)0;
    void* __right_value2 = (void*)0;
    struct sType* result_type;
    struct list$1sType$ph* param_types;
    struct list$1char$ph* param_names;
    struct list$1char$ph* param_default_parametors;
    struct sFun* fun;
    char* name_92  ;
    struct sType* result_type_93;
    struct list$1sType$ph* param_types_94;
    struct list$1char$ph* param_names_95;
    struct list$1char$ph* param_default_parametors_96;
    struct sFun* fun_97;
    skip_spaces_and_lf(info);
    {
        name=(char*)come_increment_ref_count(__builtin_string("__builtin_va_start"));
        result_type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), (void*)0, 1283, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info,(_Bool)0));
        param_types=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), (void*)0, 1284, "struct list$1sType$ph*"))));
        param_names=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), (void*)0, 1285, "struct list$1char$ph*"))));
        param_default_parametors=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), (void*)0, 1286, "struct list$1char$ph*"))));
        fun=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), (void*)0, 1287, "struct sFun*")),(char*)come_increment_ref_count(name),(struct sType*)come_increment_ref_count(result_type),(struct list$1sType$ph*)come_increment_ref_count(param_types),(struct list$1char$ph*)come_increment_ref_count(param_names),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors),(_Bool)1,(_Bool)1,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0,((void*)0),((void*)0),0,(_Bool)0));
        map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name)),(struct sFun*)come_increment_ref_count(fun),(_Bool)0);
        (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sFun_finalize, fun, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    {
        name_92=(char*)come_increment_ref_count(__builtin_string("__builtin_va_end"));
        result_type_93=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), (void*)0, 1296, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info,(_Bool)0));
        param_types_94=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), (void*)0, 1297, "struct list$1sType$ph*"))));
        param_names_95=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), (void*)0, 1298, "struct list$1char$ph*"))));
        param_default_parametors_96=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), (void*)0, 1299, "struct list$1char$ph*"))));
        fun_97=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), (void*)0, 1300, "struct sFun*")),(char*)come_increment_ref_count(name_92),(struct sType*)come_increment_ref_count(result_type_93),(struct list$1sType$ph*)come_increment_ref_count(param_types_94),(struct list$1char$ph*)come_increment_ref_count(param_names_95),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_96),(_Bool)1,(_Bool)1,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0,((void*)0),((void*)0),0,(_Bool)0));
        map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_92)),(struct sFun*)come_increment_ref_count(fun_97),(_Bool)0);
        (name_92 = come_decrement_ref_count(name_92, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sType_finalize, result_type_93, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types_94, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_names_95, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors_96, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sFun_finalize, fun_97, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    transpile_toplevel((_Bool)0,info);
    neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

static struct map$2char$phsFun$ph* map$2char$phsFun$ph_insert(struct map$2char$phsFun$ph* self, char* key  , struct sFun* item  , _Bool by_pointer)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsFun$ph_insert"; neo_current_frame = &fr;
    struct map$2char$phsFun$ph* __result_obj__0;
    unsigned int hash;
    unsigned int it;
    _Bool same_key_exist;
    char* it2  ;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sFun_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len*10>=self->size) {
        map$2char$phsFun$ph_rehash(self);
    }
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if((!by_pointer&&string_equals(self->keys[it],key))||(by_pointer&&self->keys[it]==key)) {
                if(1) {
                    list$1char$ph_remove(self->key_list,self->keys[it],(_Bool)0);
                    (self->keys[it] = come_decrement_ref_count(self->keys[it], (void*)0, (void*)0, 0, 0, (void*)0));
                    self->keys[it]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it],(_Bool)0);
                    self->keys[it]=key;
                }
                if(1) {
                    come_call_finalizer(sFun_finalize, self->items[it], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->items[it]=(struct sFun*)come_increment_ref_count(item);
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
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it]=(_Bool)1;
            if(1) {
                self->keys[it]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it]=key;
            }
            if(1) {
                self->items[it]=(struct sFun*)come_increment_ref_count(item);
            }
            else {
                self->items[it]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist=(_Bool)0;
    for(it2=list$1char$ph_begin(self->key_list);!list$1char$ph_end(self->key_list);it2=list$1char$ph_next(self->key_list)){
        if((!by_pointer&&string_equals(it2,key))||(by_pointer&&it2==key)) {
            same_key_exist=(_Bool)1;
        }
    }
    if(!same_key_exist) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__0 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sFun_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void map$2char$phsFun$ph_rehash(struct map$2char$phsFun$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsFun$ph_rehash"; neo_current_frame = &fr;
    int size;
    void* __right_value0 = (void*)0;
    char** keys  ;
    struct sFun** items  ;
    _Bool* item_existance;
    int len;
    char* it  ;
    struct sFun* default_value  ;
    struct sFun* it2  ;
    unsigned int hash;
    int n;
    struct sFun* default_value_91  ;
    size=self->size*10;
    keys=(char**)come_increment_ref_count(((char**)(__right_value0=(char**)come_calloc(1, sizeof(char*)*(1*(size)), (void*)0, 1867, "char**"))));
    items=(struct sFun**)come_increment_ref_count(((struct sFun**)(__right_value0=(struct sFun**)come_calloc(1, sizeof(struct sFun*)*(1*(size)), (void*)0, 1868, "struct sFun**"))));
    item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value0=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size)), (void*)0, 1869, "_Bool*"))));
    len=0;
    for(it=map$2char$phsFun$ph_begin(self);!map$2char$phsFun$ph_end(self);it=map$2char$phsFun$ph_next(self)){
        memset(&default_value,0,sizeof(struct sFun*));
        it2=((struct sFun*)(__right_value0=map$2char$phsFun$ph_at(self,it,(struct sFun*)come_increment_ref_count(default_value),(_Bool)0)));
        hash=string_get_hash_key(((char*)it))%size;
        n=hash;
        while((_Bool)1) {
            if(item_existance[n]) {
                n++;
                if(n>=size) {
                    n=0;
                }
                else if(n==hash) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance[n]=(_Bool)1;
                keys[n]=it;
                memset(&default_value_91,0,sizeof(struct sFun*));
                items[n]=((struct sFun*)(__right_value0=map$2char$phsFun$ph_at(self,it,(struct sFun*)come_increment_ref_count(default_value_91),(_Bool)0)));
                len++;
                come_call_finalizer(sFun_finalize, default_value_91, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                come_call_finalizer(sFun_finalize, default_value_91, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    come_free((char*)self->items);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, (void*)0));
    come_free((char*)self->keys);
    self->keys=keys;
    self->items=items;
    self->item_existance=item_existance;
    self->size=size;
    self->len=len;
    neo_current_frame = fr.prev;
}

static char* map$2char$phsFun$ph_begin(struct map$2char$phsFun$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsFun$ph_begin"; neo_current_frame = &fr;
    char* result  ;
    char* __result_obj__0  ;
    char* result_89  ;
    if(self==((void*)0)) {
        memset(&result,0,sizeof(char*));
        __result_obj__0 = result;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    self->key_list->it=self->key_list->head;
    if(self->key_list->it) {
        __result_obj__0 = self->key_list->it->item;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    memset(&result_89,0,sizeof(char*));
    __result_obj__0 = result_89;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static _Bool map$2char$phsFun$ph_end(struct map$2char$phsFun$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsFun$ph_end"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
    neo_current_frame = fr.prev;
}

static char* map$2char$phsFun$ph_next(struct map$2char$phsFun$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsFun$ph_next"; neo_current_frame = &fr;
    char* result  ;
    char* __result_obj__0  ;
    char* result_90  ;
    if(self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result,0,sizeof(char*));
        __result_obj__0 = result;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    self->key_list->it=self->key_list->it->next;
    if(self->key_list->it) {
        __result_obj__0 = self->key_list->it->item;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    memset(&result_90,0,sizeof(char*));
    __result_obj__0 = result_90;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sFun* map$2char$phsFun$ph_at(struct map$2char$phsFun$ph* self, char* key  , struct sFun* default_value  , _Bool by_pointer)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsFun$ph_at"; neo_current_frame = &fr;
    struct sFun* __result_obj__0  ;
    unsigned int hash;
    unsigned int it;
    if(self==((void*)0)) {
        __result_obj__0 = (struct sFun*)come_increment_ref_count(default_value);
        come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        neo_current_frame = fr.prev;
        come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if((!by_pointer&&string_equals(self->keys[it],key))||(by_pointer&&self->keys[it]==key)) {
                __result_obj__0 = (struct sFun*)come_increment_ref_count(self->items[it]);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                neo_current_frame = fr.prev;
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
                neo_current_frame = fr.prev;
                come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
        }
        else {
            __result_obj__0 = (struct sFun*)come_increment_ref_count(default_value);
            come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            neo_current_frame = fr.prev;
            come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__0;
        }
    }
    __result_obj__0 = (struct sFun*)come_increment_ref_count(default_value);
    come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

struct sNode* top_level_v99(char* buf, char* head, int head_sline, struct sInfo* info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "top_level_v99"; neo_current_frame = &fr;
    char* source_head;
    _Bool is_type_name_flag;
    int sline;
    _Bool define_struct_nobody;
    _Bool no_output_come_code;
    char* p;
    int sline_98;
    void* __right_value0 = (void*)0;
    char* word  ;
    _Bool uniq_class;
    _Bool no_output_come_code_99;
    char* p_100;
    char* buf2  ;
    _Bool define_function_pointer_result_function;
    _Bool define_variable_between_brace;
    _Bool no_output_come_code_101;
    char* p_102;
    struct tuple3$3sType$phchar$ph_Bool$* multiple_assign_var3
;    struct sType* result_type  =0;
    char* fun_name  =0;
    _Bool err=0;
    char* word_103  ;
    _Bool define_function_flag;
    _Bool no_output_come_code_104;
    char* p_105;
    struct tuple3$3sType$phchar$ph_Bool$* multiple_assign_var4
;    struct sType* result_type_106  =0;
    char* fun_name_107  =0;
    _Bool err_108=0;
    char* word_109  ;
    char* __dec_obj78  ;
    char* __dec_obj79  ;
    char* __dec_obj80  ;
    char* __dec_obj81  ;
    _Bool define_variable;
    _Bool no_output_come_code_110;
    char* p_111;
    struct tuple3$3sType$phchar$ph_Bool$* multiple_assign_var5
;    struct sType* result_type_112  =0;
    char* fun_name_113  =0;
    _Bool err_114=0;
    char* word_115  ;
    char* word_116  ;
    _Bool no_output_come_code_117;
    char* p_118;
    char* word_119  ;
    char* __dec_obj82  ;
    char* buf2_120  ;
    struct sNode* __result_obj__0;
    char* word_121  ;
    char* word_122  ;
    struct sNode* node;
    char* header_head;
    struct tuple3$3sType$phchar$ph_Bool$* multiple_assign_var6
;    struct sType* result_type_123  =0;
    char* fun_name_124  =0;
    _Bool err_125=0;
    void* __right_value1 = (void*)0;
    struct list$1sType$ph* param_types;
    struct list$1char$ph* param_names;
    struct tuple3$3sType$phchar$ph_Bool$* multiple_assign_var7
;    struct sType* param_type  =0;
    char* param_name  =0;
    _Bool err_126=0;
    struct list$1sType$ph* param_types2;
    struct list$1char$ph* param_names2;
    struct tuple3$3sType$phchar$ph_Bool$* multiple_assign_var8
;    struct sType* param_type_129  =0;
    char* param_name_130  =0;
    _Bool err_131=0;
    char* header_tail;
    void* __right_value2 = (void*)0;
    struct sType* result_type2  ;
    struct sType* __dec_obj86  ;
    struct list$1sType$ph* __dec_obj87;
    struct list$1char$ph* __dec_obj88;
    _Bool var_args;
    struct list$1char$ph* param_default_parametors;
    struct sFun* fun;
    struct sNode* _inf_value3;
    struct sFunNode* _inf_obj_value3;
    struct sNode* result;
    char* struct_attribute0  ;
    char* word_139  ;
    void* __right_value3 = (void*)0;
    void* __right_value4 = (void*)0;
    void* __right_value5 = (void*)0;
    void* __right_value6 = (void*)0;
    char* struct_attribute  ;
    char* __dec_obj119  ;
    char* struct_attribute_140  ;
    char* __dec_obj120  ;
    char* struct_attribute_141  ;
    char* __dec_obj121  ;
    struct sNode* node_142;
    struct sNode* node_143;
    struct sNode* node_144;
    char* source_tail;
    struct buffer* header  ;
    char* buf2_145  ;
    info->in_top_level=(_Bool)1;
    source_head=info->p;
    is_type_name_flag=is_type_name(buf,info);
    sline=info->sline;
    define_struct_nobody=(_Bool)0;
    {
        no_output_come_code=info->no_output_come_code;
        info->no_output_come_code=(_Bool)1;
        p=info->p;
        sline_98=info->sline;
        if(charp_operator_equals(buf,"struct")) {
            if(xisalpha(*info->p)||*info->p==95) {
                word=(char*)come_increment_ref_count(parse_word((_Bool)0,info));
                if(*info->p==59) {
                    define_struct_nobody=(_Bool)1;
                }
                (word = come_decrement_ref_count(word, (void*)0, (void*)0, 0, 0, (void*)0));
            }
        }
        info->p=head;
        info->sline=sline_98;
        info->no_output_come_code=no_output_come_code;
    }
    uniq_class=(_Bool)0;
    if(charp_operator_equals(buf,"uniq")) {
        no_output_come_code_99=info->no_output_come_code;
        info->no_output_come_code=(_Bool)1;
        p_100=info->p;
        info->p=head;
        (void)((char*)(__right_value0=parse_word((_Bool)0,info)));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        if(xisalpha(*info->p)||*info->p==95) {
            buf2=(char*)come_increment_ref_count(parse_word((_Bool)0,info));
            if(string_operator_equals(buf2,"class")) {
                uniq_class=(_Bool)1;
            }
            (buf2 = come_decrement_ref_count(buf2, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        info->p=p_100;
        info->sline=sline;
        info->no_output_come_code=no_output_come_code_99;
    }
    define_function_pointer_result_function=(_Bool)0;
    define_variable_between_brace=(_Bool)0;
    if(is_type_name_flag&&!uniq_class) {
        no_output_come_code_101=info->no_output_come_code;
        info->no_output_come_code=(_Bool)1;
        p_102=info->p;
        info->p=head;
        if(xisalpha(*info->p)||*info->p==95) {
            multiple_assign_var3=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=backtrace_parse_type((_Bool)0,info)));
            result_type=(struct sType*)come_increment_ref_count(multiple_assign_var3->v1);
            fun_name=(char*)come_increment_ref_count(multiple_assign_var3->v2);
            err=multiple_assign_var3->v3;
            come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            if(*info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                if(*info->p!=42) {
                    define_function_pointer_result_function=(_Bool)1;
                    if(xisalpha(*info->p)||*info->p==95) {
                        word_103=(char*)come_increment_ref_count(parse_word((_Bool)0,info));
                        if(!is_type_name(word_103,info)&&*info->p==41) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(*info->p==40) {
                            }
                            else {
                                define_variable_between_brace=(_Bool)1;
                            }
                        }
                        (word_103 = come_decrement_ref_count(word_103, (void*)0, (void*)0, 0, 0, (void*)0));
                    }
                }
            }
            come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        info->no_output_come_code=no_output_come_code_101;
        info->p=head;
        info->sline=sline;
    }
    define_function_flag=(_Bool)0;
    if(is_type_name_flag&&!define_function_pointer_result_function&&charp_operator_not_equals(buf,"__typeof__")&&!uniq_class) {
        no_output_come_code_104=info->no_output_come_code;
        info->no_output_come_code=(_Bool)1;
        p_105=info->p;
        info->p=head;
        if(xisalpha(*info->p)||*info->p==95) {
            multiple_assign_var4=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=backtrace_parse_type((_Bool)0,info)));
            result_type_106=(struct sType*)come_increment_ref_count(multiple_assign_var4->v1);
            fun_name_107=(char*)come_increment_ref_count(multiple_assign_var4->v2);
            err_108=multiple_assign_var4->v3;
            come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer(sType_finalize, result_type_106, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (fun_name_107 = come_decrement_ref_count(fun_name_107, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        if(!info->define_struct) {
            info->define_struct=(_Bool)0;
            word_109=((void*)0);
            if(xisalnum(*info->p)||*info->p==95) {
                __dec_obj78=word_109,
                word_109=(char*)come_increment_ref_count(parse_word((_Bool)0,info));
                __dec_obj78 = come_decrement_ref_count(__dec_obj78, (void*)0, (void*)0, 0,0, (void*)0);
                if(string_operator_equals(word_109,"extern")) {
                    __dec_obj79=word_109,
                    word_109=(char*)come_increment_ref_count(parse_word((_Bool)0,info));
                    __dec_obj79 = come_decrement_ref_count(__dec_obj79, (void*)0, (void*)0, 0,0, (void*)0);
                }
            }
            else {
                __dec_obj80=word_109,
                word_109=((void*)0);
                __dec_obj80 = come_decrement_ref_count(__dec_obj80, (void*)0, (void*)0, 0,0, (void*)0);
            }
            if(word_109) {
                if(is_type_name(word_109,info)) {
                    while(*info->p==42) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    if(*info->p==91&&*(info->p+1)==93) {
                        info->p+=2;
                        skip_spaces_and_lf(info);
                    }
                    if(*info->p==58) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    if(*info->p==58) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    if(xisalnum(*info->p)||*info->p==95) {
                        __dec_obj81=word_109,
                        word_109=(char*)come_increment_ref_count(parse_word((_Bool)0,info));
                        __dec_obj81 = come_decrement_ref_count(__dec_obj81, (void*)0, (void*)0, 0,0, (void*)0);
                    }
                }
                if(strlen(word_109)>0&&(*info->p==40||(*info->p==58&&*(info->p+1)==58))) {
                    if(is_type_name_flag) {
                        define_function_flag=(_Bool)1;
                    }
                }
            }
            (word_109 = come_decrement_ref_count(word_109, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        info->no_output_come_code=no_output_come_code_104;
        info->p=p_105;
        info->sline=sline;
    }
    define_variable=(_Bool)1;
    if(is_type_name_flag&&!define_function_pointer_result_function&&!uniq_class) {
        no_output_come_code_110=info->no_output_come_code;
        info->no_output_come_code=(_Bool)1;
        p_111=info->p;
        info->p=head;
        if(!is_type_name_flag) {
            define_variable=(_Bool)0;
        }
        if(xisalpha(*info->p)||*info->p==95) {
            multiple_assign_var5=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=backtrace_parse_type((_Bool)0,info)));
            result_type_112=(struct sType*)come_increment_ref_count(multiple_assign_var5->v1);
            fun_name_113=(char*)come_increment_ref_count(multiple_assign_var5->v2);
            err_114=multiple_assign_var5->v3;
            come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            if(*info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                if(*info->p==42) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(xisalpha(*info->p)||*info->p==95) {
                        word_115=(char*)come_increment_ref_count(parse_word((_Bool)0,info));
                        if(*info->p==41) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(*info->p==40) {
                                define_variable=(_Bool)1;
                            }
                        }
                        (word_115 = come_decrement_ref_count(word_115, (void*)0, (void*)0, 0, 0, (void*)0));
                    }
                }
                else if(xisalpha(*info->p)||*info->p==95) {
                    word_116=(char*)come_increment_ref_count(parse_word((_Bool)0,info));
                    if(*info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        if(!is_type_name(word_116,info)&&*info->p!=40) {
                            define_variable=(_Bool)1;
                        }
                    }
                    (word_116 = come_decrement_ref_count(word_116, (void*)0, (void*)0, 0, 0, (void*)0));
                }
            }
            come_call_finalizer(sType_finalize, result_type_112, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (fun_name_113 = come_decrement_ref_count(fun_name_113, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        if(info->define_struct) {
            info->define_struct=(_Bool)0;
            define_variable=(_Bool)0;
        }
        else if(define_variable) {
        }
        else {
            if(!(xisalpha(*info->p)||*info->p==95)) {
                define_variable=(_Bool)0;
            }
            while(xisalpha(*info->p)||*info->p==95) {
                info->p++;
            }
            skip_spaces_and_lf(info);
            if(*info->p==40||*info->p==58) {
                define_variable=(_Bool)0;
            }
        }
        info->p=p_111;
        info->sline=sline;
        info->no_output_come_code=no_output_come_code_110;
    }
    else {
        define_variable=(_Bool)0;
    }
    if(!define_function_pointer_result_function) {
        no_output_come_code_117=info->no_output_come_code;
        info->no_output_come_code=(_Bool)1;
        p_118=info->p;
        info->p=head;
        if(charp_operator_equals(buf,"struct")) {
            ((char*)(__right_value0=parse_struct_attribute(info)));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            if(xisalpha(*info->p)||*info->p==95) {
                ((char*)(__right_value0=parse_word((_Bool)0,info)));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                if(xisalpha(*info->p)||*info->p==95) {
                    word_119=(char*)come_increment_ref_count(parse_word((_Bool)0,info));
                    if(xisalpha(*info->p)||*info->p==95) {
                        __dec_obj82=word_119,
                        word_119=(char*)come_increment_ref_count(parse_word((_Bool)0,info));
                        __dec_obj82 = come_decrement_ref_count(__dec_obj82, (void*)0, (void*)0, 0,0, (void*)0);
                        if(string_operator_equals(word_119,"extends")) {
                            define_variable=(_Bool)0;
                        }
                    }
                    (word_119 = come_decrement_ref_count(word_119, (void*)0, (void*)0, 0, 0, (void*)0));
                }
            }
        }
        if(info->define_struct) {
            info->define_struct=(_Bool)0;
            define_variable=(_Bool)0;
        }
        else if(define_variable) {
        }
        else {
            if(!(xisalpha(*info->p)||*info->p==95)) {
                define_variable=(_Bool)0;
            }
            while(xisalpha(*info->p)||*info->p==95) {
                info->p++;
            }
            skip_spaces_and_lf(info);
            if(*info->p==40||*info->p==58) {
                define_variable=(_Bool)0;
            }
        }
        info->p=p_118;
        info->sline=sline;
        info->no_output_come_code=no_output_come_code_117;
    }
    if(uniq_class) {
        info->p=head;
        info->sline=sline;
        buf2_120=(char*)come_increment_ref_count(parse_word((_Bool)0,info));
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=top_level_v98(buf2_120,head,head_sline,info))));
        (buf2_120 = come_decrement_ref_count(buf2_120, (void*)0, (void*)0, 0, 0, (void*)0));
        ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__0;
        (buf2_120 = come_decrement_ref_count(buf2_120, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    else if(charp_operator_equals(buf,"template")) {
        word_121=(char*)come_increment_ref_count(parse_word((_Bool)0,info));
        if(*info->p==60) {
            info->p++;
            skip_spaces_and_lf(info);
            list$1char$ph_reset(info->method_generics_type_names);
            while((_Bool)1) {
                if(*info->p==62) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    break;
                }
                else if(*info->p==44) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                else if(*info->p==0) {
                    err_msg(info,"unexpected source end");
                    exit(2);
                }
                else {
                    word_122=(char*)come_increment_ref_count(parse_word((_Bool)0,info));
                    list$1char$ph_push_back(info->method_generics_type_names,(char*)come_increment_ref_count((char*)come_memdup(word_122, "07function.nc", 1644, "char*")));
                    (word_122 = come_decrement_ref_count(word_122, (void*)0, (void*)0, 0, 0, (void*)0));
                }
            }
            node=(struct sNode*)come_increment_ref_count(parse_function(info));
            list$1char$ph_reset(info->method_generics_type_names);
            __result_obj__0 = (struct sNode*)come_increment_ref_count(node);
            ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            (word_121 = come_decrement_ref_count(word_121, (void*)0, (void*)0, 0, 0, (void*)0));
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__0;
            ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
        (word_121 = come_decrement_ref_count(word_121, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    else if(charp_operator_equals(buf,"enum")&&*info->p==123) {
    }
    else if(define_struct_nobody) {
    }
    else if(define_variable_between_brace) {
        info->p=head;
        info->sline=sline;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=parse_global_variable(info))));
        ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__0;
    }
    else if(define_function_pointer_result_function) {
        header_head=info->p;
        multiple_assign_var6=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        result_type_123=(struct sType*)come_increment_ref_count(multiple_assign_var6->v1);
        fun_name_124=(char*)come_increment_ref_count(multiple_assign_var6->v2);
        err_125=multiple_assign_var6->v3;
        come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        if(*info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
            param_types=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), (void*)0, 1673, "struct list$1sType$ph*"))));
            param_names=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), (void*)0, 1674, "struct list$1char$ph*"))));
            if(*info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                while((_Bool)1) {
                    multiple_assign_var7=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                    param_type=(struct sType*)come_increment_ref_count(multiple_assign_var7->v1);
                    param_name=(char*)come_increment_ref_count(multiple_assign_var7->v2);
                    err_126=multiple_assign_var7->v3;
                    come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    if(!err_126) {
                        err_msg(info,"parse_type is failed");
                        exit(2);
                    }
                    list$1sType$ph_push_back(param_types,(struct sType*)come_increment_ref_count(param_type));
                    static int num_function_pointer_result_var_name_a=0;
                    list$1char$ph_push_back(param_names,(char*)come_increment_ref_count(xsprintf("_function_pointer_result_var_name_a%d",++num_function_pointer_result_var_name_a)));
                    if(xisalpha(*info->p)||*info->p==95) {
                        (void)((char*)(__right_value0=parse_word((_Bool)0,info)));
                        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                    }
                    if(*info->p==44) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    else if(*info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        come_call_finalizer(sType_finalize, param_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        (param_name = come_decrement_ref_count(param_name, (void*)0, (void*)0, 0, 0, (void*)0));
                        break;
                    }
                    else {
                        err_msg(info,"require , or ) (1) it is %c",*info->p);
                        exit(2);
                    }
                    come_call_finalizer(sType_finalize, param_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    (param_name = come_decrement_ref_count(param_name, (void*)0, (void*)0, 0, 0, (void*)0));
                }
            }
            expected_next_character(41,info);
            if(*info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                param_types2=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), (void*)0, 1720, "struct list$1sType$ph*"))));
                param_names2=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), (void*)0, 1721, "struct list$1char$ph*"))));
                if(*info->p==41) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                else {
                    while((_Bool)1) {
                        multiple_assign_var8=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                        param_type_129=(struct sType*)come_increment_ref_count(multiple_assign_var8->v1);
                        param_name_130=(char*)come_increment_ref_count(multiple_assign_var8->v2);
                        err_131=multiple_assign_var8->v3;
                        come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                        if(!err_131) {
                            err_msg(info,"parse_type is failed");
                            exit(2);
                        }
                        list$1sType$ph_push_back(param_types2,(struct sType*)come_increment_ref_count(param_type_129));
                        static int num_function_pointer_result_var_name_b=0;
                        list$1char$ph_push_back(param_names2,(char*)come_increment_ref_count(xsprintf("_function_pointer_result_var_name_b%d",++num_function_pointer_result_var_name_b)));
                        if(xisalpha(*info->p)||*info->p==95) {
                            (void)((char*)(__right_value0=parse_word((_Bool)0,info)));
                            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                        }
                        if(*info->p==44) {
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        else if(*info->p==41) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            come_call_finalizer(sType_finalize, param_type_129, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            (param_name_130 = come_decrement_ref_count(param_name_130, (void*)0, (void*)0, 0, 0, (void*)0));
                            break;
                        }
                        else {
                            err_msg(info,"require , or ) (2)");
                            exit(2);
                        }
                        come_call_finalizer(sType_finalize, param_type_129, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        (param_name_130 = come_decrement_ref_count(param_name_130, (void*)0, (void*)0, 0, 0, (void*)0));
                    }
                }
                header_tail=info->p;
                result_type2=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), (void*)0, 1763, "struct sType*")),(char*)come_increment_ref_count(xsprintf("lambda")),(_Bool)0,info,(_Bool)0));
                __dec_obj86=result_type2->mResultType,
                result_type2->mResultType=(struct sType*)come_increment_ref_count(result_type_123);
                come_call_finalizer(sType_finalize, __dec_obj86,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                __dec_obj87=result_type2->mParamTypes,
                result_type2->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(param_types2));
                come_call_finalizer(list$1sType$ph_finalize, __dec_obj87,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                __dec_obj88=result_type2->mParamNames,
                result_type2->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(param_names2));
                come_call_finalizer(list$1char$ph_finalize, __dec_obj88,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                result_type2->mVarArgs=(_Bool)0;
                result_type2->mStatic=(_Bool)0;
                var_args=(_Bool)0;
                param_default_parametors=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), (void*)0, 1773, "struct list$1char$ph*"))));
                fun=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), (void*)0, 1775, "struct sFun*")),(char*)come_increment_ref_count(__builtin_string(fun_name_124)),(struct sType*)come_increment_ref_count(result_type2),(struct list$1sType$ph*)come_increment_ref_count(param_types),(struct list$1char$ph*)come_increment_ref_count(param_names),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors),(_Bool)1,var_args,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0,((void*)0),((void*)0),0,(_Bool)0));
                map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_124)),(struct sFun*)come_increment_ref_count(fun),(_Bool)0);
                _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 1784, "struct sNode");
                _inf_obj_value3=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), (void*)0, 1784, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun),info))));
                _inf_value3->_protocol_obj=_inf_obj_value3;
                _inf_value3->finalize=(void*)sFunNode_finalize;
                _inf_value3->clone=(void*)sFunNode_clone;
                _inf_value3->compile=(void*)sFunNode_compile;
                _inf_value3->sline=(void*)sNodeBase_sline;
                _inf_value3->sline_real=(void*)sNodeBase_sline_real;
                _inf_value3->sname=(void*)sNodeBase_sname;
                _inf_value3->terminated=(void*)sNodeBase_terminated;
                _inf_value3->kind=(void*)sFunNode_kind;
                _inf_value3->no_mutex=(void*)sNodeBase_no_mutex;
                result=(struct sNode*)come_increment_ref_count(_inf_value3);
                come_call_finalizer(sFunNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                __result_obj__0 = (struct sNode*)come_increment_ref_count(result);
                come_call_finalizer(list$1sType$ph$p_finalize, param_types2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(list$1char$ph$p_finalize, param_names2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, result_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sFun_finalize, fun, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                ((result) ? result = come_decrement_ref_count(result, ((struct sNode*)result)->finalize, ((struct sNode*)result)->_protocol_obj, 0, 1,(void*)0):(void*)0);
                come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, result_type_123, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (fun_name_124 = come_decrement_ref_count(fun_name_124, (void*)0, (void*)0, 0, 0, (void*)0));
                neo_current_frame = fr.prev;
                ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
                return __result_obj__0;
                come_call_finalizer(list$1sType$ph$p_finalize, param_types2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(list$1char$ph$p_finalize, param_names2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, result_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sFun_finalize, fun, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                ((result) ? result = come_decrement_ref_count(result, ((struct sNode*)result)->finalize, ((struct sNode*)result)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            }
            else {
                err_msg(info,"require (");
                exit(2);
            }
            come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer(sType_finalize, result_type_123, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (fun_name_124 = come_decrement_ref_count(fun_name_124, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    else if(charp_operator_equals(buf,"__attribute__")) {
        info->p=head;
        info->sline=sline;
        struct_attribute0=(char*)come_increment_ref_count(parse_struct_attribute(info));
        if(xisalpha(*info->p)||*info->p==95) {
            word_139=(char*)come_increment_ref_count(parse_word((_Bool)0,info));
            if(string_operator_equals(word_139,"struct")) {
                struct_attribute=(char*)come_increment_ref_count(string_operator_add(((char*)(__right_value5=string_operator_add(((char*)(__right_value4=parse_struct_attribute(info)))," "))),struct_attribute0));
                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
                (__right_value4 = come_decrement_ref_count(__right_value4, (void*)0, (void*)0, 1, 0, (void*)0));
                (__right_value5 = come_decrement_ref_count(__right_value5, (void*)0, (void*)0, 1, 0, (void*)0));
                __dec_obj119=word_139,
                word_139=(char*)come_increment_ref_count(parse_word((_Bool)0,info));
                __dec_obj119 = come_decrement_ref_count(__dec_obj119, (void*)0, (void*)0, 0,0, (void*)0);
                __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=parse_struct((char*)come_increment_ref_count(word_139),(char*)come_increment_ref_count(struct_attribute),info,(_Bool)0))));
                (struct_attribute = come_decrement_ref_count(struct_attribute, (void*)0, (void*)0, 0, 0, (void*)0));
                (word_139 = come_decrement_ref_count(word_139, (void*)0, (void*)0, 0, 0, (void*)0));
                (struct_attribute0 = come_decrement_ref_count(struct_attribute0, (void*)0, (void*)0, 0, 0, (void*)0));
                ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0):(void*)0);
                neo_current_frame = fr.prev;
                ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
                return __result_obj__0;
                (struct_attribute = come_decrement_ref_count(struct_attribute, (void*)0, (void*)0, 0, 0, (void*)0));
            }
            else if(string_operator_equals(word_139,"union")) {
                struct_attribute_140=(char*)come_increment_ref_count(string_operator_add(((char*)(__right_value5=string_operator_add(((char*)(__right_value4=parse_struct_attribute(info)))," "))),struct_attribute0));
                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
                (__right_value4 = come_decrement_ref_count(__right_value4, (void*)0, (void*)0, 1, 0, (void*)0));
                (__right_value5 = come_decrement_ref_count(__right_value5, (void*)0, (void*)0, 1, 0, (void*)0));
                __dec_obj120=word_139,
                word_139=(char*)come_increment_ref_count(parse_word((_Bool)0,info));
                __dec_obj120 = come_decrement_ref_count(__dec_obj120, (void*)0, (void*)0, 0,0, (void*)0);
                __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=parse_union((char*)come_increment_ref_count(word_139),(char*)come_increment_ref_count(struct_attribute_140),info,(_Bool)0))));
                (struct_attribute_140 = come_decrement_ref_count(struct_attribute_140, (void*)0, (void*)0, 0, 0, (void*)0));
                (word_139 = come_decrement_ref_count(word_139, (void*)0, (void*)0, 0, 0, (void*)0));
                (struct_attribute0 = come_decrement_ref_count(struct_attribute0, (void*)0, (void*)0, 0, 0, (void*)0));
                ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0):(void*)0);
                neo_current_frame = fr.prev;
                ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
                return __result_obj__0;
                (struct_attribute_140 = come_decrement_ref_count(struct_attribute_140, (void*)0, (void*)0, 0, 0, (void*)0));
            }
            else if(string_operator_equals(word_139,"enum")) {
                struct_attribute_141=(char*)come_increment_ref_count(string_operator_add(((char*)(__right_value5=string_operator_add(((char*)(__right_value4=parse_struct_attribute(info)))," "))),struct_attribute0));
                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
                (__right_value4 = come_decrement_ref_count(__right_value4, (void*)0, (void*)0, 1, 0, (void*)0));
                (__right_value5 = come_decrement_ref_count(__right_value5, (void*)0, (void*)0, 1, 0, (void*)0));
                __dec_obj121=word_139,
                word_139=(char*)come_increment_ref_count(parse_word((_Bool)0,info));
                __dec_obj121 = come_decrement_ref_count(__dec_obj121, (void*)0, (void*)0, 0,0, (void*)0);
                __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=parse_enum((char*)come_increment_ref_count(word_139),(char*)come_increment_ref_count(struct_attribute_141),info))));
                (struct_attribute_141 = come_decrement_ref_count(struct_attribute_141, (void*)0, (void*)0, 0, 0, (void*)0));
                (word_139 = come_decrement_ref_count(word_139, (void*)0, (void*)0, 0, 0, (void*)0));
                (struct_attribute0 = come_decrement_ref_count(struct_attribute0, (void*)0, (void*)0, 0, 0, (void*)0));
                ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0):(void*)0);
                neo_current_frame = fr.prev;
                ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
                return __result_obj__0;
                (struct_attribute_141 = come_decrement_ref_count(struct_attribute_141, (void*)0, (void*)0, 0, 0, (void*)0));
            }
            else if(is_type_name(word_139,info)) {
                info->p=head;
                info->sline=sline;
                node_142=(struct sNode*)come_increment_ref_count(parse_function(info));
                __result_obj__0 = (struct sNode*)come_increment_ref_count(node_142);
                ((node_142) ? node_142 = come_decrement_ref_count(node_142, ((struct sNode*)node_142)->finalize, ((struct sNode*)node_142)->_protocol_obj, 0, 1,(void*)0):(void*)0);
                (word_139 = come_decrement_ref_count(word_139, (void*)0, (void*)0, 0, 0, (void*)0));
                (struct_attribute0 = come_decrement_ref_count(struct_attribute0, (void*)0, (void*)0, 0, 0, (void*)0));
                neo_current_frame = fr.prev;
                ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
                return __result_obj__0;
                ((node_142) ? node_142 = come_decrement_ref_count(node_142, ((struct sNode*)node_142)->finalize, ((struct sNode*)node_142)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            }
            else {
                err_msg(info,"invalid __attribute__");
                __result_obj__0 = (struct sNode*)come_increment_ref_count(((void*)0));
                (word_139 = come_decrement_ref_count(word_139, (void*)0, (void*)0, 0, 0, (void*)0));
                (struct_attribute0 = come_decrement_ref_count(struct_attribute0, (void*)0, (void*)0, 0, 0, (void*)0));
                neo_current_frame = fr.prev;
                ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
                return __result_obj__0;
            }
            (word_139 = come_decrement_ref_count(word_139, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        else {
            err_msg(info,"invalid __attribute__");
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((void*)0));
            (struct_attribute0 = come_decrement_ref_count(struct_attribute0, (void*)0, (void*)0, 0, 0, (void*)0));
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__0;
        }
        (struct_attribute0 = come_decrement_ref_count(struct_attribute0, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    else if(define_function_flag) {
        info->p=head;
        info->sline=sline;
        node_143=(struct sNode*)come_increment_ref_count(parse_function(info));
        __result_obj__0 = (struct sNode*)come_increment_ref_count(node_143);
        ((node_143) ? node_143 = come_decrement_ref_count(node_143, ((struct sNode*)node_143)->finalize, ((struct sNode*)node_143)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__0;
        ((node_143) ? node_143 = come_decrement_ref_count(node_143, ((struct sNode*)node_143)->finalize, ((struct sNode*)node_143)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    else if(define_variable) {
        info->p=head;
        info->sline=sline;
        node_144=(struct sNode*)come_increment_ref_count(parse_global_variable(info));
        source_tail=info->p;
        header=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), (void*)0, 1852, "struct buffer*"))));
        buffer_append(header,source_head,source_tail-source_head);
        __result_obj__0 = (struct sNode*)come_increment_ref_count(node_144);
        ((node_144) ? node_144 = come_decrement_ref_count(node_144, ((struct sNode*)node_144)->finalize, ((struct sNode*)node_144)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        come_call_finalizer(buffer_finalize, header, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__0;
        ((node_144) ? node_144 = come_decrement_ref_count(node_144, ((struct sNode*)node_144)->finalize, ((struct sNode*)node_144)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(buffer_finalize, header, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    info->p=head;
    info->sline=sline;
    buf2_145=(char*)come_increment_ref_count(parse_word((_Bool)0,info));
    __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=top_level_v98(buf2_145,head,head_sline,info))));
    (buf2_145 = come_decrement_ref_count(buf2_145, (void*)0, (void*)0, 0, 0, (void*)0));
    ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    return __result_obj__0;
}

static struct list$1sType$ph* list$1sType$ph_push_back(struct list$1sType$ph* self, struct sType* item  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_push_back"; neo_current_frame = &fr;
    struct list$1sType$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1sType$ph* litem;
    struct sType* __dec_obj83  ;
    struct list_item$1sType$ph* litem_127;
    struct sType* __dec_obj84  ;
    struct list_item$1sType$ph* litem_128;
    struct sType* __dec_obj85  ;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), (void*)0, 701, "struct list_item$1sType$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj83=litem->item,
        litem->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj83,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        litem_127=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), (void*)0, 711, "struct list_item$1sType$ph*"))));
        litem_127->prev=self->head;
        litem_127->next=((void*)0);
        __dec_obj84=litem_127->item,
        litem_127->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj84,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem_127;
        self->head->next=litem_127;
    }
    else {
        litem_128=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), (void*)0, 721, "struct list_item$1sType$ph*"))));
        litem_128->prev=self->tail;
        litem_128->next=((void*)0);
        __dec_obj85=litem_128->item,
        litem_128->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj85,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail->next=litem_128;
        self->tail=litem_128;
    }
    self->len++;
    __result_obj__0 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sFunNode* sFunNode_clone(struct sFunNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sFunNode_clone"; neo_current_frame = &fr;
    struct sFunNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sFunNode* result  ;
    char* __dec_obj89  ;
    struct sFun* __dec_obj118  ;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), (void*)0, 3, "struct sFunNode*"));
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj89=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sFunNode_clone", 5, "char*"));
        __dec_obj89 = come_decrement_ref_count(__dec_obj89, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->mFun!=((void*)0)) {
        __dec_obj118=result->mFun,
        result->mFun=(struct sFun*)come_increment_ref_count(sFun_clone(self->mFun));
        come_call_finalizer(sFun_finalize, __dec_obj118,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result_obj__0 = result;
    come_call_finalizer(sFunNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sFun* sFun_clone(struct sFun* self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sFun_clone"; neo_current_frame = &fr;
    struct sFun* __result_obj__0  ;
    void* __right_value0 = (void*)0;
    struct sFun* result  ;
    char* __dec_obj90  ;
    struct sType* __dec_obj91  ;
    struct list$1sType$ph* __dec_obj92;
    struct list$1char$ph* __dec_obj93;
    struct list$1char$ph* __dec_obj94;
    struct sType* __dec_obj95  ;
    struct list$1sVar$ph* __dec_obj103;
    struct sBlock* __dec_obj109  ;
    char* __dec_obj110  ;
    char* __dec_obj111  ;
    struct buffer* __dec_obj112  ;
    struct buffer* __dec_obj113  ;
    struct buffer* __dec_obj114  ;
    struct buffer* __dec_obj115  ;
    char* __dec_obj116  ;
    char* __dec_obj117  ;
    if(self==(void*)0) {
        __result_obj__0 = (struct sFun*)come_increment_ref_count((void*)0);
        neo_current_frame = fr.prev;
        come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    result=(struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), (void*)0, 3, "struct sFun*"));
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj90=result->mName,
        result->mName=(char*)come_increment_ref_count((char*)come_memdup(self->mName, "sFun_clone", 4, "char*"));
        __dec_obj90 = come_decrement_ref_count(__dec_obj90, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj91=result->mResultType,
        result->mResultType=(struct sType*)come_increment_ref_count(sType_clone(self->mResultType));
        come_call_finalizer(sType_finalize, __dec_obj91,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj92=result->mParamTypes,
        result->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mParamTypes));
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj92,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj93=result->mParamNames,
        result->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->mParamNames));
        come_call_finalizer(list$1char$ph_finalize, __dec_obj93,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        __dec_obj94=result->mParamDefaultParametors,
        result->mParamDefaultParametors=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->mParamDefaultParametors));
        come_call_finalizer(list$1char$ph_finalize, __dec_obj94,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        __dec_obj95=result->mLambdaType,
        result->mLambdaType=(struct sType*)come_increment_ref_count(sType_clone(self->mLambdaType));
        come_call_finalizer(sType_finalize, __dec_obj95,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mAllVar!=((void*)0)) {
        __dec_obj103=result->mAllVar,
        result->mAllVar=(struct list$1sVar$ph*)come_increment_ref_count(list$1sVar$ph$p_clone(self->mAllVar));
        come_call_finalizer(list$1sVar$ph_finalize, __dec_obj103,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mBlock!=((void*)0)) {
        __dec_obj109=result->mBlock,
        result->mBlock=(struct sBlock*)come_increment_ref_count(sBlock_clone(self->mBlock));
        come_call_finalizer(sBlock_finalize, __dec_obj109,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mTextBlock!=((void*)0)) {
        __dec_obj110=result->mTextBlock,
        result->mTextBlock=(char*)come_increment_ref_count((char*)come_memdup(self->mTextBlock, "sFun_clone", 12, "char*"));
        __dec_obj110 = come_decrement_ref_count(__dec_obj110, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->mTextBlockSName!=((void*)0)) {
        __dec_obj111=result->mTextBlockSName,
        result->mTextBlockSName=(char*)come_increment_ref_count((char*)come_memdup(self->mTextBlockSName, "sFun_clone", 13, "char*"));
        __dec_obj111 = come_decrement_ref_count(__dec_obj111, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result->mTextBlockSline=self->mTextBlockSline;
    }
    if(self!=((void*)0)&&self->mSource!=((void*)0)) {
        __dec_obj112=result->mSource,
        result->mSource=(struct buffer*)come_increment_ref_count(buffer_clone(self->mSource));
        come_call_finalizer(buffer_finalize, __dec_obj112,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        __dec_obj113=result->mSourceHead,
        result->mSourceHead=(struct buffer*)come_increment_ref_count(buffer_clone(self->mSourceHead));
        come_call_finalizer(buffer_finalize, __dec_obj113,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        __dec_obj114=result->mSourceHead2,
        result->mSourceHead2=(struct buffer*)come_increment_ref_count(buffer_clone(self->mSourceHead2));
        come_call_finalizer(buffer_finalize, __dec_obj114,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
        __dec_obj115=result->mSourceDefer,
        result->mSourceDefer=(struct buffer*)come_increment_ref_count(buffer_clone(self->mSourceDefer));
        come_call_finalizer(buffer_finalize, __dec_obj115,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)) {
        result->mStatic=self->mStatic;
    }
    if(self!=((void*)0)) {
        result->mInline=self->mInline;
    }
    if(self!=((void*)0)) {
        result->mUniq=self->mUniq;
    }
    if(self!=((void*)0)) {
        result->mGenerate=self->mGenerate;
    }
    if(self!=((void*)0)) {
        result->mExternal=self->mExternal;
    }
    if(self!=((void*)0)) {
        result->mVarArgs=self->mVarArgs;
    }
    if(self!=((void*)0)) {
        result->mNoResultType=self->mNoResultType;
    }
    if(self!=((void*)0)) {
        result->mConstFun=self->mConstFun;
    }
    if(self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj116=result->mAttribute,
        result->mAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mAttribute, "sFun_clone", 27, "char*"));
        __dec_obj116 = come_decrement_ref_count(__dec_obj116, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->mFunAttribute!=((void*)0)) {
        __dec_obj117=result->mFunAttribute,
        result->mFunAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mFunAttribute, "sFun_clone", 28, "char*"));
        __dec_obj117 = come_decrement_ref_count(__dec_obj117, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result->mGenericsFun=self->mGenericsFun;
    }
    if(self!=((void*)0)) {
        result->mDefineReturnVar=self->mDefineReturnVar;
    }
    __result_obj__0 = (struct sFun*)come_increment_ref_count(result);
    come_call_finalizer(sFun_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct list$1sVar$ph* list$1sVar$ph$p_clone(struct list$1sVar$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sVar$ph$p_clone"; neo_current_frame = &fr;
    struct list$1sVar$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1sVar$ph* result;
    struct list_item$1sVar$ph* it;
    if(self==((void*)0)) {
        __result_obj__0 = (struct list$1sVar$ph*)come_increment_ref_count(((void*)0));
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1sVar$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    result=(struct list$1sVar$ph*)come_increment_ref_count(list$1sVar$ph_initialize((struct list$1sVar$ph*)come_increment_ref_count((struct list$1sVar$ph*)come_calloc(1, sizeof(struct list$1sVar$ph)*(1), (void*)0, 595, "struct list$1sVar$ph*"))));
    it=self->head;
    while(it!=((void*)0)) {
        if(1) {
            list$1sVar$ph_add(result,(struct sVar*)come_increment_ref_count(sVar_clone(it->item)));
        }
        else {
            list$1sVar$ph_add(result,(struct sVar*)come_increment_ref_count(sVar_clone(it->item)));
        }
        it=it->next;
    }
    __result_obj__0 = (struct list$1sVar$ph*)come_increment_ref_count(result);
    come_call_finalizer(list$1sVar$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sVar$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct list$1sVar$ph* list$1sVar$ph_initialize(struct list$1sVar$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sVar$ph_initialize"; neo_current_frame = &fr;
    struct list$1sVar$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__0 = (struct list$1sVar$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1sVar$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sVar$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct list$1sVar$ph* list$1sVar$ph_add(struct list$1sVar$ph* self, struct sVar* item  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sVar$ph_add"; neo_current_frame = &fr;
    struct list$1sVar$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1sVar$ph* litem;
    struct sVar* __dec_obj96  ;
    struct list_item$1sVar$ph* litem_132;
    struct sVar* __dec_obj97  ;
    struct list_item$1sVar$ph* litem_133;
    struct sVar* __dec_obj98  ;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        come_call_finalizer(sVar_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1sVar$ph*)come_increment_ref_count(((struct list_item$1sVar$ph*)(__right_value0=(struct list_item$1sVar$ph*)come_calloc(1, sizeof(struct list_item$1sVar$ph)*(1), (void*)0, 616, "struct list_item$1sVar$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj96=litem->item,
        litem->item=(struct sVar*)come_increment_ref_count(item);
        come_call_finalizer(sVar_finalize, __dec_obj96,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        litem_132=(struct list_item$1sVar$ph*)come_increment_ref_count(((struct list_item$1sVar$ph*)(__right_value0=(struct list_item$1sVar$ph*)come_calloc(1, sizeof(struct list_item$1sVar$ph)*(1), (void*)0, 626, "struct list_item$1sVar$ph*"))));
        litem_132->prev=self->head;
        litem_132->next=((void*)0);
        __dec_obj97=litem_132->item,
        litem_132->item=(struct sVar*)come_increment_ref_count(item);
        come_call_finalizer(sVar_finalize, __dec_obj97,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem_132;
        self->head->next=litem_132;
    }
    else {
        litem_133=(struct list_item$1sVar$ph*)come_increment_ref_count(((struct list_item$1sVar$ph*)(__right_value0=(struct list_item$1sVar$ph*)come_calloc(1, sizeof(struct list_item$1sVar$ph)*(1), (void*)0, 636, "struct list_item$1sVar$ph*"))));
        litem_133->prev=self->tail;
        litem_133->next=((void*)0);
        __dec_obj98=litem_133->item,
        litem_133->item=(struct sVar*)come_increment_ref_count(item);
        come_call_finalizer(sVar_finalize, __dec_obj98,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail->next=litem_133;
        self->tail=litem_133;
    }
    self->len++;
    __result_obj__0 = self;
    come_call_finalizer(sVar_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sVar* sVar_clone(struct sVar* self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sVar_clone"; neo_current_frame = &fr;
    struct sVar* __result_obj__0  ;
    void* __right_value0 = (void*)0;
    struct sVar* result  ;
    char* __dec_obj99  ;
    char* __dec_obj100  ;
    struct sType* __dec_obj101  ;
    char* __dec_obj102  ;
    if(self==(void*)0) {
        __result_obj__0 = (struct sVar*)come_increment_ref_count((void*)0);
        neo_current_frame = fr.prev;
        come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    result=(struct sVar*)come_increment_ref_count((struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), (void*)0, 3, "struct sVar*"));
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj99=result->mName,
        result->mName=(char*)come_increment_ref_count((char*)come_memdup(self->mName, "sVar_clone", 4, "char*"));
        __dec_obj99 = come_decrement_ref_count(__dec_obj99, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        __dec_obj100=result->mCValueName,
        result->mCValueName=(char*)come_increment_ref_count((char*)come_memdup(self->mCValueName, "sVar_clone", 5, "char*"));
        __dec_obj100 = come_decrement_ref_count(__dec_obj100, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->mType!=((void*)0)) {
        __dec_obj101=result->mType,
        result->mType=(struct sType*)come_increment_ref_count(sType_clone(self->mType));
        come_call_finalizer(sType_finalize, __dec_obj101,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)) {
        result->mGlobal=self->mGlobal;
    }
    if(self!=((void*)0)) {
        result->mAllocaValue=self->mAllocaValue;
    }
    if(self!=((void*)0)) {
        result->mNoFree=self->mNoFree;
    }
    if(self!=((void*)0)&&self->mFunName!=((void*)0)) {
        __dec_obj102=result->mFunName,
        result->mFunName=(char*)come_increment_ref_count((char*)come_memdup(self->mFunName, "sVar_clone", 10, "char*"));
        __dec_obj102 = come_decrement_ref_count(__dec_obj102, (void*)0, (void*)0, 0,0, (void*)0);
    }
    __result_obj__0 = (struct sVar*)come_increment_ref_count(result);
    come_call_finalizer(sVar_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct sBlock* sBlock_clone(struct sBlock* self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sBlock_clone"; neo_current_frame = &fr;
    struct sBlock* __result_obj__0  ;
    void* __right_value0 = (void*)0;
    struct sBlock* result  ;
    struct list$1sNode$ph* __dec_obj104;
    struct sVarTable* __dec_obj108  ;
    if(self==(void*)0) {
        __result_obj__0 = (struct sBlock*)come_increment_ref_count((void*)0);
        neo_current_frame = fr.prev;
        come_call_finalizer(sBlock_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    result=(struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), (void*)0, 3, "struct sBlock*"));
    if(self!=((void*)0)&&self->mNodes!=((void*)0)) {
        __dec_obj104=result->mNodes,
        result->mNodes=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mNodes));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj104,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        __dec_obj108=result->mVarTable,
        result->mVarTable=(struct sVarTable*)come_increment_ref_count(sVarTable_clone(self->mVarTable));
        come_call_finalizer(sVarTable_finalize, __dec_obj108,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)) {
        result->mOmitSemicolon=self->mOmitSemicolon;
    }
    __result_obj__0 = (struct sBlock*)come_increment_ref_count(result);
    come_call_finalizer(sBlock_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sBlock_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct sVarTable* sVarTable_clone(struct sVarTable* self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sVarTable_clone"; neo_current_frame = &fr;
    struct sVarTable* __result_obj__0  ;
    void* __right_value0 = (void*)0;
    struct sVarTable* result  ;
    struct map$2char$phsVar$ph* __dec_obj107;
    if(self==(void*)0) {
        __result_obj__0 = (struct sVarTable*)come_increment_ref_count((void*)0);
        neo_current_frame = fr.prev;
        come_call_finalizer(sVarTable_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    result=(struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), (void*)0, 3, "struct sVarTable*"));
    if(self!=((void*)0)&&self->mVars!=((void*)0)) {
        __dec_obj107=result->mVars,
        result->mVars=(struct map$2char$phsVar$ph*)come_increment_ref_count(map$2char$phsVar$ph$p_clone(self->mVars));
        come_call_finalizer(map$2char$phsVar$ph_finalize, __dec_obj107,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)) {
        result->mGlobal=self->mGlobal;
    }
    if(self!=((void*)0)) {
        result->mParent=self->mParent;
    }
    __result_obj__0 = (struct sVarTable*)come_increment_ref_count(result);
    come_call_finalizer(sVarTable_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sVarTable_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph$p_clone(struct map$2char$phsVar$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph$p_clone"; neo_current_frame = &fr;
    struct map$2char$phsVar$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct map$2char$phsVar$ph* result;
    struct list$1char$ph* __dec_obj106;
    char* it  ;
    struct sVar* default_value  ;
    struct sVar* it2  ;
    if(self==((void*)0)) {
        __result_obj__0 = (struct map$2char$phsVar$ph*)come_increment_ref_count(((void*)0));
        neo_current_frame = fr.prev;
        come_call_finalizer(map$2char$phsVar$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    result=(struct map$2char$phsVar$ph*)come_increment_ref_count(map$2char$phsVar$ph_initialize((struct map$2char$phsVar$ph*)come_increment_ref_count((struct map$2char$phsVar$ph*)come_calloc(1, sizeof(struct map$2char$phsVar$ph)*(1), (void*)0, 1683, "struct map$2char$phsVar$ph*"))));
    __dec_obj106=result->key_list,
    result->key_list=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), (void*)0, 1685, "struct list$1char$ph*"))));
    come_call_finalizer(list$1char$ph_finalize, __dec_obj106,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    for(it=map$2char$phsVar$ph_begin(self);!map$2char$phsVar$ph_end(self);it=map$2char$phsVar$ph_next(self)){
        memset(&default_value,0,sizeof(struct sVar*));
        it2=(struct sVar*)come_increment_ref_count(map$2char$phsVar$ph_at(self,it,(struct sVar*)come_increment_ref_count(default_value),(_Bool)0));
        if(1&&1) {
            map$2char$phsVar$ph_put(result,(char*)come_increment_ref_count((char*)come_memdup(it, "/usr/local/include/neo-c.h", 1694, "char*")),(struct sVar*)come_increment_ref_count(sVar_clone(it2)),(_Bool)0);
        }
        else if(1) {
            map$2char$phsVar$ph_put(result,(char*)come_increment_ref_count((char*)come_memdup(it, "/usr/local/include/neo-c.h", 1697, "char*")),(struct sVar*)come_increment_ref_count(sVar_clone(it2)),(_Bool)0);
        }
        else if(1) {
            map$2char$phsVar$ph_put(result,(char*)come_increment_ref_count(it),(struct sVar*)come_increment_ref_count(sVar_clone(it2)),(_Bool)0);
        }
        else {
            map$2char$phsVar$ph_put(result,(char*)come_increment_ref_count(it),(struct sVar*)come_increment_ref_count(sVar_clone(it2)),(_Bool)0);
        }
        come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sVar_finalize, it2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result_obj__0 = (struct map$2char$phsVar$ph*)come_increment_ref_count(result);
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static void map$2char$phsVar$ph$p_finalize(struct map$2char$phsVar$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph$p_finalize"; neo_current_frame = &fr;
    int i;
    int i_134;
    for(i=0;i<self->size;i++){
        if(self->item_existance[i]) {
            if(1) {
                come_call_finalizer(sVar_finalize, self->items[i], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(i_134=0;i_134<self->size;i_134++){
        if(self->item_existance[i_134]) {
            if(1) {
                (self->keys[i_134] = come_decrement_ref_count(self->keys[i_134], (void*)0, (void*)0, 0, 0, (void*)0));
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, (void*)0));
    neo_current_frame = fr.prev;
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph_initialize(struct map$2char$phsVar$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    int i;
    void* __right_value1 = (void*)0;
    struct list$1char$ph* __dec_obj105;
    struct map$2char$phsVar$ph* __result_obj__0;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value0=(char**)come_calloc(1, sizeof(char*)*(1*(128)), (void*)0, 1612, "char**"))));
    self->items=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value0=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(128)), (void*)0, 1613, "struct sVar**"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value0=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), (void*)0, 1614, "_Bool*"))));
    for(i=0;i<128;i++){
        self->item_existance[i]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj105=self->key_list,
    self->key_list=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), (void*)0, 1624, "struct list$1char$ph*"))));
    come_call_finalizer(list$1char$ph_finalize, __dec_obj105,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    self->it=0;
    __result_obj__0 = (struct map$2char$phsVar$ph*)come_increment_ref_count(self);
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static char* map$2char$phsVar$ph_begin(struct map$2char$phsVar$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph_begin"; neo_current_frame = &fr;
    char* result  ;
    char* __result_obj__0  ;
    char* result_135  ;
    if(self==((void*)0)) {
        memset(&result,0,sizeof(char*));
        __result_obj__0 = result;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    self->key_list->it=self->key_list->head;
    if(self->key_list->it) {
        __result_obj__0 = self->key_list->it->item;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    memset(&result_135,0,sizeof(char*));
    __result_obj__0 = result_135;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static _Bool map$2char$phsVar$ph_end(struct map$2char$phsVar$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph_end"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
    neo_current_frame = fr.prev;
}

static char* map$2char$phsVar$ph_next(struct map$2char$phsVar$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph_next"; neo_current_frame = &fr;
    char* result  ;
    char* __result_obj__0  ;
    char* result_136  ;
    if(self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result,0,sizeof(char*));
        __result_obj__0 = result;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    self->key_list->it=self->key_list->it->next;
    if(self->key_list->it) {
        __result_obj__0 = self->key_list->it->item;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    memset(&result_136,0,sizeof(char*));
    __result_obj__0 = result_136;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sVar* map$2char$phsVar$ph_at(struct map$2char$phsVar$ph* self, char* key  , struct sVar* default_value  , _Bool by_pointer)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph_at"; neo_current_frame = &fr;
    struct sVar* __result_obj__0  ;
    unsigned int hash;
    unsigned int it;
    if(self==((void*)0)) {
        __result_obj__0 = (struct sVar*)come_increment_ref_count(default_value);
        come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        neo_current_frame = fr.prev;
        come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if((!by_pointer&&string_equals(self->keys[it],key))||(by_pointer&&self->keys[it]==key)) {
                __result_obj__0 = (struct sVar*)come_increment_ref_count(self->items[it]);
                come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                neo_current_frame = fr.prev;
                come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
            it++;
            if(it>=self->size) {
                it=0;
            }
            else if(it==hash) {
                __result_obj__0 = (struct sVar*)come_increment_ref_count(default_value);
                come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                neo_current_frame = fr.prev;
                come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
        }
        else {
            __result_obj__0 = (struct sVar*)come_increment_ref_count(default_value);
            come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            neo_current_frame = fr.prev;
            come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__0;
        }
    }
    __result_obj__0 = (struct sVar*)come_increment_ref_count(default_value);
    come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph_put(struct map$2char$phsVar$ph* self, char* key  , struct sVar* item  , _Bool by_pointer)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph_put"; neo_current_frame = &fr;
    struct map$2char$phsVar$ph* __result_obj__0;
    unsigned int hash;
    int it;
    _Bool same_key_exist;
    char* it2  ;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sVar_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len*2>=self->size) {
        map$2char$phsVar$ph_rehash(self);
    }
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if((!by_pointer&&string_equals(self->keys[it],key))||(by_pointer&&self->keys[it]==key)) {
                if(1) {
                    (self->keys[it] = come_decrement_ref_count(self->keys[it], (void*)0, (void*)0, 0, 0, (void*)0));
                    list$1char$ph_remove(self->key_list,self->keys[it],(_Bool)0);
                    self->keys[it]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it],(_Bool)0);
                    self->keys[it]=key;
                }
                if(1) {
                    come_call_finalizer(sVar_finalize, self->items[it], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->items[it]=(struct sVar*)come_increment_ref_count(item);
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
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it]=(_Bool)1;
            if(1) {
                self->keys[it]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it]=key;
            }
            if(1) {
                self->items[it]=(struct sVar*)come_increment_ref_count(item);
            }
            else {
                self->items[it]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist=(_Bool)0;
    for(it2=list$1char$ph_begin(self->key_list);!list$1char$ph_end(self->key_list);it2=list$1char$ph_next(self->key_list)){
        if((!by_pointer&&string_equals(it2,key))||(by_pointer&&it2==key)) {
            same_key_exist=(_Bool)1;
        }
    }
    if(!same_key_exist) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__0 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sVar_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void map$2char$phsVar$ph_rehash(struct map$2char$phsVar$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph_rehash"; neo_current_frame = &fr;
    int size;
    void* __right_value0 = (void*)0;
    char** keys  ;
    struct sVar** items  ;
    _Bool* item_existance;
    int len;
    char* it  ;
    struct sVar* default_value  ;
    struct sVar* it2  ;
    unsigned int hash;
    int n;
    struct sVar* default_value_137  ;
    size=self->size*10;
    keys=(char**)come_increment_ref_count(((char**)(__right_value0=(char**)come_calloc(1, sizeof(char*)*(1*(size)), (void*)0, 1867, "char**"))));
    items=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value0=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(size)), (void*)0, 1868, "struct sVar**"))));
    item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value0=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size)), (void*)0, 1869, "_Bool*"))));
    len=0;
    for(it=map$2char$phsVar$ph_begin(self);!map$2char$phsVar$ph_end(self);it=map$2char$phsVar$ph_next(self)){
        memset(&default_value,0,sizeof(struct sVar*));
        it2=((struct sVar*)(__right_value0=map$2char$phsVar$ph_at(self,it,(struct sVar*)come_increment_ref_count(default_value),(_Bool)0)));
        hash=string_get_hash_key(((char*)it))%size;
        n=hash;
        while((_Bool)1) {
            if(item_existance[n]) {
                n++;
                if(n>=size) {
                    n=0;
                }
                else if(n==hash) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance[n]=(_Bool)1;
                keys[n]=it;
                memset(&default_value_137,0,sizeof(struct sVar*));
                items[n]=((struct sVar*)(__right_value0=map$2char$phsVar$ph_at(self,it,(struct sVar*)come_increment_ref_count(default_value_137),(_Bool)0)));
                len++;
                come_call_finalizer(sVar_finalize, default_value_137, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                come_call_finalizer(sVar_finalize, default_value_137, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    come_free((char*)self->items);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, (void*)0));
    come_free((char*)self->keys);
    self->keys=keys;
    self->items=items;
    self->item_existance=item_existance;
    self->size=size;
    self->len=len;
    neo_current_frame = fr.prev;
}

static void map$2char$phsVar$ph_finalize(struct map$2char$phsVar$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph_finalize"; neo_current_frame = &fr;
    int i;
    int i_138;
    for(i=0;i<self->size;i++){
        if(self->item_existance[i]) {
            if(1) {
                come_call_finalizer(sVar_finalize, self->items[i], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(i_138=0;i_138<self->size;i_138++){
        if(self->item_existance[i_138]) {
            if(1) {
                (self->keys[i_138] = come_decrement_ref_count(self->keys[i_138], (void*)0, (void*)0, 0, 0, (void*)0));
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, (void*)0));
    neo_current_frame = fr.prev;
}

struct tuple2$2char$ph_Bool$* create_generics_fun(char* fun_name  , struct sGenericsFun* generics_fun  , struct sType* generics_type  , struct sInfo* info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "create_generics_fun"; neo_current_frame = &fr;
    struct sFun* caller_fun  ;
    int caller_line;
    char* caller_sname;
    void* __right_value0 = (void*)0;
    struct buffer* if_expression_buffer  ;
    struct buffer* __dec_obj122  ;
    struct buffer* paren_block_buffer  ;
    struct buffer* __dec_obj123  ;
    int right_value_max;
    int right_value_num;
    int max_conditional;
    int num_conditional;
    _Bool in_conditional;
    char* last_code  ;
    char* __dec_obj124  ;
    char* last_code2  ;
    char* __dec_obj125  ;
    char* sname_top  ;
    int sline_top;
    struct sType* generics_type_  ;
    void* __right_value1 = (void*)0;
    void* __right_value2 = (void*)0;
    struct sFun* funX  ;
    char* __dec_obj126  ;
    char* __dec_obj127  ;
    char* __dec_obj128  ;
    struct buffer* __dec_obj129  ;
    struct buffer* __dec_obj130  ;
    struct tuple2$2char$ph_Bool$* __result_obj__0;
    struct sType* result_type_  ;
    struct sType* result_type  ;
    struct list$1sType$ph* param_types;
    struct list$1sType$ph* o2_saved;
    struct sType* it  ;
    struct sType* param_type_  ;
    struct sType* param_type  ;
    struct list$1char$ph* param_names;
    struct list$1char$ph* param_default_parametors;
    char* p;
    int sline;
    char* sname  ;
    char* head;
    struct buffer* source  ;
    struct buffer* __dec_obj132  ;
    struct sType* generics_type_saved  ;
    struct sType* generics_type__148  ;
    struct sType* __dec_obj133  ;
    struct list$1char$ph* method_generics_type_names;
    struct list$1char$ph* __dec_obj134;
    struct list$1char$ph* o2_saved_149;
    char* it_150  ;
    struct list$1char$ph* __dec_obj135;
    char* __dec_obj136  ;
    struct sBlock* block  ;
    struct buffer* __dec_obj137  ;
    char* __dec_obj138  ;
    _Bool const_fun;
    _Bool var_args;
    struct sFun* fun;
    struct sNode* _inf_value4;
    struct sFunNode* _inf_obj_value4;
    struct sNode* node;
    _Bool in_generics_fun;
    _Bool Value;
    struct sType* __dec_obj139  ;
    struct list$1char$ph* __dec_obj140;
    char* __dec_obj141  ;
    char* __dec_obj142  ;
    char* __dec_obj143  ;
    struct buffer* __dec_obj144  ;
    struct buffer* __dec_obj145  ;
    caller_fun=info->caller_fun;
    info->caller_fun=info->come_fun;
    caller_line=info->caller_line;
    info->caller_line=info->sline;
    caller_sname=info->caller_sname;
    info->caller_sname=info->sname;
    if_expression_buffer=(struct buffer*)come_increment_ref_count(buffer_clone(info->if_expression_buffer));
    __dec_obj122=info->if_expression_buffer,
    info->if_expression_buffer=((void*)0);
    come_call_finalizer(buffer_finalize, __dec_obj122,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    paren_block_buffer=(struct buffer*)come_increment_ref_count(buffer_clone(info->paren_block_buffer));
    __dec_obj123=info->paren_block_buffer,
    info->paren_block_buffer=((void*)0);
    come_call_finalizer(buffer_finalize, __dec_obj123,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    right_value_max=info->right_value_max;
    right_value_num=info->right_value_num;
    max_conditional=info->max_conditional;
    num_conditional=info->num_conditional;
    in_conditional=info->in_conditional;
    info->in_conditional=(_Bool)0;
    last_code=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj124=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj124 = come_decrement_ref_count(__dec_obj124, (void*)0, (void*)0, 0,0, (void*)0);
    last_code2=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj125=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj125 = come_decrement_ref_count(__dec_obj125, (void*)0, (void*)0, 0,0, (void*)0);
    sname_top=(char*)come_increment_ref_count(__builtin_string(info->sname));
    sline_top=info->sline;
    generics_type_=(struct sType*)come_increment_ref_count(get_no_solved_type2(generics_type));
    funX=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value1=__builtin_string(fun_name)))));
    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
    if(funX) {
        __dec_obj126=info->sname,
        info->sname=(char*)come_increment_ref_count(__builtin_string(sname_top));
        __dec_obj126 = come_decrement_ref_count(__dec_obj126, (void*)0, (void*)0, 0,0, (void*)0);
        info->sline=sline_top;
        __dec_obj127=info->module->mLastCode,
        info->module->mLastCode=(char*)come_increment_ref_count(last_code);
        __dec_obj127 = come_decrement_ref_count(__dec_obj127, (void*)0, (void*)0, 0,0, (void*)0);
        __dec_obj128=info->module->mLastCode2,
        info->module->mLastCode2=(char*)come_increment_ref_count(last_code2);
        __dec_obj128 = come_decrement_ref_count(__dec_obj128, (void*)0, (void*)0, 0,0, (void*)0);
        info->caller_fun=caller_fun;
        info->caller_line=caller_line;
        info->caller_sname=caller_sname;
        __dec_obj129=info->if_expression_buffer,
        info->if_expression_buffer=(struct buffer*)come_increment_ref_count(if_expression_buffer);
        come_call_finalizer(buffer_finalize, __dec_obj129,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        __dec_obj130=info->paren_block_buffer,
        info->paren_block_buffer=(struct buffer*)come_increment_ref_count(paren_block_buffer);
        come_call_finalizer(buffer_finalize, __dec_obj130,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        __result_obj__0 = (struct tuple2$2char$ph_Bool$*)come_increment_ref_count(((struct tuple2$2char$ph_Bool$*)(__right_value1=tuple2$2char$ph_Bool$_initialize((struct tuple2$2char$ph_Bool$*)come_increment_ref_count((struct tuple2$2char$ph_Bool$*)come_calloc(1, sizeof(struct tuple2$2char$ph_Bool$)*(1), "07function.nc", 1909, "struct tuple2$2char$ph_Bool$")),(char*)come_increment_ref_count(fun_name),(_Bool)1))));
        (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(buffer_finalize, if_expression_buffer, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(buffer_finalize, paren_block_buffer, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (last_code = come_decrement_ref_count(last_code, (void*)0, (void*)0, 0, 0, (void*)0));
        (last_code2 = come_decrement_ref_count(last_code2, (void*)0, (void*)0, 0, 0, (void*)0));
        (sname_top = come_decrement_ref_count(sname_top, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sType_finalize, generics_type_, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sFun_finalize, funX, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(tuple2$2char$ph_Bool$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        neo_current_frame = fr.prev;
        come_call_finalizer(tuple2$2char$ph_Bool$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    result_type_=(struct sType*)come_increment_ref_count(solve_generics(generics_fun->mResultType,generics_type_,info));
    result_type=(struct sType*)come_increment_ref_count(solve_method_generics(result_type_,info));
    param_types=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), (void*)0, 1916, "struct list$1sType$ph*"))));
    for(o2_saved=(struct list$1sType$ph*)come_increment_ref_count(generics_fun->mParamTypes),it=list$1sType$ph_begin(o2_saved);!list$1sType$ph_end(o2_saved);it=list$1sType$ph_next(o2_saved)){
        param_type_=(struct sType*)come_increment_ref_count(solve_generics(((struct sType*)(__right_value0=sType_clone(it))),generics_type_,info));
        come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        param_type=(struct sType*)come_increment_ref_count(solve_method_generics(param_type_,info));
        list$1sType$ph_add(param_types,(struct sType*)come_increment_ref_count(sType_clone(param_type)));
        come_call_finalizer(sType_finalize, param_type_, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, param_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer(list$1sType$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    param_names=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(generics_fun->mParamNames));
    param_default_parametors=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(generics_fun->mParamDefaultParametors));
    p=info->p;
    sline=info->sline;
    sname=(char*)come_increment_ref_count(info->sname);
    head=info->head;
    source=(struct buffer*)come_increment_ref_count(info->source);
    __dec_obj132=info->source,
    info->source=(struct buffer*)come_increment_ref_count(charp_to_buffer(generics_fun->mBlock));
    come_call_finalizer(buffer_finalize, __dec_obj132,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    generics_type_saved=(struct sType*)come_increment_ref_count(info->generics_type);
    come_call_finalizer(sType_finalize, generics_type_, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    generics_type__148=(struct sType*)come_increment_ref_count(get_no_solved_type2(generics_type));
    __dec_obj133=info->generics_type,
    info->generics_type=(struct sType*)come_increment_ref_count(sType_clone(generics_type__148));
    come_call_finalizer(sType_finalize, __dec_obj133,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    method_generics_type_names=(struct list$1char$ph*)come_increment_ref_count(info->method_generics_type_names);
    __dec_obj134=info->method_generics_type_names,
    info->method_generics_type_names=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), (void*)0, 1944, "struct list$1char$ph*"))));
    come_call_finalizer(list$1char$ph_finalize, __dec_obj134,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    for(o2_saved_149=(struct list$1char$ph*)come_increment_ref_count(generics_fun->mMethodGenericsTypeNames),it_150=list$1char$ph_begin(o2_saved_149);!list$1char$ph_end(o2_saved_149);it_150=list$1char$ph_next(o2_saved_149)){
        list$1char$ph_push_back(info->method_generics_type_names,(char*)come_increment_ref_count((char*)come_memdup(it_150, "07function.nc", 1946, "char*")));
    }
    come_call_finalizer(list$1char$ph$p_finalize, o2_saved_149, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    list$1char$ph_reset(info->generics_type_names);
    __dec_obj135=info->generics_type_names,
    info->generics_type_names=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(generics_fun->mGenericsTypeNames));
    come_call_finalizer(list$1char$ph_finalize, __dec_obj135,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    info->sline=generics_fun->mGenericsSLine;
    __dec_obj136=info->sname,
    info->sname=(char*)come_increment_ref_count(generics_fun->mGenericsSName);
    __dec_obj136 = come_decrement_ref_count(__dec_obj136, (void*)0, (void*)0, 0,0, (void*)0);
    block=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)1));
    info->head=head;
    __dec_obj137=info->source,
    info->source=(struct buffer*)come_increment_ref_count(source);
    come_call_finalizer(buffer_finalize, __dec_obj137,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    info->p=p;
    info->sline=sline;
    __dec_obj138=info->sname,
    info->sname=(char*)come_increment_ref_count(sname);
    __dec_obj138 = come_decrement_ref_count(__dec_obj138, (void*)0, (void*)0, 0,0, (void*)0);
    result_type->mInline=(_Bool)0;
    result_type->mStatic=(_Bool)0;
    result_type->mUniq=(_Bool)0;
    const_fun=generics_fun->mConstFun;
    var_args=generics_fun->mVarArgs;
    fun=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), (void*)0, 1970, "struct sFun*")),(char*)come_increment_ref_count(fun_name),(struct sType*)come_increment_ref_count(result_type),(struct list$1sType$ph*)come_increment_ref_count(param_types),(struct list$1char$ph*)come_increment_ref_count(param_names),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors),(_Bool)0,var_args,(struct sBlock*)come_increment_ref_count(block),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf("")),const_fun,((void*)0),((void*)0),0,(_Bool)0));
    fun->mGenericsFun=(_Bool)1;
    map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name)),(struct sFun*)come_increment_ref_count(fun),(_Bool)0);
    _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 1979, "struct sNode");
    _inf_obj_value4=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), (void*)0, 1979, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun),info))));
    _inf_value4->_protocol_obj=_inf_obj_value4;
    _inf_value4->finalize=(void*)sFunNode_finalize;
    _inf_value4->clone=(void*)sFunNode_clone;
    _inf_value4->compile=(void*)sFunNode_compile;
    _inf_value4->sline=(void*)sNodeBase_sline;
    _inf_value4->sline_real=(void*)sNodeBase_sline_real;
    _inf_value4->sname=(void*)sNodeBase_sname;
    _inf_value4->terminated=(void*)sNodeBase_terminated;
    _inf_value4->kind=(void*)sFunNode_kind;
    _inf_value4->no_mutex=(void*)sNodeBase_no_mutex;
    node=(struct sNode*)come_increment_ref_count(_inf_value4);
    come_call_finalizer(sFunNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    in_generics_fun=info->in_generics_fun;
    info->in_generics_fun=(_Bool)1;
    Value=node_compile(node,info);
    if(!Value) {
        __result_obj__0 = (struct tuple2$2char$ph_Bool$*)come_increment_ref_count(((struct tuple2$2char$ph_Bool$*)(__right_value2=tuple2$2char$ph_Bool$_initialize((struct tuple2$2char$ph_Bool$*)come_increment_ref_count((struct tuple2$2char$ph_Bool$*)come_calloc(1, sizeof(struct tuple2$2char$ph_Bool$)*(1), "07function.nc", 1984, "struct tuple2$2char$ph_Bool$")),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0))));
        (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(buffer_finalize, if_expression_buffer, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(buffer_finalize, paren_block_buffer, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (last_code = come_decrement_ref_count(last_code, (void*)0, (void*)0, 0, 0, (void*)0));
        (last_code2 = come_decrement_ref_count(last_code2, (void*)0, (void*)0, 0, 0, (void*)0));
        (sname_top = come_decrement_ref_count(sname_top, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sFun_finalize, funX, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, result_type_, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (sname = come_decrement_ref_count(sname, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(buffer_finalize, source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, generics_type_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, generics_type__148, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, method_generics_type_names, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sBlock_finalize, block, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sFun_finalize, fun, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(tuple2$2char$ph_Bool$$p_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        neo_current_frame = fr.prev;
        come_call_finalizer(tuple2$2char$ph_Bool$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    info->in_generics_fun=in_generics_fun;
    __dec_obj139=info->generics_type,
    info->generics_type=(struct sType*)come_increment_ref_count(generics_type_saved);
    come_call_finalizer(sType_finalize, __dec_obj139,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj140=info->method_generics_type_names,
    info->method_generics_type_names=(struct list$1char$ph*)come_increment_ref_count(method_generics_type_names);
    come_call_finalizer(list$1char$ph_finalize, __dec_obj140,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    list$1char$ph_reset(info->generics_type_names);
    __dec_obj141=info->sname,
    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_top));
    __dec_obj141 = come_decrement_ref_count(__dec_obj141, (void*)0, (void*)0, 0,0, (void*)0);
    info->sline=sline_top;
    __dec_obj142=info->module->mLastCode,
    info->module->mLastCode=(char*)come_increment_ref_count(last_code);
    __dec_obj142 = come_decrement_ref_count(__dec_obj142, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj143=info->module->mLastCode2,
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2);
    __dec_obj143 = come_decrement_ref_count(__dec_obj143, (void*)0, (void*)0, 0,0, (void*)0);
    info->caller_fun=caller_fun;
    info->caller_line=caller_line;
    info->caller_sname=caller_sname;
    info->right_value_max=right_value_max;
    info->right_value_num=right_value_num;
    info->num_conditional=num_conditional;
    info->max_conditional=max_conditional;
    info->in_conditional=in_conditional;
    __dec_obj144=info->if_expression_buffer,
    info->if_expression_buffer=(struct buffer*)come_increment_ref_count(if_expression_buffer);
    come_call_finalizer(buffer_finalize, __dec_obj144,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj145=info->paren_block_buffer,
    info->paren_block_buffer=(struct buffer*)come_increment_ref_count(paren_block_buffer);
    come_call_finalizer(buffer_finalize, __dec_obj145,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __result_obj__0 = (struct tuple2$2char$ph_Bool$*)come_increment_ref_count(((struct tuple2$2char$ph_Bool$*)(__right_value2=tuple2$2char$ph_Bool$_initialize((struct tuple2$2char$ph_Bool$*)come_increment_ref_count((struct tuple2$2char$ph_Bool$*)come_calloc(1, sizeof(struct tuple2$2char$ph_Bool$)*(1), "07function.nc", 2011, "struct tuple2$2char$ph_Bool$")),(char*)come_increment_ref_count(__builtin_string(fun_name)),(_Bool)1))));
    (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(buffer_finalize, if_expression_buffer, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(buffer_finalize, paren_block_buffer, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (last_code = come_decrement_ref_count(last_code, (void*)0, (void*)0, 0, 0, (void*)0));
    (last_code2 = come_decrement_ref_count(last_code2, (void*)0, (void*)0, 0, 0, (void*)0));
    (sname_top = come_decrement_ref_count(sname_top, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sFun_finalize, funX, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, result_type_, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (sname = come_decrement_ref_count(sname, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(buffer_finalize, source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, generics_type_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, generics_type__148, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, method_generics_type_names, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sBlock_finalize, block, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sFun_finalize, fun, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(tuple2$2char$ph_Bool$$p_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple2$2char$ph_Bool$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct tuple2$2char$ph_Bool$* tuple2$2char$ph_Bool$_initialize(struct tuple2$2char$ph_Bool$* self, char* v1  , _Bool v2)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2char$ph_Bool$_initialize"; neo_current_frame = &fr;
    char* __dec_obj131  ;
    struct tuple2$2char$ph_Bool$* __result_obj__0;
    __dec_obj131=self->v1,
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj131 = come_decrement_ref_count(__dec_obj131, (void*)0, (void*)0, 0,0, (void*)0);
    self->v2=v2;
    __result_obj__0 = (struct tuple2$2char$ph_Bool$*)come_increment_ref_count(self);
    come_call_finalizer(tuple2$2char$ph_Bool$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 0, (void*)0));
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple2$2char$ph_Bool$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static void tuple2$2char$ph_Bool$$p_finalize(struct tuple2$2char$ph_Bool$* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2char$ph_Bool$$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    neo_current_frame = fr.prev;
}

static struct sType* list$1sType$ph_begin(struct list$1sType$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_begin"; neo_current_frame = &fr;
    struct sType* result  ;
    struct sType* __result_obj__0  ;
    struct sType* result_146  ;
    if(self==((void*)0)) {
        memset(&result,0,sizeof(struct sType*));
        __result_obj__0 = result;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    self->it=self->head;
    if(self->it) {
        __result_obj__0 = self->it->item;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    memset(&result_146,0,sizeof(struct sType*));
    __result_obj__0 = result_146;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static _Bool list$1sType$ph_end(struct list$1sType$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_end"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return self==((void*)0)||self->it==((void*)0);
    neo_current_frame = fr.prev;
}

static struct sType* list$1sType$ph_next(struct list$1sType$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_next"; neo_current_frame = &fr;
    struct sType* result  ;
    struct sType* __result_obj__0  ;
    struct sType* result_147  ;
    if(self==((void*)0)||self->it==((void*)0)) {
        memset(&result,0,sizeof(struct sType*));
        __result_obj__0 = result;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    self->it=self->it->next;
    if(self->it) {
        __result_obj__0 = self->it->item;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    memset(&result_147,0,sizeof(struct sType*));
    __result_obj__0 = result_147;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

_Bool create_method_generics_fun(char* fun_name  , struct sGenericsFun* generics_fun  , struct sInfo* info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "create_method_generics_fun"; neo_current_frame = &fr;
    struct sFun* caller_fun  ;
    int caller_line;
    char* caller_sname;
    _Bool in_conditional;
    void* __right_value0 = (void*)0;
    struct buffer* if_expression_buffer  ;
    struct buffer* __dec_obj146  ;
    struct buffer* paren_block_buffer  ;
    struct buffer* __dec_obj147  ;
    char* last_code  ;
    char* __dec_obj148  ;
    char* last_code2  ;
    char* __dec_obj149  ;
    char* sname_top  ;
    int sline_top;
    void* __right_value1 = (void*)0;
    void* __right_value2 = (void*)0;
    struct sFun* funX  ;
    char* __dec_obj150  ;
    char* __dec_obj151  ;
    char* __dec_obj152  ;
    struct buffer* __dec_obj153  ;
    struct buffer* __dec_obj154  ;
    _Bool __result_obj__0;
    struct sType* result_type  ;
    struct list$1sType$ph* param_types;
    struct list$1sType$ph* o2_saved;
    struct sType* it  ;
    struct sType* param_type  ;
    struct list$1char$ph* param_names;
    struct list$1char$ph* param_default_parametors;
    char* p;
    int sline;
    char* sname  ;
    char* head;
    struct buffer* source  ;
    struct buffer* __dec_obj155  ;
    struct list$1char$ph* method_generics_type_names;
    struct list$1char$ph* __dec_obj156;
    struct list$1char$ph* o2_saved_151;
    char* it_152  ;
    struct list$1char$ph* __dec_obj157;
    char* __dec_obj158  ;
    struct sBlock* block  ;
    struct buffer* __dec_obj159  ;
    char* __dec_obj160  ;
    _Bool var_args;
    struct sFun* fun;
    struct sNode* _inf_value5;
    struct sFunNode* _inf_obj_value5;
    struct sNode* node;
    _Bool Value;
    struct list$1char$ph* __dec_obj161;
    char* __dec_obj162  ;
    char* __dec_obj163  ;
    char* __dec_obj164  ;
    struct buffer* __dec_obj165  ;
    struct buffer* __dec_obj166  ;
    caller_fun=info->caller_fun;
    info->caller_fun=info->come_fun;
    caller_line=info->caller_line;
    info->caller_line=info->sline;
    caller_sname=info->caller_sname;
    info->caller_sname=info->sname;
    in_conditional=info->in_conditional;
    info->in_conditional=(_Bool)0;
    if_expression_buffer=(struct buffer*)come_increment_ref_count(buffer_clone(info->if_expression_buffer));
    __dec_obj146=info->if_expression_buffer,
    info->if_expression_buffer=((void*)0);
    come_call_finalizer(buffer_finalize, __dec_obj146,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    paren_block_buffer=(struct buffer*)come_increment_ref_count(buffer_clone(info->paren_block_buffer));
    __dec_obj147=info->paren_block_buffer,
    info->paren_block_buffer=((void*)0);
    come_call_finalizer(buffer_finalize, __dec_obj147,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj148=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj148 = come_decrement_ref_count(__dec_obj148, (void*)0, (void*)0, 0,0, (void*)0);
    last_code2=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj149=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj149 = come_decrement_ref_count(__dec_obj149, (void*)0, (void*)0, 0,0, (void*)0);
    sname_top=(char*)come_increment_ref_count(__builtin_string(info->sname));
    sline_top=info->sline;
    funX=((struct sFun*)(__right_value2=map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value1=__builtin_string(fun_name))))));
    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
    if(funX) {
        __dec_obj150=info->sname,
        info->sname=(char*)come_increment_ref_count(__builtin_string(sname_top));
        __dec_obj150 = come_decrement_ref_count(__dec_obj150, (void*)0, (void*)0, 0,0, (void*)0);
        info->sline=sline_top;
        __dec_obj151=info->module->mLastCode,
        info->module->mLastCode=(char*)come_increment_ref_count(last_code);
        __dec_obj151 = come_decrement_ref_count(__dec_obj151, (void*)0, (void*)0, 0,0, (void*)0);
        __dec_obj152=info->module->mLastCode2,
        info->module->mLastCode2=(char*)come_increment_ref_count(last_code2);
        __dec_obj152 = come_decrement_ref_count(__dec_obj152, (void*)0, (void*)0, 0,0, (void*)0);
        info->caller_fun=caller_fun;
        info->caller_line=caller_line;
        info->caller_sname=caller_sname;
        __dec_obj153=info->if_expression_buffer,
        info->if_expression_buffer=(struct buffer*)come_increment_ref_count(if_expression_buffer);
        come_call_finalizer(buffer_finalize, __dec_obj153,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        __dec_obj154=info->paren_block_buffer,
        info->paren_block_buffer=(struct buffer*)come_increment_ref_count(paren_block_buffer);
        come_call_finalizer(buffer_finalize, __dec_obj154,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        __result_obj__0 = (_Bool)1;
        (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(buffer_finalize, if_expression_buffer, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(buffer_finalize, paren_block_buffer, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (last_code = come_decrement_ref_count(last_code, (void*)0, (void*)0, 0, 0, (void*)0));
        (last_code2 = come_decrement_ref_count(last_code2, (void*)0, (void*)0, 0, 0, (void*)0));
        (sname_top = come_decrement_ref_count(sname_top, (void*)0, (void*)0, 0, 0, (void*)0));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result_type=(struct sType*)come_increment_ref_count(solve_method_generics(generics_fun->mResultType,info));
    param_types=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), (void*)0, 2055, "struct list$1sType$ph*"))));
    for(o2_saved=(struct list$1sType$ph*)come_increment_ref_count(generics_fun->mParamTypes),it=list$1sType$ph_begin(o2_saved);!list$1sType$ph_end(o2_saved);it=list$1sType$ph_next(o2_saved)){
        param_type=(struct sType*)come_increment_ref_count(solve_method_generics(((struct sType*)(__right_value0=sType_clone(it))),info));
        come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        list$1sType$ph_add(param_types,(struct sType*)come_increment_ref_count(sType_clone(param_type)));
        come_call_finalizer(sType_finalize, param_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer(list$1sType$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    param_names=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(generics_fun->mParamNames));
    param_default_parametors=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(generics_fun->mParamDefaultParametors));
    p=info->p;
    sline=info->sline;
    sname=(char*)come_increment_ref_count(info->sname);
    head=info->head;
    source=(struct buffer*)come_increment_ref_count(info->source);
    __dec_obj155=info->source,
    info->source=(struct buffer*)come_increment_ref_count(charp_to_buffer(generics_fun->mBlock));
    come_call_finalizer(buffer_finalize, __dec_obj155,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    method_generics_type_names=(struct list$1char$ph*)come_increment_ref_count(info->method_generics_type_names);
    __dec_obj156=info->method_generics_type_names,
    info->method_generics_type_names=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), (void*)0, 2077, "struct list$1char$ph*"))));
    come_call_finalizer(list$1char$ph_finalize, __dec_obj156,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    for(o2_saved_151=(struct list$1char$ph*)come_increment_ref_count(generics_fun->mMethodGenericsTypeNames),it_152=list$1char$ph_begin(o2_saved_151);!list$1char$ph_end(o2_saved_151);it_152=list$1char$ph_next(o2_saved_151)){
        list$1char$ph_push_back(info->method_generics_type_names,(char*)come_increment_ref_count((char*)come_memdup(it_152, "07function.nc", 2079, "char*")));
    }
    come_call_finalizer(list$1char$ph$p_finalize, o2_saved_151, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    list$1char$ph_reset(info->generics_type_names);
    __dec_obj157=info->generics_type_names,
    info->generics_type_names=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(generics_fun->mGenericsTypeNames));
    come_call_finalizer(list$1char$ph_finalize, __dec_obj157,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    info->sline=generics_fun->mGenericsSLine;
    __dec_obj158=info->sname,
    info->sname=(char*)come_increment_ref_count(generics_fun->mGenericsSName);
    __dec_obj158 = come_decrement_ref_count(__dec_obj158, (void*)0, (void*)0, 0,0, (void*)0);
    block=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)1));
    info->head=head;
    __dec_obj159=info->source,
    info->source=(struct buffer*)come_increment_ref_count(source);
    come_call_finalizer(buffer_finalize, __dec_obj159,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    info->p=p;
    info->sline=sline;
    __dec_obj160=info->sname,
    info->sname=(char*)come_increment_ref_count(sname);
    __dec_obj160 = come_decrement_ref_count(__dec_obj160, (void*)0, (void*)0, 0,0, (void*)0);
    result_type->mInline=(_Bool)0;
    result_type->mStatic=(_Bool)0;
    result_type->mUniq=(_Bool)0;
    var_args=generics_fun->mVarArgs;
    fun=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), (void*)0, 2101, "struct sFun*")),(char*)come_increment_ref_count(fun_name),(struct sType*)come_increment_ref_count(result_type),(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(param_types)),(struct list$1char$ph*)come_increment_ref_count(param_names),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors),(_Bool)0,var_args,(struct sBlock*)come_increment_ref_count(block),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0,((void*)0),((void*)0),0,(_Bool)0));
    fun->mGenericsFun=(_Bool)1;
    map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name)),(struct sFun*)come_increment_ref_count(fun),(_Bool)0);
    _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 2109, "struct sNode");
    _inf_obj_value5=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), (void*)0, 2109, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun),info))));
    _inf_value5->_protocol_obj=_inf_obj_value5;
    _inf_value5->finalize=(void*)sFunNode_finalize;
    _inf_value5->clone=(void*)sFunNode_clone;
    _inf_value5->compile=(void*)sFunNode_compile;
    _inf_value5->sline=(void*)sNodeBase_sline;
    _inf_value5->sline_real=(void*)sNodeBase_sline_real;
    _inf_value5->sname=(void*)sNodeBase_sname;
    _inf_value5->terminated=(void*)sNodeBase_terminated;
    _inf_value5->kind=(void*)sFunNode_kind;
    _inf_value5->no_mutex=(void*)sNodeBase_no_mutex;
    node=(struct sNode*)come_increment_ref_count(_inf_value5);
    come_call_finalizer(sFunNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    Value=node_compile(node,info);
    if(!Value) {
        __result_obj__0 = (_Bool)0;
        (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(buffer_finalize, if_expression_buffer, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(buffer_finalize, paren_block_buffer, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (last_code = come_decrement_ref_count(last_code, (void*)0, (void*)0, 0, 0, (void*)0));
        (last_code2 = come_decrement_ref_count(last_code2, (void*)0, (void*)0, 0, 0, (void*)0));
        (sname_top = come_decrement_ref_count(sname_top, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (sname = come_decrement_ref_count(sname, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(buffer_finalize, source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, method_generics_type_names, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sBlock_finalize, block, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sFun_finalize, fun, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    __dec_obj161=info->method_generics_type_names,
    info->method_generics_type_names=(struct list$1char$ph*)come_increment_ref_count(method_generics_type_names);
    come_call_finalizer(list$1char$ph_finalize, __dec_obj161,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    list$1char$ph_reset(info->generics_type_names);
    __dec_obj162=info->sname,
    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_top));
    __dec_obj162 = come_decrement_ref_count(__dec_obj162, (void*)0, (void*)0, 0,0, (void*)0);
    info->sline=sline_top;
    __dec_obj163=info->module->mLastCode,
    info->module->mLastCode=(char*)come_increment_ref_count(last_code);
    __dec_obj163 = come_decrement_ref_count(__dec_obj163, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj164=info->module->mLastCode2,
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2);
    __dec_obj164 = come_decrement_ref_count(__dec_obj164, (void*)0, (void*)0, 0,0, (void*)0);
    info->caller_fun=caller_fun;
    info->caller_line=caller_line;
    info->caller_sname=caller_sname;
    info->in_conditional=in_conditional;
    __dec_obj165=info->if_expression_buffer,
    info->if_expression_buffer=(struct buffer*)come_increment_ref_count(if_expression_buffer);
    come_call_finalizer(buffer_finalize, __dec_obj165,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj166=info->paren_block_buffer,
    info->paren_block_buffer=(struct buffer*)come_increment_ref_count(paren_block_buffer);
    come_call_finalizer(buffer_finalize, __dec_obj166,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __result_obj__0 = (_Bool)1;
    (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(buffer_finalize, if_expression_buffer, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(buffer_finalize, paren_block_buffer, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (last_code = come_decrement_ref_count(last_code, (void*)0, (void*)0, 0, 0, (void*)0));
    (last_code2 = come_decrement_ref_count(last_code2, (void*)0, (void*)0, 0, 0, (void*)0));
    (sname_top = come_decrement_ref_count(sname_top, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (sname = come_decrement_ref_count(sname, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(buffer_finalize, source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, method_generics_type_names, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sBlock_finalize, block, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sFun_finalize, fun, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sNode* parse_function(struct sInfo* info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "parse_function"; neo_current_frame = &fr;
    char* header_head;
    char* source_head;
    void* __right_value0 = (void*)0;
    struct tuple2$2char$phchar$ph* multiple_assign_var9
;    char* asm_fun  =0;
    char* fun_attribute  =0;
    struct sType* result_type  ;
    char* var_name  ;
    _Bool constructor_;
    struct sType* __dec_obj167  ;
    struct tuple3$3sType$phchar$ph_Bool$* multiple_assign_var10
;    struct sType* result_type2  =0;
    char* var_name2  =0;
    _Bool err=0;
    struct sType* __dec_obj168  ;
    char* __dec_obj169  ;
    _Bool method_definition;
    char* p;
    int sline;
    _Bool flag;
    char* fun_name  ;
    char* base_fun_name;
    struct sType* obj_type2  ;
    char* __dec_obj170;
    char* __dec_obj171  ;
    struct sType* __dec_obj172  ;
    struct tuple3$3sType$phchar$ph_Bool$* multiple_assign_var11
;    struct sType* obj_type  =0;
    char* name  =0;
    _Bool err_153=0;
    char* __dec_obj173;
    char* __dec_obj174  ;
    struct sType* __dec_obj175  ;
    char* __dec_obj176;
    char* __dec_obj177  ;
    struct sType* __dec_obj178  ;
    char* __dec_obj179;
    char* __dec_obj180  ;
    struct sType* __dec_obj181  ;
    char* __dec_obj182  ;
    char* __dec_obj183;
    struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$* multiple_assign_var12
;    struct list$1sType$ph* param_types=0;
    struct list$1char$ph* param_names=0;
    struct list$1char$ph* param_default_parametors=0;
    _Bool var_args=0;
    char* header_tail;
    _Bool const_fun;
    int version;
    int n;
    struct tuple2$2char$phchar$ph* multiple_assign_var13
;    char* asm_fun2  =0;
    char* fun_attribute2  =0;
    void* __right_value1 = (void*)0;
    void* __right_value2 = (void*)0;
    char* __dec_obj184  ;
    char* __dec_obj185  ;
    char* __dec_obj186  ;
    _Bool in_top_level;
    struct sBlock* block  ;
    char* fun_name_154  ;
    struct sFun* fun;
    struct sFun* fun2  ;
    struct sNode* _inf_value6;
    struct sLambdaNode* _inf_obj_value6;
    struct sNode* __result_obj__0;
    char* none_generics_name  ;
    char* generics_sname  ;
    int generics_sline;
    char* block_155  ;
    void* __right_value3 = (void*)0;
    void* __right_value4 = (void*)0;
    void* __right_value5 = (void*)0;
    struct sGenericsFun* fun_156;
    char* fun_name3  ;
    char* generics_sname_160  ;
    int generics_sline_161;
    char* block_162  ;
    struct sGenericsFun* fun_163;
    char* source_tail;
    char* new_fun_name  ;
    char* __dec_obj188  ;
    _Bool static_fun;
    _Bool inline_fun;
    _Bool uniq_fun;
    char* generics_sname_164  ;
    int generics_sline_165;
    char* block_166  ;
    struct sFun* fun_167;
    struct sNode* _inf_value7;
    struct sFunNode* _inf_obj_value7;
    struct sBlock* block_168  ;
    struct sFun* fun_169;
    struct sNode* _inf_value8;
    struct sFunNode* _inf_obj_value8;
    char* new_fun_name_170  ;
    char* __dec_obj189  ;
    struct sFun* fun_171;
    struct sNode* _inf_value9;
    struct sFunNode* _inf_obj_value9;
    struct tuple2$2char$phchar$ph* multiple_assign_var14
;    char* asm_fun_172  =0;
    char* fun_attribute2_173  =0;
    char* __dec_obj190  ;
    char* __dec_obj191  ;
    struct sFun* fun_174;
    struct sNode* _inf_value10;
    struct sFunNode* _inf_obj_value10;
    memset(&fun_name, 0, sizeof(fun_name));
    header_head=info->p;
    source_head=info->p;
    multiple_assign_var9=((struct tuple2$2char$phchar$ph*)(__right_value0=parse_function_attribute(info)));
    asm_fun=(char*)come_increment_ref_count(multiple_assign_var9->v1);
    fun_attribute=(char*)come_increment_ref_count(multiple_assign_var9->v2);
    come_call_finalizer(tuple2$2char$phchar$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    result_type=((void*)0);
    var_name=((void*)0);
    constructor_=(_Bool)0;
    if(info->in_class&&(info->end-info->p)>=strlen("new(")&&memcmp(info->p,"new(",4)==0) {
        ((char*)(__right_value0=parse_word((_Bool)0,info)));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        __dec_obj167=result_type,
        result_type=(struct sType*)come_increment_ref_count(sType_clone(info->class_type));
        come_call_finalizer(sType_finalize, __dec_obj167,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        result_type->mHeap=(_Bool)1;
        constructor_=(_Bool)1;
        info->constructor_=(_Bool)1;
    }
    else {
        multiple_assign_var10=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        result_type2=(struct sType*)come_increment_ref_count(multiple_assign_var10->v1);
        var_name2=(char*)come_increment_ref_count(multiple_assign_var10->v2);
        err=multiple_assign_var10->v3;
        come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        __dec_obj168=result_type,
        result_type=(struct sType*)come_increment_ref_count(result_type2);
        come_call_finalizer(sType_finalize, __dec_obj168,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        __dec_obj169=var_name,
        var_name=(char*)come_increment_ref_count(var_name2);
        __dec_obj169 = come_decrement_ref_count(__dec_obj169, (void*)0, (void*)0, 0,0, (void*)0);
        if(!err) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        come_call_finalizer(sType_finalize, result_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (var_name2 = come_decrement_ref_count(var_name2, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    method_definition=(_Bool)0;
    {
        p=info->p;
        sline=info->sline;
        flag=(_Bool)0;
        while(xisalnum(*info->p)||*info->p==95) {
            flag=(_Bool)1;
            ((char*)(__right_value0=parse_word((_Bool)0,info)));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        while(*info->p==42) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        while(*info->p==91&&*(info->p+1)==93) {
            info->p+=2;
            skip_spaces_and_lf(info);
        }
        while(*info->p==37) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        if(flag&&*info->p==58&&*(info->p+1)==58) {
            method_definition=(_Bool)1;
        }
        info->p=p;
        info->sline=sline;
    }
    base_fun_name=((void*)0);
    obj_type2=((void*)0);
    if(constructor_) {
        __dec_obj170=base_fun_name,
        base_fun_name=(char*)come_increment_ref_count(__builtin_string("initialize"));
        __dec_obj170 = come_decrement_ref_count(__dec_obj170, (void*)0, (void*)0, 0,0, (void*)0);
        __dec_obj171=fun_name,
        fun_name=(char*)come_increment_ref_count(create_method_name(info->class_type,(_Bool)0,base_fun_name,info,(_Bool)1));
        __dec_obj171 = come_decrement_ref_count(__dec_obj171, (void*)0, (void*)0, 0,0, (void*)0);
        __dec_obj172=obj_type2,
        obj_type2=(struct sType*)come_increment_ref_count(sType_clone(info->class_type));
        come_call_finalizer(sType_finalize, __dec_obj172,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(method_definition) {
        multiple_assign_var11=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        obj_type=(struct sType*)come_increment_ref_count(multiple_assign_var11->v1);
        name=(char*)come_increment_ref_count(multiple_assign_var11->v2);
        err_153=multiple_assign_var11->v3;
        come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        if(!err_153) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        expected_next_character(58,info);
        expected_next_character(58,info);
        __dec_obj173=base_fun_name,
        base_fun_name=(char*)come_increment_ref_count(parse_word((_Bool)0,info));
        __dec_obj173 = come_decrement_ref_count(__dec_obj173, (void*)0, (void*)0, 0,0, (void*)0);
        __dec_obj174=fun_name,
        fun_name=(char*)come_increment_ref_count(create_method_name(obj_type,(_Bool)0,base_fun_name,info,(_Bool)1));
        __dec_obj174 = come_decrement_ref_count(__dec_obj174, (void*)0, (void*)0, 0,0, (void*)0);
        __dec_obj175=obj_type2,
        obj_type2=(struct sType*)come_increment_ref_count(sType_clone(obj_type));
        come_call_finalizer(sType_finalize, __dec_obj175,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, obj_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    else if(info->impl_type) {
        __dec_obj176=base_fun_name,
        base_fun_name=(char*)come_increment_ref_count(parse_word((_Bool)0,info));
        __dec_obj176 = come_decrement_ref_count(__dec_obj176, (void*)0, (void*)0, 0,0, (void*)0);
        __dec_obj177=fun_name,
        fun_name=(char*)come_increment_ref_count(create_method_name(info->impl_type,(_Bool)0,base_fun_name,info,(_Bool)1));
        __dec_obj177 = come_decrement_ref_count(__dec_obj177, (void*)0, (void*)0, 0,0, (void*)0);
        __dec_obj178=obj_type2,
        obj_type2=(struct sType*)come_increment_ref_count(sType_clone(info->impl_type));
        come_call_finalizer(sType_finalize, __dec_obj178,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(info->class_type) {
        __dec_obj179=base_fun_name,
        base_fun_name=(char*)come_increment_ref_count(parse_word((_Bool)0,info));
        __dec_obj179 = come_decrement_ref_count(__dec_obj179, (void*)0, (void*)0, 0,0, (void*)0);
        __dec_obj180=fun_name,
        fun_name=(char*)come_increment_ref_count(create_method_name(info->class_type,(_Bool)0,base_fun_name,info,(_Bool)1));
        __dec_obj180 = come_decrement_ref_count(__dec_obj180, (void*)0, (void*)0, 0,0, (void*)0);
        __dec_obj181=obj_type2,
        obj_type2=(struct sType*)come_increment_ref_count(sType_clone(info->class_type));
        come_call_finalizer(sType_finalize, __dec_obj181,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        __dec_obj182=fun_name,
        fun_name=(char*)come_increment_ref_count(parse_word((_Bool)0,info));
        __dec_obj182 = come_decrement_ref_count(__dec_obj182, (void*)0, (void*)0, 0,0, (void*)0);
        __dec_obj183=base_fun_name,
        base_fun_name=(char*)come_increment_ref_count(__builtin_string(fun_name));
        __dec_obj183 = come_decrement_ref_count(__dec_obj183, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(info->in_class&&charp_operator_equals(base_fun_name,"initialize")) {
        info->in_class=(_Bool)0;
    }
    multiple_assign_var12=((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$*)(__right_value0=parse_params(info,constructor_)));
    param_types=(struct list$1sType$ph*)come_increment_ref_count(multiple_assign_var12->v1);
    param_names=(struct list$1char$ph*)come_increment_ref_count(multiple_assign_var12->v2);
    param_default_parametors=(struct list$1char$ph*)come_increment_ref_count(multiple_assign_var12->v3);
    var_args=multiple_assign_var12->v4;
    come_call_finalizer(tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    header_tail=info->p;
    if(info->in_class&&charp_operator_equals(base_fun_name,"initialize")) {
        info->in_class=(_Bool)1;
    }
    const_fun=(_Bool)0;
    version=0;
    if(parsecmp("version",info)) {
        info->p+=strlen("version");
        skip_spaces_and_lf(info);
        n=0;
        while(xisdigit(*info->p)) {
            n=n*10+(*info->p-48);
            info->p++;
        }
        skip_spaces_and_lf(info);
        version=n;
    }
    if(parsecmp("record",info)) {
        info->p+=strlen("record");
        skip_spaces_and_lf(info);
        result_type->mRecord=(_Bool)1;
    }
    multiple_assign_var13=((struct tuple2$2char$phchar$ph*)(__right_value0=parse_function_attribute(info)));
    asm_fun2=(char*)come_increment_ref_count(multiple_assign_var13->v1);
    fun_attribute2=(char*)come_increment_ref_count(multiple_assign_var13->v2);
    come_call_finalizer(tuple2$2char$phchar$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    if(string_operator_not_equals(fun_attribute2,"")) {
        __dec_obj184=fun_attribute,
        fun_attribute=(char*)come_increment_ref_count(string_operator_add(((char*)(__right_value1=string_operator_add(fun_attribute," "))),fun_attribute2));
        __dec_obj184 = come_decrement_ref_count(__dec_obj184, (void*)0, (void*)0, 0,0, (void*)0);
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
    }
    if(string_operator_not_equals(asm_fun,"")) {
        __dec_obj185=fun_name,
        fun_name=(char*)come_increment_ref_count(__builtin_string(asm_fun));
        __dec_obj185 = come_decrement_ref_count(__dec_obj185, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(string_operator_not_equals(asm_fun2,"")) {
        __dec_obj186=fun_name,
        fun_name=(char*)come_increment_ref_count(__builtin_string(asm_fun2));
        __dec_obj186 = come_decrement_ref_count(__dec_obj186, (void*)0, (void*)0, 0,0, (void*)0);
    }
    in_top_level=info->in_top_level;
    info->in_top_level=(_Bool)0;
    if(charp_operator_equals(base_fun_name,"lambda")) {
        block=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)1));
        static int lambda_num=0;
        lambda_num++;
        fun_name_154=(char*)come_increment_ref_count(xsprintf("lambda%d",lambda_num));
        result_type->mInline=(_Bool)0;
        result_type->mStatic=(_Bool)0;
        result_type->mUniq=(_Bool)0;
        fun=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), (void*)0, 2304, "struct sFun*")),(char*)come_increment_ref_count(__builtin_string(fun_name_154)),(struct sType*)come_increment_ref_count(result_type),(struct list$1sType$ph*)come_increment_ref_count(param_types),(struct list$1char$ph*)come_increment_ref_count(param_names),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors),(_Bool)0,var_args,(struct sBlock*)come_increment_ref_count(block),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf("")),const_fun,((void*)0),((void*)0),0,(_Bool)0));
        fun2=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value1=__builtin_string(fun_name_154)))));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_154)),(struct sFun*)come_increment_ref_count(fun),(_Bool)0);
        _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 2312, "struct sNode");
        _inf_obj_value6=(struct sLambdaNode*)come_increment_ref_count(((struct sLambdaNode*)(__right_value1=sLambdaNode_initialize((struct sLambdaNode*)come_increment_ref_count((struct sLambdaNode*)come_calloc(1, sizeof(struct sLambdaNode)*(1), (void*)0, 2312, "struct sLambdaNode*")),fun,info))));
        _inf_value6->_protocol_obj=_inf_obj_value6;
        _inf_value6->finalize=(void*)sLambdaNode_finalize;
        _inf_value6->clone=(void*)sLambdaNode_clone;
        _inf_value6->compile=(void*)sLambdaNode_compile;
        _inf_value6->sline=(void*)sNodeBase_sline;
        _inf_value6->sline_real=(void*)sNodeBase_sline_real;
        _inf_value6->sname=(void*)sNodeBase_sname;
        _inf_value6->terminated=(void*)sNodeBase_terminated;
        _inf_value6->kind=(void*)sLambdaNode_kind;
        _inf_value6->no_mutex=(void*)sNodeBase_no_mutex;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value6)));
        come_call_finalizer(sBlock_finalize, block, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (fun_name_154 = come_decrement_ref_count(fun_name_154, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sFun_finalize, fun, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sFun_finalize, fun2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (asm_fun = come_decrement_ref_count(asm_fun, (void*)0, (void*)0, 0, 0, (void*)0));
        (fun_attribute = come_decrement_ref_count(fun_attribute, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0));
        (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
        (base_fun_name = come_decrement_ref_count(base_fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sType_finalize, obj_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (asm_fun2 = come_decrement_ref_count(asm_fun2, (void*)0, (void*)0, 0, 0, (void*)0));
        (fun_attribute2 = come_decrement_ref_count(fun_attribute2, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sLambdaNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__0;
        come_call_finalizer(sBlock_finalize, block, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (fun_name_154 = come_decrement_ref_count(fun_name_154, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sFun_finalize, fun, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sFun_finalize, fun2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(info->impl_type&&list$1char$ph_length(info->generics_type_names)>0) {
        none_generics_name=(char*)come_increment_ref_count(get_none_generics_name(info->impl_type->mClass->mName));
        generics_sname=(char*)come_increment_ref_count(__builtin_string(info->sname));
        generics_sline=info->sline;
        block_155=(char*)come_increment_ref_count(skip_block(info,(_Bool)0));
        fun_156=(struct sGenericsFun*)come_increment_ref_count(sGenericsFun_initialize((struct sGenericsFun*)come_increment_ref_count((struct sGenericsFun*)come_calloc(1, sizeof(struct sGenericsFun)*(1), (void*)0, 2322, "struct sGenericsFun*")),(struct sType*)come_increment_ref_count(info->impl_type),((struct list$1char$ph*)(__right_value1=list$1char$ph$p_clone(info->generics_type_names))),((struct list$1char$ph*)(__right_value2=list$1char$ph$p_clone(info->method_generics_type_names))),(char*)come_increment_ref_count(__builtin_string(fun_name)),(struct sType*)come_increment_ref_count(result_type),(struct list$1sType$ph*)come_increment_ref_count(param_types),(struct list$1char$ph*)come_increment_ref_count(param_names),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors),var_args,(char*)come_increment_ref_count(block_155),info,(char*)come_increment_ref_count(__builtin_string(generics_sname)),generics_sline,const_fun));
        come_call_finalizer(list$1char$ph$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        fun_name3=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name,base_fun_name));
        map$2char$phsGenericsFun$ph_insert(info->generics_funcs,(char*)come_increment_ref_count(__builtin_string(fun_name3)),(struct sGenericsFun*)come_increment_ref_count(fun_156),(_Bool)0);
        __result_obj__0 = (struct sNode*)come_increment_ref_count((struct sNode*)((void*)0));
        (none_generics_name = come_decrement_ref_count(none_generics_name, (void*)0, (void*)0, 0, 0, (void*)0));
        (generics_sname = come_decrement_ref_count(generics_sname, (void*)0, (void*)0, 0, 0, (void*)0));
        (block_155 = come_decrement_ref_count(block_155, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sGenericsFun_finalize, fun_156, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (fun_name3 = come_decrement_ref_count(fun_name3, (void*)0, (void*)0, 0, 0, (void*)0));
        (asm_fun = come_decrement_ref_count(asm_fun, (void*)0, (void*)0, 0, 0, (void*)0));
        (fun_attribute = come_decrement_ref_count(fun_attribute, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0));
        (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
        (base_fun_name = come_decrement_ref_count(base_fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sType_finalize, obj_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (asm_fun2 = come_decrement_ref_count(asm_fun2, (void*)0, (void*)0, 0, 0, (void*)0));
        (fun_attribute2 = come_decrement_ref_count(fun_attribute2, (void*)0, (void*)0, 0, 0, (void*)0));
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__0;
        (none_generics_name = come_decrement_ref_count(none_generics_name, (void*)0, (void*)0, 0, 0, (void*)0));
        (generics_sname = come_decrement_ref_count(generics_sname, (void*)0, (void*)0, 0, 0, (void*)0));
        (block_155 = come_decrement_ref_count(block_155, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sGenericsFun_finalize, fun_156, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (fun_name3 = come_decrement_ref_count(fun_name3, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    else if(list$1char$ph_length(info->method_generics_type_names)>0) {
        generics_sname_160=(char*)come_increment_ref_count(__builtin_string(info->sname));
        generics_sline_161=info->sline;
        block_162=(char*)come_increment_ref_count(skip_block(info,(_Bool)0));
        fun_163=(struct sGenericsFun*)come_increment_ref_count(sGenericsFun_initialize((struct sGenericsFun*)come_increment_ref_count((struct sGenericsFun*)come_calloc(1, sizeof(struct sGenericsFun)*(1), (void*)0, 2336, "struct sGenericsFun*")),(struct sType*)come_increment_ref_count(info->impl_type),((struct list$1char$ph*)(__right_value1=list$1char$ph$p_clone(info->generics_type_names))),((struct list$1char$ph*)(__right_value2=list$1char$ph$p_clone(info->method_generics_type_names))),(char*)come_increment_ref_count(__builtin_string(fun_name)),(struct sType*)come_increment_ref_count(result_type),(struct list$1sType$ph*)come_increment_ref_count(param_types),(struct list$1char$ph*)come_increment_ref_count(param_names),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors),var_args,(char*)come_increment_ref_count(block_162),info,(char*)come_increment_ref_count(__builtin_string(generics_sname_160)),generics_sline_161,const_fun));
        come_call_finalizer(list$1char$ph$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        if(method_definition) {
            map$2char$phsGenericsFun$ph_insert(info->generics_funcs,(char*)come_increment_ref_count(__builtin_string(fun_name)),(struct sGenericsFun*)come_increment_ref_count(fun_163),(_Bool)0);
        }
        else {
            map$2char$phsGenericsFun$ph_insert(info->generics_funcs,(char*)come_increment_ref_count(__builtin_string(base_fun_name)),(struct sGenericsFun*)come_increment_ref_count(fun_163),(_Bool)0);
        }
        __result_obj__0 = (struct sNode*)come_increment_ref_count((struct sNode*)((void*)0));
        (generics_sname_160 = come_decrement_ref_count(generics_sname_160, (void*)0, (void*)0, 0, 0, (void*)0));
        (block_162 = come_decrement_ref_count(block_162, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sGenericsFun_finalize, fun_163, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (asm_fun = come_decrement_ref_count(asm_fun, (void*)0, (void*)0, 0, 0, (void*)0));
        (fun_attribute = come_decrement_ref_count(fun_attribute, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0));
        (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
        (base_fun_name = come_decrement_ref_count(base_fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sType_finalize, obj_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (asm_fun2 = come_decrement_ref_count(asm_fun2, (void*)0, (void*)0, 0, 0, (void*)0));
        (fun_attribute2 = come_decrement_ref_count(fun_attribute2, (void*)0, (void*)0, 0, 0, (void*)0));
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__0;
        (generics_sname_160 = come_decrement_ref_count(generics_sname_160, (void*)0, (void*)0, 0, 0, (void*)0));
        (block_162 = come_decrement_ref_count(block_162, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sGenericsFun_finalize, fun_163, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(*info->p==123) {
        source_tail=info->p-1;
        if(version>0) {
            new_fun_name=(char*)come_increment_ref_count(xsprintf("%s_v%d",((char*)(__right_value0=__builtin_string(fun_name))),version));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            __dec_obj188=fun_name,
            fun_name=(char*)come_increment_ref_count(__builtin_string(new_fun_name));
            __dec_obj188 = come_decrement_ref_count(__dec_obj188, (void*)0, (void*)0, 0,0, (void*)0);
            (new_fun_name = come_decrement_ref_count(new_fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        static_fun=(_Bool)0;
        if(result_type->mStatic) {
            result_type->mStatic=(_Bool)0;
            result_type->mUniq=(_Bool)0;
            static_fun=(_Bool)1;
        }
        inline_fun=(_Bool)0;
        if(result_type->mInline) {
            result_type->mInline=(_Bool)0;
            result_type->mUniq=(_Bool)0;
            inline_fun=(_Bool)1;
        }
        uniq_fun=(_Bool)0;
        if(result_type->mUniq) {
            result_type->mUniq=(_Bool)0;
            result_type->mInline=(_Bool)0;
            result_type->mStatic=(_Bool)0;
            uniq_fun=(_Bool)1;
        }
        if(result_type->mUniq) {
            result_type->mUniq=(_Bool)0;
            result_type->mInline=(_Bool)0;
            result_type->mStatic=(_Bool)0;
        }
        if(info->defining_class&&info->defining_class->mUniq) {
            uniq_fun=(_Bool)1;
        }
        if(uniq_fun) {
            generics_sname_164=(char*)come_increment_ref_count(__builtin_string(info->sname));
            generics_sline_165=info->sline;
            block_166=(char*)come_increment_ref_count(skip_block(info,constructor_));
            fun_167=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), (void*)0, 2391, "struct sFun*")),(char*)come_increment_ref_count(__builtin_string(fun_name)),(struct sType*)come_increment_ref_count(result_type),(struct list$1sType$ph*)come_increment_ref_count(param_types),(struct list$1char$ph*)come_increment_ref_count(param_names),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors),(_Bool)0,var_args,((void*)0),static_fun,info,inline_fun,uniq_fun,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(fun_attribute),const_fun,(char*)come_increment_ref_count(block_166),(char*)come_increment_ref_count(generics_sname_164),generics_sline_165,(_Bool)0));
            if(info->in_class) {
                map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name)),(struct sFun*)come_increment_ref_count(fun_167),(_Bool)0);
                map$2char$phsFun$ph_insert(info->uniq_funcs,(char*)come_increment_ref_count(__builtin_string(fun_name)),(struct sFun*)come_increment_ref_count(fun_167),(_Bool)0);
            }
            else {
                map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name)),(struct sFun*)come_increment_ref_count(fun_167),(_Bool)0);
                map$2char$phsFun$ph_insert(info->uniq_funcs,(char*)come_increment_ref_count(__builtin_string(fun_name)),(struct sFun*)come_increment_ref_count(fun_167),(_Bool)0);
            }
            _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 2408, "struct sNode");
            _inf_obj_value7=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), (void*)0, 2408, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun_167),info))));
            _inf_value7->_protocol_obj=_inf_obj_value7;
            _inf_value7->finalize=(void*)sFunNode_finalize;
            _inf_value7->clone=(void*)sFunNode_clone;
            _inf_value7->compile=(void*)sFunNode_compile;
            _inf_value7->sline=(void*)sNodeBase_sline;
            _inf_value7->sline_real=(void*)sNodeBase_sline_real;
            _inf_value7->sname=(void*)sNodeBase_sname;
            _inf_value7->terminated=(void*)sNodeBase_terminated;
            _inf_value7->kind=(void*)sFunNode_kind;
            _inf_value7->no_mutex=(void*)sNodeBase_no_mutex;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value7)));
            (generics_sname_164 = come_decrement_ref_count(generics_sname_164, (void*)0, (void*)0, 0, 0, (void*)0));
            (block_166 = come_decrement_ref_count(block_166, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sFun_finalize, fun_167, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (asm_fun = come_decrement_ref_count(asm_fun, (void*)0, (void*)0, 0, 0, (void*)0));
            (fun_attribute = come_decrement_ref_count(fun_attribute, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0));
            (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
            (base_fun_name = come_decrement_ref_count(base_fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sType_finalize, obj_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (asm_fun2 = come_decrement_ref_count(asm_fun2, (void*)0, (void*)0, 0, 0, (void*)0));
            (fun_attribute2 = come_decrement_ref_count(fun_attribute2, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sFunNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__0;
            (generics_sname_164 = come_decrement_ref_count(generics_sname_164, (void*)0, (void*)0, 0, 0, (void*)0));
            (block_166 = come_decrement_ref_count(block_166, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sFun_finalize, fun_167, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            block_168=(struct sBlock*)come_increment_ref_count(parse_block(info,constructor_,(_Bool)1));
            fun_169=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), (void*)0, 2413, "struct sFun*")),(char*)come_increment_ref_count(__builtin_string(fun_name)),(struct sType*)come_increment_ref_count(result_type),(struct list$1sType$ph*)come_increment_ref_count(param_types),(struct list$1char$ph*)come_increment_ref_count(param_names),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors),(_Bool)0,var_args,(struct sBlock*)come_increment_ref_count(sBlock_clone(block_168)),static_fun,info,inline_fun,uniq_fun,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(fun_attribute),const_fun,((void*)0),((void*)0),0,(_Bool)0));
            if(info->in_class) {
                map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name)),(struct sFun*)come_increment_ref_count(fun_169),(_Bool)0);
            }
            else {
                map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name)),(struct sFun*)come_increment_ref_count(fun_169),(_Bool)0);
            }
            _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 2428, "struct sNode");
            _inf_obj_value8=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), (void*)0, 2428, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun_169),info))));
            _inf_value8->_protocol_obj=_inf_obj_value8;
            _inf_value8->finalize=(void*)sFunNode_finalize;
            _inf_value8->clone=(void*)sFunNode_clone;
            _inf_value8->compile=(void*)sFunNode_compile;
            _inf_value8->sline=(void*)sNodeBase_sline;
            _inf_value8->sline_real=(void*)sNodeBase_sline_real;
            _inf_value8->sname=(void*)sNodeBase_sname;
            _inf_value8->terminated=(void*)sNodeBase_terminated;
            _inf_value8->kind=(void*)sFunNode_kind;
            _inf_value8->no_mutex=(void*)sNodeBase_no_mutex;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value8)));
            come_call_finalizer(sBlock_finalize, block_168, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sFun_finalize, fun_169, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (asm_fun = come_decrement_ref_count(asm_fun, (void*)0, (void*)0, 0, 0, (void*)0));
            (fun_attribute = come_decrement_ref_count(fun_attribute, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0));
            (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
            (base_fun_name = come_decrement_ref_count(base_fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sType_finalize, obj_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (asm_fun2 = come_decrement_ref_count(asm_fun2, (void*)0, (void*)0, 0, 0, (void*)0));
            (fun_attribute2 = come_decrement_ref_count(fun_attribute2, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sFunNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__0;
            come_call_finalizer(sBlock_finalize, block_168, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sFun_finalize, fun_169, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    else if(xisalpha(*info->p)||*info->p==95||*info->p==59) {
        if(version>0) {
            new_fun_name_170=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name,version));
            __dec_obj189=fun_name,
            fun_name=(char*)come_increment_ref_count(__builtin_string(new_fun_name_170));
            __dec_obj189 = come_decrement_ref_count(__dec_obj189, (void*)0, (void*)0, 0,0, (void*)0);
            (new_fun_name_170 = come_decrement_ref_count(new_fun_name_170, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        if(*info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
            result_type->mStatic=(_Bool)0;
            result_type->mUniq=(_Bool)0;
            result_type->mInline=(_Bool)0;
            fun_171=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), (void*)0, 2445, "struct sFun*")),(char*)come_increment_ref_count(__builtin_string(fun_name)),(struct sType*)come_increment_ref_count(result_type),(struct list$1sType$ph*)come_increment_ref_count(param_types),(struct list$1char$ph*)come_increment_ref_count(param_names),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors),(_Bool)1,var_args,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(fun_attribute),const_fun,((void*)0),((void*)0),0,(_Bool)0));
            map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name)),(struct sFun*)come_increment_ref_count(fun_171),(_Bool)0);
            _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 2454, "struct sNode");
            _inf_obj_value9=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), (void*)0, 2454, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun_171),info))));
            _inf_value9->_protocol_obj=_inf_obj_value9;
            _inf_value9->finalize=(void*)sFunNode_finalize;
            _inf_value9->clone=(void*)sFunNode_clone;
            _inf_value9->compile=(void*)sFunNode_compile;
            _inf_value9->sline=(void*)sNodeBase_sline;
            _inf_value9->sline_real=(void*)sNodeBase_sline_real;
            _inf_value9->sname=(void*)sNodeBase_sname;
            _inf_value9->terminated=(void*)sNodeBase_terminated;
            _inf_value9->kind=(void*)sFunNode_kind;
            _inf_value9->no_mutex=(void*)sNodeBase_no_mutex;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value9)));
            come_call_finalizer(sFun_finalize, fun_171, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (asm_fun = come_decrement_ref_count(asm_fun, (void*)0, (void*)0, 0, 0, (void*)0));
            (fun_attribute = come_decrement_ref_count(fun_attribute, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0));
            (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
            (base_fun_name = come_decrement_ref_count(base_fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sType_finalize, obj_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (asm_fun2 = come_decrement_ref_count(asm_fun2, (void*)0, (void*)0, 0, 0, (void*)0));
            (fun_attribute2 = come_decrement_ref_count(fun_attribute2, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sFunNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__0;
            come_call_finalizer(sFun_finalize, fun_171, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            multiple_assign_var14=((struct tuple2$2char$phchar$ph*)(__right_value0=parse_function_attribute(info)));
            asm_fun_172=(char*)come_increment_ref_count(multiple_assign_var14->v1);
            fun_attribute2_173=(char*)come_increment_ref_count(multiple_assign_var14->v2);
            come_call_finalizer(tuple2$2char$phchar$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            if(string_operator_not_equals(asm_fun_172,"")) {
                __dec_obj190=fun_name,
                fun_name=(char*)come_increment_ref_count(__builtin_string(asm_fun_172));
                __dec_obj190 = come_decrement_ref_count(__dec_obj190, (void*)0, (void*)0, 0,0, (void*)0);
            }
            __dec_obj191=fun_attribute,
            fun_attribute=(char*)come_increment_ref_count(string_operator_add(((char*)(__right_value1=string_operator_add(fun_attribute," "))),fun_attribute2_173));
            __dec_obj191 = come_decrement_ref_count(__dec_obj191, (void*)0, (void*)0, 0,0, (void*)0);
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            result_type->mStatic=(_Bool)0;
            result_type->mUniq=(_Bool)0;
            result_type->mInline=(_Bool)0;
            fun_174=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), (void*)0, 2469, "struct sFun*")),(char*)come_increment_ref_count(__builtin_string(fun_name)),(struct sType*)come_increment_ref_count(result_type),(struct list$1sType$ph*)come_increment_ref_count(param_types),(struct list$1char$ph*)come_increment_ref_count(param_names),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors),(_Bool)1,var_args,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(fun_attribute),const_fun,((void*)0),((void*)0),0,(_Bool)0));
            map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name)),(struct sFun*)come_increment_ref_count(fun_174),(_Bool)0);
            _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 2479, "struct sNode");
            _inf_obj_value10=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), (void*)0, 2479, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun_174),info))));
            _inf_value10->_protocol_obj=_inf_obj_value10;
            _inf_value10->finalize=(void*)sFunNode_finalize;
            _inf_value10->clone=(void*)sFunNode_clone;
            _inf_value10->compile=(void*)sFunNode_compile;
            _inf_value10->sline=(void*)sNodeBase_sline;
            _inf_value10->sline_real=(void*)sNodeBase_sline_real;
            _inf_value10->sname=(void*)sNodeBase_sname;
            _inf_value10->terminated=(void*)sNodeBase_terminated;
            _inf_value10->kind=(void*)sFunNode_kind;
            _inf_value10->no_mutex=(void*)sNodeBase_no_mutex;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value10)));
            (asm_fun_172 = come_decrement_ref_count(asm_fun_172, (void*)0, (void*)0, 0, 0, (void*)0));
            (fun_attribute2_173 = come_decrement_ref_count(fun_attribute2_173, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sFun_finalize, fun_174, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (asm_fun = come_decrement_ref_count(asm_fun, (void*)0, (void*)0, 0, 0, (void*)0));
            (fun_attribute = come_decrement_ref_count(fun_attribute, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0));
            (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
            (base_fun_name = come_decrement_ref_count(base_fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sType_finalize, obj_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (asm_fun2 = come_decrement_ref_count(asm_fun2, (void*)0, (void*)0, 0, 0, (void*)0));
            (fun_attribute2 = come_decrement_ref_count(fun_attribute2, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sFunNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__0;
            (asm_fun_172 = come_decrement_ref_count(asm_fun_172, (void*)0, (void*)0, 0, 0, (void*)0));
            (fun_attribute2_173 = come_decrement_ref_count(fun_attribute2_173, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sFun_finalize, fun_174, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    else {
        err_msg(info,"invalid character(2)(%c)",*info->p);
        exit(2);
    }
    info->constructor_=(_Bool)0;
    info->in_top_level=in_top_level;
    __result_obj__0 = (struct sNode*)come_increment_ref_count((struct sNode*)((void*)0));
    (asm_fun = come_decrement_ref_count(asm_fun, (void*)0, (void*)0, 0, 0, (void*)0));
    (fun_attribute = come_decrement_ref_count(fun_attribute, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0));
    (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
    (base_fun_name = come_decrement_ref_count(base_fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sType_finalize, obj_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (asm_fun2 = come_decrement_ref_count(asm_fun2, (void*)0, (void*)0, 0, 0, (void*)0));
    (fun_attribute2 = come_decrement_ref_count(fun_attribute2, (void*)0, (void*)0, 0, 0, (void*)0));
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    return __result_obj__0;
}

static void tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$$p_finalize(struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->v3!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, self->v3, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

static struct sLambdaNode* sLambdaNode_clone(struct sLambdaNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sLambdaNode_clone"; neo_current_frame = &fr;
    struct sLambdaNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sLambdaNode* result  ;
    char* __dec_obj187  ;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sLambdaNode*)come_increment_ref_count((struct sLambdaNode*)come_calloc(1, sizeof(struct sLambdaNode)*(1), (void*)0, 3, "struct sLambdaNode*"));
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj187=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sLambdaNode_clone", 5, "char*"));
        __dec_obj187 = come_decrement_ref_count(__dec_obj187, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)) {
        result->mFun=self->mFun;
    }
    __result_obj__0 = result;
    come_call_finalizer(sLambdaNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct map$2char$phsGenericsFun$ph* map$2char$phsGenericsFun$ph_insert(struct map$2char$phsGenericsFun$ph* self, char* key  , struct sGenericsFun* item  , _Bool by_pointer)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsGenericsFun$ph_insert"; neo_current_frame = &fr;
    struct map$2char$phsGenericsFun$ph* __result_obj__0;
    unsigned int hash;
    unsigned int it;
    _Bool same_key_exist;
    char* it2  ;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sGenericsFun_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len*10>=self->size) {
        map$2char$phsGenericsFun$ph_rehash(self);
    }
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if((!by_pointer&&string_equals(self->keys[it],key))||(by_pointer&&self->keys[it]==key)) {
                if(1) {
                    list$1char$ph_remove(self->key_list,self->keys[it],(_Bool)0);
                    (self->keys[it] = come_decrement_ref_count(self->keys[it], (void*)0, (void*)0, 0, 0, (void*)0));
                    self->keys[it]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it],(_Bool)0);
                    self->keys[it]=key;
                }
                if(1) {
                    come_call_finalizer(sGenericsFun_finalize, self->items[it], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->items[it]=(struct sGenericsFun*)come_increment_ref_count(item);
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
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it]=(_Bool)1;
            if(1) {
                self->keys[it]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it]=key;
            }
            if(1) {
                self->items[it]=(struct sGenericsFun*)come_increment_ref_count(item);
            }
            else {
                self->items[it]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist=(_Bool)0;
    for(it2=list$1char$ph_begin(self->key_list);!list$1char$ph_end(self->key_list);it2=list$1char$ph_next(self->key_list)){
        if((!by_pointer&&string_equals(it2,key))||(by_pointer&&it2==key)) {
            same_key_exist=(_Bool)1;
        }
    }
    if(!same_key_exist) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__0 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sGenericsFun_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sGenericsFun_finalize(struct sGenericsFun* self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sGenericsFun_finalize"; neo_current_frame = &fr;
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
    neo_current_frame = fr.prev;
}

static void map$2char$phsGenericsFun$ph_rehash(struct map$2char$phsGenericsFun$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsGenericsFun$ph_rehash"; neo_current_frame = &fr;
    int size;
    void* __right_value0 = (void*)0;
    char** keys  ;
    struct sGenericsFun** items  ;
    _Bool* item_existance;
    int len;
    char* it  ;
    struct sGenericsFun* default_value  ;
    struct sGenericsFun* it2  ;
    unsigned int hash;
    int n;
    struct sGenericsFun* default_value_159  ;
    size=self->size*10;
    keys=(char**)come_increment_ref_count(((char**)(__right_value0=(char**)come_calloc(1, sizeof(char*)*(1*(size)), (void*)0, 1867, "char**"))));
    items=(struct sGenericsFun**)come_increment_ref_count(((struct sGenericsFun**)(__right_value0=(struct sGenericsFun**)come_calloc(1, sizeof(struct sGenericsFun*)*(1*(size)), (void*)0, 1868, "struct sGenericsFun**"))));
    item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value0=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size)), (void*)0, 1869, "_Bool*"))));
    len=0;
    for(it=map$2char$phsGenericsFun$ph_begin(self);!map$2char$phsGenericsFun$ph_end(self);it=map$2char$phsGenericsFun$ph_next(self)){
        memset(&default_value,0,sizeof(struct sGenericsFun*));
        it2=((struct sGenericsFun*)(__right_value0=map$2char$phsGenericsFun$ph_at(self,it,(struct sGenericsFun*)come_increment_ref_count(default_value),(_Bool)0)));
        hash=string_get_hash_key(((char*)it))%size;
        n=hash;
        while((_Bool)1) {
            if(item_existance[n]) {
                n++;
                if(n>=size) {
                    n=0;
                }
                else if(n==hash) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance[n]=(_Bool)1;
                keys[n]=it;
                memset(&default_value_159,0,sizeof(struct sGenericsFun*));
                items[n]=((struct sGenericsFun*)(__right_value0=map$2char$phsGenericsFun$ph_at(self,it,(struct sGenericsFun*)come_increment_ref_count(default_value_159),(_Bool)0)));
                len++;
                come_call_finalizer(sGenericsFun_finalize, default_value_159, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                come_call_finalizer(sGenericsFun_finalize, default_value_159, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    come_free((char*)self->items);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, (void*)0));
    come_free((char*)self->keys);
    self->keys=keys;
    self->items=items;
    self->item_existance=item_existance;
    self->size=size;
    self->len=len;
    neo_current_frame = fr.prev;
}

static char* map$2char$phsGenericsFun$ph_begin(struct map$2char$phsGenericsFun$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsGenericsFun$ph_begin"; neo_current_frame = &fr;
    char* result  ;
    char* __result_obj__0  ;
    char* result_157  ;
    if(self==((void*)0)) {
        memset(&result,0,sizeof(char*));
        __result_obj__0 = result;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    self->key_list->it=self->key_list->head;
    if(self->key_list->it) {
        __result_obj__0 = self->key_list->it->item;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    memset(&result_157,0,sizeof(char*));
    __result_obj__0 = result_157;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static _Bool map$2char$phsGenericsFun$ph_end(struct map$2char$phsGenericsFun$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsGenericsFun$ph_end"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
    neo_current_frame = fr.prev;
}

static char* map$2char$phsGenericsFun$ph_next(struct map$2char$phsGenericsFun$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsGenericsFun$ph_next"; neo_current_frame = &fr;
    char* result  ;
    char* __result_obj__0  ;
    char* result_158  ;
    if(self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result,0,sizeof(char*));
        __result_obj__0 = result;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    self->key_list->it=self->key_list->it->next;
    if(self->key_list->it) {
        __result_obj__0 = self->key_list->it->item;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    memset(&result_158,0,sizeof(char*));
    __result_obj__0 = result_158;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sGenericsFun* map$2char$phsGenericsFun$ph_at(struct map$2char$phsGenericsFun$ph* self, char* key  , struct sGenericsFun* default_value  , _Bool by_pointer)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsGenericsFun$ph_at"; neo_current_frame = &fr;
    struct sGenericsFun* __result_obj__0  ;
    unsigned int hash;
    unsigned int it;
    if(self==((void*)0)) {
        __result_obj__0 = (struct sGenericsFun*)come_increment_ref_count(default_value);
        come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        neo_current_frame = fr.prev;
        come_call_finalizer(sGenericsFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if((!by_pointer&&string_equals(self->keys[it],key))||(by_pointer&&self->keys[it]==key)) {
                __result_obj__0 = (struct sGenericsFun*)come_increment_ref_count(self->items[it]);
                come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                neo_current_frame = fr.prev;
                come_call_finalizer(sGenericsFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
            it++;
            if(it>=self->size) {
                it=0;
            }
            else if(it==hash) {
                __result_obj__0 = (struct sGenericsFun*)come_increment_ref_count(default_value);
                come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                neo_current_frame = fr.prev;
                come_call_finalizer(sGenericsFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
        }
        else {
            __result_obj__0 = (struct sGenericsFun*)come_increment_ref_count(default_value);
            come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            neo_current_frame = fr.prev;
            come_call_finalizer(sGenericsFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__0;
        }
    }
    __result_obj__0 = (struct sGenericsFun*)come_increment_ref_count(default_value);
    come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sGenericsFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

struct tuple2$2sFun$pchar$ph* create_finalizer_automatically(struct sType* type  , const char* fun_name, struct sInfo* info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "create_finalizer_automatically"; neo_current_frame = &fr;
    char* last_code  ;
    char* __dec_obj192  ;
    char* last_code2  ;
    char* __dec_obj193  ;
    struct sClass* current_stack_frame_struct  ;
    void* __right_value0 = (void*)0;
    struct buffer* paren_block_buffer  ;
    struct buffer* __dec_obj194  ;
    struct buffer* if_expression_buffer  ;
    struct buffer* __dec_obj195  ;
    char* real_fun_name  ;
    struct sFun* finalizer  ;
    struct sType* type_before  ;
    struct sType* type2  ;
    char* fun_name2  ;
    struct sType* type_  ;
    char* none_generics_name  ;
    char* generics_fun_name  ;
    struct sGenericsFun* generics_fun  ;
    struct tuple2$2char$ph_Bool$* multiple_assign_var15
;    char* name  =0;
    _Bool err=0;
    char* __dec_obj196  ;
    int i;
    char* new_fun_name  ;
    char* __dec_obj197  ;
    char* __dec_obj198  ;
    struct sType* __dec_obj199  ;
    char* __dec_obj200  ;
    char* user_real_fun_name  ;
    struct sFun* user_finalizer  ;
    struct sType* type2_175  ;
    struct sType* __dec_obj201  ;
    struct sClass* klass  ;
    void* __right_value1 = (void*)0;
    struct buffer* source  ;
    struct list$1tuple2$2char$phsType$ph$ph* o2_saved;
    struct tuple2$2char$phsType$ph* it;
    struct tuple2$2char$phsType$ph* multiple_assign_var16
;    char* name_178  =0;
    struct sType* field_type  =0;
    char* p;
    int sline;
    char* sname  ;
    char* head;
    struct buffer* source3  ;
    struct buffer* __dec_obj202  ;
    char* __dec_obj203  ;
    struct sBlock* block  ;
    void* __right_value2 = (void*)0;
    struct sType* result_type;
    char* name_180  ;
    struct sType* self_type  ;
    struct sType* __list_values1__[1]  ;
    struct list$1sType$ph* param_types;
    char* __list_values2__[1]  ;
    struct list$1char$ph* param_names;
    struct list$1char$ph* param_default_parametors;
    struct sFun* fun2  ;
    struct sFun* fun;
    struct sNode* _inf_value11;
    struct sFunNode* _inf_obj_value11;
    struct sNode* node;
    _Bool Value;
    struct buffer* __dec_obj204  ;
    char* __dec_obj205  ;
    char* __dec_obj206  ;
    char* __dec_obj207  ;
    struct buffer* __dec_obj208  ;
    struct buffer* __dec_obj209  ;
    struct tuple2$2sFun$pchar$ph* __result_obj__0;
    memset(&i, 0, sizeof(i));
    last_code=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj192=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj192 = come_decrement_ref_count(__dec_obj192, (void*)0, (void*)0, 0,0, (void*)0);
    last_code2=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj193=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj193 = come_decrement_ref_count(__dec_obj193, (void*)0, (void*)0, 0,0, (void*)0);
    current_stack_frame_struct=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    paren_block_buffer=(struct buffer*)come_increment_ref_count(buffer_clone(info->paren_block_buffer));
    __dec_obj194=info->paren_block_buffer,
    info->paren_block_buffer=((void*)0);
    come_call_finalizer(buffer_finalize, __dec_obj194,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    if_expression_buffer=(struct buffer*)come_increment_ref_count(buffer_clone(info->if_expression_buffer));
    __dec_obj195=info->if_expression_buffer,
    info->if_expression_buffer=((void*)0);
    come_call_finalizer(buffer_finalize, __dec_obj195,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name=((void*)0);
    finalizer=((void*)0);
    type_before=(struct sType*)come_increment_ref_count(sType_clone(type));
    type2=(struct sType*)come_increment_ref_count(sType_clone(type));
    type2->mHeap=(_Bool)0;
    fun_name2=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type_=(struct sType*)come_increment_ref_count(get_no_solved_type2(type));
    if(list$1sType$ph_length(type_->mGenericsTypes)>0) {
        finalizer=((struct sFun*)(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,fun_name2)));
        if(finalizer==((void*)0)) {
            none_generics_name=(char*)come_increment_ref_count(get_none_generics_name(type2->mClass->mName));
            generics_fun_name=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name,fun_name));
            generics_fun=((struct sGenericsFun*)(__right_value0=map$2char$phsGenericsFun$ph_operator_load_element(info->generics_funcs,generics_fun_name)));
            if(generics_fun) {
                multiple_assign_var15=((struct tuple2$2char$ph_Bool$*)(__right_value0=create_generics_fun((char*)come_increment_ref_count(fun_name2),generics_fun,type_,info)));
                name=(char*)come_increment_ref_count(multiple_assign_var15->v1);
                err=multiple_assign_var15->v2;
                come_call_finalizer(tuple2$2char$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                if(!err) {
                    printf("%s %d: can't create generics finalizer\n",info->sname,info->sline);
                    exit(2);
                }
                finalizer=((struct sFun*)(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,name)));
                (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
            }
            (none_generics_name = come_decrement_ref_count(none_generics_name, (void*)0, (void*)0, 0, 0, (void*)0));
            (generics_fun_name = come_decrement_ref_count(generics_fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        __dec_obj196=real_fun_name,
        real_fun_name=(char*)come_increment_ref_count(fun_name2);
        __dec_obj196 = come_decrement_ref_count(__dec_obj196, (void*)0, (void*)0, 0,0, (void*)0);
    }
    else {
        for(i=128-1;i>=1;i--){
            new_fun_name=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2,i));
            finalizer=((struct sFun*)(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,new_fun_name)));
            if(finalizer) {
                __dec_obj197=fun_name2,
                fun_name2=(char*)come_increment_ref_count(__builtin_string(new_fun_name));
                __dec_obj197 = come_decrement_ref_count(__dec_obj197, (void*)0, (void*)0, 0,0, (void*)0);
                (new_fun_name = come_decrement_ref_count(new_fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
                break;
            }
            (new_fun_name = come_decrement_ref_count(new_fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        if(finalizer==((void*)0)) {
            finalizer=((struct sFun*)(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,fun_name2)));
        }
        __dec_obj198=real_fun_name,
        real_fun_name=(char*)come_increment_ref_count(fun_name2);
        __dec_obj198 = come_decrement_ref_count(__dec_obj198, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(finalizer==((void*)0)) {
        __dec_obj199=type_,
        type_=(struct sType*)come_increment_ref_count(type_before);
        come_call_finalizer(sType_finalize, __dec_obj199,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        __dec_obj200=real_fun_name,
        real_fun_name=(char*)come_increment_ref_count(create_method_name(type_,(_Bool)0,fun_name,info,(_Bool)1));
        __dec_obj200 = come_decrement_ref_count(__dec_obj200, (void*)0, (void*)0, 0,0, (void*)0);
        user_real_fun_name=(char*)come_increment_ref_count(create_method_name(type_,(_Bool)0,"user_finalize",info,(_Bool)1));
        user_finalizer=((struct sFun*)(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,user_real_fun_name)));
        type2_175=(struct sType*)come_increment_ref_count(solve_generics(type_,type_,info));
        __dec_obj201=type_,
        type_=(struct sType*)come_increment_ref_count(type2_175);
        come_call_finalizer(sType_finalize, __dec_obj201,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        klass=type_->mClass;
        if(type_->mPointerNum>0&&klass->mStruct||type_->mAllocaValue) {
            source=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), (void*)0, 2580, "struct buffer*"))));
            buffer_append_char(source,123);
            klass=((struct sClass*)(__right_value0=map$2char$phsClass$ph_operator_load_element(info->classes,klass->mName)));
            for(o2_saved=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(klass->mFields),it=list$1tuple2$2char$phsType$ph$ph_begin(o2_saved);!list$1tuple2$2char$phsType$ph$ph_end(o2_saved);it=list$1tuple2$2char$phsType$ph$ph_next(o2_saved)){
                multiple_assign_var16=it;
                name_178=(char*)come_increment_ref_count(multiple_assign_var16->v1);
                field_type=(struct sType*)come_increment_ref_count(multiple_assign_var16->v2);
                if(field_type->mHeap) {
                    char source2[1024];
                    memset(&source2, 0, sizeof(source2));
                    snprintf(source2,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { delete borrow self.%s; }\n",name_178,name_178,name_178,name_178);
                    buffer_append_str(source,source2);
                }
                else if(field_type->mChannel) {
                    char source2_179[1024];
                    memset(&source2_179, 0, sizeof(source2_179));
                    snprintf(source2_179,1024,"if(self != ((void*)0) && self.%s[0] != ((void*)0) && come_get_ref_count(self) == 0) { close(self.%s[0]); }",name_178,name_178);
                    buffer_append_str(source,source2_179);
                    snprintf(source2_179,1024,"if(self != ((void*)0) && self.%s[1] != ((void*)0) && come_get_ref_count(self) == 0) { close(self.%s[1]); }",name_178,name_178);
                    buffer_append_str(source,source2_179);
                }
                (name_178 = come_decrement_ref_count(name_178, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(sType_finalize, field_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            buffer_append_char(source,125);
            p=info->p;
            sline=info->sline;
            sname=(char*)come_increment_ref_count(info->sname);
            head=info->head;
            source3=(struct buffer*)come_increment_ref_count(info->source);
            __dec_obj202=info->source,
            info->source=(struct buffer*)come_increment_ref_count(source);
            come_call_finalizer(buffer_finalize, __dec_obj202,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            info->p=source->buf;
            info->head=source->buf;
            __dec_obj203=info->sname,
            info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name));
            __dec_obj203 = come_decrement_ref_count(__dec_obj203, (void*)0, (void*)0, 0,0, (void*)0);
            info->sline=0;
            block=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0));
            result_type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), (void*)0, 2631, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info,(_Bool)0));
            name_180=(char*)come_increment_ref_count((char*)come_memdup(real_fun_name, "07function.nc", 2632, "char*"));
            self_type=(struct sType*)come_increment_ref_count(sType_clone(type_));
            self_type->mHeap=(_Bool)0;
            if(self_type->mPointerNum==0) {
                self_type->mPointerNum=1;
            }
            if(self_type->mPointerNum>1) {
                self_type->mPointerNum=1;
            }
            param_types=(struct list$1sType$ph*)come_increment_ref_count((__list_values1__[0]=self_type,
list$1sType$ph_initialize_with_values((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "07function.nc", 2641, "struct list$1sType$ph")),1,__list_values1__)));
            param_names=(struct list$1char$ph*)come_increment_ref_count((__list_values2__[0]=((char*)(__right_value0=__builtin_string("self"))),
list$1char$ph_initialize_with_values((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "07function.nc", 2642, "struct list$1char$ph")),1,__list_values2__)));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            param_default_parametors=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), (void*)0, 2643, "struct list$1char$ph*"))));
            list$1char$ph_push_back(param_default_parametors,((void*)0));
            result_type->mStatic=(_Bool)0;
            result_type->mUniq=(_Bool)0;
            result_type->mInline=(_Bool)0;
            fun2=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value1=__builtin_string(name_180)))));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            if(fun2==((void*)0)||fun2->mExternal) {
                fun=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), (void*)0, 2652, "struct sFun*")),(char*)come_increment_ref_count(name_180),(struct sType*)come_increment_ref_count(result_type),(struct list$1sType$ph*)come_increment_ref_count(param_types),(struct list$1char$ph*)come_increment_ref_count(param_names),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0,((void*)0),((void*)0),0,(_Bool)0));
                fun->mGenericsFun=(_Bool)1;
                map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_180)),(struct sFun*)come_increment_ref_count(fun),(_Bool)0);
                finalizer=fun;
                _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 2663, "struct sNode");
                _inf_obj_value11=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), (void*)0, 2663, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun),info))));
                _inf_value11->_protocol_obj=_inf_obj_value11;
                _inf_value11->finalize=(void*)sFunNode_finalize;
                _inf_value11->clone=(void*)sFunNode_clone;
                _inf_value11->compile=(void*)sFunNode_compile;
                _inf_value11->sline=(void*)sNodeBase_sline;
                _inf_value11->sline_real=(void*)sNodeBase_sline_real;
                _inf_value11->sname=(void*)sNodeBase_sname;
                _inf_value11->terminated=(void*)sNodeBase_terminated;
                _inf_value11->kind=(void*)sFunNode_kind;
                _inf_value11->no_mutex=(void*)sNodeBase_no_mutex;
                node=(struct sNode*)come_increment_ref_count(_inf_value11);
                come_call_finalizer(sFunNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                Value=node_compile(node,info);
                if(!Value) {
                    printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                    exit(2);
                }
                come_call_finalizer(sFun_finalize, fun, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            }
            else {
                finalizer=fun2;
            }
            __dec_obj204=info->source,
            info->source=(struct buffer*)come_increment_ref_count(source3);
            come_call_finalizer(buffer_finalize, __dec_obj204,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            info->p=p;
            info->head=head;
            info->sline=sline;
            __dec_obj205=info->sname,
            info->sname=(char*)come_increment_ref_count(sname);
            __dec_obj205 = come_decrement_ref_count(__dec_obj205, (void*)0, (void*)0, 0,0, (void*)0);
            come_call_finalizer(buffer_finalize, source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (sname = come_decrement_ref_count(sname, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(buffer_finalize, source3, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sBlock_finalize, block, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (name_180 = come_decrement_ref_count(name_180, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sType_finalize, self_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sFun_finalize, fun2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        (user_real_fun_name = come_decrement_ref_count(user_real_fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sType_finalize, type2_175, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct;
    __dec_obj206=info->module->mLastCode,
    info->module->mLastCode=(char*)come_increment_ref_count(last_code);
    __dec_obj206 = come_decrement_ref_count(__dec_obj206, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj207=info->module->mLastCode2,
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2);
    __dec_obj207 = come_decrement_ref_count(__dec_obj207, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj208=info->if_expression_buffer,
    info->if_expression_buffer=(struct buffer*)come_increment_ref_count(if_expression_buffer);
    come_call_finalizer(buffer_finalize, __dec_obj208,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj209=info->paren_block_buffer,
    info->paren_block_buffer=(struct buffer*)come_increment_ref_count(paren_block_buffer);
    come_call_finalizer(buffer_finalize, __dec_obj209,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __result_obj__0 = (struct tuple2$2sFun$pchar$ph*)come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value1=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph*)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "07function.nc", 2689, "struct tuple2$2sFun$pchar$ph")),finalizer,(char*)come_increment_ref_count(real_fun_name)))));
    (last_code = come_decrement_ref_count(last_code, (void*)0, (void*)0, 0, 0, (void*)0));
    (last_code2 = come_decrement_ref_count(last_code2, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(buffer_finalize, paren_block_buffer, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(buffer_finalize, if_expression_buffer, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (real_fun_name = come_decrement_ref_count(real_fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sType_finalize, type_before, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (fun_name2 = come_decrement_ref_count(fun_name2, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sType_finalize, type_, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static int list$1sType$ph_length(struct list$1sType$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_length"; neo_current_frame = &fr;
    if(self==((void*)0)) {
        neo_current_frame = fr.prev;
        return 0;
    }
    neo_current_frame = fr.prev;
    return self->len;
    neo_current_frame = fr.prev;
}

static struct sGenericsFun* map$2char$phsGenericsFun$ph$p_operator_load_element(struct map$2char$phsGenericsFun$ph* self, char* key  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsGenericsFun$ph$p_operator_load_element"; neo_current_frame = &fr;
    struct sGenericsFun* default_value  ;
    struct sGenericsFun* __result_obj__0  ;
    unsigned int hash;
    unsigned int it;
    memset(&default_value,0,sizeof(struct sGenericsFun*));
    if(self==((void*)0)) {
        __result_obj__0 = (struct sGenericsFun*)come_increment_ref_count(default_value);
        come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        neo_current_frame = fr.prev;
        come_call_finalizer(sGenericsFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if(string_equals(self->keys[it],key)) {
                __result_obj__0 = (struct sGenericsFun*)come_increment_ref_count(self->items[it]);
                come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                neo_current_frame = fr.prev;
                come_call_finalizer(sGenericsFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
            it++;
            if(it>=self->size) {
                it=0;
            }
            else if(it==hash) {
                __result_obj__0 = (struct sGenericsFun*)come_increment_ref_count(default_value);
                come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                neo_current_frame = fr.prev;
                come_call_finalizer(sGenericsFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
        }
        else {
            __result_obj__0 = (struct sGenericsFun*)come_increment_ref_count(default_value);
            come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            neo_current_frame = fr.prev;
            come_call_finalizer(sGenericsFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__0;
        }
    }
    __result_obj__0 = (struct sGenericsFun*)come_increment_ref_count(default_value);
    come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sGenericsFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct sGenericsFun* map$2char$phsGenericsFun$ph_operator_load_element(struct map$2char$phsGenericsFun$ph* self, char* key  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsGenericsFun$ph_operator_load_element"; neo_current_frame = &fr;
    struct sGenericsFun* default_value  ;
    struct sGenericsFun* __result_obj__0  ;
    unsigned int hash;
    unsigned int it;
    memset(&default_value,0,sizeof(struct sGenericsFun*));
    if(self==((void*)0)) {
        __result_obj__0 = (struct sGenericsFun*)come_increment_ref_count(default_value);
        come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        neo_current_frame = fr.prev;
        come_call_finalizer(sGenericsFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if(string_equals(self->keys[it],key)) {
                __result_obj__0 = (struct sGenericsFun*)come_increment_ref_count(self->items[it]);
                come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                neo_current_frame = fr.prev;
                come_call_finalizer(sGenericsFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
            it++;
            if(it>=self->size) {
                it=0;
            }
            else if(it==hash) {
                __result_obj__0 = (struct sGenericsFun*)come_increment_ref_count(default_value);
                come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                neo_current_frame = fr.prev;
                come_call_finalizer(sGenericsFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
        }
        else {
            __result_obj__0 = (struct sGenericsFun*)come_increment_ref_count(default_value);
            come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            neo_current_frame = fr.prev;
            come_call_finalizer(sGenericsFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__0;
        }
    }
    __result_obj__0 = (struct sGenericsFun*)come_increment_ref_count(default_value);
    come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sGenericsFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct sClass* map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char* key  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsClass$ph$p_operator_load_element"; neo_current_frame = &fr;
    struct sClass* default_value  ;
    struct sClass* __result_obj__0  ;
    unsigned int hash;
    unsigned int it;
    memset(&default_value,0,sizeof(struct sClass*));
    if(self==((void*)0)) {
        __result_obj__0 = (struct sClass*)come_increment_ref_count(default_value);
        come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        neo_current_frame = fr.prev;
        come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if(string_equals(self->keys[it],key)) {
                __result_obj__0 = (struct sClass*)come_increment_ref_count(self->items[it]);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                neo_current_frame = fr.prev;
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
                neo_current_frame = fr.prev;
                come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
        }
        else {
            __result_obj__0 = (struct sClass*)come_increment_ref_count(default_value);
            come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            neo_current_frame = fr.prev;
            come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__0;
        }
    }
    __result_obj__0 = (struct sClass*)come_increment_ref_count(default_value);
    come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static void sClass_finalize(struct sClass* self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sClass_finalize"; neo_current_frame = &fr;
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
    neo_current_frame = fr.prev;
}

static void list$1tuple2$2char$phsType$ph$ph$p_finalize(struct list$1tuple2$2char$phsType$ph$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsType$ph$ph$p_finalize"; neo_current_frame = &fr;
    struct list_item$1tuple2$2char$phsType$ph$ph* it;
    struct list_item$1tuple2$2char$phsType$ph$ph* prev_it;
    if(self==((void*)0)) {
        neo_current_frame = fr.prev;
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1tuple2$2char$phsType$ph$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1tuple2$2char$phsType$ph$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2char$phsType$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

static struct sClass* map$2char$phsClass$ph_operator_load_element(struct map$2char$phsClass$ph* self, char* key  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsClass$ph_operator_load_element"; neo_current_frame = &fr;
    struct sClass* default_value  ;
    struct sClass* __result_obj__0  ;
    unsigned int hash;
    unsigned int it;
    memset(&default_value,0,sizeof(struct sClass*));
    if(self==((void*)0)) {
        __result_obj__0 = (struct sClass*)come_increment_ref_count(default_value);
        come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        neo_current_frame = fr.prev;
        come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if(string_equals(self->keys[it],key)) {
                __result_obj__0 = (struct sClass*)come_increment_ref_count(self->items[it]);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                neo_current_frame = fr.prev;
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
                neo_current_frame = fr.prev;
                come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
        }
        else {
            __result_obj__0 = (struct sClass*)come_increment_ref_count(default_value);
            come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            neo_current_frame = fr.prev;
            come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__0;
        }
    }
    __result_obj__0 = (struct sClass*)come_increment_ref_count(default_value);
    come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_begin(struct list$1tuple2$2char$phsType$ph$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsType$ph$ph_begin"; neo_current_frame = &fr;
    struct tuple2$2char$phsType$ph* result;
    struct tuple2$2char$phsType$ph* __result_obj__0;
    struct tuple2$2char$phsType$ph* result_176;
    if(self==((void*)0)) {
        memset(&result,0,sizeof(struct tuple2$2char$phsType$ph*));
        __result_obj__0 = result;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    self->it=self->head;
    if(self->it) {
        __result_obj__0 = self->it->item;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    memset(&result_176,0,sizeof(struct tuple2$2char$phsType$ph*));
    __result_obj__0 = result_176;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static _Bool list$1tuple2$2char$phsType$ph$ph_end(struct list$1tuple2$2char$phsType$ph$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsType$ph$ph_end"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return self==((void*)0)||self->it==((void*)0);
    neo_current_frame = fr.prev;
}

static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_next(struct list$1tuple2$2char$phsType$ph$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsType$ph$ph_next"; neo_current_frame = &fr;
    struct tuple2$2char$phsType$ph* result;
    struct tuple2$2char$phsType$ph* __result_obj__0;
    struct tuple2$2char$phsType$ph* result_177;
    if(self==((void*)0)||self->it==((void*)0)) {
        memset(&result,0,sizeof(struct tuple2$2char$phsType$ph*));
        __result_obj__0 = result;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    self->it=self->it->next;
    if(self->it) {
        __result_obj__0 = self->it->item;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    memset(&result_177,0,sizeof(struct tuple2$2char$phsType$ph*));
    __result_obj__0 = result_177;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct list$1sType$ph* list$1sType$ph_initialize_with_values(struct list$1sType$ph* self, int num_value, struct sType** values  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_initialize_with_values"; neo_current_frame = &fr;
    int i;
    struct list$1sType$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(i=0;i<num_value;i++){
        list$1sType$ph_push_back(self,(struct sType*)come_increment_ref_count(values[i]));
    }
    __result_obj__0 = (struct list$1sType$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1sType$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct list$1char$ph* list$1char$ph_initialize_with_values(struct list$1char$ph* self, int num_value, char** values  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_initialize_with_values"; neo_current_frame = &fr;
    int i;
    struct list$1char$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(i=0;i<num_value;i++){
        list$1char$ph_push_back(self,(char*)come_increment_ref_count(values[i]));
    }
    __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct tuple2$2sFun$pchar$ph* tuple2$2sFun$pchar$ph_initialize(struct tuple2$2sFun$pchar$ph* self, struct sFun* v1  , char* v2  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2sFun$pchar$ph_initialize"; neo_current_frame = &fr;
    char* __dec_obj210  ;
    struct tuple2$2sFun$pchar$ph* __result_obj__0;
    self->v1=v1;
    __dec_obj210=self->v2,
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj210 = come_decrement_ref_count(__dec_obj210, (void*)0, (void*)0, 0,0, (void*)0);
    __result_obj__0 = (struct tuple2$2sFun$pchar$ph*)come_increment_ref_count(self);
    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    (v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0, 0, (void*)0));
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static void tuple2$2sFun$pchar$ph$p_finalize(struct tuple2$2sFun$pchar$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2sFun$pchar$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    neo_current_frame = fr.prev;
}

struct tuple2$2sFun$pchar$ph* create_equals_automatically(struct sType* type  , const char* fun_name, struct sInfo* info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "create_equals_automatically"; neo_current_frame = &fr;
    char* last_code  ;
    char* __dec_obj211  ;
    char* last_code2  ;
    char* __dec_obj212  ;
    void* __right_value0 = (void*)0;
    struct buffer* if_expression_buffer  ;
    struct buffer* __dec_obj213  ;
    struct buffer* paren_block_buffer  ;
    struct buffer* __dec_obj214  ;
    struct sClass* current_stack_frame_struct  ;
    struct sFun* equaler  ;
    char* real_fun_name  ;
    struct sType* type2  ;
    struct sClass* klass  ;
    void* __right_value1 = (void*)0;
    struct buffer* source  ;
    struct list$1tuple2$2char$phsType$ph$ph* o2_saved;
    struct tuple2$2char$phsType$ph* it;
    struct tuple2$2char$phsType$ph* multiple_assign_var17
;    char* name_181  =0;
    struct sType* field_type  =0;
    char* p;
    int sline;
    char* sname  ;
    char* head;
    struct buffer* source3  ;
    struct buffer* __dec_obj215  ;
    char* __dec_obj216  ;
    struct sBlock* block  ;
    void* __right_value2 = (void*)0;
    struct sType* result_type;
    char* name_183  ;
    struct sType* left_type  ;
    struct sType* right_type  ;
    struct sType* __list_values3__[2]  ;
    struct list$1sType$ph* param_types;
    char* __list_values4__[2]  ;
    void* __right_value3 = (void*)0;
    struct list$1char$ph* param_names;
    struct list$1char$ph* param_default_parametors;
    struct sFun* fun2  ;
    struct sFun* fun;
    struct sNode* _inf_value12;
    struct sFunNode* _inf_obj_value12;
    struct sNode* node;
    _Bool Value;
    struct buffer* __dec_obj217  ;
    char* __dec_obj218  ;
    char* __dec_obj219  ;
    char* __dec_obj220  ;
    struct buffer* __dec_obj221  ;
    struct buffer* __dec_obj222  ;
    struct tuple2$2sFun$pchar$ph* __result_obj__0;
    last_code=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj211=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj211 = come_decrement_ref_count(__dec_obj211, (void*)0, (void*)0, 0,0, (void*)0);
    last_code2=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj212=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj212 = come_decrement_ref_count(__dec_obj212, (void*)0, (void*)0, 0,0, (void*)0);
    if_expression_buffer=(struct buffer*)come_increment_ref_count(buffer_clone(info->if_expression_buffer));
    __dec_obj213=info->if_expression_buffer,
    info->if_expression_buffer=((void*)0);
    come_call_finalizer(buffer_finalize, __dec_obj213,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    paren_block_buffer=(struct buffer*)come_increment_ref_count(buffer_clone(info->paren_block_buffer));
    __dec_obj214=info->paren_block_buffer,
    info->paren_block_buffer=((void*)0);
    come_call_finalizer(buffer_finalize, __dec_obj214,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    current_stack_frame_struct=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler=((void*)0);
    real_fun_name=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2;
    klass=type->mClass;
    if(type->mPointerNum>0&&!klass->mNumber) {
        source=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), (void*)0, 2717, "struct buffer*"))));
        buffer_append_char(source,123);
        if(klass->mProtocol) {
            const char* name="_protocol_obj";
            char source2[1024];
            memset(&source2, 0, sizeof(source2));
            snprintf(source2,1024,"return left.%s.equals(right.%s);\n",name,name);
            buffer_append_str(source,source2);
        }
        else {
            klass=((struct sClass*)(__right_value0=map$2char$phsClass$ph_operator_load_element(info->classes,klass->mName)));
            for(o2_saved=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(klass->mFields),it=list$1tuple2$2char$phsType$ph$ph_begin(o2_saved);!list$1tuple2$2char$phsType$ph$ph_end(o2_saved);it=list$1tuple2$2char$phsType$ph$ph_next(o2_saved)){
                multiple_assign_var17=it;
                name_181=(char*)come_increment_ref_count(multiple_assign_var17->v1);
                field_type=(struct sType*)come_increment_ref_count(multiple_assign_var17->v2);
                char source2_182[1024];
                memset(&source2_182, 0, sizeof(source2_182));
                snprintf(source2_182,1024,"if(!left.%s.equals(right.%s)) { return false; }\n",name_181,name_181,name_181);
                buffer_append_str(source,source2_182);
                (name_181 = come_decrement_ref_count(name_181, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(sType_finalize, field_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        buffer_append_str(source,"return true;");
        buffer_append_char(source,125);
        p=info->p;
        sline=info->sline;
        sname=(char*)come_increment_ref_count(info->sname);
        head=info->head;
        source3=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj215=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source);
        come_call_finalizer(buffer_finalize, __dec_obj215,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        info->p=source->buf;
        info->head=source->buf;
        __dec_obj216=info->sname,
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name));
        __dec_obj216 = come_decrement_ref_count(__dec_obj216, (void*)0, (void*)0, 0,0, (void*)0);
        info->sline=0;
        block=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0));
        result_type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), (void*)0, 2757, "struct sType*")),(char*)come_increment_ref_count(xsprintf("bool")),(_Bool)0,info,(_Bool)0));
        name_183=(char*)come_increment_ref_count((char*)come_memdup(real_fun_name, "07function.nc", 2758, "char*"));
        left_type=(struct sType*)come_increment_ref_count(sType_clone(type));
        left_type->mHeap=(_Bool)0;
        right_type=(struct sType*)come_increment_ref_count(sType_clone(type));
        right_type->mHeap=(_Bool)0;
        param_types=(struct list$1sType$ph*)come_increment_ref_count((__list_values3__[0]=left_type,
__list_values3__[1]=right_type,
list$1sType$ph_initialize_with_values((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "07function.nc", 2763, "struct list$1sType$ph")),2,__list_values3__)));
        param_names=(struct list$1char$ph*)come_increment_ref_count((__list_values4__[0]=((char*)(__right_value0=__builtin_string("left"))),
__list_values4__[1]=((char*)(__right_value1=__builtin_string("right"))),
list$1char$ph_initialize_with_values((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "07function.nc", 2764, "struct list$1char$ph")),2,__list_values4__)));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        param_default_parametors=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), (void*)0, 2765, "struct list$1char$ph*"))));
        list$1char$ph_push_back(param_default_parametors,((void*)0));
        list$1char$ph_push_back(param_default_parametors,((void*)0));
        result_type->mStatic=(_Bool)0;
        result_type->mUniq=(_Bool)0;
        result_type->mInline=(_Bool)0;
        fun2=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value1=__builtin_string(name_183)))));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        if(fun2==((void*)0)||fun2->mExternal) {
            fun=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), (void*)0, 2775, "struct sFun*")),(char*)come_increment_ref_count(name_183),(struct sType*)come_increment_ref_count(result_type),(struct list$1sType$ph*)come_increment_ref_count(param_types),(struct list$1char$ph*)come_increment_ref_count(param_names),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)1,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0,((void*)0),((void*)0),0,(_Bool)0));
            fun->mGenericsFun=(_Bool)1;
            map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_183)),(struct sFun*)come_increment_ref_count(fun),(_Bool)0);
            _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 2784, "struct sNode");
            _inf_obj_value12=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), (void*)0, 2784, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun),info))));
            _inf_value12->_protocol_obj=_inf_obj_value12;
            _inf_value12->finalize=(void*)sFunNode_finalize;
            _inf_value12->clone=(void*)sFunNode_clone;
            _inf_value12->compile=(void*)sFunNode_compile;
            _inf_value12->sline=(void*)sNodeBase_sline;
            _inf_value12->sline_real=(void*)sNodeBase_sline_real;
            _inf_value12->sname=(void*)sNodeBase_sname;
            _inf_value12->terminated=(void*)sNodeBase_terminated;
            _inf_value12->kind=(void*)sFunNode_kind;
            _inf_value12->no_mutex=(void*)sNodeBase_no_mutex;
            node=(struct sNode*)come_increment_ref_count(_inf_value12);
            come_call_finalizer(sFunNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            Value=node_compile(node,info);
            if(!Value) {
                err_msg(info,"compiling error");
                exit(2);
            }
            equaler=fun;
            come_call_finalizer(sFun_finalize, fun, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
        else {
            equaler=fun2;
        }
        __dec_obj217=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source3);
        come_call_finalizer(buffer_finalize, __dec_obj217,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        info->p=p;
        info->head=head;
        info->sline=sline;
        __dec_obj218=info->sname,
        info->sname=(char*)come_increment_ref_count(sname);
        __dec_obj218 = come_decrement_ref_count(__dec_obj218, (void*)0, (void*)0, 0,0, (void*)0);
        come_call_finalizer(buffer_finalize, source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (sname = come_decrement_ref_count(sname, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(buffer_finalize, source3, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sBlock_finalize, block, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (name_183 = come_decrement_ref_count(name_183, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sType_finalize, left_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, right_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sFun_finalize, fun2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct;
    __dec_obj219=info->module->mLastCode,
    info->module->mLastCode=(char*)come_increment_ref_count(last_code);
    __dec_obj219 = come_decrement_ref_count(__dec_obj219, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj220=info->module->mLastCode2,
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2);
    __dec_obj220 = come_decrement_ref_count(__dec_obj220, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj221=info->if_expression_buffer,
    info->if_expression_buffer=(struct buffer*)come_increment_ref_count(if_expression_buffer);
    come_call_finalizer(buffer_finalize, __dec_obj221,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj222=info->paren_block_buffer,
    info->paren_block_buffer=(struct buffer*)come_increment_ref_count(paren_block_buffer);
    come_call_finalizer(buffer_finalize, __dec_obj222,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __result_obj__0 = (struct tuple2$2sFun$pchar$ph*)come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value1=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph*)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "07function.nc", 2811, "struct tuple2$2sFun$pchar$ph")),equaler,(char*)come_increment_ref_count(real_fun_name)))));
    (last_code = come_decrement_ref_count(last_code, (void*)0, (void*)0, 0, 0, (void*)0));
    (last_code2 = come_decrement_ref_count(last_code2, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(buffer_finalize, if_expression_buffer, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(buffer_finalize, paren_block_buffer, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (real_fun_name = come_decrement_ref_count(real_fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

struct tuple2$2sFun$pchar$ph* create_operator_not_equals_automatically(struct sType* type  , const char* fun_name, struct sInfo* info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "create_operator_not_equals_automatically"; neo_current_frame = &fr;
    char* last_code  ;
    char* __dec_obj223  ;
    char* last_code2  ;
    char* __dec_obj224  ;
    void* __right_value0 = (void*)0;
    struct buffer* if_expression_buffer  ;
    struct buffer* __dec_obj225  ;
    struct buffer* paren_block_buffer  ;
    struct buffer* __dec_obj226  ;
    struct sClass* current_stack_frame_struct  ;
    struct sFun* equaler  ;
    char* real_fun_name  ;
    struct sType* type2  ;
    struct sClass* klass  ;
    void* __right_value1 = (void*)0;
    struct buffer* source  ;
    int i;
    struct list$1tuple2$2char$phsType$ph$ph* o2_saved;
    struct tuple2$2char$phsType$ph* it;
    struct tuple2$2char$phsType$ph* multiple_assign_var18
;    char* name_185  =0;
    struct sType* field_type  =0;
    char* p;
    int sline;
    char* sname  ;
    char* head;
    struct buffer* source3  ;
    struct buffer* __dec_obj227  ;
    char* __dec_obj228  ;
    struct sBlock* block  ;
    void* __right_value2 = (void*)0;
    struct sType* result_type;
    char* name_189  ;
    struct sType* left_type  ;
    struct sType* right_type  ;
    struct sType* __list_values5__[2]  ;
    struct list$1sType$ph* param_types;
    char* __list_values6__[2]  ;
    void* __right_value3 = (void*)0;
    struct list$1char$ph* param_names;
    struct list$1char$ph* param_default_parametors;
    struct sFun* fun2  ;
    struct sFun* fun;
    struct sNode* _inf_value13;
    struct sFunNode* _inf_obj_value13;
    struct sNode* node;
    _Bool Value;
    struct buffer* __dec_obj229  ;
    char* __dec_obj230  ;
    char* __dec_obj231  ;
    char* __dec_obj232  ;
    struct buffer* __dec_obj233  ;
    struct buffer* __dec_obj234  ;
    struct tuple2$2sFun$pchar$ph* __result_obj__0;
    last_code=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj223=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj223 = come_decrement_ref_count(__dec_obj223, (void*)0, (void*)0, 0,0, (void*)0);
    last_code2=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj224=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj224 = come_decrement_ref_count(__dec_obj224, (void*)0, (void*)0, 0,0, (void*)0);
    if_expression_buffer=(struct buffer*)come_increment_ref_count(buffer_clone(info->if_expression_buffer));
    __dec_obj225=info->if_expression_buffer,
    info->if_expression_buffer=((void*)0);
    come_call_finalizer(buffer_finalize, __dec_obj225,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    paren_block_buffer=(struct buffer*)come_increment_ref_count(buffer_clone(info->paren_block_buffer));
    __dec_obj226=info->paren_block_buffer,
    info->paren_block_buffer=((void*)0);
    come_call_finalizer(buffer_finalize, __dec_obj226,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    current_stack_frame_struct=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler=((void*)0);
    real_fun_name=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2;
    klass=type->mClass;
    if(type->mPointerNum>0&&!klass->mNumber) {
        source=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), (void*)0, 2838, "struct buffer*"))));
        buffer_append_char(source,123);
        if(klass->mProtocol) {
            const char* name="_protocol_obj";
            char source2[1024];
            memset(&source2, 0, sizeof(source2));
            snprintf(source2,1024,"return left.%s !== right.%s;\n",name,name);
            buffer_append_str(source,source2);
        }
        else {
            char source2_184[1024];
            memset(&source2_184, 0, sizeof(source2_184));
            snprintf(source2_184,1024,"return !(");
            buffer_append_str(source,source2_184);
            snprintf(source2_184,1024,"( ");
            buffer_append_str(source,source2_184);
            i=0;
            klass=((struct sClass*)(__right_value0=map$2char$phsClass$ph_operator_load_element(info->classes,klass->mName)));
            for(o2_saved=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(klass->mFields),it=list$1tuple2$2char$phsType$ph$ph_begin(o2_saved);!list$1tuple2$2char$phsType$ph$ph_end(o2_saved);it=list$1tuple2$2char$phsType$ph$ph_next(o2_saved)){
                multiple_assign_var18=it;
                name_185=(char*)come_increment_ref_count(multiple_assign_var18->v1);
                field_type=(struct sType*)come_increment_ref_count(multiple_assign_var18->v2);
                char source2_186[1024];
                memset(&source2_186, 0, sizeof(source2_186));
                snprintf(source2_186,1024,"(left.%s === right.%s)",name_185,name_185,name_185);
                buffer_append_str(source,source2_186);
                if(i==list$1tuple2$2char$phsType$ph$ph_length(klass->mFields)-1) {
                    char source2_187[1024];
                    memset(&source2_187, 0, sizeof(source2_187));
                    snprintf(source2_187,1024,"));");
                    buffer_append_str(source,source2_187);
                }
                else {
                    char source2_188[1024];
                    memset(&source2_188, 0, sizeof(source2_188));
                    snprintf(source2_188,1024," && ");
                    buffer_append_str(source,source2_188);
                }
                i++;
                (name_185 = come_decrement_ref_count(name_185, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(sType_finalize, field_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        buffer_append_char(source,125);
        p=info->p;
        sline=info->sline;
        sname=(char*)come_increment_ref_count(info->sname);
        head=info->head;
        source3=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj227=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source);
        come_call_finalizer(buffer_finalize, __dec_obj227,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        info->p=source->buf;
        info->head=source->buf;
        __dec_obj228=info->sname,
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name));
        __dec_obj228 = come_decrement_ref_count(__dec_obj228, (void*)0, (void*)0, 0,0, (void*)0);
        info->sline=0;
        block=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0));
        result_type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), (void*)0, 2898, "struct sType*")),(char*)come_increment_ref_count(xsprintf("bool")),(_Bool)0,info,(_Bool)0));
        name_189=(char*)come_increment_ref_count((char*)come_memdup(real_fun_name, "07function.nc", 2899, "char*"));
        left_type=(struct sType*)come_increment_ref_count(sType_clone(type));
        left_type->mHeap=(_Bool)0;
        right_type=(struct sType*)come_increment_ref_count(sType_clone(type));
        right_type->mHeap=(_Bool)0;
        param_types=(struct list$1sType$ph*)come_increment_ref_count((__list_values5__[0]=left_type,
__list_values5__[1]=right_type,
list$1sType$ph_initialize_with_values((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "07function.nc", 2904, "struct list$1sType$ph")),2,__list_values5__)));
        param_names=(struct list$1char$ph*)come_increment_ref_count((__list_values6__[0]=((char*)(__right_value0=__builtin_string("left"))),
__list_values6__[1]=((char*)(__right_value1=__builtin_string("right"))),
list$1char$ph_initialize_with_values((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "07function.nc", 2905, "struct list$1char$ph")),2,__list_values6__)));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        param_default_parametors=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), (void*)0, 2906, "struct list$1char$ph*"))));
        list$1char$ph_push_back(param_default_parametors,((void*)0));
        list$1char$ph_push_back(param_default_parametors,((void*)0));
        result_type->mStatic=(_Bool)0;
        result_type->mUniq=(_Bool)0;
        result_type->mInline=(_Bool)0;
        fun2=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value1=__builtin_string(name_189)))));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        if(fun2==((void*)0)||fun2->mExternal) {
            fun=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), (void*)0, 2916, "struct sFun*")),(char*)come_increment_ref_count(name_189),(struct sType*)come_increment_ref_count(result_type),(struct list$1sType$ph*)come_increment_ref_count(param_types),(struct list$1char$ph*)come_increment_ref_count(param_names),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)1,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0,((void*)0),((void*)0),0,(_Bool)0));
            fun->mGenericsFun=(_Bool)1;
            map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_189)),(struct sFun*)come_increment_ref_count(fun),(_Bool)0);
            _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 2925, "struct sNode");
            _inf_obj_value13=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), (void*)0, 2925, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun),info))));
            _inf_value13->_protocol_obj=_inf_obj_value13;
            _inf_value13->finalize=(void*)sFunNode_finalize;
            _inf_value13->clone=(void*)sFunNode_clone;
            _inf_value13->compile=(void*)sFunNode_compile;
            _inf_value13->sline=(void*)sNodeBase_sline;
            _inf_value13->sline_real=(void*)sNodeBase_sline_real;
            _inf_value13->sname=(void*)sNodeBase_sname;
            _inf_value13->terminated=(void*)sNodeBase_terminated;
            _inf_value13->kind=(void*)sFunNode_kind;
            _inf_value13->no_mutex=(void*)sNodeBase_no_mutex;
            node=(struct sNode*)come_increment_ref_count(_inf_value13);
            come_call_finalizer(sFunNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            Value=node_compile(node,info);
            if(!Value) {
                err_msg(info,"compiling error");
                exit(2);
            }
            equaler=fun;
            come_call_finalizer(sFun_finalize, fun, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
        else {
            equaler=fun2;
        }
        __dec_obj229=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source3);
        come_call_finalizer(buffer_finalize, __dec_obj229,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        info->p=p;
        info->head=head;
        info->sline=sline;
        __dec_obj230=info->sname,
        info->sname=(char*)come_increment_ref_count(sname);
        __dec_obj230 = come_decrement_ref_count(__dec_obj230, (void*)0, (void*)0, 0,0, (void*)0);
        come_call_finalizer(buffer_finalize, source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (sname = come_decrement_ref_count(sname, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(buffer_finalize, source3, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sBlock_finalize, block, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (name_189 = come_decrement_ref_count(name_189, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sType_finalize, left_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, right_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sFun_finalize, fun2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct;
    __dec_obj231=info->module->mLastCode,
    info->module->mLastCode=(char*)come_increment_ref_count(last_code);
    __dec_obj231 = come_decrement_ref_count(__dec_obj231, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj232=info->module->mLastCode2,
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2);
    __dec_obj232 = come_decrement_ref_count(__dec_obj232, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj233=info->if_expression_buffer,
    info->if_expression_buffer=(struct buffer*)come_increment_ref_count(if_expression_buffer);
    come_call_finalizer(buffer_finalize, __dec_obj233,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj234=info->paren_block_buffer,
    info->paren_block_buffer=(struct buffer*)come_increment_ref_count(paren_block_buffer);
    come_call_finalizer(buffer_finalize, __dec_obj234,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __result_obj__0 = (struct tuple2$2sFun$pchar$ph*)come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value1=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph*)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "07function.nc", 2952, "struct tuple2$2sFun$pchar$ph")),equaler,(char*)come_increment_ref_count(real_fun_name)))));
    (last_code = come_decrement_ref_count(last_code, (void*)0, (void*)0, 0, 0, (void*)0));
    (last_code2 = come_decrement_ref_count(last_code2, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(buffer_finalize, if_expression_buffer, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(buffer_finalize, paren_block_buffer, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (real_fun_name = come_decrement_ref_count(real_fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static int list$1tuple2$2char$phsType$ph$ph_length(struct list$1tuple2$2char$phsType$ph$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsType$ph$ph_length"; neo_current_frame = &fr;
    if(self==((void*)0)) {
        neo_current_frame = fr.prev;
        return 0;
    }
    neo_current_frame = fr.prev;
    return self->len;
    neo_current_frame = fr.prev;
}

struct tuple2$2sFun$pchar$ph* create_not_equals_automatically(struct sType* type  , const char* fun_name, struct sInfo* info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "create_not_equals_automatically"; neo_current_frame = &fr;
    char* last_code  ;
    char* __dec_obj235  ;
    char* last_code2  ;
    char* __dec_obj236  ;
    void* __right_value0 = (void*)0;
    struct buffer* if_expression_buffer  ;
    struct buffer* __dec_obj237  ;
    struct buffer* paren_block_buffer  ;
    struct buffer* __dec_obj238  ;
    struct sClass* current_stack_frame_struct  ;
    struct sFun* equaler  ;
    char* real_fun_name  ;
    struct sType* type2  ;
    struct sClass* klass  ;
    void* __right_value1 = (void*)0;
    struct buffer* source  ;
    int i;
    struct list$1tuple2$2char$phsType$ph$ph* o2_saved;
    struct tuple2$2char$phsType$ph* it;
    struct tuple2$2char$phsType$ph* multiple_assign_var19
;    char* name_191  =0;
    struct sType* field_type  =0;
    char* p;
    int sline;
    char* sname  ;
    char* head;
    struct buffer* source3  ;
    struct buffer* __dec_obj239  ;
    char* __dec_obj240  ;
    struct sBlock* block  ;
    void* __right_value2 = (void*)0;
    struct sType* result_type;
    char* name_195  ;
    struct sType* left_type  ;
    struct sType* right_type  ;
    struct sType* __list_values7__[2]  ;
    struct list$1sType$ph* param_types;
    char* __list_values8__[2]  ;
    void* __right_value3 = (void*)0;
    struct list$1char$ph* param_names;
    struct list$1char$ph* param_default_parametors;
    struct sFun* fun2  ;
    struct sFun* fun;
    struct sNode* _inf_value14;
    struct sFunNode* _inf_obj_value14;
    struct sNode* node;
    _Bool Value;
    struct buffer* __dec_obj241  ;
    char* __dec_obj242  ;
    char* __dec_obj243  ;
    char* __dec_obj244  ;
    struct buffer* __dec_obj245  ;
    struct buffer* __dec_obj246  ;
    struct tuple2$2sFun$pchar$ph* __result_obj__0;
    last_code=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj235=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj235 = come_decrement_ref_count(__dec_obj235, (void*)0, (void*)0, 0,0, (void*)0);
    last_code2=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj236=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj236 = come_decrement_ref_count(__dec_obj236, (void*)0, (void*)0, 0,0, (void*)0);
    if_expression_buffer=(struct buffer*)come_increment_ref_count(buffer_clone(info->if_expression_buffer));
    __dec_obj237=info->if_expression_buffer,
    info->if_expression_buffer=((void*)0);
    come_call_finalizer(buffer_finalize, __dec_obj237,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    paren_block_buffer=(struct buffer*)come_increment_ref_count(buffer_clone(info->paren_block_buffer));
    __dec_obj238=info->paren_block_buffer,
    info->paren_block_buffer=((void*)0);
    come_call_finalizer(buffer_finalize, __dec_obj238,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    current_stack_frame_struct=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler=((void*)0);
    real_fun_name=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2;
    klass=type->mClass;
    if(type->mPointerNum>0&&!klass->mNumber) {
        source=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), (void*)0, 2979, "struct buffer*"))));
        buffer_append_char(source,123);
        if(klass->mProtocol) {
            const char* name="_protocol_obj";
            char source2[1024];
            memset(&source2, 0, sizeof(source2));
            snprintf(source2,1024,"return !left.%s.equals(right.%s);\n",name,name);
            buffer_append_str(source,source2);
        }
        else {
            char source2_190[1024];
            memset(&source2_190, 0, sizeof(source2_190));
            snprintf(source2_190,1024,"return !(");
            buffer_append_str(source,source2_190);
            i=0;
            klass=((struct sClass*)(__right_value0=map$2char$phsClass$ph_operator_load_element(info->classes,klass->mName)));
            for(o2_saved=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(klass->mFields),it=list$1tuple2$2char$phsType$ph$ph_begin(o2_saved);!list$1tuple2$2char$phsType$ph$ph_end(o2_saved);it=list$1tuple2$2char$phsType$ph$ph_next(o2_saved)){
                multiple_assign_var19=it;
                name_191=(char*)come_increment_ref_count(multiple_assign_var19->v1);
                field_type=(struct sType*)come_increment_ref_count(multiple_assign_var19->v2);
                char source2_192[1024];
                memset(&source2_192, 0, sizeof(source2_192));
                snprintf(source2_192,1024,"left.%s.equals(right.%s)",name_191,name_191);
                buffer_append_str(source,source2_192);
                if(i==list$1tuple2$2char$phsType$ph$ph_length(klass->mFields)-1) {
                    char source2_193[1024];
                    memset(&source2_193, 0, sizeof(source2_193));
                    snprintf(source2_193,1024,");");
                    buffer_append_str(source,source2_193);
                }
                else {
                    char source2_194[1024];
                    memset(&source2_194, 0, sizeof(source2_194));
                    snprintf(source2_194,1024," && ");
                    buffer_append_str(source,source2_194);
                }
                i++;
                (name_191 = come_decrement_ref_count(name_191, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(sType_finalize, field_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        buffer_append_char(source,125);
        p=info->p;
        sline=info->sline;
        sname=(char*)come_increment_ref_count(info->sname);
        head=info->head;
        source3=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj239=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source);
        come_call_finalizer(buffer_finalize, __dec_obj239,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        info->p=source->buf;
        info->head=source->buf;
        __dec_obj240=info->sname,
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name));
        __dec_obj240 = come_decrement_ref_count(__dec_obj240, (void*)0, (void*)0, 0,0, (void*)0);
        info->sline=0;
        block=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0));
        result_type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), (void*)0, 3036, "struct sType*")),(char*)come_increment_ref_count(xsprintf("bool")),(_Bool)0,info,(_Bool)0));
        name_195=(char*)come_increment_ref_count((char*)come_memdup(real_fun_name, "07function.nc", 3037, "char*"));
        left_type=(struct sType*)come_increment_ref_count(sType_clone(type));
        left_type->mHeap=(_Bool)0;
        right_type=(struct sType*)come_increment_ref_count(sType_clone(type));
        right_type->mHeap=(_Bool)0;
        param_types=(struct list$1sType$ph*)come_increment_ref_count((__list_values7__[0]=left_type,
__list_values7__[1]=right_type,
list$1sType$ph_initialize_with_values((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "07function.nc", 3042, "struct list$1sType$ph")),2,__list_values7__)));
        param_names=(struct list$1char$ph*)come_increment_ref_count((__list_values8__[0]=((char*)(__right_value0=__builtin_string("left"))),
__list_values8__[1]=((char*)(__right_value1=__builtin_string("right"))),
list$1char$ph_initialize_with_values((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "07function.nc", 3043, "struct list$1char$ph")),2,__list_values8__)));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        param_default_parametors=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), (void*)0, 3044, "struct list$1char$ph*"))));
        list$1char$ph_push_back(param_default_parametors,((void*)0));
        list$1char$ph_push_back(param_default_parametors,((void*)0));
        result_type->mStatic=(_Bool)0;
        result_type->mUniq=(_Bool)0;
        result_type->mInline=(_Bool)0;
        fun2=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value1=__builtin_string(name_195)))));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        if(fun2==((void*)0)||fun2->mExternal) {
            fun=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), (void*)0, 3054, "struct sFun*")),(char*)come_increment_ref_count(name_195),(struct sType*)come_increment_ref_count(result_type),(struct list$1sType$ph*)come_increment_ref_count(param_types),(struct list$1char$ph*)come_increment_ref_count(param_names),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0,((void*)0),((void*)0),0,(_Bool)0));
            fun->mGenericsFun=(_Bool)1;
            map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_195)),(struct sFun*)come_increment_ref_count(fun),(_Bool)0);
            _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 3063, "struct sNode");
            _inf_obj_value14=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), (void*)0, 3063, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun),info))));
            _inf_value14->_protocol_obj=_inf_obj_value14;
            _inf_value14->finalize=(void*)sFunNode_finalize;
            _inf_value14->clone=(void*)sFunNode_clone;
            _inf_value14->compile=(void*)sFunNode_compile;
            _inf_value14->sline=(void*)sNodeBase_sline;
            _inf_value14->sline_real=(void*)sNodeBase_sline_real;
            _inf_value14->sname=(void*)sNodeBase_sname;
            _inf_value14->terminated=(void*)sNodeBase_terminated;
            _inf_value14->kind=(void*)sFunNode_kind;
            _inf_value14->no_mutex=(void*)sNodeBase_no_mutex;
            node=(struct sNode*)come_increment_ref_count(_inf_value14);
            come_call_finalizer(sFunNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            Value=node_compile(node,info);
            if(!Value) {
                err_msg(info,"compiling error");
                exit(2);
            }
            equaler=fun;
            come_call_finalizer(sFun_finalize, fun, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
        else {
            equaler=fun2;
        }
        __dec_obj241=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source3);
        come_call_finalizer(buffer_finalize, __dec_obj241,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        info->p=p;
        info->head=head;
        info->sline=sline;
        __dec_obj242=info->sname,
        info->sname=(char*)come_increment_ref_count(sname);
        __dec_obj242 = come_decrement_ref_count(__dec_obj242, (void*)0, (void*)0, 0,0, (void*)0);
        come_call_finalizer(buffer_finalize, source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (sname = come_decrement_ref_count(sname, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(buffer_finalize, source3, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sBlock_finalize, block, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (name_195 = come_decrement_ref_count(name_195, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sType_finalize, left_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, right_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sFun_finalize, fun2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct;
    __dec_obj243=info->module->mLastCode,
    info->module->mLastCode=(char*)come_increment_ref_count(last_code);
    __dec_obj243 = come_decrement_ref_count(__dec_obj243, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj244=info->module->mLastCode2,
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2);
    __dec_obj244 = come_decrement_ref_count(__dec_obj244, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj245=info->if_expression_buffer,
    info->if_expression_buffer=(struct buffer*)come_increment_ref_count(if_expression_buffer);
    come_call_finalizer(buffer_finalize, __dec_obj245,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj246=info->paren_block_buffer,
    info->paren_block_buffer=(struct buffer*)come_increment_ref_count(paren_block_buffer);
    come_call_finalizer(buffer_finalize, __dec_obj246,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __result_obj__0 = (struct tuple2$2sFun$pchar$ph*)come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value1=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph*)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "07function.nc", 3090, "struct tuple2$2sFun$pchar$ph")),equaler,(char*)come_increment_ref_count(real_fun_name)))));
    (last_code = come_decrement_ref_count(last_code, (void*)0, (void*)0, 0, 0, (void*)0));
    (last_code2 = come_decrement_ref_count(last_code2, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(buffer_finalize, if_expression_buffer, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(buffer_finalize, paren_block_buffer, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (real_fun_name = come_decrement_ref_count(real_fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

struct tuple2$2sFun$pchar$ph* create_operator_equals_automatically(struct sType* type  , const char* fun_name, struct sInfo* info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "create_operator_equals_automatically"; neo_current_frame = &fr;
    char* last_code  ;
    char* __dec_obj247  ;
    char* last_code2  ;
    char* __dec_obj248  ;
    void* __right_value0 = (void*)0;
    struct buffer* if_expression_buffer  ;
    struct buffer* __dec_obj249  ;
    struct buffer* paren_block_buffer  ;
    struct buffer* __dec_obj250  ;
    struct sClass* current_stack_frame_struct  ;
    struct sFun* equaler  ;
    char* real_fun_name  ;
    struct sType* type2  ;
    struct sClass* klass  ;
    void* __right_value1 = (void*)0;
    struct buffer* source  ;
    struct list$1tuple2$2char$phsType$ph$ph* o2_saved;
    struct tuple2$2char$phsType$ph* it;
    struct tuple2$2char$phsType$ph* multiple_assign_var20
;    char* name_197  =0;
    struct sType* field_type  =0;
    char* p;
    int sline;
    char* sname  ;
    char* head;
    struct buffer* source3  ;
    struct buffer* __dec_obj251  ;
    char* __dec_obj252  ;
    struct sBlock* block  ;
    void* __right_value2 = (void*)0;
    struct sType* result_type;
    char* name_199  ;
    struct sType* left_type  ;
    struct sType* right_type  ;
    struct sType* __list_values9__[2]  ;
    struct list$1sType$ph* param_types;
    char* __list_values10__[2]  ;
    void* __right_value3 = (void*)0;
    struct list$1char$ph* param_names;
    struct list$1char$ph* param_default_parametors;
    struct sFun* fun2  ;
    struct sFun* fun;
    struct sNode* _inf_value15;
    struct sFunNode* _inf_obj_value15;
    struct sNode* node;
    _Bool Value;
    struct buffer* __dec_obj253  ;
    char* __dec_obj254  ;
    char* __dec_obj255  ;
    char* __dec_obj256  ;
    struct buffer* __dec_obj257  ;
    struct buffer* __dec_obj258  ;
    struct tuple2$2sFun$pchar$ph* __result_obj__0;
    last_code=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj247=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj247 = come_decrement_ref_count(__dec_obj247, (void*)0, (void*)0, 0,0, (void*)0);
    last_code2=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj248=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj248 = come_decrement_ref_count(__dec_obj248, (void*)0, (void*)0, 0,0, (void*)0);
    if_expression_buffer=(struct buffer*)come_increment_ref_count(buffer_clone(info->if_expression_buffer));
    __dec_obj249=info->if_expression_buffer,
    info->if_expression_buffer=((void*)0);
    come_call_finalizer(buffer_finalize, __dec_obj249,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    paren_block_buffer=(struct buffer*)come_increment_ref_count(buffer_clone(info->paren_block_buffer));
    __dec_obj250=info->paren_block_buffer,
    info->paren_block_buffer=((void*)0);
    come_call_finalizer(buffer_finalize, __dec_obj250,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    current_stack_frame_struct=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler=((void*)0);
    real_fun_name=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2;
    klass=type->mClass;
    if(type->mPointerNum>0&&!klass->mNumber) {
        source=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), (void*)0, 3117, "struct buffer*"))));
        buffer_append_char(source,123);
        if(klass->mProtocol) {
            const char* name="_protocol_obj";
            char source2[1024];
            memset(&source2, 0, sizeof(source2));
            snprintf(source2,1024,"return left.%s === right.%s;\n",name,name);
            buffer_append_str(source,source2);
        }
        else {
            char source2_196[1024];
            memset(&source2_196, 0, sizeof(source2_196));
            klass=((struct sClass*)(__right_value0=map$2char$phsClass$ph_operator_load_element(info->classes,klass->mName)));
            for(o2_saved=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(klass->mFields),it=list$1tuple2$2char$phsType$ph$ph_begin(o2_saved);!list$1tuple2$2char$phsType$ph$ph_end(o2_saved);it=list$1tuple2$2char$phsType$ph$ph_next(o2_saved)){
                multiple_assign_var20=it;
                name_197=(char*)come_increment_ref_count(multiple_assign_var20->v1);
                field_type=(struct sType*)come_increment_ref_count(multiple_assign_var20->v2);
                char source2_198[1024];
                memset(&source2_198, 0, sizeof(source2_198));
                snprintf(source2_198,1024,"if(left.%s !== right.%s) { return false; }\n",name_197,name_197,name_197);
                buffer_append_str(source,source2_198);
                (name_197 = come_decrement_ref_count(name_197, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(sType_finalize, field_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        buffer_append_str(source,"return true;\n");
        buffer_append_char(source,125);
        p=info->p;
        sline=info->sline;
        sname=(char*)come_increment_ref_count(info->sname);
        head=info->head;
        source3=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj251=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source);
        come_call_finalizer(buffer_finalize, __dec_obj251,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        info->p=source->buf;
        info->head=source->buf;
        __dec_obj252=info->sname,
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name));
        __dec_obj252 = come_decrement_ref_count(__dec_obj252, (void*)0, (void*)0, 0,0, (void*)0);
        info->sline=0;
        block=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0));
        result_type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), (void*)0, 3159, "struct sType*")),(char*)come_increment_ref_count(xsprintf("bool")),(_Bool)0,info,(_Bool)0));
        name_199=(char*)come_increment_ref_count((char*)come_memdup(real_fun_name, "07function.nc", 3160, "char*"));
        left_type=(struct sType*)come_increment_ref_count(sType_clone(type));
        left_type->mHeap=(_Bool)0;
        right_type=(struct sType*)come_increment_ref_count(sType_clone(type));
        right_type->mHeap=(_Bool)0;
        param_types=(struct list$1sType$ph*)come_increment_ref_count((__list_values9__[0]=left_type,
__list_values9__[1]=right_type,
list$1sType$ph_initialize_with_values((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "07function.nc", 3165, "struct list$1sType$ph")),2,__list_values9__)));
        param_names=(struct list$1char$ph*)come_increment_ref_count((__list_values10__[0]=((char*)(__right_value0=__builtin_string("left"))),
__list_values10__[1]=((char*)(__right_value1=__builtin_string("right"))),
list$1char$ph_initialize_with_values((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "07function.nc", 3166, "struct list$1char$ph")),2,__list_values10__)));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        param_default_parametors=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), (void*)0, 3167, "struct list$1char$ph*"))));
        list$1char$ph_push_back(param_default_parametors,((void*)0));
        list$1char$ph_push_back(param_default_parametors,((void*)0));
        result_type->mStatic=(_Bool)0;
        result_type->mUniq=(_Bool)0;
        result_type->mInline=(_Bool)0;
        fun2=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value1=__builtin_string(name_199)))));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        if(fun2==((void*)0)||fun2->mExternal) {
            fun=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), (void*)0, 3177, "struct sFun*")),(char*)come_increment_ref_count(name_199),(struct sType*)come_increment_ref_count(result_type),(struct list$1sType$ph*)come_increment_ref_count(param_types),(struct list$1char$ph*)come_increment_ref_count(param_names),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0,((void*)0),((void*)0),0,(_Bool)0));
            fun->mGenericsFun=(_Bool)1;
            map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_199)),(struct sFun*)come_increment_ref_count(fun),(_Bool)0);
            _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 3186, "struct sNode");
            _inf_obj_value15=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), (void*)0, 3186, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun),info))));
            _inf_value15->_protocol_obj=_inf_obj_value15;
            _inf_value15->finalize=(void*)sFunNode_finalize;
            _inf_value15->clone=(void*)sFunNode_clone;
            _inf_value15->compile=(void*)sFunNode_compile;
            _inf_value15->sline=(void*)sNodeBase_sline;
            _inf_value15->sline_real=(void*)sNodeBase_sline_real;
            _inf_value15->sname=(void*)sNodeBase_sname;
            _inf_value15->terminated=(void*)sNodeBase_terminated;
            _inf_value15->kind=(void*)sFunNode_kind;
            _inf_value15->no_mutex=(void*)sNodeBase_no_mutex;
            node=(struct sNode*)come_increment_ref_count(_inf_value15);
            come_call_finalizer(sFunNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            Value=node_compile(node,info);
            if(!Value) {
                err_msg(info,"compiling error(X)");
                exit(2);
            }
            equaler=fun;
            come_call_finalizer(sFun_finalize, fun, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
        else {
            equaler=fun2;
        }
        __dec_obj253=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source3);
        come_call_finalizer(buffer_finalize, __dec_obj253,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        info->p=p;
        info->head=head;
        info->sline=sline;
        __dec_obj254=info->sname,
        info->sname=(char*)come_increment_ref_count(sname);
        __dec_obj254 = come_decrement_ref_count(__dec_obj254, (void*)0, (void*)0, 0,0, (void*)0);
        come_call_finalizer(buffer_finalize, source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (sname = come_decrement_ref_count(sname, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(buffer_finalize, source3, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sBlock_finalize, block, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (name_199 = come_decrement_ref_count(name_199, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sType_finalize, left_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, right_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sFun_finalize, fun2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct;
    __dec_obj255=info->module->mLastCode,
    info->module->mLastCode=(char*)come_increment_ref_count(last_code);
    __dec_obj255 = come_decrement_ref_count(__dec_obj255, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj256=info->module->mLastCode2,
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2);
    __dec_obj256 = come_decrement_ref_count(__dec_obj256, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj257=info->if_expression_buffer,
    info->if_expression_buffer=(struct buffer*)come_increment_ref_count(if_expression_buffer);
    come_call_finalizer(buffer_finalize, __dec_obj257,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj258=info->paren_block_buffer,
    info->paren_block_buffer=(struct buffer*)come_increment_ref_count(paren_block_buffer);
    come_call_finalizer(buffer_finalize, __dec_obj258,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __result_obj__0 = (struct tuple2$2sFun$pchar$ph*)come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value1=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph*)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "07function.nc", 3213, "struct tuple2$2sFun$pchar$ph")),equaler,(char*)come_increment_ref_count(real_fun_name)))));
    (last_code = come_decrement_ref_count(last_code, (void*)0, (void*)0, 0, 0, (void*)0));
    (last_code2 = come_decrement_ref_count(last_code2, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(buffer_finalize, if_expression_buffer, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(buffer_finalize, paren_block_buffer, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (real_fun_name = come_decrement_ref_count(real_fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

struct tuple2$2sFun$pchar$ph* create_cloner_automatically(struct sType* type  , const char* fun_name, struct sInfo* info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "create_cloner_automatically"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct tuple2$2sFun$pchar$ph* __result_obj__0;
    char* last_code  ;
    char* __dec_obj259  ;
    char* last_code2  ;
    char* __dec_obj260  ;
    struct buffer* if_expression_buffer  ;
    struct buffer* __dec_obj261  ;
    struct buffer* paren_block_buffer  ;
    struct buffer* __dec_obj262  ;
    struct sClass* current_stack_frame_struct  ;
    struct sFun* cloner  ;
    char* real_fun_name  ;
    struct sType* type2  ;
    struct sClass* klass  ;
    char* fun_name2  ;
    char* none_generics_name  ;
    struct sType* obj_type  ;
    char* __dec_obj263  ;
    char* fun_name3  ;
    struct sGenericsFun* generics_fun  ;
    struct tuple2$2char$ph_Bool$* multiple_assign_var21
;    char* name  =0;
    _Bool err=0;
    char* __dec_obj264  ;
    char* __dec_obj265  ;
    int i;
    char* new_fun_name  ;
    char* __dec_obj266  ;
    char* __dec_obj267  ;
    struct buffer* source  ;
    struct sType* type2_200  ;
    struct list$1tuple2$2char$phsType$ph$ph* o2_saved;
    struct tuple2$2char$phsType$ph* it;
    struct tuple2$2char$phsType$ph* multiple_assign_var22
;    char* name_202  =0;
    struct sType* field_type  =0;
    struct list$1tuple2$2char$phsType$ph$ph* o2_saved_205;
    struct tuple2$2char$phsType$ph* it_206;
    struct tuple2$2char$phsType$ph* multiple_assign_var23
;    char* name_207  =0;
    struct sType* field_type_208  =0;
    char* user_real_fun_name  ;
    struct sFun* user_cloner  ;
    char* p;
    int sline;
    char* sname  ;
    struct buffer* source3  ;
    char* head;
    struct buffer* __dec_obj268  ;
    char* __dec_obj269  ;
    struct sBlock* block  ;
    struct sType* result_type  ;
    char* name_212  ;
    struct sType* self_type  ;
    struct sType* __list_values11__[1]  ;
    struct list$1sType$ph* param_types;
    char* __list_values12__[1]  ;
    void* __right_value2 = (void*)0;
    struct list$1char$ph* param_names;
    struct list$1char$ph* param_default_parametors;
    struct sFun* fun2  ;
    struct sFun* fun;
    struct sNode* _inf_value16;
    struct sFunNode* _inf_obj_value16;
    struct sNode* node;
    _Bool Value;
    char* __dec_obj270  ;
    struct buffer* __dec_obj271  ;
    char* __dec_obj272  ;
    char* __dec_obj273  ;
    struct buffer* __dec_obj274  ;
    struct buffer* __dec_obj275  ;
    memset(&fun_name2, 0, sizeof(fun_name2));
    memset(&i, 0, sizeof(i));
    if(string_operator_equals(type->mClass->mName,"void")) {
        __result_obj__0 = (struct tuple2$2sFun$pchar$ph*)come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value1=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph*)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "07function.nc", 3219, "struct tuple2$2sFun$pchar$ph")),(struct sFun*)((void*)0),(char*)come_increment_ref_count((char*)((void*)0))))));
        come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        neo_current_frame = fr.prev;
        come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    last_code=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj259=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj259 = come_decrement_ref_count(__dec_obj259, (void*)0, (void*)0, 0,0, (void*)0);
    last_code2=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj260=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj260 = come_decrement_ref_count(__dec_obj260, (void*)0, (void*)0, 0,0, (void*)0);
    if_expression_buffer=(struct buffer*)come_increment_ref_count(buffer_clone(info->if_expression_buffer));
    __dec_obj261=info->if_expression_buffer,
    info->if_expression_buffer=((void*)0);
    come_call_finalizer(buffer_finalize, __dec_obj261,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    paren_block_buffer=(struct buffer*)come_increment_ref_count(buffer_clone(info->paren_block_buffer));
    __dec_obj262=info->paren_block_buffer,
    info->paren_block_buffer=((void*)0);
    come_call_finalizer(buffer_finalize, __dec_obj262,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    current_stack_frame_struct=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    cloner=((void*)0);
    real_fun_name=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2;
    klass=type->mClass;
    if(list$1sType$ph_length(type->mGenericsTypes)>0) {
        none_generics_name=(char*)come_increment_ref_count(get_none_generics_name(type->mClass->mName));
        obj_type=(struct sType*)come_increment_ref_count(solve_generics(type,info->generics_type,info));
        __dec_obj263=fun_name2,
        fun_name2=(char*)come_increment_ref_count(create_method_name(obj_type,(_Bool)0,fun_name,info,(_Bool)1));
        __dec_obj263 = come_decrement_ref_count(__dec_obj263, (void*)0, (void*)0, 0,0, (void*)0);
        fun_name3=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name,fun_name));
        generics_fun=((struct sGenericsFun*)(__right_value0=map$2char$phsGenericsFun$ph_at(info->generics_funcs,fun_name3,((void*)0),(_Bool)0)));
        if(generics_fun) {
            multiple_assign_var21=((struct tuple2$2char$ph_Bool$*)(__right_value1=create_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name2)),generics_fun,obj_type,info)));
            name=(char*)come_increment_ref_count(multiple_assign_var21->v1);
            err=multiple_assign_var21->v2;
            come_call_finalizer(tuple2$2char$ph_Bool$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            if(!err) {
                if(string_operator_equals(type->mClass->mName,"void")) {
                    __result_obj__0 = (struct tuple2$2sFun$pchar$ph*)come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value1=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph*)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "07function.nc", 3261, "struct tuple2$2sFun$pchar$ph")),(struct sFun*)((void*)0),(char*)come_increment_ref_count((char*)((void*)0))))));
                    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
                    (none_generics_name = come_decrement_ref_count(none_generics_name, (void*)0, (void*)0, 0, 0, (void*)0));
                    come_call_finalizer(sType_finalize, obj_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    (fun_name3 = come_decrement_ref_count(fun_name3, (void*)0, (void*)0, 0, 0, (void*)0));
                    (last_code = come_decrement_ref_count(last_code, (void*)0, (void*)0, 0, 0, (void*)0));
                    (last_code2 = come_decrement_ref_count(last_code2, (void*)0, (void*)0, 0, 0, (void*)0));
                    come_call_finalizer(buffer_finalize, if_expression_buffer, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer(buffer_finalize, paren_block_buffer, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    (real_fun_name = come_decrement_ref_count(real_fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
                    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    (fun_name2 = come_decrement_ref_count(fun_name2, (void*)0, (void*)0, 0, 0, (void*)0));
                    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    neo_current_frame = fr.prev;
                    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                    return __result_obj__0;
                }
            }
            cloner=((struct sFun*)(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,name)));
            (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        else {
            cloner=((struct sFun*)(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,fun_name2)));
        }
        __dec_obj264=real_fun_name,
        real_fun_name=(char*)come_increment_ref_count(fun_name2);
        __dec_obj264 = come_decrement_ref_count(__dec_obj264, (void*)0, (void*)0, 0,0, (void*)0);
        (none_generics_name = come_decrement_ref_count(none_generics_name, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sType_finalize, obj_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (fun_name3 = come_decrement_ref_count(fun_name3, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    else {
        __dec_obj265=fun_name2,
        fun_name2=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
        __dec_obj265 = come_decrement_ref_count(__dec_obj265, (void*)0, (void*)0, 0,0, (void*)0);
        for(i=128-1;i>=1;i--){
            new_fun_name=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2,i));
            cloner=((struct sFun*)(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,new_fun_name)));
            if(cloner) {
                __dec_obj266=fun_name2,
                fun_name2=(char*)come_increment_ref_count(__builtin_string(new_fun_name));
                __dec_obj266 = come_decrement_ref_count(__dec_obj266, (void*)0, (void*)0, 0,0, (void*)0);
                (new_fun_name = come_decrement_ref_count(new_fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
                break;
            }
            (new_fun_name = come_decrement_ref_count(new_fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        if(cloner==((void*)0)) {
            cloner=((struct sFun*)(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,fun_name2)));
        }
        __dec_obj267=real_fun_name,
        real_fun_name=(char*)come_increment_ref_count(fun_name2);
        __dec_obj267 = come_decrement_ref_count(__dec_obj267, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(cloner==((void*)0)&&!type->mClass->mNumber&&type->mPointerNum>0) {
        source=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), (void*)0, 3296, "struct buffer*"))));
        type2_200=(struct sType*)come_increment_ref_count(sType_clone(type));
        type2_200->mPointerNum=0;
        buffer_append_str(source,"{\n");
        buffer_append_str(source,"if(self == (void*)0) { return (void*)0; }\n");
        buffer_append_format(source,"var result = new %s;\n",((char*)(__right_value0=make_type_name_string(type2_200,info,(_Bool)0,(_Bool)0,(_Bool)0))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        if(klass->mProtocol) {
            const char* name_201="_protocol_obj";
            char source2[1024];
            memset(&source2, 0, sizeof(source2));
            snprintf(source2,1024,"if(self != ((void*)0) && self->clone != ((void*)0)) { result._protocol_obj = self->clone(); }\n");
            buffer_append_str(source,source2);
            klass=((struct sClass*)(__right_value0=map$2char$phsClass$ph_operator_load_element(info->classes,klass->mName)));
            for(o2_saved=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(klass->mFields),it=list$1tuple2$2char$phsType$ph$ph_begin(o2_saved);!list$1tuple2$2char$phsType$ph$ph_end(o2_saved);it=list$1tuple2$2char$phsType$ph$ph_next(o2_saved)){
                multiple_assign_var22=it;
                name_202=(char*)come_increment_ref_count(multiple_assign_var22->v1);
                field_type=(struct sType*)come_increment_ref_count(multiple_assign_var22->v2);
                if(string_operator_equals(name_202,"_protocol_obj")) {
                }
                else if(list$1sNode$ph_length(field_type->mArrayNum)>0) {
                    char source2_203[1024];
                    memset(&source2_203, 0, sizeof(source2_203));
                    snprintf(source2_203,1024,"if(self != ((void*)0)) { memcpy(result.%s, self.%s, sizeof(result.%s)); }\n",name_202,name_202,name_202);
                    buffer_append_str(source,source2_203);
                }
                else {
                    char source2_204[1024];
                    memset(&source2_204, 0, sizeof(source2_204));
                    snprintf(source2_204,1024,"if(self != ((void*)0)) { result.%s = self.%s; }\n",name_202,name_202);
                    buffer_append_str(source,source2_204);
                }
                (name_202 = come_decrement_ref_count(name_202, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(sType_finalize, field_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            klass=((struct sClass*)(__right_value0=map$2char$phsClass$ph_operator_load_element(info->classes,klass->mName)));
            for(o2_saved_205=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(klass->mFields),it_206=list$1tuple2$2char$phsType$ph$ph_begin(o2_saved_205);!list$1tuple2$2char$phsType$ph$ph_end(o2_saved_205);it_206=list$1tuple2$2char$phsType$ph$ph_next(o2_saved_205)){
                multiple_assign_var23=it_206;
                name_207=(char*)come_increment_ref_count(multiple_assign_var23->v1);
                field_type_208=(struct sType*)come_increment_ref_count(multiple_assign_var23->v2);
                if(field_type_208->mHeap) {
                    char source2_209[1024];
                    memset(&source2_209, 0, sizeof(source2_209));
                    snprintf(source2_209,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { result.%s = clone self.%s; }\n",name_207,name_207,name_207);
                    buffer_append_str(source,source2_209);
                }
                else if(list$1sNode$ph_length(field_type_208->mArrayNum)>0) {
                    char source2_210[1024];
                    memset(&source2_210, 0, sizeof(source2_210));
                    snprintf(source2_210,1024,"if(self != ((void*)0)) { memcpy(result.%s, self.%s, sizeof(result.%s)); }\n",name_207,name_207,name_207);
                    buffer_append_str(source,source2_210);
                }
                else {
                    char source2_211[1024];
                    memset(&source2_211, 0, sizeof(source2_211));
                    snprintf(source2_211,1024,"if(self != ((void*)0)) { result.%s = self.%s; }\n",name_207,name_207);
                    buffer_append_str(source,source2_211);
                }
                (name_207 = come_decrement_ref_count(name_207, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(sType_finalize, field_type_208, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, o2_saved_205, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        user_real_fun_name=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,"user_clone",info,(_Bool)1));
        user_cloner=((struct sFun*)(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,user_real_fun_name)));
        buffer_append_format(source,"return result;");
        buffer_append_char(source,125);
        p=info->p;
        sline=info->sline;
        sname=(char*)come_increment_ref_count(info->sname);
        source3=(struct buffer*)come_increment_ref_count(info->source);
        head=info->head;
        __dec_obj268=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source);
        come_call_finalizer(buffer_finalize, __dec_obj268,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        __dec_obj269=info->sname,
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name));
        __dec_obj269 = come_decrement_ref_count(__dec_obj269, (void*)0, (void*)0, 0,0, (void*)0);
        info->sline=1;
        block=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0));
        result_type=(struct sType*)come_increment_ref_count(sType_clone(type));
        name_212=(char*)come_increment_ref_count((char*)come_memdup(real_fun_name, "07function.nc", 3389, "char*"));
        self_type=(struct sType*)come_increment_ref_count(sType_clone(type));
        self_type->mHeap=(_Bool)0;
        param_types=(struct list$1sType$ph*)come_increment_ref_count((__list_values11__[0]=self_type,
list$1sType$ph_initialize_with_values((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "07function.nc", 3392, "struct list$1sType$ph")),1,__list_values11__)));
        param_names=(struct list$1char$ph*)come_increment_ref_count((__list_values12__[0]=((char*)(__right_value0=__builtin_string("self"))),
list$1char$ph_initialize_with_values((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "07function.nc", 3393, "struct list$1char$ph")),1,__list_values12__)));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        param_default_parametors=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), (void*)0, 3394, "struct list$1char$ph*"))));
        list$1char$ph_push_back(param_default_parametors,((void*)0));
        result_type->mStatic=(_Bool)0;
        result_type->mUniq=(_Bool)0;
        result_type->mInline=(_Bool)0;
        fun2=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value1=__builtin_string(name_212)))));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        if(fun2==((void*)0)||fun2->mExternal) {
            fun=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), (void*)0, 3404, "struct sFun*")),(char*)come_increment_ref_count(name_212),(struct sType*)come_increment_ref_count(result_type),(struct list$1sType$ph*)come_increment_ref_count(param_types),(struct list$1char$ph*)come_increment_ref_count(param_names),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0,((void*)0),((void*)0),0,(_Bool)0));
            fun->mGenericsFun=(_Bool)1;
            map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_212)),(struct sFun*)come_increment_ref_count(fun),(_Bool)0);
            _inf_value16=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 3413, "struct sNode");
            _inf_obj_value16=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), (void*)0, 3413, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun),info))));
            _inf_value16->_protocol_obj=_inf_obj_value16;
            _inf_value16->finalize=(void*)sFunNode_finalize;
            _inf_value16->clone=(void*)sFunNode_clone;
            _inf_value16->compile=(void*)sFunNode_compile;
            _inf_value16->sline=(void*)sNodeBase_sline;
            _inf_value16->sline_real=(void*)sNodeBase_sline_real;
            _inf_value16->sname=(void*)sNodeBase_sname;
            _inf_value16->terminated=(void*)sNodeBase_terminated;
            _inf_value16->kind=(void*)sFunNode_kind;
            _inf_value16->no_mutex=(void*)sNodeBase_no_mutex;
            node=(struct sNode*)come_increment_ref_count(_inf_value16);
            come_call_finalizer(sFunNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            Value=node_compile(node,info);
            if(!Value) {
                err_msg(info,"compiling error(Y)");
                exit(2);
            }
            cloner=fun;
            come_call_finalizer(sFun_finalize, fun, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
        else {
            cloner=fun2;
        }
        __dec_obj270=info->sname,
        info->sname=(char*)come_increment_ref_count(sname);
        __dec_obj270 = come_decrement_ref_count(__dec_obj270, (void*)0, (void*)0, 0,0, (void*)0);
        info->sline=sline;
        __dec_obj271=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source3);
        come_call_finalizer(buffer_finalize, __dec_obj271,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        info->p=p;
        info->head=head;
        info->sline=sline;
        come_call_finalizer(buffer_finalize, source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, type2_200, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (user_real_fun_name = come_decrement_ref_count(user_real_fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
        (sname = come_decrement_ref_count(sname, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(buffer_finalize, source3, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sBlock_finalize, block, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (name_212 = come_decrement_ref_count(name_212, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sType_finalize, self_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sFun_finalize, fun2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct;
    __dec_obj272=info->module->mLastCode,
    info->module->mLastCode=(char*)come_increment_ref_count(last_code);
    __dec_obj272 = come_decrement_ref_count(__dec_obj272, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj273=info->module->mLastCode2,
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2);
    __dec_obj273 = come_decrement_ref_count(__dec_obj273, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj274=info->if_expression_buffer,
    info->if_expression_buffer=(struct buffer*)come_increment_ref_count(if_expression_buffer);
    come_call_finalizer(buffer_finalize, __dec_obj274,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj275=info->paren_block_buffer,
    info->paren_block_buffer=(struct buffer*)come_increment_ref_count(paren_block_buffer);
    come_call_finalizer(buffer_finalize, __dec_obj275,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __result_obj__0 = (struct tuple2$2sFun$pchar$ph*)come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value1=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph*)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "07function.nc", 3442, "struct tuple2$2sFun$pchar$ph")),cloner,(char*)come_increment_ref_count(real_fun_name)))));
    (last_code = come_decrement_ref_count(last_code, (void*)0, (void*)0, 0, 0, (void*)0));
    (last_code2 = come_decrement_ref_count(last_code2, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(buffer_finalize, if_expression_buffer, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(buffer_finalize, paren_block_buffer, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (real_fun_name = come_decrement_ref_count(real_fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (fun_name2 = come_decrement_ref_count(fun_name2, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

struct tuple2$2sFun$pchar$ph* create_to_string_automatically(struct sType* type  , const char* fun_name, struct sInfo* info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "create_to_string_automatically"; neo_current_frame = &fr;
    char* last_code  ;
    char* __dec_obj288  ;
    char* last_code2  ;
    char* __dec_obj289  ;
    void* __right_value0 = (void*)0;
    struct buffer* if_expression_buffer  ;
    struct buffer* __dec_obj290  ;
    struct buffer* paren_block_buffer  ;
    struct buffer* __dec_obj291  ;
    struct sClass* current_stack_frame_struct  ;
    struct sFun* to_string_fun  ;
    char* real_fun_name  ;
    struct sType* type_before  ;
    struct sType* type2  ;
    struct sClass* klass  ;
    struct sType* type_  ;
    char* none_generics_name  ;
    char* generics_fun_name  ;
    struct sGenericsFun* generics_fun  ;
    struct tuple2$2char$ph_Bool$* multiple_assign_var25
;    char* name  =0;
    _Bool err=0;
    int i;
    char* new_fun_name  ;
    char* __dec_obj292  ;
    void* __right_value1 = (void*)0;
    struct buffer* source  ;
    int i_215;
    struct list$1tuple2$2char$phsType$ph$ph* o2_saved;
    struct tuple2$2char$phsType$ph* it;
    struct tuple2$2char$phsType$ph* multiple_assign_var26
;    char* name_216  =0;
    struct sType* field_type  =0;
    char* p;
    int sline;
    char* sname  ;
    struct buffer* source3  ;
    char* head;
    struct buffer* __dec_obj293  ;
    char* __dec_obj294  ;
    struct sBlock* block  ;
    void* __right_value2 = (void*)0;
    struct sType* result_type;
    char* name_219  ;
    struct sType* self_type  ;
    struct sType* __dec_obj295  ;
    struct sType* __list_values15__[1]  ;
    struct list$1sType$ph* param_types;
    char* __list_values16__[1]  ;
    struct list$1char$ph* param_names;
    struct list$1char$ph* param_default_parametors;
    struct sFun* fun2  ;
    struct sFun* fun;
    struct sNode* _inf_value18;
    struct sFunNode* _inf_obj_value18;
    struct sNode* node;
    _Bool Value;
    char* __dec_obj296  ;
    struct buffer* __dec_obj297  ;
    char* __dec_obj298  ;
    char* __dec_obj299  ;
    struct buffer* __dec_obj300  ;
    struct buffer* __dec_obj301  ;
    struct tuple2$2sFun$pchar$ph* __result_obj__0;
    memset(&i, 0, sizeof(i));
    last_code=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj288=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj288 = come_decrement_ref_count(__dec_obj288, (void*)0, (void*)0, 0,0, (void*)0);
    last_code2=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj289=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj289 = come_decrement_ref_count(__dec_obj289, (void*)0, (void*)0, 0,0, (void*)0);
    if_expression_buffer=(struct buffer*)come_increment_ref_count(buffer_clone(info->if_expression_buffer));
    __dec_obj290=info->if_expression_buffer,
    info->if_expression_buffer=((void*)0);
    come_call_finalizer(buffer_finalize, __dec_obj290,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    paren_block_buffer=(struct buffer*)come_increment_ref_count(buffer_clone(info->paren_block_buffer));
    __dec_obj291=info->paren_block_buffer,
    info->paren_block_buffer=((void*)0);
    come_call_finalizer(buffer_finalize, __dec_obj291,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    current_stack_frame_struct=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    to_string_fun=((void*)0);
    real_fun_name=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type_before=(struct sType*)come_increment_ref_count(sType_clone(type));
    type2=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2;
    klass=type->mClass;
    type_=(struct sType*)come_increment_ref_count(get_no_solved_type2(type));
    if(list$1sType$ph_length(type_->mGenericsTypes)>0) {
        to_string_fun=((struct sFun*)(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,real_fun_name)));
        if(to_string_fun==((void*)0)) {
            none_generics_name=(char*)come_increment_ref_count(get_none_generics_name(type2->mClass->mName));
            generics_fun_name=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name,fun_name));
            generics_fun=((struct sGenericsFun*)(__right_value0=map$2char$phsGenericsFun$ph_operator_load_element(info->generics_funcs,generics_fun_name)));
            if(generics_fun) {
                multiple_assign_var25=((struct tuple2$2char$ph_Bool$*)(__right_value0=create_generics_fun((char*)come_increment_ref_count(real_fun_name),generics_fun,type_,info)));
                name=(char*)come_increment_ref_count(multiple_assign_var25->v1);
                err=multiple_assign_var25->v2;
                come_call_finalizer(tuple2$2char$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                if(!err) {
                    printf("%s %d: can't create generics to_string_fun\n",info->sname,info->sline);
                    exit(2);
                }
                to_string_fun=((struct sFun*)(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,name)));
                (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
            }
            (none_generics_name = come_decrement_ref_count(none_generics_name, (void*)0, (void*)0, 0, 0, (void*)0));
            (generics_fun_name = come_decrement_ref_count(generics_fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
        }
    }
    else {
        for(i=128-1;i>=1;i--){
            new_fun_name=(char*)come_increment_ref_count(xsprintf("%s_v%d",real_fun_name,i));
            to_string_fun=((struct sFun*)(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,new_fun_name)));
            if(to_string_fun) {
                __dec_obj292=real_fun_name,
                real_fun_name=(char*)come_increment_ref_count(__builtin_string(new_fun_name));
                __dec_obj292 = come_decrement_ref_count(__dec_obj292, (void*)0, (void*)0, 0,0, (void*)0);
                (new_fun_name = come_decrement_ref_count(new_fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
                break;
            }
            (new_fun_name = come_decrement_ref_count(new_fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        if(to_string_fun==((void*)0)) {
            to_string_fun=((struct sFun*)(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,real_fun_name)));
        }
    }
    if(to_string_fun==((void*)0)&&type_->mPointerNum>0&&!klass->mNumber) {
        source=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), (void*)0, 3654, "struct buffer*"))));
        buffer_append_str(source,"{\n");
        buffer_append_str(source,"var result = new buffer();\n");
        buffer_append_format(source,"result.append_str(\"%s {\");\n",klass->mName);
        i_215=0;
        klass=((struct sClass*)(__right_value0=map$2char$phsClass$ph_operator_load_element(info->classes,klass->mName)));
        for(o2_saved=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(klass->mFields),it=list$1tuple2$2char$phsType$ph$ph_begin(o2_saved);!list$1tuple2$2char$phsType$ph$ph_end(o2_saved);it=list$1tuple2$2char$phsType$ph$ph_next(o2_saved)){
            multiple_assign_var26=it;
            name_216=(char*)come_increment_ref_count(multiple_assign_var26->v1);
            field_type=(struct sType*)come_increment_ref_count(multiple_assign_var26->v2);
            if(string_operator_equals(field_type->mClass->mName,"lambda")) {
                char source2[1024];
                memset(&source2, 0, sizeof(source2));
                snprintf(source2,1024,"result.append_str(\"%s:\");\n",name_216);
                buffer_append_str(source,source2);
                snprintf(source2,1024,"result.append_str(\"lambda\");\n");
                buffer_append_str(source,source2);
            }
            else if(i_215==list$1tuple2$2char$phsType$ph$ph_length(klass->mFields)-1) {
                char source2_217[1024];
                memset(&source2_217, 0, sizeof(source2_217));
                snprintf(source2_217,1024,"result.append_str(\"%s:\");\n",name_216);
                buffer_append_str(source,source2_217);
                snprintf(source2_217,1024,"result.append_str(self.%s.to_string());\n",name_216);
                buffer_append_str(source,source2_217);
            }
            else {
                char source2_218[1024];
                memset(&source2_218, 0, sizeof(source2_218));
                snprintf(source2_218,1024,"result.append_str(\"%s:\");\n",name_216);
                buffer_append_str(source,source2_218);
                snprintf(source2_218,1024,"result.append_str(self.%s.to_string());\n",name_216);
                buffer_append_str(source,source2_218);
                snprintf(source2_218,1024,"result.append_str(\",\");\n");
                buffer_append_str(source,source2_218);
            }
            i_215++;
            (name_216 = come_decrement_ref_count(name_216, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sType_finalize, field_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        buffer_append_str(source,"result.append_str(\"}\");\n");
        buffer_append_format(source,"return result.to_string();\n");
        buffer_append_char(source,125);
        p=info->p;
        sline=info->sline;
        sname=(char*)come_increment_ref_count(info->sname);
        source3=(struct buffer*)come_increment_ref_count(info->source);
        head=info->head;
        __dec_obj293=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source);
        come_call_finalizer(buffer_finalize, __dec_obj293,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        __dec_obj294=info->sname,
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name));
        __dec_obj294 = come_decrement_ref_count(__dec_obj294, (void*)0, (void*)0, 0,0, (void*)0);
        info->sline=1;
        block=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0));
        result_type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), (void*)0, 3723, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info,(_Bool)0));
        result_type->mHeap=(_Bool)1;
        name_219=(char*)come_increment_ref_count((char*)come_memdup(real_fun_name, "07function.nc", 3725, "char*"));
        self_type=(struct sType*)come_increment_ref_count(sType_clone(type_));
        __dec_obj295=self_type,
        self_type=(struct sType*)come_increment_ref_count(solve_generics(type_,type_,info));
        come_call_finalizer(sType_finalize, __dec_obj295,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self_type->mHeap=(_Bool)0;
        param_types=(struct list$1sType$ph*)come_increment_ref_count((__list_values15__[0]=self_type,
list$1sType$ph_initialize_with_values((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "07function.nc", 3730, "struct list$1sType$ph")),1,__list_values15__)));
        param_names=(struct list$1char$ph*)come_increment_ref_count((__list_values16__[0]=((char*)(__right_value0=__builtin_string("self"))),
list$1char$ph_initialize_with_values((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "07function.nc", 3731, "struct list$1char$ph")),1,__list_values16__)));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        param_default_parametors=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), (void*)0, 3732, "struct list$1char$ph*"))));
        list$1char$ph_push_back(param_default_parametors,((void*)0));
        result_type->mStatic=(_Bool)0;
        result_type->mUniq=(_Bool)0;
        result_type->mInline=(_Bool)0;
        fun2=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value1=__builtin_string(name_219)))));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        if(fun2==((void*)0)||fun2->mExternal) {
            fun=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), (void*)0, 3741, "struct sFun*")),(char*)come_increment_ref_count(name_219),(struct sType*)come_increment_ref_count(result_type),(struct list$1sType$ph*)come_increment_ref_count(param_types),(struct list$1char$ph*)come_increment_ref_count(param_names),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0,((void*)0),((void*)0),0,(_Bool)0));
            fun->mGenericsFun=(_Bool)1;
            map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_219)),(struct sFun*)come_increment_ref_count(fun),(_Bool)0);
            to_string_fun=fun;
            _inf_value18=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 3752, "struct sNode");
            _inf_obj_value18=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), (void*)0, 3752, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun),info))));
            _inf_value18->_protocol_obj=_inf_obj_value18;
            _inf_value18->finalize=(void*)sFunNode_finalize;
            _inf_value18->clone=(void*)sFunNode_clone;
            _inf_value18->compile=(void*)sFunNode_compile;
            _inf_value18->sline=(void*)sNodeBase_sline;
            _inf_value18->sline_real=(void*)sNodeBase_sline_real;
            _inf_value18->sname=(void*)sNodeBase_sname;
            _inf_value18->terminated=(void*)sNodeBase_terminated;
            _inf_value18->kind=(void*)sFunNode_kind;
            _inf_value18->no_mutex=(void*)sNodeBase_no_mutex;
            node=(struct sNode*)come_increment_ref_count(_inf_value18);
            come_call_finalizer(sFunNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            Value=node_compile(node,info);
            if(!Value) {
                err_msg(info,"compiling error(Y)");
                exit(2);
            }
            come_call_finalizer(sFun_finalize, fun, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
        else {
            to_string_fun=fun2;
        }
        __dec_obj296=info->sname,
        info->sname=(char*)come_increment_ref_count(sname);
        __dec_obj296 = come_decrement_ref_count(__dec_obj296, (void*)0, (void*)0, 0,0, (void*)0);
        info->sline=sline;
        __dec_obj297=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source3);
        come_call_finalizer(buffer_finalize, __dec_obj297,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        info->p=p;
        info->head=head;
        info->sline=sline;
        come_call_finalizer(buffer_finalize, source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (sname = come_decrement_ref_count(sname, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(buffer_finalize, source3, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sBlock_finalize, block, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (name_219 = come_decrement_ref_count(name_219, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sType_finalize, self_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sFun_finalize, fun2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct;
    __dec_obj298=info->module->mLastCode,
    info->module->mLastCode=(char*)come_increment_ref_count(last_code);
    __dec_obj298 = come_decrement_ref_count(__dec_obj298, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj299=info->module->mLastCode2,
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2);
    __dec_obj299 = come_decrement_ref_count(__dec_obj299, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj300=info->if_expression_buffer,
    info->if_expression_buffer=(struct buffer*)come_increment_ref_count(if_expression_buffer);
    come_call_finalizer(buffer_finalize, __dec_obj300,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj301=info->paren_block_buffer,
    info->paren_block_buffer=(struct buffer*)come_increment_ref_count(paren_block_buffer);
    come_call_finalizer(buffer_finalize, __dec_obj301,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __result_obj__0 = (struct tuple2$2sFun$pchar$ph*)come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value1=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph*)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "07function.nc", 3779, "struct tuple2$2sFun$pchar$ph")),to_string_fun,(char*)come_increment_ref_count(real_fun_name)))));
    (last_code = come_decrement_ref_count(last_code, (void*)0, (void*)0, 0, 0, (void*)0));
    (last_code2 = come_decrement_ref_count(last_code2, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(buffer_finalize, if_expression_buffer, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(buffer_finalize, paren_block_buffer, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (real_fun_name = come_decrement_ref_count(real_fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sType_finalize, type_before, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type_, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

struct tuple2$2sFun$pchar$ph* create_get_hash_key_automatically(struct sType* type  , const char* fun_name, struct sInfo* info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "create_get_hash_key_automatically"; neo_current_frame = &fr;
    char* last_code  ;
    char* __dec_obj302  ;
    char* last_code2  ;
    char* __dec_obj303  ;
    void* __right_value0 = (void*)0;
    struct buffer* if_expression_buffer  ;
    struct buffer* __dec_obj304  ;
    struct buffer* paren_block_buffer  ;
    struct buffer* __dec_obj305  ;
    struct sClass* current_stack_frame_struct  ;
    struct sFun* get_hash_key_fun  ;
    char* real_fun_name  ;
    struct sType* type2  ;
    struct sClass* klass  ;
    char* none_generics_name  ;
    char* generics_fun_name  ;
    struct sGenericsFun* generics_fun  ;
    struct tuple2$2char$ph_Bool$* multiple_assign_var27
;    char* name  =0;
    _Bool err=0;
    int i;
    char* new_fun_name  ;
    char* __dec_obj306  ;
    void* __right_value1 = (void*)0;
    struct buffer* source  ;
    int i_220;
    struct list$1tuple2$2char$phsType$ph$ph* o2_saved;
    struct tuple2$2char$phsType$ph* it;
    struct tuple2$2char$phsType$ph* multiple_assign_var28
;    char* name_221  =0;
    struct sType* field_type  =0;
    char* p;
    int sline;
    char* sname  ;
    struct buffer* source3  ;
    char* head;
    struct buffer* __dec_obj307  ;
    char* __dec_obj308  ;
    struct sBlock* block  ;
    void* __right_value2 = (void*)0;
    struct sType* result_type;
    char* name_222  ;
    struct sType* self_type  ;
    struct sType* __list_values17__[1]  ;
    struct list$1sType$ph* param_types;
    char* __list_values18__[1]  ;
    struct list$1char$ph* param_names;
    struct list$1char$ph* param_default_parametors;
    struct sFun* fun2  ;
    struct sFun* fun;
    struct sNode* _inf_value19;
    struct sFunNode* _inf_obj_value19;
    struct sNode* node;
    _Bool Value;
    char* __dec_obj309  ;
    struct buffer* __dec_obj310  ;
    char* __dec_obj311  ;
    char* __dec_obj312  ;
    struct buffer* __dec_obj313  ;
    struct buffer* __dec_obj314  ;
    struct tuple2$2sFun$pchar$ph* __result_obj__0;
    memset(&i, 0, sizeof(i));
    last_code=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj302=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj302 = come_decrement_ref_count(__dec_obj302, (void*)0, (void*)0, 0,0, (void*)0);
    last_code2=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj303=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj303 = come_decrement_ref_count(__dec_obj303, (void*)0, (void*)0, 0,0, (void*)0);
    if_expression_buffer=(struct buffer*)come_increment_ref_count(buffer_clone(info->if_expression_buffer));
    __dec_obj304=info->if_expression_buffer,
    info->if_expression_buffer=((void*)0);
    come_call_finalizer(buffer_finalize, __dec_obj304,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    paren_block_buffer=(struct buffer*)come_increment_ref_count(buffer_clone(info->paren_block_buffer));
    __dec_obj305=info->paren_block_buffer,
    info->paren_block_buffer=((void*)0);
    come_call_finalizer(buffer_finalize, __dec_obj305,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    current_stack_frame_struct=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    get_hash_key_fun=((void*)0);
    real_fun_name=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2;
    klass=type->mClass;
    if(list$1sType$ph_length(type->mGenericsTypes)>0) {
        get_hash_key_fun=((struct sFun*)(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,real_fun_name)));
        if(get_hash_key_fun==((void*)0)) {
            none_generics_name=(char*)come_increment_ref_count(get_none_generics_name(type2->mClass->mName));
            generics_fun_name=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name,fun_name));
            generics_fun=((struct sGenericsFun*)(__right_value0=map$2char$phsGenericsFun$ph_operator_load_element(info->generics_funcs,generics_fun_name)));
            if(generics_fun) {
                multiple_assign_var27=((struct tuple2$2char$ph_Bool$*)(__right_value0=create_generics_fun((char*)come_increment_ref_count(real_fun_name),generics_fun,type,info)));
                name=(char*)come_increment_ref_count(multiple_assign_var27->v1);
                err=multiple_assign_var27->v2;
                come_call_finalizer(tuple2$2char$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                if(!err) {
                    printf("%s %d: can't create generics get_hash_key_fun\n",info->sname,info->sline);
                    exit(2);
                }
                get_hash_key_fun=((struct sFun*)(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,name)));
                (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
            }
            (none_generics_name = come_decrement_ref_count(none_generics_name, (void*)0, (void*)0, 0, 0, (void*)0));
            (generics_fun_name = come_decrement_ref_count(generics_fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
        }
    }
    else {
        for(i=128-1;i>=1;i--){
            new_fun_name=(char*)come_increment_ref_count(xsprintf("%s_v%d",real_fun_name,i));
            get_hash_key_fun=((struct sFun*)(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,new_fun_name)));
            if(get_hash_key_fun) {
                __dec_obj306=real_fun_name,
                real_fun_name=(char*)come_increment_ref_count(__builtin_string(new_fun_name));
                __dec_obj306 = come_decrement_ref_count(__dec_obj306, (void*)0, (void*)0, 0,0, (void*)0);
                (new_fun_name = come_decrement_ref_count(new_fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
                break;
            }
            (new_fun_name = come_decrement_ref_count(new_fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        if(get_hash_key_fun==((void*)0)) {
            get_hash_key_fun=((struct sFun*)(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,real_fun_name)));
        }
    }
    if(get_hash_key_fun==((void*)0)&&type->mPointerNum>0&&!klass->mNumber&&!klass->mProtocol) {
        source=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), (void*)0, 3845, "struct buffer*"))));
        buffer_append_str(source,"{\n");
        buffer_append_str(source,"unsigned int result = 0;\n");
        i_220=0;
        klass=((struct sClass*)(__right_value0=map$2char$phsClass$ph_operator_load_element(info->classes,klass->mName)));
        for(o2_saved=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(klass->mFields),it=list$1tuple2$2char$phsType$ph$ph_begin(o2_saved);!list$1tuple2$2char$phsType$ph$ph_end(o2_saved);it=list$1tuple2$2char$phsType$ph$ph_next(o2_saved)){
            multiple_assign_var28=it;
            name_221=(char*)come_increment_ref_count(multiple_assign_var28->v1);
            field_type=(struct sType*)come_increment_ref_count(multiple_assign_var28->v2);
            char source2[1024];
            memset(&source2, 0, sizeof(source2));
            snprintf(source2,1024,"result += ((int)self.%s).get_hash_key();\n",name_221);
            buffer_append_str(source,source2);
            i_220++;
            (name_221 = come_decrement_ref_count(name_221, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sType_finalize, field_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        buffer_append_format(source,"return result;\n");
        buffer_append_char(source,125);
        p=info->p;
        sline=info->sline;
        sname=(char*)come_increment_ref_count(info->sname);
        source3=(struct buffer*)come_increment_ref_count(info->source);
        head=info->head;
        __dec_obj307=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source);
        come_call_finalizer(buffer_finalize, __dec_obj307,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        __dec_obj308=info->sname,
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name));
        __dec_obj308 = come_decrement_ref_count(__dec_obj308, (void*)0, (void*)0, 0,0, (void*)0);
        info->sline=1;
        block=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0));
        result_type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), (void*)0, 3882, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info,(_Bool)0));
        result_type->mUnsigned=(_Bool)1;
        name_222=(char*)come_increment_ref_count((char*)come_memdup(real_fun_name, "07function.nc", 3884, "char*"));
        self_type=(struct sType*)come_increment_ref_count(sType_clone(type));
        self_type->mHeap=(_Bool)0;
        param_types=(struct list$1sType$ph*)come_increment_ref_count((__list_values17__[0]=self_type,
list$1sType$ph_initialize_with_values((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "07function.nc", 3887, "struct list$1sType$ph")),1,__list_values17__)));
        param_names=(struct list$1char$ph*)come_increment_ref_count((__list_values18__[0]=((char*)(__right_value0=__builtin_string("self"))),
list$1char$ph_initialize_with_values((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "07function.nc", 3888, "struct list$1char$ph")),1,__list_values18__)));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        param_default_parametors=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), (void*)0, 3889, "struct list$1char$ph*"))));
        list$1char$ph_push_back(param_default_parametors,((void*)0));
        result_type->mStatic=(_Bool)0;
        result_type->mUniq=(_Bool)0;
        result_type->mInline=(_Bool)0;
        fun2=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value1=__builtin_string(name_222)))));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        if(fun2==((void*)0)||fun2->mExternal) {
            fun=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), (void*)0, 3898, "struct sFun*")),(char*)come_increment_ref_count(name_222),(struct sType*)come_increment_ref_count(result_type),(struct list$1sType$ph*)come_increment_ref_count(param_types),(struct list$1char$ph*)come_increment_ref_count(param_names),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)1,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0,((void*)0),((void*)0),0,(_Bool)0));
            fun->mGenericsFun=(_Bool)1;
            map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_222)),(struct sFun*)come_increment_ref_count(fun),(_Bool)0);
            get_hash_key_fun=fun;
            _inf_value19=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 3909, "struct sNode");
            _inf_obj_value19=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), (void*)0, 3909, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun),info))));
            _inf_value19->_protocol_obj=_inf_obj_value19;
            _inf_value19->finalize=(void*)sFunNode_finalize;
            _inf_value19->clone=(void*)sFunNode_clone;
            _inf_value19->compile=(void*)sFunNode_compile;
            _inf_value19->sline=(void*)sNodeBase_sline;
            _inf_value19->sline_real=(void*)sNodeBase_sline_real;
            _inf_value19->sname=(void*)sNodeBase_sname;
            _inf_value19->terminated=(void*)sNodeBase_terminated;
            _inf_value19->kind=(void*)sFunNode_kind;
            _inf_value19->no_mutex=(void*)sNodeBase_no_mutex;
            node=(struct sNode*)come_increment_ref_count(_inf_value19);
            come_call_finalizer(sFunNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            Value=node_compile(node,info);
            if(!Value) {
                err_msg(info,"compiling error(Y)");
                exit(2);
            }
            come_call_finalizer(sFun_finalize, fun, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
        else {
            get_hash_key_fun=fun2;
        }
        __dec_obj309=info->sname,
        info->sname=(char*)come_increment_ref_count(sname);
        __dec_obj309 = come_decrement_ref_count(__dec_obj309, (void*)0, (void*)0, 0,0, (void*)0);
        info->sline=sline;
        __dec_obj310=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source3);
        come_call_finalizer(buffer_finalize, __dec_obj310,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        info->p=p;
        info->head=head;
        info->sline=sline;
        come_call_finalizer(buffer_finalize, source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (sname = come_decrement_ref_count(sname, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(buffer_finalize, source3, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sBlock_finalize, block, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (name_222 = come_decrement_ref_count(name_222, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sType_finalize, self_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sFun_finalize, fun2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct;
    __dec_obj311=info->module->mLastCode,
    info->module->mLastCode=(char*)come_increment_ref_count(last_code);
    __dec_obj311 = come_decrement_ref_count(__dec_obj311, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj312=info->module->mLastCode2,
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2);
    __dec_obj312 = come_decrement_ref_count(__dec_obj312, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj313=info->if_expression_buffer,
    info->if_expression_buffer=(struct buffer*)come_increment_ref_count(if_expression_buffer);
    come_call_finalizer(buffer_finalize, __dec_obj313,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj314=info->paren_block_buffer,
    info->paren_block_buffer=(struct buffer*)come_increment_ref_count(paren_block_buffer);
    come_call_finalizer(buffer_finalize, __dec_obj314,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __result_obj__0 = (struct tuple2$2sFun$pchar$ph*)come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value1=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph*)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "07function.nc", 3936, "struct tuple2$2sFun$pchar$ph")),get_hash_key_fun,(char*)come_increment_ref_count(real_fun_name)))));
    (last_code = come_decrement_ref_count(last_code, (void*)0, (void*)0, 0, 0, (void*)0));
    (last_code2 = come_decrement_ref_count(last_code2, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(buffer_finalize, if_expression_buffer, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(buffer_finalize, paren_block_buffer, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (real_fun_name = come_decrement_ref_count(real_fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

struct sFun* compile_uniq_function(struct sFun* fun  , struct sInfo* info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "compile_uniq_function"; neo_current_frame = &fr;
    struct sFun* caller_fun  ;
    int caller_line;
    char* caller_sname;
    void* __right_value0 = (void*)0;
    struct buffer* if_expression_buffer  ;
    struct buffer* __dec_obj315  ;
    struct buffer* paren_block_buffer  ;
    struct buffer* __dec_obj316  ;
    char* last_code  ;
    char* __dec_obj317  ;
    char* last_code2  ;
    char* __dec_obj318  ;
    char* sname_top  ;
    int sline_top;
    struct sType* result_type  ;
    void* __right_value1 = (void*)0;
    struct list$1sType$ph* param_types;
    struct list$1sType$ph* o2_saved;
    struct sType* it  ;
    struct list$1char$ph* param_names;
    struct list$1char$ph* param_default_parametors;
    char* p;
    int sline;
    char* sname  ;
    char* head;
    struct buffer* source  ;
    struct buffer* __dec_obj319  ;
    char* __dec_obj320  ;
    struct sBlock* block  ;
    struct buffer* __dec_obj321  ;
    char* __dec_obj322  ;
    _Bool const_fun;
    _Bool var_args;
    struct sFun* fun2;
    struct sNode* _inf_value20;
    struct sFunNode* _inf_obj_value20;
    void* __right_value2 = (void*)0;
    struct sNode* node;
    _Bool Value;
    struct sFun* __result_obj__0  ;
    char* __dec_obj323  ;
    char* __dec_obj324  ;
    char* __dec_obj325  ;
    struct buffer* __dec_obj326  ;
    struct buffer* __dec_obj327  ;
    caller_fun=info->caller_fun;
    info->caller_fun=info->come_fun;
    caller_line=info->caller_line;
    info->caller_line=info->sline;
    caller_sname=info->caller_sname;
    info->caller_sname=info->sname;
    if_expression_buffer=(struct buffer*)come_increment_ref_count(buffer_clone(info->if_expression_buffer));
    __dec_obj315=info->if_expression_buffer,
    info->if_expression_buffer=((void*)0);
    come_call_finalizer(buffer_finalize, __dec_obj315,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    paren_block_buffer=(struct buffer*)come_increment_ref_count(buffer_clone(info->paren_block_buffer));
    __dec_obj316=info->paren_block_buffer,
    info->paren_block_buffer=((void*)0);
    come_call_finalizer(buffer_finalize, __dec_obj316,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj317=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj317 = come_decrement_ref_count(__dec_obj317, (void*)0, (void*)0, 0,0, (void*)0);
    last_code2=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj318=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj318 = come_decrement_ref_count(__dec_obj318, (void*)0, (void*)0, 0,0, (void*)0);
    sname_top=(char*)come_increment_ref_count(__builtin_string(info->sname));
    sline_top=info->sline;
    result_type=(struct sType*)come_increment_ref_count(sType_clone(fun->mResultType));
    param_types=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), (void*)0, 3962, "struct list$1sType$ph*"))));
    for(o2_saved=(struct list$1sType$ph*)come_increment_ref_count(fun->mParamTypes),it=list$1sType$ph_begin(o2_saved);!list$1sType$ph_end(o2_saved);it=list$1sType$ph_next(o2_saved)){
        list$1sType$ph_add(param_types,(struct sType*)come_increment_ref_count(sType_clone(it)));
    }
    come_call_finalizer(list$1sType$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    param_names=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(fun->mParamNames));
    param_default_parametors=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(fun->mParamDefaultParametors));
    p=info->p;
    sline=info->sline;
    sname=(char*)come_increment_ref_count(info->sname);
    head=info->head;
    source=(struct buffer*)come_increment_ref_count(info->source);
    __dec_obj319=info->source,
    info->source=(struct buffer*)come_increment_ref_count(charp_to_buffer(fun->mTextBlock));
    come_call_finalizer(buffer_finalize, __dec_obj319,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    info->sline=fun->mTextBlockSline;
    __dec_obj320=info->sname,
    info->sname=(char*)come_increment_ref_count(fun->mTextBlockSName);
    __dec_obj320 = come_decrement_ref_count(__dec_obj320, (void*)0, (void*)0, 0,0, (void*)0);
    block=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)1));
    info->head=head;
    __dec_obj321=info->source,
    info->source=(struct buffer*)come_increment_ref_count(source);
    come_call_finalizer(buffer_finalize, __dec_obj321,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    info->p=p;
    info->sline=sline;
    __dec_obj322=info->sname,
    info->sname=(char*)come_increment_ref_count(sname);
    __dec_obj322 = come_decrement_ref_count(__dec_obj322, (void*)0, (void*)0, 0,0, (void*)0);
    result_type->mInline=(_Bool)0;
    result_type->mStatic=(_Bool)0;
    result_type->mUniq=(_Bool)0;
    const_fun=fun->mConstFun;
    var_args=fun->mVarArgs;
    fun2=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), (void*)0, 3998, "struct sFun*")),(char*)come_increment_ref_count(fun->mName),(struct sType*)come_increment_ref_count(result_type),(struct list$1sType$ph*)come_increment_ref_count(param_types),(struct list$1char$ph*)come_increment_ref_count(param_names),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors),(_Bool)0,var_args,(struct sBlock*)come_increment_ref_count(block),(_Bool)0,info,(_Bool)0,(_Bool)1,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf("")),const_fun,((void*)0),((void*)0),0,(_Bool)0));
    _inf_value20=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 4003, "struct sNode");
    _inf_obj_value20=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), (void*)0, 4003, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun2),info))));
    _inf_value20->_protocol_obj=_inf_obj_value20;
    _inf_value20->finalize=(void*)sFunNode_finalize;
    _inf_value20->clone=(void*)sFunNode_clone;
    _inf_value20->compile=(void*)sFunNode_compile;
    _inf_value20->sline=(void*)sNodeBase_sline;
    _inf_value20->sline_real=(void*)sNodeBase_sline_real;
    _inf_value20->sname=(void*)sNodeBase_sname;
    _inf_value20->terminated=(void*)sNodeBase_terminated;
    _inf_value20->kind=(void*)sFunNode_kind;
    _inf_value20->no_mutex=(void*)sNodeBase_no_mutex;
    node=(struct sNode*)come_increment_ref_count(_inf_value20);
    come_call_finalizer(sFunNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    Value=node_compile(node,info);
    if(!Value) {
        __result_obj__0 = (struct sFun*)come_increment_ref_count(((void*)0));
        come_call_finalizer(buffer_finalize, if_expression_buffer, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(buffer_finalize, paren_block_buffer, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (last_code = come_decrement_ref_count(last_code, (void*)0, (void*)0, 0, 0, (void*)0));
        (last_code2 = come_decrement_ref_count(last_code2, (void*)0, (void*)0, 0, 0, (void*)0));
        (sname_top = come_decrement_ref_count(sname_top, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (sname = come_decrement_ref_count(sname, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(buffer_finalize, source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sBlock_finalize, block, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sFun_finalize, fun2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    __dec_obj323=info->sname,
    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_top));
    __dec_obj323 = come_decrement_ref_count(__dec_obj323, (void*)0, (void*)0, 0,0, (void*)0);
    info->sline=sline_top;
    __dec_obj324=info->module->mLastCode,
    info->module->mLastCode=(char*)come_increment_ref_count(last_code);
    __dec_obj324 = come_decrement_ref_count(__dec_obj324, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj325=info->module->mLastCode2,
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2);
    __dec_obj325 = come_decrement_ref_count(__dec_obj325, (void*)0, (void*)0, 0,0, (void*)0);
    info->caller_fun=caller_fun;
    info->caller_line=caller_line;
    info->caller_sname=caller_sname;
    __dec_obj326=info->if_expression_buffer,
    info->if_expression_buffer=(struct buffer*)come_increment_ref_count(if_expression_buffer);
    come_call_finalizer(buffer_finalize, __dec_obj326,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj327=info->paren_block_buffer,
    info->paren_block_buffer=(struct buffer*)come_increment_ref_count(paren_block_buffer);
    come_call_finalizer(buffer_finalize, __dec_obj327,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __result_obj__0 = (struct sFun*)come_increment_ref_count(fun2);
    come_call_finalizer(buffer_finalize, if_expression_buffer, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(buffer_finalize, paren_block_buffer, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (last_code = come_decrement_ref_count(last_code, (void*)0, (void*)0, 0, 0, (void*)0));
    (last_code2 = come_decrement_ref_count(last_code2, (void*)0, (void*)0, 0, 0, (void*)0));
    (sname_top = come_decrement_ref_count(sname_top, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (sname = come_decrement_ref_count(sname, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(buffer_finalize, source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sBlock_finalize, block, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sFun_finalize, fun2, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

_Bool create_equals_method(struct sType* type  , struct sInfo* info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "create_equals_method"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sType* type_  ;
    char* result  ;
    struct list$1CVALUE$ph* stack_saved;
    struct list$1sRightValueObject$ph* right_value_objects;
    struct buffer* if_expression_buffer  ;
    struct buffer* __dec_obj328  ;
    struct buffer* paren_block_buffer  ;
    struct buffer* __dec_obj329  ;
    struct sClass* klass  ;
    char* class_name;
    struct sType* type2  ;
    struct sFun* cloner  ;
    char* fun_name2  ;
    char* none_generics_name  ;
    struct sType* obj_type  ;
    char* __dec_obj330  ;
    char* fun_name3  ;
    struct sGenericsFun* generics_fun  ;
    void* __right_value1 = (void*)0;
    struct tuple2$2char$ph_Bool$* multiple_assign_var29
;    char* name  =0;
    _Bool err=0;
    _Bool __result_obj__0;
    char* __dec_obj331  ;
    int i;
    char* new_fun_name  ;
    char* __dec_obj332  ;
    struct tuple2$2sFun$pchar$ph* multiple_assign_var30
;    struct sFun* fun  =0;
    char* new_fun_name_223  =0;
    char* __dec_obj333  ;
    struct list$1sRightValueObject$ph* __dec_obj334;
    struct list$1CVALUE$ph* __dec_obj335;
    struct buffer* __dec_obj336  ;
    struct buffer* __dec_obj337  ;
    memset(&fun_name2, 0, sizeof(fun_name2));
    memset(&i, 0, sizeof(i));
    type_=(struct sType*)come_increment_ref_count(get_no_solved_type(type));
    result=((void*)0);
    stack_saved=(struct list$1CVALUE$ph*)come_increment_ref_count(info->stack);
    right_value_objects=info->right_value_objects;
    if_expression_buffer=(struct buffer*)come_increment_ref_count(buffer_clone(info->if_expression_buffer));
    __dec_obj328=info->if_expression_buffer,
    info->if_expression_buffer=((void*)0);
    come_call_finalizer(buffer_finalize, __dec_obj328,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    paren_block_buffer=(struct buffer*)come_increment_ref_count(buffer_clone(info->paren_block_buffer));
    __dec_obj329=info->paren_block_buffer,
    info->paren_block_buffer=((void*)0);
    come_call_finalizer(buffer_finalize, __dec_obj329,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    klass=type_->mClass;
    class_name=klass->mName;
    const char* fun_name="equals";
    type2=(struct sType*)come_increment_ref_count(sType_clone(type_));
    type2->mHeap=(_Bool)0;
    cloner=((void*)0);
    if(list$1sType$ph_length(type_->mGenericsTypes)>0) {
        none_generics_name=(char*)come_increment_ref_count(get_none_generics_name(type_->mClass->mName));
        obj_type=(struct sType*)come_increment_ref_count(solve_generics(type_,info->generics_type,info));
        __dec_obj330=fun_name2,
        fun_name2=(char*)come_increment_ref_count(create_method_name(obj_type,(_Bool)0,fun_name,info,(_Bool)1));
        __dec_obj330 = come_decrement_ref_count(__dec_obj330, (void*)0, (void*)0, 0,0, (void*)0);
        fun_name3=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name,fun_name));
        generics_fun=((struct sGenericsFun*)(__right_value0=map$2char$phsGenericsFun$ph_at(info->generics_funcs,fun_name3,((void*)0),(_Bool)0)));
        if(generics_fun) {
            multiple_assign_var29=((struct tuple2$2char$ph_Bool$*)(__right_value1=create_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name2)),generics_fun,obj_type,info)));
            name=(char*)come_increment_ref_count(multiple_assign_var29->v1);
            err=multiple_assign_var29->v2;
            come_call_finalizer(tuple2$2char$ph_Bool$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            if(!err) {
                __result_obj__0 = (_Bool)0;
                (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
                (none_generics_name = come_decrement_ref_count(none_generics_name, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(sType_finalize, obj_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (fun_name3 = come_decrement_ref_count(fun_name3, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(sType_finalize, type_, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(list$1CVALUE$ph$p_finalize, stack_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(buffer_finalize, if_expression_buffer, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(buffer_finalize, paren_block_buffer, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (fun_name2 = come_decrement_ref_count(fun_name2, (void*)0, (void*)0, 0, 0, (void*)0));
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
            else {
                cloner=((struct sFun*)(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,name)));
            }
            (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        else {
            cloner=((struct sFun*)(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,fun_name2)));
        }
        (none_generics_name = come_decrement_ref_count(none_generics_name, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sType_finalize, obj_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (fun_name3 = come_decrement_ref_count(fun_name3, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    else {
        __dec_obj331=fun_name2,
        fun_name2=(char*)come_increment_ref_count(create_method_name(type_,(_Bool)0,fun_name,info,(_Bool)1));
        __dec_obj331 = come_decrement_ref_count(__dec_obj331, (void*)0, (void*)0, 0,0, (void*)0);
        for(i=128-1;i>=1;i--){
            new_fun_name=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2,i));
            cloner=((struct sFun*)(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,new_fun_name)));
            if(cloner) {
                __dec_obj332=fun_name2,
                fun_name2=(char*)come_increment_ref_count(__builtin_string(new_fun_name));
                __dec_obj332 = come_decrement_ref_count(__dec_obj332, (void*)0, (void*)0, 0,0, (void*)0);
                (new_fun_name = come_decrement_ref_count(new_fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
                break;
            }
            (new_fun_name = come_decrement_ref_count(new_fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        if(cloner==((void*)0)) {
            cloner=((struct sFun*)(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,fun_name2)));
        }
    }
    if(cloner==((void*)0)&&!type_->mClass->mProtocol&&!type_->mClass->mNumber) {
        multiple_assign_var30=((struct tuple2$2sFun$pchar$ph*)(__right_value0=create_equals_automatically(type_,fun_name,info)));
        fun=multiple_assign_var30->v1;
        new_fun_name_223=(char*)come_increment_ref_count(multiple_assign_var30->v2);
        come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        __dec_obj333=fun_name2,
        fun_name2=(char*)come_increment_ref_count(new_fun_name_223);
        __dec_obj333 = come_decrement_ref_count(__dec_obj333, (void*)0, (void*)0, 0,0, (void*)0);
        cloner=fun;
        (new_fun_name_223 = come_decrement_ref_count(new_fun_name_223, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    __dec_obj334=info->right_value_objects,
    info->right_value_objects=(struct list$1sRightValueObject$ph*)come_increment_ref_count(right_value_objects);
    come_call_finalizer(list$1sRightValueObject$ph_finalize, __dec_obj334,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj335=info->stack,
    info->stack=(struct list$1CVALUE$ph*)come_increment_ref_count(stack_saved);
    come_call_finalizer(list$1CVALUE$ph_finalize, __dec_obj335,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj336=info->if_expression_buffer,
    info->if_expression_buffer=(struct buffer*)come_increment_ref_count(if_expression_buffer);
    come_call_finalizer(buffer_finalize, __dec_obj336,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj337=info->paren_block_buffer,
    info->paren_block_buffer=(struct buffer*)come_increment_ref_count(paren_block_buffer);
    come_call_finalizer(buffer_finalize, __dec_obj337,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __result_obj__0 = (_Bool)1;
    come_call_finalizer(sType_finalize, type_, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(list$1CVALUE$ph$p_finalize, stack_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(buffer_finalize, if_expression_buffer, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(buffer_finalize, paren_block_buffer, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (fun_name2 = come_decrement_ref_count(fun_name2, (void*)0, (void*)0, 0, 0, (void*)0));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void list$1CVALUE$ph$p_finalize(struct list$1CVALUE$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1CVALUE$ph$p_finalize"; neo_current_frame = &fr;
    struct list_item$1CVALUE$ph* it;
    struct list_item$1CVALUE$ph* prev_it;
    if(self==((void*)0)) {
        neo_current_frame = fr.prev;
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1CVALUE$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

static void list_item$1CVALUE$ph$p_finalize(struct list_item$1CVALUE$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1CVALUE$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer(CVALUE_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

static void list$1CVALUE$ph_finalize(struct list$1CVALUE$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1CVALUE$ph_finalize"; neo_current_frame = &fr;
    struct list_item$1CVALUE$ph* it;
    struct list_item$1CVALUE$ph* prev_it;
    if(self==((void*)0)) {
        neo_current_frame = fr.prev;
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1CVALUE$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

_Bool create_operator_equals_method(struct sType* type  , struct sInfo* info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "create_operator_equals_method"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sType* type_  ;
    char* result  ;
    struct list$1CVALUE$ph* stack_saved;
    struct list$1sRightValueObject$ph* right_value_objects;
    struct buffer* if_expression_buffer  ;
    struct buffer* __dec_obj338  ;
    struct buffer* paren_block_buffer  ;
    struct buffer* __dec_obj339  ;
    struct sClass* klass  ;
    char* class_name;
    struct sType* type2  ;
    struct sFun* cloner  ;
    char* fun_name2  ;
    char* none_generics_name  ;
    struct sType* obj_type  ;
    char* __dec_obj340  ;
    char* fun_name3  ;
    struct sGenericsFun* generics_fun  ;
    void* __right_value1 = (void*)0;
    struct tuple2$2char$ph_Bool$* multiple_assign_var31
;    char* name  =0;
    _Bool err=0;
    _Bool __result_obj__0;
    char* __dec_obj341  ;
    int i;
    char* new_fun_name  ;
    char* __dec_obj342  ;
    struct tuple2$2sFun$pchar$ph* multiple_assign_var32
;    struct sFun* fun  =0;
    char* new_fun_name_224  =0;
    char* __dec_obj343  ;
    struct list$1sRightValueObject$ph* __dec_obj344;
    struct list$1CVALUE$ph* __dec_obj345;
    struct buffer* __dec_obj346  ;
    struct buffer* __dec_obj347  ;
    memset(&fun_name2, 0, sizeof(fun_name2));
    memset(&i, 0, sizeof(i));
    type_=(struct sType*)come_increment_ref_count(get_no_solved_type2(type));
    result=((void*)0);
    stack_saved=(struct list$1CVALUE$ph*)come_increment_ref_count(info->stack);
    right_value_objects=info->right_value_objects;
    if_expression_buffer=(struct buffer*)come_increment_ref_count(buffer_clone(info->if_expression_buffer));
    __dec_obj338=info->if_expression_buffer,
    info->if_expression_buffer=((void*)0);
    come_call_finalizer(buffer_finalize, __dec_obj338,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    paren_block_buffer=(struct buffer*)come_increment_ref_count(buffer_clone(info->paren_block_buffer));
    __dec_obj339=info->paren_block_buffer,
    info->paren_block_buffer=((void*)0);
    come_call_finalizer(buffer_finalize, __dec_obj339,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    klass=type_->mClass;
    class_name=klass->mName;
    const char* fun_name="operator_equals";
    type2=(struct sType*)come_increment_ref_count(sType_clone(type_));
    type2->mHeap=(_Bool)0;
    cloner=((void*)0);
    if(list$1sType$ph_length(type_->mGenericsTypes)>0) {
        none_generics_name=(char*)come_increment_ref_count(get_none_generics_name(type_->mClass->mName));
        obj_type=(struct sType*)come_increment_ref_count(solve_generics(type_,info->generics_type,info));
        __dec_obj340=fun_name2,
        fun_name2=(char*)come_increment_ref_count(create_method_name(obj_type,(_Bool)0,fun_name,info,(_Bool)1));
        __dec_obj340 = come_decrement_ref_count(__dec_obj340, (void*)0, (void*)0, 0,0, (void*)0);
        fun_name3=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name,fun_name));
        generics_fun=((struct sGenericsFun*)(__right_value0=map$2char$phsGenericsFun$ph_at(info->generics_funcs,fun_name3,((void*)0),(_Bool)0)));
        if(generics_fun) {
            multiple_assign_var31=((struct tuple2$2char$ph_Bool$*)(__right_value1=create_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name2)),generics_fun,obj_type,info)));
            name=(char*)come_increment_ref_count(multiple_assign_var31->v1);
            err=multiple_assign_var31->v2;
            come_call_finalizer(tuple2$2char$ph_Bool$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            if(!err) {
                __result_obj__0 = (_Bool)0;
                (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
                (none_generics_name = come_decrement_ref_count(none_generics_name, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(sType_finalize, obj_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (fun_name3 = come_decrement_ref_count(fun_name3, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(sType_finalize, type_, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(list$1CVALUE$ph$p_finalize, stack_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(buffer_finalize, if_expression_buffer, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(buffer_finalize, paren_block_buffer, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (fun_name2 = come_decrement_ref_count(fun_name2, (void*)0, (void*)0, 0, 0, (void*)0));
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
            cloner=((struct sFun*)(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,name)));
            (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        else {
            cloner=((struct sFun*)(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,fun_name2)));
        }
        (none_generics_name = come_decrement_ref_count(none_generics_name, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sType_finalize, obj_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (fun_name3 = come_decrement_ref_count(fun_name3, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    else {
        __dec_obj341=fun_name2,
        fun_name2=(char*)come_increment_ref_count(create_method_name(type_,(_Bool)0,fun_name,info,(_Bool)1));
        __dec_obj341 = come_decrement_ref_count(__dec_obj341, (void*)0, (void*)0, 0,0, (void*)0);
        for(i=128-1;i>=1;i--){
            new_fun_name=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2,i));
            cloner=((struct sFun*)(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,new_fun_name)));
            if(cloner) {
                __dec_obj342=fun_name2,
                fun_name2=(char*)come_increment_ref_count(__builtin_string(new_fun_name));
                __dec_obj342 = come_decrement_ref_count(__dec_obj342, (void*)0, (void*)0, 0,0, (void*)0);
                (new_fun_name = come_decrement_ref_count(new_fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
                break;
            }
            (new_fun_name = come_decrement_ref_count(new_fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        if(cloner==((void*)0)) {
            cloner=((struct sFun*)(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,fun_name2)));
        }
    }
    if(cloner==((void*)0)&&!type_->mClass->mProtocol&&!type_->mClass->mNumber) {
        multiple_assign_var32=((struct tuple2$2sFun$pchar$ph*)(__right_value0=create_operator_equals_automatically(type_,fun_name,info)));
        fun=multiple_assign_var32->v1;
        new_fun_name_224=(char*)come_increment_ref_count(multiple_assign_var32->v2);
        come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        __dec_obj343=fun_name2,
        fun_name2=(char*)come_increment_ref_count(new_fun_name_224);
        __dec_obj343 = come_decrement_ref_count(__dec_obj343, (void*)0, (void*)0, 0,0, (void*)0);
        cloner=fun;
        (new_fun_name_224 = come_decrement_ref_count(new_fun_name_224, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    __dec_obj344=info->right_value_objects,
    info->right_value_objects=(struct list$1sRightValueObject$ph*)come_increment_ref_count(right_value_objects);
    come_call_finalizer(list$1sRightValueObject$ph_finalize, __dec_obj344,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj345=info->stack,
    info->stack=(struct list$1CVALUE$ph*)come_increment_ref_count(stack_saved);
    come_call_finalizer(list$1CVALUE$ph_finalize, __dec_obj345,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj346=info->if_expression_buffer,
    info->if_expression_buffer=(struct buffer*)come_increment_ref_count(if_expression_buffer);
    come_call_finalizer(buffer_finalize, __dec_obj346,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj347=info->paren_block_buffer,
    info->paren_block_buffer=(struct buffer*)come_increment_ref_count(paren_block_buffer);
    come_call_finalizer(buffer_finalize, __dec_obj347,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __result_obj__0 = (_Bool)1;
    come_call_finalizer(sType_finalize, type_, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(list$1CVALUE$ph$p_finalize, stack_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(buffer_finalize, if_expression_buffer, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(buffer_finalize, paren_block_buffer, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (fun_name2 = come_decrement_ref_count(fun_name2, (void*)0, (void*)0, 0, 0, (void*)0));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

_Bool create_operator_not_equals_method(struct sType* type  , struct sInfo* info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "create_operator_not_equals_method"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sType* type_  ;
    char* result  ;
    struct list$1CVALUE$ph* stack_saved;
    struct list$1sRightValueObject$ph* right_value_objects;
    struct buffer* if_expression_buffer  ;
    struct buffer* __dec_obj348  ;
    struct buffer* paren_block_buffer  ;
    struct buffer* __dec_obj349  ;
    struct sClass* klass  ;
    char* class_name;
    struct sType* type2  ;
    struct sFun* cloner  ;
    char* fun_name2  ;
    char* none_generics_name  ;
    struct sType* obj_type  ;
    char* __dec_obj350  ;
    char* fun_name3  ;
    struct sGenericsFun* generics_fun  ;
    void* __right_value1 = (void*)0;
    struct tuple2$2char$ph_Bool$* multiple_assign_var33
;    char* name  =0;
    _Bool err=0;
    _Bool __result_obj__0;
    char* __dec_obj351  ;
    int i;
    char* new_fun_name  ;
    char* __dec_obj352  ;
    struct tuple2$2sFun$pchar$ph* multiple_assign_var34
;    struct sFun* fun  =0;
    char* new_fun_name_225  =0;
    char* __dec_obj353  ;
    struct list$1sRightValueObject$ph* __dec_obj354;
    struct list$1CVALUE$ph* __dec_obj355;
    struct buffer* __dec_obj356  ;
    struct buffer* __dec_obj357  ;
    memset(&fun_name2, 0, sizeof(fun_name2));
    memset(&i, 0, sizeof(i));
    type_=(struct sType*)come_increment_ref_count(get_no_solved_type2(type));
    result=((void*)0);
    stack_saved=(struct list$1CVALUE$ph*)come_increment_ref_count(info->stack);
    right_value_objects=info->right_value_objects;
    if_expression_buffer=(struct buffer*)come_increment_ref_count(buffer_clone(info->if_expression_buffer));
    __dec_obj348=info->if_expression_buffer,
    info->if_expression_buffer=((void*)0);
    come_call_finalizer(buffer_finalize, __dec_obj348,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    paren_block_buffer=(struct buffer*)come_increment_ref_count(buffer_clone(info->paren_block_buffer));
    __dec_obj349=info->paren_block_buffer,
    info->paren_block_buffer=((void*)0);
    come_call_finalizer(buffer_finalize, __dec_obj349,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    klass=type_->mClass;
    class_name=klass->mName;
    const char* fun_name="operator_not_equals";
    type2=(struct sType*)come_increment_ref_count(sType_clone(type_));
    type2->mHeap=(_Bool)0;
    cloner=((void*)0);
    if(list$1sType$ph_length(type_->mGenericsTypes)>0) {
        none_generics_name=(char*)come_increment_ref_count(get_none_generics_name(type_->mClass->mName));
        obj_type=(struct sType*)come_increment_ref_count(solve_generics(type_,info->generics_type,info));
        __dec_obj350=fun_name2,
        fun_name2=(char*)come_increment_ref_count(create_method_name(obj_type,(_Bool)0,fun_name,info,(_Bool)1));
        __dec_obj350 = come_decrement_ref_count(__dec_obj350, (void*)0, (void*)0, 0,0, (void*)0);
        fun_name3=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name,fun_name));
        generics_fun=((struct sGenericsFun*)(__right_value0=map$2char$phsGenericsFun$ph_at(info->generics_funcs,fun_name3,((void*)0),(_Bool)0)));
        if(generics_fun) {
            multiple_assign_var33=((struct tuple2$2char$ph_Bool$*)(__right_value1=create_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name2)),generics_fun,obj_type,info)));
            name=(char*)come_increment_ref_count(multiple_assign_var33->v1);
            err=multiple_assign_var33->v2;
            come_call_finalizer(tuple2$2char$ph_Bool$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            if(!err) {
                __result_obj__0 = (_Bool)0;
                (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
                (none_generics_name = come_decrement_ref_count(none_generics_name, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(sType_finalize, obj_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (fun_name3 = come_decrement_ref_count(fun_name3, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(sType_finalize, type_, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(list$1CVALUE$ph$p_finalize, stack_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(buffer_finalize, if_expression_buffer, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(buffer_finalize, paren_block_buffer, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (fun_name2 = come_decrement_ref_count(fun_name2, (void*)0, (void*)0, 0, 0, (void*)0));
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
            cloner=((struct sFun*)(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,name)));
            (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        else {
            cloner=((struct sFun*)(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,fun_name2)));
        }
        (none_generics_name = come_decrement_ref_count(none_generics_name, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sType_finalize, obj_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (fun_name3 = come_decrement_ref_count(fun_name3, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    else {
        __dec_obj351=fun_name2,
        fun_name2=(char*)come_increment_ref_count(create_method_name(type_,(_Bool)0,fun_name,info,(_Bool)1));
        __dec_obj351 = come_decrement_ref_count(__dec_obj351, (void*)0, (void*)0, 0,0, (void*)0);
        for(i=128-1;i>=1;i--){
            new_fun_name=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2,i));
            cloner=((struct sFun*)(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,new_fun_name)));
            if(cloner) {
                __dec_obj352=fun_name2,
                fun_name2=(char*)come_increment_ref_count(__builtin_string(new_fun_name));
                __dec_obj352 = come_decrement_ref_count(__dec_obj352, (void*)0, (void*)0, 0,0, (void*)0);
                (new_fun_name = come_decrement_ref_count(new_fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
                break;
            }
            (new_fun_name = come_decrement_ref_count(new_fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        if(cloner==((void*)0)) {
            cloner=((struct sFun*)(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,fun_name2)));
        }
    }
    if(cloner==((void*)0)&&!type_->mClass->mProtocol&&!type_->mClass->mNumber) {
        multiple_assign_var34=((struct tuple2$2sFun$pchar$ph*)(__right_value0=create_operator_not_equals_automatically(type_,fun_name,info)));
        fun=multiple_assign_var34->v1;
        new_fun_name_225=(char*)come_increment_ref_count(multiple_assign_var34->v2);
        come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        __dec_obj353=fun_name2,
        fun_name2=(char*)come_increment_ref_count(new_fun_name_225);
        __dec_obj353 = come_decrement_ref_count(__dec_obj353, (void*)0, (void*)0, 0,0, (void*)0);
        cloner=fun;
        (new_fun_name_225 = come_decrement_ref_count(new_fun_name_225, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    __dec_obj354=info->right_value_objects,
    info->right_value_objects=(struct list$1sRightValueObject$ph*)come_increment_ref_count(right_value_objects);
    come_call_finalizer(list$1sRightValueObject$ph_finalize, __dec_obj354,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj355=info->stack,
    info->stack=(struct list$1CVALUE$ph*)come_increment_ref_count(stack_saved);
    come_call_finalizer(list$1CVALUE$ph_finalize, __dec_obj355,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj356=info->if_expression_buffer,
    info->if_expression_buffer=(struct buffer*)come_increment_ref_count(if_expression_buffer);
    come_call_finalizer(buffer_finalize, __dec_obj356,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj357=info->paren_block_buffer,
    info->paren_block_buffer=(struct buffer*)come_increment_ref_count(paren_block_buffer);
    come_call_finalizer(buffer_finalize, __dec_obj357,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __result_obj__0 = (_Bool)1;
    come_call_finalizer(sType_finalize, type_, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(list$1CVALUE$ph$p_finalize, stack_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(buffer_finalize, if_expression_buffer, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(buffer_finalize, paren_block_buffer, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (fun_name2 = come_decrement_ref_count(fun_name2, (void*)0, (void*)0, 0, 0, (void*)0));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

