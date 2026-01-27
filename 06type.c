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
    char* class_name;
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

struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phint$
{
    struct list$1sType$ph* v1;
    struct list$1char$ph* v2;
    struct list$1char$ph* v3;
    int v4;
};

struct tuple3$3sType$phchar$phint$
{
    struct sType* v1  ;
    char* v2  ;
    int v3;
};

struct __current_stack1__
{
    _Bool* pointer_paren;
    int* paren_num;
    int* array_pointer_num;
    struct list$1sNode$ph** array;
    struct sInfo** info  ;
    _Bool* parse_variable_name;
    _Bool* parse_multiple_type;
    _Bool* in_function_parametor;
    char** head;
    int* head_sline;
    char** type_name  ;
    _Bool* record_;
    _Bool* constant;
    _Bool* static_;
    _Bool* volatile_;
    _Bool* register_;
    _Bool* unsigned_;
    _Bool* long_;
    _Bool* long_long;
    _Bool* short_;
    _Bool* restrict_;
    _Bool* struct_;
    _Bool* union_;
    _Bool* enum_;
    _Bool* no_heap;
    _Bool* extern_;
    _Bool* inline_;
    _Bool* uniq_;
    _Bool* tuple_;
    _Bool* original_var_name;
    _Bool* complex_;
    _Bool* type_name_;
    struct sNode** alignas_;
    _Bool* alignas_double;
    char** union_attribute  ;
    _Bool* anonymous_type;
    _Bool* anonymous_name;
    _Bool* atomic_;
    _Bool* thread_local;
    _Bool* thread_;
    char** attribute_67  ;
    int* pointer_num;
    _Bool* heap;
    _Bool* refference;
    _Bool* no_refference;
    _Bool* channel;
    _Bool* deffer_;
    _Bool* any_class;
    _Bool* vtable;
    char** tuple_name  ;
    _Bool* lambda_flag;
    struct sType** type_68  ;
    char** var_name_69  ;
    _Bool* function_pointer_flag;
    _Bool* pointer_to_array_flag;
    _Bool* var_name_between_brace;
};

struct __current_stack2__
{
    struct sInfo** info  ;
    _Bool* parse_variable_name;
    _Bool* parse_multiple_type;
    _Bool* in_function_parametor;
    char** head;
    int* head_sline;
    char** type_name  ;
    _Bool* record_;
    _Bool* constant;
    _Bool* static_;
    _Bool* volatile_;
    _Bool* register_;
    _Bool* unsigned_;
    _Bool* long_;
    _Bool* long_long;
    _Bool* short_;
    _Bool* restrict_;
    _Bool* struct_;
    _Bool* union_;
    _Bool* enum_;
    _Bool* no_heap;
    _Bool* extern_;
    _Bool* inline_;
    _Bool* uniq_;
    _Bool* tuple_;
    _Bool* original_var_name;
    _Bool* complex_;
    _Bool* type_name_;
    struct sNode** alignas_;
    _Bool* alignas_double;
    char** union_attribute  ;
    _Bool* anonymous_type;
    _Bool* anonymous_name;
    _Bool* atomic_;
    _Bool* thread_local;
    _Bool* thread_;
    char** attribute_67  ;
    int* pointer_num;
    _Bool* heap;
    _Bool* refference;
    _Bool* no_refference;
    _Bool* channel;
    _Bool* deffer_;
    _Bool* any_class;
    _Bool* vtable;
    char** tuple_name  ;
    _Bool* lambda_flag;
    struct sType** type_68  ;
    char** var_name_69  ;
    _Bool* function_pointer_flag;
    _Bool* pointer_to_array_flag;
    _Bool* var_name_between_brace;
    struct list$1sNode$ph** array_num_typedef;
};

struct __current_stack3__
{
    struct sInfo** info  ;
    _Bool* parse_variable_name;
    _Bool* parse_multiple_type;
    _Bool* in_function_parametor;
    char** head;
    int* head_sline;
    char** type_name  ;
    _Bool* record_;
    _Bool* constant;
    _Bool* static_;
    _Bool* volatile_;
    _Bool* register_;
    _Bool* unsigned_;
    _Bool* long_;
    _Bool* long_long;
    _Bool* short_;
    _Bool* restrict_;
    _Bool* struct_;
    _Bool* union_;
    _Bool* enum_;
    _Bool* no_heap;
    _Bool* extern_;
    _Bool* inline_;
    _Bool* uniq_;
    _Bool* tuple_;
    _Bool* original_var_name;
    _Bool* complex_;
    _Bool* type_name_;
    struct sNode** alignas_;
    _Bool* alignas_double;
    char** union_attribute  ;
    _Bool* anonymous_type;
    _Bool* anonymous_name;
    _Bool* atomic_;
    _Bool* thread_local;
    _Bool* thread_;
    char** attribute_67  ;
    int* pointer_num;
    _Bool* heap;
    _Bool* refference;
    _Bool* no_refference;
    _Bool* channel;
    _Bool* deffer_;
    _Bool* any_class;
    _Bool* vtable;
    char** tuple_name  ;
    _Bool* lambda_flag;
    struct sType** type_68  ;
    char** var_name_69  ;
    _Bool* function_pointer_flag;
    _Bool* pointer_to_array_flag;
    _Bool* var_name_between_brace;
    struct list$1sNode$ph** array_num_typedef;
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
extern _Bool gComeC;
extern _Bool gComePthread;
extern _Bool gComeNet;
extern _Bool gComeMalloc;
extern _Bool gCommonHeader;
extern int gComeDebugStackFrameID;
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
_Bool die(char* msg);
void come_heap_init(int come_debug);
void come_heap_final();
void* alloc_from_pages(unsigned long size  );
void come_free_mem_of_heap_pool(void* mem);
void* come_alloc_mem_from_heap_pool(unsigned long size  , char* sname, int sline, char* class_name);
char* come_dynamic_typeof(void* mem);
void* come_calloc(unsigned long count  , unsigned long size  , char* sname, int sline, char* class_name);
void come_free(void* mem);
void* come_memdup(void* block, char* sname, int sline, char* class_name);
void* come_increment_ref_count(void* mem);
void* come_print_ref_count(void* mem);
int come_get_ref_count(void* mem);
void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, void* result_obj);
void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, void* result_obj);
void xassert(char* msg, _Bool test);
char* __builtin_string(char* str);
struct buffer* buffer_initialize(struct buffer* self  );
struct buffer* buffer_initialize_with_value(struct buffer* self  , char* mem, unsigned long size  );
void buffer_finalize(struct buffer* self  );
struct buffer* buffer_clone(struct buffer* self  );
_Bool buffer_equals(struct buffer* left  , struct buffer* right  );
int buffer_length(struct buffer* self  );
void buffer_reset(struct buffer* self  );
void buffer_trim(struct buffer* self  , int len);
struct buffer* buffer_append(struct buffer* self  , char* mem, unsigned long size  );
struct buffer* buffer_append_char(struct buffer* self  , char c);
struct buffer* buffer_append_str(struct buffer* self  , char* mem);
struct buffer* buffer_append_format(struct buffer* self  , char* msg, ...);
struct buffer* buffer_append_nullterminated_str(struct buffer* self  , char* mem);
struct buffer* buffer_append_int(struct buffer* self  , int value);
struct buffer* buffer_append_long(struct buffer* self  , long value);
struct buffer* buffer_append_short(struct buffer* self  , short value);
struct buffer* buffer_alignment(struct buffer* self  );
int buffer_compare(struct buffer* left  , struct buffer* right  );
struct buffer* charp_to_buffer(char* self);
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
_Bool charp_equals(char* self, char* right);
_Bool string_equals(char* self, char* right);
_Bool voidp_equals(void* self, void* right);
_Bool _Boolp_equals(_Bool* self, _Bool* right);
_Bool string_operator_equals(char* self, char* right);
_Bool charp_operator_equals(char* self, char* right);
_Bool chara_operator_equals(char* self, char* right);
_Bool voidp_operator_equals(char* self, char* right);
_Bool voidp_operator_not_equals(char* self, char* right);
_Bool string_operator_not_equals(char* self, char* right);
_Bool charp_operator_not_equals(char* self, char* right);
_Bool chara_operator_not_equals(char* self, char* right);
char* charp_operator_add(char* self, char* right);
char* string_operator_add(char* self, char* right);
char* charp_operator_mult(char* self, int right);
char* string_operator_mult(char* self, int right);
_Bool charpa_contained(char** self, unsigned long len  , char* str);
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
unsigned int charp_get_hash_key(char* value);
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
char* size_t_to_string(unsigned long self  );
char* float_to_string(float self);
char* double_to_string(double self);
char* string_to_string(char* self);
char* charp_to_string(char* self);
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
int charp_index_regex(char* self, char* reg, int default_value, _Bool ignore_case);
int charp_rindex_regex(char* self, char* reg, int default_value, _Bool ignore_case);
char* string_chomp(char* str);
int string_rindex_regex(char* self, char* reg, int default_value, _Bool ignore_case);
int string_index_regex(char* self, char* reg, int default_value, _Bool ignore_case);
_Bool charp_match(char* self, char* reg, _Bool ignore_case);
struct list$1char$ph* charp_scan(char* self, char* reg, _Bool ignore_case);
struct list$1char$ph* charp_split(char* self, char* reg, _Bool ignore_case);
char* string_sub(char* self, char* reg, char* replace, _Bool ignore_case);
struct list$1char$ph* string_scan(char* self, char* reg, _Bool ignore_case);
struct list$1char$ph* string_split(char* self, char* reg, _Bool ignore_case);
_Bool string_match(char* self, char* reg, _Bool ignore_case);
char* charp_sub(char* self, char* reg, char* replace, _Bool global, _Bool ignore_case);
char* charp_sub_block(char* self, char* reg, _Bool global, _Bool ignore_case, void* parent, char* (*block)(void*,char*,struct list$1char$ph*));
struct list$1char$ph* charp_scan_block(char* self, char* reg, _Bool ignore_case, void* parent, char* (*block)(void*,char*,struct list$1char$ph*));
char* string_sub_block(char* self, char* reg, _Bool global, _Bool ignore_case, void* parent, char* (*block)(void*,char*,struct list$1char$ph*));
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
int* __builtin_wstring(char* str);
int wchar_tp_length(int* str  );
int wchar_ta_length(int* str  );
int wstring_length(int* str  );
char* string_lower_case(char* str);
char* string_upper_case(char* str);
int* wchar_tp_substring(int* str  , int head, int tail);
int charp_index_count(char* str, char* search_str, int count, int default_value);
int charp_rindex(char* str, char* search_str, int default_value);
int charp_rindex_count(char* str, char* search_str, int count, int default_value);
char* charp_strip(char* self);
char* wchar_tp_to_string(int* wstr  );
char* wchar_ta_to_string(int* wstr  );
int* charp_to_wstring(char* str);
int* chara_to_wstring(char* str);
int* wchar_tp_delete(int* str  , int head, int tail);
int wchar_tp_index(int* str  , int* search_str  , int default_value);
int wchar_tp_rindex(int* str  , int* search_str  , int default_value);
int* wchar_tp_reverse(int* str  );
int* wchar_tp_multiply(int* str  , int n);
int* wchar_tp_printable(int* str  );
int wchar_tp_compare(int* left  , int* right  );
int wstring_compare(int* left  , int* right  );
int* wchar_tp_operator_mult(int* str  , int n);
int* wstring_operator_mult(int* str  , int n);
_Bool wstring_operator_equals(int* left  , int* right  );
_Bool wstring_operator_not_equals(int* left  , int* right  );
int* wchar_tp_operator_add(int* left  , int* right  );
int* wstring_operator_add(int* left  , int* right  );
int charp_index(char* str, char* search_str, int default_value);
char* charp_replace(char* self, int index, char c);
char* charp_multiply(char* str, int n);
struct list$1char$ph* charp_split_str(char* self, char* str);
unsigned int wchar_tp_get_hash_key(int* value  );
_Bool wstring_equals(int* left  , int* right  );
_Bool wchar_t_operator_equals(int left  , int right  );
_Bool wchar_t_operator_not_equals(int left  , int right  );
unsigned int wchar_t_get_hash_key(int value  );
_Bool wchar_t_equals(int left  , int right  );
char* wchar_t_to_string(int wc  );
char* xrealpath(char* path);
char* xdirname(char* path);
unsigned long xwcslen(int* wstr  );
int* wstring_substring(int* str  , int head, int tail);
int string_index_count(char* str, char* search_str, int count, int default_value);
int string_rindex(char* str, char* search_str, int default_value);
int string_rindex_count(char* str, char* search_str, int count, int default_value);
char* string_strip(char* self);
char* wstring_to_string(int* wstr  );
int* int_to_wstring(int self);
int* wstring_delete(int* str  , int head, int tail);
int wstring_index(int* str  , int* search_str  , int default_value);
int wstring_rindex(int* str  , int* search_str  , int default_value);
int* wstring_reverse(int* str  );
int* wstring_multiply(int* str  , int n);
int* wstring_printable(int* str  );
unsigned int wstring_get_hash_key(int* value  );
int string_index(char* str, char* search_str, int default_value);
char* string_replace(char* self, int index, char c);
char* string_multiply(char* str, int n);
struct list$1char$ph* string_split_str(char* self, char* str);
int* string_to_wstring(char* str);
char* charp_chomp(char* str);
_Bool wchar_tp_equals(int* left  , int* right  );
_Bool wchar_tp_operator_equals(int* left  , int* right  );
_Bool wchar_tp_operator_not_equals(int* left  , int* right  );
char* FILE_read(struct _IO_FILE* f  );
int FILE_write(struct _IO_FILE* f  , char* str);
int FILE_fclose(struct _IO_FILE* f  );
struct _IO_FILE* FILE_fprintf(struct _IO_FILE* f  , const char* msg, ...);
int charp_write(char* self, char* file_name, _Bool append);
char* charp_read(char* file_name);
struct list$1char$ph* FILE_readlines(struct _IO_FILE* f  );
_Bool xiswalpha(int c  );
_Bool xiswblank(int c  );
_Bool xiswdigit(int c  );
_Bool xiswalnum(int c  );
_Bool xiswascii(int c  );
struct sClass* sClass_initialize(struct sClass* self, char* name, _Bool number, _Bool union_, _Bool generics, _Bool method_generics, _Bool protocol_, _Bool struct_, _Bool float_, int generics_num, int method_generics_num, _Bool enum_, _Bool uniq_, _Bool typename, struct sInfo* info  );
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
int err_msg(struct sInfo* info  , char* msg, ...);
int err_msg2(struct sInfo* info  , char* msg, ...);
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
void add_come_code_at_function_head(struct sInfo* info  , char* code, ...);
void add_come_code_at_come_header(struct sInfo* info  , char* id  , const char* msg, ...);
void add_come_code_at_come_struct_header(struct sInfo* info  , char* id  , const char* msg, ...);
void add_come_code_at_function_head2(struct sInfo* info  , char* code, ...);
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
_Bool create_equals_method(struct sType* type  , struct sInfo* info  );
_Bool create_operator_equals_method(struct sType* type  , struct sInfo* info  );
_Bool create_operator_not_equals_method(struct sType* type  , struct sInfo* info  );
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
void transpile_toplevel(_Bool block, struct sInfo* info  );
struct sNode* reverse_node(struct sNode* value, struct sInfo* info  );
struct sFun* compile_uniq_function(struct sFun* fun  , struct sInfo* info  );
struct sNode* cast_node(struct sType* type  , struct sNode* node, struct sInfo* info  );
struct sNode* reffence_node(struct sNode* value, struct sInfo* info  );
struct tuple2$2char$phsGenericsFun$p* make_method_generics_function(char* fun_name  , struct list$1sType$ph* method_generics_types, struct sInfo* info  );
struct sNode* create_return_node(struct sNode* value, char* value_source  , struct sInfo* info  );
struct sNode* post_position_operator(struct sNode* node, struct sInfo* info  );
_Bool create_method_generics_fun(char* fun_name  , struct sGenericsFun* generics_fun  , struct sInfo* info  );
_Bool operator_overload_fun_self(struct sType* type  , char* fun_name, struct sNode* node, struct CVALUE* left_value  , struct sInfo* info  );
void caller_begin(struct sInfo* info  );
void caller_end(struct sInfo* info  );
struct sNode* craete_logical_denial(struct sNode* node, struct sInfo* info  );
struct sNode* parse_normal_block(_Bool clang, struct sInfo* info  );
struct tuple2$2char$phchar$ph* parse_function_attribute(struct sInfo* info  );
struct sNode* get_number(_Bool minus, struct sInfo* info  );
struct sNode* get_oct_number(struct sInfo* info  );
struct sNode* get_hex_number(_Bool minus, struct sInfo* info  );
struct sNode* create_int_node(char* value  , struct sInfo* info  );
struct tuple2$2sFun$pchar$ph* create_pthread_fun(struct sType* type  , char* fun_name, struct sInfo* info  );
struct tuple2$2sFun$pchar$ph* create_finalizer_automatically(struct sType* type  , char* fun_name, struct sInfo* info  );
struct tuple2$2sFun$pchar$ph* create_to_string_automatically(struct sType* type  , char* fun_name, struct sInfo* info  );
struct tuple2$2sFun$pchar$ph* create_cloner_automatically(struct sType* type  , char* fun_name, struct sInfo* info  );
struct tuple2$2sFun$pchar$ph* create_equals_automatically(struct sType* type  , char* fun_name, struct sInfo* info  );
struct tuple2$2sFun$pchar$ph* create_operator_equals_automatically(struct sType* type  , char* fun_name, struct sInfo* info  );
struct tuple2$2sFun$pchar$ph* create_operator_not_equals_automatically(struct sType* type  , char* fun_name, struct sInfo* info  );
struct tuple2$2sFun$pchar$ph* create_not_equals_automatically(struct sType* type  , char* fun_name, struct sInfo* info  );
struct tuple2$2sFun$pchar$ph* create_get_hash_key_automatically(struct sType* type  , char* fun_name, struct sInfo* info  );
char* skip_block(struct sInfo* info  , _Bool return_self_at_last);
char* skip_paren(struct sInfo* info  );
_Bool parsecmp(char* p2, struct sInfo* info  );
char* parse_word(_Bool digits, struct sInfo* info  );
char* backtrace_parse_word(struct sInfo* info  );
void skip_spaces_and_lf(struct sInfo* info  );
void skip_spaces_and_lf2(struct sInfo* info  );
struct tuple2$2char$ph_Bool$* create_generics_fun(char* fun_name  , struct sGenericsFun* generics_fun  , struct sType* generics_type  , struct sInfo* info  );
struct sBlock* parse_block(struct sInfo* info  , _Bool return_self_at_last, _Bool in_function);
int transpile_block(struct sBlock* block  , struct list$1sType$ph* param_types, struct list$1char$ph* param_names, struct sInfo* info  , _Bool no_var_table, _Bool loop_block);
void arrange_stack(struct sInfo* info  , int top);
struct sNode* parse_function(struct sInfo* info  );
struct sNode* statment(struct sInfo* info  );
struct sNode* top_level_v1(char* buf, char* head, int head_sline, struct sInfo* info  );
struct sNode* top_level_v99(char* buf, char* head, int head_sline, struct sInfo* info  );
struct sNode* expression_node_v1(struct sInfo* info  );
struct sNode* expression_node_v99(struct sInfo* info  );
struct sNode* expression_node_v98(struct sInfo* info  );
struct sNode* expression_node_v97(struct sInfo* info  );
int transpile(struct sInfo* info  );
void parse_sharp_v5(struct sInfo* info  );
char* create_method_name(struct sType* obj_type  , _Bool no_pointer_name, char* fun_name, struct sInfo* info  , _Bool array_equal_pointer);
char* create_method_name_original_obj_type(struct sType* obj_type  , _Bool no_pointer_name, char* fun_name, struct sInfo* info  , _Bool array_equal_pointer);
char* create_non_method_name(struct sType* obj_type  , _Bool no_pointer_name, char* fun_name, struct sInfo* info  , _Bool array_equal_pointer);
char* create_method_name_using_class(struct sClass* obj_class  , char* fun_name, struct sInfo* info  );
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
struct sNode* create_load_var(char* var_name, struct sInfo* info  );
struct sNode* parse_array_initializer(struct sInfo* info  );
struct sNode* parse_struct_initializer(struct sInfo* info  );
struct sNode* parse_global_variable(struct sInfo* info  );
struct sNode* load_var(char* name  , struct sInfo* info  );
struct sNode* string_node_v7(char* buf, char* head, int head_sline, struct sInfo* info  );
void add_variable_to_table(char* name, struct sType* type  , struct sInfo* info  , _Bool function_param, _Bool comma);
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
_Bool operator_overload_fun(struct sType* type  , char* fun_name, struct sNode* left_node, struct sNode* right_node, struct CVALUE* left_value  , struct CVALUE* right_value  , _Bool break_guard, struct sInfo* info  );
struct sNode* expression_v13(struct sInfo* info  , _Bool type_name_exp);
struct sNode* post_op_v13(struct sNode* node, struct sInfo* info  );
struct sNode* string_node_v13(char* buf, char* head, int head_sline, struct sInfo* info  );
void child_output_struct(struct sType* type  , char* struct_name  , struct buffer* buf  , _Bool* existance_generics, char* name  , int indent, struct sInfo* info  , _Bool* named_child);
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
struct tuple3$3char$phsFun$psGenericsFun$p* get_method(char* fun_name, struct sType* obj_type  , struct sInfo* info  );
struct sNode* create_method_call(char* fun_name, struct sNode* obj, struct list$1tuple2$2char$phsNode$ph$ph* params, struct buffer* method_block  , int method_block_sline, struct list$1sType$ph* method_generics_types, struct sInfo* info  );
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
_Bool is_type_name(char* buf, struct sInfo* info  );
static struct sClass* map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char* key  );
static void sClass_finalize(struct sClass* self  );
static void list$1tuple2$2char$phsType$ph$ph$p_finalize(struct list$1tuple2$2char$phsType$ph$ph* self);
static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self);
static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self);
static void sType_finalize(struct sType* self  );
static void list$1sType$ph$p_finalize(struct list$1sType$ph* self);
static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self);
static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self);
static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self);
static void list$1int$$p_finalize(struct list$1int$* self);
static void list_item$1int$$p_finalize(struct list_item$1int$* self);
static void list$1char$ph$p_finalize(struct list$1char$ph* self);
static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self);
static struct sClass* map$2char$phsClass$ph_operator_load_element(struct map$2char$phsClass$ph* self, char* key  );
static struct sType* map$2char$phsType$ph$p_operator_load_element(struct map$2char$phsType$ph* self, char* key  );
static struct sType* map$2char$phsType$ph_operator_load_element(struct map$2char$phsType$ph* self, char* key  );
static _Bool list$1char$ph_contained(struct list$1char$ph* self, char* item  , _Bool by_pointer);
static char* list$1char$ph_begin(struct list$1char$ph* self);
static _Bool list$1char$ph_end(struct list$1char$ph* self);
static char* list$1char$ph_next(struct list$1char$ph* self);
_Bool is_contained_generics_class(struct sType* type  , struct sInfo* info  );
static struct sType* sType_clone(struct sType* self  );
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
static struct sType* list$1sType$ph_begin(struct list$1sType$ph* self);
static _Bool list$1sType$ph_end(struct list$1sType$ph* self);
static struct sType* list$1sType$ph_next(struct list$1sType$ph* self);
struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$* parse_params(struct sInfo* info  , _Bool in_constructor_);
static void tuple3$3sType$phchar$ph_Bool$$p_finalize(struct tuple3$3sType$phchar$ph_Bool$* self);
static struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phint$* tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phint$_initialize(struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phint$* self, struct list$1sType$ph* v1, struct list$1char$ph* v2, struct list$1char$ph* v3, int v4);
static void tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phint$$p_finalize(struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phint$* self);
static void tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$$p_finalize(struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$* self);
static struct list$1sType$ph* list$1sType$ph_push_back(struct list$1sType$ph* self, struct sType* item  );
static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item  );
static struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$* tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$_initialize(struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$* self, struct list$1sType$ph* v1, struct list$1char$ph* v2, struct list$1char$ph* v3, _Bool v4);
_Bool check_assign_type(char* msg, struct sType* left_type  , struct sType* right_type  , struct CVALUE* come_value  , struct sInfo* info  );
static int list$1sNode$ph_length(struct list$1sNode$ph* self);
static int list$1sType$ph_length(struct list$1sType$ph* self);
void cast_type(struct sType* left_type  , struct sType* right_type  , struct CVALUE* come_value  , struct sInfo* info  );
struct tuple2$2char$phchar$ph* parse_attribute(struct sInfo* info  );
static struct tuple2$2char$phchar$ph* tuple2$2char$phchar$ph_initialize(struct tuple2$2char$phchar$ph* self, char* v1  , char* v2  );
static void tuple2$2char$phchar$ph$p_finalize(struct tuple2$2char$phchar$ph* self);
void parse_struct_attribute_skip_paren(struct sInfo* info  );
char* parse_struct_attribute(struct sInfo* info  );
struct tuple2$2sType$phchar$ph* parse_variable_name_on_multiple_declare(struct sType* base_type_name  , _Bool first, struct sInfo* info  );
static struct list$1sNode$ph* list$1sNode$ph_push_back(struct list$1sNode$ph* self, struct sNode* item);
static struct tuple2$2sType$phchar$ph* tuple2$2sType$phchar$ph_initialize(struct tuple2$2sType$phchar$ph* self, struct sType* v1  , char* v2  );
static void tuple2$2sType$phchar$ph$p_finalize(struct tuple2$2sType$phchar$ph* self);
void skip_pointer_attribute(struct sInfo* info  );
struct tuple3$3sType$phchar$ph_Bool$* backtrace_parse_type(_Bool parse_variable_name, struct sInfo* info  );
static struct tuple3$3sType$phchar$ph_Bool$* tuple3$3sType$phchar$ph_Bool$_initialize(struct tuple3$3sType$phchar$ph_Bool$* self, struct sType* v1  , char* v2  , _Bool v3);
struct tuple3$3sType$phchar$ph_Bool$* parse_type(struct sInfo* info  , _Bool parse_variable_name, _Bool parse_multiple_type, _Bool in_function_parametor);
static struct tuple3$3sType$phchar$phint$* tuple3$3sType$phchar$phint$_initialize(struct tuple3$3sType$phchar$phint$* self, struct sType* v1  , char* v2  , int v3);
static void tuple3$3sType$phchar$phint$$p_finalize(struct tuple3$3sType$phchar$phint$* self);
static int list$1char$ph_length(struct list$1char$ph* self);
static char* list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position);
static char* list$1char$ph_operator_load_element(struct list$1char$ph* self, int position);
static struct list$1sNode$ph* list$1sNode$ph_each(struct list$1sNode$ph* self, void* parent, void (*block)(void*,struct sNode*,int,_Bool*));
void method_block1_06typenc(struct __current_stack1__* parent, struct sNode* it, int it2, _Bool* it3);
static struct buffer* map$2char$phbuffer$ph$p_operator_load_element(struct map$2char$phbuffer$ph* self, char* key  );
static struct buffer* map$2char$phbuffer$ph_operator_load_element(struct map$2char$phbuffer$ph* self, char* key  );
static struct map$2char$phsClass$ph* map$2char$phsClass$ph_insert(struct map$2char$phsClass$ph* self, char* key  , struct sClass* item  , _Bool by_pointer);
static void map$2char$phsClass$ph_rehash(struct map$2char$phsClass$ph* self);
static char* map$2char$phsClass$ph_begin(struct map$2char$phsClass$ph* self);
static _Bool map$2char$phsClass$ph_end(struct map$2char$phsClass$ph* self);
static char* map$2char$phsClass$ph_next(struct map$2char$phsClass$ph* self);
static struct sClass* map$2char$phsClass$ph_at(struct map$2char$phsClass$ph* self, char* key  , struct sClass* default_value  , _Bool by_pointer);
static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char* item  , _Bool by_pointer);
static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail);
static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self);
static struct list$1sNode$ph* list$1sNode$ph_reset(struct list$1sNode$ph* self);
static struct list$1int$* list$1int$_push_back(struct list$1int$* self, int item);
void method_block2_06typenc(struct __current_stack2__* parent, struct sNode* it, int it2, _Bool* it3);
void method_block3_06typenc(struct __current_stack3__* parent, struct sNode* it, int it2, _Bool* it3);
static struct list$1sNode$ph* list$1sNode$ph_initialize_with_values(struct list$1sNode$ph* self, int num_value, struct sNode** values);
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
_Bool is_type_name(char* buf, struct sInfo* info  )
{
        struct neo_frame fr;
    fr.prev = neo_current_frame;
    fr.fun_name  = "is_type_name";
    neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sClass* klass  ;
    struct sType* type  ;
    void* __right_value1 = (void*)0;
    void* __right_value2 = (void*)0;
    struct sClass* generics_class  ;
    _Bool generics_type_name;
    _Bool mgenerics_type_name;
    klass=((struct sClass*)(__right_value0=map$2char$phsClass$ph_operator_load_element(info->classes,buf)));
    type=((struct sType*)(__right_value0=map$2char$phsType$ph_operator_load_element(info->types,buf)));
    generics_class=((struct sClass*)(__right_value2=map$2char$phsClass$ph_operator_load_element(info->generics_classes,((char*)(__right_value1=__builtin_string(buf))))));
    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
    generics_type_name=list$1char$ph_contained(info->generics_type_names,((char*)(__right_value0=__builtin_string(buf))),0);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    mgenerics_type_name=list$1char$ph_contained(info->method_generics_type_names,((char*)(__right_value0=__builtin_string(buf))),0);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    if(gComeC) {
           neo_current_frame = fr.prev;
        return (type&&type->mTypedef)||(klass&&klass->mNumber)||(klass&&klass->mFloat)||charp_operator_equals(buf,"_Thread_local")||charp_operator_equals(buf,"__thread")||charp_operator_equals(buf,"_Complex")||charp_operator_equals(buf,"const")||charp_operator_equals(buf,"register")||charp_operator_equals(buf,"static")||charp_operator_equals(buf,"volatile")||charp_operator_equals(buf,"unsigned")||charp_operator_equals(buf,"__volatile__")||charp_operator_equals(buf,"signed")||charp_operator_equals(buf,"struct")||charp_operator_equals(buf,"enum")||charp_operator_equals(buf,"union")||charp_operator_equals(buf,"extern")||info->in_top_level&&(charp_operator_equals(buf,"inline")||charp_operator_equals(buf,"__inline")||charp_operator_equals(buf,"__always_inline")||charp_operator_equals(buf,"__inline__")||charp_operator_equals(buf,"__forceinline"))||charp_operator_equals(buf,"__extension__")||charp_operator_equals(buf,"_Noreturn")||charp_operator_equals(buf,"restrict")||charp_operator_equals(buf,"__noreturn")||charp_operator_equals(buf,"_noreturn")||charp_operator_equals(buf,"__typeof__")||charp_operator_equals(buf,"typeof")||charp_operator_equals(buf,"_Nullable")||charp_operator_equals(buf,"_Alignas")||charp_operator_equals(buf,"_Atomic")||charp_operator_equals(buf,"__type__")||charp_operator_equals(buf,"__attribute__")&&*info->p==40||charp_operator_equals(buf,"void");
    }
    else {
           neo_current_frame = fr.prev;
        return generics_class||generics_type_name||mgenerics_type_name||klass||type||charp_operator_equals(buf,"const")||charp_operator_equals(buf,"register")||charp_operator_equals(buf,"static")||charp_operator_equals(buf,"volatile")||charp_operator_equals(buf,"__volatile__")||charp_operator_equals(buf,"unsigned")||charp_operator_equals(buf,"signed")||charp_operator_equals(buf,"struct")||charp_operator_equals(buf,"enum")||charp_operator_equals(buf,"union")||charp_operator_equals(buf,"extern")||info->in_top_level&&(charp_operator_equals(buf,"inline")||charp_operator_equals(buf,"__inline")||charp_operator_equals(buf,"__always_inline")||charp_operator_equals(buf,"__inline__")||charp_operator_equals(buf,"__forceinline"))||charp_operator_equals(buf,"__extension__")||charp_operator_equals(buf,"_Thread_local")||charp_operator_equals(buf,"__thread")||charp_operator_equals(buf,"_Complex")||(info->in_top_level&&charp_operator_equals(buf,"_Noreturn"))||(info->in_top_level&&charp_operator_equals(buf,"__noreturn"))||(info->in_top_level&&charp_operator_equals(buf,"_noreturn"))||charp_operator_equals(buf,"__typeof__")||charp_operator_equals(buf,"typeof")||charp_operator_equals(buf,"_Nullable")||charp_operator_equals(buf,"_Alignas")||charp_operator_equals(buf,"_Atomic")||charp_operator_equals(buf,"restrict")||charp_operator_equals(buf,"__type__")||charp_operator_equals(buf,"__attribute__")&&*info->p==40||(charp_operator_equals(buf,"tup")&&(*info->p==58||*info->p==40))||(info->in_top_level&&charp_operator_equals(buf,"record"))||(info->in_top_level&&charp_operator_equals(buf,"uniq"));
    }
    neo_current_frame = fr.prev;
}

