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

struct sUnionNode
{
    int sline;
    char* sname  ;
    int sline_real;
    char* name  ;
    struct sClass* klass  ;
    _Bool anonymous;
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
_Bool check_assign_type(char* msg, struct sType* left_type  , struct sType* right_type  , struct CVALUE* come_value  , struct sInfo* info  );
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
static void output_union(struct sClass* klass  , struct sInfo* info  , _Bool anonymous);
static int list$1tuple2$2char$phsType$ph$ph_length(struct list$1tuple2$2char$phsType$ph$ph* self);
static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_begin(struct list$1tuple2$2char$phsType$ph$ph* self);
static _Bool list$1tuple2$2char$phsType$ph$ph_end(struct list$1tuple2$2char$phsType$ph$ph* self);
static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_next(struct list$1tuple2$2char$phsType$ph$ph* self);
static struct sType* map$2char$phsType$ph$p_operator_load_element(struct map$2char$phsType$ph* self, char* key  );
static void sType_finalize(struct sType* self  );
static void list$1sType$ph$p_finalize(struct list$1sType$ph* self);
static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self);
static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self);
static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self);
static void list$1int$$p_finalize(struct list$1int$* self);
static void list_item$1int$$p_finalize(struct list_item$1int$* self);
static void list$1char$ph$p_finalize(struct list$1char$ph* self);
static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self);
static struct sType* map$2char$phsType$ph_operator_load_element(struct map$2char$phsType$ph* self, char* key  );
static struct map$2char$phsType$ph* map$2char$phsType$ph_insert(struct map$2char$phsType$ph* self, char* key  , struct sType* item  , _Bool by_pointer);
static void map$2char$phsType$ph_rehash(struct map$2char$phsType$ph* self);
static char* map$2char$phsType$ph_begin(struct map$2char$phsType$ph* self);
static _Bool map$2char$phsType$ph_end(struct map$2char$phsType$ph* self);
static char* map$2char$phsType$ph_next(struct map$2char$phsType$ph* self);
static struct sType* map$2char$phsType$ph_at(struct map$2char$phsType$ph* self, char* key  , struct sType* default_value  , _Bool by_pointer);
static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char* item  , _Bool by_pointer);
static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail);
static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self);
static char* list$1char$ph_begin(struct list$1char$ph* self);
static _Bool list$1char$ph_end(struct list$1char$ph* self);
static char* list$1char$ph_next(struct list$1char$ph* self);
static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item  );
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
static struct map$2char$phbuffer$ph* map$2char$phbuffer$ph_remove(struct map$2char$phbuffer$ph* self, char* key  , _Bool by_pointer);
static void list$1tuple2$2char$phsType$ph$ph$p_finalize(struct list$1tuple2$2char$phsType$ph$ph* self);
static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self);
static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self);
static struct buffer* map$2char$phbuffer$ph$p_operator_load_element(struct map$2char$phbuffer$ph* self, char* key  );
static struct buffer* map$2char$phbuffer$ph_operator_load_element(struct map$2char$phbuffer$ph* self, char* key  );
static struct map$2char$phbuffer$ph* map$2char$phbuffer$ph_insert(struct map$2char$phbuffer$ph* self, char* key  , struct buffer* item  , _Bool by_pointer);
static void map$2char$phbuffer$ph_rehash(struct map$2char$phbuffer$ph* self);
static char* map$2char$phbuffer$ph_begin(struct map$2char$phbuffer$ph* self);
static _Bool map$2char$phbuffer$ph_end(struct map$2char$phbuffer$ph* self);
static char* map$2char$phbuffer$ph_next(struct map$2char$phbuffer$ph* self);
static struct buffer* map$2char$phbuffer$ph_at(struct map$2char$phbuffer$ph* self, char* key  , struct buffer* default_value  , _Bool by_pointer);
struct sUnionNode* sUnionNode_initialize(struct sUnionNode* self, char* name  , struct sClass* klass  , struct sInfo* info  , _Bool anonymous);
_Bool sUnionNode_terminated(struct sUnionNode* self);
char* sUnionNode_kind(struct sUnionNode* self);
_Bool sUnionNode_compile(struct sUnionNode* self, struct sInfo* info  );
static void sNodeBase_finalize(struct sNodeBase* self);
static void sUnionNode_finalize(struct sUnionNode* self);
struct sNode* parse_union(char* type_name  , char* union_attribute  , struct sInfo* info  , _Bool anonymous);
static struct sClass* map$2char$phsClass$ph_at(struct map$2char$phsClass$ph* self, char* key  , struct sClass* default_value  , _Bool by_pointer);
static void sClass_finalize(struct sClass* self  );
static struct map$2char$phsClass$ph* map$2char$phsClass$ph_insert(struct map$2char$phsClass$ph* self, char* key  , struct sClass* item  , _Bool by_pointer);
static void map$2char$phsClass$ph_rehash(struct map$2char$phsClass$ph* self);
static char* map$2char$phsClass$ph_begin(struct map$2char$phsClass$ph* self);
static _Bool map$2char$phsClass$ph_end(struct map$2char$phsClass$ph* self);
static char* map$2char$phsClass$ph_next(struct map$2char$phsClass$ph* self);
static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph_reset(struct list$1tuple2$2char$phsType$ph$ph* self);
static void tuple3$3sType$phchar$ph_Bool$$p_finalize(struct tuple3$3sType$phchar$ph_Bool$* self);
static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph_push_back(struct list$1tuple2$2char$phsType$ph$ph* self, struct tuple2$2char$phsType$ph* item);
static struct tuple2$2char$phsType$ph* tuple2$2char$phsType$ph_initialize(struct tuple2$2char$phsType$ph* self, char* v1  , struct sType* v2  );
static struct sUnionNode* sUnionNode_clone(struct sUnionNode* self);
struct sNode* top_level_v97(char* buf, char* head, int head_sline, struct sInfo* info  );
struct sNode* string_node_v15(char* buf, char* head, int head_sline, struct sInfo* info  );
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
static void output_union(struct sClass* klass  , struct sInfo* info  , _Bool anonymous)
{
    char* name  ;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer* buf  ;
    _Bool existance_generics;
    _Bool named_child;
    struct list$1tuple2$2char$phsType$ph$ph* o2_saved;
    struct tuple2$2char$phsType$ph* it;
    struct tuple2$2char$phsType$ph* multiple_assign_var1
;    char* name_2  =0;
    struct sType* type  =0;
    struct sType* already_defined_child_type  ;
    void* __right_value2 = (void*)0;
    _Bool _conditional_value_X0;
    if(list$1tuple2$2char$phsType$ph$ph_length(klass->mFields)==0) {
        return;
    }
    name=(char*)come_increment_ref_count(klass->mName);
    buf=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20union.nc", 16, "struct buffer*"))));
    buffer_append_format(buf,"union %s\n{\n",klass->mName);
    existance_generics=0;
    named_child=0;
    for(o2_saved=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(klass->mFields),it=list$1tuple2$2char$phsType$ph$ph_begin(o2_saved);!list$1tuple2$2char$phsType$ph$ph_end(o2_saved);it=list$1tuple2$2char$phsType$ph$ph_next(o2_saved)){
        multiple_assign_var1=it;
        name_2=(char*)come_increment_ref_count(multiple_assign_var1->v1);
        type=(struct sType*)come_increment_ref_count(multiple_assign_var1->v2);
        if(type->mAnonymous) {
            child_output_struct(type,(char*)come_increment_ref_count(xsprintf("")),buf,&existance_generics,(char*)come_increment_ref_count(name_2),1,info,&named_child);
        }
        else if(type->mInnerStruct) {
            already_defined_child_type=(struct sType*)come_increment_ref_count(map$2char$phsType$ph_operator_load_element(info->named_child_struct,type->mInnerStructName));
            if(already_defined_child_type&&((already_defined_child_type->mClass->mStruct&&type->mClass->mStruct)||(already_defined_child_type->mClass->mUnion&&type->mClass->mUnion))) {
                buffer_append_str(buf,"    ");
                if(type->mClass->mStruct) {
                    buffer_append_str(buf,((char*)(__right_value0=charp_operator_add("struct ",type->mInnerStructName))));
                    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                }
                else {
                    buffer_append_str(buf,((char*)(__right_value0=charp_operator_add("union ",type->mInnerStructName))));
                    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                }
                buffer_append_str(buf,((char*)(__right_value0=charp_operator_add(" ",name_2))));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                buffer_append_str(buf,";\n");
            }
            else {
                map$2char$phsType$ph_insert(info->named_child_struct,(char*)come_increment_ref_count(__builtin_string(type->mInnerStructName)),(struct sType*)come_increment_ref_count(sType_clone(type)),0);
                map$2char$phbuffer$ph_remove(info->struct_definition,(char*)come_increment_ref_count(type->mInnerStructName),0);
                child_output_struct(type,(char*)come_increment_ref_count(type->mInnerStructName),buf,&existance_generics,(char*)come_increment_ref_count(name_2),1,info,&named_child);
            }
            named_child=1;
            come_call_finalizer(sType_finalize, already_defined_child_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            buffer_append_str(buf,((char*)(__right_value0=make_define_var(type,name_2,info,0,0))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            buffer_append_str(buf,";\n");
        }
        (name_2 = come_decrement_ref_count(name_2, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(klass->mAttribute==((void*)0)) {
        buffer_append_str(buf,"};\n");
    }
    else {
        buffer_append_format(buf,"} %s;\n",klass->mAttribute);
    }
    if(anonymous&&named_child) {
        (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return;
    }
    if(({(_conditional_value_X0=(((struct buffer*)(__right_value2=map$2char$phbuffer$ph_operator_load_element(info->struct_definition,((char*)(__right_value1=__builtin_string(name))))))==((void*)0)));    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
    come_call_finalizer(buffer_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
_conditional_value_X0;})) {
        map$2char$phbuffer$ph_insert(info->struct_definition,(char*)come_increment_ref_count(__builtin_string(name)),(struct buffer*)come_increment_ref_count(buffer_clone(buf)),0);
    }
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static int list$1tuple2$2char$phsType$ph$ph_length(struct list$1tuple2$2char$phsType$ph$ph* self)
{
    if(self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_begin(struct list$1tuple2$2char$phsType$ph$ph* self)
{
    struct tuple2$2char$phsType$ph* result;
    struct tuple2$2char$phsType$ph* __result_obj__0;
    struct tuple2$2char$phsType$ph* result_0;
    if(self==((void*)0)) {
        memset(&result,0,sizeof(struct tuple2$2char$phsType$ph*));
        __result_obj__0 = result;
        return __result_obj__0;
    }
    self->it=self->head;
    if(self->it) {
        __result_obj__0 = self->it->item;
        return __result_obj__0;
    }
    memset(&result_0,0,sizeof(struct tuple2$2char$phsType$ph*));
    __result_obj__0 = result_0;
    return __result_obj__0;
}

static _Bool list$1tuple2$2char$phsType$ph$ph_end(struct list$1tuple2$2char$phsType$ph$ph* self)
{
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_next(struct list$1tuple2$2char$phsType$ph$ph* self)
{
    struct tuple2$2char$phsType$ph* result;
    struct tuple2$2char$phsType$ph* __result_obj__0;
    struct tuple2$2char$phsType$ph* result_1;
    if(self==((void*)0)||self->it==((void*)0)) {
        memset(&result,0,sizeof(struct tuple2$2char$phsType$ph*));
        __result_obj__0 = result;
        return __result_obj__0;
    }
    self->it=self->it->next;
    if(self->it) {
        __result_obj__0 = self->it->item;
        return __result_obj__0;
    }
    memset(&result_1,0,sizeof(struct tuple2$2char$phsType$ph*));
    __result_obj__0 = result_1;
    return __result_obj__0;
}

static struct sType* map$2char$phsType$ph$p_operator_load_element(struct map$2char$phsType$ph* self, char* key  )
{
    struct sType* default_value  ;
    struct sType* __result_obj__0  ;
    unsigned int hash;
    unsigned int it;
    memset(&default_value,0,sizeof(struct sType*));
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

static struct sType* map$2char$phsType$ph_operator_load_element(struct map$2char$phsType$ph* self, char* key  )
{
    struct sType* default_value  ;
    struct sType* __result_obj__0  ;
    unsigned int hash;
    unsigned int it;
    memset(&default_value,0,sizeof(struct sType*));
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

static struct map$2char$phsType$ph* map$2char$phsType$ph_insert(struct map$2char$phsType$ph* self, char* key  , struct sType* item  , _Bool by_pointer)
{
    struct map$2char$phsType$ph* __result_obj__0;
    unsigned int hash;
    unsigned int it;
    _Bool same_key_exist;
    char* it2  ;
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
        if((!by_pointer&&string_equals(it2,key))||(by_pointer&&it2==key)) {
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
    char** keys  ;
    struct sType** items  ;
    _Bool* item_existance;
    int len;
    char* it  ;
    struct sType* default_value  ;
    struct sType* it2  ;
    unsigned int hash;
    int n;
    struct sType* default_value_5  ;
    size=self->size*10;
    keys=(char**)come_increment_ref_count(((char**)(__right_value0=(char**)come_calloc(1, sizeof(char*)*(1*(size)), "/usr/local/include/neo-c.h", 2207, "char**"))));
    items=(struct sType**)come_increment_ref_count(((struct sType**)(__right_value0=(struct sType**)come_calloc(1, sizeof(struct sType*)*(1*(size)), "/usr/local/include/neo-c.h", 2208, "struct sType**"))));
    item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value0=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size)), "/usr/local/include/neo-c.h", 2209, "_Bool*"))));
    len=0;
    for(it=map$2char$phsType$ph_begin(self);!map$2char$phsType$ph_end(self);it=map$2char$phsType$ph_next(self)){
        memset(&default_value,0,sizeof(struct sType*));
        it2=((struct sType*)(__right_value0=map$2char$phsType$ph_at(self,it,(struct sType*)come_increment_ref_count(default_value),0)));
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
                memset(&default_value_5,0,sizeof(struct sType*));
                items[n]=((struct sType*)(__right_value0=map$2char$phsType$ph_at(self,it,(struct sType*)come_increment_ref_count(default_value_5),0)));
                len++;
                come_call_finalizer(sType_finalize, default_value_5, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                come_call_finalizer(sType_finalize, default_value_5, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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

static char* map$2char$phsType$ph_begin(struct map$2char$phsType$ph* self)
{
    char* result  ;
    char* __result_obj__0  ;
    char* result_3  ;
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
    memset(&result_3,0,sizeof(char*));
    __result_obj__0 = result_3;
    return __result_obj__0;
}

static _Bool map$2char$phsType$ph_end(struct map$2char$phsType$ph* self)
{
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsType$ph_next(struct map$2char$phsType$ph* self)
{
    char* result  ;
    char* __result_obj__0  ;
    char* result_4  ;
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
    memset(&result_4,0,sizeof(char*));
    __result_obj__0 = result_4;
    return __result_obj__0;
}

static struct sType* map$2char$phsType$ph_at(struct map$2char$phsType$ph* self, char* key  , struct sType* default_value  , _Bool by_pointer)
{
    struct sType* __result_obj__0  ;
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
            if((!by_pointer&&string_equals(self->keys[it],key))||(by_pointer&&self->keys[it]==key)) {
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

static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char* item  , _Bool by_pointer)
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
        if((!by_pointer&&string_equals(it->item,item))||(by_pointer&&it->item==item)) {
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
    struct list_item$1char$ph* it_6;
    int i_7;
    struct list_item$1char$ph* prev_it_8;
    struct list_item$1char$ph* it_9;
    struct list_item$1char$ph* head_prev_it;
    struct list_item$1char$ph* tail_it;
    int i_10;
    struct list_item$1char$ph* prev_it_11;
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
        it_6=self->head;
        i_7=0;
        while(it_6!=((void*)0)) {
            if(i_7==head) {
                self->tail=it_6->prev;
                self->tail->next=((void*)0);
            }
            if(i_7>=head) {
                prev_it_8=it_6;
                it_6=it_6->next;
                i_7++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_8, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_6=it_6->next;
                i_7++;
            }
        }
    }
    else {
        it_9=self->head;
        head_prev_it=((void*)0);
        tail_it=((void*)0);
        i_10=0;
        while(it_9!=((void*)0)) {
            if(i_10==head) {
                head_prev_it=it_9->prev;
            }
            if(i_10==tail) {
                tail_it=it_9;
            }
            if(i_10>=head&&i_10<tail) {
                prev_it_11=it_9;
                it_9=it_9->next;
                i_10++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_11, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_9=it_9->next;
                i_10++;
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

static char* list$1char$ph_begin(struct list$1char$ph* self)
{
    char* result  ;
    char* __result_obj__0  ;
    char* result_12  ;
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
    memset(&result_12,0,sizeof(char*));
    __result_obj__0 = result_12;
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
    char* result_13  ;
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
    memset(&result_13,0,sizeof(char*));
    __result_obj__0 = result_13;
    return __result_obj__0;
}

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item  )
{
    struct list$1char$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1char$ph* litem;
    char* __dec_obj1  ;
    struct list_item$1char$ph* litem_14;
    char* __dec_obj2  ;
    struct list_item$1char$ph* litem_15;
    char* __dec_obj3  ;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0));
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 1041, "struct list_item$1char$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj1=litem->item,
        litem->item=(char*)come_increment_ref_count(item);
        __dec_obj1 = come_decrement_ref_count(__dec_obj1, (void*)0, (void*)0, 0,0, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        litem_14=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 1051, "struct list_item$1char$ph*"))));
        litem_14->prev=self->head;
        litem_14->next=((void*)0);
        __dec_obj2=litem_14->item,
        litem_14->item=(char*)come_increment_ref_count(item);
        __dec_obj2 = come_decrement_ref_count(__dec_obj2, (void*)0, (void*)0, 0,0, (void*)0);
        self->tail=litem_14;
        self->head->next=litem_14;
    }
    else {
        litem_15=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 1061, "struct list_item$1char$ph*"))));
        litem_15->prev=self->tail;
        litem_15->next=((void*)0);
        __dec_obj3=litem_15->item,
        litem_15->item=(char*)come_increment_ref_count(item);
        __dec_obj3 = come_decrement_ref_count(__dec_obj3, (void*)0, (void*)0, 0,0, (void*)0);
        self->tail->next=litem_15;
        self->tail=litem_15;
    }
    self->len++;
    __result_obj__0 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0));
    return __result_obj__0;
}

static struct sType* sType_clone(struct sType* self  )
{
    struct sType* __result_obj__0  ;
    void* __right_value0 = (void*)0;
    struct sType* result  ;
    struct sType* __dec_obj4  ;
    struct sType* __dec_obj5  ;
    struct list$1sType$ph* __dec_obj9;
    struct sType* __dec_obj10  ;
    struct sNode* __dec_obj11;
    struct sNode* __dec_obj12;
    char* __dec_obj13  ;
    char* __dec_obj14  ;
    char* __dec_obj15  ;
    char* __dec_obj16  ;
    char* __dec_obj17  ;
    char* __dec_obj18  ;
    struct list$1sNode$ph* __dec_obj22;
    struct list$1sNode$ph* __dec_obj23;
    struct list$1int$* __dec_obj24;
    struct list$1int$* __dec_obj25;
    struct sType* __dec_obj26  ;
    char* __dec_obj27  ;
    struct list$1sType$ph* __dec_obj28;
    struct list$1char$ph* __dec_obj32;
    struct sType* __dec_obj33  ;
    struct sNode* __dec_obj34;
    if(self==(void*)0) {
        __result_obj__0 = (struct sType*)come_increment_ref_count((void*)0);
        come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    result=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType*"));
    if(self!=((void*)0)) {
        result->mClass=self->mClass;
    }
    if(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj4=result->mOriginalLoadVarType,
        result->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(sType_clone(self->mOriginalLoadVarType));
        come_call_finalizer(sType_finalize, __dec_obj4,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj5=result->mChannelType,
        result->mChannelType=(struct sType*)come_increment_ref_count(sType_clone(self->mChannelType));
        come_call_finalizer(sType_finalize, __dec_obj5,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj9=result->mGenericsTypes,
        result->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mGenericsTypes));
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj9,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj10=result->mNoSolvedGenericsType,
        result->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(sType_clone(self->mNoSolvedGenericsType));
        come_call_finalizer(sType_finalize, __dec_obj10,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj11=result->mSizeNum,
        result->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        (__dec_obj11 ? __dec_obj11 = come_decrement_ref_count(__dec_obj11, ((struct sNode*)__dec_obj11)->finalize, ((struct sNode*)__dec_obj11)->_protocol_obj, 0,0, (void*)0) :0);
    }
    if(self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj12=result->mAlignas,
        result->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        (__dec_obj12 ? __dec_obj12 = come_decrement_ref_count(__dec_obj12, ((struct sNode*)__dec_obj12)->finalize, ((struct sNode*)__dec_obj12)->_protocol_obj, 0,0, (void*)0) :0);
    }
    if(self!=((void*)0)) {
        result->mAlignasDouble=self->mAlignasDouble;
    }
    if(self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj13=result->mTupleName,
        result->mTupleName=(char*)come_increment_ref_count((char*)come_memdup(self->mTupleName, "sType_clone", 12, "char*"));
        __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj14=result->mAttribute,
        result->mAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mAttribute, "sType_clone", 13, "char*"));
        __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->mVarAttribute!=((void*)0)) {
        __dec_obj15=result->mVarAttribute,
        result->mVarAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mVarAttribute, "sType_clone", 14, "char*"));
        __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0,0, (void*)0);
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
        __dec_obj16=result->mAnonymousName,
        result->mAnonymousName=(char*)come_increment_ref_count((char*)come_memdup(self->mAnonymousName, "sType_clone", 39, "char*"));
        __dec_obj16 = come_decrement_ref_count(__dec_obj16, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result->mInnerStruct=self->mInnerStruct;
    }
    if(self!=((void*)0)&&self->mInnerStructName!=((void*)0)) {
        __dec_obj17=result->mInnerStructName,
        result->mInnerStructName=(char*)come_increment_ref_count((char*)come_memdup(self->mInnerStructName, "sType_clone", 41, "char*"));
        __dec_obj17 = come_decrement_ref_count(__dec_obj17, (void*)0, (void*)0, 0,0, (void*)0);
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
        __dec_obj18=result->mAsmName,
        result->mAsmName=(char*)come_increment_ref_count((char*)come_memdup(self->mAsmName, "sType_clone", 46, "char*"));
        __dec_obj18 = come_decrement_ref_count(__dec_obj18, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result->mTypedef=self->mTypedef;
    }
    if(self!=((void*)0)) {
        result->mMultipleTypes=self->mMultipleTypes;
    }
    if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj22=result->mArrayNum,
        result->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mArrayNum));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj22,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mVarNameArrayNum!=((void*)0)) {
        __dec_obj23=result->mVarNameArrayNum,
        result->mVarNameArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mVarNameArrayNum));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj23,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mArrayStatic!=((void*)0)) {
        __dec_obj24=result->mArrayStatic,
        result->mArrayStatic=(struct list$1int$*)come_increment_ref_count(list$1int$$p_clone(self->mArrayStatic));
        come_call_finalizer(list$1int$_finalize, __dec_obj24,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mArrayRestrict!=((void*)0)) {
        __dec_obj25=result->mArrayRestrict,
        result->mArrayRestrict=(struct list$1int$*)come_increment_ref_count(list$1int$$p_clone(self->mArrayRestrict));
        come_call_finalizer(list$1int$_finalize, __dec_obj25,(void*)0, (void*)0, 0, 0, 0, (void*)0);
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
        __dec_obj26=result->mTypedefOriginalType,
        result->mTypedefOriginalType=(struct sType*)come_increment_ref_count(sType_clone(self->mTypedefOriginalType));
        come_call_finalizer(sType_finalize, __dec_obj26,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj27=result->mOriginalTypeName,
        result->mOriginalTypeName=(char*)come_increment_ref_count((char*)come_memdup(self->mOriginalTypeName, "sType_clone", 58, "char*"));
        __dec_obj27 = come_decrement_ref_count(__dec_obj27, (void*)0, (void*)0, 0,0, (void*)0);
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
        __dec_obj28=result->mParamTypes,
        result->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mParamTypes));
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj28,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj32=result->mParamNames,
        result->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->mParamNames));
        come_call_finalizer(list$1char$ph_finalize, __dec_obj32,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj33=result->mResultType,
        result->mResultType=(struct sType*)come_increment_ref_count(sType_clone(self->mResultType));
        come_call_finalizer(sType_finalize, __dec_obj33,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)) {
        result->mVarArgs=self->mVarArgs;
    }
    if(self!=((void*)0)&&self->mTypeOfNode!=((void*)0)) {
        __dec_obj34=result->mTypeOfNode,
        result->mTypeOfNode=(struct sNode*)come_increment_ref_count(sNode_clone(self->mTypeOfNode));
        (__dec_obj34 ? __dec_obj34 = come_decrement_ref_count(__dec_obj34, ((struct sNode*)__dec_obj34)->finalize, ((struct sNode*)__dec_obj34)->_protocol_obj, 0,0, (void*)0) :0);
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
    struct sType* __dec_obj6  ;
    struct list_item$1sType$ph* litem_16;
    struct sType* __dec_obj7  ;
    struct list_item$1sType$ph* litem_17;
    struct sType* __dec_obj8  ;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/neo-c.h", 956, "struct list_item$1sType$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj6=litem->item,
        litem->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj6,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        litem_16=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/neo-c.h", 966, "struct list_item$1sType$ph*"))));
        litem_16->prev=self->head;
        litem_16->next=((void*)0);
        __dec_obj7=litem_16->item,
        litem_16->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj7,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem_16;
        self->head->next=litem_16;
    }
    else {
        litem_17=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/neo-c.h", 976, "struct list_item$1sType$ph*"))));
        litem_17->prev=self->tail;
        litem_17->next=((void*)0);
        __dec_obj8=litem_17->item,
        litem_17->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj8,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail->next=litem_17;
        self->tail=litem_17;
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
    struct sNode* __dec_obj19;
    struct list_item$1sNode$ph* litem_18;
    struct sNode* __dec_obj20;
    struct list_item$1sNode$ph* litem_19;
    struct sNode* __dec_obj21;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/neo-c.h", 956, "struct list_item$1sNode$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj19=litem->item,
        litem->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj19 ? __dec_obj19 = come_decrement_ref_count(__dec_obj19, ((struct sNode*)__dec_obj19)->finalize, ((struct sNode*)__dec_obj19)->_protocol_obj, 0,0, (void*)0) :0);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        litem_18=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/neo-c.h", 966, "struct list_item$1sNode$ph*"))));
        litem_18->prev=self->head;
        litem_18->next=((void*)0);
        __dec_obj20=litem_18->item,
        litem_18->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj20 ? __dec_obj20 = come_decrement_ref_count(__dec_obj20, ((struct sNode*)__dec_obj20)->finalize, ((struct sNode*)__dec_obj20)->_protocol_obj, 0,0, (void*)0) :0);
        self->tail=litem_18;
        self->head->next=litem_18;
    }
    else {
        litem_19=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/neo-c.h", 976, "struct list_item$1sNode$ph*"))));
        litem_19->prev=self->tail;
        litem_19->next=((void*)0);
        __dec_obj21=litem_19->item,
        litem_19->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj21 ? __dec_obj21 = come_decrement_ref_count(__dec_obj21, ((struct sNode*)__dec_obj21)->finalize, ((struct sNode*)__dec_obj21)->_protocol_obj, 0,0, (void*)0) :0);
        self->tail->next=litem_19;
        self->tail=litem_19;
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
    struct list_item$1int$* litem_20;
    struct list_item$1int$* litem_21;
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
        litem_20=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/neo-c.h", 966, "struct list_item$1int$*"))));
        litem_20->prev=self->head;
        litem_20->next=((void*)0);
        litem_20->item=item;
        self->tail=litem_20;
        self->head->next=litem_20;
    }
    else {
        litem_21=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/neo-c.h", 976, "struct list_item$1int$*"))));
        litem_21->prev=self->tail;
        litem_21->next=((void*)0);
        litem_21->item=item;
        self->tail->next=litem_21;
        self->tail=litem_21;
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
    char* __dec_obj29  ;
    struct list_item$1char$ph* litem_22;
    char* __dec_obj30  ;
    struct list_item$1char$ph* litem_23;
    char* __dec_obj31  ;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0));
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 956, "struct list_item$1char$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj29=litem->item,
        litem->item=(char*)come_increment_ref_count(item);
        __dec_obj29 = come_decrement_ref_count(__dec_obj29, (void*)0, (void*)0, 0,0, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        litem_22=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 966, "struct list_item$1char$ph*"))));
        litem_22->prev=self->head;
        litem_22->next=((void*)0);
        __dec_obj30=litem_22->item,
        litem_22->item=(char*)come_increment_ref_count(item);
        __dec_obj30 = come_decrement_ref_count(__dec_obj30, (void*)0, (void*)0, 0,0, (void*)0);
        self->tail=litem_22;
        self->head->next=litem_22;
    }
    else {
        litem_23=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 976, "struct list_item$1char$ph*"))));
        litem_23->prev=self->tail;
        litem_23->next=((void*)0);
        __dec_obj31=litem_23->item,
        litem_23->item=(char*)come_increment_ref_count(item);
        __dec_obj31 = come_decrement_ref_count(__dec_obj31, (void*)0, (void*)0, 0,0, (void*)0);
        self->tail->next=litem_23;
        self->tail=litem_23;
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

