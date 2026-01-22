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

struct sMemHeaderTiny
{
    long size;
    int allocated;
    struct sMemHeaderTiny* next  ;
    struct sMemHeaderTiny* prev  ;
    struct sMemHeaderTiny* free_next  ;
    char* class_name;
    char* sname;
    int sline;
};

struct sMemHeader
{
    long size;
    int allocated;
    struct sMemHeader* next  ;
    struct sMemHeader* prev  ;
    struct sMemHeader* free_next  ;
    char* sname[16];
    int sline[16];
    int id[16];
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

struct sStoreNode
{
    int sline;
    char* sname  ;
    int sline_real;
    char* name  ;
    _Bool alloc;
    struct sType* type  ;
    struct sNode* right_value;
    struct list$1char$ph* multiple_assign;
    struct list$1tuple3$3sType$phchar$phsNode$ph$ph* multiple_declare;
    char* attribute  ;
};

struct sNewChannel
{
    int sline;
    char* sname  ;
    int sline_real;
};

struct sWriteChannelNode
{
    int sline;
    char* sname  ;
    int sline_real;
    struct sNode* exp;
    struct sNode* right_value;
};

struct sReadChannelNode
{
    int sline;
    char* sname  ;
    int sline_real;
    struct sNode* exp;
};

struct sLoadNode
{
    int sline;
    char* sname  ;
    int sline_real;
    char* name  ;
};

struct sFunLoadNode
{
    int sline;
    char* sname  ;
    int sline_real;
    char* name  ;
};

/// variable definition ///
extern struct _IO_FILE* stdin  ;
extern struct _IO_FILE* stdout  ;
extern struct _IO_FILE* stderr  ;
extern char* program_invocation_name;
extern char* program_invocation_short_name;
extern char* gComeStackFrameSName[128];

extern int gComeStackFrameSLine[128];

extern int gComeStackFrameID[128];

extern int gNumComeStackFrame;

extern char* gComeStackFrameBuffer;

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
void come_push_stackframe(char* sname, int sline, int id);
void come_pop_stackframe();
void come_save_stackframe(char* sname, int sline);
void stackframe();
char* come_get_stackframe();
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
_Bool voidp_operator_equals(char* self, char* right);
_Bool voidp_operator_not_equals(char* self, char* right);
_Bool string_operator_not_equals(char* self, char* right);
_Bool charp_operator_not_equals(char* self, char* right);
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
char* append_stackframe(char* c_value, struct sType* type  , struct sInfo* info  );
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
struct tuple3$3sType$phchar$ph_Bool$* backtrace_parse_type(_Bool parse_variable_name, struct sInfo* info  );
void skip_pointer_attribute(struct sInfo* info  );
struct sNode* parse_normal_block(_Bool clang, struct sInfo* info  );
void cast_type(struct sType* left_type  , struct sType* right_type  , struct CVALUE* come_value  , struct sInfo* info  );
_Bool check_assign_type(char* msg, struct sType* left_type  , struct sType* right_type  , struct CVALUE* come_value  , _Bool check_no_pointer, _Bool check_params, struct sInfo* info  );
struct tuple2$2char$phchar$ph* parse_attribute(struct sInfo* info  , _Bool parse_function_attribute);
struct tuple2$2char$phchar$ph* parse_function_attribute(struct sInfo* info  );
struct sNode* get_number(_Bool minus, struct sInfo* info  );
struct sNode* get_oct_number(struct sInfo* info  );
struct sNode* get_hex_number(_Bool minus, struct sInfo* info  );
struct sNode* create_int_node(char* value  , struct sInfo* info  );
struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$* parse_params(struct sInfo* info  , _Bool in_constructor_);
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
_Bool is_contained_generics_class(struct sType* type  , struct sInfo* info  );
_Bool is_type_name(char* buf, struct sInfo* info  );
_Bool parsecmp(char* p2, struct sInfo* info  );
char* parse_word(_Bool digits, struct sInfo* info  );
char* backtrace_parse_word(struct sInfo* info  );
void skip_spaces_and_lf(struct sInfo* info  );
void skip_spaces_and_lf2(struct sInfo* info  );
struct tuple2$2char$ph_Bool$* create_generics_fun(char* fun_name  , struct sGenericsFun* generics_fun  , struct sType* generics_type  , struct sInfo* info  );
struct tuple3$3sType$phchar$ph_Bool$* parse_type(struct sInfo* info  , _Bool parse_variable_name, _Bool parse_multiple_type, _Bool in_function_parametor);
struct tuple2$2sType$phchar$ph* parse_variable_name_on_multiple_declare(struct sType* base_type_name  , _Bool first, struct sInfo* info  );
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
struct sNode* parse_array_initializer(struct sInfo* info  );
struct sNode* parse_struct_initializer(struct sInfo* info  );
struct sNode* parse_global_variable(struct sInfo* info  );
struct sNode* load_var(char* name  , struct sInfo* info  );
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
struct sStoreNode* sStoreNode_initialize(struct sStoreNode* self, char* name  , struct list$1char$ph* multiple_assign, struct list$1tuple3$3sType$phchar$phsNode$ph$ph* multiple_declare, struct sType* type  , _Bool alloc, struct sNode* right_value, struct sInfo* info  , char* attribute  );
char* sStoreNode_kind(struct sStoreNode* self);
_Bool sStoreNode_compile(struct sStoreNode* self, struct sInfo* info  );
static void sNodeBase_finalize(struct sNodeBase* self);
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
static struct list$1tuple3$3sType$phchar$phsNode$ph$ph* list$1tuple3$3sType$phchar$phsNode$ph$ph$p_clone(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self);
static void list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self);
static void list_item$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* self);
static void tuple3$3sType$phchar$phsNode$ph$p_finalize(struct tuple3$3sType$phchar$phsNode$ph* self);
static struct list$1tuple3$3sType$phchar$phsNode$ph$ph* list$1tuple3$3sType$phchar$phsNode$ph$ph_initialize(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self);
static struct list$1tuple3$3sType$phchar$phsNode$ph$ph* list$1tuple3$3sType$phchar$phsNode$ph$ph_add(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self, struct tuple3$3sType$phchar$phsNode$ph* item);
static struct tuple3$3sType$phchar$phsNode$ph* tuple3$3sType$phchar$phsNode$ph_clone(struct tuple3$3sType$phchar$phsNode$ph* self);
static void tuple3$3sType$phchar$phsNode$ph_finalize(struct tuple3$3sType$phchar$phsNode$ph* self);
static void list$1tuple3$3sType$phchar$phsNode$ph$ph_finalize(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self);
static void sStoreNode_finalize(struct sStoreNode* self);
static struct sVar* map$2char$phsVar$ph_at(struct map$2char$phsVar$ph* self, char* key  , struct sVar* default_value  );
static void sVar_finalize(struct sVar* self  );
static struct map$2char$phsVar$ph* map$2char$phsVar$ph_remove(struct map$2char$phsVar$ph* self, char* key  );
static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char* item  );
static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail);
static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self);
static struct tuple3$3sType$phchar$phsNode$ph* list$1tuple3$3sType$phchar$phsNode$ph$ph_begin(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self);
static _Bool list$1tuple3$3sType$phchar$phsNode$ph$ph_end(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self);
static struct tuple3$3sType$phchar$phsNode$ph* list$1tuple3$3sType$phchar$phsNode$ph$ph_next(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self);
static void CVALUE_finalize(struct CVALUE* self  );
static struct sFun* map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char* key  );
static void sFun_finalize(struct sFun* self  );
static void list$1sVar$ph$p_finalize(struct list$1sVar$ph* self);
static void list_item$1sVar$ph$p_finalize(struct list_item$1sVar$ph* self);
static void sBlock_finalize(struct sBlock* self  );
static struct sFun* map$2char$phsFun$ph_operator_load_element(struct map$2char$phsFun$ph* self, char* key  );
static int list$1tuple3$3sType$phchar$phsNode$ph$ph_length(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self);
static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item  );
static char* list$1char$ph_begin(struct list$1char$ph* self);
static _Bool list$1char$ph_end(struct list$1char$ph* self);
static char* list$1char$ph_next(struct list$1char$ph* self);
static int list$1sType$ph_length(struct list$1sType$ph* self);
static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position);
static struct sType* list$1sType$ph_operator_load_element(struct list$1sType$ph* self, int position);
static struct list$1CVALUE$ph* list$1CVALUE$ph_add(struct list$1CVALUE$ph* self, struct CVALUE* item  );
static int list$1sNode$ph_length(struct list$1sNode$ph* self);
struct sNewChannel* sNewChannel_initialize(struct sNewChannel* self, struct sInfo* info  );
char* sNewChannel_kind(struct sNewChannel* self);
_Bool sNewChannel_compile(struct sNewChannel* self, struct sInfo* info  );
static void sNewChannel_finalize(struct sNewChannel* self);
struct sWriteChannelNode* sWriteChannelNode_initialize(struct sWriteChannelNode* self, struct sNode* exp, struct sNode* right_value, struct sInfo* info  );
char* sWriteChannelNode_kind(struct sWriteChannelNode* self);
_Bool sWriteChannelNode_compile(struct sWriteChannelNode* self, struct sInfo* info  );
static void sWriteChannelNode_finalize(struct sWriteChannelNode* self);
struct sReadChannelNode* sReadChannelNode_initialize(struct sReadChannelNode* self, struct sNode* exp, struct sInfo* info  );
char* sReadChannelNode_kind(struct sReadChannelNode* self);
_Bool sReadChannelNode_compile(struct sReadChannelNode* self, struct sInfo* info  );
static void sReadChannelNode_finalize(struct sReadChannelNode* self);
struct sNode* store_var(char* name  , struct list$1char$ph* multiple_assign, struct list$1tuple3$3sType$phchar$phsNode$ph$ph* multiple_declare, struct sType* type  , _Bool alloc, struct sNode* right_value, struct sInfo* info  );
static struct sStoreNode* sStoreNode_clone(struct sStoreNode* self);
struct sLoadNode* sLoadNode_initialize(struct sLoadNode* self, char* name  , struct sInfo* info  );
char* sLoadNode_kind(struct sLoadNode* self);
_Bool sLoadNode_terminated(struct sLoadNode* self);
_Bool sLoadNode_compile(struct sLoadNode* self, struct sInfo* info  );
static void sLoadNode_finalize(struct sLoadNode* self);
static struct list$1sNode$ph* list$1sNode$ph_delete(struct list$1sNode$ph* self, int head, int tail);
static struct list$1sNode$ph* list$1sNode$ph_reset(struct list$1sNode$ph* self);
struct sNode* create_load_var(char* var_name, struct sInfo* info  );
static struct sLoadNode* sLoadNode_clone(struct sLoadNode* self);
struct sFunLoadNode* sFunLoadNode_initialize(struct sFunLoadNode* self, char* name  , struct sInfo* info  );
char* sFunLoadNode_kind(struct sFunLoadNode* self);
_Bool sFunLoadNode_compile(struct sFunLoadNode* self, struct sInfo* info  );
static void sFunLoadNode_finalize(struct sFunLoadNode* self);
void add_variable_to_table(char* name, struct sType* type  , struct sInfo* info  , _Bool function_param, _Bool comma);
static struct sVar* list$1sVar$ph_begin(struct list$1sVar$ph* self);
static _Bool list$1sVar$ph_end(struct list$1sVar$ph* self);
static struct sVar* list$1sVar$ph_next(struct list$1sVar$ph* self);
static struct map$2char$phsVar$ph* map$2char$phsVar$ph_insert(struct map$2char$phsVar$ph* self, char* key  , struct sVar* item  );
static void map$2char$phsVar$ph_rehash(struct map$2char$phsVar$ph* self);
static char* map$2char$phsVar$ph_begin(struct map$2char$phsVar$ph* self);
static _Bool map$2char$phsVar$ph_end(struct map$2char$phsVar$ph* self);
static char* map$2char$phsVar$ph_next(struct map$2char$phsVar$ph* self);
static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item  );
static struct list$1sVar$ph* list$1sVar$ph_add(struct list$1sVar$ph* self, struct sVar* item  );
void add_variable_to_global_table(char* name, struct sType* type  , struct sInfo* info  );
void add_variable_to_global_table_with_int_value(char* name, struct sType* type  , char* c_value, struct sInfo* info  );
struct sNode* string_node_v7(char* buf, char* head, int head_sline, struct sInfo* info  );
static void tuple3$3sType$phchar$ph_Bool$$p_finalize(struct tuple3$3sType$phchar$ph_Bool$* self);
static void tuple2$2sType$phchar$ph$p_finalize(struct tuple2$2sType$phchar$ph* self);
static struct sNewChannel* sNewChannel_clone(struct sNewChannel* self);
static struct list$1tuple3$3sType$phchar$phsNode$ph$ph* list$1tuple3$3sType$phchar$phsNode$ph$ph_push_back(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self, struct tuple3$3sType$phchar$phsNode$ph* item);
static struct tuple3$3sType$phchar$phsNode$ph* tuple3$3sType$phchar$phsNode$ph_initialize(struct tuple3$3sType$phchar$phsNode$ph* self, struct sType* v1  , char* v2  , struct sNode* v3);
static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph_add(struct list$1tuple2$2char$phsType$ph$ph* self, struct tuple2$2char$phsType$ph* item);
static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self);
static struct tuple2$2char$phsType$ph* tuple2$2char$phsType$ph_initialize(struct tuple2$2char$phsType$ph* self, char* v1  , struct sType* v2  );
struct sNode* expression_node_v95(struct sInfo* info  );
static struct sReadChannelNode* sReadChannelNode_clone(struct sReadChannelNode* self);
struct sNode* post_position_operator_v7(struct sNode* node, struct sInfo* info  );
static struct sWriteChannelNode* sWriteChannelNode_clone(struct sWriteChannelNode* self);
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
struct sStoreNode* sStoreNode_initialize(struct sStoreNode* self, char* name  , struct list$1char$ph* multiple_assign, struct list$1tuple3$3sType$phchar$phsNode$ph$ph* multiple_declare, struct sType* type  , _Bool alloc, struct sNode* right_value, struct sInfo* info  , char* attribute  )
{
    void* __right_value0 = (void*)0;
    char* __dec_obj1  ;
    struct sType* __dec_obj33  ;
    struct sNode* __dec_obj34;
    struct list$1char$ph* __dec_obj35;
    struct list$1tuple3$3sType$phchar$phsNode$ph$ph* __dec_obj42;
    char* __dec_obj43  ;
    struct sStoreNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sStoreNode*)come_increment_ref_count(self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj1=self->name,
    self->name=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj1 = come_decrement_ref_count(__dec_obj1, (void*)0, (void*)0, 0,0, (void*)0);
    self->alloc=alloc;
    __dec_obj33=self->type,
    self->type=(struct sType*)come_increment_ref_count(sType_clone(type));
    come_call_finalizer(sType_finalize, __dec_obj33,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj34=self->right_value,
    self->right_value=(struct sNode*)come_increment_ref_count(sNode_clone(right_value));
    (__dec_obj34 ? __dec_obj34 = come_decrement_ref_count(__dec_obj34, ((struct sNode*)__dec_obj34)->finalize, ((struct sNode*)__dec_obj34)->_protocol_obj, 0,0, (void*)0) :0);
    __dec_obj35=self->multiple_assign,
    self->multiple_assign=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(multiple_assign));
    come_call_finalizer(list$1char$ph_finalize, __dec_obj35,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj42=self->multiple_declare,
    self->multiple_declare=(struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(list$1tuple3$3sType$phchar$phsNode$ph$ph$p_clone(multiple_declare));
    come_call_finalizer(list$1tuple3$3sType$phchar$phsNode$ph$ph_finalize, __dec_obj42,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj43=self->attribute,
    self->attribute=(char*)come_increment_ref_count(attribute);
    __dec_obj43 = come_decrement_ref_count(__dec_obj43, (void*)0, (void*)0, 0,0, (void*)0);
    __result_obj__0 = (struct sStoreNode*)come_increment_ref_count(self);
    come_call_finalizer(sStoreNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
    (attribute = come_decrement_ref_count(attribute, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sStoreNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char* sStoreNode_kind(struct sStoreNode* self)
{
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string("sStoreNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool sStoreNode_compile(struct sStoreNode* self, struct sInfo* info  )
{
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct sVar* var_  ;
    struct sType* type  ;
    struct buffer* buf  ;
    int n;
    struct list$1tuple3$3sType$phchar$phsNode$ph$ph* o2_saved;
    struct tuple3$3sType$phchar$phsNode$ph* it;
    struct tuple3$3sType$phchar$phsNode$ph* multiple_assign_var1
;    struct sType* type_18  =0;
    char* var_name  =0;
    struct sNode* right_value=0;
    struct sType* type2  ;
    _Bool __result_obj__0;
    struct sType* left_type  ;
    _Bool Value;
    struct CVALUE* come_value  ;
    char* var_name2  ;
    _Bool _conditional_value_X0;
    char* var_name2_19  ;
    struct CVALUE* come_value_20  ;
    char* __dec_obj44  ;
    void* __right_value2 = (void*)0;
    struct sType* __dec_obj45  ;
    struct buffer* buf_23  ;
    _Bool Value_24;
    struct CVALUE* right_value_25  ;
    struct sType* right_type  ;
    struct sType* __dec_obj49  ;
    struct sType* __dec_obj50  ;
    int i;
    struct list$1char$ph* o2_saved_26;
    char* it_28  ;
    struct sVar* var__30  ;
    struct sType* right_type2  ;
    char* multiple_var_name  ;
    char* __dec_obj51  ;
    struct list$1char$ph* o2_saved_33;
    char* it_34  ;
    struct sType* right_type2_35  ;
    struct sVar* var__36  ;
    struct sType* left_type_37  ;
    struct CVALUE* right_value2  ;
    char* __dec_obj52  ;
    struct sType* __dec_obj53  ;
    struct CVALUE* come_value_38  ;
    char* __dec_obj54  ;
    char* __dec_obj55  ;
    struct sType* __dec_obj56  ;
    _Bool _conditional_value_X1;
    struct CVALUE* come_value_39  ;
    char* __dec_obj57  ;
    struct sVar* var__42  ;
    struct sType* type_43  ;
    struct sType* left_type_44  ;
    _Bool _conditional_value_X2;
    _Bool _conditional_value_X3;
    _Bool _conditional_value_X4;
    struct CVALUE* come_value_45  ;
    char* __dec_obj61  ;
    struct sType* __dec_obj62  ;
    struct sVar* var__46  ;
    struct sType* type_47  ;
    _Bool Value_48;
    _Bool array_initializer;
    _Bool string_initializer;
    _Bool new_channel;
    struct CVALUE* right_value_49  ;
    struct sType* right_type_50  ;
    struct sType* type_51  ;
    struct sType* left_type_52  ;
    struct sVar* var__53  ;
    struct CVALUE* come_value_54  ;
    char* __dec_obj63  ;
    struct sType* __dec_obj64  ;
    _Bool _conditional_value_X5;
    struct CVALUE* come_value_55  ;
    char* __dec_obj65  ;
    struct sType* __dec_obj66  ;
    struct CVALUE* come_value_56  ;
    char* __dec_obj67  ;
    struct sType* __dec_obj68  ;
    _Bool Value_57;
    _Bool new_channel_58;
    struct CVALUE* right_value_59  ;
    struct sType* right_type_60  ;
    struct sClass* current_stack_frame_struct  ;
    _Bool _conditional_value_X6;
    struct sVar* parent_var  ;
    struct sType* left_type_61  ;
    char* c_value  ;
    char* c_value_62  ;
    struct CVALUE* come_value_63  ;
    char* __dec_obj69  ;
    struct sType* __dec_obj70  ;
    struct sVar* var__64  ;
    struct CVALUE* come_value_65  ;
    char* __dec_obj71  ;
    struct sType* __dec_obj72  ;
    struct sType* __dec_obj73  ;
    struct sType* left_type_66  ;
    struct CVALUE* come_value_67  ;
    char* __dec_obj74  ;
    struct sType* __dec_obj75  ;
    struct CVALUE* come_value_68  ;
    char* __dec_obj76  ;
    struct sType* __dec_obj77  ;
    memset(&right_type, 0, sizeof(right_type));
    if(self->multiple_declare) {
        var_=((struct sVar*)(__right_value1=map$2char$phsVar$ph_at(info->lv_table->mVars,((char*)(__right_value0=__builtin_string(self->name))),((void*)0))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        if(var_) {
            if(var_->mType->mHeap) {
                free_object(((struct sType*)(__right_value0=sType_clone(var_->mType))),var_->mCValueName,0,0,info,0);
                come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            }
            map$2char$phsVar$ph_remove(info->lv_table->mVars,(char*)come_increment_ref_count(__builtin_string(self->name)));
        }
        if(self->type==((void*)0)) {
            err_msg(info,"Require concrete variable type(%s)",self->name);
            return 1;
        }
        type=(struct sType*)come_increment_ref_count(solve_generics(self->type,info->generics_type,info));
        type->mPointerNum=0;
        buf=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "12var.nc", 44, "struct buffer*"))));
        buffer_append_format(buf,"%s ",((char*)(__right_value0=make_type_name_string(type,info,0,0,0))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        n=0;
        for(o2_saved=(struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(self->multiple_declare),it=list$1tuple3$3sType$phchar$phsNode$ph$ph_begin(o2_saved);!list$1tuple3$3sType$phchar$phsNode$ph$ph_end(o2_saved);it=list$1tuple3$3sType$phchar$phsNode$ph$ph_next(o2_saved)){
            multiple_assign_var1=it;
            type_18=(struct sType*)come_increment_ref_count(multiple_assign_var1->v1);
            var_name=(char*)come_increment_ref_count(multiple_assign_var1->v2);
            right_value=(struct sNode*)come_increment_ref_count(multiple_assign_var1->v3);
            var_=((struct sVar*)(__right_value1=map$2char$phsVar$ph_at(info->lv_table->mVars,((char*)(__right_value0=__builtin_string(var_name))),((void*)0))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            if(var_) {
                if(var_->mType->mHeap) {
                    free_object(((struct sType*)(__right_value0=sType_clone(var_->mType))),var_->mCValueName,0,0,info,0);
                    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                }
                map$2char$phsVar$ph_remove(info->lv_table->mVars,(char*)come_increment_ref_count(__builtin_string(var_name)));
            }
            type2=(struct sType*)come_increment_ref_count(solve_generics(type_18,info->generics_type,info));
            add_variable_to_table(var_name,type2,info,0,0);
            var_=get_variable_from_table(info->lv_table,var_name);
            if(var_==((void*)0)) {
                err_msg2(info,"var not found(%s)(ZY) at definition of variable",it);
                __result_obj__0 = 1;
                come_call_finalizer(sType_finalize, type_18, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0));
                ((right_value) ? right_value = come_decrement_ref_count(right_value, ((struct sNode*)right_value)->finalize, ((struct sNode*)right_value)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result_obj__0;
            }
            left_type=(struct sType*)come_increment_ref_count(var_->mType);
            if(right_value) {
                Value=node_compile(right_value,info);
                if(!Value) {
                    __result_obj__0 = 0;
                    come_call_finalizer(sType_finalize, type_18, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0));
                    ((right_value) ? right_value = come_decrement_ref_count(right_value, ((struct sNode*)right_value)->finalize, ((struct sNode*)right_value)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer(sType_finalize, left_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer(list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    return __result_obj__0;
                }
                else {
                }
                come_value=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                var_name2=(char*)come_increment_ref_count(make_var_name(type2,var_name,info,0));
                buffer_append_format(buf,"%s=%s",var_name2,come_value->c_value);
                come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (var_name2 = come_decrement_ref_count(var_name2, (void*)0, (void*)0, 0, 0, (void*)0));
            }
            else {
                if(({(_conditional_value_X0=(string_operator_not_equals(info->come_fun->mName,"memset")&&!left_type->mNoCallingDestructor&&((struct sFun*)(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,"memset")))));                come_call_finalizer(sFun_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
_conditional_value_X0;})) {
                    add_come_last_code2(info,"memset(&%s, 0, sizeof(%s));\n",var_->mCValueName,var_->mCValueName);
                }
                var_name2_19=(char*)come_increment_ref_count(make_var_name(type2,var_name,info,0));
                buffer_append_format(buf,"%s",var_name2_19);
                (var_name2_19 = come_decrement_ref_count(var_name2_19, (void*)0, (void*)0, 0, 0, (void*)0));
            }
            if(n!=list$1tuple3$3sType$phchar$phsNode$ph$ph_length(self->multiple_declare)-1) {
                buffer_append_format(buf,", ");
            }
            n++;
            come_call_finalizer(sType_finalize, type_18, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0));
            ((right_value) ? right_value = come_decrement_ref_count(right_value, ((struct sNode*)right_value)->finalize, ((struct sNode*)right_value)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, left_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer(list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_value_20=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "12var.nc", 96, "struct CVALUE*"))));
        __dec_obj44=come_value_20->c_value,
        come_value_20->c_value=(char*)come_increment_ref_count(buffer_to_string(buf));
        __dec_obj44 = come_decrement_ref_count(__dec_obj44, (void*)0, (void*)0, 0,0, (void*)0);
        __dec_obj45=come_value_20->type,
        come_value_20->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "12var.nc", 98, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),0,info,0));
        come_call_finalizer(sType_finalize, __dec_obj45,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_value_20->var=((void*)0);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_20));
        add_come_last_code(info,"%s",come_value_20->c_value);
        come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(CVALUE_finalize, come_value_20, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(self->multiple_assign) {
        buf_23=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "12var.nc", 106, "struct buffer*"))));
        Value_24=node_compile(self->right_value,info);
        if(!Value_24) {
            __result_obj__0 = 0;
            come_call_finalizer(buffer_finalize, buf_23, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result_obj__0;
        }
        else {
        }
        right_value_25=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        if(right_value_25->type->mNoSolvedGenericsType) {
            __dec_obj49=right_type,
            right_type=(struct sType*)come_increment_ref_count(sType_clone(right_value_25->type->mNoSolvedGenericsType));
            come_call_finalizer(sType_finalize, __dec_obj49,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            __dec_obj50=right_type,
            right_type=(struct sType*)come_increment_ref_count(sType_clone(right_value_25->type));
            come_call_finalizer(sType_finalize, __dec_obj50,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        i=0;
        for(o2_saved_26=(struct list$1char$ph*)come_increment_ref_count(self->multiple_assign),it_28=list$1char$ph_begin(o2_saved_26);!list$1char$ph_end(o2_saved_26);it_28=list$1char$ph_next(o2_saved_26)){
            if(i<list$1sType$ph_length(right_type->mGenericsTypes)) {
                var__30=((struct sVar*)(__right_value1=map$2char$phsVar$ph_at(info->lv_table->mVars,((char*)(__right_value0=__builtin_string(it_28))),((void*)0))));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                if(var__30) {
                    if(var__30->mType->mHeap) {
                        free_object(((struct sType*)(__right_value0=sType_clone(var__30->mType))),var__30->mCValueName,0,0,info,0);
                        come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    }
                    map$2char$phsVar$ph_remove(info->lv_table->mVars,(char*)come_increment_ref_count(__builtin_string(it_28)));
                }
                right_type2=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)(__right_value0=list$1sType$ph_operator_load_element(right_type->mGenericsTypes,i)))));
                come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                right_type2->mStatic=0;
                add_variable_to_table(it_28,right_type2,info,0,0);
                come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            i++;
        }
        come_call_finalizer(list$1char$ph$p_finalize, o2_saved_26, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        static int num_multiple_var=0;
        multiple_var_name=(char*)come_increment_ref_count(xsprintf("multiple_assign_var%d",++num_multiple_var));
        add_come_code_at_function_head(info,"%s\n;",((char*)(__right_value0=make_define_var(right_value_25->type,multiple_var_name,info,0,0))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        add_come_code(info,"%s=%s;\n",multiple_var_name,right_value_25->c_value);
        __dec_obj51=right_value_25->c_value,
        right_value_25->c_value=(char*)come_increment_ref_count((char*)come_memdup(multiple_var_name, "12var.nc", 148, "char*"));
        __dec_obj51 = come_decrement_ref_count(__dec_obj51, (void*)0, (void*)0, 0,0, (void*)0);
        i=0;
        for(o2_saved_33=(struct list$1char$ph*)come_increment_ref_count(self->multiple_assign),it_34=list$1char$ph_begin(o2_saved_33);!list$1char$ph_end(o2_saved_33);it_34=list$1char$ph_next(o2_saved_33)){
            if(i<list$1sType$ph_length(right_type->mGenericsTypes)) {
                right_type2_35=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)(__right_value0=list$1sType$ph_operator_load_element(right_type->mGenericsTypes,i)))));
                come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                var__36=get_variable_from_table(info->lv_table,it_34);
                left_type_37=(struct sType*)come_increment_ref_count(var__36->mType);
                right_value2=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "12var.nc", 159, "struct CVALUE*"))));
                __dec_obj52=right_value2->c_value,
                right_value2->c_value=(char*)come_increment_ref_count(xsprintf("%s->v%d",right_value_25->c_value,i+1));
                __dec_obj52 = come_decrement_ref_count(__dec_obj52, (void*)0, (void*)0, 0,0, (void*)0);
                __dec_obj53=right_value2->type,
                right_value2->type=(struct sType*)come_increment_ref_count(right_type2_35);
                come_call_finalizer(sType_finalize, __dec_obj53,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                right_value2->var=((void*)0);
                come_value_38=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "12var.nc", 165, "struct CVALUE*"))));
                check_assign_type(((char*)(__right_value1=xsprintf("\%s is assining to}",((char*)(__right_value0=string_to_string(self->name)))))),left_type_37,right_type2_35,come_value_38,0,0,info);
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
                if(right_type2_35->mHeap&&left_type_37->mHeap&&left_type_37->mPointerNum>0&&right_type2_35->mPointerNum>0) {
                    std_move(left_type_37,right_type2_35,right_value2,info);
                    __dec_obj54=come_value_38->c_value,
                    come_value_38->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__36->mCValueName,right_value2->c_value));
                    __dec_obj54 = come_decrement_ref_count(__dec_obj54, (void*)0, (void*)0, 0,0, (void*)0);
                }
                else {
                    __dec_obj55=come_value_38->c_value,
                    come_value_38->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__36->mCValueName,right_value2->c_value));
                    __dec_obj55 = come_decrement_ref_count(__dec_obj55, (void*)0, (void*)0, 0,0, (void*)0);
                }
                __dec_obj56=come_value_38->type,
                come_value_38->type=(struct sType*)come_increment_ref_count(sType_clone(left_type_37));
                come_call_finalizer(sType_finalize, __dec_obj56,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_value_38->var=var__36;
                add_come_code_at_function_head(info,"%s=0;\n",((char*)(__right_value0=make_define_var(left_type_37,var__36->mCValueName,info,0,0))));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                add_come_code(info,"%s;\n",come_value_38->c_value);
                come_call_finalizer(sType_finalize, right_type2_35, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, left_type_37, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(CVALUE_finalize, right_value2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(CVALUE_finalize, come_value_38, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            i++;
        }
        come_call_finalizer(list$1char$ph$p_finalize, o2_saved_33, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(({(_conditional_value_X1=(string_operator_not_equals(((char*)(__right_value1=buffer_to_string(buf_23))),"")));        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
_conditional_value_X1;})) {
            come_value_39=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "12var.nc", 189, "struct CVALUE*"))));
            __dec_obj57=come_value_39->c_value,
            come_value_39->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_23));
            __dec_obj57 = come_decrement_ref_count(__dec_obj57, (void*)0, (void*)0, 0,0, (void*)0);
            list$1CVALUE$ph_add(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_39));
            come_call_finalizer(CVALUE_finalize, come_value_39, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer(buffer_finalize, buf_23, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(CVALUE_finalize, right_value_25, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, right_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (multiple_var_name = come_decrement_ref_count(multiple_var_name, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    else if(self->right_value==((void*)0)) {
        var__42=((struct sVar*)(__right_value1=map$2char$phsVar$ph_at(info->lv_table->mVars,((char*)(__right_value0=__builtin_string(self->name))),((void*)0))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        if(var__42) {
            if(var__42->mType->mHeap) {
                free_object(((struct sType*)(__right_value0=sType_clone(var__42->mType))),var__42->mCValueName,0,0,info,0);
                come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            }
            map$2char$phsVar$ph_remove(info->lv_table->mVars,(char*)come_increment_ref_count(__builtin_string(self->name)));
        }
        if(self->type==((void*)0)) {
            err_msg(info,"Require concrete variable type(%s)",self->name);
            return 1;
        }
        type_43=(struct sType*)come_increment_ref_count(solve_generics(self->type,info->generics_type,info));
        add_variable_to_table(self->name,((struct sType*)(__right_value0=sType_clone(type_43))),info,0,0);
        come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        var__42=get_variable_from_table(info->lv_table,self->name);
        if(var__42==((void*)0)) {
            var__42=get_variable_from_table(info->gv_table,self->name);
            if(var__42==((void*)0)) {
                err_msg(info,"var not found(%s)(Y) at definition of variable",self->name);
                __result_obj__0 = 1;
                come_call_finalizer(sType_finalize, type_43, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result_obj__0;
            }
        }
        left_type_44=(struct sType*)come_increment_ref_count(sType_clone(var__42->mType));
        if(left_type_44->mChannel) {
            if(({(_conditional_value_X2=(string_operator_not_equals(info->come_fun->mName,"memset")&&!left_type_44->mNoCallingDestructor&&((struct sFun*)(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,"memset")))));            come_call_finalizer(sFun_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
_conditional_value_X2;})) {
                add_come_code_at_function_head2(info,"memset(%s, 0, sizeof(int)*2);\n",var__42->mCValueName);
            }
        }
        else if(list$1sNode$ph_length(left_type_44->mArrayNum)>0||list$1sNode$ph_length(left_type_44->mVarNameArrayNum)>0) {
            add_come_code(info,"%s;\n",((char*)(__right_value0=make_define_var(left_type_44,var__42->mCValueName,info,0,0))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            if(({(_conditional_value_X3=(string_operator_not_equals(info->come_fun->mName,"memset")&&!left_type_44->mNoCallingDestructor&&((struct sFun*)(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,"memset")))));            come_call_finalizer(sFun_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
_conditional_value_X3;})) {
                add_come_code(info,"memset(&%s, 0, sizeof(%s));\n",var__42->mCValueName,var__42->mCValueName);
            }
        }
        else {
            add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value0=make_define_var(left_type_44,var__42->mCValueName,info,0,0))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            if(({(_conditional_value_X4=(string_operator_not_equals(info->come_fun->mName,"memset")&&!left_type_44->mNoCallingDestructor&&((struct sFun*)(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,"memset")))));            come_call_finalizer(sFun_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
_conditional_value_X4;})) {
                add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var__42->mCValueName,var__42->mCValueName);
            }
        }
        come_value_45=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "12var.nc", 248, "struct CVALUE*"))));
        __dec_obj61=come_value_45->c_value,
        come_value_45->c_value=(char*)come_increment_ref_count(xsprintf("%s",var__42->mCValueName));
        __dec_obj61 = come_decrement_ref_count(__dec_obj61, (void*)0, (void*)0, 0,0, (void*)0);
        __dec_obj62=come_value_45->type,
        come_value_45->type=(struct sType*)come_increment_ref_count(sType_clone(left_type_44));
        come_call_finalizer(sType_finalize, __dec_obj62,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_value_45->var=var__42;
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_45));
        if(!left_type_44->mClass->mNumber&&left_type_44->mPointerNum==0) {
            var__42->mType->mAllocaValue=1;
            if(var__42->mType->mNoSolvedGenericsType) {
                var__42->mType->mNoSolvedGenericsType->mAllocaValue=1;
            }
        }
        come_call_finalizer(sType_finalize, type_43, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, left_type_44, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(CVALUE_finalize, come_value_45, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(self->alloc) {
        var__46=((struct sVar*)(__right_value1=map$2char$phsVar$ph_at(info->lv_table->mVars,((char*)(__right_value0=__builtin_string(self->name))),((void*)0))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        if(var__46) {
            if(var__46->mType->mHeap) {
                free_object(((struct sType*)(__right_value0=sType_clone(var__46->mType))),var__46->mCValueName,0,0,info,0);
                come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            }
            map$2char$phsVar$ph_remove(info->lv_table->mVars,(char*)come_increment_ref_count(__builtin_string(self->name)));
        }
        if(self->type==((void*)0)) {
        }
        else {
            type_47=(struct sType*)come_increment_ref_count(solve_generics(self->type,info->generics_type,info));
            add_variable_to_table(self->name,type_47,info,0,0);
            come_call_finalizer(sType_finalize, type_47, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        Value_48=node_compile(self->right_value,info);
        if(!Value_48) {
            return 0;
        }
        else {
        }
        array_initializer=string_operator_equals(((char*)(__right_value1=self->right_value->kind(self->right_value->_protocol_obj))),"sArrayInitializer");
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        string_initializer=string_operator_equals(((char*)(__right_value1=self->right_value->kind(self->right_value->_protocol_obj))),"sStrNode");
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        new_channel=string_operator_equals(((char*)(__right_value1=self->right_value->kind(self->right_value->_protocol_obj))),"sNewChannel");
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        right_value_49=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        right_type_50=(struct sType*)come_increment_ref_count(sType_clone(right_value_49->type));
        right_type_50->mStatic=0;
        if(self->type==((void*)0)) {
            type_51=(struct sType*)come_increment_ref_count(solve_generics(right_type_50,info->generics_type,info));
            add_variable_to_table(self->name,type_51,info,0,0);
            come_call_finalizer(sType_finalize, type_51, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        var__46=get_variable_from_table(info->lv_table,self->name);
        left_type_52=(struct sType*)come_increment_ref_count(sType_clone(var__46->mType));
        if(left_type_52->mHeap&&(left_type_52->mConstant||left_type_52->mStatic||left_type_52->mRegister)) {
            err_msg(info,"don't append heap with constant, static, register");
            __result_obj__0 = 1;
            come_call_finalizer(CVALUE_finalize, right_value_49, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, right_type_50, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, left_type_52, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result_obj__0;
        }
        else if(array_initializer||(string_operator_equals(left_type_52->mClass->mName,"char")&&(list$1sNode$ph_length(left_type_52->mArrayNum)>0||left_type_52->mArrayPointerType)&&string_initializer)||left_type_52->mStatic||left_type_52->mConstant||left_type_52->mRegister||list$1sNode$ph_length(left_type_52->mArrayNum)>0||left_type_52->mArrayPointerType) {
            var__53=((struct sVar*)(__right_value1=map$2char$phsVar$ph_at(info->lv_table->mVars,((char*)(__right_value0=__builtin_string(self->name))),((void*)0))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            come_value_54=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "12var.nc", 309, "struct CVALUE*"))));
            __dec_obj63=come_value_54->c_value,
            come_value_54->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",((char*)(__right_value0=make_define_var(left_type_52,var__53->mCValueName,info,0,0))),right_value_49->c_value));
            __dec_obj63 = come_decrement_ref_count(__dec_obj63, (void*)0, (void*)0, 0,0, (void*)0);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            __dec_obj64=come_value_54->type,
            come_value_54->type=(struct sType*)come_increment_ref_count(sType_clone(left_type_52));
            come_call_finalizer(sType_finalize, __dec_obj64,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_value_54->var=var__53;
            list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_54));
            add_come_last_code(info,"%s",come_value_54->c_value);
            come_call_finalizer(CVALUE_finalize, come_value_54, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(left_type_52->mChannel&&new_channel) {
            add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value0=make_define_var(left_type_52,var__46->mCValueName,info,0,0))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            if(({(_conditional_value_X5=(string_operator_not_equals(info->come_fun->mName,"memset")&&!left_type_52->mNoCallingDestructor&&((struct sFun*)(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,"memset")))));            come_call_finalizer(sFun_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
_conditional_value_X5;})) {
                add_come_code_at_function_head2(info,"memset(%s, 0, sizeof(int)*2);\n",var__46->mCValueName);
            }
            come_value_55=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "12var.nc", 326, "struct CVALUE*"))));
            __dec_obj65=come_value_55->c_value,
            come_value_55->c_value=(char*)come_increment_ref_count(xsprintf("(pipe(%s), (void*)0)",var__46->mCValueName));
            __dec_obj65 = come_decrement_ref_count(__dec_obj65, (void*)0, (void*)0, 0,0, (void*)0);
            __dec_obj66=come_value_55->type,
            come_value_55->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "12var.nc", 328, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),0,info,0));
            come_call_finalizer(sType_finalize, __dec_obj66,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_value_55->type->mPointerNum=1;
            come_value_55->var=var__46;
            list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_55));
            add_come_last_code(info,"%s",come_value_55->c_value);
            come_call_finalizer(CVALUE_finalize, come_value_55, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            check_assign_type(((char*)(__right_value1=xsprintf("\%s is assining to",((char*)(__right_value0=string_to_string(self->name)))))),left_type_52,right_type_50,right_value_49,0,0,info);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            if(left_type_52->mPointerNum>0&&left_type_52->mHeap&&string_operator_equals(right_type_50->mClass->mName,"void")&&right_type_50->mPointerNum>0) {
            }
            else if(right_type_50->mHeap&&left_type_52->mHeap&&left_type_52->mPointerNum>0&&right_type_50->mPointerNum>0) {
                std_move(left_type_52,right_type_50,right_value_49,info);
            }
            else if(left_type_52->mHeap&&!right_value_49->type->mHeap) {
                err_msg(info,"require right value as heap object(%s)",self->name);
                __result_obj__0 = 1;
                come_call_finalizer(CVALUE_finalize, right_value_49, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, right_type_50, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, left_type_52, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result_obj__0;
            }
            add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value0=make_define_var(left_type_52,var__46->mCValueName,info,0,0))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            come_value_56=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "12var.nc", 353, "struct CVALUE*"))));
            __dec_obj67=come_value_56->c_value,
            come_value_56->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__46->mCValueName,right_value_49->c_value));
            __dec_obj67 = come_decrement_ref_count(__dec_obj67, (void*)0, (void*)0, 0,0, (void*)0);
            __dec_obj68=come_value_56->type,
            come_value_56->type=(struct sType*)come_increment_ref_count(sType_clone(left_type_52));
            come_call_finalizer(sType_finalize, __dec_obj68,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_value_56->var=var__46;
            list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_56));
            add_come_last_code(info,"%s",come_value_56->c_value);
            come_call_finalizer(CVALUE_finalize, come_value_56, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer(CVALUE_finalize, right_value_49, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, right_type_50, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, left_type_52, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        Value_57=node_compile(self->right_value,info);
        if(!Value_57) {
            return 0;
        }
        else {
        }
        new_channel_58=string_operator_equals(((char*)(__right_value1=self->right_value->kind(self->right_value->_protocol_obj))),"sNewChannel");
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        right_value_59=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        right_type_60=right_value_59->type;
        current_stack_frame_struct=info->current_stack_frame_struct;
        if(({(_conditional_value_X6=(current_stack_frame_struct&&((struct sVar*)(__right_value1=map$2char$phsVar$ph_at(info->lv_table->mVars,((char*)(__right_value0=__builtin_string(self->name))),((void*)0))))==((void*)0)));        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        come_call_finalizer(sVar_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
_conditional_value_X6;})) {
            parent_var=get_variable_from_table(info->lv_table->mParent,self->name);
            if(parent_var!=((void*)0)) {
                if(string_operator_not_equals(parent_var->mFunName,info->come_fun->mName)) {
                    left_type_61=parent_var->mType;
                    check_assign_type(((char*)(__right_value1=xsprintf("\%s is assigning to",((char*)(__right_value0=string_to_string(self->name)))))),left_type_61,right_type_60,right_value_59,0,0,info);
                    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
                    if(left_type_61->mPointerNum>0&&right_type_60->mPointerNum>0&&right_type_60->mHeap&&left_type_61->mHeap) {
                        c_value=(char*)come_increment_ref_count(xsprintf("*(parent->%s)",parent_var->mCValueName));
                        decrement_ref_count_object(parent_var->mType,c_value,info,0);
                        std_move(left_type_61,right_type_60,right_value_59,info);
                        (c_value = come_decrement_ref_count(c_value, (void*)0, (void*)0, 0, 0, (void*)0));
                    }
                    else if(left_type_61->mPointerNum>0&&right_type_60->mPointerNum>0&&string_operator_equals(right_type_60->mClass->mName,"void")&&left_type_61->mHeap) {
                        c_value_62=(char*)come_increment_ref_count(xsprintf("*(parent->%s)",parent_var->mCValueName));
                        decrement_ref_count_object(parent_var->mType,c_value_62,info,0);
                        (c_value_62 = come_decrement_ref_count(c_value_62, (void*)0, (void*)0, 0, 0, (void*)0));
                    }
                    else if(left_type_61->mHeap&&!right_value_59->type->mHeap) {
                        err_msg(info,"require right value as heap object(%s)",self->name);
                        __result_obj__0 = 1;
                        come_call_finalizer(CVALUE_finalize, right_value_59, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        return __result_obj__0;
                    }
                    come_value_63=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "12var.nc", 400, "struct CVALUE*"))));
                    __dec_obj69=come_value_63->c_value,
                    come_value_63->c_value=(char*)come_increment_ref_count(xsprintf("(*(parent->%s))=%s",parent_var->mCValueName,right_value_59->c_value));
                    __dec_obj69 = come_decrement_ref_count(__dec_obj69, (void*)0, (void*)0, 0,0, (void*)0);
                    __dec_obj70=come_value_63->type,
                    come_value_63->type=(struct sType*)come_increment_ref_count(sType_clone(left_type_61));
                    come_call_finalizer(sType_finalize, __dec_obj70,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_value_63->var=((void*)0);
                    add_come_last_code(info,"%s",come_value_63->c_value);
                    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_63));
                    __result_obj__0 = 1;
                    come_call_finalizer(CVALUE_finalize, come_value_63, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer(CVALUE_finalize, right_value_59, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    return __result_obj__0;
                    come_call_finalizer(CVALUE_finalize, come_value_63, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
        }
        var__64=get_variable_from_table(info->lv_table,self->name);
        if(var__64==((void*)0)) {
            var__64=get_variable_from_table(info->gv_table,self->name);
            if(var__64==((void*)0)) {
                err_msg2(info,"var not found(%s)(X) at storing variable",self->name);
                come_value_65=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "12var.nc", 423, "struct CVALUE*"))));
                __dec_obj71=come_value_65->c_value,
                come_value_65->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",self->name,right_value_59->c_value));
                __dec_obj71 = come_decrement_ref_count(__dec_obj71, (void*)0, (void*)0, 0,0, (void*)0);
                __dec_obj72=come_value_65->type,
                come_value_65->type=(struct sType*)come_increment_ref_count(sType_clone(right_type_60));
                come_call_finalizer(sType_finalize, __dec_obj72,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_value_65->var=var__64;
                list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_65));
                add_come_last_code(info,"%s",come_value_65->c_value);
                __result_obj__0 = 1;
                come_call_finalizer(CVALUE_finalize, come_value_65, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(CVALUE_finalize, right_value_59, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result_obj__0;
                come_call_finalizer(CVALUE_finalize, come_value_65, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        if(var__64->mType==((void*)0)) {
            __dec_obj73=var__64->mType,
            var__64->mType=(struct sType*)come_increment_ref_count(sType_clone(right_type_60));
            come_call_finalizer(sType_finalize, __dec_obj73,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        left_type_66=(struct sType*)come_increment_ref_count(sType_clone(var__64->mType));
        if(left_type_66->mChannel&&new_channel_58) {
            come_value_67=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "12var.nc", 444, "struct CVALUE*"))));
            __dec_obj74=come_value_67->c_value,
            come_value_67->c_value=(char*)come_increment_ref_count(xsprintf("(pipe(%s), (void*)0)",var__64->mCValueName));
            __dec_obj74 = come_decrement_ref_count(__dec_obj74, (void*)0, (void*)0, 0,0, (void*)0);
            __dec_obj75=come_value_67->type,
            come_value_67->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "12var.nc", 447, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),0,info,0));
            come_call_finalizer(sType_finalize, __dec_obj75,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_value_67->type->mPointerNum=1;
            come_value_67->var=var__64;
            list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_67));
            add_come_last_code(info,"%s",come_value_67->c_value);
            come_call_finalizer(CVALUE_finalize, come_value_67, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            check_assign_type(((char*)(__right_value1=xsprintf("\%s is assining to",((char*)(__right_value0=string_to_string(self->name)))))),left_type_66,right_type_60,right_value_59,0,0,info);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            if(right_type_60->mHeap&&left_type_66->mHeap&&left_type_66->mPointerNum>0&&right_type_60->mPointerNum>0) {
                decrement_ref_count_object(left_type_66,var__64->mCValueName,info,0);
                std_move(left_type_66,right_type_60,right_value_59,info);
            }
            else if(left_type_66->mPointerNum>0&&left_type_66->mHeap&&string_operator_equals(right_type_60->mClass->mName,"void")&&right_type_60->mPointerNum>0) {
                decrement_ref_count_object(left_type_66,var__64->mCValueName,info,0);
            }
            else if(left_type_66->mHeap&&!right_value_59->type->mHeap) {
                err_msg(info,"require right value as heap object(%s)",self->name);
                __result_obj__0 = 1;
                come_call_finalizer(CVALUE_finalize, right_value_59, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, left_type_66, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result_obj__0;
            }
            come_value_68=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "12var.nc", 472, "struct CVALUE*"))));
            __dec_obj76=come_value_68->c_value,
            come_value_68->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__64->mCValueName,right_value_59->c_value));
            __dec_obj76 = come_decrement_ref_count(__dec_obj76, (void*)0, (void*)0, 0,0, (void*)0);
            __dec_obj77=come_value_68->type,
            come_value_68->type=(struct sType*)come_increment_ref_count(sType_clone(left_type_66));
            come_call_finalizer(sType_finalize, __dec_obj77,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_value_68->var=var__64;
            list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_68));
            add_come_last_code(info,"%s",come_value_68->c_value);
            come_call_finalizer(CVALUE_finalize, come_value_68, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer(CVALUE_finalize, right_value_59, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, left_type_66, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    return 1;
}

static void sNodeBase_finalize(struct sNodeBase* self)
{
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

static struct sType* sType_clone(struct sType* self  )
{
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
        __result_obj__0 = (void*)0;
        return __result_obj__0;
    }
    result=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType*"));
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
        result->mAnonymousName=(char*)come_increment_ref_count((char*)come_memdup(self->mAnonymousName, "sType_clone", 39, "char*"));
        __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result->mInnerStruct=self->mInnerStruct;
    }
    if(self!=((void*)0)&&self->mInnerStructName!=((void*)0)) {
        __dec_obj15=result->mInnerStructName,
        result->mInnerStructName=(char*)come_increment_ref_count((char*)come_memdup(self->mInnerStructName, "sType_clone", 41, "char*"));
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
        result->mAsmName=(char*)come_increment_ref_count((char*)come_memdup(self->mAsmName, "sType_clone", 46, "char*"));
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
        result->mOriginalTypeName=(char*)come_increment_ref_count((char*)come_memdup(self->mOriginalTypeName, "sType_clone", 58, "char*"));
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
    __result_obj__0 = result;
    come_call_finalizer(sType_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static void sType_finalize(struct sType* self  )
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
    result=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "/usr/local/include/neo-c.h", 935, "struct list$1sType$ph*"))));
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

