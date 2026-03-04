/// c_include definition ///
/// typedef definition ///
typedef unsigned long size_t;

typedef char* string;

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

typedef long  int  off_t  ;

typedef long  int  off64_t  ;

typedef long  int  ssize_t  ;

typedef struct _G_fpos_t  fpos_t  ;

typedef struct _G_fpos64_t  fpos64_t  ;

typedef int wchar_t;

typedef struct anonymous_typeX4 div_t;

typedef struct anonymous_typeX5 ldiv_t;

typedef struct anonymous_typeX6 lldiv_t;

typedef struct __locale_struct*  __locale_t  ;

typedef struct __locale_struct*  locale_t  ;

typedef unsigned char  u_char  ;

typedef unsigned short int  u_short  ;

typedef unsigned int  u_int  ;

typedef unsigned long  int  u_long  ;

typedef long  int  quad_t  ;

typedef unsigned long  int  u_quad_t  ;

typedef struct __fsid_t  fsid_t  ;

typedef long  int  loff_t  ;

typedef unsigned long  int  ino_t  ;

typedef unsigned long  int  ino64_t  ;

typedef unsigned long  int  dev_t  ;

typedef unsigned int  gid_t  ;

typedef unsigned int  mode_t  ;

typedef unsigned long  int  nlink_t  ;

typedef unsigned int  uid_t  ;

typedef int  pid_t  ;

typedef unsigned int  id_t  ;

typedef int  daddr_t  ;

typedef char*  caddr_t  ;

typedef int  key_t  ;

typedef long  int  clock_t  ;

typedef int  clockid_t  ;

typedef long  int  time_t  ;

typedef void*  timer_t  ;

typedef unsigned int  useconds_t  ;

typedef long  int  suseconds_t  ;

typedef unsigned long  int ulong;

typedef unsigned short int ushort;

typedef unsigned int uint;

typedef char  int8_t  ;

typedef short int  int16_t  ;

typedef int  int32_t  ;

typedef long  int  int64_t  ;

typedef unsigned char  u_int8_t  ;

typedef unsigned short int  u_int16_t  ;

typedef unsigned int  u_int32_t  ;

typedef unsigned long  int  u_int64_t  ;

typedef int __attribute__ ((__mode__ (__word__))) register_t __attribute__ ((__mode__ (__word__)));

typedef struct anonymous_typeX7 __sigset_t;

typedef struct anonymous_typeX7  sigset_t  ;

typedef long  int __fd_mask;

typedef struct anonymous_typeX8 fd_set;

typedef long  int  fd_mask  ;

typedef long  int  blksize_t  ;

typedef long  int  blkcnt_t  ;

typedef unsigned long  int  fsblkcnt_t  ;

typedef unsigned long  int  fsfilcnt_t  ;

typedef long  int  blkcnt64_t  ;

typedef unsigned long  int  fsblkcnt64_t  ;

typedef unsigned long  int  fsfilcnt64_t  ;

typedef union anonymous_typeZ9 __atomic_wide_counter;

typedef struct __pthread_internal_list  __pthread_list_t  ;

typedef struct __pthread_internal_slist  __pthread_slist_t  ;

typedef unsigned int __tss_t;

typedef unsigned long  int __thrd_t;

typedef struct anonymous_typeX11 __once_flag;

typedef unsigned long  int pthread_t;

typedef union anonymous_typeZ12 pthread_mutexattr_t;

typedef union anonymous_typeZ13 pthread_condattr_t;

typedef unsigned int pthread_key_t;

typedef int pthread_once_t;

typedef union pthread_attr_t  pthread_attr_t  ;

typedef union anonymous_typeZ14 pthread_mutex_t;

typedef union anonymous_typeZ15 pthread_cond_t;

typedef union anonymous_typeZ16 pthread_rwlock_t;

typedef union anonymous_typeZ17 pthread_rwlockattr_t;

typedef volatile int pthread_spinlock_t;

typedef union anonymous_typeZ18 pthread_barrier_t;

typedef union anonymous_typeZ19 pthread_barrierattr_t;

typedef int (*__compar_fn_t)(const void*,const void*);

typedef int (*comparison_fn_t)(const void*,const void*)  ;

typedef int (*__compar_d_fn_t)(const void*,const void*,void*);

typedef __builtin_va_list va_list;

typedef int error_t;

typedef struct re_program*  re_t  ;

typedef struct re_capture  re_capture  ;

typedef struct regex_t regex_t;

typedef struct re_program  regex_program_t  ;

typedef struct anonymous_typeX24 compiler_state;

typedef struct anonymous_typeX25 match_context;

typedef unsigned int wint_t;

typedef struct anonymous_typeX1  mbstate_t  ;

typedef int*  wstring  ;

typedef struct MacroSnapshot MacroSnapshot;

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
    long  int  tv_sec  ;
    long  int  tv_usec  ;
};

struct timespec
{
    long  int  tv_sec  ;
    long  int  tv_nsec  ;
};

struct anonymous_typeX8
{
    long  int  fds_bits[1024/(8*(int)sizeof(long  int ))]  ;
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
    struct __pthread_internal_list*  __prev  ;
    struct __pthread_internal_list*  __next  ;
};

struct __pthread_internal_slist
{
    struct __pthread_internal_slist*  __next  ;
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
    struct __pthread_internal_list  __list  ;
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
struct __pthread_mutex_s  __data  ;
char __size[40];
long  int __align;
};

union anonymous_typeZ15
{
struct __pthread_cond_s  __data  ;
char __size[48];
long long int __align;
};

union anonymous_typeZ16
{
struct __pthread_rwlock_arch_t  __data  ;
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
    int*  fptr  ;
    int*  rptr  ;
    int*  state  ;
    int rand_type;
    int rand_deg;
    int rand_sep;
    int*  end_ptr  ;
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
    void* stacktop;
    struct neo_frame*  prev  ;
    char* fun_name;
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
    struct regex_t*  first  ;
    struct regex_t*  last  ;
    int id;
};

union anonymous_typeZ20
{
unsigned char ch;
unsigned char* ccl;
    struct {
        struct regex_t*  first  ;
        struct regex_t*  last  ;
        int id;
    } group;
};

struct anonymous_typeX23
{
    struct regex_t*  first  ;
    struct regex_t*  last  ;
    int id;
};

union anonymous_typeZ22
{
unsigned char ch;
unsigned char* ccl;
    struct {
        struct regex_t*  first  ;
        struct regex_t*  last  ;
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
            struct regex_t*  first  ;
            struct regex_t*  last  ;
            int id;
        } group;
    } u;
    struct regex_t*  next  ;
};

struct re_program
{
    struct regex_t*  start  ;
    int group_count;
};

struct anonymous_typeX24
{
    struct regex_t*  pool  ;
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
    struct re_capture*  captures  ;
    int capture_capacity;
    int total_groups;
    _Bool ignore_case;
};

struct sNode
{
    void* _protocol_obj;
    void (*finalize)(void*);
    void* (*clone)(void*);
    _Bool (*compile)(void*,struct sInfo* );
    int (*sline)(void*);
    int (*sline_real)(void*);
    char*  (*sname)(void*);
    _Bool (*terminated)(void*);
    char*  (*kind)(void*);
    struct sNode* (*left_value)(void*);
};

struct tuple2$2char$phsType$ph
{
    char*  v1  ;
    struct sType*  v2  ;
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
    char*  mName  ;
    int mGenericsNum;
    int mMethodGenericsNum;
    struct list$1tuple2$2char$phsType$ph$ph* mFields;
    char*  mParentClassName  ;
    char*  mAttribute  ;
    _Bool mIter;
};

struct list_item$1sType$ph
{
    struct sType*  item  ;
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
    struct sClass*  mClass  ;
    struct sType*  mOriginalLoadVarType  ;
    struct sType*  mChannelType  ;
    struct list$1sType$ph* mGenericsTypes;
    struct sType*  mNoSolvedGenericsType  ;
    struct sNode* mSizeNum;
    struct sNode* mAlignas;
    _Bool mAlignasDouble;
    char*  mTupleName  ;
    char*  mAttribute  ;
    char*  mVarAttribute  ;
    char*  mMiddleAttribute  ;
    char*  mPointerAttribute  ;
    _Bool mNew;
    _Bool mAllocaValue;
    _Bool mUnsigned;
    _Bool mShort;
    _Bool mLong;
    _Bool mLongLong;
    _Bool mConstant;
    _Bool mAtomic;
    _Bool mThreadLocal;
    _Bool mNorecord;
    _Bool mThread;
    _Bool mComplex;
    _Bool mRegister;
    _Bool mVolatile;
    _Bool mNoreturn;
    _Bool mStatic;
    _Bool mWeak;
    _Bool mUniq;
    _Bool mExtern;
    _Bool mRestrict;
    _Bool mHeap;
    _Bool mChannel;
    _Bool mDefferRightValue;
    _Bool mNoHeap;
    _Bool mRefference;
    _Bool mSlice;
    _Bool mOptional;
    _Bool mNoCallingDestructor;
    _Bool mTypeName;
    _Bool mAnonymous;
    char*  mAnonymousName  ;
    _Bool mInnerStruct;
    char*  mInnerStructName  ;
    _Bool mAnonymousVarName;
    _Bool mInline;
    char*  mAsmName  ;
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
    _Bool mMinusPointerNum;
    struct sType*  mTypedefOriginalType  ;
    char*  mOriginalTypeName  ;
    int mOriginalTypePointerNum;
    int mOriginalTypePointerHeap;
    _Bool mArrayPointerType;
    struct list$1sType$ph* mParamTypes;
    struct list$1char$ph* mParamNames;
    struct sType*  mResultType  ;
    _Bool mVarArgs;
    struct sNode* mTypeOfNode;
    struct list$1sNode$ph* mHeapArrayNum;
};

struct sVar
{
    char*  mName  ;
    char*  mCValueName  ;
    struct sType*  mType  ;
    _Bool mGlobal;
    _Bool mAllocaValue;
    _Bool mNoFree;
    char*  mFunName  ;
    _Bool no_output_come_code;
};

struct list_item$1sVar$ph
{
    struct sVar*  item  ;
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
    char*  mName  ;
    struct sType*  mResultType  ;
    struct list$1sType$ph* mParamTypes;
    struct list$1char$ph* mParamNames;
    struct list$1char$ph* mParamDefaultParametors;
    struct sType*  mLambdaType  ;
    struct list$1sVar$ph* mAllVar;
    struct sBlock*  mBlock  ;
    char*  mTextBlock  ;
    char*  mTextBlockSName  ;
    int mTextBlockSline;
    struct buffer*  mSource  ;
    struct buffer*  mSourceHead  ;
    struct buffer*  mSourceHead2  ;
    struct buffer*  mSourceEnd  ;
    _Bool mStatic;
    _Bool mInline;
    _Bool mUniq;
    _Bool mExternal;
    _Bool mVarArgs;
    _Bool mNoResultType;
    _Bool mConstFun;
    char*  mAttribute  ;
    char*  mMiddleAttribute  ;
    char*  mFunAttribute  ;
    _Bool mGenericsFun;
    _Bool mDefineReturnVar;
    char*  mAsmFun  ;
};

struct sGenericsFun
{
    struct sType*  mImplType  ;
    struct list$1char$ph* mGenericsTypeNames;
    struct list$1char$ph* mMethodGenericsTypeNames;
    char*  mName  ;
    struct sType*  mResultType  ;
    struct list$1sType$ph* mParamTypes;
    struct list$1char$ph* mParamNames;
    struct list$1char$ph* mParamDefaultParametors;
    char*  mBlock  ;
    int mSLine;
    _Bool mVarArgs;
    _Bool mGenerate;
    char*  mGenericsSName  ;
    int mGenericsSLine;
    _Bool mConstFun;
};

struct CVALUE
{
    char*  c_value  ;
    struct sType*  type  ;
    struct sVar*  var  ;
    struct sRightValueObject*  right_value_objects  ;
    char*  c_value_without_right_value_objects  ;
    char*  c_value_without_cast_object_value  ;
    _Bool mLoadField;
    _Bool mCastValue;
    _Bool mNullValue;
    char*  c_value_without_null_checker  ;
};

struct map$2char$phchar$ph
{
    char**  keys  ;
    _Bool* item_existance;
    char**  items  ;
    int size;
    int len;
    struct list$1char$ph* key_list;
    int it;
};

struct sModule
{
    struct buffer*  mSourceHead  ;
    struct buffer*  mSource  ;
    char*  mLastCode  ;
    char*  mLastCode2  ;
    struct map$2char$phchar$ph* mHeader;
};

struct map$2char$phsVar$ph
{
    char**  keys  ;
    _Bool* item_existance;
    struct sVar**  items  ;
    int size;
    int len;
    struct list$1char$ph* key_list;
    int it;
};

struct sVarTable
{
    struct map$2char$phsVar$ph* mVars;
    _Bool mGlobal;
    struct sVarTable*  mParent  ;
};

struct sBlock
{
    struct list$1sNode$ph* mNodes;
    struct sVarTable*  mVarTable  ;
    _Bool mOmitSemicolon;
};

struct sRightValueObject
{
    struct sType*  mType  ;
    char*  mVarName  ;
    char*  mFunName  ;
    char* mSName;
    int mSLine;
    _Bool mFreed;
    int mID;
    int mBlockLevel;
    _Bool mStored;
    _Bool mDecrementRefCount;
    struct sType*  mObjType  ;
    char*  mObjValue  ;
    struct sVar*  mObjVar  ;
    _Bool mNoFree;
};

struct span$1char$p
{
    char* memory;
    char* p;
    unsigned long  len  ;
    _Bool local;
    _Bool heap;
    _Bool global;
    void* stacktop;
};

struct map$2char$phsFun$ph
{
    char**  keys  ;
    _Bool* item_existance;
    struct sFun**  items  ;
    int size;
    int len;
    struct list$1char$ph* key_list;
    int it;
};

struct map$2char$phsGenericsFun$ph
{
    char**  keys  ;
    _Bool* item_existance;
    struct sGenericsFun**  items  ;
    int size;
    int len;
    struct list$1char$ph* key_list;
    int it;
};

struct map$2char$phsClass$ph
{
    char**  keys  ;
    _Bool* item_existance;
    struct sClass**  items  ;
    int size;
    int len;
    struct list$1char$ph* key_list;
    int it;
};

struct map$2char$phsType$ph
{
    char**  keys  ;
    _Bool* item_existance;
    struct sType**  items  ;
    int size;
    int len;
    struct list$1char$ph* key_list;
    int it;
};

struct map$2char$phbuffer$ph
{
    char**  keys  ;
    _Bool* item_existance;
    struct buffer**  items  ;
    int size;
    int len;
    struct list$1char$ph* key_list;
    int it;
};

struct list_item$1sRightValueObject$ph
{
    struct sRightValueObject*  item  ;
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
    struct CVALUE*  item  ;
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
    struct span$1char$p* p;
    char* head;
    struct buffer*  source  ;
    char* end;
    char*  sname  ;
    char*  sname_at_head  ;
    char*  base_sname  ;
    int sline;
    int err_num;
    int warning_num;
    char*  clang_option  ;
    char*  cpp_option  ;
    char*  linker_option  ;
    char*  linker_option2  ;
    _Bool no_output_err;
    _Bool no_output_come_code;
    _Bool undefined_array_num_var;
    struct sFun*  come_fun  ;
    struct sFun*  caller_fun  ;
    int caller_line;
    char* caller_sname;
    int block_level;
    struct map$2char$phsFun$ph* funcs;
    struct map$2char$phsFun$ph* uniq_funcs;
    struct map$2char$phsGenericsFun$ph* generics_funcs;
    struct map$2char$phsClass$ph* classes;
    struct map$2char$phsType$ph* types;
    struct map$2char$phsClass$ph* generics_classes;
    struct map$2char$phbuffer$ph* struct_definition;
    struct map$2char$phbuffer$ph* c_include_definition;
    struct map$2char$phbuffer$ph* var_definition;
    struct map$2char$phbuffer$ph* previous_struct_definition;
    struct map$2char$phbuffer$ph* typedef_definition;
    struct map$2char$phsType$ph* named_child_struct;
    struct map$2char$phchar$ph* reflection_vars;
    struct sModule*  module  ;
    struct sType*  type  ;
    struct list$1sRightValueObject$ph* right_value_objects;
    struct sType*  generics_type  ;
    struct list$1sType$ph* method_generics_types;
    struct list$1CVALUE$ph* stack;
    struct sType*  come_function_result_type  ;
    struct sType*  come_method_block_function_result_type  ;
    struct sVarTable*  lv_table  ;
    struct sVarTable*  gv_table  ;
    _Bool no_comma;
    _Bool no_assign;
    _Bool no_label;
    _Bool last_statment_is_return;
    struct list$1char$ph* generics_type_names;
    struct list$1char$ph* method_generics_type_names;
    struct sType*  impl_type  ;
    struct sType*  class_type  ;
    int current_stack_num;
    int num_method_block;
    struct sClass*  current_stack_frame_struct  ;
    _Bool define_struct;
    _Bool in_typedef;
    char*  output_file_name  ;
    struct sVarTable*  current_loop_vtable  ;
    _Bool verbose;
    int num_current_stack;
    int num_source_files;
    int max_source_files;
    _Bool writing_source_file_position;
    struct sType*  function_result_type  ;
    _Bool in_class;
    struct map$2char$phchar$ph* module_params;
    _Bool constructor_;
    struct sClass*  defining_class  ;
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
    struct sFun*  calling_fun  ;
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
    char*  pragma  ;
    struct list$1char$ph* pragma_pack_stack;
    _Bool in_refference;
    struct buffer*  paren_block_buffer  ;
    _Bool in_typeof;
    _Bool in_store_array;
    int parse_struct_recursive_count;
    _Bool exp_value;
    struct buffer*  if_expression_buffer  ;
    char*  if_result_value_name  ;
    _Bool if_result_value_name_defined;
    struct sType*  if_result_type  ;
    _Bool defer_block;
    struct buffer*  loop_expression_buffer  ;
    char*  loop_result_value_name  ;
    _Bool loop_result_value_name_defined;
    struct sType*  loop_result_type  ;
    char*  iter_buffer  ;
    char*  iter_next  ;
    char*  iter_block  ;
    _Bool use_iter_next;
    struct sType*  iter_type  ;
    int id;
};

struct sNodeBase
{
    int sline;
    char*  sname  ;
    int sline_real;
};

struct sCurrentNode
{
    int sline;
    char*  sname  ;
    int sline_real;
};

struct tuple2$2sType$phchar$ph
{
    struct sType*  v1  ;
    char*  v2  ;
};

struct tuple2$2char$phsGenericsFun$p
{
    char*  v1  ;
    struct sGenericsFun*  v2  ;
};

struct tuple3$3sType$phchar$ph_Bool$
{
    struct sType*  v1  ;
    char*  v2  ;
    _Bool v3;
};

struct tuple2$2char$phchar$ph
{
    char*  v1  ;
    char*  v2  ;
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
    struct sFun*  v1  ;
    char*  v2  ;
};

struct tuple2$2char$ph_Bool$
{
    char*  v1  ;
    _Bool v2;
};

struct tuple5$5_Bool$_Bool$_Bool$_Bool$_Bool$
{
    _Bool v1;
    _Bool v2;
    _Bool v3;
    _Bool v4;
    _Bool v5;
};

struct tuple3$3sType$phchar$phsNode$ph
{
    struct sType*  v1  ;
    char*  v2  ;
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
    char*  v1  ;
    struct sFun*  v2  ;
    struct sGenericsFun*  v3  ;
};

struct tuple2$2char$phsNode$ph
{
    char*  v1  ;
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
    char*  sname  ;
    int sline_real;
};

struct sNullChecker
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sNode* value;
};

struct sHeapChecker
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sNode* value;
};

struct __current_stack1__
{
    struct sType**  type2  ;
    char** name;
    struct sInfo**  info  ;
    struct buffer**  buf  ;
};

struct __current_stack2__
{
    char**  type_name  ;
    struct sType**  type  ;
    char** name;
    struct sInfo**  info  ;
    _Bool* no_static;
    _Bool* in_typedef;
    struct buffer**  buf  ;
    struct sType**  type2  ;
};

struct __current_stack3__
{
    char**  type_name  ;
    struct sType**  type  ;
    char** name;
    struct sInfo**  info  ;
    _Bool* no_static;
    struct buffer**  buf  ;
    struct sType**  type2  ;
};

struct __current_stack4__
{
    char**  type_name  ;
    struct sType**  type  ;
    char** name;
    struct sInfo**  info  ;
    struct buffer**  buf  ;
    struct sType**  type2  ;
};

/// variable definition ///
extern struct _IO_FILE*  stdin  ;
extern struct _IO_FILE*  stdout  ;
extern struct _IO_FILE*  stderr  ;
extern char* program_invocation_name;
extern char* program_invocation_short_name;
extern struct neo_frame*  neo_current_frame  ;

extern struct sMemHeader*  gAllocMem  ;

extern struct sMemHeader*  gFreeMem  ;

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
extern _Bool gComeCPlusPlus;
extern _Bool gComelang;
extern _Bool gComeSafe;
extern _Bool gPortableC;
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
unsigned long  __ctype_get_mb_cur_max();
double atof(const char* __nptr) __attribute__ ((__pure__))  ;
int atoi(const char* __nptr) __attribute__ ((__pure__))  ;
long  int atol(const char* __nptr) __attribute__ ((__pure__))  ;
long long int atoll(const char* __nptr) __attribute__ ((__pure__))  ;
double strtod(const char* __restrict __nptr, char** __restrict __endptr);
float strtof(const char* __restrict __nptr, char** __restrict __endptr);
long  double strtold(const char* __restrict __nptr, char** __restrict __endptr);
float  strtof32(const char* __restrict __nptr, char** __restrict __endptr);
double  strtof64(const char* __restrict __nptr, char** __restrict __endptr);
double  strtof32x(const char* __restrict __nptr, char** __restrict __endptr);
long  double  strtof64x(const char* __restrict __nptr, char** __restrict __endptr);
long  int strtol(const char* __restrict __nptr, char** __restrict __endptr, int __base);
unsigned long  int strtoul(const char* __restrict __nptr, char** __restrict __endptr, int __base);
long long int strtoq(const char* __restrict __nptr, char** __restrict __endptr, int __base);
unsigned long long int strtouq(const char* __restrict __nptr, char** __restrict __endptr, int __base);
long long int strtoll(const char* __restrict __nptr, char** __restrict __endptr, int __base);
unsigned long long int strtoull(const char* __restrict __nptr, char** __restrict __endptr, int __base);
long  int __isoc23_strtol(const char* __restrict __nptr, char** __restrict __endptr, int __base);
unsigned long  int __isoc23_strtoul(const char* __restrict __nptr, char** __restrict __endptr, int __base);
long long int __isoc23_strtoll(const char* __restrict __nptr, char** __restrict __endptr, int __base);
unsigned long long int __isoc23_strtoull(const char* __restrict __nptr, char** __restrict __endptr, int __base);
int strfromd(char* __dest, unsigned long  __size  , const char* __format, double __f);
int strfromf(char* __dest, unsigned long  __size  , const char* __format, float __f);
int strfroml(char* __dest, unsigned long  __size  , const char* __format, long  double __f);
int strfromf32(char* __dest, unsigned long  __size  , const char* __format, float  __f  );
int strfromf64(char* __dest, unsigned long  __size  , const char* __format, double  __f  );
int strfromf32x(char* __dest, unsigned long  __size  , const char* __format, double  __f  );
int strfromf64x(char* __dest, unsigned long  __size  , const char* __format, long  double  __f  );
long  int strtol_l(const char* __restrict __nptr, char** __restrict __endptr, int __base, struct __locale_struct*  __loc  );
unsigned long  int strtoul_l(const char* __restrict __nptr, char** __restrict __endptr, int __base, struct __locale_struct*  __loc  );
long long int strtoll_l(const char* __restrict __nptr, char** __restrict __endptr, int __base, struct __locale_struct*  __loc  );
unsigned long long int strtoull_l(const char* __restrict __nptr, char** __restrict __endptr, int __base, struct __locale_struct*  __loc  );
long  int __isoc23_strtol_l(const char* __restrict __nptr, char** __restrict __endptr, int __base, struct __locale_struct*  __loc  );
unsigned long  int __isoc23_strtoul_l(const char* __restrict __nptr, char** __restrict __endptr, int __base, struct __locale_struct*  __loc  );
long long int __isoc23_strtoll_l(const char* __restrict __nptr, char** __restrict __endptr, int __base, struct __locale_struct*  __loc  );
unsigned long long int __isoc23_strtoull_l(const char* __restrict __nptr, char** __restrict __endptr, int __base, struct __locale_struct*  __loc  );
double strtod_l(const char* __restrict __nptr, char** __restrict __endptr, struct __locale_struct*  __loc  );
float strtof_l(const char* __restrict __nptr, char** __restrict __endptr, struct __locale_struct*  __loc  );
long  double strtold_l(const char* __restrict __nptr, char** __restrict __endptr, struct __locale_struct*  __loc  );
float  strtof32_l(const char* __restrict __nptr, char** __restrict __endptr, struct __locale_struct*  __loc  );
double  strtof64_l(const char* __restrict __nptr, char** __restrict __endptr, struct __locale_struct*  __loc  );
double  strtof32x_l(const char* __restrict __nptr, char** __restrict __endptr, struct __locale_struct*  __loc  );
long  double  strtof64x_l(const char* __restrict __nptr, char** __restrict __endptr, struct __locale_struct*  __loc  );
char* l64a(long  int __n);
long  int a64l(const char* __s) __attribute__ ((__pure__))  ;
int select(int __nfds, struct anonymous_typeX8* __restrict  __readfds  , struct anonymous_typeX8* __restrict  __writefds  , struct anonymous_typeX8* __restrict  __exceptfds  , struct timeval* __restrict  __timeout  );
int pselect(int __nfds, struct anonymous_typeX8* __restrict  __readfds  , struct anonymous_typeX8* __restrict  __writefds  , struct anonymous_typeX8* __restrict  __exceptfds  , const struct timespec* __restrict  __timeout  , const struct anonymous_typeX7* __restrict  __sigmask  );
long  int random();
void srandom(unsigned int __seed);
char* initstate(unsigned int __seed, char* __statebuf, unsigned long  __statelen  );
char* setstate(char* __statebuf);
int random_r(struct random_data* __restrict  __buf  , int* __restrict  __result  );
int srandom_r(unsigned int __seed, struct random_data*  __buf  );
int initstate_r(unsigned int __seed, char* __restrict __statebuf, unsigned long  __statelen  , struct random_data* __restrict  __buf  );
int setstate_r(char* __restrict __statebuf, struct random_data* __restrict  __buf  );
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
int drand48_r(struct drand48_data* __restrict  __buffer  , double* __restrict __result);
int erand48_r(unsigned short int __xsubi[3], struct drand48_data* __restrict  __buffer  , double* __restrict __result);
int lrand48_r(struct drand48_data* __restrict  __buffer  , long  int* __restrict __result);
int nrand48_r(unsigned short int __xsubi[3], struct drand48_data* __restrict  __buffer  , long  int* __restrict __result);
int mrand48_r(struct drand48_data* __restrict  __buffer  , long  int* __restrict __result);
int jrand48_r(unsigned short int __xsubi[3], struct drand48_data* __restrict  __buffer  , long  int* __restrict __result);
int srand48_r(long  int __seedval, struct drand48_data*  __buffer  );
int seed48_r(unsigned short int __seed16v[3], struct drand48_data*  __buffer  );
int lcong48_r(unsigned short int __param[7], struct drand48_data*  __buffer  );
unsigned int  arc4random();
void arc4random_buf(void* __buf, unsigned long  __size  );
unsigned int  arc4random_uniform(unsigned int  __upper_bound  );
void* malloc(unsigned long  __size  ) __attribute__ ((__malloc__))
      ;
void* calloc(unsigned long  __nmemb  , unsigned long  __size  ) __attribute__ ((__malloc__))  ;
void* realloc(void* __ptr, unsigned long  __size  );
void free(void* __ptr);
void* reallocarray(void* __ptr, unsigned long  __nmemb  , unsigned long  __size  );
void* alloca(unsigned long  __size  );
void* valloc(unsigned long  __size  ) __attribute__ ((__malloc__))
      ;
int posix_memalign(void** __memptr, unsigned long  __alignment  , unsigned long  __size  );
void* aligned_alloc(unsigned long  __alignment  , unsigned long  __size  ) __attribute__ ((__malloc__)) 
      ;
void abort() __attribute__ ((__noreturn__)) ;
int atexit(void (*__func)());
int at_quick_exit(void (*__func)());
int on_exit(void (*__func)(int,void*), void* __arg);
void exit(int __status) __attribute__ ((__noreturn__));
void quick_exit(int __status) __attribute__ ((__noreturn__));
void _Exit(int __status) __attribute__ ((__noreturn__));
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
char* canonicalize_file_name(const char* __name) __attribute__ ((__malloc__))
      ;
char* realpath(const char* __restrict __name, char* __restrict __resolved);
void* bsearch(const void* __key, const void* __base, unsigned long  __nmemb  , unsigned long  __size  , int (*__compar)(const void*,const void*)  );
void qsort(void* __base, unsigned long  __nmemb  , unsigned long  __size  , int (*__compar)(const void*,const void*)  );
void qsort_r(void* __base, unsigned long  __nmemb  , unsigned long  __size  , int (*__compar)(const void*,const void*,void*)  , void* __arg);
int abs(int __x) __attribute__ ((__const__)) ;
long  int labs(long  int __x) __attribute__ ((__const__)) ;
long long int llabs(long long int __x) __attribute__ ((__const__)) ;
unsigned int uabs(int __x) __attribute__ ((__const__)) ;
unsigned long  int ulabs(long  int __x) __attribute__ ((__const__)) ;
unsigned long long int ullabs(long long int __x) __attribute__ ((__const__)) ;
struct anonymous_typeX4  div(int __numer, int __denom) __attribute__ ((__const__)) ;
struct anonymous_typeX5  ldiv(long  int __numer, long  int __denom) __attribute__ ((__const__)) ;
struct anonymous_typeX6  lldiv(long long int __numer, long long int __denom) __attribute__ ((__const__)) ;
char* ecvt(double __value, int __ndigit, int* __restrict __decpt, int* __restrict __sign);
char* fcvt(double __value, int __ndigit, int* __restrict __decpt, int* __restrict __sign);
char* gcvt(double __value, int __ndigit, char* __buf);
char* qecvt(long  double __value, int __ndigit, int* __restrict __decpt, int* __restrict __sign);
char* qfcvt(long  double __value, int __ndigit, int* __restrict __decpt, int* __restrict __sign);
char* qgcvt(long  double __value, int __ndigit, char* __buf);
int ecvt_r(double __value, int __ndigit, int* __restrict __decpt, int* __restrict __sign, char* __restrict __buf, unsigned long  __len  );
int fcvt_r(double __value, int __ndigit, int* __restrict __decpt, int* __restrict __sign, char* __restrict __buf, unsigned long  __len  );
int qecvt_r(long  double __value, int __ndigit, int* __restrict __decpt, int* __restrict __sign, char* __restrict __buf, unsigned long  __len  );
int qfcvt_r(long  double __value, int __ndigit, int* __restrict __decpt, int* __restrict __sign, char* __restrict __buf, unsigned long  __len  );
int mblen(const char* __s, unsigned long  __n  );
int mbtowc(int* __restrict  __pwc  , const char* __restrict __s, unsigned long  __n  );
int wctomb(char* __s, int  __wchar  );
unsigned long  mbstowcs(int* __restrict  __pwcs  , const char* __restrict __s, unsigned long  __n  );
unsigned long  wcstombs(char* __restrict __s, const int* __restrict  __pwcs  , unsigned long  __n  );
int rpmatch(const char* __response);
int getsubopt(char** __restrict __optionp, char** const __restrict __tokens, char** __restrict __valuep);
int posix_openpt(int __oflag);
int grantpt(int __fd);
int unlockpt(int __fd);
char* ptsname(int __fd);
int ptsname_r(int __fd, char* __buf, unsigned long  __buflen  );
int getpt();
int getloadavg(double __loadavg[], int __nelem);
void* memcpy(void* __restrict __dest, const void* __restrict __src, unsigned long  __n  );
void* memmove(void* __dest, const void* __src, unsigned long  __n  );
void* memccpy(void* __restrict __dest, const void* __restrict __src, int __c, unsigned long  __n  );
void* memset(void* __s, int __c, unsigned long  __n  );
int memcmp(const void* __s1, const void* __s2, unsigned long  __n  ) __attribute__ ((__pure__)) ;
int __memcmpeq(const void* __s1, const void* __s2, unsigned long  __n  ) __attribute__ ((__pure__)) ;
void* memchr(const void* __s, int __c, unsigned long  __n  ) __attribute__ ((__pure__)) ;
void* rawmemchr(const void* __s, int __c) __attribute__ ((__pure__)) ;
void* memrchr(const void* __s, int __c, unsigned long  __n  ) __attribute__ ((__pure__)) 
      ;
char* strcpy(char* __restrict __dest, const char* __restrict __src);
char* strncpy(char* __restrict __dest, const char* __restrict __src, unsigned long  __n  );
char* strcat(char* __restrict __dest, const char* __restrict __src);
char* strncat(char* __restrict __dest, const char* __restrict __src, unsigned long  __n  );
int strcmp(const char* __s1, const char* __s2) __attribute__ ((__pure__)) ;
int strncmp(const char* __s1, const char* __s2, unsigned long  __n  ) __attribute__ ((__pure__)) ;
int strcoll(const char* __s1, const char* __s2) __attribute__ ((__pure__)) ;
unsigned long  strxfrm(char* __restrict __dest, const char* __restrict __src, unsigned long  __n  );
int strcoll_l(const char* __s1, const char* __s2, struct __locale_struct*  __l  ) __attribute__ ((__pure__)) ;
unsigned long  strxfrm_l(char* __dest, const char* __src, unsigned long  __n  , struct __locale_struct*  __l  );
char* strdup(const char* __s) __attribute__ ((__malloc__)) ;
char* strndup(const char* __string, unsigned long  __n  ) __attribute__ ((__malloc__)) ;
char* strchr(const char* __s, int __c) __attribute__ ((__pure__)) ;
char* strrchr(const char* __s, int __c) __attribute__ ((__pure__)) ;
char* strchrnul(const char* __s, int __c) __attribute__ ((__pure__)) ;
unsigned long  strcspn(const char* __s, const char* __reject) __attribute__ ((__pure__)) ;
unsigned long  strspn(const char* __s, const char* __accept) __attribute__ ((__pure__)) ;
char* strpbrk(const char* __s, const char* __accept) __attribute__ ((__pure__)) ;
char* strstr(const char* __haystack, const char* __needle) __attribute__ ((__pure__)) ;
char* strtok(char* __restrict __s, const char* __restrict __delim);
char* __strtok_r(char* __restrict __s, const char* __restrict __delim, char** __restrict __save_ptr);
char* strtok_r(char* __restrict __s, const char* __restrict __delim, char** __restrict __save_ptr);
char* strcasestr(const char* __haystack, const char* __needle) __attribute__ ((__pure__)) ;
void* memmem(const void* __haystack, unsigned long  __haystacklen  , const void* __needle, unsigned long  __needlelen  ) __attribute__ ((__pure__)) 
    
    ;
void* __mempcpy(void* __restrict __dest, const void* __restrict __src, unsigned long  __n  );
void* mempcpy(void* __restrict __dest, const void* __restrict __src, unsigned long  __n  );
unsigned long  strlen(const char* __s) __attribute__ ((__pure__)) ;
unsigned long  strnlen(const char* __string, unsigned long  __maxlen  ) __attribute__ ((__pure__)) ;
char* strerror(int __errnum);
char* strerror_r(int __errnum, char* __buf, unsigned long  __buflen  );
const char* strerrordesc_np(int __err);
const char* strerrorname_np(int __err);
char* strerror_l(int __errnum, struct __locale_struct*  __l  );
int bcmp(const void* __s1, const void* __s2, unsigned long  __n  ) __attribute__ ((__pure__)) ;
void bcopy(const void* __src, void* __dest, unsigned long  __n  );
void bzero(void* __s, unsigned long  __n  );
char* index(const char* __s, int __c) __attribute__ ((__pure__)) ;
char* rindex(const char* __s, int __c) __attribute__ ((__pure__)) ;
int ffs(int __i) __attribute__ ((__const__));
int ffsl(long  int __l) __attribute__ ((__const__));
int ffsll(long long int __ll) __attribute__ ((__const__));
int strcasecmp(const char* __s1, const char* __s2) __attribute__ ((__pure__)) ;
int strncasecmp(const char* __s1, const char* __s2, unsigned long  __n  ) __attribute__ ((__pure__)) ;
int strcasecmp_l(const char* __s1, const char* __s2, struct __locale_struct*  __loc  ) __attribute__ ((__pure__)) ;
int strncasecmp_l(const char* __s1, const char* __s2, unsigned long  __n  , struct __locale_struct*  __loc  ) __attribute__ ((__pure__)) ;
void explicit_bzero(void* __s, unsigned long  __n  );
char* strsep(char** __restrict __stringp, const char* __restrict __delim);
char* strsignal(int __sig);
const char* sigabbrev_np(int __sig);
const char* sigdescr_np(int __sig);
char* __stpcpy(char* __restrict __dest, const char* __restrict __src);
char* stpcpy(char* __restrict __dest, const char* __restrict __src);
char* __stpncpy(char* __restrict __dest, const char* __restrict __src, unsigned long  __n  );
char* stpncpy(char* __restrict __dest, const char* __restrict __src, unsigned long  __n  );
unsigned long  strlcpy(char* __restrict __dest, const char* __restrict __src, unsigned long  __n  );
unsigned long  strlcat(char* __restrict __dest, const char* __restrict __src, unsigned long  __n  );
int strverscmp(const char* __s1, const char* __s2) __attribute__ ((__pure__)) ;
char* strfry(char* __string);
void* memfrob(void* __s, unsigned long  __n  );
char* basename(const char* __filename);
long  int __sysconf(int __name);
char* setlocale(int __category, const char* __locale);
struct lconv*  localeconv();
struct __locale_struct*  newlocale(int __category_mask, const char* __locale, struct __locale_struct*  __base  );
struct __locale_struct*  duplocale(struct __locale_struct*  __dataset  );
void freelocale(struct __locale_struct*  __dataset  );
struct __locale_struct*  uselocale(struct __locale_struct*  __dataset  );
int* __errno_location() __attribute__ ((__const__));
void __assert_fail(const char* __assertion, const char* __file, unsigned int __line, const char* __function) __attribute__ ((__noreturn__)) ;
void __assert_perror_fail(int __errnum, const char* __file, unsigned int __line, const char* __function) __attribute__ ((__noreturn__)) ;
void __assert(const char* __assertion, const char* __file, int __line) __attribute__ ((__noreturn__)) ;
void stackframe();
void stackframe2(void* mem);
_Bool die(const char* msg);
void come_heap_final();
void* alloc_from_pages(unsigned long  size  );
void come_free_mem_of_heap_pool(void* mem);
void* come_alloc_mem_from_heap_pool(unsigned long  compiletime_size  , unsigned long  size  , const char* sname, int sline, int id, const char* class_name);
char* come_dynamic_typeof(void* mem);
unsigned long  dynamic_sizeof(void* mem);
void* come_calloc(unsigned long  count  , unsigned long  size  , const char* sname, int sline, int id, const char* class_name);
_Bool come_is_alive(void* mem);
void come_free(void* mem);
void* come_memdup(void* block, char* sname, int sline, int id, const char* class_name);
void* come_increment_ref_count(void* mem, char* sname, int sline, int id);
void* come_print_ref_count(void* mem);
int come_get_ref_count(void* mem);
void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, void* result_obj, char* sname, int sline, int id);
void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, void* result_obj, char* sname, int sline, int id);
void xassert(const char* msg, _Bool test);
void* come_null_checker(void* mem, const char* sname, int sline, int id);
void* come_heap_checker(void* mem, const char* sname, int sline, int id);
char*  __builtin_string(const char* str);
struct buffer*  buffer_initialize(struct buffer*  self  );
struct buffer*  buffer_initialize_with_value(struct buffer*  self  , const char* mem, unsigned long  size  );
void buffer_finalize(struct buffer*  self  );
struct buffer*  buffer_clone(struct buffer*  self  );
_Bool buffer_equals(struct buffer*  left  , struct buffer*  right  );
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
_Bool _Bool_equals(_Bool self, _Bool right);
_Bool char_equals(char self, char right);
_Bool short_equals(short self, short right);
_Bool int_equals(int self, int right);
_Bool long_equals(long self, long right);
_Bool size_t_equals(unsigned long  self  , unsigned long  right  );
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
char*  charp_operator_add(const char* self, const char* right);
char*  string_operator_add(char* self, const char* right);
char*  charp_operator_mult(const char* self, int right);
char*  string_operator_mult(const char* self, int right);
_Bool charpa_contained(const char* self[], unsigned long  len  , const char* str);
unsigned long  shorta_length(short* self, unsigned long  len  );
unsigned long  inta_length(int* self, unsigned long  len  );
unsigned long  longa_length(long* self, unsigned long  len  );
unsigned long  floata_length(float* self, unsigned long  len  );
unsigned long  doublea_length(double* self, unsigned long  len  );
unsigned int _Bool_get_hash_key(_Bool value);
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
_Bool _Bool_clone(_Bool self);
char char_clone(char self);
short int short_clone(short self);
int int_clone(int self);
long  int long_clone(long self);
unsigned long  size_t_clone(unsigned long  self  );
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
char*  _Bool_to_string(_Bool self);
char*  char_to_string(char self);
char*  short_to_string(short self);
char*  int_to_string(int self);
char*  long_to_string(long self);
char*  size_t_to_string(unsigned long  self  );
char*  float_to_string(float self);
char*  double_to_string(double self);
char*  string_to_string(char* self);
char*  charp_to_string(const char* self);
int _Bool_compare(_Bool left, _Bool right);
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
int re_matchp_ex(struct re_program*  pattern  , const char* text, int* matchlength, struct re_capture*  captures  , int max_captures, _Bool ignore_case);
int re_matchp(struct re_program*  pattern  , const char* text, int* matchlength, struct re_capture*  captures  , int max_captures);
int re_match(const char* pattern, const char* text, int* matchlength);
struct re_program*  re_compile(const char* pattern);
void re_print(struct re_program*  pattern  );
void clear_captures(struct anonymous_typeX25*  ctx  );
void snapshot_captures(const struct anonymous_typeX25*  ctx  , struct re_capture*  buffer_  );
void restore_captures(struct anonymous_typeX25*  ctx  , const struct re_capture*  buffer_  );
int re_unescape_literal_char(char escaped, unsigned char* out_char);
struct regex_t*  new_token(struct anonymous_typeX24*  st  );
int append_token(struct regex_t**  head  , struct regex_t**  tail  , struct regex_t*  token  );
struct regex_t*  compile_sequence(struct anonymous_typeX24*  st  , const char* pattern, int* pos, int in_group);
const char* matchpattern(struct regex_t*  pattern  , const char* text, struct anonymous_typeX25*  ctx  );
const char* matchgroup(struct regex_t*  token  , struct regex_t*  rest  , const char* text, struct anonymous_typeX25*  ctx  );
const char* matchstar(struct regex_t*  token  , struct regex_t*  rest  , const char* text, struct anonymous_typeX25*  ctx  );
const char* matchplus(struct regex_t*  token  , struct regex_t*  rest  , const char* text, struct anonymous_typeX25*  ctx  );
const char* matchquestion(struct regex_t*  token  , struct regex_t*  rest  , const char* text, struct anonymous_typeX25*  ctx  );
unsigned char re_fold_char(unsigned char c, _Bool ignore_case);
const char* matchtoken(struct regex_t*  token  , const char* text, struct anonymous_typeX25*  ctx  );
int matchdigit(char c);
int matchalpha(char c);
int matchwhitespace(char c);
int matchalphanum(char c);
int matchrange(char c, const char* str, _Bool ignore_case);
int matchdot(char c);
int ismetachar(char c);
int matchmetachar(char c, const char* str);
int matchcharclass(char c, const char* str, _Bool ignore_case);
void re_print_internal(struct regex_t*  pattern  , int depth);
int re_get_group_count(struct re_program*  pattern  );
int charp_index_regex(const char* self, const char* reg, int default_value, _Bool ignore_case);
int charp_rindex_regex(const char* self, const char* reg, int default_value, _Bool ignore_case);
char*  string_chomp(const char* str);
int string_rindex_regex(char* self, const char* reg, int default_value, _Bool ignore_case);
int string_index_regex(char* self, const char* reg, int default_value, _Bool ignore_case);
_Bool charp_match(char* self, const char* reg, _Bool ignore_case);
struct list$1char$ph* charp_scan(const char* self, const char* reg, _Bool ignore_case);
struct list$1char$ph* charp_split(const char* self, const char* reg, _Bool ignore_case);
char*  string_sub(char* self, const char* reg, const char* replace, _Bool ignore_case);
struct list$1char$ph* string_scan(char* self, const char* reg, _Bool ignore_case);
struct list$1char$ph* string_split(char* self, const char* reg, _Bool ignore_case);
_Bool string_match(char* self, const char* reg, _Bool ignore_case);
char*  charp_sub(char* self, const char* reg, const char* replace, _Bool global, _Bool ignore_case);
char*  charp_sub_block(char* self, const char* reg, _Bool global, _Bool ignore_case, void* parent, char* (*block)(void*,char*,struct list$1char$ph*));
struct list$1char$ph* charp_scan_block(const char* self, const char* reg, _Bool ignore_case, void* parent, char* (*block)(void*,char*,struct list$1char$ph*));
char*  string_sub_block(char* self, const char* reg, _Bool global, _Bool ignore_case, void* parent, char* (*block)(void*,char*,struct list$1char$ph*));
int*  wcscpy(int* __restrict  __dest  , const int* __restrict  __src  );
int*  wcsncpy(int* __restrict  __dest  , const int* __restrict  __src  , unsigned long  __n  );
unsigned long  wcslcpy(int* __restrict  __dest  , const int* __restrict  __src  , unsigned long  __n  );
unsigned long  wcslcat(int* __restrict  __dest  , const int* __restrict  __src  , unsigned long  __n  );
int*  wcscat(int* __restrict  __dest  , const int* __restrict  __src  );
int*  wcsncat(int* __restrict  __dest  , const int* __restrict  __src  , unsigned long  __n  );
int wcscmp(const int*  __s1  , const int*  __s2  ) __attribute__ ((__pure__)) ;
int wcsncmp(const int*  __s1  , const int*  __s2  , unsigned long  __n  ) __attribute__ ((__pure__)) ;
int wcscasecmp(const int*  __s1  , const int*  __s2  );
int wcsncasecmp(const int*  __s1  , const int*  __s2  , unsigned long  __n  );
int wcscasecmp_l(const int*  __s1  , const int*  __s2  , struct __locale_struct*  __loc  );
int wcsncasecmp_l(const int*  __s1  , const int*  __s2  , unsigned long  __n  , struct __locale_struct*  __loc  );
int wcscoll(const int*  __s1  , const int*  __s2  );
unsigned long  wcsxfrm(int* __restrict  __s1  , const int* __restrict  __s2  , unsigned long  __n  );
int wcscoll_l(const int*  __s1  , const int*  __s2  , struct __locale_struct*  __loc  );
unsigned long  wcsxfrm_l(int*  __s1  , const int*  __s2  , unsigned long  __n  , struct __locale_struct*  __loc  );
int*  wcsdup(const int*  __s  ) __attribute__ ((__malloc__)) ;
int*  wcschr(const int*  __wcs  , int  __wc  ) __attribute__ ((__pure__));
int*  wcsrchr(const int*  __wcs  , int  __wc  ) __attribute__ ((__pure__));
int*  wcschrnul(const int*  __s  , int  __wc  ) __attribute__ ((__pure__));
unsigned long  wcscspn(const int*  __wcs  , const int*  __reject  ) __attribute__ ((__pure__));
unsigned long  wcsspn(const int*  __wcs  , const int*  __accept  ) __attribute__ ((__pure__));
int*  wcspbrk(const int*  __wcs  , const int*  __accept  ) __attribute__ ((__pure__));
int*  wcsstr(const int*  __haystack  , const int*  __needle  ) __attribute__ ((__pure__));
int*  wcstok(int* __restrict  __s  , const int* __restrict  __delim  , int** __restrict  __ptr  );
unsigned long  wcslen(const int*  __s  ) __attribute__ ((__pure__));
int*  wcswcs(const int*  __haystack  , const int*  __needle  ) __attribute__ ((__pure__));
unsigned long  wcsnlen(const int*  __s  , unsigned long  __maxlen  ) __attribute__ ((__pure__));
int*  wmemchr(const int*  __s  , int  __c  , unsigned long  __n  ) __attribute__ ((__pure__));
int wmemcmp(const int*  __s1  , const int*  __s2  , unsigned long  __n  ) __attribute__ ((__pure__));
int*  wmemcpy(int* __restrict  __s1  , const int* __restrict  __s2  , unsigned long  __n  );
int*  wmemmove(int*  __s1  , const int*  __s2  , unsigned long  __n  );
int*  wmemset(int*  __s  , int  __c  , unsigned long  __n  );
int*  wmempcpy(int* __restrict  __s1  , const int* __restrict  __s2  , unsigned long  __n  );
unsigned int  btowc(int __c);
int wctob(unsigned int  __c  );
int mbsinit(const struct anonymous_typeX1*  __ps  ) __attribute__ ((__pure__));
unsigned long  mbrtowc(int* __restrict  __pwc  , const char* __restrict __s, unsigned long  __n  , struct anonymous_typeX1* __restrict  __p  );
unsigned long  wcrtomb(char* __restrict __s, int  __wc  , struct anonymous_typeX1* __restrict  __ps  );
unsigned long  __mbrlen(const char* __restrict __s, unsigned long  __n  , struct anonymous_typeX1* __restrict  __ps  );
unsigned long  mbrlen(const char* __restrict __s, unsigned long  __n  , struct anonymous_typeX1* __restrict  __ps  );
unsigned long  mbsrtowcs(int* __restrict  __dst  , const char** __restrict __src, unsigned long  __len  , struct anonymous_typeX1* __restrict  __ps  );
unsigned long  wcsrtombs(char* __restrict __dst, const int** __restrict  __src  , unsigned long  __len  , struct anonymous_typeX1* __restrict  __ps  );
unsigned long  mbsnrtowcs(int* __restrict  __dst  , const char** __restrict __src, unsigned long  __nmc  , unsigned long  __len  , struct anonymous_typeX1* __restrict  __ps  );
unsigned long  wcsnrtombs(char* __restrict __dst, const int** __restrict  __src  , unsigned long  __nwc  , unsigned long  __len  , struct anonymous_typeX1* __restrict  __ps  );
int wcwidth(int  __c  );
int wcswidth(const int*  __s  , unsigned long  __n  );
double wcstod(const int* __restrict  __nptr  , int** __restrict  __endptr  );
float wcstof(const int* __restrict  __nptr  , int** __restrict  __endptr  );
long  double wcstold(const int* __restrict  __nptr  , int** __restrict  __endptr  );
float  wcstof32(const int* __restrict  __nptr  , int** __restrict  __endptr  );
double  wcstof64(const int* __restrict  __nptr  , int** __restrict  __endptr  );
double  wcstof32x(const int* __restrict  __nptr  , int** __restrict  __endptr  );
long  double  wcstof64x(const int* __restrict  __nptr  , int** __restrict  __endptr  );
long  int wcstol(const int* __restrict  __nptr  , int** __restrict  __endptr  , int __base);
unsigned long  int wcstoul(const int* __restrict  __nptr  , int** __restrict  __endptr  , int __base);
long long int wcstoll(const int* __restrict  __nptr  , int** __restrict  __endptr  , int __base);
unsigned long long int wcstoull(const int* __restrict  __nptr  , int** __restrict  __endptr  , int __base);
long long int wcstoq(const int* __restrict  __nptr  , int** __restrict  __endptr  , int __base);
unsigned long long int wcstouq(const int* __restrict  __nptr  , int** __restrict  __endptr  , int __base);
long  int __isoc23_wcstol(const int* __restrict  __nptr  , int** __restrict  __endptr  , int __base);
unsigned long  int __isoc23_wcstoul(const int* __restrict  __nptr  , int** __restrict  __endptr  , int __base);
long long int __isoc23_wcstoll(const int* __restrict  __nptr  , int** __restrict  __endptr  , int __base);
unsigned long long int __isoc23_wcstoull(const int* __restrict  __nptr  , int** __restrict  __endptr  , int __base);
long  int wcstol_l(const int* __restrict  __nptr  , int** __restrict  __endptr  , int __base, struct __locale_struct*  __loc  );
unsigned long  int wcstoul_l(const int* __restrict  __nptr  , int** __restrict  __endptr  , int __base, struct __locale_struct*  __loc  );
long long int wcstoll_l(const int* __restrict  __nptr  , int** __restrict  __endptr  , int __base, struct __locale_struct*  __loc  );
unsigned long long int wcstoull_l(const int* __restrict  __nptr  , int** __restrict  __endptr  , int __base, struct __locale_struct*  __loc  );
long  int __isoc23_wcstol_l(const int* __restrict  __nptr  , int** __restrict  __endptr  , int __base, struct __locale_struct*  __loc  );
unsigned long  int __isoc23_wcstoul_l(const int* __restrict  __nptr  , int** __restrict  __endptr  , int __base, struct __locale_struct*  __loc  );
long long int __isoc23_wcstoll_l(const int* __restrict  __nptr  , int** __restrict  __endptr  , int __base, struct __locale_struct*  __loc  );
unsigned long long int __isoc23_wcstoull_l(const int* __restrict  __nptr  , int** __restrict  __endptr  , int __base, struct __locale_struct*  __loc  );
double wcstod_l(const int* __restrict  __nptr  , int** __restrict  __endptr  , struct __locale_struct*  __loc  );
float wcstof_l(const int* __restrict  __nptr  , int** __restrict  __endptr  , struct __locale_struct*  __loc  );
long  double wcstold_l(const int* __restrict  __nptr  , int** __restrict  __endptr  , struct __locale_struct*  __loc  );
float  wcstof32_l(const int* __restrict  __nptr  , int** __restrict  __endptr  , struct __locale_struct*  __loc  );
double  wcstof64_l(const int* __restrict  __nptr  , int** __restrict  __endptr  , struct __locale_struct*  __loc  );
double  wcstof32x_l(const int* __restrict  __nptr  , int** __restrict  __endptr  , struct __locale_struct*  __loc  );
long  double  wcstof64x_l(const int* __restrict  __nptr  , int** __restrict  __endptr  , struct __locale_struct*  __loc  );
int*  wcpcpy(int* __restrict  __dest  , const int* __restrict  __src  );
int*  wcpncpy(int* __restrict  __dest  , const int* __restrict  __src  , unsigned long  __n  );
struct _IO_FILE*  open_wmemstream(int**  __bufloc  , unsigned long*  __sizeloc  ) __attribute__ ((__malloc__)) ;
int fwide(struct _IO_FILE*  __fp  , int __mode);
int fwprintf(struct _IO_FILE* __restrict  __stream  , const int* __restrict  __format  , ...);
int wprintf(const int* __restrict  __format  , ...);
int swprintf(int* __restrict  __s  , unsigned long  __n  , const int* __restrict  __format  , ...);
int vfwprintf(struct _IO_FILE* __restrict  __s  , const int* __restrict  __format  , __builtin_va_list  __arg  );
int vwprintf(const int* __restrict  __format  , __builtin_va_list  __arg  );
int vswprintf(int* __restrict  __s  , unsigned long  __n  , const int* __restrict  __format  , __builtin_va_list  __arg  );
int fwscanf(struct _IO_FILE* __restrict  __stream  , const int* __restrict  __format  , ...);
int wscanf(const int* __restrict  __format  , ...);
int swscanf(const int* __restrict  __s  , const int* __restrict  __format  , ...);
int __isoc23_fwscanf(struct _IO_FILE* __restrict  __stream  , const int* __restrict  __format  , ...);
int __isoc23_wscanf(const int* __restrict  __format  , ...);
int __isoc23_swscanf(const int* __restrict  __s  , const int* __restrict  __format  , ...);
int vfwscanf(struct _IO_FILE* __restrict  __s  , const int* __restrict  __format  , __builtin_va_list  __arg  );
int vwscanf(const int* __restrict  __format  , __builtin_va_list  __arg  );
int vswscanf(const int* __restrict  __s  , const int* __restrict  __format  , __builtin_va_list  __arg  );
int __isoc23_vfwscanf(struct _IO_FILE* __restrict  __s  , const int* __restrict  __format  , __builtin_va_list  __arg  );
int __isoc23_vwscanf(const int* __restrict  __format  , __builtin_va_list  __arg  );
int __isoc23_vswscanf(const int* __restrict  __s  , const int* __restrict  __format  , __builtin_va_list  __arg  );
unsigned int  fgetwc(struct _IO_FILE*  __stream  );
unsigned int  getwc(struct _IO_FILE*  __stream  );
unsigned int  getwchar();
unsigned int  fputwc(int  __wc  , struct _IO_FILE*  __stream  );
unsigned int  putwc(int  __wc  , struct _IO_FILE*  __stream  );
unsigned int  putwchar(int  __wc  );
int*  fgetws(int* __restrict  __ws  , int __n, struct _IO_FILE* __restrict  __stream  );
int fputws(const int* __restrict  __ws  , struct _IO_FILE* __restrict  __stream  );
unsigned int  ungetwc(unsigned int  __wc  , struct _IO_FILE*  __stream  );
unsigned int  getwc_unlocked(struct _IO_FILE*  __stream  );
unsigned int  getwchar_unlocked();
unsigned int  fgetwc_unlocked(struct _IO_FILE*  __stream  );
unsigned int  fputwc_unlocked(int  __wc  , struct _IO_FILE*  __stream  );
unsigned int  putwc_unlocked(int  __wc  , struct _IO_FILE*  __stream  );
unsigned int  putwchar_unlocked(int  __wc  );
int*  fgetws_unlocked(int* __restrict  __ws  , int __n, struct _IO_FILE* __restrict  __stream  );
int fputws_unlocked(const int* __restrict  __ws  , struct _IO_FILE* __restrict  __stream  );
unsigned long  wcsftime(int* __restrict  __s  , unsigned long  __maxsize  , const int* __restrict  __format  , const struct tm* __restrict  __tp  );
unsigned long  wcsftime_l(int* __restrict  __s  , unsigned long  __maxsize  , const int* __restrict  __format  , const struct tm* __restrict  __tp  , struct __locale_struct*  __loc  );
char* dirname(char* __path);
char* __xpg_basename(char* __path);
int*  __builtin_wstring(const char* str);
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
_Bool wstring_operator_equals(const int*  left  , const int*  right  );
_Bool wstring_operator_not_equals(const int*  left  , const int*  right  );
int*  wchar_tp_operator_add(const int*  left  , const int*  right  );
int*  wstring_operator_add(const int*  left  , const int*  right  );
int charp_index(const char* str, const char* search_str, int default_value);
char*  charp_replace(char* self, int index, char c);
char*  charp_multiply(const char* str, int n);
struct list$1char$ph* charp_split_str(const char* self, const char* str);
unsigned int wchar_tp_get_hash_key(const int*  value  );
_Bool wstring_equals(const int*  left  , const int*  right  );
_Bool wchar_t_operator_equals(int  left  , int  right  );
_Bool wchar_t_operator_not_equals(int  left  , int  right  );
unsigned int wchar_t_get_hash_key(int  value  );
_Bool wchar_t_equals(int  left  , int  right  );
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
int string_index(const char* str, const char* search_str, int default_value);
char*  string_replace(char* self, int index, char c);
char*  string_multiply(const char* str, int n);
struct list$1char$ph* string_split_str(const char* self, const char* str);
int*  string_to_wstring(const char* str);
char*  charp_chomp(const char* str);
_Bool wchar_tp_equals(const int*  left  , const int*  right  );
_Bool wchar_tp_operator_equals(const int*  left  , const int*  right  );
_Bool wchar_tp_operator_not_equals(const int*  left  , const int*  right  );
struct buffer*  FILE_read(struct _IO_FILE*  f  );
int FILE_write(struct _IO_FILE*  f  , const char* str);
int FILE_fclose(struct _IO_FILE*  f  );
struct _IO_FILE*  FILE_fprintf(struct _IO_FILE*  f  , const char* msg, ...);
int charp_write(const char* self, const char* file_name, _Bool append);
struct buffer*  charp_read(const char* file_name);
struct list$1char$ph* FILE_readlines(struct _IO_FILE*  f  );
_Bool xiswalpha(int  c  );
_Bool xiswblank(int  c  );
_Bool xiswdigit(int  c  );
_Bool xiswalnum(int  c  );
_Bool xiswascii(int  c  );
struct sClass* sClass_initialize(struct sClass* self, char*  name  , _Bool number, _Bool union_, _Bool generics, _Bool method_generics, _Bool protocol_, _Bool struct_, _Bool float_, int generics_num, int method_generics_num, _Bool enum_, _Bool uniq_, _Bool typename, struct sInfo*  info  , _Bool iter_);
struct sType* sType_initialize(struct sType* self, char*  name  , _Bool heap, struct sInfo*  info  , _Bool unsigned_, int pointer_num_);
struct sFun* sFun_initialize(struct sFun* self, char*  name  , struct sType*  result_type  , struct list$1sType$ph* param_types, struct list$1char$ph* param_names, struct list$1char$ph* param_default_parametors, _Bool external, _Bool var_args, struct sBlock*  block  , _Bool static_, struct sInfo*  info  , _Bool inline_, _Bool uniq_, char*  attribute  , char*  fun_attribute  , _Bool const_fun, char*  text_block  , char*  generics_sname  , int generics_sline, _Bool immutable_, char*  asm_fun  );
struct sGenericsFun* sGenericsFun_initialize(struct sGenericsFun* self, struct sType*  impl_type  , struct list$1char$ph* generics_type_names, struct list$1char$ph* method_generics_type_names, char*  name  , struct sType*  result_type  , struct list$1sType$ph* param_types, struct list$1char$ph* param_names, struct list$1char$ph* param_default_parametors, _Bool var_args, char*  block  , struct sInfo*  info  , char*  generics_sname  , int generics_sline, _Bool const_fun);
struct CVALUE* CVALUE_initialize(struct CVALUE* self);
struct sModule* sModule_initialize(struct sModule* self);
struct sVarTable* sVarTable_initialize(struct sVarTable* self, _Bool global, struct sVarTable*  parent  );
void sVarTable_finalize(struct sVarTable* self);
struct sBlock* sBlock_initialize(struct sBlock* self);
struct sNodeBase* sNodeBase_initialize(struct sNodeBase* self, struct sInfo*  info  );
int sNodeBase_sline(struct sNodeBase* self, struct sInfo*  info  );
int sNodeBase_sline_real(struct sNodeBase* self, struct sInfo*  info  );
_Bool sNodeBase_terminated(struct sNodeBase* self);
char*  sNodeBase_sname(struct sNodeBase* self, struct sInfo*  info  );
struct sNode* sNodeBase_left_value(struct sNodeBase* self);
struct sCurrentNode* sCurrentNode_initialize(struct sCurrentNode* self, struct sInfo*  info  );
int sCurrentNode_sline(struct sCurrentNode* self, struct sInfo*  info  );
char*  sCurrentNode_sname(struct sCurrentNode* self, struct sInfo*  info  );
char*  sCurrentNode_kind(struct sCurrentNode* self);
_Bool sCurrentNode_compile(struct sCurrentNode* self, struct sInfo*  info  );
struct sNode* parse_iterator_it(struct sInfo*  info  );
_Bool transpile_conditional_with_free_right_object_value(struct sNode* node, struct sInfo*  info  );
int err_msg(struct sInfo*  info  , const char* msg, ...);
int warning_msg(struct sInfo*  info  , const char* msg, ...);
int expected_next_character(char c, struct sInfo*  info  );
_Bool node_compile(struct sNode* node, struct sInfo*  info  );
_Bool node_conditional_compile(struct sNode* node, struct sInfo*  info  );
int come_main(int argc, char** argv);
void show_type(struct sType*  type  , struct sInfo*  info  );
char*  create_generics_name(struct sType*  generics_type  , struct sInfo*  info  );
void add_come_code_at_come_header(struct sInfo*  info  , char*  id  , const char* msg, ...);
void add_come_code_at_come_struct_header(struct sInfo*  info  , char*  id  , const char* msg, ...);
_Bool output_header_file(struct sInfo*  info  );
void on_drop_object(struct sType*  type  , char* obj, struct sInfo*  info  );
void on_load_object(struct sType*  type  , char* obj, struct sInfo*  info  );
struct sType*  solve_method_generics(struct sType*  type  , struct sInfo*  info  );
_Bool existance_free_right_value_objects(struct sInfo*  info  );
_Bool existance_free_objects_on_return(struct sBlock*  current_block  , struct sInfo*  info  , struct sVar*  ret_value  , _Bool top_block);
void std_move(struct sType*  left_type  , struct sType*  right_type  , struct CVALUE*  right_value  , struct sInfo*  info  );
_Bool create_equals_method(struct sType*  type  , struct sInfo*  info  );
_Bool create_operator_equals_method(struct sType*  type  , struct sInfo*  info  );
_Bool create_operator_not_equals_method(struct sType*  type  , struct sInfo*  info  );
struct sType*  solve_generics(struct sType*  type  , struct sType*  generics_type  , struct sInfo*  info  );
struct sVar*  get_variable_from_table(struct sVarTable*  table  , char* name);
void free_objects_on_return(struct sBlock*  current_block  , struct sInfo*  info  , struct sVar*  ret_value  , _Bool top_block, _Bool ret_value_is_field);
void free_objects_of_match_lv_tables(struct sInfo*  info  );
void free_objects_on_break(struct sInfo*  info  );
void free_object(struct sType*  type  , char* obj, _Bool no_decrement, _Bool no_free, struct sInfo*  info  , _Bool ret_value);
struct tuple2$2sType$phchar$ph* clone_object(struct sType*  type  , char* obj, struct sInfo*  info  );
void free_right_value_objects(struct sInfo*  info  );
void free_objects(struct sVarTable*  table  , struct sVar*  ret_value  , struct sInfo*  info  , _Bool ret_value_is_field);
void append_object_to_right_values(struct CVALUE*  come_value  , struct sType*  type  , struct sInfo*  info  , _Bool decrement_ref_count, struct sType*  obj_type  , char* obj_value, struct sVar*  obj_var  );
void remove_object_from_right_values(int right_value_num, struct sInfo*  info  );
void remove_value_from_right_value_objects(struct CVALUE*  come_value  , struct sInfo*  info  );
char*  increment_ref_count_object(struct sType*  type  , char* obj, struct sInfo*  info  );
void decrement_ref_count_object(struct sType*  type  , char* obj, struct sInfo*  info  , _Bool no_free);
void transpile_toplevel(_Bool block, struct sInfo*  info  );
struct sNode* reverse_node(struct sNode* value, struct sInfo*  info  );
struct sFun*  compile_uniq_function(struct sFun*  fun  , struct sInfo*  info  );
struct sNode* cast_node(struct sType*  type  , struct sNode* node, struct sInfo*  info  );
struct sNode* create_defference_node(struct sNode* value, _Bool quote, struct sInfo*  info  );
struct sNode* reffence_node(struct sNode* value, struct sInfo*  info  );
struct tuple2$2char$phsGenericsFun$p* make_method_generics_function(char*  fun_name  , struct list$1sType$ph* method_generics_types, struct sInfo*  info  );
struct sNode* create_return_node(struct sNode* value, struct sInfo*  info  );
struct sNode* post_position_operator(struct sNode* node, struct sInfo*  info  );
_Bool create_method_generics_fun(char*  fun_name  , struct sGenericsFun*  generics_fun  , struct sInfo*  info  );
_Bool operator_overload_fun_self(struct sType*  type  , const char* fun_name, struct sNode* node, struct CVALUE*  left_value  , struct sInfo*  info  );
_Bool is_ref_or_optional_type_for_operator(struct sType*  type  , struct sInfo*  info  );
_Bool reject_ref_optional_unary_operator(const char* op_name, struct CVALUE*  value  , struct sInfo*  info  );
_Bool reject_ref_optional_binary_operator(const char* op_name, struct CVALUE*  left_value  , struct CVALUE*  right_value  , struct sInfo*  info  );
void caller_begin(struct sInfo*  info  );
void caller_end(struct sInfo*  info  );
struct sNode* craete_logical_denial(struct sNode* node, struct sInfo*  info  );
struct tuple3$3sType$phchar$ph_Bool$* backtrace_parse_type(_Bool parse_variable_name, struct sInfo*  info  );
void skip_pointer_attribute(struct sInfo*  info  );
void skip_paren(struct sInfo*  info  );
struct sNode* parse_normal_block(_Bool clang, _Bool unsafe_block, struct sInfo*  info  );
void cast_type(struct sType*  left_type  , struct sType*  right_type  , struct CVALUE*  come_value  , struct sInfo*  info  );
_Bool check_assign_type(const char* msg, struct sType*  left_type  , struct sType*  right_type  , struct CVALUE*  come_value  , struct sInfo*  info  );
struct tuple2$2char$phchar$ph* parse_attribute(struct sInfo*  info  , _Bool parse_function_attribute);
struct tuple2$2char$phchar$ph* parse_function_attribute(struct sInfo*  info  );
struct sNode* get_number(_Bool minus, struct sInfo*  info  );
struct sNode* get_oct_number(struct sInfo*  info  );
struct sNode* get_hex_number(_Bool minus, struct sInfo*  info  );
struct sNode* create_int_node(char*  value  , struct sInfo*  info  );
struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$* parse_params(struct sInfo*  info  , _Bool in_constructor_);
struct tuple2$2sFun$pchar$ph* create_pthread_fun(struct sType*  type  , char* fun_name, struct sInfo*  info  );
struct tuple2$2sFun$pchar$ph* create_finalizer_automatically(struct sType*  type  , const char* fun_name, struct sInfo*  info  );
struct tuple2$2sFun$pchar$ph* create_to_string_automatically(struct sType*  type  , const char* fun_name, struct sInfo*  info  );
struct tuple2$2sFun$pchar$ph* create_cloner_automatically(struct sType*  type  , const char* fun_name, struct sInfo*  info  );
struct tuple2$2sFun$pchar$ph* create_equals_automatically(struct sType*  type  , const char* fun_name, struct sInfo*  info  );
struct tuple2$2sFun$pchar$ph* create_operator_equals_automatically(struct sType*  type  , const char* fun_name, struct sInfo*  info  );
struct tuple2$2sFun$pchar$ph* create_operator_not_equals_automatically(struct sType*  type  , const char* fun_name, struct sInfo*  info  );
struct tuple2$2sFun$pchar$ph* create_not_equals_automatically(struct sType*  type  , const char* fun_name, struct sInfo*  info  );
struct tuple2$2sFun$pchar$ph* create_get_hash_key_automatically(struct sType*  type  , const char* fun_name, struct sInfo*  info  );
struct tuple2$2sFun$pchar$ph* create_compare_automatically(struct sType*  type  , const char* fun_name, struct sInfo*  info  );
char*  skip_block(struct sInfo*  info  , _Bool return_self_at_last);
_Bool is_contained_generics_class(struct sType*  type  , struct sInfo*  info  );
_Bool is_type_name(char* buf, struct sInfo*  info  );
_Bool parsecmp(const char* p2, struct sInfo*  info  );
char*  parse_word(_Bool digits, struct sInfo*  info  );
char*  backtrace_parse_word(struct sInfo*  info  );
void skip_spaces_and_lf(struct sInfo*  info  );
void skip_spaces_and_lf2(struct sInfo*  info  );
struct tuple2$2char$ph_Bool$* create_generics_fun(char*  fun_name  , struct sGenericsFun*  generics_fun  , struct sType*  generics_type  , struct sInfo*  info  );
struct tuple3$3sType$phchar$ph_Bool$* parse_type(struct sInfo*  info  , _Bool parse_variable_name, _Bool parse_multiple_type, _Bool in_function_parametor);
struct tuple2$2sType$phchar$ph* parse_variable_name_on_multiple_declare(struct sType*  base_type_name  , _Bool first, struct sInfo*  info  );
struct sBlock*  parse_block(struct sInfo*  info  , _Bool return_self_at_last, _Bool in_function);
int transpile_block(struct sBlock*  block  , struct list$1sType$ph* param_types, struct list$1char$ph* param_names, struct sInfo*  info  , _Bool no_var_table, _Bool loop_block, _Bool if_result_value, _Bool iter_, _Bool loop_result_type);
void arrange_stack(struct sInfo*  info  , int top);
struct sNode* parse_function(struct sInfo*  info  );
struct sNode* statment(struct sInfo*  info  );
struct sNode* top_level_v1(char* buf, char* head, int head_sline, struct sInfo*  info  );
struct sNode* top_level_v99(char* buf, char* head, int head_sline, struct sInfo*  info  );
struct sNode* expression_node_v1(struct sInfo*  info  );
struct sNode* expression_node_v99(struct sInfo*  info  );
struct sNode* expression_node_v98(struct sInfo*  info  );
struct sNode* expression_node_v97(struct sInfo*  info  );
int transpile(struct sInfo*  info  );
void parse_sharp_v5(struct sInfo*  info  );
char*  create_method_name(struct sType*  obj_type  , _Bool no_pointer_name, const char* fun_name, struct sInfo*  info  , _Bool array_equal_pointer);
char*  create_method_name_original_obj_type(struct sType*  obj_type  , _Bool no_pointer_name, const char* fun_name, struct sInfo*  info  , _Bool array_equal_pointer);
char*  create_non_method_name(struct sType*  obj_type  , _Bool no_pointer_name, const char* fun_name, struct sInfo*  info  , _Bool array_equal_pointer);
char*  create_method_name_using_class(struct sClass*  obj_class  , const char* fun_name, struct sInfo*  info  );
struct tuple5$5_Bool$_Bool$_Bool$_Bool$_Bool$* backtrace_struct_union_enum(struct sInfo*  info  );
struct sNode* create_null_return_value(struct sInfo*  info  );
struct sNode* create_some(struct sNode* exp, struct sInfo*  info  );
struct sNode* expression_node_v96(struct sInfo*  info  );
struct sNode* parse_tuple(struct sInfo*  info  , _Bool named_tuple);
struct sNode* parse_some(struct sInfo*  info  );
struct sNode* parse_none(struct sInfo*  info  );
_Bool is_inner_calling(struct sNode* node, struct sInfo*  info  );
struct sNode* post_position_operator_v7(struct sNode* node, struct sInfo*  info  );
struct sNode* expression_node_v95(struct sInfo*  info  );
struct sNode* store_var(char*  name  , struct list$1char$ph* multiple_assign, struct list$1tuple3$3sType$phchar$phsNode$ph$ph* multiple_declare, struct sType*  type  , _Bool alloc, struct sNode* right_value, struct sInfo*  info  , _Bool iter_);
struct sNode* create_load_var(const char* var_name, struct sInfo*  info  );
struct sNode* parse_array_initializer(struct sInfo*  info  );
struct sNode* parse_struct_initializer(struct sInfo*  info  );
struct sNode* parse_global_variable(struct sInfo*  info  );
struct sNode* load_var(char*  name  , struct sInfo*  info  );
struct sNode* string_node_v7(char* buf, char* head, int head_sline, struct sInfo*  info  );
void add_variable_to_table(char* name, struct sType*  type  , struct sInfo*  info  , _Bool function_param, _Bool comma, _Bool to_function_table);
void add_variable_to_global_table(char* name, struct sType*  type  , struct sInfo*  info  );
void add_variable_to_global_table_with_int_value(char* name, struct sType*  type  , char* c_value, struct sInfo*  info  );
struct sNode* parse_match(struct sNode* expression_node, struct sInfo*  info  );
struct sNode* parse_catch(struct sNode* expression_node, struct sInfo*  info  );
struct sNode* string_node_v8(char* buf, char* head, int head_sline, struct sInfo*  info  );
struct sNode* parse_if_method_call(struct sNode* expression_node, struct sInfo*  info  );
struct sNode* parse_less_method_call(struct sNode* expression_node, struct sInfo*  info  );
struct sNode* parse_elif_method_call(struct sNode* expression_node, struct sInfo*  info  );
struct sNode* parse_or_statment(struct sNode* expression_node, struct sInfo*  info  );
struct sNode* parse_and_statment(struct sNode* expression_node, struct sInfo*  info  );
struct sNode* string_node_v9(char* buf, char* head, int head_sline, struct sInfo*  info  );
struct sNode* string_node_v10(char* buf, char* head, int head_sline, struct sInfo*  info  );
struct sNode* string_node_v11(char* buf, char* head, int head_sline, struct sInfo*  info  );
struct sNode* string_node_v12(char* buf, char* head, int head_sline, struct sInfo*  info  );
struct sNode* create_comma_exp(struct sNode* node, struct sNode* node2, struct sInfo*  info  );
struct sNode* create_less(struct sNode* node, struct sNode* right, struct sInfo*  info  );
struct sNode* create_null_node(struct sInfo*  info  );
struct sNode* conditional_node(struct sNode* value1, struct sNode* value2, struct sNode* value3, struct sInfo*  info  );
_Bool operator_overload_fun(struct sType*  type  , const char* fun_name, struct sNode* left_node, struct sNode* right_node, struct CVALUE*  left_value  , struct CVALUE*  right_value  , _Bool break_guard, struct sInfo*  info  );
struct sNode* expression_v13(struct sInfo*  info  , _Bool type_name_exp);
struct sNode* post_op_v13(struct sNode* node, struct sInfo*  info  );
struct sNode* string_node_v13(char* buf, char* head, int head_sline, struct sInfo*  info  );
void output_aggregate_field(struct sType*  type  , char*  tag_name  , struct buffer*  buf  , _Bool* existance_generics, char*  field_name  , int indent, struct sInfo*  info  , _Bool* named_child);
char*  parse_struct_attribute(struct sInfo*  info  , _Bool allow_end);
char*  parse_declspec_attribute(struct sInfo*  info  );
struct sNode* create_nothing_node(struct sInfo*  info  );
_Bool is_contained_method_generics_types(struct sType*  type  , struct sInfo*  info  );
_Bool is_contained_generics_types(struct sType*  type  , struct sInfo*  info  );
struct sNode* string_node_v14(char* buf, char* head, int head_sline, struct sInfo*  info  );
struct sNode* parse_struct(char*  type_name  , char*  struct_attribute  , struct sInfo*  info  , _Bool anonymous);
char*  get_none_generics_name(char* class_name);
struct sNode* top_level_v98(char* buf, char* head, int head_sline, struct sInfo*  info  );
_Bool output_generics_struct(struct sType*  type  , struct sType*  generics_type  , struct sInfo*  info  );
void output_struct(struct sClass*  klass  , char*  pragma  , struct sInfo*  info  , _Bool anonymous);
struct sNode* string_node_v15(char* buf, char* head, int head_sline, struct sInfo*  info  );
struct sNode* parse_union(char*  type_name  , char*  union_attribute  , struct sInfo*  info  , _Bool anonymous);
struct sNode* top_level_v97(char* buf, char* head, int head_sline, struct sInfo*  info  );
struct sNode* string_node_v16(char* buf, char* head, int head_sline, struct sInfo*  info  );
struct sNode* parse_enum(char*  type_name  , char*  attribute  , struct sInfo*  info  );
struct sNode* top_level_v96(char* buf, char* head, int head_sline, struct sInfo*  info  );
_Bool add_typedef(char*  type_name  , struct sType*  type  , struct sInfo*  info  );
struct sNode* top_level_v95(char* buf, char* head, int head_sline, struct sInfo*  info  );
struct sNode* string_node_v17(char* buf, char* head, int head_sline, struct sInfo*  info  );
struct sNode* create_nullable_node(struct sNode* left, struct sInfo*  info  );
struct sNode* load_field(struct sNode* left, char*  name  , struct sInfo*  info  );
struct sNode* store_field(struct sNode* left, struct sNode* right, char*  name  , struct sInfo*  info  );
struct sNode* post_position_operator_v99(struct sNode* node, struct sInfo*  info  );
struct sNode* parse_method_call_v18(struct sNode* obj, char*  fun_name  , struct sInfo*  info  , _Bool arrow_, _Bool iter_, struct sNode* obj2);
struct sNode* post_position_operator_v19(struct sNode* node, struct sInfo*  info  );
struct tuple3$3char$phsFun$psGenericsFun$p* get_method(const char* fun_name, struct sType*  obj_type  , struct sInfo*  info  , _Bool no_make_generics_function);
struct sNode* create_method_call(const char* fun_name, struct sNode* obj, struct list$1tuple2$2char$phsNode$ph$ph* params, struct buffer*  method_block  , int method_block_sline, struct list$1sType$ph* method_generics_types, struct sInfo*  info  , _Bool arrow_);
struct sNode* create_funcall(const char* fun_name, struct list$1tuple2$2char$phsNode$ph$ph* params, struct buffer*  method_block  , int method_block_sline, struct list$1sType$ph* method_generics_types, struct sInfo*  info  , _Bool arrow_);
struct sNode* create_guard_break_method_call(struct sNode* expression_node, struct sInfo*  info  );
_Bool compile_method_block(struct buffer*  method_block  , struct list$1CVALUE$ph* come_params, struct sFun*  fun  , char* fun_name, int method_block_sline, struct sInfo*  info  , _Bool no_create_current_stack);
struct tuple2$2char$phsGenericsFun$p* make_generics_function(struct sType*  type  , char*  fun_name  , struct sInfo*  info  , _Bool array_equal_pointer);
struct sNode* parse_method_call_v20(struct sNode* obj, char*  fun_name  , struct sInfo*  info  , _Bool arrow_);
struct sNode* parse_iter_call_v20(struct sNode* obj, char*  fun_name  , struct sInfo*  info  , _Bool arrow_, struct sNode* parent_call_node);
struct sNode* string_node_v20(char* buf, char* head, int head_sline, struct sInfo*  info  );
struct sNode* create_implements(struct sNode* node, struct sType*  inf_type  , struct sInfo*  info  );
struct sNode* create_true_object(struct sInfo*  info  );
struct sNode* create_false_object(struct sInfo*  info  );
struct sNode* string_node_v21(char* buf, char* head, int head_sline, struct sInfo*  info  );
struct sNode* top_level_v94(char* buf, char* head, int head_sline, struct sInfo*  info  );
struct sNode* post_position_operator_v21(struct sNode* node, struct sInfo*  info  );
struct sNode* top_level_v93(char* buf, char* head, int head_sline, struct sInfo*  info  );
struct sNode* top_level_v92(char* buf, char* head, int head_sline, struct sInfo*  info  );
struct sNode* top_level_v91(char* buf, char* head, int head_sline, struct sInfo*  info  );
struct sNode* static_assert_node(struct sNode* exp, struct sNode* exp2, struct sInfo*  info  );
struct sNothingNode* sNothingNode_initialize(struct sNothingNode* self, struct sInfo*  info  );
_Bool sNothingNode_terminated(struct sNothingNode* self);
char*  sNothingNode_kind(struct sNothingNode* self);
_Bool sNothingNode_compile(struct sNothingNode* self, struct sInfo*  info  );
void preprocess_file_neo_c(const char* path, struct _IO_FILE*  out  );
void init_ccpp(int argc, char** argv);
void incldue_file_neo_c(char* path, int quoted, struct _IO_FILE*  out  );
const char* get_macro(const char* macro_name);
void macro_define(const char* def);
void macro_undef(const char* name);
const char* call_func_macro(const char* macro_name, const char* args, const char* file, long line);
void set_macro(const char* name, const char* value);
struct MacroSnapshot*  macro_snapshot_create();
char* macro_snapshot_diff_defines(struct MacroSnapshot*  snap  );
void macro_snapshot_free(struct MacroSnapshot*  snap  );
void init_global_opts();
struct sNode* create_fun_node(struct sFun*  fun  , struct sInfo*  info  );
struct sNode* comelang_top_level(char* buf, char* head, int head_sline, struct sInfo*  info  );
struct sNode* parse_come_gval(struct sInfo*  info  );
struct sNode* parse_come_gvar(struct sInfo*  info  );
struct sNode* parse_come_function(struct sInfo*  info  );
struct sBlock*  parse_come_block(struct sInfo*  info  );
struct sNode* create_null_checker(struct sNode* node, struct sInfo*  info  );
struct sNode* create_heap_checker(struct sNode* node, struct sInfo*  info  );
struct sNullChecker* sNullChecker_initialize(struct sNullChecker* self, struct sNode* value, struct sInfo*  info  );
char*  sNullChecker_kind(struct sNullChecker* self);
_Bool sNullChecker_compile(struct sNullChecker* self, struct sInfo*  info  );
struct sHeapChecker* sHeapChecker_initialize(struct sHeapChecker* self, struct sNode* value, struct sInfo*  info  );
char*  sHeapChecker_kind(struct sHeapChecker* self);
_Bool sHeapChecker_compile(struct sHeapChecker* self, struct sInfo*  info  );
struct sNode* create_new_object(struct sType*  type  , struct sInfo*  info  );
struct sNode* parse_vector(struct sInfo*  info  );
struct sNode* add_node(struct sNode* node, struct sNode* right, struct sInfo*  info  );
_Bool is_portable_libc_symbol(const char* sym);
_Bool should_strip_portable_asm_alias(const char* source, int* consumed);
char*  normalize_portable_c_source(char* source);
char*  make_type_name_string(struct sType*  type  , struct sInfo*  info  , _Bool no_static, _Bool cast_type, _Bool typedef_extended, _Bool nullchecker);
static void CVALUE_finalize(struct CVALUE*  self  );
static void sType_finalize(struct sType*  self  );
static void list$1sType$ph$p_finalize(struct list$1sType$ph* self);
static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self);
static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self);
static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self);
static void list$1int$$p_finalize(struct list$1int$* self);
static void list_item$1int$$p_finalize(struct list_item$1int$* self);
static void list$1char$ph$p_finalize(struct list$1char$ph* self);
static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self);
static int list$1sNode$ph_length(struct list$1sNode$ph* self);
static struct sNode* list$1sNode$ph$p_operator_load_element(struct list$1sNode$ph* self, int position);
static struct sNode* list$1sNode$ph_operator_load_element(struct list$1sNode$ph* self, int position);
static struct sType*  list$1sType$ph_begin(struct list$1sType$ph* self);
static _Bool list$1sType$ph_end(struct list$1sType$ph* self);
static struct sType*  list$1sType$ph_next(struct list$1sType$ph* self);
static int list$1sType$ph_length(struct list$1sType$ph* self);
static struct sNode* list$1sNode$ph_begin(struct list$1sNode$ph* self);
static _Bool list$1sNode$ph_end(struct list$1sNode$ph* self);
static struct sNode* list$1sNode$ph_next(struct list$1sNode$ph* self);
struct sType*  get_no_solved_type(struct sType*  type  );
static struct sType*  sType_clone(struct sType*  self  );
static struct list$1sType$ph* list$1sType$ph$p_clone(struct list$1sType$ph* self);
static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self);
static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType*  item  );
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
static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char*  item  );
static void list$1char$ph_finalize(struct list$1char$ph* self);
static void list$1sType$ph_operator_store_element(struct list$1sType$ph* self, int position, struct sType*  item  );
static struct list$1sType$ph* list$1sType$ph_replace(struct list$1sType$ph* self, int position, struct sType*  item  );
static struct list$1sType$ph* list$1sType$ph_push_back(struct list$1sType$ph* self, struct sType*  item  );
struct sType*  get_no_solved_type2(struct sType*  type  );
char*  make_come_type_name_string(struct sType*  type  , struct sInfo*  info  );
static struct sType*  list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position);
static struct sType*  list$1sType$ph_operator_load_element(struct list$1sType$ph* self, int position);
static char*  make_lambda_type_name_string(struct sType*  type  , char* var_name, struct sInfo*  info  );
char*  output_lambda_original_type(struct sType*  type2  , char* name, struct sInfo*  info  );
void method_block1_03outputcodenc(struct __current_stack1__* parent, int it);
static int list$1int$$p_operator_load_element(struct list$1int$* self, int position);
static int list$1int$_operator_load_element(struct list$1int$* self, int position);
char*  make_define_var(struct sType*  type  , char* name, struct sInfo*  info  , _Bool no_static, _Bool in_typedef);
void method_block2_03outputcodenc(struct __current_stack2__* parent, int it);
char*  make_var_name(struct sType*  type  , char* name, struct sInfo*  info  , _Bool no_static);
void method_block3_03outputcodenc(struct __current_stack3__* parent, int it);
char*  make_come_define_var(struct sType*  type  , char* name, struct sInfo*  info  );
void method_block4_03outputcodenc(struct __current_stack4__* parent, int it);
char*  output_function(struct sFun*  fun  , struct sInfo*  info  );
static char*  list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position);
static char*  list$1char$ph_operator_load_element(struct list$1char$ph* self, int position);
_Bool is_gcc_builtin_float_type(struct sType*  type  , struct sInfo*  info  );
char*  header_function(struct sFun*  fun  , struct sInfo*  info  );
static char*  header_lambda(struct sType*  lambda_type  , char*  name  , struct sInfo*  info  );
void add_come_code(struct sInfo*  info  , const char* msg, ...);
void add_come_code_no_indent(struct sInfo*  info  , const char* msg, ...);
_Bool is_contained_generics_funcstion(struct sFun*  fun  , struct sInfo*  info  );
_Bool output_source_file(struct sInfo*  info  );
static struct sFun*  map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char*  key  );
static void sFun_finalize(struct sFun*  self  );
static void list$1sVar$ph$p_finalize(struct list$1sVar$ph* self);
static void list_item$1sVar$ph$p_finalize(struct list_item$1sVar$ph* self);
static void sVar_finalize(struct sVar*  self  );
static void sBlock_finalize(struct sBlock*  self  );
static struct sFun*  map$2char$phsFun$ph_operator_load_element(struct map$2char$phsFun$ph* self, char*  key  );
static char*  map$2char$phsFun$ph_begin(struct map$2char$phsFun$ph* self);
static _Bool map$2char$phsFun$ph_end(struct map$2char$phsFun$ph* self);
static char*  map$2char$phsFun$ph_next(struct map$2char$phsFun$ph* self);
static struct map$2char$phsFun$ph* map$2char$phsFun$ph_put(struct map$2char$phsFun$ph* self, char*  key  , struct sFun*  item  , _Bool by_pointer);
static void map$2char$phsFun$ph_rehash(struct map$2char$phsFun$ph* self);
static struct sFun*  map$2char$phsFun$ph_at(struct map$2char$phsFun$ph* self, char*  key  , struct sFun*  default_value  , _Bool by_pointer);
static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char*  item  , _Bool by_pointer);
static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail);
static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self);
static char*  list$1char$ph_begin(struct list$1char$ph* self);
static _Bool list$1char$ph_end(struct list$1char$ph* self);
static char*  list$1char$ph_next(struct list$1char$ph* self);
static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char*  item  );
static void map$2char$phsFun$ph$p_finalize(struct map$2char$phsFun$ph* self);
static char*  map$2char$phbuffer$ph_begin(struct map$2char$phbuffer$ph* self);
static _Bool map$2char$phbuffer$ph_end(struct map$2char$phbuffer$ph* self);
static char*  map$2char$phbuffer$ph_next(struct map$2char$phbuffer$ph* self);
static struct buffer*  map$2char$phbuffer$ph$p_operator_load_element(struct map$2char$phbuffer$ph* self, char*  key  );
static struct buffer*  map$2char$phbuffer$ph_operator_load_element(struct map$2char$phbuffer$ph* self, char*  key  );
static char*  map$2char$phchar$ph_begin(struct map$2char$phchar$ph* self);
static _Bool map$2char$phchar$ph_end(struct map$2char$phchar$ph* self);
static char*  map$2char$phchar$ph_next(struct map$2char$phchar$ph* self);
static char*  map$2char$phchar$ph$p_operator_load_element(struct map$2char$phchar$ph* self, char*  key  );
static char*  map$2char$phchar$ph_operator_load_element(struct map$2char$phchar$ph* self, char*  key  );
static void map$2char$phchar$ph$p_finalize(struct map$2char$phchar$ph* self);
static void map$2char$phbuffer$ph$p_finalize(struct map$2char$phbuffer$ph* self);
void add_come_code_at_function_head(struct sInfo*  info  , const char* code, ...);
void add_come_code_at_function_head2(struct sInfo*  info  , const char* code, ...);
void add_last_code_to_source(struct sInfo*  info  );
void add_come_last_code(struct sInfo*  info  , const char* msg, ...);
void add_come_last_code2(struct sInfo*  info  , const char* msg, ...);
void dec_stack_ptr(int value, struct sInfo*  info  );
static struct list$1CVALUE$ph* list$1CVALUE$ph_delete(struct list$1CVALUE$ph* self, int head, int tail);
static struct list$1CVALUE$ph* list$1CVALUE$ph_reset(struct list$1CVALUE$ph* self);
static void list_item$1CVALUE$ph$p_finalize(struct list_item$1CVALUE$ph* self);
struct CVALUE*  get_value_from_stack(int offset, struct sInfo*  info  );
static struct CVALUE*  list$1CVALUE$ph$p_operator_load_element(struct list$1CVALUE$ph* self, int position);
static struct CVALUE*  list$1CVALUE$ph_operator_load_element(struct list$1CVALUE$ph* self, int position);
static struct CVALUE*  CVALUE_clone(struct CVALUE*  self  );
void transpiler_clear_last_code(struct sInfo*  info  );
// uniq global variable
// inline function
static inline unsigned short int  __bswap_16(unsigned short int  __bsx  )
{
        return ((unsigned short int )((((__bsx)>>8)&0xff)|(((__bsx)&0xff)<<8)));
}
static inline unsigned int  __bswap_32(unsigned int  __bsx  )
{
        return ((((__bsx)&0xff000000u)>>24)|(((__bsx)&0x00ff0000u)>>8)|(((__bsx)&0x0000ff00u)<<8)|(((__bsx)&0x000000ffu)<<24));
}
static inline unsigned long  int  __bswap_64(unsigned long  int  __bsx  )
{
        return ((((__bsx)&0xff00000000000000ull)>>56)|(((__bsx)&0x00ff000000000000ull)>>40)|(((__bsx)&0x0000ff0000000000ull)>>24)|(((__bsx)&0x000000ff00000000ull)>>8)|(((__bsx)&0x00000000ff000000ull)<<8)|(((__bsx)&0x0000000000ff0000ull)<<24)|(((__bsx)&0x000000000000ff00ull)<<40)|(((__bsx)&0x00000000000000ffull)<<56));
}
static inline unsigned short int  __uint16_identity(unsigned short int  __x  )
{
        return __x;
}
static inline unsigned int  __uint32_identity(unsigned int  __x  )
{
        return __x;
}
static inline unsigned long  int  __uint64_identity(unsigned long  int  __x  )
{
        return __x;
}

// body function
_Bool is_portable_libc_symbol(const char* sym)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "is_portable_libc_symbol"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    void* __right_value2 = (void*)0;
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
    void* __right_value22 = (void*)0;
    void* __right_value23 = (void*)0;
    void* __right_value24 = (void*)0;
    void* __right_value25 = (void*)0;
    void* __right_value26 = (void*)0;
    void* __right_value27 = (void*)0;
    void* __right_value28 = (void*)0;
    void* __right_value29 = (void*)0;
    void* __right_value30 = (void*)0;
    void* __right_value31 = (void*)0;
    void* __right_value32 = (void*)0;
    void* __right_value33 = (void*)0;
    void* __right_value34 = (void*)0;
    void* __right_value35 = (void*)0;
    void* __right_value36 = (void*)0;
    void* __right_value37 = (void*)0;
    void* __right_value38 = (void*)0;
    void* __right_value39 = (void*)0;
    void* __right_value40 = (void*)0;
    void* __right_value41 = (void*)0;
    void* __right_value42 = (void*)0;
    void* __right_value43 = (void*)0;
    void* __right_value44 = (void*)0;
    void* __right_value45 = (void*)0;
    void* __right_value46 = (void*)0;
    void* __right_value47 = (void*)0;
    void* __right_value48 = (void*)0;
    void* __right_value49 = (void*)0;
    void* __right_value50 = (void*)0;
    void* __right_value51 = (void*)0;
    void* __right_value52 = (void*)0;
    void* __right_value53 = (void*)0;
    void* __right_value54 = (void*)0;
    void* __right_value55 = (void*)0;
    void* __right_value56 = (void*)0;
    void* __right_value57 = (void*)0;
    void* __right_value58 = (void*)0;
    void* __right_value59 = (void*)0;
    void* __right_value60 = (void*)0;
    void* __right_value61 = (void*)0;
    void* __right_value62 = (void*)0;
    void* __right_value63 = (void*)0;
    void* __right_value64 = (void*)0;
    void* __right_value65 = (void*)0;
    void* __right_value66 = (void*)0;
    void* __right_value67 = (void*)0;
    void* __right_value68 = (void*)0;
    void* __right_value69 = (void*)0;
    void* __right_value70 = (void*)0;
    void* __right_value71 = (void*)0;
    _Bool __result_obj__0;
        __result_obj__0 = string_operator_equals(((char* )(__right_value1=__builtin_string(sym))),"fopen")||string_operator_equals(((char* )(__right_value3=__builtin_string(sym))),"freopen")||string_operator_equals(((char* )(__right_value5=__builtin_string(sym))),"fclose")||string_operator_equals(((char* )(__right_value7=__builtin_string(sym))),"fread")||string_operator_equals(((char* )(__right_value9=__builtin_string(sym))),"fwrite")||string_operator_equals(((char* )(__right_value11=__builtin_string(sym))),"fflush")||string_operator_equals(((char* )(__right_value13=__builtin_string(sym))),"fprintf")||string_operator_equals(((char* )(__right_value15=__builtin_string(sym))),"printf")||string_operator_equals(((char* )(__right_value17=__builtin_string(sym))),"snprintf")||string_operator_equals(((char* )(__right_value19=__builtin_string(sym))),"vsnprintf")||string_operator_equals(((char* )(__right_value21=__builtin_string(sym))),"vfprintf")||string_operator_equals(((char* )(__right_value23=__builtin_string(sym))),"puts")||string_operator_equals(((char* )(__right_value25=__builtin_string(sym))),"fputs")||string_operator_equals(((char* )(__right_value27=__builtin_string(sym))),"system")||string_operator_equals(((char* )(__right_value29=__builtin_string(sym))),"realpath")||string_operator_equals(((char* )(__right_value31=__builtin_string(sym))),"popen")||string_operator_equals(((char* )(__right_value33=__builtin_string(sym))),"pclose")||string_operator_equals(((char* )(__right_value35=__builtin_string(sym))),"remove")||string_operator_equals(((char* )(__right_value37=__builtin_string(sym))),"rename")||string_operator_equals(((char* )(__right_value39=__builtin_string(sym))),"unlink")||string_operator_equals(((char* )(__right_value41=__builtin_string(sym))),"access")||string_operator_equals(((char* )(__right_value43=__builtin_string(sym))),"stat")||string_operator_equals(((char* )(__right_value45=__builtin_string(sym))),"lstat")||string_operator_equals(((char* )(__right_value47=__builtin_string(sym))),"fstat")||string_operator_equals(((char* )(__right_value49=__builtin_string(sym))),"open")||string_operator_equals(((char* )(__right_value51=__builtin_string(sym))),"close")||string_operator_equals(((char* )(__right_value53=__builtin_string(sym))),"read")||string_operator_equals(((char* )(__right_value55=__builtin_string(sym))),"write")||string_operator_equals(((char* )(__right_value57=__builtin_string(sym))),"lseek")||string_operator_equals(((char* )(__right_value59=__builtin_string(sym))),"mkdir")||string_operator_equals(((char* )(__right_value61=__builtin_string(sym))),"rmdir")||string_operator_equals(((char* )(__right_value63=__builtin_string(sym))),"opendir")||string_operator_equals(((char* )(__right_value65=__builtin_string(sym))),"readdir")||string_operator_equals(((char* )(__right_value67=__builtin_string(sym))),"closedir")||string_operator_equals(((char* )(__right_value69=__builtin_string(sym))),"getcwd")||string_operator_equals(((char* )(__right_value71=__builtin_string(sym))),"chdir");
    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "03output_code.nc", 5, 1));
    (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1, 0, (void*)0, "03output_code.nc", 6, 2));
    (__right_value5 = come_decrement_ref_count(__right_value5, (void*)0, (void*)0, 1, 0, (void*)0, "03output_code.nc", 7, 3));
    (__right_value7 = come_decrement_ref_count(__right_value7, (void*)0, (void*)0, 1, 0, (void*)0, "03output_code.nc", 8, 4));
    (__right_value9 = come_decrement_ref_count(__right_value9, (void*)0, (void*)0, 1, 0, (void*)0, "03output_code.nc", 9, 5));
    (__right_value11 = come_decrement_ref_count(__right_value11, (void*)0, (void*)0, 1, 0, (void*)0, "03output_code.nc", 10, 6));
    (__right_value13 = come_decrement_ref_count(__right_value13, (void*)0, (void*)0, 1, 0, (void*)0, "03output_code.nc", 11, 7));
    (__right_value15 = come_decrement_ref_count(__right_value15, (void*)0, (void*)0, 1, 0, (void*)0, "03output_code.nc", 12, 8));
    (__right_value17 = come_decrement_ref_count(__right_value17, (void*)0, (void*)0, 1, 0, (void*)0, "03output_code.nc", 13, 9));
    (__right_value19 = come_decrement_ref_count(__right_value19, (void*)0, (void*)0, 1, 0, (void*)0, "03output_code.nc", 14, 10));
    (__right_value21 = come_decrement_ref_count(__right_value21, (void*)0, (void*)0, 1, 0, (void*)0, "03output_code.nc", 15, 11));
    (__right_value23 = come_decrement_ref_count(__right_value23, (void*)0, (void*)0, 1, 0, (void*)0, "03output_code.nc", 16, 12));
    (__right_value25 = come_decrement_ref_count(__right_value25, (void*)0, (void*)0, 1, 0, (void*)0, "03output_code.nc", 17, 13));
    (__right_value27 = come_decrement_ref_count(__right_value27, (void*)0, (void*)0, 1, 0, (void*)0, "03output_code.nc", 18, 14));
    (__right_value29 = come_decrement_ref_count(__right_value29, (void*)0, (void*)0, 1, 0, (void*)0, "03output_code.nc", 19, 15));
    (__right_value31 = come_decrement_ref_count(__right_value31, (void*)0, (void*)0, 1, 0, (void*)0, "03output_code.nc", 20, 16));
    (__right_value33 = come_decrement_ref_count(__right_value33, (void*)0, (void*)0, 1, 0, (void*)0, "03output_code.nc", 21, 17));
    (__right_value35 = come_decrement_ref_count(__right_value35, (void*)0, (void*)0, 1, 0, (void*)0, "03output_code.nc", 22, 18));
    (__right_value37 = come_decrement_ref_count(__right_value37, (void*)0, (void*)0, 1, 0, (void*)0, "03output_code.nc", 23, 19));
    (__right_value39 = come_decrement_ref_count(__right_value39, (void*)0, (void*)0, 1, 0, (void*)0, "03output_code.nc", 24, 20));
    (__right_value41 = come_decrement_ref_count(__right_value41, (void*)0, (void*)0, 1, 0, (void*)0, "03output_code.nc", 25, 21));
    (__right_value43 = come_decrement_ref_count(__right_value43, (void*)0, (void*)0, 1, 0, (void*)0, "03output_code.nc", 26, 22));
    (__right_value45 = come_decrement_ref_count(__right_value45, (void*)0, (void*)0, 1, 0, (void*)0, "03output_code.nc", 27, 23));
    (__right_value47 = come_decrement_ref_count(__right_value47, (void*)0, (void*)0, 1, 0, (void*)0, "03output_code.nc", 28, 24));
    (__right_value49 = come_decrement_ref_count(__right_value49, (void*)0, (void*)0, 1, 0, (void*)0, "03output_code.nc", 29, 25));
    (__right_value51 = come_decrement_ref_count(__right_value51, (void*)0, (void*)0, 1, 0, (void*)0, "03output_code.nc", 30, 26));
    (__right_value53 = come_decrement_ref_count(__right_value53, (void*)0, (void*)0, 1, 0, (void*)0, "03output_code.nc", 31, 27));
    (__right_value55 = come_decrement_ref_count(__right_value55, (void*)0, (void*)0, 1, 0, (void*)0, "03output_code.nc", 32, 28));
    (__right_value57 = come_decrement_ref_count(__right_value57, (void*)0, (void*)0, 1, 0, (void*)0, "03output_code.nc", 33, 29));
    (__right_value59 = come_decrement_ref_count(__right_value59, (void*)0, (void*)0, 1, 0, (void*)0, "03output_code.nc", 34, 30));
    (__right_value61 = come_decrement_ref_count(__right_value61, (void*)0, (void*)0, 1, 0, (void*)0, "03output_code.nc", 35, 31));
    (__right_value63 = come_decrement_ref_count(__right_value63, (void*)0, (void*)0, 1, 0, (void*)0, "03output_code.nc", 36, 32));
    (__right_value65 = come_decrement_ref_count(__right_value65, (void*)0, (void*)0, 1, 0, (void*)0, "03output_code.nc", 37, 33));
    (__right_value67 = come_decrement_ref_count(__right_value67, (void*)0, (void*)0, 1, 0, (void*)0, "03output_code.nc", 38, 34));
    (__right_value69 = come_decrement_ref_count(__right_value69, (void*)0, (void*)0, 1, 0, (void*)0, "03output_code.nc", 39, 35));
    (__right_value71 = come_decrement_ref_count(__right_value71, (void*)0, (void*)0, 1, 0, (void*)0, "03output_code.nc", 40, 36));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

_Bool should_strip_portable_asm_alias(const char* source, int* consumed)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "should_strip_portable_asm_alias"; neo_current_frame = &fr;
    int nest;
    int len;
    void* __right_value0 = (void*)0;
    _Bool has_darwin_suffix;
    _Bool has_underscore_alias;
    if(source==((void*)0)||consumed==((void*)0)) {
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    if(strncmp(source,"__asm",5)!=0) {
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    const char* p=source+5;
    while(*p==32||*p==9||*p==13||*p==10) {
        p++;
    }
    if(*p!=40) {
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    nest=1;
    p++;
    while(*p&&nest>0) {
        if(*p==40) {
            nest++;
        }
        else if(*p==41) {
            nest--;
        }
        p++;
    }
    if(nest!=0) {
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    len=p-source;
    char token[len+1];
    memset(&token, 0, sizeof(token));
    memcpy(token,source,len);
    token[len]=0;
    has_darwin_suffix=string_index(((char* )(__right_value0=__builtin_string(token))),"$",-1)>=0;
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "03output_code.nc", 80, 37));
    __right_value0 = (void*)0;
    has_underscore_alias=string_index(((char* )(__right_value0=__builtin_string(token))),"\"_",-1)>=0;
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "", 81, 38));
    if(!has_darwin_suffix&&!has_underscore_alias) {
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    *consumed=len;
        neo_current_frame = fr.prev;
    return (_Bool)1;
    neo_current_frame = fr.prev;
}

char*  normalize_portable_c_source(char* source)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "normalize_portable_c_source"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    void* __right_value1 = (void*)0;
    struct buffer*  result  ;
    int asm_len;
    int len;
    char* out;
    int pos;
    if(source==((void*)0)) {
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(""))), "03output_code.nc", 94, 39);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "03output_code.nc", 94, 40));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "03output_code.nc", 94, 41));
        return __result_obj__0;
    }
    if(!gPortableC) {
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(source))), "03output_code.nc", 97, 42);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "03output_code.nc", 97, 43));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "03output_code.nc", 97, 44));
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    result=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "03output_code.nc", 100, 45, "struct buffer* "), "03output_code.nc", 100, 46)), "03output_code.nc", 100, 47);
    const char* p=source;
    while(*p) {
        asm_len=0;
        if(should_strip_portable_asm_alias(p,&asm_len)) {
            p+=asm_len;
            continue;
        }
        if(xisalpha(*p)||*p==95||*p==36) {
            const char* head=p;
            while(xisalnum(*p)||*p==95||*p==36) {
                p++;
            }
            len=p-head;
            char token[len+1];
            memset(&token, 0, sizeof(token));
            memcpy(token,head,len);
            token[len]=0;
            out=token;
            __right_value0 = (void*)0;
            pos=string_index(((char* )(__right_value0=__builtin_string(token))),"$",-1);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "", 122, 48));
            if(pos>=0&&token[0]==95&&token[1]!=95&&token[1]!=0&&token[pos+1]>=65&&token[pos+1]<=90) {
                token[pos]=0;
                out=token+1;
            }
            else if(token[0]==95&&token[1]!=95&&token[1]!=0&&is_portable_libc_symbol(token+1)) {
                out=token+1;
            }
            buffer_append_str(result,out);
        }
        else {
            buffer_append_char(result,*p);
            p++;
        }
    }
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=buffer_to_string(result))), "03output_code.nc", 139, 49);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 0, (void*)0, "03output_code.nc}", 139, 50);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "03output_code.nc", 139, 51));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "03output_code.nc", 139, 52));
    return __result_obj__0;
}

char*  make_type_name_string(struct sType*  type  , struct sInfo*  info  , _Bool no_static, _Bool cast_type, _Bool typedef_extended, _Bool nullchecker)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "make_type_name_string"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer*  buf  ;
    char*  class_name  ;
    _Bool no_output_come_code;
    char*  __result_obj__0  ;
    struct CVALUE*  come_value  ;
    _Bool eval_pointer_num;
    char*  result_type_str  ;
    int i;
    int i_0;
    int i_1;
    int i_2;
    struct sNode* node;
    _Bool Value;
    struct CVALUE*  cvalue  ;
    int j;
    struct list$1sType$ph* _o2_saved_1;
    struct sType*  it  ;
    char*  param_type_str  ;
    int i_7;
    int i_8;
    int i_9;
    int i_10;
    struct list$1sNode$ph* _o2_saved_2;
    struct sNode* it_12;
    struct CVALUE*  cvalue_14  ;
    int i_15;
    int i_16;
    struct sNode* node_17;
    _Bool Value_18;
    struct CVALUE*  cvalue_19  ;
    buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "03output_code.nc", 143, 53, "struct buffer* "), "03output_code.nc", 143, 54)), "03output_code.nc", 143, 55);
    class_name=(char* )come_increment_ref_count(type->mClass->mName, "03output_code.nc", 145, 56);
    if(type->mAlignasDouble&&!no_static) {
        buffer_append_format(buf,"_Alignas(double) ");
    }
    else if(type->mAlignas&&!no_static) {
        no_output_come_code=info->no_output_come_code;
        info->no_output_come_code=(_Bool)1;
        if(!node_compile(type->mAlignas,info)) {
            printf("_Alignas error\n");
                        __right_value0 = (void*)0;
            __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(""))), "03output_code.nc", 155, 57);
            come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "03output_code.nc}", 155, 58);
            (class_name = come_decrement_ref_count(class_name, (void*)0, (void*)0, 0, 0, (void*)0, "03output_code.nc", 155, 59));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "03output_code.nc", 155, 60));
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "03output_code.nc", 155, 61));
            return __result_obj__0;
        }
        info->no_output_come_code=no_output_come_code;
        __right_value0 = (void*)0;
        come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "03output_code.nc", 159, 62);
        buffer_append_format(buf,"_Alignas(%s) ",come_value->c_value);
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "03output_code.nc}", 164, 100);
    }
    if(type->mStatic&&!no_static) {
        buffer_append_str(buf,"static ");
    }
    if(type->mAtomic) {
        buffer_append_str(buf,"_Atomic(");
    }
    if(type->mThreadLocal) {
        buffer_append_str(buf,"_Thread_local ");
    }
    if(type->mNoreturn) {
        buffer_append_str(buf,"_Noreturn ");
    }
    if(type->mConstant) {
        buffer_append_str(buf,"const ");
    }
    if(type->mVolatile) {
        buffer_append_str(buf,"volatile ");
    }
    if(type->mComplex) {
        buffer_append_str(buf,"_Complex ");
    }
    if(type->mRegister) {
        buffer_append_str(buf,"register ");
    }
    if(type->mUnsigned) {
        buffer_append_str(buf,"unsigned ");
    }
    if(type->mShort) {
        buffer_append_str(buf,"short ");
    }
    eval_pointer_num=(_Bool)0;
    if(string_operator_equals(type->mOriginalTypeName,"va_list")) {
        buffer_append_str(buf,"va_list");
    }
    else if(string_operator_equals(type->mOriginalTypeName,"__builtin_va_list")) {
        buffer_append_str(buf,"__builtin_va_list");
    }
    else if(string_operator_equals(class_name,"__builtin_va_list")) {
        buffer_append_str(buf,"__builtin_va_list");
    }
    else if(type->mClass->mStruct) {
        buffer_append_str(buf,"struct ");
        buffer_append_str(buf,class_name);
    }
    else if(type->mClass->mUnion) {
        buffer_append_str(buf,"union ");
        buffer_append_str(buf,class_name);
    }
    else if(type->mClass->mEnum) {
        buffer_append_str(buf,"enum ");
        buffer_append_str(buf,class_name);
    }
    else if(type->mLongLong) {
        if(string_operator_equals(class_name,"int")) {
            buffer_append_str(buf,"long long int");
        }
        else if(string_operator_equals(class_name,"long")) {
            buffer_append_str(buf,"long long");
        }
    }
    else if(type->mLong) {
        buffer_append_str(buf,"long ");
        if(string_operator_equals(class_name,"int")) {
            buffer_append_str(buf," int");
        }
        else if(string_operator_equals(class_name,"long")) {
            buffer_append_str(buf," long");
        }
        else if(string_operator_equals(class_name,"double")) {
            buffer_append_str(buf," double");
        }
    }
    else if(string_operator_equals(class_name,"long")) {
        buffer_append_str(buf,"long");
    }
    else if(string_operator_equals(class_name,"__uint128_t")) {
        buffer_append_str(buf,"__uint128_t");
    }
    else if(string_operator_equals(class_name,"bool")) {
        buffer_append_str(buf,"_Bool");
    }
    else if(string_operator_equals(class_name,"lambda")) {
        __right_value0 = (void*)0;
        result_type_str=(char* )come_increment_ref_count(make_type_name_string(type->mResultType,info,(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0), "03output_code.nc", 251, 101);
        buffer_append_str(buf,result_type_str);
        buffer_append_str(buf," ");
        if(type->mMiddleAttribute!=((void*)0)&&string_operator_not_equals(type->mMiddleAttribute,"")) {
            buffer_append_str(buf,type->mMiddleAttribute);
            buffer_append_str(buf," ");
        }
        if(type->mArrayPointerNum>0) {
            for(i=0            ;i<type->mArrayPointerNum+1;i++){
                buffer_append_str(buf,"(");
                buffer_append_str(buf,"*");
            }
            if(type->mPointerAttribute!=((void*)0)&&string_operator_not_equals(type->mPointerAttribute,"")) {
                buffer_append_str(buf," ");
                buffer_append_str(buf,type->mPointerAttribute);
            }
            if(type->mArrayPointerType) {
                buffer_append_str(buf,"[]");
            }
            for(i_0=0            ;i_0<type->mArrayPointerNum;i_0++){
                buffer_append_str(buf,")");
            }
        }
        else if(type->mFunctionPointerNum>1) {
            buffer_append_str(buf,"(");
            for(i_1=0            ;i_1<type->mFunctionPointerNum;i_1++){
                buffer_append_str(buf,"*");
            }
            if(type->mPointerAttribute!=((void*)0)&&string_operator_not_equals(type->mPointerAttribute,"")) {
                buffer_append_str(buf," ");
                buffer_append_str(buf,type->mPointerAttribute);
            }
            if(type->mArrayPointerType) {
                buffer_append_str(buf,"[]");
            }
            eval_pointer_num=(_Bool)1;
        }
        else {
            buffer_append_str(buf,"(*");
            if(type->mPointerAttribute!=((void*)0)&&string_operator_not_equals(type->mPointerAttribute,"")) {
                buffer_append_str(buf," ");
                buffer_append_str(buf,type->mPointerAttribute);
            }
            if(type->mArrayPointerType) {
                buffer_append_str(buf,"[]");
            }
        }
        if(list$1sNode$ph_length(type->mArrayNum)>0) {
            for(i_2=0            ;i_2<list$1sNode$ph_length(type->mArrayNum);i_2++){
                buffer_append_str(buf,"[");
                __right_value0 = (void*)0;
                node=(struct sNode*)come_increment_ref_count(list$1sNode$ph_operator_load_element(type->mArrayNum,i_2), "03output_code.nc", 304, 120);
                Value=node_compile(node,info);
                if(!Value) {
                    err_msg(info,"invalid array num");
                    exit(2);
                }
                __right_value0 = (void*)0;
                cvalue=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "03output_code.nc", 311, 121);
                buffer_append_format(buf,"%s",cvalue->c_value);
                buffer_append_str(buf,"]");
                ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "03output_code.nc", 316, 122):(void*)0);
                come_call_finalizer(CVALUE_finalize, cvalue, (void*)0, (void*)0, 0, 0, 0, (void*)0, "03output_code.nc}", 316, 123);
            }
        }
        if(type->mArrayPointerType) {
            buffer_append_str(buf,"[]");
        }
        buffer_append_str(buf,")(");
        j=0;
        for(_o2_saved_1=(struct list$1sType$ph*)come_increment_ref_count(type->mParamTypes, "03output_code.nc", 323, 124),it=list$1sType$ph_begin(_o2_saved_1)        ;!list$1sType$ph_end(_o2_saved_1);it=list$1sType$ph_next(_o2_saved_1)){
            __right_value0 = (void*)0;
            param_type_str=(char* )come_increment_ref_count(make_type_name_string(it,info,(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0), "03output_code.nc", 324, 125);
            buffer_append_str(buf,param_type_str);
            if(j!=list$1sType$ph_length(type->mParamTypes)-1) {
                buffer_append_str(buf,",");
            }
            j++;
            (param_type_str = come_decrement_ref_count(param_type_str, (void*)0, (void*)0, 0, 0, (void*)0, "03output_code.nc", 333, 126));
        }
        buffer_append_str(buf,")");
        (result_type_str = come_decrement_ref_count(result_type_str, (void*)0, (void*)0, 0, 0, (void*)0, "03output_code.nc", 423, 127));
        come_call_finalizer(list$1sType$ph$p_finalize, _o2_saved_1, (void*)0, (void*)0, 0, 0, 0, (void*)0, "03output_code.nc}", 423, 128);
    }
    else {
        if(class_name==((void*)0)) {
            err_msg(info,"class name is null");
                        __right_value0 = (void*)0;
            __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(""))), "03output_code.nc", 338, 129);
            come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "03output_code.nc}", 338, 130);
            (class_name = come_decrement_ref_count(class_name, (void*)0, (void*)0, 0, 0, (void*)0, "03output_code.nc", 338, 131));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "03output_code.nc", 338, 132));
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "03output_code.nc", 338, 133));
            return __result_obj__0;
        }
        buffer_append_str(buf,class_name);
        if(cast_type) {
            if(type->mArrayPointerNum>0) {
                if(!nullchecker) {
                    buffer_append_str(buf,"(");
                }
                for(i_7=0                ;i_7<type->mArrayPointerNum;i_7++){
                    buffer_append_str(buf,"*");
                }
                if(type->mTypedefOriginalType) {
                    for(i_8=0                    ;i_8<type->mTypedefOriginalType->mPointerNum;i_8++){
                        buffer_append_str(buf,"*");
                    }
                }
                if(!nullchecker) {
                    buffer_append_str(buf,")");
                }
                eval_pointer_num=(_Bool)1;
            }
            else if(type->mPointerNum>0&&list$1sNode$ph_length(type->mArrayNum)>0) {
                if(!nullchecker) {
                    buffer_append_str(buf,"(");
                }
                for(i_9=0                ;i_9<type->mPointerNum;i_9++){
                    buffer_append_str(buf,"*");
                }
                if(type->mTypedefOriginalType) {
                    for(i_10=0                    ;i_10<type->mTypedefOriginalType->mPointerNum;i_10++){
                        buffer_append_str(buf,"*");
                    }
                }
                for(_o2_saved_2=(struct list$1sNode$ph*)come_increment_ref_count(type->mVarNameArrayNum, "03output_code.nc", 392, 134),it_12=list$1sNode$ph_begin(_o2_saved_2)                ;!list$1sNode$ph_end(_o2_saved_2);it_12=list$1sNode$ph_next(_o2_saved_2)){
                    if(!node_compile(it_12,info)) {
                        err_msg(info,"invalid array number");
                                                __right_value0 = (void*)0;
                        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(""))), "03output_code.nc", 395, 135);
                        come_call_finalizer(list$1sNode$ph$p_finalize, _o2_saved_2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "03output_code.nc}", 395, 136);
                        come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "03output_code.nc}", 395, 137);
                        (class_name = come_decrement_ref_count(class_name, (void*)0, (void*)0, 0, 0, (void*)0, "03output_code.nc", 395, 138));
                        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "03output_code.nc", 395, 139));
                        neo_current_frame = fr.prev;
                        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "03output_code.nc", 395, 140));
                        return __result_obj__0;
                    }
                    __right_value0 = (void*)0;
                    cvalue_14=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "03output_code.nc", 397, 141);
                    buffer_append_format(buf,"[%s]",cvalue_14->c_value);
                    come_call_finalizer(CVALUE_finalize, cvalue_14, (void*)0, (void*)0, 0, 0, 0, (void*)0, "03output_code.nc}", 401, 142);
                }
                if(!nullchecker) {
                    buffer_append_str(buf,")");
                }
                eval_pointer_num=(_Bool)1;
                come_call_finalizer(list$1sNode$ph$p_finalize, _o2_saved_2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "03output_code.nc}", 420, 143);
            }
        }
    }
    if(!eval_pointer_num&&string_operator_not_equals(class_name,"lambda")&&string_operator_not_equals(type->mOriginalTypeName,"va_list")&&string_operator_not_equals(type->mOriginalTypeName,"__builtin_va_list")) {
        for(i_15=0        ;i_15<type->mPointerNum;i_15++){
            buffer_append_str(buf,"*");
        }
    }
    if(string_operator_not_equals(class_name,"lambda")&&type->mPointerAttribute!=((void*)0)&&string_operator_not_equals(type->mPointerAttribute,"")) {
        buffer_append_str(buf," ");
        buffer_append_str(buf,type->mPointerAttribute);
    }
    if(type->mRestrict) {
        buffer_append_str(buf," restrict");
    }
    if(type->mAttribute) {
        __right_value0 = (void*)0;
        buffer_append_str(buf,((char* )(__right_value0=charp_operator_add(" ",type->mAttribute))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "03output_code.nc", 439, 144));
    }
    if(list$1sNode$ph_length(type->mArrayNum)>0&&typedef_extended) {
        for(i_16=0        ;i_16<list$1sNode$ph_length(type->mArrayNum);i_16++){
            buffer_append_str(buf,"[");
            __right_value0 = (void*)0;
            node_17=(struct sNode*)come_increment_ref_count(list$1sNode$ph_operator_load_element(type->mArrayNum,i_16), "03output_code.nc", 445, 145);
            Value_18=node_compile(node_17,info);
            if(!Value_18) {
                err_msg(info,"invalid array num");
                exit(2);
            }
            __right_value0 = (void*)0;
            cvalue_19=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "03output_code.nc", 452, 146);
            buffer_append_format(buf,"%s",cvalue_19->c_value);
            buffer_append_str(buf,"]");
            ((node_17) ? node_17 = come_decrement_ref_count(node_17, ((struct sNode*)node_17)->finalize, ((struct sNode*)node_17)->_protocol_obj, 0, 0,(void*)0, "03output_code.nc", 457, 147):(void*)0);
            come_call_finalizer(CVALUE_finalize, cvalue_19, (void*)0, (void*)0, 0, 0, 0, (void*)0, "03output_code.nc}", 457, 148);
        }
    }
    if(type->mAtomic) {
        buffer_append_str(buf,")");
    }
    if(cast_type&&type->mArrayPointerType) {
        if(nullchecker) {
            buffer_append_str(buf,"*");
        }
        else {
            buffer_append_str(buf,"[]");
        }
    }
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=buffer_to_string(buf))), "03output_code.nc", 471, 149);
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "03output_code.nc}", 471, 150);
    (class_name = come_decrement_ref_count(class_name, (void*)0, (void*)0, 0, 0, (void*)0, "03output_code.nc", 471, 151));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "03output_code.nc", 471, 152));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "03output_code.nc", 471, 153));
    return __result_obj__0;
}

static void CVALUE_finalize(struct CVALUE*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "CVALUE_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->c_value!=((void*)0)) {
        (self->c_value = come_decrement_ref_count(self->c_value, (void*)0, (void*)0, 0, 0, (void*)0, "CVALUE_finalize", 2, 63));
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "CVALUE_finalize}", 3, 96);
    }
    if(self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        (self->c_value_without_right_value_objects = come_decrement_ref_count(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, (void*)0, "CVALUE_finalize", 4, 97));
    }
    if(self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)) {
        (self->c_value_without_cast_object_value = come_decrement_ref_count(self->c_value_without_cast_object_value, (void*)0, (void*)0, 0, 0, (void*)0, "CVALUE_finalize", 5, 98));
    }
    if(self!=((void*)0)&&self->c_value_without_null_checker!=((void*)0)) {
        (self->c_value_without_null_checker = come_decrement_ref_count(self->c_value_without_null_checker, (void*)0, (void*)0, 0, 0, (void*)0, "CVALUE_finalize", 6, 99));
    }
            neo_current_frame = fr.prev;
}

static void sType_finalize(struct sType*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sType_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 2, 64);
    }
    if(self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mChannelType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 3, 65);
    }
    if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 4, 68);
    }
    if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 5, 69);
    }
    if(self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        ((self->mSizeNum) ? self->mSizeNum = come_decrement_ref_count(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0,(void*)0, "sType_finalize", 6, 70):(void*)0);
    }
    if(self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        ((self->mAlignas) ? self->mAlignas = come_decrement_ref_count(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0,(void*)0, "sType_finalize", 7, 71):(void*)0);
    }
    if(self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        (self->mTupleName = come_decrement_ref_count(self->mTupleName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 8, 72));
    }
    if(self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 9, 73));
    }
    if(self!=((void*)0)&&self->mVarAttribute!=((void*)0)) {
        (self->mVarAttribute = come_decrement_ref_count(self->mVarAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 10, 74));
    }
    if(self!=((void*)0)&&self->mMiddleAttribute!=((void*)0)) {
        (self->mMiddleAttribute = come_decrement_ref_count(self->mMiddleAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 11, 75));
    }
    if(self!=((void*)0)&&self->mPointerAttribute!=((void*)0)) {
        (self->mPointerAttribute = come_decrement_ref_count(self->mPointerAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 12, 76));
    }
    if(self!=((void*)0)&&self->mAnonymousName!=((void*)0)) {
        (self->mAnonymousName = come_decrement_ref_count(self->mAnonymousName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 13, 77));
    }
    if(self!=((void*)0)&&self->mInnerStructName!=((void*)0)) {
        (self->mInnerStructName = come_decrement_ref_count(self->mInnerStructName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 14, 78));
    }
    if(self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        (self->mAsmName = come_decrement_ref_count(self->mAsmName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 15, 79));
    }
    if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 16, 82);
    }
    if(self!=((void*)0)&&self->mVarNameArrayNum!=((void*)0)) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mVarNameArrayNum, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 17, 83);
    }
    if(self!=((void*)0)&&self->mArrayStatic!=((void*)0)) {
        come_call_finalizer(list$1int$$p_finalize, self->mArrayStatic, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 18, 85);
    }
    if(self!=((void*)0)&&self->mArrayRestrict!=((void*)0)) {
        come_call_finalizer(list$1int$$p_finalize, self->mArrayRestrict, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 19, 86);
    }
    if(self!=((void*)0)&&self->mTypedefOriginalType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mTypedefOriginalType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 20, 87);
    }
    if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        (self->mOriginalTypeName = come_decrement_ref_count(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 21, 88));
    }
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 22, 89);
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamNames, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 23, 92);
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mResultType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 24, 93);
    }
    if(self!=((void*)0)&&self->mTypeOfNode!=((void*)0)) {
        ((self->mTypeOfNode) ? self->mTypeOfNode = come_decrement_ref_count(self->mTypeOfNode, ((struct sNode*)self->mTypeOfNode)->finalize, ((struct sNode*)self->mTypeOfNode)->_protocol_obj, 0, 0,(void*)0, "sType_finalize", 25, 94):(void*)0);
    }
    if(self!=((void*)0)&&self->mHeapArrayNum!=((void*)0)) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mHeapArrayNum, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 26, 95);
    }
            neo_current_frame = fr.prev;
}

static void list$1sType$ph$p_finalize(struct list$1sType$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph$p_finalize"; neo_current_frame = &fr;
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
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1504, 67);
    }
            neo_current_frame = fr.prev;
}

static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1sType$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "list_item$1sType$ph$p_finalize}", 2, 66);
    }
            neo_current_frame = fr.prev;
}

static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph$p_finalize"; neo_current_frame = &fr;
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
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1504, 81);
    }
            neo_current_frame = fr.prev;
}

static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1sNode$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        ((self->item) ? self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0,(void*)0, "list_item$1sNode$ph$p_finalize", 2, 80):(void*)0);
    }
            neo_current_frame = fr.prev;
}

static void list$1int$$p_finalize(struct list$1int$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$$p_finalize"; neo_current_frame = &fr;
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
        come_call_finalizer(list_item$1int$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1504, 84);
    }
            neo_current_frame = fr.prev;
}

static void list_item$1int$$p_finalize(struct list_item$1int$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1int$$p_finalize"; neo_current_frame = &fr;
            neo_current_frame = fr.prev;
}

static void list$1char$ph$p_finalize(struct list$1char$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph$p_finalize"; neo_current_frame = &fr;
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
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1504, 91);
    }
            neo_current_frame = fr.prev;
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1char$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0, 0, (void*)0, "list_item$1char$ph$p_finalize", 2, 90));
    }
            neo_current_frame = fr.prev;
}

static int list$1sNode$ph_length(struct list$1sNode$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_length"; neo_current_frame = &fr;
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return 0;
    }
        neo_current_frame = fr.prev;
    return self->len;
            neo_current_frame = fr.prev;
}

static struct sNode* list$1sNode$ph$p_operator_load_element(struct list$1sNode$ph* self, int position)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph$p_operator_load_element"; neo_current_frame = &fr;
    struct sNode* default_value;
    struct sNode* __result_obj__0;
    struct list_item$1sNode$ph* it;
    int i;
    struct sNode* default_value_3;
    if(self==((void*)0)) {
        memset(&default_value,0,sizeof(struct sNode*));
                __result_obj__0 = (struct sNode*)come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 2148, 102);
        ((default_value) ? default_value = come_decrement_ref_count(default_value, ((struct sNode*)default_value)->finalize, ((struct sNode*)default_value)->_protocol_obj, 0, 1,(void*)0, "/usr/local/include/neo-c.h", 2148, 103):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "/usr/local/include/neo-c.h", 2148, 104):(void*)0);
        return __result_obj__0;
        ((default_value) ? default_value = come_decrement_ref_count(default_value, ((struct sNode*)default_value)->finalize, ((struct sNode*)default_value)->_protocol_obj, 0, 0,(void*)0, "/usr/local/include/neo-c.h", 2151, 105):(void*)0);
    }
    if(position<0) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(it!=((void*)0)) {
        if(position==i) {
                        __result_obj__0 = (struct sNode*)come_increment_ref_count(it->item, "/usr/local/include/neo-c.h", 2159, 106);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "/usr/local/include/neo-c.h", 2159, 107):(void*)0);
            return __result_obj__0;
        }
        it=it->next;
        i++;
    }
    memset(&default_value_3,0,sizeof(struct sNode*));
        __result_obj__0 = (struct sNode*)come_increment_ref_count(default_value_3, "/usr/local/include/neo-c.h", 2167, 108);
    ((default_value_3) ? default_value_3 = come_decrement_ref_count(default_value_3, ((struct sNode*)default_value_3)->finalize, ((struct sNode*)default_value_3)->_protocol_obj, 0, 1,(void*)0, "/usr/local/include/neo-c.h", 2167, 109):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "/usr/local/include/neo-c.h", 2167, 110):(void*)0);
    return __result_obj__0;
}

static struct sNode* list$1sNode$ph_operator_load_element(struct list$1sNode$ph* self, int position)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_operator_load_element"; neo_current_frame = &fr;
    struct sNode* default_value;
    struct sNode* __result_obj__0;
    struct list_item$1sNode$ph* it;
    int i;
    struct sNode* default_value_4;
    if(self==((void*)0)) {
        memset(&default_value,0,sizeof(struct sNode*));
                __result_obj__0 = (struct sNode*)come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 2148, 111);
        ((default_value) ? default_value = come_decrement_ref_count(default_value, ((struct sNode*)default_value)->finalize, ((struct sNode*)default_value)->_protocol_obj, 0, 1,(void*)0, "/usr/local/include/neo-c.h", 2148, 112):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "/usr/local/include/neo-c.h", 2148, 113):(void*)0);
        return __result_obj__0;
        ((default_value) ? default_value = come_decrement_ref_count(default_value, ((struct sNode*)default_value)->finalize, ((struct sNode*)default_value)->_protocol_obj, 0, 0,(void*)0, "/usr/local/include/neo-c.h", 2151, 114):(void*)0);
    }
    if(position<0) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(it!=((void*)0)) {
        if(position==i) {
                        __result_obj__0 = (struct sNode*)come_increment_ref_count(it->item, "/usr/local/include/neo-c.h", 2159, 115);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "/usr/local/include/neo-c.h", 2159, 116):(void*)0);
            return __result_obj__0;
        }
        it=it->next;
        i++;
    }
    memset(&default_value_4,0,sizeof(struct sNode*));
        __result_obj__0 = (struct sNode*)come_increment_ref_count(default_value_4, "/usr/local/include/neo-c.h", 2167, 117);
    ((default_value_4) ? default_value_4 = come_decrement_ref_count(default_value_4, ((struct sNode*)default_value_4)->finalize, ((struct sNode*)default_value_4)->_protocol_obj, 0, 1,(void*)0, "/usr/local/include/neo-c.h", 2167, 118):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "/usr/local/include/neo-c.h", 2167, 119):(void*)0);
    return __result_obj__0;
}

static struct sType*  list$1sType$ph_begin(struct list$1sType$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_begin"; neo_current_frame = &fr;
    struct sType*  result  ;
    struct sType*  __result_obj__0  ;
    struct sType*  result_5  ;
    if(self==((void*)0)) {
        memset(&result,0,sizeof(struct sType* ));
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
    memset(&result_5,0,sizeof(struct sType* ));
        __result_obj__0 = result_5;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static _Bool list$1sType$ph_end(struct list$1sType$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_end"; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self==((void*)0)||self->it==((void*)0);
            neo_current_frame = fr.prev;
}

static struct sType*  list$1sType$ph_next(struct list$1sType$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_next"; neo_current_frame = &fr;
    struct sType*  result  ;
    struct sType*  __result_obj__0  ;
    struct sType*  result_6  ;
    if(self==((void*)0)||self->it==((void*)0)) {
        memset(&result,0,sizeof(struct sType* ));
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
    memset(&result_6,0,sizeof(struct sType* ));
        __result_obj__0 = result_6;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static int list$1sType$ph_length(struct list$1sType$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_length"; neo_current_frame = &fr;
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
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_begin"; neo_current_frame = &fr;
    struct sNode* result;
    struct sNode* __result_obj__0;
    struct sNode* result_11;
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
    memset(&result_11,0,sizeof(struct sNode*));
        __result_obj__0 = result_11;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static _Bool list$1sNode$ph_end(struct list$1sNode$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_end"; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self==((void*)0)||self->it==((void*)0);
                    neo_current_frame = fr.prev;
}

static struct sNode* list$1sNode$ph_next(struct list$1sNode$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_next"; neo_current_frame = &fr;
    struct sNode* result;
    struct sNode* __result_obj__0;
    struct sNode* result_13;
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
    memset(&result_13,0,sizeof(struct sNode*));
        __result_obj__0 = result_13;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sType*  get_no_solved_type(struct sType*  type  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "get_no_solved_type"; neo_current_frame = &fr;
    struct sType*  result  ;
    void* __right_value0 = (void*)0;
    struct sType*  __dec_obj35  ;
    struct sType*  __dec_obj36  ;
    int i;
    struct list$1sType$ph* _o2_saved_3;
    struct sType*  it  ;
    void* __right_value1 = (void*)0;
    struct sType*  __result_obj__0  ;
    memset(&result, 0, sizeof(result));
    if(type->mNoSolvedGenericsType) {
        __dec_obj35=result,
        result=(struct sType* )come_increment_ref_count(sType_clone(type->mNoSolvedGenericsType), "03output_code.nc", 478, 332);
        come_call_finalizer(sType_finalize, __dec_obj35,(void*)0, (void*)0, 0, 0, 0, (void*)0, "03output_code.nc", 478, 331);
    }
    else {
        __right_value0 = (void*)0;
        __dec_obj36=result,
        result=(struct sType* )come_increment_ref_count(sType_clone(type), "03output_code.nc", 481, 334);
        come_call_finalizer(sType_finalize, __dec_obj36,(void*)0, (void*)0, 0, 0, 0, (void*)0, "03output_code.nc", 481, 333);
    }
    i=0;
    for(_o2_saved_3=(struct list$1sType$ph*)come_increment_ref_count(type->mGenericsTypes, "03output_code.nc", 485, 335),it=list$1sType$ph_begin(_o2_saved_3)    ;!list$1sType$ph_end(_o2_saved_3);it=list$1sType$ph_next(_o2_saved_3)){
        __right_value0 = (void*)0;
        list$1sType$ph_operator_store_element(result->mGenericsTypes,i,(struct sType* )come_increment_ref_count(get_no_solved_type(it), "03output_code.nc", 486, 360));
        i++;
    }
        __result_obj__0 = (struct sType* )come_increment_ref_count(result, "03output_code.nc", 490, 361);
    come_call_finalizer(sType_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "03output_code.nc}", 490, 362);
    come_call_finalizer(list$1sType$ph$p_finalize, _o2_saved_3, (void*)0, (void*)0, 0, 0, 0, (void*)0, "03output_code.nc}", 490, 363);
    neo_current_frame = fr.prev;
    come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "03output_code.nc}", 490, 364);
    return __result_obj__0;
}

static struct sType*  sType_clone(struct sType*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sType_clone"; neo_current_frame = &fr;
    struct sType*  __result_obj__0  ;
    void* __right_value0 = (void*)0;
    struct sType*  result  ;
    struct sType*  __dec_obj1  ;
    struct sType*  __dec_obj2  ;
    struct list$1sType$ph* __dec_obj6;
    struct sType*  __dec_obj7  ;
    struct sNode* __dec_obj8;
    struct sNode* __dec_obj9;
    char*  __dec_obj10  ;
    char*  __dec_obj11  ;
    char*  __dec_obj12  ;
    char*  __dec_obj13  ;
    char*  __dec_obj14  ;
    char*  __dec_obj15  ;
    char*  __dec_obj16  ;
    char*  __dec_obj17  ;
    struct list$1sNode$ph* __dec_obj21;
    struct list$1sNode$ph* __dec_obj22;
    struct list$1int$* __dec_obj23;
    struct list$1int$* __dec_obj24;
    struct sType*  __dec_obj25  ;
    char*  __dec_obj26  ;
    struct list$1sType$ph* __dec_obj27;
    struct list$1char$ph* __dec_obj31;
    struct sType*  __dec_obj32  ;
    struct sNode* __dec_obj33;
    struct list$1sNode$ph* __dec_obj34;
    if(self==(void*)0) {
                __result_obj__0 = (struct sType* )come_increment_ref_count((void*)0, "sType_clone", 4, 154);
        neo_current_frame = fr.prev;
        come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sType_clone}", 4, 155);
        return __result_obj__0;
    }
    result=(struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "sType_clone", 5, 156, "struct sType* "), "sType_clone", 5, 157);
    if(self!=((void*)0)) {
        result->mClass=self->mClass;
    }
    if(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj1=result->mOriginalLoadVarType,
        result->mOriginalLoadVarType=(struct sType* )come_increment_ref_count(sType_clone(self->mOriginalLoadVarType), "sType_clone", 7, 159);
        come_call_finalizer(sType_finalize, __dec_obj1,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 7, 158);
    }
    if(self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj2=result->mChannelType,
        result->mChannelType=(struct sType* )come_increment_ref_count(sType_clone(self->mChannelType), "sType_clone", 8, 161);
        come_call_finalizer(sType_finalize, __dec_obj2,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 8, 160);
    }
    if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj6=result->mGenericsTypes,
        result->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mGenericsTypes), "sType_clone", 9, 191);
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj6,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 9, 190);
    }
    if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj7=result->mNoSolvedGenericsType,
        result->mNoSolvedGenericsType=(struct sType* )come_increment_ref_count(sType_clone(self->mNoSolvedGenericsType), "sType_clone", 10, 193);
        come_call_finalizer(sType_finalize, __dec_obj7,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 10, 192);
    }
    if(self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj8=result->mSizeNum,
        result->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum), "sType_clone", 11, 202);
        (__dec_obj8 ? __dec_obj8 = come_decrement_ref_count(__dec_obj8, ((struct sNode*)__dec_obj8)->finalize, ((struct sNode*)__dec_obj8)->_protocol_obj, 0,0, (void*)0, "sType_clone", 11, 201) :0);
    }
    if(self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj9=result->mAlignas,
        result->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas), "sType_clone", 12, 204);
        (__dec_obj9 ? __dec_obj9 = come_decrement_ref_count(__dec_obj9, ((struct sNode*)__dec_obj9)->finalize, ((struct sNode*)__dec_obj9)->_protocol_obj, 0,0, (void*)0, "sType_clone", 12, 203) :0);
    }
    if(self!=((void*)0)) {
        result->mAlignasDouble=self->mAlignasDouble;
    }
    if(self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj10=result->mTupleName,
        result->mTupleName=(char* )come_increment_ref_count((char* )come_memdup(self->mTupleName, "sType_clone", 14, 205, "char* "), "sType_clone", 14, 207);
        __dec_obj10 = come_decrement_ref_count(__dec_obj10, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 14, 206);
    }
    if(self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj11=result->mAttribute,
        result->mAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mAttribute, "sType_clone", 15, 208, "char* "), "sType_clone", 15, 210);
        __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 15, 209);
    }
    if(self!=((void*)0)&&self->mVarAttribute!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj12=result->mVarAttribute,
        result->mVarAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mVarAttribute, "sType_clone", 16, 211, "char* "), "sType_clone", 16, 213);
        __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 16, 212);
    }
    if(self!=((void*)0)&&self->mMiddleAttribute!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj13=result->mMiddleAttribute,
        result->mMiddleAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mMiddleAttribute, "sType_clone", 17, 214, "char* "), "sType_clone", 17, 216);
        __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 17, 215);
    }
    if(self!=((void*)0)&&self->mPointerAttribute!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj14=result->mPointerAttribute,
        result->mPointerAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mPointerAttribute, "sType_clone", 18, 217, "char* "), "sType_clone", 18, 219);
        __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 18, 218);
    }
    if(self!=((void*)0)) {
        result->mNew=self->mNew;
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
        result->mNorecord=self->mNorecord;
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
        result->mNoreturn=self->mNoreturn;
    }
    if(self!=((void*)0)) {
        result->mStatic=self->mStatic;
    }
    if(self!=((void*)0)) {
        result->mWeak=self->mWeak;
    }
    if(self!=((void*)0)) {
        result->mUniq=self->mUniq;
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
        result->mRefference=self->mRefference;
    }
    if(self!=((void*)0)) {
        result->mSlice=self->mSlice;
    }
    if(self!=((void*)0)) {
        result->mOptional=self->mOptional;
    }
    if(self!=((void*)0)) {
        result->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(self!=((void*)0)) {
        result->mTypeName=self->mTypeName;
    }
    if(self!=((void*)0)) {
        result->mAnonymous=self->mAnonymous;
    }
    if(self!=((void*)0)&&self->mAnonymousName!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj15=result->mAnonymousName,
        result->mAnonymousName=(char* )come_increment_ref_count((char* )come_memdup(self->mAnonymousName, "sType_clone", 49, 220, "char* "), "sType_clone", 49, 222);
        __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 49, 221);
    }
    if(self!=((void*)0)) {
        result->mInnerStruct=self->mInnerStruct;
    }
    if(self!=((void*)0)&&self->mInnerStructName!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj16=result->mInnerStructName,
        result->mInnerStructName=(char* )come_increment_ref_count((char* )come_memdup(self->mInnerStructName, "sType_clone", 51, 223, "char* "), "sType_clone", 51, 225);
        __dec_obj16 = come_decrement_ref_count(__dec_obj16, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 51, 224);
    }
    if(self!=((void*)0)) {
        result->mAnonymousVarName=self->mAnonymousVarName;
    }
    if(self!=((void*)0)) {
        result->mInline=self->mInline;
    }
    if(self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj17=result->mAsmName,
        result->mAsmName=(char* )come_increment_ref_count((char* )come_memdup(self->mAsmName, "sType_clone", 54, 226, "char* "), "sType_clone", 54, 228);
        __dec_obj17 = come_decrement_ref_count(__dec_obj17, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 54, 227);
    }
    if(self!=((void*)0)) {
        result->mTypedef=self->mTypedef;
    }
    if(self!=((void*)0)) {
        result->mMultipleTypes=self->mMultipleTypes;
    }
    if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj21=result->mArrayNum,
        result->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mArrayNum), "sType_clone", 57, 258);
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj21,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 57, 257);
    }
    if(self!=((void*)0)&&self->mVarNameArrayNum!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj22=result->mVarNameArrayNum,
        result->mVarNameArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mVarNameArrayNum), "sType_clone", 58, 260);
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj22,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 58, 259);
    }
    if(self!=((void*)0)&&self->mArrayStatic!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj23=result->mArrayStatic,
        result->mArrayStatic=(struct list$1int$*)come_increment_ref_count(list$1int$$p_clone(self->mArrayStatic), "sType_clone", 59, 280);
        come_call_finalizer(list$1int$_finalize, __dec_obj23,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 59, 279);
    }
    if(self!=((void*)0)&&self->mArrayRestrict!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj24=result->mArrayRestrict,
        result->mArrayRestrict=(struct list$1int$*)come_increment_ref_count(list$1int$$p_clone(self->mArrayRestrict), "sType_clone", 60, 282);
        come_call_finalizer(list$1int$_finalize, __dec_obj24,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 60, 281);
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
    if(self!=((void*)0)) {
        result->mMinusPointerNum=self->mMinusPointerNum;
    }
    if(self!=((void*)0)&&self->mTypedefOriginalType!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj25=result->mTypedefOriginalType,
        result->mTypedefOriginalType=(struct sType* )come_increment_ref_count(sType_clone(self->mTypedefOriginalType), "sType_clone", 66, 284);
        come_call_finalizer(sType_finalize, __dec_obj25,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 66, 283);
    }
    if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj26=result->mOriginalTypeName,
        result->mOriginalTypeName=(char* )come_increment_ref_count((char* )come_memdup(self->mOriginalTypeName, "sType_clone", 67, 285, "char* "), "sType_clone", 67, 287);
        __dec_obj26 = come_decrement_ref_count(__dec_obj26, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 67, 286);
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
        __right_value0 = (void*)0;
        __dec_obj27=result->mParamTypes,
        result->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mParamTypes), "sType_clone", 71, 289);
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj27,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 71, 288);
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj31=result->mParamNames,
        result->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->mParamNames), "sType_clone", 72, 321);
        come_call_finalizer(list$1char$ph_finalize, __dec_obj31,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 72, 320);
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj32=result->mResultType,
        result->mResultType=(struct sType* )come_increment_ref_count(sType_clone(self->mResultType), "sType_clone", 73, 323);
        come_call_finalizer(sType_finalize, __dec_obj32,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 73, 322);
    }
    if(self!=((void*)0)) {
        result->mVarArgs=self->mVarArgs;
    }
    if(self!=((void*)0)&&self->mTypeOfNode!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj33=result->mTypeOfNode,
        result->mTypeOfNode=(struct sNode*)come_increment_ref_count(sNode_clone(self->mTypeOfNode), "sType_clone", 75, 325);
        (__dec_obj33 ? __dec_obj33 = come_decrement_ref_count(__dec_obj33, ((struct sNode*)__dec_obj33)->finalize, ((struct sNode*)__dec_obj33)->_protocol_obj, 0,0, (void*)0, "sType_clone", 75, 324) :0);
    }
    if(self!=((void*)0)&&self->mHeapArrayNum!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj34=result->mHeapArrayNum,
        result->mHeapArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mHeapArrayNum), "sType_clone", 76, 327);
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj34,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 76, 326);
    }
        __result_obj__0 = (struct sType* )come_increment_ref_count(result, "sType_clone", 77, 328);
    come_call_finalizer(sType_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sType_clone}", 77, 329);
    neo_current_frame = fr.prev;
    come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sType_clone}", 77, 330);
    return __result_obj__0;
}

static struct list$1sType$ph* list$1sType$ph$p_clone(struct list$1sType$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph$p_clone"; neo_current_frame = &fr;
    struct list$1sType$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1sType$ph* result;
    struct list_item$1sType$ph* it;
    if(self==((void*)0)) {
                __result_obj__0 = (struct list$1sType$ph*)come_increment_ref_count(((void*)0), "/usr/local/include/neo-c.h", 1509, 162);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1509, 163);
        return __result_obj__0;
    }
    result=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "/usr/local/include/neo-c.h", 1511, 164, "struct list$1sType$ph*"), "/usr/local/include/neo-c.h", 1511, 168)), "/usr/local/include/neo-c.h", 1511, 169);
    it=self->head;
    while(it!=((void*)0)) {
        if(1) {
            __right_value0 = (void*)0;
            list$1sType$ph_add(result,(struct sType* )come_increment_ref_count(sType_clone(it->item), "/usr/local/include/neo-c.h", 1516, 184));
        }
        else {
            __right_value0 = (void*)0;
            list$1sType$ph_add(result,(struct sType* )come_increment_ref_count(sType_clone(it->item), "/usr/local/include/neo-c.h", 1519, 185));
        }
        it=it->next;
    }
        __result_obj__0 = (struct list$1sType$ph*)come_increment_ref_count(result, "/usr/local/include/neo-c.h", 1525, 186);
    come_call_finalizer(list$1sType$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1525, 187);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1525, 188);
    return __result_obj__0;
}

static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_initialize"; neo_current_frame = &fr;
    struct list$1sType$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = (struct list$1sType$ph*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 1483, 165);
    come_call_finalizer(list$1sType$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1483, 166);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1483, 167);
    return __result_obj__0;
}

static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_add"; neo_current_frame = &fr;
    struct list$1sType$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1sType$ph* litem;
    struct sType*  __dec_obj3  ;
    struct list_item$1sType$ph* litem_20;
    struct sType*  __dec_obj4  ;
    struct list_item$1sType$ph* litem_21;
    struct sType*  __dec_obj5  ;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1529, 170);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/neo-c.h", 1532, 171, "struct list_item$1sType$ph*"))), "/usr/local/include/neo-c.h", 1532, 172);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj3=litem->item,
        litem->item=(struct sType* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1536, 174);
        come_call_finalizer(sType_finalize, __dec_obj3,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1536, 173);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_20=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/neo-c.h", 1542, 175, "struct list_item$1sType$ph*"))), "/usr/local/include/neo-c.h", 1542, 176);
        litem_20->prev=self->head;
        litem_20->next=((void*)0);
        __dec_obj4=litem_20->item,
        litem_20->item=(struct sType* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1546, 178);
        come_call_finalizer(sType_finalize, __dec_obj4,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1546, 177);
        self->tail=litem_20;
        self->head->next=litem_20;
    }
    else {
        __right_value0 = (void*)0;
        litem_21=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/neo-c.h", 1552, 179, "struct list_item$1sType$ph*"))), "/usr/local/include/neo-c.h", 1552, 180);
        litem_21->prev=self->tail;
        litem_21->next=((void*)0);
        __dec_obj5=litem_21->item,
        litem_21->item=(struct sType* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1556, 182);
        come_call_finalizer(sType_finalize, __dec_obj5,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1556, 181);
        self->tail->next=litem_21;
        self->tail=litem_21;
    }
    self->len++;
        __result_obj__0 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1564, 183);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void list$1sType$ph_finalize(struct list$1sType$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_finalize"; neo_current_frame = &fr;
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
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1504, 189);
    }
            neo_current_frame = fr.prev;
}

static struct sNode* sNode_clone(struct sNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sNode_clone"; neo_current_frame = &fr;
    struct sNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sNode* result;
    if(self==(void*)0) {
                __result_obj__0 = (struct sNode*)come_increment_ref_count((void*)0, "sNode_clone", 4, 194);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "sNode_clone", 4, 195):(void*)0);
        return __result_obj__0;
    }
    result=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 5, 196, "struct sNode*"), "sNode_clone", 5, 197);
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
        result->left_value=self->left_value;
    }
        __result_obj__0 = (struct sNode*)come_increment_ref_count(result, "sNode_clone", 16, 198);
    ((result) ? result = come_decrement_ref_count(result, ((struct sNode*)result)->finalize, ((struct sNode*)result)->_protocol_obj, 0, 1,(void*)0, "sNode_clone", 16, 199):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "sNode_clone", 16, 200):(void*)0);
    return __result_obj__0;
}

static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph$p_clone"; neo_current_frame = &fr;
    struct list$1sNode$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1sNode$ph* result;
    struct list_item$1sNode$ph* it;
    if(self==((void*)0)) {
                __result_obj__0 = (struct list$1sNode$ph*)come_increment_ref_count(((void*)0), "/usr/local/include/neo-c.h", 1509, 229);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1509, 230);
        return __result_obj__0;
    }
    result=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "/usr/local/include/neo-c.h", 1511, 231, "struct list$1sNode$ph*"), "/usr/local/include/neo-c.h", 1511, 235)), "/usr/local/include/neo-c.h", 1511, 236);
    it=self->head;
    while(it!=((void*)0)) {
        if(1) {
            __right_value0 = (void*)0;
            list$1sNode$ph_add(result,(struct sNode*)come_increment_ref_count(sNode_clone(it->item), "/usr/local/include/neo-c.h", 1516, 251));
        }
        else {
            __right_value0 = (void*)0;
            list$1sNode$ph_add(result,(struct sNode*)come_increment_ref_count(sNode_clone(it->item), "/usr/local/include/neo-c.h", 1519, 252));
        }
        it=it->next;
    }
        __result_obj__0 = (struct list$1sNode$ph*)come_increment_ref_count(result, "/usr/local/include/neo-c.h", 1525, 253);
    come_call_finalizer(list$1sNode$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1525, 254);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1525, 255);
    return __result_obj__0;
}

static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_initialize"; neo_current_frame = &fr;
    struct list$1sNode$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = (struct list$1sNode$ph*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 1483, 232);
    come_call_finalizer(list$1sNode$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1483, 233);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1483, 234);
    return __result_obj__0;
}

static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_add"; neo_current_frame = &fr;
    struct list$1sNode$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1sNode$ph* litem;
    struct sNode* __dec_obj18;
    struct list_item$1sNode$ph* litem_22;
    struct sNode* __dec_obj19;
    struct list_item$1sNode$ph* litem_23;
    struct sNode* __dec_obj20;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0, "/usr/local/include/neo-c.h", 1529, 237):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/neo-c.h", 1532, 238, "struct list_item$1sNode$ph*"))), "/usr/local/include/neo-c.h", 1532, 239);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj18=litem->item,
        litem->item=(struct sNode*)come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1536, 241);
        (__dec_obj18 ? __dec_obj18 = come_decrement_ref_count(__dec_obj18, ((struct sNode*)__dec_obj18)->finalize, ((struct sNode*)__dec_obj18)->_protocol_obj, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1536, 240) :0);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_22=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/neo-c.h", 1542, 242, "struct list_item$1sNode$ph*"))), "/usr/local/include/neo-c.h", 1542, 243);
        litem_22->prev=self->head;
        litem_22->next=((void*)0);
        __dec_obj19=litem_22->item,
        litem_22->item=(struct sNode*)come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1546, 245);
        (__dec_obj19 ? __dec_obj19 = come_decrement_ref_count(__dec_obj19, ((struct sNode*)__dec_obj19)->finalize, ((struct sNode*)__dec_obj19)->_protocol_obj, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1546, 244) :0);
        self->tail=litem_22;
        self->head->next=litem_22;
    }
    else {
        __right_value0 = (void*)0;
        litem_23=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/neo-c.h", 1552, 246, "struct list_item$1sNode$ph*"))), "/usr/local/include/neo-c.h", 1552, 247);
        litem_23->prev=self->tail;
        litem_23->next=((void*)0);
        __dec_obj20=litem_23->item,
        litem_23->item=(struct sNode*)come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1556, 249);
        (__dec_obj20 ? __dec_obj20 = come_decrement_ref_count(__dec_obj20, ((struct sNode*)__dec_obj20)->finalize, ((struct sNode*)__dec_obj20)->_protocol_obj, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1556, 248) :0);
        self->tail->next=litem_23;
        self->tail=litem_23;
    }
    self->len++;
        __result_obj__0 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0, "/usr/local/include/neo-c.h", 1564, 250):(void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void list$1sNode$ph_finalize(struct list$1sNode$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_finalize"; neo_current_frame = &fr;
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
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1504, 256);
    }
            neo_current_frame = fr.prev;
}

static struct list$1int$* list$1int$$p_clone(struct list$1int$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$$p_clone"; neo_current_frame = &fr;
    struct list$1int$* __result_obj__0;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1int$* result;
    struct list_item$1int$* it;
    if(self==((void*)0)) {
                __result_obj__0 = (struct list$1int$*)come_increment_ref_count(((void*)0), "/usr/local/include/neo-c.h", 1509, 261);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1509, 262);
        return __result_obj__0;
    }
    result=(struct list$1int$*)come_increment_ref_count(list$1int$_initialize((struct list$1int$*)come_increment_ref_count((struct list$1int$*)come_calloc(1, sizeof(struct list$1int$)*(1), "/usr/local/include/neo-c.h", 1511, 263, "struct list$1int$*"), "/usr/local/include/neo-c.h", 1511, 267)), "/usr/local/include/neo-c.h", 1511, 268);
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
        __result_obj__0 = (struct list$1int$*)come_increment_ref_count(result, "/usr/local/include/neo-c.h", 1525, 275);
    come_call_finalizer(list$1int$$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1525, 276);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1525, 277);
    return __result_obj__0;
}

static struct list$1int$* list$1int$_initialize(struct list$1int$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$_initialize"; neo_current_frame = &fr;
    struct list$1int$* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = (struct list$1int$*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 1483, 264);
    come_call_finalizer(list$1int$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1483, 265);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1483, 266);
    return __result_obj__0;
}

static struct list$1int$* list$1int$_add(struct list$1int$* self, int item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$_add"; neo_current_frame = &fr;
    struct list$1int$* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1int$* litem;
    struct list_item$1int$* litem_24;
    struct list_item$1int$* litem_25;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/neo-c.h", 1532, 269, "struct list_item$1int$*"))), "/usr/local/include/neo-c.h", 1532, 270);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        litem->item=item;
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_24=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/neo-c.h", 1542, 271, "struct list_item$1int$*"))), "/usr/local/include/neo-c.h", 1542, 272);
        litem_24->prev=self->head;
        litem_24->next=((void*)0);
        litem_24->item=item;
        self->tail=litem_24;
        self->head->next=litem_24;
    }
    else {
        __right_value0 = (void*)0;
        litem_25=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/neo-c.h", 1552, 273, "struct list_item$1int$*"))), "/usr/local/include/neo-c.h", 1552, 274);
        litem_25->prev=self->tail;
        litem_25->next=((void*)0);
        litem_25->item=item;
        self->tail->next=litem_25;
        self->tail=litem_25;
    }
    self->len++;
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void list$1int$_finalize(struct list$1int$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$_finalize"; neo_current_frame = &fr;
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
        come_call_finalizer(list_item$1int$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1504, 278);
    }
            neo_current_frame = fr.prev;
}

static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph$p_clone"; neo_current_frame = &fr;
    struct list$1char$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1char$ph* result;
    struct list_item$1char$ph* it;
    if(self==((void*)0)) {
                __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(((void*)0), "/usr/local/include/neo-c.h", 1509, 290);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1509, 291);
        return __result_obj__0;
    }
    result=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/neo-c.h", 1511, 292, "struct list$1char$ph*"), "/usr/local/include/neo-c.h", 1511, 296)), "/usr/local/include/neo-c.h", 1511, 297);
    it=self->head;
    while(it!=((void*)0)) {
        if(1) {
            __right_value0 = (void*)0;
            list$1char$ph_add(result,(char* )come_increment_ref_count((char* )come_memdup(it->item, "/usr/local/include/neo-c.h", 1516, 312, "char* "), "/usr/local/include/neo-c.h", 1516, 313));
        }
        else {
            __right_value0 = (void*)0;
            list$1char$ph_add(result,(char* )come_increment_ref_count((char* )come_memdup(it->item, "/usr/local/include/neo-c.h", 1519, 314, "char* "), "/usr/local/include/neo-c.h", 1519, 315));
        }
        it=it->next;
    }
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(result, "/usr/local/include/neo-c.h", 1525, 316);
    come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1525, 317);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1525, 318);
    return __result_obj__0;
}

static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_initialize"; neo_current_frame = &fr;
    struct list$1char$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 1483, 293);
    come_call_finalizer(list$1char$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1483, 294);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1483, 295);
    return __result_obj__0;
}

static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_add"; neo_current_frame = &fr;
    struct list$1char$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1char$ph* litem;
    char*  __dec_obj28  ;
    struct list_item$1char$ph* litem_26;
    char*  __dec_obj29  ;
    struct list_item$1char$ph* litem_27;
    char*  __dec_obj30  ;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1529, 298));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 1532, 299, "struct list_item$1char$ph*"))), "/usr/local/include/neo-c.h", 1532, 300);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj28=litem->item,
        litem->item=(char* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1536, 302);
        __dec_obj28 = come_decrement_ref_count(__dec_obj28, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1536, 301);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_26=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 1542, 303, "struct list_item$1char$ph*"))), "/usr/local/include/neo-c.h", 1542, 304);
        litem_26->prev=self->head;
        litem_26->next=((void*)0);
        __dec_obj29=litem_26->item,
        litem_26->item=(char* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1546, 306);
        __dec_obj29 = come_decrement_ref_count(__dec_obj29, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1546, 305);
        self->tail=litem_26;
        self->head->next=litem_26;
    }
    else {
        __right_value0 = (void*)0;
        litem_27=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 1552, 307, "struct list_item$1char$ph*"))), "/usr/local/include/neo-c.h", 1552, 308);
        litem_27->prev=self->tail;
        litem_27->next=((void*)0);
        __dec_obj30=litem_27->item,
        litem_27->item=(char* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1556, 310);
        __dec_obj30 = come_decrement_ref_count(__dec_obj30, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1556, 309);
        self->tail->next=litem_27;
        self->tail=litem_27;
    }
    self->len++;
        __result_obj__0 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1564, 311));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void list$1char$ph_finalize(struct list$1char$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_finalize"; neo_current_frame = &fr;
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
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1504, 319);
    }
            neo_current_frame = fr.prev;
}

static void list$1sType$ph_operator_store_element(struct list$1sType$ph* self, int position, struct sType*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_operator_store_element"; neo_current_frame = &fr;
    list$1sType$ph_replace(self,position,(struct sType* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 2140, 358));
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "03output_code.nc}", 486, 359);
            neo_current_frame = fr.prev;
}

static struct list$1sType$ph* list$1sType$ph_replace(struct list$1sType$ph* self, int position, struct sType*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_replace"; neo_current_frame = &fr;
    struct list$1sType$ph* __result_obj__0;
    int len;
    int i;
    struct sType*  default_value  ;
    struct list_item$1sType$ph* it;
    int i_30;
    struct sType*  __dec_obj40  ;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 2020, 336);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(position<0) {
        position+=self->len;
    }
    if(position<0) {
        position=0;
    }
    if(self->len==0||position>=self->len) {
        len=self->len;
        for(i=0        ;i<position-len;i++){
            memset(&default_value,0,sizeof(struct sType* ));
            list$1sType$ph_push_back(self,(struct sType* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 2035, 351));
            come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 2037, 352);
        }
        list$1sType$ph_push_back(self,(struct sType* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 2037, 353));
                __result_obj__0 = self;
        come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 2038, 354);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    it=self->head;
    i_30=0;
    while(it!=((void*)0)) {
        if(position==i_30) {
            __dec_obj40=it->item,
            it->item=(struct sType* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 2045, 356);
            come_call_finalizer(sType_finalize, __dec_obj40,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 2045, 355);
            break;
        }
        it=it->next;
        i_30++;
    }
        __result_obj__0 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 2052, 357);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct list$1sType$ph* list$1sType$ph_push_back(struct list$1sType$ph* self, struct sType*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_push_back"; neo_current_frame = &fr;
    struct list$1sType$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1sType$ph* litem;
    struct sType*  __dec_obj37  ;
    struct list_item$1sType$ph* litem_28;
    struct sType*  __dec_obj38  ;
    struct list_item$1sType$ph* litem_29;
    struct sType*  __dec_obj39  ;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1613, 337);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/neo-c.h", 1617, 338, "struct list_item$1sType$ph*"))), "/usr/local/include/neo-c.h", 1617, 339);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj37=litem->item,
        litem->item=(struct sType* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1621, 341);
        come_call_finalizer(sType_finalize, __dec_obj37,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1621, 340);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_28=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/neo-c.h", 1627, 342, "struct list_item$1sType$ph*"))), "/usr/local/include/neo-c.h", 1627, 343);
        litem_28->prev=self->head;
        litem_28->next=((void*)0);
        __dec_obj38=litem_28->item,
        litem_28->item=(struct sType* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1631, 345);
        come_call_finalizer(sType_finalize, __dec_obj38,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1631, 344);
        self->tail=litem_28;
        self->head->next=litem_28;
    }
    else {
        __right_value0 = (void*)0;
        litem_29=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/neo-c.h", 1637, 346, "struct list_item$1sType$ph*"))), "/usr/local/include/neo-c.h", 1637, 347);
        litem_29->prev=self->tail;
        litem_29->next=((void*)0);
        __dec_obj39=litem_29->item,
        litem_29->item=(struct sType* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1641, 349);
        come_call_finalizer(sType_finalize, __dec_obj39,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1641, 348);
        self->tail->next=litem_29;
        self->tail=litem_29;
    }
    self->len++;
        __result_obj__0 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1649, 350);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sType*  get_no_solved_type2(struct sType*  type  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "get_no_solved_type2"; neo_current_frame = &fr;
    struct sType*  result  ;
    void* __right_value0 = (void*)0;
    struct sType*  __dec_obj41  ;
    struct sType*  __dec_obj42  ;
    struct sType*  __result_obj__0  ;
    memset(&result, 0, sizeof(result));
    if(type->mNoSolvedGenericsType) {
        __dec_obj41=result,
        result=(struct sType* )come_increment_ref_count(sType_clone(type->mNoSolvedGenericsType), "03output_code.nc", 497, 366);
        come_call_finalizer(sType_finalize, __dec_obj41,(void*)0, (void*)0, 0, 0, 0, (void*)0, "03output_code.nc", 497, 365);
    }
    else {
        __right_value0 = (void*)0;
        __dec_obj42=result,
        result=(struct sType* )come_increment_ref_count(sType_clone(type), "03output_code.nc", 500, 368);
        come_call_finalizer(sType_finalize, __dec_obj42,(void*)0, (void*)0, 0, 0, 0, (void*)0, "03output_code.nc", 500, 367);
    }
        __result_obj__0 = (struct sType* )come_increment_ref_count(result, "03output_code.nc", 503, 369);
    come_call_finalizer(sType_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "03output_code.nc}", 503, 370);
    neo_current_frame = fr.prev;
    come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "03output_code.nc}", 503, 371);
    return __result_obj__0;
}

char*  make_come_type_name_string(struct sType*  type  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "make_come_type_name_string"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer*  buf  ;
    struct sType*  type2  ;
    char* class_name;
    struct buffer*  buf_31  ;
    int i;
    char*  __result_obj__0  ;
    char*  result_type_str  ;
    int i_32;
    int i_33;
    int i_34;
    int i_35;
    struct sNode* node;
    _Bool Value;
    struct CVALUE*  cvalue  ;
    int j;
    struct list$1sType$ph* _o2_saved_4;
    struct sType*  it  ;
    char*  param_type_str  ;
    int i_36;
    struct sType*  gtype  ;
    int i_39;
    int i_40;
    buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "03output_code.nc", 508, 372, "struct buffer* "), "03output_code.nc", 508, 373)), "03output_code.nc", 508, 374);
    __right_value0 = (void*)0;
    type2=(struct sType* )come_increment_ref_count(get_no_solved_type(type), "03output_code.nc", 510, 375);
    class_name=type2->mClass->mName;
    if(type->mOriginalTypeName&&string_operator_not_equals(type->mOriginalTypeName,"")) {
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        buf_31=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "03output_code.nc", 515, 376, "struct buffer* "), "03output_code.nc", 515, 377)), "03output_code.nc", 515, 378);
        buffer_append_str(buf_31,type->mOriginalTypeName);
        if(type->mTypedefOriginalType) {
            for(i=0            ;i<type->mOriginalTypePointerNum;i++){
                buffer_append_str(buf_31,"*");
            }
            if(type->mOriginalTypePointerHeap) {
                buffer_append_str(buf_31,"%");
            }
        }
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=buffer_to_string(buf_31))), "03output_code.nc", 527, 379);
        come_call_finalizer(buffer_finalize, buf_31, (void*)0, (void*)0, 0, 0, 0, (void*)0, "03output_code.nc}", 527, 380);
        come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "03output_code.nc}", 527, 381);
        come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "03output_code.nc}", 527, 382);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "03output_code.nc", 527, 383));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "03output_code.nc", 527, 384));
        return __result_obj__0;
        come_call_finalizer(buffer_finalize, buf_31, (void*)0, (void*)0, 0, 0, 0, (void*)0, "03output_code.nc}", 701, 385);
    }
    else if(charp_operator_equals(class_name,"lambda")) {
        __right_value0 = (void*)0;
        result_type_str=(char* )come_increment_ref_count(make_come_type_name_string(type->mResultType,info), "03output_code.nc", 530, 386);
        buffer_append_str(buf,result_type_str);
        buffer_append_str(buf," ");
        if(type->mMiddleAttribute!=((void*)0)&&string_operator_not_equals(type->mMiddleAttribute,"")) {
            buffer_append_str(buf,type->mMiddleAttribute);
            buffer_append_str(buf," ");
        }
        if(type->mArrayPointerNum>0) {
            for(i_32=0            ;i_32<type->mArrayPointerNum+1;i_32++){
                buffer_append_str(buf,"(");
                buffer_append_str(buf,"*");
            }
            if(type->mPointerAttribute!=((void*)0)&&string_operator_not_equals(type->mPointerAttribute,"")) {
                buffer_append_str(buf," ");
                buffer_append_str(buf,type->mPointerAttribute);
            }
            if(type->mArrayPointerType) {
                buffer_append_str(buf,"[]");
            }
            for(i_33=0            ;i_33<type->mArrayPointerNum;i_33++){
                buffer_append_str(buf,")");
            }
        }
        else if(type->mFunctionPointerNum>1) {
            buffer_append_str(buf,"(");
            for(i_34=0            ;i_34<type->mFunctionPointerNum;i_34++){
                buffer_append_str(buf,"*");
            }
            if(type->mPointerAttribute!=((void*)0)&&string_operator_not_equals(type->mPointerAttribute,"")) {
                buffer_append_str(buf," ");
                buffer_append_str(buf,type->mPointerAttribute);
            }
            if(type->mArrayPointerType) {
                buffer_append_str(buf,"[]");
            }
        }
        else {
            buffer_append_str(buf,"(*");
            if(type->mPointerAttribute!=((void*)0)&&string_operator_not_equals(type->mPointerAttribute,"")) {
                buffer_append_str(buf," ");
                buffer_append_str(buf,type->mPointerAttribute);
            }
            if(type->mArrayPointerType) {
                buffer_append_str(buf,"[]");
            }
        }
        if(list$1sNode$ph_length(type->mArrayNum)>0) {
            for(i_35=0            ;i_35<list$1sNode$ph_length(type->mArrayNum);i_35++){
                __right_value0 = (void*)0;
                node=(struct sNode*)come_increment_ref_count(list$1sNode$ph_operator_load_element(type->mArrayNum,i_35), "03output_code.nc", 581, 387);
                Value=node_compile(node,info);
                if(Value) {
                    buffer_append_str(buf,"[");
                    __right_value0 = (void*)0;
                    cvalue=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "03output_code.nc", 586, 388);
                    buffer_append_format(buf,"%s",cvalue->c_value);
                    buffer_append_str(buf,"]");
                    come_call_finalizer(CVALUE_finalize, cvalue, (void*)0, (void*)0, 0, 0, 0, (void*)0, "03output_code.nc}", 591, 389);
                }
                ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "03output_code.nc", 592, 390):(void*)0);
            }
        }
        if(type->mArrayPointerType) {
            buffer_append_str(buf,"[]");
        }
        buffer_append_str(buf,")(");
        j=0;
        for(_o2_saved_4=(struct list$1sType$ph*)come_increment_ref_count(type->mParamTypes, "03output_code.nc", 599, 391),it=list$1sType$ph_begin(_o2_saved_4)        ;!list$1sType$ph_end(_o2_saved_4);it=list$1sType$ph_next(_o2_saved_4)){
            __right_value0 = (void*)0;
            param_type_str=(char* )come_increment_ref_count(make_come_type_name_string(it,info), "03output_code.nc", 600, 392);
            buffer_append_str(buf,param_type_str);
            if(j!=list$1sType$ph_length(type->mParamTypes)-1) {
                buffer_append_str(buf,",");
            }
            j++;
            (param_type_str = come_decrement_ref_count(param_type_str, (void*)0, (void*)0, 0, 0, (void*)0, "03output_code.nc", 609, 393));
        }
        buffer_append_str(buf,")");
        (result_type_str = come_decrement_ref_count(result_type_str, (void*)0, (void*)0, 0, 0, (void*)0, "03output_code.nc", 701, 394));
        come_call_finalizer(list$1sType$ph$p_finalize, _o2_saved_4, (void*)0, (void*)0, 0, 0, 0, (void*)0, "03output_code.nc}", 701, 395);
    }
    else {
        if(type->mStatic) {
            buffer_append_str(buf,"static ");
        }
        if(type->mAtomic) {
            buffer_append_str(buf,"_Atomic(");
        }
        if(type->mThreadLocal) {
            buffer_append_str(buf,"_Thread_local ");
        }
        if(type->mNoreturn) {
            buffer_append_str(buf,"_Noreturn ");
        }
        if(type->mConstant) {
            buffer_append_str(buf,"const ");
        }
        if(type->mVolatile) {
            buffer_append_str(buf,"volatile ");
        }
        if(type->mComplex) {
            buffer_append_str(buf,"_Complex ");
        }
        if(type->mRegister) {
            buffer_append_str(buf,"register ");
        }
        if(type->mUniq) {
            buffer_append_str(buf,"uniq ");
        }
        if(type->mUnsigned) {
            buffer_append_str(buf,"unsigned ");
        }
        if(type->mShort) {
            buffer_append_str(buf,"short ");
        }
        buffer_append_str(buf,class_name);
        if(list$1sType$ph_length(type2->mGenericsTypes)>0) {
            buffer_append_str(buf,"<");
            for(i_36=0            ;i_36<list$1sType$ph_length(type2->mGenericsTypes);i_36++){
                __right_value0 = (void*)0;
                gtype=((struct sType* )(__right_value0=list$1sType$ph_operator_load_element(type2->mGenericsTypes,i_36)));
                __right_value0 = (void*)0;
                buffer_append_str(buf,((char* )(__right_value0=make_come_type_name_string(gtype,info))));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "03output_code.nc", 656, 414));
                if(i_36!=list$1sType$ph_length(type2->mGenericsTypes)-1) {
                    buffer_append_str(buf,",");
                }
            }
            buffer_append_str(buf,">");
        }
        if(charp_operator_not_equals(class_name,"lambda")) {
            for(i_39=0            ;i_39<type2->mPointerNum;i_39++){
                buffer_append_str(buf,"*");
            }
        }
        if(charp_operator_not_equals(class_name,"lambda")&&type->mPointerAttribute!=((void*)0)&&string_operator_not_equals(type->mPointerAttribute,"")) {
            buffer_append_str(buf," ");
            buffer_append_str(buf,type->mPointerAttribute);
        }
        if(type->mRestrict) {
            buffer_append_str(buf," restrict");
        }
        if(type->mAtomic) {
            buffer_append_str(buf,")");
        }
        if(list$1sNode$ph_length(type2->mArrayNum)>0) {
            for(i_40=0            ;i_40<list$1sNode$ph_length(type2->mArrayNum);i_40++){
                buffer_append_str(buf,"[]");
            }
        }
        if(type2->mHeap) {
            buffer_append_str(buf,"%");
        }
        if(type2->mNoHeap) {
            buffer_append_str(buf,"&");
        }
        if(type2->mAttribute) {
            __right_value0 = (void*)0;
            buffer_append_str(buf,((char* )(__right_value0=charp_operator_add(" ",type2->mAttribute))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "03output_code.nc", 697, 415));
        }
    }
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=buffer_to_string(buf))), "03output_code.nc", 701, 416);
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "03output_code.nc}", 701, 417);
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "03output_code.nc}", 701, 418);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "03output_code.nc", 701, 419));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "03output_code.nc", 701, 420));
    return __result_obj__0;
}

static struct sType*  list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph$p_operator_load_element"; neo_current_frame = &fr;
    struct sType*  default_value  ;
    struct sType*  __result_obj__0  ;
    struct list_item$1sType$ph* it;
    int i;
    struct sType*  default_value_37  ;
    if(self==((void*)0)) {
        memset(&default_value,0,sizeof(struct sType* ));
                __result_obj__0 = (struct sType* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 2148, 396);
        come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2148, 397);
        neo_current_frame = fr.prev;
        come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2148, 398);
        return __result_obj__0;
        come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 2151, 399);
    }
    if(position<0) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(it!=((void*)0)) {
        if(position==i) {
                        __result_obj__0 = (struct sType* )come_increment_ref_count(it->item, "/usr/local/include/neo-c.h", 2159, 400);
            neo_current_frame = fr.prev;
            come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2159, 401);
            return __result_obj__0;
        }
        it=it->next;
        i++;
    }
    memset(&default_value_37,0,sizeof(struct sType* ));
        __result_obj__0 = (struct sType* )come_increment_ref_count(default_value_37, "/usr/local/include/neo-c.h", 2167, 402);
    come_call_finalizer(sType_finalize, default_value_37, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2167, 403);
    neo_current_frame = fr.prev;
    come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2167, 404);
    return __result_obj__0;
}

static struct sType*  list$1sType$ph_operator_load_element(struct list$1sType$ph* self, int position)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_operator_load_element"; neo_current_frame = &fr;
    struct sType*  default_value  ;
    struct sType*  __result_obj__0  ;
    struct list_item$1sType$ph* it;
    int i;
    struct sType*  default_value_38  ;
    if(self==((void*)0)) {
        memset(&default_value,0,sizeof(struct sType* ));
                __result_obj__0 = (struct sType* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 2148, 405);
        come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2148, 406);
        neo_current_frame = fr.prev;
        come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2148, 407);
        return __result_obj__0;
        come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 2151, 408);
    }
    if(position<0) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(it!=((void*)0)) {
        if(position==i) {
                        __result_obj__0 = (struct sType* )come_increment_ref_count(it->item, "/usr/local/include/neo-c.h", 2159, 409);
            neo_current_frame = fr.prev;
            come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2159, 410);
            return __result_obj__0;
        }
        it=it->next;
        i++;
    }
    memset(&default_value_38,0,sizeof(struct sType* ));
        __result_obj__0 = (struct sType* )come_increment_ref_count(default_value_38, "/usr/local/include/neo-c.h", 2167, 411);
    come_call_finalizer(sType_finalize, default_value_38, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2167, 412);
    neo_current_frame = fr.prev;
    come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2167, 413);
    return __result_obj__0;
}

static char*  make_lambda_type_name_string(struct sType*  type  , char* var_name, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "make_lambda_type_name_string"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer*  buf  ;
    char*  __result_obj__0  ;
    int i;
    struct sNode* node;
    _Bool Value;
    struct CVALUE*  cvalue  ;
    int i_41;
    struct list$1sType$ph* _o2_saved_5;
    struct sType*  it  ;
    char*  pointer_attr  ;
    void* __right_value2 = (void*)0;
    void* __right_value3 = (void*)0;
    void* __right_value4 = (void*)0;
    void* __right_value5 = (void*)0;
    void* __right_value6 = (void*)0;
    char*  __dec_obj43  ;
    int i_42;
    int i_43;
    int i_44;
    int i_45;
    struct sNode* node_46;
    _Bool Value_47;
    struct CVALUE*  cvalue_48  ;
    int i_49;
    struct list$1sType$ph* _o2_saved_6;
    struct sType*  it_50  ;
    buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "03output_code.nc", 706, 421, "struct buffer* "), "03output_code.nc", 706, 422)), "03output_code.nc", 706, 423);
    if(type->mResultType==((void*)0)) {
        err_msg(info,"invalid lambda type");
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(""))), "03output_code.nc", 709, 424);
        come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "03output_code.nc}", 709, 425);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "03output_code.nc", 709, 426));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "03output_code.nc", 709, 427));
        return __result_obj__0;
    }
    if(type->mResultType&&string_operator_equals(type->mResultType->mClass->mName,"lambda")) {
        buffer_append_format(buf,"(*%s",var_name);
        if(list$1sNode$ph_length(type->mResultType->mArrayNum)>0) {
            for(i=0            ;i<list$1sNode$ph_length(type->mResultType->mArrayNum);i++){
                buffer_append_str(buf,"[");
                __right_value0 = (void*)0;
                node=(struct sNode*)come_increment_ref_count(list$1sNode$ph_operator_load_element(type->mArrayNum,i), "03output_code.nc", 719, 428);
                Value=node_compile(node,info);
                if(!Value) {
                    err_msg(info,"invalid array num");
                    exit(2);
                }
                __right_value0 = (void*)0;
                cvalue=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "03output_code.nc", 726, 429);
                buffer_append_format(buf,"%s",cvalue->c_value);
                buffer_append_str(buf,"]");
                ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "03output_code.nc", 731, 430):(void*)0);
                come_call_finalizer(CVALUE_finalize, cvalue, (void*)0, (void*)0, 0, 0, 0, (void*)0, "03output_code.nc}", 731, 431);
            }
        }
        buffer_append_format(buf,")(",var_name);
        i_41=0;
        for(_o2_saved_5=(struct list$1sType$ph*)come_increment_ref_count(type->mParamTypes, "03output_code.nc", 735, 432),it=list$1sType$ph_begin(_o2_saved_5)        ;!list$1sType$ph_end(_o2_saved_5);it=list$1sType$ph_next(_o2_saved_5)){
            __right_value0 = (void*)0;
            buffer_append_str(buf,((char* )(__right_value0=make_come_type_name_string(it,info))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "03output_code.nc", 736, 433));
            if(i_41!=list$1sType$ph_length(type->mParamTypes)-1) {
                buffer_append_str(buf,",");
            }
            i_41++;
        }
        buffer_append_str(buf,")");
        if(type->mAttribute) {
            __right_value0 = (void*)0;
            buffer_append_str(buf,((char* )(__right_value0=charp_operator_add(" ",type->mAttribute))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "03output_code.nc", 747, 434));
        }
                __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value1=make_lambda_type_name_string(type->mResultType,((char* )(__right_value0=buffer_to_string(buf))),info))), "03output_code.nc", 750, 435);
        come_call_finalizer(list$1sType$ph$p_finalize, _o2_saved_5, (void*)0, (void*)0, 0, 0, 0, (void*)0, "03output_code.nc}", 750, 436);
        come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "03output_code.nc}", 750, 437);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "03output_code.nc", 750, 438));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "03output_code.nc", 750, 439));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "03output_code.nc", 750, 440));
        return __result_obj__0;
        come_call_finalizer(list$1sType$ph$p_finalize, _o2_saved_5, (void*)0, (void*)0, 0, 0, 0, (void*)0, "03output_code.nc}", 832, 441);
    }
    else {
        __right_value0 = (void*)0;
        buffer_append_format(buf,"%s ",((char* )(__right_value0=make_type_name_string(type->mResultType,info,(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "03output_code.nc", 753, 442));
        if(type->mMiddleAttribute!=((void*)0)&&string_operator_not_equals(type->mMiddleAttribute,"")) {
            buffer_append_str(buf,type->mMiddleAttribute);
            buffer_append_str(buf," ");
        }
        __right_value0 = (void*)0;
        pointer_attr=(char*)come_increment_ref_count(xsprintf(""), "03output_code.nc", 758, 443);
        if(type->mPointerAttribute!=((void*)0)&&string_operator_not_equals(type->mPointerAttribute,"")) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __dec_obj43=pointer_attr,
            pointer_attr=(char* )come_increment_ref_count(string_operator_add(((char* )(__right_value5=charp_operator_add(((char*)(__right_value4=xsprintf(" "))),type->mPointerAttribute)))," "), "03output_code.nc", 760, 445);
            __dec_obj43 = come_decrement_ref_count(__dec_obj43, (void*)0, (void*)0, 0,0, (void*)0, "03output_code.nc", 760, 444);
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "03output_code.nc", 760, 446));
            (__right_value4 = come_decrement_ref_count(__right_value4, (void*)0, (void*)0, 1, 0, (void*)0, "03output_code.nc", 760, 447));
            (__right_value5 = come_decrement_ref_count(__right_value5, (void*)0, (void*)0, 1, 0, (void*)0, "03output_code.nc", 760, 448));
        }
        if(type->mArrayPointerNum>0) {
            for(i_42=0            ;i_42<type->mArrayPointerNum+1;i_42++){
                buffer_append_str(buf,"(");
                buffer_append_str(buf,"*");
            }
            buffer_append_str(buf,pointer_attr);
            buffer_append_str(buf,var_name);
            if(type->mArrayPointerType) {
                buffer_append_str(buf,"[]");
            }
            for(i_43=0            ;i_43<type->mArrayPointerNum;i_43++){
                buffer_append_str(buf,")");
            }
        }
        else if(type->mFunctionPointerNum>1) {
            buffer_append_str(buf,"(");
            for(i_44=0            ;i_44<type->mFunctionPointerNum;i_44++){
                buffer_append_str(buf,"*");
            }
            buffer_append_str(buf,pointer_attr);
            buffer_append_str(buf,var_name);
            if(type->mArrayPointerType) {
                buffer_append_str(buf,"[]");
            }
        }
        else {
            buffer_append_str(buf,"(*");
            buffer_append_str(buf,pointer_attr);
            buffer_append_format(buf,"%s",var_name);
            if(type->mArrayPointerType) {
                buffer_append_str(buf,"[]");
            }
        }
        if(list$1sNode$ph_length(type->mArrayNum)>0) {
            for(i_45=0            ;i_45<list$1sNode$ph_length(type->mArrayNum);i_45++){
                buffer_append_str(buf,"[");
                __right_value0 = (void*)0;
                node_46=(struct sNode*)come_increment_ref_count(list$1sNode$ph_operator_load_element(type->mArrayNum,i_45), "03output_code.nc", 798, 449);
                Value_47=node_compile(node_46,info);
                if(!Value_47) {
                    err_msg(info,"invalid array num");
                    exit(2);
                }
                __right_value0 = (void*)0;
                cvalue_48=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "03output_code.nc", 805, 450);
                buffer_append_format(buf,"%s",cvalue_48->c_value);
                buffer_append_str(buf,"]");
                ((node_46) ? node_46 = come_decrement_ref_count(node_46, ((struct sNode*)node_46)->finalize, ((struct sNode*)node_46)->_protocol_obj, 0, 0,(void*)0, "03output_code.nc", 810, 451):(void*)0);
                come_call_finalizer(CVALUE_finalize, cvalue_48, (void*)0, (void*)0, 0, 0, 0, (void*)0, "03output_code.nc}", 810, 452);
            }
        }
        buffer_append_format(buf,")(");
        i_49=0;
        for(_o2_saved_6=(struct list$1sType$ph*)come_increment_ref_count(type->mParamTypes, "03output_code.nc", 814, 453),it_50=list$1sType$ph_begin(_o2_saved_6)        ;!list$1sType$ph_end(_o2_saved_6);it_50=list$1sType$ph_next(_o2_saved_6)){
            __right_value0 = (void*)0;
            buffer_append_str(buf,((char* )(__right_value0=make_type_name_string(it_50,info,(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "03output_code.nc", 815, 454));
            if(i_49!=list$1sType$ph_length(type->mParamTypes)-1) {
                buffer_append_str(buf,",");
            }
            i_49++;
        }
        buffer_append_str(buf,")");
        if(type->mAttribute) {
            __right_value0 = (void*)0;
            buffer_append_str(buf,((char* )(__right_value0=charp_operator_add(" ",type->mAttribute))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "03output_code.nc", 826, 455));
        }
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=buffer_to_string(buf))), "03output_code.nc", 829, 456);
        (pointer_attr = come_decrement_ref_count(pointer_attr, (void*)0, (void*)0, 0, 0, (void*)0, "03output_code.nc", 829, 457));
        come_call_finalizer(list$1sType$ph$p_finalize, _o2_saved_6, (void*)0, (void*)0, 0, 0, 0, (void*)0, "03output_code.nc}", 829, 458);
        come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "03output_code.nc}", 829, 459);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "03output_code.nc", 829, 460));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "03output_code.nc", 829, 461));
        return __result_obj__0;
        (pointer_attr = come_decrement_ref_count(pointer_attr, (void*)0, (void*)0, 0, 0, (void*)0, "03output_code.nc", 832, 462));
        come_call_finalizer(list$1sType$ph$p_finalize, _o2_saved_6, (void*)0, (void*)0, 0, 0, 0, (void*)0, "03output_code.nc}", 832, 463);
    }
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=buffer_to_string(buf))), "03output_code.nc", 832, 464);
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "03output_code.nc}", 832, 465);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "03output_code.nc", 832, 466));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "03output_code.nc", 832, 467));
    return __result_obj__0;
}

char*  output_lambda_original_type(struct sType*  type2  , char* name, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "output_lambda_original_type"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer*  buf  ;
    struct __current_stack1__ __current_stack1__;
    int n;
    struct list$1sNode$ph* _o2_saved_7;
    struct sNode* it;
    char*  __result_obj__0  ;
    struct CVALUE*  cvalue  ;
    memset(&__current_stack1__, 0, sizeof(struct __current_stack1__));
    buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "03output_code.nc", 839, 468, "struct buffer* "), "03output_code.nc", 839, 469)), "03output_code.nc", 839, 470);
    if(type2->mArrayPointerType) {
        buffer_append_str(buf,type2->mOriginalTypeName);
        buffer_append_str(buf," ");
        buffer_append_str(buf,name);
        buffer_append_str(buf,"[]");
    }
    else if(list$1sNode$ph_length(type2->mArrayNum)>0) {
        buffer_append_str(buf,type2->mOriginalTypeName);
        buffer_append_str(buf," ");
        if(type2->mArrayPointerNum>0) {
            buffer_append_format(buf,"(");
            ({            __current_stack1__.type2 = &type2;
            __current_stack1__.name = &name;
            __current_stack1__.info = &info;
            __current_stack1__.buf = &buf;
            })            ,            int_times(type2->mArrayPointerNum,&__current_stack1__,(void*)method_block1_03outputcodenc);
        }
        buffer_append_str(buf,name);
        if(type2->mArrayPointerNum>0) {
            buffer_append_format(buf,")");
        }
        if(list$1sNode$ph_length(type2->mArrayNum)>0) {
            n=0;
            for(_o2_saved_7=(struct list$1sNode$ph*)come_increment_ref_count(type2->mArrayNum, "03output_code.nc", 868, 471),it=list$1sNode$ph_begin(_o2_saved_7)            ;!list$1sNode$ph_end(_o2_saved_7);it=list$1sNode$ph_next(_o2_saved_7)){
                if(!node_compile(it,info)) {
                    err_msg(info,"invalid array number");
                                        __right_value0 = (void*)0;
                    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(""))), "03output_code.nc", 871, 472);
                    come_call_finalizer(list$1sNode$ph$p_finalize, _o2_saved_7, (void*)0, (void*)0, 0, 0, 0, (void*)0, "03output_code.nc}", 871, 473);
                    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "03output_code.nc}", 871, 474);
                    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "03output_code.nc", 871, 475));
                    neo_current_frame = fr.prev;
                    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "03output_code.nc", 871, 476));
                    return __result_obj__0;
                }
                __right_value0 = (void*)0;
                cvalue=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "03output_code.nc", 873, 477);
                if(list$1int$_operator_load_element(type2->mArrayRestrict,n)&&list$1int$_operator_load_element(type2->mArrayStatic,n)) {
                    buffer_append_format(buf,"[restrict static %s]",cvalue->c_value);
                }
                else if(list$1int$_operator_load_element(type2->mArrayStatic,n)) {
                    buffer_append_format(buf,"[static %s]",cvalue->c_value);
                }
                else if(list$1int$_operator_load_element(type2->mArrayRestrict,n)) {
                    buffer_append_format(buf,"[restrict %s]",cvalue->c_value);
                }
                else {
                    buffer_append_format(buf,"[%s]",cvalue->c_value);
                }
                n++;
                come_call_finalizer(CVALUE_finalize, cvalue, (void*)0, (void*)0, 0, 0, 0, (void*)0, "03output_code.nc}", 890, 478);
            }
            come_call_finalizer(list$1sNode$ph$p_finalize, _o2_saved_7, (void*)0, (void*)0, 0, 0, 0, (void*)0, "03output_code.nc}", 892, 479);
        }
        if(type2->mArrayPointerType) {
            buffer_append_str(buf,"[]");
        }
        if(type2->mAsmName!=((void*)0)&&string_operator_not_equals(type2->mAsmName,"")) {
            buffer_append_format(buf," __asm__(\"%s\")",type2->mAsmName);
        }
        if(type2->mAttribute!=((void*)0)) {
            buffer_append_format(buf," %s",type2->mAttribute);
        }
    }
    else {
        buffer_append_str(buf,type2->mOriginalTypeName);
        buffer_append_str(buf," ");
        buffer_append_str(buf,name);
        if(type2->mArrayPointerType) {
            buffer_append_str(buf,"[]");
        }
    }
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=buffer_to_string(buf))), "03output_code.nc", 914, 480);
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "03output_code.nc}", 914, 481);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "03output_code.nc", 914, 482));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "03output_code.nc", 914, 483));
    return __result_obj__0;
}

void method_block1_03outputcodenc(struct __current_stack1__* parent, int it)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "method_block1_03outputcodenc"; neo_current_frame = &fr;
    buffer_append_format((*(parent->buf)),"*");
                neo_current_frame = fr.prev;
}

static int list$1int$$p_operator_load_element(struct list$1int$* self, int position)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$$p_operator_load_element"; neo_current_frame = &fr;
    int default_value;
    struct list_item$1int$* it;
    int i;
    int default_value_51;
    if(self==((void*)0)) {
        memset(&default_value,0,sizeof(int));
                neo_current_frame = fr.prev;
        return default_value;
    }
    if(position<0) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(it!=((void*)0)) {
        if(position==i) {
                        neo_current_frame = fr.prev;
            return it->item;
        }
        it=it->next;
        i++;
    }
    memset(&default_value_51,0,sizeof(int));
        neo_current_frame = fr.prev;
    return default_value_51;
                    neo_current_frame = fr.prev;
}

static int list$1int$_operator_load_element(struct list$1int$* self, int position)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$_operator_load_element"; neo_current_frame = &fr;
    int default_value;
    struct list_item$1int$* it;
    int i;
    int default_value_52;
    if(self==((void*)0)) {
        memset(&default_value,0,sizeof(int));
                neo_current_frame = fr.prev;
        return default_value;
    }
    if(position<0) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(it!=((void*)0)) {
        if(position==i) {
                        neo_current_frame = fr.prev;
            return it->item;
        }
        it=it->next;
        i++;
    }
    memset(&default_value_52,0,sizeof(int));
        neo_current_frame = fr.prev;
    return default_value_52;
                    neo_current_frame = fr.prev;
}

char*  make_define_var(struct sType*  type  , char* name, struct sInfo*  info  , _Bool no_static, _Bool in_typedef)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "make_define_var"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer*  buf  ;
    struct sType*  type2  ;
    char*  str  ;
    char*  str_53  ;
    char*  str_54  ;
    char*  str_55  ;
    char*  type_name  ;
    struct __current_stack2__ __current_stack2__;
    char*  __result_obj__0  ;
    struct CVALUE*  come_value  ;
    struct list$1sNode$ph* _o2_saved_8;
    struct sNode* it;
    struct CVALUE*  cvalue  ;
    int n;
    struct list$1sNode$ph* _o2_saved_9;
    struct sNode* it_56;
    struct CVALUE*  cvalue_57  ;
    memset(&__current_stack2__, 0, sizeof(struct __current_stack2__));
    buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "03output_code.nc", 919, 484, "struct buffer* "), "03output_code.nc", 919, 485)), "03output_code.nc", 919, 486);
    __right_value0 = (void*)0;
    type2=(struct sType* )come_increment_ref_count(sType_clone(type), "03output_code.nc", 921, 487);
    if(string_operator_equals(type2->mClass->mName,"lambda")&&type2->mAsmName!=((void*)0)&&string_operator_not_equals(type2->mAsmName,"")) {
        if(!in_typedef&&string_operator_not_equals(type2->mOriginalTypeName,"")&&(list$1sNode$ph_length(type2->mArrayNum)>0||type2->mArrayPointerType)) {
            __right_value0 = (void*)0;
            str=(char* )come_increment_ref_count(output_lambda_original_type(type2,name,info), "03output_code.nc", 925, 488);
            buffer_append_str(buf,str);
            (str = come_decrement_ref_count(str, (void*)0, (void*)0, 0, 0, (void*)0, "03output_code.nc", 934, 489));
        }
        else {
            __right_value0 = (void*)0;
            str_53=(char* )come_increment_ref_count(header_lambda(type2,(char* )come_increment_ref_count(type2->mAsmName, "03output_code.nc", 930, 490),info), "03output_code.nc", 930, 491);
            buffer_append_str(buf,str_53);
            (str_53 = come_decrement_ref_count(str_53, (void*)0, (void*)0, 0, 0, (void*)0, "03output_code.nc", 934, 492));
        }
    }
    else if(string_operator_equals(type2->mClass->mName,"lambda")) {
        if(!in_typedef&&string_operator_not_equals(type2->mOriginalTypeName,"")&&(list$1sNode$ph_length(type2->mArrayNum)>0||type2->mArrayPointerType)) {
            __right_value0 = (void*)0;
            str_54=(char* )come_increment_ref_count(output_lambda_original_type(type2,name,info), "03output_code.nc", 937, 493);
            buffer_append_str(buf,str_54);
            (str_54 = come_decrement_ref_count(str_54, (void*)0, (void*)0, 0, 0, (void*)0, "03output_code.nc", 946, 494));
        }
        else {
            __right_value0 = (void*)0;
            str_55=(char* )come_increment_ref_count(make_lambda_type_name_string(type2,name,info), "03output_code.nc", 942, 495);
            buffer_append_str(buf,str_55);
            (str_55 = come_decrement_ref_count(str_55, (void*)0, (void*)0, 0, 0, (void*)0, "03output_code.nc", 946, 496));
        }
    }
    else {
        __right_value0 = (void*)0;
        type_name=(char* )come_increment_ref_count(make_type_name_string(type2,info,no_static,(_Bool)0,(_Bool)0,(_Bool)0), "03output_code.nc", 948, 497);
        buffer_append_format(buf,"%s ",type_name);
        if(type2->mArrayPointerNum>0) {
            buffer_append_format(buf,"(");
        }
        if(type->mPointerParen) {
            buffer_append_format(buf,"(");
        }
        ({        __current_stack2__.type_name = &type_name;
        __current_stack2__.type = &type;
        __current_stack2__.name = &name;
        __current_stack2__.info = &info;
        __current_stack2__.no_static = &no_static;
        __current_stack2__.in_typedef = &in_typedef;
        __current_stack2__.buf = &buf;
        __current_stack2__.type2 = &type2;
        })        ,        int_times(type2->mArrayPointerNum,&__current_stack2__,(void*)method_block2_03outputcodenc);
        if(!type2->mAnonymousVarName) {
            buffer_append_format(buf,"%s",name);
        }
        if(type2->mSizeNum!=((void*)0)) {
            if(!node_compile(type2->mSizeNum,info)) {
                err_msg(info,"invalid bit field number");
                                __right_value0 = (void*)0;
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(""))), "03output_code.nc", 970, 498);
                (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0, "03output_code.nc", 970, 499));
                come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "03output_code.nc}", 970, 500);
                come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "03output_code.nc}", 970, 501);
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "03output_code.nc", 970, 502));
                neo_current_frame = fr.prev;
                (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "03output_code.nc", 970, 503));
                return __result_obj__0;
            }
            __right_value0 = (void*)0;
            come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "03output_code.nc", 973, 504);
            buffer_append_format(buf,":%s",come_value->c_value);
            come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "03output_code.nc}", 977, 505);
        }
        if(type->mPointerParen) {
            buffer_append_format(buf,")");
        }
        for(_o2_saved_8=(struct list$1sNode$ph*)come_increment_ref_count(type2->mVarNameArrayNum, "03output_code.nc", 981, 506),it=list$1sNode$ph_begin(_o2_saved_8)        ;!list$1sNode$ph_end(_o2_saved_8);it=list$1sNode$ph_next(_o2_saved_8)){
            if(!node_compile(it,info)) {
                err_msg(info,"invalid array number");
                                __right_value0 = (void*)0;
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(""))), "03output_code.nc", 984, 507);
                (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0, "03output_code.nc", 984, 508));
                come_call_finalizer(list$1sNode$ph$p_finalize, _o2_saved_8, (void*)0, (void*)0, 0, 0, 0, (void*)0, "03output_code.nc}", 984, 509);
                come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "03output_code.nc}", 984, 510);
                come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "03output_code.nc}", 984, 511);
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "03output_code.nc", 984, 512));
                neo_current_frame = fr.prev;
                (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "03output_code.nc", 984, 513));
                return __result_obj__0;
            }
            __right_value0 = (void*)0;
            cvalue=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "03output_code.nc", 986, 514);
            buffer_append_format(buf,"[%s]",cvalue->c_value);
            come_call_finalizer(CVALUE_finalize, cvalue, (void*)0, (void*)0, 0, 0, 0, (void*)0, "03output_code.nc}", 991, 515);
        }
        if(type2->mArrayPointerNum>0) {
            buffer_append_format(buf,")");
        }
        n=0;
        for(_o2_saved_9=(struct list$1sNode$ph*)come_increment_ref_count(type2->mArrayNum, "03output_code.nc", 996, 516),it_56=list$1sNode$ph_begin(_o2_saved_9)        ;!list$1sNode$ph_end(_o2_saved_9);it_56=list$1sNode$ph_next(_o2_saved_9)){
            if(!node_compile(it_56,info)) {
                err_msg(info,"invalid array number");
                                __right_value0 = (void*)0;
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(""))), "03output_code.nc", 999, 517);
                (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0, "03output_code.nc", 999, 518));
                come_call_finalizer(list$1sNode$ph$p_finalize, _o2_saved_8, (void*)0, (void*)0, 0, 0, 0, (void*)0, "03output_code.nc}", 999, 519);
                come_call_finalizer(list$1sNode$ph$p_finalize, _o2_saved_9, (void*)0, (void*)0, 0, 0, 0, (void*)0, "03output_code.nc}", 999, 520);
                come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "03output_code.nc}", 999, 521);
                come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "03output_code.nc}", 999, 522);
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "03output_code.nc", 999, 523));
                neo_current_frame = fr.prev;
                (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "03output_code.nc", 999, 524));
                return __result_obj__0;
            }
            __right_value0 = (void*)0;
            cvalue_57=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "03output_code.nc", 1001, 525);
            if(list$1int$_operator_load_element(type2->mArrayRestrict,n)&&list$1int$_operator_load_element(type2->mArrayStatic,n)) {
                buffer_append_format(buf,"[restrict static %s]",cvalue_57->c_value);
            }
            else if(list$1int$_operator_load_element(type2->mArrayStatic,n)) {
                buffer_append_format(buf,"[static %s]",cvalue_57->c_value);
            }
            else if(list$1int$_operator_load_element(type2->mArrayRestrict,n)) {
                buffer_append_format(buf,"[restrict %s]",cvalue_57->c_value);
            }
            else {
                buffer_append_format(buf,"[%s]",cvalue_57->c_value);
            }
            n++;
            come_call_finalizer(CVALUE_finalize, cvalue_57, (void*)0, (void*)0, 0, 0, 0, (void*)0, "03output_code.nc}", 1019, 526);
        }
        if(type2->mArrayPointerType) {
            buffer_append_str(buf,"[]");
        }
        if(type2->mAsmName!=((void*)0)&&string_operator_not_equals(type2->mAsmName,"")) {
            buffer_append_format(buf," __asm__(\"%s\")",type2->mAsmName);
        }
        if(type2->mAttribute!=((void*)0)) {
            buffer_append_format(buf," ");
            buffer_append_format(buf,type->mAttribute);
        }
        (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0, "03output_code.nc", 1033, 527));
        come_call_finalizer(list$1sNode$ph$p_finalize, _o2_saved_8, (void*)0, (void*)0, 0, 0, 0, (void*)0, "03output_code.nc}", 1033, 528);
        come_call_finalizer(list$1sNode$ph$p_finalize, _o2_saved_9, (void*)0, (void*)0, 0, 0, 0, (void*)0, "03output_code.nc}", 1033, 529);
    }
    if(type2->mVarAttribute) {
        __right_value0 = (void*)0;
        buffer_append_str(buf,((char* )(__right_value0=charp_operator_add(" ",type->mVarAttribute))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "03output_code.nc", 1034, 530));
    }
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=buffer_to_string(buf))), "03output_code.nc", 1037, 531);
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "03output_code.nc}", 1037, 532);
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "03output_code.nc}", 1037, 533);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "03output_code.nc", 1037, 534));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "03output_code.nc", 1037, 535));
    return __result_obj__0;
}

void method_block2_03outputcodenc(struct __current_stack2__* parent, int it)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "method_block2_03outputcodenc"; neo_current_frame = &fr;
    buffer_append_format((*(parent->buf)),"*");
            neo_current_frame = fr.prev;
}

char*  make_var_name(struct sType*  type  , char* name, struct sInfo*  info  , _Bool no_static)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "make_var_name"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer*  buf  ;
    struct sType*  type2  ;
    char*  __result_obj__0  ;
    char*  type_name  ;
    struct __current_stack3__ __current_stack3__;
    int n;
    struct list$1sNode$ph* _o2_saved_10;
    struct sNode* it;
    struct CVALUE*  cvalue  ;
    struct CVALUE*  come_value  ;
    int i;
    int i_58;
    int n_59;
    struct list$1sNode$ph* _o2_saved_11;
    struct sNode* it_60;
    struct CVALUE*  cvalue_61  ;
    int i_62;
    memset(&__current_stack3__, 0, sizeof(struct __current_stack3__));
    buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "03output_code.nc", 1042, 536, "struct buffer* "), "03output_code.nc", 1042, 537)), "03output_code.nc", 1042, 538);
    __right_value0 = (void*)0;
    type2=(struct sType* )come_increment_ref_count(sType_clone(type), "03output_code.nc", 1044, 539);
    if(type2->mArrayPointerType) {
        type2->mPointerNum--;
    }
    if(string_operator_equals(type2->mClass->mName,"lambda")&&type2->mAsmName!=((void*)0)&&string_operator_not_equals(type2->mAsmName,"")) {
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(name))), "03output_code.nc", 1050, 540);
        come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "03output_code.nc}", 1050, 541);
        come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "03output_code.nc}", 1050, 542);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "03output_code.nc", 1050, 543));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "03output_code.nc", 1050, 544));
        return __result_obj__0;
    }
    else if(string_operator_equals(type2->mClass->mName,"lambda")) {
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(name))), "03output_code.nc", 1053, 545);
        come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "03output_code.nc}", 1053, 546);
        come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "03output_code.nc}", 1053, 547);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "03output_code.nc", 1053, 548));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "03output_code.nc", 1053, 549));
        return __result_obj__0;
    }
    else if(type2->mArrayPointerNum>0) {
        __right_value0 = (void*)0;
        type_name=(char* )come_increment_ref_count(make_type_name_string(type2,info,no_static,(_Bool)0,(_Bool)0,(_Bool)0), "03output_code.nc", 1056, 550);
        buffer_append_format(buf,"(");
        ({        __current_stack3__.type_name = &type_name;
        __current_stack3__.type = &type;
        __current_stack3__.name = &name;
        __current_stack3__.info = &info;
        __current_stack3__.no_static = &no_static;
        __current_stack3__.buf = &buf;
        __current_stack3__.type2 = &type2;
        })        ,        int_times(type2->mArrayPointerNum,&__current_stack3__,(void*)method_block3_03outputcodenc);
        buffer_append_format(buf,"%s)",name);
        n=0;
        for(_o2_saved_10=(struct list$1sNode$ph*)come_increment_ref_count(type2->mArrayNum, "03output_code.nc", 1065, 551),it=list$1sNode$ph_begin(_o2_saved_10)        ;!list$1sNode$ph_end(_o2_saved_10);it=list$1sNode$ph_next(_o2_saved_10)){
            if(!node_compile(it,info)) {
                err_msg(info,"invalid array number");
                                __right_value0 = (void*)0;
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(""))), "03output_code.nc", 1068, 552);
                (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0, "03output_code.nc", 1068, 553));
                come_call_finalizer(list$1sNode$ph$p_finalize, _o2_saved_10, (void*)0, (void*)0, 0, 0, 0, (void*)0, "03output_code.nc}", 1068, 554);
                come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "03output_code.nc}", 1068, 555);
                come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "03output_code.nc}", 1068, 556);
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "03output_code.nc", 1068, 557));
                neo_current_frame = fr.prev;
                (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "03output_code.nc", 1068, 558));
                return __result_obj__0;
            }
            __right_value0 = (void*)0;
            cvalue=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "03output_code.nc", 1070, 559);
            if(list$1int$_operator_load_element(type2->mArrayRestrict,n)&&list$1int$_operator_load_element(type2->mArrayStatic,n)) {
                buffer_append_format(buf,"[restrict static %s]",cvalue->c_value);
            }
            else if(list$1int$_operator_load_element(type2->mArrayStatic,n)) {
                buffer_append_format(buf,"[static %s]",cvalue->c_value);
            }
            else if(list$1int$_operator_load_element(type2->mArrayRestrict,n)) {
                buffer_append_format(buf,"[restrict %s]",cvalue->c_value);
            }
            else {
                buffer_append_format(buf,"[%s]",cvalue->c_value);
            }
            n++;
            come_call_finalizer(CVALUE_finalize, cvalue, (void*)0, (void*)0, 0, 0, 0, (void*)0, "03output_code.nc}", 1088, 560);
        }
        if(type2->mAsmName!=((void*)0)&&string_operator_not_equals(type2->mAsmName,"")) {
            buffer_append_format(buf," __asm__(\"%s\")",type2->mAsmName);
        }
        if(type2->mAttribute!=((void*)0)) {
            buffer_append_format(buf," ");
            buffer_append_format(buf,type->mAttribute);
        }
        (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0, "03output_code.nc", 1183, 561));
        come_call_finalizer(list$1sNode$ph$p_finalize, _o2_saved_10, (void*)0, (void*)0, 0, 0, 0, (void*)0, "03output_code.nc}", 1183, 562);
    }
    else if(type2->mSizeNum!=((void*)0)) {
        if(!node_compile(type2->mSizeNum,info)) {
            err_msg(info,"invalid bit field number");
                        __right_value0 = (void*)0;
            __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(""))), "03output_code.nc", 1100, 563);
            come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "03output_code.nc}", 1100, 564);
            come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "03output_code.nc}", 1100, 565);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "03output_code.nc", 1100, 566));
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "03output_code.nc", 1100, 567));
            return __result_obj__0;
        }
        __right_value0 = (void*)0;
        come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "03output_code.nc", 1103, 568);
        for(i=0        ;i<type2->mPointerNum;i++){
            buffer_append_str(buf,"*");
        }
        buffer_append_format(buf,"%s:%s",name,come_value->c_value);
        if(type2->mAsmName!=((void*)0)&&string_operator_not_equals(type2->mAsmName,"")) {
            buffer_append_format(buf," __asm__(\"%s\")",type2->mAsmName);
        }
        if(type2->mAttribute!=((void*)0)) {
            buffer_append_format(buf," %s",type->mAttribute);
        }
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "03output_code.nc}", 1183, 569);
    }
    else if(list$1sNode$ph_length(type2->mArrayNum)>0) {
        for(i_58=0        ;i_58<type2->mPointerNum;i_58++){
            buffer_append_str(buf,"*");
        }
        buffer_append_str(buf,name);
        n_59=0;
        for(_o2_saved_11=(struct list$1sNode$ph*)come_increment_ref_count(type2->mArrayNum, "03output_code.nc", 1125, 570),it_60=list$1sNode$ph_begin(_o2_saved_11)        ;!list$1sNode$ph_end(_o2_saved_11);it_60=list$1sNode$ph_next(_o2_saved_11)){
            if(!node_compile(it_60,info)) {
                err_msg(info,"invalid array number");
                                __right_value0 = (void*)0;
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(""))), "03output_code.nc", 1128, 571);
                come_call_finalizer(list$1sNode$ph$p_finalize, _o2_saved_11, (void*)0, (void*)0, 0, 0, 0, (void*)0, "03output_code.nc}", 1128, 572);
                come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "03output_code.nc}", 1128, 573);
                come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "03output_code.nc}", 1128, 574);
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "03output_code.nc", 1128, 575));
                neo_current_frame = fr.prev;
                (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "03output_code.nc", 1128, 576));
                return __result_obj__0;
            }
            __right_value0 = (void*)0;
            cvalue_61=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "03output_code.nc", 1130, 577);
            if(list$1int$_operator_load_element(type2->mArrayRestrict,n_59)&&list$1int$_operator_load_element(type2->mArrayStatic,n_59)) {
                buffer_append_format(buf,"[restrict static %s]",cvalue_61->c_value);
            }
            else if(list$1int$_operator_load_element(type2->mArrayStatic,n_59)) {
                buffer_append_format(buf,"[static %s]",cvalue_61->c_value);
            }
            else if(list$1int$_operator_load_element(type2->mArrayRestrict,n_59)) {
                buffer_append_format(buf,"[restrict %s]",cvalue_61->c_value);
            }
            else {
                buffer_append_format(buf,"[%s]",cvalue_61->c_value);
            }
            n_59++;
            come_call_finalizer(CVALUE_finalize, cvalue_61, (void*)0, (void*)0, 0, 0, 0, (void*)0, "03output_code.nc}", 1148, 578);
        }
        if(type2->mArrayPointerType) {
            buffer_append_str(buf,"[]");
        }
        if(type2->mAsmName!=((void*)0)&&string_operator_not_equals(type2->mAsmName,"")) {
            buffer_append_format(buf," __asm__(\"%s\")",type2->mAsmName);
        }
        if(type2->mAttribute!=((void*)0)) {
            buffer_append_format(buf," %s",type->mAttribute);
        }
        come_call_finalizer(list$1sNode$ph$p_finalize, _o2_saved_11, (void*)0, (void*)0, 0, 0, 0, (void*)0, "03output_code.nc}", 1183, 579);
    }
    else {
        if(type2->mAttribute!=((void*)0)) {
            buffer_append_format(buf,type->mAttribute);
        }
        buffer_append_str(buf," ");
        for(i_62=0        ;i_62<type2->mPointerNum;i_62++){
            buffer_append_str(buf,"*");
        }
        buffer_append_str(buf,name);
        if(type2->mArrayPointerType) {
            buffer_append_str(buf,"[]");
        }
        if(type2->mAsmName!=((void*)0)&&string_operator_not_equals(type2->mAsmName,"")) {
            buffer_append_format(buf," __asm__(\"%s\")",type2->mAsmName);
        }
        if(type2->mAttribute!=((void*)0)) {
            buffer_append_format(buf," %s",type->mAttribute);
        }
    }
    if(type2->mVarAttribute) {
        __right_value0 = (void*)0;
        buffer_append_str(buf,((char* )(__right_value0=charp_operator_add(" ",type->mVarAttribute))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "03output_code.nc", 1184, 580));
    }
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=buffer_to_string(buf))), "03output_code.nc", 1187, 581);
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "03output_code.nc}", 1187, 582);
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "03output_code.nc}", 1187, 583);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "03output_code.nc", 1187, 584));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "03output_code.nc", 1187, 585));
    return __result_obj__0;
}

void method_block3_03outputcodenc(struct __current_stack3__* parent, int it)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "method_block3_03outputcodenc"; neo_current_frame = &fr;
    buffer_append_format((*(parent->buf)),"*");
            neo_current_frame = fr.prev;
}

char*  make_come_define_var(struct sType*  type  , char* name, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "make_come_define_var"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer*  buf  ;
    struct sType*  type2  ;
    char*  str  ;
    char*  str_63  ;
    char*  type_name  ;
    struct __current_stack4__ __current_stack4__;
    struct list$1sNode$ph* _o2_saved_12;
    struct sNode* it;
    char*  __result_obj__0  ;
    struct CVALUE*  cvalue  ;
    struct CVALUE*  come_value  ;
    char*  type_str  ;
    char*  __dec_obj44  ;
    char*  type_str_64  ;
    char*  __dec_obj45  ;
    struct list$1sNode$ph* _o2_saved_13;
    struct sNode* it_65;
    struct CVALUE*  cvalue_66  ;
    char*  type_str_67  ;
    char*  __dec_obj46  ;
    memset(&__current_stack4__, 0, sizeof(struct __current_stack4__));
    memset(&type_str, 0, sizeof(type_str));
    memset(&type_str_64, 0, sizeof(type_str_64));
    memset(&type_str_67, 0, sizeof(type_str_67));
    buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "03output_code.nc", 1192, 586, "struct buffer* "), "03output_code.nc", 1192, 587)), "03output_code.nc", 1192, 588);
    __right_value0 = (void*)0;
    type2=(struct sType* )come_increment_ref_count(sType_clone(type), "03output_code.nc", 1194, 589);
    if(type2->mArrayPointerType) {
        type2->mPointerNum--;
    }
    if(string_operator_equals(type2->mClass->mName,"lambda")&&type2->mAsmName!=((void*)0)&&string_operator_not_equals(type2->mAsmName,"")) {
        __right_value0 = (void*)0;
        str=(char* )come_increment_ref_count(header_lambda(type2,(char* )come_increment_ref_count(type2->mAsmName, "03output_code.nc", 1200, 590),info), "03output_code.nc", 1200, 591);
        buffer_append_str(buf,str);
        (str = come_decrement_ref_count(str, (void*)0, (void*)0, 0, 0, (void*)0, "03output_code.nc", 1318, 592));
    }
    else if(string_operator_equals(type2->mClass->mName,"lambda")) {
        __right_value0 = (void*)0;
        str_63=(char* )come_increment_ref_count(make_lambda_type_name_string(type2,name,info), "03output_code.nc", 1205, 593);
        buffer_append_str(buf,str_63);
        (str_63 = come_decrement_ref_count(str_63, (void*)0, (void*)0, 0, 0, (void*)0, "03output_code.nc", 1318, 594));
    }
    else if(type2->mArrayPointerNum>0) {
        __right_value0 = (void*)0;
        type_name=(char* )come_increment_ref_count(make_come_type_name_string(type2,info), "03output_code.nc", 1210, 595);
        buffer_append_format(buf,"%s (",type_name);
        ({        __current_stack4__.type_name = &type_name;
        __current_stack4__.type = &type;
        __current_stack4__.name = &name;
        __current_stack4__.info = &info;
        __current_stack4__.buf = &buf;
        __current_stack4__.type2 = &type2;
        })        ,        int_times(type2->mArrayPointerNum,&__current_stack4__,(void*)method_block4_03outputcodenc);
        buffer_append_format(buf,"%s)",name);
        for(_o2_saved_12=(struct list$1sNode$ph*)come_increment_ref_count(type2->mArrayNum, "03output_code.nc", 1218, 596),it=list$1sNode$ph_begin(_o2_saved_12)        ;!list$1sNode$ph_end(_o2_saved_12);it=list$1sNode$ph_next(_o2_saved_12)){
            if(!node_compile(it,info)) {
                err_msg(info,"invalid array number");
                                __right_value0 = (void*)0;
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(""))), "03output_code.nc", 1221, 597);
                (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0, "03output_code.nc", 1221, 598));
                come_call_finalizer(list$1sNode$ph$p_finalize, _o2_saved_12, (void*)0, (void*)0, 0, 0, 0, (void*)0, "03output_code.nc}", 1221, 599);
                come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "03output_code.nc}", 1221, 600);
                come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "03output_code.nc}", 1221, 601);
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "03output_code.nc", 1221, 602));
                neo_current_frame = fr.prev;
                (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "03output_code.nc", 1221, 603));
                return __result_obj__0;
            }
            __right_value0 = (void*)0;
            cvalue=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "03output_code.nc", 1223, 604);
            buffer_append_format(buf,"[%s]",cvalue->c_value);
            come_call_finalizer(CVALUE_finalize, cvalue, (void*)0, (void*)0, 0, 0, 0, (void*)0, "03output_code.nc}", 1228, 605);
        }
        if(type2->mArrayPointerType) {
            buffer_append_format(buf,"[]");
        }
        if(type2->mAsmName!=((void*)0)&&string_operator_not_equals(type2->mAsmName,"")) {
            buffer_append_format(buf," __asm__(\"%s\")",type2->mAsmName);
        }
        if(type2->mAttribute!=((void*)0)) {
            buffer_append_format(buf," %s",type->mAttribute);
        }
        (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0, "03output_code.nc", 1318, 606));
        come_call_finalizer(list$1sNode$ph$p_finalize, _o2_saved_12, (void*)0, (void*)0, 0, 0, 0, (void*)0, "03output_code.nc}", 1318, 607);
    }
    else if(type2->mSizeNum!=((void*)0)) {
        if(!node_compile(type2->mSizeNum,info)) {
            err_msg(info,"invalid bit field number");
                        __right_value0 = (void*)0;
            __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(""))), "03output_code.nc", 1243, 608);
            come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "03output_code.nc}", 1243, 609);
            come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "03output_code.nc}", 1243, 610);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "03output_code.nc", 1243, 611));
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "03output_code.nc", 1243, 612));
            return __result_obj__0;
        }
        __right_value0 = (void*)0;
        come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "03output_code.nc", 1246, 613);
        __right_value0 = (void*)0;
        __dec_obj44=type_str,
        type_str=(char* )come_increment_ref_count(make_come_type_name_string(type2,info), "03output_code.nc", 1249, 615);
        __dec_obj44 = come_decrement_ref_count(__dec_obj44, (void*)0, (void*)0, 0,0, (void*)0, "03output_code.nc", 1249, 614);
        buffer_append_format(buf,"%s ",type_str);
        buffer_append_format(buf,"%s:%s",name,come_value->c_value);
        if(type2->mAsmName!=((void*)0)&&string_operator_not_equals(type2->mAsmName,"")) {
            buffer_append_format(buf," __asm__(\"%s\")",type2->mAsmName);
        }
        if(type2->mAttribute!=((void*)0)) {
            buffer_append_format(buf," %s",type->mAttribute);
        }
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "03output_code.nc}", 1318, 616);
        (type_str = come_decrement_ref_count(type_str, (void*)0, (void*)0, 0, 0, (void*)0, "03output_code.nc", 1318, 617));
    }
    else if(list$1sNode$ph_length(type2->mArrayNum)>0) {
        __right_value0 = (void*)0;
        __dec_obj45=type_str_64,
        type_str_64=(char* )come_increment_ref_count(make_come_type_name_string(type2,info), "03output_code.nc", 1263, 619);
        __dec_obj45 = come_decrement_ref_count(__dec_obj45, (void*)0, (void*)0, 0,0, (void*)0, "03output_code.nc", 1263, 618);
        buffer_append_str(buf,type_str_64);
        buffer_append_str(buf," ");
        buffer_append_str(buf,name);
        for(_o2_saved_13=(struct list$1sNode$ph*)come_increment_ref_count(type2->mArrayNum, "03output_code.nc", 1270, 620),it_65=list$1sNode$ph_begin(_o2_saved_13)        ;!list$1sNode$ph_end(_o2_saved_13);it_65=list$1sNode$ph_next(_o2_saved_13)){
            if(!node_compile(it_65,info)) {
                err_msg(info,"invalid array number");
                                __right_value0 = (void*)0;
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(""))), "03output_code.nc", 1273, 621);
                (type_str_64 = come_decrement_ref_count(type_str_64, (void*)0, (void*)0, 0, 0, (void*)0, "03output_code.nc", 1273, 622));
                come_call_finalizer(list$1sNode$ph$p_finalize, _o2_saved_13, (void*)0, (void*)0, 0, 0, 0, (void*)0, "03output_code.nc}", 1273, 623);
                come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "03output_code.nc}", 1273, 624);
                come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "03output_code.nc}", 1273, 625);
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "03output_code.nc", 1273, 626));
                neo_current_frame = fr.prev;
                (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "03output_code.nc", 1273, 627));
                return __result_obj__0;
            }
            __right_value0 = (void*)0;
            cvalue_66=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "03output_code.nc", 1275, 628);
            buffer_append_format(buf,"[%s]",cvalue_66->c_value);
            come_call_finalizer(CVALUE_finalize, cvalue_66, (void*)0, (void*)0, 0, 0, 0, (void*)0, "03output_code.nc}", 1280, 629);
        }
        if(type2->mArrayPointerType) {
            buffer_append_str(buf,"[]");
        }
        if(type2->mAsmName!=((void*)0)&&string_operator_not_equals(type2->mAsmName,"")) {
            buffer_append_format(buf," __asm__(\"%s\")",type2->mAsmName);
        }
        if(type2->mAttribute!=((void*)0)) {
            buffer_append_format(buf," %s",type->mAttribute);
        }
        (type_str_64 = come_decrement_ref_count(type_str_64, (void*)0, (void*)0, 0, 0, (void*)0, "03output_code.nc", 1318, 630));
        come_call_finalizer(list$1sNode$ph$p_finalize, _o2_saved_13, (void*)0, (void*)0, 0, 0, 0, (void*)0, "03output_code.nc}", 1318, 631);
    }
    else {
        __right_value0 = (void*)0;
        __dec_obj46=type_str_67,
        type_str_67=(char* )come_increment_ref_count(make_come_type_name_string(type2,info), "03output_code.nc", 1294, 633);
        __dec_obj46 = come_decrement_ref_count(__dec_obj46, (void*)0, (void*)0, 0,0, (void*)0, "03output_code.nc", 1294, 632);
        if(string_operator_equals(type_str_67,"")) {
                        __right_value0 = (void*)0;
            __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(""))), "03output_code.nc", 1297, 634);
            (type_str_67 = come_decrement_ref_count(type_str_67, (void*)0, (void*)0, 0, 0, (void*)0, "03output_code.nc", 1297, 635));
            come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "03output_code.nc}", 1297, 636);
            come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "03output_code.nc}", 1297, 637);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "03output_code.nc", 1297, 638));
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "03output_code.nc", 1297, 639));
            return __result_obj__0;
        }
        buffer_append_str(buf,type_str_67);
        buffer_append_str(buf," ");
        buffer_append_str(buf,name);
        if(type2->mArrayPointerType) {
            buffer_append_str(buf,"[]");
        }
        if(type2->mAsmName!=((void*)0)&&string_operator_not_equals(type2->mAsmName,"")) {
            buffer_append_format(buf," __asm__(\"%s\")",type2->mAsmName);
        }
        if(type2->mAttribute!=((void*)0)) {
            buffer_append_format(buf," %s",type->mAttribute);
        }
        (type_str_67 = come_decrement_ref_count(type_str_67, (void*)0, (void*)0, 0, 0, (void*)0, "03output_code.nc", 1318, 640));
    }
    if(type2->mVarAttribute) {
        __right_value0 = (void*)0;
        buffer_append_str(buf,((char* )(__right_value0=charp_operator_add(" ",type->mVarAttribute))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "03output_code.nc", 1319, 641));
    }
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=buffer_to_string(buf))), "03output_code.nc", 1322, 642);
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "03output_code.nc}", 1322, 643);
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "03output_code.nc}", 1322, 644);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "03output_code.nc", 1322, 645));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "03output_code.nc", 1322, 646));
    return __result_obj__0;
}

void method_block4_03outputcodenc(struct __current_stack4__* parent, int it)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "method_block4_03outputcodenc"; neo_current_frame = &fr;
    buffer_append_format((*(parent->buf)),"*");
            neo_current_frame = fr.prev;
}

char*  output_function(struct sFun*  fun  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "output_function"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer*  output  ;
    struct buffer*  output2  ;
    int i;
    struct list$1sType$ph* _o2_saved_14;
    struct sType*  it  ;
    char* name;
    char*  str  ;
    char*  str_70  ;
    struct sType*  base_result_type  ;
    struct list$1sNode$ph* __dec_obj47;
    char*  result_type_str  ;
    int i_71;
    struct list$1sType$ph* _o2_saved_15;
    struct sType*  it_72  ;
    char* name_73;
    char*  str_74  ;
    struct sNode* node;
    char*  __result_obj__0  ;
    struct CVALUE*  cvalue  ;
    char*  result_type_str_75  ;
    int i_76;
    struct list$1sType$ph* _o2_saved_16;
    struct sType*  it_77  ;
    char* name_78;
    char*  str_79  ;
    output=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "03output_code.nc", 1327, 647, "struct buffer* "), "03output_code.nc", 1327, 648)), "03output_code.nc", 1327, 649);
    if(fun->mResultType->mResultType) {
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        output2=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "03output_code.nc", 1329, 650, "struct buffer* "), "03output_code.nc", 1329, 651)), "03output_code.nc", 1329, 652);
        buffer_append_str(output2,fun->mName);
        buffer_append_str(output2,"(");
        i=0;
        for(_o2_saved_14=(struct list$1sType$ph*)come_increment_ref_count(fun->mParamTypes, "03output_code.nc", 1335, 653),it=list$1sType$ph_begin(_o2_saved_14)        ;!list$1sType$ph_end(_o2_saved_14);it=list$1sType$ph_next(_o2_saved_14)){
            __right_value0 = (void*)0;
            name=((char* )(__right_value0=list$1char$ph_operator_load_element(fun->mParamNames,i)));
            __right_value0 = (void*)0;
            str=(char* )come_increment_ref_count(make_define_var(it,name,info,(_Bool)1,(_Bool)0), "03output_code.nc", 1338, 672);
            buffer_append_str(output2,str);
            if(i==list$1sType$ph_length(fun->mParamTypes)-1) {
                if(fun->mVarArgs) {
                    buffer_append_str(output2,", ...");
                }
            }
            else {
                buffer_append_str(output2,", ");
            }
            i++;
            (str = come_decrement_ref_count(str, (void*)0, (void*)0, 0, 0, (void*)0, "03output_code.nc", 1352, 673));
        }
        buffer_append_str(output2,")");
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        str_70=(char* )come_increment_ref_count(make_lambda_type_name_string(fun->mResultType,((char* )(__right_value0=buffer_to_string(output2))),info), "03output_code.nc", 1354, 674);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "03output_code.nc", 1354, 675));
        if(string_operator_not_equals(fun->mAttribute,"")) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            buffer_append_str(output,((char*)(__right_value1=xsprintf("\%s ",((char* )(__right_value0=string_to_string(fun->mAttribute)))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "03output_code.nc", 1357, 676));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "03output_code.nc", 1357, 677));
        }
        if(fun->mStatic) {
            buffer_append_str(output,"static ");
        }
        if(fun->mInline) {
            buffer_append_str(output,"inline ");
        }
        buffer_append_str(output,str_70);
        __right_value0 = (void*)0;
        buffer_append_str(info->module->mSourceHead,((char* )(__right_value0=buffer_to_string(output))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "03output_code.nc", 1368, 678));
        if(string_operator_not_equals(fun->mFunAttribute,"")) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            buffer_append_str(info->module->mSourceHead,((char*)(__right_value1=xsprintf(" \%s;\n",((char* )(__right_value0=string_to_string(fun->mFunAttribute)))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "03output_code.nc", 1371, 679));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "03output_code.nc", 1371, 680));
        }
        else {
            buffer_append_str(info->module->mSourceHead,";\n");
        }
        come_call_finalizer(buffer_finalize, output2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "03output_code.nc}", 1492, 681);
        come_call_finalizer(list$1sType$ph$p_finalize, _o2_saved_14, (void*)0, (void*)0, 0, 0, 0, (void*)0, "03output_code.nc}", 1492, 682);
        (str_70 = come_decrement_ref_count(str_70, (void*)0, (void*)0, 0, 0, (void*)0, "03output_code.nc", 1492, 683));
    }
    else if(list$1sNode$ph_length(fun->mResultType->mArrayNum)>0) {
        __right_value0 = (void*)0;
        base_result_type=(struct sType* )come_increment_ref_count(sType_clone(fun->mResultType), "03output_code.nc", 1378, 684);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __dec_obj47=base_result_type->mArrayNum,
        base_result_type->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "03output_code.nc", 1379, 685, "struct list$1sNode$ph*"), "03output_code.nc", 1379, 686)), "03output_code.nc", 1379, 688);
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj47,(void*)0, (void*)0, 0, 0, 0, (void*)0, "03output_code.nc", 1379, 687);
        __right_value0 = (void*)0;
        result_type_str=(char* )come_increment_ref_count(make_type_name_string(base_result_type,info,(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0), "03output_code.nc", 1381, 689);
        if(string_operator_not_equals(fun->mAttribute,"")) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            buffer_append_str(output,((char*)(__right_value1=xsprintf("\%s ",((char* )(__right_value0=string_to_string(fun->mAttribute)))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "03output_code.nc", 1384, 690));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "03output_code.nc", 1384, 691));
        }
        if(fun->mStatic) {
            buffer_append_str(output,"static ");
        }
        if(fun->mInline) {
            buffer_append_str(output,"inline ");
        }
        buffer_append_str(output,result_type_str);
        if(string_operator_not_equals(fun->mMiddleAttribute,"")) {
            buffer_append_str(output," ");
            buffer_append_str(output,fun->mMiddleAttribute);
        }
        buffer_append_str(output," (*");
        buffer_append_str(output,fun->mName);
        buffer_append_str(output,"(");
        i_71=0;
        for(_o2_saved_15=(struct list$1sType$ph*)come_increment_ref_count(fun->mParamTypes, "03output_code.nc", 1404, 692),it_72=list$1sType$ph_begin(_o2_saved_15)        ;!list$1sType$ph_end(_o2_saved_15);it_72=list$1sType$ph_next(_o2_saved_15)){
            __right_value0 = (void*)0;
            name_73=((char* )(__right_value0=list$1char$ph_operator_load_element(fun->mParamNames,i_71)));
            __right_value0 = (void*)0;
            str_74=(char* )come_increment_ref_count(make_define_var(it_72,name_73,info,(_Bool)1,(_Bool)0), "03output_code.nc", 1407, 693);
            buffer_append_str(output,str_74);
            if(i_71==list$1sType$ph_length(fun->mParamTypes)-1) {
                if(fun->mVarArgs) {
                    buffer_append_str(output,", ...");
                }
            }
            else {
                buffer_append_str(output,", ");
            }
            i_71++;
            (str_74 = come_decrement_ref_count(str_74, (void*)0, (void*)0, 0, 0, (void*)0, "03output_code.nc", 1422, 694));
        }
        __right_value0 = (void*)0;
        node=((struct sNode*)(__right_value0=list$1sNode$ph_operator_load_element(fun->mResultType->mArrayNum,0)));
        if(!node_compile(node,info)) {
            err_msg(info,"invalid array number");
                        __right_value0 = (void*)0;
            __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(""))), "03output_code.nc", 1426, 695);
            come_call_finalizer(sType_finalize, base_result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "03output_code.nc}", 1426, 696);
            (result_type_str = come_decrement_ref_count(result_type_str, (void*)0, (void*)0, 0, 0, (void*)0, "03output_code.nc", 1426, 697));
            come_call_finalizer(list$1sType$ph$p_finalize, _o2_saved_15, (void*)0, (void*)0, 0, 0, 0, (void*)0, "03output_code.nc}", 1426, 698);
            come_call_finalizer(buffer_finalize, output, (void*)0, (void*)0, 0, 0, 0, (void*)0, "03output_code.nc}", 1426, 699);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "03output_code.nc", 1426, 700));
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "03output_code.nc", 1426, 701));
            return __result_obj__0;
        }
        __right_value0 = (void*)0;
        cvalue=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "03output_code.nc", 1428, 702);
        buffer_append_format(output,"))[%s]",cvalue->c_value);
        __right_value0 = (void*)0;
        buffer_append_str(info->module->mSourceHead,((char* )(__right_value0=buffer_to_string(output))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "03output_code.nc", 1432, 703));
        if(string_operator_not_equals(fun->mFunAttribute,"")) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            buffer_append_str(info->module->mSourceHead,((char*)(__right_value1=xsprintf(" \%s;\n",((char* )(__right_value0=string_to_string(fun->mFunAttribute)))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "03output_code.nc", 1434, 704));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "03output_code.nc", 1434, 705));
        }
        else {
            buffer_append_str(info->module->mSourceHead,";\n");
        }
        come_call_finalizer(sType_finalize, base_result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "03output_code.nc}", 1492, 706);
        (result_type_str = come_decrement_ref_count(result_type_str, (void*)0, (void*)0, 0, 0, (void*)0, "03output_code.nc", 1492, 707));
        come_call_finalizer(list$1sType$ph$p_finalize, _o2_saved_15, (void*)0, (void*)0, 0, 0, 0, (void*)0, "03output_code.nc}", 1492, 708);
        come_call_finalizer(CVALUE_finalize, cvalue, (void*)0, (void*)0, 0, 0, 0, (void*)0, "03output_code.nc}", 1492, 709);
    }
    else {
        __right_value0 = (void*)0;
        result_type_str_75=(char* )come_increment_ref_count(make_type_name_string(fun->mResultType,info,(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0), "03output_code.nc", 1441, 710);
        if(string_operator_not_equals(fun->mAttribute,"")) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            buffer_append_str(output,((char*)(__right_value1=xsprintf("\%s ",((char* )(__right_value0=string_to_string(fun->mAttribute)))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "03output_code.nc", 1444, 711));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "03output_code.nc", 1444, 712));
        }
        if(fun->mStatic) {
            buffer_append_str(output,"static ");
        }
        if(fun->mInline) {
            buffer_append_str(output,"inline ");
        }
        buffer_append_str(output,result_type_str_75);
        if(string_operator_not_equals(fun->mMiddleAttribute,"")) {
            buffer_append_str(output," ");
            buffer_append_str(output,fun->mMiddleAttribute);
        }
        buffer_append_str(output," ");
        buffer_append_str(output,fun->mName);
        buffer_append_str(output,"(");
        i_76=0;
        for(_o2_saved_16=(struct list$1sType$ph*)come_increment_ref_count(fun->mParamTypes, "03output_code.nc", 1464, 713),it_77=list$1sType$ph_begin(_o2_saved_16)        ;!list$1sType$ph_end(_o2_saved_16);it_77=list$1sType$ph_next(_o2_saved_16)){
            __right_value0 = (void*)0;
            name_78=((char* )(__right_value0=list$1char$ph_operator_load_element(fun->mParamNames,i_76)));
            __right_value0 = (void*)0;
            str_79=(char* )come_increment_ref_count(make_define_var(it_77,name_78,info,(_Bool)1,(_Bool)0), "03output_code.nc", 1467, 714);
            buffer_append_str(output,str_79);
            if(i_76==list$1sType$ph_length(fun->mParamTypes)-1) {
                if(fun->mVarArgs) {
                    buffer_append_str(output,", ...");
                }
            }
            else {
                buffer_append_str(output,", ");
            }
            i_76++;
            (str_79 = come_decrement_ref_count(str_79, (void*)0, (void*)0, 0, 0, (void*)0, "03output_code.nc", 1481, 715));
        }
        buffer_append_str(output,")");
        __right_value0 = (void*)0;
        buffer_append_str(info->module->mSourceHead,((char* )(__right_value0=buffer_to_string(output))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "03output_code.nc", 1483, 716));
        if(string_operator_not_equals(fun->mFunAttribute,"")) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            buffer_append_str(info->module->mSourceHead,((char*)(__right_value1=xsprintf(" \%s;\n",((char* )(__right_value0=string_to_string(fun->mFunAttribute)))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "03output_code.nc", 1485, 717));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "03output_code.nc", 1485, 718));
        }
        else {
            buffer_append_str(info->module->mSourceHead,";\n");
        }
        (result_type_str_75 = come_decrement_ref_count(result_type_str_75, (void*)0, (void*)0, 0, 0, (void*)0, "03output_code.nc", 1492, 719));
        come_call_finalizer(list$1sType$ph$p_finalize, _o2_saved_16, (void*)0, (void*)0, 0, 0, 0, (void*)0, "03output_code.nc}", 1492, 720);
    }
    buffer_append_str(output,"\n{\n");
    __right_value0 = (void*)0;
    buffer_append_str(output,((char* )(__right_value0=buffer_to_string(fun->mSourceHead))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "03output_code.nc", 1494, 721));
    __right_value0 = (void*)0;
    buffer_append_str(output,((char* )(__right_value0=buffer_to_string(fun->mSourceHead2))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "03output_code.nc", 1495, 722));
    __right_value0 = (void*)0;
    buffer_append_str(output,((char* )(__right_value0=buffer_to_string(fun->mSource))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "03output_code.nc", 1496, 723));
    buffer_append_str(output,"}\n");
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=buffer_to_string(output))), "03output_code.nc", 1500, 724);
    come_call_finalizer(buffer_finalize, output, (void*)0, (void*)0, 0, 0, 0, (void*)0, "03output_code.nc}", 1500, 725);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "03output_code.nc", 1500, 726));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "03output_code.nc", 1500, 727));
    return __result_obj__0;
}

static char*  list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph$p_operator_load_element"; neo_current_frame = &fr;
    char*  default_value  ;
    char*  __result_obj__0  ;
    struct list_item$1char$ph* it;
    int i;
    char*  default_value_68  ;
    if(self==((void*)0)) {
        memset(&default_value,0,sizeof(char* ));
                __result_obj__0 = (char* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 2148, 654);
        (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 2148, 655));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 2148, 656));
        return __result_obj__0;
        (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 2151, 657));
    }
    if(position<0) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(it!=((void*)0)) {
        if(position==i) {
                        __result_obj__0 = (char* )come_increment_ref_count(it->item, "/usr/local/include/neo-c.h", 2159, 658);
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 2159, 659));
            return __result_obj__0;
        }
        it=it->next;
        i++;
    }
    memset(&default_value_68,0,sizeof(char* ));
        __result_obj__0 = (char* )come_increment_ref_count(default_value_68, "/usr/local/include/neo-c.h", 2167, 660);
    (default_value_68 = come_decrement_ref_count(default_value_68, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 2167, 661));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 2167, 662));
    return __result_obj__0;
}

static char*  list$1char$ph_operator_load_element(struct list$1char$ph* self, int position)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_operator_load_element"; neo_current_frame = &fr;
    char*  default_value  ;
    char*  __result_obj__0  ;
    struct list_item$1char$ph* it;
    int i;
    char*  default_value_69  ;
    if(self==((void*)0)) {
        memset(&default_value,0,sizeof(char* ));
                __result_obj__0 = (char* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 2148, 663);
        (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 2148, 664));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 2148, 665));
        return __result_obj__0;
        (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 2151, 666));
    }
    if(position<0) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(it!=((void*)0)) {
        if(position==i) {
                        __result_obj__0 = (char* )come_increment_ref_count(it->item, "/usr/local/include/neo-c.h", 2159, 667);
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 2159, 668));
            return __result_obj__0;
        }
        it=it->next;
        i++;
    }
    memset(&default_value_69,0,sizeof(char* ));
        __result_obj__0 = (char* )come_increment_ref_count(default_value_69, "/usr/local/include/neo-c.h", 2167, 669);
    (default_value_69 = come_decrement_ref_count(default_value_69, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 2167, 670));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 2167, 671));
    return __result_obj__0;
}

_Bool is_gcc_builtin_float_type(struct sType*  type  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "is_gcc_builtin_float_type"; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return string_operator_equals(type->mClass->mName,"_Float128")||string_operator_equals(type->mClass->mName,"__float128");
    neo_current_frame = fr.prev;
}

char*  header_function(struct sFun*  fun  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "header_function"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer*  output  ;
    struct buffer*  output2  ;
    int i;
    struct list$1sType$ph* _o2_saved_17;
    struct sType*  it  ;
    char* name;
    char*  str  ;
    char*  str_80  ;
    struct sType*  base_result_type  ;
    struct list$1sNode$ph* __dec_obj48;
    char*  result_type_str  ;
    int i_81;
    struct list$1sType$ph* _o2_saved_18;
    struct sType*  it_82  ;
    char* name_83;
    char*  str_84  ;
    struct sNode* node;
    char*  __result_obj__0  ;
    struct CVALUE*  cvalue  ;
    char*  result_type_str_85  ;
    int i_86;
    struct list$1sType$ph* _o2_saved_19;
    struct sType*  it_87  ;
    char* name_88;
    char*  str_89  ;
    output=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "03output_code.nc", 1511, 728, "struct buffer* "), "03output_code.nc", 1511, 729)), "03output_code.nc", 1511, 730);
    if(fun->mResultType->mResultType) {
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        output2=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "03output_code.nc", 1514, 731, "struct buffer* "), "03output_code.nc", 1514, 732)), "03output_code.nc", 1514, 733);
        buffer_append_str(output2,fun->mName);
        buffer_append_str(output2,"(");
        i=0;
        for(_o2_saved_17=(struct list$1sType$ph*)come_increment_ref_count(fun->mParamTypes, "03output_code.nc", 1520, 734),it=list$1sType$ph_begin(_o2_saved_17)        ;!list$1sType$ph_end(_o2_saved_17);it=list$1sType$ph_next(_o2_saved_17)){
            __right_value0 = (void*)0;
            name=((char* )(__right_value0=list$1char$ph_operator_load_element(fun->mParamNames,i)));
            __right_value0 = (void*)0;
            str=(char* )come_increment_ref_count(make_define_var(it,name,info,(_Bool)1,(_Bool)0), "03output_code.nc", 1523, 735);
            buffer_append_str(output2,str);
            if(i!=list$1sType$ph_length(fun->mParamTypes)-1) {
                buffer_append_str(output2,", ");
            }
            i++;
            (str = come_decrement_ref_count(str, (void*)0, (void*)0, 0, 0, (void*)0, "03output_code.nc", 1531, 736));
        }
        buffer_append_str(output2,")");
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        str_80=(char* )come_increment_ref_count(make_lambda_type_name_string(fun->mResultType,((char* )(__right_value0=buffer_to_string(output2))),info), "03output_code.nc", 1533, 737);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "03output_code.nc", 1533, 738));
        if(string_operator_not_equals(fun->mAttribute,"")) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            buffer_append_str(output,((char*)(__right_value1=xsprintf("\%s ",((char* )(__right_value0=string_to_string(fun->mAttribute)))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "03output_code.nc", 1536, 739));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "03output_code.nc", 1536, 740));
        }
        if(fun->mStatic) {
            buffer_append_str(output,"static ");
        }
        if(fun->mInline) {
            buffer_append_str(output,"inline ");
        }
        buffer_append_str(output,str_80);
        if(string_operator_not_equals(fun->mFunAttribute,"")) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            buffer_append_str(output,((char*)(__right_value1=xsprintf(" \%s ",((char* )(__right_value0=string_to_string(fun->mFunAttribute)))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "03output_code.nc", 1547, 741));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "03output_code.nc", 1547, 742));
        }
        buffer_append_str(output,";\n");
        come_call_finalizer(buffer_finalize, output2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "03output_code.nc}", 1662, 743);
        come_call_finalizer(list$1sType$ph$p_finalize, _o2_saved_17, (void*)0, (void*)0, 0, 0, 0, (void*)0, "03output_code.nc}", 1662, 744);
        (str_80 = come_decrement_ref_count(str_80, (void*)0, (void*)0, 0, 0, (void*)0, "03output_code.nc", 1662, 745));
    }
    else if(list$1sNode$ph_length(fun->mResultType->mArrayNum)>0) {
        __right_value0 = (void*)0;
        base_result_type=(struct sType* )come_increment_ref_count(sType_clone(fun->mResultType), "03output_code.nc", 1553, 746);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __dec_obj48=base_result_type->mArrayNum,
        base_result_type->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "03output_code.nc", 1554, 747, "struct list$1sNode$ph*"), "03output_code.nc", 1554, 748)), "03output_code.nc", 1554, 750);
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj48,(void*)0, (void*)0, 0, 0, 0, (void*)0, "03output_code.nc", 1554, 749);
        __right_value0 = (void*)0;
        result_type_str=(char* )come_increment_ref_count(make_type_name_string(base_result_type,info,(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0), "03output_code.nc", 1556, 751);
        if(string_operator_not_equals(fun->mAttribute,"")) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            buffer_append_str(output,((char*)(__right_value1=xsprintf("\%s ",((char* )(__right_value0=string_to_string(fun->mAttribute)))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "03output_code.nc", 1559, 752));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "03output_code.nc", 1559, 753));
        }
        if(fun->mStatic) {
            buffer_append_str(output,"static ");
        }
        if(fun->mInline) {
            buffer_append_str(output,"inline ");
        }
        buffer_append_str(output,result_type_str);
        if(string_operator_not_equals(fun->mMiddleAttribute,"")) {
            buffer_append_str(output," ");
            buffer_append_str(output,fun->mMiddleAttribute);
        }
        buffer_append_str(output," (*");
        buffer_append_str(output,fun->mName);
        buffer_append_str(output,"(");
        i_81=0;
        for(_o2_saved_18=(struct list$1sType$ph*)come_increment_ref_count(fun->mParamTypes, "03output_code.nc", 1579, 754),it_82=list$1sType$ph_begin(_o2_saved_18)        ;!list$1sType$ph_end(_o2_saved_18);it_82=list$1sType$ph_next(_o2_saved_18)){
            __right_value0 = (void*)0;
            name_83=((char* )(__right_value0=list$1char$ph_operator_load_element(fun->mParamNames,i_81)));
            __right_value0 = (void*)0;
            str_84=(char* )come_increment_ref_count(make_define_var(it_82,name_83,info,(_Bool)1,(_Bool)0), "03output_code.nc", 1582, 755);
            buffer_append_str(output,str_84);
            if(i_81==list$1sType$ph_length(fun->mParamTypes)-1) {
                if(fun->mVarArgs) {
                    buffer_append_str(output,", ...");
                }
            }
            else {
                buffer_append_str(output,", ");
            }
            i_81++;
            (str_84 = come_decrement_ref_count(str_84, (void*)0, (void*)0, 0, 0, (void*)0, "03output_code.nc", 1596, 756));
        }
        __right_value0 = (void*)0;
        node=((struct sNode*)(__right_value0=list$1sNode$ph_operator_load_element(fun->mResultType->mArrayNum,0)));
        if(!node_compile(node,info)) {
            err_msg(info,"invalid array number");
                        __right_value0 = (void*)0;
            __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(""))), "03output_code.nc", 1599, 757);
            come_call_finalizer(sType_finalize, base_result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "03output_code.nc}", 1599, 758);
            (result_type_str = come_decrement_ref_count(result_type_str, (void*)0, (void*)0, 0, 0, (void*)0, "03output_code.nc", 1599, 759));
            come_call_finalizer(list$1sType$ph$p_finalize, _o2_saved_18, (void*)0, (void*)0, 0, 0, 0, (void*)0, "03output_code.nc}", 1599, 760);
            come_call_finalizer(buffer_finalize, output, (void*)0, (void*)0, 0, 0, 0, (void*)0, "03output_code.nc}", 1599, 761);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "03output_code.nc", 1599, 762));
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "03output_code.nc", 1599, 763));
            return __result_obj__0;
        }
        __right_value0 = (void*)0;
        cvalue=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "03output_code.nc", 1601, 764);
        buffer_append_format(output,"))[%s]",cvalue->c_value);
        buffer_append_format(output,";\n");
        come_call_finalizer(sType_finalize, base_result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "03output_code.nc}", 1662, 765);
        (result_type_str = come_decrement_ref_count(result_type_str, (void*)0, (void*)0, 0, 0, (void*)0, "03output_code.nc", 1662, 766));
        come_call_finalizer(list$1sType$ph$p_finalize, _o2_saved_18, (void*)0, (void*)0, 0, 0, 0, (void*)0, "03output_code.nc}", 1662, 767);
        come_call_finalizer(CVALUE_finalize, cvalue, (void*)0, (void*)0, 0, 0, 0, (void*)0, "03output_code.nc}", 1662, 768);
    }
    else {
        if(is_gcc_builtin_float_type(fun->mResultType,info)) {
                        __right_value0 = (void*)0;
            __result_obj__0 = (char* )come_increment_ref_count(((char*)(__right_value0=xsprintf(""))), "03output_code.nc", 1608, 769);
            come_call_finalizer(buffer_finalize, output, (void*)0, (void*)0, 0, 0, 0, (void*)0, "03output_code.nc}", 1608, 770);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "03output_code.nc", 1608, 771));
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "03output_code.nc", 1608, 772));
            return __result_obj__0;
        }
        __right_value0 = (void*)0;
        result_type_str_85=(char* )come_increment_ref_count(make_type_name_string(fun->mResultType,info,(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0), "03output_code.nc", 1610, 773);
        if(string_operator_not_equals(fun->mAttribute,"")) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            buffer_append_str(output,((char*)(__right_value1=xsprintf("\%s ",((char* )(__right_value0=string_to_string(fun->mAttribute)))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "03output_code.nc", 1613, 774));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "03output_code.nc", 1613, 775));
        }
        if(fun->mStatic) {
            buffer_append_str(output,"static ");
        }
        if(fun->mInline) {
            buffer_append_str(output,"inline ");
        }
        buffer_append_str(output,result_type_str_85);
        if(string_operator_not_equals(fun->mMiddleAttribute,"")) {
            buffer_append_str(output," ");
            buffer_append_str(output,fun->mMiddleAttribute);
        }
        buffer_append_str(output," ");
        buffer_append_str(output,fun->mName);
        buffer_append_str(output,"(");
        i_86=0;
        for(_o2_saved_19=(struct list$1sType$ph*)come_increment_ref_count(fun->mParamTypes, "03output_code.nc", 1633, 776),it_87=list$1sType$ph_begin(_o2_saved_19)        ;!list$1sType$ph_end(_o2_saved_19);it_87=list$1sType$ph_next(_o2_saved_19)){
            __right_value0 = (void*)0;
            name_88=((char* )(__right_value0=list$1char$ph_operator_load_element(fun->mParamNames,i_86)));
            if(is_gcc_builtin_float_type(it_87,info)) {
                                __right_value0 = (void*)0;
                __result_obj__0 = (char* )come_increment_ref_count(((char*)(__right_value0=xsprintf(""))), "03output_code.nc", 1637, 777);
                (result_type_str_85 = come_decrement_ref_count(result_type_str_85, (void*)0, (void*)0, 0, 0, (void*)0, "03output_code.nc", 1637, 778));
                come_call_finalizer(list$1sType$ph$p_finalize, _o2_saved_19, (void*)0, (void*)0, 0, 0, 0, (void*)0, "03output_code.nc}", 1637, 779);
                come_call_finalizer(buffer_finalize, output, (void*)0, (void*)0, 0, 0, 0, (void*)0, "03output_code.nc}", 1637, 780);
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "03output_code.nc", 1637, 781));
                neo_current_frame = fr.prev;
                (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "03output_code.nc", 1637, 782));
                return __result_obj__0;
            }
            __right_value0 = (void*)0;
            str_89=(char* )come_increment_ref_count(make_define_var(it_87,name_88,info,(_Bool)1,(_Bool)0), "03output_code.nc", 1640, 783);
            buffer_append_str(output,str_89);
            if(i_86==list$1sType$ph_length(fun->mParamTypes)-1) {
                if(fun->mVarArgs) {
                    buffer_append_str(output,", ...");
                }
            }
            else {
                buffer_append_str(output,", ");
            }
            i_86++;
            (str_89 = come_decrement_ref_count(str_89, (void*)0, (void*)0, 0, 0, (void*)0, "03output_code.nc", 1654, 784));
        }
        if(string_operator_not_equals(fun->mFunAttribute,"")) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            buffer_append_str(output,((char*)(__right_value1=xsprintf(") \%s;\n",((char* )(__right_value0=string_to_string(fun->mFunAttribute)))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "03output_code.nc", 1655, 785));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "03output_code.nc", 1655, 786));
        }
        else {
            buffer_append_str(output,");\n");
        }
        (result_type_str_85 = come_decrement_ref_count(result_type_str_85, (void*)0, (void*)0, 0, 0, (void*)0, "03output_code.nc", 1662, 787));
        come_call_finalizer(list$1sType$ph$p_finalize, _o2_saved_19, (void*)0, (void*)0, 0, 0, 0, (void*)0, "03output_code.nc}", 1662, 788);
    }
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=buffer_to_string(output))), "03output_code.nc", 1662, 789);
    come_call_finalizer(buffer_finalize, output, (void*)0, (void*)0, 0, 0, 0, (void*)0, "03output_code.nc}", 1662, 790);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "03output_code.nc", 1662, 791));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "03output_code.nc", 1662, 792));
    return __result_obj__0;
}

static char*  header_lambda(struct sType*  lambda_type  , char*  name  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "header_lambda"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer*  output  ;
    char*  result_type_str  ;
    int i;
    struct sNode* node;
    _Bool Value;
    struct CVALUE*  cvalue  ;
    int i_90;
    struct list$1sType$ph* _o2_saved_20;
    struct sType*  it  ;
    char* name_91;
    char*  str  ;
    void* __right_value2 = (void*)0;
    char*  __result_obj__0  ;
    output=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "03output_code.nc", 1667, 793, "struct buffer* "), "03output_code.nc", 1667, 794)), "03output_code.nc", 1667, 795);
    __right_value0 = (void*)0;
    result_type_str=(char* )come_increment_ref_count(make_type_name_string(lambda_type->mResultType,info,(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0), "03output_code.nc", 1669, 796);
    buffer_append_str(output,result_type_str);
    buffer_append_str(output," ");
    buffer_append_str(output,name);
    if(list$1sNode$ph_length(lambda_type->mArrayNum)>0) {
        for(i=0        ;i<list$1sNode$ph_length(lambda_type->mArrayNum);i++){
            buffer_append_str(output,"[");
            __right_value0 = (void*)0;
            node=(struct sNode*)come_increment_ref_count(list$1sNode$ph_operator_load_element(lambda_type->mArrayNum,i), "03output_code.nc", 1678, 797);
            Value=node_compile(node,info);
            if(!Value) {
                err_msg(info,"invalid array num");
                exit(2);
            }
            __right_value0 = (void*)0;
            cvalue=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "03output_code.nc", 1685, 798);
            buffer_append_format(output,"%s",cvalue->c_value);
            buffer_append_str(output,"]");
            ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "03output_code.nc", 1690, 799):(void*)0);
            come_call_finalizer(CVALUE_finalize, cvalue, (void*)0, (void*)0, 0, 0, 0, (void*)0, "03output_code.nc}", 1690, 800);
        }
    }
    buffer_append_str(output,"(");
    i_90=0;
    for(_o2_saved_20=(struct list$1sType$ph*)come_increment_ref_count(lambda_type->mParamTypes, "03output_code.nc", 1694, 801),it=list$1sType$ph_begin(_o2_saved_20)    ;!list$1sType$ph_end(_o2_saved_20);it=list$1sType$ph_next(_o2_saved_20)){
        __right_value0 = (void*)0;
        name_91=((char* )(__right_value0=list$1char$ph_operator_load_element(lambda_type->mParamNames,i_90)));
        __right_value0 = (void*)0;
        str=(char* )come_increment_ref_count(make_define_var(it,name_91,info,(_Bool)1,(_Bool)0), "03output_code.nc", 1697, 802);
        buffer_append_str(output,str);
        if(i_90==list$1sType$ph_length(lambda_type->mParamTypes)-1) {
            if(lambda_type->mVarArgs) {
                buffer_append_str(output,", ...");
            }
        }
        else {
            buffer_append_str(output,", ");
        }
        i_90++;
        (str = come_decrement_ref_count(str, (void*)0, (void*)0, 0, 0, (void*)0, "03output_code.nc", 1711, 803));
    }
    if(lambda_type->mAttribute) {
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        buffer_append_str(output,((char* )(__right_value2=string_operator_add(((char* )(__right_value1=charp_operator_add(" ",lambda_type->mAttribute))),");\n"))));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "03output_code.nc", 1712, 804));
        (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0, "03output_code.nc", 1712, 805));
    }
    else {
        buffer_append_str(output,");\n");
    }
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=buffer_to_string(output))), "03output_code.nc", 1718, 806);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "03output_code.nc", 1718, 807));
    come_call_finalizer(buffer_finalize, output, (void*)0, (void*)0, 0, 0, 0, (void*)0, "03output_code.nc}", 1718, 808);
    (result_type_str = come_decrement_ref_count(result_type_str, (void*)0, (void*)0, 0, 0, (void*)0, "03output_code.nc", 1718, 809));
    come_call_finalizer(list$1sType$ph$p_finalize, _o2_saved_20, (void*)0, (void*)0, 0, 0, 0, (void*)0, "03output_code.nc}", 1718, 810);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "03output_code.nc", 1718, 811));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "03output_code.nc", 1718, 812));
    return __result_obj__0;
}

void add_come_code(struct sInfo*  info  , const char* msg, ...)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "add_come_code"; neo_current_frame = &fr;
    char* msg2;
    __builtin_va_list  args  ;
    int len;
    int i;
    void* __right_value0 = (void*)0;
    int i_92;
    int i_93;
    memset(&msg2, 0, sizeof(msg2));
    memset(&i, 0, sizeof(i));
    memset(&i_92, 0, sizeof(i_92));
    memset(&i_93, 0, sizeof(i_93));
    if(info->no_output_come_code) {
                neo_current_frame = fr.prev;
        return;
    }
    __builtin_va_start(args,msg);
    len=vasprintf(&msg2,msg,args);
    __builtin_va_end(args);
    if(info->if_expression_buffer) {
        if(!info->in_conditional) {
            for(i=0            ;i<info->block_level;i++){
                buffer_append_str(info->if_expression_buffer,"    ");
            }
        }
        buffer_append_str(info->if_expression_buffer,((char* )(__right_value0=xsprintf("%s",msg2))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "03output_code.nc", 1741, 813));
    }
    else if(info->loop_expression_buffer) {
        if(!info->in_conditional) {
            for(i_92=0            ;i_92<info->block_level;i_92++){
                buffer_append_str(info->loop_expression_buffer,"    ");
            }
        }
        __right_value0 = (void*)0;
        buffer_append_str(info->loop_expression_buffer,((char* )(__right_value0=xsprintf("%s",msg2))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "03output_code.nc", 1751, 814));
    }
    else if(info->paren_block_buffer) {
        __right_value0 = (void*)0;
        buffer_append_str(info->paren_block_buffer,((char* )(__right_value0=xsprintf("%s",msg2))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "03output_code.nc", 1754, 815));
    }
    else if(info->defer_block) {
        if(info->come_fun) {
            __right_value0 = (void*)0;
            buffer_append_str(info->come_fun->mSourceEnd,((char* )(__right_value0=xsprintf("%s",msg2))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "03output_code.nc", 1758, 816));
        }
    }
    else if(info->come_fun) {
        if(!info->in_conditional) {
            for(i_93=0            ;i_93<info->block_level;i_93++){
                buffer_append_str(info->come_fun->mSource,"    ");
            }
        }
        __right_value0 = (void*)0;
        buffer_append_str(info->come_fun->mSource,((char* )(__right_value0=xsprintf("%s",msg2))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "03output_code.nc", 1769, 817));
    }
    else {
        __right_value0 = (void*)0;
        buffer_append_str(info->module->mSourceHead,((char* )(__right_value0=xsprintf("%s",msg2))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "03output_code.nc", 1772, 818));
    }
    free(msg2);
    neo_current_frame = fr.prev;
}

void add_come_code_no_indent(struct sInfo*  info  , const char* msg, ...)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "add_come_code_no_indent"; neo_current_frame = &fr;
    char* msg2;
    __builtin_va_list  args  ;
    int len;
    void* __right_value0 = (void*)0;
    int i;
    memset(&msg2, 0, sizeof(msg2));
    memset(&i, 0, sizeof(i));
    if(info->no_output_come_code) {
                neo_current_frame = fr.prev;
        return;
    }
    __builtin_va_start(args,msg);
    len=vasprintf(&msg2,msg,args);
    __builtin_va_end(args);
    if(info->if_expression_buffer) {
        if(!info->in_conditional) {
            buffer_append_str(info->if_expression_buffer,"    ");
        }
        buffer_append_str(info->if_expression_buffer,((char* )(__right_value0=xsprintf("%s",msg2))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "03output_code.nc", 1795, 819));
    }
    else if(info->loop_expression_buffer) {
        if(!info->in_conditional) {
            for(i=0            ;i<info->block_level;i++){
                buffer_append_str(info->loop_expression_buffer,"    ");
            }
        }
        __right_value0 = (void*)0;
        buffer_append_str(info->loop_expression_buffer,((char* )(__right_value0=xsprintf("%s",msg2))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "03output_code.nc", 1805, 820));
    }
    else if(info->paren_block_buffer) {
        __right_value0 = (void*)0;
        buffer_append_str(info->paren_block_buffer,((char* )(__right_value0=xsprintf("%s",msg2))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "03output_code.nc", 1808, 821));
    }
    else if(info->defer_block) {
        if(info->come_fun) {
            __right_value0 = (void*)0;
            buffer_append_str(info->come_fun->mSourceEnd,((char* )(__right_value0=xsprintf("%s",msg2))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "03output_code.nc", 1812, 822));
        }
    }
    else if(info->come_fun) {
        if(!info->in_conditional) {
            buffer_append_str(info->come_fun->mSource,"    ");
        }
        __right_value0 = (void*)0;
        buffer_append_str(info->come_fun->mSource,((char* )(__right_value0=xsprintf("%s",msg2))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "03output_code.nc", 1820, 823));
    }
    else {
        __right_value0 = (void*)0;
        buffer_append_str(info->module->mSourceHead,((char* )(__right_value0=xsprintf("%s",msg2))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "03output_code.nc", 1823, 824));
    }
    free(msg2);
    neo_current_frame = fr.prev;
}

_Bool is_contained_generics_funcstion(struct sFun*  fun  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "is_contained_generics_funcstion"; neo_current_frame = &fr;
    struct list$1sType$ph* _o2_saved_21;
    struct sType*  it  ;
    struct sType*  type_  ;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sType*  result_type  ;
    struct sType*  result_type2  ;
    struct sType*  __dec_obj49  ;
    struct sType*  __dec_obj50  ;
    memset(&type_, 0, sizeof(type_));
    memset(&result_type2, 0, sizeof(result_type2));
    for(_o2_saved_21=(struct list$1sType$ph*)come_increment_ref_count(fun->mParamTypes, "03output_code.nc", 1831, 825),it=list$1sType$ph_begin(_o2_saved_21)    ;!list$1sType$ph_end(_o2_saved_21);it=list$1sType$ph_next(_o2_saved_21)){
        if(it->mNoSolvedGenericsType) {
            type_=it->mNoSolvedGenericsType;
        }
        else {
            type_=it;
        }
        if(is_contained_generics_class(type_,info)) {
                        __result_obj__0 = (_Bool)1;
            come_call_finalizer(list$1sType$ph$p_finalize, _o2_saved_21, (void*)0, (void*)0, 0, 0, 0, (void*)0, "03output_code.nc}", 1840, 826);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
    }
    result_type=(struct sType* )come_increment_ref_count(sType_clone(fun->mResultType), "03output_code.nc", 1843, 827);
    if(result_type->mNoSolvedGenericsType) {
        __right_value0 = (void*)0;
        __dec_obj49=result_type2,
        result_type2=(struct sType* )come_increment_ref_count(sType_clone(result_type->mNoSolvedGenericsType), "03output_code.nc", 1847, 829);
        come_call_finalizer(sType_finalize, __dec_obj49,(void*)0, (void*)0, 0, 0, 0, (void*)0, "03output_code.nc", 1847, 828);
    }
    else {
        __right_value0 = (void*)0;
        __dec_obj50=result_type2,
        result_type2=(struct sType* )come_increment_ref_count(sType_clone(result_type), "03output_code.nc", 1850, 831);
        come_call_finalizer(sType_finalize, __dec_obj50,(void*)0, (void*)0, 0, 0, 0, (void*)0, "03output_code.nc", 1850, 830);
    }
    if(is_contained_generics_class(result_type2,info)) {
                __result_obj__0 = (_Bool)1;
        come_call_finalizer(list$1sType$ph$p_finalize, _o2_saved_21, (void*)0, (void*)0, 0, 0, 0, (void*)0, "03output_code.nc}", 1854, 832);
        come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "03output_code.nc}", 1854, 833);
        come_call_finalizer(sType_finalize, result_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "03output_code.nc}", 1854, 834);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
        __result_obj__0 = (_Bool)0;
    come_call_finalizer(list$1sType$ph$p_finalize, _o2_saved_21, (void*)0, (void*)0, 0, 0, 0, (void*)0, "03output_code.nc}", 1857, 835);
    come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "03output_code.nc}", 1857, 836);
    come_call_finalizer(sType_finalize, result_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "03output_code.nc}", 1857, 837);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

_Bool output_source_file(struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "output_source_file"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    void* __right_value2 = (void*)0;
    struct sFun*  main_fun  ;
    _Bool main_module;
    struct map$2char$phsFun$ph* _o2_saved_22;
    char*  it  ;
    struct sFun*  it2  ;
    struct sFun*  new_fun  ;
    char*  output_file_name  ;
    struct _IO_FILE*  f  ;
    struct map$2char$phbuffer$ph* _o2_saved_23;
    char*  it_109  ;
    struct buffer*  buf  ;
    struct map$2char$phbuffer$ph* _o2_saved_24;
    char*  it_111  ;
    struct buffer*  buf_112  ;
    struct map$2char$phbuffer$ph* _o2_saved_25;
    char*  it_113  ;
    struct buffer*  buf_114  ;
    struct map$2char$phbuffer$ph* _o2_saved_26;
    char*  it_115  ;
    struct buffer*  buf_116  ;
    struct map$2char$phbuffer$ph* _o2_saved_27;
    char*  it_117  ;
    struct buffer*  buf_118  ;
    struct map$2char$phsFun$ph* _o2_saved_28;
    char*  it_119  ;
    struct sFun*  it2_120  ;
    _Bool contained_generics;
    char*  header  ;
    struct map$2char$phchar$ph* _o2_saved_29;
    char*  it_122  ;
    char* str;
    struct map$2char$phsFun$ph* _o2_saved_30;
    char*  it_125  ;
    struct sFun*  it2_126  ;
    _Bool contained_generics_127;
    char*  output  ;
    struct map$2char$phsFun$ph* _o2_saved_31;
    char*  it_128  ;
    struct sFun*  it2_129  ;
    _Bool contained_generics_130;
    char*  output_131  ;
    struct buffer*  portable_source  ;
    char*  normalized  ;
    struct _IO_FILE*  f2  ;
    _Bool __result_obj__0;
    main_fun=((struct sFun* )(__right_value2=map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value1=xsprintf("main"))))));
    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "03output_code.nc", 1862, 894));
    main_module=(_Bool)0;
    if(main_fun) {
        if(!main_fun->mExternal) {
            main_module=(_Bool)1;
        }
    }
    if(gComeUniq) {
        main_module=(_Bool)1;
    }
    if(main_module) {
        for(_o2_saved_22=(struct map$2char$phsFun$ph*)come_increment_ref_count(info->uniq_funcs, "03output_code.nc", 1875, 895),it=map$2char$phsFun$ph_begin(_o2_saved_22)        ;!map$2char$phsFun$ph_end(_o2_saved_22);it=map$2char$phsFun$ph_next(_o2_saved_22)){
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            it2=((struct sFun* )(__right_value2=map$2char$phsFun$ph_operator_load_element(info->uniq_funcs,((char* )(__right_value1=__builtin_string(it))))));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "03output_code.nc", 1876, 896));
            __right_value0 = (void*)0;
            new_fun=(struct sFun* )come_increment_ref_count(compile_uniq_function(it2,info), "03output_code.nc", 1877, 897);
            if(new_fun==((void*)0)) {
                err_msg(info,"compile %s failed");
                exit(3);
            }
            __right_value0 = (void*)0;
            map$2char$phsFun$ph_put(info->funcs,(char* )come_increment_ref_count(__builtin_string(it), "03output_code.nc", 1884, 956),(struct sFun* )come_increment_ref_count(new_fun, "03output_code.nc", 1884, 957),(_Bool)0);
            come_call_finalizer(sFun_finalize, new_fun, (void*)0, (void*)0, 0, 0, 0, (void*)0, "03output_code.nc}", 1886, 958);
        }
        come_call_finalizer(map$2char$phsFun$ph$p_finalize, _o2_saved_22, (void*)0, (void*)0, 0, 0, 0, (void*)0, "03output_code.nc}", 1889, 963);
    }
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    output_file_name=(char* )come_increment_ref_count(xsprintf("%s.c",((char* )(__right_value0=xnoextname(info->sname)))), "03output_code.nc", 1889, 964);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "03output_code.nc", 1889, 965));
    f=fopen(output_file_name,"w");
    if(f==((void*)0)) {
        die("fopen");
    }
    fprintf(f,"/// c_include definition ///\n");
    for(_o2_saved_23=(struct map$2char$phbuffer$ph*)come_increment_ref_count(info->c_include_definition, "03output_code.nc", 1895, 966),it_109=map$2char$phbuffer$ph_begin(_o2_saved_23)    ;!map$2char$phbuffer$ph_end(_o2_saved_23);it_109=map$2char$phbuffer$ph_next(_o2_saved_23)){
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        buf=((struct buffer* )(__right_value2=map$2char$phbuffer$ph_operator_load_element(info->c_include_definition,((char* )(__right_value1=__builtin_string(it_109))))));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "03output_code.nc", 1896, 997));
        __right_value0 = (void*)0;
        fprintf(f,"%s\n",((char* )(__right_value0=buffer_to_string(buf))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "03output_code.nc", 1897, 998));
    }
    fprintf(f,"/// typedef definition ///\n");
    for(_o2_saved_24=(struct map$2char$phbuffer$ph*)come_increment_ref_count(info->typedef_definition, "03output_code.nc", 1901, 999),it_111=map$2char$phbuffer$ph_begin(_o2_saved_24)    ;!map$2char$phbuffer$ph_end(_o2_saved_24);it_111=map$2char$phbuffer$ph_next(_o2_saved_24)){
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        buf_112=((struct buffer* )(__right_value2=map$2char$phbuffer$ph_operator_load_element(info->typedef_definition,((char* )(__right_value1=__builtin_string(it_111))))));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "03output_code.nc", 1902, 1000));
        __right_value0 = (void*)0;
        fprintf(f,"%s\n",((char* )(__right_value0=buffer_to_string(buf_112))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "03output_code.nc", 1903, 1001));
    }
    fprintf(f,"/// previous struct definition ///\n");
    for(_o2_saved_25=(struct map$2char$phbuffer$ph*)come_increment_ref_count(info->previous_struct_definition, "03output_code.nc", 1907, 1002),it_113=map$2char$phbuffer$ph_begin(_o2_saved_25)    ;!map$2char$phbuffer$ph_end(_o2_saved_25);it_113=map$2char$phbuffer$ph_next(_o2_saved_25)){
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        buf_114=((struct buffer* )(__right_value2=map$2char$phbuffer$ph_operator_load_element(info->previous_struct_definition,((char* )(__right_value1=__builtin_string(it_113))))));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "03output_code.nc", 1908, 1003));
        __right_value0 = (void*)0;
        fprintf(f,"%s\n",((char* )(__right_value0=buffer_to_string(buf_114))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "03output_code.nc", 1909, 1004));
    }
    fprintf(f,"/// struct definition ///\n");
    for(_o2_saved_26=(struct map$2char$phbuffer$ph*)come_increment_ref_count(info->struct_definition, "03output_code.nc", 1913, 1005),it_115=map$2char$phbuffer$ph_begin(_o2_saved_26)    ;!map$2char$phbuffer$ph_end(_o2_saved_26);it_115=map$2char$phbuffer$ph_next(_o2_saved_26)){
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        buf_116=((struct buffer* )(__right_value2=map$2char$phbuffer$ph_operator_load_element(info->struct_definition,((char* )(__right_value1=__builtin_string(it_115))))));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "03output_code.nc", 1914, 1006));
        __right_value0 = (void*)0;
        fprintf(f,"%s\n",((char* )(__right_value0=buffer_to_string(buf_116))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "03output_code.nc", 1915, 1007));
    }
    fprintf(f,"/// variable definition ///\n");
    for(_o2_saved_27=(struct map$2char$phbuffer$ph*)come_increment_ref_count(info->var_definition, "03output_code.nc", 1919, 1008),it_117=map$2char$phbuffer$ph_begin(_o2_saved_27)    ;!map$2char$phbuffer$ph_end(_o2_saved_27);it_117=map$2char$phbuffer$ph_next(_o2_saved_27)){
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        buf_118=((struct buffer* )(__right_value2=map$2char$phbuffer$ph_operator_load_element(info->var_definition,((char* )(__right_value1=__builtin_string(it_117))))));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "03output_code.nc", 1920, 1009));
        __right_value0 = (void*)0;
        fprintf(f,"%s\n",((char* )(__right_value0=buffer_to_string(buf_118))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "03output_code.nc", 1921, 1010));
    }
    fprintf(f,"// source head\n");
    __right_value0 = (void*)0;
    fprintf(f,"%s\n",((char* )(__right_value0=buffer_to_string(info->module->mSourceHead))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "03output_code.nc", 1925, 1011));
    fprintf(f,"// header function\n");
    for(_o2_saved_28=(struct map$2char$phsFun$ph*)come_increment_ref_count(info->funcs, "03output_code.nc", 1928, 1012),it_119=map$2char$phsFun$ph_begin(_o2_saved_28)    ;!map$2char$phsFun$ph_end(_o2_saved_28);it_119=map$2char$phsFun$ph_next(_o2_saved_28)){
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        it2_120=((struct sFun* )(__right_value2=map$2char$phsFun$ph_operator_load_element(info->funcs,((char* )(__right_value1=__builtin_string(it_119))))));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "03output_code.nc", 1929, 1013));
        contained_generics=is_contained_generics_funcstion(it2_120,info);
        if(!contained_generics) {
            __right_value0 = (void*)0;
            header=(char* )come_increment_ref_count(header_function(it2_120,info), "03output_code.nc", 1934, 1014);
            if(it2_120->mInline) {
            }
            else if(string_operator_not_equals(it_119,"__builtin_va_start")&&string_operator_not_equals(it_119,"__builtin_va_end")) {
                fprintf(f,"%s",header);
            }
            (header = come_decrement_ref_count(header, (void*)0, (void*)0, 0, 0, (void*)0, "03output_code.nc", 1942, 1015));
        }
    }
    fprintf(f,"// uniq global variable\n");
    if(main_module) {
        for(_o2_saved_29=(struct map$2char$phchar$ph*)come_increment_ref_count(info->uniq_definition, "03output_code.nc", 1946, 1016),it_122=map$2char$phchar$ph_begin(_o2_saved_29)        ;!map$2char$phchar$ph_end(_o2_saved_29);it_122=map$2char$phchar$ph_next(_o2_saved_29)){
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            str=((char* )(__right_value2=map$2char$phchar$ph_operator_load_element(info->uniq_definition,((char* )(__right_value1=__builtin_string(it_122))))));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "03output_code.nc", 1947, 1047));
            fprintf(f,"%s\n",str);
        }
        come_call_finalizer(map$2char$phchar$ph$p_finalize, _o2_saved_29, (void*)0, (void*)0, 0, 0, 0, (void*)0, "03output_code.nc}", 1952, 1052);
    }
    fprintf(f,"// inline function\n");
    for(_o2_saved_30=(struct map$2char$phsFun$ph*)come_increment_ref_count(info->funcs, "03output_code.nc", 1953, 1053),it_125=map$2char$phsFun$ph_begin(_o2_saved_30)    ;!map$2char$phsFun$ph_end(_o2_saved_30);it_125=map$2char$phsFun$ph_next(_o2_saved_30)){
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        it2_126=((struct sFun* )(__right_value2=map$2char$phsFun$ph_operator_load_element(info->funcs,((char* )(__right_value1=__builtin_string(it_125))))));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "03output_code.nc", 1954, 1054));
        contained_generics_127=is_contained_generics_funcstion(it2_126,info);
        if(contained_generics_127) {
        }
        else if(it2_126->mInline) {
            __right_value0 = (void*)0;
            output=(char* )come_increment_ref_count(output_function(it2_126,info), "03output_code.nc", 1960, 1055);
            fprintf(f,"%s",output);
            (output = come_decrement_ref_count(output, (void*)0, (void*)0, 0, 0, (void*)0, "03output_code.nc", 1963, 1056));
        }
    }
    fprintf(f,"\n");
    fprintf(f,"// body function\n");
    for(_o2_saved_31=(struct map$2char$phsFun$ph*)come_increment_ref_count(info->funcs, "03output_code.nc", 1968, 1057),it_128=map$2char$phsFun$ph_begin(_o2_saved_31)    ;!map$2char$phsFun$ph_end(_o2_saved_31);it_128=map$2char$phsFun$ph_next(_o2_saved_31)){
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        it2_129=((struct sFun* )(__right_value2=map$2char$phsFun$ph_operator_load_element(info->funcs,((char* )(__right_value1=__builtin_string(it_128))))));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "03output_code.nc", 1969, 1058));
        contained_generics_130=is_contained_generics_funcstion(it2_129,info);
        if(contained_generics_130) {
        }
        else if(it2_129->mExternal) {
        }
        else if(!main_module&&it2_129->mUniq) {
        }
        else if(it2_129->mInline) {
        }
        else {
            __right_value0 = (void*)0;
            output_131=(char* )come_increment_ref_count(output_function(it2_129,info), "03output_code.nc", 1982, 1059);
            fprintf(f,"%s",output_131);
            fprintf(f,"\n");
            (output_131 = come_decrement_ref_count(output_131, (void*)0, (void*)0, 0, 0, (void*)0, "03output_code.nc", 1988, 1060));
        }
    }
    fclose(f);
    if(gPortableC) {
        __right_value0 = (void*)0;
        portable_source=(struct buffer* )come_increment_ref_count(charp_read(output_file_name), "03output_code.nc", 1993, 1061);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        normalized=(char* )come_increment_ref_count(normalize_portable_c_source(((char* )(__right_value0=buffer_to_string(portable_source)))), "03output_code.nc", 1994, 1062);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "03output_code.nc", 1994, 1063));
        f2=fopen(output_file_name,"w");
        if(f2==((void*)0)) {
            die("fopen");
        }
        fwrite(normalized,1,string_length(normalized),f2);
        fclose(f2);
        come_call_finalizer(buffer_finalize, portable_source, (void*)0, (void*)0, 0, 0, 0, (void*)0, "03output_code.nc}", 2003, 1064);
        (normalized = come_decrement_ref_count(normalized, (void*)0, (void*)0, 0, 0, (void*)0, "03output_code.nc", 2003, 1065));
    }
        __result_obj__0 = (_Bool)1;
    (output_file_name = come_decrement_ref_count(output_file_name, (void*)0, (void*)0, 0, 0, (void*)0, "03output_code.nc", 2003, 1066));
    come_call_finalizer(map$2char$phbuffer$ph$p_finalize, _o2_saved_23, (void*)0, (void*)0, 0, 0, 0, (void*)0, "03output_code.nc}", 2003, 1071);
    come_call_finalizer(map$2char$phbuffer$ph$p_finalize, _o2_saved_24, (void*)0, (void*)0, 0, 0, 0, (void*)0, "03output_code.nc}", 2003, 1072);
    come_call_finalizer(map$2char$phbuffer$ph$p_finalize, _o2_saved_25, (void*)0, (void*)0, 0, 0, 0, (void*)0, "03output_code.nc}", 2003, 1073);
    come_call_finalizer(map$2char$phbuffer$ph$p_finalize, _o2_saved_26, (void*)0, (void*)0, 0, 0, 0, (void*)0, "03output_code.nc}", 2003, 1074);
    come_call_finalizer(map$2char$phbuffer$ph$p_finalize, _o2_saved_27, (void*)0, (void*)0, 0, 0, 0, (void*)0, "03output_code.nc}", 2003, 1075);
    come_call_finalizer(map$2char$phsFun$ph$p_finalize, _o2_saved_28, (void*)0, (void*)0, 0, 0, 0, (void*)0, "03output_code.nc}", 2003, 1076);
    come_call_finalizer(map$2char$phsFun$ph$p_finalize, _o2_saved_30, (void*)0, (void*)0, 0, 0, 0, (void*)0, "03output_code.nc}", 2003, 1077);
    come_call_finalizer(map$2char$phsFun$ph$p_finalize, _o2_saved_31, (void*)0, (void*)0, 0, 0, 0, (void*)0, "03output_code.nc}", 2003, 1078);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sFun*  map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char*  key  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsFun$ph$p_operator_load_element"; neo_current_frame = &fr;
    struct sFun*  default_value  ;
    struct sFun*  __result_obj__0  ;
    unsigned int hash;
    unsigned int it;
    memset(&default_value,0,sizeof(struct sFun* ));
    if(self==((void*)0)) {
                __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3513, 838);
        come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3513, 865);
        neo_current_frame = fr.prev;
        come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3513, 866);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char* )key))%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if(string_equals(self->keys[it],key)) {
                                __result_obj__0 = (struct sFun* )come_increment_ref_count(self->items[it], "/usr/local/include/neo-c.h", 3524, 867);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3524, 868);
                neo_current_frame = fr.prev;
                come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3524, 869);
                return __result_obj__0;
            }
            it++;
            if(it>=self->size) {
                it=0;
            }
            else if(it==hash) {
                                __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3533, 870);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3533, 871);
                neo_current_frame = fr.prev;
                come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3533, 872);
                return __result_obj__0;
            }
        }
        else {
                        __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3537, 873);
            come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3537, 874);
            neo_current_frame = fr.prev;
            come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3537, 875);
            return __result_obj__0;
        }
    }
        __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3541, 876);
    come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3541, 877);
    neo_current_frame = fr.prev;
    come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3541, 878);
    return __result_obj__0;
}

static void sFun_finalize(struct sFun*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sFun_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 2, 839));
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mResultType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 3, 840);
    }
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 4, 841);
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamNames, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 5, 842);
    }
    if(self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 6, 843);
    }
    if(self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mLambdaType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 7, 844);
    }
    if(self!=((void*)0)&&self->mAllVar!=((void*)0)) {
        come_call_finalizer(list$1sVar$ph$p_finalize, self->mAllVar, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 8, 851);
    }
    if(self!=((void*)0)&&self->mBlock!=((void*)0)) {
        come_call_finalizer(sBlock_finalize, self->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 9, 854);
    }
    if(self!=((void*)0)&&self->mTextBlock!=((void*)0)) {
        (self->mTextBlock = come_decrement_ref_count(self->mTextBlock, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 10, 855));
    }
    if(self!=((void*)0)&&self->mTextBlockSName!=((void*)0)) {
        (self->mTextBlockSName = come_decrement_ref_count(self->mTextBlockSName, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 11, 856));
    }
    if(self!=((void*)0)&&self->mSource!=((void*)0)) {
        come_call_finalizer(buffer_finalize, self->mSource, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 12, 857);
    }
    if(self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        come_call_finalizer(buffer_finalize, self->mSourceHead, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 13, 858);
    }
    if(self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        come_call_finalizer(buffer_finalize, self->mSourceHead2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 14, 859);
    }
    if(self!=((void*)0)&&self->mSourceEnd!=((void*)0)) {
        come_call_finalizer(buffer_finalize, self->mSourceEnd, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 15, 860);
    }
    if(self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 16, 861));
    }
    if(self!=((void*)0)&&self->mMiddleAttribute!=((void*)0)) {
        (self->mMiddleAttribute = come_decrement_ref_count(self->mMiddleAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 17, 862));
    }
    if(self!=((void*)0)&&self->mFunAttribute!=((void*)0)) {
        (self->mFunAttribute = come_decrement_ref_count(self->mFunAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 18, 863));
    }
    if(self!=((void*)0)&&self->mAsmFun!=((void*)0)) {
        (self->mAsmFun = come_decrement_ref_count(self->mAsmFun, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 19, 864));
    }
            neo_current_frame = fr.prev;
}

static void list$1sVar$ph$p_finalize(struct list$1sVar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sVar$ph$p_finalize"; neo_current_frame = &fr;
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
        come_call_finalizer(list_item$1sVar$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1504, 850);
    }
            neo_current_frame = fr.prev;
}

static void list_item$1sVar$ph$p_finalize(struct list_item$1sVar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1sVar$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer(sVar_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "list_item$1sVar$ph$p_finalize}", 2, 849);
    }
            neo_current_frame = fr.prev;
}

static void sVar_finalize(struct sVar*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sVar_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, (void*)0, "sVar_finalize", 2, 845));
    }
    if(self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        (self->mCValueName = come_decrement_ref_count(self->mCValueName, (void*)0, (void*)0, 0, 0, (void*)0, "sVar_finalize", 3, 846));
    }
    if(self!=((void*)0)&&self->mType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sVar_finalize}", 4, 847);
    }
    if(self!=((void*)0)&&self->mFunName!=((void*)0)) {
        (self->mFunName = come_decrement_ref_count(self->mFunName, (void*)0, (void*)0, 0, 0, (void*)0, "sVar_finalize", 5, 848));
    }
            neo_current_frame = fr.prev;
}

static void sBlock_finalize(struct sBlock*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sBlock_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->mNodes!=((void*)0)) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mNodes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sBlock_finalize}", 2, 852);
    }
    if(self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        come_call_finalizer(sVarTable_finalize, self->mVarTable, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sBlock_finalize}", 3, 853);
    }
            neo_current_frame = fr.prev;
}

static struct sFun*  map$2char$phsFun$ph_operator_load_element(struct map$2char$phsFun$ph* self, char*  key  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsFun$ph_operator_load_element"; neo_current_frame = &fr;
    struct sFun*  default_value  ;
    struct sFun*  __result_obj__0  ;
    unsigned int hash;
    unsigned int it;
    memset(&default_value,0,sizeof(struct sFun* ));
    if(self==((void*)0)) {
                __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3513, 879);
        come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3513, 880);
        neo_current_frame = fr.prev;
        come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3513, 881);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char* )key))%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if(string_equals(self->keys[it],key)) {
                                __result_obj__0 = (struct sFun* )come_increment_ref_count(self->items[it], "/usr/local/include/neo-c.h", 3524, 882);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3524, 883);
                neo_current_frame = fr.prev;
                come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3524, 884);
                return __result_obj__0;
            }
            it++;
            if(it>=self->size) {
                it=0;
            }
            else if(it==hash) {
                                __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3533, 885);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3533, 886);
                neo_current_frame = fr.prev;
                come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3533, 887);
                return __result_obj__0;
            }
        }
        else {
                        __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3537, 888);
            come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3537, 889);
            neo_current_frame = fr.prev;
            come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3537, 890);
            return __result_obj__0;
        }
    }
        __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3541, 891);
    come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3541, 892);
    neo_current_frame = fr.prev;
    come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3541, 893);
    return __result_obj__0;
}

static char*  map$2char$phsFun$ph_begin(struct map$2char$phsFun$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsFun$ph_begin"; neo_current_frame = &fr;
    char*  result  ;
    char*  __result_obj__0  ;
    char*  result_94  ;
    if(self==((void*)0)) {
        memset(&result,0,sizeof(char* ));
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
    memset(&result_94,0,sizeof(char* ));
        __result_obj__0 = result_94;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static _Bool map$2char$phsFun$ph_end(struct map$2char$phsFun$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsFun$ph_end"; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
            neo_current_frame = fr.prev;
}

static char*  map$2char$phsFun$ph_next(struct map$2char$phsFun$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsFun$ph_next"; neo_current_frame = &fr;
    char*  result  ;
    char*  __result_obj__0  ;
    char*  result_95  ;
    if(self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result,0,sizeof(char* ));
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
    memset(&result_95,0,sizeof(char* ));
        __result_obj__0 = result_95;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct map$2char$phsFun$ph* map$2char$phsFun$ph_put(struct map$2char$phsFun$ph* self, char*  key  , struct sFun*  item  , _Bool by_pointer)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsFun$ph_put"; neo_current_frame = &fr;
    struct map$2char$phsFun$ph* __result_obj__0;
    unsigned int hash;
    int it;
    _Bool same_key_exist;
    char*  it2  ;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3428, 898));
        come_call_finalizer(sFun_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3428, 899);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len*2>=self->size) {
        map$2char$phsFun$ph_rehash(self);
    }
    hash=string_get_hash_key(((char* )key))%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if((!by_pointer&&string_equals(self->keys[it],key))||(by_pointer&&self->keys[it]==key)) {
                if(1) {
                    (self->keys[it] = come_decrement_ref_count(self->keys[it], (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3443, 929));
                    list$1char$ph_remove(self->key_list,self->keys[it],(_Bool)0);
                    self->keys[it]=(char* )come_increment_ref_count(key, "/usr/local/include/neo-c.h", 3445, 934);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it],(_Bool)0);
                    self->keys[it]=key;
                }
                if(1) {
                    come_call_finalizer(sFun_finalize, self->items[it], (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3452, 935);
                    self->items[it]=(struct sFun* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 3453, 936);
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
                stackframe2(self);
                exit(2);
            }
        }
        else {
            self->item_existance[it]=(_Bool)1;
            if(1) {
                self->keys[it]=(char* )come_increment_ref_count(key, "/usr/local/include/neo-c.h", 3475, 937);
            }
            else {
                self->keys[it]=key;
            }
            if(1) {
                self->items[it]=(struct sFun* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 3481, 938);
            }
            else {
                self->items[it]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist=(_Bool)0;
    for(it2=list$1char$ph_begin(self->key_list)    ;!list$1char$ph_end(self->key_list);it2=list$1char$ph_next(self->key_list)){
        if((!by_pointer&&string_equals(it2,key))||(by_pointer&&it2==key)) {
            same_key_exist=(_Bool)1;
        }
    }
    if(!same_key_exist) {
        list$1char$ph_push_back(self->key_list,(char* )come_increment_ref_count(key, "/usr/local/include/neo-c.h", 3501, 953));
    }
        __result_obj__0 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3504, 954));
    come_call_finalizer(sFun_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3504, 955);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void map$2char$phsFun$ph_rehash(struct map$2char$phsFun$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsFun$ph_rehash"; neo_current_frame = &fr;
    int size;
    void* __right_value0 = (void*)0;
    char**  keys  ;
    struct sFun**  items  ;
    _Bool* item_existance;
    int len;
    char*  it  ;
    struct sFun*  default_value  ;
    struct sFun*  it2  ;
    unsigned int hash;
    int n;
    struct sFun*  default_value_96  ;
    size=self->size*10;
    keys=(char** )come_increment_ref_count(((char** )(__right_value0=(char* *)come_calloc(1, sizeof(char* )*(1*(size)), "/usr/local/include/neo-c.h", 3270, 900, "char** "))), "/usr/local/include/neo-c.h", 3270, 901);
    __right_value0 = (void*)0;
    items=(struct sFun** )come_increment_ref_count(((struct sFun** )(__right_value0=(struct sFun* *)come_calloc(1, sizeof(struct sFun* )*(1*(size)), "/usr/local/include/neo-c.h", 3271, 902, "struct sFun** "))), "/usr/local/include/neo-c.h", 3271, 903);
    __right_value0 = (void*)0;
    item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value0=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size)), "/usr/local/include/neo-c.h", 3272, 904, "_Bool*"))), "/usr/local/include/neo-c.h", 3272, 905);
    len=0;
    for(it=map$2char$phsFun$ph_begin(self)    ;!map$2char$phsFun$ph_end(self);it=map$2char$phsFun$ph_next(self)){
        memset(&default_value,0,sizeof(struct sFun* ));
        __right_value0 = (void*)0;
        it2=(struct sFun* )come_increment_ref_count(map$2char$phsFun$ph_at(self,it,(struct sFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3279, 921),(_Bool)0), "/usr/local/include/neo-c.h", 3279, 922);
        hash=string_get_hash_key(((char* )it))%size;
        n=hash;
        while((_Bool)1) {
            if(item_existance[n]) {
                n++;
                if(n>=size) {
                    n=0;
                }
                else if(n==hash) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe2(self);
                    exit(2);
                }
            }
            else {
                item_existance[n]=(_Bool)1;
                keys[n]=it;
                memset(&default_value_96,0,sizeof(struct sFun* ));
                __right_value0 = (void*)0;
                items[n]=((struct sFun* )(__right_value0=map$2char$phsFun$ph_at(self,it,(struct sFun* )come_increment_ref_count(default_value_96, "/usr/local/include/neo-c.h", 3302, 923),(_Bool)0)));
                len++;
                come_call_finalizer(sFun_finalize, default_value_96, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3305, 924);
                break;
                come_call_finalizer(sFun_finalize, default_value_96, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3307, 925);
            }
        }
        come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3310, 926);
        come_call_finalizer(sFun_finalize, it2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3310, 927);
    }
    come_free((char*)self->items);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3311, 928));
    come_free((char*)self->keys);
    self->keys=keys;
    self->items=items;
    self->item_existance=item_existance;
    self->size=size;
    self->len=len;
            neo_current_frame = fr.prev;
}

static struct sFun*  map$2char$phsFun$ph_at(struct map$2char$phsFun$ph* self, char*  key  , struct sFun*  default_value  , _Bool by_pointer)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsFun$ph_at"; neo_current_frame = &fr;
    struct sFun*  __result_obj__0  ;
    unsigned int hash;
    unsigned int it;
    if(self==((void*)0)) {
                __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3139, 906);
        come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3139, 907);
        neo_current_frame = fr.prev;
        come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3139, 908);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char* )key))%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if((!by_pointer&&string_equals(self->keys[it],key))||(by_pointer&&self->keys[it]==key)) {
                                __result_obj__0 = (struct sFun* )come_increment_ref_count(self->items[it], "/usr/local/include/neo-c.h", 3150, 909);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3150, 910);
                neo_current_frame = fr.prev;
                come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3150, 911);
                return __result_obj__0;
            }
            it++;
            if(it>=self->size) {
                it=0;
            }
            else if(it==hash) {
                                __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3159, 912);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3159, 913);
                neo_current_frame = fr.prev;
                come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3159, 914);
                return __result_obj__0;
            }
        }
        else {
                        __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3163, 915);
            come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3163, 916);
            neo_current_frame = fr.prev;
            come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3163, 917);
            return __result_obj__0;
        }
    }
        __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3167, 918);
    come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3167, 919);
    neo_current_frame = fr.prev;
    come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3167, 920);
    return __result_obj__0;
}

static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char*  item  , _Bool by_pointer)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_remove"; neo_current_frame = &fr;
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
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_delete"; neo_current_frame = &fr;
    struct list$1char$ph* __result_obj__0;
    int tmp;
    struct list_item$1char$ph* it;
    int i;
    struct list_item$1char$ph* prev_it;
    struct list_item$1char$ph* it_97;
    int i_98;
    struct list_item$1char$ph* prev_it_99;
    struct list_item$1char$ph* it_100;
    struct list_item$1char$ph* head_prev_it;
    struct list_item$1char$ph* tail_it;
    int i_101;
    struct list_item$1char$ph* prev_it_102;
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
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1932, 931);
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
        it_97=self->head;
        i_98=0;
        while(it_97!=((void*)0)) {
            if(i_98==head) {
                self->tail=it_97->prev;
                self->tail->next=((void*)0);
            }
            if(i_98>=head) {
                prev_it_99=it_97;
                it_97=it_97->next;
                i_98++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_99, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1962, 932);
                self->len--;
            }
            else {
                it_97=it_97->next;
                i_98++;
            }
        }
    }
    else {
        it_100=self->head;
        head_prev_it=((void*)0);
        tail_it=((void*)0);
        i_101=0;
        while(it_100!=((void*)0)) {
            if(i_101==head) {
                head_prev_it=it_100->prev;
            }
            if(i_101==tail) {
                tail_it=it_100;
            }
            if(i_101>=head&&i_101<tail) {
                prev_it_102=it_100;
                it_100=it_100->next;
                i_101++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_102, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1995, 933);
                self->len--;
            }
            else {
                it_100=it_100->next;
                i_101++;
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
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_reset"; neo_current_frame = &fr;
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
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1854, 930);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static char*  list$1char$ph_begin(struct list$1char$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_begin"; neo_current_frame = &fr;
    char*  result  ;
    char*  __result_obj__0  ;
    char*  result_103  ;
    if(self==((void*)0)) {
        memset(&result,0,sizeof(char* ));
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
    memset(&result_103,0,sizeof(char* ));
        __result_obj__0 = result_103;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static _Bool list$1char$ph_end(struct list$1char$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_end"; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self==((void*)0)||self->it==((void*)0);
        neo_current_frame = fr.prev;
}

static char*  list$1char$ph_next(struct list$1char$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_next"; neo_current_frame = &fr;
    char*  result  ;
    char*  __result_obj__0  ;
    char*  result_104  ;
    if(self==((void*)0)||self->it==((void*)0)) {
        memset(&result,0,sizeof(char* ));
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
    memset(&result_104,0,sizeof(char* ));
        __result_obj__0 = result_104;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_push_back"; neo_current_frame = &fr;
    struct list$1char$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1char$ph* litem;
    char*  __dec_obj51  ;
    struct list_item$1char$ph* litem_105;
    char*  __dec_obj52  ;
    struct list_item$1char$ph* litem_106;
    char*  __dec_obj53  ;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1613, 939));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 1617, 940, "struct list_item$1char$ph*"))), "/usr/local/include/neo-c.h", 1617, 941);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj51=litem->item,
        litem->item=(char* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1621, 943);
        __dec_obj51 = come_decrement_ref_count(__dec_obj51, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1621, 942);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_105=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 1627, 944, "struct list_item$1char$ph*"))), "/usr/local/include/neo-c.h", 1627, 945);
        litem_105->prev=self->head;
        litem_105->next=((void*)0);
        __dec_obj52=litem_105->item,
        litem_105->item=(char* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1631, 947);
        __dec_obj52 = come_decrement_ref_count(__dec_obj52, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1631, 946);
        self->tail=litem_105;
        self->head->next=litem_105;
    }
    else {
        __right_value0 = (void*)0;
        litem_106=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 1637, 948, "struct list_item$1char$ph*"))), "/usr/local/include/neo-c.h", 1637, 949);
        litem_106->prev=self->tail;
        litem_106->next=((void*)0);
        __dec_obj53=litem_106->item,
        litem_106->item=(char* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1641, 951);
        __dec_obj53 = come_decrement_ref_count(__dec_obj53, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1641, 950);
        self->tail->next=litem_106;
        self->tail=litem_106;
    }
    self->len++;
        __result_obj__0 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1649, 952));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void map$2char$phsFun$ph$p_finalize(struct map$2char$phsFun$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsFun$ph$p_finalize"; neo_current_frame = &fr;
    int i;
    int i_107;
    for(i=0    ;i<self->size;i++){
        if(self->item_existance[i]) {
            if(1) {
                come_call_finalizer(sFun_finalize, self->items[i], (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3047, 959);
            }
        }
    }
    come_free((char*)self->items);
    for(i_107=0    ;i_107<self->size;i_107++){
        if(self->item_existance[i_107]) {
            if(1) {
                (self->keys[i_107] = come_decrement_ref_count(self->keys[i_107], (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3056, 960));
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3062, 961);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3064, 962));
            neo_current_frame = fr.prev;
}

static char*  map$2char$phbuffer$ph_begin(struct map$2char$phbuffer$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phbuffer$ph_begin"; neo_current_frame = &fr;
    char*  result  ;
    char*  __result_obj__0  ;
    char*  result_108  ;
    if(self==((void*)0)) {
        memset(&result,0,sizeof(char* ));
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
    memset(&result_108,0,sizeof(char* ));
        __result_obj__0 = result_108;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static _Bool map$2char$phbuffer$ph_end(struct map$2char$phbuffer$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phbuffer$ph_end"; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
        neo_current_frame = fr.prev;
}

static char*  map$2char$phbuffer$ph_next(struct map$2char$phbuffer$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phbuffer$ph_next"; neo_current_frame = &fr;
    char*  result  ;
    char*  __result_obj__0  ;
    char*  result_110  ;
    if(self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result,0,sizeof(char* ));
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
    memset(&result_110,0,sizeof(char* ));
        __result_obj__0 = result_110;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct buffer*  map$2char$phbuffer$ph$p_operator_load_element(struct map$2char$phbuffer$ph* self, char*  key  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phbuffer$ph$p_operator_load_element"; neo_current_frame = &fr;
    struct buffer*  default_value  ;
    struct buffer*  __result_obj__0  ;
    unsigned int hash;
    unsigned int it;
    memset(&default_value,0,sizeof(struct buffer* ));
    if(self==((void*)0)) {
                __result_obj__0 = (struct buffer* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3513, 967);
        come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3513, 968);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3513, 969);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char* )key))%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if(string_equals(self->keys[it],key)) {
                                __result_obj__0 = (struct buffer* )come_increment_ref_count(self->items[it], "/usr/local/include/neo-c.h", 3524, 970);
                come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3524, 971);
                neo_current_frame = fr.prev;
                come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3524, 972);
                return __result_obj__0;
            }
            it++;
            if(it>=self->size) {
                it=0;
            }
            else if(it==hash) {
                                __result_obj__0 = (struct buffer* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3533, 973);
                come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3533, 974);
                neo_current_frame = fr.prev;
                come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3533, 975);
                return __result_obj__0;
            }
        }
        else {
                        __result_obj__0 = (struct buffer* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3537, 976);
            come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3537, 977);
            neo_current_frame = fr.prev;
            come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3537, 978);
            return __result_obj__0;
        }
    }
        __result_obj__0 = (struct buffer* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3541, 979);
    come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3541, 980);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3541, 981);
    return __result_obj__0;
}

static struct buffer*  map$2char$phbuffer$ph_operator_load_element(struct map$2char$phbuffer$ph* self, char*  key  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phbuffer$ph_operator_load_element"; neo_current_frame = &fr;
    struct buffer*  default_value  ;
    struct buffer*  __result_obj__0  ;
    unsigned int hash;
    unsigned int it;
    memset(&default_value,0,sizeof(struct buffer* ));
    if(self==((void*)0)) {
                __result_obj__0 = (struct buffer* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3513, 982);
        come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3513, 983);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3513, 984);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char* )key))%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if(string_equals(self->keys[it],key)) {
                                __result_obj__0 = (struct buffer* )come_increment_ref_count(self->items[it], "/usr/local/include/neo-c.h", 3524, 985);
                come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3524, 986);
                neo_current_frame = fr.prev;
                come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3524, 987);
                return __result_obj__0;
            }
            it++;
            if(it>=self->size) {
                it=0;
            }
            else if(it==hash) {
                                __result_obj__0 = (struct buffer* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3533, 988);
                come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3533, 989);
                neo_current_frame = fr.prev;
                come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3533, 990);
                return __result_obj__0;
            }
        }
        else {
                        __result_obj__0 = (struct buffer* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3537, 991);
            come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3537, 992);
            neo_current_frame = fr.prev;
            come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3537, 993);
            return __result_obj__0;
        }
    }
        __result_obj__0 = (struct buffer* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3541, 994);
    come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3541, 995);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3541, 996);
    return __result_obj__0;
}

static char*  map$2char$phchar$ph_begin(struct map$2char$phchar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phchar$ph_begin"; neo_current_frame = &fr;
    char*  result  ;
    char*  __result_obj__0  ;
    char*  result_121  ;
    if(self==((void*)0)) {
        memset(&result,0,sizeof(char* ));
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
    memset(&result_121,0,sizeof(char* ));
        __result_obj__0 = result_121;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static _Bool map$2char$phchar$ph_end(struct map$2char$phchar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phchar$ph_end"; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
            neo_current_frame = fr.prev;
}

static char*  map$2char$phchar$ph_next(struct map$2char$phchar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phchar$ph_next"; neo_current_frame = &fr;
    char*  result  ;
    char*  __result_obj__0  ;
    char*  result_123  ;
    if(self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result,0,sizeof(char* ));
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
    memset(&result_123,0,sizeof(char* ));
        __result_obj__0 = result_123;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static char*  map$2char$phchar$ph$p_operator_load_element(struct map$2char$phchar$ph* self, char*  key  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phchar$ph$p_operator_load_element"; neo_current_frame = &fr;
    char*  default_value  ;
    char*  __result_obj__0  ;
    unsigned int hash;
    unsigned int it;
    memset(&default_value,0,sizeof(char* ));
    if(self==((void*)0)) {
                __result_obj__0 = (char* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3513, 1017);
        (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 3513, 1018));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 3513, 1019));
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char* )key))%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if(string_equals(self->keys[it],key)) {
                                __result_obj__0 = (char* )come_increment_ref_count(self->items[it], "/usr/local/include/neo-c.h", 3524, 1020);
                (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3524, 1021));
                neo_current_frame = fr.prev;
                (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 3524, 1022));
                return __result_obj__0;
            }
            it++;
            if(it>=self->size) {
                it=0;
            }
            else if(it==hash) {
                                __result_obj__0 = (char* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3533, 1023);
                (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 3533, 1024));
                neo_current_frame = fr.prev;
                (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 3533, 1025));
                return __result_obj__0;
            }
        }
        else {
                        __result_obj__0 = (char* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3537, 1026);
            (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 3537, 1027));
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 3537, 1028));
            return __result_obj__0;
        }
    }
        __result_obj__0 = (char* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3541, 1029);
    (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 3541, 1030));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 3541, 1031));
    return __result_obj__0;
}

static char*  map$2char$phchar$ph_operator_load_element(struct map$2char$phchar$ph* self, char*  key  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phchar$ph_operator_load_element"; neo_current_frame = &fr;
    char*  default_value  ;
    char*  __result_obj__0  ;
    unsigned int hash;
    unsigned int it;
    memset(&default_value,0,sizeof(char* ));
    if(self==((void*)0)) {
                __result_obj__0 = (char* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3513, 1032);
        (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 3513, 1033));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 3513, 1034));
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char* )key))%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if(string_equals(self->keys[it],key)) {
                                __result_obj__0 = (char* )come_increment_ref_count(self->items[it], "/usr/local/include/neo-c.h", 3524, 1035);
                (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3524, 1036));
                neo_current_frame = fr.prev;
                (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 3524, 1037));
                return __result_obj__0;
            }
            it++;
            if(it>=self->size) {
                it=0;
            }
            else if(it==hash) {
                                __result_obj__0 = (char* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3533, 1038);
                (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 3533, 1039));
                neo_current_frame = fr.prev;
                (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 3533, 1040));
                return __result_obj__0;
            }
        }
        else {
                        __result_obj__0 = (char* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3537, 1041);
            (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 3537, 1042));
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 3537, 1043));
            return __result_obj__0;
        }
    }
        __result_obj__0 = (char* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3541, 1044);
    (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 3541, 1045));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 3541, 1046));
    return __result_obj__0;
}

static void map$2char$phchar$ph$p_finalize(struct map$2char$phchar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phchar$ph$p_finalize"; neo_current_frame = &fr;
    int i;
    int i_124;
    for(i=0    ;i<self->size;i++){
        if(self->item_existance[i]) {
            if(1) {
                (self->items[i] = come_decrement_ref_count(self->items[i], (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3047, 1048));
            }
        }
    }
    come_free((char*)self->items);
    for(i_124=0    ;i_124<self->size;i_124++){
        if(self->item_existance[i_124]) {
            if(1) {
                (self->keys[i_124] = come_decrement_ref_count(self->keys[i_124], (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3056, 1049));
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3062, 1050);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3064, 1051));
            neo_current_frame = fr.prev;
}

static void map$2char$phbuffer$ph$p_finalize(struct map$2char$phbuffer$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phbuffer$ph$p_finalize"; neo_current_frame = &fr;
    int i;
    int i_132;
    for(i=0    ;i<self->size;i++){
        if(self->item_existance[i]) {
            if(1) {
                come_call_finalizer(buffer_finalize, self->items[i], (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3047, 1067);
            }
        }
    }
    come_free((char*)self->items);
    for(i_132=0    ;i_132<self->size;i_132++){
        if(self->item_existance[i_132]) {
            if(1) {
                (self->keys[i_132] = come_decrement_ref_count(self->keys[i_132], (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3056, 1068));
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3062, 1069);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3064, 1070));
        neo_current_frame = fr.prev;
}

void add_come_code_at_function_head(struct sInfo*  info  , const char* code, ...)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "add_come_code_at_function_head"; neo_current_frame = &fr;
    char* msg2;
    __builtin_va_list  args  ;
    int len;
    memset(&msg2, 0, sizeof(msg2));
    if(info->no_output_come_code) {
                neo_current_frame = fr.prev;
        return;
    }
    __builtin_va_start(args,code);
    len=vasprintf(&msg2,code,args);
    __builtin_va_end(args);
    if(info->come_fun) {
        buffer_append_str(info->come_fun->mSourceHead,"    ");
        buffer_append_str(info->come_fun->mSourceHead,msg2);
    }
    free(msg2);
    neo_current_frame = fr.prev;
}

void add_come_code_at_function_head2(struct sInfo*  info  , const char* code, ...)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "add_come_code_at_function_head2"; neo_current_frame = &fr;
    char* msg2;
    __builtin_va_list  args  ;
    int len;
    memset(&msg2, 0, sizeof(msg2));
    if(info->no_output_come_code) {
                neo_current_frame = fr.prev;
        return;
    }
    __builtin_va_start(args,code);
    len=vasprintf(&msg2,code,args);
    __builtin_va_end(args);
    if(info->come_fun) {
        buffer_append_str(info->come_fun->mSourceHead2,"    ");
        buffer_append_str(info->come_fun->mSourceHead2,msg2);
    }
    free(msg2);
    neo_current_frame = fr.prev;
}

void add_last_code_to_source(struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "add_last_code_to_source"; neo_current_frame = &fr;
    char*  __dec_obj54  ;
    char*  __dec_obj55  ;
    if(info->no_output_come_code) {
                neo_current_frame = fr.prev;
        return;
    }
    if(info->module->mLastCode) {
        add_come_code(info,"%s;\n",info->module->mLastCode);
        __dec_obj54=info->module->mLastCode,
        info->module->mLastCode=((void*)0);
        __dec_obj54 = come_decrement_ref_count(__dec_obj54, (void*)0, (void*)0, 0,0, (void*)0, "03output_code.nc", 2053, 1079);
    }
    if(info->module->mLastCode2) {
        add_come_code(info,"%s;\n",info->module->mLastCode2);
        __dec_obj55=info->module->mLastCode2,
        info->module->mLastCode2=((void*)0);
        __dec_obj55 = come_decrement_ref_count(__dec_obj55, (void*)0, (void*)0, 0,0, (void*)0, "03output_code.nc", 2057, 1080);
    }
    neo_current_frame = fr.prev;
}

void add_come_last_code(struct sInfo*  info  , const char* msg, ...)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "add_come_last_code"; neo_current_frame = &fr;
    char* msg2;
    __builtin_va_list  args  ;
    int len;
    void* __right_value0 = (void*)0;
    char*  __dec_obj56  ;
    memset(&msg2, 0, sizeof(msg2));
    if(info->no_output_come_code) {
                neo_current_frame = fr.prev;
        return;
    }
    __builtin_va_start(args,msg);
    len=vasprintf(&msg2,msg,args);
    __builtin_va_end(args);
    __dec_obj56=info->module->mLastCode,
    info->module->mLastCode=(char* )come_increment_ref_count(__builtin_string(msg2), "03output_code.nc", 2073, 1082);
    __dec_obj56 = come_decrement_ref_count(__dec_obj56, (void*)0, (void*)0, 0,0, (void*)0, "03output_code.nc", 2073, 1081);
    free(msg2);
    neo_current_frame = fr.prev;
}

void add_come_last_code2(struct sInfo*  info  , const char* msg, ...)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "add_come_last_code2"; neo_current_frame = &fr;
    char* msg2;
    __builtin_va_list  args  ;
    int len;
    void* __right_value0 = (void*)0;
    char*  __dec_obj57  ;
    memset(&msg2, 0, sizeof(msg2));
    if(info->no_output_come_code) {
                neo_current_frame = fr.prev;
        return;
    }
    __builtin_va_start(args,msg);
    len=vasprintf(&msg2,msg,args);
    __builtin_va_end(args);
    __dec_obj57=info->module->mLastCode2,
    info->module->mLastCode2=(char* )come_increment_ref_count(__builtin_string(msg2), "03output_code.nc", 2090, 1084);
    __dec_obj57 = come_decrement_ref_count(__dec_obj57, (void*)0, (void*)0, 0,0, (void*)0, "03output_code.nc", 2090, 1083);
    free(msg2);
    neo_current_frame = fr.prev;
}

void dec_stack_ptr(int value, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "dec_stack_ptr"; neo_current_frame = &fr;
    list$1CVALUE$ph_delete(info->stack,-value,-1);
    neo_current_frame = fr.prev;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_delete(struct list$1CVALUE$ph* self, int head, int tail)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1CVALUE$ph_delete"; neo_current_frame = &fr;
    struct list$1CVALUE$ph* __result_obj__0;
    int tmp;
    struct list_item$1CVALUE$ph* it;
    int i;
    struct list_item$1CVALUE$ph* prev_it;
    struct list_item$1CVALUE$ph* it_133;
    int i_134;
    struct list_item$1CVALUE$ph* prev_it_135;
    struct list_item$1CVALUE$ph* it_136;
    struct list_item$1CVALUE$ph* head_prev_it;
    struct list_item$1CVALUE$ph* tail_it;
    int i_137;
    struct list_item$1CVALUE$ph* prev_it_138;
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
        list$1CVALUE$ph_reset(self);
    }
    else if(head==0) {
        it=self->head;
        i=0;
        while(it!=((void*)0)) {
            if(i<tail) {
                prev_it=it;
                it=it->next;
                i++;
                come_call_finalizer(list_item$1CVALUE$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1932, 1087);
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
        it_133=self->head;
        i_134=0;
        while(it_133!=((void*)0)) {
            if(i_134==head) {
                self->tail=it_133->prev;
                self->tail->next=((void*)0);
            }
            if(i_134>=head) {
                prev_it_135=it_133;
                it_133=it_133->next;
                i_134++;
                come_call_finalizer(list_item$1CVALUE$ph$p_finalize, prev_it_135, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1962, 1088);
                self->len--;
            }
            else {
                it_133=it_133->next;
                i_134++;
            }
        }
    }
    else {
        it_136=self->head;
        head_prev_it=((void*)0);
        tail_it=((void*)0);
        i_137=0;
        while(it_136!=((void*)0)) {
            if(i_137==head) {
                head_prev_it=it_136->prev;
            }
            if(i_137==tail) {
                tail_it=it_136;
            }
            if(i_137>=head&&i_137<tail) {
                prev_it_138=it_136;
                it_136=it_136->next;
                i_137++;
                come_call_finalizer(list_item$1CVALUE$ph$p_finalize, prev_it_138, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1995, 1089);
                self->len--;
            }
            else {
                it_136=it_136->next;
                i_137++;
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

static struct list$1CVALUE$ph* list$1CVALUE$ph_reset(struct list$1CVALUE$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1CVALUE$ph_reset"; neo_current_frame = &fr;
    struct list$1CVALUE$ph* __result_obj__0;
    struct list_item$1CVALUE$ph* it;
    struct list_item$1CVALUE$ph* prev_it;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1CVALUE$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1854, 1086);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void list_item$1CVALUE$ph$p_finalize(struct list_item$1CVALUE$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1CVALUE$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer(CVALUE_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "list_item$1CVALUE$ph$p_finalize}", 2, 1085);
    }
            neo_current_frame = fr.prev;
}

struct CVALUE*  get_value_from_stack(int offset, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "get_value_from_stack"; neo_current_frame = &fr;
    char*  __dec_obj58  ;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct CVALUE*  result  ;
    struct CVALUE*  __result_obj__0  ;
    __dec_obj58=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj58 = come_decrement_ref_count(__dec_obj58, (void*)0, (void*)0, 0,0, (void*)0, "03output_code.nc", 2102, 1090);
    result=(struct CVALUE* )come_increment_ref_count(CVALUE_clone(((struct CVALUE* )(__right_value0=list$1CVALUE$ph_operator_load_element(info->stack,offset)))), "03output_code.nc", 2104, 1130);
    come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "03output_code.nc}", 2104, 1131);
    if(result==((void*)0)) {
        err_msg(info,"invalid stack value");
        exit(2);
    }
    list$1CVALUE$ph_delete(info->stack,-1,-1);
        __result_obj__0 = (struct CVALUE* )come_increment_ref_count(result, "03output_code.nc", 2113, 1132);
    come_call_finalizer(CVALUE_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "03output_code.nc}", 2113, 1133);
    neo_current_frame = fr.prev;
    come_call_finalizer(CVALUE_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "03output_code.nc}", 2113, 1134);
    return __result_obj__0;
}

static struct CVALUE*  list$1CVALUE$ph$p_operator_load_element(struct list$1CVALUE$ph* self, int position)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1CVALUE$ph$p_operator_load_element"; neo_current_frame = &fr;
    struct CVALUE*  default_value  ;
    struct CVALUE*  __result_obj__0  ;
    struct list_item$1CVALUE$ph* it;
    int i;
    struct CVALUE*  default_value_139  ;
    if(self==((void*)0)) {
        memset(&default_value,0,sizeof(struct CVALUE* ));
                __result_obj__0 = (struct CVALUE* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 2148, 1091);
        come_call_finalizer(CVALUE_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2148, 1092);
        neo_current_frame = fr.prev;
        come_call_finalizer(CVALUE_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2148, 1093);
        return __result_obj__0;
        come_call_finalizer(CVALUE_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 2151, 1094);
    }
    if(position<0) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(it!=((void*)0)) {
        if(position==i) {
                        __result_obj__0 = (struct CVALUE* )come_increment_ref_count(it->item, "/usr/local/include/neo-c.h", 2159, 1095);
            neo_current_frame = fr.prev;
            come_call_finalizer(CVALUE_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2159, 1096);
            return __result_obj__0;
        }
        it=it->next;
        i++;
    }
    memset(&default_value_139,0,sizeof(struct CVALUE* ));
        __result_obj__0 = (struct CVALUE* )come_increment_ref_count(default_value_139, "/usr/local/include/neo-c.h", 2167, 1097);
    come_call_finalizer(CVALUE_finalize, default_value_139, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2167, 1098);
    neo_current_frame = fr.prev;
    come_call_finalizer(CVALUE_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2167, 1099);
    return __result_obj__0;
}

static struct CVALUE*  list$1CVALUE$ph_operator_load_element(struct list$1CVALUE$ph* self, int position)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1CVALUE$ph_operator_load_element"; neo_current_frame = &fr;
    struct CVALUE*  default_value  ;
    struct CVALUE*  __result_obj__0  ;
    struct list_item$1CVALUE$ph* it;
    int i;
    struct CVALUE*  default_value_140  ;
    if(self==((void*)0)) {
        memset(&default_value,0,sizeof(struct CVALUE* ));
                __result_obj__0 = (struct CVALUE* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 2148, 1100);
        come_call_finalizer(CVALUE_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2148, 1101);
        neo_current_frame = fr.prev;
        come_call_finalizer(CVALUE_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2148, 1102);
        return __result_obj__0;
        come_call_finalizer(CVALUE_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 2151, 1103);
    }
    if(position<0) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(it!=((void*)0)) {
        if(position==i) {
                        __result_obj__0 = (struct CVALUE* )come_increment_ref_count(it->item, "/usr/local/include/neo-c.h", 2159, 1104);
            neo_current_frame = fr.prev;
            come_call_finalizer(CVALUE_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2159, 1105);
            return __result_obj__0;
        }
        it=it->next;
        i++;
    }
    memset(&default_value_140,0,sizeof(struct CVALUE* ));
        __result_obj__0 = (struct CVALUE* )come_increment_ref_count(default_value_140, "/usr/local/include/neo-c.h", 2167, 1106);
    come_call_finalizer(CVALUE_finalize, default_value_140, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2167, 1107);
    neo_current_frame = fr.prev;
    come_call_finalizer(CVALUE_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2167, 1108);
    return __result_obj__0;
}

static struct CVALUE*  CVALUE_clone(struct CVALUE*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "CVALUE_clone"; neo_current_frame = &fr;
    struct CVALUE*  __result_obj__0  ;
    void* __right_value0 = (void*)0;
    struct CVALUE*  result  ;
    char*  __dec_obj59  ;
    struct sType*  __dec_obj60  ;
    char*  __dec_obj61  ;
    char*  __dec_obj62  ;
    char*  __dec_obj63  ;
    if(self==(void*)0) {
                __result_obj__0 = (struct CVALUE* )come_increment_ref_count((void*)0, "CVALUE_clone", 4, 1109);
        neo_current_frame = fr.prev;
        come_call_finalizer(CVALUE_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "CVALUE_clone}", 4, 1110);
        return __result_obj__0;
    }
    result=(struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "CVALUE_clone", 5, 1111, "struct CVALUE* "), "CVALUE_clone", 5, 1112);
    if(self!=((void*)0)&&self->c_value!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj59=result->c_value,
        result->c_value=(char* )come_increment_ref_count((char* )come_memdup(self->c_value, "CVALUE_clone", 6, 1113, "char* "), "CVALUE_clone", 6, 1115);
        __dec_obj59 = come_decrement_ref_count(__dec_obj59, (void*)0, (void*)0, 0,0, (void*)0, "CVALUE_clone", 6, 1114);
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj60=result->type,
        result->type=(struct sType* )come_increment_ref_count(sType_clone(self->type), "CVALUE_clone", 7, 1117);
        come_call_finalizer(sType_finalize, __dec_obj60,(void*)0, (void*)0, 0, 0, 0, (void*)0, "CVALUE_clone", 7, 1116);
    }
    if(self!=((void*)0)) {
        result->var=self->var;
    }
    if(self!=((void*)0)) {
        result->right_value_objects=self->right_value_objects;
    }
    if(self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj61=result->c_value_without_right_value_objects,
        result->c_value_without_right_value_objects=(char* )come_increment_ref_count((char* )come_memdup(self->c_value_without_right_value_objects, "CVALUE_clone", 10, 1118, "char* "), "CVALUE_clone", 10, 1120);
        __dec_obj61 = come_decrement_ref_count(__dec_obj61, (void*)0, (void*)0, 0,0, (void*)0, "CVALUE_clone", 10, 1119);
    }
    if(self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj62=result->c_value_without_cast_object_value,
        result->c_value_without_cast_object_value=(char* )come_increment_ref_count((char* )come_memdup(self->c_value_without_cast_object_value, "CVALUE_clone", 11, 1121, "char* "), "CVALUE_clone", 11, 1123);
        __dec_obj62 = come_decrement_ref_count(__dec_obj62, (void*)0, (void*)0, 0,0, (void*)0, "CVALUE_clone", 11, 1122);
    }
    if(self!=((void*)0)) {
        result->mLoadField=self->mLoadField;
    }
    if(self!=((void*)0)) {
        result->mCastValue=self->mCastValue;
    }
    if(self!=((void*)0)) {
        result->mNullValue=self->mNullValue;
    }
    if(self!=((void*)0)&&self->c_value_without_null_checker!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj63=result->c_value_without_null_checker,
        result->c_value_without_null_checker=(char* )come_increment_ref_count((char* )come_memdup(self->c_value_without_null_checker, "CVALUE_clone", 15, 1124, "char* "), "CVALUE_clone", 15, 1126);
        __dec_obj63 = come_decrement_ref_count(__dec_obj63, (void*)0, (void*)0, 0,0, (void*)0, "CVALUE_clone", 15, 1125);
    }
        __result_obj__0 = (struct CVALUE* )come_increment_ref_count(result, "CVALUE_clone", 16, 1127);
    come_call_finalizer(CVALUE_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "CVALUE_clone}", 16, 1128);
    neo_current_frame = fr.prev;
    come_call_finalizer(CVALUE_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "CVALUE_clone}", 16, 1129);
    return __result_obj__0;
}

void transpiler_clear_last_code(struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "transpiler_clear_last_code"; neo_current_frame = &fr;
    char*  __dec_obj64  ;
    char*  __dec_obj65  ;
    __dec_obj64=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj64 = come_decrement_ref_count(__dec_obj64, (void*)0, (void*)0, 0,0, (void*)0, "03output_code.nc", 2118, 1135);
    __dec_obj65=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj65 = come_decrement_ref_count(__dec_obj65, (void*)0, (void*)0, 0,0, (void*)0, "03output_code.nc", 2119, 1136);
    neo_current_frame = fr.prev;
}