static struct map$2char$phbuffer$ph* map$2char$phbuffer$ph_remove(struct map$2char$phbuffer$ph* self, char* key  , _Bool by_pointer)
{
    struct map$2char$phbuffer$ph* __result_obj__0;
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
            if((!by_pointer&&string_equals(self->keys[it],key))||(by_pointer&&self->keys[it]==key)) {
                list$1char$ph_remove(self->key_list,self->keys[it],0);
                self->item_existance[it]=0;
                if(1) {
                    (self->keys[it] = come_decrement_ref_count(self->keys[it], (void*)0, (void*)0, 0, 0, (void*)0));
                }
                self->keys[it]=((void*)0);
                if(1) {
                    come_call_finalizer(buffer_finalize, self->items[it], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                memset(self->items+it,0,sizeof(struct buffer*));
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

static struct buffer* map$2char$phbuffer$ph$p_operator_load_element(struct map$2char$phbuffer$ph* self, char* key  )
{
    struct buffer* default_value  ;
    struct buffer* __result_obj__0  ;
    unsigned int hash;
    unsigned int it;
    memset(&default_value,0,sizeof(struct buffer*));
    if(self==((void*)0)) {
        __result_obj__0 = (struct buffer*)come_increment_ref_count(default_value);
        come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
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
                come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
        }
        else {
            __result_obj__0 = (struct buffer*)come_increment_ref_count(default_value);
            come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__0;
        }
    }
    __result_obj__0 = (struct buffer*)come_increment_ref_count(default_value);
    come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct buffer* map$2char$phbuffer$ph_operator_load_element(struct map$2char$phbuffer$ph* self, char* key  )
{
    struct buffer* default_value  ;
    struct buffer* __result_obj__0  ;
    unsigned int hash;
    unsigned int it;
    memset(&default_value,0,sizeof(struct buffer*));
    if(self==((void*)0)) {
        __result_obj__0 = (struct buffer*)come_increment_ref_count(default_value);
        come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
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
                come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
        }
        else {
            __result_obj__0 = (struct buffer*)come_increment_ref_count(default_value);
            come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__0;
        }
    }
    __result_obj__0 = (struct buffer*)come_increment_ref_count(default_value);
    come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct map$2char$phbuffer$ph* map$2char$phbuffer$ph_insert(struct map$2char$phbuffer$ph* self, char* key  , struct buffer* item  , _Bool by_pointer)
{
    struct map$2char$phbuffer$ph* __result_obj__0;
    unsigned int hash;
    unsigned int it;
    _Bool same_key_exist;
    char* it2  ;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(buffer_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result_obj__0;
    }
    if(self->len*10>=self->size) {
        map$2char$phbuffer$ph_rehash(self);
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
                    come_call_finalizer(buffer_finalize, self->items[it], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->items[it]=(struct buffer*)come_increment_ref_count(item);
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
                self->items[it]=(struct buffer*)come_increment_ref_count(item);
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
    come_call_finalizer(buffer_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__0;
}

static void map$2char$phbuffer$ph_rehash(struct map$2char$phbuffer$ph* self)
{
    int size;
    void* __right_value0 = (void*)0;
    char** keys  ;
    struct buffer** items  ;
    _Bool* item_existance;
    int len;
    char* it  ;
    struct buffer* default_value  ;
    struct buffer* it2  ;
    unsigned int hash;
    int n;
    struct buffer* default_value_26  ;
    size=self->size*10;
    keys=(char**)come_increment_ref_count(((char**)(__right_value0=(char**)come_calloc(1, sizeof(char*)*(1*(size)), "/usr/local/include/neo-c.h", 2207, "char**"))));
    items=(struct buffer**)come_increment_ref_count(((struct buffer**)(__right_value0=(struct buffer**)come_calloc(1, sizeof(struct buffer*)*(1*(size)), "/usr/local/include/neo-c.h", 2208, "struct buffer**"))));
    item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value0=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size)), "/usr/local/include/neo-c.h", 2209, "_Bool*"))));
    len=0;
    for(it=map$2char$phbuffer$ph_begin(self);!map$2char$phbuffer$ph_end(self);it=map$2char$phbuffer$ph_next(self)){
        memset(&default_value,0,sizeof(struct buffer*));
        it2=((struct buffer*)(__right_value0=map$2char$phbuffer$ph_at(self,it,(struct buffer*)come_increment_ref_count(default_value),0)));
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
                memset(&default_value_26,0,sizeof(struct buffer*));
                items[n]=((struct buffer*)(__right_value0=map$2char$phbuffer$ph_at(self,it,(struct buffer*)come_increment_ref_count(default_value_26),0)));
                len++;
                come_call_finalizer(buffer_finalize, default_value_26, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                come_call_finalizer(buffer_finalize, default_value_26, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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

static char* map$2char$phbuffer$ph_begin(struct map$2char$phbuffer$ph* self)
{
    char* result  ;
    char* __result_obj__0  ;
    char* result_24  ;
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
    memset(&result_24,0,sizeof(char*));
    __result_obj__0 = result_24;
    return __result_obj__0;
}

static _Bool map$2char$phbuffer$ph_end(struct map$2char$phbuffer$ph* self)
{
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phbuffer$ph_next(struct map$2char$phbuffer$ph* self)
{
    char* result  ;
    char* __result_obj__0  ;
    char* result_25  ;
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
    memset(&result_25,0,sizeof(char*));
    __result_obj__0 = result_25;
    return __result_obj__0;
}

static struct buffer* map$2char$phbuffer$ph_at(struct map$2char$phbuffer$ph* self, char* key  , struct buffer* default_value  , _Bool by_pointer)
{
    struct buffer* __result_obj__0  ;
    unsigned int hash;
    unsigned int it;
    if(self==((void*)0)) {
        __result_obj__0 = (struct buffer*)come_increment_ref_count(default_value);
        come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(1) {
        if(self->item_existance[it]) {
            if((!by_pointer&&string_equals(self->keys[it],key))||(by_pointer&&self->keys[it]==key)) {
                __result_obj__0 = (struct buffer*)come_increment_ref_count(self->items[it]);
                come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
                come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
        }
        else {
            __result_obj__0 = (struct buffer*)come_increment_ref_count(default_value);
            come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__0;
        }
    }
    __result_obj__0 = (struct buffer*)come_increment_ref_count(default_value);
    come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

struct sUnionNode* sUnionNode_initialize(struct sUnionNode* self, char* name  , struct sClass* klass  , struct sInfo* info  , _Bool anonymous)
{
    void* __right_value0 = (void*)0;
    char* __dec_obj35  ;
    struct sUnionNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sUnionNode*)come_increment_ref_count(self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj35=self->name,
    self->name=(char*)come_increment_ref_count(name);
    __dec_obj35 = come_decrement_ref_count(__dec_obj35, (void*)0, (void*)0, 0,0, (void*)0);
    self->klass=klass;
    self->anonymous=anonymous;
    __result_obj__0 = (struct sUnionNode*)come_increment_ref_count(self);
    come_call_finalizer(sUnionNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sUnionNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

_Bool sUnionNode_terminated(struct sUnionNode* self)
{
    return 1;
}

char* sUnionNode_kind(struct sUnionNode* self)
{
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string("sUnionNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool sUnionNode_compile(struct sUnionNode* self, struct sInfo* info  )
{
    struct sClass* klass  ;
    void* __right_value0 = (void*)0;
    char* name  ;
    _Bool anonymous;
    _Bool __result_obj__0;
    klass=self->klass;
    name=(char*)come_increment_ref_count(__builtin_string(self->name));
    anonymous=self->anonymous;
    output_union(klass,info,anonymous);
    __result_obj__0 = 1;
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
    return __result_obj__0;
}

static void sNodeBase_finalize(struct sNodeBase* self)
{
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

static void sUnionNode_finalize(struct sUnionNode* self)
{
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->name!=((void*)0)) {
        (self->name = come_decrement_ref_count(self->name, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

struct sNode* parse_union(char* type_name  , char* union_attribute  , struct sInfo* info  , _Bool anonymous)
{
    struct sClass* klass  ;
    void* __right_value0 = (void*)0;
    _Bool _conditional_value_X0;
    void* __right_value1 = (void*)0;
    void* __right_value2 = (void*)0;
    void* __right_value3 = (void*)0;
    struct sType* type  ;
    char* __dec_obj36  ;
    struct sType* override_  ;
    _Bool typedef_;
    struct sType* type_30  ;
    char* __dec_obj37  ;
    char* __dec_obj38  ;
    int __exception_result_var_b1;
    struct tuple3$3sType$phchar$ph_Bool$* multiple_assign_var2
;    struct sType* type2  =0;
    char* name  =0;
    _Bool err=0;
    char* name2  ;
    int __exception_result_var_b2;
    int __exception_result_var_b3;
    char* struct_attribute  ;
    char* __dec_obj44  ;
    char* __dec_obj45  ;
    struct sNode* _inf_value1;
    struct sUnionNode* _inf_obj_value1;
    struct sNode* node;
    _Bool Value;
    struct sNode* __result_obj__0;
    memset(&klass, 0, sizeof(klass));
    info->parse_struct_recursive_count++;
    if(({(_conditional_value_X0=(((struct sClass*)(__right_value0=map$2char$phsClass$ph_at(info->classes,type_name,((void*)0),0)))==((void*)0)));    come_call_finalizer(sClass_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
_conditional_value_X0;})) {
        map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string(type_name)),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "20union.nc", 112, "struct sClass*")),((char*)(__right_value2=__builtin_string(type_name))),0,1,0,0,0,0,0,-1,-1,0,0,0,info)),0);
        (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0));
        type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20union.nc", 114, "struct sType*")),(char*)come_increment_ref_count(type_name),0,info,0));
        if(info->parse_struct_recursive_count>=2) {
            type->mInnerStruct=1;
            __dec_obj36=type->mInnerStructName,
            type->mInnerStructName=(char*)come_increment_ref_count(__builtin_string(type_name));
            __dec_obj36 = come_decrement_ref_count(__dec_obj36, (void*)0, (void*)0, 0,0, (void*)0);
        }
        map$2char$phsType$ph_insert(info->types,(char*)come_increment_ref_count(type_name),(struct sType*)come_increment_ref_count(sType_clone(type)),0);
        klass=((struct sClass*)(__right_value0=map$2char$phsClass$ph_at(info->classes,type_name,((void*)0),0)));
        come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        klass=((struct sClass*)(__right_value0=map$2char$phsClass$ph_at(info->classes,type_name,((void*)0),0)));
        list$1tuple2$2char$phsType$ph$ph_reset(klass->mFields);
        override_=((struct sType*)(__right_value0=map$2char$phsType$ph_at(info->types,type_name,((void*)0),0)));
        typedef_=0;
        if(override_) {
            typedef_=override_->mTypedef;
        }
        type_30=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20union.nc", 132, "struct sType*")),(char*)come_increment_ref_count(type_name),0,info,0));
        if(info->parse_struct_recursive_count>=2) {
            type_30->mInnerStruct=1;
            __dec_obj37=type_30->mInnerStructName,
            type_30->mInnerStructName=(char*)come_increment_ref_count(__builtin_string(type_name));
            __dec_obj37 = come_decrement_ref_count(__dec_obj37, (void*)0, (void*)0, 0,0, (void*)0);
        }
        if(typedef_) {
            type_30->mTypedef=1;
        }
        map$2char$phsType$ph_insert(info->types,(char*)come_increment_ref_count(type_name),(struct sType*)come_increment_ref_count(sType_clone(type_30)),0);
        come_call_finalizer(sType_finalize, type_30, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    skip_spaces_and_lf(info);
    if(string_operator_equals(union_attribute,"")) {
    }
    else {
        __dec_obj38=klass->mAttribute,
        klass->mAttribute=(char*)come_increment_ref_count(union_attribute);
        __dec_obj38 = come_decrement_ref_count(__dec_obj38, (void*)0, (void*)0, 0,0, (void*)0);
    }
    (come_push_stackframe("20union.nc", 150, 0),__exception_result_var_b1=expected_next_character(123,info), come_pop_stackframe(), __exception_result_var_b1);
    while(1) {
        multiple_assign_var2=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=parse_type(info,1,1,0)));
        type2=(struct sType*)come_increment_ref_count(multiple_assign_var2->v1);
        name=(char*)come_increment_ref_count(multiple_assign_var2->v2);
        err=multiple_assign_var2->v3;
        come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        skip_spaces_and_lf(info);
        if(!err) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        if(*info->p==44) {
            skip_spaces_and_lf(info);
            while(*info->p==44) {
                info->p++;
                skip_spaces_and_lf(info);
                name2=(char*)come_increment_ref_count(parse_word(0,info));
                list$1tuple2$2char$phsType$ph$ph_push_back(klass->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph*)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "20union.nc", 169, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(name2),(struct sType*)come_increment_ref_count(type2))));
                (name2 = come_decrement_ref_count(name2, (void*)0, (void*)0, 0, 0, (void*)0));
            }
            (come_push_stackframe("20union.nc", 172, 1),__exception_result_var_b2=expected_next_character(59,info), come_pop_stackframe(), __exception_result_var_b2);
        }
        else {
            (come_push_stackframe("20union.nc", 175, 2),__exception_result_var_b3=expected_next_character(59,info), come_pop_stackframe(), __exception_result_var_b3);
            skip_spaces_and_lf(info);
            list$1tuple2$2char$phsType$ph$ph_push_back(klass->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph*)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "20union.nc", 178, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(name),(struct sType*)come_increment_ref_count(type2))));
        }
        skip_spaces_and_lf(info);
        if(*info->p==125) {
            info->p++;
            skip_spaces_and_lf(info);
            come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
            break;
        }
        skip_spaces_and_lf(info);
        come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    struct_attribute=(char*)come_increment_ref_count(parse_struct_attribute(info));
    if(string_operator_equals(struct_attribute,"")) {
    }
    else {
        if(string_operator_equals(union_attribute,"")) {
            __dec_obj44=klass->mAttribute,
            klass->mAttribute=(char*)come_increment_ref_count(struct_attribute);
            __dec_obj44 = come_decrement_ref_count(__dec_obj44, (void*)0, (void*)0, 0,0, (void*)0);
        }
        else {
            __dec_obj45=klass->mAttribute,
            klass->mAttribute=(char*)come_increment_ref_count(string_operator_add(((char*)(__right_value1=string_operator_add(union_attribute," "))),struct_attribute));
            __dec_obj45 = come_decrement_ref_count(__dec_obj45, (void*)0, (void*)0, 0,0, (void*)0);
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        }
    }
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "20union.nc", 205, "struct sNode");
    _inf_obj_value1=(struct sUnionNode*)come_increment_ref_count(((struct sUnionNode*)(__right_value1=sUnionNode_initialize((struct sUnionNode*)come_increment_ref_count((struct sUnionNode*)come_calloc(1, sizeof(struct sUnionNode)*(1), "20union.nc", 205, "struct sUnionNode*")),(char*)come_increment_ref_count(type_name),klass,info,anonymous))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sUnionNode_finalize;
    _inf_value1->clone=(void*)sUnionNode_clone;
    _inf_value1->compile=(void*)sUnionNode_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sline_real=(void*)sNodeBase_sline_real;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sUnionNode_terminated;
    _inf_value1->kind=(void*)sUnionNode_kind;
    _inf_value1->no_mutex=(void*)sNodeBase_no_mutex;
    node=(struct sNode*)come_increment_ref_count(_inf_value1);
    come_call_finalizer(sUnionNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    Value=node_compile(node,info);
    if(!Value) {
        info->parse_struct_recursive_count--;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((void*)0));
        (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
        (union_attribute = come_decrement_ref_count(union_attribute, (void*)0, (void*)0, 0, 0, (void*)0));
        (struct_attribute = come_decrement_ref_count(struct_attribute, (void*)0, (void*)0, 0, 0, (void*)0));
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__0;
    }
    else {
    }
    info->parse_struct_recursive_count--;
    __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=create_nothing_node(info))));
    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
    (union_attribute = come_decrement_ref_count(union_attribute, (void*)0, (void*)0, 0, 0, (void*)0));
    (struct_attribute = come_decrement_ref_count(struct_attribute, (void*)0, (void*)0, 0, 0, (void*)0));
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0):(void*)0);
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    return __result_obj__0;
}

static struct sClass* map$2char$phsClass$ph_at(struct map$2char$phsClass$ph* self, char* key  , struct sClass* default_value  , _Bool by_pointer)
{
    struct sClass* __result_obj__0  ;
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
            if((!by_pointer&&string_equals(self->keys[it],key))||(by_pointer&&self->keys[it]==key)) {
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

static void sClass_finalize(struct sClass* self  )
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

static struct map$2char$phsClass$ph* map$2char$phsClass$ph_insert(struct map$2char$phsClass$ph* self, char* key  , struct sClass* item  , _Bool by_pointer)
{
    struct map$2char$phsClass$ph* __result_obj__0;
    unsigned int hash;
    unsigned int it;
    _Bool same_key_exist;
    char* it2  ;
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
    return __result_obj__0;
}

static void map$2char$phsClass$ph_rehash(struct map$2char$phsClass$ph* self)
{
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
    struct sClass* default_value_29  ;
    size=self->size*10;
    keys=(char**)come_increment_ref_count(((char**)(__right_value0=(char**)come_calloc(1, sizeof(char*)*(1*(size)), "/usr/local/include/neo-c.h", 2207, "char**"))));
    items=(struct sClass**)come_increment_ref_count(((struct sClass**)(__right_value0=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size)), "/usr/local/include/neo-c.h", 2208, "struct sClass**"))));
    item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value0=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size)), "/usr/local/include/neo-c.h", 2209, "_Bool*"))));
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
                memset(&default_value_29,0,sizeof(struct sClass*));
                items[n]=((struct sClass*)(__right_value0=map$2char$phsClass$ph_at(self,it,(struct sClass*)come_increment_ref_count(default_value_29),0)));
                len++;
                come_call_finalizer(sClass_finalize, default_value_29, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                come_call_finalizer(sClass_finalize, default_value_29, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
}

static char* map$2char$phsClass$ph_begin(struct map$2char$phsClass$ph* self)
{
    char* result  ;
    char* __result_obj__0  ;
    char* result_27  ;
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
    memset(&result_27,0,sizeof(char*));
    __result_obj__0 = result_27;
    return __result_obj__0;
}

static _Bool map$2char$phsClass$ph_end(struct map$2char$phsClass$ph* self)
{
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsClass$ph_next(struct map$2char$phsClass$ph* self)
{
    char* result  ;
    char* __result_obj__0  ;
    char* result_28  ;
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
    memset(&result_28,0,sizeof(char*));
    __result_obj__0 = result_28;
    return __result_obj__0;
}

static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph_reset(struct list$1tuple2$2char$phsType$ph$ph* self)
{
    struct list$1tuple2$2char$phsType$ph$ph* __result_obj__0;
    struct list_item$1tuple2$2char$phsType$ph$ph* it;
    struct list_item$1tuple2$2char$phsType$ph$ph* prev_it;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        return __result_obj__0;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1tuple2$2char$phsType$ph$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__0 = self;
    return __result_obj__0;
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

static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph_push_back(struct list$1tuple2$2char$phsType$ph$ph* self, struct tuple2$2char$phsType$ph* item)
{
    struct list$1tuple2$2char$phsType$ph$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1tuple2$2char$phsType$ph$ph* litem;
    struct tuple2$2char$phsType$ph* __dec_obj39;
    struct list_item$1tuple2$2char$phsType$ph$ph* litem_31;
    struct tuple2$2char$phsType$ph* __dec_obj40;
    struct list_item$1tuple2$2char$phsType$ph$ph* litem_32;
    struct tuple2$2char$phsType$ph* __dec_obj41;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "/usr/local/include/neo-c.h", 1041, "struct list_item$1tuple2$2char$phsType$ph$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj39=litem->item,
        litem->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __dec_obj39,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        litem_31=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "/usr/local/include/neo-c.h", 1051, "struct list_item$1tuple2$2char$phsType$ph$ph*"))));
        litem_31->prev=self->head;
        litem_31->next=((void*)0);
        __dec_obj40=litem_31->item,
        litem_31->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __dec_obj40,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem_31;
        self->head->next=litem_31;
    }
    else {
        litem_32=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "/usr/local/include/neo-c.h", 1061, "struct list_item$1tuple2$2char$phsType$ph$ph*"))));
        litem_32->prev=self->tail;
        litem_32->next=((void*)0);
        __dec_obj41=litem_32->item,
        litem_32->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __dec_obj41,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail->next=litem_32;
        self->tail=litem_32;
    }
    self->len++;
    __result_obj__0 = self;
    come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__0;
}

