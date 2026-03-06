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

struct pollfd
{
    int fd;
    short int events;
    short int revents;
};

struct sReturnNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sNode* value;
};

struct sCSourceNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    char*  contents  ;
};

struct sInlineAssembler
{
    int sline;
    char*  sname  ;
    int sline_real;
    char*  source  ;
    _Bool volatile_;
};

struct sLineNode
{
    int sline;
    char*  sname  ;
    int sline_real;
};

struct sSNameNode
{
    int sline;
    char*  sname  ;
    int sline_real;
};

struct sFuncNode
{
    int sline;
    char*  sname  ;
    int sline_real;
};

struct sCallerFuncNode
{
    int sline;
    char*  sname  ;
    int sline_real;
};

struct sCallerLineNode
{
    int sline;
    char*  sname  ;
    int sline_real;
};

struct sCallerSNameNode
{
    int sline;
    char*  sname  ;
    int sline_real;
};

struct sFunCallNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    char*  fun_name  ;
    struct list$1tuple2$2char$phsNode$ph$ph* params;
    struct list$1sType$ph* method_generics_types;
    struct buffer*  method_block  ;
    int method_block_sline;
};

struct span$1buffer$p
{
    char* memory;
    struct buffer*  p  ;
    unsigned long  len  ;
    _Bool local;
    _Bool heap;
    _Bool global;
    void* stacktop;
};

struct sComeCallNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct buffer*  come_block  ;
    int come_block_sline;
};

struct sComeJoinNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sNode* node;
};

struct list_item$1sBlock$ph
{
    struct sBlock*  item  ;
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
    char*  sname  ;
    int sline_real;
    struct list$1sNode$ph* vars;
    struct list$1sBlock$ph* blocks;
    struct sBlock*  else_block  ;
    int time_out;
};

struct sLambdaCall
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sNode* node;
    struct list$1tuple2$2char$phsNode$ph$ph* params;
};

struct sVarArgTypeName
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sType*  type  ;
};

struct sInnerAttribute
{
    int sline;
    char*  sname  ;
    int sline_real;
    char*  attr  ;
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
char*  make_type_name_string(struct sType*  type  , struct sInfo*  info  , _Bool no_static, _Bool cast_type, _Bool typedef_extended, _Bool nullchecker);
char*  make_come_type_name_string(struct sType*  type  , struct sInfo*  info  );
char*  make_come_define_var(struct sType*  type  , char* name, struct sInfo*  info  );
struct sType*  get_no_solved_type(struct sType*  type  );
struct sType*  get_no_solved_type2(struct sType*  type  );
char*  header_function(struct sFun*  fun  , struct sInfo*  info  );
_Bool output_source_file(struct sInfo*  info  );
void show_type(struct sType*  type  , struct sInfo*  info  );
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
struct sNode* top_level_v99(char* buf, char* head, int head_sline, struct sInfo*  info  );
struct sNode* expression_node_v99(struct sInfo*  info  );
struct sNode* expression_node_v97(struct sInfo*  info  );
int transpile(struct sInfo*  info  );
void parse_sharp_v5(struct sInfo*  info  );
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
int poll(struct pollfd*  __fds  , unsigned long  int  __nfds  , int __timeout);
int ppoll(struct pollfd*  __fds  , unsigned long  int  __nfds  , const struct timespec*  __timeout  , const struct anonymous_typeX7*  __ss  );
struct sReturnNode* sReturnNode_initialize(struct sReturnNode* self, struct sNode* value, struct sInfo*  info  );
char*  sReturnNode_kind(struct sReturnNode* self);
_Bool sReturnNode_compile(struct sReturnNode* self, struct sInfo*  info  );
static void sNodeBase_finalize(struct sNodeBase* self);
static void sReturnNode_finalize(struct sReturnNode* self);
static struct sType*  sType_clone(struct sType*  self  );
static void sType_finalize(struct sType*  self  );
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
static struct sVar*  list$1sVar$ph_begin(struct list$1sVar$ph* self);
static _Bool list$1sVar$ph_end(struct list$1sVar$ph* self);
static struct sVar*  list$1sVar$ph_next(struct list$1sVar$ph* self);
static void list$1sVar$ph_finalize(struct list$1sVar$ph* self);
static void list_item$1sVar$ph$p_finalize(struct list_item$1sVar$ph* self);
static void sVar_finalize(struct sVar*  self  );
static void list$1sVar$ph$p_finalize(struct list$1sVar$ph* self);
static struct sFun*  map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char*  key  );
static void sFun_finalize(struct sFun*  self  );
static void sBlock_finalize(struct sBlock*  self  );
static struct sFun*  map$2char$phsFun$ph_operator_load_element(struct map$2char$phsFun$ph* self, char*  key  );
static void CVALUE_finalize(struct CVALUE*  self  );
struct sNode* create_return_node(struct sNode* value, struct sInfo*  info  );
static struct sReturnNode* sReturnNode_clone(struct sReturnNode* self);
struct sCSourceNode* sCSourceNode_initialize(struct sCSourceNode* self, char*  contents  , struct sInfo*  info  );
char*  sCSourceNode_kind(struct sCSourceNode* self);
_Bool sCSourceNode_compile(struct sCSourceNode* self, struct sInfo*  info  );
static void sCSourceNode_finalize(struct sCSourceNode* self);
struct sInlineAssembler* sInlineAssembler_initialize(struct sInlineAssembler* self, char*  source  , _Bool volatile_, struct sInfo*  info  );
char*  sInlineAssembler_kind(struct sInlineAssembler* self);
_Bool sInlineAssembler_compile(struct sInlineAssembler* self, struct sInfo*  info  );
static void sInlineAssembler_finalize(struct sInlineAssembler* self);
static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE*  item  );
struct sLineNode* sLineNode_initialize(struct sLineNode* self, struct sInfo*  info  );
char*  sLineNode_kind(struct sLineNode* self);
_Bool sLineNode_compile(struct sLineNode* self, struct sInfo*  info  );
static void sLineNode_finalize(struct sLineNode* self);
struct sSNameNode* sSNameNode_initialize(struct sSNameNode* self, struct sInfo*  info  );
char*  sSNameNode_kind(struct sSNameNode* self);
_Bool sSNameNode_compile(struct sSNameNode* self, struct sInfo*  info  );
static void sSNameNode_finalize(struct sSNameNode* self);
struct sFuncNode* sFuncNode_initialize(struct sFuncNode* self, struct sInfo*  info  );
char*  sFuncNode_kind(struct sFuncNode* self);
_Bool sFuncNode_compile(struct sFuncNode* self, struct sInfo*  info  );
static void sFuncNode_finalize(struct sFuncNode* self);
struct sCallerFuncNode* sCallerFuncNode_initialize(struct sCallerFuncNode* self, struct sInfo*  info  );
char*  sCallerFuncNode_kind(struct sCallerFuncNode* self);
_Bool sCallerFuncNode_compile(struct sCallerFuncNode* self, struct sInfo*  info  );
static void sCallerFuncNode_finalize(struct sCallerFuncNode* self);
struct sCallerLineNode* sCallerLineNode_initialize(struct sCallerLineNode* self, struct sInfo*  info  );
_Bool sCallerLineNode_compile(struct sCallerLineNode* self, struct sInfo*  info  );
char*  sCallerLineNode_kind(struct sCallerLineNode* self);
static void sCallerLineNode_finalize(struct sCallerLineNode* self);
struct sCallerSNameNode* sCallerSNameNode_initialize(struct sCallerSNameNode* self, struct sInfo*  info  );
_Bool sCallerSNameNode_compile(struct sCallerSNameNode* self, struct sInfo*  info  );
char*  sCallerSNameNode_kind(struct sCallerSNameNode* self);
static void sCallerSNameNode_finalize(struct sCallerSNameNode* self);
struct sFunCallNode* sFunCallNode_initialize(struct sFunCallNode* self, char* fun_name, struct list$1tuple2$2char$phsNode$ph$ph* params, struct list$1sType$ph* method_generics_types, struct buffer*  method_block  , int method_block_sline, struct sInfo*  info  );
char*  sFunCallNode_kind(struct sFunCallNode* self);
_Bool sFunCallNode_terminated(struct sFunCallNode* self);
_Bool sFunCallNode_compile(struct sFunCallNode* self, struct sInfo*  info  );
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
static struct sType*  list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position);
static struct sType*  list$1sType$ph_operator_load_element(struct list$1sType$ph* self, int position);
static struct CVALUE*  list$1CVALUE$ph_begin(struct list$1CVALUE$ph* self);
static _Bool list$1CVALUE$ph_end(struct list$1CVALUE$ph* self);
static struct CVALUE*  list$1CVALUE$ph_next(struct list$1CVALUE$ph* self);
static int list$1CVALUE$ph_length(struct list$1CVALUE$ph* self);
static struct sGenericsFun*  map$2char$phsGenericsFun$ph_at(struct map$2char$phsGenericsFun$ph* self, char*  key  , struct sGenericsFun*  default_value  , _Bool by_pointer);
static void sGenericsFun_finalize(struct sGenericsFun*  self  );
static int list$1char$ph_length(struct list$1char$ph* self);
static void tuple2$2char$phsGenericsFun$p$p_finalize(struct tuple2$2char$phsGenericsFun$p* self);
static struct sFun*  map$2char$phsFun$ph_at(struct map$2char$phsFun$ph* self, char*  key  , struct sFun*  default_value  , _Bool by_pointer);
static struct CVALUE*  list$1CVALUE$ph$p_operator_load_element(struct list$1CVALUE$ph* self, int position);
static struct CVALUE*  list$1CVALUE$ph_operator_load_element(struct list$1CVALUE$ph* self, int position);
static void list$1sType$ph_operator_store_element(struct list$1sType$ph* self, int position, struct sType*  item  );
static struct list$1sType$ph* list$1sType$ph_replace(struct list$1sType$ph* self, int position, struct sType*  item  );
static struct list$1sType$ph* list$1sType$ph_push_back(struct list$1sType$ph* self, struct sType*  item  );
static struct sType*  list$1sType$ph_begin(struct list$1sType$ph* self);
static _Bool list$1sType$ph_end(struct list$1sType$ph* self);
static struct sType*  list$1sType$ph_next(struct list$1sType$ph* self);
static struct list$1CVALUE$ph* list$1CVALUE$ph_add(struct list$1CVALUE$ph* self, struct CVALUE*  item  );
static struct map$2char$phsFun$ph* map$2char$phsFun$ph_remove(struct map$2char$phsFun$ph* self, char*  key  , _Bool by_pointer);
static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char*  item  , _Bool by_pointer);
static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail);
static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self);
static char*  list$1char$ph_begin(struct list$1char$ph* self);
static _Bool list$1char$ph_end(struct list$1char$ph* self);
static char*  list$1char$ph_next(struct list$1char$ph* self);
static struct list$1CVALUE$ph* list$1CVALUE$ph_replace(struct list$1CVALUE$ph* self, int position, struct CVALUE*  item  );
static char*  list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position);
static char*  list$1char$ph_operator_load_element(struct list$1char$ph* self, int position);
static struct span$1buffer$p* span$1buffer$p_initialize(struct span$1buffer$p* self, void* head, unsigned long  len  , _Bool local, _Bool heap, _Bool global, void* stacktop);
static void span$1buffer$p$p_finalize(struct span$1buffer$p* self);
static void span$1char$p$p_finalize(struct span$1char$p* self);
static void sCurrentNode_finalize(struct sCurrentNode* self);
static struct sCurrentNode* sCurrentNode_clone(struct sCurrentNode* self);
static struct sClass*  map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char*  key  );
static void sClass_finalize(struct sClass*  self  );
static void list$1tuple2$2char$phsType$ph$ph$p_finalize(struct list$1tuple2$2char$phsType$ph$ph* self);
static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self);
static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self);
static struct sClass*  map$2char$phsClass$ph_operator_load_element(struct map$2char$phsClass$ph* self, char*  key  );
struct sComeCallNode* sComeCallNode_initialize(struct sComeCallNode* self, struct buffer*  come_block  , int come_block_sline, struct sInfo*  info  );
char*  sComeCallNode_kind(struct sComeCallNode* self);
_Bool sComeCallNode_terminated(struct sComeCallNode* self);
_Bool sComeCallNode_compile(struct sComeCallNode* self, struct sInfo*  info  );
static void sComeCallNode_finalize(struct sComeCallNode* self);
static struct sType*  map$2char$phsType$ph_at(struct map$2char$phsType$ph* self, char*  key  , struct sType*  default_value  , _Bool by_pointer);
struct sComeJoinNode* sComeJoinNode_initialize(struct sComeJoinNode* self, struct sNode* node, struct sInfo*  info  );
char*  sComeJoinNode_kind(struct sComeJoinNode* self);
_Bool sComeJoinNode_terminated(struct sComeJoinNode* self);
_Bool sComeJoinNode_compile(struct sComeJoinNode* self, struct sInfo*  info  );
static void sComeJoinNode_finalize(struct sComeJoinNode* self);
struct sComePollNode* sComePollNode_initialize(struct sComePollNode* self, struct list$1sNode$ph* vars, struct list$1sBlock$ph* blocks, struct sBlock*  else_block  , int time_out, struct sInfo*  info  );
char*  sComePollNode_kind(struct sComePollNode* self);
_Bool sComePollNode_terminated(struct sComePollNode* self);
_Bool sComePollNode_compile(struct sComePollNode* self, struct sInfo*  info  );
static void list$1sBlock$ph_finalize(struct list$1sBlock$ph* self);
static void list_item$1sBlock$ph$p_finalize(struct list_item$1sBlock$ph* self);
static void sComePollNode_finalize(struct sComePollNode* self);
static void list$1sBlock$ph$p_finalize(struct list$1sBlock$ph* self);
static int list$1sNode$ph_length(struct list$1sNode$ph* self);
static struct sNode* list$1sNode$ph_begin(struct list$1sNode$ph* self);
static _Bool list$1sNode$ph_end(struct list$1sNode$ph* self);
static struct sNode* list$1sNode$ph_next(struct list$1sNode$ph* self);
static struct sBlock*  list$1sBlock$ph$p_operator_load_element(struct list$1sBlock$ph* self, int position);
static struct sBlock*  list$1sBlock$ph_operator_load_element(struct list$1sBlock$ph* self, int position);
struct sLambdaCall* sLambdaCall_initialize(struct sLambdaCall* self, struct sNode* node, struct list$1tuple2$2char$phsNode$ph$ph* params, struct sInfo*  info  );
char*  sLambdaCall_kind(struct sLambdaCall* self);
_Bool sLambdaCall_compile(struct sLambdaCall* self, struct sInfo*  info  );
static void sLambdaCall_finalize(struct sLambdaCall* self);
struct sVarArgTypeName* sVarArgTypeName_initialize(struct sVarArgTypeName* self, struct sType*  type  , struct sInfo*  info  );
char*  sVarArgTypeName_kind(struct sVarArgTypeName* self);
_Bool sVarArgTypeName_compile(struct sVarArgTypeName* self, struct sInfo*  info  );
static void sVarArgTypeName_finalize(struct sVarArgTypeName* self);
struct sInnerAttribute* sInnerAttribute_initialize(struct sInnerAttribute* self, char*  attr  , struct sInfo*  info  );
char*  sInnerAttribute_kind(struct sInnerAttribute* self);
_Bool sInnerAttribute_compile(struct sInnerAttribute* self, struct sInfo*  info  );
static void sInnerAttribute_finalize(struct sInnerAttribute* self);
struct sNode* parse_function_call(char* fun_name, struct sInfo*  info  , _Bool come_);
static void tuple3$3sType$phchar$ph_Bool$$p_finalize(struct tuple3$3sType$phchar$ph_Bool$* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_push_back(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item);
static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_initialize(struct tuple2$2char$phsNode$ph* self, char*  v1  , struct sNode* v2);
static struct sFunCallNode* sFunCallNode_clone(struct sFunCallNode* self);
struct sNode* create_funcall(const char* fun_name, struct list$1tuple2$2char$phsNode$ph$ph* params, struct buffer*  method_block  , int method_block_sline, struct list$1sType$ph* method_generics_types, struct sInfo*  info  , _Bool arrow_);
struct sNode* expression_node_v1(struct sInfo*  info  );
char*  parse_inner_attribute(struct sInfo*  info  );
struct sNode* expression_node_v98(struct sInfo*  info  );
static struct sVar*  map$2char$phsVar$ph$p_operator_load_element(struct map$2char$phsVar$ph* self, char*  key  );
static struct sVar*  map$2char$phsVar$ph_operator_load_element(struct map$2char$phsVar$ph* self, char*  key  );
static struct sInnerAttribute* sInnerAttribute_clone(struct sInnerAttribute* self);
static struct sCSourceNode* sCSourceNode_clone(struct sCSourceNode* self);
static struct sComeCallNode* sComeCallNode_clone(struct sComeCallNode* self);
static struct sComeJoinNode* sComeJoinNode_clone(struct sComeJoinNode* self);
static struct list$1sBlock$ph* list$1sBlock$ph_initialize(struct list$1sBlock$ph* self);
static struct list$1sBlock$ph* list$1sBlock$ph_add(struct list$1sBlock$ph* self, struct sBlock*  item  );
static struct sComePollNode* sComePollNode_clone(struct sComePollNode* self);
static struct list$1sBlock$ph* list$1sBlock$ph$p_clone(struct list$1sBlock$ph* self);
static struct sBlock*  sBlock_clone(struct sBlock*  self  );
static struct list$1sNode$ph* list$1sNode$ph_clone(struct list$1sNode$ph* self);
static struct sVarTable*  sVarTable_clone(struct sVarTable*  self  );
static struct map$2char$phsVar$ph* map$2char$phsVar$ph_clone(struct map$2char$phsVar$ph* self);
static void map$2char$phsVar$ph$p_finalize(struct map$2char$phsVar$ph* self);
static struct map$2char$phsVar$ph* map$2char$phsVar$ph_initialize(struct map$2char$phsVar$ph* self);
static char*  map$2char$phsVar$ph_begin(struct map$2char$phsVar$ph* self);
static _Bool map$2char$phsVar$ph_end(struct map$2char$phsVar$ph* self);
static char*  map$2char$phsVar$ph_next(struct map$2char$phsVar$ph* self);
static struct sVar*  map$2char$phsVar$ph_at(struct map$2char$phsVar$ph* self, char*  key  , struct sVar*  default_value  , _Bool by_pointer);
static struct map$2char$phsVar$ph* map$2char$phsVar$ph_put(struct map$2char$phsVar$ph* self, char*  key  , struct sVar*  item  , _Bool by_pointer);
static void map$2char$phsVar$ph_rehash(struct map$2char$phsVar$ph* self);
static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char*  item  );
static struct sVar*  sVar_clone(struct sVar*  self  );
static void map$2char$phsVar$ph_finalize(struct map$2char$phsVar$ph* self);
static struct sFuncNode* sFuncNode_clone(struct sFuncNode* self);
static struct sLineNode* sLineNode_clone(struct sLineNode* self);
static struct sSNameNode* sSNameNode_clone(struct sSNameNode* self);
static struct sCallerFuncNode* sCallerFuncNode_clone(struct sCallerFuncNode* self);
static struct sCallerLineNode* sCallerLineNode_clone(struct sCallerLineNode* self);
static struct sCallerSNameNode* sCallerSNameNode_clone(struct sCallerSNameNode* self);
static struct sVarArgTypeName* sVarArgTypeName_clone(struct sVarArgTypeName* self);
static struct sInlineAssembler* sInlineAssembler_clone(struct sInlineAssembler* self);
struct sNode* expression_v5(struct sInfo*  info  );
static struct sNode* post_position_operator_of_statment(struct sNode* node, struct sInfo*  info  );
struct sNode* statment(struct sInfo*  info  );
char*  get_none_generics_name(char* class_name);
char*  create_generics_name(struct sType*  generics_type  , struct sInfo*  info  );
char*  create_method_name(struct sType*  obj_type  , _Bool no_pointer_name, const char* fun_name, struct sInfo*  info  , _Bool array_equal_pointer);
char*  create_method_name_original_obj_type(struct sType*  obj_type  , _Bool no_pointer_name, const char* fun_name, struct sInfo*  info  , _Bool array_equal_pointer);
char*  create_non_method_name(struct sType*  obj_type  , _Bool no_pointer_name, const char* fun_name, struct sInfo*  info  , _Bool array_equal_pointer);
char*  create_method_name_using_class(struct sClass*  obj_class  , const char* fun_name, struct sInfo*  info  );
struct sNode* top_level_v1(char* buf, char* head, int head_sline, struct sInfo*  info  );
struct sNode* post_position_operator(struct sNode* node, struct sInfo*  info  );
static struct sLambdaCall* sLambdaCall_clone(struct sLambdaCall* self);
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
struct sReturnNode* sReturnNode_initialize(struct sReturnNode* self, struct sNode* value, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sReturnNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj1;
    struct sReturnNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sReturnNode*)come_increment_ref_count(self, "08call.nc", 11, 1),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "08call.nc}", 11, 3);
    __dec_obj1=self->value,
    self->value=(struct sNode*)come_increment_ref_count(value, "08call.nc", 13, 5);
    (__dec_obj1 ? __dec_obj1 = come_decrement_ref_count(__dec_obj1, ((struct sNode*)__dec_obj1)->finalize, ((struct sNode*)__dec_obj1)->_protocol_obj, 0,0, (void*)0, "08call.nc", 13, 4) :0);
        __result_obj__0 = (struct sReturnNode*)come_increment_ref_count(self, "08call.nc", 16, 6);
    come_call_finalizer(sReturnNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "08call.nc}", 16, 9);
    ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 0,(void*)0, "08call.nc", 16, 10):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sReturnNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "08call.nc}", 16, 11);
    return __result_obj__0;
}

char*  sReturnNode_kind(struct sReturnNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sReturnNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sReturnNode"))), "08call.nc", 18, 12);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "08call.nc", 18, 13));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "08call.nc", 18, 14));
    return __result_obj__0;
}

_Bool sReturnNode_compile(struct sReturnNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sReturnNode_compile"; neo_current_frame = &fr;
    struct sFun*  come_fun  ;
    void* __right_value0 = (void*)0;
    struct sType*  result_type  ;
    struct sType*  result_type2_  ;
    struct sType*  result_type2  ;
    struct sType*  result_type3  ;
    _Bool Value;
    _Bool __result_obj__0;
    struct CVALUE*  come_value  ;
    struct sType*  come_value_type_  ;
    struct sType*  come_value_type  ;
    struct sType*  __dec_obj36  ;
    void* __right_value1 = (void*)0;
    void* __right_value2 = (void*)0;
    char*  type_name  ;
    struct list$1sVar$ph* _o2_saved_1;
    struct sVar*  it  ;
    struct list$1sVar$ph* __dec_obj37;
    _Bool _conditional_value_X0;
    struct sFun*  come_fun_10  ;
    struct list$1sVar$ph* _o2_saved_2;
    struct sVar*  it_11  ;
    struct list$1sVar$ph* __dec_obj38;
    memset(&result_type3, 0, sizeof(result_type3));
    if(self->value) {
        come_fun=info->come_fun;
        add_come_code(info,((char* )(__right_value0=buffer_to_string(info->come_fun->mSourceEnd))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "08call.nc", 26, 15));
        __right_value0 = (void*)0;
        result_type=(struct sType* )come_increment_ref_count(sType_clone(come_fun->mResultType), "08call.nc", 28, 225);
        __right_value0 = (void*)0;
        result_type2_=(struct sType* )come_increment_ref_count(solve_generics(result_type,info->generics_type,info), "08call.nc", 30, 226);
        __right_value0 = (void*)0;
        result_type2=(struct sType* )come_increment_ref_count(solve_method_generics(result_type2_,info), "08call.nc", 31, 227);
        if(result_type2->mNoSolvedGenericsType) {
            result_type3=result_type2->mNoSolvedGenericsType;
        }
        else {
            result_type3=result_type2;
        }
        Value=node_compile(self->value,info);
        if(!Value) {
                        __result_obj__0 = (_Bool)0;
            come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 42, 228);
            come_call_finalizer(sType_finalize, result_type2_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 42, 229);
            come_call_finalizer(sType_finalize, result_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 42, 230);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        __right_value0 = (void*)0;
        come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "08call.nc", 45, 231);
        __right_value0 = (void*)0;
        come_value_type_=(struct sType* )come_increment_ref_count(solve_generics(come_value->type,info->generics_type,info), "08call.nc", 47, 232);
        __right_value0 = (void*)0;
        come_value_type=(struct sType* )come_increment_ref_count(solve_method_generics(come_value_type_,info), "08call.nc", 48, 233);
        __right_value0 = (void*)0;
        __dec_obj36=info->function_result_type,
        info->function_result_type=(struct sType* )come_increment_ref_count(sType_clone(come_value->type), "08call.nc", 50, 235);
        come_call_finalizer(sType_finalize, __dec_obj36,(void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc", 50, 234);
        check_assign_type("result type",result_type2,come_value_type,come_value,info);
        if(gComeC) {
            add_come_code(info,"return %s;\n",come_value->c_value);
        }
        else if(string_operator_not_equals(info->come_fun->mName,"main")&&info->come_fun->mNoResultType&&!existance_free_objects_on_return(come_fun->mBlock,info,come_value->var,(_Bool)0)&&!existance_free_right_value_objects(info)) {
            if(!gComeC&&!info->come_fun->mResultType->mNorecord) {
                add_come_code(info,"neo_current_frame = fr.prev;\n");
            }
            add_come_code(info,"return %s;\n",come_value->c_value);
        }
        else {
            if(!info->come_fun->mDefineReturnVar) {
                info->come_fun->mDefineReturnVar=(_Bool)1;
                __right_value0 = (void*)0;
                add_come_code_at_function_head(info,"%s;\n",((char* )(__right_value2=make_define_var(result_type2,((char*)(__right_value1=xsprintf("__result_obj__\%s",((char* )(__right_value0=int_to_string(000)))))),info,(_Bool)0,(_Bool)0))));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "08call.nc", 68, 236));
                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "08call.nc", 68, 237));
                (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0, "08call.nc", 68, 238));
            }
            if(!info->come_fun->mNoResultType) {
                if(result_type2->mHeap) {
                    __right_value0 = (void*)0;
                    type_name=(char* )come_increment_ref_count(make_type_name_string(result_type2,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0), "08call.nc", 73, 239);
                    __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    add_come_code(info,((char*)(__right_value1=xsprintf("__result_obj__\%s = (%%s)come_increment_ref_count(%%s, \"%%s\", %%d, %%d);\n",((char* )(__right_value0=int_to_string(000)))))),type_name,come_value->c_value,info->sname,info->sline,++info->id);
                    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "08call.nc", 74, 240));
                    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "08call.nc", 74, 241));
                    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 79, 242));
                }
                else {
                    __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    add_come_code(info,((char*)(__right_value1=xsprintf("__result_obj__\%s = %%s;\n",((char* )(__right_value0=int_to_string(000)))))),come_value->c_value);
                    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "08call.nc", 77, 243));
                    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "08call.nc", 77, 244));
                }
            }
            else {
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                add_come_code(info,((char*)(__right_value1=xsprintf("__result_obj__\%s = %%s;\n",((char* )(__right_value0=int_to_string(000)))))),come_value->c_value);
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "08call.nc", 81, 245));
                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "08call.nc", 81, 246));
            }
            add_last_code_to_source(info);
            free_objects_on_return(come_fun->mBlock,info,come_value->var,(_Bool)0,come_value->mLoadField);
            free_right_value_objects(info);
            if(info->block_level==1) {
                info->inhibits_output_code=(_Bool)1;
                if(info->match_it_var) {
                    for(_o2_saved_1=(struct list$1sVar$ph*)come_increment_ref_count(info->match_it_var, "08call.nc", 92, 247),it=list$1sVar$ph_begin(_o2_saved_1)                    ;!list$1sVar$ph_end(_o2_saved_1);it=list$1sVar$ph_next(_o2_saved_1)){
                        free_object(it->mType,it->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0);
                    }
                    __dec_obj37=info->match_it_var,
                    info->match_it_var=((void*)0);
                    come_call_finalizer(list$1sVar$ph_finalize, __dec_obj37,(void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc", 95, 254);
                    come_call_finalizer(list$1sVar$ph$p_finalize, _o2_saved_1, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 97, 256);
                }
            }
            if(!gComeC&&!info->come_fun->mResultType->mNorecord) {
                add_come_code(info,"neo_current_frame = fr.prev;\n");
            }
            if(__right_value0 = (void*)0,
__right_value1 = (void*)0,
__right_value2 = (void*)0,
({(_conditional_value_X0=(!gComeC&&string_operator_equals(info->come_fun->mName,"main")&&((struct sFun* )(__right_value2=map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value1=xsprintf("come_heap_final"))))))));            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "08call.nc", 103, 307));
            come_call_finalizer(sFun_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0, "08call.nc}", 103, 308);
_conditional_value_X0;})) {
                free_objects(info->gv_table,((void*)0),info,(_Bool)0);
                __right_value0 = (void*)0;
                add_come_code(info,((char* )(__right_value0=xsprintf("come_heap_final();\n"))));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "08call.nc", 105, 309));
            }
            if(result_type2->mHeap) {
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                free_object(result_type2,((char*)(__right_value1=xsprintf("__result_obj__\%s",((char* )(__right_value0=int_to_string(000)))))),(_Bool)0,(_Bool)1,info,(_Bool)0);
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "08call.nc", 109, 310));
                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "08call.nc", 109, 311));
            }
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            add_come_code(info,((char*)(__right_value1=xsprintf("return __result_obj__\%s;\n",((char* )(__right_value0=int_to_string(000)))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "08call.nc", 112, 312));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "08call.nc", 112, 313));
        }
        come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 147, 314);
        come_call_finalizer(sType_finalize, result_type2_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 147, 315);
        come_call_finalizer(sType_finalize, result_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 147, 316);
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 147, 322);
        come_call_finalizer(sType_finalize, come_value_type_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 147, 323);
        come_call_finalizer(sType_finalize, come_value_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 147, 324);
    }
    else {
        come_fun_10=info->come_fun;
        __right_value0 = (void*)0;
        add_come_code(info,((char* )(__right_value0=buffer_to_string(info->come_fun->mSourceEnd))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "08call.nc", 118, 325));
        add_last_code_to_source(info);
        free_objects_on_return(come_fun_10->mBlock,info,((void*)0),(_Bool)0,(_Bool)0);
        free_right_value_objects(info);
        if(info->block_level==1) {
            info->inhibits_output_code=(_Bool)1;
            if(info->match_it_var) {
                for(_o2_saved_2=(struct list$1sVar$ph*)come_increment_ref_count(info->match_it_var, "08call.nc", 128, 326),it_11=list$1sVar$ph_begin(_o2_saved_2)                ;!list$1sVar$ph_end(_o2_saved_2);it_11=list$1sVar$ph_next(_o2_saved_2)){
                    free_object(it_11->mType,it_11->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0);
                }
                __dec_obj38=info->match_it_var,
                info->match_it_var=((void*)0);
                come_call_finalizer(list$1sVar$ph_finalize, __dec_obj38,(void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc", 131, 327);
                come_call_finalizer(list$1sVar$ph$p_finalize, _o2_saved_2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 133, 328);
            }
        }
        if(!gComeC&&!info->come_fun->mResultType->mNorecord) {
            add_come_code(info,"neo_current_frame = fr.prev;\n");
        }
        if(!gComeC&&string_operator_equals(info->come_fun->mName,"main")) {
            free_objects(info->gv_table,((void*)0),info,(_Bool)0);
            __right_value0 = (void*)0;
            add_come_code(info,((char* )(__right_value0=xsprintf("come_heap_final();\n"))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "08call.nc", 141, 329));
        }
        add_come_code(info,"return;\n");
    }
    info->last_statment_is_return=(_Bool)1;
        neo_current_frame = fr.prev;
    return (_Bool)1;
    neo_current_frame = fr.prev;
}

static void sNodeBase_finalize(struct sNodeBase* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sNodeBase_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sNodeBase_finalize", 2, 2));
    }
        neo_current_frame = fr.prev;
}

static void sReturnNode_finalize(struct sReturnNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sReturnNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sReturnNode_finalize", 2, 7));
    }
    if(self!=((void*)0)&&self->value!=((void*)0)) {
        ((self->value) ? self->value = come_decrement_ref_count(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0,(void*)0, "sReturnNode_finalize", 3, 8):(void*)0);
    }
        neo_current_frame = fr.prev;
}

static struct sType*  sType_clone(struct sType*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sType_clone"; neo_current_frame = &fr;
    struct sType*  __result_obj__0  ;
    void* __right_value0 = (void*)0;
    struct sType*  result  ;
    struct sType*  __dec_obj2  ;
    struct sType*  __dec_obj3  ;
    struct list$1sType$ph* __dec_obj7;
    struct sType*  __dec_obj8  ;
    struct sNode* __dec_obj9;
    struct sNode* __dec_obj10;
    char*  __dec_obj11  ;
    char*  __dec_obj12  ;
    char*  __dec_obj13  ;
    char*  __dec_obj14  ;
    char*  __dec_obj15  ;
    char*  __dec_obj16  ;
    char*  __dec_obj17  ;
    char*  __dec_obj18  ;
    struct list$1sNode$ph* __dec_obj22;
    struct list$1sNode$ph* __dec_obj23;
    struct list$1int$* __dec_obj24;
    struct list$1int$* __dec_obj25;
    struct sType*  __dec_obj26  ;
    char*  __dec_obj27  ;
    struct list$1sType$ph* __dec_obj28;
    struct list$1char$ph* __dec_obj32;
    struct sType*  __dec_obj33  ;
    struct sNode* __dec_obj34;
    struct list$1sNode$ph* __dec_obj35;
    if(self==(void*)0) {
                __result_obj__0 = (struct sType* )come_increment_ref_count((void*)0, "sType_clone", 4, 16);
        neo_current_frame = fr.prev;
        come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sType_clone}", 4, 49);
        return __result_obj__0;
    }
    result=(struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "sType_clone", 5, 50, "struct sType* "), "sType_clone", 5, 51);
    if(self!=((void*)0)) {
        result->mClass=self->mClass;
    }
    if(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj2=result->mOriginalLoadVarType,
        result->mOriginalLoadVarType=(struct sType* )come_increment_ref_count(sType_clone(self->mOriginalLoadVarType), "sType_clone", 7, 53);
        come_call_finalizer(sType_finalize, __dec_obj2,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 7, 52);
    }
    if(self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj3=result->mChannelType,
        result->mChannelType=(struct sType* )come_increment_ref_count(sType_clone(self->mChannelType), "sType_clone", 8, 55);
        come_call_finalizer(sType_finalize, __dec_obj3,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 8, 54);
    }
    if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj7=result->mGenericsTypes,
        result->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mGenericsTypes), "sType_clone", 9, 85);
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj7,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 9, 84);
    }
    if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj8=result->mNoSolvedGenericsType,
        result->mNoSolvedGenericsType=(struct sType* )come_increment_ref_count(sType_clone(self->mNoSolvedGenericsType), "sType_clone", 10, 87);
        come_call_finalizer(sType_finalize, __dec_obj8,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 10, 86);
    }
    if(self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj9=result->mSizeNum,
        result->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum), "sType_clone", 11, 96);
        (__dec_obj9 ? __dec_obj9 = come_decrement_ref_count(__dec_obj9, ((struct sNode*)__dec_obj9)->finalize, ((struct sNode*)__dec_obj9)->_protocol_obj, 0,0, (void*)0, "sType_clone", 11, 95) :0);
    }
    if(self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj10=result->mAlignas,
        result->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas), "sType_clone", 12, 98);
        (__dec_obj10 ? __dec_obj10 = come_decrement_ref_count(__dec_obj10, ((struct sNode*)__dec_obj10)->finalize, ((struct sNode*)__dec_obj10)->_protocol_obj, 0,0, (void*)0, "sType_clone", 12, 97) :0);
    }
    if(self!=((void*)0)) {
        result->mAlignasDouble=self->mAlignasDouble;
    }
    if(self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj11=result->mTupleName,
        result->mTupleName=(char* )come_increment_ref_count((char* )come_memdup(self->mTupleName, "sType_clone", 14, 99, "char* "), "sType_clone", 14, 101);
        __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 14, 100);
    }
    if(self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj12=result->mAttribute,
        result->mAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mAttribute, "sType_clone", 15, 102, "char* "), "sType_clone", 15, 104);
        __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 15, 103);
    }
    if(self!=((void*)0)&&self->mVarAttribute!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj13=result->mVarAttribute,
        result->mVarAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mVarAttribute, "sType_clone", 16, 105, "char* "), "sType_clone", 16, 107);
        __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 16, 106);
    }
    if(self!=((void*)0)&&self->mMiddleAttribute!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj14=result->mMiddleAttribute,
        result->mMiddleAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mMiddleAttribute, "sType_clone", 17, 108, "char* "), "sType_clone", 17, 110);
        __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 17, 109);
    }
    if(self!=((void*)0)&&self->mPointerAttribute!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj15=result->mPointerAttribute,
        result->mPointerAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mPointerAttribute, "sType_clone", 18, 111, "char* "), "sType_clone", 18, 113);
        __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 18, 112);
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
        __dec_obj16=result->mAnonymousName,
        result->mAnonymousName=(char* )come_increment_ref_count((char* )come_memdup(self->mAnonymousName, "sType_clone", 49, 114, "char* "), "sType_clone", 49, 116);
        __dec_obj16 = come_decrement_ref_count(__dec_obj16, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 49, 115);
    }
    if(self!=((void*)0)) {
        result->mInnerStruct=self->mInnerStruct;
    }
    if(self!=((void*)0)&&self->mInnerStructName!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj17=result->mInnerStructName,
        result->mInnerStructName=(char* )come_increment_ref_count((char* )come_memdup(self->mInnerStructName, "sType_clone", 51, 117, "char* "), "sType_clone", 51, 119);
        __dec_obj17 = come_decrement_ref_count(__dec_obj17, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 51, 118);
    }
    if(self!=((void*)0)) {
        result->mAnonymousVarName=self->mAnonymousVarName;
    }
    if(self!=((void*)0)) {
        result->mInline=self->mInline;
    }
    if(self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj18=result->mAsmName,
        result->mAsmName=(char* )come_increment_ref_count((char* )come_memdup(self->mAsmName, "sType_clone", 54, 120, "char* "), "sType_clone", 54, 122);
        __dec_obj18 = come_decrement_ref_count(__dec_obj18, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 54, 121);
    }
    if(self!=((void*)0)) {
        result->mTypedef=self->mTypedef;
    }
    if(self!=((void*)0)) {
        result->mMultipleTypes=self->mMultipleTypes;
    }
    if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj22=result->mArrayNum,
        result->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mArrayNum), "sType_clone", 57, 152);
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj22,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 57, 151);
    }
    if(self!=((void*)0)&&self->mVarNameArrayNum!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj23=result->mVarNameArrayNum,
        result->mVarNameArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mVarNameArrayNum), "sType_clone", 58, 154);
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj23,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 58, 153);
    }
    if(self!=((void*)0)&&self->mArrayStatic!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj24=result->mArrayStatic,
        result->mArrayStatic=(struct list$1int$*)come_increment_ref_count(list$1int$$p_clone(self->mArrayStatic), "sType_clone", 59, 174);
        come_call_finalizer(list$1int$_finalize, __dec_obj24,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 59, 173);
    }
    if(self!=((void*)0)&&self->mArrayRestrict!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj25=result->mArrayRestrict,
        result->mArrayRestrict=(struct list$1int$*)come_increment_ref_count(list$1int$$p_clone(self->mArrayRestrict), "sType_clone", 60, 176);
        come_call_finalizer(list$1int$_finalize, __dec_obj25,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 60, 175);
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
        __dec_obj26=result->mTypedefOriginalType,
        result->mTypedefOriginalType=(struct sType* )come_increment_ref_count(sType_clone(self->mTypedefOriginalType), "sType_clone", 66, 178);
        come_call_finalizer(sType_finalize, __dec_obj26,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 66, 177);
    }
    if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj27=result->mOriginalTypeName,
        result->mOriginalTypeName=(char* )come_increment_ref_count((char* )come_memdup(self->mOriginalTypeName, "sType_clone", 67, 179, "char* "), "sType_clone", 67, 181);
        __dec_obj27 = come_decrement_ref_count(__dec_obj27, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 67, 180);
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
        __dec_obj28=result->mParamTypes,
        result->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mParamTypes), "sType_clone", 71, 183);
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj28,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 71, 182);
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj32=result->mParamNames,
        result->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->mParamNames), "sType_clone", 72, 215);
        come_call_finalizer(list$1char$ph_finalize, __dec_obj32,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 72, 214);
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj33=result->mResultType,
        result->mResultType=(struct sType* )come_increment_ref_count(sType_clone(self->mResultType), "sType_clone", 73, 217);
        come_call_finalizer(sType_finalize, __dec_obj33,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 73, 216);
    }
    if(self!=((void*)0)) {
        result->mVarArgs=self->mVarArgs;
    }
    if(self!=((void*)0)&&self->mTypeOfNode!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj34=result->mTypeOfNode,
        result->mTypeOfNode=(struct sNode*)come_increment_ref_count(sNode_clone(self->mTypeOfNode), "sType_clone", 75, 219);
        (__dec_obj34 ? __dec_obj34 = come_decrement_ref_count(__dec_obj34, ((struct sNode*)__dec_obj34)->finalize, ((struct sNode*)__dec_obj34)->_protocol_obj, 0,0, (void*)0, "sType_clone", 75, 218) :0);
    }
    if(self!=((void*)0)&&self->mHeapArrayNum!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj35=result->mHeapArrayNum,
        result->mHeapArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mHeapArrayNum), "sType_clone", 76, 221);
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj35,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 76, 220);
    }
        __result_obj__0 = (struct sType* )come_increment_ref_count(result, "sType_clone", 77, 222);
    come_call_finalizer(sType_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sType_clone}", 77, 223);
    neo_current_frame = fr.prev;
    come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sType_clone}", 77, 224);
    return __result_obj__0;
}

static void sType_finalize(struct sType*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sType_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 2, 17);
    }
    if(self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mChannelType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 3, 18);
    }
    if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 4, 21);
    }
    if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 5, 22);
    }
    if(self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        ((self->mSizeNum) ? self->mSizeNum = come_decrement_ref_count(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0,(void*)0, "sType_finalize", 6, 23):(void*)0);
    }
    if(self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        ((self->mAlignas) ? self->mAlignas = come_decrement_ref_count(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0,(void*)0, "sType_finalize", 7, 24):(void*)0);
    }
    if(self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        (self->mTupleName = come_decrement_ref_count(self->mTupleName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 8, 25));
    }
    if(self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 9, 26));
    }
    if(self!=((void*)0)&&self->mVarAttribute!=((void*)0)) {
        (self->mVarAttribute = come_decrement_ref_count(self->mVarAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 10, 27));
    }
    if(self!=((void*)0)&&self->mMiddleAttribute!=((void*)0)) {
        (self->mMiddleAttribute = come_decrement_ref_count(self->mMiddleAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 11, 28));
    }
    if(self!=((void*)0)&&self->mPointerAttribute!=((void*)0)) {
        (self->mPointerAttribute = come_decrement_ref_count(self->mPointerAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 12, 29));
    }
    if(self!=((void*)0)&&self->mAnonymousName!=((void*)0)) {
        (self->mAnonymousName = come_decrement_ref_count(self->mAnonymousName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 13, 30));
    }
    if(self!=((void*)0)&&self->mInnerStructName!=((void*)0)) {
        (self->mInnerStructName = come_decrement_ref_count(self->mInnerStructName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 14, 31));
    }
    if(self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        (self->mAsmName = come_decrement_ref_count(self->mAsmName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 15, 32));
    }
    if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 16, 35);
    }
    if(self!=((void*)0)&&self->mVarNameArrayNum!=((void*)0)) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mVarNameArrayNum, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 17, 36);
    }
    if(self!=((void*)0)&&self->mArrayStatic!=((void*)0)) {
        come_call_finalizer(list$1int$$p_finalize, self->mArrayStatic, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 18, 38);
    }
    if(self!=((void*)0)&&self->mArrayRestrict!=((void*)0)) {
        come_call_finalizer(list$1int$$p_finalize, self->mArrayRestrict, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 19, 39);
    }
    if(self!=((void*)0)&&self->mTypedefOriginalType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mTypedefOriginalType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 20, 40);
    }
    if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        (self->mOriginalTypeName = come_decrement_ref_count(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 21, 41));
    }
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 22, 42);
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamNames, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 23, 45);
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mResultType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 24, 46);
    }
    if(self!=((void*)0)&&self->mTypeOfNode!=((void*)0)) {
        ((self->mTypeOfNode) ? self->mTypeOfNode = come_decrement_ref_count(self->mTypeOfNode, ((struct sNode*)self->mTypeOfNode)->finalize, ((struct sNode*)self->mTypeOfNode)->_protocol_obj, 0, 0,(void*)0, "sType_finalize", 25, 47):(void*)0);
    }
    if(self!=((void*)0)&&self->mHeapArrayNum!=((void*)0)) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mHeapArrayNum, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 26, 48);
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
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1504, 20);
    }
            neo_current_frame = fr.prev;
}

static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1sType$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "list_item$1sType$ph$p_finalize}", 2, 19);
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
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1504, 34);
    }
            neo_current_frame = fr.prev;
}

static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1sNode$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        ((self->item) ? self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0,(void*)0, "list_item$1sNode$ph$p_finalize", 2, 33):(void*)0);
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
        come_call_finalizer(list_item$1int$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1504, 37);
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
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1504, 44);
    }
            neo_current_frame = fr.prev;
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1char$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0, 0, (void*)0, "list_item$1char$ph$p_finalize", 2, 43));
    }
            neo_current_frame = fr.prev;
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
                __result_obj__0 = (struct list$1sType$ph*)come_increment_ref_count(((void*)0), "/usr/local/include/neo-c.h", 1509, 56);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1509, 57);
        return __result_obj__0;
    }
    result=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "/usr/local/include/neo-c.h", 1511, 58, "struct list$1sType$ph*"), "/usr/local/include/neo-c.h", 1511, 62)), "/usr/local/include/neo-c.h", 1511, 63);
    it=self->head;
    while(it!=((void*)0)) {
        if(1) {
            __right_value0 = (void*)0;
            list$1sType$ph_add(result,(struct sType* )come_increment_ref_count(sType_clone(it->item), "/usr/local/include/neo-c.h", 1516, 78));
        }
        else {
            __right_value0 = (void*)0;
            list$1sType$ph_add(result,(struct sType* )come_increment_ref_count(sType_clone(it->item), "/usr/local/include/neo-c.h", 1519, 79));
        }
        it=it->next;
    }
        __result_obj__0 = (struct list$1sType$ph*)come_increment_ref_count(result, "/usr/local/include/neo-c.h", 1525, 80);
    come_call_finalizer(list$1sType$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1525, 81);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1525, 82);
    return __result_obj__0;
}

static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_initialize"; neo_current_frame = &fr;
    struct list$1sType$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = (struct list$1sType$ph*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 1483, 59);
    come_call_finalizer(list$1sType$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1483, 60);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1483, 61);
    return __result_obj__0;
}

static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_add"; neo_current_frame = &fr;
    struct list$1sType$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1sType$ph* litem;
    struct sType*  __dec_obj4  ;
    struct list_item$1sType$ph* litem_0;
    struct sType*  __dec_obj5  ;
    struct list_item$1sType$ph* litem_1;
    struct sType*  __dec_obj6  ;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1529, 64);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/neo-c.h", 1532, 65, "struct list_item$1sType$ph*"))), "/usr/local/include/neo-c.h", 1532, 66);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj4=litem->item,
        litem->item=(struct sType* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1536, 68);
        come_call_finalizer(sType_finalize, __dec_obj4,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1536, 67);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_0=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/neo-c.h", 1542, 69, "struct list_item$1sType$ph*"))), "/usr/local/include/neo-c.h", 1542, 70);
        litem_0->prev=self->head;
        litem_0->next=((void*)0);
        __dec_obj5=litem_0->item,
        litem_0->item=(struct sType* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1546, 72);
        come_call_finalizer(sType_finalize, __dec_obj5,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1546, 71);
        self->tail=litem_0;
        self->head->next=litem_0;
    }
    else {
        __right_value0 = (void*)0;
        litem_1=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/neo-c.h", 1552, 73, "struct list_item$1sType$ph*"))), "/usr/local/include/neo-c.h", 1552, 74);
        litem_1->prev=self->tail;
        litem_1->next=((void*)0);
        __dec_obj6=litem_1->item,
        litem_1->item=(struct sType* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1556, 76);
        come_call_finalizer(sType_finalize, __dec_obj6,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1556, 75);
        self->tail->next=litem_1;
        self->tail=litem_1;
    }
    self->len++;
        __result_obj__0 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1564, 77);
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
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1504, 83);
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
                __result_obj__0 = (struct sNode*)come_increment_ref_count((void*)0, "sNode_clone", 4, 88);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "sNode_clone", 4, 89):(void*)0);
        return __result_obj__0;
    }
    result=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 5, 90, "struct sNode*"), "sNode_clone", 5, 91);
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
        __result_obj__0 = (struct sNode*)come_increment_ref_count(result, "sNode_clone", 16, 92);
    ((result) ? result = come_decrement_ref_count(result, ((struct sNode*)result)->finalize, ((struct sNode*)result)->_protocol_obj, 0, 1,(void*)0, "sNode_clone", 16, 93):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "sNode_clone", 16, 94):(void*)0);
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
                __result_obj__0 = (struct list$1sNode$ph*)come_increment_ref_count(((void*)0), "/usr/local/include/neo-c.h", 1509, 123);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1509, 124);
        return __result_obj__0;
    }
    result=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "/usr/local/include/neo-c.h", 1511, 125, "struct list$1sNode$ph*"), "/usr/local/include/neo-c.h", 1511, 129)), "/usr/local/include/neo-c.h", 1511, 130);
    it=self->head;
    while(it!=((void*)0)) {
        if(1) {
            __right_value0 = (void*)0;
            list$1sNode$ph_add(result,(struct sNode*)come_increment_ref_count(sNode_clone(it->item), "/usr/local/include/neo-c.h", 1516, 145));
        }
        else {
            __right_value0 = (void*)0;
            list$1sNode$ph_add(result,(struct sNode*)come_increment_ref_count(sNode_clone(it->item), "/usr/local/include/neo-c.h", 1519, 146));
        }
        it=it->next;
    }
        __result_obj__0 = (struct list$1sNode$ph*)come_increment_ref_count(result, "/usr/local/include/neo-c.h", 1525, 147);
    come_call_finalizer(list$1sNode$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1525, 148);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1525, 149);
    return __result_obj__0;
}

static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_initialize"; neo_current_frame = &fr;
    struct list$1sNode$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = (struct list$1sNode$ph*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 1483, 126);
    come_call_finalizer(list$1sNode$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1483, 127);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1483, 128);
    return __result_obj__0;
}

static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_add"; neo_current_frame = &fr;
    struct list$1sNode$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1sNode$ph* litem;
    struct sNode* __dec_obj19;
    struct list_item$1sNode$ph* litem_2;
    struct sNode* __dec_obj20;
    struct list_item$1sNode$ph* litem_3;
    struct sNode* __dec_obj21;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0, "/usr/local/include/neo-c.h", 1529, 131):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/neo-c.h", 1532, 132, "struct list_item$1sNode$ph*"))), "/usr/local/include/neo-c.h", 1532, 133);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj19=litem->item,
        litem->item=(struct sNode*)come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1536, 135);
        (__dec_obj19 ? __dec_obj19 = come_decrement_ref_count(__dec_obj19, ((struct sNode*)__dec_obj19)->finalize, ((struct sNode*)__dec_obj19)->_protocol_obj, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1536, 134) :0);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_2=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/neo-c.h", 1542, 136, "struct list_item$1sNode$ph*"))), "/usr/local/include/neo-c.h", 1542, 137);
        litem_2->prev=self->head;
        litem_2->next=((void*)0);
        __dec_obj20=litem_2->item,
        litem_2->item=(struct sNode*)come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1546, 139);
        (__dec_obj20 ? __dec_obj20 = come_decrement_ref_count(__dec_obj20, ((struct sNode*)__dec_obj20)->finalize, ((struct sNode*)__dec_obj20)->_protocol_obj, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1546, 138) :0);
        self->tail=litem_2;
        self->head->next=litem_2;
    }
    else {
        __right_value0 = (void*)0;
        litem_3=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/neo-c.h", 1552, 140, "struct list_item$1sNode$ph*"))), "/usr/local/include/neo-c.h", 1552, 141);
        litem_3->prev=self->tail;
        litem_3->next=((void*)0);
        __dec_obj21=litem_3->item,
        litem_3->item=(struct sNode*)come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1556, 143);
        (__dec_obj21 ? __dec_obj21 = come_decrement_ref_count(__dec_obj21, ((struct sNode*)__dec_obj21)->finalize, ((struct sNode*)__dec_obj21)->_protocol_obj, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1556, 142) :0);
        self->tail->next=litem_3;
        self->tail=litem_3;
    }
    self->len++;
        __result_obj__0 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0, "/usr/local/include/neo-c.h", 1564, 144):(void*)0);
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
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1504, 150);
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
                __result_obj__0 = (struct list$1int$*)come_increment_ref_count(((void*)0), "/usr/local/include/neo-c.h", 1509, 155);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1509, 156);
        return __result_obj__0;
    }
    result=(struct list$1int$*)come_increment_ref_count(list$1int$_initialize((struct list$1int$*)come_increment_ref_count((struct list$1int$*)come_calloc(1, sizeof(struct list$1int$)*(1), "/usr/local/include/neo-c.h", 1511, 157, "struct list$1int$*"), "/usr/local/include/neo-c.h", 1511, 161)), "/usr/local/include/neo-c.h", 1511, 162);
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
        __result_obj__0 = (struct list$1int$*)come_increment_ref_count(result, "/usr/local/include/neo-c.h", 1525, 169);
    come_call_finalizer(list$1int$$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1525, 170);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1525, 171);
    return __result_obj__0;
}

static struct list$1int$* list$1int$_initialize(struct list$1int$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$_initialize"; neo_current_frame = &fr;
    struct list$1int$* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = (struct list$1int$*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 1483, 158);
    come_call_finalizer(list$1int$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1483, 159);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1483, 160);
    return __result_obj__0;
}

static struct list$1int$* list$1int$_add(struct list$1int$* self, int item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$_add"; neo_current_frame = &fr;
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
        litem=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/neo-c.h", 1532, 163, "struct list_item$1int$*"))), "/usr/local/include/neo-c.h", 1532, 164);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        litem->item=item;
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_4=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/neo-c.h", 1542, 165, "struct list_item$1int$*"))), "/usr/local/include/neo-c.h", 1542, 166);
        litem_4->prev=self->head;
        litem_4->next=((void*)0);
        litem_4->item=item;
        self->tail=litem_4;
        self->head->next=litem_4;
    }
    else {
        __right_value0 = (void*)0;
        litem_5=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/neo-c.h", 1552, 167, "struct list_item$1int$*"))), "/usr/local/include/neo-c.h", 1552, 168);
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
        come_call_finalizer(list_item$1int$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1504, 172);
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
                __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(((void*)0), "/usr/local/include/neo-c.h", 1509, 184);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1509, 185);
        return __result_obj__0;
    }
    result=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/neo-c.h", 1511, 186, "struct list$1char$ph*"), "/usr/local/include/neo-c.h", 1511, 190)), "/usr/local/include/neo-c.h", 1511, 191);
    it=self->head;
    while(it!=((void*)0)) {
        if(1) {
            __right_value0 = (void*)0;
            list$1char$ph_add(result,(char* )come_increment_ref_count((char* )come_memdup(it->item, "/usr/local/include/neo-c.h", 1516, 206, "char* "), "/usr/local/include/neo-c.h", 1516, 207));
        }
        else {
            __right_value0 = (void*)0;
            list$1char$ph_add(result,(char* )come_increment_ref_count((char* )come_memdup(it->item, "/usr/local/include/neo-c.h", 1519, 208, "char* "), "/usr/local/include/neo-c.h", 1519, 209));
        }
        it=it->next;
    }
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(result, "/usr/local/include/neo-c.h", 1525, 210);
    come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1525, 211);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1525, 212);
    return __result_obj__0;
}

static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_initialize"; neo_current_frame = &fr;
    struct list$1char$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 1483, 187);
    come_call_finalizer(list$1char$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1483, 188);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1483, 189);
    return __result_obj__0;
}

static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_add"; neo_current_frame = &fr;
    struct list$1char$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1char$ph* litem;
    char*  __dec_obj29  ;
    struct list_item$1char$ph* litem_6;
    char*  __dec_obj30  ;
    struct list_item$1char$ph* litem_7;
    char*  __dec_obj31  ;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1529, 192));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 1532, 193, "struct list_item$1char$ph*"))), "/usr/local/include/neo-c.h", 1532, 194);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj29=litem->item,
        litem->item=(char* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1536, 196);
        __dec_obj29 = come_decrement_ref_count(__dec_obj29, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1536, 195);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_6=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 1542, 197, "struct list_item$1char$ph*"))), "/usr/local/include/neo-c.h", 1542, 198);
        litem_6->prev=self->head;
        litem_6->next=((void*)0);
        __dec_obj30=litem_6->item,
        litem_6->item=(char* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1546, 200);
        __dec_obj30 = come_decrement_ref_count(__dec_obj30, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1546, 199);
        self->tail=litem_6;
        self->head->next=litem_6;
    }
    else {
        __right_value0 = (void*)0;
        litem_7=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 1552, 201, "struct list_item$1char$ph*"))), "/usr/local/include/neo-c.h", 1552, 202);
        litem_7->prev=self->tail;
        litem_7->next=((void*)0);
        __dec_obj31=litem_7->item,
        litem_7->item=(char* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1556, 204);
        __dec_obj31 = come_decrement_ref_count(__dec_obj31, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1556, 203);
        self->tail->next=litem_7;
        self->tail=litem_7;
    }
    self->len++;
        __result_obj__0 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1564, 205));
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
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1504, 213);
    }
            neo_current_frame = fr.prev;
}

static struct sVar*  list$1sVar$ph_begin(struct list$1sVar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sVar$ph_begin"; neo_current_frame = &fr;
    struct sVar*  result  ;
    struct sVar*  __result_obj__0  ;
    struct sVar*  result_8  ;
    if(self==((void*)0)) {
        memset(&result,0,sizeof(struct sVar* ));
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
    memset(&result_8,0,sizeof(struct sVar* ));
        __result_obj__0 = result_8;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static _Bool list$1sVar$ph_end(struct list$1sVar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sVar$ph_end"; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self==((void*)0)||self->it==((void*)0);
                        neo_current_frame = fr.prev;
}

static struct sVar*  list$1sVar$ph_next(struct list$1sVar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sVar$ph_next"; neo_current_frame = &fr;
    struct sVar*  result  ;
    struct sVar*  __result_obj__0  ;
    struct sVar*  result_9  ;
    if(self==((void*)0)||self->it==((void*)0)) {
        memset(&result,0,sizeof(struct sVar* ));
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
    memset(&result_9,0,sizeof(struct sVar* ));
        __result_obj__0 = result_9;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void list$1sVar$ph_finalize(struct list$1sVar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sVar$ph_finalize"; neo_current_frame = &fr;
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
        come_call_finalizer(list_item$1sVar$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1504, 253);
    }
                        neo_current_frame = fr.prev;
}

static void list_item$1sVar$ph$p_finalize(struct list_item$1sVar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1sVar$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer(sVar_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "list_item$1sVar$ph$p_finalize}", 2, 252);
    }
            neo_current_frame = fr.prev;
}

static void sVar_finalize(struct sVar*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sVar_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, (void*)0, "sVar_finalize", 2, 248));
    }
    if(self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        (self->mCValueName = come_decrement_ref_count(self->mCValueName, (void*)0, (void*)0, 0, 0, (void*)0, "sVar_finalize", 3, 249));
    }
    if(self!=((void*)0)&&self->mType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sVar_finalize}", 4, 250);
    }
    if(self!=((void*)0)&&self->mFunName!=((void*)0)) {
        (self->mFunName = come_decrement_ref_count(self->mFunName, (void*)0, (void*)0, 0, 0, (void*)0, "sVar_finalize", 5, 251));
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
        come_call_finalizer(list_item$1sVar$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1504, 255);
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
                __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3513, 257);
        come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3513, 278);
        neo_current_frame = fr.prev;
        come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3513, 279);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char* )key))%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if(string_equals(self->keys[it],key)) {
                                __result_obj__0 = (struct sFun* )come_increment_ref_count(self->items[it], "/usr/local/include/neo-c.h", 3524, 280);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3524, 281);
                neo_current_frame = fr.prev;
                come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3524, 282);
                return __result_obj__0;
            }
            it++;
            if(it>=self->size) {
                it=0;
            }
            else if(it==hash) {
                                __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3533, 283);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3533, 284);
                neo_current_frame = fr.prev;
                come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3533, 285);
                return __result_obj__0;
            }
        }
        else {
                        __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3537, 286);
            come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3537, 287);
            neo_current_frame = fr.prev;
            come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3537, 288);
            return __result_obj__0;
        }
    }
        __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3541, 289);
    come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3541, 290);
    neo_current_frame = fr.prev;
    come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3541, 291);
    return __result_obj__0;
}

static void sFun_finalize(struct sFun*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sFun_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 2, 258));
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mResultType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 3, 259);
    }
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 4, 260);
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamNames, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 5, 261);
    }
    if(self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 6, 262);
    }
    if(self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mLambdaType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 7, 263);
    }
    if(self!=((void*)0)&&self->mAllVar!=((void*)0)) {
        come_call_finalizer(list$1sVar$ph$p_finalize, self->mAllVar, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 8, 264);
    }
    if(self!=((void*)0)&&self->mBlock!=((void*)0)) {
        come_call_finalizer(sBlock_finalize, self->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 9, 267);
    }
    if(self!=((void*)0)&&self->mTextBlock!=((void*)0)) {
        (self->mTextBlock = come_decrement_ref_count(self->mTextBlock, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 10, 268));
    }
    if(self!=((void*)0)&&self->mTextBlockSName!=((void*)0)) {
        (self->mTextBlockSName = come_decrement_ref_count(self->mTextBlockSName, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 11, 269));
    }
    if(self!=((void*)0)&&self->mSource!=((void*)0)) {
        come_call_finalizer(buffer_finalize, self->mSource, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 12, 270);
    }
    if(self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        come_call_finalizer(buffer_finalize, self->mSourceHead, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 13, 271);
    }
    if(self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        come_call_finalizer(buffer_finalize, self->mSourceHead2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 14, 272);
    }
    if(self!=((void*)0)&&self->mSourceEnd!=((void*)0)) {
        come_call_finalizer(buffer_finalize, self->mSourceEnd, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 15, 273);
    }
    if(self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 16, 274));
    }
    if(self!=((void*)0)&&self->mMiddleAttribute!=((void*)0)) {
        (self->mMiddleAttribute = come_decrement_ref_count(self->mMiddleAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 17, 275));
    }
    if(self!=((void*)0)&&self->mFunAttribute!=((void*)0)) {
        (self->mFunAttribute = come_decrement_ref_count(self->mFunAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 18, 276));
    }
    if(self!=((void*)0)&&self->mAsmFun!=((void*)0)) {
        (self->mAsmFun = come_decrement_ref_count(self->mAsmFun, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 19, 277));
    }
            neo_current_frame = fr.prev;
}

static void sBlock_finalize(struct sBlock*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sBlock_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->mNodes!=((void*)0)) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mNodes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sBlock_finalize}", 2, 265);
    }
    if(self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        come_call_finalizer(sVarTable_finalize, self->mVarTable, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sBlock_finalize}", 3, 266);
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
                __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3513, 292);
        come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3513, 293);
        neo_current_frame = fr.prev;
        come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3513, 294);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char* )key))%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if(string_equals(self->keys[it],key)) {
                                __result_obj__0 = (struct sFun* )come_increment_ref_count(self->items[it], "/usr/local/include/neo-c.h", 3524, 295);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3524, 296);
                neo_current_frame = fr.prev;
                come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3524, 297);
                return __result_obj__0;
            }
            it++;
            if(it>=self->size) {
                it=0;
            }
            else if(it==hash) {
                                __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3533, 298);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3533, 299);
                neo_current_frame = fr.prev;
                come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3533, 300);
                return __result_obj__0;
            }
        }
        else {
                        __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3537, 301);
            come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3537, 302);
            neo_current_frame = fr.prev;
            come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3537, 303);
            return __result_obj__0;
        }
    }
        __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3541, 304);
    come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3541, 305);
    neo_current_frame = fr.prev;
    come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3541, 306);
    return __result_obj__0;
}

static void CVALUE_finalize(struct CVALUE*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "CVALUE_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->c_value!=((void*)0)) {
        (self->c_value = come_decrement_ref_count(self->c_value, (void*)0, (void*)0, 0, 0, (void*)0, "CVALUE_finalize", 2, 317));
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "CVALUE_finalize}", 3, 318);
    }
    if(self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        (self->c_value_without_right_value_objects = come_decrement_ref_count(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, (void*)0, "CVALUE_finalize", 4, 319));
    }
    if(self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)) {
        (self->c_value_without_cast_object_value = come_decrement_ref_count(self->c_value_without_cast_object_value, (void*)0, (void*)0, 0, 0, (void*)0, "CVALUE_finalize", 5, 320));
    }
    if(self!=((void*)0)&&self->c_value_without_null_checker!=((void*)0)) {
        (self->c_value_without_null_checker = come_decrement_ref_count(self->c_value_without_null_checker, (void*)0, (void*)0, 0, 0, (void*)0, "CVALUE_finalize", 6, 321));
    }
            neo_current_frame = fr.prev;
}

struct sNode* create_return_node(struct sNode* value, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "create_return_node"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value1;
    struct sReturnNode* _inf_obj_value1;
    void* __right_value2 = (void*)0;
    struct sNode* __result_obj__0;
        _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08call.nc", 155, 333, "struct sNode");
    _inf_obj_value1=(struct sReturnNode*)come_increment_ref_count(((struct sReturnNode*)(__right_value1=sReturnNode_initialize((struct sReturnNode* )come_increment_ref_count((struct sReturnNode *)come_calloc(1, sizeof(struct sReturnNode )*(1), "08call.nc", 155, 330, "struct sReturnNode* "), "08call.nc", 155, 331),(struct sNode*)come_increment_ref_count(value, "08call.nc", 155, 332),info))), "08call.nc", 155, 334);
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sReturnNode_finalize;
    _inf_value1->clone=(void*)sReturnNode_clone;
    _inf_value1->compile=(void*)sReturnNode_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sline_real=(void*)sNodeBase_sline_real;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sNodeBase_terminated;
    _inf_value1->kind=(void*)sReturnNode_kind;
    _inf_value1->left_value=(void*)sNodeBase_left_value;
    __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value1)), "08call.nc", 155, 343);
    ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 0,(void*)0, "08call.nc", 155, 344):(void*)0);
    come_call_finalizer(sReturnNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "08call.nc}", 155, 345);
    ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "08call.nc", 155, 346):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "08call.nc", 155, 347):(void*)0);
    return __result_obj__0;
}

static struct sReturnNode* sReturnNode_clone(struct sReturnNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sReturnNode_clone"; neo_current_frame = &fr;
    struct sReturnNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sReturnNode*  result  ;
    char*  __dec_obj39  ;
    struct sNode* __dec_obj40;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sReturnNode* )come_increment_ref_count((struct sReturnNode *)come_calloc(1, sizeof(struct sReturnNode )*(1), "sReturnNode_clone", 5, 335, "struct sReturnNode* "), "sReturnNode_clone", 5, 336);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj39=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sReturnNode_clone", 7, 337, "char* "), "sReturnNode_clone", 7, 339);
        __dec_obj39 = come_decrement_ref_count(__dec_obj39, (void*)0, (void*)0, 0,0, (void*)0, "sReturnNode_clone", 7, 338);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->value!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj40=result->value,
        result->value=(struct sNode*)come_increment_ref_count(sNode_clone(self->value), "sReturnNode_clone", 9, 341);
        (__dec_obj40 ? __dec_obj40 = come_decrement_ref_count(__dec_obj40, ((struct sNode*)__dec_obj40)->finalize, ((struct sNode*)__dec_obj40)->_protocol_obj, 0,0, (void*)0, "sReturnNode_clone", 9, 340) :0);
    }
        __result_obj__0 = result;
    come_call_finalizer(sReturnNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sReturnNode_clone}", 10, 342);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sCSourceNode* sCSourceNode_initialize(struct sCSourceNode* self, char*  contents  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sCSourceNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __dec_obj41  ;
    struct sCSourceNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sCSourceNode*)come_increment_ref_count(self, "08call.nc", 163, 348),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "08call.nc}", 163, 349);
    __dec_obj41=self->contents,
    self->contents=(char* )come_increment_ref_count(contents, "08call.nc", 165, 351);
    __dec_obj41 = come_decrement_ref_count(__dec_obj41, (void*)0, (void*)0, 0,0, (void*)0, "08call.nc", 165, 350);
        __result_obj__0 = (struct sCSourceNode*)come_increment_ref_count(self, "08call.nc", 168, 352);
    come_call_finalizer(sCSourceNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "08call.nc}", 168, 355);
    (contents = come_decrement_ref_count(contents, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 168, 356));
    neo_current_frame = fr.prev;
    come_call_finalizer(sCSourceNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "08call.nc}", 168, 357);
    return __result_obj__0;
}

char*  sCSourceNode_kind(struct sCSourceNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sCSourceNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sCSourceNode"))), "08call.nc", 170, 358);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "08call.nc", 170, 359));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "08call.nc", 170, 360));
    return __result_obj__0;
}

_Bool sCSourceNode_compile(struct sCSourceNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sCSourceNode_compile"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    add_come_last_code(info,"%s",((char* )(__right_value0=string_operator_load_range_element(self->contents,1,-2))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "08call.nc", 175, 361));
        neo_current_frame = fr.prev;
    return (_Bool)1;
    neo_current_frame = fr.prev;
}

static void sCSourceNode_finalize(struct sCSourceNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sCSourceNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sCSourceNode_finalize", 2, 353));
    }
    if(self!=((void*)0)&&self->contents!=((void*)0)) {
        (self->contents = come_decrement_ref_count(self->contents, (void*)0, (void*)0, 0, 0, (void*)0, "sCSourceNode_finalize", 3, 354));
    }
        neo_current_frame = fr.prev;
}

struct sInlineAssembler* sInlineAssembler_initialize(struct sInlineAssembler* self, char*  source  , _Bool volatile_, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sInlineAssembler_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __dec_obj42  ;
    struct sInlineAssembler* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sInlineAssembler*)come_increment_ref_count(self, "08call.nc", 185, 362),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "08call.nc}", 185, 363);
    __dec_obj42=self->source,
    self->source=(char* )come_increment_ref_count(source, "08call.nc", 187, 365);
    __dec_obj42 = come_decrement_ref_count(__dec_obj42, (void*)0, (void*)0, 0,0, (void*)0, "08call.nc", 187, 364);
    self->volatile_=volatile_;
        __result_obj__0 = (struct sInlineAssembler*)come_increment_ref_count(self, "08call.nc", 191, 366);
    come_call_finalizer(sInlineAssembler_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "08call.nc}", 191, 369);
    (source = come_decrement_ref_count(source, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 191, 370));
    neo_current_frame = fr.prev;
    come_call_finalizer(sInlineAssembler_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "08call.nc}", 191, 371);
    return __result_obj__0;
}

char*  sInlineAssembler_kind(struct sInlineAssembler* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sInlineAssembler_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sInlineAssembler"))), "08call.nc", 193, 372);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "08call.nc", 193, 373));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "08call.nc", 193, 374));
    return __result_obj__0;
}

_Bool sInlineAssembler_compile(struct sInlineAssembler* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sInlineAssembler_compile"; neo_current_frame = &fr;
    char*  source  ;
    _Bool volatile_;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    void* __right_value2 = (void*)0;
    char*  __dec_obj43  ;
    struct sType*  __dec_obj44  ;
    _Bool __result_obj__0;
    source=(char* )come_increment_ref_count(self->source, "08call.nc", 198, 375);
    volatile_=self->volatile_;
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "08call.nc", 202, 376, "struct CVALUE* "), "08call.nc", 202, 377)), "08call.nc", 202, 378);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj43=come_value->c_value,
    come_value->c_value=(char*)come_increment_ref_count(xsprintf(" __asm \%s \%s",((char* )(__right_value0=charp_to_string(((volatile_)?("volatile"):(""))))),((char* )(__right_value1=string_to_string(source)))), "08call.nc", 204, 380);
    __dec_obj43 = come_decrement_ref_count(__dec_obj43, (void*)0, (void*)0, 0,0, (void*)0, "08call.nc", 204, 379);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "08call.nc", 204, 381));
    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "08call.nc", 204, 382));
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __right_value2 = (void*)0;
    __dec_obj44=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "08call.nc", 206, 383, "struct sType* "), "08call.nc", 206, 384),(char*)come_increment_ref_count(xsprintf("void"), "08call.nc", 206, 385),(_Bool)0,info,(_Bool)0,0), "08call.nc", 206, 387);
    come_call_finalizer(sType_finalize, __dec_obj44,(void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc", 206, 386);
    come_value->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "08call.nc", 209, 402));
    add_come_last_code(info,"%s",come_value->c_value);
        __result_obj__0 = (_Bool)1;
    (source = come_decrement_ref_count(source, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 213, 403));
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 213, 404);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sInlineAssembler_finalize(struct sInlineAssembler* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sInlineAssembler_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sInlineAssembler_finalize", 2, 367));
    }
    if(self!=((void*)0)&&self->source!=((void*)0)) {
        (self->source = come_decrement_ref_count(self->source, (void*)0, (void*)0, 0, 0, (void*)0, "sInlineAssembler_finalize", 3, 368));
    }
        neo_current_frame = fr.prev;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1CVALUE$ph_push_back"; neo_current_frame = &fr;
    struct list$1CVALUE$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1CVALUE$ph* litem;
    struct CVALUE*  __dec_obj45  ;
    struct list_item$1CVALUE$ph* litem_12;
    struct CVALUE*  __dec_obj46  ;
    struct list_item$1CVALUE$ph* litem_13;
    struct CVALUE*  __dec_obj47  ;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1613, 388);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/neo-c.h", 1617, 389, "struct list_item$1CVALUE$ph*"))), "/usr/local/include/neo-c.h", 1617, 390);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj45=litem->item,
        litem->item=(struct CVALUE* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1621, 392);
        come_call_finalizer(CVALUE_finalize, __dec_obj45,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1621, 391);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_12=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/neo-c.h", 1627, 393, "struct list_item$1CVALUE$ph*"))), "/usr/local/include/neo-c.h", 1627, 394);
        litem_12->prev=self->head;
        litem_12->next=((void*)0);
        __dec_obj46=litem_12->item,
        litem_12->item=(struct CVALUE* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1631, 396);
        come_call_finalizer(CVALUE_finalize, __dec_obj46,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1631, 395);
        self->tail=litem_12;
        self->head->next=litem_12;
    }
    else {
        __right_value0 = (void*)0;
        litem_13=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/neo-c.h", 1637, 397, "struct list_item$1CVALUE$ph*"))), "/usr/local/include/neo-c.h", 1637, 398);
        litem_13->prev=self->tail;
        litem_13->next=((void*)0);
        __dec_obj47=litem_13->item,
        litem_13->item=(struct CVALUE* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1641, 400);
        come_call_finalizer(CVALUE_finalize, __dec_obj47,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1641, 399);
        self->tail->next=litem_13;
        self->tail=litem_13;
    }
    self->len++;
        __result_obj__0 = self;
    come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1649, 401);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sLineNode* sLineNode_initialize(struct sLineNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sLineNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sLineNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sLineNode*)come_increment_ref_count(self, "08call.nc", 221, 405),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "08call.nc}", 221, 406);
        __result_obj__0 = (struct sLineNode*)come_increment_ref_count(self, "08call.nc", 224, 407);
    come_call_finalizer(sLineNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "08call.nc}", 224, 409);
    neo_current_frame = fr.prev;
    come_call_finalizer(sLineNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "08call.nc}", 224, 410);
    return __result_obj__0;
}

char*  sLineNode_kind(struct sLineNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sLineNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sLineNode"))), "08call.nc", 226, 411);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "08call.nc", 226, 412));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "08call.nc", 226, 413));
    return __result_obj__0;
}

_Bool sLineNode_compile(struct sLineNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sLineNode_compile"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj48  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj49  ;
    _Bool __result_obj__0;
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "08call.nc", 231, 414, "struct CVALUE* "), "08call.nc", 231, 415)), "08call.nc", 231, 416);
    __right_value0 = (void*)0;
    __dec_obj48=come_value->c_value,
    come_value->c_value=(char* )come_increment_ref_count(xsprintf("%d",info->sline), "08call.nc", 233, 418);
    __dec_obj48 = come_decrement_ref_count(__dec_obj48, (void*)0, (void*)0, 0,0, (void*)0, "08call.nc", 233, 417);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj49=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "08call.nc", 234, 419, "struct sType* "), "08call.nc", 234, 420),(char*)come_increment_ref_count(xsprintf("int"), "08call.nc", 234, 421),(_Bool)0,info,(_Bool)0,0), "08call.nc", 234, 423);
    come_call_finalizer(sType_finalize, __dec_obj49,(void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc", 234, 422);
    come_value->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "08call.nc", 237, 424));
    add_come_last_code(info,"%s",come_value->c_value);
        __result_obj__0 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 241, 425);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sLineNode_finalize(struct sLineNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sLineNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sLineNode_finalize", 2, 408));
    }
        neo_current_frame = fr.prev;
}

struct sSNameNode* sSNameNode_initialize(struct sSNameNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sSNameNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sSNameNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sSNameNode*)come_increment_ref_count(self, "08call.nc", 249, 426),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "08call.nc}", 249, 427);
        __result_obj__0 = (struct sSNameNode*)come_increment_ref_count(self, "08call.nc", 252, 428);
    come_call_finalizer(sSNameNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "08call.nc}", 252, 430);
    neo_current_frame = fr.prev;
    come_call_finalizer(sSNameNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "08call.nc}", 252, 431);
    return __result_obj__0;
}

char*  sSNameNode_kind(struct sSNameNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sSNameNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sSNameNode"))), "08call.nc", 254, 432);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "08call.nc", 254, 433));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "08call.nc", 254, 434));
    return __result_obj__0;
}

_Bool sSNameNode_compile(struct sSNameNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sSNameNode_compile"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj50  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj51  ;
    _Bool __result_obj__0;
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "08call.nc", 259, 435, "struct CVALUE* "), "08call.nc", 259, 436)), "08call.nc", 259, 437);
    __right_value0 = (void*)0;
    __dec_obj50=come_value->c_value,
    come_value->c_value=(char* )come_increment_ref_count(xsprintf("\"%s\"",info->sname), "08call.nc", 261, 439);
    __dec_obj50 = come_decrement_ref_count(__dec_obj50, (void*)0, (void*)0, 0,0, (void*)0, "08call.nc", 261, 438);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj51=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "08call.nc", 262, 440, "struct sType* "), "08call.nc", 262, 441),(char*)come_increment_ref_count(xsprintf("char*"), "08call.nc", 262, 442),(_Bool)0,info,(_Bool)0,0), "08call.nc", 262, 444);
    come_call_finalizer(sType_finalize, __dec_obj51,(void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc", 262, 443);
    come_value->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "08call.nc", 265, 445));
    add_come_last_code(info,"%s",come_value->c_value);
        __result_obj__0 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 269, 446);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sSNameNode_finalize(struct sSNameNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sSNameNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sSNameNode_finalize", 2, 429));
    }
        neo_current_frame = fr.prev;
}

struct sFuncNode* sFuncNode_initialize(struct sFuncNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sFuncNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sFuncNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sFuncNode*)come_increment_ref_count(self, "08call.nc", 277, 447),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "08call.nc}", 277, 448);
        __result_obj__0 = (struct sFuncNode*)come_increment_ref_count(self, "08call.nc", 280, 449);
    come_call_finalizer(sFuncNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "08call.nc}", 280, 451);
    neo_current_frame = fr.prev;
    come_call_finalizer(sFuncNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "08call.nc}", 280, 452);
    return __result_obj__0;
}

char*  sFuncNode_kind(struct sFuncNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sFuncNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sFuncNode"))), "08call.nc", 282, 453);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "08call.nc", 282, 454));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "08call.nc", 282, 455));
    return __result_obj__0;
}

_Bool sFuncNode_compile(struct sFuncNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sFuncNode_compile"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj52  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj53  ;
    _Bool __result_obj__0;
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "08call.nc", 287, 456, "struct CVALUE* "), "08call.nc", 287, 457)), "08call.nc", 287, 458);
    __right_value0 = (void*)0;
    __dec_obj52=come_value->c_value,
    come_value->c_value=(char* )come_increment_ref_count(xsprintf("\"%s\"",info->come_fun->mName), "08call.nc", 289, 460);
    __dec_obj52 = come_decrement_ref_count(__dec_obj52, (void*)0, (void*)0, 0,0, (void*)0, "08call.nc", 289, 459);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj53=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "08call.nc", 290, 461, "struct sType* "), "08call.nc", 290, 462),(char*)come_increment_ref_count(xsprintf("char*"), "08call.nc", 290, 463),(_Bool)0,info,(_Bool)0,0), "08call.nc", 290, 465);
    come_call_finalizer(sType_finalize, __dec_obj53,(void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc", 290, 464);
    come_value->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "08call.nc", 294, 466));
    add_come_last_code(info,"%s",come_value->c_value);
        __result_obj__0 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 298, 467);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sFuncNode_finalize(struct sFuncNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sFuncNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sFuncNode_finalize", 2, 450));
    }
        neo_current_frame = fr.prev;
}

struct sCallerFuncNode* sCallerFuncNode_initialize(struct sCallerFuncNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sCallerFuncNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sCallerFuncNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sCallerFuncNode*)come_increment_ref_count(self, "08call.nc", 306, 468),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "08call.nc}", 306, 469);
        __result_obj__0 = (struct sCallerFuncNode*)come_increment_ref_count(self, "08call.nc", 309, 470);
    come_call_finalizer(sCallerFuncNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "08call.nc}", 309, 472);
    neo_current_frame = fr.prev;
    come_call_finalizer(sCallerFuncNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "08call.nc}", 309, 473);
    return __result_obj__0;
}

char*  sCallerFuncNode_kind(struct sCallerFuncNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sCallerFuncNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sCallerFuncNode"))), "08call.nc", 311, 474);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "08call.nc", 311, 475));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "08call.nc", 311, 476));
    return __result_obj__0;
}

_Bool sCallerFuncNode_compile(struct sCallerFuncNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sCallerFuncNode_compile"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj54  ;
    char*  __dec_obj55  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj56  ;
    _Bool __result_obj__0;
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "08call.nc", 316, 477, "struct CVALUE* "), "08call.nc", 316, 478)), "08call.nc", 316, 479);
    if(info->caller_fun) {
        __right_value0 = (void*)0;
        __dec_obj54=come_value->c_value,
        come_value->c_value=(char* )come_increment_ref_count(xsprintf("\"%s\"",info->caller_fun->mName), "08call.nc", 319, 481);
        __dec_obj54 = come_decrement_ref_count(__dec_obj54, (void*)0, (void*)0, 0,0, (void*)0, "08call.nc", 319, 480);
    }
    else {
        __right_value0 = (void*)0;
        __dec_obj55=come_value->c_value,
        come_value->c_value=(char* )come_increment_ref_count(xsprintf("\"\""), "08call.nc", 322, 483);
        __dec_obj55 = come_decrement_ref_count(__dec_obj55, (void*)0, (void*)0, 0,0, (void*)0, "08call.nc", 322, 482);
    }
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj56=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "08call.nc", 324, 484, "struct sType* "), "08call.nc", 324, 485),(char*)come_increment_ref_count(xsprintf("char*"), "08call.nc", 324, 486),(_Bool)0,info,(_Bool)0,0), "08call.nc", 324, 488);
    come_call_finalizer(sType_finalize, __dec_obj56,(void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc", 324, 487);
    come_value->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "08call.nc", 328, 489));
    add_come_last_code(info,"%s",come_value->c_value);
        __result_obj__0 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 332, 490);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sCallerFuncNode_finalize(struct sCallerFuncNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sCallerFuncNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sCallerFuncNode_finalize", 2, 471));
    }
        neo_current_frame = fr.prev;
}

struct sCallerLineNode* sCallerLineNode_initialize(struct sCallerLineNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sCallerLineNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sCallerLineNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sCallerLineNode*)come_increment_ref_count(self, "08call.nc", 340, 491),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "08call.nc}", 340, 492);
        __result_obj__0 = (struct sCallerLineNode*)come_increment_ref_count(self, "08call.nc", 343, 493);
    come_call_finalizer(sCallerLineNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "08call.nc}", 343, 495);
    neo_current_frame = fr.prev;
    come_call_finalizer(sCallerLineNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "08call.nc}", 343, 496);
    return __result_obj__0;
}

_Bool sCallerLineNode_compile(struct sCallerLineNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sCallerLineNode_compile"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj57  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj58  ;
    _Bool __result_obj__0;
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "08call.nc", 345, 497, "struct CVALUE* "), "08call.nc", 345, 498)), "08call.nc", 345, 499);
    __right_value0 = (void*)0;
    __dec_obj57=come_value->c_value,
    come_value->c_value=(char* )come_increment_ref_count(xsprintf("%d",info->caller_line), "08call.nc", 347, 501);
    __dec_obj57 = come_decrement_ref_count(__dec_obj57, (void*)0, (void*)0, 0,0, (void*)0, "08call.nc", 347, 500);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj58=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "08call.nc", 348, 502, "struct sType* "), "08call.nc", 348, 503),(char*)come_increment_ref_count(xsprintf("int"), "08call.nc", 348, 504),(_Bool)0,info,(_Bool)0,0), "08call.nc", 348, 506);
    come_call_finalizer(sType_finalize, __dec_obj58,(void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc", 348, 505);
    come_value->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "08call.nc", 351, 507));
    add_come_last_code(info,"%s",come_value->c_value);
        __result_obj__0 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 355, 508);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

char*  sCallerLineNode_kind(struct sCallerLineNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sCallerLineNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sCallerLineNode"))), "08call.nc", 360, 509);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "08call.nc", 360, 510));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "08call.nc", 360, 511));
    return __result_obj__0;
}

static void sCallerLineNode_finalize(struct sCallerLineNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sCallerLineNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sCallerLineNode_finalize", 2, 494));
    }
        neo_current_frame = fr.prev;
}

struct sCallerSNameNode* sCallerSNameNode_initialize(struct sCallerSNameNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sCallerSNameNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sCallerSNameNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sCallerSNameNode*)come_increment_ref_count(self, "08call.nc", 368, 512),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "08call.nc}", 368, 513);
        __result_obj__0 = (struct sCallerSNameNode*)come_increment_ref_count(self, "08call.nc", 371, 514);
    come_call_finalizer(sCallerSNameNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "08call.nc}", 371, 516);
    neo_current_frame = fr.prev;
    come_call_finalizer(sCallerSNameNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "08call.nc}", 371, 517);
    return __result_obj__0;
}

_Bool sCallerSNameNode_compile(struct sCallerSNameNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sCallerSNameNode_compile"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj59  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj60  ;
    _Bool __result_obj__0;
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "08call.nc", 373, 518, "struct CVALUE* "), "08call.nc", 373, 519)), "08call.nc", 373, 520);
    __right_value0 = (void*)0;
    __dec_obj59=come_value->c_value,
    come_value->c_value=(char* )come_increment_ref_count(xsprintf("\"%s\"",info->caller_sname), "08call.nc", 375, 522);
    __dec_obj59 = come_decrement_ref_count(__dec_obj59, (void*)0, (void*)0, 0,0, (void*)0, "08call.nc", 375, 521);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj60=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "08call.nc", 376, 523, "struct sType* "), "08call.nc", 376, 524),(char*)come_increment_ref_count(xsprintf("char*"), "08call.nc", 376, 525),(_Bool)0,info,(_Bool)0,0), "08call.nc", 376, 527);
    come_call_finalizer(sType_finalize, __dec_obj60,(void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc", 376, 526);
    come_value->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "08call.nc", 379, 528));
    add_come_last_code(info,"%s",come_value->c_value);
        __result_obj__0 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 383, 529);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

char*  sCallerSNameNode_kind(struct sCallerSNameNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sCallerSNameNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sCallerSNameNode"))), "08call.nc", 388, 530);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "08call.nc", 388, 531));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "08call.nc", 388, 532));
    return __result_obj__0;
}

static void sCallerSNameNode_finalize(struct sCallerSNameNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sCallerSNameNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sCallerSNameNode_finalize", 2, 515));
    }
        neo_current_frame = fr.prev;
}

struct sFunCallNode* sFunCallNode_initialize(struct sFunCallNode* self, char* fun_name, struct list$1tuple2$2char$phsNode$ph$ph* params, struct list$1sType$ph* method_generics_types, struct buffer*  method_block  , int method_block_sline, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sFunCallNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __dec_obj61  ;
    struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj67;
    struct list$1sType$ph* __dec_obj68;
    struct buffer*  __dec_obj69  ;
    struct sFunCallNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sFunCallNode*)come_increment_ref_count(self, "08call.nc", 396, 533),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "08call.nc}", 396, 534);
    __right_value0 = (void*)0;
    __dec_obj61=self->fun_name,
    self->fun_name=(char* )come_increment_ref_count(__builtin_string(fun_name), "08call.nc", 398, 536);
    __dec_obj61 = come_decrement_ref_count(__dec_obj61, (void*)0, (void*)0, 0,0, (void*)0, "08call.nc", 398, 535);
    __right_value0 = (void*)0;
    __dec_obj67=self->params,
    self->params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_clone(params), "08call.nc", 399, 584);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph_finalize, __dec_obj67,(void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc", 399, 583);
    __dec_obj68=self->method_generics_types,
    self->method_generics_types=(struct list$1sType$ph*)come_increment_ref_count(method_generics_types, "08call.nc", 400, 586);
    come_call_finalizer(list$1sType$ph_finalize, __dec_obj68,(void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc", 400, 585);
    __dec_obj69=self->method_block,
    self->method_block=(struct buffer* )come_increment_ref_count(method_block, "08call.nc", 401, 588);
    come_call_finalizer(buffer_finalize, __dec_obj69,(void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc", 401, 587);
    self->method_block_sline=method_block_sline;
        __result_obj__0 = (struct sFunCallNode*)come_increment_ref_count(self, "08call.nc", 405, 589);
    come_call_finalizer(sFunCallNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "08call.nc}", 405, 595);
    come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 405, 596);
    come_call_finalizer(buffer_finalize, method_block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 405, 597);
    neo_current_frame = fr.prev;
    come_call_finalizer(sFunCallNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "08call.nc}", 405, 598);
    return __result_obj__0;
}

char*  sFunCallNode_kind(struct sFunCallNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sFunCallNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sFunCallNode"))), "08call.nc", 407, 599);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "08call.nc", 407, 600));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "08call.nc", 407, 601));
    return __result_obj__0;
}

_Bool sFunCallNode_terminated(struct sFunCallNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sFunCallNode_terminated"; neo_current_frame = &fr;
    if(self->method_block) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else {
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    neo_current_frame = fr.prev;
}

_Bool sFunCallNode_compile(struct sFunCallNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sFunCallNode_compile"; neo_current_frame = &fr;
    char*  fun_name  ;
    struct list$1tuple2$2char$phsNode$ph$ph* params;
    struct buffer*  method_block  ;
    int method_block_sline;
    struct sVar*  var_  ;
    struct sType*  lambda_type  ;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sType*  result_type  ;
    void* __right_value1 = (void*)0;
    struct list$1CVALUE$ph* come_params;
    int i;
    struct list$1tuple2$2char$phsNode$ph$ph* _o2_saved_3;
    struct tuple2$2char$phsNode$ph* it;
    struct tuple2$2char$phsNode$ph* multiple_assign_var1
;    char*  label  =0;
    struct sNode* node=0;
    _Bool Value;
    struct CVALUE*  come_value  ;
    struct sType*  type_  ;
    struct sType*  type2_  ;
    struct sType*  __dec_obj70  ;
    _Bool _conditional_value_X0;
    void* __right_value2 = (void*)0;
    void* __right_value3 = (void*)0;
    _Bool _conditional_value_X1;
    struct buffer*  buf  ;
    int j;
    struct list$1CVALUE$ph* _o2_saved_4;
    struct CVALUE*  it_21  ;
    struct CVALUE*  come_value_23  ;
    char*  __dec_obj71  ;
    struct sType*  __dec_obj72  ;
    struct sGenericsFun*  generics_fun  ;
    _Bool method_generics;
    struct list$1sType$ph* method_generics_types;
    struct tuple2$2char$phsGenericsFun$p* multiple_assign_var2
;    char*  name  =0;
    struct sGenericsFun*  gfun  =0;
    char*  generics_fun_name  ;
    struct sFun*  fun  ;
    struct list$1CVALUE$ph* come_params_24;
    struct sFun*  fun_25  ;
    _Bool no_output_come_code;
    struct CVALUE*  method_block_node  ;
    struct sType*  method_block_lambda_type  ;
    struct sType*  method_block_result_type  ;
    struct sType*  generics_fun_method_block_lambda_type  ;
    struct sType*  generics_fun_method_block_result_type  ;
    int method_generics_num;
    int n;
    struct list$1sType$ph* _o2_saved_5;
    struct sType*  it_32  ;
    int method_generics_num_34;
    struct list$1CVALUE$ph* come_params_35;
    int i_36;
    struct sType*  result_type_37  ;
    struct list$1tuple2$2char$phsNode$ph$ph* _o2_saved_6;
    struct tuple2$2char$phsNode$ph* it_38;
    struct tuple2$2char$phsNode$ph* multiple_assign_var3
;    char*  label_39  =0;
    struct sNode* node_40=0;
    _Bool Value_41;
    struct CVALUE*  come_value_42  ;
    struct sType*  type__43  ;
    struct sType*  type2__44  ;
    struct sType*  type3_  ;
    struct sType*  __dec_obj77  ;
    int method_generics_num_47;
    int n_48;
    struct list$1sType$ph* _o2_saved_7;
    struct sType*  it_49  ;
    int method_generics_num_50;
    struct tuple2$2char$phsGenericsFun$p* multiple_assign_var4
;    char*  name_57  =0;
    struct sGenericsFun*  gfun_58  =0;
    char*  __dec_obj81  ;
    struct tuple2$2char$phsGenericsFun$p* multiple_assign_var5
;    char*  name_59  =0;
    struct sGenericsFun*  gfun_60  =0;
    char*  __dec_obj82  ;
    struct list$1CVALUE$ph* come_params_61;
    struct list$1tuple2$2char$phsNode$ph$ph* _o2_saved_8;
    struct tuple2$2char$phsNode$ph* it_62;
    struct tuple2$2char$phsNode$ph* multiple_assign_var6
;    char*  label_63  =0;
    struct sNode* node_64=0;
    _Bool Value_65;
    struct CVALUE*  come_value_66  ;
    struct sType*  type__67  ;
    struct sType*  __dec_obj83  ;
    char*  type1  ;
    char*  type2  ;
    struct CVALUE*  come_value_68  ;
    char*  __dec_obj84  ;
    struct sType*  __dec_obj85  ;
    struct CVALUE*  come_value_69  ;
    char*  __dec_obj86  ;
    struct sType*  __dec_obj87  ;
    struct list$1CVALUE$ph* come_params_70;
    int i_71;
    struct sType*  result_type_72  ;
    struct list$1tuple2$2char$phsNode$ph$ph* _o2_saved_9;
    struct tuple2$2char$phsNode$ph* it_73;
    struct tuple2$2char$phsNode$ph* multiple_assign_var7
;    char*  label_74  =0;
    struct sNode* node_75=0;
    _Bool Value_76;
    struct CVALUE*  come_value_77  ;
    struct sType*  type__78  ;
    struct sType*  __dec_obj88  ;
    struct sType*  __dec_obj89  ;
    struct buffer*  buf_79  ;
    int j_80;
    struct list$1CVALUE$ph* _o2_saved_10;
    struct CVALUE*  it_81  ;
    struct CVALUE*  come_value_82  ;
    char*  __dec_obj90  ;
    struct sType*  __dec_obj91  ;
    struct list$1CVALUE$ph* come_params_83;
    int i_84;
    struct list$1tuple2$2char$phsNode$ph$ph* _o2_saved_11;
    struct tuple2$2char$phsNode$ph* it_85;
    struct tuple2$2char$phsNode$ph* multiple_assign_var8
;    char*  label_86  =0;
    struct sNode* node_87=0;
    _Bool Value_88;
    struct CVALUE*  come_value_89  ;
    struct sType*  type__90  ;
    struct sType*  __dec_obj92  ;
    struct buffer*  buf_91  ;
    int j_92;
    struct list$1CVALUE$ph* _o2_saved_12;
    struct CVALUE*  it_93  ;
    struct sType*  result_type_94  ;
    struct CVALUE*  come_value_95  ;
    char*  __dec_obj93  ;
    struct sType*  __dec_obj94  ;
    struct list$1CVALUE$ph* come_params_96;
    int i_97;
    struct sType*  result_type_98  ;
    struct list$1tuple2$2char$phsNode$ph$ph* _o2_saved_13;
    struct tuple2$2char$phsNode$ph* it_99;
    struct tuple2$2char$phsNode$ph* multiple_assign_var9
;    char*  label_100  =0;
    struct sNode* node_101=0;
    _Bool Value_102;
    struct CVALUE*  come_value_103  ;
    struct sType*  type__104  ;
    struct sType*  __dec_obj95  ;
    struct sType*  __dec_obj96  ;
    struct buffer*  buf_105  ;
    int j_106;
    struct list$1CVALUE$ph* _o2_saved_14;
    struct CVALUE*  it_107  ;
    struct CVALUE*  come_value_108  ;
    char*  __dec_obj97  ;
    _Bool atomic_builtin;
    struct sType*  __dec_obj98  ;
    struct sType*  __dec_obj99  ;
    struct sType*  t  ;
    _Bool use_value_param;
    struct sType*  __dec_obj100  ;
    struct sType*  __dec_obj101  ;
    struct sType*  __dec_obj102  ;
    struct sType*  __dec_obj103  ;
    struct sType*  __dec_obj104  ;
    char*  __dec_obj105  ;
    char*  __dec_obj106  ;
    char* p;
    int version;
    char* p2;
    int i_109;
    char*  new_fun_name  ;
    char*  __dec_obj107  ;
    char*  new_fun_name_110  ;
    _Bool _conditional_value_X2;
    char*  __dec_obj108  ;
    int i_111;
    char*  new_fun_name_112  ;
    _Bool _conditional_value_X3;
    char*  __dec_obj109  ;
    struct sFun*  fun_113  ;
    struct list$1CVALUE$ph* come_params_114;
    int i_115;
    struct sType*  result_type_116  ;
    struct list$1tuple2$2char$phsNode$ph$ph* _o2_saved_15;
    struct tuple2$2char$phsNode$ph* it_117;
    struct tuple2$2char$phsNode$ph* multiple_assign_var10
;    char*  label_118  =0;
    struct sNode* node_119=0;
    _Bool Value_120;
    struct CVALUE*  come_value_121  ;
    struct sType*  type__122  ;
    struct sType*  __dec_obj110  ;
    struct sType*  __dec_obj111  ;
    struct buffer*  buf_123  ;
    int j_124;
    struct list$1CVALUE$ph* _o2_saved_16;
    struct CVALUE*  it_125  ;
    struct CVALUE*  come_value_126  ;
    char*  __dec_obj112  ;
    struct sType*  __dec_obj113  ;
    struct sType*  result_type_127  ;
    struct list$1sType$ph* param_types;
    struct list$1sType$ph* _o2_saved_17;
    struct sType*  it_128  ;
    struct sType*  it2_  ;
    struct sType*  it2  ;
    struct sType*  result_type_  ;
    struct sType*  __dec_obj114  ;
    struct list$1CVALUE$ph* come_params_129;
    int i_130;
    struct list$1tuple2$2char$phsNode$ph$ph* _o2_saved_18;
    struct tuple2$2char$phsNode$ph* it_131;
    struct tuple2$2char$phsNode$ph* multiple_assign_var11
;    char*  label_132  =0;
    struct sNode* node_133=0;
    _Bool Value_134;
    struct CVALUE*  come_value_135  ;
    struct sType*  type__136  ;
    struct sType*  __dec_obj115  ;
    _Bool check;
    int n_137;
    struct list$1char$ph* _o2_saved_19;
    char*  it_139  ;
    int i_142;
    struct list$1tuple2$2char$phsNode$ph$ph* _o2_saved_20;
    struct tuple2$2char$phsNode$ph* it_143;
    struct tuple2$2char$phsNode$ph* multiple_assign_var12
;    char*  label_144  =0;
    struct sNode* node_145=0;
    _Bool Value_146;
    struct CVALUE*  come_value_147  ;
    struct sType*  type__148  ;
    struct sType*  __dec_obj117  ;
    _Bool Value_149;
    struct CVALUE*  come_value_150  ;
    struct sType*  type__151  ;
    struct sType*  __dec_obj118  ;
    _Bool _conditional_value_X4;
    char*  default_param  ;
    char* param_name;
    struct buffer*  source  ;
    char* p_154;
    char* head;
    int sline;
    struct buffer*  __dec_obj119  ;
    struct span$1char$p* __dec_obj120;
    _Bool no_output_come_code_155;
    struct sNode* node_156;
    _Bool Value_157;
    struct buffer*  __dec_obj121  ;
    struct span$1char$p* __dec_obj122;
    struct CVALUE*  come_value_158  ;
    struct sType*  type__159  ;
    struct sType*  __dec_obj123  ;
    struct sNode* _inf_value2;
    struct sCurrentNode* _inf_obj_value2;
    struct sNode* current_stack_frame_node;
    _Bool Value_160;
    struct CVALUE*  come_value_161  ;
    struct sType*  type__162  ;
    struct sType*  __dec_obj125  ;
    struct buffer*  method_block2  ;
    struct sType*  method_block_type  ;
    char*  class_name  ;
    struct sClass*  current_stack_frame_struct  ;
    int num_method_block;
    struct sType*  result_type_163  ;
    struct sType*  result_type2_  ;
    struct sType*  result_type2  ;
    struct list$1sType$ph* param_types_164;
    struct list$1char$ph* param_names;
    struct buffer*  all_alhabet_sname  ;
    char* p_165;
    struct list$1sType$ph* _o2_saved_21;
    struct sType*  it_166  ;
    struct sType*  param_type  ;
    char*  param_name_167  ;
    char*  param_name_168  ;
    struct sType*  param_type2_  ;
    struct sType*  param_type2  ;
    char*  param_name_169  ;
    struct sType*  param_type2__170  ;
    struct sType*  param_type2_171  ;
    struct buffer*  source3  ;
    char* p_172;
    char* head_173;
    int sline_174;
    struct buffer*  __dec_obj126  ;
    struct span$1char$p* __dec_obj127;
    struct sNode* node_175;
    _Bool Value_176;
    char* method_block_name;
    struct CVALUE*  come_value2  ;
    struct sFun*  fun2  ;
    struct sType*  method_block_type2  ;
    char*  __dec_obj128  ;
    struct sType*  __dec_obj129  ;
    struct buffer*  __dec_obj130  ;
    struct span$1char$p* __dec_obj131;
    struct buffer*  buf_177  ;
    char*  __dec_obj132  ;
    char*  __dec_obj133  ;
    char*  __dec_obj134  ;
    int j_178;
    struct list$1CVALUE$ph* _o2_saved_22;
    struct CVALUE*  it_179  ;
    struct CVALUE*  come_value_180  ;
    char*  __dec_obj135  ;
    struct sType*  __dec_obj136  ;
    memset(&type__90, 0, sizeof(type__90));
    memset(&t, 0, sizeof(t));
    memset(&i_109, 0, sizeof(i_109));
    fun_name=(char* )come_increment_ref_count(self->fun_name, "08call.nc", 422, 602);
    params=self->params;
    method_block=self->method_block;
    method_block_sline=self->method_block_sline;
    var_=get_variable_from_table(info->lv_table,fun_name);
    if(var_==((void*)0)) {
        var_=get_variable_from_table(info->gv_table,fun_name);
    }
    if(var_) {
        lambda_type=var_->mType;
        if(string_operator_not_equals(lambda_type->mClass->mName,"lambda")) {
            err_msg(info,"%s is not lambda, can't call",fun_name);
                        __result_obj__0 = (_Bool)1;
            (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 439, 603));
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        result_type=(struct sType* )come_increment_ref_count(sType_clone(lambda_type->mResultType), "08call.nc", 442, 604);
        if(result_type) {
            result_type->mStatic=(_Bool)0;
        }
        __right_value0 = (void*)0;
        come_params=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "08call.nc", 447, 605, "struct list$1CVALUE$ph*"), "08call.nc", 447, 611)), "08call.nc", 447, 612);
        if(list$1sType$ph_length(lambda_type->mParamTypes)!=list$1tuple2$2char$phsNode$ph$ph_length(params)&&!lambda_type->mVarArgs) {
            err_msg(info,"invalid param number(%s). function param number is %d. caller param number is %d",fun_name,list$1sType$ph_length(lambda_type->mParamTypes),list$1tuple2$2char$phsNode$ph$ph_length(params));
                        __result_obj__0 = (_Bool)1;
            come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 451, 613);
            come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 451, 614);
            (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 451, 615));
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        i=0;
        for(_o2_saved_3=params,it=list$1tuple2$2char$phsNode$ph$ph_begin(_o2_saved_3)        ;!list$1tuple2$2char$phsNode$ph$ph_end(_o2_saved_3);it=list$1tuple2$2char$phsNode$ph$ph_next(_o2_saved_3)){
            multiple_assign_var1=it;
            label=(char* )come_increment_ref_count(multiple_assign_var1->v1, "08call.nc", 456, 616);
            node=(struct sNode*)come_increment_ref_count(multiple_assign_var1->v2, "08call.nc", 456, 617);
            Value=node_compile(node,info);
            if(!Value) {
                                __result_obj__0 = (_Bool)0;
                (label = come_decrement_ref_count(label, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 459, 618));
                ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "08call.nc", 459, 619):(void*)0);
                come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 459, 620);
                come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 459, 621);
                (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 459, 622));
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
            __right_value0 = (void*)0;
            come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "08call.nc", 462, 623);
            __right_value0 = (void*)0;
            type_=(struct sType* )come_increment_ref_count(sType_clone(come_value->type), "08call.nc", 464, 624);
            __right_value0 = (void*)0;
            type2_=(struct sType* )come_increment_ref_count(solve_generics(type_,info->generics_type,info), "08call.nc", 465, 625);
            __right_value0 = (void*)0;
            __dec_obj70=come_value->type,
            come_value->type=(struct sType* )come_increment_ref_count(solve_method_generics(type2_,info), "08call.nc", 466, 627);
            come_call_finalizer(sType_finalize, __dec_obj70,(void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc", 466, 626);
            if(__right_value0 = (void*)0,
({(_conditional_value_X0=(lambda_type->mVarArgs&&((struct sType* )(__right_value0=list$1sType$ph_operator_load_element(lambda_type->mParamTypes,i)))==((void*)0)));            come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "08call.nc}", 468, 646);
_conditional_value_X0;})) {
            }
            else {
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                check_assign_type(((char*)(__right_value2=xsprintf("\%s calling param #\%s",((char* )(__right_value0=string_to_string(fun_name))),((char* )(__right_value1=int_to_string(i)))))),((struct sType* )(__right_value3=list$1sType$ph_operator_load_element(lambda_type->mParamTypes,i))),come_value->type,come_value,info);
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "08call.nc", 471, 647));
                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "08call.nc", 471, 648));
                (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0, "08call.nc", 471, 649));
                come_call_finalizer(sType_finalize, __right_value3, (void*)0, (void*)0, 0, 1, 0, (void*)0, "08call.nc}", 471, 650);
                if(__right_value0 = (void*)0,
({(_conditional_value_X1=(((struct sType* )(__right_value0=list$1sType$ph_operator_load_element(lambda_type->mParamTypes,i)))->mHeap&&come_value->type->mHeap));                come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "08call.nc}", 473, 651);
_conditional_value_X1;})) {
                    __right_value0 = (void*)0;
                    std_move(((struct sType* )(__right_value0=list$1sType$ph_operator_load_element(lambda_type->mParamTypes,i))),come_value->type,come_value,info);
                    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "08call.nc}", 474, 652);
                }
            }
            list$1CVALUE$ph_push_back(come_params,(struct CVALUE* )come_increment_ref_count(come_value, "08call.nc", 478, 653));
            i++;
            (label = come_decrement_ref_count(label, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 484, 654));
            ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "08call.nc", 484, 655):(void*)0);
            come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 484, 656);
            come_call_finalizer(sType_finalize, type_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 484, 657);
            come_call_finalizer(sType_finalize, type2_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 484, 658);
        }
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "08call.nc", 484, 659, "struct buffer* "), "08call.nc", 484, 660)), "08call.nc", 484, 661);
        buffer_append_str(buf,var_->mCValueName);
        buffer_append_str(buf,"(");
        j=0;
        for(_o2_saved_4=(struct list$1CVALUE$ph*)come_increment_ref_count(come_params, "08call.nc", 490, 662),it_21=list$1CVALUE$ph_begin(_o2_saved_4)        ;!list$1CVALUE$ph_end(_o2_saved_4);it_21=list$1CVALUE$ph_next(_o2_saved_4)){
            buffer_append_str(buf,it_21->c_value);
            if(j!=list$1CVALUE$ph_length(come_params)-1) {
                buffer_append_str(buf,",");
            }
            j++;
        }
        buffer_append_str(buf,")");
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        come_value_23=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "08call.nc", 501, 663, "struct CVALUE* "), "08call.nc", 501, 664)), "08call.nc", 501, 665);
        __right_value0 = (void*)0;
        __dec_obj71=come_value_23->c_value,
        come_value_23->c_value=(char* )come_increment_ref_count(buffer_to_string(buf), "08call.nc", 502, 667);
        __dec_obj71 = come_decrement_ref_count(__dec_obj71, (void*)0, (void*)0, 0,0, (void*)0, "08call.nc", 502, 666);
        __right_value0 = (void*)0;
        __dec_obj72=come_value_23->type,
        come_value_23->type=(struct sType* )come_increment_ref_count(sType_clone(result_type), "08call.nc", 503, 669);
        come_call_finalizer(sType_finalize, __dec_obj72,(void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc", 503, 668);
        if(come_value_23->type) {
            come_value_23->type->mStatic=(_Bool)0;
        }
        come_value_23->var=((void*)0);
        if(lambda_type->mResultType->mHeap) {
            append_object_to_right_values(come_value_23,lambda_type->mResultType,info,(_Bool)0,((void*)0),((void*)0),((void*)0));
        }
        add_come_last_code(info,"%s",come_value_23->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value_23, "08call.nc", 515, 670));
        info->calling_fun=((void*)0);
                __result_obj__0 = (_Bool)1;
        come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 519, 671);
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 519, 672);
        come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 519, 673);
        come_call_finalizer(list$1CVALUE$ph$p_finalize, _o2_saved_4, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 519, 674);
        come_call_finalizer(CVALUE_finalize, come_value_23, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 519, 675);
        (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 519, 676));
        neo_current_frame = fr.prev;
        return __result_obj__0;
        come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 521, 677);
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 521, 678);
        come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 521, 679);
        come_call_finalizer(list$1CVALUE$ph$p_finalize, _o2_saved_4, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 521, 680);
        come_call_finalizer(CVALUE_finalize, come_value_23, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 521, 681);
    }
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    generics_fun=((struct sGenericsFun* )(__right_value1=map$2char$phsGenericsFun$ph_at(info->generics_funcs,((char* )(__right_value0=__builtin_string(fun_name))),((void*)0),(_Bool)0)));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "08call.nc", 521, 707));
    method_generics=(_Bool)0;
    if(generics_fun) {
        method_generics=list$1char$ph_length(generics_fun->mMethodGenericsTypeNames)>0;
    }
    if((self->method_generics_types&&list$1sType$ph_length(self->method_generics_types)>0)||method_generics) {
        if(list$1sType$ph_length(self->method_generics_types)==0) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            method_generics_types=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "08call.nc", 528, 708, "struct list$1sType$ph*"), "08call.nc", 528, 709)), "08call.nc", 528, 710);
            __right_value0 = (void*)0;
            multiple_assign_var2=((struct tuple2$2char$phsGenericsFun$p*)(__right_value0=make_method_generics_function((char* )come_increment_ref_count(fun_name, "08call.nc", 529, 711),method_generics_types,info)));
            name=(char* )come_increment_ref_count(multiple_assign_var2->v1, "08call.nc", 529, 712);
            gfun=multiple_assign_var2->v2;
            come_call_finalizer(tuple2$2char$phsGenericsFun$p$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "08call.nc}", 529, 714);
            generics_fun_name=(char* )come_increment_ref_count(name, "08call.nc", 530, 715);
            __right_value0 = (void*)0;
            fun=((struct sFun* )(__right_value0=map$2char$phsFun$ph_at(info->funcs,generics_fun_name,((void*)0),(_Bool)0)));
            if(method_block) {
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                come_params_24=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "08call.nc", 535, 731, "struct list$1CVALUE$ph*"), "08call.nc", 535, 732)), "08call.nc", 535, 733);
                __right_value0 = (void*)0;
                fun_25=((struct sFun* )(__right_value0=map$2char$phsFun$ph_at(info->funcs,generics_fun_name,((void*)0),(_Bool)0)));
                no_output_come_code=info->no_output_come_code;
                info->no_output_come_code=(_Bool)1;
                if(!compile_method_block(method_block,come_params_24,fun_25,fun_name,method_block_sline,info,(_Bool)1)) {
                                        __result_obj__0 = (_Bool)0;
                    come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_24, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 542, 734);
                    come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 542, 735);
                    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 542, 736));
                    (generics_fun_name = come_decrement_ref_count(generics_fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 542, 737));
                    (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 542, 738));
                    neo_current_frame = fr.prev;
                    return __result_obj__0;
                }
                info->no_output_come_code=no_output_come_code;
                __right_value0 = (void*)0;
                method_block_node=((struct CVALUE* )(__right_value0=list$1CVALUE$ph_operator_load_element(come_params_24,-1)));
                __right_value0 = (void*)0;
                method_block_lambda_type=(struct sType* )come_increment_ref_count(sType_clone(method_block_node->type), "08call.nc", 547, 757);
                __right_value0 = (void*)0;
                method_block_result_type=(struct sType* )come_increment_ref_count(sType_clone(info->come_method_block_function_result_type), "08call.nc", 548, 758);
                __right_value0 = (void*)0;
                generics_fun_method_block_lambda_type=((struct sType* )(__right_value0=list$1sType$ph_operator_load_element(generics_fun->mParamTypes,-1)));
                generics_fun_method_block_result_type=generics_fun_method_block_lambda_type->mResultType;
                if(generics_fun_method_block_result_type->mClass->mMethodGenerics) {
                    method_generics_num=generics_fun_method_block_result_type->mClass->mMethodGenericsNum;
                    __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    list$1sType$ph_operator_store_element(method_generics_types,method_generics_num,(struct sType* )come_increment_ref_count(sType_clone(method_block_result_type), "08call.nc", 555, 783));
                }
                n=0;
                for(_o2_saved_5=(struct list$1sType$ph*)come_increment_ref_count(generics_fun_method_block_lambda_type->mParamTypes, "08call.nc", 558, 784),it_32=list$1sType$ph_begin(_o2_saved_5)                ;!list$1sType$ph_end(_o2_saved_5);it_32=list$1sType$ph_next(_o2_saved_5)){
                    if(it_32->mClass->mMethodGenerics) {
                        method_generics_num_34=it_32->mClass->mMethodGenericsNum;
                        __right_value0 = (void*)0;
                        __right_value1 = (void*)0;
                        __right_value2 = (void*)0;
                        __right_value3 = (void*)0;
                        list$1sType$ph_operator_store_element(method_generics_types,method_generics_num_34,(struct sType* )come_increment_ref_count(sType_clone(((struct sType* )(__right_value2=list$1sType$ph_operator_load_element(method_block_lambda_type->mParamTypes,n)))), "08call.nc", 561, 785));
                        come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "08call.nc}", 561, 786);
                        come_call_finalizer(sType_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0, "08call.nc}", 561, 787);
                    }
                    n++;
                }
                come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_24, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 567, 788);
                come_call_finalizer(sType_finalize, method_block_lambda_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 567, 789);
                come_call_finalizer(sType_finalize, method_block_result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 567, 790);
                come_call_finalizer(list$1sType$ph$p_finalize, _o2_saved_5, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 567, 791);
            }
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            come_params_35=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "08call.nc", 567, 792, "struct list$1CVALUE$ph*"), "08call.nc", 567, 793)), "08call.nc", 567, 794);
            i_36=0;
            result_type_37=((void*)0);
            for(_o2_saved_6=params,it_38=list$1tuple2$2char$phsNode$ph$ph_begin(_o2_saved_6)            ;!list$1tuple2$2char$phsNode$ph$ph_end(_o2_saved_6);it_38=list$1tuple2$2char$phsNode$ph$ph_next(_o2_saved_6)){
                multiple_assign_var3=it_38;
                label_39=(char* )come_increment_ref_count(multiple_assign_var3->v1, "08call.nc", 572, 795);
                node_40=(struct sNode*)come_increment_ref_count(multiple_assign_var3->v2, "08call.nc", 572, 796);
                Value_41=node_compile(node_40,info);
                if(!Value_41) {
                                        __result_obj__0 = (_Bool)0;
                    (label_39 = come_decrement_ref_count(label_39, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 575, 797));
                    ((node_40) ? node_40 = come_decrement_ref_count(node_40, ((struct sNode*)node_40)->finalize, ((struct sNode*)node_40)->_protocol_obj, 0, 0,(void*)0, "08call.nc", 575, 798):(void*)0);
                    come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 575, 799);
                    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 575, 800));
                    (generics_fun_name = come_decrement_ref_count(generics_fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 575, 801));
                    come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_35, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 575, 802);
                    come_call_finalizer(sType_finalize, result_type_37, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 575, 803);
                    (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 575, 804));
                    neo_current_frame = fr.prev;
                    return __result_obj__0;
                }
                __right_value0 = (void*)0;
                come_value_42=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "08call.nc", 578, 805);
                __right_value0 = (void*)0;
                type__43=(struct sType* )come_increment_ref_count(sType_clone(come_value_42->type), "08call.nc", 580, 806);
                __right_value0 = (void*)0;
                type2__44=(struct sType* )come_increment_ref_count(solve_generics(type__43,info->generics_type,info), "08call.nc", 581, 807);
                __right_value0 = (void*)0;
                type3_=(struct sType* )come_increment_ref_count(solve_method_generics(type2__44,info), "08call.nc", 582, 808);
                __dec_obj77=come_value_42->type,
                come_value_42->type=(struct sType* )come_increment_ref_count(type3_, "08call.nc", 583, 810);
                come_call_finalizer(sType_finalize, __dec_obj77,(void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc", 583, 809);
                list$1CVALUE$ph_add(come_params_35,(struct CVALUE* )come_increment_ref_count(come_value_42, "08call.nc", 585, 825));
                (label_39 = come_decrement_ref_count(label_39, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 588, 826));
                ((node_40) ? node_40 = come_decrement_ref_count(node_40, ((struct sNode*)node_40)->finalize, ((struct sNode*)node_40)->_protocol_obj, 0, 0,(void*)0, "08call.nc", 588, 827):(void*)0);
                come_call_finalizer(CVALUE_finalize, come_value_42, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 588, 828);
                come_call_finalizer(sType_finalize, type__43, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 588, 829);
                come_call_finalizer(sType_finalize, type2__44, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 588, 830);
                come_call_finalizer(sType_finalize, type3_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 588, 831);
            }
            if(generics_fun->mResultType->mClass->mMethodGenerics) {
                method_generics_num_47=generics_fun->mResultType->mClass->mMethodGenericsNum;
                if(info->function_result_type) {
                    __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    list$1sType$ph_operator_store_element(method_generics_types,method_generics_num_47,(struct sType* )come_increment_ref_count(sType_clone(info->function_result_type), "08call.nc", 592, 832));
                }
            }
            n_48=0;
            for(_o2_saved_7=(struct list$1sType$ph*)come_increment_ref_count(generics_fun->mParamTypes, "08call.nc", 596, 833),it_49=list$1sType$ph_begin(_o2_saved_7)            ;!list$1sType$ph_end(_o2_saved_7);it_49=list$1sType$ph_next(_o2_saved_7)){
                if(it_49->mClass->mMethodGenerics) {
                    method_generics_num_50=it_49->mClass->mMethodGenericsNum;
                    if(n_48<list$1CVALUE$ph_length(come_params_35)) {
                        __right_value0 = (void*)0;
                        __right_value1 = (void*)0;
                        __right_value2 = (void*)0;
                        __right_value3 = (void*)0;
                        list$1sType$ph_operator_store_element(method_generics_types,method_generics_num_50,(struct sType* )come_increment_ref_count(sType_clone(((struct CVALUE* )(__right_value2=list$1CVALUE$ph_operator_load_element(come_params_35,n_48)))->type), "08call.nc", 600, 834));
                        come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "08call.nc}", 600, 835);
                        come_call_finalizer(CVALUE_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0, "08call.nc}", 600, 836);
                    }
                }
                n_48++;
            }
            map$2char$phsFun$ph_remove(info->funcs,(char* )come_increment_ref_count(generics_fun_name, "08call.nc", 606, 845),(_Bool)0);
            __right_value0 = (void*)0;
            (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 608, 847));
            multiple_assign_var4=((struct tuple2$2char$phsGenericsFun$p*)(__right_value0=make_method_generics_function((char* )come_increment_ref_count(fun_name, "08call.nc", 608, 846),method_generics_types,info)));
            name_57=(char* )come_increment_ref_count(multiple_assign_var4->v1, "08call.nc", 608, 848);
            gfun_58=multiple_assign_var4->v2;
            come_call_finalizer(tuple2$2char$phsGenericsFun$p$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "08call.nc}", 608, 849);
            __dec_obj81=fun_name,
            fun_name=(char* )come_increment_ref_count(name_57, "08call.nc", 609, 851);
            __dec_obj81 = come_decrement_ref_count(__dec_obj81, (void*)0, (void*)0, 0,0, (void*)0, "08call.nc", 609, 850);
            come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 615, 852);
            (generics_fun_name = come_decrement_ref_count(generics_fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 615, 853));
            come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_35, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 615, 854);
            come_call_finalizer(sType_finalize, result_type_37, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 615, 855);
            come_call_finalizer(list$1sType$ph$p_finalize, _o2_saved_7, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 615, 856);
            (name_57 = come_decrement_ref_count(name_57, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 615, 857));
        }
        else {
            __right_value0 = (void*)0;
            multiple_assign_var5=((struct tuple2$2char$phsGenericsFun$p*)(__right_value0=make_method_generics_function((char* )come_increment_ref_count(fun_name, "08call.nc", 612, 858),self->method_generics_types,info)));
            name_59=(char* )come_increment_ref_count(multiple_assign_var5->v1, "08call.nc", 612, 859);
            gfun_60=multiple_assign_var5->v2;
            come_call_finalizer(tuple2$2char$phsGenericsFun$p$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "08call.nc}", 612, 860);
            __dec_obj82=fun_name,
            fun_name=(char* )come_increment_ref_count(name_59, "08call.nc", 613, 862);
            __dec_obj82 = come_decrement_ref_count(__dec_obj82, (void*)0, (void*)0, 0,0, (void*)0, "08call.nc", 613, 861);
            (name_59 = come_decrement_ref_count(name_59, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 615, 863));
        }
    }
    if(string_operator_equals(fun_name,"__builtin_types_compatible_p")) {
        if(list$1tuple2$2char$phsNode$ph$ph_length(params)!=2) {
            err_msg(info,"__builtin_types_compatible_p params error");
                        __result_obj__0 = (_Bool)0;
            (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 622, 864));
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        come_params_61=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "08call.nc", 625, 865, "struct list$1CVALUE$ph*"), "08call.nc", 625, 866)), "08call.nc", 625, 867);
        for(_o2_saved_8=params,it_62=list$1tuple2$2char$phsNode$ph$ph_begin(_o2_saved_8)        ;!list$1tuple2$2char$phsNode$ph$ph_end(_o2_saved_8);it_62=list$1tuple2$2char$phsNode$ph$ph_next(_o2_saved_8)){
            multiple_assign_var6=it_62;
            label_63=(char* )come_increment_ref_count(multiple_assign_var6->v1, "08call.nc", 627, 868);
            node_64=(struct sNode*)come_increment_ref_count(multiple_assign_var6->v2, "08call.nc", 627, 869);
            Value_65=node_compile(node_64,info);
            if(!Value_65) {
                                __result_obj__0 = (_Bool)0;
                (label_63 = come_decrement_ref_count(label_63, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 630, 870));
                ((node_64) ? node_64 = come_decrement_ref_count(node_64, ((struct sNode*)node_64)->finalize, ((struct sNode*)node_64)->_protocol_obj, 0, 0,(void*)0, "08call.nc", 630, 871):(void*)0);
                come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_61, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 630, 872);
                (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 630, 873));
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
            __right_value0 = (void*)0;
            come_value_66=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "08call.nc", 633, 874);
            __right_value0 = (void*)0;
            type__67=(struct sType* )come_increment_ref_count(solve_generics(come_value_66->type,info->generics_type,info), "08call.nc", 635, 875);
            __right_value0 = (void*)0;
            __dec_obj83=come_value_66->type,
            come_value_66->type=(struct sType* )come_increment_ref_count(solve_method_generics(type__67,info), "08call.nc", 636, 877);
            come_call_finalizer(sType_finalize, __dec_obj83,(void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc", 636, 876);
            list$1CVALUE$ph_push_back(come_params_61,(struct CVALUE* )come_increment_ref_count(come_value_66, "08call.nc", 638, 878));
            (label_63 = come_decrement_ref_count(label_63, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 641, 879));
            ((node_64) ? node_64 = come_decrement_ref_count(node_64, ((struct sNode*)node_64)->finalize, ((struct sNode*)node_64)->_protocol_obj, 0, 0,(void*)0, "08call.nc", 641, 880):(void*)0);
            come_call_finalizer(CVALUE_finalize, come_value_66, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 641, 881);
            come_call_finalizer(sType_finalize, type__67, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 641, 882);
        }
        __right_value0 = (void*)0;
        type1=(char* )come_increment_ref_count(((struct CVALUE* )(__right_value0=list$1CVALUE$ph_operator_load_element(come_params_61,0)))->c_value, "08call.nc", 641, 883);
        come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "08call.nc}", 641, 884);
        __right_value0 = (void*)0;
        type2=(char* )come_increment_ref_count(((struct CVALUE* )(__right_value0=list$1CVALUE$ph_operator_load_element(come_params_61,1)))->c_value, "08call.nc", 642, 885);
        come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "08call.nc}", 642, 886);
        if(string_operator_equals(type1,type2)) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            come_value_68=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "08call.nc", 645, 887, "struct CVALUE* "), "08call.nc", 645, 888)), "08call.nc", 645, 889);
            __right_value0 = (void*)0;
            __dec_obj84=come_value_68->c_value,
            come_value_68->c_value=(char*)come_increment_ref_count(xsprintf("1"), "08call.nc", 647, 891);
            __dec_obj84 = come_decrement_ref_count(__dec_obj84, (void*)0, (void*)0, 0,0, (void*)0, "08call.nc", 647, 890);
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            __dec_obj85=come_value_68->type,
            come_value_68->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "08call.nc", 648, 892, "struct sType* "), "08call.nc", 648, 893),(char*)come_increment_ref_count(xsprintf("int"), "08call.nc", 648, 894),(_Bool)0,info,(_Bool)0,0), "08call.nc", 648, 896);
            come_call_finalizer(sType_finalize, __dec_obj85,(void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc", 648, 895);
            come_value_68->var=((void*)0);
            add_come_last_code(info,"%s",come_value_68->c_value);
            list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value_68, "08call.nc", 653, 897));
                        __result_obj__0 = (_Bool)1;
            come_call_finalizer(CVALUE_finalize, come_value_68, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 655, 898);
            come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_61, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 655, 899);
            (type1 = come_decrement_ref_count(type1, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 655, 900));
            (type2 = come_decrement_ref_count(type2, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 655, 901));
            (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 655, 902));
            neo_current_frame = fr.prev;
            return __result_obj__0;
            come_call_finalizer(CVALUE_finalize, come_value_68, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 670, 903);
        }
        else {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            come_value_69=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "08call.nc", 658, 904, "struct CVALUE* "), "08call.nc", 658, 905)), "08call.nc", 658, 906);
            __right_value0 = (void*)0;
            __dec_obj86=come_value_69->c_value,
            come_value_69->c_value=(char*)come_increment_ref_count(xsprintf("0"), "08call.nc", 660, 908);
            __dec_obj86 = come_decrement_ref_count(__dec_obj86, (void*)0, (void*)0, 0,0, (void*)0, "08call.nc", 660, 907);
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            __dec_obj87=come_value_69->type,
            come_value_69->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "08call.nc", 661, 909, "struct sType* "), "08call.nc", 661, 910),(char*)come_increment_ref_count(xsprintf("void"), "08call.nc", 661, 911),(_Bool)0,info,(_Bool)0,0), "08call.nc", 661, 913);
            come_call_finalizer(sType_finalize, __dec_obj87,(void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc", 661, 912);
            come_value_69->var=((void*)0);
            add_come_last_code(info,"%s",come_value_69->c_value);
            list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value_69, "08call.nc", 666, 914));
                        __result_obj__0 = (_Bool)1;
            come_call_finalizer(CVALUE_finalize, come_value_69, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 668, 915);
            come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_61, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 668, 916);
            (type1 = come_decrement_ref_count(type1, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 668, 917));
            (type2 = come_decrement_ref_count(type2, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 668, 918));
            (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 668, 919));
            neo_current_frame = fr.prev;
            return __result_obj__0;
            come_call_finalizer(CVALUE_finalize, come_value_69, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 670, 920);
        }
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_61, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1174, 921);
        (type1 = come_decrement_ref_count(type1, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 1174, 922));
        (type2 = come_decrement_ref_count(type2, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 1174, 923));
    }
    else if(string_operator_equals(fun_name,"__builtin_va_arg")) {
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        come_params_70=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "08call.nc", 672, 924, "struct list$1CVALUE$ph*"), "08call.nc", 672, 925)), "08call.nc", 672, 926);
        i_71=0;
        result_type_72=((void*)0);
        for(_o2_saved_9=params,it_73=list$1tuple2$2char$phsNode$ph$ph_begin(_o2_saved_9)        ;!list$1tuple2$2char$phsNode$ph$ph_end(_o2_saved_9);it_73=list$1tuple2$2char$phsNode$ph$ph_next(_o2_saved_9)){
            multiple_assign_var7=it_73;
            label_74=(char* )come_increment_ref_count(multiple_assign_var7->v1, "08call.nc", 677, 927);
            node_75=(struct sNode*)come_increment_ref_count(multiple_assign_var7->v2, "08call.nc", 677, 928);
            Value_76=node_compile(node_75,info);
            if(!Value_76) {
                                __result_obj__0 = (_Bool)0;
                (label_74 = come_decrement_ref_count(label_74, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 680, 929));
                ((node_75) ? node_75 = come_decrement_ref_count(node_75, ((struct sNode*)node_75)->finalize, ((struct sNode*)node_75)->_protocol_obj, 0, 0,(void*)0, "08call.nc", 680, 930):(void*)0);
                come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_70, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 680, 931);
                come_call_finalizer(sType_finalize, result_type_72, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 680, 932);
                (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 680, 933));
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
            __right_value0 = (void*)0;
            come_value_77=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "08call.nc", 683, 934);
            __right_value0 = (void*)0;
            type__78=(struct sType* )come_increment_ref_count(solve_generics(come_value_77->type,info->generics_type,info), "08call.nc", 685, 935);
            __right_value0 = (void*)0;
            __dec_obj88=come_value_77->type,
            come_value_77->type=(struct sType* )come_increment_ref_count(solve_method_generics(type__78,info), "08call.nc", 686, 937);
            come_call_finalizer(sType_finalize, __dec_obj88,(void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc", 686, 936);
            list$1CVALUE$ph_add(come_params_70,(struct CVALUE* )come_increment_ref_count(come_value_77, "08call.nc", 688, 938));
            __dec_obj89=result_type_72,
            result_type_72=(struct sType* )come_increment_ref_count(come_value_77->type, "08call.nc", 690, 940);
            come_call_finalizer(sType_finalize, __dec_obj89,(void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc", 690, 939);
            (label_74 = come_decrement_ref_count(label_74, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 693, 941));
            ((node_75) ? node_75 = come_decrement_ref_count(node_75, ((struct sNode*)node_75)->finalize, ((struct sNode*)node_75)->_protocol_obj, 0, 0,(void*)0, "08call.nc", 693, 942):(void*)0);
            come_call_finalizer(CVALUE_finalize, come_value_77, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 693, 943);
            come_call_finalizer(sType_finalize, type__78, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 693, 944);
        }
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        buf_79=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "08call.nc", 693, 945, "struct buffer* "), "08call.nc", 693, 946)), "08call.nc", 693, 947);
        buffer_append_str(buf_79,fun_name);
        buffer_append_str(buf_79,"(");
        j_80=0;
        for(_o2_saved_10=(struct list$1CVALUE$ph*)come_increment_ref_count(come_params_70, "08call.nc", 699, 948),it_81=list$1CVALUE$ph_begin(_o2_saved_10)        ;!list$1CVALUE$ph_end(_o2_saved_10);it_81=list$1CVALUE$ph_next(_o2_saved_10)){
            buffer_append_str(buf_79,it_81->c_value);
            if(j_80!=list$1CVALUE$ph_length(come_params_70)-1) {
                buffer_append_str(buf_79,",");
            }
            j_80++;
        }
        buffer_append_str(buf_79,")");
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        come_value_82=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "08call.nc", 710, 949, "struct CVALUE* "), "08call.nc", 710, 950)), "08call.nc", 710, 951);
        __right_value0 = (void*)0;
        __dec_obj90=come_value_82->c_value,
        come_value_82->c_value=(char* )come_increment_ref_count(buffer_to_string(buf_79), "08call.nc", 711, 953);
        __dec_obj90 = come_decrement_ref_count(__dec_obj90, (void*)0, (void*)0, 0,0, (void*)0, "08call.nc", 711, 952);
        __dec_obj91=come_value_82->type,
        come_value_82->type=(struct sType* )come_increment_ref_count(result_type_72, "08call.nc", 712, 955);
        come_call_finalizer(sType_finalize, __dec_obj91,(void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc", 712, 954);
        come_value_82->var=((void*)0);
        add_come_last_code(info,"%s",come_value_82->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value_82, "08call.nc", 717, 956));
                __result_obj__0 = (_Bool)1;
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_70, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 719, 957);
        come_call_finalizer(sType_finalize, result_type_72, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 719, 958);
        come_call_finalizer(buffer_finalize, buf_79, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 719, 959);
        come_call_finalizer(list$1CVALUE$ph$p_finalize, _o2_saved_10, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 719, 960);
        come_call_finalizer(CVALUE_finalize, come_value_82, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 719, 961);
        (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 719, 962));
        neo_current_frame = fr.prev;
        return __result_obj__0;
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_70, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1174, 963);
        come_call_finalizer(sType_finalize, result_type_72, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1174, 964);
        come_call_finalizer(buffer_finalize, buf_79, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1174, 965);
        come_call_finalizer(list$1CVALUE$ph$p_finalize, _o2_saved_10, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1174, 966);
        come_call_finalizer(CVALUE_finalize, come_value_82, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1174, 967);
    }
    else if(string_operator_equals(fun_name,"__builtin_va_copy")) {
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        come_params_83=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "08call.nc", 722, 968, "struct list$1CVALUE$ph*"), "08call.nc", 722, 969)), "08call.nc", 722, 970);
        i_84=0;
        for(_o2_saved_11=params,it_85=list$1tuple2$2char$phsNode$ph$ph_begin(_o2_saved_11)        ;!list$1tuple2$2char$phsNode$ph$ph_end(_o2_saved_11);it_85=list$1tuple2$2char$phsNode$ph$ph_next(_o2_saved_11)){
            multiple_assign_var8=it_85;
            label_86=(char* )come_increment_ref_count(multiple_assign_var8->v1, "08call.nc", 726, 971);
            node_87=(struct sNode*)come_increment_ref_count(multiple_assign_var8->v2, "08call.nc", 726, 972);
            Value_88=node_compile(node_87,info);
            if(!Value_88) {
                                __result_obj__0 = (_Bool)0;
                (label_86 = come_decrement_ref_count(label_86, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 729, 973));
                ((node_87) ? node_87 = come_decrement_ref_count(node_87, ((struct sNode*)node_87)->finalize, ((struct sNode*)node_87)->_protocol_obj, 0, 0,(void*)0, "08call.nc", 729, 974):(void*)0);
                come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_83, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 729, 975);
                (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 729, 976));
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
            __right_value0 = (void*)0;
            come_value_89=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "08call.nc", 732, 977);
            __right_value0 = (void*)0;
            ((struct sType* )(__right_value0=solve_generics(come_value_89->type,info->generics_type,info)));
            come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "08call.nc}", 734, 978);
            __right_value0 = (void*)0;
            __dec_obj92=come_value_89->type,
            come_value_89->type=(struct sType* )come_increment_ref_count(solve_method_generics(type__90,info), "08call.nc", 735, 980);
            come_call_finalizer(sType_finalize, __dec_obj92,(void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc", 735, 979);
            list$1CVALUE$ph_add(come_params_83,(struct CVALUE* )come_increment_ref_count(come_value_89, "08call.nc", 737, 981));
            (label_86 = come_decrement_ref_count(label_86, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 740, 982));
            ((node_87) ? node_87 = come_decrement_ref_count(node_87, ((struct sNode*)node_87)->finalize, ((struct sNode*)node_87)->_protocol_obj, 0, 0,(void*)0, "08call.nc", 740, 983):(void*)0);
            come_call_finalizer(CVALUE_finalize, come_value_89, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 740, 984);
            come_call_finalizer(sType_finalize, type__90, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 740, 985);
        }
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        buf_91=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "08call.nc", 740, 986, "struct buffer* "), "08call.nc", 740, 987)), "08call.nc", 740, 988);
        buffer_append_str(buf_91,fun_name);
        buffer_append_str(buf_91,"(");
        j_92=0;
        for(_o2_saved_12=(struct list$1CVALUE$ph*)come_increment_ref_count(come_params_83, "08call.nc", 746, 989),it_93=list$1CVALUE$ph_begin(_o2_saved_12)        ;!list$1CVALUE$ph_end(_o2_saved_12);it_93=list$1CVALUE$ph_next(_o2_saved_12)){
            buffer_append_str(buf_91,it_93->c_value);
            if(j_92!=list$1CVALUE$ph_length(come_params_83)-1) {
                buffer_append_str(buf_91,",");
            }
            j_92++;
        }
        buffer_append_str(buf_91,")");
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        result_type_94=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "08call.nc", 757, 990, "struct sType* "), "08call.nc", 757, 991),(char*)come_increment_ref_count(xsprintf("void"), "08call.nc", 757, 992),(_Bool)0,info,(_Bool)0,0), "08call.nc", 757, 993);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        come_value_95=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "08call.nc", 759, 994, "struct CVALUE* "), "08call.nc", 759, 995)), "08call.nc", 759, 996);
        __right_value0 = (void*)0;
        __dec_obj93=come_value_95->c_value,
        come_value_95->c_value=(char* )come_increment_ref_count(buffer_to_string(buf_91), "08call.nc", 760, 998);
        __dec_obj93 = come_decrement_ref_count(__dec_obj93, (void*)0, (void*)0, 0,0, (void*)0, "08call.nc", 760, 997);
        __dec_obj94=come_value_95->type,
        come_value_95->type=(struct sType* )come_increment_ref_count(result_type_94, "08call.nc", 761, 1000);
        come_call_finalizer(sType_finalize, __dec_obj94,(void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc", 761, 999);
        come_value_95->var=((void*)0);
        add_come_last_code(info,"%s",come_value_95->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value_95, "08call.nc", 766, 1001));
                __result_obj__0 = (_Bool)1;
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_83, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 768, 1002);
        come_call_finalizer(buffer_finalize, buf_91, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 768, 1003);
        come_call_finalizer(list$1CVALUE$ph$p_finalize, _o2_saved_12, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 768, 1004);
        come_call_finalizer(sType_finalize, result_type_94, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 768, 1005);
        come_call_finalizer(CVALUE_finalize, come_value_95, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 768, 1006);
        (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 768, 1007));
        neo_current_frame = fr.prev;
        return __result_obj__0;
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_83, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1174, 1008);
        come_call_finalizer(buffer_finalize, buf_91, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1174, 1009);
        come_call_finalizer(list$1CVALUE$ph$p_finalize, _o2_saved_12, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1174, 1010);
        come_call_finalizer(sType_finalize, result_type_94, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1174, 1011);
        come_call_finalizer(CVALUE_finalize, come_value_95, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1174, 1012);
    }
    else if((strlen(fun_name)>strlen("__c11_atomic_")&&memcmp(fun_name,"__c11_atomic_",strlen("__c11_atomic"))==0)||(strlen(fun_name)>strlen("__builtin_")&&memcmp(fun_name,"__builtin_",strlen("__builtin"))==0)) {
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        come_params_96=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "08call.nc", 772, 1013, "struct list$1CVALUE$ph*"), "08call.nc", 772, 1014)), "08call.nc", 772, 1015);
        i_97=0;
        result_type_98=((void*)0);
        for(_o2_saved_13=params,it_99=list$1tuple2$2char$phsNode$ph$ph_begin(_o2_saved_13)        ;!list$1tuple2$2char$phsNode$ph$ph_end(_o2_saved_13);it_99=list$1tuple2$2char$phsNode$ph$ph_next(_o2_saved_13)){
            multiple_assign_var9=it_99;
            label_100=(char* )come_increment_ref_count(multiple_assign_var9->v1, "08call.nc", 777, 1016);
            node_101=(struct sNode*)come_increment_ref_count(multiple_assign_var9->v2, "08call.nc", 777, 1017);
            Value_102=node_compile(node_101,info);
            if(!Value_102) {
                                __result_obj__0 = (_Bool)0;
                (label_100 = come_decrement_ref_count(label_100, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 780, 1018));
                ((node_101) ? node_101 = come_decrement_ref_count(node_101, ((struct sNode*)node_101)->finalize, ((struct sNode*)node_101)->_protocol_obj, 0, 0,(void*)0, "08call.nc", 780, 1019):(void*)0);
                come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_96, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 780, 1020);
                come_call_finalizer(sType_finalize, result_type_98, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 780, 1021);
                (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 780, 1022));
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
            __right_value0 = (void*)0;
            come_value_103=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "08call.nc", 783, 1023);
            __right_value0 = (void*)0;
            type__104=(struct sType* )come_increment_ref_count(solve_generics(come_value_103->type,info->generics_type,info), "08call.nc", 785, 1024);
            __right_value0 = (void*)0;
            __dec_obj95=come_value_103->type,
            come_value_103->type=(struct sType* )come_increment_ref_count(solve_method_generics(type__104,info), "08call.nc", 786, 1026);
            come_call_finalizer(sType_finalize, __dec_obj95,(void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc", 786, 1025);
            list$1CVALUE$ph_add(come_params_96,(struct CVALUE* )come_increment_ref_count(come_value_103, "08call.nc", 788, 1027));
            __dec_obj96=result_type_98,
            result_type_98=(struct sType* )come_increment_ref_count(come_value_103->type, "08call.nc", 790, 1029);
            come_call_finalizer(sType_finalize, __dec_obj96,(void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc", 790, 1028);
            (label_100 = come_decrement_ref_count(label_100, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 793, 1030));
            ((node_101) ? node_101 = come_decrement_ref_count(node_101, ((struct sNode*)node_101)->finalize, ((struct sNode*)node_101)->_protocol_obj, 0, 0,(void*)0, "08call.nc", 793, 1031):(void*)0);
            come_call_finalizer(CVALUE_finalize, come_value_103, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 793, 1032);
            come_call_finalizer(sType_finalize, type__104, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 793, 1033);
        }
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        buf_105=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "08call.nc", 793, 1034, "struct buffer* "), "08call.nc", 793, 1035)), "08call.nc", 793, 1036);
        buffer_append_str(buf_105,fun_name);
        buffer_append_str(buf_105,"(");
        j_106=0;
        for(_o2_saved_14=(struct list$1CVALUE$ph*)come_increment_ref_count(come_params_96, "08call.nc", 799, 1037),it_107=list$1CVALUE$ph_begin(_o2_saved_14)        ;!list$1CVALUE$ph_end(_o2_saved_14);it_107=list$1CVALUE$ph_next(_o2_saved_14)){
            buffer_append_str(buf_105,it_107->c_value);
            if(j_106!=list$1CVALUE$ph_length(come_params_96)-1) {
                buffer_append_str(buf_105,",");
            }
            j_106++;
        }
        buffer_append_str(buf_105,")");
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        come_value_108=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "08call.nc", 810, 1038, "struct CVALUE* "), "08call.nc", 810, 1039)), "08call.nc", 810, 1040);
        __right_value0 = (void*)0;
        __dec_obj97=come_value_108->c_value,
        come_value_108->c_value=(char* )come_increment_ref_count(buffer_to_string(buf_105), "08call.nc", 811, 1042);
        __dec_obj97 = come_decrement_ref_count(__dec_obj97, (void*)0, (void*)0, 0,0, (void*)0, "08call.nc", 811, 1041);
        atomic_builtin=strlen(fun_name)>strlen("__c11_atomic_")&&memcmp(fun_name,"__c11_atomic_",strlen("__c11_atomic_"))==0;
        if(atomic_builtin) {
            if(string_operator_equals(fun_name,"__c11_atomic_thread_fence")||string_operator_equals(fun_name,"__c11_atomic_signal_fence")||string_operator_equals(fun_name,"__c11_atomic_store")||string_operator_equals(fun_name,"__c11_atomic_store_explicit")||string_operator_equals(fun_name,"__c11_atomic_init")) {
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                __right_value2 = (void*)0;
                __dec_obj98=come_value_108->type,
                come_value_108->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "08call.nc", 823, 1043, "struct sType* "), "08call.nc", 823, 1044),(char*)come_increment_ref_count(xsprintf("void"), "08call.nc", 823, 1045),(_Bool)0,info,(_Bool)0,0), "08call.nc", 823, 1047);
                come_call_finalizer(sType_finalize, __dec_obj98,(void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc", 823, 1046);
            }
            else if(__right_value0 = (void*)0,
({(_conditional_value_X0=(string_index(((char* )(__right_value0=__builtin_string(fun_name))),"compare_exchange",-1)>=0||string_operator_equals(fun_name,"__c11_atomic_is_lock_free")));            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "08call.nc", 825, 1048));
_conditional_value_X0;})) {
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                __right_value2 = (void*)0;
                __dec_obj99=come_value_108->type,
                come_value_108->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "08call.nc", 828, 1049, "struct sType* "), "08call.nc", 828, 1050),(char*)come_increment_ref_count(xsprintf("bool"), "08call.nc", 828, 1051),(_Bool)0,info,(_Bool)0,0), "08call.nc", 828, 1053);
                come_call_finalizer(sType_finalize, __dec_obj99,(void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc", 828, 1052);
            }
            else if(list$1CVALUE$ph_length(come_params_96)>0) {
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                __right_value2 = (void*)0;
                use_value_param=string_index(((char* )(__right_value0=__builtin_string(fun_name))),"fetch_",-1)>=0||(string_index(((char* )(__right_value1=__builtin_string(fun_name))),"atomic_exchange",-1)>=0&&string_index(((char* )(__right_value2=__builtin_string(fun_name))),"compare_exchange",-1)<0);
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "08call.nc", 832, 1054));
                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "08call.nc", 833, 1055));
                (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0, "08call.nc", 834, 1056));
                if(use_value_param&&list$1CVALUE$ph_length(come_params_96)>1) {
                    __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    __dec_obj100=t,
                    t=(struct sType* )come_increment_ref_count(sType_clone(((struct CVALUE* )(__right_value0=list$1CVALUE$ph_operator_load_element(come_params_96,1)))->type), "08call.nc", 837, 1058);
                    come_call_finalizer(sType_finalize, __dec_obj100,(void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc", 837, 1057);
                    come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "08call.nc}", 837, 1059);
                }
                else {
                    __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    __dec_obj101=t,
                    t=(struct sType* )come_increment_ref_count(sType_clone(((struct CVALUE* )(__right_value0=list$1CVALUE$ph_operator_load_element(come_params_96,0)))->type), "08call.nc", 840, 1061);
                    come_call_finalizer(sType_finalize, __dec_obj101,(void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc", 840, 1060);
                    come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "08call.nc}", 840, 1062);
                    if(t->mPointerNum>0) {
                        t->mPointerNum--;
                    }
                    else if(t->mArrayPointerNum>0) {
                        t->mArrayPointerNum--;
                        if(t->mArrayPointerNum==0) {
                            t->mArrayPointerType=(_Bool)0;
                        }
                    }
                    else if(t->mArrayPointerType) {
                        t->mArrayPointerType=(_Bool)0;
                    }
                }
                t->mAtomic=(_Bool)0;
                __dec_obj102=come_value_108->type,
                come_value_108->type=(struct sType* )come_increment_ref_count(t, "08call.nc", 857, 1064);
                come_call_finalizer(sType_finalize, __dec_obj102,(void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc", 857, 1063);
                come_call_finalizer(sType_finalize, t, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 862, 1065);
            }
            else {
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                __right_value2 = (void*)0;
                __dec_obj103=come_value_108->type,
                come_value_108->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "08call.nc", 860, 1066, "struct sType* "), "08call.nc", 860, 1067),(char*)come_increment_ref_count(xsprintf("int"), "08call.nc", 860, 1068),(_Bool)0,info,(_Bool)0,0), "08call.nc", 860, 1070);
                come_call_finalizer(sType_finalize, __dec_obj103,(void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc", 860, 1069);
            }
        }
        else {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            __dec_obj104=come_value_108->type,
            come_value_108->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "08call.nc", 864, 1071, "struct sType* "), "08call.nc", 864, 1072),(char*)come_increment_ref_count(xsprintf("int"), "08call.nc", 864, 1073),(_Bool)0,info,(_Bool)0,0), "08call.nc", 864, 1075);
            come_call_finalizer(sType_finalize, __dec_obj104,(void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc", 864, 1074);
        }
        come_value_108->var=((void*)0);
        add_come_last_code(info,"%s",come_value_108->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value_108, "08call.nc", 870, 1076));
                __result_obj__0 = (_Bool)1;
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_96, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 872, 1077);
        come_call_finalizer(sType_finalize, result_type_98, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 872, 1078);
        come_call_finalizer(buffer_finalize, buf_105, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 872, 1079);
        come_call_finalizer(list$1CVALUE$ph$p_finalize, _o2_saved_14, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 872, 1080);
        come_call_finalizer(CVALUE_finalize, come_value_108, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 872, 1081);
        (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 872, 1082));
        neo_current_frame = fr.prev;
        return __result_obj__0;
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_96, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1174, 1083);
        come_call_finalizer(sType_finalize, result_type_98, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1174, 1084);
        come_call_finalizer(buffer_finalize, buf_105, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1174, 1085);
        come_call_finalizer(list$1CVALUE$ph$p_finalize, _o2_saved_14, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1174, 1086);
        come_call_finalizer(CVALUE_finalize, come_value_108, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1174, 1087);
    }
    else if(string_operator_equals(fun_name,"string")) {
        __right_value0 = (void*)0;
        __dec_obj105=fun_name,
        fun_name=(char* )come_increment_ref_count(__builtin_string("__builtin_string"), "08call.nc", 1111, 1089);
        __dec_obj105 = come_decrement_ref_count(__dec_obj105, (void*)0, (void*)0, 0,0, (void*)0, "08call.nc", 1111, 1088);
    }
    else if(string_operator_equals(fun_name,"wstring")) {
        __right_value0 = (void*)0;
        __dec_obj106=fun_name,
        fun_name=(char* )come_increment_ref_count(__builtin_string("__builtin_wstring"), "08call.nc", 1114, 1091);
        __dec_obj106 = come_decrement_ref_count(__dec_obj106, (void*)0, (void*)0, 0,0, (void*)0, "08call.nc", 1114, 1090);
    }
    else if(string_operator_equals(fun_name,"inherit")) {
        p=info->come_fun->mName;
        version=0;
        while(*p) {
            if(*p==95&&*(p+1)==118&&xisdigit(*(p+2))) {
                p2=p+2;
                version=0;
                while(xisdigit(*p2)) {
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
        for(i_109=version-1        ;i_109>=1;i_109--){
            __right_value0 = (void*)0;
            new_fun_name=(char* )come_increment_ref_count(xsprintf("%s_v%d",real_fun_name,i_109), "08call.nc", 1141, 1092);
            if(__right_value0 = (void*)0,
({(_conditional_value_X1=(((struct sFun* )(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,new_fun_name)))));            come_call_finalizer(sFun_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "08call.nc}", 1143, 1093);
_conditional_value_X1;})) {
                __right_value0 = (void*)0;
                __dec_obj107=fun_name,
                fun_name=(char* )come_increment_ref_count(__builtin_string(new_fun_name), "08call.nc", 1144, 1095);
                __dec_obj107 = come_decrement_ref_count(__dec_obj107, (void*)0, (void*)0, 0,0, (void*)0, "08call.nc", 1144, 1094);
                (new_fun_name = come_decrement_ref_count(new_fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 1145, 1096));
                break;
            }
            (new_fun_name = come_decrement_ref_count(new_fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 1149, 1097));
        }
        if(i_109==0) {
            __right_value0 = (void*)0;
            new_fun_name_110=(char* )come_increment_ref_count(xsprintf("%s",real_fun_name), "08call.nc", 1150, 1098);
            if(__right_value0 = (void*)0,
({(_conditional_value_X2=(((struct sFun* )(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,new_fun_name_110)))));            come_call_finalizer(sFun_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "08call.nc}", 1152, 1099);
_conditional_value_X2;})) {
                __right_value0 = (void*)0;
                __dec_obj108=fun_name,
                fun_name=(char* )come_increment_ref_count(__builtin_string(new_fun_name_110), "08call.nc", 1153, 1101);
                __dec_obj108 = come_decrement_ref_count(__dec_obj108, (void*)0, (void*)0, 0,0, (void*)0, "08call.nc", 1153, 1100);
            }
            if(string_operator_equals(fun_name,info->come_fun->mName)) {
                err_msg(info,"invalid inherit");
                                __result_obj__0 = (_Bool)1;
                (new_fun_name_110 = come_decrement_ref_count(new_fun_name_110, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 1158, 1102));
                (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 1158, 1103));
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
            (new_fun_name_110 = come_decrement_ref_count(new_fun_name_110, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 1161, 1104));
        }
    }
    else {
        for(i_111=128        ;i_111>=1;i_111--){
            __right_value0 = (void*)0;
            new_fun_name_112=(char* )come_increment_ref_count(xsprintf("%s_v%d",fun_name,i_111), "08call.nc", 1164, 1105);
            if(__right_value0 = (void*)0,
({(_conditional_value_X3=(((struct sFun* )(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,new_fun_name_112)))));            come_call_finalizer(sFun_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "08call.nc}", 1166, 1106);
_conditional_value_X3;})) {
                __right_value0 = (void*)0;
                __dec_obj109=fun_name,
                fun_name=(char* )come_increment_ref_count(__builtin_string(new_fun_name_112), "08call.nc", 1167, 1108);
                __dec_obj109 = come_decrement_ref_count(__dec_obj109, (void*)0, (void*)0, 0,0, (void*)0, "08call.nc", 1167, 1107);
                (new_fun_name_112 = come_decrement_ref_count(new_fun_name_112, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 1168, 1109));
                break;
            }
            (new_fun_name_112 = come_decrement_ref_count(new_fun_name_112, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 1171, 1110));
        }
    }
    __right_value0 = (void*)0;
    fun_113=((struct sFun* )(__right_value0=map$2char$phsFun$ph_at(info->funcs,fun_name,((void*)0),(_Bool)0)));
    if(fun_113==((void*)0)) {
        printf("%s %d: function not found(%s) at function call(1), so no check types and no heap management\n",info->sname,info->sline,fun_name);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        come_params_114=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "08call.nc", 1179, 1111, "struct list$1CVALUE$ph*"), "08call.nc", 1179, 1112)), "08call.nc", 1179, 1113);
        i_115=0;
        result_type_116=((void*)0);
        for(_o2_saved_15=params,it_117=list$1tuple2$2char$phsNode$ph$ph_begin(_o2_saved_15)        ;!list$1tuple2$2char$phsNode$ph$ph_end(_o2_saved_15);it_117=list$1tuple2$2char$phsNode$ph$ph_next(_o2_saved_15)){
            multiple_assign_var10=it_117;
            label_118=(char* )come_increment_ref_count(multiple_assign_var10->v1, "08call.nc", 1184, 1114);
            node_119=(struct sNode*)come_increment_ref_count(multiple_assign_var10->v2, "08call.nc", 1184, 1115);
            Value_120=node_compile(node_119,info);
            if(!Value_120) {
                                __result_obj__0 = (_Bool)0;
                (label_118 = come_decrement_ref_count(label_118, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 1187, 1116));
                ((node_119) ? node_119 = come_decrement_ref_count(node_119, ((struct sNode*)node_119)->finalize, ((struct sNode*)node_119)->_protocol_obj, 0, 0,(void*)0, "08call.nc", 1187, 1117):(void*)0);
                come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_114, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1187, 1118);
                come_call_finalizer(sType_finalize, result_type_116, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1187, 1119);
                (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 1187, 1120));
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
            __right_value0 = (void*)0;
            come_value_121=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "08call.nc", 1190, 1121);
            __right_value0 = (void*)0;
            type__122=(struct sType* )come_increment_ref_count(solve_generics(come_value_121->type,info->generics_type,info), "08call.nc", 1192, 1122);
            __right_value0 = (void*)0;
            __dec_obj110=come_value_121->type,
            come_value_121->type=(struct sType* )come_increment_ref_count(solve_method_generics(type__122,info), "08call.nc", 1193, 1124);
            come_call_finalizer(sType_finalize, __dec_obj110,(void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc", 1193, 1123);
            list$1CVALUE$ph_add(come_params_114,(struct CVALUE* )come_increment_ref_count(come_value_121, "08call.nc", 1195, 1125));
            __dec_obj111=result_type_116,
            result_type_116=(struct sType* )come_increment_ref_count(come_value_121->type, "08call.nc", 1197, 1127);
            come_call_finalizer(sType_finalize, __dec_obj111,(void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc", 1197, 1126);
            (label_118 = come_decrement_ref_count(label_118, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 1200, 1128));
            ((node_119) ? node_119 = come_decrement_ref_count(node_119, ((struct sNode*)node_119)->finalize, ((struct sNode*)node_119)->_protocol_obj, 0, 0,(void*)0, "08call.nc", 1200, 1129):(void*)0);
            come_call_finalizer(CVALUE_finalize, come_value_121, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1200, 1130);
            come_call_finalizer(sType_finalize, type__122, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1200, 1131);
        }
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        buf_123=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "08call.nc", 1200, 1132, "struct buffer* "), "08call.nc", 1200, 1133)), "08call.nc", 1200, 1134);
        buffer_append_str(buf_123,fun_name);
        buffer_append_str(buf_123,"(");
        j_124=0;
        for(_o2_saved_16=(struct list$1CVALUE$ph*)come_increment_ref_count(come_params_114, "08call.nc", 1206, 1135),it_125=list$1CVALUE$ph_begin(_o2_saved_16)        ;!list$1CVALUE$ph_end(_o2_saved_16);it_125=list$1CVALUE$ph_next(_o2_saved_16)){
            buffer_append_str(buf_123,it_125->c_value);
            if(j_124!=list$1CVALUE$ph_length(come_params_114)-1) {
                buffer_append_str(buf_123,",");
            }
            j_124++;
        }
        buffer_append_str(buf_123,")");
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        come_value_126=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "08call.nc", 1217, 1136, "struct CVALUE* "), "08call.nc", 1217, 1137)), "08call.nc", 1217, 1138);
        __right_value0 = (void*)0;
        __dec_obj112=come_value_126->c_value,
        come_value_126->c_value=(char* )come_increment_ref_count(buffer_to_string(buf_123), "08call.nc", 1218, 1140);
        __dec_obj112 = come_decrement_ref_count(__dec_obj112, (void*)0, (void*)0, 0,0, (void*)0, "08call.nc", 1218, 1139);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        __dec_obj113=come_value_126->type,
        come_value_126->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "08call.nc", 1219, 1141, "struct sType* "), "08call.nc", 1219, 1142),(char*)come_increment_ref_count(xsprintf("int"), "08call.nc", 1219, 1143),(_Bool)0,info,(_Bool)0,0), "08call.nc", 1219, 1145);
        come_call_finalizer(sType_finalize, __dec_obj113,(void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc", 1219, 1144);
        come_value_126->var=((void*)0);
        add_come_last_code(info,"%s",come_value_126->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value_126, "08call.nc", 1224, 1146));
                __result_obj__0 = (_Bool)1;
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_114, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1226, 1147);
        come_call_finalizer(sType_finalize, result_type_116, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1226, 1148);
        come_call_finalizer(buffer_finalize, buf_123, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1226, 1149);
        come_call_finalizer(list$1CVALUE$ph$p_finalize, _o2_saved_16, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1226, 1150);
        come_call_finalizer(CVALUE_finalize, come_value_126, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1226, 1151);
        (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 1226, 1152));
        neo_current_frame = fr.prev;
        return __result_obj__0;
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_114, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1229, 1153);
        come_call_finalizer(sType_finalize, result_type_116, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1229, 1154);
        come_call_finalizer(buffer_finalize, buf_123, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1229, 1155);
        come_call_finalizer(list$1CVALUE$ph$p_finalize, _o2_saved_16, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1229, 1156);
        come_call_finalizer(CVALUE_finalize, come_value_126, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1229, 1157);
    }
    __right_value0 = (void*)0;
    result_type_127=(struct sType* )come_increment_ref_count(sType_clone(fun_113->mResultType), "08call.nc", 1229, 1158);
    result_type_127->mStatic=(_Bool)0;
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    param_types=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "08call.nc", 1232, 1159, "struct list$1sType$ph*"), "08call.nc", 1232, 1160)), "08call.nc", 1232, 1161);
    for(_o2_saved_17=(struct list$1sType$ph*)come_increment_ref_count(fun_113->mParamTypes, "08call.nc", 1233, 1162),it_128=list$1sType$ph_begin(_o2_saved_17)    ;!list$1sType$ph_end(_o2_saved_17);it_128=list$1sType$ph_next(_o2_saved_17)){
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        it2_=(struct sType* )come_increment_ref_count(solve_generics(((struct sType* )(__right_value0=sType_clone(it_128))),info->generics_type,info), "08call.nc", 1234, 1163);
        come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "08call.nc}", 1234, 1164);
        __right_value0 = (void*)0;
        it2=(struct sType* )come_increment_ref_count(solve_method_generics(it2_,info), "08call.nc", 1235, 1165);
        __right_value0 = (void*)0;
        list$1sType$ph_push_back(param_types,(struct sType* )come_increment_ref_count(sType_clone(it2), "08call.nc", 1236, 1166));
        come_call_finalizer(sType_finalize, it2_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1239, 1167);
        come_call_finalizer(sType_finalize, it2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1239, 1168);
    }
    __right_value0 = (void*)0;
    result_type_=(struct sType* )come_increment_ref_count(solve_generics(result_type_127,info->generics_type,info), "08call.nc", 1239, 1169);
    __right_value0 = (void*)0;
    __dec_obj114=result_type_127,
    result_type_127=(struct sType* )come_increment_ref_count(solve_method_generics(result_type_,info), "08call.nc", 1240, 1171);
    come_call_finalizer(sType_finalize, __dec_obj114,(void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc", 1240, 1170);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    come_params_129=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "08call.nc", 1242, 1172, "struct list$1CVALUE$ph*"), "08call.nc", 1242, 1173)), "08call.nc", 1242, 1174);
    for(i_130=0    ;i_130<list$1sType$ph_length(fun_113->mParamTypes)-(((method_block)?(2):(0)));i_130++){
        list$1CVALUE$ph_add(come_params_129,((void*)0));
    }
    for(_o2_saved_18=params,it_131=list$1tuple2$2char$phsNode$ph$ph_begin(_o2_saved_18)    ;!list$1tuple2$2char$phsNode$ph$ph_end(_o2_saved_18);it_131=list$1tuple2$2char$phsNode$ph$ph_next(_o2_saved_18)){
        multiple_assign_var11=it_131;
        label_132=(char* )come_increment_ref_count(multiple_assign_var11->v1, "08call.nc", 1249, 1175);
        node_133=(struct sNode*)come_increment_ref_count(multiple_assign_var11->v2, "08call.nc", 1249, 1176);
        if(fun_113->mVarArgs||string_operator_equals(fun_name,"__builtin_va_start")) {
        }
        else if(label_132) {
            Value_134=node_compile(node_133,info);
            if(!Value_134) {
                                __result_obj__0 = (_Bool)0;
                (label_132 = come_decrement_ref_count(label_132, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 1255, 1177));
                ((node_133) ? node_133 = come_decrement_ref_count(node_133, ((struct sNode*)node_133)->finalize, ((struct sNode*)node_133)->_protocol_obj, 0, 0,(void*)0, "08call.nc", 1255, 1178):(void*)0);
                (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 1255, 1179));
                come_call_finalizer(sType_finalize, result_type_127, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1255, 1180);
                come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1255, 1181);
                come_call_finalizer(list$1sType$ph$p_finalize, _o2_saved_17, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1255, 1182);
                come_call_finalizer(sType_finalize, result_type_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1255, 1183);
                come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_129, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1255, 1184);
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
            __right_value0 = (void*)0;
            come_value_135=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "08call.nc", 1258, 1185);
            __right_value0 = (void*)0;
            type__136=(struct sType* )come_increment_ref_count(solve_generics(come_value_135->type,info->generics_type,info), "08call.nc", 1260, 1186);
            __right_value0 = (void*)0;
            __dec_obj115=come_value_135->type,
            come_value_135->type=(struct sType* )come_increment_ref_count(solve_method_generics(type__136,info), "08call.nc", 1261, 1188);
            come_call_finalizer(sType_finalize, __dec_obj115,(void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc", 1261, 1187);
            check=(_Bool)0;
            n_137=0;
            for(_o2_saved_19=(struct list$1char$ph*)come_increment_ref_count(fun_113->mParamNames, "08call.nc", 1265, 1189),it_139=list$1char$ph_begin(_o2_saved_19)            ;!list$1char$ph_end(_o2_saved_19);it_139=list$1char$ph_next(_o2_saved_19)){
                if(string_operator_equals(label_132,it_139)) {
                    check=(_Bool)1;
                    break;
                }
                n_137++;
            }
            if(!check) {
                err_msg(info,"invalid label name(%s)",label_132);
            }
            if(__right_value0 = (void*)0,
({(_conditional_value_X0=(((struct sType* )(__right_value0=list$1sType$ph_operator_load_element(param_types,n_137)))));            come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "08call.nc}", 1278, 1190);
_conditional_value_X0;})) {
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                __right_value2 = (void*)0;
                __right_value3 = (void*)0;
                check_assign_type(((char*)(__right_value2=xsprintf("\%s param num \%s is assinged to",((char* )(__right_value0=string_to_string(fun_name))),((char* )(__right_value1=int_to_string(n_137)))))),((struct sType* )(__right_value3=list$1sType$ph_operator_load_element(param_types,n_137))),come_value_135->type,come_value_135,info);
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "08call.nc", 1279, 1191));
                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "08call.nc", 1279, 1192));
                (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0, "08call.nc", 1279, 1193));
                come_call_finalizer(sType_finalize, __right_value3, (void*)0, (void*)0, 0, 1, 0, (void*)0, "08call.nc}", 1279, 1194);
            }
            if(__right_value0 = (void*)0,
__right_value1 = (void*)0,
({(_conditional_value_X1=(((struct sType* )(__right_value0=list$1sType$ph_operator_load_element(param_types,n_137)))&&((struct sType* )(__right_value1=list$1sType$ph_operator_load_element(param_types,n_137)))->mHeap&&come_value_135->type->mHeap));            come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "08call.nc}", 1281, 1195);
            come_call_finalizer(sType_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "08call.nc}", 1281, 1196);
_conditional_value_X1;})) {
                __right_value0 = (void*)0;
                std_move(((struct sType* )(__right_value0=list$1sType$ph_operator_load_element(param_types,n_137))),come_value_135->type,come_value_135,info);
                come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "08call.nc}", 1282, 1197);
            }
            list$1CVALUE$ph_replace(come_params_129,n_137,(struct CVALUE* )come_increment_ref_count(come_value_135, "08call.nc", 1285, 1206));
            come_call_finalizer(CVALUE_finalize, come_value_135, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1287, 1207);
            come_call_finalizer(sType_finalize, type__136, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1287, 1208);
            come_call_finalizer(list$1char$ph$p_finalize, _o2_saved_19, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1287, 1209);
        }
        (label_132 = come_decrement_ref_count(label_132, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 1289, 1210));
        ((node_133) ? node_133 = come_decrement_ref_count(node_133, ((struct sNode*)node_133)->finalize, ((struct sNode*)node_133)->_protocol_obj, 0, 0,(void*)0, "08call.nc", 1289, 1211):(void*)0);
    }
    i_142=0;
    for(_o2_saved_20=params,it_143=list$1tuple2$2char$phsNode$ph$ph_begin(_o2_saved_20)    ;!list$1tuple2$2char$phsNode$ph$ph_end(_o2_saved_20);it_143=list$1tuple2$2char$phsNode$ph$ph_next(_o2_saved_20)){
        multiple_assign_var12=it_143;
        label_144=(char* )come_increment_ref_count(multiple_assign_var12->v1, "08call.nc", 1291, 1212);
        node_145=(struct sNode*)come_increment_ref_count(multiple_assign_var12->v2, "08call.nc", 1291, 1213);
        if(fun_113->mVarArgs||string_operator_equals(fun_name,"__builtin_va_start")) {
            Value_146=node_compile(node_145,info);
            if(!Value_146) {
                                __result_obj__0 = (_Bool)0;
                (label_144 = come_decrement_ref_count(label_144, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 1295, 1214));
                ((node_145) ? node_145 = come_decrement_ref_count(node_145, ((struct sNode*)node_145)->finalize, ((struct sNode*)node_145)->_protocol_obj, 0, 0,(void*)0, "08call.nc", 1295, 1215):(void*)0);
                (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 1295, 1216));
                come_call_finalizer(sType_finalize, result_type_127, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1295, 1217);
                come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1295, 1218);
                come_call_finalizer(list$1sType$ph$p_finalize, _o2_saved_17, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1295, 1219);
                come_call_finalizer(sType_finalize, result_type_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1295, 1220);
                come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_129, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1295, 1221);
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
            __right_value0 = (void*)0;
            come_value_147=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "08call.nc", 1298, 1222);
            __right_value0 = (void*)0;
            type__148=(struct sType* )come_increment_ref_count(solve_generics(come_value_147->type,info->generics_type,info), "08call.nc", 1300, 1223);
            __right_value0 = (void*)0;
            __dec_obj117=come_value_147->type,
            come_value_147->type=(struct sType* )come_increment_ref_count(solve_method_generics(type__148,info), "08call.nc", 1301, 1225);
            come_call_finalizer(sType_finalize, __dec_obj117,(void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc", 1301, 1224);
            while((_Bool)1) {
                if(__right_value0 = (void*)0,
({(_conditional_value_X0=(((struct CVALUE* )(__right_value0=list$1CVALUE$ph_operator_load_element(come_params_129,i_142)))==((void*)0)));                come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "08call.nc}", 1304, 1226);
_conditional_value_X0;})) {
                    break;
                }
                else {
                    i_142++;
                }
            }
            if(__right_value0 = (void*)0,
({(_conditional_value_X1=(((struct sType* )(__right_value0=list$1sType$ph_operator_load_element(param_types,i_142)))));            come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "08call.nc}", 1312, 1227);
_conditional_value_X1;})) {
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                __right_value2 = (void*)0;
                __right_value3 = (void*)0;
                check_assign_type(((char*)(__right_value2=xsprintf("\%s param num \%s is assinged to",((char* )(__right_value0=string_to_string(fun_name))),((char* )(__right_value1=int_to_string(i_142)))))),((struct sType* )(__right_value3=list$1sType$ph_operator_load_element(param_types,i_142))),come_value_147->type,come_value_147,info);
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "08call.nc", 1313, 1228));
                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "08call.nc", 1313, 1229));
                (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0, "08call.nc", 1313, 1230));
                come_call_finalizer(sType_finalize, __right_value3, (void*)0, (void*)0, 0, 1, 0, (void*)0, "08call.nc}", 1313, 1231);
            }
            list$1CVALUE$ph_replace(come_params_129,i_142,(struct CVALUE* )come_increment_ref_count(come_value_147, "08call.nc", 1316, 1232));
            i_142++;
            come_call_finalizer(CVALUE_finalize, come_value_147, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1350, 1233);
            come_call_finalizer(sType_finalize, type__148, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1350, 1234);
        }
        else if(label_144) {
        }
        else {
            Value_149=node_compile(node_145,info);
            if(!Value_149) {
                                __result_obj__0 = (_Bool)0;
                (label_144 = come_decrement_ref_count(label_144, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 1323, 1235));
                ((node_145) ? node_145 = come_decrement_ref_count(node_145, ((struct sNode*)node_145)->finalize, ((struct sNode*)node_145)->_protocol_obj, 0, 0,(void*)0, "08call.nc", 1323, 1236):(void*)0);
                (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 1323, 1237));
                come_call_finalizer(sType_finalize, result_type_127, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1323, 1238);
                come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1323, 1239);
                come_call_finalizer(list$1sType$ph$p_finalize, _o2_saved_17, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1323, 1240);
                come_call_finalizer(sType_finalize, result_type_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1323, 1241);
                come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_129, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1323, 1242);
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
            __right_value0 = (void*)0;
            come_value_150=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "08call.nc", 1326, 1243);
            __right_value0 = (void*)0;
            type__151=(struct sType* )come_increment_ref_count(solve_generics(come_value_150->type,info->generics_type,info), "08call.nc", 1328, 1244);
            __right_value0 = (void*)0;
            __dec_obj118=come_value_150->type,
            come_value_150->type=(struct sType* )come_increment_ref_count(solve_method_generics(type__151,info), "08call.nc", 1329, 1246);
            come_call_finalizer(sType_finalize, __dec_obj118,(void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc", 1329, 1245);
            while((_Bool)1) {
                if(__right_value0 = (void*)0,
({(_conditional_value_X2=(((struct CVALUE* )(__right_value0=list$1CVALUE$ph_operator_load_element(come_params_129,i_142)))==((void*)0)));                come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "08call.nc}", 1332, 1247);
_conditional_value_X2;})) {
                    break;
                }
                else {
                    i_142++;
                }
            }
            if(__right_value0 = (void*)0,
({(_conditional_value_X3=(((struct sType* )(__right_value0=list$1sType$ph_operator_load_element(param_types,i_142)))));            come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "08call.nc}", 1340, 1248);
_conditional_value_X3;})) {
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                __right_value2 = (void*)0;
                __right_value3 = (void*)0;
                check_assign_type(((char*)(__right_value2=xsprintf("\%s param num \%s is assinged to",((char* )(__right_value0=string_to_string(fun_name))),((char* )(__right_value1=int_to_string(i_142)))))),((struct sType* )(__right_value3=list$1sType$ph_operator_load_element(param_types,i_142))),come_value_150->type,come_value_150,info);
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "08call.nc", 1341, 1249));
                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "08call.nc", 1341, 1250));
                (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0, "08call.nc", 1341, 1251));
                come_call_finalizer(sType_finalize, __right_value3, (void*)0, (void*)0, 0, 1, 0, (void*)0, "08call.nc}", 1341, 1252);
            }
            if(__right_value0 = (void*)0,
__right_value1 = (void*)0,
({(_conditional_value_X4=(((struct sType* )(__right_value0=list$1sType$ph_operator_load_element(param_types,i_142)))&&((struct sType* )(__right_value1=list$1sType$ph_operator_load_element(param_types,i_142)))->mHeap&&come_value_150->type->mHeap));            come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "08call.nc}", 1343, 1253);
            come_call_finalizer(sType_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "08call.nc}", 1343, 1254);
_conditional_value_X4;})) {
                __right_value0 = (void*)0;
                std_move(((struct sType* )(__right_value0=list$1sType$ph_operator_load_element(param_types,i_142))),come_value_150->type,come_value_150,info);
                come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "08call.nc}", 1344, 1255);
            }
            list$1CVALUE$ph_replace(come_params_129,i_142,(struct CVALUE* )come_increment_ref_count(come_value_150, "08call.nc", 1347, 1256));
            i_142++;
            come_call_finalizer(CVALUE_finalize, come_value_150, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1350, 1257);
            come_call_finalizer(sType_finalize, type__151, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1350, 1258);
        }
        (label_144 = come_decrement_ref_count(label_144, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 1352, 1259));
        ((node_145) ? node_145 = come_decrement_ref_count(node_145, ((struct sNode*)node_145)->finalize, ((struct sNode*)node_145)->_protocol_obj, 0, 0,(void*)0, "08call.nc", 1352, 1260):(void*)0);
    }
    while((_Bool)1) {
        if(__right_value0 = (void*)0,
({(_conditional_value_X0=(((struct CVALUE* )(__right_value0=list$1CVALUE$ph_operator_load_element(come_params_129,i_142)))==((void*)0)));        come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "08call.nc}", 1353, 1261);
_conditional_value_X0;})) {
            break;
        }
        else {
            i_142++;
        }
    }
    if(list$1tuple2$2char$phsNode$ph$ph_length(params)<list$1sType$ph_length(fun_113->mParamTypes)) {
        for(;i_142<list$1sType$ph_length(fun_113->mParamTypes)-(((method_block)?(2):(0)));i_142++){
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            default_param=(char* )come_increment_ref_count((char* )come_memdup(((char* )(__right_value0=list$1char$ph_operator_load_element(fun_113->mParamDefaultParametors,i_142))), "08call.nc", 1364, 1280, "char* "), "08call.nc", 1364, 1281);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "08call.nc", 1364, 1282));
            __right_value0 = (void*)0;
            param_name=((char* )(__right_value0=list$1char$ph_operator_load_element(fun_113->mParamNames,i_142)));
            if(__right_value0 = (void*)0,
({(_conditional_value_X0=(default_param&&string_operator_not_equals(default_param,"")&&((struct CVALUE* )(__right_value0=list$1CVALUE$ph_operator_load_element(come_params_129,i_142)))==((void*)0)));            come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "08call.nc}", 1367, 1283);
_conditional_value_X0;})) {
                source=(struct buffer* )come_increment_ref_count(info->source, "08call.nc", 1368, 1284);
                p_154=info->p->p;
                head=info->head;
                sline=info->sline;
                __right_value0 = (void*)0;
                __dec_obj119=info->source,
                info->source=(struct buffer* )come_increment_ref_count(charp_to_buffer(default_param), "08call.nc", 1373, 1286);
                come_call_finalizer(buffer_finalize, __dec_obj119,(void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc", 1373, 1285);
                if(info->p==((void*)0)) {
                    __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    __dec_obj120=info->p,
                    info->p=(struct span$1buffer$p*)come_increment_ref_count(span$1buffer$p_initialize((struct span$1buffer$p*)come_increment_ref_count((struct span$1buffer$p*)come_calloc(1, sizeof(struct span$1buffer$p)*(1), "08call.nc", 1375, 1287, "struct span$1buffer$p*"), "08call.nc", 1375, 1291),info->source->buf,info->source->len+1,(_Bool)1,(_Bool)0,(_Bool)0,neo_current_frame->stacktop), "08call.nc", 1375, 1293);
                    come_call_finalizer(span$1char$p$p_finalize, __dec_obj120,(void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc", 1375, 1292);
                }
                info->p->memory=info->source->buf;
                info->p->len=info->source->len+2;
                info->p->p=info->source->buf;
                info->head=info->source->buf;
                no_output_come_code_155=info->no_output_come_code;
                info->no_output_come_code=(_Bool)1;
                __right_value0 = (void*)0;
                node_156=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "08call.nc", 1385, 1294);
                Value_157=node_compile(node_156,info);
                if(!Value_157) {
                                        __result_obj__0 = (_Bool)0;
                    come_call_finalizer(buffer_finalize, source, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1388, 1295);
                    ((node_156) ? node_156 = come_decrement_ref_count(node_156, ((struct sNode*)node_156)->finalize, ((struct sNode*)node_156)->_protocol_obj, 0, 0,(void*)0, "08call.nc", 1388, 1296):(void*)0);
                    (default_param = come_decrement_ref_count(default_param, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 1388, 1297));
                    (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 1388, 1298));
                    come_call_finalizer(sType_finalize, result_type_127, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1388, 1299);
                    come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1388, 1300);
                    come_call_finalizer(list$1sType$ph$p_finalize, _o2_saved_17, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1388, 1301);
                    come_call_finalizer(sType_finalize, result_type_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1388, 1302);
                    come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_129, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1388, 1303);
                    neo_current_frame = fr.prev;
                    return __result_obj__0;
                }
                info->no_output_come_code=no_output_come_code_155;
                __dec_obj121=info->source,
                info->source=(struct buffer* )come_increment_ref_count(source, "08call.nc", 1393, 1305);
                come_call_finalizer(buffer_finalize, __dec_obj121,(void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc", 1393, 1304);
                if(info->p==((void*)0)) {
                    __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    __dec_obj122=info->p,
                    info->p=(struct span$1buffer$p*)come_increment_ref_count(span$1buffer$p_initialize((struct span$1buffer$p*)come_increment_ref_count((struct span$1buffer$p*)come_calloc(1, sizeof(struct span$1buffer$p)*(1), "08call.nc", 1395, 1306, "struct span$1buffer$p*"), "08call.nc", 1395, 1307),info->source->buf,info->source->len+1,(_Bool)1,(_Bool)0,(_Bool)0,neo_current_frame->stacktop), "08call.nc", 1395, 1309);
                    come_call_finalizer(span$1char$p$p_finalize, __dec_obj122,(void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc", 1395, 1308);
                }
                info->p->memory=info->source->buf;
                info->p->len=info->source->len+2;
                info->p->p=info->source->buf;
                info->p->p=p_154;
                info->head=head;
                info->sline=sline;
                __right_value0 = (void*)0;
                come_value_158=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "08call.nc", 1404, 1310);
                __right_value0 = (void*)0;
                type__159=(struct sType* )come_increment_ref_count(solve_generics(come_value_158->type,info->generics_type,info), "08call.nc", 1406, 1311);
                __right_value0 = (void*)0;
                __dec_obj123=come_value_158->type,
                come_value_158->type=(struct sType* )come_increment_ref_count(solve_method_generics(type__159,info), "08call.nc", 1407, 1313);
                come_call_finalizer(sType_finalize, __dec_obj123,(void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc", 1407, 1312);
                if(__right_value0 = (void*)0,
({(_conditional_value_X1=(((struct sType* )(__right_value0=list$1sType$ph_operator_load_element(param_types,i_142)))));                come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "08call.nc}", 1409, 1314);
_conditional_value_X1;})) {
                    __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    __right_value2 = (void*)0;
                    __right_value3 = (void*)0;
                    check_assign_type(((char*)(__right_value2=xsprintf("\%s param num \%s is assinged to",((char* )(__right_value0=string_to_string(fun_name))),((char* )(__right_value1=int_to_string(i_142)))))),((struct sType* )(__right_value3=list$1sType$ph_operator_load_element(param_types,i_142))),come_value_158->type,come_value_158,info);
                    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "08call.nc", 1410, 1315));
                    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "08call.nc", 1410, 1316));
                    (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0, "08call.nc", 1410, 1317));
                    come_call_finalizer(sType_finalize, __right_value3, (void*)0, (void*)0, 0, 1, 0, (void*)0, "08call.nc}", 1410, 1318);
                }
                if(__right_value0 = (void*)0,
__right_value1 = (void*)0,
({(_conditional_value_X2=(((struct sType* )(__right_value0=list$1sType$ph_operator_load_element(param_types,i_142)))&&((struct sType* )(__right_value1=list$1sType$ph_operator_load_element(param_types,i_142)))->mHeap&&come_value_158->type->mHeap));                come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "08call.nc}", 1412, 1319);
                come_call_finalizer(sType_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "08call.nc}", 1412, 1320);
_conditional_value_X2;})) {
                    __right_value0 = (void*)0;
                    std_move(((struct sType* )(__right_value0=list$1sType$ph_operator_load_element(param_types,i_142))),come_value_158->type,come_value_158,info);
                    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "08call.nc}", 1413, 1321);
                }
                list$1CVALUE$ph_replace(come_params_129,i_142,(struct CVALUE* )come_increment_ref_count(come_value_158, "08call.nc", 1415, 1322));
                come_call_finalizer(buffer_finalize, source, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1423, 1323);
                ((node_156) ? node_156 = come_decrement_ref_count(node_156, ((struct sNode*)node_156)->finalize, ((struct sNode*)node_156)->_protocol_obj, 0, 0,(void*)0, "08call.nc", 1423, 1324):(void*)0);
                come_call_finalizer(CVALUE_finalize, come_value_158, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1423, 1325);
                come_call_finalizer(sType_finalize, type__159, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1423, 1326);
            }
            else {
                if(__right_value0 = (void*)0,
({(_conditional_value_X3=(((struct CVALUE* )(__right_value0=list$1CVALUE$ph_operator_load_element(come_params_129,i_142)))==((void*)0)));                come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "08call.nc}", 1418, 1327);
_conditional_value_X3;})) {
                    err_msg(info,"require parametor(%s)(1) %d",fun_113->mName,i_142);
                                        __result_obj__0 = (_Bool)1;
                    (default_param = come_decrement_ref_count(default_param, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 1420, 1328));
                    (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 1420, 1329));
                    come_call_finalizer(sType_finalize, result_type_127, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1420, 1330);
                    come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1420, 1331);
                    come_call_finalizer(list$1sType$ph$p_finalize, _o2_saved_17, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1420, 1332);
                    come_call_finalizer(sType_finalize, result_type_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1420, 1333);
                    come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_129, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1420, 1334);
                    neo_current_frame = fr.prev;
                    return __result_obj__0;
                }
            }
            (default_param = come_decrement_ref_count(default_param, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 1424, 1335));
        }
    }
    if(list$1sType$ph_length(fun_113->mParamTypes)-(((method_block)?(2):(0)))!=list$1CVALUE$ph_length(come_params_129)&&!fun_113->mVarArgs&&string_operator_not_equals(fun_name,"__builtin_va_start")&&string_operator_not_equals(fun_name,"__builtin_va_end")) {
        err_msg(info,"invalid param number(%s). function param number is %d. caller param number is %d",fun_name,list$1sType$ph_length(fun_113->mParamTypes),list$1tuple2$2char$phsNode$ph$ph_length(params));
                __result_obj__0 = (_Bool)1;
        (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 1429, 1336));
        come_call_finalizer(sType_finalize, result_type_127, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1429, 1337);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1429, 1338);
        come_call_finalizer(list$1sType$ph$p_finalize, _o2_saved_17, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1429, 1339);
        come_call_finalizer(sType_finalize, result_type_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1429, 1340);
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_129, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1429, 1341);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(method_block) {
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08call.nc", 1433, 1344, "struct sNode");
        _inf_obj_value2=(struct sCurrentNode*)come_increment_ref_count(((struct sCurrentNode*)(__right_value1=sCurrentNode_initialize((struct sCurrentNode* )come_increment_ref_count((struct sCurrentNode *)come_calloc(1, sizeof(struct sCurrentNode )*(1), "08call.nc", 1433, 1342, "struct sCurrentNode* "), "08call.nc", 1433, 1343),info))), "08call.nc", 1433, 1345);
        _inf_value2->_protocol_obj=_inf_obj_value2;
        _inf_value2->finalize=(void*)sCurrentNode_finalize;
        _inf_value2->clone=(void*)sCurrentNode_clone;
        _inf_value2->compile=(void*)sCurrentNode_compile;
        _inf_value2->sline=(void*)sCurrentNode_sline;
        _inf_value2->sline_real=(void*)sNodeBase_sline_real;
        _inf_value2->sname=(void*)sCurrentNode_sname;
        _inf_value2->terminated=(void*)sNodeBase_terminated;
        _inf_value2->kind=(void*)sCurrentNode_kind;
        _inf_value2->left_value=(void*)sNodeBase_left_value;
        __right_value2 = (void*)0;
        current_stack_frame_node=(struct sNode*)come_increment_ref_count(_inf_value2, "08call.nc", 1433, 1353);
        come_call_finalizer(sCurrentNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "08call.nc}", 1433, 1354);
        Value_160=node_compile(current_stack_frame_node,info);
        if(!Value_160) {
                        __result_obj__0 = (_Bool)0;
            ((current_stack_frame_node) ? current_stack_frame_node = come_decrement_ref_count(current_stack_frame_node, ((struct sNode*)current_stack_frame_node)->finalize, ((struct sNode*)current_stack_frame_node)->_protocol_obj, 0, 0,(void*)0, "08call.nc", 1436, 1355):(void*)0);
            (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 1436, 1356));
            come_call_finalizer(sType_finalize, result_type_127, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1436, 1357);
            come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1436, 1358);
            come_call_finalizer(list$1sType$ph$p_finalize, _o2_saved_17, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1436, 1359);
            come_call_finalizer(sType_finalize, result_type_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1436, 1360);
            come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_129, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1436, 1361);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        __right_value0 = (void*)0;
        come_value_161=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "08call.nc", 1439, 1362);
        __right_value0 = (void*)0;
        type__162=(struct sType* )come_increment_ref_count(solve_generics(come_value_161->type,info->generics_type,info), "08call.nc", 1440, 1363);
        __right_value0 = (void*)0;
        __dec_obj125=come_value_161->type,
        come_value_161->type=(struct sType* )come_increment_ref_count(solve_method_generics(type__162,info), "08call.nc", 1441, 1365);
        come_call_finalizer(sType_finalize, __dec_obj125,(void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc", 1441, 1364);
        list$1CVALUE$ph_push_back(come_params_129,(struct CVALUE* )come_increment_ref_count(come_value_161, "08call.nc", 1442, 1366));
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        method_block2=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "08call.nc", 1444, 1367, "struct buffer* "), "08call.nc", 1444, 1368)), "08call.nc", 1444, 1369);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        method_block_type=(struct sType* )come_increment_ref_count(sType_clone(((struct sType* )(__right_value0=list$1sType$ph_operator_load_element(fun_113->mParamTypes,-1)))), "08call.nc", 1445, 1370);
        come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "08call.nc}", 1445, 1371);
        __right_value0 = (void*)0;
        class_name=(char* )come_increment_ref_count(xsprintf("__current_stack%d__",info->current_stack_num), "08call.nc", 1447, 1372);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        ((struct sType* )(__right_value0=list$1sType$ph_operator_load_element(method_block_type->mParamTypes,0)))->mClass=((struct sClass* )(__right_value1=map$2char$phsClass$ph_operator_load_element(info->classes,class_name)));
        come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "08call.nc}", 1449, 1411);
        current_stack_frame_struct=info->current_stack_frame_struct;
        __right_value0 = (void*)0;
        info->current_stack_frame_struct=((struct sClass* )(__right_value0=map$2char$phsClass$ph_operator_load_element(info->classes,class_name)));
        info->num_method_block++;
        num_method_block=info->num_method_block;
        if(string_operator_not_equals(method_block_type->mClass->mName,"lambda")) {
            err_msg(info,"This function does not have method block(%s)",fun_name);
                        __result_obj__0 = (_Bool)1;
            ((current_stack_frame_node) ? current_stack_frame_node = come_decrement_ref_count(current_stack_frame_node, ((struct sNode*)current_stack_frame_node)->finalize, ((struct sNode*)current_stack_frame_node)->_protocol_obj, 0, 0,(void*)0, "08call.nc", 1459, 1412):(void*)0);
            come_call_finalizer(CVALUE_finalize, come_value_161, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1459, 1413);
            come_call_finalizer(sType_finalize, type__162, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1459, 1414);
            come_call_finalizer(buffer_finalize, method_block2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1459, 1415);
            come_call_finalizer(sType_finalize, method_block_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1459, 1416);
            (class_name = come_decrement_ref_count(class_name, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 1459, 1417));
            (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 1459, 1418));
            come_call_finalizer(sType_finalize, result_type_127, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1459, 1419);
            come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1459, 1420);
            come_call_finalizer(list$1sType$ph$p_finalize, _o2_saved_17, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1459, 1421);
            come_call_finalizer(sType_finalize, result_type_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1459, 1422);
            come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_129, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1459, 1423);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        __right_value0 = (void*)0;
        result_type_163=(struct sType* )come_increment_ref_count(sType_clone(method_block_type->mResultType), "08call.nc", 1462, 1424);
        result_type_163->mStatic=(_Bool)0;
        __right_value0 = (void*)0;
        result_type2_=(struct sType* )come_increment_ref_count(solve_generics(result_type_163,info->generics_type,info), "08call.nc", 1464, 1425);
        __right_value0 = (void*)0;
        result_type2=(struct sType* )come_increment_ref_count(solve_method_generics(result_type2_,info), "08call.nc", 1465, 1426);
        __right_value0 = (void*)0;
        param_types_164=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(method_block_type->mParamTypes), "08call.nc", 1466, 1427);
        param_names=method_block_type->mParamNames;
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        all_alhabet_sname=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "08call.nc", 1469, 1428, "struct buffer* "), "08call.nc", 1469, 1429)), "08call.nc", 1469, 1430);
        {
            p_165=info->sname;
            while(*p_165) {
                if(xisalnum(*p_165)) {
                    buffer_append_char(all_alhabet_sname,*p_165++);
                }
                else {
                    p_165++;
                }
            }
        }
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        buffer_append_format(method_block2,"%s fun_block%d_%s(",((char* )(__right_value0=make_come_type_name_string(result_type2,info))),num_method_block,((char* )(__right_value1=buffer_to_string(all_alhabet_sname))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "08call.nc", 1482, 1431));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "08call.nc", 1482, 1432));
        i_142=0;
        for(_o2_saved_21=(struct list$1sType$ph*)come_increment_ref_count(param_types_164, "08call.nc", 1485, 1433),it_166=list$1sType$ph_begin(_o2_saved_21)        ;!list$1sType$ph_end(_o2_saved_21);it_166=list$1sType$ph_next(_o2_saved_21)){
            param_type=(struct sType* )come_increment_ref_count(it_166, "08call.nc", 1486, 1434);
            if(i_142==0) {
                __right_value0 = (void*)0;
                param_name_167=(char* )come_increment_ref_count(xsprintf("parent"), "08call.nc", 1489, 1435);
                __right_value0 = (void*)0;
                buffer_append_format(method_block2,"%s",((char* )(__right_value0=make_come_define_var(param_type,param_name_167,info))));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "08call.nc", 1491, 1436));
                (param_name_167 = come_decrement_ref_count(param_name_167, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 1510, 1437));
            }
            else if(i_142==1) {
                __right_value0 = (void*)0;
                param_name_168=(char* )come_increment_ref_count(xsprintf("it"), "08call.nc", 1494, 1438);
                __right_value0 = (void*)0;
                param_type2_=(struct sType* )come_increment_ref_count(solve_generics(param_type,info->generics_type,info), "08call.nc", 1496, 1439);
                __right_value0 = (void*)0;
                param_type2=(struct sType* )come_increment_ref_count(solve_method_generics(param_type2_,info), "08call.nc", 1497, 1440);
                __right_value0 = (void*)0;
                buffer_append_format(method_block2,"%s",((char* )(__right_value0=make_come_define_var(param_type2,param_name_168,info))));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "08call.nc", 1499, 1441));
                (param_name_168 = come_decrement_ref_count(param_name_168, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 1510, 1442));
                come_call_finalizer(sType_finalize, param_type2_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1510, 1443);
                come_call_finalizer(sType_finalize, param_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1510, 1444);
            }
            else {
                __right_value0 = (void*)0;
                param_name_169=(char* )come_increment_ref_count(xsprintf("it%d",i_142), "08call.nc", 1502, 1445);
                __right_value0 = (void*)0;
                param_type2__170=(struct sType* )come_increment_ref_count(solve_generics(param_type,info->generics_type,info), "08call.nc", 1504, 1446);
                __right_value0 = (void*)0;
                param_type2_171=(struct sType* )come_increment_ref_count(solve_method_generics(param_type2__170,info), "08call.nc", 1505, 1447);
                __right_value0 = (void*)0;
                buffer_append_format(method_block2,"%s",((char* )(__right_value0=make_come_define_var(param_type2_171,param_name_169,info))));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "08call.nc", 1507, 1448));
                (param_name_169 = come_decrement_ref_count(param_name_169, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 1510, 1449));
                come_call_finalizer(sType_finalize, param_type2__170, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1510, 1450);
                come_call_finalizer(sType_finalize, param_type2_171, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1510, 1451);
            }
            if(i_142!=list$1sType$ph_length(param_types_164)-1) {
                buffer_append_str(method_block2,",");
            }
            i_142++;
            come_call_finalizer(sType_finalize, param_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1516, 1452);
        }
        buffer_append_str(method_block2,")\n");
        __right_value0 = (void*)0;
        buffer_append_str(method_block2,((char* )(__right_value0=buffer_to_string(method_block))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "08call.nc", 1518, 1453));
        source3=(struct buffer* )come_increment_ref_count(info->source, "08call.nc", 1520, 1454);
        p_172=info->p->p;
        head_173=info->head;
        sline_174=info->sline;
        __dec_obj126=info->source,
        info->source=(struct buffer* )come_increment_ref_count(method_block2, "08call.nc", 1525, 1456);
        come_call_finalizer(buffer_finalize, __dec_obj126,(void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc", 1525, 1455);
        if(info->p==((void*)0)) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __dec_obj127=info->p,
            info->p=(struct span$1buffer$p*)come_increment_ref_count(span$1buffer$p_initialize((struct span$1buffer$p*)come_increment_ref_count((struct span$1buffer$p*)come_calloc(1, sizeof(struct span$1buffer$p)*(1), "08call.nc", 1527, 1457, "struct span$1buffer$p*"), "08call.nc", 1527, 1458),info->source->buf,info->source->len+1,(_Bool)1,(_Bool)0,(_Bool)0,neo_current_frame->stacktop), "08call.nc", 1527, 1460);
            come_call_finalizer(span$1char$p$p_finalize, __dec_obj127,(void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc", 1527, 1459);
        }
        info->p->memory=info->source->buf;
        info->p->len=info->source->len+2;
        info->p->p=info->source->buf;
        info->head=info->source->buf;
        info->sline=method_block_sline;
        __right_value0 = (void*)0;
        node_175=(struct sNode*)come_increment_ref_count(parse_function(info), "08call.nc", 1535, 1461);
        Value_176=node_compile(node_175,info);
        if(!Value_176) {
                        __result_obj__0 = (_Bool)0;
            ((current_stack_frame_node) ? current_stack_frame_node = come_decrement_ref_count(current_stack_frame_node, ((struct sNode*)current_stack_frame_node)->finalize, ((struct sNode*)current_stack_frame_node)->_protocol_obj, 0, 0,(void*)0, "08call.nc", 1538, 1462):(void*)0);
            come_call_finalizer(CVALUE_finalize, come_value_161, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1538, 1463);
            come_call_finalizer(sType_finalize, type__162, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1538, 1464);
            come_call_finalizer(buffer_finalize, method_block2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1538, 1465);
            come_call_finalizer(sType_finalize, method_block_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1538, 1466);
            (class_name = come_decrement_ref_count(class_name, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 1538, 1467));
            come_call_finalizer(sType_finalize, result_type_163, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1538, 1468);
            come_call_finalizer(sType_finalize, result_type2_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1538, 1469);
            come_call_finalizer(sType_finalize, result_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1538, 1470);
            come_call_finalizer(list$1sType$ph$p_finalize, param_types_164, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1538, 1471);
            come_call_finalizer(buffer_finalize, all_alhabet_sname, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1538, 1472);
            come_call_finalizer(list$1sType$ph$p_finalize, _o2_saved_21, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1538, 1473);
            come_call_finalizer(buffer_finalize, source3, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1538, 1474);
            ((node_175) ? node_175 = come_decrement_ref_count(node_175, ((struct sNode*)node_175)->finalize, ((struct sNode*)node_175)->_protocol_obj, 0, 0,(void*)0, "08call.nc", 1538, 1475):(void*)0);
            (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 1538, 1476));
            come_call_finalizer(sType_finalize, result_type_127, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1538, 1477);
            come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1538, 1478);
            come_call_finalizer(list$1sType$ph$p_finalize, _o2_saved_17, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1538, 1479);
            come_call_finalizer(sType_finalize, result_type_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1538, 1480);
            come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_129, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1538, 1481);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        method_block_name=(char* )come_increment_ref_count(xsprintf("fun_block%d_%s",num_method_block,((char* )(__right_value0=buffer_to_string(all_alhabet_sname)))), "08call.nc", 1541, 1482);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "08call.nc", 1541, 1483));
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        come_value2=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "08call.nc", 1543, 1484, "struct CVALUE* "), "08call.nc", 1543, 1485)), "08call.nc", 1543, 1486);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        fun2=((struct sFun* )(__right_value1=map$2char$phsFun$ph_at(info->funcs,((char* )(__right_value0=__builtin_string(method_block_name))),((void*)0),(_Bool)0)));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "08call.nc", 1545, 1487));
        if(fun2==((void*)0)) {
            err_msg(info,"method block function not found(%s)",method_block_name);
                        __result_obj__0 = (_Bool)1;
            ((current_stack_frame_node) ? current_stack_frame_node = come_decrement_ref_count(current_stack_frame_node, ((struct sNode*)current_stack_frame_node)->finalize, ((struct sNode*)current_stack_frame_node)->_protocol_obj, 0, 0,(void*)0, "08call.nc", 1549, 1488):(void*)0);
            come_call_finalizer(CVALUE_finalize, come_value_161, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1549, 1489);
            come_call_finalizer(sType_finalize, type__162, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1549, 1490);
            come_call_finalizer(buffer_finalize, method_block2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1549, 1491);
            come_call_finalizer(sType_finalize, method_block_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1549, 1492);
            (class_name = come_decrement_ref_count(class_name, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 1549, 1493));
            come_call_finalizer(sType_finalize, result_type_163, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1549, 1494);
            come_call_finalizer(sType_finalize, result_type2_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1549, 1495);
            come_call_finalizer(sType_finalize, result_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1549, 1496);
            come_call_finalizer(list$1sType$ph$p_finalize, param_types_164, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1549, 1497);
            come_call_finalizer(buffer_finalize, all_alhabet_sname, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1549, 1498);
            come_call_finalizer(list$1sType$ph$p_finalize, _o2_saved_21, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1549, 1499);
            come_call_finalizer(buffer_finalize, source3, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1549, 1500);
            ((node_175) ? node_175 = come_decrement_ref_count(node_175, ((struct sNode*)node_175)->finalize, ((struct sNode*)node_175)->_protocol_obj, 0, 0,(void*)0, "08call.nc", 1549, 1501):(void*)0);
            (method_block_name = come_decrement_ref_count(method_block_name, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 1549, 1502));
            come_call_finalizer(CVALUE_finalize, come_value2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1549, 1503);
            (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 1549, 1504));
            come_call_finalizer(sType_finalize, result_type_127, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1549, 1505);
            come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1549, 1506);
            come_call_finalizer(list$1sType$ph$p_finalize, _o2_saved_17, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1549, 1507);
            come_call_finalizer(sType_finalize, result_type_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1549, 1508);
            come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_129, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1549, 1509);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        method_block_type2=fun2->mLambdaType;
        __right_value0 = (void*)0;
        __dec_obj128=come_value2->c_value,
        come_value2->c_value=(char* )come_increment_ref_count(xsprintf("(void*)%s",method_block_name), "08call.nc", 1554, 1511);
        __dec_obj128 = come_decrement_ref_count(__dec_obj128, (void*)0, (void*)0, 0,0, (void*)0, "08call.nc", 1554, 1510);
        __right_value0 = (void*)0;
        __dec_obj129=come_value2->type,
        come_value2->type=(struct sType* )come_increment_ref_count(sType_clone(method_block_type2), "08call.nc", 1555, 1513);
        come_call_finalizer(sType_finalize, __dec_obj129,(void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc", 1555, 1512);
        come_value2->var=((void*)0);
        list$1CVALUE$ph_push_back(come_params_129,(struct CVALUE* )come_increment_ref_count(come_value2, "08call.nc", 1558, 1514));
        __dec_obj130=info->source,
        info->source=(struct buffer* )come_increment_ref_count(source3, "08call.nc", 1560, 1516);
        come_call_finalizer(buffer_finalize, __dec_obj130,(void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc", 1560, 1515);
        if(info->p==((void*)0)) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __dec_obj131=info->p,
            info->p=(struct span$1buffer$p*)come_increment_ref_count(span$1buffer$p_initialize((struct span$1buffer$p*)come_increment_ref_count((struct span$1buffer$p*)come_calloc(1, sizeof(struct span$1buffer$p)*(1), "08call.nc", 1562, 1517, "struct span$1buffer$p*"), "08call.nc", 1562, 1518),info->source->buf,info->source->len+1,(_Bool)1,(_Bool)0,(_Bool)0,neo_current_frame->stacktop), "08call.nc", 1562, 1520);
            come_call_finalizer(span$1char$p$p_finalize, __dec_obj131,(void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc", 1562, 1519);
        }
        info->p->memory=info->source->buf;
        info->p->len=info->source->len+2;
        info->p->p=info->source->buf;
        info->p->p=p_172;
        info->head=head_173;
        info->sline=sline_174;
        info->current_stack_frame_struct=current_stack_frame_struct;
        ((current_stack_frame_node) ? current_stack_frame_node = come_decrement_ref_count(current_stack_frame_node, ((struct sNode*)current_stack_frame_node)->finalize, ((struct sNode*)current_stack_frame_node)->_protocol_obj, 0, 0,(void*)0, "08call.nc", 1574, 1521):(void*)0);
        come_call_finalizer(CVALUE_finalize, come_value_161, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1574, 1522);
        come_call_finalizer(sType_finalize, type__162, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1574, 1523);
        come_call_finalizer(buffer_finalize, method_block2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1574, 1524);
        come_call_finalizer(sType_finalize, method_block_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1574, 1525);
        (class_name = come_decrement_ref_count(class_name, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 1574, 1526));
        come_call_finalizer(sType_finalize, result_type_163, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1574, 1527);
        come_call_finalizer(sType_finalize, result_type2_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1574, 1528);
        come_call_finalizer(sType_finalize, result_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1574, 1529);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types_164, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1574, 1530);
        come_call_finalizer(buffer_finalize, all_alhabet_sname, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1574, 1531);
        come_call_finalizer(list$1sType$ph$p_finalize, _o2_saved_21, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1574, 1532);
        come_call_finalizer(buffer_finalize, source3, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1574, 1533);
        ((node_175) ? node_175 = come_decrement_ref_count(node_175, ((struct sNode*)node_175)->finalize, ((struct sNode*)node_175)->_protocol_obj, 0, 0,(void*)0, "08call.nc", 1574, 1534):(void*)0);
        (method_block_name = come_decrement_ref_count(method_block_name, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 1574, 1535));
        come_call_finalizer(CVALUE_finalize, come_value2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1574, 1536);
    }
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    buf_177=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "08call.nc", 1574, 1537, "struct buffer* "), "08call.nc", 1574, 1538)), "08call.nc", 1574, 1539);
    if(string_operator_equals(fun_name,"__isoc23_strtoll")) {
        __right_value0 = (void*)0;
        __dec_obj132=fun_name,
        fun_name=(char*)come_increment_ref_count(xsprintf("strtoll"), "08call.nc", 1577, 1541);
        __dec_obj132 = come_decrement_ref_count(__dec_obj132, (void*)0, (void*)0, 0,0, (void*)0, "08call.nc", 1577, 1540);
    }
    else if(string_operator_equals(fun_name,"__isoc23_strtoul")) {
        __right_value0 = (void*)0;
        __dec_obj133=fun_name,
        fun_name=(char*)come_increment_ref_count(xsprintf("strtoul"), "08call.nc", 1580, 1543);
        __dec_obj133 = come_decrement_ref_count(__dec_obj133, (void*)0, (void*)0, 0,0, (void*)0, "08call.nc", 1580, 1542);
    }
    else if(string_operator_equals(fun_name,"__isoc23_strtoull")) {
        __right_value0 = (void*)0;
        __dec_obj134=fun_name,
        fun_name=(char*)come_increment_ref_count(xsprintf("strtoull"), "08call.nc", 1583, 1545);
        __dec_obj134 = come_decrement_ref_count(__dec_obj134, (void*)0, (void*)0, 0,0, (void*)0, "08call.nc", 1583, 1544);
    }
    buffer_append_str(buf_177,fun_name);
    buffer_append_str(buf_177,"(");
    j_178=0;
    for(_o2_saved_22=(struct list$1CVALUE$ph*)come_increment_ref_count(come_params_129, "08call.nc", 1602, 1546),it_179=list$1CVALUE$ph_begin(_o2_saved_22)    ;!list$1CVALUE$ph_end(_o2_saved_22);it_179=list$1CVALUE$ph_next(_o2_saved_22)){
        buffer_append_str(buf_177,it_179->c_value);
        if(j_178!=list$1CVALUE$ph_length(come_params_129)-1) {
            buffer_append_str(buf_177,",");
        }
        j_178++;
    }
    buffer_append_str(buf_177,")");
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    come_value_180=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "08call.nc", 1613, 1547, "struct CVALUE* "), "08call.nc", 1613, 1548)), "08call.nc", 1613, 1549);
    __right_value0 = (void*)0;
    __dec_obj135=come_value_180->c_value,
    come_value_180->c_value=(char* )come_increment_ref_count(buffer_to_string(buf_177), "08call.nc", 1614, 1551);
    __dec_obj135 = come_decrement_ref_count(__dec_obj135, (void*)0, (void*)0, 0,0, (void*)0, "08call.nc", 1614, 1550);
    __right_value0 = (void*)0;
    __dec_obj136=come_value_180->type,
    come_value_180->type=(struct sType* )come_increment_ref_count(sType_clone(result_type_127), "08call.nc", 1615, 1553);
    come_call_finalizer(sType_finalize, __dec_obj136,(void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc", 1615, 1552);
    if(come_value_180->type) {
        come_value_180->type->mStatic=(_Bool)0;
    }
    come_value_180->var=((void*)0);
    if(fun_113->mResultType->mHeap) {
        append_object_to_right_values(come_value_180,result_type_127,info,(_Bool)0,((void*)0),((void*)0),((void*)0));
    }
    add_come_last_code(info,"%s",come_value_180->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value_180, "08call.nc", 1627, 1554));
    info->calling_fun=fun_113;
        __result_obj__0 = (_Bool)1;
    (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 1631, 1555));
    come_call_finalizer(sType_finalize, result_type_127, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1631, 1556);
    come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1631, 1557);
    come_call_finalizer(list$1sType$ph$p_finalize, _o2_saved_17, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1631, 1558);
    come_call_finalizer(sType_finalize, result_type_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1631, 1559);
    come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_129, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1631, 1560);
    come_call_finalizer(buffer_finalize, buf_177, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1631, 1561);
    come_call_finalizer(list$1CVALUE$ph$p_finalize, _o2_saved_22, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1631, 1562);
    come_call_finalizer(CVALUE_finalize, come_value_180, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1631, 1563);
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
                __result_obj__0 = (struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((void*)0), "/usr/local/include/neo-c.h", 1509, 537);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1509, 542);
        return __result_obj__0;
    }
    result=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/neo-c.h", 1511, 543, "struct list$1tuple2$2char$phsNode$ph$ph*"), "/usr/local/include/neo-c.h", 1511, 547)), "/usr/local/include/neo-c.h", 1511, 548);
    it=self->head;
    while(it!=((void*)0)) {
        if(1) {
            __right_value0 = (void*)0;
            list$1tuple2$2char$phsNode$ph$ph_add(result,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_clone(it->item), "/usr/local/include/neo-c.h", 1516, 577));
        }
        else {
            __right_value0 = (void*)0;
            list$1tuple2$2char$phsNode$ph$ph_add(result,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_clone(it->item), "/usr/local/include/neo-c.h", 1519, 578));
        }
        it=it->next;
    }
        __result_obj__0 = (struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(result, "/usr/local/include/neo-c.h", 1525, 579);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1525, 580);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1525, 581);
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
        come_call_finalizer(list_item$1tuple2$2char$phsNode$ph$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1504, 541);
    }
            neo_current_frame = fr.prev;
}

static void list_item$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsNode$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1tuple2$2char$phsNode$ph$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "list_item$1tuple2$2char$phsNode$ph$ph$p_finalize}", 2, 540);
    }
            neo_current_frame = fr.prev;
}

static void tuple2$2char$phsNode$ph$p_finalize(struct tuple2$2char$phsNode$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2char$phsNode$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, (void*)0, "tuple2$2char$phsNode$ph$p_finalize", 2, 538));
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        ((self->v2) ? self->v2 = come_decrement_ref_count(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0,(void*)0, "tuple2$2char$phsNode$ph$p_finalize", 3, 539):(void*)0);
    }
            neo_current_frame = fr.prev;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_initialize(struct list$1tuple2$2char$phsNode$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsNode$ph$ph_initialize"; neo_current_frame = &fr;
    struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = (struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 1483, 544);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1483, 545);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1483, 546);
    return __result_obj__0;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_add(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsNode$ph$ph_add"; neo_current_frame = &fr;
    struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1tuple2$2char$phsNode$ph$ph* litem;
    struct tuple2$2char$phsNode$ph* __dec_obj62;
    struct list_item$1tuple2$2char$phsNode$ph$ph* litem_14;
    struct tuple2$2char$phsNode$ph* __dec_obj63;
    struct list_item$1tuple2$2char$phsNode$ph$ph* litem_15;
    struct tuple2$2char$phsNode$ph* __dec_obj64;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1529, 549);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/neo-c.h", 1532, 550, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))), "/usr/local/include/neo-c.h", 1532, 551);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj62=litem->item,
        litem->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1536, 553);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj62,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1536, 552);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_14=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/neo-c.h", 1542, 554, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))), "/usr/local/include/neo-c.h", 1542, 555);
        litem_14->prev=self->head;
        litem_14->next=((void*)0);
        __dec_obj63=litem_14->item,
        litem_14->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1546, 557);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj63,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1546, 556);
        self->tail=litem_14;
        self->head->next=litem_14;
    }
    else {
        __right_value0 = (void*)0;
        litem_15=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/neo-c.h", 1552, 558, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))), "/usr/local/include/neo-c.h", 1552, 559);
        litem_15->prev=self->tail;
        litem_15->next=((void*)0);
        __dec_obj64=litem_15->item,
        litem_15->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1556, 561);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj64,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1556, 560);
        self->tail->next=litem_15;
        self->tail=litem_15;
    }
    self->len++;
        __result_obj__0 = self;
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1564, 562);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_clone(struct tuple2$2char$phsNode$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2char$phsNode$ph_clone"; neo_current_frame = &fr;
    struct tuple2$2char$phsNode$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct tuple2$2char$phsNode$ph* result;
    char*  __dec_obj65  ;
    struct sNode* __dec_obj66;
    if(self==(void*)0) {
                __result_obj__0 = (struct tuple2$2char$phsNode$ph*)come_increment_ref_count((void*)0, "tuple2$2char$phsNode$ph_clone", 4, 563);
        neo_current_frame = fr.prev;
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "tuple2$2char$phsNode$ph_clone}", 4, 564);
        return __result_obj__0;
    }
    result=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "tuple2$2char$phsNode$ph_clone", 5, 565, "struct tuple2$2char$phsNode$ph*"), "tuple2$2char$phsNode$ph_clone", 5, 566);
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj65=result->v1,
        result->v1=(char* )come_increment_ref_count((char* )come_memdup(self->v1, "tuple2$2char$phsNode$ph_clone", 6, 567, "char* "), "tuple2$2char$phsNode$ph_clone", 6, 569);
        __dec_obj65 = come_decrement_ref_count(__dec_obj65, (void*)0, (void*)0, 0,0, (void*)0, "tuple2$2char$phsNode$ph_clone", 6, 568);
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj66=result->v2,
        result->v2=(struct sNode*)come_increment_ref_count(sNode_clone(self->v2), "tuple2$2char$phsNode$ph_clone", 7, 571);
        (__dec_obj66 ? __dec_obj66 = come_decrement_ref_count(__dec_obj66, ((struct sNode*)__dec_obj66)->finalize, ((struct sNode*)__dec_obj66)->_protocol_obj, 0,0, (void*)0, "tuple2$2char$phsNode$ph_clone", 7, 570) :0);
    }
        __result_obj__0 = (struct tuple2$2char$phsNode$ph*)come_increment_ref_count(result, "tuple2$2char$phsNode$ph_clone", 8, 572);
    come_call_finalizer(tuple2$2char$phsNode$ph_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "tuple2$2char$phsNode$ph_clone}", 8, 575);
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "tuple2$2char$phsNode$ph_clone}", 8, 576);
    return __result_obj__0;
}

static void tuple2$2char$phsNode$ph_finalize(struct tuple2$2char$phsNode$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2char$phsNode$ph_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, (void*)0, "tuple2$2char$phsNode$ph_finalize", 2, 573));
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        ((self->v2) ? self->v2 = come_decrement_ref_count(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0,(void*)0, "tuple2$2char$phsNode$ph_finalize", 3, 574):(void*)0);
    }
        neo_current_frame = fr.prev;
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
        come_call_finalizer(list_item$1tuple2$2char$phsNode$ph$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1504, 582);
    }
        neo_current_frame = fr.prev;
}

static void sFunCallNode_finalize(struct sFunCallNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sFunCallNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sFunCallNode_finalize", 2, 590));
    }
    if(self!=((void*)0)&&self->fun_name!=((void*)0)) {
        (self->fun_name = come_decrement_ref_count(self->fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "sFunCallNode_finalize", 3, 591));
    }
    if(self!=((void*)0)&&self->params!=((void*)0)) {
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, self->params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFunCallNode_finalize}", 4, 592);
    }
    if(self!=((void*)0)&&self->method_generics_types!=((void*)0)) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->method_generics_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFunCallNode_finalize}", 5, 593);
    }
    if(self!=((void*)0)&&self->method_block!=((void*)0)) {
        come_call_finalizer(buffer_finalize, self->method_block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFunCallNode_finalize}", 6, 594);
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
        __result_obj__0 = (struct list$1CVALUE$ph*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 1483, 606);
    come_call_finalizer(list$1CVALUE$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1483, 609);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1CVALUE$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1483, 610);
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
        come_call_finalizer(list_item$1CVALUE$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1504, 608);
    }
        neo_current_frame = fr.prev;
}

static void list_item$1CVALUE$ph$p_finalize(struct list_item$1CVALUE$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1CVALUE$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer(CVALUE_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "list_item$1CVALUE$ph$p_finalize}", 2, 607);
    }
            neo_current_frame = fr.prev;
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

static int list$1tuple2$2char$phsNode$ph$ph_length(struct list$1tuple2$2char$phsNode$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsNode$ph$ph_length"; neo_current_frame = &fr;
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return 0;
    }
        neo_current_frame = fr.prev;
    return self->len;
            neo_current_frame = fr.prev;
}

static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_begin(struct list$1tuple2$2char$phsNode$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsNode$ph$ph_begin"; neo_current_frame = &fr;
    struct tuple2$2char$phsNode$ph* result;
    struct tuple2$2char$phsNode$ph* __result_obj__0;
    struct tuple2$2char$phsNode$ph* result_16;
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
    memset(&result_16,0,sizeof(struct tuple2$2char$phsNode$ph*));
        __result_obj__0 = result_16;
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
    struct tuple2$2char$phsNode$ph* result_17;
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
    memset(&result_17,0,sizeof(struct tuple2$2char$phsNode$ph*));
        __result_obj__0 = result_17;
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
    struct sType*  default_value_18  ;
    if(self==((void*)0)) {
        memset(&default_value,0,sizeof(struct sType* ));
                __result_obj__0 = (struct sType* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 2148, 628);
        come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2148, 629);
        neo_current_frame = fr.prev;
        come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2148, 630);
        return __result_obj__0;
        come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 2151, 631);
    }
    if(position<0) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(it!=((void*)0)) {
        if(position==i) {
                        __result_obj__0 = (struct sType* )come_increment_ref_count(it->item, "/usr/local/include/neo-c.h", 2159, 632);
            neo_current_frame = fr.prev;
            come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2159, 633);
            return __result_obj__0;
        }
        it=it->next;
        i++;
    }
    memset(&default_value_18,0,sizeof(struct sType* ));
        __result_obj__0 = (struct sType* )come_increment_ref_count(default_value_18, "/usr/local/include/neo-c.h", 2167, 634);
    come_call_finalizer(sType_finalize, default_value_18, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2167, 635);
    neo_current_frame = fr.prev;
    come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2167, 636);
    return __result_obj__0;
}

static struct sType*  list$1sType$ph_operator_load_element(struct list$1sType$ph* self, int position)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_operator_load_element"; neo_current_frame = &fr;
    struct sType*  default_value  ;
    struct sType*  __result_obj__0  ;
    struct list_item$1sType$ph* it;
    int i;
    struct sType*  default_value_19  ;
    if(self==((void*)0)) {
        memset(&default_value,0,sizeof(struct sType* ));
                __result_obj__0 = (struct sType* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 2148, 637);
        come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2148, 638);
        neo_current_frame = fr.prev;
        come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2148, 639);
        return __result_obj__0;
        come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 2151, 640);
    }
    if(position<0) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(it!=((void*)0)) {
        if(position==i) {
                        __result_obj__0 = (struct sType* )come_increment_ref_count(it->item, "/usr/local/include/neo-c.h", 2159, 641);
            neo_current_frame = fr.prev;
            come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2159, 642);
            return __result_obj__0;
        }
        it=it->next;
        i++;
    }
    memset(&default_value_19,0,sizeof(struct sType* ));
        __result_obj__0 = (struct sType* )come_increment_ref_count(default_value_19, "/usr/local/include/neo-c.h", 2167, 643);
    come_call_finalizer(sType_finalize, default_value_19, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2167, 644);
    neo_current_frame = fr.prev;
    come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2167, 645);
    return __result_obj__0;
}

static struct CVALUE*  list$1CVALUE$ph_begin(struct list$1CVALUE$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1CVALUE$ph_begin"; neo_current_frame = &fr;
    struct CVALUE*  result  ;
    struct CVALUE*  __result_obj__0  ;
    struct CVALUE*  result_20  ;
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
    memset(&result_20,0,sizeof(struct CVALUE* ));
        __result_obj__0 = result_20;
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
    struct CVALUE*  result_22  ;
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
    memset(&result_22,0,sizeof(struct CVALUE* ));
        __result_obj__0 = result_22;
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

static struct sGenericsFun*  map$2char$phsGenericsFun$ph_at(struct map$2char$phsGenericsFun$ph* self, char*  key  , struct sGenericsFun*  default_value  , _Bool by_pointer)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsGenericsFun$ph_at"; neo_current_frame = &fr;
    struct sGenericsFun*  __result_obj__0  ;
    unsigned int hash;
    unsigned int it;
    if(self==((void*)0)) {
                __result_obj__0 = (struct sGenericsFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3139, 682);
        come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3139, 693);
        neo_current_frame = fr.prev;
        come_call_finalizer(sGenericsFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3139, 694);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char* )key))%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if((!by_pointer&&string_equals(self->keys[it],key))||(by_pointer&&self->keys[it]==key)) {
                                __result_obj__0 = (struct sGenericsFun* )come_increment_ref_count(self->items[it], "/usr/local/include/neo-c.h", 3150, 695);
                come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3150, 696);
                neo_current_frame = fr.prev;
                come_call_finalizer(sGenericsFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3150, 697);
                return __result_obj__0;
            }
            it++;
            if(it>=self->size) {
                it=0;
            }
            else if(it==hash) {
                                __result_obj__0 = (struct sGenericsFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3159, 698);
                come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3159, 699);
                neo_current_frame = fr.prev;
                come_call_finalizer(sGenericsFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3159, 700);
                return __result_obj__0;
            }
        }
        else {
                        __result_obj__0 = (struct sGenericsFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3163, 701);
            come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3163, 702);
            neo_current_frame = fr.prev;
            come_call_finalizer(sGenericsFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3163, 703);
            return __result_obj__0;
        }
    }
        __result_obj__0 = (struct sGenericsFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3167, 704);
    come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3167, 705);
    neo_current_frame = fr.prev;
    come_call_finalizer(sGenericsFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3167, 706);
    return __result_obj__0;
}

static void sGenericsFun_finalize(struct sGenericsFun*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sGenericsFun_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->mImplType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mImplType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sGenericsFun_finalize}", 2, 683);
    }
    if(self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mGenericsTypeNames, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sGenericsFun_finalize}", 3, 684);
    }
    if(self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mMethodGenericsTypeNames, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sGenericsFun_finalize}", 4, 685);
    }
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, (void*)0, "sGenericsFun_finalize", 5, 686));
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mResultType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sGenericsFun_finalize}", 6, 687);
    }
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sGenericsFun_finalize}", 7, 688);
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamNames, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sGenericsFun_finalize}", 8, 689);
    }
    if(self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sGenericsFun_finalize}", 9, 690);
    }
    if(self!=((void*)0)&&self->mBlock!=((void*)0)) {
        (self->mBlock = come_decrement_ref_count(self->mBlock, (void*)0, (void*)0, 0, 0, (void*)0, "sGenericsFun_finalize", 10, 691));
    }
    if(self!=((void*)0)&&self->mGenericsSName!=((void*)0)) {
        (self->mGenericsSName = come_decrement_ref_count(self->mGenericsSName, (void*)0, (void*)0, 0, 0, (void*)0, "sGenericsFun_finalize", 11, 692));
    }
            neo_current_frame = fr.prev;
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

static void tuple2$2char$phsGenericsFun$p$p_finalize(struct tuple2$2char$phsGenericsFun$p* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2char$phsGenericsFun$p$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, (void*)0, "tuple2$2char$phsGenericsFun$p$p_finalize", 2, 713));
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
                __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3139, 716);
        come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3139, 717);
        neo_current_frame = fr.prev;
        come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3139, 718);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char* )key))%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if((!by_pointer&&string_equals(self->keys[it],key))||(by_pointer&&self->keys[it]==key)) {
                                __result_obj__0 = (struct sFun* )come_increment_ref_count(self->items[it], "/usr/local/include/neo-c.h", 3150, 719);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3150, 720);
                neo_current_frame = fr.prev;
                come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3150, 721);
                return __result_obj__0;
            }
            it++;
            if(it>=self->size) {
                it=0;
            }
            else if(it==hash) {
                                __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3159, 722);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3159, 723);
                neo_current_frame = fr.prev;
                come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3159, 724);
                return __result_obj__0;
            }
        }
        else {
                        __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3163, 725);
            come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3163, 726);
            neo_current_frame = fr.prev;
            come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3163, 727);
            return __result_obj__0;
        }
    }
        __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3167, 728);
    come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3167, 729);
    neo_current_frame = fr.prev;
    come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3167, 730);
    return __result_obj__0;
}

static struct CVALUE*  list$1CVALUE$ph$p_operator_load_element(struct list$1CVALUE$ph* self, int position)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1CVALUE$ph$p_operator_load_element"; neo_current_frame = &fr;
    struct CVALUE*  default_value  ;
    struct CVALUE*  __result_obj__0  ;
    struct list_item$1CVALUE$ph* it;
    int i;
    struct CVALUE*  default_value_26  ;
    if(self==((void*)0)) {
        memset(&default_value,0,sizeof(struct CVALUE* ));
                __result_obj__0 = (struct CVALUE* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 2148, 739);
        come_call_finalizer(CVALUE_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2148, 740);
        neo_current_frame = fr.prev;
        come_call_finalizer(CVALUE_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2148, 741);
        return __result_obj__0;
        come_call_finalizer(CVALUE_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 2151, 742);
    }
    if(position<0) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(it!=((void*)0)) {
        if(position==i) {
                        __result_obj__0 = (struct CVALUE* )come_increment_ref_count(it->item, "/usr/local/include/neo-c.h", 2159, 743);
            neo_current_frame = fr.prev;
            come_call_finalizer(CVALUE_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2159, 744);
            return __result_obj__0;
        }
        it=it->next;
        i++;
    }
    memset(&default_value_26,0,sizeof(struct CVALUE* ));
        __result_obj__0 = (struct CVALUE* )come_increment_ref_count(default_value_26, "/usr/local/include/neo-c.h", 2167, 745);
    come_call_finalizer(CVALUE_finalize, default_value_26, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2167, 746);
    neo_current_frame = fr.prev;
    come_call_finalizer(CVALUE_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2167, 747);
    return __result_obj__0;
}

static struct CVALUE*  list$1CVALUE$ph_operator_load_element(struct list$1CVALUE$ph* self, int position)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1CVALUE$ph_operator_load_element"; neo_current_frame = &fr;
    struct CVALUE*  default_value  ;
    struct CVALUE*  __result_obj__0  ;
    struct list_item$1CVALUE$ph* it;
    int i;
    struct CVALUE*  default_value_27  ;
    if(self==((void*)0)) {
        memset(&default_value,0,sizeof(struct CVALUE* ));
                __result_obj__0 = (struct CVALUE* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 2148, 748);
        come_call_finalizer(CVALUE_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2148, 749);
        neo_current_frame = fr.prev;
        come_call_finalizer(CVALUE_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2148, 750);
        return __result_obj__0;
        come_call_finalizer(CVALUE_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 2151, 751);
    }
    if(position<0) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(it!=((void*)0)) {
        if(position==i) {
                        __result_obj__0 = (struct CVALUE* )come_increment_ref_count(it->item, "/usr/local/include/neo-c.h", 2159, 752);
            neo_current_frame = fr.prev;
            come_call_finalizer(CVALUE_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2159, 753);
            return __result_obj__0;
        }
        it=it->next;
        i++;
    }
    memset(&default_value_27,0,sizeof(struct CVALUE* ));
        __result_obj__0 = (struct CVALUE* )come_increment_ref_count(default_value_27, "/usr/local/include/neo-c.h", 2167, 754);
    come_call_finalizer(CVALUE_finalize, default_value_27, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2167, 755);
    neo_current_frame = fr.prev;
    come_call_finalizer(CVALUE_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2167, 756);
    return __result_obj__0;
}

static void list$1sType$ph_operator_store_element(struct list$1sType$ph* self, int position, struct sType*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_operator_store_element"; neo_current_frame = &fr;
    list$1sType$ph_replace(self,position,(struct sType* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 2140, 781));
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 555, 782);
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
    struct sType*  __dec_obj76  ;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 2020, 759);
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
            list$1sType$ph_push_back(self,(struct sType* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 2035, 774));
            come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 2037, 775);
        }
        list$1sType$ph_push_back(self,(struct sType* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 2037, 776));
                __result_obj__0 = self;
        come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 2038, 777);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    it=self->head;
    i_30=0;
    while(it!=((void*)0)) {
        if(position==i_30) {
            __dec_obj76=it->item,
            it->item=(struct sType* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 2045, 779);
            come_call_finalizer(sType_finalize, __dec_obj76,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 2045, 778);
            break;
        }
        it=it->next;
        i_30++;
    }
        __result_obj__0 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 2052, 780);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct list$1sType$ph* list$1sType$ph_push_back(struct list$1sType$ph* self, struct sType*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_push_back"; neo_current_frame = &fr;
    struct list$1sType$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1sType$ph* litem;
    struct sType*  __dec_obj73  ;
    struct list_item$1sType$ph* litem_28;
    struct sType*  __dec_obj74  ;
    struct list_item$1sType$ph* litem_29;
    struct sType*  __dec_obj75  ;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1613, 760);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/neo-c.h", 1617, 761, "struct list_item$1sType$ph*"))), "/usr/local/include/neo-c.h", 1617, 762);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj73=litem->item,
        litem->item=(struct sType* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1621, 764);
        come_call_finalizer(sType_finalize, __dec_obj73,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1621, 763);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_28=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/neo-c.h", 1627, 765, "struct list_item$1sType$ph*"))), "/usr/local/include/neo-c.h", 1627, 766);
        litem_28->prev=self->head;
        litem_28->next=((void*)0);
        __dec_obj74=litem_28->item,
        litem_28->item=(struct sType* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1631, 768);
        come_call_finalizer(sType_finalize, __dec_obj74,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1631, 767);
        self->tail=litem_28;
        self->head->next=litem_28;
    }
    else {
        __right_value0 = (void*)0;
        litem_29=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/neo-c.h", 1637, 769, "struct list_item$1sType$ph*"))), "/usr/local/include/neo-c.h", 1637, 770);
        litem_29->prev=self->tail;
        litem_29->next=((void*)0);
        __dec_obj75=litem_29->item,
        litem_29->item=(struct sType* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1641, 772);
        come_call_finalizer(sType_finalize, __dec_obj75,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1641, 771);
        self->tail->next=litem_29;
        self->tail=litem_29;
    }
    self->len++;
        __result_obj__0 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1649, 773);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sType*  list$1sType$ph_begin(struct list$1sType$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_begin"; neo_current_frame = &fr;
    struct sType*  result  ;
    struct sType*  __result_obj__0  ;
    struct sType*  result_31  ;
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
    memset(&result_31,0,sizeof(struct sType* ));
        __result_obj__0 = result_31;
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
    struct sType*  result_33  ;
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
    memset(&result_33,0,sizeof(struct sType* ));
        __result_obj__0 = result_33;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_add(struct list$1CVALUE$ph* self, struct CVALUE*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1CVALUE$ph_add"; neo_current_frame = &fr;
    struct list$1CVALUE$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1CVALUE$ph* litem;
    struct CVALUE*  __dec_obj78  ;
    struct list_item$1CVALUE$ph* litem_45;
    struct CVALUE*  __dec_obj79  ;
    struct list_item$1CVALUE$ph* litem_46;
    struct CVALUE*  __dec_obj80  ;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1529, 811);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/neo-c.h", 1532, 812, "struct list_item$1CVALUE$ph*"))), "/usr/local/include/neo-c.h", 1532, 813);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj78=litem->item,
        litem->item=(struct CVALUE* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1536, 815);
        come_call_finalizer(CVALUE_finalize, __dec_obj78,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1536, 814);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_45=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/neo-c.h", 1542, 816, "struct list_item$1CVALUE$ph*"))), "/usr/local/include/neo-c.h", 1542, 817);
        litem_45->prev=self->head;
        litem_45->next=((void*)0);
        __dec_obj79=litem_45->item,
        litem_45->item=(struct CVALUE* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1546, 819);
        come_call_finalizer(CVALUE_finalize, __dec_obj79,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1546, 818);
        self->tail=litem_45;
        self->head->next=litem_45;
    }
    else {
        __right_value0 = (void*)0;
        litem_46=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/neo-c.h", 1552, 820, "struct list_item$1CVALUE$ph*"))), "/usr/local/include/neo-c.h", 1552, 821);
        litem_46->prev=self->tail;
        litem_46->next=((void*)0);
        __dec_obj80=litem_46->item,
        litem_46->item=(struct CVALUE* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1556, 823);
        come_call_finalizer(CVALUE_finalize, __dec_obj80,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1556, 822);
        self->tail->next=litem_46;
        self->tail=litem_46;
    }
    self->len++;
        __result_obj__0 = self;
    come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1564, 824);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct map$2char$phsFun$ph* map$2char$phsFun$ph_remove(struct map$2char$phsFun$ph* self, char*  key  , _Bool by_pointer)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsFun$ph_remove"; neo_current_frame = &fr;
    struct map$2char$phsFun$ph* __result_obj__0;
    unsigned int hash;
    unsigned int it;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3173, 837));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char* )key))%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if((!by_pointer&&string_equals(self->keys[it],key))||(by_pointer&&self->keys[it]==key)) {
                list$1char$ph_remove(self->key_list,self->keys[it],(_Bool)0);
                self->item_existance[it]=(_Bool)0;
                if(1) {
                    (self->keys[it] = come_decrement_ref_count(self->keys[it], (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3188, 842));
                }
                self->keys[it]=((void*)0);
                if(1) {
                    come_call_finalizer(sFun_finalize, self->items[it], (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3193, 843);
                }
                memset(self->items+it,0,sizeof(struct sFun* ));
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
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3215, 844));
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
    struct list_item$1char$ph* it_51;
    int i_52;
    struct list_item$1char$ph* prev_it_53;
    struct list_item$1char$ph* it_54;
    struct list_item$1char$ph* head_prev_it;
    struct list_item$1char$ph* tail_it;
    int i_55;
    struct list_item$1char$ph* prev_it_56;
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
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1932, 839);
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
        it_51=self->head;
        i_52=0;
        while(it_51!=((void*)0)) {
            if(i_52==head) {
                self->tail=it_51->prev;
                self->tail->next=((void*)0);
            }
            if(i_52>=head) {
                prev_it_53=it_51;
                it_51=it_51->next;
                i_52++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_53, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1962, 840);
                self->len--;
            }
            else {
                it_51=it_51->next;
                i_52++;
            }
        }
    }
    else {
        it_54=self->head;
        head_prev_it=((void*)0);
        tail_it=((void*)0);
        i_55=0;
        while(it_54!=((void*)0)) {
            if(i_55==head) {
                head_prev_it=it_54->prev;
            }
            if(i_55==tail) {
                tail_it=it_54;
            }
            if(i_55>=head&&i_55<tail) {
                prev_it_56=it_54;
                it_54=it_54->next;
                i_55++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_56, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1995, 841);
                self->len--;
            }
            else {
                it_54=it_54->next;
                i_55++;
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
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1854, 838);
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
    char*  result_138  ;
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
    memset(&result_138,0,sizeof(char* ));
        __result_obj__0 = result_138;
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
    char*  result_140  ;
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
    memset(&result_140,0,sizeof(char* ));
        __result_obj__0 = result_140;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_replace(struct list$1CVALUE$ph* self, int position, struct CVALUE*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1CVALUE$ph_replace"; neo_current_frame = &fr;
    struct list$1CVALUE$ph* __result_obj__0;
    int len;
    int i;
    struct CVALUE*  default_value  ;
    struct list_item$1CVALUE$ph* it;
    int i_141;
    struct CVALUE*  __dec_obj116  ;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 2020, 1198);
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
            memset(&default_value,0,sizeof(struct CVALUE* ));
            list$1CVALUE$ph_push_back(self,(struct CVALUE* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 2035, 1199));
            come_call_finalizer(CVALUE_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 2037, 1200);
        }
        list$1CVALUE$ph_push_back(self,(struct CVALUE* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 2037, 1201));
                __result_obj__0 = self;
        come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 2038, 1202);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    it=self->head;
    i_141=0;
    while(it!=((void*)0)) {
        if(position==i_141) {
            __dec_obj116=it->item,
            it->item=(struct CVALUE* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 2045, 1204);
            come_call_finalizer(CVALUE_finalize, __dec_obj116,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 2045, 1203);
            break;
        }
        it=it->next;
        i_141++;
    }
        __result_obj__0 = self;
    come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 2052, 1205);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static char*  list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph$p_operator_load_element"; neo_current_frame = &fr;
    char*  default_value  ;
    char*  __result_obj__0  ;
    struct list_item$1char$ph* it;
    int i;
    char*  default_value_152  ;
    if(self==((void*)0)) {
        memset(&default_value,0,sizeof(char* ));
                __result_obj__0 = (char* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 2148, 1262);
        (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 2148, 1263));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 2148, 1264));
        return __result_obj__0;
        (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 2151, 1265));
    }
    if(position<0) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(it!=((void*)0)) {
        if(position==i) {
                        __result_obj__0 = (char* )come_increment_ref_count(it->item, "/usr/local/include/neo-c.h", 2159, 1266);
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 2159, 1267));
            return __result_obj__0;
        }
        it=it->next;
        i++;
    }
    memset(&default_value_152,0,sizeof(char* ));
        __result_obj__0 = (char* )come_increment_ref_count(default_value_152, "/usr/local/include/neo-c.h", 2167, 1268);
    (default_value_152 = come_decrement_ref_count(default_value_152, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 2167, 1269));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 2167, 1270));
    return __result_obj__0;
}

static char*  list$1char$ph_operator_load_element(struct list$1char$ph* self, int position)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_operator_load_element"; neo_current_frame = &fr;
    char*  default_value  ;
    char*  __result_obj__0  ;
    struct list_item$1char$ph* it;
    int i;
    char*  default_value_153  ;
    if(self==((void*)0)) {
        memset(&default_value,0,sizeof(char* ));
                __result_obj__0 = (char* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 2148, 1271);
        (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 2148, 1272));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 2148, 1273));
        return __result_obj__0;
        (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 2151, 1274));
    }
    if(position<0) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(it!=((void*)0)) {
        if(position==i) {
                        __result_obj__0 = (char* )come_increment_ref_count(it->item, "/usr/local/include/neo-c.h", 2159, 1275);
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 2159, 1276));
            return __result_obj__0;
        }
        it=it->next;
        i++;
    }
    memset(&default_value_153,0,sizeof(char* ));
        __result_obj__0 = (char* )come_increment_ref_count(default_value_153, "/usr/local/include/neo-c.h", 2167, 1277);
    (default_value_153 = come_decrement_ref_count(default_value_153, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 2167, 1278));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 2167, 1279));
    return __result_obj__0;
}

static struct span$1buffer$p* span$1buffer$p_initialize(struct span$1buffer$p* self, void* head, unsigned long  len  , _Bool local, _Bool heap, _Bool global, void* stacktop)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "span$1buffer$p_initialize"; neo_current_frame = &fr;
    struct span$1buffer$p* __result_obj__0;
    if(!1) {
        puts("invalid span");
        stackframe2(self);
        exit(2);
    }
    self->memory=(char*)head;
    self->p=(struct buffer* )head;
    self->len=len;
    self->local=local;
    self->heap=heap;
    self->global=global;
    self->stacktop=stacktop;
        __result_obj__0 = (struct span$1buffer$p*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 1024, 1288);
    come_call_finalizer(span$1buffer$p$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1024, 1289);
    neo_current_frame = fr.prev;
    come_call_finalizer(span$1buffer$p$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1024, 1290);
    return __result_obj__0;
}

static void span$1buffer$p$p_finalize(struct span$1buffer$p* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "span$1buffer$p$p_finalize"; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
}

static void span$1char$p$p_finalize(struct span$1char$p* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "span$1char$p$p_finalize"; neo_current_frame = &fr;
                        neo_current_frame = fr.prev;
}

static void sCurrentNode_finalize(struct sCurrentNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sCurrentNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sCurrentNode_finalize", 2, 1346));
    }
            neo_current_frame = fr.prev;
}

static struct sCurrentNode* sCurrentNode_clone(struct sCurrentNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sCurrentNode_clone"; neo_current_frame = &fr;
    struct sCurrentNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sCurrentNode*  result  ;
    char*  __dec_obj124  ;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sCurrentNode* )come_increment_ref_count((struct sCurrentNode *)come_calloc(1, sizeof(struct sCurrentNode )*(1), "sCurrentNode_clone", 5, 1347, "struct sCurrentNode* "), "sCurrentNode_clone", 5, 1348);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj124=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sCurrentNode_clone", 7, 1349, "char* "), "sCurrentNode_clone", 7, 1351);
        __dec_obj124 = come_decrement_ref_count(__dec_obj124, (void*)0, (void*)0, 0,0, (void*)0, "sCurrentNode_clone", 7, 1350);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
        __result_obj__0 = result;
    come_call_finalizer(sCurrentNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sCurrentNode_clone}", 9, 1352);
    neo_current_frame = fr.prev;
    return __result_obj__0;
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
                __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3513, 1373);
        come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3513, 1382);
        neo_current_frame = fr.prev;
        come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3513, 1383);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char* )key))%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if(string_equals(self->keys[it],key)) {
                                __result_obj__0 = (struct sClass* )come_increment_ref_count(self->items[it], "/usr/local/include/neo-c.h", 3524, 1384);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3524, 1385);
                neo_current_frame = fr.prev;
                come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3524, 1386);
                return __result_obj__0;
            }
            it++;
            if(it>=self->size) {
                it=0;
            }
            else if(it==hash) {
                                __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3533, 1387);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3533, 1388);
                neo_current_frame = fr.prev;
                come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3533, 1389);
                return __result_obj__0;
            }
        }
        else {
                        __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3537, 1390);
            come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3537, 1391);
            neo_current_frame = fr.prev;
            come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3537, 1392);
            return __result_obj__0;
        }
    }
        __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3541, 1393);
    come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3541, 1394);
    neo_current_frame = fr.prev;
    come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3541, 1395);
    return __result_obj__0;
}

static void sClass_finalize(struct sClass*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sClass_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, (void*)0, "sClass_finalize", 2, 1374));
    }
    if(self!=((void*)0)&&self->mFields!=((void*)0)) {
        come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, self->mFields, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sClass_finalize}", 3, 1379);
    }
    if(self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        (self->mParentClassName = come_decrement_ref_count(self->mParentClassName, (void*)0, (void*)0, 0, 0, (void*)0, "sClass_finalize", 4, 1380));
    }
    if(self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sClass_finalize", 5, 1381));
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
        come_call_finalizer(list_item$1tuple2$2char$phsType$ph$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1504, 1378);
    }
            neo_current_frame = fr.prev;
}

static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1tuple2$2char$phsType$ph$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "list_item$1tuple2$2char$phsType$ph$ph$p_finalize}", 2, 1377);
    }
            neo_current_frame = fr.prev;
}

static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2char$phsType$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, (void*)0, "tuple2$2char$phsType$ph$p_finalize", 2, 1375));
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "tuple2$2char$phsType$ph$p_finalize}", 3, 1376);
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
                __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3513, 1396);
        come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3513, 1397);
        neo_current_frame = fr.prev;
        come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3513, 1398);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char* )key))%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if(string_equals(self->keys[it],key)) {
                                __result_obj__0 = (struct sClass* )come_increment_ref_count(self->items[it], "/usr/local/include/neo-c.h", 3524, 1399);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3524, 1400);
                neo_current_frame = fr.prev;
                come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3524, 1401);
                return __result_obj__0;
            }
            it++;
            if(it>=self->size) {
                it=0;
            }
            else if(it==hash) {
                                __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3533, 1402);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3533, 1403);
                neo_current_frame = fr.prev;
                come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3533, 1404);
                return __result_obj__0;
            }
        }
        else {
                        __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3537, 1405);
            come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3537, 1406);
            neo_current_frame = fr.prev;
            come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3537, 1407);
            return __result_obj__0;
        }
    }
        __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3541, 1408);
    come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3541, 1409);
    neo_current_frame = fr.prev;
    come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3541, 1410);
    return __result_obj__0;
}

struct sComeCallNode* sComeCallNode_initialize(struct sComeCallNode* self, struct buffer*  come_block  , int come_block_sline, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sComeCallNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct buffer*  __dec_obj137  ;
    struct sComeCallNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sComeCallNode*)come_increment_ref_count(self, "08call.nc", 1638, 1564),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "08call.nc}", 1638, 1565);
    __dec_obj137=self->come_block,
    self->come_block=(struct buffer* )come_increment_ref_count(come_block, "08call.nc", 1640, 1567);
    come_call_finalizer(buffer_finalize, __dec_obj137,(void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc", 1640, 1566);
    self->come_block_sline=come_block_sline;
        __result_obj__0 = (struct sComeCallNode*)come_increment_ref_count(self, "08call.nc", 1644, 1568);
    come_call_finalizer(sComeCallNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "08call.nc}", 1644, 1571);
    come_call_finalizer(buffer_finalize, come_block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1644, 1572);
    neo_current_frame = fr.prev;
    come_call_finalizer(sComeCallNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "08call.nc}", 1644, 1573);
    return __result_obj__0;
}

char*  sComeCallNode_kind(struct sComeCallNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sComeCallNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sComeCallNode"))), "08call.nc", 1646, 1574);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "08call.nc", 1646, 1575));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "08call.nc", 1646, 1576));
    return __result_obj__0;
}

_Bool sComeCallNode_terminated(struct sComeCallNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sComeCallNode_terminated"; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return (_Bool)1;
    neo_current_frame = fr.prev;
}

_Bool sComeCallNode_compile(struct sComeCallNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sComeCallNode_compile"; neo_current_frame = &fr;
    int come_block_sline;
    struct buffer*  come_block  ;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1CVALUE$ph* come_params;
    char*  var_name  ;
    void* __right_value2 = (void*)0;
    struct sType*  type_  ;
    _Bool __result_obj__0;
    struct sNode* var_node;
    _Bool Value;
    struct CVALUE*  thread_var_value  ;
    struct CVALUE*  come_value  ;
    char*  __dec_obj138  ;
    struct sType*  __dec_obj139  ;
    struct sNode* null_node;
    _Bool Value_181;
    struct CVALUE*  __dec_obj140  ;
    struct sType*  type__182  ;
    struct sType*  __dec_obj141  ;
    struct sNode* _inf_value3;
    struct sCurrentNode* _inf_obj_value3;
    struct sNode* current_stack_frame_node;
    _Bool Value_183;
    struct CVALUE*  current_stack_frame_value  ;
    char*  fun_name  ;
    struct buffer*  come_block2  ;
    char*  class_name  ;
    struct sClass*  current_stack_frame_struct  ;
    struct buffer*  source3  ;
    char* p;
    char* head;
    int sline;
    struct buffer*  __dec_obj142  ;
    struct span$1char$p* __dec_obj143;
    struct sNode* node;
    _Bool in_method_block;
    _Bool Value_184;
    struct buffer*  __dec_obj144  ;
    struct span$1char$p* __dec_obj145;
    struct CVALUE*  fun_value  ;
    char*  __dec_obj146  ;
    struct sType*  __dec_obj147  ;
    struct buffer*  buf  ;
    char*  fun_name_185  ;
    int j;
    struct list$1CVALUE$ph* _o2_saved_23;
    struct CVALUE*  it  ;
    struct CVALUE*  come_value_186  ;
    char*  __dec_obj148  ;
    struct sType*  type  ;
    struct sType*  __dec_obj149  ;
    come_block_sline=self->come_block_sline;
    come_block=(struct buffer* )come_increment_ref_count(self->come_block, "08call.nc", 1657, 1577);
    come_params=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "08call.nc", 1659, 1578, "struct list$1CVALUE$ph*"), "08call.nc", 1659, 1579)), "08call.nc", 1659, 1580);
    static int thread_num=0;
    thread_num++;
    __right_value0 = (void*)0;
    var_name=(char* )come_increment_ref_count(xsprintf("__thread_info%d",thread_num), "08call.nc", 1664, 1581);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    type_=(struct sType* )come_increment_ref_count(sType_clone(((struct sType* )(__right_value1=map$2char$phsType$ph_at(info->types,((char*)(__right_value0=xsprintf("pthread_t"))),((void*)0),(_Bool)0)))), "08call.nc", 1666, 1597);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "08call.nc", 1666, 1598));
    come_call_finalizer(sType_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "08call.nc}", 1666, 1599);
    if(type_==((void*)0)) {
        err_msg(info,"pthread_t is not defined");
                __result_obj__0 = (_Bool)1;
        come_call_finalizer(buffer_finalize, come_block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1670, 1600);
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1670, 1601);
        (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 1670, 1602));
        come_call_finalizer(sType_finalize, type_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1670, 1603);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    var_node=(struct sNode*)come_increment_ref_count(store_var((char* )come_increment_ref_count(var_name, "08call.nc", 1673, 1604),((void*)0),((void*)0),type_,(_Bool)1,((void*)0),info,(_Bool)0), "08call.nc", 1673, 1605);
    Value=node_compile(var_node,info);
    if(!Value) {
                __result_obj__0 = (_Bool)0;
        come_call_finalizer(buffer_finalize, come_block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1676, 1606);
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1676, 1607);
        (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 1676, 1608));
        come_call_finalizer(sType_finalize, type_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1676, 1609);
        ((var_node) ? var_node = come_decrement_ref_count(var_node, ((struct sNode*)var_node)->finalize, ((struct sNode*)var_node)->_protocol_obj, 0, 0,(void*)0, "08call.nc", 1676, 1610):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    thread_var_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "08call.nc", 1679, 1611);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "08call.nc", 1681, 1612, "struct CVALUE* "), "08call.nc", 1681, 1613)), "08call.nc", 1681, 1614);
    __right_value0 = (void*)0;
    __dec_obj138=come_value->c_value,
    come_value->c_value=(char* )come_increment_ref_count(xsprintf("&%s",thread_var_value->c_value), "08call.nc", 1682, 1616);
    __dec_obj138 = come_decrement_ref_count(__dec_obj138, (void*)0, (void*)0, 0,0, (void*)0, "08call.nc", 1682, 1615);
    __dec_obj139=come_value->type,
    come_value->type=(struct sType* )come_increment_ref_count(thread_var_value->type, "08call.nc", 1683, 1618);
    come_call_finalizer(sType_finalize, __dec_obj139,(void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc", 1683, 1617);
    come_value->var=((void*)0);
    list$1CVALUE$ph_push_back(come_params,(struct CVALUE* )come_increment_ref_count(come_value, "08call.nc", 1686, 1619));
    __right_value0 = (void*)0;
    null_node=(struct sNode*)come_increment_ref_count(create_null_node(info), "08call.nc", 1688, 1620);
    Value_181=node_compile(null_node,info);
    if(!Value_181) {
                __result_obj__0 = (_Bool)0;
        come_call_finalizer(buffer_finalize, come_block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1691, 1621);
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1691, 1622);
        (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 1691, 1623));
        come_call_finalizer(sType_finalize, type_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1691, 1624);
        ((var_node) ? var_node = come_decrement_ref_count(var_node, ((struct sNode*)var_node)->finalize, ((struct sNode*)var_node)->_protocol_obj, 0, 0,(void*)0, "08call.nc", 1691, 1625):(void*)0);
        come_call_finalizer(CVALUE_finalize, thread_var_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1691, 1626);
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1691, 1627);
        ((null_node) ? null_node = come_decrement_ref_count(null_node, ((struct sNode*)null_node)->finalize, ((struct sNode*)null_node)->_protocol_obj, 0, 0,(void*)0, "08call.nc", 1691, 1628):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    __dec_obj140=come_value,
    come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "08call.nc", 1694, 1630);
    come_call_finalizer(CVALUE_finalize, __dec_obj140,(void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc", 1694, 1629);
    come_call_finalizer(sType_finalize, type_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1696, 1631);
    __right_value0 = (void*)0;
    type__182=(struct sType* )come_increment_ref_count(solve_generics(come_value->type,info->generics_type,info), "08call.nc", 1696, 1632);
    __right_value0 = (void*)0;
    __dec_obj141=come_value->type,
    come_value->type=(struct sType* )come_increment_ref_count(solve_method_generics(type__182,info), "08call.nc", 1697, 1634);
    come_call_finalizer(sType_finalize, __dec_obj141,(void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc", 1697, 1633);
    list$1CVALUE$ph_push_back(come_params,(struct CVALUE* )come_increment_ref_count(come_value, "08call.nc", 1699, 1635));
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08call.nc", 1701, 1638, "struct sNode");
    _inf_obj_value3=(struct sCurrentNode*)come_increment_ref_count(((struct sCurrentNode*)(__right_value1=sCurrentNode_initialize((struct sCurrentNode* )come_increment_ref_count((struct sCurrentNode *)come_calloc(1, sizeof(struct sCurrentNode )*(1), "08call.nc", 1701, 1636, "struct sCurrentNode* "), "08call.nc", 1701, 1637),info))), "08call.nc", 1701, 1639);
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sCurrentNode_finalize;
    _inf_value3->clone=(void*)sCurrentNode_clone;
    _inf_value3->compile=(void*)sCurrentNode_compile;
    _inf_value3->sline=(void*)sCurrentNode_sline;
    _inf_value3->sline_real=(void*)sNodeBase_sline_real;
    _inf_value3->sname=(void*)sCurrentNode_sname;
    _inf_value3->terminated=(void*)sNodeBase_terminated;
    _inf_value3->kind=(void*)sCurrentNode_kind;
    _inf_value3->left_value=(void*)sNodeBase_left_value;
    __right_value2 = (void*)0;
    current_stack_frame_node=(struct sNode*)come_increment_ref_count(_inf_value3, "08call.nc", 1701, 1640);
    come_call_finalizer(sCurrentNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "08call.nc}", 1701, 1641);
    Value_183=node_compile(current_stack_frame_node,info);
    if(!Value_183) {
                __result_obj__0 = (_Bool)0;
        come_call_finalizer(buffer_finalize, come_block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1704, 1642);
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1704, 1643);
        (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 1704, 1644));
        ((var_node) ? var_node = come_decrement_ref_count(var_node, ((struct sNode*)var_node)->finalize, ((struct sNode*)var_node)->_protocol_obj, 0, 0,(void*)0, "08call.nc", 1704, 1645):(void*)0);
        come_call_finalizer(CVALUE_finalize, thread_var_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1704, 1646);
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1704, 1647);
        ((null_node) ? null_node = come_decrement_ref_count(null_node, ((struct sNode*)null_node)->finalize, ((struct sNode*)null_node)->_protocol_obj, 0, 0,(void*)0, "08call.nc", 1704, 1648):(void*)0);
        come_call_finalizer(sType_finalize, type__182, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1704, 1649);
        ((current_stack_frame_node) ? current_stack_frame_node = come_decrement_ref_count(current_stack_frame_node, ((struct sNode*)current_stack_frame_node)->finalize, ((struct sNode*)current_stack_frame_node)->_protocol_obj, 0, 0,(void*)0, "08call.nc", 1704, 1650):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    current_stack_frame_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "08call.nc", 1707, 1651);
    __right_value0 = (void*)0;
    fun_name=(char* )come_increment_ref_count(xsprintf("__thread_fun%d",thread_num), "08call.nc", 1709, 1652);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    come_block2=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "08call.nc", 1711, 1653, "struct buffer* "), "08call.nc", 1711, 1654)), "08call.nc", 1711, 1655);
    __right_value0 = (void*)0;
    class_name=(char* )come_increment_ref_count(xsprintf("__current_stack%d__",info->current_stack_num), "08call.nc", 1713, 1656);
    buffer_append_format(come_block2,"void* %s(%s* parent)\n",fun_name,class_name);
    __right_value0 = (void*)0;
    buffer_append_str(come_block2,((char* )(__right_value0=buffer_to_string(come_block))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "08call.nc", 1717, 1657));
    current_stack_frame_struct=info->current_stack_frame_struct;
    __right_value0 = (void*)0;
    info->current_stack_frame_struct=((struct sClass* )(__right_value0=map$2char$phsClass$ph_operator_load_element(info->classes,class_name)));
    source3=(struct buffer* )come_increment_ref_count(info->source, "08call.nc", 1722, 1658);
    p=info->p->p;
    head=info->head;
    sline=info->sline;
    __dec_obj142=info->source,
    info->source=(struct buffer* )come_increment_ref_count(come_block2, "08call.nc", 1727, 1660);
    come_call_finalizer(buffer_finalize, __dec_obj142,(void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc", 1727, 1659);
    if(info->p==((void*)0)) {
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __dec_obj143=info->p,
        info->p=(struct span$1buffer$p*)come_increment_ref_count(span$1buffer$p_initialize((struct span$1buffer$p*)come_increment_ref_count((struct span$1buffer$p*)come_calloc(1, sizeof(struct span$1buffer$p)*(1), "08call.nc", 1729, 1661, "struct span$1buffer$p*"), "08call.nc", 1729, 1662),info->source->buf,info->source->len+1,(_Bool)1,(_Bool)0,(_Bool)0,neo_current_frame->stacktop), "08call.nc", 1729, 1664);
        come_call_finalizer(span$1char$p$p_finalize, __dec_obj143,(void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc", 1729, 1663);
    }
    info->p->memory=info->source->buf;
    info->p->len=info->source->len+2;
    info->p->p=info->source->buf;
    info->head=info->source->buf;
    info->sline=come_block_sline;
    __right_value0 = (void*)0;
    node=(struct sNode*)come_increment_ref_count(parse_function(info), "08call.nc", 1737, 1665);
    in_method_block=info->in_method_block;
    info->in_method_block=(_Bool)1;
    Value_184=node_compile(node,info);
    if(!Value_184) {
                __result_obj__0 = (_Bool)0;
        come_call_finalizer(buffer_finalize, come_block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1742, 1666);
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1742, 1667);
        (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 1742, 1668));
        ((var_node) ? var_node = come_decrement_ref_count(var_node, ((struct sNode*)var_node)->finalize, ((struct sNode*)var_node)->_protocol_obj, 0, 0,(void*)0, "08call.nc", 1742, 1669):(void*)0);
        come_call_finalizer(CVALUE_finalize, thread_var_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1742, 1670);
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1742, 1671);
        ((null_node) ? null_node = come_decrement_ref_count(null_node, ((struct sNode*)null_node)->finalize, ((struct sNode*)null_node)->_protocol_obj, 0, 0,(void*)0, "08call.nc", 1742, 1672):(void*)0);
        come_call_finalizer(sType_finalize, type__182, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1742, 1673);
        ((current_stack_frame_node) ? current_stack_frame_node = come_decrement_ref_count(current_stack_frame_node, ((struct sNode*)current_stack_frame_node)->finalize, ((struct sNode*)current_stack_frame_node)->_protocol_obj, 0, 0,(void*)0, "08call.nc", 1742, 1674):(void*)0);
        come_call_finalizer(CVALUE_finalize, current_stack_frame_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1742, 1675);
        (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 1742, 1676));
        come_call_finalizer(buffer_finalize, come_block2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1742, 1677);
        (class_name = come_decrement_ref_count(class_name, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 1742, 1678));
        come_call_finalizer(buffer_finalize, source3, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1742, 1679);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "08call.nc", 1742, 1680):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    info->in_method_block=in_method_block;
    __dec_obj144=info->source,
    info->source=(struct buffer* )come_increment_ref_count(source3, "08call.nc", 1746, 1682);
    come_call_finalizer(buffer_finalize, __dec_obj144,(void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc", 1746, 1681);
    if(info->p==((void*)0)) {
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __dec_obj145=info->p,
        info->p=(struct span$1buffer$p*)come_increment_ref_count(span$1buffer$p_initialize((struct span$1buffer$p*)come_increment_ref_count((struct span$1buffer$p*)come_calloc(1, sizeof(struct span$1buffer$p)*(1), "08call.nc", 1748, 1683, "struct span$1buffer$p*"), "08call.nc", 1748, 1684),info->source->buf,info->source->len+1,(_Bool)1,(_Bool)0,(_Bool)0,neo_current_frame->stacktop), "08call.nc", 1748, 1686);
        come_call_finalizer(span$1char$p$p_finalize, __dec_obj145,(void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc", 1748, 1685);
    }
    info->p->memory=info->source->buf;
    info->p->len=info->source->len+2;
    info->p->p=info->source->buf;
    info->p->p=p;
    info->head=head;
    info->sline=sline;
    info->current_stack_frame_struct=current_stack_frame_struct;
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    fun_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "08call.nc", 1759, 1687, "struct CVALUE* "), "08call.nc", 1759, 1688)), "08call.nc", 1759, 1689);
    __right_value0 = (void*)0;
    __dec_obj146=fun_value->c_value,
    fun_value->c_value=(char* )come_increment_ref_count(xsprintf("(((void* (*)(void*))(%s)))",fun_name), "08call.nc", 1761, 1691);
    __dec_obj146 = come_decrement_ref_count(__dec_obj146, (void*)0, (void*)0, 0,0, (void*)0, "08call.nc", 1761, 1690);
    __dec_obj147=come_value->type,
    come_value->type=((void*)0);
    come_call_finalizer(sType_finalize, __dec_obj147,(void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc", 1762, 1692);
    come_value->var=((void*)0);
    list$1CVALUE$ph_add(come_params,(struct CVALUE* )come_increment_ref_count(fun_value, "08call.nc", 1765, 1693));
    list$1CVALUE$ph_add(come_params,(struct CVALUE* )come_increment_ref_count(current_stack_frame_value, "08call.nc", 1767, 1694));
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "08call.nc", 1769, 1695, "struct buffer* "), "08call.nc", 1769, 1696)), "08call.nc", 1769, 1697);
    (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 1771, 1698));
    __right_value0 = (void*)0;
    fun_name_185=(char*)come_increment_ref_count(xsprintf("pthread_create"), "08call.nc", 1771, 1699);
    buffer_append_str(buf,"(");
    buffer_append_str(buf,fun_name_185);
    buffer_append_str(buf,"(");
    j=0;
    for(_o2_saved_23=(struct list$1CVALUE$ph*)come_increment_ref_count(come_params, "08call.nc", 1778, 1700),it=list$1CVALUE$ph_begin(_o2_saved_23)    ;!list$1CVALUE$ph_end(_o2_saved_23);it=list$1CVALUE$ph_next(_o2_saved_23)){
        buffer_append_str(buf,it->c_value);
        if(j!=list$1CVALUE$ph_length(come_params)-1) {
            buffer_append_str(buf,",");
        }
        j++;
    }
    buffer_append_str(buf,")");
    buffer_append_str(buf,", ");
    buffer_append_str(buf,thread_var_value->c_value);
    buffer_append_str(buf,")");
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1792, 1701);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    come_value_186=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "08call.nc", 1792, 1702, "struct CVALUE* "), "08call.nc", 1792, 1703)), "08call.nc", 1792, 1704);
    __right_value0 = (void*)0;
    __dec_obj148=come_value_186->c_value,
    come_value_186->c_value=(char* )come_increment_ref_count(buffer_to_string(buf), "08call.nc", 1793, 1706);
    __dec_obj148 = come_decrement_ref_count(__dec_obj148, (void*)0, (void*)0, 0,0, (void*)0, "08call.nc", 1793, 1705);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __right_value2 = (void*)0;
    type=(struct sType* )come_increment_ref_count(sType_clone(((struct sType* )(__right_value1=map$2char$phsType$ph_at(info->types,((char*)(__right_value0=xsprintf("pthread_t"))),((void*)0),(_Bool)0)))), "08call.nc", 1795, 1707);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "08call.nc", 1795, 1708));
    come_call_finalizer(sType_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "08call.nc}", 1795, 1709);
    if(type==((void*)0)) {
        err_msg(info,"pthread_t is not defined");
    }
    __dec_obj149=come_value_186->type,
    come_value_186->type=(struct sType* )come_increment_ref_count(type, "08call.nc", 1799, 1711);
    come_call_finalizer(sType_finalize, __dec_obj149,(void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc", 1799, 1710);
    come_value_186->var=((void*)0);
    add_come_last_code(info,"%s",come_value_186->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value_186, "08call.nc", 1804, 1712));
        __result_obj__0 = (_Bool)1;
    come_call_finalizer(buffer_finalize, come_block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1806, 1713);
    come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1806, 1714);
    (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 1806, 1715));
    ((var_node) ? var_node = come_decrement_ref_count(var_node, ((struct sNode*)var_node)->finalize, ((struct sNode*)var_node)->_protocol_obj, 0, 0,(void*)0, "08call.nc", 1806, 1716):(void*)0);
    come_call_finalizer(CVALUE_finalize, thread_var_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1806, 1717);
    ((null_node) ? null_node = come_decrement_ref_count(null_node, ((struct sNode*)null_node)->finalize, ((struct sNode*)null_node)->_protocol_obj, 0, 0,(void*)0, "08call.nc", 1806, 1718):(void*)0);
    come_call_finalizer(sType_finalize, type__182, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1806, 1719);
    ((current_stack_frame_node) ? current_stack_frame_node = come_decrement_ref_count(current_stack_frame_node, ((struct sNode*)current_stack_frame_node)->finalize, ((struct sNode*)current_stack_frame_node)->_protocol_obj, 0, 0,(void*)0, "08call.nc", 1806, 1720):(void*)0);
    come_call_finalizer(CVALUE_finalize, current_stack_frame_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1806, 1721);
    come_call_finalizer(buffer_finalize, come_block2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1806, 1722);
    (class_name = come_decrement_ref_count(class_name, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 1806, 1723));
    come_call_finalizer(buffer_finalize, source3, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1806, 1724);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "08call.nc", 1806, 1725):(void*)0);
    come_call_finalizer(CVALUE_finalize, fun_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1806, 1726);
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1806, 1727);
    (fun_name_185 = come_decrement_ref_count(fun_name_185, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 1806, 1728));
    come_call_finalizer(list$1CVALUE$ph$p_finalize, _o2_saved_23, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1806, 1729);
    come_call_finalizer(CVALUE_finalize, come_value_186, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1806, 1730);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1806, 1731);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sComeCallNode_finalize(struct sComeCallNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sComeCallNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sComeCallNode_finalize", 2, 1569));
    }
    if(self!=((void*)0)&&self->come_block!=((void*)0)) {
        come_call_finalizer(buffer_finalize, self->come_block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sComeCallNode_finalize}", 3, 1570);
    }
        neo_current_frame = fr.prev;
}

static struct sType*  map$2char$phsType$ph_at(struct map$2char$phsType$ph* self, char*  key  , struct sType*  default_value  , _Bool by_pointer)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsType$ph_at"; neo_current_frame = &fr;
    struct sType*  __result_obj__0  ;
    unsigned int hash;
    unsigned int it;
    if(self==((void*)0)) {
                __result_obj__0 = (struct sType* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3139, 1582);
        come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3139, 1583);
        neo_current_frame = fr.prev;
        come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3139, 1584);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char* )key))%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if((!by_pointer&&string_equals(self->keys[it],key))||(by_pointer&&self->keys[it]==key)) {
                                __result_obj__0 = (struct sType* )come_increment_ref_count(self->items[it], "/usr/local/include/neo-c.h", 3150, 1585);
                come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3150, 1586);
                neo_current_frame = fr.prev;
                come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3150, 1587);
                return __result_obj__0;
            }
            it++;
            if(it>=self->size) {
                it=0;
            }
            else if(it==hash) {
                                __result_obj__0 = (struct sType* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3159, 1588);
                come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3159, 1589);
                neo_current_frame = fr.prev;
                come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3159, 1590);
                return __result_obj__0;
            }
        }
        else {
                        __result_obj__0 = (struct sType* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3163, 1591);
            come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3163, 1592);
            neo_current_frame = fr.prev;
            come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3163, 1593);
            return __result_obj__0;
        }
    }
        __result_obj__0 = (struct sType* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3167, 1594);
    come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3167, 1595);
    neo_current_frame = fr.prev;
    come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3167, 1596);
    return __result_obj__0;
}

struct sComeJoinNode* sComeJoinNode_initialize(struct sComeJoinNode* self, struct sNode* node, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sComeJoinNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj150;
    struct sComeJoinNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sComeJoinNode*)come_increment_ref_count(self, "08call.nc", 1813, 1732),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "08call.nc}", 1813, 1733);
    __dec_obj150=self->node,
    self->node=(struct sNode*)come_increment_ref_count(node, "08call.nc", 1815, 1735);
    (__dec_obj150 ? __dec_obj150 = come_decrement_ref_count(__dec_obj150, ((struct sNode*)__dec_obj150)->finalize, ((struct sNode*)__dec_obj150)->_protocol_obj, 0,0, (void*)0, "08call.nc", 1815, 1734) :0);
        __result_obj__0 = (struct sComeJoinNode*)come_increment_ref_count(self, "08call.nc", 1818, 1736);
    come_call_finalizer(sComeJoinNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "08call.nc}", 1818, 1739);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "08call.nc", 1818, 1740):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sComeJoinNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "08call.nc}", 1818, 1741);
    return __result_obj__0;
}

char*  sComeJoinNode_kind(struct sComeJoinNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sComeJoinNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sComeJoinNode"))), "08call.nc", 1820, 1742);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "08call.nc", 1820, 1743));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "08call.nc", 1820, 1744));
    return __result_obj__0;
}

_Bool sComeJoinNode_terminated(struct sComeJoinNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sComeJoinNode_terminated"; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return (_Bool)0;
    neo_current_frame = fr.prev;
}

_Bool sComeJoinNode_compile(struct sComeJoinNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sComeJoinNode_compile"; neo_current_frame = &fr;
    struct sNode* node;
    _Bool Value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE*  come_value  ;
    void* __right_value1 = (void*)0;
    struct buffer*  buf  ;
    struct CVALUE*  come_value_187  ;
    char*  __dec_obj151  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj152  ;
    node=(struct sNode*)come_increment_ref_count(self->node, "08call.nc", 1830, 1745);
    Value=node_compile(node,info);
    if(!Value) {
                __result_obj__0 = (_Bool)0;
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "08call.nc", 1833, 1746):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "08call.nc", 1836, 1747);
    __right_value0 = (void*)0;
    buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "08call.nc", 1838, 1748, "struct buffer* "), "08call.nc", 1838, 1749)), "08call.nc", 1838, 1750);
    buffer_append_str(buf,"pthread_join(");
    buffer_append_str(buf,come_value->c_value);
    buffer_append_str(buf,", 0)");
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1843, 1751);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    come_value_187=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "08call.nc", 1843, 1752, "struct CVALUE* "), "08call.nc", 1843, 1753)), "08call.nc", 1843, 1754);
    __right_value0 = (void*)0;
    __dec_obj151=come_value_187->c_value,
    come_value_187->c_value=(char* )come_increment_ref_count(buffer_to_string(buf), "08call.nc", 1844, 1756);
    __dec_obj151 = come_decrement_ref_count(__dec_obj151, (void*)0, (void*)0, 0,0, (void*)0, "08call.nc", 1844, 1755);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj152=come_value_187->type,
    come_value_187->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "08call.nc", 1845, 1757, "struct sType* "), "08call.nc", 1845, 1758),(char*)come_increment_ref_count(xsprintf("void"), "08call.nc", 1845, 1759),(_Bool)0,info,(_Bool)0,0), "08call.nc", 1845, 1761);
    come_call_finalizer(sType_finalize, __dec_obj152,(void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc", 1845, 1760);
    come_value_187->var=((void*)0);
    add_come_last_code(info,"%s",come_value_187->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value_187, "08call.nc", 1850, 1762));
        __result_obj__0 = (_Bool)1;
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "08call.nc", 1852, 1763):(void*)0);
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1852, 1764);
    come_call_finalizer(CVALUE_finalize, come_value_187, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1852, 1765);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sComeJoinNode_finalize(struct sComeJoinNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sComeJoinNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sComeJoinNode_finalize", 2, 1737));
    }
    if(self!=((void*)0)&&self->node!=((void*)0)) {
        ((self->node) ? self->node = come_decrement_ref_count(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0,(void*)0, "sComeJoinNode_finalize", 3, 1738):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sComePollNode* sComePollNode_initialize(struct sComePollNode* self, struct list$1sNode$ph* vars, struct list$1sBlock$ph* blocks, struct sBlock*  else_block  , int time_out, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sComePollNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct list$1sNode$ph* __dec_obj153;
    struct list$1sBlock$ph* __dec_obj154;
    struct sBlock*  __dec_obj155  ;
    struct sComePollNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sComePollNode*)come_increment_ref_count(self, "08call.nc", 1860, 1766),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "08call.nc}", 1860, 1767);
    __dec_obj153=self->vars,
    self->vars=(struct list$1sNode$ph*)come_increment_ref_count(vars, "08call.nc", 1862, 1769);
    come_call_finalizer(list$1sNode$ph_finalize, __dec_obj153,(void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc", 1862, 1768);
    __dec_obj154=self->blocks,
    self->blocks=(struct list$1sBlock$ph*)come_increment_ref_count(blocks, "08call.nc", 1863, 1773);
    come_call_finalizer(list$1sBlock$ph_finalize, __dec_obj154,(void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc", 1863, 1772);
    __dec_obj155=self->else_block,
    self->else_block=(struct sBlock* )come_increment_ref_count(else_block, "08call.nc", 1864, 1775);
    come_call_finalizer(sBlock_finalize, __dec_obj155,(void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc", 1864, 1774);
    self->time_out=time_out;
        __result_obj__0 = (struct sComePollNode*)come_increment_ref_count(self, "08call.nc", 1868, 1776);
    come_call_finalizer(sComePollNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "08call.nc}", 1868, 1782);
    come_call_finalizer(list$1sNode$ph$p_finalize, vars, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1868, 1783);
    come_call_finalizer(list$1sBlock$ph$p_finalize, blocks, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1868, 1784);
    come_call_finalizer(sBlock_finalize, else_block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1868, 1785);
    neo_current_frame = fr.prev;
    come_call_finalizer(sComePollNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "08call.nc}", 1868, 1786);
    return __result_obj__0;
}

char*  sComePollNode_kind(struct sComePollNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sComePollNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sComePollNode"))), "08call.nc", 1870, 1787);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "08call.nc", 1870, 1788));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "08call.nc", 1870, 1789));
    return __result_obj__0;
}

_Bool sComePollNode_terminated(struct sComePollNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sComePollNode_terminated"; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return (_Bool)1;
    neo_current_frame = fr.prev;
}

_Bool sComePollNode_compile(struct sComePollNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sComePollNode_compile"; neo_current_frame = &fr;
    struct list$1sNode$ph* vars;
    struct list$1sBlock$ph* blocks;
    int time_out;
    int n;
    struct list$1sNode$ph* _o2_saved_24;
    struct sNode* it;
    _Bool Value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE*  come_value  ;
    int n_190;
    struct list$1sNode$ph* _o2_saved_25;
    struct sNode* it_191;
    vars=(struct list$1sNode$ph*)come_increment_ref_count(self->vars, "08call.nc", 1880, 1790);
    blocks=(struct list$1sBlock$ph*)come_increment_ref_count(self->blocks, "08call.nc", 1881, 1791);
    time_out=self->time_out;
    static int var_num=0;
    var_num++;
    add_come_code(info,"struct pollfd fds%d[%d];\n",var_num,list$1sNode$ph_length(vars));
    n=0;
    for(_o2_saved_24=(struct list$1sNode$ph*)come_increment_ref_count(self->vars, "08call.nc", 1890, 1792),it=list$1sNode$ph_begin(_o2_saved_24)    ;!list$1sNode$ph_end(_o2_saved_24);it=list$1sNode$ph_next(_o2_saved_24)){
        Value=node_compile(it,info);
        if(!Value) {
                        __result_obj__0 = (_Bool)0;
            come_call_finalizer(list$1sNode$ph$p_finalize, vars, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1892, 1793);
            come_call_finalizer(list$1sBlock$ph$p_finalize, blocks, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1892, 1794);
            come_call_finalizer(list$1sNode$ph$p_finalize, _o2_saved_24, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1892, 1795);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "08call.nc", 1895, 1796);
        add_come_code(info,"fds%d[%d].fd = %s[0];\n",var_num,n,come_value->c_value);
        add_come_code(info,"fds%d[%d].events = %d;\n",var_num,n,0x001);
        n++;
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1902, 1797);
    }
    add_come_code(info,"int poll_ret%d = poll(fds%d, %d, %d);\n",var_num,var_num,list$1sNode$ph_length(vars),time_out);
    add_come_code(info,"if(poll_ret%d > 0) {\n",var_num);
    n_190=0;
    for(_o2_saved_25=(struct list$1sNode$ph*)come_increment_ref_count(self->vars, "08call.nc", 1906, 1798),it_191=list$1sNode$ph_begin(_o2_saved_25)    ;!list$1sNode$ph_end(_o2_saved_25);it_191=list$1sNode$ph_next(_o2_saved_25)){
        add_come_code(info,"if(fds%d[%d].revents & %d) {\n",var_num,n_190,0x001);
        __right_value0 = (void*)0;
        transpile_block(((struct sBlock* )(__right_value0=list$1sBlock$ph_operator_load_element(blocks,n_190))),((void*)0),((void*)0),info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
        come_call_finalizer(sBlock_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "08call.nc}", 1908, 1817);
        add_come_code(info,"}\n");
        n_190++;
    }
    add_come_code(info,"}\n");
    add_come_code(info,"else {\n",var_num);
    transpile_block(self->else_block,((void*)0),((void*)0),info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
    add_come_code(info,"}\n");
        __result_obj__0 = (_Bool)1;
    come_call_finalizer(list$1sNode$ph$p_finalize, vars, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1921, 1818);
    come_call_finalizer(list$1sBlock$ph$p_finalize, blocks, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1921, 1819);
    come_call_finalizer(list$1sNode$ph$p_finalize, _o2_saved_24, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1921, 1820);
    come_call_finalizer(list$1sNode$ph$p_finalize, _o2_saved_25, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1921, 1821);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void list$1sBlock$ph_finalize(struct list$1sBlock$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sBlock$ph_finalize"; neo_current_frame = &fr;
    struct list_item$1sBlock$ph* it;
    struct list_item$1sBlock$ph* prev_it;
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sBlock$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1504, 1771);
    }
        neo_current_frame = fr.prev;
}

static void list_item$1sBlock$ph$p_finalize(struct list_item$1sBlock$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1sBlock$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer(sBlock_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "list_item$1sBlock$ph$p_finalize}", 2, 1770);
    }
            neo_current_frame = fr.prev;
}

static void sComePollNode_finalize(struct sComePollNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sComePollNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sComePollNode_finalize", 2, 1777));
    }
    if(self!=((void*)0)&&self->vars!=((void*)0)) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->vars, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sComePollNode_finalize}", 3, 1778);
    }
    if(self!=((void*)0)&&self->blocks!=((void*)0)) {
        come_call_finalizer(list$1sBlock$ph$p_finalize, self->blocks, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sComePollNode_finalize}", 4, 1780);
    }
    if(self!=((void*)0)&&self->else_block!=((void*)0)) {
        come_call_finalizer(sBlock_finalize, self->else_block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sComePollNode_finalize}", 5, 1781);
    }
        neo_current_frame = fr.prev;
}

static void list$1sBlock$ph$p_finalize(struct list$1sBlock$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sBlock$ph$p_finalize"; neo_current_frame = &fr;
    struct list_item$1sBlock$ph* it;
    struct list_item$1sBlock$ph* prev_it;
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sBlock$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1504, 1779);
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
    struct sNode* result_188;
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
    memset(&result_188,0,sizeof(struct sNode*));
        __result_obj__0 = result_188;
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
    struct sNode* result_189;
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
    memset(&result_189,0,sizeof(struct sNode*));
        __result_obj__0 = result_189;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sBlock*  list$1sBlock$ph$p_operator_load_element(struct list$1sBlock$ph* self, int position)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sBlock$ph$p_operator_load_element"; neo_current_frame = &fr;
    struct sBlock*  default_value  ;
    struct sBlock*  __result_obj__0  ;
    struct list_item$1sBlock$ph* it;
    int i;
    struct sBlock*  default_value_192  ;
    if(self==((void*)0)) {
        memset(&default_value,0,sizeof(struct sBlock* ));
                __result_obj__0 = (struct sBlock* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 2148, 1799);
        come_call_finalizer(sBlock_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2148, 1800);
        neo_current_frame = fr.prev;
        come_call_finalizer(sBlock_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2148, 1801);
        return __result_obj__0;
        come_call_finalizer(sBlock_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 2151, 1802);
    }
    if(position<0) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(it!=((void*)0)) {
        if(position==i) {
                        __result_obj__0 = (struct sBlock* )come_increment_ref_count(it->item, "/usr/local/include/neo-c.h", 2159, 1803);
            neo_current_frame = fr.prev;
            come_call_finalizer(sBlock_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2159, 1804);
            return __result_obj__0;
        }
        it=it->next;
        i++;
    }
    memset(&default_value_192,0,sizeof(struct sBlock* ));
        __result_obj__0 = (struct sBlock* )come_increment_ref_count(default_value_192, "/usr/local/include/neo-c.h", 2167, 1805);
    come_call_finalizer(sBlock_finalize, default_value_192, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2167, 1806);
    neo_current_frame = fr.prev;
    come_call_finalizer(sBlock_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2167, 1807);
    return __result_obj__0;
}

static struct sBlock*  list$1sBlock$ph_operator_load_element(struct list$1sBlock$ph* self, int position)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sBlock$ph_operator_load_element"; neo_current_frame = &fr;
    struct sBlock*  default_value  ;
    struct sBlock*  __result_obj__0  ;
    struct list_item$1sBlock$ph* it;
    int i;
    struct sBlock*  default_value_193  ;
    if(self==((void*)0)) {
        memset(&default_value,0,sizeof(struct sBlock* ));
                __result_obj__0 = (struct sBlock* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 2148, 1808);
        come_call_finalizer(sBlock_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2148, 1809);
        neo_current_frame = fr.prev;
        come_call_finalizer(sBlock_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2148, 1810);
        return __result_obj__0;
        come_call_finalizer(sBlock_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 2151, 1811);
    }
    if(position<0) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(it!=((void*)0)) {
        if(position==i) {
                        __result_obj__0 = (struct sBlock* )come_increment_ref_count(it->item, "/usr/local/include/neo-c.h", 2159, 1812);
            neo_current_frame = fr.prev;
            come_call_finalizer(sBlock_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2159, 1813);
            return __result_obj__0;
        }
        it=it->next;
        i++;
    }
    memset(&default_value_193,0,sizeof(struct sBlock* ));
        __result_obj__0 = (struct sBlock* )come_increment_ref_count(default_value_193, "/usr/local/include/neo-c.h", 2167, 1814);
    come_call_finalizer(sBlock_finalize, default_value_193, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2167, 1815);
    neo_current_frame = fr.prev;
    come_call_finalizer(sBlock_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2167, 1816);
    return __result_obj__0;
}

struct sLambdaCall* sLambdaCall_initialize(struct sLambdaCall* self, struct sNode* node, struct list$1tuple2$2char$phsNode$ph$ph* params, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sLambdaCall_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj156;
    struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj157;
    struct sLambdaCall* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sLambdaCall*)come_increment_ref_count(self, "08call.nc", 1930, 1822),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "08call.nc}", 1930, 1823);
    __dec_obj156=self->node,
    self->node=(struct sNode*)come_increment_ref_count(node, "08call.nc", 1932, 1825);
    (__dec_obj156 ? __dec_obj156 = come_decrement_ref_count(__dec_obj156, ((struct sNode*)__dec_obj156)->finalize, ((struct sNode*)__dec_obj156)->_protocol_obj, 0,0, (void*)0, "08call.nc", 1932, 1824) :0);
    __right_value0 = (void*)0;
    __dec_obj157=self->params,
    self->params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_clone(params), "08call.nc", 1933, 1827);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph_finalize, __dec_obj157,(void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc", 1933, 1826);
        __result_obj__0 = (struct sLambdaCall*)come_increment_ref_count(self, "08call.nc", 1936, 1828);
    come_call_finalizer(sLambdaCall_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "08call.nc}", 1936, 1832);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "08call.nc", 1936, 1833):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sLambdaCall_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "08call.nc}", 1936, 1834);
    return __result_obj__0;
}

char*  sLambdaCall_kind(struct sLambdaCall* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sLambdaCall_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sLambdaCall"))), "08call.nc", 1938, 1835);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "08call.nc", 1938, 1836));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "08call.nc", 1938, 1837));
    return __result_obj__0;
}

_Bool sLambdaCall_compile(struct sLambdaCall* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sLambdaCall_compile"; neo_current_frame = &fr;
    struct sNode* node;
    struct list$1tuple2$2char$phsNode$ph$ph* params;
    _Bool Value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE*  come_value  ;
    struct sType*  lambda_type  ;
    void* __right_value1 = (void*)0;
    struct list$1CVALUE$ph* come_params;
    int i;
    struct list$1tuple2$2char$phsNode$ph$ph* _o2_saved_26;
    struct tuple2$2char$phsNode$ph* it;
    struct tuple2$2char$phsNode$ph* multiple_assign_var13
;    char*  label  =0;
    struct sNode* node_194=0;
    _Bool Value_195;
    struct CVALUE*  come_value_196  ;
    struct buffer*  buf  ;
    int j;
    struct list$1CVALUE$ph* _o2_saved_27;
    struct CVALUE*  it_197  ;
    struct CVALUE*  come_value2  ;
    char*  __dec_obj158  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj159  ;
    struct sType*  result_type  ;
    struct list$1CVALUE$ph* come_params_198;
    int i_199;
    struct list$1tuple2$2char$phsNode$ph$ph* _o2_saved_28;
    struct tuple2$2char$phsNode$ph* it_200;
    struct tuple2$2char$phsNode$ph* multiple_assign_var14
;    char*  label_201  =0;
    struct sNode* node_202=0;
    _Bool Value_203;
    struct CVALUE*  come_value_204  ;
    struct sType*  type_  ;
    struct sType*  __dec_obj160  ;
    _Bool _conditional_value_X0;
    _Bool _conditional_value_X1;
    struct buffer*  buf_205  ;
    int j_206;
    struct list$1CVALUE$ph* _o2_saved_29;
    struct CVALUE*  it_207  ;
    struct CVALUE*  come_value2_208  ;
    char*  __dec_obj161  ;
    struct sType*  __dec_obj162  ;
    node=(struct sNode*)come_increment_ref_count(self->node, "08call.nc", 1943, 1838);
    params=self->params;
    Value=node_compile(node,info);
    if(!Value) {
                __result_obj__0 = (_Bool)0;
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "08call.nc", 1947, 1839):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "08call.nc", 1950, 1840);
    lambda_type=come_value->type;
    if(lambda_type->mResultType==((void*)0)) {
        printf("no type check lambda type\n");
        __right_value0 = (void*)0;
        come_params=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "08call.nc", 1956, 1841, "struct list$1CVALUE$ph*"), "08call.nc", 1956, 1842)), "08call.nc", 1956, 1843);
        i=0;
        for(_o2_saved_26=params,it=list$1tuple2$2char$phsNode$ph$ph_begin(_o2_saved_26)        ;!list$1tuple2$2char$phsNode$ph$ph_end(_o2_saved_26);it=list$1tuple2$2char$phsNode$ph$ph_next(_o2_saved_26)){
            multiple_assign_var13=it;
            label=(char* )come_increment_ref_count(multiple_assign_var13->v1, "08call.nc", 1959, 1844);
            node_194=(struct sNode*)come_increment_ref_count(multiple_assign_var13->v2, "08call.nc", 1959, 1845);
            Value_195=node_compile(node_194,info);
            if(!Value_195) {
                                __result_obj__0 = (_Bool)0;
                (label = come_decrement_ref_count(label, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 1962, 1846));
                ((node_194) ? node_194 = come_decrement_ref_count(node_194, ((struct sNode*)node_194)->finalize, ((struct sNode*)node_194)->_protocol_obj, 0, 0,(void*)0, "08call.nc", 1962, 1847):(void*)0);
                come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1962, 1848);
                ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "08call.nc", 1962, 1849):(void*)0);
                come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1962, 1850);
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
            __right_value0 = (void*)0;
            come_value_196=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "08call.nc", 1965, 1851);
            list$1CVALUE$ph_push_back(come_params,(struct CVALUE* )come_increment_ref_count(come_value_196, "08call.nc", 1967, 1852));
            i++;
            (label = come_decrement_ref_count(label, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 1972, 1853));
            ((node_194) ? node_194 = come_decrement_ref_count(node_194, ((struct sNode*)node_194)->finalize, ((struct sNode*)node_194)->_protocol_obj, 0, 0,(void*)0, "08call.nc", 1972, 1854):(void*)0);
            come_call_finalizer(CVALUE_finalize, come_value_196, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 1972, 1855);
        }
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "08call.nc", 1972, 1856, "struct buffer* "), "08call.nc", 1972, 1857)), "08call.nc", 1972, 1858);
        buffer_append_str(buf,"(");
        buffer_append_str(buf,come_value->c_value);
        buffer_append_str(buf,")");
        buffer_append_str(buf,"(");
        j=0;
        for(_o2_saved_27=(struct list$1CVALUE$ph*)come_increment_ref_count(come_params, "08call.nc", 1980, 1859),it_197=list$1CVALUE$ph_begin(_o2_saved_27)        ;!list$1CVALUE$ph_end(_o2_saved_27);it_197=list$1CVALUE$ph_next(_o2_saved_27)){
            buffer_append_str(buf,it_197->c_value);
            if(j!=list$1CVALUE$ph_length(come_params)-1) {
                buffer_append_str(buf,",");
            }
            j++;
        }
        buffer_append_str(buf,")");
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        come_value2=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "08call.nc", 1991, 1860, "struct CVALUE* "), "08call.nc", 1991, 1861)), "08call.nc", 1991, 1862);
        __right_value0 = (void*)0;
        __dec_obj158=come_value2->c_value,
        come_value2->c_value=(char* )come_increment_ref_count(buffer_to_string(buf), "08call.nc", 1992, 1864);
        __dec_obj158 = come_decrement_ref_count(__dec_obj158, (void*)0, (void*)0, 0,0, (void*)0, "08call.nc", 1992, 1863);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __dec_obj159=come_value2->type,
        come_value2->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "08call.nc", 1994, 1865, "struct sType* "), "08call.nc", 1994, 1866),(char*)come_increment_ref_count(xsprintf("void"), "08call.nc", 1994, 1867),(_Bool)0,info,(_Bool)0,0), "08call.nc", 1994, 1869);
        come_call_finalizer(sType_finalize, __dec_obj159,(void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc", 1994, 1868);
        come_value2->type->mPointerNum=1;
        if(come_value2->type) {
            come_value2->type->mStatic=(_Bool)0;
        }
        come_value2->var=((void*)0);
        add_come_last_code(info,"%s",come_value2->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value2, "08call.nc", 2003, 1870));
                __result_obj__0 = (_Bool)1;
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 2004, 1871);
        come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 2004, 1872);
        come_call_finalizer(list$1CVALUE$ph$p_finalize, _o2_saved_27, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 2004, 1873);
        come_call_finalizer(CVALUE_finalize, come_value2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 2004, 1874);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "08call.nc", 2004, 1875):(void*)0);
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 2004, 1876);
        neo_current_frame = fr.prev;
        return __result_obj__0;
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 2007, 1877);
        come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 2007, 1878);
        come_call_finalizer(list$1CVALUE$ph$p_finalize, _o2_saved_27, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 2007, 1879);
        come_call_finalizer(CVALUE_finalize, come_value2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 2007, 1880);
    }
    __right_value0 = (void*)0;
    result_type=(struct sType* )come_increment_ref_count(sType_clone(lambda_type->mResultType), "08call.nc", 2007, 1881);
    result_type->mStatic=(_Bool)0;
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    come_params_198=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "08call.nc", 2010, 1882, "struct list$1CVALUE$ph*"), "08call.nc", 2010, 1883)), "08call.nc", 2010, 1884);
    if(list$1sType$ph_length(lambda_type->mParamTypes)!=list$1tuple2$2char$phsNode$ph$ph_length(params)&&!lambda_type->mVarArgs) {
        err_msg(info,"invalid param number. function param number is %d. caller param number is %d",list$1sType$ph_length(lambda_type->mParamTypes),list$1tuple2$2char$phsNode$ph$ph_length(params));
                __result_obj__0 = (_Bool)1;
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "08call.nc", 2014, 1885):(void*)0);
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 2014, 1886);
        come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 2014, 1887);
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_198, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 2014, 1888);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    i_199=0;
    for(_o2_saved_28=params,it_200=list$1tuple2$2char$phsNode$ph$ph_begin(_o2_saved_28)    ;!list$1tuple2$2char$phsNode$ph$ph_end(_o2_saved_28);it_200=list$1tuple2$2char$phsNode$ph$ph_next(_o2_saved_28)){
        multiple_assign_var14=it_200;
        label_201=(char* )come_increment_ref_count(multiple_assign_var14->v1, "08call.nc", 2019, 1889);
        node_202=(struct sNode*)come_increment_ref_count(multiple_assign_var14->v2, "08call.nc", 2019, 1890);
        Value_203=node_compile(node_202,info);
        if(!Value_203) {
                        __result_obj__0 = (_Bool)0;
            (label_201 = come_decrement_ref_count(label_201, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 2022, 1891));
            ((node_202) ? node_202 = come_decrement_ref_count(node_202, ((struct sNode*)node_202)->finalize, ((struct sNode*)node_202)->_protocol_obj, 0, 0,(void*)0, "08call.nc", 2022, 1892):(void*)0);
            ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "08call.nc", 2022, 1893):(void*)0);
            come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 2022, 1894);
            come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 2022, 1895);
            come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_198, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 2022, 1896);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        __right_value0 = (void*)0;
        come_value_204=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "08call.nc", 2025, 1897);
        __right_value0 = (void*)0;
        type_=(struct sType* )come_increment_ref_count(solve_generics(come_value_204->type,info->generics_type,info), "08call.nc", 2027, 1898);
        __right_value0 = (void*)0;
        __dec_obj160=come_value_204->type,
        come_value_204->type=(struct sType* )come_increment_ref_count(solve_method_generics(type_,info), "08call.nc", 2028, 1900);
        come_call_finalizer(sType_finalize, __dec_obj160,(void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc", 2028, 1899);
        if(__right_value0 = (void*)0,
({(_conditional_value_X0=(lambda_type->mVarArgs&&((struct sType* )(__right_value0=list$1sType$ph_operator_load_element(lambda_type->mParamTypes,i_199)))==((void*)0)));        come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "08call.nc}", 2029, 1901);
_conditional_value_X0;})) {
        }
        else {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            check_assign_type(((char*)(__right_value1=xsprintf("calling param #\%s",((char* )(__right_value0=int_to_string(i_199)))))),((struct sType* )(__right_value2=list$1sType$ph_operator_load_element(lambda_type->mParamTypes,i_199))),come_value_204->type,come_value_204,info);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "08call.nc", 2032, 1902));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "08call.nc", 2032, 1903));
            come_call_finalizer(sType_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0, "08call.nc}", 2032, 1904);
            if(__right_value0 = (void*)0,
({(_conditional_value_X1=(((struct sType* )(__right_value0=list$1sType$ph_operator_load_element(lambda_type->mParamTypes,i_199)))->mHeap&&come_value_204->type->mHeap));            come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "08call.nc}", 2033, 1905);
_conditional_value_X1;})) {
                __right_value0 = (void*)0;
                std_move(((struct sType* )(__right_value0=list$1sType$ph_operator_load_element(lambda_type->mParamTypes,i_199))),come_value_204->type,come_value_204,info);
                come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "08call.nc}", 2034, 1906);
            }
        }
        list$1CVALUE$ph_push_back(come_params_198,(struct CVALUE* )come_increment_ref_count(come_value_204, "08call.nc", 2038, 1907));
        i_199++;
        (label_201 = come_decrement_ref_count(label_201, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 2043, 1908));
        ((node_202) ? node_202 = come_decrement_ref_count(node_202, ((struct sNode*)node_202)->finalize, ((struct sNode*)node_202)->_protocol_obj, 0, 0,(void*)0, "08call.nc", 2043, 1909):(void*)0);
        come_call_finalizer(CVALUE_finalize, come_value_204, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 2043, 1910);
        come_call_finalizer(sType_finalize, type_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 2043, 1911);
    }
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    buf_205=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "08call.nc", 2043, 1912, "struct buffer* "), "08call.nc", 2043, 1913)), "08call.nc", 2043, 1914);
    buffer_append_str(buf_205,"(");
    buffer_append_str(buf_205,come_value->c_value);
    buffer_append_str(buf_205,")");
    buffer_append_str(buf_205,"(");
    j_206=0;
    for(_o2_saved_29=(struct list$1CVALUE$ph*)come_increment_ref_count(come_params_198, "08call.nc", 2051, 1915),it_207=list$1CVALUE$ph_begin(_o2_saved_29)    ;!list$1CVALUE$ph_end(_o2_saved_29);it_207=list$1CVALUE$ph_next(_o2_saved_29)){
        buffer_append_str(buf_205,it_207->c_value);
        if(j_206!=list$1CVALUE$ph_length(come_params_198)-1) {
            buffer_append_str(buf_205,",");
        }
        j_206++;
    }
    buffer_append_str(buf_205,")");
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    come_value2_208=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "08call.nc", 2062, 1916, "struct CVALUE* "), "08call.nc", 2062, 1917)), "08call.nc", 2062, 1918);
    __right_value0 = (void*)0;
    __dec_obj161=come_value2_208->c_value,
    come_value2_208->c_value=(char* )come_increment_ref_count(buffer_to_string(buf_205), "08call.nc", 2063, 1920);
    __dec_obj161 = come_decrement_ref_count(__dec_obj161, (void*)0, (void*)0, 0,0, (void*)0, "08call.nc", 2063, 1919);
    if(lambda_type->mResultType->mHeap) {
        append_object_to_right_values(come_value2_208,lambda_type->mResultType,info,(_Bool)0,((void*)0),((void*)0),((void*)0));
    }
    __right_value0 = (void*)0;
    __dec_obj162=come_value2_208->type,
    come_value2_208->type=(struct sType* )come_increment_ref_count(sType_clone(result_type), "08call.nc", 2069, 1922);
    come_call_finalizer(sType_finalize, __dec_obj162,(void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc", 2069, 1921);
    if(come_value2_208->type) {
        come_value2_208->type->mStatic=(_Bool)0;
    }
    come_value2_208->var=((void*)0);
    add_come_last_code(info,"%s",come_value2_208->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value2_208, "08call.nc", 2077, 1923));
        __result_obj__0 = (_Bool)1;
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "08call.nc", 2079, 1924):(void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 2079, 1925);
    come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 2079, 1926);
    come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_198, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 2079, 1927);
    come_call_finalizer(buffer_finalize, buf_205, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 2079, 1928);
    come_call_finalizer(list$1CVALUE$ph$p_finalize, _o2_saved_29, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 2079, 1929);
    come_call_finalizer(CVALUE_finalize, come_value2_208, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 2079, 1930);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sLambdaCall_finalize(struct sLambdaCall* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sLambdaCall_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sLambdaCall_finalize", 2, 1829));
    }
    if(self!=((void*)0)&&self->node!=((void*)0)) {
        ((self->node) ? self->node = come_decrement_ref_count(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0,(void*)0, "sLambdaCall_finalize", 3, 1830):(void*)0);
    }
    if(self!=((void*)0)&&self->params!=((void*)0)) {
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, self->params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sLambdaCall_finalize}", 4, 1831);
    }
        neo_current_frame = fr.prev;
}

struct sVarArgTypeName* sVarArgTypeName_initialize(struct sVarArgTypeName* self, struct sType*  type  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sVarArgTypeName_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sType*  __dec_obj163  ;
    struct sVarArgTypeName* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sVarArgTypeName*)come_increment_ref_count(self, "08call.nc", 2087, 1931),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "08call.nc}", 2087, 1932);
    __right_value0 = (void*)0;
    __dec_obj163=self->type,
    self->type=(struct sType* )come_increment_ref_count(sType_clone(type), "08call.nc", 2089, 1934);
    come_call_finalizer(sType_finalize, __dec_obj163,(void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc", 2089, 1933);
        __result_obj__0 = (struct sVarArgTypeName*)come_increment_ref_count(self, "08call.nc", 2092, 1935);
    come_call_finalizer(sVarArgTypeName_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "08call.nc}", 2092, 1938);
    neo_current_frame = fr.prev;
    come_call_finalizer(sVarArgTypeName_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "08call.nc}", 2092, 1939);
    return __result_obj__0;
}

char*  sVarArgTypeName_kind(struct sVarArgTypeName* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sVarArgTypeName_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sVarArgTypeName"))), "08call.nc", 2094, 1940);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "08call.nc", 2094, 1941));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "08call.nc", 2094, 1942));
    return __result_obj__0;
}

_Bool sVarArgTypeName_compile(struct sVarArgTypeName* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sVarArgTypeName_compile"; neo_current_frame = &fr;
    struct sType*  type  ;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj164  ;
    struct sType*  __dec_obj165  ;
    _Bool __result_obj__0;
    type=(struct sType* )come_increment_ref_count(self->type, "08call.nc", 2099, 1943);
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "08call.nc", 2101, 1944, "struct CVALUE* "), "08call.nc", 2101, 1945)), "08call.nc", 2101, 1946);
    __right_value0 = (void*)0;
    __dec_obj164=come_value->c_value,
    come_value->c_value=(char* )come_increment_ref_count(make_type_name_string(type,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0), "08call.nc", 2103, 1948);
    __dec_obj164 = come_decrement_ref_count(__dec_obj164, (void*)0, (void*)0, 0,0, (void*)0, "08call.nc", 2103, 1947);
    __dec_obj165=come_value->type,
    come_value->type=(struct sType* )come_increment_ref_count(type, "08call.nc", 2104, 1950);
    come_call_finalizer(sType_finalize, __dec_obj165,(void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc", 2104, 1949);
    come_value->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "08call.nc", 2107, 1951));
        __result_obj__0 = (_Bool)1;
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 2109, 1952);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 2109, 1953);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sVarArgTypeName_finalize(struct sVarArgTypeName* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sVarArgTypeName_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sVarArgTypeName_finalize", 2, 1936));
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sVarArgTypeName_finalize}", 3, 1937);
    }
        neo_current_frame = fr.prev;
}

struct sInnerAttribute* sInnerAttribute_initialize(struct sInnerAttribute* self, char*  attr  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sInnerAttribute_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __dec_obj166  ;
    struct sInnerAttribute* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sInnerAttribute*)come_increment_ref_count(self, "08call.nc", 2117, 1954),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "08call.nc}", 2117, 1955);
    __dec_obj166=self->attr,
    self->attr=(char* )come_increment_ref_count(attr, "08call.nc", 2119, 1957);
    __dec_obj166 = come_decrement_ref_count(__dec_obj166, (void*)0, (void*)0, 0,0, (void*)0, "08call.nc", 2119, 1956);
        __result_obj__0 = (struct sInnerAttribute*)come_increment_ref_count(self, "08call.nc", 2122, 1958);
    come_call_finalizer(sInnerAttribute_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "08call.nc}", 2122, 1961);
    (attr = come_decrement_ref_count(attr, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 2122, 1962));
    neo_current_frame = fr.prev;
    come_call_finalizer(sInnerAttribute_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "08call.nc}", 2122, 1963);
    return __result_obj__0;
}

char*  sInnerAttribute_kind(struct sInnerAttribute* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sInnerAttribute_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sInnerAttribute"))), "08call.nc", 2124, 1964);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "08call.nc", 2124, 1965));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "08call.nc", 2124, 1966));
    return __result_obj__0;
}

_Bool sInnerAttribute_compile(struct sInnerAttribute* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sInnerAttribute_compile"; neo_current_frame = &fr;
    char*  attr  ;
    _Bool __result_obj__0;
    attr=(char* )come_increment_ref_count(self->attr, "08call.nc", 2129, 1967);
    add_come_code(info,"__attribute__%s",attr);
        __result_obj__0 = (_Bool)1;
    (attr = come_decrement_ref_count(attr, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 2133, 1968));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sInnerAttribute_finalize(struct sInnerAttribute* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sInnerAttribute_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sInnerAttribute_finalize", 2, 1959));
    }
    if(self!=((void*)0)&&self->attr!=((void*)0)) {
        (self->attr = come_decrement_ref_count(self->attr, (void*)0, (void*)0, 0, 0, (void*)0, "sInnerAttribute_finalize", 3, 1960));
    }
        neo_current_frame = fr.prev;
}

struct sNode* parse_function_call(char* fun_name, struct sInfo*  info  , _Bool come_)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "parse_function_call"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1sType$ph* method_generics_types;
    struct tuple3$3sType$phchar$ph_Bool$* multiple_assign_var15
;    struct sType*  type  =0;
    char*  name  =0;
    _Bool err=0;
    struct list$1tuple2$2char$phsNode$ph$ph* params;
    _Bool _va_arg;
    char* p;
    int sline;
    _Bool err_flag;
    char*  label  ;
    char*  __dec_obj167  ;
    char*  __dec_obj168  ;
    _Bool no_comma;
    _Bool in_fun_param;
    _Bool type_name_exp;
    struct sNode* node;
    struct sNode* __dec_obj169;
    struct buffer*  method_block  ;
    int method_block_sline;
    char* head;
    char* tail;
    struct buffer*  __dec_obj175  ;
    int len;
    char* mem;
    struct sNode* _inf_value4;
    struct sFunCallNode* _inf_obj_value4;
    void* __right_value2 = (void*)0;
    struct sNode* node_211;
    struct sNode* __dec_obj181;
    struct sNode* __result_obj__0;
    method_generics_types=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "08call.nc", 2139, 1969, "struct list$1sType$ph*"), "08call.nc", 2139, 1970)), "08call.nc", 2139, 1971);
    if(*info->p->p==60) {
        info->p->p++;
        skip_spaces_and_lf(info);
        while((_Bool)1) {
            if(*info->p->p==0) {
                err_msg(info,"unexpected source end");
                exit(2);
            }
            else if(*info->p->p==62) {
                info->p->p++;
                skip_spaces_and_lf(info);
                break;
            }
            else if(*info->p->p==44) {
                info->p->p++;
                skip_spaces_and_lf(info);
            }
            else {
                __right_value0 = (void*)0;
                multiple_assign_var15=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                type=(struct sType* )come_increment_ref_count(multiple_assign_var15->v1, "08call.nc", 2160, 1972);
                name=(char* )come_increment_ref_count(multiple_assign_var15->v2, "08call.nc", 2160, 1973);
                err=multiple_assign_var15->v3;
                come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "08call.nc}", 2160, 1976);
                if(!err) {
                    err_msg(info,"invalid method generics paramtor type");
                    exit(2);
                }
                __right_value0 = (void*)0;
                list$1sType$ph_push_back(method_generics_types,(struct sType* )come_increment_ref_count(sType_clone(type), "08call.nc", 2167, 1977));
                come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 2169, 1978);
                (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 2169, 1979));
            }
        }
    }
    expected_next_character(40,info);
    skip_spaces_and_lf(info);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "08call.nc", 2176, 1980, "struct list$1tuple2$2char$phsNode$ph$ph*"), "08call.nc", 2176, 1981)), "08call.nc", 2176, 1982);
    _va_arg=info->va_arg;
    if(charp_operator_equals(fun_name,"__builtin_va_arg")) {
        info->va_arg=(_Bool)1;
    }
    while((_Bool)1) {
        if(*info->p->p==41) {
            info->p->p++;
            skip_spaces_and_lf(info);
            break;
        }
        p=info->p->p;
        sline=info->sline;
        err_flag=(_Bool)0;
        __right_value0 = (void*)0;
        label=(char* )come_increment_ref_count(__builtin_string(""), "08call.nc", 2194, 1983);
        if(xisalpha(*info->p->p)||*info->p->p==95) {
            __right_value0 = (void*)0;
            __dec_obj167=label,
            label=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "08call.nc", 2196, 1985);
            __dec_obj167 = come_decrement_ref_count(__dec_obj167, (void*)0, (void*)0, 0,0, (void*)0, "08call.nc", 2196, 1984);
            err_flag=(_Bool)1;
        }
        if(err_flag==(_Bool)1&&*info->p->p==58) {
            info->p->p++;
            skip_spaces_and_lf(info);
        }
        else {
            __dec_obj168=label,
            label=((void*)0);
            __dec_obj168 = come_decrement_ref_count(__dec_obj168, (void*)0, (void*)0, 0,0, (void*)0, "08call.nc", 2205, 1986);
            info->p->p=p;
            info->sline=sline;
        }
        no_comma=info->no_comma;
        info->no_comma=(_Bool)1;
        in_fun_param=info->in_fun_param;
        info->in_fun_param=(_Bool)1;
        type_name_exp=(_Bool)0;
        if(charp_operator_equals(fun_name,"__builtin_types_compatible_p")) {
            type_name_exp=(_Bool)1;
        }
        __right_value0 = (void*)0;
        node=(struct sNode*)come_increment_ref_count(expression_v13(info,type_name_exp), "08call.nc", 2223, 1987);
        __right_value0 = (void*)0;
        __dec_obj169=node,
        node=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node, "08call.nc", 2225, 1988),info), "08call.nc", 2225, 1990);
        (__dec_obj169 ? __dec_obj169 = come_decrement_ref_count(__dec_obj169, ((struct sNode*)__dec_obj169)->finalize, ((struct sNode*)__dec_obj169)->_protocol_obj, 0,0, (void*)0, "08call.nc", 2225, 1989) :0);
        info->no_comma=no_comma;
        info->in_fun_param=in_fun_param;
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        list$1tuple2$2char$phsNode$ph$ph_push_back(params,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "08call.nc", 2230, 2005, "struct tuple2$2char$phsNode$ph"), "08call.nc", 2230, 2015),(char* )come_increment_ref_count(label, "08call.nc", 2230, 2016),(struct sNode*)come_increment_ref_count(node, "08call.nc", 2230, 2017)), "08call.nc", 2230, 2018));
        skip_spaces_and_lf(info);
        if(*info->p->p==44) {
            info->p->p++;
            skip_spaces_and_lf(info);
        }
        else if(*info->p->p==41) {
            info->p->p++;
            skip_spaces_and_lf(info);
            (label = come_decrement_ref_count(label, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 2242, 2019));
            ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "08call.nc", 2242, 2020):(void*)0);
            break;
        }
        (label = come_decrement_ref_count(label, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 2246, 2021));
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "08call.nc", 2246, 2022):(void*)0);
    }
    info->va_arg=_va_arg;
    skip_spaces_and_lf(info);
    method_block=((void*)0);
    method_block_sline=0;
    if(*info->p->p==123) {
        head=info->p->p;
        method_block_sline=info->sline;
        __right_value0 = (void*)0;
        ((char* )(__right_value0=skip_block(info,(_Bool)0)));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "08call.nc", 2256, 2023));
        tail=info->p->p;
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __dec_obj175=method_block,
        method_block=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "08call.nc", 2260, 2024, "struct buffer* "), "08call.nc", 2260, 2025)), "08call.nc", 2260, 2027);
        come_call_finalizer(buffer_finalize, __dec_obj175,(void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc", 2260, 2026);
        len=tail-head;
        __right_value0 = (void*)0;
        mem=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len+1)), "08call.nc", 2263, 2028, "char*"), "08call.nc", 2263, 2029);
        memcpy(mem,head,len);
        mem[len]=0;
        buffer_append_str(method_block,mem);
        buffer_append_str(method_block,"\n");
        (mem = come_decrement_ref_count(mem, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 2271, 2030));
    }
    skip_spaces_and_lf(info);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08call.nc", 2273, 2035, "struct sNode");
    _inf_obj_value4=(struct sFunCallNode*)come_increment_ref_count(((struct sFunCallNode*)(__right_value1=sFunCallNode_initialize((struct sFunCallNode* )come_increment_ref_count((struct sFunCallNode *)come_calloc(1, sizeof(struct sFunCallNode )*(1), "08call.nc", 2273, 2031, "struct sFunCallNode* "), "08call.nc", 2273, 2032),fun_name,params,(struct list$1sType$ph*)come_increment_ref_count(method_generics_types, "08call.nc", 2273, 2033),(struct buffer* )come_increment_ref_count(method_block, "08call.nc", 2273, 2034),method_block_sline,info))), "08call.nc", 2273, 2036);
    _inf_value4->_protocol_obj=_inf_obj_value4;
    _inf_value4->finalize=(void*)sFunCallNode_finalize;
    _inf_value4->clone=(void*)sFunCallNode_clone;
    _inf_value4->compile=(void*)sFunCallNode_compile;
    _inf_value4->sline=(void*)sNodeBase_sline;
    _inf_value4->sline_real=(void*)sNodeBase_sline_real;
    _inf_value4->sname=(void*)sNodeBase_sname;
    _inf_value4->terminated=(void*)sFunCallNode_terminated;
    _inf_value4->kind=(void*)sFunCallNode_kind;
    _inf_value4->left_value=(void*)sNodeBase_left_value;
    node_211=(struct sNode*)come_increment_ref_count(_inf_value4, "08call.nc", 2273, 2052);
    come_call_finalizer(sFunCallNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "08call.nc}", 2273, 2053);
    __right_value0 = (void*)0;
    __dec_obj181=node_211,
    node_211=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_211, "08call.nc", 2275, 2054),info), "08call.nc", 2275, 2056);
    (__dec_obj181 ? __dec_obj181 = come_decrement_ref_count(__dec_obj181, ((struct sNode*)__dec_obj181)->finalize, ((struct sNode*)__dec_obj181)->_protocol_obj, 0,0, (void*)0, "08call.nc", 2275, 2055) :0);
    skip_spaces_and_lf(info);
        __result_obj__0 = (struct sNode*)come_increment_ref_count(node_211, "08call.nc", 2279, 2057);
    come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 2279, 2058);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 2279, 2059);
    come_call_finalizer(buffer_finalize, method_block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 2279, 2060);
    ((node_211) ? node_211 = come_decrement_ref_count(node_211, ((struct sNode*)node_211)->finalize, ((struct sNode*)node_211)->_protocol_obj, 0, 1,(void*)0, "08call.nc", 2279, 2061):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "08call.nc", 2279, 2062):(void*)0);
    return __result_obj__0;
}

static void tuple3$3sType$phchar$ph_Bool$$p_finalize(struct tuple3$3sType$phchar$ph_Bool$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple3$3sType$phchar$ph_Bool$$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0, "tuple3$3sType$phchar$ph_Bool$$p_finalize}", 2, 1974);
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0, (void*)0, "tuple3$3sType$phchar$ph_Bool$$p_finalize", 3, 1975));
    }
                    neo_current_frame = fr.prev;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_push_back(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsNode$ph$ph_push_back"; neo_current_frame = &fr;
    struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1tuple2$2char$phsNode$ph$ph* litem;
    struct tuple2$2char$phsNode$ph* __dec_obj170;
    struct list_item$1tuple2$2char$phsNode$ph$ph* litem_209;
    struct tuple2$2char$phsNode$ph* __dec_obj171;
    struct list_item$1tuple2$2char$phsNode$ph$ph* litem_210;
    struct tuple2$2char$phsNode$ph* __dec_obj172;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1613, 1991);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/neo-c.h", 1617, 1992, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))), "/usr/local/include/neo-c.h", 1617, 1993);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj170=litem->item,
        litem->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1621, 1995);
        come_call_finalizer(tuple2$2char$phsNode$ph_finalize, __dec_obj170,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1621, 1994);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_209=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/neo-c.h", 1627, 1996, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))), "/usr/local/include/neo-c.h", 1627, 1997);
        litem_209->prev=self->head;
        litem_209->next=((void*)0);
        __dec_obj171=litem_209->item,
        litem_209->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1631, 1999);
        come_call_finalizer(tuple2$2char$phsNode$ph_finalize, __dec_obj171,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1631, 1998);
        self->tail=litem_209;
        self->head->next=litem_209;
    }
    else {
        __right_value0 = (void*)0;
        litem_210=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/neo-c.h", 1637, 2000, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))), "/usr/local/include/neo-c.h", 1637, 2001);
        litem_210->prev=self->tail;
        litem_210->next=((void*)0);
        __dec_obj172=litem_210->item,
        litem_210->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1641, 2003);
        come_call_finalizer(tuple2$2char$phsNode$ph_finalize, __dec_obj172,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1641, 2002);
        self->tail->next=litem_210;
        self->tail=litem_210;
    }
    self->len++;
        __result_obj__0 = self;
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1649, 2004);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_initialize(struct tuple2$2char$phsNode$ph* self, char*  v1  , struct sNode* v2)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2char$phsNode$ph_initialize"; neo_current_frame = &fr;
    char*  __dec_obj173  ;
    struct sNode* __dec_obj174;
    struct tuple2$2char$phsNode$ph* __result_obj__0;
    __dec_obj173=self->v1,
    self->v1=(char* )come_increment_ref_count(v1, "/usr/local/include/neo-c.h", 3911, 2007);
    __dec_obj173 = come_decrement_ref_count(__dec_obj173, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 3911, 2006);
    __dec_obj174=self->v2,
    self->v2=(struct sNode*)come_increment_ref_count(v2, "/usr/local/include/neo-c.h", 3912, 2009);
    (__dec_obj174 ? __dec_obj174 = come_decrement_ref_count(__dec_obj174, ((struct sNode*)__dec_obj174)->finalize, ((struct sNode*)__dec_obj174)->_protocol_obj, 0,0, (void*)0, "/usr/local/include/neo-c.h", 3912, 2008) :0);
        __result_obj__0 = (struct tuple2$2char$phsNode$ph*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 3914, 2010);
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3914, 2011);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3914, 2012));
    ((v2) ? v2 = come_decrement_ref_count(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 0,(void*)0, "/usr/local/include/neo-c.h", 3914, 2013):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3914, 2014);
    return __result_obj__0;
}

static struct sFunCallNode* sFunCallNode_clone(struct sFunCallNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sFunCallNode_clone"; neo_current_frame = &fr;
    struct sFunCallNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sFunCallNode*  result  ;
    char*  __dec_obj176  ;
    char*  __dec_obj177  ;
    struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj178;
    struct list$1sType$ph* __dec_obj179;
    struct buffer*  __dec_obj180  ;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sFunCallNode* )come_increment_ref_count((struct sFunCallNode *)come_calloc(1, sizeof(struct sFunCallNode )*(1), "sFunCallNode_clone", 5, 2037, "struct sFunCallNode* "), "sFunCallNode_clone", 5, 2038);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj176=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sFunCallNode_clone", 7, 2039, "char* "), "sFunCallNode_clone", 7, 2041);
        __dec_obj176 = come_decrement_ref_count(__dec_obj176, (void*)0, (void*)0, 0,0, (void*)0, "sFunCallNode_clone", 7, 2040);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->fun_name!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj177=result->fun_name,
        result->fun_name=(char* )come_increment_ref_count((char* )come_memdup(self->fun_name, "sFunCallNode_clone", 9, 2042, "char* "), "sFunCallNode_clone", 9, 2044);
        __dec_obj177 = come_decrement_ref_count(__dec_obj177, (void*)0, (void*)0, 0,0, (void*)0, "sFunCallNode_clone", 9, 2043);
    }
    if(self!=((void*)0)&&self->params!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj178=result->params,
        result->params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_clone(self->params), "sFunCallNode_clone", 10, 2046);
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph_finalize, __dec_obj178,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sFunCallNode_clone", 10, 2045);
    }
    if(self!=((void*)0)&&self->method_generics_types!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj179=result->method_generics_types,
        result->method_generics_types=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->method_generics_types), "sFunCallNode_clone", 11, 2048);
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj179,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sFunCallNode_clone", 11, 2047);
    }
    if(self!=((void*)0)&&self->method_block!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj180=result->method_block,
        result->method_block=(struct buffer* )come_increment_ref_count(buffer_clone(self->method_block), "sFunCallNode_clone", 12, 2050);
        come_call_finalizer(buffer_finalize, __dec_obj180,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sFunCallNode_clone", 12, 2049);
    }
    if(self!=((void*)0)) {
        result->method_block_sline=self->method_block_sline;
    }
        __result_obj__0 = result;
    come_call_finalizer(sFunCallNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sFunCallNode_clone}", 14, 2051);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sNode* create_funcall(const char* fun_name, struct list$1tuple2$2char$phsNode$ph$ph* params, struct buffer*  method_block  , int method_block_sline, struct list$1sType$ph* method_generics_types, struct sInfo*  info  , _Bool arrow_)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "create_funcall"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value5;
    struct sFunCallNode* _inf_obj_value5;
    void* __right_value2 = (void*)0;
    struct sNode* node;
    struct sNode* __result_obj__0;
    _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08call.nc", 2284, 2067, "struct sNode");
    _inf_obj_value5=(struct sFunCallNode*)come_increment_ref_count(((struct sFunCallNode*)(__right_value1=sFunCallNode_initialize((struct sFunCallNode* )come_increment_ref_count((struct sFunCallNode *)come_calloc(1, sizeof(struct sFunCallNode )*(1), "08call.nc", 2284, 2063, "struct sFunCallNode* "), "08call.nc", 2284, 2064),(char*)fun_name,params,(struct list$1sType$ph*)come_increment_ref_count(method_generics_types, "08call.nc", 2284, 2065),(struct buffer* )come_increment_ref_count(method_block, "08call.nc", 2284, 2066),method_block_sline,info))), "08call.nc", 2284, 2068);
    _inf_value5->_protocol_obj=_inf_obj_value5;
    _inf_value5->finalize=(void*)sFunCallNode_finalize;
    _inf_value5->clone=(void*)sFunCallNode_clone;
    _inf_value5->compile=(void*)sFunCallNode_compile;
    _inf_value5->sline=(void*)sNodeBase_sline;
    _inf_value5->sline_real=(void*)sNodeBase_sline_real;
    _inf_value5->sname=(void*)sNodeBase_sname;
    _inf_value5->terminated=(void*)sFunCallNode_terminated;
    _inf_value5->kind=(void*)sFunCallNode_kind;
    _inf_value5->left_value=(void*)sNodeBase_left_value;
    node=(struct sNode*)come_increment_ref_count(_inf_value5, "08call.nc", 2284, 2069);
    come_call_finalizer(sFunCallNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "08call.nc}", 2284, 2070);
        __result_obj__0 = (struct sNode*)come_increment_ref_count(node, "08call.nc", 2285, 2071);
    come_call_finalizer(buffer_finalize, method_block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 2285, 2072);
    come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 2285, 2073);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1,(void*)0, "08call.nc", 2285, 2074):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "08call.nc", 2285, 2075):(void*)0);
    return __result_obj__0;
}

struct sNode* expression_node_v1(struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "expression_node_v1"; neo_current_frame = &fr;
    struct sNode* __result_obj__0;
    skip_spaces_and_lf(info);
    err_msg(info,"invalid character(1)(%d)(%c)",*info->p->p,*info->p->p);
    exit(3);
        __result_obj__0 = (struct sNode*)come_increment_ref_count((struct sNode*)((void*)0), "08call.nc", 2295, 2076);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "08call.nc", 2295, 2077):(void*)0);
    return __result_obj__0;
}

char*  parse_inner_attribute(struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "parse_inner_attribute"; neo_current_frame = &fr;
    char* head;
    _Bool in_dquort;
    int brace_num;
    char* tail;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer*  buf  ;
    char*  __result_obj__0  ;
    head=info->p->p;
    if(*info->p->p==40) {
        in_dquort=(_Bool)0;
        brace_num=0;
        while(*info->p->p) {
            if(*info->p->p==34) {
                info->p->p++;
                in_dquort=!in_dquort;
            }
            else if(in_dquort) {
                info->p->p++;
            }
            else if(*info->p->p==40) {
                info->p->p++;
                brace_num++;
            }
            else if(*info->p->p==41) {
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
    tail=info->p->p;
    buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "08call.nc", 2335, 2078, "struct buffer* "), "08call.nc", 2335, 2079)), "08call.nc", 2335, 2080);
    buffer_append(buf,head,tail-head);
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=buffer_to_string(buf))), "08call.nc", 2339, 2081);
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 2339, 2082);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "08call.nc", 2339, 2083));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "08call.nc", 2339, 2084));
    return __result_obj__0;
}

struct sNode* expression_node_v98(struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "expression_node_v98"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value6;
    struct sReturnNode* _inf_obj_value6;
    void* __right_value2 = (void*)0;
    struct sNode* __result_obj__0;
    struct sNode* value;
    struct sNode* __dec_obj182;
    struct sNode* _inf_value7;
    struct sReturnNode* _inf_obj_value7;
    int nest;
    struct sNode* node;
    struct sNode* node_212;
    struct sNode* node_213;
    char* head;
    int head_sline;
    int sline_real;
    char*  buf  ;
    _Bool is_type_name_;
    _Bool is_special_word;
    _Bool is_portable_symbol;
    _Bool define_function_pointer_flag;
    _Bool lambda_flag;
    char*  word2  ;
    _Bool fun_name_with_type_name;
    _Bool no_output_come_code;
    _Bool flag;
    char*  word2_214  ;
    _Bool call_method_generics_fun_call;
    char*  __dec_obj183  ;
    void* __right_value3 = (void*)0;
    void* __right_value4 = (void*)0;
    void* __right_value5 = (void*)0;
    _Bool _conditional_value_X0;
    int nest_215;
    _Bool inline_asm;
    char*  __dec_obj184  ;
    char*  __dec_obj185  ;
    char*  __dec_obj186  ;
    struct sNode* node_216;
    _Bool no_comma;
    struct sNode* exp;
    struct sNode* exp2;
    char*  attr  ;
    struct sNode* _inf_value8;
    struct sInnerAttribute* _inf_obj_value8;
    char*  block_text  ;
    char*  contents  ;
    struct sNode* _inf_value9;
    struct sCSourceNode* _inf_obj_value9;
    struct sNode* node_217;
    struct sNode* node_218;
    struct sNode* node_219;
    struct buffer*  come_block  ;
    int come_block_sline;
    char* head_220;
    char* tail;
    struct buffer*  __dec_obj191  ;
    int len;
    char* mem;
    char* head_221;
    _Bool no_output_come_code_222;
    char* tail_223;
    struct buffer*  __dec_obj192  ;
    int len_224;
    char* mem_225;
    struct sNode* _inf_value10;
    struct sComeCallNode* _inf_obj_value10;
    struct sNode* node_226;
    struct buffer*  come_block_227  ;
    int come_block_sline_228;
    struct sNode* node_229;
    struct sNode* _inf_value11;
    struct sComeJoinNode* _inf_obj_value11;
    int time_out;
    struct list$1sNode$ph* vars;
    struct list$1sBlock$ph* blocks;
    struct sBlock*  else_block  ;
    struct sBlock*  __dec_obj197  ;
    struct sNode* var_name;
    struct sBlock*  block  ;
    struct sNode* _inf_value12;
    struct sComePollNode* _inf_obj_value12;
    struct sNode* _inf_value13;
    struct sFuncNode* _inf_obj_value13;
    struct sNode* _inf_value14;
    struct sLineNode* _inf_obj_value14;
    struct sNode* _inf_value15;
    struct sSNameNode* _inf_obj_value15;
    struct sNode* _inf_value16;
    struct sCallerFuncNode* _inf_obj_value16;
    struct sNode* _inf_value17;
    struct sCallerLineNode* _inf_obj_value17;
    struct sNode* _inf_value18;
    struct sCallerSNameNode* _inf_obj_value18;
    struct tuple3$3sType$phchar$ph_Bool$* multiple_assign_var16
;    struct sType*  type  =0;
    char*  name  =0;
    _Bool err=0;
    struct sNode* _inf_value19;
    struct sVarArgTypeName* _inf_obj_value19;
    struct sNode* node_239;
    _Bool volatile_;
    struct buffer*  buf2  ;
    char*  word  ;
    struct list$1sNode$ph* exps;
    _Bool dquort;
    int i;
    struct sNode* exp_240;
    _Bool Value;
    struct CVALUE*  come_value  ;
    int i_241;
    int i_242;
    int i_243;
    struct sNode* _inf_value20;
    struct sInlineAssembler* _inf_obj_value20;
    struct tuple3$3sType$phchar$ph_Bool$* multiple_assign_var17
;    struct sType*  type_244  =0;
    char*  name_245  =0;
    _Bool err_246=0;
    char*  base_fun_name  ;
    char*  fun_name  ;
    struct sNode* node_247;
    struct buffer*  fun_name_248  ;
    char*  buf2_249  ;
    struct sNode* node_250;
    struct sNode* node_251;
    struct sNode* node_252;
    struct sNode* node_253;
    struct sNode* node_254;
    skip_spaces_and_lf(info);
    if(parsecmp("return",info)) {
        info->p->p+=strlen("return");
        skip_spaces_and_lf(info);
        if(*info->p->p==59) {
                        _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08call.nc", 2351, 2087, "struct sNode");
            _inf_obj_value6=(struct sReturnNode*)come_increment_ref_count(((struct sReturnNode*)(__right_value1=sReturnNode_initialize((struct sReturnNode* )come_increment_ref_count((struct sReturnNode *)come_calloc(1, sizeof(struct sReturnNode )*(1), "08call.nc", 2351, 2085, "struct sReturnNode* "), "08call.nc", 2351, 2086),((void*)0),info))), "08call.nc", 2351, 2088);
            _inf_value6->_protocol_obj=_inf_obj_value6;
            _inf_value6->finalize=(void*)sReturnNode_finalize;
            _inf_value6->clone=(void*)sReturnNode_clone;
            _inf_value6->compile=(void*)sReturnNode_compile;
            _inf_value6->sline=(void*)sNodeBase_sline;
            _inf_value6->sline_real=(void*)sNodeBase_sline_real;
            _inf_value6->sname=(void*)sNodeBase_sname;
            _inf_value6->terminated=(void*)sNodeBase_terminated;
            _inf_value6->kind=(void*)sReturnNode_kind;
            _inf_value6->left_value=(void*)sNodeBase_left_value;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value6)), "08call.nc", 2351, 2089);
            come_call_finalizer(sReturnNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "08call.nc}", 2351, 2090);
            ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "08call.nc", 2351, 2091):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "08call.nc", 2351, 2092):(void*)0);
            return __result_obj__0;
        }
        else {
            __right_value0 = (void*)0;
            value=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "08call.nc", 2354, 2093);
            __right_value0 = (void*)0;
            __dec_obj182=value,
            value=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(value, "08call.nc", 2355, 2094),info), "08call.nc", 2355, 2096);
            (__dec_obj182 ? __dec_obj182 = come_decrement_ref_count(__dec_obj182, ((struct sNode*)__dec_obj182)->finalize, ((struct sNode*)__dec_obj182)->_protocol_obj, 0,0, (void*)0, "08call.nc", 2355, 2095) :0);
                        __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08call.nc", 2357, 2100, "struct sNode");
            _inf_obj_value7=(struct sReturnNode*)come_increment_ref_count(((struct sReturnNode*)(__right_value1=sReturnNode_initialize((struct sReturnNode* )come_increment_ref_count((struct sReturnNode *)come_calloc(1, sizeof(struct sReturnNode )*(1), "08call.nc", 2357, 2097, "struct sReturnNode* "), "08call.nc", 2357, 2098),(struct sNode*)come_increment_ref_count(value, "08call.nc", 2357, 2099),info))), "08call.nc", 2357, 2101);
            _inf_value7->_protocol_obj=_inf_obj_value7;
            _inf_value7->finalize=(void*)sReturnNode_finalize;
            _inf_value7->clone=(void*)sReturnNode_clone;
            _inf_value7->compile=(void*)sReturnNode_compile;
            _inf_value7->sline=(void*)sNodeBase_sline;
            _inf_value7->sline_real=(void*)sNodeBase_sline_real;
            _inf_value7->sname=(void*)sNodeBase_sname;
            _inf_value7->terminated=(void*)sNodeBase_terminated;
            _inf_value7->kind=(void*)sReturnNode_kind;
            _inf_value7->left_value=(void*)sNodeBase_left_value;
            __right_value2 = (void*)0;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value7)), "08call.nc", 2357, 2102);
            ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 0,(void*)0, "08call.nc", 2357, 2103):(void*)0);
            come_call_finalizer(sReturnNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "08call.nc}", 2357, 2104);
            ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "08call.nc", 2357, 2105):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "08call.nc", 2357, 2106):(void*)0);
            return __result_obj__0;
            ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 0,(void*)0, "08call.nc", 2359, 2107):(void*)0);
        }
    }
    else if(*info->p->p==47&&*(info->p->p+1)==42) {
        nest=0;
        while(1) {
            if(*info->p->p==47&&*(info->p->p+1)==42) {
                info->p->p+=2;
                nest++;
            }
            else if(*info->p->p==42&&*(info->p->p+1)==47) {
                info->p->p+=2;
                nest--;
                if(nest==0) {
                    break;
                }
            }
            else if(*info->p->p==10) {
                info->p->p++;
                info->sline++;
            }
            else {
                info->p->p++;
            }
        }
    }
    else if(*info->p->p==47&&*(info->p->p+1)==47) {
        info->p->p+=2;
        while(1) {
            if(*info->p->p==10) {
                info->p->p++;
                skip_spaces_and_lf(info);
                break;
            }
            else if(*info->p->p==0) {
                break;
            }
            else {
                info->p->p++;
            }
        }
    }
    else if(!gComeC&&*info->p->p==116&&*(info->p->p+1)==40) {
        info->p->p+=2;
        skip_spaces_and_lf(info);
        __right_value0 = (void*)0;
        node=(struct sNode*)come_increment_ref_count(parse_tuple(info,(_Bool)0), "08call.nc", 2407, 2108);
        skip_spaces_and_lf(info);
                __result_obj__0 = (struct sNode*)come_increment_ref_count(node, "08call.nc", 2411, 2109);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1,(void*)0, "08call.nc", 2411, 2110):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "08call.nc", 2411, 2111):(void*)0);
        return __result_obj__0;
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "08call.nc", 2988, 2112):(void*)0);
    }
    else if(!gComeC&&*info->p->p==118&&*(info->p->p+1)==91) {
        info->p->p+=2;
        skip_spaces_and_lf(info);
        __right_value0 = (void*)0;
        node_212=(struct sNode*)come_increment_ref_count(parse_vector(info), "08call.nc", 2417, 2113);
        skip_spaces_and_lf(info);
                __result_obj__0 = (struct sNode*)come_increment_ref_count(node_212, "08call.nc", 2421, 2114);
        ((node_212) ? node_212 = come_decrement_ref_count(node_212, ((struct sNode*)node_212)->finalize, ((struct sNode*)node_212)->_protocol_obj, 0, 1,(void*)0, "08call.nc", 2421, 2115):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "08call.nc", 2421, 2116):(void*)0);
        return __result_obj__0;
        ((node_212) ? node_212 = come_decrement_ref_count(node_212, ((struct sNode*)node_212)->finalize, ((struct sNode*)node_212)->_protocol_obj, 0, 0,(void*)0, "08call.nc", 2988, 2117):(void*)0);
    }
    else if(!gComeC&&(info->end-info->p->p)>=strlen("`it")&&memcmp(info->p->p,"`it",strlen("`it"))==0) {
        __right_value0 = (void*)0;
        node_213=(struct sNode*)come_increment_ref_count(parse_iterator_it(info), "08call.nc", 2425, 2118);
                __result_obj__0 = (struct sNode*)come_increment_ref_count(node_213, "08call.nc", 2427, 2119);
        ((node_213) ? node_213 = come_decrement_ref_count(node_213, ((struct sNode*)node_213)->finalize, ((struct sNode*)node_213)->_protocol_obj, 0, 1,(void*)0, "08call.nc", 2427, 2120):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "08call.nc", 2427, 2121):(void*)0);
        return __result_obj__0;
        ((node_213) ? node_213 = come_decrement_ref_count(node_213, ((struct sNode*)node_213)->finalize, ((struct sNode*)node_213)->_protocol_obj, 0, 0,(void*)0, "08call.nc", 2988, 2122):(void*)0);
    }
    else if((xisalpha(*info->p->p)||*info->p->p==95)&&!(((*info->p->p==76||*info->p->p==108||*info->p->p==115||*info->p->p==83||*info->p->p==98||*info->p->p==66||*info->p->p==104||*info->p->p==72||*info->p->p==117||*info->p->p==85)&&*(info->p->p+1)==34)||((*info->p->p==76||*info->p->p==117||*info->p->p==85)&&*(info->p->p+1)==39)||(*info->p->p==117&&*(info->p->p+1)==56&&*(info->p->p+2)==34))) {
        head=info->p->p;
        head_sline=info->sline;
        sline_real=info->sline_real;
        info->sline_real=info->sline;
        __right_value0 = (void*)0;
        buf=(char* )come_increment_ref_count(backtrace_parse_word(info), "08call.nc", 2435, 2123);
        is_type_name_=is_type_name(buf,info);
        const char* is_special_word_array[25]={ "if", "while", "for", "switch", "return", "sizeof", "offsetof", "isheap", "ispointer", "__typeof__"
                                    , "dynamic_typeof", "typeof", "gc_inc", "gc_dec", "gc_dec_nofree", "case", "_Alignof"
                                    , "_Alignas", "__alignof__", "_Atomic", "borrow", "dupe", "clone", "__builtin_offsetof", "_Generic" };
        is_special_word=charpa_contained(is_special_word_array,25,buf);
        is_portable_symbol=is_portable_libc_symbol(buf);
        define_function_pointer_flag=(_Bool)0;
        if(!is_special_word&&*info->p->p==40&&*(info->p->p+1)!=42) {
            __right_value0 = (void*)0;
            ((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=backtrace_parse_type((_Bool)0,info)));
            come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "08call.nc}", 2450, 2124);
            if(*info->p->p==40) {
                info->p->p++;
                skip_spaces_and_lf(info);
                if(*info->p->p==42) {
                    info->p->p++;
                    skip_spaces_and_lf(info);
                    define_function_pointer_flag=(_Bool)1;
                }
            }
            info->p->p=head;
            info->sline=head_sline;
        }
        lambda_flag=(_Bool)0;
        if(!is_special_word&&is_type_name_) {
            info->p->p=head;
            info->sline=head_sline;
            __right_value0 = (void*)0;
            ((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=backtrace_parse_type((_Bool)0,info)));
            come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "08call.nc}", 2475, 2125);
            __right_value0 = (void*)0;
            word2=(char* )come_increment_ref_count(backtrace_parse_word(info), "08call.nc", 2477, 2126);
            if(string_operator_equals(word2,"lambda")) {
                lambda_flag=(_Bool)1;
            }
            info->p->p=head;
            info->sline=head_sline;
            (word2 = come_decrement_ref_count(word2, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 2488, 2127));
        }
        fun_name_with_type_name=(_Bool)0;
        if(!is_special_word) {
            info->p->p=head;
            info->sline=head_sline;
            no_output_come_code=info->no_output_come_code;
            info->no_output_come_code=(_Bool)1;
            flag=(_Bool)0;
            while(xisalpha(*info->p->p)||*info->p->p==95) {
                flag=(_Bool)1;
                __right_value0 = (void*)0;
                word2_214=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "08call.nc", 2500, 2128);
                (word2_214 = come_decrement_ref_count(word2_214, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 2502, 2129));
            }
            while(*info->p->p==42||*info->p->p==37) {
                info->p->p++;
                skip_spaces_and_lf(info);
            }
            while(*info->p->p==91&&*(info->p->p+1)==93) {
                info->p->p+=2;
                skip_spaces_and_lf(info);
            }
            if(flag&&*info->p->p==58&&*(info->p->p+1)==58) {
                info->p->p+=2;
                skip_spaces_and_lf(info);
                if(xisalpha(*info->p->p)||*info->p->p==95) {
                    fun_name_with_type_name=(_Bool)1;
                }
            }
            info->no_output_come_code=no_output_come_code;
            info->p->p=head;
            info->sline=head_sline;
        }
        call_method_generics_fun_call=(_Bool)0;
        if(!is_special_word) {
            info->p->p=head;
            info->sline=head_sline;
            if(xisalpha(*info->p->p)||*info->p->p==95) {
                __right_value0 = (void*)0;
                __dec_obj183=buf,
                buf=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "08call.nc", 2532, 2131);
                __dec_obj183 = come_decrement_ref_count(__dec_obj183, (void*)0, (void*)0, 0,0, (void*)0, "08call.nc", 2532, 2130);
            }
            if(__right_value0 = (void*)0,
__right_value1 = (void*)0,
__right_value2 = (void*)0,
({(_conditional_value_X0=(!is_type_name(buf,info)&&((struct sVar* )(__right_value2=map$2char$phsVar$ph_operator_load_element(info->lv_table->mVars,((char* )(__right_value1=__builtin_string(buf))))))==((void*)0)&&((struct sVar* )(__right_value5=map$2char$phsVar$ph_operator_load_element(info->gv_table->mVars,((char* )(__right_value4=__builtin_string(buf))))))==((void*)0)&&*info->p->p==60));            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "08call.nc", 2535, 2162));
            come_call_finalizer(sVar_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0, "08call.nc}", 2535, 2163);
            (__right_value4 = come_decrement_ref_count(__right_value4, (void*)0, (void*)0, 1, 0, (void*)0, "08call.nc", 2535, 2164));
            come_call_finalizer(sVar_finalize, __right_value5, (void*)0, (void*)0, 0, 1, 0, (void*)0, "08call.nc}", 2535, 2165);
_conditional_value_X0;})) {
                nest_215=0;
                while(*info->p->p) {
                    if(*info->p->p==60) {
                        info->p->p++;
                        nest_215++;
                    }
                    else if(*info->p->p==62) {
                        info->p->p++;
                        if(nest_215==0) {
                            break;
                        }
                    }
                    else if(*info->p->p==10||*info->p->p==59) {
                        break;
                    }
                    else {
                        info->p->p++;
                    }
                }
                if(*info->p->p==40) {
                    call_method_generics_fun_call=(_Bool)1;
                }
            }
            info->p->p=head;
            info->sline=head_sline;
        }
        inline_asm=(_Bool)0;
        if(!is_special_word) {
            info->p->p=head;
            info->sline=head_sline;
            __right_value0 = (void*)0;
            __dec_obj184=buf,
            buf=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "08call.nc", 2573, 2167);
            __dec_obj184 = come_decrement_ref_count(__dec_obj184, (void*)0, (void*)0, 0,0, (void*)0, "08call.nc", 2573, 2166);
            if(string_operator_equals(buf,"asm")||string_operator_equals(buf,"__asm")||string_operator_equals(buf,"__asm__")) {
                if(*info->p->p==40) {
                    inline_asm=(_Bool)1;
                }
                else {
                    if(xisalpha(*info->p->p)||*info->p->p==95) {
                        __right_value0 = (void*)0;
                        __dec_obj185=buf,
                        buf=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "08call.nc", 2581, 2169);
                        __dec_obj185 = come_decrement_ref_count(__dec_obj185, (void*)0, (void*)0, 0,0, (void*)0, "08call.nc", 2581, 2168);
                        if(*info->p->p==40) {
                            inline_asm=(_Bool)1;
                        }
                    }
                }
            }
            info->p->p=head;
            info->sline=head_sline;
        }
        skip_spaces_and_lf(info);
        __right_value0 = (void*)0;
        __dec_obj186=buf,
        buf=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "08call.nc", 2596, 2171);
        __dec_obj186 = come_decrement_ref_count(__dec_obj186, (void*)0, (void*)0, 0,0, (void*)0, "08call.nc", 2596, 2170);
        skip_spaces_and_lf(info);
        if(lambda_flag) {
            info->p->p=head;
            info->sline=head_sline;
            __right_value0 = (void*)0;
            node_216=(struct sNode*)come_increment_ref_count(parse_function(info), "08call.nc", 2604, 2172);
            info->sline_real=sline_real;
                        __result_obj__0 = (struct sNode*)come_increment_ref_count(node_216, "08call.nc", 2606, 2173);
            ((node_216) ? node_216 = come_decrement_ref_count(node_216, ((struct sNode*)node_216)->finalize, ((struct sNode*)node_216)->_protocol_obj, 0, 1,(void*)0, "08call.nc", 2606, 2174):(void*)0);
            (buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 2606, 2175));
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "08call.nc", 2606, 2176):(void*)0);
            return __result_obj__0;
            ((node_216) ? node_216 = come_decrement_ref_count(node_216, ((struct sNode*)node_216)->finalize, ((struct sNode*)node_216)->_protocol_obj, 0, 0,(void*)0, "08call.nc", 2981, 2177):(void*)0);
        }
        else if((string_operator_equals(buf,"_Static_assert")||string_operator_equals(buf,"static_assert"))&&*info->p->p==40) {
            expected_next_character(40,info);
            no_comma=info->no_comma;
            info->no_comma=(_Bool)1;
            __right_value0 = (void*)0;
            exp=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "08call.nc", 2614, 2178);
            info->no_comma=no_comma;
            expected_next_character(44,info);
            __right_value0 = (void*)0;
            exp2=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "08call.nc", 2619, 2179);
            expected_next_character(41,info);
                        __right_value0 = (void*)0;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=static_assert_node((struct sNode*)come_increment_ref_count(exp, "08call.nc", 2623, 2180),(struct sNode*)come_increment_ref_count(exp2, "08call.nc", 2623, 2181),info))), "08call.nc", 2623, 2182);
            ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0, "08call.nc", 2623, 2183):(void*)0);
            ((exp2) ? exp2 = come_decrement_ref_count(exp2, ((struct sNode*)exp2)->finalize, ((struct sNode*)exp2)->_protocol_obj, 0, 0,(void*)0, "08call.nc", 2623, 2184):(void*)0);
            (buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 2623, 2185));
            ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0, "08call.nc", 2623, 2186):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "08call.nc", 2623, 2187):(void*)0);
            return __result_obj__0;
            ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0, "08call.nc", 2981, 2188):(void*)0);
            ((exp2) ? exp2 = come_decrement_ref_count(exp2, ((struct sNode*)exp2)->finalize, ((struct sNode*)exp2)->_protocol_obj, 0, 0,(void*)0, "08call.nc", 2981, 2189):(void*)0);
        }
        else if(string_operator_equals(buf,"__attribute__")&&*info->p->p==40) {
            __right_value0 = (void*)0;
            attr=(char* )come_increment_ref_count(parse_inner_attribute(info), "08call.nc", 2627, 2190);
                        __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08call.nc", 2629, 2194, "struct sNode");
            _inf_obj_value8=(struct sInnerAttribute*)come_increment_ref_count(((struct sInnerAttribute*)(__right_value1=sInnerAttribute_initialize((struct sInnerAttribute* )come_increment_ref_count((struct sInnerAttribute *)come_calloc(1, sizeof(struct sInnerAttribute )*(1), "08call.nc", 2629, 2191, "struct sInnerAttribute* "), "08call.nc", 2629, 2192),(char* )come_increment_ref_count(attr, "08call.nc", 2629, 2193),info))), "08call.nc", 2629, 2195);
            _inf_value8->_protocol_obj=_inf_obj_value8;
            _inf_value8->finalize=(void*)sInnerAttribute_finalize;
            _inf_value8->clone=(void*)sInnerAttribute_clone;
            _inf_value8->compile=(void*)sInnerAttribute_compile;
            _inf_value8->sline=(void*)sNodeBase_sline;
            _inf_value8->sline_real=(void*)sNodeBase_sline_real;
            _inf_value8->sname=(void*)sNodeBase_sname;
            _inf_value8->terminated=(void*)sNodeBase_terminated;
            _inf_value8->kind=(void*)sInnerAttribute_kind;
            _inf_value8->left_value=(void*)sNodeBase_left_value;
            __right_value2 = (void*)0;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value8)), "08call.nc", 2629, 2205);
            (attr = come_decrement_ref_count(attr, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 2629, 2206));
            (buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 2629, 2207));
            come_call_finalizer(sInnerAttribute_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "08call.nc}", 2629, 2208);
            ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "08call.nc", 2629, 2209):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "08call.nc", 2629, 2210):(void*)0);
            return __result_obj__0;
            (attr = come_decrement_ref_count(attr, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 2981, 2211));
        }
        else if(string_operator_equals(buf,"__c__")&&*info->p->p==123) {
            __right_value0 = (void*)0;
            block_text=(char* )come_increment_ref_count(skip_block(info,(_Bool)0), "08call.nc", 2633, 2212);
            contents=(char* )come_increment_ref_count(block_text, "08call.nc", 2635, 2213);
                        __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08call.nc", 2637, 2217, "struct sNode");
            _inf_obj_value9=(struct sCSourceNode*)come_increment_ref_count(((struct sCSourceNode*)(__right_value1=sCSourceNode_initialize((struct sCSourceNode* )come_increment_ref_count((struct sCSourceNode *)come_calloc(1, sizeof(struct sCSourceNode )*(1), "08call.nc", 2637, 2214, "struct sCSourceNode* "), "08call.nc", 2637, 2215),(char* )come_increment_ref_count(contents, "08call.nc", 2637, 2216),info))), "08call.nc", 2637, 2218);
            _inf_value9->_protocol_obj=_inf_obj_value9;
            _inf_value9->finalize=(void*)sCSourceNode_finalize;
            _inf_value9->clone=(void*)sCSourceNode_clone;
            _inf_value9->compile=(void*)sCSourceNode_compile;
            _inf_value9->sline=(void*)sNodeBase_sline;
            _inf_value9->sline_real=(void*)sNodeBase_sline_real;
            _inf_value9->sname=(void*)sNodeBase_sname;
            _inf_value9->terminated=(void*)sNodeBase_terminated;
            _inf_value9->kind=(void*)sCSourceNode_kind;
            _inf_value9->left_value=(void*)sNodeBase_left_value;
            __right_value2 = (void*)0;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value9)), "08call.nc", 2637, 2228);
            (block_text = come_decrement_ref_count(block_text, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 2637, 2229));
            (contents = come_decrement_ref_count(contents, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 2637, 2230));
            (buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 2637, 2231));
            come_call_finalizer(sCSourceNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "08call.nc}", 2637, 2232);
            ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "08call.nc", 2637, 2233):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "08call.nc", 2637, 2234):(void*)0);
            return __result_obj__0;
            (block_text = come_decrement_ref_count(block_text, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 2981, 2235));
            (contents = come_decrement_ref_count(contents, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 2981, 2236));
        }
        else if(string_operator_equals(buf,"extern")) {
            __right_value0 = (void*)0;
            node_217=(struct sNode*)come_increment_ref_count(parse_function(info), "08call.nc", 2640, 2237);
                        __result_obj__0 = (struct sNode*)come_increment_ref_count(node_217, "08call.nc", 2642, 2238);
            ((node_217) ? node_217 = come_decrement_ref_count(node_217, ((struct sNode*)node_217)->finalize, ((struct sNode*)node_217)->_protocol_obj, 0, 1,(void*)0, "08call.nc", 2642, 2239):(void*)0);
            (buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 2642, 2240));
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "08call.nc", 2642, 2241):(void*)0);
            return __result_obj__0;
            ((node_217) ? node_217 = come_decrement_ref_count(node_217, ((struct sNode*)node_217)->finalize, ((struct sNode*)node_217)->_protocol_obj, 0, 0,(void*)0, "08call.nc", 2981, 2242):(void*)0);
        }
        else if(!gComeC&&(string_operator_equals(buf,"string")||string_operator_equals(buf,"wstring"))&&*info->p->p==40) {
            __right_value0 = (void*)0;
            node_218=(struct sNode*)come_increment_ref_count(parse_function_call(buf,info,(_Bool)0), "08call.nc", 2645, 2243);
            info->sline_real=sline_real;
                        __result_obj__0 = (struct sNode*)come_increment_ref_count(node_218, "08call.nc", 2648, 2244);
            ((node_218) ? node_218 = come_decrement_ref_count(node_218, ((struct sNode*)node_218)->finalize, ((struct sNode*)node_218)->_protocol_obj, 0, 1,(void*)0, "08call.nc", 2648, 2245):(void*)0);
            (buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 2648, 2246));
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "08call.nc", 2648, 2247):(void*)0);
            return __result_obj__0;
            ((node_218) ? node_218 = come_decrement_ref_count(node_218, ((struct sNode*)node_218)->finalize, ((struct sNode*)node_218)->_protocol_obj, 0, 0,(void*)0, "08call.nc", 2981, 2248):(void*)0);
        }
        else if(is_special_word) {
            __right_value0 = (void*)0;
            node_219=(struct sNode*)come_increment_ref_count(string_node_v21(buf,head,head_sline,info), "08call.nc", 2653, 2249);
            info->sline_real=sline_real;
                        __result_obj__0 = (struct sNode*)come_increment_ref_count(node_219, "08call.nc", 2654, 2250);
            ((node_219) ? node_219 = come_decrement_ref_count(node_219, ((struct sNode*)node_219)->finalize, ((struct sNode*)node_219)->_protocol_obj, 0, 1,(void*)0, "08call.nc", 2654, 2251):(void*)0);
            (buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 2654, 2252));
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "08call.nc", 2654, 2253):(void*)0);
            return __result_obj__0;
            ((node_219) ? node_219 = come_decrement_ref_count(node_219, ((struct sNode*)node_219)->finalize, ((struct sNode*)node_219)->_protocol_obj, 0, 0,(void*)0, "08call.nc", 2981, 2254):(void*)0);
        }
        else if(gComePthread&&string_operator_equals(buf,"come")) {
            come_block=((void*)0);
            come_block_sline=0;
            if(*info->p->p==123) {
                head_220=info->p->p;
                come_block_sline=info->sline;
                __right_value0 = (void*)0;
                ((char* )(__right_value0=skip_block(info,(_Bool)0)));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "08call.nc", 2664, 2255));
                tail=info->p->p;
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                __dec_obj191=come_block,
                come_block=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "08call.nc", 2668, 2256, "struct buffer* "), "08call.nc", 2668, 2257)), "08call.nc", 2668, 2259);
                come_call_finalizer(buffer_finalize, __dec_obj191,(void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc", 2668, 2258);
                len=tail-head_220;
                __right_value0 = (void*)0;
                mem=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len+1)), "08call.nc", 2671, 2260, "char*"), "08call.nc", 2671, 2261);
                memcpy(mem,head_220,len);
                mem[len]=0;
                buffer_append_str(come_block,mem);
                buffer_append_str(come_block,"\n");
                (mem = come_decrement_ref_count(mem, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 2703, 2262));
            }
            else {
                head_221=info->p->p;
                come_block_sline=info->sline;
                no_output_come_code_222=info->no_output_come_code;
                info->no_output_come_code=(_Bool)1;
                __right_value0 = (void*)0;
                ((struct sNode*)(__right_value0=expression_v13(info,(_Bool)0)));
                ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0, "08call.nc", 2684, 2263):(void*)0);
                info->no_output_come_code=no_output_come_code_222;
                tail_223=info->p->p;
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                __dec_obj192=come_block,
                come_block=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "08call.nc", 2689, 2264, "struct buffer* "), "08call.nc", 2689, 2265)), "08call.nc", 2689, 2267);
                come_call_finalizer(buffer_finalize, __dec_obj192,(void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc", 2689, 2266);
                len_224=tail_223-head_221;
                __right_value0 = (void*)0;
                mem_225=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_224+1)), "08call.nc", 2692, 2268, "char*"), "08call.nc", 2692, 2269);
                memcpy(mem_225,head_221,len_224);
                mem_225[len_224]=0;
                buffer_append_str(come_block,"{");
                buffer_append_str(come_block,mem_225);
                buffer_append_str(come_block,"; }");
                buffer_append_str(come_block,"return (void*)0;\n}");
                buffer_append_str(come_block,"\n");
                (mem_225 = come_decrement_ref_count(mem_225, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 2703, 2270));
            }
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08call.nc", 2703, 2274, "struct sNode");
            _inf_obj_value10=(struct sComeCallNode*)come_increment_ref_count(((struct sComeCallNode*)(__right_value1=sComeCallNode_initialize((struct sComeCallNode* )come_increment_ref_count((struct sComeCallNode *)come_calloc(1, sizeof(struct sComeCallNode )*(1), "08call.nc", 2703, 2271, "struct sComeCallNode* "), "08call.nc", 2703, 2272),(struct buffer* )come_increment_ref_count(come_block, "08call.nc", 2703, 2273),come_block_sline,info))), "08call.nc", 2703, 2275);
            _inf_value10->_protocol_obj=_inf_obj_value10;
            _inf_value10->finalize=(void*)sComeCallNode_finalize;
            _inf_value10->clone=(void*)sComeCallNode_clone;
            _inf_value10->compile=(void*)sComeCallNode_compile;
            _inf_value10->sline=(void*)sNodeBase_sline;
            _inf_value10->sline_real=(void*)sNodeBase_sline_real;
            _inf_value10->sname=(void*)sNodeBase_sname;
            _inf_value10->terminated=(void*)sComeCallNode_terminated;
            _inf_value10->kind=(void*)sComeCallNode_kind;
            _inf_value10->left_value=(void*)sNodeBase_left_value;
            __right_value2 = (void*)0;
            node_226=(struct sNode*)come_increment_ref_count(_inf_value10, "08call.nc", 2703, 2284);
            come_call_finalizer(sComeCallNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "08call.nc}", 2703, 2285);
            info->sline_real=sline_real;
                        __result_obj__0 = (struct sNode*)come_increment_ref_count(node_226, "08call.nc", 2706, 2286);
            come_call_finalizer(buffer_finalize, come_block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 2706, 2287);
            ((node_226) ? node_226 = come_decrement_ref_count(node_226, ((struct sNode*)node_226)->finalize, ((struct sNode*)node_226)->_protocol_obj, 0, 1,(void*)0, "08call.nc", 2706, 2288):(void*)0);
            (buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 2706, 2289));
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "08call.nc", 2706, 2290):(void*)0);
            return __result_obj__0;
            come_call_finalizer(buffer_finalize, come_block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 2981, 2291);
            ((node_226) ? node_226 = come_decrement_ref_count(node_226, ((struct sNode*)node_226)->finalize, ((struct sNode*)node_226)->_protocol_obj, 0, 0,(void*)0, "08call.nc", 2981, 2292):(void*)0);
        }
        else if(gComePthread&&string_operator_equals(buf,"come_join")&&*info->p->p==40) {
            come_block_227=((void*)0);
            come_block_sline_228=0;
            expected_next_character(40,info);
            __right_value0 = (void*)0;
            node_229=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "08call.nc", 2713, 2293);
            expected_next_character(41,info);
            info->sline_real=sline_real;
                        __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08call.nc", 2717, 2297, "struct sNode");
            _inf_obj_value11=(struct sComeJoinNode*)come_increment_ref_count(((struct sComeJoinNode*)(__right_value1=sComeJoinNode_initialize((struct sComeJoinNode* )come_increment_ref_count((struct sComeJoinNode *)come_calloc(1, sizeof(struct sComeJoinNode )*(1), "08call.nc", 2717, 2294, "struct sComeJoinNode* "), "08call.nc", 2717, 2295),(struct sNode*)come_increment_ref_count(node_229, "08call.nc", 2717, 2296),info))), "08call.nc", 2717, 2298);
            _inf_value11->_protocol_obj=_inf_obj_value11;
            _inf_value11->finalize=(void*)sComeJoinNode_finalize;
            _inf_value11->clone=(void*)sComeJoinNode_clone;
            _inf_value11->compile=(void*)sComeJoinNode_compile;
            _inf_value11->sline=(void*)sNodeBase_sline;
            _inf_value11->sline_real=(void*)sNodeBase_sline_real;
            _inf_value11->sname=(void*)sNodeBase_sname;
            _inf_value11->terminated=(void*)sComeJoinNode_terminated;
            _inf_value11->kind=(void*)sComeJoinNode_kind;
            _inf_value11->left_value=(void*)sNodeBase_left_value;
            __right_value2 = (void*)0;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value11)), "08call.nc", 2717, 2307);
            come_call_finalizer(buffer_finalize, come_block_227, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 2717, 2308);
            ((node_229) ? node_229 = come_decrement_ref_count(node_229, ((struct sNode*)node_229)->finalize, ((struct sNode*)node_229)->_protocol_obj, 0, 0,(void*)0, "08call.nc", 2717, 2309):(void*)0);
            (buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 2717, 2310));
            come_call_finalizer(sComeJoinNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "08call.nc}", 2717, 2311);
            ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "08call.nc", 2717, 2312):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "08call.nc", 2717, 2313):(void*)0);
            return __result_obj__0;
            come_call_finalizer(buffer_finalize, come_block_227, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 2981, 2314);
            ((node_229) ? node_229 = come_decrement_ref_count(node_229, ((struct sNode*)node_229)->finalize, ((struct sNode*)node_229)->_protocol_obj, 0, 0,(void*)0, "08call.nc", 2981, 2315):(void*)0);
        }
        else if(gComePthread&&string_operator_equals(buf,"come_poll")&&(*info->p->p==40||*info->p->p==123)) {
            time_out=1;
            if(*info->p->p==40) {
                info->p->p++;
                while(xisdigit(*info->p->p)) {
                    time_out=time_out*10+(*info->p->p-48);
                    info->p->p++;
                    skip_spaces_and_lf(info);
                }
                expected_next_character(41,info);
            }
            expected_next_character(123,info);
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            vars=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "08call.nc", 2735, 2316, "struct list$1sNode$ph*"), "08call.nc", 2735, 2317)), "08call.nc", 2735, 2318);
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            blocks=(struct list$1sBlock$ph*)come_increment_ref_count(list$1sBlock$ph_initialize((struct list$1sBlock$ph*)come_increment_ref_count((struct list$1sBlock$ph*)come_calloc(1, sizeof(struct list$1sBlock$ph)*(1), "08call.nc", 2736, 2319, "struct list$1sBlock$ph*"), "08call.nc", 2736, 2323)), "08call.nc", 2736, 2324);
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            else_block=(struct sBlock*)come_increment_ref_count(sBlock_initialize((struct sBlock* )come_increment_ref_count((struct sBlock *)come_calloc(1, sizeof(struct sBlock )*(1), "08call.nc", 2737, 2325, "struct sBlock* "), "08call.nc", 2737, 2326)), "08call.nc", 2737, 2327);
            while(1) {
                if(((info->end-info->p->p)>=strlen("else"))&&memcmp(info->p->p,"else",strlen("else"))==0) {
                    info->p->p+=strlen("else");
                    skip_spaces_and_lf(info);
                    __right_value0 = (void*)0;
                    __dec_obj197=else_block,
                    else_block=(struct sBlock* )come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0), "08call.nc", 2743, 2329);
                    come_call_finalizer(sBlock_finalize, __dec_obj197,(void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc", 2743, 2328);
                    if(*info->p->p==125) {
                        break;
                    }
                }
                else {
                    __right_value0 = (void*)0;
                    var_name=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "08call.nc", 2750, 2330);
                    __right_value0 = (void*)0;
                    block=(struct sBlock* )come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0), "08call.nc", 2752, 2331);
                    list$1sNode$ph_add(vars,(struct sNode*)come_increment_ref_count(var_name, "08call.nc", 2754, 2332));
                    list$1sBlock$ph_add(blocks,(struct sBlock* )come_increment_ref_count(block, "08call.nc", 2756, 2347));
                    if(*info->p->p==125) {
                        ((var_name) ? var_name = come_decrement_ref_count(var_name, ((struct sNode*)var_name)->finalize, ((struct sNode*)var_name)->_protocol_obj, 0, 0,(void*)0, "08call.nc", 2759, 2348):(void*)0);
                        come_call_finalizer(sBlock_finalize, block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 2759, 2349);
                        break;
                    }
                    ((var_name) ? var_name = come_decrement_ref_count(var_name, ((struct sNode*)var_name)->finalize, ((struct sNode*)var_name)->_protocol_obj, 0, 0,(void*)0, "08call.nc", 2762, 2350):(void*)0);
                    come_call_finalizer(sBlock_finalize, block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 2762, 2351);
                }
            }
            expected_next_character(125,info);
            info->sline_real=sline_real;
                        __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08call.nc", 2767, 2357, "struct sNode");
            _inf_obj_value12=(struct sComePollNode*)come_increment_ref_count(((struct sComePollNode*)(__right_value1=sComePollNode_initialize((struct sComePollNode* )come_increment_ref_count((struct sComePollNode *)come_calloc(1, sizeof(struct sComePollNode )*(1), "08call.nc", 2767, 2352, "struct sComePollNode* "), "08call.nc", 2767, 2353),(struct list$1sNode$ph*)come_increment_ref_count(vars, "08call.nc", 2767, 2354),(struct list$1sBlock$ph*)come_increment_ref_count(blocks, "08call.nc", 2767, 2355),(struct sBlock* )come_increment_ref_count(else_block, "08call.nc", 2767, 2356),time_out,info))), "08call.nc", 2767, 2358);
            _inf_value12->_protocol_obj=_inf_obj_value12;
            _inf_value12->finalize=(void*)sComePollNode_finalize;
            _inf_value12->clone=(void*)sComePollNode_clone;
            _inf_value12->compile=(void*)sComePollNode_compile;
            _inf_value12->sline=(void*)sNodeBase_sline;
            _inf_value12->sline_real=(void*)sNodeBase_sline_real;
            _inf_value12->sname=(void*)sNodeBase_sname;
            _inf_value12->terminated=(void*)sComePollNode_terminated;
            _inf_value12->kind=(void*)sComePollNode_kind;
            _inf_value12->left_value=(void*)sNodeBase_left_value;
            __right_value2 = (void*)0;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value12)), "08call.nc", 2767, 2530);
            come_call_finalizer(list$1sNode$ph$p_finalize, vars, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 2767, 2531);
            come_call_finalizer(list$1sBlock$ph$p_finalize, blocks, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 2767, 2532);
            come_call_finalizer(sBlock_finalize, else_block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 2767, 2533);
            (buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 2767, 2534));
            come_call_finalizer(sComePollNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "08call.nc}", 2767, 2535);
            ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "08call.nc", 2767, 2536):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "08call.nc", 2767, 2537):(void*)0);
            return __result_obj__0;
            come_call_finalizer(list$1sNode$ph$p_finalize, vars, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 2981, 2538);
            come_call_finalizer(list$1sBlock$ph$p_finalize, blocks, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 2981, 2539);
            come_call_finalizer(sBlock_finalize, else_block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 2981, 2540);
        }
        else if(string_operator_equals(buf,"__func__")||string_operator_equals(buf,"__FUNCTION__")) {
            info->sline_real=sline_real;
                        __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08call.nc", 2772, 2543, "struct sNode");
            _inf_obj_value13=(struct sFuncNode*)come_increment_ref_count(((struct sFuncNode*)(__right_value1=sFuncNode_initialize((struct sFuncNode* )come_increment_ref_count((struct sFuncNode *)come_calloc(1, sizeof(struct sFuncNode )*(1), "08call.nc", 2772, 2541, "struct sFuncNode* "), "08call.nc", 2772, 2542),info))), "08call.nc", 2772, 2544);
            _inf_value13->_protocol_obj=_inf_obj_value13;
            _inf_value13->finalize=(void*)sFuncNode_finalize;
            _inf_value13->clone=(void*)sFuncNode_clone;
            _inf_value13->compile=(void*)sFuncNode_compile;
            _inf_value13->sline=(void*)sNodeBase_sline;
            _inf_value13->sline_real=(void*)sNodeBase_sline_real;
            _inf_value13->sname=(void*)sNodeBase_sname;
            _inf_value13->terminated=(void*)sNodeBase_terminated;
            _inf_value13->kind=(void*)sFuncNode_kind;
            _inf_value13->left_value=(void*)sNodeBase_left_value;
            __right_value2 = (void*)0;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value13)), "08call.nc", 2772, 2551);
            (buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 2772, 2552));
            come_call_finalizer(sFuncNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "08call.nc}", 2772, 2553);
            ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "08call.nc", 2772, 2554):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "08call.nc", 2772, 2555):(void*)0);
            return __result_obj__0;
        }
        else if(string_operator_equals(buf,"__line__")||string_operator_equals(buf,"__LINE__")) {
            info->sline_real=sline_real;
                        __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08call.nc", 2776, 2558, "struct sNode");
            _inf_obj_value14=(struct sLineNode*)come_increment_ref_count(((struct sLineNode*)(__right_value1=sLineNode_initialize((struct sLineNode* )come_increment_ref_count((struct sLineNode *)come_calloc(1, sizeof(struct sLineNode )*(1), "08call.nc", 2776, 2556, "struct sLineNode* "), "08call.nc", 2776, 2557),info))), "08call.nc", 2776, 2559);
            _inf_value14->_protocol_obj=_inf_obj_value14;
            _inf_value14->finalize=(void*)sLineNode_finalize;
            _inf_value14->clone=(void*)sLineNode_clone;
            _inf_value14->compile=(void*)sLineNode_compile;
            _inf_value14->sline=(void*)sNodeBase_sline;
            _inf_value14->sline_real=(void*)sNodeBase_sline_real;
            _inf_value14->sname=(void*)sNodeBase_sname;
            _inf_value14->terminated=(void*)sNodeBase_terminated;
            _inf_value14->kind=(void*)sLineNode_kind;
            _inf_value14->left_value=(void*)sNodeBase_left_value;
            __right_value2 = (void*)0;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value14)), "08call.nc", 2776, 2566);
            (buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 2776, 2567));
            come_call_finalizer(sLineNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "08call.nc}", 2776, 2568);
            ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "08call.nc", 2776, 2569):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "08call.nc", 2776, 2570):(void*)0);
            return __result_obj__0;
        }
        else if(string_operator_equals(buf,"__sname__")) {
            info->sline_real=sline_real;
                        __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08call.nc", 2780, 2573, "struct sNode");
            _inf_obj_value15=(struct sSNameNode*)come_increment_ref_count(((struct sSNameNode*)(__right_value1=sSNameNode_initialize((struct sSNameNode* )come_increment_ref_count((struct sSNameNode *)come_calloc(1, sizeof(struct sSNameNode )*(1), "08call.nc", 2780, 2571, "struct sSNameNode* "), "08call.nc", 2780, 2572),info))), "08call.nc", 2780, 2574);
            _inf_value15->_protocol_obj=_inf_obj_value15;
            _inf_value15->finalize=(void*)sSNameNode_finalize;
            _inf_value15->clone=(void*)sSNameNode_clone;
            _inf_value15->compile=(void*)sSNameNode_compile;
            _inf_value15->sline=(void*)sNodeBase_sline;
            _inf_value15->sline_real=(void*)sNodeBase_sline_real;
            _inf_value15->sname=(void*)sNodeBase_sname;
            _inf_value15->terminated=(void*)sNodeBase_terminated;
            _inf_value15->kind=(void*)sSNameNode_kind;
            _inf_value15->left_value=(void*)sNodeBase_left_value;
            __right_value2 = (void*)0;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value15)), "08call.nc", 2780, 2581);
            (buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 2780, 2582));
            come_call_finalizer(sSNameNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "08call.nc}", 2780, 2583);
            ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "08call.nc", 2780, 2584):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "08call.nc", 2780, 2585):(void*)0);
            return __result_obj__0;
        }
        else if(string_operator_equals(buf,"__caller_func__")) {
            info->sline_real=sline_real;
                        __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value16=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08call.nc", 2784, 2588, "struct sNode");
            _inf_obj_value16=(struct sCallerFuncNode*)come_increment_ref_count(((struct sCallerFuncNode*)(__right_value1=sCallerFuncNode_initialize((struct sCallerFuncNode* )come_increment_ref_count((struct sCallerFuncNode *)come_calloc(1, sizeof(struct sCallerFuncNode )*(1), "08call.nc", 2784, 2586, "struct sCallerFuncNode* "), "08call.nc", 2784, 2587),info))), "08call.nc", 2784, 2589);
            _inf_value16->_protocol_obj=_inf_obj_value16;
            _inf_value16->finalize=(void*)sCallerFuncNode_finalize;
            _inf_value16->clone=(void*)sCallerFuncNode_clone;
            _inf_value16->compile=(void*)sCallerFuncNode_compile;
            _inf_value16->sline=(void*)sNodeBase_sline;
            _inf_value16->sline_real=(void*)sNodeBase_sline_real;
            _inf_value16->sname=(void*)sNodeBase_sname;
            _inf_value16->terminated=(void*)sNodeBase_terminated;
            _inf_value16->kind=(void*)sCallerFuncNode_kind;
            _inf_value16->left_value=(void*)sNodeBase_left_value;
            __right_value2 = (void*)0;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value16)), "08call.nc", 2784, 2596);
            (buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 2784, 2597));
            come_call_finalizer(sCallerFuncNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "08call.nc}", 2784, 2598);
            ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "08call.nc", 2784, 2599):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "08call.nc", 2784, 2600):(void*)0);
            return __result_obj__0;
        }
        else if(string_operator_equals(buf,"__caller_line__")) {
            info->sline_real=sline_real;
                        __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value17=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08call.nc", 2788, 2603, "struct sNode");
            _inf_obj_value17=(struct sCallerLineNode*)come_increment_ref_count(((struct sCallerLineNode*)(__right_value1=sCallerLineNode_initialize((struct sCallerLineNode* )come_increment_ref_count((struct sCallerLineNode *)come_calloc(1, sizeof(struct sCallerLineNode )*(1), "08call.nc", 2788, 2601, "struct sCallerLineNode* "), "08call.nc", 2788, 2602),info))), "08call.nc", 2788, 2604);
            _inf_value17->_protocol_obj=_inf_obj_value17;
            _inf_value17->finalize=(void*)sCallerLineNode_finalize;
            _inf_value17->clone=(void*)sCallerLineNode_clone;
            _inf_value17->compile=(void*)sCallerLineNode_compile;
            _inf_value17->sline=(void*)sNodeBase_sline;
            _inf_value17->sline_real=(void*)sNodeBase_sline_real;
            _inf_value17->sname=(void*)sNodeBase_sname;
            _inf_value17->terminated=(void*)sNodeBase_terminated;
            _inf_value17->kind=(void*)sCallerLineNode_kind;
            _inf_value17->left_value=(void*)sNodeBase_left_value;
            __right_value2 = (void*)0;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value17)), "08call.nc", 2788, 2611);
            (buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 2788, 2612));
            come_call_finalizer(sCallerLineNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "08call.nc}", 2788, 2613);
            ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "08call.nc", 2788, 2614):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "08call.nc", 2788, 2615):(void*)0);
            return __result_obj__0;
        }
        else if(string_operator_equals(buf,"__caller_sname__")) {
            info->sline_real=sline_real;
                        __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value18=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08call.nc", 2792, 2618, "struct sNode");
            _inf_obj_value18=(struct sCallerSNameNode*)come_increment_ref_count(((struct sCallerSNameNode*)(__right_value1=sCallerSNameNode_initialize((struct sCallerSNameNode* )come_increment_ref_count((struct sCallerSNameNode *)come_calloc(1, sizeof(struct sCallerSNameNode )*(1), "08call.nc", 2792, 2616, "struct sCallerSNameNode* "), "08call.nc", 2792, 2617),info))), "08call.nc", 2792, 2619);
            _inf_value18->_protocol_obj=_inf_obj_value18;
            _inf_value18->finalize=(void*)sCallerSNameNode_finalize;
            _inf_value18->clone=(void*)sCallerSNameNode_clone;
            _inf_value18->compile=(void*)sCallerSNameNode_compile;
            _inf_value18->sline=(void*)sNodeBase_sline;
            _inf_value18->sline_real=(void*)sNodeBase_sline_real;
            _inf_value18->sname=(void*)sNodeBase_sname;
            _inf_value18->terminated=(void*)sNodeBase_terminated;
            _inf_value18->kind=(void*)sCallerSNameNode_kind;
            _inf_value18->left_value=(void*)sNodeBase_left_value;
            __right_value2 = (void*)0;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value18)), "08call.nc", 2792, 2626);
            (buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 2792, 2627));
            come_call_finalizer(sCallerSNameNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "08call.nc}", 2792, 2628);
            ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "08call.nc", 2792, 2629):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "08call.nc", 2792, 2630):(void*)0);
            return __result_obj__0;
        }
        else if(info->va_arg&&is_type_name(buf,info)) {
            info->p->p=head;
            info->sline=head_sline;
            __right_value0 = (void*)0;
            multiple_assign_var16=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
            type=(struct sType* )come_increment_ref_count(multiple_assign_var16->v1, "08call.nc", 2798, 2631);
            name=(char* )come_increment_ref_count(multiple_assign_var16->v2, "08call.nc", 2798, 2632);
            err=multiple_assign_var16->v3;
            come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "08call.nc}", 2798, 2633);
            info->sline_real=sline_real;
                        __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value19=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08call.nc", 2801, 2636, "struct sNode");
            _inf_obj_value19=(struct sVarArgTypeName*)come_increment_ref_count(((struct sVarArgTypeName*)(__right_value1=sVarArgTypeName_initialize((struct sVarArgTypeName* )come_increment_ref_count((struct sVarArgTypeName *)come_calloc(1, sizeof(struct sVarArgTypeName )*(1), "08call.nc", 2801, 2634, "struct sVarArgTypeName* "), "08call.nc", 2801, 2635),type,info))), "08call.nc", 2801, 2637);
            _inf_value19->_protocol_obj=_inf_obj_value19;
            _inf_value19->finalize=(void*)sVarArgTypeName_finalize;
            _inf_value19->clone=(void*)sVarArgTypeName_clone;
            _inf_value19->compile=(void*)sVarArgTypeName_compile;
            _inf_value19->sline=(void*)sNodeBase_sline;
            _inf_value19->sline_real=(void*)sNodeBase_sline_real;
            _inf_value19->sname=(void*)sNodeBase_sname;
            _inf_value19->terminated=(void*)sNodeBase_terminated;
            _inf_value19->kind=(void*)sVarArgTypeName_kind;
            _inf_value19->left_value=(void*)sNodeBase_left_value;
            __right_value2 = (void*)0;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value19)), "08call.nc", 2801, 2646);
            come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 2801, 2647);
            (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 2801, 2648));
            (buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 2801, 2649));
            come_call_finalizer(sVarArgTypeName_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "08call.nc}", 2801, 2650);
            ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "08call.nc", 2801, 2651):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "08call.nc", 2801, 2652):(void*)0);
            return __result_obj__0;
            come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 2981, 2653);
            (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 2981, 2654));
        }
        else if(string_operator_equals(buf,"sizeof")||string_operator_equals(buf,"_Alignof")||string_operator_equals(buf,"_Alignas")||string_operator_equals(buf,"__alignof__")||string_operator_equals(buf,"offsetof")||string_operator_equals(buf,"__builtin_offsetof")||string_operator_equals(buf,"_Generic")) {
            __right_value0 = (void*)0;
            node_239=(struct sNode*)come_increment_ref_count(string_node_v21(buf,head,head_sline,info), "08call.nc", 2806, 2655);
            info->sline_real=sline_real;
                        __result_obj__0 = (struct sNode*)come_increment_ref_count(node_239, "08call.nc", 2807, 2656);
            ((node_239) ? node_239 = come_decrement_ref_count(node_239, ((struct sNode*)node_239)->finalize, ((struct sNode*)node_239)->_protocol_obj, 0, 1,(void*)0, "08call.nc", 2807, 2657):(void*)0);
            (buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 2807, 2658));
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "08call.nc", 2807, 2659):(void*)0);
            return __result_obj__0;
            ((node_239) ? node_239 = come_decrement_ref_count(node_239, ((struct sNode*)node_239)->finalize, ((struct sNode*)node_239)->_protocol_obj, 0, 0,(void*)0, "08call.nc", 2981, 2660):(void*)0);
        }
        else if(inline_asm) {
            volatile_=(_Bool)0;
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            buf2=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "08call.nc", 2811, 2661, "struct buffer* "), "08call.nc", 2811, 2662)), "08call.nc", 2811, 2663);
            if(*info->p->p!=40) {
                __right_value0 = (void*)0;
                word=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "08call.nc", 2814, 2664);
                if(string_operator_equals(word,"volatile")) {
                    volatile_=(_Bool)1;
                }
                (word = come_decrement_ref_count(word, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 2821, 2665));
            }
            expected_next_character(40,info);
            buffer_append_str(buf2,"(\n");
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            exps=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "08call.nc", 2824, 2666, "struct list$1sNode$ph*"), "08call.nc", 2824, 2667)), "08call.nc", 2824, 2668);
            dquort=(_Bool)0;
            while((_Bool)1) {
                if(dquort) {
                    if(*info->p->p==92) {
                        buffer_append_char(buf2,*info->p->p);
                        info->p->p++;
                        if(*info->p->p==0) {
                            err_msg(info,"invalid source end");
                                                        __result_obj__0 = (struct sNode*)come_increment_ref_count(((void*)0), "08call.nc", 2834, 2669);
                            come_call_finalizer(buffer_finalize, buf2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 2834, 2670);
                            come_call_finalizer(list$1sNode$ph$p_finalize, exps, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 2834, 2671);
                            (buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 2834, 2672));
                            neo_current_frame = fr.prev;
                            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "08call.nc", 2834, 2673):(void*)0);
                            return __result_obj__0;
                        }
                        else {
                            buffer_append_char(buf2,*info->p->p);
                            info->p->p++;
                        }
                    }
                    else if(*info->p->p==34) {
                        buffer_append_char(buf2,*info->p->p);
                        info->p->p++;
                        buffer_append_char(buf2,10);
                        skip_spaces_and_lf(info);
                        dquort=(_Bool)0;
                    }
                    else {
                        buffer_append_char(buf2,*info->p->p);
                        info->p->p++;
                    }
                }
                else if(*info->p->p==34) {
                    dquort=(_Bool)1;
                    for(i=0                    ;i<info->block_level+1;i++){
                        buffer_append_str(buf2,"    ");
                    }
                    buffer_append_char(buf2,*info->p->p);
                    info->p->p++;
                }
                else if(*info->p->p==40) {
                    buffer_append_char(buf2,40);
                    info->p->p++;
                    __right_value0 = (void*)0;
                    exp_240=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "08call.nc", 2867, 2674);
                    Value=node_compile(exp_240,info);
                    if(!Value) {
                                                __result_obj__0 = (struct sNode*)come_increment_ref_count(((void*)0), "08call.nc", 2870, 2675);
                        ((exp_240) ? exp_240 = come_decrement_ref_count(exp_240, ((struct sNode*)exp_240)->finalize, ((struct sNode*)exp_240)->_protocol_obj, 0, 0,(void*)0, "08call.nc", 2870, 2676):(void*)0);
                        come_call_finalizer(buffer_finalize, buf2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 2870, 2677);
                        come_call_finalizer(list$1sNode$ph$p_finalize, exps, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 2870, 2678);
                        (buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 2870, 2679));
                        neo_current_frame = fr.prev;
                        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "08call.nc", 2870, 2680):(void*)0);
                        return __result_obj__0;
                    }
                    __right_value0 = (void*)0;
                    come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "08call.nc", 2873, 2681);
                    buffer_append_str(buf2,come_value->c_value);
                    expected_next_character(41,info);
                    buffer_append_char(buf2,41);
                    ((exp_240) ? exp_240 = come_decrement_ref_count(exp_240, ((struct sNode*)exp_240)->finalize, ((struct sNode*)exp_240)->_protocol_obj, 0, 0,(void*)0, "08call.nc", 2919, 2682):(void*)0);
                    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 2919, 2683);
                }
                else if(*info->p->p==41) {
                    for(i_241=0                    ;i_241<info->block_level;i_241++){
                        buffer_append_str(buf2,"    ");
                    }
                    buffer_append_char(buf2,41);
                    info->p->p++;
                    skip_spaces_and_lf(info);
                    break;
                }
                else if(*info->p->p==10) {
                    info->sline++;
                    buffer_append_char(buf2,*info->p->p);
                    info->p->p++;
                    skip_spaces_and_lf(info);
                }
                else if(*info->p->p==58) {
                    for(i_242=0                    ;i_242<info->block_level+1;i_242++){
                        buffer_append_str(buf2,"    ");
                    }
                    buffer_append_char(buf2,*info->p->p);
                    info->p->p++;
                    skip_spaces_and_lf(info);
                }
                else if(*info->p->p==44) {
                    for(i_243=0                    ;i_243<info->block_level+1;i_243++){
                        buffer_append_str(buf2,"    ");
                    }
                    buffer_append_char(buf2,*info->p->p);
                    info->p->p++;
                    skip_spaces_and_lf(info);
                }
                else if(*info->p->p==0) {
                    err_msg(info,"invalid source end at inline assembler");
                    exit(2);
                }
                else {
                    err_msg(info,"unexpected character(%c)",*info->p->p);
                    exit(2);
                }
            }
            skip_spaces_and_lf(info);
            info->sline_real=sline_real;
                        __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            _inf_value20=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08call.nc", 2923, 2687, "struct sNode");
            _inf_obj_value20=(struct sInlineAssembler*)come_increment_ref_count(((struct sInlineAssembler*)(__right_value2=sInlineAssembler_initialize((struct sInlineAssembler* )come_increment_ref_count((struct sInlineAssembler *)come_calloc(1, sizeof(struct sInlineAssembler )*(1), "08call.nc", 2923, 2684, "struct sInlineAssembler* "), "08call.nc", 2923, 2685),(char* )come_increment_ref_count(buffer_to_string(buf2), "08call.nc", 2923, 2686),volatile_,info))), "08call.nc", 2923, 2688);
            _inf_value20->_protocol_obj=_inf_obj_value20;
            _inf_value20->finalize=(void*)sInlineAssembler_finalize;
            _inf_value20->clone=(void*)sInlineAssembler_clone;
            _inf_value20->compile=(void*)sInlineAssembler_compile;
            _inf_value20->sline=(void*)sNodeBase_sline;
            _inf_value20->sline_real=(void*)sNodeBase_sline_real;
            _inf_value20->sname=(void*)sNodeBase_sname;
            _inf_value20->terminated=(void*)sNodeBase_terminated;
            _inf_value20->kind=(void*)sInlineAssembler_kind;
            _inf_value20->left_value=(void*)sNodeBase_left_value;
            __right_value3 = (void*)0;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value3=_inf_value20)), "08call.nc", 2923, 2698);
            come_call_finalizer(buffer_finalize, buf2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 2923, 2699);
            come_call_finalizer(list$1sNode$ph$p_finalize, exps, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 2923, 2700);
            (buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 2923, 2701));
            come_call_finalizer(sInlineAssembler_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0, "08call.nc}", 2923, 2702);
            ((__right_value3) ? __right_value3 = come_decrement_ref_count(__right_value3, ((struct sNode*)__right_value3)->finalize, ((struct sNode*)__right_value3)->_protocol_obj, 1, 0,(void*)0, "08call.nc", 2923, 2703):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "08call.nc", 2923, 2704):(void*)0);
            return __result_obj__0;
            come_call_finalizer(buffer_finalize, buf2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 2981, 2705);
            come_call_finalizer(list$1sNode$ph$p_finalize, exps, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 2981, 2706);
        }
        else if(fun_name_with_type_name) {
            info->p->p=head;
            info->sline=head_sline;
            __right_value0 = (void*)0;
            multiple_assign_var17=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            type_244=(struct sType* )come_increment_ref_count(multiple_assign_var17->v1, "08call.nc", 2929, 2707);
            name_245=(char* )come_increment_ref_count(multiple_assign_var17->v2, "08call.nc", 2929, 2708);
            err_246=multiple_assign_var17->v3;
            come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "08call.nc}", 2929, 2709);
            expected_next_character(58,info);
            expected_next_character(58,info);
            __right_value0 = (void*)0;
            base_fun_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "08call.nc", 2934, 2710);
            __right_value0 = (void*)0;
            fun_name=(char* )come_increment_ref_count(create_method_name(type_244,(_Bool)0,base_fun_name,info,(_Bool)1), "08call.nc", 2936, 2711);
            __right_value0 = (void*)0;
            node_247=(struct sNode*)come_increment_ref_count(parse_function_call(fun_name,info,(_Bool)0), "08call.nc", 2938, 2712);
            info->sline_real=sline_real;
                        __result_obj__0 = (struct sNode*)come_increment_ref_count(node_247, "08call.nc", 2941, 2713);
            come_call_finalizer(sType_finalize, type_244, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 2941, 2714);
            (name_245 = come_decrement_ref_count(name_245, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 2941, 2715));
            (base_fun_name = come_decrement_ref_count(base_fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 2941, 2716));
            (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 2941, 2717));
            ((node_247) ? node_247 = come_decrement_ref_count(node_247, ((struct sNode*)node_247)->finalize, ((struct sNode*)node_247)->_protocol_obj, 0, 1,(void*)0, "08call.nc", 2941, 2718):(void*)0);
            (buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 2941, 2719));
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "08call.nc", 2941, 2720):(void*)0);
            return __result_obj__0;
            come_call_finalizer(sType_finalize, type_244, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 2981, 2721);
            (name_245 = come_decrement_ref_count(name_245, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 2981, 2722));
            (base_fun_name = come_decrement_ref_count(base_fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 2981, 2723));
            (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 2981, 2724));
            ((node_247) ? node_247 = come_decrement_ref_count(node_247, ((struct sNode*)node_247)->finalize, ((struct sNode*)node_247)->_protocol_obj, 0, 0,(void*)0, "08call.nc", 2981, 2725):(void*)0);
        }
        else if(*info->p->p==58&&*(info->p->p+1)==58) {
            info->p->p+=2;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            fun_name_248=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "08call.nc", 2947, 2726, "struct buffer* "), "08call.nc", 2947, 2727)), "08call.nc", 2947, 2728);
            buffer_append_str(fun_name_248,buf);
            buffer_append_str(fun_name_248,"_");
            __right_value0 = (void*)0;
            buf2_249=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "08call.nc", 2953, 2729);
            buffer_append_str(fun_name_248,buf2_249);
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            node_250=(struct sNode*)come_increment_ref_count(parse_function_call(((char* )(__right_value0=buffer_to_string(fun_name_248))),info,(_Bool)0), "08call.nc", 2957, 2730);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "08call.nc", 2957, 2731));
            info->sline_real=sline_real;
                        __result_obj__0 = (struct sNode*)come_increment_ref_count(node_250, "08call.nc", 2960, 2732);
            come_call_finalizer(buffer_finalize, fun_name_248, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 2960, 2733);
            (buf2_249 = come_decrement_ref_count(buf2_249, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 2960, 2734));
            ((node_250) ? node_250 = come_decrement_ref_count(node_250, ((struct sNode*)node_250)->finalize, ((struct sNode*)node_250)->_protocol_obj, 0, 1,(void*)0, "08call.nc", 2960, 2735):(void*)0);
            (buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 2960, 2736));
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "08call.nc", 2960, 2737):(void*)0);
            return __result_obj__0;
            come_call_finalizer(buffer_finalize, fun_name_248, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 2981, 2738);
            (buf2_249 = come_decrement_ref_count(buf2_249, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 2981, 2739));
            ((node_250) ? node_250 = come_decrement_ref_count(node_250, ((struct sNode*)node_250)->finalize, ((struct sNode*)node_250)->_protocol_obj, 0, 0,(void*)0, "08call.nc", 2981, 2740):(void*)0);
        }
        else if(call_method_generics_fun_call) {
            __right_value0 = (void*)0;
            node_251=(struct sNode*)come_increment_ref_count(parse_function_call(buf,info,(_Bool)0), "08call.nc", 2963, 2741);
            info->sline_real=sline_real;
                        __result_obj__0 = (struct sNode*)come_increment_ref_count(node_251, "08call.nc", 2966, 2742);
            ((node_251) ? node_251 = come_decrement_ref_count(node_251, ((struct sNode*)node_251)->finalize, ((struct sNode*)node_251)->_protocol_obj, 0, 1,(void*)0, "08call.nc", 2966, 2743):(void*)0);
            (buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 2966, 2744));
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "08call.nc", 2966, 2745):(void*)0);
            return __result_obj__0;
            ((node_251) ? node_251 = come_decrement_ref_count(node_251, ((struct sNode*)node_251)->finalize, ((struct sNode*)node_251)->_protocol_obj, 0, 0,(void*)0, "08call.nc", 2981, 2746):(void*)0);
        }
        else if(!is_special_word&&*info->p->p==40&&!is_type_name_||(is_portable_symbol&&*info->p->p==40)) {
            __right_value0 = (void*)0;
            node_252=(struct sNode*)come_increment_ref_count(parse_function_call(buf,info,(_Bool)0), "08call.nc", 2970, 2747);
            info->sline_real=sline_real;
                        __result_obj__0 = (struct sNode*)come_increment_ref_count(node_252, "08call.nc", 2973, 2748);
            ((node_252) ? node_252 = come_decrement_ref_count(node_252, ((struct sNode*)node_252)->finalize, ((struct sNode*)node_252)->_protocol_obj, 0, 1,(void*)0, "08call.nc", 2973, 2749):(void*)0);
            (buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 2973, 2750));
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "08call.nc", 2973, 2751):(void*)0);
            return __result_obj__0;
            ((node_252) ? node_252 = come_decrement_ref_count(node_252, ((struct sNode*)node_252)->finalize, ((struct sNode*)node_252)->_protocol_obj, 0, 0,(void*)0, "08call.nc", 2981, 2752):(void*)0);
        }
        else {
            __right_value0 = (void*)0;
            node_253=(struct sNode*)come_increment_ref_count(string_node_v21(buf,head,head_sline,info), "08call.nc", 2976, 2753);
            info->sline_real=sline_real;
                        __result_obj__0 = (struct sNode*)come_increment_ref_count(node_253, "08call.nc", 2979, 2754);
            ((node_253) ? node_253 = come_decrement_ref_count(node_253, ((struct sNode*)node_253)->finalize, ((struct sNode*)node_253)->_protocol_obj, 0, 1,(void*)0, "08call.nc", 2979, 2755):(void*)0);
            (buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 2979, 2756));
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "08call.nc", 2979, 2757):(void*)0);
            return __result_obj__0;
            ((node_253) ? node_253 = come_decrement_ref_count(node_253, ((struct sNode*)node_253)->finalize, ((struct sNode*)node_253)->_protocol_obj, 0, 0,(void*)0, "08call.nc", 2981, 2758):(void*)0);
        }
        (buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 2988, 2759));
    }
    else {
        __right_value0 = (void*)0;
        node_254=(struct sNode*)come_increment_ref_count(expression_node_v97(info), "08call.nc", 2983, 2760);
                __result_obj__0 = (struct sNode*)come_increment_ref_count(node_254, "08call.nc", 2985, 2761);
        ((node_254) ? node_254 = come_decrement_ref_count(node_254, ((struct sNode*)node_254)->finalize, ((struct sNode*)node_254)->_protocol_obj, 0, 1,(void*)0, "08call.nc", 2985, 2762):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "08call.nc", 2985, 2763):(void*)0);
        return __result_obj__0;
        ((node_254) ? node_254 = come_decrement_ref_count(node_254, ((struct sNode*)node_254)->finalize, ((struct sNode*)node_254)->_protocol_obj, 0, 0,(void*)0, "08call.nc", 2988, 2764):(void*)0);
    }
    err_msg(info,"unexpected operator(%c)",*info->p->p);
    exit(2);
        __result_obj__0 = (struct sNode*)come_increment_ref_count((struct sNode*)((void*)0), "08call.nc", 2991, 2765);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "08call.nc", 2991, 2766):(void*)0);
    return __result_obj__0;
}

static struct sVar*  map$2char$phsVar$ph$p_operator_load_element(struct map$2char$phsVar$ph* self, char*  key  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph$p_operator_load_element"; neo_current_frame = &fr;
    struct sVar*  default_value  ;
    struct sVar*  __result_obj__0  ;
    unsigned int hash;
    unsigned int it;
    memset(&default_value,0,sizeof(struct sVar* ));
    if(self==((void*)0)) {
                __result_obj__0 = (struct sVar* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3513, 2132);
        come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3513, 2133);
        neo_current_frame = fr.prev;
        come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3513, 2134);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char* )key))%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if(string_equals(self->keys[it],key)) {
                                __result_obj__0 = (struct sVar* )come_increment_ref_count(self->items[it], "/usr/local/include/neo-c.h", 3524, 2135);
                come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3524, 2136);
                neo_current_frame = fr.prev;
                come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3524, 2137);
                return __result_obj__0;
            }
            it++;
            if(it>=self->size) {
                it=0;
            }
            else if(it==hash) {
                                __result_obj__0 = (struct sVar* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3533, 2138);
                come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3533, 2139);
                neo_current_frame = fr.prev;
                come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3533, 2140);
                return __result_obj__0;
            }
        }
        else {
                        __result_obj__0 = (struct sVar* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3537, 2141);
            come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3537, 2142);
            neo_current_frame = fr.prev;
            come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3537, 2143);
            return __result_obj__0;
        }
    }
        __result_obj__0 = (struct sVar* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3541, 2144);
    come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3541, 2145);
    neo_current_frame = fr.prev;
    come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3541, 2146);
    return __result_obj__0;
}

static struct sVar*  map$2char$phsVar$ph_operator_load_element(struct map$2char$phsVar$ph* self, char*  key  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph_operator_load_element"; neo_current_frame = &fr;
    struct sVar*  default_value  ;
    struct sVar*  __result_obj__0  ;
    unsigned int hash;
    unsigned int it;
    memset(&default_value,0,sizeof(struct sVar* ));
    if(self==((void*)0)) {
                __result_obj__0 = (struct sVar* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3513, 2147);
        come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3513, 2148);
        neo_current_frame = fr.prev;
        come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3513, 2149);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char* )key))%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if(string_equals(self->keys[it],key)) {
                                __result_obj__0 = (struct sVar* )come_increment_ref_count(self->items[it], "/usr/local/include/neo-c.h", 3524, 2150);
                come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3524, 2151);
                neo_current_frame = fr.prev;
                come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3524, 2152);
                return __result_obj__0;
            }
            it++;
            if(it>=self->size) {
                it=0;
            }
            else if(it==hash) {
                                __result_obj__0 = (struct sVar* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3533, 2153);
                come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3533, 2154);
                neo_current_frame = fr.prev;
                come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3533, 2155);
                return __result_obj__0;
            }
        }
        else {
                        __result_obj__0 = (struct sVar* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3537, 2156);
            come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3537, 2157);
            neo_current_frame = fr.prev;
            come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3537, 2158);
            return __result_obj__0;
        }
    }
        __result_obj__0 = (struct sVar* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3541, 2159);
    come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3541, 2160);
    neo_current_frame = fr.prev;
    come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3541, 2161);
    return __result_obj__0;
}

static struct sInnerAttribute* sInnerAttribute_clone(struct sInnerAttribute* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sInnerAttribute_clone"; neo_current_frame = &fr;
    struct sInnerAttribute* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sInnerAttribute*  result  ;
    char*  __dec_obj187  ;
    char*  __dec_obj188  ;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sInnerAttribute* )come_increment_ref_count((struct sInnerAttribute *)come_calloc(1, sizeof(struct sInnerAttribute )*(1), "sInnerAttribute_clone", 5, 2196, "struct sInnerAttribute* "), "sInnerAttribute_clone", 5, 2197);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj187=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sInnerAttribute_clone", 7, 2198, "char* "), "sInnerAttribute_clone", 7, 2200);
        __dec_obj187 = come_decrement_ref_count(__dec_obj187, (void*)0, (void*)0, 0,0, (void*)0, "sInnerAttribute_clone", 7, 2199);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->attr!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj188=result->attr,
        result->attr=(char* )come_increment_ref_count((char* )come_memdup(self->attr, "sInnerAttribute_clone", 9, 2201, "char* "), "sInnerAttribute_clone", 9, 2203);
        __dec_obj188 = come_decrement_ref_count(__dec_obj188, (void*)0, (void*)0, 0,0, (void*)0, "sInnerAttribute_clone", 9, 2202);
    }
        __result_obj__0 = result;
    come_call_finalizer(sInnerAttribute_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sInnerAttribute_clone}", 10, 2204);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sCSourceNode* sCSourceNode_clone(struct sCSourceNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sCSourceNode_clone"; neo_current_frame = &fr;
    struct sCSourceNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sCSourceNode*  result  ;
    char*  __dec_obj189  ;
    char*  __dec_obj190  ;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sCSourceNode* )come_increment_ref_count((struct sCSourceNode *)come_calloc(1, sizeof(struct sCSourceNode )*(1), "sCSourceNode_clone", 5, 2219, "struct sCSourceNode* "), "sCSourceNode_clone", 5, 2220);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj189=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sCSourceNode_clone", 7, 2221, "char* "), "sCSourceNode_clone", 7, 2223);
        __dec_obj189 = come_decrement_ref_count(__dec_obj189, (void*)0, (void*)0, 0,0, (void*)0, "sCSourceNode_clone", 7, 2222);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->contents!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj190=result->contents,
        result->contents=(char* )come_increment_ref_count((char* )come_memdup(self->contents, "sCSourceNode_clone", 9, 2224, "char* "), "sCSourceNode_clone", 9, 2226);
        __dec_obj190 = come_decrement_ref_count(__dec_obj190, (void*)0, (void*)0, 0,0, (void*)0, "sCSourceNode_clone", 9, 2225);
    }
        __result_obj__0 = result;
    come_call_finalizer(sCSourceNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sCSourceNode_clone}", 10, 2227);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sComeCallNode* sComeCallNode_clone(struct sComeCallNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sComeCallNode_clone"; neo_current_frame = &fr;
    struct sComeCallNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sComeCallNode*  result  ;
    char*  __dec_obj193  ;
    struct buffer*  __dec_obj194  ;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sComeCallNode* )come_increment_ref_count((struct sComeCallNode *)come_calloc(1, sizeof(struct sComeCallNode )*(1), "sComeCallNode_clone", 5, 2276, "struct sComeCallNode* "), "sComeCallNode_clone", 5, 2277);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj193=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sComeCallNode_clone", 7, 2278, "char* "), "sComeCallNode_clone", 7, 2280);
        __dec_obj193 = come_decrement_ref_count(__dec_obj193, (void*)0, (void*)0, 0,0, (void*)0, "sComeCallNode_clone", 7, 2279);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->come_block!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj194=result->come_block,
        result->come_block=(struct buffer* )come_increment_ref_count(buffer_clone(self->come_block), "sComeCallNode_clone", 9, 2282);
        come_call_finalizer(buffer_finalize, __dec_obj194,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sComeCallNode_clone", 9, 2281);
    }
    if(self!=((void*)0)) {
        result->come_block_sline=self->come_block_sline;
    }
        __result_obj__0 = result;
    come_call_finalizer(sComeCallNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sComeCallNode_clone}", 11, 2283);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sComeJoinNode* sComeJoinNode_clone(struct sComeJoinNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sComeJoinNode_clone"; neo_current_frame = &fr;
    struct sComeJoinNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sComeJoinNode*  result  ;
    char*  __dec_obj195  ;
    struct sNode* __dec_obj196;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sComeJoinNode* )come_increment_ref_count((struct sComeJoinNode *)come_calloc(1, sizeof(struct sComeJoinNode )*(1), "sComeJoinNode_clone", 5, 2299, "struct sComeJoinNode* "), "sComeJoinNode_clone", 5, 2300);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj195=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sComeJoinNode_clone", 7, 2301, "char* "), "sComeJoinNode_clone", 7, 2303);
        __dec_obj195 = come_decrement_ref_count(__dec_obj195, (void*)0, (void*)0, 0,0, (void*)0, "sComeJoinNode_clone", 7, 2302);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->node!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj196=result->node,
        result->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node), "sComeJoinNode_clone", 9, 2305);
        (__dec_obj196 ? __dec_obj196 = come_decrement_ref_count(__dec_obj196, ((struct sNode*)__dec_obj196)->finalize, ((struct sNode*)__dec_obj196)->_protocol_obj, 0,0, (void*)0, "sComeJoinNode_clone", 9, 2304) :0);
    }
        __result_obj__0 = result;
    come_call_finalizer(sComeJoinNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sComeJoinNode_clone}", 10, 2306);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct list$1sBlock$ph* list$1sBlock$ph_initialize(struct list$1sBlock$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sBlock$ph_initialize"; neo_current_frame = &fr;
    struct list$1sBlock$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = (struct list$1sBlock$ph*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 1483, 2320);
    come_call_finalizer(list$1sBlock$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1483, 2321);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sBlock$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1483, 2322);
    return __result_obj__0;
}

static struct list$1sBlock$ph* list$1sBlock$ph_add(struct list$1sBlock$ph* self, struct sBlock*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sBlock$ph_add"; neo_current_frame = &fr;
    struct list$1sBlock$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1sBlock$ph* litem;
    struct sBlock*  __dec_obj198  ;
    struct list_item$1sBlock$ph* litem_230;
    struct sBlock*  __dec_obj199  ;
    struct list_item$1sBlock$ph* litem_231;
    struct sBlock*  __dec_obj200  ;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        come_call_finalizer(sBlock_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1529, 2333);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1sBlock$ph*)come_increment_ref_count(((struct list_item$1sBlock$ph*)(__right_value0=(struct list_item$1sBlock$ph*)come_calloc(1, sizeof(struct list_item$1sBlock$ph)*(1), "/usr/local/include/neo-c.h", 1532, 2334, "struct list_item$1sBlock$ph*"))), "/usr/local/include/neo-c.h", 1532, 2335);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj198=litem->item,
        litem->item=(struct sBlock* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1536, 2337);
        come_call_finalizer(sBlock_finalize, __dec_obj198,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1536, 2336);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_230=(struct list_item$1sBlock$ph*)come_increment_ref_count(((struct list_item$1sBlock$ph*)(__right_value0=(struct list_item$1sBlock$ph*)come_calloc(1, sizeof(struct list_item$1sBlock$ph)*(1), "/usr/local/include/neo-c.h", 1542, 2338, "struct list_item$1sBlock$ph*"))), "/usr/local/include/neo-c.h", 1542, 2339);
        litem_230->prev=self->head;
        litem_230->next=((void*)0);
        __dec_obj199=litem_230->item,
        litem_230->item=(struct sBlock* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1546, 2341);
        come_call_finalizer(sBlock_finalize, __dec_obj199,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1546, 2340);
        self->tail=litem_230;
        self->head->next=litem_230;
    }
    else {
        __right_value0 = (void*)0;
        litem_231=(struct list_item$1sBlock$ph*)come_increment_ref_count(((struct list_item$1sBlock$ph*)(__right_value0=(struct list_item$1sBlock$ph*)come_calloc(1, sizeof(struct list_item$1sBlock$ph)*(1), "/usr/local/include/neo-c.h", 1552, 2342, "struct list_item$1sBlock$ph*"))), "/usr/local/include/neo-c.h", 1552, 2343);
        litem_231->prev=self->tail;
        litem_231->next=((void*)0);
        __dec_obj200=litem_231->item,
        litem_231->item=(struct sBlock* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1556, 2345);
        come_call_finalizer(sBlock_finalize, __dec_obj200,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1556, 2344);
        self->tail->next=litem_231;
        self->tail=litem_231;
    }
    self->len++;
        __result_obj__0 = self;
    come_call_finalizer(sBlock_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1564, 2346);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sComePollNode* sComePollNode_clone(struct sComePollNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sComePollNode_clone"; neo_current_frame = &fr;
    struct sComePollNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sComePollNode*  result  ;
    char*  __dec_obj201  ;
    struct list$1sNode$ph* __dec_obj202;
    struct list$1sBlock$ph* __dec_obj215;
    struct sBlock*  __dec_obj216  ;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sComePollNode* )come_increment_ref_count((struct sComePollNode *)come_calloc(1, sizeof(struct sComePollNode )*(1), "sComePollNode_clone", 5, 2359, "struct sComePollNode* "), "sComePollNode_clone", 5, 2360);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj201=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sComePollNode_clone", 7, 2361, "char* "), "sComePollNode_clone", 7, 2363);
        __dec_obj201 = come_decrement_ref_count(__dec_obj201, (void*)0, (void*)0, 0,0, (void*)0, "sComePollNode_clone", 7, 2362);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->vars!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj202=result->vars,
        result->vars=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->vars), "sComePollNode_clone", 9, 2365);
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj202,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sComePollNode_clone", 9, 2364);
    }
    if(self!=((void*)0)&&self->blocks!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj215=result->blocks,
        result->blocks=(struct list$1sBlock$ph*)come_increment_ref_count(list$1sBlock$ph$p_clone(self->blocks), "sComePollNode_clone", 10, 2526);
        come_call_finalizer(list$1sBlock$ph_finalize, __dec_obj215,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sComePollNode_clone", 10, 2525);
    }
    if(self!=((void*)0)&&self->else_block!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj216=result->else_block,
        result->else_block=(struct sBlock* )come_increment_ref_count(sBlock_clone(self->else_block), "sComePollNode_clone", 11, 2528);
        come_call_finalizer(sBlock_finalize, __dec_obj216,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sComePollNode_clone", 11, 2527);
    }
    if(self!=((void*)0)) {
        result->time_out=self->time_out;
    }
        __result_obj__0 = result;
    come_call_finalizer(sComePollNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sComePollNode_clone}", 13, 2529);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct list$1sBlock$ph* list$1sBlock$ph$p_clone(struct list$1sBlock$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sBlock$ph$p_clone"; neo_current_frame = &fr;
    struct list$1sBlock$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1sBlock$ph* result;
    struct list_item$1sBlock$ph* it;
    if(self==((void*)0)) {
                __result_obj__0 = (struct list$1sBlock$ph*)come_increment_ref_count(((void*)0), "/usr/local/include/neo-c.h", 1509, 2366);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1sBlock$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1509, 2367);
        return __result_obj__0;
    }
    result=(struct list$1sBlock$ph*)come_increment_ref_count(list$1sBlock$ph_initialize((struct list$1sBlock$ph*)come_increment_ref_count((struct list$1sBlock$ph*)come_calloc(1, sizeof(struct list$1sBlock$ph)*(1), "/usr/local/include/neo-c.h", 1511, 2368, "struct list$1sBlock$ph*"), "/usr/local/include/neo-c.h", 1511, 2369)), "/usr/local/include/neo-c.h", 1511, 2370);
    it=self->head;
    while(it!=((void*)0)) {
        if(1) {
            __right_value0 = (void*)0;
            list$1sBlock$ph_add(result,(struct sBlock* )come_increment_ref_count(sBlock_clone(it->item), "/usr/local/include/neo-c.h", 1516, 2520));
        }
        else {
            __right_value0 = (void*)0;
            list$1sBlock$ph_add(result,(struct sBlock* )come_increment_ref_count(sBlock_clone(it->item), "/usr/local/include/neo-c.h", 1519, 2521));
        }
        it=it->next;
    }
        __result_obj__0 = (struct list$1sBlock$ph*)come_increment_ref_count(result, "/usr/local/include/neo-c.h", 1525, 2522);
    come_call_finalizer(list$1sBlock$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1525, 2523);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sBlock$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1525, 2524);
    return __result_obj__0;
}

static struct sBlock*  sBlock_clone(struct sBlock*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sBlock_clone"; neo_current_frame = &fr;
    struct sBlock*  __result_obj__0  ;
    void* __right_value0 = (void*)0;
    struct sBlock*  result  ;
    struct list$1sNode$ph* __dec_obj203;
    struct sVarTable*  __dec_obj214  ;
    if(self==(void*)0) {
                __result_obj__0 = (struct sBlock* )come_increment_ref_count((void*)0, "sBlock_clone", 4, 2371);
        neo_current_frame = fr.prev;
        come_call_finalizer(sBlock_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sBlock_clone}", 4, 2372);
        return __result_obj__0;
    }
    result=(struct sBlock* )come_increment_ref_count((struct sBlock *)come_calloc(1, sizeof(struct sBlock )*(1), "sBlock_clone", 5, 2373, "struct sBlock* "), "sBlock_clone", 5, 2374);
    if(self!=((void*)0)&&self->mNodes!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj203=result->mNodes,
        result->mNodes=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_clone(self->mNodes), "sBlock_clone", 6, 2386);
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj203,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sBlock_clone", 6, 2385);
    }
    if(self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj214=result->mVarTable,
        result->mVarTable=(struct sVarTable* )come_increment_ref_count(sVarTable_clone(self->mVarTable), "sBlock_clone", 7, 2516);
        come_call_finalizer(sVarTable_finalize, __dec_obj214,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sBlock_clone", 7, 2515);
    }
    if(self!=((void*)0)) {
        result->mOmitSemicolon=self->mOmitSemicolon;
    }
        __result_obj__0 = (struct sBlock* )come_increment_ref_count(result, "sBlock_clone", 9, 2517);
    come_call_finalizer(sBlock_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sBlock_clone}", 9, 2518);
    neo_current_frame = fr.prev;
    come_call_finalizer(sBlock_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sBlock_clone}", 9, 2519);
    return __result_obj__0;
}

static struct list$1sNode$ph* list$1sNode$ph_clone(struct list$1sNode$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_clone"; neo_current_frame = &fr;
    struct list$1sNode$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1sNode$ph* result;
    struct list_item$1sNode$ph* it;
    if(self==((void*)0)) {
                __result_obj__0 = (struct list$1sNode$ph*)come_increment_ref_count(((void*)0), "/usr/local/include/neo-c.h", 1509, 2375);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1509, 2376);
        return __result_obj__0;
    }
    result=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "/usr/local/include/neo-c.h", 1511, 2377, "struct list$1sNode$ph*"), "/usr/local/include/neo-c.h", 1511, 2378)), "/usr/local/include/neo-c.h", 1511, 2379);
    it=self->head;
    while(it!=((void*)0)) {
        if(1) {
            __right_value0 = (void*)0;
            list$1sNode$ph_add(result,(struct sNode*)come_increment_ref_count(sNode_clone(it->item), "/usr/local/include/neo-c.h", 1516, 2380));
        }
        else {
            __right_value0 = (void*)0;
            list$1sNode$ph_add(result,(struct sNode*)come_increment_ref_count(sNode_clone(it->item), "/usr/local/include/neo-c.h", 1519, 2381));
        }
        it=it->next;
    }
        __result_obj__0 = (struct list$1sNode$ph*)come_increment_ref_count(result, "/usr/local/include/neo-c.h", 1525, 2382);
    come_call_finalizer(list$1sNode$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1525, 2383);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1525, 2384);
    return __result_obj__0;
}

static struct sVarTable*  sVarTable_clone(struct sVarTable*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sVarTable_clone"; neo_current_frame = &fr;
    struct sVarTable*  __result_obj__0  ;
    void* __right_value0 = (void*)0;
    struct sVarTable*  result  ;
    struct map$2char$phsVar$ph* __dec_obj213;
    if(self==(void*)0) {
                __result_obj__0 = (struct sVarTable* )come_increment_ref_count((void*)0, "sVarTable_clone", 4, 2387);
        neo_current_frame = fr.prev;
        come_call_finalizer(sVarTable_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sVarTable_clone}", 4, 2388);
        return __result_obj__0;
    }
    result=(struct sVarTable* )come_increment_ref_count((struct sVarTable *)come_calloc(1, sizeof(struct sVarTable )*(1), "sVarTable_clone", 5, 2389, "struct sVarTable* "), "sVarTable_clone", 5, 2390);
    if(self!=((void*)0)&&self->mVars!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj213=result->mVars,
        result->mVars=(struct map$2char$phsVar$ph*)come_increment_ref_count(map$2char$phsVar$ph_clone(self->mVars), "sVarTable_clone", 6, 2511);
        come_call_finalizer(map$2char$phsVar$ph_finalize, __dec_obj213,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sVarTable_clone", 6, 2510);
    }
    if(self!=((void*)0)) {
        result->mGlobal=self->mGlobal;
    }
    if(self!=((void*)0)) {
        result->mParent=self->mParent;
    }
        __result_obj__0 = (struct sVarTable* )come_increment_ref_count(result, "sVarTable_clone", 9, 2512);
    come_call_finalizer(sVarTable_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sVarTable_clone}", 9, 2513);
    neo_current_frame = fr.prev;
    come_call_finalizer(sVarTable_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sVarTable_clone}", 9, 2514);
    return __result_obj__0;
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph_clone(struct map$2char$phsVar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph_clone"; neo_current_frame = &fr;
    struct map$2char$phsVar$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct map$2char$phsVar$ph* result;
    struct list$1char$ph* __dec_obj205;
    char*  it  ;
    struct sVar*  default_value  ;
    struct sVar*  it2  ;
    if(self==((void*)0)) {
                __result_obj__0 = (struct map$2char$phsVar$ph*)come_increment_ref_count(((void*)0), "/usr/local/include/neo-c.h", 3071, 2391);
        neo_current_frame = fr.prev;
        come_call_finalizer(map$2char$phsVar$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3071, 2396);
        return __result_obj__0;
    }
    result=(struct map$2char$phsVar$ph*)come_increment_ref_count(map$2char$phsVar$ph_initialize((struct map$2char$phsVar$ph*)come_increment_ref_count((struct map$2char$phsVar$ph*)come_calloc(1, sizeof(struct map$2char$phsVar$ph)*(1), "/usr/local/include/neo-c.h", 3074, 2397, "struct map$2char$phsVar$ph*"), "/usr/local/include/neo-c.h", 3074, 2411)), "/usr/local/include/neo-c.h", 3074, 2412);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj205=result->key_list,
    result->key_list=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/neo-c.h", 3076, 2413, "struct list$1char$ph*"), "/usr/local/include/neo-c.h", 3076, 2414)), "/usr/local/include/neo-c.h", 3076, 2416);
    come_call_finalizer(list$1char$ph_finalize, __dec_obj205,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3076, 2415);
    for(it=map$2char$phsVar$ph_begin(self)    ;!map$2char$phsVar$ph_end(self);it=map$2char$phsVar$ph_next(self)){
        memset(&default_value,0,sizeof(struct sVar* ));
        __right_value0 = (void*)0;
        it2=(struct sVar* )come_increment_ref_count(map$2char$phsVar$ph_at(self,it,(struct sVar* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3082, 2432),(_Bool)0), "/usr/local/include/neo-c.h", 3082, 2433);
        if(1&&1) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            map$2char$phsVar$ph_put(result,(char* )come_increment_ref_count((char* )come_memdup(it, "/usr/local/include/neo-c.h", 3085, 2473, "char* "), "/usr/local/include/neo-c.h", 3085, 2474),(struct sVar* )come_increment_ref_count(sVar_clone(it2), "/usr/local/include/neo-c.h", 3085, 2493),(_Bool)0);
        }
        else if(1) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            map$2char$phsVar$ph_put(result,(char* )come_increment_ref_count((char* )come_memdup(it, "/usr/local/include/neo-c.h", 3088, 2494, "char* "), "/usr/local/include/neo-c.h", 3088, 2495),(struct sVar* )come_increment_ref_count(sVar_clone(it2), "/usr/local/include/neo-c.h", 3088, 2496),(_Bool)0);
        }
        else if(1) {
            __right_value0 = (void*)0;
            map$2char$phsVar$ph_put(result,(char* )come_increment_ref_count(it, "/usr/local/include/neo-c.h", 3091, 2497),(struct sVar* )come_increment_ref_count(sVar_clone(it2), "/usr/local/include/neo-c.h", 3091, 2498),(_Bool)0);
        }
        else {
            __right_value0 = (void*)0;
            map$2char$phsVar$ph_put(result,(char* )come_increment_ref_count(it, "/usr/local/include/neo-c.h", 3094, 2499),(struct sVar* )come_increment_ref_count(sVar_clone(it2), "/usr/local/include/neo-c.h", 3094, 2500),(_Bool)0);
        }
        come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3098, 2501);
        come_call_finalizer(sVar_finalize, it2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3098, 2502);
    }
        __result_obj__0 = (struct map$2char$phsVar$ph*)come_increment_ref_count(result, "/usr/local/include/neo-c.h", 3098, 2503);
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3098, 2504);
    neo_current_frame = fr.prev;
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3098, 2505);
    return __result_obj__0;
}

static void map$2char$phsVar$ph$p_finalize(struct map$2char$phsVar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph$p_finalize"; neo_current_frame = &fr;
    int i;
    int i_232;
    for(i=0    ;i<self->size;i++){
        if(self->item_existance[i]) {
            if(1) {
                come_call_finalizer(sVar_finalize, self->items[i], (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3047, 2392);
            }
        }
    }
    come_free((char*)self->items);
    for(i_232=0    ;i_232<self->size;i_232++){
        if(self->item_existance[i_232]) {
            if(1) {
                (self->keys[i_232] = come_decrement_ref_count(self->keys[i_232], (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3056, 2393));
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3062, 2394);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3064, 2395));
            neo_current_frame = fr.prev;
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph_initialize(struct map$2char$phsVar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    int i;
    void* __right_value1 = (void*)0;
    struct list$1char$ph* __dec_obj204;
    struct map$2char$phsVar$ph* __result_obj__0;
    self->keys=(char** )come_increment_ref_count(((char** )(__right_value0=(char* *)come_calloc(1, sizeof(char* )*(1*(128)), "/usr/local/include/neo-c.h", 2997, 2398, "char** "))), "/usr/local/include/neo-c.h", 2997, 2399);
    __right_value0 = (void*)0;
    self->items=(struct sVar** )come_increment_ref_count(((struct sVar** )(__right_value0=(struct sVar* *)come_calloc(1, sizeof(struct sVar* )*(1*(128)), "/usr/local/include/neo-c.h", 2998, 2400, "struct sVar** "))), "/usr/local/include/neo-c.h", 2998, 2401);
    __right_value0 = (void*)0;
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value0=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "/usr/local/include/neo-c.h", 2999, 2402, "_Bool*"))), "/usr/local/include/neo-c.h", 2999, 2403);
    for(i=0    ;i<128;i++){
        self->item_existance[i]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __right_value0 = (void*)0;
    __dec_obj204=self->key_list,
    self->key_list=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/neo-c.h", 3009, 2404, "struct list$1char$ph*"), "/usr/local/include/neo-c.h", 3009, 2405)), "/usr/local/include/neo-c.h", 3009, 2407);
    come_call_finalizer(list$1char$ph_finalize, __dec_obj204,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3009, 2406);
    self->it=0;
        __result_obj__0 = (struct map$2char$phsVar$ph*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 3013, 2408);
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3013, 2409);
    neo_current_frame = fr.prev;
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3013, 2410);
    return __result_obj__0;
}

static char*  map$2char$phsVar$ph_begin(struct map$2char$phsVar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph_begin"; neo_current_frame = &fr;
    char*  result  ;
    char*  __result_obj__0  ;
    char*  result_233  ;
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
    memset(&result_233,0,sizeof(char* ));
        __result_obj__0 = result_233;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static _Bool map$2char$phsVar$ph_end(struct map$2char$phsVar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph_end"; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
        neo_current_frame = fr.prev;
}

static char*  map$2char$phsVar$ph_next(struct map$2char$phsVar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph_next"; neo_current_frame = &fr;
    char*  result  ;
    char*  __result_obj__0  ;
    char*  result_234  ;
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
    memset(&result_234,0,sizeof(char* ));
        __result_obj__0 = result_234;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sVar*  map$2char$phsVar$ph_at(struct map$2char$phsVar$ph* self, char*  key  , struct sVar*  default_value  , _Bool by_pointer)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph_at"; neo_current_frame = &fr;
    struct sVar*  __result_obj__0  ;
    unsigned int hash;
    unsigned int it;
    if(self==((void*)0)) {
                __result_obj__0 = (struct sVar* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3139, 2417);
        come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3139, 2418);
        neo_current_frame = fr.prev;
        come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3139, 2419);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char* )key))%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if((!by_pointer&&string_equals(self->keys[it],key))||(by_pointer&&self->keys[it]==key)) {
                                __result_obj__0 = (struct sVar* )come_increment_ref_count(self->items[it], "/usr/local/include/neo-c.h", 3150, 2420);
                come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3150, 2421);
                neo_current_frame = fr.prev;
                come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3150, 2422);
                return __result_obj__0;
            }
            it++;
            if(it>=self->size) {
                it=0;
            }
            else if(it==hash) {
                                __result_obj__0 = (struct sVar* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3159, 2423);
                come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3159, 2424);
                neo_current_frame = fr.prev;
                come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3159, 2425);
                return __result_obj__0;
            }
        }
        else {
                        __result_obj__0 = (struct sVar* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3163, 2426);
            come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3163, 2427);
            neo_current_frame = fr.prev;
            come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3163, 2428);
            return __result_obj__0;
        }
    }
        __result_obj__0 = (struct sVar* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3167, 2429);
    come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3167, 2430);
    neo_current_frame = fr.prev;
    come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3167, 2431);
    return __result_obj__0;
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph_put(struct map$2char$phsVar$ph* self, char*  key  , struct sVar*  item  , _Bool by_pointer)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph_put"; neo_current_frame = &fr;
    struct map$2char$phsVar$ph* __result_obj__0;
    unsigned int hash;
    int it;
    _Bool same_key_exist;
    char*  it2  ;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3428, 2434));
        come_call_finalizer(sVar_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3428, 2435);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len*2>=self->size) {
        map$2char$phsVar$ph_rehash(self);
    }
    hash=string_get_hash_key(((char* )key))%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if((!by_pointer&&string_equals(self->keys[it],key))||(by_pointer&&self->keys[it]==key)) {
                if(1) {
                    (self->keys[it] = come_decrement_ref_count(self->keys[it], (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3443, 2450));
                    list$1char$ph_remove(self->key_list,self->keys[it],(_Bool)0);
                    self->keys[it]=(char* )come_increment_ref_count(key, "/usr/local/include/neo-c.h", 3445, 2451);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it],(_Bool)0);
                    self->keys[it]=key;
                }
                if(1) {
                    come_call_finalizer(sVar_finalize, self->items[it], (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3452, 2452);
                    self->items[it]=(struct sVar* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 3453, 2453);
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
                self->keys[it]=(char* )come_increment_ref_count(key, "/usr/local/include/neo-c.h", 3475, 2454);
            }
            else {
                self->keys[it]=key;
            }
            if(1) {
                self->items[it]=(struct sVar* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 3481, 2455);
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
        list$1char$ph_push_back(self->key_list,(char* )come_increment_ref_count(key, "/usr/local/include/neo-c.h", 3501, 2470));
    }
        __result_obj__0 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3504, 2471));
    come_call_finalizer(sVar_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3504, 2472);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void map$2char$phsVar$ph_rehash(struct map$2char$phsVar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph_rehash"; neo_current_frame = &fr;
    int size;
    void* __right_value0 = (void*)0;
    char**  keys  ;
    struct sVar**  items  ;
    _Bool* item_existance;
    int len;
    char*  it  ;
    struct sVar*  default_value  ;
    struct sVar*  it2  ;
    unsigned int hash;
    int n;
    struct sVar*  default_value_235  ;
    size=self->size*10;
    keys=(char** )come_increment_ref_count(((char** )(__right_value0=(char* *)come_calloc(1, sizeof(char* )*(1*(size)), "/usr/local/include/neo-c.h", 3270, 2436, "char** "))), "/usr/local/include/neo-c.h", 3270, 2437);
    __right_value0 = (void*)0;
    items=(struct sVar** )come_increment_ref_count(((struct sVar** )(__right_value0=(struct sVar* *)come_calloc(1, sizeof(struct sVar* )*(1*(size)), "/usr/local/include/neo-c.h", 3271, 2438, "struct sVar** "))), "/usr/local/include/neo-c.h", 3271, 2439);
    __right_value0 = (void*)0;
    item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value0=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size)), "/usr/local/include/neo-c.h", 3272, 2440, "_Bool*"))), "/usr/local/include/neo-c.h", 3272, 2441);
    len=0;
    for(it=map$2char$phsVar$ph_begin(self)    ;!map$2char$phsVar$ph_end(self);it=map$2char$phsVar$ph_next(self)){
        memset(&default_value,0,sizeof(struct sVar* ));
        __right_value0 = (void*)0;
        it2=(struct sVar* )come_increment_ref_count(map$2char$phsVar$ph_at(self,it,(struct sVar* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3279, 2442),(_Bool)0), "/usr/local/include/neo-c.h", 3279, 2443);
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
                memset(&default_value_235,0,sizeof(struct sVar* ));
                __right_value0 = (void*)0;
                items[n]=((struct sVar* )(__right_value0=map$2char$phsVar$ph_at(self,it,(struct sVar* )come_increment_ref_count(default_value_235, "/usr/local/include/neo-c.h", 3302, 2444),(_Bool)0)));
                len++;
                come_call_finalizer(sVar_finalize, default_value_235, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3305, 2445);
                break;
                come_call_finalizer(sVar_finalize, default_value_235, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3307, 2446);
            }
        }
        come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3310, 2447);
        come_call_finalizer(sVar_finalize, it2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3310, 2448);
    }
    come_free((char*)self->items);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3311, 2449));
    come_free((char*)self->keys);
    self->keys=keys;
    self->items=items;
    self->item_existance=item_existance;
    self->size=size;
    self->len=len;
            neo_current_frame = fr.prev;
}

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_push_back"; neo_current_frame = &fr;
    struct list$1char$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1char$ph* litem;
    char*  __dec_obj206  ;
    struct list_item$1char$ph* litem_236;
    char*  __dec_obj207  ;
    struct list_item$1char$ph* litem_237;
    char*  __dec_obj208  ;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1613, 2456));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 1617, 2457, "struct list_item$1char$ph*"))), "/usr/local/include/neo-c.h", 1617, 2458);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj206=litem->item,
        litem->item=(char* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1621, 2460);
        __dec_obj206 = come_decrement_ref_count(__dec_obj206, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1621, 2459);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_236=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 1627, 2461, "struct list_item$1char$ph*"))), "/usr/local/include/neo-c.h", 1627, 2462);
        litem_236->prev=self->head;
        litem_236->next=((void*)0);
        __dec_obj207=litem_236->item,
        litem_236->item=(char* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1631, 2464);
        __dec_obj207 = come_decrement_ref_count(__dec_obj207, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1631, 2463);
        self->tail=litem_236;
        self->head->next=litem_236;
    }
    else {
        __right_value0 = (void*)0;
        litem_237=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 1637, 2465, "struct list_item$1char$ph*"))), "/usr/local/include/neo-c.h", 1637, 2466);
        litem_237->prev=self->tail;
        litem_237->next=((void*)0);
        __dec_obj208=litem_237->item,
        litem_237->item=(char* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1641, 2468);
        __dec_obj208 = come_decrement_ref_count(__dec_obj208, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1641, 2467);
        self->tail->next=litem_237;
        self->tail=litem_237;
    }
    self->len++;
        __result_obj__0 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1649, 2469));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sVar*  sVar_clone(struct sVar*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sVar_clone"; neo_current_frame = &fr;
    struct sVar*  __result_obj__0  ;
    void* __right_value0 = (void*)0;
    struct sVar*  result  ;
    char*  __dec_obj209  ;
    char*  __dec_obj210  ;
    struct sType*  __dec_obj211  ;
    char*  __dec_obj212  ;
    if(self==(void*)0) {
                __result_obj__0 = (struct sVar* )come_increment_ref_count((void*)0, "sVar_clone", 4, 2475);
        neo_current_frame = fr.prev;
        come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sVar_clone}", 4, 2476);
        return __result_obj__0;
    }
    result=(struct sVar* )come_increment_ref_count((struct sVar *)come_calloc(1, sizeof(struct sVar )*(1), "sVar_clone", 5, 2477, "struct sVar* "), "sVar_clone", 5, 2478);
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj209=result->mName,
        result->mName=(char* )come_increment_ref_count((char* )come_memdup(self->mName, "sVar_clone", 6, 2479, "char* "), "sVar_clone", 6, 2481);
        __dec_obj209 = come_decrement_ref_count(__dec_obj209, (void*)0, (void*)0, 0,0, (void*)0, "sVar_clone", 6, 2480);
    }
    if(self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj210=result->mCValueName,
        result->mCValueName=(char* )come_increment_ref_count((char* )come_memdup(self->mCValueName, "sVar_clone", 7, 2482, "char* "), "sVar_clone", 7, 2484);
        __dec_obj210 = come_decrement_ref_count(__dec_obj210, (void*)0, (void*)0, 0,0, (void*)0, "sVar_clone", 7, 2483);
    }
    if(self!=((void*)0)&&self->mType!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj211=result->mType,
        result->mType=(struct sType* )come_increment_ref_count(sType_clone(self->mType), "sVar_clone", 8, 2486);
        come_call_finalizer(sType_finalize, __dec_obj211,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sVar_clone", 8, 2485);
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
        __right_value0 = (void*)0;
        __dec_obj212=result->mFunName,
        result->mFunName=(char* )come_increment_ref_count((char* )come_memdup(self->mFunName, "sVar_clone", 12, 2487, "char* "), "sVar_clone", 12, 2489);
        __dec_obj212 = come_decrement_ref_count(__dec_obj212, (void*)0, (void*)0, 0,0, (void*)0, "sVar_clone", 12, 2488);
    }
    if(self!=((void*)0)) {
        result->no_output_come_code=self->no_output_come_code;
    }
        __result_obj__0 = (struct sVar* )come_increment_ref_count(result, "sVar_clone", 14, 2490);
    come_call_finalizer(sVar_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sVar_clone}", 14, 2491);
    neo_current_frame = fr.prev;
    come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sVar_clone}", 14, 2492);
    return __result_obj__0;
}

static void map$2char$phsVar$ph_finalize(struct map$2char$phsVar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph_finalize"; neo_current_frame = &fr;
    int i;
    int i_238;
    for(i=0    ;i<self->size;i++){
        if(self->item_existance[i]) {
            if(1) {
                come_call_finalizer(sVar_finalize, self->items[i], (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3047, 2506);
            }
        }
    }
    come_free((char*)self->items);
    for(i_238=0    ;i_238<self->size;i_238++){
        if(self->item_existance[i_238]) {
            if(1) {
                (self->keys[i_238] = come_decrement_ref_count(self->keys[i_238], (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3056, 2507));
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3062, 2508);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3064, 2509));
            neo_current_frame = fr.prev;
}

static struct sFuncNode* sFuncNode_clone(struct sFuncNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sFuncNode_clone"; neo_current_frame = &fr;
    struct sFuncNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sFuncNode*  result  ;
    char*  __dec_obj217  ;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sFuncNode* )come_increment_ref_count((struct sFuncNode *)come_calloc(1, sizeof(struct sFuncNode )*(1), "sFuncNode_clone", 5, 2545, "struct sFuncNode* "), "sFuncNode_clone", 5, 2546);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj217=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sFuncNode_clone", 7, 2547, "char* "), "sFuncNode_clone", 7, 2549);
        __dec_obj217 = come_decrement_ref_count(__dec_obj217, (void*)0, (void*)0, 0,0, (void*)0, "sFuncNode_clone", 7, 2548);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
        __result_obj__0 = result;
    come_call_finalizer(sFuncNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sFuncNode_clone}", 9, 2550);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sLineNode* sLineNode_clone(struct sLineNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sLineNode_clone"; neo_current_frame = &fr;
    struct sLineNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sLineNode*  result  ;
    char*  __dec_obj218  ;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sLineNode* )come_increment_ref_count((struct sLineNode *)come_calloc(1, sizeof(struct sLineNode )*(1), "sLineNode_clone", 5, 2560, "struct sLineNode* "), "sLineNode_clone", 5, 2561);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj218=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sLineNode_clone", 7, 2562, "char* "), "sLineNode_clone", 7, 2564);
        __dec_obj218 = come_decrement_ref_count(__dec_obj218, (void*)0, (void*)0, 0,0, (void*)0, "sLineNode_clone", 7, 2563);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
        __result_obj__0 = result;
    come_call_finalizer(sLineNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sLineNode_clone}", 9, 2565);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sSNameNode* sSNameNode_clone(struct sSNameNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sSNameNode_clone"; neo_current_frame = &fr;
    struct sSNameNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sSNameNode*  result  ;
    char*  __dec_obj219  ;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sSNameNode* )come_increment_ref_count((struct sSNameNode *)come_calloc(1, sizeof(struct sSNameNode )*(1), "sSNameNode_clone", 5, 2575, "struct sSNameNode* "), "sSNameNode_clone", 5, 2576);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj219=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sSNameNode_clone", 7, 2577, "char* "), "sSNameNode_clone", 7, 2579);
        __dec_obj219 = come_decrement_ref_count(__dec_obj219, (void*)0, (void*)0, 0,0, (void*)0, "sSNameNode_clone", 7, 2578);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
        __result_obj__0 = result;
    come_call_finalizer(sSNameNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sSNameNode_clone}", 9, 2580);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sCallerFuncNode* sCallerFuncNode_clone(struct sCallerFuncNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sCallerFuncNode_clone"; neo_current_frame = &fr;
    struct sCallerFuncNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sCallerFuncNode*  result  ;
    char*  __dec_obj220  ;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sCallerFuncNode* )come_increment_ref_count((struct sCallerFuncNode *)come_calloc(1, sizeof(struct sCallerFuncNode )*(1), "sCallerFuncNode_clone", 5, 2590, "struct sCallerFuncNode* "), "sCallerFuncNode_clone", 5, 2591);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj220=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sCallerFuncNode_clone", 7, 2592, "char* "), "sCallerFuncNode_clone", 7, 2594);
        __dec_obj220 = come_decrement_ref_count(__dec_obj220, (void*)0, (void*)0, 0,0, (void*)0, "sCallerFuncNode_clone", 7, 2593);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
        __result_obj__0 = result;
    come_call_finalizer(sCallerFuncNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sCallerFuncNode_clone}", 9, 2595);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sCallerLineNode* sCallerLineNode_clone(struct sCallerLineNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sCallerLineNode_clone"; neo_current_frame = &fr;
    struct sCallerLineNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sCallerLineNode*  result  ;
    char*  __dec_obj221  ;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sCallerLineNode* )come_increment_ref_count((struct sCallerLineNode *)come_calloc(1, sizeof(struct sCallerLineNode )*(1), "sCallerLineNode_clone", 5, 2605, "struct sCallerLineNode* "), "sCallerLineNode_clone", 5, 2606);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj221=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sCallerLineNode_clone", 7, 2607, "char* "), "sCallerLineNode_clone", 7, 2609);
        __dec_obj221 = come_decrement_ref_count(__dec_obj221, (void*)0, (void*)0, 0,0, (void*)0, "sCallerLineNode_clone", 7, 2608);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
        __result_obj__0 = result;
    come_call_finalizer(sCallerLineNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sCallerLineNode_clone}", 9, 2610);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sCallerSNameNode* sCallerSNameNode_clone(struct sCallerSNameNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sCallerSNameNode_clone"; neo_current_frame = &fr;
    struct sCallerSNameNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sCallerSNameNode*  result  ;
    char*  __dec_obj222  ;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sCallerSNameNode* )come_increment_ref_count((struct sCallerSNameNode *)come_calloc(1, sizeof(struct sCallerSNameNode )*(1), "sCallerSNameNode_clone", 5, 2620, "struct sCallerSNameNode* "), "sCallerSNameNode_clone", 5, 2621);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj222=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sCallerSNameNode_clone", 7, 2622, "char* "), "sCallerSNameNode_clone", 7, 2624);
        __dec_obj222 = come_decrement_ref_count(__dec_obj222, (void*)0, (void*)0, 0,0, (void*)0, "sCallerSNameNode_clone", 7, 2623);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
        __result_obj__0 = result;
    come_call_finalizer(sCallerSNameNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sCallerSNameNode_clone}", 9, 2625);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sVarArgTypeName* sVarArgTypeName_clone(struct sVarArgTypeName* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sVarArgTypeName_clone"; neo_current_frame = &fr;
    struct sVarArgTypeName* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sVarArgTypeName*  result  ;
    char*  __dec_obj223  ;
    struct sType*  __dec_obj224  ;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sVarArgTypeName* )come_increment_ref_count((struct sVarArgTypeName *)come_calloc(1, sizeof(struct sVarArgTypeName )*(1), "sVarArgTypeName_clone", 5, 2638, "struct sVarArgTypeName* "), "sVarArgTypeName_clone", 5, 2639);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj223=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sVarArgTypeName_clone", 7, 2640, "char* "), "sVarArgTypeName_clone", 7, 2642);
        __dec_obj223 = come_decrement_ref_count(__dec_obj223, (void*)0, (void*)0, 0,0, (void*)0, "sVarArgTypeName_clone", 7, 2641);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj224=result->type,
        result->type=(struct sType* )come_increment_ref_count(sType_clone(self->type), "sVarArgTypeName_clone", 9, 2644);
        come_call_finalizer(sType_finalize, __dec_obj224,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sVarArgTypeName_clone", 9, 2643);
    }
        __result_obj__0 = result;
    come_call_finalizer(sVarArgTypeName_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sVarArgTypeName_clone}", 10, 2645);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sInlineAssembler* sInlineAssembler_clone(struct sInlineAssembler* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sInlineAssembler_clone"; neo_current_frame = &fr;
    struct sInlineAssembler* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sInlineAssembler*  result  ;
    char*  __dec_obj225  ;
    char*  __dec_obj226  ;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sInlineAssembler* )come_increment_ref_count((struct sInlineAssembler *)come_calloc(1, sizeof(struct sInlineAssembler )*(1), "sInlineAssembler_clone", 5, 2689, "struct sInlineAssembler* "), "sInlineAssembler_clone", 5, 2690);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj225=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sInlineAssembler_clone", 7, 2691, "char* "), "sInlineAssembler_clone", 7, 2693);
        __dec_obj225 = come_decrement_ref_count(__dec_obj225, (void*)0, (void*)0, 0,0, (void*)0, "sInlineAssembler_clone", 7, 2692);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->source!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj226=result->source,
        result->source=(char* )come_increment_ref_count((char* )come_memdup(self->source, "sInlineAssembler_clone", 9, 2694, "char* "), "sInlineAssembler_clone", 9, 2696);
        __dec_obj226 = come_decrement_ref_count(__dec_obj226, (void*)0, (void*)0, 0,0, (void*)0, "sInlineAssembler_clone", 9, 2695);
    }
    if(self!=((void*)0)) {
        result->volatile_=self->volatile_;
    }
        __result_obj__0 = result;
    come_call_finalizer(sInlineAssembler_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sInlineAssembler_clone}", 11, 2697);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sNode* expression_v5(struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "expression_v5"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __result_obj__0;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=expression_node_v99(info))), "08call.nc", 2996, 2767);
    ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0, "08call.nc", 2996, 2768):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "08call.nc", 2996, 2769):(void*)0);
    return __result_obj__0;
}

static struct sNode* post_position_operator_of_statment(struct sNode* node, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "post_position_operator_of_statment"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct sNode* __dec_obj227;
    struct sNode* __result_obj__0;
    struct sNode* __dec_obj228;
    if(!node->terminated(node->_protocol_obj)&&parsecmp("or",info)) {
        info->p->p+=strlen("or");
        skip_spaces_and_lf(info);
        __dec_obj227=node,
        node=(struct sNode*)come_increment_ref_count(parse_or_statment((struct sNode*)come_increment_ref_count(sNode_clone(node), "08call.nc", 3005, 2770),info), "08call.nc", 3005, 2772);
        (__dec_obj227 ? __dec_obj227 = come_decrement_ref_count(__dec_obj227, ((struct sNode*)__dec_obj227)->finalize, ((struct sNode*)__dec_obj227)->_protocol_obj, 0,0, (void*)0, "08call.nc", 3005, 2771) :0);
                __result_obj__0 = (struct sNode*)come_increment_ref_count(node, "08call.nc", 3007, 2773);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1,(void*)0, "08call.nc", 3007, 2774):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "08call.nc", 3007, 2775):(void*)0);
        return __result_obj__0;
    }
    else if(!node->terminated(node->_protocol_obj)&&parsecmp("and",info)) {
        info->p->p+=strlen("and");
        skip_spaces_and_lf(info);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __dec_obj228=node,
        node=(struct sNode*)come_increment_ref_count(parse_and_statment((struct sNode*)come_increment_ref_count(sNode_clone(node), "08call.nc", 3013, 2776),info), "08call.nc", 3013, 2778);
        (__dec_obj228 ? __dec_obj228 = come_decrement_ref_count(__dec_obj228, ((struct sNode*)__dec_obj228)->finalize, ((struct sNode*)__dec_obj228)->_protocol_obj, 0,0, (void*)0, "08call.nc", 3013, 2777) :0);
                __result_obj__0 = (struct sNode*)come_increment_ref_count(node, "08call.nc", 3015, 2779);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1,(void*)0, "08call.nc", 3015, 2780):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "08call.nc", 3015, 2781):(void*)0);
        return __result_obj__0;
    }
        __result_obj__0 = (struct sNode*)come_increment_ref_count(node, "08call.nc", 3018, 2782);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1,(void*)0, "08call.nc", 3018, 2783):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "08call.nc", 3018, 2784):(void*)0);
    return __result_obj__0;
}

struct sNode* statment(struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "statment"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* node;
    struct sNode* __dec_obj229;
    struct sNode* __result_obj__0;
    node=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "08call.nc", 3023, 2785);
    __right_value0 = (void*)0;
    __dec_obj229=node,
    node=(struct sNode*)come_increment_ref_count(post_position_operator_of_statment((struct sNode*)come_increment_ref_count(node, "08call.nc", 3025, 2786),info), "08call.nc", 3025, 2788);
    (__dec_obj229 ? __dec_obj229 = come_decrement_ref_count(__dec_obj229, ((struct sNode*)__dec_obj229)->finalize, ((struct sNode*)__dec_obj229)->_protocol_obj, 0,0, (void*)0, "08call.nc", 3025, 2787) :0);
        __result_obj__0 = (struct sNode*)come_increment_ref_count(node, "08call.nc", 3027, 2789);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1,(void*)0, "08call.nc", 3027, 2790):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "08call.nc", 3027, 2791):(void*)0);
    return __result_obj__0;
}

char*  get_none_generics_name(char* class_name)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "get_none_generics_name"; neo_current_frame = &fr;
    char* p;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    char*  __result_obj__0  ;
    p=class_name;
    while(*p) {
        if(*p==36) {
                        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value1=charp_substring(((char* )(__right_value0=__builtin_string(class_name))),0,p-class_name))), "08call.nc", 3035, 2792);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "08call.nc", 3035, 2793));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "08call.nc", 3035, 2794));
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "08call.nc", 3035, 2795));
            return __result_obj__0;
        }
        else {
            p++;
        }
    }
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(class_name))), "08call.nc", 3042, 2796);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "08call.nc", 3042, 2797));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "08call.nc", 3042, 2798));
    return __result_obj__0;
}

char*  create_generics_name(struct sType*  generics_type  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "create_generics_name"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer*  buf  ;
    struct sClass*  klass  ;
    char*  class_name  ;
    int i;
    struct sType*  type  ;
    char*  type_name  ;
    int i_255;
    char*  __result_obj__0  ;
    buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "08call.nc", 3047, 2799, "struct buffer* "), "08call.nc", 3047, 2800)), "08call.nc", 3047, 2801);
    klass=generics_type->mClass;
    class_name=(char* )come_increment_ref_count(klass->mName, "08call.nc", 3051, 2802);
    buffer_append_str(buf,class_name);
    if(list$1sType$ph_length(generics_type->mGenericsTypes)>0) {
        buffer_append_char(buf,36);
        buffer_append_char(buf,list$1sType$ph_length(generics_type->mGenericsTypes)+48);
        for(i=0        ;i<list$1sType$ph_length(generics_type->mGenericsTypes);i++){
            __right_value0 = (void*)0;
            type=((struct sType* )(__right_value0=list$1sType$ph_operator_load_element(generics_type->mGenericsTypes,i)));
            __right_value0 = (void*)0;
            type_name=(char* )come_increment_ref_count(create_generics_name(type,info), "08call.nc", 3061, 2803);
            buffer_append_str(buf,type_name);
            buffer_append_char(buf,36);
            for(i_255=0            ;i_255<type->mPointerNum;i_255++){
                buffer_append_char(buf,112);
            }
            if(type->mHeap) {
                buffer_append_str(buf,"h");
            }
            (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 3074, 2804));
        }
    }
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=buffer_to_string(buf))), "08call.nc", 3076, 2805);
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 3076, 2806);
    (class_name = come_decrement_ref_count(class_name, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 3076, 2807));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "08call.nc", 3076, 2808));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "08call.nc", 3076, 2809));
    return __result_obj__0;
}

char*  create_method_name(struct sType*  obj_type  , _Bool no_pointer_name, const char* fun_name, struct sInfo*  info  , _Bool array_equal_pointer)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "create_method_name"; neo_current_frame = &fr;
    char*  struct_name  ;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer*  buf  ;
    char*  __dec_obj230  ;
    char*  __dec_obj231  ;
    char*  __dec_obj232  ;
    char*  __dec_obj233  ;
    char*  __dec_obj234  ;
    int i;
    int i_256;
    char*  __result_obj__0  ;
    memset(&struct_name, 0, sizeof(struct_name));
    buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "08call.nc", 3082, 2810, "struct buffer* "), "08call.nc", 3082, 2811)), "08call.nc", 3082, 2812);
    if(string_operator_not_equals(obj_type->mOriginalTypeName,"")) {
        __right_value0 = (void*)0;
        __dec_obj230=struct_name,
        struct_name=(char* )come_increment_ref_count(__builtin_string(obj_type->mOriginalTypeName), "08call.nc", 3084, 2814);
        __dec_obj230 = come_decrement_ref_count(__dec_obj230, (void*)0, (void*)0, 0,0, (void*)0, "08call.nc", 3084, 2813);
        if(string_operator_equals(struct_name,"_Bool")) {
            __right_value0 = (void*)0;
            __dec_obj231=struct_name,
            struct_name=(char*)come_increment_ref_count(xsprintf("bool"), "08call.nc", 3086, 2816);
            __dec_obj231 = come_decrement_ref_count(__dec_obj231, (void*)0, (void*)0, 0,0, (void*)0, "08call.nc", 3086, 2815);
        }
        if(!obj_type->mClass->mStruct) {
            if(list$1sType$ph_length(obj_type->mGenericsTypes)>0&&obj_type->mTypedefOriginalType&&obj_type->mTypedefOriginalType->mPointerNum>0) {
                buffer_append_str(buf,"$");
            }
            if(obj_type->mOriginalTypePointerNum) {
                buffer_append_str(buf,"p");
            }
        }
    }
    else if(obj_type->mClass->mStruct||obj_type->mClass->mProtocol) {
        __right_value0 = (void*)0;
        __dec_obj232=struct_name,
        struct_name=(char* )come_increment_ref_count(__builtin_string(obj_type->mClass->mName), "08call.nc", 3099, 2818);
        __dec_obj232 = come_decrement_ref_count(__dec_obj232, (void*)0, (void*)0, 0,0, (void*)0, "08call.nc", 3099, 2817);
        if(string_operator_equals(struct_name,"_Bool")) {
            __right_value0 = (void*)0;
            __dec_obj233=struct_name,
            struct_name=(char*)come_increment_ref_count(xsprintf("bool"), "08call.nc", 3101, 2820);
            __dec_obj233 = come_decrement_ref_count(__dec_obj233, (void*)0, (void*)0, 0,0, (void*)0, "08call.nc", 3101, 2819);
        }
    }
    else {
        __right_value0 = (void*)0;
        __dec_obj234=struct_name,
        struct_name=(char* )come_increment_ref_count(create_generics_name(obj_type,info), "08call.nc", 3105, 2822);
        __dec_obj234 = come_decrement_ref_count(__dec_obj234, (void*)0, (void*)0, 0,0, (void*)0, "08call.nc", 3105, 2821);
        if(list$1sType$ph_length(obj_type->mGenericsTypes)>0&&obj_type->mPointerNum>0) {
            buffer_append_str(buf,"$");
        }
        for(i=0        ;i<obj_type->mPointerNum;i++){
            buffer_append_str(buf,"p");
        }
        for(i_256=0        ;i_256<obj_type->mArrayPointerNum;i_256++){
            buffer_append_str(buf,"p");
        }
    }
    if(obj_type->mArrayPointerType) {
        buffer_append_str(buf,"a");
    }
    else if(!array_equal_pointer&&list$1sNode$ph_length(obj_type->mArrayNum)>0) {
        buffer_append_str(buf,"a");
    }
        __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value1=xsprintf("%s%s_%s",struct_name,((char* )(__right_value0=buffer_to_string(buf))),fun_name))), "08call.nc", 3126, 2823);
    (struct_name = come_decrement_ref_count(struct_name, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 3126, 2824));
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 3126, 2825);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "08call.nc", 3126, 2826));
    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "08call.nc", 3126, 2827));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "08call.nc", 3126, 2828));
    return __result_obj__0;
}

char*  create_method_name_original_obj_type(struct sType*  obj_type  , _Bool no_pointer_name, const char* fun_name, struct sInfo*  info  , _Bool array_equal_pointer)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "create_method_name_original_obj_type"; neo_current_frame = &fr;
    char*  struct_name  ;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer*  buf  ;
    char*  __dec_obj235  ;
    char*  __dec_obj236  ;
    char*  __dec_obj237  ;
    int i;
    char*  __result_obj__0  ;
    memset(&struct_name, 0, sizeof(struct_name));
    buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "08call.nc", 3132, 2829, "struct buffer* "), "08call.nc", 3132, 2830)), "08call.nc", 3132, 2831);
    if(obj_type->mClass->mStruct||obj_type->mClass->mProtocol) {
        __right_value0 = (void*)0;
        __dec_obj235=struct_name,
        struct_name=(char* )come_increment_ref_count(__builtin_string(obj_type->mClass->mName), "08call.nc", 3134, 2833);
        __dec_obj235 = come_decrement_ref_count(__dec_obj235, (void*)0, (void*)0, 0,0, (void*)0, "08call.nc", 3134, 2832);
        if(string_operator_equals(struct_name,"_Bool")) {
            __right_value0 = (void*)0;
            __dec_obj236=struct_name,
            struct_name=(char*)come_increment_ref_count(xsprintf("bool"), "08call.nc", 3136, 2835);
            __dec_obj236 = come_decrement_ref_count(__dec_obj236, (void*)0, (void*)0, 0,0, (void*)0, "08call.nc", 3136, 2834);
        }
    }
    else {
        __right_value0 = (void*)0;
        __dec_obj237=struct_name,
        struct_name=(char* )come_increment_ref_count(create_generics_name(obj_type,info), "08call.nc", 3140, 2837);
        __dec_obj237 = come_decrement_ref_count(__dec_obj237, (void*)0, (void*)0, 0,0, (void*)0, "08call.nc", 3140, 2836);
        if(list$1sType$ph_length(obj_type->mGenericsTypes)>0&&obj_type->mPointerNum>0) {
            buffer_append_str(buf,"$");
        }
        for(i=0        ;i<obj_type->mPointerNum;i++){
            buffer_append_str(buf,"p");
        }
    }
    if(obj_type->mArrayPointerType) {
        buffer_append_str(buf,"a");
    }
    if(!array_equal_pointer&&list$1sNode$ph_length(obj_type->mArrayNum)>0) {
        buffer_append_str(buf,"pa");
    }
        __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value1=xsprintf("%s%s_%s",struct_name,((char* )(__right_value0=buffer_to_string(buf))),fun_name))), "08call.nc", 3158, 2838);
    (struct_name = come_decrement_ref_count(struct_name, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 3158, 2839));
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 3158, 2840);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "08call.nc", 3158, 2841));
    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "08call.nc", 3158, 2842));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "08call.nc", 3158, 2843));
    return __result_obj__0;
}

char*  create_non_method_name(struct sType*  obj_type  , _Bool no_pointer_name, const char* fun_name, struct sInfo*  info  , _Bool array_equal_pointer)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "create_non_method_name"; neo_current_frame = &fr;
    char*  struct_name  ;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer*  buf  ;
    char*  __dec_obj238  ;
    char*  __dec_obj239  ;
    int i;
    char*  __dec_obj240  ;
    char*  __dec_obj241  ;
    char*  __dec_obj242  ;
    int i_257;
    int len;
    char*  __result_obj__0  ;
    memset(&struct_name, 0, sizeof(struct_name));
    buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "08call.nc", 3164, 2844, "struct buffer* "), "08call.nc", 3164, 2845)), "08call.nc", 3164, 2846);
    if(string_operator_not_equals(obj_type->mOriginalTypeName,"")) {
        __right_value0 = (void*)0;
        __dec_obj238=struct_name,
        struct_name=(char* )come_increment_ref_count(__builtin_string(obj_type->mOriginalTypeName), "08call.nc", 3166, 2848);
        __dec_obj238 = come_decrement_ref_count(__dec_obj238, (void*)0, (void*)0, 0,0, (void*)0, "08call.nc", 3166, 2847);
        if(string_operator_equals(struct_name,"_Bool")) {
            __right_value0 = (void*)0;
            __dec_obj239=struct_name,
            struct_name=(char*)come_increment_ref_count(xsprintf("bool"), "08call.nc", 3168, 2850);
            __dec_obj239 = come_decrement_ref_count(__dec_obj239, (void*)0, (void*)0, 0,0, (void*)0, "08call.nc", 3168, 2849);
        }
        if(!obj_type->mClass->mStruct) {
            if(obj_type->mTypedefOriginalType) {
                if(list$1sType$ph_length(obj_type->mGenericsTypes)>0&&obj_type->mTypedefOriginalType->mPointerNum>0) {
                    buffer_append_str(buf,"$");
                }
                for(i=0                ;i<obj_type->mTypedefOriginalType->mPointerNum;i++){
                    buffer_append_str(buf,"p");
                }
            }
        }
    }
    else if(obj_type->mClass->mStruct||obj_type->mClass->mProtocol) {
        __right_value0 = (void*)0;
        __dec_obj240=struct_name,
        struct_name=(char* )come_increment_ref_count(__builtin_string(obj_type->mClass->mName), "08call.nc", 3183, 2852);
        __dec_obj240 = come_decrement_ref_count(__dec_obj240, (void*)0, (void*)0, 0,0, (void*)0, "08call.nc", 3183, 2851);
        if(string_operator_equals(struct_name,"_Bool")) {
            __right_value0 = (void*)0;
            __dec_obj241=struct_name,
            struct_name=(char*)come_increment_ref_count(xsprintf("bool"), "08call.nc", 3185, 2854);
            __dec_obj241 = come_decrement_ref_count(__dec_obj241, (void*)0, (void*)0, 0,0, (void*)0, "08call.nc", 3185, 2853);
        }
    }
    else {
        __right_value0 = (void*)0;
        __dec_obj242=struct_name,
        struct_name=(char* )come_increment_ref_count(create_generics_name(obj_type,info), "08call.nc", 3189, 2856);
        __dec_obj242 = come_decrement_ref_count(__dec_obj242, (void*)0, (void*)0, 0,0, (void*)0, "08call.nc", 3189, 2855);
        if(list$1sType$ph_length(obj_type->mGenericsTypes)>0&&obj_type->mPointerNum>0) {
            buffer_append_str(buf,"$");
        }
        for(i_257=0        ;i_257<obj_type->mPointerNum;i_257++){
            buffer_append_str(buf,"p");
        }
    }
    if(obj_type->mArrayPointerType) {
        buffer_append_str(buf,"a");
    }
    if(!array_equal_pointer&&list$1sNode$ph_length(obj_type->mArrayNum)>0) {
        buffer_append_str(buf,"pa");
    }
    char none_method_name[charp_length(fun_name)+1];
    memset(&none_method_name, 0, sizeof(none_method_name));
    __right_value0 = (void*)0;
    len=string_length(struct_name)+string_length(((char* )(__right_value0=buffer_to_string(buf))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "08call.nc", 3209, 2857));
    memcpy(none_method_name,fun_name+len+1,charp_length(fun_name)-len-1);
    none_method_name[charp_length(fun_name)-len-1]=0;
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(none_method_name))), "08call.nc", 3213, 2858);
    (struct_name = come_decrement_ref_count(struct_name, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 3213, 2859));
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 3213, 2860);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "08call.nc", 3213, 2861));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "08call.nc", 3213, 2862));
    return __result_obj__0;
}

char*  create_method_name_using_class(struct sClass*  obj_class  , const char* fun_name, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "create_method_name_using_class"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  struct_name  ;
    char*  __dec_obj243  ;
    char*  __result_obj__0  ;
    struct_name=(char* )come_increment_ref_count(__builtin_string(obj_class->mName), "08call.nc", 3218, 2863);
    if(string_operator_equals(struct_name,"_Bool")) {
        __right_value0 = (void*)0;
        __dec_obj243=struct_name,
        struct_name=(char*)come_increment_ref_count(xsprintf("bool"), "08call.nc", 3220, 2865);
        __dec_obj243 = come_decrement_ref_count(__dec_obj243, (void*)0, (void*)0, 0,0, (void*)0, "08call.nc", 3220, 2864);
    }
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=xsprintf("%s_%s",struct_name,fun_name))), "08call.nc", 3223, 2866);
    (struct_name = come_decrement_ref_count(struct_name, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 3223, 2867));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "08call.nc", 3223, 2868));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "08call.nc", 3223, 2869));
    return __result_obj__0;
}

struct sNode* top_level_v1(char* buf, char* head, int head_sline, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "top_level_v1"; neo_current_frame = &fr;
    struct sNode* __result_obj__0;
    err_msg(info,"unexpected word(%s)(2)",buf);
    exit(2);
        __result_obj__0 = (struct sNode*)come_increment_ref_count((struct sNode*)((void*)0), "08call.nc", 3231, 2870);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "08call.nc", 3231, 2871):(void*)0);
    return __result_obj__0;
}

struct sNode* post_position_operator(struct sNode* node, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "post_position_operator"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1tuple2$2char$phsNode$ph$ph* params;
    char* p;
    int sline;
    _Bool err_flag;
    char*  label  ;
    char*  __dec_obj244  ;
    char*  __dec_obj245  ;
    _Bool no_comma;
    _Bool in_fun_param;
    struct sNode* node_258;
    struct sNode* __dec_obj246;
    struct sNode* _inf_value21;
    struct sLambdaCall* _inf_obj_value21;
    void* __right_value2 = (void*)0;
    struct sNode* __result_obj__0;
    skip_spaces_and_lf(info);
    if(!node->terminated(node->_protocol_obj)&&*info->p->p==40) {
        info->p->p++;
        skip_spaces_and_lf(info);
        skip_spaces_and_lf(info);
        params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "08call.nc", 3244, 2872, "struct list$1tuple2$2char$phsNode$ph$ph*"), "08call.nc", 3244, 2873)), "08call.nc", 3244, 2874);
        while((_Bool)1) {
            if(*info->p->p==41) {
                info->p->p++;
                skip_spaces_and_lf(info);
                break;
            }
            p=info->p->p;
            sline=info->sline;
            err_flag=(_Bool)0;
            __right_value0 = (void*)0;
            label=(char* )come_increment_ref_count(__builtin_string(""), "08call.nc", 3257, 2875);
            if(xisalpha(*info->p->p)||*info->p->p==95) {
                __right_value0 = (void*)0;
                __dec_obj244=label,
                label=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "08call.nc", 3259, 2877);
                __dec_obj244 = come_decrement_ref_count(__dec_obj244, (void*)0, (void*)0, 0,0, (void*)0, "08call.nc", 3259, 2876);
                err_flag=(_Bool)1;
            }
            if(err_flag==(_Bool)1&&*info->p->p==58) {
                info->p->p++;
                skip_spaces_and_lf(info);
            }
            else {
                __dec_obj245=label,
                label=((void*)0);
                __dec_obj245 = come_decrement_ref_count(__dec_obj245, (void*)0, (void*)0, 0,0, (void*)0, "08call.nc", 3268, 2878);
                info->p->p=p;
                info->sline=sline;
            }
            no_comma=info->no_comma;
            info->no_comma=(_Bool)1;
            in_fun_param=info->in_fun_param;
            info->in_fun_param=(_Bool)1;
            __right_value0 = (void*)0;
            node_258=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "08call.nc", 3280, 2879);
            __right_value0 = (void*)0;
            __dec_obj246=node_258,
            node_258=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_258, "08call.nc", 3282, 2880),info), "08call.nc", 3282, 2882);
            (__dec_obj246 ? __dec_obj246 = come_decrement_ref_count(__dec_obj246, ((struct sNode*)__dec_obj246)->finalize, ((struct sNode*)__dec_obj246)->_protocol_obj, 0,0, (void*)0, "08call.nc", 3282, 2881) :0);
            info->no_comma=no_comma;
            info->in_fun_param=in_fun_param;
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            list$1tuple2$2char$phsNode$ph$ph_push_back(params,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "08call.nc", 3287, 2883, "struct tuple2$2char$phsNode$ph"), "08call.nc", 3287, 2884),(char* )come_increment_ref_count(label, "08call.nc", 3287, 2885),(struct sNode*)come_increment_ref_count(node_258, "08call.nc", 3287, 2886)), "08call.nc", 3287, 2887));
            skip_spaces_and_lf(info);
            if(*info->p->p==44) {
                info->p->p++;
                skip_spaces_and_lf(info);
            }
            else if(*info->p->p==41) {
                info->p->p++;
                skip_spaces_and_lf(info);
                (label = come_decrement_ref_count(label, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 3299, 2888));
                ((node_258) ? node_258 = come_decrement_ref_count(node_258, ((struct sNode*)node_258)->finalize, ((struct sNode*)node_258)->_protocol_obj, 0, 0,(void*)0, "08call.nc", 3299, 2889):(void*)0);
                break;
            }
            (label = come_decrement_ref_count(label, (void*)0, (void*)0, 0, 0, (void*)0, "08call.nc", 3303, 2890));
            ((node_258) ? node_258 = come_decrement_ref_count(node_258, ((struct sNode*)node_258)->finalize, ((struct sNode*)node_258)->_protocol_obj, 0, 0,(void*)0, "08call.nc", 3303, 2891):(void*)0);
        }
        skip_spaces_and_lf(info);
                __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        _inf_value21=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08call.nc", 3305, 2895, "struct sNode");
        _inf_obj_value21=(struct sLambdaCall*)come_increment_ref_count(((struct sLambdaCall*)(__right_value1=sLambdaCall_initialize((struct sLambdaCall* )come_increment_ref_count((struct sLambdaCall *)come_calloc(1, sizeof(struct sLambdaCall )*(1), "08call.nc", 3305, 2892, "struct sLambdaCall* "), "08call.nc", 3305, 2893),(struct sNode*)come_increment_ref_count(node, "08call.nc", 3305, 2894),params,info))), "08call.nc", 3305, 2896);
        _inf_value21->_protocol_obj=_inf_obj_value21;
        _inf_value21->finalize=(void*)sLambdaCall_finalize;
        _inf_value21->clone=(void*)sLambdaCall_clone;
        _inf_value21->compile=(void*)sLambdaCall_compile;
        _inf_value21->sline=(void*)sNodeBase_sline;
        _inf_value21->sline_real=(void*)sNodeBase_sline_real;
        _inf_value21->sname=(void*)sNodeBase_sname;
        _inf_value21->terminated=(void*)sNodeBase_terminated;
        _inf_value21->kind=(void*)sLambdaCall_kind;
        _inf_value21->left_value=(void*)sNodeBase_left_value;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value21)), "08call.nc", 3305, 2907);
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 3305, 2908);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "08call.nc", 3305, 2909):(void*)0);
        come_call_finalizer(sLambdaCall_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "08call.nc}", 3305, 2910);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "08call.nc", 3305, 2911):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "08call.nc", 3305, 2912):(void*)0);
        return __result_obj__0;
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "08call.nc}", 3310, 2913);
    }
    else {
                __result_obj__0 = (struct sNode*)come_increment_ref_count((struct sNode*)((void*)0), "08call.nc", 3308, 2914);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "08call.nc", 3308, 2915):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "08call.nc", 3308, 2916):(void*)0);
        return __result_obj__0;
    }
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "08call.nc", 3311, 2917):(void*)0);
    neo_current_frame = fr.prev;
}

static struct sLambdaCall* sLambdaCall_clone(struct sLambdaCall* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sLambdaCall_clone"; neo_current_frame = &fr;
    struct sLambdaCall* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sLambdaCall*  result  ;
    char*  __dec_obj247  ;
    struct sNode* __dec_obj248;
    struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj249;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sLambdaCall* )come_increment_ref_count((struct sLambdaCall *)come_calloc(1, sizeof(struct sLambdaCall )*(1), "sLambdaCall_clone", 5, 2897, "struct sLambdaCall* "), "sLambdaCall_clone", 5, 2898);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj247=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sLambdaCall_clone", 7, 2899, "char* "), "sLambdaCall_clone", 7, 2901);
        __dec_obj247 = come_decrement_ref_count(__dec_obj247, (void*)0, (void*)0, 0,0, (void*)0, "sLambdaCall_clone", 7, 2900);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->node!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj248=result->node,
        result->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node), "sLambdaCall_clone", 9, 2903);
        (__dec_obj248 ? __dec_obj248 = come_decrement_ref_count(__dec_obj248, ((struct sNode*)__dec_obj248)->finalize, ((struct sNode*)__dec_obj248)->_protocol_obj, 0,0, (void*)0, "sLambdaCall_clone", 9, 2902) :0);
    }
    if(self!=((void*)0)&&self->params!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj249=result->params,
        result->params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_clone(self->params), "sLambdaCall_clone", 10, 2905);
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph_finalize, __dec_obj249,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sLambdaCall_clone", 10, 2904);
    }
        __result_obj__0 = result;
    come_call_finalizer(sLambdaCall_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sLambdaCall_clone}", 11, 2906);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

