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
    int allocated;
    struct sMemHeader*  next  ;
    struct sMemHeader*  prev  ;
    struct sMemHeader*  free_next  ;
    char* fun_name[8];
    const char* class_name;
};

struct smart_pointer$1int$
{
    struct buffer*  memory  ;
    int* p;
};

struct smart_pointer$1short$
{
    struct buffer*  memory  ;
    short* p;
};

struct smart_pointer$1long$
{
    struct buffer*  memory  ;
    long* p;
};

struct smart_pointer$1char$
{
    struct buffer*  memory  ;
    char* p;
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
    char* p;
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

/// variable definition ///
extern struct _IO_FILE*  stdin  ;
extern struct _IO_FILE*  stdout  ;
extern struct _IO_FILE*  stderr  ;
extern char* program_invocation_name;
extern char* program_invocation_short_name;
extern struct neo_frame*  neo_current_frame  ;

extern struct sMemHeader*  gAllocMem  ;

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
_Bool die(const char* msg);
void come_heap_final();
void* alloc_from_pages(unsigned long  size  );
void come_free_mem_of_heap_pool(void* mem);
void* come_alloc_mem_from_heap_pool(unsigned long  size  , const char* sname, int sline, const char* class_name);
char* come_dynamic_typeof(void* mem);
unsigned long  dynamic_sizeof(void* mem);
void* come_calloc(unsigned long  count  , unsigned long  size  , const char* sname, int sline, const char* class_name);
void come_free(void* mem);
void* come_memdup(void* block, const char* sname, int sline, const char* class_name);
void* come_increment_ref_count(void* mem);
void* come_print_ref_count(void* mem);
int come_get_ref_count(void* mem);
void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, void* result_obj);
void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, void* result_obj);
void xassert(const char* msg, _Bool test);
void* come_null_checker(void* mem, const char* sname, int sline);
char*  __builtin_string(const char* str);
struct smart_pointer$1int$* buffer_to_int_pointer(struct buffer*  self  );
struct smart_pointer$1short$* buffer_to_short_pointer(struct buffer*  self  );
struct smart_pointer$1long$* buffer_to_long_pointer(struct buffer*  self  );
struct smart_pointer$1char$* buffer_to_pointer(struct buffer*  self  );
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
char*  FILE_read(struct _IO_FILE*  f  );
int FILE_write(struct _IO_FILE*  f  , const char* str);
int FILE_fclose(struct _IO_FILE*  f  );
struct _IO_FILE*  FILE_fprintf(struct _IO_FILE*  f  , const char* msg, ...);
int charp_write(const char* self, const char* file_name, _Bool append);
char*  charp_read(const char* file_name);
struct list$1char$ph* FILE_readlines(struct _IO_FILE*  f  );
_Bool xiswalpha(int  c  );
_Bool xiswblank(int  c  );
_Bool xiswdigit(int  c  );
_Bool xiswalnum(int  c  );
_Bool xiswascii(int  c  );
struct sClass* sClass_initialize(struct sClass* self, const char* name, _Bool number, _Bool union_, _Bool generics, _Bool method_generics, _Bool protocol_, _Bool struct_, _Bool float_, int generics_num, int method_generics_num, _Bool enum_, _Bool uniq_, _Bool typename, struct sInfo*  info  );
struct sType* sType_initialize(struct sType* self, char*  name  , _Bool heap, struct sInfo*  info  , _Bool unsigned_, int pointer_num_);
struct sFun* sFun_initialize(struct sFun* self, char*  name  , struct sType*  result_type  , struct list$1sType$ph* param_types, struct list$1char$ph* param_names, struct list$1char$ph* param_default_parametors, _Bool external, _Bool var_args, struct sBlock*  block  , _Bool static_, struct sInfo*  info  , _Bool inline_, _Bool uniq_, char*  attribute  , char*  fun_attribute  , _Bool const_fun, char*  text_block  , char*  generics_sname  , int generics_sline, _Bool immutable_);
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
struct sCurrentNode* sCurrentNode_initialize(struct sCurrentNode* self, struct sInfo*  info  );
int sCurrentNode_sline(struct sCurrentNode* self, struct sInfo*  info  );
char*  sCurrentNode_sname(struct sCurrentNode* self, struct sInfo*  info  );
char*  sCurrentNode_kind(struct sCurrentNode* self);
_Bool sCurrentNode_compile(struct sCurrentNode* self, struct sInfo*  info  );
_Bool transpile_conditional_with_free_right_object_value(struct sNode* node, struct sInfo*  info  );
int err_msg(struct sInfo*  info  , const char* msg, ...);
int warning_msg(struct sInfo*  info  , const char* msg, ...);
int expected_next_character(char c, struct sInfo*  info  );
_Bool node_compile(struct sNode* node, struct sInfo*  info  );
_Bool node_conditional_compile(struct sNode* node, struct sInfo*  info  );
int come_main(int argc, char** argv);
char*  make_type_name_string(struct sType*  type  , struct sInfo*  info  , _Bool no_static, _Bool cast_type, _Bool typedef_extended);
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
void on_load_object(struct sType*  type  , char* obj, struct sInfo*  info  );
_Bool create_equals_method(struct sType*  type  , struct sInfo*  info  );
_Bool create_operator_equals_method(struct sType*  type  , struct sInfo*  info  );
_Bool create_operator_not_equals_method(struct sType*  type  , struct sInfo*  info  );
void free_objects_of_match_lv_tables(struct sInfo*  info  );
void transpile_toplevel(_Bool block, struct sInfo*  info  );
struct sNode* reverse_node(struct sNode* value, struct sInfo*  info  );
struct sFun*  compile_uniq_function(struct sFun*  fun  , struct sInfo*  info  );
struct sNode* cast_node(struct sType*  type  , struct sNode* node, struct sInfo*  info  );
struct sNode* reffence_node(struct sNode* value, struct sInfo*  info  );
struct tuple2$2char$phsGenericsFun$p* make_method_generics_function(char*  fun_name  , struct list$1sType$ph* method_generics_types, struct sInfo*  info  );
struct sNode* create_return_node(struct sNode* value, struct sInfo*  info  );
struct sNode* post_position_operator(struct sNode* node, struct sInfo*  info  );
_Bool create_method_generics_fun(char*  fun_name  , struct sGenericsFun*  generics_fun  , struct sInfo*  info  );
_Bool operator_overload_fun_self(struct sType*  type  , const char* fun_name, struct sNode* node, struct CVALUE*  left_value  , struct sInfo*  info  );
void caller_begin(struct sInfo*  info  );
void caller_end(struct sInfo*  info  );
struct sNode* craete_logical_denial(struct sNode* node, struct sInfo*  info  );
struct tuple3$3sType$phchar$ph_Bool$* backtrace_parse_type(_Bool parse_variable_name, struct sInfo*  info  );
void skip_pointer_attribute(struct sInfo*  info  );
void skip_paren(struct sInfo*  info  );
struct sNode* parse_normal_block(_Bool clang, struct sInfo*  info  );
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
int transpile_block(struct sBlock*  block  , struct list$1sType$ph* param_types, struct list$1char$ph* param_names, struct sInfo*  info  , _Bool no_var_table, _Bool loop_block, _Bool if_result_value);
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
struct sNode* store_var(char*  name  , struct list$1char$ph* multiple_assign, struct list$1tuple3$3sType$phchar$phsNode$ph$ph* multiple_declare, struct sType*  type  , _Bool alloc, struct sNode* right_value, struct sInfo*  info  );
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
struct sNode* parse_method_call_v18(struct sNode* obj, char*  fun_name  , struct sInfo*  info  , _Bool arrow_);
struct sNode* post_position_operator_v19(struct sNode* node, struct sInfo*  info  );
struct tuple3$3char$phsFun$psGenericsFun$p* get_method(const char* fun_name, struct sType*  obj_type  , struct sInfo*  info  );
struct sNode* create_method_call(const char* fun_name, struct sNode* obj, struct list$1tuple2$2char$phsNode$ph$ph* params, struct buffer*  method_block  , int method_block_sline, struct list$1sType$ph* method_generics_types, struct sInfo*  info  , _Bool arrow_);
struct sNode* create_guard_break_method_call(struct sNode* expression_node, struct sInfo*  info  );
_Bool compile_method_block(struct buffer*  method_block  , struct list$1CVALUE$ph* come_params, struct sFun*  fun  , char* fun_name, int method_block_sline, struct sInfo*  info  , _Bool no_create_current_stack);
struct tuple2$2char$phsGenericsFun$p* make_generics_function(struct sType*  type  , char*  fun_name  , struct sInfo*  info  , _Bool array_equal_pointer);
struct sNode* parse_method_call_v20(struct sNode* obj, char*  fun_name  , struct sInfo*  info  , _Bool arrow_);
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
struct sNullChecker* sNullChecker_initialize(struct sNullChecker* self, struct sNode* value, struct sInfo*  info  );
char*  sNullChecker_kind(struct sNullChecker* self);
_Bool sNullChecker_compile(struct sNullChecker* self, struct sInfo*  info  );
struct sNode* create_new_object(struct sType*  type  , struct sInfo*  info  );
void std_move(struct sType*  left_type  , struct sType*  right_type  , struct CVALUE*  right_value  , struct sInfo*  info  );
static struct sRightValueObject*  list$1sRightValueObject$ph_begin(struct list$1sRightValueObject$ph* self);
static _Bool list$1sRightValueObject$ph_end(struct list$1sRightValueObject$ph* self);
static struct sRightValueObject*  list$1sRightValueObject$ph_next(struct list$1sRightValueObject$ph* self);
static void list$1sRightValueObject$ph$p_finalize(struct list$1sRightValueObject$ph* self);
static void list_item$1sRightValueObject$ph$p_finalize(struct list_item$1sRightValueObject$ph* self);
static void sRightValueObject_finalize(struct sRightValueObject*  self  );
static void sType_finalize(struct sType*  self  );
static void list$1sType$ph$p_finalize(struct list$1sType$ph* self);
static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self);
static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self);
static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self);
static void list$1int$$p_finalize(struct list$1int$* self);
static void list_item$1int$$p_finalize(struct list_item$1int$* self);
static void list$1char$ph$p_finalize(struct list$1char$ph* self);
static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self);
struct sType*  solve_generics(struct sType*  type  , struct sType*  generics_type  , struct sInfo*  info  );
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
static int list$1sNode$ph_length(struct list$1sNode$ph* self);
static void CVALUE_finalize(struct CVALUE*  self  );
static int list$1sType$ph_length(struct list$1sType$ph* self);
static struct list$1sType$ph* list$1sType$ph_reset(struct list$1sType$ph* self);
static struct sType*  list$1sType$ph_begin(struct list$1sType$ph* self);
static _Bool list$1sType$ph_end(struct list$1sType$ph* self);
static struct sType*  list$1sType$ph_next(struct list$1sType$ph* self);
static struct list$1sType$ph* list$1sType$ph_push_back(struct list$1sType$ph* self, struct sType*  item  );
static struct sType*  list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position);
static struct sType*  list$1sType$ph_operator_load_element(struct list$1sType$ph* self, int position);
struct sType*  solve_method_generics(struct sType*  type  , struct sInfo*  info  );
static void list$1sType$ph_operator_store_element(struct list$1sType$ph* self, int position, struct sType*  item  );
static struct list$1sType$ph* list$1sType$ph_replace(struct list$1sType$ph* self, int position, struct sType*  item  );
void append_object_to_right_values(struct CVALUE*  come_value  , struct sType*  type  , struct sInfo*  info  , _Bool decrement_ref_count, struct sType*  obj_type  , char* obj_value, struct sVar*  obj_var  );
static struct list$1sRightValueObject$ph* list$1sRightValueObject$ph_push_back(struct list$1sRightValueObject$ph* self, struct sRightValueObject*  item  );
void remove_object_from_right_values(int right_value_num, struct sInfo*  info  );
static struct list$1sRightValueObject$ph* list$1sRightValueObject$ph_delete(struct list$1sRightValueObject$ph* self, int head, int tail);
static struct list$1sRightValueObject$ph* list$1sRightValueObject$ph_reset(struct list$1sRightValueObject$ph* self);
void remove_value_from_right_value_objects(struct CVALUE*  come_value  , struct sInfo*  info  );
char*  increment_ref_count_object(struct sType*  type  , char* obj, struct sInfo*  info  );
void decrement_ref_count_object(struct sType*  type  , char* obj, struct sInfo*  info  , _Bool no_free);
static struct sFun*  map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char*  key  );
static void sFun_finalize(struct sFun*  self  );
static void list$1sVar$ph$p_finalize(struct list$1sVar$ph* self);
static void list_item$1sVar$ph$p_finalize(struct list_item$1sVar$ph* self);
static void sVar_finalize(struct sVar*  self  );
static void sBlock_finalize(struct sBlock*  self  );
static struct sFun*  map$2char$phsFun$ph_operator_load_element(struct map$2char$phsFun$ph* self, char*  key  );
static struct sGenericsFun*  map$2char$phsGenericsFun$ph$p_operator_load_element(struct map$2char$phsGenericsFun$ph* self, char*  key  );
static void sGenericsFun_finalize(struct sGenericsFun*  self  );
static struct sGenericsFun*  map$2char$phsGenericsFun$ph_operator_load_element(struct map$2char$phsGenericsFun$ph* self, char*  key  );
static void tuple2$2char$ph_Bool$$p_finalize(struct tuple2$2char$ph_Bool$* self);
static void tuple2$2sFun$pchar$ph$p_finalize(struct tuple2$2sFun$pchar$ph* self);
static void list$1sRightValueObject$ph_finalize(struct list$1sRightValueObject$ph* self);
static void list$1CVALUE$ph_finalize(struct list$1CVALUE$ph* self);
static void list_item$1CVALUE$ph$p_finalize(struct list_item$1CVALUE$ph* self);
static void list$1CVALUE$ph$p_finalize(struct list$1CVALUE$ph* self);
void on_drop_object(struct sType*  type  , char* obj, struct sInfo*  info  );
void free_object(struct sType*  type  , char* obj, _Bool no_decrement, _Bool no_free, struct sInfo*  info  , _Bool ret_value);
static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_begin(struct list$1tuple2$2char$phsType$ph$ph* self);
static _Bool list$1tuple2$2char$phsType$ph$ph_end(struct list$1tuple2$2char$phsType$ph$ph* self);
static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_next(struct list$1tuple2$2char$phsType$ph$ph* self);
static void list$1tuple2$2char$phsType$ph$ph$p_finalize(struct list$1tuple2$2char$phsType$ph$ph* self);
static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self);
static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self);
struct tuple2$2sType$phchar$ph* clone_object(struct sType*  type  , char* obj, struct sInfo*  info  );
static struct sGenericsFun*  map$2char$phsGenericsFun$ph_at(struct map$2char$phsGenericsFun$ph* self, char*  key  , struct sGenericsFun*  default_value  , _Bool by_pointer);
static struct tuple2$2sType$phchar$ph* tuple2$2sType$phchar$ph_initialize(struct tuple2$2sType$phchar$ph* self, struct sType* v1, char*  v2  );
static void tuple2$2sType$phchar$ph$p_finalize(struct tuple2$2sType$phchar$ph* self);
void free_right_value_objects(struct sInfo*  info  );
struct sVar*  get_variable_from_table(struct sVarTable*  table  , char* name);
static struct sVar*  map$2char$phsVar$ph$p_operator_load_element(struct map$2char$phsVar$ph* self, char*  key  );
static struct sVar*  map$2char$phsVar$ph_operator_load_element(struct map$2char$phsVar$ph* self, char*  key  );
void free_objects(struct sVarTable*  table  , struct sVar*  ret_value  , struct sInfo*  info  );
static char*  map$2char$phsVar$ph_begin(struct map$2char$phsVar$ph* self);
static _Bool map$2char$phsVar$ph_end(struct map$2char$phsVar$ph* self);
static char*  map$2char$phsVar$ph_next(struct map$2char$phsVar$ph* self);
static struct sNode* list$1sNode$ph$p_operator_load_element(struct list$1sNode$ph* self, int position);
static struct sNode* list$1sNode$ph_operator_load_element(struct list$1sNode$ph* self, int position);
static struct list$1sNode$ph* list$1sNode$ph_reset(struct list$1sNode$ph* self);
static void map$2char$phsVar$ph$p_finalize(struct map$2char$phsVar$ph* self);
void free_objects_on_return(struct sBlock*  current_block  , struct sInfo*  info  , struct sVar*  ret_value  , _Bool top_block);
void free_objects_on_break(struct sInfo*  info  );
_Bool existance_free_objects(struct sVarTable*  table  , struct sVar*  ret_value  , struct sInfo*  info  );
_Bool existance_free_objects_on_return(struct sBlock*  current_block  , struct sInfo*  info  , struct sVar*  ret_value  , _Bool top_block);
_Bool existance_free_right_value_objects(struct sInfo*  info  );
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
void std_move(struct sType*  left_type  , struct sType*  right_type  , struct CVALUE*  right_value  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "std_move"; neo_current_frame = &fr;
    struct sRightValueObject*  it  ;
    struct list$1sRightValueObject$ph* o2_saved;
    struct sRightValueObject*  it2  ;
    char*  __dec_obj1  ;
    void* __right_value0 = (void*)0;
    char*  __dec_obj2  ;
    if(gComeC) {
        neo_current_frame = fr.prev;
        return;
    }
    if(right_value->right_value_objects) {
        it=right_value->right_value_objects;
        for(o2_saved=(struct list$1sRightValueObject$ph*)come_increment_ref_count(info->right_value_objects),it2=list$1sRightValueObject$ph_begin(o2_saved);!list$1sRightValueObject$ph_end(o2_saved);it2=list$1sRightValueObject$ph_next(o2_saved)){
            if(it->mID==it2->mID) {
                it2->mStored=(_Bool)1;
                break;
            }
        }
        come_call_finalizer(list$1sRightValueObject$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(right_value->c_value_without_right_value_objects) {
        __dec_obj1=right_value->c_value,
        right_value->c_value=(char* )come_increment_ref_count(right_value->c_value_without_right_value_objects);
        __dec_obj1 = come_decrement_ref_count(__dec_obj1, (void*)0, (void*)0, 0,0, (void*)0);
    }
    __dec_obj2=right_value->c_value,
    right_value->c_value=(char* )come_increment_ref_count(increment_ref_count_object(right_value->type,right_value->c_value,info));
    __dec_obj2 = come_decrement_ref_count(__dec_obj2, (void*)0, (void*)0, 0,0, (void*)0);
    neo_current_frame = fr.prev;
}

static struct sRightValueObject*  list$1sRightValueObject$ph_begin(struct list$1sRightValueObject$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sRightValueObject$ph_begin"; neo_current_frame = &fr;
    struct sRightValueObject*  result  ;
    struct sRightValueObject*  __result_obj__0  ;
    struct sRightValueObject*  result_0  ;
    if(self==((void*)0)) {
        memset(&result,0,sizeof(struct sRightValueObject* ));
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
    memset(&result_0,0,sizeof(struct sRightValueObject* ));
    __result_obj__0 = result_0;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static _Bool list$1sRightValueObject$ph_end(struct list$1sRightValueObject$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sRightValueObject$ph_end"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return self==((void*)0)||self->it==((void*)0);
    neo_current_frame = fr.prev;
}

static struct sRightValueObject*  list$1sRightValueObject$ph_next(struct list$1sRightValueObject$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sRightValueObject$ph_next"; neo_current_frame = &fr;
    struct sRightValueObject*  result  ;
    struct sRightValueObject*  __result_obj__0  ;
    struct sRightValueObject*  result_1  ;
    if(self==((void*)0)||self->it==((void*)0)) {
        memset(&result,0,sizeof(struct sRightValueObject* ));
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
    memset(&result_1,0,sizeof(struct sRightValueObject* ));
    __result_obj__0 = result_1;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void list$1sRightValueObject$ph$p_finalize(struct list$1sRightValueObject$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sRightValueObject$ph$p_finalize"; neo_current_frame = &fr;
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
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1sRightValueObject$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer(sRightValueObject_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

static void sRightValueObject_finalize(struct sRightValueObject*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sRightValueObject_finalize"; neo_current_frame = &fr;
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

static void sType_finalize(struct sType*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sType_finalize"; neo_current_frame = &fr;
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
    if(self!=((void*)0)&&self->mMiddleAttribute!=((void*)0)) {
        (self->mMiddleAttribute = come_decrement_ref_count(self->mMiddleAttribute, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->mPointerAttribute!=((void*)0)) {
        (self->mPointerAttribute = come_decrement_ref_count(self->mPointerAttribute, (void*)0, (void*)0, 0, 0, (void*)0));
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
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1sType$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1sNode$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        ((self->item) ? self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0,(void*)0):(void*)0);
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
        come_call_finalizer(list_item$1int$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1char$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    neo_current_frame = fr.prev;
}

struct sType*  solve_generics(struct sType*  type  , struct sType*  generics_type  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "solve_generics"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sType*  result  ;
    int pointer_num;
    _Bool heap;
    struct sNode* node;
    _Bool no_output_come_code;
    _Bool Value;
    struct sType*  __result_obj__0  ;
    struct CVALUE*  come_value  ;
    struct sType*  __dec_obj36  ;
    struct sClass*  klass  ;
    struct sType*  result_type  ;
    struct sType*  __dec_obj37  ;
    struct list$1sType$ph* o2_saved;
    struct sType*  it  ;
    struct sType*  new_param_type  ;
    int generics_number;
    struct list$1sNode$ph* array_num;
    int pointer_num_14;
    _Bool heap_15;
    _Bool deffer_right_value;
    _Bool const_;
    _Bool norecord_;
    _Bool refference_;
    _Bool optional_;
    _Bool no_heap;
    int minus_pointer_num;
    _Bool no_calling_destructor;
    int minus_pointer_num_16;
    void* __right_value1 = (void*)0;
    struct sType*  __dec_obj41  ;
    struct list$1sNode$ph* __dec_obj42;
    void* __right_value2 = (void*)0;
    struct sType*  generics_type_19  ;
    struct sType*  type_20  ;
    struct sType*  type2  ;
    struct sType*  __dec_obj43  ;
    struct sType*  generics_type_21  ;
    struct sType*  type_22  ;
    struct sType*  type2_23  ;
    struct sType*  __dec_obj44  ;
    int generics_number_24;
    struct sClass*  klass2  ;
    int generics_number2;
    struct list$1sNode$ph* array_num_25;
    int pointer_num_26;
    _Bool heap_27;
    _Bool deffer_right_value_28;
    _Bool norecord__29;
    _Bool refference__30;
    _Bool optional__31;
    _Bool no_heap_32;
    _Bool no_calling_destructor_33;
    _Bool multiple_types;
    _Bool const__34;
    int minus_pointer_num_35;
    struct sType*  __dec_obj45  ;
    struct list$1sNode$ph* __dec_obj46;
    struct sType*  generics_type_36  ;
    struct sType*  type_37  ;
    struct sType*  type2_38  ;
    struct sType*  __dec_obj47  ;
    struct sType*  generics_type_39  ;
    struct sType*  type_40  ;
    struct sType*  type2_41  ;
    struct sType*  __dec_obj48  ;
    struct list$1sType$ph* o2_saved_42;
    struct sType*  it_43  ;
    struct sType*  type_44  ;
    char*  new_name  ;
    result=(struct sType* )come_increment_ref_count(sType_clone(type));
    if(type->mTypeOfNode) {
        pointer_num=type->mPointerNum;
        heap=type->mHeap;
        node=(struct sNode*)come_increment_ref_count(sNode_clone(type->mTypeOfNode));
        no_output_come_code=info->no_output_come_code;
        info->no_output_come_code=(_Bool)1;
        info->in_typeof=(_Bool)1;
        Value=node_compile(node,info);
        if(!Value) {
            __result_obj__0 = (struct sType* )come_increment_ref_count(result);
            ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            come_call_finalizer(sType_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            neo_current_frame = fr.prev;
            come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__0;
        }
        info->no_output_come_code=no_output_come_code;
        info->in_typeof=(_Bool)0;
        come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
        __dec_obj36=result,
        result=(struct sType* )come_increment_ref_count(come_value->type);
        come_call_finalizer(sType_finalize, __dec_obj36,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(list$1sNode$ph_length(result->mArrayNum)>0) {
            if(pointer_num>0) {
                result->mArrayPointerNum+=pointer_num;
            }
        }
        else {
            if(pointer_num>0) {
                result->mPointerNum+=pointer_num;
            }
        }
        if(heap) {
            result->mHeap=(_Bool)1;
        }
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(generics_type==((void*)0)) {
        __result_obj__0 = (struct sType* )come_increment_ref_count(result);
        come_call_finalizer(sType_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        neo_current_frame = fr.prev;
        come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    if(list$1sType$ph_length(generics_type->mGenericsTypes)==0) {
        __result_obj__0 = (struct sType* )come_increment_ref_count(result);
        come_call_finalizer(sType_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        neo_current_frame = fr.prev;
        come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    klass=type->mClass;
    if(string_operator_equals(klass->mName,"lambda")) {
        result_type=(struct sType* )come_increment_ref_count(solve_generics(type->mResultType,generics_type,info));
        __dec_obj37=result->mResultType,
        result->mResultType=(struct sType* )come_increment_ref_count(sType_clone(result_type));
        come_call_finalizer(sType_finalize, __dec_obj37,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        list$1sType$ph_reset(result->mParamTypes);
        for(o2_saved=(struct list$1sType$ph*)come_increment_ref_count(type->mParamTypes),it=list$1sType$ph_begin(o2_saved);!list$1sType$ph_end(o2_saved);it=list$1sType$ph_next(o2_saved)){
            new_param_type=(struct sType* )come_increment_ref_count(solve_generics(it,generics_type,info));
            list$1sType$ph_push_back(result->mParamTypes,(struct sType* )come_increment_ref_count(new_param_type));
            come_call_finalizer(sType_finalize, new_param_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer(list$1sType$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(klass->mMethodGenerics&&info->method_generics_types&&list$1sType$ph_length(info->method_generics_types)>0) {
        generics_number=klass->mMethodGenericsNum;
        if(generics_number>=list$1sType$ph_length(info->method_generics_types)) {
            err_msg(info,"invalid method generics parametor number. %d %d",generics_number,list$1sType$ph_length(info->method_generics_types));
            exit(2);
        }
        array_num=(struct list$1sNode$ph*)come_increment_ref_count(type->mArrayNum);
        pointer_num_14=type->mPointerNum;
        heap_15=type->mHeap;
        deffer_right_value=type->mDefferRightValue;
        const_=type->mConstant;
        norecord_=type->mNorecord;
        refference_=type->mRefference;
        optional_=type->mOptional;
        no_heap=type->mNoHeap;
        minus_pointer_num=type->mMinusPointerNum;
        no_calling_destructor=type->mNoCallingDestructor;
        minus_pointer_num_16=type->mMinusPointerNum;
        __dec_obj41=result,
        result=(struct sType* )come_increment_ref_count(sType_clone(((struct sType* )(__right_value0=list$1sType$ph_operator_load_element(info->method_generics_types,generics_number)))));
        come_call_finalizer(sType_finalize, __dec_obj41,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        if(norecord_) {
            result->mNorecord=norecord_||result->mNorecord;
        }
        if(heap_15) {
            result->mHeap=result->mHeap||heap_15;
        }
        if(const_) {
            result->mConstant=result->mConstant||const_;
        }
        if(deffer_right_value) {
            result->mDefferRightValue=deffer_right_value||result->mDefferRightValue;
        }
        if(no_heap) {
            result->mNoHeap=(_Bool)1;
            result->mHeap=(_Bool)0;
        }
        if(no_calling_destructor) {
            result->mNoCallingDestructor=(_Bool)1;
        }
        if(list$1sNode$ph_length(array_num)>0) {
            __dec_obj42=result->mArrayNum,
            result->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(array_num);
            come_call_finalizer(list$1sNode$ph_finalize, __dec_obj42,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(pointer_num_14>0) {
            result->mPointerNum+=pointer_num_14;
        }
        if(minus_pointer_num_16) {
            result->mPointerNum-=minus_pointer_num_16;
        }
        if(refference_) {
            generics_type_19=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 137, "struct sType* ")),(char*)come_increment_ref_count(xsprintf("ref")),(_Bool)0,info,(_Bool)0,0));
            list$1sType$ph_add(generics_type_19->mGenericsTypes,(struct sType* )come_increment_ref_count(sType_clone(result)));
            type_20=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 140, "struct sType* ")),(char*)come_increment_ref_count(xsprintf("ref")),(_Bool)0,info,(_Bool)0,0));
            list$1sType$ph_add(type_20->mGenericsTypes,(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 141, "struct sType* ")),(char*)come_increment_ref_count(xsprintf("__generics_type0")),(_Bool)0,info,(_Bool)0,0)));
            type_20->mPointerNum++;
            type_20->mHeap=(_Bool)1;
            type2=(struct sType* )come_increment_ref_count(solve_generics(type_20,generics_type_19,info));
            __dec_obj43=result,
            result=(struct sType* )come_increment_ref_count(type2);
            come_call_finalizer(sType_finalize, __dec_obj43,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, generics_type_19, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, type_20, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(optional_) {
            generics_type_21=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 150, "struct sType* ")),(char*)come_increment_ref_count(xsprintf("optional")),(_Bool)0,info,(_Bool)0,0));
            list$1sType$ph_add(generics_type_21->mGenericsTypes,(struct sType* )come_increment_ref_count(sType_clone(type)));
            type_22=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 153, "struct sType* ")),(char*)come_increment_ref_count(xsprintf("optional")),(_Bool)0,info,(_Bool)0,0));
            list$1sType$ph_add(type_22->mGenericsTypes,(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 154, "struct sType* ")),(char*)come_increment_ref_count(xsprintf("__generics_type0")),(_Bool)0,info,(_Bool)0,0)));
            type_22->mPointerNum++;
            type_22->mHeap=(_Bool)1;
            type2_23=(struct sType* )come_increment_ref_count(solve_generics(type_22,generics_type_21,info));
            __dec_obj44=result,
            result=(struct sType* )come_increment_ref_count(type2_23);
            come_call_finalizer(sType_finalize, __dec_obj44,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, generics_type_21, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, type_22, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, type2_23, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer(list$1sNode$ph$p_finalize, array_num, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(klass->mGenerics) {
        generics_number_24=klass->mGenericsNum;
        if(generics_number_24>=list$1sType$ph_length(generics_type->mGenericsTypes)) {
            err_msg(info,"invalid generics parametor number");
            exit(2);
        }
        klass2=((struct sType* )(__right_value0=list$1sType$ph_operator_load_element(generics_type->mGenericsTypes,generics_number_24)))->mClass;
        come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        generics_number2=klass2->mGenericsNum;
        if(generics_number_24!=generics_number2) {
            array_num_25=(struct list$1sNode$ph*)come_increment_ref_count(type->mArrayNum);
            pointer_num_26=type->mPointerNum;
            heap_27=type->mHeap;
            deffer_right_value_28=type->mDefferRightValue;
            norecord__29=type->mNorecord;
            refference__30=type->mRefference;
            optional__31=type->mOptional;
            no_heap_32=type->mNoHeap;
            no_calling_destructor_33=type->mNoCallingDestructor;
            multiple_types=type->mMultipleTypes;
            const__34=type->mConstant;
            minus_pointer_num_35=type->mMinusPointerNum;
            __dec_obj45=result,
            result=(struct sType* )come_increment_ref_count(sType_clone(((struct sType* )(__right_value0=list$1sType$ph_operator_load_element(generics_type->mGenericsTypes,generics_number_24)))));
            come_call_finalizer(sType_finalize, __dec_obj45,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            if(norecord__29) {
                result->mNorecord=norecord__29||result->mNorecord;
            }
            if(heap_27) {
                result->mHeap=result->mHeap||heap_27;
            }
            if(const__34) {
                result->mConstant=result->mConstant||const__34;
            }
            if(deffer_right_value_28) {
                result->mDefferRightValue=deffer_right_value_28||result->mDefferRightValue;
            }
            if(no_heap_32) {
                result->mNoHeap=(_Bool)1;
                result->mHeap=(_Bool)0;
            }
            if(multiple_types) {
                result->mMultipleTypes=(_Bool)1;
            }
            if(no_calling_destructor_33) {
                result->mNoCallingDestructor=(_Bool)1;
            }
            if(list$1sNode$ph_length(array_num_25)>0) {
                __dec_obj46=result->mArrayNum,
                result->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(array_num_25);
                come_call_finalizer(list$1sNode$ph_finalize, __dec_obj46,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(pointer_num_26>0) {
                result->mPointerNum+=pointer_num_26;
            }
            if(minus_pointer_num_35) {
                result->mPointerNum-=minus_pointer_num_35;
            }
            if(refference__30) {
                generics_type_36=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 228, "struct sType* ")),(char*)come_increment_ref_count(xsprintf("ref")),(_Bool)0,info,(_Bool)0,0));
                list$1sType$ph_add(generics_type_36->mGenericsTypes,(struct sType* )come_increment_ref_count(sType_clone(result)));
                type_37=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 231, "struct sType* ")),(char*)come_increment_ref_count(xsprintf("ref")),(_Bool)0,info,(_Bool)0,0));
                list$1sType$ph_add(type_37->mGenericsTypes,(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 232, "struct sType* ")),(char*)come_increment_ref_count(xsprintf("__generics_type0")),(_Bool)0,info,(_Bool)0,0)));
                type_37->mPointerNum++;
                type_37->mHeap=(_Bool)1;
                type2_38=(struct sType* )come_increment_ref_count(solve_generics(type_37,generics_type_36,info));
                __dec_obj47=result,
                result=(struct sType* )come_increment_ref_count(type2_38);
                come_call_finalizer(sType_finalize, __dec_obj47,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, generics_type_36, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, type_37, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, type2_38, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(optional__31) {
                generics_type_39=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 241, "struct sType* ")),(char*)come_increment_ref_count(xsprintf("optional")),(_Bool)0,info,(_Bool)0,0));
                list$1sType$ph_add(generics_type_39->mGenericsTypes,(struct sType* )come_increment_ref_count(sType_clone(type)));
                type_40=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 244, "struct sType* ")),(char*)come_increment_ref_count(xsprintf("optional")),(_Bool)0,info,(_Bool)0,0));
                list$1sType$ph_add(type_40->mGenericsTypes,(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 245, "struct sType* ")),(char*)come_increment_ref_count(xsprintf("__generics_type0")),(_Bool)0,info,(_Bool)0,0)));
                type_40->mPointerNum++;
                type_40->mHeap=(_Bool)1;
                type2_41=(struct sType* )come_increment_ref_count(solve_generics(type_40,generics_type_39,info));
                __dec_obj48=result,
                result=(struct sType* )come_increment_ref_count(type2_41);
                come_call_finalizer(sType_finalize, __dec_obj48,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, generics_type_39, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, type_40, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, type2_41, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer(list$1sNode$ph$p_finalize, array_num_25, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    else {
        list$1sType$ph_reset(result->mGenericsTypes);
        for(o2_saved_42=(struct list$1sType$ph*)come_increment_ref_count(type->mGenericsTypes),it_43=list$1sType$ph_begin(o2_saved_42);!list$1sType$ph_end(o2_saved_42);it_43=list$1sType$ph_next(o2_saved_42)){
            type_44=(struct sType* )come_increment_ref_count(solve_generics(it_43,generics_type,info));
            list$1sType$ph_push_back(result->mGenericsTypes,(struct sType* )come_increment_ref_count(type_44));
            come_call_finalizer(sType_finalize, type_44, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer(list$1sType$ph$p_finalize, o2_saved_42, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(!output_generics_struct(result,generics_type,info)) {
            new_name=(char* )come_increment_ref_count(create_generics_name(type,info));
            printf("output generics is failed(%s)",new_name);
            exit(1);
            (new_name = come_decrement_ref_count(new_name, (void*)0, (void*)0, 0, 0, (void*)0));
        }
    }
    __result_obj__0 = (struct sType* )come_increment_ref_count(result);
    come_call_finalizer(sType_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct sType*  sType_clone(struct sType*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sType_clone"; neo_current_frame = &fr;
    struct sType*  __result_obj__0  ;
    void* __right_value0 = (void*)0;
    struct sType*  result  ;
    struct sType*  __dec_obj3  ;
    struct sType*  __dec_obj4  ;
    struct list$1sType$ph* __dec_obj8;
    struct sType*  __dec_obj9  ;
    struct sNode* __dec_obj10;
    struct sNode* __dec_obj11;
    char*  __dec_obj12  ;
    char*  __dec_obj13  ;
    char*  __dec_obj14  ;
    char*  __dec_obj15  ;
    char*  __dec_obj16  ;
    char*  __dec_obj17  ;
    char*  __dec_obj18  ;
    char*  __dec_obj19  ;
    struct list$1sNode$ph* __dec_obj23;
    struct list$1sNode$ph* __dec_obj24;
    struct list$1int$* __dec_obj25;
    struct list$1int$* __dec_obj26;
    struct sType*  __dec_obj27  ;
    char*  __dec_obj28  ;
    struct list$1sType$ph* __dec_obj29;
    struct list$1char$ph* __dec_obj33;
    struct sType*  __dec_obj34  ;
    struct sNode* __dec_obj35;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 3, "struct sType* "));
    if(self!=((void*)0)) {
        result->mClass=self->mClass;
    }
    if(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj3=result->mOriginalLoadVarType,
        result->mOriginalLoadVarType=(struct sType* )come_increment_ref_count(sType_clone(self->mOriginalLoadVarType));
        come_call_finalizer(sType_finalize, __dec_obj3,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj4=result->mChannelType,
        result->mChannelType=(struct sType* )come_increment_ref_count(sType_clone(self->mChannelType));
        come_call_finalizer(sType_finalize, __dec_obj4,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj8=result->mGenericsTypes,
        result->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mGenericsTypes));
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj8,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj9=result->mNoSolvedGenericsType,
        result->mNoSolvedGenericsType=(struct sType* )come_increment_ref_count(sType_clone(self->mNoSolvedGenericsType));
        come_call_finalizer(sType_finalize, __dec_obj9,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj10=result->mSizeNum,
        result->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        (__dec_obj10 ? __dec_obj10 = come_decrement_ref_count(__dec_obj10, ((struct sNode*)__dec_obj10)->finalize, ((struct sNode*)__dec_obj10)->_protocol_obj, 0,0, (void*)0) :0);
    }
    if(self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj11=result->mAlignas,
        result->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        (__dec_obj11 ? __dec_obj11 = come_decrement_ref_count(__dec_obj11, ((struct sNode*)__dec_obj11)->finalize, ((struct sNode*)__dec_obj11)->_protocol_obj, 0,0, (void*)0) :0);
    }
    if(self!=((void*)0)) {
        result->mAlignasDouble=self->mAlignasDouble;
    }
    if(self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj12=result->mTupleName,
        result->mTupleName=(char* )come_increment_ref_count((char* )come_memdup(self->mTupleName, "sType_clone", 12, "char* "));
        __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj13=result->mAttribute,
        result->mAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mAttribute, "sType_clone", 13, "char* "));
        __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->mVarAttribute!=((void*)0)) {
        __dec_obj14=result->mVarAttribute,
        result->mVarAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mVarAttribute, "sType_clone", 14, "char* "));
        __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->mMiddleAttribute!=((void*)0)) {
        __dec_obj15=result->mMiddleAttribute,
        result->mMiddleAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mMiddleAttribute, "sType_clone", 15, "char* "));
        __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->mPointerAttribute!=((void*)0)) {
        __dec_obj16=result->mPointerAttribute,
        result->mPointerAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mPointerAttribute, "sType_clone", 16, "char* "));
        __dec_obj16 = come_decrement_ref_count(__dec_obj16, (void*)0, (void*)0, 0,0, (void*)0);
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
        __dec_obj17=result->mAnonymousName,
        result->mAnonymousName=(char* )come_increment_ref_count((char* )come_memdup(self->mAnonymousName, "sType_clone", 45, "char* "));
        __dec_obj17 = come_decrement_ref_count(__dec_obj17, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result->mInnerStruct=self->mInnerStruct;
    }
    if(self!=((void*)0)&&self->mInnerStructName!=((void*)0)) {
        __dec_obj18=result->mInnerStructName,
        result->mInnerStructName=(char* )come_increment_ref_count((char* )come_memdup(self->mInnerStructName, "sType_clone", 47, "char* "));
        __dec_obj18 = come_decrement_ref_count(__dec_obj18, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result->mAnonymousVarName=self->mAnonymousVarName;
    }
    if(self!=((void*)0)) {
        result->mInline=self->mInline;
    }
    if(self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj19=result->mAsmName,
        result->mAsmName=(char* )come_increment_ref_count((char* )come_memdup(self->mAsmName, "sType_clone", 50, "char* "));
        __dec_obj19 = come_decrement_ref_count(__dec_obj19, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result->mTypedef=self->mTypedef;
    }
    if(self!=((void*)0)) {
        result->mMultipleTypes=self->mMultipleTypes;
    }
    if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj23=result->mArrayNum,
        result->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mArrayNum));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj23,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mVarNameArrayNum!=((void*)0)) {
        __dec_obj24=result->mVarNameArrayNum,
        result->mVarNameArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mVarNameArrayNum));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj24,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mArrayStatic!=((void*)0)) {
        __dec_obj25=result->mArrayStatic,
        result->mArrayStatic=(struct list$1int$*)come_increment_ref_count(list$1int$$p_clone(self->mArrayStatic));
        come_call_finalizer(list$1int$_finalize, __dec_obj25,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mArrayRestrict!=((void*)0)) {
        __dec_obj26=result->mArrayRestrict,
        result->mArrayRestrict=(struct list$1int$*)come_increment_ref_count(list$1int$$p_clone(self->mArrayRestrict));
        come_call_finalizer(list$1int$_finalize, __dec_obj26,(void*)0, (void*)0, 0, 0, 0, (void*)0);
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
        __dec_obj27=result->mTypedefOriginalType,
        result->mTypedefOriginalType=(struct sType* )come_increment_ref_count(sType_clone(self->mTypedefOriginalType));
        come_call_finalizer(sType_finalize, __dec_obj27,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj28=result->mOriginalTypeName,
        result->mOriginalTypeName=(char* )come_increment_ref_count((char* )come_memdup(self->mOriginalTypeName, "sType_clone", 63, "char* "));
        __dec_obj28 = come_decrement_ref_count(__dec_obj28, (void*)0, (void*)0, 0,0, (void*)0);
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
        __dec_obj29=result->mParamTypes,
        result->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mParamTypes));
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj29,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj33=result->mParamNames,
        result->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->mParamNames));
        come_call_finalizer(list$1char$ph_finalize, __dec_obj33,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj34=result->mResultType,
        result->mResultType=(struct sType* )come_increment_ref_count(sType_clone(self->mResultType));
        come_call_finalizer(sType_finalize, __dec_obj34,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)) {
        result->mVarArgs=self->mVarArgs;
    }
    if(self!=((void*)0)&&self->mTypeOfNode!=((void*)0)) {
        __dec_obj35=result->mTypeOfNode,
        result->mTypeOfNode=(struct sNode*)come_increment_ref_count(sNode_clone(self->mTypeOfNode));
        (__dec_obj35 ? __dec_obj35 = come_decrement_ref_count(__dec_obj35, ((struct sNode*)__dec_obj35)->finalize, ((struct sNode*)__dec_obj35)->_protocol_obj, 0,0, (void*)0) :0);
    }
    __result_obj__0 = result;
    come_call_finalizer(sType_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
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
        __result_obj__0 = (struct list$1sType$ph*)come_increment_ref_count(((void*)0));
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    result=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), (void*)0, 1876, "struct list$1sType$ph*"))));
    it=self->head;
    while(it!=((void*)0)) {
        if(1) {
            list$1sType$ph_add(result,(struct sType* )come_increment_ref_count(sType_clone(it->item)));
        }
        else {
            list$1sType$ph_add(result,(struct sType* )come_increment_ref_count(sType_clone(it->item)));
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
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_initialize"; neo_current_frame = &fr;
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

static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_add"; neo_current_frame = &fr;
    struct list$1sType$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1sType$ph* litem;
    struct sType*  __dec_obj5  ;
    struct list_item$1sType$ph* litem_2;
    struct sType*  __dec_obj6  ;
    struct list_item$1sType$ph* litem_3;
    struct sType*  __dec_obj7  ;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), (void*)0, 1897, "struct list_item$1sType$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj5=litem->item,
        litem->item=(struct sType* )come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj5,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        litem_2=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), (void*)0, 1907, "struct list_item$1sType$ph*"))));
        litem_2->prev=self->head;
        litem_2->next=((void*)0);
        __dec_obj6=litem_2->item,
        litem_2->item=(struct sType* )come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj6,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem_2;
        self->head->next=litem_2;
    }
    else {
        litem_3=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), (void*)0, 1917, "struct list_item$1sType$ph*"))));
        litem_3->prev=self->tail;
        litem_3->next=((void*)0);
        __dec_obj7=litem_3->item,
        litem_3->item=(struct sType* )come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj7,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail->next=litem_3;
        self->tail=litem_3;
    }
    self->len++;
    __result_obj__0 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
    __result_obj__0 = (struct sNode*)come_increment_ref_count(result);
    ((result) ? result = come_decrement_ref_count(result, ((struct sNode*)result)->finalize, ((struct sNode*)result)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
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
        __result_obj__0 = (struct list$1sNode$ph*)come_increment_ref_count(((void*)0));
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    result=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), (void*)0, 1876, "struct list$1sNode$ph*"))));
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
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_initialize"; neo_current_frame = &fr;
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
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_add"; neo_current_frame = &fr;
    struct list$1sNode$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1sNode$ph* litem;
    struct sNode* __dec_obj20;
    struct list_item$1sNode$ph* litem_4;
    struct sNode* __dec_obj21;
    struct list_item$1sNode$ph* litem_5;
    struct sNode* __dec_obj22;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), (void*)0, 1897, "struct list_item$1sNode$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj20=litem->item,
        litem->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj20 ? __dec_obj20 = come_decrement_ref_count(__dec_obj20, ((struct sNode*)__dec_obj20)->finalize, ((struct sNode*)__dec_obj20)->_protocol_obj, 0,0, (void*)0) :0);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        litem_4=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), (void*)0, 1907, "struct list_item$1sNode$ph*"))));
        litem_4->prev=self->head;
        litem_4->next=((void*)0);
        __dec_obj21=litem_4->item,
        litem_4->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj21 ? __dec_obj21 = come_decrement_ref_count(__dec_obj21, ((struct sNode*)__dec_obj21)->finalize, ((struct sNode*)__dec_obj21)->_protocol_obj, 0,0, (void*)0) :0);
        self->tail=litem_4;
        self->head->next=litem_4;
    }
    else {
        litem_5=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), (void*)0, 1917, "struct list_item$1sNode$ph*"))));
        litem_5->prev=self->tail;
        litem_5->next=((void*)0);
        __dec_obj22=litem_5->item,
        litem_5->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj22 ? __dec_obj22 = come_decrement_ref_count(__dec_obj22, ((struct sNode*)__dec_obj22)->finalize, ((struct sNode*)__dec_obj22)->_protocol_obj, 0,0, (void*)0) :0);
        self->tail->next=litem_5;
        self->tail=litem_5;
    }
    self->len++;
    __result_obj__0 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0):(void*)0);
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
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
        __result_obj__0 = (struct list$1int$*)come_increment_ref_count(((void*)0));
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    result=(struct list$1int$*)come_increment_ref_count(list$1int$_initialize((struct list$1int$*)come_increment_ref_count((struct list$1int$*)come_calloc(1, sizeof(struct list$1int$)*(1), (void*)0, 1876, "struct list$1int$*"))));
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
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$_initialize"; neo_current_frame = &fr;
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
        litem=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), (void*)0, 1897, "struct list_item$1int$*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        litem->item=item;
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        litem_6=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), (void*)0, 1907, "struct list_item$1int$*"))));
        litem_6->prev=self->head;
        litem_6->next=((void*)0);
        litem_6->item=item;
        self->tail=litem_6;
        self->head->next=litem_6;
    }
    else {
        litem_7=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), (void*)0, 1917, "struct list_item$1int$*"))));
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
        come_call_finalizer(list_item$1int$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(((void*)0));
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    result=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), (void*)0, 1876, "struct list$1char$ph*"))));
    it=self->head;
    while(it!=((void*)0)) {
        if(1) {
            list$1char$ph_add(result,(char* )come_increment_ref_count((char* )come_memdup(it->item, "/usr/local/include/neo-c.h", 1881, "char* ")));
        }
        else {
            list$1char$ph_add(result,(char* )come_increment_ref_count((char* )come_memdup(it->item, "/usr/local/include/neo-c.h", 1884, "char* ")));
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
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_initialize"; neo_current_frame = &fr;
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

static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_add"; neo_current_frame = &fr;
    struct list$1char$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1char$ph* litem;
    char*  __dec_obj30  ;
    struct list_item$1char$ph* litem_8;
    char*  __dec_obj31  ;
    struct list_item$1char$ph* litem_9;
    char*  __dec_obj32  ;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), (void*)0, 1897, "struct list_item$1char$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj30=litem->item,
        litem->item=(char* )come_increment_ref_count(item);
        __dec_obj30 = come_decrement_ref_count(__dec_obj30, (void*)0, (void*)0, 0,0, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        litem_8=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), (void*)0, 1907, "struct list_item$1char$ph*"))));
        litem_8->prev=self->head;
        litem_8->next=((void*)0);
        __dec_obj31=litem_8->item,
        litem_8->item=(char* )come_increment_ref_count(item);
        __dec_obj31 = come_decrement_ref_count(__dec_obj31, (void*)0, (void*)0, 0,0, (void*)0);
        self->tail=litem_8;
        self->head->next=litem_8;
    }
    else {
        litem_9=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), (void*)0, 1917, "struct list_item$1char$ph*"))));
        litem_9->prev=self->tail;
        litem_9->next=((void*)0);
        __dec_obj32=litem_9->item,
        litem_9->item=(char* )come_increment_ref_count(item);
        __dec_obj32 = come_decrement_ref_count(__dec_obj32, (void*)0, (void*)0, 0,0, (void*)0);
        self->tail->next=litem_9;
        self->tail=litem_9;
    }
    self->len++;
    __result_obj__0 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0));
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
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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