static struct sClass* map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char* key  )
{
        struct neo_frame fr;
    fr.prev = neo_current_frame;
    fr.fun_name  = "map$2char$phsClass$ph$p_operator_load_element";
    neo_current_frame = &fr;
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
    while(1) {
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
        neo_current_frame = fr.prev;
}

static void sClass_finalize(struct sClass* self  )
{
        struct neo_frame fr;
    fr.prev = neo_current_frame;
    fr.fun_name  = "sClass_finalize";
    neo_current_frame = &fr;
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
        struct neo_frame fr;
    fr.prev = neo_current_frame;
    fr.fun_name  = "list$1tuple2$2char$phsType$ph$ph$p_finalize";
    neo_current_frame = &fr;
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
        struct neo_frame fr;
    fr.prev = neo_current_frame;
    fr.fun_name  = "list_item$1tuple2$2char$phsType$ph$ph$p_finalize";
    neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
            neo_current_frame = fr.prev;
}

static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self)
{
        struct neo_frame fr;
    fr.prev = neo_current_frame;
    fr.fun_name  = "tuple2$2char$phsType$ph$p_finalize";
    neo_current_frame = &fr;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
            neo_current_frame = fr.prev;
}

static void sType_finalize(struct sType* self  )
{
        struct neo_frame fr;
    fr.prev = neo_current_frame;
    fr.fun_name  = "sType_finalize";
    neo_current_frame = &fr;
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
        struct neo_frame fr;
    fr.prev = neo_current_frame;
    fr.fun_name  = "list$1sType$ph$p_finalize";
    neo_current_frame = &fr;
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
        struct neo_frame fr;
    fr.prev = neo_current_frame;
    fr.fun_name  = "list_item$1sType$ph$p_finalize";
    neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
            neo_current_frame = fr.prev;
}

static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self)
{
        struct neo_frame fr;
    fr.prev = neo_current_frame;
    fr.fun_name  = "list$1sNode$ph$p_finalize";
    neo_current_frame = &fr;
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
        struct neo_frame fr;
    fr.prev = neo_current_frame;
    fr.fun_name  = "list_item$1sNode$ph$p_finalize";
    neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        ((self->item) ? self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
            neo_current_frame = fr.prev;
}

static void list$1int$$p_finalize(struct list$1int$* self)
{
        struct neo_frame fr;
    fr.prev = neo_current_frame;
    fr.fun_name  = "list$1int$$p_finalize";
    neo_current_frame = &fr;
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
        struct neo_frame fr;
    fr.prev = neo_current_frame;
    fr.fun_name  = "list_item$1int$$p_finalize";
    neo_current_frame = &fr;
            neo_current_frame = fr.prev;
}

static void list$1char$ph$p_finalize(struct list$1char$ph* self)
{
        struct neo_frame fr;
    fr.prev = neo_current_frame;
    fr.fun_name  = "list$1char$ph$p_finalize";
    neo_current_frame = &fr;
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
        struct neo_frame fr;
    fr.prev = neo_current_frame;
    fr.fun_name  = "list_item$1char$ph$p_finalize";
    neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0, 0, (void*)0));
    }
            neo_current_frame = fr.prev;
}

static struct sClass* map$2char$phsClass$ph_operator_load_element(struct map$2char$phsClass$ph* self, char* key  )
{
        struct neo_frame fr;
    fr.prev = neo_current_frame;
    fr.fun_name  = "map$2char$phsClass$ph_operator_load_element";
    neo_current_frame = &fr;
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
    while(1) {
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
        neo_current_frame = fr.prev;
}

static struct sType* map$2char$phsType$ph$p_operator_load_element(struct map$2char$phsType$ph* self, char* key  )
{
        struct neo_frame fr;
    fr.prev = neo_current_frame;
    fr.fun_name  = "map$2char$phsType$ph$p_operator_load_element";
    neo_current_frame = &fr;
    struct sType* default_value  ;
    struct sType* __result_obj__0  ;
    unsigned int hash;
    unsigned int it;
    memset(&default_value,0,sizeof(struct sType*));
    if(self==((void*)0)) {
        __result_obj__0 = (struct sType*)come_increment_ref_count(default_value);
        come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        neo_current_frame = fr.prev;
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
                neo_current_frame = fr.prev;
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
                neo_current_frame = fr.prev;
                come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
        }
        else {
            __result_obj__0 = (struct sType*)come_increment_ref_count(default_value);
            come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            neo_current_frame = fr.prev;
            come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__0;
        }
    }
    __result_obj__0 = (struct sType*)come_increment_ref_count(default_value);
    come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
        neo_current_frame = fr.prev;
}

static struct sType* map$2char$phsType$ph_operator_load_element(struct map$2char$phsType$ph* self, char* key  )
{
        struct neo_frame fr;
    fr.prev = neo_current_frame;
    fr.fun_name  = "map$2char$phsType$ph_operator_load_element";
    neo_current_frame = &fr;
    struct sType* default_value  ;
    struct sType* __result_obj__0  ;
    unsigned int hash;
    unsigned int it;
    memset(&default_value,0,sizeof(struct sType*));
    if(self==((void*)0)) {
        __result_obj__0 = (struct sType*)come_increment_ref_count(default_value);
        come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        neo_current_frame = fr.prev;
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
                neo_current_frame = fr.prev;
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
                neo_current_frame = fr.prev;
                come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
        }
        else {
            __result_obj__0 = (struct sType*)come_increment_ref_count(default_value);
            come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            neo_current_frame = fr.prev;
            come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__0;
        }
    }
    __result_obj__0 = (struct sType*)come_increment_ref_count(default_value);
    come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
        neo_current_frame = fr.prev;
}

static _Bool list$1char$ph_contained(struct list$1char$ph* self, char* item  , _Bool by_pointer)
{
        struct neo_frame fr;
    fr.prev = neo_current_frame;
    fr.fun_name  = "list$1char$ph_contained";
    neo_current_frame = &fr;
    char* it  ;
    if(self==((void*)0)) {
           neo_current_frame = fr.prev;
        return 0;
    }
    for(it=list$1char$ph_begin(self);!list$1char$ph_end(self);it=list$1char$ph_next(self)){
        if((!by_pointer&&string_equals(it,item))||(by_pointer&&it==item)) {
               neo_current_frame = fr.prev;
            return 1;
        }
    }
       neo_current_frame = fr.prev;
    return 0;
        neo_current_frame = fr.prev;
}

static char* list$1char$ph_begin(struct list$1char$ph* self)
{
        struct neo_frame fr;
    fr.prev = neo_current_frame;
    fr.fun_name  = "list$1char$ph_begin";
    neo_current_frame = &fr;
    char* result  ;
    char* __result_obj__0  ;
    char* result_0  ;
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
    memset(&result_0,0,sizeof(char*));
    __result_obj__0 = result_0;
    neo_current_frame = fr.prev;
    return __result_obj__0;
        neo_current_frame = fr.prev;
}

static _Bool list$1char$ph_end(struct list$1char$ph* self)
{
        struct neo_frame fr;
    fr.prev = neo_current_frame;
    fr.fun_name  = "list$1char$ph_end";
    neo_current_frame = &fr;
       neo_current_frame = fr.prev;
    return self==((void*)0)||self->it==((void*)0);
        neo_current_frame = fr.prev;
}

static char* list$1char$ph_next(struct list$1char$ph* self)
{
        struct neo_frame fr;
    fr.prev = neo_current_frame;
    fr.fun_name  = "list$1char$ph_next";
    neo_current_frame = &fr;
    char* result  ;
    char* __result_obj__0  ;
    char* result_1  ;
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
    memset(&result_1,0,sizeof(char*));
    __result_obj__0 = result_1;
    neo_current_frame = fr.prev;
    return __result_obj__0;
        neo_current_frame = fr.prev;
}

_Bool is_contained_generics_class(struct sType* type  , struct sInfo* info  )
{
        struct neo_frame fr;
    fr.prev = neo_current_frame;
    fr.fun_name  = "is_contained_generics_class";
    neo_current_frame = &fr;
    struct sType* type2  ;
    void* __right_value0 = (void*)0;
    struct sType* __dec_obj32  ;
    struct sType* __dec_obj33  ;
    struct list$1sType$ph* o2_saved;
    struct sType* it  ;
    _Bool __result_obj__0;
    memset(&type2, 0, sizeof(type2));
    if(type->mNoSolvedGenericsType) {
        __dec_obj32=type2,
        type2=(struct sType*)come_increment_ref_count(sType_clone(type->mNoSolvedGenericsType));
        come_call_finalizer(sType_finalize, __dec_obj32,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        __dec_obj33=type2,
        type2=(struct sType*)come_increment_ref_count(sType_clone(type));
        come_call_finalizer(sType_finalize, __dec_obj33,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    for(o2_saved=(struct list$1sType$ph*)come_increment_ref_count(type2->mGenericsTypes),it=list$1sType$ph_begin(o2_saved);!list$1sType$ph_end(o2_saved);it=list$1sType$ph_next(o2_saved)){
        if(is_contained_generics_class(it,info)) {
            __result_obj__0 = 1;
            come_call_finalizer(list$1sType$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
    }
    come_call_finalizer(list$1sType$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(type2->mClass->mGenerics) {
        __result_obj__0 = 1;
        come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(type2->mClass->mMethodGenerics) {
        __result_obj__0 = 1;
        come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    __result_obj__0 = 0;
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
    neo_current_frame = fr.prev;
}

static struct sType* sType_clone(struct sType* self  )
{
        struct neo_frame fr;
    fr.prev = neo_current_frame;
    fr.fun_name  = "sType_clone";
    neo_current_frame = &fr;
    struct sType* __result_obj__0  ;
    void* __right_value0 = (void*)0;
    struct sType* result  ;
    struct sType* __dec_obj1  ;
    struct sType* __dec_obj2  ;
    struct list$1sType$ph* __dec_obj6;
    struct sType* __dec_obj7  ;
    struct sNode* __dec_obj8;
    struct sNode* __dec_obj9;
    char* __dec_obj10  ;
    char* __dec_obj11  ;
    char* __dec_obj12  ;
    char* __dec_obj13  ;
    char* __dec_obj14  ;
    char* __dec_obj15  ;
    struct list$1sNode$ph* __dec_obj19;
    struct list$1sNode$ph* __dec_obj20;
    struct list$1int$* __dec_obj21;
    struct list$1int$* __dec_obj22;
    struct sType* __dec_obj23  ;
    char* __dec_obj24  ;
    struct list$1sType$ph* __dec_obj25;
    struct list$1char$ph* __dec_obj29;
    struct sType* __dec_obj30  ;
    struct sNode* __dec_obj31;
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
        __dec_obj1=result->mOriginalLoadVarType,
        result->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(sType_clone(self->mOriginalLoadVarType));
        come_call_finalizer(sType_finalize, __dec_obj1,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj2=result->mChannelType,
        result->mChannelType=(struct sType*)come_increment_ref_count(sType_clone(self->mChannelType));
        come_call_finalizer(sType_finalize, __dec_obj2,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj6=result->mGenericsTypes,
        result->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mGenericsTypes));
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj6,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj7=result->mNoSolvedGenericsType,
        result->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(sType_clone(self->mNoSolvedGenericsType));
        come_call_finalizer(sType_finalize, __dec_obj7,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj8=result->mSizeNum,
        result->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        (__dec_obj8 ? __dec_obj8 = come_decrement_ref_count(__dec_obj8, ((struct sNode*)__dec_obj8)->finalize, ((struct sNode*)__dec_obj8)->_protocol_obj, 0,0, (void*)0) :0);
    }
    if(self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj9=result->mAlignas,
        result->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        (__dec_obj9 ? __dec_obj9 = come_decrement_ref_count(__dec_obj9, ((struct sNode*)__dec_obj9)->finalize, ((struct sNode*)__dec_obj9)->_protocol_obj, 0,0, (void*)0) :0);
    }
    if(self!=((void*)0)) {
        result->mAlignasDouble=self->mAlignasDouble;
    }
    if(self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj10=result->mTupleName,
        result->mTupleName=(char*)come_increment_ref_count((char*)come_memdup(self->mTupleName, "sType_clone", 12, "char*"));
        __dec_obj10 = come_decrement_ref_count(__dec_obj10, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj11=result->mAttribute,
        result->mAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mAttribute, "sType_clone", 13, "char*"));
        __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->mVarAttribute!=((void*)0)) {
        __dec_obj12=result->mVarAttribute,
        result->mVarAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mVarAttribute, "sType_clone", 14, "char*"));
        __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0,0, (void*)0);
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
        __dec_obj13=result->mAnonymousName,
        result->mAnonymousName=(char*)come_increment_ref_count((char*)come_memdup(self->mAnonymousName, "sType_clone", 40, "char*"));
        __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result->mInnerStruct=self->mInnerStruct;
    }
    if(self!=((void*)0)&&self->mInnerStructName!=((void*)0)) {
        __dec_obj14=result->mInnerStructName,
        result->mInnerStructName=(char*)come_increment_ref_count((char*)come_memdup(self->mInnerStructName, "sType_clone", 42, "char*"));
        __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0,0, (void*)0);
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
        __dec_obj15=result->mAsmName,
        result->mAsmName=(char*)come_increment_ref_count((char*)come_memdup(self->mAsmName, "sType_clone", 47, "char*"));
        __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result->mTypedef=self->mTypedef;
    }
    if(self!=((void*)0)) {
        result->mMultipleTypes=self->mMultipleTypes;
    }
    if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj19=result->mArrayNum,
        result->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mArrayNum));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj19,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mVarNameArrayNum!=((void*)0)) {
        __dec_obj20=result->mVarNameArrayNum,
        result->mVarNameArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mVarNameArrayNum));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj20,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mArrayStatic!=((void*)0)) {
        __dec_obj21=result->mArrayStatic,
        result->mArrayStatic=(struct list$1int$*)come_increment_ref_count(list$1int$$p_clone(self->mArrayStatic));
        come_call_finalizer(list$1int$_finalize, __dec_obj21,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mArrayRestrict!=((void*)0)) {
        __dec_obj22=result->mArrayRestrict,
        result->mArrayRestrict=(struct list$1int$*)come_increment_ref_count(list$1int$$p_clone(self->mArrayRestrict));
        come_call_finalizer(list$1int$_finalize, __dec_obj22,(void*)0, (void*)0, 0, 0, 0, (void*)0);
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
        __dec_obj23=result->mTypedefOriginalType,
        result->mTypedefOriginalType=(struct sType*)come_increment_ref_count(sType_clone(self->mTypedefOriginalType));
        come_call_finalizer(sType_finalize, __dec_obj23,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj24=result->mOriginalTypeName,
        result->mOriginalTypeName=(char*)come_increment_ref_count((char*)come_memdup(self->mOriginalTypeName, "sType_clone", 59, "char*"));
        __dec_obj24 = come_decrement_ref_count(__dec_obj24, (void*)0, (void*)0, 0,0, (void*)0);
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
        __dec_obj25=result->mParamTypes,
        result->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mParamTypes));
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj25,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj29=result->mParamNames,
        result->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->mParamNames));
        come_call_finalizer(list$1char$ph_finalize, __dec_obj29,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj30=result->mResultType,
        result->mResultType=(struct sType*)come_increment_ref_count(sType_clone(self->mResultType));
        come_call_finalizer(sType_finalize, __dec_obj30,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)) {
        result->mVarArgs=self->mVarArgs;
    }
    if(self!=((void*)0)&&self->mTypeOfNode!=((void*)0)) {
        __dec_obj31=result->mTypeOfNode,
        result->mTypeOfNode=(struct sNode*)come_increment_ref_count(sNode_clone(self->mTypeOfNode));
        (__dec_obj31 ? __dec_obj31 = come_decrement_ref_count(__dec_obj31, ((struct sNode*)__dec_obj31)->finalize, ((struct sNode*)__dec_obj31)->_protocol_obj, 0,0, (void*)0) :0);
    }
    __result_obj__0 = (struct sType*)come_increment_ref_count(result);
    come_call_finalizer(sType_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
            neo_current_frame = fr.prev;
}

static struct list$1sType$ph* list$1sType$ph$p_clone(struct list$1sType$ph* self)
{
        struct neo_frame fr;
    fr.prev = neo_current_frame;
    fr.fun_name  = "list$1sType$ph$p_clone";
    neo_current_frame = &fr;
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
            neo_current_frame = fr.prev;
}

static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self)
{
        struct neo_frame fr;
    fr.prev = neo_current_frame;
    fr.fun_name  = "list$1sType$ph_initialize";
    neo_current_frame = &fr;
    struct list$1sType$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__0 = (struct list$1sType$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1sType$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
        neo_current_frame = fr.prev;
}

static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType* item  )
{
        struct neo_frame fr;
    fr.prev = neo_current_frame;
    fr.fun_name  = "list$1sType$ph_add";
    neo_current_frame = &fr;
    struct list$1sType$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1sType$ph* litem;
    struct sType* __dec_obj3  ;
    struct list_item$1sType$ph* litem_2;
    struct sType* __dec_obj4  ;
    struct list_item$1sType$ph* litem_3;
    struct sType* __dec_obj5  ;
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
        __dec_obj3=litem->item,
        litem->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj3,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        litem_2=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), (void*)0, 626, "struct list_item$1sType$ph*"))));
        litem_2->prev=self->head;
        litem_2->next=((void*)0);
        __dec_obj4=litem_2->item,
        litem_2->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj4,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem_2;
        self->head->next=litem_2;
    }
    else {
        litem_3=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), (void*)0, 636, "struct list_item$1sType$ph*"))));
        litem_3->prev=self->tail;
        litem_3->next=((void*)0);
        __dec_obj5=litem_3->item,
        litem_3->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj5,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail->next=litem_3;
        self->tail=litem_3;
    }
    self->len++;
    __result_obj__0 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
                neo_current_frame = fr.prev;
}

static void list$1sType$ph_finalize(struct list$1sType$ph* self)
{
        struct neo_frame fr;
    fr.prev = neo_current_frame;
    fr.fun_name  = "list$1sType$ph_finalize";
    neo_current_frame = &fr;
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
        struct neo_frame fr;
    fr.prev = neo_current_frame;
    fr.fun_name  = "sNode_clone";
    neo_current_frame = &fr;
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
            neo_current_frame = fr.prev;
}

static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self)
{
        struct neo_frame fr;
    fr.prev = neo_current_frame;
    fr.fun_name  = "list$1sNode$ph$p_clone";
    neo_current_frame = &fr;
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
            neo_current_frame = fr.prev;
}

static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self)
{
        struct neo_frame fr;
    fr.prev = neo_current_frame;
    fr.fun_name  = "list$1sNode$ph_initialize";
    neo_current_frame = &fr;
    struct list$1sNode$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__0 = (struct list$1sNode$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1sNode$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
        neo_current_frame = fr.prev;
}

static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item)
{
        struct neo_frame fr;
    fr.prev = neo_current_frame;
    fr.fun_name  = "list$1sNode$ph_add";
    neo_current_frame = &fr;
    struct list$1sNode$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1sNode$ph* litem;
    struct sNode* __dec_obj16;
    struct list_item$1sNode$ph* litem_4;
    struct sNode* __dec_obj17;
    struct list_item$1sNode$ph* litem_5;
    struct sNode* __dec_obj18;
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
        __dec_obj16=litem->item,
        litem->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj16 ? __dec_obj16 = come_decrement_ref_count(__dec_obj16, ((struct sNode*)__dec_obj16)->finalize, ((struct sNode*)__dec_obj16)->_protocol_obj, 0,0, (void*)0) :0);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        litem_4=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), (void*)0, 626, "struct list_item$1sNode$ph*"))));
        litem_4->prev=self->head;
        litem_4->next=((void*)0);
        __dec_obj17=litem_4->item,
        litem_4->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj17 ? __dec_obj17 = come_decrement_ref_count(__dec_obj17, ((struct sNode*)__dec_obj17)->finalize, ((struct sNode*)__dec_obj17)->_protocol_obj, 0,0, (void*)0) :0);
        self->tail=litem_4;
        self->head->next=litem_4;
    }
    else {
        litem_5=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), (void*)0, 636, "struct list_item$1sNode$ph*"))));
        litem_5->prev=self->tail;
        litem_5->next=((void*)0);
        __dec_obj18=litem_5->item,
        litem_5->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj18 ? __dec_obj18 = come_decrement_ref_count(__dec_obj18, ((struct sNode*)__dec_obj18)->finalize, ((struct sNode*)__dec_obj18)->_protocol_obj, 0,0, (void*)0) :0);
        self->tail->next=litem_5;
        self->tail=litem_5;
    }
    self->len++;
    __result_obj__0 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
                neo_current_frame = fr.prev;
}

static void list$1sNode$ph_finalize(struct list$1sNode$ph* self)
{
        struct neo_frame fr;
    fr.prev = neo_current_frame;
    fr.fun_name  = "list$1sNode$ph_finalize";
    neo_current_frame = &fr;
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
        struct neo_frame fr;
    fr.prev = neo_current_frame;
    fr.fun_name  = "list$1int$$p_clone";
    neo_current_frame = &fr;
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
            neo_current_frame = fr.prev;
}

static struct list$1int$* list$1int$_initialize(struct list$1int$* self)
{
        struct neo_frame fr;
    fr.prev = neo_current_frame;
    fr.fun_name  = "list$1int$_initialize";
    neo_current_frame = &fr;
    struct list$1int$* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__0 = (struct list$1int$*)come_increment_ref_count(self);
    come_call_finalizer(list$1int$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
        neo_current_frame = fr.prev;
}

static struct list$1int$* list$1int$_add(struct list$1int$* self, int item)
{
        struct neo_frame fr;
    fr.prev = neo_current_frame;
    fr.fun_name  = "list$1int$_add";
    neo_current_frame = &fr;
    struct list$1int$* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1int$* litem;
    struct list_item$1int$* litem_6;
    struct list_item$1int$* litem_7;
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
        litem_6=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), (void*)0, 626, "struct list_item$1int$*"))));
        litem_6->prev=self->head;
        litem_6->next=((void*)0);
        litem_6->item=item;
        self->tail=litem_6;
        self->head->next=litem_6;
    }
    else {
        litem_7=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), (void*)0, 636, "struct list_item$1int$*"))));
        litem_7->prev=self->tail;
        litem_7->next=((void*)0);
        litem_7->item=item;
        self->tail->next=litem_7;
        self->tail=litem_7;
    }
    self->len++;
    __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
                neo_current_frame = fr.prev;
}

static void list$1int$_finalize(struct list$1int$* self)
{
        struct neo_frame fr;
    fr.prev = neo_current_frame;
    fr.fun_name  = "list$1int$_finalize";
    neo_current_frame = &fr;
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
        struct neo_frame fr;
    fr.prev = neo_current_frame;
    fr.fun_name  = "list$1char$ph$p_clone";
    neo_current_frame = &fr;
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
            neo_current_frame = fr.prev;
}

static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self)
{
        struct neo_frame fr;
    fr.prev = neo_current_frame;
    fr.fun_name  = "list$1char$ph_initialize";
    neo_current_frame = &fr;
    struct list$1char$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
        neo_current_frame = fr.prev;
}

static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char* item  )
{
        struct neo_frame fr;
    fr.prev = neo_current_frame;
    fr.fun_name  = "list$1char$ph_add";
    neo_current_frame = &fr;
    struct list$1char$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1char$ph* litem;
    char* __dec_obj26  ;
    struct list_item$1char$ph* litem_8;
    char* __dec_obj27  ;
    struct list_item$1char$ph* litem_9;
    char* __dec_obj28  ;
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
        __dec_obj26=litem->item,
        litem->item=(char*)come_increment_ref_count(item);
        __dec_obj26 = come_decrement_ref_count(__dec_obj26, (void*)0, (void*)0, 0,0, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        litem_8=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), (void*)0, 626, "struct list_item$1char$ph*"))));
        litem_8->prev=self->head;
        litem_8->next=((void*)0);
        __dec_obj27=litem_8->item,
        litem_8->item=(char*)come_increment_ref_count(item);
        __dec_obj27 = come_decrement_ref_count(__dec_obj27, (void*)0, (void*)0, 0,0, (void*)0);
        self->tail=litem_8;
        self->head->next=litem_8;
    }
    else {
        litem_9=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), (void*)0, 636, "struct list_item$1char$ph*"))));
        litem_9->prev=self->tail;
        litem_9->next=((void*)0);
        __dec_obj28=litem_9->item,
        litem_9->item=(char*)come_increment_ref_count(item);
        __dec_obj28 = come_decrement_ref_count(__dec_obj28, (void*)0, (void*)0, 0,0, (void*)0);
        self->tail->next=litem_9;
        self->tail=litem_9;
    }
    self->len++;
    __result_obj__0 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0));
    neo_current_frame = fr.prev;
    return __result_obj__0;
                neo_current_frame = fr.prev;
}

static void list$1char$ph_finalize(struct list$1char$ph* self)
{
        struct neo_frame fr;
    fr.prev = neo_current_frame;
    fr.fun_name  = "list$1char$ph_finalize";
    neo_current_frame = &fr;
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

static struct sType* list$1sType$ph_begin(struct list$1sType$ph* self)
{
        struct neo_frame fr;
    fr.prev = neo_current_frame;
    fr.fun_name  = "list$1sType$ph_begin";
    neo_current_frame = &fr;
    struct sType* result  ;
    struct sType* __result_obj__0  ;
    struct sType* result_10  ;
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
    memset(&result_10,0,sizeof(struct sType*));
    __result_obj__0 = result_10;
    neo_current_frame = fr.prev;
    return __result_obj__0;
        neo_current_frame = fr.prev;
}

static _Bool list$1sType$ph_end(struct list$1sType$ph* self)
{
        struct neo_frame fr;
    fr.prev = neo_current_frame;
    fr.fun_name  = "list$1sType$ph_end";
    neo_current_frame = &fr;
       neo_current_frame = fr.prev;
    return self==((void*)0)||self->it==((void*)0);
        neo_current_frame = fr.prev;
}

static struct sType* list$1sType$ph_next(struct list$1sType$ph* self)
{
        struct neo_frame fr;
    fr.prev = neo_current_frame;
    fr.fun_name  = "list$1sType$ph_next";
    neo_current_frame = &fr;
    struct sType* result  ;
    struct sType* __result_obj__0  ;
    struct sType* result_11  ;
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
    memset(&result_11,0,sizeof(struct sType*));
    __result_obj__0 = result_11;
    neo_current_frame = fr.prev;
    return __result_obj__0;
        neo_current_frame = fr.prev;
}

struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$* parse_params(struct sInfo* info  , _Bool in_constructor_)
{
        struct neo_frame fr;
    fr.prev = neo_current_frame;
    fr.fun_name  = "parse_params";
    neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1sType$ph* param_types;
    struct list$1char$ph* param_names;
    struct list$1char$ph* param_default_parametors;
    _Bool var_args;
    struct sType* type_  ;
    _Bool void_param;
    char* p;
    int sline;
    struct tuple3$3sType$phchar$ph_Bool$* multiple_assign_var1
;    struct sType* param_type  =0;
    char* param_name  =0;
    _Bool err=0;
    struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$* __result_obj__0;
    struct sType* param_type2  ;
    char* p_16;
    _Bool no_comma;
    struct sNode* node;
    char* p2;
    param_types=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), (void*)0, 88, "struct list$1sType$ph*"))));
    param_names=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), (void*)0, 89, "struct list$1char$ph*"))));
    param_default_parametors=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), (void*)0, 90, "struct list$1char$ph*"))));
    var_args=0;
    if(in_constructor_) {
        list$1char$ph_add(param_names,(char*)come_increment_ref_count(xsprintf("self")));
        type_=(struct sType*)come_increment_ref_count(sType_clone(info->class_type));
        type_->mHeap=1;
        list$1sType$ph_add(param_types,(struct sType*)come_increment_ref_count(type_));
        list$1char$ph_add(param_default_parametors,((void*)0));
        come_call_finalizer(sType_finalize, type_, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(info->in_class) {
        list$1char$ph_add(param_names,(char*)come_increment_ref_count(xsprintf("self")));
        list$1sType$ph_add(param_types,(struct sType*)come_increment_ref_count(sType_clone(info->class_type)));
        list$1char$ph_add(param_default_parametors,((void*)0));
    }
    expected_next_character(40,info);
    void_param=0;
    {
        p=info->p;
        sline=info->sline;
        if(parsecmp("void",info)) {
            info->p+=strlen("void");
            skip_spaces_and_lf(info);
            if(*info->p==41) {
                void_param=1;
            }
        }
        info->p=p;
        info->sline=sline;
    }
    if(void_param) {
        if(parsecmp("void",info)) {
            info->p+=strlen("void");
            skip_spaces_and_lf(info);
            if(*info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
        }
    }
    else {
        while(1) {
            if(*info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            skip_spaces_and_lf(info);
            multiple_assign_var1=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=parse_type(info,1,0,1)));
            param_type=(struct sType*)come_increment_ref_count(multiple_assign_var1->v1);
            param_name=(char*)come_increment_ref_count(multiple_assign_var1->v2);
            err=multiple_assign_var1->v3;
            come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            if(!err) {
                printf("%s %d: failed to function parametor\n",info->sname,info->sline);
                __result_obj__0 = (struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$*)come_increment_ref_count(((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phint$*)(__right_value1=tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phint$_initialize((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phint$*)come_increment_ref_count((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phint$*)come_calloc(1, sizeof(struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phint$)*(1), "06type.nc", 152, "struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phint$")),(struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)((void*)0)),(struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)((void*)0)),(struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)((void*)0)),0))));
                come_call_finalizer(sType_finalize, param_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (param_name = come_decrement_ref_count(param_name, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phint$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                neo_current_frame = fr.prev;
                come_call_finalizer(tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
            param_type2=(struct sType*)come_increment_ref_count(solve_generics(param_type,info->generics_type,info));
            list$1sType$ph_push_back(param_types,(struct sType*)come_increment_ref_count(sType_clone(param_type2)));
            list$1char$ph_push_back(param_names,(char*)come_increment_ref_count((char*)come_memdup(param_name, "06type.nc", 158, "char*")));
            if(*info->p==61&&*(info->p+1)!=61&&*(info->p+1)!=62) {
                info->p++;
                skip_spaces_and_lf(info);
                p_16=info->p;
                no_comma=info->no_comma;
                info->no_comma=1;
                node=(struct sNode*)come_increment_ref_count(expression_v13(info,0));
                info->no_comma=no_comma;
                p2=info->p;
                char buf[p2-p_16+1];
                memset(&buf, 0, sizeof(buf));
                memcpy(buf,p_16,p2-p_16);
                buf[p2-p_16]=0;
                list$1char$ph_push_back(param_default_parametors,(char*)come_increment_ref_count(__builtin_string(buf)));
                ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            }
            else {
                list$1char$ph_push_back(param_default_parametors,((void*)0));
            }
            skip_spaces_and_lf(info);
            if(*info->p==44) {
                info->p++;
                skip_spaces_and_lf(info);
                if(parsecmp("...",info)) {
                    info->p+=strlen("...");
                    skip_spaces_and_lf(info);
                    var_args=1;
                    expected_next_character(41,info);
                    come_call_finalizer(sType_finalize, param_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    (param_name = come_decrement_ref_count(param_name, (void*)0, (void*)0, 0, 0, (void*)0));
                    come_call_finalizer(sType_finalize, param_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    break;
                }
            }
            else if(*info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
                come_call_finalizer(sType_finalize, param_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (param_name = come_decrement_ref_count(param_name, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(sType_finalize, param_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            come_call_finalizer(sType_finalize, param_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (param_name = come_decrement_ref_count(param_name, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sType_finalize, param_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    __result_obj__0 = (struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$*)come_increment_ref_count(((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$*)(__right_value1=tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$_initialize((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$*)come_increment_ref_count((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$*)come_calloc(1, sizeof(struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$)*(1), "06type.nc", 209, "struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$")),(struct list$1sType$ph*)come_increment_ref_count(param_types),(struct list$1char$ph*)come_increment_ref_count(param_names),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors),var_args))));
    come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
    neo_current_frame = fr.prev;
}

static void tuple3$3sType$phchar$ph_Bool$$p_finalize(struct tuple3$3sType$phchar$ph_Bool$* self)
{
        struct neo_frame fr;
    fr.prev = neo_current_frame;
    fr.fun_name  = "tuple3$3sType$phchar$ph_Bool$$p_finalize";
    neo_current_frame = &fr;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0, (void*)0));
    }
                neo_current_frame = fr.prev;
}

static struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phint$* tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phint$_initialize(struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phint$* self, struct list$1sType$ph* v1, struct list$1char$ph* v2, struct list$1char$ph* v3, int v4)
{
        struct neo_frame fr;
    fr.prev = neo_current_frame;
    fr.fun_name  = "tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phint$_initialize";
    neo_current_frame = &fr;
    struct list$1sType$ph* __dec_obj34;
    struct list$1char$ph* __dec_obj35;
    struct list$1char$ph* __dec_obj36;
    struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phint$* __result_obj__0;
    __dec_obj34=self->v1,
    self->v1=(struct list$1sType$ph*)come_increment_ref_count(v1);
    come_call_finalizer(list$1sType$ph_finalize, __dec_obj34,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj35=self->v2,
    self->v2=(struct list$1char$ph*)come_increment_ref_count(v2);
    come_call_finalizer(list$1char$ph_finalize, __dec_obj35,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj36=self->v3,
    self->v3=(struct list$1char$ph*)come_increment_ref_count(v3);
    come_call_finalizer(list$1char$ph_finalize, __dec_obj36,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    self->v4=v4;
    __result_obj__0 = (struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phint$*)come_increment_ref_count(self);
    come_call_finalizer(tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phint$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, v3, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phint$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
                    neo_current_frame = fr.prev;
}

static void tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phint$$p_finalize(struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phint$* self)
{
        struct neo_frame fr;
    fr.prev = neo_current_frame;
    fr.fun_name  = "tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phint$$p_finalize";
    neo_current_frame = &fr;
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

static void tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$$p_finalize(struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$* self)
{
        struct neo_frame fr;
    fr.prev = neo_current_frame;
    fr.fun_name  = "tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$$p_finalize";
    neo_current_frame = &fr;
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

static struct list$1sType$ph* list$1sType$ph_push_back(struct list$1sType$ph* self, struct sType* item  )
{
        struct neo_frame fr;
    fr.prev = neo_current_frame;
    fr.fun_name  = "list$1sType$ph_push_back";
    neo_current_frame = &fr;
    struct list$1sType$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1sType$ph* litem;
    struct sType* __dec_obj37  ;
    struct list_item$1sType$ph* litem_12;
    struct sType* __dec_obj38  ;
    struct list_item$1sType$ph* litem_13;
    struct sType* __dec_obj39  ;
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
        __dec_obj37=litem->item,
        litem->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj37,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        litem_12=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), (void*)0, 711, "struct list_item$1sType$ph*"))));
        litem_12->prev=self->head;
        litem_12->next=((void*)0);
        __dec_obj38=litem_12->item,
        litem_12->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj38,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem_12;
        self->head->next=litem_12;
    }
    else {
        litem_13=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), (void*)0, 721, "struct list_item$1sType$ph*"))));
        litem_13->prev=self->tail;
        litem_13->next=((void*)0);
        __dec_obj39=litem_13->item,
        litem_13->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj39,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail->next=litem_13;
        self->tail=litem_13;
    }
    self->len++;
    __result_obj__0 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
                neo_current_frame = fr.prev;
}

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item  )
{
        struct neo_frame fr;
    fr.prev = neo_current_frame;
    fr.fun_name  = "list$1char$ph_push_back";
    neo_current_frame = &fr;
    struct list$1char$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1char$ph* litem;
    char* __dec_obj40  ;
    struct list_item$1char$ph* litem_14;
    char* __dec_obj41  ;
    struct list_item$1char$ph* litem_15;
    char* __dec_obj42  ;
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
        __dec_obj40=litem->item,
        litem->item=(char*)come_increment_ref_count(item);
        __dec_obj40 = come_decrement_ref_count(__dec_obj40, (void*)0, (void*)0, 0,0, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        litem_14=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), (void*)0, 711, "struct list_item$1char$ph*"))));
        litem_14->prev=self->head;
        litem_14->next=((void*)0);
        __dec_obj41=litem_14->item,
        litem_14->item=(char*)come_increment_ref_count(item);
        __dec_obj41 = come_decrement_ref_count(__dec_obj41, (void*)0, (void*)0, 0,0, (void*)0);
        self->tail=litem_14;
        self->head->next=litem_14;
    }
    else {
        litem_15=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), (void*)0, 721, "struct list_item$1char$ph*"))));
        litem_15->prev=self->tail;
        litem_15->next=((void*)0);
        __dec_obj42=litem_15->item,
        litem_15->item=(char*)come_increment_ref_count(item);
        __dec_obj42 = come_decrement_ref_count(__dec_obj42, (void*)0, (void*)0, 0,0, (void*)0);
        self->tail->next=litem_15;
        self->tail=litem_15;
    }
    self->len++;
    __result_obj__0 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0));
    neo_current_frame = fr.prev;
    return __result_obj__0;
                neo_current_frame = fr.prev;
}

static struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$* tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$_initialize(struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$* self, struct list$1sType$ph* v1, struct list$1char$ph* v2, struct list$1char$ph* v3, _Bool v4)
{
        struct neo_frame fr;
    fr.prev = neo_current_frame;
    fr.fun_name  = "tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$_initialize";
    neo_current_frame = &fr;
    struct list$1sType$ph* __dec_obj43;
    struct list$1char$ph* __dec_obj44;
    struct list$1char$ph* __dec_obj45;
    struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$* __result_obj__0;
    __dec_obj43=self->v1,
    self->v1=(struct list$1sType$ph*)come_increment_ref_count(v1);
    come_call_finalizer(list$1sType$ph_finalize, __dec_obj43,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj44=self->v2,
    self->v2=(struct list$1char$ph*)come_increment_ref_count(v2);
    come_call_finalizer(list$1char$ph_finalize, __dec_obj44,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj45=self->v3,
    self->v3=(struct list$1char$ph*)come_increment_ref_count(v3);
    come_call_finalizer(list$1char$ph_finalize, __dec_obj45,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    self->v4=v4;
    __result_obj__0 = (struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$*)come_increment_ref_count(self);
    come_call_finalizer(tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, v3, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
        neo_current_frame = fr.prev;
}

_Bool check_assign_type(char* msg, struct sType* left_type  , struct sType* right_type  , struct CVALUE* come_value  , struct sInfo* info  )
{
        struct neo_frame fr;
    fr.prev = neo_current_frame;
    fr.fun_name  = "check_assign_type";
    neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sType* left_type2  ;
    struct sType* right_type2  ;
    struct sType* left_no_solved_generics_type  ;
    struct sType* right_no_solved_generics_type  ;
    struct sClass* left_class  ;
    struct sClass* right_class  ;
    _Bool parent_class;
    struct sClass* klass  ;
    _Bool flag_;
    _Bool __result_obj__0;
    if(info->no_output_come_code) {
           neo_current_frame = fr.prev;
        return 1;
    }
    if(left_type->mClass->mMethodGenerics) {
           neo_current_frame = fr.prev;
        return 1;
    }
    left_type2=(struct sType*)come_increment_ref_count(sType_clone(left_type));
    right_type2=(struct sType*)come_increment_ref_count(sType_clone(right_type));
    left_no_solved_generics_type=((void*)0);
    if(left_type2->mNoSolvedGenericsType) {
        left_no_solved_generics_type=left_type2->mNoSolvedGenericsType;
    }
    right_no_solved_generics_type=((void*)0);
    if(right_type2->mNoSolvedGenericsType) {
        right_no_solved_generics_type=right_type2->mNoSolvedGenericsType;
    }
    left_class=left_type2->mClass;
    right_class=right_type2->mClass;
    parent_class=0;
    if(string_operator_not_equals(left_class->mName,right_class->mName)) {
        while(left_class&&right_class) {
            if(string_operator_equals(left_class->mName,right_class->mName)) {
                parent_class=1;
            }
            if(right_class->mParentClassName) {
                right_class=((struct sClass*)(__right_value0=map$2char$phsClass$ph_operator_load_element(info->classes,right_class->mParentClassName)));
            }
            else {
                right_class=((void*)0);
            }
        }
    }
    if(left_type2->mPointerNum>0&&(list$1sNode$ph_length(right_type->mArrayNum)>0||right_type->mArrayPointerNum>0)) {
        if(string_operator_equals(left_type2->mClass->mName,right_type->mClass->mName)) {
        }
        else if(string_operator_equals(left_type2->mClass->mName,"void")) {
        }
        else {
            err_msg2(info,"type check warning(1).%s %s %d <- %s %d",msg,left_type2->mClass->mName,left_type2->mPointerNum,right_type->mClass->mName,right_type->mPointerNum);
        }
    }
    else if(left_type2->mPointerNum>0&&right_type->mPointerNum==0) {
        if(string_operator_equals(left_type2->mClass->mName,"lambda")) {
        }
        else if(list$1sNode$ph_length(right_type->mArrayNum)>0) {
        }
        else if(right_type->mArrayPointerNum>0) {
        }
        else {
            err_msg2(info,"type check warning(2).%s. %s %d <- %s %d",msg,left_type2->mClass->mName,left_type2->mPointerNum,right_type->mClass->mName,right_type->mPointerNum);
        }
    }
    else if(left_type2->mPointerNum==0&&right_type->mPointerNum>0) {
        if(left_type2->mArrayPointerNum>0) {
        }
        else if(list$1sNode$ph_length(left_type2->mArrayNum)>0) {
        }
        else if(string_operator_equals(left_type2->mClass->mName,"lambda")||string_operator_equals(right_type->mClass->mName,"void")) {
        }
        else {
            err_msg2(info,"type check warning(3).%s. %s %d <- %s %d",msg,left_type2->mClass->mName,left_type2->mPointerNum,right_type->mClass->mName,right_type->mPointerNum);
        }
    }
    else if(left_type2->mPointerNum>0&&right_type->mPointerNum>0) {
        klass=right_type->mClass;
        flag_=0;
        while(klass) {
            if(string_operator_equals(klass->mName,left_type2->mClass->mName)) {
                flag_=1;
            }
            if(klass->mParentClassName) {
                klass=((struct sClass*)(__right_value0=map$2char$phsClass$ph_operator_load_element(info->classes,klass->mParentClassName)));
            }
            else {
                klass=((void*)0);
            }
        }
        if(string_operator_equals(left_type2->mClass->mName,"void")) {
        }
        else if(string_operator_equals(left_type2->mClass->mName,"lambda")) {
        }
        else if(left_no_solved_generics_type&&right_no_solved_generics_type&&(list$1sType$ph_length(left_no_solved_generics_type->mGenericsTypes)>0||list$1sType$ph_length(right_no_solved_generics_type->mGenericsTypes)>0)) {
        }
        else if(strlen(left_type2->mClass->mName)>=strlen("tuple")&&memcmp(left_type2->mClass->mName,"tuple",strlen("tuple"))==0&&(strlen(right_type->mClass->mName)>=strlen("tuple"))) {
        }
        else if(string_operator_equals(right_type->mClass->mName,"void")) {
        }
        else if(string_operator_equals(left_type2->mClass->mName,right_type2->mClass->mName)&&left_type2->mHeap&&!right_type2->mHeap) {
            err_msg2(info,"type check warning(4).%s. %s %d <- %s %d",msg,left_type2->mClass->mName,left_type2->mPointerNum,right_type2->mClass->mName,right_type2->mPointerNum);
        }
        else if(parent_class) {
        }
        else if(string_operator_not_equals(left_type2->mClass->mName,right_type->mClass->mName)&&!flag_) {
            err_msg2(info,"type check warning(5).%s. %s %d <- %s %d",msg,left_type2->mClass->mName,left_type2->mPointerNum,right_type->mClass->mName,right_type->mPointerNum);
        }
    }
    else if(left_type2->mPointerNum==0&&right_type->mPointerNum==0) {
        if(string_operator_equals(left_type2->mClass->mName,"lambda")) {
        }
        else if(left_type2->mClass->mNumber&&right_type->mClass->mNumber) {
        }
        else if(string_operator_equals(left_type2->mClass->mName,right_type->mClass->mName)) {
        }
        else {
            err_msg2(info,"type check warning(6).%s. %s %d <- %s %d",msg,left_type2->mClass->mName,left_type2->mPointerNum,right_type->mClass->mName,right_type->mPointerNum);
        }
    }
    __result_obj__0 = 1;
    come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
    neo_current_frame = fr.prev;
}

static int list$1sNode$ph_length(struct list$1sNode$ph* self)
{
        struct neo_frame fr;
    fr.prev = neo_current_frame;
    fr.fun_name  = "list$1sNode$ph_length";
    neo_current_frame = &fr;
    if(self==((void*)0)) {
           neo_current_frame = fr.prev;
        return 0;
    }
       neo_current_frame = fr.prev;
    return self->len;
        neo_current_frame = fr.prev;
}

static int list$1sType$ph_length(struct list$1sType$ph* self)
{
        struct neo_frame fr;
    fr.prev = neo_current_frame;
    fr.fun_name  = "list$1sType$ph_length";
    neo_current_frame = &fr;
    if(self==((void*)0)) {
           neo_current_frame = fr.prev;
        return 0;
    }
       neo_current_frame = fr.prev;
    return self->len;
            neo_current_frame = fr.prev;
}

void cast_type(struct sType* left_type  , struct sType* right_type  , struct CVALUE* come_value  , struct sInfo* info  )
{
        struct neo_frame fr;
    fr.prev = neo_current_frame;
    fr.fun_name  = "cast_type";
    neo_current_frame = &fr;
    neo_current_frame = fr.prev;
}

struct tuple2$2char$phchar$ph* parse_attribute(struct sInfo* info  )
{
        struct neo_frame fr;
    fr.prev = neo_current_frame;
    fr.fun_name  = "parse_attribute";
    neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer* asm_fun_name  ;
    char* attribute  ;
    int nest;
    int nest_17;
    int nest_18;
    int nest_19;
    int nest_20;
    char* __dec_obj46  ;
    int len;
    _Bool in_dquort;
    int brace_num;
    int brace_num_21;
    void* __right_value2 = (void*)0;
    struct tuple2$2char$phchar$ph* __result_obj__0;
    asm_fun_name=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), (void*)0, 339, "struct buffer*"))));
    attribute=(char*)come_increment_ref_count(xsprintf(""));
    while(1) {
        if(parsecmp("__attribute_pure__",info)) {
            info->p+=strlen("__attribute_pure__");
            skip_spaces_and_lf(info);
        }
        else if(parsecmp("__malloc_like",info)) {
            info->p+=strlen("__malloc_like");
            skip_spaces_and_lf(info);
        }
        else if(parsecmp("__result_use_check",info)) {
            info->p+=strlen("__result_use_check");
            skip_spaces_and_lf(info);
        }
        else if(parsecmp("__alloc_size2",info)) {
            info->p+=strlen("__alloc_size2");
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
        }
        else if(parsecmp("__alloc_size",info)) {
            info->p+=strlen("__alloc_size");
            skip_spaces_and_lf(info);
            if(*info->p==40) {
                nest_17=0;
                while(1) {
                    if(*info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_17++;
                    }
                    else if(*info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_17--;
                        if(nest_17==0) {
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
        }
        else if(parsecmp("__nonnull",info)) {
            info->p+=strlen("__nonnull");
            skip_spaces_and_lf(info);
            if(*info->p==40) {
                nest_18=0;
                while(1) {
                    if(*info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_18++;
                    }
                    else if(*info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_18--;
                        if(nest_18==0) {
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
        }
        else if(parsecmp("_Nonnull",info)) {
            info->p+=strlen("_Nonnull");
            skip_spaces_and_lf(info);
            if(*info->p==40) {
                nest_19=0;
                while(1) {
                    if(*info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_19++;
                    }
                    else if(*info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_19--;
                        if(nest_19==0) {
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
        }
        else if(parsecmp("__alloc_align",info)) {
            info->p+=strlen("__alloc_align");
            skip_spaces_and_lf(info);
            if(*info->p==40) {
                nest_20=0;
                while(1) {
                    if(*info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_20++;
                    }
                    else if(*info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_20--;
                        if(nest_20==0) {
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
        }
        else if(parsecmp("__attribute_malloc__",info)) {
            info->p+=strlen("__attribute_malloc__");
            skip_spaces_and_lf(info);
        }
        else if(parsecmp("__attr_dealloc_fclose",info)) {
            info->p+=strlen("__attr_dealloc_fclose");
            skip_spaces_and_lf(info);
        }
        else if(parsecmp("__wur",info)) {
            info->p+=strlen("__wur");
            skip_spaces_and_lf(info);
        }
        else if(parsecmp("__pure2",info)) {
            info->p+=strlen("__pure2");
            skip_spaces_and_lf(info);
        }
        else if(parsecmp("__pure",info)) {
            info->p+=strlen("__pure");
            skip_spaces_and_lf(info);
        }
        else if(parsecmp("__noreturn",info)) {
            info->p+=strlen("__noreturn");
            skip_spaces_and_lf(info);
        }
        else if(parsecmp("__attribute__",info)) {
            __dec_obj46=attribute,
            attribute=(char*)come_increment_ref_count(parse_struct_attribute(info));
            __dec_obj46 = come_decrement_ref_count(__dec_obj46, (void*)0, (void*)0, 0,0, (void*)0);
        }
        else if(parsecmp("__asm__",info)) {
            info->p+=strlen("__asm__");
            skip_spaces_and_lf(info);
            if((info->end-info->p)>=strlen("__ASMNAME")&&memcmp(info->p,"__ASMNAME",strlen("__ASMNAME"))==0) {
                info->p+=strlen("__ASMNAME");
                skip_spaces_and_lf(info);
            }
            len=0;
            if(*info->p==40) {
                in_dquort=0;
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
        else if(parsecmp("__asm",info)) {
            info->p+=strlen("__asm");
            skip_spaces_and_lf(info);
            if(*info->p==40) {
                brace_num_21=0;
                while(*info->p) {
                    if(*info->p==40) {
                        info->p++;
                        brace_num_21++;
                    }
                    else if(*info->p==41) {
                        info->p++;
                        brace_num_21--;
                        if(brace_num_21==0) {
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
        else {
            break;
        }
    }
    __result_obj__0 = (struct tuple2$2char$phchar$ph*)come_increment_ref_count(((struct tuple2$2char$phchar$ph*)(__right_value2=tuple2$2char$phchar$ph_initialize((struct tuple2$2char$phchar$ph*)come_increment_ref_count((struct tuple2$2char$phchar$ph*)come_calloc(1, sizeof(struct tuple2$2char$phchar$ph)*(1), "06type.nc", 608, "struct tuple2$2char$phchar$ph")),(char*)come_increment_ref_count(buffer_to_string(asm_fun_name)),(char*)come_increment_ref_count(attribute)))));
    come_call_finalizer(buffer_finalize, asm_fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (attribute = come_decrement_ref_count(attribute, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(tuple2$2char$phchar$ph$p_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple2$2char$phchar$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
    neo_current_frame = fr.prev;
}

static struct tuple2$2char$phchar$ph* tuple2$2char$phchar$ph_initialize(struct tuple2$2char$phchar$ph* self, char* v1  , char* v2  )
{
        struct neo_frame fr;
    fr.prev = neo_current_frame;
    fr.fun_name  = "tuple2$2char$phchar$ph_initialize";
    neo_current_frame = &fr;
    char* __dec_obj47  ;
    char* __dec_obj48  ;
    struct tuple2$2char$phchar$ph* __result_obj__0;
    __dec_obj47=self->v1,
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj47 = come_decrement_ref_count(__dec_obj47, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj48=self->v2,
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj48 = come_decrement_ref_count(__dec_obj48, (void*)0, (void*)0, 0,0, (void*)0);
    __result_obj__0 = (struct tuple2$2char$phchar$ph*)come_increment_ref_count(self);
    come_call_finalizer(tuple2$2char$phchar$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 0, (void*)0));
    (v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0, 0, (void*)0));
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple2$2char$phchar$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
        neo_current_frame = fr.prev;
}

static void tuple2$2char$phchar$ph$p_finalize(struct tuple2$2char$phchar$ph* self)
{
        struct neo_frame fr;
    fr.prev = neo_current_frame;
    fr.fun_name  = "tuple2$2char$phchar$ph$p_finalize";
    neo_current_frame = &fr;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0, (void*)0));
    }
        neo_current_frame = fr.prev;
}

void parse_struct_attribute_skip_paren(struct sInfo* info  )
{
        struct neo_frame fr;
    fr.prev = neo_current_frame;
    fr.fun_name  = "parse_struct_attribute_skip_paren";
    neo_current_frame = &fr;
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

char* parse_struct_attribute(struct sInfo* info  )
{
        struct neo_frame fr;
    fr.prev = neo_current_frame;
    fr.fun_name  = "parse_struct_attribute";
    neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer* result  ;
    char* p;
    int sline;
    char* buf  ;
    char* head;
    char* tail;
    char* __result_obj__0  ;
    skip_spaces_and_lf(info);
    result=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), (void*)0, 645, "struct buffer*"))));
    while(1) {
        if(xisalpha(*info->p)||*info->p==95) {
        }
        else {
            break;
        }
        p=info->p;
        sline=info->sline;
        buf=(char*)come_increment_ref_count(parse_word(0,info));
        info->p=p;
        info->sline=sline;
        if(string_operator_equals(buf,"__attribute__")) {
            head=info->p;
            info->p+=strlen("__attribute__");
            skip_spaces_and_lf(info);
            ((char*)(__right_value0=skip_paren(info)));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            tail=info->p;
            buffer_append(result,head,tail-head);
        }
        else {
            (buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 0, (void*)0));
            break;
        }
        (buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    skip_spaces_and_lf(info);
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=buffer_to_string(result))));
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
    neo_current_frame = fr.prev;
}

struct tuple2$2sType$phchar$ph* parse_variable_name_on_multiple_declare(struct sType* base_type_name  , _Bool first, struct sInfo* info  )
{
        struct neo_frame fr;
    fr.prev = neo_current_frame;
    fr.fun_name  = "parse_variable_name_on_multiple_declare";
    neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sType* result_type  ;
    char* var_name  ;
    char* p;
    int sline;
    char* word  ;
    _Bool between_brace;
    char* p_22;
    int sline_23;
    char* word_24  ;
    _Bool lambda_;
    char* p_25;
    int sline_26;
    char* word_27  ;
    char* __dec_obj49  ;
    void* __right_value1 = (void*)0;
    void* __right_value2 = (void*)0;
    struct sType* result_type2  ;
    struct sNode* node;
    struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$* multiple_assign_var2
;    struct list$1sType$ph* param_types=0;
    struct list$1char$ph* param_names=0;
    struct list$1char$ph* param_default_parametors=0;
    _Bool var_args=0;
    struct sType* __dec_obj50  ;
    struct list$1sType$ph* __dec_obj51;
    struct list$1char$ph* __dec_obj52;
    struct sType* __dec_obj53  ;
    char* __dec_obj54  ;
    char* __dec_obj55  ;
    _Bool no_comma;
    struct sNode* node_28;
    struct sNode* __dec_obj56;
    char* p_29;
    int sline_30;
    char* word_31  ;
    struct sNode* node_32;
    char* attribute  ;
    char* __dec_obj60  ;
    char* __dec_obj61  ;
    struct tuple2$2sType$phchar$ph* __result_obj__0;
    result_type=(struct sType*)come_increment_ref_count(sType_clone(base_type_name));
    if(!first) {
        if(result_type->mTypedefOriginalType) {
            result_type->mPointerNum=result_type->mTypedefOriginalType->mPointerNum;
        }
    }
    var_name=((void*)0);
    {
        p=info->p;
        sline=info->sline;
        if(xisalpha(*info->p)||*info->p==95) {
            word=(char*)come_increment_ref_count(parse_word(0,info));
            if(string_operator_equals(word,"const")||string_operator_equals(word,"__restrict")||string_operator_equals(word,"restrict")||string_operator_equals(word,"__user")||string_operator_equals(word,"volatile")||string_operator_equals(word,"__volatile__")||string_operator_equals(word,"_Nonnull")||string_operator_equals(word,"_Nullable")||string_operator_equals(word,"_Null_unspecified")||string_operator_equals(word,"__user")||string_operator_equals(word,"_Addr")) {
            }
            else {
                info->p=p;
                info->sline=sline;
            }
            (word = come_decrement_ref_count(word, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        else {
            info->p=p;
            info->sline=sline;
        }
    }
    between_brace=0;
    {
        p_22=info->p;
        sline_23=info->sline;
        if(*info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
            if(xisalpha(*info->p)||*info->p==95) {
                word_24=(char*)come_increment_ref_count(parse_word(0,info));
                if(is_type_name(word_24,info)) {
                }
                else if(*info->p==41) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(*info->p!=40) {
                        between_brace=1;
                    }
                }
                (word_24 = come_decrement_ref_count(word_24, (void*)0, (void*)0, 0, 0, (void*)0));
            }
        }
        info->p=p_22;
        info->sline=sline_23;
    }
    lambda_=0;
    {
        p_25=info->p;
        sline_26=info->sline;
        if(*info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
            if(*info->p==42) {
                info->p++;
                skip_spaces_and_lf(info);
                if(xisalpha(*info->p)||*info->p==95) {
                    word_27=(char*)come_increment_ref_count(parse_word(0,info));
                    if(is_type_name(word_27,info)) {
                    }
                    else if(*info->p==91) {
                        lambda_=1;
                    }
                    else if(*info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        if(*info->p==40) {
                            lambda_=1;
                        }
                    }
                    (word_27 = come_decrement_ref_count(word_27, (void*)0, (void*)0, 0, 0, (void*)0));
                }
            }
        }
        info->p=p_25;
        info->sline=sline_26;
    }
    skip_spaces_and_lf(info);
    while(*info->p==42) {
        info->p++;
        skip_spaces_and_lf(info);
        skip_pointer_attribute(info);
        result_type->mPointerNum++;
    }
    skip_spaces_and_lf(info);
    if(between_brace&&*info->p==40) {
        info->p++;
        skip_spaces_and_lf(info);
    }
    if(lambda_) {
        expected_next_character(40,info);
        expected_next_character(42,info);
        __dec_obj49=var_name,
        var_name=(char*)come_increment_ref_count(parse_word(0,info));
        __dec_obj49 = come_decrement_ref_count(__dec_obj49, (void*)0, (void*)0, 0,0, (void*)0);
        result_type2=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), (void*)0, 821, "struct sType*")),(char*)come_increment_ref_count(xsprintf("lambda")),0,info,0));
        if(*info->p==91) {
            info->p++;
            skip_spaces_and_lf(info);
            node=(struct sNode*)come_increment_ref_count(expression_v13(info,0));
            list$1sNode$ph_add(result_type2->mArrayNum,(struct sNode*)come_increment_ref_count(node));
            expected_next_character(93,info);
            ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
        expected_next_character(41,info);
        multiple_assign_var2=((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$*)(__right_value0=parse_params(info,0)));
        param_types=(struct list$1sType$ph*)come_increment_ref_count(multiple_assign_var2->v1);
        param_names=(struct list$1char$ph*)come_increment_ref_count(multiple_assign_var2->v2);
        param_default_parametors=(struct list$1char$ph*)come_increment_ref_count(multiple_assign_var2->v3);
        var_args=multiple_assign_var2->v4;
        come_call_finalizer(tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        __dec_obj50=result_type2->mResultType,
        result_type2->mResultType=(struct sType*)come_increment_ref_count(sType_clone(result_type));
        come_call_finalizer(sType_finalize, __dec_obj50,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        __dec_obj51=result_type2->mParamTypes,
        result_type2->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(param_types);
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj51,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        __dec_obj52=result_type2->mParamNames,
        result_type2->mParamNames=(struct list$1char$ph*)come_increment_ref_count(param_names);
        come_call_finalizer(list$1char$ph_finalize, __dec_obj52,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        result_type2->mVarArgs=var_args;
        __dec_obj53=result_type,
        result_type=(struct sType*)come_increment_ref_count(result_type2);
        come_call_finalizer(sType_finalize, __dec_obj53,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, result_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(xisalnum(*info->p)||*info->p==95) {
        __dec_obj54=var_name,
        var_name=(char*)come_increment_ref_count(parse_word(0,info));
        __dec_obj54 = come_decrement_ref_count(__dec_obj54, (void*)0, (void*)0, 0,0, (void*)0);
    }
    else {
        static int num_anonymous_var_name=0;
        num_anonymous_var_name++;
        __dec_obj55=var_name,
        var_name=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameYYY%d",num_anonymous_var_name));
        __dec_obj55 = come_decrement_ref_count(__dec_obj55, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(between_brace&&*info->p==41) {
        info->p++;
        skip_spaces_and_lf(info);
    }
    if(*info->p==58) {
        info->p++;
        skip_spaces_and_lf(info);
        no_comma=info->no_comma;
        info->no_comma=1;
        node_28=(struct sNode*)come_increment_ref_count(expression_v13(info,0));
        info->no_comma=no_comma;
        __dec_obj56=result_type->mSizeNum,
        result_type->mSizeNum=(struct sNode*)come_increment_ref_count(node_28);
        (__dec_obj56 ? __dec_obj56 = come_decrement_ref_count(__dec_obj56, ((struct sNode*)__dec_obj56)->finalize, ((struct sNode*)__dec_obj56)->_protocol_obj, 0,0, (void*)0) :0);
        ((node_28) ? node_28 = come_decrement_ref_count(node_28, ((struct sNode*)node_28)->finalize, ((struct sNode*)node_28)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    while(*info->p==91) {
        info->p++;
        skip_spaces_and_lf(info);
        {
            p_29=info->p;
            sline_30=info->sline;
            if(xisalpha(*info->p)||*info->p==95) {
                word_31=(char*)come_increment_ref_count(parse_word(0,info));
                if(string_operator_equals(word_31,"const")||string_operator_equals(word_31,"__restrict")||string_operator_equals(word_31,"restrict")||string_operator_equals(word_31,"__user")||string_operator_equals(word_31,"volatile")||string_operator_equals(word_31,"__volatile__")||string_operator_equals(word_31,"_Nonnull")||string_operator_equals(word_31,"_Nullable")||string_operator_equals(word_31,"_Null_unspecified")||string_operator_equals(word_31,"__user")||string_operator_equals(word_31,"_Addr")) {
                }
                else {
                    info->p=p_29;
                    info->sline=sline_30;
                }
                (word_31 = come_decrement_ref_count(word_31, (void*)0, (void*)0, 0, 0, (void*)0));
            }
            else {
                info->p=p_29;
                info->sline=sline_30;
            }
        }
        if(*info->p==93) {
            info->p++;
            skip_spaces_and_lf(info);
            result_type->mArrayPointerType=1;
            break;
        }
        skip_spaces_and_lf(info);
        node_32=(struct sNode*)come_increment_ref_count(expression_v13(info,0));
        list$1sNode$ph_push_back(result_type->mArrayNum,(struct sNode*)come_increment_ref_count(node_32));
        expected_next_character(93,info);
        ((node_32) ? node_32 = come_decrement_ref_count(node_32, ((struct sNode*)node_32)->finalize, ((struct sNode*)node_32)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    attribute=(char*)come_increment_ref_count(parse_struct_attribute(info));
    if(string_operator_not_equals(attribute,"")) {
        if(result_type->mAttribute) {
            __dec_obj60=result_type->mAttribute,
            result_type->mAttribute=(char*)come_increment_ref_count(string_operator_add(((char*)(__right_value1=string_operator_add(result_type->mAttribute," "))),attribute));
            __dec_obj60 = come_decrement_ref_count(__dec_obj60, (void*)0, (void*)0, 0,0, (void*)0);
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        else {
            __dec_obj61=result_type->mAttribute,
            result_type->mAttribute=(char*)come_increment_ref_count(attribute);
            __dec_obj61 = come_decrement_ref_count(__dec_obj61, (void*)0, (void*)0, 0,0, (void*)0);
        }
    }
    ((struct tuple2$2char$phchar$ph*)(__right_value0=parse_attribute(info)));
    come_call_finalizer(tuple2$2char$phchar$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __result_obj__0 = (struct tuple2$2sType$phchar$ph*)come_increment_ref_count(((struct tuple2$2sType$phchar$ph*)(__right_value1=tuple2$2sType$phchar$ph_initialize((struct tuple2$2sType$phchar$ph*)come_increment_ref_count((struct tuple2$2sType$phchar$ph*)come_calloc(1, sizeof(struct tuple2$2sType$phchar$ph)*(1), "06type.nc", 923, "struct tuple2$2sType$phchar$ph")),(struct sType*)come_increment_ref_count(result_type),(char*)come_increment_ref_count(var_name)))));
    come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0));
    (attribute = come_decrement_ref_count(attribute, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(tuple2$2sType$phchar$ph$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple2$2sType$phchar$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
    neo_current_frame = fr.prev;
}

static struct list$1sNode$ph* list$1sNode$ph_push_back(struct list$1sNode$ph* self, struct sNode* item)
{
        struct neo_frame fr;
    fr.prev = neo_current_frame;
    fr.fun_name  = "list$1sNode$ph_push_back";
    neo_current_frame = &fr;
    struct list$1sNode$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1sNode$ph* litem;
    struct sNode* __dec_obj57;
    struct list_item$1sNode$ph* litem_33;
    struct sNode* __dec_obj58;
    struct list_item$1sNode$ph* litem_34;
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
        litem_33=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), (void*)0, 711, "struct list_item$1sNode$ph*"))));
        litem_33->prev=self->head;
        litem_33->next=((void*)0);
        __dec_obj58=litem_33->item,
        litem_33->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj58 ? __dec_obj58 = come_decrement_ref_count(__dec_obj58, ((struct sNode*)__dec_obj58)->finalize, ((struct sNode*)__dec_obj58)->_protocol_obj, 0,0, (void*)0) :0);
        self->tail=litem_33;
        self->head->next=litem_33;
    }
    else {
        litem_34=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), (void*)0, 721, "struct list_item$1sNode$ph*"))));
        litem_34->prev=self->tail;
        litem_34->next=((void*)0);
        __dec_obj59=litem_34->item,
        litem_34->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj59 ? __dec_obj59 = come_decrement_ref_count(__dec_obj59, ((struct sNode*)__dec_obj59)->finalize, ((struct sNode*)__dec_obj59)->_protocol_obj, 0,0, (void*)0) :0);
        self->tail->next=litem_34;
        self->tail=litem_34;
    }
    self->len++;
    __result_obj__0 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
            neo_current_frame = fr.prev;
}

static struct tuple2$2sType$phchar$ph* tuple2$2sType$phchar$ph_initialize(struct tuple2$2sType$phchar$ph* self, struct sType* v1  , char* v2  )
{
        struct neo_frame fr;
    fr.prev = neo_current_frame;
    fr.fun_name  = "tuple2$2sType$phchar$ph_initialize";
    neo_current_frame = &fr;
    struct sType* __dec_obj62  ;
    char* __dec_obj63  ;
    struct tuple2$2sType$phchar$ph* __result_obj__0;
    __dec_obj62=self->v1,
    self->v1=(struct sType*)come_increment_ref_count(v1);
    come_call_finalizer(sType_finalize, __dec_obj62,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj63=self->v2,
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj63 = come_decrement_ref_count(__dec_obj63, (void*)0, (void*)0, 0,0, (void*)0);
    __result_obj__0 = (struct tuple2$2sType$phchar$ph*)come_increment_ref_count(self);
    come_call_finalizer(tuple2$2sType$phchar$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sType_finalize, v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0, 0, (void*)0));
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple2$2sType$phchar$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
        neo_current_frame = fr.prev;
}

static void tuple2$2sType$phchar$ph$p_finalize(struct tuple2$2sType$phchar$ph* self)
{
        struct neo_frame fr;
    fr.prev = neo_current_frame;
    fr.fun_name  = "tuple2$2sType$phchar$ph$p_finalize";
    neo_current_frame = &fr;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0, (void*)0));
    }
        neo_current_frame = fr.prev;
}

void skip_pointer_attribute(struct sInfo* info  )
{
        struct neo_frame fr;
    fr.prev = neo_current_frame;
    fr.fun_name  = "skip_pointer_attribute";
    neo_current_frame = &fr;
    char* p;
    int sline;
    void* __right_value0 = (void*)0;
    char* word  ;
    int nest;
    p=info->p;
    sline=info->sline;
    if(xisalpha(*info->p)||*info->p==95) {
        word=(char*)come_increment_ref_count(parse_word(0,info));
        if((string_operator_equals(word,"__attribute")||string_operator_equals(word,"__attribute__"))&&*info->p==40) {
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
        else if(string_operator_equals(word,"const")||string_operator_equals(word,"__restrict")||string_operator_equals(word,"restrict")||string_operator_equals(word,"__user")||string_operator_equals(word,"volatile")||string_operator_equals(word,"__volatile__")||string_operator_equals(word,"_Nonnull")||string_operator_equals(word,"_Nullable")||string_operator_equals(word,"__nonnull")||string_operator_equals(word,"_Null_unspecified")||string_operator_equals(word,"__user")||string_operator_equals(word,"_Addr")||string_operator_equals(word,"__noreturn")||string_operator_equals(word,"_noreturn")||string_operator_equals(word,"_Noreturn")) {
        }
        else {
            info->p=p;
            info->sline=sline;
        }
        (word = come_decrement_ref_count(word, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    else {
        info->p=p;
        info->sline=sline;
    }
    neo_current_frame = fr.prev;
}

struct tuple3$3sType$phchar$ph_Bool$* backtrace_parse_type(_Bool parse_variable_name, struct sInfo* info  )
{
        struct neo_frame fr;
    fr.prev = neo_current_frame;
    fr.fun_name  = "backtrace_parse_type";
    neo_current_frame = &fr;
    _Bool no_output_come_code;
    void* __right_value0 = (void*)0;
    struct tuple3$3sType$phchar$ph_Bool$* multiple_assign_var3
;    struct sType* type  =0;
    char* name  =0;
    _Bool err=0;
    void* __right_value1 = (void*)0;
    struct tuple3$3sType$phchar$ph_Bool$* __result_obj__0;
    no_output_come_code=info->no_output_come_code;
    info->no_output_come_code=1;
    multiple_assign_var3=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=parse_type(info,parse_variable_name,1,0)));
    type=(struct sType*)come_increment_ref_count(multiple_assign_var3->v1);
    name=(char*)come_increment_ref_count(multiple_assign_var3->v2);
    err=multiple_assign_var3->v3;
    come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    info->no_output_come_code=no_output_come_code;
    __result_obj__0 = (struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value1=tuple3$3sType$phchar$ph_Bool$_initialize((struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count((struct tuple3$3sType$phchar$ph_Bool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$ph_Bool$)*(1), "06type.nc", 979, "struct tuple3$3sType$phchar$ph_Bool$")),(struct sType*)come_increment_ref_count(type),(char*)come_increment_ref_count(name),err))));
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
    neo_current_frame = fr.prev;
}

static struct tuple3$3sType$phchar$ph_Bool$* tuple3$3sType$phchar$ph_Bool$_initialize(struct tuple3$3sType$phchar$ph_Bool$* self, struct sType* v1  , char* v2  , _Bool v3)
{
        struct neo_frame fr;
    fr.prev = neo_current_frame;
    fr.fun_name  = "tuple3$3sType$phchar$ph_Bool$_initialize";
    neo_current_frame = &fr;
    struct sType* __dec_obj64  ;
    char* __dec_obj65  ;
    struct tuple3$3sType$phchar$ph_Bool$* __result_obj__0;
    __dec_obj64=self->v1,
    self->v1=(struct sType*)come_increment_ref_count(v1);
    come_call_finalizer(sType_finalize, __dec_obj64,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj65=self->v2,
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj65 = come_decrement_ref_count(__dec_obj65, (void*)0, (void*)0, 0,0, (void*)0);
    self->v3=v3;
    __result_obj__0 = (struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count(self);
    come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sType_finalize, v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0, 0, (void*)0));
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
        neo_current_frame = fr.prev;
}

struct tuple3$3sType$phchar$ph_Bool$* parse_type(struct sInfo* info  , _Bool parse_variable_name, _Bool parse_multiple_type, _Bool in_function_parametor)
{
        struct neo_frame fr;
    fr.prev = neo_current_frame;
    fr.fun_name  = "parse_type";
    neo_current_frame = &fr;
    char* head;
    int head_sline;
    void* __right_value0 = (void*)0;
    char* type_name  ;
    _Bool record_;
    _Bool constant;
    _Bool static_;
    _Bool volatile_;
    _Bool register_;
    _Bool unsigned_;
    _Bool long_;
    _Bool long_long;
    _Bool short_;
    _Bool restrict_;
    _Bool struct_;
    _Bool union_;
    _Bool enum_;
    _Bool no_heap;
    _Bool extern_;
    _Bool inline_;
    _Bool uniq_;
    _Bool tuple_;
    _Bool original_var_name;
    _Bool complex_;
    _Bool type_name_;
    struct sNode* alignas_;
    _Bool alignas_double;
    char* union_attribute  ;
    _Bool anonymous_type;
    _Bool anonymous_name;
    _Bool atomic_;
    _Bool thread_local;
    _Bool thread_;
    char* __dec_obj66  ;
    char* __dec_obj67  ;
    char* __dec_obj68  ;
    char* __dec_obj69  ;
    char* __dec_obj70  ;
    int brace_num;
    char* __dec_obj71  ;
    char* __dec_obj72  ;
    char* __dec_obj73  ;
    char* __dec_obj74  ;
    char* __dec_obj75  ;
    struct sNode* __dec_obj76;
    char* __dec_obj77  ;
    char* __dec_obj78  ;
    char* __dec_obj79  ;
    char* __dec_obj80  ;
    char* __dec_obj81  ;
    char* __dec_obj82  ;
    char* __dec_obj83  ;
    char* __dec_obj84  ;
    char* __dec_obj85  ;
    char* __dec_obj86  ;
    char* p;
    int sline;
    char* __dec_obj87  ;
    char* __dec_obj88  ;
    char* __dec_obj89  ;
    char* p_35;
    int sline_36;
    void* __right_value1 = (void*)0;
    struct tuple3$3sType$phchar$ph_Bool$* __result_obj__0;
    char* p_37;
    int sline_38;
    struct sNode* node;
    _Bool Value;
    char* __dec_obj92  ;
    char* p_39;
    int sline_40;
    char* __dec_obj93  ;
    char* __dec_obj94  ;
    char* __dec_obj95  ;
    char* p_41;
    int sline_42;
    struct tuple3$3sType$phchar$ph_Bool$* multiple_assign_var4
;    struct sType* type  =0;
    char* name  =0;
    _Bool err=0;
    char* p_43;
    int sline_44;
    char* __dec_obj96  ;
    char* __dec_obj97  ;
    struct tuple3$3sType$phchar$ph_Bool$* multiple_assign_var5
;    struct sType* type_45  =0;
    char* name_46  =0;
    _Bool err_47=0;
    char* p_48;
    int sline_49;
    char* p_50;
    int sline_51;
    char* __dec_obj98  ;
    char* p2;
    int sline2;
    char* __dec_obj99  ;
    char* __dec_obj100  ;
    char* __dec_obj101  ;
    char* __dec_obj102  ;
    char* __dec_obj103  ;
    char* __dec_obj104  ;
    char* __dec_obj105  ;
    char* p_52;
    int sline_53;
    char* __dec_obj106  ;
    char* __dec_obj107  ;
    char* __dec_obj108  ;
    char* p_54;
    int sline_55;
    char* __dec_obj109  ;
    char* p_56;
    int sline_57;
    char* __dec_obj110  ;
    char* __dec_obj111  ;
    char* __dec_obj112  ;
    char* p_58;
    int sline_59;
    char* __dec_obj113  ;
    char* __dec_obj114  ;
    char* __dec_obj115  ;
    char* __dec_obj116  ;
    char* __dec_obj117  ;
    char* p_60;
    int sline_61;
    char* __dec_obj118  ;
    char* __dec_obj119  ;
    char* __dec_obj120  ;
    char* __dec_obj121  ;
    char* __dec_obj122  ;
    char* __dec_obj123  ;
    char* __dec_obj124  ;
    char* p_62;
    int sline_63;
    char* __dec_obj125  ;
    char* __dec_obj126  ;
    char* __dec_obj127  ;
    _Bool no_comma;
    struct sNode* exp;
    void* __right_value2 = (void*)0;
    struct sType* type_64  ;
    struct sNode* __dec_obj128;
    char* var_name  ;
    char* attribute  ;
    char* __dec_obj129  ;
    char* __dec_obj130  ;
    char* __dec_obj131  ;
    _Bool no_comma_65;
    struct sNode* node_66;
    struct sNode* __dec_obj132;
    char* attribute2  ;
    char* __dec_obj133  ;
    char* __dec_obj134  ;
    char* attribute_67  ;
    int pointer_num;
    _Bool heap;
    _Bool refference;
    _Bool no_refference;
    _Bool channel;
    _Bool deffer_;
    _Bool any_class;
    _Bool vtable;
    char* tuple_name  ;
    char* __dec_obj135  ;
    _Bool lambda_flag;
    char* pX;
    int slineX;
    struct sType* type_68  ;
    char* var_name_69  ;
    _Bool function_pointer_flag;
    _Bool pointer_to_array_flag;
    char* p_70;
    int sline_71;
    char* word  ;
    char* __dec_obj136  ;
    _Bool no_output_come_code;
    struct sNode* exp_72;
    char* word_73  ;
    _Bool var_name_between_brace;
    char* p_74;
    int sline_75;
    char* word_76  ;
    _Bool anonymous;
    char* __dec_obj137  ;
    struct sNode* node_77;
    _Bool Value_78;
    int pointer_num_79;
    struct sType* __dec_obj138  ;
    struct sType* __dec_obj139  ;
    struct sClass* klass  ;
    char* __dec_obj140  ;
    char* __dec_obj141  ;
    char* __dec_obj142  ;
    struct sNode* node_80;
    _Bool Value_81;
    struct sType* __dec_obj143  ;
    struct sType* __dec_obj144  ;
    _Bool anonymous_82;
    char* __dec_obj145  ;
    struct sNode* node_83;
    _Bool Value_84;
    int pointer_num_85;
    struct sType* __dec_obj146  ;
    struct sType* __dec_obj147  ;
    struct sClass* klass_86  ;
    char* __dec_obj148  ;
    char* attribute_87  ;
    char* __dec_obj149  ;
    char* __dec_obj150  ;
    char* __dec_obj151  ;
    char* __dec_obj152  ;
    char* __dec_obj153  ;
    _Bool no_comma_90;
    struct sNode* node_91;
    struct sNode* __dec_obj154;
    char* attribute2_92  ;
    char* __dec_obj155  ;
    char* __dec_obj156  ;
    struct sType* result_type  ;
    _Bool _conditional_value_X0;
    struct sType* __dec_obj157  ;
    int i;
    _Bool _conditional_value_X1;
    struct sType* __dec_obj158  ;
    int i_95;
    _Bool _conditional_value_X2;
    struct sType* __dec_obj159  ;
    struct sType* __dec_obj160  ;
    struct sType* __dec_obj161  ;
    struct sNode* __dec_obj162;
    char* __dec_obj163  ;
    struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$* multiple_assign_var6
;    struct list$1sType$ph* param_types=0;
    struct list$1char$ph* param_names=0;
    struct list$1char$ph* param_default_parametors=0;
    _Bool var_args=0;
    struct sType* __dec_obj164  ;
    struct sType* __dec_obj165  ;
    struct list$1sType$ph* __dec_obj166;
    struct list$1char$ph* __dec_obj167;
    _Bool pointer_paren;
    int paren_num;
    int array_pointer_num;
    struct sType* __dec_obj168  ;
    struct sType* __dec_obj169  ;
    struct sNode* __dec_obj170;
    char* __dec_obj171  ;
    char* __dec_obj172  ;
    char* __dec_obj173  ;
    struct list$1sNode$ph* array;
    struct sNode* node_96;
    struct list$1sNode$ph* __dec_obj174;
    struct __current_stack1__ __current_stack1__;
    struct sNode* node_97;
    int function_pointer_num;
    struct sType* result_type_98  ;
    _Bool _conditional_value_X3;
    struct sType* __dec_obj175  ;
    int i_99;
    _Bool _conditional_value_X4;
    struct sType* __dec_obj176  ;
    int i_100;
    _Bool _conditional_value_X5;
    struct sType* __dec_obj177  ;
    struct sType* __dec_obj178  ;
    struct sType* __dec_obj179  ;
    struct sNode* __dec_obj180;
    int paren_flag;
    int array_pointer;
    char* __dec_obj181  ;
    char* __dec_obj182  ;
    struct sType* __dec_obj183  ;
    struct sNode* node_102;
    struct sNode* node_103;
    struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$* multiple_assign_var7
;    struct list$1sType$ph* param_types_104=0;
    struct list$1char$ph* param_names_105=0;
    struct list$1char$ph* param_default_parametors_106=0;
    _Bool var_args_107=0;
    struct sType* __dec_obj184  ;
    struct list$1sType$ph* __dec_obj185;
    struct list$1char$ph* __dec_obj186;
    _Bool _conditional_value_X6;
    struct sType* __dec_obj187  ;
    struct buffer* t  ;
    struct sType* type_  ;
    char* __dec_obj188  ;
    struct sType* __dec_obj189  ;
    char* __dec_obj190  ;
    char* __dec_obj191  ;
    struct sNode* __dec_obj192;
    char* __dec_obj193  ;
    int i_108;
    _Bool _conditional_value_X7;
    struct sType* __dec_obj194  ;
    struct sNode* __dec_obj195;
    char* __dec_obj196  ;
    int i_109;
    _Bool _conditional_value_X8;
    struct sType* __dec_obj197  ;
    struct sNode* __dec_obj198;
    char* __dec_obj199  ;
    _Bool _conditional_value_X9;
    struct sType* __dec_obj200  ;
    struct sType* __dec_obj201  ;
    struct tuple3$3sType$phchar$ph_Bool$* multiple_assign_var8
;    struct sType* generics_type  =0;
    char* var_name_110  =0;
    _Bool err_111=0;
    struct sType* __dec_obj202  ;
    char* new_name  ;
    struct sNode* __dec_obj203;
    char* __dec_obj204  ;
    char* __dec_obj205  ;
    struct sClass* klass_112  ;
    void* __right_value3 = (void*)0;
    struct sClass* klass_122  ;
    struct sType* __dec_obj206  ;
    struct sType* __dec_obj207  ;
    struct sNode* __dec_obj208;
    char* __dec_obj209  ;
    struct list$1sType$ph* types;
    struct tuple3$3sType$phchar$ph_Bool$* multiple_assign_var9
;    struct sType* type2  =0;
    char* name_123  =0;
    _Bool err_124=0;
    int num_tuples;
    struct sType* __dec_obj210  ;
    struct list$1sType$ph* o2_saved;
    struct sType* it  ;
    struct sType* __dec_obj211  ;
    char* new_name_125  ;
    char* __dec_obj212  ;
    char* attribute_126  ;
    char* __dec_obj213  ;
    char* __dec_obj214  ;
    char* __dec_obj215  ;
    char* __dec_obj216  ;
    char* __dec_obj217  ;
    _Bool no_comma_129;
    struct sNode* node_130;
    struct sNode* __dec_obj218;
    char* attribute2_131  ;
    char* __dec_obj219  ;
    char* __dec_obj220  ;
    char* __dec_obj221  ;
    struct list$1sNode$ph* array_num_typedef;
    struct list$1sNode$ph* __dec_obj222;
    _Bool array_static;
    _Bool array_restrict;
    struct sNode* node_132;
    struct __current_stack2__ __current_stack2__;
    struct __current_stack3__ __current_stack3__;
    struct tuple2$2char$phchar$ph* multiple_assign_var10
;    char* asm_name  =0;
    char* attribute2_135  =0;
    char* __dec_obj223  ;
    char* __dec_obj224  ;
    struct sType* type_before  ;
    struct sType* __dec_obj225  ;
    struct sNode* __list_values1__[1];
    struct list$1sNode$ph* __dec_obj226;
    struct sType* __dec_obj227  ;
    char* __dec_obj228  ;
    memset(&type_68, 0, sizeof(type_68));
    memset(&var_name_69, 0, sizeof(var_name_69));
    memset(&result_type, 0, sizeof(result_type));
    memset(&__current_stack1__, 0, sizeof(struct __current_stack1__));
    memset(&result_type_98, 0, sizeof(result_type_98));
    memset(&__current_stack2__, 0, sizeof(struct __current_stack2__));
    memset(&__current_stack3__, 0, sizeof(struct __current_stack3__));
    head=info->p;
    head_sline=info->sline;
    info->define_struct=0;
    type_name=(char*)come_increment_ref_count(parse_word(0,info));
    record_=0;
    constant=0;
    static_=0;
    volatile_=0;
    register_=0;
    unsigned_=0;
    long_=0;
    long_long=0;
    short_=0;
    restrict_=0;
    struct_=0;
    union_=0;
    enum_=0;
    no_heap=0;
    extern_=0;
    inline_=0;
    uniq_=0;
    tuple_=0;
    original_var_name=0;
    complex_=0;
    type_name_=0;
    alignas_=((void*)0);
    alignas_double=0;
    union_attribute=(char*)come_increment_ref_count(xsprintf(""));
    anonymous_type=0;
    anonymous_name=0;
    atomic_=0;
    thread_local=0;
    thread_=0;
    while(1) {
        if(string_operator_equals(type_name,"__type__")) {
            if(*info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            __dec_obj66=type_name,
            type_name=(char*)come_increment_ref_count(parse_word(0,info));
            __dec_obj66 = come_decrement_ref_count(__dec_obj66, (void*)0, (void*)0, 0,0, (void*)0);
            type_name_=1;
        }
        else if(string_operator_equals(type_name,"_Thread_local")) {
            __dec_obj67=type_name,
            type_name=(char*)come_increment_ref_count(parse_word(0,info));
            __dec_obj67 = come_decrement_ref_count(__dec_obj67, (void*)0, (void*)0, 0,0, (void*)0);
            thread_local=1;
        }
        else if(string_operator_equals(type_name,"__thread")) {
            __dec_obj68=type_name,
            type_name=(char*)come_increment_ref_count(parse_word(0,info));
            __dec_obj68 = come_decrement_ref_count(__dec_obj68, (void*)0, (void*)0, 0,0, (void*)0);
            thread_=1;
        }
        else if(string_operator_equals(type_name,"_Atomic")) {
            if(*info->p==40) {
                expected_next_character(40,info);
            }
            __dec_obj69=type_name,
            type_name=(char*)come_increment_ref_count(parse_word(0,info));
            __dec_obj69 = come_decrement_ref_count(__dec_obj69, (void*)0, (void*)0, 0,0, (void*)0);
            atomic_=1;
        }
        else if(string_operator_equals(type_name,"__extension__")) {
            __dec_obj70=type_name,
            type_name=(char*)come_increment_ref_count(parse_word(0,info));
            __dec_obj70 = come_decrement_ref_count(__dec_obj70, (void*)0, (void*)0, 0,0, (void*)0);
        }
        else if(string_operator_equals(type_name,"__attribute__")) {
            if(*info->p==40) {
                brace_num=0;
                while(*info->p) {
                    if(*info->p==40) {
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
            __dec_obj71=type_name,
            type_name=(char*)come_increment_ref_count(parse_word(0,info));
            __dec_obj71 = come_decrement_ref_count(__dec_obj71, (void*)0, (void*)0, 0,0, (void*)0);
        }
        else if(string_operator_equals(type_name,"_Noreturn")) {
            __dec_obj72=type_name,
            type_name=(char*)come_increment_ref_count(parse_word(0,info));
            __dec_obj72 = come_decrement_ref_count(__dec_obj72, (void*)0, (void*)0, 0,0, (void*)0);
        }
        else if(string_operator_equals(type_name,"__noreturn")) {
            __dec_obj73=type_name,
            type_name=(char*)come_increment_ref_count(parse_word(0,info));
            __dec_obj73 = come_decrement_ref_count(__dec_obj73, (void*)0, (void*)0, 0,0, (void*)0);
        }
        else if(string_operator_equals(type_name,"_Nullable")) {
            __dec_obj74=type_name,
            type_name=(char*)come_increment_ref_count(parse_word(0,info));
            __dec_obj74 = come_decrement_ref_count(__dec_obj74, (void*)0, (void*)0, 0,0, (void*)0);
        }
        else if(string_operator_equals(type_name,"_noreturn")) {
            __dec_obj75=type_name,
            type_name=(char*)come_increment_ref_count(parse_word(0,info));
            __dec_obj75 = come_decrement_ref_count(__dec_obj75, (void*)0, (void*)0, 0,0, (void*)0);
        }
        else if(string_operator_equals(type_name,"_Alignas")) {
            expected_next_character(40,info);
            if((info->end-info->p)>strlen("double")&&memcmp(info->p,"double",strlen("double"))==0) {
                (void)((char*)(__right_value0=parse_word(0,info)));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                alignas_double=1;
            }
            else {
                __dec_obj76=alignas_,
                alignas_=(struct sNode*)come_increment_ref_count(expression_v13(info,0));
                (__dec_obj76 ? __dec_obj76 = come_decrement_ref_count(__dec_obj76, ((struct sNode*)__dec_obj76)->finalize, ((struct sNode*)__dec_obj76)->_protocol_obj, 0,0, (void*)0) :0);
            }
            expected_next_character(41,info);
            __dec_obj77=type_name,
            type_name=(char*)come_increment_ref_count(parse_word(0,info));
            __dec_obj77 = come_decrement_ref_count(__dec_obj77, (void*)0, (void*)0, 0,0, (void*)0);
        }
        else if(string_operator_equals(type_name,"const")) {
            constant=1;
            __dec_obj78=type_name,
            type_name=(char*)come_increment_ref_count(parse_word(0,info));
            __dec_obj78 = come_decrement_ref_count(__dec_obj78, (void*)0, (void*)0, 0,0, (void*)0);
        }
        else if(string_operator_equals(type_name,"_Complex")) {
            complex_=1;
            __dec_obj79=type_name,
            type_name=(char*)come_increment_ref_count(parse_word(0,info));
            __dec_obj79 = come_decrement_ref_count(__dec_obj79, (void*)0, (void*)0, 0,0, (void*)0);
        }
        else if(string_operator_equals(type_name,"static")) {
            static_=1;
            __dec_obj80=type_name,
            type_name=(char*)come_increment_ref_count(parse_word(0,info));
            __dec_obj80 = come_decrement_ref_count(__dec_obj80, (void*)0, (void*)0, 0,0, (void*)0);
        }
        else if(string_operator_equals(type_name,"uniq")) {
            uniq_=1;
            __dec_obj81=type_name,
            type_name=(char*)come_increment_ref_count(parse_word(0,info));
            __dec_obj81 = come_decrement_ref_count(__dec_obj81, (void*)0, (void*)0, 0,0, (void*)0);
        }
        else if(string_operator_equals(type_name,"record")) {
            record_=1;
            __dec_obj82=type_name,
            type_name=(char*)come_increment_ref_count(parse_word(0,info));
            __dec_obj82 = come_decrement_ref_count(__dec_obj82, (void*)0, (void*)0, 0,0, (void*)0);
        }
        else if(string_operator_equals(type_name,"extern")) {
            extern_=1;
            __dec_obj83=type_name,
            type_name=(char*)come_increment_ref_count(parse_word(0,info));
            __dec_obj83 = come_decrement_ref_count(__dec_obj83, (void*)0, (void*)0, 0,0, (void*)0);
        }
        else if(string_operator_equals(type_name,"inline")||string_operator_equals(type_name,"__inline")||string_operator_equals(type_name,"__inline__")||string_operator_equals(type_name,"__always_inline")||string_operator_equals(type_name,"__forceinline")) {
            inline_=1;
            __dec_obj84=type_name,
            type_name=(char*)come_increment_ref_count(parse_word(0,info));
            __dec_obj84 = come_decrement_ref_count(__dec_obj84, (void*)0, (void*)0, 0,0, (void*)0);
        }
        else if(string_operator_equals(type_name,"volatile")||string_operator_equals(type_name,"__volatile__")) {
            volatile_=1;
            __dec_obj85=type_name,
            type_name=(char*)come_increment_ref_count(parse_word(0,info));
            __dec_obj85 = come_decrement_ref_count(__dec_obj85, (void*)0, (void*)0, 0,0, (void*)0);
        }
        else if(string_operator_equals(type_name,"struct")) {
            struct_=1;
            __dec_obj86=union_attribute,
            union_attribute=(char*)come_increment_ref_count(parse_struct_attribute(info));
            __dec_obj86 = come_decrement_ref_count(__dec_obj86, (void*)0, (void*)0, 0,0, (void*)0);
            if(*info->p==123) {
                p=info->p;
                sline=info->sline;
                ((char*)(__right_value0=skip_block(info,0)));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                if(*info->p==59) {
                    anonymous_name=1;
                    anonymous_type=1;
                    __dec_obj87=type_name,
                    type_name=(char*)come_increment_ref_count(__builtin_string(""));
                    __dec_obj87 = come_decrement_ref_count(__dec_obj87, (void*)0, (void*)0, 0,0, (void*)0);
                    info->p=p;
                    info->sline=sline;
                    break;
                }
                else {
                    anonymous_type=1;
                    __dec_obj88=type_name,
                    type_name=(char*)come_increment_ref_count(__builtin_string(""));
                    __dec_obj88 = come_decrement_ref_count(__dec_obj88, (void*)0, (void*)0, 0,0, (void*)0);
                    info->p=p;
                    info->sline=sline;
                    break;
                }
            }
            skip_spaces_and_lf(info);
            if(*info->p!=62) {
                __dec_obj89=type_name,
                type_name=(char*)come_increment_ref_count(parse_word(0,info));
                __dec_obj89 = come_decrement_ref_count(__dec_obj89, (void*)0, (void*)0, 0,0, (void*)0);
                skip_spaces_and_lf(info);
                if(*info->p==60) {
                    p_35=info->p;
                    sline_36=info->sline;
                    info->p++;
                    skip_spaces_and_lf(info);
                    while(1) {
                        if(*info->p==62) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(*info->p==123) {
                            }
                            else {
                                info->p=p_35;
                                info->sline=sline_36;
                            }
                            break;
                        }
                        else if(*info->p==0) {
                            err_msg(info,"invalid struct definition");
                            __result_obj__0 = (struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$phint$*)(__right_value1=tuple3$3sType$phchar$phint$_initialize((struct tuple3$3sType$phchar$phint$*)come_increment_ref_count((struct tuple3$3sType$phchar$phint$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$phint$)*(1), "06type.nc", 1201, "struct tuple3$3sType$phchar$phint$")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),0))));
                            (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
                            ((alignas_) ? alignas_ = come_decrement_ref_count(alignas_, ((struct sNode*)alignas_)->finalize, ((struct sNode*)alignas_)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                            (union_attribute = come_decrement_ref_count(union_attribute, (void*)0, (void*)0, 0, 0, (void*)0));
                            come_call_finalizer(tuple3$3sType$phchar$phint$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                            neo_current_frame = fr.prev;
                            come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                            return __result_obj__0;
                        }
                        else {
                            info->p++;
                        }
                    }
                }
                if(*info->p==123) {
                    p_37=info->p;
                    sline_38=info->sline;
                    ((char*)(__right_value0=skip_block(info,0)));
                    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                    (void)((char*)(__right_value0=parse_struct_attribute(info)));
                    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                    if(*info->p==59) {
                        info->p=head;
                        info->sline=head_sline;
                        info->define_struct=1;
                        __result_obj__0 = (struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$phint$*)(__right_value1=tuple3$3sType$phchar$phint$_initialize((struct tuple3$3sType$phchar$phint$*)come_increment_ref_count((struct tuple3$3sType$phchar$phint$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$phint$)*(1), "06type.nc", 1221, "struct tuple3$3sType$phchar$phint$")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),0))));
                        (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
                        ((alignas_) ? alignas_ = come_decrement_ref_count(alignas_, ((struct sNode*)alignas_)->finalize, ((struct sNode*)alignas_)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                        (union_attribute = come_decrement_ref_count(union_attribute, (void*)0, (void*)0, 0, 0, (void*)0));
                        come_call_finalizer(tuple3$3sType$phchar$phint$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                        neo_current_frame = fr.prev;
                        come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                        return __result_obj__0;
                    }
                    else {
                        info->p=p_37;
                        info->sline=sline_38;
                        node=(struct sNode*)come_increment_ref_count(parse_struct((char*)come_increment_ref_count(type_name),(char*)come_increment_ref_count(union_attribute),info,0));
                        Value=node_compile(node,info);
                        if(!Value) {
                            __result_obj__0 = (struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$phint$*)(__right_value1=tuple3$3sType$phchar$phint$_initialize((struct tuple3$3sType$phchar$phint$*)come_increment_ref_count((struct tuple3$3sType$phchar$phint$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$phint$)*(1), "06type.nc", 1230, "struct tuple3$3sType$phchar$phint$")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),0))));
                            ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                            (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
                            ((alignas_) ? alignas_ = come_decrement_ref_count(alignas_, ((struct sNode*)alignas_)->finalize, ((struct sNode*)alignas_)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                            (union_attribute = come_decrement_ref_count(union_attribute, (void*)0, (void*)0, 0, 0, (void*)0));
                            come_call_finalizer(tuple3$3sType$phchar$phint$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                            neo_current_frame = fr.prev;
                            come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                            return __result_obj__0;
                        }
                        else {
                        }
                        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                        break;
                        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                    }
                }
            }
        }
        else if(string_operator_equals(type_name,"union")) {
            union_=1;
            __dec_obj92=union_attribute,
            union_attribute=(char*)come_increment_ref_count(parse_struct_attribute(info));
            __dec_obj92 = come_decrement_ref_count(__dec_obj92, (void*)0, (void*)0, 0,0, (void*)0);
            if(*info->p==123) {
                p_39=info->p;
                sline_40=info->sline;
                ((char*)(__right_value0=skip_block(info,0)));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                if((info->end-info->p)>=strlen("__attribute__")&&memcmp(info->p,"__attribute__",strlen("__attribute__"))==0) {
                    ((struct tuple2$2char$phchar$ph*)(__right_value0=parse_attribute(info)));
                    come_call_finalizer(tuple2$2char$phchar$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                }
                if(*info->p==59) {
                    info->p=head;
                    info->sline=head_sline;
                    info->define_struct=0;
                    anonymous_type=1;
                    __dec_obj93=type_name,
                    type_name=(char*)come_increment_ref_count(__builtin_string(""));
                    __dec_obj93 = come_decrement_ref_count(__dec_obj93, (void*)0, (void*)0, 0,0, (void*)0);
                    info->p=p_39;
                    info->sline=sline_40;
                    break;
                }
                else {
                    anonymous_type=1;
                    __dec_obj94=type_name,
                    type_name=(char*)come_increment_ref_count(__builtin_string(""));
                    __dec_obj94 = come_decrement_ref_count(__dec_obj94, (void*)0, (void*)0, 0,0, (void*)0);
                    info->p=p_39;
                    info->sline=sline_40;
                    break;
                }
            }
            skip_spaces_and_lf(info);
            __dec_obj95=type_name,
            type_name=(char*)come_increment_ref_count(parse_word(0,info));
            __dec_obj95 = come_decrement_ref_count(__dec_obj95, (void*)0, (void*)0, 0,0, (void*)0);
            skip_spaces_and_lf(info);
            if(*info->p==123) {
                p_41=info->p;
                sline_42=info->sline;
                ((char*)(__right_value0=skip_block(info,0)));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                if(*info->p==59) {
                    info->p=head;
                    info->sline=head_sline;
                    info->define_struct=1;
                    __result_obj__0 = (struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$phint$*)(__right_value1=tuple3$3sType$phchar$phint$_initialize((struct tuple3$3sType$phchar$phint$*)come_increment_ref_count((struct tuple3$3sType$phchar$phint$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$phint$)*(1), "06type.nc", 1287, "struct tuple3$3sType$phchar$phint$")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),0))));
                    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
                    ((alignas_) ? alignas_ = come_decrement_ref_count(alignas_, ((struct sNode*)alignas_)->finalize, ((struct sNode*)alignas_)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                    (union_attribute = come_decrement_ref_count(union_attribute, (void*)0, (void*)0, 0, 0, (void*)0));
                    come_call_finalizer(tuple3$3sType$phchar$phint$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    neo_current_frame = fr.prev;
                    come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                    return __result_obj__0;
                }
                else {
                    anonymous_type=1;
                    info->p=p_41;
                    info->sline=sline_42;
                    break;
                }
            }
        }
        else if(string_operator_equals(type_name,"enum")) {
            enum_=1;
            skip_spaces_and_lf(info);
            ((struct tuple2$2char$phchar$ph*)(__right_value0=parse_attribute(info)));
            come_call_finalizer(tuple2$2char$phchar$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            if(*info->p==58) {
                info->p++;
                skip_spaces_and_lf(info);
                multiple_assign_var4=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=parse_type(info,0,1,0)));
                type=(struct sType*)come_increment_ref_count(multiple_assign_var4->v1);
                name=(char*)come_increment_ref_count(multiple_assign_var4->v2);
                err=multiple_assign_var4->v3;
                come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
            }
            skip_spaces_and_lf(info);
            if(*info->p==123) {
                p_43=info->p;
                sline_44=info->sline;
                ((char*)(__right_value0=skip_block(info,0)));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                if((info->end-info->p)>=strlen("__attribute__")&&memcmp(info->p,"__attribute__",strlen("__attribute__"))==0) {
                    ((struct tuple2$2char$phchar$ph*)(__right_value0=parse_attribute(info)));
                    come_call_finalizer(tuple2$2char$phchar$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                }
                if(*info->p==59) {
                    info->p=head;
                    info->sline=head_sline;
                    info->define_struct=1;
                    __result_obj__0 = (struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$phint$*)(__right_value1=tuple3$3sType$phchar$phint$_initialize((struct tuple3$3sType$phchar$phint$*)come_increment_ref_count((struct tuple3$3sType$phchar$phint$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$phint$)*(1), "06type.nc", 1327, "struct tuple3$3sType$phchar$phint$")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),0))));
                    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
                    ((alignas_) ? alignas_ = come_decrement_ref_count(alignas_, ((struct sNode*)alignas_)->finalize, ((struct sNode*)alignas_)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                    (union_attribute = come_decrement_ref_count(union_attribute, (void*)0, (void*)0, 0, 0, (void*)0));
                    come_call_finalizer(tuple3$3sType$phchar$phint$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    neo_current_frame = fr.prev;
                    come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                    return __result_obj__0;
                }
                else {
                    anonymous_type=1;
                    __dec_obj96=type_name,
                    type_name=(char*)come_increment_ref_count(__builtin_string(""));
                    __dec_obj96 = come_decrement_ref_count(__dec_obj96, (void*)0, (void*)0, 0,0, (void*)0);
                    info->p=p_43;
                    info->sline=sline_44;
                    break;
                }
            }
            skip_spaces_and_lf(info);
            __dec_obj97=type_name,
            type_name=(char*)come_increment_ref_count(parse_word(0,info));
            __dec_obj97 = come_decrement_ref_count(__dec_obj97, (void*)0, (void*)0, 0,0, (void*)0);
            skip_spaces_and_lf(info);
            if(*info->p==58) {
                info->p++;
                skip_spaces_and_lf(info);
                multiple_assign_var5=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=parse_type(info,0,1,0)));
                type_45=(struct sType*)come_increment_ref_count(multiple_assign_var5->v1);
                name_46=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                err_47=multiple_assign_var5->v3;
                come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                come_call_finalizer(sType_finalize, type_45, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (name_46 = come_decrement_ref_count(name_46, (void*)0, (void*)0, 0, 0, (void*)0));
            }
            skip_spaces_and_lf(info);
            if(*info->p==123) {
                p_48=info->p;
                sline_49=info->sline;
                ((char*)(__right_value0=skip_block(info,0)));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                if(*info->p==59) {
                    info->p=head;
                    info->sline=head_sline;
                    info->define_struct=1;
                    __result_obj__0 = (struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$phint$*)(__right_value1=tuple3$3sType$phchar$phint$_initialize((struct tuple3$3sType$phchar$phint$*)come_increment_ref_count((struct tuple3$3sType$phchar$phint$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$phint$)*(1), "06type.nc", 1363, "struct tuple3$3sType$phchar$phint$")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),0))));
                    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
                    ((alignas_) ? alignas_ = come_decrement_ref_count(alignas_, ((struct sNode*)alignas_)->finalize, ((struct sNode*)alignas_)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                    (union_attribute = come_decrement_ref_count(union_attribute, (void*)0, (void*)0, 0, 0, (void*)0));
                    come_call_finalizer(tuple3$3sType$phchar$phint$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    neo_current_frame = fr.prev;
                    come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                    return __result_obj__0;
                }
                else {
                    anonymous_type=1;
                    info->p=p_48;
                    info->sline=sline_49;
                    break;
                }
            }
        }
        else if(string_operator_equals(type_name,"long")) {
            {
                p_50=info->p;
                sline_51=info->sline;
                if(!(xisalpha(*info->p)||*info->p==95)) {
                    __dec_obj98=type_name,
                    type_name=(char*)come_increment_ref_count(__builtin_string("long"));
                    __dec_obj98 = come_decrement_ref_count(__dec_obj98, (void*)0, (void*)0, 0,0, (void*)0);
                    break;
                }
                else {
                    p2=info->p;
                    sline2=info->sline;
                    __dec_obj99=type_name,
                    type_name=(char*)come_increment_ref_count(parse_word(0,info));
                    __dec_obj99 = come_decrement_ref_count(__dec_obj99, (void*)0, (void*)0, 0,0, (void*)0);
                    if(string_operator_equals(type_name,"double")) {
                        long_=1;
                        break;
                    }
                    else if(string_operator_equals(type_name,"unsigned")) {
                        __dec_obj100=type_name,
                        type_name=(char*)come_increment_ref_count(parse_word(0,info));
                        __dec_obj100 = come_decrement_ref_count(__dec_obj100, (void*)0, (void*)0, 0,0, (void*)0);
                        if(string_operator_equals(type_name,"int")) {
                            long_=1;
                            unsigned_=1;
                            break;
                        }
                    }
                    else if(string_operator_equals(type_name,"signed")) {
                        __dec_obj101=type_name,
                        type_name=(char*)come_increment_ref_count(parse_word(0,info));
                        __dec_obj101 = come_decrement_ref_count(__dec_obj101, (void*)0, (void*)0, 0,0, (void*)0);
                        if(string_operator_equals(type_name,"int")) {
                            long_=1;
                            unsigned_=0;
                            break;
                        }
                    }
                    else if(string_operator_equals(type_name,"long")) {
                        p_50=info->p;
                        sline_51=info->sline;
                        if(xisalpha(*info->p)||*info->p==95) {
                            long_long=1;
                            __dec_obj102=type_name,
                            type_name=(char*)come_increment_ref_count(parse_word(0,info));
                            __dec_obj102 = come_decrement_ref_count(__dec_obj102, (void*)0, (void*)0, 0,0, (void*)0);
                        }
                        else if(*info->p==58) {
                            __dec_obj103=type_name,
                            type_name=(char*)come_increment_ref_count(__builtin_string("long"));
                            __dec_obj103 = come_decrement_ref_count(__dec_obj103, (void*)0, (void*)0, 0,0, (void*)0);
                            info->p=p2;
                            info->sline=sline2;
                            break;
                        }
                        else {
                            long_=1;
                            break;
                        }
                        if(string_operator_equals(type_name,"int")) {
                            long_long=1;
                            break;
                        }
                        else if(!is_type_name(type_name,info)) {
                            __dec_obj104=type_name,
                            type_name=(char*)come_increment_ref_count(__builtin_string("long"));
                            __dec_obj104 = come_decrement_ref_count(__dec_obj104, (void*)0, (void*)0, 0,0, (void*)0);
                            long_long=1;
                            info->p=p_50;
                            info->sline=sline_51;
                            break;
                        }
                    }
                    else if(is_type_name(type_name,info)) {
                        if(long_) {
                            long_long=1;
                            long_=0;
                        }
                        else {
                            long_=1;
                        }
                        break;
                    }
                    else {
                        info->p=p_50;
                        info->sline=sline_51;
                        __dec_obj105=type_name,
                        type_name=(char*)come_increment_ref_count(__builtin_string("long"));
                        __dec_obj105 = come_decrement_ref_count(__dec_obj105, (void*)0, (void*)0, 0,0, (void*)0);
                        break;
                    }
                }
            }
        }
        else if(string_operator_equals(type_name,"signed")) {
            unsigned_=0;
            if(xisalpha(*info->p)||*info->p==95) {
                p_52=info->p;
                sline_53=info->sline;
                __dec_obj106=type_name,
                type_name=(char*)come_increment_ref_count(parse_word(0,info));
                __dec_obj106 = come_decrement_ref_count(__dec_obj106, (void*)0, (void*)0, 0,0, (void*)0);
                if(string_operator_equals(type_name,"char")||string_operator_equals(type_name,"short")||string_operator_equals(type_name,"long")||string_operator_equals(type_name,"int")) {
                }
                else {
                    __dec_obj107=type_name,
                    type_name=(char*)come_increment_ref_count(xsprintf("int"));
                    __dec_obj107 = come_decrement_ref_count(__dec_obj107, (void*)0, (void*)0, 0,0, (void*)0);
                    info->p=p_52;
                    info->sline=sline_53;
                    break;
                }
            }
            else {
                __dec_obj108=type_name,
                type_name=(char*)come_increment_ref_count(xsprintf("int"));
                __dec_obj108 = come_decrement_ref_count(__dec_obj108, (void*)0, (void*)0, 0,0, (void*)0);
                break;
            }
        }
        else if(string_operator_equals(type_name,"unsigned")) {
            unsigned_=1;
            if(xisalpha(*info->p)||*info->p==95) {
                p_54=info->p;
                sline_55=info->sline;
                __dec_obj109=type_name,
                type_name=(char*)come_increment_ref_count(parse_word(0,info));
                __dec_obj109 = come_decrement_ref_count(__dec_obj109, (void*)0, (void*)0, 0,0, (void*)0);
                if(string_operator_equals(type_name,"short")) {
                    if(xisalpha(*info->p)||*info->p==95) {
                        p_56=info->p;
                        sline_57=info->sline;
                        __dec_obj110=type_name,
                        type_name=(char*)come_increment_ref_count(parse_word(0,info));
                        __dec_obj110 = come_decrement_ref_count(__dec_obj110, (void*)0, (void*)0, 0,0, (void*)0);
                        if(is_type_name(type_name,info)) {
                            short_=1;
                        }
                        else {
                            short_=1;
                            __dec_obj111=type_name,
                            type_name=(char*)come_increment_ref_count(__builtin_string("int"));
                            __dec_obj111 = come_decrement_ref_count(__dec_obj111, (void*)0, (void*)0, 0,0, (void*)0);
                            info->p=p_56;
                            info->sline=sline_57;
                        }
                    }
                    else {
                        short_=1;
                        __dec_obj112=type_name,
                        type_name=(char*)come_increment_ref_count(__builtin_string("int"));
                        __dec_obj112 = come_decrement_ref_count(__dec_obj112, (void*)0, (void*)0, 0,0, (void*)0);
                        break;
                    }
                }
                else if(string_operator_equals(type_name,"long")) {
                    if(xisalpha(*info->p)||*info->p==95) {
                        p_58=info->p;
                        sline_59=info->sline;
                        __dec_obj113=type_name,
                        type_name=(char*)come_increment_ref_count(parse_word(0,info));
                        __dec_obj113 = come_decrement_ref_count(__dec_obj113, (void*)0, (void*)0, 0,0, (void*)0);
                        if(is_type_name(type_name,info)) {
                            long_=1;
                        }
                        else {
                            long_=1;
                            __dec_obj114=type_name,
                            type_name=(char*)come_increment_ref_count(__builtin_string("int"));
                            __dec_obj114 = come_decrement_ref_count(__dec_obj114, (void*)0, (void*)0, 0,0, (void*)0);
                            info->p=p_58;
                            info->sline=sline_59;
                        }
                    }
                    else {
                        long_=1;
                        __dec_obj115=type_name,
                        type_name=(char*)come_increment_ref_count(__builtin_string("int"));
                        __dec_obj115 = come_decrement_ref_count(__dec_obj115, (void*)0, (void*)0, 0,0, (void*)0);
                        break;
                    }
                }
                else if(!is_type_name(type_name,info)) {
                    __dec_obj116=type_name,
                    type_name=(char*)come_increment_ref_count(__builtin_string("int"));
                    __dec_obj116 = come_decrement_ref_count(__dec_obj116, (void*)0, (void*)0, 0,0, (void*)0);
                    info->p=p_54;
                    info->sline=sline_55;
                    break;
                }
            }
            else {
                __dec_obj117=type_name,
                type_name=(char*)come_increment_ref_count(__builtin_string("int"));
                __dec_obj117 = come_decrement_ref_count(__dec_obj117, (void*)0, (void*)0, 0,0, (void*)0);
                break;
            }
        }
        else if(string_operator_equals(type_name,"signed")||string_operator_equals(type_name,"__signed__")) {
            unsigned_=0;
            p_60=info->p;
            sline_61=info->sline;
            __dec_obj118=type_name,
            type_name=(char*)come_increment_ref_count(parse_word(0,info));
            __dec_obj118 = come_decrement_ref_count(__dec_obj118, (void*)0, (void*)0, 0,0, (void*)0);
            if(*info->p==58&&*(info->p+1)==58) {
                __dec_obj119=type_name,
                type_name=(char*)come_increment_ref_count(__builtin_string("int"));
                __dec_obj119 = come_decrement_ref_count(__dec_obj119, (void*)0, (void*)0, 0,0, (void*)0);
                info->p=p_60;
                info->sline=sline_61;
                break;
            }
        }
        else if(string_operator_equals(type_name,"register")) {
            register_=1;
            __dec_obj120=type_name,
            type_name=(char*)come_increment_ref_count(parse_word(0,info));
            __dec_obj120 = come_decrement_ref_count(__dec_obj120, (void*)0, (void*)0, 0,0, (void*)0);
        }
        else if(string_operator_equals(type_name,"restrict")) {
            restrict_=1;
            __dec_obj121=type_name,
            type_name=(char*)come_increment_ref_count(parse_word(0,info));
            __dec_obj121 = come_decrement_ref_count(__dec_obj121, (void*)0, (void*)0, 0,0, (void*)0);
        }
        else if(string_operator_equals(type_name,"_Addr")) {
            __dec_obj122=type_name,
            type_name=(char*)come_increment_ref_count(parse_word(0,info));
            __dec_obj122 = come_decrement_ref_count(__dec_obj122, (void*)0, (void*)0, 0,0, (void*)0);
        }
        else if(string_operator_equals(type_name,"__restrict")) {
            restrict_=1;
            __dec_obj123=type_name,
            type_name=(char*)come_increment_ref_count(parse_word(0,info));
            __dec_obj123 = come_decrement_ref_count(__dec_obj123, (void*)0, (void*)0, 0,0, (void*)0);
        }
        else if(string_operator_equals(type_name,"tup")) {
            if(*info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                expected_next_character(58,info);
            }
            __dec_obj124=type_name,
            type_name=(char*)come_increment_ref_count(parse_word(0,info));
            __dec_obj124 = come_decrement_ref_count(__dec_obj124, (void*)0, (void*)0, 0,0, (void*)0);
            parse_multiple_type=1;
            tuple_=1;
        }
        else if(string_operator_equals(type_name,"short")) {
            short_=0;
            if(*info->p==58) {
                break;
            }
            else if(xisalnum(*info->p)) {
                p_62=info->p;
                sline_63=info->sline;
                __dec_obj125=type_name,
                type_name=(char*)come_increment_ref_count(parse_word(0,info));
                __dec_obj125 = come_decrement_ref_count(__dec_obj125, (void*)0, (void*)0, 0,0, (void*)0);
                if(*info->p==58&&*(info->p+1)==58) {
                    __dec_obj126=type_name,
                    type_name=(char*)come_increment_ref_count(__builtin_string("short"));
                    __dec_obj126 = come_decrement_ref_count(__dec_obj126, (void*)0, (void*)0, 0,0, (void*)0);
                    info->p=p_62;
                    info->sline=sline_63;
                    break;
                }
                if(string_operator_equals(type_name,"int")) {
                    short_=1;
                    break;
                }
                else if(string_operator_equals(type_name,"short")) {
                    short_=1;
                    break;
                }
                else if(is_type_name(type_name,info)) {
                    info->p=p_62;
                    info->sline=sline_63;
                }
                else {
                    __dec_obj127=type_name,
                    type_name=(char*)come_increment_ref_count(__builtin_string("short"));
                    __dec_obj127 = come_decrement_ref_count(__dec_obj127, (void*)0, (void*)0, 0,0, (void*)0);
                    info->p=p_62;
                    info->sline=sline_63;
                    break;
                }
            }
            else {
                break;
            }
        }
        else {
            break;
        }
    }
    if((string_operator_equals(type_name,"typeof")||string_operator_equals(type_name,"__typeof__"))&&*info->p==40) {
        info->p++;
        skip_spaces_and_lf(info);
        no_comma=info->no_comma;
        info->no_comma=0;
        exp=(struct sNode*)come_increment_ref_count(expression_v13(info,0));
        info->no_comma=no_comma;
        expected_next_character(41,info);
        type_64=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), (void*)0, 1657, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),0,info,0));
        __dec_obj128=type_64->mTypeOfNode,
        type_64->mTypeOfNode=(struct sNode*)come_increment_ref_count(exp);
        (__dec_obj128 ? __dec_obj128 = come_decrement_ref_count(__dec_obj128, ((struct sNode*)__dec_obj128)->finalize, ((struct sNode*)__dec_obj128)->_protocol_obj, 0,0, (void*)0) :0);
        var_name=((void*)0);
        while(1) {
            if(*info->p==42) {
                info->p++;
                skip_spaces_and_lf(info);
                skip_pointer_attribute(info);
                type_64->mPointerNum++;
            }
            else if(*info->p==37) {
                info->p++;
                skip_spaces_and_lf(info);
                type_64->mHeap=1;
            }
            else if(*info->p==96) {
                info->p++;
                skip_spaces_and_lf(info);
                type_64->mNoCallingDestructor=1;
            }
            else {
                break;
            }
        }
        attribute=((void*)0);
        if(parse_variable_name) {
            if(*info->p==58) {
                __dec_obj129=var_name,
                var_name=(char*)come_increment_ref_count(__builtin_string(""));
                __dec_obj129 = come_decrement_ref_count(__dec_obj129, (void*)0, (void*)0, 0,0, (void*)0);
            }
            else if(xisalnum(*info->p)||*info->p==95) {
                __dec_obj130=var_name,
                var_name=(char*)come_increment_ref_count(parse_word(0,info));
                __dec_obj130 = come_decrement_ref_count(__dec_obj130, (void*)0, (void*)0, 0,0, (void*)0);
            }
            else {
                static int num_anonymous_var_name=0;
                num_anonymous_var_name++;
                __dec_obj131=var_name,
                var_name=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameY%d",num_anonymous_var_name));
                __dec_obj131 = come_decrement_ref_count(__dec_obj131, (void*)0, (void*)0, 0,0, (void*)0);
                type_64->mAnonymousVarName=1;
            }
            if(*info->p==58) {
                info->p++;
                skip_spaces_and_lf(info);
                no_comma_65=info->no_comma;
                info->no_comma=1;
                node_66=(struct sNode*)come_increment_ref_count(expression_v13(info,0));
                info->no_comma=no_comma_65;
                __dec_obj132=type_64->mSizeNum,
                type_64->mSizeNum=(struct sNode*)come_increment_ref_count(node_66);
                (__dec_obj132 ? __dec_obj132 = come_decrement_ref_count(__dec_obj132, ((struct sNode*)__dec_obj132)->finalize, ((struct sNode*)__dec_obj132)->_protocol_obj, 0,0, (void*)0) :0);
                ((node_66) ? node_66 = come_decrement_ref_count(node_66, ((struct sNode*)node_66)->finalize, ((struct sNode*)node_66)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            }
            attribute2=(char*)come_increment_ref_count(parse_struct_attribute(info));
            if(string_operator_not_equals(attribute,"")&&string_operator_not_equals(attribute2,"")) {
                __dec_obj133=type_64->mAttribute,
                type_64->mAttribute=(char*)come_increment_ref_count(string_operator_add(((char*)(__right_value1=string_operator_add(attribute," "))),attribute2));
                __dec_obj133 = come_decrement_ref_count(__dec_obj133, (void*)0, (void*)0, 0,0, (void*)0);
                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            }
            else if(string_operator_not_equals(attribute2,"")) {
                __dec_obj134=type_64->mAttribute,
                type_64->mAttribute=(char*)come_increment_ref_count(attribute2);
                __dec_obj134 = come_decrement_ref_count(__dec_obj134, (void*)0, (void*)0, 0,0, (void*)0);
            }
            (attribute2 = come_decrement_ref_count(attribute2, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        __result_obj__0 = (struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$phint$*)(__right_value1=tuple3$3sType$phchar$phint$_initialize((struct tuple3$3sType$phchar$phint$*)come_increment_ref_count((struct tuple3$3sType$phchar$phint$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$phint$)*(1), "06type.nc", 1725, "struct tuple3$3sType$phchar$phint$")),(struct sType*)come_increment_ref_count(type_64),(char*)come_increment_ref_count(var_name),1))));
        ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(sType_finalize, type_64, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0));
        (attribute = come_decrement_ref_count(attribute, (void*)0, (void*)0, 0, 0, (void*)0));
        (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
        ((alignas_) ? alignas_ = come_decrement_ref_count(alignas_, ((struct sNode*)alignas_)->finalize, ((struct sNode*)alignas_)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        (union_attribute = come_decrement_ref_count(union_attribute, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(tuple3$3sType$phchar$phint$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        neo_current_frame = fr.prev;
        come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
        ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(sType_finalize, type_64, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0));
        (attribute = come_decrement_ref_count(attribute, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    attribute_67=(char*)come_increment_ref_count(parse_struct_attribute(info));
    skip_pointer_attribute(info);
    pointer_num=0;
    heap=0;
    refference=0;
    no_refference=0;
    channel=0;
    deffer_=0;
    any_class=0;
    vtable=0;
    while(1) {
        if(*info->p==42) {
            info->p++;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            pointer_num++;
        }
        else if(*info->p==37) {
            info->p++;
            skip_spaces_and_lf(info);
            heap=1;
        }
        else if(gComePthread&&*info->p==64) {
            info->p++;
            skip_spaces_and_lf(info);
            channel=1;
        }
        else {
            break;
        }
    }
    skip_pointer_attribute(info);
    tuple_name=((void*)0);
    if(*info->p==58&&*(info->p+1)!=58&&tuple_) {
        info->p++;
        skip_spaces_and_lf(info);
        __dec_obj135=tuple_name,
        tuple_name=(char*)come_increment_ref_count(parse_word(0,info));
        __dec_obj135 = come_decrement_ref_count(__dec_obj135, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(atomic_&&*info->p==41) {
        expected_next_character(41,info);
    }
    if(type_name_&&*info->p==41) {
        expected_next_character(41,info);
    }
    lambda_flag=0;
    {
        pX=info->p;
        slineX=info->sline;
        if(xisalpha(*info->p)||*info->p==95) {
            (void)((char*)(__right_value0=parse_word(0,info)));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            if(*info->p==40&&info->in_typedef) {
                lambda_flag=1;
            }
        }
        info->p=pX;
        info->sline=slineX;
    }
    function_pointer_flag=0;
    pointer_to_array_flag=0;
    {
        p_70=info->p;
        sline_71=info->sline;
        if(*info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            if(*info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(*info->p==42||*info->p==94) {
                while(*info->p==42||*info->p==94) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                function_pointer_flag=1;
                word=((void*)0);
                if(xisalpha(*info->p)||*info->p==95) {
                    __dec_obj136=word,
                    word=(char*)come_increment_ref_count(parse_word(0,info));
                    __dec_obj136 = come_decrement_ref_count(__dec_obj136, (void*)0, (void*)0, 0,0, (void*)0);
                }
                if(*info->p==91) {
                    pointer_to_array_flag=1;
                    while(*info->p==91) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        if(*info->p==93) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            break;
                        }
                        no_output_come_code=info->no_output_come_code;
                        info->no_output_come_code=1;
                        exp_72=(struct sNode*)come_increment_ref_count(expression_v13(info,0));
                        info->no_output_come_code=no_output_come_code;
                        if(*info->p==93) {
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        ((exp_72) ? exp_72 = come_decrement_ref_count(exp_72, ((struct sNode*)exp_72)->finalize, ((struct sNode*)exp_72)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                    }
                    if(*info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        if(*info->p==40) {
                            function_pointer_flag=1;
                            pointer_to_array_flag=0;
                        }
                        else if(*info->p==91) {
                            function_pointer_flag=0;
                            pointer_to_array_flag=1;
                        }
                    }
                }
                else if(*info->p==41) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(*info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        pointer_to_array_flag=1;
                        function_pointer_flag=0;
                    }
                    if(*info->p==91) {
                        pointer_to_array_flag=1;
                        function_pointer_flag=0;
                    }
                    else if(*info->p==40) {
                        function_pointer_flag=1;
                    }
                }
                (word = come_decrement_ref_count(word, (void*)0, (void*)0, 0, 0, (void*)0));
            }
            else if(xisalpha(*info->p)||*info->p==95) {
                word_73=(char*)come_increment_ref_count(parse_word(0,info));
                if(*info->p==41) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(*info->p==40) {
                        function_pointer_flag=1;
                    }
                }
                (word_73 = come_decrement_ref_count(word_73, (void*)0, (void*)0, 0, 0, (void*)0));
            }
        }
        info->p=p_70;
        info->sline=sline_71;
    }
    var_name_between_brace=0;
    {
        p_74=info->p;
        sline_75=info->sline;
        if(*info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            if(xisalpha(*info->p)||*info->p==95) {
                word_76=(char*)come_increment_ref_count(parse_word(0,info));
                if(is_type_name(word_76,info)) {
                }
                else if(*info->p==41) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(*info->p!=40) {
                        var_name_between_brace=1;
                    }
                }
                (word_76 = come_decrement_ref_count(word_76, (void*)0, (void*)0, 0, 0, (void*)0));
            }
        }
        info->p=p_74;
        info->sline=sline_75;
    }
    if(anonymous_type&&*info->p==123) {
        static int anonymous_num=0;
        if(struct_) {
            anonymous=0;
            if(string_operator_equals(type_name,"")) {
                anonymous=1;
                __dec_obj137=type_name,
                type_name=(char*)come_increment_ref_count(xsprintf("anonymous_typeX%d",++anonymous_num));
                __dec_obj137 = come_decrement_ref_count(__dec_obj137, (void*)0, (void*)0, 0,0, (void*)0);
            }
            node_77=(struct sNode*)come_increment_ref_count(parse_struct((char*)come_increment_ref_count(type_name),(char*)come_increment_ref_count(union_attribute),info,anonymous));
            Value_78=node_compile(node_77,info);
            if(!Value_78) {
                err_msg(info,"parse_struct is failed");
                __result_obj__0 = (struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$phint$*)(__right_value1=tuple3$3sType$phchar$phint$_initialize((struct tuple3$3sType$phchar$phint$*)come_increment_ref_count((struct tuple3$3sType$phchar$phint$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$phint$)*(1), "06type.nc", 1952, "struct tuple3$3sType$phchar$phint$")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),0))));
                ((node_77) ? node_77 = come_decrement_ref_count(node_77, ((struct sNode*)node_77)->finalize, ((struct sNode*)node_77)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
                ((alignas_) ? alignas_ = come_decrement_ref_count(alignas_, ((struct sNode*)alignas_)->finalize, ((struct sNode*)alignas_)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                (union_attribute = come_decrement_ref_count(union_attribute, (void*)0, (void*)0, 0, 0, (void*)0));
                (attribute_67 = come_decrement_ref_count(attribute_67, (void*)0, (void*)0, 0, 0, (void*)0));
                (tuple_name = come_decrement_ref_count(tuple_name, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(sType_finalize, type_68, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (var_name_69 = come_decrement_ref_count(var_name_69, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(tuple3$3sType$phchar$phint$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                neo_current_frame = fr.prev;
                come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
            else {
            }
            pointer_num_79=0;
            while(*info->p==42) {
                info->p++;
                skip_spaces_and_lf(info);
                skip_pointer_attribute(info);
                pointer_num_79++;
            }
            __dec_obj138=type_68,
            type_68=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)(__right_value0=map$2char$phsType$ph_operator_load_element(info->types,type_name)))));
            come_call_finalizer(sType_finalize, __dec_obj138,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            if(type_68==((void*)0)) {
                __dec_obj139=type_68,
                type_68=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), (void*)0, 1969, "struct sType*")),(char*)come_increment_ref_count(__builtin_string(type_name)),0,info,0));
                come_call_finalizer(sType_finalize, __dec_obj139,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            klass=(struct sClass*)come_increment_ref_count(map$2char$phsClass$ph_operator_load_element(info->classes,type_name));
            klass->mAnonymous=1;
            type_68->mAnonymous=anonymous;
            type_68->mAnonymous=anonymous;
            __dec_obj140=type_68->mAnonymousName,
            type_68->mAnonymousName=(char*)come_increment_ref_count(__builtin_string(type_name));
            __dec_obj140 = come_decrement_ref_count(__dec_obj140, (void*)0, (void*)0, 0,0, (void*)0);
            type_68->mPointerNum=pointer_num_79;
            ((node_77) ? node_77 = come_decrement_ref_count(node_77, ((struct sNode*)node_77)->finalize, ((struct sNode*)node_77)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            come_call_finalizer(sClass_finalize, klass, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(enum_) {
            if(string_operator_equals(type_name,"")) {
                if(!info->no_output_err) {
                    __dec_obj141=type_name,
                    type_name=(char*)come_increment_ref_count(xsprintf("anonymous_typeY%d",anonymous_num));
                    __dec_obj141 = come_decrement_ref_count(__dec_obj141, (void*)0, (void*)0, 0,0, (void*)0);
                }
                else {
                    __dec_obj142=type_name,
                    type_name=(char*)come_increment_ref_count(xsprintf("anonymous_typeY%d",++anonymous_num));
                    __dec_obj142 = come_decrement_ref_count(__dec_obj142, (void*)0, (void*)0, 0,0, (void*)0);
                }
            }
            node_80=(struct sNode*)come_increment_ref_count(parse_enum((char*)come_increment_ref_count(type_name),(char*)come_increment_ref_count(union_attribute),info));
            if(!info->no_output_err) {
                Value_81=node_compile(node_80,info);
                if(!Value_81) {
                    printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                    __result_obj__0 = (struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$phint$*)(__right_value1=tuple3$3sType$phchar$phint$_initialize((struct tuple3$3sType$phchar$phint$*)come_increment_ref_count((struct tuple3$3sType$phchar$phint$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$phint$)*(1), "06type.nc", 1994, "struct tuple3$3sType$phchar$phint$")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),0))));
                    ((node_80) ? node_80 = come_decrement_ref_count(node_80, ((struct sNode*)node_80)->finalize, ((struct sNode*)node_80)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
                    ((alignas_) ? alignas_ = come_decrement_ref_count(alignas_, ((struct sNode*)alignas_)->finalize, ((struct sNode*)alignas_)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                    (union_attribute = come_decrement_ref_count(union_attribute, (void*)0, (void*)0, 0, 0, (void*)0));
                    (attribute_67 = come_decrement_ref_count(attribute_67, (void*)0, (void*)0, 0, 0, (void*)0));
                    (tuple_name = come_decrement_ref_count(tuple_name, (void*)0, (void*)0, 0, 0, (void*)0));
                    come_call_finalizer(sType_finalize, type_68, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    (var_name_69 = come_decrement_ref_count(var_name_69, (void*)0, (void*)0, 0, 0, (void*)0));
                    come_call_finalizer(tuple3$3sType$phchar$phint$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    neo_current_frame = fr.prev;
                    come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                    return __result_obj__0;
                }
                else {
                }
            }
            __dec_obj143=type_68,
            type_68=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)(__right_value0=map$2char$phsType$ph_operator_load_element(info->types,type_name)))));
            come_call_finalizer(sType_finalize, __dec_obj143,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            if(type_68==((void*)0)) {
                __dec_obj144=type_68,
                type_68=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), (void*)0, 2001, "struct sType*")),(char*)come_increment_ref_count(__builtin_string(type_name)),0,info,0));
                come_call_finalizer(sType_finalize, __dec_obj144,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            ((node_80) ? node_80 = come_decrement_ref_count(node_80, ((struct sNode*)node_80)->finalize, ((struct sNode*)node_80)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
        else if(union_) {
            anonymous_82=0;
            if(string_operator_equals(type_name,"")) {
                __dec_obj145=type_name,
                type_name=(char*)come_increment_ref_count(xsprintf("anonymous_typeZ%d",++anonymous_num));
                __dec_obj145 = come_decrement_ref_count(__dec_obj145, (void*)0, (void*)0, 0,0, (void*)0);
                anonymous_82=1;
            }
            node_83=(struct sNode*)come_increment_ref_count(parse_union((char*)come_increment_ref_count(type_name),(char*)come_increment_ref_count(union_attribute),info,1));
            Value_84=node_compile(node_83,info);
            if(!Value_84) {
                printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                __result_obj__0 = (struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$phint$*)(__right_value1=tuple3$3sType$phchar$phint$_initialize((struct tuple3$3sType$phchar$phint$*)come_increment_ref_count((struct tuple3$3sType$phchar$phint$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$phint$)*(1), "06type.nc", 2015, "struct tuple3$3sType$phchar$phint$")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),0))));
                ((node_83) ? node_83 = come_decrement_ref_count(node_83, ((struct sNode*)node_83)->finalize, ((struct sNode*)node_83)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
                ((alignas_) ? alignas_ = come_decrement_ref_count(alignas_, ((struct sNode*)alignas_)->finalize, ((struct sNode*)alignas_)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                (union_attribute = come_decrement_ref_count(union_attribute, (void*)0, (void*)0, 0, 0, (void*)0));
                (attribute_67 = come_decrement_ref_count(attribute_67, (void*)0, (void*)0, 0, 0, (void*)0));
                (tuple_name = come_decrement_ref_count(tuple_name, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(sType_finalize, type_68, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (var_name_69 = come_decrement_ref_count(var_name_69, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(tuple3$3sType$phchar$phint$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                neo_current_frame = fr.prev;
                come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
            else {
            }
            pointer_num_85=0;
            while(*info->p==42) {
                info->p++;
                skip_spaces_and_lf(info);
                skip_pointer_attribute(info);
                pointer_num_85++;
            }
            __dec_obj146=type_68,
            type_68=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)(__right_value0=map$2char$phsType$ph_operator_load_element(info->types,type_name)))));
            come_call_finalizer(sType_finalize, __dec_obj146,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            if(type_68==((void*)0)) {
                __dec_obj147=type_68,
                type_68=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), (void*)0, 2032, "struct sType*")),(char*)come_increment_ref_count(__builtin_string(type_name)),0,info,0));
                come_call_finalizer(sType_finalize, __dec_obj147,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            klass_86=(struct sClass*)come_increment_ref_count(map$2char$phsClass$ph_operator_load_element(info->classes,type_name));
            klass_86->mAnonymous=1;
            type_68->mPointerNum=pointer_num_85;
            type_68->mAnonymous=anonymous_82;
            __dec_obj148=type_68->mAnonymousName,
            type_68->mAnonymousName=(char*)come_increment_ref_count(__builtin_string(type_name));
            __dec_obj148 = come_decrement_ref_count(__dec_obj148, (void*)0, (void*)0, 0,0, (void*)0);
            ((node_83) ? node_83 = come_decrement_ref_count(node_83, ((struct sNode*)node_83)->finalize, ((struct sNode*)node_83)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            come_call_finalizer(sClass_finalize, klass_86, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            err_msg(info,"unexpected { character");
            __result_obj__0 = (struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$phint$*)(__right_value1=tuple3$3sType$phchar$phint$_initialize((struct tuple3$3sType$phchar$phint$*)come_increment_ref_count((struct tuple3$3sType$phchar$phint$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$phint$)*(1), "06type.nc", 2045, "struct tuple3$3sType$phchar$phint$")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),0))));
            (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
            ((alignas_) ? alignas_ = come_decrement_ref_count(alignas_, ((struct sNode*)alignas_)->finalize, ((struct sNode*)alignas_)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            (union_attribute = come_decrement_ref_count(union_attribute, (void*)0, (void*)0, 0, 0, (void*)0));
            (attribute_67 = come_decrement_ref_count(attribute_67, (void*)0, (void*)0, 0, 0, (void*)0));
            (tuple_name = come_decrement_ref_count(tuple_name, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sType_finalize, type_68, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (var_name_69 = come_decrement_ref_count(var_name_69, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(tuple3$3sType$phchar$phint$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            neo_current_frame = fr.prev;
            come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__0;
        }
        attribute_87=(char*)come_increment_ref_count(parse_struct_attribute(info));
        if(string_operator_not_equals(attribute_87,"")) {
            __dec_obj149=type_68->mAttribute,
            type_68->mAttribute=(char*)come_increment_ref_count(attribute_87);
            __dec_obj149 = come_decrement_ref_count(__dec_obj149, (void*)0, (void*)0, 0,0, (void*)0);
        }
        if(parse_variable_name) {
            if(var_name_between_brace&&*info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(*info->p==58) {
                __dec_obj150=var_name_69,
                var_name_69=(char*)come_increment_ref_count(__builtin_string(""));
                __dec_obj150 = come_decrement_ref_count(__dec_obj150, (void*)0, (void*)0, 0,0, (void*)0);
            }
            else if(anonymous_name) {
                static int num_anonymous_var_name_88=0;
                num_anonymous_var_name_88++;
                __dec_obj151=var_name_69,
                var_name_69=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameXYZ%d",num_anonymous_var_name_88));
                __dec_obj151 = come_decrement_ref_count(__dec_obj151, (void*)0, (void*)0, 0,0, (void*)0);
                type_68->mAnonymousVarName=1;
            }
            else if(xisalnum(*info->p)||*info->p==95) {
                __dec_obj152=var_name_69,
                var_name_69=(char*)come_increment_ref_count(parse_word(0,info));
                __dec_obj152 = come_decrement_ref_count(__dec_obj152, (void*)0, (void*)0, 0,0, (void*)0);
            }
            else {
                static int num_anonymous_var_name_89=0;
                num_anonymous_var_name_89++;
                __dec_obj153=var_name_69,
                var_name_69=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameY%d",num_anonymous_var_name_89));
                __dec_obj153 = come_decrement_ref_count(__dec_obj153, (void*)0, (void*)0, 0,0, (void*)0);
                type_68->mAnonymousVarName=1;
            }
            if(var_name_between_brace&&*info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(*info->p==58) {
                info->p++;
                skip_spaces_and_lf(info);
                no_comma_90=info->no_comma;
                info->no_comma=1;
                node_91=(struct sNode*)come_increment_ref_count(expression_v13(info,0));
                info->no_comma=no_comma_90;
                __dec_obj154=type_68->mSizeNum,
                type_68->mSizeNum=(struct sNode*)come_increment_ref_count(node_91);
                (__dec_obj154 ? __dec_obj154 = come_decrement_ref_count(__dec_obj154, ((struct sNode*)__dec_obj154)->finalize, ((struct sNode*)__dec_obj154)->_protocol_obj, 0,0, (void*)0) :0);
                ((node_91) ? node_91 = come_decrement_ref_count(node_91, ((struct sNode*)node_91)->finalize, ((struct sNode*)node_91)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            }
            attribute2_92=(char*)come_increment_ref_count(parse_struct_attribute(info));
            if(string_operator_not_equals(attribute_87,"")&&string_operator_not_equals(attribute2_92,"")) {
                __dec_obj155=type_68->mAttribute,
                type_68->mAttribute=(char*)come_increment_ref_count(string_operator_add(((char*)(__right_value1=string_operator_add(attribute_87," "))),attribute2_92));
                __dec_obj155 = come_decrement_ref_count(__dec_obj155, (void*)0, (void*)0, 0,0, (void*)0);
                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            }
            else if(string_operator_not_equals(attribute2_92,"")) {
                __dec_obj156=type_68->mAttribute,
                type_68->mAttribute=(char*)come_increment_ref_count(attribute2_92);
                __dec_obj156 = come_decrement_ref_count(__dec_obj156, (void*)0, (void*)0, 0,0, (void*)0);
            }
            (attribute2_92 = come_decrement_ref_count(attribute2_92, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        (attribute_87 = come_decrement_ref_count(attribute_87, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    else if(lambda_flag) {
        if(({(_conditional_value_X0=(((struct sType*)(__right_value0=map$2char$phsType$ph_operator_load_element(info->types,type_name)))));        come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
_conditional_value_X0;})) {
            __dec_obj157=result_type,
            result_type=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)(__right_value0=map$2char$phsType$ph_operator_load_element(info->types,type_name)))));
            come_call_finalizer(sType_finalize, __dec_obj157,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            result_type->mClass=((struct sClass*)(__right_value0=map$2char$phsClass$ph_operator_load_element(info->classes,result_type->mClass->mName)));
        }
        else if(list$1char$ph_contained(info->generics_type_names,type_name,0)) {
            for(i=0;i<list$1char$ph_length(info->generics_type_names);i++){
                if(({(_conditional_value_X1=(string_operator_equals(((char*)(__right_value1=list$1char$ph_operator_load_element(info->generics_type_names,i))),type_name)));                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
_conditional_value_X1;})) {
                    __dec_obj158=result_type,
                    result_type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), (void*)0, 2130, "struct sType*")),(char*)come_increment_ref_count(xsprintf("__generics_type%d",i)),0,info,0));
                    come_call_finalizer(sType_finalize, __dec_obj158,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
        }
        else if(list$1char$ph_contained(info->method_generics_type_names,type_name,0)) {
            for(i_95=0;i_95<list$1char$ph_length(info->method_generics_type_names);i_95++){
                if(({(_conditional_value_X2=(string_operator_equals(((char*)(__right_value1=list$1char$ph_operator_load_element(info->method_generics_type_names,i_95))),type_name)));                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
_conditional_value_X2;})) {
                    __dec_obj159=result_type,
                    result_type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), (void*)0, 2137, "struct sType*")),(char*)come_increment_ref_count(xsprintf("__mgenerics_type%d",i_95)),0,info,0));
                    come_call_finalizer(sType_finalize, __dec_obj159,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
        }
        else {
            __dec_obj160=result_type,
            result_type=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)(__right_value0=map$2char$phsType$ph_operator_load_element(info->types,type_name)))));
            come_call_finalizer(sType_finalize, __dec_obj160,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            if(result_type==((void*)0)) {
                __dec_obj161=result_type,
                result_type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), (void*)0, 2146, "struct sType*")),(char*)come_increment_ref_count(__builtin_string(type_name)),0,info,0));
                come_call_finalizer(sType_finalize, __dec_obj161,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        result_type->mAtomic=result_type->mAtomic||atomic_;
        result_type->mThreadLocal=result_type->mThreadLocal||thread_local;
        result_type->mThread=result_type->mThread||thread_;
        result_type->mConstant=result_type->mConstant||constant;
        result_type->mComplex=result_type->mComplex||complex_;
        __dec_obj162=result_type->mAlignas,
        result_type->mAlignas=(struct sNode*)come_increment_ref_count(alignas_);
        (__dec_obj162 ? __dec_obj162 = come_decrement_ref_count(__dec_obj162, ((struct sNode*)__dec_obj162)->finalize, ((struct sNode*)__dec_obj162)->_protocol_obj, 0,0, (void*)0) :0);
        result_type->mAlignasDouble=alignas_double;
        result_type->mRegister=register_;
        result_type->mUnsigned=result_type->mUnsigned||unsigned_;
        result_type->mVolatile=volatile_;
        result_type->mRecord=result_type->mRecord||record_;
        result_type->mUniq=result_type->mUniq||uniq_;
        result_type->mStatic=(result_type->mStatic||static_)&&!result_type->mUniq;
        result_type->mExtern=result_type->mExtern||extern_;
        result_type->mInline=result_type->mInline||inline_;
        result_type->mRestrict=result_type->mRestrict||restrict_;
        result_type->mLongLong=result_type->mLongLong||long_long;
        result_type->mLong=result_type->mLong||long_;
        result_type->mShort=result_type->mShort||short_;
        result_type->mPointerNum=pointer_num;
        result_type->mHeap=result_type->mHeap||heap;
        result_type->mChannel=result_type->mChannel||channel;
        result_type->mDefferRightValue=result_type->mDefferRightValue||deffer_;
        __dec_obj163=var_name_69,
        var_name_69=(char*)come_increment_ref_count(parse_word(0,info));
        __dec_obj163 = come_decrement_ref_count(__dec_obj163, (void*)0, (void*)0, 0,0, (void*)0);
        multiple_assign_var6=((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$*)(__right_value0=parse_params(info,0)));
        param_types=(struct list$1sType$ph*)come_increment_ref_count(multiple_assign_var6->v1);
        param_names=(struct list$1char$ph*)come_increment_ref_count(multiple_assign_var6->v2);
        param_default_parametors=(struct list$1char$ph*)come_increment_ref_count(multiple_assign_var6->v3);
        var_args=multiple_assign_var6->v4;
        come_call_finalizer(tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        __dec_obj164=type_68,
        type_68=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), (void*)0, 2178, "struct sType*")),(char*)come_increment_ref_count(xsprintf("lambda")),0,info,0));
        come_call_finalizer(sType_finalize, __dec_obj164,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        __dec_obj165=type_68->mResultType,
        type_68->mResultType=(struct sType*)come_increment_ref_count(result_type);
        come_call_finalizer(sType_finalize, __dec_obj165,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        __dec_obj166=type_68->mParamTypes,
        type_68->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(param_types);
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj166,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        __dec_obj167=type_68->mParamNames,
        type_68->mParamNames=(struct list$1char$ph*)come_increment_ref_count(param_names);
        come_call_finalizer(list$1char$ph_finalize, __dec_obj167,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        type_68->mVarArgs=var_args;
        type_68->mExtern=extern_;
        come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(pointer_to_array_flag) {
        expected_next_character(40,info);
        skip_pointer_attribute(info);
        pointer_paren=0;
        paren_num=1;
        if(*info->p==40) {
            pointer_paren=1;
            info->p++;
            skip_spaces_and_lf(info);
            paren_num++;
        }
        array_pointer_num=0;
        while(*info->p==42||*info->p==94) {
            info->p++;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            array_pointer_num++;
        }
        skip_pointer_attribute(info);
        __dec_obj168=type_68,
        type_68=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)(__right_value0=map$2char$phsType$ph_operator_load_element(info->types,type_name)))));
        come_call_finalizer(sType_finalize, __dec_obj168,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        if(type_68==((void*)0)) {
            __dec_obj169=type_68,
            type_68=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), (void*)0, 2213, "struct sType*")),(char*)come_increment_ref_count(__builtin_string(type_name)),0,info,0));
            come_call_finalizer(sType_finalize, __dec_obj169,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        type_68->mConstant=type_68->mConstant||constant;
        type_68->mComplex=type_68->mComplex||complex_;
        type_68->mAtomic=type_68->mAtomic||atomic_;
        type_68->mThreadLocal=type_68->mThreadLocal||thread_local;
        type_68->mThread=type_68->mThread||thread_;
        __dec_obj170=type_68->mAlignas,
        type_68->mAlignas=(struct sNode*)come_increment_ref_count(alignas_);
        (__dec_obj170 ? __dec_obj170 = come_decrement_ref_count(__dec_obj170, ((struct sNode*)__dec_obj170)->finalize, ((struct sNode*)__dec_obj170)->_protocol_obj, 0,0, (void*)0) :0);
        type_68->mAlignasDouble=alignas_double;
        type_68->mRegister=register_;
        type_68->mUnsigned=type_68->mUnsigned||unsigned_;
        type_68->mVolatile=volatile_;
        type_68->mUniq=type_68->mUniq||uniq_;
        type_68->mStatic=(type_68->mStatic||static_)&&!type_68->mUniq;
        type_68->mRecord=type_68->mRecord||record_;
        type_68->mExtern=type_68->mExtern||extern_;
        type_68->mInline=type_68->mInline||inline_;
        type_68->mRestrict=type_68->mRestrict||restrict_;
        type_68->mLongLong=type_68->mLongLong||long_long;
        type_68->mLong=type_68->mLong||long_;
        type_68->mShort=type_68->mShort||short_;
        type_68->mPointerNum+=pointer_num;
        type_68->mHeap=type_68->mHeap||heap;
        type_68->mChannel=type_68->mChannel||channel;
        __dec_obj171=type_68->mTupleName,
        type_68->mTupleName=(char*)come_increment_ref_count(tuple_name);
        __dec_obj171 = come_decrement_ref_count(__dec_obj171, (void*)0, (void*)0, 0,0, (void*)0);
        type_68->mDefferRightValue=type_68->mDefferRightValue||deffer_;
        if(xisalpha(*info->p)||*info->p==95) {
            __dec_obj172=var_name_69,
            var_name_69=(char*)come_increment_ref_count(parse_word(0,info));
            __dec_obj172 = come_decrement_ref_count(__dec_obj172, (void*)0, (void*)0, 0,0, (void*)0);
        }
        else {
            __dec_obj173=var_name_69,
            var_name_69=(char*)come_increment_ref_count(xsprintf(""));
            __dec_obj173 = come_decrement_ref_count(__dec_obj173, (void*)0, (void*)0, 0,0, (void*)0);
        }
        if(*info->p==41) {
            info->p++;
            skip_spaces_and_lf(info);
            paren_num--;
        }
        array=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), (void*)0, 2253, "struct list$1sNode$ph*"))));
        while(*info->p==91) {
            info->p++;
            skip_spaces_and_lf(info);
            node_96=(struct sNode*)come_increment_ref_count(expression_v13(info,0));
            list$1sNode$ph_add(array,(struct sNode*)come_increment_ref_count(node_96));
            if(*info->p==93) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            ((node_96) ? node_96 = come_decrement_ref_count(node_96, ((struct sNode*)node_96)->finalize, ((struct sNode*)node_96)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
        if(paren_num>0&&*info->p==41) {
            info->p++;
            skip_spaces_and_lf(info);
            __dec_obj174=type_68->mVarNameArrayNum,
            type_68->mVarNameArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(array);
            come_call_finalizer(list$1sNode$ph_finalize, __dec_obj174,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            ({            __current_stack1__.pointer_paren = &pointer_paren;
            __current_stack1__.paren_num = &paren_num;
            __current_stack1__.array_pointer_num = &array_pointer_num;
            __current_stack1__.array = &array;
            __current_stack1__.info = &info;
            __current_stack1__.parse_variable_name = &parse_variable_name;
            __current_stack1__.parse_multiple_type = &parse_multiple_type;
            __current_stack1__.in_function_parametor = &in_function_parametor;
            __current_stack1__.head = &head;
            __current_stack1__.head_sline = &head_sline;
            __current_stack1__.type_name = &type_name;
            __current_stack1__.record_ = &record_;
            __current_stack1__.constant = &constant;
            __current_stack1__.static_ = &static_;
            __current_stack1__.volatile_ = &volatile_;
            __current_stack1__.register_ = &register_;
            __current_stack1__.unsigned_ = &unsigned_;
            __current_stack1__.long_ = &long_;
            __current_stack1__.long_long = &long_long;
            __current_stack1__.short_ = &short_;
            __current_stack1__.restrict_ = &restrict_;
            __current_stack1__.struct_ = &struct_;
            __current_stack1__.union_ = &union_;
            __current_stack1__.enum_ = &enum_;
            __current_stack1__.no_heap = &no_heap;
            __current_stack1__.extern_ = &extern_;
            __current_stack1__.inline_ = &inline_;
            __current_stack1__.uniq_ = &uniq_;
            __current_stack1__.tuple_ = &tuple_;
            __current_stack1__.original_var_name = &original_var_name;
            __current_stack1__.complex_ = &complex_;
            __current_stack1__.type_name_ = &type_name_;
            __current_stack1__.alignas_ = &alignas_;
            __current_stack1__.alignas_double = &alignas_double;
            __current_stack1__.union_attribute = &union_attribute;
            __current_stack1__.anonymous_type = &anonymous_type;
            __current_stack1__.anonymous_name = &anonymous_name;
            __current_stack1__.atomic_ = &atomic_;
            __current_stack1__.thread_local = &thread_local;
            __current_stack1__.thread_ = &thread_;
            __current_stack1__.attribute_67 = &attribute_67;
            __current_stack1__.pointer_num = &pointer_num;
            __current_stack1__.heap = &heap;
            __current_stack1__.refference = &refference;
            __current_stack1__.no_refference = &no_refference;
            __current_stack1__.channel = &channel;
            __current_stack1__.deffer_ = &deffer_;
            __current_stack1__.any_class = &any_class;
            __current_stack1__.vtable = &vtable;
            __current_stack1__.tuple_name = &tuple_name;
            __current_stack1__.lambda_flag = &lambda_flag;
            __current_stack1__.type_68 = &type_68;
            __current_stack1__.var_name_69 = &var_name_69;
            __current_stack1__.function_pointer_flag = &function_pointer_flag;
            __current_stack1__.pointer_to_array_flag = &pointer_to_array_flag;
            __current_stack1__.var_name_between_brace = &var_name_between_brace;
            })            ,            list$1sNode$ph_each(array,&__current_stack1__,(void*)method_block1_06typenc);
        }
        while(*info->p==91) {
            info->p++;
            skip_spaces_and_lf(info);
            if(*info->p==93) {
                info->p++;
                skip_spaces_and_lf(info);
                type_68->mArrayPointerType=1;
                break;
            }
            node_97=(struct sNode*)come_increment_ref_count(expression_v13(info,0));
            list$1sNode$ph_add(type_68->mArrayNum,(struct sNode*)come_increment_ref_count(node_97));
            if(*info->p==93) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            ((node_97) ? node_97 = come_decrement_ref_count(node_97, ((struct sNode*)node_97)->finalize, ((struct sNode*)node_97)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
        type_68->mArrayPointerNum=array_pointer_num;
        type_68->mPointerParen=pointer_paren;
        come_call_finalizer(list$1sNode$ph$p_finalize, array, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(function_pointer_flag) {
        info->p++;
        skip_spaces_and_lf(info);
        skip_pointer_attribute(info);
        function_pointer_num=0;
        while(*info->p==42||*info->p==94) {
            info->p++;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            function_pointer_num++;
        }
        skip_pointer_attribute(info);
        if(({(_conditional_value_X3=(((struct sType*)(__right_value0=map$2char$phsType$ph_operator_load_element(info->types,type_name)))));        come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
_conditional_value_X3;})) {
            __dec_obj175=result_type_98,
            result_type_98=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)(__right_value0=map$2char$phsType$ph_operator_load_element(info->types,type_name)))));
            come_call_finalizer(sType_finalize, __dec_obj175,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            result_type_98->mClass=((struct sClass*)(__right_value0=map$2char$phsClass$ph_operator_load_element(info->classes,result_type_98->mClass->mName)));
        }
        else if(list$1char$ph_contained(info->generics_type_names,type_name,0)) {
            for(i_99=0;i_99<list$1char$ph_length(info->generics_type_names);i_99++){
                if(({(_conditional_value_X4=(string_operator_equals(((char*)(__right_value1=list$1char$ph_operator_load_element(info->generics_type_names,i_99))),type_name)));                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
_conditional_value_X4;})) {
                    __dec_obj176=result_type_98,
                    result_type_98=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), (void*)0, 2327, "struct sType*")),(char*)come_increment_ref_count(xsprintf("__generics_type%d",i_99)),0,info,0));
                    come_call_finalizer(sType_finalize, __dec_obj176,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
        }
        else if(list$1char$ph_contained(info->method_generics_type_names,type_name,0)) {
            for(i_100=0;i_100<list$1char$ph_length(info->method_generics_type_names);i_100++){
                if(({(_conditional_value_X5=(string_operator_equals(((char*)(__right_value1=list$1char$ph_operator_load_element(info->method_generics_type_names,i_100))),type_name)));                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
_conditional_value_X5;})) {
                    __dec_obj177=result_type_98,
                    result_type_98=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), (void*)0, 2334, "struct sType*")),(char*)come_increment_ref_count(xsprintf("__mgenerics_type%d",i_100)),0,info,0));
                    come_call_finalizer(sType_finalize, __dec_obj177,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
        }
        else {
            __dec_obj178=result_type_98,
            result_type_98=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)(__right_value0=map$2char$phsType$ph_operator_load_element(info->types,type_name)))));
            come_call_finalizer(sType_finalize, __dec_obj178,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            if(result_type_98==((void*)0)) {
                __dec_obj179=result_type_98,
                result_type_98=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), (void*)0, 2342, "struct sType*")),(char*)come_increment_ref_count(__builtin_string(type_name)),0,info,0));
                come_call_finalizer(sType_finalize, __dec_obj179,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        result_type_98->mConstant=result_type_98->mConstant||constant;
        result_type_98->mComplex=result_type_98->mComplex||complex_;
        result_type_98->mAtomic=result_type_98->mAtomic||atomic_;
        result_type_98->mThreadLocal=result_type_98->mThreadLocal||thread_local;
        result_type_98->mThread=result_type_98->mThread||thread_;
        __dec_obj180=result_type_98->mAlignas,
        result_type_98->mAlignas=(struct sNode*)come_increment_ref_count(alignas_);
        (__dec_obj180 ? __dec_obj180 = come_decrement_ref_count(__dec_obj180, ((struct sNode*)__dec_obj180)->finalize, ((struct sNode*)__dec_obj180)->_protocol_obj, 0,0, (void*)0) :0);
        result_type_98->mAlignasDouble=alignas_double;
        result_type_98->mRegister=register_;
        result_type_98->mUnsigned=result_type_98->mUnsigned||unsigned_;
        result_type_98->mVolatile=volatile_;
        result_type_98->mUniq=result_type_98->mUniq||uniq_;
        result_type_98->mStatic=(result_type_98->mStatic||static_)&&!result_type_98->mUniq;
        result_type_98->mRecord=result_type_98->mRecord||record_;
        result_type_98->mExtern=result_type_98->mExtern||extern_;
        result_type_98->mInline=result_type_98->mInline||inline_;
        result_type_98->mRestrict=result_type_98->mRestrict||restrict_;
        result_type_98->mLongLong=result_type_98->mLongLong||long_long;
        result_type_98->mLong=result_type_98->mLong||long_;
        result_type_98->mShort=result_type_98->mShort||short_;
        result_type_98->mPointerNum+=pointer_num;
        result_type_98->mHeap=result_type_98->mHeap||heap;
        result_type_98->mChannel=result_type_98->mChannel||channel;
        result_type_98->mDefferRightValue=result_type_98->mDefferRightValue||deffer_;
        paren_flag=0;
        if(*info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
            paren_flag=1;
        }
        array_pointer=0;
        while(*info->p==42) {
            info->p++;
            skip_spaces_and_lf(info);
            array_pointer++;
        }
        if(xisalnum(*info->p)||*info->p==95) {
            __dec_obj181=var_name_69,
            var_name_69=(char*)come_increment_ref_count(parse_word(0,info));
            __dec_obj181 = come_decrement_ref_count(__dec_obj181, (void*)0, (void*)0, 0,0, (void*)0);
            if(!paren_flag&&*info->p==40) {
                __result_obj__0 = (struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$phint$*)(__right_value1=tuple3$3sType$phchar$phint$_initialize((struct tuple3$3sType$phchar$phint$*)come_increment_ref_count((struct tuple3$3sType$phchar$phint$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$phint$)*(1), "06type.nc", 2387, "struct tuple3$3sType$phchar$phint$")),(struct sType*)come_increment_ref_count(result_type_98),(char*)come_increment_ref_count(var_name_69),0))));
                come_call_finalizer(sType_finalize, result_type_98, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
                ((alignas_) ? alignas_ = come_decrement_ref_count(alignas_, ((struct sNode*)alignas_)->finalize, ((struct sNode*)alignas_)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                (union_attribute = come_decrement_ref_count(union_attribute, (void*)0, (void*)0, 0, 0, (void*)0));
                (attribute_67 = come_decrement_ref_count(attribute_67, (void*)0, (void*)0, 0, 0, (void*)0));
                (tuple_name = come_decrement_ref_count(tuple_name, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(sType_finalize, type_68, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (var_name_69 = come_decrement_ref_count(var_name_69, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(tuple3$3sType$phchar$phint$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                neo_current_frame = fr.prev;
                come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
        }
        else {
            static int num_anonymous_var_name_101=0;
            num_anonymous_var_name_101++;
            __dec_obj182=var_name_69,
            var_name_69=(char*)come_increment_ref_count(xsprintf("anonymous_lambda_var_nameZ%d",num_anonymous_var_name_101));
            __dec_obj182 = come_decrement_ref_count(__dec_obj182, (void*)0, (void*)0, 0,0, (void*)0);
        }
        __dec_obj183=type_68,
        type_68=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), (void*)0, 2396, "struct sType*")),(char*)come_increment_ref_count(xsprintf("lambda")),0,info,0));
        come_call_finalizer(sType_finalize, __dec_obj183,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        while(*info->p==91) {
            info->p++;
            skip_spaces_and_lf(info);
            if(*info->p==93) {
                info->p++;
                skip_spaces_and_lf(info);
                type_68->mArrayPointerType=1;
                break;
            }
            else {
                node_102=(struct sNode*)come_increment_ref_count(expression_v13(info,0));
                list$1sNode$ph_add(type_68->mArrayNum,(struct sNode*)come_increment_ref_count(node_102));
                if(*info->p==93) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                ((node_102) ? node_102 = come_decrement_ref_count(node_102, ((struct sNode*)node_102)->finalize, ((struct sNode*)node_102)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            }
        }
        if(paren_flag&&*info->p==41) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        while(*info->p==91) {
            info->p++;
            skip_spaces_and_lf(info);
            node_103=(struct sNode*)come_increment_ref_count(expression_v13(info,0));
            list$1sNode$ph_add(type_68->mArrayNum,(struct sNode*)come_increment_ref_count(node_103));
            if(*info->p==93) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            ((node_103) ? node_103 = come_decrement_ref_count(node_103, ((struct sNode*)node_103)->finalize, ((struct sNode*)node_103)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
        expected_next_character(41,info);
        multiple_assign_var7=((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$*)(__right_value0=parse_params(info,0)));
        param_types_104=(struct list$1sType$ph*)come_increment_ref_count(multiple_assign_var7->v1);
        param_names_105=(struct list$1char$ph*)come_increment_ref_count(multiple_assign_var7->v2);
        param_default_parametors_106=(struct list$1char$ph*)come_increment_ref_count(multiple_assign_var7->v3);
        var_args_107=multiple_assign_var7->v4;
        come_call_finalizer(tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        __dec_obj184=type_68->mResultType,
        type_68->mResultType=(struct sType*)come_increment_ref_count(sType_clone(result_type_98));
        come_call_finalizer(sType_finalize, __dec_obj184,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        __dec_obj185=type_68->mParamTypes,
        type_68->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(param_types_104);
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj185,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        __dec_obj186=type_68->mParamNames,
        type_68->mParamNames=(struct list$1char$ph*)come_increment_ref_count(param_names_105);
        come_call_finalizer(list$1char$ph_finalize, __dec_obj186,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        type_68->mVarArgs=var_args_107;
        type_68->mExtern=extern_;
        type_68->mFunctionPointerNum=function_pointer_num;
        type_68->mArrayPointerNum=array_pointer;
        come_call_finalizer(sType_finalize, result_type_98, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types_104, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_names_105, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors_106, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        if(({(_conditional_value_X6=(((struct sType*)(__right_value0=map$2char$phsType$ph_operator_load_element(info->types,type_name)))));        come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
_conditional_value_X6;})) {
            __dec_obj187=type_68,
            type_68=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)(__right_value0=map$2char$phsType$ph_operator_load_element(info->types,type_name)))));
            come_call_finalizer(sType_finalize, __dec_obj187,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            type_68->mClass=((struct sClass*)(__right_value0=map$2char$phsClass$ph_operator_load_element(info->classes,type_68->mClass->mName)));
            t=((struct buffer*)(__right_value0=map$2char$phbuffer$ph_operator_load_element(info->typedef_definition,type_name)));
            type_68->mOriginalTypePointerNum=pointer_num;
            type_68->mOriginalTypePointerHeap=heap;
            if(type_68->mTypedef||t) {
                type_=(struct sType*)come_increment_ref_count(sType_clone(type_68));
                __dec_obj188=type_->mAttribute,
                type_->mAttribute=(char*)come_increment_ref_count(xsprintf(""));
                __dec_obj188 = come_decrement_ref_count(__dec_obj188, (void*)0, (void*)0, 0,0, (void*)0);
                __dec_obj189=type_68->mTypedefOriginalType,
                type_68->mTypedefOriginalType=(struct sType*)come_increment_ref_count(sType_clone(type_));
                come_call_finalizer(sType_finalize, __dec_obj189,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, type_, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            __dec_obj190=type_68->mAttribute,
            type_68->mAttribute=(char*)come_increment_ref_count(xsprintf(""));
            __dec_obj190 = come_decrement_ref_count(__dec_obj190, (void*)0, (void*)0, 0,0, (void*)0);
            __dec_obj191=type_68->mVarAttribute,
            type_68->mVarAttribute=(char*)come_increment_ref_count(xsprintf(""));
            __dec_obj191 = come_decrement_ref_count(__dec_obj191, (void*)0, (void*)0, 0,0, (void*)0);
            type_68->mConstant=type_68->mConstant||constant;
            type_68->mComplex=type_68->mComplex||complex_;
            type_68->mAtomic=type_68->mAtomic||atomic_;
            type_68->mThreadLocal=type_68->mThreadLocal||thread_local;
            type_68->mThread=type_68->mThread||thread_;
            __dec_obj192=type_68->mAlignas,
            type_68->mAlignas=(struct sNode*)come_increment_ref_count(alignas_);
            (__dec_obj192 ? __dec_obj192 = come_decrement_ref_count(__dec_obj192, ((struct sNode*)__dec_obj192)->finalize, ((struct sNode*)__dec_obj192)->_protocol_obj, 0,0, (void*)0) :0);
            type_68->mAlignasDouble=alignas_double;
            type_68->mRegister=register_;
            type_68->mUnsigned=type_68->mUnsigned||unsigned_;
            type_68->mVolatile=volatile_;
            type_68->mUniq=type_68->mUniq||uniq_;
            type_68->mStatic=(type_68->mStatic||static_)&&!type_68->mUniq;
            type_68->mRecord=type_68->mRecord||record_;
            type_68->mExtern=type_68->mExtern||extern_;
            type_68->mInline=type_68->mInline||inline_;
            type_68->mRestrict=type_68->mRestrict||restrict_;
            type_68->mLongLong=type_68->mLongLong||long_long;
            type_68->mLong=type_68->mLong||long_;
            type_68->mShort=type_68->mShort||short_;
            if(string_operator_equals(type_68->mClass->mName,"lambda")||list$1sNode$ph_length(type_68->mArrayNum)>0) {
                type_68->mArrayPointerNum+=pointer_num;
            }
            else {
                type_68->mPointerNum+=pointer_num;
            }
            type_68->mHeap=type_68->mHeap||heap;
            type_68->mChannel=type_68->mChannel||channel;
            type_68->mDefferRightValue=type_68->mDefferRightValue||deffer_;
            __dec_obj193=type_68->mTupleName,
            type_68->mTupleName=(char*)come_increment_ref_count(tuple_name);
            __dec_obj193 = come_decrement_ref_count(__dec_obj193, (void*)0, (void*)0, 0,0, (void*)0);
        }
        else if(list$1char$ph_contained(info->generics_type_names,type_name,0)) {
            for(i_108=0;i_108<list$1char$ph_length(info->generics_type_names);i_108++){
                if(({(_conditional_value_X7=(string_operator_equals(((char*)(__right_value1=list$1char$ph_operator_load_element(info->generics_type_names,i_108))),type_name)));                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
_conditional_value_X7;})) {
                    __dec_obj194=type_68,
                    type_68=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), (void*)0, 2502, "struct sType*")),(char*)come_increment_ref_count(xsprintf("__generics_type%d",i_108)),0,info,0));
                    come_call_finalizer(sType_finalize, __dec_obj194,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            type_68->mConstant=type_68->mConstant||constant;
            type_68->mComplex=type_68->mComplex||complex_;
            type_68->mAtomic=type_68->mAtomic||atomic_;
            type_68->mThreadLocal=type_68->mThreadLocal||thread_local;
            type_68->mThread=type_68->mThread||thread_;
            __dec_obj195=type_68->mAlignas,
            type_68->mAlignas=(struct sNode*)come_increment_ref_count(alignas_);
            (__dec_obj195 ? __dec_obj195 = come_decrement_ref_count(__dec_obj195, ((struct sNode*)__dec_obj195)->finalize, ((struct sNode*)__dec_obj195)->_protocol_obj, 0,0, (void*)0) :0);
            type_68->mAlignasDouble=alignas_double;
            type_68->mRegister=register_;
            type_68->mUnsigned=type_68->mUnsigned||unsigned_;
            type_68->mVolatile=volatile_;
            type_68->mUniq=type_68->mUniq||uniq_;
            type_68->mStatic=(type_68->mStatic||static_)&&!type_68->mUniq;
            type_68->mRecord=type_68->mRecord||record_;
            type_68->mExtern=type_68->mExtern||extern_;
            type_68->mInline=type_68->mInline||inline_;
            type_68->mRestrict=type_68->mRestrict||restrict_;
            type_68->mLongLong=type_68->mLongLong||long_long;
            type_68->mLong=type_68->mLong||long_;
            type_68->mShort=type_68->mShort||short_;
            type_68->mPointerNum+=pointer_num;
            type_68->mHeap=type_68->mHeap||heap;
            type_68->mChannel=type_68->mChannel||channel;
            type_68->mDefferRightValue=type_68->mDefferRightValue||deffer_;
            __dec_obj196=type_68->mTupleName,
            type_68->mTupleName=(char*)come_increment_ref_count(tuple_name);
            __dec_obj196 = come_decrement_ref_count(__dec_obj196, (void*)0, (void*)0, 0,0, (void*)0);
        }
        else if(list$1char$ph_contained(info->method_generics_type_names,type_name,0)) {
            for(i_109=0;i_109<list$1char$ph_length(info->method_generics_type_names);i_109++){
                if(({(_conditional_value_X8=(string_operator_equals(((char*)(__right_value1=list$1char$ph_operator_load_element(info->method_generics_type_names,i_109))),type_name)));                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
_conditional_value_X8;})) {
                    __dec_obj197=type_68,
                    type_68=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), (void*)0, 2534, "struct sType*")),(char*)come_increment_ref_count(xsprintf("__mgenerics_type%d",i_109)),0,info,0));
                    come_call_finalizer(sType_finalize, __dec_obj197,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            type_68->mConstant=type_68->mConstant||constant;
            type_68->mComplex=type_68->mComplex||complex_;
            type_68->mAtomic=type_68->mAtomic||atomic_;
            type_68->mThreadLocal=type_68->mThreadLocal||thread_local;
            type_68->mThread=type_68->mThread||thread_;
            __dec_obj198=type_68->mAlignas,
            type_68->mAlignas=(struct sNode*)come_increment_ref_count(alignas_);
            (__dec_obj198 ? __dec_obj198 = come_decrement_ref_count(__dec_obj198, ((struct sNode*)__dec_obj198)->finalize, ((struct sNode*)__dec_obj198)->_protocol_obj, 0,0, (void*)0) :0);
            type_68->mAlignasDouble=alignas_double;
            type_68->mRegister=register_;
            type_68->mUnsigned=type_68->mUnsigned||unsigned_;
            type_68->mVolatile=volatile_;
            type_68->mUniq=type_68->mUniq||uniq_;
            type_68->mStatic=(type_68->mStatic||static_)&&!type_68->mUniq;
            type_68->mRecord=type_68->mRecord||record_;
            type_68->mExtern=type_68->mExtern||extern_;
            type_68->mInline=type_68->mInline||inline_;
            type_68->mRestrict=type_68->mRestrict||restrict_;
            type_68->mLongLong=type_68->mLongLong||long_long;
            type_68->mLong=type_68->mLong||long_;
            type_68->mShort=type_68->mShort||short_;
            type_68->mPointerNum+=pointer_num;
            type_68->mHeap=type_68->mHeap||heap;
            type_68->mChannel=type_68->mChannel||channel;
            type_68->mDefferRightValue=type_68->mDefferRightValue||deffer_;
            __dec_obj199=type_68->mTupleName,
            type_68->mTupleName=(char*)come_increment_ref_count(tuple_name);
            __dec_obj199 = come_decrement_ref_count(__dec_obj199, (void*)0, (void*)0, 0,0, (void*)0);
        }
        else if(*info->p==60) {
            info->p++;
            skip_spaces_and_lf(info);
            if(({(_conditional_value_X9=(((struct sClass*)(__right_value2=map$2char$phsClass$ph_operator_load_element(info->generics_classes,((char*)(__right_value1=__builtin_string(type_name))))))==((void*)0)));            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            come_call_finalizer(sClass_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
_conditional_value_X9;})) {
                __result_obj__0 = (struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$phint$*)(__right_value1=tuple3$3sType$phchar$phint$_initialize((struct tuple3$3sType$phchar$phint$*)come_increment_ref_count((struct tuple3$3sType$phchar$phint$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$phint$)*(1), "06type.nc", 2569, "struct tuple3$3sType$phchar$phint$")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),0))));
                (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
                ((alignas_) ? alignas_ = come_decrement_ref_count(alignas_, ((struct sNode*)alignas_)->finalize, ((struct sNode*)alignas_)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                (union_attribute = come_decrement_ref_count(union_attribute, (void*)0, (void*)0, 0, 0, (void*)0));
                (attribute_67 = come_decrement_ref_count(attribute_67, (void*)0, (void*)0, 0, 0, (void*)0));
                (tuple_name = come_decrement_ref_count(tuple_name, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(sType_finalize, type_68, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (var_name_69 = come_decrement_ref_count(var_name_69, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(tuple3$3sType$phchar$phint$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                neo_current_frame = fr.prev;
                come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
            __dec_obj200=type_68,
            type_68=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)(__right_value0=map$2char$phsType$ph_operator_load_element(info->types,type_name)))));
            come_call_finalizer(sType_finalize, __dec_obj200,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            if(type_68==((void*)0)) {
                __dec_obj201=type_68,
                type_68=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), (void*)0, 2577, "struct sType*")),(char*)come_increment_ref_count(__builtin_string(type_name)),0,info,0));
                come_call_finalizer(sType_finalize, __dec_obj201,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            while(1) {
                multiple_assign_var8=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=parse_type(info,0,0,0)));
                generics_type=(struct sType*)come_increment_ref_count(multiple_assign_var8->v1);
                var_name_110=(char*)come_increment_ref_count(multiple_assign_var8->v2);
                err_111=multiple_assign_var8->v3;
                come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                if(!err_111) {
                    __result_obj__0 = (struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$phint$*)(__right_value1=tuple3$3sType$phchar$phint$_initialize((struct tuple3$3sType$phchar$phint$*)come_increment_ref_count((struct tuple3$3sType$phchar$phint$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$phint$)*(1), "06type.nc", 2584, "struct tuple3$3sType$phchar$phint$")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),0))));
                    come_call_finalizer(sType_finalize, generics_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    (var_name_110 = come_decrement_ref_count(var_name_110, (void*)0, (void*)0, 0, 0, (void*)0));
                    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
                    ((alignas_) ? alignas_ = come_decrement_ref_count(alignas_, ((struct sNode*)alignas_)->finalize, ((struct sNode*)alignas_)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                    (union_attribute = come_decrement_ref_count(union_attribute, (void*)0, (void*)0, 0, 0, (void*)0));
                    (attribute_67 = come_decrement_ref_count(attribute_67, (void*)0, (void*)0, 0, 0, (void*)0));
                    (tuple_name = come_decrement_ref_count(tuple_name, (void*)0, (void*)0, 0, 0, (void*)0));
                    come_call_finalizer(sType_finalize, type_68, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    (var_name_69 = come_decrement_ref_count(var_name_69, (void*)0, (void*)0, 0, 0, (void*)0));
                    come_call_finalizer(tuple3$3sType$phchar$phint$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    neo_current_frame = fr.prev;
                    come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                    return __result_obj__0;
                }
                list$1sType$ph_push_back(type_68->mGenericsTypes,(struct sType*)come_increment_ref_count(generics_type));
                if(*info->p==44) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                else if(*info->p==62) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    come_call_finalizer(sType_finalize, generics_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    (var_name_110 = come_decrement_ref_count(var_name_110, (void*)0, (void*)0, 0, 0, (void*)0));
                    break;
                }
                else {
                    err_msg(info,"invalid generics type(%c)(%c)(%c)",*info->p,*(info->p+1),*(info->p+2));
                    __result_obj__0 = (struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$phint$*)(__right_value1=tuple3$3sType$phchar$phint$_initialize((struct tuple3$3sType$phchar$phint$*)come_increment_ref_count((struct tuple3$3sType$phchar$phint$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$phint$)*(1), "06type.nc", 2601, "struct tuple3$3sType$phchar$phint$")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),0))));
                    come_call_finalizer(sType_finalize, generics_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    (var_name_110 = come_decrement_ref_count(var_name_110, (void*)0, (void*)0, 0, 0, (void*)0));
                    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
                    ((alignas_) ? alignas_ = come_decrement_ref_count(alignas_, ((struct sNode*)alignas_)->finalize, ((struct sNode*)alignas_)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                    (union_attribute = come_decrement_ref_count(union_attribute, (void*)0, (void*)0, 0, 0, (void*)0));
                    (attribute_67 = come_decrement_ref_count(attribute_67, (void*)0, (void*)0, 0, 0, (void*)0));
                    (tuple_name = come_decrement_ref_count(tuple_name, (void*)0, (void*)0, 0, 0, (void*)0));
                    come_call_finalizer(sType_finalize, type_68, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    (var_name_69 = come_decrement_ref_count(var_name_69, (void*)0, (void*)0, 0, 0, (void*)0));
                    come_call_finalizer(tuple3$3sType$phchar$phint$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    neo_current_frame = fr.prev;
                    come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                    return __result_obj__0;
                }
                come_call_finalizer(sType_finalize, generics_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (var_name_110 = come_decrement_ref_count(var_name_110, (void*)0, (void*)0, 0, 0, (void*)0));
            }
            if(is_contained_generics_class(type_68,info)) {
                __dec_obj202=type_68,
                type_68=(struct sType*)come_increment_ref_count(solve_generics(type_68,info->generics_type,info));
                come_call_finalizer(sType_finalize, __dec_obj202,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                if(!output_generics_struct(type_68,type_68,info)) {
                    new_name=(char*)come_increment_ref_count(create_generics_name(type_68,info));
                    printf("%s %d: output generics is failed(%s)\n",info->sname,info->sline,new_name);
                    exit(7);
                    (new_name = come_decrement_ref_count(new_name, (void*)0, (void*)0, 0, 0, (void*)0));
                }
            }
            type_68->mConstant=type_68->mConstant||constant;
            type_68->mComplex=type_68->mComplex||complex_;
            type_68->mAtomic=type_68->mAtomic||atomic_;
            type_68->mThreadLocal=type_68->mThreadLocal||thread_local;
            type_68->mThread=type_68->mThread||thread_;
            __dec_obj203=type_68->mAlignas,
            type_68->mAlignas=(struct sNode*)come_increment_ref_count(alignas_);
            (__dec_obj203 ? __dec_obj203 = come_decrement_ref_count(__dec_obj203, ((struct sNode*)__dec_obj203)->finalize, ((struct sNode*)__dec_obj203)->_protocol_obj, 0,0, (void*)0) :0);
            type_68->mAlignasDouble=alignas_double;
            type_68->mRegister=register_;
            type_68->mUnsigned=type_68->mUnsigned||unsigned_;
            type_68->mVolatile=volatile_;
            type_68->mUniq=type_68->mUniq||uniq_;
            type_68->mStatic=(type_68->mStatic||static_)&&!type_68->mUniq;
            type_68->mRecord=type_68->mRecord||record_;
            type_68->mExtern=type_68->mExtern||extern_;
            type_68->mInline=type_68->mInline||inline_;
            type_68->mRestrict=type_68->mRestrict||restrict_;
            type_68->mLongLong=type_68->mLongLong||long_long;
            type_68->mLong=type_68->mLong||long_;
            type_68->mShort=type_68->mShort||short_;
            type_68->mPointerNum+=pointer_num;
            type_68->mHeap=type_68->mHeap||heap;
            type_68->mChannel=type_68->mChannel||channel;
            type_68->mDefferRightValue=type_68->mDefferRightValue||deffer_;
            __dec_obj204=type_68->mTupleName,
            type_68->mTupleName=(char*)come_increment_ref_count(tuple_name);
            __dec_obj204 = come_decrement_ref_count(__dec_obj204, (void*)0, (void*)0, 0,0, (void*)0);
            __dec_obj205=type_name,
            type_name=(char*)come_increment_ref_count(type_68->mClass->mName);
            __dec_obj205 = come_decrement_ref_count(__dec_obj205, (void*)0, (void*)0, 0,0, (void*)0);
        }
        else {
            if(struct_) {
                klass_112=((struct sClass*)(__right_value0=map$2char$phsClass$ph_operator_load_element(info->classes,type_name)));
                if(klass_112==((void*)0)&&*info->p!=60) {
                    map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string(type_name)),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), (void*)0, 2649, "struct sClass*")),((char*)(__right_value2=__builtin_string(type_name))),0,0,0,0,0,1,0,-1,-1,0,0,0,info)),0);
                    (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0));
                }
            }
            if(union_) {
                klass_122=((struct sClass*)(__right_value0=map$2char$phsClass$ph_operator_load_element(info->classes,type_name)));
                if(klass_122==((void*)0)&&*info->p!=60) {
                    map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string(type_name)),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), (void*)0, 2656, "struct sClass*")),((char*)(__right_value2=__builtin_string(type_name))),0,1,0,0,0,0,0,-1,-1,0,0,0,info)),0);
                    (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0));
                }
            }
            __dec_obj206=type_68,
            type_68=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)(__right_value0=map$2char$phsType$ph_operator_load_element(info->types,type_name)))));
            come_call_finalizer(sType_finalize, __dec_obj206,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            if(type_68==((void*)0)) {
                __dec_obj207=type_68,
                type_68=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), (void*)0, 2665, "struct sType*")),(char*)come_increment_ref_count(__builtin_string(type_name)),0,info,0));
                come_call_finalizer(sType_finalize, __dec_obj207,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            type_68->mConstant=type_68->mConstant||constant;
            type_68->mComplex=type_68->mComplex||complex_;
            type_68->mAtomic=type_68->mAtomic||atomic_;
            type_68->mThreadLocal=type_68->mThreadLocal||thread_local;
            type_68->mThread=type_68->mThread||thread_;
            __dec_obj208=type_68->mAlignas,
            type_68->mAlignas=(struct sNode*)come_increment_ref_count(alignas_);
            (__dec_obj208 ? __dec_obj208 = come_decrement_ref_count(__dec_obj208, ((struct sNode*)__dec_obj208)->finalize, ((struct sNode*)__dec_obj208)->_protocol_obj, 0,0, (void*)0) :0);
            type_68->mAlignasDouble=alignas_double;
            type_68->mRegister=register_;
            type_68->mUnsigned=type_68->mUnsigned||unsigned_;
            type_68->mVolatile=volatile_;
            type_68->mUniq=type_68->mUniq||uniq_;
            type_68->mStatic=(type_68->mStatic||static_)&&!type_68->mUniq;
            type_68->mRecord=type_68->mRecord||record_;
            type_68->mExtern=type_68->mExtern||extern_;
            type_68->mInline=type_68->mInline||inline_;
            type_68->mRestrict=type_68->mRestrict||restrict_;
            type_68->mLongLong=type_68->mLongLong||long_long;
            type_68->mLong=type_68->mLong||long_;
            type_68->mShort=type_68->mShort||short_;
            type_68->mPointerNum+=pointer_num;
            type_68->mHeap=type_68->mHeap||heap;
            type_68->mChannel=type_68->mChannel||channel;
            type_68->mDefferRightValue=type_68->mDefferRightValue||deffer_;
            __dec_obj209=type_68->mTupleName,
            type_68->mTupleName=(char*)come_increment_ref_count(tuple_name);
            __dec_obj209 = come_decrement_ref_count(__dec_obj209, (void*)0, (void*)0, 0,0, (void*)0);
        }
        skip_pointer_attribute(info);
        while(1) {
            if(*info->p==42) {
                info->p++;
                skip_spaces_and_lf(info);
                skip_pointer_attribute(info);
                type_68->mPointerNum++;
                type_68->mOriginalTypePointerNum++;
                if(type_68->mNoSolvedGenericsType) {
                    type_68->mNoSolvedGenericsType->mPointerNum++;
                }
            }
            else if(*info->p==37) {
                info->p++;
                skip_spaces_and_lf(info);
                type_68->mHeap=1;
                if(type_68->mNoSolvedGenericsType) {
                    type_68->mNoSolvedGenericsType->mHeap=1;
                }
            }
            else if(*info->p==38) {
                info->p++;
                skip_spaces_and_lf(info);
                type_68->mNoHeap=1;
                if(type_68->mNoSolvedGenericsType) {
                    type_68->mNoSolvedGenericsType->mHeap=0;
                }
            }
            else if(*info->p==96) {
                info->p++;
                skip_spaces_and_lf(info);
                type_68->mNoCallingDestructor=1;
            }
            else {
                break;
            }
        }
        skip_pointer_attribute(info);
        while(1) {
            if(*info->p==42) {
                info->p++;
                skip_spaces_and_lf(info);
                skip_pointer_attribute(info);
                type_68->mPointerNum++;
                if(type_68->mNoSolvedGenericsType) {
                    type_68->mNoSolvedGenericsType->mPointerNum++;
                }
            }
            else if(*info->p==37) {
                info->p++;
                skip_spaces_and_lf(info);
                type_68->mHeap=1;
                if(type_68->mNoSolvedGenericsType) {
                    type_68->mNoSolvedGenericsType->mHeap=1;
                }
            }
            else if(*info->p==126) {
                info->p++;
                skip_spaces_and_lf(info);
                skip_pointer_attribute(info);
                type_68->mDefferRightValue=1;
                if(type_68->mNoSolvedGenericsType) {
                    type_68->mNoSolvedGenericsType->mDefferRightValue=1;
                }
            }
            else if(gComePthread&&*info->p==64) {
                info->p++;
                skip_spaces_and_lf(info);
                type_68->mChannel=1;
                if(type_68->mNoSolvedGenericsType) {
                    type_68->mNoSolvedGenericsType->mChannel=1;
                }
            }
            else if(*info->p==96) {
                info->p++;
                skip_spaces_and_lf(info);
                type_68->mNoCallingDestructor=1;
                if(type_68->mNoSolvedGenericsType) {
                    type_68->mNoSolvedGenericsType->mNoCallingDestructor=1;
                }
            }
            else {
                break;
            }
        }
        if(parse_multiple_type&&*info->p==44&&!info->in_offsetof) {
            types=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), (void*)0, 2798, "struct list$1sType$ph*"))));
            list$1sType$ph_push_back(types,(struct sType*)come_increment_ref_count(sType_clone(type_68)));
            while(*info->p==44) {
                info->p++;
                skip_spaces_and_lf(info);
                multiple_assign_var9=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=parse_type(info,0,0,0)));
                type2=(struct sType*)come_increment_ref_count(multiple_assign_var9->v1);
                name_123=(char*)come_increment_ref_count(multiple_assign_var9->v2);
                err_124=multiple_assign_var9->v3;
                come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                if(!err_124) {
                    __result_obj__0 = (struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$phint$*)(__right_value1=tuple3$3sType$phchar$phint$_initialize((struct tuple3$3sType$phchar$phint$*)come_increment_ref_count((struct tuple3$3sType$phchar$phint$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$phint$)*(1), "06type.nc", 2809, "struct tuple3$3sType$phchar$phint$")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),0))));
                    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    (name_123 = come_decrement_ref_count(name_123, (void*)0, (void*)0, 0, 0, (void*)0));
                    come_call_finalizer(list$1sType$ph$p_finalize, types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
                    ((alignas_) ? alignas_ = come_decrement_ref_count(alignas_, ((struct sNode*)alignas_)->finalize, ((struct sNode*)alignas_)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                    (union_attribute = come_decrement_ref_count(union_attribute, (void*)0, (void*)0, 0, 0, (void*)0));
                    (attribute_67 = come_decrement_ref_count(attribute_67, (void*)0, (void*)0, 0, 0, (void*)0));
                    (tuple_name = come_decrement_ref_count(tuple_name, (void*)0, (void*)0, 0, 0, (void*)0));
                    come_call_finalizer(sType_finalize, type_68, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    (var_name_69 = come_decrement_ref_count(var_name_69, (void*)0, (void*)0, 0, 0, (void*)0));
                    come_call_finalizer(tuple3$3sType$phchar$phint$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    neo_current_frame = fr.prev;
                    come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                    return __result_obj__0;
                }
                list$1sType$ph_push_back(types,(struct sType*)come_increment_ref_count(sType_clone(type2)));
                come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (name_123 = come_decrement_ref_count(name_123, (void*)0, (void*)0, 0, 0, (void*)0));
            }
            if(*info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            num_tuples=list$1sType$ph_length(types);
            __dec_obj210=type_68,
            type_68=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), (void*)0, 2822, "struct sType*")),(char*)come_increment_ref_count(xsprintf("tuple%d",num_tuples)),0,info,0));
            come_call_finalizer(sType_finalize, __dec_obj210,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            type_68->mPointerNum++;
            type_68->mHeap=1;
            for(o2_saved=(struct list$1sType$ph*)come_increment_ref_count(types),it=list$1sType$ph_begin(o2_saved);!list$1sType$ph_end(o2_saved);it=list$1sType$ph_next(o2_saved)){
                list$1sType$ph_push_back(type_68->mGenericsTypes,(struct sType*)come_increment_ref_count((((struct sType*)(__right_value0=sType_clone(it))))));
                come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            }
            come_call_finalizer(list$1sType$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            while(1) {
                if(*info->p==42) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    skip_pointer_attribute(info);
                    type_68->mPointerNum++;
                    if(type_68->mNoSolvedGenericsType) {
                        type_68->mNoSolvedGenericsType->mPointerNum++;
                    }
                }
                else if(*info->p==37) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    type_68->mHeap=1;
                    if(type_68->mNoSolvedGenericsType) {
                        type_68->mNoSolvedGenericsType->mHeap=1;
                    }
                }
                else if(*info->p==126) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    skip_pointer_attribute(info);
                    type_68->mDefferRightValue=1;
                    if(type_68->mNoSolvedGenericsType) {
                        type_68->mNoSolvedGenericsType->mDefferRightValue=1;
                    }
                }
                else if(gComePthread&&*info->p==64) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    type_68->mChannel=1;
                    if(type_68->mNoSolvedGenericsType) {
                        type_68->mNoSolvedGenericsType->mChannel=1;
                    }
                }
                else if(*info->p==96) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    type_68->mNoCallingDestructor=1;
                    if(type_68->mNoSolvedGenericsType) {
                        type_68->mNoSolvedGenericsType->mNoCallingDestructor=1;
                    }
                }
                else {
                    break;
                }
            }
            if(is_contained_generics_class(type_68,info)) {
                __dec_obj211=type_68,
                type_68=(struct sType*)come_increment_ref_count(solve_generics(type_68,info->generics_type,info));
                come_call_finalizer(sType_finalize, __dec_obj211,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                if(!output_generics_struct(type_68,type_68,info)) {
                    new_name_125=(char*)come_increment_ref_count(create_generics_name(type_68,info));
                    printf("output generics is failed(%s)\n",new_name_125);
                    exit(9);
                    (new_name_125 = come_decrement_ref_count(new_name_125, (void*)0, (void*)0, 0, 0, (void*)0));
                }
            }
            type_68->mMultipleTypes=1;
            __dec_obj212=type_name,
            type_name=(char*)come_increment_ref_count(type_68->mClass->mName);
            __dec_obj212 = come_decrement_ref_count(__dec_obj212, (void*)0, (void*)0, 0,0, (void*)0);
            come_call_finalizer(list$1sType$ph$p_finalize, types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        attribute_126=(char*)come_increment_ref_count(parse_struct_attribute(info));
        if(string_operator_not_equals(attribute_126,"")) {
            __dec_obj213=type_68->mAttribute,
            type_68->mAttribute=(char*)come_increment_ref_count(attribute_126);
            __dec_obj213 = come_decrement_ref_count(__dec_obj213, (void*)0, (void*)0, 0,0, (void*)0);
        }
        if(parse_variable_name) {
            if(var_name_between_brace&&*info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(*info->p==58) {
                __dec_obj214=var_name_69,
                var_name_69=(char*)come_increment_ref_count(__builtin_string(""));
                __dec_obj214 = come_decrement_ref_count(__dec_obj214, (void*)0, (void*)0, 0,0, (void*)0);
            }
            else if(anonymous_name) {
                static int num_anonymous_var_name_127=0;
                num_anonymous_var_name_127++;
                __dec_obj215=var_name_69,
                var_name_69=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameXYZLO%d",num_anonymous_var_name_127));
                __dec_obj215 = come_decrement_ref_count(__dec_obj215, (void*)0, (void*)0, 0,0, (void*)0);
                type_68->mAnonymousVarName=1;
            }
            else if(xisalnum(*info->p)||*info->p==95) {
                __dec_obj216=var_name_69,
                var_name_69=(char*)come_increment_ref_count(parse_word(0,info));
                __dec_obj216 = come_decrement_ref_count(__dec_obj216, (void*)0, (void*)0, 0,0, (void*)0);
            }
            else {
                static int num_anonymous_var_name_128=0;
                num_anonymous_var_name_128++;
                __dec_obj217=var_name_69,
                var_name_69=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameX%d",num_anonymous_var_name_128));
                __dec_obj217 = come_decrement_ref_count(__dec_obj217, (void*)0, (void*)0, 0,0, (void*)0);
                type_68->mAnonymousVarName=1;
            }
            if(var_name_between_brace&&*info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(*info->p==58) {
                info->p++;
                skip_spaces_and_lf(info);
                no_comma_129=info->no_comma;
                info->no_comma=1;
                node_130=(struct sNode*)come_increment_ref_count(expression_v13(info,0));
                info->no_comma=no_comma_129;
                __dec_obj218=type_68->mSizeNum,
                type_68->mSizeNum=(struct sNode*)come_increment_ref_count(node_130);
                (__dec_obj218 ? __dec_obj218 = come_decrement_ref_count(__dec_obj218, ((struct sNode*)__dec_obj218)->finalize, ((struct sNode*)__dec_obj218)->_protocol_obj, 0,0, (void*)0) :0);
                ((node_130) ? node_130 = come_decrement_ref_count(node_130, ((struct sNode*)node_130)->finalize, ((struct sNode*)node_130)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            }
            attribute2_131=(char*)come_increment_ref_count(parse_struct_attribute(info));
            if(string_operator_not_equals(attribute_126,"")&&string_operator_not_equals(attribute2_131,"")) {
                __dec_obj219=type_68->mAttribute,
                type_68->mAttribute=(char*)come_increment_ref_count(attribute_126);
                __dec_obj219 = come_decrement_ref_count(__dec_obj219, (void*)0, (void*)0, 0,0, (void*)0);
                __dec_obj220=type_68->mVarAttribute,
                type_68->mVarAttribute=(char*)come_increment_ref_count(attribute2_131);
                __dec_obj220 = come_decrement_ref_count(__dec_obj220, (void*)0, (void*)0, 0,0, (void*)0);
            }
            else if(string_operator_not_equals(attribute2_131,"")) {
                __dec_obj221=type_68->mVarAttribute,
                type_68->mVarAttribute=(char*)come_increment_ref_count(attribute2_131);
                __dec_obj221 = come_decrement_ref_count(__dec_obj221, (void*)0, (void*)0, 0,0, (void*)0);
            }
            (attribute2_131 = come_decrement_ref_count(attribute2_131, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        (attribute_126 = come_decrement_ref_count(attribute_126, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    skip_spaces_and_lf(info);
    array_num_typedef=((void*)0);
    if(list$1sNode$ph_length(type_68->mArrayNum)>0) {
        __dec_obj222=array_num_typedef,
        array_num_typedef=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(type_68->mArrayNum));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj222,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        list$1sNode$ph_reset(type_68->mArrayNum);
    }
    while(*info->p==91) {
        info->p++;
        skip_spaces_and_lf(info);
        array_static=0;
        array_restrict=0;
        while(1) {
            if(parsecmp("static",info)) {
                info->p+=strlen("static");
                skip_spaces_and_lf(info);
                array_static=1;
            }
            else if(parsecmp("restrict",info)) {
                info->p+=strlen("restrict");
                skip_spaces_and_lf(info);
                array_restrict=1;
            }
            else {
                break;
            }
        }
        skip_pointer_attribute(info);
        if(*info->p==93) {
            info->p++;
            skip_spaces_and_lf(info);
            type_68->mArrayPointerType=1;
            break;
        }
        skip_spaces_and_lf(info);
        node_132=(struct sNode*)come_increment_ref_count(expression_v13(info,0));
        list$1sNode$ph_push_back(type_68->mArrayNum,(struct sNode*)come_increment_ref_count(node_132));
        list$1int$_push_back(type_68->mArrayStatic,array_static);
        list$1int$_push_back(type_68->mArrayRestrict,array_restrict);
        expected_next_character(93,info);
        ((node_132) ? node_132 = come_decrement_ref_count(node_132, ((struct sNode*)node_132)->finalize, ((struct sNode*)node_132)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    if(array_num_typedef) {
        ({        __current_stack2__.info = &info;
        __current_stack2__.parse_variable_name = &parse_variable_name;
        __current_stack2__.parse_multiple_type = &parse_multiple_type;
        __current_stack2__.in_function_parametor = &in_function_parametor;
        __current_stack2__.head = &head;
        __current_stack2__.head_sline = &head_sline;
        __current_stack2__.type_name = &type_name;
        __current_stack2__.record_ = &record_;
        __current_stack2__.constant = &constant;
        __current_stack2__.static_ = &static_;
        __current_stack2__.volatile_ = &volatile_;
        __current_stack2__.register_ = &register_;
        __current_stack2__.unsigned_ = &unsigned_;
        __current_stack2__.long_ = &long_;
        __current_stack2__.long_long = &long_long;
        __current_stack2__.short_ = &short_;
        __current_stack2__.restrict_ = &restrict_;
        __current_stack2__.struct_ = &struct_;
        __current_stack2__.union_ = &union_;
        __current_stack2__.enum_ = &enum_;
        __current_stack2__.no_heap = &no_heap;
        __current_stack2__.extern_ = &extern_;
        __current_stack2__.inline_ = &inline_;
        __current_stack2__.uniq_ = &uniq_;
        __current_stack2__.tuple_ = &tuple_;
        __current_stack2__.original_var_name = &original_var_name;
        __current_stack2__.complex_ = &complex_;
        __current_stack2__.type_name_ = &type_name_;
        __current_stack2__.alignas_ = &alignas_;
        __current_stack2__.alignas_double = &alignas_double;
        __current_stack2__.union_attribute = &union_attribute;
        __current_stack2__.anonymous_type = &anonymous_type;
        __current_stack2__.anonymous_name = &anonymous_name;
        __current_stack2__.atomic_ = &atomic_;
        __current_stack2__.thread_local = &thread_local;
        __current_stack2__.thread_ = &thread_;
        __current_stack2__.attribute_67 = &attribute_67;
        __current_stack2__.pointer_num = &pointer_num;
        __current_stack2__.heap = &heap;
        __current_stack2__.refference = &refference;
        __current_stack2__.no_refference = &no_refference;
        __current_stack2__.channel = &channel;
        __current_stack2__.deffer_ = &deffer_;
        __current_stack2__.any_class = &any_class;
        __current_stack2__.vtable = &vtable;
        __current_stack2__.tuple_name = &tuple_name;
        __current_stack2__.lambda_flag = &lambda_flag;
        __current_stack2__.type_68 = &type_68;
        __current_stack2__.var_name_69 = &var_name_69;
        __current_stack2__.function_pointer_flag = &function_pointer_flag;
        __current_stack2__.pointer_to_array_flag = &pointer_to_array_flag;
        __current_stack2__.var_name_between_brace = &var_name_between_brace;
        __current_stack2__.array_num_typedef = &array_num_typedef;
        })        ,        list$1sNode$ph_each(type_68->mArrayNum,&__current_stack2__,(void*)method_block2_06typenc);
        list$1sNode$ph_reset(type_68->mArrayNum);
        ({        __current_stack3__.info = &info;
        __current_stack3__.parse_variable_name = &parse_variable_name;
        __current_stack3__.parse_multiple_type = &parse_multiple_type;
        __current_stack3__.in_function_parametor = &in_function_parametor;
        __current_stack3__.head = &head;
        __current_stack3__.head_sline = &head_sline;
        __current_stack3__.type_name = &type_name;
        __current_stack3__.record_ = &record_;
        __current_stack3__.constant = &constant;
        __current_stack3__.static_ = &static_;
        __current_stack3__.volatile_ = &volatile_;
        __current_stack3__.register_ = &register_;
        __current_stack3__.unsigned_ = &unsigned_;
        __current_stack3__.long_ = &long_;
        __current_stack3__.long_long = &long_long;
        __current_stack3__.short_ = &short_;
        __current_stack3__.restrict_ = &restrict_;
        __current_stack3__.struct_ = &struct_;
        __current_stack3__.union_ = &union_;
        __current_stack3__.enum_ = &enum_;
        __current_stack3__.no_heap = &no_heap;
        __current_stack3__.extern_ = &extern_;
        __current_stack3__.inline_ = &inline_;
        __current_stack3__.uniq_ = &uniq_;
        __current_stack3__.tuple_ = &tuple_;
        __current_stack3__.original_var_name = &original_var_name;
        __current_stack3__.complex_ = &complex_;
        __current_stack3__.type_name_ = &type_name_;
        __current_stack3__.alignas_ = &alignas_;
        __current_stack3__.alignas_double = &alignas_double;
        __current_stack3__.union_attribute = &union_attribute;
        __current_stack3__.anonymous_type = &anonymous_type;
        __current_stack3__.anonymous_name = &anonymous_name;
        __current_stack3__.atomic_ = &atomic_;
        __current_stack3__.thread_local = &thread_local;
        __current_stack3__.thread_ = &thread_;
        __current_stack3__.attribute_67 = &attribute_67;
        __current_stack3__.pointer_num = &pointer_num;
        __current_stack3__.heap = &heap;
        __current_stack3__.refference = &refference;
        __current_stack3__.no_refference = &no_refference;
        __current_stack3__.channel = &channel;
        __current_stack3__.deffer_ = &deffer_;
        __current_stack3__.any_class = &any_class;
        __current_stack3__.vtable = &vtable;
        __current_stack3__.tuple_name = &tuple_name;
        __current_stack3__.lambda_flag = &lambda_flag;
        __current_stack3__.type_68 = &type_68;
        __current_stack3__.var_name_69 = &var_name_69;
        __current_stack3__.function_pointer_flag = &function_pointer_flag;
        __current_stack3__.pointer_to_array_flag = &pointer_to_array_flag;
        __current_stack3__.var_name_between_brace = &var_name_between_brace;
        __current_stack3__.array_num_typedef = &array_num_typedef;
        })        ,        list$1sNode$ph_each(array_num_typedef,&__current_stack3__,(void*)method_block3_06typenc);
    }
    multiple_assign_var10=((struct tuple2$2char$phchar$ph*)(__right_value0=parse_attribute(info)));
    asm_name=(char*)come_increment_ref_count(multiple_assign_var10->v1);
    attribute2_135=(char*)come_increment_ref_count(multiple_assign_var10->v2);
    come_call_finalizer(tuple2$2char$phchar$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    if(string_operator_not_equals(attribute2_135,"")) {
        __dec_obj223=type_68->mAttribute,
        type_68->mAttribute=(char*)come_increment_ref_count(attribute2_135);
        __dec_obj223 = come_decrement_ref_count(__dec_obj223, (void*)0, (void*)0, 0,0, (void*)0);
    }
    __dec_obj224=type_68->mAsmName,
    type_68->mAsmName=(char*)come_increment_ref_count(asm_name);
    __dec_obj224 = come_decrement_ref_count(__dec_obj224, (void*)0, (void*)0, 0,0, (void*)0);
    skip_spaces_and_lf(info);
    if(type_68->mChannel) {
        type_before=(struct sType*)come_increment_ref_count(sType_clone(type_68));
        __dec_obj225=type_68,
        type_68=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), (void*)0, 3033, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),0,info,0));
        come_call_finalizer(sType_finalize, __dec_obj225,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        __dec_obj226=type_68->mArrayNum,
        type_68->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count((__list_values1__[0]=((struct sNode*)(__right_value1=create_int_node((char*)come_increment_ref_count(xsprintf("2")),info))),
list$1sNode$ph_initialize_with_values((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "06type.nc", 3034, "struct list$1sNode$ph")),1,__list_values1__)));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj226,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((__right_value1) ? __right_value1 = come_decrement_ref_count(__right_value1, ((struct sNode*)__right_value1)->finalize, ((struct sNode*)__right_value1)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        __dec_obj227=type_68->mChannelType,
        type_68->mChannelType=(struct sType*)come_increment_ref_count(type_before);
        come_call_finalizer(sType_finalize, __dec_obj227,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        type_68->mChannel=1;
        come_call_finalizer(sType_finalize, type_before, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(string_operator_not_equals(attribute_67,"")) {
        __dec_obj228=type_68->mAttribute,
        type_68->mAttribute=(char*)come_increment_ref_count(attribute_67);
        __dec_obj228 = come_decrement_ref_count(__dec_obj228, (void*)0, (void*)0, 0,0, (void*)0);
    }
    __result_obj__0 = (struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$phint$*)(__right_value1=tuple3$3sType$phchar$phint$_initialize((struct tuple3$3sType$phchar$phint$*)come_increment_ref_count((struct tuple3$3sType$phchar$phint$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$phint$)*(1), "06type.nc", 3043, "struct tuple3$3sType$phchar$phint$")),(struct sType*)come_increment_ref_count(type_68),(char*)come_increment_ref_count(var_name_69),1))));
    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
    ((alignas_) ? alignas_ = come_decrement_ref_count(alignas_, ((struct sNode*)alignas_)->finalize, ((struct sNode*)alignas_)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    (union_attribute = come_decrement_ref_count(union_attribute, (void*)0, (void*)0, 0, 0, (void*)0));
    (attribute_67 = come_decrement_ref_count(attribute_67, (void*)0, (void*)0, 0, 0, (void*)0));
    (tuple_name = come_decrement_ref_count(tuple_name, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sType_finalize, type_68, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (var_name_69 = come_decrement_ref_count(var_name_69, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(list$1sNode$ph$p_finalize, array_num_typedef, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (asm_name = come_decrement_ref_count(asm_name, (void*)0, (void*)0, 0, 0, (void*)0));
    (attribute2_135 = come_decrement_ref_count(attribute2_135, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(tuple3$3sType$phchar$phint$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
    neo_current_frame = fr.prev;
}

static struct tuple3$3sType$phchar$phint$* tuple3$3sType$phchar$phint$_initialize(struct tuple3$3sType$phchar$phint$* self, struct sType* v1  , char* v2  , int v3)
{
        struct neo_frame fr;
    fr.prev = neo_current_frame;
    fr.fun_name  = "tuple3$3sType$phchar$phint$_initialize";
    neo_current_frame = &fr;
    struct sType* __dec_obj90  ;
    char* __dec_obj91  ;
    struct tuple3$3sType$phchar$phint$* __result_obj__0;
    __dec_obj90=self->v1,
    self->v1=(struct sType*)come_increment_ref_count(v1);
    come_call_finalizer(sType_finalize, __dec_obj90,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj91=self->v2,
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj91 = come_decrement_ref_count(__dec_obj91, (void*)0, (void*)0, 0,0, (void*)0);
    self->v3=v3;
    __result_obj__0 = (struct tuple3$3sType$phchar$phint$*)come_increment_ref_count(self);
    come_call_finalizer(tuple3$3sType$phchar$phint$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sType_finalize, v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0, 0, (void*)0));
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple3$3sType$phchar$phint$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
                                neo_current_frame = fr.prev;
}

static void tuple3$3sType$phchar$phint$$p_finalize(struct tuple3$3sType$phchar$phint$* self)
{
        struct neo_frame fr;
    fr.prev = neo_current_frame;
    fr.fun_name  = "tuple3$3sType$phchar$phint$$p_finalize";
    neo_current_frame = &fr;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0, (void*)0));
    }
        neo_current_frame = fr.prev;
}

static int list$1char$ph_length(struct list$1char$ph* self)
{
        struct neo_frame fr;
    fr.prev = neo_current_frame;
    fr.fun_name  = "list$1char$ph_length";
    neo_current_frame = &fr;
    if(self==((void*)0)) {
           neo_current_frame = fr.prev;
        return 0;
    }
       neo_current_frame = fr.prev;
    return self->len;
                neo_current_frame = fr.prev;
}

static char* list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position)
{
        struct neo_frame fr;
    fr.prev = neo_current_frame;
    fr.fun_name  = "list$1char$ph$p_operator_load_element";
    neo_current_frame = &fr;
    char* default_value  ;
    char* __result_obj__0  ;
    struct list_item$1char$ph* it;
    int i;
    char* default_value_93  ;
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
    memset(&default_value_93,0,sizeof(char*));
    __result_obj__0 = (char*)come_increment_ref_count(default_value_93);
    (default_value_93 = come_decrement_ref_count(default_value_93, (void*)0, (void*)0, 0, 1, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
                    neo_current_frame = fr.prev;
}

static char* list$1char$ph_operator_load_element(struct list$1char$ph* self, int position)
{
        struct neo_frame fr;
    fr.prev = neo_current_frame;
    fr.fun_name  = "list$1char$ph_operator_load_element";
    neo_current_frame = &fr;
    char* default_value  ;
    char* __result_obj__0  ;
    struct list_item$1char$ph* it;
    int i;
    char* default_value_94  ;
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
    memset(&default_value_94,0,sizeof(char*));
    __result_obj__0 = (char*)come_increment_ref_count(default_value_94);
    (default_value_94 = come_decrement_ref_count(default_value_94, (void*)0, (void*)0, 0, 1, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
                    neo_current_frame = fr.prev;
}

static struct list$1sNode$ph* list$1sNode$ph_each(struct list$1sNode$ph* self, void* parent, void (*block)(void*,struct sNode*,int,_Bool*))
{
        struct neo_frame fr;
    fr.prev = neo_current_frame;
    fr.fun_name  = "list$1sNode$ph_each";
    neo_current_frame = &fr;
    struct list$1sNode$ph* __result_obj__0;
    struct list_item$1sNode$ph* it;
    int i;
    _Bool end_flag;
    if(self==((void*)0)) {
        __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    it=self->head;
    i=0;
    while(it!=((void*)0)) {
        end_flag=0;
        block(parent,(struct sNode*)come_increment_ref_count(it->item),i,&end_flag);
        if(end_flag==1) {
            break;
        }
        it=it->next;
        i++;
    }
    __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
                neo_current_frame = fr.prev;
}

void method_block1_06typenc(struct __current_stack1__* parent, struct sNode* it, int it2, _Bool* it3)
{
        struct neo_frame fr;
    fr.prev = neo_current_frame;
    fr.fun_name  = "method_block1_06typenc";
    neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    list$1sNode$ph_add((*(parent->type_68))->mArrayNum,(struct sNode*)come_increment_ref_count(sNode_clone(it)));
    ((it) ? it = come_decrement_ref_count(it, ((struct sNode*)it)->finalize, ((struct sNode*)it)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                neo_current_frame = fr.prev;
}

static struct buffer* map$2char$phbuffer$ph$p_operator_load_element(struct map$2char$phbuffer$ph* self, char* key  )
{
        struct neo_frame fr;
    fr.prev = neo_current_frame;
    fr.fun_name  = "map$2char$phbuffer$ph$p_operator_load_element";
    neo_current_frame = &fr;
    struct buffer* default_value  ;
    struct buffer* __result_obj__0  ;
    unsigned int hash;
    unsigned int it;
    memset(&default_value,0,sizeof(struct buffer*));
    if(self==((void*)0)) {
        __result_obj__0 = (struct buffer*)come_increment_ref_count(default_value);
        come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(1) {
        if(self->item_existance[it]) {
            if(string_equals(self->keys[it],key)) {
                __result_obj__0 = (struct buffer*)come_increment_ref_count(self->items[it]);
                come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                neo_current_frame = fr.prev;
                come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
            it++;
            if(it>=self->size) {
                it=0;
            }
            else if(it==hash) {
                __result_obj__0 = (struct buffer*)come_increment_ref_count(default_value);
                come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                neo_current_frame = fr.prev;
                come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
        }
        else {
            __result_obj__0 = (struct buffer*)come_increment_ref_count(default_value);
            come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            neo_current_frame = fr.prev;
            come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__0;
        }
    }
    __result_obj__0 = (struct buffer*)come_increment_ref_count(default_value);
    come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
                neo_current_frame = fr.prev;
}

static struct buffer* map$2char$phbuffer$ph_operator_load_element(struct map$2char$phbuffer$ph* self, char* key  )
{
        struct neo_frame fr;
    fr.prev = neo_current_frame;
    fr.fun_name  = "map$2char$phbuffer$ph_operator_load_element";
    neo_current_frame = &fr;
    struct buffer* default_value  ;
    struct buffer* __result_obj__0  ;
    unsigned int hash;
    unsigned int it;
    memset(&default_value,0,sizeof(struct buffer*));
    if(self==((void*)0)) {
        __result_obj__0 = (struct buffer*)come_increment_ref_count(default_value);
        come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(1) {
        if(self->item_existance[it]) {
            if(string_equals(self->keys[it],key)) {
                __result_obj__0 = (struct buffer*)come_increment_ref_count(self->items[it]);
                come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                neo_current_frame = fr.prev;
                come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
            it++;
            if(it>=self->size) {
                it=0;
            }
            else if(it==hash) {
                __result_obj__0 = (struct buffer*)come_increment_ref_count(default_value);
                come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                neo_current_frame = fr.prev;
                come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
        }
        else {
            __result_obj__0 = (struct buffer*)come_increment_ref_count(default_value);
            come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            neo_current_frame = fr.prev;
            come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__0;
        }
    }
    __result_obj__0 = (struct buffer*)come_increment_ref_count(default_value);
    come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
                neo_current_frame = fr.prev;
}

static struct map$2char$phsClass$ph* map$2char$phsClass$ph_insert(struct map$2char$phsClass$ph* self, char* key  , struct sClass* item  , _Bool by_pointer)
{
        struct neo_frame fr;
    fr.prev = neo_current_frame;
    fr.fun_name  = "map$2char$phsClass$ph_insert";
    neo_current_frame = &fr;
    struct map$2char$phsClass$ph* __result_obj__0;
    unsigned int hash;
    unsigned int it;
    _Bool same_key_exist;
    char* it2  ;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sClass_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len*10>=self->size) {
        map$2char$phsClass$ph_rehash(self);
    }
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(1) {
        if(self->item_existance[it]) {
            if((!by_pointer&&string_equals(self->keys[it],key))||(by_pointer&&self->keys[it]==key)) {
                if(1) {
                    list$1char$ph_remove(self->key_list,self->keys[it],0);
                    (self->keys[it] = come_decrement_ref_count(self->keys[it], (void*)0, (void*)0, 0, 0, (void*)0));
                    self->keys[it]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it],0);
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
                stackframe();
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
        if((!by_pointer&&string_equals(it2,key))||(by_pointer&&it2==key)) {
            same_key_exist=1;
        }
    }
    if(!same_key_exist) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__0 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sClass_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
                        neo_current_frame = fr.prev;
}

static void map$2char$phsClass$ph_rehash(struct map$2char$phsClass$ph* self)
{
        struct neo_frame fr;
    fr.prev = neo_current_frame;
    fr.fun_name  = "map$2char$phsClass$ph_rehash";
    neo_current_frame = &fr;
    int size;
    void* __right_value0 = (void*)0;
    char** keys  ;
    struct sClass** items  ;
    _Bool* item_existance;
    int len;
    char* it  ;
    struct sClass* default_value  ;
    struct sClass* it2  ;
    unsigned int hash;
    int n;
    struct sClass* default_value_115  ;
    size=self->size*10;
    keys=(char**)come_increment_ref_count(((char**)(__right_value0=(char**)come_calloc(1, sizeof(char*)*(1*(size)), (void*)0, 1867, "char**"))));
    items=(struct sClass**)come_increment_ref_count(((struct sClass**)(__right_value0=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size)), (void*)0, 1868, "struct sClass**"))));
    item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value0=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size)), (void*)0, 1869, "_Bool*"))));
    len=0;
    for(it=map$2char$phsClass$ph_begin(self);!map$2char$phsClass$ph_end(self);it=map$2char$phsClass$ph_next(self)){
        memset(&default_value,0,sizeof(struct sClass*));
        it2=((struct sClass*)(__right_value0=map$2char$phsClass$ph_at(self,it,(struct sClass*)come_increment_ref_count(default_value),0)));
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
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance[n]=1;
                keys[n]=it;
                memset(&default_value_115,0,sizeof(struct sClass*));
                items[n]=((struct sClass*)(__right_value0=map$2char$phsClass$ph_at(self,it,(struct sClass*)come_increment_ref_count(default_value_115),0)));
                len++;
                come_call_finalizer(sClass_finalize, default_value_115, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                come_call_finalizer(sClass_finalize, default_value_115, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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

static char* map$2char$phsClass$ph_begin(struct map$2char$phsClass$ph* self)
{
        struct neo_frame fr;
    fr.prev = neo_current_frame;
    fr.fun_name  = "map$2char$phsClass$ph_begin";
    neo_current_frame = &fr;
    char* result  ;
    char* __result_obj__0  ;
    char* result_113  ;
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
    memset(&result_113,0,sizeof(char*));
    __result_obj__0 = result_113;
    neo_current_frame = fr.prev;
    return __result_obj__0;
        neo_current_frame = fr.prev;
}

static _Bool map$2char$phsClass$ph_end(struct map$2char$phsClass$ph* self)
{
        struct neo_frame fr;
    fr.prev = neo_current_frame;
    fr.fun_name  = "map$2char$phsClass$ph_end";
    neo_current_frame = &fr;
       neo_current_frame = fr.prev;
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
        neo_current_frame = fr.prev;
}

static char* map$2char$phsClass$ph_next(struct map$2char$phsClass$ph* self)
{
        struct neo_frame fr;
    fr.prev = neo_current_frame;
    fr.fun_name  = "map$2char$phsClass$ph_next";
    neo_current_frame = &fr;
    char* result  ;
    char* __result_obj__0  ;
    char* result_114  ;
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
    memset(&result_114,0,sizeof(char*));
    __result_obj__0 = result_114;
    neo_current_frame = fr.prev;
    return __result_obj__0;
        neo_current_frame = fr.prev;
}

static struct sClass* map$2char$phsClass$ph_at(struct map$2char$phsClass$ph* self, char* key  , struct sClass* default_value  , _Bool by_pointer)
{
        struct neo_frame fr;
    fr.prev = neo_current_frame;
    fr.fun_name  = "map$2char$phsClass$ph_at";
    neo_current_frame = &fr;
    struct sClass* __result_obj__0  ;
    unsigned int hash;
    unsigned int it;
    if(self==((void*)0)) {
        __result_obj__0 = (struct sClass*)come_increment_ref_count(default_value);
        come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        neo_current_frame = fr.prev;
        come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(1) {
        if(self->item_existance[it]) {
            if((!by_pointer&&string_equals(self->keys[it],key))||(by_pointer&&self->keys[it]==key)) {
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
            neo_current_frame = fr.prev;
}

static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char* item  , _Bool by_pointer)
{
        struct neo_frame fr;
    fr.prev = neo_current_frame;
    fr.fun_name  = "list$1char$ph_remove";
    neo_current_frame = &fr;
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
                        neo_current_frame = fr.prev;
}

static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail)
{
        struct neo_frame fr;
    fr.prev = neo_current_frame;
    fr.fun_name  = "list$1char$ph_delete";
    neo_current_frame = &fr;
    struct list$1char$ph* __result_obj__0;
    int tmp;
    struct list_item$1char$ph* it;
    int i;
    struct list_item$1char$ph* prev_it;
    struct list_item$1char$ph* it_116;
    int i_117;
    struct list_item$1char$ph* prev_it_118;
    struct list_item$1char$ph* it_119;
    struct list_item$1char$ph* head_prev_it;
    struct list_item$1char$ph* tail_it;
    int i_120;
    struct list_item$1char$ph* prev_it_121;
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
        it_116=self->head;
        i_117=0;
        while(it_116!=((void*)0)) {
            if(i_117==head) {
                self->tail=it_116->prev;
                self->tail->next=((void*)0);
            }
            if(i_117>=head) {
                prev_it_118=it_116;
                it_116=it_116->next;
                i_117++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_118, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_116=it_116->next;
                i_117++;
            }
        }
    }
    else {
        it_119=self->head;
        head_prev_it=((void*)0);
        tail_it=((void*)0);
        i_120=0;
        while(it_119!=((void*)0)) {
            if(i_120==head) {
                head_prev_it=it_119->prev;
            }
            if(i_120==tail) {
                tail_it=it_119;
            }
            if(i_120>=head&&i_120<tail) {
                prev_it_121=it_119;
                it_119=it_119->next;
                i_120++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_121, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_119=it_119->next;
                i_120++;
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
                neo_current_frame = fr.prev;
}

static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self)
{
        struct neo_frame fr;
    fr.prev = neo_current_frame;
    fr.fun_name  = "list$1char$ph_reset";
    neo_current_frame = &fr;
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
            neo_current_frame = fr.prev;
}

static struct list$1sNode$ph* list$1sNode$ph_reset(struct list$1sNode$ph* self)
{
        struct neo_frame fr;
    fr.prev = neo_current_frame;
    fr.fun_name  = "list$1sNode$ph_reset";
    neo_current_frame = &fr;
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
            neo_current_frame = fr.prev;
}

static struct list$1int$* list$1int$_push_back(struct list$1int$* self, int item)
{
        struct neo_frame fr;
    fr.prev = neo_current_frame;
    fr.fun_name  = "list$1int$_push_back";
    neo_current_frame = &fr;
    struct list$1int$* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1int$* litem;
    struct list_item$1int$* litem_133;
    struct list_item$1int$* litem_134;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), (void*)0, 701, "struct list_item$1int$*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        litem->item=item;
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        litem_133=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), (void*)0, 711, "struct list_item$1int$*"))));
        litem_133->prev=self->head;
        litem_133->next=((void*)0);
        litem_133->item=item;
        self->tail=litem_133;
        self->head->next=litem_133;
    }
    else {
        litem_134=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), (void*)0, 721, "struct list_item$1int$*"))));
        litem_134->prev=self->tail;
        litem_134->next=((void*)0);
        litem_134->item=item;
        self->tail->next=litem_134;
        self->tail=litem_134;
    }
    self->len++;
    __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
            neo_current_frame = fr.prev;
}

void method_block2_06typenc(struct __current_stack2__* parent, struct sNode* it, int it2, _Bool* it3)
{
        struct neo_frame fr;
    fr.prev = neo_current_frame;
    fr.fun_name  = "method_block2_06typenc";
    neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    list$1sNode$ph_add((*(parent->type_68))->mVarNameArrayNum,(struct sNode*)come_increment_ref_count(sNode_clone(it)));
    ((it) ? it = come_decrement_ref_count(it, ((struct sNode*)it)->finalize, ((struct sNode*)it)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            neo_current_frame = fr.prev;
}

void method_block3_06typenc(struct __current_stack3__* parent, struct sNode* it, int it2, _Bool* it3)
{
        struct neo_frame fr;
    fr.prev = neo_current_frame;
    fr.fun_name  = "method_block3_06typenc";
    neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    list$1sNode$ph_add((*(parent->type_68))->mArrayNum,(struct sNode*)come_increment_ref_count(sNode_clone(it)));
    ((it) ? it = come_decrement_ref_count(it, ((struct sNode*)it)->finalize, ((struct sNode*)it)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            neo_current_frame = fr.prev;
}

static struct list$1sNode$ph* list$1sNode$ph_initialize_with_values(struct list$1sNode$ph* self, int num_value, struct sNode** values)
{
        struct neo_frame fr;
    fr.prev = neo_current_frame;
    fr.fun_name  = "list$1sNode$ph_initialize_with_values";
    neo_current_frame = &fr;
    int i;
    struct list$1sNode$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(i=0;i<num_value;i++){
        list$1sNode$ph_push_back(self,(struct sNode*)come_increment_ref_count(values[i]));
    }
    __result_obj__0 = (struct list$1sNode$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1sNode$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
            neo_current_frame = fr.prev;
}