static struct tuple2$2char$phsType$ph* tuple2$2char$phsType$ph_initialize(struct tuple2$2char$phsType$ph* self, char* v1  , struct sType* v2  )
{
    char* __dec_obj42  ;
    struct sType* __dec_obj43  ;
    struct tuple2$2char$phsType$ph* __result_obj__0;
    __dec_obj42=self->v1,
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj42 = come_decrement_ref_count(__dec_obj42, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj43=self->v2,
    self->v2=(struct sType*)come_increment_ref_count(v2);
    come_call_finalizer(sType_finalize, __dec_obj43,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __result_obj__0 = (struct tuple2$2char$phsType$ph*)come_increment_ref_count(self);
    come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sType_finalize, v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct sUnionNode* sUnionNode_clone(struct sUnionNode* self)
{
    struct sUnionNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sUnionNode* result  ;
    char* __dec_obj46  ;
    char* __dec_obj47  ;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        return __result_obj__0;
    }
    result=(struct sUnionNode*)come_increment_ref_count((struct sUnionNode*)come_calloc(1, sizeof(struct sUnionNode)*(1), "sUnionNode_clone", 3, "struct sUnionNode*"));
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj46=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sUnionNode_clone", 5, "char*"));
        __dec_obj46 = come_decrement_ref_count(__dec_obj46, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->name!=((void*)0)) {
        __dec_obj47=result->name,
        result->name=(char*)come_increment_ref_count((char*)come_memdup(self->name, "sUnionNode_clone", 7, "char*"));
        __dec_obj47 = come_decrement_ref_count(__dec_obj47, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result->klass=self->klass;
    }
    if(self!=((void*)0)) {
        result->anonymous=self->anonymous;
    }
    __result_obj__0 = result;
    come_call_finalizer(sUnionNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

struct sNode* top_level_v97(char* buf, char* head, int head_sline, struct sInfo* info  )
{
    char* source_head;
    void* __right_value0 = (void*)0;
    char* struct_attribute  ;
    char* type_name  ;
    struct sClass* klass  ;
    _Bool _conditional_value_X0;
    void* __right_value1 = (void*)0;
    void* __right_value2 = (void*)0;
    void* __right_value3 = (void*)0;
    struct sType* type  ;
    char* __dec_obj48  ;
    struct sType* override_  ;
    _Bool typedef_;
    struct sType* type_33  ;
    char* __dec_obj49  ;
    int __exception_result_var_b4;
    struct tuple3$3sType$phchar$ph_Bool$* multiple_assign_var3
;    struct sType* type2  =0;
    char* name  =0;
    _Bool err=0;
    char* name2  ;
    int __exception_result_var_b5;
    int __exception_result_var_b6;
    char* struct_attribute2  ;
    char* source_tail;
    struct buffer* header  ;
    char* __dec_obj50  ;
    char* __dec_obj51  ;
    char* __dec_obj52  ;
    struct sNode* _inf_value2;
    struct sUnionNode* _inf_obj_value2;
    struct sNode* node;
    _Bool Value;
    struct sNode* __result_obj__0;
    memset(&klass, 0, sizeof(klass));
    if(charp_operator_equals(buf,"union")) {
        info->parse_struct_recursive_count++;
        source_head=info->p;
        struct_attribute=(char*)come_increment_ref_count(parse_struct_attribute(info));
        type_name=(char*)come_increment_ref_count(parse_word(0,info));
        if(({(_conditional_value_X0=(((struct sClass*)(__right_value0=map$2char$phsClass$ph_at(info->classes,type_name,((void*)0),0)))==((void*)0)));        come_call_finalizer(sClass_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
_conditional_value_X0;})) {
            map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string(type_name)),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "20union.nc", 228, "struct sClass*")),((char*)(__right_value2=__builtin_string(type_name))),0,1,0,0,0,0,0,-1,-1,0,0,0,info)),0);
            (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0));
            type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20union.nc", 229, "struct sType*")),(char*)come_increment_ref_count(type_name),0,info,0));
            if(info->parse_struct_recursive_count>=2) {
                type->mInnerStruct=1;
                __dec_obj48=type->mInnerStructName,
                type->mInnerStructName=(char*)come_increment_ref_count(__builtin_string(type_name));
                __dec_obj48 = come_decrement_ref_count(__dec_obj48, (void*)0, (void*)0, 0,0, (void*)0);
            }
            map$2char$phsType$ph_insert(info->types,(char*)come_increment_ref_count(type_name),(struct sType*)come_increment_ref_count(sType_clone(type)),0);
            klass=((struct sClass*)(__right_value0=map$2char$phsClass$ph_at(info->classes,type_name,((void*)0),0)));
            come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            klass=((struct sClass*)(__right_value0=map$2char$phsClass$ph_at(info->classes,type_name,((void*)0),0)));
            override_=((struct sType*)(__right_value0=map$2char$phsType$ph_at(info->types,type_name,((void*)0),0)));
            typedef_=0;
            if(override_) {
                typedef_=override_->mTypedef;
            }
            type_33=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20union.nc", 245, "struct sType*")),(char*)come_increment_ref_count(type_name),0,info,0));
            if(info->parse_struct_recursive_count>=2) {
                type_33->mInnerStruct=1;
                __dec_obj49=type_33->mInnerStructName,
                type_33->mInnerStructName=(char*)come_increment_ref_count(__builtin_string(type_name));
                __dec_obj49 = come_decrement_ref_count(__dec_obj49, (void*)0, (void*)0, 0,0, (void*)0);
            }
            if(typedef_) {
                type_33->mTypedef=typedef_;
            }
            map$2char$phsType$ph_insert(info->types,(char*)come_increment_ref_count(type_name),(struct sType*)come_increment_ref_count(sType_clone(type_33)),0);
            come_call_finalizer(sType_finalize, type_33, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        (come_push_stackframe("20union.nc", 256, 3),__exception_result_var_b4=expected_next_character(123,info), come_pop_stackframe(), __exception_result_var_b4);
        while(1) {
            multiple_assign_var3=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=parse_type(info,1,1,0)));
            type2=(struct sType*)come_increment_ref_count(multiple_assign_var3->v1);
            name=(char*)come_increment_ref_count(multiple_assign_var3->v2);
            err=multiple_assign_var3->v3;
            come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            if(!err) {
                printf("%s %d: parse_type failed\n",info->sname,info->sline);
                exit(2);
            }
            skip_spaces_and_lf(info);
            if(*info->p==44) {
                while(*info->p==44) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    name2=(char*)come_increment_ref_count(parse_word(0,info));
                    list$1tuple2$2char$phsType$ph$ph_push_back(klass->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph*)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "20union.nc", 274, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(name2),(struct sType*)come_increment_ref_count(type2))));
                    (name2 = come_decrement_ref_count(name2, (void*)0, (void*)0, 0, 0, (void*)0));
                }
                (come_push_stackframe("20union.nc", 278, 4),__exception_result_var_b5=expected_next_character(59,info), come_pop_stackframe(), __exception_result_var_b5);
                skip_spaces_and_lf(info);
            }
            else {
                (come_push_stackframe("20union.nc", 283, 5),__exception_result_var_b6=expected_next_character(59,info), come_pop_stackframe(), __exception_result_var_b6);
                skip_spaces_and_lf(info);
                list$1tuple2$2char$phsType$ph$ph_push_back(klass->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph*)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "20union.nc", 286, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(name),(struct sType*)come_increment_ref_count(type2))));
            }
            if(*info->p==125) {
                info->p++;
                skip_spaces_and_lf(info);
                come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
                break;
            }
            come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        struct_attribute2=(char*)come_increment_ref_count(parse_struct_attribute(info));
        source_tail=info->p;
        header=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20union.nc", 300, "struct buffer*"))));
        buffer_append_str(header,"union ");
        buffer_append(header,source_head,source_tail-source_head);
        if(string_operator_equals(struct_attribute,"")&&string_operator_equals(struct_attribute2,"")) {
        }
        else if(string_operator_equals(struct_attribute,"")) {
            __dec_obj50=klass->mAttribute,
            klass->mAttribute=(char*)come_increment_ref_count(struct_attribute2);
            __dec_obj50 = come_decrement_ref_count(__dec_obj50, (void*)0, (void*)0, 0,0, (void*)0);
        }
        else if(string_operator_equals(struct_attribute2,"")) {
            __dec_obj51=klass->mAttribute,
            klass->mAttribute=(char*)come_increment_ref_count(struct_attribute);
            __dec_obj51 = come_decrement_ref_count(__dec_obj51, (void*)0, (void*)0, 0,0, (void*)0);
        }
        else {
            __dec_obj52=klass->mAttribute,
            klass->mAttribute=(char*)come_increment_ref_count(string_operator_add(((char*)(__right_value1=string_operator_add(struct_attribute," "))),struct_attribute2));
            __dec_obj52 = come_decrement_ref_count(__dec_obj52, (void*)0, (void*)0, 0,0, (void*)0);
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "20union.nc", 316, "struct sNode");
        _inf_obj_value2=(struct sUnionNode*)come_increment_ref_count(((struct sUnionNode*)(__right_value1=sUnionNode_initialize((struct sUnionNode*)come_increment_ref_count((struct sUnionNode*)come_calloc(1, sizeof(struct sUnionNode)*(1), "20union.nc", 316, "struct sUnionNode*")),(char*)come_increment_ref_count(type_name),klass,info,0))));
        _inf_value2->_protocol_obj=_inf_obj_value2;
        _inf_value2->finalize=(void*)sUnionNode_finalize;
        _inf_value2->clone=(void*)sUnionNode_clone;
        _inf_value2->compile=(void*)sUnionNode_compile;
        _inf_value2->sline=(void*)sNodeBase_sline;
        _inf_value2->sline_real=(void*)sNodeBase_sline_real;
        _inf_value2->sname=(void*)sNodeBase_sname;
        _inf_value2->terminated=(void*)sUnionNode_terminated;
        _inf_value2->kind=(void*)sUnionNode_kind;
        _inf_value2->no_mutex=(void*)sNodeBase_no_mutex;
        node=(struct sNode*)come_increment_ref_count(_inf_value2);
        come_call_finalizer(sUnionNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        Value=node_compile(node,info);
        if(!Value) {
            info->parse_struct_recursive_count--;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((void*)0));
            (struct_attribute = come_decrement_ref_count(struct_attribute, (void*)0, (void*)0, 0, 0, (void*)0));
            (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
            (struct_attribute2 = come_decrement_ref_count(struct_attribute2, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(buffer_finalize, header, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__0;
        }
        else {
        }
        info->parse_struct_recursive_count--;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=create_nothing_node(info))));
        (struct_attribute = come_decrement_ref_count(struct_attribute, (void*)0, (void*)0, 0, 0, (void*)0));
        (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
        (struct_attribute2 = come_decrement_ref_count(struct_attribute2, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(buffer_finalize, header, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__0;
        (struct_attribute = come_decrement_ref_count(struct_attribute, (void*)0, (void*)0, 0, 0, (void*)0));
        (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
        (struct_attribute2 = come_decrement_ref_count(struct_attribute2, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(buffer_finalize, header, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=top_level_v96(buf,head,head_sline,info))));
    ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0):(void*)0);
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    return __result_obj__0;
}

struct sNode* string_node_v15(char* buf, char* head, int head_sline, struct sInfo* info  )
{
    void* __right_value0 = (void*)0;
    char* union_attribute  ;
    _Bool define_union;
    char* p;
    int sline;
    _Bool no_output_come_code;
    char* type_name  ;
    char* __dec_obj53  ;
    char* __dec_obj54  ;
    char* type_name_34  ;
    struct sNode* __result_obj__0;
    memset(&type_name, 0, sizeof(type_name));
    union_attribute=(char*)come_increment_ref_count(xsprintf(""));
    define_union=0;
    {
        p=info->p;
        sline=info->sline;
        no_output_come_code=info->no_output_come_code;
        info->no_output_come_code=1;
        if(charp_operator_equals(buf,"union")) {
            if(*info->p==95||xisalpha(*info->p)) {
                __dec_obj53=union_attribute,
                union_attribute=(char*)come_increment_ref_count(parse_struct_attribute(info));
                __dec_obj53 = come_decrement_ref_count(__dec_obj53, (void*)0, (void*)0, 0,0, (void*)0);
                if(*info->p==95||xisalpha(*info->p)) {
                    __dec_obj54=type_name,
                    type_name=(char*)come_increment_ref_count(parse_word(0,info));
                    __dec_obj54 = come_decrement_ref_count(__dec_obj54, (void*)0, (void*)0, 0,0, (void*)0);
                    if(*info->p==123) {
                        ((char*)(__right_value0=skip_block(info,0)));
                        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                        if(*info->p==59) {
                            define_union=1;
                        }
                    }
                }
            }
            (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        info->no_output_come_code=no_output_come_code;
        info->p=p;
        info->sline=sline;
    }
    if(define_union) {
        type_name_34=(char*)come_increment_ref_count(parse_word(0,info));
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=parse_union((char*)come_increment_ref_count(type_name_34),(char*)come_increment_ref_count(union_attribute),info,0))));
        (type_name_34 = come_decrement_ref_count(type_name_34, (void*)0, (void*)0, 0, 0, (void*)0));
        (union_attribute = come_decrement_ref_count(union_attribute, (void*)0, (void*)0, 0, 0, (void*)0));
        ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__0;
        (type_name_34 = come_decrement_ref_count(type_name_34, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=string_node_v14(buf,head,head_sline,info))));
    (union_attribute = come_decrement_ref_count(union_attribute, (void*)0, (void*)0, 0, 0, (void*)0));
    ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0):(void*)0);
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    return __result_obj__0;
}

