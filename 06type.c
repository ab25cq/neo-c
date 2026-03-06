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
    char*  caller_sname  ;
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
    _Bool* pointer_paren;
    int* paren_num;
    int* array_pointer_num;
    struct list$1sNode$ph** array;
    struct sInfo**  info  ;
    _Bool* parse_variable_name;
    _Bool* parse_multiple_type;
    _Bool* in_function_parametor;
    char** head;
    int* head_sline;
    char**  attribute_before  ;
    char**  type_name  ;
    _Bool* norecord;
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
    _Bool* noreturn_;
    _Bool* weak_;
    struct sNode** alignas_;
    _Bool* alignas_double;
    char**  tag_attribute  ;
    _Bool* struct_define_parsed;
    _Bool* anonymous_type;
    _Bool* anonymous_name;
    _Bool* atomic_;
    _Bool* thread_local;
    _Bool* thread_;
    char**  attribute_81  ;
    int* pointer_num;
    char**  pointer_attribute  ;
    _Bool* heap;
    _Bool* refference;
    _Bool* no_refference;
    _Bool* channel;
    _Bool* deffer_;
    _Bool* any_class;
    _Bool* vtable;
    char**  tuple_name  ;
    _Bool* lambda_flag;
    struct sType**  type_82  ;
    char**  var_name_83  ;
    _Bool* function_pointer_flag;
    _Bool* pointer_to_array_flag;
    _Bool* var_name_between_brace;
};

struct __current_stack2__
{
    struct sInfo**  info  ;
    _Bool* parse_variable_name;
    _Bool* parse_multiple_type;
    _Bool* in_function_parametor;
    char** head;
    int* head_sline;
    char**  attribute_before  ;
    char**  type_name  ;
    _Bool* norecord;
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
    _Bool* noreturn_;
    _Bool* weak_;
    struct sNode** alignas_;
    _Bool* alignas_double;
    char**  tag_attribute  ;
    _Bool* struct_define_parsed;
    _Bool* anonymous_type;
    _Bool* anonymous_name;
    _Bool* atomic_;
    _Bool* thread_local;
    _Bool* thread_;
    char**  attribute_81  ;
    int* pointer_num;
    char**  pointer_attribute  ;
    _Bool* heap;
    _Bool* refference;
    _Bool* no_refference;
    _Bool* channel;
    _Bool* deffer_;
    _Bool* any_class;
    _Bool* vtable;
    char**  tuple_name  ;
    _Bool* lambda_flag;
    struct sType**  type_82  ;
    char**  var_name_83  ;
    _Bool* function_pointer_flag;
    _Bool* pointer_to_array_flag;
    _Bool* var_name_between_brace;
    struct list$1sNode$ph** array_num_typedef;
};

struct __current_stack3__
{
    struct sInfo**  info  ;
    _Bool* parse_variable_name;
    _Bool* parse_multiple_type;
    _Bool* in_function_parametor;
    char** head;
    int* head_sline;
    char**  attribute_before  ;
    char**  type_name  ;
    _Bool* norecord;
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
    _Bool* noreturn_;
    _Bool* weak_;
    struct sNode** alignas_;
    _Bool* alignas_double;
    char**  tag_attribute  ;
    _Bool* struct_define_parsed;
    _Bool* anonymous_type;
    _Bool* anonymous_name;
    _Bool* atomic_;
    _Bool* thread_local;
    _Bool* thread_;
    char**  attribute_81  ;
    int* pointer_num;
    char**  pointer_attribute  ;
    _Bool* heap;
    _Bool* refference;
    _Bool* no_refference;
    _Bool* channel;
    _Bool* deffer_;
    _Bool* any_class;
    _Bool* vtable;
    char**  tuple_name  ;
    _Bool* lambda_flag;
    struct sType**  type_82  ;
    char**  var_name_83  ;
    _Bool* function_pointer_flag;
    _Bool* pointer_to_array_flag;
    _Bool* var_name_between_brace;
    struct list$1sNode$ph** array_num_typedef;
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
_Bool die(const char* msg, char* sname, int sline);
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
char*  make_type_name_string(struct sType*  type  , struct sInfo*  info  , _Bool no_static, _Bool cast_type, _Bool typedef_extended, _Bool nullchecker);
char*  make_come_type_name_string(struct sType*  type  , struct sInfo*  info  );
char*  make_come_define_var(struct sType*  type  , char* name, struct sInfo*  info  );
struct sType*  get_no_solved_type(struct sType*  type  );
struct sType*  get_no_solved_type2(struct sType*  type  );
char*  header_function(struct sFun*  fun  , struct sInfo*  info  );
_Bool output_source_file(struct sInfo*  info  );
char*  create_generics_name(struct sType*  generics_type  , struct sInfo*  info  );
void add_last_code_to_source(struct sInfo*  info  );
void add_come_code_at_function_head(struct sInfo*  info  , const char* code, ...);
void add_come_code_at_come_header(struct sInfo*  info  , char*  id  , const char* msg, ...);
void add_come_code_no_indent(struct sInfo*  info  , const char* msg, ...);
void add_come_code_at_come_struct_header(struct sInfo*  info  , char*  id  , const char* msg, ...);
void add_come_code_at_function_head2(struct sInfo*  info  , const char* code, ...);
void add_come_code(struct sInfo*  info  , const char* msg, ...);
void add_come_last_code(struct sInfo*  info  , const char* msg, ...);
void add_come_last_code2(struct sInfo*  info  , const char* msg, ...);
void dec_stack_ptr(int value, struct sInfo*  info  );
struct CVALUE*  get_value_from_stack(int offset, struct sInfo*  info  );
char*  make_define_var(struct sType*  type  , char* name, struct sInfo*  info  , _Bool no_static, _Bool in_typedef);
char*  make_var_name(struct sType*  type  , char* name, struct sInfo*  info  , _Bool no_static);
void transpiler_clear_last_code(struct sInfo*  info  );
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
void skip_paren(struct sInfo*  info  );
struct sNode* parse_normal_block(_Bool clang, _Bool unsafe_block, struct sInfo*  info  );
struct tuple2$2char$phchar$ph* parse_function_attribute(struct sInfo*  info  );
struct sNode* get_number(_Bool minus, struct sInfo*  info  );
struct sNode* get_oct_number(struct sInfo*  info  );
struct sNode* get_hex_number(_Bool minus, struct sInfo*  info  );
struct sNode* create_int_node(char*  value  , struct sInfo*  info  );
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
_Bool parsecmp(const char* p2, struct sInfo*  info  );
char*  parse_word(_Bool digits, struct sInfo*  info  );
char*  backtrace_parse_word(struct sInfo*  info  );
void skip_spaces_and_lf(struct sInfo*  info  );
void skip_spaces_and_lf2(struct sInfo*  info  );
struct tuple2$2char$ph_Bool$* create_generics_fun(char*  fun_name  , struct sGenericsFun*  generics_fun  , struct sType*  generics_type  , struct sInfo*  info  );
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
_Bool is_portable_libc_symbol(const char* sym);
struct sNode* add_node(struct sNode* node, struct sNode* right, struct sInfo*  info  );
_Bool is_type_name(char* buf, struct sInfo*  info  );
static struct sClass*  map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char*  key  );
static void sClass_finalize(struct sClass*  self  );
static void list$1tuple2$2char$phsType$ph$ph$p_finalize(struct list$1tuple2$2char$phsType$ph$ph* self);
static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self);
static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self);
static void sType_finalize(struct sType*  self  );
static void list$1sType$ph$p_finalize(struct list$1sType$ph* self);
static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self);
static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self);
static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self);
static void list$1int$$p_finalize(struct list$1int$* self);
static void list_item$1int$$p_finalize(struct list_item$1int$* self);
static void list$1char$ph$p_finalize(struct list$1char$ph* self);
static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self);
static struct sClass*  map$2char$phsClass$ph_operator_load_element(struct map$2char$phsClass$ph* self, char*  key  );
static struct sType*  map$2char$phsType$ph$p_operator_load_element(struct map$2char$phsType$ph* self, char*  key  );
static struct sType*  map$2char$phsType$ph_operator_load_element(struct map$2char$phsType$ph* self, char*  key  );
static _Bool list$1char$ph_contained(struct list$1char$ph* self, char*  item  , _Bool by_pointer);
static char*  list$1char$ph_begin(struct list$1char$ph* self);
static _Bool list$1char$ph_end(struct list$1char$ph* self);
static char*  list$1char$ph_next(struct list$1char$ph* self);
static char span$1char$p$p_operator_derefference(struct span$1char$p* self);
static char span$1char$p_operator_derefference(struct span$1char$p* self);
_Bool is_contained_generics_class(struct sType*  type  , struct sInfo*  info  );
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
static struct sType*  list$1sType$ph_begin(struct list$1sType$ph* self);
static _Bool list$1sType$ph_end(struct list$1sType$ph* self);
static struct sType*  list$1sType$ph_next(struct list$1sType$ph* self);
_Bool is_contained_generics_placeholder(struct sType*  type  , struct sInfo*  info  );
struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$* parse_params(struct sInfo*  info  , _Bool in_constructor_);
static void tuple3$3sType$phchar$ph_Bool$$p_finalize(struct tuple3$3sType$phchar$ph_Bool$* self);
static struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$* tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$_initialize(struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$* self, struct list$1sType$ph* v1, struct list$1char$ph* v2, struct list$1char$ph* v3, _Bool v4);
static void tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$$p_finalize(struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$* self);
static struct list$1sType$ph* list$1sType$ph_push_back(struct list$1sType$ph* self, struct sType*  item  );
static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char*  item  );
char*  parse_square_attribute(struct sInfo*  info  );
char*  parse_declspec_attribute(struct sInfo*  info  );
struct tuple2$2char$phchar$ph* parse_attribute(struct sInfo*  info  );
static struct tuple2$2char$phchar$ph* tuple2$2char$phchar$ph_initialize(struct tuple2$2char$phchar$ph* self, char*  v1  , char*  v2  );
static void tuple2$2char$phchar$ph$p_finalize(struct tuple2$2char$phchar$ph* self);
void parse_struct_attribute_skip_paren(struct sInfo*  info  );
_Bool parse_attribute_keyword(struct buffer*  result  , const char* keyword, _Bool allow_end, struct sInfo*  info  );
_Bool parse_common_attribute_keyword(struct buffer*  result  , struct sInfo*  info  , _Bool allow_end);
char*  parse_struct_attribute(struct sInfo*  info  , _Bool allow_end);
char*  merge_tag_attribute(char*  current  , char*  attribute  );
struct tuple2$2sType$phchar$ph* parse_variable_name_on_multiple_declare(struct sType*  base_type_name  , _Bool first, struct sInfo*  info  );
static struct list$1sNode$ph* list$1sNode$ph_push_back(struct list$1sNode$ph* self, struct sNode* item);
static struct tuple2$2sType$phchar$ph* tuple2$2sType$phchar$ph_initialize(struct tuple2$2sType$phchar$ph* self, struct sType*  v1  , char*  v2  );
static void tuple2$2sType$phchar$ph$p_finalize(struct tuple2$2sType$phchar$ph* self);
_Bool skip_pointer_attribute(struct sInfo*  info  );
char*  parse_pointer_qualifier(struct sInfo*  info  );
struct tuple3$3sType$phchar$ph_Bool$* backtrace_parse_type(_Bool parse_variable_name, struct sInfo*  info  );
static struct tuple3$3sType$phchar$ph_Bool$* tuple3$3sType$phchar$ph_Bool$_initialize(struct tuple3$3sType$phchar$ph_Bool$* self, struct sType*  v1  , char*  v2  , _Bool v3);
struct tuple5$5_Bool$_Bool$_Bool$_Bool$_Bool$* backtrace_struct_union_enum(struct sInfo*  info  );
static struct tuple5$5_Bool$_Bool$_Bool$_Bool$_Bool$* tuple5$5_Bool$_Bool$_Bool$_Bool$_Bool$_initialize(struct tuple5$5_Bool$_Bool$_Bool$_Bool$_Bool$* self, _Bool v1, _Bool v2, _Bool v3, _Bool v4, _Bool v5);
static void tuple5$5_Bool$_Bool$_Bool$_Bool$_Bool$$p_finalize(struct tuple5$5_Bool$_Bool$_Bool$_Bool$_Bool$* self);
static struct span$1char$p* span$1char$p$p_operator_plus_plus(struct span$1char$p* self);
static struct span$1char$p* span$1char$p_operator_plus_plus(struct span$1char$p* self);
struct sType*  parse_pointer_attribute(struct sType*  type  , struct sInfo*  info  );
void append_attribute_to_type(struct sType*  type  , char*  attribute  , _Bool for_variable, struct sInfo*  info  );
void apply_type_qualifiers(struct sType*  type  , _Bool constant, _Bool complex_, _Bool atomic_, _Bool thread_local, _Bool thread_, _Bool alignas_double, _Bool register_, _Bool unsigned_, _Bool noreturn_, _Bool volatile_, _Bool uniq_, _Bool static_, _Bool extern_, _Bool inline_, _Bool restrict_, _Bool long_long, _Bool long_, _Bool short_, _Bool norecord, _Bool weak_);
void merge_pointer_attribute_to_type(struct sType*  type  , char*  pointer_attribute  );
char*  parse_variable_name_fun(struct sType*  type  , _Bool anonymous_name, _Bool var_name_between_brace, char*  attribute  , struct sInfo*  info  );
struct tuple3$3sType$phchar$ph_Bool$* parse_type(struct sInfo*  info  , _Bool parse_variable_name, _Bool parse_multiple_type, _Bool in_function_parametor);
static int list$1char$ph_length(struct list$1char$ph* self);
static char*  list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position);
static char*  list$1char$ph_operator_load_element(struct list$1char$ph* self, int position);
static struct list$1sNode$ph* list$1sNode$ph_each(struct list$1sNode$ph* self, void* parent, void (*block)(void*,struct sNode*,int,_Bool*));
void method_block1_06typenc(struct __current_stack1__* parent, struct sNode* it, int it2, _Bool* it3);
static struct buffer*  map$2char$phbuffer$ph$p_operator_load_element(struct map$2char$phbuffer$ph* self, char*  key  );
static struct buffer*  map$2char$phbuffer$ph_operator_load_element(struct map$2char$phbuffer$ph* self, char*  key  );
static int list$1sNode$ph_length(struct list$1sNode$ph* self);
static struct sClass*  map$2char$phsClass$ph_at(struct map$2char$phsClass$ph* self, char*  key  , struct sClass*  default_value  , _Bool by_pointer);
static int list$1sType$ph_length(struct list$1sType$ph* self);
static struct map$2char$phsClass$ph* map$2char$phsClass$ph_insert(struct map$2char$phsClass$ph* self, char*  key  , struct sClass*  item  , _Bool by_pointer);
static void map$2char$phsClass$ph_rehash(struct map$2char$phsClass$ph* self);
static char*  map$2char$phsClass$ph_begin(struct map$2char$phsClass$ph* self);
static _Bool map$2char$phsClass$ph_end(struct map$2char$phsClass$ph* self);
static char*  map$2char$phsClass$ph_next(struct map$2char$phsClass$ph* self);
static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char*  item  , _Bool by_pointer);
static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail);
static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self);
static struct list$1sNode$ph* list$1sNode$ph_reset(struct list$1sNode$ph* self);
static struct list$1int$* list$1int$_push_back(struct list$1int$* self, int item);
void method_block2_06typenc(struct __current_stack2__* parent, struct sNode* it, int it2, _Bool* it3);
void method_block3_06typenc(struct __current_stack3__* parent, struct sNode* it, int it2, _Bool* it3);
static struct list$1sNode$ph* list$1sNode$ph_initialize_with_values(struct list$1sNode$ph* self, int num_value, struct sNode** values);
void show_type(struct sType*  type  , struct sInfo*  info  );
_Bool is_pointer_type(struct sType*  type  , struct sInfo*  info  );
_Bool is_arithmetic_type(struct sType*  type  , struct sInfo*  info  );
_Bool is_integer_type(struct sType*  type  , struct sInfo*  info  );
_Bool is_null_pointer_constant(struct CVALUE*  come_value  , struct sInfo*  info  );
_Bool is_generic_void_pointer_compatible(struct sType*  left_type  , struct sType*  right_type  , struct sInfo*  info  );
_Bool is_span_class_name(const char* class_name, struct sInfo*  info  );
_Bool is_generic_placeholder_class_name(const char* class_name, struct sInfo*  info  );
_Bool is_generic_placeholder_type(struct sType*  type  , struct sInfo*  info  );
_Bool is_span_wrapper_compatible(struct sType*  left_type  , struct sType*  right_type  , struct sInfo*  info  );
_Bool is_transparent_union_type(struct sType*  type  , struct sInfo*  info  );
_Bool pointer_attr_has_word(struct sType*  type  , const char* word, struct sInfo*  info  );
_Bool pointer_attr_has_restrict(struct sType*  type  , struct sInfo*  info  );
_Bool pointer_attr_has_const(struct sType*  type  , struct sInfo*  info  );
_Bool pointer_attr_has_volatile(struct sType*  type  , struct sInfo*  info  );
_Bool is_empty_attribute(char*  attr  , struct sInfo*  info  );
_Bool is_same_attribute(char*  left_attr  , char*  right_attr  , struct sInfo*  info  );
struct sType*  expand_typedef_for_assign(struct sType*  type  , struct sInfo*  info  );
_Bool is_parent_class_of(struct sClass*  parent  , struct sClass*  child  , struct sInfo*  info  );
_Bool is_same_type_ignoring_qualifier(struct sType*  left_type  , struct sType*  right_type  , struct sInfo*  info  );
static struct sType*  list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position);
static struct sType*  list$1sType$ph_operator_load_element(struct list$1sType$ph* self, int position);
_Bool is_same_base_type_ignoring_qualifier(struct sType*  left_type  , struct sType*  right_type  , struct sInfo*  info  );
_Bool check_assign_type_safe(const char* msg, struct sType*  left_type  , struct sType*  right_type  , struct CVALUE*  come_value  , struct sInfo*  info  );
_Bool check_assign_type(const char* msg, struct sType*  left_type  , struct sType*  right_type  , struct CVALUE*  come_value  , struct sInfo*  info  );
void cast_type(struct sType*  left_type  , struct sType*  right_type  , struct CVALUE*  come_value  , struct sInfo*  info  );
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
_Bool is_type_name(char* buf, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "is_type_name"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sClass*  klass  ;
    struct sType*  type  ;
    void* __right_value1 = (void*)0;
    void* __right_value2 = (void*)0;
    struct sClass*  generics_class  ;
    _Bool generics_type_name;
    _Bool mgenerics_type_name;
    klass=((struct sClass* )(__right_value0=map$2char$phsClass$ph_operator_load_element(info->classes,buf)));
    __right_value0 = (void*)0;
    type=((struct sType* )(__right_value0=map$2char$phsType$ph_operator_load_element(info->types,buf)));
    __right_value0 = (void*)0;
    generics_class=((struct sClass* )(__right_value2=map$2char$phsClass$ph_operator_load_element(info->generics_classes,((char* )(__right_value1=__builtin_string(buf))))));
    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "06type.nc", 7, 101));
    __right_value0 = (void*)0;
    generics_type_name=list$1char$ph_contained(info->generics_type_names,((char* )(__right_value0=__builtin_string(buf))),(_Bool)0);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "06type.nc", 8, 102));
    __right_value0 = (void*)0;
    mgenerics_type_name=list$1char$ph_contained(info->method_generics_type_names,((char* )(__right_value0=__builtin_string(buf))),(_Bool)0);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "06type.nc", 9, 103));
    if(gComeC) {
                neo_current_frame = fr.prev;
        return (type&&type->mTypedef)||(klass&&klass->mNumber)||(klass&&klass->mFloat)||charp_operator_equals(buf,"_Thread_local")||charp_operator_equals(buf,"__thread")||charp_operator_equals(buf,"_Complex")||charp_operator_equals(buf,"const")||charp_operator_equals(buf,"register")||charp_operator_equals(buf,"static")||charp_operator_equals(buf,"volatile")||charp_operator_equals(buf,"unsigned")||charp_operator_equals(buf,"__volatile__")||charp_operator_equals(buf,"signed")||charp_operator_equals(buf,"struct")||charp_operator_equals(buf,"enum")||charp_operator_equals(buf,"union")||charp_operator_equals(buf,"extern")||info->in_top_level&&(charp_operator_equals(buf,"inline")||charp_operator_equals(buf,"__inline")||charp_operator_equals(buf,"__always_inline")||charp_operator_equals(buf,"__inline__")||charp_operator_equals(buf,"__forceinline"))||charp_operator_equals(buf,"__extension__")||charp_operator_equals(buf,"_Noreturn")||charp_operator_equals(buf,"restrict")||charp_operator_equals(buf,"__noreturn")||charp_operator_equals(buf,"_noreturn")||charp_operator_equals(buf,"__typeof__")||charp_operator_equals(buf,"typeof")||charp_operator_equals(buf,"_Nullable")||charp_operator_equals(buf,"_Alignas")||charp_operator_equals(buf,"_Atomic")||charp_operator_equals(buf,"__type__")||charp_operator_equals(buf,"__attribute__")&&(span$1char$p_operator_derefference(info->p)==40||(span$1char$p_operator_derefference(info->p)==91&&*(info->p->p+1)==91))||charp_operator_equals(buf,"__declspec")&&span$1char$p_operator_derefference(info->p)==40||charp_operator_equals(buf,"void");
    }
    else {
                neo_current_frame = fr.prev;
        return generics_class||generics_type_name||mgenerics_type_name||klass||type||charp_operator_equals(buf,"const")||charp_operator_equals(buf,"register")||charp_operator_equals(buf,"static")||charp_operator_equals(buf,"volatile")||charp_operator_equals(buf,"__volatile__")||charp_operator_equals(buf,"unsigned")||charp_operator_equals(buf,"signed")||charp_operator_equals(buf,"struct")||charp_operator_equals(buf,"enum")||charp_operator_equals(buf,"union")||charp_operator_equals(buf,"extern")||info->in_top_level&&(charp_operator_equals(buf,"inline")||charp_operator_equals(buf,"__inline")||charp_operator_equals(buf,"__always_inline")||charp_operator_equals(buf,"__inline__")||charp_operator_equals(buf,"__forceinline"))||charp_operator_equals(buf,"__extension__")||charp_operator_equals(buf,"_Thread_local")||charp_operator_equals(buf,"_norecord")||charp_operator_equals(buf,"__thread")||charp_operator_equals(buf,"_Complex")||(info->in_top_level&&charp_operator_equals(buf,"_Noreturn"))||(info->in_top_level&&charp_operator_equals(buf,"__noreturn"))||(info->in_top_level&&charp_operator_equals(buf,"_noreturn"))||charp_operator_equals(buf,"__typeof__")||charp_operator_equals(buf,"typeof")||charp_operator_equals(buf,"_Nullable")||charp_operator_equals(buf,"_Alignas")||charp_operator_equals(buf,"_Atomic")||charp_operator_equals(buf,"restrict")||charp_operator_equals(buf,"__type__")||charp_operator_equals(buf,"_weak")||charp_operator_equals(buf,"__attribute__")&&(span$1char$p_operator_derefference(info->p)==40||(span$1char$p_operator_derefference(info->p)==91&&*(info->p->p+1)==91))||charp_operator_equals(buf,"__declspec")&&span$1char$p_operator_derefference(info->p)==40||(charp_operator_equals(buf,"tup")&&(span$1char$p_operator_derefference(info->p)==58||span$1char$p_operator_derefference(info->p)==40))||(info->in_top_level&&charp_operator_equals(buf,"uniq"));
    }
    neo_current_frame = fr.prev;
}

static struct sClass*  map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char*  key  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsClass$ph$p_operator_load_element"; neo_current_frame = &fr;
    struct sClass*  default_value  ;
    struct sClass*  __result_obj__0  ;
    unsigned int hash;
    unsigned int it;
    memset(&default_value,0,sizeof(struct sClass* ));
    if(self==((void*)0)) {
                __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3513, 1);
        come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3513, 42);
        neo_current_frame = fr.prev;
        come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3513, 43);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char* )key))%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if(string_equals(self->keys[it],key)) {
                                __result_obj__0 = (struct sClass* )come_increment_ref_count(self->items[it], "/usr/local/include/neo-c.h", 3524, 44);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3524, 45);
                neo_current_frame = fr.prev;
                come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3524, 46);
                return __result_obj__0;
            }
            it++;
            if(it>=self->size) {
                it=0;
            }
            else if(it==hash) {
                                __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3533, 47);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3533, 48);
                neo_current_frame = fr.prev;
                come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3533, 49);
                return __result_obj__0;
            }
        }
        else {
                        __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3537, 50);
            come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3537, 51);
            neo_current_frame = fr.prev;
            come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3537, 52);
            return __result_obj__0;
        }
    }
        __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3541, 53);
    come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3541, 54);
    neo_current_frame = fr.prev;
    come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3541, 55);
    return __result_obj__0;
}

static void sClass_finalize(struct sClass*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sClass_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, (void*)0, "sClass_finalize", 2, 2));
    }
    if(self!=((void*)0)&&self->mFields!=((void*)0)) {
        come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, self->mFields, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sClass_finalize}", 3, 39);
    }
    if(self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        (self->mParentClassName = come_decrement_ref_count(self->mParentClassName, (void*)0, (void*)0, 0, 0, (void*)0, "sClass_finalize", 4, 40));
    }
    if(self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sClass_finalize", 5, 41));
    }
            neo_current_frame = fr.prev;
}

static void list$1tuple2$2char$phsType$ph$ph$p_finalize(struct list$1tuple2$2char$phsType$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsType$ph$ph$p_finalize"; neo_current_frame = &fr;
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
        come_call_finalizer(list_item$1tuple2$2char$phsType$ph$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1504, 38);
    }
            neo_current_frame = fr.prev;
}

static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1tuple2$2char$phsType$ph$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "list_item$1tuple2$2char$phsType$ph$ph$p_finalize}", 2, 37);
    }
            neo_current_frame = fr.prev;
}

static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2char$phsType$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, (void*)0, "tuple2$2char$phsType$ph$p_finalize", 2, 3));
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "tuple2$2char$phsType$ph$p_finalize}", 3, 36);
    }
            neo_current_frame = fr.prev;
}

static void sType_finalize(struct sType*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sType_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 2, 4);
    }
    if(self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mChannelType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 3, 5);
    }
    if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 4, 8);
    }
    if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 5, 9);
    }
    if(self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        ((self->mSizeNum) ? self->mSizeNum = come_decrement_ref_count(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0,(void*)0, "sType_finalize", 6, 10):(void*)0);
    }
    if(self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        ((self->mAlignas) ? self->mAlignas = come_decrement_ref_count(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0,(void*)0, "sType_finalize", 7, 11):(void*)0);
    }
    if(self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        (self->mTupleName = come_decrement_ref_count(self->mTupleName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 8, 12));
    }
    if(self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 9, 13));
    }
    if(self!=((void*)0)&&self->mVarAttribute!=((void*)0)) {
        (self->mVarAttribute = come_decrement_ref_count(self->mVarAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 10, 14));
    }
    if(self!=((void*)0)&&self->mMiddleAttribute!=((void*)0)) {
        (self->mMiddleAttribute = come_decrement_ref_count(self->mMiddleAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 11, 15));
    }
    if(self!=((void*)0)&&self->mPointerAttribute!=((void*)0)) {
        (self->mPointerAttribute = come_decrement_ref_count(self->mPointerAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 12, 16));
    }
    if(self!=((void*)0)&&self->mAnonymousName!=((void*)0)) {
        (self->mAnonymousName = come_decrement_ref_count(self->mAnonymousName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 13, 17));
    }
    if(self!=((void*)0)&&self->mInnerStructName!=((void*)0)) {
        (self->mInnerStructName = come_decrement_ref_count(self->mInnerStructName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 14, 18));
    }
    if(self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        (self->mAsmName = come_decrement_ref_count(self->mAsmName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 15, 19));
    }
    if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 16, 22);
    }
    if(self!=((void*)0)&&self->mVarNameArrayNum!=((void*)0)) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mVarNameArrayNum, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 17, 23);
    }
    if(self!=((void*)0)&&self->mArrayStatic!=((void*)0)) {
        come_call_finalizer(list$1int$$p_finalize, self->mArrayStatic, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 18, 25);
    }
    if(self!=((void*)0)&&self->mArrayRestrict!=((void*)0)) {
        come_call_finalizer(list$1int$$p_finalize, self->mArrayRestrict, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 19, 26);
    }
    if(self!=((void*)0)&&self->mTypedefOriginalType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mTypedefOriginalType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 20, 27);
    }
    if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        (self->mOriginalTypeName = come_decrement_ref_count(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 21, 28));
    }
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 22, 29);
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamNames, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 23, 32);
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mResultType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 24, 33);
    }
    if(self!=((void*)0)&&self->mTypeOfNode!=((void*)0)) {
        ((self->mTypeOfNode) ? self->mTypeOfNode = come_decrement_ref_count(self->mTypeOfNode, ((struct sNode*)self->mTypeOfNode)->finalize, ((struct sNode*)self->mTypeOfNode)->_protocol_obj, 0, 0,(void*)0, "sType_finalize", 25, 34):(void*)0);
    }
    if(self!=((void*)0)&&self->mHeapArrayNum!=((void*)0)) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mHeapArrayNum, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 26, 35);
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
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1504, 7);
    }
            neo_current_frame = fr.prev;
}

static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1sType$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "list_item$1sType$ph$p_finalize}", 2, 6);
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
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1504, 21);
    }
            neo_current_frame = fr.prev;
}

static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1sNode$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        ((self->item) ? self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0,(void*)0, "list_item$1sNode$ph$p_finalize", 2, 20):(void*)0);
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
        come_call_finalizer(list_item$1int$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1504, 24);
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
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1504, 31);
    }
            neo_current_frame = fr.prev;
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1char$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0, 0, (void*)0, "list_item$1char$ph$p_finalize", 2, 30));
    }
            neo_current_frame = fr.prev;
}

static struct sClass*  map$2char$phsClass$ph_operator_load_element(struct map$2char$phsClass$ph* self, char*  key  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsClass$ph_operator_load_element"; neo_current_frame = &fr;
    struct sClass*  default_value  ;
    struct sClass*  __result_obj__0  ;
    unsigned int hash;
    unsigned int it;
    memset(&default_value,0,sizeof(struct sClass* ));
    if(self==((void*)0)) {
                __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3513, 56);
        come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3513, 57);
        neo_current_frame = fr.prev;
        come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3513, 58);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char* )key))%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if(string_equals(self->keys[it],key)) {
                                __result_obj__0 = (struct sClass* )come_increment_ref_count(self->items[it], "/usr/local/include/neo-c.h", 3524, 59);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3524, 60);
                neo_current_frame = fr.prev;
                come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3524, 61);
                return __result_obj__0;
            }
            it++;
            if(it>=self->size) {
                it=0;
            }
            else if(it==hash) {
                                __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3533, 62);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3533, 63);
                neo_current_frame = fr.prev;
                come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3533, 64);
                return __result_obj__0;
            }
        }
        else {
                        __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3537, 65);
            come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3537, 66);
            neo_current_frame = fr.prev;
            come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3537, 67);
            return __result_obj__0;
        }
    }
        __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3541, 68);
    come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3541, 69);
    neo_current_frame = fr.prev;
    come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3541, 70);
    return __result_obj__0;
}

static struct sType*  map$2char$phsType$ph$p_operator_load_element(struct map$2char$phsType$ph* self, char*  key  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsType$ph$p_operator_load_element"; neo_current_frame = &fr;
    struct sType*  default_value  ;
    struct sType*  __result_obj__0  ;
    unsigned int hash;
    unsigned int it;
    memset(&default_value,0,sizeof(struct sType* ));
    if(self==((void*)0)) {
                __result_obj__0 = (struct sType* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3513, 71);
        come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3513, 72);
        neo_current_frame = fr.prev;
        come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3513, 73);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char* )key))%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if(string_equals(self->keys[it],key)) {
                                __result_obj__0 = (struct sType* )come_increment_ref_count(self->items[it], "/usr/local/include/neo-c.h", 3524, 74);
                come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3524, 75);
                neo_current_frame = fr.prev;
                come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3524, 76);
                return __result_obj__0;
            }
            it++;
            if(it>=self->size) {
                it=0;
            }
            else if(it==hash) {
                                __result_obj__0 = (struct sType* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3533, 77);
                come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3533, 78);
                neo_current_frame = fr.prev;
                come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3533, 79);
                return __result_obj__0;
            }
        }
        else {
                        __result_obj__0 = (struct sType* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3537, 80);
            come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3537, 81);
            neo_current_frame = fr.prev;
            come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3537, 82);
            return __result_obj__0;
        }
    }
        __result_obj__0 = (struct sType* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3541, 83);
    come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3541, 84);
    neo_current_frame = fr.prev;
    come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3541, 85);
    return __result_obj__0;
}

static struct sType*  map$2char$phsType$ph_operator_load_element(struct map$2char$phsType$ph* self, char*  key  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsType$ph_operator_load_element"; neo_current_frame = &fr;
    struct sType*  default_value  ;
    struct sType*  __result_obj__0  ;
    unsigned int hash;
    unsigned int it;
    memset(&default_value,0,sizeof(struct sType* ));
    if(self==((void*)0)) {
                __result_obj__0 = (struct sType* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3513, 86);
        come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3513, 87);
        neo_current_frame = fr.prev;
        come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3513, 88);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char* )key))%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if(string_equals(self->keys[it],key)) {
                                __result_obj__0 = (struct sType* )come_increment_ref_count(self->items[it], "/usr/local/include/neo-c.h", 3524, 89);
                come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3524, 90);
                neo_current_frame = fr.prev;
                come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3524, 91);
                return __result_obj__0;
            }
            it++;
            if(it>=self->size) {
                it=0;
            }
            else if(it==hash) {
                                __result_obj__0 = (struct sType* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3533, 92);
                come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3533, 93);
                neo_current_frame = fr.prev;
                come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3533, 94);
                return __result_obj__0;
            }
        }
        else {
                        __result_obj__0 = (struct sType* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3537, 95);
            come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3537, 96);
            neo_current_frame = fr.prev;
            come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3537, 97);
            return __result_obj__0;
        }
    }
        __result_obj__0 = (struct sType* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3541, 98);
    come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3541, 99);
    neo_current_frame = fr.prev;
    come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3541, 100);
    return __result_obj__0;
}

static _Bool list$1char$ph_contained(struct list$1char$ph* self, char*  item  , _Bool by_pointer)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_contained"; neo_current_frame = &fr;
    char*  it  ;
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    for(it=list$1char$ph_begin(self)    ;!list$1char$ph_end(self);it=list$1char$ph_next(self)){
        if((!by_pointer&&string_equals(it,item))||(by_pointer&&it==item)) {
                        neo_current_frame = fr.prev;
            return (_Bool)1;
        }
    }
        neo_current_frame = fr.prev;
    return (_Bool)0;
        neo_current_frame = fr.prev;
}

static char*  list$1char$ph_begin(struct list$1char$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_begin"; neo_current_frame = &fr;
    char*  result  ;
    char*  __result_obj__0  ;
    char*  result_0  ;
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
    memset(&result_0,0,sizeof(char* ));
        __result_obj__0 = result_0;
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
    char*  result_1  ;
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
    memset(&result_1,0,sizeof(char* ));
        __result_obj__0 = result_1;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static char span$1char$p$p_operator_derefference(struct span$1char$p* self)
{
    char* p;
    if(self==((void*)0)) {
        puts("null pointer exception. self is null");
        stackframe();
        exit(2);
    }
    if(self->local) {
        if(self->stacktop<neo_current_frame->stacktop) {
            puts("refferenced stack object is vanished");
            stackframe2(self);
            exit(127);
        }
    }
    if(self->heap) {
        if(!come_is_alive(self->memory)) {
            puts("refferenced heap object is vanished");
            stackframe2(self);
            exit(127);
        }
    }
    p=self->p;
    if(sizeof(char)>self->len) {
        puts("invalid span. len is few");
        stackframe2(self);
        exit(2);
    }
    if(self->p>=(char*)self->memory+self->len) {
        puts("out of range of span(3)");
        stackframe2(self);
        exit(1);
    }
    if(self->p<(char*)self->memory) {
        puts("out of range of span(4)");
        stackframe2(self);
        exit(1);
    }
        return *p;
}

static char span$1char$p_operator_derefference(struct span$1char$p* self)
{
    char* p;
    if(self==((void*)0)) {
        puts("null pointer exception. self is null");
        stackframe();
        exit(2);
    }
    if(self->local) {
        if(self->stacktop<neo_current_frame->stacktop) {
            puts("refferenced stack object is vanished");
            stackframe2(self);
            exit(127);
        }
    }
    if(self->heap) {
        if(!come_is_alive(self->memory)) {
            puts("refferenced heap object is vanished");
            stackframe2(self);
            exit(127);
        }
    }
    p=self->p;
    if(sizeof(char)>self->len) {
        puts("invalid span. len is few");
        stackframe2(self);
        exit(2);
    }
    if(self->p>=(char*)self->memory+self->len) {
        puts("out of range of span(3)");
        stackframe2(self);
        exit(1);
    }
    if(self->p<(char*)self->memory) {
        puts("out of range of span(4)");
        stackframe2(self);
        exit(1);
    }
        return *p;
}

_Bool is_contained_generics_class(struct sType*  type  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "is_contained_generics_class"; neo_current_frame = &fr;
    struct sType*  type2  ;
    void* __right_value0 = (void*)0;
    struct sType*  __dec_obj35  ;
    struct sType*  __dec_obj36  ;
    struct list$1sType$ph* _o2_saved_1;
    struct sType*  it  ;
    _Bool __result_obj__0;
    memset(&type2, 0, sizeof(type2));
    if(type->mNoSolvedGenericsType) {
        __dec_obj35=type2,
        type2=(struct sType* )come_increment_ref_count(sType_clone(type->mNoSolvedGenericsType), "06type.nc", 68, 282);
        come_call_finalizer(sType_finalize, __dec_obj35,(void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc", 68, 281);
    }
    else {
        __right_value0 = (void*)0;
        __dec_obj36=type2,
        type2=(struct sType* )come_increment_ref_count(sType_clone(type), "06type.nc", 71, 284);
        come_call_finalizer(sType_finalize, __dec_obj36,(void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc", 71, 283);
    }
    for(_o2_saved_1=(struct list$1sType$ph*)come_increment_ref_count(type2->mGenericsTypes, "06type.nc", 73, 285),it=list$1sType$ph_begin(_o2_saved_1)    ;!list$1sType$ph_end(_o2_saved_1);it=list$1sType$ph_next(_o2_saved_1)){
        if(is_contained_generics_class(it,info)) {
                        __result_obj__0 = (_Bool)1;
            come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 75, 286);
            come_call_finalizer(list$1sType$ph$p_finalize, _o2_saved_1, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 75, 287);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
    }
    if(type2->mClass->mGenerics) {
                __result_obj__0 = (_Bool)1;
        come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 80, 288);
        come_call_finalizer(list$1sType$ph$p_finalize, _o2_saved_1, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 80, 289);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(type2->mClass->mMethodGenerics) {
                __result_obj__0 = (_Bool)1;
        come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 83, 290);
        come_call_finalizer(list$1sType$ph$p_finalize, _o2_saved_1, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 83, 291);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
        __result_obj__0 = (_Bool)0;
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 86, 292);
    come_call_finalizer(list$1sType$ph$p_finalize, _o2_saved_1, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 86, 293);
    neo_current_frame = fr.prev;
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
                __result_obj__0 = (struct sType* )come_increment_ref_count((void*)0, "sType_clone", 4, 104);
        neo_current_frame = fr.prev;
        come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sType_clone}", 4, 105);
        return __result_obj__0;
    }
    result=(struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "sType_clone", 5, 106, "struct sType* "), "sType_clone", 5, 107);
    if(self!=((void*)0)) {
        result->mClass=self->mClass;
    }
    if(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj1=result->mOriginalLoadVarType,
        result->mOriginalLoadVarType=(struct sType* )come_increment_ref_count(sType_clone(self->mOriginalLoadVarType), "sType_clone", 7, 109);
        come_call_finalizer(sType_finalize, __dec_obj1,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 7, 108);
    }
    if(self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj2=result->mChannelType,
        result->mChannelType=(struct sType* )come_increment_ref_count(sType_clone(self->mChannelType), "sType_clone", 8, 111);
        come_call_finalizer(sType_finalize, __dec_obj2,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 8, 110);
    }
    if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj6=result->mGenericsTypes,
        result->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mGenericsTypes), "sType_clone", 9, 141);
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj6,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 9, 140);
    }
    if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj7=result->mNoSolvedGenericsType,
        result->mNoSolvedGenericsType=(struct sType* )come_increment_ref_count(sType_clone(self->mNoSolvedGenericsType), "sType_clone", 10, 143);
        come_call_finalizer(sType_finalize, __dec_obj7,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 10, 142);
    }
    if(self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj8=result->mSizeNum,
        result->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum), "sType_clone", 11, 152);
        (__dec_obj8 ? __dec_obj8 = come_decrement_ref_count(__dec_obj8, ((struct sNode*)__dec_obj8)->finalize, ((struct sNode*)__dec_obj8)->_protocol_obj, 0,0, (void*)0, "sType_clone", 11, 151) :0);
    }
    if(self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj9=result->mAlignas,
        result->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas), "sType_clone", 12, 154);
        (__dec_obj9 ? __dec_obj9 = come_decrement_ref_count(__dec_obj9, ((struct sNode*)__dec_obj9)->finalize, ((struct sNode*)__dec_obj9)->_protocol_obj, 0,0, (void*)0, "sType_clone", 12, 153) :0);
    }
    if(self!=((void*)0)) {
        result->mAlignasDouble=self->mAlignasDouble;
    }
    if(self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj10=result->mTupleName,
        result->mTupleName=(char* )come_increment_ref_count((char* )come_memdup(self->mTupleName, "sType_clone", 14, 155, "char* "), "sType_clone", 14, 157);
        __dec_obj10 = come_decrement_ref_count(__dec_obj10, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 14, 156);
    }
    if(self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj11=result->mAttribute,
        result->mAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mAttribute, "sType_clone", 15, 158, "char* "), "sType_clone", 15, 160);
        __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 15, 159);
    }
    if(self!=((void*)0)&&self->mVarAttribute!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj12=result->mVarAttribute,
        result->mVarAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mVarAttribute, "sType_clone", 16, 161, "char* "), "sType_clone", 16, 163);
        __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 16, 162);
    }
    if(self!=((void*)0)&&self->mMiddleAttribute!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj13=result->mMiddleAttribute,
        result->mMiddleAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mMiddleAttribute, "sType_clone", 17, 164, "char* "), "sType_clone", 17, 166);
        __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 17, 165);
    }
    if(self!=((void*)0)&&self->mPointerAttribute!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj14=result->mPointerAttribute,
        result->mPointerAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mPointerAttribute, "sType_clone", 18, 167, "char* "), "sType_clone", 18, 169);
        __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 18, 168);
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
        result->mAnonymousName=(char* )come_increment_ref_count((char* )come_memdup(self->mAnonymousName, "sType_clone", 49, 170, "char* "), "sType_clone", 49, 172);
        __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 49, 171);
    }
    if(self!=((void*)0)) {
        result->mInnerStruct=self->mInnerStruct;
    }
    if(self!=((void*)0)&&self->mInnerStructName!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj16=result->mInnerStructName,
        result->mInnerStructName=(char* )come_increment_ref_count((char* )come_memdup(self->mInnerStructName, "sType_clone", 51, 173, "char* "), "sType_clone", 51, 175);
        __dec_obj16 = come_decrement_ref_count(__dec_obj16, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 51, 174);
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
        result->mAsmName=(char* )come_increment_ref_count((char* )come_memdup(self->mAsmName, "sType_clone", 54, 176, "char* "), "sType_clone", 54, 178);
        __dec_obj17 = come_decrement_ref_count(__dec_obj17, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 54, 177);
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
        result->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mArrayNum), "sType_clone", 57, 208);
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj21,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 57, 207);
    }
    if(self!=((void*)0)&&self->mVarNameArrayNum!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj22=result->mVarNameArrayNum,
        result->mVarNameArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mVarNameArrayNum), "sType_clone", 58, 210);
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj22,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 58, 209);
    }
    if(self!=((void*)0)&&self->mArrayStatic!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj23=result->mArrayStatic,
        result->mArrayStatic=(struct list$1int$*)come_increment_ref_count(list$1int$$p_clone(self->mArrayStatic), "sType_clone", 59, 230);
        come_call_finalizer(list$1int$_finalize, __dec_obj23,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 59, 229);
    }
    if(self!=((void*)0)&&self->mArrayRestrict!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj24=result->mArrayRestrict,
        result->mArrayRestrict=(struct list$1int$*)come_increment_ref_count(list$1int$$p_clone(self->mArrayRestrict), "sType_clone", 60, 232);
        come_call_finalizer(list$1int$_finalize, __dec_obj24,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 60, 231);
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
        result->mTypedefOriginalType=(struct sType* )come_increment_ref_count(sType_clone(self->mTypedefOriginalType), "sType_clone", 66, 234);
        come_call_finalizer(sType_finalize, __dec_obj25,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 66, 233);
    }
    if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj26=result->mOriginalTypeName,
        result->mOriginalTypeName=(char* )come_increment_ref_count((char* )come_memdup(self->mOriginalTypeName, "sType_clone", 67, 235, "char* "), "sType_clone", 67, 237);
        __dec_obj26 = come_decrement_ref_count(__dec_obj26, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 67, 236);
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
        result->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mParamTypes), "sType_clone", 71, 239);
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj27,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 71, 238);
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj31=result->mParamNames,
        result->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->mParamNames), "sType_clone", 72, 271);
        come_call_finalizer(list$1char$ph_finalize, __dec_obj31,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 72, 270);
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj32=result->mResultType,
        result->mResultType=(struct sType* )come_increment_ref_count(sType_clone(self->mResultType), "sType_clone", 73, 273);
        come_call_finalizer(sType_finalize, __dec_obj32,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 73, 272);
    }
    if(self!=((void*)0)) {
        result->mVarArgs=self->mVarArgs;
    }
    if(self!=((void*)0)&&self->mTypeOfNode!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj33=result->mTypeOfNode,
        result->mTypeOfNode=(struct sNode*)come_increment_ref_count(sNode_clone(self->mTypeOfNode), "sType_clone", 75, 275);
        (__dec_obj33 ? __dec_obj33 = come_decrement_ref_count(__dec_obj33, ((struct sNode*)__dec_obj33)->finalize, ((struct sNode*)__dec_obj33)->_protocol_obj, 0,0, (void*)0, "sType_clone", 75, 274) :0);
    }
    if(self!=((void*)0)&&self->mHeapArrayNum!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj34=result->mHeapArrayNum,
        result->mHeapArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mHeapArrayNum), "sType_clone", 76, 277);
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj34,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 76, 276);
    }
        __result_obj__0 = (struct sType* )come_increment_ref_count(result, "sType_clone", 77, 278);
    come_call_finalizer(sType_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sType_clone}", 77, 279);
    neo_current_frame = fr.prev;
    come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sType_clone}", 77, 280);
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
                __result_obj__0 = (struct list$1sType$ph*)come_increment_ref_count(((void*)0), "/usr/local/include/neo-c.h", 1509, 112);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1509, 113);
        return __result_obj__0;
    }
    result=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "/usr/local/include/neo-c.h", 1511, 114, "struct list$1sType$ph*"), "/usr/local/include/neo-c.h", 1511, 118)), "/usr/local/include/neo-c.h", 1511, 119);
    it=self->head;
    while(it!=((void*)0)) {
        if(1) {
            __right_value0 = (void*)0;
            list$1sType$ph_add(result,(struct sType* )come_increment_ref_count(sType_clone(it->item), "/usr/local/include/neo-c.h", 1516, 134));
        }
        else {
            __right_value0 = (void*)0;
            list$1sType$ph_add(result,(struct sType* )come_increment_ref_count(sType_clone(it->item), "/usr/local/include/neo-c.h", 1519, 135));
        }
        it=it->next;
    }
        __result_obj__0 = (struct list$1sType$ph*)come_increment_ref_count(result, "/usr/local/include/neo-c.h", 1525, 136);
    come_call_finalizer(list$1sType$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1525, 137);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1525, 138);
    return __result_obj__0;
}

static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_initialize"; neo_current_frame = &fr;
    struct list$1sType$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = (struct list$1sType$ph*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 1483, 115);
    come_call_finalizer(list$1sType$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1483, 116);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1483, 117);
    return __result_obj__0;
}

static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_add"; neo_current_frame = &fr;
    struct list$1sType$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1sType$ph* litem;
    struct sType*  __dec_obj3  ;
    struct list_item$1sType$ph* litem_2;
    struct sType*  __dec_obj4  ;
    struct list_item$1sType$ph* litem_3;
    struct sType*  __dec_obj5  ;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1529, 120);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/neo-c.h", 1532, 121, "struct list_item$1sType$ph*"))), "/usr/local/include/neo-c.h", 1532, 122);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj3=litem->item,
        litem->item=(struct sType* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1536, 124);
        come_call_finalizer(sType_finalize, __dec_obj3,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1536, 123);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_2=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/neo-c.h", 1542, 125, "struct list_item$1sType$ph*"))), "/usr/local/include/neo-c.h", 1542, 126);
        litem_2->prev=self->head;
        litem_2->next=((void*)0);
        __dec_obj4=litem_2->item,
        litem_2->item=(struct sType* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1546, 128);
        come_call_finalizer(sType_finalize, __dec_obj4,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1546, 127);
        self->tail=litem_2;
        self->head->next=litem_2;
    }
    else {
        __right_value0 = (void*)0;
        litem_3=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/neo-c.h", 1552, 129, "struct list_item$1sType$ph*"))), "/usr/local/include/neo-c.h", 1552, 130);
        litem_3->prev=self->tail;
        litem_3->next=((void*)0);
        __dec_obj5=litem_3->item,
        litem_3->item=(struct sType* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1556, 132);
        come_call_finalizer(sType_finalize, __dec_obj5,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1556, 131);
        self->tail->next=litem_3;
        self->tail=litem_3;
    }
    self->len++;
        __result_obj__0 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1564, 133);
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
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1504, 139);
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
                __result_obj__0 = (struct sNode*)come_increment_ref_count((void*)0, "sNode_clone", 4, 144);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "sNode_clone", 4, 145):(void*)0);
        return __result_obj__0;
    }
    result=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 5, 146, "struct sNode*"), "sNode_clone", 5, 147);
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
        __result_obj__0 = (struct sNode*)come_increment_ref_count(result, "sNode_clone", 16, 148);
    ((result) ? result = come_decrement_ref_count(result, ((struct sNode*)result)->finalize, ((struct sNode*)result)->_protocol_obj, 0, 1,(void*)0, "sNode_clone", 16, 149):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "sNode_clone", 16, 150):(void*)0);
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
                __result_obj__0 = (struct list$1sNode$ph*)come_increment_ref_count(((void*)0), "/usr/local/include/neo-c.h", 1509, 179);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1509, 180);
        return __result_obj__0;
    }
    result=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "/usr/local/include/neo-c.h", 1511, 181, "struct list$1sNode$ph*"), "/usr/local/include/neo-c.h", 1511, 185)), "/usr/local/include/neo-c.h", 1511, 186);
    it=self->head;
    while(it!=((void*)0)) {
        if(1) {
            __right_value0 = (void*)0;
            list$1sNode$ph_add(result,(struct sNode*)come_increment_ref_count(sNode_clone(it->item), "/usr/local/include/neo-c.h", 1516, 201));
        }
        else {
            __right_value0 = (void*)0;
            list$1sNode$ph_add(result,(struct sNode*)come_increment_ref_count(sNode_clone(it->item), "/usr/local/include/neo-c.h", 1519, 202));
        }
        it=it->next;
    }
        __result_obj__0 = (struct list$1sNode$ph*)come_increment_ref_count(result, "/usr/local/include/neo-c.h", 1525, 203);
    come_call_finalizer(list$1sNode$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1525, 204);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1525, 205);
    return __result_obj__0;
}

static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_initialize"; neo_current_frame = &fr;
    struct list$1sNode$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = (struct list$1sNode$ph*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 1483, 182);
    come_call_finalizer(list$1sNode$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1483, 183);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1483, 184);
    return __result_obj__0;
}

static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_add"; neo_current_frame = &fr;
    struct list$1sNode$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1sNode$ph* litem;
    struct sNode* __dec_obj18;
    struct list_item$1sNode$ph* litem_4;
    struct sNode* __dec_obj19;
    struct list_item$1sNode$ph* litem_5;
    struct sNode* __dec_obj20;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0, "/usr/local/include/neo-c.h", 1529, 187):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/neo-c.h", 1532, 188, "struct list_item$1sNode$ph*"))), "/usr/local/include/neo-c.h", 1532, 189);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj18=litem->item,
        litem->item=(struct sNode*)come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1536, 191);
        (__dec_obj18 ? __dec_obj18 = come_decrement_ref_count(__dec_obj18, ((struct sNode*)__dec_obj18)->finalize, ((struct sNode*)__dec_obj18)->_protocol_obj, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1536, 190) :0);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_4=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/neo-c.h", 1542, 192, "struct list_item$1sNode$ph*"))), "/usr/local/include/neo-c.h", 1542, 193);
        litem_4->prev=self->head;
        litem_4->next=((void*)0);
        __dec_obj19=litem_4->item,
        litem_4->item=(struct sNode*)come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1546, 195);
        (__dec_obj19 ? __dec_obj19 = come_decrement_ref_count(__dec_obj19, ((struct sNode*)__dec_obj19)->finalize, ((struct sNode*)__dec_obj19)->_protocol_obj, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1546, 194) :0);
        self->tail=litem_4;
        self->head->next=litem_4;
    }
    else {
        __right_value0 = (void*)0;
        litem_5=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/neo-c.h", 1552, 196, "struct list_item$1sNode$ph*"))), "/usr/local/include/neo-c.h", 1552, 197);
        litem_5->prev=self->tail;
        litem_5->next=((void*)0);
        __dec_obj20=litem_5->item,
        litem_5->item=(struct sNode*)come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1556, 199);
        (__dec_obj20 ? __dec_obj20 = come_decrement_ref_count(__dec_obj20, ((struct sNode*)__dec_obj20)->finalize, ((struct sNode*)__dec_obj20)->_protocol_obj, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1556, 198) :0);
        self->tail->next=litem_5;
        self->tail=litem_5;
    }
    self->len++;
        __result_obj__0 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0, "/usr/local/include/neo-c.h", 1564, 200):(void*)0);
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
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1504, 206);
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
                __result_obj__0 = (struct list$1int$*)come_increment_ref_count(((void*)0), "/usr/local/include/neo-c.h", 1509, 211);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1509, 212);
        return __result_obj__0;
    }
    result=(struct list$1int$*)come_increment_ref_count(list$1int$_initialize((struct list$1int$*)come_increment_ref_count((struct list$1int$*)come_calloc(1, sizeof(struct list$1int$)*(1), "/usr/local/include/neo-c.h", 1511, 213, "struct list$1int$*"), "/usr/local/include/neo-c.h", 1511, 217)), "/usr/local/include/neo-c.h", 1511, 218);
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
        __result_obj__0 = (struct list$1int$*)come_increment_ref_count(result, "/usr/local/include/neo-c.h", 1525, 225);
    come_call_finalizer(list$1int$$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1525, 226);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1525, 227);
    return __result_obj__0;
}

static struct list$1int$* list$1int$_initialize(struct list$1int$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$_initialize"; neo_current_frame = &fr;
    struct list$1int$* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = (struct list$1int$*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 1483, 214);
    come_call_finalizer(list$1int$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1483, 215);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1483, 216);
    return __result_obj__0;
}

static struct list$1int$* list$1int$_add(struct list$1int$* self, int item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$_add"; neo_current_frame = &fr;
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
        litem=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/neo-c.h", 1532, 219, "struct list_item$1int$*"))), "/usr/local/include/neo-c.h", 1532, 220);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        litem->item=item;
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_6=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/neo-c.h", 1542, 221, "struct list_item$1int$*"))), "/usr/local/include/neo-c.h", 1542, 222);
        litem_6->prev=self->head;
        litem_6->next=((void*)0);
        litem_6->item=item;
        self->tail=litem_6;
        self->head->next=litem_6;
    }
    else {
        __right_value0 = (void*)0;
        litem_7=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/neo-c.h", 1552, 223, "struct list_item$1int$*"))), "/usr/local/include/neo-c.h", 1552, 224);
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
        come_call_finalizer(list_item$1int$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1504, 228);
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
                __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(((void*)0), "/usr/local/include/neo-c.h", 1509, 240);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1509, 241);
        return __result_obj__0;
    }
    result=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/neo-c.h", 1511, 242, "struct list$1char$ph*"), "/usr/local/include/neo-c.h", 1511, 246)), "/usr/local/include/neo-c.h", 1511, 247);
    it=self->head;
    while(it!=((void*)0)) {
        if(1) {
            __right_value0 = (void*)0;
            list$1char$ph_add(result,(char* )come_increment_ref_count((char* )come_memdup(it->item, "/usr/local/include/neo-c.h", 1516, 262, "char* "), "/usr/local/include/neo-c.h", 1516, 263));
        }
        else {
            __right_value0 = (void*)0;
            list$1char$ph_add(result,(char* )come_increment_ref_count((char* )come_memdup(it->item, "/usr/local/include/neo-c.h", 1519, 264, "char* "), "/usr/local/include/neo-c.h", 1519, 265));
        }
        it=it->next;
    }
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(result, "/usr/local/include/neo-c.h", 1525, 266);
    come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1525, 267);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1525, 268);
    return __result_obj__0;
}

static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_initialize"; neo_current_frame = &fr;
    struct list$1char$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 1483, 243);
    come_call_finalizer(list$1char$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1483, 244);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1483, 245);
    return __result_obj__0;
}

static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_add"; neo_current_frame = &fr;
    struct list$1char$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1char$ph* litem;
    char*  __dec_obj28  ;
    struct list_item$1char$ph* litem_8;
    char*  __dec_obj29  ;
    struct list_item$1char$ph* litem_9;
    char*  __dec_obj30  ;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1529, 248));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 1532, 249, "struct list_item$1char$ph*"))), "/usr/local/include/neo-c.h", 1532, 250);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj28=litem->item,
        litem->item=(char* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1536, 252);
        __dec_obj28 = come_decrement_ref_count(__dec_obj28, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1536, 251);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_8=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 1542, 253, "struct list_item$1char$ph*"))), "/usr/local/include/neo-c.h", 1542, 254);
        litem_8->prev=self->head;
        litem_8->next=((void*)0);
        __dec_obj29=litem_8->item,
        litem_8->item=(char* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1546, 256);
        __dec_obj29 = come_decrement_ref_count(__dec_obj29, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1546, 255);
        self->tail=litem_8;
        self->head->next=litem_8;
    }
    else {
        __right_value0 = (void*)0;
        litem_9=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 1552, 257, "struct list_item$1char$ph*"))), "/usr/local/include/neo-c.h", 1552, 258);
        litem_9->prev=self->tail;
        litem_9->next=((void*)0);
        __dec_obj30=litem_9->item,
        litem_9->item=(char* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1556, 260);
        __dec_obj30 = come_decrement_ref_count(__dec_obj30, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1556, 259);
        self->tail->next=litem_9;
        self->tail=litem_9;
    }
    self->len++;
        __result_obj__0 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1564, 261));
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
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1504, 269);
    }
            neo_current_frame = fr.prev;
}

static struct sType*  list$1sType$ph_begin(struct list$1sType$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_begin"; neo_current_frame = &fr;
    struct sType*  result  ;
    struct sType*  __result_obj__0  ;
    struct sType*  result_10  ;
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
    memset(&result_10,0,sizeof(struct sType* ));
        __result_obj__0 = result_10;
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
    struct sType*  result_11  ;
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
    memset(&result_11,0,sizeof(struct sType* ));
        __result_obj__0 = result_11;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

_Bool is_contained_generics_placeholder(struct sType*  type  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "is_contained_generics_placeholder"; neo_current_frame = &fr;
    struct sType*  type2  ;
    void* __right_value0 = (void*)0;
    struct sType*  __dec_obj37  ;
    struct sType*  __dec_obj38  ;
    struct list$1sType$ph* _o2_saved_2;
    struct sType*  it  ;
    _Bool __result_obj__0;
    char*  class_name  ;
    memset(&type2, 0, sizeof(type2));
    if(type->mNoSolvedGenericsType) {
        __dec_obj37=type2,
        type2=(struct sType* )come_increment_ref_count(sType_clone(type->mNoSolvedGenericsType), "06type.nc", 93, 295);
        come_call_finalizer(sType_finalize, __dec_obj37,(void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc", 93, 294);
    }
    else {
        __right_value0 = (void*)0;
        __dec_obj38=type2,
        type2=(struct sType* )come_increment_ref_count(sType_clone(type), "06type.nc", 96, 297);
        come_call_finalizer(sType_finalize, __dec_obj38,(void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc", 96, 296);
    }
    for(_o2_saved_2=(struct list$1sType$ph*)come_increment_ref_count(type2->mGenericsTypes, "06type.nc", 99, 298),it=list$1sType$ph_begin(_o2_saved_2)    ;!list$1sType$ph_end(_o2_saved_2);it=list$1sType$ph_next(_o2_saved_2)){
        if(is_contained_generics_placeholder(it,info)) {
                        __result_obj__0 = (_Bool)1;
            come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 101, 299);
            come_call_finalizer(list$1sType$ph$p_finalize, _o2_saved_2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 101, 300);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
    }
    if(type2->mClass==((void*)0)||type2->mClass->mName==((void*)0)) {
                __result_obj__0 = (_Bool)0;
        come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 106, 301);
        come_call_finalizer(list$1sType$ph$p_finalize, _o2_saved_2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 106, 302);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    class_name=(char* )come_increment_ref_count(__builtin_string(type2->mClass->mName), "06type.nc", 109, 303);
        __result_obj__0 = string_index(class_name,"__generics_type",-1)>=0||string_index(class_name,"__mgenerics_type",-1)>=0;
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 111, 304);
    come_call_finalizer(list$1sType$ph$p_finalize, _o2_saved_2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 111, 305);
    (class_name = come_decrement_ref_count(class_name, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 111, 306));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$* parse_params(struct sInfo*  info  , _Bool in_constructor_)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "parse_params"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1sType$ph* param_types;
    struct list$1char$ph* param_names;
    struct list$1char$ph* param_default_parametors;
    _Bool var_args;
    struct sType*  type_  ;
    _Bool void_param;
    char* p;
    int sline;
    struct tuple3$3sType$phchar$ph_Bool$* multiple_assign_var1
;    struct sType*  param_type  =0;
    char*  param_name  =0;
    _Bool err=0;
    struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$* __result_obj__0;
    struct sType*  param_type2  ;
    char* p_16;
    _Bool no_comma;
    struct sNode* node;
    char* p2;
    param_types=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "06type.nc", 116, 307, "struct list$1sType$ph*"), "06type.nc", 116, 308)), "06type.nc", 116, 309);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    param_names=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "06type.nc", 117, 310, "struct list$1char$ph*"), "06type.nc", 117, 311)), "06type.nc", 117, 312);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    param_default_parametors=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "06type.nc", 118, 313, "struct list$1char$ph*"), "06type.nc", 118, 314)), "06type.nc", 118, 315);
    var_args=(_Bool)0;
    if(in_constructor_) {
        __right_value0 = (void*)0;
        list$1char$ph_add(param_names,(char*)come_increment_ref_count(xsprintf("self"), "06type.nc", 122, 316));
        __right_value0 = (void*)0;
        type_=(struct sType* )come_increment_ref_count(sType_clone(info->class_type), "06type.nc", 123, 317);
        type_->mHeap=(_Bool)1;
        list$1sType$ph_add(param_types,(struct sType* )come_increment_ref_count(type_, "06type.nc", 125, 318));
        list$1char$ph_add(param_default_parametors,((void*)0));
        come_call_finalizer(sType_finalize, type_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 134, 319);
    }
    else if(info->in_class) {
        __right_value0 = (void*)0;
        list$1char$ph_add(param_names,(char*)come_increment_ref_count(xsprintf("self"), "06type.nc", 129, 320));
        __right_value0 = (void*)0;
        list$1sType$ph_add(param_types,(struct sType* )come_increment_ref_count(sType_clone(info->class_type), "06type.nc", 130, 321));
        list$1char$ph_add(param_default_parametors,((void*)0));
    }
    expected_next_character(40,info);
    void_param=(_Bool)0;
    {
        p=info->p->p;
        sline=info->sline;
        if(parsecmp("void",info)) {
            info->p->p+=strlen("void");
            skip_spaces_and_lf(info);
            if(span$1char$p_operator_derefference(info->p)==41) {
                void_param=(_Bool)1;
            }
        }
        info->p->p=p;
        info->sline=sline;
    }
    if(void_param) {
        if(parsecmp("void",info)) {
            info->p->p+=strlen("void");
            skip_spaces_and_lf(info);
            if(span$1char$p_operator_derefference(info->p)==41) {
                info->p->p++;
                skip_spaces_and_lf(info);
            }
        }
    }
    else {
        while((_Bool)1) {
            if(span$1char$p_operator_derefference(info->p)==41) {
                info->p->p++;
                skip_spaces_and_lf(info);
                break;
            }
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            multiple_assign_var1=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=parse_type(info,(_Bool)1,(_Bool)0,(_Bool)1)));
            param_type=(struct sType* )come_increment_ref_count(multiple_assign_var1->v1, "06type.nc", 176, 322);
            param_name=(char* )come_increment_ref_count(multiple_assign_var1->v2, "06type.nc", 176, 323);
            err=multiple_assign_var1->v3;
            come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "06type.nc}", 176, 326);
            if(!err) {
                printf("%s %d: failed to function parametor\n",info->sname,info->sline);
                                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                __result_obj__0 = (struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$*)come_increment_ref_count(((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$*)(__right_value1=tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$_initialize((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$*)come_increment_ref_count((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$*)come_calloc(1, sizeof(struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$)*(1), "06type.nc", 180, 327, "struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$"), "06type.nc", 180, 343),(struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)((void*)0), "06type.nc", 180, 344),(struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)((void*)0), "06type.nc", 180, 345),(struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)((void*)0), "06type.nc", 180, 346),(_Bool)0))), "06type.nc", 180, 347);
                come_call_finalizer(sType_finalize, param_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 180, 348);
                (param_name = come_decrement_ref_count(param_name, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 180, 349));
                come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 180, 350);
                come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 180, 351);
                come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 180, 352);
                come_call_finalizer(tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "06type.nc}", 180, 353);
                neo_current_frame = fr.prev;
                come_call_finalizer(tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "06type.nc}", 180, 354);
                return __result_obj__0;
            }
            __right_value0 = (void*)0;
            param_type2=(struct sType* )come_increment_ref_count(solve_generics(param_type,info->generics_type,info), "06type.nc", 183, 355);
            __right_value0 = (void*)0;
            list$1sType$ph_push_back(param_types,(struct sType* )come_increment_ref_count(sType_clone(param_type2), "06type.nc", 185, 370));
            __right_value0 = (void*)0;
            list$1char$ph_push_back(param_names,(char* )come_increment_ref_count((char* )come_memdup(param_name, "06type.nc", 186, 385, "char* "), "06type.nc", 186, 386));
            if(span$1char$p_operator_derefference(info->p)==61&&*(info->p->p+1)!=61&&*(info->p->p+1)!=62) {
                info->p->p++;
                skip_spaces_and_lf(info);
                p_16=info->p->p;
                no_comma=info->no_comma;
                info->no_comma=(_Bool)1;
                __right_value0 = (void*)0;
                node=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "06type.nc", 198, 387);
                info->no_comma=no_comma;
                p2=info->p->p;
                char buf[p2-p_16+1];
                memset(&buf, 0, sizeof(buf));
                memcpy(buf,p_16,p2-p_16);
                buf[p2-p_16]=0;
                __right_value0 = (void*)0;
                list$1char$ph_push_back(param_default_parametors,(char* )come_increment_ref_count(__builtin_string(buf), "06type.nc", 208, 388));
                ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "06type.nc", 214, 389):(void*)0);
            }
            else {
                list$1char$ph_push_back(param_default_parametors,((void*)0));
            }
            skip_spaces_and_lf(info);
            if(span$1char$p_operator_derefference(info->p)==44) {
                info->p->p++;
                skip_spaces_and_lf(info);
                if(parsecmp("...",info)) {
                    info->p->p+=strlen("...");
                    skip_spaces_and_lf(info);
                    var_args=(_Bool)1;
                    expected_next_character(41,info);
                    come_call_finalizer(sType_finalize, param_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 226, 390);
                    (param_name = come_decrement_ref_count(param_name, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 226, 391));
                    come_call_finalizer(sType_finalize, param_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 226, 392);
                    break;
                }
            }
            else if(span$1char$p_operator_derefference(info->p)==41) {
                info->p->p++;
                skip_spaces_and_lf(info);
                come_call_finalizer(sType_finalize, param_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 232, 393);
                (param_name = come_decrement_ref_count(param_name, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 232, 394));
                come_call_finalizer(sType_finalize, param_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 232, 395);
                break;
            }
            come_call_finalizer(sType_finalize, param_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 235, 396);
            (param_name = come_decrement_ref_count(param_name, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 235, 397));
            come_call_finalizer(sType_finalize, param_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 235, 398);
        }
    }
        __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __result_obj__0 = (struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$*)come_increment_ref_count(((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$*)(__right_value1=tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$_initialize((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$*)come_increment_ref_count((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$*)come_calloc(1, sizeof(struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$)*(1), "06type.nc", 237, 399, "struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$"), "06type.nc", 237, 400),(struct list$1sType$ph*)come_increment_ref_count(param_types, "06type.nc", 237, 401),(struct list$1char$ph*)come_increment_ref_count(param_names, "06type.nc", 237, 402),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors, "06type.nc", 237, 403),var_args))), "06type.nc", 237, 404);
    come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 237, 405);
    come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 237, 406);
    come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 237, 407);
    come_call_finalizer(tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "06type.nc}", 237, 408);
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "06type.nc}", 237, 409);
    return __result_obj__0;
}

static void tuple3$3sType$phchar$ph_Bool$$p_finalize(struct tuple3$3sType$phchar$ph_Bool$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple3$3sType$phchar$ph_Bool$$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0, "tuple3$3sType$phchar$ph_Bool$$p_finalize}", 2, 324);
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0, (void*)0, "tuple3$3sType$phchar$ph_Bool$$p_finalize", 3, 325));
    }
                neo_current_frame = fr.prev;
}

static struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$* tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$_initialize(struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$* self, struct list$1sType$ph* v1, struct list$1char$ph* v2, struct list$1char$ph* v3, _Bool v4)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$_initialize"; neo_current_frame = &fr;
    struct list$1sType$ph* __dec_obj39;
    struct list$1char$ph* __dec_obj40;
    struct list$1char$ph* __dec_obj41;
    struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$* __result_obj__0;
    __dec_obj39=self->v1,
    self->v1=(struct list$1sType$ph*)come_increment_ref_count(v1, "/usr/local/include/neo-c.h", 4057, 329);
    come_call_finalizer(list$1sType$ph_finalize, __dec_obj39,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 4057, 328);
    __dec_obj40=self->v2,
    self->v2=(struct list$1char$ph*)come_increment_ref_count(v2, "/usr/local/include/neo-c.h", 4058, 331);
    come_call_finalizer(list$1char$ph_finalize, __dec_obj40,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 4058, 330);
    __dec_obj41=self->v3,
    self->v3=(struct list$1char$ph*)come_increment_ref_count(v3, "/usr/local/include/neo-c.h", 4059, 333);
    come_call_finalizer(list$1char$ph_finalize, __dec_obj41,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 4059, 332);
    self->v4=v4;
        __result_obj__0 = (struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 4062, 334);
    come_call_finalizer(tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 4062, 338);
    come_call_finalizer(list$1sType$ph$p_finalize, v1, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 4062, 339);
    come_call_finalizer(list$1char$ph$p_finalize, v2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 4062, 340);
    come_call_finalizer(list$1char$ph$p_finalize, v3, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 4062, 341);
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 4062, 342);
    return __result_obj__0;
}

static void tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$$p_finalize(struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0, "tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$$p_finalize}", 2, 335);
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$$p_finalize}", 3, 336);
    }
    if(self!=((void*)0)&&self->v3!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, self->v3, (void*)0, (void*)0, 0, 0, 0, (void*)0, "tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$$p_finalize}", 4, 337);
    }
        neo_current_frame = fr.prev;
}

static struct list$1sType$ph* list$1sType$ph_push_back(struct list$1sType$ph* self, struct sType*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_push_back"; neo_current_frame = &fr;
    struct list$1sType$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1sType$ph* litem;
    struct sType*  __dec_obj42  ;
    struct list_item$1sType$ph* litem_12;
    struct sType*  __dec_obj43  ;
    struct list_item$1sType$ph* litem_13;
    struct sType*  __dec_obj44  ;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1613, 356);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/neo-c.h", 1617, 357, "struct list_item$1sType$ph*"))), "/usr/local/include/neo-c.h", 1617, 358);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj42=litem->item,
        litem->item=(struct sType* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1621, 360);
        come_call_finalizer(sType_finalize, __dec_obj42,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1621, 359);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_12=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/neo-c.h", 1627, 361, "struct list_item$1sType$ph*"))), "/usr/local/include/neo-c.h", 1627, 362);
        litem_12->prev=self->head;
        litem_12->next=((void*)0);
        __dec_obj43=litem_12->item,
        litem_12->item=(struct sType* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1631, 364);
        come_call_finalizer(sType_finalize, __dec_obj43,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1631, 363);
        self->tail=litem_12;
        self->head->next=litem_12;
    }
    else {
        __right_value0 = (void*)0;
        litem_13=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/neo-c.h", 1637, 365, "struct list_item$1sType$ph*"))), "/usr/local/include/neo-c.h", 1637, 366);
        litem_13->prev=self->tail;
        litem_13->next=((void*)0);
        __dec_obj44=litem_13->item,
        litem_13->item=(struct sType* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1641, 368);
        come_call_finalizer(sType_finalize, __dec_obj44,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1641, 367);
        self->tail->next=litem_13;
        self->tail=litem_13;
    }
    self->len++;
        __result_obj__0 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1649, 369);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_push_back"; neo_current_frame = &fr;
    struct list$1char$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1char$ph* litem;
    char*  __dec_obj45  ;
    struct list_item$1char$ph* litem_14;
    char*  __dec_obj46  ;
    struct list_item$1char$ph* litem_15;
    char*  __dec_obj47  ;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1613, 371));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 1617, 372, "struct list_item$1char$ph*"))), "/usr/local/include/neo-c.h", 1617, 373);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj45=litem->item,
        litem->item=(char* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1621, 375);
        __dec_obj45 = come_decrement_ref_count(__dec_obj45, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1621, 374);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_14=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 1627, 376, "struct list_item$1char$ph*"))), "/usr/local/include/neo-c.h", 1627, 377);
        litem_14->prev=self->head;
        litem_14->next=((void*)0);
        __dec_obj46=litem_14->item,
        litem_14->item=(char* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1631, 379);
        __dec_obj46 = come_decrement_ref_count(__dec_obj46, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1631, 378);
        self->tail=litem_14;
        self->head->next=litem_14;
    }
    else {
        __right_value0 = (void*)0;
        litem_15=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 1637, 380, "struct list_item$1char$ph*"))), "/usr/local/include/neo-c.h", 1637, 381);
        litem_15->prev=self->tail;
        litem_15->next=((void*)0);
        __dec_obj47=litem_15->item,
        litem_15->item=(char* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1641, 383);
        __dec_obj47 = come_decrement_ref_count(__dec_obj47, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1641, 382);
        self->tail->next=litem_15;
        self->tail=litem_15;
    }
    self->len++;
        __result_obj__0 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1649, 384));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

char*  parse_square_attribute(struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "parse_square_attribute"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    void* __right_value1 = (void*)0;
    struct buffer*  result  ;
    char*  ns  ;
    char*  keyword  ;
    char*  __dec_obj48  ;
    char*  __dec_obj49  ;
    char* arg_head;
    char* arg_tail;
    _Bool gnu_ns;
    _Bool mapped;
    skip_spaces_and_lf(info);
    if(!(span$1char$p_operator_derefference(info->p)==91&&*(info->p->p+1)==91)) {
                __result_obj__0 = (char* )come_increment_ref_count(((char*)(__right_value0=xsprintf(""))), "06type.nc", 251, 410);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "06type.nc", 251, 411));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "06type.nc", 251, 412));
        return __result_obj__0;
    }
    info->p->p+=2;
    skip_spaces_and_lf(info);
    __right_value0 = (void*)0;
    result=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "06type.nc", 257, 413, "struct buffer* "), "06type.nc", 257, 414)), "06type.nc", 257, 415);
    while(span$1char$p_operator_derefference(info->p)) {
        if(span$1char$p_operator_derefference(info->p)==93&&*(info->p->p+1)==93) {
            info->p->p+=2;
            skip_spaces_and_lf(info);
            break;
        }
        if(!(xisalpha(span$1char$p_operator_derefference(info->p))||span$1char$p_operator_derefference(info->p)==95)) {
            info->p->p++;
            continue;
        }
        __right_value0 = (void*)0;
        ns=(char*)come_increment_ref_count(xsprintf(""), "06type.nc", 271, 416);
        __right_value0 = (void*)0;
        keyword=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "06type.nc", 272, 417);
        if(span$1char$p_operator_derefference(info->p)==58&&*(info->p->p+1)==58) {
            __dec_obj48=ns,
            ns=(char* )come_increment_ref_count(keyword, "06type.nc", 275, 419);
            __dec_obj48 = come_decrement_ref_count(__dec_obj48, (void*)0, (void*)0, 0,0, (void*)0, "06type.nc", 275, 418);
            info->p->p+=2;
            skip_spaces_and_lf(info);
            if(xisalpha(span$1char$p_operator_derefference(info->p))||span$1char$p_operator_derefference(info->p)==95) {
                __right_value0 = (void*)0;
                __dec_obj49=keyword,
                keyword=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "06type.nc", 280, 421);
                __dec_obj49 = come_decrement_ref_count(__dec_obj49, (void*)0, (void*)0, 0,0, (void*)0, "06type.nc", 280, 420);
            }
            else {
                (ns = come_decrement_ref_count(ns, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 283, 422));
                (keyword = come_decrement_ref_count(keyword, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 283, 423));
                break;
            }
        }
        arg_head=((void*)0);
        arg_tail=((void*)0);
        if(span$1char$p_operator_derefference(info->p)==40) {
            arg_head=info->p->p;
            skip_paren(info);
            arg_tail=info->p->p;
        }
        gnu_ns=string_operator_equals(ns,"gnu")||string_operator_equals(ns,"__gnu__");
        mapped=(_Bool)0;
        if(string_operator_equals(keyword,"maybe_unused")||string_operator_equals(keyword,"unused")) {
            if(buffer_length(result)>0) {
                buffer_append_str(result," ");
            }
            buffer_append_str(result,"__attribute__((unused))");
            mapped=(_Bool)1;
        }
        else if(string_operator_equals(keyword,"deprecated")) {
            if(buffer_length(result)>0) {
                buffer_append_str(result," ");
            }
            buffer_append_str(result,"__attribute__((deprecated");
            if(arg_head&&arg_tail&&arg_tail>arg_head) {
                buffer_append(result,arg_head,arg_tail-arg_head);
            }
            buffer_append_str(result,"))");
            mapped=(_Bool)1;
        }
        else if(string_operator_equals(keyword,"nodiscard")||string_operator_equals(keyword,"warn_unused_result")) {
            if(buffer_length(result)>0) {
                buffer_append_str(result," ");
            }
            buffer_append_str(result,"__attribute__((warn_unused_result))");
            mapped=(_Bool)1;
        }
        else if(string_operator_equals(keyword,"noreturn")) {
            if(buffer_length(result)>0) {
                buffer_append_str(result," ");
            }
            buffer_append_str(result,"__attribute__((noreturn))");
            mapped=(_Bool)1;
        }
        else if(string_operator_equals(keyword,"fallthrough")) {
            if(buffer_length(result)>0) {
                buffer_append_str(result," ");
            }
            buffer_append_str(result,"__attribute__((fallthrough))");
            mapped=(_Bool)1;
        }
        else if(string_operator_equals(keyword,"aligned")) {
            if(buffer_length(result)>0) {
                buffer_append_str(result," ");
            }
            buffer_append_str(result,"__attribute__((aligned");
            if(arg_head&&arg_tail&&arg_tail>arg_head) {
                buffer_append(result,arg_head,arg_tail-arg_head);
            }
            buffer_append_str(result,"))");
            mapped=(_Bool)1;
        }
        else if(string_operator_equals(keyword,"packed")) {
            if(buffer_length(result)>0) {
                buffer_append_str(result," ");
            }
            buffer_append_str(result,"__attribute__((packed))");
            mapped=(_Bool)1;
        }
        else if(string_operator_equals(keyword,"noinline")) {
            if(buffer_length(result)>0) {
                buffer_append_str(result," ");
            }
            buffer_append_str(result,"__attribute__((noinline))");
            mapped=(_Bool)1;
        }
        else if(gnu_ns) {
            if(buffer_length(result)>0) {
                buffer_append_str(result," ");
            }
            buffer_append_str(result,"__attribute__((");
            buffer_append_str(result,keyword);
            if(arg_head&&arg_tail&&arg_tail>arg_head) {
                buffer_append(result,arg_head,arg_tail-arg_head);
            }
            buffer_append_str(result,"))");
            mapped=(_Bool)1;
        }
        if(!mapped) {
        }
        skip_spaces_and_lf(info);
        if(span$1char$p_operator_derefference(info->p)==44) {
            info->p->p++;
            skip_spaces_and_lf(info);
        }
        (ns = come_decrement_ref_count(ns, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 386, 424));
        (keyword = come_decrement_ref_count(keyword, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 386, 425));
    }
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=buffer_to_string(result))), "06type.nc", 386, 426);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 386, 427);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "06type.nc", 386, 428));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "06type.nc", 386, 429));
    return __result_obj__0;
}

char*  parse_declspec_attribute(struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "parse_declspec_attribute"; neo_current_frame = &fr;
    char* p;
    int sline;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    void* __right_value1 = (void*)0;
    struct buffer*  result  ;
    char*  keyword  ;
    char* arg_head;
    char* arg_tail;
    char* arg_head_17;
    char* arg_tail_18;
    p=info->p->p;
    sline=info->sline;
    if(parsecmp("__declspec",info)) {
        info->p->p+=strlen("__declspec");
        skip_spaces_and_lf(info);
    }
    if(span$1char$p_operator_derefference(info->p)!=40) {
        info->p->p=p;
        info->sline=sline;
                __result_obj__0 = (char* )come_increment_ref_count(((char*)(__right_value0=xsprintf(""))), "06type.nc", 402, 430);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "06type.nc", 402, 431));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "06type.nc", 402, 432));
        return __result_obj__0;
    }
    info->p->p++;
    skip_spaces_and_lf(info);
    __right_value0 = (void*)0;
    result=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "06type.nc", 408, 433, "struct buffer* "), "06type.nc", 408, 434)), "06type.nc", 408, 435);
    while(span$1char$p_operator_derefference(info->p)&&span$1char$p_operator_derefference(info->p)!=41) {
        if(!(xisalpha(span$1char$p_operator_derefference(info->p))||span$1char$p_operator_derefference(info->p)==95)) {
            info->p->p++;
            continue;
        }
        __right_value0 = (void*)0;
        keyword=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "06type.nc", 416, 436);
        skip_spaces_and_lf(info);
        if(string_operator_equals(keyword,"align")) {
            if(span$1char$p_operator_derefference(info->p)==40) {
                arg_head=info->p->p;
                skip_paren(info);
                arg_tail=info->p->p;
                if(buffer_length(result)>0) {
                    buffer_append_str(result," ");
                }
                buffer_append_str(result,"__attribute__((aligned");
                buffer_append(result,arg_head,arg_tail-arg_head);
                buffer_append_str(result,"))");
            }
            else {
                if(buffer_length(result)>0) {
                    buffer_append_str(result," ");
                }
                buffer_append_str(result,"__attribute__((aligned))");
            }
        }
        else if(string_operator_equals(keyword,"noinline")||string_operator_equals(keyword,"noreturn")||string_operator_equals(keyword,"used")||string_operator_equals(keyword,"unused")) {
            if(buffer_length(result)>0) {
                buffer_append_str(result," ");
            }
            buffer_append_format(result,"__attribute__((%s))",keyword);
            if(span$1char$p_operator_derefference(info->p)==40) {
                skip_paren(info);
            }
        }
        else if(string_operator_equals(keyword,"deprecated")) {
            if(buffer_length(result)>0) {
                buffer_append_str(result," ");
            }
            buffer_append_str(result,"__attribute__((deprecated");
            if(span$1char$p_operator_derefference(info->p)==40) {
                arg_head_17=info->p->p;
                skip_paren(info);
                arg_tail_18=info->p->p;
                buffer_append(result,arg_head_17,arg_tail_18-arg_head_17);
            }
            buffer_append_str(result,"))");
        }
        else {
            if(span$1char$p_operator_derefference(info->p)==40) {
                skip_paren(info);
            }
        }
        skip_spaces_and_lf(info);
        if(span$1char$p_operator_derefference(info->p)==44) {
            info->p->p++;
            skip_spaces_and_lf(info);
        }
        (keyword = come_decrement_ref_count(keyword, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 482, 437));
    }
    if(span$1char$p_operator_derefference(info->p)==41) {
        info->p->p++;
        skip_spaces_and_lf(info);
    }
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=buffer_to_string(result))), "06type.nc", 487, 438);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 487, 439);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "06type.nc", 487, 440));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "06type.nc", 487, 441));
    return __result_obj__0;
}

struct tuple2$2char$phchar$ph* parse_attribute(struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "parse_attribute"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer*  asm_fun_name  ;
    struct buffer*  attribute  ;
    int nest;
    int nest_19;
    int nest_20;
    int nest_21;
    int nest_22;
    char*  attr  ;
    char*  attr_23  ;
    char*  attr_24  ;
    int len;
    _Bool in_dquort;
    int brace_num;
    int brace_num_25;
    void* __right_value2 = (void*)0;
    void* __right_value3 = (void*)0;
    struct tuple2$2char$phchar$ph* __result_obj__0;
    asm_fun_name=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "06type.nc", 492, 442, "struct buffer* "), "06type.nc", 492, 443)), "06type.nc", 492, 444);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    attribute=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "06type.nc", 493, 445, "struct buffer* "), "06type.nc", 493, 446)), "06type.nc", 493, 447);
    while((_Bool)1) {
        if(parsecmp("__attribute_pure__",info)) {
            info->p->p+=strlen("__attribute_pure__");
            skip_spaces_and_lf(info);
        }
        else if(parsecmp("__malloc_like",info)) {
            info->p->p+=strlen("__malloc_like");
            skip_spaces_and_lf(info);
        }
        else if(parsecmp("__result_use_check",info)) {
            info->p->p+=strlen("__result_use_check");
            skip_spaces_and_lf(info);
        }
        else if(parsecmp("__alloc_size2",info)) {
            info->p->p+=strlen("__alloc_size2");
            skip_spaces_and_lf(info);
            if(span$1char$p_operator_derefference(info->p)==40) {
                nest=0;
                while(1) {
                    if(span$1char$p_operator_derefference(info->p)==40) {
                        info->p->p++;
                        skip_spaces_and_lf(info);
                        nest++;
                    }
                    else if(span$1char$p_operator_derefference(info->p)==41) {
                        info->p->p++;
                        skip_spaces_and_lf(info);
                        nest--;
                        if(nest==0) {
                            break;
                        }
                    }
                    else if(span$1char$p_operator_derefference(info->p)==0) {
                        break;
                    }
                    else {
                        info->p->p++;
                    }
                }
            }
        }
        else if(parsecmp("__alloc_size",info)) {
            info->p->p+=strlen("__alloc_size");
            skip_spaces_and_lf(info);
            if(span$1char$p_operator_derefference(info->p)==40) {
                nest_19=0;
                while(1) {
                    if(span$1char$p_operator_derefference(info->p)==40) {
                        info->p->p++;
                        skip_spaces_and_lf(info);
                        nest_19++;
                    }
                    else if(span$1char$p_operator_derefference(info->p)==41) {
                        info->p->p++;
                        skip_spaces_and_lf(info);
                        nest_19--;
                        if(nest_19==0) {
                            break;
                        }
                    }
                    else if(span$1char$p_operator_derefference(info->p)==0) {
                        break;
                    }
                    else {
                        info->p->p++;
                    }
                }
            }
        }
        else if(parsecmp("__nonnull",info)) {
            info->p->p+=strlen("__nonnull");
            skip_spaces_and_lf(info);
            if(span$1char$p_operator_derefference(info->p)==40) {
                nest_20=0;
                while(1) {
                    if(span$1char$p_operator_derefference(info->p)==40) {
                        info->p->p++;
                        skip_spaces_and_lf(info);
                        nest_20++;
                    }
                    else if(span$1char$p_operator_derefference(info->p)==41) {
                        info->p->p++;
                        skip_spaces_and_lf(info);
                        nest_20--;
                        if(nest_20==0) {
                            break;
                        }
                    }
                    else if(span$1char$p_operator_derefference(info->p)==0) {
                        break;
                    }
                    else {
                        info->p->p++;
                    }
                }
            }
        }
        else if(parsecmp("_Nonnull",info)) {
            info->p->p+=strlen("_Nonnull");
            skip_spaces_and_lf(info);
            if(span$1char$p_operator_derefference(info->p)==40) {
                nest_21=0;
                while(1) {
                    if(span$1char$p_operator_derefference(info->p)==40) {
                        info->p->p++;
                        skip_spaces_and_lf(info);
                        nest_21++;
                    }
                    else if(span$1char$p_operator_derefference(info->p)==41) {
                        info->p->p++;
                        skip_spaces_and_lf(info);
                        nest_21--;
                        if(nest_21==0) {
                            break;
                        }
                    }
                    else if(span$1char$p_operator_derefference(info->p)==0) {
                        break;
                    }
                    else {
                        info->p->p++;
                    }
                }
            }
        }
        else if(parsecmp("__alloc_align",info)) {
            info->p->p+=strlen("__alloc_align");
            skip_spaces_and_lf(info);
            if(span$1char$p_operator_derefference(info->p)==40) {
                nest_22=0;
                while(1) {
                    if(span$1char$p_operator_derefference(info->p)==40) {
                        info->p->p++;
                        skip_spaces_and_lf(info);
                        nest_22++;
                    }
                    else if(span$1char$p_operator_derefference(info->p)==41) {
                        info->p->p++;
                        skip_spaces_and_lf(info);
                        nest_22--;
                        if(nest_22==0) {
                            break;
                        }
                    }
                    else if(span$1char$p_operator_derefference(info->p)==0) {
                        break;
                    }
                    else {
                        info->p->p++;
                    }
                }
            }
        }
        else if(parsecmp("__attribute_malloc__",info)) {
            info->p->p+=strlen("__attribute_malloc__");
            skip_spaces_and_lf(info);
        }
        else if(parsecmp("__attr_dealloc_fclose",info)) {
            info->p->p+=strlen("__attr_dealloc_fclose");
            skip_spaces_and_lf(info);
        }
        else if(parsecmp("__wur",info)) {
            info->p->p+=strlen("__wur");
            skip_spaces_and_lf(info);
        }
        else if(parsecmp("__pure2",info)) {
            info->p->p+=strlen("__pure2");
            skip_spaces_and_lf(info);
        }
        else if(parsecmp("__pure",info)) {
            info->p->p+=strlen("__pure");
            skip_spaces_and_lf(info);
        }
        else if(parsecmp("__noreturn",info)) {
            info->p->p+=strlen("__noreturn");
            skip_spaces_and_lf(info);
        }
        else if(parsecmp("__attribute__",info)) {
            __right_value0 = (void*)0;
            attr=(char* )come_increment_ref_count(parse_struct_attribute(info,(_Bool)1), "06type.nc", 683, 448);
            if(string_operator_not_equals(attr,"")) {
                buffer_append_str(attribute,attr);
            }
            (attr = come_decrement_ref_count(attr, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 782, 449));
        }
        else if(parsecmp("__declspec",info)) {
            __right_value0 = (void*)0;
            attr_23=(char* )come_increment_ref_count(parse_declspec_attribute(info), "06type.nc", 689, 450);
            if(string_operator_not_equals(attr_23,"")) {
                if(buffer_length(attribute)>0) {
                    buffer_append_str(attribute," ");
                }
                buffer_append_str(attribute,attr_23);
            }
            (attr_23 = come_decrement_ref_count(attr_23, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 782, 451));
        }
        else if(span$1char$p_operator_derefference(info->p)==91&&*(info->p->p+1)==91) {
            __right_value0 = (void*)0;
            attr_24=(char* )come_increment_ref_count(parse_square_attribute(info), "06type.nc", 698, 452);
            if(string_operator_not_equals(attr_24,"")) {
                if(buffer_length(attribute)>0) {
                    buffer_append_str(attribute," ");
                }
                buffer_append_str(attribute,attr_24);
            }
            (attr_24 = come_decrement_ref_count(attr_24, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 782, 453));
        }
        else if(parsecmp("__asm__",info)) {
            info->p->p+=strlen("__asm__");
            skip_spaces_and_lf(info);
            if((info->end-info->p->p)>=strlen("__ASMNAME")&&memcmp(info->p->p,"__ASMNAME",strlen("__ASMNAME"))==0) {
                info->p->p+=strlen("__ASMNAME");
                skip_spaces_and_lf(info);
            }
            len=0;
            if(span$1char$p_operator_derefference(info->p)==40) {
                in_dquort=(_Bool)0;
                brace_num=0;
                while(span$1char$p_operator_derefference(info->p)) {
                    if(span$1char$p_operator_derefference(info->p)==34) {
                        info->p->p++;
                        in_dquort=!in_dquort;
                    }
                    else if(in_dquort) {
                        buffer_append_char(asm_fun_name,span$1char$p_operator_derefference(info->p));
                        info->p->p++;
                    }
                    else if(span$1char$p_operator_derefference(info->p)==40) {
                        info->p->p++;
                        brace_num++;
                    }
                    else if(span$1char$p_operator_derefference(info->p)==41) {
                        info->p->p++;
                        brace_num--;
                        if(brace_num==0) {
                            break;
                        }
                    }
                    else {
                        info->p->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
        }
        else if(parsecmp("__asm",info)) {
            info->p->p+=strlen("__asm");
            skip_spaces_and_lf(info);
            if(span$1char$p_operator_derefference(info->p)==40) {
                brace_num_25=0;
                while(span$1char$p_operator_derefference(info->p)) {
                    if(span$1char$p_operator_derefference(info->p)==40) {
                        info->p->p++;
                        brace_num_25++;
                    }
                    else if(span$1char$p_operator_derefference(info->p)==41) {
                        info->p->p++;
                        brace_num_25--;
                        if(brace_num_25==0) {
                            break;
                        }
                    }
                    else {
                        info->p->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
        }
        else if(parse_common_attribute_keyword(attribute,info,(_Bool)1)) {
        }
        else {
            break;
        }
    }
        __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __result_obj__0 = (struct tuple2$2char$phchar$ph*)come_increment_ref_count(((struct tuple2$2char$phchar$ph*)(__right_value3=tuple2$2char$phchar$ph_initialize((struct tuple2$2char$phchar$ph*)come_increment_ref_count((struct tuple2$2char$phchar$ph*)come_calloc(1, sizeof(struct tuple2$2char$phchar$ph)*(1), "06type.nc", 784, 454, "struct tuple2$2char$phchar$ph"), "06type.nc", 784, 466),(char* )come_increment_ref_count(buffer_to_string(asm_fun_name), "06type.nc", 784, 467),(char* )come_increment_ref_count(buffer_to_string(attribute), "06type.nc", 784, 468)))), "06type.nc", 784, 469);
    come_call_finalizer(buffer_finalize, asm_fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 784, 470);
    come_call_finalizer(buffer_finalize, attribute, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 784, 471);
    come_call_finalizer(tuple2$2char$phchar$ph$p_finalize, __right_value3, (void*)0, (void*)0, 0, 1, 0, (void*)0, "06type.nc}", 784, 472);
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple2$2char$phchar$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "06type.nc}", 784, 473);
    return __result_obj__0;
}

static struct tuple2$2char$phchar$ph* tuple2$2char$phchar$ph_initialize(struct tuple2$2char$phchar$ph* self, char*  v1  , char*  v2  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2char$phchar$ph_initialize"; neo_current_frame = &fr;
    char*  __dec_obj50  ;
    char*  __dec_obj51  ;
    struct tuple2$2char$phchar$ph* __result_obj__0;
    __dec_obj50=self->v1,
    self->v1=(char* )come_increment_ref_count(v1, "/usr/local/include/neo-c.h", 3911, 456);
    __dec_obj50 = come_decrement_ref_count(__dec_obj50, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 3911, 455);
    __dec_obj51=self->v2,
    self->v2=(char* )come_increment_ref_count(v2, "/usr/local/include/neo-c.h", 3912, 458);
    __dec_obj51 = come_decrement_ref_count(__dec_obj51, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 3912, 457);
        __result_obj__0 = (struct tuple2$2char$phchar$ph*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 3914, 459);
    come_call_finalizer(tuple2$2char$phchar$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3914, 462);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3914, 463));
    (v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3914, 464));
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple2$2char$phchar$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3914, 465);
    return __result_obj__0;
}

static void tuple2$2char$phchar$ph$p_finalize(struct tuple2$2char$phchar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2char$phchar$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, (void*)0, "tuple2$2char$phchar$ph$p_finalize", 2, 460));
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0, (void*)0, "tuple2$2char$phchar$ph$p_finalize", 3, 461));
    }
        neo_current_frame = fr.prev;
}

void parse_struct_attribute_skip_paren(struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "parse_struct_attribute_skip_paren"; neo_current_frame = &fr;
    int nest;
    skip_spaces_and_lf(info);
    if(span$1char$p_operator_derefference(info->p)==40) {
        nest=0;
        while(1) {
            if(span$1char$p_operator_derefference(info->p)==40) {
                info->p->p++;
                skip_spaces_and_lf(info);
                nest++;
            }
            else if(span$1char$p_operator_derefference(info->p)==41) {
                info->p->p++;
                skip_spaces_and_lf(info);
                nest--;
                if(nest==0) {
                    break;
                }
            }
            else if(span$1char$p_operator_derefference(info->p)==0) {
                break;
            }
            else {
                info->p->p++;
            }
        }
    }
    skip_spaces_and_lf(info);
    neo_current_frame = fr.prev;
}

_Bool parse_attribute_keyword(struct buffer*  result  , const char* keyword, _Bool allow_end, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "parse_attribute_keyword"; neo_current_frame = &fr;
    char* p;
    char* head;
    char* tail;
    if(parsecmp(keyword,info)) {
        p=info->p->p+strlen(keyword);
        while(*p==32||*p==9||*p==10||*p==13) {
            p++;
        }
        if(!allow_end&&*p!=40) {
            if(*p==59||*p==44||*p==41||*p==93||*p==61||*p==58||*p==91) {
                                neo_current_frame = fr.prev;
                return (_Bool)0;
            }
        }
        head=info->p->p;
        info->p->p+=strlen(keyword);
        parse_struct_attribute_skip_paren(info);
        tail=info->p->p;
        buffer_append(result,head,tail-head);
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
        neo_current_frame = fr.prev;
    return (_Bool)0;
    neo_current_frame = fr.prev;
}

_Bool parse_common_attribute_keyword(struct buffer*  result  , struct sInfo*  info  , _Bool allow_end)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "parse_common_attribute_keyword"; neo_current_frame = &fr;
    if(parse_attribute_keyword(result,"__aligned_largest",allow_end,info)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(parse_attribute_keyword(result,"__aligned_u64",allow_end,info)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(parse_attribute_keyword(result,"__aligned",allow_end,info)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(parse_attribute_keyword(result,"__section",allow_end,info)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(parse_attribute_keyword(result,"__visibility",allow_end,info)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(parse_attribute_keyword(result,"__alias",allow_end,info)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(parse_attribute_keyword(result,"__format_arg",allow_end,info)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(parse_attribute_keyword(result,"__format",allow_end,info)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(parse_attribute_keyword(result,"__printf",allow_end,info)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(parse_attribute_keyword(result,"__scanf",allow_end,info)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(parse_attribute_keyword(result,"__assume_aligned",allow_end,info)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(parse_attribute_keyword(result,"__cleanup",allow_end,info)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(parse_attribute_keyword(result,"__optimize",allow_end,info)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(parse_attribute_keyword(result,"__target",allow_end,info)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(parse_attribute_keyword(result,"__error",allow_end,info)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(parse_attribute_keyword(result,"__warning",allow_end,info)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(parse_attribute_keyword(result,"__no_sanitize_address",allow_end,info)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(parse_attribute_keyword(result,"__no_sanitize_thread",allow_end,info)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(parse_attribute_keyword(result,"__no_sanitize_coverage",allow_end,info)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(parse_attribute_keyword(result,"__no_sanitize",allow_end,info)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(parse_attribute_keyword(result,"__constructor",allow_end,info)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(parse_attribute_keyword(result,"__destructor",allow_end,info)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(parse_attribute_keyword(result,"__packed",allow_end,info)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(parse_attribute_keyword(result,"__used",allow_end,info)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(parse_attribute_keyword(result,"__unused",allow_end,info)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(parse_attribute_keyword(result,"__maybe_unused",allow_end,info)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(parse_attribute_keyword(result,"__always_unused",allow_end,info)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(parse_attribute_keyword(result,"__deprecated",allow_end,info)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(parse_attribute_keyword(result,"__cold",allow_end,info)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(parse_attribute_keyword(result,"__hot",allow_end,info)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(parse_attribute_keyword(result,"__weak_ref",allow_end,info)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(parse_attribute_keyword(result,"__weak",allow_end,info)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(parse_attribute_keyword(result,"__noinline",allow_end,info)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(parse_attribute_keyword(result,"__always_inline",allow_end,info)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(parse_attribute_keyword(result,"__flatten",allow_end,info)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(parse_attribute_keyword(result,"__leaf",allow_end,info)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(parse_attribute_keyword(result,"__naked",allow_end,info)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(parse_attribute_keyword(result,"__noclone",allow_end,info)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(parse_attribute_keyword(result,"__no_profile",allow_end,info)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(parse_attribute_keyword(result,"__no_instrument_function",allow_end,info)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(parse_attribute_keyword(result,"__warn_unused_result",allow_end,info)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(parse_attribute_keyword(result,"__must_check",allow_end,info)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(parse_attribute_keyword(result,"__returns_nonnull",allow_end,info)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(parse_attribute_keyword(result,"__malloc",allow_end,info)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(parse_attribute_keyword(result,"__init",allow_end,info)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(parse_attribute_keyword(result,"__initdata",allow_end,info)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(parse_attribute_keyword(result,"__initconst",allow_end,info)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(parse_attribute_keyword(result,"__init_rodata",allow_end,info)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(parse_attribute_keyword(result,"__exit",allow_end,info)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(parse_attribute_keyword(result,"__exitdata",allow_end,info)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(parse_attribute_keyword(result,"__exitconst",allow_end,info)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(parse_attribute_keyword(result,"__ref",allow_end,info)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(parse_attribute_keyword(result,"__meminit",allow_end,info)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(parse_attribute_keyword(result,"__meminitdata",allow_end,info)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(parse_attribute_keyword(result,"__meminitconst",allow_end,info)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(parse_attribute_keyword(result,"__ro_after_init",allow_end,info)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(parse_attribute_keyword(result,"__read_mostly",allow_end,info)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(parse_attribute_keyword(result,"__latent_entropy",allow_end,info)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(parse_attribute_keyword(result,"__percpu",allow_end,info)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
        neo_current_frame = fr.prev;
    return (_Bool)0;
    neo_current_frame = fr.prev;
}

char*  parse_struct_attribute(struct sInfo*  info  , _Bool allow_end)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "parse_struct_attribute"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer*  result  ;
    char* head;
    char* tail;
    char*  attr  ;
    char*  attr_26  ;
    char*  __result_obj__0  ;
    skip_spaces_and_lf(info);
    result=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "06type.nc", 1031, 474, "struct buffer* "), "06type.nc", 1031, 475)), "06type.nc", 1031, 476);
    while(1) {
        if(parsecmp("__attribute__",info)) {
            head=info->p->p;
            info->p->p+=strlen("__attribute__");
            skip_spaces_and_lf(info);
            skip_paren(info);
            tail=info->p->p;
            buffer_append(result,head,tail-head);
        }
        else if(parsecmp("__declspec",info)) {
            __right_value0 = (void*)0;
            attr=(char* )come_increment_ref_count(parse_declspec_attribute(info), "06type.nc", 1045, 477);
            if(string_operator_not_equals(attr,"")) {
                if(buffer_length(result)>0) {
                    buffer_append_str(result," ");
                }
                buffer_append_str(result,attr);
            }
            (attr = come_decrement_ref_count(attr, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 1069, 478));
        }
        else if(span$1char$p_operator_derefference(info->p)==91&&*(info->p->p+1)==91) {
            __right_value0 = (void*)0;
            attr_26=(char* )come_increment_ref_count(parse_square_attribute(info), "06type.nc", 1055, 479);
            if(string_operator_not_equals(attr_26,"")) {
                if(buffer_length(result)>0) {
                    buffer_append_str(result," ");
                }
                buffer_append_str(result,attr_26);
            }
            (attr_26 = come_decrement_ref_count(attr_26, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 1069, 480));
        }
        else if(parse_common_attribute_keyword(result,info,allow_end)) {
        }
        else {
            break;
        }
    }
    skip_spaces_and_lf(info);
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=buffer_to_string(result))), "06type.nc", 1072, 481);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 1072, 482);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "06type.nc", 1072, 483));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "06type.nc", 1072, 484));
    return __result_obj__0;
}

char*  merge_tag_attribute(char*  current  , char*  attribute  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "merge_tag_attribute"; neo_current_frame = &fr;
    char*  __result_obj__0  ;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    void* __right_value2 = (void*)0;
    if(string_operator_equals(attribute,"")) {
                __result_obj__0 = (char* )come_increment_ref_count(current, "06type.nc", 1078, 485);
        (current = come_decrement_ref_count(current, (void*)0, (void*)0, 0, 1, (void*)0, "06type.nc", 1078, 486));
        (attribute = come_decrement_ref_count(attribute, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 1078, 487));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "06type.nc", 1078, 488));
        return __result_obj__0;
    }
    if(string_operator_equals(current,"")) {
                __result_obj__0 = (char* )come_increment_ref_count(attribute, "06type.nc", 1081, 489);
        (current = come_decrement_ref_count(current, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 1081, 490));
        (attribute = come_decrement_ref_count(attribute, (void*)0, (void*)0, 0, 1, (void*)0, "06type.nc", 1081, 491));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "06type.nc", 1081, 492));
        return __result_obj__0;
    }
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value2=string_operator_add(((char* )(__right_value1=string_operator_add(current," "))),attribute))), "06type.nc", 1083, 493);
    (current = come_decrement_ref_count(current, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 1083, 494));
    (attribute = come_decrement_ref_count(attribute, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 1083, 495));
    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "06type.nc", 1083, 496));
    (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0, "06type.nc", 1083, 497));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "06type.nc", 1083, 498));
    return __result_obj__0;
}

struct tuple2$2sType$phchar$ph* parse_variable_name_on_multiple_declare(struct sType*  base_type_name  , _Bool first, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "parse_variable_name_on_multiple_declare"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sType*  result_type  ;
    char*  var_name  ;
    char* p;
    int sline;
    char*  word  ;
    _Bool between_brace;
    char* p_27;
    int sline_28;
    char*  word_29  ;
    _Bool lambda_;
    char* p_30;
    int sline_31;
    char*  word_32  ;
    char*  __dec_obj52  ;
    void* __right_value1 = (void*)0;
    void* __right_value2 = (void*)0;
    struct sType*  result_type2  ;
    struct sNode* node;
    struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$* multiple_assign_var2
;    struct list$1sType$ph* param_types=0;
    struct list$1char$ph* param_names=0;
    struct list$1char$ph* param_default_parametors=0;
    _Bool var_args=0;
    struct sType*  __dec_obj53  ;
    struct list$1sType$ph* __dec_obj54;
    struct list$1char$ph* __dec_obj55;
    struct sType*  __dec_obj56  ;
    char*  __dec_obj57  ;
    char*  __dec_obj58  ;
    _Bool no_comma;
    struct sNode* node_33;
    struct sNode* __dec_obj59;
    char* p_34;
    int sline_35;
    char*  word_36  ;
    struct sNode* node_37;
    char*  attribute  ;
    struct tuple2$2sType$phchar$ph* __result_obj__0;
    result_type=(struct sType* )come_increment_ref_count(sType_clone(base_type_name), "06type.nc", 1090, 499);
    if(!first) {
        if(result_type->mTypedefOriginalType) {
            result_type->mPointerNum=result_type->mTypedefOriginalType->mPointerNum;
        }
    }
    var_name=((void*)0);
    {
        p=info->p->p;
        sline=info->sline;
        if(xisalpha(span$1char$p_operator_derefference(info->p))||span$1char$p_operator_derefference(info->p)==95) {
            __right_value0 = (void*)0;
            word=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "06type.nc", 1103, 500);
            if(string_operator_equals(word,"const")||string_operator_equals(word,"__restrict")||string_operator_equals(word,"restrict")||string_operator_equals(word,"__user")||string_operator_equals(word,"volatile")||string_operator_equals(word,"__volatile__")||string_operator_equals(word,"_Nonnull")||string_operator_equals(word,"_Nullable")||string_operator_equals(word,"_Null_unspecified")||string_operator_equals(word,"__user")||string_operator_equals(word,"_Addr")) {
            }
            else {
                info->p->p=p;
                info->sline=sline;
            }
            (word = come_decrement_ref_count(word, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 1116, 501));
        }
        else {
            info->p->p=p;
            info->sline=sline;
        }
    }
    between_brace=(_Bool)0;
    {
        p_27=info->p->p;
        sline_28=info->sline;
        if(span$1char$p_operator_derefference(info->p)==40) {
            info->p->p++;
            skip_spaces_and_lf(info);
            if(xisalpha(span$1char$p_operator_derefference(info->p))||span$1char$p_operator_derefference(info->p)==95) {
                __right_value0 = (void*)0;
                word_29=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "06type.nc", 1128, 502);
                if(is_type_name(word_29,info)) {
                }
                else if(span$1char$p_operator_derefference(info->p)==41) {
                    info->p->p++;
                    skip_spaces_and_lf(info);
                    if(span$1char$p_operator_derefference(info->p)!=40) {
                        between_brace=(_Bool)1;
                    }
                }
                (word_29 = come_decrement_ref_count(word_29, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 1141, 503));
            }
        }
        info->p->p=p_27;
        info->sline=sline_28;
    }
    lambda_=(_Bool)0;
    {
        p_30=info->p->p;
        sline_31=info->sline;
        if(span$1char$p_operator_derefference(info->p)==40) {
            info->p->p++;
            skip_spaces_and_lf(info);
            if(span$1char$p_operator_derefference(info->p)==42) {
                info->p->p++;
                skip_spaces_and_lf(info);
                if(xisalpha(span$1char$p_operator_derefference(info->p))||span$1char$p_operator_derefference(info->p)==95) {
                    __right_value0 = (void*)0;
                    word_32=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "06type.nc", 1160, 504);
                    if(is_type_name(word_32,info)) {
                    }
                    else if(span$1char$p_operator_derefference(info->p)==91) {
                        lambda_=(_Bool)1;
                    }
                    else if(span$1char$p_operator_derefference(info->p)==41) {
                        info->p->p++;
                        skip_spaces_and_lf(info);
                        if(span$1char$p_operator_derefference(info->p)==40) {
                            lambda_=(_Bool)1;
                        }
                    }
                    (word_32 = come_decrement_ref_count(word_32, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 1176, 505));
                }
            }
        }
        info->p->p=p_30;
        info->sline=sline_31;
    }
    skip_spaces_and_lf(info);
    while(span$1char$p_operator_derefference(info->p)==42) {
        info->p->p++;
        skip_spaces_and_lf(info);
        skip_pointer_attribute(info);
        result_type->mPointerNum++;
    }
    skip_spaces_and_lf(info);
    if(between_brace&&span$1char$p_operator_derefference(info->p)==40) {
        info->p->p++;
        skip_spaces_and_lf(info);
    }
    if(lambda_) {
        expected_next_character(40,info);
        expected_next_character(42,info);
        __right_value0 = (void*)0;
        __dec_obj52=var_name,
        var_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "06type.nc", 1203, 507);
        __dec_obj52 = come_decrement_ref_count(__dec_obj52, (void*)0, (void*)0, 0,0, (void*)0, "06type.nc", 1203, 506);
        __right_value0 = (void*)0;
        result_type2=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "06type.nc", 1205, 508, "struct sType* "), "06type.nc", 1205, 509),(char*)come_increment_ref_count(xsprintf("lambda"), "06type.nc", 1205, 510),(_Bool)0,info,(_Bool)0,0), "06type.nc", 1205, 511);
        if(span$1char$p_operator_derefference(info->p)==91) {
            info->p->p++;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            node=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "06type.nc", 1211, 512);
            list$1sNode$ph_add(result_type2->mArrayNum,(struct sNode*)come_increment_ref_count(node, "06type.nc", 1213, 513));
            expected_next_character(93,info);
            ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "06type.nc", 1218, 514):(void*)0);
        }
        expected_next_character(41,info);
        __right_value0 = (void*)0;
        multiple_assign_var2=((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$*)(__right_value0=parse_params(info,(_Bool)0)));
        param_types=(struct list$1sType$ph*)come_increment_ref_count(multiple_assign_var2->v1, "06type.nc", 1220, 515);
        param_names=(struct list$1char$ph*)come_increment_ref_count(multiple_assign_var2->v2, "06type.nc", 1220, 516);
        param_default_parametors=(struct list$1char$ph*)come_increment_ref_count(multiple_assign_var2->v3, "06type.nc", 1220, 517);
        var_args=multiple_assign_var2->v4;
        come_call_finalizer(tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "06type.nc}", 1220, 518);
        __right_value0 = (void*)0;
        __dec_obj53=result_type2->mResultType,
        result_type2->mResultType=(struct sType* )come_increment_ref_count(sType_clone(result_type), "06type.nc", 1222, 520);
        come_call_finalizer(sType_finalize, __dec_obj53,(void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc", 1222, 519);
        __dec_obj54=result_type2->mParamTypes,
        result_type2->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(param_types, "06type.nc", 1223, 522);
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj54,(void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc", 1223, 521);
        __dec_obj55=result_type2->mParamNames,
        result_type2->mParamNames=(struct list$1char$ph*)come_increment_ref_count(param_names, "06type.nc", 1224, 524);
        come_call_finalizer(list$1char$ph_finalize, __dec_obj55,(void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc", 1224, 523);
        result_type2->mVarArgs=var_args;
        __dec_obj56=result_type,
        result_type=(struct sType* )come_increment_ref_count(result_type2, "06type.nc", 1227, 526);
        come_call_finalizer(sType_finalize, __dec_obj56,(void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc", 1227, 525);
        come_call_finalizer(sType_finalize, result_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 1238, 527);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 1238, 528);
        come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 1238, 529);
        come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 1238, 530);
    }
    else if(xisalnum(*info->p->p)||span$1char$p_operator_derefference(info->p)==95) {
        __right_value0 = (void*)0;
        __dec_obj57=var_name,
        var_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "06type.nc", 1230, 532);
        __dec_obj57 = come_decrement_ref_count(__dec_obj57, (void*)0, (void*)0, 0,0, (void*)0, "06type.nc", 1230, 531);
    }
    else {
        static int num_anonymous_var_name=0;
        num_anonymous_var_name++;
        __right_value0 = (void*)0;
        __dec_obj58=var_name,
        var_name=(char* )come_increment_ref_count(xsprintf("anonymous_var_nameYYY%d",num_anonymous_var_name), "06type.nc", 1235, 534);
        __dec_obj58 = come_decrement_ref_count(__dec_obj58, (void*)0, (void*)0, 0,0, (void*)0, "06type.nc", 1235, 533);
    }
    if(between_brace&&span$1char$p_operator_derefference(info->p)==41) {
        info->p->p++;
        skip_spaces_and_lf(info);
    }
    if(span$1char$p_operator_derefference(info->p)==58) {
        info->p->p++;
        skip_spaces_and_lf(info);
        no_comma=info->no_comma;
        info->no_comma=(_Bool)1;
        __right_value0 = (void*)0;
        node_33=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "06type.nc", 1249, 535);
        info->no_comma=no_comma;
        __dec_obj59=result_type->mSizeNum,
        result_type->mSizeNum=(struct sNode*)come_increment_ref_count(node_33, "06type.nc", 1252, 537);
        (__dec_obj59 ? __dec_obj59 = come_decrement_ref_count(__dec_obj59, ((struct sNode*)__dec_obj59)->finalize, ((struct sNode*)__dec_obj59)->_protocol_obj, 0,0, (void*)0, "06type.nc", 1252, 536) :0);
        ((node_33) ? node_33 = come_decrement_ref_count(node_33, ((struct sNode*)node_33)->finalize, ((struct sNode*)node_33)->_protocol_obj, 0, 0,(void*)0, "06type.nc", 1255, 538):(void*)0);
    }
    while(span$1char$p_operator_derefference(info->p)==91) {
        info->p->p++;
        skip_spaces_and_lf(info);
        {
            p_34=info->p->p;
            sline_35=info->sline;
            if(xisalpha(span$1char$p_operator_derefference(info->p))||span$1char$p_operator_derefference(info->p)==95) {
                __right_value0 = (void*)0;
                word_36=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "06type.nc", 1264, 539);
                if(string_operator_equals(word_36,"const")||string_operator_equals(word_36,"__restrict")||string_operator_equals(word_36,"restrict")||string_operator_equals(word_36,"__user")||string_operator_equals(word_36,"volatile")||string_operator_equals(word_36,"__volatile__")||string_operator_equals(word_36,"_Nonnull")||string_operator_equals(word_36,"_Nullable")||string_operator_equals(word_36,"_Null_unspecified")||string_operator_equals(word_36,"__user")||string_operator_equals(word_36,"_Addr")) {
                }
                else {
                    info->p->p=p_34;
                    info->sline=sline_35;
                }
                (word_36 = come_decrement_ref_count(word_36, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 1277, 540));
            }
            else {
                info->p->p=p_34;
                info->sline=sline_35;
            }
        }
        if(span$1char$p_operator_derefference(info->p)==93) {
            info->p->p++;
            skip_spaces_and_lf(info);
            result_type->mArrayPointerType=(_Bool)1;
            break;
        }
        skip_spaces_and_lf(info);
        __right_value0 = (void*)0;
        node_37=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "06type.nc", 1289, 541);
        list$1sNode$ph_push_back(result_type->mArrayNum,(struct sNode*)come_increment_ref_count(node_37, "06type.nc", 1290, 556));
        expected_next_character(93,info);
        ((node_37) ? node_37 = come_decrement_ref_count(node_37, ((struct sNode*)node_37)->finalize, ((struct sNode*)node_37)->_protocol_obj, 0, 0,(void*)0, "06type.nc", 1295, 557):(void*)0);
    }
    __right_value0 = (void*)0;
    attribute=(char* )come_increment_ref_count(parse_struct_attribute(info,(_Bool)1), "06type.nc", 1295, 558);
    append_attribute_to_type(result_type,(char* )come_increment_ref_count(attribute, "06type.nc", 1296, 559),(_Bool)1,info);
    __right_value0 = (void*)0;
    ((struct tuple2$2char$phchar$ph*)(__right_value0=parse_attribute(info)));
    come_call_finalizer(tuple2$2char$phchar$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "06type.nc}", 1298, 560);
        __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __result_obj__0 = (struct tuple2$2sType$phchar$ph*)come_increment_ref_count(((struct tuple2$2sType$phchar$ph*)(__right_value1=tuple2$2sType$phchar$ph_initialize((struct tuple2$2sType$phchar$ph*)come_increment_ref_count((struct tuple2$2sType$phchar$ph*)come_calloc(1, sizeof(struct tuple2$2sType$phchar$ph)*(1), "06type.nc", 1300, 561, "struct tuple2$2sType$phchar$ph"), "06type.nc", 1300, 573),(struct sType* )come_increment_ref_count(result_type, "06type.nc", 1300, 574),(char* )come_increment_ref_count(var_name, "06type.nc", 1300, 575)))), "06type.nc", 1300, 576);
    come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 1300, 577);
    (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 1300, 578));
    (attribute = come_decrement_ref_count(attribute, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 1300, 579));
    come_call_finalizer(tuple2$2sType$phchar$ph$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "06type.nc}", 1300, 580);
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple2$2sType$phchar$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "06type.nc}", 1300, 581);
    return __result_obj__0;
}

static struct list$1sNode$ph* list$1sNode$ph_push_back(struct list$1sNode$ph* self, struct sNode* item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_push_back"; neo_current_frame = &fr;
    struct list$1sNode$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1sNode$ph* litem;
    struct sNode* __dec_obj60;
    struct list_item$1sNode$ph* litem_38;
    struct sNode* __dec_obj61;
    struct list_item$1sNode$ph* litem_39;
    struct sNode* __dec_obj62;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0, "/usr/local/include/neo-c.h", 1613, 542):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/neo-c.h", 1617, 543, "struct list_item$1sNode$ph*"))), "/usr/local/include/neo-c.h", 1617, 544);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj60=litem->item,
        litem->item=(struct sNode*)come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1621, 546);
        (__dec_obj60 ? __dec_obj60 = come_decrement_ref_count(__dec_obj60, ((struct sNode*)__dec_obj60)->finalize, ((struct sNode*)__dec_obj60)->_protocol_obj, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1621, 545) :0);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_38=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/neo-c.h", 1627, 547, "struct list_item$1sNode$ph*"))), "/usr/local/include/neo-c.h", 1627, 548);
        litem_38->prev=self->head;
        litem_38->next=((void*)0);
        __dec_obj61=litem_38->item,
        litem_38->item=(struct sNode*)come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1631, 550);
        (__dec_obj61 ? __dec_obj61 = come_decrement_ref_count(__dec_obj61, ((struct sNode*)__dec_obj61)->finalize, ((struct sNode*)__dec_obj61)->_protocol_obj, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1631, 549) :0);
        self->tail=litem_38;
        self->head->next=litem_38;
    }
    else {
        __right_value0 = (void*)0;
        litem_39=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/neo-c.h", 1637, 551, "struct list_item$1sNode$ph*"))), "/usr/local/include/neo-c.h", 1637, 552);
        litem_39->prev=self->tail;
        litem_39->next=((void*)0);
        __dec_obj62=litem_39->item,
        litem_39->item=(struct sNode*)come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1641, 554);
        (__dec_obj62 ? __dec_obj62 = come_decrement_ref_count(__dec_obj62, ((struct sNode*)__dec_obj62)->finalize, ((struct sNode*)__dec_obj62)->_protocol_obj, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1641, 553) :0);
        self->tail->next=litem_39;
        self->tail=litem_39;
    }
    self->len++;
        __result_obj__0 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0, "/usr/local/include/neo-c.h", 1649, 555):(void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct tuple2$2sType$phchar$ph* tuple2$2sType$phchar$ph_initialize(struct tuple2$2sType$phchar$ph* self, struct sType*  v1  , char*  v2  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2sType$phchar$ph_initialize"; neo_current_frame = &fr;
    struct sType*  __dec_obj63  ;
    char*  __dec_obj64  ;
    struct tuple2$2sType$phchar$ph* __result_obj__0;
    __dec_obj63=self->v1,
    self->v1=(struct sType* )come_increment_ref_count(v1, "/usr/local/include/neo-c.h", 3911, 563);
    come_call_finalizer(sType_finalize, __dec_obj63,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3911, 562);
    __dec_obj64=self->v2,
    self->v2=(char* )come_increment_ref_count(v2, "/usr/local/include/neo-c.h", 3912, 565);
    __dec_obj64 = come_decrement_ref_count(__dec_obj64, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 3912, 564);
        __result_obj__0 = (struct tuple2$2sType$phchar$ph*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 3914, 566);
    come_call_finalizer(tuple2$2sType$phchar$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3914, 569);
    come_call_finalizer(sType_finalize, v1, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3914, 570);
    (v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3914, 571));
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple2$2sType$phchar$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3914, 572);
    return __result_obj__0;
}

static void tuple2$2sType$phchar$ph$p_finalize(struct tuple2$2sType$phchar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2sType$phchar$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0, "tuple2$2sType$phchar$ph$p_finalize}", 2, 567);
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0, (void*)0, "tuple2$2sType$phchar$ph$p_finalize", 3, 568));
    }
        neo_current_frame = fr.prev;
}

_Bool skip_pointer_attribute(struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "skip_pointer_attribute"; neo_current_frame = &fr;
    char* p;
    int sline;
    void* __right_value0 = (void*)0;
    char*  word  ;
    int nest;
    _Bool __result_obj__0;
    p=info->p->p;
    sline=info->sline;
    if(span$1char$p_operator_derefference(info->p)==91&&*(info->p->p+1)==91) {
        (void)((char* )(__right_value0=parse_square_attribute(info)));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "06type.nc", 1309, 582));
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    if(xisalpha(span$1char$p_operator_derefference(info->p))||span$1char$p_operator_derefference(info->p)==95) {
        __right_value0 = (void*)0;
        word=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "06type.nc", 1314, 583);
        if((string_operator_equals(word,"__attribute")||string_operator_equals(word,"__attribute__"))&&span$1char$p_operator_derefference(info->p)==40) {
            nest=0;
            while(1) {
                if(span$1char$p_operator_derefference(info->p)==40) {
                    info->p->p++;
                    skip_spaces_and_lf(info);
                    nest++;
                }
                else if(span$1char$p_operator_derefference(info->p)==41) {
                    info->p->p++;
                    skip_spaces_and_lf(info);
                    nest--;
                    if(nest==0) {
                        break;
                    }
                }
                else if(span$1char$p_operator_derefference(info->p)==0) {
                    break;
                }
                else {
                    info->p->p++;
                }
            }
                        __result_obj__0 = (_Bool)1;
            (word = come_decrement_ref_count(word, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 1341, 584));
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        else if(string_operator_equals(word,"__declspec")&&span$1char$p_operator_derefference(info->p)==40) {
            skip_paren(info);
                        __result_obj__0 = (_Bool)1;
            (word = come_decrement_ref_count(word, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 1345, 585));
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        else if(string_operator_equals(word,"const")||string_operator_equals(word,"__restrict")||string_operator_equals(word,"restrict")||string_operator_equals(word,"__user")||string_operator_equals(word,"volatile")||string_operator_equals(word,"__volatile__")||string_operator_equals(word,"_Nonnull")||string_operator_equals(word,"_Nullable")||string_operator_equals(word,"__nonnull")||string_operator_equals(word,"_Null_unspecified")||string_operator_equals(word,"__user")||string_operator_equals(word,"_Addr")||string_operator_equals(word,"__noreturn")||string_operator_equals(word,"_noreturn")||string_operator_equals(word,"_Noreturn")) {
                        __result_obj__0 = (_Bool)1;
            (word = come_decrement_ref_count(word, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 1348, 586));
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        else {
            info->p->p=p;
            info->sline=sline;
        }
        (word = come_decrement_ref_count(word, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 1360, 587));
    }
    else {
        info->p->p=p;
        info->sline=sline;
    }
        neo_current_frame = fr.prev;
    return (_Bool)0;
    neo_current_frame = fr.prev;
}

char*  parse_pointer_qualifier(struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "parse_pointer_qualifier"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer*  result  ;
    char* p;
    int sline;
    char*  word  ;
    int nest;
    char*  __result_obj__0  ;
    result=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "06type.nc", 1365, 588, "struct buffer* "), "06type.nc", 1365, 589)), "06type.nc", 1365, 590);
    while(1) {
        if(span$1char$p_operator_derefference(info->p)==91&&*(info->p->p+1)==91) {
            __right_value0 = (void*)0;
            (void)((char* )(__right_value0=parse_square_attribute(info)));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "06type.nc", 1369, 591));
            continue;
        }
        if(!(xisalpha(span$1char$p_operator_derefference(info->p))||span$1char$p_operator_derefference(info->p)==95)) {
            break;
        }
        p=info->p->p;
        sline=info->sline;
        __right_value0 = (void*)0;
        word=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "06type.nc", 1380, 592);
        if((string_operator_equals(word,"__attribute")||string_operator_equals(word,"__attribute__"))&&span$1char$p_operator_derefference(info->p)==40) {
            nest=0;
            while(1) {
                if(span$1char$p_operator_derefference(info->p)==40) {
                    info->p->p++;
                    skip_spaces_and_lf(info);
                    nest++;
                }
                else if(span$1char$p_operator_derefference(info->p)==41) {
                    info->p->p++;
                    skip_spaces_and_lf(info);
                    nest--;
                    if(nest==0) {
                        break;
                    }
                }
                else if(span$1char$p_operator_derefference(info->p)==0) {
                    break;
                }
                else {
                    info->p->p++;
                }
            }
            (word = come_decrement_ref_count(word, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 1406, 593));
            continue;
        }
        else if(string_operator_equals(word,"__declspec")&&span$1char$p_operator_derefference(info->p)==40) {
            skip_paren(info);
            (word = come_decrement_ref_count(word, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 1410, 594));
            continue;
        }
        else if(string_operator_equals(word,"const")||string_operator_equals(word,"volatile")||string_operator_equals(word,"__volatile__")||string_operator_equals(word,"restrict")||string_operator_equals(word,"__restrict")) {
            if(buffer_length(result)>0) {
                buffer_append_str(result," ");
            }
            buffer_append_str(result,word);
            skip_spaces_and_lf(info);
            (word = come_decrement_ref_count(word, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 1418, 595));
            continue;
        }
        else if(string_operator_equals(word,"__user")||string_operator_equals(word,"_Nonnull")||string_operator_equals(word,"_Nullable")||string_operator_equals(word,"__nonnull")||string_operator_equals(word,"_Null_unspecified")||string_operator_equals(word,"_Addr")||string_operator_equals(word,"__noreturn")||string_operator_equals(word,"_noreturn")||string_operator_equals(word,"_Noreturn")) {
            skip_spaces_and_lf(info);
            (word = come_decrement_ref_count(word, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 1422, 596));
            continue;
        }
        else {
            info->p->p=p;
            info->sline=sline;
            (word = come_decrement_ref_count(word, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 1427, 597));
            break;
        }
        (word = come_decrement_ref_count(word, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 1431, 598));
    }
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=buffer_to_string(result))), "06type.nc", 1431, 599);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 1431, 600);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "06type.nc", 1431, 601));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "06type.nc", 1431, 602));
    return __result_obj__0;
}

struct tuple3$3sType$phchar$ph_Bool$* backtrace_parse_type(_Bool parse_variable_name, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "backtrace_parse_type"; neo_current_frame = &fr;
    int sline;
    _Bool no_output_come_code;
    void* __right_value0 = (void*)0;
    struct tuple3$3sType$phchar$ph_Bool$* multiple_assign_var3
;    struct sType*  type  =0;
    char*  name  =0;
    _Bool err=0;
    void* __right_value1 = (void*)0;
    struct tuple3$3sType$phchar$ph_Bool$* __result_obj__0;
    sline=info->sline;
    no_output_come_code=info->no_output_come_code;
    info->no_output_come_code=(_Bool)1;
    multiple_assign_var3=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=parse_type(info,parse_variable_name,(_Bool)1,(_Bool)0)));
    type=(struct sType* )come_increment_ref_count(multiple_assign_var3->v1, "06type.nc", 1439, 603);
    name=(char* )come_increment_ref_count(multiple_assign_var3->v2, "06type.nc", 1439, 604);
    err=multiple_assign_var3->v3;
    come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "06type.nc}", 1439, 605);
    info->no_output_come_code=no_output_come_code;
    if(!err) {
        info->sline=sline;
    }
        __right_value0 = (void*)0;
    __result_obj__0 = (struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value1=tuple3$3sType$phchar$ph_Bool$_initialize((struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count((struct tuple3$3sType$phchar$ph_Bool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$ph_Bool$)*(1), "06type.nc", 1445, 606, "struct tuple3$3sType$phchar$ph_Bool$"), "06type.nc", 1445, 616),(struct sType* )come_increment_ref_count(type, "06type.nc", 1445, 617),(char* )come_increment_ref_count(name, "06type.nc", 1445, 618),err))), "06type.nc", 1445, 619);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 1445, 620);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 1445, 621));
    come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "06type.nc}", 1445, 622);
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "06type.nc}", 1445, 623);
    return __result_obj__0;
}

static struct tuple3$3sType$phchar$ph_Bool$* tuple3$3sType$phchar$ph_Bool$_initialize(struct tuple3$3sType$phchar$ph_Bool$* self, struct sType*  v1  , char*  v2  , _Bool v3)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple3$3sType$phchar$ph_Bool$_initialize"; neo_current_frame = &fr;
    struct sType*  __dec_obj65  ;
    char*  __dec_obj66  ;
    struct tuple3$3sType$phchar$ph_Bool$* __result_obj__0;
    __dec_obj65=self->v1,
    self->v1=(struct sType* )come_increment_ref_count(v1, "/usr/local/include/neo-c.h", 3986, 608);
    come_call_finalizer(sType_finalize, __dec_obj65,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3986, 607);
    __dec_obj66=self->v2,
    self->v2=(char* )come_increment_ref_count(v2, "/usr/local/include/neo-c.h", 3987, 610);
    __dec_obj66 = come_decrement_ref_count(__dec_obj66, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 3987, 609);
    self->v3=v3;
        __result_obj__0 = (struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 3990, 611);
    come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3990, 612);
    come_call_finalizer(sType_finalize, v1, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3990, 613);
    (v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3990, 614));
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3990, 615);
    return __result_obj__0;
}

struct tuple5$5_Bool$_Bool$_Bool$_Bool$_Bool$* backtrace_struct_union_enum(struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "backtrace_struct_union_enum"; neo_current_frame = &fr;
    _Bool define_only;
    _Bool anonymous_name;
    _Bool struct_;
    _Bool union_;
    _Bool enum_;
    char* head;
    int head_sline;
    void* __right_value0 = (void*)0;
    char*  declare_name  ;
    void* __right_value1 = (void*)0;
    struct tuple5$5_Bool$_Bool$_Bool$_Bool$_Bool$* __result_obj__0;
    char*  struct_name  ;
    int nest;
    define_only=(_Bool)0;
    anonymous_name=(_Bool)0;
    struct_=(_Bool)0;
    union_=(_Bool)0;
    enum_=(_Bool)0;
    {
        head=info->p->p;
        head_sline=info->sline;
        ((struct tuple2$2char$phchar$ph*)(__right_value0=parse_attribute(info)));
        come_call_finalizer(tuple2$2char$phchar$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "06type.nc}", 1460, 624);
        if(xisalpha(span$1char$p_operator_derefference(info->p))||span$1char$p_operator_derefference(info->p)==95) {
            __right_value0 = (void*)0;
            declare_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "06type.nc", 1463, 625);
            if(string_operator_equals(declare_name,"struct")) {
                struct_=(_Bool)1;
            }
            else if(string_operator_equals(declare_name,"union")) {
                union_=(_Bool)1;
            }
            else if(string_operator_equals(declare_name,"enum")) {
                enum_=(_Bool)1;
            }
            else {
                                __right_value0 = (void*)0;
                __result_obj__0 = (struct tuple5$5_Bool$_Bool$_Bool$_Bool$_Bool$*)come_increment_ref_count(((struct tuple5$5_Bool$_Bool$_Bool$_Bool$_Bool$*)(__right_value1=tuple5$5_Bool$_Bool$_Bool$_Bool$_Bool$_initialize((struct tuple5$5_Bool$_Bool$_Bool$_Bool$_Bool$*)come_increment_ref_count((struct tuple5$5_Bool$_Bool$_Bool$_Bool$_Bool$*)come_calloc(1, sizeof(struct tuple5$5_Bool$_Bool$_Bool$_Bool$_Bool$)*(1), "06type.nc", 1475, 626, "struct tuple5$5_Bool$_Bool$_Bool$_Bool$_Bool$"), "06type.nc", 1475, 630),(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0))), "06type.nc", 1475, 631);
                (declare_name = come_decrement_ref_count(declare_name, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 1475, 632));
                come_call_finalizer(tuple5$5_Bool$_Bool$_Bool$_Bool$_Bool$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "06type.nc}", 1475, 633);
                neo_current_frame = fr.prev;
                come_call_finalizer(tuple5$5_Bool$_Bool$_Bool$_Bool$_Bool$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "06type.nc}", 1475, 634);
                return __result_obj__0;
            }
            (declare_name = come_decrement_ref_count(declare_name, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 1478, 635));
        }
        __right_value0 = (void*)0;
        ((struct tuple2$2char$phchar$ph*)(__right_value0=parse_attribute(info)));
        come_call_finalizer(tuple2$2char$phchar$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "06type.nc}", 1478, 636);
        if(xisalpha(span$1char$p_operator_derefference(info->p))||span$1char$p_operator_derefference(info->p)==95) {
            __right_value0 = (void*)0;
            struct_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "06type.nc", 1481, 637);
            (struct_name = come_decrement_ref_count(struct_name, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 1487, 638));
        }
        else {
            anonymous_name=(_Bool)1;
        }
        __right_value0 = (void*)0;
        ((struct tuple2$2char$phchar$ph*)(__right_value0=parse_attribute(info)));
        come_call_finalizer(tuple2$2char$phchar$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "06type.nc}", 1487, 639);
        if(span$1char$p_operator_derefference(info->p)==60) {
            nest=0;
            while((_Bool)1) {
                if(span$1char$p_operator_derefference(info->p)==60) {
                    info->p->p++;
                    skip_spaces_and_lf(info);
                    nest++;
                }
                else if(span$1char$p_operator_derefference(info->p)==62) {
                    info->p->p++;
                    skip_spaces_and_lf(info);
                    nest--;
                    if(nest==0) {
                        break;
                    }
                }
                else if(span$1char$p_operator_derefference(info->p)==0) {
                    err_msg(info,"unexpected source end");
                    exit(1);
                }
                else {
                    span$1char$p_operator_derefference(span$1char$p_operator_plus_plus(info->p));
                    skip_spaces_and_lf(info);
                }
            }
        }
        __right_value0 = (void*)0;
        ((struct tuple2$2char$phchar$ph*)(__right_value0=parse_attribute(info)));
        come_call_finalizer(tuple2$2char$phchar$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "06type.nc}", 1517, 640);
        if(span$1char$p_operator_derefference(info->p)==123) {
            __right_value0 = (void*)0;
            ((char* )(__right_value0=skip_block(info,(_Bool)0)));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "06type.nc", 1520, 641));
            __right_value0 = (void*)0;
            ((struct tuple2$2char$phchar$ph*)(__right_value0=parse_attribute(info)));
            come_call_finalizer(tuple2$2char$phchar$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "06type.nc}", 1522, 642);
            if(span$1char$p_operator_derefference(info->p)==59) {
                define_only=(_Bool)1;
            }
            else {
                define_only=(_Bool)0;
            }
        }
        info->p->p=head;
        info->sline=head_sline;
    }
        __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __result_obj__0 = (struct tuple5$5_Bool$_Bool$_Bool$_Bool$_Bool$*)come_increment_ref_count(((struct tuple5$5_Bool$_Bool$_Bool$_Bool$_Bool$*)(__right_value1=tuple5$5_Bool$_Bool$_Bool$_Bool$_Bool$_initialize((struct tuple5$5_Bool$_Bool$_Bool$_Bool$_Bool$*)come_increment_ref_count((struct tuple5$5_Bool$_Bool$_Bool$_Bool$_Bool$*)come_calloc(1, sizeof(struct tuple5$5_Bool$_Bool$_Bool$_Bool$_Bool$)*(1), "06type.nc", 1536, 643, "struct tuple5$5_Bool$_Bool$_Bool$_Bool$_Bool$"), "06type.nc", 1536, 644),define_only,anonymous_name,struct_,union_,enum_))), "06type.nc", 1536, 645);
    come_call_finalizer(tuple5$5_Bool$_Bool$_Bool$_Bool$_Bool$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "06type.nc}", 1536, 646);
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple5$5_Bool$_Bool$_Bool$_Bool$_Bool$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "06type.nc}", 1536, 647);
    return __result_obj__0;
}

static struct tuple5$5_Bool$_Bool$_Bool$_Bool$_Bool$* tuple5$5_Bool$_Bool$_Bool$_Bool$_Bool$_initialize(struct tuple5$5_Bool$_Bool$_Bool$_Bool$_Bool$* self, _Bool v1, _Bool v2, _Bool v3, _Bool v4, _Bool v5)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple5$5_Bool$_Bool$_Bool$_Bool$_Bool$_initialize"; neo_current_frame = &fr;
    struct tuple5$5_Bool$_Bool$_Bool$_Bool$_Bool$* __result_obj__0;
    self->v1=v1;
    self->v2=v2;
    self->v3=v3;
    self->v4=v4;
    self->v5=v5;
        __result_obj__0 = (struct tuple5$5_Bool$_Bool$_Bool$_Bool$_Bool$*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 4142, 627);
    come_call_finalizer(tuple5$5_Bool$_Bool$_Bool$_Bool$_Bool$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 4142, 628);
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple5$5_Bool$_Bool$_Bool$_Bool$_Bool$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 4142, 629);
    return __result_obj__0;
}

static void tuple5$5_Bool$_Bool$_Bool$_Bool$_Bool$$p_finalize(struct tuple5$5_Bool$_Bool$_Bool$_Bool$_Bool$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple5$5_Bool$_Bool$_Bool$_Bool$_Bool$$p_finalize"; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
}

static struct span$1char$p* span$1char$p$p_operator_plus_plus(struct span$1char$p* self)
{
    struct span$1char$p* __result_obj__0;
    if(self==((void*)0)) {
        puts("null pointer exception. self is null");
        stackframe();
        exit(2);
    }
    self->p++;
        __result_obj__0 = self;
    return __result_obj__0;
}

static struct span$1char$p* span$1char$p_operator_plus_plus(struct span$1char$p* self)
{
    struct span$1char$p* __result_obj__0;
    if(self==((void*)0)) {
        puts("null pointer exception. self is null");
        stackframe();
        exit(2);
    }
    self->p++;
        __result_obj__0 = self;
    return __result_obj__0;
}

struct sType*  parse_pointer_attribute(struct sType*  type  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "parse_pointer_attribute"; neo_current_frame = &fr;
    struct sType*  tmp_  ;
    void* __right_value0 = (void*)0;
    char*  pointer_attr  ;
    char*  __dec_obj67  ;
    void* __right_value1 = (void*)0;
    void* __right_value2 = (void*)0;
    char*  __dec_obj68  ;
    struct sType*  generics_type  ;
    struct sType*  type_40  ;
    struct sType*  type2  ;
    struct sType*  __dec_obj69  ;
    struct sType*  __result_obj__0  ;
    struct sType*  generics_type_41  ;
    struct sType*  type_42  ;
    struct sType*  type2_43  ;
    struct sType*  __dec_obj70  ;
    struct sType*  generics_type_44  ;
    struct sType*  type_45  ;
    struct sType*  type2_46  ;
    struct sType*  __dec_obj71  ;
    char* p;
    int sline;
    char*  pointer_attr_47  ;
    char*  __dec_obj72  ;
    char*  __dec_obj73  ;
    tmp_=((void*)0);
    while(1) {
        if(span$1char$p_operator_derefference(info->p)==42) {
            info->p->p++;
            skip_spaces_and_lf(info);
            type->mPointerNum++;
            if(type->mNoSolvedGenericsType) {
                type->mNoSolvedGenericsType->mPointerNum++;
            }
            pointer_attr=(char* )come_increment_ref_count(parse_pointer_qualifier(info), "06type.nc", 1551, 648);
            if(string_operator_not_equals(pointer_attr,"")) {
                if(type->mPointerAttribute==((void*)0)||string_operator_equals(type->mPointerAttribute,"")) {
                    __dec_obj67=type->mPointerAttribute,
                    type->mPointerAttribute=(char* )come_increment_ref_count(pointer_attr, "06type.nc", 1554, 650);
                    __dec_obj67 = come_decrement_ref_count(__dec_obj67, (void*)0, (void*)0, 0,0, (void*)0, "06type.nc", 1554, 649);
                }
                else {
                    __right_value0 = (void*)0;
                    __dec_obj68=type->mPointerAttribute,
                    type->mPointerAttribute=(char* )come_increment_ref_count(string_operator_add(((char* )(__right_value1=string_operator_add(type->mPointerAttribute," "))),pointer_attr), "06type.nc", 1557, 652);
                    __dec_obj68 = come_decrement_ref_count(__dec_obj68, (void*)0, (void*)0, 0,0, (void*)0, "06type.nc", 1557, 651);
                    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "06type.nc", 1557, 653));
                }
            }
            (pointer_attr = come_decrement_ref_count(pointer_attr, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 1737, 654));
        }
        else if(span$1char$p_operator_derefference(info->p)==37) {
            info->p->p++;
            skip_spaces_and_lf(info);
            type->mHeap=(_Bool)1;
            if(type->mNoSolvedGenericsType) {
                type->mNoSolvedGenericsType->mHeap=(_Bool)1;
            }
        }
        else if(span$1char$p_operator_derefference(info->p)==64) {
            info->p->p++;
            while(xisalnum(span$1char$p_operator_derefference(info->p))||span$1char$p_operator_derefference(info->p)==95) {
                info->p->p++;
            }
            skip_spaces_and_lf(info);
        }
        else if(span$1char$p_operator_derefference(info->p)==94) {
            info->p->p++;
            skip_spaces_and_lf(info);
            type->mNoHeap=(_Bool)1;
            if(type->mNoSolvedGenericsType) {
                type->mNoSolvedGenericsType->mNoHeap=(_Bool)0;
            }
        }
        else if(span$1char$p_operator_derefference(info->p)==93) {
            info->p->p++;
            skip_spaces_and_lf(info);
            type->mMinusPointerNum++;
            if(type->mNoSolvedGenericsType) {
                type->mNoSolvedGenericsType->mMinusPointerNum++;
            }
        }
        else if(span$1char$p_operator_derefference(info->p)==38) {
            info->p->p++;
            skip_spaces_and_lf(info);
            type->mPointerNum=1;
            type->mHeap=(_Bool)0;
            if(type->mNoSolvedGenericsType) {
                type->mNoSolvedGenericsType->mPointerNum=1;
                type->mNoSolvedGenericsType->mHeap=(_Bool)0;
            }
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            generics_type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "06type.nc", 1610, 655, "struct sType* "), "06type.nc", 1610, 656),(char*)come_increment_ref_count(xsprintf("ref"), "06type.nc", 1610, 657),(_Bool)0,info,(_Bool)0,0), "06type.nc", 1610, 658);
            __right_value0 = (void*)0;
            list$1sType$ph_add(generics_type->mGenericsTypes,(struct sType* )come_increment_ref_count(sType_clone(type), "06type.nc", 1611, 659));
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            type_40=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "06type.nc", 1613, 660, "struct sType* "), "06type.nc", 1613, 661),(char*)come_increment_ref_count(xsprintf("ref"), "06type.nc", 1613, 662),(_Bool)0,info,(_Bool)0,0), "06type.nc", 1613, 663);
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            list$1sType$ph_add(type_40->mGenericsTypes,(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "06type.nc", 1614, 664, "struct sType* "), "06type.nc", 1614, 665),(char*)come_increment_ref_count(xsprintf("__generics_type0"), "06type.nc", 1614, 666),(_Bool)0,info,(_Bool)0,0), "06type.nc", 1614, 667));
            type_40->mPointerNum++;
            type_40->mHeap=(_Bool)1;
            __right_value0 = (void*)0;
            type2=(struct sType* )come_increment_ref_count(solve_generics(type_40,generics_type,info), "06type.nc", 1618, 668);
            type2->mPointerNum=1;
            __right_value0 = (void*)0;
            __dec_obj69=tmp_,
            tmp_=(struct sType* )come_increment_ref_count(sType_clone(type2), "06type.nc", 1621, 670);
            come_call_finalizer(sType_finalize, __dec_obj69,(void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc", 1621, 669);
            come_call_finalizer(sType_finalize, generics_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 1737, 671);
            come_call_finalizer(sType_finalize, type_40, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 1737, 672);
            come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 1737, 673);
        }
        else if(span$1char$p_operator_derefference(info->p)==63) {
            info->p->p++;
            skip_spaces_and_lf(info);
            if(tmp_) {
                err_msg(info,"invalid type name");
                                __result_obj__0 = (struct sType* )come_increment_ref_count(type, "06type.nc", 1629, 674);
                come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 1, (void*)0, "06type.nc}", 1629, 675);
                come_call_finalizer(sType_finalize, tmp_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 1629, 676);
                neo_current_frame = fr.prev;
                come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "06type.nc}", 1629, 677);
                return __result_obj__0;
            }
            type->mPointerNum=1;
            type->mHeap=(_Bool)1;
            if(type->mNoSolvedGenericsType) {
                type->mNoSolvedGenericsType->mPointerNum=1;
                type->mNoSolvedGenericsType->mHeap=(_Bool)1;
            }
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            generics_type_41=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "06type.nc", 1640, 678, "struct sType* "), "06type.nc", 1640, 679),(char*)come_increment_ref_count(xsprintf("optional"), "06type.nc", 1640, 680),(_Bool)0,info,(_Bool)0,0), "06type.nc", 1640, 681);
            __right_value0 = (void*)0;
            list$1sType$ph_add(generics_type_41->mGenericsTypes,(struct sType* )come_increment_ref_count(sType_clone(type), "06type.nc", 1641, 682));
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            type_42=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "06type.nc", 1643, 683, "struct sType* "), "06type.nc", 1643, 684),(char*)come_increment_ref_count(xsprintf("optional"), "06type.nc", 1643, 685),(_Bool)0,info,(_Bool)0,0), "06type.nc", 1643, 686);
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            list$1sType$ph_add(type_42->mGenericsTypes,(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "06type.nc", 1644, 687, "struct sType* "), "06type.nc", 1644, 688),(char*)come_increment_ref_count(xsprintf("__generics_type0"), "06type.nc", 1644, 689),(_Bool)0,info,(_Bool)0,0), "06type.nc", 1644, 690));
            type_42->mPointerNum++;
            type_42->mHeap=(_Bool)1;
            __right_value0 = (void*)0;
            type2_43=(struct sType* )come_increment_ref_count(solve_generics(type_42,generics_type_41,info), "06type.nc", 1648, 691);
            type2_43->mPointerNum=1;
            type2_43->mHeap=(_Bool)1;
            __right_value0 = (void*)0;
            __dec_obj70=tmp_,
            tmp_=(struct sType* )come_increment_ref_count(sType_clone(type2_43), "06type.nc", 1653, 693);
            come_call_finalizer(sType_finalize, __dec_obj70,(void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc", 1653, 692);
            come_call_finalizer(sType_finalize, generics_type_41, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 1737, 694);
            come_call_finalizer(sType_finalize, type_42, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 1737, 695);
            come_call_finalizer(sType_finalize, type2_43, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 1737, 696);
        }
        else if(memcmp(info->p->p,"{}",2)==0) {
            info->p->p+=2;
            skip_spaces_and_lf(info);
            if(tmp_) {
                err_msg(info,"invalid type name");
                                __result_obj__0 = (struct sType* )come_increment_ref_count(type, "06type.nc", 1662, 697);
                come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 1, (void*)0, "06type.nc}", 1662, 698);
                come_call_finalizer(sType_finalize, tmp_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 1662, 699);
                neo_current_frame = fr.prev;
                come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "06type.nc}", 1662, 700);
                return __result_obj__0;
            }
            type->mPointerNum=1;
            type->mHeap=(_Bool)0;
            if(type->mNoSolvedGenericsType) {
                type->mNoSolvedGenericsType->mPointerNum=1;
                type->mNoSolvedGenericsType->mHeap=(_Bool)0;
            }
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            generics_type_44=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "06type.nc", 1672, 701, "struct sType* "), "06type.nc", 1672, 702),(char*)come_increment_ref_count(xsprintf("span"), "06type.nc", 1672, 703),(_Bool)0,info,(_Bool)0,0), "06type.nc", 1672, 704);
            __right_value0 = (void*)0;
            list$1sType$ph_add(generics_type_44->mGenericsTypes,(struct sType* )come_increment_ref_count(sType_clone(type), "06type.nc", 1673, 705));
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            type_45=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "06type.nc", 1675, 706, "struct sType* "), "06type.nc", 1675, 707),(char*)come_increment_ref_count(xsprintf("span"), "06type.nc", 1675, 708),(_Bool)0,info,(_Bool)0,0), "06type.nc", 1675, 709);
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            list$1sType$ph_add(type_45->mGenericsTypes,(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "06type.nc", 1676, 710, "struct sType* "), "06type.nc", 1676, 711),(char*)come_increment_ref_count(xsprintf("__generics_type0"), "06type.nc", 1676, 712),(_Bool)0,info,(_Bool)0,0), "06type.nc", 1676, 713));
            type_45->mPointerNum++;
            type_45->mHeap=(_Bool)1;
            __right_value0 = (void*)0;
            type2_46=(struct sType* )come_increment_ref_count(solve_generics(type_45,generics_type_44,info), "06type.nc", 1680, 714);
            type2_46->mPointerNum=1;
            type2_46->mHeap=(_Bool)1;
            __right_value0 = (void*)0;
            __dec_obj71=tmp_,
            tmp_=(struct sType* )come_increment_ref_count(sType_clone(type2_46), "06type.nc", 1685, 716);
            come_call_finalizer(sType_finalize, __dec_obj71,(void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc", 1685, 715);
            come_call_finalizer(sType_finalize, generics_type_44, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 1737, 717);
            come_call_finalizer(sType_finalize, type_45, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 1737, 718);
            come_call_finalizer(sType_finalize, type2_46, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 1737, 719);
        }
        else if(span$1char$p_operator_derefference(info->p)==47) {
            info->p->p++;
            skip_spaces_and_lf(info);
            type->mNoCallingDestructor=(_Bool)1;
            if(type->mNoSolvedGenericsType) {
                type->mNoSolvedGenericsType->mNoCallingDestructor=(_Bool)1;
            }
        }
        else if(gComePthread&&span$1char$p_operator_derefference(info->p)==124) {
            info->p->p++;
            skip_spaces_and_lf(info);
            type->mChannel=(_Bool)1;
            if(type->mNoSolvedGenericsType) {
                type->mNoSolvedGenericsType->mChannel=(_Bool)1;
            }
        }
        else if(span$1char$p_operator_derefference(info->p)==126) {
            info->p->p++;
            skip_spaces_and_lf(info);
            type->mDefferRightValue=(_Bool)1;
            if(type->mNoSolvedGenericsType) {
                type->mNoSolvedGenericsType->mDefferRightValue=(_Bool)1;
            }
        }
        else if(xisalpha(span$1char$p_operator_derefference(info->p))||span$1char$p_operator_derefference(info->p)==95) {
            p=info->p->p;
            sline=info->sline;
            __right_value0 = (void*)0;
            pointer_attr_47=(char* )come_increment_ref_count(parse_pointer_qualifier(info), "06type.nc", 1717, 720);
            if(info->p->p!=p) {
                if(string_operator_not_equals(pointer_attr_47,"")) {
                    if(type->mPointerAttribute==((void*)0)||string_operator_equals(type->mPointerAttribute,"")) {
                        __dec_obj72=type->mPointerAttribute,
                        type->mPointerAttribute=(char* )come_increment_ref_count(pointer_attr_47, "06type.nc", 1721, 722);
                        __dec_obj72 = come_decrement_ref_count(__dec_obj72, (void*)0, (void*)0, 0,0, (void*)0, "06type.nc", 1721, 721);
                    }
                    else {
                        __right_value0 = (void*)0;
                        __right_value1 = (void*)0;
                        __right_value2 = (void*)0;
                        __dec_obj73=type->mPointerAttribute,
                        type->mPointerAttribute=(char* )come_increment_ref_count(string_operator_add(((char* )(__right_value1=string_operator_add(type->mPointerAttribute," "))),pointer_attr_47), "06type.nc", 1724, 724);
                        __dec_obj73 = come_decrement_ref_count(__dec_obj73, (void*)0, (void*)0, 0,0, (void*)0, "06type.nc", 1724, 723);
                        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "06type.nc", 1724, 725));
                    }
                }
            }
            else {
                info->p->p=p;
                info->sline=sline;
                (pointer_attr_47 = come_decrement_ref_count(pointer_attr_47, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 1731, 726));
                break;
            }
            (pointer_attr_47 = come_decrement_ref_count(pointer_attr_47, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 1737, 727));
        }
        else {
            break;
        }
    }
    if(tmp_) {
                __right_value0 = (void*)0;
        __result_obj__0 = (struct sType* )come_increment_ref_count(((struct sType* )(__right_value0=sType_clone(tmp_))), "06type.nc", 1740, 728);
        come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 1740, 729);
        come_call_finalizer(sType_finalize, tmp_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 1740, 730);
        come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "06type.nc}", 1740, 731);
        neo_current_frame = fr.prev;
        come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "06type.nc}", 1740, 732);
        return __result_obj__0;
    }
        __right_value0 = (void*)0;
    __result_obj__0 = (struct sType* )come_increment_ref_count(((struct sType* )(__right_value0=sType_clone(type))), "06type.nc", 1743, 733);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 1743, 734);
    come_call_finalizer(sType_finalize, tmp_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 1743, 735);
    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "06type.nc}", 1743, 736);
    neo_current_frame = fr.prev;
    come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "06type.nc}", 1743, 737);
    return __result_obj__0;
}

void append_attribute_to_type(struct sType*  type  , char*  attribute  , _Bool for_variable, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "append_attribute_to_type"; neo_current_frame = &fr;
    char*  __dec_obj74  ;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    void* __right_value2 = (void*)0;
    char*  __dec_obj75  ;
    char*  __dec_obj76  ;
    char*  __dec_obj77  ;
    if(attribute==((void*)0)||string_operator_equals(attribute,"")) {
                (attribute = come_decrement_ref_count(attribute, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 1749, 738));
        neo_current_frame = fr.prev;
        return;
    }
    if(for_variable&&!info->in_typedef) {
        if(type->mVarAttribute==((void*)0)||string_operator_equals(type->mVarAttribute,"")) {
            __dec_obj74=type->mVarAttribute,
            type->mVarAttribute=(char* )come_increment_ref_count(attribute, "06type.nc", 1754, 740);
            __dec_obj74 = come_decrement_ref_count(__dec_obj74, (void*)0, (void*)0, 0,0, (void*)0, "06type.nc", 1754, 739);
        }
        else {
            __dec_obj75=type->mVarAttribute,
            type->mVarAttribute=(char* )come_increment_ref_count(string_operator_add(((char* )(__right_value1=string_operator_add(type->mVarAttribute," "))),attribute), "06type.nc", 1757, 742);
            __dec_obj75 = come_decrement_ref_count(__dec_obj75, (void*)0, (void*)0, 0,0, (void*)0, "06type.nc", 1757, 741);
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "06type.nc", 1757, 743));
        }
    }
    else {
        if(type->mAttribute==((void*)0)||string_operator_equals(type->mAttribute,"")) {
            __dec_obj76=type->mAttribute,
            type->mAttribute=(char* )come_increment_ref_count(attribute, "06type.nc", 1762, 745);
            __dec_obj76 = come_decrement_ref_count(__dec_obj76, (void*)0, (void*)0, 0,0, (void*)0, "06type.nc", 1762, 744);
        }
        else {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            __dec_obj77=type->mAttribute,
            type->mAttribute=(char* )come_increment_ref_count(string_operator_add(((char* )(__right_value1=string_operator_add(type->mAttribute," "))),attribute), "06type.nc", 1765, 747);
            __dec_obj77 = come_decrement_ref_count(__dec_obj77, (void*)0, (void*)0, 0,0, (void*)0, "06type.nc", 1765, 746);
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "06type.nc", 1765, 748));
        }
    }
    (attribute = come_decrement_ref_count(attribute, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 1770, 749));
    neo_current_frame = fr.prev;
}

void apply_type_qualifiers(struct sType*  type  , _Bool constant, _Bool complex_, _Bool atomic_, _Bool thread_local, _Bool thread_, _Bool alignas_double, _Bool register_, _Bool unsigned_, _Bool noreturn_, _Bool volatile_, _Bool uniq_, _Bool static_, _Bool extern_, _Bool inline_, _Bool restrict_, _Bool long_long, _Bool long_, _Bool short_, _Bool norecord, _Bool weak_)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "apply_type_qualifiers"; neo_current_frame = &fr;
    type->mConstant=type->mConstant||constant;
    type->mComplex=type->mComplex||complex_;
    type->mAtomic=type->mAtomic||atomic_;
    type->mThreadLocal=type->mThreadLocal||thread_local;
    type->mThread=type->mThread||thread_;
    type->mAlignasDouble=alignas_double;
    type->mRegister=register_;
    type->mUnsigned=type->mUnsigned||unsigned_;
    type->mNoreturn=type->mNoreturn||noreturn_;
    type->mVolatile=volatile_;
    type->mUniq=type->mUniq||uniq_;
    type->mStatic=(type->mStatic||static_)&&!type->mUniq;
    type->mExtern=type->mExtern||extern_;
    type->mInline=type->mInline||inline_;
    type->mRestrict=type->mRestrict||restrict_;
    type->mLongLong=type->mLongLong||long_long;
    type->mLong=type->mLong||long_;
    type->mShort=type->mShort||short_;
    type->mNorecord=type->mNorecord||norecord;
    type->mWeak=type->mWeak||weak_;
    neo_current_frame = fr.prev;
}

void merge_pointer_attribute_to_type(struct sType*  type  , char*  pointer_attribute  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "merge_pointer_attribute_to_type"; neo_current_frame = &fr;
    char*  __dec_obj78  ;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    void* __right_value2 = (void*)0;
    char*  __dec_obj79  ;
    if(string_operator_equals(pointer_attribute,"")) {
                (pointer_attribute = come_decrement_ref_count(pointer_attribute, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 1819, 750));
        neo_current_frame = fr.prev;
        return;
    }
    if(type->mPointerAttribute==((void*)0)||string_operator_equals(type->mPointerAttribute,"")) {
        __dec_obj78=type->mPointerAttribute,
        type->mPointerAttribute=(char* )come_increment_ref_count(pointer_attribute, "06type.nc", 1823, 752);
        __dec_obj78 = come_decrement_ref_count(__dec_obj78, (void*)0, (void*)0, 0,0, (void*)0, "06type.nc", 1823, 751);
    }
    else {
        __dec_obj79=type->mPointerAttribute,
        type->mPointerAttribute=(char* )come_increment_ref_count(string_operator_add(((char* )(__right_value1=string_operator_add(type->mPointerAttribute," "))),pointer_attribute), "06type.nc", 1826, 754);
        __dec_obj79 = come_decrement_ref_count(__dec_obj79, (void*)0, (void*)0, 0,0, (void*)0, "06type.nc", 1826, 753);
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "06type.nc", 1826, 755));
    }
    (pointer_attribute = come_decrement_ref_count(pointer_attribute, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 1830, 756));
    neo_current_frame = fr.prev;
}

char*  parse_variable_name_fun(struct sType*  type  , _Bool anonymous_name, _Bool var_name_between_brace, char*  attribute  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "parse_variable_name_fun"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  var_name  ;
    char*  __dec_obj80  ;
    char*  __dec_obj81  ;
    char*  __dec_obj82  ;
    char*  __dec_obj83  ;
    _Bool no_comma;
    struct sNode* node;
    struct sNode* __dec_obj84;
    char*  attribute2  ;
    char*  __result_obj__0  ;
    var_name=(char*)come_increment_ref_count(xsprintf(""), "06type.nc", 1832, 757);
    if(var_name_between_brace&&span$1char$p_operator_derefference(info->p)==40) {
        info->p->p++;
        skip_spaces_and_lf(info);
    }
    if(span$1char$p_operator_derefference(info->p)==58) {
        __right_value0 = (void*)0;
        __dec_obj80=var_name,
        var_name=(char* )come_increment_ref_count(__builtin_string(""), "06type.nc", 1839, 759);
        __dec_obj80 = come_decrement_ref_count(__dec_obj80, (void*)0, (void*)0, 0,0, (void*)0, "06type.nc", 1839, 758);
    }
    else if(anonymous_name) {
        static int num_anonymous_var_name=0;
        num_anonymous_var_name++;
        __right_value0 = (void*)0;
        __dec_obj81=var_name,
        var_name=(char* )come_increment_ref_count(xsprintf("anonymous_var_nameXYZ%d",num_anonymous_var_name), "06type.nc", 1844, 761);
        __dec_obj81 = come_decrement_ref_count(__dec_obj81, (void*)0, (void*)0, 0,0, (void*)0, "06type.nc", 1844, 760);
        type->mAnonymousVarName=(_Bool)1;
    }
    else if(xisalnum(*info->p->p)||span$1char$p_operator_derefference(info->p)==95) {
        __right_value0 = (void*)0;
        __dec_obj82=var_name,
        var_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "06type.nc", 1848, 763);
        __dec_obj82 = come_decrement_ref_count(__dec_obj82, (void*)0, (void*)0, 0,0, (void*)0, "06type.nc", 1848, 762);
    }
    else {
        static int num_anonymous_var_name_48=0;
        num_anonymous_var_name_48++;
        __right_value0 = (void*)0;
        __dec_obj83=var_name,
        var_name=(char* )come_increment_ref_count(xsprintf("anonymous_var_nameY%d",num_anonymous_var_name_48), "06type.nc", 1853, 765);
        __dec_obj83 = come_decrement_ref_count(__dec_obj83, (void*)0, (void*)0, 0,0, (void*)0, "06type.nc", 1853, 764);
        type->mAnonymousVarName=(_Bool)1;
    }
    if(var_name_between_brace&&span$1char$p_operator_derefference(info->p)==41) {
        info->p->p++;
        skip_spaces_and_lf(info);
    }
    if(span$1char$p_operator_derefference(info->p)==58) {
        info->p->p++;
        skip_spaces_and_lf(info);
        no_comma=info->no_comma;
        info->no_comma=(_Bool)1;
        __right_value0 = (void*)0;
        node=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "06type.nc", 1868, 766);
        info->no_comma=no_comma;
        __dec_obj84=type->mSizeNum,
        type->mSizeNum=(struct sNode*)come_increment_ref_count(node, "06type.nc", 1871, 768);
        (__dec_obj84 ? __dec_obj84 = come_decrement_ref_count(__dec_obj84, ((struct sNode*)__dec_obj84)->finalize, ((struct sNode*)__dec_obj84)->_protocol_obj, 0,0, (void*)0, "06type.nc", 1871, 767) :0);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "06type.nc", 1874, 769):(void*)0);
    }
    __right_value0 = (void*)0;
    attribute2=(char* )come_increment_ref_count(parse_struct_attribute(info,(_Bool)1), "06type.nc", 1874, 770);
    append_attribute_to_type(type,(char* )come_increment_ref_count(attribute, "06type.nc", 1876, 771),(_Bool)1,info);
    append_attribute_to_type(type,(char* )come_increment_ref_count(attribute2, "06type.nc", 1877, 772),(_Bool)1,info);
        __result_obj__0 = (char* )come_increment_ref_count(var_name, "06type.nc", 1879, 773);
    (attribute = come_decrement_ref_count(attribute, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 1879, 774));
    (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 1, (void*)0, "06type.nc", 1879, 775));
    (attribute2 = come_decrement_ref_count(attribute2, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 1879, 776));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "06type.nc", 1879, 777));
    return __result_obj__0;
}

struct tuple3$3sType$phchar$ph_Bool$* parse_type(struct sInfo*  info  , _Bool parse_variable_name, _Bool parse_multiple_type, _Bool in_function_parametor)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "parse_type"; neo_current_frame = &fr;
    char* head;
    int head_sline;
    void* __right_value0 = (void*)0;
    char*  attribute_before  ;
    char*  type_name  ;
    _Bool norecord;
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
    _Bool noreturn_;
    _Bool weak_;
    struct sNode* alignas_;
    _Bool alignas_double;
    char*  tag_attribute  ;
    _Bool struct_define_parsed;
    _Bool anonymous_type;
    _Bool anonymous_name;
    _Bool atomic_;
    _Bool thread_local;
    _Bool thread_;
    void* __right_value1 = (void*)0;
    struct buffer*  buf  ;
    char*  __dec_obj85  ;
    char*  __dec_obj86  ;
    char*  __dec_obj87  ;
    char*  __dec_obj88  ;
    char*  __dec_obj89  ;
    char*  __dec_obj90  ;
    char*  __dec_obj91  ;
    struct buffer*  attr  ;
    char* p;
    char* tail;
    char*  attr_str  ;
    void* __right_value2 = (void*)0;
    char*  __dec_obj92  ;
    char*  __dec_obj93  ;
    char*  __dec_obj94  ;
    char*  attr_49  ;
    char*  __dec_obj95  ;
    char*  __dec_obj96  ;
    char*  __dec_obj97  ;
    char*  __dec_obj98  ;
    char*  __dec_obj99  ;
    char*  __dec_obj100  ;
    char*  __dec_obj101  ;
    struct sNode* __dec_obj102;
    char*  __dec_obj103  ;
    char*  __dec_obj104  ;
    char*  __dec_obj105  ;
    char*  __dec_obj106  ;
    char*  __dec_obj107  ;
    char*  __dec_obj108  ;
    char*  __dec_obj109  ;
    char*  __dec_obj110  ;
    char*  __dec_obj111  ;
    char* p_50;
    int sline;
    char*  __dec_obj112  ;
    char*  __dec_obj113  ;
    char*  __dec_obj114  ;
    char*  struct_attribute_after_name  ;
    char*  __dec_obj115  ;
    char* p_51;
    int sline_52;
    struct tuple3$3sType$phchar$ph_Bool$* __result_obj__0;
    char*  struct_attribute_after_generics  ;
    char*  __dec_obj116  ;
    char* p_53;
    int sline_54;
    struct sNode* node;
    _Bool Value;
    char*  __dec_obj117  ;
    char* p_55;
    int sline_56;
    char*  __dec_obj118  ;
    char*  __dec_obj119  ;
    char*  __dec_obj120  ;
    char* p_57;
    int sline_58;
    struct tuple2$2char$phchar$ph* multiple_assign_var4
;    char*  asm_name  =0;
    char*  enum_attribute  =0;
    char*  __dec_obj121  ;
    struct tuple3$3sType$phchar$ph_Bool$* multiple_assign_var5
;    struct sType*  type  =0;
    char*  name  =0;
    _Bool err=0;
    char* p_59;
    int sline_60;
    char*  __dec_obj122  ;
    char*  __dec_obj123  ;
    char*  enum_attribute_after_name  ;
    char*  __dec_obj124  ;
    struct tuple3$3sType$phchar$ph_Bool$* multiple_assign_var6
;    struct sType*  type_61  =0;
    char*  name_62  =0;
    _Bool err_63=0;
    char*  enum_attribute_after_type  ;
    char*  __dec_obj125  ;
    char* p_64;
    int sline_65;
    char* p_66;
    int sline_67;
    char*  __dec_obj126  ;
    char* p2;
    int sline2;
    char*  __dec_obj127  ;
    char*  __dec_obj128  ;
    char*  __dec_obj129  ;
    char*  __dec_obj130  ;
    char*  __dec_obj131  ;
    char*  __dec_obj132  ;
    char*  __dec_obj133  ;
    char* p_68;
    int sline_69;
    char*  __dec_obj134  ;
    char*  __dec_obj135  ;
    char*  __dec_obj136  ;
    char* p_70;
    int sline_71;
    char*  __dec_obj137  ;
    char* p_72;
    int sline_73;
    char*  __dec_obj138  ;
    char*  __dec_obj139  ;
    char*  __dec_obj140  ;
    char* p_74;
    int sline_75;
    char*  __dec_obj141  ;
    char*  __dec_obj142  ;
    char*  __dec_obj143  ;
    char*  __dec_obj144  ;
    char*  __dec_obj145  ;
    char* p_76;
    int sline_77;
    char*  __dec_obj146  ;
    char*  __dec_obj147  ;
    char*  __dec_obj148  ;
    char*  __dec_obj149  ;
    char*  __dec_obj150  ;
    char*  __dec_obj151  ;
    char* p_78;
    int sline_79;
    char*  __dec_obj152  ;
    char*  __dec_obj153  ;
    char*  __dec_obj154  ;
    _Bool no_comma;
    struct sNode* exp;
    struct sType*  type_80  ;
    struct sNode* __dec_obj155;
    char*  var_name  ;
    struct sType*  __dec_obj156  ;
    char*  attribute  ;
    char*  __dec_obj157  ;
    char*  attribute_81  ;
    char*  __dec_obj158  ;
    char*  __dec_obj159  ;
    char*  __dec_obj160  ;
    char*  __dec_obj161  ;
    int pointer_num;
    char*  pointer_attribute  ;
    _Bool heap;
    _Bool refference;
    _Bool no_refference;
    _Bool channel;
    _Bool deffer_;
    _Bool any_class;
    _Bool vtable;
    char*  pointer_attr  ;
    char*  __dec_obj162  ;
    char*  __dec_obj163  ;
    char*  tuple_name  ;
    char*  __dec_obj164  ;
    _Bool lambda_flag;
    char* pX;
    int slineX;
    struct sType*  type_82  ;
    char*  var_name_83  ;
    _Bool function_pointer_flag;
    _Bool pointer_to_array_flag;
    char* p_84;
    int sline_85;
    char*  word  ;
    char*  __dec_obj165  ;
    _Bool no_output_come_code;
    struct sNode* exp_86;
    char*  word_87  ;
    _Bool var_name_between_brace;
    char* p_88;
    int sline_89;
    char*  word_90  ;
    _Bool anonymous;
    char*  __dec_obj166  ;
    struct sNode* node_91;
    _Bool Value_92;
    int pointer_num_93;
    struct sType*  __dec_obj167  ;
    struct sType*  __dec_obj168  ;
    struct sClass*  klass  ;
    char*  __dec_obj169  ;
    char*  __dec_obj170  ;
    char*  __dec_obj171  ;
    struct sNode* node_94;
    _Bool Value_95;
    struct sType*  __dec_obj172  ;
    struct sType*  __dec_obj173  ;
    _Bool anonymous_96;
    char*  __dec_obj174  ;
    struct sNode* node_97;
    _Bool Value_98;
    int pointer_num_99;
    struct sType*  __dec_obj175  ;
    struct sType*  __dec_obj176  ;
    struct sClass*  klass_100  ;
    char*  __dec_obj177  ;
    char*  attribute_101  ;
    char*  __dec_obj178  ;
    struct sType*  result_type  ;
    _Bool _conditional_value_X0;
    struct sType*  __dec_obj179  ;
    int i;
    _Bool _conditional_value_X1;
    struct sType*  __dec_obj180  ;
    int i_104;
    _Bool _conditional_value_X2;
    struct sType*  __dec_obj181  ;
    struct sType*  __dec_obj182  ;
    struct sType*  __dec_obj183  ;
    struct sNode* __dec_obj184;
    char*  __dec_obj185  ;
    struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$* multiple_assign_var7
;    struct list$1sType$ph* param_types=0;
    struct list$1char$ph* param_names=0;
    struct list$1char$ph* param_default_parametors=0;
    _Bool var_args=0;
    struct sType*  __dec_obj186  ;
    struct sType*  __dec_obj187  ;
    struct list$1sType$ph* __dec_obj188;
    struct list$1char$ph* __dec_obj189;
    _Bool pointer_paren;
    int paren_num;
    int array_pointer_num;
    struct sType*  __dec_obj190  ;
    struct sType*  __dec_obj191  ;
    struct sNode* __dec_obj192;
    char*  __dec_obj193  ;
    char*  __dec_obj194  ;
    char*  __dec_obj195  ;
    struct list$1sNode$ph* array;
    struct sNode* node_105;
    struct list$1sNode$ph* __dec_obj196;
    struct __current_stack1__ __current_stack1__;
    struct sNode* node_106;
    char*  function_pointer_attribute  ;
    int function_pointer_num;
    char*  pointer_attr_107  ;
    char*  __dec_obj197  ;
    char*  __dec_obj198  ;
    char*  pointer_attr2  ;
    char*  __dec_obj199  ;
    char*  __dec_obj200  ;
    struct sType*  result_type_108  ;
    _Bool _conditional_value_X3;
    struct sType*  __dec_obj201  ;
    int i_109;
    _Bool _conditional_value_X4;
    struct sType*  __dec_obj202  ;
    int i_110;
    _Bool _conditional_value_X5;
    struct sType*  __dec_obj203  ;
    struct sType*  __dec_obj204  ;
    struct sType*  __dec_obj205  ;
    struct sNode* __dec_obj206;
    int paren_flag;
    int array_pointer;
    char*  __dec_obj207  ;
    char*  __dec_obj208  ;
    struct sType*  __dec_obj209  ;
    struct sNode* node_111;
    struct sNode* node_112;
    struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$* multiple_assign_var8
;    struct list$1sType$ph* param_types_113=0;
    struct list$1char$ph* param_names_114=0;
    struct list$1char$ph* param_default_parametors_115=0;
    _Bool var_args_116=0;
    struct sType*  __dec_obj210  ;
    struct list$1sType$ph* __dec_obj211;
    struct list$1char$ph* __dec_obj212;
    char*  __dec_obj213  ;
    _Bool _conditional_value_X6;
    struct sType*  __dec_obj214  ;
    struct buffer*  t  ;
    struct sType*  type_  ;
    char*  __dec_obj215  ;
    struct sType*  __dec_obj216  ;
    char*  __dec_obj217  ;
    char*  __dec_obj218  ;
    struct sNode* __dec_obj219;
    char*  __dec_obj220  ;
    struct sType*  __dec_obj221  ;
    int i_117;
    _Bool _conditional_value_X7;
    struct sType*  __dec_obj222  ;
    struct sNode* __dec_obj223;
    char*  __dec_obj224  ;
    struct sType*  __dec_obj225  ;
    int i_118;
    _Bool _conditional_value_X8;
    struct sType*  __dec_obj226  ;
    struct sNode* __dec_obj227;
    char*  __dec_obj228  ;
    struct sType*  __dec_obj229  ;
    _Bool _conditional_value_X9;
    struct sType*  __dec_obj230  ;
    struct sType*  __dec_obj231  ;
    struct tuple3$3sType$phchar$ph_Bool$* multiple_assign_var9
;    struct sType*  generics_type  =0;
    char*  var_name_119  =0;
    _Bool err_120=0;
    int expected_generics_num;
    struct sClass*  generics_class  ;
    struct sType*  __dec_obj232  ;
    char*  new_name  ;
    struct sNode* __dec_obj233;
    char*  __dec_obj234  ;
    char*  __dec_obj235  ;
    struct sType*  __dec_obj236  ;
    struct sClass*  klass_121  ;
    void* __right_value3 = (void*)0;
    struct sClass*  klass_131  ;
    struct sType*  __dec_obj237  ;
    struct sType*  __dec_obj238  ;
    struct sNode* __dec_obj239;
    char*  __dec_obj240  ;
    struct sType*  __dec_obj241  ;
    struct list$1sType$ph* types;
    struct tuple3$3sType$phchar$ph_Bool$* multiple_assign_var10
;    struct sType*  type2  =0;
    char*  name_132  =0;
    _Bool err_133=0;
    int num_tuples;
    struct sType*  __dec_obj242  ;
    struct list$1sType$ph* _o2_saved_3;
    struct sType*  it  ;
    struct sType*  __dec_obj243  ;
    struct sType*  __dec_obj244  ;
    char*  new_name_134  ;
    char*  __dec_obj245  ;
    char*  attribute_135  ;
    char*  __dec_obj246  ;
    char*  __dec_obj247  ;
    char*  __dec_obj248  ;
    char*  __dec_obj249  ;
    struct list$1sNode$ph* array_num_typedef;
    struct list$1sNode$ph* __dec_obj250;
    _Bool array_static;
    _Bool array_restrict;
    struct sNode* node_136;
    struct __current_stack2__ __current_stack2__;
    struct __current_stack3__ __current_stack3__;
    struct tuple2$2char$phchar$ph* multiple_assign_var11
;    char*  asm_name_139  =0;
    char*  attribute2  =0;
    char*  __dec_obj251  ;
    struct sType*  type_before  ;
    struct sType*  __dec_obj252  ;
    struct sNode* __list_values1__[1];
    struct list$1sNode$ph* __dec_obj253;
    struct sType*  __dec_obj254  ;
    char*  __dec_obj255  ;
    char*  __dec_obj256  ;
    char*  __dec_obj257  ;
    memset(&type_82, 0, sizeof(type_82));
    memset(&var_name_83, 0, sizeof(var_name_83));
    memset(&result_type, 0, sizeof(result_type));
    memset(&__current_stack1__, 0, sizeof(struct __current_stack1__));
    memset(&result_type_108, 0, sizeof(result_type_108));
    memset(&__current_stack2__, 0, sizeof(struct __current_stack2__));
    memset(&__current_stack3__, 0, sizeof(struct __current_stack3__));
    head=info->p->p;
    head_sline=info->sline;
    attribute_before=(char* )come_increment_ref_count(parse_struct_attribute(info,(_Bool)1), "06type.nc", 1887, 778);
    __right_value0 = (void*)0;
    type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "06type.nc", 1888, 779);
    norecord=(_Bool)0;
    constant=(_Bool)0;
    static_=(_Bool)0;
    volatile_=(_Bool)0;
    register_=(_Bool)0;
    unsigned_=(_Bool)0;
    long_=(_Bool)0;
    long_long=(_Bool)0;
    short_=(_Bool)0;
    restrict_=(_Bool)0;
    struct_=(_Bool)0;
    union_=(_Bool)0;
    enum_=(_Bool)0;
    no_heap=(_Bool)0;
    extern_=(_Bool)0;
    inline_=(_Bool)0;
    uniq_=(_Bool)0;
    tuple_=(_Bool)0;
    original_var_name=(_Bool)0;
    complex_=(_Bool)0;
    type_name_=(_Bool)0;
    noreturn_=(_Bool)0;
    weak_=(_Bool)0;
    alignas_=((void*)0);
    alignas_double=(_Bool)0;
    __right_value0 = (void*)0;
    tag_attribute=(char*)come_increment_ref_count(xsprintf(""), "06type.nc", 1917, 780);
    struct_define_parsed=(_Bool)0;
    anonymous_type=(_Bool)0;
    anonymous_name=(_Bool)0;
    atomic_=(_Bool)0;
    thread_local=(_Bool)0;
    thread_=(_Bool)0;
    while((_Bool)1) {
        if(string_operator_equals(type_name,"__type__")) {
            if(span$1char$p_operator_derefference(info->p)==40) {
                info->p->p++;
                skip_spaces_and_lf(info);
            }
            __right_value0 = (void*)0;
            buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "06type.nc", 1932, 781, "struct buffer* "), "06type.nc", 1932, 782)), "06type.nc", 1932, 783);
            while(span$1char$p_operator_derefference(info->p)) {
                if(span$1char$p_operator_derefference(info->p)==41) {
                    info->p->p++;
                    skip_spaces_and_lf(info);
                    break;
                }
                else {
                    buffer_append_char(buf,span$1char$p_operator_derefference(info->p));
                    info->p->p++;
                }
            }
            __right_value0 = (void*)0;
            __dec_obj85=type_name,
            type_name=(char* )come_increment_ref_count(buffer_to_string(buf), "06type.nc", 1944, 785);
            __dec_obj85 = come_decrement_ref_count(__dec_obj85, (void*)0, (void*)0, 0,0, (void*)0, "06type.nc", 1944, 784);
            type_name_=(_Bool)1;
            come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 2579, 786);
        }
        else if(string_operator_equals(type_name,"_Thread_local")) {
            __right_value0 = (void*)0;
            __dec_obj86=type_name,
            type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "06type.nc", 1949, 788);
            __dec_obj86 = come_decrement_ref_count(__dec_obj86, (void*)0, (void*)0, 0,0, (void*)0, "06type.nc", 1949, 787);
            thread_local=(_Bool)1;
        }
        else if(string_operator_equals(type_name,"_norecord")) {
            __right_value0 = (void*)0;
            __dec_obj87=type_name,
            type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "06type.nc", 1953, 790);
            __dec_obj87 = come_decrement_ref_count(__dec_obj87, (void*)0, (void*)0, 0,0, (void*)0, "06type.nc", 1953, 789);
            norecord=(_Bool)1;
        }
        else if(string_operator_equals(type_name,"_weak")) {
            __right_value0 = (void*)0;
            __dec_obj88=type_name,
            type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "06type.nc", 1957, 792);
            __dec_obj88 = come_decrement_ref_count(__dec_obj88, (void*)0, (void*)0, 0,0, (void*)0, "06type.nc", 1957, 791);
            weak_=(_Bool)1;
        }
        else if(string_operator_equals(type_name,"__thread")) {
            __right_value0 = (void*)0;
            __dec_obj89=type_name,
            type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "06type.nc", 1961, 794);
            __dec_obj89 = come_decrement_ref_count(__dec_obj89, (void*)0, (void*)0, 0,0, (void*)0, "06type.nc", 1961, 793);
            thread_=(_Bool)1;
        }
        else if(string_operator_equals(type_name,"_Atomic")) {
            if(span$1char$p_operator_derefference(info->p)==40) {
                expected_next_character(40,info);
            }
            __right_value0 = (void*)0;
            __dec_obj90=type_name,
            type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "06type.nc", 1968, 796);
            __dec_obj90 = come_decrement_ref_count(__dec_obj90, (void*)0, (void*)0, 0,0, (void*)0, "06type.nc", 1968, 795);
            atomic_=(_Bool)1;
        }
        else if(string_operator_equals(type_name,"__extension__")) {
            __right_value0 = (void*)0;
            __dec_obj91=type_name,
            type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "06type.nc", 1972, 798);
            __dec_obj91 = come_decrement_ref_count(__dec_obj91, (void*)0, (void*)0, 0,0, (void*)0, "06type.nc", 1972, 797);
        }
        else if(string_operator_equals(type_name,"__attribute__")) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            attr=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "06type.nc", 1975, 799, "struct buffer* "), "06type.nc", 1975, 800)), "06type.nc", 1975, 801);
            buffer_append_str(attr,"__attribute__");
            skip_spaces_and_lf(info);
            if(span$1char$p_operator_derefference(info->p)==40) {
                p=info->p->p;
                skip_paren(info);
                tail=info->p->p;
                buffer_append(attr,p,tail-p);
            }
            __right_value0 = (void*)0;
            attr_str=(char* )come_increment_ref_count(buffer_to_string(attr), "06type.nc", 1988, 802);
            if(string_operator_not_equals(attribute_before,"")) {
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                __dec_obj92=attribute_before,
                attribute_before=(char* )come_increment_ref_count(string_operator_add(((char* )(__right_value1=string_operator_add(attribute_before," "))),attr_str), "06type.nc", 1990, 804);
                __dec_obj92 = come_decrement_ref_count(__dec_obj92, (void*)0, (void*)0, 0,0, (void*)0, "06type.nc", 1990, 803);
                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "06type.nc", 1990, 805));
            }
            else {
                __dec_obj93=attribute_before,
                attribute_before=(char* )come_increment_ref_count(attr_str, "06type.nc", 1993, 807);
                __dec_obj93 = come_decrement_ref_count(__dec_obj93, (void*)0, (void*)0, 0,0, (void*)0, "06type.nc", 1993, 806);
            }
            __right_value0 = (void*)0;
            __dec_obj94=type_name,
            type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "06type.nc", 1996, 809);
            __dec_obj94 = come_decrement_ref_count(__dec_obj94, (void*)0, (void*)0, 0,0, (void*)0, "06type.nc", 1996, 808);
            come_call_finalizer(buffer_finalize, attr, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 2579, 810);
            (attr_str = come_decrement_ref_count(attr_str, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 2579, 811));
        }
        else if(string_operator_equals(type_name,"__declspec")) {
            __right_value0 = (void*)0;
            attr_49=(char* )come_increment_ref_count(parse_declspec_attribute(info), "06type.nc", 1999, 812);
            if(string_operator_not_equals(attr_49,"")) {
                if(string_operator_not_equals(attribute_before,"")) {
                    __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    __right_value2 = (void*)0;
                    __dec_obj95=attribute_before,
                    attribute_before=(char* )come_increment_ref_count(string_operator_add(((char* )(__right_value1=string_operator_add(attribute_before," "))),attr_49), "06type.nc", 2002, 814);
                    __dec_obj95 = come_decrement_ref_count(__dec_obj95, (void*)0, (void*)0, 0,0, (void*)0, "06type.nc", 2002, 813);
                    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "06type.nc", 2002, 815));
                }
                else {
                    __dec_obj96=attribute_before,
                    attribute_before=(char* )come_increment_ref_count(attr_49, "06type.nc", 2005, 817);
                    __dec_obj96 = come_decrement_ref_count(__dec_obj96, (void*)0, (void*)0, 0,0, (void*)0, "06type.nc", 2005, 816);
                }
            }
            __right_value0 = (void*)0;
            __dec_obj97=type_name,
            type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "06type.nc", 2009, 819);
            __dec_obj97 = come_decrement_ref_count(__dec_obj97, (void*)0, (void*)0, 0,0, (void*)0, "06type.nc", 2009, 818);
            (attr_49 = come_decrement_ref_count(attr_49, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 2579, 820));
        }
        else if(string_operator_equals(type_name,"_Noreturn")) {
            __right_value0 = (void*)0;
            __dec_obj98=type_name,
            type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "06type.nc", 2012, 822);
            __dec_obj98 = come_decrement_ref_count(__dec_obj98, (void*)0, (void*)0, 0,0, (void*)0, "06type.nc", 2012, 821);
            noreturn_=(_Bool)1;
        }
        else if(string_operator_equals(type_name,"__noreturn")) {
            __right_value0 = (void*)0;
            __dec_obj99=type_name,
            type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "06type.nc", 2016, 824);
            __dec_obj99 = come_decrement_ref_count(__dec_obj99, (void*)0, (void*)0, 0,0, (void*)0, "06type.nc", 2016, 823);
            noreturn_=(_Bool)1;
        }
        else if(string_operator_equals(type_name,"_Nullable")) {
            __right_value0 = (void*)0;
            __dec_obj100=type_name,
            type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "06type.nc", 2020, 826);
            __dec_obj100 = come_decrement_ref_count(__dec_obj100, (void*)0, (void*)0, 0,0, (void*)0, "06type.nc", 2020, 825);
        }
        else if(string_operator_equals(type_name,"_noreturn")) {
            __right_value0 = (void*)0;
            __dec_obj101=type_name,
            type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "06type.nc", 2023, 828);
            __dec_obj101 = come_decrement_ref_count(__dec_obj101, (void*)0, (void*)0, 0,0, (void*)0, "06type.nc", 2023, 827);
            noreturn_=(_Bool)1;
        }
        else if(string_operator_equals(type_name,"_Alignas")) {
            expected_next_character(40,info);
            if((info->end-info->p->p)>strlen("double")&&memcmp(info->p->p,"double",strlen("double"))==0) {
                __right_value0 = (void*)0;
                (void)((char* )(__right_value0=parse_word((_Bool)0,info)));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "06type.nc", 2031, 829));
                alignas_double=(_Bool)1;
            }
            else {
                __right_value0 = (void*)0;
                __dec_obj102=alignas_,
                alignas_=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "06type.nc", 2035, 831);
                (__dec_obj102 ? __dec_obj102 = come_decrement_ref_count(__dec_obj102, ((struct sNode*)__dec_obj102)->finalize, ((struct sNode*)__dec_obj102)->_protocol_obj, 0,0, (void*)0, "06type.nc", 2035, 830) :0);
            }
            expected_next_character(41,info);
            __right_value0 = (void*)0;
            __dec_obj103=type_name,
            type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "06type.nc", 2040, 833);
            __dec_obj103 = come_decrement_ref_count(__dec_obj103, (void*)0, (void*)0, 0,0, (void*)0, "06type.nc", 2040, 832);
        }
        else if(string_operator_equals(type_name,"const")) {
            constant=(_Bool)1;
            __right_value0 = (void*)0;
            __dec_obj104=type_name,
            type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "06type.nc", 2045, 835);
            __dec_obj104 = come_decrement_ref_count(__dec_obj104, (void*)0, (void*)0, 0,0, (void*)0, "06type.nc", 2045, 834);
        }
        else if(string_operator_equals(type_name,"_Complex")) {
            complex_=(_Bool)1;
            __right_value0 = (void*)0;
            __dec_obj105=type_name,
            type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "06type.nc", 2050, 837);
            __dec_obj105 = come_decrement_ref_count(__dec_obj105, (void*)0, (void*)0, 0,0, (void*)0, "06type.nc", 2050, 836);
        }
        else if(string_operator_equals(type_name,"static")) {
            static_=(_Bool)1;
            __right_value0 = (void*)0;
            __dec_obj106=type_name,
            type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "06type.nc", 2055, 839);
            __dec_obj106 = come_decrement_ref_count(__dec_obj106, (void*)0, (void*)0, 0,0, (void*)0, "06type.nc", 2055, 838);
        }
        else if(string_operator_equals(type_name,"uniq")) {
            uniq_=(_Bool)1;
            __right_value0 = (void*)0;
            __dec_obj107=type_name,
            type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "06type.nc", 2060, 841);
            __dec_obj107 = come_decrement_ref_count(__dec_obj107, (void*)0, (void*)0, 0,0, (void*)0, "06type.nc", 2060, 840);
        }
        else if(string_operator_equals(type_name,"extern")) {
            extern_=(_Bool)1;
            __right_value0 = (void*)0;
            __dec_obj108=type_name,
            type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "06type.nc", 2065, 843);
            __dec_obj108 = come_decrement_ref_count(__dec_obj108, (void*)0, (void*)0, 0,0, (void*)0, "06type.nc", 2065, 842);
        }
        else if(string_operator_equals(type_name,"inline")||string_operator_equals(type_name,"__inline")||string_operator_equals(type_name,"__inline__")||string_operator_equals(type_name,"__always_inline")||string_operator_equals(type_name,"__forceinline")) {
            inline_=(_Bool)1;
            __right_value0 = (void*)0;
            __dec_obj109=type_name,
            type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "06type.nc", 2071, 845);
            __dec_obj109 = come_decrement_ref_count(__dec_obj109, (void*)0, (void*)0, 0,0, (void*)0, "06type.nc", 2071, 844);
        }
        else if(string_operator_equals(type_name,"volatile")||string_operator_equals(type_name,"__volatile__")) {
            volatile_=(_Bool)1;
            __right_value0 = (void*)0;
            __dec_obj110=type_name,
            type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "06type.nc", 2076, 847);
            __dec_obj110 = come_decrement_ref_count(__dec_obj110, (void*)0, (void*)0, 0,0, (void*)0, "06type.nc", 2076, 846);
        }
        else if(string_operator_equals(type_name,"struct")) {
            struct_=(_Bool)1;
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __dec_obj111=tag_attribute,
            tag_attribute=(char* )come_increment_ref_count(merge_tag_attribute((char* )come_increment_ref_count(tag_attribute, "06type.nc", 2080, 848),(char* )come_increment_ref_count(parse_struct_attribute(info,(_Bool)1), "06type.nc", 2080, 849)), "06type.nc", 2080, 851);
            __dec_obj111 = come_decrement_ref_count(__dec_obj111, (void*)0, (void*)0, 0,0, (void*)0, "06type.nc", 2080, 850);
            if(span$1char$p_operator_derefference(info->p)==123) {
                p_50=info->p->p;
                sline=info->sline;
                __right_value0 = (void*)0;
                ((char* )(__right_value0=skip_block(info,(_Bool)0)));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "06type.nc", 2086, 852));
                if(span$1char$p_operator_derefference(info->p)==59) {
                    anonymous_name=(_Bool)1;
                    anonymous_type=(_Bool)1;
                    __right_value0 = (void*)0;
                    __dec_obj112=type_name,
                    type_name=(char* )come_increment_ref_count(__builtin_string(""), "06type.nc", 2091, 854);
                    __dec_obj112 = come_decrement_ref_count(__dec_obj112, (void*)0, (void*)0, 0,0, (void*)0, "06type.nc", 2091, 853);
                    info->p->p=p_50;
                    info->sline=sline;
                    struct_define_parsed=(_Bool)1;
                    break;
                }
                else {
                    anonymous_type=(_Bool)1;
                    __right_value0 = (void*)0;
                    __dec_obj113=type_name,
                    type_name=(char* )come_increment_ref_count(__builtin_string(""), "06type.nc", 2099, 856);
                    __dec_obj113 = come_decrement_ref_count(__dec_obj113, (void*)0, (void*)0, 0,0, (void*)0, "06type.nc", 2099, 855);
                    info->p->p=p_50;
                    info->sline=sline;
                    struct_define_parsed=(_Bool)1;
                    break;
                }
            }
            skip_spaces_and_lf(info);
            if(span$1char$p_operator_derefference(info->p)!=62) {
                __right_value0 = (void*)0;
                __dec_obj114=type_name,
                type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "06type.nc", 2110, 858);
                __dec_obj114 = come_decrement_ref_count(__dec_obj114, (void*)0, (void*)0, 0,0, (void*)0, "06type.nc", 2110, 857);
                skip_spaces_and_lf(info);
                __right_value0 = (void*)0;
                struct_attribute_after_name=(char* )come_increment_ref_count(parse_struct_attribute(info,(_Bool)1), "06type.nc", 2114, 859);
                __right_value0 = (void*)0;
                __dec_obj115=tag_attribute,
                tag_attribute=(char* )come_increment_ref_count(merge_tag_attribute((char* )come_increment_ref_count(tag_attribute, "06type.nc", 2115, 860),(char* )come_increment_ref_count(struct_attribute_after_name, "06type.nc", 2115, 861)), "06type.nc", 2115, 863);
                __dec_obj115 = come_decrement_ref_count(__dec_obj115, (void*)0, (void*)0, 0,0, (void*)0, "06type.nc", 2115, 862);
                if(span$1char$p_operator_derefference(info->p)==60) {
                    p_51=info->p->p;
                    sline_52=info->sline;
                    info->p->p++;
                    skip_spaces_and_lf(info);
                    while((_Bool)1) {
                        if(span$1char$p_operator_derefference(info->p)==62) {
                            info->p->p++;
                            skip_spaces_and_lf(info);
                            if(span$1char$p_operator_derefference(info->p)==123) {
                            }
                            else {
                                info->p->p=p_51;
                                info->sline=sline_52;
                            }
                            break;
                        }
                        else if(span$1char$p_operator_derefference(info->p)==0) {
                            err_msg(info,"invalid struct definition");
                                                        __right_value0 = (void*)0;
                            __right_value1 = (void*)0;
                            __result_obj__0 = (struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value1=tuple3$3sType$phchar$ph_Bool$_initialize((struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count((struct tuple3$3sType$phchar$ph_Bool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$ph_Bool$)*(1), "06type.nc", 2139, 864, "struct tuple3$3sType$phchar$ph_Bool$"), "06type.nc", 2139, 865),(struct sType* )come_increment_ref_count((struct sType* )((void*)0), "06type.nc", 2139, 866),(char* )come_increment_ref_count((char* )((void*)0), "06type.nc", 2139, 867),(_Bool)0))), "06type.nc", 2139, 868);
                            (struct_attribute_after_name = come_decrement_ref_count(struct_attribute_after_name, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 2139, 869));
                            (attribute_before = come_decrement_ref_count(attribute_before, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 2139, 870));
                            (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 2139, 871));
                            ((alignas_) ? alignas_ = come_decrement_ref_count(alignas_, ((struct sNode*)alignas_)->finalize, ((struct sNode*)alignas_)->_protocol_obj, 0, 0,(void*)0, "06type.nc", 2139, 872):(void*)0);
                            (tag_attribute = come_decrement_ref_count(tag_attribute, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 2139, 873));
                            come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "06type.nc}", 2139, 874);
                            neo_current_frame = fr.prev;
                            come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "06type.nc}", 2139, 875);
                            return __result_obj__0;
                        }
                        else {
                            info->p->p++;
                        }
                    }
                }
                __right_value0 = (void*)0;
                struct_attribute_after_generics=(char* )come_increment_ref_count(parse_struct_attribute(info,(_Bool)1), "06type.nc", 2147, 876);
                __right_value0 = (void*)0;
                __dec_obj116=tag_attribute,
                tag_attribute=(char* )come_increment_ref_count(merge_tag_attribute((char* )come_increment_ref_count(tag_attribute, "06type.nc", 2148, 877),(char* )come_increment_ref_count(struct_attribute_after_generics, "06type.nc", 2148, 878)), "06type.nc", 2148, 880);
                __dec_obj116 = come_decrement_ref_count(__dec_obj116, (void*)0, (void*)0, 0,0, (void*)0, "06type.nc", 2148, 879);
                if(span$1char$p_operator_derefference(info->p)==123) {
                    p_53=info->p->p;
                    sline_54=info->sline;
                    __right_value0 = (void*)0;
                    ((char* )(__right_value0=skip_block(info,(_Bool)0)));
                    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "06type.nc", 2154, 881));
                    __right_value0 = (void*)0;
                    (void)((char* )(__right_value0=parse_struct_attribute(info,(_Bool)1)));
                    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "06type.nc", 2156, 882));
                    if(span$1char$p_operator_derefference(info->p)==59) {
                        info->p->p=head;
                        info->sline=head_sline;
                                                __right_value0 = (void*)0;
                        __right_value1 = (void*)0;
                        __result_obj__0 = (struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value1=tuple3$3sType$phchar$ph_Bool$_initialize((struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count((struct tuple3$3sType$phchar$ph_Bool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$ph_Bool$)*(1), "06type.nc", 2161, 883, "struct tuple3$3sType$phchar$ph_Bool$"), "06type.nc", 2161, 884),(struct sType* )come_increment_ref_count((struct sType* )((void*)0), "06type.nc", 2161, 885),(char* )come_increment_ref_count((char* )((void*)0), "06type.nc", 2161, 886),(_Bool)0))), "06type.nc", 2161, 887);
                        (struct_attribute_after_name = come_decrement_ref_count(struct_attribute_after_name, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 2161, 888));
                        (struct_attribute_after_generics = come_decrement_ref_count(struct_attribute_after_generics, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 2161, 889));
                        (attribute_before = come_decrement_ref_count(attribute_before, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 2161, 890));
                        (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 2161, 891));
                        ((alignas_) ? alignas_ = come_decrement_ref_count(alignas_, ((struct sNode*)alignas_)->finalize, ((struct sNode*)alignas_)->_protocol_obj, 0, 0,(void*)0, "06type.nc", 2161, 892):(void*)0);
                        (tag_attribute = come_decrement_ref_count(tag_attribute, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 2161, 893));
                        come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "06type.nc}", 2161, 894);
                        neo_current_frame = fr.prev;
                        come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "06type.nc}", 2161, 895);
                        return __result_obj__0;
                    }
                    else {
                        info->p->p=p_53;
                        info->sline=sline_54;
                        __right_value0 = (void*)0;
                        node=(struct sNode*)come_increment_ref_count(parse_struct((char* )come_increment_ref_count(type_name, "06type.nc", 2167, 896),(char* )come_increment_ref_count(tag_attribute, "06type.nc", 2167, 897),info,(_Bool)0), "06type.nc", 2167, 898);
                        Value=node_compile(node,info);
                        if(!Value) {
                                                        __right_value0 = (void*)0;
                            __right_value1 = (void*)0;
                            __result_obj__0 = (struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value1=tuple3$3sType$phchar$ph_Bool$_initialize((struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count((struct tuple3$3sType$phchar$ph_Bool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$ph_Bool$)*(1), "06type.nc", 2170, 899, "struct tuple3$3sType$phchar$ph_Bool$"), "06type.nc", 2170, 900),(struct sType* )come_increment_ref_count((struct sType* )((void*)0), "06type.nc", 2170, 901),(char* )come_increment_ref_count((char* )((void*)0), "06type.nc", 2170, 902),(_Bool)0))), "06type.nc", 2170, 903);
                            ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "06type.nc", 2170, 904):(void*)0);
                            (struct_attribute_after_name = come_decrement_ref_count(struct_attribute_after_name, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 2170, 905));
                            (struct_attribute_after_generics = come_decrement_ref_count(struct_attribute_after_generics, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 2170, 906));
                            (attribute_before = come_decrement_ref_count(attribute_before, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 2170, 907));
                            (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 2170, 908));
                            ((alignas_) ? alignas_ = come_decrement_ref_count(alignas_, ((struct sNode*)alignas_)->finalize, ((struct sNode*)alignas_)->_protocol_obj, 0, 0,(void*)0, "06type.nc", 2170, 909):(void*)0);
                            (tag_attribute = come_decrement_ref_count(tag_attribute, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 2170, 910));
                            come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "06type.nc}", 2170, 911);
                            neo_current_frame = fr.prev;
                            come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "06type.nc}", 2170, 912);
                            return __result_obj__0;
                        }
                        struct_define_parsed=(_Bool)1;
                        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "06type.nc", 2173, 913):(void*)0);
                        (struct_attribute_after_name = come_decrement_ref_count(struct_attribute_after_name, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 2173, 914));
                        (struct_attribute_after_generics = come_decrement_ref_count(struct_attribute_after_generics, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 2173, 915));
                        break;
                        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "06type.nc", 2175, 916):(void*)0);
                    }
                }
                (struct_attribute_after_name = come_decrement_ref_count(struct_attribute_after_name, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 2177, 917));
                (struct_attribute_after_generics = come_decrement_ref_count(struct_attribute_after_generics, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 2177, 918));
            }
        }
        else if(string_operator_equals(type_name,"union")) {
            union_=(_Bool)1;
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __dec_obj117=tag_attribute,
            tag_attribute=(char* )come_increment_ref_count(merge_tag_attribute((char* )come_increment_ref_count(tag_attribute, "06type.nc", 2180, 919),(char* )come_increment_ref_count(parse_struct_attribute(info,(_Bool)1), "06type.nc", 2180, 920)), "06type.nc", 2180, 922);
            __dec_obj117 = come_decrement_ref_count(__dec_obj117, (void*)0, (void*)0, 0,0, (void*)0, "06type.nc", 2180, 921);
            if(span$1char$p_operator_derefference(info->p)==123) {
                p_55=info->p->p;
                sline_56=info->sline;
                __right_value0 = (void*)0;
                ((char* )(__right_value0=skip_block(info,(_Bool)0)));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "06type.nc", 2186, 923));
                if((info->end-info->p->p)>=strlen("__attribute__")&&memcmp(info->p->p,"__attribute__",strlen("__attribute__"))==0) {
                    __right_value0 = (void*)0;
                    ((struct tuple2$2char$phchar$ph*)(__right_value0=parse_attribute(info)));
                    come_call_finalizer(tuple2$2char$phchar$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "06type.nc}", 2189, 924);
                }
                if(span$1char$p_operator_derefference(info->p)==59) {
                    info->p->p=head;
                    info->sline=head_sline;
                    anonymous_type=(_Bool)1;
                    __right_value0 = (void*)0;
                    __dec_obj118=type_name,
                    type_name=(char* )come_increment_ref_count(__builtin_string(""), "06type.nc", 2196, 926);
                    __dec_obj118 = come_decrement_ref_count(__dec_obj118, (void*)0, (void*)0, 0,0, (void*)0, "06type.nc", 2196, 925);
                    info->p->p=p_55;
                    info->sline=sline_56;
                    break;
                }
                else {
                    anonymous_type=(_Bool)1;
                    __right_value0 = (void*)0;
                    __dec_obj119=type_name,
                    type_name=(char* )come_increment_ref_count(__builtin_string(""), "06type.nc", 2203, 928);
                    __dec_obj119 = come_decrement_ref_count(__dec_obj119, (void*)0, (void*)0, 0,0, (void*)0, "06type.nc", 2203, 927);
                    info->p->p=p_55;
                    info->sline=sline_56;
                    break;
                }
            }
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            __dec_obj120=type_name,
            type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "06type.nc", 2212, 930);
            __dec_obj120 = come_decrement_ref_count(__dec_obj120, (void*)0, (void*)0, 0,0, (void*)0, "06type.nc", 2212, 929);
            skip_spaces_and_lf(info);
            if(span$1char$p_operator_derefference(info->p)==123) {
                p_57=info->p->p;
                sline_58=info->sline;
                __right_value0 = (void*)0;
                ((char* )(__right_value0=skip_block(info,(_Bool)0)));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "06type.nc", 2220, 931));
                if(span$1char$p_operator_derefference(info->p)==59) {
                    info->p->p=head;
                    info->sline=head_sline;
                                        __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    __result_obj__0 = (struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value1=tuple3$3sType$phchar$ph_Bool$_initialize((struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count((struct tuple3$3sType$phchar$ph_Bool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$ph_Bool$)*(1), "06type.nc", 2225, 932, "struct tuple3$3sType$phchar$ph_Bool$"), "06type.nc", 2225, 933),(struct sType* )come_increment_ref_count((struct sType* )((void*)0), "06type.nc", 2225, 934),(char* )come_increment_ref_count((char* )((void*)0), "06type.nc", 2225, 935),(_Bool)0))), "06type.nc", 2225, 936);
                    (attribute_before = come_decrement_ref_count(attribute_before, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 2225, 937));
                    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 2225, 938));
                    ((alignas_) ? alignas_ = come_decrement_ref_count(alignas_, ((struct sNode*)alignas_)->finalize, ((struct sNode*)alignas_)->_protocol_obj, 0, 0,(void*)0, "06type.nc", 2225, 939):(void*)0);
                    (tag_attribute = come_decrement_ref_count(tag_attribute, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 2225, 940));
                    come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "06type.nc}", 2225, 941);
                    neo_current_frame = fr.prev;
                    come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "06type.nc}", 2225, 942);
                    return __result_obj__0;
                }
                else {
                    anonymous_type=(_Bool)1;
                    info->p->p=p_57;
                    info->sline=sline_58;
                    break;
                }
            }
        }
        else if(string_operator_equals(type_name,"enum")) {
            enum_=(_Bool)1;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            multiple_assign_var4=((struct tuple2$2char$phchar$ph*)(__right_value0=parse_attribute(info)));
            asm_name=(char* )come_increment_ref_count(multiple_assign_var4->v1, "06type.nc", 2240, 943);
            enum_attribute=(char* )come_increment_ref_count(multiple_assign_var4->v2, "06type.nc", 2240, 944);
            come_call_finalizer(tuple2$2char$phchar$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "06type.nc}", 2240, 945);
            __right_value0 = (void*)0;
            __dec_obj121=tag_attribute,
            tag_attribute=(char* )come_increment_ref_count(merge_tag_attribute((char* )come_increment_ref_count(tag_attribute, "06type.nc", 2241, 946),(char* )come_increment_ref_count(enum_attribute, "06type.nc", 2241, 947)), "06type.nc", 2241, 949);
            __dec_obj121 = come_decrement_ref_count(__dec_obj121, (void*)0, (void*)0, 0,0, (void*)0, "06type.nc", 2241, 948);
            if(span$1char$p_operator_derefference(info->p)==58) {
                info->p->p++;
                skip_spaces_and_lf(info);
                __right_value0 = (void*)0;
                multiple_assign_var5=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                type=(struct sType* )come_increment_ref_count(multiple_assign_var5->v1, "06type.nc", 2247, 950);
                name=(char* )come_increment_ref_count(multiple_assign_var5->v2, "06type.nc", 2247, 951);
                err=multiple_assign_var5->v3;
                come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "06type.nc}", 2247, 952);
                come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 2250, 953);
                (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 2250, 954));
            }
            skip_spaces_and_lf(info);
            if(span$1char$p_operator_derefference(info->p)==123) {
                p_59=info->p->p;
                sline_60=info->sline;
                __right_value0 = (void*)0;
                ((char* )(__right_value0=skip_block(info,(_Bool)0)));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "06type.nc", 2256, 955));
                if((info->end-info->p->p)>=strlen("__attribute__")&&memcmp(info->p->p,"__attribute__",strlen("__attribute__"))==0) {
                    __right_value0 = (void*)0;
                    ((struct tuple2$2char$phchar$ph*)(__right_value0=parse_attribute(info)));
                    come_call_finalizer(tuple2$2char$phchar$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "06type.nc}", 2259, 956);
                }
                if(span$1char$p_operator_derefference(info->p)==59) {
                    info->p->p=head;
                    info->sline=head_sline;
                                        __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    __result_obj__0 = (struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value1=tuple3$3sType$phchar$ph_Bool$_initialize((struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count((struct tuple3$3sType$phchar$ph_Bool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$ph_Bool$)*(1), "06type.nc", 2265, 957, "struct tuple3$3sType$phchar$ph_Bool$"), "06type.nc", 2265, 958),(struct sType* )come_increment_ref_count((struct sType* )((void*)0), "06type.nc", 2265, 959),(char* )come_increment_ref_count((char* )((void*)0), "06type.nc", 2265, 960),(_Bool)0))), "06type.nc", 2265, 961);
                    (asm_name = come_decrement_ref_count(asm_name, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 2265, 962));
                    (enum_attribute = come_decrement_ref_count(enum_attribute, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 2265, 963));
                    (attribute_before = come_decrement_ref_count(attribute_before, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 2265, 964));
                    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 2265, 965));
                    ((alignas_) ? alignas_ = come_decrement_ref_count(alignas_, ((struct sNode*)alignas_)->finalize, ((struct sNode*)alignas_)->_protocol_obj, 0, 0,(void*)0, "06type.nc", 2265, 966):(void*)0);
                    (tag_attribute = come_decrement_ref_count(tag_attribute, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 2265, 967));
                    come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "06type.nc}", 2265, 968);
                    neo_current_frame = fr.prev;
                    come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "06type.nc}", 2265, 969);
                    return __result_obj__0;
                }
                else {
                    anonymous_type=(_Bool)1;
                    __right_value0 = (void*)0;
                    __dec_obj122=type_name,
                    type_name=(char* )come_increment_ref_count(__builtin_string(""), "06type.nc", 2269, 971);
                    __dec_obj122 = come_decrement_ref_count(__dec_obj122, (void*)0, (void*)0, 0,0, (void*)0, "06type.nc", 2269, 970);
                    info->p->p=p_59;
                    info->sline=sline_60;
                    struct_define_parsed=(_Bool)1;
                    (asm_name = come_decrement_ref_count(asm_name, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 2273, 972));
                    (enum_attribute = come_decrement_ref_count(enum_attribute, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 2273, 973));
                    break;
                }
            }
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            __dec_obj123=type_name,
            type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "06type.nc", 2279, 975);
            __dec_obj123 = come_decrement_ref_count(__dec_obj123, (void*)0, (void*)0, 0,0, (void*)0, "06type.nc", 2279, 974);
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            enum_attribute_after_name=(char* )come_increment_ref_count(parse_struct_attribute(info,(_Bool)1), "06type.nc", 2283, 976);
            __right_value0 = (void*)0;
            __dec_obj124=tag_attribute,
            tag_attribute=(char* )come_increment_ref_count(merge_tag_attribute((char* )come_increment_ref_count(tag_attribute, "06type.nc", 2284, 977),(char* )come_increment_ref_count(enum_attribute_after_name, "06type.nc", 2284, 978)), "06type.nc", 2284, 980);
            __dec_obj124 = come_decrement_ref_count(__dec_obj124, (void*)0, (void*)0, 0,0, (void*)0, "06type.nc", 2284, 979);
            if(span$1char$p_operator_derefference(info->p)==58) {
                info->p->p++;
                skip_spaces_and_lf(info);
                __right_value0 = (void*)0;
                multiple_assign_var6=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                type_61=(struct sType* )come_increment_ref_count(multiple_assign_var6->v1, "06type.nc", 2290, 981);
                name_62=(char* )come_increment_ref_count(multiple_assign_var6->v2, "06type.nc", 2290, 982);
                err_63=multiple_assign_var6->v3;
                come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "06type.nc}", 2290, 983);
                come_call_finalizer(sType_finalize, type_61, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 2293, 984);
                (name_62 = come_decrement_ref_count(name_62, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 2293, 985));
            }
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            enum_attribute_after_type=(char* )come_increment_ref_count(parse_struct_attribute(info,(_Bool)1), "06type.nc", 2295, 986);
            __right_value0 = (void*)0;
            __dec_obj125=tag_attribute,
            tag_attribute=(char* )come_increment_ref_count(merge_tag_attribute((char* )come_increment_ref_count(tag_attribute, "06type.nc", 2296, 987),(char* )come_increment_ref_count(enum_attribute_after_type, "06type.nc", 2296, 988)), "06type.nc", 2296, 990);
            __dec_obj125 = come_decrement_ref_count(__dec_obj125, (void*)0, (void*)0, 0,0, (void*)0, "06type.nc", 2296, 989);
            if(span$1char$p_operator_derefference(info->p)==123) {
                p_64=info->p->p;
                sline_65=info->sline;
                __right_value0 = (void*)0;
                ((char* )(__right_value0=skip_block(info,(_Bool)0)));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "06type.nc", 2302, 991));
                if(span$1char$p_operator_derefference(info->p)==59) {
                    info->p->p=head;
                    info->sline=head_sline;
                                        __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    __result_obj__0 = (struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value1=tuple3$3sType$phchar$ph_Bool$_initialize((struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count((struct tuple3$3sType$phchar$ph_Bool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$ph_Bool$)*(1), "06type.nc", 2307, 992, "struct tuple3$3sType$phchar$ph_Bool$"), "06type.nc", 2307, 993),(struct sType* )come_increment_ref_count((struct sType* )((void*)0), "06type.nc", 2307, 994),(char* )come_increment_ref_count((char* )((void*)0), "06type.nc", 2307, 995),(_Bool)0))), "06type.nc", 2307, 996);
                    (asm_name = come_decrement_ref_count(asm_name, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 2307, 997));
                    (enum_attribute = come_decrement_ref_count(enum_attribute, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 2307, 998));
                    (enum_attribute_after_name = come_decrement_ref_count(enum_attribute_after_name, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 2307, 999));
                    (enum_attribute_after_type = come_decrement_ref_count(enum_attribute_after_type, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 2307, 1000));
                    (attribute_before = come_decrement_ref_count(attribute_before, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 2307, 1001));
                    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 2307, 1002));
                    ((alignas_) ? alignas_ = come_decrement_ref_count(alignas_, ((struct sNode*)alignas_)->finalize, ((struct sNode*)alignas_)->_protocol_obj, 0, 0,(void*)0, "06type.nc", 2307, 1003):(void*)0);
                    (tag_attribute = come_decrement_ref_count(tag_attribute, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 2307, 1004));
                    come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "06type.nc}", 2307, 1005);
                    neo_current_frame = fr.prev;
                    come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "06type.nc}", 2307, 1006);
                    return __result_obj__0;
                }
                else {
                    anonymous_type=(_Bool)1;
                    info->p->p=p_64;
                    info->sline=sline_65;
                    struct_define_parsed=(_Bool)1;
                    (asm_name = come_decrement_ref_count(asm_name, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 2314, 1007));
                    (enum_attribute = come_decrement_ref_count(enum_attribute, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 2314, 1008));
                    (enum_attribute_after_name = come_decrement_ref_count(enum_attribute_after_name, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 2314, 1009));
                    (enum_attribute_after_type = come_decrement_ref_count(enum_attribute_after_type, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 2314, 1010));
                    break;
                }
            }
            (asm_name = come_decrement_ref_count(asm_name, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 2579, 1011));
            (enum_attribute = come_decrement_ref_count(enum_attribute, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 2579, 1012));
            (enum_attribute_after_name = come_decrement_ref_count(enum_attribute_after_name, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 2579, 1013));
            (enum_attribute_after_type = come_decrement_ref_count(enum_attribute_after_type, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 2579, 1014));
        }
        else if(string_operator_equals(type_name,"long")) {
            {
                p_66=info->p->p;
                sline_67=info->sline;
                if(!(xisalpha(span$1char$p_operator_derefference(info->p))||span$1char$p_operator_derefference(info->p)==95)) {
                    __right_value0 = (void*)0;
                    __dec_obj126=type_name,
                    type_name=(char* )come_increment_ref_count(__builtin_string("long"), "06type.nc", 2325, 1016);
                    __dec_obj126 = come_decrement_ref_count(__dec_obj126, (void*)0, (void*)0, 0,0, (void*)0, "06type.nc", 2325, 1015);
                    break;
                }
                else {
                    p2=info->p->p;
                    sline2=info->sline;
                    __right_value0 = (void*)0;
                    __dec_obj127=type_name,
                    type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "06type.nc", 2332, 1018);
                    __dec_obj127 = come_decrement_ref_count(__dec_obj127, (void*)0, (void*)0, 0,0, (void*)0, "06type.nc", 2332, 1017);
                    if(string_operator_equals(type_name,"double")) {
                        long_=(_Bool)1;
                        break;
                    }
                    else if(string_operator_equals(type_name,"unsigned")) {
                        __right_value0 = (void*)0;
                        __dec_obj128=type_name,
                        type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "06type.nc", 2339, 1020);
                        __dec_obj128 = come_decrement_ref_count(__dec_obj128, (void*)0, (void*)0, 0,0, (void*)0, "06type.nc", 2339, 1019);
                        if(string_operator_equals(type_name,"int")) {
                            long_=(_Bool)1;
                            unsigned_=(_Bool)1;
                            break;
                        }
                    }
                    else if(string_operator_equals(type_name,"signed")) {
                        __right_value0 = (void*)0;
                        __dec_obj129=type_name,
                        type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "06type.nc", 2348, 1022);
                        __dec_obj129 = come_decrement_ref_count(__dec_obj129, (void*)0, (void*)0, 0,0, (void*)0, "06type.nc", 2348, 1021);
                        if(string_operator_equals(type_name,"int")) {
                            long_=(_Bool)1;
                            unsigned_=(_Bool)0;
                            break;
                        }
                    }
                    else if(string_operator_equals(type_name,"long")) {
                        p_66=info->p->p;
                        sline_67=info->sline;
                        if(xisalpha(span$1char$p_operator_derefference(info->p))||span$1char$p_operator_derefference(info->p)==95) {
                            long_long=(_Bool)1;
                            __right_value0 = (void*)0;
                            __dec_obj130=type_name,
                            type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "06type.nc", 2361, 1024);
                            __dec_obj130 = come_decrement_ref_count(__dec_obj130, (void*)0, (void*)0, 0,0, (void*)0, "06type.nc", 2361, 1023);
                        }
                        else if(span$1char$p_operator_derefference(info->p)==58) {
                            __right_value0 = (void*)0;
                            __dec_obj131=type_name,
                            type_name=(char* )come_increment_ref_count(__builtin_string("long"), "06type.nc", 2364, 1026);
                            __dec_obj131 = come_decrement_ref_count(__dec_obj131, (void*)0, (void*)0, 0,0, (void*)0, "06type.nc", 2364, 1025);
                            info->p->p=p2;
                            info->sline=sline2;
                            break;
                        }
                        else {
                            long_=(_Bool)1;
                            break;
                        }
                        if(string_operator_equals(type_name,"int")) {
                            long_long=(_Bool)1;
                            break;
                        }
                        else if(!is_type_name(type_name,info)) {
                            __right_value0 = (void*)0;
                            __dec_obj132=type_name,
                            type_name=(char* )come_increment_ref_count(__builtin_string("long"), "06type.nc", 2379, 1028);
                            __dec_obj132 = come_decrement_ref_count(__dec_obj132, (void*)0, (void*)0, 0,0, (void*)0, "06type.nc", 2379, 1027);
                            long_long=(_Bool)1;
                            info->p->p=p_66;
                            info->sline=sline_67;
                            break;
                        }
                    }
                    else if(is_type_name(type_name,info)) {
                        if(long_) {
                            long_long=(_Bool)1;
                            long_=(_Bool)0;
                        }
                        else {
                            long_=(_Bool)1;
                        }
                        break;
                    }
                    else {
                        info->p->p=p_66;
                        info->sline=sline_67;
                        __right_value0 = (void*)0;
                        __dec_obj133=type_name,
                        type_name=(char* )come_increment_ref_count(__builtin_string("long"), "06type.nc", 2400, 1030);
                        __dec_obj133 = come_decrement_ref_count(__dec_obj133, (void*)0, (void*)0, 0,0, (void*)0, "06type.nc", 2400, 1029);
                        break;
                    }
                }
            }
        }
        else if(string_operator_equals(type_name,"signed")) {
            unsigned_=(_Bool)0;
            if(xisalpha(span$1char$p_operator_derefference(info->p))||span$1char$p_operator_derefference(info->p)==95) {
                p_68=info->p->p;
                sline_69=info->sline;
                __right_value0 = (void*)0;
                __dec_obj134=type_name,
                type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "06type.nc", 2413, 1032);
                __dec_obj134 = come_decrement_ref_count(__dec_obj134, (void*)0, (void*)0, 0,0, (void*)0, "06type.nc", 2413, 1031);
                if(string_operator_equals(type_name,"char")||string_operator_equals(type_name,"short")||string_operator_equals(type_name,"long")||string_operator_equals(type_name,"int")) {
                }
                else {
                    __right_value0 = (void*)0;
                    __dec_obj135=type_name,
                    type_name=(char*)come_increment_ref_count(xsprintf("int"), "06type.nc", 2418, 1034);
                    __dec_obj135 = come_decrement_ref_count(__dec_obj135, (void*)0, (void*)0, 0,0, (void*)0, "06type.nc", 2418, 1033);
                    info->p->p=p_68;
                    info->sline=sline_69;
                    break;
                }
            }
            else {
                __right_value0 = (void*)0;
                __dec_obj136=type_name,
                type_name=(char*)come_increment_ref_count(xsprintf("int"), "06type.nc", 2425, 1036);
                __dec_obj136 = come_decrement_ref_count(__dec_obj136, (void*)0, (void*)0, 0,0, (void*)0, "06type.nc", 2425, 1035);
                break;
            }
        }
        else if(string_operator_equals(type_name,"unsigned")) {
            unsigned_=(_Bool)1;
            if(xisalpha(span$1char$p_operator_derefference(info->p))||span$1char$p_operator_derefference(info->p)==95) {
                p_70=info->p->p;
                sline_71=info->sline;
                __right_value0 = (void*)0;
                __dec_obj137=type_name,
                type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "06type.nc", 2436, 1038);
                __dec_obj137 = come_decrement_ref_count(__dec_obj137, (void*)0, (void*)0, 0,0, (void*)0, "06type.nc", 2436, 1037);
                if(string_operator_equals(type_name,"short")) {
                    if(xisalpha(span$1char$p_operator_derefference(info->p))||span$1char$p_operator_derefference(info->p)==95) {
                        p_72=info->p->p;
                        sline_73=info->sline;
                        __right_value0 = (void*)0;
                        __dec_obj138=type_name,
                        type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "06type.nc", 2443, 1040);
                        __dec_obj138 = come_decrement_ref_count(__dec_obj138, (void*)0, (void*)0, 0,0, (void*)0, "06type.nc", 2443, 1039);
                        if(is_type_name(type_name,info)) {
                            short_=(_Bool)1;
                        }
                        else {
                            short_=(_Bool)1;
                            __right_value0 = (void*)0;
                            __dec_obj139=type_name,
                            type_name=(char* )come_increment_ref_count(__builtin_string("int"), "06type.nc", 2450, 1042);
                            __dec_obj139 = come_decrement_ref_count(__dec_obj139, (void*)0, (void*)0, 0,0, (void*)0, "06type.nc", 2450, 1041);
                            info->p->p=p_72;
                            info->sline=sline_73;
                        }
                    }
                    else {
                        short_=(_Bool)1;
                        __right_value0 = (void*)0;
                        __dec_obj140=type_name,
                        type_name=(char* )come_increment_ref_count(__builtin_string("int"), "06type.nc", 2458, 1044);
                        __dec_obj140 = come_decrement_ref_count(__dec_obj140, (void*)0, (void*)0, 0,0, (void*)0, "06type.nc", 2458, 1043);
                        break;
                    }
                }
                else if(string_operator_equals(type_name,"long")) {
                    if(xisalpha(span$1char$p_operator_derefference(info->p))||span$1char$p_operator_derefference(info->p)==95) {
                        p_74=info->p->p;
                        sline_75=info->sline;
                        __right_value0 = (void*)0;
                        __dec_obj141=type_name,
                        type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "06type.nc", 2467, 1046);
                        __dec_obj141 = come_decrement_ref_count(__dec_obj141, (void*)0, (void*)0, 0,0, (void*)0, "06type.nc", 2467, 1045);
                        if(is_type_name(type_name,info)) {
                            long_=(_Bool)1;
                        }
                        else {
                            long_=(_Bool)1;
                            __right_value0 = (void*)0;
                            __dec_obj142=type_name,
                            type_name=(char* )come_increment_ref_count(__builtin_string("int"), "06type.nc", 2474, 1048);
                            __dec_obj142 = come_decrement_ref_count(__dec_obj142, (void*)0, (void*)0, 0,0, (void*)0, "06type.nc", 2474, 1047);
                            info->p->p=p_74;
                            info->sline=sline_75;
                        }
                    }
                    else {
                        long_=(_Bool)1;
                        __right_value0 = (void*)0;
                        __dec_obj143=type_name,
                        type_name=(char* )come_increment_ref_count(__builtin_string("int"), "06type.nc", 2482, 1050);
                        __dec_obj143 = come_decrement_ref_count(__dec_obj143, (void*)0, (void*)0, 0,0, (void*)0, "06type.nc", 2482, 1049);
                        break;
                    }
                }
                else if(!is_type_name(type_name,info)) {
                    __right_value0 = (void*)0;
                    __dec_obj144=type_name,
                    type_name=(char* )come_increment_ref_count(__builtin_string("int"), "06type.nc", 2487, 1052);
                    __dec_obj144 = come_decrement_ref_count(__dec_obj144, (void*)0, (void*)0, 0,0, (void*)0, "06type.nc", 2487, 1051);
                    info->p->p=p_70;
                    info->sline=sline_71;
                    break;
                }
            }
            else {
                __right_value0 = (void*)0;
                __dec_obj145=type_name,
                type_name=(char* )come_increment_ref_count(__builtin_string("int"), "06type.nc", 2494, 1054);
                __dec_obj145 = come_decrement_ref_count(__dec_obj145, (void*)0, (void*)0, 0,0, (void*)0, "06type.nc", 2494, 1053);
                break;
            }
        }
        else if(string_operator_equals(type_name,"signed")||string_operator_equals(type_name,"__signed__")) {
            unsigned_=(_Bool)0;
            p_76=info->p->p;
            sline_77=info->sline;
            __right_value0 = (void*)0;
            __dec_obj146=type_name,
            type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "06type.nc", 2504, 1056);
            __dec_obj146 = come_decrement_ref_count(__dec_obj146, (void*)0, (void*)0, 0,0, (void*)0, "06type.nc", 2504, 1055);
            if(span$1char$p_operator_derefference(info->p)==58&&*(info->p->p+1)==58) {
                __right_value0 = (void*)0;
                __dec_obj147=type_name,
                type_name=(char* )come_increment_ref_count(__builtin_string("int"), "06type.nc", 2507, 1058);
                __dec_obj147 = come_decrement_ref_count(__dec_obj147, (void*)0, (void*)0, 0,0, (void*)0, "06type.nc", 2507, 1057);
                info->p->p=p_76;
                info->sline=sline_77;
                break;
            }
        }
        else if(string_operator_equals(type_name,"register")) {
            register_=(_Bool)1;
            __right_value0 = (void*)0;
            __dec_obj148=type_name,
            type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "06type.nc", 2516, 1060);
            __dec_obj148 = come_decrement_ref_count(__dec_obj148, (void*)0, (void*)0, 0,0, (void*)0, "06type.nc", 2516, 1059);
        }
        else if(string_operator_equals(type_name,"restrict")) {
            restrict_=(_Bool)1;
            __right_value0 = (void*)0;
            __dec_obj149=type_name,
            type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "06type.nc", 2521, 1062);
            __dec_obj149 = come_decrement_ref_count(__dec_obj149, (void*)0, (void*)0, 0,0, (void*)0, "06type.nc", 2521, 1061);
        }
        else if(string_operator_equals(type_name,"_Addr")) {
            __right_value0 = (void*)0;
            __dec_obj150=type_name,
            type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "06type.nc", 2524, 1064);
            __dec_obj150 = come_decrement_ref_count(__dec_obj150, (void*)0, (void*)0, 0,0, (void*)0, "06type.nc", 2524, 1063);
        }
        else if(string_operator_equals(type_name,"__restrict")) {
            restrict_=(_Bool)1;
            __right_value0 = (void*)0;
            __dec_obj151=type_name,
            type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "06type.nc", 2529, 1066);
            __dec_obj151 = come_decrement_ref_count(__dec_obj151, (void*)0, (void*)0, 0,0, (void*)0, "06type.nc", 2529, 1065);
        }
        else if(string_operator_equals(type_name,"tup")) {
            err_msg(info,"tup shorthand was removed. use tuple2/tuple3/... explicit types");
                        __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __result_obj__0 = (struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value1=tuple3$3sType$phchar$ph_Bool$_initialize((struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count((struct tuple3$3sType$phchar$ph_Bool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$ph_Bool$)*(1), "06type.nc", 2533, 1067, "struct tuple3$3sType$phchar$ph_Bool$"), "06type.nc", 2533, 1068),(struct sType* )come_increment_ref_count((struct sType* )((void*)0), "06type.nc", 2533, 1069),(char* )come_increment_ref_count((char* )((void*)0), "06type.nc", 2533, 1070),(_Bool)0))), "06type.nc", 2533, 1071);
            (attribute_before = come_decrement_ref_count(attribute_before, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 2533, 1072));
            (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 2533, 1073));
            ((alignas_) ? alignas_ = come_decrement_ref_count(alignas_, ((struct sNode*)alignas_)->finalize, ((struct sNode*)alignas_)->_protocol_obj, 0, 0,(void*)0, "06type.nc", 2533, 1074):(void*)0);
            (tag_attribute = come_decrement_ref_count(tag_attribute, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 2533, 1075));
            come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "06type.nc}", 2533, 1076);
            neo_current_frame = fr.prev;
            come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "06type.nc}", 2533, 1077);
            return __result_obj__0;
        }
        else if(string_operator_equals(type_name,"short")) {
            short_=(_Bool)0;
            if(span$1char$p_operator_derefference(info->p)==58) {
                break;
            }
            else if(xisalnum(*info->p->p)) {
                p_78=info->p->p;
                sline_79=info->sline;
                __right_value0 = (void*)0;
                __dec_obj152=type_name,
                type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "06type.nc", 2544, 1079);
                __dec_obj152 = come_decrement_ref_count(__dec_obj152, (void*)0, (void*)0, 0,0, (void*)0, "06type.nc", 2544, 1078);
                if(span$1char$p_operator_derefference(info->p)==58&&*(info->p->p+1)==58) {
                    __right_value0 = (void*)0;
                    __dec_obj153=type_name,
                    type_name=(char* )come_increment_ref_count(__builtin_string("short"), "06type.nc", 2547, 1081);
                    __dec_obj153 = come_decrement_ref_count(__dec_obj153, (void*)0, (void*)0, 0,0, (void*)0, "06type.nc", 2547, 1080);
                    info->p->p=p_78;
                    info->sline=sline_79;
                    break;
                }
                if(string_operator_equals(type_name,"int")) {
                    short_=(_Bool)1;
                    break;
                }
                else if(string_operator_equals(type_name,"short")) {
                    short_=(_Bool)1;
                    break;
                }
                else if(is_type_name(type_name,info)) {
                    info->p->p=p_78;
                    info->sline=sline_79;
                }
                else {
                    __right_value0 = (void*)0;
                    __dec_obj154=type_name,
                    type_name=(char* )come_increment_ref_count(__builtin_string("short"), "06type.nc", 2566, 1083);
                    __dec_obj154 = come_decrement_ref_count(__dec_obj154, (void*)0, (void*)0, 0,0, (void*)0, "06type.nc", 2566, 1082);
                    info->p->p=p_78;
                    info->sline=sline_79;
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
    if((string_operator_equals(type_name,"typeof")||string_operator_equals(type_name,"__typeof__"))&&span$1char$p_operator_derefference(info->p)==40) {
        info->p->p++;
        skip_spaces_and_lf(info);
        no_comma=info->no_comma;
        info->no_comma=(_Bool)0;
        __right_value0 = (void*)0;
        exp=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "06type.nc", 2587, 1084);
        info->no_comma=no_comma;
        expected_next_character(41,info);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        type_80=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "06type.nc", 2592, 1085, "struct sType* "), "06type.nc", 2592, 1086),(char*)come_increment_ref_count(xsprintf("int"), "06type.nc", 2592, 1087),(_Bool)0,info,(_Bool)0,0), "06type.nc", 2592, 1088);
        __dec_obj155=type_80->mTypeOfNode,
        type_80->mTypeOfNode=(struct sNode*)come_increment_ref_count(exp, "06type.nc", 2593, 1090);
        (__dec_obj155 ? __dec_obj155 = come_decrement_ref_count(__dec_obj155, ((struct sNode*)__dec_obj155)->finalize, ((struct sNode*)__dec_obj155)->_protocol_obj, 0,0, (void*)0, "06type.nc", 2593, 1089) :0);
        var_name=((void*)0);
        __right_value0 = (void*)0;
        __dec_obj156=type_80,
        type_80=(struct sType* )come_increment_ref_count(parse_pointer_attribute((struct sType* )come_increment_ref_count(type_80, "06type.nc", 2597, 1091),info), "06type.nc", 2597, 1093);
        come_call_finalizer(sType_finalize, __dec_obj156,(void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc", 2597, 1092);
        attribute=((void*)0);
        if(parse_variable_name) {
            __right_value0 = (void*)0;
            __dec_obj157=var_name,
            var_name=(char* )come_increment_ref_count(parse_variable_name_fun(type_80,anonymous_name,(_Bool)0,(char* )come_increment_ref_count(attribute, "06type.nc", 2602, 1094),info), "06type.nc", 2602, 1096);
            __dec_obj157 = come_decrement_ref_count(__dec_obj157, (void*)0, (void*)0, 0,0, (void*)0, "06type.nc", 2602, 1095);
        }
                __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __result_obj__0 = (struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value1=tuple3$3sType$phchar$ph_Bool$_initialize((struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count((struct tuple3$3sType$phchar$ph_Bool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$ph_Bool$)*(1), "06type.nc", 2604, 1097, "struct tuple3$3sType$phchar$ph_Bool$"), "06type.nc", 2604, 1098),(struct sType* )come_increment_ref_count(type_80, "06type.nc", 2604, 1099),(char* )come_increment_ref_count(var_name, "06type.nc", 2604, 1100),(_Bool)1))), "06type.nc", 2604, 1101);
        ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0, "06type.nc", 2604, 1102):(void*)0);
        come_call_finalizer(sType_finalize, type_80, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 2604, 1103);
        (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 2604, 1104));
        (attribute = come_decrement_ref_count(attribute, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 2604, 1105));
        (attribute_before = come_decrement_ref_count(attribute_before, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 2604, 1106));
        (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 2604, 1107));
        ((alignas_) ? alignas_ = come_decrement_ref_count(alignas_, ((struct sNode*)alignas_)->finalize, ((struct sNode*)alignas_)->_protocol_obj, 0, 0,(void*)0, "06type.nc", 2604, 1108):(void*)0);
        (tag_attribute = come_decrement_ref_count(tag_attribute, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 2604, 1109));
        come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "06type.nc}", 2604, 1110);
        neo_current_frame = fr.prev;
        come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "06type.nc}", 2604, 1111);
        return __result_obj__0;
        ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0, "06type.nc", 2607, 1112):(void*)0);
        come_call_finalizer(sType_finalize, type_80, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 2607, 1113);
        (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 2607, 1114));
        (attribute = come_decrement_ref_count(attribute, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 2607, 1115));
    }
    __right_value0 = (void*)0;
    attribute_81=(char* )come_increment_ref_count(parse_struct_attribute(info,(_Bool)0), "06type.nc", 2607, 1116);
    if(string_operator_not_equals(attribute_before,"")) {
        if(string_operator_equals(attribute_81,"")) {
            __dec_obj158=attribute_81,
            attribute_81=(char* )come_increment_ref_count(attribute_before, "06type.nc", 2610, 1118);
            __dec_obj158 = come_decrement_ref_count(__dec_obj158, (void*)0, (void*)0, 0,0, (void*)0, "06type.nc", 2610, 1117);
        }
        else {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            __dec_obj159=attribute_81,
            attribute_81=(char* )come_increment_ref_count(string_operator_add(((char* )(__right_value1=string_operator_add(attribute_before," "))),attribute_81), "06type.nc", 2613, 1120);
            __dec_obj159 = come_decrement_ref_count(__dec_obj159, (void*)0, (void*)0, 0,0, (void*)0, "06type.nc", 2613, 1119);
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "06type.nc", 2613, 1121));
        }
        __right_value0 = (void*)0;
        __dec_obj160=attribute_before,
        attribute_before=(char*)come_increment_ref_count(xsprintf(""), "06type.nc", 2615, 1123);
        __dec_obj160 = come_decrement_ref_count(__dec_obj160, (void*)0, (void*)0, 0,0, (void*)0, "06type.nc", 2615, 1122);
    }
    if(!struct_define_parsed&&(struct_||enum_)&&string_operator_not_equals(tag_attribute,"")) {
        __right_value0 = (void*)0;
        __dec_obj161=attribute_81,
        attribute_81=(char* )come_increment_ref_count(merge_tag_attribute((char* )come_increment_ref_count(tag_attribute, "06type.nc", 2618, 1124),(char* )come_increment_ref_count(attribute_81, "06type.nc", 2618, 1125)), "06type.nc", 2618, 1127);
        __dec_obj161 = come_decrement_ref_count(__dec_obj161, (void*)0, (void*)0, 0,0, (void*)0, "06type.nc", 2618, 1126);
    }
    skip_pointer_attribute(info);
    pointer_num=0;
    __right_value0 = (void*)0;
    pointer_attribute=(char*)come_increment_ref_count(xsprintf(""), "06type.nc", 2624, 1128);
    heap=(_Bool)0;
    refference=(_Bool)0;
    no_refference=(_Bool)0;
    channel=(_Bool)0;
    deffer_=(_Bool)0;
    any_class=(_Bool)0;
    vtable=(_Bool)0;
    while(1) {
        if(span$1char$p_operator_derefference(info->p)==42) {
            info->p->p++;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            pointer_attr=(char* )come_increment_ref_count(parse_pointer_qualifier(info), "06type.nc", 2636, 1129);
            if(string_operator_not_equals(pointer_attr,"")) {
                if(string_operator_not_equals(pointer_attribute,"")) {
                    __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    __right_value2 = (void*)0;
                    __dec_obj162=pointer_attribute,
                    pointer_attribute=(char* )come_increment_ref_count(string_operator_add(((char* )(__right_value1=string_operator_add(pointer_attribute," "))),pointer_attr), "06type.nc", 2639, 1131);
                    __dec_obj162 = come_decrement_ref_count(__dec_obj162, (void*)0, (void*)0, 0,0, (void*)0, "06type.nc", 2639, 1130);
                    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "06type.nc", 2639, 1132));
                }
                else {
                    __dec_obj163=pointer_attribute,
                    pointer_attribute=(char* )come_increment_ref_count(pointer_attr, "06type.nc", 2642, 1134);
                    __dec_obj163 = come_decrement_ref_count(__dec_obj163, (void*)0, (void*)0, 0,0, (void*)0, "06type.nc", 2642, 1133);
                }
            }
            pointer_num++;
            (pointer_attr = come_decrement_ref_count(pointer_attr, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 2670, 1135));
        }
        else if(span$1char$p_operator_derefference(info->p)==37) {
            info->p->p++;
            skip_spaces_and_lf(info);
            heap=(_Bool)1;
        }
        else if(gComePthread&&span$1char$p_operator_derefference(info->p)==124) {
            info->p->p++;
            skip_spaces_and_lf(info);
            channel=(_Bool)1;
        }
        else if(span$1char$p_operator_derefference(info->p)==64) {
            info->p->p++;
            while(xisalnum(span$1char$p_operator_derefference(info->p))||span$1char$p_operator_derefference(info->p)==95) {
                info->p->p++;
            }
            skip_spaces_and_lf(info);
        }
        else {
            break;
        }
    }
    skip_pointer_attribute(info);
    tuple_name=((void*)0);
    if(span$1char$p_operator_derefference(info->p)==58&&*(info->p->p+1)!=58&&tuple_) {
        info->p->p++;
        skip_spaces_and_lf(info);
        __right_value0 = (void*)0;
        __dec_obj164=tuple_name,
        tuple_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "06type.nc", 2679, 1137);
        __dec_obj164 = come_decrement_ref_count(__dec_obj164, (void*)0, (void*)0, 0,0, (void*)0, "06type.nc", 2679, 1136);
    }
    if(atomic_&&span$1char$p_operator_derefference(info->p)==41) {
        expected_next_character(41,info);
    }
    lambda_flag=(_Bool)0;
    {
        pX=info->p->p;
        slineX=info->sline;
        if(xisalpha(span$1char$p_operator_derefference(info->p))||span$1char$p_operator_derefference(info->p)==95) {
            __right_value0 = (void*)0;
            (void)((char* )(__right_value0=parse_word((_Bool)0,info)));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "06type.nc", 2692, 1138));
            if(span$1char$p_operator_derefference(info->p)==40&&info->in_typedef) {
                lambda_flag=(_Bool)1;
            }
        }
        info->p->p=pX;
        info->sline=slineX;
    }
    function_pointer_flag=(_Bool)0;
    pointer_to_array_flag=(_Bool)0;
    {
        p_84=info->p->p;
        sline_85=info->sline;
        if(span$1char$p_operator_derefference(info->p)==40) {
            info->p->p++;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            if(span$1char$p_operator_derefference(info->p)==40) {
                info->p->p++;
                skip_spaces_and_lf(info);
            }
            if(span$1char$p_operator_derefference(info->p)==42||span$1char$p_operator_derefference(info->p)==94) {
                while(span$1char$p_operator_derefference(info->p)==42||span$1char$p_operator_derefference(info->p)==94) {
                    info->p->p++;
                    skip_spaces_and_lf(info);
                }
                function_pointer_flag=(_Bool)1;
                word=((void*)0);
                if(xisalpha(span$1char$p_operator_derefference(info->p))||span$1char$p_operator_derefference(info->p)==95) {
                    __right_value0 = (void*)0;
                    __dec_obj165=word,
                    word=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "06type.nc", 2733, 1140);
                    __dec_obj165 = come_decrement_ref_count(__dec_obj165, (void*)0, (void*)0, 0,0, (void*)0, "06type.nc", 2733, 1139);
                }
                if(span$1char$p_operator_derefference(info->p)==91) {
                    pointer_to_array_flag=(_Bool)1;
                    while(span$1char$p_operator_derefference(info->p)==91) {
                        info->p->p++;
                        skip_spaces_and_lf(info);
                        if(span$1char$p_operator_derefference(info->p)==93) {
                            info->p->p++;
                            skip_spaces_and_lf(info);
                            break;
                        }
                        no_output_come_code=info->no_output_come_code;
                        info->no_output_come_code=(_Bool)1;
                        __right_value0 = (void*)0;
                        exp_86=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "06type.nc", 2749, 1141);
                        info->no_output_come_code=no_output_come_code;
                        if(span$1char$p_operator_derefference(info->p)==93) {
                            info->p->p++;
                            skip_spaces_and_lf(info);
                        }
                        ((exp_86) ? exp_86 = come_decrement_ref_count(exp_86, ((struct sNode*)exp_86)->finalize, ((struct sNode*)exp_86)->_protocol_obj, 0, 0,(void*)0, "06type.nc", 2758, 1142):(void*)0);
                    }
                    if(span$1char$p_operator_derefference(info->p)==41) {
                        info->p->p++;
                        skip_spaces_and_lf(info);
                        if(span$1char$p_operator_derefference(info->p)==40) {
                            function_pointer_flag=(_Bool)1;
                            pointer_to_array_flag=(_Bool)0;
                        }
                        else if(span$1char$p_operator_derefference(info->p)==91) {
                            function_pointer_flag=(_Bool)0;
                            pointer_to_array_flag=(_Bool)1;
                        }
                    }
                }
                else if(span$1char$p_operator_derefference(info->p)==41) {
                    info->p->p++;
                    skip_spaces_and_lf(info);
                    if(span$1char$p_operator_derefference(info->p)==41) {
                        info->p->p++;
                        skip_spaces_and_lf(info);
                        pointer_to_array_flag=(_Bool)1;
                        function_pointer_flag=(_Bool)0;
                    }
                    if(span$1char$p_operator_derefference(info->p)==91) {
                        pointer_to_array_flag=(_Bool)1;
                        function_pointer_flag=(_Bool)0;
                    }
                    else if(span$1char$p_operator_derefference(info->p)==40) {
                        function_pointer_flag=(_Bool)1;
                    }
                }
                (word = come_decrement_ref_count(word, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 2804, 1143));
            }
            else if(xisalpha(span$1char$p_operator_derefference(info->p))||span$1char$p_operator_derefference(info->p)==95) {
                __right_value0 = (void*)0;
                word_87=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "06type.nc", 2793, 1144);
                if(span$1char$p_operator_derefference(info->p)==41) {
                    info->p->p++;
                    skip_spaces_and_lf(info);
                    if(span$1char$p_operator_derefference(info->p)==40) {
                        function_pointer_flag=(_Bool)1;
                    }
                }
                (word_87 = come_decrement_ref_count(word_87, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 2804, 1145));
            }
        }
        info->p->p=p_84;
        info->sline=sline_85;
    }
    var_name_between_brace=(_Bool)0;
    {
        p_88=info->p->p;
        sline_89=info->sline;
        if(span$1char$p_operator_derefference(info->p)==40) {
            info->p->p++;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            if(xisalpha(span$1char$p_operator_derefference(info->p))||span$1char$p_operator_derefference(info->p)==95) {
                __right_value0 = (void*)0;
                word_90=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "06type.nc", 2822, 1146);
                if(is_type_name(word_90,info)) {
                }
                else if(span$1char$p_operator_derefference(info->p)==41) {
                    info->p->p++;
                    skip_spaces_and_lf(info);
                    if(span$1char$p_operator_derefference(info->p)!=40) {
                        var_name_between_brace=(_Bool)1;
                    }
                }
                (word_90 = come_decrement_ref_count(word_90, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 2835, 1147));
            }
        }
        info->p->p=p_88;
        info->sline=sline_89;
    }
    if(anonymous_type&&span$1char$p_operator_derefference(info->p)==123) {
        static int anonymous_num=0;
        if(struct_) {
            anonymous=(_Bool)0;
            if(string_operator_equals(type_name,"")) {
                anonymous=(_Bool)1;
                __right_value0 = (void*)0;
                __dec_obj166=type_name,
                type_name=(char* )come_increment_ref_count(xsprintf("anonymous_typeX%d",++anonymous_num), "06type.nc", 2848, 1149);
                __dec_obj166 = come_decrement_ref_count(__dec_obj166, (void*)0, (void*)0, 0,0, (void*)0, "06type.nc", 2848, 1148);
            }
            __right_value0 = (void*)0;
            node_91=(struct sNode*)come_increment_ref_count(parse_struct((char* )come_increment_ref_count(type_name, "06type.nc", 2851, 1150),(char* )come_increment_ref_count(tag_attribute, "06type.nc", 2851, 1151),info,anonymous), "06type.nc", 2851, 1152);
            Value_92=node_compile(node_91,info);
            if(!Value_92) {
                err_msg(info,"parse_struct is failed");
                                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                __result_obj__0 = (struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value1=tuple3$3sType$phchar$ph_Bool$_initialize((struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count((struct tuple3$3sType$phchar$ph_Bool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$ph_Bool$)*(1), "06type.nc", 2855, 1153, "struct tuple3$3sType$phchar$ph_Bool$"), "06type.nc", 2855, 1154),(struct sType* )come_increment_ref_count((struct sType* )((void*)0), "06type.nc", 2855, 1155),(char* )come_increment_ref_count((char* )((void*)0), "06type.nc", 2855, 1156),(_Bool)0))), "06type.nc", 2855, 1157);
                ((node_91) ? node_91 = come_decrement_ref_count(node_91, ((struct sNode*)node_91)->finalize, ((struct sNode*)node_91)->_protocol_obj, 0, 0,(void*)0, "06type.nc", 2855, 1158):(void*)0);
                (attribute_before = come_decrement_ref_count(attribute_before, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 2855, 1159));
                (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 2855, 1160));
                ((alignas_) ? alignas_ = come_decrement_ref_count(alignas_, ((struct sNode*)alignas_)->finalize, ((struct sNode*)alignas_)->_protocol_obj, 0, 0,(void*)0, "06type.nc", 2855, 1161):(void*)0);
                (tag_attribute = come_decrement_ref_count(tag_attribute, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 2855, 1162));
                (attribute_81 = come_decrement_ref_count(attribute_81, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 2855, 1163));
                (pointer_attribute = come_decrement_ref_count(pointer_attribute, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 2855, 1164));
                (tuple_name = come_decrement_ref_count(tuple_name, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 2855, 1165));
                come_call_finalizer(sType_finalize, type_82, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 2855, 1166);
                (var_name_83 = come_decrement_ref_count(var_name_83, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 2855, 1167));
                come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "06type.nc}", 2855, 1168);
                neo_current_frame = fr.prev;
                come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "06type.nc}", 2855, 1169);
                return __result_obj__0;
            }
            pointer_num_93=0;
            while(span$1char$p_operator_derefference(info->p)==42) {
                info->p->p++;
                skip_spaces_and_lf(info);
                skip_pointer_attribute(info);
                pointer_num_93++;
            }
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __dec_obj167=type_82,
            type_82=(struct sType* )come_increment_ref_count(sType_clone(((struct sType* )(__right_value0=map$2char$phsType$ph_operator_load_element(info->types,type_name)))), "06type.nc", 2869, 1171);
            come_call_finalizer(sType_finalize, __dec_obj167,(void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc", 2869, 1170);
            come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "06type.nc}", 2869, 1172);
            if(type_82==((void*)0)) {
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                __right_value2 = (void*)0;
                __dec_obj168=type_82,
                type_82=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "06type.nc", 2872, 1173, "struct sType* "), "06type.nc", 2872, 1174),(char* )come_increment_ref_count(__builtin_string(type_name), "06type.nc", 2872, 1175),(_Bool)0,info,(_Bool)0,0), "06type.nc", 2872, 1177);
                come_call_finalizer(sType_finalize, __dec_obj168,(void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc", 2872, 1176);
            }
            __right_value0 = (void*)0;
            klass=(struct sClass* )come_increment_ref_count(map$2char$phsClass$ph_operator_load_element(info->classes,type_name), "06type.nc", 2874, 1178);
            klass->mAnonymous=(_Bool)1;
            type_82->mAnonymous=anonymous;
            type_82->mAnonymous=anonymous;
            __right_value0 = (void*)0;
            __dec_obj169=type_82->mAnonymousName,
            type_82->mAnonymousName=(char* )come_increment_ref_count(__builtin_string(type_name), "06type.nc", 2878, 1180);
            __dec_obj169 = come_decrement_ref_count(__dec_obj169, (void*)0, (void*)0, 0,0, (void*)0, "06type.nc", 2878, 1179);
            type_82->mPointerNum=pointer_num_93;
            ((node_91) ? node_91 = come_decrement_ref_count(node_91, ((struct sNode*)node_91)->finalize, ((struct sNode*)node_91)->_protocol_obj, 0, 0,(void*)0, "06type.nc", 2951, 1181):(void*)0);
            come_call_finalizer(sClass_finalize, klass, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 2951, 1182);
        }
        else if(enum_) {
            if(string_operator_equals(type_name,"")) {
                if(!info->no_output_err) {
                    __right_value0 = (void*)0;
                    __dec_obj170=type_name,
                    type_name=(char* )come_increment_ref_count(xsprintf("anonymous_typeY%d",anonymous_num), "06type.nc", 2885, 1184);
                    __dec_obj170 = come_decrement_ref_count(__dec_obj170, (void*)0, (void*)0, 0,0, (void*)0, "06type.nc", 2885, 1183);
                }
                else {
                    __right_value0 = (void*)0;
                    __dec_obj171=type_name,
                    type_name=(char* )come_increment_ref_count(xsprintf("anonymous_typeY%d",++anonymous_num), "06type.nc", 2888, 1186);
                    __dec_obj171 = come_decrement_ref_count(__dec_obj171, (void*)0, (void*)0, 0,0, (void*)0, "06type.nc", 2888, 1185);
                }
            }
            __right_value0 = (void*)0;
            node_94=(struct sNode*)come_increment_ref_count(parse_enum((char* )come_increment_ref_count(type_name, "06type.nc", 2892, 1187),(char* )come_increment_ref_count(tag_attribute, "06type.nc", 2892, 1188),info), "06type.nc", 2892, 1189);
            if(!info->no_output_err) {
                Value_95=node_compile(node_94,info);
                if(!Value_95) {
                    printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                                        __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    __result_obj__0 = (struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value1=tuple3$3sType$phchar$ph_Bool$_initialize((struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count((struct tuple3$3sType$phchar$ph_Bool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$ph_Bool$)*(1), "06type.nc", 2897, 1190, "struct tuple3$3sType$phchar$ph_Bool$"), "06type.nc", 2897, 1191),(struct sType* )come_increment_ref_count((struct sType* )((void*)0), "06type.nc", 2897, 1192),(char* )come_increment_ref_count((char* )((void*)0), "06type.nc", 2897, 1193),(_Bool)0))), "06type.nc", 2897, 1194);
                    ((node_94) ? node_94 = come_decrement_ref_count(node_94, ((struct sNode*)node_94)->finalize, ((struct sNode*)node_94)->_protocol_obj, 0, 0,(void*)0, "06type.nc", 2897, 1195):(void*)0);
                    (attribute_before = come_decrement_ref_count(attribute_before, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 2897, 1196));
                    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 2897, 1197));
                    ((alignas_) ? alignas_ = come_decrement_ref_count(alignas_, ((struct sNode*)alignas_)->finalize, ((struct sNode*)alignas_)->_protocol_obj, 0, 0,(void*)0, "06type.nc", 2897, 1198):(void*)0);
                    (tag_attribute = come_decrement_ref_count(tag_attribute, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 2897, 1199));
                    (attribute_81 = come_decrement_ref_count(attribute_81, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 2897, 1200));
                    (pointer_attribute = come_decrement_ref_count(pointer_attribute, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 2897, 1201));
                    (tuple_name = come_decrement_ref_count(tuple_name, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 2897, 1202));
                    come_call_finalizer(sType_finalize, type_82, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 2897, 1203);
                    (var_name_83 = come_decrement_ref_count(var_name_83, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 2897, 1204));
                    come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "06type.nc}", 2897, 1205);
                    neo_current_frame = fr.prev;
                    come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "06type.nc}", 2897, 1206);
                    return __result_obj__0;
                }
            }
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __dec_obj172=type_82,
            type_82=(struct sType* )come_increment_ref_count(sType_clone(((struct sType* )(__right_value0=map$2char$phsType$ph_operator_load_element(info->types,type_name)))), "06type.nc", 2901, 1208);
            come_call_finalizer(sType_finalize, __dec_obj172,(void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc", 2901, 1207);
            come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "06type.nc}", 2901, 1209);
            if(type_82==((void*)0)) {
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                __right_value2 = (void*)0;
                __dec_obj173=type_82,
                type_82=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "06type.nc", 2904, 1210, "struct sType* "), "06type.nc", 2904, 1211),(char* )come_increment_ref_count(__builtin_string(type_name), "06type.nc", 2904, 1212),(_Bool)0,info,(_Bool)0,0), "06type.nc", 2904, 1214);
                come_call_finalizer(sType_finalize, __dec_obj173,(void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc", 2904, 1213);
            }
            ((node_94) ? node_94 = come_decrement_ref_count(node_94, ((struct sNode*)node_94)->finalize, ((struct sNode*)node_94)->_protocol_obj, 0, 0,(void*)0, "06type.nc", 2951, 1215):(void*)0);
        }
        else if(union_) {
            anonymous_96=(_Bool)0;
            if(string_operator_equals(type_name,"")) {
                __right_value0 = (void*)0;
                __dec_obj174=type_name,
                type_name=(char* )come_increment_ref_count(xsprintf("anonymous_typeZ%d",++anonymous_num), "06type.nc", 2910, 1217);
                __dec_obj174 = come_decrement_ref_count(__dec_obj174, (void*)0, (void*)0, 0,0, (void*)0, "06type.nc", 2910, 1216);
                anonymous_96=(_Bool)1;
            }
            __right_value0 = (void*)0;
            node_97=(struct sNode*)come_increment_ref_count(parse_union((char* )come_increment_ref_count(type_name, "06type.nc", 2914, 1218),(char* )come_increment_ref_count(tag_attribute, "06type.nc", 2914, 1219),info,(_Bool)1), "06type.nc", 2914, 1220);
            Value_98=node_compile(node_97,info);
            if(!Value_98) {
                printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                __result_obj__0 = (struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value1=tuple3$3sType$phchar$ph_Bool$_initialize((struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count((struct tuple3$3sType$phchar$ph_Bool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$ph_Bool$)*(1), "06type.nc", 2918, 1221, "struct tuple3$3sType$phchar$ph_Bool$"), "06type.nc", 2918, 1222),(struct sType* )come_increment_ref_count((struct sType* )((void*)0), "06type.nc", 2918, 1223),(char* )come_increment_ref_count((char* )((void*)0), "06type.nc", 2918, 1224),(_Bool)0))), "06type.nc", 2918, 1225);
                ((node_97) ? node_97 = come_decrement_ref_count(node_97, ((struct sNode*)node_97)->finalize, ((struct sNode*)node_97)->_protocol_obj, 0, 0,(void*)0, "06type.nc", 2918, 1226):(void*)0);
                (attribute_before = come_decrement_ref_count(attribute_before, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 2918, 1227));
                (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 2918, 1228));
                ((alignas_) ? alignas_ = come_decrement_ref_count(alignas_, ((struct sNode*)alignas_)->finalize, ((struct sNode*)alignas_)->_protocol_obj, 0, 0,(void*)0, "06type.nc", 2918, 1229):(void*)0);
                (tag_attribute = come_decrement_ref_count(tag_attribute, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 2918, 1230));
                (attribute_81 = come_decrement_ref_count(attribute_81, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 2918, 1231));
                (pointer_attribute = come_decrement_ref_count(pointer_attribute, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 2918, 1232));
                (tuple_name = come_decrement_ref_count(tuple_name, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 2918, 1233));
                come_call_finalizer(sType_finalize, type_82, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 2918, 1234);
                (var_name_83 = come_decrement_ref_count(var_name_83, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 2918, 1235));
                come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "06type.nc}", 2918, 1236);
                neo_current_frame = fr.prev;
                come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "06type.nc}", 2918, 1237);
                return __result_obj__0;
            }
            pointer_num_99=0;
            while(span$1char$p_operator_derefference(info->p)==42) {
                info->p->p++;
                skip_spaces_and_lf(info);
                skip_pointer_attribute(info);
                pointer_num_99++;
            }
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __dec_obj175=type_82,
            type_82=(struct sType* )come_increment_ref_count(sType_clone(((struct sType* )(__right_value0=map$2char$phsType$ph_operator_load_element(info->types,type_name)))), "06type.nc", 2932, 1239);
            come_call_finalizer(sType_finalize, __dec_obj175,(void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc", 2932, 1238);
            come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "06type.nc}", 2932, 1240);
            if(type_82==((void*)0)) {
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                __right_value2 = (void*)0;
                __dec_obj176=type_82,
                type_82=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "06type.nc", 2935, 1241, "struct sType* "), "06type.nc", 2935, 1242),(char* )come_increment_ref_count(__builtin_string(type_name), "06type.nc", 2935, 1243),(_Bool)0,info,(_Bool)0,0), "06type.nc", 2935, 1245);
                come_call_finalizer(sType_finalize, __dec_obj176,(void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc", 2935, 1244);
            }
            __right_value0 = (void*)0;
            klass_100=(struct sClass* )come_increment_ref_count(map$2char$phsClass$ph_operator_load_element(info->classes,type_name), "06type.nc", 2939, 1246);
            klass_100->mAnonymous=(_Bool)1;
            type_82->mPointerNum=pointer_num_99;
            type_82->mAnonymous=anonymous_96;
            __right_value0 = (void*)0;
            __dec_obj177=type_82->mAnonymousName,
            type_82->mAnonymousName=(char* )come_increment_ref_count(__builtin_string(type_name), "06type.nc", 2944, 1248);
            __dec_obj177 = come_decrement_ref_count(__dec_obj177, (void*)0, (void*)0, 0,0, (void*)0, "06type.nc", 2944, 1247);
            ((node_97) ? node_97 = come_decrement_ref_count(node_97, ((struct sNode*)node_97)->finalize, ((struct sNode*)node_97)->_protocol_obj, 0, 0,(void*)0, "06type.nc", 2951, 1249):(void*)0);
            come_call_finalizer(sClass_finalize, klass_100, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 2951, 1250);
        }
        else {
            err_msg(info,"unexpected { character");
                        __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __result_obj__0 = (struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value1=tuple3$3sType$phchar$ph_Bool$_initialize((struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count((struct tuple3$3sType$phchar$ph_Bool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$ph_Bool$)*(1), "06type.nc", 2948, 1251, "struct tuple3$3sType$phchar$ph_Bool$"), "06type.nc", 2948, 1252),(struct sType* )come_increment_ref_count((struct sType* )((void*)0), "06type.nc", 2948, 1253),(char* )come_increment_ref_count((char* )((void*)0), "06type.nc", 2948, 1254),(_Bool)0))), "06type.nc", 2948, 1255);
            (attribute_before = come_decrement_ref_count(attribute_before, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 2948, 1256));
            (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 2948, 1257));
            ((alignas_) ? alignas_ = come_decrement_ref_count(alignas_, ((struct sNode*)alignas_)->finalize, ((struct sNode*)alignas_)->_protocol_obj, 0, 0,(void*)0, "06type.nc", 2948, 1258):(void*)0);
            (tag_attribute = come_decrement_ref_count(tag_attribute, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 2948, 1259));
            (attribute_81 = come_decrement_ref_count(attribute_81, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 2948, 1260));
            (pointer_attribute = come_decrement_ref_count(pointer_attribute, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 2948, 1261));
            (tuple_name = come_decrement_ref_count(tuple_name, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 2948, 1262));
            come_call_finalizer(sType_finalize, type_82, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 2948, 1263);
            (var_name_83 = come_decrement_ref_count(var_name_83, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 2948, 1264));
            come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "06type.nc}", 2948, 1265);
            neo_current_frame = fr.prev;
            come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "06type.nc}", 2948, 1266);
            return __result_obj__0;
        }
        __right_value0 = (void*)0;
        attribute_101=(char* )come_increment_ref_count(parse_struct_attribute(info,(_Bool)0), "06type.nc", 2951, 1267);
        if(!parse_variable_name) {
            append_attribute_to_type(type_82,(char* )come_increment_ref_count(attribute_101, "06type.nc", 2954, 1268),(_Bool)0,info);
        }
        if(parse_variable_name) {
            __right_value0 = (void*)0;
            __dec_obj178=var_name_83,
            var_name_83=(char* )come_increment_ref_count(parse_variable_name_fun(type_82,anonymous_name,var_name_between_brace,(char* )come_increment_ref_count(attribute_101, "06type.nc", 2958, 1269),info), "06type.nc", 2958, 1271);
            __dec_obj178 = come_decrement_ref_count(__dec_obj178, (void*)0, (void*)0, 0,0, (void*)0, "06type.nc", 2958, 1270);
        }
        (attribute_101 = come_decrement_ref_count(attribute_101, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 3512, 1272));
    }
    else if(lambda_flag) {
        if(__right_value0 = (void*)0,
({(_conditional_value_X0=(((struct sType* )(__right_value0=map$2char$phsType$ph_operator_load_element(info->types,type_name)))));        come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "06type.nc}", 2963, 1273);
_conditional_value_X0;})) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __dec_obj179=result_type,
            result_type=(struct sType* )come_increment_ref_count(sType_clone(((struct sType* )(__right_value0=map$2char$phsType$ph_operator_load_element(info->types,type_name)))), "06type.nc", 2964, 1275);
            come_call_finalizer(sType_finalize, __dec_obj179,(void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc", 2964, 1274);
            come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "06type.nc}", 2964, 1276);
            __right_value0 = (void*)0;
            result_type->mClass=((struct sClass* )(__right_value0=map$2char$phsClass$ph_operator_load_element(info->classes,result_type->mClass->mName)));
        }
        else if(list$1char$ph_contained(info->generics_type_names,type_name,(_Bool)0)) {
            for(i=0            ;i<list$1char$ph_length(info->generics_type_names);i++){
                if(__right_value0 = (void*)0,
__right_value1 = (void*)0,
({(_conditional_value_X1=(string_operator_equals(((char* )(__right_value1=list$1char$ph_operator_load_element(info->generics_type_names,i))),type_name)));                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "06type.nc", 2969, 1295));
_conditional_value_X1;})) {
                    __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    __right_value2 = (void*)0;
                    __dec_obj180=result_type,
                    result_type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "06type.nc", 2970, 1296, "struct sType* "), "06type.nc", 2970, 1297),(char* )come_increment_ref_count(xsprintf("__generics_type%d",i), "06type.nc", 2970, 1298),(_Bool)0,info,(_Bool)0,0), "06type.nc", 2970, 1300);
                    come_call_finalizer(sType_finalize, __dec_obj180,(void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc", 2970, 1299);
                }
            }
        }
        else if(list$1char$ph_contained(info->method_generics_type_names,type_name,(_Bool)0)) {
            for(i_104=0            ;i_104<list$1char$ph_length(info->method_generics_type_names);i_104++){
                if(__right_value0 = (void*)0,
__right_value1 = (void*)0,
({(_conditional_value_X2=(string_operator_equals(((char* )(__right_value1=list$1char$ph_operator_load_element(info->method_generics_type_names,i_104))),type_name)));                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "06type.nc", 2976, 1301));
_conditional_value_X2;})) {
                    __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    __right_value2 = (void*)0;
                    __dec_obj181=result_type,
                    result_type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "06type.nc", 2977, 1302, "struct sType* "), "06type.nc", 2977, 1303),(char* )come_increment_ref_count(xsprintf("__mgenerics_type%d",i_104), "06type.nc", 2977, 1304),(_Bool)0,info,(_Bool)0,0), "06type.nc", 2977, 1306);
                    come_call_finalizer(sType_finalize, __dec_obj181,(void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc", 2977, 1305);
                }
            }
        }
        else {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __dec_obj182=result_type,
            result_type=(struct sType* )come_increment_ref_count(sType_clone(((struct sType* )(__right_value0=map$2char$phsType$ph_operator_load_element(info->types,type_name)))), "06type.nc", 2983, 1308);
            come_call_finalizer(sType_finalize, __dec_obj182,(void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc", 2983, 1307);
            come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "06type.nc}", 2983, 1309);
            if(result_type==((void*)0)) {
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                __right_value2 = (void*)0;
                __dec_obj183=result_type,
                result_type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "06type.nc", 2986, 1310, "struct sType* "), "06type.nc", 2986, 1311),(char* )come_increment_ref_count(__builtin_string(type_name), "06type.nc", 2986, 1312),(_Bool)0,info,(_Bool)0,0), "06type.nc", 2986, 1314);
                come_call_finalizer(sType_finalize, __dec_obj183,(void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc", 2986, 1313);
            }
        }
        apply_type_qualifiers(result_type,constant,complex_,atomic_,thread_local,thread_,alignas_double,register_,unsigned_,noreturn_,volatile_,uniq_,static_,extern_,inline_,restrict_,long_long,long_,short_,norecord,weak_);
        __dec_obj184=result_type->mAlignas,
        result_type->mAlignas=(struct sNode*)come_increment_ref_count(alignas_, "06type.nc", 2991, 1316);
        (__dec_obj184 ? __dec_obj184 = come_decrement_ref_count(__dec_obj184, ((struct sNode*)__dec_obj184)->finalize, ((struct sNode*)__dec_obj184)->_protocol_obj, 0,0, (void*)0, "06type.nc", 2991, 1315) :0);
        result_type->mPointerNum=pointer_num;
        result_type->mHeap=result_type->mHeap||heap;
        result_type->mChannel=result_type->mChannel||channel;
        result_type->mDefferRightValue=result_type->mDefferRightValue||deffer_;
        merge_pointer_attribute_to_type(result_type,(char* )come_increment_ref_count(pointer_attribute, "06type.nc", 2996, 1317));
        __right_value0 = (void*)0;
        __dec_obj185=var_name_83,
        var_name_83=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "06type.nc", 2998, 1319);
        __dec_obj185 = come_decrement_ref_count(__dec_obj185, (void*)0, (void*)0, 0,0, (void*)0, "06type.nc", 2998, 1318);
        __right_value0 = (void*)0;
        multiple_assign_var7=((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$*)(__right_value0=parse_params(info,(_Bool)0)));
        param_types=(struct list$1sType$ph*)come_increment_ref_count(multiple_assign_var7->v1, "06type.nc", 3000, 1320);
        param_names=(struct list$1char$ph*)come_increment_ref_count(multiple_assign_var7->v2, "06type.nc", 3000, 1321);
        param_default_parametors=(struct list$1char$ph*)come_increment_ref_count(multiple_assign_var7->v3, "06type.nc", 3000, 1322);
        var_args=multiple_assign_var7->v4;
        come_call_finalizer(tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "06type.nc}", 3000, 1323);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        __dec_obj186=type_82,
        type_82=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "06type.nc", 3002, 1324, "struct sType* "), "06type.nc", 3002, 1325),(char*)come_increment_ref_count(xsprintf("lambda"), "06type.nc", 3002, 1326),(_Bool)0,info,(_Bool)0,0), "06type.nc", 3002, 1328);
        come_call_finalizer(sType_finalize, __dec_obj186,(void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc", 3002, 1327);
        __dec_obj187=type_82->mResultType,
        type_82->mResultType=(struct sType* )come_increment_ref_count(result_type, "06type.nc", 3004, 1330);
        come_call_finalizer(sType_finalize, __dec_obj187,(void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc", 3004, 1329);
        __dec_obj188=type_82->mParamTypes,
        type_82->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(param_types, "06type.nc", 3005, 1332);
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj188,(void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc", 3005, 1331);
        __dec_obj189=type_82->mParamNames,
        type_82->mParamNames=(struct list$1char$ph*)come_increment_ref_count(param_names, "06type.nc", 3006, 1334);
        come_call_finalizer(list$1char$ph_finalize, __dec_obj189,(void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc", 3006, 1333);
        type_82->mVarArgs=var_args;
        type_82->mExtern=extern_;
        come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 3512, 1335);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 3512, 1336);
        come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 3512, 1337);
        come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 3512, 1338);
    }
    else if(pointer_to_array_flag) {
        expected_next_character(40,info);
        skip_pointer_attribute(info);
        pointer_paren=(_Bool)0;
        paren_num=1;
        if(span$1char$p_operator_derefference(info->p)==40) {
            pointer_paren=(_Bool)1;
            info->p->p++;
            skip_spaces_and_lf(info);
            paren_num++;
        }
        array_pointer_num=0;
        while(span$1char$p_operator_derefference(info->p)==42||span$1char$p_operator_derefference(info->p)==94) {
            info->p->p++;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            array_pointer_num++;
        }
        skip_pointer_attribute(info);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __dec_obj190=type_82,
        type_82=(struct sType* )come_increment_ref_count(sType_clone(((struct sType* )(__right_value0=map$2char$phsType$ph_operator_load_element(info->types,type_name)))), "06type.nc", 3034, 1340);
        come_call_finalizer(sType_finalize, __dec_obj190,(void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc", 3034, 1339);
        come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "06type.nc}", 3034, 1341);
        if(type_82==((void*)0)) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            __dec_obj191=type_82,
            type_82=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "06type.nc", 3037, 1342, "struct sType* "), "06type.nc", 3037, 1343),(char* )come_increment_ref_count(__builtin_string(type_name), "06type.nc", 3037, 1344),(_Bool)0,info,(_Bool)0,0), "06type.nc", 3037, 1346);
            come_call_finalizer(sType_finalize, __dec_obj191,(void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc", 3037, 1345);
        }
        apply_type_qualifiers(type_82,constant,complex_,atomic_,thread_local,thread_,alignas_double,register_,unsigned_,noreturn_,volatile_,uniq_,static_,extern_,inline_,restrict_,long_long,long_,short_,norecord,weak_);
        __dec_obj192=type_82->mAlignas,
        type_82->mAlignas=(struct sNode*)come_increment_ref_count(alignas_, "06type.nc", 3041, 1348);
        (__dec_obj192 ? __dec_obj192 = come_decrement_ref_count(__dec_obj192, ((struct sNode*)__dec_obj192)->finalize, ((struct sNode*)__dec_obj192)->_protocol_obj, 0,0, (void*)0, "06type.nc", 3041, 1347) :0);
        type_82->mPointerNum+=pointer_num;
        type_82->mHeap=type_82->mHeap||heap;
        type_82->mChannel=type_82->mChannel||channel;
        __dec_obj193=type_82->mTupleName,
        type_82->mTupleName=(char* )come_increment_ref_count(tuple_name, "06type.nc", 3045, 1350);
        __dec_obj193 = come_decrement_ref_count(__dec_obj193, (void*)0, (void*)0, 0,0, (void*)0, "06type.nc", 3045, 1349);
        type_82->mDefferRightValue=type_82->mDefferRightValue||deffer_;
        merge_pointer_attribute_to_type(type_82,(char* )come_increment_ref_count(pointer_attribute, "06type.nc", 3047, 1351));
        if(xisalpha(span$1char$p_operator_derefference(info->p))||span$1char$p_operator_derefference(info->p)==95) {
            __right_value0 = (void*)0;
            __dec_obj194=var_name_83,
            var_name_83=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "06type.nc", 3050, 1353);
            __dec_obj194 = come_decrement_ref_count(__dec_obj194, (void*)0, (void*)0, 0,0, (void*)0, "06type.nc", 3050, 1352);
        }
        else {
            __right_value0 = (void*)0;
            __dec_obj195=var_name_83,
            var_name_83=(char*)come_increment_ref_count(xsprintf(""), "06type.nc", 3053, 1355);
            __dec_obj195 = come_decrement_ref_count(__dec_obj195, (void*)0, (void*)0, 0,0, (void*)0, "06type.nc", 3053, 1354);
        }
        if(span$1char$p_operator_derefference(info->p)==41) {
            info->p->p++;
            skip_spaces_and_lf(info);
            paren_num--;
        }
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        array=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "06type.nc", 3061, 1356, "struct list$1sNode$ph*"), "06type.nc", 3061, 1357)), "06type.nc", 3061, 1358);
        while(span$1char$p_operator_derefference(info->p)==91) {
            info->p->p++;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            node_105=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "06type.nc", 3066, 1359);
            list$1sNode$ph_add(array,(struct sNode*)come_increment_ref_count(node_105, "06type.nc", 3068, 1360));
            if(span$1char$p_operator_derefference(info->p)==93) {
                info->p->p++;
                skip_spaces_and_lf(info);
            }
            ((node_105) ? node_105 = come_decrement_ref_count(node_105, ((struct sNode*)node_105)->finalize, ((struct sNode*)node_105)->_protocol_obj, 0, 0,(void*)0, "06type.nc", 3075, 1361):(void*)0);
        }
        if(paren_num>0&&span$1char$p_operator_derefference(info->p)==41) {
            info->p->p++;
            skip_spaces_and_lf(info);
            __dec_obj196=type_82->mVarNameArrayNum,
            type_82->mVarNameArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(array, "06type.nc", 3079, 1363);
            come_call_finalizer(list$1sNode$ph_finalize, __dec_obj196,(void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc", 3079, 1362);
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
            __current_stack1__.attribute_before = &attribute_before;
            __current_stack1__.type_name = &type_name;
            __current_stack1__.norecord = &norecord;
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
            __current_stack1__.noreturn_ = &noreturn_;
            __current_stack1__.weak_ = &weak_;
            __current_stack1__.alignas_ = &alignas_;
            __current_stack1__.alignas_double = &alignas_double;
            __current_stack1__.tag_attribute = &tag_attribute;
            __current_stack1__.struct_define_parsed = &struct_define_parsed;
            __current_stack1__.anonymous_type = &anonymous_type;
            __current_stack1__.anonymous_name = &anonymous_name;
            __current_stack1__.atomic_ = &atomic_;
            __current_stack1__.thread_local = &thread_local;
            __current_stack1__.thread_ = &thread_;
            __current_stack1__.attribute_81 = &attribute_81;
            __current_stack1__.pointer_num = &pointer_num;
            __current_stack1__.pointer_attribute = &pointer_attribute;
            __current_stack1__.heap = &heap;
            __current_stack1__.refference = &refference;
            __current_stack1__.no_refference = &no_refference;
            __current_stack1__.channel = &channel;
            __current_stack1__.deffer_ = &deffer_;
            __current_stack1__.any_class = &any_class;
            __current_stack1__.vtable = &vtable;
            __current_stack1__.tuple_name = &tuple_name;
            __current_stack1__.lambda_flag = &lambda_flag;
            __current_stack1__.type_82 = &type_82;
            __current_stack1__.var_name_83 = &var_name_83;
            __current_stack1__.function_pointer_flag = &function_pointer_flag;
            __current_stack1__.pointer_to_array_flag = &pointer_to_array_flag;
            __current_stack1__.var_name_between_brace = &var_name_between_brace;
            })            ,            list$1sNode$ph_each(array,&__current_stack1__,(void*)method_block1_06typenc);
        }
        while(span$1char$p_operator_derefference(info->p)==91) {
            info->p->p++;
            skip_spaces_and_lf(info);
            if(span$1char$p_operator_derefference(info->p)==93) {
                info->p->p++;
                skip_spaces_and_lf(info);
                type_82->mArrayPointerType=(_Bool)1;
                break;
            }
            __right_value0 = (void*)0;
            node_106=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "06type.nc", 3098, 1367);
            list$1sNode$ph_add(type_82->mArrayNum,(struct sNode*)come_increment_ref_count(node_106, "06type.nc", 3100, 1368));
            if(span$1char$p_operator_derefference(info->p)==93) {
                info->p->p++;
                skip_spaces_and_lf(info);
            }
            ((node_106) ? node_106 = come_decrement_ref_count(node_106, ((struct sNode*)node_106)->finalize, ((struct sNode*)node_106)->_protocol_obj, 0, 0,(void*)0, "06type.nc", 3108, 1369):(void*)0);
        }
        type_82->mArrayPointerNum=array_pointer_num;
        type_82->mPointerParen=pointer_paren;
        come_call_finalizer(list$1sNode$ph$p_finalize, array, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 3512, 1370);
    }
    else if(function_pointer_flag) {
        info->p->p++;
        skip_spaces_and_lf(info);
        skip_pointer_attribute(info);
        __right_value0 = (void*)0;
        function_pointer_attribute=(char*)come_increment_ref_count(xsprintf(""), "06type.nc", 3116, 1371);
        function_pointer_num=0;
        while(span$1char$p_operator_derefference(info->p)==42||span$1char$p_operator_derefference(info->p)==94) {
            info->p->p++;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            pointer_attr_107=(char* )come_increment_ref_count(parse_pointer_qualifier(info), "06type.nc", 3122, 1372);
            if(string_operator_not_equals(pointer_attr_107,"")) {
                if(string_operator_not_equals(function_pointer_attribute,"")) {
                    __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    __right_value2 = (void*)0;
                    __dec_obj197=function_pointer_attribute,
                    function_pointer_attribute=(char* )come_increment_ref_count(string_operator_add(((char* )(__right_value1=string_operator_add(function_pointer_attribute," "))),pointer_attr_107), "06type.nc", 3125, 1374);
                    __dec_obj197 = come_decrement_ref_count(__dec_obj197, (void*)0, (void*)0, 0,0, (void*)0, "06type.nc", 3125, 1373);
                    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "06type.nc", 3125, 1375));
                }
                else {
                    __dec_obj198=function_pointer_attribute,
                    function_pointer_attribute=(char* )come_increment_ref_count(pointer_attr_107, "06type.nc", 3128, 1377);
                    __dec_obj198 = come_decrement_ref_count(__dec_obj198, (void*)0, (void*)0, 0,0, (void*)0, "06type.nc", 3128, 1376);
                }
            }
            function_pointer_num++;
            (pointer_attr_107 = come_decrement_ref_count(pointer_attr_107, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 3134, 1378));
        }
        __right_value0 = (void*)0;
        pointer_attr2=(char* )come_increment_ref_count(parse_pointer_qualifier(info), "06type.nc", 3134, 1379);
        if(string_operator_not_equals(pointer_attr2,"")) {
            if(string_operator_not_equals(function_pointer_attribute,"")) {
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                __right_value2 = (void*)0;
                __dec_obj199=function_pointer_attribute,
                function_pointer_attribute=(char* )come_increment_ref_count(string_operator_add(((char* )(__right_value1=string_operator_add(function_pointer_attribute," "))),pointer_attr2), "06type.nc", 3137, 1381);
                __dec_obj199 = come_decrement_ref_count(__dec_obj199, (void*)0, (void*)0, 0,0, (void*)0, "06type.nc", 3137, 1380);
                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "06type.nc", 3137, 1382));
            }
            else {
                __dec_obj200=function_pointer_attribute,
                function_pointer_attribute=(char* )come_increment_ref_count(pointer_attr2, "06type.nc", 3140, 1384);
                __dec_obj200 = come_decrement_ref_count(__dec_obj200, (void*)0, (void*)0, 0,0, (void*)0, "06type.nc", 3140, 1383);
            }
        }
        if(__right_value0 = (void*)0,
({(_conditional_value_X3=(((struct sType* )(__right_value0=map$2char$phsType$ph_operator_load_element(info->types,type_name)))));        come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "06type.nc}", 3145, 1385);
_conditional_value_X3;})) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __dec_obj201=result_type_108,
            result_type_108=(struct sType* )come_increment_ref_count(sType_clone(((struct sType* )(__right_value0=map$2char$phsType$ph_operator_load_element(info->types,type_name)))), "06type.nc", 3146, 1387);
            come_call_finalizer(sType_finalize, __dec_obj201,(void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc", 3146, 1386);
            come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "06type.nc}", 3146, 1388);
            __right_value0 = (void*)0;
            result_type_108->mClass=((struct sClass* )(__right_value0=map$2char$phsClass$ph_operator_load_element(info->classes,result_type_108->mClass->mName)));
        }
        else if(list$1char$ph_contained(info->generics_type_names,type_name,(_Bool)0)) {
            for(i_109=0            ;i_109<list$1char$ph_length(info->generics_type_names);i_109++){
                if(__right_value0 = (void*)0,
__right_value1 = (void*)0,
({(_conditional_value_X4=(string_operator_equals(((char* )(__right_value1=list$1char$ph_operator_load_element(info->generics_type_names,i_109))),type_name)));                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "06type.nc", 3151, 1389));
_conditional_value_X4;})) {
                    __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    __right_value2 = (void*)0;
                    __dec_obj202=result_type_108,
                    result_type_108=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "06type.nc", 3152, 1390, "struct sType* "), "06type.nc", 3152, 1391),(char* )come_increment_ref_count(xsprintf("__generics_type%d",i_109), "06type.nc", 3152, 1392),(_Bool)0,info,(_Bool)0,0), "06type.nc", 3152, 1394);
                    come_call_finalizer(sType_finalize, __dec_obj202,(void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc", 3152, 1393);
                }
            }
        }
        else if(list$1char$ph_contained(info->method_generics_type_names,type_name,(_Bool)0)) {
            for(i_110=0            ;i_110<list$1char$ph_length(info->method_generics_type_names);i_110++){
                if(__right_value0 = (void*)0,
__right_value1 = (void*)0,
({(_conditional_value_X5=(string_operator_equals(((char* )(__right_value1=list$1char$ph_operator_load_element(info->method_generics_type_names,i_110))),type_name)));                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "06type.nc", 3158, 1395));
_conditional_value_X5;})) {
                    __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    __right_value2 = (void*)0;
                    __dec_obj203=result_type_108,
                    result_type_108=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "06type.nc", 3159, 1396, "struct sType* "), "06type.nc", 3159, 1397),(char* )come_increment_ref_count(xsprintf("__mgenerics_type%d",i_110), "06type.nc", 3159, 1398),(_Bool)0,info,(_Bool)0,0), "06type.nc", 3159, 1400);
                    come_call_finalizer(sType_finalize, __dec_obj203,(void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc", 3159, 1399);
                }
            }
        }
        else {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __dec_obj204=result_type_108,
            result_type_108=(struct sType* )come_increment_ref_count(sType_clone(((struct sType* )(__right_value0=map$2char$phsType$ph_operator_load_element(info->types,type_name)))), "06type.nc", 3164, 1402);
            come_call_finalizer(sType_finalize, __dec_obj204,(void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc", 3164, 1401);
            come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "06type.nc}", 3164, 1403);
            if(result_type_108==((void*)0)) {
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                __right_value2 = (void*)0;
                __dec_obj205=result_type_108,
                result_type_108=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "06type.nc", 3167, 1404, "struct sType* "), "06type.nc", 3167, 1405),(char* )come_increment_ref_count(__builtin_string(type_name), "06type.nc", 3167, 1406),(_Bool)0,info,(_Bool)0,0), "06type.nc", 3167, 1408);
                come_call_finalizer(sType_finalize, __dec_obj205,(void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc", 3167, 1407);
            }
        }
        apply_type_qualifiers(result_type_108,constant,complex_,atomic_,thread_local,thread_,alignas_double,register_,unsigned_,noreturn_,volatile_,uniq_,static_,extern_,inline_,restrict_,long_long,long_,short_,norecord,weak_);
        __dec_obj206=result_type_108->mAlignas,
        result_type_108->mAlignas=(struct sNode*)come_increment_ref_count(alignas_, "06type.nc", 3172, 1410);
        (__dec_obj206 ? __dec_obj206 = come_decrement_ref_count(__dec_obj206, ((struct sNode*)__dec_obj206)->finalize, ((struct sNode*)__dec_obj206)->_protocol_obj, 0,0, (void*)0, "06type.nc", 3172, 1409) :0);
        result_type_108->mPointerNum+=pointer_num;
        result_type_108->mHeap=result_type_108->mHeap||heap;
        result_type_108->mChannel=result_type_108->mChannel||channel;
        result_type_108->mDefferRightValue=result_type_108->mDefferRightValue||deffer_;
        merge_pointer_attribute_to_type(result_type_108,(char* )come_increment_ref_count(pointer_attribute, "06type.nc", 3177, 1411));
        paren_flag=(_Bool)0;
        if(span$1char$p_operator_derefference(info->p)==40) {
            info->p->p++;
            skip_spaces_and_lf(info);
            paren_flag=(_Bool)1;
        }
        array_pointer=0;
        while(span$1char$p_operator_derefference(info->p)==42) {
            info->p->p++;
            skip_spaces_and_lf(info);
            array_pointer++;
        }
        if(xisalnum(*info->p->p)||span$1char$p_operator_derefference(info->p)==95) {
            __right_value0 = (void*)0;
            __dec_obj207=var_name_83,
            var_name_83=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "06type.nc", 3194, 1413);
            __dec_obj207 = come_decrement_ref_count(__dec_obj207, (void*)0, (void*)0, 0,0, (void*)0, "06type.nc", 3194, 1412);
            if(!paren_flag&&span$1char$p_operator_derefference(info->p)==40) {
                                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                __result_obj__0 = (struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value1=tuple3$3sType$phchar$ph_Bool$_initialize((struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count((struct tuple3$3sType$phchar$ph_Bool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$ph_Bool$)*(1), "06type.nc", 3196, 1414, "struct tuple3$3sType$phchar$ph_Bool$"), "06type.nc", 3196, 1415),(struct sType* )come_increment_ref_count(result_type_108, "06type.nc", 3196, 1416),(char* )come_increment_ref_count(var_name_83, "06type.nc", 3196, 1417),(_Bool)0))), "06type.nc", 3196, 1418);
                (function_pointer_attribute = come_decrement_ref_count(function_pointer_attribute, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 3196, 1419));
                (pointer_attr2 = come_decrement_ref_count(pointer_attr2, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 3196, 1420));
                come_call_finalizer(sType_finalize, result_type_108, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 3196, 1421);
                (attribute_before = come_decrement_ref_count(attribute_before, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 3196, 1422));
                (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 3196, 1423));
                ((alignas_) ? alignas_ = come_decrement_ref_count(alignas_, ((struct sNode*)alignas_)->finalize, ((struct sNode*)alignas_)->_protocol_obj, 0, 0,(void*)0, "06type.nc", 3196, 1424):(void*)0);
                (tag_attribute = come_decrement_ref_count(tag_attribute, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 3196, 1425));
                (attribute_81 = come_decrement_ref_count(attribute_81, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 3196, 1426));
                (pointer_attribute = come_decrement_ref_count(pointer_attribute, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 3196, 1427));
                (tuple_name = come_decrement_ref_count(tuple_name, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 3196, 1428));
                come_call_finalizer(sType_finalize, type_82, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 3196, 1429);
                (var_name_83 = come_decrement_ref_count(var_name_83, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 3196, 1430));
                come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "06type.nc}", 3196, 1431);
                neo_current_frame = fr.prev;
                come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "06type.nc}", 3196, 1432);
                return __result_obj__0;
            }
        }
        else {
            static int num_anonymous_var_name=0;
            num_anonymous_var_name++;
            __right_value0 = (void*)0;
            __dec_obj208=var_name_83,
            var_name_83=(char* )come_increment_ref_count(xsprintf("anonymous_lambda_var_nameZ%d",num_anonymous_var_name), "06type.nc", 3202, 1434);
            __dec_obj208 = come_decrement_ref_count(__dec_obj208, (void*)0, (void*)0, 0,0, (void*)0, "06type.nc", 3202, 1433);
        }
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        __dec_obj209=type_82,
        type_82=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "06type.nc", 3205, 1435, "struct sType* "), "06type.nc", 3205, 1436),(char*)come_increment_ref_count(xsprintf("lambda"), "06type.nc", 3205, 1437),(_Bool)0,info,(_Bool)0,0), "06type.nc", 3205, 1439);
        come_call_finalizer(sType_finalize, __dec_obj209,(void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc", 3205, 1438);
        while(span$1char$p_operator_derefference(info->p)==91) {
            info->p->p++;
            skip_spaces_and_lf(info);
            if(span$1char$p_operator_derefference(info->p)==93) {
                info->p->p++;
                skip_spaces_and_lf(info);
                type_82->mArrayPointerType=(_Bool)1;
                break;
            }
            else {
                __right_value0 = (void*)0;
                node_111=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "06type.nc", 3218, 1440);
                list$1sNode$ph_add(type_82->mArrayNum,(struct sNode*)come_increment_ref_count(node_111, "06type.nc", 3220, 1441));
                if(span$1char$p_operator_derefference(info->p)==93) {
                    info->p->p++;
                    skip_spaces_and_lf(info);
                }
                ((node_111) ? node_111 = come_decrement_ref_count(node_111, ((struct sNode*)node_111)->finalize, ((struct sNode*)node_111)->_protocol_obj, 0, 0,(void*)0, "06type.nc", 3227, 1442):(void*)0);
            }
        }
        if(paren_flag&&span$1char$p_operator_derefference(info->p)==41) {
            info->p->p++;
            skip_spaces_and_lf(info);
        }
        while(span$1char$p_operator_derefference(info->p)==91) {
            info->p->p++;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            node_112=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "06type.nc", 3238, 1443);
            list$1sNode$ph_add(type_82->mArrayNum,(struct sNode*)come_increment_ref_count(node_112, "06type.nc", 3240, 1444));
            if(span$1char$p_operator_derefference(info->p)==93) {
                info->p->p++;
                skip_spaces_and_lf(info);
            }
            ((node_112) ? node_112 = come_decrement_ref_count(node_112, ((struct sNode*)node_112)->finalize, ((struct sNode*)node_112)->_protocol_obj, 0, 0,(void*)0, "06type.nc", 3247, 1445):(void*)0);
        }
        expected_next_character(41,info);
        __right_value0 = (void*)0;
        multiple_assign_var8=((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$*)(__right_value0=parse_params(info,(_Bool)0)));
        param_types_113=(struct list$1sType$ph*)come_increment_ref_count(multiple_assign_var8->v1, "06type.nc", 3249, 1446);
        param_names_114=(struct list$1char$ph*)come_increment_ref_count(multiple_assign_var8->v2, "06type.nc", 3249, 1447);
        param_default_parametors_115=(struct list$1char$ph*)come_increment_ref_count(multiple_assign_var8->v3, "06type.nc", 3249, 1448);
        var_args_116=multiple_assign_var8->v4;
        come_call_finalizer(tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "06type.nc}", 3249, 1449);
        __right_value0 = (void*)0;
        __dec_obj210=type_82->mResultType,
        type_82->mResultType=(struct sType* )come_increment_ref_count(sType_clone(result_type_108), "06type.nc", 3251, 1451);
        come_call_finalizer(sType_finalize, __dec_obj210,(void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc", 3251, 1450);
        __dec_obj211=type_82->mParamTypes,
        type_82->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(param_types_113, "06type.nc", 3252, 1453);
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj211,(void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc", 3252, 1452);
        __dec_obj212=type_82->mParamNames,
        type_82->mParamNames=(struct list$1char$ph*)come_increment_ref_count(param_names_114, "06type.nc", 3253, 1455);
        come_call_finalizer(list$1char$ph_finalize, __dec_obj212,(void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc", 3253, 1454);
        type_82->mVarArgs=var_args_116;
        type_82->mExtern=extern_;
        __dec_obj213=type_82->mPointerAttribute,
        type_82->mPointerAttribute=(char* )come_increment_ref_count(function_pointer_attribute, "06type.nc", 3256, 1457);
        __dec_obj213 = come_decrement_ref_count(__dec_obj213, (void*)0, (void*)0, 0,0, (void*)0, "06type.nc", 3256, 1456);
        type_82->mFunctionPointerNum=function_pointer_num;
        type_82->mArrayPointerNum=array_pointer;
        (function_pointer_attribute = come_decrement_ref_count(function_pointer_attribute, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 3512, 1458));
        (pointer_attr2 = come_decrement_ref_count(pointer_attr2, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 3512, 1459));
        come_call_finalizer(sType_finalize, result_type_108, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 3512, 1460);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types_113, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 3512, 1461);
        come_call_finalizer(list$1char$ph$p_finalize, param_names_114, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 3512, 1462);
        come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors_115, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 3512, 1463);
    }
    else {
        if(__right_value0 = (void*)0,
({(_conditional_value_X6=(((struct sType* )(__right_value0=map$2char$phsType$ph_operator_load_element(info->types,type_name)))));        come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "06type.nc}", 3262, 1464);
_conditional_value_X6;})) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __dec_obj214=type_82,
            type_82=(struct sType* )come_increment_ref_count(sType_clone(((struct sType* )(__right_value0=map$2char$phsType$ph_operator_load_element(info->types,type_name)))), "06type.nc", 3263, 1466);
            come_call_finalizer(sType_finalize, __dec_obj214,(void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc", 3263, 1465);
            come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "06type.nc}", 3263, 1467);
            __right_value0 = (void*)0;
            type_82->mClass=((struct sClass* )(__right_value0=map$2char$phsClass$ph_operator_load_element(info->classes,type_82->mClass->mName)));
            __right_value0 = (void*)0;
            t=((struct buffer* )(__right_value0=map$2char$phbuffer$ph_operator_load_element(info->typedef_definition,type_name)));
            type_82->mOriginalTypePointerNum=pointer_num;
            type_82->mOriginalTypePointerHeap=heap;
            if(type_82->mTypedef||t) {
                __right_value0 = (void*)0;
                type_=(struct sType* )come_increment_ref_count(sType_clone(type_82), "06type.nc", 3271, 1498);
                __right_value0 = (void*)0;
                __dec_obj215=type_->mAttribute,
                type_->mAttribute=(char*)come_increment_ref_count(xsprintf(""), "06type.nc", 3272, 1500);
                __dec_obj215 = come_decrement_ref_count(__dec_obj215, (void*)0, (void*)0, 0,0, (void*)0, "06type.nc", 3272, 1499);
                __right_value0 = (void*)0;
                __dec_obj216=type_82->mTypedefOriginalType,
                type_82->mTypedefOriginalType=(struct sType* )come_increment_ref_count(sType_clone(type_), "06type.nc", 3273, 1502);
                come_call_finalizer(sType_finalize, __dec_obj216,(void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc", 3273, 1501);
                come_call_finalizer(sType_finalize, type_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 3276, 1503);
            }
            __right_value0 = (void*)0;
            __dec_obj217=type_82->mAttribute,
            type_82->mAttribute=(char*)come_increment_ref_count(xsprintf(""), "06type.nc", 3276, 1505);
            __dec_obj217 = come_decrement_ref_count(__dec_obj217, (void*)0, (void*)0, 0,0, (void*)0, "06type.nc", 3276, 1504);
            __right_value0 = (void*)0;
            __dec_obj218=type_82->mVarAttribute,
            type_82->mVarAttribute=(char*)come_increment_ref_count(xsprintf(""), "06type.nc", 3277, 1507);
            __dec_obj218 = come_decrement_ref_count(__dec_obj218, (void*)0, (void*)0, 0,0, (void*)0, "06type.nc", 3277, 1506);
            apply_type_qualifiers(type_82,constant,complex_,atomic_,thread_local,thread_,alignas_double,register_,unsigned_,noreturn_,volatile_,uniq_,static_,extern_,inline_,restrict_,long_long,long_,short_,norecord,weak_);
            __dec_obj219=type_82->mAlignas,
            type_82->mAlignas=(struct sNode*)come_increment_ref_count(alignas_, "06type.nc", 3280, 1509);
            (__dec_obj219 ? __dec_obj219 = come_decrement_ref_count(__dec_obj219, ((struct sNode*)__dec_obj219)->finalize, ((struct sNode*)__dec_obj219)->_protocol_obj, 0,0, (void*)0, "06type.nc", 3280, 1508) :0);
            if(string_operator_equals(type_82->mClass->mName,"lambda")||list$1sNode$ph_length(type_82->mArrayNum)>0) {
                type_82->mArrayPointerNum+=pointer_num;
            }
            else {
                type_82->mPointerNum+=pointer_num;
            }
            type_82->mHeap=type_82->mHeap||heap;
            type_82->mChannel=type_82->mChannel||channel;
            type_82->mDefferRightValue=type_82->mDefferRightValue||deffer_;
            __dec_obj220=type_82->mTupleName,
            type_82->mTupleName=(char* )come_increment_ref_count(tuple_name, "06type.nc", 3290, 1511);
            __dec_obj220 = come_decrement_ref_count(__dec_obj220, (void*)0, (void*)0, 0,0, (void*)0, "06type.nc", 3290, 1510);
            __right_value0 = (void*)0;
            __dec_obj221=type_82,
            type_82=(struct sType* )come_increment_ref_count(parse_pointer_attribute((struct sType* )come_increment_ref_count(type_82, "06type.nc", 3292, 1512),info), "06type.nc", 3292, 1514);
            come_call_finalizer(sType_finalize, __dec_obj221,(void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc", 3292, 1513);
        }
        else if(list$1char$ph_contained(info->generics_type_names,type_name,(_Bool)0)) {
            for(i_117=0            ;i_117<list$1char$ph_length(info->generics_type_names);i_117++){
                if(__right_value0 = (void*)0,
__right_value1 = (void*)0,
({(_conditional_value_X7=(string_operator_equals(((char* )(__right_value1=list$1char$ph_operator_load_element(info->generics_type_names,i_117))),type_name)));                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "06type.nc", 3296, 1515));
_conditional_value_X7;})) {
                    __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    __right_value2 = (void*)0;
                    __dec_obj222=type_82,
                    type_82=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "06type.nc", 3297, 1516, "struct sType* "), "06type.nc", 3297, 1517),(char* )come_increment_ref_count(xsprintf("__generics_type%d",i_117), "06type.nc", 3297, 1518),(_Bool)0,info,(_Bool)0,0), "06type.nc", 3297, 1520);
                    come_call_finalizer(sType_finalize, __dec_obj222,(void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc", 3297, 1519);
                }
            }
            apply_type_qualifiers(type_82,constant,complex_,atomic_,thread_local,thread_,alignas_double,register_,unsigned_,noreturn_,volatile_,uniq_,static_,extern_,inline_,restrict_,long_long,long_,short_,norecord,weak_);
            __dec_obj223=type_82->mAlignas,
            type_82->mAlignas=(struct sNode*)come_increment_ref_count(alignas_, "06type.nc", 3302, 1522);
            (__dec_obj223 ? __dec_obj223 = come_decrement_ref_count(__dec_obj223, ((struct sNode*)__dec_obj223)->finalize, ((struct sNode*)__dec_obj223)->_protocol_obj, 0,0, (void*)0, "06type.nc", 3302, 1521) :0);
            type_82->mPointerNum+=pointer_num;
            type_82->mHeap=type_82->mHeap||heap;
            type_82->mChannel=type_82->mChannel||channel;
            type_82->mDefferRightValue=type_82->mDefferRightValue||deffer_;
            __dec_obj224=type_82->mTupleName,
            type_82->mTupleName=(char* )come_increment_ref_count(tuple_name, "06type.nc", 3307, 1524);
            __dec_obj224 = come_decrement_ref_count(__dec_obj224, (void*)0, (void*)0, 0,0, (void*)0, "06type.nc", 3307, 1523);
            __right_value0 = (void*)0;
            __dec_obj225=type_82,
            type_82=(struct sType* )come_increment_ref_count(parse_pointer_attribute((struct sType* )come_increment_ref_count(type_82, "06type.nc", 3309, 1525),info), "06type.nc", 3309, 1527);
            come_call_finalizer(sType_finalize, __dec_obj225,(void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc", 3309, 1526);
        }
        else if(list$1char$ph_contained(info->method_generics_type_names,type_name,(_Bool)0)) {
            for(i_118=0            ;i_118<list$1char$ph_length(info->method_generics_type_names);i_118++){
                if(__right_value0 = (void*)0,
__right_value1 = (void*)0,
({(_conditional_value_X8=(string_operator_equals(((char* )(__right_value1=list$1char$ph_operator_load_element(info->method_generics_type_names,i_118))),type_name)));                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "06type.nc", 3313, 1528));
_conditional_value_X8;})) {
                    __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    __right_value2 = (void*)0;
                    __dec_obj226=type_82,
                    type_82=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "06type.nc", 3314, 1529, "struct sType* "), "06type.nc", 3314, 1530),(char* )come_increment_ref_count(xsprintf("__mgenerics_type%d",i_118), "06type.nc", 3314, 1531),(_Bool)0,info,(_Bool)0,0), "06type.nc", 3314, 1533);
                    come_call_finalizer(sType_finalize, __dec_obj226,(void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc", 3314, 1532);
                }
            }
            apply_type_qualifiers(type_82,constant,complex_,atomic_,thread_local,thread_,alignas_double,register_,unsigned_,noreturn_,volatile_,uniq_,static_,extern_,inline_,restrict_,long_long,long_,short_,norecord,weak_);
            __dec_obj227=type_82->mAlignas,
            type_82->mAlignas=(struct sNode*)come_increment_ref_count(alignas_, "06type.nc", 3319, 1535);
            (__dec_obj227 ? __dec_obj227 = come_decrement_ref_count(__dec_obj227, ((struct sNode*)__dec_obj227)->finalize, ((struct sNode*)__dec_obj227)->_protocol_obj, 0,0, (void*)0, "06type.nc", 3319, 1534) :0);
            type_82->mPointerNum+=pointer_num;
            type_82->mHeap=type_82->mHeap||heap;
            type_82->mChannel=type_82->mChannel||channel;
            type_82->mDefferRightValue=type_82->mDefferRightValue||deffer_;
            __dec_obj228=type_82->mTupleName,
            type_82->mTupleName=(char* )come_increment_ref_count(tuple_name, "06type.nc", 3324, 1537);
            __dec_obj228 = come_decrement_ref_count(__dec_obj228, (void*)0, (void*)0, 0,0, (void*)0, "06type.nc", 3324, 1536);
            __right_value0 = (void*)0;
            __dec_obj229=type_82,
            type_82=(struct sType* )come_increment_ref_count(parse_pointer_attribute((struct sType* )come_increment_ref_count(type_82, "06type.nc", 3326, 1538),info), "06type.nc", 3326, 1540);
            come_call_finalizer(sType_finalize, __dec_obj229,(void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc", 3326, 1539);
        }
        else if(span$1char$p_operator_derefference(info->p)==60) {
            info->p->p++;
            skip_spaces_and_lf(info);
            if(__right_value0 = (void*)0,
__right_value1 = (void*)0,
__right_value2 = (void*)0,
({(_conditional_value_X9=(((struct sClass* )(__right_value2=map$2char$phsClass$ph_operator_load_element(info->generics_classes,((char* )(__right_value1=__builtin_string(type_name))))))==((void*)0)));            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "06type.nc", 3332, 1541));
            come_call_finalizer(sClass_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0, "06type.nc}", 3332, 1542);
_conditional_value_X9;})) {
                                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                __result_obj__0 = (struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value1=tuple3$3sType$phchar$ph_Bool$_initialize((struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count((struct tuple3$3sType$phchar$ph_Bool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$ph_Bool$)*(1), "06type.nc", 3334, 1543, "struct tuple3$3sType$phchar$ph_Bool$"), "06type.nc", 3334, 1544),(struct sType* )come_increment_ref_count((struct sType* )((void*)0), "06type.nc", 3334, 1545),(char* )come_increment_ref_count((char* )((void*)0), "06type.nc", 3334, 1546),(_Bool)0))), "06type.nc", 3334, 1547);
                (attribute_before = come_decrement_ref_count(attribute_before, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 3334, 1548));
                (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 3334, 1549));
                ((alignas_) ? alignas_ = come_decrement_ref_count(alignas_, ((struct sNode*)alignas_)->finalize, ((struct sNode*)alignas_)->_protocol_obj, 0, 0,(void*)0, "06type.nc", 3334, 1550):(void*)0);
                (tag_attribute = come_decrement_ref_count(tag_attribute, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 3334, 1551));
                (attribute_81 = come_decrement_ref_count(attribute_81, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 3334, 1552));
                (pointer_attribute = come_decrement_ref_count(pointer_attribute, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 3334, 1553));
                (tuple_name = come_decrement_ref_count(tuple_name, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 3334, 1554));
                come_call_finalizer(sType_finalize, type_82, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 3334, 1555);
                (var_name_83 = come_decrement_ref_count(var_name_83, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 3334, 1556));
                come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "06type.nc}", 3334, 1557);
                neo_current_frame = fr.prev;
                come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "06type.nc}", 3334, 1558);
                return __result_obj__0;
            }
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __dec_obj230=type_82,
            type_82=(struct sType* )come_increment_ref_count(sType_clone(((struct sType* )(__right_value0=map$2char$phsType$ph_operator_load_element(info->types,type_name)))), "06type.nc", 3339, 1560);
            come_call_finalizer(sType_finalize, __dec_obj230,(void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc", 3339, 1559);
            come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "06type.nc}", 3339, 1561);
            if(type_82==((void*)0)) {
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                __right_value2 = (void*)0;
                __dec_obj231=type_82,
                type_82=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "06type.nc", 3342, 1562, "struct sType* "), "06type.nc", 3342, 1563),(char* )come_increment_ref_count(__builtin_string(type_name), "06type.nc", 3342, 1564),(_Bool)0,info,(_Bool)0,0), "06type.nc", 3342, 1566);
                come_call_finalizer(sType_finalize, __dec_obj231,(void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc", 3342, 1565);
            }
            while((_Bool)1) {
                __right_value0 = (void*)0;
                multiple_assign_var9=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                generics_type=(struct sType* )come_increment_ref_count(multiple_assign_var9->v1, "06type.nc", 3346, 1567);
                var_name_119=(char* )come_increment_ref_count(multiple_assign_var9->v2, "06type.nc", 3346, 1568);
                err_120=multiple_assign_var9->v3;
                come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "06type.nc}", 3346, 1569);
                if(!err_120) {
                                        __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    __result_obj__0 = (struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value1=tuple3$3sType$phchar$ph_Bool$_initialize((struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count((struct tuple3$3sType$phchar$ph_Bool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$ph_Bool$)*(1), "06type.nc", 3349, 1570, "struct tuple3$3sType$phchar$ph_Bool$"), "06type.nc", 3349, 1571),(struct sType* )come_increment_ref_count((struct sType* )((void*)0), "06type.nc", 3349, 1572),(char* )come_increment_ref_count((char* )((void*)0), "06type.nc", 3349, 1573),(_Bool)0))), "06type.nc", 3349, 1574);
                    come_call_finalizer(sType_finalize, generics_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 3349, 1575);
                    (var_name_119 = come_decrement_ref_count(var_name_119, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 3349, 1576));
                    (attribute_before = come_decrement_ref_count(attribute_before, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 3349, 1577));
                    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 3349, 1578));
                    ((alignas_) ? alignas_ = come_decrement_ref_count(alignas_, ((struct sNode*)alignas_)->finalize, ((struct sNode*)alignas_)->_protocol_obj, 0, 0,(void*)0, "06type.nc", 3349, 1579):(void*)0);
                    (tag_attribute = come_decrement_ref_count(tag_attribute, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 3349, 1580));
                    (attribute_81 = come_decrement_ref_count(attribute_81, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 3349, 1581));
                    (pointer_attribute = come_decrement_ref_count(pointer_attribute, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 3349, 1582));
                    (tuple_name = come_decrement_ref_count(tuple_name, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 3349, 1583));
                    come_call_finalizer(sType_finalize, type_82, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 3349, 1584);
                    (var_name_83 = come_decrement_ref_count(var_name_83, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 3349, 1585));
                    come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "06type.nc}", 3349, 1586);
                    neo_current_frame = fr.prev;
                    come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "06type.nc}", 3349, 1587);
                    return __result_obj__0;
                }
                list$1sType$ph_push_back(type_82->mGenericsTypes,(struct sType* )come_increment_ref_count(generics_type, "06type.nc", 3352, 1588));
                if(span$1char$p_operator_derefference(info->p)==44) {
                    info->p->p++;
                    skip_spaces_and_lf(info);
                }
                else if(span$1char$p_operator_derefference(info->p)==62) {
                    info->p->p++;
                    skip_spaces_and_lf(info);
                    come_call_finalizer(sType_finalize, generics_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 3362, 1589);
                    (var_name_119 = come_decrement_ref_count(var_name_119, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 3362, 1590));
                    break;
                }
                else {
                    err_msg(info,"invalid generics type(%c)(%c)(%c)",span$1char$p_operator_derefference(info->p),*(info->p->p+1),*(info->p->p+2));
                                        __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    __result_obj__0 = (struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value1=tuple3$3sType$phchar$ph_Bool$_initialize((struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count((struct tuple3$3sType$phchar$ph_Bool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$ph_Bool$)*(1), "06type.nc", 3366, 1591, "struct tuple3$3sType$phchar$ph_Bool$"), "06type.nc", 3366, 1592),(struct sType* )come_increment_ref_count((struct sType* )((void*)0), "06type.nc", 3366, 1593),(char* )come_increment_ref_count((char* )((void*)0), "06type.nc", 3366, 1594),(_Bool)0))), "06type.nc", 3366, 1595);
                    come_call_finalizer(sType_finalize, generics_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 3366, 1596);
                    (var_name_119 = come_decrement_ref_count(var_name_119, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 3366, 1597));
                    (attribute_before = come_decrement_ref_count(attribute_before, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 3366, 1598));
                    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 3366, 1599));
                    ((alignas_) ? alignas_ = come_decrement_ref_count(alignas_, ((struct sNode*)alignas_)->finalize, ((struct sNode*)alignas_)->_protocol_obj, 0, 0,(void*)0, "06type.nc", 3366, 1600):(void*)0);
                    (tag_attribute = come_decrement_ref_count(tag_attribute, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 3366, 1601));
                    (attribute_81 = come_decrement_ref_count(attribute_81, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 3366, 1602));
                    (pointer_attribute = come_decrement_ref_count(pointer_attribute, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 3366, 1603));
                    (tuple_name = come_decrement_ref_count(tuple_name, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 3366, 1604));
                    come_call_finalizer(sType_finalize, type_82, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 3366, 1605);
                    (var_name_83 = come_decrement_ref_count(var_name_83, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 3366, 1606));
                    come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "06type.nc}", 3366, 1607);
                    neo_current_frame = fr.prev;
                    come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "06type.nc}", 3366, 1608);
                    return __result_obj__0;
                }
                come_call_finalizer(sType_finalize, generics_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 3370, 1609);
                (var_name_119 = come_decrement_ref_count(var_name_119, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 3370, 1610));
            }
            expected_generics_num=-1;
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            generics_class=((struct sClass* )(__right_value1=map$2char$phsClass$ph_at(info->generics_classes,((char* )(__right_value0=__builtin_string(type_name))),((void*)0),(_Bool)0)));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "06type.nc", 3371, 1626));
            if(generics_class) {
                expected_generics_num=generics_class->mGenericsNum;
            }
            if(expected_generics_num>=0&&list$1sType$ph_length(type_82->mGenericsTypes)!=expected_generics_num) {
                err_msg(info,"invalid count of generics type arguments. %s requires %d but got %d",type_name,expected_generics_num,list$1sType$ph_length(type_82->mGenericsTypes));
                                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                __result_obj__0 = (struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value1=tuple3$3sType$phchar$ph_Bool$_initialize((struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count((struct tuple3$3sType$phchar$ph_Bool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$ph_Bool$)*(1), "06type.nc", 3377, 1627, "struct tuple3$3sType$phchar$ph_Bool$"), "06type.nc", 3377, 1628),(struct sType* )come_increment_ref_count((struct sType* )((void*)0), "06type.nc", 3377, 1629),(char* )come_increment_ref_count((char* )((void*)0), "06type.nc", 3377, 1630),(_Bool)0))), "06type.nc", 3377, 1631);
                (attribute_before = come_decrement_ref_count(attribute_before, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 3377, 1632));
                (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 3377, 1633));
                ((alignas_) ? alignas_ = come_decrement_ref_count(alignas_, ((struct sNode*)alignas_)->finalize, ((struct sNode*)alignas_)->_protocol_obj, 0, 0,(void*)0, "06type.nc", 3377, 1634):(void*)0);
                (tag_attribute = come_decrement_ref_count(tag_attribute, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 3377, 1635));
                (attribute_81 = come_decrement_ref_count(attribute_81, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 3377, 1636));
                (pointer_attribute = come_decrement_ref_count(pointer_attribute, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 3377, 1637));
                (tuple_name = come_decrement_ref_count(tuple_name, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 3377, 1638));
                come_call_finalizer(sType_finalize, type_82, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 3377, 1639);
                (var_name_83 = come_decrement_ref_count(var_name_83, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 3377, 1640));
                come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "06type.nc}", 3377, 1641);
                neo_current_frame = fr.prev;
                come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "06type.nc}", 3377, 1642);
                return __result_obj__0;
            }
            if(is_contained_generics_class(type_82,info)) {
                __right_value0 = (void*)0;
                __dec_obj232=type_82,
                type_82=(struct sType* )come_increment_ref_count(solve_generics(type_82,info->generics_type,info), "06type.nc", 3381, 1644);
                come_call_finalizer(sType_finalize, __dec_obj232,(void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc", 3381, 1643);
            }
            else {
                if(!output_generics_struct(type_82,type_82,info)) {
                    __right_value0 = (void*)0;
                    new_name=(char* )come_increment_ref_count(create_generics_name(type_82,info), "06type.nc", 3386, 1645);
                    printf("%s %d: output generics is failed(%s)\n",info->sname,info->sline,new_name);
                    exit(7);
                    (new_name = come_decrement_ref_count(new_name, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 3390, 1646));
                }
            }
            apply_type_qualifiers(type_82,constant,complex_,atomic_,thread_local,thread_,alignas_double,register_,unsigned_,noreturn_,volatile_,uniq_,static_,extern_,inline_,restrict_,long_long,long_,short_,norecord,weak_);
            __dec_obj233=type_82->mAlignas,
            type_82->mAlignas=(struct sNode*)come_increment_ref_count(alignas_, "06type.nc", 3393, 1648);
            (__dec_obj233 ? __dec_obj233 = come_decrement_ref_count(__dec_obj233, ((struct sNode*)__dec_obj233)->finalize, ((struct sNode*)__dec_obj233)->_protocol_obj, 0,0, (void*)0, "06type.nc", 3393, 1647) :0);
            type_82->mPointerNum+=pointer_num;
            type_82->mHeap=type_82->mHeap||heap;
            type_82->mChannel=type_82->mChannel||channel;
            type_82->mDefferRightValue=type_82->mDefferRightValue||deffer_;
            __dec_obj234=type_82->mTupleName,
            type_82->mTupleName=(char* )come_increment_ref_count(tuple_name, "06type.nc", 3398, 1650);
            __dec_obj234 = come_decrement_ref_count(__dec_obj234, (void*)0, (void*)0, 0,0, (void*)0, "06type.nc", 3398, 1649);
            __dec_obj235=type_name,
            type_name=(char* )come_increment_ref_count(type_82->mClass->mName, "06type.nc", 3400, 1652);
            __dec_obj235 = come_decrement_ref_count(__dec_obj235, (void*)0, (void*)0, 0,0, (void*)0, "06type.nc", 3400, 1651);
            __right_value0 = (void*)0;
            __dec_obj236=type_82,
            type_82=(struct sType* )come_increment_ref_count(parse_pointer_attribute((struct sType* )come_increment_ref_count(type_82, "06type.nc", 3402, 1653),info), "06type.nc", 3402, 1655);
            come_call_finalizer(sType_finalize, __dec_obj236,(void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc", 3402, 1654);
        }
        else {
            if(struct_) {
                __right_value0 = (void*)0;
                klass_121=((struct sClass* )(__right_value0=map$2char$phsClass$ph_operator_load_element(info->classes,type_name)));
                if(klass_121==((void*)0)&&span$1char$p_operator_derefference(info->p)!=60) {
                    __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    __right_value2 = (void*)0;
                    map$2char$phsClass$ph_insert(info->classes,(char* )come_increment_ref_count(__builtin_string(type_name), "06type.nc", 3409, 1685),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass* )come_increment_ref_count((struct sClass *)come_calloc(1, sizeof(struct sClass )*(1), "06type.nc", 3409, 1686, "struct sClass* "), "06type.nc", 3409, 1688),(char* )come_increment_ref_count(__builtin_string(type_name), "06type.nc", 3409, 1687),(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0), "06type.nc", 3409, 1689),(_Bool)0);
                }
            }
            if(union_) {
                __right_value0 = (void*)0;
                klass_131=((struct sClass* )(__right_value0=map$2char$phsClass$ph_operator_load_element(info->classes,type_name)));
                if(klass_131==((void*)0)&&span$1char$p_operator_derefference(info->p)!=60) {
                    __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    __right_value2 = (void*)0;
                    __right_value3 = (void*)0;
                    map$2char$phsClass$ph_insert(info->classes,(char* )come_increment_ref_count(__builtin_string(type_name), "06type.nc", 3416, 1690),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass* )come_increment_ref_count((struct sClass *)come_calloc(1, sizeof(struct sClass )*(1), "06type.nc", 3416, 1691, "struct sClass* "), "06type.nc", 3416, 1693),(char* )come_increment_ref_count(__builtin_string(type_name), "06type.nc", 3416, 1692),(_Bool)0,(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0), "06type.nc", 3416, 1694),(_Bool)0);
                }
            }
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __dec_obj237=type_82,
            type_82=(struct sType* )come_increment_ref_count(sType_clone(((struct sType* )(__right_value0=map$2char$phsType$ph_operator_load_element(info->types,type_name)))), "06type.nc", 3422, 1696);
            come_call_finalizer(sType_finalize, __dec_obj237,(void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc", 3422, 1695);
            come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "06type.nc}", 3422, 1697);
            if(type_82==((void*)0)) {
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                __right_value2 = (void*)0;
                __dec_obj238=type_82,
                type_82=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "06type.nc", 3425, 1698, "struct sType* "), "06type.nc", 3425, 1699),(char* )come_increment_ref_count(__builtin_string(type_name), "06type.nc", 3425, 1700),(_Bool)0,info,(_Bool)0,0), "06type.nc", 3425, 1702);
                come_call_finalizer(sType_finalize, __dec_obj238,(void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc", 3425, 1701);
            }
            apply_type_qualifiers(type_82,constant,complex_,atomic_,thread_local,thread_,alignas_double,register_,unsigned_,noreturn_,volatile_,uniq_,static_,extern_,inline_,restrict_,long_long,long_,short_,norecord,weak_);
            __dec_obj239=type_82->mAlignas,
            type_82->mAlignas=(struct sNode*)come_increment_ref_count(alignas_, "06type.nc", 3429, 1704);
            (__dec_obj239 ? __dec_obj239 = come_decrement_ref_count(__dec_obj239, ((struct sNode*)__dec_obj239)->finalize, ((struct sNode*)__dec_obj239)->_protocol_obj, 0,0, (void*)0, "06type.nc", 3429, 1703) :0);
            type_82->mPointerNum+=pointer_num;
            type_82->mHeap=type_82->mHeap||heap;
            type_82->mChannel=type_82->mChannel||channel;
            type_82->mDefferRightValue=type_82->mDefferRightValue||deffer_;
            __dec_obj240=type_82->mTupleName,
            type_82->mTupleName=(char* )come_increment_ref_count(tuple_name, "06type.nc", 3434, 1706);
            __dec_obj240 = come_decrement_ref_count(__dec_obj240, (void*)0, (void*)0, 0,0, (void*)0, "06type.nc", 3434, 1705);
        }
        merge_pointer_attribute_to_type(type_82,(char* )come_increment_ref_count(pointer_attribute, "06type.nc", 3437, 1707));
        __right_value0 = (void*)0;
        __dec_obj241=type_82,
        type_82=(struct sType* )come_increment_ref_count(parse_pointer_attribute((struct sType* )come_increment_ref_count(type_82, "06type.nc", 3439, 1708),info), "06type.nc", 3439, 1710);
        come_call_finalizer(sType_finalize, __dec_obj241,(void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc", 3439, 1709);
        if(parse_multiple_type&&span$1char$p_operator_derefference(info->p)==44&&!info->in_offsetof) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            types=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "06type.nc", 3442, 1711, "struct list$1sType$ph*"), "06type.nc", 3442, 1712)), "06type.nc", 3442, 1713);
            __right_value0 = (void*)0;
            list$1sType$ph_push_back(types,(struct sType* )come_increment_ref_count(sType_clone(type_82), "06type.nc", 3444, 1714));
            while(span$1char$p_operator_derefference(info->p)==44) {
                info->p->p++;
                skip_spaces_and_lf(info);
                __right_value0 = (void*)0;
                multiple_assign_var10=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                type2=(struct sType* )come_increment_ref_count(multiple_assign_var10->v1, "06type.nc", 3450, 1715);
                name_132=(char* )come_increment_ref_count(multiple_assign_var10->v2, "06type.nc", 3450, 1716);
                err_133=multiple_assign_var10->v3;
                come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "06type.nc}", 3450, 1717);
                if(!err_133) {
                                        __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    __result_obj__0 = (struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value1=tuple3$3sType$phchar$ph_Bool$_initialize((struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count((struct tuple3$3sType$phchar$ph_Bool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$ph_Bool$)*(1), "06type.nc", 3453, 1718, "struct tuple3$3sType$phchar$ph_Bool$"), "06type.nc", 3453, 1719),(struct sType* )come_increment_ref_count((struct sType* )((void*)0), "06type.nc", 3453, 1720),(char* )come_increment_ref_count((char* )((void*)0), "06type.nc", 3453, 1721),(_Bool)0))), "06type.nc", 3453, 1722);
                    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 3453, 1723);
                    (name_132 = come_decrement_ref_count(name_132, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 3453, 1724));
                    come_call_finalizer(list$1sType$ph$p_finalize, types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 3453, 1725);
                    (attribute_before = come_decrement_ref_count(attribute_before, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 3453, 1726));
                    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 3453, 1727));
                    ((alignas_) ? alignas_ = come_decrement_ref_count(alignas_, ((struct sNode*)alignas_)->finalize, ((struct sNode*)alignas_)->_protocol_obj, 0, 0,(void*)0, "06type.nc", 3453, 1728):(void*)0);
                    (tag_attribute = come_decrement_ref_count(tag_attribute, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 3453, 1729));
                    (attribute_81 = come_decrement_ref_count(attribute_81, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 3453, 1730));
                    (pointer_attribute = come_decrement_ref_count(pointer_attribute, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 3453, 1731));
                    (tuple_name = come_decrement_ref_count(tuple_name, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 3453, 1732));
                    come_call_finalizer(sType_finalize, type_82, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 3453, 1733);
                    (var_name_83 = come_decrement_ref_count(var_name_83, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 3453, 1734));
                    come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "06type.nc}", 3453, 1735);
                    neo_current_frame = fr.prev;
                    come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "06type.nc}", 3453, 1736);
                    return __result_obj__0;
                }
                __right_value0 = (void*)0;
                list$1sType$ph_push_back(types,(struct sType* )come_increment_ref_count(sType_clone(type2), "06type.nc", 3456, 1737));
                come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 3459, 1738);
                (name_132 = come_decrement_ref_count(name_132, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 3459, 1739));
            }
            if(span$1char$p_operator_derefference(info->p)==41) {
                info->p->p++;
                skip_spaces_and_lf(info);
            }
            num_tuples=list$1sType$ph_length(types);
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            __dec_obj242=type_82,
            type_82=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "06type.nc", 3466, 1740, "struct sType* "), "06type.nc", 3466, 1741),(char* )come_increment_ref_count(xsprintf("tuple%d",num_tuples), "06type.nc", 3466, 1742),(_Bool)0,info,(_Bool)0,0), "06type.nc", 3466, 1744);
            come_call_finalizer(sType_finalize, __dec_obj242,(void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc", 3466, 1743);
            type_82->mPointerNum++;
            type_82->mHeap=(_Bool)1;
            for(_o2_saved_3=(struct list$1sType$ph*)come_increment_ref_count(types, "06type.nc", 3470, 1745),it=list$1sType$ph_begin(_o2_saved_3)            ;!list$1sType$ph_end(_o2_saved_3);it=list$1sType$ph_next(_o2_saved_3)){
                __right_value0 = (void*)0;
                list$1sType$ph_push_back(type_82->mGenericsTypes,(struct sType* )come_increment_ref_count((((struct sType* )(__right_value0=sType_clone(it)))), "06type.nc", 3471, 1746));
                come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "}", 3471, 1747);
            }
            __right_value0 = (void*)0;
            __dec_obj243=type_82,
            type_82=(struct sType* )come_increment_ref_count(parse_pointer_attribute((struct sType* )come_increment_ref_count(type_82, "06type.nc", 3474, 1748),info), "06type.nc", 3474, 1750);
            come_call_finalizer(sType_finalize, __dec_obj243,(void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc", 3474, 1749);
            if(is_contained_generics_class(type_82,info)) {
                __right_value0 = (void*)0;
                __dec_obj244=type_82,
                type_82=(struct sType* )come_increment_ref_count(solve_generics(type_82,info->generics_type,info), "06type.nc", 3477, 1752);
                come_call_finalizer(sType_finalize, __dec_obj244,(void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc", 3477, 1751);
            }
            else {
                if(!output_generics_struct(type_82,type_82,info)) {
                    __right_value0 = (void*)0;
                    new_name_134=(char* )come_increment_ref_count(create_generics_name(type_82,info), "06type.nc", 3482, 1753);
                    printf("output generics is failed(%s)\n",new_name_134);
                    exit(9);
                    (new_name_134 = come_decrement_ref_count(new_name_134, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 3486, 1754));
                }
            }
            type_82->mMultipleTypes=(_Bool)1;
            __dec_obj245=type_name,
            type_name=(char* )come_increment_ref_count(type_82->mClass->mName, "06type.nc", 3489, 1756);
            __dec_obj245 = come_decrement_ref_count(__dec_obj245, (void*)0, (void*)0, 0,0, (void*)0, "06type.nc", 3489, 1755);
            come_call_finalizer(list$1sType$ph$p_finalize, types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 3492, 1757);
            come_call_finalizer(list$1sType$ph$p_finalize, _o2_saved_3, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 3492, 1758);
        }
        __right_value0 = (void*)0;
        attribute_135=(char* )come_increment_ref_count(parse_struct_attribute(info,(_Bool)0), "06type.nc", 3492, 1759);
        if(type_82&&string_operator_equals(type_82->mClass->mName,"lambda")&&string_operator_not_equals(attribute_135,"")) {
            if(type_82->mMiddleAttribute!=((void*)0)&&string_operator_not_equals(type_82->mMiddleAttribute,"")) {
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                __right_value2 = (void*)0;
                __dec_obj246=type_82->mMiddleAttribute,
                type_82->mMiddleAttribute=(char* )come_increment_ref_count(string_operator_add(((char* )(__right_value1=string_operator_add(type_82->mMiddleAttribute," "))),attribute_135), "06type.nc", 3496, 1761);
                __dec_obj246 = come_decrement_ref_count(__dec_obj246, (void*)0, (void*)0, 0,0, (void*)0, "06type.nc", 3496, 1760);
                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "06type.nc", 3496, 1762));
            }
            else {
                __dec_obj247=type_82->mMiddleAttribute,
                type_82->mMiddleAttribute=(char* )come_increment_ref_count(attribute_135, "06type.nc", 3499, 1764);
                __dec_obj247 = come_decrement_ref_count(__dec_obj247, (void*)0, (void*)0, 0,0, (void*)0, "06type.nc", 3499, 1763);
            }
            __right_value0 = (void*)0;
            __dec_obj248=attribute_135,
            attribute_135=(char*)come_increment_ref_count(xsprintf(""), "06type.nc", 3501, 1766);
            __dec_obj248 = come_decrement_ref_count(__dec_obj248, (void*)0, (void*)0, 0,0, (void*)0, "06type.nc", 3501, 1765);
        }
        if(!parse_variable_name) {
            append_attribute_to_type(type_82,(char* )come_increment_ref_count(attribute_135, "06type.nc", 3505, 1767),(_Bool)0,info);
        }
        if(parse_variable_name) {
            __right_value0 = (void*)0;
            __dec_obj249=var_name_83,
            var_name_83=(char* )come_increment_ref_count(parse_variable_name_fun(type_82,anonymous_name,var_name_between_brace,(char* )come_increment_ref_count(attribute_135, "06type.nc", 3509, 1768),info), "06type.nc", 3509, 1770);
            __dec_obj249 = come_decrement_ref_count(__dec_obj249, (void*)0, (void*)0, 0,0, (void*)0, "06type.nc", 3509, 1769);
        }
        (attribute_135 = come_decrement_ref_count(attribute_135, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 3512, 1771));
    }
    skip_spaces_and_lf(info);
    array_num_typedef=((void*)0);
    if(list$1sNode$ph_length(type_82->mArrayNum)>0) {
        __right_value0 = (void*)0;
        __dec_obj250=array_num_typedef,
        array_num_typedef=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(type_82->mArrayNum), "06type.nc", 3515, 1773);
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj250,(void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc", 3515, 1772);
        list$1sNode$ph_reset(type_82->mArrayNum);
    }
    while(span$1char$p_operator_derefference(info->p)==91) {
        info->p->p++;
        skip_spaces_and_lf(info);
        array_static=(_Bool)0;
        array_restrict=(_Bool)0;
        while(1) {
            if(parsecmp("static",info)) {
                info->p->p+=strlen("static");
                skip_spaces_and_lf(info);
                array_static=(_Bool)1;
            }
            else if(parsecmp("restrict",info)) {
                info->p->p+=strlen("restrict");
                skip_spaces_and_lf(info);
                array_restrict=(_Bool)1;
            }
            else {
                break;
            }
        }
        skip_pointer_attribute(info);
        if(span$1char$p_operator_derefference(info->p)==93) {
            info->p->p++;
            skip_spaces_and_lf(info);
            type_82->mArrayPointerType=(_Bool)1;
            break;
        }
        skip_spaces_and_lf(info);
        __right_value0 = (void*)0;
        node_136=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "06type.nc", 3555, 1775);
        list$1sNode$ph_push_back(type_82->mArrayNum,(struct sNode*)come_increment_ref_count(node_136, "06type.nc", 3556, 1776));
        list$1int$_push_back(type_82->mArrayStatic,array_static);
        list$1int$_push_back(type_82->mArrayRestrict,array_restrict);
        expected_next_character(93,info);
        ((node_136) ? node_136 = come_decrement_ref_count(node_136, ((struct sNode*)node_136)->finalize, ((struct sNode*)node_136)->_protocol_obj, 0, 0,(void*)0, "06type.nc", 3563, 1783):(void*)0);
    }
    if(array_num_typedef) {
        ({        __current_stack2__.info = &info;
        __current_stack2__.parse_variable_name = &parse_variable_name;
        __current_stack2__.parse_multiple_type = &parse_multiple_type;
        __current_stack2__.in_function_parametor = &in_function_parametor;
        __current_stack2__.head = &head;
        __current_stack2__.head_sline = &head_sline;
        __current_stack2__.attribute_before = &attribute_before;
        __current_stack2__.type_name = &type_name;
        __current_stack2__.norecord = &norecord;
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
        __current_stack2__.noreturn_ = &noreturn_;
        __current_stack2__.weak_ = &weak_;
        __current_stack2__.alignas_ = &alignas_;
        __current_stack2__.alignas_double = &alignas_double;
        __current_stack2__.tag_attribute = &tag_attribute;
        __current_stack2__.struct_define_parsed = &struct_define_parsed;
        __current_stack2__.anonymous_type = &anonymous_type;
        __current_stack2__.anonymous_name = &anonymous_name;
        __current_stack2__.atomic_ = &atomic_;
        __current_stack2__.thread_local = &thread_local;
        __current_stack2__.thread_ = &thread_;
        __current_stack2__.attribute_81 = &attribute_81;
        __current_stack2__.pointer_num = &pointer_num;
        __current_stack2__.pointer_attribute = &pointer_attribute;
        __current_stack2__.heap = &heap;
        __current_stack2__.refference = &refference;
        __current_stack2__.no_refference = &no_refference;
        __current_stack2__.channel = &channel;
        __current_stack2__.deffer_ = &deffer_;
        __current_stack2__.any_class = &any_class;
        __current_stack2__.vtable = &vtable;
        __current_stack2__.tuple_name = &tuple_name;
        __current_stack2__.lambda_flag = &lambda_flag;
        __current_stack2__.type_82 = &type_82;
        __current_stack2__.var_name_83 = &var_name_83;
        __current_stack2__.function_pointer_flag = &function_pointer_flag;
        __current_stack2__.pointer_to_array_flag = &pointer_to_array_flag;
        __current_stack2__.var_name_between_brace = &var_name_between_brace;
        __current_stack2__.array_num_typedef = &array_num_typedef;
        })        ,        list$1sNode$ph_each(type_82->mArrayNum,&__current_stack2__,(void*)method_block2_06typenc);
        list$1sNode$ph_reset(type_82->mArrayNum);
        ({        __current_stack3__.info = &info;
        __current_stack3__.parse_variable_name = &parse_variable_name;
        __current_stack3__.parse_multiple_type = &parse_multiple_type;
        __current_stack3__.in_function_parametor = &in_function_parametor;
        __current_stack3__.head = &head;
        __current_stack3__.head_sline = &head_sline;
        __current_stack3__.attribute_before = &attribute_before;
        __current_stack3__.type_name = &type_name;
        __current_stack3__.norecord = &norecord;
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
        __current_stack3__.noreturn_ = &noreturn_;
        __current_stack3__.weak_ = &weak_;
        __current_stack3__.alignas_ = &alignas_;
        __current_stack3__.alignas_double = &alignas_double;
        __current_stack3__.tag_attribute = &tag_attribute;
        __current_stack3__.struct_define_parsed = &struct_define_parsed;
        __current_stack3__.anonymous_type = &anonymous_type;
        __current_stack3__.anonymous_name = &anonymous_name;
        __current_stack3__.atomic_ = &atomic_;
        __current_stack3__.thread_local = &thread_local;
        __current_stack3__.thread_ = &thread_;
        __current_stack3__.attribute_81 = &attribute_81;
        __current_stack3__.pointer_num = &pointer_num;
        __current_stack3__.pointer_attribute = &pointer_attribute;
        __current_stack3__.heap = &heap;
        __current_stack3__.refference = &refference;
        __current_stack3__.no_refference = &no_refference;
        __current_stack3__.channel = &channel;
        __current_stack3__.deffer_ = &deffer_;
        __current_stack3__.any_class = &any_class;
        __current_stack3__.vtable = &vtable;
        __current_stack3__.tuple_name = &tuple_name;
        __current_stack3__.lambda_flag = &lambda_flag;
        __current_stack3__.type_82 = &type_82;
        __current_stack3__.var_name_83 = &var_name_83;
        __current_stack3__.function_pointer_flag = &function_pointer_flag;
        __current_stack3__.pointer_to_array_flag = &pointer_to_array_flag;
        __current_stack3__.var_name_between_brace = &var_name_between_brace;
        __current_stack3__.array_num_typedef = &array_num_typedef;
        })        ,        list$1sNode$ph_each(array_num_typedef,&__current_stack3__,(void*)method_block3_06typenc);
    }
    __right_value0 = (void*)0;
    multiple_assign_var11=((struct tuple2$2char$phchar$ph*)(__right_value0=parse_attribute(info)));
    asm_name_139=(char* )come_increment_ref_count(multiple_assign_var11->v1, "06type.nc", 3572, 1788);
    attribute2=(char* )come_increment_ref_count(multiple_assign_var11->v2, "06type.nc", 3572, 1789);
    come_call_finalizer(tuple2$2char$phchar$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "06type.nc}", 3572, 1790);
    append_attribute_to_type(type_82,(char* )come_increment_ref_count(attribute2, "06type.nc", 3574, 1791),parse_variable_name,info);
    __dec_obj251=type_82->mAsmName,
    type_82->mAsmName=(char* )come_increment_ref_count(asm_name_139, "06type.nc", 3576, 1793);
    __dec_obj251 = come_decrement_ref_count(__dec_obj251, (void*)0, (void*)0, 0,0, (void*)0, "06type.nc", 3576, 1792);
    skip_spaces_and_lf(info);
    if(type_82->mChannel) {
        __right_value0 = (void*)0;
        type_before=(struct sType* )come_increment_ref_count(sType_clone(type_82), "06type.nc", 3581, 1794);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        __dec_obj252=type_82,
        type_82=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "06type.nc", 3582, 1795, "struct sType* "), "06type.nc", 3582, 1796),(char*)come_increment_ref_count(xsprintf("int"), "06type.nc", 3582, 1797),(_Bool)0,info,(_Bool)0,0), "06type.nc", 3582, 1799);
        come_call_finalizer(sType_finalize, __dec_obj252,(void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc", 3582, 1798);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        __right_value3 = (void*)0;
        __dec_obj253=type_82->mArrayNum,
        type_82->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count((__list_values1__[0]=((struct sNode*)(__right_value1=create_int_node((char*)come_increment_ref_count(xsprintf("2"), "06type.nc", 3583, 1800),info))),
list$1sNode$ph_initialize_with_values((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "06type.nc", 3583, 1805, "struct list$1sNode$ph"), "06type.nc", 3583, 1806),1,__list_values1__)), "06type.nc", 3583, 1808);
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj253,(void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc", 3583, 1807);
        __dec_obj254=type_82->mChannelType,
        type_82->mChannelType=(struct sType* )come_increment_ref_count(type_before, "06type.nc", 3584, 1810);
        come_call_finalizer(sType_finalize, __dec_obj254,(void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc", 3584, 1809);
        type_82->mChannel=(_Bool)1;
        come_call_finalizer(sType_finalize, type_before, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 3588, 1811);
    }
    if(type_82&&string_operator_equals(type_82->mClass->mName,"lambda")&&string_operator_not_equals(attribute_81,"")) {
        if(type_82->mMiddleAttribute!=((void*)0)&&string_operator_not_equals(type_82->mMiddleAttribute,"")) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            __dec_obj255=type_82->mMiddleAttribute,
            type_82->mMiddleAttribute=(char* )come_increment_ref_count(string_operator_add(((char* )(__right_value1=string_operator_add(type_82->mMiddleAttribute," "))),attribute_81), "06type.nc", 3590, 1813);
            __dec_obj255 = come_decrement_ref_count(__dec_obj255, (void*)0, (void*)0, 0,0, (void*)0, "06type.nc", 3590, 1812);
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "06type.nc", 3590, 1814));
        }
        else {
            __dec_obj256=type_82->mMiddleAttribute,
            type_82->mMiddleAttribute=(char* )come_increment_ref_count(attribute_81, "06type.nc", 3593, 1816);
            __dec_obj256 = come_decrement_ref_count(__dec_obj256, (void*)0, (void*)0, 0,0, (void*)0, "06type.nc", 3593, 1815);
        }
        __right_value0 = (void*)0;
        __dec_obj257=attribute_81,
        attribute_81=(char*)come_increment_ref_count(xsprintf(""), "06type.nc", 3595, 1818);
        __dec_obj257 = come_decrement_ref_count(__dec_obj257, (void*)0, (void*)0, 0,0, (void*)0, "06type.nc", 3595, 1817);
    }
    append_attribute_to_type(type_82,(char* )come_increment_ref_count(attribute_81, "06type.nc", 3597, 1819),parse_variable_name,info);
        __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __result_obj__0 = (struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value1=tuple3$3sType$phchar$ph_Bool$_initialize((struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count((struct tuple3$3sType$phchar$ph_Bool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$ph_Bool$)*(1), "06type.nc", 3599, 1820, "struct tuple3$3sType$phchar$ph_Bool$"), "06type.nc", 3599, 1821),(struct sType* )come_increment_ref_count(type_82, "06type.nc", 3599, 1822),(char* )come_increment_ref_count(var_name_83, "06type.nc", 3599, 1823),(_Bool)1))), "06type.nc", 3599, 1824);
    (attribute_before = come_decrement_ref_count(attribute_before, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 3599, 1825));
    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 3599, 1826));
    ((alignas_) ? alignas_ = come_decrement_ref_count(alignas_, ((struct sNode*)alignas_)->finalize, ((struct sNode*)alignas_)->_protocol_obj, 0, 0,(void*)0, "06type.nc", 3599, 1827):(void*)0);
    (tag_attribute = come_decrement_ref_count(tag_attribute, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 3599, 1828));
    (attribute_81 = come_decrement_ref_count(attribute_81, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 3599, 1829));
    (pointer_attribute = come_decrement_ref_count(pointer_attribute, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 3599, 1830));
    (tuple_name = come_decrement_ref_count(tuple_name, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 3599, 1831));
    come_call_finalizer(sType_finalize, type_82, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 3599, 1832);
    (var_name_83 = come_decrement_ref_count(var_name_83, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 3599, 1833));
    come_call_finalizer(list$1sNode$ph$p_finalize, array_num_typedef, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 3599, 1834);
    (asm_name_139 = come_decrement_ref_count(asm_name_139, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 3599, 1835));
    (attribute2 = come_decrement_ref_count(attribute2, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 3599, 1836));
    come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "06type.nc}", 3599, 1837);
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "06type.nc}", 3599, 1838);
    return __result_obj__0;
}

static int list$1char$ph_length(struct list$1char$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_length"; neo_current_frame = &fr;
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return 0;
    }
        neo_current_frame = fr.prev;
    return self->len;
                neo_current_frame = fr.prev;
}

static char*  list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph$p_operator_load_element"; neo_current_frame = &fr;
    char*  default_value  ;
    char*  __result_obj__0  ;
    struct list_item$1char$ph* it;
    int i;
    char*  default_value_102  ;
    if(self==((void*)0)) {
        memset(&default_value,0,sizeof(char* ));
                __result_obj__0 = (char* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 2148, 1277);
        (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 2148, 1278));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 2148, 1279));
        return __result_obj__0;
        (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 2151, 1280));
    }
    if(position<0) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(it!=((void*)0)) {
        if(position==i) {
                        __result_obj__0 = (char* )come_increment_ref_count(it->item, "/usr/local/include/neo-c.h", 2159, 1281);
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 2159, 1282));
            return __result_obj__0;
        }
        it=it->next;
        i++;
    }
    memset(&default_value_102,0,sizeof(char* ));
        __result_obj__0 = (char* )come_increment_ref_count(default_value_102, "/usr/local/include/neo-c.h", 2167, 1283);
    (default_value_102 = come_decrement_ref_count(default_value_102, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 2167, 1284));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 2167, 1285));
    return __result_obj__0;
}

static char*  list$1char$ph_operator_load_element(struct list$1char$ph* self, int position)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_operator_load_element"; neo_current_frame = &fr;
    char*  default_value  ;
    char*  __result_obj__0  ;
    struct list_item$1char$ph* it;
    int i;
    char*  default_value_103  ;
    if(self==((void*)0)) {
        memset(&default_value,0,sizeof(char* ));
                __result_obj__0 = (char* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 2148, 1286);
        (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 2148, 1287));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 2148, 1288));
        return __result_obj__0;
        (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 2151, 1289));
    }
    if(position<0) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(it!=((void*)0)) {
        if(position==i) {
                        __result_obj__0 = (char* )come_increment_ref_count(it->item, "/usr/local/include/neo-c.h", 2159, 1290);
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 2159, 1291));
            return __result_obj__0;
        }
        it=it->next;
        i++;
    }
    memset(&default_value_103,0,sizeof(char* ));
        __result_obj__0 = (char* )come_increment_ref_count(default_value_103, "/usr/local/include/neo-c.h", 2167, 1292);
    (default_value_103 = come_decrement_ref_count(default_value_103, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 2167, 1293));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 2167, 1294));
    return __result_obj__0;
}

static struct list$1sNode$ph* list$1sNode$ph_each(struct list$1sNode$ph* self, void* parent, void (*block)(void*,struct sNode*,int,_Bool*))
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_each"; neo_current_frame = &fr;
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
        end_flag=(_Bool)0;
        block(parent,(struct sNode*)come_increment_ref_count(it->item, "/usr/local/include/neo-c.h", 1731, 1364),i,&end_flag);
        if(end_flag==(_Bool)1) {
            break;
        }
        it=it->next;
        i++;
    }
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

void method_block1_06typenc(struct __current_stack1__* parent, struct sNode* it, int it2, _Bool* it3)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "method_block1_06typenc"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    list$1sNode$ph_add((*(parent->type_82))->mArrayNum,(struct sNode*)come_increment_ref_count(sNode_clone(it), "06type.nc", 3084, 1365));
    ((it) ? it = come_decrement_ref_count(it, ((struct sNode*)it)->finalize, ((struct sNode*)it)->_protocol_obj, 0, 0,(void*)0, "06type.nc", 3087, 1366):(void*)0);
                neo_current_frame = fr.prev;
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
                __result_obj__0 = (struct buffer* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3513, 1468);
        come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3513, 1469);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3513, 1470);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char* )key))%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if(string_equals(self->keys[it],key)) {
                                __result_obj__0 = (struct buffer* )come_increment_ref_count(self->items[it], "/usr/local/include/neo-c.h", 3524, 1471);
                come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3524, 1472);
                neo_current_frame = fr.prev;
                come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3524, 1473);
                return __result_obj__0;
            }
            it++;
            if(it>=self->size) {
                it=0;
            }
            else if(it==hash) {
                                __result_obj__0 = (struct buffer* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3533, 1474);
                come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3533, 1475);
                neo_current_frame = fr.prev;
                come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3533, 1476);
                return __result_obj__0;
            }
        }
        else {
                        __result_obj__0 = (struct buffer* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3537, 1477);
            come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3537, 1478);
            neo_current_frame = fr.prev;
            come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3537, 1479);
            return __result_obj__0;
        }
    }
        __result_obj__0 = (struct buffer* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3541, 1480);
    come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3541, 1481);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3541, 1482);
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
                __result_obj__0 = (struct buffer* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3513, 1483);
        come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3513, 1484);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3513, 1485);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char* )key))%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if(string_equals(self->keys[it],key)) {
                                __result_obj__0 = (struct buffer* )come_increment_ref_count(self->items[it], "/usr/local/include/neo-c.h", 3524, 1486);
                come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3524, 1487);
                neo_current_frame = fr.prev;
                come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3524, 1488);
                return __result_obj__0;
            }
            it++;
            if(it>=self->size) {
                it=0;
            }
            else if(it==hash) {
                                __result_obj__0 = (struct buffer* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3533, 1489);
                come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3533, 1490);
                neo_current_frame = fr.prev;
                come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3533, 1491);
                return __result_obj__0;
            }
        }
        else {
                        __result_obj__0 = (struct buffer* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3537, 1492);
            come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3537, 1493);
            neo_current_frame = fr.prev;
            come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3537, 1494);
            return __result_obj__0;
        }
    }
        __result_obj__0 = (struct buffer* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3541, 1495);
    come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3541, 1496);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3541, 1497);
    return __result_obj__0;
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

static struct sClass*  map$2char$phsClass$ph_at(struct map$2char$phsClass$ph* self, char*  key  , struct sClass*  default_value  , _Bool by_pointer)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsClass$ph_at"; neo_current_frame = &fr;
    struct sClass*  __result_obj__0  ;
    unsigned int hash;
    unsigned int it;
    if(self==((void*)0)) {
                __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3139, 1611);
        come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3139, 1612);
        neo_current_frame = fr.prev;
        come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3139, 1613);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char* )key))%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if((!by_pointer&&string_equals(self->keys[it],key))||(by_pointer&&self->keys[it]==key)) {
                                __result_obj__0 = (struct sClass* )come_increment_ref_count(self->items[it], "/usr/local/include/neo-c.h", 3150, 1614);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3150, 1615);
                neo_current_frame = fr.prev;
                come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3150, 1616);
                return __result_obj__0;
            }
            it++;
            if(it>=self->size) {
                it=0;
            }
            else if(it==hash) {
                                __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3159, 1617);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3159, 1618);
                neo_current_frame = fr.prev;
                come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3159, 1619);
                return __result_obj__0;
            }
        }
        else {
                        __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3163, 1620);
            come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3163, 1621);
            neo_current_frame = fr.prev;
            come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3163, 1622);
            return __result_obj__0;
        }
    }
        __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3167, 1623);
    come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3167, 1624);
    neo_current_frame = fr.prev;
    come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3167, 1625);
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

static struct map$2char$phsClass$ph* map$2char$phsClass$ph_insert(struct map$2char$phsClass$ph* self, char*  key  , struct sClass*  item  , _Bool by_pointer)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsClass$ph_insert"; neo_current_frame = &fr;
    struct map$2char$phsClass$ph* __result_obj__0;
    unsigned int hash;
    unsigned int it;
    _Bool same_key_exist;
    char*  it2  ;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3346, 1656));
        come_call_finalizer(sClass_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3346, 1657);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len*10>=self->size) {
        map$2char$phsClass$ph_rehash(self);
    }
    hash=string_get_hash_key(((char* )key))%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if((!by_pointer&&string_equals(self->keys[it],key))||(by_pointer&&self->keys[it]==key)) {
                if(1) {
                    list$1char$ph_remove(self->key_list,self->keys[it],(_Bool)0);
                    (self->keys[it] = come_decrement_ref_count(self->keys[it], (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3362, 1676));
                    self->keys[it]=(char* )come_increment_ref_count(key, "/usr/local/include/neo-c.h", 3363, 1677);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it],(_Bool)0);
                    self->keys[it]=key;
                }
                if(1) {
                    come_call_finalizer(sClass_finalize, self->items[it], (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3370, 1678);
                    self->items[it]=(struct sClass* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 3371, 1679);
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
                self->keys[it]=(char* )come_increment_ref_count(key, "/usr/local/include/neo-c.h", 3393, 1680);
            }
            else {
                self->keys[it]=key;
            }
            if(1) {
                self->items[it]=(struct sClass* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 3399, 1681);
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
        list$1char$ph_push_back(self->key_list,(char* )come_increment_ref_count(key, "/usr/local/include/neo-c.h", 3419, 1682));
    }
        __result_obj__0 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3422, 1683));
    come_call_finalizer(sClass_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3422, 1684);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void map$2char$phsClass$ph_rehash(struct map$2char$phsClass$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsClass$ph_rehash"; neo_current_frame = &fr;
    int size;
    void* __right_value0 = (void*)0;
    char**  keys  ;
    struct sClass**  items  ;
    _Bool* item_existance;
    int len;
    char*  it  ;
    struct sClass*  default_value  ;
    struct sClass*  it2  ;
    unsigned int hash;
    int n;
    struct sClass*  default_value_124  ;
    size=self->size*10;
    keys=(char** )come_increment_ref_count(((char** )(__right_value0=(char* *)come_calloc(1, sizeof(char* )*(1*(size)), "/usr/local/include/neo-c.h", 3270, 1658, "char** "))), "/usr/local/include/neo-c.h", 3270, 1659);
    __right_value0 = (void*)0;
    items=(struct sClass** )come_increment_ref_count(((struct sClass** )(__right_value0=(struct sClass* *)come_calloc(1, sizeof(struct sClass* )*(1*(size)), "/usr/local/include/neo-c.h", 3271, 1660, "struct sClass** "))), "/usr/local/include/neo-c.h", 3271, 1661);
    __right_value0 = (void*)0;
    item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value0=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size)), "/usr/local/include/neo-c.h", 3272, 1662, "_Bool*"))), "/usr/local/include/neo-c.h", 3272, 1663);
    len=0;
    for(it=map$2char$phsClass$ph_begin(self)    ;!map$2char$phsClass$ph_end(self);it=map$2char$phsClass$ph_next(self)){
        memset(&default_value,0,sizeof(struct sClass* ));
        __right_value0 = (void*)0;
        it2=(struct sClass* )come_increment_ref_count(map$2char$phsClass$ph_at(self,it,(struct sClass* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3279, 1664),(_Bool)0), "/usr/local/include/neo-c.h", 3279, 1665);
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
                memset(&default_value_124,0,sizeof(struct sClass* ));
                __right_value0 = (void*)0;
                items[n]=((struct sClass* )(__right_value0=map$2char$phsClass$ph_at(self,it,(struct sClass* )come_increment_ref_count(default_value_124, "/usr/local/include/neo-c.h", 3302, 1666),(_Bool)0)));
                len++;
                come_call_finalizer(sClass_finalize, default_value_124, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3305, 1667);
                break;
                come_call_finalizer(sClass_finalize, default_value_124, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3307, 1668);
            }
        }
        come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3310, 1669);
        come_call_finalizer(sClass_finalize, it2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3310, 1670);
    }
    come_free((char*)self->items);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3311, 1671));
    come_free((char*)self->keys);
    self->keys=keys;
    self->items=items;
    self->item_existance=item_existance;
    self->size=size;
    self->len=len;
            neo_current_frame = fr.prev;
}

static char*  map$2char$phsClass$ph_begin(struct map$2char$phsClass$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsClass$ph_begin"; neo_current_frame = &fr;
    char*  result  ;
    char*  __result_obj__0  ;
    char*  result_122  ;
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
    memset(&result_122,0,sizeof(char* ));
        __result_obj__0 = result_122;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static _Bool map$2char$phsClass$ph_end(struct map$2char$phsClass$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsClass$ph_end"; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
        neo_current_frame = fr.prev;
}

static char*  map$2char$phsClass$ph_next(struct map$2char$phsClass$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsClass$ph_next"; neo_current_frame = &fr;
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
    struct list_item$1char$ph* it_125;
    int i_126;
    struct list_item$1char$ph* prev_it_127;
    struct list_item$1char$ph* it_128;
    struct list_item$1char$ph* head_prev_it;
    struct list_item$1char$ph* tail_it;
    int i_129;
    struct list_item$1char$ph* prev_it_130;
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
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1932, 1673);
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
        it_125=self->head;
        i_126=0;
        while(it_125!=((void*)0)) {
            if(i_126==head) {
                self->tail=it_125->prev;
                self->tail->next=((void*)0);
            }
            if(i_126>=head) {
                prev_it_127=it_125;
                it_125=it_125->next;
                i_126++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_127, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1962, 1674);
                self->len--;
            }
            else {
                it_125=it_125->next;
                i_126++;
            }
        }
    }
    else {
        it_128=self->head;
        head_prev_it=((void*)0);
        tail_it=((void*)0);
        i_129=0;
        while(it_128!=((void*)0)) {
            if(i_129==head) {
                head_prev_it=it_128->prev;
            }
            if(i_129==tail) {
                tail_it=it_128;
            }
            if(i_129>=head&&i_129<tail) {
                prev_it_130=it_128;
                it_128=it_128->next;
                i_129++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_130, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1995, 1675);
                self->len--;
            }
            else {
                it_128=it_128->next;
                i_129++;
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
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1854, 1672);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct list$1sNode$ph* list$1sNode$ph_reset(struct list$1sNode$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_reset"; neo_current_frame = &fr;
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
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1854, 1774);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct list$1int$* list$1int$_push_back(struct list$1int$* self, int item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$_push_back"; neo_current_frame = &fr;
    struct list$1int$* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1int$* litem;
    struct list_item$1int$* litem_137;
    struct list_item$1int$* litem_138;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/neo-c.h", 1617, 1777, "struct list_item$1int$*"))), "/usr/local/include/neo-c.h", 1617, 1778);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        litem->item=item;
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_137=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/neo-c.h", 1627, 1779, "struct list_item$1int$*"))), "/usr/local/include/neo-c.h", 1627, 1780);
        litem_137->prev=self->head;
        litem_137->next=((void*)0);
        litem_137->item=item;
        self->tail=litem_137;
        self->head->next=litem_137;
    }
    else {
        __right_value0 = (void*)0;
        litem_138=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/neo-c.h", 1637, 1781, "struct list_item$1int$*"))), "/usr/local/include/neo-c.h", 1637, 1782);
        litem_138->prev=self->tail;
        litem_138->next=((void*)0);
        litem_138->item=item;
        self->tail->next=litem_138;
        self->tail=litem_138;
    }
    self->len++;
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

void method_block2_06typenc(struct __current_stack2__* parent, struct sNode* it, int it2, _Bool* it3)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "method_block2_06typenc"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    list$1sNode$ph_add((*(parent->type_82))->mVarNameArrayNum,(struct sNode*)come_increment_ref_count(sNode_clone(it), "06type.nc", 3566, 1784));
    ((it) ? it = come_decrement_ref_count(it, ((struct sNode*)it)->finalize, ((struct sNode*)it)->_protocol_obj, 0, 0,(void*)0, "06type.nc", 3569, 1785):(void*)0);
            neo_current_frame = fr.prev;
}

void method_block3_06typenc(struct __current_stack3__* parent, struct sNode* it, int it2, _Bool* it3)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "method_block3_06typenc"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    list$1sNode$ph_add((*(parent->type_82))->mArrayNum,(struct sNode*)come_increment_ref_count(sNode_clone(it), "06type.nc", 3570, 1786));
    ((it) ? it = come_decrement_ref_count(it, ((struct sNode*)it)->finalize, ((struct sNode*)it)->_protocol_obj, 0, 0,(void*)0, "06type.nc", 3573, 1787):(void*)0);
            neo_current_frame = fr.prev;
}

static struct list$1sNode$ph* list$1sNode$ph_initialize_with_values(struct list$1sNode$ph* self, int num_value, struct sNode** values)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_initialize_with_values"; neo_current_frame = &fr;
    int i;
    struct list$1sNode$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(i=0    ;i<num_value;i++){
        list$1sNode$ph_push_back(self,(struct sNode*)come_increment_ref_count(values[i], "/usr/local/include/neo-c.h", 1492, 1801));
    }
        __result_obj__0 = (struct list$1sNode$ph*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 1495, 1802);
    come_call_finalizer(list$1sNode$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1495, 1803);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1495, 1804);
    return __result_obj__0;
}

void show_type(struct sType*  type  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "show_type"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    puts(((char* )(__right_value0=make_come_type_name_string(type,info))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "06type.nc", 3604, 1839));
    neo_current_frame = fr.prev;
}

_Bool is_pointer_type(struct sType*  type  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "is_pointer_type"; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return type->mPointerNum>0||type->mArrayPointerNum>0||type->mArrayPointerType;
    neo_current_frame = fr.prev;
}

_Bool is_arithmetic_type(struct sType*  type  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "is_arithmetic_type"; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return type->mClass->mNumber||type->mClass->mFloat||type->mClass->mEnum;
    neo_current_frame = fr.prev;
}

_Bool is_integer_type(struct sType*  type  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "is_integer_type"; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return (type->mClass->mNumber&&!type->mClass->mFloat)||type->mClass->mEnum;
    neo_current_frame = fr.prev;
}

_Bool is_null_pointer_constant(struct CVALUE*  come_value  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "is_null_pointer_constant"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  s  ;
    _Bool __result_obj__0;
    if(come_value==((void*)0)||come_value->c_value==((void*)0)) {
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    s=(char* )come_increment_ref_count(__builtin_string(come_value->c_value), "06type.nc", 3627, 1840);
    if(string_operator_equals(s,"0")||string_operator_equals(s,"NULL")||string_operator_equals(s,"nullptr")) {
                __result_obj__0 = (_Bool)1;
        (s = come_decrement_ref_count(s, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 3629, 1841));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(string_index(s,"(void*)0",-1)!=-1||string_index(s,"((void*)0)",-1)!=-1) {
                __result_obj__0 = (_Bool)1;
        (s = come_decrement_ref_count(s, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 3632, 1842));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(string_index(s,"NULL",-1)!=-1) {
                __result_obj__0 = (_Bool)1;
        (s = come_decrement_ref_count(s, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 3635, 1843));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(string_index(s,"0x0",-1)!=-1) {
                __result_obj__0 = (_Bool)1;
        (s = come_decrement_ref_count(s, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 3638, 1844));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
        __result_obj__0 = (_Bool)0;
    (s = come_decrement_ref_count(s, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 3640, 1845));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

_Bool is_generic_void_pointer_compatible(struct sType*  left_type  , struct sType*  right_type  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "is_generic_void_pointer_compatible"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  left_type_name  ;
    char*  right_type_name  ;
    int left_generic_pos;
    int right_generic_pos;
    _Bool __result_obj__0;
    char*  left_wrapper  ;
    char*  right_wrapper  ;
    _Bool left_void_generic;
    _Bool right_void_generic;
    if(left_type==((void*)0)||right_type==((void*)0)) {
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    left_type_name=(char* )come_increment_ref_count(make_come_type_name_string(left_type,info), "06type.nc", 3648, 1846);
    __right_value0 = (void*)0;
    right_type_name=(char* )come_increment_ref_count(make_come_type_name_string(right_type,info), "06type.nc", 3649, 1847);
    left_generic_pos=string_index(left_type_name,"<",-1);
    right_generic_pos=string_index(right_type_name,"<",-1);
    if(left_generic_pos<=0||right_generic_pos<=0) {
                __result_obj__0 = (_Bool)0;
        (left_type_name = come_decrement_ref_count(left_type_name, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 3654, 1848));
        (right_type_name = come_decrement_ref_count(right_type_name, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 3654, 1849));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    left_wrapper=(char* )come_increment_ref_count(charp_substring(left_type_name,0,left_generic_pos), "06type.nc", 3657, 1850);
    __right_value0 = (void*)0;
    right_wrapper=(char* )come_increment_ref_count(charp_substring(right_type_name,0,right_generic_pos), "06type.nc", 3658, 1851);
    if(string_operator_not_equals(left_wrapper,right_wrapper)) {
                __result_obj__0 = (_Bool)0;
        (left_type_name = come_decrement_ref_count(left_type_name, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 3660, 1852));
        (right_type_name = come_decrement_ref_count(right_type_name, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 3660, 1853));
        (left_wrapper = come_decrement_ref_count(left_wrapper, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 3660, 1854));
        (right_wrapper = come_decrement_ref_count(right_wrapper, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 3660, 1855));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    left_void_generic=string_index(left_type_name,"<void",-1)>=0;
    right_void_generic=string_index(right_type_name,"<void",-1)>=0;
        __result_obj__0 = left_void_generic||right_void_generic;
    (left_type_name = come_decrement_ref_count(left_type_name, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 3666, 1856));
    (right_type_name = come_decrement_ref_count(right_type_name, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 3666, 1857));
    (left_wrapper = come_decrement_ref_count(left_wrapper, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 3666, 1858));
    (right_wrapper = come_decrement_ref_count(right_wrapper, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 3666, 1859));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

_Bool is_span_class_name(const char* class_name, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "is_span_class_name"; neo_current_frame = &fr;
    if(class_name==((void*)0)) {
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
        neo_current_frame = fr.prev;
    return charp_operator_equals(class_name,"span")||(strlen(class_name)>5&&memcmp(class_name,"span$",5)==0);
    neo_current_frame = fr.prev;
}

_Bool is_generic_placeholder_class_name(const char* class_name, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "is_generic_placeholder_class_name"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  name  ;
    _Bool __result_obj__0;
    if(class_name==((void*)0)) {
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    name=(char* )come_increment_ref_count(__builtin_string(class_name), "06type.nc", 3683, 1860);
        __result_obj__0 = string_index(name,"__generics_type",-1)>=0||string_index(name,"__mgenerics_type",-1)>=0;
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 3685, 1861));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

_Bool is_generic_placeholder_type(struct sType*  type  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "is_generic_placeholder_type"; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return type!=((void*)0)&&type->mClass!=((void*)0)&&is_generic_placeholder_class_name(type->mClass->mName,info);
    neo_current_frame = fr.prev;
}

_Bool is_span_wrapper_compatible(struct sType*  left_type  , struct sType*  right_type  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "is_span_wrapper_compatible"; neo_current_frame = &fr;
    if(left_type==((void*)0)||right_type==((void*)0)||left_type->mClass==((void*)0)||right_type->mClass==((void*)0)) {
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
        neo_current_frame = fr.prev;
    return is_span_class_name(left_type->mClass->mName,info)&&is_span_class_name(right_type->mClass->mName,info);
    neo_current_frame = fr.prev;
}

_Bool is_transparent_union_type(struct sType*  type  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "is_transparent_union_type"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  attr  ;
    _Bool __result_obj__0;
    if(type==((void*)0)||type->mClass==((void*)0)||!type->mClass->mUnion) {
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    if(type->mClass->mAttribute==((void*)0)) {
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    attr=(char* )come_increment_ref_count(__builtin_string(type->mClass->mAttribute), "06type.nc", 3714, 1862);
        __result_obj__0 = string_index(attr,"transparent_union",-1)>=0;
    (attr = come_decrement_ref_count(attr, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 3715, 1863));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

_Bool pointer_attr_has_word(struct sType*  type  , const char* word, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "pointer_attr_has_word"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  s  ;
    _Bool __result_obj__0;
    if(type==((void*)0)||type->mPointerAttribute==((void*)0)||string_operator_equals(type->mPointerAttribute,"")) {
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    s=(char* )come_increment_ref_count(__builtin_string(type->mPointerAttribute), "06type.nc", 3723, 1864);
        __result_obj__0 = string_index(s,word,-1)!=-1;
    (s = come_decrement_ref_count(s, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 3724, 1865));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

_Bool pointer_attr_has_restrict(struct sType*  type  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "pointer_attr_has_restrict"; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return pointer_attr_has_word(type,"restrict",info);
    neo_current_frame = fr.prev;
}

_Bool pointer_attr_has_const(struct sType*  type  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "pointer_attr_has_const"; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return pointer_attr_has_word(type,"const",info);
    neo_current_frame = fr.prev;
}

_Bool pointer_attr_has_volatile(struct sType*  type  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "pointer_attr_has_volatile"; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return pointer_attr_has_word(type,"volatile",info);
    neo_current_frame = fr.prev;
}

_Bool is_empty_attribute(char*  attr  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "is_empty_attribute"; neo_current_frame = &fr;
    _Bool __result_obj__0;
        __result_obj__0 = attr==((void*)0)||string_operator_equals(attr,"");
    (attr = come_decrement_ref_count(attr, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 3744, 1866));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

_Bool is_same_attribute(char*  left_attr  , char*  right_attr  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "is_same_attribute"; neo_current_frame = &fr;
    _Bool __result_obj__0;
    if(is_empty_attribute((char* )come_increment_ref_count(left_attr, "06type.nc", 3749, 1867),info)&&is_empty_attribute((char* )come_increment_ref_count(right_attr, "06type.nc", 3749, 1868),info)) {
                __result_obj__0 = (_Bool)1;
        (left_attr = come_decrement_ref_count(left_attr, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 3750, 1869));
        (right_attr = come_decrement_ref_count(right_attr, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 3750, 1870));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(is_empty_attribute((char* )come_increment_ref_count(left_attr, "06type.nc", 3752, 1871),info)||is_empty_attribute((char* )come_increment_ref_count(right_attr, "06type.nc", 3752, 1872),info)) {
                __result_obj__0 = (_Bool)0;
        (left_attr = come_decrement_ref_count(left_attr, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 3753, 1873));
        (right_attr = come_decrement_ref_count(right_attr, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 3753, 1874));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
        __result_obj__0 = string_operator_equals(left_attr,right_attr);
    (left_attr = come_decrement_ref_count(left_attr, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 3755, 1875));
    (right_attr = come_decrement_ref_count(right_attr, (void*)0, (void*)0, 0, 0, (void*)0, "06type.nc", 3755, 1876));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sType*  expand_typedef_for_assign(struct sType*  type  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "expand_typedef_for_assign"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sType*  result  ;
    int guard;
    struct sType*  orig  ;
    int ptr;
    _Bool suppress_ptr_restore;
    _Bool suppress_array_restore;
    int array_ptr;
    struct list$1sNode$ph* __dec_obj258;
    char*  __dec_obj259  ;
    char*  __dec_obj260  ;
    char*  __dec_obj261  ;
    struct list$1sType$ph* __dec_obj262;
    struct sType*  __dec_obj263  ;
    struct sType*  __dec_obj264  ;
    struct sType*  __result_obj__0  ;
    result=(struct sType* )come_increment_ref_count(sType_clone(type), "06type.nc", 3760, 1877);
    guard=0;
    while(result->mTypedefOriginalType&&guard<16) {
        __right_value0 = (void*)0;
        orig=(struct sType* )come_increment_ref_count(sType_clone(result->mTypedefOriginalType), "06type.nc", 3763, 1878);
        ptr=result->mPointerNum;
        suppress_ptr_restore=result->mOriginalLoadVarType!=((void*)0)&&result->mPointerNum==0;
        suppress_array_restore=result->mOriginalLoadVarType!=((void*)0)&&result->mPointerNum==0&&result->mArrayPointerNum==0&&!result->mArrayPointerType&&list$1sNode$ph_length(result->mArrayNum)==0;
        if(!suppress_ptr_restore&&ptr==0&&orig->mPointerNum>0) {
            ptr=orig->mPointerNum;
        }
        orig->mPointerNum=ptr;
        array_ptr=result->mArrayPointerNum;
        if(!suppress_array_restore&&array_ptr==0&&orig->mArrayPointerNum>0) {
            array_ptr=orig->mArrayPointerNum;
        }
        orig->mArrayPointerNum=array_ptr;
        if(result->mArrayPointerType) {
            orig->mArrayPointerType=(_Bool)1;
        }
        else if(suppress_array_restore) {
            orig->mArrayPointerType=(_Bool)0;
        }
        if(list$1sNode$ph_length(result->mArrayNum)>0) {
            __right_value0 = (void*)0;
            __dec_obj258=orig->mArrayNum,
            orig->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(result->mArrayNum), "06type.nc", 3790, 1880);
            come_call_finalizer(list$1sNode$ph_finalize, __dec_obj258,(void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc", 3790, 1879);
        }
        else if(suppress_array_restore) {
            list$1sNode$ph_reset(orig->mArrayNum);
        }
        orig->mConstant=result->mConstant;
        orig->mVolatile=result->mVolatile;
        orig->mRestrict=result->mRestrict;
        orig->mUnsigned=result->mUnsigned;
        orig->mShort=result->mShort;
        orig->mLong=result->mLong;
        orig->mLongLong=result->mLongLong;
        orig->mComplex=result->mComplex;
        orig->mAtomic=result->mAtomic;
        orig->mHeap=result->mHeap;
        orig->mNoHeap=result->mNoHeap;
        orig->mRefference=result->mRefference;
        orig->mOptional=result->mOptional;
        orig->mDefferRightValue=result->mDefferRightValue;
        __dec_obj259=orig->mPointerAttribute,
        orig->mPointerAttribute=(char* )come_increment_ref_count(result->mPointerAttribute, "06type.nc", 3811, 1882);
        __dec_obj259 = come_decrement_ref_count(__dec_obj259, (void*)0, (void*)0, 0,0, (void*)0, "06type.nc", 3811, 1881);
        __dec_obj260=orig->mAttribute,
        orig->mAttribute=(char* )come_increment_ref_count(result->mAttribute, "06type.nc", 3812, 1884);
        __dec_obj260 = come_decrement_ref_count(__dec_obj260, (void*)0, (void*)0, 0,0, (void*)0, "06type.nc", 3812, 1883);
        __dec_obj261=orig->mVarAttribute,
        orig->mVarAttribute=(char* )come_increment_ref_count(result->mVarAttribute, "06type.nc", 3813, 1886);
        __dec_obj261 = come_decrement_ref_count(__dec_obj261, (void*)0, (void*)0, 0,0, (void*)0, "06type.nc", 3813, 1885);
        if(list$1sType$ph_length(result->mGenericsTypes)>0) {
            __right_value0 = (void*)0;
            __dec_obj262=orig->mGenericsTypes,
            orig->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(result->mGenericsTypes), "06type.nc", 3816, 1888);
            come_call_finalizer(list$1sType$ph_finalize, __dec_obj262,(void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc", 3816, 1887);
        }
        if(result->mNoSolvedGenericsType) {
            __right_value0 = (void*)0;
            __dec_obj263=orig->mNoSolvedGenericsType,
            orig->mNoSolvedGenericsType=(struct sType* )come_increment_ref_count(sType_clone(result->mNoSolvedGenericsType), "06type.nc", 3819, 1890);
            come_call_finalizer(sType_finalize, __dec_obj263,(void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc", 3819, 1889);
        }
        __right_value0 = (void*)0;
        __dec_obj264=result,
        result=(struct sType* )come_increment_ref_count(sType_clone(orig), "06type.nc", 3822, 1892);
        come_call_finalizer(sType_finalize, __dec_obj264,(void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc", 3822, 1891);
        guard++;
        come_call_finalizer(sType_finalize, orig, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 3826, 1893);
    }
        __result_obj__0 = (struct sType* )come_increment_ref_count(result, "06type.nc", 3826, 1894);
    come_call_finalizer(sType_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "06type.nc}", 3826, 1895);
    neo_current_frame = fr.prev;
    come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "06type.nc}", 3826, 1896);
    return __result_obj__0;
}

_Bool is_parent_class_of(struct sClass*  parent  , struct sClass*  child  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "is_parent_class_of"; neo_current_frame = &fr;
    struct sClass*  klass  ;
    void* __right_value0 = (void*)0;
    if(parent==((void*)0)||child==((void*)0)) {
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    klass=child;
    while(klass) {
        if(string_operator_equals(klass->mName,parent->mName)) {
                        neo_current_frame = fr.prev;
            return (_Bool)1;
        }
        if(klass->mParentClassName) {
            klass=((struct sClass* )(__right_value0=map$2char$phsClass$ph_operator_load_element(info->classes,klass->mParentClassName)));
        }
        else {
            klass=((void*)0);
        }
    }
        neo_current_frame = fr.prev;
    return (_Bool)0;
    neo_current_frame = fr.prev;
}

_Bool is_same_type_ignoring_qualifier(struct sType*  left_type  , struct sType*  right_type  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "is_same_type_ignoring_qualifier"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sType*  left_type2  ;
    struct sType*  right_type2  ;
    _Bool use_original;
    struct sType*  __dec_obj265  ;
    _Bool use_original_140;
    struct sType*  __dec_obj266  ;
    struct sType*  __dec_obj267  ;
    struct sType*  __dec_obj268  ;
    _Bool __result_obj__0;
    int i;
    struct sType*  left_g  ;
    struct sType*  right_g  ;
    int i_143;
    struct sType*  lparam  ;
    struct sType*  rparam  ;
    if(left_type==((void*)0)||right_type==((void*)0)) {
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    left_type2=(struct sType* )come_increment_ref_count(sType_clone(left_type), "06type.nc", 3855, 1897);
    __right_value0 = (void*)0;
    right_type2=(struct sType* )come_increment_ref_count(sType_clone(right_type), "06type.nc", 3856, 1898);
    if(left_type2->mOriginalLoadVarType) {
        use_original=left_type2->mArrayPointerNum>0&&list$1sNode$ph_length(left_type2->mArrayNum)==0&&left_type2->mPointerNum==0;
        if(use_original) {
            __right_value0 = (void*)0;
            __dec_obj265=left_type2,
            left_type2=(struct sType* )come_increment_ref_count(sType_clone(left_type2->mOriginalLoadVarType), "06type.nc", 3863, 1900);
            come_call_finalizer(sType_finalize, __dec_obj265,(void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc", 3863, 1899);
        }
    }
    if(right_type2->mOriginalLoadVarType) {
        use_original_140=right_type2->mArrayPointerNum>0&&list$1sNode$ph_length(right_type2->mArrayNum)==0&&right_type2->mPointerNum==0;
        if(use_original_140) {
            __right_value0 = (void*)0;
            __dec_obj266=right_type2,
            right_type2=(struct sType* )come_increment_ref_count(sType_clone(right_type2->mOriginalLoadVarType), "06type.nc", 3871, 1902);
            come_call_finalizer(sType_finalize, __dec_obj266,(void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc", 3871, 1901);
        }
    }
    __right_value0 = (void*)0;
    __dec_obj267=left_type2,
    left_type2=(struct sType* )come_increment_ref_count(expand_typedef_for_assign(left_type2,info), "06type.nc", 3875, 1904);
    come_call_finalizer(sType_finalize, __dec_obj267,(void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc", 3875, 1903);
    __right_value0 = (void*)0;
    __dec_obj268=right_type2,
    right_type2=(struct sType* )come_increment_ref_count(expand_typedef_for_assign(right_type2,info), "06type.nc", 3876, 1906);
    come_call_finalizer(sType_finalize, __dec_obj268,(void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc", 3876, 1905);
    if(is_generic_placeholder_type(left_type2,info)||is_generic_placeholder_type(right_type2,info)) {
                __result_obj__0 = (_Bool)1;
        come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 3880, 1907);
        come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 3880, 1908);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(list$1sNode$ph_length(left_type2->mArrayNum)==0) {
        if(left_type2->mArrayPointerType) {
            left_type2->mPointerNum++;
            left_type2->mArrayPointerType=(_Bool)0;
        }
        if(left_type2->mPointerNum==0&&left_type2->mArrayPointerNum>0) {
            left_type2->mPointerNum=left_type2->mArrayPointerNum;
            left_type2->mArrayPointerNum=0;
        }
    }
    if(list$1sNode$ph_length(right_type2->mArrayNum)==0) {
        if(right_type2->mArrayPointerType) {
            right_type2->mPointerNum++;
            right_type2->mArrayPointerType=(_Bool)0;
        }
        if(right_type2->mPointerNum==0&&right_type2->mArrayPointerNum>0) {
            right_type2->mPointerNum=right_type2->mArrayPointerNum;
            right_type2->mArrayPointerNum=0;
        }
    }
    if(string_operator_not_equals(left_type2->mClass->mName,right_type2->mClass->mName)) {
                __result_obj__0 = (_Bool)0;
        come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 3907, 1909);
        come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 3907, 1910);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(left_type2->mPointerNum!=right_type2->mPointerNum) {
                __result_obj__0 = (_Bool)0;
        come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 3911, 1911);
        come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 3911, 1912);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(left_type2->mArrayPointerNum!=right_type2->mArrayPointerNum) {
                __result_obj__0 = (_Bool)0;
        come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 3914, 1913);
        come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 3914, 1914);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(left_type2->mArrayPointerType!=right_type2->mArrayPointerType) {
                __result_obj__0 = (_Bool)0;
        come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 3917, 1915);
        come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 3917, 1916);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(left_type2->mUnsigned!=right_type2->mUnsigned) {
                __result_obj__0 = (_Bool)0;
        come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 3921, 1917);
        come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 3921, 1918);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(left_type2->mShort!=right_type2->mShort) {
                __result_obj__0 = (_Bool)0;
        come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 3924, 1919);
        come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 3924, 1920);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(left_type2->mLong!=right_type2->mLong) {
                __result_obj__0 = (_Bool)0;
        come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 3927, 1921);
        come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 3927, 1922);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(left_type2->mLongLong!=right_type2->mLongLong) {
                __result_obj__0 = (_Bool)0;
        come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 3930, 1923);
        come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 3930, 1924);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(left_type2->mComplex!=right_type2->mComplex) {
                __result_obj__0 = (_Bool)0;
        come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 3933, 1925);
        come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 3933, 1926);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(left_type2->mAtomic!=right_type2->mAtomic) {
                __result_obj__0 = (_Bool)0;
        come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 3936, 1927);
        come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 3936, 1928);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(list$1sType$ph_length(left_type2->mGenericsTypes)!=list$1sType$ph_length(right_type2->mGenericsTypes)) {
                __result_obj__0 = (_Bool)0;
        come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 3940, 1929);
        come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 3940, 1930);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    for(i=0    ;i<list$1sType$ph_length(left_type2->mGenericsTypes);i++){
        __right_value0 = (void*)0;
        left_g=((struct sType* )(__right_value0=list$1sType$ph_operator_load_element(left_type2->mGenericsTypes,i)));
        __right_value0 = (void*)0;
        right_g=((struct sType* )(__right_value0=list$1sType$ph_operator_load_element(right_type2->mGenericsTypes,i)));
        if(!is_same_type_ignoring_qualifier(left_g,right_g,info)) {
                        __result_obj__0 = (_Bool)0;
            come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 3946, 1949);
            come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 3946, 1950);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
    }
    if(string_operator_equals(left_type2->mClass->mName,"lambda")) {
        if(left_type2->mVarArgs!=right_type2->mVarArgs) {
                        __result_obj__0 = (_Bool)0;
            come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 3952, 1951);
            come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 3952, 1952);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        if(list$1sType$ph_length(left_type2->mParamTypes)!=list$1sType$ph_length(right_type2->mParamTypes)) {
                        __result_obj__0 = (_Bool)0;
            come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 3955, 1953);
            come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 3955, 1954);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        if(!is_same_type_ignoring_qualifier(left_type2->mResultType,right_type2->mResultType,info)) {
                        __result_obj__0 = (_Bool)0;
            come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 3958, 1955);
            come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 3958, 1956);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        for(i_143=0        ;i_143<list$1sType$ph_length(left_type2->mParamTypes);i_143++){
            __right_value0 = (void*)0;
            lparam=((struct sType* )(__right_value0=list$1sType$ph_operator_load_element(left_type2->mParamTypes,i_143)));
            __right_value0 = (void*)0;
            rparam=((struct sType* )(__right_value0=list$1sType$ph_operator_load_element(right_type2->mParamTypes,i_143)));
            if(!is_same_type_ignoring_qualifier(lparam,rparam,info)) {
                                __result_obj__0 = (_Bool)0;
                come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 3964, 1957);
                come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 3964, 1958);
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
        }
        if(left_type2->mFunctionPointerNum!=right_type2->mFunctionPointerNum) {
                        __result_obj__0 = (_Bool)0;
            come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 3968, 1959);
            come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 3968, 1960);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
    }
        __result_obj__0 = (_Bool)1;
    come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 3972, 1961);
    come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 3972, 1962);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sType*  list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph$p_operator_load_element"; neo_current_frame = &fr;
    struct sType*  default_value  ;
    struct sType*  __result_obj__0  ;
    struct list_item$1sType$ph* it;
    int i;
    struct sType*  default_value_141  ;
    if(self==((void*)0)) {
        memset(&default_value,0,sizeof(struct sType* ));
                __result_obj__0 = (struct sType* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 2148, 1931);
        come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2148, 1932);
        neo_current_frame = fr.prev;
        come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2148, 1933);
        return __result_obj__0;
        come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 2151, 1934);
    }
    if(position<0) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(it!=((void*)0)) {
        if(position==i) {
                        __result_obj__0 = (struct sType* )come_increment_ref_count(it->item, "/usr/local/include/neo-c.h", 2159, 1935);
            neo_current_frame = fr.prev;
            come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2159, 1936);
            return __result_obj__0;
        }
        it=it->next;
        i++;
    }
    memset(&default_value_141,0,sizeof(struct sType* ));
        __result_obj__0 = (struct sType* )come_increment_ref_count(default_value_141, "/usr/local/include/neo-c.h", 2167, 1937);
    come_call_finalizer(sType_finalize, default_value_141, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2167, 1938);
    neo_current_frame = fr.prev;
    come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2167, 1939);
    return __result_obj__0;
}

static struct sType*  list$1sType$ph_operator_load_element(struct list$1sType$ph* self, int position)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_operator_load_element"; neo_current_frame = &fr;
    struct sType*  default_value  ;
    struct sType*  __result_obj__0  ;
    struct list_item$1sType$ph* it;
    int i;
    struct sType*  default_value_142  ;
    if(self==((void*)0)) {
        memset(&default_value,0,sizeof(struct sType* ));
                __result_obj__0 = (struct sType* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 2148, 1940);
        come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2148, 1941);
        neo_current_frame = fr.prev;
        come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2148, 1942);
        return __result_obj__0;
        come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 2151, 1943);
    }
    if(position<0) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(it!=((void*)0)) {
        if(position==i) {
                        __result_obj__0 = (struct sType* )come_increment_ref_count(it->item, "/usr/local/include/neo-c.h", 2159, 1944);
            neo_current_frame = fr.prev;
            come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2159, 1945);
            return __result_obj__0;
        }
        it=it->next;
        i++;
    }
    memset(&default_value_142,0,sizeof(struct sType* ));
        __result_obj__0 = (struct sType* )come_increment_ref_count(default_value_142, "/usr/local/include/neo-c.h", 2167, 1946);
    come_call_finalizer(sType_finalize, default_value_142, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2167, 1947);
    neo_current_frame = fr.prev;
    come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2167, 1948);
    return __result_obj__0;
}

_Bool is_same_base_type_ignoring_qualifier(struct sType*  left_type  , struct sType*  right_type  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "is_same_base_type_ignoring_qualifier"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sType*  left_type2  ;
    struct sType*  right_type2  ;
    _Bool use_original;
    struct sType*  __dec_obj269  ;
    _Bool use_original_144;
    struct sType*  __dec_obj270  ;
    _Bool __result_obj__0;
    left_type2=(struct sType* )come_increment_ref_count(sType_clone(left_type), "06type.nc", 3977, 1963);
    __right_value0 = (void*)0;
    right_type2=(struct sType* )come_increment_ref_count(sType_clone(right_type), "06type.nc", 3978, 1964);
    if(left_type2->mOriginalLoadVarType) {
        use_original=left_type2->mArrayPointerNum>0&&list$1sNode$ph_length(left_type2->mArrayNum)==0&&left_type2->mPointerNum==0;
        if(use_original) {
            __right_value0 = (void*)0;
            __dec_obj269=left_type2,
            left_type2=(struct sType* )come_increment_ref_count(sType_clone(left_type2->mOriginalLoadVarType), "06type.nc", 3985, 1966);
            come_call_finalizer(sType_finalize, __dec_obj269,(void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc", 3985, 1965);
        }
    }
    if(right_type2->mOriginalLoadVarType) {
        use_original_144=right_type2->mArrayPointerNum>0&&list$1sNode$ph_length(right_type2->mArrayNum)==0&&right_type2->mPointerNum==0;
        if(use_original_144) {
            __right_value0 = (void*)0;
            __dec_obj270=right_type2,
            right_type2=(struct sType* )come_increment_ref_count(sType_clone(right_type2->mOriginalLoadVarType), "06type.nc", 3993, 1968);
            come_call_finalizer(sType_finalize, __dec_obj270,(void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc", 3993, 1967);
        }
    }
    left_type2->mPointerNum=0;
    left_type2->mArrayPointerNum=0;
    left_type2->mArrayPointerType=(_Bool)0;
    list$1sNode$ph_reset(left_type2->mArrayNum);
    left_type2->mConstant=(_Bool)0;
    left_type2->mVolatile=(_Bool)0;
    left_type2->mRestrict=(_Bool)0;
    right_type2->mPointerNum=0;
    right_type2->mArrayPointerNum=0;
    right_type2->mArrayPointerType=(_Bool)0;
    list$1sNode$ph_reset(right_type2->mArrayNum);
    right_type2->mConstant=(_Bool)0;
    right_type2->mVolatile=(_Bool)0;
    right_type2->mRestrict=(_Bool)0;
        __result_obj__0 = is_same_type_ignoring_qualifier(left_type2,right_type2,info);
    come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 4013, 1969);
    come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 4013, 1970);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

_Bool check_assign_type_safe(const char* msg, struct sType*  left_type  , struct sType*  right_type  , struct CVALUE*  come_value  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "check_assign_type_safe"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sType*  left_type2  ;
    _Bool use_original;
    struct sType*  tmp  ;
    struct sType*  __dec_obj271  ;
    struct sType*  right_type2  ;
    _Bool use_original_145;
    struct sType*  tmp_146  ;
    struct sType*  __dec_obj272  ;
    struct sType*  __dec_obj273  ;
    struct sType*  __dec_obj274  ;
    _Bool __result_obj__0;
    _Bool left_lambda;
    _Bool right_lambda;
    _Bool left_ptr;
    _Bool right_ptr;
    _Bool left_array;
    _Bool right_array;
    int left_ptr_num;
    int right_ptr_num;
    _Bool left_void;
    _Bool right_void;
    _Bool explicit_cast_value;
    _Bool left_void_ptr;
    _Bool right_void_ptr;
    _Bool right_const;
    _Bool left_const;
    _Bool right_volatile;
    _Bool left_volatile;
    _Bool right_restrict;
    _Bool left_restrict;
    _Bool parent_class;
    struct sClass*  klass  ;
    int left_ptr_num_147;
    _Bool right_heap_pointer;
    _Bool return_type_check;
    _Bool typedef_array_decay_scalar;
    if(left_type==((void*)0)||right_type==((void*)0)) {
        warning_msg(info,"invalid assign type(type is null). %s",msg);
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    if(left_type->mClass==((void*)0)||right_type->mClass==((void*)0)) {
        warning_msg(info,"invalid assign type(class is null). %s",msg);
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    left_type2=(struct sType* )come_increment_ref_count(sType_clone(left_type), "06type.nc", 4027, 1971);
    if(left_type2->mOriginalLoadVarType) {
        use_original=left_type2->mArrayPointerNum>0&&list$1sNode$ph_length(left_type2->mArrayNum)==0&&left_type2->mPointerNum==0;
        if(use_original) {
            tmp=(struct sType* )come_increment_ref_count(left_type2->mOriginalLoadVarType, "06type.nc", 4033, 1972);
            __right_value0 = (void*)0;
            __dec_obj271=left_type2,
            left_type2=(struct sType* )come_increment_ref_count(sType_clone(tmp), "06type.nc", 4034, 1974);
            come_call_finalizer(sType_finalize, __dec_obj271,(void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc", 4034, 1973);
            come_call_finalizer(sType_finalize, tmp, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 4036, 1975);
        }
    }
    __right_value0 = (void*)0;
    right_type2=(struct sType* )come_increment_ref_count(sType_clone(right_type), "06type.nc", 4037, 1976);
    if(right_type2->mOriginalLoadVarType) {
        use_original_145=right_type2->mArrayPointerNum>0&&list$1sNode$ph_length(right_type2->mArrayNum)==0&&right_type2->mPointerNum==0;
        if(use_original_145) {
            tmp_146=(struct sType* )come_increment_ref_count(right_type2->mOriginalLoadVarType, "06type.nc", 4043, 1977);
            __right_value0 = (void*)0;
            __dec_obj272=right_type2,
            right_type2=(struct sType* )come_increment_ref_count(sType_clone(tmp_146), "06type.nc", 4044, 1979);
            come_call_finalizer(sType_finalize, __dec_obj272,(void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc", 4044, 1978);
            come_call_finalizer(sType_finalize, tmp_146, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 4046, 1980);
        }
    }
    __right_value0 = (void*)0;
    __dec_obj273=left_type2,
    left_type2=(struct sType* )come_increment_ref_count(expand_typedef_for_assign(left_type2,info), "06type.nc", 4047, 1982);
    come_call_finalizer(sType_finalize, __dec_obj273,(void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc", 4047, 1981);
    __right_value0 = (void*)0;
    __dec_obj274=right_type2,
    right_type2=(struct sType* )come_increment_ref_count(expand_typedef_for_assign(right_type2,info), "06type.nc", 4048, 1984);
    come_call_finalizer(sType_finalize, __dec_obj274,(void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc", 4048, 1983);
    if(left_type2->mClass==((void*)0)||right_type2->mClass==((void*)0)) {
        warning_msg(info,"invalid assign type(expanded class is null). %s",msg);
                __result_obj__0 = (_Bool)0;
        come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 4052, 1985);
        come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 4052, 1986);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(left_type2->mHeap&&!right_type2->mHeap&&!(right_type2->mPointerNum==1&&string_operator_equals(right_type2->mClass->mName,"void"))) {
        err_msg(info,"invalid heap assignment");
        show_type(left_type2,info);
        show_type(right_type2,info);
    }
    left_lambda=string_operator_equals(left_type2->mClass->mName,"lambda");
    right_lambda=string_operator_equals(right_type2->mClass->mName,"lambda");
    if(left_lambda||right_lambda) {
                __result_obj__0 = (_Bool)1;
        come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 4066, 1987);
        come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 4066, 1988);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(is_transparent_union_type(left_type2,info)&&!right_type2->mClass->mStruct&&!right_type2->mClass->mUnion) {
                __result_obj__0 = (_Bool)1;
        come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 4073, 1989);
        come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 4073, 1990);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    left_ptr=is_pointer_type(left_type2,info);
    right_ptr=is_pointer_type(right_type2,info);
    left_array=list$1sNode$ph_length(left_type2->mArrayNum)>0&&left_type2->mPointerNum==0&&left_type2->mArrayPointerNum==0;
    right_array=list$1sNode$ph_length(right_type2->mArrayNum)>0&&right_type2->mPointerNum==0&&right_type2->mArrayPointerNum==0;
    if(left_array&&right_array) {
        if(is_same_base_type_ignoring_qualifier(left_type2,right_type2,info)) {
                        __result_obj__0 = (_Bool)1;
            come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 4088, 1991);
            come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 4088, 1992);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        err_msg(info,"invalid array base type. %s",msg);
        show_type(left_type2,info);
        show_type(right_type2,info);
                __result_obj__0 = (_Bool)0;
        come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 4093, 1993);
        come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 4093, 1994);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(left_ptr||right_ptr||right_array) {
        if(left_ptr&&(right_ptr||right_array)) {
            left_ptr_num=left_type2->mPointerNum+(((left_type2->mPointerNum==0)?(left_type2->mArrayPointerNum):(0)))+(((left_type2->mArrayPointerType)?(1):(0)));
            right_ptr_num=right_type2->mPointerNum+(((right_type2->mPointerNum==0)?(right_type2->mArrayPointerNum):(0)))+(((right_type2->mArrayPointerType)?(1):(0)))+(((right_array)?(1):(0)));
            left_void=string_operator_equals(left_type2->mClass->mName,"void");
            right_void=string_operator_equals(right_type2->mClass->mName,"void");
            explicit_cast_value=come_value!=((void*)0)&&come_value->mCastValue;
            left_void_ptr=left_void&&left_ptr_num==1;
            right_void_ptr=right_void&&right_ptr_num==1;
            if(left_ptr_num!=right_ptr_num&&!(left_void_ptr||right_void_ptr)) {
                warning_msg(info,"invalid pointer level. %s",msg);
                show_type(left_type2,info);
                show_type(right_type2,info);
                                __result_obj__0 = (_Bool)0;
                come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 4116, 1995);
                come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 4116, 1996);
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
            if(!explicit_cast_value) {
                right_const=right_type2->mConstant||pointer_attr_has_const(right_type2,info);
                left_const=left_type2->mConstant||pointer_attr_has_const(left_type2,info);
                if(right_const&&!left_const) {
                    warning_msg(info,"invalid const pointer assign. %s",msg);
                    show_type(left_type2,info);
                    show_type(right_type2,info);
                                        __result_obj__0 = (_Bool)0;
                    come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 4126, 1997);
                    come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 4126, 1998);
                    neo_current_frame = fr.prev;
                    return __result_obj__0;
                }
                right_volatile=right_type2->mVolatile||pointer_attr_has_volatile(right_type2,info);
                left_volatile=left_type2->mVolatile||pointer_attr_has_volatile(left_type2,info);
                if(right_volatile&&!left_volatile) {
                    warning_msg(info,"invalid volatile pointer assign. %s",msg);
                    show_type(left_type2,info);
                    show_type(right_type2,info);
                                        __result_obj__0 = (_Bool)0;
                    come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 4134, 1999);
                    come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 4134, 2000);
                    neo_current_frame = fr.prev;
                    return __result_obj__0;
                }
                right_restrict=right_type2->mRestrict||pointer_attr_has_restrict(right_type2,info);
                left_restrict=left_type2->mRestrict||pointer_attr_has_restrict(left_type2,info);
                if(right_restrict&&!left_restrict) {
                    warning_msg(info,"invalid restrict pointer assign. %s",msg);
                    show_type(left_type2,info);
                    show_type(right_type2,info);
                                        __result_obj__0 = (_Bool)0;
                    come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 4142, 2001);
                    come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 4142, 2002);
                    neo_current_frame = fr.prev;
                    return __result_obj__0;
                }
            }
            if(left_void||right_void) {
                                __result_obj__0 = (_Bool)1;
                come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 4167, 2003);
                come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 4167, 2004);
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
            parent_class=(_Bool)0;
            if(string_operator_not_equals(left_type2->mClass->mName,right_type2->mClass->mName)) {
                klass=right_type2->mClass;
                while(klass) {
                    if(string_operator_equals(klass->mName,left_type2->mClass->mName)) {
                        parent_class=(_Bool)1;
                        break;
                    }
                    if(klass->mParentClassName) {
                        __right_value0 = (void*)0;
                        klass=((struct sClass* )(__right_value0=map$2char$phsClass$ph_operator_load_element(info->classes,klass->mParentClassName)));
                    }
                    else {
                        klass=((void*)0);
                    }
                }
            }
            if(parent_class) {
                if(left_ptr_num>1) {
                    warning_msg(info,"invalid pointer level. %s",msg);
                    show_type(left_type2,info);
                    show_type(right_type2,info);
                                        __result_obj__0 = (_Bool)0;
                    come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 4192, 2005);
                    come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 4192, 2006);
                    neo_current_frame = fr.prev;
                    return __result_obj__0;
                }
                                __result_obj__0 = (_Bool)1;
                come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 4194, 2007);
                come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 4194, 2008);
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
            if(!is_same_base_type_ignoring_qualifier(left_type2,right_type2,info)) {
                if(is_span_wrapper_compatible(left_type2,right_type2,info)) {
                                        __result_obj__0 = (_Bool)1;
                    come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 4199, 2009);
                    come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 4199, 2010);
                    neo_current_frame = fr.prev;
                    return __result_obj__0;
                }
                if(!is_generic_void_pointer_compatible(left_type2,right_type2,info)) {
                    err_msg(info,"invalid pointer base type. %s",msg);
                    show_type(left_type2,info);
                    show_type(right_type2,info);
                                        __result_obj__0 = (_Bool)0;
                    come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 4205, 2011);
                    come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 4205, 2012);
                    neo_current_frame = fr.prev;
                    return __result_obj__0;
                }
            }
                        __result_obj__0 = (_Bool)1;
            come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 4208, 2013);
            come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 4208, 2014);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        else if(left_ptr&&!(right_ptr||right_array)) {
            left_ptr_num_147=left_type2->mPointerNum+(((left_type2->mPointerNum==0)?(left_type2->mArrayPointerNum):(0)))+(((left_type2->mArrayPointerType)?(1):(0)));
            right_heap_pointer=right_type2->mHeap&&right_type2->mPointerNum==0&&right_type2->mArrayPointerNum==0&&!right_type2->mArrayPointerType&&list$1sNode$ph_length(right_type2->mArrayNum)==0;
            if(right_heap_pointer&&left_ptr_num_147==1&&is_same_base_type_ignoring_qualifier(left_type2,right_type2,info)) {
                                __result_obj__0 = (_Bool)1;
                come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 4223, 2015);
                come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 4223, 2016);
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
            if(is_integer_type(right_type2,info)&&is_null_pointer_constant(come_value,info)) {
                                __result_obj__0 = (_Bool)1;
                come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 4226, 2017);
                come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 4226, 2018);
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
            warning_msg(info,"invalid assign pointer from non-pointer. %s",msg);
            show_type(left_type2,info);
            show_type(right_type2,info);
                        __result_obj__0 = (_Bool)0;
            come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 4231, 2019);
            come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 4231, 2020);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        else if(!left_ptr&&(right_ptr||right_array)) {
            __right_value0 = (void*)0;
            return_type_check=string_index(((char* )(__right_value0=__builtin_string(msg))),"result type",-1)==0;
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "06type.nc", 4234, 2021));
            typedef_array_decay_scalar=return_type_check&&left_type2->mPointerNum==0&&left_type2->mArrayPointerNum==0&&list$1sNode$ph_length(left_type2->mArrayNum)==0&&right_type2->mPointerNum==0&&right_type2->mArrayPointerNum>0&&list$1sNode$ph_length(right_type2->mArrayNum)==0&&!right_type2->mArrayPointerType&&right_type2->mOriginalTypeName!=((void*)0)&&string_operator_not_equals(right_type2->mOriginalTypeName,"")&&is_same_base_type_ignoring_qualifier(left_type2,right_type2,info);
            if(typedef_array_decay_scalar) {
                                __result_obj__0 = (_Bool)1;
                come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 4247, 2022);
                come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 4247, 2023);
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
            if(list$1sNode$ph_length(left_type2->mArrayNum)>0&&list$1sNode$ph_length(right_type2->mArrayNum)>0) {
                if(is_same_base_type_ignoring_qualifier(left_type2,right_type2,info)) {
                                        __result_obj__0 = (_Bool)1;
                    come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 4251, 2024);
                    come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 4251, 2025);
                    neo_current_frame = fr.prev;
                    return __result_obj__0;
                }
            }
            warning_msg(info,"invalid assign non-pointer from pointer. %s",msg);
            show_type(left_type2,info);
            show_type(right_type2,info);
                        __result_obj__0 = (_Bool)0;
            come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 4257, 2026);
            come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 4257, 2027);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
    }
    if(is_arithmetic_type(left_type2,info)&&is_arithmetic_type(right_type2,info)) {
                __result_obj__0 = (_Bool)1;
        come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 4283, 2028);
        come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 4283, 2029);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(!left_ptr&&!right_ptr&&list$1sNode$ph_length(left_type2->mArrayNum)==0&&list$1sNode$ph_length(right_type2->mArrayNum)==0) {
        if(left_type2->mClass->mStruct&&right_type2->mClass->mStruct) {
            if(is_parent_class_of(left_type2->mClass,right_type2->mClass,info)) {
                                __result_obj__0 = (_Bool)1;
                come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 4289, 2030);
                come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 4289, 2031);
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
        }
    }
    if(is_same_type_ignoring_qualifier(left_type2,right_type2,info)) {
                __result_obj__0 = (_Bool)1;
        come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 4295, 2032);
        come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 4295, 2033);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    warning_msg(info,"invalid assign type. %s",msg);
    show_type(left_type2,info);
    show_type(right_type2,info);
        __result_obj__0 = (_Bool)0;
    come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 4301, 2034);
    come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "06type.nc}", 4301, 2035);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

_Bool check_assign_type(const char* msg, struct sType*  left_type  , struct sType*  right_type  , struct CVALUE*  come_value  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "check_assign_type"; neo_current_frame = &fr;
    if(info->no_output_come_code) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    if(left_type&&left_type->mClass&&left_type->mClass->mMethodGenerics) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
        neo_current_frame = fr.prev;
    return check_assign_type_safe(msg,left_type,right_type,come_value,info);
    neo_current_frame = fr.prev;
}

void cast_type(struct sType*  left_type  , struct sType*  right_type  , struct CVALUE*  come_value  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "cast_type"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
}

