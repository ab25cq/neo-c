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

struct sStrNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    char*  value  ;
};

struct sBufferNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct buffer*  value  ;
    unsigned long  size  ;
};

struct sSStringNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    char*  value  ;
    struct list$1sNode$ph* exps;
};

struct sCharNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    int value;
};

struct sWCharNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    int  value  ;
    _Bool quote;
};

struct sWStringNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    int*  value  ;
};

struct sPrefixedCharNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    int value;
    char*  prefix  ;
};

struct sPrefixedStringNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    char*  value  ;
    char*  prefix  ;
};

struct sListNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct list$1sNode$ph* list_elements;
};

struct sVectorNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct list$1sNode$ph* list_elements;
};

struct sTupleNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct list$1tuple2$2char$phsNode$ph$ph* tuple_elements;
};

struct sMapNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct list$1sNode$ph* map_key_elements;
    struct list$1sNode$ph* map_elements;
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
void show_type(struct sType*  type  , struct sInfo*  info  );
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
_Bool is_portable_libc_symbol(const char* sym);
struct sNode* add_node(struct sNode* node, struct sNode* right, struct sInfo*  info  );
struct sStrNode* sStrNode_initialize(struct sStrNode* self, char*  value  , int sline, struct sInfo*  info  );
char*  sStrNode_kind(struct sStrNode* self);
_Bool sStrNode_compile(struct sStrNode* self, struct sInfo*  info  );
static void sNodeBase_finalize(struct sNodeBase* self);
static void sStrNode_finalize(struct sStrNode* self);
static void sType_finalize(struct sType*  self  );
static void list$1sType$ph$p_finalize(struct list$1sType$ph* self);
static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self);
static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self);
static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self);
static void list$1int$$p_finalize(struct list$1int$* self);
static void list_item$1int$$p_finalize(struct list_item$1int$* self);
static void list$1char$ph$p_finalize(struct list$1char$ph* self);
static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self);
static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE*  item  );
static void CVALUE_finalize(struct CVALUE*  self  );
struct sBufferNode* sBufferNode_initialize(struct sBufferNode* self, struct buffer*  value  , unsigned long  size  , struct sInfo*  info  );
char*  sBufferNode_kind(struct sBufferNode* self);
_Bool sBufferNode_compile(struct sBufferNode* self, struct sInfo*  info  );
static void sBufferNode_finalize(struct sBufferNode* self);
static struct sFun*  map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char*  key  );
static void sFun_finalize(struct sFun*  self  );
static void list$1sVar$ph$p_finalize(struct list$1sVar$ph* self);
static void list_item$1sVar$ph$p_finalize(struct list_item$1sVar$ph* self);
static void sVar_finalize(struct sVar*  self  );
static void sBlock_finalize(struct sBlock*  self  );
static struct sFun*  map$2char$phsFun$ph_operator_load_element(struct map$2char$phsFun$ph* self, char*  key  );
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
struct sSStringNode* sSStringNode_initialize(struct sSStringNode* self, char*  value  , struct list$1sNode$ph* exps, int sline, struct sInfo*  info  );
char*  sSStringNode_kind(struct sSStringNode* self);
_Bool sSStringNode_compile(struct sSStringNode* self, struct sInfo*  info  );
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
struct sCharNode* sCharNode_initialize(struct sCharNode* self, int value, struct sInfo*  info  );
char*  sCharNode_kind(struct sCharNode* self);
_Bool sCharNode_compile(struct sCharNode* self, struct sInfo*  info  );
static void sCharNode_finalize(struct sCharNode* self);
struct sWCharNode* sWCharNode_initialize(struct sWCharNode* self, int  value  , _Bool quote, struct sInfo*  info  );
char*  sWCharNode_kind(struct sWCharNode* self);
_Bool sWCharNode_compile(struct sWCharNode* self, struct sInfo*  info  );
static void sWCharNode_finalize(struct sWCharNode* self);
struct sWStringNode* sWStringNode_initialize(struct sWStringNode* self, int*  value  , int sline, struct sInfo*  info  );
char*  sWStringNode_kind(struct sWStringNode* self);
_Bool sWStringNode_compile(struct sWStringNode* self, struct sInfo*  info  );
static void sWStringNode_finalize(struct sWStringNode* self);
struct sPrefixedCharNode* sPrefixedCharNode_initialize(struct sPrefixedCharNode* self, int value, char*  prefix  , struct sInfo*  info  );
char*  sPrefixedCharNode_kind(struct sPrefixedCharNode* self);
_Bool sPrefixedCharNode_compile(struct sPrefixedCharNode* self, struct sInfo*  info  );
static void sPrefixedCharNode_finalize(struct sPrefixedCharNode* self);
struct sPrefixedStringNode* sPrefixedStringNode_initialize(struct sPrefixedStringNode* self, char*  value  , char*  prefix  , int sline, struct sInfo*  info  );
char*  sPrefixedStringNode_kind(struct sPrefixedStringNode* self);
_Bool sPrefixedStringNode_compile(struct sPrefixedStringNode* self, struct sInfo*  info  );
static void sPrefixedStringNode_finalize(struct sPrefixedStringNode* self);
struct sListNode* sListNode_initialize(struct sListNode* self, struct list$1sNode$ph* list_elements, struct sInfo*  info  );
char*  sListNode_kind(struct sListNode* self);
_Bool sListNode_compile(struct sListNode* self, struct sInfo*  info  );
static void sListNode_finalize(struct sListNode* self);
static struct list$1CVALUE$ph* list$1CVALUE$ph_initialize(struct list$1CVALUE$ph* self);
static void list$1CVALUE$ph$p_finalize(struct list$1CVALUE$ph* self);
static void list_item$1CVALUE$ph$p_finalize(struct list_item$1CVALUE$ph* self);
static struct list$1sNode$ph* list$1sNode$ph_push_back(struct list$1sNode$ph* self, struct sNode* item);
static int list$1CVALUE$ph_length(struct list$1CVALUE$ph* self);
static struct CVALUE*  list$1CVALUE$ph_begin(struct list$1CVALUE$ph* self);
static _Bool list$1CVALUE$ph_end(struct list$1CVALUE$ph* self);
static struct CVALUE*  list$1CVALUE$ph_next(struct list$1CVALUE$ph* self);
static struct CVALUE*  list$1CVALUE$ph$p_operator_load_element(struct list$1CVALUE$ph* self, int position);
static struct CVALUE*  list$1CVALUE$ph_operator_load_element(struct list$1CVALUE$ph* self, int position);
static struct list$1sType$ph* list$1sType$ph_push_back(struct list$1sType$ph* self, struct sType*  item  );
static void tuple2$2char$phsGenericsFun$p$p_finalize(struct tuple2$2char$phsGenericsFun$p* self);
static struct sFun*  map$2char$phsFun$ph_at(struct map$2char$phsFun$ph* self, char*  key  , struct sFun*  default_value  , _Bool by_pointer);
static struct sType*  list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position);
static struct sType*  list$1sType$ph_operator_load_element(struct list$1sType$ph* self, int position);
struct sVectorNode* sVectorNode_initialize(struct sVectorNode* self, struct list$1sNode$ph* list_elements, struct sInfo*  info  );
char*  sVectorNode_kind(struct sVectorNode* self);
_Bool sVectorNode_compile(struct sVectorNode* self, struct sInfo*  info  );
static void sVectorNode_finalize(struct sVectorNode* self);
struct sTupleNode* sTupleNode_initialize(struct sTupleNode* self, struct list$1tuple2$2char$phsNode$ph$ph* tuple_elements, struct sInfo*  info  );
char*  sTupleNode_kind(struct sTupleNode* self);
_Bool sTupleNode_compile(struct sTupleNode* self, struct sInfo*  info  );
static void list$1tuple2$2char$phsNode$ph$ph_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void sTupleNode_finalize(struct sTupleNode* self);
static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_begin(struct list$1tuple2$2char$phsNode$ph$ph* self);
static _Bool list$1tuple2$2char$phsNode$ph$ph_end(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_next(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct CVALUE*  CVALUE_clone(struct CVALUE*  self  );
static int list$1sType$ph_length(struct list$1sType$ph* self);
static struct sType*  list$1sType$ph_begin(struct list$1sType$ph* self);
static _Bool list$1sType$ph_end(struct list$1sType$ph* self);
static struct sType*  list$1sType$ph_next(struct list$1sType$ph* self);
struct sMapNode* sMapNode_initialize(struct sMapNode* self, struct list$1sNode$ph* map_key_elements, struct list$1sNode$ph* map_elements, struct sInfo*  info  );
char*  sMapNode_kind(struct sMapNode* self);
_Bool sMapNode_compile(struct sMapNode* self, struct sInfo*  info  );
static void sMapNode_finalize(struct sMapNode* self);
static struct sNode* list$1sNode$ph$p_operator_load_element(struct list$1sNode$ph* self, int position);
static struct sNode* list$1sNode$ph_operator_load_element(struct list$1sNode$ph* self, int position);
struct sNode* expression_node_v96(struct sInfo*  info  );
static char span$1char$p$p_operator_derefference(struct span$1char$p* self);
static char span$1char$p_operator_derefference(struct span$1char$p* self);
static struct sSStringNode* sSStringNode_clone(struct sSStringNode* self);
static struct sPrefixedStringNode* sPrefixedStringNode_clone(struct sPrefixedStringNode* self);
static struct sStrNode* sStrNode_clone(struct sStrNode* self);
static struct sBufferNode* sBufferNode_clone(struct sBufferNode* self);
static struct sPrefixedCharNode* sPrefixedCharNode_clone(struct sPrefixedCharNode* self);
static struct sCharNode* sCharNode_clone(struct sCharNode* self);
static struct sWCharNode* sWCharNode_clone(struct sWCharNode* self);
static struct sWStringNode* sWStringNode_clone(struct sWStringNode* self);
static struct sMapNode* sMapNode_clone(struct sMapNode* self);
static struct sListNode* sListNode_clone(struct sListNode* self);
struct sNode* parse_tuple(struct sInfo*  info  , _Bool named_tuple);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_push_back(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item);
static struct sTupleNode* sTupleNode_clone(struct sTupleNode* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_clone(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_clone(struct tuple2$2char$phsNode$ph* self);
static void tuple2$2char$phsNode$ph_finalize(struct tuple2$2char$phsNode$ph* self);
struct sNode* parse_vector(struct sInfo*  info  );
static struct sVectorNode* sVectorNode_clone(struct sVectorNode* self);
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
struct sStrNode* sStrNode_initialize(struct sStrNode* self, char*  value  , int sline, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sStrNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __dec_obj1  ;
    struct sStrNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sStrNode*)come_increment_ref_count(self, "10str.nc", 7, 1),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "10str.nc}", 7, 3);
    __right_value0 = (void*)0;
    __dec_obj1=self->value,
    self->value=(char* )come_increment_ref_count(__builtin_string(value), "10str.nc", 9, 5);
    __dec_obj1 = come_decrement_ref_count(__dec_obj1, (void*)0, (void*)0, 0,0, (void*)0, "10str.nc", 9, 4);
        __result_obj__0 = (struct sStrNode*)come_increment_ref_count(self, "10str.nc", 12, 6);
    come_call_finalizer(sStrNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "10str.nc}", 12, 9);
    (value = come_decrement_ref_count(value, (void*)0, (void*)0, 0, 0, (void*)0, "10str.nc", 12, 10));
    neo_current_frame = fr.prev;
    come_call_finalizer(sStrNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "10str.nc}", 12, 11);
    return __result_obj__0;
}

char*  sStrNode_kind(struct sStrNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sStrNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sStrNode"))), "10str.nc", 14, 12);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "10str.nc", 14, 13));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "10str.nc", 14, 14));
    return __result_obj__0;
}

_Bool sStrNode_compile(struct sStrNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sStrNode_compile"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj2  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj3  ;
    _Bool __result_obj__0;
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "10str.nc", 19, 15, "struct CVALUE* "), "10str.nc", 19, 16)), "10str.nc", 19, 17);
    __right_value0 = (void*)0;
    __dec_obj2=come_value->c_value,
    come_value->c_value=(char* )come_increment_ref_count(xsprintf("\"%s\"",self->value), "10str.nc", 21, 19);
    __dec_obj2 = come_decrement_ref_count(__dec_obj2, (void*)0, (void*)0, 0,0, (void*)0, "10str.nc", 21, 18);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj3=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "10str.nc", 22, 20, "struct sType* "), "10str.nc", 22, 21),(char*)come_increment_ref_count(xsprintf("char*"), "10str.nc", 22, 22),(_Bool)0,info,(_Bool)0,0), "10str.nc", 22, 56);
    come_call_finalizer(sType_finalize, __dec_obj3,(void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc", 22, 55);
    if(gComeSafe) {
        come_value->type->mConstant=(_Bool)1;
    }
    come_value->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "10str.nc", 28, 76));
    add_come_last_code(info,"%s",come_value->c_value);
        __result_obj__0 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 32, 77);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sNodeBase_finalize(struct sNodeBase* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sNodeBase_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sNodeBase_finalize", 2, 2));
    }
        neo_current_frame = fr.prev;
}

static void sStrNode_finalize(struct sStrNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sStrNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sStrNode_finalize", 2, 7));
    }
    if(self!=((void*)0)&&self->value!=((void*)0)) {
        (self->value = come_decrement_ref_count(self->value, (void*)0, (void*)0, 0, 0, (void*)0, "sStrNode_finalize", 3, 8));
    }
        neo_current_frame = fr.prev;
}

static void sType_finalize(struct sType*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sType_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 2, 23);
    }
    if(self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mChannelType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 3, 24);
    }
    if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 4, 27);
    }
    if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 5, 28);
    }
    if(self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        ((self->mSizeNum) ? self->mSizeNum = come_decrement_ref_count(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0,(void*)0, "sType_finalize", 6, 29):(void*)0);
    }
    if(self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        ((self->mAlignas) ? self->mAlignas = come_decrement_ref_count(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0,(void*)0, "sType_finalize", 7, 30):(void*)0);
    }
    if(self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        (self->mTupleName = come_decrement_ref_count(self->mTupleName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 8, 31));
    }
    if(self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 9, 32));
    }
    if(self!=((void*)0)&&self->mVarAttribute!=((void*)0)) {
        (self->mVarAttribute = come_decrement_ref_count(self->mVarAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 10, 33));
    }
    if(self!=((void*)0)&&self->mMiddleAttribute!=((void*)0)) {
        (self->mMiddleAttribute = come_decrement_ref_count(self->mMiddleAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 11, 34));
    }
    if(self!=((void*)0)&&self->mPointerAttribute!=((void*)0)) {
        (self->mPointerAttribute = come_decrement_ref_count(self->mPointerAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 12, 35));
    }
    if(self!=((void*)0)&&self->mAnonymousName!=((void*)0)) {
        (self->mAnonymousName = come_decrement_ref_count(self->mAnonymousName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 13, 36));
    }
    if(self!=((void*)0)&&self->mInnerStructName!=((void*)0)) {
        (self->mInnerStructName = come_decrement_ref_count(self->mInnerStructName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 14, 37));
    }
    if(self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        (self->mAsmName = come_decrement_ref_count(self->mAsmName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 15, 38));
    }
    if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 16, 41);
    }
    if(self!=((void*)0)&&self->mVarNameArrayNum!=((void*)0)) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mVarNameArrayNum, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 17, 42);
    }
    if(self!=((void*)0)&&self->mArrayStatic!=((void*)0)) {
        come_call_finalizer(list$1int$$p_finalize, self->mArrayStatic, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 18, 44);
    }
    if(self!=((void*)0)&&self->mArrayRestrict!=((void*)0)) {
        come_call_finalizer(list$1int$$p_finalize, self->mArrayRestrict, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 19, 45);
    }
    if(self!=((void*)0)&&self->mTypedefOriginalType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mTypedefOriginalType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 20, 46);
    }
    if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        (self->mOriginalTypeName = come_decrement_ref_count(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 21, 47));
    }
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 22, 48);
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamNames, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 23, 51);
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mResultType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 24, 52);
    }
    if(self!=((void*)0)&&self->mTypeOfNode!=((void*)0)) {
        ((self->mTypeOfNode) ? self->mTypeOfNode = come_decrement_ref_count(self->mTypeOfNode, ((struct sNode*)self->mTypeOfNode)->finalize, ((struct sNode*)self->mTypeOfNode)->_protocol_obj, 0, 0,(void*)0, "sType_finalize", 25, 53):(void*)0);
    }
    if(self!=((void*)0)&&self->mHeapArrayNum!=((void*)0)) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mHeapArrayNum, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 26, 54);
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
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1504, 26);
    }
            neo_current_frame = fr.prev;
}

static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1sType$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "list_item$1sType$ph$p_finalize}", 2, 25);
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
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1504, 40);
    }
            neo_current_frame = fr.prev;
}

static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1sNode$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        ((self->item) ? self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0,(void*)0, "list_item$1sNode$ph$p_finalize", 2, 39):(void*)0);
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
        come_call_finalizer(list_item$1int$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1504, 43);
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
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1504, 50);
    }
            neo_current_frame = fr.prev;
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1char$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0, 0, (void*)0, "list_item$1char$ph$p_finalize", 2, 49));
    }
            neo_current_frame = fr.prev;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1CVALUE$ph_push_back"; neo_current_frame = &fr;
    struct list$1CVALUE$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1CVALUE$ph* litem;
    struct CVALUE*  __dec_obj4  ;
    struct list_item$1CVALUE$ph* litem_0;
    struct CVALUE*  __dec_obj5  ;
    struct list_item$1CVALUE$ph* litem_1;
    struct CVALUE*  __dec_obj6  ;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1613, 62);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/neo-c.h", 1617, 63, "struct list_item$1CVALUE$ph*"))), "/usr/local/include/neo-c.h", 1617, 64);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj4=litem->item,
        litem->item=(struct CVALUE* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1621, 66);
        come_call_finalizer(CVALUE_finalize, __dec_obj4,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1621, 65);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_0=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/neo-c.h", 1627, 67, "struct list_item$1CVALUE$ph*"))), "/usr/local/include/neo-c.h", 1627, 68);
        litem_0->prev=self->head;
        litem_0->next=((void*)0);
        __dec_obj5=litem_0->item,
        litem_0->item=(struct CVALUE* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1631, 70);
        come_call_finalizer(CVALUE_finalize, __dec_obj5,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1631, 69);
        self->tail=litem_0;
        self->head->next=litem_0;
    }
    else {
        __right_value0 = (void*)0;
        litem_1=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/neo-c.h", 1637, 71, "struct list_item$1CVALUE$ph*"))), "/usr/local/include/neo-c.h", 1637, 72);
        litem_1->prev=self->tail;
        litem_1->next=((void*)0);
        __dec_obj6=litem_1->item,
        litem_1->item=(struct CVALUE* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1641, 74);
        come_call_finalizer(CVALUE_finalize, __dec_obj6,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1641, 73);
        self->tail->next=litem_1;
        self->tail=litem_1;
    }
    self->len++;
        __result_obj__0 = self;
    come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1649, 75);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void CVALUE_finalize(struct CVALUE*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "CVALUE_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->c_value!=((void*)0)) {
        (self->c_value = come_decrement_ref_count(self->c_value, (void*)0, (void*)0, 0, 0, (void*)0, "CVALUE_finalize", 2, 57));
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "CVALUE_finalize}", 3, 58);
    }
    if(self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        (self->c_value_without_right_value_objects = come_decrement_ref_count(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, (void*)0, "CVALUE_finalize", 4, 59));
    }
    if(self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)) {
        (self->c_value_without_cast_object_value = come_decrement_ref_count(self->c_value_without_cast_object_value, (void*)0, (void*)0, 0, 0, (void*)0, "CVALUE_finalize", 5, 60));
    }
    if(self!=((void*)0)&&self->c_value_without_null_checker!=((void*)0)) {
        (self->c_value_without_null_checker = come_decrement_ref_count(self->c_value_without_null_checker, (void*)0, (void*)0, 0, 0, (void*)0, "CVALUE_finalize", 6, 61));
    }
            neo_current_frame = fr.prev;
}

struct sBufferNode* sBufferNode_initialize(struct sBufferNode* self, struct buffer*  value  , unsigned long  size  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sBufferNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct buffer*  __dec_obj7  ;
    struct sBufferNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sBufferNode*)come_increment_ref_count(self, "10str.nc", 40, 78),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "10str.nc}", 40, 79);
    __dec_obj7=self->value,
    self->value=(struct buffer* )come_increment_ref_count(value, "10str.nc", 42, 81);
    come_call_finalizer(buffer_finalize, __dec_obj7,(void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc", 42, 80);
    self->size=size;
        __result_obj__0 = (struct sBufferNode*)come_increment_ref_count(self, "10str.nc", 46, 82);
    come_call_finalizer(sBufferNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "10str.nc}", 46, 85);
    come_call_finalizer(buffer_finalize, value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 46, 86);
    neo_current_frame = fr.prev;
    come_call_finalizer(sBufferNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "10str.nc}", 46, 87);
    return __result_obj__0;
}

char*  sBufferNode_kind(struct sBufferNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sBufferNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sBufferNode"))), "10str.nc", 48, 88);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "10str.nc", 48, 89));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "10str.nc", 48, 90));
    return __result_obj__0;
}

_Bool sBufferNode_compile(struct sBufferNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sBufferNode_compile"; neo_current_frame = &fr;
    struct buffer*  value  ;
    unsigned long  size  ;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    struct buffer*  buf  ;
    void* __right_value2 = (void*)0;
    struct sType*  type2  ;
    struct sType*  any_type  ;
    _Bool _conditional_value_X0;
    struct sType*  type2_2  ;
    char*  __dec_obj8  ;
    struct sType*  __dec_obj43  ;
    _Bool __result_obj__0;
    value=(struct buffer* )come_increment_ref_count(self->value, "10str.nc", 53, 91);
    size=self->size;
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "10str.nc", 56, 92, "struct CVALUE* "), "10str.nc", 56, 93)), "10str.nc", 56, 94);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "10str.nc", 58, 95, "struct buffer* "), "10str.nc", 58, 96)), "10str.nc", 58, 97);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    type2=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "10str.nc", 60, 98, "struct sType* "), "10str.nc", 60, 99),(char*)come_increment_ref_count(xsprintf("buffer"), "10str.nc", 60, 100),(_Bool)0,info,(_Bool)0,0), "10str.nc", 60, 101);
    type2->mPointerNum++;
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __right_value2 = (void*)0;
    any_type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "10str.nc", 63, 102, "struct sType* "), "10str.nc", 63, 103),(char*)come_increment_ref_count(xsprintf("buffer"), "10str.nc", 63, 104),(_Bool)0,info,(_Bool)0,0), "10str.nc", 63, 105);
    any_type->mPointerNum=1;
    any_type->mHeap=(_Bool)1;
    if(__right_value0 = (void*)0,
__right_value1 = (void*)0,
__right_value2 = (void*)0,
({(_conditional_value_X0=(((struct sFun* )(__right_value2=map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value1=xsprintf("come_calloc_v2"))))))));    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "10str.nc", 67, 162));
    come_call_finalizer(sFun_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0, "10str.nc}", 67, 163);
_conditional_value_X0;})) {
        __right_value0 = (void*)0;
        buffer_append_format(buf,"buffer_initialize_with_value((struct buffer*)come_increment_ref_count(come_calloc_v2(1, sizeof(struct buffer), \"%s\", %d, %d, \"buffer\"), \"%s\", %d, %d), \"%s\", %ld)",info->sname,info->sline,++info->id,info->sname,info->sline,++info->id,((char* )(__right_value0=buffer_to_string(value))),size);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "10str.nc", 68, 164));
    }
    else {
        __right_value0 = (void*)0;
        buffer_append_format(buf,"buffer_initialize_with_value((struct buffer*)come_increment_ref_count(come_calloc(1, sizeof(struct buffer), \"%s\", %d, %d, \"buffer\"), \"%s\", %d, %d), \"%s\", %ld)",info->sname,info->sline,++info->id,info->sname,info->sline,++info->id,((char* )(__right_value0=buffer_to_string(value))),size);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "10str.nc", 71, 165));
    }
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 74, 166);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __right_value2 = (void*)0;
    type2_2=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "10str.nc", 74, 167, "struct sType* "), "10str.nc", 74, 168),(char*)come_increment_ref_count(xsprintf("buffer*"), "10str.nc", 74, 169),(_Bool)0,info,(_Bool)0,0), "10str.nc", 74, 170);
    type2_2->mHeap=(_Bool)1;
    __right_value0 = (void*)0;
    __dec_obj8=come_value->c_value,
    come_value->c_value=(char* )come_increment_ref_count(buffer_to_string(buf), "10str.nc", 77, 172);
    __dec_obj8 = come_decrement_ref_count(__dec_obj8, (void*)0, (void*)0, 0,0, (void*)0, "10str.nc", 77, 171);
    __right_value0 = (void*)0;
    __dec_obj43=come_value->type,
    come_value->type=(struct sType* )come_increment_ref_count(sType_clone(type2_2), "10str.nc", 78, 351);
    come_call_finalizer(sType_finalize, __dec_obj43,(void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc", 78, 350);
    come_value->var=((void*)0);
    append_object_to_right_values(come_value,type2_2,info,(_Bool)0,((void*)0),((void*)0),((void*)0));
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "10str.nc", 83, 352));
    add_come_last_code(info,"%s",come_value->c_value);
        __result_obj__0 = (_Bool)1;
    come_call_finalizer(buffer_finalize, value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 87, 353);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 87, 354);
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 87, 355);
    come_call_finalizer(sType_finalize, any_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 87, 356);
    come_call_finalizer(sType_finalize, type2_2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 87, 357);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sBufferNode_finalize(struct sBufferNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sBufferNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sBufferNode_finalize", 2, 83));
    }
    if(self!=((void*)0)&&self->value!=((void*)0)) {
        come_call_finalizer(buffer_finalize, self->value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sBufferNode_finalize}", 3, 84);
    }
        neo_current_frame = fr.prev;
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
                __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3513, 106);
        come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3513, 133);
        neo_current_frame = fr.prev;
        come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3513, 134);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char* )key))%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if(string_equals(self->keys[it],key)) {
                                __result_obj__0 = (struct sFun* )come_increment_ref_count(self->items[it], "/usr/local/include/neo-c.h", 3524, 135);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3524, 136);
                neo_current_frame = fr.prev;
                come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3524, 137);
                return __result_obj__0;
            }
            it++;
            if(it>=self->size) {
                it=0;
            }
            else if(it==hash) {
                                __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3533, 138);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3533, 139);
                neo_current_frame = fr.prev;
                come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3533, 140);
                return __result_obj__0;
            }
        }
        else {
                        __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3537, 141);
            come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3537, 142);
            neo_current_frame = fr.prev;
            come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3537, 143);
            return __result_obj__0;
        }
    }
        __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3541, 144);
    come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3541, 145);
    neo_current_frame = fr.prev;
    come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3541, 146);
    return __result_obj__0;
}

static void sFun_finalize(struct sFun*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sFun_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 2, 107));
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mResultType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 3, 108);
    }
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 4, 109);
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamNames, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 5, 110);
    }
    if(self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 6, 111);
    }
    if(self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mLambdaType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 7, 112);
    }
    if(self!=((void*)0)&&self->mAllVar!=((void*)0)) {
        come_call_finalizer(list$1sVar$ph$p_finalize, self->mAllVar, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 8, 119);
    }
    if(self!=((void*)0)&&self->mBlock!=((void*)0)) {
        come_call_finalizer(sBlock_finalize, self->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 9, 122);
    }
    if(self!=((void*)0)&&self->mTextBlock!=((void*)0)) {
        (self->mTextBlock = come_decrement_ref_count(self->mTextBlock, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 10, 123));
    }
    if(self!=((void*)0)&&self->mTextBlockSName!=((void*)0)) {
        (self->mTextBlockSName = come_decrement_ref_count(self->mTextBlockSName, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 11, 124));
    }
    if(self!=((void*)0)&&self->mSource!=((void*)0)) {
        come_call_finalizer(buffer_finalize, self->mSource, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 12, 125);
    }
    if(self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        come_call_finalizer(buffer_finalize, self->mSourceHead, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 13, 126);
    }
    if(self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        come_call_finalizer(buffer_finalize, self->mSourceHead2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 14, 127);
    }
    if(self!=((void*)0)&&self->mSourceEnd!=((void*)0)) {
        come_call_finalizer(buffer_finalize, self->mSourceEnd, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 15, 128);
    }
    if(self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 16, 129));
    }
    if(self!=((void*)0)&&self->mMiddleAttribute!=((void*)0)) {
        (self->mMiddleAttribute = come_decrement_ref_count(self->mMiddleAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 17, 130));
    }
    if(self!=((void*)0)&&self->mFunAttribute!=((void*)0)) {
        (self->mFunAttribute = come_decrement_ref_count(self->mFunAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 18, 131));
    }
    if(self!=((void*)0)&&self->mAsmFun!=((void*)0)) {
        (self->mAsmFun = come_decrement_ref_count(self->mAsmFun, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 19, 132));
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
        come_call_finalizer(list_item$1sVar$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1504, 118);
    }
            neo_current_frame = fr.prev;
}

static void list_item$1sVar$ph$p_finalize(struct list_item$1sVar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1sVar$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer(sVar_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "list_item$1sVar$ph$p_finalize}", 2, 117);
    }
            neo_current_frame = fr.prev;
}

static void sVar_finalize(struct sVar*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sVar_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, (void*)0, "sVar_finalize", 2, 113));
    }
    if(self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        (self->mCValueName = come_decrement_ref_count(self->mCValueName, (void*)0, (void*)0, 0, 0, (void*)0, "sVar_finalize", 3, 114));
    }
    if(self!=((void*)0)&&self->mType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sVar_finalize}", 4, 115);
    }
    if(self!=((void*)0)&&self->mFunName!=((void*)0)) {
        (self->mFunName = come_decrement_ref_count(self->mFunName, (void*)0, (void*)0, 0, 0, (void*)0, "sVar_finalize", 5, 116));
    }
            neo_current_frame = fr.prev;
}

static void sBlock_finalize(struct sBlock*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sBlock_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->mNodes!=((void*)0)) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mNodes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sBlock_finalize}", 2, 120);
    }
    if(self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        come_call_finalizer(sVarTable_finalize, self->mVarTable, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sBlock_finalize}", 3, 121);
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
                __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3513, 147);
        come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3513, 148);
        neo_current_frame = fr.prev;
        come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3513, 149);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char* )key))%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if(string_equals(self->keys[it],key)) {
                                __result_obj__0 = (struct sFun* )come_increment_ref_count(self->items[it], "/usr/local/include/neo-c.h", 3524, 150);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3524, 151);
                neo_current_frame = fr.prev;
                come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3524, 152);
                return __result_obj__0;
            }
            it++;
            if(it>=self->size) {
                it=0;
            }
            else if(it==hash) {
                                __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3533, 153);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3533, 154);
                neo_current_frame = fr.prev;
                come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3533, 155);
                return __result_obj__0;
            }
        }
        else {
                        __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3537, 156);
            come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3537, 157);
            neo_current_frame = fr.prev;
            come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3537, 158);
            return __result_obj__0;
        }
    }
        __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3541, 159);
    come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3541, 160);
    neo_current_frame = fr.prev;
    come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3541, 161);
    return __result_obj__0;
}

static struct sType*  sType_clone(struct sType*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sType_clone"; neo_current_frame = &fr;
    struct sType*  __result_obj__0  ;
    void* __right_value0 = (void*)0;
    struct sType*  result  ;
    struct sType*  __dec_obj9  ;
    struct sType*  __dec_obj10  ;
    struct list$1sType$ph* __dec_obj14;
    struct sType*  __dec_obj15  ;
    struct sNode* __dec_obj16;
    struct sNode* __dec_obj17;
    char*  __dec_obj18  ;
    char*  __dec_obj19  ;
    char*  __dec_obj20  ;
    char*  __dec_obj21  ;
    char*  __dec_obj22  ;
    char*  __dec_obj23  ;
    char*  __dec_obj24  ;
    char*  __dec_obj25  ;
    struct list$1sNode$ph* __dec_obj29;
    struct list$1sNode$ph* __dec_obj30;
    struct list$1int$* __dec_obj31;
    struct list$1int$* __dec_obj32;
    struct sType*  __dec_obj33  ;
    char*  __dec_obj34  ;
    struct list$1sType$ph* __dec_obj35;
    struct list$1char$ph* __dec_obj39;
    struct sType*  __dec_obj40  ;
    struct sNode* __dec_obj41;
    struct list$1sNode$ph* __dec_obj42;
    if(self==(void*)0) {
                __result_obj__0 = (struct sType* )come_increment_ref_count((void*)0, "sType_clone", 4, 173);
        neo_current_frame = fr.prev;
        come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sType_clone}", 4, 174);
        return __result_obj__0;
    }
    result=(struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "sType_clone", 5, 175, "struct sType* "), "sType_clone", 5, 176);
    if(self!=((void*)0)) {
        result->mClass=self->mClass;
    }
    if(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj9=result->mOriginalLoadVarType,
        result->mOriginalLoadVarType=(struct sType* )come_increment_ref_count(sType_clone(self->mOriginalLoadVarType), "sType_clone", 7, 178);
        come_call_finalizer(sType_finalize, __dec_obj9,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 7, 177);
    }
    if(self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj10=result->mChannelType,
        result->mChannelType=(struct sType* )come_increment_ref_count(sType_clone(self->mChannelType), "sType_clone", 8, 180);
        come_call_finalizer(sType_finalize, __dec_obj10,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 8, 179);
    }
    if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj14=result->mGenericsTypes,
        result->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mGenericsTypes), "sType_clone", 9, 210);
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj14,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 9, 209);
    }
    if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj15=result->mNoSolvedGenericsType,
        result->mNoSolvedGenericsType=(struct sType* )come_increment_ref_count(sType_clone(self->mNoSolvedGenericsType), "sType_clone", 10, 212);
        come_call_finalizer(sType_finalize, __dec_obj15,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 10, 211);
    }
    if(self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj16=result->mSizeNum,
        result->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum), "sType_clone", 11, 221);
        (__dec_obj16 ? __dec_obj16 = come_decrement_ref_count(__dec_obj16, ((struct sNode*)__dec_obj16)->finalize, ((struct sNode*)__dec_obj16)->_protocol_obj, 0,0, (void*)0, "sType_clone", 11, 220) :0);
    }
    if(self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj17=result->mAlignas,
        result->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas), "sType_clone", 12, 223);
        (__dec_obj17 ? __dec_obj17 = come_decrement_ref_count(__dec_obj17, ((struct sNode*)__dec_obj17)->finalize, ((struct sNode*)__dec_obj17)->_protocol_obj, 0,0, (void*)0, "sType_clone", 12, 222) :0);
    }
    if(self!=((void*)0)) {
        result->mAlignasDouble=self->mAlignasDouble;
    }
    if(self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj18=result->mTupleName,
        result->mTupleName=(char* )come_increment_ref_count((char* )come_memdup(self->mTupleName, "sType_clone", 14, 224, "char* "), "sType_clone", 14, 226);
        __dec_obj18 = come_decrement_ref_count(__dec_obj18, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 14, 225);
    }
    if(self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj19=result->mAttribute,
        result->mAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mAttribute, "sType_clone", 15, 227, "char* "), "sType_clone", 15, 229);
        __dec_obj19 = come_decrement_ref_count(__dec_obj19, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 15, 228);
    }
    if(self!=((void*)0)&&self->mVarAttribute!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj20=result->mVarAttribute,
        result->mVarAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mVarAttribute, "sType_clone", 16, 230, "char* "), "sType_clone", 16, 232);
        __dec_obj20 = come_decrement_ref_count(__dec_obj20, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 16, 231);
    }
    if(self!=((void*)0)&&self->mMiddleAttribute!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj21=result->mMiddleAttribute,
        result->mMiddleAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mMiddleAttribute, "sType_clone", 17, 233, "char* "), "sType_clone", 17, 235);
        __dec_obj21 = come_decrement_ref_count(__dec_obj21, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 17, 234);
    }
    if(self!=((void*)0)&&self->mPointerAttribute!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj22=result->mPointerAttribute,
        result->mPointerAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mPointerAttribute, "sType_clone", 18, 236, "char* "), "sType_clone", 18, 238);
        __dec_obj22 = come_decrement_ref_count(__dec_obj22, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 18, 237);
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
        __dec_obj23=result->mAnonymousName,
        result->mAnonymousName=(char* )come_increment_ref_count((char* )come_memdup(self->mAnonymousName, "sType_clone", 49, 239, "char* "), "sType_clone", 49, 241);
        __dec_obj23 = come_decrement_ref_count(__dec_obj23, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 49, 240);
    }
    if(self!=((void*)0)) {
        result->mInnerStruct=self->mInnerStruct;
    }
    if(self!=((void*)0)&&self->mInnerStructName!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj24=result->mInnerStructName,
        result->mInnerStructName=(char* )come_increment_ref_count((char* )come_memdup(self->mInnerStructName, "sType_clone", 51, 242, "char* "), "sType_clone", 51, 244);
        __dec_obj24 = come_decrement_ref_count(__dec_obj24, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 51, 243);
    }
    if(self!=((void*)0)) {
        result->mAnonymousVarName=self->mAnonymousVarName;
    }
    if(self!=((void*)0)) {
        result->mInline=self->mInline;
    }
    if(self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj25=result->mAsmName,
        result->mAsmName=(char* )come_increment_ref_count((char* )come_memdup(self->mAsmName, "sType_clone", 54, 245, "char* "), "sType_clone", 54, 247);
        __dec_obj25 = come_decrement_ref_count(__dec_obj25, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 54, 246);
    }
    if(self!=((void*)0)) {
        result->mTypedef=self->mTypedef;
    }
    if(self!=((void*)0)) {
        result->mMultipleTypes=self->mMultipleTypes;
    }
    if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj29=result->mArrayNum,
        result->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mArrayNum), "sType_clone", 57, 277);
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj29,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 57, 276);
    }
    if(self!=((void*)0)&&self->mVarNameArrayNum!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj30=result->mVarNameArrayNum,
        result->mVarNameArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mVarNameArrayNum), "sType_clone", 58, 279);
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj30,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 58, 278);
    }
    if(self!=((void*)0)&&self->mArrayStatic!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj31=result->mArrayStatic,
        result->mArrayStatic=(struct list$1int$*)come_increment_ref_count(list$1int$$p_clone(self->mArrayStatic), "sType_clone", 59, 299);
        come_call_finalizer(list$1int$_finalize, __dec_obj31,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 59, 298);
    }
    if(self!=((void*)0)&&self->mArrayRestrict!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj32=result->mArrayRestrict,
        result->mArrayRestrict=(struct list$1int$*)come_increment_ref_count(list$1int$$p_clone(self->mArrayRestrict), "sType_clone", 60, 301);
        come_call_finalizer(list$1int$_finalize, __dec_obj32,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 60, 300);
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
        __dec_obj33=result->mTypedefOriginalType,
        result->mTypedefOriginalType=(struct sType* )come_increment_ref_count(sType_clone(self->mTypedefOriginalType), "sType_clone", 66, 303);
        come_call_finalizer(sType_finalize, __dec_obj33,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 66, 302);
    }
    if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj34=result->mOriginalTypeName,
        result->mOriginalTypeName=(char* )come_increment_ref_count((char* )come_memdup(self->mOriginalTypeName, "sType_clone", 67, 304, "char* "), "sType_clone", 67, 306);
        __dec_obj34 = come_decrement_ref_count(__dec_obj34, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 67, 305);
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
        __dec_obj35=result->mParamTypes,
        result->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mParamTypes), "sType_clone", 71, 308);
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj35,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 71, 307);
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj39=result->mParamNames,
        result->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->mParamNames), "sType_clone", 72, 340);
        come_call_finalizer(list$1char$ph_finalize, __dec_obj39,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 72, 339);
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj40=result->mResultType,
        result->mResultType=(struct sType* )come_increment_ref_count(sType_clone(self->mResultType), "sType_clone", 73, 342);
        come_call_finalizer(sType_finalize, __dec_obj40,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 73, 341);
    }
    if(self!=((void*)0)) {
        result->mVarArgs=self->mVarArgs;
    }
    if(self!=((void*)0)&&self->mTypeOfNode!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj41=result->mTypeOfNode,
        result->mTypeOfNode=(struct sNode*)come_increment_ref_count(sNode_clone(self->mTypeOfNode), "sType_clone", 75, 344);
        (__dec_obj41 ? __dec_obj41 = come_decrement_ref_count(__dec_obj41, ((struct sNode*)__dec_obj41)->finalize, ((struct sNode*)__dec_obj41)->_protocol_obj, 0,0, (void*)0, "sType_clone", 75, 343) :0);
    }
    if(self!=((void*)0)&&self->mHeapArrayNum!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj42=result->mHeapArrayNum,
        result->mHeapArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mHeapArrayNum), "sType_clone", 76, 346);
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj42,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 76, 345);
    }
        __result_obj__0 = (struct sType* )come_increment_ref_count(result, "sType_clone", 77, 347);
    come_call_finalizer(sType_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sType_clone}", 77, 348);
    neo_current_frame = fr.prev;
    come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sType_clone}", 77, 349);
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
                __result_obj__0 = (struct list$1sType$ph*)come_increment_ref_count(((void*)0), "/usr/local/include/neo-c.h", 1509, 181);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1509, 182);
        return __result_obj__0;
    }
    result=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "/usr/local/include/neo-c.h", 1511, 183, "struct list$1sType$ph*"), "/usr/local/include/neo-c.h", 1511, 187)), "/usr/local/include/neo-c.h", 1511, 188);
    it=self->head;
    while(it!=((void*)0)) {
        if(1) {
            __right_value0 = (void*)0;
            list$1sType$ph_add(result,(struct sType* )come_increment_ref_count(sType_clone(it->item), "/usr/local/include/neo-c.h", 1516, 203));
        }
        else {
            __right_value0 = (void*)0;
            list$1sType$ph_add(result,(struct sType* )come_increment_ref_count(sType_clone(it->item), "/usr/local/include/neo-c.h", 1519, 204));
        }
        it=it->next;
    }
        __result_obj__0 = (struct list$1sType$ph*)come_increment_ref_count(result, "/usr/local/include/neo-c.h", 1525, 205);
    come_call_finalizer(list$1sType$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1525, 206);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1525, 207);
    return __result_obj__0;
}

static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_initialize"; neo_current_frame = &fr;
    struct list$1sType$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = (struct list$1sType$ph*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 1483, 184);
    come_call_finalizer(list$1sType$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1483, 185);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1483, 186);
    return __result_obj__0;
}

static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_add"; neo_current_frame = &fr;
    struct list$1sType$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1sType$ph* litem;
    struct sType*  __dec_obj11  ;
    struct list_item$1sType$ph* litem_3;
    struct sType*  __dec_obj12  ;
    struct list_item$1sType$ph* litem_4;
    struct sType*  __dec_obj13  ;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1529, 189);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/neo-c.h", 1532, 190, "struct list_item$1sType$ph*"))), "/usr/local/include/neo-c.h", 1532, 191);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj11=litem->item,
        litem->item=(struct sType* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1536, 193);
        come_call_finalizer(sType_finalize, __dec_obj11,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1536, 192);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_3=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/neo-c.h", 1542, 194, "struct list_item$1sType$ph*"))), "/usr/local/include/neo-c.h", 1542, 195);
        litem_3->prev=self->head;
        litem_3->next=((void*)0);
        __dec_obj12=litem_3->item,
        litem_3->item=(struct sType* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1546, 197);
        come_call_finalizer(sType_finalize, __dec_obj12,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1546, 196);
        self->tail=litem_3;
        self->head->next=litem_3;
    }
    else {
        __right_value0 = (void*)0;
        litem_4=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/neo-c.h", 1552, 198, "struct list_item$1sType$ph*"))), "/usr/local/include/neo-c.h", 1552, 199);
        litem_4->prev=self->tail;
        litem_4->next=((void*)0);
        __dec_obj13=litem_4->item,
        litem_4->item=(struct sType* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1556, 201);
        come_call_finalizer(sType_finalize, __dec_obj13,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1556, 200);
        self->tail->next=litem_4;
        self->tail=litem_4;
    }
    self->len++;
        __result_obj__0 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1564, 202);
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
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1504, 208);
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
                __result_obj__0 = (struct sNode*)come_increment_ref_count((void*)0, "sNode_clone", 4, 213);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "sNode_clone", 4, 214):(void*)0);
        return __result_obj__0;
    }
    result=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 5, 215, "struct sNode*"), "sNode_clone", 5, 216);
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
        __result_obj__0 = (struct sNode*)come_increment_ref_count(result, "sNode_clone", 16, 217);
    ((result) ? result = come_decrement_ref_count(result, ((struct sNode*)result)->finalize, ((struct sNode*)result)->_protocol_obj, 0, 1,(void*)0, "sNode_clone", 16, 218):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "sNode_clone", 16, 219):(void*)0);
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
                __result_obj__0 = (struct list$1sNode$ph*)come_increment_ref_count(((void*)0), "/usr/local/include/neo-c.h", 1509, 248);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1509, 249);
        return __result_obj__0;
    }
    result=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "/usr/local/include/neo-c.h", 1511, 250, "struct list$1sNode$ph*"), "/usr/local/include/neo-c.h", 1511, 254)), "/usr/local/include/neo-c.h", 1511, 255);
    it=self->head;
    while(it!=((void*)0)) {
        if(1) {
            __right_value0 = (void*)0;
            list$1sNode$ph_add(result,(struct sNode*)come_increment_ref_count(sNode_clone(it->item), "/usr/local/include/neo-c.h", 1516, 270));
        }
        else {
            __right_value0 = (void*)0;
            list$1sNode$ph_add(result,(struct sNode*)come_increment_ref_count(sNode_clone(it->item), "/usr/local/include/neo-c.h", 1519, 271));
        }
        it=it->next;
    }
        __result_obj__0 = (struct list$1sNode$ph*)come_increment_ref_count(result, "/usr/local/include/neo-c.h", 1525, 272);
    come_call_finalizer(list$1sNode$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1525, 273);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1525, 274);
    return __result_obj__0;
}

static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_initialize"; neo_current_frame = &fr;
    struct list$1sNode$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = (struct list$1sNode$ph*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 1483, 251);
    come_call_finalizer(list$1sNode$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1483, 252);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1483, 253);
    return __result_obj__0;
}

static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_add"; neo_current_frame = &fr;
    struct list$1sNode$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1sNode$ph* litem;
    struct sNode* __dec_obj26;
    struct list_item$1sNode$ph* litem_5;
    struct sNode* __dec_obj27;
    struct list_item$1sNode$ph* litem_6;
    struct sNode* __dec_obj28;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0, "/usr/local/include/neo-c.h", 1529, 256):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/neo-c.h", 1532, 257, "struct list_item$1sNode$ph*"))), "/usr/local/include/neo-c.h", 1532, 258);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj26=litem->item,
        litem->item=(struct sNode*)come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1536, 260);
        (__dec_obj26 ? __dec_obj26 = come_decrement_ref_count(__dec_obj26, ((struct sNode*)__dec_obj26)->finalize, ((struct sNode*)__dec_obj26)->_protocol_obj, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1536, 259) :0);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_5=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/neo-c.h", 1542, 261, "struct list_item$1sNode$ph*"))), "/usr/local/include/neo-c.h", 1542, 262);
        litem_5->prev=self->head;
        litem_5->next=((void*)0);
        __dec_obj27=litem_5->item,
        litem_5->item=(struct sNode*)come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1546, 264);
        (__dec_obj27 ? __dec_obj27 = come_decrement_ref_count(__dec_obj27, ((struct sNode*)__dec_obj27)->finalize, ((struct sNode*)__dec_obj27)->_protocol_obj, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1546, 263) :0);
        self->tail=litem_5;
        self->head->next=litem_5;
    }
    else {
        __right_value0 = (void*)0;
        litem_6=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/neo-c.h", 1552, 265, "struct list_item$1sNode$ph*"))), "/usr/local/include/neo-c.h", 1552, 266);
        litem_6->prev=self->tail;
        litem_6->next=((void*)0);
        __dec_obj28=litem_6->item,
        litem_6->item=(struct sNode*)come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1556, 268);
        (__dec_obj28 ? __dec_obj28 = come_decrement_ref_count(__dec_obj28, ((struct sNode*)__dec_obj28)->finalize, ((struct sNode*)__dec_obj28)->_protocol_obj, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1556, 267) :0);
        self->tail->next=litem_6;
        self->tail=litem_6;
    }
    self->len++;
        __result_obj__0 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0, "/usr/local/include/neo-c.h", 1564, 269):(void*)0);
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
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1504, 275);
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
                __result_obj__0 = (struct list$1int$*)come_increment_ref_count(((void*)0), "/usr/local/include/neo-c.h", 1509, 280);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1509, 281);
        return __result_obj__0;
    }
    result=(struct list$1int$*)come_increment_ref_count(list$1int$_initialize((struct list$1int$*)come_increment_ref_count((struct list$1int$*)come_calloc(1, sizeof(struct list$1int$)*(1), "/usr/local/include/neo-c.h", 1511, 282, "struct list$1int$*"), "/usr/local/include/neo-c.h", 1511, 286)), "/usr/local/include/neo-c.h", 1511, 287);
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
        __result_obj__0 = (struct list$1int$*)come_increment_ref_count(result, "/usr/local/include/neo-c.h", 1525, 294);
    come_call_finalizer(list$1int$$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1525, 295);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1525, 296);
    return __result_obj__0;
}

static struct list$1int$* list$1int$_initialize(struct list$1int$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$_initialize"; neo_current_frame = &fr;
    struct list$1int$* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = (struct list$1int$*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 1483, 283);
    come_call_finalizer(list$1int$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1483, 284);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1483, 285);
    return __result_obj__0;
}

static struct list$1int$* list$1int$_add(struct list$1int$* self, int item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$_add"; neo_current_frame = &fr;
    struct list$1int$* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1int$* litem;
    struct list_item$1int$* litem_7;
    struct list_item$1int$* litem_8;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/neo-c.h", 1532, 288, "struct list_item$1int$*"))), "/usr/local/include/neo-c.h", 1532, 289);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        litem->item=item;
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_7=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/neo-c.h", 1542, 290, "struct list_item$1int$*"))), "/usr/local/include/neo-c.h", 1542, 291);
        litem_7->prev=self->head;
        litem_7->next=((void*)0);
        litem_7->item=item;
        self->tail=litem_7;
        self->head->next=litem_7;
    }
    else {
        __right_value0 = (void*)0;
        litem_8=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/neo-c.h", 1552, 292, "struct list_item$1int$*"))), "/usr/local/include/neo-c.h", 1552, 293);
        litem_8->prev=self->tail;
        litem_8->next=((void*)0);
        litem_8->item=item;
        self->tail->next=litem_8;
        self->tail=litem_8;
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
        come_call_finalizer(list_item$1int$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1504, 297);
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
                __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(((void*)0), "/usr/local/include/neo-c.h", 1509, 309);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1509, 310);
        return __result_obj__0;
    }
    result=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/neo-c.h", 1511, 311, "struct list$1char$ph*"), "/usr/local/include/neo-c.h", 1511, 315)), "/usr/local/include/neo-c.h", 1511, 316);
    it=self->head;
    while(it!=((void*)0)) {
        if(1) {
            __right_value0 = (void*)0;
            list$1char$ph_add(result,(char* )come_increment_ref_count((char* )come_memdup(it->item, "/usr/local/include/neo-c.h", 1516, 331, "char* "), "/usr/local/include/neo-c.h", 1516, 332));
        }
        else {
            __right_value0 = (void*)0;
            list$1char$ph_add(result,(char* )come_increment_ref_count((char* )come_memdup(it->item, "/usr/local/include/neo-c.h", 1519, 333, "char* "), "/usr/local/include/neo-c.h", 1519, 334));
        }
        it=it->next;
    }
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(result, "/usr/local/include/neo-c.h", 1525, 335);
    come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1525, 336);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1525, 337);
    return __result_obj__0;
}

static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_initialize"; neo_current_frame = &fr;
    struct list$1char$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 1483, 312);
    come_call_finalizer(list$1char$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1483, 313);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1483, 314);
    return __result_obj__0;
}

static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_add"; neo_current_frame = &fr;
    struct list$1char$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1char$ph* litem;
    char*  __dec_obj36  ;
    struct list_item$1char$ph* litem_9;
    char*  __dec_obj37  ;
    struct list_item$1char$ph* litem_10;
    char*  __dec_obj38  ;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1529, 317));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 1532, 318, "struct list_item$1char$ph*"))), "/usr/local/include/neo-c.h", 1532, 319);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj36=litem->item,
        litem->item=(char* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1536, 321);
        __dec_obj36 = come_decrement_ref_count(__dec_obj36, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1536, 320);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_9=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 1542, 322, "struct list_item$1char$ph*"))), "/usr/local/include/neo-c.h", 1542, 323);
        litem_9->prev=self->head;
        litem_9->next=((void*)0);
        __dec_obj37=litem_9->item,
        litem_9->item=(char* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1546, 325);
        __dec_obj37 = come_decrement_ref_count(__dec_obj37, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1546, 324);
        self->tail=litem_9;
        self->head->next=litem_9;
    }
    else {
        __right_value0 = (void*)0;
        litem_10=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 1552, 326, "struct list_item$1char$ph*"))), "/usr/local/include/neo-c.h", 1552, 327);
        litem_10->prev=self->tail;
        litem_10->next=((void*)0);
        __dec_obj38=litem_10->item,
        litem_10->item=(char* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1556, 329);
        __dec_obj38 = come_decrement_ref_count(__dec_obj38, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1556, 328);
        self->tail->next=litem_10;
        self->tail=litem_10;
    }
    self->len++;
        __result_obj__0 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1564, 330));
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
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1504, 338);
    }
            neo_current_frame = fr.prev;
}

struct sSStringNode* sSStringNode_initialize(struct sSStringNode* self, char*  value  , struct list$1sNode$ph* exps, int sline, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sSStringNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __dec_obj44  ;
    struct list$1sNode$ph* __dec_obj45;
    struct sSStringNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sSStringNode*)come_increment_ref_count(self, "10str.nc", 95, 358),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "10str.nc}", 95, 359);
    __right_value0 = (void*)0;
    __dec_obj44=self->value,
    self->value=(char* )come_increment_ref_count(__builtin_string(value), "10str.nc", 97, 361);
    __dec_obj44 = come_decrement_ref_count(__dec_obj44, (void*)0, (void*)0, 0,0, (void*)0, "10str.nc", 97, 360);
    __right_value0 = (void*)0;
    __dec_obj45=self->exps,
    self->exps=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(exps), "10str.nc", 98, 363);
    come_call_finalizer(list$1sNode$ph_finalize, __dec_obj45,(void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc", 98, 362);
        __result_obj__0 = (struct sSStringNode*)come_increment_ref_count(self, "10str.nc", 101, 364);
    come_call_finalizer(sSStringNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "10str.nc}", 101, 368);
    (value = come_decrement_ref_count(value, (void*)0, (void*)0, 0, 0, (void*)0, "10str.nc", 101, 369));
    come_call_finalizer(list$1sNode$ph$p_finalize, exps, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 101, 370);
    neo_current_frame = fr.prev;
    come_call_finalizer(sSStringNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "10str.nc}", 101, 371);
    return __result_obj__0;
}

char*  sSStringNode_kind(struct sSStringNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sSStringNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sSStringNode"))), "10str.nc", 103, 372);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "10str.nc", 103, 373));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "10str.nc", 103, 374));
    return __result_obj__0;
}

_Bool sSStringNode_compile(struct sSStringNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sSStringNode_compile"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    struct buffer*  buf  ;
    struct list$1sNode$ph* _o2_saved_1;
    struct sNode* it;
    struct sNode* obj;
    struct list$1tuple2$2char$phsNode$ph$ph* params;
    void* __right_value2 = (void*)0;
    void* __right_value3 = (void*)0;
    struct sNode* node;
    _Bool Value;
    _Bool __result_obj__0;
    struct CVALUE*  come_value_15  ;
    struct sType*  type2  ;
    char*  __dec_obj51  ;
    struct sType*  __dec_obj52  ;
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "10str.nc", 108, 375, "struct CVALUE* "), "10str.nc", 108, 376)), "10str.nc", 108, 377);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "10str.nc", 110, 378, "struct buffer* "), "10str.nc", 110, 379)), "10str.nc", 110, 380);
    buffer_append_str(buf,"xsprintf(\"");
    buffer_append_str(buf,self->value);
    buffer_append_str(buf,"\"");
    if(list$1sNode$ph_length(self->exps)>0) {
        for(_o2_saved_1=(struct list$1sNode$ph*)come_increment_ref_count(self->exps, "10str.nc", 117, 381),it=list$1sNode$ph_begin(_o2_saved_1)        ;!list$1sNode$ph_end(_o2_saved_1);it=list$1sNode$ph_next(_o2_saved_1)){
            __right_value0 = (void*)0;
            obj=(struct sNode*)come_increment_ref_count(sNode_clone(it), "10str.nc", 118, 382);
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "10str.nc", 120, 383, "struct list$1tuple2$2char$phsNode$ph$ph*"), "10str.nc", 120, 391)), "10str.nc", 120, 392);
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            list$1tuple2$2char$phsNode$ph$ph_add(params,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "10str.nc", 121, 407, "struct tuple2$2char$phsNode$ph"), "10str.nc", 121, 417),(char*)come_increment_ref_count(xsprintf("self"), "10str.nc", 121, 418),(struct sNode*)come_increment_ref_count(sNode_clone(it), "10str.nc", 121, 419)), "10str.nc", 121, 420));
            __right_value0 = (void*)0;
            node=(struct sNode*)come_increment_ref_count(create_method_call("to_string",(struct sNode*)come_increment_ref_count(obj, "10str.nc", 123, 421),params,((void*)0),0,((void*)0),info,(_Bool)0), "10str.nc", 123, 422);
            Value=node_compile(node,info);
            if(!Value) {
                                __result_obj__0 = (_Bool)0;
                ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0,(void*)0, "10str.nc", 126, 423):(void*)0);
                come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 126, 424);
                ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "10str.nc", 126, 425):(void*)0);
                come_call_finalizer(list$1sNode$ph$p_finalize, _o2_saved_1, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 126, 426);
                come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 126, 427);
                come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 126, 428);
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
            __right_value0 = (void*)0;
            come_value_15=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "10str.nc", 129, 429);
            buffer_append_str(buf,",");
            buffer_append_str(buf,come_value_15->c_value);
            ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0,(void*)0, "10str.nc", 134, 430):(void*)0);
            come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 134, 431);
            ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "10str.nc", 134, 432):(void*)0);
            come_call_finalizer(CVALUE_finalize, come_value_15, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 134, 433);
        }
        come_call_finalizer(list$1sNode$ph$p_finalize, _o2_saved_1, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 136, 434);
    }
    buffer_append_str(buf,")");
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __right_value2 = (void*)0;
    type2=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "10str.nc", 138, 435, "struct sType* "), "10str.nc", 138, 436),(char*)come_increment_ref_count(xsprintf("char*"), "10str.nc", 138, 437),(_Bool)0,info,(_Bool)0,0), "10str.nc", 138, 438);
    type2->mHeap=(_Bool)1;
    __right_value0 = (void*)0;
    __dec_obj51=come_value->c_value,
    come_value->c_value=(char* )come_increment_ref_count(buffer_to_string(buf), "10str.nc", 141, 440);
    __dec_obj51 = come_decrement_ref_count(__dec_obj51, (void*)0, (void*)0, 0,0, (void*)0, "10str.nc", 141, 439);
    __right_value0 = (void*)0;
    __dec_obj52=come_value->type,
    come_value->type=(struct sType* )come_increment_ref_count(sType_clone(type2), "10str.nc", 142, 442);
    come_call_finalizer(sType_finalize, __dec_obj52,(void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc", 142, 441);
    come_value->var=((void*)0);
    append_object_to_right_values(come_value,type2,info,(_Bool)0,((void*)0),((void*)0),((void*)0));
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "10str.nc", 147, 443));
    add_come_last_code(info,"%s",come_value->c_value);
        __result_obj__0 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 151, 444);
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 151, 445);
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 151, 446);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sSStringNode_finalize(struct sSStringNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sSStringNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sSStringNode_finalize", 2, 365));
    }
    if(self!=((void*)0)&&self->value!=((void*)0)) {
        (self->value = come_decrement_ref_count(self->value, (void*)0, (void*)0, 0, 0, (void*)0, "sSStringNode_finalize", 3, 366));
    }
    if(self!=((void*)0)&&self->exps!=((void*)0)) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->exps, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sSStringNode_finalize}", 4, 367);
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
    struct sNode* result_12;
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
    memset(&result_12,0,sizeof(struct sNode*));
        __result_obj__0 = result_12;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_initialize(struct list$1tuple2$2char$phsNode$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsNode$ph$ph_initialize"; neo_current_frame = &fr;
    struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = (struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 1483, 384);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1483, 389);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1483, 390);
    return __result_obj__0;
}

static void list$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsNode$ph$ph$p_finalize"; neo_current_frame = &fr;
    struct list_item$1tuple2$2char$phsNode$ph$ph* it;
    struct list_item$1tuple2$2char$phsNode$ph$ph* prev_it;
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1tuple2$2char$phsNode$ph$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1504, 388);
    }
        neo_current_frame = fr.prev;
}

static void list_item$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsNode$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1tuple2$2char$phsNode$ph$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "list_item$1tuple2$2char$phsNode$ph$ph$p_finalize}", 2, 387);
    }
            neo_current_frame = fr.prev;
}

static void tuple2$2char$phsNode$ph$p_finalize(struct tuple2$2char$phsNode$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2char$phsNode$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, (void*)0, "tuple2$2char$phsNode$ph$p_finalize", 2, 385));
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        ((self->v2) ? self->v2 = come_decrement_ref_count(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0,(void*)0, "tuple2$2char$phsNode$ph$p_finalize", 3, 386):(void*)0);
    }
            neo_current_frame = fr.prev;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_add(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsNode$ph$ph_add"; neo_current_frame = &fr;
    struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1tuple2$2char$phsNode$ph$ph* litem;
    struct tuple2$2char$phsNode$ph* __dec_obj46;
    struct list_item$1tuple2$2char$phsNode$ph$ph* litem_13;
    struct tuple2$2char$phsNode$ph* __dec_obj47;
    struct list_item$1tuple2$2char$phsNode$ph$ph* litem_14;
    struct tuple2$2char$phsNode$ph* __dec_obj48;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1529, 393);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/neo-c.h", 1532, 394, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))), "/usr/local/include/neo-c.h", 1532, 395);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj46=litem->item,
        litem->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1536, 397);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj46,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1536, 396);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_13=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/neo-c.h", 1542, 398, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))), "/usr/local/include/neo-c.h", 1542, 399);
        litem_13->prev=self->head;
        litem_13->next=((void*)0);
        __dec_obj47=litem_13->item,
        litem_13->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1546, 401);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj47,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1546, 400);
        self->tail=litem_13;
        self->head->next=litem_13;
    }
    else {
        __right_value0 = (void*)0;
        litem_14=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/neo-c.h", 1552, 402, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))), "/usr/local/include/neo-c.h", 1552, 403);
        litem_14->prev=self->tail;
        litem_14->next=((void*)0);
        __dec_obj48=litem_14->item,
        litem_14->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1556, 405);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj48,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1556, 404);
        self->tail->next=litem_14;
        self->tail=litem_14;
    }
    self->len++;
        __result_obj__0 = self;
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1564, 406);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_initialize(struct tuple2$2char$phsNode$ph* self, char* v1, struct sNode* v2)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2char$phsNode$ph_initialize"; neo_current_frame = &fr;
    char*  __dec_obj49  ;
    struct sNode* __dec_obj50;
    struct tuple2$2char$phsNode$ph* __result_obj__0;
    __dec_obj49=self->v1,
    self->v1=(char*)come_increment_ref_count(v1, "/usr/local/include/neo-c.h", 3911, 409);
    __dec_obj49 = come_decrement_ref_count(__dec_obj49, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 3911, 408);
    __dec_obj50=self->v2,
    self->v2=(struct sNode*)come_increment_ref_count(v2, "/usr/local/include/neo-c.h", 3912, 411);
    (__dec_obj50 ? __dec_obj50 = come_decrement_ref_count(__dec_obj50, ((struct sNode*)__dec_obj50)->finalize, ((struct sNode*)__dec_obj50)->_protocol_obj, 0,0, (void*)0, "/usr/local/include/neo-c.h", 3912, 410) :0);
        __result_obj__0 = (struct tuple2$2char$phsNode$ph*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 3914, 412);
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3914, 413);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3914, 414));
    ((v2) ? v2 = come_decrement_ref_count(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 0,(void*)0, "/usr/local/include/neo-c.h", 3914, 415):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3914, 416);
    return __result_obj__0;
}

struct sCharNode* sCharNode_initialize(struct sCharNode* self, int value, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sCharNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sCharNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sCharNode*)come_increment_ref_count(self, "10str.nc", 159, 447),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "10str.nc}", 159, 448);
    self->value=value;
        __result_obj__0 = (struct sCharNode*)come_increment_ref_count(self, "10str.nc", 164, 449);
    come_call_finalizer(sCharNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "10str.nc}", 164, 451);
    neo_current_frame = fr.prev;
    come_call_finalizer(sCharNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "10str.nc}", 164, 452);
    return __result_obj__0;
}

char*  sCharNode_kind(struct sCharNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sCharNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sCharNode"))), "10str.nc", 166, 453);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "10str.nc", 166, 454));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "10str.nc", 166, 455));
    return __result_obj__0;
}

_Bool sCharNode_compile(struct sCharNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sCharNode_compile"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj53  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj54  ;
    _Bool __result_obj__0;
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "10str.nc", 171, 456, "struct CVALUE* "), "10str.nc", 171, 457)), "10str.nc", 171, 458);
    __right_value0 = (void*)0;
    __dec_obj53=come_value->c_value,
    come_value->c_value=(char* )come_increment_ref_count(xsprintf("%d",self->value), "10str.nc", 173, 460);
    __dec_obj53 = come_decrement_ref_count(__dec_obj53, (void*)0, (void*)0, 0,0, (void*)0, "10str.nc", 173, 459);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj54=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "10str.nc", 174, 461, "struct sType* "), "10str.nc", 174, 462),(char*)come_increment_ref_count(xsprintf("char"), "10str.nc", 174, 463),(_Bool)0,info,(_Bool)0,0), "10str.nc", 174, 465);
    come_call_finalizer(sType_finalize, __dec_obj54,(void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc", 174, 464);
    come_value->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "10str.nc", 177, 466));
    add_come_last_code(info,"%s",come_value->c_value);
        __result_obj__0 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 181, 467);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sCharNode_finalize(struct sCharNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sCharNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sCharNode_finalize", 2, 450));
    }
        neo_current_frame = fr.prev;
}

struct sWCharNode* sWCharNode_initialize(struct sWCharNode* self, int  value  , _Bool quote, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sWCharNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sWCharNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sWCharNode*)come_increment_ref_count(self, "10str.nc", 189, 468),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "10str.nc}", 189, 469);
    self->value=value;
    self->quote=quote;
        __result_obj__0 = (struct sWCharNode*)come_increment_ref_count(self, "10str.nc", 195, 470);
    come_call_finalizer(sWCharNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "10str.nc}", 195, 472);
    neo_current_frame = fr.prev;
    come_call_finalizer(sWCharNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "10str.nc}", 195, 473);
    return __result_obj__0;
}

char*  sWCharNode_kind(struct sWCharNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sWCharNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sWCharNode"))), "10str.nc", 197, 474);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "10str.nc", 197, 475));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "10str.nc", 197, 476));
    return __result_obj__0;
}

_Bool sWCharNode_compile(struct sWCharNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sWCharNode_compile"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj55  ;
    char*  __dec_obj56  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj57  ;
    _Bool __result_obj__0;
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "10str.nc", 202, 477, "struct CVALUE* "), "10str.nc", 202, 478)), "10str.nc", 202, 479);
    if(self->quote) {
        __right_value0 = (void*)0;
        __dec_obj55=come_value->c_value,
        come_value->c_value=(char* )come_increment_ref_count(xsprintf("L'\\%o'",self->value), "10str.nc", 205, 481);
        __dec_obj55 = come_decrement_ref_count(__dec_obj55, (void*)0, (void*)0, 0,0, (void*)0, "10str.nc", 205, 480);
    }
    else {
        __right_value0 = (void*)0;
        __dec_obj56=come_value->c_value,
        come_value->c_value=(char* )come_increment_ref_count(xsprintf("L'%lc'",self->value), "10str.nc", 208, 483);
        __dec_obj56 = come_decrement_ref_count(__dec_obj56, (void*)0, (void*)0, 0,0, (void*)0, "10str.nc", 208, 482);
    }
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj57=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "10str.nc", 210, 484, "struct sType* "), "10str.nc", 210, 485),(char*)come_increment_ref_count(xsprintf("int"), "10str.nc", 210, 486),(_Bool)0,info,(_Bool)0,0), "10str.nc", 210, 488);
    come_call_finalizer(sType_finalize, __dec_obj57,(void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc", 210, 487);
    come_value->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "10str.nc", 213, 489));
    add_come_last_code(info,"%s",come_value->c_value);
        __result_obj__0 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 217, 490);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sWCharNode_finalize(struct sWCharNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sWCharNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sWCharNode_finalize", 2, 471));
    }
        neo_current_frame = fr.prev;
}

struct sWStringNode* sWStringNode_initialize(struct sWStringNode* self, int*  value  , int sline, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sWStringNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    int*  __dec_obj58  ;
    struct sWStringNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sWStringNode*)come_increment_ref_count(self, "10str.nc", 225, 491),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "10str.nc}", 225, 492);
    __dec_obj58=self->value,
    self->value=(int* )come_increment_ref_count(value, "10str.nc", 227, 494);
    __dec_obj58 = come_decrement_ref_count(__dec_obj58, (void*)0, (void*)0, 0,0, (void*)0, "10str.nc", 227, 493);
        __result_obj__0 = (struct sWStringNode*)come_increment_ref_count(self, "10str.nc", 230, 495);
    come_call_finalizer(sWStringNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "10str.nc}", 230, 498);
    (value = come_decrement_ref_count(value, (void*)0, (void*)0, 0, 0, (void*)0, "10str.nc", 230, 499));
    neo_current_frame = fr.prev;
    come_call_finalizer(sWStringNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "10str.nc}", 230, 500);
    return __result_obj__0;
}

char*  sWStringNode_kind(struct sWStringNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sWStringNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sWStringNode"))), "10str.nc", 232, 501);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "10str.nc", 232, 502));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "10str.nc", 232, 503));
    return __result_obj__0;
}

_Bool sWStringNode_compile(struct sWStringNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sWStringNode_compile"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj59  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj60  ;
    _Bool __result_obj__0;
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "10str.nc", 237, 504, "struct CVALUE* "), "10str.nc", 237, 505)), "10str.nc", 237, 506);
    __right_value0 = (void*)0;
    __dec_obj59=come_value->c_value,
    come_value->c_value=(char* )come_increment_ref_count(xsprintf("L\"%ls\"",self->value), "10str.nc", 239, 508);
    __dec_obj59 = come_decrement_ref_count(__dec_obj59, (void*)0, (void*)0, 0,0, (void*)0, "10str.nc", 239, 507);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj60=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "10str.nc", 240, 509, "struct sType* "), "10str.nc", 240, 510),(char*)come_increment_ref_count(xsprintf("int*"), "10str.nc", 240, 511),(_Bool)0,info,(_Bool)0,0), "10str.nc", 240, 513);
    come_call_finalizer(sType_finalize, __dec_obj60,(void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc", 240, 512);
    come_value->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "10str.nc", 243, 514));
    add_come_last_code(info,"%s",come_value->c_value);
        __result_obj__0 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 247, 515);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sWStringNode_finalize(struct sWStringNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sWStringNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sWStringNode_finalize", 2, 496));
    }
    if(self!=((void*)0)&&self->value!=((void*)0)) {
        (self->value = come_decrement_ref_count(self->value, (void*)0, (void*)0, 0, 0, (void*)0, "sWStringNode_finalize", 3, 497));
    }
        neo_current_frame = fr.prev;
}

struct sPrefixedCharNode* sPrefixedCharNode_initialize(struct sPrefixedCharNode* self, int value, char*  prefix  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sPrefixedCharNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __dec_obj61  ;
    struct sPrefixedCharNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sPrefixedCharNode*)come_increment_ref_count(self, "10str.nc", 255, 516),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "10str.nc}", 255, 517);
    self->value=value;
    __right_value0 = (void*)0;
    __dec_obj61=self->prefix,
    self->prefix=(char* )come_increment_ref_count(__builtin_string(prefix), "10str.nc", 258, 519);
    __dec_obj61 = come_decrement_ref_count(__dec_obj61, (void*)0, (void*)0, 0,0, (void*)0, "10str.nc", 258, 518);
        __result_obj__0 = (struct sPrefixedCharNode*)come_increment_ref_count(self, "10str.nc", 261, 520);
    come_call_finalizer(sPrefixedCharNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "10str.nc}", 261, 523);
    (prefix = come_decrement_ref_count(prefix, (void*)0, (void*)0, 0, 0, (void*)0, "10str.nc", 261, 524));
    neo_current_frame = fr.prev;
    come_call_finalizer(sPrefixedCharNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "10str.nc}", 261, 525);
    return __result_obj__0;
}

char*  sPrefixedCharNode_kind(struct sPrefixedCharNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sPrefixedCharNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sPrefixedCharNode"))), "10str.nc", 263, 526);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "10str.nc", 263, 527));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "10str.nc", 263, 528));
    return __result_obj__0;
}

_Bool sPrefixedCharNode_compile(struct sPrefixedCharNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sPrefixedCharNode_compile"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj62  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj63  ;
    _Bool __result_obj__0;
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "10str.nc", 268, 529, "struct CVALUE* "), "10str.nc", 268, 530)), "10str.nc", 268, 531);
    __right_value0 = (void*)0;
    __dec_obj62=come_value->c_value,
    come_value->c_value=(char* )come_increment_ref_count(xsprintf("%s'\\%o'",self->prefix,self->value), "10str.nc", 270, 533);
    __dec_obj62 = come_decrement_ref_count(__dec_obj62, (void*)0, (void*)0, 0,0, (void*)0, "10str.nc", 270, 532);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj63=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "10str.nc", 271, 534, "struct sType* "), "10str.nc", 271, 535),(char*)come_increment_ref_count(xsprintf("int"), "10str.nc", 271, 536),(_Bool)0,info,(_Bool)0,0), "10str.nc", 271, 538);
    come_call_finalizer(sType_finalize, __dec_obj63,(void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc", 271, 537);
    come_value->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "10str.nc", 274, 539));
    add_come_last_code(info,"%s",come_value->c_value);
        __result_obj__0 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 278, 540);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sPrefixedCharNode_finalize(struct sPrefixedCharNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sPrefixedCharNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sPrefixedCharNode_finalize", 2, 521));
    }
    if(self!=((void*)0)&&self->prefix!=((void*)0)) {
        (self->prefix = come_decrement_ref_count(self->prefix, (void*)0, (void*)0, 0, 0, (void*)0, "sPrefixedCharNode_finalize", 3, 522));
    }
        neo_current_frame = fr.prev;
}

struct sPrefixedStringNode* sPrefixedStringNode_initialize(struct sPrefixedStringNode* self, char*  value  , char*  prefix  , int sline, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sPrefixedStringNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __dec_obj64  ;
    char*  __dec_obj65  ;
    struct sPrefixedStringNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sPrefixedStringNode*)come_increment_ref_count(self, "10str.nc", 286, 541),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "10str.nc}", 286, 542);
    __right_value0 = (void*)0;
    __dec_obj64=self->value,
    self->value=(char* )come_increment_ref_count(__builtin_string(value), "10str.nc", 288, 544);
    __dec_obj64 = come_decrement_ref_count(__dec_obj64, (void*)0, (void*)0, 0,0, (void*)0, "10str.nc", 288, 543);
    __right_value0 = (void*)0;
    __dec_obj65=self->prefix,
    self->prefix=(char* )come_increment_ref_count(__builtin_string(prefix), "10str.nc", 289, 546);
    __dec_obj65 = come_decrement_ref_count(__dec_obj65, (void*)0, (void*)0, 0,0, (void*)0, "10str.nc", 289, 545);
        __result_obj__0 = (struct sPrefixedStringNode*)come_increment_ref_count(self, "10str.nc", 292, 547);
    come_call_finalizer(sPrefixedStringNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "10str.nc}", 292, 551);
    (value = come_decrement_ref_count(value, (void*)0, (void*)0, 0, 0, (void*)0, "10str.nc", 292, 552));
    (prefix = come_decrement_ref_count(prefix, (void*)0, (void*)0, 0, 0, (void*)0, "10str.nc", 292, 553));
    neo_current_frame = fr.prev;
    come_call_finalizer(sPrefixedStringNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "10str.nc}", 292, 554);
    return __result_obj__0;
}

char*  sPrefixedStringNode_kind(struct sPrefixedStringNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sPrefixedStringNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sPrefixedStringNode"))), "10str.nc", 294, 555);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "10str.nc", 294, 556));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "10str.nc", 294, 557));
    return __result_obj__0;
}

_Bool sPrefixedStringNode_compile(struct sPrefixedStringNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sPrefixedStringNode_compile"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj66  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj67  ;
    _Bool __result_obj__0;
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "10str.nc", 299, 558, "struct CVALUE* "), "10str.nc", 299, 559)), "10str.nc", 299, 560);
    __right_value0 = (void*)0;
    __dec_obj66=come_value->c_value,
    come_value->c_value=(char* )come_increment_ref_count(xsprintf("%s\"%s\"",self->prefix,self->value), "10str.nc", 301, 562);
    __dec_obj66 = come_decrement_ref_count(__dec_obj66, (void*)0, (void*)0, 0,0, (void*)0, "10str.nc", 301, 561);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj67=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "10str.nc", 302, 563, "struct sType* "), "10str.nc", 302, 564),(char*)come_increment_ref_count(xsprintf("int*"), "10str.nc", 302, 565),(_Bool)0,info,(_Bool)0,0), "10str.nc", 302, 567);
    come_call_finalizer(sType_finalize, __dec_obj67,(void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc", 302, 566);
    come_value->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "10str.nc", 305, 568));
    add_come_last_code(info,"%s",come_value->c_value);
        __result_obj__0 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 309, 569);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sPrefixedStringNode_finalize(struct sPrefixedStringNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sPrefixedStringNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sPrefixedStringNode_finalize", 2, 548));
    }
    if(self!=((void*)0)&&self->value!=((void*)0)) {
        (self->value = come_decrement_ref_count(self->value, (void*)0, (void*)0, 0, 0, (void*)0, "sPrefixedStringNode_finalize", 3, 549));
    }
    if(self!=((void*)0)&&self->prefix!=((void*)0)) {
        (self->prefix = come_decrement_ref_count(self->prefix, (void*)0, (void*)0, 0, 0, (void*)0, "sPrefixedStringNode_finalize", 4, 550));
    }
        neo_current_frame = fr.prev;
}

struct sListNode* sListNode_initialize(struct sListNode* self, struct list$1sNode$ph* list_elements, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sListNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct list$1sNode$ph* __dec_obj68;
    struct sListNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sListNode*)come_increment_ref_count(self, "10str.nc", 317, 570),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "10str.nc}", 317, 571);
    __dec_obj68=self->list_elements,
    self->list_elements=(struct list$1sNode$ph*)come_increment_ref_count(list_elements, "10str.nc", 319, 573);
    come_call_finalizer(list$1sNode$ph_finalize, __dec_obj68,(void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc", 319, 572);
        __result_obj__0 = (struct sListNode*)come_increment_ref_count(self, "10str.nc", 322, 574);
    come_call_finalizer(sListNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "10str.nc}", 322, 577);
    come_call_finalizer(list$1sNode$ph$p_finalize, list_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 322, 578);
    neo_current_frame = fr.prev;
    come_call_finalizer(sListNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "10str.nc}", 322, 579);
    return __result_obj__0;
}

char*  sListNode_kind(struct sListNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sListNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sListNode"))), "10str.nc", 324, 580);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "10str.nc", 324, 581));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "10str.nc", 324, 582));
    return __result_obj__0;
}

_Bool sListNode_compile(struct sListNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sListNode_compile"; neo_current_frame = &fr;
    struct list$1sNode$ph* list_elements;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1CVALUE$ph* params;
    struct sType*  list_element_type  ;
    _Bool __result_obj__0;
    int n;
    struct list$1sNode$ph* _o2_saved_2;
    struct sNode* it;
    _Bool Value;
    struct CVALUE*  come_value  ;
    struct sType*  __dec_obj69  ;
    struct sType*  type_values  ;
    char*  var_name  ;
    struct sVar*  var_  ;
    struct buffer*  source  ;
    int i;
    struct list$1CVALUE$ph* _o2_saved_3;
    struct CVALUE*  it_19  ;
    void* __right_value2 = (void*)0;
    struct sType*  list_type  ;
    struct sType*  obj_type  ;
    struct tuple2$2char$phsGenericsFun$p* multiple_assign_var1
;    char*  name  =0;
    struct sGenericsFun*  generics_fun  =0;
    char*  generics_fun_name  ;
    struct sFun*  fun  ;
    char*  __dec_obj76  ;
    struct sType*  result_type  ;
    struct sType*  type  ;
    struct CVALUE*  obj_value  ;
    struct buffer*  num_string  ;
    struct sType*  type2_  ;
    struct sType*  type2  ;
    char*  type_name  ;
    struct sType*  any_type  ;
    _Bool _conditional_value_X0;
    char*  __dec_obj77  ;
    char*  __dec_obj78  ;
    struct sType*  type3  ;
    struct sType*  __dec_obj79  ;
    struct list$1CVALUE$ph* come_params;
    struct CVALUE*  come_value2  ;
    char*  __dec_obj80  ;
    struct sType*  __dec_obj81  ;
    struct CVALUE*  come_value3  ;
    char*  __dec_obj82  ;
    struct sType*  __dec_obj83  ;
    int j;
    struct list$1CVALUE$ph* _o2_saved_4;
    struct CVALUE*  it_27  ;
    struct CVALUE*  come_value4  ;
    char*  __dec_obj84  ;
    struct sType*  __dec_obj85  ;
    list_elements=self->list_elements;
    params=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "10str.nc", 331, 583, "struct list$1CVALUE$ph*"), "10str.nc", 331, 589)), "10str.nc", 331, 590);
    list_element_type=((void*)0);
    if(info->exp_value) {
        err_msg(info,"nest value expression is prohibited");
                __result_obj__0 = (_Bool)0;
        come_call_finalizer(list$1CVALUE$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 336, 591);
        come_call_finalizer(sType_finalize, list_element_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 336, 592);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    info->exp_value=(_Bool)1;
    n=0;
    for(_o2_saved_2=list_elements,it=list$1sNode$ph_begin(_o2_saved_2)    ;!list$1sNode$ph_end(_o2_saved_2);it=list$1sNode$ph_next(_o2_saved_2)){
        Value=node_compile(it,info);
        if(!Value) {
                        __result_obj__0 = (_Bool)0;
            come_call_finalizer(list$1CVALUE$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 343, 593);
            come_call_finalizer(sType_finalize, list_element_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 343, 594);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        __right_value0 = (void*)0;
        come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "10str.nc", 346, 595);
        if(list_element_type) {
            __right_value0 = (void*)0;
            check_assign_type(((char*)(__right_value0=xsprintf("invalid list element type"))),list_element_type,come_value->type,come_value,info);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "10str.nc", 349, 596));
        }
        remove_value_from_right_value_objects(come_value,info);
        list$1CVALUE$ph_push_back(params,(struct CVALUE* )come_increment_ref_count(come_value, "10str.nc", 354, 597));
        if(list_element_type) {
            __right_value0 = (void*)0;
            check_assign_type(((char*)(__right_value0=xsprintf("List element type"))),list_element_type,come_value->type,come_value,info);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "10str.nc", 357, 598));
        }
        __right_value0 = (void*)0;
        __dec_obj69=list_element_type,
        list_element_type=(struct sType* )come_increment_ref_count(sType_clone(come_value->type), "10str.nc", 359, 600);
        come_call_finalizer(sType_finalize, __dec_obj69,(void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc", 359, 599);
        n++;
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 363, 601);
    }
    info->exp_value=(_Bool)0;
    __right_value0 = (void*)0;
    type_values=(struct sType* )come_increment_ref_count(sType_clone(list_element_type), "10str.nc", 365, 602);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    list$1sNode$ph_push_back(type_values->mArrayNum,(struct sNode*)come_increment_ref_count(create_int_node((char* )come_increment_ref_count(int_to_string(list$1CVALUE$ph_length(params)), "10str.nc", 366, 617),info), "10str.nc", 366, 618));
    type_values->mHeap=(_Bool)0;
    static int list_value_num=0;
    __right_value0 = (void*)0;
    var_name=(char* )come_increment_ref_count(xsprintf("__list_values%d__",++list_value_num), "10str.nc", 370, 619);
    __right_value0 = (void*)0;
    add_variable_to_table(var_name,((struct sType* )(__right_value0=sType_clone(type_values))),info,(_Bool)0,(_Bool)0,(_Bool)0);
    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "10str.nc}", 372, 620);
    var_=get_variable_from_table(info->lv_table,var_name);
    __right_value0 = (void*)0;
    add_come_code_at_function_head(info,"%s;\n",((char* )(__right_value0=make_define_var(type_values,var_->mCValueName,info,(_Bool)0,(_Bool)0))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "10str.nc", 376, 621));
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    source=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "10str.nc", 378, 622, "struct buffer* "), "10str.nc", 378, 623)), "10str.nc", 378, 624);
    buffer_append_str(source,"(");
    i=0;
    for(_o2_saved_3=(struct list$1CVALUE$ph*)come_increment_ref_count(params, "10str.nc", 383, 625),it_19=list$1CVALUE$ph_begin(_o2_saved_3)    ;!list$1CVALUE$ph_end(_o2_saved_3);it_19=list$1CVALUE$ph_next(_o2_saved_3)){
        if(list_element_type->mHeap) {
            __right_value0 = (void*)0;
            buffer_append_format(source,"%s[%d]=%s,\n",var_->mCValueName,i,((struct CVALUE* )(__right_value0=list$1CVALUE$ph_operator_load_element(params,i)))->c_value);
            come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "10str.nc}", 386, 644);
        }
        else {
            __right_value0 = (void*)0;
            buffer_append_format(source,"%s[%d]=%s,\n",var_->mCValueName,i,((struct CVALUE* )(__right_value0=list$1CVALUE$ph_operator_load_element(params,i)))->c_value);
            come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "10str.nc}", 389, 645);
        }
        i++;
    }
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    list_type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "10str.nc", 398, 646, "struct sType* "), "10str.nc", 398, 647),(char*)come_increment_ref_count(xsprintf("list"), "10str.nc", 398, 648),(_Bool)0,info,(_Bool)0,0), "10str.nc", 398, 649);
    __right_value0 = (void*)0;
    list$1sType$ph_push_back(list_type->mGenericsTypes,(struct sType* )come_increment_ref_count((((struct sType* )(__right_value0=sType_clone(list_element_type)))), "10str.nc", 399, 664));
    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "}", 399, 665);
    __right_value0 = (void*)0;
    obj_type=(struct sType* )come_increment_ref_count(sType_clone(list_type), "10str.nc", 401, 666);
    const char* fun_name="initialize_with_values";
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    multiple_assign_var1=((struct tuple2$2char$phsGenericsFun$p*)(__right_value1=make_generics_function(obj_type,(char* )come_increment_ref_count(__builtin_string(fun_name), "10str.nc", 404, 667),info,(_Bool)1)));
    name=(char* )come_increment_ref_count(multiple_assign_var1->v1, "10str.nc", 404, 668);
    generics_fun=multiple_assign_var1->v2;
    come_call_finalizer(tuple2$2char$phsGenericsFun$p$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "10str.nc}", 404, 670);
    generics_fun_name=(char* )come_increment_ref_count(name, "10str.nc", 405, 671);
    __right_value0 = (void*)0;
    fun=((struct sFun* )(__right_value0=map$2char$phsFun$ph_at(info->funcs,generics_fun_name,((void*)0),(_Bool)0)));
    if(fun==((void*)0)) {
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __dec_obj76=generics_fun_name,
        generics_fun_name=(char* )come_increment_ref_count(create_method_name(obj_type,(_Bool)0,((char* )(__right_value0=__builtin_string(fun_name))),info,(_Bool)1), "10str.nc", 410, 688);
        __dec_obj76 = come_decrement_ref_count(__dec_obj76, (void*)0, (void*)0, 0,0, (void*)0, "10str.nc", 410, 687);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "10str.nc", 410, 689));
        __right_value0 = (void*)0;
        fun=((struct sFun* )(__right_value0=map$2char$phsFun$ph_at(info->funcs,generics_fun_name,((void*)0),(_Bool)0)));
        if(fun==((void*)0)) {
            err_msg(info,"function not found(%s) at method(%s)(1)",generics_fun_name,info->come_fun->mName);
                        __result_obj__0 = (_Bool)1;
            come_call_finalizer(list$1CVALUE$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 416, 690);
            come_call_finalizer(sType_finalize, list_element_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 416, 691);
            come_call_finalizer(sType_finalize, type_values, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 416, 692);
            (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0, "10str.nc", 416, 693));
            come_call_finalizer(buffer_finalize, source, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 416, 694);
            come_call_finalizer(list$1CVALUE$ph$p_finalize, _o2_saved_3, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 416, 695);
            come_call_finalizer(sType_finalize, list_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 416, 696);
            come_call_finalizer(sType_finalize, obj_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 416, 697);
            (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "10str.nc", 416, 698));
            (generics_fun_name = come_decrement_ref_count(generics_fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "10str.nc", 416, 699));
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
    }
    __right_value0 = (void*)0;
    result_type=(struct sType* )come_increment_ref_count(sType_clone(fun->mResultType), "10str.nc", 420, 700);
    result_type->mStatic=(_Bool)0;
    type=(struct sType* )come_increment_ref_count(list_type, "10str.nc", 423, 701);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    obj_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "10str.nc", 425, 702, "struct CVALUE* "), "10str.nc", 425, 703)), "10str.nc", 425, 704);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    num_string=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "10str.nc", 427, 705, "struct buffer* "), "10str.nc", 427, 706)), "10str.nc", 427, 707);
    buffer_append_str(num_string,"1");
    __right_value0 = (void*)0;
    type2_=(struct sType* )come_increment_ref_count(solve_generics(type,type,info), "10str.nc", 431, 708);
    __right_value0 = (void*)0;
    type2=(struct sType* )come_increment_ref_count(solve_method_generics(type2_,info), "10str.nc", 432, 709);
    __right_value0 = (void*)0;
    type_name=(char* )come_increment_ref_count(make_type_name_string(type2,info,(_Bool)0,(_Bool)1,(_Bool)0,(_Bool)0), "10str.nc", 434, 710);
    any_type=(struct sType* )come_increment_ref_count(type2, "10str.nc", 436, 711);
    any_type->mPointerNum=1;
    any_type->mHeap=(_Bool)1;
    if(__right_value0 = (void*)0,
__right_value1 = (void*)0,
__right_value2 = (void*)0,
({(_conditional_value_X0=(((struct sFun* )(__right_value2=map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value1=xsprintf("come_calloc_v2"))))))));    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "10str.nc", 440, 712));
    come_call_finalizer(sFun_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0, "10str.nc}", 440, 713);
_conditional_value_X0;})) {
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __dec_obj77=obj_value->c_value,
        obj_value->c_value=(char* )come_increment_ref_count(xsprintf("(%s*)come_calloc_v2(1, sizeof(%s)*(%s), \"%s\", %d, %d, \"%s\")",type_name,type_name,((char* )(__right_value0=buffer_to_string(num_string))),info->sname,info->sline,++info->id,type_name), "10str.nc", 441, 715);
        __dec_obj77 = come_decrement_ref_count(__dec_obj77, (void*)0, (void*)0, 0,0, (void*)0, "10str.nc", 441, 714);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "10str.nc", 441, 716));
    }
    else {
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __dec_obj78=obj_value->c_value,
        obj_value->c_value=(char* )come_increment_ref_count(xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, %d, \"%s\")",type_name,type_name,((char* )(__right_value0=buffer_to_string(num_string))),info->sname,info->sline,++info->id,type_name), "10str.nc", 444, 718);
        __dec_obj78 = come_decrement_ref_count(__dec_obj78, (void*)0, (void*)0, 0,0, (void*)0, "10str.nc", 444, 717);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "10str.nc", 444, 719));
    }
    __right_value0 = (void*)0;
    type3=(struct sType* )come_increment_ref_count(sType_clone(type2), "10str.nc", 447, 720);
    type3->mPointerNum++;
    type3->mHeap=(_Bool)1;
    type2->mHeap=(_Bool)1;
    __right_value0 = (void*)0;
    __dec_obj79=obj_value->type,
    obj_value->type=(struct sType* )come_increment_ref_count(sType_clone(type2), "10str.nc", 451, 722);
    come_call_finalizer(sType_finalize, __dec_obj79,(void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc", 451, 721);
    obj_value->var=((void*)0);
    append_object_to_right_values(obj_value,type3,info,(_Bool)0,((void*)0),((void*)0),((void*)0));
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    come_params=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "10str.nc", 457, 723, "struct list$1CVALUE$ph*"), "10str.nc", 457, 724)), "10str.nc", 457, 725);
    if(__right_value0 = (void*)0,
({(_conditional_value_X0=(((struct sType* )(__right_value0=list$1sType$ph_operator_load_element(fun->mParamTypes,0)))->mHeap&&obj_value->type->mHeap));    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "10str.nc}", 459, 744);
_conditional_value_X0;})) {
        __right_value0 = (void*)0;
        std_move(((struct sType* )(__right_value0=list$1sType$ph_operator_load_element(fun->mParamTypes,0))),obj_value->type,obj_value,info);
        come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "10str.nc}", 460, 745);
    }
    list$1CVALUE$ph_push_back(come_params,(struct CVALUE* )come_increment_ref_count(obj_value, "10str.nc", 462, 746));
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    come_value2=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "10str.nc", 464, 747, "struct CVALUE* "), "10str.nc", 464, 748)), "10str.nc", 464, 749);
    __right_value0 = (void*)0;
    __dec_obj80=come_value2->c_value,
    come_value2->c_value=(char* )come_increment_ref_count(xsprintf("%d",list$1CVALUE$ph_length(params)), "10str.nc", 466, 751);
    __dec_obj80 = come_decrement_ref_count(__dec_obj80, (void*)0, (void*)0, 0,0, (void*)0, "10str.nc", 466, 750);
    __dec_obj81=come_value2->type,
    come_value2->type=((void*)0);
    come_call_finalizer(sType_finalize, __dec_obj81,(void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc", 467, 752);
    come_value2->var=((void*)0);
    list$1CVALUE$ph_push_back(come_params,(struct CVALUE* )come_increment_ref_count(come_value2, "10str.nc", 470, 753));
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    come_value3=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "10str.nc", 472, 754, "struct CVALUE* "), "10str.nc", 472, 755)), "10str.nc", 472, 756);
    __right_value0 = (void*)0;
    __dec_obj82=come_value3->c_value,
    come_value3->c_value=(char* )come_increment_ref_count(xsprintf("%s",var_->mCValueName), "10str.nc", 474, 758);
    __dec_obj82 = come_decrement_ref_count(__dec_obj82, (void*)0, (void*)0, 0,0, (void*)0, "10str.nc", 474, 757);
    __dec_obj83=come_value3->type,
    come_value3->type=((void*)0);
    come_call_finalizer(sType_finalize, __dec_obj83,(void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc", 475, 759);
    come_value3->var=((void*)0);
    list$1CVALUE$ph_push_back(come_params,(struct CVALUE* )come_increment_ref_count(come_value3, "10str.nc", 478, 760));
    buffer_append_str(source,generics_fun_name);
    buffer_append_str(source,"(");
    j=0;
    for(_o2_saved_4=(struct list$1CVALUE$ph*)come_increment_ref_count(come_params, "10str.nc", 486, 761),it_27=list$1CVALUE$ph_begin(_o2_saved_4)    ;!list$1CVALUE$ph_end(_o2_saved_4);it_27=list$1CVALUE$ph_next(_o2_saved_4)){
        buffer_append_str(source,it_27->c_value);
        if(j!=list$1CVALUE$ph_length(come_params)-1) {
            buffer_append_str(source,",");
        }
        j++;
    }
    buffer_append_str(source,")");
    buffer_append_str(source,")");
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    come_value4=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "10str.nc", 498, 762, "struct CVALUE* "), "10str.nc", 498, 763)), "10str.nc", 498, 764);
    __right_value0 = (void*)0;
    __dec_obj84=come_value4->c_value,
    come_value4->c_value=(char* )come_increment_ref_count(buffer_to_string(source), "10str.nc", 500, 766);
    __dec_obj84 = come_decrement_ref_count(__dec_obj84, (void*)0, (void*)0, 0,0, (void*)0, "10str.nc", 500, 765);
    __right_value0 = (void*)0;
    __dec_obj85=come_value4->type,
    come_value4->type=(struct sType* )come_increment_ref_count(sType_clone(result_type), "10str.nc", 502, 768);
    come_call_finalizer(sType_finalize, __dec_obj85,(void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc", 502, 767);
    come_value4->type->mStatic=(_Bool)0;
    come_value4->var=((void*)0);
    if(result_type->mHeap) {
        append_object_to_right_values(come_value4,result_type,info,(_Bool)0,((void*)0),((void*)0),((void*)0));
    }
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value4, "10str.nc", 510, 769));
    add_come_last_code(info,"%s",come_value4->c_value);
        __result_obj__0 = (_Bool)1;
    come_call_finalizer(list$1CVALUE$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 514, 770);
    come_call_finalizer(sType_finalize, list_element_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 514, 771);
    come_call_finalizer(sType_finalize, type_values, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 514, 772);
    (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0, "10str.nc", 514, 773));
    come_call_finalizer(buffer_finalize, source, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 514, 774);
    come_call_finalizer(list$1CVALUE$ph$p_finalize, _o2_saved_3, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 514, 775);
    come_call_finalizer(sType_finalize, list_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 514, 776);
    come_call_finalizer(sType_finalize, obj_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 514, 777);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "10str.nc", 514, 778));
    (generics_fun_name = come_decrement_ref_count(generics_fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "10str.nc", 514, 779));
    come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 514, 780);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 514, 781);
    come_call_finalizer(CVALUE_finalize, obj_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 514, 782);
    come_call_finalizer(buffer_finalize, num_string, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 514, 783);
    come_call_finalizer(sType_finalize, type2_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 514, 784);
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 514, 785);
    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0, "10str.nc", 514, 786));
    come_call_finalizer(sType_finalize, any_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 514, 787);
    come_call_finalizer(sType_finalize, type3, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 514, 788);
    come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 514, 789);
    come_call_finalizer(CVALUE_finalize, come_value2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 514, 790);
    come_call_finalizer(CVALUE_finalize, come_value3, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 514, 791);
    come_call_finalizer(list$1CVALUE$ph$p_finalize, _o2_saved_4, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 514, 792);
    come_call_finalizer(CVALUE_finalize, come_value4, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 514, 793);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sListNode_finalize(struct sListNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sListNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sListNode_finalize", 2, 575));
    }
    if(self!=((void*)0)&&self->list_elements!=((void*)0)) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->list_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sListNode_finalize}", 3, 576);
    }
        neo_current_frame = fr.prev;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_initialize(struct list$1CVALUE$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1CVALUE$ph_initialize"; neo_current_frame = &fr;
    struct list$1CVALUE$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = (struct list$1CVALUE$ph*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 1483, 584);
    come_call_finalizer(list$1CVALUE$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1483, 587);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1CVALUE$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1483, 588);
    return __result_obj__0;
}

static void list$1CVALUE$ph$p_finalize(struct list$1CVALUE$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1CVALUE$ph$p_finalize"; neo_current_frame = &fr;
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
        come_call_finalizer(list_item$1CVALUE$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1504, 586);
    }
        neo_current_frame = fr.prev;
}

static void list_item$1CVALUE$ph$p_finalize(struct list_item$1CVALUE$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1CVALUE$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer(CVALUE_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "list_item$1CVALUE$ph$p_finalize}", 2, 585);
    }
            neo_current_frame = fr.prev;
}

static struct list$1sNode$ph* list$1sNode$ph_push_back(struct list$1sNode$ph* self, struct sNode* item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_push_back"; neo_current_frame = &fr;
    struct list$1sNode$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1sNode$ph* litem;
    struct sNode* __dec_obj70;
    struct list_item$1sNode$ph* litem_16;
    struct sNode* __dec_obj71;
    struct list_item$1sNode$ph* litem_17;
    struct sNode* __dec_obj72;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0, "/usr/local/include/neo-c.h", 1613, 603):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/neo-c.h", 1617, 604, "struct list_item$1sNode$ph*"))), "/usr/local/include/neo-c.h", 1617, 605);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj70=litem->item,
        litem->item=(struct sNode*)come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1621, 607);
        (__dec_obj70 ? __dec_obj70 = come_decrement_ref_count(__dec_obj70, ((struct sNode*)__dec_obj70)->finalize, ((struct sNode*)__dec_obj70)->_protocol_obj, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1621, 606) :0);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_16=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/neo-c.h", 1627, 608, "struct list_item$1sNode$ph*"))), "/usr/local/include/neo-c.h", 1627, 609);
        litem_16->prev=self->head;
        litem_16->next=((void*)0);
        __dec_obj71=litem_16->item,
        litem_16->item=(struct sNode*)come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1631, 611);
        (__dec_obj71 ? __dec_obj71 = come_decrement_ref_count(__dec_obj71, ((struct sNode*)__dec_obj71)->finalize, ((struct sNode*)__dec_obj71)->_protocol_obj, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1631, 610) :0);
        self->tail=litem_16;
        self->head->next=litem_16;
    }
    else {
        __right_value0 = (void*)0;
        litem_17=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/neo-c.h", 1637, 612, "struct list_item$1sNode$ph*"))), "/usr/local/include/neo-c.h", 1637, 613);
        litem_17->prev=self->tail;
        litem_17->next=((void*)0);
        __dec_obj72=litem_17->item,
        litem_17->item=(struct sNode*)come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1641, 615);
        (__dec_obj72 ? __dec_obj72 = come_decrement_ref_count(__dec_obj72, ((struct sNode*)__dec_obj72)->finalize, ((struct sNode*)__dec_obj72)->_protocol_obj, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1641, 614) :0);
        self->tail->next=litem_17;
        self->tail=litem_17;
    }
    self->len++;
        __result_obj__0 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0, "/usr/local/include/neo-c.h", 1649, 616):(void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static int list$1CVALUE$ph_length(struct list$1CVALUE$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1CVALUE$ph_length"; neo_current_frame = &fr;
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return 0;
    }
        neo_current_frame = fr.prev;
    return self->len;
        neo_current_frame = fr.prev;
}

static struct CVALUE*  list$1CVALUE$ph_begin(struct list$1CVALUE$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1CVALUE$ph_begin"; neo_current_frame = &fr;
    struct CVALUE*  result  ;
    struct CVALUE*  __result_obj__0  ;
    struct CVALUE*  result_18  ;
    if(self==((void*)0)) {
        memset(&result,0,sizeof(struct CVALUE* ));
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
    memset(&result_18,0,sizeof(struct CVALUE* ));
        __result_obj__0 = result_18;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static _Bool list$1CVALUE$ph_end(struct list$1CVALUE$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1CVALUE$ph_end"; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self==((void*)0)||self->it==((void*)0);
        neo_current_frame = fr.prev;
}

static struct CVALUE*  list$1CVALUE$ph_next(struct list$1CVALUE$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1CVALUE$ph_next"; neo_current_frame = &fr;
    struct CVALUE*  result  ;
    struct CVALUE*  __result_obj__0  ;
    struct CVALUE*  result_20  ;
    if(self==((void*)0)||self->it==((void*)0)) {
        memset(&result,0,sizeof(struct CVALUE* ));
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
    memset(&result_20,0,sizeof(struct CVALUE* ));
        __result_obj__0 = result_20;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct CVALUE*  list$1CVALUE$ph$p_operator_load_element(struct list$1CVALUE$ph* self, int position)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1CVALUE$ph$p_operator_load_element"; neo_current_frame = &fr;
    struct CVALUE*  default_value  ;
    struct CVALUE*  __result_obj__0  ;
    struct list_item$1CVALUE$ph* it;
    int i;
    struct CVALUE*  default_value_21  ;
    if(self==((void*)0)) {
        memset(&default_value,0,sizeof(struct CVALUE* ));
                __result_obj__0 = (struct CVALUE* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 2148, 626);
        come_call_finalizer(CVALUE_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2148, 627);
        neo_current_frame = fr.prev;
        come_call_finalizer(CVALUE_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2148, 628);
        return __result_obj__0;
        come_call_finalizer(CVALUE_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 2151, 629);
    }
    if(position<0) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(it!=((void*)0)) {
        if(position==i) {
                        __result_obj__0 = (struct CVALUE* )come_increment_ref_count(it->item, "/usr/local/include/neo-c.h", 2159, 630);
            neo_current_frame = fr.prev;
            come_call_finalizer(CVALUE_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2159, 631);
            return __result_obj__0;
        }
        it=it->next;
        i++;
    }
    memset(&default_value_21,0,sizeof(struct CVALUE* ));
        __result_obj__0 = (struct CVALUE* )come_increment_ref_count(default_value_21, "/usr/local/include/neo-c.h", 2167, 632);
    come_call_finalizer(CVALUE_finalize, default_value_21, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2167, 633);
    neo_current_frame = fr.prev;
    come_call_finalizer(CVALUE_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2167, 634);
    return __result_obj__0;
}

static struct CVALUE*  list$1CVALUE$ph_operator_load_element(struct list$1CVALUE$ph* self, int position)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1CVALUE$ph_operator_load_element"; neo_current_frame = &fr;
    struct CVALUE*  default_value  ;
    struct CVALUE*  __result_obj__0  ;
    struct list_item$1CVALUE$ph* it;
    int i;
    struct CVALUE*  default_value_22  ;
    if(self==((void*)0)) {
        memset(&default_value,0,sizeof(struct CVALUE* ));
                __result_obj__0 = (struct CVALUE* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 2148, 635);
        come_call_finalizer(CVALUE_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2148, 636);
        neo_current_frame = fr.prev;
        come_call_finalizer(CVALUE_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2148, 637);
        return __result_obj__0;
        come_call_finalizer(CVALUE_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 2151, 638);
    }
    if(position<0) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(it!=((void*)0)) {
        if(position==i) {
                        __result_obj__0 = (struct CVALUE* )come_increment_ref_count(it->item, "/usr/local/include/neo-c.h", 2159, 639);
            neo_current_frame = fr.prev;
            come_call_finalizer(CVALUE_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2159, 640);
            return __result_obj__0;
        }
        it=it->next;
        i++;
    }
    memset(&default_value_22,0,sizeof(struct CVALUE* ));
        __result_obj__0 = (struct CVALUE* )come_increment_ref_count(default_value_22, "/usr/local/include/neo-c.h", 2167, 641);
    come_call_finalizer(CVALUE_finalize, default_value_22, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2167, 642);
    neo_current_frame = fr.prev;
    come_call_finalizer(CVALUE_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2167, 643);
    return __result_obj__0;
}

static struct list$1sType$ph* list$1sType$ph_push_back(struct list$1sType$ph* self, struct sType*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_push_back"; neo_current_frame = &fr;
    struct list$1sType$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1sType$ph* litem;
    struct sType*  __dec_obj73  ;
    struct list_item$1sType$ph* litem_23;
    struct sType*  __dec_obj74  ;
    struct list_item$1sType$ph* litem_24;
    struct sType*  __dec_obj75  ;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1613, 650);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/neo-c.h", 1617, 651, "struct list_item$1sType$ph*"))), "/usr/local/include/neo-c.h", 1617, 652);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj73=litem->item,
        litem->item=(struct sType* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1621, 654);
        come_call_finalizer(sType_finalize, __dec_obj73,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1621, 653);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_23=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/neo-c.h", 1627, 655, "struct list_item$1sType$ph*"))), "/usr/local/include/neo-c.h", 1627, 656);
        litem_23->prev=self->head;
        litem_23->next=((void*)0);
        __dec_obj74=litem_23->item,
        litem_23->item=(struct sType* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1631, 658);
        come_call_finalizer(sType_finalize, __dec_obj74,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1631, 657);
        self->tail=litem_23;
        self->head->next=litem_23;
    }
    else {
        __right_value0 = (void*)0;
        litem_24=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/neo-c.h", 1637, 659, "struct list_item$1sType$ph*"))), "/usr/local/include/neo-c.h", 1637, 660);
        litem_24->prev=self->tail;
        litem_24->next=((void*)0);
        __dec_obj75=litem_24->item,
        litem_24->item=(struct sType* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1641, 662);
        come_call_finalizer(sType_finalize, __dec_obj75,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1641, 661);
        self->tail->next=litem_24;
        self->tail=litem_24;
    }
    self->len++;
        __result_obj__0 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1649, 663);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void tuple2$2char$phsGenericsFun$p$p_finalize(struct tuple2$2char$phsGenericsFun$p* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2char$phsGenericsFun$p$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, (void*)0, "tuple2$2char$phsGenericsFun$p$p_finalize", 2, 669));
    }
        neo_current_frame = fr.prev;
}

static struct sFun*  map$2char$phsFun$ph_at(struct map$2char$phsFun$ph* self, char*  key  , struct sFun*  default_value  , _Bool by_pointer)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsFun$ph_at"; neo_current_frame = &fr;
    struct sFun*  __result_obj__0  ;
    unsigned int hash;
    unsigned int it;
    if(self==((void*)0)) {
                __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3139, 672);
        come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3139, 673);
        neo_current_frame = fr.prev;
        come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3139, 674);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char* )key))%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if((!by_pointer&&string_equals(self->keys[it],key))||(by_pointer&&self->keys[it]==key)) {
                                __result_obj__0 = (struct sFun* )come_increment_ref_count(self->items[it], "/usr/local/include/neo-c.h", 3150, 675);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3150, 676);
                neo_current_frame = fr.prev;
                come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3150, 677);
                return __result_obj__0;
            }
            it++;
            if(it>=self->size) {
                it=0;
            }
            else if(it==hash) {
                                __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3159, 678);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3159, 679);
                neo_current_frame = fr.prev;
                come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3159, 680);
                return __result_obj__0;
            }
        }
        else {
                        __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3163, 681);
            come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3163, 682);
            neo_current_frame = fr.prev;
            come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3163, 683);
            return __result_obj__0;
        }
    }
        __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3167, 684);
    come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3167, 685);
    neo_current_frame = fr.prev;
    come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3167, 686);
    return __result_obj__0;
}

static struct sType*  list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph$p_operator_load_element"; neo_current_frame = &fr;
    struct sType*  default_value  ;
    struct sType*  __result_obj__0  ;
    struct list_item$1sType$ph* it;
    int i;
    struct sType*  default_value_25  ;
    if(self==((void*)0)) {
        memset(&default_value,0,sizeof(struct sType* ));
                __result_obj__0 = (struct sType* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 2148, 726);
        come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2148, 727);
        neo_current_frame = fr.prev;
        come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2148, 728);
        return __result_obj__0;
        come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 2151, 729);
    }
    if(position<0) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(it!=((void*)0)) {
        if(position==i) {
                        __result_obj__0 = (struct sType* )come_increment_ref_count(it->item, "/usr/local/include/neo-c.h", 2159, 730);
            neo_current_frame = fr.prev;
            come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2159, 731);
            return __result_obj__0;
        }
        it=it->next;
        i++;
    }
    memset(&default_value_25,0,sizeof(struct sType* ));
        __result_obj__0 = (struct sType* )come_increment_ref_count(default_value_25, "/usr/local/include/neo-c.h", 2167, 732);
    come_call_finalizer(sType_finalize, default_value_25, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2167, 733);
    neo_current_frame = fr.prev;
    come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2167, 734);
    return __result_obj__0;
}

static struct sType*  list$1sType$ph_operator_load_element(struct list$1sType$ph* self, int position)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_operator_load_element"; neo_current_frame = &fr;
    struct sType*  default_value  ;
    struct sType*  __result_obj__0  ;
    struct list_item$1sType$ph* it;
    int i;
    struct sType*  default_value_26  ;
    if(self==((void*)0)) {
        memset(&default_value,0,sizeof(struct sType* ));
                __result_obj__0 = (struct sType* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 2148, 735);
        come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2148, 736);
        neo_current_frame = fr.prev;
        come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2148, 737);
        return __result_obj__0;
        come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 2151, 738);
    }
    if(position<0) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(it!=((void*)0)) {
        if(position==i) {
                        __result_obj__0 = (struct sType* )come_increment_ref_count(it->item, "/usr/local/include/neo-c.h", 2159, 739);
            neo_current_frame = fr.prev;
            come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2159, 740);
            return __result_obj__0;
        }
        it=it->next;
        i++;
    }
    memset(&default_value_26,0,sizeof(struct sType* ));
        __result_obj__0 = (struct sType* )come_increment_ref_count(default_value_26, "/usr/local/include/neo-c.h", 2167, 741);
    come_call_finalizer(sType_finalize, default_value_26, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2167, 742);
    neo_current_frame = fr.prev;
    come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2167, 743);
    return __result_obj__0;
}

struct sVectorNode* sVectorNode_initialize(struct sVectorNode* self, struct list$1sNode$ph* list_elements, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sVectorNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct list$1sNode$ph* __dec_obj86;
    struct sVectorNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sVectorNode*)come_increment_ref_count(self, "10str.nc", 522, 794),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "10str.nc}", 522, 795);
    __dec_obj86=self->list_elements,
    self->list_elements=(struct list$1sNode$ph*)come_increment_ref_count(list_elements, "10str.nc", 524, 797);
    come_call_finalizer(list$1sNode$ph_finalize, __dec_obj86,(void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc", 524, 796);
        __result_obj__0 = (struct sVectorNode*)come_increment_ref_count(self, "10str.nc", 527, 798);
    come_call_finalizer(sVectorNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "10str.nc}", 527, 801);
    come_call_finalizer(list$1sNode$ph$p_finalize, list_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 527, 802);
    neo_current_frame = fr.prev;
    come_call_finalizer(sVectorNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "10str.nc}", 527, 803);
    return __result_obj__0;
}

char*  sVectorNode_kind(struct sVectorNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sVectorNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sVectorNode"))), "10str.nc", 529, 804);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "10str.nc", 529, 805));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "10str.nc", 529, 806));
    return __result_obj__0;
}

_Bool sVectorNode_compile(struct sVectorNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sVectorNode_compile"; neo_current_frame = &fr;
    struct list$1sNode$ph* list_elements;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1CVALUE$ph* params;
    struct sType*  list_element_type  ;
    _Bool __result_obj__0;
    int n;
    struct list$1sNode$ph* _o2_saved_5;
    struct sNode* it;
    _Bool Value;
    struct CVALUE*  come_value  ;
    struct sType*  __dec_obj87  ;
    struct sType*  type_values  ;
    char*  var_name  ;
    struct sVar*  var_  ;
    struct buffer*  source  ;
    int i;
    struct list$1CVALUE$ph* _o2_saved_6;
    struct CVALUE*  it_28  ;
    void* __right_value2 = (void*)0;
    struct sType*  list_type  ;
    struct sType*  obj_type  ;
    struct tuple2$2char$phsGenericsFun$p* multiple_assign_var2
;    char*  name  =0;
    struct sGenericsFun*  generics_fun  =0;
    char*  generics_fun_name  ;
    struct sFun*  fun  ;
    char*  __dec_obj88  ;
    struct sType*  result_type  ;
    struct sType*  type  ;
    struct CVALUE*  obj_value  ;
    struct buffer*  num_string  ;
    struct sType*  type2_  ;
    struct sType*  type2  ;
    char*  type_name  ;
    struct sType*  any_type  ;
    _Bool _conditional_value_X0;
    char*  __dec_obj89  ;
    char*  __dec_obj90  ;
    struct sType*  type3  ;
    struct sType*  __dec_obj91  ;
    struct list$1CVALUE$ph* come_params;
    struct CVALUE*  come_value2  ;
    char*  __dec_obj92  ;
    struct sType*  __dec_obj93  ;
    struct CVALUE*  come_value3  ;
    char*  __dec_obj94  ;
    struct sType*  __dec_obj95  ;
    int j;
    struct list$1CVALUE$ph* _o2_saved_7;
    struct CVALUE*  it_29  ;
    struct CVALUE*  come_value4  ;
    char*  __dec_obj96  ;
    struct sType*  __dec_obj97  ;
    list_elements=self->list_elements;
    params=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "10str.nc", 536, 807, "struct list$1CVALUE$ph*"), "10str.nc", 536, 808)), "10str.nc", 536, 809);
    list_element_type=((void*)0);
    if(info->exp_value) {
        err_msg(info,"nest value expression is prohibited");
                __result_obj__0 = (_Bool)0;
        come_call_finalizer(list$1CVALUE$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 541, 810);
        come_call_finalizer(sType_finalize, list_element_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 541, 811);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    info->exp_value=(_Bool)1;
    n=0;
    for(_o2_saved_5=list_elements,it=list$1sNode$ph_begin(_o2_saved_5)    ;!list$1sNode$ph_end(_o2_saved_5);it=list$1sNode$ph_next(_o2_saved_5)){
        Value=node_compile(it,info);
        if(!Value) {
                        __result_obj__0 = (_Bool)0;
            come_call_finalizer(list$1CVALUE$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 548, 812);
            come_call_finalizer(sType_finalize, list_element_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 548, 813);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        __right_value0 = (void*)0;
        come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "10str.nc", 551, 814);
        if(list_element_type) {
            __right_value0 = (void*)0;
            check_assign_type(((char*)(__right_value0=xsprintf("invalid list element type"))),list_element_type,come_value->type,come_value,info);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "10str.nc", 554, 815));
        }
        remove_value_from_right_value_objects(come_value,info);
        list$1CVALUE$ph_push_back(params,(struct CVALUE* )come_increment_ref_count(come_value, "10str.nc", 559, 816));
        if(list_element_type) {
            __right_value0 = (void*)0;
            check_assign_type(((char*)(__right_value0=xsprintf("Vector element type"))),list_element_type,come_value->type,come_value,info);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "10str.nc", 562, 817));
        }
        __right_value0 = (void*)0;
        __dec_obj87=list_element_type,
        list_element_type=(struct sType* )come_increment_ref_count(sType_clone(come_value->type), "10str.nc", 564, 819);
        come_call_finalizer(sType_finalize, __dec_obj87,(void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc", 564, 818);
        n++;
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 568, 820);
    }
    info->exp_value=(_Bool)0;
    __right_value0 = (void*)0;
    type_values=(struct sType* )come_increment_ref_count(sType_clone(list_element_type), "10str.nc", 570, 821);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    list$1sNode$ph_push_back(type_values->mArrayNum,(struct sNode*)come_increment_ref_count(create_int_node((char* )come_increment_ref_count(int_to_string(list$1CVALUE$ph_length(params)), "10str.nc", 571, 822),info), "10str.nc", 571, 823));
    type_values->mHeap=(_Bool)0;
    static int list_value_num=0;
    __right_value0 = (void*)0;
    var_name=(char* )come_increment_ref_count(xsprintf("__vector_values%d__",++list_value_num), "10str.nc", 575, 824);
    __right_value0 = (void*)0;
    add_variable_to_table(var_name,((struct sType* )(__right_value0=sType_clone(type_values))),info,(_Bool)0,(_Bool)0,(_Bool)0);
    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "10str.nc}", 577, 825);
    var_=get_variable_from_table(info->lv_table,var_name);
    __right_value0 = (void*)0;
    add_come_code_at_function_head(info,"%s;\n",((char* )(__right_value0=make_define_var(type_values,var_->mCValueName,info,(_Bool)0,(_Bool)0))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "10str.nc", 581, 826));
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    source=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "10str.nc", 583, 827, "struct buffer* "), "10str.nc", 583, 828)), "10str.nc", 583, 829);
    buffer_append_str(source,"({");
    i=0;
    for(_o2_saved_6=(struct list$1CVALUE$ph*)come_increment_ref_count(params, "10str.nc", 588, 830),it_28=list$1CVALUE$ph_begin(_o2_saved_6)    ;!list$1CVALUE$ph_end(_o2_saved_6);it_28=list$1CVALUE$ph_next(_o2_saved_6)){
        if(list_element_type->mHeap) {
            __right_value0 = (void*)0;
            buffer_append_format(source,"%s[%d]=%s;",var_->mCValueName,i,((struct CVALUE* )(__right_value0=list$1CVALUE$ph_operator_load_element(params,i)))->c_value);
            come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "10str.nc}", 591, 831);
        }
        else {
            __right_value0 = (void*)0;
            buffer_append_format(source,"%s[%d]=%s;",var_->mCValueName,i,((struct CVALUE* )(__right_value0=list$1CVALUE$ph_operator_load_element(params,i)))->c_value);
            come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "10str.nc}", 594, 832);
        }
        i++;
    }
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    list_type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "10str.nc", 603, 833, "struct sType* "), "10str.nc", 603, 834),(char*)come_increment_ref_count(xsprintf("vector"), "10str.nc", 603, 835),(_Bool)0,info,(_Bool)0,0), "10str.nc", 603, 836);
    __right_value0 = (void*)0;
    list$1sType$ph_push_back(list_type->mGenericsTypes,(struct sType* )come_increment_ref_count((((struct sType* )(__right_value0=sType_clone(list_element_type)))), "10str.nc", 604, 837));
    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "}", 604, 838);
    __right_value0 = (void*)0;
    obj_type=(struct sType* )come_increment_ref_count(sType_clone(list_type), "10str.nc", 606, 839);
    const char* fun_name="initialize_with_values";
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    multiple_assign_var2=((struct tuple2$2char$phsGenericsFun$p*)(__right_value1=make_generics_function(obj_type,(char* )come_increment_ref_count(__builtin_string(fun_name), "10str.nc", 609, 840),info,(_Bool)1)));
    name=(char* )come_increment_ref_count(multiple_assign_var2->v1, "10str.nc", 609, 841);
    generics_fun=multiple_assign_var2->v2;
    come_call_finalizer(tuple2$2char$phsGenericsFun$p$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "10str.nc}", 609, 842);
    generics_fun_name=(char* )come_increment_ref_count(name, "10str.nc", 610, 843);
    __right_value0 = (void*)0;
    fun=((struct sFun* )(__right_value0=map$2char$phsFun$ph_at(info->funcs,generics_fun_name,((void*)0),(_Bool)0)));
    if(fun==((void*)0)) {
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __dec_obj88=generics_fun_name,
        generics_fun_name=(char* )come_increment_ref_count(create_method_name(obj_type,(_Bool)0,((char* )(__right_value0=__builtin_string(fun_name))),info,(_Bool)1), "10str.nc", 615, 845);
        __dec_obj88 = come_decrement_ref_count(__dec_obj88, (void*)0, (void*)0, 0,0, (void*)0, "10str.nc", 615, 844);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "10str.nc", 615, 846));
        __right_value0 = (void*)0;
        fun=((struct sFun* )(__right_value0=map$2char$phsFun$ph_at(info->funcs,generics_fun_name,((void*)0),(_Bool)0)));
        if(fun==((void*)0)) {
            err_msg(info,"function not found(%s) at method(%s)(1)",generics_fun_name,info->come_fun->mName);
                        __result_obj__0 = (_Bool)1;
            come_call_finalizer(list$1CVALUE$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 621, 847);
            come_call_finalizer(sType_finalize, list_element_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 621, 848);
            come_call_finalizer(sType_finalize, type_values, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 621, 849);
            (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0, "10str.nc", 621, 850));
            come_call_finalizer(buffer_finalize, source, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 621, 851);
            come_call_finalizer(list$1CVALUE$ph$p_finalize, _o2_saved_6, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 621, 852);
            come_call_finalizer(sType_finalize, list_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 621, 853);
            come_call_finalizer(sType_finalize, obj_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 621, 854);
            (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "10str.nc", 621, 855));
            (generics_fun_name = come_decrement_ref_count(generics_fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "10str.nc", 621, 856));
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
    }
    __right_value0 = (void*)0;
    result_type=(struct sType* )come_increment_ref_count(sType_clone(fun->mResultType), "10str.nc", 625, 857);
    result_type->mStatic=(_Bool)0;
    type=(struct sType* )come_increment_ref_count(list_type, "10str.nc", 628, 858);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    obj_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "10str.nc", 630, 859, "struct CVALUE* "), "10str.nc", 630, 860)), "10str.nc", 630, 861);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    num_string=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "10str.nc", 632, 862, "struct buffer* "), "10str.nc", 632, 863)), "10str.nc", 632, 864);
    buffer_append_str(num_string,"1");
    __right_value0 = (void*)0;
    type2_=(struct sType* )come_increment_ref_count(solve_generics(type,type,info), "10str.nc", 636, 865);
    __right_value0 = (void*)0;
    type2=(struct sType* )come_increment_ref_count(solve_method_generics(type2_,info), "10str.nc", 637, 866);
    __right_value0 = (void*)0;
    type_name=(char* )come_increment_ref_count(make_type_name_string(type2,info,(_Bool)0,(_Bool)1,(_Bool)0,(_Bool)0), "10str.nc", 639, 867);
    any_type=(struct sType* )come_increment_ref_count(type2, "10str.nc", 641, 868);
    any_type->mPointerNum=1;
    any_type->mHeap=(_Bool)1;
    if(__right_value0 = (void*)0,
__right_value1 = (void*)0,
__right_value2 = (void*)0,
({(_conditional_value_X0=(((struct sFun* )(__right_value2=map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value1=xsprintf("come_calloc_v2"))))))));    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "10str.nc", 645, 869));
    come_call_finalizer(sFun_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0, "10str.nc}", 645, 870);
_conditional_value_X0;})) {
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __dec_obj89=obj_value->c_value,
        obj_value->c_value=(char* )come_increment_ref_count(xsprintf("(%s*)come_calloc_v2(1, sizeof(%s)*(%s), \"%s\", %d, %d, \"%s\")",type_name,type_name,((char* )(__right_value0=buffer_to_string(num_string))),info->sname,info->sline,++info->id,type_name), "10str.nc", 646, 872);
        __dec_obj89 = come_decrement_ref_count(__dec_obj89, (void*)0, (void*)0, 0,0, (void*)0, "10str.nc", 646, 871);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "10str.nc", 646, 873));
    }
    else {
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __dec_obj90=obj_value->c_value,
        obj_value->c_value=(char* )come_increment_ref_count(xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, %d, \"%s\")",type_name,type_name,((char* )(__right_value0=buffer_to_string(num_string))),info->sname,info->sline,++info->id,type_name), "10str.nc", 649, 875);
        __dec_obj90 = come_decrement_ref_count(__dec_obj90, (void*)0, (void*)0, 0,0, (void*)0, "10str.nc", 649, 874);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "10str.nc", 649, 876));
    }
    __right_value0 = (void*)0;
    type3=(struct sType* )come_increment_ref_count(sType_clone(type2), "10str.nc", 652, 877);
    type3->mPointerNum++;
    type3->mHeap=(_Bool)1;
    type2->mHeap=(_Bool)1;
    __right_value0 = (void*)0;
    __dec_obj91=obj_value->type,
    obj_value->type=(struct sType* )come_increment_ref_count(sType_clone(type2), "10str.nc", 656, 879);
    come_call_finalizer(sType_finalize, __dec_obj91,(void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc", 656, 878);
    obj_value->var=((void*)0);
    append_object_to_right_values(obj_value,type3,info,(_Bool)0,((void*)0),((void*)0),((void*)0));
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    come_params=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "10str.nc", 662, 880, "struct list$1CVALUE$ph*"), "10str.nc", 662, 881)), "10str.nc", 662, 882);
    if(__right_value0 = (void*)0,
({(_conditional_value_X0=(((struct sType* )(__right_value0=list$1sType$ph_operator_load_element(fun->mParamTypes,0)))->mHeap&&obj_value->type->mHeap));    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "10str.nc}", 664, 883);
_conditional_value_X0;})) {
        __right_value0 = (void*)0;
        std_move(((struct sType* )(__right_value0=list$1sType$ph_operator_load_element(fun->mParamTypes,0))),obj_value->type,obj_value,info);
        come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "10str.nc}", 665, 884);
    }
    list$1CVALUE$ph_push_back(come_params,(struct CVALUE* )come_increment_ref_count(obj_value, "10str.nc", 667, 885));
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    come_value2=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "10str.nc", 669, 886, "struct CVALUE* "), "10str.nc", 669, 887)), "10str.nc", 669, 888);
    __right_value0 = (void*)0;
    __dec_obj92=come_value2->c_value,
    come_value2->c_value=(char* )come_increment_ref_count(xsprintf("%d",list$1CVALUE$ph_length(params)), "10str.nc", 671, 890);
    __dec_obj92 = come_decrement_ref_count(__dec_obj92, (void*)0, (void*)0, 0,0, (void*)0, "10str.nc", 671, 889);
    __dec_obj93=come_value2->type,
    come_value2->type=((void*)0);
    come_call_finalizer(sType_finalize, __dec_obj93,(void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc", 672, 891);
    come_value2->var=((void*)0);
    list$1CVALUE$ph_push_back(come_params,(struct CVALUE* )come_increment_ref_count(come_value2, "10str.nc", 675, 892));
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    come_value3=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "10str.nc", 677, 893, "struct CVALUE* "), "10str.nc", 677, 894)), "10str.nc", 677, 895);
    __right_value0 = (void*)0;
    __dec_obj94=come_value3->c_value,
    come_value3->c_value=(char* )come_increment_ref_count(xsprintf("%s",var_->mCValueName), "10str.nc", 679, 897);
    __dec_obj94 = come_decrement_ref_count(__dec_obj94, (void*)0, (void*)0, 0,0, (void*)0, "10str.nc", 679, 896);
    __dec_obj95=come_value3->type,
    come_value3->type=((void*)0);
    come_call_finalizer(sType_finalize, __dec_obj95,(void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc", 680, 898);
    come_value3->var=((void*)0);
    list$1CVALUE$ph_push_back(come_params,(struct CVALUE* )come_increment_ref_count(come_value3, "10str.nc", 683, 899));
    buffer_append_str(source,generics_fun_name);
    buffer_append_str(source,"(");
    j=0;
    for(_o2_saved_7=(struct list$1CVALUE$ph*)come_increment_ref_count(come_params, "10str.nc", 691, 900),it_29=list$1CVALUE$ph_begin(_o2_saved_7)    ;!list$1CVALUE$ph_end(_o2_saved_7);it_29=list$1CVALUE$ph_next(_o2_saved_7)){
        buffer_append_str(source,it_29->c_value);
        if(j!=list$1CVALUE$ph_length(come_params)-1) {
            buffer_append_str(source,",");
        }
        j++;
    }
    buffer_append_str(source,");");
    buffer_append_str(source,"})");
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    come_value4=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "10str.nc", 703, 901, "struct CVALUE* "), "10str.nc", 703, 902)), "10str.nc", 703, 903);
    __right_value0 = (void*)0;
    __dec_obj96=come_value4->c_value,
    come_value4->c_value=(char* )come_increment_ref_count(buffer_to_string(source), "10str.nc", 705, 905);
    __dec_obj96 = come_decrement_ref_count(__dec_obj96, (void*)0, (void*)0, 0,0, (void*)0, "10str.nc", 705, 904);
    __right_value0 = (void*)0;
    __dec_obj97=come_value4->type,
    come_value4->type=(struct sType* )come_increment_ref_count(sType_clone(result_type), "10str.nc", 707, 907);
    come_call_finalizer(sType_finalize, __dec_obj97,(void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc", 707, 906);
    come_value4->type->mStatic=(_Bool)0;
    come_value4->var=((void*)0);
    if(result_type->mHeap) {
        append_object_to_right_values(come_value4,result_type,info,(_Bool)0,((void*)0),((void*)0),((void*)0));
    }
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value4, "10str.nc", 715, 908));
    add_come_last_code(info,"%s",come_value4->c_value);
        __result_obj__0 = (_Bool)1;
    come_call_finalizer(list$1CVALUE$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 719, 909);
    come_call_finalizer(sType_finalize, list_element_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 719, 910);
    come_call_finalizer(sType_finalize, type_values, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 719, 911);
    (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0, "10str.nc", 719, 912));
    come_call_finalizer(buffer_finalize, source, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 719, 913);
    come_call_finalizer(list$1CVALUE$ph$p_finalize, _o2_saved_6, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 719, 914);
    come_call_finalizer(sType_finalize, list_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 719, 915);
    come_call_finalizer(sType_finalize, obj_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 719, 916);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "10str.nc", 719, 917));
    (generics_fun_name = come_decrement_ref_count(generics_fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "10str.nc", 719, 918));
    come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 719, 919);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 719, 920);
    come_call_finalizer(CVALUE_finalize, obj_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 719, 921);
    come_call_finalizer(buffer_finalize, num_string, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 719, 922);
    come_call_finalizer(sType_finalize, type2_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 719, 923);
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 719, 924);
    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0, "10str.nc", 719, 925));
    come_call_finalizer(sType_finalize, any_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 719, 926);
    come_call_finalizer(sType_finalize, type3, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 719, 927);
    come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 719, 928);
    come_call_finalizer(CVALUE_finalize, come_value2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 719, 929);
    come_call_finalizer(CVALUE_finalize, come_value3, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 719, 930);
    come_call_finalizer(list$1CVALUE$ph$p_finalize, _o2_saved_7, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 719, 931);
    come_call_finalizer(CVALUE_finalize, come_value4, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 719, 932);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sVectorNode_finalize(struct sVectorNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sVectorNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sVectorNode_finalize", 2, 799));
    }
    if(self!=((void*)0)&&self->list_elements!=((void*)0)) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->list_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sVectorNode_finalize}", 3, 800);
    }
        neo_current_frame = fr.prev;
}

struct sTupleNode* sTupleNode_initialize(struct sTupleNode* self, struct list$1tuple2$2char$phsNode$ph$ph* tuple_elements, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sTupleNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj98;
    struct sTupleNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sTupleNode*)come_increment_ref_count(self, "10str.nc", 727, 933),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "10str.nc}", 727, 934);
    __dec_obj98=self->tuple_elements,
    self->tuple_elements=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(tuple_elements, "10str.nc", 729, 937);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph_finalize, __dec_obj98,(void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc", 729, 936);
        __result_obj__0 = (struct sTupleNode*)come_increment_ref_count(self, "10str.nc", 732, 938);
    come_call_finalizer(sTupleNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "10str.nc}", 732, 941);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, tuple_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 732, 942);
    neo_current_frame = fr.prev;
    come_call_finalizer(sTupleNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "10str.nc}", 732, 943);
    return __result_obj__0;
}

char*  sTupleNode_kind(struct sTupleNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sTupleNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sTupleNode"))), "10str.nc", 734, 944);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "10str.nc", 734, 945));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "10str.nc", 734, 946));
    return __result_obj__0;
}

_Bool sTupleNode_compile(struct sTupleNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sTupleNode_compile"; neo_current_frame = &fr;
    struct list$1tuple2$2char$phsNode$ph$ph* tuple_elements;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1sType$ph* tuple_types;
    struct list$1CVALUE$ph* tuple_values;
    _Bool __result_obj__0;
    int n;
    struct list$1tuple2$2char$phsNode$ph$ph* _o2_saved_8;
    struct tuple2$2char$phsNode$ph* it;
    struct tuple2$2char$phsNode$ph* multiple_assign_var3
;    char*  name  =0;
    struct sNode* node=0;
    _Bool Value;
    struct CVALUE*  come_value  ;
    struct sType*  type  ;
    char*  __dec_obj104  ;
    void* __right_value2 = (void*)0;
    struct sType*  type_32  ;
    struct list$1sType$ph* _o2_saved_9;
    struct sType*  it_34  ;
    struct CVALUE*  obj_value  ;
    struct buffer*  num_string  ;
    struct sType*  type2_  ;
    struct sType*  type2  ;
    char*  type_name  ;
    struct sType*  any_type  ;
    _Bool _conditional_value_X0;
    char*  __dec_obj105  ;
    char*  __dec_obj106  ;
    struct sType*  type3  ;
    struct sType*  __dec_obj107  ;
    struct sType*  obj_type  ;
    struct tuple2$2char$phsGenericsFun$p* multiple_assign_var4
;    char*  name_36  =0;
    struct sGenericsFun*  generics_fun  =0;
    char*  generics_fun_name  ;
    struct sFun*  fun  ;
    char*  __dec_obj108  ;
    struct sType*  result_type  ;
    struct list$1CVALUE$ph* come_params;
    int i;
    struct list$1CVALUE$ph* _o2_saved_10;
    struct CVALUE*  it_37  ;
    struct CVALUE*  come_value_38  ;
    struct buffer*  buf  ;
    int j;
    struct list$1CVALUE$ph* _o2_saved_11;
    struct CVALUE*  it_39  ;
    struct CVALUE*  come_value2  ;
    char*  __dec_obj109  ;
    struct sType*  __dec_obj110  ;
    tuple_elements=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(self->tuple_elements, "10str.nc", 739, 947);
    tuple_types=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "10str.nc", 740, 948, "struct list$1sType$ph*"), "10str.nc", 740, 949)), "10str.nc", 740, 950);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    tuple_values=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "10str.nc", 741, 951, "struct list$1CVALUE$ph*"), "10str.nc", 741, 952)), "10str.nc", 741, 953);
    if(info->exp_value) {
        err_msg(info,"nest value expression is prohibited");
                __result_obj__0 = (_Bool)0;
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, tuple_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 745, 954);
        come_call_finalizer(list$1sType$ph$p_finalize, tuple_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 745, 955);
        come_call_finalizer(list$1CVALUE$ph$p_finalize, tuple_values, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 745, 956);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    info->exp_value=(_Bool)1;
    n=0;
    for(_o2_saved_8=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(tuple_elements, "10str.nc", 750, 957),it=list$1tuple2$2char$phsNode$ph$ph_begin(_o2_saved_8)    ;!list$1tuple2$2char$phsNode$ph$ph_end(_o2_saved_8);it=list$1tuple2$2char$phsNode$ph$ph_next(_o2_saved_8)){
        multiple_assign_var3=it;
        name=(char* )come_increment_ref_count(multiple_assign_var3->v1, "10str.nc", 751, 958);
        node=(struct sNode*)come_increment_ref_count(multiple_assign_var3->v2, "10str.nc", 751, 959);
        Value=node_compile(node,info);
        if(!Value) {
                        __result_obj__0 = (_Bool)0;
            (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "10str.nc", 754, 960));
            ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "10str.nc", 754, 961):(void*)0);
            come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, tuple_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 754, 962);
            come_call_finalizer(list$1sType$ph$p_finalize, tuple_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 754, 963);
            come_call_finalizer(list$1CVALUE$ph$p_finalize, tuple_values, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 754, 964);
            come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, _o2_saved_8, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 754, 965);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        __right_value0 = (void*)0;
        come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "10str.nc", 757, 966);
        __right_value0 = (void*)0;
        list$1CVALUE$ph_push_back(tuple_values,(struct CVALUE* )come_increment_ref_count(CVALUE_clone(come_value), "10str.nc", 759, 988));
        __right_value0 = (void*)0;
        type=(struct sType* )come_increment_ref_count(sType_clone(come_value->type), "10str.nc", 760, 989);
        __dec_obj104=type->mTupleName,
        type->mTupleName=(char* )come_increment_ref_count(name, "10str.nc", 761, 991);
        __dec_obj104 = come_decrement_ref_count(__dec_obj104, (void*)0, (void*)0, 0,0, (void*)0, "10str.nc", 761, 990);
        list$1sType$ph_push_back(tuple_types,(struct sType* )come_increment_ref_count(type, "10str.nc", 762, 992));
        n++;
        (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "10str.nc", 767, 993));
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "10str.nc", 767, 994):(void*)0);
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 767, 995);
        come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 767, 996);
    }
    info->exp_value=(_Bool)0;
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    type_32=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "10str.nc", 769, 997, "struct sType* "), "10str.nc", 769, 998),(char* )come_increment_ref_count(xsprintf("tuple%d",list$1sType$ph_length(tuple_types)), "10str.nc", 769, 999),(_Bool)0,info,(_Bool)0,0), "10str.nc", 769, 1000);
    for(_o2_saved_9=(struct list$1sType$ph*)come_increment_ref_count(tuple_types, "10str.nc", 771, 1001),it_34=list$1sType$ph_begin(_o2_saved_9)    ;!list$1sType$ph_end(_o2_saved_9);it_34=list$1sType$ph_next(_o2_saved_9)){
        __right_value0 = (void*)0;
        list$1sType$ph_push_back(type_32->mGenericsTypes,(struct sType* )come_increment_ref_count((((struct sType* )(__right_value0=sType_clone(it_34)))), "10str.nc", 772, 1002));
        come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "}", 772, 1003);
    }
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    obj_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "10str.nc", 775, 1004, "struct CVALUE* "), "10str.nc", 775, 1005)), "10str.nc", 775, 1006);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    num_string=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "10str.nc", 777, 1007, "struct buffer* "), "10str.nc", 777, 1008)), "10str.nc", 777, 1009);
    buffer_append_str(num_string,"1");
    __right_value0 = (void*)0;
    type2_=(struct sType* )come_increment_ref_count(solve_generics(type_32,type_32,info), "10str.nc", 781, 1010);
    __right_value0 = (void*)0;
    type2=(struct sType* )come_increment_ref_count(solve_method_generics(type2_,info), "10str.nc", 782, 1011);
    __right_value0 = (void*)0;
    type_name=(char* )come_increment_ref_count(make_type_name_string(type2,info,(_Bool)0,(_Bool)1,(_Bool)0,(_Bool)0), "10str.nc", 784, 1012);
    any_type=(struct sType* )come_increment_ref_count(type2, "10str.nc", 786, 1013);
    any_type->mPointerNum=1;
    any_type->mHeap=(_Bool)1;
    if(__right_value0 = (void*)0,
__right_value1 = (void*)0,
__right_value2 = (void*)0,
({(_conditional_value_X0=(((struct sFun* )(__right_value2=map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value1=xsprintf("come_calloc_v2"))))))));    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "10str.nc", 790, 1014));
    come_call_finalizer(sFun_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0, "10str.nc}", 790, 1015);
_conditional_value_X0;})) {
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __dec_obj105=obj_value->c_value,
        obj_value->c_value=(char* )come_increment_ref_count(xsprintf("(%s*)come_calloc_v2(1, sizeof(%s)*(%s), \"%s\", %d, %d, \"%s\")",type_name,type_name,((char* )(__right_value0=buffer_to_string(num_string))),info->sname,info->sline,++info->id,type_name), "10str.nc", 791, 1017);
        __dec_obj105 = come_decrement_ref_count(__dec_obj105, (void*)0, (void*)0, 0,0, (void*)0, "10str.nc", 791, 1016);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "10str.nc", 791, 1018));
    }
    else {
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __dec_obj106=obj_value->c_value,
        obj_value->c_value=(char* )come_increment_ref_count(xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, %d, \"%s\")",type_name,type_name,((char* )(__right_value0=buffer_to_string(num_string))),info->sname,info->sline,++info->id,type_name), "10str.nc", 794, 1020);
        __dec_obj106 = come_decrement_ref_count(__dec_obj106, (void*)0, (void*)0, 0,0, (void*)0, "10str.nc", 794, 1019);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "10str.nc", 794, 1021));
    }
    __right_value0 = (void*)0;
    type3=(struct sType* )come_increment_ref_count(sType_clone(type2), "10str.nc", 797, 1022);
    type3->mPointerNum++;
    type3->mHeap=(_Bool)1;
    type2->mHeap=(_Bool)1;
    __right_value0 = (void*)0;
    __dec_obj107=obj_value->type,
    obj_value->type=(struct sType* )come_increment_ref_count(sType_clone(type2), "10str.nc", 801, 1024);
    come_call_finalizer(sType_finalize, __dec_obj107,(void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc", 801, 1023);
    obj_value->var=((void*)0);
    append_object_to_right_values(obj_value,type3,info,(_Bool)0,((void*)0),((void*)0),((void*)0));
    __right_value0 = (void*)0;
    obj_type=(struct sType* )come_increment_ref_count(sType_clone(type2), "10str.nc", 807, 1025);
    const char* fun_name="initialize";
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    multiple_assign_var4=((struct tuple2$2char$phsGenericsFun$p*)(__right_value1=make_generics_function(obj_type,(char* )come_increment_ref_count(__builtin_string(fun_name), "10str.nc", 810, 1026),info,(_Bool)1)));
    name_36=(char* )come_increment_ref_count(multiple_assign_var4->v1, "10str.nc", 810, 1027);
    generics_fun=multiple_assign_var4->v2;
    come_call_finalizer(tuple2$2char$phsGenericsFun$p$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "10str.nc}", 810, 1028);
    generics_fun_name=(char* )come_increment_ref_count(name_36, "10str.nc", 811, 1029);
    __right_value0 = (void*)0;
    fun=((struct sFun* )(__right_value0=map$2char$phsFun$ph_at(info->funcs,generics_fun_name,((void*)0),(_Bool)0)));
    if(fun==((void*)0)) {
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __dec_obj108=generics_fun_name,
        generics_fun_name=(char* )come_increment_ref_count(create_method_name(obj_type,(_Bool)0,((char* )(__right_value0=__builtin_string(fun_name))),info,(_Bool)1), "10str.nc", 816, 1031);
        __dec_obj108 = come_decrement_ref_count(__dec_obj108, (void*)0, (void*)0, 0,0, (void*)0, "10str.nc", 816, 1030);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "10str.nc", 816, 1032));
        __right_value0 = (void*)0;
        fun=((struct sFun* )(__right_value0=map$2char$phsFun$ph_at(info->funcs,generics_fun_name,((void*)0),(_Bool)0)));
        if(fun==((void*)0)) {
            err_msg(info,"function not found(%s) at method(%s)(2)",generics_fun_name,info->come_fun->mName);
                        __result_obj__0 = (_Bool)1;
            come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, tuple_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 822, 1033);
            come_call_finalizer(list$1sType$ph$p_finalize, tuple_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 822, 1034);
            come_call_finalizer(list$1CVALUE$ph$p_finalize, tuple_values, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 822, 1035);
            come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, _o2_saved_8, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 822, 1036);
            come_call_finalizer(sType_finalize, type_32, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 822, 1037);
            come_call_finalizer(list$1sType$ph$p_finalize, _o2_saved_9, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 822, 1038);
            come_call_finalizer(CVALUE_finalize, obj_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 822, 1039);
            come_call_finalizer(buffer_finalize, num_string, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 822, 1040);
            come_call_finalizer(sType_finalize, type2_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 822, 1041);
            come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 822, 1042);
            (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0, "10str.nc", 822, 1043));
            come_call_finalizer(sType_finalize, any_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 822, 1044);
            come_call_finalizer(sType_finalize, type3, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 822, 1045);
            come_call_finalizer(sType_finalize, obj_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 822, 1046);
            (name_36 = come_decrement_ref_count(name_36, (void*)0, (void*)0, 0, 0, (void*)0, "10str.nc", 822, 1047));
            (generics_fun_name = come_decrement_ref_count(generics_fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "10str.nc", 822, 1048));
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
    }
    __right_value0 = (void*)0;
    result_type=(struct sType* )come_increment_ref_count(sType_clone(fun->mResultType), "10str.nc", 826, 1049);
    result_type->mStatic=(_Bool)0;
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    come_params=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "10str.nc", 829, 1050, "struct list$1CVALUE$ph*"), "10str.nc", 829, 1051)), "10str.nc", 829, 1052);
    if(__right_value0 = (void*)0,
({(_conditional_value_X0=(((struct sType* )(__right_value0=list$1sType$ph_operator_load_element(fun->mParamTypes,0)))->mHeap&&obj_value->type->mHeap));    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "10str.nc}", 831, 1053);
_conditional_value_X0;})) {
        __right_value0 = (void*)0;
        std_move(((struct sType* )(__right_value0=list$1sType$ph_operator_load_element(fun->mParamTypes,0))),obj_value->type,obj_value,info);
        come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "10str.nc}", 832, 1054);
    }
    list$1CVALUE$ph_push_back(come_params,(struct CVALUE* )come_increment_ref_count(obj_value, "10str.nc", 834, 1055));
    i=1;
    for(_o2_saved_10=(struct list$1CVALUE$ph*)come_increment_ref_count(tuple_values, "10str.nc", 837, 1056),it_37=list$1CVALUE$ph_begin(_o2_saved_10)    ;!list$1CVALUE$ph_end(_o2_saved_10);it_37=list$1CVALUE$ph_next(_o2_saved_10)){
        __right_value0 = (void*)0;
        come_value_38=(struct CVALUE* )come_increment_ref_count(CVALUE_clone(it_37), "10str.nc", 838, 1057);
        if(__right_value0 = (void*)0,
__right_value1 = (void*)0,
({(_conditional_value_X0=(((struct sType* )(__right_value0=list$1sType$ph_operator_load_element(fun->mParamTypes,i)))&&((struct sType* )(__right_value1=list$1sType$ph_operator_load_element(fun->mParamTypes,i)))->mHeap&&come_value_38->type->mHeap));        come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "10str.nc}", 840, 1058);
        come_call_finalizer(sType_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "10str.nc}", 840, 1059);
_conditional_value_X0;})) {
            __right_value0 = (void*)0;
            std_move(((struct sType* )(__right_value0=list$1sType$ph_operator_load_element(fun->mParamTypes,i))),come_value_38->type,come_value_38,info);
            come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "10str.nc}", 841, 1060);
        }
        list$1CVALUE$ph_push_back(come_params,(struct CVALUE* )come_increment_ref_count(come_value_38, "10str.nc", 843, 1061));
        i++;
        come_call_finalizer(CVALUE_finalize, come_value_38, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 848, 1062);
    }
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "10str.nc", 848, 1063, "struct buffer* "), "10str.nc", 848, 1064)), "10str.nc", 848, 1065);
    buffer_append_str(buf,generics_fun_name);
    buffer_append_str(buf,"(");
    j=0;
    for(_o2_saved_11=(struct list$1CVALUE$ph*)come_increment_ref_count(come_params, "10str.nc", 854, 1066),it_39=list$1CVALUE$ph_begin(_o2_saved_11)    ;!list$1CVALUE$ph_end(_o2_saved_11);it_39=list$1CVALUE$ph_next(_o2_saved_11)){
        buffer_append_str(buf,it_39->c_value);
        if(j!=list$1CVALUE$ph_length(come_params)-1) {
            buffer_append_str(buf,",");
        }
        j++;
    }
    buffer_append_str(buf,")");
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    come_value2=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "10str.nc", 865, 1067, "struct CVALUE* "), "10str.nc", 865, 1068)), "10str.nc", 865, 1069);
    __right_value0 = (void*)0;
    __dec_obj109=come_value2->c_value,
    come_value2->c_value=(char* )come_increment_ref_count(buffer_to_string(buf), "10str.nc", 867, 1071);
    __dec_obj109 = come_decrement_ref_count(__dec_obj109, (void*)0, (void*)0, 0,0, (void*)0, "10str.nc", 867, 1070);
    __right_value0 = (void*)0;
    __dec_obj110=come_value2->type,
    come_value2->type=(struct sType* )come_increment_ref_count(sType_clone(result_type), "10str.nc", 869, 1073);
    come_call_finalizer(sType_finalize, __dec_obj110,(void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc", 869, 1072);
    come_value2->type->mStatic=(_Bool)0;
    come_value2->var=((void*)0);
    if(result_type->mHeap) {
        append_object_to_right_values(come_value2,result_type,info,(_Bool)0,((void*)0),((void*)0),((void*)0));
    }
    add_come_last_code(info,"%s",come_value2->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value2, "10str.nc", 879, 1074));
        __result_obj__0 = (_Bool)1;
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, tuple_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 881, 1075);
    come_call_finalizer(list$1sType$ph$p_finalize, tuple_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 881, 1076);
    come_call_finalizer(list$1CVALUE$ph$p_finalize, tuple_values, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 881, 1077);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, _o2_saved_8, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 881, 1078);
    come_call_finalizer(sType_finalize, type_32, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 881, 1079);
    come_call_finalizer(list$1sType$ph$p_finalize, _o2_saved_9, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 881, 1080);
    come_call_finalizer(CVALUE_finalize, obj_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 881, 1081);
    come_call_finalizer(buffer_finalize, num_string, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 881, 1082);
    come_call_finalizer(sType_finalize, type2_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 881, 1083);
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 881, 1084);
    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0, "10str.nc", 881, 1085));
    come_call_finalizer(sType_finalize, any_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 881, 1086);
    come_call_finalizer(sType_finalize, type3, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 881, 1087);
    come_call_finalizer(sType_finalize, obj_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 881, 1088);
    (name_36 = come_decrement_ref_count(name_36, (void*)0, (void*)0, 0, 0, (void*)0, "10str.nc", 881, 1089));
    (generics_fun_name = come_decrement_ref_count(generics_fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "10str.nc", 881, 1090));
    come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 881, 1091);
    come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 881, 1092);
    come_call_finalizer(list$1CVALUE$ph$p_finalize, _o2_saved_10, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 881, 1093);
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 881, 1094);
    come_call_finalizer(list$1CVALUE$ph$p_finalize, _o2_saved_11, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 881, 1095);
    come_call_finalizer(CVALUE_finalize, come_value2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 881, 1096);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void list$1tuple2$2char$phsNode$ph$ph_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsNode$ph$ph_finalize"; neo_current_frame = &fr;
    struct list_item$1tuple2$2char$phsNode$ph$ph* it;
    struct list_item$1tuple2$2char$phsNode$ph$ph* prev_it;
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1tuple2$2char$phsNode$ph$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1504, 935);
    }
        neo_current_frame = fr.prev;
}

static void sTupleNode_finalize(struct sTupleNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sTupleNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sTupleNode_finalize", 2, 939));
    }
    if(self!=((void*)0)&&self->tuple_elements!=((void*)0)) {
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, self->tuple_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sTupleNode_finalize}", 3, 940);
    }
        neo_current_frame = fr.prev;
}

static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_begin(struct list$1tuple2$2char$phsNode$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsNode$ph$ph_begin"; neo_current_frame = &fr;
    struct tuple2$2char$phsNode$ph* result;
    struct tuple2$2char$phsNode$ph* __result_obj__0;
    struct tuple2$2char$phsNode$ph* result_30;
    if(self==((void*)0)) {
        memset(&result,0,sizeof(struct tuple2$2char$phsNode$ph*));
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
    memset(&result_30,0,sizeof(struct tuple2$2char$phsNode$ph*));
        __result_obj__0 = result_30;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static _Bool list$1tuple2$2char$phsNode$ph$ph_end(struct list$1tuple2$2char$phsNode$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsNode$ph$ph_end"; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self==((void*)0)||self->it==((void*)0);
        neo_current_frame = fr.prev;
}

static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_next(struct list$1tuple2$2char$phsNode$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsNode$ph$ph_next"; neo_current_frame = &fr;
    struct tuple2$2char$phsNode$ph* result;
    struct tuple2$2char$phsNode$ph* __result_obj__0;
    struct tuple2$2char$phsNode$ph* result_31;
    if(self==((void*)0)||self->it==((void*)0)) {
        memset(&result,0,sizeof(struct tuple2$2char$phsNode$ph*));
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
    memset(&result_31,0,sizeof(struct tuple2$2char$phsNode$ph*));
        __result_obj__0 = result_31;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct CVALUE*  CVALUE_clone(struct CVALUE*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "CVALUE_clone"; neo_current_frame = &fr;
    struct CVALUE*  __result_obj__0  ;
    void* __right_value0 = (void*)0;
    struct CVALUE*  result  ;
    char*  __dec_obj99  ;
    struct sType*  __dec_obj100  ;
    char*  __dec_obj101  ;
    char*  __dec_obj102  ;
    char*  __dec_obj103  ;
    if(self==(void*)0) {
                __result_obj__0 = (struct CVALUE* )come_increment_ref_count((void*)0, "CVALUE_clone", 4, 967);
        neo_current_frame = fr.prev;
        come_call_finalizer(CVALUE_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "CVALUE_clone}", 4, 968);
        return __result_obj__0;
    }
    result=(struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "CVALUE_clone", 5, 969, "struct CVALUE* "), "CVALUE_clone", 5, 970);
    if(self!=((void*)0)&&self->c_value!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj99=result->c_value,
        result->c_value=(char* )come_increment_ref_count((char* )come_memdup(self->c_value, "CVALUE_clone", 6, 971, "char* "), "CVALUE_clone", 6, 973);
        __dec_obj99 = come_decrement_ref_count(__dec_obj99, (void*)0, (void*)0, 0,0, (void*)0, "CVALUE_clone", 6, 972);
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj100=result->type,
        result->type=(struct sType* )come_increment_ref_count(sType_clone(self->type), "CVALUE_clone", 7, 975);
        come_call_finalizer(sType_finalize, __dec_obj100,(void*)0, (void*)0, 0, 0, 0, (void*)0, "CVALUE_clone", 7, 974);
    }
    if(self!=((void*)0)) {
        result->var=self->var;
    }
    if(self!=((void*)0)) {
        result->right_value_objects=self->right_value_objects;
    }
    if(self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj101=result->c_value_without_right_value_objects,
        result->c_value_without_right_value_objects=(char* )come_increment_ref_count((char* )come_memdup(self->c_value_without_right_value_objects, "CVALUE_clone", 10, 976, "char* "), "CVALUE_clone", 10, 978);
        __dec_obj101 = come_decrement_ref_count(__dec_obj101, (void*)0, (void*)0, 0,0, (void*)0, "CVALUE_clone", 10, 977);
    }
    if(self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj102=result->c_value_without_cast_object_value,
        result->c_value_without_cast_object_value=(char* )come_increment_ref_count((char* )come_memdup(self->c_value_without_cast_object_value, "CVALUE_clone", 11, 979, "char* "), "CVALUE_clone", 11, 981);
        __dec_obj102 = come_decrement_ref_count(__dec_obj102, (void*)0, (void*)0, 0,0, (void*)0, "CVALUE_clone", 11, 980);
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
        __dec_obj103=result->c_value_without_null_checker,
        result->c_value_without_null_checker=(char* )come_increment_ref_count((char* )come_memdup(self->c_value_without_null_checker, "CVALUE_clone", 15, 982, "char* "), "CVALUE_clone", 15, 984);
        __dec_obj103 = come_decrement_ref_count(__dec_obj103, (void*)0, (void*)0, 0,0, (void*)0, "CVALUE_clone", 15, 983);
    }
        __result_obj__0 = (struct CVALUE* )come_increment_ref_count(result, "CVALUE_clone", 16, 985);
    come_call_finalizer(CVALUE_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "CVALUE_clone}", 16, 986);
    neo_current_frame = fr.prev;
    come_call_finalizer(CVALUE_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "CVALUE_clone}", 16, 987);
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

static struct sType*  list$1sType$ph_begin(struct list$1sType$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_begin"; neo_current_frame = &fr;
    struct sType*  result  ;
    struct sType*  __result_obj__0  ;
    struct sType*  result_33  ;
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
    memset(&result_33,0,sizeof(struct sType* ));
        __result_obj__0 = result_33;
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
    struct sType*  result_35  ;
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
    memset(&result_35,0,sizeof(struct sType* ));
        __result_obj__0 = result_35;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sMapNode* sMapNode_initialize(struct sMapNode* self, struct list$1sNode$ph* map_key_elements, struct list$1sNode$ph* map_elements, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sMapNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct list$1sNode$ph* __dec_obj111;
    struct list$1sNode$ph* __dec_obj112;
    struct sMapNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sMapNode*)come_increment_ref_count(self, "10str.nc", 889, 1097),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "10str.nc}", 889, 1098);
    __dec_obj111=self->map_key_elements,
    self->map_key_elements=(struct list$1sNode$ph*)come_increment_ref_count(map_key_elements, "10str.nc", 891, 1100);
    come_call_finalizer(list$1sNode$ph_finalize, __dec_obj111,(void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc", 891, 1099);
    __dec_obj112=self->map_elements,
    self->map_elements=(struct list$1sNode$ph*)come_increment_ref_count(map_elements, "10str.nc", 892, 1102);
    come_call_finalizer(list$1sNode$ph_finalize, __dec_obj112,(void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc", 892, 1101);
        __result_obj__0 = (struct sMapNode*)come_increment_ref_count(self, "10str.nc", 895, 1103);
    come_call_finalizer(sMapNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "10str.nc}", 895, 1107);
    come_call_finalizer(list$1sNode$ph$p_finalize, map_key_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 895, 1108);
    come_call_finalizer(list$1sNode$ph$p_finalize, map_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 895, 1109);
    neo_current_frame = fr.prev;
    come_call_finalizer(sMapNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "10str.nc}", 895, 1110);
    return __result_obj__0;
}

char*  sMapNode_kind(struct sMapNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sMapNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sMapNode"))), "10str.nc", 897, 1111);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "10str.nc", 897, 1112));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "10str.nc", 897, 1113));
    return __result_obj__0;
}

_Bool sMapNode_compile(struct sMapNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sMapNode_compile"; neo_current_frame = &fr;
    struct list$1sNode$ph* map_key_elements;
    struct list$1sNode$ph* map_elements;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1CVALUE$ph* key_params;
    struct list$1CVALUE$ph* element_params;
    struct sType*  map_key_type  ;
    struct sType*  map_element_type  ;
    _Bool __result_obj__0;
    int i;
    struct sNode* key_elements;
    struct sNode* elements;
    _Bool Value;
    struct CVALUE*  come_value  ;
    struct sType*  __dec_obj113  ;
    _Bool Value_42;
    struct CVALUE*  come_value2  ;
    struct sType*  __dec_obj114  ;
    struct sType*  key_type_values  ;
    char*  var_name  ;
    struct sVar*  var_  ;
    struct sType*  element_type_values  ;
    char*  var_name2  ;
    struct sVar*  var2_  ;
    struct buffer*  source  ;
    int i_43;
    struct CVALUE*  key_param  ;
    struct CVALUE*  element_param  ;
    void* __right_value2 = (void*)0;
    struct sType*  map_type  ;
    struct sType*  obj_type  ;
    struct tuple2$2char$phsGenericsFun$p* multiple_assign_var5
;    char*  name  =0;
    struct sGenericsFun*  generics_fun  =0;
    char*  generics_fun_name  ;
    struct sFun*  fun  ;
    char*  __dec_obj115  ;
    struct sType*  result_type  ;
    struct sType*  type  ;
    struct CVALUE*  obj_value  ;
    struct buffer*  num_string  ;
    struct sType*  type2_  ;
    struct sType*  type2  ;
    char*  type_name  ;
    struct sType*  any_type  ;
    _Bool _conditional_value_X0;
    char*  __dec_obj116  ;
    char*  __dec_obj117  ;
    struct sType*  type3  ;
    struct sType*  __dec_obj118  ;
    struct list$1CVALUE$ph* come_params;
    struct CVALUE*  come_value2_44  ;
    char*  __dec_obj119  ;
    struct sType*  __dec_obj120  ;
    struct CVALUE*  come_value3  ;
    char*  __dec_obj121  ;
    struct sType*  __dec_obj122  ;
    struct CVALUE*  come_value4  ;
    char*  __dec_obj123  ;
    struct sType*  __dec_obj124  ;
    int j;
    struct list$1CVALUE$ph* _o2_saved_12;
    struct CVALUE*  it  ;
    struct CVALUE*  come_value5  ;
    char*  __dec_obj125  ;
    struct sType*  __dec_obj126  ;
    map_key_elements=(struct list$1sNode$ph*)come_increment_ref_count(self->map_key_elements, "10str.nc", 902, 1114);
    map_elements=(struct list$1sNode$ph*)come_increment_ref_count(self->map_elements, "10str.nc", 903, 1115);
    key_params=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "10str.nc", 905, 1116, "struct list$1CVALUE$ph*"), "10str.nc", 905, 1117)), "10str.nc", 905, 1118);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    element_params=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "10str.nc", 906, 1119, "struct list$1CVALUE$ph*"), "10str.nc", 906, 1120)), "10str.nc", 906, 1121);
    map_key_type=((void*)0);
    map_element_type=((void*)0);
    if(info->exp_value) {
        err_msg(info,"nest value expression is prohibited");
                __result_obj__0 = (_Bool)0;
        come_call_finalizer(list$1sNode$ph$p_finalize, map_key_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 912, 1122);
        come_call_finalizer(list$1sNode$ph$p_finalize, map_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 912, 1123);
        come_call_finalizer(list$1CVALUE$ph$p_finalize, key_params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 912, 1124);
        come_call_finalizer(list$1CVALUE$ph$p_finalize, element_params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 912, 1125);
        come_call_finalizer(sType_finalize, map_key_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 912, 1126);
        come_call_finalizer(sType_finalize, map_element_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 912, 1127);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    info->exp_value=(_Bool)1;
    for(i=0    ;i<list$1sNode$ph_length(map_key_elements);i++){
        __right_value0 = (void*)0;
        key_elements=((struct sNode*)(__right_value0=list$1sNode$ph_operator_load_element(map_key_elements,i)));
        __right_value0 = (void*)0;
        elements=((struct sNode*)(__right_value0=list$1sNode$ph_operator_load_element(map_elements,i)));
        Value=node_compile(key_elements,info);
        if(!Value) {
                        __result_obj__0 = (_Bool)0;
            come_call_finalizer(list$1sNode$ph$p_finalize, map_key_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 921, 1146);
            come_call_finalizer(list$1sNode$ph$p_finalize, map_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 921, 1147);
            come_call_finalizer(list$1CVALUE$ph$p_finalize, key_params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 921, 1148);
            come_call_finalizer(list$1CVALUE$ph$p_finalize, element_params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 921, 1149);
            come_call_finalizer(sType_finalize, map_key_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 921, 1150);
            come_call_finalizer(sType_finalize, map_element_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 921, 1151);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        __right_value0 = (void*)0;
        come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "10str.nc", 924, 1152);
        remove_value_from_right_value_objects(come_value,info);
        if(map_key_type) {
            __right_value0 = (void*)0;
            check_assign_type(((char*)(__right_value0=xsprintf("Map key type"))),map_key_type,come_value->type,come_value,info);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "10str.nc", 929, 1153));
        }
        list$1CVALUE$ph_push_back(key_params,(struct CVALUE* )come_increment_ref_count(come_value, "10str.nc", 932, 1154));
        __right_value0 = (void*)0;
        __dec_obj113=map_key_type,
        map_key_type=(struct sType* )come_increment_ref_count(sType_clone(come_value->type), "10str.nc", 933, 1156);
        come_call_finalizer(sType_finalize, __dec_obj113,(void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc", 933, 1155);
        Value_42=node_compile(elements,info);
        if(!Value_42) {
                        __result_obj__0 = (_Bool)0;
            come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 936, 1157);
            come_call_finalizer(list$1sNode$ph$p_finalize, map_key_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 936, 1158);
            come_call_finalizer(list$1sNode$ph$p_finalize, map_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 936, 1159);
            come_call_finalizer(list$1CVALUE$ph$p_finalize, key_params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 936, 1160);
            come_call_finalizer(list$1CVALUE$ph$p_finalize, element_params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 936, 1161);
            come_call_finalizer(sType_finalize, map_key_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 936, 1162);
            come_call_finalizer(sType_finalize, map_element_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 936, 1163);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        __right_value0 = (void*)0;
        come_value2=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "10str.nc", 939, 1164);
        remove_value_from_right_value_objects(come_value2,info);
        if(map_element_type) {
            __right_value0 = (void*)0;
            check_assign_type(((char*)(__right_value0=xsprintf("Map element type"))),map_element_type,come_value2->type,come_value2,info);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "10str.nc", 944, 1165));
        }
        list$1CVALUE$ph_push_back(element_params,(struct CVALUE* )come_increment_ref_count(come_value2, "10str.nc", 947, 1166));
        __right_value0 = (void*)0;
        __dec_obj114=map_element_type,
        map_element_type=(struct sType* )come_increment_ref_count(sType_clone(come_value2->type), "10str.nc", 948, 1168);
        come_call_finalizer(sType_finalize, __dec_obj114,(void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc", 948, 1167);
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 950, 1169);
        come_call_finalizer(CVALUE_finalize, come_value2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 950, 1170);
    }
    info->exp_value=(_Bool)0;
    static int map_value_num=0;
    __right_value0 = (void*)0;
    key_type_values=(struct sType* )come_increment_ref_count(sType_clone(map_key_type), "10str.nc", 954, 1171);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    list$1sNode$ph_push_back(key_type_values->mArrayNum,(struct sNode*)come_increment_ref_count(create_int_node((char* )come_increment_ref_count(int_to_string(list$1CVALUE$ph_length(key_params)), "10str.nc", 955, 1172),info), "10str.nc", 955, 1173));
    key_type_values->mHeap=(_Bool)0;
    __right_value0 = (void*)0;
    var_name=(char* )come_increment_ref_count(xsprintf("__map_keys%d__",++map_value_num), "10str.nc", 958, 1174);
    __right_value0 = (void*)0;
    add_variable_to_table(var_name,((struct sType* )(__right_value0=sType_clone(key_type_values))),info,(_Bool)0,(_Bool)0,(_Bool)0);
    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "10str.nc}", 960, 1175);
    var_=get_variable_from_table(info->lv_table,var_name);
    __right_value0 = (void*)0;
    add_come_code_at_function_head(info,"%s;\n",((char* )(__right_value0=make_define_var(key_type_values,var_->mCValueName,info,(_Bool)0,(_Bool)0))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "10str.nc", 964, 1176));
    __right_value0 = (void*)0;
    element_type_values=(struct sType* )come_increment_ref_count(sType_clone(map_element_type), "10str.nc", 966, 1177);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    list$1sNode$ph_push_back(element_type_values->mArrayNum,(struct sNode*)come_increment_ref_count(create_int_node((char* )come_increment_ref_count(int_to_string(list$1CVALUE$ph_length(element_params)), "10str.nc", 967, 1178),info), "10str.nc", 967, 1179));
    element_type_values->mHeap=(_Bool)0;
    __right_value0 = (void*)0;
    var_name2=(char* )come_increment_ref_count(xsprintf("__map_element%d__",map_value_num), "10str.nc", 970, 1180);
    __right_value0 = (void*)0;
    add_variable_to_table(var_name2,((struct sType* )(__right_value0=sType_clone(element_type_values))),info,(_Bool)0,(_Bool)0,(_Bool)0);
    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "10str.nc}", 972, 1181);
    var2_=get_variable_from_table(info->lv_table,var_name2);
    __right_value0 = (void*)0;
    add_come_code_at_function_head(info,"%s;\n",((char* )(__right_value0=make_define_var(element_type_values,var2_->mCValueName,info,(_Bool)0,(_Bool)0))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "10str.nc", 976, 1182));
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    source=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "10str.nc", 978, 1183, "struct buffer* "), "10str.nc", 978, 1184)), "10str.nc", 978, 1185);
    buffer_append_str(source,"(");
    for(i_43=0    ;i_43<list$1CVALUE$ph_length(key_params);i_43++){
        __right_value0 = (void*)0;
        key_param=((struct CVALUE* )(__right_value0=list$1CVALUE$ph_operator_load_element(key_params,i_43)));
        __right_value0 = (void*)0;
        element_param=((struct CVALUE* )(__right_value0=list$1CVALUE$ph_operator_load_element(element_params,i_43)));
        if(map_key_type->mHeap) {
            buffer_append_format(source,"%s[%d]=%s,\n",var_->mCValueName,i_43,key_param->c_value);
        }
        else {
            buffer_append_format(source,"%s[%d]=%s,\n",var_->mCValueName,i_43,key_param->c_value);
        }
        if(map_element_type->mHeap) {
            buffer_append_format(source,"%s[%d]=%s,\n",var2_->mCValueName,i_43,element_param->c_value);
        }
        else {
            buffer_append_format(source,"%s[%d]=%s,\n",var2_->mCValueName,i_43,element_param->c_value);
        }
    }
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    map_type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "10str.nc", 1003, 1186, "struct sType* "), "10str.nc", 1003, 1187),(char*)come_increment_ref_count(xsprintf("map"), "10str.nc", 1003, 1188),(_Bool)0,info,(_Bool)0,0), "10str.nc", 1003, 1189);
    __right_value0 = (void*)0;
    list$1sType$ph_push_back(map_type->mGenericsTypes,(struct sType* )come_increment_ref_count((((struct sType* )(__right_value0=sType_clone(map_key_type)))), "10str.nc", 1004, 1190));
    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "}", 1004, 1191);
    __right_value0 = (void*)0;
    list$1sType$ph_push_back(map_type->mGenericsTypes,(struct sType* )come_increment_ref_count((((struct sType* )(__right_value0=sType_clone(map_element_type)))), "10str.nc", 1005, 1192));
    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "}", 1005, 1193);
    __right_value0 = (void*)0;
    obj_type=(struct sType* )come_increment_ref_count(sType_clone(map_type), "10str.nc", 1007, 1194);
    const char* fun_name="initialize_with_values";
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    multiple_assign_var5=((struct tuple2$2char$phsGenericsFun$p*)(__right_value1=make_generics_function(obj_type,(char* )come_increment_ref_count(__builtin_string(fun_name), "10str.nc", 1010, 1195),info,(_Bool)1)));
    name=(char* )come_increment_ref_count(multiple_assign_var5->v1, "10str.nc", 1010, 1196);
    generics_fun=multiple_assign_var5->v2;
    come_call_finalizer(tuple2$2char$phsGenericsFun$p$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "10str.nc}", 1010, 1197);
    generics_fun_name=(char* )come_increment_ref_count(name, "10str.nc", 1011, 1198);
    __right_value0 = (void*)0;
    fun=((struct sFun* )(__right_value0=map$2char$phsFun$ph_at(info->funcs,generics_fun_name,((void*)0),(_Bool)0)));
    if(fun==((void*)0)) {
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __dec_obj115=generics_fun_name,
        generics_fun_name=(char* )come_increment_ref_count(create_method_name(obj_type,(_Bool)0,((char* )(__right_value0=__builtin_string(fun_name))),info,(_Bool)1), "10str.nc", 1016, 1200);
        __dec_obj115 = come_decrement_ref_count(__dec_obj115, (void*)0, (void*)0, 0,0, (void*)0, "10str.nc", 1016, 1199);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "10str.nc", 1016, 1201));
        __right_value0 = (void*)0;
        fun=((struct sFun* )(__right_value0=map$2char$phsFun$ph_at(info->funcs,generics_fun_name,((void*)0),(_Bool)0)));
        if(fun==((void*)0)) {
            err_msg(info,"function not found(%s) at method(%s)(3)",generics_fun_name,info->come_fun->mName);
                        __result_obj__0 = (_Bool)1;
            come_call_finalizer(list$1sNode$ph$p_finalize, map_key_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 1022, 1202);
            come_call_finalizer(list$1sNode$ph$p_finalize, map_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 1022, 1203);
            come_call_finalizer(list$1CVALUE$ph$p_finalize, key_params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 1022, 1204);
            come_call_finalizer(list$1CVALUE$ph$p_finalize, element_params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 1022, 1205);
            come_call_finalizer(sType_finalize, map_key_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 1022, 1206);
            come_call_finalizer(sType_finalize, map_element_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 1022, 1207);
            come_call_finalizer(sType_finalize, key_type_values, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 1022, 1208);
            (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0, "10str.nc", 1022, 1209));
            come_call_finalizer(sType_finalize, element_type_values, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 1022, 1210);
            (var_name2 = come_decrement_ref_count(var_name2, (void*)0, (void*)0, 0, 0, (void*)0, "10str.nc", 1022, 1211));
            come_call_finalizer(buffer_finalize, source, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 1022, 1212);
            come_call_finalizer(sType_finalize, map_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 1022, 1213);
            come_call_finalizer(sType_finalize, obj_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 1022, 1214);
            (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "10str.nc", 1022, 1215));
            (generics_fun_name = come_decrement_ref_count(generics_fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "10str.nc", 1022, 1216));
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
    }
    __right_value0 = (void*)0;
    result_type=(struct sType* )come_increment_ref_count(sType_clone(fun->mResultType), "10str.nc", 1026, 1217);
    result_type->mStatic=(_Bool)0;
    type=(struct sType* )come_increment_ref_count(map_type, "10str.nc", 1029, 1218);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    obj_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "10str.nc", 1031, 1219, "struct CVALUE* "), "10str.nc", 1031, 1220)), "10str.nc", 1031, 1221);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    num_string=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "10str.nc", 1033, 1222, "struct buffer* "), "10str.nc", 1033, 1223)), "10str.nc", 1033, 1224);
    buffer_append_str(num_string,"1");
    __right_value0 = (void*)0;
    type2_=(struct sType* )come_increment_ref_count(solve_generics(type,type,info), "10str.nc", 1037, 1225);
    __right_value0 = (void*)0;
    type2=(struct sType* )come_increment_ref_count(solve_method_generics(type2_,info), "10str.nc", 1038, 1226);
    __right_value0 = (void*)0;
    type_name=(char* )come_increment_ref_count(make_type_name_string(type2,info,(_Bool)0,(_Bool)1,(_Bool)0,(_Bool)0), "10str.nc", 1040, 1227);
    any_type=(struct sType* )come_increment_ref_count(type2, "10str.nc", 1042, 1228);
    any_type->mPointerNum=1;
    any_type->mHeap=(_Bool)1;
    if(__right_value0 = (void*)0,
__right_value1 = (void*)0,
__right_value2 = (void*)0,
({(_conditional_value_X0=(((struct sFun* )(__right_value2=map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value1=xsprintf("come_calloc_v2"))))))));    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "10str.nc", 1046, 1229));
    come_call_finalizer(sFun_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0, "10str.nc}", 1046, 1230);
_conditional_value_X0;})) {
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __dec_obj116=obj_value->c_value,
        obj_value->c_value=(char* )come_increment_ref_count(xsprintf("(%s*)come_calloc_v2(1, sizeof(%s)*(%s), \"%s\", %d, %d, \"%s\")",type_name,type_name,((char* )(__right_value0=buffer_to_string(num_string))),info->sname,info->sline,++info->id,type_name), "10str.nc", 1047, 1232);
        __dec_obj116 = come_decrement_ref_count(__dec_obj116, (void*)0, (void*)0, 0,0, (void*)0, "10str.nc", 1047, 1231);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "10str.nc", 1047, 1233));
    }
    else {
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __dec_obj117=obj_value->c_value,
        obj_value->c_value=(char* )come_increment_ref_count(xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, %d, \"%s\")",type_name,type_name,((char* )(__right_value0=buffer_to_string(num_string))),info->sname,info->sline,++info->id,type_name), "10str.nc", 1050, 1235);
        __dec_obj117 = come_decrement_ref_count(__dec_obj117, (void*)0, (void*)0, 0,0, (void*)0, "10str.nc", 1050, 1234);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "10str.nc", 1050, 1236));
    }
    __right_value0 = (void*)0;
    type3=(struct sType* )come_increment_ref_count(sType_clone(type2), "10str.nc", 1053, 1237);
    type3->mPointerNum++;
    type3->mHeap=(_Bool)1;
    type2->mHeap=(_Bool)1;
    __right_value0 = (void*)0;
    __dec_obj118=obj_value->type,
    obj_value->type=(struct sType* )come_increment_ref_count(sType_clone(type2), "10str.nc", 1057, 1239);
    come_call_finalizer(sType_finalize, __dec_obj118,(void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc", 1057, 1238);
    obj_value->var=((void*)0);
    append_object_to_right_values(obj_value,type3,info,(_Bool)0,((void*)0),((void*)0),((void*)0));
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    come_params=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "10str.nc", 1063, 1240, "struct list$1CVALUE$ph*"), "10str.nc", 1063, 1241)), "10str.nc", 1063, 1242);
    if(__right_value0 = (void*)0,
({(_conditional_value_X0=(((struct sType* )(__right_value0=list$1sType$ph_operator_load_element(fun->mParamTypes,0)))->mHeap&&obj_value->type->mHeap));    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "10str.nc}", 1065, 1243);
_conditional_value_X0;})) {
        __right_value0 = (void*)0;
        std_move(((struct sType* )(__right_value0=list$1sType$ph_operator_load_element(fun->mParamTypes,0))),obj_value->type,obj_value,info);
        come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "10str.nc}", 1066, 1244);
    }
    list$1CVALUE$ph_push_back(come_params,(struct CVALUE* )come_increment_ref_count(obj_value, "10str.nc", 1068, 1245));
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    come_value2_44=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "10str.nc", 1070, 1246, "struct CVALUE* "), "10str.nc", 1070, 1247)), "10str.nc", 1070, 1248);
    __right_value0 = (void*)0;
    __dec_obj119=come_value2_44->c_value,
    come_value2_44->c_value=(char* )come_increment_ref_count(xsprintf("%d",list$1CVALUE$ph_length(key_params)), "10str.nc", 1072, 1250);
    __dec_obj119 = come_decrement_ref_count(__dec_obj119, (void*)0, (void*)0, 0,0, (void*)0, "10str.nc", 1072, 1249);
    __dec_obj120=come_value2_44->type,
    come_value2_44->type=((void*)0);
    come_call_finalizer(sType_finalize, __dec_obj120,(void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc", 1073, 1251);
    come_value2_44->var=((void*)0);
    list$1CVALUE$ph_push_back(come_params,(struct CVALUE* )come_increment_ref_count(come_value2_44, "10str.nc", 1076, 1252));
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    come_value3=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "10str.nc", 1078, 1253, "struct CVALUE* "), "10str.nc", 1078, 1254)), "10str.nc", 1078, 1255);
    __right_value0 = (void*)0;
    __dec_obj121=come_value3->c_value,
    come_value3->c_value=(char* )come_increment_ref_count(xsprintf("%s",var_->mCValueName), "10str.nc", 1080, 1257);
    __dec_obj121 = come_decrement_ref_count(__dec_obj121, (void*)0, (void*)0, 0,0, (void*)0, "10str.nc", 1080, 1256);
    __dec_obj122=come_value3->type,
    come_value3->type=((void*)0);
    come_call_finalizer(sType_finalize, __dec_obj122,(void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc", 1081, 1258);
    come_value3->var=((void*)0);
    list$1CVALUE$ph_push_back(come_params,(struct CVALUE* )come_increment_ref_count(come_value3, "10str.nc", 1084, 1259));
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    come_value4=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "10str.nc", 1086, 1260, "struct CVALUE* "), "10str.nc", 1086, 1261)), "10str.nc", 1086, 1262);
    __right_value0 = (void*)0;
    __dec_obj123=come_value4->c_value,
    come_value4->c_value=(char* )come_increment_ref_count(xsprintf("%s",var2_->mCValueName), "10str.nc", 1088, 1264);
    __dec_obj123 = come_decrement_ref_count(__dec_obj123, (void*)0, (void*)0, 0,0, (void*)0, "10str.nc", 1088, 1263);
    __dec_obj124=come_value4->type,
    come_value4->type=((void*)0);
    come_call_finalizer(sType_finalize, __dec_obj124,(void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc", 1089, 1265);
    come_value4->var=((void*)0);
    list$1CVALUE$ph_push_back(come_params,(struct CVALUE* )come_increment_ref_count(come_value4, "10str.nc", 1092, 1266));
    buffer_append_str(source,generics_fun_name);
    buffer_append_str(source,"(");
    j=0;
    for(_o2_saved_12=(struct list$1CVALUE$ph*)come_increment_ref_count(come_params, "10str.nc", 1100, 1267),it=list$1CVALUE$ph_begin(_o2_saved_12)    ;!list$1CVALUE$ph_end(_o2_saved_12);it=list$1CVALUE$ph_next(_o2_saved_12)){
        buffer_append_str(source,it->c_value);
        if(j!=list$1CVALUE$ph_length(come_params)-1) {
            buffer_append_str(source,",");
        }
        j++;
    }
    buffer_append_str(source,")");
    buffer_append_str(source,")");
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    come_value5=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "10str.nc", 1112, 1268, "struct CVALUE* "), "10str.nc", 1112, 1269)), "10str.nc", 1112, 1270);
    __right_value0 = (void*)0;
    __dec_obj125=come_value5->c_value,
    come_value5->c_value=(char* )come_increment_ref_count(buffer_to_string(source), "10str.nc", 1114, 1272);
    __dec_obj125 = come_decrement_ref_count(__dec_obj125, (void*)0, (void*)0, 0,0, (void*)0, "10str.nc", 1114, 1271);
    __right_value0 = (void*)0;
    __dec_obj126=come_value5->type,
    come_value5->type=(struct sType* )come_increment_ref_count(sType_clone(result_type), "10str.nc", 1115, 1274);
    come_call_finalizer(sType_finalize, __dec_obj126,(void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc", 1115, 1273);
    come_value5->type->mStatic=(_Bool)0;
    come_value5->var=((void*)0);
    if(result_type->mHeap) {
        append_object_to_right_values(come_value5,result_type,info,(_Bool)0,((void*)0),((void*)0),((void*)0));
    }
    add_come_last_code(info,"%s",come_value5->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value5, "10str.nc", 1125, 1275));
        __result_obj__0 = (_Bool)1;
    come_call_finalizer(list$1sNode$ph$p_finalize, map_key_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 1127, 1276);
    come_call_finalizer(list$1sNode$ph$p_finalize, map_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 1127, 1277);
    come_call_finalizer(list$1CVALUE$ph$p_finalize, key_params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 1127, 1278);
    come_call_finalizer(list$1CVALUE$ph$p_finalize, element_params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 1127, 1279);
    come_call_finalizer(sType_finalize, map_key_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 1127, 1280);
    come_call_finalizer(sType_finalize, map_element_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 1127, 1281);
    come_call_finalizer(sType_finalize, key_type_values, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 1127, 1282);
    (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0, "10str.nc", 1127, 1283));
    come_call_finalizer(sType_finalize, element_type_values, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 1127, 1284);
    (var_name2 = come_decrement_ref_count(var_name2, (void*)0, (void*)0, 0, 0, (void*)0, "10str.nc", 1127, 1285));
    come_call_finalizer(buffer_finalize, source, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 1127, 1286);
    come_call_finalizer(sType_finalize, map_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 1127, 1287);
    come_call_finalizer(sType_finalize, obj_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 1127, 1288);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "10str.nc", 1127, 1289));
    (generics_fun_name = come_decrement_ref_count(generics_fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "10str.nc", 1127, 1290));
    come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 1127, 1291);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 1127, 1292);
    come_call_finalizer(CVALUE_finalize, obj_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 1127, 1293);
    come_call_finalizer(buffer_finalize, num_string, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 1127, 1294);
    come_call_finalizer(sType_finalize, type2_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 1127, 1295);
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 1127, 1296);
    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0, "10str.nc", 1127, 1297));
    come_call_finalizer(sType_finalize, any_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 1127, 1298);
    come_call_finalizer(sType_finalize, type3, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 1127, 1299);
    come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 1127, 1300);
    come_call_finalizer(CVALUE_finalize, come_value2_44, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 1127, 1301);
    come_call_finalizer(CVALUE_finalize, come_value3, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 1127, 1302);
    come_call_finalizer(CVALUE_finalize, come_value4, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 1127, 1303);
    come_call_finalizer(list$1CVALUE$ph$p_finalize, _o2_saved_12, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 1127, 1304);
    come_call_finalizer(CVALUE_finalize, come_value5, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 1127, 1305);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sMapNode_finalize(struct sMapNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sMapNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sMapNode_finalize", 2, 1104));
    }
    if(self!=((void*)0)&&self->map_key_elements!=((void*)0)) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->map_key_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sMapNode_finalize}", 3, 1105);
    }
    if(self!=((void*)0)&&self->map_elements!=((void*)0)) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->map_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sMapNode_finalize}", 4, 1106);
    }
        neo_current_frame = fr.prev;
}

static struct sNode* list$1sNode$ph$p_operator_load_element(struct list$1sNode$ph* self, int position)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph$p_operator_load_element"; neo_current_frame = &fr;
    struct sNode* default_value;
    struct sNode* __result_obj__0;
    struct list_item$1sNode$ph* it;
    int i;
    struct sNode* default_value_40;
    if(self==((void*)0)) {
        memset(&default_value,0,sizeof(struct sNode*));
                __result_obj__0 = (struct sNode*)come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 2148, 1128);
        ((default_value) ? default_value = come_decrement_ref_count(default_value, ((struct sNode*)default_value)->finalize, ((struct sNode*)default_value)->_protocol_obj, 0, 1,(void*)0, "/usr/local/include/neo-c.h", 2148, 1129):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "/usr/local/include/neo-c.h", 2148, 1130):(void*)0);
        return __result_obj__0;
        ((default_value) ? default_value = come_decrement_ref_count(default_value, ((struct sNode*)default_value)->finalize, ((struct sNode*)default_value)->_protocol_obj, 0, 0,(void*)0, "/usr/local/include/neo-c.h", 2151, 1131):(void*)0);
    }
    if(position<0) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(it!=((void*)0)) {
        if(position==i) {
                        __result_obj__0 = (struct sNode*)come_increment_ref_count(it->item, "/usr/local/include/neo-c.h", 2159, 1132);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "/usr/local/include/neo-c.h", 2159, 1133):(void*)0);
            return __result_obj__0;
        }
        it=it->next;
        i++;
    }
    memset(&default_value_40,0,sizeof(struct sNode*));
        __result_obj__0 = (struct sNode*)come_increment_ref_count(default_value_40, "/usr/local/include/neo-c.h", 2167, 1134);
    ((default_value_40) ? default_value_40 = come_decrement_ref_count(default_value_40, ((struct sNode*)default_value_40)->finalize, ((struct sNode*)default_value_40)->_protocol_obj, 0, 1,(void*)0, "/usr/local/include/neo-c.h", 2167, 1135):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "/usr/local/include/neo-c.h", 2167, 1136):(void*)0);
    return __result_obj__0;
}

static struct sNode* list$1sNode$ph_operator_load_element(struct list$1sNode$ph* self, int position)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_operator_load_element"; neo_current_frame = &fr;
    struct sNode* default_value;
    struct sNode* __result_obj__0;
    struct list_item$1sNode$ph* it;
    int i;
    struct sNode* default_value_41;
    if(self==((void*)0)) {
        memset(&default_value,0,sizeof(struct sNode*));
                __result_obj__0 = (struct sNode*)come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 2148, 1137);
        ((default_value) ? default_value = come_decrement_ref_count(default_value, ((struct sNode*)default_value)->finalize, ((struct sNode*)default_value)->_protocol_obj, 0, 1,(void*)0, "/usr/local/include/neo-c.h", 2148, 1138):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "/usr/local/include/neo-c.h", 2148, 1139):(void*)0);
        return __result_obj__0;
        ((default_value) ? default_value = come_decrement_ref_count(default_value, ((struct sNode*)default_value)->finalize, ((struct sNode*)default_value)->_protocol_obj, 0, 0,(void*)0, "/usr/local/include/neo-c.h", 2151, 1140):(void*)0);
    }
    if(position<0) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(it!=((void*)0)) {
        if(position==i) {
                        __result_obj__0 = (struct sNode*)come_increment_ref_count(it->item, "/usr/local/include/neo-c.h", 2159, 1141);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "/usr/local/include/neo-c.h", 2159, 1142):(void*)0);
            return __result_obj__0;
        }
        it=it->next;
        i++;
    }
    memset(&default_value_41,0,sizeof(struct sNode*));
        __result_obj__0 = (struct sNode*)come_increment_ref_count(default_value_41, "/usr/local/include/neo-c.h", 2167, 1143);
    ((default_value_41) ? default_value_41 = come_decrement_ref_count(default_value_41, ((struct sNode*)default_value_41)->finalize, ((struct sNode*)default_value_41)->_protocol_obj, 0, 1,(void*)0, "/usr/local/include/neo-c.h", 2167, 1144):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "/usr/local/include/neo-c.h", 2167, 1145):(void*)0);
    return __result_obj__0;
}

struct sNode* expression_node_v96(struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "expression_node_v96"; neo_current_frame = &fr;
    int sline_real;
    int sline;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1sNode$ph* exps;
    struct buffer*  value  ;
    char* head_of_last_line;
    int len;
    struct sNode* exp;
    int sline2;
    void* __right_value2 = (void*)0;
    struct sNode* _inf_value1;
    struct sSStringNode* _inf_obj_value1;
    void* __right_value3 = (void*)0;
    struct sNode* __result_obj__0;
    int sline_real_45;
    int sline_46;
    struct buffer*  value_47  ;
    char* p;
    int sline_48;
    int sline2_49;
    struct sNode* _inf_value2;
    struct sPrefixedStringNode* _inf_obj_value2;
    void* __right_value4 = (void*)0;
    int sline_real_50;
    char prefix;
    int sline_51;
    struct buffer*  value_52  ;
    char* p_53;
    int sline_54;
    int sline2_55;
    struct sNode* _inf_value3;
    struct sPrefixedStringNode* _inf_obj_value3;
    int sline_real_56;
    int sline_57;
    struct buffer*  value_58  ;
    char* p_59;
    int sline_60;
    int sline2_61;
    struct sNode* _inf_value4;
    struct sStrNode* _inf_obj_value4;
    int sline_real_62;
    int sline_63;
    struct buffer*  value_64  ;
    unsigned long  size  ;
    char* p_65;
    int sline_66;
    int len_67;
    int sline2_68;
    struct sNode* _inf_value5;
    struct sBufferNode* _inf_obj_value5;
    int sline_real_69;
    int sline_70;
    struct buffer*  buf  ;
    _Bool global;
    _Bool ignore_case;
    struct sNode* _inf_value6;
    struct sStrNode* _inf_obj_value6;
    struct sNode* obj;
    struct list$1tuple2$2char$phsNode$ph$ph* params;
    void* __right_value5 = (void*)0;
    void* __right_value6 = (void*)0;
    struct buffer*  method_block  ;
    int method_block_sline;
    struct list$1sType$ph* method_generics_types;
    struct sNode* node;
    int sline_real_71;
    int sline_72;
    struct buffer*  value_73  ;
    char* p_74;
    int sline_75;
    int len_76;
    int sline2_77;
    _Bool global_78;
    _Bool ignore_case_79;
    struct sNode* _inf_value7;
    struct sStrNode* _inf_obj_value7;
    struct sNode* obj_80;
    struct list$1tuple2$2char$phsNode$ph$ph* params_81;
    struct buffer*  method_block_82  ;
    int method_block_sline_83;
    struct list$1sType$ph* method_generics_types_84;
    struct sNode* node_85;
    int sline_real_86;
    char prefix_87;
    int c;
    int n;
    int n_88;
    unsigned long long int n_90;
    struct sNode* _inf_value8;
    struct sPrefixedCharNode* _inf_obj_value8;
    int sline_real_91;
    int c_92;
    int n_93;
    int n_94;
    unsigned long long int n_97;
    struct sNode* _inf_value9;
    struct sCharNode* _inf_obj_value9;
    int sline_real_98;
    int  c_99  ;
    _Bool quote;
    int n_100;
    int n_101;
    unsigned long long int n_104;
    unsigned char p2;
    int size_105;
    struct sNode* _inf_value10;
    struct sWCharNode* _inf_obj_value10;
    int sline_real_106;
    int sline_107;
    struct buffer*  value_108  ;
    char* p_109;
    int sline_110;
    int sline2_111;
    int len_112;
    int*  wstr  ;
    char* str_113;
    struct sNode* _inf_value11;
    struct sWStringNode* _inf_obj_value11;
    int sline_real_114;
    int sline_115;
    struct list$1sNode$ph* exps_116;
    struct buffer*  value_117  ;
    char* p_118;
    int sline_119;
    int len_120;
    struct sNode* exp_121;
    int sline2_122;
    struct sNode* _inf_value12;
    struct sSStringNode* _inf_obj_value12;
    int sline_real_123;
    char* p_124;
    _Bool no_comma;
    struct sNode* node_125;
    char* p2_126;
    struct buffer*  first_element_source  ;
    struct list$1sNode$ph* list_elements;
    struct list$1sNode$ph* map_keys;
    struct list$1sNode$ph* map_elements;
    _Bool no_comma_127;
    struct sNode* node2;
    struct sNode* _inf_value13;
    struct sMapNode* _inf_obj_value13;
    _Bool no_comma_128;
    struct sNode* node2_129;
    struct sNode* node3;
    struct sNode* _inf_value14;
    struct sMapNode* _inf_obj_value14;
    _Bool no_comma_130;
    struct sNode* node2_131;
    struct sNode* _inf_value15;
    struct sListNode* _inf_obj_value15;
    int sline_real_132;
    struct sNode* node_133;
    memset(&c, 0, sizeof(c));
    memset(&c_92, 0, sizeof(c_92));
    memset(&c_99, 0, sizeof(c_99));
    memset(&quote, 0, sizeof(quote));
    memset(&size_105, 0, sizeof(size_105));
    if(span$1char$p_operator_derefference(info->p)==34&&*(info->p->p+1)==34&&*(info->p->p+2)==34&&*(info->p->p+3)==10) {
        sline_real=info->sline_real;
        info->sline_real=info->sline;
        info->p->p+=4;
        info->sline++;
        sline=info->sline;
        exps=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "10str.nc", 1142, 1306, "struct list$1sNode$ph*"), "10str.nc", 1142, 1307)), "10str.nc", 1142, 1308);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        value=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "10str.nc", 1143, 1309, "struct buffer* "), "10str.nc", 1143, 1310)), "10str.nc", 1143, 1311);
        head_of_last_line=((void*)0);
        while(1) {
            if(span$1char$p_operator_derefference(info->p)==34&&*(info->p->p+1)==34&&*(info->p->p+2)==34) {
                info->p->p+=3;
                skip_spaces_and_lf(info);
                break;
            }
            else if(span$1char$p_operator_derefference(info->p)==37) {
                buffer_append_char(value,37);
                buffer_append_char(value,37);
                info->p->p++;
            }
            else if(span$1char$p_operator_derefference(info->p)==34) {
                buffer_append_char(value,92);
                buffer_append_char(value,34);
                info->p->p++;
            }
            else if(span$1char$p_operator_derefference(info->p)==92) {
                buffer_append_char(value,92);
                info->p->p++;
                if(xisdigit(span$1char$p_operator_derefference(info->p))) {
                    len=0;
                    while(xisdigit(span$1char$p_operator_derefference(info->p))&&len<3) {
                        buffer_append_char(value,span$1char$p_operator_derefference(info->p));
                        info->p->p++;
                        len++;
                    }
                }
                else if(span$1char$p_operator_derefference(info->p)==120||span$1char$p_operator_derefference(info->p)==88) {
                    buffer_append_char(value,span$1char$p_operator_derefference(info->p));
                    info->p->p++;
                    while(span$1char$p_operator_derefference(info->p)>=48&&span$1char$p_operator_derefference(info->p)<=57||span$1char$p_operator_derefference(info->p)>=97&&span$1char$p_operator_derefference(info->p)<=102||span$1char$p_operator_derefference(info->p)>=65&&span$1char$p_operator_derefference(info->p)<=70) {
                        buffer_append_char(value,span$1char$p_operator_derefference(info->p));
                        info->p->p++;
                    }
                }
                else if(span$1char$p_operator_derefference(info->p)==123) {
                    info->p->p++;
                    __right_value0 = (void*)0;
                    exp=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "10str.nc", 1189, 1312);
                    list$1sNode$ph_add(exps,(struct sNode*)come_increment_ref_count(exp, "10str.nc", 1191, 1313));
                    if(span$1char$p_operator_derefference(info->p)==125) {
                        info->p->p++;
                    }
                    buffer_append_str(value,"%s");
                    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0, "10str.nc", 1252, 1314):(void*)0);
                }
                else {
                    switch (                    span$1char$p_operator_derefference(info->p)) {
                        case 48:
                        buffer_append_char(value,span$1char$p_operator_derefference(info->p));
                        info->p->p++;
                        break;
                        case 110:
                        buffer_append_char(value,span$1char$p_operator_derefference(info->p));
                        info->p->p++;
                        break;
                        case 116:
                        buffer_append_char(value,span$1char$p_operator_derefference(info->p));
                        info->p->p++;
                        break;
                        case 114:
                        buffer_append_char(value,span$1char$p_operator_derefference(info->p));
                        info->p->p++;
                        break;
                        case 118:
                        buffer_append_char(value,span$1char$p_operator_derefference(info->p));
                        info->p->p++;
                        break;
                        case 102:
                        buffer_append_char(value,span$1char$p_operator_derefference(info->p));
                        info->p->p++;
                        break;
                        case 97:
                        buffer_append_char(value,span$1char$p_operator_derefference(info->p));
                        info->p->p++;
                        break;
                        case 98:
                        buffer_append_char(value,span$1char$p_operator_derefference(info->p));
                        info->p->p++;
                        break;
                        case 92:
                        buffer_append_char(value,span$1char$p_operator_derefference(info->p));
                        info->p->p++;
                        break;
                        default:
                        buffer_append_char(value,span$1char$p_operator_derefference(info->p));
                        info->p->p++;
                        break;
                    }
                }
            }
            else if(span$1char$p_operator_derefference(info->p)==0) {
                sline2=info->sline;
                info->sline=sline;
                err_msg(info,"close \" to make embbeded string value");
                exit(2);
            }
            else {
                if(span$1char$p_operator_derefference(info->p)==10) {
                    buffer_append_char(value,92);
                    buffer_append_char(value,110);
                    info->p->p++;
                    info->sline++;
                    head_of_last_line=info->p->p;
                }
                else {
                    buffer_append_char(value,span$1char$p_operator_derefference(info->p));
                    info->p->p++;
                }
            }
        }
        skip_spaces_and_lf(info);
        info->sline_real=sline_real;
                __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "10str.nc", 1278, 1319, "struct sNode");
        _inf_obj_value1=(struct sSStringNode*)come_increment_ref_count(((struct sSStringNode*)(__right_value2=sSStringNode_initialize((struct sSStringNode* )come_increment_ref_count((struct sSStringNode *)come_calloc(1, sizeof(struct sSStringNode )*(1), "10str.nc", 1278, 1315, "struct sSStringNode* "), "10str.nc", 1278, 1316),(char* )come_increment_ref_count(buffer_to_string(value), "10str.nc", 1278, 1317),(struct list$1sNode$ph*)come_increment_ref_count(exps, "10str.nc", 1278, 1318),sline,info))), "10str.nc", 1278, 1320);
        _inf_value1->_protocol_obj=_inf_obj_value1;
        _inf_value1->finalize=(void*)sSStringNode_finalize;
        _inf_value1->clone=(void*)sSStringNode_clone;
        _inf_value1->compile=(void*)sSStringNode_compile;
        _inf_value1->sline=(void*)sNodeBase_sline;
        _inf_value1->sline_real=(void*)sNodeBase_sline_real;
        _inf_value1->sname=(void*)sNodeBase_sname;
        _inf_value1->terminated=(void*)sNodeBase_terminated;
        _inf_value1->kind=(void*)sSStringNode_kind;
        _inf_value1->left_value=(void*)sNodeBase_left_value;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value3=_inf_value1)), "10str.nc", 1278, 1332);
        come_call_finalizer(list$1sNode$ph$p_finalize, exps, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 1278, 1333);
        come_call_finalizer(buffer_finalize, value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 1278, 1334);
        come_call_finalizer(sSStringNode_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0, "10str.nc}", 1278, 1335);
        ((__right_value3) ? __right_value3 = come_decrement_ref_count(__right_value3, ((struct sNode*)__right_value3)->finalize, ((struct sNode*)__right_value3)->_protocol_obj, 1, 0,(void*)0, "10str.nc", 1278, 1336):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "10str.nc", 1278, 1337):(void*)0);
        return __result_obj__0;
        come_call_finalizer(list$1sNode$ph$p_finalize, exps, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 2627, 1338);
        come_call_finalizer(buffer_finalize, value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 2627, 1339);
    }
    else if(span$1char$p_operator_derefference(info->p)==117&&*(info->p->p+1)==56&&*(info->p->p+2)==34) {
        sline_real_45=info->sline_real;
        info->sline_real=info->sline;
        info->p->p+=3;
        sline_46=info->sline;
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        value_47=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "10str.nc", 1289, 1340, "struct buffer* "), "10str.nc", 1289, 1341)), "10str.nc", 1289, 1342);
        while(1) {
            if(span$1char$p_operator_derefference(info->p)==34) {
                info->p->p++;
                p=info->p->p;
                sline_48=info->sline;
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                if(span$1char$p_operator_derefference(info->p)==117&&*(info->p->p+1)==56&&*(info->p->p+2)==34) {
                    info->p->p+=3;
                }
                else {
                    info->p->p=p;
                    info->sline=sline_48;
                    break;
                }
            }
            else if(span$1char$p_operator_derefference(info->p)==92) {
                buffer_append_char(value_47,92);
                info->p->p++;
                if(span$1char$p_operator_derefference(info->p)==34) {
                    buffer_append_char(value_47,34);
                    info->p->p++;
                }
                else {
                    buffer_append_char(value_47,span$1char$p_operator_derefference(info->p));
                    info->p->p++;
                }
            }
            else if(span$1char$p_operator_derefference(info->p)==0) {
                sline2_49=info->sline;
                info->sline=sline_46;
                err_msg(info,"close \" to make c string value");
                info->sline=sline2_49;
                exit(2);
            }
            else {
                if(span$1char$p_operator_derefference(info->p)==10) {
                    info->sline++;
                }
                buffer_append_char(value_47,span$1char$p_operator_derefference(info->p));
                info->p->p++;
            }
        }
        skip_spaces_and_lf(info);
        info->sline_real=sline_real_45;
                __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        __right_value3 = (void*)0;
        _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "10str.nc", 1342, 1347, "struct sNode");
        _inf_obj_value2=(struct sPrefixedStringNode*)come_increment_ref_count(((struct sPrefixedStringNode*)(__right_value3=sPrefixedStringNode_initialize((struct sPrefixedStringNode* )come_increment_ref_count((struct sPrefixedStringNode *)come_calloc(1, sizeof(struct sPrefixedStringNode )*(1), "10str.nc", 1342, 1343, "struct sPrefixedStringNode* "), "10str.nc", 1342, 1344),(char* )come_increment_ref_count(buffer_to_string(value_47), "10str.nc", 1342, 1345),(char* )come_increment_ref_count(xsprintf("u8"), "10str.nc", 1342, 1346),sline_46,info))), "10str.nc", 1342, 1348);
        _inf_value2->_protocol_obj=_inf_obj_value2;
        _inf_value2->finalize=(void*)sPrefixedStringNode_finalize;
        _inf_value2->clone=(void*)sPrefixedStringNode_clone;
        _inf_value2->compile=(void*)sPrefixedStringNode_compile;
        _inf_value2->sline=(void*)sNodeBase_sline;
        _inf_value2->sline_real=(void*)sNodeBase_sline_real;
        _inf_value2->sname=(void*)sNodeBase_sname;
        _inf_value2->terminated=(void*)sNodeBase_terminated;
        _inf_value2->kind=(void*)sPrefixedStringNode_kind;
        _inf_value2->left_value=(void*)sNodeBase_left_value;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value4=_inf_value2)), "10str.nc", 1342, 1361);
        come_call_finalizer(buffer_finalize, value_47, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 1342, 1362);
        come_call_finalizer(sPrefixedStringNode_finalize, __right_value3, (void*)0, (void*)0, 0, 1, 0, (void*)0, "10str.nc}", 1342, 1363);
        ((__right_value4) ? __right_value4 = come_decrement_ref_count(__right_value4, ((struct sNode*)__right_value4)->finalize, ((struct sNode*)__right_value4)->_protocol_obj, 1, 0,(void*)0, "10str.nc", 1342, 1364):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "10str.nc", 1342, 1365):(void*)0);
        return __result_obj__0;
        come_call_finalizer(buffer_finalize, value_47, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 2627, 1366);
    }
    else if((span$1char$p_operator_derefference(info->p)==117||span$1char$p_operator_derefference(info->p)==85)&&*(info->p->p+1)==34) {
        sline_real_50=info->sline_real;
        info->sline_real=info->sline;
        prefix=span$1char$p_operator_derefference(info->p);
        info->p->p+=2;
        sline_51=info->sline;
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        value_52=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "10str.nc", 1354, 1367, "struct buffer* "), "10str.nc", 1354, 1368)), "10str.nc", 1354, 1369);
        while(1) {
            if(span$1char$p_operator_derefference(info->p)==34) {
                info->p->p++;
                p_53=info->p->p;
                sline_54=info->sline;
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                if(span$1char$p_operator_derefference(info->p)==prefix&&*(info->p->p+1)==34) {
                    info->p->p+=2;
                }
                else {
                    info->p->p=p_53;
                    info->sline=sline_54;
                    break;
                }
            }
            else if(span$1char$p_operator_derefference(info->p)==92) {
                buffer_append_char(value_52,92);
                info->p->p++;
                if(span$1char$p_operator_derefference(info->p)==34) {
                    buffer_append_char(value_52,34);
                    info->p->p++;
                }
                else {
                    buffer_append_char(value_52,span$1char$p_operator_derefference(info->p));
                    info->p->p++;
                }
            }
            else if(span$1char$p_operator_derefference(info->p)==0) {
                sline2_55=info->sline;
                info->sline=sline_51;
                err_msg(info,"close \" to make c string value");
                info->sline=sline2_55;
                exit(2);
            }
            else {
                if(span$1char$p_operator_derefference(info->p)==10) {
                    info->sline++;
                }
                buffer_append_char(value_52,span$1char$p_operator_derefference(info->p));
                info->p->p++;
            }
        }
        skip_spaces_and_lf(info);
        info->sline_real=sline_real_50;
                __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        __right_value3 = (void*)0;
        _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "10str.nc", 1407, 1374, "struct sNode");
        _inf_obj_value3=(struct sPrefixedStringNode*)come_increment_ref_count(((struct sPrefixedStringNode*)(__right_value3=sPrefixedStringNode_initialize((struct sPrefixedStringNode* )come_increment_ref_count((struct sPrefixedStringNode *)come_calloc(1, sizeof(struct sPrefixedStringNode )*(1), "10str.nc", 1407, 1370, "struct sPrefixedStringNode* "), "10str.nc", 1407, 1371),(char* )come_increment_ref_count(buffer_to_string(value_52), "10str.nc", 1407, 1372),(char* )come_increment_ref_count(xsprintf("%c",prefix), "10str.nc", 1407, 1373),sline_51,info))), "10str.nc", 1407, 1375);
        _inf_value3->_protocol_obj=_inf_obj_value3;
        _inf_value3->finalize=(void*)sPrefixedStringNode_finalize;
        _inf_value3->clone=(void*)sPrefixedStringNode_clone;
        _inf_value3->compile=(void*)sPrefixedStringNode_compile;
        _inf_value3->sline=(void*)sNodeBase_sline;
        _inf_value3->sline_real=(void*)sNodeBase_sline_real;
        _inf_value3->sname=(void*)sNodeBase_sname;
        _inf_value3->terminated=(void*)sNodeBase_terminated;
        _inf_value3->kind=(void*)sPrefixedStringNode_kind;
        _inf_value3->left_value=(void*)sNodeBase_left_value;
        __right_value4 = (void*)0;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value4=_inf_value3)), "10str.nc", 1407, 1376);
        come_call_finalizer(buffer_finalize, value_52, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 1407, 1377);
        come_call_finalizer(sPrefixedStringNode_finalize, __right_value3, (void*)0, (void*)0, 0, 1, 0, (void*)0, "10str.nc}", 1407, 1378);
        ((__right_value4) ? __right_value4 = come_decrement_ref_count(__right_value4, ((struct sNode*)__right_value4)->finalize, ((struct sNode*)__right_value4)->_protocol_obj, 1, 0,(void*)0, "10str.nc", 1407, 1379):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "10str.nc", 1407, 1380):(void*)0);
        return __result_obj__0;
        come_call_finalizer(buffer_finalize, value_52, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 2627, 1381);
    }
    else if(span$1char$p_operator_derefference(info->p)==34) {
        sline_real_56=info->sline_real;
        info->sline_real=info->sline;
        info->p->p++;
        sline_57=info->sline;
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        value_58=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "10str.nc", 1417, 1382, "struct buffer* "), "10str.nc", 1417, 1383)), "10str.nc", 1417, 1384);
        while(1) {
            if(span$1char$p_operator_derefference(info->p)==34) {
                info->p->p++;
                p_59=info->p->p;
                sline_60=info->sline;
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                if(span$1char$p_operator_derefference(info->p)==34) {
                    info->p->p++;
                }
                else {
                    info->p->p=p_59;
                    info->sline=sline_60;
                    break;
                }
            }
            else if(span$1char$p_operator_derefference(info->p)==92) {
                buffer_append_char(value_58,92);
                info->p->p++;
                if(span$1char$p_operator_derefference(info->p)==34) {
                    buffer_append_char(value_58,34);
                    info->p->p++;
                }
                else {
                    buffer_append_char(value_58,span$1char$p_operator_derefference(info->p));
                    info->p->p++;
                }
            }
            else if(span$1char$p_operator_derefference(info->p)==0) {
                sline2_61=info->sline;
                info->sline=sline_57;
                err_msg(info,"close \" to make c string value");
                info->sline=sline2_61;
                exit(2);
            }
            else {
                if(span$1char$p_operator_derefference(info->p)==10) {
                    info->sline++;
                }
                buffer_append_char(value_58,span$1char$p_operator_derefference(info->p));
                info->p->p++;
            }
        }
        skip_spaces_and_lf(info);
        info->sline_real=sline_real_56;
                __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "10str.nc", 1470, 1388, "struct sNode");
        _inf_obj_value4=(struct sStrNode*)come_increment_ref_count(((struct sStrNode*)(__right_value2=sStrNode_initialize((struct sStrNode* )come_increment_ref_count((struct sStrNode *)come_calloc(1, sizeof(struct sStrNode )*(1), "10str.nc", 1470, 1385, "struct sStrNode* "), "10str.nc", 1470, 1386),(char* )come_increment_ref_count(buffer_to_string(value_58), "10str.nc", 1470, 1387),sline_57,info))), "10str.nc", 1470, 1389);
        _inf_value4->_protocol_obj=_inf_obj_value4;
        _inf_value4->finalize=(void*)sStrNode_finalize;
        _inf_value4->clone=(void*)sStrNode_clone;
        _inf_value4->compile=(void*)sStrNode_compile;
        _inf_value4->sline=(void*)sNodeBase_sline;
        _inf_value4->sline_real=(void*)sNodeBase_sline_real;
        _inf_value4->sname=(void*)sNodeBase_sname;
        _inf_value4->terminated=(void*)sNodeBase_terminated;
        _inf_value4->kind=(void*)sStrNode_kind;
        _inf_value4->left_value=(void*)sNodeBase_left_value;
        __right_value3 = (void*)0;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value3=_inf_value4)), "10str.nc", 1470, 1399);
        come_call_finalizer(buffer_finalize, value_58, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 1470, 1400);
        come_call_finalizer(sStrNode_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0, "10str.nc}", 1470, 1401);
        ((__right_value3) ? __right_value3 = come_decrement_ref_count(__right_value3, ((struct sNode*)__right_value3)->finalize, ((struct sNode*)__right_value3)->_protocol_obj, 1, 0,(void*)0, "10str.nc", 1470, 1402):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "10str.nc", 1470, 1403):(void*)0);
        return __result_obj__0;
        come_call_finalizer(buffer_finalize, value_58, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 2627, 1404);
    }
    else if((span$1char$p_operator_derefference(info->p)==98||span$1char$p_operator_derefference(info->p)==66)&&*(info->p->p+1)==34) {
        sline_real_62=info->sline_real;
        info->sline_real=info->sline;
        info->p->p+=2;
        sline_63=info->sline;
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        value_64=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "10str.nc", 1480, 1405, "struct buffer* "), "10str.nc", 1480, 1406)), "10str.nc", 1480, 1407);
        size=0;
        while(1) {
            if(span$1char$p_operator_derefference(info->p)==34) {
                info->p->p++;
                p_65=info->p->p;
                sline_66=info->sline;
                skip_spaces_and_lf(info);
                if(span$1char$p_operator_derefference(info->p)==34) {
                    info->p->p++;
                }
                else {
                    info->p->p=p_65;
                    info->sline=sline_66;
                    break;
                }
            }
            else if(span$1char$p_operator_derefference(info->p)==92) {
                buffer_append_char(value_64,92);
                info->p->p++;
                if(xisdigit(span$1char$p_operator_derefference(info->p))) {
                    len_67=0;
                    while(xisdigit(span$1char$p_operator_derefference(info->p))&&len_67<3) {
                        buffer_append_char(value_64,span$1char$p_operator_derefference(info->p));
                        info->p->p++;
                        len_67++;
                    }
                    size++;
                }
                else if(span$1char$p_operator_derefference(info->p)==120||span$1char$p_operator_derefference(info->p)==88) {
                    buffer_append_char(value_64,span$1char$p_operator_derefference(info->p));
                    info->p->p++;
                    while(span$1char$p_operator_derefference(info->p)>=48&&span$1char$p_operator_derefference(info->p)<=57||span$1char$p_operator_derefference(info->p)>=97&&span$1char$p_operator_derefference(info->p)<=102||span$1char$p_operator_derefference(info->p)>=65&&span$1char$p_operator_derefference(info->p)<=70) {
                        buffer_append_char(value_64,span$1char$p_operator_derefference(info->p));
                        info->p->p++;
                    }
                    size++;
                }
                else {
                    switch (                    span$1char$p_operator_derefference(info->p)) {
                        case 48:
                        buffer_append_char(value_64,span$1char$p_operator_derefference(info->p));
                        info->p->p++;
                        size++;
                        break;
                        case 110:
                        buffer_append_char(value_64,span$1char$p_operator_derefference(info->p));
                        info->p->p++;
                        size++;
                        break;
                        case 116:
                        buffer_append_char(value_64,span$1char$p_operator_derefference(info->p));
                        info->p->p++;
                        size++;
                        break;
                        case 114:
                        buffer_append_char(value_64,span$1char$p_operator_derefference(info->p));
                        info->p->p++;
                        size++;
                        break;
                        case 118:
                        buffer_append_char(value_64,span$1char$p_operator_derefference(info->p));
                        info->p->p++;
                        size++;
                        break;
                        case 102:
                        buffer_append_char(value_64,span$1char$p_operator_derefference(info->p));
                        info->p->p++;
                        size++;
                        break;
                        case 97:
                        buffer_append_char(value_64,span$1char$p_operator_derefference(info->p));
                        info->p->p++;
                        size++;
                        break;
                        case 98:
                        buffer_append_char(value_64,span$1char$p_operator_derefference(info->p));
                        info->p->p++;
                        size++;
                        break;
                        case 92:
                        buffer_append_char(value_64,span$1char$p_operator_derefference(info->p));
                        info->p->p++;
                        size++;
                        break;
                        default:
                        buffer_append_char(value_64,span$1char$p_operator_derefference(info->p));
                        info->p->p++;
                        size++;
                        break;
                    }
                }
            }
            else if(span$1char$p_operator_derefference(info->p)==0) {
                sline2_68=info->sline;
                info->sline=sline_63;
                err_msg(info,"close \" to make embbeded string value");
                exit(2);
            }
            else {
                if(span$1char$p_operator_derefference(info->p)==10) {
                    info->sline++;
                }
                buffer_append_char(value_64,span$1char$p_operator_derefference(info->p));
                info->p->p++;
                size++;
            }
        }
        skip_spaces_and_lf(info);
        info->sline_real=sline_real_62;
                __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "10str.nc", 1607, 1411, "struct sNode");
        _inf_obj_value5=(struct sBufferNode*)come_increment_ref_count(((struct sBufferNode*)(__right_value1=sBufferNode_initialize((struct sBufferNode* )come_increment_ref_count((struct sBufferNode *)come_calloc(1, sizeof(struct sBufferNode )*(1), "10str.nc", 1607, 1408, "struct sBufferNode* "), "10str.nc", 1607, 1409),(struct buffer* )come_increment_ref_count(value_64, "10str.nc", 1607, 1410),size,info))), "10str.nc", 1607, 1412);
        _inf_value5->_protocol_obj=_inf_obj_value5;
        _inf_value5->finalize=(void*)sBufferNode_finalize;
        _inf_value5->clone=(void*)sBufferNode_clone;
        _inf_value5->compile=(void*)sBufferNode_compile;
        _inf_value5->sline=(void*)sNodeBase_sline;
        _inf_value5->sline_real=(void*)sNodeBase_sline_real;
        _inf_value5->sname=(void*)sNodeBase_sname;
        _inf_value5->terminated=(void*)sNodeBase_terminated;
        _inf_value5->kind=(void*)sBufferNode_kind;
        _inf_value5->left_value=(void*)sNodeBase_left_value;
        __right_value2 = (void*)0;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value5)), "10str.nc", 1607, 1421);
        come_call_finalizer(buffer_finalize, value_64, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 1607, 1422);
        come_call_finalizer(sBufferNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "10str.nc}", 1607, 1423);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "10str.nc", 1607, 1424):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "10str.nc", 1607, 1425):(void*)0);
        return __result_obj__0;
        come_call_finalizer(buffer_finalize, value_64, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 2627, 1426);
    }
    else if(span$1char$p_operator_derefference(info->p)==47&&*(info->p->p-1)!=42&&*(info->p->p+1)!=42) {
        sline_real_69=info->sline_real;
        info->sline_real=info->sline;
        info->p->p++;
        sline_70=info->sline;
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "10str.nc", 1616, 1427, "struct buffer* "), "10str.nc", 1616, 1428)), "10str.nc", 1616, 1429);
        while((_Bool)1) {
            if(span$1char$p_operator_derefference(info->p)==92&&*(info->p->p+1)==47) {
                info->p->p++;
                buffer_append_char(buf,span$1char$p_operator_derefference(info->p));
                info->p->p++;
            }
            else if(span$1char$p_operator_derefference(info->p)==47) {
                info->p->p++;
                break;
            }
            else if(span$1char$p_operator_derefference(info->p)==0) {
                err_msg(info,"require closing / for regex");
                exit(5);
            }
            else {
                buffer_append_char(buf,span$1char$p_operator_derefference(info->p));
                info->p->p++;
            }
        }
        global=(_Bool)0;
        ignore_case=(_Bool)0;
        while(span$1char$p_operator_derefference(info->p)==103||span$1char$p_operator_derefference(info->p)==105) {
            if(span$1char$p_operator_derefference(info->p)==103) {
                info->p->p++;
                global=(_Bool)1;
            }
            else if(span$1char$p_operator_derefference(info->p)==105) {
                info->p->p++;
                ignore_case=(_Bool)1;
            }
            else {
                break;
            }
        }
        skip_spaces_and_lf(info);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "10str.nc", 1655, 1433, "struct sNode");
        _inf_obj_value6=(struct sStrNode*)come_increment_ref_count(((struct sStrNode*)(__right_value2=sStrNode_initialize((struct sStrNode* )come_increment_ref_count((struct sStrNode *)come_calloc(1, sizeof(struct sStrNode )*(1), "10str.nc", 1655, 1430, "struct sStrNode* "), "10str.nc", 1655, 1431),(char* )come_increment_ref_count(buffer_to_string(buf), "10str.nc", 1655, 1432),sline_70,info))), "10str.nc", 1655, 1434);
        _inf_value6->_protocol_obj=_inf_obj_value6;
        _inf_value6->finalize=(void*)sStrNode_finalize;
        _inf_value6->clone=(void*)sStrNode_clone;
        _inf_value6->compile=(void*)sStrNode_compile;
        _inf_value6->sline=(void*)sNodeBase_sline;
        _inf_value6->sline_real=(void*)sNodeBase_sline_real;
        _inf_value6->sname=(void*)sNodeBase_sname;
        _inf_value6->terminated=(void*)sNodeBase_terminated;
        _inf_value6->kind=(void*)sStrNode_kind;
        _inf_value6->left_value=(void*)sNodeBase_left_value;
        __right_value3 = (void*)0;
        obj=(struct sNode*)come_increment_ref_count(_inf_value6, "10str.nc", 1655, 1435);
        come_call_finalizer(sStrNode_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0, "10str.nc}", 1655, 1436);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "10str.nc", 1657, 1437, "struct list$1tuple2$2char$phsNode$ph$ph*"), "10str.nc", 1657, 1438)), "10str.nc", 1657, 1439);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        list$1tuple2$2char$phsNode$ph$ph_add(params,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "10str.nc", 1659, 1440, "struct tuple2$2char$phsNode$ph"), "10str.nc", 1659, 1441),(char*)come_increment_ref_count(xsprintf("self"), "10str.nc", 1659, 1442),(struct sNode*)come_increment_ref_count(obj, "10str.nc", 1659, 1443)), "10str.nc", 1659, 1444));
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        __right_value3 = (void*)0;
        __right_value4 = (void*)0;
        list$1tuple2$2char$phsNode$ph$ph_add(params,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "10str.nc", 1660, 1447, "struct tuple2$2char$phsNode$ph"), "10str.nc", 1660, 1448),(char*)come_increment_ref_count(xsprintf("ignore_case"), "10str.nc", 1660, 1449),(struct sNode*)come_increment_ref_count(((ignore_case)?(((struct sNode*)(__right_value2=create_int_node((char* )come_increment_ref_count(int_to_string(1), "10str.nc", 1660, 1445),info)))):(((struct sNode*)(__right_value4=create_int_node((char* )come_increment_ref_count(int_to_string(0), "10str.nc", 1660, 1446),info))))), "10str.nc", 1660, 1450)), "10str.nc", 1660, 1451));
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "10str.nc", 1660, 1452):(void*)0);
        ((__right_value4) ? __right_value4 = come_decrement_ref_count(__right_value4, ((struct sNode*)__right_value4)->finalize, ((struct sNode*)__right_value4)->_protocol_obj, 1, 0,(void*)0, "10str.nc", 1660, 1453):(void*)0);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        __right_value3 = (void*)0;
        __right_value4 = (void*)0;
        list$1tuple2$2char$phsNode$ph$ph_add(params,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "10str.nc", 1661, 1455, "struct tuple2$2char$phsNode$ph"), "10str.nc", 1661, 1456),(char*)come_increment_ref_count(xsprintf("multiline"), "10str.nc", 1661, 1457),(struct sNode*)come_increment_ref_count(create_int_node((char* )come_increment_ref_count(int_to_string(0), "10str.nc", 1661, 1454),info), "10str.nc", 1661, 1458)), "10str.nc", 1661, 1459));
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        __right_value3 = (void*)0;
        __right_value4 = (void*)0;
        __right_value5 = (void*)0;
        __right_value6 = (void*)0;
        list$1tuple2$2char$phsNode$ph$ph_add(params,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "10str.nc", 1662, 1462, "struct tuple2$2char$phsNode$ph"), "10str.nc", 1662, 1463),(char*)come_increment_ref_count(xsprintf("global"), "10str.nc", 1662, 1464),(struct sNode*)come_increment_ref_count(((global)?(((struct sNode*)(__right_value2=create_int_node((char* )come_increment_ref_count(int_to_string(1), "10str.nc", 1662, 1460),info)))):(((struct sNode*)(__right_value4=create_int_node((char* )come_increment_ref_count(int_to_string(0), "10str.nc", 1662, 1461),info))))), "10str.nc", 1662, 1465)), "10str.nc", 1662, 1466));
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "10str.nc", 1662, 1467):(void*)0);
        ((__right_value4) ? __right_value4 = come_decrement_ref_count(__right_value4, ((struct sNode*)__right_value4)->finalize, ((struct sNode*)__right_value4)->_protocol_obj, 1, 0,(void*)0, "10str.nc", 1662, 1468):(void*)0);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        __right_value3 = (void*)0;
        __right_value4 = (void*)0;
        list$1tuple2$2char$phsNode$ph$ph_add(params,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "10str.nc", 1663, 1470, "struct tuple2$2char$phsNode$ph"), "10str.nc", 1663, 1471),(char*)come_increment_ref_count(xsprintf("extended"), "10str.nc", 1663, 1472),(struct sNode*)come_increment_ref_count(create_int_node((char* )come_increment_ref_count(int_to_string(0), "10str.nc", 1663, 1469),info), "10str.nc", 1663, 1473)), "10str.nc", 1663, 1474));
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        __right_value3 = (void*)0;
        __right_value4 = (void*)0;
        list$1tuple2$2char$phsNode$ph$ph_add(params,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "10str.nc", 1664, 1476, "struct tuple2$2char$phsNode$ph"), "10str.nc", 1664, 1477),(char*)come_increment_ref_count(xsprintf("dotall"), "10str.nc", 1664, 1478),(struct sNode*)come_increment_ref_count(create_int_node((char* )come_increment_ref_count(int_to_string(0), "10str.nc", 1664, 1475),info), "10str.nc", 1664, 1479)), "10str.nc", 1664, 1480));
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        __right_value3 = (void*)0;
        __right_value4 = (void*)0;
        list$1tuple2$2char$phsNode$ph$ph_add(params,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "10str.nc", 1665, 1482, "struct tuple2$2char$phsNode$ph"), "10str.nc", 1665, 1483),(char*)come_increment_ref_count(xsprintf("anchored"), "10str.nc", 1665, 1484),(struct sNode*)come_increment_ref_count(create_int_node((char* )come_increment_ref_count(int_to_string(0), "10str.nc", 1665, 1481),info), "10str.nc", 1665, 1485)), "10str.nc", 1665, 1486));
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        __right_value3 = (void*)0;
        __right_value4 = (void*)0;
        list$1tuple2$2char$phsNode$ph$ph_add(params,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "10str.nc", 1666, 1488, "struct tuple2$2char$phsNode$ph"), "10str.nc", 1666, 1489),(char*)come_increment_ref_count(xsprintf("dollar_endonly"), "10str.nc", 1666, 1490),(struct sNode*)come_increment_ref_count(create_int_node((char* )come_increment_ref_count(int_to_string(0), "10str.nc", 1666, 1487),info), "10str.nc", 1666, 1491)), "10str.nc", 1666, 1492));
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        __right_value3 = (void*)0;
        __right_value4 = (void*)0;
        list$1tuple2$2char$phsNode$ph$ph_add(params,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "10str.nc", 1667, 1494, "struct tuple2$2char$phsNode$ph"), "10str.nc", 1667, 1495),(char*)come_increment_ref_count(xsprintf("ungreedy"), "10str.nc", 1667, 1496),(struct sNode*)come_increment_ref_count(create_int_node((char* )come_increment_ref_count(int_to_string(0), "10str.nc", 1667, 1493),info), "10str.nc", 1667, 1497)), "10str.nc", 1667, 1498));
        method_block=((void*)0);
        method_block_sline=info->sline;
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        method_generics_types=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "10str.nc", 1673, 1499, "struct list$1sType$ph*"), "10str.nc", 1673, 1500)), "10str.nc", 1673, 1501);
        __right_value0 = (void*)0;
        node=(struct sNode*)come_increment_ref_count(create_method_call("to_regex",(struct sNode*)come_increment_ref_count(obj, "10str.nc", 1675, 1502),params,method_block,method_block_sline,method_generics_types,info,(_Bool)0), "10str.nc", 1675, 1503);
        info->sline_real=sline_real_69;
                __result_obj__0 = (struct sNode*)come_increment_ref_count(node, "10str.nc", 1678, 1504);
        come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 1678, 1505);
        ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0,(void*)0, "10str.nc", 1678, 1506):(void*)0);
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 1678, 1507);
        come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 1678, 1508);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1,(void*)0, "10str.nc", 1678, 1509):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "10str.nc", 1678, 1510):(void*)0);
        return __result_obj__0;
        come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 2627, 1511);
        ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0,(void*)0, "10str.nc", 2627, 1512):(void*)0);
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 2627, 1513);
        come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 2627, 1514);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "10str.nc", 2627, 1515):(void*)0);
    }
    else if((span$1char$p_operator_derefference(info->p)==82||span$1char$p_operator_derefference(info->p)==114)&&*(info->p->p+1)==34) {
        sline_real_71=info->sline_real;
        info->sline_real=info->sline;
        info->p->p+=2;
        sline_72=info->sline;
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        value_73=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "10str.nc", 1687, 1516, "struct buffer* "), "10str.nc", 1687, 1517)), "10str.nc", 1687, 1518);
        while(1) {
            if(span$1char$p_operator_derefference(info->p)==34) {
                info->p->p++;
                p_74=info->p->p;
                sline_75=info->sline;
                skip_spaces_and_lf(info);
                if(span$1char$p_operator_derefference(info->p)==34) {
                    info->p->p++;
                }
                else {
                    info->p->p=p_74;
                    info->sline=sline_75;
                    break;
                }
            }
            else if(span$1char$p_operator_derefference(info->p)==92) {
                buffer_append_char(value_73,92);
                info->p->p++;
                if(xisdigit(span$1char$p_operator_derefference(info->p))) {
                    len_76=0;
                    while(xisdigit(span$1char$p_operator_derefference(info->p))&&len_76<3) {
                        buffer_append_char(value_73,span$1char$p_operator_derefference(info->p));
                        info->p->p++;
                        len_76++;
                    }
                }
                else if(span$1char$p_operator_derefference(info->p)==120||span$1char$p_operator_derefference(info->p)==88) {
                    buffer_append_char(value_73,span$1char$p_operator_derefference(info->p));
                    info->p->p++;
                    while(span$1char$p_operator_derefference(info->p)>=48&&span$1char$p_operator_derefference(info->p)<=57||span$1char$p_operator_derefference(info->p)>=97&&span$1char$p_operator_derefference(info->p)<=102||span$1char$p_operator_derefference(info->p)>=65&&span$1char$p_operator_derefference(info->p)<=70) {
                        buffer_append_char(value_73,span$1char$p_operator_derefference(info->p));
                        info->p->p++;
                    }
                }
                else {
                    switch (                    span$1char$p_operator_derefference(info->p)) {
                        case 48:
                        buffer_append_char(value_73,span$1char$p_operator_derefference(info->p));
                        info->p->p++;
                        break;
                        case 110:
                        buffer_append_char(value_73,span$1char$p_operator_derefference(info->p));
                        info->p->p++;
                        break;
                        case 116:
                        buffer_append_char(value_73,span$1char$p_operator_derefference(info->p));
                        info->p->p++;
                        break;
                        case 114:
                        buffer_append_char(value_73,span$1char$p_operator_derefference(info->p));
                        info->p->p++;
                        break;
                        case 118:
                        buffer_append_char(value_73,span$1char$p_operator_derefference(info->p));
                        info->p->p++;
                        break;
                        case 102:
                        buffer_append_char(value_73,span$1char$p_operator_derefference(info->p));
                        info->p->p++;
                        break;
                        case 97:
                        buffer_append_char(value_73,span$1char$p_operator_derefference(info->p));
                        info->p->p++;
                        break;
                        case 98:
                        buffer_append_char(value_73,span$1char$p_operator_derefference(info->p));
                        info->p->p++;
                        break;
                        case 92:
                        buffer_append_char(value_73,span$1char$p_operator_derefference(info->p));
                        info->p->p++;
                        break;
                        default:
                        buffer_append_char(value_73,span$1char$p_operator_derefference(info->p));
                        info->p->p++;
                        break;
                    }
                }
            }
            else if(span$1char$p_operator_derefference(info->p)==0) {
                sline2_77=info->sline;
                info->sline=sline_72;
                err_msg(info,"close \" to make embbeded string value");
                exit(2);
            }
            else {
                if(span$1char$p_operator_derefference(info->p)==10) {
                    info->sline++;
                }
                buffer_append_char(value_73,span$1char$p_operator_derefference(info->p));
                info->p->p++;
            }
        }
        global_78=(_Bool)0;
        ignore_case_79=(_Bool)0;
        while(span$1char$p_operator_derefference(info->p)==103||span$1char$p_operator_derefference(info->p)==105) {
            if(span$1char$p_operator_derefference(info->p)==103) {
                info->p->p++;
                global_78=(_Bool)1;
            }
            else if(span$1char$p_operator_derefference(info->p)==105) {
                info->p->p++;
                ignore_case_79=(_Bool)1;
            }
            else {
                break;
            }
        }
        skip_spaces_and_lf(info);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "10str.nc", 1813, 1522, "struct sNode");
        _inf_obj_value7=(struct sStrNode*)come_increment_ref_count(((struct sStrNode*)(__right_value2=sStrNode_initialize((struct sStrNode* )come_increment_ref_count((struct sStrNode *)come_calloc(1, sizeof(struct sStrNode )*(1), "10str.nc", 1813, 1519, "struct sStrNode* "), "10str.nc", 1813, 1520),(char* )come_increment_ref_count(buffer_to_string(value_73), "10str.nc", 1813, 1521),sline_72,info))), "10str.nc", 1813, 1523);
        _inf_value7->_protocol_obj=_inf_obj_value7;
        _inf_value7->finalize=(void*)sStrNode_finalize;
        _inf_value7->clone=(void*)sStrNode_clone;
        _inf_value7->compile=(void*)sStrNode_compile;
        _inf_value7->sline=(void*)sNodeBase_sline;
        _inf_value7->sline_real=(void*)sNodeBase_sline_real;
        _inf_value7->sname=(void*)sNodeBase_sname;
        _inf_value7->terminated=(void*)sNodeBase_terminated;
        _inf_value7->kind=(void*)sStrNode_kind;
        _inf_value7->left_value=(void*)sNodeBase_left_value;
        __right_value3 = (void*)0;
        obj_80=(struct sNode*)come_increment_ref_count(_inf_value7, "10str.nc", 1813, 1524);
        come_call_finalizer(sStrNode_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0, "10str.nc}", 1813, 1525);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        params_81=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "10str.nc", 1815, 1526, "struct list$1tuple2$2char$phsNode$ph$ph*"), "10str.nc", 1815, 1527)), "10str.nc", 1815, 1528);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        list$1tuple2$2char$phsNode$ph$ph_add(params_81,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "10str.nc", 1817, 1529, "struct tuple2$2char$phsNode$ph"), "10str.nc", 1817, 1530),(char*)come_increment_ref_count(xsprintf("self"), "10str.nc", 1817, 1531),(struct sNode*)come_increment_ref_count(obj_80, "10str.nc", 1817, 1532)), "10str.nc", 1817, 1533));
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        __right_value3 = (void*)0;
        __right_value4 = (void*)0;
        __right_value5 = (void*)0;
        __right_value6 = (void*)0;
        list$1tuple2$2char$phsNode$ph$ph_add(params_81,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "10str.nc", 1818, 1536, "struct tuple2$2char$phsNode$ph"), "10str.nc", 1818, 1537),(char*)come_increment_ref_count(xsprintf("ignore_case"), "10str.nc", 1818, 1538),(struct sNode*)come_increment_ref_count(((ignore_case_79)?(((struct sNode*)(__right_value2=create_int_node((char* )come_increment_ref_count(int_to_string(1), "10str.nc", 1818, 1534),info)))):(((struct sNode*)(__right_value4=create_int_node((char* )come_increment_ref_count(int_to_string(0), "10str.nc", 1818, 1535),info))))), "10str.nc", 1818, 1539)), "10str.nc", 1818, 1540));
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "10str.nc", 1818, 1541):(void*)0);
        ((__right_value4) ? __right_value4 = come_decrement_ref_count(__right_value4, ((struct sNode*)__right_value4)->finalize, ((struct sNode*)__right_value4)->_protocol_obj, 1, 0,(void*)0, "10str.nc", 1818, 1542):(void*)0);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        __right_value3 = (void*)0;
        __right_value4 = (void*)0;
        list$1tuple2$2char$phsNode$ph$ph_add(params_81,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "10str.nc", 1819, 1544, "struct tuple2$2char$phsNode$ph"), "10str.nc", 1819, 1545),(char*)come_increment_ref_count(xsprintf("multiline"), "10str.nc", 1819, 1546),(struct sNode*)come_increment_ref_count(create_int_node((char* )come_increment_ref_count(int_to_string(0), "10str.nc", 1819, 1543),info), "10str.nc", 1819, 1547)), "10str.nc", 1819, 1548));
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        __right_value3 = (void*)0;
        __right_value4 = (void*)0;
        __right_value5 = (void*)0;
        __right_value6 = (void*)0;
        list$1tuple2$2char$phsNode$ph$ph_add(params_81,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "10str.nc", 1820, 1551, "struct tuple2$2char$phsNode$ph"), "10str.nc", 1820, 1552),(char*)come_increment_ref_count(xsprintf("global"), "10str.nc", 1820, 1553),(struct sNode*)come_increment_ref_count(((global_78)?(((struct sNode*)(__right_value2=create_int_node((char* )come_increment_ref_count(int_to_string(1), "10str.nc", 1820, 1549),info)))):(((struct sNode*)(__right_value4=create_int_node((char* )come_increment_ref_count(int_to_string(0), "10str.nc", 1820, 1550),info))))), "10str.nc", 1820, 1554)), "10str.nc", 1820, 1555));
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "10str.nc", 1820, 1556):(void*)0);
        ((__right_value4) ? __right_value4 = come_decrement_ref_count(__right_value4, ((struct sNode*)__right_value4)->finalize, ((struct sNode*)__right_value4)->_protocol_obj, 1, 0,(void*)0, "10str.nc", 1820, 1557):(void*)0);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        __right_value3 = (void*)0;
        __right_value4 = (void*)0;
        list$1tuple2$2char$phsNode$ph$ph_add(params_81,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "10str.nc", 1821, 1559, "struct tuple2$2char$phsNode$ph"), "10str.nc", 1821, 1560),(char*)come_increment_ref_count(xsprintf("extended"), "10str.nc", 1821, 1561),(struct sNode*)come_increment_ref_count(create_int_node((char* )come_increment_ref_count(int_to_string(0), "10str.nc", 1821, 1558),info), "10str.nc", 1821, 1562)), "10str.nc", 1821, 1563));
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        __right_value3 = (void*)0;
        __right_value4 = (void*)0;
        list$1tuple2$2char$phsNode$ph$ph_add(params_81,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "10str.nc", 1822, 1565, "struct tuple2$2char$phsNode$ph"), "10str.nc", 1822, 1566),(char*)come_increment_ref_count(xsprintf("dotall"), "10str.nc", 1822, 1567),(struct sNode*)come_increment_ref_count(create_int_node((char* )come_increment_ref_count(int_to_string(0), "10str.nc", 1822, 1564),info), "10str.nc", 1822, 1568)), "10str.nc", 1822, 1569));
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        __right_value3 = (void*)0;
        __right_value4 = (void*)0;
        list$1tuple2$2char$phsNode$ph$ph_add(params_81,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "10str.nc", 1823, 1571, "struct tuple2$2char$phsNode$ph"), "10str.nc", 1823, 1572),(char*)come_increment_ref_count(xsprintf("anchored"), "10str.nc", 1823, 1573),(struct sNode*)come_increment_ref_count(create_int_node((char* )come_increment_ref_count(int_to_string(0), "10str.nc", 1823, 1570),info), "10str.nc", 1823, 1574)), "10str.nc", 1823, 1575));
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        __right_value3 = (void*)0;
        __right_value4 = (void*)0;
        list$1tuple2$2char$phsNode$ph$ph_add(params_81,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "10str.nc", 1824, 1577, "struct tuple2$2char$phsNode$ph"), "10str.nc", 1824, 1578),(char*)come_increment_ref_count(xsprintf("dollar_endonly"), "10str.nc", 1824, 1579),(struct sNode*)come_increment_ref_count(create_int_node((char* )come_increment_ref_count(int_to_string(0), "10str.nc", 1824, 1576),info), "10str.nc", 1824, 1580)), "10str.nc", 1824, 1581));
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        __right_value3 = (void*)0;
        __right_value4 = (void*)0;
        list$1tuple2$2char$phsNode$ph$ph_add(params_81,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "10str.nc", 1825, 1583, "struct tuple2$2char$phsNode$ph"), "10str.nc", 1825, 1584),(char*)come_increment_ref_count(xsprintf("ungreedy"), "10str.nc", 1825, 1585),(struct sNode*)come_increment_ref_count(create_int_node((char* )come_increment_ref_count(int_to_string(0), "10str.nc", 1825, 1582),info), "10str.nc", 1825, 1586)), "10str.nc", 1825, 1587));
        method_block_82=((void*)0);
        method_block_sline_83=info->sline;
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        method_generics_types_84=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "10str.nc", 1831, 1588, "struct list$1sType$ph*"), "10str.nc", 1831, 1589)), "10str.nc", 1831, 1590);
        __right_value0 = (void*)0;
        node_85=(struct sNode*)come_increment_ref_count(create_method_call("to_regex",(struct sNode*)come_increment_ref_count(obj_80, "10str.nc", 1833, 1591),params_81,method_block_82,method_block_sline_83,method_generics_types_84,info,(_Bool)0), "10str.nc", 1833, 1592);
        info->sline_real=sline_real_71;
                __result_obj__0 = (struct sNode*)come_increment_ref_count(node_85, "10str.nc", 1836, 1593);
        come_call_finalizer(buffer_finalize, value_73, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 1836, 1594);
        ((obj_80) ? obj_80 = come_decrement_ref_count(obj_80, ((struct sNode*)obj_80)->finalize, ((struct sNode*)obj_80)->_protocol_obj, 0, 0,(void*)0, "10str.nc", 1836, 1595):(void*)0);
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params_81, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 1836, 1596);
        come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types_84, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 1836, 1597);
        ((node_85) ? node_85 = come_decrement_ref_count(node_85, ((struct sNode*)node_85)->finalize, ((struct sNode*)node_85)->_protocol_obj, 0, 1,(void*)0, "10str.nc", 1836, 1598):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "10str.nc", 1836, 1599):(void*)0);
        return __result_obj__0;
        come_call_finalizer(buffer_finalize, value_73, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 2627, 1600);
        ((obj_80) ? obj_80 = come_decrement_ref_count(obj_80, ((struct sNode*)obj_80)->finalize, ((struct sNode*)obj_80)->_protocol_obj, 0, 0,(void*)0, "10str.nc", 2627, 1601):(void*)0);
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params_81, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 2627, 1602);
        come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types_84, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 2627, 1603);
        ((node_85) ? node_85 = come_decrement_ref_count(node_85, ((struct sNode*)node_85)->finalize, ((struct sNode*)node_85)->_protocol_obj, 0, 0,(void*)0, "10str.nc", 2627, 1604):(void*)0);
    }
    else if((span$1char$p_operator_derefference(info->p)==117||span$1char$p_operator_derefference(info->p)==85)&&*(info->p->p+1)==39) {
        sline_real_86=info->sline_real;
        info->sline_real=info->sline;
        prefix_87=span$1char$p_operator_derefference(info->p);
        info->p->p+=2;
        if(span$1char$p_operator_derefference(info->p)==92) {
            info->p->p++;
            if(xisdigit(span$1char$p_operator_derefference(info->p))) {
                n=0;
                while(xisdigit(span$1char$p_operator_derefference(info->p))) {
                    n=n*8+span$1char$p_operator_derefference(info->p)-48;
                    info->p->p++;
                }
                c=n;
            }
            else {
                switch (                span$1char$p_operator_derefference(info->p)) {
                    case 110:
                    c=10;
                    info->p->p++;
                    break;
                    case 116:
                    c=9;
                    info->p->p++;
                    break;
                    case 114:
                    c=13;
                    info->p->p++;
                    break;
                    case 97:
                    c=7;
                    info->p->p++;
                    break;
                    case 102:
                    c=12;
                    info->p->p++;
                    break;
                    case 118:
                    c=11;
                    info->p->p++;
                    break;
                    case 98:
                    c=8;
                    info->p->p++;
                    break;
                    case 92:
                    c=92;
                    info->p->p++;
                    break;
                    case 48:
                    c=0;
                    info->p->p++;
                    if(xisdigit(span$1char$p_operator_derefference(info->p))) {
                        n_88=0;
                        while(xisdigit(span$1char$p_operator_derefference(info->p))) {
                            n_88=n_88*8+span$1char$p_operator_derefference(info->p)-48;
                            info->p->p++;
                            skip_spaces_and_lf(info);
                        }
                        c=n_88;
                    }
                    break;
                    case 120:
                    case 88:
                    {
                        info->p->p++;
                        char buf_89[128];
                        memset(&buf_89, 0, sizeof(buf_89));
                        strncpy(buf_89,"0x",128);
                        while(span$1char$p_operator_derefference(info->p)>=48&&span$1char$p_operator_derefference(info->p)<=57||span$1char$p_operator_derefference(info->p)>=97&&span$1char$p_operator_derefference(info->p)<=102||span$1char$p_operator_derefference(info->p)>=65&&span$1char$p_operator_derefference(info->p)<=70) {
                            char buf2[2];
                            memset(&buf2, 0, sizeof(buf2));
                            buf2[0]=span$1char$p_operator_derefference(info->p);
                            buf2[1]=0;
                            info->p->p++;
                            strncat(buf_89,buf2,128);
                        }
                        n_90=strtoll(buf_89,((void*)0),0);
                        c=n_90;
                    }
                    break;
                    default:
                    c=span$1char$p_operator_derefference(info->p);
                    info->p->p++;
                    break;
                }
            }
        }
        else {
            c=span$1char$p_operator_derefference(info->p);
            info->p->p++;
        }
        if(span$1char$p_operator_derefference(info->p)!=39) {
            err_msg(info,"close \' to make character value");
            exit(1);
        }
        else {
            info->p->p++;
            skip_spaces_and_lf(info);
            info->sline_real=sline_real_86;
                        __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "10str.nc", 1959, 1608, "struct sNode");
            _inf_obj_value8=(struct sPrefixedCharNode*)come_increment_ref_count(((struct sPrefixedCharNode*)(__right_value2=sPrefixedCharNode_initialize((struct sPrefixedCharNode* )come_increment_ref_count((struct sPrefixedCharNode *)come_calloc(1, sizeof(struct sPrefixedCharNode )*(1), "10str.nc", 1959, 1605, "struct sPrefixedCharNode* "), "10str.nc", 1959, 1606),c,(char* )come_increment_ref_count(xsprintf("%c",prefix_87), "10str.nc", 1959, 1607),info))), "10str.nc", 1959, 1609);
            _inf_value8->_protocol_obj=_inf_obj_value8;
            _inf_value8->finalize=(void*)sPrefixedCharNode_finalize;
            _inf_value8->clone=(void*)sPrefixedCharNode_clone;
            _inf_value8->compile=(void*)sPrefixedCharNode_compile;
            _inf_value8->sline=(void*)sNodeBase_sline;
            _inf_value8->sline_real=(void*)sNodeBase_sline_real;
            _inf_value8->sname=(void*)sNodeBase_sname;
            _inf_value8->terminated=(void*)sNodeBase_terminated;
            _inf_value8->kind=(void*)sPrefixedCharNode_kind;
            _inf_value8->left_value=(void*)sNodeBase_left_value;
            __right_value3 = (void*)0;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value3=_inf_value8)), "10str.nc", 1959, 1619);
            come_call_finalizer(sPrefixedCharNode_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0, "10str.nc}", 1959, 1620);
            ((__right_value3) ? __right_value3 = come_decrement_ref_count(__right_value3, ((struct sNode*)__right_value3)->finalize, ((struct sNode*)__right_value3)->_protocol_obj, 1, 0,(void*)0, "10str.nc", 1959, 1621):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "10str.nc", 1959, 1622):(void*)0);
            return __result_obj__0;
        }
    }
    else if(span$1char$p_operator_derefference(info->p)==39) {
        sline_real_91=info->sline_real;
        info->sline_real=info->sline;
        info->p->p++;
        if(span$1char$p_operator_derefference(info->p)==92) {
            info->p->p++;
            if(xisdigit(span$1char$p_operator_derefference(info->p))) {
                n_93=0;
                while(xisdigit(span$1char$p_operator_derefference(info->p))) {
                    n_93=n_93*8+span$1char$p_operator_derefference(info->p)-48;
                    info->p->p++;
                }
                c_92=n_93;
            }
            else {
                switch (                span$1char$p_operator_derefference(info->p)) {
                    case 110:
                    c_92=10;
                    info->p->p++;
                    break;
                    case 116:
                    c_92=9;
                    info->p->p++;
                    break;
                    case 114:
                    c_92=13;
                    info->p->p++;
                    break;
                    case 97:
                    c_92=7;
                    info->p->p++;
                    break;
                    case 102:
                    c_92=12;
                    info->p->p++;
                    break;
                    case 118:
                    c_92=11;
                    info->p->p++;
                    break;
                    case 98:
                    c_92=8;
                    info->p->p++;
                    break;
                    case 92:
                    c_92=92;
                    info->p->p++;
                    break;
                    case 48:
                    c_92=0;
                    info->p->p++;
                    if(xisdigit(span$1char$p_operator_derefference(info->p))) {
                        n_94=0;
                        while(xisdigit(span$1char$p_operator_derefference(info->p))) {
                            n_94=n_94*8+span$1char$p_operator_derefference(info->p)-48;
                            info->p->p++;
                            skip_spaces_and_lf(info);
                        }
                        c_92=n_94;
                    }
                    break;
                    case 120:
                    case 88:
                    {
                        info->p->p++;
                        char buf_95[128];
                        memset(&buf_95, 0, sizeof(buf_95));
                        strncpy(buf_95,"0x",128);
                        while(span$1char$p_operator_derefference(info->p)>=48&&span$1char$p_operator_derefference(info->p)<=57||span$1char$p_operator_derefference(info->p)>=97&&span$1char$p_operator_derefference(info->p)<=102||span$1char$p_operator_derefference(info->p)>=65&&span$1char$p_operator_derefference(info->p)<=70) {
                            char buf2_96[2];
                            memset(&buf2_96, 0, sizeof(buf2_96));
                            buf2_96[0]=span$1char$p_operator_derefference(info->p);
                            buf2_96[1]=0;
                            info->p->p++;
                            strncat(buf_95,buf2_96,128);
                        }
                        n_97=strtoll(buf_95,((void*)0),0);
                        c_92=n_97;
                    }
                    break;
                    default:
                    c_92=span$1char$p_operator_derefference(info->p);
                    info->p->p++;
                    break;
                }
            }
        }
        else {
            c_92=span$1char$p_operator_derefference(info->p);
            info->p->p++;
        }
        if(span$1char$p_operator_derefference(info->p)!=39) {
            err_msg(info,"close \' to make character value");
            exit(1);
        }
        else {
            info->p->p++;
            skip_spaces_and_lf(info);
            info->sline_real=sline_real_91;
                        __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "10str.nc", 2081, 1625, "struct sNode");
            _inf_obj_value9=(struct sCharNode*)come_increment_ref_count(((struct sCharNode*)(__right_value1=sCharNode_initialize((struct sCharNode* )come_increment_ref_count((struct sCharNode *)come_calloc(1, sizeof(struct sCharNode )*(1), "10str.nc", 2081, 1623, "struct sCharNode* "), "10str.nc", 2081, 1624),c_92,info))), "10str.nc", 2081, 1626);
            _inf_value9->_protocol_obj=_inf_obj_value9;
            _inf_value9->finalize=(void*)sCharNode_finalize;
            _inf_value9->clone=(void*)sCharNode_clone;
            _inf_value9->compile=(void*)sCharNode_compile;
            _inf_value9->sline=(void*)sNodeBase_sline;
            _inf_value9->sline_real=(void*)sNodeBase_sline_real;
            _inf_value9->sname=(void*)sNodeBase_sname;
            _inf_value9->terminated=(void*)sNodeBase_terminated;
            _inf_value9->kind=(void*)sCharNode_kind;
            _inf_value9->left_value=(void*)sNodeBase_left_value;
            __right_value2 = (void*)0;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value9)), "10str.nc", 2081, 1633);
            come_call_finalizer(sCharNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "10str.nc}", 2081, 1634);
            ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "10str.nc", 2081, 1635):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "10str.nc", 2081, 1636):(void*)0);
            return __result_obj__0;
        }
    }
    else if(span$1char$p_operator_derefference(info->p)==76&&*(info->p->p+1)==39) {
        sline_real_98=info->sline_real;
        info->sline_real=info->sline;
        info->p->p+=2;
        if(span$1char$p_operator_derefference(info->p)==92) {
            quote=(_Bool)1;
            info->p->p++;
            if(xisdigit(span$1char$p_operator_derefference(info->p))) {
                n_100=0;
                while(xisdigit(span$1char$p_operator_derefference(info->p))) {
                    n_100=n_100*8+span$1char$p_operator_derefference(info->p)-48;
                    info->p->p++;
                }
                c_99=n_100;
            }
            else {
                switch (                span$1char$p_operator_derefference(info->p)) {
                    case 110:
                    c_99=10;
                    info->p->p++;
                    break;
                    case 116:
                    c_99=9;
                    info->p->p++;
                    break;
                    case 114:
                    c_99=13;
                    info->p->p++;
                    break;
                    case 97:
                    c_99=7;
                    info->p->p++;
                    break;
                    case 92:
                    c_99=92;
                    info->p->p++;
                    break;
                    case 48:
                    c_99=0;
                    info->p->p++;
                    if(xisdigit(span$1char$p_operator_derefference(info->p))) {
                        n_101=0;
                        while(xisdigit(span$1char$p_operator_derefference(info->p))) {
                            n_101=n_101*8+span$1char$p_operator_derefference(info->p)-48;
                            info->p->p++;
                            skip_spaces_and_lf(info);
                        }
                        c_99=n_101;
                    }
                    break;
                    case 120:
                    case 88:
                    {
                        info->p->p++;
                        char buf_102[128];
                        memset(&buf_102, 0, sizeof(buf_102));
                        strncpy(buf_102,"0x",128);
                        while(span$1char$p_operator_derefference(info->p)>=48&&span$1char$p_operator_derefference(info->p)<=57||span$1char$p_operator_derefference(info->p)>=97&&span$1char$p_operator_derefference(info->p)<=102||span$1char$p_operator_derefference(info->p)>=65&&span$1char$p_operator_derefference(info->p)<=70) {
                            char buf2_103[2];
                            memset(&buf2_103, 0, sizeof(buf2_103));
                            buf2_103[0]=span$1char$p_operator_derefference(info->p);
                            buf2_103[1]=0;
                            info->p->p++;
                            strncat(buf_102,buf2_103,128);
                        }
                        n_104=strtoll(buf_102,((void*)0),0);
                        c_99=n_104;
                    }
                    break;
                    default:
                    c_99=span$1char$p_operator_derefference(info->p);
                    info->p->p++;
                    break;
                }
            }
        }
        else {
            quote=(_Bool)0;
            p2=*(unsigned char*)info->p->p;
            if(p2>127) {
                char str[16+1];
                memset(&str, 0, sizeof(str));
                size_105=((p2&0x80)>>7)+((p2&0x40)>>6)+((p2&0x20)>>5)+((p2&0x10)>>4);
                if(size_105>16) {
                    err_msg(info,"invalid utf-8 character. MB_LEN_MAX");
                    info->err_num++;
                    exit(2);
                }
                else {
                    memcpy(str,info->p->p,size_105);
                    str[size_105]=0;
                    if(mbtowc(&c_99,str,size_105)<0) {
                        perror("mbtowc");
                        err_msg(info,"invalid utf-8 character. mbtowc");
                        info->err_num++;
                        exit(2);
                    }
                    else {
                        info->p->p+=size_105;
                    }
                }
            }
            else {
                c_99=span$1char$p_operator_derefference(info->p);
                info->p->p++;
            }
        }
        if(span$1char$p_operator_derefference(info->p)!=39) {
            err_msg(info,"close \' to make character value");
            info->err_num++;
            exit(2);
        }
        else {
            info->p->p++;
            skip_spaces_and_lf(info);
            info->sline_real=sline_real_98;
                        __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "10str.nc", 2227, 1639, "struct sNode");
            _inf_obj_value10=(struct sWCharNode*)come_increment_ref_count(((struct sWCharNode*)(__right_value1=sWCharNode_initialize((struct sWCharNode* )come_increment_ref_count((struct sWCharNode *)come_calloc(1, sizeof(struct sWCharNode )*(1), "10str.nc", 2227, 1637, "struct sWCharNode* "), "10str.nc", 2227, 1638),c_99,quote,info))), "10str.nc", 2227, 1640);
            _inf_value10->_protocol_obj=_inf_obj_value10;
            _inf_value10->finalize=(void*)sWCharNode_finalize;
            _inf_value10->clone=(void*)sWCharNode_clone;
            _inf_value10->compile=(void*)sWCharNode_compile;
            _inf_value10->sline=(void*)sNodeBase_sline;
            _inf_value10->sline_real=(void*)sNodeBase_sline_real;
            _inf_value10->sname=(void*)sNodeBase_sname;
            _inf_value10->terminated=(void*)sNodeBase_terminated;
            _inf_value10->kind=(void*)sWCharNode_kind;
            _inf_value10->left_value=(void*)sNodeBase_left_value;
            __right_value2 = (void*)0;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value10)), "10str.nc", 2227, 1647);
            come_call_finalizer(sWCharNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "10str.nc}", 2227, 1648);
            ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "10str.nc", 2227, 1649):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "10str.nc", 2227, 1650):(void*)0);
            return __result_obj__0;
        }
    }
    else if(span$1char$p_operator_derefference(info->p)==76&&*(info->p->p+1)==34) {
        sline_real_106=info->sline_real;
        info->sline_real=info->sline;
        info->p->p+=2;
        sline_107=info->sline;
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        value_108=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "10str.nc", 2238, 1651, "struct buffer* "), "10str.nc", 2238, 1652)), "10str.nc", 2238, 1653);
        while(1) {
            if(span$1char$p_operator_derefference(info->p)==34) {
                info->p->p++;
                p_109=info->p->p;
                sline_110=info->sline;
                skip_spaces_and_lf(info);
                if(span$1char$p_operator_derefference(info->p)==34) {
                    info->p->p++;
                }
                else {
                    info->p->p=p_109;
                    info->sline=sline_110;
                    break;
                }
            }
            else if(span$1char$p_operator_derefference(info->p)==92) {
                buffer_append_char(value_108,92);
                info->p->p++;
                if(span$1char$p_operator_derefference(info->p)==34) {
                    buffer_append_char(value_108,34);
                    info->p->p++;
                }
                else {
                    buffer_append_char(value_108,span$1char$p_operator_derefference(info->p));
                    info->p->p++;
                }
            }
            else if(span$1char$p_operator_derefference(info->p)==0) {
                sline2_111=info->sline;
                info->sline=sline_107;
                err_msg(info,"close \" to make c string value");
                exit(2);
            }
            else {
                if(span$1char$p_operator_derefference(info->p)==10) {
                    info->sline++;
                }
                buffer_append_char(value_108,span$1char$p_operator_derefference(info->p));
                info->p->p++;
            }
        }
        skip_spaces_and_lf(info);
        len_112=value_108->len;
        __right_value0 = (void*)0;
        wstr=(int* )come_increment_ref_count((int *)come_calloc(1, sizeof(int )*(1*(len_112+1)), "10str.nc", 2289, 1654, "int* "), "10str.nc", 2289, 1655);
        str_113=value_108->buf;
        if(mbstowcs(wstr,str_113,len_112+1)<0) {
            perror("mbstowcs");
            exit(1);
        }
        wstr[len_112]=0;
        info->sline_real=sline_real_106;
                __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "10str.nc", 2301, 1659, "struct sNode");
        _inf_obj_value11=(struct sWStringNode*)come_increment_ref_count(((struct sWStringNode*)(__right_value1=sWStringNode_initialize((struct sWStringNode* )come_increment_ref_count((struct sWStringNode *)come_calloc(1, sizeof(struct sWStringNode )*(1), "10str.nc", 2301, 1656, "struct sWStringNode* "), "10str.nc", 2301, 1657),(int* )come_increment_ref_count(wstr, "10str.nc", 2301, 1658),sline_107,info))), "10str.nc", 2301, 1660);
        _inf_value11->_protocol_obj=_inf_obj_value11;
        _inf_value11->finalize=(void*)sWStringNode_finalize;
        _inf_value11->clone=(void*)sWStringNode_clone;
        _inf_value11->compile=(void*)sWStringNode_compile;
        _inf_value11->sline=(void*)sNodeBase_sline;
        _inf_value11->sline_real=(void*)sNodeBase_sline_real;
        _inf_value11->sname=(void*)sNodeBase_sname;
        _inf_value11->terminated=(void*)sNodeBase_terminated;
        _inf_value11->kind=(void*)sWStringNode_kind;
        _inf_value11->left_value=(void*)sNodeBase_left_value;
        __right_value2 = (void*)0;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value11)), "10str.nc", 2301, 1670);
        come_call_finalizer(buffer_finalize, value_108, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 2301, 1671);
        (wstr = come_decrement_ref_count(wstr, (void*)0, (void*)0, 0, 0, (void*)0, "10str.nc", 2301, 1672));
        come_call_finalizer(sWStringNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "10str.nc}", 2301, 1673);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "10str.nc", 2301, 1674):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "10str.nc", 2301, 1675):(void*)0);
        return __result_obj__0;
        come_call_finalizer(buffer_finalize, value_108, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 2627, 1676);
        (wstr = come_decrement_ref_count(wstr, (void*)0, (void*)0, 0, 0, (void*)0, "10str.nc", 2627, 1677));
    }
    else if((span$1char$p_operator_derefference(info->p)==115||span$1char$p_operator_derefference(info->p)==83)&&*(info->p->p+1)==34) {
        sline_real_114=info->sline_real;
        info->sline_real=info->sline;
        info->p->p+=2;
        sline_115=info->sline;
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        exps_116=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "10str.nc", 2312, 1678, "struct list$1sNode$ph*"), "10str.nc", 2312, 1679)), "10str.nc", 2312, 1680);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        value_117=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "10str.nc", 2313, 1681, "struct buffer* "), "10str.nc", 2313, 1682)), "10str.nc", 2313, 1683);
        while(1) {
            if(span$1char$p_operator_derefference(info->p)==34) {
                info->p->p++;
                p_118=info->p->p;
                sline_119=info->sline;
                skip_spaces_and_lf(info);
                if(span$1char$p_operator_derefference(info->p)==34) {
                    info->p->p++;
                }
                else {
                    info->p->p=p_118;
                    info->sline=sline_119;
                    break;
                }
            }
            else if(span$1char$p_operator_derefference(info->p)==37) {
                buffer_append_char(value_117,37);
                buffer_append_char(value_117,37);
                info->p->p++;
            }
            else if(span$1char$p_operator_derefference(info->p)==92) {
                buffer_append_char(value_117,92);
                info->p->p++;
                if(xisdigit(span$1char$p_operator_derefference(info->p))) {
                    len_120=0;
                    while(xisdigit(span$1char$p_operator_derefference(info->p))&&len_120<3) {
                        buffer_append_char(value_117,span$1char$p_operator_derefference(info->p));
                        info->p->p++;
                        len_120++;
                    }
                }
                else if(span$1char$p_operator_derefference(info->p)==120||span$1char$p_operator_derefference(info->p)==88) {
                    buffer_append_char(value_117,span$1char$p_operator_derefference(info->p));
                    info->p->p++;
                    while(span$1char$p_operator_derefference(info->p)>=48&&span$1char$p_operator_derefference(info->p)<=57||span$1char$p_operator_derefference(info->p)>=97&&span$1char$p_operator_derefference(info->p)<=102||span$1char$p_operator_derefference(info->p)>=65&&span$1char$p_operator_derefference(info->p)<=70) {
                        buffer_append_char(value_117,span$1char$p_operator_derefference(info->p));
                        info->p->p++;
                    }
                }
                else if(span$1char$p_operator_derefference(info->p)==123) {
                    info->p->p++;
                    __right_value0 = (void*)0;
                    exp_121=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "10str.nc", 2380, 1684);
                    list$1sNode$ph_add(exps_116,(struct sNode*)come_increment_ref_count(exp_121, "10str.nc", 2382, 1685));
                    if(span$1char$p_operator_derefference(info->p)==125) {
                        info->p->p++;
                    }
                    buffer_append_str(value_117,"%s");
                    ((exp_121) ? exp_121 = come_decrement_ref_count(exp_121, ((struct sNode*)exp_121)->finalize, ((struct sNode*)exp_121)->_protocol_obj, 0, 0,(void*)0, "10str.nc", 2443, 1686):(void*)0);
                }
                else {
                    switch (                    span$1char$p_operator_derefference(info->p)) {
                        case 48:
                        buffer_append_char(value_117,span$1char$p_operator_derefference(info->p));
                        info->p->p++;
                        break;
                        case 110:
                        buffer_append_char(value_117,span$1char$p_operator_derefference(info->p));
                        info->p->p++;
                        break;
                        case 116:
                        buffer_append_char(value_117,span$1char$p_operator_derefference(info->p));
                        info->p->p++;
                        break;
                        case 114:
                        buffer_append_char(value_117,span$1char$p_operator_derefference(info->p));
                        info->p->p++;
                        break;
                        case 118:
                        buffer_append_char(value_117,span$1char$p_operator_derefference(info->p));
                        info->p->p++;
                        break;
                        case 102:
                        buffer_append_char(value_117,span$1char$p_operator_derefference(info->p));
                        info->p->p++;
                        break;
                        case 97:
                        buffer_append_char(value_117,span$1char$p_operator_derefference(info->p));
                        info->p->p++;
                        break;
                        case 98:
                        buffer_append_char(value_117,span$1char$p_operator_derefference(info->p));
                        info->p->p++;
                        break;
                        case 92:
                        buffer_append_char(value_117,span$1char$p_operator_derefference(info->p));
                        info->p->p++;
                        break;
                        default:
                        buffer_append_char(value_117,span$1char$p_operator_derefference(info->p));
                        info->p->p++;
                        break;
                    }
                }
            }
            else if(span$1char$p_operator_derefference(info->p)==0) {
                sline2_122=info->sline;
                info->sline=sline_115;
                err_msg(info,"close \" to make embbeded string value");
                exit(2);
            }
            else {
                if(span$1char$p_operator_derefference(info->p)==10) {
                    info->sline++;
                }
                buffer_append_char(value_117,span$1char$p_operator_derefference(info->p));
                info->p->p++;
            }
        }
        skip_spaces_and_lf(info);
        info->sline_real=sline_real_114;
                __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "10str.nc", 2461, 1691, "struct sNode");
        _inf_obj_value12=(struct sSStringNode*)come_increment_ref_count(((struct sSStringNode*)(__right_value2=sSStringNode_initialize((struct sSStringNode* )come_increment_ref_count((struct sSStringNode *)come_calloc(1, sizeof(struct sSStringNode )*(1), "10str.nc", 2461, 1687, "struct sSStringNode* "), "10str.nc", 2461, 1688),(char* )come_increment_ref_count(buffer_to_string(value_117), "10str.nc", 2461, 1689),(struct list$1sNode$ph*)come_increment_ref_count(exps_116, "10str.nc", 2461, 1690),sline_115,info))), "10str.nc", 2461, 1692);
        _inf_value12->_protocol_obj=_inf_obj_value12;
        _inf_value12->finalize=(void*)sSStringNode_finalize;
        _inf_value12->clone=(void*)sSStringNode_clone;
        _inf_value12->compile=(void*)sSStringNode_compile;
        _inf_value12->sline=(void*)sNodeBase_sline;
        _inf_value12->sline_real=(void*)sNodeBase_sline_real;
        _inf_value12->sname=(void*)sNodeBase_sname;
        _inf_value12->terminated=(void*)sNodeBase_terminated;
        _inf_value12->kind=(void*)sSStringNode_kind;
        _inf_value12->left_value=(void*)sNodeBase_left_value;
        __right_value3 = (void*)0;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value3=_inf_value12)), "10str.nc", 2461, 1693);
        come_call_finalizer(list$1sNode$ph$p_finalize, exps_116, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 2461, 1694);
        come_call_finalizer(buffer_finalize, value_117, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 2461, 1695);
        come_call_finalizer(sSStringNode_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0, "10str.nc}", 2461, 1696);
        ((__right_value3) ? __right_value3 = come_decrement_ref_count(__right_value3, ((struct sNode*)__right_value3)->finalize, ((struct sNode*)__right_value3)->_protocol_obj, 1, 0,(void*)0, "10str.nc", 2461, 1697):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "10str.nc", 2461, 1698):(void*)0);
        return __result_obj__0;
        come_call_finalizer(list$1sNode$ph$p_finalize, exps_116, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 2627, 1699);
        come_call_finalizer(buffer_finalize, value_117, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 2627, 1700);
    }
    else if(span$1char$p_operator_derefference(info->p)==91) {
        sline_real_123=info->sline_real;
        info->sline_real=info->sline;
        info->p->p++;
        skip_spaces_and_lf(info);
        p_124=info->p->p;
        no_comma=info->no_comma;
        info->no_comma=(_Bool)1;
        __right_value0 = (void*)0;
        node_125=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "10str.nc", 2474, 1701);
        info->no_comma=no_comma;
        p2_126=info->p->p;
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        first_element_source=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "10str.nc", 2480, 1702, "struct buffer* "), "10str.nc", 2480, 1703)), "10str.nc", 2480, 1704);
        buffer_append(first_element_source,p_124,p2_126-p_124);
        buffer_append_char(first_element_source,0);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        list_elements=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "10str.nc", 2485, 1705, "struct list$1sNode$ph*"), "10str.nc", 2485, 1706)), "10str.nc", 2485, 1707);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        map_keys=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "10str.nc", 2487, 1708, "struct list$1sNode$ph*"), "10str.nc", 2487, 1709)), "10str.nc", 2487, 1710);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        map_elements=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "10str.nc", 2488, 1711, "struct list$1sNode$ph*"), "10str.nc", 2488, 1712)), "10str.nc", 2488, 1713);
        if(span$1char$p_operator_derefference(info->p)==58) {
            info->p->p++;
            skip_spaces_and_lf(info);
            list$1sNode$ph_push_back(map_keys,(struct sNode*)come_increment_ref_count(node_125, "10str.nc", 2495, 1714));
            no_comma_127=info->no_comma;
            info->no_comma=(_Bool)1;
            __right_value0 = (void*)0;
            node2=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "10str.nc", 2501, 1715);
            info->no_comma=no_comma_127;
            list$1sNode$ph_push_back(map_elements,(struct sNode*)come_increment_ref_count(node2, "10str.nc", 2505, 1716));
            if(span$1char$p_operator_derefference(info->p)==93) {
                info->p->p++;
                skip_spaces_and_lf(info);
                                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "10str.nc", 2511, 1721, "struct sNode");
                _inf_obj_value13=(struct sMapNode*)come_increment_ref_count(((struct sMapNode*)(__right_value1=sMapNode_initialize((struct sMapNode* )come_increment_ref_count((struct sMapNode *)come_calloc(1, sizeof(struct sMapNode )*(1), "10str.nc", 2511, 1717, "struct sMapNode* "), "10str.nc", 2511, 1718),(struct list$1sNode$ph*)come_increment_ref_count(map_keys, "10str.nc", 2511, 1719),(struct list$1sNode$ph*)come_increment_ref_count(map_elements, "10str.nc", 2511, 1720),info))), "10str.nc", 2511, 1722);
                _inf_value13->_protocol_obj=_inf_obj_value13;
                _inf_value13->finalize=(void*)sMapNode_finalize;
                _inf_value13->clone=(void*)sMapNode_clone;
                _inf_value13->compile=(void*)sMapNode_compile;
                _inf_value13->sline=(void*)sNodeBase_sline;
                _inf_value13->sline_real=(void*)sNodeBase_sline_real;
                _inf_value13->sname=(void*)sNodeBase_sname;
                _inf_value13->terminated=(void*)sNodeBase_terminated;
                _inf_value13->kind=(void*)sMapNode_kind;
                _inf_value13->left_value=(void*)sNodeBase_left_value;
                __right_value2 = (void*)0;
                __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value13)), "10str.nc", 2511, 1733);
                ((node2) ? node2 = come_decrement_ref_count(node2, ((struct sNode*)node2)->finalize, ((struct sNode*)node2)->_protocol_obj, 0, 0,(void*)0, "10str.nc", 2511, 1734):(void*)0);
                ((node_125) ? node_125 = come_decrement_ref_count(node_125, ((struct sNode*)node_125)->finalize, ((struct sNode*)node_125)->_protocol_obj, 0, 0,(void*)0, "10str.nc", 2511, 1735):(void*)0);
                come_call_finalizer(buffer_finalize, first_element_source, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 2511, 1736);
                come_call_finalizer(list$1sNode$ph$p_finalize, list_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 2511, 1737);
                come_call_finalizer(list$1sNode$ph$p_finalize, map_keys, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 2511, 1738);
                come_call_finalizer(list$1sNode$ph$p_finalize, map_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 2511, 1739);
                come_call_finalizer(sMapNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "10str.nc}", 2511, 1740);
                ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "10str.nc", 2511, 1741):(void*)0);
                neo_current_frame = fr.prev;
                ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "10str.nc", 2511, 1742):(void*)0);
                return __result_obj__0;
            }
            else {
                expected_next_character(44,info);
                while((_Bool)1) {
                    no_comma_128=info->no_comma;
                    info->no_comma=(_Bool)1;
                    __right_value0 = (void*)0;
                    node2_129=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "10str.nc", 2520, 1743);
                    info->no_comma=no_comma_128;
                    list$1sNode$ph_push_back(map_keys,(struct sNode*)come_increment_ref_count(node2_129, "10str.nc", 2524, 1744));
                    expected_next_character(58,info);
                    no_comma_128=info->no_comma;
                    info->no_comma=(_Bool)1;
                    __right_value0 = (void*)0;
                    node3=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "10str.nc", 2531, 1745);
                    info->no_comma=no_comma_128;
                    list$1sNode$ph_push_back(map_elements,(struct sNode*)come_increment_ref_count(node3, "10str.nc", 2535, 1746));
                    if(span$1char$p_operator_derefference(info->p)==0) {
                        err_msg(info,"invalid source end");
                        exit(2);
                    }
                    else if(span$1char$p_operator_derefference(info->p)==44) {
                        info->p->p++;
                        skip_spaces_and_lf(info);
                    }
                    else if(span$1char$p_operator_derefference(info->p)==93) {
                        info->p->p++;
                        skip_spaces_and_lf(info);
                        ((node2_129) ? node2_129 = come_decrement_ref_count(node2_129, ((struct sNode*)node2_129)->finalize, ((struct sNode*)node2_129)->_protocol_obj, 0, 0,(void*)0, "10str.nc", 2548, 1747):(void*)0);
                        ((node3) ? node3 = come_decrement_ref_count(node3, ((struct sNode*)node3)->finalize, ((struct sNode*)node3)->_protocol_obj, 0, 0,(void*)0, "10str.nc", 2548, 1748):(void*)0);
                        break;
                    }
                    else {
                        err_msg(info,"invalid character(3)(%c)",span$1char$p_operator_derefference(info->p));
                        exit(2);
                    }
                    ((node2_129) ? node2_129 = come_decrement_ref_count(node2_129, ((struct sNode*)node2_129)->finalize, ((struct sNode*)node2_129)->_protocol_obj, 0, 0,(void*)0, "10str.nc", 2556, 1749):(void*)0);
                    ((node3) ? node3 = come_decrement_ref_count(node3, ((struct sNode*)node3)->finalize, ((struct sNode*)node3)->_protocol_obj, 0, 0,(void*)0, "10str.nc", 2556, 1750):(void*)0);
                }
                                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "10str.nc", 2556, 1755, "struct sNode");
                _inf_obj_value14=(struct sMapNode*)come_increment_ref_count(((struct sMapNode*)(__right_value1=sMapNode_initialize((struct sMapNode* )come_increment_ref_count((struct sMapNode *)come_calloc(1, sizeof(struct sMapNode )*(1), "10str.nc", 2556, 1751, "struct sMapNode* "), "10str.nc", 2556, 1752),(struct list$1sNode$ph*)come_increment_ref_count(map_keys, "10str.nc", 2556, 1753),(struct list$1sNode$ph*)come_increment_ref_count(map_elements, "10str.nc", 2556, 1754),info))), "10str.nc", 2556, 1756);
                _inf_value14->_protocol_obj=_inf_obj_value14;
                _inf_value14->finalize=(void*)sMapNode_finalize;
                _inf_value14->clone=(void*)sMapNode_clone;
                _inf_value14->compile=(void*)sMapNode_compile;
                _inf_value14->sline=(void*)sNodeBase_sline;
                _inf_value14->sline_real=(void*)sNodeBase_sline_real;
                _inf_value14->sname=(void*)sNodeBase_sname;
                _inf_value14->terminated=(void*)sNodeBase_terminated;
                _inf_value14->kind=(void*)sMapNode_kind;
                _inf_value14->left_value=(void*)sNodeBase_left_value;
                __right_value2 = (void*)0;
                __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value14)), "10str.nc", 2556, 1757);
                ((node2) ? node2 = come_decrement_ref_count(node2, ((struct sNode*)node2)->finalize, ((struct sNode*)node2)->_protocol_obj, 0, 0,(void*)0, "10str.nc", 2556, 1758):(void*)0);
                ((node_125) ? node_125 = come_decrement_ref_count(node_125, ((struct sNode*)node_125)->finalize, ((struct sNode*)node_125)->_protocol_obj, 0, 0,(void*)0, "10str.nc", 2556, 1759):(void*)0);
                come_call_finalizer(buffer_finalize, first_element_source, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 2556, 1760);
                come_call_finalizer(list$1sNode$ph$p_finalize, list_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 2556, 1761);
                come_call_finalizer(list$1sNode$ph$p_finalize, map_keys, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 2556, 1762);
                come_call_finalizer(list$1sNode$ph$p_finalize, map_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 2556, 1763);
                come_call_finalizer(sMapNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "10str.nc}", 2556, 1764);
                ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "10str.nc", 2556, 1765):(void*)0);
                neo_current_frame = fr.prev;
                ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "10str.nc", 2556, 1766):(void*)0);
                return __result_obj__0;
            }
            ((node2) ? node2 = come_decrement_ref_count(node2, ((struct sNode*)node2)->finalize, ((struct sNode*)node2)->_protocol_obj, 0, 0,(void*)0, "10str.nc", 2606, 1767):(void*)0);
        }
        else if(span$1char$p_operator_derefference(info->p)==93) {
            info->p->p++;
            skip_spaces_and_lf(info);
            list$1sNode$ph_push_back(list_elements,(struct sNode*)come_increment_ref_count(node_125, "10str.nc", 2564, 1768));
        }
        else if(span$1char$p_operator_derefference(info->p)==44) {
            info->p->p++;
            skip_spaces_and_lf(info);
            list$1sNode$ph_push_back(list_elements,(struct sNode*)come_increment_ref_count(node_125, "10str.nc", 2570, 1769));
            while((_Bool)1) {
                no_comma_130=info->no_comma;
                info->no_comma=(_Bool)1;
                __right_value0 = (void*)0;
                node2_131=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "10str.nc", 2576, 1770);
                info->no_comma=no_comma_130;
                list$1sNode$ph_push_back(list_elements,(struct sNode*)come_increment_ref_count(node2_131, "10str.nc", 2580, 1771));
                if(span$1char$p_operator_derefference(info->p)==0) {
                    err_msg(info,"invalid source end");
                    exit(2);
                }
                else if(span$1char$p_operator_derefference(info->p)==44) {
                    info->p->p++;
                    skip_spaces_and_lf(info);
                }
                else if(span$1char$p_operator_derefference(info->p)==93) {
                    info->p->p++;
                    skip_spaces_and_lf(info);
                    ((node2_131) ? node2_131 = come_decrement_ref_count(node2_131, ((struct sNode*)node2_131)->finalize, ((struct sNode*)node2_131)->_protocol_obj, 0, 0,(void*)0, "10str.nc", 2593, 1772):(void*)0);
                    break;
                }
                else {
                    err_msg(info,"invalid character(4)(%c)",span$1char$p_operator_derefference(info->p));
                    exit(2);
                }
                ((node2_131) ? node2_131 = come_decrement_ref_count(node2_131, ((struct sNode*)node2_131)->finalize, ((struct sNode*)node2_131)->_protocol_obj, 0, 0,(void*)0, "10str.nc", 2600, 1773):(void*)0);
            }
        }
        else {
            err_msg(info,"invalid character(5)(%c)",span$1char$p_operator_derefference(info->p));
            exit(2);
        }
        if(list$1sNode$ph_length(list_elements)>0) {
            info->sline_real=sline_real_123;
                        __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "10str.nc", 2608, 1777, "struct sNode");
            _inf_obj_value15=(struct sListNode*)come_increment_ref_count(((struct sListNode*)(__right_value1=sListNode_initialize((struct sListNode* )come_increment_ref_count((struct sListNode *)come_calloc(1, sizeof(struct sListNode )*(1), "10str.nc", 2608, 1774, "struct sListNode* "), "10str.nc", 2608, 1775),(struct list$1sNode$ph*)come_increment_ref_count(list_elements, "10str.nc", 2608, 1776),info))), "10str.nc", 2608, 1778);
            _inf_value15->_protocol_obj=_inf_obj_value15;
            _inf_value15->finalize=(void*)sListNode_finalize;
            _inf_value15->clone=(void*)sListNode_clone;
            _inf_value15->compile=(void*)sListNode_compile;
            _inf_value15->sline=(void*)sNodeBase_sline;
            _inf_value15->sline_real=(void*)sNodeBase_sline_real;
            _inf_value15->sname=(void*)sNodeBase_sname;
            _inf_value15->terminated=(void*)sNodeBase_terminated;
            _inf_value15->kind=(void*)sListNode_kind;
            _inf_value15->left_value=(void*)sNodeBase_left_value;
            __right_value2 = (void*)0;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value15)), "10str.nc", 2608, 1787);
            ((node_125) ? node_125 = come_decrement_ref_count(node_125, ((struct sNode*)node_125)->finalize, ((struct sNode*)node_125)->_protocol_obj, 0, 0,(void*)0, "10str.nc", 2608, 1788):(void*)0);
            come_call_finalizer(buffer_finalize, first_element_source, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 2608, 1789);
            come_call_finalizer(list$1sNode$ph$p_finalize, list_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 2608, 1790);
            come_call_finalizer(list$1sNode$ph$p_finalize, map_keys, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 2608, 1791);
            come_call_finalizer(list$1sNode$ph$p_finalize, map_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 2608, 1792);
            come_call_finalizer(sListNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "10str.nc}", 2608, 1793);
            ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "10str.nc", 2608, 1794):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "10str.nc", 2608, 1795):(void*)0);
            return __result_obj__0;
        }
        else {
            err_msg(info,"invalid vector");
                        __result_obj__0 = (struct sNode*)come_increment_ref_count(((void*)0), "10str.nc", 2612, 1796);
            ((node_125) ? node_125 = come_decrement_ref_count(node_125, ((struct sNode*)node_125)->finalize, ((struct sNode*)node_125)->_protocol_obj, 0, 0,(void*)0, "10str.nc", 2612, 1797):(void*)0);
            come_call_finalizer(buffer_finalize, first_element_source, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 2612, 1798);
            come_call_finalizer(list$1sNode$ph$p_finalize, list_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 2612, 1799);
            come_call_finalizer(list$1sNode$ph$p_finalize, map_keys, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 2612, 1800);
            come_call_finalizer(list$1sNode$ph$p_finalize, map_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 2612, 1801);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "10str.nc", 2612, 1802):(void*)0);
            return __result_obj__0;
        }
        ((node_125) ? node_125 = come_decrement_ref_count(node_125, ((struct sNode*)node_125)->finalize, ((struct sNode*)node_125)->_protocol_obj, 0, 0,(void*)0, "10str.nc", 2627, 1803):(void*)0);
        come_call_finalizer(buffer_finalize, first_element_source, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 2627, 1804);
        come_call_finalizer(list$1sNode$ph$p_finalize, list_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 2627, 1805);
        come_call_finalizer(list$1sNode$ph$p_finalize, map_keys, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 2627, 1806);
        come_call_finalizer(list$1sNode$ph$p_finalize, map_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 2627, 1807);
    }
    else if(span$1char$p_operator_derefference(info->p)==118&&*(info->p->p+1)==40) {
        sline_real_132=info->sline_real;
        info->sline_real=info->sline;
        info->p->p+=2;
        skip_spaces_and_lf(info);
    }
    else {
        __right_value0 = (void*)0;
        node_133=(struct sNode*)come_increment_ref_count(expression_node_v95(info), "10str.nc", 2623, 1808);
                __result_obj__0 = (struct sNode*)come_increment_ref_count(node_133, "10str.nc", 2624, 1809);
        ((node_133) ? node_133 = come_decrement_ref_count(node_133, ((struct sNode*)node_133)->finalize, ((struct sNode*)node_133)->_protocol_obj, 0, 1,(void*)0, "10str.nc", 2624, 1810):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "10str.nc", 2624, 1811):(void*)0);
        return __result_obj__0;
        ((node_133) ? node_133 = come_decrement_ref_count(node_133, ((struct sNode*)node_133)->finalize, ((struct sNode*)node_133)->_protocol_obj, 0, 0,(void*)0, "10str.nc", 2627, 1812):(void*)0);
    }
        __result_obj__0 = (struct sNode*)come_increment_ref_count((struct sNode*)((void*)0), "10str.nc", 2627, 1813);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "10str.nc", 2627, 1814):(void*)0);
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

static struct sSStringNode* sSStringNode_clone(struct sSStringNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sSStringNode_clone"; neo_current_frame = &fr;
    struct sSStringNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sSStringNode*  result  ;
    char*  __dec_obj127  ;
    char*  __dec_obj128  ;
    struct list$1sNode$ph* __dec_obj129;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sSStringNode* )come_increment_ref_count((struct sSStringNode *)come_calloc(1, sizeof(struct sSStringNode )*(1), "sSStringNode_clone", 5, 1321, "struct sSStringNode* "), "sSStringNode_clone", 5, 1322);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj127=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sSStringNode_clone", 7, 1323, "char* "), "sSStringNode_clone", 7, 1325);
        __dec_obj127 = come_decrement_ref_count(__dec_obj127, (void*)0, (void*)0, 0,0, (void*)0, "sSStringNode_clone", 7, 1324);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->value!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj128=result->value,
        result->value=(char* )come_increment_ref_count((char* )come_memdup(self->value, "sSStringNode_clone", 9, 1326, "char* "), "sSStringNode_clone", 9, 1328);
        __dec_obj128 = come_decrement_ref_count(__dec_obj128, (void*)0, (void*)0, 0,0, (void*)0, "sSStringNode_clone", 9, 1327);
    }
    if(self!=((void*)0)&&self->exps!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj129=result->exps,
        result->exps=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->exps), "sSStringNode_clone", 10, 1330);
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj129,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sSStringNode_clone", 10, 1329);
    }
        __result_obj__0 = result;
    come_call_finalizer(sSStringNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sSStringNode_clone}", 11, 1331);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sPrefixedStringNode* sPrefixedStringNode_clone(struct sPrefixedStringNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sPrefixedStringNode_clone"; neo_current_frame = &fr;
    struct sPrefixedStringNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sPrefixedStringNode*  result  ;
    char*  __dec_obj130  ;
    char*  __dec_obj131  ;
    char*  __dec_obj132  ;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sPrefixedStringNode* )come_increment_ref_count((struct sPrefixedStringNode *)come_calloc(1, sizeof(struct sPrefixedStringNode )*(1), "sPrefixedStringNode_clone", 5, 1349, "struct sPrefixedStringNode* "), "sPrefixedStringNode_clone", 5, 1350);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj130=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sPrefixedStringNode_clone", 7, 1351, "char* "), "sPrefixedStringNode_clone", 7, 1353);
        __dec_obj130 = come_decrement_ref_count(__dec_obj130, (void*)0, (void*)0, 0,0, (void*)0, "sPrefixedStringNode_clone", 7, 1352);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->value!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj131=result->value,
        result->value=(char* )come_increment_ref_count((char* )come_memdup(self->value, "sPrefixedStringNode_clone", 9, 1354, "char* "), "sPrefixedStringNode_clone", 9, 1356);
        __dec_obj131 = come_decrement_ref_count(__dec_obj131, (void*)0, (void*)0, 0,0, (void*)0, "sPrefixedStringNode_clone", 9, 1355);
    }
    if(self!=((void*)0)&&self->prefix!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj132=result->prefix,
        result->prefix=(char* )come_increment_ref_count((char* )come_memdup(self->prefix, "sPrefixedStringNode_clone", 10, 1357, "char* "), "sPrefixedStringNode_clone", 10, 1359);
        __dec_obj132 = come_decrement_ref_count(__dec_obj132, (void*)0, (void*)0, 0,0, (void*)0, "sPrefixedStringNode_clone", 10, 1358);
    }
        __result_obj__0 = result;
    come_call_finalizer(sPrefixedStringNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sPrefixedStringNode_clone}", 11, 1360);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sStrNode* sStrNode_clone(struct sStrNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sStrNode_clone"; neo_current_frame = &fr;
    struct sStrNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sStrNode*  result  ;
    char*  __dec_obj133  ;
    char*  __dec_obj134  ;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sStrNode* )come_increment_ref_count((struct sStrNode *)come_calloc(1, sizeof(struct sStrNode )*(1), "sStrNode_clone", 5, 1390, "struct sStrNode* "), "sStrNode_clone", 5, 1391);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj133=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sStrNode_clone", 7, 1392, "char* "), "sStrNode_clone", 7, 1394);
        __dec_obj133 = come_decrement_ref_count(__dec_obj133, (void*)0, (void*)0, 0,0, (void*)0, "sStrNode_clone", 7, 1393);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->value!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj134=result->value,
        result->value=(char* )come_increment_ref_count((char* )come_memdup(self->value, "sStrNode_clone", 9, 1395, "char* "), "sStrNode_clone", 9, 1397);
        __dec_obj134 = come_decrement_ref_count(__dec_obj134, (void*)0, (void*)0, 0,0, (void*)0, "sStrNode_clone", 9, 1396);
    }
        __result_obj__0 = result;
    come_call_finalizer(sStrNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sStrNode_clone}", 10, 1398);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sBufferNode* sBufferNode_clone(struct sBufferNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sBufferNode_clone"; neo_current_frame = &fr;
    struct sBufferNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sBufferNode*  result  ;
    char*  __dec_obj135  ;
    struct buffer*  __dec_obj136  ;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sBufferNode* )come_increment_ref_count((struct sBufferNode *)come_calloc(1, sizeof(struct sBufferNode )*(1), "sBufferNode_clone", 5, 1413, "struct sBufferNode* "), "sBufferNode_clone", 5, 1414);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj135=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sBufferNode_clone", 7, 1415, "char* "), "sBufferNode_clone", 7, 1417);
        __dec_obj135 = come_decrement_ref_count(__dec_obj135, (void*)0, (void*)0, 0,0, (void*)0, "sBufferNode_clone", 7, 1416);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->value!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj136=result->value,
        result->value=(struct buffer* )come_increment_ref_count(buffer_clone(self->value), "sBufferNode_clone", 9, 1419);
        come_call_finalizer(buffer_finalize, __dec_obj136,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sBufferNode_clone", 9, 1418);
    }
    if(self!=((void*)0)) {
        result->size=self->size;
    }
        __result_obj__0 = result;
    come_call_finalizer(sBufferNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sBufferNode_clone}", 11, 1420);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sPrefixedCharNode* sPrefixedCharNode_clone(struct sPrefixedCharNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sPrefixedCharNode_clone"; neo_current_frame = &fr;
    struct sPrefixedCharNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sPrefixedCharNode*  result  ;
    char*  __dec_obj137  ;
    char*  __dec_obj138  ;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sPrefixedCharNode* )come_increment_ref_count((struct sPrefixedCharNode *)come_calloc(1, sizeof(struct sPrefixedCharNode )*(1), "sPrefixedCharNode_clone", 5, 1610, "struct sPrefixedCharNode* "), "sPrefixedCharNode_clone", 5, 1611);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj137=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sPrefixedCharNode_clone", 7, 1612, "char* "), "sPrefixedCharNode_clone", 7, 1614);
        __dec_obj137 = come_decrement_ref_count(__dec_obj137, (void*)0, (void*)0, 0,0, (void*)0, "sPrefixedCharNode_clone", 7, 1613);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)) {
        result->value=self->value;
    }
    if(self!=((void*)0)&&self->prefix!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj138=result->prefix,
        result->prefix=(char* )come_increment_ref_count((char* )come_memdup(self->prefix, "sPrefixedCharNode_clone", 10, 1615, "char* "), "sPrefixedCharNode_clone", 10, 1617);
        __dec_obj138 = come_decrement_ref_count(__dec_obj138, (void*)0, (void*)0, 0,0, (void*)0, "sPrefixedCharNode_clone", 10, 1616);
    }
        __result_obj__0 = result;
    come_call_finalizer(sPrefixedCharNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sPrefixedCharNode_clone}", 11, 1618);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sCharNode* sCharNode_clone(struct sCharNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sCharNode_clone"; neo_current_frame = &fr;
    struct sCharNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sCharNode*  result  ;
    char*  __dec_obj139  ;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sCharNode* )come_increment_ref_count((struct sCharNode *)come_calloc(1, sizeof(struct sCharNode )*(1), "sCharNode_clone", 5, 1627, "struct sCharNode* "), "sCharNode_clone", 5, 1628);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj139=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sCharNode_clone", 7, 1629, "char* "), "sCharNode_clone", 7, 1631);
        __dec_obj139 = come_decrement_ref_count(__dec_obj139, (void*)0, (void*)0, 0,0, (void*)0, "sCharNode_clone", 7, 1630);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)) {
        result->value=self->value;
    }
        __result_obj__0 = result;
    come_call_finalizer(sCharNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sCharNode_clone}", 10, 1632);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sWCharNode* sWCharNode_clone(struct sWCharNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sWCharNode_clone"; neo_current_frame = &fr;
    struct sWCharNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sWCharNode*  result  ;
    char*  __dec_obj140  ;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sWCharNode* )come_increment_ref_count((struct sWCharNode *)come_calloc(1, sizeof(struct sWCharNode )*(1), "sWCharNode_clone", 5, 1641, "struct sWCharNode* "), "sWCharNode_clone", 5, 1642);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj140=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sWCharNode_clone", 7, 1643, "char* "), "sWCharNode_clone", 7, 1645);
        __dec_obj140 = come_decrement_ref_count(__dec_obj140, (void*)0, (void*)0, 0,0, (void*)0, "sWCharNode_clone", 7, 1644);
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
    come_call_finalizer(sWCharNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sWCharNode_clone}", 11, 1646);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sWStringNode* sWStringNode_clone(struct sWStringNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sWStringNode_clone"; neo_current_frame = &fr;
    struct sWStringNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sWStringNode*  result  ;
    char*  __dec_obj141  ;
    int*  __dec_obj142  ;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sWStringNode* )come_increment_ref_count((struct sWStringNode *)come_calloc(1, sizeof(struct sWStringNode )*(1), "sWStringNode_clone", 5, 1661, "struct sWStringNode* "), "sWStringNode_clone", 5, 1662);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj141=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sWStringNode_clone", 7, 1663, "char* "), "sWStringNode_clone", 7, 1665);
        __dec_obj141 = come_decrement_ref_count(__dec_obj141, (void*)0, (void*)0, 0,0, (void*)0, "sWStringNode_clone", 7, 1664);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->value!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj142=result->value,
        result->value=(int* )come_increment_ref_count((int* )come_memdup(self->value, "sWStringNode_clone", 9, 1666, "int* "), "sWStringNode_clone", 9, 1668);
        __dec_obj142 = come_decrement_ref_count(__dec_obj142, (void*)0, (void*)0, 0,0, (void*)0, "sWStringNode_clone", 9, 1667);
    }
        __result_obj__0 = result;
    come_call_finalizer(sWStringNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sWStringNode_clone}", 10, 1669);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sMapNode* sMapNode_clone(struct sMapNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sMapNode_clone"; neo_current_frame = &fr;
    struct sMapNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sMapNode*  result  ;
    char*  __dec_obj143  ;
    struct list$1sNode$ph* __dec_obj144;
    struct list$1sNode$ph* __dec_obj145;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sMapNode* )come_increment_ref_count((struct sMapNode *)come_calloc(1, sizeof(struct sMapNode )*(1), "sMapNode_clone", 5, 1723, "struct sMapNode* "), "sMapNode_clone", 5, 1724);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj143=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sMapNode_clone", 7, 1725, "char* "), "sMapNode_clone", 7, 1727);
        __dec_obj143 = come_decrement_ref_count(__dec_obj143, (void*)0, (void*)0, 0,0, (void*)0, "sMapNode_clone", 7, 1726);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->map_key_elements!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj144=result->map_key_elements,
        result->map_key_elements=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->map_key_elements), "sMapNode_clone", 9, 1729);
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj144,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sMapNode_clone", 9, 1728);
    }
    if(self!=((void*)0)&&self->map_elements!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj145=result->map_elements,
        result->map_elements=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->map_elements), "sMapNode_clone", 10, 1731);
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj145,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sMapNode_clone", 10, 1730);
    }
        __result_obj__0 = result;
    come_call_finalizer(sMapNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sMapNode_clone}", 11, 1732);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sListNode* sListNode_clone(struct sListNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sListNode_clone"; neo_current_frame = &fr;
    struct sListNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sListNode*  result  ;
    char*  __dec_obj146  ;
    struct list$1sNode$ph* __dec_obj147;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sListNode* )come_increment_ref_count((struct sListNode *)come_calloc(1, sizeof(struct sListNode )*(1), "sListNode_clone", 5, 1779, "struct sListNode* "), "sListNode_clone", 5, 1780);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj146=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sListNode_clone", 7, 1781, "char* "), "sListNode_clone", 7, 1783);
        __dec_obj146 = come_decrement_ref_count(__dec_obj146, (void*)0, (void*)0, 0,0, (void*)0, "sListNode_clone", 7, 1782);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->list_elements!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj147=result->list_elements,
        result->list_elements=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->list_elements), "sListNode_clone", 9, 1785);
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj147,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sListNode_clone", 9, 1784);
    }
        __result_obj__0 = result;
    come_call_finalizer(sListNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sListNode_clone}", 10, 1786);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sNode* parse_tuple(struct sInfo*  info  , _Bool named_tuple)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "parse_tuple"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1tuple2$2char$phsNode$ph$ph* tuple_elements;
    char* p;
    char*  name  ;
    char*  __dec_obj148  ;
    _Bool no_comma;
    struct sNode* node;
    struct sNode* __dec_obj149;
    void* __right_value2 = (void*)0;
    struct sNode* _inf_value16;
    struct sTupleNode* _inf_obj_value16;
    struct sNode* __result_obj__0;
    memset(&name, 0, sizeof(name));
    tuple_elements=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "10str.nc", 2632, 1815, "struct list$1tuple2$2char$phsNode$ph$ph*"), "10str.nc", 2632, 1816)), "10str.nc", 2632, 1817);
    while((_Bool)1) {
        p=info->p->p;
        if(named_tuple) {
            __right_value0 = (void*)0;
            __dec_obj148=name,
            name=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "10str.nc", 2638, 1819);
            __dec_obj148 = come_decrement_ref_count(__dec_obj148, (void*)0, (void*)0, 0,0, (void*)0, "10str.nc", 2638, 1818);
            expected_next_character(58,info);
        }
        no_comma=info->no_comma;
        info->no_comma=(_Bool)1;
        __right_value0 = (void*)0;
        node=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "10str.nc", 2646, 1820);
        __right_value0 = (void*)0;
        __dec_obj149=node,
        node=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node, "10str.nc", 2647, 1821),info), "10str.nc", 2647, 1823);
        (__dec_obj149 ? __dec_obj149 = come_decrement_ref_count(__dec_obj149, ((struct sNode*)__dec_obj149)->finalize, ((struct sNode*)__dec_obj149)->_protocol_obj, 0,0, (void*)0, "10str.nc", 2647, 1822) :0);
        info->no_comma=no_comma;
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        list$1tuple2$2char$phsNode$ph$ph_push_back(tuple_elements,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "10str.nc", 2651, 1839, "struct tuple2$2char$phsNode$ph"), "10str.nc", 2651, 1840),(char* )come_increment_ref_count((char* )come_memdup(name, "10str.nc", 2651, 1838, "char* "), "10str.nc", 2651, 1841),(struct sNode*)come_increment_ref_count(node, "10str.nc", 2651, 1842)), "10str.nc", 2651, 1843));
        if(span$1char$p_operator_derefference(info->p)==44) {
            info->p->p++;
            skip_spaces_and_lf(info);
        }
        else if(span$1char$p_operator_derefference(info->p)==41) {
            info->p->p++;
            skip_spaces_and_lf(info);
            (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "10str.nc", 2660, 1844));
            ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "10str.nc", 2660, 1845):(void*)0);
            break;
        }
        else {
            err_msg(info,"invalid character in tuple expression (%c)",span$1char$p_operator_derefference(info->p));
            exit(2);
        }
        (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "10str.nc", 2668, 1846));
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "10str.nc", 2668, 1847):(void*)0);
    }
        __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    _inf_value16=(struct sNode*)come_calloc(1, sizeof(struct sNode), "10str.nc", 2668, 1851, "struct sNode");
    _inf_obj_value16=(struct sTupleNode*)come_increment_ref_count(((struct sTupleNode*)(__right_value1=sTupleNode_initialize((struct sTupleNode* )come_increment_ref_count((struct sTupleNode *)come_calloc(1, sizeof(struct sTupleNode )*(1), "10str.nc", 2668, 1848, "struct sTupleNode* "), "10str.nc", 2668, 1849),(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(tuple_elements, "10str.nc", 2668, 1850),info))), "10str.nc", 2668, 1852);
    _inf_value16->_protocol_obj=_inf_obj_value16;
    _inf_value16->finalize=(void*)sTupleNode_finalize;
    _inf_value16->clone=(void*)sTupleNode_clone;
    _inf_value16->compile=(void*)sTupleNode_compile;
    _inf_value16->sline=(void*)sNodeBase_sline;
    _inf_value16->sline_real=(void*)sNodeBase_sline_real;
    _inf_value16->sname=(void*)sNodeBase_sname;
    _inf_value16->terminated=(void*)sNodeBase_terminated;
    _inf_value16->kind=(void*)sTupleNode_kind;
    _inf_value16->left_value=(void*)sNodeBase_left_value;
    __right_value2 = (void*)0;
    __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value16)), "10str.nc", 2668, 1885);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, tuple_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 2668, 1886);
    come_call_finalizer(sTupleNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "10str.nc}", 2668, 1887);
    ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "10str.nc", 2668, 1888):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "10str.nc", 2668, 1889):(void*)0);
    return __result_obj__0;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_push_back(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsNode$ph$ph_push_back"; neo_current_frame = &fr;
    struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1tuple2$2char$phsNode$ph$ph* litem;
    struct tuple2$2char$phsNode$ph* __dec_obj150;
    struct list_item$1tuple2$2char$phsNode$ph$ph* litem_134;
    struct tuple2$2char$phsNode$ph* __dec_obj151;
    struct list_item$1tuple2$2char$phsNode$ph$ph* litem_135;
    struct tuple2$2char$phsNode$ph* __dec_obj152;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1613, 1824);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/neo-c.h", 1617, 1825, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))), "/usr/local/include/neo-c.h", 1617, 1826);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj150=litem->item,
        litem->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1621, 1828);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj150,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1621, 1827);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_134=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/neo-c.h", 1627, 1829, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))), "/usr/local/include/neo-c.h", 1627, 1830);
        litem_134->prev=self->head;
        litem_134->next=((void*)0);
        __dec_obj151=litem_134->item,
        litem_134->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1631, 1832);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj151,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1631, 1831);
        self->tail=litem_134;
        self->head->next=litem_134;
    }
    else {
        __right_value0 = (void*)0;
        litem_135=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/neo-c.h", 1637, 1833, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))), "/usr/local/include/neo-c.h", 1637, 1834);
        litem_135->prev=self->tail;
        litem_135->next=((void*)0);
        __dec_obj152=litem_135->item,
        litem_135->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1641, 1836);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj152,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1641, 1835);
        self->tail->next=litem_135;
        self->tail=litem_135;
    }
    self->len++;
        __result_obj__0 = self;
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1649, 1837);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sTupleNode* sTupleNode_clone(struct sTupleNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sTupleNode_clone"; neo_current_frame = &fr;
    struct sTupleNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sTupleNode*  result  ;
    char*  __dec_obj153  ;
    struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj156;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sTupleNode* )come_increment_ref_count((struct sTupleNode *)come_calloc(1, sizeof(struct sTupleNode )*(1), "sTupleNode_clone", 5, 1853, "struct sTupleNode* "), "sTupleNode_clone", 5, 1854);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj153=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sTupleNode_clone", 7, 1855, "char* "), "sTupleNode_clone", 7, 1857);
        __dec_obj153 = come_decrement_ref_count(__dec_obj153, (void*)0, (void*)0, 0,0, (void*)0, "sTupleNode_clone", 7, 1856);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->tuple_elements!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj156=result->tuple_elements,
        result->tuple_elements=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_clone(self->tuple_elements), "sTupleNode_clone", 9, 1883);
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph_finalize, __dec_obj156,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sTupleNode_clone", 9, 1882);
    }
        __result_obj__0 = result;
    come_call_finalizer(sTupleNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sTupleNode_clone}", 10, 1884);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_clone(struct list$1tuple2$2char$phsNode$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsNode$ph$ph$p_clone"; neo_current_frame = &fr;
    struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1tuple2$2char$phsNode$ph$ph* result;
    struct list_item$1tuple2$2char$phsNode$ph$ph* it;
    if(self==((void*)0)) {
                __result_obj__0 = (struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((void*)0), "/usr/local/include/neo-c.h", 1509, 1858);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1509, 1859);
        return __result_obj__0;
    }
    result=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/neo-c.h", 1511, 1860, "struct list$1tuple2$2char$phsNode$ph$ph*"), "/usr/local/include/neo-c.h", 1511, 1861)), "/usr/local/include/neo-c.h", 1511, 1862);
    it=self->head;
    while(it!=((void*)0)) {
        if(1) {
            __right_value0 = (void*)0;
            list$1tuple2$2char$phsNode$ph$ph_add(result,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_clone(it->item), "/usr/local/include/neo-c.h", 1516, 1877));
        }
        else {
            __right_value0 = (void*)0;
            list$1tuple2$2char$phsNode$ph$ph_add(result,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_clone(it->item), "/usr/local/include/neo-c.h", 1519, 1878));
        }
        it=it->next;
    }
        __result_obj__0 = (struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(result, "/usr/local/include/neo-c.h", 1525, 1879);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1525, 1880);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1525, 1881);
    return __result_obj__0;
}

static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_clone(struct tuple2$2char$phsNode$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2char$phsNode$ph_clone"; neo_current_frame = &fr;
    struct tuple2$2char$phsNode$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct tuple2$2char$phsNode$ph* result;
    char*  __dec_obj154  ;
    struct sNode* __dec_obj155;
    if(self==(void*)0) {
                __result_obj__0 = (struct tuple2$2char$phsNode$ph*)come_increment_ref_count((void*)0, "tuple2$2char$phsNode$ph_clone", 4, 1863);
        neo_current_frame = fr.prev;
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "tuple2$2char$phsNode$ph_clone}", 4, 1864);
        return __result_obj__0;
    }
    result=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "tuple2$2char$phsNode$ph_clone", 5, 1865, "struct tuple2$2char$phsNode$ph*"), "tuple2$2char$phsNode$ph_clone", 5, 1866);
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj154=result->v1,
        result->v1=(char* )come_increment_ref_count((char* )come_memdup(self->v1, "tuple2$2char$phsNode$ph_clone", 6, 1867, "char* "), "tuple2$2char$phsNode$ph_clone", 6, 1869);
        __dec_obj154 = come_decrement_ref_count(__dec_obj154, (void*)0, (void*)0, 0,0, (void*)0, "tuple2$2char$phsNode$ph_clone", 6, 1868);
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj155=result->v2,
        result->v2=(struct sNode*)come_increment_ref_count(sNode_clone(self->v2), "tuple2$2char$phsNode$ph_clone", 7, 1871);
        (__dec_obj155 ? __dec_obj155 = come_decrement_ref_count(__dec_obj155, ((struct sNode*)__dec_obj155)->finalize, ((struct sNode*)__dec_obj155)->_protocol_obj, 0,0, (void*)0, "tuple2$2char$phsNode$ph_clone", 7, 1870) :0);
    }
        __result_obj__0 = (struct tuple2$2char$phsNode$ph*)come_increment_ref_count(result, "tuple2$2char$phsNode$ph_clone", 8, 1872);
    come_call_finalizer(tuple2$2char$phsNode$ph_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "tuple2$2char$phsNode$ph_clone}", 8, 1875);
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "tuple2$2char$phsNode$ph_clone}", 8, 1876);
    return __result_obj__0;
}

static void tuple2$2char$phsNode$ph_finalize(struct tuple2$2char$phsNode$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2char$phsNode$ph_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, (void*)0, "tuple2$2char$phsNode$ph_finalize", 2, 1873));
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        ((self->v2) ? self->v2 = come_decrement_ref_count(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0,(void*)0, "tuple2$2char$phsNode$ph_finalize", 3, 1874):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sNode* parse_vector(struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "parse_vector"; neo_current_frame = &fr;
    char* p;
    int sline_real;
    _Bool no_comma;
    void* __right_value0 = (void*)0;
    struct sNode* node;
    char* p2;
    void* __right_value1 = (void*)0;
    struct buffer*  first_element_source  ;
    struct list$1sNode$ph* list_elements;
    struct list$1sNode$ph* map_keys;
    struct list$1sNode$ph* map_elements;
    _Bool no_comma_136;
    struct sNode* node2;
    struct sNode* _inf_value17;
    struct sVectorNode* _inf_obj_value17;
    void* __right_value2 = (void*)0;
    struct sNode* __result_obj__0;
    p=info->p->p;
    sline_real=info->sline;
    no_comma=info->no_comma;
    info->no_comma=(_Bool)1;
    node=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "10str.nc", 2680, 1890);
    info->no_comma=no_comma;
    p2=info->p->p;
    __right_value0 = (void*)0;
    first_element_source=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "10str.nc", 2686, 1891, "struct buffer* "), "10str.nc", 2686, 1892)), "10str.nc", 2686, 1893);
    buffer_append(first_element_source,p,p2-p);
    buffer_append_char(first_element_source,0);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    list_elements=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "10str.nc", 2691, 1894, "struct list$1sNode$ph*"), "10str.nc", 2691, 1895)), "10str.nc", 2691, 1896);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    map_keys=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "10str.nc", 2693, 1897, "struct list$1sNode$ph*"), "10str.nc", 2693, 1898)), "10str.nc", 2693, 1899);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    map_elements=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "10str.nc", 2694, 1900, "struct list$1sNode$ph*"), "10str.nc", 2694, 1901)), "10str.nc", 2694, 1902);
    if(span$1char$p_operator_derefference(info->p)==93) {
        info->p->p++;
        skip_spaces_and_lf(info);
        list$1sNode$ph_push_back(list_elements,(struct sNode*)come_increment_ref_count(node, "10str.nc", 2701, 1903));
    }
    else if(span$1char$p_operator_derefference(info->p)==44) {
        info->p->p++;
        skip_spaces_and_lf(info);
        list$1sNode$ph_push_back(list_elements,(struct sNode*)come_increment_ref_count(node, "10str.nc", 2707, 1904));
        while((_Bool)1) {
            no_comma_136=info->no_comma;
            info->no_comma=(_Bool)1;
            __right_value0 = (void*)0;
            node2=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "10str.nc", 2713, 1905);
            info->no_comma=no_comma_136;
            list$1sNode$ph_push_back(list_elements,(struct sNode*)come_increment_ref_count(node2, "10str.nc", 2717, 1906));
            if(span$1char$p_operator_derefference(info->p)==0) {
                err_msg(info,"invalid source end");
                exit(2);
            }
            else if(span$1char$p_operator_derefference(info->p)==44) {
                info->p->p++;
                skip_spaces_and_lf(info);
            }
            else if(span$1char$p_operator_derefference(info->p)==93) {
                info->p->p++;
                skip_spaces_and_lf(info);
                ((node2) ? node2 = come_decrement_ref_count(node2, ((struct sNode*)node2)->finalize, ((struct sNode*)node2)->_protocol_obj, 0, 0,(void*)0, "10str.nc", 2730, 1907):(void*)0);
                break;
            }
            else {
                err_msg(info,"invalid character(4)(%c)",span$1char$p_operator_derefference(info->p));
                exit(2);
            }
            ((node2) ? node2 = come_decrement_ref_count(node2, ((struct sNode*)node2)->finalize, ((struct sNode*)node2)->_protocol_obj, 0, 0,(void*)0, "10str.nc", 2737, 1908):(void*)0);
        }
    }
    else {
        err_msg(info,"invalid character(5)(%c)",span$1char$p_operator_derefference(info->p));
        exit(2);
    }
    if(list$1sNode$ph_length(list_elements)>0) {
        info->sline_real=sline_real;
                __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        _inf_value17=(struct sNode*)come_calloc(1, sizeof(struct sNode), "10str.nc", 2745, 1912, "struct sNode");
        _inf_obj_value17=(struct sVectorNode*)come_increment_ref_count(((struct sVectorNode*)(__right_value1=sVectorNode_initialize((struct sVectorNode* )come_increment_ref_count((struct sVectorNode *)come_calloc(1, sizeof(struct sVectorNode )*(1), "10str.nc", 2745, 1909, "struct sVectorNode* "), "10str.nc", 2745, 1910),(struct list$1sNode$ph*)come_increment_ref_count(list_elements, "10str.nc", 2745, 1911),info))), "10str.nc", 2745, 1913);
        _inf_value17->_protocol_obj=_inf_obj_value17;
        _inf_value17->finalize=(void*)sVectorNode_finalize;
        _inf_value17->clone=(void*)sVectorNode_clone;
        _inf_value17->compile=(void*)sVectorNode_compile;
        _inf_value17->sline=(void*)sNodeBase_sline;
        _inf_value17->sline_real=(void*)sNodeBase_sline_real;
        _inf_value17->sname=(void*)sNodeBase_sname;
        _inf_value17->terminated=(void*)sNodeBase_terminated;
        _inf_value17->kind=(void*)sVectorNode_kind;
        _inf_value17->left_value=(void*)sNodeBase_left_value;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value17)), "10str.nc", 2745, 1922);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "10str.nc", 2745, 1923):(void*)0);
        come_call_finalizer(buffer_finalize, first_element_source, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 2745, 1924);
        come_call_finalizer(list$1sNode$ph$p_finalize, list_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 2745, 1925);
        come_call_finalizer(list$1sNode$ph$p_finalize, map_keys, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 2745, 1926);
        come_call_finalizer(list$1sNode$ph$p_finalize, map_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 2745, 1927);
        come_call_finalizer(sVectorNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "10str.nc}", 2745, 1928);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "10str.nc", 2745, 1929):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "10str.nc", 2745, 1930):(void*)0);
        return __result_obj__0;
    }
    err_msg(info,"invalid vector");
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((void*)0), "10str.nc", 2750, 1931);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "10str.nc", 2750, 1932):(void*)0);
    come_call_finalizer(buffer_finalize, first_element_source, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 2750, 1933);
    come_call_finalizer(list$1sNode$ph$p_finalize, list_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 2750, 1934);
    come_call_finalizer(list$1sNode$ph$p_finalize, map_keys, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 2750, 1935);
    come_call_finalizer(list$1sNode$ph$p_finalize, map_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10str.nc}", 2750, 1936);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "10str.nc", 2750, 1937):(void*)0);
    return __result_obj__0;
}

static struct sVectorNode* sVectorNode_clone(struct sVectorNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sVectorNode_clone"; neo_current_frame = &fr;
    struct sVectorNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sVectorNode*  result  ;
    char*  __dec_obj157  ;
    struct list$1sNode$ph* __dec_obj158;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sVectorNode* )come_increment_ref_count((struct sVectorNode *)come_calloc(1, sizeof(struct sVectorNode )*(1), "sVectorNode_clone", 5, 1914, "struct sVectorNode* "), "sVectorNode_clone", 5, 1915);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj157=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sVectorNode_clone", 7, 1916, "char* "), "sVectorNode_clone", 7, 1918);
        __dec_obj157 = come_decrement_ref_count(__dec_obj157, (void*)0, (void*)0, 0,0, (void*)0, "sVectorNode_clone", 7, 1917);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->list_elements!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj158=result->list_elements,
        result->list_elements=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->list_elements), "sVectorNode_clone", 9, 1920);
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj158,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sVectorNode_clone", 9, 1919);
    }
        __result_obj__0 = result;
    come_call_finalizer(sVectorNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sVectorNode_clone}", 10, 1921);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