static void CVALUE_finalize(struct CVALUE*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "CVALUE_finalize"; neo_current_frame = &fr;
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

static struct list$1sType$ph* list$1sType$ph_reset(struct list$1sType$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_reset"; neo_current_frame = &fr;
    struct list$1sType$ph* __result_obj__0;
    struct list_item$1sType$ph* it;
    struct list_item$1sType$ph* prev_it;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
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

static struct list$1sType$ph* list$1sType$ph_push_back(struct list$1sType$ph* self, struct sType*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_push_back"; neo_current_frame = &fr;
    struct list$1sType$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1sType$ph* litem;
    struct sType*  __dec_obj38  ;
    struct list_item$1sType$ph* litem_12;
    struct sType*  __dec_obj39  ;
    struct list_item$1sType$ph* litem_13;
    struct sType*  __dec_obj40  ;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), (void*)0, 1982, "struct list_item$1sType$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj38=litem->item,
        litem->item=(struct sType* )come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj38,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        litem_12=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), (void*)0, 1992, "struct list_item$1sType$ph*"))));
        litem_12->prev=self->head;
        litem_12->next=((void*)0);
        __dec_obj39=litem_12->item,
        litem_12->item=(struct sType* )come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj39,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem_12;
        self->head->next=litem_12;
    }
    else {
        litem_13=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), (void*)0, 2002, "struct list_item$1sType$ph*"))));
        litem_13->prev=self->tail;
        litem_13->next=((void*)0);
        __dec_obj40=litem_13->item,
        litem_13->item=(struct sType* )come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj40,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail->next=litem_13;
        self->tail=litem_13;
    }
    self->len++;
    __result_obj__0 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
    struct sType*  default_value_17  ;
    if(self==((void*)0)) {
        memset(&default_value,0,sizeof(struct sType* ));
        __result_obj__0 = (struct sType* )come_increment_ref_count(default_value);
        neo_current_frame = fr.prev;
        come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    if(position<0) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(it!=((void*)0)) {
        if(position==i) {
            __result_obj__0 = (struct sType* )come_increment_ref_count(it->item);
            neo_current_frame = fr.prev;
            come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__0;
        }
        it=it->next;
        i++;
    }
    memset(&default_value_17,0,sizeof(struct sType* ));
    __result_obj__0 = (struct sType* )come_increment_ref_count(default_value_17);
    neo_current_frame = fr.prev;
    come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct sType*  list$1sType$ph_operator_load_element(struct list$1sType$ph* self, int position)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_operator_load_element"; neo_current_frame = &fr;
    struct sType*  default_value  ;
    struct sType*  __result_obj__0  ;
    struct list_item$1sType$ph* it;
    int i;
    struct sType*  default_value_18  ;
    if(self==((void*)0)) {
        memset(&default_value,0,sizeof(struct sType* ));
        __result_obj__0 = (struct sType* )come_increment_ref_count(default_value);
        neo_current_frame = fr.prev;
        come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    if(position<0) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(it!=((void*)0)) {
        if(position==i) {
            __result_obj__0 = (struct sType* )come_increment_ref_count(it->item);
            neo_current_frame = fr.prev;
            come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__0;
        }
        it=it->next;
        i++;
    }
    memset(&default_value_18,0,sizeof(struct sType* ));
    __result_obj__0 = (struct sType* )come_increment_ref_count(default_value_18);
    neo_current_frame = fr.prev;
    come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

struct sType*  solve_method_generics(struct sType*  type  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "solve_method_generics"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sType*  result  ;
    struct sClass*  klass  ;
    int generics_number;
    struct list$1sNode$ph* array_num;
    int pointer_num;
    _Bool heap;
    _Bool deffer_right_value;
    _Bool norecord_;
    _Bool refference_;
    _Bool optional_;
    _Bool no_heap;
    _Bool no_calling_destructor;
    _Bool constant_;
    _Bool norecord__45;
    int minus_pointer_num;
    void* __right_value1 = (void*)0;
    struct sType*  __dec_obj49  ;
    struct list$1sNode$ph* __dec_obj50;
    void* __right_value2 = (void*)0;
    struct sType*  generics_type  ;
    struct sType*  type_46  ;
    struct sType*  type2  ;
    struct sType*  __dec_obj51  ;
    struct sType*  generics_type_47  ;
    struct sType*  type_48  ;
    struct sType*  type2_49  ;
    struct sType*  __dec_obj52  ;
    int i;
    struct list$1sType$ph* o2_saved;
    struct sType*  it  ;
    struct list$1sType$ph* o2_saved_51;
    struct sType*  it_52  ;
    struct sType*  __dec_obj54  ;
    struct sType*  __result_obj__0  ;
    result=(struct sType* )come_increment_ref_count(sType_clone(type));
    klass=type->mClass;
    if(klass->mMethodGenerics&&info->method_generics_types&&list$1sType$ph_length(info->method_generics_types)>0) {
        generics_number=klass->mMethodGenericsNum;
        if(generics_number>=list$1sType$ph_length(info->method_generics_types)) {
            err_msg(info,"invalid method generics parametor number. %d %d",generics_number,list$1sType$ph_length(info->method_generics_types));
            exit(2);
        }
        array_num=(struct list$1sNode$ph*)come_increment_ref_count(type->mArrayNum);
        pointer_num=type->mPointerNum;
        heap=type->mHeap;
        deffer_right_value=type->mDefferRightValue;
        norecord_=type->mNorecord;
        refference_=type->mRefference;
        optional_=type->mOptional;
        no_heap=type->mNoHeap;
        no_calling_destructor=type->mNoCallingDestructor;
        constant_=type->mConstant;
        norecord__45=type->mNorecord;
        minus_pointer_num=type->mMinusPointerNum;
        __dec_obj49=result,
        result=(struct sType* )come_increment_ref_count(sType_clone(((struct sType* )(__right_value0=list$1sType$ph_operator_load_element(info->method_generics_types,generics_number)))));
        come_call_finalizer(sType_finalize, __dec_obj49,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        if(heap) {
            result->mHeap=heap||result->mHeap;
        }
        if(norecord__45) {
            result->mNorecord=norecord__45||result->mNorecord;
        }
        if(constant_) {
            result->mConstant=constant_||result->mConstant;
        }
        if(deffer_right_value) {
            result->mDefferRightValue=deffer_right_value||result->mDefferRightValue;
        }
        if(no_heap) {
            result->mNoHeap=(_Bool)1;
            result->mHeap=(_Bool)0;
        }
        if(no_calling_destructor) {
            result->mNoCallingDestructor=(_Bool)1;
        }
        if(list$1sNode$ph_length(array_num)>0) {
            __dec_obj50=result->mArrayNum,
            result->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(array_num);
            come_call_finalizer(list$1sNode$ph_finalize, __dec_obj50,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(pointer_num>0) {
            result->mPointerNum+=pointer_num;
        }
        if(minus_pointer_num) {
            result->mPointerNum-=minus_pointer_num;
        }
        if(refference_) {
            generics_type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 335, "struct sType* ")),(char*)come_increment_ref_count(xsprintf("ref")),(_Bool)0,info,(_Bool)0,0));
            list$1sType$ph_add(generics_type->mGenericsTypes,(struct sType* )come_increment_ref_count(sType_clone(result)));
            type_46=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 338, "struct sType* ")),(char*)come_increment_ref_count(xsprintf("ref")),(_Bool)0,info,(_Bool)0,0));
            list$1sType$ph_add(type_46->mGenericsTypes,(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 339, "struct sType* ")),(char*)come_increment_ref_count(xsprintf("__generics_type0")),(_Bool)0,info,(_Bool)0,0)));
            type_46->mPointerNum++;
            type_46->mHeap=(_Bool)1;
            type2=(struct sType* )come_increment_ref_count(solve_generics(type_46,generics_type,info));
            __dec_obj51=result,
            result=(struct sType* )come_increment_ref_count(type2);
            come_call_finalizer(sType_finalize, __dec_obj51,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, generics_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, type_46, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(optional_) {
            generics_type_47=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 348, "struct sType* ")),(char*)come_increment_ref_count(xsprintf("optional")),(_Bool)0,info,(_Bool)0,0));
            list$1sType$ph_add(generics_type_47->mGenericsTypes,(struct sType* )come_increment_ref_count(sType_clone(type)));
            type_48=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 351, "struct sType* ")),(char*)come_increment_ref_count(xsprintf("optional")),(_Bool)0,info,(_Bool)0,0));
            list$1sType$ph_add(type_48->mGenericsTypes,(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 352, "struct sType* ")),(char*)come_increment_ref_count(xsprintf("__generics_type0")),(_Bool)0,info,(_Bool)0,0)));
            type_48->mPointerNum++;
            type_48->mHeap=(_Bool)1;
            type2_49=(struct sType* )come_increment_ref_count(solve_generics(type_48,generics_type_47,info));
            __dec_obj52=result,
            result=(struct sType* )come_increment_ref_count(type2_49);
            come_call_finalizer(sType_finalize, __dec_obj52,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, generics_type_47, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, type_48, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, type2_49, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer(list$1sNode$ph$p_finalize, array_num, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    i=0;
    for(o2_saved=(struct list$1sType$ph*)come_increment_ref_count(type->mGenericsTypes),it=list$1sType$ph_begin(o2_saved);!list$1sType$ph_end(o2_saved);it=list$1sType$ph_next(o2_saved)){
        list$1sType$ph_operator_store_element(result->mGenericsTypes,i,(struct sType* )come_increment_ref_count(solve_method_generics(it,info)));
        i++;
    }
    come_call_finalizer(list$1sType$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    i=0;
    for(o2_saved_51=(struct list$1sType$ph*)come_increment_ref_count(type->mParamTypes),it_52=list$1sType$ph_begin(o2_saved_51);!list$1sType$ph_end(o2_saved_51);it_52=list$1sType$ph_next(o2_saved_51)){
        list$1sType$ph_operator_store_element(result->mParamTypes,i,(struct sType* )come_increment_ref_count(solve_method_generics(it_52,info)));
        i++;
    }
    come_call_finalizer(list$1sType$ph$p_finalize, o2_saved_51, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(type->mResultType) {
        __dec_obj54=result->mResultType,
        result->mResultType=(struct sType* )come_increment_ref_count(solve_method_generics(type->mResultType,info));
        come_call_finalizer(sType_finalize, __dec_obj54,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result_obj__0 = (struct sType* )come_increment_ref_count(result);
    come_call_finalizer(sType_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static void list$1sType$ph_operator_store_element(struct list$1sType$ph* self, int position, struct sType*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_operator_store_element"; neo_current_frame = &fr;
    list$1sType$ph_replace(self,position,(struct sType* )come_increment_ref_count(item));
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
    int i_50;
    struct sType*  __dec_obj53  ;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
        for(i=0;i<position-len;i++){
            memset(&default_value,0,sizeof(struct sType* ));
            list$1sType$ph_push_back(self,default_value);
        }
        list$1sType$ph_push_back(self,(struct sType* )come_increment_ref_count(item));
        __result_obj__0 = self;
        come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    it=self->head;
    i_50=0;
    while(it!=((void*)0)) {
        if(position==i_50) {
            __dec_obj53=it->item,
            it->item=(struct sType* )come_increment_ref_count(item);
            come_call_finalizer(sType_finalize, __dec_obj53,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            break;
        }
        it=it->next;
        i_50++;
    }
    __result_obj__0 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

void append_object_to_right_values(struct CVALUE*  come_value  , struct sType*  type  , struct sInfo*  info  , _Bool decrement_ref_count, struct sType*  obj_type  , char* obj_value, struct sVar*  obj_var  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "append_object_to_right_values"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sRightValueObject*  new_value  ;
    struct sType*  __dec_obj55  ;
    char*  __dec_obj56  ;
    char*  __dec_obj57  ;
    struct sType*  __dec_obj58  ;
    char*  __dec_obj59  ;
    _Bool already_defined;
    char*  buf  ;
    char*  __dec_obj63  ;
    void* __right_value1 = (void*)0;
    char*  __dec_obj64  ;
    if(gComeC) {
        neo_current_frame = fr.prev;
        return;
    }
    if(info->no_output_come_code) {
        neo_current_frame = fr.prev;
        return;
    }
    new_value=(struct sRightValueObject* )come_increment_ref_count((struct sRightValueObject *)come_calloc(1, sizeof(struct sRightValueObject )*(1), (void*)0, 389, "struct sRightValueObject* "));
    __dec_obj55=new_value->mType,
    new_value->mType=(struct sType* )come_increment_ref_count(sType_clone(type));
    come_call_finalizer(sType_finalize, __dec_obj55,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    new_value->mFreed=(_Bool)0;
    new_value->mID=info->right_value_num;
    __dec_obj56=new_value->mVarName,
    new_value->mVarName=(char* )come_increment_ref_count(xsprintf("__right_value%d",info->right_value_num++));
    __dec_obj56 = come_decrement_ref_count(__dec_obj56, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj57=new_value->mFunName,
    new_value->mFunName=(char* )come_increment_ref_count(info->come_fun->mName);
    __dec_obj57 = come_decrement_ref_count(__dec_obj57, (void*)0, (void*)0, 0,0, (void*)0);
    new_value->mBlockLevel=info->block_level;
    new_value->mDecrementRefCount=decrement_ref_count;
    if(obj_value) {
        __dec_obj58=new_value->mObjType,
        new_value->mObjType=(struct sType* )come_increment_ref_count(sType_clone(obj_type));
        come_call_finalizer(sType_finalize, __dec_obj58,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        __dec_obj59=new_value->mObjValue,
        new_value->mObjValue=(char* )come_increment_ref_count(__builtin_string(obj_value));
        __dec_obj59 = come_decrement_ref_count(__dec_obj59, (void*)0, (void*)0, 0,0, (void*)0);
        new_value->mObjVar=obj_var;
        if(!type->mHeap) {
            new_value->mNoFree=(_Bool)1;
        }
    }
    list$1sRightValueObject$ph_push_back(info->right_value_objects,(struct sRightValueObject* )come_increment_ref_count(new_value));
    if(type->mPointerNum>0) {
        already_defined=info->right_value_num-1<info->right_value_max&&info->right_value_max>0;
        if(already_defined) {
        }
        else {
            buf=(char* )come_increment_ref_count(xsprintf("void* __right_value%d = (void*)0;\n",info->right_value_num-1));
            add_come_code_at_function_head(info,buf);
            (buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        __dec_obj63=come_value->c_value_without_right_value_objects,
        come_value->c_value_without_right_value_objects=(char* )come_increment_ref_count((char* )come_memdup(come_value->c_value, "04heap.nc", 420, "char* "));
        __dec_obj63 = come_decrement_ref_count(__dec_obj63, (void*)0, (void*)0, 0,0, (void*)0);
        __dec_obj64=come_value->c_value,
        come_value->c_value=(char* )come_increment_ref_count(xsprintf("((%s)(%s=%s))",((char* )(__right_value0=make_type_name_string(type,info,(_Bool)0,(_Bool)1,(_Bool)0))),new_value->mVarName,come_value->c_value));
        __dec_obj64 = come_decrement_ref_count(__dec_obj64, (void*)0, (void*)0, 0,0, (void*)0);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        come_value->right_value_objects=new_value;
    }
    come_call_finalizer(sRightValueObject_finalize, new_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
}

static struct list$1sRightValueObject$ph* list$1sRightValueObject$ph_push_back(struct list$1sRightValueObject$ph* self, struct sRightValueObject*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sRightValueObject$ph_push_back"; neo_current_frame = &fr;
    struct list$1sRightValueObject$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1sRightValueObject$ph* litem;
    struct sRightValueObject*  __dec_obj60  ;
    struct list_item$1sRightValueObject$ph* litem_53;
    struct sRightValueObject*  __dec_obj61  ;
    struct list_item$1sRightValueObject$ph* litem_54;
    struct sRightValueObject*  __dec_obj62  ;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        come_call_finalizer(sRightValueObject_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1sRightValueObject$ph*)come_increment_ref_count(((struct list_item$1sRightValueObject$ph*)(__right_value0=(struct list_item$1sRightValueObject$ph*)come_calloc(1, sizeof(struct list_item$1sRightValueObject$ph)*(1), (void*)0, 1982, "struct list_item$1sRightValueObject$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj60=litem->item,
        litem->item=(struct sRightValueObject* )come_increment_ref_count(item);
        come_call_finalizer(sRightValueObject_finalize, __dec_obj60,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        litem_53=(struct list_item$1sRightValueObject$ph*)come_increment_ref_count(((struct list_item$1sRightValueObject$ph*)(__right_value0=(struct list_item$1sRightValueObject$ph*)come_calloc(1, sizeof(struct list_item$1sRightValueObject$ph)*(1), (void*)0, 1992, "struct list_item$1sRightValueObject$ph*"))));
        litem_53->prev=self->head;
        litem_53->next=((void*)0);
        __dec_obj61=litem_53->item,
        litem_53->item=(struct sRightValueObject* )come_increment_ref_count(item);
        come_call_finalizer(sRightValueObject_finalize, __dec_obj61,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem_53;
        self->head->next=litem_53;
    }
    else {
        litem_54=(struct list_item$1sRightValueObject$ph*)come_increment_ref_count(((struct list_item$1sRightValueObject$ph*)(__right_value0=(struct list_item$1sRightValueObject$ph*)come_calloc(1, sizeof(struct list_item$1sRightValueObject$ph)*(1), (void*)0, 2002, "struct list_item$1sRightValueObject$ph*"))));
        litem_54->prev=self->tail;
        litem_54->next=((void*)0);
        __dec_obj62=litem_54->item,
        litem_54->item=(struct sRightValueObject* )come_increment_ref_count(item);
        come_call_finalizer(sRightValueObject_finalize, __dec_obj62,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail->next=litem_54;
        self->tail=litem_54;
    }
    self->len++;
    __result_obj__0 = self;
    come_call_finalizer(sRightValueObject_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

void remove_object_from_right_values(int right_value_num, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "remove_object_from_right_values"; neo_current_frame = &fr;
    int i;
    _Bool found;
    struct list$1sRightValueObject$ph* o2_saved;
    struct sRightValueObject*  it  ;
    int id;
    if(gComeC) {
        neo_current_frame = fr.prev;
        return;
    }
    if(info->no_output_come_code) {
        neo_current_frame = fr.prev;
        return;
    }
    i=0;
    found=(_Bool)0;
    for(o2_saved=(struct list$1sRightValueObject$ph*)come_increment_ref_count(info->right_value_objects),it=list$1sRightValueObject$ph_begin(o2_saved);!list$1sRightValueObject$ph_end(o2_saved);it=list$1sRightValueObject$ph_next(o2_saved)){
        if(it->mID==right_value_num) {
            found=(_Bool)1;
            break;
        }
        i++;
    }
    come_call_finalizer(list$1sRightValueObject$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(!found) {
        neo_current_frame = fr.prev;
        return;
    }
    id=right_value_num;
    if(id+1>info->right_value_max) {
        info->right_value_max=id+1;
    }
    list$1sRightValueObject$ph_delete(info->right_value_objects,i,i+1);
    neo_current_frame = fr.prev;
}

static struct list$1sRightValueObject$ph* list$1sRightValueObject$ph_delete(struct list$1sRightValueObject$ph* self, int head, int tail)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sRightValueObject$ph_delete"; neo_current_frame = &fr;
    struct list$1sRightValueObject$ph* __result_obj__0;
    int tmp;
    struct list_item$1sRightValueObject$ph* it;
    int i;
    struct list_item$1sRightValueObject$ph* prev_it;
    struct list_item$1sRightValueObject$ph* it_55;
    int i_56;
    struct list_item$1sRightValueObject$ph* prev_it_57;
    struct list_item$1sRightValueObject$ph* it_58;
    struct list_item$1sRightValueObject$ph* head_prev_it;
    struct list_item$1sRightValueObject$ph* tail_it;
    int i_59;
    struct list_item$1sRightValueObject$ph* prev_it_60;
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
        list$1sRightValueObject$ph_reset(self);
    }
    else if(head==0) {
        it=self->head;
        i=0;
        while(it!=((void*)0)) {
            if(i<tail) {
                prev_it=it;
                it=it->next;
                i++;
                come_call_finalizer(list_item$1sRightValueObject$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
        it_55=self->head;
        i_56=0;
        while(it_55!=((void*)0)) {
            if(i_56==head) {
                self->tail=it_55->prev;
                self->tail->next=((void*)0);
            }
            if(i_56>=head) {
                prev_it_57=it_55;
                it_55=it_55->next;
                i_56++;
                come_call_finalizer(list_item$1sRightValueObject$ph$p_finalize, prev_it_57, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_55=it_55->next;
                i_56++;
            }
        }
    }
    else {
        it_58=self->head;
        head_prev_it=((void*)0);
        tail_it=((void*)0);
        i_59=0;
        while(it_58!=((void*)0)) {
            if(i_59==head) {
                head_prev_it=it_58->prev;
            }
            if(i_59==tail) {
                tail_it=it_58;
            }
            if(i_59>=head&&i_59<tail) {
                prev_it_60=it_58;
                it_58=it_58->next;
                i_59++;
                come_call_finalizer(list_item$1sRightValueObject$ph$p_finalize, prev_it_60, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_58=it_58->next;
                i_59++;
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

static struct list$1sRightValueObject$ph* list$1sRightValueObject$ph_reset(struct list$1sRightValueObject$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sRightValueObject$ph_reset"; neo_current_frame = &fr;
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

void remove_value_from_right_value_objects(struct CVALUE*  come_value  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "remove_value_from_right_value_objects"; neo_current_frame = &fr;
    struct sRightValueObject*  right_value_objects  ;
    int right_value_id;
    if(come_value->type->mPointerNum>0) {
        right_value_objects=come_value->right_value_objects;
        if(right_value_objects) {
            right_value_id=right_value_objects->mID;
            if(right_value_id!=-1) {
                remove_object_from_right_values(right_value_id,info);
            }
        }
    }
    neo_current_frame = fr.prev;
}

char*  increment_ref_count_object(struct sType*  type  , char* obj, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "increment_ref_count_object"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    struct sClass*  klass  ;
    char*  type_name  ;
    if(gComeC) {
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(obj))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    if(info->no_output_come_code) {
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(obj))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    klass=type->mClass;
    type_name=(char* )come_increment_ref_count(make_type_name_string(type,info,(_Bool)0,(_Bool)0,(_Bool)0));
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=xsprintf("(%s)come_increment_ref_count(%s)",type_name,obj))));
    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

void decrement_ref_count_object(struct sType*  type  , char* obj, struct sInfo*  info  , _Bool no_free)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "decrement_ref_count_object"; neo_current_frame = &fr;
    struct list$1CVALUE$ph* stack_saved;
    struct list$1sRightValueObject$ph* right_value_objects;
    struct sClass*  klass  ;
    void* __right_value0 = (void*)0;
    char*  name  ;
    _Bool no_decrement;
    char*  c_value  ;
    struct sClass*  klass_61  ;
    char* class_name;
    struct sType*  type2  ;
    char*  fun_name2  ;
    struct sType*  type_  ;
    struct sFun*  finalizer  ;
    char*  none_generics_name  ;
    char*  generics_fun_name  ;
    struct sGenericsFun*  generics_fun  ;
    struct tuple2$2char$ph_Bool$* multiple_assign_var1
;    char*  name_62  =0;
    _Bool err=0;
    int i;
    char*  new_fun_name  ;
    char*  __dec_obj65  ;
    struct tuple2$2sFun$pchar$ph* multiple_assign_var2
;    struct sFun*  fun  =0;
    char*  new_fun_name_63  =0;
    char*  __dec_obj66  ;
    char*  type_name  ;
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
    char*  type_name_64  ;
    char*  str  ;
    char*  str_65  ;
    struct list$1sRightValueObject$ph* __dec_obj67;
    struct list$1CVALUE$ph* __dec_obj68;
    memset(&i, 0, sizeof(i));
    if(gComeC) {
        neo_current_frame = fr.prev;
        return;
    }
    if(info->no_output_come_code) {
        neo_current_frame = fr.prev;
        return;
    }
    stack_saved=(struct list$1CVALUE$ph*)come_increment_ref_count(info->stack);
    right_value_objects=info->right_value_objects;
    klass=type->mClass;
    static int dec_num=0;
    name=(char* )come_increment_ref_count(xsprintf("__dec_obj%d",++dec_num));
    add_come_code_at_function_head(info,"%s;\n",((char* )(__right_value0=make_define_var(type,name,info,(_Bool)0,(_Bool)0))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    add_come_code(info,"%s=%s,\n",name,obj);
    obj=name;
    no_decrement=(_Bool)0;
    if(type->mPointerNum>0||type->mArrayPointerNum) {
        c_value=(char* )come_increment_ref_count(__builtin_string(obj));
        klass_61=type->mClass;
        class_name=klass_61->mName;
        const char* fun_name="finalize";
        type2=(struct sType* )come_increment_ref_count(sType_clone(type));
        type2->mHeap=(_Bool)0;
        fun_name2=(char* )come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
        type_=(struct sType* )come_increment_ref_count(get_no_solved_type2(type));
        finalizer=((void*)0);
        if(list$1sType$ph_length(type_->mGenericsTypes)>0) {
            finalizer=((struct sFun* )(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,fun_name2)));
            if(finalizer==((void*)0)) {
                none_generics_name=(char* )come_increment_ref_count(get_none_generics_name(type2->mClass->mName));
                generics_fun_name=(char* )come_increment_ref_count(xsprintf("%s_%s",none_generics_name,fun_name));
                generics_fun=((struct sGenericsFun* )(__right_value0=map$2char$phsGenericsFun$ph_operator_load_element(info->generics_funcs,generics_fun_name)));
                if(generics_fun) {
                    multiple_assign_var1=((struct tuple2$2char$ph_Bool$*)(__right_value0=create_generics_fun((char* )come_increment_ref_count(fun_name2),generics_fun,type_,info)));
                    name_62=(char* )come_increment_ref_count(multiple_assign_var1->v1);
                    err=multiple_assign_var1->v2;
                    come_call_finalizer(tuple2$2char$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    if(!err) {
                        printf("%s %d: can't create generics finalizer\n",info->sname,info->sline);
                        exit(2);
                    }
                    finalizer=((struct sFun* )(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,name_62)));
                    (name_62 = come_decrement_ref_count(name_62, (void*)0, (void*)0, 0, 0, (void*)0));
                }
                (none_generics_name = come_decrement_ref_count(none_generics_name, (void*)0, (void*)0, 0, 0, (void*)0));
                (generics_fun_name = come_decrement_ref_count(generics_fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
            }
        }
        else {
            for(i=128-1;i>=1;i--){
                new_fun_name=(char* )come_increment_ref_count(xsprintf("%s_v%d",fun_name2,i));
                finalizer=((struct sFun* )(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,new_fun_name)));
                if(finalizer) {
                    __dec_obj65=fun_name2,
                    fun_name2=(char* )come_increment_ref_count(__builtin_string(new_fun_name));
                    __dec_obj65 = come_decrement_ref_count(__dec_obj65, (void*)0, (void*)0, 0,0, (void*)0);
                    (new_fun_name = come_decrement_ref_count(new_fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
                    break;
                }
                (new_fun_name = come_decrement_ref_count(new_fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
            }
            if(finalizer==((void*)0)) {
                finalizer=((struct sFun* )(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,fun_name2)));
            }
        }
        if(finalizer==((void*)0)&&!type_->mClass->mProtocol&&!type_->mClass->mNumber&&list$1sNode$ph_length(type_->mArrayNum)==0) {
            multiple_assign_var2=((struct tuple2$2sFun$pchar$ph*)(__right_value0=create_finalizer_automatically(type_,fun_name,info)));
            fun=multiple_assign_var2->v1;
            new_fun_name_63=(char* )come_increment_ref_count(multiple_assign_var2->v2);
            come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            __dec_obj66=fun_name2,
            fun_name2=(char* )come_increment_ref_count(new_fun_name_63);
            __dec_obj66 = come_decrement_ref_count(__dec_obj66, (void*)0, (void*)0, 0,0, (void*)0);
            finalizer=fun;
            (new_fun_name_63 = come_decrement_ref_count(new_fun_name_63, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        if(finalizer!=((void*)0)) {
            if(klass_61->mProtocol&&type_->mPointerNum==1) {
                type_name=(char* )come_increment_ref_count(make_type_name_string(type_,info,(_Bool)0,(_Bool)0,(_Bool)0));
                if(c_value) {
                    add_come_last_code2(info,((char*)(__right_value11=xsprintf("come_call_finalizer(\%s, \%s, \%s ? ((\%s)\%s)->finalize:(void*)0, \%s ? ((\%s)\%s)->_protocol_obj:(void*)0, \%s, \%s, \%s, (void*)0)",((char* )(__right_value0=string_to_string(fun_name2))),((char* )(__right_value1=string_to_string(c_value))),((char* )(__right_value2=string_to_string(c_value))),((char* )(__right_value3=string_to_string(type_name))),((char* )(__right_value4=string_to_string(c_value))),((char* )(__right_value5=string_to_string(c_value))),((char* )(__right_value6=string_to_string(type_name))),((char* )(__right_value7=string_to_string(c_value))),((char* )(__right_value8=int_to_string(((type_->mAllocaValue)?(1):(0))))),((char* )(__right_value9=int_to_string(((no_decrement)?(1):(0))))),((char* )(__right_value10=int_to_string(((no_free)?(1):(0)))))))));
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
                }
                (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
            }
            else {
                if(c_value) {
                    add_come_last_code2(info,((char*)(__right_value5=xsprintf("come_call_finalizer(\%s, \%s,(void*)0, (void*)0, \%s, \%s, \%s, (void*)0)",((char* )(__right_value0=string_to_string(fun_name2))),((char* )(__right_value1=string_to_string(c_value))),((char* )(__right_value2=int_to_string(((type_->mAllocaValue)?(1):(0))))),((char* )(__right_value3=int_to_string(((no_decrement)?(1):(0))))),((char* )(__right_value4=int_to_string(((no_free)?(1):(0)))))))));
                    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
                    (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0));
                    (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1, 0, (void*)0));
                    (__right_value4 = come_decrement_ref_count(__right_value4, (void*)0, (void*)0, 1, 0, (void*)0));
                    (__right_value5 = come_decrement_ref_count(__right_value5, (void*)0, (void*)0, 1, 0, (void*)0));
                }
            }
        }
        else {
            if(klass_61->mProtocol&&type_->mPointerNum==1) {
                type_name_64=(char* )come_increment_ref_count(make_type_name_string(type_,info,(_Bool)0,(_Bool)0,(_Bool)0));
                str=(char*)come_increment_ref_count(xsprintf("(\%s ? \%s = come_decrement_ref_count(\%s, ((\%s)\%s)->finalize, ((\%s)\%s)->_protocol_obj, 0,\%s, (void*)0) :0)",((char* )(__right_value0=string_to_string(name))),((char* )(__right_value1=string_to_string(name))),((char* )(__right_value2=string_to_string(name))),((char* )(__right_value3=string_to_string(type_name_64))),((char* )(__right_value4=string_to_string(name))),((char* )(__right_value5=string_to_string(type_name_64))),((char* )(__right_value6=string_to_string(name))),((char* )(__right_value7=int_to_string(((no_free)?(1):(0)))))));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
                (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0));
                (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1, 0, (void*)0));
                (__right_value4 = come_decrement_ref_count(__right_value4, (void*)0, (void*)0, 1, 0, (void*)0));
                (__right_value5 = come_decrement_ref_count(__right_value5, (void*)0, (void*)0, 1, 0, (void*)0));
                (__right_value6 = come_decrement_ref_count(__right_value6, (void*)0, (void*)0, 1, 0, (void*)0));
                (__right_value7 = come_decrement_ref_count(__right_value7, (void*)0, (void*)0, 1, 0, (void*)0));
                add_come_last_code2(info,str);
                (type_name_64 = come_decrement_ref_count(type_name_64, (void*)0, (void*)0, 0, 0, (void*)0));
                (str = come_decrement_ref_count(str, (void*)0, (void*)0, 0, 0, (void*)0));
            }
            else {
                str_65=(char* )come_increment_ref_count(xsprintf(((char*)(__right_value1=xsprintf("%%s = come_decrement_ref_count(%%s, (void*)0, (void*)0, 0,\%s, (void*)0)",((char* )(__right_value0=int_to_string(((no_free)?(1):(0)))))))),name,name));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
                add_come_last_code2(info,str_65);
                (str_65 = come_decrement_ref_count(str_65, (void*)0, (void*)0, 0, 0, (void*)0));
            }
        }
        (c_value = come_decrement_ref_count(c_value, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (fun_name2 = come_decrement_ref_count(fun_name2, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sType_finalize, type_, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __dec_obj67=info->right_value_objects,
    info->right_value_objects=(struct list$1sRightValueObject$ph*)come_increment_ref_count(right_value_objects);
    come_call_finalizer(list$1sRightValueObject$ph_finalize, __dec_obj67,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj68=info->stack,
    info->stack=(struct list$1CVALUE$ph*)come_increment_ref_count(stack_saved);
    come_call_finalizer(list$1CVALUE$ph_finalize, __dec_obj68,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1CVALUE$ph$p_finalize, stack_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
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
        __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value);
        neo_current_frame = fr.prev;
        come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char* )key))%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if(string_equals(self->keys[it],key)) {
                __result_obj__0 = (struct sFun* )come_increment_ref_count(self->items[it]);
                neo_current_frame = fr.prev;
                come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
            it++;
            if(it>=self->size) {
                it=0;
            }
            else if(it==hash) {
                __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value);
                neo_current_frame = fr.prev;
                come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
        }
        else {
            __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value);
            neo_current_frame = fr.prev;
            come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__0;
        }
    }
    __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value);
    neo_current_frame = fr.prev;
    come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static void sFun_finalize(struct sFun*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sFun_finalize"; neo_current_frame = &fr;
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
    if(self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->mMiddleAttribute!=((void*)0)) {
        (self->mMiddleAttribute = come_decrement_ref_count(self->mMiddleAttribute, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->mFunAttribute!=((void*)0)) {
        (self->mFunAttribute = come_decrement_ref_count(self->mFunAttribute, (void*)0, (void*)0, 0, 0, (void*)0));
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
        come_call_finalizer(list_item$1sVar$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

static void list_item$1sVar$ph$p_finalize(struct list_item$1sVar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1sVar$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer(sVar_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

static void sVar_finalize(struct sVar*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sVar_finalize"; neo_current_frame = &fr;
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

static void sBlock_finalize(struct sBlock*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sBlock_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->mNodes!=((void*)0)) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mNodes, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        come_call_finalizer(sVarTable_finalize, self->mVarTable, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
        __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value);
        neo_current_frame = fr.prev;
        come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char* )key))%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if(string_equals(self->keys[it],key)) {
                __result_obj__0 = (struct sFun* )come_increment_ref_count(self->items[it]);
                neo_current_frame = fr.prev;
                come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
            it++;
            if(it>=self->size) {
                it=0;
            }
            else if(it==hash) {
                __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value);
                neo_current_frame = fr.prev;
                come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
        }
        else {
            __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value);
            neo_current_frame = fr.prev;
            come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__0;
        }
    }
    __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value);
    neo_current_frame = fr.prev;
    come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct sGenericsFun*  map$2char$phsGenericsFun$ph$p_operator_load_element(struct map$2char$phsGenericsFun$ph* self, char*  key  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsGenericsFun$ph$p_operator_load_element"; neo_current_frame = &fr;
    struct sGenericsFun*  default_value  ;
    struct sGenericsFun*  __result_obj__0  ;
    unsigned int hash;
    unsigned int it;
    memset(&default_value,0,sizeof(struct sGenericsFun* ));
    if(self==((void*)0)) {
        __result_obj__0 = (struct sGenericsFun* )come_increment_ref_count(default_value);
        neo_current_frame = fr.prev;
        come_call_finalizer(sGenericsFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char* )key))%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if(string_equals(self->keys[it],key)) {
                __result_obj__0 = (struct sGenericsFun* )come_increment_ref_count(self->items[it]);
                neo_current_frame = fr.prev;
                come_call_finalizer(sGenericsFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
            it++;
            if(it>=self->size) {
                it=0;
            }
            else if(it==hash) {
                __result_obj__0 = (struct sGenericsFun* )come_increment_ref_count(default_value);
                neo_current_frame = fr.prev;
                come_call_finalizer(sGenericsFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
        }
        else {
            __result_obj__0 = (struct sGenericsFun* )come_increment_ref_count(default_value);
            neo_current_frame = fr.prev;
            come_call_finalizer(sGenericsFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__0;
        }
    }
    __result_obj__0 = (struct sGenericsFun* )come_increment_ref_count(default_value);
    neo_current_frame = fr.prev;
    come_call_finalizer(sGenericsFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static void sGenericsFun_finalize(struct sGenericsFun*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sGenericsFun_finalize"; neo_current_frame = &fr;
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

static struct sGenericsFun*  map$2char$phsGenericsFun$ph_operator_load_element(struct map$2char$phsGenericsFun$ph* self, char*  key  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsGenericsFun$ph_operator_load_element"; neo_current_frame = &fr;
    struct sGenericsFun*  default_value  ;
    struct sGenericsFun*  __result_obj__0  ;
    unsigned int hash;
    unsigned int it;
    memset(&default_value,0,sizeof(struct sGenericsFun* ));
    if(self==((void*)0)) {
        __result_obj__0 = (struct sGenericsFun* )come_increment_ref_count(default_value);
        neo_current_frame = fr.prev;
        come_call_finalizer(sGenericsFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char* )key))%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if(string_equals(self->keys[it],key)) {
                __result_obj__0 = (struct sGenericsFun* )come_increment_ref_count(self->items[it]);
                neo_current_frame = fr.prev;
                come_call_finalizer(sGenericsFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
            it++;
            if(it>=self->size) {
                it=0;
            }
            else if(it==hash) {
                __result_obj__0 = (struct sGenericsFun* )come_increment_ref_count(default_value);
                neo_current_frame = fr.prev;
                come_call_finalizer(sGenericsFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
        }
        else {
            __result_obj__0 = (struct sGenericsFun* )come_increment_ref_count(default_value);
            neo_current_frame = fr.prev;
            come_call_finalizer(sGenericsFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__0;
        }
    }
    __result_obj__0 = (struct sGenericsFun* )come_increment_ref_count(default_value);
    neo_current_frame = fr.prev;
    come_call_finalizer(sGenericsFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static void tuple2$2char$ph_Bool$$p_finalize(struct tuple2$2char$ph_Bool$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2char$ph_Bool$$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    neo_current_frame = fr.prev;
}

static void tuple2$2sFun$pchar$ph$p_finalize(struct tuple2$2sFun$pchar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2sFun$pchar$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    neo_current_frame = fr.prev;
}

static void list$1sRightValueObject$ph_finalize(struct list$1sRightValueObject$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sRightValueObject$ph_finalize"; neo_current_frame = &fr;
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

static void list$1CVALUE$ph_finalize(struct list$1CVALUE$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1CVALUE$ph_finalize"; neo_current_frame = &fr;
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
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1CVALUE$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer(CVALUE_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
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
        come_call_finalizer(list_item$1CVALUE$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

void on_drop_object(struct sType*  type  , char* obj, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "on_drop_object"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sType*  type_  ;
    char*  c_value  ;
    struct sType*  type2  ;
    char*  fun_name2  ;
    struct sFun*  dropper  ;
    char*  none_generics_name  ;
    char*  generics_fun_name  ;
    struct sGenericsFun*  generics_fun  ;
    struct tuple2$2char$ph_Bool$* multiple_assign_var3
;    char*  name  =0;
    _Bool err=0;
    int i;
    char*  new_fun_name  ;
    char*  __dec_obj69  ;
    void* __right_value1 = (void*)0;
    void* __right_value2 = (void*)0;
    memset(&i, 0, sizeof(i));
    if(gComeC) {
        neo_current_frame = fr.prev;
        return;
    }
    if(info->no_output_come_code) {
        neo_current_frame = fr.prev;
        return;
    }
    type_=(struct sType* )come_increment_ref_count(get_no_solved_type2(type));
    if(type_->mClass->mStruct||list$1sType$ph_length(type_->mGenericsTypes)>0) {
        c_value=(char* )come_increment_ref_count(__builtin_string(obj));
        const char* fun_name="on_drop";
        type2=(struct sType* )come_increment_ref_count(sType_clone(type_));
        type2->mHeap=(_Bool)0;
        fun_name2=(char* )come_increment_ref_count(create_method_name(type_,(_Bool)0,fun_name,info,(_Bool)1));
        dropper=((void*)0);
        if(list$1sType$ph_length(type_->mGenericsTypes)>0) {
            dropper=((struct sFun* )(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,fun_name2)));
            if(dropper==((void*)0)) {
                none_generics_name=(char* )come_increment_ref_count(get_none_generics_name(type2->mClass->mName));
                generics_fun_name=(char* )come_increment_ref_count(xsprintf("%s_%s",none_generics_name,fun_name));
                generics_fun=((struct sGenericsFun* )(__right_value0=map$2char$phsGenericsFun$ph_operator_load_element(info->generics_funcs,generics_fun_name)));
                if(generics_fun) {
                    multiple_assign_var3=((struct tuple2$2char$ph_Bool$*)(__right_value0=create_generics_fun((char* )come_increment_ref_count(fun_name2),generics_fun,type_,info)));
                    name=(char* )come_increment_ref_count(multiple_assign_var3->v1);
                    err=multiple_assign_var3->v2;
                    come_call_finalizer(tuple2$2char$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    if(!err) {
                        printf("%s %d: can't create generics dropper\n",info->sname,info->sline);
                        exit(2);
                    }
                    dropper=((struct sFun* )(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,name)));
                    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
                }
                (none_generics_name = come_decrement_ref_count(none_generics_name, (void*)0, (void*)0, 0, 0, (void*)0));
                (generics_fun_name = come_decrement_ref_count(generics_fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
            }
        }
        else {
            for(i=128-1;i>=1;i--){
                new_fun_name=(char* )come_increment_ref_count(xsprintf("%s_v%d",fun_name2,i));
                dropper=((struct sFun* )(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,new_fun_name)));
                if(dropper) {
                    __dec_obj69=fun_name2,
                    fun_name2=(char* )come_increment_ref_count(__builtin_string(new_fun_name));
                    __dec_obj69 = come_decrement_ref_count(__dec_obj69, (void*)0, (void*)0, 0,0, (void*)0);
                    (new_fun_name = come_decrement_ref_count(new_fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
                    break;
                }
                (new_fun_name = come_decrement_ref_count(new_fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
            }
            if(dropper==((void*)0)) {
                dropper=((struct sFun* )(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,fun_name2)));
            }
        }
        if(dropper!=((void*)0)) {
            if(c_value) {
                add_come_code(info,((char*)(__right_value2=xsprintf("\%s(\%s);\n",((char* )(__right_value0=string_to_string(fun_name2))),((char* )(__right_value1=string_to_string(c_value)))))));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
                (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0));
            }
        }
        (c_value = come_decrement_ref_count(c_value, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (fun_name2 = come_decrement_ref_count(fun_name2, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    come_call_finalizer(sType_finalize, type_, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
}

void free_object(struct sType*  type  , char* obj, _Bool no_decrement, _Bool no_free, struct sInfo*  info  , _Bool ret_value)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "free_object"; neo_current_frame = &fr;
    struct list$1CVALUE$ph* stack_saved;
    struct list$1sRightValueObject$ph* right_value_objects;
    struct sType*  type_before  ;
    void* __right_value0 = (void*)0;
    struct sType*  type_  ;
    char*  c_value  ;
    struct sClass*  klass  ;
    char* class_name;
    struct sType*  type2  ;
    char*  fun_name2  ;
    struct sFun*  finalizer  ;
    char*  none_generics_name  ;
    char*  generics_fun_name  ;
    struct sGenericsFun*  generics_fun  ;
    struct tuple2$2char$ph_Bool$* multiple_assign_var4
;    char*  name  =0;
    _Bool err=0;
    int i;
    char*  new_fun_name  ;
    char*  __dec_obj70  ;
    struct tuple2$2sFun$pchar$ph* multiple_assign_var5
;    struct sFun*  fun  =0;
    char*  new_fun_name_66  =0;
    char*  __dec_obj71  ;
    char*  type_name  ;
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
    struct list$1tuple2$2char$phsType$ph$ph* o2_saved;
    struct tuple2$2char$phsType$ph* it;
    struct tuple2$2char$phsType$ph* multiple_assign_var6
;    char*  name_69  =0;
    struct sType*  field_type  =0;
    char*  obj_70  ;
    struct list$1tuple2$2char$phsType$ph$ph* o2_saved_71;
    struct tuple2$2char$phsType$ph* it_72;
    struct tuple2$2char$phsType$ph* multiple_assign_var7
;    char*  name_73  =0;
    struct sType*  field_type_74  =0;
    char*  obj_75  ;
    char*  type_name_76  ;
    struct list$1sRightValueObject$ph* __dec_obj72;
    struct list$1CVALUE$ph* __dec_obj73;
    memset(&i, 0, sizeof(i));
    if(gComeC) {
        neo_current_frame = fr.prev;
        return;
    }
    if(info->no_output_come_code) {
        neo_current_frame = fr.prev;
        return;
    }
    if(type->mDefferRightValue) {
        on_drop_object(type,obj,info);
    }
    stack_saved=(struct list$1CVALUE$ph*)come_increment_ref_count(info->stack);
    right_value_objects=info->right_value_objects;
    type_before=type;
    type_=(struct sType* )come_increment_ref_count(get_no_solved_type2(type));
    if(type_->mPointerNum>0||type_->mClass->mProtocol||list$1sType$ph_length(type_->mGenericsTypes)>0) {
        c_value=(char* )come_increment_ref_count(__builtin_string(obj));
        klass=type_->mClass;
        class_name=klass->mName;
        const char* fun_name="finalize";
        type2=(struct sType* )come_increment_ref_count(sType_clone(type_));
        type2->mHeap=(_Bool)0;
        fun_name2=(char* )come_increment_ref_count(create_method_name(type_,(_Bool)0,fun_name,info,(_Bool)1));
        finalizer=((void*)0);
        if(list$1sType$ph_length(type_->mGenericsTypes)>0) {
            finalizer=((struct sFun* )(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,fun_name2)));
            if(finalizer==((void*)0)) {
                none_generics_name=(char* )come_increment_ref_count(get_none_generics_name(type2->mClass->mName));
                generics_fun_name=(char* )come_increment_ref_count(xsprintf("%s_%s",none_generics_name,fun_name));
                generics_fun=((struct sGenericsFun* )(__right_value0=map$2char$phsGenericsFun$ph_operator_load_element(info->generics_funcs,generics_fun_name)));
                if(generics_fun) {
                    multiple_assign_var4=((struct tuple2$2char$ph_Bool$*)(__right_value0=create_generics_fun((char* )come_increment_ref_count(fun_name2),generics_fun,type_,info)));
                    name=(char* )come_increment_ref_count(multiple_assign_var4->v1);
                    err=multiple_assign_var4->v2;
                    come_call_finalizer(tuple2$2char$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    if(!err) {
                        printf("%s %d: can't create generics finalizer\n",info->sname,info->sline);
                        exit(2);
                    }
                    finalizer=((struct sFun* )(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,name)));
                    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
                }
                (none_generics_name = come_decrement_ref_count(none_generics_name, (void*)0, (void*)0, 0, 0, (void*)0));
                (generics_fun_name = come_decrement_ref_count(generics_fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
            }
        }
        else {
            for(i=128-1;i>=1;i--){
                new_fun_name=(char* )come_increment_ref_count(xsprintf("%s_v%d",fun_name2,i));
                finalizer=((struct sFun* )(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,new_fun_name)));
                if(finalizer) {
                    __dec_obj70=fun_name2,
                    fun_name2=(char* )come_increment_ref_count(__builtin_string(new_fun_name));
                    __dec_obj70 = come_decrement_ref_count(__dec_obj70, (void*)0, (void*)0, 0,0, (void*)0);
                    (new_fun_name = come_decrement_ref_count(new_fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
                    break;
                }
                (new_fun_name = come_decrement_ref_count(new_fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
            }
            if(finalizer==((void*)0)) {
                finalizer=((struct sFun* )(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,fun_name2)));
            }
        }
        if(finalizer==((void*)0)&&!type_->mClass->mProtocol&&!type_->mClass->mNumber&&list$1sNode$ph_length(type_->mArrayNum)==0) {
            multiple_assign_var5=((struct tuple2$2sFun$pchar$ph*)(__right_value0=create_finalizer_automatically(type_,fun_name,info)));
            fun=multiple_assign_var5->v1;
            new_fun_name_66=(char* )come_increment_ref_count(multiple_assign_var5->v2);
            come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            __dec_obj71=fun_name2,
            fun_name2=(char* )come_increment_ref_count(new_fun_name_66);
            __dec_obj71 = come_decrement_ref_count(__dec_obj71, (void*)0, (void*)0, 0,0, (void*)0);
            finalizer=fun;
            (new_fun_name_66 = come_decrement_ref_count(new_fun_name_66, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        if(finalizer!=((void*)0)) {
            if(klass->mProtocol&&type_->mPointerNum==1) {
                type_name=(char* )come_increment_ref_count(make_type_name_string(type_,info,(_Bool)0,(_Bool)0,(_Bool)0));
                if(c_value) {
                    add_come_code(info,((char*)(__right_value12=xsprintf("come_call_finalizer(\%s, \%s, \%s ? ((\%s)\%s)->finalize :(void*)0, \%s ? ((\%s)\%s)->_protocol_obj :(void*)0, \%s , \%s, \%s, (void*)0)\%s",((char* )(__right_value0=string_to_string(fun_name2))),((char* )(__right_value1=string_to_string(c_value))),((char* )(__right_value2=string_to_string(c_value))),((char* )(__right_value3=string_to_string(type_name))),((char* )(__right_value4=string_to_string(c_value))),((char* )(__right_value5=string_to_string(c_value))),((char* )(__right_value6=string_to_string(type_name))),((char* )(__right_value7=string_to_string(c_value))),((char* )(__right_value8=int_to_string(((type_->mAllocaValue)?(1):(0))))),((char* )(__right_value9=int_to_string(((no_decrement)?(1):(0))))),((char* )(__right_value10=int_to_string(((no_free)?(1):(0))))),((char* )(__right_value11=charp_to_string((((info->in_conditional)?(";"):(";\n"))))))))));
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
                }
                (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
            }
            else {
                if(c_value) {
                    add_come_code(info,((char*)(__right_value6=xsprintf("come_call_finalizer(\%s, \%s, (void*)0, (void*)0, \%s, \%s, \%s, (void*)0)\%s",((char* )(__right_value0=string_to_string(fun_name2))),((char* )(__right_value1=string_to_string(c_value))),((char* )(__right_value2=int_to_string(((type_->mAllocaValue)?(1):(0))))),((char* )(__right_value3=int_to_string(((no_decrement)?(1):(0))))),((char* )(__right_value4=int_to_string(((no_free)?(1):(0))))),((char* )(__right_value5=charp_to_string((((info->in_conditional)?(";"):(";\n"))))))))));
                    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
                    (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0));
                    (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1, 0, (void*)0));
                    (__right_value4 = come_decrement_ref_count(__right_value4, (void*)0, (void*)0, 1, 0, (void*)0));
                    (__right_value5 = come_decrement_ref_count(__right_value5, (void*)0, (void*)0, 1, 0, (void*)0));
                    (__right_value6 = come_decrement_ref_count(__right_value6, (void*)0, (void*)0, 1, 0, (void*)0));
                }
            }
        }
        else {
            if(klass->mStruct&&type_->mPointerNum==0) {
                for(o2_saved=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(klass->mFields),it=list$1tuple2$2char$phsType$ph$ph_begin(o2_saved);!list$1tuple2$2char$phsType$ph$ph_end(o2_saved);it=list$1tuple2$2char$phsType$ph$ph_next(o2_saved)){
                    multiple_assign_var6=it;
                    name_69=(char* )come_increment_ref_count(multiple_assign_var6->v1);
                    field_type=(struct sType* )come_increment_ref_count(multiple_assign_var6->v2);
                    if(field_type->mHeap&&field_type->mPointerNum>0) {
                        obj_70=(char* )come_increment_ref_count(xsprintf("(((%s)%s).%s)",((char* )(__right_value0=make_type_name_string(type_,info,(_Bool)0,(_Bool)0,(_Bool)0))),c_value,name_69));
                        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                        free_object(field_type,obj_70,no_decrement,no_free,info,(_Bool)0);
                        (obj_70 = come_decrement_ref_count(obj_70, (void*)0, (void*)0, 0, 0, (void*)0));
                    }
                    (name_69 = come_decrement_ref_count(name_69, (void*)0, (void*)0, 0, 0, (void*)0));
                    come_call_finalizer(sType_finalize, field_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else if(klass->mStruct&&type_->mPointerNum==1) {
                for(o2_saved_71=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(klass->mFields),it_72=list$1tuple2$2char$phsType$ph$ph_begin(o2_saved_71);!list$1tuple2$2char$phsType$ph$ph_end(o2_saved_71);it_72=list$1tuple2$2char$phsType$ph$ph_next(o2_saved_71)){
                    multiple_assign_var7=it_72;
                    name_73=(char* )come_increment_ref_count(multiple_assign_var7->v1);
                    field_type_74=(struct sType* )come_increment_ref_count(multiple_assign_var7->v2);
                    if(field_type_74->mHeap&&field_type_74->mPointerNum>0) {
                        obj_75=(char* )come_increment_ref_count(xsprintf("(((%s)%s)->%s)",((char* )(__right_value0=make_type_name_string(type_,info,(_Bool)0,(_Bool)0,(_Bool)0))),c_value,name_73));
                        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                        free_object(field_type_74,obj_75,no_decrement,no_free,info,(_Bool)0);
                        (obj_75 = come_decrement_ref_count(obj_75, (void*)0, (void*)0, 0, 0, (void*)0));
                    }
                    (name_73 = come_decrement_ref_count(name_73, (void*)0, (void*)0, 0, 0, (void*)0));
                    come_call_finalizer(sType_finalize, field_type_74, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, o2_saved_71, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(!type_->mAllocaValue) {
                if(klass->mProtocol&&type_->mPointerNum==1) {
                    if(c_value) {
                        type_name_76=(char* )come_increment_ref_count(make_type_name_string(type_,info,(_Bool)0,(_Bool)0,(_Bool)0));
                        add_come_code(info,((char*)(__right_value10=xsprintf("((\%s) ? \%s = come_decrement_ref_count(\%s, ((\%s)\%s)->finalize, ((\%s)\%s)->_protocol_obj, \%s, \%s,(void*)0):(void*)0)\%s",((char* )(__right_value0=string_to_string(c_value))),((char* )(__right_value1=string_to_string(c_value))),((char* )(__right_value2=string_to_string(c_value))),((char* )(__right_value3=string_to_string(type_name_76))),((char* )(__right_value4=string_to_string(c_value))),((char* )(__right_value5=string_to_string(type_name_76))),((char* )(__right_value6=string_to_string(c_value))),((char* )(__right_value7=int_to_string(((no_decrement)?(1):(0))))),((char* )(__right_value8=int_to_string(((no_free)?(1):(0))))),((char* )(__right_value9=charp_to_string((";\n"))))))));
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
                        (type_name_76 = come_decrement_ref_count(type_name_76, (void*)0, (void*)0, 0, 0, (void*)0));
                    }
                }
                else {
                    if(c_value) {
                        add_come_code(info,((char*)(__right_value5=xsprintf("(\%s = come_decrement_ref_count(\%s, (void*)0, (void*)0, \%s, \%s, (void*)0))\%s",((char* )(__right_value0=string_to_string(c_value))),((char* )(__right_value1=string_to_string(c_value))),((char* )(__right_value2=int_to_string(((no_decrement)?(1):(0))))),((char* )(__right_value3=int_to_string(((no_free)?(1):(0))))),((char* )(__right_value4=charp_to_string((";\n"))))))));
                        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
                        (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0));
                        (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1, 0, (void*)0));
                        (__right_value4 = come_decrement_ref_count(__right_value4, (void*)0, (void*)0, 1, 0, (void*)0));
                        (__right_value5 = come_decrement_ref_count(__right_value5, (void*)0, (void*)0, 1, 0, (void*)0));
                    }
                }
            }
        }
        (c_value = come_decrement_ref_count(c_value, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (fun_name2 = come_decrement_ref_count(fun_name2, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    __dec_obj72=info->right_value_objects,
    info->right_value_objects=(struct list$1sRightValueObject$ph*)come_increment_ref_count(right_value_objects);
    come_call_finalizer(list$1sRightValueObject$ph_finalize, __dec_obj72,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj73=info->stack,
    info->stack=(struct list$1CVALUE$ph*)come_increment_ref_count(stack_saved);
    come_call_finalizer(list$1CVALUE$ph_finalize, __dec_obj73,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1CVALUE$ph$p_finalize, stack_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type_, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
}

static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_begin(struct list$1tuple2$2char$phsType$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsType$ph$ph_begin"; neo_current_frame = &fr;
    struct tuple2$2char$phsType$ph* result;
    struct tuple2$2char$phsType$ph* __result_obj__0;
    struct tuple2$2char$phsType$ph* result_67;
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
    memset(&result_67,0,sizeof(struct tuple2$2char$phsType$ph*));
    __result_obj__0 = result_67;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static _Bool list$1tuple2$2char$phsType$ph$ph_end(struct list$1tuple2$2char$phsType$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsType$ph$ph_end"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return self==((void*)0)||self->it==((void*)0);
    neo_current_frame = fr.prev;
}

static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_next(struct list$1tuple2$2char$phsType$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsType$ph$ph_next"; neo_current_frame = &fr;
    struct tuple2$2char$phsType$ph* result;
    struct tuple2$2char$phsType$ph* __result_obj__0;
    struct tuple2$2char$phsType$ph* result_68;
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
    memset(&result_68,0,sizeof(struct tuple2$2char$phsType$ph*));
    __result_obj__0 = result_68;
    neo_current_frame = fr.prev;
    return __result_obj__0;
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
        come_call_finalizer(list_item$1tuple2$2char$phsType$ph$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1tuple2$2char$phsType$ph$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2char$phsType$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

struct tuple2$2sType$phchar$ph* clone_object(struct sType*  type  , char* obj, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "clone_object"; neo_current_frame = &fr;
    _Bool in_clone_object;
    void* __right_value0 = (void*)0;
    struct sType*  type2  ;
    struct sType*  type_  ;
    char*  result  ;
    struct sType*  result_type  ;
    struct list$1CVALUE$ph* stack_saved;
    struct list$1sRightValueObject$ph* right_value_objects;
    char*  c_value  ;
    struct sClass*  klass  ;
    char* class_name;
    struct sFun*  cloner  ;
    char*  fun_name2  ;
    char*  none_generics_name  ;
    struct sType*  obj_type  ;
    char*  __dec_obj74  ;
    char*  fun_name3  ;
    struct sGenericsFun*  generics_fun  ;
    void* __right_value1 = (void*)0;
    struct tuple2$2char$ph_Bool$* multiple_assign_var8
;    char*  name  =0;
    _Bool err=0;
    void* __right_value2 = (void*)0;
    void* __right_value3 = (void*)0;
    void* __right_value4 = (void*)0;
    void* __right_value5 = (void*)0;
    struct tuple2$2sType$phchar$ph* __result_obj__0;
    char*  __dec_obj77  ;
    int i;
    char*  new_fun_name  ;
    char*  __dec_obj78  ;
    struct tuple2$2sFun$pchar$ph* multiple_assign_var9
;    struct sFun*  fun  =0;
    char*  new_fun_name_77  =0;
    char*  __dec_obj79  ;
    struct sType*  type__78  ;
    struct sType*  __dec_obj80  ;
    char*  __dec_obj81  ;
    struct sType*  __dec_obj82  ;
    char*  type_name  ;
    char*  __dec_obj83  ;
    struct list$1sRightValueObject$ph* __dec_obj84;
    struct list$1CVALUE$ph* __dec_obj85;
    memset(&fun_name2, 0, sizeof(fun_name2));
    memset(&i, 0, sizeof(i));
    in_clone_object=info->in_clone_object;
    info->in_clone_object=(_Bool)1;
    type2=(struct sType* )come_increment_ref_count(sType_clone(type));
    type_=(struct sType* )come_increment_ref_count(get_no_solved_type2(type));
    result=((void*)0);
    result_type=((void*)0);
    stack_saved=(struct list$1CVALUE$ph*)come_increment_ref_count(info->stack);
    right_value_objects=info->right_value_objects;
    c_value=(char* )come_increment_ref_count(__builtin_string(obj));
    klass=type_->mClass;
    class_name=klass->mName;
    const char* fun_name="clone";
    cloner=((void*)0);
    if(list$1sType$ph_length(type_->mGenericsTypes)>0) {
        none_generics_name=(char* )come_increment_ref_count(get_none_generics_name(type_->mClass->mName));
        obj_type=(struct sType* )come_increment_ref_count(solve_generics(type_,info->generics_type,info));
        __dec_obj74=fun_name2,
        fun_name2=(char* )come_increment_ref_count(create_method_name(obj_type,(_Bool)0,fun_name,info,(_Bool)1));
        __dec_obj74 = come_decrement_ref_count(__dec_obj74, (void*)0, (void*)0, 0,0, (void*)0);
        fun_name3=(char* )come_increment_ref_count(xsprintf("%s_%s",none_generics_name,fun_name));
        generics_fun=((struct sGenericsFun* )(__right_value0=map$2char$phsGenericsFun$ph_at(info->generics_funcs,fun_name3,((void*)0),(_Bool)0)));
        if(generics_fun) {
            multiple_assign_var8=((struct tuple2$2char$ph_Bool$*)(__right_value1=create_generics_fun((char* )come_increment_ref_count(__builtin_string(fun_name2)),generics_fun,obj_type,info)));
            name=(char* )come_increment_ref_count(multiple_assign_var8->v1);
            err=multiple_assign_var8->v2;
            come_call_finalizer(tuple2$2char$ph_Bool$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            if(!err) {
                __result_obj__0 = (struct tuple2$2sType$phchar$ph*)come_increment_ref_count(((struct tuple2$2sType$phchar$ph*)(__right_value5=tuple2$2sType$phchar$ph_initialize((struct tuple2$2sType$phchar$ph*)come_increment_ref_count((struct tuple2$2sType$phchar$ph*)come_calloc(1, sizeof(struct tuple2$2sType$phchar$ph)*(1), "04heap.nc", 845, "struct tuple2$2sType$phchar$ph")),(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 845, "struct sType* ")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info,(_Bool)0,0)),(char* )come_increment_ref_count(__builtin_string(""))))));
                (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
                (none_generics_name = come_decrement_ref_count(none_generics_name, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(sType_finalize, obj_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (fun_name3 = come_decrement_ref_count(fun_name3, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, type_, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(list$1CVALUE$ph$p_finalize, stack_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (c_value = come_decrement_ref_count(c_value, (void*)0, (void*)0, 0, 0, (void*)0));
                (fun_name2 = come_decrement_ref_count(fun_name2, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(tuple2$2sType$phchar$ph$p_finalize, __right_value5, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                neo_current_frame = fr.prev;
                come_call_finalizer(tuple2$2sType$phchar$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
            cloner=((struct sFun* )(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,name)));
            (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        else {
            cloner=((struct sFun* )(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,fun_name2)));
        }
        (none_generics_name = come_decrement_ref_count(none_generics_name, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sType_finalize, obj_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (fun_name3 = come_decrement_ref_count(fun_name3, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    else {
        __dec_obj77=fun_name2,
        fun_name2=(char* )come_increment_ref_count(create_method_name(type_,(_Bool)0,fun_name,info,(_Bool)1));
        __dec_obj77 = come_decrement_ref_count(__dec_obj77, (void*)0, (void*)0, 0,0, (void*)0);
        for(i=128-1;i>=1;i--){
            new_fun_name=(char* )come_increment_ref_count(xsprintf("%s_v%d",fun_name2,i));
            cloner=((struct sFun* )(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,new_fun_name)));
            if(cloner) {
                __dec_obj78=fun_name2,
                fun_name2=(char* )come_increment_ref_count(__builtin_string(new_fun_name));
                __dec_obj78 = come_decrement_ref_count(__dec_obj78, (void*)0, (void*)0, 0,0, (void*)0);
                (new_fun_name = come_decrement_ref_count(new_fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
                break;
            }
            (new_fun_name = come_decrement_ref_count(new_fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        if(cloner==((void*)0)) {
            cloner=((struct sFun* )(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,fun_name2)));
        }
    }
    if(cloner==((void*)0)&&!type_->mClass->mNumber) {
        multiple_assign_var9=((struct tuple2$2sFun$pchar$ph*)(__right_value0=create_cloner_automatically(type_,fun_name,info)));
        fun=multiple_assign_var9->v1;
        new_fun_name_77=(char* )come_increment_ref_count(multiple_assign_var9->v2);
        come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        __dec_obj79=fun_name2,
        fun_name2=(char* )come_increment_ref_count(new_fun_name_77);
        __dec_obj79 = come_decrement_ref_count(__dec_obj79, (void*)0, (void*)0, 0,0, (void*)0);
        cloner=fun;
        (new_fun_name_77 = come_decrement_ref_count(new_fun_name_77, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(cloner!=((void*)0)) {
        type__78=(struct sType* )come_increment_ref_count(sType_clone(cloner->mResultType));
        __dec_obj80=result_type,
        result_type=(struct sType* )come_increment_ref_count(solve_generics(type__78,type__78,info));
        come_call_finalizer(sType_finalize, __dec_obj80,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        __dec_obj81=result,
        result=(char* )come_increment_ref_count(xsprintf("%s(%s)",fun_name2,c_value));
        __dec_obj81 = come_decrement_ref_count(__dec_obj81, (void*)0, (void*)0, 0,0, (void*)0);
        come_call_finalizer(sType_finalize, type__78, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        __dec_obj82=result_type,
        result_type=(struct sType* )come_increment_ref_count(sType_clone(type_));
        come_call_finalizer(sType_finalize, __dec_obj82,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        type2->mHeap=(_Bool)1;
        type_name=(char* )come_increment_ref_count(make_type_name_string(type2,info,(_Bool)0,(_Bool)0,(_Bool)0));
        __dec_obj83=result,
        result=(char* )come_increment_ref_count(xsprintf("(%s)come_memdup(%s, \"%s\", %d, \"%s\")",type_name,c_value,info->sname,info->sline,type_name));
        __dec_obj83 = come_decrement_ref_count(__dec_obj83, (void*)0, (void*)0, 0,0, (void*)0);
        (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    __dec_obj84=info->right_value_objects,
    info->right_value_objects=(struct list$1sRightValueObject$ph*)come_increment_ref_count(right_value_objects);
    come_call_finalizer(list$1sRightValueObject$ph_finalize, __dec_obj84,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj85=info->stack,
    info->stack=(struct list$1CVALUE$ph*)come_increment_ref_count(stack_saved);
    come_call_finalizer(list$1CVALUE$ph_finalize, __dec_obj85,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    info->in_clone_object=in_clone_object;
    __result_obj__0 = (struct tuple2$2sType$phchar$ph*)come_increment_ref_count(((struct tuple2$2sType$phchar$ph*)(__right_value1=tuple2$2sType$phchar$ph_initialize((struct tuple2$2sType$phchar$ph*)come_increment_ref_count((struct tuple2$2sType$phchar$ph*)come_calloc(1, sizeof(struct tuple2$2sType$phchar$ph)*(1), "04heap.nc", 900, "struct tuple2$2sType$phchar$ph")),(struct sType* )come_increment_ref_count(result_type),(char* )come_increment_ref_count(result)))));
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type_, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1CVALUE$ph$p_finalize, stack_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (c_value = come_decrement_ref_count(c_value, (void*)0, (void*)0, 0, 0, (void*)0));
    (fun_name2 = come_decrement_ref_count(fun_name2, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(tuple2$2sType$phchar$ph$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple2$2sType$phchar$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct sGenericsFun*  map$2char$phsGenericsFun$ph_at(struct map$2char$phsGenericsFun$ph* self, char*  key  , struct sGenericsFun*  default_value  , _Bool by_pointer)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsGenericsFun$ph_at"; neo_current_frame = &fr;
    struct sGenericsFun*  __result_obj__0  ;
    unsigned int hash;
    unsigned int it;
    if(self==((void*)0)) {
        __result_obj__0 = (struct sGenericsFun* )come_increment_ref_count(default_value);
        come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        neo_current_frame = fr.prev;
        come_call_finalizer(sGenericsFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char* )key))%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if((!by_pointer&&string_equals(self->keys[it],key))||(by_pointer&&self->keys[it]==key)) {
                __result_obj__0 = (struct sGenericsFun* )come_increment_ref_count(self->items[it]);
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
                __result_obj__0 = (struct sGenericsFun* )come_increment_ref_count(default_value);
                come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                neo_current_frame = fr.prev;
                come_call_finalizer(sGenericsFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
        }
        else {
            __result_obj__0 = (struct sGenericsFun* )come_increment_ref_count(default_value);
            come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            neo_current_frame = fr.prev;
            come_call_finalizer(sGenericsFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__0;
        }
    }
    __result_obj__0 = (struct sGenericsFun* )come_increment_ref_count(default_value);
    come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sGenericsFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct tuple2$2sType$phchar$ph* tuple2$2sType$phchar$ph_initialize(struct tuple2$2sType$phchar$ph* self, struct sType* v1, char*  v2  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2sType$phchar$ph_initialize"; neo_current_frame = &fr;
    struct sType*  __dec_obj75  ;
    char*  __dec_obj76  ;
    struct tuple2$2sType$phchar$ph* __result_obj__0;
    __dec_obj75=self->v1,
    self->v1=(struct sType*)come_increment_ref_count(v1);
    come_call_finalizer(sType_finalize, __dec_obj75,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj76=self->v2,
    self->v2=(char* )come_increment_ref_count(v2);
    __dec_obj76 = come_decrement_ref_count(__dec_obj76, (void*)0, (void*)0, 0,0, (void*)0);
    __result_obj__0 = (struct tuple2$2sType$phchar$ph*)come_increment_ref_count(self);
    come_call_finalizer(tuple2$2sType$phchar$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sType_finalize, v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0, 0, (void*)0));
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple2$2sType$phchar$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static void tuple2$2sType$phchar$ph$p_finalize(struct tuple2$2sType$phchar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2sType$phchar$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    neo_current_frame = fr.prev;
}

void free_right_value_objects(struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "free_right_value_objects"; neo_current_frame = &fr;
    _Bool free_right_value;
    struct list$1sRightValueObject$ph* right_value_objects;
    int n;
    struct list$1sRightValueObject$ph* o2_saved;
    struct sRightValueObject*  it  ;
    struct sVar*  var_  ;
    char*  __dec_obj86  ;
    struct list$1sRightValueObject$ph* o2_saved_79;
    struct sRightValueObject*  it_80  ;
    struct sType*  type  ;
    void* __right_value0 = (void*)0;
    struct sType*  type2  ;
    struct sType*  __dec_obj87  ;
    int max_num;
    struct list$1sRightValueObject$ph* o2_saved_81;
    struct sRightValueObject*  it_82  ;
    if(gComeC) {
        neo_current_frame = fr.prev;
        return;
    }
    free_right_value=(_Bool)0;
    right_value_objects=info->right_value_objects;
    n=0;
    for(o2_saved=right_value_objects,it=list$1sRightValueObject$ph_begin(o2_saved);!list$1sRightValueObject$ph_end(o2_saved);it=list$1sRightValueObject$ph_next(o2_saved)){
        if(it&&!it->mFreed) {
            if(string_operator_equals(it->mFunName,info->come_fun->mName)&&it->mBlockLevel==info->block_level&&!it->mStored) {
                if(it->mObjType) {
                    on_drop_object(it->mObjType,it->mObjValue,info);
                    var_=it->mObjVar;
                    __dec_obj86=var_->mCValueName,
                    var_->mCValueName=((void*)0);
                    __dec_obj86 = come_decrement_ref_count(__dec_obj86, (void*)0, (void*)0, 0,0, (void*)0);
                }
            }
        }
        n++;
    }
    for(o2_saved_79=right_value_objects,it_80=list$1sRightValueObject$ph_begin(o2_saved_79);!list$1sRightValueObject$ph_end(o2_saved_79);it_80=list$1sRightValueObject$ph_next(o2_saved_79)){
        if(it_80&&!it_80->mFreed) {
            if(string_operator_equals(it_80->mFunName,info->come_fun->mName)&&it_80->mBlockLevel==info->block_level&&!it_80->mStored&&!it_80->mNoFree) {
                type=(struct sType* )come_increment_ref_count(it_80->mType);
                type2=(struct sType* )come_increment_ref_count(sType_clone(type));
                if(info->generics_type) {
                    __dec_obj87=type,
                    type=(struct sType* )come_increment_ref_count(solve_generics(type2,info->generics_type,info));
                    come_call_finalizer(sType_finalize, __dec_obj87,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                free_object(type,it_80->mVarName,!it_80->mDecrementRefCount,(_Bool)0,info,(_Bool)0);
                it_80->mFreed=(_Bool)1;
                free_right_value=(_Bool)1;
                come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        n++;
    }
    max_num=0;
    for(o2_saved_81=right_value_objects,it_82=list$1sRightValueObject$ph_begin(o2_saved_81);!list$1sRightValueObject$ph_end(o2_saved_81);it_82=list$1sRightValueObject$ph_next(o2_saved_81)){
        if(it_82->mID+1>max_num) {
            max_num=it_82->mID+1;
        }
    }
    info->right_value_num=0;
    if(max_num>=info->right_value_max) {
        info->right_value_max=max_num;
    }
    neo_current_frame = fr.prev;
}

struct sVar*  get_variable_from_table(struct sVarTable*  table  , char* name)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "get_variable_from_table"; neo_current_frame = &fr;
    struct sVarTable*  it  ;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    void* __right_value2 = (void*)0;
    struct sVar*  var_  ;
    struct sVar*  __result_obj__0  ;
    it=table;
    while(it) {
        var_=((struct sVar* )(__right_value2=map$2char$phsVar$ph_operator_load_element(it->mVars,((char* )(__right_value1=__builtin_string(name))))));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        if(var_) {
            __result_obj__0 = var_;
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        it=it->mParent;
    }
    __result_obj__0 = ((void*)0);
    neo_current_frame = fr.prev;
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
        __result_obj__0 = (struct sVar* )come_increment_ref_count(default_value);
        neo_current_frame = fr.prev;
        come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char* )key))%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if(string_equals(self->keys[it],key)) {
                __result_obj__0 = (struct sVar* )come_increment_ref_count(self->items[it]);
                neo_current_frame = fr.prev;
                come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
            it++;
            if(it>=self->size) {
                it=0;
            }
            else if(it==hash) {
                __result_obj__0 = (struct sVar* )come_increment_ref_count(default_value);
                neo_current_frame = fr.prev;
                come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
        }
        else {
            __result_obj__0 = (struct sVar* )come_increment_ref_count(default_value);
            neo_current_frame = fr.prev;
            come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__0;
        }
    }
    __result_obj__0 = (struct sVar* )come_increment_ref_count(default_value);
    neo_current_frame = fr.prev;
    come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
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
        __result_obj__0 = (struct sVar* )come_increment_ref_count(default_value);
        neo_current_frame = fr.prev;
        come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char* )key))%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if(string_equals(self->keys[it],key)) {
                __result_obj__0 = (struct sVar* )come_increment_ref_count(self->items[it]);
                neo_current_frame = fr.prev;
                come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
            it++;
            if(it>=self->size) {
                it=0;
            }
            else if(it==hash) {
                __result_obj__0 = (struct sVar* )come_increment_ref_count(default_value);
                neo_current_frame = fr.prev;
                come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
        }
        else {
            __result_obj__0 = (struct sVar* )come_increment_ref_count(default_value);
            neo_current_frame = fr.prev;
            come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__0;
        }
    }
    __result_obj__0 = (struct sVar* )come_increment_ref_count(default_value);
    neo_current_frame = fr.prev;
    come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

void free_objects(struct sVarTable*  table  , struct sVar*  ret_value  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "free_objects"; neo_current_frame = &fr;
    struct map$2char$phsVar$ph* o2_saved;
    char*  it  ;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    void* __right_value2 = (void*)0;
    struct sVar*  p  ;
    struct sType*  type  ;
    struct sClass*  klass  ;
    struct sNode* node;
    _Bool Value;
    struct CVALUE*  come_value  ;
    int n;
    int i;
    void* __right_value3 = (void*)0;
    void* __right_value4 = (void*)0;
    void* __right_value5 = (void*)0;
    void* __right_value6 = (void*)0;
    void* __right_value7 = (void*)0;
    void* __right_value8 = (void*)0;
    void* __right_value9 = (void*)0;
    void* __right_value10 = (void*)0;
    char*  c_value  ;
    struct sType*  element_type  ;
    struct sNode* node_87;
    _Bool Value_88;
    struct CVALUE*  come_value_89  ;
    int n_90;
    struct sNode* node2;
    _Bool Value_91;
    struct CVALUE*  come_value2  ;
    int m;
    int i_92;
    int j;
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
    void* __right_value72 = (void*)0;
    void* __right_value73 = (void*)0;
    void* __right_value74 = (void*)0;
    void* __right_value75 = (void*)0;
    void* __right_value76 = (void*)0;
    void* __right_value77 = (void*)0;
    void* __right_value78 = (void*)0;
    void* __right_value79 = (void*)0;
    void* __right_value80 = (void*)0;
    void* __right_value81 = (void*)0;
    void* __right_value82 = (void*)0;
    void* __right_value83 = (void*)0;
    void* __right_value84 = (void*)0;
    void* __right_value85 = (void*)0;
    void* __right_value86 = (void*)0;
    void* __right_value87 = (void*)0;
    void* __right_value88 = (void*)0;
    void* __right_value89 = (void*)0;
    void* __right_value90 = (void*)0;
    void* __right_value91 = (void*)0;
    void* __right_value92 = (void*)0;
    void* __right_value93 = (void*)0;
    void* __right_value94 = (void*)0;
    void* __right_value95 = (void*)0;
    void* __right_value96 = (void*)0;
    void* __right_value97 = (void*)0;
    void* __right_value98 = (void*)0;
    char*  c_value_93  ;
    struct sType*  element_type_94  ;
    struct sNode* node_95;
    _Bool Value_96;
    struct CVALUE*  come_value_97  ;
    int n_98;
    struct sNode* node2_99;
    _Bool Value_100;
    struct CVALUE*  come_value2_101  ;
    int m_102;
    struct sNode* node3;
    _Bool Value_103;
    struct CVALUE*  come_value3  ;
    int l;
    int i_104;
    int j_105;
    int k;
    void* __right_value99 = (void*)0;
    void* __right_value100 = (void*)0;
    void* __right_value101 = (void*)0;
    void* __right_value102 = (void*)0;
    void* __right_value103 = (void*)0;
    void* __right_value104 = (void*)0;
    void* __right_value105 = (void*)0;
    void* __right_value106 = (void*)0;
    void* __right_value107 = (void*)0;
    void* __right_value108 = (void*)0;
    void* __right_value109 = (void*)0;
    void* __right_value110 = (void*)0;
    void* __right_value111 = (void*)0;
    void* __right_value112 = (void*)0;
    void* __right_value113 = (void*)0;
    void* __right_value114 = (void*)0;
    void* __right_value115 = (void*)0;
    void* __right_value116 = (void*)0;
    void* __right_value117 = (void*)0;
    void* __right_value118 = (void*)0;
    void* __right_value119 = (void*)0;
    void* __right_value120 = (void*)0;
    void* __right_value121 = (void*)0;
    void* __right_value122 = (void*)0;
    void* __right_value123 = (void*)0;
    void* __right_value124 = (void*)0;
    void* __right_value125 = (void*)0;
    void* __right_value126 = (void*)0;
    void* __right_value127 = (void*)0;
    void* __right_value128 = (void*)0;
    void* __right_value129 = (void*)0;
    void* __right_value130 = (void*)0;
    void* __right_value131 = (void*)0;
    void* __right_value132 = (void*)0;
    void* __right_value133 = (void*)0;
    void* __right_value134 = (void*)0;
    void* __right_value135 = (void*)0;
    void* __right_value136 = (void*)0;
    void* __right_value137 = (void*)0;
    void* __right_value138 = (void*)0;
    void* __right_value139 = (void*)0;
    void* __right_value140 = (void*)0;
    void* __right_value141 = (void*)0;
    void* __right_value142 = (void*)0;
    void* __right_value143 = (void*)0;
    void* __right_value144 = (void*)0;
    void* __right_value145 = (void*)0;
    void* __right_value146 = (void*)0;
    void* __right_value147 = (void*)0;
    void* __right_value148 = (void*)0;
    void* __right_value149 = (void*)0;
    void* __right_value150 = (void*)0;
    void* __right_value151 = (void*)0;
    void* __right_value152 = (void*)0;
    void* __right_value153 = (void*)0;
    void* __right_value154 = (void*)0;
    void* __right_value155 = (void*)0;
    void* __right_value156 = (void*)0;
    void* __right_value157 = (void*)0;
    void* __right_value158 = (void*)0;
    void* __right_value159 = (void*)0;
    void* __right_value160 = (void*)0;
    void* __right_value161 = (void*)0;
    void* __right_value162 = (void*)0;
    void* __right_value163 = (void*)0;
    void* __right_value164 = (void*)0;
    void* __right_value165 = (void*)0;
    void* __right_value166 = (void*)0;
    void* __right_value167 = (void*)0;
    void* __right_value168 = (void*)0;
    void* __right_value169 = (void*)0;
    void* __right_value170 = (void*)0;
    void* __right_value171 = (void*)0;
    void* __right_value172 = (void*)0;
    void* __right_value173 = (void*)0;
    void* __right_value174 = (void*)0;
    void* __right_value175 = (void*)0;
    void* __right_value176 = (void*)0;
    void* __right_value177 = (void*)0;
    void* __right_value178 = (void*)0;
    void* __right_value179 = (void*)0;
    void* __right_value180 = (void*)0;
    void* __right_value181 = (void*)0;
    void* __right_value182 = (void*)0;
    void* __right_value183 = (void*)0;
    void* __right_value184 = (void*)0;
    void* __right_value185 = (void*)0;
    void* __right_value186 = (void*)0;
    void* __right_value187 = (void*)0;
    void* __right_value188 = (void*)0;
    void* __right_value189 = (void*)0;
    void* __right_value190 = (void*)0;
    void* __right_value191 = (void*)0;
    void* __right_value192 = (void*)0;
    void* __right_value193 = (void*)0;
    void* __right_value194 = (void*)0;
    void* __right_value195 = (void*)0;
    void* __right_value196 = (void*)0;
    void* __right_value197 = (void*)0;
    void* __right_value198 = (void*)0;
    void* __right_value199 = (void*)0;
    void* __right_value200 = (void*)0;
    void* __right_value201 = (void*)0;
    void* __right_value202 = (void*)0;
    void* __right_value203 = (void*)0;
    void* __right_value204 = (void*)0;
    void* __right_value205 = (void*)0;
    void* __right_value206 = (void*)0;
    void* __right_value207 = (void*)0;
    void* __right_value208 = (void*)0;
    void* __right_value209 = (void*)0;
    void* __right_value210 = (void*)0;
    void* __right_value211 = (void*)0;
    void* __right_value212 = (void*)0;
    void* __right_value213 = (void*)0;
    void* __right_value214 = (void*)0;
    void* __right_value215 = (void*)0;
    void* __right_value216 = (void*)0;
    void* __right_value217 = (void*)0;
    void* __right_value218 = (void*)0;
    void* __right_value219 = (void*)0;
    void* __right_value220 = (void*)0;
    void* __right_value221 = (void*)0;
    void* __right_value222 = (void*)0;
    void* __right_value223 = (void*)0;
    void* __right_value224 = (void*)0;
    void* __right_value225 = (void*)0;
    void* __right_value226 = (void*)0;
    void* __right_value227 = (void*)0;
    void* __right_value228 = (void*)0;
    void* __right_value229 = (void*)0;
    void* __right_value230 = (void*)0;
    void* __right_value231 = (void*)0;
    void* __right_value232 = (void*)0;
    void* __right_value233 = (void*)0;
    void* __right_value234 = (void*)0;
    void* __right_value235 = (void*)0;
    void* __right_value236 = (void*)0;
    void* __right_value237 = (void*)0;
    void* __right_value238 = (void*)0;
    void* __right_value239 = (void*)0;
    void* __right_value240 = (void*)0;
    void* __right_value241 = (void*)0;
    void* __right_value242 = (void*)0;
    void* __right_value243 = (void*)0;
    void* __right_value244 = (void*)0;
    void* __right_value245 = (void*)0;
    void* __right_value246 = (void*)0;
    void* __right_value247 = (void*)0;
    void* __right_value248 = (void*)0;
    void* __right_value249 = (void*)0;
    void* __right_value250 = (void*)0;
    void* __right_value251 = (void*)0;
    void* __right_value252 = (void*)0;
    void* __right_value253 = (void*)0;
    void* __right_value254 = (void*)0;
    void* __right_value255 = (void*)0;
    void* __right_value256 = (void*)0;
    void* __right_value257 = (void*)0;
    void* __right_value258 = (void*)0;
    void* __right_value259 = (void*)0;
    void* __right_value260 = (void*)0;
    void* __right_value261 = (void*)0;
    void* __right_value262 = (void*)0;
    void* __right_value263 = (void*)0;
    void* __right_value264 = (void*)0;
    void* __right_value265 = (void*)0;
    void* __right_value266 = (void*)0;
    void* __right_value267 = (void*)0;
    void* __right_value268 = (void*)0;
    void* __right_value269 = (void*)0;
    void* __right_value270 = (void*)0;
    void* __right_value271 = (void*)0;
    void* __right_value272 = (void*)0;
    void* __right_value273 = (void*)0;
    void* __right_value274 = (void*)0;
    void* __right_value275 = (void*)0;
    void* __right_value276 = (void*)0;
    void* __right_value277 = (void*)0;
    void* __right_value278 = (void*)0;
    void* __right_value279 = (void*)0;
    void* __right_value280 = (void*)0;
    void* __right_value281 = (void*)0;
    void* __right_value282 = (void*)0;
    void* __right_value283 = (void*)0;
    void* __right_value284 = (void*)0;
    void* __right_value285 = (void*)0;
    void* __right_value286 = (void*)0;
    void* __right_value287 = (void*)0;
    void* __right_value288 = (void*)0;
    void* __right_value289 = (void*)0;
    void* __right_value290 = (void*)0;
    void* __right_value291 = (void*)0;
    void* __right_value292 = (void*)0;
    void* __right_value293 = (void*)0;
    void* __right_value294 = (void*)0;
    void* __right_value295 = (void*)0;
    void* __right_value296 = (void*)0;
    void* __right_value297 = (void*)0;
    void* __right_value298 = (void*)0;
    void* __right_value299 = (void*)0;
    void* __right_value300 = (void*)0;
    void* __right_value301 = (void*)0;
    void* __right_value302 = (void*)0;
    void* __right_value303 = (void*)0;
    void* __right_value304 = (void*)0;
    void* __right_value305 = (void*)0;
    void* __right_value306 = (void*)0;
    void* __right_value307 = (void*)0;
    void* __right_value308 = (void*)0;
    void* __right_value309 = (void*)0;
    void* __right_value310 = (void*)0;
    void* __right_value311 = (void*)0;
    void* __right_value312 = (void*)0;
    void* __right_value313 = (void*)0;
    void* __right_value314 = (void*)0;
    void* __right_value315 = (void*)0;
    void* __right_value316 = (void*)0;
    void* __right_value317 = (void*)0;
    void* __right_value318 = (void*)0;
    void* __right_value319 = (void*)0;
    void* __right_value320 = (void*)0;
    void* __right_value321 = (void*)0;
    void* __right_value322 = (void*)0;
    void* __right_value323 = (void*)0;
    void* __right_value324 = (void*)0;
    void* __right_value325 = (void*)0;
    void* __right_value326 = (void*)0;
    void* __right_value327 = (void*)0;
    void* __right_value328 = (void*)0;
    void* __right_value329 = (void*)0;
    void* __right_value330 = (void*)0;
    void* __right_value331 = (void*)0;
    void* __right_value332 = (void*)0;
    void* __right_value333 = (void*)0;
    void* __right_value334 = (void*)0;
    void* __right_value335 = (void*)0;
    void* __right_value336 = (void*)0;
    void* __right_value337 = (void*)0;
    void* __right_value338 = (void*)0;
    void* __right_value339 = (void*)0;
    void* __right_value340 = (void*)0;
    void* __right_value341 = (void*)0;
    void* __right_value342 = (void*)0;
    void* __right_value343 = (void*)0;
    void* __right_value344 = (void*)0;
    void* __right_value345 = (void*)0;
    void* __right_value346 = (void*)0;
    void* __right_value347 = (void*)0;
    void* __right_value348 = (void*)0;
    void* __right_value349 = (void*)0;
    void* __right_value350 = (void*)0;
    void* __right_value351 = (void*)0;
    void* __right_value352 = (void*)0;
    void* __right_value353 = (void*)0;
    void* __right_value354 = (void*)0;
    void* __right_value355 = (void*)0;
    void* __right_value356 = (void*)0;
    void* __right_value357 = (void*)0;
    void* __right_value358 = (void*)0;
    void* __right_value359 = (void*)0;
    void* __right_value360 = (void*)0;
    void* __right_value361 = (void*)0;
    void* __right_value362 = (void*)0;
    void* __right_value363 = (void*)0;
    void* __right_value364 = (void*)0;
    void* __right_value365 = (void*)0;
    void* __right_value366 = (void*)0;
    void* __right_value367 = (void*)0;
    void* __right_value368 = (void*)0;
    void* __right_value369 = (void*)0;
    void* __right_value370 = (void*)0;
    void* __right_value371 = (void*)0;
    void* __right_value372 = (void*)0;
    void* __right_value373 = (void*)0;
    void* __right_value374 = (void*)0;
    void* __right_value375 = (void*)0;
    void* __right_value376 = (void*)0;
    void* __right_value377 = (void*)0;
    void* __right_value378 = (void*)0;
    void* __right_value379 = (void*)0;
    void* __right_value380 = (void*)0;
    void* __right_value381 = (void*)0;
    void* __right_value382 = (void*)0;
    void* __right_value383 = (void*)0;
    void* __right_value384 = (void*)0;
    void* __right_value385 = (void*)0;
    void* __right_value386 = (void*)0;
    void* __right_value387 = (void*)0;
    void* __right_value388 = (void*)0;
    void* __right_value389 = (void*)0;
    void* __right_value390 = (void*)0;
    void* __right_value391 = (void*)0;
    void* __right_value392 = (void*)0;
    void* __right_value393 = (void*)0;
    void* __right_value394 = (void*)0;
    void* __right_value395 = (void*)0;
    void* __right_value396 = (void*)0;
    void* __right_value397 = (void*)0;
    void* __right_value398 = (void*)0;
    void* __right_value399 = (void*)0;
    void* __right_value400 = (void*)0;
    void* __right_value401 = (void*)0;
    void* __right_value402 = (void*)0;
    void* __right_value403 = (void*)0;
    void* __right_value404 = (void*)0;
    void* __right_value405 = (void*)0;
    void* __right_value406 = (void*)0;
    void* __right_value407 = (void*)0;
    void* __right_value408 = (void*)0;
    void* __right_value409 = (void*)0;
    void* __right_value410 = (void*)0;
    void* __right_value411 = (void*)0;
    void* __right_value412 = (void*)0;
    void* __right_value413 = (void*)0;
    void* __right_value414 = (void*)0;
    void* __right_value415 = (void*)0;
    void* __right_value416 = (void*)0;
    void* __right_value417 = (void*)0;
    void* __right_value418 = (void*)0;
    void* __right_value419 = (void*)0;
    void* __right_value420 = (void*)0;
    void* __right_value421 = (void*)0;
    void* __right_value422 = (void*)0;
    void* __right_value423 = (void*)0;
    void* __right_value424 = (void*)0;
    void* __right_value425 = (void*)0;
    void* __right_value426 = (void*)0;
    void* __right_value427 = (void*)0;
    void* __right_value428 = (void*)0;
    void* __right_value429 = (void*)0;
    void* __right_value430 = (void*)0;
    void* __right_value431 = (void*)0;
    void* __right_value432 = (void*)0;
    void* __right_value433 = (void*)0;
    void* __right_value434 = (void*)0;
    void* __right_value435 = (void*)0;
    void* __right_value436 = (void*)0;
    void* __right_value437 = (void*)0;
    void* __right_value438 = (void*)0;
    void* __right_value439 = (void*)0;
    void* __right_value440 = (void*)0;
    void* __right_value441 = (void*)0;
    void* __right_value442 = (void*)0;
    void* __right_value443 = (void*)0;
    void* __right_value444 = (void*)0;
    void* __right_value445 = (void*)0;
    void* __right_value446 = (void*)0;
    void* __right_value447 = (void*)0;
    void* __right_value448 = (void*)0;
    void* __right_value449 = (void*)0;
    void* __right_value450 = (void*)0;
    void* __right_value451 = (void*)0;
    void* __right_value452 = (void*)0;
    void* __right_value453 = (void*)0;
    void* __right_value454 = (void*)0;
    void* __right_value455 = (void*)0;
    void* __right_value456 = (void*)0;
    void* __right_value457 = (void*)0;
    void* __right_value458 = (void*)0;
    void* __right_value459 = (void*)0;
    void* __right_value460 = (void*)0;
    void* __right_value461 = (void*)0;
    void* __right_value462 = (void*)0;
    void* __right_value463 = (void*)0;
    void* __right_value464 = (void*)0;
    void* __right_value465 = (void*)0;
    void* __right_value466 = (void*)0;
    void* __right_value467 = (void*)0;
    void* __right_value468 = (void*)0;
    void* __right_value469 = (void*)0;
    void* __right_value470 = (void*)0;
    void* __right_value471 = (void*)0;
    void* __right_value472 = (void*)0;
    void* __right_value473 = (void*)0;
    void* __right_value474 = (void*)0;
    void* __right_value475 = (void*)0;
    void* __right_value476 = (void*)0;
    void* __right_value477 = (void*)0;
    void* __right_value478 = (void*)0;
    void* __right_value479 = (void*)0;
    void* __right_value480 = (void*)0;
    void* __right_value481 = (void*)0;
    void* __right_value482 = (void*)0;
    void* __right_value483 = (void*)0;
    void* __right_value484 = (void*)0;
    void* __right_value485 = (void*)0;
    void* __right_value486 = (void*)0;
    void* __right_value487 = (void*)0;
    void* __right_value488 = (void*)0;
    void* __right_value489 = (void*)0;
    void* __right_value490 = (void*)0;
    void* __right_value491 = (void*)0;
    void* __right_value492 = (void*)0;
    void* __right_value493 = (void*)0;
    void* __right_value494 = (void*)0;
    void* __right_value495 = (void*)0;
    void* __right_value496 = (void*)0;
    void* __right_value497 = (void*)0;
    void* __right_value498 = (void*)0;
    void* __right_value499 = (void*)0;
    void* __right_value500 = (void*)0;
    void* __right_value501 = (void*)0;
    void* __right_value502 = (void*)0;
    void* __right_value503 = (void*)0;
    void* __right_value504 = (void*)0;
    void* __right_value505 = (void*)0;
    void* __right_value506 = (void*)0;
    void* __right_value507 = (void*)0;
    void* __right_value508 = (void*)0;
    void* __right_value509 = (void*)0;
    void* __right_value510 = (void*)0;
    void* __right_value511 = (void*)0;
    void* __right_value512 = (void*)0;
    void* __right_value513 = (void*)0;
    void* __right_value514 = (void*)0;
    void* __right_value515 = (void*)0;
    void* __right_value516 = (void*)0;
    void* __right_value517 = (void*)0;
    void* __right_value518 = (void*)0;
    void* __right_value519 = (void*)0;
    void* __right_value520 = (void*)0;
    void* __right_value521 = (void*)0;
    void* __right_value522 = (void*)0;
    void* __right_value523 = (void*)0;
    void* __right_value524 = (void*)0;
    void* __right_value525 = (void*)0;
    void* __right_value526 = (void*)0;
    void* __right_value527 = (void*)0;
    void* __right_value528 = (void*)0;
    void* __right_value529 = (void*)0;
    void* __right_value530 = (void*)0;
    void* __right_value531 = (void*)0;
    void* __right_value532 = (void*)0;
    void* __right_value533 = (void*)0;
    void* __right_value534 = (void*)0;
    void* __right_value535 = (void*)0;
    void* __right_value536 = (void*)0;
    void* __right_value537 = (void*)0;
    void* __right_value538 = (void*)0;
    void* __right_value539 = (void*)0;
    void* __right_value540 = (void*)0;
    void* __right_value541 = (void*)0;
    void* __right_value542 = (void*)0;
    void* __right_value543 = (void*)0;
    void* __right_value544 = (void*)0;
    void* __right_value545 = (void*)0;
    void* __right_value546 = (void*)0;
    void* __right_value547 = (void*)0;
    void* __right_value548 = (void*)0;
    void* __right_value549 = (void*)0;
    void* __right_value550 = (void*)0;
    void* __right_value551 = (void*)0;
    void* __right_value552 = (void*)0;
    void* __right_value553 = (void*)0;
    void* __right_value554 = (void*)0;
    void* __right_value555 = (void*)0;
    void* __right_value556 = (void*)0;
    void* __right_value557 = (void*)0;
    void* __right_value558 = (void*)0;
    void* __right_value559 = (void*)0;
    void* __right_value560 = (void*)0;
    void* __right_value561 = (void*)0;
    void* __right_value562 = (void*)0;
    void* __right_value563 = (void*)0;
    void* __right_value564 = (void*)0;
    void* __right_value565 = (void*)0;
    void* __right_value566 = (void*)0;
    void* __right_value567 = (void*)0;
    void* __right_value568 = (void*)0;
    void* __right_value569 = (void*)0;
    void* __right_value570 = (void*)0;
    void* __right_value571 = (void*)0;
    void* __right_value572 = (void*)0;
    void* __right_value573 = (void*)0;
    void* __right_value574 = (void*)0;
    void* __right_value575 = (void*)0;
    void* __right_value576 = (void*)0;
    void* __right_value577 = (void*)0;
    void* __right_value578 = (void*)0;
    void* __right_value579 = (void*)0;
    void* __right_value580 = (void*)0;
    void* __right_value581 = (void*)0;
    void* __right_value582 = (void*)0;
    void* __right_value583 = (void*)0;
    void* __right_value584 = (void*)0;
    void* __right_value585 = (void*)0;
    void* __right_value586 = (void*)0;
    void* __right_value587 = (void*)0;
    void* __right_value588 = (void*)0;
    void* __right_value589 = (void*)0;
    void* __right_value590 = (void*)0;
    void* __right_value591 = (void*)0;
    void* __right_value592 = (void*)0;
    void* __right_value593 = (void*)0;
    void* __right_value594 = (void*)0;
    void* __right_value595 = (void*)0;
    void* __right_value596 = (void*)0;
    void* __right_value597 = (void*)0;
    void* __right_value598 = (void*)0;
    void* __right_value599 = (void*)0;
    void* __right_value600 = (void*)0;
    void* __right_value601 = (void*)0;
    void* __right_value602 = (void*)0;
    void* __right_value603 = (void*)0;
    void* __right_value604 = (void*)0;
    void* __right_value605 = (void*)0;
    void* __right_value606 = (void*)0;
    void* __right_value607 = (void*)0;
    void* __right_value608 = (void*)0;
    void* __right_value609 = (void*)0;
    void* __right_value610 = (void*)0;
    void* __right_value611 = (void*)0;
    void* __right_value612 = (void*)0;
    void* __right_value613 = (void*)0;
    void* __right_value614 = (void*)0;
    void* __right_value615 = (void*)0;
    void* __right_value616 = (void*)0;
    void* __right_value617 = (void*)0;
    void* __right_value618 = (void*)0;
    void* __right_value619 = (void*)0;
    void* __right_value620 = (void*)0;
    void* __right_value621 = (void*)0;
    void* __right_value622 = (void*)0;
    void* __right_value623 = (void*)0;
    void* __right_value624 = (void*)0;
    void* __right_value625 = (void*)0;
    void* __right_value626 = (void*)0;
    void* __right_value627 = (void*)0;
    void* __right_value628 = (void*)0;
    void* __right_value629 = (void*)0;
    void* __right_value630 = (void*)0;
    void* __right_value631 = (void*)0;
    void* __right_value632 = (void*)0;
    void* __right_value633 = (void*)0;
    void* __right_value634 = (void*)0;
    void* __right_value635 = (void*)0;
    void* __right_value636 = (void*)0;
    void* __right_value637 = (void*)0;
    void* __right_value638 = (void*)0;
    void* __right_value639 = (void*)0;
    void* __right_value640 = (void*)0;
    void* __right_value641 = (void*)0;
    void* __right_value642 = (void*)0;
    void* __right_value643 = (void*)0;
    void* __right_value644 = (void*)0;
    void* __right_value645 = (void*)0;
    void* __right_value646 = (void*)0;
    void* __right_value647 = (void*)0;
    void* __right_value648 = (void*)0;
    void* __right_value649 = (void*)0;
    void* __right_value650 = (void*)0;
    void* __right_value651 = (void*)0;
    void* __right_value652 = (void*)0;
    void* __right_value653 = (void*)0;
    void* __right_value654 = (void*)0;
    void* __right_value655 = (void*)0;
    void* __right_value656 = (void*)0;
    void* __right_value657 = (void*)0;
    void* __right_value658 = (void*)0;
    void* __right_value659 = (void*)0;
    void* __right_value660 = (void*)0;
    void* __right_value661 = (void*)0;
    void* __right_value662 = (void*)0;
    void* __right_value663 = (void*)0;
    void* __right_value664 = (void*)0;
    void* __right_value665 = (void*)0;
    void* __right_value666 = (void*)0;
    void* __right_value667 = (void*)0;
    void* __right_value668 = (void*)0;
    void* __right_value669 = (void*)0;
    void* __right_value670 = (void*)0;
    void* __right_value671 = (void*)0;
    void* __right_value672 = (void*)0;
    void* __right_value673 = (void*)0;
    void* __right_value674 = (void*)0;
    void* __right_value675 = (void*)0;
    void* __right_value676 = (void*)0;
    void* __right_value677 = (void*)0;
    void* __right_value678 = (void*)0;
    void* __right_value679 = (void*)0;
    void* __right_value680 = (void*)0;
    void* __right_value681 = (void*)0;
    void* __right_value682 = (void*)0;
    void* __right_value683 = (void*)0;
    void* __right_value684 = (void*)0;
    void* __right_value685 = (void*)0;
    void* __right_value686 = (void*)0;
    void* __right_value687 = (void*)0;
    void* __right_value688 = (void*)0;
    void* __right_value689 = (void*)0;
    void* __right_value690 = (void*)0;
    void* __right_value691 = (void*)0;
    void* __right_value692 = (void*)0;
    void* __right_value693 = (void*)0;
    void* __right_value694 = (void*)0;
    void* __right_value695 = (void*)0;
    void* __right_value696 = (void*)0;
    void* __right_value697 = (void*)0;
    void* __right_value698 = (void*)0;
    void* __right_value699 = (void*)0;
    void* __right_value700 = (void*)0;
    void* __right_value701 = (void*)0;
    void* __right_value702 = (void*)0;
    void* __right_value703 = (void*)0;
    void* __right_value704 = (void*)0;
    void* __right_value705 = (void*)0;
    void* __right_value706 = (void*)0;
    void* __right_value707 = (void*)0;
    void* __right_value708 = (void*)0;
    void* __right_value709 = (void*)0;
    void* __right_value710 = (void*)0;
    void* __right_value711 = (void*)0;
    void* __right_value712 = (void*)0;
    void* __right_value713 = (void*)0;
    void* __right_value714 = (void*)0;
    void* __right_value715 = (void*)0;
    void* __right_value716 = (void*)0;
    void* __right_value717 = (void*)0;
    void* __right_value718 = (void*)0;
    void* __right_value719 = (void*)0;
    void* __right_value720 = (void*)0;
    void* __right_value721 = (void*)0;
    void* __right_value722 = (void*)0;
    void* __right_value723 = (void*)0;
    void* __right_value724 = (void*)0;
    void* __right_value725 = (void*)0;
    void* __right_value726 = (void*)0;
    void* __right_value727 = (void*)0;
    void* __right_value728 = (void*)0;
    void* __right_value729 = (void*)0;
    void* __right_value730 = (void*)0;
    void* __right_value731 = (void*)0;
    void* __right_value732 = (void*)0;
    void* __right_value733 = (void*)0;
    void* __right_value734 = (void*)0;
    void* __right_value735 = (void*)0;
    void* __right_value736 = (void*)0;
    void* __right_value737 = (void*)0;
    void* __right_value738 = (void*)0;
    void* __right_value739 = (void*)0;
    void* __right_value740 = (void*)0;
    void* __right_value741 = (void*)0;
    void* __right_value742 = (void*)0;
    void* __right_value743 = (void*)0;
    void* __right_value744 = (void*)0;
    void* __right_value745 = (void*)0;
    void* __right_value746 = (void*)0;
    void* __right_value747 = (void*)0;
    void* __right_value748 = (void*)0;
    void* __right_value749 = (void*)0;
    void* __right_value750 = (void*)0;
    void* __right_value751 = (void*)0;
    void* __right_value752 = (void*)0;
    void* __right_value753 = (void*)0;
    void* __right_value754 = (void*)0;
    void* __right_value755 = (void*)0;
    void* __right_value756 = (void*)0;
    void* __right_value757 = (void*)0;
    void* __right_value758 = (void*)0;
    void* __right_value759 = (void*)0;
    void* __right_value760 = (void*)0;
    void* __right_value761 = (void*)0;
    void* __right_value762 = (void*)0;
    void* __right_value763 = (void*)0;
    void* __right_value764 = (void*)0;
    void* __right_value765 = (void*)0;
    void* __right_value766 = (void*)0;
    void* __right_value767 = (void*)0;
    void* __right_value768 = (void*)0;
    void* __right_value769 = (void*)0;
    void* __right_value770 = (void*)0;
    void* __right_value771 = (void*)0;
    void* __right_value772 = (void*)0;
    void* __right_value773 = (void*)0;
    void* __right_value774 = (void*)0;
    void* __right_value775 = (void*)0;
    void* __right_value776 = (void*)0;
    void* __right_value777 = (void*)0;
    void* __right_value778 = (void*)0;
    void* __right_value779 = (void*)0;
    void* __right_value780 = (void*)0;
    void* __right_value781 = (void*)0;
    void* __right_value782 = (void*)0;
    void* __right_value783 = (void*)0;
    void* __right_value784 = (void*)0;
    void* __right_value785 = (void*)0;
    void* __right_value786 = (void*)0;
    void* __right_value787 = (void*)0;
    void* __right_value788 = (void*)0;
    void* __right_value789 = (void*)0;
    void* __right_value790 = (void*)0;
    void* __right_value791 = (void*)0;
    void* __right_value792 = (void*)0;
    void* __right_value793 = (void*)0;
    void* __right_value794 = (void*)0;
    void* __right_value795 = (void*)0;
    void* __right_value796 = (void*)0;
    void* __right_value797 = (void*)0;
    void* __right_value798 = (void*)0;
    void* __right_value799 = (void*)0;
    void* __right_value800 = (void*)0;
    void* __right_value801 = (void*)0;
    void* __right_value802 = (void*)0;
    char*  c_value_106  ;
    struct sType*  element_type_107  ;
    char*  c_value_108  ;
    struct sType*  type2  ;
    if(gComeC) {
        neo_current_frame = fr.prev;
        return;
    }
    for(o2_saved=(struct map$2char$phsVar$ph*)come_increment_ref_count(table->mVars),it=map$2char$phsVar$ph_begin(o2_saved);!map$2char$phsVar$ph_end(o2_saved);it=map$2char$phsVar$ph_next(o2_saved)){
        p=((struct sVar* )(__right_value2=map$2char$phsVar$ph_operator_load_element(table->mVars,((char* )(__right_value1=__builtin_string(it))))));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        type=p->mType;
        klass=type->mClass;
        if(type->mChannel) {
            add_come_code(info,"(%s[0]) ? close(%s[0]):0;\n",p->mCValueName,p->mCValueName);
            add_come_code(info,"(%s[1]) ? close(%s[1]):0;\n",p->mCValueName,p->mCValueName);
        }
        else if(ret_value!=((void*)0)&&p->mCValueName!=((void*)0)&&string_operator_equals(p->mCValueName,ret_value->mCValueName)&&type->mHeap) {
            if(list$1sNode$ph_length(type->mArrayNum)>0) {
                err_msg(info,"no support array element with heap object result");
                exit(1);
            }
            free_object(type,p->mCValueName,(_Bool)0,(_Bool)1,info,(_Bool)1);
        }
        else if(type->mHeap&&p->mCValueName) {
            if(list$1sNode$ph_length(type->mArrayNum)>0) {
                if(list$1sNode$ph_length(type->mArrayNum)==1) {
                    node=(struct sNode*)come_increment_ref_count(list$1sNode$ph_operator_load_element(type->mArrayNum,0));
                    Value=node_compile(node,info);
                    if(!Value) {
                        err_msg(info,"invalid array number");
                        exit(1);
                    }
                    come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
                    n=atoi(come_value->c_value);
                    for(i=0;i<n;i++){
                        c_value=(char* )come_increment_ref_count(string_operator_add(((char* )(__right_value9=string_operator_add(((char* )(__right_value7=string_operator_add(p->mCValueName,"["))),((char* )(__right_value8=int_to_string(i)))))),"]"));
                        (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0));
                        (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1, 0, (void*)0));
                        (__right_value7 = come_decrement_ref_count(__right_value7, (void*)0, (void*)0, 1, 0, (void*)0));
                        (__right_value8 = come_decrement_ref_count(__right_value8, (void*)0, (void*)0, 1, 0, (void*)0));
                        (__right_value9 = come_decrement_ref_count(__right_value9, (void*)0, (void*)0, 1, 0, (void*)0));
                        element_type=(struct sType* )come_increment_ref_count(sType_clone(type));
                        list$1sNode$ph_reset(element_type->mArrayNum);
                        free_object(element_type,c_value,(_Bool)0,(_Bool)0,info,(_Bool)0);
                        (c_value = come_decrement_ref_count(c_value, (void*)0, (void*)0, 0, 0, (void*)0));
                        come_call_finalizer(sType_finalize, element_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                else if(list$1sNode$ph_length(type->mArrayNum)==2) {
                    node_87=(struct sNode*)come_increment_ref_count(list$1sNode$ph_operator_load_element(type->mArrayNum,0));
                    Value_88=node_compile(node_87,info);
                    if(!Value_88) {
                        err_msg(info,"invalid array number");
                        exit(1);
                    }
                    come_value_89=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
                    n_90=atoi(come_value_89->c_value);
                    node2=(struct sNode*)come_increment_ref_count(list$1sNode$ph_operator_load_element(type->mArrayNum,1));
                    Value_91=node_compile(node2,info);
                    if(!Value_91) {
                        err_msg(info,"invalid array number");
                        exit(1);
                    }
                    come_value2=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
                    m=atoi(come_value2->c_value);
                    for(i_92=0;i_92<n_90;i_92++){
                        for(j=0;j<m;j++){
                            c_value_93=(char* )come_increment_ref_count(string_operator_add(((char* )(__right_value97=string_operator_add(((char* )(__right_value95=string_operator_add(((char* )(__right_value94=string_operator_add(((char* )(__right_value93=string_operator_add(((char* )(__right_value91=string_operator_add(p->mCValueName,"["))),((char* )(__right_value92=int_to_string(i_92)))))),"]"))),"["))),((char* )(__right_value96=int_to_string(j)))))),"]"));
                            (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0));
                            (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1, 0, (void*)0));
                            (__right_value7 = come_decrement_ref_count(__right_value7, (void*)0, (void*)0, 1, 0, (void*)0));
                            (__right_value8 = come_decrement_ref_count(__right_value8, (void*)0, (void*)0, 1, 0, (void*)0));
                            (__right_value9 = come_decrement_ref_count(__right_value9, (void*)0, (void*)0, 1, 0, (void*)0));
                            (__right_value13 = come_decrement_ref_count(__right_value13, (void*)0, (void*)0, 1, 0, (void*)0));
                            (__right_value14 = come_decrement_ref_count(__right_value14, (void*)0, (void*)0, 1, 0, (void*)0));
                            (__right_value18 = come_decrement_ref_count(__right_value18, (void*)0, (void*)0, 1, 0, (void*)0));
                            (__right_value19 = come_decrement_ref_count(__right_value19, (void*)0, (void*)0, 1, 0, (void*)0));
                            (__right_value20 = come_decrement_ref_count(__right_value20, (void*)0, (void*)0, 1, 0, (void*)0));
                            (__right_value21 = come_decrement_ref_count(__right_value21, (void*)0, (void*)0, 1, 0, (void*)0));
                            (__right_value26 = come_decrement_ref_count(__right_value26, (void*)0, (void*)0, 1, 0, (void*)0));
                            (__right_value27 = come_decrement_ref_count(__right_value27, (void*)0, (void*)0, 1, 0, (void*)0));
                            (__right_value31 = come_decrement_ref_count(__right_value31, (void*)0, (void*)0, 1, 0, (void*)0));
                            (__right_value32 = come_decrement_ref_count(__right_value32, (void*)0, (void*)0, 1, 0, (void*)0));
                            (__right_value33 = come_decrement_ref_count(__right_value33, (void*)0, (void*)0, 1, 0, (void*)0));
                            (__right_value37 = come_decrement_ref_count(__right_value37, (void*)0, (void*)0, 1, 0, (void*)0));
                            (__right_value38 = come_decrement_ref_count(__right_value38, (void*)0, (void*)0, 1, 0, (void*)0));
                            (__right_value42 = come_decrement_ref_count(__right_value42, (void*)0, (void*)0, 1, 0, (void*)0));
                            (__right_value43 = come_decrement_ref_count(__right_value43, (void*)0, (void*)0, 1, 0, (void*)0));
                            (__right_value44 = come_decrement_ref_count(__right_value44, (void*)0, (void*)0, 1, 0, (void*)0));
                            (__right_value45 = come_decrement_ref_count(__right_value45, (void*)0, (void*)0, 1, 0, (void*)0));
                            (__right_value46 = come_decrement_ref_count(__right_value46, (void*)0, (void*)0, 1, 0, (void*)0));
                            (__right_value47 = come_decrement_ref_count(__right_value47, (void*)0, (void*)0, 1, 0, (void*)0));
                            (__right_value51 = come_decrement_ref_count(__right_value51, (void*)0, (void*)0, 1, 0, (void*)0));
                            (__right_value52 = come_decrement_ref_count(__right_value52, (void*)0, (void*)0, 1, 0, (void*)0));
                            (__right_value56 = come_decrement_ref_count(__right_value56, (void*)0, (void*)0, 1, 0, (void*)0));
                            (__right_value57 = come_decrement_ref_count(__right_value57, (void*)0, (void*)0, 1, 0, (void*)0));
                            (__right_value58 = come_decrement_ref_count(__right_value58, (void*)0, (void*)0, 1, 0, (void*)0));
                            (__right_value62 = come_decrement_ref_count(__right_value62, (void*)0, (void*)0, 1, 0, (void*)0));
                            (__right_value63 = come_decrement_ref_count(__right_value63, (void*)0, (void*)0, 1, 0, (void*)0));
                            (__right_value67 = come_decrement_ref_count(__right_value67, (void*)0, (void*)0, 1, 0, (void*)0));
                            (__right_value68 = come_decrement_ref_count(__right_value68, (void*)0, (void*)0, 1, 0, (void*)0));
                            (__right_value69 = come_decrement_ref_count(__right_value69, (void*)0, (void*)0, 1, 0, (void*)0));
                            (__right_value70 = come_decrement_ref_count(__right_value70, (void*)0, (void*)0, 1, 0, (void*)0));
                            (__right_value75 = come_decrement_ref_count(__right_value75, (void*)0, (void*)0, 1, 0, (void*)0));
                            (__right_value76 = come_decrement_ref_count(__right_value76, (void*)0, (void*)0, 1, 0, (void*)0));
                            (__right_value80 = come_decrement_ref_count(__right_value80, (void*)0, (void*)0, 1, 0, (void*)0));
                            (__right_value81 = come_decrement_ref_count(__right_value81, (void*)0, (void*)0, 1, 0, (void*)0));
                            (__right_value82 = come_decrement_ref_count(__right_value82, (void*)0, (void*)0, 1, 0, (void*)0));
                            (__right_value86 = come_decrement_ref_count(__right_value86, (void*)0, (void*)0, 1, 0, (void*)0));
                            (__right_value87 = come_decrement_ref_count(__right_value87, (void*)0, (void*)0, 1, 0, (void*)0));
                            (__right_value91 = come_decrement_ref_count(__right_value91, (void*)0, (void*)0, 1, 0, (void*)0));
                            (__right_value92 = come_decrement_ref_count(__right_value92, (void*)0, (void*)0, 1, 0, (void*)0));
                            (__right_value93 = come_decrement_ref_count(__right_value93, (void*)0, (void*)0, 1, 0, (void*)0));
                            (__right_value94 = come_decrement_ref_count(__right_value94, (void*)0, (void*)0, 1, 0, (void*)0));
                            (__right_value95 = come_decrement_ref_count(__right_value95, (void*)0, (void*)0, 1, 0, (void*)0));
                            (__right_value96 = come_decrement_ref_count(__right_value96, (void*)0, (void*)0, 1, 0, (void*)0));
                            (__right_value97 = come_decrement_ref_count(__right_value97, (void*)0, (void*)0, 1, 0, (void*)0));
                            element_type_94=(struct sType* )come_increment_ref_count(sType_clone(type));
                            list$1sNode$ph_reset(element_type_94->mArrayNum);
                            free_object(element_type_94,c_value_93,(_Bool)0,(_Bool)0,info,(_Bool)0);
                            (c_value_93 = come_decrement_ref_count(c_value_93, (void*)0, (void*)0, 0, 0, (void*)0));
                            come_call_finalizer(sType_finalize, element_type_94, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                    }
                    ((node_87) ? node_87 = come_decrement_ref_count(node_87, ((struct sNode*)node_87)->finalize, ((struct sNode*)node_87)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                    come_call_finalizer(CVALUE_finalize, come_value_89, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    ((node2) ? node2 = come_decrement_ref_count(node2, ((struct sNode*)node2)->finalize, ((struct sNode*)node2)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                    come_call_finalizer(CVALUE_finalize, come_value2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                else if(list$1sNode$ph_length(type->mArrayNum)==3) {
                    node_95=(struct sNode*)come_increment_ref_count(list$1sNode$ph_operator_load_element(type->mArrayNum,0));
                    Value_96=node_compile(node_95,info);
                    if(!Value_96) {
                        err_msg(info,"invalid array number");
                        exit(1);
                    }
                    come_value_97=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
                    n_98=atoi(come_value_97->c_value);
                    node2_99=(struct sNode*)come_increment_ref_count(list$1sNode$ph_operator_load_element(type->mArrayNum,1));
                    Value_100=node_compile(node2_99,info);
                    if(!Value_100) {
                        err_msg(info,"invalid array number");
                        exit(1);
                    }
                    come_value2_101=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
                    m_102=atoi(come_value2_101->c_value);
                    node3=(struct sNode*)come_increment_ref_count(list$1sNode$ph_operator_load_element(type->mArrayNum,2));
                    Value_103=node_compile(node3,info);
                    if(!Value_103) {
                        err_msg(info,"invalid array number");
                        exit(1);
                    }
                    come_value3=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
                    l=atoi(come_value3->c_value);
                    for(i_104=0;i_104<n_98;i_104++){
                        for(j_105=0;j_105<m_102;j_105++){
                            for(k=0;k<l;k++){
                                c_value_106=(char* )come_increment_ref_count(string_operator_add(((char* )(__right_value801=string_operator_add(((char* )(__right_value799=string_operator_add(((char* )(__right_value798=string_operator_add(((char* )(__right_value797=string_operator_add(((char* )(__right_value795=string_operator_add(((char* )(__right_value794=string_operator_add(((char* )(__right_value793=string_operator_add(((char* )(__right_value791=string_operator_add(p->mCValueName,"["))),((char* )(__right_value792=int_to_string(i_104)))))),"]"))),"["))),((char* )(__right_value796=int_to_string(j_105)))))),"]"))),"["))),((char* )(__right_value800=int_to_string(k)))))),"]"));
                                (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value7 = come_decrement_ref_count(__right_value7, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value8 = come_decrement_ref_count(__right_value8, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value9 = come_decrement_ref_count(__right_value9, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value13 = come_decrement_ref_count(__right_value13, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value14 = come_decrement_ref_count(__right_value14, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value18 = come_decrement_ref_count(__right_value18, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value19 = come_decrement_ref_count(__right_value19, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value20 = come_decrement_ref_count(__right_value20, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value21 = come_decrement_ref_count(__right_value21, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value26 = come_decrement_ref_count(__right_value26, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value27 = come_decrement_ref_count(__right_value27, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value31 = come_decrement_ref_count(__right_value31, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value32 = come_decrement_ref_count(__right_value32, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value33 = come_decrement_ref_count(__right_value33, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value37 = come_decrement_ref_count(__right_value37, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value38 = come_decrement_ref_count(__right_value38, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value42 = come_decrement_ref_count(__right_value42, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value43 = come_decrement_ref_count(__right_value43, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value44 = come_decrement_ref_count(__right_value44, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value45 = come_decrement_ref_count(__right_value45, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value46 = come_decrement_ref_count(__right_value46, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value47 = come_decrement_ref_count(__right_value47, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value51 = come_decrement_ref_count(__right_value51, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value52 = come_decrement_ref_count(__right_value52, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value56 = come_decrement_ref_count(__right_value56, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value57 = come_decrement_ref_count(__right_value57, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value58 = come_decrement_ref_count(__right_value58, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value62 = come_decrement_ref_count(__right_value62, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value63 = come_decrement_ref_count(__right_value63, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value67 = come_decrement_ref_count(__right_value67, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value68 = come_decrement_ref_count(__right_value68, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value69 = come_decrement_ref_count(__right_value69, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value70 = come_decrement_ref_count(__right_value70, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value75 = come_decrement_ref_count(__right_value75, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value76 = come_decrement_ref_count(__right_value76, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value80 = come_decrement_ref_count(__right_value80, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value81 = come_decrement_ref_count(__right_value81, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value82 = come_decrement_ref_count(__right_value82, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value86 = come_decrement_ref_count(__right_value86, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value87 = come_decrement_ref_count(__right_value87, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value91 = come_decrement_ref_count(__right_value91, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value92 = come_decrement_ref_count(__right_value92, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value93 = come_decrement_ref_count(__right_value93, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value94 = come_decrement_ref_count(__right_value94, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value95 = come_decrement_ref_count(__right_value95, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value96 = come_decrement_ref_count(__right_value96, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value97 = come_decrement_ref_count(__right_value97, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value101 = come_decrement_ref_count(__right_value101, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value102 = come_decrement_ref_count(__right_value102, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value106 = come_decrement_ref_count(__right_value106, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value107 = come_decrement_ref_count(__right_value107, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value108 = come_decrement_ref_count(__right_value108, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value112 = come_decrement_ref_count(__right_value112, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value113 = come_decrement_ref_count(__right_value113, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value117 = come_decrement_ref_count(__right_value117, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value118 = come_decrement_ref_count(__right_value118, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value119 = come_decrement_ref_count(__right_value119, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value120 = come_decrement_ref_count(__right_value120, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value125 = come_decrement_ref_count(__right_value125, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value126 = come_decrement_ref_count(__right_value126, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value130 = come_decrement_ref_count(__right_value130, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value131 = come_decrement_ref_count(__right_value131, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value132 = come_decrement_ref_count(__right_value132, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value136 = come_decrement_ref_count(__right_value136, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value137 = come_decrement_ref_count(__right_value137, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value141 = come_decrement_ref_count(__right_value141, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value142 = come_decrement_ref_count(__right_value142, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value143 = come_decrement_ref_count(__right_value143, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value144 = come_decrement_ref_count(__right_value144, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value145 = come_decrement_ref_count(__right_value145, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value146 = come_decrement_ref_count(__right_value146, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value150 = come_decrement_ref_count(__right_value150, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value151 = come_decrement_ref_count(__right_value151, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value155 = come_decrement_ref_count(__right_value155, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value156 = come_decrement_ref_count(__right_value156, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value157 = come_decrement_ref_count(__right_value157, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value161 = come_decrement_ref_count(__right_value161, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value162 = come_decrement_ref_count(__right_value162, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value166 = come_decrement_ref_count(__right_value166, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value167 = come_decrement_ref_count(__right_value167, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value168 = come_decrement_ref_count(__right_value168, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value169 = come_decrement_ref_count(__right_value169, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value174 = come_decrement_ref_count(__right_value174, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value175 = come_decrement_ref_count(__right_value175, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value179 = come_decrement_ref_count(__right_value179, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value180 = come_decrement_ref_count(__right_value180, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value181 = come_decrement_ref_count(__right_value181, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value185 = come_decrement_ref_count(__right_value185, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value186 = come_decrement_ref_count(__right_value186, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value190 = come_decrement_ref_count(__right_value190, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value191 = come_decrement_ref_count(__right_value191, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value192 = come_decrement_ref_count(__right_value192, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value193 = come_decrement_ref_count(__right_value193, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value194 = come_decrement_ref_count(__right_value194, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value195 = come_decrement_ref_count(__right_value195, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value196 = come_decrement_ref_count(__right_value196, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value197 = come_decrement_ref_count(__right_value197, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value202 = come_decrement_ref_count(__right_value202, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value203 = come_decrement_ref_count(__right_value203, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value207 = come_decrement_ref_count(__right_value207, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value208 = come_decrement_ref_count(__right_value208, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value209 = come_decrement_ref_count(__right_value209, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value213 = come_decrement_ref_count(__right_value213, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value214 = come_decrement_ref_count(__right_value214, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value218 = come_decrement_ref_count(__right_value218, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value219 = come_decrement_ref_count(__right_value219, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value220 = come_decrement_ref_count(__right_value220, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value221 = come_decrement_ref_count(__right_value221, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value226 = come_decrement_ref_count(__right_value226, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value227 = come_decrement_ref_count(__right_value227, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value231 = come_decrement_ref_count(__right_value231, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value232 = come_decrement_ref_count(__right_value232, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value233 = come_decrement_ref_count(__right_value233, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value237 = come_decrement_ref_count(__right_value237, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value238 = come_decrement_ref_count(__right_value238, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value242 = come_decrement_ref_count(__right_value242, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value243 = come_decrement_ref_count(__right_value243, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value244 = come_decrement_ref_count(__right_value244, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value245 = come_decrement_ref_count(__right_value245, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value246 = come_decrement_ref_count(__right_value246, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value247 = come_decrement_ref_count(__right_value247, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value251 = come_decrement_ref_count(__right_value251, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value252 = come_decrement_ref_count(__right_value252, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value256 = come_decrement_ref_count(__right_value256, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value257 = come_decrement_ref_count(__right_value257, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value258 = come_decrement_ref_count(__right_value258, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value262 = come_decrement_ref_count(__right_value262, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value263 = come_decrement_ref_count(__right_value263, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value267 = come_decrement_ref_count(__right_value267, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value268 = come_decrement_ref_count(__right_value268, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value269 = come_decrement_ref_count(__right_value269, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value270 = come_decrement_ref_count(__right_value270, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value275 = come_decrement_ref_count(__right_value275, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value276 = come_decrement_ref_count(__right_value276, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value280 = come_decrement_ref_count(__right_value280, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value281 = come_decrement_ref_count(__right_value281, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value282 = come_decrement_ref_count(__right_value282, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value286 = come_decrement_ref_count(__right_value286, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value287 = come_decrement_ref_count(__right_value287, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value291 = come_decrement_ref_count(__right_value291, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value292 = come_decrement_ref_count(__right_value292, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value293 = come_decrement_ref_count(__right_value293, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value294 = come_decrement_ref_count(__right_value294, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value295 = come_decrement_ref_count(__right_value295, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value296 = come_decrement_ref_count(__right_value296, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value297 = come_decrement_ref_count(__right_value297, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value301 = come_decrement_ref_count(__right_value301, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value302 = come_decrement_ref_count(__right_value302, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value306 = come_decrement_ref_count(__right_value306, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value307 = come_decrement_ref_count(__right_value307, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value308 = come_decrement_ref_count(__right_value308, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value312 = come_decrement_ref_count(__right_value312, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value313 = come_decrement_ref_count(__right_value313, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value317 = come_decrement_ref_count(__right_value317, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value318 = come_decrement_ref_count(__right_value318, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value319 = come_decrement_ref_count(__right_value319, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value320 = come_decrement_ref_count(__right_value320, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value325 = come_decrement_ref_count(__right_value325, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value326 = come_decrement_ref_count(__right_value326, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value330 = come_decrement_ref_count(__right_value330, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value331 = come_decrement_ref_count(__right_value331, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value332 = come_decrement_ref_count(__right_value332, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value336 = come_decrement_ref_count(__right_value336, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value337 = come_decrement_ref_count(__right_value337, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value341 = come_decrement_ref_count(__right_value341, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value342 = come_decrement_ref_count(__right_value342, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value343 = come_decrement_ref_count(__right_value343, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value344 = come_decrement_ref_count(__right_value344, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value345 = come_decrement_ref_count(__right_value345, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value346 = come_decrement_ref_count(__right_value346, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value350 = come_decrement_ref_count(__right_value350, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value351 = come_decrement_ref_count(__right_value351, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value355 = come_decrement_ref_count(__right_value355, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value356 = come_decrement_ref_count(__right_value356, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value357 = come_decrement_ref_count(__right_value357, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value361 = come_decrement_ref_count(__right_value361, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value362 = come_decrement_ref_count(__right_value362, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value366 = come_decrement_ref_count(__right_value366, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value367 = come_decrement_ref_count(__right_value367, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value368 = come_decrement_ref_count(__right_value368, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value369 = come_decrement_ref_count(__right_value369, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value374 = come_decrement_ref_count(__right_value374, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value375 = come_decrement_ref_count(__right_value375, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value379 = come_decrement_ref_count(__right_value379, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value380 = come_decrement_ref_count(__right_value380, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value381 = come_decrement_ref_count(__right_value381, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value385 = come_decrement_ref_count(__right_value385, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value386 = come_decrement_ref_count(__right_value386, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value390 = come_decrement_ref_count(__right_value390, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value391 = come_decrement_ref_count(__right_value391, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value392 = come_decrement_ref_count(__right_value392, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value393 = come_decrement_ref_count(__right_value393, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value394 = come_decrement_ref_count(__right_value394, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value395 = come_decrement_ref_count(__right_value395, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value396 = come_decrement_ref_count(__right_value396, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value397 = come_decrement_ref_count(__right_value397, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value398 = come_decrement_ref_count(__right_value398, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value399 = come_decrement_ref_count(__right_value399, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value403 = come_decrement_ref_count(__right_value403, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value404 = come_decrement_ref_count(__right_value404, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value408 = come_decrement_ref_count(__right_value408, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value409 = come_decrement_ref_count(__right_value409, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value410 = come_decrement_ref_count(__right_value410, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value414 = come_decrement_ref_count(__right_value414, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value415 = come_decrement_ref_count(__right_value415, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value419 = come_decrement_ref_count(__right_value419, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value420 = come_decrement_ref_count(__right_value420, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value421 = come_decrement_ref_count(__right_value421, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value422 = come_decrement_ref_count(__right_value422, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value427 = come_decrement_ref_count(__right_value427, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value428 = come_decrement_ref_count(__right_value428, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value432 = come_decrement_ref_count(__right_value432, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value433 = come_decrement_ref_count(__right_value433, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value434 = come_decrement_ref_count(__right_value434, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value438 = come_decrement_ref_count(__right_value438, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value439 = come_decrement_ref_count(__right_value439, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value443 = come_decrement_ref_count(__right_value443, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value444 = come_decrement_ref_count(__right_value444, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value445 = come_decrement_ref_count(__right_value445, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value446 = come_decrement_ref_count(__right_value446, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value447 = come_decrement_ref_count(__right_value447, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value448 = come_decrement_ref_count(__right_value448, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value452 = come_decrement_ref_count(__right_value452, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value453 = come_decrement_ref_count(__right_value453, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value457 = come_decrement_ref_count(__right_value457, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value458 = come_decrement_ref_count(__right_value458, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value459 = come_decrement_ref_count(__right_value459, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value463 = come_decrement_ref_count(__right_value463, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value464 = come_decrement_ref_count(__right_value464, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value468 = come_decrement_ref_count(__right_value468, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value469 = come_decrement_ref_count(__right_value469, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value470 = come_decrement_ref_count(__right_value470, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value471 = come_decrement_ref_count(__right_value471, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value476 = come_decrement_ref_count(__right_value476, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value477 = come_decrement_ref_count(__right_value477, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value481 = come_decrement_ref_count(__right_value481, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value482 = come_decrement_ref_count(__right_value482, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value483 = come_decrement_ref_count(__right_value483, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value487 = come_decrement_ref_count(__right_value487, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value488 = come_decrement_ref_count(__right_value488, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value492 = come_decrement_ref_count(__right_value492, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value493 = come_decrement_ref_count(__right_value493, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value494 = come_decrement_ref_count(__right_value494, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value495 = come_decrement_ref_count(__right_value495, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value496 = come_decrement_ref_count(__right_value496, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value497 = come_decrement_ref_count(__right_value497, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value498 = come_decrement_ref_count(__right_value498, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value502 = come_decrement_ref_count(__right_value502, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value503 = come_decrement_ref_count(__right_value503, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value507 = come_decrement_ref_count(__right_value507, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value508 = come_decrement_ref_count(__right_value508, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value509 = come_decrement_ref_count(__right_value509, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value513 = come_decrement_ref_count(__right_value513, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value514 = come_decrement_ref_count(__right_value514, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value518 = come_decrement_ref_count(__right_value518, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value519 = come_decrement_ref_count(__right_value519, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value520 = come_decrement_ref_count(__right_value520, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value521 = come_decrement_ref_count(__right_value521, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value526 = come_decrement_ref_count(__right_value526, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value527 = come_decrement_ref_count(__right_value527, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value531 = come_decrement_ref_count(__right_value531, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value532 = come_decrement_ref_count(__right_value532, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value533 = come_decrement_ref_count(__right_value533, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value537 = come_decrement_ref_count(__right_value537, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value538 = come_decrement_ref_count(__right_value538, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value542 = come_decrement_ref_count(__right_value542, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value543 = come_decrement_ref_count(__right_value543, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value544 = come_decrement_ref_count(__right_value544, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value545 = come_decrement_ref_count(__right_value545, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value546 = come_decrement_ref_count(__right_value546, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value547 = come_decrement_ref_count(__right_value547, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value551 = come_decrement_ref_count(__right_value551, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value552 = come_decrement_ref_count(__right_value552, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value556 = come_decrement_ref_count(__right_value556, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value557 = come_decrement_ref_count(__right_value557, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value558 = come_decrement_ref_count(__right_value558, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value562 = come_decrement_ref_count(__right_value562, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value563 = come_decrement_ref_count(__right_value563, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value567 = come_decrement_ref_count(__right_value567, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value568 = come_decrement_ref_count(__right_value568, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value569 = come_decrement_ref_count(__right_value569, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value570 = come_decrement_ref_count(__right_value570, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value575 = come_decrement_ref_count(__right_value575, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value576 = come_decrement_ref_count(__right_value576, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value580 = come_decrement_ref_count(__right_value580, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value581 = come_decrement_ref_count(__right_value581, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value582 = come_decrement_ref_count(__right_value582, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value586 = come_decrement_ref_count(__right_value586, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value587 = come_decrement_ref_count(__right_value587, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value591 = come_decrement_ref_count(__right_value591, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value592 = come_decrement_ref_count(__right_value592, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value593 = come_decrement_ref_count(__right_value593, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value594 = come_decrement_ref_count(__right_value594, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value595 = come_decrement_ref_count(__right_value595, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value596 = come_decrement_ref_count(__right_value596, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value597 = come_decrement_ref_count(__right_value597, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value598 = come_decrement_ref_count(__right_value598, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value603 = come_decrement_ref_count(__right_value603, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value604 = come_decrement_ref_count(__right_value604, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value608 = come_decrement_ref_count(__right_value608, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value609 = come_decrement_ref_count(__right_value609, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value610 = come_decrement_ref_count(__right_value610, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value614 = come_decrement_ref_count(__right_value614, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value615 = come_decrement_ref_count(__right_value615, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value619 = come_decrement_ref_count(__right_value619, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value620 = come_decrement_ref_count(__right_value620, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value621 = come_decrement_ref_count(__right_value621, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value622 = come_decrement_ref_count(__right_value622, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value627 = come_decrement_ref_count(__right_value627, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value628 = come_decrement_ref_count(__right_value628, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value632 = come_decrement_ref_count(__right_value632, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value633 = come_decrement_ref_count(__right_value633, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value634 = come_decrement_ref_count(__right_value634, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value638 = come_decrement_ref_count(__right_value638, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value639 = come_decrement_ref_count(__right_value639, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value643 = come_decrement_ref_count(__right_value643, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value644 = come_decrement_ref_count(__right_value644, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value645 = come_decrement_ref_count(__right_value645, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value646 = come_decrement_ref_count(__right_value646, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value647 = come_decrement_ref_count(__right_value647, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value648 = come_decrement_ref_count(__right_value648, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value652 = come_decrement_ref_count(__right_value652, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value653 = come_decrement_ref_count(__right_value653, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value657 = come_decrement_ref_count(__right_value657, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value658 = come_decrement_ref_count(__right_value658, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value659 = come_decrement_ref_count(__right_value659, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value663 = come_decrement_ref_count(__right_value663, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value664 = come_decrement_ref_count(__right_value664, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value668 = come_decrement_ref_count(__right_value668, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value669 = come_decrement_ref_count(__right_value669, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value670 = come_decrement_ref_count(__right_value670, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value671 = come_decrement_ref_count(__right_value671, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value676 = come_decrement_ref_count(__right_value676, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value677 = come_decrement_ref_count(__right_value677, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value681 = come_decrement_ref_count(__right_value681, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value682 = come_decrement_ref_count(__right_value682, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value683 = come_decrement_ref_count(__right_value683, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value687 = come_decrement_ref_count(__right_value687, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value688 = come_decrement_ref_count(__right_value688, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value692 = come_decrement_ref_count(__right_value692, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value693 = come_decrement_ref_count(__right_value693, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value694 = come_decrement_ref_count(__right_value694, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value695 = come_decrement_ref_count(__right_value695, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value696 = come_decrement_ref_count(__right_value696, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value697 = come_decrement_ref_count(__right_value697, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value698 = come_decrement_ref_count(__right_value698, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value702 = come_decrement_ref_count(__right_value702, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value703 = come_decrement_ref_count(__right_value703, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value707 = come_decrement_ref_count(__right_value707, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value708 = come_decrement_ref_count(__right_value708, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value709 = come_decrement_ref_count(__right_value709, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value713 = come_decrement_ref_count(__right_value713, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value714 = come_decrement_ref_count(__right_value714, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value718 = come_decrement_ref_count(__right_value718, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value719 = come_decrement_ref_count(__right_value719, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value720 = come_decrement_ref_count(__right_value720, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value721 = come_decrement_ref_count(__right_value721, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value726 = come_decrement_ref_count(__right_value726, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value727 = come_decrement_ref_count(__right_value727, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value731 = come_decrement_ref_count(__right_value731, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value732 = come_decrement_ref_count(__right_value732, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value733 = come_decrement_ref_count(__right_value733, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value737 = come_decrement_ref_count(__right_value737, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value738 = come_decrement_ref_count(__right_value738, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value742 = come_decrement_ref_count(__right_value742, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value743 = come_decrement_ref_count(__right_value743, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value744 = come_decrement_ref_count(__right_value744, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value745 = come_decrement_ref_count(__right_value745, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value746 = come_decrement_ref_count(__right_value746, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value747 = come_decrement_ref_count(__right_value747, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value751 = come_decrement_ref_count(__right_value751, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value752 = come_decrement_ref_count(__right_value752, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value756 = come_decrement_ref_count(__right_value756, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value757 = come_decrement_ref_count(__right_value757, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value758 = come_decrement_ref_count(__right_value758, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value762 = come_decrement_ref_count(__right_value762, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value763 = come_decrement_ref_count(__right_value763, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value767 = come_decrement_ref_count(__right_value767, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value768 = come_decrement_ref_count(__right_value768, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value769 = come_decrement_ref_count(__right_value769, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value770 = come_decrement_ref_count(__right_value770, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value775 = come_decrement_ref_count(__right_value775, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value776 = come_decrement_ref_count(__right_value776, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value780 = come_decrement_ref_count(__right_value780, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value781 = come_decrement_ref_count(__right_value781, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value782 = come_decrement_ref_count(__right_value782, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value786 = come_decrement_ref_count(__right_value786, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value787 = come_decrement_ref_count(__right_value787, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value791 = come_decrement_ref_count(__right_value791, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value792 = come_decrement_ref_count(__right_value792, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value793 = come_decrement_ref_count(__right_value793, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value794 = come_decrement_ref_count(__right_value794, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value795 = come_decrement_ref_count(__right_value795, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value796 = come_decrement_ref_count(__right_value796, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value797 = come_decrement_ref_count(__right_value797, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value798 = come_decrement_ref_count(__right_value798, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value799 = come_decrement_ref_count(__right_value799, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value800 = come_decrement_ref_count(__right_value800, (void*)0, (void*)0, 1, 0, (void*)0));
                                (__right_value801 = come_decrement_ref_count(__right_value801, (void*)0, (void*)0, 1, 0, (void*)0));
                                element_type_107=(struct sType* )come_increment_ref_count(sType_clone(type));
                                list$1sNode$ph_reset(element_type_107->mArrayNum);
                                free_object(element_type_107,c_value_106,(_Bool)0,(_Bool)0,info,(_Bool)0);
                                (c_value_106 = come_decrement_ref_count(c_value_106, (void*)0, (void*)0, 0, 0, (void*)0));
                                come_call_finalizer(sType_finalize, element_type_107, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                        }
                    }
                    ((node_95) ? node_95 = come_decrement_ref_count(node_95, ((struct sNode*)node_95)->finalize, ((struct sNode*)node_95)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                    come_call_finalizer(CVALUE_finalize, come_value_97, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    ((node2_99) ? node2_99 = come_decrement_ref_count(node2_99, ((struct sNode*)node2_99)->finalize, ((struct sNode*)node2_99)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                    come_call_finalizer(CVALUE_finalize, come_value2_101, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    ((node3) ? node3 = come_decrement_ref_count(node3, ((struct sNode*)node3)->finalize, ((struct sNode*)node3)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                    come_call_finalizer(CVALUE_finalize, come_value3, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                else {
                    err_msg(info,"no support more 4 dimention array with heap object");
                    exit(1);
                }
            }
            else {
                free_object(type,p->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0);
            }
        }
        else if(klass->mStruct&&p->mCValueName&&type->mAllocaValue&&!type->mNoCallingDestructor) {
            c_value_108=(char* )come_increment_ref_count(xsprintf("(&%s)",p->mCValueName));
            type2=(struct sType* )come_increment_ref_count(sType_clone(type));
            type2->mPointerNum++;
            free_object(type2,c_value_108,(_Bool)0,(_Bool)0,info,(_Bool)0);
            (c_value_108 = come_decrement_ref_count(c_value_108, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
}

static char*  map$2char$phsVar$ph_begin(struct map$2char$phsVar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph_begin"; neo_current_frame = &fr;
    char*  result  ;
    char*  __result_obj__0  ;
    char*  result_83  ;
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
    memset(&result_83,0,sizeof(char* ));
    __result_obj__0 = result_83;
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
    char*  result_84  ;
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
    memset(&result_84,0,sizeof(char* ));
    __result_obj__0 = result_84;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sNode* list$1sNode$ph$p_operator_load_element(struct list$1sNode$ph* self, int position)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph$p_operator_load_element"; neo_current_frame = &fr;
    struct sNode* default_value;
    struct sNode* __result_obj__0;
    struct list_item$1sNode$ph* it;
    int i;
    struct sNode* default_value_85;
    if(self==((void*)0)) {
        memset(&default_value,0,sizeof(struct sNode*));
        __result_obj__0 = (struct sNode*)come_increment_ref_count(default_value);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__0;
    }
    if(position<0) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(it!=((void*)0)) {
        if(position==i) {
            __result_obj__0 = (struct sNode*)come_increment_ref_count(it->item);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__0;
        }
        it=it->next;
        i++;
    }
    memset(&default_value_85,0,sizeof(struct sNode*));
    __result_obj__0 = (struct sNode*)come_increment_ref_count(default_value_85);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    return __result_obj__0;
}

static struct sNode* list$1sNode$ph_operator_load_element(struct list$1sNode$ph* self, int position)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_operator_load_element"; neo_current_frame = &fr;
    struct sNode* default_value;
    struct sNode* __result_obj__0;
    struct list_item$1sNode$ph* it;
    int i;
    struct sNode* default_value_86;
    if(self==((void*)0)) {
        memset(&default_value,0,sizeof(struct sNode*));
        __result_obj__0 = (struct sNode*)come_increment_ref_count(default_value);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__0;
    }
    if(position<0) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(it!=((void*)0)) {
        if(position==i) {
            __result_obj__0 = (struct sNode*)come_increment_ref_count(it->item);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__0;
        }
        it=it->next;
        i++;
    }
    memset(&default_value_86,0,sizeof(struct sNode*));
    __result_obj__0 = (struct sNode*)come_increment_ref_count(default_value_86);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
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
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void map$2char$phsVar$ph$p_finalize(struct map$2char$phsVar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph$p_finalize"; neo_current_frame = &fr;
    int i;
    int i_109;
    for(i=0;i<self->size;i++){
        if(self->item_existance[i]) {
            if(1) {
                come_call_finalizer(sVar_finalize, self->items[i], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(i_109=0;i_109<self->size;i_109++){
        if(self->item_existance[i_109]) {
            if(1) {
                (self->keys[i_109] = come_decrement_ref_count(self->keys[i_109], (void*)0, (void*)0, 0, 0, (void*)0));
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, (void*)0));
    neo_current_frame = fr.prev;
}

void free_objects_on_return(struct sBlock*  current_block  , struct sInfo*  info  , struct sVar*  ret_value  , _Bool top_block)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "free_objects_on_return"; neo_current_frame = &fr;
    struct sVarTable*  it  ;
    if(gComeC) {
        neo_current_frame = fr.prev;
        return;
    }
    it=info->lv_table;
    if(it==info->come_fun->mBlock->mVarTable) {
        free_objects(it,ret_value,info);
    }
    else {
        while(it!=info->come_fun->mBlock->mVarTable) {
            free_objects(it,ret_value,info);
            it=it->mParent;
        }
        free_objects(it,ret_value,info);
    }
    neo_current_frame = fr.prev;
}

void free_objects_on_break(struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "free_objects_on_break"; neo_current_frame = &fr;
    struct sVar*  ret_value  ;
    struct sVarTable*  current_loop_vtable  ;
    struct sVarTable*  it  ;
    if(gComeC) {
        neo_current_frame = fr.prev;
        return;
    }
    ret_value=((void*)0);
    current_loop_vtable=info->current_loop_vtable;
    if(current_loop_vtable!=((void*)0)) {
        it=info->lv_table;
        while(it!=current_loop_vtable) {
            free_objects(it,ret_value,info);
            it=it->mParent;
        }
        free_objects(it,ret_value,info);
    }
    neo_current_frame = fr.prev;
}

_Bool existance_free_objects(struct sVarTable*  table  , struct sVar*  ret_value  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "existance_free_objects"; neo_current_frame = &fr;
    struct map$2char$phsVar$ph* o2_saved;
    char*  it  ;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    void* __right_value2 = (void*)0;
    struct sVar*  p  ;
    struct sType*  type  ;
    struct sClass*  klass  ;
    _Bool __result_obj__0;
    if(gComeC) {
        neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    for(o2_saved=(struct map$2char$phsVar$ph*)come_increment_ref_count(table->mVars),it=map$2char$phsVar$ph_begin(o2_saved);!map$2char$phsVar$ph_end(o2_saved);it=map$2char$phsVar$ph_next(o2_saved)){
        p=((struct sVar* )(__right_value2=map$2char$phsVar$ph_operator_load_element(table->mVars,((char* )(__right_value1=__builtin_string(it))))));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        type=p->mType;
        klass=type->mClass;
        if(type->mChannel) {
            __result_obj__0 = (_Bool)1;
            come_call_finalizer(map$2char$phsVar$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        else if(ret_value!=((void*)0)&&p->mCValueName!=((void*)0)&&string_operator_equals(p->mCValueName,ret_value->mCValueName)&&type->mHeap) {
            __result_obj__0 = (_Bool)1;
            come_call_finalizer(map$2char$phsVar$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        else if(type->mHeap&&p->mCValueName) {
            __result_obj__0 = (_Bool)1;
            come_call_finalizer(map$2char$phsVar$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        else if(klass->mStruct&&p->mCValueName&&type->mAllocaValue&&!type->mNoCallingDestructor) {
            __result_obj__0 = (_Bool)1;
            come_call_finalizer(map$2char$phsVar$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
    }
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    return (_Bool)0;
    neo_current_frame = fr.prev;
}

_Bool existance_free_objects_on_return(struct sBlock*  current_block  , struct sInfo*  info  , struct sVar*  ret_value  , _Bool top_block)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "existance_free_objects_on_return"; neo_current_frame = &fr;
    struct sVarTable*  it  ;
    if(gComeC) {
        neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    it=info->lv_table;
    if(it==info->come_fun->mBlock->mVarTable) {
        if(existance_free_objects(it,ret_value,info)) {
            neo_current_frame = fr.prev;
            return (_Bool)1;
        }
    }
    else {
        while(it!=info->come_fun->mBlock->mVarTable) {
            if(existance_free_objects(it,ret_value,info)) {
                neo_current_frame = fr.prev;
                return (_Bool)1;
            }
            it=it->mParent;
        }
        if(existance_free_objects(it,ret_value,info)) {
            neo_current_frame = fr.prev;
            return (_Bool)1;
        }
    }
    neo_current_frame = fr.prev;
    return (_Bool)0;
    neo_current_frame = fr.prev;
}

_Bool existance_free_right_value_objects(struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "existance_free_right_value_objects"; neo_current_frame = &fr;
    struct list$1sRightValueObject$ph* right_value_objects;
    struct list$1sRightValueObject$ph* o2_saved;
    struct sRightValueObject*  it  ;
    if(gComeC) {
        neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    right_value_objects=info->right_value_objects;
    for(o2_saved=right_value_objects,it=list$1sRightValueObject$ph_begin(o2_saved);!list$1sRightValueObject$ph_end(o2_saved);it=list$1sRightValueObject$ph_next(o2_saved)){
        if(it&&!it->mFreed) {
            if(string_operator_equals(it->mFunName,info->come_fun->mName)&&it->mBlockLevel==info->block_level) {
                neo_current_frame = fr.prev;
                return (_Bool)1;
            }
        }
    }
    neo_current_frame = fr.prev;
    return (_Bool)0;
    neo_current_frame = fr.prev;
}