static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType* item  )
{
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
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/neo-c.h", 956, "struct list_item$1sType$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj4=litem->item,
        litem->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj4,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        litem_0=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/neo-c.h", 966, "struct list_item$1sType$ph*"))));
        litem_0->prev=self->head;
        litem_0->next=((void*)0);
        __dec_obj5=litem_0->item,
        litem_0->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj5,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem_0;
        self->head->next=litem_0;
    }
    else {
        litem_1=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/neo-c.h", 976, "struct list_item$1sType$ph*"))));
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
    result=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*"));
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
    result=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "/usr/local/include/neo-c.h", 935, "struct list$1sNode$ph*"))));
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
    struct sNode* __dec_obj17;
    struct list_item$1sNode$ph* litem_2;
    struct sNode* __dec_obj18;
    struct list_item$1sNode$ph* litem_3;
    struct sNode* __dec_obj19;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/neo-c.h", 956, "struct list_item$1sNode$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj17=litem->item,
        litem->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj17 ? __dec_obj17 = come_decrement_ref_count(__dec_obj17, ((struct sNode*)__dec_obj17)->finalize, ((struct sNode*)__dec_obj17)->_protocol_obj, 0,0, (void*)0) :0);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        litem_2=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/neo-c.h", 966, "struct list_item$1sNode$ph*"))));
        litem_2->prev=self->head;
        litem_2->next=((void*)0);
        __dec_obj18=litem_2->item,
        litem_2->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj18 ? __dec_obj18 = come_decrement_ref_count(__dec_obj18, ((struct sNode*)__dec_obj18)->finalize, ((struct sNode*)__dec_obj18)->_protocol_obj, 0,0, (void*)0) :0);
        self->tail=litem_2;
        self->head->next=litem_2;
    }
    else {
        litem_3=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/neo-c.h", 976, "struct list_item$1sNode$ph*"))));
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
    result=(struct list$1int$*)come_increment_ref_count(list$1int$_initialize((struct list$1int$*)come_increment_ref_count((struct list$1int$*)come_calloc(1, sizeof(struct list$1int$)*(1), "/usr/local/include/neo-c.h", 935, "struct list$1int$*"))));
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
    struct list_item$1int$* litem_4;
    struct list_item$1int$* litem_5;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/neo-c.h", 956, "struct list_item$1int$*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        litem->item=item;
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        litem_4=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/neo-c.h", 966, "struct list_item$1int$*"))));
        litem_4->prev=self->head;
        litem_4->next=((void*)0);
        litem_4->item=item;
        self->tail=litem_4;
        self->head->next=litem_4;
    }
    else {
        litem_5=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/neo-c.h", 976, "struct list_item$1int$*"))));
        litem_5->prev=self->tail;
        litem_5->next=((void*)0);
        litem_5->item=item;
        self->tail->next=litem_5;
        self->tail=litem_5;
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
    result=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/neo-c.h", 935, "struct list$1char$ph*"))));
    it=self->head;
    while(it!=((void*)0)) {
        if(1) {
            list$1char$ph_add(result,(char*)come_increment_ref_count((char*)come_memdup(it->item, "/usr/local/include/neo-c.h", 940, "char*")));
        }
        else {
            list$1char$ph_add(result,(char*)come_increment_ref_count((char*)come_memdup(it->item, "/usr/local/include/neo-c.h", 943, "char*")));
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

static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char* item  )
{
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
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 956, "struct list_item$1char$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj27=litem->item,
        litem->item=(char*)come_increment_ref_count(item);
        __dec_obj27 = come_decrement_ref_count(__dec_obj27, (void*)0, (void*)0, 0,0, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        litem_6=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 966, "struct list_item$1char$ph*"))));
        litem_6->prev=self->head;
        litem_6->next=((void*)0);
        __dec_obj28=litem_6->item,
        litem_6->item=(char*)come_increment_ref_count(item);
        __dec_obj28 = come_decrement_ref_count(__dec_obj28, (void*)0, (void*)0, 0,0, (void*)0);
        self->tail=litem_6;
        self->head->next=litem_6;
    }
    else {
        litem_7=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 976, "struct list_item$1char$ph*"))));
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

static struct list$1tuple3$3sType$phchar$phsNode$ph$ph* list$1tuple3$3sType$phchar$phsNode$ph$ph$p_clone(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self)
{
    struct list$1tuple3$3sType$phchar$phsNode$ph$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1tuple3$3sType$phchar$phsNode$ph$ph* result;
    struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* it;
    if(self==((void*)0)) {
        __result_obj__0 = (struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    result=(struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(list$1tuple3$3sType$phchar$phsNode$ph$ph_initialize((struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple3$3sType$phchar$phsNode$ph$ph)*(1), "/usr/local/include/neo-c.h", 935, "struct list$1tuple3$3sType$phchar$phsNode$ph$ph*"))));
    it=self->head;
    while(it!=((void*)0)) {
        if(1) {
            list$1tuple3$3sType$phchar$phsNode$ph$ph_add(result,(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(tuple3$3sType$phchar$phsNode$ph_clone(it->item)));
        }
        else {
            list$1tuple3$3sType$phchar$phsNode$ph$ph_add(result,(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(tuple3$3sType$phchar$phsNode$ph_clone(it->item)));
        }
        it=it->next;
    }
    __result_obj__0 = (struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(result);
    come_call_finalizer(list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static void list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self)
{
    struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* it;
    struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* prev_it;
    if(self==((void*)0)) {
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* self)
{
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer(tuple3$3sType$phchar$phsNode$ph$p_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void tuple3$3sType$phchar$phsNode$ph$p_finalize(struct tuple3$3sType$phchar$phsNode$ph* self)
{
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->v3!=((void*)0)) {
        ((self->v3) ? self->v3 = come_decrement_ref_count(self->v3, ((struct sNode*)self->v3)->finalize, ((struct sNode*)self->v3)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
}

static struct list$1tuple3$3sType$phchar$phsNode$ph$ph* list$1tuple3$3sType$phchar$phsNode$ph$ph_initialize(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self)
{
    struct list$1tuple3$3sType$phchar$phsNode$ph$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__0 = (struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct list$1tuple3$3sType$phchar$phsNode$ph$ph* list$1tuple3$3sType$phchar$phsNode$ph$ph_add(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self, struct tuple3$3sType$phchar$phsNode$ph* item)
{
    struct list$1tuple3$3sType$phchar$phsNode$ph$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* litem;
    struct tuple3$3sType$phchar$phsNode$ph* __dec_obj36;
    struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* litem_8;
    struct tuple3$3sType$phchar$phsNode$ph* __dec_obj37;
    struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* litem_9;
    struct tuple3$3sType$phchar$phsNode$ph* __dec_obj38;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        come_call_finalizer(tuple3$3sType$phchar$phsNode$ph$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph)*(1), "/usr/local/include/neo-c.h", 956, "struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj36=litem->item,
        litem->item=(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple3$3sType$phchar$phsNode$ph$p_finalize, __dec_obj36,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        litem_8=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph)*(1), "/usr/local/include/neo-c.h", 966, "struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*"))));
        litem_8->prev=self->head;
        litem_8->next=((void*)0);
        __dec_obj37=litem_8->item,
        litem_8->item=(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple3$3sType$phchar$phsNode$ph$p_finalize, __dec_obj37,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem_8;
        self->head->next=litem_8;
    }
    else {
        litem_9=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph)*(1), "/usr/local/include/neo-c.h", 976, "struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*"))));
        litem_9->prev=self->tail;
        litem_9->next=((void*)0);
        __dec_obj38=litem_9->item,
        litem_9->item=(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple3$3sType$phchar$phsNode$ph$p_finalize, __dec_obj38,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail->next=litem_9;
        self->tail=litem_9;
    }
    self->len++;
    __result_obj__0 = self;
    come_call_finalizer(tuple3$3sType$phchar$phsNode$ph$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__0;
}

static struct tuple3$3sType$phchar$phsNode$ph* tuple3$3sType$phchar$phsNode$ph_clone(struct tuple3$3sType$phchar$phsNode$ph* self)
{
    struct tuple3$3sType$phchar$phsNode$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct tuple3$3sType$phchar$phsNode$ph* result;
    struct sType* __dec_obj39  ;
    char* __dec_obj40  ;
    struct sNode* __dec_obj41;
    if(self==(void*)0) {
        __result_obj__0 = (struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count((void*)0);
        come_call_finalizer(tuple3$3sType$phchar$phsNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    result=(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count((struct tuple3$3sType$phchar$phsNode$ph*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$phsNode$ph)*(1), "tuple3$3sType$phchar$phsNode$ph_clone", 3, "struct tuple3$3sType$phchar$phsNode$ph*"));
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj39=result->v1,
        result->v1=(struct sType*)come_increment_ref_count(sType_clone(self->v1));
        come_call_finalizer(sType_finalize, __dec_obj39,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj40=result->v2,
        result->v2=(char*)come_increment_ref_count((char*)come_memdup(self->v2, "tuple3$3sType$phchar$phsNode$ph_clone", 5, "char*"));
        __dec_obj40 = come_decrement_ref_count(__dec_obj40, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->v3!=((void*)0)) {
        __dec_obj41=result->v3,
        result->v3=(struct sNode*)come_increment_ref_count(sNode_clone(self->v3));
        (__dec_obj41 ? __dec_obj41 = come_decrement_ref_count(__dec_obj41, ((struct sNode*)__dec_obj41)->finalize, ((struct sNode*)__dec_obj41)->_protocol_obj, 0,0, (void*)0) :0);
    }
    __result_obj__0 = (struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(result);
    come_call_finalizer(tuple3$3sType$phchar$phsNode$ph_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(tuple3$3sType$phchar$phsNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static void tuple3$3sType$phchar$phsNode$ph_finalize(struct tuple3$3sType$phchar$phsNode$ph* self)
{
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->v3!=((void*)0)) {
        ((self->v3) ? self->v3 = come_decrement_ref_count(self->v3, ((struct sNode*)self->v3)->finalize, ((struct sNode*)self->v3)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
}

static void list$1tuple3$3sType$phchar$phsNode$ph$ph_finalize(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self)
{
    struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* it;
    struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* prev_it;
    if(self==((void*)0)) {
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void sStoreNode_finalize(struct sStoreNode* self)
{
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->name!=((void*)0)) {
        (self->name = come_decrement_ref_count(self->name, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->right_value!=((void*)0)) {
        ((self->right_value) ? self->right_value = come_decrement_ref_count(self->right_value, ((struct sNode*)self->right_value)->finalize, ((struct sNode*)self->right_value)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    if(self!=((void*)0)&&self->multiple_assign!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, self->multiple_assign, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->multiple_declare!=((void*)0)) {
        come_call_finalizer(list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, self->multiple_declare, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->attribute!=((void*)0)) {
        (self->attribute = come_decrement_ref_count(self->attribute, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

static struct sVar* map$2char$phsVar$ph_at(struct map$2char$phsVar$ph* self, char* key  , struct sVar* default_value  )
{
    struct sVar* __result_obj__0  ;
    unsigned int hash;
    unsigned int it;
    if(self==((void*)0)) {
        __result_obj__0 = (struct sVar*)come_increment_ref_count(default_value);
        come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(1) {
        if(self->item_existance[it]) {
            if(string_equals(self->keys[it],key)) {
                __result_obj__0 = (struct sVar*)come_increment_ref_count(self->items[it]);
                come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
                come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
        }
        else {
            __result_obj__0 = (struct sVar*)come_increment_ref_count(default_value);
            come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__0;
        }
    }
    __result_obj__0 = (struct sVar*)come_increment_ref_count(default_value);
    come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static void sVar_finalize(struct sVar* self  )
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

static struct map$2char$phsVar$ph* map$2char$phsVar$ph_remove(struct map$2char$phsVar$ph* self, char* key  )
{
    struct map$2char$phsVar$ph* __result_obj__0;
    unsigned int hash;
    unsigned int it;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0));
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(1) {
        if(self->item_existance[it]) {
            if(string_equals(self->keys[it],key)) {
                list$1char$ph_remove(self->key_list,self->keys[it]);
                self->item_existance[it]=0;
                if(1) {
                    (self->keys[it] = come_decrement_ref_count(self->keys[it], (void*)0, (void*)0, 0, 0, (void*)0));
                }
                self->keys[it]=((void*)0);
                if(1) {
                    come_call_finalizer(sVar_finalize, self->items[it], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                memset(self->items+it,0,sizeof(struct sVar*));
                self->len--;
                break;
            }
            it++;
            if(it>=self->size) {
                it=0;
            }
            else if(it==hash) {
                break;
            }
        }
        else {
            break;
        }
    }
    __result_obj__0 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0));
    return __result_obj__0;
}

static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char* item  )
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
    struct list_item$1char$ph* it_10;
    int i_11;
    struct list_item$1char$ph* prev_it_12;
    struct list_item$1char$ph* it_13;
    struct list_item$1char$ph* head_prev_it;
    struct list_item$1char$ph* tail_it;
    int i_14;
    struct list_item$1char$ph* prev_it_15;
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
        it_10=self->head;
        i_11=0;
        while(it_10!=((void*)0)) {
            if(i_11==head) {
                self->tail=it_10->prev;
                self->tail->next=((void*)0);
            }
            if(i_11>=head) {
                prev_it_12=it_10;
                it_10=it_10->next;
                i_11++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_12, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_10=it_10->next;
                i_11++;
            }
        }
    }
    else {
        it_13=self->head;
        head_prev_it=((void*)0);
        tail_it=((void*)0);
        i_14=0;
        while(it_13!=((void*)0)) {
            if(i_14==head) {
                head_prev_it=it_13->prev;
            }
            if(i_14==tail) {
                tail_it=it_13;
            }
            if(i_14>=head&&i_14<tail) {
                prev_it_15=it_13;
                it_13=it_13->next;
                i_14++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_15, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_13=it_13->next;
                i_14++;
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

static struct tuple3$3sType$phchar$phsNode$ph* list$1tuple3$3sType$phchar$phsNode$ph$ph_begin(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self)
{
    struct tuple3$3sType$phchar$phsNode$ph* result;
    struct tuple3$3sType$phchar$phsNode$ph* __result_obj__0;
    struct tuple3$3sType$phchar$phsNode$ph* result_16;
    if(self==((void*)0)) {
        memset(&result,0,sizeof(struct tuple3$3sType$phchar$phsNode$ph*));
        __result_obj__0 = result;
        return __result_obj__0;
    }
    self->it=self->head;
    if(self->it) {
        __result_obj__0 = self->it->item;
        return __result_obj__0;
    }
    memset(&result_16,0,sizeof(struct tuple3$3sType$phchar$phsNode$ph*));
    __result_obj__0 = result_16;
    return __result_obj__0;
}

static _Bool list$1tuple3$3sType$phchar$phsNode$ph$ph_end(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self)
{
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple3$3sType$phchar$phsNode$ph* list$1tuple3$3sType$phchar$phsNode$ph$ph_next(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self)
{
    struct tuple3$3sType$phchar$phsNode$ph* result;
    struct tuple3$3sType$phchar$phsNode$ph* __result_obj__0;
    struct tuple3$3sType$phchar$phsNode$ph* result_17;
    if(self==((void*)0)||self->it==((void*)0)) {
        memset(&result,0,sizeof(struct tuple3$3sType$phchar$phsNode$ph*));
        __result_obj__0 = result;
        return __result_obj__0;
    }
    self->it=self->it->next;
    if(self->it) {
        __result_obj__0 = self->it->item;
        return __result_obj__0;
    }
    memset(&result_17,0,sizeof(struct tuple3$3sType$phchar$phsNode$ph*));
    __result_obj__0 = result_17;
    return __result_obj__0;
}

static void CVALUE_finalize(struct CVALUE* self  )
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

static struct sFun* map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char* key  )
{
    struct sFun* default_value  ;
    struct sFun* __result_obj__0  ;
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

static void sFun_finalize(struct sFun* self  )
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

static void sBlock_finalize(struct sBlock* self  )
{
    if(self!=((void*)0)&&self->mNodes!=((void*)0)) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mNodes, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        come_call_finalizer(sVarTable_finalize, self->mVarTable, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static struct sFun* map$2char$phsFun$ph_operator_load_element(struct map$2char$phsFun$ph* self, char* key  )
{
    struct sFun* default_value  ;
    struct sFun* __result_obj__0  ;
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

static int list$1tuple3$3sType$phchar$phsNode$ph$ph_length(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self)
{
    if(self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item  )
{
    struct list$1CVALUE$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1CVALUE$ph* litem;
    struct CVALUE* __dec_obj46  ;
    struct list_item$1CVALUE$ph* litem_21;
    struct CVALUE* __dec_obj47  ;
    struct list_item$1CVALUE$ph* litem_22;
    struct CVALUE* __dec_obj48  ;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/neo-c.h", 1041, "struct list_item$1CVALUE$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj46=litem->item,
        litem->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj46,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        litem_21=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/neo-c.h", 1051, "struct list_item$1CVALUE$ph*"))));
        litem_21->prev=self->head;
        litem_21->next=((void*)0);
        __dec_obj47=litem_21->item,
        litem_21->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj47,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem_21;
        self->head->next=litem_21;
    }
    else {
        litem_22=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/neo-c.h", 1061, "struct list_item$1CVALUE$ph*"))));
        litem_22->prev=self->tail;
        litem_22->next=((void*)0);
        __dec_obj48=litem_22->item,
        litem_22->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj48,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail->next=litem_22;
        self->tail=litem_22;
    }
    self->len++;
    __result_obj__0 = self;
    come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__0;
}

static char* list$1char$ph_begin(struct list$1char$ph* self)
{
    char* result  ;
    char* __result_obj__0  ;
    char* result_27  ;
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
    memset(&result_27,0,sizeof(char*));
    __result_obj__0 = result_27;
    return __result_obj__0;
}

static _Bool list$1char$ph_end(struct list$1char$ph* self)
{
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1char$ph_next(struct list$1char$ph* self)
{
    char* result  ;
    char* __result_obj__0  ;
    char* result_29  ;
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
    memset(&result_29,0,sizeof(char*));
    __result_obj__0 = result_29;
    return __result_obj__0;
}

static int list$1sType$ph_length(struct list$1sType$ph* self)
{
    if(self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position)
{
    struct sType* default_value  ;
    struct sType* __result_obj__0  ;
    struct list_item$1sType$ph* it;
    int i;
    struct sType* default_value_31  ;
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
    memset(&default_value_31,0,sizeof(struct sType*));
    __result_obj__0 = (struct sType*)come_increment_ref_count(default_value_31);
    come_call_finalizer(sType_finalize, default_value_31, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct sType* list$1sType$ph_operator_load_element(struct list$1sType$ph* self, int position)
{
    struct sType* default_value  ;
    struct sType* __result_obj__0  ;
    struct list_item$1sType$ph* it;
    int i;
    struct sType* default_value_32  ;
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
    memset(&default_value_32,0,sizeof(struct sType*));
    __result_obj__0 = (struct sType*)come_increment_ref_count(default_value_32);
    come_call_finalizer(sType_finalize, default_value_32, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_add(struct list$1CVALUE$ph* self, struct CVALUE* item  )
{
    struct list$1CVALUE$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1CVALUE$ph* litem;
    struct CVALUE* __dec_obj58  ;
    struct list_item$1CVALUE$ph* litem_40;
    struct CVALUE* __dec_obj59  ;
    struct list_item$1CVALUE$ph* litem_41;
    struct CVALUE* __dec_obj60  ;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/neo-c.h", 956, "struct list_item$1CVALUE$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj58=litem->item,
        litem->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj58,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        litem_40=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/neo-c.h", 966, "struct list_item$1CVALUE$ph*"))));
        litem_40->prev=self->head;
        litem_40->next=((void*)0);
        __dec_obj59=litem_40->item,
        litem_40->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj59,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem_40;
        self->head->next=litem_40;
    }
    else {
        litem_41=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/neo-c.h", 976, "struct list_item$1CVALUE$ph*"))));
        litem_41->prev=self->tail;
        litem_41->next=((void*)0);
        __dec_obj60=litem_41->item,
        litem_41->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj60,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail->next=litem_41;
        self->tail=litem_41;
    }
    self->len++;
    __result_obj__0 = self;
    come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__0;
}

static int list$1sNode$ph_length(struct list$1sNode$ph* self)
{
    if(self==((void*)0)) {
        return 0;
    }
    return self->len;
}

struct sNewChannel* sNewChannel_initialize(struct sNewChannel* self, struct sInfo* info  )
{
    void* __right_value0 = (void*)0;
    struct sNewChannel* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNewChannel*)come_increment_ref_count(self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __result_obj__0 = (struct sNewChannel*)come_increment_ref_count(self);
    come_call_finalizer(sNewChannel_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sNewChannel_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char* sNewChannel_kind(struct sNewChannel* self)
{
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string("sNewChannel"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool sNewChannel_compile(struct sNewChannel* self, struct sInfo* info  )
{
    void* __right_value0 = (void*)0;
    struct sNode* node;
    _Bool Value;
    _Bool __result_obj__0;
    node=(struct sNode*)come_increment_ref_count(create_null_node(info));
    Value=node_compile(node,info);
    if(!Value) {
        __result_obj__0 = 0;
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        return __result_obj__0;
    }
    else {
    }
    __result_obj__0 = 1;
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    return __result_obj__0;
}

static void sNewChannel_finalize(struct sNewChannel* self)
{
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

struct sWriteChannelNode* sWriteChannelNode_initialize(struct sWriteChannelNode* self, struct sNode* exp, struct sNode* right_value, struct sInfo* info  )
{
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj78;
    struct sNode* __dec_obj79;
    struct sWriteChannelNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sWriteChannelNode*)come_increment_ref_count(self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj78=self->exp,
    self->exp=(struct sNode*)come_increment_ref_count(exp);
    (__dec_obj78 ? __dec_obj78 = come_decrement_ref_count(__dec_obj78, ((struct sNode*)__dec_obj78)->finalize, ((struct sNode*)__dec_obj78)->_protocol_obj, 0,0, (void*)0) :0);
    __dec_obj79=self->right_value,
    self->right_value=(struct sNode*)come_increment_ref_count(right_value);
    (__dec_obj79 ? __dec_obj79 = come_decrement_ref_count(__dec_obj79, ((struct sNode*)__dec_obj79)->finalize, ((struct sNode*)__dec_obj79)->_protocol_obj, 0,0, (void*)0) :0);
    __result_obj__0 = (struct sWriteChannelNode*)come_increment_ref_count(self);
    come_call_finalizer(sWriteChannelNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    ((right_value) ? right_value = come_decrement_ref_count(right_value, ((struct sNode*)right_value)->finalize, ((struct sNode*)right_value)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(sWriteChannelNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char* sWriteChannelNode_kind(struct sWriteChannelNode* self)
{
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string("sWriteChannelNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool sWriteChannelNode_compile(struct sWriteChannelNode* self, struct sInfo* info  )
{
    _Bool Value;
    void* __right_value0 = (void*)0;
    struct CVALUE* come_value  ;
    _Bool Value_69;
    _Bool __result_obj__0;
    struct CVALUE* right_value  ;
    struct sType* right_type  ;
    struct sType* left_type  ;
    struct sType* channel_type  ;
    void* __right_value1 = (void*)0;
    struct buffer* buf  ;
    struct CVALUE* come_value2  ;
    char* __dec_obj80  ;
    void* __right_value2 = (void*)0;
    struct sType* __dec_obj81  ;
    Value=node_compile(self->exp,info);
    if(!Value) {
        return 0;
    }
    else {
    }
    come_value=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    Value_69=node_compile(self->right_value,info);
    if(!Value_69) {
        __result_obj__0 = 0;
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result_obj__0;
    }
    else {
    }
    right_value=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    right_type=right_value->type;
    left_type=(struct sType*)come_increment_ref_count(sType_clone(come_value->type));
    channel_type=(struct sType*)come_increment_ref_count(left_type->mChannelType);
    static int var_num=0;
    var_num++;
    if(right_value->type->mHeap) {
        err_msg(info,"channel can't get heap type");
        __result_obj__0 = 1;
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(CVALUE_finalize, right_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, left_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, channel_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result_obj__0;
    }
    buf=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "12var.nc", 555, "struct buffer*"))));
    buffer_append_format(buf,"char __channel_buf%d[sizeof(%s)+1];\n",var_num,((char*)(__right_value0=make_type_name_string(channel_type,info,0,0,0))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    buffer_append_format(buf,"%s* __channel_p%d = __channel_buf%d;\n",((char*)(__right_value0=make_type_name_string(channel_type,info,0,0,0))),var_num,var_num);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    buffer_append_format(buf,"*__channel_p%d = %s;\n",var_num,right_value->c_value);
    add_come_code(info,((char*)(__right_value0=buffer_to_string(buf))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    come_value2=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "12var.nc", 563, "struct CVALUE*"))));
    __dec_obj80=come_value2->c_value,
    come_value2->c_value=(char*)come_increment_ref_count(xsprintf("if(write(%s[1], __channel_buf%d, sizeof(%s)) < 0) { puts(\"channel write error\"); exit(2); }",come_value->c_value,var_num,((char*)(__right_value0=make_type_name_string(channel_type,info,0,0,0)))));
    __dec_obj80 = come_decrement_ref_count(__dec_obj80, (void*)0, (void*)0, 0,0, (void*)0);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    __dec_obj81=come_value2->type,
    come_value2->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "12var.nc", 567, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),0,info,0));
    come_call_finalizer(sType_finalize, __dec_obj81,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_value2->type->mPointerNum=1;
    come_value2->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2));
    add_come_last_code(info,"%s",come_value2->c_value);
    __result_obj__0 = 1;
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(CVALUE_finalize, right_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, left_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, channel_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__0;
}

static void sWriteChannelNode_finalize(struct sWriteChannelNode* self)
{
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->exp!=((void*)0)) {
        ((self->exp) ? self->exp = come_decrement_ref_count(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    if(self!=((void*)0)&&self->right_value!=((void*)0)) {
        ((self->right_value) ? self->right_value = come_decrement_ref_count(self->right_value, ((struct sNode*)self->right_value)->finalize, ((struct sNode*)self->right_value)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
}

struct sReadChannelNode* sReadChannelNode_initialize(struct sReadChannelNode* self, struct sNode* exp, struct sInfo* info  )
{
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj82;
    struct sReadChannelNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sReadChannelNode*)come_increment_ref_count(self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj82=self->exp,
    self->exp=(struct sNode*)come_increment_ref_count(exp);
    (__dec_obj82 ? __dec_obj82 = come_decrement_ref_count(__dec_obj82, ((struct sNode*)__dec_obj82)->finalize, ((struct sNode*)__dec_obj82)->_protocol_obj, 0,0, (void*)0) :0);
    __result_obj__0 = (struct sReadChannelNode*)come_increment_ref_count(self);
    come_call_finalizer(sReadChannelNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(sReadChannelNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char* sReadChannelNode_kind(struct sReadChannelNode* self)
{
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string("sReadChannelNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool sReadChannelNode_compile(struct sReadChannelNode* self, struct sInfo* info  )
{
    struct sNode* exp;
    _Bool Value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE* come_value  ;
    struct sType* var_type  ;
    struct sType* channel_type  ;
    void* __right_value1 = (void*)0;
    struct CVALUE* come_value2  ;
    void* __right_value2 = (void*)0;
    char* __dec_obj83  ;
    struct sType* __dec_obj84  ;
    exp=(struct sNode*)come_increment_ref_count(self->exp);
    Value=node_compile(exp,info);
    if(!Value) {
        __result_obj__0 = 0;
        ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        return __result_obj__0;
    }
    else {
    }
    come_value=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    var_type=(struct sType*)come_increment_ref_count(sType_clone(come_value->type));
    if(!var_type->mChannel) {
        err_msg(info,"require right type is channel");
        __result_obj__0 = 1;
        ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, var_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result_obj__0;
    }
    channel_type=(struct sType*)come_increment_ref_count(var_type->mChannelType);
    static int var_num=0;
    var_num++;
    add_come_code_at_function_head(info,"char __channel_bufl%d[sizeof(%s)+1];\n",var_num,((char*)(__right_value0=make_type_name_string(channel_type,info,0,0,0))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    come_value2=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "12var.nc", 618, "struct CVALUE*"))));
    __dec_obj83=come_value2->c_value,
    come_value2->c_value=(char*)come_increment_ref_count(xsprintf("((read(%s[0], __channel_bufl%d, sizeof(%s)) < 0 ? puts(\"read channel error\"), exit(2):0), *(%s*)__channel_bufl%d)",come_value->c_value,var_num,((char*)(__right_value0=make_type_name_string(channel_type,info,0,0,0))),((char*)(__right_value1=make_type_name_string(channel_type,info,0,0,0))),var_num));
    __dec_obj83 = come_decrement_ref_count(__dec_obj83, (void*)0, (void*)0, 0,0, (void*)0);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
    __dec_obj84=come_value2->type,
    come_value2->type=(struct sType*)come_increment_ref_count(sType_clone(channel_type));
    come_call_finalizer(sType_finalize, __dec_obj84,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_value2->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2));
    add_come_last_code(info,"%s",come_value2->c_value);
    __result_obj__0 = 1;
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, var_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, channel_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__0;
}

static void sReadChannelNode_finalize(struct sReadChannelNode* self)
{
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->exp!=((void*)0)) {
        ((self->exp) ? self->exp = come_decrement_ref_count(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
}

struct sNode* store_var(char* name  , struct list$1char$ph* multiple_assign, struct list$1tuple3$3sType$phchar$phsNode$ph$ph* multiple_declare, struct sType* type  , _Bool alloc, struct sNode* right_value, struct sInfo* info  )
{
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value1;
    struct sStoreNode* _inf_obj_value1;
    void* __right_value2 = (void*)0;
    struct sNode* __result_obj__0;
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "12var.nc", 635, "struct sNode");
    _inf_obj_value1=(struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(__right_value1=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count((struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "12var.nc", 635, "struct sStoreNode*")),(char*)come_increment_ref_count(name),multiple_assign,multiple_declare,type,alloc,right_value,info,(char*)come_increment_ref_count(xsprintf(""))))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sStoreNode_finalize;
    _inf_value1->clone=(void*)sStoreNode_clone;
    _inf_value1->compile=(void*)sStoreNode_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sline_real=(void*)sNodeBase_sline_real;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sNodeBase_terminated;
    _inf_value1->kind=(void*)sStoreNode_kind;
    _inf_value1->no_mutex=(void*)sNodeBase_no_mutex;
    __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value1)));
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sStoreNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    return __result_obj__0;
}

static struct sStoreNode* sStoreNode_clone(struct sStoreNode* self)
{
    struct sStoreNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sStoreNode* result  ;
    char* __dec_obj85  ;
    char* __dec_obj86  ;
    struct sType* __dec_obj87  ;
    struct sNode* __dec_obj88;
    struct list$1char$ph* __dec_obj89;
    struct list$1tuple3$3sType$phchar$phsNode$ph$ph* __dec_obj90;
    char* __dec_obj91  ;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        return __result_obj__0;
    }
    result=(struct sStoreNode*)come_increment_ref_count((struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "sStoreNode_clone", 3, "struct sStoreNode*"));
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj85=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sStoreNode_clone", 5, "char*"));
        __dec_obj85 = come_decrement_ref_count(__dec_obj85, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->name!=((void*)0)) {
        __dec_obj86=result->name,
        result->name=(char*)come_increment_ref_count((char*)come_memdup(self->name, "sStoreNode_clone", 7, "char*"));
        __dec_obj86 = come_decrement_ref_count(__dec_obj86, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result->alloc=self->alloc;
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj87=result->type,
        result->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        come_call_finalizer(sType_finalize, __dec_obj87,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->right_value!=((void*)0)) {
        __dec_obj88=result->right_value,
        result->right_value=(struct sNode*)come_increment_ref_count(sNode_clone(self->right_value));
        (__dec_obj88 ? __dec_obj88 = come_decrement_ref_count(__dec_obj88, ((struct sNode*)__dec_obj88)->finalize, ((struct sNode*)__dec_obj88)->_protocol_obj, 0,0, (void*)0) :0);
    }
    if(self!=((void*)0)&&self->multiple_assign!=((void*)0)) {
        __dec_obj89=result->multiple_assign,
        result->multiple_assign=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->multiple_assign));
        come_call_finalizer(list$1char$ph_finalize, __dec_obj89,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->multiple_declare!=((void*)0)) {
        __dec_obj90=result->multiple_declare,
        result->multiple_declare=(struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(list$1tuple3$3sType$phchar$phsNode$ph$ph$p_clone(self->multiple_declare));
        come_call_finalizer(list$1tuple3$3sType$phchar$phsNode$ph$ph_finalize, __dec_obj90,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->attribute!=((void*)0)) {
        __dec_obj91=result->attribute,
        result->attribute=(char*)come_increment_ref_count((char*)come_memdup(self->attribute, "sStoreNode_clone", 13, "char*"));
        __dec_obj91 = come_decrement_ref_count(__dec_obj91, (void*)0, (void*)0, 0,0, (void*)0);
    }
    __result_obj__0 = result;
    come_call_finalizer(sStoreNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

struct sLoadNode* sLoadNode_initialize(struct sLoadNode* self, char* name  , struct sInfo* info  )
{
    void* __right_value0 = (void*)0;
    char* __dec_obj92  ;
    struct sLoadNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sLoadNode*)come_increment_ref_count(self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj92=self->name,
    self->name=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj92 = come_decrement_ref_count(__dec_obj92, (void*)0, (void*)0, 0,0, (void*)0);
    __result_obj__0 = (struct sLoadNode*)come_increment_ref_count(self);
    come_call_finalizer(sLoadNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sLoadNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char* sLoadNode_kind(struct sLoadNode* self)
{
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string("sLoadNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool sLoadNode_terminated(struct sLoadNode* self)
{
    return 0;
}

_Bool sLoadNode_compile(struct sLoadNode* self, struct sInfo* info  )
{
    struct sClass* current_stack_frame_struct  ;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    _Bool _conditional_value_X0;
    struct sVar* parent_var  ;
    struct CVALUE* come_value  ;
    struct sType* type  ;
    char* __dec_obj93  ;
    struct sType* __dec_obj94  ;
    _Bool __result_obj__0;
    struct sVar* var_  ;
    void* __right_value2 = (void*)0;
    struct sFun* fun  ;
    struct CVALUE* come_value_70  ;
    char* __dec_obj95  ;
    struct sType* __dec_obj96  ;
    struct CVALUE* come_value_71  ;
    char* __dec_obj97  ;
    struct sType* __dec_obj98  ;
    struct CVALUE* come_value_72  ;
    char* __dec_obj99  ;
    struct sType* __dec_obj100  ;
    struct sType* original_load_var_type  ;
    struct sType* __dec_obj101  ;
    struct sType* original_load_var_type_73  ;
    struct sType* __dec_obj102  ;
    struct sType* original_load_var_type_74  ;
    struct sType* __dec_obj103  ;
    current_stack_frame_struct=info->current_stack_frame_struct;
    if(({(_conditional_value_X0=(current_stack_frame_struct&&((struct sVar*)(__right_value1=map$2char$phsVar$ph_at(info->lv_table->mVars,((char*)(__right_value0=__builtin_string(self->name))),((void*)0))))==((void*)0)));    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    come_call_finalizer(sVar_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
_conditional_value_X0;})) {
        parent_var=get_variable_from_table(info->lv_table->mParent,self->name);
        if(parent_var!=((void*)0)) {
            if(string_operator_not_equals(parent_var->mFunName,info->come_fun->mName)) {
                come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "12var.nc", 665, "struct CVALUE*"))));
                type=parent_var->mType;
                __dec_obj93=come_value->c_value,
                come_value->c_value=(char*)come_increment_ref_count(xsprintf("(*(parent->%s))",parent_var->mCValueName));
                __dec_obj93 = come_decrement_ref_count(__dec_obj93, (void*)0, (void*)0, 0,0, (void*)0);
                __dec_obj94=come_value->type,
                come_value->type=(struct sType*)come_increment_ref_count(sType_clone(type));
                come_call_finalizer(sType_finalize, __dec_obj94,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_value->var=((void*)0);
                add_come_last_code(info,"%s",come_value->c_value);
                list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value));
                __result_obj__0 = 1;
                come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result_obj__0;
                come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    var_=get_variable_from_table(info->lv_table,self->name);
    if(var_==((void*)0)) {
        var_=get_variable_from_table(info->gv_table,self->name);
        if(var_==((void*)0)) {
            fun=((struct sFun*)(__right_value2=map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value1=__builtin_string(self->name))))));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            if(fun) {
                come_value_70=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "12var.nc", 692, "struct CVALUE*"))));
                __dec_obj95=come_value_70->c_value,
                come_value_70->c_value=(char*)come_increment_ref_count(xsprintf("%s",fun->mName));
                __dec_obj95 = come_decrement_ref_count(__dec_obj95, (void*)0, (void*)0, 0,0, (void*)0);
                __dec_obj96=come_value_70->type,
                come_value_70->type=(struct sType*)come_increment_ref_count(fun->mLambdaType);
                come_call_finalizer(sType_finalize, __dec_obj96,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_value_70->var=((void*)0);
                list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_70));
                __result_obj__0 = 1;
                come_call_finalizer(CVALUE_finalize, come_value_70, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result_obj__0;
                come_call_finalizer(CVALUE_finalize, come_value_70, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                if(var_==((void*)0)) {
                    err_msg2(info,"The type of %s is not found. so can't check the heap type\n",self->name);
                    come_value_71=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "12var.nc", 706, "struct CVALUE*"))));
                    __dec_obj97=come_value_71->c_value,
                    come_value_71->c_value=(char*)come_increment_ref_count(xsprintf("%s",self->name));
                    __dec_obj97 = come_decrement_ref_count(__dec_obj97, (void*)0, (void*)0, 0,0, (void*)0);
                    __dec_obj98=come_value_71->type,
                    come_value_71->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "12var.nc", 709, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),0,info,0));
                    come_call_finalizer(sType_finalize, __dec_obj98,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_value_71->type->mPointerNum=1;
                    come_value_71->var=((void*)0);
                    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_71));
                    add_come_last_code(info,"%s;\n",come_value_71->c_value);
                    __result_obj__0 = 1;
                    come_call_finalizer(CVALUE_finalize, come_value_71, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    return __result_obj__0;
                    come_call_finalizer(CVALUE_finalize, come_value_71, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                else {
                    err_msg(info,"var not found(%s)(Z) at loading variable",self->name);
                    return 1;
                }
            }
        }
    }
    come_value_72=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "12var.nc", 727, "struct CVALUE*"))));
    __dec_obj99=come_value_72->c_value,
    come_value_72->c_value=(char*)come_increment_ref_count(xsprintf("%s",var_->mCValueName));
    __dec_obj99 = come_decrement_ref_count(__dec_obj99, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj100=come_value_72->type,
    come_value_72->type=(struct sType*)come_increment_ref_count(sType_clone(var_->mType));
    come_call_finalizer(sType_finalize, __dec_obj100,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_value_72->var=var_;
    if(list$1sNode$ph_length(come_value_72->type->mArrayNum)>0) {
        if(info->in_typeof) {
            original_load_var_type=(struct sType*)come_increment_ref_count(sType_clone(come_value_72->type));
            __dec_obj101=come_value_72->type->mOriginalLoadVarType,
            come_value_72->type->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(sType_clone(original_load_var_type));
            come_call_finalizer(sType_finalize, __dec_obj101,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, original_load_var_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(info->in_refference) {
            original_load_var_type_73=(struct sType*)come_increment_ref_count(sType_clone(come_value_72->type));
            __dec_obj102=come_value_72->type->mOriginalLoadVarType,
            come_value_72->type->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(original_load_var_type_73);
            come_call_finalizer(sType_finalize, __dec_obj102,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_value_72->type->mArrayPointerNum++;
            come_call_finalizer(sType_finalize, original_load_var_type_73, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            original_load_var_type_74=(struct sType*)come_increment_ref_count(sType_clone(come_value_72->type));
            __dec_obj103=come_value_72->type->mOriginalLoadVarType,
            come_value_72->type->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(original_load_var_type_74);
            come_call_finalizer(sType_finalize, __dec_obj103,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            list$1sNode$ph_delete(come_value_72->type->mArrayNum,0,1);
            come_value_72->type->mArrayPointerNum++;
            come_call_finalizer(sType_finalize, original_load_var_type_74, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_72));
    __result_obj__0 = 1;
    come_call_finalizer(CVALUE_finalize, come_value_72, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__0;
}

static void sLoadNode_finalize(struct sLoadNode* self)
{
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->name!=((void*)0)) {
        (self->name = come_decrement_ref_count(self->name, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

static struct list$1sNode$ph* list$1sNode$ph_delete(struct list$1sNode$ph* self, int head, int tail)
{
    struct list$1sNode$ph* __result_obj__0;
    int tmp;
    struct list_item$1sNode$ph* it;
    int i;
    struct list_item$1sNode$ph* prev_it;
    struct list_item$1sNode$ph* it_75;
    int i_76;
    struct list_item$1sNode$ph* prev_it_77;
    struct list_item$1sNode$ph* it_78;
    struct list_item$1sNode$ph* head_prev_it;
    struct list_item$1sNode$ph* tail_it;
    int i_79;
    struct list_item$1sNode$ph* prev_it_80;
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
        it_75=self->head;
        i_76=0;
        while(it_75!=((void*)0)) {
            if(i_76==head) {
                self->tail=it_75->prev;
                self->tail->next=((void*)0);
            }
            if(i_76>=head) {
                prev_it_77=it_75;
                it_75=it_75->next;
                i_76++;
                come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it_77, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_75=it_75->next;
                i_76++;
            }
        }
    }
    else {
        it_78=self->head;
        head_prev_it=((void*)0);
        tail_it=((void*)0);
        i_79=0;
        while(it_78!=((void*)0)) {
            if(i_79==head) {
                head_prev_it=it_78->prev;
            }
            if(i_79==tail) {
                tail_it=it_78;
            }
            if(i_79>=head&&i_79<tail) {
                prev_it_80=it_78;
                it_78=it_78->next;
                i_79++;
                come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it_80, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_78=it_78->next;
                i_79++;
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

static struct list$1sNode$ph* list$1sNode$ph_reset(struct list$1sNode$ph* self)
{
    struct list$1sNode$ph* __result_obj__0;
    struct list_item$1sNode$ph* it;
    struct list_item$1sNode$ph* prev_it;
    if(self==((void*)0)) {
        __result_obj__0 = self;
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
    return __result_obj__0;
}

struct sNode* create_load_var(char* var_name, struct sInfo* info  )
{
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    void* __right_value2 = (void*)0;
    struct sNode* _inf_value2;
    struct sLoadNode* _inf_obj_value2;
    void* __right_value3 = (void*)0;
    struct sNode* node;
    struct sNode* __result_obj__0;
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "12var.nc", 762, "struct sNode");
    _inf_obj_value2=(struct sLoadNode*)come_increment_ref_count(((struct sLoadNode*)(__right_value2=sLoadNode_initialize((struct sLoadNode*)come_increment_ref_count((struct sLoadNode*)come_calloc(1, sizeof(struct sLoadNode)*(1), "12var.nc", 762, "struct sLoadNode*")),(char*)come_increment_ref_count(__builtin_string(var_name)),info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sLoadNode_finalize;
    _inf_value2->clone=(void*)sLoadNode_clone;
    _inf_value2->compile=(void*)sLoadNode_compile;
    _inf_value2->sline=(void*)sNodeBase_sline;
    _inf_value2->sline_real=(void*)sNodeBase_sline_real;
    _inf_value2->sname=(void*)sNodeBase_sname;
    _inf_value2->terminated=(void*)sLoadNode_terminated;
    _inf_value2->kind=(void*)sLoadNode_kind;
    _inf_value2->no_mutex=(void*)sNodeBase_no_mutex;
    node=(struct sNode*)come_increment_ref_count(_inf_value2);
    come_call_finalizer(sLoadNode_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __result_obj__0 = (struct sNode*)come_increment_ref_count(node);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    return __result_obj__0;
}

static struct sLoadNode* sLoadNode_clone(struct sLoadNode* self)
{
    struct sLoadNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sLoadNode* result  ;
    char* __dec_obj104  ;
    char* __dec_obj105  ;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        return __result_obj__0;
    }
    result=(struct sLoadNode*)come_increment_ref_count((struct sLoadNode*)come_calloc(1, sizeof(struct sLoadNode)*(1), "sLoadNode_clone", 3, "struct sLoadNode*"));
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj104=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sLoadNode_clone", 5, "char*"));
        __dec_obj104 = come_decrement_ref_count(__dec_obj104, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->name!=((void*)0)) {
        __dec_obj105=result->name,
        result->name=(char*)come_increment_ref_count((char*)come_memdup(self->name, "sLoadNode_clone", 7, "char*"));
        __dec_obj105 = come_decrement_ref_count(__dec_obj105, (void*)0, (void*)0, 0,0, (void*)0);
    }
    __result_obj__0 = result;
    come_call_finalizer(sLoadNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

struct sFunLoadNode* sFunLoadNode_initialize(struct sFunLoadNode* self, char* name  , struct sInfo* info  )
{
    void* __right_value0 = (void*)0;
    char* __dec_obj106  ;
    struct sFunLoadNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sFunLoadNode*)come_increment_ref_count(self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj106=self->name,
    self->name=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj106 = come_decrement_ref_count(__dec_obj106, (void*)0, (void*)0, 0,0, (void*)0);
    __result_obj__0 = (struct sFunLoadNode*)come_increment_ref_count(self);
    come_call_finalizer(sFunLoadNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sFunLoadNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char* sFunLoadNode_kind(struct sFunLoadNode* self)
{
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string("sFunLoadNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool sFunLoadNode_compile(struct sFunLoadNode* self, struct sInfo* info  )
{
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    void* __right_value2 = (void*)0;
    struct sFun* fun  ;
    struct CVALUE* come_value  ;
    char* __dec_obj107  ;
    struct sType* __dec_obj108  ;
    fun=((struct sFun*)(__right_value2=map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value1=__builtin_string(self->name))))));
    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
    if(fun==((void*)0)) {
        err_msg(info,"fun not found(%s) at loading variable",self->name);
        return 1;
    }
    else {
        come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "12var.nc", 790, "struct CVALUE*"))));
        __dec_obj107=come_value->c_value,
        come_value->c_value=(char*)come_increment_ref_count(xsprintf("%s",fun->mName));
        __dec_obj107 = come_decrement_ref_count(__dec_obj107, (void*)0, (void*)0, 0,0, (void*)0);
        __dec_obj108=come_value->type,
        come_value->type=(struct sType*)come_increment_ref_count(fun->mLambdaType);
        come_call_finalizer(sType_finalize, __dec_obj108,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_value->var=((void*)0);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value));
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    return 1;
}

static void sFunLoadNode_finalize(struct sFunLoadNode* self)
{
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->name!=((void*)0)) {
        (self->name = come_decrement_ref_count(self->name, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

void add_variable_to_table(char* name, struct sType* type  , struct sInfo* info  , _Bool function_param, _Bool comma)
{
    void* __right_value0 = (void*)0;
    struct sVar* self  ;
    char* __dec_obj109  ;
    struct sType* __dec_obj110  ;
    _Bool same_name;
    struct list$1sVar$ph* o2_saved;
    struct sVar* it  ;
    char* __dec_obj111  ;
    char* __dec_obj112  ;
    char* __dec_obj113  ;
    char* __dec_obj114  ;
    char* __dec_obj115  ;
    char* __dec_obj116  ;
    self=(struct sVar*)come_increment_ref_count((struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "12var.nc", 805, "struct sVar*"));
    __dec_obj109=self->mName,
    self->mName=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj109 = come_decrement_ref_count(__dec_obj109, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj110=self->mType,
    self->mType=(struct sType*)come_increment_ref_count(sType_clone(type));
    come_call_finalizer(sType_finalize, __dec_obj110,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    same_name=0;
    for(o2_saved=(struct list$1sVar$ph*)come_increment_ref_count(info->come_fun->mAllVar),it=list$1sVar$ph_begin(o2_saved);!list$1sVar$ph_end(o2_saved);it=list$1sVar$ph_next(o2_saved)){
        if(string_operator_equals(it->mCValueName,name)) {
            same_name=1;
        }
    }
    come_call_finalizer(list$1sVar$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(function_param) {
        __dec_obj111=self->mCValueName,
        self->mCValueName=(char*)come_increment_ref_count(__builtin_string(name));
        __dec_obj111 = come_decrement_ref_count(__dec_obj111, (void*)0, (void*)0, 0,0, (void*)0);
    }
    else if(type->mRegister) {
        __dec_obj112=self->mCValueName,
        self->mCValueName=(char*)come_increment_ref_count(__builtin_string(name));
        __dec_obj112 = come_decrement_ref_count(__dec_obj112, (void*)0, (void*)0, 0,0, (void*)0);
    }
    else if(!same_name) {
        __dec_obj113=self->mCValueName,
        self->mCValueName=(char*)come_increment_ref_count(__builtin_string(name));
        __dec_obj113 = come_decrement_ref_count(__dec_obj113, (void*)0, (void*)0, 0,0, (void*)0);
    }
    else {
        static int n=0;
        __dec_obj114=self->mCValueName,
        self->mCValueName=(char*)come_increment_ref_count(xsprintf("%s_%d",name,n++));
        __dec_obj114 = come_decrement_ref_count(__dec_obj114, (void*)0, (void*)0, 0,0, (void*)0);
    }
    self->mAllocaValue=0;
    self->mNoFree=0;
    if(info->come_fun) {
        __dec_obj115=self->mFunName,
        self->mFunName=(char*)come_increment_ref_count((char*)come_memdup(info->come_fun->mName, "12var.nc", 836, "char*"));
        __dec_obj115 = come_decrement_ref_count(__dec_obj115, (void*)0, (void*)0, 0,0, (void*)0);
    }
    else {
        __dec_obj116=self->mFunName,
        self->mFunName=((void*)0);
        __dec_obj116 = come_decrement_ref_count(__dec_obj116, (void*)0, (void*)0, 0,0, (void*)0);
    }
    map$2char$phsVar$ph_insert(info->lv_table->mVars,(char*)come_increment_ref_count(__builtin_string(name)),(struct sVar*)come_increment_ref_count(self));
    if(info->come_fun) {
        list$1sVar$ph_add(info->come_fun->mAllVar,(struct sVar*)come_increment_ref_count(self));
    }
    come_call_finalizer(sVar_finalize, self, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct sVar* list$1sVar$ph_begin(struct list$1sVar$ph* self)
{
    struct sVar* result  ;
    struct sVar* __result_obj__0  ;
    struct sVar* result_81  ;
    if(self==((void*)0)) {
        memset(&result,0,sizeof(struct sVar*));
        __result_obj__0 = result;
        return __result_obj__0;
    }
    self->it=self->head;
    if(self->it) {
        __result_obj__0 = self->it->item;
        return __result_obj__0;
    }
    memset(&result_81,0,sizeof(struct sVar*));
    __result_obj__0 = result_81;
    return __result_obj__0;
}

static _Bool list$1sVar$ph_end(struct list$1sVar$ph* self)
{
    return self==((void*)0)||self->it==((void*)0);
}

static struct sVar* list$1sVar$ph_next(struct list$1sVar$ph* self)
{
    struct sVar* result  ;
    struct sVar* __result_obj__0  ;
    struct sVar* result_82  ;
    if(self==((void*)0)||self->it==((void*)0)) {
        memset(&result,0,sizeof(struct sVar*));
        __result_obj__0 = result;
        return __result_obj__0;
    }
    self->it=self->it->next;
    if(self->it) {
        __result_obj__0 = self->it->item;
        return __result_obj__0;
    }
    memset(&result_82,0,sizeof(struct sVar*));
    __result_obj__0 = result_82;
    return __result_obj__0;
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph_insert(struct map$2char$phsVar$ph* self, char* key  , struct sVar* item  )
{
    struct map$2char$phsVar$ph* __result_obj__0;
    unsigned int hash;
    unsigned int it;
    _Bool same_key_exist;
    char* it2  ;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sVar_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result_obj__0;
    }
    if(self->len*10>=self->size) {
        map$2char$phsVar$ph_rehash(self);
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
            self->item_existance[it]=1;
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
    come_call_finalizer(sVar_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__0;
}

static void map$2char$phsVar$ph_rehash(struct map$2char$phsVar$ph* self)
{
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
    struct sVar* default_value_85  ;
    size=self->size*10;
    keys=(char**)come_increment_ref_count(((char**)(__right_value0=(char**)come_calloc(1, sizeof(char*)*(1*(size)), "/usr/local/include/neo-c.h", 2301, "char**"))));
    items=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value0=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(size)), "/usr/local/include/neo-c.h", 2302, "struct sVar**"))));
    item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value0=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size)), "/usr/local/include/neo-c.h", 2303, "_Bool*"))));
    len=0;
    for(it=map$2char$phsVar$ph_begin(self);!map$2char$phsVar$ph_end(self);it=map$2char$phsVar$ph_next(self)){
        memset(&default_value,0,sizeof(struct sVar*));
        it2=((struct sVar*)(__right_value0=map$2char$phsVar$ph_at(self,it,(struct sVar*)come_increment_ref_count(default_value))));
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
                memset(&default_value_85,0,sizeof(struct sVar*));
                items[n]=((struct sVar*)(__right_value0=map$2char$phsVar$ph_at(self,it,(struct sVar*)come_increment_ref_count(default_value_85))));
                len++;
                come_call_finalizer(sVar_finalize, default_value_85, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                come_call_finalizer(sVar_finalize, default_value_85, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
}

static char* map$2char$phsVar$ph_begin(struct map$2char$phsVar$ph* self)
{
    char* result  ;
    char* __result_obj__0  ;
    char* result_83  ;
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
    memset(&result_83,0,sizeof(char*));
    __result_obj__0 = result_83;
    return __result_obj__0;
}

static _Bool map$2char$phsVar$ph_end(struct map$2char$phsVar$ph* self)
{
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsVar$ph_next(struct map$2char$phsVar$ph* self)
{
    char* result  ;
    char* __result_obj__0  ;
    char* result_84  ;
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
    memset(&result_84,0,sizeof(char*));
    __result_obj__0 = result_84;
    return __result_obj__0;
}

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item  )
{
    struct list$1char$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1char$ph* litem;
    char* __dec_obj117  ;
    struct list_item$1char$ph* litem_86;
    char* __dec_obj118  ;
    struct list_item$1char$ph* litem_87;
    char* __dec_obj119  ;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0));
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 1041, "struct list_item$1char$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj117=litem->item,
        litem->item=(char*)come_increment_ref_count(item);
        __dec_obj117 = come_decrement_ref_count(__dec_obj117, (void*)0, (void*)0, 0,0, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        litem_86=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 1051, "struct list_item$1char$ph*"))));
        litem_86->prev=self->head;
        litem_86->next=((void*)0);
        __dec_obj118=litem_86->item,
        litem_86->item=(char*)come_increment_ref_count(item);
        __dec_obj118 = come_decrement_ref_count(__dec_obj118, (void*)0, (void*)0, 0,0, (void*)0);
        self->tail=litem_86;
        self->head->next=litem_86;
    }
    else {
        litem_87=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 1061, "struct list_item$1char$ph*"))));
        litem_87->prev=self->tail;
        litem_87->next=((void*)0);
        __dec_obj119=litem_87->item,
        litem_87->item=(char*)come_increment_ref_count(item);
        __dec_obj119 = come_decrement_ref_count(__dec_obj119, (void*)0, (void*)0, 0,0, (void*)0);
        self->tail->next=litem_87;
        self->tail=litem_87;
    }
    self->len++;
    __result_obj__0 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0));
    return __result_obj__0;
}

static struct list$1sVar$ph* list$1sVar$ph_add(struct list$1sVar$ph* self, struct sVar* item  )
{
    struct list$1sVar$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1sVar$ph* litem;
    struct sVar* __dec_obj120  ;
    struct list_item$1sVar$ph* litem_88;
    struct sVar* __dec_obj121  ;
    struct list_item$1sVar$ph* litem_89;
    struct sVar* __dec_obj122  ;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        come_call_finalizer(sVar_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1sVar$ph*)come_increment_ref_count(((struct list_item$1sVar$ph*)(__right_value0=(struct list_item$1sVar$ph*)come_calloc(1, sizeof(struct list_item$1sVar$ph)*(1), "/usr/local/include/neo-c.h", 956, "struct list_item$1sVar$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj120=litem->item,
        litem->item=(struct sVar*)come_increment_ref_count(item);
        come_call_finalizer(sVar_finalize, __dec_obj120,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        litem_88=(struct list_item$1sVar$ph*)come_increment_ref_count(((struct list_item$1sVar$ph*)(__right_value0=(struct list_item$1sVar$ph*)come_calloc(1, sizeof(struct list_item$1sVar$ph)*(1), "/usr/local/include/neo-c.h", 966, "struct list_item$1sVar$ph*"))));
        litem_88->prev=self->head;
        litem_88->next=((void*)0);
        __dec_obj121=litem_88->item,
        litem_88->item=(struct sVar*)come_increment_ref_count(item);
        come_call_finalizer(sVar_finalize, __dec_obj121,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem_88;
        self->head->next=litem_88;
    }
    else {
        litem_89=(struct list_item$1sVar$ph*)come_increment_ref_count(((struct list_item$1sVar$ph*)(__right_value0=(struct list_item$1sVar$ph*)come_calloc(1, sizeof(struct list_item$1sVar$ph)*(1), "/usr/local/include/neo-c.h", 976, "struct list_item$1sVar$ph*"))));
        litem_89->prev=self->tail;
        litem_89->next=((void*)0);
        __dec_obj122=litem_89->item,
        litem_89->item=(struct sVar*)come_increment_ref_count(item);
        come_call_finalizer(sVar_finalize, __dec_obj122,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail->next=litem_89;
        self->tail=litem_89;
    }
    self->len++;
    __result_obj__0 = self;
    come_call_finalizer(sVar_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__0;
}

void add_variable_to_global_table(char* name, struct sType* type  , struct sInfo* info  )
{
    void* __right_value0 = (void*)0;
    struct sVar* self  ;
    char* __dec_obj123  ;
    struct sType* __dec_obj124  ;
    char* __dec_obj125  ;
    self=(struct sVar*)come_increment_ref_count((struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "12var.nc", 851, "struct sVar*"));
    __dec_obj123=self->mName,
    self->mName=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj123 = come_decrement_ref_count(__dec_obj123, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj124=self->mType,
    self->mType=(struct sType*)come_increment_ref_count(sType_clone(type));
    come_call_finalizer(sType_finalize, __dec_obj124,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    self->mGlobal=1;
    __dec_obj125=self->mCValueName,
    self->mCValueName=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj125 = come_decrement_ref_count(__dec_obj125, (void*)0, (void*)0, 0,0, (void*)0);
    self->mAllocaValue=0;
    self->mNoFree=0;
    map$2char$phsVar$ph_insert(info->gv_table->mVars,(char*)come_increment_ref_count(__builtin_string(name)),(struct sVar*)come_increment_ref_count(self));
    come_call_finalizer(sVar_finalize, self, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

void add_variable_to_global_table_with_int_value(char* name, struct sType* type  , char* c_value, struct sInfo* info  )
{
    void* __right_value0 = (void*)0;
    struct sVar* self  ;
    char* __dec_obj126  ;
    struct sType* __dec_obj127  ;
    char* __dec_obj128  ;
    self=(struct sVar*)come_increment_ref_count((struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "12var.nc", 868, "struct sVar*"));
    __dec_obj126=self->mName,
    self->mName=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj126 = come_decrement_ref_count(__dec_obj126, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj127=self->mType,
    self->mType=(struct sType*)come_increment_ref_count(sType_clone(type));
    come_call_finalizer(sType_finalize, __dec_obj127,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    self->mGlobal=1;
    __dec_obj128=self->mCValueName,
    self->mCValueName=(char*)come_increment_ref_count(__builtin_string(c_value));
    __dec_obj128 = come_decrement_ref_count(__dec_obj128, (void*)0, (void*)0, 0,0, (void*)0);
    self->mAllocaValue=0;
    self->mNoFree=0;
    map$2char$phsVar$ph_insert(info->gv_table->mVars,(char*)come_increment_ref_count(__builtin_string(name)),(struct sVar*)come_increment_ref_count(self));
    come_call_finalizer(sVar_finalize, self, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

struct sNode* string_node_v7(char* buf, char* head, int head_sline, struct sInfo* info  )
{
    int sline_real;
    _Bool is_type_name_flag;
    _Bool multiple_declare;
    _Bool no_output_come_code;
    char* p;
    int sline;
    void* __right_value0 = (void*)0;
    struct tuple3$3sType$phchar$ph_Bool$* multiple_assign_var2
;    struct sType* type  =0;
    char* name  =0;
    _Bool err=0;
    struct tuple2$2sType$phchar$ph* multiple_assign_var3
;    struct sType* type_90  =0;
    char* name_91  =0;
    _Bool no_comma;
    _Bool no_output_come_code_92;
    struct sNode* exp;
    _Bool attr_define;
    char* p_93;
    int sline_94;
    _Bool no_output_come_code_95;
    struct tuple3$3sType$phchar$ph_Bool$* multiple_assign_var4
;    struct sType* type_96  =0;
    char* name_97  =0;
    _Bool err_98=0;
    _Bool __exception_result_var_b1;
    void* __right_value1 = (void*)0;
    void* __right_value2 = (void*)0;
    struct sFun* fun  ;
    char* buf2  ;
    struct list$1char$ph* multiple_assign;
    struct list$1char$ph* __dec_obj129;
    char* buf3  ;
    _Bool no_comma_99;
    struct sNode* right_value;
    struct sNode* __dec_obj130;
    struct sNode* _inf_value3;
    struct sStoreNode* _inf_obj_value3;
    void* __right_value3 = (void*)0;
    struct sNode* node;
    struct sNode* __result_obj__0;
    struct sNode* _inf_value4;
    struct sNewChannel* _inf_obj_value4;
    struct sNode* node_100;
    struct list$1tuple3$3sType$phchar$phsNode$ph$ph* multiple_declare_101;
    struct tuple3$3sType$phchar$ph_Bool$* multiple_assign_var5
;    struct sType* base_type  =0;
    char* name_102  =0;
    _Bool err_103=0;
    struct tuple2$2sType$phchar$ph* multiple_assign_var6
;    struct sType* type2  =0;
    char* var_name  =0;
    _Bool no_comma_104;
    struct sNode* exp_105;
    _Bool no_comma_108;
    struct sNode* exp_109;
    struct tuple2$2sType$phchar$ph* multiple_assign_var7
;    struct sType* type2_110  =0;
    char* var_name_111  =0;
    _Bool no_comma_112;
    struct sNode* exp_113;
    _Bool no_comma_114;
    struct sNode* exp_115;
    struct sNode* right_node;
    char* var_name2  ;
    struct sNode* _inf_value5;
    struct sStoreNode* _inf_obj_value5;
    struct sNode* node_116;
    struct tuple3$3sType$phchar$ph_Bool$* multiple_assign_var8
;    struct sType* type_117  =0;
    char* name_118  =0;
    _Bool err_119=0;
    char* __dec_obj138  ;
    struct sNode* _inf_value6;
    struct sLoadNode* _inf_obj_value6;
    struct sNode* self_node;
    struct sNode* right_node_122;
    struct sNode* node_123;
    struct sNode* right_value_124;
    struct sNode* __dec_obj144;
    struct sNode* _inf_value7;
    struct sStoreNode* _inf_obj_value7;
    struct sNode* node_125;
    _Bool _conditional_value_X0;
    struct sNode* _inf_value8;
    struct sLoadNode* _inf_obj_value8;
    struct sNode* node_126;
    struct sNode* __dec_obj145;
    struct sNode* _inf_value9;
    struct sLoadNode* _inf_obj_value9;
    struct sNode* node_127;
    struct sNode* __dec_obj146;
    char* word  ;
    char* __dec_obj147  ;
    char* __dec_obj148  ;
    _Bool is_type_name_flag_128;
    struct tuple3$3sType$phchar$ph_Bool$* multiple_assign_var9
;    struct sType* type_129  =0;
    char* name_130  =0;
    _Bool err_131=0;
    struct sNode* _inf_value10;
    struct sLoadNode* _inf_obj_value10;
    struct sNode* node_132;
    struct sNode* right_value_133;
    _Bool no_comma_134;
    struct sNode* __dec_obj149;
    struct sNode* __dec_obj150;
    struct sNode* __dec_obj151;
    struct sNode* __dec_obj152;
    struct sNode* _inf_value11;
    struct sStoreNode* _inf_obj_value11;
    struct sNode* node_135;
    struct sNode* _inf_value12;
    struct sStoreNode* _inf_obj_value12;
    struct sNode* node_136;
    memset(&word, 0, sizeof(word));
    sline_real=info->sline_real;
    info->sline_real=head_sline;
    is_type_name_flag=is_type_name(buf,info);
    multiple_declare=0;
    if(is_type_name_flag&&!info->in_offsetof) {
        no_output_come_code=info->no_output_come_code;
        info->no_output_come_code=1;
        p=info->p;
        sline=info->sline;
        info->p=head;
        info->sline=head_sline;
        if(xisalpha(*info->p)||*info->p==95) {
            skip_spaces_and_lf(info);
            multiple_assign_var2=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=parse_type(info,0,1,0)));
            type=(struct sType*)come_increment_ref_count(multiple_assign_var2->v1);
            name=(char*)come_increment_ref_count(multiple_assign_var2->v2);
            err=multiple_assign_var2->v3;
            come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            skip_spaces_and_lf(info);
            if(err) {
                skip_spaces_and_lf(info);
                multiple_assign_var3=((struct tuple2$2sType$phchar$ph*)(__right_value0=parse_variable_name_on_multiple_declare(type,1,info)));
                type_90=(struct sType*)come_increment_ref_count(multiple_assign_var3->v1);
                name_91=(char*)come_increment_ref_count(multiple_assign_var3->v2);
                come_call_finalizer(tuple2$2sType$phchar$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                if(*info->p==61&&*(info->p+1)!=61&&*(info->p+1)!=62&&!info->no_assign) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(*info->p==123) {
                        ((char*)(__right_value0=skip_block(info,0)));
                        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                    }
                    else {
                        no_comma=info->no_comma;
                        no_output_come_code_92=info->no_output_come_code;
                        info->no_comma=1;
                        info->no_output_come_code=1;
                        exp=(struct sNode*)come_increment_ref_count(expression_v13(info,0));
                        info->no_comma=no_comma;
                        info->no_output_come_code=no_output_come_code_92;
                        ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                    }
                }
                if(!is_type_name(name_91,info)&&*info->p==44) {
                    multiple_declare=1;
                }
                come_call_finalizer(sType_finalize, type_90, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (name_91 = come_decrement_ref_count(name_91, (void*)0, (void*)0, 0, 0, (void*)0));
            }
            come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        info->p=p;
        info->sline=sline;
        info->no_output_come_code=no_output_come_code;
    }
    attr_define=0;
    if(is_type_name_flag&&info->defining_class&&!info->in_offsetof) {
        p_93=info->p;
        sline_94=info->sline;
        no_output_come_code_95=info->no_output_come_code;
        info->no_output_come_code=1;
        info->p=head;
        info->sline=head_sline;
        skip_spaces_and_lf(info);
        multiple_assign_var4=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=parse_type(info,0,1,0)));
        type_96=(struct sType*)come_increment_ref_count(multiple_assign_var4->v1);
        name_97=(char*)come_increment_ref_count(multiple_assign_var4->v2);
        err_98=multiple_assign_var4->v3;
        come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        skip_spaces_and_lf(info);
        if(err_98&&(come_push_stackframe("12var.nc", 957, 0),__exception_result_var_b1=parsecmp("self",info), come_pop_stackframe(), __exception_result_var_b1)) {
            attr_define=1;
        }
        info->p=p_93;
        info->sline=sline_94;
        info->no_output_come_code=no_output_come_code_95;
        come_call_finalizer(sType_finalize, type_96, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (name_97 = come_decrement_ref_count(name_97, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    skip_spaces_and_lf(info);
    fun=((struct sFun*)(__right_value2=map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value1=__builtin_string(buf))))));
    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
    if((!gComeC&&charp_operator_equals(buf,"var"))||charp_operator_equals(buf,"auto")||charp_operator_equals(buf,"__auto_type")) {
        skip_spaces_and_lf(info);
        buf2=(char*)come_increment_ref_count(parse_word(0,info));
        skip_spaces_and_lf(info);
        multiple_assign=((void*)0);
        if(*info->p==44) {
            __dec_obj129=multiple_assign,
            multiple_assign=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "12var.nc", 978, "struct list$1char$ph*"))));
            come_call_finalizer(list$1char$ph_finalize, __dec_obj129,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            list$1char$ph_push_back(multiple_assign,(char*)come_increment_ref_count((char*)come_memdup(buf2, "12var.nc", 979, "char*")));
            while(*info->p==44) {
                info->p++;
                skip_spaces_and_lf(info);
                buf3=(char*)come_increment_ref_count(parse_word(0,info));
                skip_spaces_and_lf(info);
                list$1char$ph_push_back(multiple_assign,(char*)come_increment_ref_count((char*)come_memdup(buf3, "12var.nc", 988, "char*")));
                (buf3 = come_decrement_ref_count(buf3, (void*)0, (void*)0, 0, 0, (void*)0));
            }
        }
        skip_spaces_and_lf(info);
        if(*info->p==61&&*(info->p+1)!=61&&*(info->p+1)!=62&&!info->no_assign) {
            info->p++;
            skip_spaces_and_lf(info);
            no_comma_99=info->no_comma;
            info->no_comma=1;
            right_value=(struct sNode*)come_increment_ref_count(expression_v13(info,0));
            info->no_comma=no_comma_99;
            skip_spaces_and_lf(info);
            __dec_obj130=right_value,
            right_value=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(right_value),info));
            (__dec_obj130 ? __dec_obj130 = come_decrement_ref_count(__dec_obj130, ((struct sNode*)__dec_obj130)->finalize, ((struct sNode*)__dec_obj130)->_protocol_obj, 0,0, (void*)0) :0);
            skip_spaces_and_lf(info);
            _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "12var.nc", 1006, "struct sNode");
            _inf_obj_value3=(struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(__right_value2=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count((struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "12var.nc", 1006, "struct sStoreNode*")),(char*)come_increment_ref_count(__builtin_string(buf2)),multiple_assign,((void*)0),((void*)0),1,right_value,info,(char*)come_increment_ref_count(xsprintf(""))))));
            _inf_value3->_protocol_obj=_inf_obj_value3;
            _inf_value3->finalize=(void*)sStoreNode_finalize;
            _inf_value3->clone=(void*)sStoreNode_clone;
            _inf_value3->compile=(void*)sStoreNode_compile;
            _inf_value3->sline=(void*)sNodeBase_sline;
            _inf_value3->sline_real=(void*)sNodeBase_sline_real;
            _inf_value3->sname=(void*)sNodeBase_sname;
            _inf_value3->terminated=(void*)sNodeBase_terminated;
            _inf_value3->kind=(void*)sStoreNode_kind;
            _inf_value3->no_mutex=(void*)sNodeBase_no_mutex;
            node=(struct sNode*)come_increment_ref_count(_inf_value3);
            come_call_finalizer(sStoreNode_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            info->sline_real=sline_real;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(node);
            ((right_value) ? right_value = come_decrement_ref_count(right_value, ((struct sNode*)right_value)->finalize, ((struct sNode*)right_value)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            (buf2 = come_decrement_ref_count(buf2, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(list$1char$ph$p_finalize, multiple_assign, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__0;
            ((right_value) ? right_value = come_decrement_ref_count(right_value, ((struct sNode*)right_value)->finalize, ((struct sNode*)right_value)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
        else {
            err_msg(info,"var requires a right value(%c)",*info->p);
            exit(1);
        }
        (buf2 = come_decrement_ref_count(buf2, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(list$1char$ph$p_finalize, multiple_assign, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(gComePthread&&charp_operator_equals(buf,"__channel__")) {
        _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "12var.nc", 1016, "struct sNode");
        _inf_obj_value4=(struct sNewChannel*)come_increment_ref_count(((struct sNewChannel*)(__right_value1=sNewChannel_initialize((struct sNewChannel*)come_increment_ref_count((struct sNewChannel*)come_calloc(1, sizeof(struct sNewChannel)*(1), "12var.nc", 1016, "struct sNewChannel*")),info))));
        _inf_value4->_protocol_obj=_inf_obj_value4;
        _inf_value4->finalize=(void*)sNewChannel_finalize;
        _inf_value4->clone=(void*)sNewChannel_clone;
        _inf_value4->compile=(void*)sNewChannel_compile;
        _inf_value4->sline=(void*)sNodeBase_sline;
        _inf_value4->sline_real=(void*)sNodeBase_sline_real;
        _inf_value4->sname=(void*)sNodeBase_sname;
        _inf_value4->terminated=(void*)sNodeBase_terminated;
        _inf_value4->kind=(void*)sNewChannel_kind;
        _inf_value4->no_mutex=(void*)sNodeBase_no_mutex;
        node_100=(struct sNode*)come_increment_ref_count(_inf_value4);
        come_call_finalizer(sNewChannel_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        info->sline_real=sline_real;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(node_100);
        ((node_100) ? node_100 = come_decrement_ref_count(node_100, ((struct sNode*)node_100)->finalize, ((struct sNode*)node_100)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__0;
        ((node_100) ? node_100 = come_decrement_ref_count(node_100, ((struct sNode*)node_100)->finalize, ((struct sNode*)node_100)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    else if(multiple_declare) {
        info->p=head;
        info->sline=head_sline;
        multiple_declare_101=(struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(list$1tuple3$3sType$phchar$phsNode$ph$ph_initialize((struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple3$3sType$phchar$phsNode$ph$ph)*(1), "12var.nc", 1024, "struct list$1tuple3$3sType$phchar$phsNode$ph$ph*"))));
        skip_spaces_and_lf(info);
        multiple_assign_var5=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=parse_type(info,0,1,0)));
        base_type=(struct sType*)come_increment_ref_count(multiple_assign_var5->v1);
        name_102=(char*)come_increment_ref_count(multiple_assign_var5->v2);
        err_103=multiple_assign_var5->v3;
        come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        skip_spaces_and_lf(info);
        if(!err_103) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        skip_spaces_and_lf(info);
        multiple_assign_var6=((struct tuple2$2sType$phchar$ph*)(__right_value0=parse_variable_name_on_multiple_declare(base_type,1,info)));
        type2=(struct sType*)come_increment_ref_count(multiple_assign_var6->v1);
        var_name=(char*)come_increment_ref_count(multiple_assign_var6->v2);
        come_call_finalizer(tuple2$2sType$phchar$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        skip_spaces_and_lf(info);
        if(*info->p==61&&*(info->p+1)!=61) {
            info->p++;
            skip_spaces_and_lf(info);
            if(type2->mClass->mStruct&&list$1sNode$ph_length(type2->mArrayNum)==0) {
                info->array_initializer=1;
                no_comma_104=info->no_comma;
                info->no_comma=1;
                exp_105=(struct sNode*)come_increment_ref_count(expression_v13(info,0));
                info->no_comma=no_comma_104;
                info->array_initializer=0;
                list$1tuple3$3sType$phchar$phsNode$ph$ph_push_back(multiple_declare_101,(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(tuple3$3sType$phchar$phsNode$ph_initialize((struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count((struct tuple3$3sType$phchar$phsNode$ph*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$phsNode$ph)*(1), "12var.nc", 1051, "struct tuple3$3sType$phchar$phsNode$ph")),(struct sType*)come_increment_ref_count(type2),(char*)come_increment_ref_count(var_name),(struct sNode*)come_increment_ref_count(exp_105))));
                ((exp_105) ? exp_105 = come_decrement_ref_count(exp_105, ((struct sNode*)exp_105)->finalize, ((struct sNode*)exp_105)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            }
            else {
                info->array_initializer=1;
                no_comma_108=info->no_comma;
                info->no_comma=1;
                exp_109=(struct sNode*)come_increment_ref_count(expression_v13(info,0));
                info->no_comma=no_comma_108;
                info->array_initializer=0;
                list$1tuple3$3sType$phchar$phsNode$ph$ph_push_back(multiple_declare_101,(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(tuple3$3sType$phchar$phsNode$ph_initialize((struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count((struct tuple3$3sType$phchar$phsNode$ph*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$phsNode$ph)*(1), "12var.nc", 1061, "struct tuple3$3sType$phchar$phsNode$ph")),(struct sType*)come_increment_ref_count(type2),(char*)come_increment_ref_count(var_name),(struct sNode*)come_increment_ref_count(exp_109))));
                ((exp_109) ? exp_109 = come_decrement_ref_count(exp_109, ((struct sNode*)exp_109)->finalize, ((struct sNode*)exp_109)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            }
        }
        else {
            list$1tuple3$3sType$phchar$phsNode$ph$ph_push_back(multiple_declare_101,(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(tuple3$3sType$phchar$phsNode$ph_initialize((struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count((struct tuple3$3sType$phchar$phsNode$ph*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$phsNode$ph)*(1), "12var.nc", 1065, "struct tuple3$3sType$phchar$phsNode$ph")),(struct sType*)come_increment_ref_count(type2),(char*)come_increment_ref_count(var_name),(struct sNode*)come_increment_ref_count((struct sNode*)((void*)0)))));
        }
        while(*info->p==44) {
            info->p++;
            skip_spaces_and_lf(info);
            multiple_assign_var7=((struct tuple2$2sType$phchar$ph*)(__right_value0=parse_variable_name_on_multiple_declare(base_type,0,info)));
            type2_110=(struct sType*)come_increment_ref_count(multiple_assign_var7->v1);
            var_name_111=(char*)come_increment_ref_count(multiple_assign_var7->v2);
            come_call_finalizer(tuple2$2sType$phchar$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            if(*info->p==61&&*(info->p+1)!=61) {
                info->p++;
                skip_spaces_and_lf(info);
                if(type2_110->mClass->mStruct&&list$1sNode$ph_length(type2_110->mArrayNum)==0) {
                    info->array_initializer=1;
                    no_comma_112=info->no_comma;
                    info->no_comma=1;
                    exp_113=(struct sNode*)come_increment_ref_count(expression_v13(info,0));
                    info->no_comma=no_comma_112;
                    info->array_initializer=0;
                    list$1tuple3$3sType$phchar$phsNode$ph$ph_push_back(multiple_declare_101,(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(tuple3$3sType$phchar$phsNode$ph_initialize((struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count((struct tuple3$3sType$phchar$phsNode$ph*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$phsNode$ph)*(1), "12var.nc", 1086, "struct tuple3$3sType$phchar$phsNode$ph")),(struct sType*)come_increment_ref_count(type2_110),(char*)come_increment_ref_count(var_name_111),(struct sNode*)come_increment_ref_count(exp_113))));
                    ((exp_113) ? exp_113 = come_decrement_ref_count(exp_113, ((struct sNode*)exp_113)->finalize, ((struct sNode*)exp_113)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                }
                else {
                    no_comma_114=info->no_comma;
                    info->no_comma=1;
                    info->array_initializer=1;
                    exp_115=(struct sNode*)come_increment_ref_count(expression_v13(info,0));
                    info->no_comma=no_comma_114;
                    info->array_initializer=0;
                    list$1tuple3$3sType$phchar$phsNode$ph$ph_push_back(multiple_declare_101,(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(tuple3$3sType$phchar$phsNode$ph_initialize((struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count((struct tuple3$3sType$phchar$phsNode$ph*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$phsNode$ph)*(1), "12var.nc", 1098, "struct tuple3$3sType$phchar$phsNode$ph")),(struct sType*)come_increment_ref_count(type2_110),(char*)come_increment_ref_count(var_name_111),(struct sNode*)come_increment_ref_count(exp_115))));
                    ((exp_115) ? exp_115 = come_decrement_ref_count(exp_115, ((struct sNode*)exp_115)->finalize, ((struct sNode*)exp_115)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                }
            }
            else {
                list$1tuple3$3sType$phchar$phsNode$ph$ph_push_back(multiple_declare_101,(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(tuple3$3sType$phchar$phsNode$ph_initialize((struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count((struct tuple3$3sType$phchar$phsNode$ph*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$phsNode$ph)*(1), "12var.nc", 1102, "struct tuple3$3sType$phchar$phsNode$ph")),(struct sType*)come_increment_ref_count(type2_110),(char*)come_increment_ref_count(var_name_111),(struct sNode*)come_increment_ref_count((struct sNode*)((void*)0)))));
            }
            come_call_finalizer(sType_finalize, type2_110, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (var_name_111 = come_decrement_ref_count(var_name_111, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        right_node=((void*)0);
        var_name2=(char*)come_increment_ref_count(__builtin_string(""));
        _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "12var.nc", 1109, "struct sNode");
        _inf_obj_value5=(struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(__right_value2=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count((struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "12var.nc", 1109, "struct sStoreNode*")),(char*)come_increment_ref_count(__builtin_string(buf)),((void*)0),multiple_declare_101,base_type,1,((void*)0),info,(char*)come_increment_ref_count(xsprintf(""))))));
        _inf_value5->_protocol_obj=_inf_obj_value5;
        _inf_value5->finalize=(void*)sStoreNode_finalize;
        _inf_value5->clone=(void*)sStoreNode_clone;
        _inf_value5->compile=(void*)sStoreNode_compile;
        _inf_value5->sline=(void*)sNodeBase_sline;
        _inf_value5->sline_real=(void*)sNodeBase_sline_real;
        _inf_value5->sname=(void*)sNodeBase_sname;
        _inf_value5->terminated=(void*)sNodeBase_terminated;
        _inf_value5->kind=(void*)sStoreNode_kind;
        _inf_value5->no_mutex=(void*)sNodeBase_no_mutex;
        node_116=(struct sNode*)come_increment_ref_count(_inf_value5);
        come_call_finalizer(sStoreNode_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        info->sline_real=sline_real;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(node_116);
        come_call_finalizer(list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, multiple_declare_101, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, base_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (name_102 = come_decrement_ref_count(name_102, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0));
        ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        (var_name2 = come_decrement_ref_count(var_name2, (void*)0, (void*)0, 0, 0, (void*)0));
        ((node_116) ? node_116 = come_decrement_ref_count(node_116, ((struct sNode*)node_116)->finalize, ((struct sNode*)node_116)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__0;
        come_call_finalizer(list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, multiple_declare_101, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, base_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (name_102 = come_decrement_ref_count(name_102, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0));
        ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        (var_name2 = come_decrement_ref_count(var_name2, (void*)0, (void*)0, 0, 0, (void*)0));
        ((node_116) ? node_116 = come_decrement_ref_count(node_116, ((struct sNode*)node_116)->finalize, ((struct sNode*)node_116)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    else if(attr_define) {
        info->p=head;
        info->sline=head_sline;
        skip_spaces_and_lf(info);
        multiple_assign_var8=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=parse_type(info,0,1,0)));
        type_117=(struct sType*)come_increment_ref_count(multiple_assign_var8->v1);
        name_118=(char*)come_increment_ref_count(multiple_assign_var8->v2);
        err_119=multiple_assign_var8->v3;
        come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        skip_spaces_and_lf(info);
        if(!err_119) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        info->p+=strlen("self.");
        __dec_obj138=name_118,
        name_118=(char*)come_increment_ref_count(parse_word(0,info));
        __dec_obj138 = come_decrement_ref_count(__dec_obj138, (void*)0, (void*)0, 0,0, (void*)0);
        skip_spaces_and_lf(info);
        list$1tuple2$2char$phsType$ph$ph_add(info->defining_class->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph*)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "12var.nc", 1132, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(name_118),(struct sType*)come_increment_ref_count(type_117))));
        if(*info->p==61&&*(info->p+1)!=61&&*(info->p+1)!=62) {
            info->p++;
            skip_spaces_and_lf(info);
            _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "12var.nc", 1139, "struct sNode");
            _inf_obj_value6=(struct sLoadNode*)come_increment_ref_count(((struct sLoadNode*)(__right_value2=sLoadNode_initialize((struct sLoadNode*)come_increment_ref_count((struct sLoadNode*)come_calloc(1, sizeof(struct sLoadNode)*(1), "12var.nc", 1139, "struct sLoadNode*")),(char*)come_increment_ref_count(__builtin_string("self")),info))));
            _inf_value6->_protocol_obj=_inf_obj_value6;
            _inf_value6->finalize=(void*)sLoadNode_finalize;
            _inf_value6->clone=(void*)sLoadNode_clone;
            _inf_value6->compile=(void*)sLoadNode_compile;
            _inf_value6->sline=(void*)sNodeBase_sline;
            _inf_value6->sline_real=(void*)sNodeBase_sline_real;
            _inf_value6->sname=(void*)sNodeBase_sname;
            _inf_value6->terminated=(void*)sLoadNode_terminated;
            _inf_value6->kind=(void*)sLoadNode_kind;
            _inf_value6->no_mutex=(void*)sNodeBase_no_mutex;
            self_node=(struct sNode*)come_increment_ref_count(_inf_value6);
            come_call_finalizer(sLoadNode_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            right_node_122=(struct sNode*)come_increment_ref_count(expression_v13(info,0));
            node_123=(struct sNode*)come_increment_ref_count(store_field(self_node,(struct sNode*)come_increment_ref_count(right_node_122),(char*)come_increment_ref_count(name_118),info));
            info->sline_real=sline_real;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(node_123);
            ((self_node) ? self_node = come_decrement_ref_count(self_node, ((struct sNode*)self_node)->finalize, ((struct sNode*)self_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            ((right_node_122) ? right_node_122 = come_decrement_ref_count(right_node_122, ((struct sNode*)right_node_122)->finalize, ((struct sNode*)right_node_122)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            ((node_123) ? node_123 = come_decrement_ref_count(node_123, ((struct sNode*)node_123)->finalize, ((struct sNode*)node_123)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            come_call_finalizer(sType_finalize, type_117, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (name_118 = come_decrement_ref_count(name_118, (void*)0, (void*)0, 0, 0, (void*)0));
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__0;
            ((self_node) ? self_node = come_decrement_ref_count(self_node, ((struct sNode*)self_node)->finalize, ((struct sNode*)self_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            ((right_node_122) ? right_node_122 = come_decrement_ref_count(right_node_122, ((struct sNode*)right_node_122)->finalize, ((struct sNode*)right_node_122)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            ((node_123) ? node_123 = come_decrement_ref_count(node_123, ((struct sNode*)node_123)->finalize, ((struct sNode*)node_123)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
        else {
            info->sline_real=sline_real;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=create_null_node(info))));
            come_call_finalizer(sType_finalize, type_117, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (name_118 = come_decrement_ref_count(name_118, (void*)0, (void*)0, 0, 0, (void*)0));
            ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0):(void*)0);
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__0;
        }
        come_call_finalizer(sType_finalize, type_117, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (name_118 = come_decrement_ref_count(name_118, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    else if(!is_type_name_flag&&*info->p==61&&*(info->p+1)!=61&&*(info->p+1)!=62&&!info->no_assign) {
        info->p++;
        skip_spaces_and_lf(info);
        right_value_124=(struct sNode*)come_increment_ref_count(expression_v13(info,0));
        skip_spaces_and_lf(info);
        __dec_obj144=right_value_124,
        right_value_124=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(right_value_124),info));
        (__dec_obj144 ? __dec_obj144 = come_decrement_ref_count(__dec_obj144, ((struct sNode*)__dec_obj144)->finalize, ((struct sNode*)__dec_obj144)->_protocol_obj, 0,0, (void*)0) :0);
        skip_spaces_and_lf(info);
        _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "12var.nc", 1163, "struct sNode");
        _inf_obj_value7=(struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(__right_value2=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count((struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "12var.nc", 1163, "struct sStoreNode*")),(char*)come_increment_ref_count(__builtin_string(buf)),((void*)0),((void*)0),((void*)0),0,right_value_124,info,(char*)come_increment_ref_count(xsprintf(""))))));
        _inf_value7->_protocol_obj=_inf_obj_value7;
        _inf_value7->finalize=(void*)sStoreNode_finalize;
        _inf_value7->clone=(void*)sStoreNode_clone;
        _inf_value7->compile=(void*)sStoreNode_compile;
        _inf_value7->sline=(void*)sNodeBase_sline;
        _inf_value7->sline_real=(void*)sNodeBase_sline_real;
        _inf_value7->sname=(void*)sNodeBase_sname;
        _inf_value7->terminated=(void*)sNodeBase_terminated;
        _inf_value7->kind=(void*)sStoreNode_kind;
        _inf_value7->no_mutex=(void*)sNodeBase_no_mutex;
        node_125=(struct sNode*)come_increment_ref_count(_inf_value7);
        come_call_finalizer(sStoreNode_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        info->sline_real=sline_real;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(node_125);
        ((right_value_124) ? right_value_124 = come_decrement_ref_count(right_value_124, ((struct sNode*)right_value_124)->finalize, ((struct sNode*)right_value_124)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        ((node_125) ? node_125 = come_decrement_ref_count(node_125, ((struct sNode*)node_125)->finalize, ((struct sNode*)node_125)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__0;
        ((right_value_124) ? right_value_124 = come_decrement_ref_count(right_value_124, ((struct sNode*)right_value_124)->finalize, ((struct sNode*)right_value_124)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        ((node_125) ? node_125 = come_decrement_ref_count(node_125, ((struct sNode*)node_125)->finalize, ((struct sNode*)node_125)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    else if(({(_conditional_value_X0=(!is_type_name_flag||((struct sFun*)(__right_value2=map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value1=__builtin_string(buf))))))));    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
    come_call_finalizer(sFun_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
_conditional_value_X0;})) {
        _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "12var.nc", 1168, "struct sNode");
        _inf_obj_value8=(struct sLoadNode*)come_increment_ref_count(((struct sLoadNode*)(__right_value2=sLoadNode_initialize((struct sLoadNode*)come_increment_ref_count((struct sLoadNode*)come_calloc(1, sizeof(struct sLoadNode)*(1), "12var.nc", 1168, "struct sLoadNode*")),(char*)come_increment_ref_count(__builtin_string(buf)),info))));
        _inf_value8->_protocol_obj=_inf_obj_value8;
        _inf_value8->finalize=(void*)sLoadNode_finalize;
        _inf_value8->clone=(void*)sLoadNode_clone;
        _inf_value8->compile=(void*)sLoadNode_compile;
        _inf_value8->sline=(void*)sNodeBase_sline;
        _inf_value8->sline_real=(void*)sNodeBase_sline_real;
        _inf_value8->sname=(void*)sNodeBase_sname;
        _inf_value8->terminated=(void*)sLoadNode_terminated;
        _inf_value8->kind=(void*)sLoadNode_kind;
        _inf_value8->no_mutex=(void*)sNodeBase_no_mutex;
        node_126=(struct sNode*)come_increment_ref_count(_inf_value8);
        come_call_finalizer(sLoadNode_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        __dec_obj145=node_126,
        node_126=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_126),info));
        (__dec_obj145 ? __dec_obj145 = come_decrement_ref_count(__dec_obj145, ((struct sNode*)__dec_obj145)->finalize, ((struct sNode*)__dec_obj145)->_protocol_obj, 0,0, (void*)0) :0);
        info->sline_real=sline_real;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(node_126);
        ((node_126) ? node_126 = come_decrement_ref_count(node_126, ((struct sNode*)node_126)->finalize, ((struct sNode*)node_126)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__0;
        ((node_126) ? node_126 = come_decrement_ref_count(node_126, ((struct sNode*)node_126)->finalize, ((struct sNode*)node_126)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    else if(!is_type_name_flag) {
        _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "12var.nc", 1177, "struct sNode");
        _inf_obj_value9=(struct sLoadNode*)come_increment_ref_count(((struct sLoadNode*)(__right_value2=sLoadNode_initialize((struct sLoadNode*)come_increment_ref_count((struct sLoadNode*)come_calloc(1, sizeof(struct sLoadNode)*(1), "12var.nc", 1177, "struct sLoadNode*")),(char*)come_increment_ref_count(__builtin_string(buf)),info))));
        _inf_value9->_protocol_obj=_inf_obj_value9;
        _inf_value9->finalize=(void*)sLoadNode_finalize;
        _inf_value9->clone=(void*)sLoadNode_clone;
        _inf_value9->compile=(void*)sLoadNode_compile;
        _inf_value9->sline=(void*)sNodeBase_sline;
        _inf_value9->sline_real=(void*)sNodeBase_sline_real;
        _inf_value9->sname=(void*)sNodeBase_sname;
        _inf_value9->terminated=(void*)sLoadNode_terminated;
        _inf_value9->kind=(void*)sLoadNode_kind;
        _inf_value9->no_mutex=(void*)sNodeBase_no_mutex;
        node_127=(struct sNode*)come_increment_ref_count(_inf_value9);
        come_call_finalizer(sLoadNode_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        __dec_obj146=node_127,
        node_127=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_127),info));
        (__dec_obj146 ? __dec_obj146 = come_decrement_ref_count(__dec_obj146, ((struct sNode*)__dec_obj146)->finalize, ((struct sNode*)__dec_obj146)->_protocol_obj, 0,0, (void*)0) :0);
        info->sline_real=sline_real;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(node_127);
        ((node_127) ? node_127 = come_decrement_ref_count(node_127, ((struct sNode*)node_127)->finalize, ((struct sNode*)node_127)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__0;
        ((node_127) ? node_127 = come_decrement_ref_count(node_127, ((struct sNode*)node_127)->finalize, ((struct sNode*)node_127)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    else {
        info->p=head;
        info->sline=head_sline;
        if(xisalpha(*info->p)||*info->p==95) {
            __dec_obj147=word,
            word=(char*)come_increment_ref_count(parse_word(0,info));
            __dec_obj147 = come_decrement_ref_count(__dec_obj147, (void*)0, (void*)0, 0,0, (void*)0);
        }
        else {
            __dec_obj148=word,
            word=(char*)come_increment_ref_count(__builtin_string(""));
            __dec_obj148 = come_decrement_ref_count(__dec_obj148, (void*)0, (void*)0, 0,0, (void*)0);
        }
        is_type_name_flag_128=is_type_name(word,info);
        info->p=head;
        info->sline=head_sline;
        if(is_type_name_flag_128) {
            skip_spaces_and_lf(info);
            multiple_assign_var9=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=parse_type(info,1,1,0)));
            type_129=(struct sType*)come_increment_ref_count(multiple_assign_var9->v1);
            name_130=(char*)come_increment_ref_count(multiple_assign_var9->v2);
            err_131=multiple_assign_var9->v3;
            come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            skip_spaces_and_lf(info);
            if(!err_131) {
                printf("%s %d: parse_type failed\n",info->sname,info->sline);
                exit(2);
            }
            skip_spaces_and_lf(info);
            if(*info->p==61&&*(info->p+1)!=61&&*(info->p+1)!=62&&info->no_assign) {
                _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "12var.nc", 1214, "struct sNode");
                _inf_obj_value10=(struct sLoadNode*)come_increment_ref_count(((struct sLoadNode*)(__right_value1=sLoadNode_initialize((struct sLoadNode*)come_increment_ref_count((struct sLoadNode*)come_calloc(1, sizeof(struct sLoadNode)*(1), "12var.nc", 1214, "struct sLoadNode*")),(char*)come_increment_ref_count(name_130),info))));
                _inf_value10->_protocol_obj=_inf_obj_value10;
                _inf_value10->finalize=(void*)sLoadNode_finalize;
                _inf_value10->clone=(void*)sLoadNode_clone;
                _inf_value10->compile=(void*)sLoadNode_compile;
                _inf_value10->sline=(void*)sNodeBase_sline;
                _inf_value10->sline_real=(void*)sNodeBase_sline_real;
                _inf_value10->sname=(void*)sNodeBase_sname;
                _inf_value10->terminated=(void*)sLoadNode_terminated;
                _inf_value10->kind=(void*)sLoadNode_kind;
                _inf_value10->no_mutex=(void*)sNodeBase_no_mutex;
                node_132=(struct sNode*)come_increment_ref_count(_inf_value10);
                come_call_finalizer(sLoadNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                info->sline_real=sline_real;
                __result_obj__0 = (struct sNode*)come_increment_ref_count(node_132);
                ((node_132) ? node_132 = come_decrement_ref_count(node_132, ((struct sNode*)node_132)->finalize, ((struct sNode*)node_132)->_protocol_obj, 0, 1,(void*)0):(void*)0);
                come_call_finalizer(sType_finalize, type_129, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (name_130 = come_decrement_ref_count(name_130, (void*)0, (void*)0, 0, 0, (void*)0));
                (word = come_decrement_ref_count(word, (void*)0, (void*)0, 0, 0, (void*)0));
                ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
                return __result_obj__0;
                ((node_132) ? node_132 = come_decrement_ref_count(node_132, ((struct sNode*)node_132)->finalize, ((struct sNode*)node_132)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            }
            else if(*info->p==61&&*(info->p+1)!=61&&*(info->p+1)!=62&&!info->no_assign) {
                info->p++;
                skip_spaces_and_lf(info);
                right_value_133=((void*)0);
                if((type_129->mClass->mStruct||type_129->mClass->mUnion)&&list$1sNode$ph_length(type_129->mArrayNum)==0) {
                    info->array_initializer=1;
                    no_comma_134=info->no_comma;
                    info->no_comma=1;
                    __dec_obj149=right_value_133,
                    right_value_133=(struct sNode*)come_increment_ref_count(expression_v13(info,0));
                    (__dec_obj149 ? __dec_obj149 = come_decrement_ref_count(__dec_obj149, ((struct sNode*)__dec_obj149)->finalize, ((struct sNode*)__dec_obj149)->_protocol_obj, 0,0, (void*)0) :0);
                    info->no_comma=no_comma_134;
                    info->array_initializer=0;
                }
                else if(list$1sNode$ph_length(type_129->mArrayNum)>0||type_129->mArrayPointerType) {
                    info->array_initializer=1;
                    skip_spaces_and_lf(info);
                    __dec_obj150=right_value_133,
                    right_value_133=(struct sNode*)come_increment_ref_count(expression_v13(info,0));
                    (__dec_obj150 ? __dec_obj150 = come_decrement_ref_count(__dec_obj150, ((struct sNode*)__dec_obj150)->finalize, ((struct sNode*)__dec_obj150)->_protocol_obj, 0,0, (void*)0) :0);
                    skip_spaces_and_lf(info);
                    info->array_initializer=0;
                }
                else {
                    skip_spaces_and_lf(info);
                    __dec_obj151=right_value_133,
                    right_value_133=(struct sNode*)come_increment_ref_count(expression_v13(info,0));
                    (__dec_obj151 ? __dec_obj151 = come_decrement_ref_count(__dec_obj151, ((struct sNode*)__dec_obj151)->finalize, ((struct sNode*)__dec_obj151)->_protocol_obj, 0,0, (void*)0) :0);
                    skip_spaces_and_lf(info);
                }
                __dec_obj152=right_value_133,
                right_value_133=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(right_value_133),info));
                (__dec_obj152 ? __dec_obj152 = come_decrement_ref_count(__dec_obj152, ((struct sNode*)__dec_obj152)->finalize, ((struct sNode*)__dec_obj152)->_protocol_obj, 0,0, (void*)0) :0);
                _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "12var.nc", 1247, "struct sNode");
                _inf_obj_value11=(struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(__right_value1=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count((struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "12var.nc", 1247, "struct sStoreNode*")),(char*)come_increment_ref_count(name_130),((void*)0),((void*)0),type_129,1,right_value_133,info,(char*)come_increment_ref_count(xsprintf(""))))));
                _inf_value11->_protocol_obj=_inf_obj_value11;
                _inf_value11->finalize=(void*)sStoreNode_finalize;
                _inf_value11->clone=(void*)sStoreNode_clone;
                _inf_value11->compile=(void*)sStoreNode_compile;
                _inf_value11->sline=(void*)sNodeBase_sline;
                _inf_value11->sline_real=(void*)sNodeBase_sline_real;
                _inf_value11->sname=(void*)sNodeBase_sname;
                _inf_value11->terminated=(void*)sNodeBase_terminated;
                _inf_value11->kind=(void*)sStoreNode_kind;
                _inf_value11->no_mutex=(void*)sNodeBase_no_mutex;
                node_135=(struct sNode*)come_increment_ref_count(_inf_value11);
                come_call_finalizer(sStoreNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                info->sline_real=sline_real;
                __result_obj__0 = (struct sNode*)come_increment_ref_count(node_135);
                ((right_value_133) ? right_value_133 = come_decrement_ref_count(right_value_133, ((struct sNode*)right_value_133)->finalize, ((struct sNode*)right_value_133)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                ((node_135) ? node_135 = come_decrement_ref_count(node_135, ((struct sNode*)node_135)->finalize, ((struct sNode*)node_135)->_protocol_obj, 0, 1,(void*)0):(void*)0);
                come_call_finalizer(sType_finalize, type_129, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (name_130 = come_decrement_ref_count(name_130, (void*)0, (void*)0, 0, 0, (void*)0));
                (word = come_decrement_ref_count(word, (void*)0, (void*)0, 0, 0, (void*)0));
                ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
                return __result_obj__0;
                ((right_value_133) ? right_value_133 = come_decrement_ref_count(right_value_133, ((struct sNode*)right_value_133)->finalize, ((struct sNode*)right_value_133)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                ((node_135) ? node_135 = come_decrement_ref_count(node_135, ((struct sNode*)node_135)->finalize, ((struct sNode*)node_135)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            }
            else {
                _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "12var.nc", 1252, "struct sNode");
                _inf_obj_value12=(struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(__right_value1=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count((struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "12var.nc", 1252, "struct sStoreNode*")),(char*)come_increment_ref_count(name_130),((void*)0),((void*)0),type_129,1,((void*)0),info,(char*)come_increment_ref_count(xsprintf(""))))));
                _inf_value12->_protocol_obj=_inf_obj_value12;
                _inf_value12->finalize=(void*)sStoreNode_finalize;
                _inf_value12->clone=(void*)sStoreNode_clone;
                _inf_value12->compile=(void*)sStoreNode_compile;
                _inf_value12->sline=(void*)sNodeBase_sline;
                _inf_value12->sline_real=(void*)sNodeBase_sline_real;
                _inf_value12->sname=(void*)sNodeBase_sname;
                _inf_value12->terminated=(void*)sNodeBase_terminated;
                _inf_value12->kind=(void*)sStoreNode_kind;
                _inf_value12->no_mutex=(void*)sNodeBase_no_mutex;
                node_136=(struct sNode*)come_increment_ref_count(_inf_value12);
                come_call_finalizer(sStoreNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                info->sline_real=sline_real;
                __result_obj__0 = (struct sNode*)come_increment_ref_count(node_136);
                ((node_136) ? node_136 = come_decrement_ref_count(node_136, ((struct sNode*)node_136)->finalize, ((struct sNode*)node_136)->_protocol_obj, 0, 1,(void*)0):(void*)0);
                come_call_finalizer(sType_finalize, type_129, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (name_130 = come_decrement_ref_count(name_130, (void*)0, (void*)0, 0, 0, (void*)0));
                (word = come_decrement_ref_count(word, (void*)0, (void*)0, 0, 0, (void*)0));
                ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
                return __result_obj__0;
                ((node_136) ? node_136 = come_decrement_ref_count(node_136, ((struct sNode*)node_136)->finalize, ((struct sNode*)node_136)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            }
            come_call_finalizer(sType_finalize, type_129, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (name_130 = come_decrement_ref_count(name_130, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        (word = come_decrement_ref_count(word, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    err_msg(info,"unexpected word(%s)(1)",buf);
    exit(2);
}

static void tuple3$3sType$phchar$ph_Bool$$p_finalize(struct tuple3$3sType$phchar$ph_Bool$* self)
{
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

static void tuple2$2sType$phchar$ph$p_finalize(struct tuple2$2sType$phchar$ph* self)
{
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

static struct sNewChannel* sNewChannel_clone(struct sNewChannel* self)
{
    struct sNewChannel* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sNewChannel* result  ;
    char* __dec_obj131  ;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        return __result_obj__0;
    }
    result=(struct sNewChannel*)come_increment_ref_count((struct sNewChannel*)come_calloc(1, sizeof(struct sNewChannel)*(1), "sNewChannel_clone", 3, "struct sNewChannel*"));
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj131=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sNewChannel_clone", 5, "char*"));
        __dec_obj131 = come_decrement_ref_count(__dec_obj131, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    __result_obj__0 = result;
    come_call_finalizer(sNewChannel_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct list$1tuple3$3sType$phchar$phsNode$ph$ph* list$1tuple3$3sType$phchar$phsNode$ph$ph_push_back(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self, struct tuple3$3sType$phchar$phsNode$ph* item)
{
    struct list$1tuple3$3sType$phchar$phsNode$ph$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* litem;
    struct tuple3$3sType$phchar$phsNode$ph* __dec_obj132;
    struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* litem_106;
    struct tuple3$3sType$phchar$phsNode$ph* __dec_obj133;
    struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* litem_107;
    struct tuple3$3sType$phchar$phsNode$ph* __dec_obj134;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        come_call_finalizer(tuple3$3sType$phchar$phsNode$ph$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph)*(1), "/usr/local/include/neo-c.h", 1041, "struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj132=litem->item,
        litem->item=(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple3$3sType$phchar$phsNode$ph_finalize, __dec_obj132,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        litem_106=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph)*(1), "/usr/local/include/neo-c.h", 1051, "struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*"))));
        litem_106->prev=self->head;
        litem_106->next=((void*)0);
        __dec_obj133=litem_106->item,
        litem_106->item=(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple3$3sType$phchar$phsNode$ph_finalize, __dec_obj133,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem_106;
        self->head->next=litem_106;
    }
    else {
        litem_107=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph)*(1), "/usr/local/include/neo-c.h", 1061, "struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*"))));
        litem_107->prev=self->tail;
        litem_107->next=((void*)0);
        __dec_obj134=litem_107->item,
        litem_107->item=(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple3$3sType$phchar$phsNode$ph_finalize, __dec_obj134,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail->next=litem_107;
        self->tail=litem_107;
    }
    self->len++;
    __result_obj__0 = self;
    come_call_finalizer(tuple3$3sType$phchar$phsNode$ph$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__0;
}

static struct tuple3$3sType$phchar$phsNode$ph* tuple3$3sType$phchar$phsNode$ph_initialize(struct tuple3$3sType$phchar$phsNode$ph* self, struct sType* v1  , char* v2  , struct sNode* v3)
{
    struct sType* __dec_obj135  ;
    char* __dec_obj136  ;
    struct sNode* __dec_obj137;
    struct tuple3$3sType$phchar$phsNode$ph* __result_obj__0;
    __dec_obj135=self->v1,
    self->v1=(struct sType*)come_increment_ref_count(v1);
    come_call_finalizer(sType_finalize, __dec_obj135,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj136=self->v2,
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj136 = come_decrement_ref_count(__dec_obj136, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj137=self->v3,
    self->v3=(struct sNode*)come_increment_ref_count(v3);
    (__dec_obj137 ? __dec_obj137 = come_decrement_ref_count(__dec_obj137, ((struct sNode*)__dec_obj137)->finalize, ((struct sNode*)__dec_obj137)->_protocol_obj, 0,0, (void*)0) :0);
    __result_obj__0 = (struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(self);
    come_call_finalizer(tuple3$3sType$phchar$phsNode$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sType_finalize, v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0, 0, (void*)0));
    ((v3) ? v3 = come_decrement_ref_count(v3, ((struct sNode*)v3)->finalize, ((struct sNode*)v3)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(tuple3$3sType$phchar$phsNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph_add(struct list$1tuple2$2char$phsType$ph$ph* self, struct tuple2$2char$phsType$ph* item)
{
    struct list$1tuple2$2char$phsType$ph$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1tuple2$2char$phsType$ph$ph* litem;
    struct tuple2$2char$phsType$ph* __dec_obj139;
    struct list_item$1tuple2$2char$phsType$ph$ph* litem_120;
    struct tuple2$2char$phsType$ph* __dec_obj140;
    struct list_item$1tuple2$2char$phsType$ph$ph* litem_121;
    struct tuple2$2char$phsType$ph* __dec_obj141;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "/usr/local/include/neo-c.h", 956, "struct list_item$1tuple2$2char$phsType$ph$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj139=litem->item,
        litem->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __dec_obj139,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        litem_120=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "/usr/local/include/neo-c.h", 966, "struct list_item$1tuple2$2char$phsType$ph$ph*"))));
        litem_120->prev=self->head;
        litem_120->next=((void*)0);
        __dec_obj140=litem_120->item,
        litem_120->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __dec_obj140,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem_120;
        self->head->next=litem_120;
    }
    else {
        litem_121=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "/usr/local/include/neo-c.h", 976, "struct list_item$1tuple2$2char$phsType$ph$ph*"))));
        litem_121->prev=self->tail;
        litem_121->next=((void*)0);
        __dec_obj141=litem_121->item,
        litem_121->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __dec_obj141,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail->next=litem_121;
        self->tail=litem_121;
    }
    self->len++;
    __result_obj__0 = self;
    come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__0;
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

static struct tuple2$2char$phsType$ph* tuple2$2char$phsType$ph_initialize(struct tuple2$2char$phsType$ph* self, char* v1  , struct sType* v2  )
{
    char* __dec_obj142  ;
    struct sType* __dec_obj143  ;
    struct tuple2$2char$phsType$ph* __result_obj__0;
    __dec_obj142=self->v1,
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj142 = come_decrement_ref_count(__dec_obj142, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj143=self->v2,
    self->v2=(struct sType*)come_increment_ref_count(v2);
    come_call_finalizer(sType_finalize, __dec_obj143,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __result_obj__0 = (struct tuple2$2char$phsType$ph*)come_increment_ref_count(self);
    come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sType_finalize, v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

struct sNode* expression_node_v95(struct sInfo* info  )
{
    struct sNode* node;
    void* __right_value0 = (void*)0;
    struct sNode* exp;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value13;
    struct sReadChannelNode* _inf_obj_value13;
    void* __right_value2 = (void*)0;
    struct sNode* __result_obj__0;
    struct sNode* __dec_obj155;
    memset(&node, 0, sizeof(node));
    skip_spaces_and_lf(info);
    if(strncmp(info->p,"<-",strlen("<-"))==0) {
        info->p+=strlen("<-");
        skip_spaces_and_lf(info);
        exp=(struct sNode*)come_increment_ref_count(expression_v13(info,0));
        skip_spaces_and_lf(info);
        _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "12var.nc", 1276, "struct sNode");
        _inf_obj_value13=(struct sReadChannelNode*)come_increment_ref_count(((struct sReadChannelNode*)(__right_value1=sReadChannelNode_initialize((struct sReadChannelNode*)come_increment_ref_count((struct sReadChannelNode*)come_calloc(1, sizeof(struct sReadChannelNode)*(1), "12var.nc", 1276, "struct sReadChannelNode*")),(struct sNode*)come_increment_ref_count(exp),info))));
        _inf_value13->_protocol_obj=_inf_obj_value13;
        _inf_value13->finalize=(void*)sReadChannelNode_finalize;
        _inf_value13->clone=(void*)sReadChannelNode_clone;
        _inf_value13->compile=(void*)sReadChannelNode_compile;
        _inf_value13->sline=(void*)sNodeBase_sline;
        _inf_value13->sline_real=(void*)sNodeBase_sline_real;
        _inf_value13->sname=(void*)sNodeBase_sname;
        _inf_value13->terminated=(void*)sNodeBase_terminated;
        _inf_value13->kind=(void*)sReadChannelNode_kind;
        _inf_value13->no_mutex=(void*)sNodeBase_no_mutex;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value13)));
        ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(sReadChannelNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__0;
        ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    else {
        __dec_obj155=node,
        node=(struct sNode*)come_increment_ref_count(expression_node_v1(info));
        (__dec_obj155 ? __dec_obj155 = come_decrement_ref_count(__dec_obj155, ((struct sNode*)__dec_obj155)->finalize, ((struct sNode*)__dec_obj155)->_protocol_obj, 0,0, (void*)0) :0);
    }
    __result_obj__0 = (struct sNode*)come_increment_ref_count(node);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    return __result_obj__0;
}

static struct sReadChannelNode* sReadChannelNode_clone(struct sReadChannelNode* self)
{
    struct sReadChannelNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sReadChannelNode* result  ;
    char* __dec_obj153  ;
    struct sNode* __dec_obj154;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        return __result_obj__0;
    }
    result=(struct sReadChannelNode*)come_increment_ref_count((struct sReadChannelNode*)come_calloc(1, sizeof(struct sReadChannelNode)*(1), "sReadChannelNode_clone", 3, "struct sReadChannelNode*"));
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj153=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sReadChannelNode_clone", 5, "char*"));
        __dec_obj153 = come_decrement_ref_count(__dec_obj153, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->exp!=((void*)0)) {
        __dec_obj154=result->exp,
        result->exp=(struct sNode*)come_increment_ref_count(sNode_clone(self->exp));
        (__dec_obj154 ? __dec_obj154 = come_decrement_ref_count(__dec_obj154, ((struct sNode*)__dec_obj154)->finalize, ((struct sNode*)__dec_obj154)->_protocol_obj, 0,0, (void*)0) :0);
    }
    __result_obj__0 = result;
    come_call_finalizer(sReadChannelNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

struct sNode* post_position_operator_v7(struct sNode* node, struct sInfo* info  )
{
    void* __right_value0 = (void*)0;
    struct sNode* right_value;
    struct sNode* __dec_obj156;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value14;
    struct sWriteChannelNode* _inf_obj_value14;
    void* __right_value2 = (void*)0;
    struct sNode* __result_obj__0;
    if(!node->terminated(node->_protocol_obj)&&strncmp(info->p,"<-",strlen("<-"))==0) {
        info->p+=2;
        skip_spaces_and_lf(info);
        right_value=(struct sNode*)come_increment_ref_count(expression_v13(info,0));
        skip_spaces_and_lf(info);
        __dec_obj156=right_value,
        right_value=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(right_value),info));
        (__dec_obj156 ? __dec_obj156 = come_decrement_ref_count(__dec_obj156, ((struct sNode*)__dec_obj156)->finalize, ((struct sNode*)__dec_obj156)->_protocol_obj, 0,0, (void*)0) :0);
        skip_spaces_and_lf(info);
        _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "12var.nc", 1298, "struct sNode");
        _inf_obj_value14=(struct sWriteChannelNode*)come_increment_ref_count(((struct sWriteChannelNode*)(__right_value1=sWriteChannelNode_initialize((struct sWriteChannelNode*)come_increment_ref_count((struct sWriteChannelNode*)come_calloc(1, sizeof(struct sWriteChannelNode)*(1), "12var.nc", 1298, "struct sWriteChannelNode*")),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_value),info))));
        _inf_value14->_protocol_obj=_inf_obj_value14;
        _inf_value14->finalize=(void*)sWriteChannelNode_finalize;
        _inf_value14->clone=(void*)sWriteChannelNode_clone;
        _inf_value14->compile=(void*)sWriteChannelNode_compile;
        _inf_value14->sline=(void*)sNodeBase_sline;
        _inf_value14->sline_real=(void*)sNodeBase_sline_real;
        _inf_value14->sname=(void*)sNodeBase_sname;
        _inf_value14->terminated=(void*)sNodeBase_terminated;
        _inf_value14->kind=(void*)sWriteChannelNode_kind;
        _inf_value14->no_mutex=(void*)sNodeBase_no_mutex;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value14)));
        ((right_value) ? right_value = come_decrement_ref_count(right_value, ((struct sNode*)right_value)->finalize, ((struct sNode*)right_value)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(sWriteChannelNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__0;
        ((right_value) ? right_value = come_decrement_ref_count(right_value, ((struct sNode*)right_value)->finalize, ((struct sNode*)right_value)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=post_position_operator((struct sNode*)come_increment_ref_count(node),info))));
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0):(void*)0);
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    return __result_obj__0;
}

static struct sWriteChannelNode* sWriteChannelNode_clone(struct sWriteChannelNode* self)
{
    struct sWriteChannelNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sWriteChannelNode* result  ;
    char* __dec_obj157  ;
    struct sNode* __dec_obj158;
    struct sNode* __dec_obj159;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        return __result_obj__0;
    }
    result=(struct sWriteChannelNode*)come_increment_ref_count((struct sWriteChannelNode*)come_calloc(1, sizeof(struct sWriteChannelNode)*(1), "sWriteChannelNode_clone", 3, "struct sWriteChannelNode*"));
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj157=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sWriteChannelNode_clone", 5, "char*"));
        __dec_obj157 = come_decrement_ref_count(__dec_obj157, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->exp!=((void*)0)) {
        __dec_obj158=result->exp,
        result->exp=(struct sNode*)come_increment_ref_count(sNode_clone(self->exp));
        (__dec_obj158 ? __dec_obj158 = come_decrement_ref_count(__dec_obj158, ((struct sNode*)__dec_obj158)->finalize, ((struct sNode*)__dec_obj158)->_protocol_obj, 0,0, (void*)0) :0);
    }
    if(self!=((void*)0)&&self->right_value!=((void*)0)) {
        __dec_obj159=result->right_value,
        result->right_value=(struct sNode*)come_increment_ref_count(sNode_clone(self->right_value));
        (__dec_obj159 ? __dec_obj159 = come_decrement_ref_count(__dec_obj159, ((struct sNode*)__dec_obj159)->finalize, ((struct sNode*)__dec_obj159)->_protocol_obj, 0,0, (void*)0) :0);
    }
    __result_obj__0 = result;
    come_call_finalizer(sWriteChannelNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

