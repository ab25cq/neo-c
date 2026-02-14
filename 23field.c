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

struct ref$1void$ph
{
    void* p;
    _Bool global;
    _Bool heap;
    _Bool local;
    void* stacktop;
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
    _Bool mLoadField;
    _Bool mCastValue;
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

struct sStoreFieldNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sNode* mLeft;
    struct sNode* mRight;
    char*  mName  ;
    _Bool mArrow;
};

struct sLoadFieldNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sNode* mLeft;
    char*  mName  ;
    _Bool mArrow;
};

struct sUnwrapNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sNode* node;
    _Bool check;
    _Bool no_unwrap;
};

struct sStoreArrayNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sNode* mLeft;
    struct sNode* mRight;
    struct list$1sNode$ph* mArrayNum;
    _Bool mQuote;
};

struct sLoadArrayNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct list$1sNode$ph* mArrayNum;
    _Bool mBreakGuard;
    struct sNode* mLeft;
    _Bool mQuote;
};

struct sLoadRangeArrayNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct list$1sNode$ph* mArrayNum;
    struct sNode* mLeft;
    _Bool mQuote;
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
struct sNode* post_position_operator_v19(struct sNode* node, struct sInfo*  info  );
struct tuple3$3char$phsFun$psGenericsFun$p* get_method(const char* fun_name, struct sType*  obj_type  , struct sInfo*  info  );
struct sNode* create_method_call(const char* fun_name, struct sNode* obj, struct list$1tuple2$2char$phsNode$ph$ph* params, struct buffer*  method_block  , int method_block_sline, struct list$1sType$ph* method_generics_types, struct sInfo*  info  , _Bool arrow_);
struct sNode* create_funcall(const char* fun_name, struct list$1tuple2$2char$phsNode$ph$ph* params, struct buffer*  method_block  , int method_block_sline, struct list$1sType$ph* method_generics_types, struct sInfo*  info  , _Bool arrow_);
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
struct sNode* create_null_checker(struct sNode* node, struct sInfo*  info  );
struct sNullChecker* sNullChecker_initialize(struct sNullChecker* self, struct sNode* value, struct sInfo*  info  );
char*  sNullChecker_kind(struct sNullChecker* self);
_Bool sNullChecker_compile(struct sNullChecker* self, struct sInfo*  info  );
struct sNode* create_new_object(struct sType*  type  , struct sInfo*  info  );
static struct sType*  expand_typedef_for_load_element(struct sType*  type  );
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
static int list$1sNode$ph_length(struct list$1sNode$ph* self);
static int list$1sType$ph_length(struct list$1sType$ph* self);
_Bool operator_overload_fun2(struct sType*  type  , const char* fun_name, struct sNode* left_node, struct sNode* middle_node, struct sNode* right_node, struct CVALUE*  left_value  , struct CVALUE*  middle_value  , struct CVALUE*  right_value  , struct sInfo*  info  );
static void tuple3$3char$phsFun$psGenericsFun$p$p_finalize(struct tuple3$3char$phsFun$psGenericsFun$p* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_initialize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void list$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void list_item$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsNode$ph$ph* self);
static void tuple2$2char$phsNode$ph$p_finalize(struct tuple2$2char$phsNode$ph* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_add(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item);
static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_initialize(struct tuple2$2char$phsNode$ph* self, char*  v1  , struct sNode* v2);
struct sType*  get_field_type(struct sClass*  klass  , char*  name  , struct sInfo*  info  );
static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_begin(struct list$1tuple2$2char$phsType$ph$ph* self);
static _Bool list$1tuple2$2char$phsType$ph$ph_end(struct list$1tuple2$2char$phsType$ph$ph* self);
static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_next(struct list$1tuple2$2char$phsType$ph$ph* self);
static void list$1tuple2$2char$phsType$ph$ph$p_finalize(struct list$1tuple2$2char$phsType$ph$ph* self);
static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self);
static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self);
struct sStoreFieldNode* sStoreFieldNode_initialize(struct sStoreFieldNode* self, struct sNode* left, struct sNode* right, char*  name  , struct sInfo*  info  , _Bool arrow_);
char*  sStoreFieldNode_kind(struct sStoreFieldNode* self);
_Bool sStoreFieldNode_compile(struct sStoreFieldNode* self, struct sInfo*  info  );
static void sNodeBase_finalize(struct sNodeBase* self);
static void sStoreFieldNode_finalize(struct sStoreFieldNode* self);
static struct sType*  list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position);
static struct sType*  list$1sType$ph_operator_load_element(struct list$1sType$ph* self, int position);
static void CVALUE_finalize(struct CVALUE*  self  );
static struct sClass*  map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char*  key  );
static void sClass_finalize(struct sClass*  self  );
static struct sClass*  map$2char$phsClass$ph_operator_load_element(struct map$2char$phsClass$ph* self, char*  key  );
static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE*  item  );
struct sLoadFieldNode* sLoadFieldNode_initialize(struct sLoadFieldNode* self, struct sNode* left, char*  name  , struct sInfo*  info  , _Bool arrow_);
char*  sLoadFieldNode_kind(struct sLoadFieldNode* self);
_Bool sLoadFieldNode_compile(struct sLoadFieldNode* self, struct sInfo*  info  );
static void sLoadFieldNode_finalize(struct sLoadFieldNode* self);
static struct list$1sNode$ph* list$1sNode$ph_delete(struct list$1sNode$ph* self, int head, int tail);
static struct list$1sNode$ph* list$1sNode$ph_reset(struct list$1sNode$ph* self);
struct sUnwrapNode* sUnwrapNode_initialize(struct sUnwrapNode* self, struct sNode* node, struct sInfo*  info  , _Bool check, _Bool no_unwrap);
char*  sUnwrapNode_kind(struct sUnwrapNode* self);
_Bool sUnwrapNode_compile(struct sUnwrapNode* self, struct sInfo*  info  );
static void sUnwrapNode_finalize(struct sUnwrapNode* self);
struct sNode* automatically_unwrap(struct sNode* node, struct sInfo*  info  , _Bool check, _Bool no_unwrap);
static struct sUnwrapNode* sUnwrapNode_clone(struct sUnwrapNode* self);
struct sNode* load_field(struct sNode* left, char*  name  , struct sInfo*  info  );
static struct sLoadFieldNode* sLoadFieldNode_clone(struct sLoadFieldNode* self);
struct sStoreArrayNode* sStoreArrayNode_initialize(struct sStoreArrayNode* self, struct sNode* left, struct sNode* right, struct list$1sNode$ph* array_num, _Bool quote, struct sInfo*  info  );
char*  sStoreArrayNode_kind(struct sStoreArrayNode* self);
_Bool sStoreArrayNode_compile(struct sStoreArrayNode* self, struct sInfo*  info  );
static void sStoreArrayNode_finalize(struct sStoreArrayNode* self);
static struct list$1CVALUE$ph* list$1CVALUE$ph_initialize(struct list$1CVALUE$ph* self);
static void list$1CVALUE$ph$p_finalize(struct list$1CVALUE$ph* self);
static void list_item$1CVALUE$ph$p_finalize(struct list_item$1CVALUE$ph* self);
static struct sNode* list$1sNode$ph_begin(struct list$1sNode$ph* self);
static _Bool list$1sNode$ph_end(struct list$1sNode$ph* self);
static struct sNode* list$1sNode$ph_next(struct list$1sNode$ph* self);
static struct sNode* list$1sNode$ph$p_operator_load_element(struct list$1sNode$ph* self, int position);
static struct sNode* list$1sNode$ph_operator_load_element(struct list$1sNode$ph* self, int position);
static struct CVALUE*  list$1CVALUE$ph$p_operator_load_element(struct list$1CVALUE$ph* self, int position);
static struct CVALUE*  list$1CVALUE$ph_operator_load_element(struct list$1CVALUE$ph* self, int position);
static int list$1CVALUE$ph_length(struct list$1CVALUE$ph* self);
static struct CVALUE*  list$1CVALUE$ph_begin(struct list$1CVALUE$ph* self);
static _Bool list$1CVALUE$ph_end(struct list$1CVALUE$ph* self);
static struct CVALUE*  list$1CVALUE$ph_next(struct list$1CVALUE$ph* self);
struct sLoadArrayNode* sLoadArrayNode_initialize(struct sLoadArrayNode* self, struct sNode* left, struct list$1sNode$ph* array_num, _Bool quote, _Bool break_guard, struct sInfo*  info  );
char*  sLoadArrayNode_kind(struct sLoadArrayNode* self);
_Bool sLoadArrayNode_compile(struct sLoadArrayNode* self, struct sInfo*  info  );
static void sLoadArrayNode_finalize(struct sLoadArrayNode* self);
struct sLoadRangeArrayNode* sLoadRangeArrayNode_initialize(struct sLoadRangeArrayNode* self, struct sNode* left, struct list$1sNode$ph* array_num, _Bool quote, struct sInfo*  info  );
char*  sLoadRangeArrayNode_kind(struct sLoadRangeArrayNode* self);
_Bool sLoadRangeArrayNode_compile(struct sLoadRangeArrayNode* self, struct sInfo*  info  );
static void sLoadRangeArrayNode_finalize(struct sLoadRangeArrayNode* self);
struct sNode* parse_method_call_v18(struct sNode* obj, char*  fun_name  , struct sInfo*  info  , _Bool arrow_);
struct sNode* store_field(struct sNode* left, struct sNode* right, char*  name  , struct sInfo*  info  );
static struct sStoreFieldNode* sStoreFieldNode_clone(struct sStoreFieldNode* self);
struct sNode* post_position_operator_v99(struct sNode* node, struct sInfo*  info  );
static struct list$1sNode$ph* list$1sNode$ph_push_back(struct list$1sNode$ph* self, struct sNode* item);
static struct sLoadRangeArrayNode* sLoadRangeArrayNode_clone(struct sLoadRangeArrayNode* self);
static struct sStoreArrayNode* sStoreArrayNode_clone(struct sStoreArrayNode* self);
static struct sLoadArrayNode* sLoadArrayNode_clone(struct sLoadArrayNode* self);
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
static struct sType*  expand_typedef_for_load_element(struct sType*  type  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "expand_typedef_for_load_element"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sType*  result  ;
    int guard;
    struct sType*  orig  ;
    int ptr;
    int array_ptr;
    struct list$1sNode$ph* __dec_obj34;
    char*  __dec_obj35  ;
    char*  __dec_obj36  ;
    char*  __dec_obj37  ;
    struct list$1sType$ph* __dec_obj38;
    struct sType*  __dec_obj39  ;
    struct sType*  __dec_obj40  ;
    struct sType*  __dec_obj41  ;
    struct sType*  __result_obj__0  ;
    result=(struct sType* )come_increment_ref_count(sType_clone(type));
    guard=0;
    while(((struct sType* )come_null_checker(result, "23field.nc", 8))->mTypedefOriginalType&&guard<16) {
        orig=(struct sType* )come_increment_ref_count(sType_clone(((struct sType* )come_null_checker(result, "23field.nc", 9))->mTypedefOriginalType));
        ptr=((struct sType* )come_null_checker(result, "23field.nc", 11))->mPointerNum;
        if(ptr==0&&((struct sType* )come_null_checker(orig, "23field.nc", 12))->mPointerNum>0) {
            ptr=((struct sType* )come_null_checker(orig, "23field.nc", 13))->mPointerNum;
        }
        ((struct sType* )come_null_checker(orig, "23field.nc", 15))->mPointerNum=ptr;
        array_ptr=((struct sType* )come_null_checker(result, "23field.nc", 17))->mArrayPointerNum;
        if(array_ptr==0&&((struct sType* )come_null_checker(orig, "23field.nc", 18))->mArrayPointerNum>0) {
            array_ptr=((struct sType* )come_null_checker(orig, "23field.nc", 19))->mArrayPointerNum;
        }
        ((struct sType* )come_null_checker(orig, "23field.nc", 21))->mArrayPointerNum=array_ptr;
        if(((struct sType* )come_null_checker(result, "23field.nc", 23))->mArrayPointerType) {
            ((struct sType* )come_null_checker(orig, "23field.nc", 24))->mArrayPointerType=(_Bool)1;
        }
        if(list$1sNode$ph_length(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker(result, "23field.nc", 26))->mArrayNum, "23field.nc", 26)))>0) {
            __dec_obj34=((struct sType* )come_null_checker(orig, "23field.nc", 27))->mArrayNum,
            ((struct sType* )come_null_checker(orig, "23field.nc", 27))->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(((struct sType* )come_null_checker(result, "23field.nc", 27))->mArrayNum));
            come_call_finalizer(list$1sNode$ph_finalize, __dec_obj34,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        ((struct sType* )come_null_checker(orig, "23field.nc", 30))->mConstant=((struct sType* )come_null_checker(result, "23field.nc", 30))->mConstant;
        ((struct sType* )come_null_checker(orig, "23field.nc", 31))->mVolatile=((struct sType* )come_null_checker(result, "23field.nc", 31))->mVolatile;
        ((struct sType* )come_null_checker(orig, "23field.nc", 32))->mRestrict=((struct sType* )come_null_checker(result, "23field.nc", 32))->mRestrict;
        ((struct sType* )come_null_checker(orig, "23field.nc", 33))->mUnsigned=((struct sType* )come_null_checker(result, "23field.nc", 33))->mUnsigned;
        ((struct sType* )come_null_checker(orig, "23field.nc", 34))->mShort=((struct sType* )come_null_checker(result, "23field.nc", 34))->mShort;
        ((struct sType* )come_null_checker(orig, "23field.nc", 35))->mLong=((struct sType* )come_null_checker(result, "23field.nc", 35))->mLong;
        ((struct sType* )come_null_checker(orig, "23field.nc", 36))->mLongLong=((struct sType* )come_null_checker(result, "23field.nc", 36))->mLongLong;
        ((struct sType* )come_null_checker(orig, "23field.nc", 37))->mComplex=((struct sType* )come_null_checker(result, "23field.nc", 37))->mComplex;
        ((struct sType* )come_null_checker(orig, "23field.nc", 38))->mAtomic=((struct sType* )come_null_checker(result, "23field.nc", 38))->mAtomic;
        __dec_obj35=((struct sType* )come_null_checker(orig, "23field.nc", 40))->mPointerAttribute,
        ((struct sType* )come_null_checker(orig, "23field.nc", 40))->mPointerAttribute=(char* )come_increment_ref_count(((struct sType* )come_null_checker(result, "23field.nc", 40))->mPointerAttribute);
        __dec_obj35 = come_decrement_ref_count(__dec_obj35, (void*)0, (void*)0, 0,0, (void*)0);
        __dec_obj36=((struct sType* )come_null_checker(orig, "23field.nc", 41))->mAttribute,
        ((struct sType* )come_null_checker(orig, "23field.nc", 41))->mAttribute=(char* )come_increment_ref_count(((struct sType* )come_null_checker(result, "23field.nc", 41))->mAttribute);
        __dec_obj36 = come_decrement_ref_count(__dec_obj36, (void*)0, (void*)0, 0,0, (void*)0);
        __dec_obj37=((struct sType* )come_null_checker(orig, "23field.nc", 42))->mVarAttribute,
        ((struct sType* )come_null_checker(orig, "23field.nc", 42))->mVarAttribute=(char* )come_increment_ref_count(((struct sType* )come_null_checker(result, "23field.nc", 42))->mVarAttribute);
        __dec_obj37 = come_decrement_ref_count(__dec_obj37, (void*)0, (void*)0, 0,0, (void*)0);
        if(list$1sType$ph_length(((struct list$1sType$ph*)come_null_checker(((struct sType* )come_null_checker(result, "23field.nc", 44))->mGenericsTypes, "23field.nc", 44)))>0) {
            __dec_obj38=((struct sType* )come_null_checker(orig, "23field.nc", 45))->mGenericsTypes,
            ((struct sType* )come_null_checker(orig, "23field.nc", 45))->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(((struct sType* )come_null_checker(result, "23field.nc", 45))->mGenericsTypes));
            come_call_finalizer(list$1sType$ph_finalize, __dec_obj38,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(((struct sType* )come_null_checker(result, "23field.nc", 47))->mNoSolvedGenericsType) {
            __dec_obj39=((struct sType* )come_null_checker(orig, "23field.nc", 48))->mNoSolvedGenericsType,
            ((struct sType* )come_null_checker(orig, "23field.nc", 48))->mNoSolvedGenericsType=(struct sType* )come_increment_ref_count(sType_clone(((struct sType* )come_null_checker(result, "23field.nc", 48))->mNoSolvedGenericsType));
            come_call_finalizer(sType_finalize, __dec_obj39,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(((struct sType* )come_null_checker(result, "23field.nc", 50))->mOriginalLoadVarType) {
            __dec_obj40=((struct sType* )come_null_checker(orig, "23field.nc", 51))->mOriginalLoadVarType,
            ((struct sType* )come_null_checker(orig, "23field.nc", 51))->mOriginalLoadVarType=(struct sType* )come_increment_ref_count(sType_clone(((struct sType* )come_null_checker(result, "23field.nc", 51))->mOriginalLoadVarType));
            come_call_finalizer(sType_finalize, __dec_obj40,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        __dec_obj41=result,
        result=(struct sType* )come_increment_ref_count(sType_clone(orig));
        come_call_finalizer(sType_finalize, __dec_obj41,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        guard++;
        come_call_finalizer(sType_finalize, orig, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 5, "struct sType* "));
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 6))->mClass=((struct sType* )come_null_checker(self, "sType_clone", 6))->mClass;
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 7))->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj1=((struct sType* )come_null_checker(result, "sType_clone", 7))->mOriginalLoadVarType,
        ((struct sType* )come_null_checker(result, "sType_clone", 7))->mOriginalLoadVarType=(struct sType* )come_increment_ref_count(sType_clone(((struct sType* )come_null_checker(self, "sType_clone", 7))->mOriginalLoadVarType));
        come_call_finalizer(sType_finalize, __dec_obj1,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 8))->mChannelType!=((void*)0)) {
        __dec_obj2=((struct sType* )come_null_checker(result, "sType_clone", 8))->mChannelType,
        ((struct sType* )come_null_checker(result, "sType_clone", 8))->mChannelType=(struct sType* )come_increment_ref_count(sType_clone(((struct sType* )come_null_checker(self, "sType_clone", 8))->mChannelType));
        come_call_finalizer(sType_finalize, __dec_obj2,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 9))->mGenericsTypes!=((void*)0)) {
        __dec_obj6=((struct sType* )come_null_checker(result, "sType_clone", 9))->mGenericsTypes,
        ((struct sType* )come_null_checker(result, "sType_clone", 9))->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(((struct sType* )come_null_checker(self, "sType_clone", 9))->mGenericsTypes));
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj6,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 10))->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj7=((struct sType* )come_null_checker(result, "sType_clone", 10))->mNoSolvedGenericsType,
        ((struct sType* )come_null_checker(result, "sType_clone", 10))->mNoSolvedGenericsType=(struct sType* )come_increment_ref_count(sType_clone(((struct sType* )come_null_checker(self, "sType_clone", 10))->mNoSolvedGenericsType));
        come_call_finalizer(sType_finalize, __dec_obj7,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 11))->mSizeNum!=((void*)0)) {
        __dec_obj8=((struct sType* )come_null_checker(result, "sType_clone", 11))->mSizeNum,
        ((struct sType* )come_null_checker(result, "sType_clone", 11))->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(((struct sType* )come_null_checker(self, "sType_clone", 11))->mSizeNum));
        (__dec_obj8 ? __dec_obj8 = come_decrement_ref_count(__dec_obj8, ((struct sNode*)__dec_obj8)->finalize, ((struct sNode*)__dec_obj8)->_protocol_obj, 0,0, (void*)0) :0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 12))->mAlignas!=((void*)0)) {
        __dec_obj9=((struct sType* )come_null_checker(result, "sType_clone", 12))->mAlignas,
        ((struct sType* )come_null_checker(result, "sType_clone", 12))->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(((struct sType* )come_null_checker(self, "sType_clone", 12))->mAlignas));
        (__dec_obj9 ? __dec_obj9 = come_decrement_ref_count(__dec_obj9, ((struct sNode*)__dec_obj9)->finalize, ((struct sNode*)__dec_obj9)->_protocol_obj, 0,0, (void*)0) :0);
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 13))->mAlignasDouble=((struct sType* )come_null_checker(self, "sType_clone", 13))->mAlignasDouble;
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 14))->mTupleName!=((void*)0)) {
        __dec_obj10=((struct sType* )come_null_checker(result, "sType_clone", 14))->mTupleName,
        ((struct sType* )come_null_checker(result, "sType_clone", 14))->mTupleName=(char* )come_increment_ref_count((char* )come_memdup(((struct sType* )come_null_checker(self, "sType_clone", 14))->mTupleName, "sType_clone", 14, "char* "));
        __dec_obj10 = come_decrement_ref_count(__dec_obj10, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 15))->mAttribute!=((void*)0)) {
        __dec_obj11=((struct sType* )come_null_checker(result, "sType_clone", 15))->mAttribute,
        ((struct sType* )come_null_checker(result, "sType_clone", 15))->mAttribute=(char* )come_increment_ref_count((char* )come_memdup(((struct sType* )come_null_checker(self, "sType_clone", 15))->mAttribute, "sType_clone", 15, "char* "));
        __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 16))->mVarAttribute!=((void*)0)) {
        __dec_obj12=((struct sType* )come_null_checker(result, "sType_clone", 16))->mVarAttribute,
        ((struct sType* )come_null_checker(result, "sType_clone", 16))->mVarAttribute=(char* )come_increment_ref_count((char* )come_memdup(((struct sType* )come_null_checker(self, "sType_clone", 16))->mVarAttribute, "sType_clone", 16, "char* "));
        __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 17))->mMiddleAttribute!=((void*)0)) {
        __dec_obj13=((struct sType* )come_null_checker(result, "sType_clone", 17))->mMiddleAttribute,
        ((struct sType* )come_null_checker(result, "sType_clone", 17))->mMiddleAttribute=(char* )come_increment_ref_count((char* )come_memdup(((struct sType* )come_null_checker(self, "sType_clone", 17))->mMiddleAttribute, "sType_clone", 17, "char* "));
        __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 18))->mPointerAttribute!=((void*)0)) {
        __dec_obj14=((struct sType* )come_null_checker(result, "sType_clone", 18))->mPointerAttribute,
        ((struct sType* )come_null_checker(result, "sType_clone", 18))->mPointerAttribute=(char* )come_increment_ref_count((char* )come_memdup(((struct sType* )come_null_checker(self, "sType_clone", 18))->mPointerAttribute, "sType_clone", 18, "char* "));
        __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 19))->mAllocaValue=((struct sType* )come_null_checker(self, "sType_clone", 19))->mAllocaValue;
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 20))->mUnsigned=((struct sType* )come_null_checker(self, "sType_clone", 20))->mUnsigned;
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 21))->mShort=((struct sType* )come_null_checker(self, "sType_clone", 21))->mShort;
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 22))->mLong=((struct sType* )come_null_checker(self, "sType_clone", 22))->mLong;
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 23))->mLongLong=((struct sType* )come_null_checker(self, "sType_clone", 23))->mLongLong;
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 24))->mConstant=((struct sType* )come_null_checker(self, "sType_clone", 24))->mConstant;
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 25))->mAtomic=((struct sType* )come_null_checker(self, "sType_clone", 25))->mAtomic;
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 26))->mThreadLocal=((struct sType* )come_null_checker(self, "sType_clone", 26))->mThreadLocal;
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 27))->mNorecord=((struct sType* )come_null_checker(self, "sType_clone", 27))->mNorecord;
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 28))->mThread=((struct sType* )come_null_checker(self, "sType_clone", 28))->mThread;
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 29))->mComplex=((struct sType* )come_null_checker(self, "sType_clone", 29))->mComplex;
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 30))->mRegister=((struct sType* )come_null_checker(self, "sType_clone", 30))->mRegister;
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 31))->mVolatile=((struct sType* )come_null_checker(self, "sType_clone", 31))->mVolatile;
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 32))->mNoreturn=((struct sType* )come_null_checker(self, "sType_clone", 32))->mNoreturn;
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 33))->mStatic=((struct sType* )come_null_checker(self, "sType_clone", 33))->mStatic;
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 34))->mUniq=((struct sType* )come_null_checker(self, "sType_clone", 34))->mUniq;
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 35))->mExtern=((struct sType* )come_null_checker(self, "sType_clone", 35))->mExtern;
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 36))->mRestrict=((struct sType* )come_null_checker(self, "sType_clone", 36))->mRestrict;
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 37))->mHeap=((struct sType* )come_null_checker(self, "sType_clone", 37))->mHeap;
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 38))->mChannel=((struct sType* )come_null_checker(self, "sType_clone", 38))->mChannel;
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 39))->mDefferRightValue=((struct sType* )come_null_checker(self, "sType_clone", 39))->mDefferRightValue;
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 40))->mNoHeap=((struct sType* )come_null_checker(self, "sType_clone", 40))->mNoHeap;
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 41))->mRefference=((struct sType* )come_null_checker(self, "sType_clone", 41))->mRefference;
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 42))->mSlice=((struct sType* )come_null_checker(self, "sType_clone", 42))->mSlice;
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 43))->mOptional=((struct sType* )come_null_checker(self, "sType_clone", 43))->mOptional;
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 44))->mNoCallingDestructor=((struct sType* )come_null_checker(self, "sType_clone", 44))->mNoCallingDestructor;
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 45))->mTypeName=((struct sType* )come_null_checker(self, "sType_clone", 45))->mTypeName;
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 46))->mAnonymous=((struct sType* )come_null_checker(self, "sType_clone", 46))->mAnonymous;
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 47))->mAnonymousName!=((void*)0)) {
        __dec_obj15=((struct sType* )come_null_checker(result, "sType_clone", 47))->mAnonymousName,
        ((struct sType* )come_null_checker(result, "sType_clone", 47))->mAnonymousName=(char* )come_increment_ref_count((char* )come_memdup(((struct sType* )come_null_checker(self, "sType_clone", 47))->mAnonymousName, "sType_clone", 47, "char* "));
        __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 48))->mInnerStruct=((struct sType* )come_null_checker(self, "sType_clone", 48))->mInnerStruct;
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 49))->mInnerStructName!=((void*)0)) {
        __dec_obj16=((struct sType* )come_null_checker(result, "sType_clone", 49))->mInnerStructName,
        ((struct sType* )come_null_checker(result, "sType_clone", 49))->mInnerStructName=(char* )come_increment_ref_count((char* )come_memdup(((struct sType* )come_null_checker(self, "sType_clone", 49))->mInnerStructName, "sType_clone", 49, "char* "));
        __dec_obj16 = come_decrement_ref_count(__dec_obj16, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 50))->mAnonymousVarName=((struct sType* )come_null_checker(self, "sType_clone", 50))->mAnonymousVarName;
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 51))->mInline=((struct sType* )come_null_checker(self, "sType_clone", 51))->mInline;
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 52))->mAsmName!=((void*)0)) {
        __dec_obj17=((struct sType* )come_null_checker(result, "sType_clone", 52))->mAsmName,
        ((struct sType* )come_null_checker(result, "sType_clone", 52))->mAsmName=(char* )come_increment_ref_count((char* )come_memdup(((struct sType* )come_null_checker(self, "sType_clone", 52))->mAsmName, "sType_clone", 52, "char* "));
        __dec_obj17 = come_decrement_ref_count(__dec_obj17, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 53))->mTypedef=((struct sType* )come_null_checker(self, "sType_clone", 53))->mTypedef;
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 54))->mMultipleTypes=((struct sType* )come_null_checker(self, "sType_clone", 54))->mMultipleTypes;
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 55))->mArrayNum!=((void*)0)) {
        __dec_obj21=((struct sType* )come_null_checker(result, "sType_clone", 55))->mArrayNum,
        ((struct sType* )come_null_checker(result, "sType_clone", 55))->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(((struct sType* )come_null_checker(self, "sType_clone", 55))->mArrayNum));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj21,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 56))->mVarNameArrayNum!=((void*)0)) {
        __dec_obj22=((struct sType* )come_null_checker(result, "sType_clone", 56))->mVarNameArrayNum,
        ((struct sType* )come_null_checker(result, "sType_clone", 56))->mVarNameArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(((struct sType* )come_null_checker(self, "sType_clone", 56))->mVarNameArrayNum));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj22,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 57))->mArrayStatic!=((void*)0)) {
        __dec_obj23=((struct sType* )come_null_checker(result, "sType_clone", 57))->mArrayStatic,
        ((struct sType* )come_null_checker(result, "sType_clone", 57))->mArrayStatic=(struct list$1int$*)come_increment_ref_count(list$1int$$p_clone(((struct sType* )come_null_checker(self, "sType_clone", 57))->mArrayStatic));
        come_call_finalizer(list$1int$_finalize, __dec_obj23,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 58))->mArrayRestrict!=((void*)0)) {
        __dec_obj24=((struct sType* )come_null_checker(result, "sType_clone", 58))->mArrayRestrict,
        ((struct sType* )come_null_checker(result, "sType_clone", 58))->mArrayRestrict=(struct list$1int$*)come_increment_ref_count(list$1int$$p_clone(((struct sType* )come_null_checker(self, "sType_clone", 58))->mArrayRestrict));
        come_call_finalizer(list$1int$_finalize, __dec_obj24,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 59))->mPointerNum=((struct sType* )come_null_checker(self, "sType_clone", 59))->mPointerNum;
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 60))->mFunctionPointerNum=((struct sType* )come_null_checker(self, "sType_clone", 60))->mFunctionPointerNum;
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 61))->mArrayPointerNum=((struct sType* )come_null_checker(self, "sType_clone", 61))->mArrayPointerNum;
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 62))->mPointerParen=((struct sType* )come_null_checker(self, "sType_clone", 62))->mPointerParen;
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 63))->mMinusPointerNum=((struct sType* )come_null_checker(self, "sType_clone", 63))->mMinusPointerNum;
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 64))->mTypedefOriginalType!=((void*)0)) {
        __dec_obj25=((struct sType* )come_null_checker(result, "sType_clone", 64))->mTypedefOriginalType,
        ((struct sType* )come_null_checker(result, "sType_clone", 64))->mTypedefOriginalType=(struct sType* )come_increment_ref_count(sType_clone(((struct sType* )come_null_checker(self, "sType_clone", 64))->mTypedefOriginalType));
        come_call_finalizer(sType_finalize, __dec_obj25,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 65))->mOriginalTypeName!=((void*)0)) {
        __dec_obj26=((struct sType* )come_null_checker(result, "sType_clone", 65))->mOriginalTypeName,
        ((struct sType* )come_null_checker(result, "sType_clone", 65))->mOriginalTypeName=(char* )come_increment_ref_count((char* )come_memdup(((struct sType* )come_null_checker(self, "sType_clone", 65))->mOriginalTypeName, "sType_clone", 65, "char* "));
        __dec_obj26 = come_decrement_ref_count(__dec_obj26, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 66))->mOriginalTypePointerNum=((struct sType* )come_null_checker(self, "sType_clone", 66))->mOriginalTypePointerNum;
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 67))->mOriginalTypePointerHeap=((struct sType* )come_null_checker(self, "sType_clone", 67))->mOriginalTypePointerHeap;
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 68))->mArrayPointerType=((struct sType* )come_null_checker(self, "sType_clone", 68))->mArrayPointerType;
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 69))->mParamTypes!=((void*)0)) {
        __dec_obj27=((struct sType* )come_null_checker(result, "sType_clone", 69))->mParamTypes,
        ((struct sType* )come_null_checker(result, "sType_clone", 69))->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(((struct sType* )come_null_checker(self, "sType_clone", 69))->mParamTypes));
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj27,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 70))->mParamNames!=((void*)0)) {
        __dec_obj31=((struct sType* )come_null_checker(result, "sType_clone", 70))->mParamNames,
        ((struct sType* )come_null_checker(result, "sType_clone", 70))->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(((struct sType* )come_null_checker(self, "sType_clone", 70))->mParamNames));
        come_call_finalizer(list$1char$ph_finalize, __dec_obj31,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 71))->mResultType!=((void*)0)) {
        __dec_obj32=((struct sType* )come_null_checker(result, "sType_clone", 71))->mResultType,
        ((struct sType* )come_null_checker(result, "sType_clone", 71))->mResultType=(struct sType* )come_increment_ref_count(sType_clone(((struct sType* )come_null_checker(self, "sType_clone", 71))->mResultType));
        come_call_finalizer(sType_finalize, __dec_obj32,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 72))->mVarArgs=((struct sType* )come_null_checker(self, "sType_clone", 72))->mVarArgs;
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 73))->mTypeOfNode!=((void*)0)) {
        __dec_obj33=((struct sType* )come_null_checker(result, "sType_clone", 73))->mTypeOfNode,
        ((struct sType* )come_null_checker(result, "sType_clone", 73))->mTypeOfNode=(struct sNode*)come_increment_ref_count(sNode_clone(((struct sType* )come_null_checker(self, "sType_clone", 73))->mTypeOfNode));
        (__dec_obj33 ? __dec_obj33 = come_decrement_ref_count(__dec_obj33, ((struct sNode*)__dec_obj33)->finalize, ((struct sNode*)__dec_obj33)->_protocol_obj, 0,0, (void*)0) :0);
    }
    __result_obj__0 = result;
    come_call_finalizer(sType_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sType_finalize(struct sType*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sType_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_finalize", 2))->mOriginalLoadVarType!=((void*)0)) {
        come_call_finalizer(sType_finalize, ((struct sType* )come_null_checker(self, "sType_finalize", 2))->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_finalize", 3))->mChannelType!=((void*)0)) {
        come_call_finalizer(sType_finalize, ((struct sType* )come_null_checker(self, "sType_finalize", 3))->mChannelType, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_finalize", 4))->mGenericsTypes!=((void*)0)) {
        come_call_finalizer(list$1sType$ph$p_finalize, ((struct sType* )come_null_checker(self, "sType_finalize", 4))->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_finalize", 5))->mNoSolvedGenericsType!=((void*)0)) {
        come_call_finalizer(sType_finalize, ((struct sType* )come_null_checker(self, "sType_finalize", 5))->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_finalize", 6))->mSizeNum!=((void*)0)) {
        ((((struct sType* )come_null_checker(self, "sType_finalize", 6))->mSizeNum) ? ((struct sType* )come_null_checker(self, "sType_finalize", 6))->mSizeNum = come_decrement_ref_count(((struct sType* )come_null_checker(self, "sType_finalize", 6))->mSizeNum, ((struct sNode*)((struct sType* )come_null_checker(self, "sType_finalize", 6))->mSizeNum)->finalize, ((struct sNode*)((struct sType* )come_null_checker(self, "sType_finalize", 6))->mSizeNum)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_finalize", 7))->mAlignas!=((void*)0)) {
        ((((struct sType* )come_null_checker(self, "sType_finalize", 7))->mAlignas) ? ((struct sType* )come_null_checker(self, "sType_finalize", 7))->mAlignas = come_decrement_ref_count(((struct sType* )come_null_checker(self, "sType_finalize", 7))->mAlignas, ((struct sNode*)((struct sType* )come_null_checker(self, "sType_finalize", 7))->mAlignas)->finalize, ((struct sNode*)((struct sType* )come_null_checker(self, "sType_finalize", 7))->mAlignas)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_finalize", 8))->mTupleName!=((void*)0)) {
        (((struct sType* )come_null_checker(self, "sType_finalize", 8))->mTupleName = come_decrement_ref_count(((struct sType* )come_null_checker(self, "sType_finalize", 8))->mTupleName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_finalize", 9))->mAttribute!=((void*)0)) {
        (((struct sType* )come_null_checker(self, "sType_finalize", 9))->mAttribute = come_decrement_ref_count(((struct sType* )come_null_checker(self, "sType_finalize", 9))->mAttribute, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_finalize", 10))->mVarAttribute!=((void*)0)) {
        (((struct sType* )come_null_checker(self, "sType_finalize", 10))->mVarAttribute = come_decrement_ref_count(((struct sType* )come_null_checker(self, "sType_finalize", 10))->mVarAttribute, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_finalize", 11))->mMiddleAttribute!=((void*)0)) {
        (((struct sType* )come_null_checker(self, "sType_finalize", 11))->mMiddleAttribute = come_decrement_ref_count(((struct sType* )come_null_checker(self, "sType_finalize", 11))->mMiddleAttribute, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_finalize", 12))->mPointerAttribute!=((void*)0)) {
        (((struct sType* )come_null_checker(self, "sType_finalize", 12))->mPointerAttribute = come_decrement_ref_count(((struct sType* )come_null_checker(self, "sType_finalize", 12))->mPointerAttribute, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_finalize", 13))->mAnonymousName!=((void*)0)) {
        (((struct sType* )come_null_checker(self, "sType_finalize", 13))->mAnonymousName = come_decrement_ref_count(((struct sType* )come_null_checker(self, "sType_finalize", 13))->mAnonymousName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_finalize", 14))->mInnerStructName!=((void*)0)) {
        (((struct sType* )come_null_checker(self, "sType_finalize", 14))->mInnerStructName = come_decrement_ref_count(((struct sType* )come_null_checker(self, "sType_finalize", 14))->mInnerStructName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_finalize", 15))->mAsmName!=((void*)0)) {
        (((struct sType* )come_null_checker(self, "sType_finalize", 15))->mAsmName = come_decrement_ref_count(((struct sType* )come_null_checker(self, "sType_finalize", 15))->mAsmName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_finalize", 16))->mArrayNum!=((void*)0)) {
        come_call_finalizer(list$1sNode$ph$p_finalize, ((struct sType* )come_null_checker(self, "sType_finalize", 16))->mArrayNum, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_finalize", 17))->mVarNameArrayNum!=((void*)0)) {
        come_call_finalizer(list$1sNode$ph$p_finalize, ((struct sType* )come_null_checker(self, "sType_finalize", 17))->mVarNameArrayNum, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_finalize", 18))->mArrayStatic!=((void*)0)) {
        come_call_finalizer(list$1int$$p_finalize, ((struct sType* )come_null_checker(self, "sType_finalize", 18))->mArrayStatic, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_finalize", 19))->mArrayRestrict!=((void*)0)) {
        come_call_finalizer(list$1int$$p_finalize, ((struct sType* )come_null_checker(self, "sType_finalize", 19))->mArrayRestrict, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_finalize", 20))->mTypedefOriginalType!=((void*)0)) {
        come_call_finalizer(sType_finalize, ((struct sType* )come_null_checker(self, "sType_finalize", 20))->mTypedefOriginalType, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_finalize", 21))->mOriginalTypeName!=((void*)0)) {
        (((struct sType* )come_null_checker(self, "sType_finalize", 21))->mOriginalTypeName = come_decrement_ref_count(((struct sType* )come_null_checker(self, "sType_finalize", 21))->mOriginalTypeName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_finalize", 22))->mParamTypes!=((void*)0)) {
        come_call_finalizer(list$1sType$ph$p_finalize, ((struct sType* )come_null_checker(self, "sType_finalize", 22))->mParamTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_finalize", 23))->mParamNames!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, ((struct sType* )come_null_checker(self, "sType_finalize", 23))->mParamNames, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_finalize", 24))->mResultType!=((void*)0)) {
        come_call_finalizer(sType_finalize, ((struct sType* )come_null_checker(self, "sType_finalize", 24))->mResultType, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_finalize", 25))->mTypeOfNode!=((void*)0)) {
        ((((struct sType* )come_null_checker(self, "sType_finalize", 25))->mTypeOfNode) ? ((struct sType* )come_null_checker(self, "sType_finalize", 25))->mTypeOfNode = come_decrement_ref_count(((struct sType* )come_null_checker(self, "sType_finalize", 25))->mTypeOfNode, ((struct sNode*)((struct sType* )come_null_checker(self, "sType_finalize", 25))->mTypeOfNode)->finalize, ((struct sNode*)((struct sType* )come_null_checker(self, "sType_finalize", 25))->mTypeOfNode)->_protocol_obj, 0, 0,(void*)0):(void*)0);
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
    it=((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1652))->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=((struct list_item$1sType$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1655))->next;
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1sType$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct list_item$1sType$ph*)come_null_checker(self, "list_item$1sType$ph$p_finalize", 2))->item!=((void*)0)) {
        come_call_finalizer(sType_finalize, ((struct list_item$1sType$ph*)come_null_checker(self, "list_item$1sType$ph$p_finalize", 2))->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
    it=((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1652))->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=((struct list_item$1sNode$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1655))->next;
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1sNode$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct list_item$1sNode$ph*)come_null_checker(self, "list_item$1sNode$ph$p_finalize", 2))->item!=((void*)0)) {
        ((((struct list_item$1sNode$ph*)come_null_checker(self, "list_item$1sNode$ph$p_finalize", 2))->item) ? ((struct list_item$1sNode$ph*)come_null_checker(self, "list_item$1sNode$ph$p_finalize", 2))->item = come_decrement_ref_count(((struct list_item$1sNode$ph*)come_null_checker(self, "list_item$1sNode$ph$p_finalize", 2))->item, ((struct sNode*)((struct list_item$1sNode$ph*)come_null_checker(self, "list_item$1sNode$ph$p_finalize", 2))->item)->finalize, ((struct sNode*)((struct list_item$1sNode$ph*)come_null_checker(self, "list_item$1sNode$ph$p_finalize", 2))->item)->_protocol_obj, 0, 0,(void*)0):(void*)0);
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
    it=((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1652))->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=((struct list_item$1int$*)come_null_checker(it, "/usr/local/include/neo-c.h", 1655))->next;
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
    it=((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1652))->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=((struct list_item$1char$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1655))->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1char$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct list_item$1char$ph*)come_null_checker(self, "list_item$1char$ph$p_finalize", 2))->item!=((void*)0)) {
        (((struct list_item$1char$ph*)come_null_checker(self, "list_item$1char$ph$p_finalize", 2))->item = come_decrement_ref_count(((struct list_item$1char$ph*)come_null_checker(self, "list_item$1char$ph$p_finalize", 2))->item, (void*)0, (void*)0, 0, 0, (void*)0));
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
        __result_obj__0 = (struct list$1sType$ph*)come_increment_ref_count(((void*)0));
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    result=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count(((struct list$1sType$ph*)come_null_checker(((struct list$1sType$ph*)(__right_value0=(struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), (void*)0, 1663, "struct list$1sType$ph*"))), "/usr/local/include/neo-c.h", 1663)))));
    come_call_finalizer(list$1sType$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    it=((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1665))->head;
    while(it!=((void*)0)) {
        if(1) {
            list$1sType$ph_add(((struct list$1sType$ph*)come_null_checker(result, "/usr/local/include/neo-c.h", 1668)),(struct sType* )come_increment_ref_count(sType_clone(((struct list_item$1sType$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1668))->item)));
        }
        else {
            list$1sType$ph_add(((struct list$1sType$ph*)come_null_checker(result, "/usr/local/include/neo-c.h", 1671)),(struct sType* )come_increment_ref_count(sType_clone(((struct list_item$1sType$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1671))->item)));
        }
        it=((struct list_item$1sType$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1674))->next;
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
    ((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1631))->head=((void*)0);
    ((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1632))->tail=((void*)0);
    ((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1633))->len=0;
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
    struct sType*  __dec_obj3  ;
    struct list_item$1sType$ph* litem_0;
    struct sType*  __dec_obj4  ;
    struct list_item$1sType$ph* litem_1;
    struct sType*  __dec_obj5  ;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1683))->len==0) {
        litem=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), (void*)0, 1684, "struct list_item$1sType$ph*"))));
        ((struct list_item$1sType$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1686))->prev=((void*)0);
        ((struct list_item$1sType$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1687))->next=((void*)0);
        __dec_obj3=((struct list_item$1sType$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1688))->item,
        ((struct list_item$1sType$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1688))->item=(struct sType* )come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj3,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1690))->tail=litem;
        ((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1691))->head=litem;
    }
    else if(((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1693))->len==1) {
        litem_0=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), (void*)0, 1694, "struct list_item$1sType$ph*"))));
        ((struct list_item$1sType$ph*)come_null_checker(litem_0, "/usr/local/include/neo-c.h", 1696))->prev=((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1696))->head;
        ((struct list_item$1sType$ph*)come_null_checker(litem_0, "/usr/local/include/neo-c.h", 1697))->next=((void*)0);
        __dec_obj4=((struct list_item$1sType$ph*)come_null_checker(litem_0, "/usr/local/include/neo-c.h", 1698))->item,
        ((struct list_item$1sType$ph*)come_null_checker(litem_0, "/usr/local/include/neo-c.h", 1698))->item=(struct sType* )come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj4,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1700))->tail=litem_0;
        ((struct list_item$1sType$ph*)come_null_checker(((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1701))->head, "/usr/local/include/neo-c.h", 1701))->next=litem_0;
    }
    else {
        litem_1=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), (void*)0, 1704, "struct list_item$1sType$ph*"))));
        ((struct list_item$1sType$ph*)come_null_checker(litem_1, "/usr/local/include/neo-c.h", 1706))->prev=((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1706))->tail;
        ((struct list_item$1sType$ph*)come_null_checker(litem_1, "/usr/local/include/neo-c.h", 1707))->next=((void*)0);
        __dec_obj5=((struct list_item$1sType$ph*)come_null_checker(litem_1, "/usr/local/include/neo-c.h", 1708))->item,
        ((struct list_item$1sType$ph*)come_null_checker(litem_1, "/usr/local/include/neo-c.h", 1708))->item=(struct sType* )come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj5,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((struct list_item$1sType$ph*)come_null_checker(((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1710))->tail, "/usr/local/include/neo-c.h", 1710))->next=litem_1;
        ((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1711))->tail=litem_1;
    }
    ((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1714))->len++;
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
    it=((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1652))->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=((struct list_item$1sType$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1655))->next;
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
    result=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), (void*)0, 5, "struct sNode*"));
    if(self!=((void*)0)&&((struct sNode*)come_null_checker(self, "sNode_clone", 6))->clone!=((void*)0)) {
        ((struct sNode*)come_null_checker(result, "sNode_clone", 6))->_protocol_obj=((struct sNode*)come_null_checker(self, "sNode_clone", 6))->clone(((struct sNode*)come_null_checker(self, "sNode_clone", 6))->_protocol_obj);
    }
    if(self!=((void*)0)) {
        ((struct sNode*)come_null_checker(result, "sNode_clone", 7))->finalize=((struct sNode*)come_null_checker(self, "sNode_clone", 7))->finalize;
    }
    if(self!=((void*)0)) {
        ((struct sNode*)come_null_checker(result, "sNode_clone", 8))->clone=((struct sNode*)come_null_checker(self, "sNode_clone", 8))->clone;
    }
    if(self!=((void*)0)) {
        ((struct sNode*)come_null_checker(result, "sNode_clone", 9))->compile=((struct sNode*)come_null_checker(self, "sNode_clone", 9))->compile;
    }
    if(self!=((void*)0)) {
        ((struct sNode*)come_null_checker(result, "sNode_clone", 10))->sline=((struct sNode*)come_null_checker(self, "sNode_clone", 10))->sline;
    }
    if(self!=((void*)0)) {
        ((struct sNode*)come_null_checker(result, "sNode_clone", 11))->sline_real=((struct sNode*)come_null_checker(self, "sNode_clone", 11))->sline_real;
    }
    if(self!=((void*)0)) {
        ((struct sNode*)come_null_checker(result, "sNode_clone", 12))->sname=((struct sNode*)come_null_checker(self, "sNode_clone", 12))->sname;
    }
    if(self!=((void*)0)) {
        ((struct sNode*)come_null_checker(result, "sNode_clone", 13))->terminated=((struct sNode*)come_null_checker(self, "sNode_clone", 13))->terminated;
    }
    if(self!=((void*)0)) {
        ((struct sNode*)come_null_checker(result, "sNode_clone", 14))->kind=((struct sNode*)come_null_checker(self, "sNode_clone", 14))->kind;
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
    result=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count(((struct list$1sNode$ph*)come_null_checker(((struct list$1sNode$ph*)(__right_value0=(struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), (void*)0, 1663, "struct list$1sNode$ph*"))), "/usr/local/include/neo-c.h", 1663)))));
    come_call_finalizer(list$1sNode$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    it=((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1665))->head;
    while(it!=((void*)0)) {
        if(1) {
            list$1sNode$ph_add(((struct list$1sNode$ph*)come_null_checker(result, "/usr/local/include/neo-c.h", 1668)),(struct sNode*)come_increment_ref_count(sNode_clone(((struct list_item$1sNode$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1668))->item)));
        }
        else {
            list$1sNode$ph_add(((struct list$1sNode$ph*)come_null_checker(result, "/usr/local/include/neo-c.h", 1671)),(struct sNode*)come_increment_ref_count(sNode_clone(((struct list_item$1sNode$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1671))->item)));
        }
        it=((struct list_item$1sNode$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1674))->next;
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
    ((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1631))->head=((void*)0);
    ((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1632))->tail=((void*)0);
    ((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1633))->len=0;
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
    struct sNode* __dec_obj18;
    struct list_item$1sNode$ph* litem_2;
    struct sNode* __dec_obj19;
    struct list_item$1sNode$ph* litem_3;
    struct sNode* __dec_obj20;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1683))->len==0) {
        litem=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), (void*)0, 1684, "struct list_item$1sNode$ph*"))));
        ((struct list_item$1sNode$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1686))->prev=((void*)0);
        ((struct list_item$1sNode$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1687))->next=((void*)0);
        __dec_obj18=((struct list_item$1sNode$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1688))->item,
        ((struct list_item$1sNode$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1688))->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj18 ? __dec_obj18 = come_decrement_ref_count(__dec_obj18, ((struct sNode*)__dec_obj18)->finalize, ((struct sNode*)__dec_obj18)->_protocol_obj, 0,0, (void*)0) :0);
        ((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1690))->tail=litem;
        ((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1691))->head=litem;
    }
    else if(((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1693))->len==1) {
        litem_2=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), (void*)0, 1694, "struct list_item$1sNode$ph*"))));
        ((struct list_item$1sNode$ph*)come_null_checker(litem_2, "/usr/local/include/neo-c.h", 1696))->prev=((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1696))->head;
        ((struct list_item$1sNode$ph*)come_null_checker(litem_2, "/usr/local/include/neo-c.h", 1697))->next=((void*)0);
        __dec_obj19=((struct list_item$1sNode$ph*)come_null_checker(litem_2, "/usr/local/include/neo-c.h", 1698))->item,
        ((struct list_item$1sNode$ph*)come_null_checker(litem_2, "/usr/local/include/neo-c.h", 1698))->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj19 ? __dec_obj19 = come_decrement_ref_count(__dec_obj19, ((struct sNode*)__dec_obj19)->finalize, ((struct sNode*)__dec_obj19)->_protocol_obj, 0,0, (void*)0) :0);
        ((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1700))->tail=litem_2;
        ((struct list_item$1sNode$ph*)come_null_checker(((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1701))->head, "/usr/local/include/neo-c.h", 1701))->next=litem_2;
    }
    else {
        litem_3=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), (void*)0, 1704, "struct list_item$1sNode$ph*"))));
        ((struct list_item$1sNode$ph*)come_null_checker(litem_3, "/usr/local/include/neo-c.h", 1706))->prev=((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1706))->tail;
        ((struct list_item$1sNode$ph*)come_null_checker(litem_3, "/usr/local/include/neo-c.h", 1707))->next=((void*)0);
        __dec_obj20=((struct list_item$1sNode$ph*)come_null_checker(litem_3, "/usr/local/include/neo-c.h", 1708))->item,
        ((struct list_item$1sNode$ph*)come_null_checker(litem_3, "/usr/local/include/neo-c.h", 1708))->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj20 ? __dec_obj20 = come_decrement_ref_count(__dec_obj20, ((struct sNode*)__dec_obj20)->finalize, ((struct sNode*)__dec_obj20)->_protocol_obj, 0,0, (void*)0) :0);
        ((struct list_item$1sNode$ph*)come_null_checker(((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1710))->tail, "/usr/local/include/neo-c.h", 1710))->next=litem_3;
        ((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1711))->tail=litem_3;
    }
    ((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1714))->len++;
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
    it=((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1652))->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=((struct list_item$1sNode$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1655))->next;
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
    result=(struct list$1int$*)come_increment_ref_count(list$1int$_initialize((struct list$1int$*)come_increment_ref_count(((struct list$1int$*)come_null_checker(((struct list$1int$*)(__right_value0=(struct list$1int$*)come_calloc(1, sizeof(struct list$1int$)*(1), (void*)0, 1663, "struct list$1int$*"))), "/usr/local/include/neo-c.h", 1663)))));
    come_call_finalizer(list$1int$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    it=((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1665))->head;
    while(it!=((void*)0)) {
        if(0) {
            list$1int$_add(((struct list$1int$*)come_null_checker(result, "/usr/local/include/neo-c.h", 1668)),((struct list_item$1int$*)come_null_checker(it, "/usr/local/include/neo-c.h", 1668))->item);
        }
        else {
            list$1int$_add(((struct list$1int$*)come_null_checker(result, "/usr/local/include/neo-c.h", 1671)),((struct list_item$1int$*)come_null_checker(it, "/usr/local/include/neo-c.h", 1671))->item);
        }
        it=((struct list_item$1int$*)come_null_checker(it, "/usr/local/include/neo-c.h", 1674))->next;
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
    ((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1631))->head=((void*)0);
    ((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1632))->tail=((void*)0);
    ((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1633))->len=0;
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
    struct list_item$1int$* litem_4;
    struct list_item$1int$* litem_5;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1683))->len==0) {
        litem=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), (void*)0, 1684, "struct list_item$1int$*"))));
        ((struct list_item$1int$*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1686))->prev=((void*)0);
        ((struct list_item$1int$*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1687))->next=((void*)0);
        ((struct list_item$1int$*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1688))->item=item;
        ((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1690))->tail=litem;
        ((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1691))->head=litem;
    }
    else if(((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1693))->len==1) {
        litem_4=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), (void*)0, 1694, "struct list_item$1int$*"))));
        ((struct list_item$1int$*)come_null_checker(litem_4, "/usr/local/include/neo-c.h", 1696))->prev=((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1696))->head;
        ((struct list_item$1int$*)come_null_checker(litem_4, "/usr/local/include/neo-c.h", 1697))->next=((void*)0);
        ((struct list_item$1int$*)come_null_checker(litem_4, "/usr/local/include/neo-c.h", 1698))->item=item;
        ((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1700))->tail=litem_4;
        ((struct list_item$1int$*)come_null_checker(((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1701))->head, "/usr/local/include/neo-c.h", 1701))->next=litem_4;
    }
    else {
        litem_5=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), (void*)0, 1704, "struct list_item$1int$*"))));
        ((struct list_item$1int$*)come_null_checker(litem_5, "/usr/local/include/neo-c.h", 1706))->prev=((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1706))->tail;
        ((struct list_item$1int$*)come_null_checker(litem_5, "/usr/local/include/neo-c.h", 1707))->next=((void*)0);
        ((struct list_item$1int$*)come_null_checker(litem_5, "/usr/local/include/neo-c.h", 1708))->item=item;
        ((struct list_item$1int$*)come_null_checker(((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1710))->tail, "/usr/local/include/neo-c.h", 1710))->next=litem_5;
        ((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1711))->tail=litem_5;
    }
    ((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1714))->len++;
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
    it=((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1652))->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=((struct list_item$1int$*)come_null_checker(it, "/usr/local/include/neo-c.h", 1655))->next;
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
    result=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)come_null_checker(((struct list$1char$ph*)(__right_value0=(struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), (void*)0, 1663, "struct list$1char$ph*"))), "/usr/local/include/neo-c.h", 1663)))));
    come_call_finalizer(list$1char$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    it=((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1665))->head;
    while(it!=((void*)0)) {
        if(1) {
            list$1char$ph_add(((struct list$1char$ph*)come_null_checker(result, "/usr/local/include/neo-c.h", 1668)),(char* )come_increment_ref_count((char* )come_memdup(((struct list_item$1char$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1668))->item, "/usr/local/include/neo-c.h", 1668, "char* ")));
        }
        else {
            list$1char$ph_add(((struct list$1char$ph*)come_null_checker(result, "/usr/local/include/neo-c.h", 1671)),(char* )come_increment_ref_count((char* )come_memdup(((struct list_item$1char$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1671))->item, "/usr/local/include/neo-c.h", 1671, "char* ")));
        }
        it=((struct list_item$1char$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1674))->next;
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
    ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1631))->head=((void*)0);
    ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1632))->tail=((void*)0);
    ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1633))->len=0;
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
    char*  __dec_obj28  ;
    struct list_item$1char$ph* litem_6;
    char*  __dec_obj29  ;
    struct list_item$1char$ph* litem_7;
    char*  __dec_obj30  ;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1683))->len==0) {
        litem=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), (void*)0, 1684, "struct list_item$1char$ph*"))));
        ((struct list_item$1char$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1686))->prev=((void*)0);
        ((struct list_item$1char$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1687))->next=((void*)0);
        __dec_obj28=((struct list_item$1char$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1688))->item,
        ((struct list_item$1char$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1688))->item=(char* )come_increment_ref_count(item);
        __dec_obj28 = come_decrement_ref_count(__dec_obj28, (void*)0, (void*)0, 0,0, (void*)0);
        ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1690))->tail=litem;
        ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1691))->head=litem;
    }
    else if(((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1693))->len==1) {
        litem_6=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), (void*)0, 1694, "struct list_item$1char$ph*"))));
        ((struct list_item$1char$ph*)come_null_checker(litem_6, "/usr/local/include/neo-c.h", 1696))->prev=((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1696))->head;
        ((struct list_item$1char$ph*)come_null_checker(litem_6, "/usr/local/include/neo-c.h", 1697))->next=((void*)0);
        __dec_obj29=((struct list_item$1char$ph*)come_null_checker(litem_6, "/usr/local/include/neo-c.h", 1698))->item,
        ((struct list_item$1char$ph*)come_null_checker(litem_6, "/usr/local/include/neo-c.h", 1698))->item=(char* )come_increment_ref_count(item);
        __dec_obj29 = come_decrement_ref_count(__dec_obj29, (void*)0, (void*)0, 0,0, (void*)0);
        ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1700))->tail=litem_6;
        ((struct list_item$1char$ph*)come_null_checker(((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1701))->head, "/usr/local/include/neo-c.h", 1701))->next=litem_6;
    }
    else {
        litem_7=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), (void*)0, 1704, "struct list_item$1char$ph*"))));
        ((struct list_item$1char$ph*)come_null_checker(litem_7, "/usr/local/include/neo-c.h", 1706))->prev=((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1706))->tail;
        ((struct list_item$1char$ph*)come_null_checker(litem_7, "/usr/local/include/neo-c.h", 1707))->next=((void*)0);
        __dec_obj30=((struct list_item$1char$ph*)come_null_checker(litem_7, "/usr/local/include/neo-c.h", 1708))->item,
        ((struct list_item$1char$ph*)come_null_checker(litem_7, "/usr/local/include/neo-c.h", 1708))->item=(char* )come_increment_ref_count(item);
        __dec_obj30 = come_decrement_ref_count(__dec_obj30, (void*)0, (void*)0, 0,0, (void*)0);
        ((struct list_item$1char$ph*)come_null_checker(((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1710))->tail, "/usr/local/include/neo-c.h", 1710))->next=litem_7;
        ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1711))->tail=litem_7;
    }
    ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1714))->len++;
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
    it=((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1652))->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=((struct list_item$1char$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1655))->next;
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
    return ((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1922))->len;
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
    return ((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1922))->len;
    neo_current_frame = fr.prev;
}

_Bool operator_overload_fun2(struct sType*  type  , const char* fun_name, struct sNode* left_node, struct sNode* middle_node, struct sNode* right_node, struct CVALUE*  left_value  , struct CVALUE*  middle_value  , struct CVALUE*  right_value  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "operator_overload_fun2"; neo_current_frame = &fr;
    struct sType*  generics_type  ;
    void* __right_value0 = (void*)0;
    struct sType*  __dec_obj42  ;
    struct sType*  __dec_obj43  ;
    struct sClass*  klass  ;
    char* class_name;
    struct tuple3$3char$phsFun$psGenericsFun$p* multiple_assign_var1
;    char*  fun_name2  =0;
    struct sFun*  operator_fun  =0;
    struct sGenericsFun*  generics_fun  =0;
    _Bool result;
    struct sRightValueObject*  right_value_object  ;
    struct sRightValueObject*  right_value_object_8  ;
    struct sRightValueObject*  right_value_object_9  ;
    struct sNode* obj;
    void* __right_value1 = (void*)0;
    struct list$1tuple2$2char$phsNode$ph$ph* params;
    struct sNode* node;
    _Bool Value;
    _Bool __result_obj__0;
    memset(&generics_type, 0, sizeof(generics_type));
    if(((struct sType* )come_null_checker(type, "23field.nc", 66))->mNoSolvedGenericsType) {
        __dec_obj42=generics_type,
        generics_type=(struct sType* )come_increment_ref_count(sType_clone(((struct sType* )come_null_checker(type, "23field.nc", 67))->mNoSolvedGenericsType));
        come_call_finalizer(sType_finalize, __dec_obj42,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        __dec_obj43=generics_type,
        generics_type=(struct sType* )come_increment_ref_count(sType_clone(type));
        come_call_finalizer(sType_finalize, __dec_obj43,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    klass=((struct sType* )come_null_checker(type, "23field.nc", 73))->mClass;
    class_name=(char* )come_increment_ref_count(((struct sClass* )come_null_checker(klass, "23field.nc", 74))->mName);
    multiple_assign_var1=((struct tuple3$3char$phsFun$psGenericsFun$p*)(__right_value0=get_method(fun_name,type,info)));
    fun_name2=(char* )come_increment_ref_count(multiple_assign_var1->v1);
    operator_fun=multiple_assign_var1->v2;
    generics_fun=multiple_assign_var1->v3;
    come_call_finalizer(tuple3$3char$phsFun$psGenericsFun$p$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    result=(_Bool)0;
    if(operator_fun) {
        {
            right_value_object=((struct CVALUE* )come_null_checker(left_value, "23field.nc", 82))->right_value_objects;
            if(right_value_object) {
                ((struct sRightValueObject* )come_null_checker(right_value_object, "23field.nc", 85))->mFreed=(_Bool)1;
            }
        }
        {
            right_value_object_8=((struct CVALUE* )come_null_checker(middle_value, "23field.nc", 89))->right_value_objects;
            if(right_value_object_8) {
                ((struct sRightValueObject* )come_null_checker(right_value_object_8, "23field.nc", 92))->mFreed=(_Bool)1;
            }
        }
        {
            right_value_object_9=((struct CVALUE* )come_null_checker(right_value, "23field.nc", 96))->right_value_objects;
            if(right_value_object_9) {
                ((struct sRightValueObject* )come_null_checker(right_value_object_9, "23field.nc", 99))->mFreed=(_Bool)1;
            }
        }
        obj=(struct sNode*)come_increment_ref_count(left_node);
        params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(((struct list$1tuple2$2char$phsNode$ph$ph*)(__right_value0=(struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), (void*)0, 103, "struct list$1tuple2$2char$phsNode$ph$ph*"))), "23field.nc", 103)))));
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        list$1tuple2$2char$phsNode$ph$ph_add(((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(params, "23field.nc", 105)),(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "23field.nc", 105, "struct tuple2$2char$phsNode$ph")),(char* )come_increment_ref_count((char* )((void*)0)),(struct sNode*)come_increment_ref_count(left_node))));
        list$1tuple2$2char$phsNode$ph$ph_add(((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(params, "23field.nc", 106)),(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "23field.nc", 106, "struct tuple2$2char$phsNode$ph")),(char* )come_increment_ref_count((char* )((void*)0)),(struct sNode*)come_increment_ref_count(middle_node))));
        list$1tuple2$2char$phsNode$ph$ph_add(((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(params, "23field.nc", 107)),(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "23field.nc", 107, "struct tuple2$2char$phsNode$ph")),(char* )come_increment_ref_count((char* )((void*)0)),(struct sNode*)come_increment_ref_count(right_node))));
        node=(struct sNode*)come_increment_ref_count(create_method_call(fun_name,(struct sNode*)come_increment_ref_count(obj),params,((void*)0),0,((void*)0),info,(_Bool)0));
        Value=node_compile(node,info);
        if(Value) {
            result=(_Bool)1;
        }
        ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    __result_obj__0 = result;
    ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    ((middle_node) ? middle_node = come_decrement_ref_count(middle_node, ((struct sNode*)middle_node)->finalize, ((struct sNode*)middle_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(sType_finalize, generics_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (class_name = come_decrement_ref_count(class_name, (void*)0, (void*)0, 0, 0, (void*)0));
    (fun_name2 = come_decrement_ref_count(fun_name2, (void*)0, (void*)0, 0, 0, (void*)0));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void tuple3$3char$phsFun$psGenericsFun$p$p_finalize(struct tuple3$3char$phsFun$psGenericsFun$p* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple3$3char$phsFun$psGenericsFun$p$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct tuple3$3char$phsFun$psGenericsFun$p*)come_null_checker(self, "tuple3$3char$phsFun$psGenericsFun$p$p_finalize", 2))->v1!=((void*)0)) {
        (((struct tuple3$3char$phsFun$psGenericsFun$p*)come_null_checker(self, "tuple3$3char$phsFun$psGenericsFun$p$p_finalize", 2))->v1 = come_decrement_ref_count(((struct tuple3$3char$phsFun$psGenericsFun$p*)come_null_checker(self, "tuple3$3char$phsFun$psGenericsFun$p$p_finalize", 2))->v1, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    neo_current_frame = fr.prev;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_initialize(struct list$1tuple2$2char$phsNode$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsNode$ph$ph_initialize"; neo_current_frame = &fr;
    struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__0;
    ((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1631))->head=((void*)0);
    ((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1632))->tail=((void*)0);
    ((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1633))->len=0;
    __result_obj__0 = (struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
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
    it=((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1652))->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=((struct list_item$1tuple2$2char$phsNode$ph$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1655))->next;
        come_call_finalizer(list_item$1tuple2$2char$phsNode$ph$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

static void list_item$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsNode$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1tuple2$2char$phsNode$ph$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct list_item$1tuple2$2char$phsNode$ph$ph*)come_null_checker(self, "list_item$1tuple2$2char$phsNode$ph$ph$p_finalize", 2))->item!=((void*)0)) {
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, ((struct list_item$1tuple2$2char$phsNode$ph$ph*)come_null_checker(self, "list_item$1tuple2$2char$phsNode$ph$ph$p_finalize", 2))->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

static void tuple2$2char$phsNode$ph$p_finalize(struct tuple2$2char$phsNode$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2char$phsNode$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct tuple2$2char$phsNode$ph*)come_null_checker(self, "tuple2$2char$phsNode$ph$p_finalize", 2))->v1!=((void*)0)) {
        (((struct tuple2$2char$phsNode$ph*)come_null_checker(self, "tuple2$2char$phsNode$ph$p_finalize", 2))->v1 = come_decrement_ref_count(((struct tuple2$2char$phsNode$ph*)come_null_checker(self, "tuple2$2char$phsNode$ph$p_finalize", 2))->v1, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct tuple2$2char$phsNode$ph*)come_null_checker(self, "tuple2$2char$phsNode$ph$p_finalize", 3))->v2!=((void*)0)) {
        ((((struct tuple2$2char$phsNode$ph*)come_null_checker(self, "tuple2$2char$phsNode$ph$p_finalize", 3))->v2) ? ((struct tuple2$2char$phsNode$ph*)come_null_checker(self, "tuple2$2char$phsNode$ph$p_finalize", 3))->v2 = come_decrement_ref_count(((struct tuple2$2char$phsNode$ph*)come_null_checker(self, "tuple2$2char$phsNode$ph$p_finalize", 3))->v2, ((struct sNode*)((struct tuple2$2char$phsNode$ph*)come_null_checker(self, "tuple2$2char$phsNode$ph$p_finalize", 3))->v2)->finalize, ((struct sNode*)((struct tuple2$2char$phsNode$ph*)come_null_checker(self, "tuple2$2char$phsNode$ph$p_finalize", 3))->v2)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    neo_current_frame = fr.prev;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_add(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsNode$ph$ph_add"; neo_current_frame = &fr;
    struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1tuple2$2char$phsNode$ph$ph* litem;
    struct tuple2$2char$phsNode$ph* __dec_obj44;
    struct list_item$1tuple2$2char$phsNode$ph$ph* litem_10;
    struct tuple2$2char$phsNode$ph* __dec_obj45;
    struct list_item$1tuple2$2char$phsNode$ph$ph* litem_11;
    struct tuple2$2char$phsNode$ph* __dec_obj46;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1683))->len==0) {
        litem=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), (void*)0, 1684, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        ((struct list_item$1tuple2$2char$phsNode$ph$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1686))->prev=((void*)0);
        ((struct list_item$1tuple2$2char$phsNode$ph$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1687))->next=((void*)0);
        __dec_obj44=((struct list_item$1tuple2$2char$phsNode$ph$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1688))->item,
        ((struct list_item$1tuple2$2char$phsNode$ph$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1688))->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj44,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1690))->tail=litem;
        ((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1691))->head=litem;
    }
    else if(((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1693))->len==1) {
        litem_10=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), (void*)0, 1694, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        ((struct list_item$1tuple2$2char$phsNode$ph$ph*)come_null_checker(litem_10, "/usr/local/include/neo-c.h", 1696))->prev=((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1696))->head;
        ((struct list_item$1tuple2$2char$phsNode$ph$ph*)come_null_checker(litem_10, "/usr/local/include/neo-c.h", 1697))->next=((void*)0);
        __dec_obj45=((struct list_item$1tuple2$2char$phsNode$ph$ph*)come_null_checker(litem_10, "/usr/local/include/neo-c.h", 1698))->item,
        ((struct list_item$1tuple2$2char$phsNode$ph$ph*)come_null_checker(litem_10, "/usr/local/include/neo-c.h", 1698))->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj45,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1700))->tail=litem_10;
        ((struct list_item$1tuple2$2char$phsNode$ph$ph*)come_null_checker(((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1701))->head, "/usr/local/include/neo-c.h", 1701))->next=litem_10;
    }
    else {
        litem_11=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), (void*)0, 1704, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        ((struct list_item$1tuple2$2char$phsNode$ph$ph*)come_null_checker(litem_11, "/usr/local/include/neo-c.h", 1706))->prev=((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1706))->tail;
        ((struct list_item$1tuple2$2char$phsNode$ph$ph*)come_null_checker(litem_11, "/usr/local/include/neo-c.h", 1707))->next=((void*)0);
        __dec_obj46=((struct list_item$1tuple2$2char$phsNode$ph$ph*)come_null_checker(litem_11, "/usr/local/include/neo-c.h", 1708))->item,
        ((struct list_item$1tuple2$2char$phsNode$ph$ph*)come_null_checker(litem_11, "/usr/local/include/neo-c.h", 1708))->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj46,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((struct list_item$1tuple2$2char$phsNode$ph$ph*)come_null_checker(((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1710))->tail, "/usr/local/include/neo-c.h", 1710))->next=litem_11;
        ((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1711))->tail=litem_11;
    }
    ((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1714))->len++;
    __result_obj__0 = self;
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_initialize(struct tuple2$2char$phsNode$ph* self, char*  v1  , struct sNode* v2)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2char$phsNode$ph_initialize"; neo_current_frame = &fr;
    char*  __dec_obj47  ;
    struct sNode* __dec_obj48;
    struct tuple2$2char$phsNode$ph* __result_obj__0;
    __dec_obj47=((struct tuple2$2char$phsNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3575))->v1,
    ((struct tuple2$2char$phsNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3575))->v1=(char* )come_increment_ref_count(v1);
    __dec_obj47 = come_decrement_ref_count(__dec_obj47, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj48=((struct tuple2$2char$phsNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3576))->v2,
    ((struct tuple2$2char$phsNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3576))->v2=(struct sNode*)come_increment_ref_count(v2);
    (__dec_obj48 ? __dec_obj48 = come_decrement_ref_count(__dec_obj48, ((struct sNode*)__dec_obj48)->finalize, ((struct sNode*)__dec_obj48)->_protocol_obj, 0,0, (void*)0) :0);
    __result_obj__0 = (struct tuple2$2char$phsNode$ph*)come_increment_ref_count(self);
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 0, (void*)0));
    ((v2) ? v2 = come_decrement_ref_count(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

struct sType*  get_field_type(struct sClass*  klass  , char*  name  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "get_field_type"; neo_current_frame = &fr;
    struct sType*  result  ;
    struct list$1tuple2$2char$phsType$ph$ph* o2_saved;
    struct tuple2$2char$phsType$ph* field;
    struct tuple2$2char$phsType$ph* multiple_assign_var2
;    char*  field_name  =0;
    struct sType*  field_type2  =0;
    void* __right_value0 = (void*)0;
    struct sType*  __dec_obj49  ;
    struct sType*  __dec_obj50  ;
    struct sType*  __result_obj__0  ;
    result=((void*)0);
    for(o2_saved=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct sClass* )come_null_checker(klass, "23field.nc", 122))->mFields),field=list$1tuple2$2char$phsType$ph$ph_begin(((struct list$1tuple2$2char$phsType$ph$ph*)come_null_checker(o2_saved, "23field.nc", 122)));!list$1tuple2$2char$phsType$ph$ph_end(((struct list$1tuple2$2char$phsType$ph$ph*)come_null_checker(o2_saved, "23field.nc", 122)));field=list$1tuple2$2char$phsType$ph$ph_next(((struct list$1tuple2$2char$phsType$ph$ph*)come_null_checker(o2_saved, "23field.nc", 122)))){
        multiple_assign_var2=field;
        field_name=(char* )come_increment_ref_count(multiple_assign_var2->v1);
        field_type2=(struct sType* )come_increment_ref_count(multiple_assign_var2->v2);
        if(string_operator_equals(((char* )come_null_checker(field_name, "23field.nc", 125)),name)) {
            __dec_obj49=result,
            result=(struct sType* )come_increment_ref_count(sType_clone(field_type2));
            come_call_finalizer(sType_finalize, __dec_obj49,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            (field_name = come_decrement_ref_count(field_name, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sType_finalize, field_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            break;
        }
        if(((struct sType* )come_null_checker(field_type2, "23field.nc", 130))->mAnonymousVarName) {
            __dec_obj50=result,
            result=(struct sType* )come_increment_ref_count(get_field_type(((struct sType* )come_null_checker(field_type2, "23field.nc", 131))->mClass,(char* )come_increment_ref_count(name),info));
            come_call_finalizer(sType_finalize, __dec_obj50,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(result) {
                (field_name = come_decrement_ref_count(field_name, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(sType_finalize, field_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
        }
        (field_name = come_decrement_ref_count(field_name, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sType_finalize, field_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    __result_obj__0 = (struct sType* )come_increment_ref_count(result);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sType_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_begin(struct list$1tuple2$2char$phsType$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsType$ph$ph_begin"; neo_current_frame = &fr;
    struct tuple2$2char$phsType$ph* result;
    struct tuple2$2char$phsType$ph* __result_obj__0;
    struct tuple2$2char$phsType$ph* result_12;
    if(self==((void*)0)) {
        memset(&result,0,sizeof(struct tuple2$2char$phsType$ph*));
        __result_obj__0 = result;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    ((struct list$1tuple2$2char$phsType$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1839))->it=((struct list$1tuple2$2char$phsType$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1839))->head;
    if(((struct list$1tuple2$2char$phsType$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1841))->it) {
        __result_obj__0 = ((struct list_item$1tuple2$2char$phsType$ph$ph*)come_null_checker(((struct list$1tuple2$2char$phsType$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1842))->it, "/usr/local/include/neo-c.h", 1842))->item;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    memset(&result_12,0,sizeof(struct tuple2$2char$phsType$ph*));
    __result_obj__0 = result_12;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static _Bool list$1tuple2$2char$phsType$ph$ph_end(struct list$1tuple2$2char$phsType$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsType$ph$ph_end"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return self==((void*)0)||((struct list$1tuple2$2char$phsType$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1871))->it==((void*)0);
    neo_current_frame = fr.prev;
}

static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_next(struct list$1tuple2$2char$phsType$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsType$ph$ph_next"; neo_current_frame = &fr;
    struct tuple2$2char$phsType$ph* result;
    struct tuple2$2char$phsType$ph* __result_obj__0;
    struct tuple2$2char$phsType$ph* result_13;
    if(self==((void*)0)||((struct list$1tuple2$2char$phsType$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1853))->it==((void*)0)) {
        memset(&result,0,sizeof(struct tuple2$2char$phsType$ph*));
        __result_obj__0 = result;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    ((struct list$1tuple2$2char$phsType$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1859))->it=((struct list_item$1tuple2$2char$phsType$ph$ph*)come_null_checker(((struct list$1tuple2$2char$phsType$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1859))->it, "/usr/local/include/neo-c.h", 1859))->next;
    if(((struct list$1tuple2$2char$phsType$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1861))->it) {
        __result_obj__0 = ((struct list_item$1tuple2$2char$phsType$ph$ph*)come_null_checker(((struct list$1tuple2$2char$phsType$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1862))->it, "/usr/local/include/neo-c.h", 1862))->item;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    memset(&result_13,0,sizeof(struct tuple2$2char$phsType$ph*));
    __result_obj__0 = result_13;
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
    it=((struct list$1tuple2$2char$phsType$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1652))->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=((struct list_item$1tuple2$2char$phsType$ph$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1655))->next;
        come_call_finalizer(list_item$1tuple2$2char$phsType$ph$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1tuple2$2char$phsType$ph$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct list_item$1tuple2$2char$phsType$ph$ph*)come_null_checker(self, "list_item$1tuple2$2char$phsType$ph$ph$p_finalize", 2))->item!=((void*)0)) {
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, ((struct list_item$1tuple2$2char$phsType$ph$ph*)come_null_checker(self, "list_item$1tuple2$2char$phsType$ph$ph$p_finalize", 2))->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2char$phsType$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct tuple2$2char$phsType$ph*)come_null_checker(self, "tuple2$2char$phsType$ph$p_finalize", 2))->v1!=((void*)0)) {
        (((struct tuple2$2char$phsType$ph*)come_null_checker(self, "tuple2$2char$phsType$ph$p_finalize", 2))->v1 = come_decrement_ref_count(((struct tuple2$2char$phsType$ph*)come_null_checker(self, "tuple2$2char$phsType$ph$p_finalize", 2))->v1, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct tuple2$2char$phsType$ph*)come_null_checker(self, "tuple2$2char$phsType$ph$p_finalize", 3))->v2!=((void*)0)) {
        come_call_finalizer(sType_finalize, ((struct tuple2$2char$phsType$ph*)come_null_checker(self, "tuple2$2char$phsType$ph$p_finalize", 3))->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

struct sStoreFieldNode* sStoreFieldNode_initialize(struct sStoreFieldNode* self, struct sNode* left, struct sNode* right, char*  name  , struct sInfo*  info  , _Bool arrow_)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sStoreFieldNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj51;
    struct sNode* __dec_obj52;
    char*  __dec_obj53  ;
    struct sStoreFieldNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sStoreFieldNode*)come_increment_ref_count(((struct sStoreFieldNode*)come_null_checker(self, "23field.nc", 147))),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj51=((struct sStoreFieldNode*)come_null_checker(self, "23field.nc", 149))->mLeft,
    ((struct sStoreFieldNode*)come_null_checker(self, "23field.nc", 149))->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    (__dec_obj51 ? __dec_obj51 = come_decrement_ref_count(__dec_obj51, ((struct sNode*)__dec_obj51)->finalize, ((struct sNode*)__dec_obj51)->_protocol_obj, 0,0, (void*)0) :0);
    __dec_obj52=((struct sStoreFieldNode*)come_null_checker(self, "23field.nc", 150))->mRight,
    ((struct sStoreFieldNode*)come_null_checker(self, "23field.nc", 150))->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    (__dec_obj52 ? __dec_obj52 = come_decrement_ref_count(__dec_obj52, ((struct sNode*)__dec_obj52)->finalize, ((struct sNode*)__dec_obj52)->_protocol_obj, 0,0, (void*)0) :0);
    __dec_obj53=((struct sStoreFieldNode*)come_null_checker(self, "23field.nc", 151))->mName,
    ((struct sStoreFieldNode*)come_null_checker(self, "23field.nc", 151))->mName=(char* )come_increment_ref_count(__builtin_string(name));
    __dec_obj53 = come_decrement_ref_count(__dec_obj53, (void*)0, (void*)0, 0,0, (void*)0);
    ((struct sStoreFieldNode*)come_null_checker(self, "23field.nc", 152))->mArrow=arrow_;
    __result_obj__0 = (struct sStoreFieldNode*)come_increment_ref_count(self);
    come_call_finalizer(sStoreFieldNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
    neo_current_frame = fr.prev;
    come_call_finalizer(sStoreFieldNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char*  sStoreFieldNode_kind(struct sStoreFieldNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sStoreFieldNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sStoreFieldNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool sStoreFieldNode_compile(struct sStoreFieldNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sStoreFieldNode_compile"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* left;
    struct sNode* right;
    char*  name  ;
    _Bool arrow_;
    _Bool Value;
    _Bool __result_obj__0;
    struct CVALUE*  left_value  ;
    struct sType*  left_type2  ;
    struct sType*  __dec_obj54  ;
    struct sType*  __dec_obj55  ;
    int i;
    void* __right_value1 = (void*)0;
    _Bool _conditional_value_X0;
    char*  __dec_obj56  ;
    _Bool Value_16;
    _Bool new_channel;
    struct CVALUE*  right_value  ;
    struct sType*  right_type  ;
    struct sType*  left_type  ;
    struct sType*  left_type3  ;
    struct sClass*  klass  ;
    struct sType*  field_type  ;
    int index;
    char*  child_field_name  ;
    _Bool child_field_is_pointer;
    struct sType*  field_type_17  ;
    struct CVALUE*  come_value  ;
    char*  __dec_obj57  ;
    char*  __dec_obj58  ;
    struct sType*  __dec_obj59  ;
    struct CVALUE*  come_value_20  ;
    struct sType*  __dec_obj63  ;
    struct sType*  __dec_obj64  ;
    char*  c_value  ;
    char*  __dec_obj65  ;
    char*  __dec_obj66  ;
    char*  __dec_obj67  ;
    char*  __dec_obj68  ;
    char*  c_value_21  ;
    char*  __dec_obj69  ;
    char*  c_value_22  ;
    char*  __dec_obj70  ;
    char*  __dec_obj71  ;
    char*  __dec_obj72  ;
    char*  __dec_obj73  ;
    char*  c_value_23  ;
    char*  __dec_obj74  ;
    char*  c_value_24  ;
    char*  __dec_obj75  ;
    char*  __dec_obj76  ;
    char*  __dec_obj77  ;
    char*  __dec_obj78  ;
    char*  c_value_25  ;
    char*  __dec_obj79  ;
    char*  c_value_26  ;
    char*  __dec_obj80  ;
    char*  __dec_obj81  ;
    char*  __dec_obj82  ;
    char*  __dec_obj83  ;
    char*  c_value_27  ;
    char*  __dec_obj84  ;
    char*  __dec_obj85  ;
    char*  __dec_obj86  ;
    struct sType*  __dec_obj87  ;
    char*  __dec_obj88  ;
    char*  __dec_obj89  ;
    char*  __dec_obj90  ;
    char*  __dec_obj91  ;
    char*  __dec_obj92  ;
    char*  __dec_obj93  ;
    struct sType*  __dec_obj94  ;
    memset(&left_type2, 0, sizeof(left_type2));
    memset(&c_value, 0, sizeof(c_value));
    memset(&c_value_22, 0, sizeof(c_value_22));
    memset(&c_value_24, 0, sizeof(c_value_24));
    memset(&c_value_26, 0, sizeof(c_value_26));
    left=(struct sNode*)come_increment_ref_count(create_null_checker((struct sNode*)come_increment_ref_count(((struct sStoreFieldNode*)come_null_checker(self, "23field.nc", 162))->mLeft),info));
    right=(struct sNode*)come_increment_ref_count(((struct sStoreFieldNode*)come_null_checker(self, "23field.nc", 163))->mRight);
    name=(char* )come_increment_ref_count(__builtin_string(((struct sStoreFieldNode*)come_null_checker(self, "23field.nc", 164))->mName));
    arrow_=((struct sStoreFieldNode*)come_null_checker(self, "23field.nc", 165))->mArrow;
    Value=node_compile(left,info);
    if(!Value) {
        __result_obj__0 = (_Bool)0;
        ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    left_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
    if(((struct sType* )come_null_checker(((struct CVALUE* )come_null_checker(left_value, "23field.nc", 175))->type, "23field.nc", 175))->mNoSolvedGenericsType) {
        __dec_obj54=left_type2,
        left_type2=(struct sType* )come_increment_ref_count(((struct sType* )come_null_checker(((struct CVALUE* )come_null_checker(left_value, "23field.nc", 176))->type, "23field.nc", 176))->mNoSolvedGenericsType);
        come_call_finalizer(sType_finalize, __dec_obj54,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        __dec_obj55=left_type2,
        left_type2=(struct sType* )come_increment_ref_count(((struct CVALUE* )come_null_checker(left_value, "23field.nc", 179))->type);
        come_call_finalizer(sType_finalize, __dec_obj55,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(string_operator_equals(((char* )come_null_checker(((struct sClass* )come_null_checker(((struct sType* )come_null_checker(left_type2, "23field.nc", 181))->mClass, "23field.nc", 181))->mName, "23field.nc", 181)),"tuple1")||string_operator_equals(((char* )come_null_checker(((struct sClass* )come_null_checker(((struct sType* )come_null_checker(left_type2, "23field.nc", 181))->mClass, "23field.nc", 181))->mName, "23field.nc", 181)),"tuple2")||string_operator_equals(((char* )come_null_checker(((struct sClass* )come_null_checker(((struct sType* )come_null_checker(left_type2, "23field.nc", 181))->mClass, "23field.nc", 181))->mName, "23field.nc", 181)),"tuple3")||string_operator_equals(((char* )come_null_checker(((struct sClass* )come_null_checker(((struct sType* )come_null_checker(left_type2, "23field.nc", 181))->mClass, "23field.nc", 181))->mName, "23field.nc", 181)),"tuple3")||string_operator_equals(((char* )come_null_checker(((struct sClass* )come_null_checker(((struct sType* )come_null_checker(left_type2, "23field.nc", 181))->mClass, "23field.nc", 181))->mName, "23field.nc", 181)),"tuple4")||string_operator_equals(((char* )come_null_checker(((struct sClass* )come_null_checker(((struct sType* )come_null_checker(left_type2, "23field.nc", 181))->mClass, "23field.nc", 181))->mName, "23field.nc", 181)),"tuple5")) {
        for(i=0;i<list$1sType$ph_length(((struct list$1sType$ph*)come_null_checker(((struct sType* )come_null_checker(left_type2, "23field.nc", 183))->mGenericsTypes, "23field.nc", 183)));i++){
            if(({(_conditional_value_X0=(string_operator_equals(((char* )come_null_checker(name, "23field.nc", 184)),((struct sType* )come_null_checker(((struct sType* )(__right_value1=list$1sType$ph_operator_load_element(((struct list$1sType$ph*)come_null_checker(((struct list$1sType$ph*)come_null_checker(((struct sType* )come_null_checker(left_type2, "23field.nc", 184))->mGenericsTypes, "23field.nc", 184)), "23field.nc", 184)),i))), "23field.nc", 184))->mTupleName)));            come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer(sType_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
_conditional_value_X0;})) {
                __dec_obj56=name,
                name=(char* )come_increment_ref_count(xsprintf("v%d",i+1));
                __dec_obj56 = come_decrement_ref_count(__dec_obj56, (void*)0, (void*)0, 0,0, (void*)0);
            }
        }
    }
    Value_16=node_compile(right,info);
    if(!Value_16) {
        __result_obj__0 = (_Bool)0;
        ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    new_channel=string_operator_equals(((char* )come_null_checker(((char* )(__right_value1=((struct sNode*)come_null_checker(right, "23field.nc", 194))->kind(((struct sNode*)come_null_checker(right, "23field.nc", 194))->_protocol_obj))), "23field.nc", 194)),"sNewChannel");
    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
    right_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
    right_type=(struct sType* )come_increment_ref_count(((struct CVALUE* )come_null_checker(right_value, "23field.nc", 197))->type);
    left_type=(struct sType* )come_increment_ref_count(((struct CVALUE* )come_null_checker(left_value, "23field.nc", 199))->type);
    left_type3=(struct sType* )come_increment_ref_count(left_type);
    klass=(struct sClass* )come_increment_ref_count(map$2char$phsClass$ph_operator_load_element(((struct map$2char$phsClass$ph*)come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "23field.nc", 204))->classes, "23field.nc", 204)), "23field.nc", 204)),((struct sClass* )come_null_checker(((struct sType* )come_null_checker(left_type3, "23field.nc", 204))->mClass, "23field.nc", 204))->mName));
    field_type=((void*)0);
    index=0;
    child_field_name=((void*)0);
    child_field_is_pointer=(_Bool)0;
    if(((struct sClass* )come_null_checker(klass, "23field.nc", 211))->mFields==((void*)0)) {
        warning_msg(info,"%s fields are null",((struct sClass* )come_null_checker(klass, "23field.nc", 212))->mName);
        __result_obj__0 = (_Bool)1;
        ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(CVALUE_finalize, right_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, right_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, left_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, left_type3, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sClass_finalize, klass, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, field_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (child_field_name = come_decrement_ref_count(child_field_name, (void*)0, (void*)0, 0, 0, (void*)0));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    come_call_finalizer(sType_finalize, field_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    field_type_17=(struct sType* )come_increment_ref_count(get_field_type(klass,(char* )come_increment_ref_count(name),info));
    if(field_type_17==((void*)0)) {
        warning_msg(info,"field %s is not found",name);
        come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count(((struct CVALUE* )come_null_checker(((struct CVALUE* )(__right_value0=(struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), (void*)0, 221, "struct CVALUE* "))), "23field.nc", 221)))));
        come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        if(arrow_) {
            __dec_obj57=((struct CVALUE* )come_null_checker(come_value, "23field.nc", 224))->c_value,
            ((struct CVALUE* )come_null_checker(come_value, "23field.nc", 224))->c_value=(char* )come_increment_ref_count(xsprintf("%s->%s=%s",((struct CVALUE* )come_null_checker(left_value, "23field.nc", 224))->c_value,name,((struct CVALUE* )come_null_checker(right_value, "23field.nc", 224))->c_value));
            __dec_obj57 = come_decrement_ref_count(__dec_obj57, (void*)0, (void*)0, 0,0, (void*)0);
        }
        else {
            __dec_obj58=((struct CVALUE* )come_null_checker(come_value, "23field.nc", 227))->c_value,
            ((struct CVALUE* )come_null_checker(come_value, "23field.nc", 227))->c_value=(char* )come_increment_ref_count(xsprintf("%s.%s=%s",((struct CVALUE* )come_null_checker(left_value, "23field.nc", 227))->c_value,name,((struct CVALUE* )come_null_checker(right_value, "23field.nc", 227))->c_value));
            __dec_obj58 = come_decrement_ref_count(__dec_obj58, (void*)0, (void*)0, 0,0, (void*)0);
        }
        __dec_obj59=((struct CVALUE* )come_null_checker(come_value, "23field.nc", 229))->type,
        ((struct CVALUE* )come_null_checker(come_value, "23field.nc", 229))->type=(struct sType* )come_increment_ref_count(sType_clone(((struct CVALUE* )come_null_checker(right_value, "23field.nc", 229))->type));
        come_call_finalizer(sType_finalize, __dec_obj59,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((struct CVALUE* )come_null_checker(come_value, "23field.nc", 230))->var=((struct CVALUE* )come_null_checker(right_value, "23field.nc", 230))->var;
        list$1CVALUE$ph_push_back(((struct list$1CVALUE$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "23field.nc", 232))->stack, "23field.nc", 232)),(struct CVALUE* )come_increment_ref_count(come_value));
        add_come_last_code(info,"%s",((struct CVALUE* )come_null_checker(come_value, "23field.nc", 234))->c_value);
        __result_obj__0 = (_Bool)1;
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(CVALUE_finalize, right_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, right_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, left_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, left_type3, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sClass_finalize, klass, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (child_field_name = come_decrement_ref_count(child_field_name, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sType_finalize, field_type_17, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    come_value_20=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count(((struct CVALUE* )come_null_checker(((struct CVALUE* )(__right_value0=(struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), (void*)0, 238, "struct CVALUE* "))), "23field.nc", 238)))));
    come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj63=right_type,
    right_type=(struct sType* )come_increment_ref_count(((struct CVALUE* )come_null_checker(right_value, "23field.nc", 240))->type);
    come_call_finalizer(sType_finalize, __dec_obj63,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    check_assign_type(((char*)(__right_value1=xsprintf("\%s is assigned to(1)",((char* )(__right_value0=string_to_string(((char* )come_null_checker(name, "23field.nc", 242)))))))),field_type_17,right_type,right_value,info);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
    __dec_obj64=right_type,
    right_type=(struct sType* )come_increment_ref_count(sType_clone(((struct CVALUE* )come_null_checker(right_value, "23field.nc", 244))->type));
    come_call_finalizer(sType_finalize, __dec_obj64,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(((struct sType* )come_null_checker(field_type_17, "23field.nc", 246))->mHeap!=((struct sType* )come_null_checker(((struct CVALUE* )come_null_checker(right_value, "23field.nc", 246))->type, "23field.nc", 246))->mHeap) {
        if(string_operator_equals(((char* )come_null_checker(((struct sClass* )come_null_checker(((struct sType* )come_null_checker(((struct CVALUE* )come_null_checker(right_value, "23field.nc", 247))->type, "23field.nc", 247))->mClass, "23field.nc", 247))->mName, "23field.nc", 247)),"void")&&((struct sType* )come_null_checker(((struct CVALUE* )come_null_checker(right_value, "23field.nc", 247))->type, "23field.nc", 247))->mPointerNum==1) {
        }
        else {
            err_msg(info,"invalid heap object(%s) left  %d right %d",name,((struct sType* )come_null_checker(field_type_17, "23field.nc", 251))->mHeap,((struct sType* )come_null_checker(((struct CVALUE* )come_null_checker(right_value, "23field.nc", 251))->type, "23field.nc", 251))->mHeap);
            __result_obj__0 = (_Bool)1;
            ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(CVALUE_finalize, right_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, right_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, left_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, left_type3, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sClass_finalize, klass, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (child_field_name = come_decrement_ref_count(child_field_name, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sType_finalize, field_type_17, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(CVALUE_finalize, come_value_20, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
    }
    if(((struct sType* )come_null_checker(field_type_17, "23field.nc", 255))->mHeap&&((struct sType* )come_null_checker(right_type, "23field.nc", 255))->mHeap&&((struct sType* )come_null_checker(field_type_17, "23field.nc", 255))->mPointerNum>0&&((struct sType* )come_null_checker(right_type, "23field.nc", 255))->mPointerNum>0) {
        if(((struct sType* )come_null_checker(((struct CVALUE* )come_null_checker(left_value, "23field.nc", 257))->type, "23field.nc", 257))->mPointerNum==1||((struct sType* )come_null_checker(((struct CVALUE* )come_null_checker(left_value, "23field.nc", 257))->type, "23field.nc", 257))->mArrayPointerNum==1) {
            if(child_field_name) {
                if(child_field_is_pointer) {
                    __dec_obj65=c_value,
                    c_value=(char* )come_increment_ref_count(xsprintf("%s->%s->%s",((struct CVALUE* )come_null_checker(left_value, "23field.nc", 261))->c_value,child_field_name,name));
                    __dec_obj65 = come_decrement_ref_count(__dec_obj65, (void*)0, (void*)0, 0,0, (void*)0);
                }
                else {
                    __dec_obj66=c_value,
                    c_value=(char* )come_increment_ref_count(xsprintf("%s->%s.%s",((struct CVALUE* )come_null_checker(left_value, "23field.nc", 264))->c_value,child_field_name,name));
                    __dec_obj66 = come_decrement_ref_count(__dec_obj66, (void*)0, (void*)0, 0,0, (void*)0);
                }
                decrement_ref_count_object(field_type_17,c_value,info,(_Bool)0);
                std_move(field_type_17,right_type,right_value,info);
                if(child_field_is_pointer) {
                    __dec_obj67=((struct CVALUE* )come_null_checker(come_value_20, "23field.nc", 269))->c_value,
                    ((struct CVALUE* )come_null_checker(come_value_20, "23field.nc", 269))->c_value=(char* )come_increment_ref_count(xsprintf("%s->%s->%s=%s",((struct CVALUE* )come_null_checker(left_value, "23field.nc", 269))->c_value,child_field_name,name,((struct CVALUE* )come_null_checker(right_value, "23field.nc", 269))->c_value));
                    __dec_obj67 = come_decrement_ref_count(__dec_obj67, (void*)0, (void*)0, 0,0, (void*)0);
                }
                else {
                    __dec_obj68=((struct CVALUE* )come_null_checker(come_value_20, "23field.nc", 272))->c_value,
                    ((struct CVALUE* )come_null_checker(come_value_20, "23field.nc", 272))->c_value=(char* )come_increment_ref_count(xsprintf("%s->%s.%s=%s",((struct CVALUE* )come_null_checker(left_value, "23field.nc", 272))->c_value,child_field_name,name,((struct CVALUE* )come_null_checker(right_value, "23field.nc", 272))->c_value));
                    __dec_obj68 = come_decrement_ref_count(__dec_obj68, (void*)0, (void*)0, 0,0, (void*)0);
                }
                (c_value = come_decrement_ref_count(c_value, (void*)0, (void*)0, 0, 0, (void*)0));
            }
            else {
                c_value_21=(char* )come_increment_ref_count(xsprintf("%s->%s",((struct CVALUE* )come_null_checker(left_value, "23field.nc", 276))->c_value,name));
                decrement_ref_count_object(field_type_17,c_value_21,info,(_Bool)0);
                std_move(field_type_17,right_type,right_value,info);
                __dec_obj69=((struct CVALUE* )come_null_checker(come_value_20, "23field.nc", 279))->c_value,
                ((struct CVALUE* )come_null_checker(come_value_20, "23field.nc", 279))->c_value=(char* )come_increment_ref_count(xsprintf("%s->%s=%s",((struct CVALUE* )come_null_checker(left_value, "23field.nc", 279))->c_value,name,((struct CVALUE* )come_null_checker(right_value, "23field.nc", 279))->c_value));
                __dec_obj69 = come_decrement_ref_count(__dec_obj69, (void*)0, (void*)0, 0,0, (void*)0);
                (c_value_21 = come_decrement_ref_count(c_value_21, (void*)0, (void*)0, 0, 0, (void*)0));
            }
        }
        else if(((struct sType* )come_null_checker(((struct CVALUE* )come_null_checker(left_value, "23field.nc", 282))->type, "23field.nc", 282))->mPointerNum==0) {
            if(child_field_name) {
                if(child_field_is_pointer) {
                    __dec_obj70=c_value_22,
                    c_value_22=(char* )come_increment_ref_count(xsprintf("%s.%s->%s",((struct CVALUE* )come_null_checker(left_value, "23field.nc", 286))->c_value,child_field_name,name));
                    __dec_obj70 = come_decrement_ref_count(__dec_obj70, (void*)0, (void*)0, 0,0, (void*)0);
                }
                else {
                    __dec_obj71=c_value_22,
                    c_value_22=(char* )come_increment_ref_count(xsprintf("%s.%s.%s",((struct CVALUE* )come_null_checker(left_value, "23field.nc", 289))->c_value,child_field_name,name));
                    __dec_obj71 = come_decrement_ref_count(__dec_obj71, (void*)0, (void*)0, 0,0, (void*)0);
                }
                decrement_ref_count_object(field_type_17,c_value_22,info,(_Bool)0);
                std_move(field_type_17,right_type,right_value,info);
                if(child_field_is_pointer) {
                    __dec_obj72=((struct CVALUE* )come_null_checker(come_value_20, "23field.nc", 294))->c_value,
                    ((struct CVALUE* )come_null_checker(come_value_20, "23field.nc", 294))->c_value=(char* )come_increment_ref_count(xsprintf("%s.%s->%s=%s",((struct CVALUE* )come_null_checker(left_value, "23field.nc", 294))->c_value,child_field_name,name,((struct CVALUE* )come_null_checker(right_value, "23field.nc", 294))->c_value));
                    __dec_obj72 = come_decrement_ref_count(__dec_obj72, (void*)0, (void*)0, 0,0, (void*)0);
                }
                else {
                    __dec_obj73=((struct CVALUE* )come_null_checker(come_value_20, "23field.nc", 297))->c_value,
                    ((struct CVALUE* )come_null_checker(come_value_20, "23field.nc", 297))->c_value=(char* )come_increment_ref_count(xsprintf("%s.%s.%s=%s",((struct CVALUE* )come_null_checker(left_value, "23field.nc", 297))->c_value,child_field_name,name,((struct CVALUE* )come_null_checker(right_value, "23field.nc", 297))->c_value));
                    __dec_obj73 = come_decrement_ref_count(__dec_obj73, (void*)0, (void*)0, 0,0, (void*)0);
                }
                (c_value_22 = come_decrement_ref_count(c_value_22, (void*)0, (void*)0, 0, 0, (void*)0));
            }
            else {
                c_value_23=(char* )come_increment_ref_count(xsprintf("%s.%s",((struct CVALUE* )come_null_checker(left_value, "23field.nc", 301))->c_value,name));
                decrement_ref_count_object(field_type_17,c_value_23,info,(_Bool)0);
                std_move(field_type_17,((struct CVALUE* )come_null_checker(right_value, "23field.nc", 303))->type,right_value,info);
                __dec_obj74=((struct CVALUE* )come_null_checker(come_value_20, "23field.nc", 304))->c_value,
                ((struct CVALUE* )come_null_checker(come_value_20, "23field.nc", 304))->c_value=(char* )come_increment_ref_count(xsprintf("%s.%s=%s",((struct CVALUE* )come_null_checker(left_value, "23field.nc", 304))->c_value,name,((struct CVALUE* )come_null_checker(right_value, "23field.nc", 304))->c_value));
                __dec_obj74 = come_decrement_ref_count(__dec_obj74, (void*)0, (void*)0, 0,0, (void*)0);
                (c_value_23 = come_decrement_ref_count(c_value_23, (void*)0, (void*)0, 0, 0, (void*)0));
            }
        }
        else {
            err_msg(info,"Invalid left_type. The field name is %s. The pointer num is %d.(X)",name,((struct sType* )come_null_checker(((struct CVALUE* )come_null_checker(left_value, "23field.nc", 308))->type, "23field.nc", 308))->mPointerNum);
            __result_obj__0 = (_Bool)1;
            ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(CVALUE_finalize, right_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, right_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, left_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, left_type3, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sClass_finalize, klass, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (child_field_name = come_decrement_ref_count(child_field_name, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sType_finalize, field_type_17, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(CVALUE_finalize, come_value_20, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
    }
    else if(((struct sType* )come_null_checker(field_type_17, "23field.nc", 312))->mHeap&&((struct sType* )come_null_checker(field_type_17, "23field.nc", 312))->mPointerNum>0&&((struct sType* )come_null_checker(right_type, "23field.nc", 312))->mPointerNum>0&&string_operator_equals(((char* )come_null_checker(((struct sClass* )come_null_checker(((struct sType* )come_null_checker(right_type, "23field.nc", 312))->mClass, "23field.nc", 312))->mName, "23field.nc", 312)),"void")) {
        if(((struct sType* )come_null_checker(((struct CVALUE* )come_null_checker(left_value, "23field.nc", 314))->type, "23field.nc", 314))->mPointerNum==1||((struct sType* )come_null_checker(((struct CVALUE* )come_null_checker(left_value, "23field.nc", 314))->type, "23field.nc", 314))->mArrayPointerNum==1) {
            if(child_field_name) {
                if(child_field_is_pointer) {
                    __dec_obj75=c_value_24,
                    c_value_24=(char* )come_increment_ref_count(xsprintf("%s->%s->%s",((struct CVALUE* )come_null_checker(left_value, "23field.nc", 318))->c_value,child_field_name,name));
                    __dec_obj75 = come_decrement_ref_count(__dec_obj75, (void*)0, (void*)0, 0,0, (void*)0);
                }
                else {
                    __dec_obj76=c_value_24,
                    c_value_24=(char* )come_increment_ref_count(xsprintf("%s->%s.%s",((struct CVALUE* )come_null_checker(left_value, "23field.nc", 321))->c_value,child_field_name,name));
                    __dec_obj76 = come_decrement_ref_count(__dec_obj76, (void*)0, (void*)0, 0,0, (void*)0);
                }
                decrement_ref_count_object(field_type_17,c_value_24,info,(_Bool)0);
                if(child_field_is_pointer) {
                    __dec_obj77=((struct CVALUE* )come_null_checker(come_value_20, "23field.nc", 325))->c_value,
                    ((struct CVALUE* )come_null_checker(come_value_20, "23field.nc", 325))->c_value=(char* )come_increment_ref_count(xsprintf("%s->%s->%s=%s",((struct CVALUE* )come_null_checker(left_value, "23field.nc", 325))->c_value,child_field_name,name,((struct CVALUE* )come_null_checker(right_value, "23field.nc", 325))->c_value));
                    __dec_obj77 = come_decrement_ref_count(__dec_obj77, (void*)0, (void*)0, 0,0, (void*)0);
                }
                else {
                    __dec_obj78=((struct CVALUE* )come_null_checker(come_value_20, "23field.nc", 328))->c_value,
                    ((struct CVALUE* )come_null_checker(come_value_20, "23field.nc", 328))->c_value=(char* )come_increment_ref_count(xsprintf("%s->%s.%s=%s",((struct CVALUE* )come_null_checker(left_value, "23field.nc", 328))->c_value,child_field_name,name,((struct CVALUE* )come_null_checker(right_value, "23field.nc", 328))->c_value));
                    __dec_obj78 = come_decrement_ref_count(__dec_obj78, (void*)0, (void*)0, 0,0, (void*)0);
                }
                (c_value_24 = come_decrement_ref_count(c_value_24, (void*)0, (void*)0, 0, 0, (void*)0));
            }
            else {
                c_value_25=(char* )come_increment_ref_count(xsprintf("%s->%s",((struct CVALUE* )come_null_checker(left_value, "23field.nc", 332))->c_value,name));
                decrement_ref_count_object(field_type_17,c_value_25,info,(_Bool)0);
                __dec_obj79=((struct CVALUE* )come_null_checker(come_value_20, "23field.nc", 334))->c_value,
                ((struct CVALUE* )come_null_checker(come_value_20, "23field.nc", 334))->c_value=(char* )come_increment_ref_count(xsprintf("%s->%s=%s",((struct CVALUE* )come_null_checker(left_value, "23field.nc", 334))->c_value,name,((struct CVALUE* )come_null_checker(right_value, "23field.nc", 334))->c_value));
                __dec_obj79 = come_decrement_ref_count(__dec_obj79, (void*)0, (void*)0, 0,0, (void*)0);
                (c_value_25 = come_decrement_ref_count(c_value_25, (void*)0, (void*)0, 0, 0, (void*)0));
            }
        }
        else if(((struct sType* )come_null_checker(((struct CVALUE* )come_null_checker(left_value, "23field.nc", 337))->type, "23field.nc", 337))->mPointerNum==0) {
            if(child_field_name) {
                if(child_field_is_pointer) {
                    __dec_obj80=c_value_26,
                    c_value_26=(char* )come_increment_ref_count(xsprintf("%s.%s->%s",((struct CVALUE* )come_null_checker(left_value, "23field.nc", 341))->c_value,child_field_name,name));
                    __dec_obj80 = come_decrement_ref_count(__dec_obj80, (void*)0, (void*)0, 0,0, (void*)0);
                }
                else {
                    __dec_obj81=c_value_26,
                    c_value_26=(char* )come_increment_ref_count(xsprintf("%s.%s.%s",((struct CVALUE* )come_null_checker(left_value, "23field.nc", 344))->c_value,child_field_name,name));
                    __dec_obj81 = come_decrement_ref_count(__dec_obj81, (void*)0, (void*)0, 0,0, (void*)0);
                }
                decrement_ref_count_object(field_type_17,c_value_26,info,(_Bool)0);
                if(child_field_is_pointer) {
                    __dec_obj82=((struct CVALUE* )come_null_checker(come_value_20, "23field.nc", 348))->c_value,
                    ((struct CVALUE* )come_null_checker(come_value_20, "23field.nc", 348))->c_value=(char* )come_increment_ref_count(xsprintf("%s.%s->%s=%s",((struct CVALUE* )come_null_checker(left_value, "23field.nc", 348))->c_value,child_field_name,name,((struct CVALUE* )come_null_checker(right_value, "23field.nc", 348))->c_value));
                    __dec_obj82 = come_decrement_ref_count(__dec_obj82, (void*)0, (void*)0, 0,0, (void*)0);
                }
                else {
                    __dec_obj83=((struct CVALUE* )come_null_checker(come_value_20, "23field.nc", 351))->c_value,
                    ((struct CVALUE* )come_null_checker(come_value_20, "23field.nc", 351))->c_value=(char* )come_increment_ref_count(xsprintf("%s.%s->%s=%s",((struct CVALUE* )come_null_checker(left_value, "23field.nc", 351))->c_value,child_field_name,name,((struct CVALUE* )come_null_checker(right_value, "23field.nc", 351))->c_value));
                    __dec_obj83 = come_decrement_ref_count(__dec_obj83, (void*)0, (void*)0, 0,0, (void*)0);
                }
                (c_value_26 = come_decrement_ref_count(c_value_26, (void*)0, (void*)0, 0, 0, (void*)0));
            }
            else {
                c_value_27=(char* )come_increment_ref_count(xsprintf("%s.%s",((struct CVALUE* )come_null_checker(left_value, "23field.nc", 355))->c_value,name));
                decrement_ref_count_object(field_type_17,c_value_27,info,(_Bool)0);
                __dec_obj84=((struct CVALUE* )come_null_checker(come_value_20, "23field.nc", 357))->c_value,
                ((struct CVALUE* )come_null_checker(come_value_20, "23field.nc", 357))->c_value=(char* )come_increment_ref_count(xsprintf("%s.%s=%s",((struct CVALUE* )come_null_checker(left_value, "23field.nc", 357))->c_value,name,((struct CVALUE* )come_null_checker(right_value, "23field.nc", 357))->c_value));
                __dec_obj84 = come_decrement_ref_count(__dec_obj84, (void*)0, (void*)0, 0,0, (void*)0);
                (c_value_27 = come_decrement_ref_count(c_value_27, (void*)0, (void*)0, 0, 0, (void*)0));
            }
        }
        else {
            err_msg(info,"Invalid left_type. The field name is %s. The pointer num is %d.(Y)",name,((struct sType* )come_null_checker(((struct CVALUE* )come_null_checker(left_value, "23field.nc", 361))->type, "23field.nc", 361))->mPointerNum);
            __result_obj__0 = (_Bool)1;
            ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(CVALUE_finalize, right_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, right_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, left_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, left_type3, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sClass_finalize, klass, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (child_field_name = come_decrement_ref_count(child_field_name, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sType_finalize, field_type_17, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(CVALUE_finalize, come_value_20, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
    }
    else if(((struct sType* )come_null_checker(field_type_17, "23field.nc", 365))->mChannel&&new_channel) {
        if(child_field_is_pointer) {
            __dec_obj85=((struct CVALUE* )come_null_checker(come_value_20, "23field.nc", 367))->c_value,
            ((struct CVALUE* )come_null_checker(come_value_20, "23field.nc", 367))->c_value=(char* )come_increment_ref_count(xsprintf("(pipe(%s->%s), %s);\n",((struct CVALUE* )come_null_checker(left_value, "23field.nc", 367))->c_value,name,((struct CVALUE* )come_null_checker(right_value, "23field.nc", 367))->c_value));
            __dec_obj85 = come_decrement_ref_count(__dec_obj85, (void*)0, (void*)0, 0,0, (void*)0);
        }
        else {
            __dec_obj86=((struct CVALUE* )come_null_checker(come_value_20, "23field.nc", 370))->c_value,
            ((struct CVALUE* )come_null_checker(come_value_20, "23field.nc", 370))->c_value=(char* )come_increment_ref_count(xsprintf("(pipe(%s.%s), %s);\n",((struct CVALUE* )come_null_checker(left_value, "23field.nc", 370))->c_value,name,((struct CVALUE* )come_null_checker(right_value, "23field.nc", 370))->c_value));
            __dec_obj86 = come_decrement_ref_count(__dec_obj86, (void*)0, (void*)0, 0,0, (void*)0);
        }
        __dec_obj87=((struct CVALUE* )come_null_checker(come_value_20, "23field.nc", 373))->type,
        ((struct CVALUE* )come_null_checker(come_value_20, "23field.nc", 373))->type=(struct sType* )come_increment_ref_count(sType_clone(((struct CVALUE* )come_null_checker(right_value, "23field.nc", 373))->type));
        come_call_finalizer(sType_finalize, __dec_obj87,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((struct CVALUE* )come_null_checker(come_value_20, "23field.nc", 374))->var=((void*)0);
        list$1CVALUE$ph_push_back(((struct list$1CVALUE$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "23field.nc", 376))->stack, "23field.nc", 376)),(struct CVALUE* )come_increment_ref_count(come_value_20));
        add_come_last_code(info,"%s",((struct CVALUE* )come_null_checker(come_value_20, "23field.nc", 378))->c_value);
        __result_obj__0 = (_Bool)1;
        ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(CVALUE_finalize, right_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, right_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, left_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, left_type3, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sClass_finalize, klass, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (child_field_name = come_decrement_ref_count(child_field_name, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sType_finalize, field_type_17, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(CVALUE_finalize, come_value_20, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    else {
        if(((struct sType* )come_null_checker(((struct CVALUE* )come_null_checker(left_value, "23field.nc", 383))->type, "23field.nc", 383))->mPointerNum==1||((struct sType* )come_null_checker(((struct CVALUE* )come_null_checker(left_value, "23field.nc", 383))->type, "23field.nc", 383))->mArrayPointerNum==1) {
            if(child_field_name) {
                if(child_field_is_pointer) {
                    __dec_obj88=((struct CVALUE* )come_null_checker(come_value_20, "23field.nc", 386))->c_value,
                    ((struct CVALUE* )come_null_checker(come_value_20, "23field.nc", 386))->c_value=(char* )come_increment_ref_count(xsprintf("%s->%s->%s=%s",((struct CVALUE* )come_null_checker(left_value, "23field.nc", 386))->c_value,child_field_name,name,((struct CVALUE* )come_null_checker(right_value, "23field.nc", 386))->c_value));
                    __dec_obj88 = come_decrement_ref_count(__dec_obj88, (void*)0, (void*)0, 0,0, (void*)0);
                }
                else {
                    __dec_obj89=((struct CVALUE* )come_null_checker(come_value_20, "23field.nc", 389))->c_value,
                    ((struct CVALUE* )come_null_checker(come_value_20, "23field.nc", 389))->c_value=(char* )come_increment_ref_count(xsprintf("%s->%s.%s=%s",((struct CVALUE* )come_null_checker(left_value, "23field.nc", 389))->c_value,child_field_name,name,((struct CVALUE* )come_null_checker(right_value, "23field.nc", 389))->c_value));
                    __dec_obj89 = come_decrement_ref_count(__dec_obj89, (void*)0, (void*)0, 0,0, (void*)0);
                }
            }
            else {
                __dec_obj90=((struct CVALUE* )come_null_checker(come_value_20, "23field.nc", 393))->c_value,
                ((struct CVALUE* )come_null_checker(come_value_20, "23field.nc", 393))->c_value=(char* )come_increment_ref_count(xsprintf("%s->%s=%s",((struct CVALUE* )come_null_checker(left_value, "23field.nc", 393))->c_value,name,((struct CVALUE* )come_null_checker(right_value, "23field.nc", 393))->c_value));
                __dec_obj90 = come_decrement_ref_count(__dec_obj90, (void*)0, (void*)0, 0,0, (void*)0);
            }
        }
        else if(((struct sType* )come_null_checker(((struct CVALUE* )come_null_checker(left_value, "23field.nc", 396))->type, "23field.nc", 396))->mPointerNum==0) {
            if(child_field_name) {
                if(child_field_is_pointer) {
                    __dec_obj91=((struct CVALUE* )come_null_checker(come_value_20, "23field.nc", 399))->c_value,
                    ((struct CVALUE* )come_null_checker(come_value_20, "23field.nc", 399))->c_value=(char* )come_increment_ref_count(xsprintf("%s.%s->%s=%s",((struct CVALUE* )come_null_checker(left_value, "23field.nc", 399))->c_value,child_field_name,name,((struct CVALUE* )come_null_checker(right_value, "23field.nc", 399))->c_value));
                    __dec_obj91 = come_decrement_ref_count(__dec_obj91, (void*)0, (void*)0, 0,0, (void*)0);
                }
                else {
                    __dec_obj92=((struct CVALUE* )come_null_checker(come_value_20, "23field.nc", 402))->c_value,
                    ((struct CVALUE* )come_null_checker(come_value_20, "23field.nc", 402))->c_value=(char* )come_increment_ref_count(xsprintf("%s.%s.%s=%s",((struct CVALUE* )come_null_checker(left_value, "23field.nc", 402))->c_value,child_field_name,name,((struct CVALUE* )come_null_checker(right_value, "23field.nc", 402))->c_value));
                    __dec_obj92 = come_decrement_ref_count(__dec_obj92, (void*)0, (void*)0, 0,0, (void*)0);
                }
            }
            else {
                __dec_obj93=((struct CVALUE* )come_null_checker(come_value_20, "23field.nc", 406))->c_value,
                ((struct CVALUE* )come_null_checker(come_value_20, "23field.nc", 406))->c_value=(char* )come_increment_ref_count(xsprintf("%s.%s=%s",((struct CVALUE* )come_null_checker(left_value, "23field.nc", 406))->c_value,name,((struct CVALUE* )come_null_checker(right_value, "23field.nc", 406))->c_value));
                __dec_obj93 = come_decrement_ref_count(__dec_obj93, (void*)0, (void*)0, 0,0, (void*)0);
            }
        }
        else {
            err_msg(info,"Invalid left_type. The field name is %s. The pointer num is %d.(Z)",name,((struct sType* )come_null_checker(((struct CVALUE* )come_null_checker(left_value, "23field.nc", 410))->type, "23field.nc", 410))->mPointerNum);
            __result_obj__0 = (_Bool)1;
            ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(CVALUE_finalize, right_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, right_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, left_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, left_type3, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sClass_finalize, klass, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (child_field_name = come_decrement_ref_count(child_field_name, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sType_finalize, field_type_17, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(CVALUE_finalize, come_value_20, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
    }
    __dec_obj94=((struct CVALUE* )come_null_checker(come_value_20, "23field.nc", 415))->type,
    ((struct CVALUE* )come_null_checker(come_value_20, "23field.nc", 415))->type=(struct sType* )come_increment_ref_count(sType_clone(field_type_17));
    come_call_finalizer(sType_finalize, __dec_obj94,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    ((struct CVALUE* )come_null_checker(come_value_20, "23field.nc", 416))->var=((void*)0);
    list$1CVALUE$ph_push_back(((struct list$1CVALUE$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "23field.nc", 418))->stack, "23field.nc", 418)),(struct CVALUE* )come_increment_ref_count(come_value_20));
    add_come_last_code(info,"%s",((struct CVALUE* )come_null_checker(come_value_20, "23field.nc", 420))->c_value);
    __result_obj__0 = (_Bool)1;
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(CVALUE_finalize, right_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, right_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, left_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, left_type3, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sClass_finalize, klass, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (child_field_name = come_decrement_ref_count(child_field_name, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sType_finalize, field_type_17, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value_20, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sNodeBase_finalize(struct sNodeBase* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sNodeBase_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct sNodeBase*)come_null_checker(self, "sNodeBase_finalize", 2))->sname!=((void*)0)) {
        (((struct sNodeBase*)come_null_checker(self, "sNodeBase_finalize", 2))->sname = come_decrement_ref_count(((struct sNodeBase*)come_null_checker(self, "sNodeBase_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    neo_current_frame = fr.prev;
}

static void sStoreFieldNode_finalize(struct sStoreFieldNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sStoreFieldNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct sStoreFieldNode*)come_null_checker(self, "sStoreFieldNode_finalize", 2))->sname!=((void*)0)) {
        (((struct sStoreFieldNode*)come_null_checker(self, "sStoreFieldNode_finalize", 2))->sname = come_decrement_ref_count(((struct sStoreFieldNode*)come_null_checker(self, "sStoreFieldNode_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct sStoreFieldNode*)come_null_checker(self, "sStoreFieldNode_finalize", 3))->mLeft!=((void*)0)) {
        ((((struct sStoreFieldNode*)come_null_checker(self, "sStoreFieldNode_finalize", 3))->mLeft) ? ((struct sStoreFieldNode*)come_null_checker(self, "sStoreFieldNode_finalize", 3))->mLeft = come_decrement_ref_count(((struct sStoreFieldNode*)come_null_checker(self, "sStoreFieldNode_finalize", 3))->mLeft, ((struct sNode*)((struct sStoreFieldNode*)come_null_checker(self, "sStoreFieldNode_finalize", 3))->mLeft)->finalize, ((struct sNode*)((struct sStoreFieldNode*)come_null_checker(self, "sStoreFieldNode_finalize", 3))->mLeft)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    if(self!=((void*)0)&&((struct sStoreFieldNode*)come_null_checker(self, "sStoreFieldNode_finalize", 4))->mRight!=((void*)0)) {
        ((((struct sStoreFieldNode*)come_null_checker(self, "sStoreFieldNode_finalize", 4))->mRight) ? ((struct sStoreFieldNode*)come_null_checker(self, "sStoreFieldNode_finalize", 4))->mRight = come_decrement_ref_count(((struct sStoreFieldNode*)come_null_checker(self, "sStoreFieldNode_finalize", 4))->mRight, ((struct sNode*)((struct sStoreFieldNode*)come_null_checker(self, "sStoreFieldNode_finalize", 4))->mRight)->finalize, ((struct sNode*)((struct sStoreFieldNode*)come_null_checker(self, "sStoreFieldNode_finalize", 4))->mRight)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    if(self!=((void*)0)&&((struct sStoreFieldNode*)come_null_checker(self, "sStoreFieldNode_finalize", 5))->mName!=((void*)0)) {
        (((struct sStoreFieldNode*)come_null_checker(self, "sStoreFieldNode_finalize", 5))->mName = come_decrement_ref_count(((struct sStoreFieldNode*)come_null_checker(self, "sStoreFieldNode_finalize", 5))->mName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    neo_current_frame = fr.prev;
}

static struct sType*  list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph$p_operator_load_element"; neo_current_frame = &fr;
    struct sType*  default_value  ;
    struct sType*  __result_obj__0  ;
    struct list_item$1sType$ph* it;
    int i;
    struct sType*  default_value_14  ;
    if(self==((void*)0)) {
        memset(&default_value,0,sizeof(struct sType* ));
        __result_obj__0 = (struct sType* )come_increment_ref_count(default_value);
        neo_current_frame = fr.prev;
        come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    if(position<0) {
        position+=((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2304))->len;
    }
    it=((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2307))->head;
    i=0;
    while(it!=((void*)0)) {
        if(position==i) {
            __result_obj__0 = (struct sType* )come_increment_ref_count(((struct list_item$1sType$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 2311))->item);
            neo_current_frame = fr.prev;
            come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__0;
        }
        it=((struct list_item$1sType$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 2313))->next;
        i++;
    }
    memset(&default_value_14,0,sizeof(struct sType* ));
    __result_obj__0 = (struct sType* )come_increment_ref_count(default_value_14);
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
    struct sType*  default_value_15  ;
    if(self==((void*)0)) {
        memset(&default_value,0,sizeof(struct sType* ));
        __result_obj__0 = (struct sType* )come_increment_ref_count(default_value);
        neo_current_frame = fr.prev;
        come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    if(position<0) {
        position+=((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2304))->len;
    }
    it=((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2307))->head;
    i=0;
    while(it!=((void*)0)) {
        if(position==i) {
            __result_obj__0 = (struct sType* )come_increment_ref_count(((struct list_item$1sType$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 2311))->item);
            neo_current_frame = fr.prev;
            come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__0;
        }
        it=((struct list_item$1sType$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 2313))->next;
        i++;
    }
    memset(&default_value_15,0,sizeof(struct sType* ));
    __result_obj__0 = (struct sType* )come_increment_ref_count(default_value_15);
    neo_current_frame = fr.prev;
    come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static void CVALUE_finalize(struct CVALUE*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "CVALUE_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct CVALUE* )come_null_checker(self, "CVALUE_finalize", 2))->c_value!=((void*)0)) {
        (((struct CVALUE* )come_null_checker(self, "CVALUE_finalize", 2))->c_value = come_decrement_ref_count(((struct CVALUE* )come_null_checker(self, "CVALUE_finalize", 2))->c_value, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct CVALUE* )come_null_checker(self, "CVALUE_finalize", 3))->type!=((void*)0)) {
        come_call_finalizer(sType_finalize, ((struct CVALUE* )come_null_checker(self, "CVALUE_finalize", 3))->type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct CVALUE* )come_null_checker(self, "CVALUE_finalize", 4))->c_value_without_right_value_objects!=((void*)0)) {
        (((struct CVALUE* )come_null_checker(self, "CVALUE_finalize", 4))->c_value_without_right_value_objects = come_decrement_ref_count(((struct CVALUE* )come_null_checker(self, "CVALUE_finalize", 4))->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct CVALUE* )come_null_checker(self, "CVALUE_finalize", 5))->c_value_without_cast_object_value!=((void*)0)) {
        (((struct CVALUE* )come_null_checker(self, "CVALUE_finalize", 5))->c_value_without_cast_object_value = come_decrement_ref_count(((struct CVALUE* )come_null_checker(self, "CVALUE_finalize", 5))->c_value_without_cast_object_value, (void*)0, (void*)0, 0, 0, (void*)0));
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
        __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value);
        neo_current_frame = fr.prev;
        come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char* )come_null_checker(((char* )key), "/usr/local/include/neo-c.h", 3211)))%((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3211))->size;
    it=hash;
    while((_Bool)1) {
        if(((_Bool*)come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3215))->item_existance, "/usr/local/include/neo-c.h", 3215))[it]) {
            if(string_equals(((char* )come_null_checker(((char** )come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3217))->keys, "/usr/local/include/neo-c.h", 3217))[it], "/usr/local/include/neo-c.h", 3217)),key)) {
                __result_obj__0 = (struct sClass* )come_increment_ref_count(((struct sClass** )come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3219))->items, "/usr/local/include/neo-c.h", 3219))[it]);
                neo_current_frame = fr.prev;
                come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
            it++;
            if(it>=((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3224))->size) {
                it=0;
            }
            else if(it==hash) {
                __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value);
                neo_current_frame = fr.prev;
                come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
        }
        else {
            __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value);
            neo_current_frame = fr.prev;
            come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__0;
        }
    }
    __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value);
    neo_current_frame = fr.prev;
    come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static void sClass_finalize(struct sClass*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sClass_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct sClass* )come_null_checker(self, "sClass_finalize", 2))->mName!=((void*)0)) {
        (((struct sClass* )come_null_checker(self, "sClass_finalize", 2))->mName = come_decrement_ref_count(((struct sClass* )come_null_checker(self, "sClass_finalize", 2))->mName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct sClass* )come_null_checker(self, "sClass_finalize", 3))->mFields!=((void*)0)) {
        come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, ((struct sClass* )come_null_checker(self, "sClass_finalize", 3))->mFields, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sClass* )come_null_checker(self, "sClass_finalize", 4))->mParentClassName!=((void*)0)) {
        (((struct sClass* )come_null_checker(self, "sClass_finalize", 4))->mParentClassName = come_decrement_ref_count(((struct sClass* )come_null_checker(self, "sClass_finalize", 4))->mParentClassName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct sClass* )come_null_checker(self, "sClass_finalize", 5))->mAttribute!=((void*)0)) {
        (((struct sClass* )come_null_checker(self, "sClass_finalize", 5))->mAttribute = come_decrement_ref_count(((struct sClass* )come_null_checker(self, "sClass_finalize", 5))->mAttribute, (void*)0, (void*)0, 0, 0, (void*)0));
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
        __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value);
        neo_current_frame = fr.prev;
        come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char* )come_null_checker(((char* )key), "/usr/local/include/neo-c.h", 3211)))%((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3211))->size;
    it=hash;
    while((_Bool)1) {
        if(((_Bool*)come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3215))->item_existance, "/usr/local/include/neo-c.h", 3215))[it]) {
            if(string_equals(((char* )come_null_checker(((char** )come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3217))->keys, "/usr/local/include/neo-c.h", 3217))[it], "/usr/local/include/neo-c.h", 3217)),key)) {
                __result_obj__0 = (struct sClass* )come_increment_ref_count(((struct sClass** )come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3219))->items, "/usr/local/include/neo-c.h", 3219))[it]);
                neo_current_frame = fr.prev;
                come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
            it++;
            if(it>=((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3224))->size) {
                it=0;
            }
            else if(it==hash) {
                __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value);
                neo_current_frame = fr.prev;
                come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
        }
        else {
            __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value);
            neo_current_frame = fr.prev;
            come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__0;
        }
    }
    __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value);
    neo_current_frame = fr.prev;
    come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1CVALUE$ph_push_back"; neo_current_frame = &fr;
    struct list$1CVALUE$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1CVALUE$ph* litem;
    struct CVALUE*  __dec_obj60  ;
    struct list_item$1CVALUE$ph* litem_18;
    struct CVALUE*  __dec_obj61  ;
    struct list_item$1CVALUE$ph* litem_19;
    struct CVALUE*  __dec_obj62  ;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1768))->len==0) {
        litem=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), (void*)0, 1769, "struct list_item$1CVALUE$ph*"))));
        ((struct list_item$1CVALUE$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1771))->prev=((void*)0);
        ((struct list_item$1CVALUE$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1772))->next=((void*)0);
        __dec_obj60=((struct list_item$1CVALUE$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1773))->item,
        ((struct list_item$1CVALUE$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1773))->item=(struct CVALUE* )come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj60,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1775))->tail=litem;
        ((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1776))->head=litem;
    }
    else if(((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1778))->len==1) {
        litem_18=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), (void*)0, 1779, "struct list_item$1CVALUE$ph*"))));
        ((struct list_item$1CVALUE$ph*)come_null_checker(litem_18, "/usr/local/include/neo-c.h", 1781))->prev=((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1781))->head;
        ((struct list_item$1CVALUE$ph*)come_null_checker(litem_18, "/usr/local/include/neo-c.h", 1782))->next=((void*)0);
        __dec_obj61=((struct list_item$1CVALUE$ph*)come_null_checker(litem_18, "/usr/local/include/neo-c.h", 1783))->item,
        ((struct list_item$1CVALUE$ph*)come_null_checker(litem_18, "/usr/local/include/neo-c.h", 1783))->item=(struct CVALUE* )come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj61,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1785))->tail=litem_18;
        ((struct list_item$1CVALUE$ph*)come_null_checker(((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1786))->head, "/usr/local/include/neo-c.h", 1786))->next=litem_18;
    }
    else {
        litem_19=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), (void*)0, 1789, "struct list_item$1CVALUE$ph*"))));
        ((struct list_item$1CVALUE$ph*)come_null_checker(litem_19, "/usr/local/include/neo-c.h", 1791))->prev=((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1791))->tail;
        ((struct list_item$1CVALUE$ph*)come_null_checker(litem_19, "/usr/local/include/neo-c.h", 1792))->next=((void*)0);
        __dec_obj62=((struct list_item$1CVALUE$ph*)come_null_checker(litem_19, "/usr/local/include/neo-c.h", 1793))->item,
        ((struct list_item$1CVALUE$ph*)come_null_checker(litem_19, "/usr/local/include/neo-c.h", 1793))->item=(struct CVALUE* )come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj62,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((struct list_item$1CVALUE$ph*)come_null_checker(((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1795))->tail, "/usr/local/include/neo-c.h", 1795))->next=litem_19;
        ((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1796))->tail=litem_19;
    }
    ((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1799))->len++;
    __result_obj__0 = self;
    come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sLoadFieldNode* sLoadFieldNode_initialize(struct sLoadFieldNode* self, struct sNode* left, char*  name  , struct sInfo*  info  , _Bool arrow_)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sLoadFieldNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj95;
    char*  __dec_obj96  ;
    struct sLoadFieldNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sLoadFieldNode*)come_increment_ref_count(((struct sLoadFieldNode*)come_null_checker(self, "23field.nc", 430))),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj95=((struct sLoadFieldNode*)come_null_checker(self, "23field.nc", 432))->mLeft,
    ((struct sLoadFieldNode*)come_null_checker(self, "23field.nc", 432))->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    (__dec_obj95 ? __dec_obj95 = come_decrement_ref_count(__dec_obj95, ((struct sNode*)__dec_obj95)->finalize, ((struct sNode*)__dec_obj95)->_protocol_obj, 0,0, (void*)0) :0);
    __dec_obj96=((struct sLoadFieldNode*)come_null_checker(self, "23field.nc", 433))->mName,
    ((struct sLoadFieldNode*)come_null_checker(self, "23field.nc", 433))->mName=(char* )come_increment_ref_count(__builtin_string(name));
    __dec_obj96 = come_decrement_ref_count(__dec_obj96, (void*)0, (void*)0, 0,0, (void*)0);
    ((struct sLoadFieldNode*)come_null_checker(self, "23field.nc", 434))->mArrow=arrow_;
    __result_obj__0 = (struct sLoadFieldNode*)come_increment_ref_count(self);
    come_call_finalizer(sLoadFieldNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
    neo_current_frame = fr.prev;
    come_call_finalizer(sLoadFieldNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char*  sLoadFieldNode_kind(struct sLoadFieldNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sLoadFieldNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sLoadFieldNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool sLoadFieldNode_compile(struct sLoadFieldNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sLoadFieldNode_compile"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* left;
    char*  name  ;
    _Bool arrow_;
    _Bool Value;
    _Bool __result_obj__0;
    struct CVALUE*  left_value  ;
    struct sType*  left_type2  ;
    struct sType*  left_type3  ;
    struct sType*  __dec_obj97  ;
    struct sType*  __dec_obj98  ;
    int i;
    void* __right_value1 = (void*)0;
    _Bool _conditional_value_X0;
    char*  __dec_obj99  ;
    struct sType*  left_type  ;
    struct sType*  left_type3_  ;
    struct sType*  left_type3_28  ;
    struct sClass*  klass  ;
    void* __right_value2 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj100  ;
    char*  __dec_obj101  ;
    struct sType*  __dec_obj102  ;
    struct sType*  field_type  ;
    struct CVALUE*  come_value_29  ;
    char*  __dec_obj103  ;
    char*  __dec_obj104  ;
    struct sType*  __dec_obj105  ;
    struct CVALUE*  come_value_30  ;
    char*  __dec_obj106  ;
    char*  __dec_obj107  ;
    struct sType*  __dec_obj108  ;
    struct sType*  type_  ;
    struct sType*  __dec_obj109  ;
    struct sType*  original_load_var_type  ;
    struct sType*  __dec_obj110  ;
    struct sType*  original_load_var_type_31  ;
    struct sType*  __dec_obj111  ;
    struct sType*  original_load_var_type_32  ;
    struct sType*  __dec_obj112  ;
    struct sType*  original_load_var_type_33  ;
    struct sType*  __dec_obj113  ;
    memset(&left_type3, 0, sizeof(left_type3));
    left=(struct sNode*)come_increment_ref_count(create_null_checker((struct sNode*)come_increment_ref_count(((struct sLoadFieldNode*)come_null_checker(self, "23field.nc", 444))->mLeft),info));
    name=(char* )come_increment_ref_count(__builtin_string(((struct sLoadFieldNode*)come_null_checker(self, "23field.nc", 445))->mName));
    arrow_=((struct sLoadFieldNode*)come_null_checker(self, "23field.nc", 446))->mArrow;
    Value=node_compile(left,info);
    if(!Value) {
        __result_obj__0 = (_Bool)0;
        ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    left_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
    left_type2=(struct sType* )come_increment_ref_count(((struct CVALUE* )come_null_checker(left_value, "23field.nc", 454))->type);
    if(((struct sType* )come_null_checker(left_type2, "23field.nc", 457))->mNoSolvedGenericsType) {
        __dec_obj97=left_type3,
        left_type3=(struct sType* )come_increment_ref_count(((struct sType* )come_null_checker(left_type2, "23field.nc", 458))->mNoSolvedGenericsType);
        come_call_finalizer(sType_finalize, __dec_obj97,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        __dec_obj98=left_type3,
        left_type3=(struct sType* )come_increment_ref_count(left_type2);
        come_call_finalizer(sType_finalize, __dec_obj98,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(string_operator_equals(((char* )come_null_checker(((struct sClass* )come_null_checker(((struct sType* )come_null_checker(left_type3, "23field.nc", 463))->mClass, "23field.nc", 463))->mName, "23field.nc", 463)),"tuple1")||string_operator_equals(((char* )come_null_checker(((struct sClass* )come_null_checker(((struct sType* )come_null_checker(left_type3, "23field.nc", 463))->mClass, "23field.nc", 463))->mName, "23field.nc", 463)),"tuple2")||string_operator_equals(((char* )come_null_checker(((struct sClass* )come_null_checker(((struct sType* )come_null_checker(left_type3, "23field.nc", 463))->mClass, "23field.nc", 463))->mName, "23field.nc", 463)),"tuple3")||string_operator_equals(((char* )come_null_checker(((struct sClass* )come_null_checker(((struct sType* )come_null_checker(left_type3, "23field.nc", 463))->mClass, "23field.nc", 463))->mName, "23field.nc", 463)),"tuple3")||string_operator_equals(((char* )come_null_checker(((struct sClass* )come_null_checker(((struct sType* )come_null_checker(left_type3, "23field.nc", 463))->mClass, "23field.nc", 463))->mName, "23field.nc", 463)),"tuple4")||string_operator_equals(((char* )come_null_checker(((struct sClass* )come_null_checker(((struct sType* )come_null_checker(left_type3, "23field.nc", 463))->mClass, "23field.nc", 463))->mName, "23field.nc", 463)),"tuple5")) {
        for(i=0;i<list$1sType$ph_length(((struct list$1sType$ph*)come_null_checker(((struct sType* )come_null_checker(left_type3, "23field.nc", 465))->mGenericsTypes, "23field.nc", 465)));i++){
            if(({(_conditional_value_X0=(string_operator_equals(((char* )come_null_checker(name, "23field.nc", 466)),((struct sType* )come_null_checker(((struct sType* )(__right_value1=list$1sType$ph_operator_load_element(((struct list$1sType$ph*)come_null_checker(((struct list$1sType$ph*)come_null_checker(((struct sType* )come_null_checker(left_type3, "23field.nc", 466))->mGenericsTypes, "23field.nc", 466)), "23field.nc", 466)),i))), "23field.nc", 466))->mTupleName)));            come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer(sType_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
_conditional_value_X0;})) {
                __dec_obj99=name,
                name=(char* )come_increment_ref_count(xsprintf("v%d",i+1));
                __dec_obj99 = come_decrement_ref_count(__dec_obj99, (void*)0, (void*)0, 0,0, (void*)0);
            }
        }
    }
    left_type=(struct sType* )come_increment_ref_count(((struct CVALUE* )come_null_checker(left_value, "23field.nc", 472))->type);
    left_type3_=(struct sType* )come_increment_ref_count(solve_generics(left_type,left_type,info));
    come_call_finalizer(sType_finalize, left_type3, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    left_type3_28=(struct sType* )come_increment_ref_count(solve_method_generics(left_type3_,info));
    klass=((struct sType* )come_null_checker(left_type3_28, "23field.nc", 477))->mClass;
    klass=((struct sClass* )(__right_value2=map$2char$phsClass$ph_operator_load_element(((struct map$2char$phsClass$ph*)come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "23field.nc", 478))->classes, "23field.nc", 478)), "23field.nc", 478)),((char* )(__right_value1=__builtin_string(((struct sClass* )come_null_checker(klass, "23field.nc", 478))->mName))))));
    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
    if(klass==((void*)0)||((struct sClass* )come_null_checker(klass, "23field.nc", 480))->mFields==((void*)0)) {
        warning_msg(info,"type of %s.%s is not found. so can't check the heap type\n",((struct CVALUE* )come_null_checker(left_value, "23field.nc", 481))->c_value,name);
        come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count(((struct CVALUE* )come_null_checker(((struct CVALUE* )(__right_value0=(struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), (void*)0, 483, "struct CVALUE* "))), "23field.nc", 483)))));
        come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        if(arrow_) {
            __dec_obj100=((struct CVALUE* )come_null_checker(come_value, "23field.nc", 486))->c_value,
            ((struct CVALUE* )come_null_checker(come_value, "23field.nc", 486))->c_value=(char* )come_increment_ref_count(xsprintf("%s->%s",((struct CVALUE* )come_null_checker(left_value, "23field.nc", 486))->c_value,name));
            __dec_obj100 = come_decrement_ref_count(__dec_obj100, (void*)0, (void*)0, 0,0, (void*)0);
        }
        else {
            __dec_obj101=((struct CVALUE* )come_null_checker(come_value, "23field.nc", 489))->c_value,
            ((struct CVALUE* )come_null_checker(come_value, "23field.nc", 489))->c_value=(char* )come_increment_ref_count(xsprintf("%s.%s",((struct CVALUE* )come_null_checker(left_value, "23field.nc", 489))->c_value,name));
            __dec_obj101 = come_decrement_ref_count(__dec_obj101, (void*)0, (void*)0, 0,0, (void*)0);
        }
        __dec_obj102=((struct CVALUE* )come_null_checker(come_value, "23field.nc", 491))->type,
        ((struct CVALUE* )come_null_checker(come_value, "23field.nc", 491))->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count(((struct sType* )come_null_checker(((struct sType* )(__right_value0=(struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 491, "struct sType* "))), "23field.nc", 491))),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info,(_Bool)0,0));
        come_call_finalizer(sType_finalize, __dec_obj102,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        ((struct sType* )come_null_checker(((struct CVALUE* )come_null_checker(come_value, "23field.nc", 492))->type, "23field.nc", 492))->mPointerNum=1;
        ((struct CVALUE* )come_null_checker(come_value, "23field.nc", 493))->var=((struct CVALUE* )come_null_checker(left_value, "23field.nc", 493))->var;
        ((struct CVALUE* )come_null_checker(come_value, "23field.nc", 494))->mLoadField=(_Bool)1;
        list$1CVALUE$ph_push_back(((struct list$1CVALUE$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "23field.nc", 496))->stack, "23field.nc", 496)),(struct CVALUE* )come_increment_ref_count(come_value));
        add_come_last_code(info,"%s",((struct CVALUE* )come_null_checker(come_value, "23field.nc", 498))->c_value);
        __result_obj__0 = (_Bool)1;
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, left_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, left_type3_, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, left_type3_28, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    field_type=(struct sType* )come_increment_ref_count(get_field_type(klass,(char* )come_increment_ref_count(name),info));
    if(field_type==((void*)0)) {
        warning_msg(info,"type of %s.%s is not found. so can't check the heap type\n",((struct CVALUE* )come_null_checker(left_value, "23field.nc", 506))->c_value,name);
        come_value_29=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count(((struct CVALUE* )come_null_checker(((struct CVALUE* )(__right_value0=(struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), (void*)0, 508, "struct CVALUE* "))), "23field.nc", 508)))));
        come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        if(arrow_) {
            __dec_obj103=((struct CVALUE* )come_null_checker(come_value_29, "23field.nc", 511))->c_value,
            ((struct CVALUE* )come_null_checker(come_value_29, "23field.nc", 511))->c_value=(char* )come_increment_ref_count(xsprintf("%s->%s",((struct CVALUE* )come_null_checker(left_value, "23field.nc", 511))->c_value,name));
            __dec_obj103 = come_decrement_ref_count(__dec_obj103, (void*)0, (void*)0, 0,0, (void*)0);
        }
        else {
            __dec_obj104=((struct CVALUE* )come_null_checker(come_value_29, "23field.nc", 514))->c_value,
            ((struct CVALUE* )come_null_checker(come_value_29, "23field.nc", 514))->c_value=(char* )come_increment_ref_count(xsprintf("%s.%s",((struct CVALUE* )come_null_checker(left_value, "23field.nc", 514))->c_value,name));
            __dec_obj104 = come_decrement_ref_count(__dec_obj104, (void*)0, (void*)0, 0,0, (void*)0);
        }
        __dec_obj105=((struct CVALUE* )come_null_checker(come_value_29, "23field.nc", 516))->type,
        ((struct CVALUE* )come_null_checker(come_value_29, "23field.nc", 516))->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count(((struct sType* )come_null_checker(((struct sType* )(__right_value0=(struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 516, "struct sType* "))), "23field.nc", 516))),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info,(_Bool)0,0));
        come_call_finalizer(sType_finalize, __dec_obj105,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        ((struct sType* )come_null_checker(((struct CVALUE* )come_null_checker(come_value_29, "23field.nc", 517))->type, "23field.nc", 517))->mPointerNum=1;
        ((struct CVALUE* )come_null_checker(come_value_29, "23field.nc", 518))->var=((struct CVALUE* )come_null_checker(left_value, "23field.nc", 518))->var;
        ((struct CVALUE* )come_null_checker(come_value_29, "23field.nc", 519))->mLoadField=(_Bool)1;
        list$1CVALUE$ph_push_back(((struct list$1CVALUE$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "23field.nc", 521))->stack, "23field.nc", 521)),(struct CVALUE* )come_increment_ref_count(come_value_29));
        add_come_last_code(info,"%s",((struct CVALUE* )come_null_checker(come_value_29, "23field.nc", 523))->c_value);
        __result_obj__0 = (_Bool)1;
        come_call_finalizer(CVALUE_finalize, come_value_29, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, left_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, left_type3_, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, left_type3_28, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, field_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
        come_call_finalizer(CVALUE_finalize, come_value_29, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    come_value_30=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count(((struct CVALUE* )come_null_checker(((struct CVALUE* )(__right_value0=(struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), (void*)0, 528, "struct CVALUE* "))), "23field.nc", 528)))));
    come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    if(((struct sType* )come_null_checker(((struct CVALUE* )come_null_checker(left_value, "23field.nc", 530))->type, "23field.nc", 530))->mPointerNum>0||((struct sType* )come_null_checker(((struct CVALUE* )come_null_checker(left_value, "23field.nc", 530))->type, "23field.nc", 530))->mArrayPointerNum>0) {
        __dec_obj106=((struct CVALUE* )come_null_checker(come_value_30, "23field.nc", 531))->c_value,
        ((struct CVALUE* )come_null_checker(come_value_30, "23field.nc", 531))->c_value=(char* )come_increment_ref_count(xsprintf("%s->%s",((struct CVALUE* )come_null_checker(left_value, "23field.nc", 531))->c_value,name));
        __dec_obj106 = come_decrement_ref_count(__dec_obj106, (void*)0, (void*)0, 0,0, (void*)0);
    }
    else {
        __dec_obj107=((struct CVALUE* )come_null_checker(come_value_30, "23field.nc", 534))->c_value,
        ((struct CVALUE* )come_null_checker(come_value_30, "23field.nc", 534))->c_value=(char* )come_increment_ref_count(xsprintf("%s.%s",((struct CVALUE* )come_null_checker(left_value, "23field.nc", 534))->c_value,name));
        __dec_obj107 = come_decrement_ref_count(__dec_obj107, (void*)0, (void*)0, 0,0, (void*)0);
    }
    __dec_obj108=((struct CVALUE* )come_null_checker(come_value_30, "23field.nc", 536))->type,
    ((struct CVALUE* )come_null_checker(come_value_30, "23field.nc", 536))->type=(struct sType* )come_increment_ref_count(sType_clone(field_type));
    come_call_finalizer(sType_finalize, __dec_obj108,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    type_=(struct sType* )come_increment_ref_count(solve_generics(((struct CVALUE* )come_null_checker(come_value_30, "23field.nc", 537))->type,((struct sInfo* )come_null_checker(info, "23field.nc", 537))->generics_type,info));
    __dec_obj109=((struct CVALUE* )come_null_checker(come_value_30, "23field.nc", 538))->type,
    ((struct CVALUE* )come_null_checker(come_value_30, "23field.nc", 538))->type=(struct sType* )come_increment_ref_count(solve_method_generics(type_,info));
    come_call_finalizer(sType_finalize, __dec_obj109,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    ((struct CVALUE* )come_null_checker(come_value_30, "23field.nc", 539))->var=((struct CVALUE* )come_null_checker(left_value, "23field.nc", 539))->var;
    ((struct CVALUE* )come_null_checker(come_value_30, "23field.nc", 540))->mLoadField=(_Bool)1;
    if(list$1sNode$ph_length(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker(((struct CVALUE* )come_null_checker(come_value_30, "23field.nc", 542))->type, "23field.nc", 542))->mArrayNum, "23field.nc", 542)))>0) {
        if(((struct sInfo* )come_null_checker(info, "23field.nc", 543))->in_store_array) {
            original_load_var_type=(struct sType* )come_increment_ref_count(sType_clone(((struct CVALUE* )come_null_checker(come_value_30, "23field.nc", 544))->type));
            __dec_obj110=((struct sType* )come_null_checker(((struct CVALUE* )come_null_checker(come_value_30, "23field.nc", 545))->type, "23field.nc", 545))->mOriginalLoadVarType,
            ((struct sType* )come_null_checker(((struct CVALUE* )come_null_checker(come_value_30, "23field.nc", 545))->type, "23field.nc", 545))->mOriginalLoadVarType=(struct sType* )come_increment_ref_count(original_load_var_type);
            come_call_finalizer(sType_finalize, __dec_obj110,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, original_load_var_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(((struct sInfo* )come_null_checker(info, "23field.nc", 547))->in_typeof) {
            original_load_var_type_31=(struct sType* )come_increment_ref_count(sType_clone(((struct CVALUE* )come_null_checker(come_value_30, "23field.nc", 548))->type));
            __dec_obj111=((struct sType* )come_null_checker(((struct CVALUE* )come_null_checker(come_value_30, "23field.nc", 549))->type, "23field.nc", 549))->mOriginalLoadVarType,
            ((struct sType* )come_null_checker(((struct CVALUE* )come_null_checker(come_value_30, "23field.nc", 549))->type, "23field.nc", 549))->mOriginalLoadVarType=(struct sType* )come_increment_ref_count(original_load_var_type_31);
            come_call_finalizer(sType_finalize, __dec_obj111,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, original_load_var_type_31, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(((struct sInfo* )come_null_checker(info, "23field.nc", 551))->in_refference) {
            original_load_var_type_32=(struct sType* )come_increment_ref_count(sType_clone(((struct CVALUE* )come_null_checker(come_value_30, "23field.nc", 552))->type));
            __dec_obj112=((struct sType* )come_null_checker(((struct CVALUE* )come_null_checker(come_value_30, "23field.nc", 553))->type, "23field.nc", 553))->mOriginalLoadVarType,
            ((struct sType* )come_null_checker(((struct CVALUE* )come_null_checker(come_value_30, "23field.nc", 553))->type, "23field.nc", 553))->mOriginalLoadVarType=(struct sType* )come_increment_ref_count(original_load_var_type_32);
            come_call_finalizer(sType_finalize, __dec_obj112,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            ((struct sType* )come_null_checker(((struct CVALUE* )come_null_checker(come_value_30, "23field.nc", 556))->type, "23field.nc", 556))->mArrayPointerNum++;
            come_call_finalizer(sType_finalize, original_load_var_type_32, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            original_load_var_type_33=(struct sType* )come_increment_ref_count(sType_clone(((struct CVALUE* )come_null_checker(come_value_30, "23field.nc", 559))->type));
            __dec_obj113=((struct sType* )come_null_checker(((struct CVALUE* )come_null_checker(come_value_30, "23field.nc", 560))->type, "23field.nc", 560))->mOriginalLoadVarType,
            ((struct sType* )come_null_checker(((struct CVALUE* )come_null_checker(come_value_30, "23field.nc", 560))->type, "23field.nc", 560))->mOriginalLoadVarType=(struct sType* )come_increment_ref_count(original_load_var_type_33);
            come_call_finalizer(sType_finalize, __dec_obj113,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            list$1sNode$ph_delete(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker(((struct CVALUE* )come_null_checker(come_value_30, "23field.nc", 563))->type, "23field.nc", 563))->mArrayNum, "23field.nc", 563)),0,1);
            ((struct sType* )come_null_checker(((struct CVALUE* )come_null_checker(come_value_30, "23field.nc", 564))->type, "23field.nc", 564))->mArrayPointerNum++;
            come_call_finalizer(sType_finalize, original_load_var_type_33, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    list$1CVALUE$ph_push_back(((struct list$1CVALUE$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "23field.nc", 568))->stack, "23field.nc", 568)),(struct CVALUE* )come_increment_ref_count(come_value_30));
    __result_obj__0 = (_Bool)1;
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, left_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, left_type3_, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, left_type3_28, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, field_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value_30, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type_, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sLoadFieldNode_finalize(struct sLoadFieldNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sLoadFieldNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct sLoadFieldNode*)come_null_checker(self, "sLoadFieldNode_finalize", 2))->sname!=((void*)0)) {
        (((struct sLoadFieldNode*)come_null_checker(self, "sLoadFieldNode_finalize", 2))->sname = come_decrement_ref_count(((struct sLoadFieldNode*)come_null_checker(self, "sLoadFieldNode_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct sLoadFieldNode*)come_null_checker(self, "sLoadFieldNode_finalize", 3))->mLeft!=((void*)0)) {
        ((((struct sLoadFieldNode*)come_null_checker(self, "sLoadFieldNode_finalize", 3))->mLeft) ? ((struct sLoadFieldNode*)come_null_checker(self, "sLoadFieldNode_finalize", 3))->mLeft = come_decrement_ref_count(((struct sLoadFieldNode*)come_null_checker(self, "sLoadFieldNode_finalize", 3))->mLeft, ((struct sNode*)((struct sLoadFieldNode*)come_null_checker(self, "sLoadFieldNode_finalize", 3))->mLeft)->finalize, ((struct sNode*)((struct sLoadFieldNode*)come_null_checker(self, "sLoadFieldNode_finalize", 3))->mLeft)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    if(self!=((void*)0)&&((struct sLoadFieldNode*)come_null_checker(self, "sLoadFieldNode_finalize", 4))->mName!=((void*)0)) {
        (((struct sLoadFieldNode*)come_null_checker(self, "sLoadFieldNode_finalize", 4))->mName = come_decrement_ref_count(((struct sLoadFieldNode*)come_null_checker(self, "sLoadFieldNode_finalize", 4))->mName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    neo_current_frame = fr.prev;
}

static struct list$1sNode$ph* list$1sNode$ph_delete(struct list$1sNode$ph* self, int head, int tail)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_delete"; neo_current_frame = &fr;
    struct list$1sNode$ph* __result_obj__0;
    int tmp;
    struct list_item$1sNode$ph* it;
    int i;
    struct list_item$1sNode$ph* prev_it;
    struct list_item$1sNode$ph* it_34;
    int i_35;
    struct list_item$1sNode$ph* prev_it_36;
    struct list_item$1sNode$ph* it_37;
    struct list_item$1sNode$ph* head_prev_it;
    struct list_item$1sNode$ph* tail_it;
    int i_38;
    struct list_item$1sNode$ph* prev_it_39;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(head<0) {
        head+=((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2042))->len;
    }
    if(tail<0) {
        tail+=((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2045))->len+1;
    }
    if(head>tail) {
        tmp=tail;
        tail=head;
        head=tmp;
    }
    if(head<0) {
        head=0;
    }
    if(tail>((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2058))->len) {
        tail=((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2059))->len;
    }
    if(head>=((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2062))->len) {
        __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(head==tail) {
        __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(head==0&&tail==((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2070))->len) {
        list$1sNode$ph_reset(((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2072)));
    }
    else if(head==0) {
        it=((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2075))->head;
        i=0;
        while(it!=((void*)0)) {
            if(i<tail) {
                prev_it=it;
                it=((struct list_item$1sNode$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 2081))->next;
                i++;
                come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                ((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2086))->len--;
            }
            else if(i==tail) {
                ((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2089))->head=it;
                ((struct list_item$1sNode$ph*)come_null_checker(((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2090))->head, "/usr/local/include/neo-c.h", 2090))->prev=((void*)0);
                break;
            }
            else {
                it=((struct list_item$1sNode$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 2094))->next;
                i++;
            }
        }
    }
    else if(tail==((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2099))->len) {
        it_34=((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2100))->head;
        i_35=0;
        while(it_34!=((void*)0)) {
            if(i_35==head) {
                ((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2104))->tail=((struct list_item$1sNode$ph*)come_null_checker(it_34, "/usr/local/include/neo-c.h", 2104))->prev;
                ((struct list_item$1sNode$ph*)come_null_checker(((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2105))->tail, "/usr/local/include/neo-c.h", 2105))->next=((void*)0);
            }
            if(i_35>=head) {
                prev_it_36=it_34;
                it_34=((struct list_item$1sNode$ph*)come_null_checker(it_34, "/usr/local/include/neo-c.h", 2111))->next;
                i_35++;
                come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it_36, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                ((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2116))->len--;
            }
            else {
                it_34=((struct list_item$1sNode$ph*)come_null_checker(it_34, "/usr/local/include/neo-c.h", 2119))->next;
                i_35++;
            }
        }
    }
    else {
        it_37=((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2125))->head;
        head_prev_it=((void*)0);
        tail_it=((void*)0);
        i_38=0;
        while(it_37!=((void*)0)) {
            if(i_38==head) {
                head_prev_it=((struct list_item$1sNode$ph*)come_null_checker(it_37, "/usr/local/include/neo-c.h", 2134))->prev;
            }
            if(i_38==tail) {
                tail_it=it_37;
            }
            if(i_38>=head&&i_38<tail) {
                prev_it_39=it_37;
                it_37=((struct list_item$1sNode$ph*)come_null_checker(it_37, "/usr/local/include/neo-c.h", 2144))->next;
                i_38++;
                come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it_39, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                ((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2149))->len--;
            }
            else {
                it_37=((struct list_item$1sNode$ph*)come_null_checker(it_37, "/usr/local/include/neo-c.h", 2152))->next;
                i_38++;
            }
        }
        if(head_prev_it!=((void*)0)) {
            ((struct list_item$1sNode$ph*)come_null_checker(head_prev_it, "/usr/local/include/neo-c.h", 2158))->next=tail_it;
        }
        if(tail_it!=((void*)0)) {
            ((struct list_item$1sNode$ph*)come_null_checker(tail_it, "/usr/local/include/neo-c.h", 2161))->prev=head_prev_it;
        }
    }
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
    it=((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2002))->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=((struct list_item$1sNode$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 2005))->next;
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    ((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2009))->head=((void*)0);
    ((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2010))->tail=((void*)0);
    ((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2012))->len=0;
    __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sUnwrapNode* sUnwrapNode_initialize(struct sUnwrapNode* self, struct sNode* node, struct sInfo*  info  , _Bool check, _Bool no_unwrap)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sUnwrapNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj114;
    struct sUnwrapNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sUnwrapNode*)come_increment_ref_count(((struct sUnwrapNode*)come_null_checker(self, "23field.nc", 578))),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj114=((struct sUnwrapNode*)come_null_checker(self, "23field.nc", 580))->node,
    ((struct sUnwrapNode*)come_null_checker(self, "23field.nc", 580))->node=(struct sNode*)come_increment_ref_count(sNode_clone(node));
    (__dec_obj114 ? __dec_obj114 = come_decrement_ref_count(__dec_obj114, ((struct sNode*)__dec_obj114)->finalize, ((struct sNode*)__dec_obj114)->_protocol_obj, 0,0, (void*)0) :0);
    ((struct sUnwrapNode*)come_null_checker(self, "23field.nc", 581))->check=check;
    ((struct sUnwrapNode*)come_null_checker(self, "23field.nc", 582))->no_unwrap=no_unwrap;
    __result_obj__0 = (struct sUnwrapNode*)come_increment_ref_count(self);
    come_call_finalizer(sUnwrapNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sUnwrapNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char*  sUnwrapNode_kind(struct sUnwrapNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sUnwrapNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sUnwrapNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool sUnwrapNode_compile(struct sUnwrapNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sUnwrapNode_compile"; neo_current_frame = &fr;
    struct sNode* node;
    _Bool check;
    _Bool no_unwrap;
    _Bool Value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE*  come_value  ;
    struct sNode* obj;
    void* __right_value1 = (void*)0;
    struct list$1tuple2$2char$phsNode$ph$ph* params;
    void* __right_value2 = (void*)0;
    struct sNode* node_40;
    _Bool Value_41;
    node=(struct sNode*)come_increment_ref_count(((struct sUnwrapNode*)come_null_checker(self, "23field.nc", 592))->node);
    check=((struct sUnwrapNode*)come_null_checker(self, "23field.nc", 594))->check;
    no_unwrap=((struct sUnwrapNode*)come_null_checker(self, "23field.nc", 594))->no_unwrap;
    Value=node_compile(node,info);
    if(!Value) {
        __result_obj__0 = (_Bool)0;
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
    if(no_unwrap||((struct sInfo* )come_null_checker(info, "23field.nc", 607))->come_fun&&((strlen(((struct sFun* )come_null_checker(((struct sInfo* )come_null_checker(info, "23field.nc", 607))->come_fun, "23field.nc", 607))->mName)>strlen("ref$")&&memcmp(((struct sFun* )come_null_checker(((struct sInfo* )come_null_checker(info, "23field.nc", 607))->come_fun, "23field.nc", 607))->mName,"ref$",strlen("ref$"))==0)||(strlen(((struct sFun* )come_null_checker(((struct sInfo* )come_null_checker(info, "23field.nc", 607))->come_fun, "23field.nc", 607))->mName)>strlen("optional$")&&memcmp(((struct sFun* )come_null_checker(((struct sInfo* )come_null_checker(info, "23field.nc", 607))->come_fun, "23field.nc", 607))->mName,"optional$",strlen("optional$"))==0)||(strlen(((struct sFun* )come_null_checker(((struct sInfo* )come_null_checker(info, "23field.nc", 607))->come_fun, "23field.nc", 607))->mName)>strlen("slice$")&&memcmp(((struct sFun* )come_null_checker(((struct sInfo* )come_null_checker(info, "23field.nc", 607))->come_fun, "23field.nc", 607))->mName,"slice$",strlen("slice$"))==0)||(strlen(((struct sFun* )come_null_checker(((struct sInfo* )come_null_checker(info, "23field.nc", 607))->come_fun, "23field.nc", 607))->mName)>strlen("span$")&&memcmp(((struct sFun* )come_null_checker(((struct sInfo* )come_null_checker(info, "23field.nc", 607))->come_fun, "23field.nc", 607))->mName,"span$",strlen("span$"))==0))) {
        list$1CVALUE$ph_push_back(((struct list$1CVALUE$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "23field.nc", 609))->stack, "23field.nc", 609)),(struct CVALUE* )come_increment_ref_count(come_value));
    }
    else if(((struct sType* )come_null_checker(((struct CVALUE* )come_null_checker(come_value, "23field.nc", 611))->type, "23field.nc", 611))->mNoSolvedGenericsType) {
        if(string_operator_equals(((char* )come_null_checker(((struct sClass* )come_null_checker(((struct sType* )come_null_checker(((struct sType* )come_null_checker(((struct CVALUE* )come_null_checker(come_value, "23field.nc", 612))->type, "23field.nc", 612))->mNoSolvedGenericsType, "23field.nc", 612))->mClass, "23field.nc", 612))->mName, "23field.nc", 612)),"ref")||string_operator_equals(((char* )come_null_checker(((struct sClass* )come_null_checker(((struct sType* )come_null_checker(((struct sType* )come_null_checker(((struct CVALUE* )come_null_checker(come_value, "23field.nc", 612))->type, "23field.nc", 612))->mNoSolvedGenericsType, "23field.nc", 612))->mClass, "23field.nc", 612))->mName, "23field.nc", 612)),"optional")||string_operator_equals(((char* )come_null_checker(((struct sClass* )come_null_checker(((struct sType* )come_null_checker(((struct sType* )come_null_checker(((struct CVALUE* )come_null_checker(come_value, "23field.nc", 612))->type, "23field.nc", 612))->mNoSolvedGenericsType, "23field.nc", 612))->mClass, "23field.nc", 612))->mName, "23field.nc", 612)),"slice")||string_operator_equals(((char* )come_null_checker(((struct sClass* )come_null_checker(((struct sType* )come_null_checker(((struct sType* )come_null_checker(((struct CVALUE* )come_null_checker(come_value, "23field.nc", 612))->type, "23field.nc", 612))->mNoSolvedGenericsType, "23field.nc", 612))->mClass, "23field.nc", 612))->mName, "23field.nc", 612)),"span")) {
            obj=(struct sNode*)come_increment_ref_count(node);
            params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(((struct list$1tuple2$2char$phsNode$ph$ph*)(__right_value0=(struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), (void*)0, 615, "struct list$1tuple2$2char$phsNode$ph$ph*"))), "23field.nc", 615)))));
            come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            const char* fun_name="unwrap";
            list$1tuple2$2char$phsNode$ph$ph_add(((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(params, "23field.nc", 619)),(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "23field.nc", 619, "struct tuple2$2char$phsNode$ph")),(char* )come_increment_ref_count((char* )((void*)0)),(struct sNode*)come_increment_ref_count(node))));
            if(check) {
                list$1tuple2$2char$phsNode$ph$ph_add(((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(params, "23field.nc", 621)),(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "23field.nc", 621, "struct tuple2$2char$phsNode$ph")),(char* )come_increment_ref_count((char* )((void*)0)),(struct sNode*)come_increment_ref_count(create_true_object(info)))));
            }
            else {
                list$1tuple2$2char$phsNode$ph$ph_add(((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(params, "23field.nc", 624)),(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "23field.nc", 624, "struct tuple2$2char$phsNode$ph")),(char* )come_increment_ref_count((char* )((void*)0)),(struct sNode*)come_increment_ref_count(create_false_object(info)))));
            }
            node_40=(struct sNode*)come_increment_ref_count(create_method_call(fun_name,(struct sNode*)come_increment_ref_count(obj),params,((void*)0),0,((void*)0),info,(_Bool)0));
            Value_41=node_compile(node_40,info);
            if(Value_41) {
                __result_obj__0 = (_Bool)1;
                ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                ((node_40) ? node_40 = come_decrement_ref_count(node_40, ((struct sNode*)node_40)->finalize, ((struct sNode*)node_40)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
            ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            ((node_40) ? node_40 = come_decrement_ref_count(node_40, ((struct sNode*)node_40)->finalize, ((struct sNode*)node_40)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
        else {
            list$1CVALUE$ph_push_back(((struct list$1CVALUE$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "23field.nc", 634))->stack, "23field.nc", 634)),(struct CVALUE* )come_increment_ref_count(come_value));
        }
    }
    else {
        list$1CVALUE$ph_push_back(((struct list$1CVALUE$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "23field.nc", 638))->stack, "23field.nc", 638)),(struct CVALUE* )come_increment_ref_count(come_value));
    }
    __result_obj__0 = (_Bool)1;
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sUnwrapNode_finalize(struct sUnwrapNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sUnwrapNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct sUnwrapNode*)come_null_checker(self, "sUnwrapNode_finalize", 2))->sname!=((void*)0)) {
        (((struct sUnwrapNode*)come_null_checker(self, "sUnwrapNode_finalize", 2))->sname = come_decrement_ref_count(((struct sUnwrapNode*)come_null_checker(self, "sUnwrapNode_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct sUnwrapNode*)come_null_checker(self, "sUnwrapNode_finalize", 3))->node!=((void*)0)) {
        ((((struct sUnwrapNode*)come_null_checker(self, "sUnwrapNode_finalize", 3))->node) ? ((struct sUnwrapNode*)come_null_checker(self, "sUnwrapNode_finalize", 3))->node = come_decrement_ref_count(((struct sUnwrapNode*)come_null_checker(self, "sUnwrapNode_finalize", 3))->node, ((struct sNode*)((struct sUnwrapNode*)come_null_checker(self, "sUnwrapNode_finalize", 3))->node)->finalize, ((struct sNode*)((struct sUnwrapNode*)come_null_checker(self, "sUnwrapNode_finalize", 3))->node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    neo_current_frame = fr.prev;
}

struct sNode* automatically_unwrap(struct sNode* node, struct sInfo*  info  , _Bool check, _Bool no_unwrap)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "automatically_unwrap"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value1;
    struct sUnwrapNode* _inf_obj_value1;
    void* __right_value2 = (void*)0;
    struct sNode* __result_obj__0;
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 648, "struct sNode");
    _inf_obj_value1=(struct sUnwrapNode*)come_increment_ref_count(((struct sUnwrapNode*)(__right_value1=sUnwrapNode_initialize((struct sUnwrapNode* )come_increment_ref_count(((struct sUnwrapNode* )come_null_checker(((struct sUnwrapNode* )(__right_value0=(struct sUnwrapNode *)come_calloc(1, sizeof(struct sUnwrapNode )*(1), (void*)0, 648, "struct sUnwrapNode* "))), "23field.nc", 648))),(struct sNode*)come_increment_ref_count(node),info,check,no_unwrap))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sUnwrapNode_finalize;
    _inf_value1->clone=(void*)sUnwrapNode_clone;
    _inf_value1->compile=(void*)sUnwrapNode_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sline_real=(void*)sNodeBase_sline_real;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sNodeBase_terminated;
    _inf_value1->kind=(void*)sUnwrapNode_kind;
    __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value1)));
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(sUnwrapNode_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer(sUnwrapNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    return __result_obj__0;
}

static struct sUnwrapNode* sUnwrapNode_clone(struct sUnwrapNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sUnwrapNode_clone"; neo_current_frame = &fr;
    struct sUnwrapNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sUnwrapNode*  result  ;
    char*  __dec_obj115  ;
    struct sNode* __dec_obj116;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sUnwrapNode* )come_increment_ref_count((struct sUnwrapNode *)come_calloc(1, sizeof(struct sUnwrapNode )*(1), (void*)0, 5, "struct sUnwrapNode* "));
    if(self!=((void*)0)) {
        ((struct sUnwrapNode* )come_null_checker(result, "sUnwrapNode_clone", 6))->sline=((struct sUnwrapNode*)come_null_checker(self, "sUnwrapNode_clone", 6))->sline;
    }
    if(self!=((void*)0)&&((struct sUnwrapNode*)come_null_checker(self, "sUnwrapNode_clone", 7))->sname!=((void*)0)) {
        __dec_obj115=((struct sUnwrapNode* )come_null_checker(result, "sUnwrapNode_clone", 7))->sname,
        ((struct sUnwrapNode* )come_null_checker(result, "sUnwrapNode_clone", 7))->sname=(char* )come_increment_ref_count((char* )come_memdup(((struct sUnwrapNode*)come_null_checker(self, "sUnwrapNode_clone", 7))->sname, "sUnwrapNode_clone", 7, "char* "));
        __dec_obj115 = come_decrement_ref_count(__dec_obj115, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        ((struct sUnwrapNode* )come_null_checker(result, "sUnwrapNode_clone", 8))->sline_real=((struct sUnwrapNode*)come_null_checker(self, "sUnwrapNode_clone", 8))->sline_real;
    }
    if(self!=((void*)0)&&((struct sUnwrapNode*)come_null_checker(self, "sUnwrapNode_clone", 9))->node!=((void*)0)) {
        __dec_obj116=((struct sUnwrapNode* )come_null_checker(result, "sUnwrapNode_clone", 9))->node,
        ((struct sUnwrapNode* )come_null_checker(result, "sUnwrapNode_clone", 9))->node=(struct sNode*)come_increment_ref_count(sNode_clone(((struct sUnwrapNode*)come_null_checker(self, "sUnwrapNode_clone", 9))->node));
        (__dec_obj116 ? __dec_obj116 = come_decrement_ref_count(__dec_obj116, ((struct sNode*)__dec_obj116)->finalize, ((struct sNode*)__dec_obj116)->_protocol_obj, 0,0, (void*)0) :0);
    }
    if(self!=((void*)0)) {
        ((struct sUnwrapNode* )come_null_checker(result, "sUnwrapNode_clone", 10))->check=((struct sUnwrapNode*)come_null_checker(self, "sUnwrapNode_clone", 10))->check;
    }
    if(self!=((void*)0)) {
        ((struct sUnwrapNode* )come_null_checker(result, "sUnwrapNode_clone", 11))->no_unwrap=((struct sUnwrapNode*)come_null_checker(self, "sUnwrapNode_clone", 11))->no_unwrap;
    }
    __result_obj__0 = result;
    come_call_finalizer(sUnwrapNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sNode* load_field(struct sNode* left, char*  name  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "load_field"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* left2;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value2;
    struct sLoadFieldNode* _inf_obj_value2;
    void* __right_value2 = (void*)0;
    struct sNode* __result_obj__0;
    left2=(struct sNode*)come_increment_ref_count(automatically_unwrap((struct sNode*)come_increment_ref_count(left),info,(_Bool)1,(_Bool)0));
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 654, "struct sNode");
    _inf_obj_value2=(struct sLoadFieldNode*)come_increment_ref_count(((struct sLoadFieldNode*)(__right_value1=sLoadFieldNode_initialize((struct sLoadFieldNode* )come_increment_ref_count(((struct sLoadFieldNode* )come_null_checker(((struct sLoadFieldNode* )(__right_value0=(struct sLoadFieldNode *)come_calloc(1, sizeof(struct sLoadFieldNode )*(1), (void*)0, 654, "struct sLoadFieldNode* "))), "23field.nc", 654))),left2,(char* )come_increment_ref_count(name),info,(_Bool)0))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sLoadFieldNode_finalize;
    _inf_value2->clone=(void*)sLoadFieldNode_clone;
    _inf_value2->compile=(void*)sLoadFieldNode_compile;
    _inf_value2->sline=(void*)sNodeBase_sline;
    _inf_value2->sline_real=(void*)sNodeBase_sline_real;
    _inf_value2->sname=(void*)sNodeBase_sname;
    _inf_value2->terminated=(void*)sNodeBase_terminated;
    _inf_value2->kind=(void*)sLoadFieldNode_kind;
    __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value2)));
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
    ((left2) ? left2 = come_decrement_ref_count(left2, ((struct sNode*)left2)->finalize, ((struct sNode*)left2)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(sLoadFieldNode_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer(sLoadFieldNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    return __result_obj__0;
}

static struct sLoadFieldNode* sLoadFieldNode_clone(struct sLoadFieldNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sLoadFieldNode_clone"; neo_current_frame = &fr;
    struct sLoadFieldNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sLoadFieldNode*  result  ;
    char*  __dec_obj117  ;
    struct sNode* __dec_obj118;
    char*  __dec_obj119  ;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sLoadFieldNode* )come_increment_ref_count((struct sLoadFieldNode *)come_calloc(1, sizeof(struct sLoadFieldNode )*(1), (void*)0, 5, "struct sLoadFieldNode* "));
    if(self!=((void*)0)) {
        ((struct sLoadFieldNode* )come_null_checker(result, "sLoadFieldNode_clone", 6))->sline=((struct sLoadFieldNode*)come_null_checker(self, "sLoadFieldNode_clone", 6))->sline;
    }
    if(self!=((void*)0)&&((struct sLoadFieldNode*)come_null_checker(self, "sLoadFieldNode_clone", 7))->sname!=((void*)0)) {
        __dec_obj117=((struct sLoadFieldNode* )come_null_checker(result, "sLoadFieldNode_clone", 7))->sname,
        ((struct sLoadFieldNode* )come_null_checker(result, "sLoadFieldNode_clone", 7))->sname=(char* )come_increment_ref_count((char* )come_memdup(((struct sLoadFieldNode*)come_null_checker(self, "sLoadFieldNode_clone", 7))->sname, "sLoadFieldNode_clone", 7, "char* "));
        __dec_obj117 = come_decrement_ref_count(__dec_obj117, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        ((struct sLoadFieldNode* )come_null_checker(result, "sLoadFieldNode_clone", 8))->sline_real=((struct sLoadFieldNode*)come_null_checker(self, "sLoadFieldNode_clone", 8))->sline_real;
    }
    if(self!=((void*)0)&&((struct sLoadFieldNode*)come_null_checker(self, "sLoadFieldNode_clone", 9))->mLeft!=((void*)0)) {
        __dec_obj118=((struct sLoadFieldNode* )come_null_checker(result, "sLoadFieldNode_clone", 9))->mLeft,
        ((struct sLoadFieldNode* )come_null_checker(result, "sLoadFieldNode_clone", 9))->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(((struct sLoadFieldNode*)come_null_checker(self, "sLoadFieldNode_clone", 9))->mLeft));
        (__dec_obj118 ? __dec_obj118 = come_decrement_ref_count(__dec_obj118, ((struct sNode*)__dec_obj118)->finalize, ((struct sNode*)__dec_obj118)->_protocol_obj, 0,0, (void*)0) :0);
    }
    if(self!=((void*)0)&&((struct sLoadFieldNode*)come_null_checker(self, "sLoadFieldNode_clone", 10))->mName!=((void*)0)) {
        __dec_obj119=((struct sLoadFieldNode* )come_null_checker(result, "sLoadFieldNode_clone", 10))->mName,
        ((struct sLoadFieldNode* )come_null_checker(result, "sLoadFieldNode_clone", 10))->mName=(char* )come_increment_ref_count((char* )come_memdup(((struct sLoadFieldNode*)come_null_checker(self, "sLoadFieldNode_clone", 10))->mName, "sLoadFieldNode_clone", 10, "char* "));
        __dec_obj119 = come_decrement_ref_count(__dec_obj119, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        ((struct sLoadFieldNode* )come_null_checker(result, "sLoadFieldNode_clone", 11))->mArrow=((struct sLoadFieldNode*)come_null_checker(self, "sLoadFieldNode_clone", 11))->mArrow;
    }
    __result_obj__0 = result;
    come_call_finalizer(sLoadFieldNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sStoreArrayNode* sStoreArrayNode_initialize(struct sStoreArrayNode* self, struct sNode* left, struct sNode* right, struct list$1sNode$ph* array_num, _Bool quote, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sStoreArrayNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj120;
    struct sNode* __dec_obj121;
    struct list$1sNode$ph* __dec_obj122;
    struct sStoreArrayNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sStoreArrayNode*)come_increment_ref_count(((struct sStoreArrayNode*)come_null_checker(self, "23field.nc", 661))),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj120=((struct sStoreArrayNode*)come_null_checker(self, "23field.nc", 663))->mLeft,
    ((struct sStoreArrayNode*)come_null_checker(self, "23field.nc", 663))->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    (__dec_obj120 ? __dec_obj120 = come_decrement_ref_count(__dec_obj120, ((struct sNode*)__dec_obj120)->finalize, ((struct sNode*)__dec_obj120)->_protocol_obj, 0,0, (void*)0) :0);
    __dec_obj121=((struct sStoreArrayNode*)come_null_checker(self, "23field.nc", 664))->mRight,
    ((struct sStoreArrayNode*)come_null_checker(self, "23field.nc", 664))->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    (__dec_obj121 ? __dec_obj121 = come_decrement_ref_count(__dec_obj121, ((struct sNode*)__dec_obj121)->finalize, ((struct sNode*)__dec_obj121)->_protocol_obj, 0,0, (void*)0) :0);
    __dec_obj122=((struct sStoreArrayNode*)come_null_checker(self, "23field.nc", 665))->mArrayNum,
    ((struct sStoreArrayNode*)come_null_checker(self, "23field.nc", 665))->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(array_num));
    come_call_finalizer(list$1sNode$ph_finalize, __dec_obj122,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    ((struct sStoreArrayNode*)come_null_checker(self, "23field.nc", 666))->mQuote=quote;
    __result_obj__0 = (struct sStoreArrayNode*)come_increment_ref_count(self);
    come_call_finalizer(sStoreArrayNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, array_num, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sStoreArrayNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char*  sStoreArrayNode_kind(struct sStoreArrayNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sStoreArrayNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sStoreArrayNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool sStoreArrayNode_compile(struct sStoreArrayNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sStoreArrayNode_compile"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* left;
    struct sNode* right;
    struct list$1sNode$ph* array_num_nodes;
    _Bool Value;
    _Bool __result_obj__0;
    struct CVALUE*  left_value  ;
    struct sType*  left_type  ;
    void* __right_value1 = (void*)0;
    struct list$1CVALUE$ph* array_num;
    struct list$1sNode$ph* o2_saved;
    struct sNode* it;
    _Bool Value_44;
    struct CVALUE*  c_value  ;
    struct tuple3$3char$phsFun$psGenericsFun$p* multiple_assign_var3
;    char*  fun_name2  =0;
    struct sFun*  operator_fun  =0;
    struct sGenericsFun*  generics_fun  =0;
    _Bool Value_45;
    struct CVALUE*  right_value  ;
    struct sType*  right_type  ;
    struct sClass*  klass  ;
    struct sType*  type  ;
    _Bool calling_fun;
    struct sNode* middle;
    struct CVALUE*  come_value  ;
    struct sType*  original_load_var_type  ;
    int i;
    struct sType*  __dec_obj123  ;
    struct buffer*  buf  ;
    struct list$1CVALUE$ph* o2_saved_50;
    struct CVALUE*  it_52  ;
    char*  left_value_code  ;
    char*  __dec_obj124  ;
    char*  __dec_obj125  ;
    char*  __dec_obj126  ;
    char*  __dec_obj127  ;
    struct sType*  result_type  ;
    struct list$1sNode$ph* __dec_obj128;
    struct sType*  __dec_obj129  ;
    struct sType*  type_  ;
    struct sType*  __dec_obj130  ;
    memset(&calling_fun, 0, sizeof(calling_fun));
    left=(struct sNode*)come_increment_ref_count(create_null_checker((struct sNode*)come_increment_ref_count(((struct sStoreArrayNode*)come_null_checker(self, "23field.nc", 676))->mLeft),info));
    right=(struct sNode*)come_increment_ref_count(((struct sStoreArrayNode*)come_null_checker(self, "23field.nc", 677))->mRight);
    array_num_nodes=(struct list$1sNode$ph*)come_increment_ref_count(((struct sStoreArrayNode*)come_null_checker(self, "23field.nc", 678))->mArrayNum);
    ((struct sInfo* )come_null_checker(info, "23field.nc", 680))->in_store_array=(_Bool)1;
    Value=node_compile(left,info);
    if(!Value) {
        __result_obj__0 = (_Bool)0;
        ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(list$1sNode$ph$p_finalize, array_num_nodes, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    ((struct sInfo* )come_null_checker(info, "23field.nc", 684))->in_store_array=(_Bool)0;
    left_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
    left_type=(struct sType* )come_increment_ref_count(((struct CVALUE* )come_null_checker(left_value, "23field.nc", 688))->type);
    array_num=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count(((struct list$1CVALUE$ph*)come_null_checker(((struct list$1CVALUE$ph*)(__right_value0=(struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), (void*)0, 690, "struct list$1CVALUE$ph*"))), "23field.nc", 690)))));
    come_call_finalizer(list$1CVALUE$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    for(o2_saved=(struct list$1sNode$ph*)come_increment_ref_count(array_num_nodes),it=list$1sNode$ph_begin(((struct list$1sNode$ph*)come_null_checker(o2_saved, "23field.nc", 692)));!list$1sNode$ph_end(((struct list$1sNode$ph*)come_null_checker(o2_saved, "23field.nc", 692)));it=list$1sNode$ph_next(((struct list$1sNode$ph*)come_null_checker(o2_saved, "23field.nc", 692)))){
        Value_44=node_compile(it,info);
        if(!Value_44) {
            __result_obj__0 = (_Bool)0;
            come_call_finalizer(list$1sNode$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            come_call_finalizer(list$1sNode$ph$p_finalize, array_num_nodes, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, left_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(list$1CVALUE$ph$p_finalize, array_num, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        c_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
        list$1CVALUE$ph_push_back(((struct list$1CVALUE$ph*)come_null_checker(array_num, "23field.nc", 699)),(struct CVALUE* )come_increment_ref_count(c_value));
        come_call_finalizer(CVALUE_finalize, c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer(list$1sNode$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    const char* fun_name="operator_store_element";
    multiple_assign_var3=((struct tuple3$3char$phsFun$psGenericsFun$p*)(__right_value0=get_method(fun_name,left_type,info)));
    fun_name2=(char* )come_increment_ref_count(multiple_assign_var3->v1);
    operator_fun=multiple_assign_var3->v2;
    generics_fun=multiple_assign_var3->v3;
    come_call_finalizer(tuple3$3char$phsFun$psGenericsFun$p$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    Value_45=node_compile(right,info);
    if(!Value_45) {
        __result_obj__0 = (_Bool)0;
        ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(list$1sNode$ph$p_finalize, array_num_nodes, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, left_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1CVALUE$ph$p_finalize, array_num, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (fun_name2 = come_decrement_ref_count(fun_name2, (void*)0, (void*)0, 0, 0, (void*)0));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    right_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
    right_type=((struct CVALUE* )come_null_checker(right_value, "23field.nc", 711))->type;
    klass=((struct sType* )come_null_checker(((struct CVALUE* )come_null_checker(left_value, "23field.nc", 713))->type, "23field.nc", 713))->mClass;
    type=(struct sType* )come_increment_ref_count(sType_clone(((struct CVALUE* )come_null_checker(left_value, "23field.nc", 715))->type));
    if(((struct sStoreArrayNode*)come_null_checker(self, "23field.nc", 718))->mQuote) {
        calling_fun=(_Bool)0;
    }
    else {
        middle=(struct sNode*)come_increment_ref_count(list$1sNode$ph_operator_load_element(((struct list$1sNode$ph*)come_null_checker(((struct list$1sNode$ph*)come_null_checker(array_num_nodes, "23field.nc", 722)), "23field.nc", 722)),0));
        calling_fun=operator_overload_fun2(type,fun_name,(struct sNode*)come_increment_ref_count(left),(struct sNode*)come_increment_ref_count(middle),(struct sNode*)come_increment_ref_count(right),left_value,((struct CVALUE* )(__right_value0=list$1CVALUE$ph_operator_load_element(((struct list$1CVALUE$ph*)come_null_checker(((struct list$1CVALUE$ph*)come_null_checker(array_num, "23field.nc", 723)), "23field.nc", 723)),0))),right_value,info);
        come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        ((middle) ? middle = come_decrement_ref_count(middle, ((struct sNode*)middle)->finalize, ((struct sNode*)middle)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    if(!calling_fun) {
        if(gComeSafe) {
            err_msg(info,"LoadArray is not safe code");
            __result_obj__0 = (_Bool)0;
            ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            come_call_finalizer(list$1sNode$ph$p_finalize, array_num_nodes, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, left_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(list$1CVALUE$ph$p_finalize, array_num, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (fun_name2 = come_decrement_ref_count(fun_name2, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(CVALUE_finalize, right_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count(((struct CVALUE* )come_null_checker(((struct CVALUE* )(__right_value0=(struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), (void*)0, 731, "struct CVALUE* "))), "23field.nc", 731)))));
        come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        original_load_var_type=(struct sType* )come_increment_ref_count(sType_clone(left_type));
        if(list$1sNode$ph_length(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker(left_type, "23field.nc", 734))->mArrayNum, "23field.nc", 734)))>0) {
            for(i=0;i<list$1CVALUE$ph_length(((struct list$1CVALUE$ph*)come_null_checker(array_num, "23field.nc", 735)));i++){
                list$1sNode$ph_delete(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker(left_type, "23field.nc", 736))->mArrayNum, "23field.nc", 736)),-1,-1);
            }
        }
        else if(((struct sType* )come_null_checker(left_type, "23field.nc", 739))->mPointerNum>0) {
            ((struct sType* )come_null_checker(left_type, "23field.nc", 740))->mPointerNum-=list$1CVALUE$ph_length(((struct list$1CVALUE$ph*)come_null_checker(array_num, "23field.nc", 740)));
            if(((struct sType* )come_null_checker(left_type, "23field.nc", 742))->mPointerNum<0) {
                ((struct sType* )come_null_checker(left_type, "23field.nc", 743))->mPointerNum=0;
            }
        }
        if(((struct sType* )come_null_checker(left_type, "23field.nc", 747))->mArrayPointerNum>0) {
            ((struct sType* )come_null_checker(left_type, "23field.nc", 748))->mArrayPointerNum-=list$1CVALUE$ph_length(((struct list$1CVALUE$ph*)come_null_checker(array_num, "23field.nc", 748)));
            if(((struct sType* )come_null_checker(left_type, "23field.nc", 749))->mArrayPointerNum<0) {
                ((struct sType* )come_null_checker(left_type, "23field.nc", 750))->mArrayPointerNum=0;
            }
            if(((struct sType* )come_null_checker(left_type, "23field.nc", 752))->mArrayPointerNum==0) {
                ((struct sType* )come_null_checker(left_type, "23field.nc", 753))->mArrayPointerType=(_Bool)0;
            }
        }
        if(list$1CVALUE$ph_length(((struct list$1CVALUE$ph*)come_null_checker(array_num, "23field.nc", 757)))>0) {
            __dec_obj123=((struct sType* )come_null_checker(left_type, "23field.nc", 758))->mOriginalLoadVarType,
            ((struct sType* )come_null_checker(left_type, "23field.nc", 758))->mOriginalLoadVarType=(struct sType* )come_increment_ref_count(original_load_var_type);
            come_call_finalizer(sType_finalize, __dec_obj123,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count(((struct buffer* )come_null_checker(((struct buffer* )(__right_value0=(struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 761, "struct buffer* "))), "23field.nc", 761)))));
        come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        buffer_append_str(((struct buffer* )come_null_checker(buf, "23field.nc", 763)),((struct CVALUE* )come_null_checker(left_value, "23field.nc", 763))->c_value);
        for(o2_saved_50=(struct list$1CVALUE$ph*)come_increment_ref_count(array_num),it_52=list$1CVALUE$ph_begin(((struct list$1CVALUE$ph*)come_null_checker(o2_saved_50, "23field.nc", 765)));!list$1CVALUE$ph_end(((struct list$1CVALUE$ph*)come_null_checker(o2_saved_50, "23field.nc", 765)));it_52=list$1CVALUE$ph_next(((struct list$1CVALUE$ph*)come_null_checker(o2_saved_50, "23field.nc", 765)))){
            buffer_append_format(((struct buffer* )come_null_checker(buf, "23field.nc", 766)),"[%s]",((struct CVALUE* )come_null_checker(it_52, "23field.nc", 766))->c_value);
        }
        come_call_finalizer(list$1CVALUE$ph$p_finalize, o2_saved_50, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        left_value_code=(char* )come_increment_ref_count(buffer_to_string(((struct buffer* )come_null_checker(buf, "23field.nc", 769))));
        check_assign_type(((char*)(__right_value0=xsprintf("array is assinged to(2)"))),left_type,right_type,right_value,info);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        if(((struct sType* )come_null_checker(left_type, "23field.nc", 772))->mHeap&&((struct sType* )come_null_checker(right_type, "23field.nc", 772))->mHeap&&((struct sType* )come_null_checker(left_type, "23field.nc", 772))->mArrayPointerNum>0&&((struct sType* )come_null_checker(right_type, "23field.nc", 772))->mPointerNum>0) {
            decrement_ref_count_object(left_type,left_value_code,info,(_Bool)0);
            std_move(left_type,right_type,right_value,info);
            __dec_obj124=((struct CVALUE* )come_null_checker(come_value, "23field.nc", 776))->c_value,
            ((struct CVALUE* )come_null_checker(come_value, "23field.nc", 776))->c_value=(char* )come_increment_ref_count(xsprintf("%s=%s",left_value_code,((struct CVALUE* )come_null_checker(right_value, "23field.nc", 776))->c_value));
            __dec_obj124 = come_decrement_ref_count(__dec_obj124, (void*)0, (void*)0, 0,0, (void*)0);
        }
        else {
            if(((struct sType* )come_null_checker(((struct CVALUE* )come_null_checker(left_value, "23field.nc", 779))->type, "23field.nc", 779))->mPointerNum>=1) {
                __dec_obj125=((struct CVALUE* )come_null_checker(come_value, "23field.nc", 780))->c_value,
                ((struct CVALUE* )come_null_checker(come_value, "23field.nc", 780))->c_value=(char* )come_increment_ref_count(xsprintf("%s=%s",left_value_code,((struct CVALUE* )come_null_checker(right_value, "23field.nc", 780))->c_value));
                __dec_obj125 = come_decrement_ref_count(__dec_obj125, (void*)0, (void*)0, 0,0, (void*)0);
            }
            else if(((struct sType* )come_null_checker(((struct CVALUE* )come_null_checker(left_value, "23field.nc", 782))->type, "23field.nc", 782))->mPointerNum==0) {
                __dec_obj126=((struct CVALUE* )come_null_checker(come_value, "23field.nc", 783))->c_value,
                ((struct CVALUE* )come_null_checker(come_value, "23field.nc", 783))->c_value=(char* )come_increment_ref_count(xsprintf("%s=%s",left_value_code,((struct CVALUE* )come_null_checker(right_value, "23field.nc", 783))->c_value));
                __dec_obj126 = come_decrement_ref_count(__dec_obj126, (void*)0, (void*)0, 0,0, (void*)0);
            }
            else {
                __dec_obj127=((struct CVALUE* )come_null_checker(come_value, "23field.nc", 786))->c_value,
                ((struct CVALUE* )come_null_checker(come_value, "23field.nc", 786))->c_value=(char* )come_increment_ref_count(xsprintf("%s=%s",left_value_code,((struct CVALUE* )come_null_checker(right_value, "23field.nc", 786))->c_value));
                __dec_obj127 = come_decrement_ref_count(__dec_obj127, (void*)0, (void*)0, 0,0, (void*)0);
            }
        }
        result_type=(struct sType* )come_increment_ref_count(sType_clone(left_type));
        __dec_obj128=((struct sType* )come_null_checker(result_type, "23field.nc", 792))->mArrayNum,
        ((struct sType* )come_null_checker(result_type, "23field.nc", 792))->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count(((struct list$1sNode$ph*)come_null_checker(((struct list$1sNode$ph*)(__right_value0=(struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), (void*)0, 792, "struct list$1sNode$ph*"))), "23field.nc", 792)))));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj128,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1sNode$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        __dec_obj129=((struct CVALUE* )come_null_checker(come_value, "23field.nc", 793))->type,
        ((struct CVALUE* )come_null_checker(come_value, "23field.nc", 793))->type=(struct sType* )come_increment_ref_count(result_type);
        come_call_finalizer(sType_finalize, __dec_obj129,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((struct CVALUE* )come_null_checker(come_value, "23field.nc", 794))->var=((void*)0);
        type_=(struct sType* )come_increment_ref_count(solve_generics(((struct CVALUE* )come_null_checker(come_value, "23field.nc", 796))->type,((struct sInfo* )come_null_checker(info, "23field.nc", 796))->generics_type,info));
        __dec_obj130=((struct CVALUE* )come_null_checker(come_value, "23field.nc", 797))->type,
        ((struct CVALUE* )come_null_checker(come_value, "23field.nc", 797))->type=(struct sType* )come_increment_ref_count(solve_method_generics(type_,info));
        come_call_finalizer(sType_finalize, __dec_obj130,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        list$1CVALUE$ph_push_back(((struct list$1CVALUE$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "23field.nc", 799))->stack, "23field.nc", 799)),(struct CVALUE* )come_increment_ref_count(come_value));
        add_come_last_code(info,"%s",((struct CVALUE* )come_null_checker(come_value, "23field.nc", 801))->c_value);
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, original_load_var_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (left_value_code = come_decrement_ref_count(left_value_code, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, type_, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result_obj__0 = (_Bool)1;
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, array_num_nodes, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, left_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1CVALUE$ph$p_finalize, array_num, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (fun_name2 = come_decrement_ref_count(fun_name2, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(CVALUE_finalize, right_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sStoreArrayNode_finalize(struct sStoreArrayNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sStoreArrayNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct sStoreArrayNode*)come_null_checker(self, "sStoreArrayNode_finalize", 2))->sname!=((void*)0)) {
        (((struct sStoreArrayNode*)come_null_checker(self, "sStoreArrayNode_finalize", 2))->sname = come_decrement_ref_count(((struct sStoreArrayNode*)come_null_checker(self, "sStoreArrayNode_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct sStoreArrayNode*)come_null_checker(self, "sStoreArrayNode_finalize", 3))->mLeft!=((void*)0)) {
        ((((struct sStoreArrayNode*)come_null_checker(self, "sStoreArrayNode_finalize", 3))->mLeft) ? ((struct sStoreArrayNode*)come_null_checker(self, "sStoreArrayNode_finalize", 3))->mLeft = come_decrement_ref_count(((struct sStoreArrayNode*)come_null_checker(self, "sStoreArrayNode_finalize", 3))->mLeft, ((struct sNode*)((struct sStoreArrayNode*)come_null_checker(self, "sStoreArrayNode_finalize", 3))->mLeft)->finalize, ((struct sNode*)((struct sStoreArrayNode*)come_null_checker(self, "sStoreArrayNode_finalize", 3))->mLeft)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    if(self!=((void*)0)&&((struct sStoreArrayNode*)come_null_checker(self, "sStoreArrayNode_finalize", 4))->mRight!=((void*)0)) {
        ((((struct sStoreArrayNode*)come_null_checker(self, "sStoreArrayNode_finalize", 4))->mRight) ? ((struct sStoreArrayNode*)come_null_checker(self, "sStoreArrayNode_finalize", 4))->mRight = come_decrement_ref_count(((struct sStoreArrayNode*)come_null_checker(self, "sStoreArrayNode_finalize", 4))->mRight, ((struct sNode*)((struct sStoreArrayNode*)come_null_checker(self, "sStoreArrayNode_finalize", 4))->mRight)->finalize, ((struct sNode*)((struct sStoreArrayNode*)come_null_checker(self, "sStoreArrayNode_finalize", 4))->mRight)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    if(self!=((void*)0)&&((struct sStoreArrayNode*)come_null_checker(self, "sStoreArrayNode_finalize", 5))->mArrayNum!=((void*)0)) {
        come_call_finalizer(list$1sNode$ph$p_finalize, ((struct sStoreArrayNode*)come_null_checker(self, "sStoreArrayNode_finalize", 5))->mArrayNum, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_initialize(struct list$1CVALUE$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1CVALUE$ph_initialize"; neo_current_frame = &fr;
    struct list$1CVALUE$ph* __result_obj__0;
    ((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1631))->head=((void*)0);
    ((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1632))->tail=((void*)0);
    ((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1633))->len=0;
    __result_obj__0 = (struct list$1CVALUE$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1CVALUE$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1CVALUE$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
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
    it=((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1652))->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=((struct list_item$1CVALUE$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1655))->next;
        come_call_finalizer(list_item$1CVALUE$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

static void list_item$1CVALUE$ph$p_finalize(struct list_item$1CVALUE$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1CVALUE$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct list_item$1CVALUE$ph*)come_null_checker(self, "list_item$1CVALUE$ph$p_finalize", 2))->item!=((void*)0)) {
        come_call_finalizer(CVALUE_finalize, ((struct list_item$1CVALUE$ph*)come_null_checker(self, "list_item$1CVALUE$ph$p_finalize", 2))->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

static struct sNode* list$1sNode$ph_begin(struct list$1sNode$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_begin"; neo_current_frame = &fr;
    struct sNode* result;
    struct sNode* __result_obj__0;
    struct sNode* result_42;
    if(self==((void*)0)) {
        memset(&result,0,sizeof(struct sNode*));
        __result_obj__0 = result;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    ((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1839))->it=((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1839))->head;
    if(((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1841))->it) {
        __result_obj__0 = ((struct list_item$1sNode$ph*)come_null_checker(((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1842))->it, "/usr/local/include/neo-c.h", 1842))->item;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    memset(&result_42,0,sizeof(struct sNode*));
    __result_obj__0 = result_42;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static _Bool list$1sNode$ph_end(struct list$1sNode$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_end"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return self==((void*)0)||((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1871))->it==((void*)0);
    neo_current_frame = fr.prev;
}

static struct sNode* list$1sNode$ph_next(struct list$1sNode$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_next"; neo_current_frame = &fr;
    struct sNode* result;
    struct sNode* __result_obj__0;
    struct sNode* result_43;
    if(self==((void*)0)||((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1853))->it==((void*)0)) {
        memset(&result,0,sizeof(struct sNode*));
        __result_obj__0 = result;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    ((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1859))->it=((struct list_item$1sNode$ph*)come_null_checker(((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1859))->it, "/usr/local/include/neo-c.h", 1859))->next;
    if(((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1861))->it) {
        __result_obj__0 = ((struct list_item$1sNode$ph*)come_null_checker(((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1862))->it, "/usr/local/include/neo-c.h", 1862))->item;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    memset(&result_43,0,sizeof(struct sNode*));
    __result_obj__0 = result_43;
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
    struct sNode* default_value_46;
    if(self==((void*)0)) {
        memset(&default_value,0,sizeof(struct sNode*));
        __result_obj__0 = (struct sNode*)come_increment_ref_count(default_value);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__0;
    }
    if(position<0) {
        position+=((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2304))->len;
    }
    it=((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2307))->head;
    i=0;
    while(it!=((void*)0)) {
        if(position==i) {
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct list_item$1sNode$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 2311))->item);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__0;
        }
        it=((struct list_item$1sNode$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 2313))->next;
        i++;
    }
    memset(&default_value_46,0,sizeof(struct sNode*));
    __result_obj__0 = (struct sNode*)come_increment_ref_count(default_value_46);
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
    struct sNode* default_value_47;
    if(self==((void*)0)) {
        memset(&default_value,0,sizeof(struct sNode*));
        __result_obj__0 = (struct sNode*)come_increment_ref_count(default_value);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__0;
    }
    if(position<0) {
        position+=((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2304))->len;
    }
    it=((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2307))->head;
    i=0;
    while(it!=((void*)0)) {
        if(position==i) {
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct list_item$1sNode$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 2311))->item);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__0;
        }
        it=((struct list_item$1sNode$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 2313))->next;
        i++;
    }
    memset(&default_value_47,0,sizeof(struct sNode*));
    __result_obj__0 = (struct sNode*)come_increment_ref_count(default_value_47);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    return __result_obj__0;
}

static struct CVALUE*  list$1CVALUE$ph$p_operator_load_element(struct list$1CVALUE$ph* self, int position)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1CVALUE$ph$p_operator_load_element"; neo_current_frame = &fr;
    struct CVALUE*  default_value  ;
    struct CVALUE*  __result_obj__0  ;
    struct list_item$1CVALUE$ph* it;
    int i;
    struct CVALUE*  default_value_48  ;
    if(self==((void*)0)) {
        memset(&default_value,0,sizeof(struct CVALUE* ));
        __result_obj__0 = (struct CVALUE* )come_increment_ref_count(default_value);
        neo_current_frame = fr.prev;
        come_call_finalizer(CVALUE_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    if(position<0) {
        position+=((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2304))->len;
    }
    it=((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2307))->head;
    i=0;
    while(it!=((void*)0)) {
        if(position==i) {
            __result_obj__0 = (struct CVALUE* )come_increment_ref_count(((struct list_item$1CVALUE$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 2311))->item);
            neo_current_frame = fr.prev;
            come_call_finalizer(CVALUE_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__0;
        }
        it=((struct list_item$1CVALUE$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 2313))->next;
        i++;
    }
    memset(&default_value_48,0,sizeof(struct CVALUE* ));
    __result_obj__0 = (struct CVALUE* )come_increment_ref_count(default_value_48);
    neo_current_frame = fr.prev;
    come_call_finalizer(CVALUE_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct CVALUE*  list$1CVALUE$ph_operator_load_element(struct list$1CVALUE$ph* self, int position)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1CVALUE$ph_operator_load_element"; neo_current_frame = &fr;
    struct CVALUE*  default_value  ;
    struct CVALUE*  __result_obj__0  ;
    struct list_item$1CVALUE$ph* it;
    int i;
    struct CVALUE*  default_value_49  ;
    if(self==((void*)0)) {
        memset(&default_value,0,sizeof(struct CVALUE* ));
        __result_obj__0 = (struct CVALUE* )come_increment_ref_count(default_value);
        neo_current_frame = fr.prev;
        come_call_finalizer(CVALUE_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    if(position<0) {
        position+=((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2304))->len;
    }
    it=((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2307))->head;
    i=0;
    while(it!=((void*)0)) {
        if(position==i) {
            __result_obj__0 = (struct CVALUE* )come_increment_ref_count(((struct list_item$1CVALUE$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 2311))->item);
            neo_current_frame = fr.prev;
            come_call_finalizer(CVALUE_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__0;
        }
        it=((struct list_item$1CVALUE$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 2313))->next;
        i++;
    }
    memset(&default_value_49,0,sizeof(struct CVALUE* ));
    __result_obj__0 = (struct CVALUE* )come_increment_ref_count(default_value_49);
    neo_current_frame = fr.prev;
    come_call_finalizer(CVALUE_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
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
    return ((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1922))->len;
    neo_current_frame = fr.prev;
}

static struct CVALUE*  list$1CVALUE$ph_begin(struct list$1CVALUE$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1CVALUE$ph_begin"; neo_current_frame = &fr;
    struct CVALUE*  result  ;
    struct CVALUE*  __result_obj__0  ;
    struct CVALUE*  result_51  ;
    if(self==((void*)0)) {
        memset(&result,0,sizeof(struct CVALUE* ));
        __result_obj__0 = result;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    ((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1839))->it=((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1839))->head;
    if(((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1841))->it) {
        __result_obj__0 = ((struct list_item$1CVALUE$ph*)come_null_checker(((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1842))->it, "/usr/local/include/neo-c.h", 1842))->item;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    memset(&result_51,0,sizeof(struct CVALUE* ));
    __result_obj__0 = result_51;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static _Bool list$1CVALUE$ph_end(struct list$1CVALUE$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1CVALUE$ph_end"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return self==((void*)0)||((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1871))->it==((void*)0);
    neo_current_frame = fr.prev;
}

static struct CVALUE*  list$1CVALUE$ph_next(struct list$1CVALUE$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1CVALUE$ph_next"; neo_current_frame = &fr;
    struct CVALUE*  result  ;
    struct CVALUE*  __result_obj__0  ;
    struct CVALUE*  result_53  ;
    if(self==((void*)0)||((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1853))->it==((void*)0)) {
        memset(&result,0,sizeof(struct CVALUE* ));
        __result_obj__0 = result;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    ((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1859))->it=((struct list_item$1CVALUE$ph*)come_null_checker(((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1859))->it, "/usr/local/include/neo-c.h", 1859))->next;
    if(((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1861))->it) {
        __result_obj__0 = ((struct list_item$1CVALUE$ph*)come_null_checker(((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1862))->it, "/usr/local/include/neo-c.h", 1862))->item;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    memset(&result_53,0,sizeof(struct CVALUE* ));
    __result_obj__0 = result_53;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sLoadArrayNode* sLoadArrayNode_initialize(struct sLoadArrayNode* self, struct sNode* left, struct list$1sNode$ph* array_num, _Bool quote, _Bool break_guard, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sLoadArrayNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct list$1sNode$ph* __dec_obj131;
    struct sNode* __dec_obj132;
    struct sLoadArrayNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sLoadArrayNode*)come_increment_ref_count(((struct sLoadArrayNode*)come_null_checker(self, "23field.nc", 812))),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj131=((struct sLoadArrayNode*)come_null_checker(self, "23field.nc", 814))->mArrayNum,
    ((struct sLoadArrayNode*)come_null_checker(self, "23field.nc", 814))->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(array_num));
    come_call_finalizer(list$1sNode$ph_finalize, __dec_obj131,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    ((struct sLoadArrayNode*)come_null_checker(self, "23field.nc", 815))->mBreakGuard=break_guard;
    __dec_obj132=((struct sLoadArrayNode*)come_null_checker(self, "23field.nc", 817))->mLeft,
    ((struct sLoadArrayNode*)come_null_checker(self, "23field.nc", 817))->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    (__dec_obj132 ? __dec_obj132 = come_decrement_ref_count(__dec_obj132, ((struct sNode*)__dec_obj132)->finalize, ((struct sNode*)__dec_obj132)->_protocol_obj, 0,0, (void*)0) :0);
    ((struct sLoadArrayNode*)come_null_checker(self, "23field.nc", 818))->mQuote=quote;
    __result_obj__0 = (struct sLoadArrayNode*)come_increment_ref_count(self);
    come_call_finalizer(sLoadArrayNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, array_num, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sLoadArrayNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char*  sLoadArrayNode_kind(struct sLoadArrayNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sLoadArrayNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sLoadArrayNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool sLoadArrayNode_compile(struct sLoadArrayNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sLoadArrayNode_compile"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* left;
    struct list$1sNode$ph* array_num_nodes;
    _Bool Value;
    _Bool __result_obj__0;
    struct CVALUE*  left_value  ;
    struct sType*  left_type  ;
    void* __right_value1 = (void*)0;
    struct list$1CVALUE$ph* array_num;
    struct list$1sNode$ph* o2_saved;
    struct sNode* it;
    _Bool Value_54;
    struct CVALUE*  c_value  ;
    struct sType*  type  ;
    _Bool calling_fun;
    struct CVALUE*  come_value  ;
    struct buffer*  buf  ;
    struct list$1CVALUE$ph* o2_saved_55;
    struct CVALUE*  it_56  ;
    char*  left_value_code  ;
    char*  __dec_obj133  ;
    struct sType*  result_type  ;
    struct sType*  __dec_obj134  ;
    struct sType*  __dec_obj135  ;
    struct sType*  __dec_obj136  ;
    struct sType*  __dec_obj137  ;
    _Bool consumed_array_pointer_type;
    struct sType*  __dec_obj138  ;
    struct sType*  __dec_obj139  ;
    struct sType*  __dec_obj140  ;
    struct sType*  __dec_obj141  ;
    struct list$1sNode$ph* remained_array_num;
    int i;
    struct list$1sNode$ph* __dec_obj142;
    struct sType*  __dec_obj143  ;
    struct sType*  __dec_obj144  ;
    struct sType*  type2_  ;
    struct sType*  type3_  ;
    struct sType*  type_  ;
    struct sType*  __dec_obj145  ;
    memset(&calling_fun, 0, sizeof(calling_fun));
    memset(&result_type, 0, sizeof(result_type));
    left=(struct sNode*)come_increment_ref_count(create_null_checker((struct sNode*)come_increment_ref_count(((struct sLoadArrayNode*)come_null_checker(self, "23field.nc", 828))->mLeft),info));
    array_num_nodes=(struct list$1sNode$ph*)come_increment_ref_count(((struct sLoadArrayNode*)come_null_checker(self, "23field.nc", 829))->mArrayNum);
    Value=node_compile(left,info);
    if(!Value) {
        __result_obj__0 = (_Bool)0;
        ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(list$1sNode$ph$p_finalize, array_num_nodes, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    left_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
    left_type=(struct sType* )come_increment_ref_count(sType_clone(((struct CVALUE* )come_null_checker(left_value, "23field.nc", 837))->type));
    array_num=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count(((struct list$1CVALUE$ph*)come_null_checker(((struct list$1CVALUE$ph*)(__right_value0=(struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), (void*)0, 839, "struct list$1CVALUE$ph*"))), "23field.nc", 839)))));
    come_call_finalizer(list$1CVALUE$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    for(o2_saved=(struct list$1sNode$ph*)come_increment_ref_count(array_num_nodes),it=list$1sNode$ph_begin(((struct list$1sNode$ph*)come_null_checker(o2_saved, "23field.nc", 841)));!list$1sNode$ph_end(((struct list$1sNode$ph*)come_null_checker(o2_saved, "23field.nc", 841)));it=list$1sNode$ph_next(((struct list$1sNode$ph*)come_null_checker(o2_saved, "23field.nc", 841)))){
        Value_54=node_compile(it,info);
        if(!Value_54) {
            __result_obj__0 = (_Bool)0;
            come_call_finalizer(list$1sNode$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            come_call_finalizer(list$1sNode$ph$p_finalize, array_num_nodes, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, left_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(list$1CVALUE$ph$p_finalize, array_num, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        c_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
        list$1CVALUE$ph_push_back(((struct list$1CVALUE$ph*)come_null_checker(array_num, "23field.nc", 848)),(struct CVALUE* )come_increment_ref_count(c_value));
        come_call_finalizer(CVALUE_finalize, c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer(list$1sNode$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    type=(struct sType* )come_increment_ref_count(sType_clone(((struct CVALUE* )come_null_checker(left_value, "23field.nc", 851))->type));
    const char* fun_name="operator_load_element";
    if(((struct sLoadArrayNode*)come_null_checker(self, "23field.nc", 855))->mQuote) {
        calling_fun=(_Bool)0;
    }
    else {
        calling_fun=operator_overload_fun(type,fun_name,(struct sNode*)come_increment_ref_count(left),(struct sNode*)come_increment_ref_count(list$1sNode$ph_operator_load_element(((struct list$1sNode$ph*)come_null_checker(((struct list$1sNode$ph*)come_null_checker(array_num_nodes, "23field.nc", 859)), "23field.nc", 859)),0)),left_value,((struct CVALUE* )(__right_value1=list$1CVALUE$ph_operator_load_element(((struct list$1CVALUE$ph*)come_null_checker(((struct list$1CVALUE$ph*)come_null_checker(array_num, "23field.nc", 859)), "23field.nc", 859)),0))),((struct sLoadArrayNode*)come_null_checker(self, "23field.nc", 859))->mBreakGuard,info);
        come_call_finalizer(CVALUE_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    }
    if(!calling_fun) {
        if(gComeSafe) {
            err_msg(info,"LoadArray is not safe code");
            __result_obj__0 = (_Bool)0;
            ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            come_call_finalizer(list$1sNode$ph$p_finalize, array_num_nodes, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, left_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(list$1CVALUE$ph$p_finalize, array_num, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count(((struct CVALUE* )come_null_checker(((struct CVALUE* )(__right_value0=(struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), (void*)0, 867, "struct CVALUE* "))), "23field.nc", 867)))));
        come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count(((struct buffer* )come_null_checker(((struct buffer* )(__right_value0=(struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 869, "struct buffer* "))), "23field.nc", 869)))));
        come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        buffer_append_str(((struct buffer* )come_null_checker(buf, "23field.nc", 871)),((struct CVALUE* )come_null_checker(left_value, "23field.nc", 871))->c_value);
        for(o2_saved_55=(struct list$1CVALUE$ph*)come_increment_ref_count(array_num),it_56=list$1CVALUE$ph_begin(((struct list$1CVALUE$ph*)come_null_checker(o2_saved_55, "23field.nc", 873)));!list$1CVALUE$ph_end(((struct list$1CVALUE$ph*)come_null_checker(o2_saved_55, "23field.nc", 873)));it_56=list$1CVALUE$ph_next(((struct list$1CVALUE$ph*)come_null_checker(o2_saved_55, "23field.nc", 873)))){
            buffer_append_format(((struct buffer* )come_null_checker(buf, "23field.nc", 874)),"[%s]",((struct CVALUE* )come_null_checker(it_56, "23field.nc", 874))->c_value);
        }
        come_call_finalizer(list$1CVALUE$ph$p_finalize, o2_saved_55, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        left_value_code=(char* )come_increment_ref_count(buffer_to_string(((struct buffer* )come_null_checker(buf, "23field.nc", 877))));
        __dec_obj133=((struct CVALUE* )come_null_checker(come_value, "23field.nc", 879))->c_value,
        ((struct CVALUE* )come_null_checker(come_value, "23field.nc", 879))->c_value=(char* )come_increment_ref_count(xsprintf("%s",left_value_code));
        __dec_obj133 = come_decrement_ref_count(__dec_obj133, (void*)0, (void*)0, 0,0, (void*)0);
        if(((struct sType* )come_null_checker(left_type, "23field.nc", 883))->mOriginalLoadVarType) {
            __dec_obj134=result_type,
            result_type=(struct sType* )come_increment_ref_count(sType_clone(((struct sType* )come_null_checker(left_type, "23field.nc", 884))->mOriginalLoadVarType));
            come_call_finalizer(sType_finalize, __dec_obj134,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            __dec_obj135=result_type,
            result_type=(struct sType* )come_increment_ref_count(sType_clone(left_type));
            come_call_finalizer(sType_finalize, __dec_obj135,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(((struct sType* )come_null_checker(result_type, "23field.nc", 892))->mTypedefOriginalType&&list$1sNode$ph_length(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker(result_type, "23field.nc", 892))->mArrayNum, "23field.nc", 892)))==0&&((struct sType* )come_null_checker(result_type, "23field.nc", 892))->mPointerNum==0) {
            __dec_obj136=result_type,
            result_type=(struct sType* )come_increment_ref_count(expand_typedef_for_load_element(result_type));
            come_call_finalizer(sType_finalize, __dec_obj136,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        __dec_obj137=((struct CVALUE* )come_null_checker(come_value, "23field.nc", 896))->type,
        ((struct CVALUE* )come_null_checker(come_value, "23field.nc", 896))->type=(struct sType* )come_increment_ref_count(result_type);
        come_call_finalizer(sType_finalize, __dec_obj137,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        consumed_array_pointer_type=(_Bool)0;
        if(((struct sType* )come_null_checker(((struct CVALUE* )come_null_checker(come_value, "23field.nc", 899))->type, "23field.nc", 899))->mArrayPointerType) {
            ((struct sType* )come_null_checker(((struct CVALUE* )come_null_checker(come_value, "23field.nc", 900))->type, "23field.nc", 900))->mPointerNum++;
            consumed_array_pointer_type=(_Bool)1;
        }
        if(list$1sNode$ph_length(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker(((struct CVALUE* )come_null_checker(come_value, "23field.nc", 904))->type, "23field.nc", 904))->mArrayNum, "23field.nc", 904)))>0) {
            if(((struct sInfo* )come_null_checker(info, "23field.nc", 905))->in_store_array) {
                __dec_obj138=((struct sType* )come_null_checker(((struct CVALUE* )come_null_checker(come_value, "23field.nc", 906))->type, "23field.nc", 906))->mOriginalLoadVarType,
                ((struct sType* )come_null_checker(((struct CVALUE* )come_null_checker(come_value, "23field.nc", 906))->type, "23field.nc", 906))->mOriginalLoadVarType=(struct sType* )come_increment_ref_count(sType_clone(result_type));
                come_call_finalizer(sType_finalize, __dec_obj138,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                list$1sNode$ph_delete(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker(((struct CVALUE* )come_null_checker(come_value, "23field.nc", 907))->type, "23field.nc", 907))->mArrayNum, "23field.nc", 907)),0,list$1CVALUE$ph_length(((struct list$1CVALUE$ph*)come_null_checker(array_num, "23field.nc", 907))));
            }
            else if(((struct sInfo* )come_null_checker(info, "23field.nc", 909))->in_typeof) {
                __dec_obj139=((struct sType* )come_null_checker(((struct CVALUE* )come_null_checker(come_value, "23field.nc", 910))->type, "23field.nc", 910))->mOriginalLoadVarType,
                ((struct sType* )come_null_checker(((struct CVALUE* )come_null_checker(come_value, "23field.nc", 910))->type, "23field.nc", 910))->mOriginalLoadVarType=(struct sType* )come_increment_ref_count(sType_clone(result_type));
                come_call_finalizer(sType_finalize, __dec_obj139,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else if(((struct sInfo* )come_null_checker(info, "23field.nc", 912))->in_refference) {
                __dec_obj140=((struct sType* )come_null_checker(((struct CVALUE* )come_null_checker(come_value, "23field.nc", 913))->type, "23field.nc", 913))->mOriginalLoadVarType,
                ((struct sType* )come_null_checker(((struct CVALUE* )come_null_checker(come_value, "23field.nc", 913))->type, "23field.nc", 913))->mOriginalLoadVarType=(struct sType* )come_increment_ref_count(sType_clone(result_type));
                come_call_finalizer(sType_finalize, __dec_obj140,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                ((struct sType* )come_null_checker(((struct CVALUE* )come_null_checker(come_value, "23field.nc", 916))->type, "23field.nc", 916))->mArrayPointerNum++;
            }
            else {
                __dec_obj141=((struct sType* )come_null_checker(((struct CVALUE* )come_null_checker(come_value, "23field.nc", 919))->type, "23field.nc", 919))->mOriginalLoadVarType,
                ((struct sType* )come_null_checker(((struct CVALUE* )come_null_checker(come_value, "23field.nc", 919))->type, "23field.nc", 919))->mOriginalLoadVarType=(struct sType* )come_increment_ref_count(sType_clone(result_type));
                come_call_finalizer(sType_finalize, __dec_obj141,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                remained_array_num=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count(((struct list$1sNode$ph*)come_null_checker(((struct list$1sNode$ph*)(__right_value0=(struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), (void*)0, 922, "struct list$1sNode$ph*"))), "23field.nc", 922)))));
                come_call_finalizer(list$1sNode$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                for(i=1;i<list$1sNode$ph_length(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker(((struct CVALUE* )come_null_checker(come_value, "23field.nc", 923))->type, "23field.nc", 923))->mArrayNum, "23field.nc", 923)));i++){
                    list$1sNode$ph_add(((struct list$1sNode$ph*)come_null_checker(remained_array_num, "23field.nc", 924)),(struct sNode*)come_increment_ref_count(sNode_clone(((struct sNode*)(__right_value0=list$1sNode$ph_operator_load_element(((struct list$1sNode$ph*)come_null_checker(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker(((struct CVALUE* )come_null_checker(come_value, "23field.nc", 924))->type, "23field.nc", 924))->mArrayNum, "23field.nc", 924)), "23field.nc", 924)),i))))));
                    ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0):(void*)0);
                }
                __dec_obj142=((struct sType* )come_null_checker(((struct CVALUE* )come_null_checker(come_value, "23field.nc", 926))->type, "23field.nc", 926))->mArrayNum,
                ((struct sType* )come_null_checker(((struct CVALUE* )come_null_checker(come_value, "23field.nc", 926))->type, "23field.nc", 926))->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(remained_array_num);
                come_call_finalizer(list$1sNode$ph_finalize, __dec_obj142,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(list$1sNode$ph_length(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker(((struct CVALUE* )come_null_checker(come_value, "23field.nc", 927))->type, "23field.nc", 927))->mArrayNum, "23field.nc", 927)))>0) {
                    ((struct sType* )come_null_checker(((struct CVALUE* )come_null_checker(come_value, "23field.nc", 928))->type, "23field.nc", 928))->mArrayPointerNum++;
                }
                come_call_finalizer(list$1sNode$ph$p_finalize, remained_array_num, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        else if(((struct sType* )come_null_checker(((struct CVALUE* )come_null_checker(come_value, "23field.nc", 932))->type, "23field.nc", 932))->mPointerNum>0) {
            __dec_obj143=((struct sType* )come_null_checker(((struct CVALUE* )come_null_checker(come_value, "23field.nc", 933))->type, "23field.nc", 933))->mOriginalLoadVarType,
            ((struct sType* )come_null_checker(((struct CVALUE* )come_null_checker(come_value, "23field.nc", 933))->type, "23field.nc", 933))->mOriginalLoadVarType=(struct sType* )come_increment_ref_count(sType_clone(result_type));
            come_call_finalizer(sType_finalize, __dec_obj143,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            ((struct sType* )come_null_checker(((struct CVALUE* )come_null_checker(come_value, "23field.nc", 934))->type, "23field.nc", 934))->mPointerNum--;
            if(consumed_array_pointer_type) {
                ((struct sType* )come_null_checker(((struct CVALUE* )come_null_checker(come_value, "23field.nc", 937))->type, "23field.nc", 937))->mArrayPointerType=(_Bool)0;
            }
        }
        else if(((struct sType* )come_null_checker(((struct CVALUE* )come_null_checker(come_value, "23field.nc", 940))->type, "23field.nc", 940))->mArrayPointerNum>0) {
            __dec_obj144=((struct sType* )come_null_checker(((struct CVALUE* )come_null_checker(come_value, "23field.nc", 941))->type, "23field.nc", 941))->mOriginalLoadVarType,
            ((struct sType* )come_null_checker(((struct CVALUE* )come_null_checker(come_value, "23field.nc", 941))->type, "23field.nc", 941))->mOriginalLoadVarType=(struct sType* )come_increment_ref_count(sType_clone(result_type));
            come_call_finalizer(sType_finalize, __dec_obj144,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            ((struct sType* )come_null_checker(((struct CVALUE* )come_null_checker(come_value, "23field.nc", 942))->type, "23field.nc", 942))->mArrayPointerNum--;
            if(((struct sType* )come_null_checker(((struct CVALUE* )come_null_checker(come_value, "23field.nc", 943))->type, "23field.nc", 943))->mArrayPointerNum==0) {
                ((struct sType* )come_null_checker(((struct CVALUE* )come_null_checker(come_value, "23field.nc", 944))->type, "23field.nc", 944))->mArrayPointerType=(_Bool)0;
            }
        }
        if(list$1CVALUE$ph_length(((struct list$1CVALUE$ph*)come_null_checker(array_num, "23field.nc", 948)))>0&&((struct sType* )come_null_checker(((struct CVALUE* )come_null_checker(come_value, "23field.nc", 949))->type, "23field.nc", 950))->mTypedefOriginalType&&list$1sNode$ph_length(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker(((struct sType* )come_null_checker(((struct CVALUE* )come_null_checker(come_value, "23field.nc", 950))->type, "23field.nc", 950))->mTypedefOriginalType, "23field.nc", 950))->mArrayNum, "23field.nc", 950)))>0&&((struct sType* )come_null_checker(((struct CVALUE* )come_null_checker(come_value, "23field.nc", 951))->type, "23field.nc", 951))->mPointerNum==0) {
            list$1sNode$ph_reset(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker(((struct CVALUE* )come_null_checker(come_value, "23field.nc", 954))->type, "23field.nc", 954))->mArrayNum, "23field.nc", 954)));
            ((struct sType* )come_null_checker(((struct CVALUE* )come_null_checker(come_value, "23field.nc", 955))->type, "23field.nc", 955))->mArrayPointerNum=0;
            ((struct sType* )come_null_checker(((struct CVALUE* )come_null_checker(come_value, "23field.nc", 956))->type, "23field.nc", 956))->mArrayPointerType=(_Bool)0;
        }
        ((struct CVALUE* )come_null_checker(come_value, "23field.nc", 959))->var=((struct CVALUE* )come_null_checker(left_value, "23field.nc", 959))->var;
        ((struct CVALUE* )come_null_checker(come_value, "23field.nc", 960))->mLoadField=(_Bool)1;
        type2_=(struct sType* )come_increment_ref_count(sType_clone(((struct CVALUE* )come_null_checker(come_value, "23field.nc", 962))->type));
        type3_=(struct sType* )come_increment_ref_count(solve_generics(type2_,((struct sInfo* )come_null_checker(info, "23field.nc", 963))->generics_type,info));
        type_=(struct sType* )come_increment_ref_count(solve_method_generics(type3_,info));
        __dec_obj145=((struct CVALUE* )come_null_checker(come_value, "23field.nc", 966))->type,
        ((struct CVALUE* )come_null_checker(come_value, "23field.nc", 966))->type=(struct sType* )come_increment_ref_count(type_);
        come_call_finalizer(sType_finalize, __dec_obj145,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((struct sType* )come_null_checker(((struct CVALUE* )come_null_checker(come_value, "23field.nc", 967))->type, "23field.nc", 967))->mHeap=(_Bool)0;
        list$1CVALUE$ph_push_back(((struct list$1CVALUE$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "23field.nc", 969))->stack, "23field.nc", 969)),(struct CVALUE* )come_increment_ref_count(come_value));
        add_come_last_code(info,"%s",((struct CVALUE* )come_null_checker(come_value, "23field.nc", 971))->c_value);
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (left_value_code = come_decrement_ref_count(left_value_code, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, type2_, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, type3_, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, type_, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result_obj__0 = (_Bool)1;
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, array_num_nodes, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, left_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1CVALUE$ph$p_finalize, array_num, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sLoadArrayNode_finalize(struct sLoadArrayNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sLoadArrayNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct sLoadArrayNode*)come_null_checker(self, "sLoadArrayNode_finalize", 2))->sname!=((void*)0)) {
        (((struct sLoadArrayNode*)come_null_checker(self, "sLoadArrayNode_finalize", 2))->sname = come_decrement_ref_count(((struct sLoadArrayNode*)come_null_checker(self, "sLoadArrayNode_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct sLoadArrayNode*)come_null_checker(self, "sLoadArrayNode_finalize", 3))->mArrayNum!=((void*)0)) {
        come_call_finalizer(list$1sNode$ph$p_finalize, ((struct sLoadArrayNode*)come_null_checker(self, "sLoadArrayNode_finalize", 3))->mArrayNum, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sLoadArrayNode*)come_null_checker(self, "sLoadArrayNode_finalize", 4))->mLeft!=((void*)0)) {
        ((((struct sLoadArrayNode*)come_null_checker(self, "sLoadArrayNode_finalize", 4))->mLeft) ? ((struct sLoadArrayNode*)come_null_checker(self, "sLoadArrayNode_finalize", 4))->mLeft = come_decrement_ref_count(((struct sLoadArrayNode*)come_null_checker(self, "sLoadArrayNode_finalize", 4))->mLeft, ((struct sNode*)((struct sLoadArrayNode*)come_null_checker(self, "sLoadArrayNode_finalize", 4))->mLeft)->finalize, ((struct sNode*)((struct sLoadArrayNode*)come_null_checker(self, "sLoadArrayNode_finalize", 4))->mLeft)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    neo_current_frame = fr.prev;
}

struct sLoadRangeArrayNode* sLoadRangeArrayNode_initialize(struct sLoadRangeArrayNode* self, struct sNode* left, struct list$1sNode$ph* array_num, _Bool quote, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sLoadRangeArrayNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct list$1sNode$ph* __dec_obj146;
    struct sNode* __dec_obj147;
    struct sLoadRangeArrayNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sLoadRangeArrayNode*)come_increment_ref_count(((struct sLoadRangeArrayNode*)come_null_checker(self, "23field.nc", 982))),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj146=((struct sLoadRangeArrayNode*)come_null_checker(self, "23field.nc", 984))->mArrayNum,
    ((struct sLoadRangeArrayNode*)come_null_checker(self, "23field.nc", 984))->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(array_num));
    come_call_finalizer(list$1sNode$ph_finalize, __dec_obj146,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj147=((struct sLoadRangeArrayNode*)come_null_checker(self, "23field.nc", 986))->mLeft,
    ((struct sLoadRangeArrayNode*)come_null_checker(self, "23field.nc", 986))->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    (__dec_obj147 ? __dec_obj147 = come_decrement_ref_count(__dec_obj147, ((struct sNode*)__dec_obj147)->finalize, ((struct sNode*)__dec_obj147)->_protocol_obj, 0,0, (void*)0) :0);
    ((struct sLoadRangeArrayNode*)come_null_checker(self, "23field.nc", 987))->mQuote=quote;
    __result_obj__0 = (struct sLoadRangeArrayNode*)come_increment_ref_count(self);
    come_call_finalizer(sLoadRangeArrayNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, array_num, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sLoadRangeArrayNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char*  sLoadRangeArrayNode_kind(struct sLoadRangeArrayNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sLoadRangeArrayNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sLoadRangeArrayNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool sLoadRangeArrayNode_compile(struct sLoadRangeArrayNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sLoadRangeArrayNode_compile"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* left;
    struct list$1sNode$ph* array_num_nodes;
    _Bool Value;
    _Bool __result_obj__0;
    struct CVALUE*  left_value  ;
    struct sType*  left_type  ;
    void* __right_value1 = (void*)0;
    struct list$1CVALUE$ph* array_num;
    struct list$1sNode$ph* o2_saved;
    struct sNode* it;
    _Bool Value_57;
    struct CVALUE*  c_value  ;
    struct sType*  type  ;
    _Bool calling_fun;
    struct sNode* middle;
    struct sNode* right;
    struct CVALUE*  come_value  ;
    struct buffer*  buf  ;
    struct list$1CVALUE$ph* o2_saved_58;
    struct CVALUE*  it_59  ;
    char*  left_value_code  ;
    char*  __dec_obj148  ;
    struct sType*  result_type  ;
    struct sType*  original_load_var_type  ;
    struct sType*  __dec_obj149  ;
    int n;
    struct sType*  __dec_obj150  ;
    struct sType*  __dec_obj151  ;
    int i;
    struct sType*  __dec_obj152  ;
    struct sType*  type_  ;
    struct sType*  __dec_obj153  ;
    memset(&calling_fun, 0, sizeof(calling_fun));
    left=(struct sNode*)come_increment_ref_count(create_null_checker((struct sNode*)come_increment_ref_count(((struct sLoadRangeArrayNode*)come_null_checker(self, "23field.nc", 997))->mLeft),info));
    array_num_nodes=(struct list$1sNode$ph*)come_increment_ref_count(((struct sLoadRangeArrayNode*)come_null_checker(self, "23field.nc", 998))->mArrayNum);
    Value=node_compile(left,info);
    if(!Value) {
        __result_obj__0 = (_Bool)0;
        ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(list$1sNode$ph$p_finalize, array_num_nodes, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    left_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
    left_type=(struct sType* )come_increment_ref_count(sType_clone(((struct CVALUE* )come_null_checker(left_value, "23field.nc", 1006))->type));
    array_num=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count(((struct list$1CVALUE$ph*)come_null_checker(((struct list$1CVALUE$ph*)(__right_value0=(struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), (void*)0, 1008, "struct list$1CVALUE$ph*"))), "23field.nc", 1008)))));
    come_call_finalizer(list$1CVALUE$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    for(o2_saved=(struct list$1sNode$ph*)come_increment_ref_count(array_num_nodes),it=list$1sNode$ph_begin(((struct list$1sNode$ph*)come_null_checker(o2_saved, "23field.nc", 1010)));!list$1sNode$ph_end(((struct list$1sNode$ph*)come_null_checker(o2_saved, "23field.nc", 1010)));it=list$1sNode$ph_next(((struct list$1sNode$ph*)come_null_checker(o2_saved, "23field.nc", 1010)))){
        Value_57=node_compile(it,info);
        if(!Value_57) {
            __result_obj__0 = (_Bool)0;
            come_call_finalizer(list$1sNode$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            come_call_finalizer(list$1sNode$ph$p_finalize, array_num_nodes, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, left_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(list$1CVALUE$ph$p_finalize, array_num, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        c_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
        list$1CVALUE$ph_push_back(((struct list$1CVALUE$ph*)come_null_checker(array_num, "23field.nc", 1017)),(struct CVALUE* )come_increment_ref_count(c_value));
        come_call_finalizer(CVALUE_finalize, c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer(list$1sNode$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    type=(struct sType* )come_increment_ref_count(sType_clone(((struct CVALUE* )come_null_checker(left_value, "23field.nc", 1020))->type));
    const char* fun_name="operator_load_range_element";
    if(((struct sLoadRangeArrayNode*)come_null_checker(self, "23field.nc", 1024))->mQuote) {
        calling_fun=(_Bool)0;
    }
    else {
        middle=(struct sNode*)come_increment_ref_count(list$1sNode$ph_operator_load_element(((struct list$1sNode$ph*)come_null_checker(((struct list$1sNode$ph*)come_null_checker(array_num_nodes, "23field.nc", 1028)), "23field.nc", 1028)),0));
        right=(struct sNode*)come_increment_ref_count(list$1sNode$ph_operator_load_element(((struct list$1sNode$ph*)come_null_checker(((struct list$1sNode$ph*)come_null_checker(array_num_nodes, "23field.nc", 1029)), "23field.nc", 1029)),1));
        calling_fun=operator_overload_fun2(type,fun_name,(struct sNode*)come_increment_ref_count(left),(struct sNode*)come_increment_ref_count(middle),(struct sNode*)come_increment_ref_count(right),left_value,((struct CVALUE* )(__right_value0=list$1CVALUE$ph_operator_load_element(((struct list$1CVALUE$ph*)come_null_checker(((struct list$1CVALUE$ph*)come_null_checker(array_num, "23field.nc", 1030)), "23field.nc", 1030)),0))),((struct CVALUE* )(__right_value1=list$1CVALUE$ph_operator_load_element(((struct list$1CVALUE$ph*)come_null_checker(((struct list$1CVALUE$ph*)come_null_checker(array_num, "23field.nc", 1030)), "23field.nc", 1030)),1))),info);
        come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer(CVALUE_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        ((middle) ? middle = come_decrement_ref_count(middle, ((struct sNode*)middle)->finalize, ((struct sNode*)middle)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    if(!calling_fun) {
        come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count(((struct CVALUE* )come_null_checker(((struct CVALUE* )(__right_value0=(struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), (void*)0, 1034, "struct CVALUE* "))), "23field.nc", 1034)))));
        come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count(((struct buffer* )come_null_checker(((struct buffer* )(__right_value0=(struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 1036, "struct buffer* "))), "23field.nc", 1036)))));
        come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        buffer_append_str(((struct buffer* )come_null_checker(buf, "23field.nc", 1038)),((struct CVALUE* )come_null_checker(left_value, "23field.nc", 1038))->c_value);
        for(o2_saved_58=(struct list$1CVALUE$ph*)come_increment_ref_count(array_num),it_59=list$1CVALUE$ph_begin(((struct list$1CVALUE$ph*)come_null_checker(o2_saved_58, "23field.nc", 1040)));!list$1CVALUE$ph_end(((struct list$1CVALUE$ph*)come_null_checker(o2_saved_58, "23field.nc", 1040)));it_59=list$1CVALUE$ph_next(((struct list$1CVALUE$ph*)come_null_checker(o2_saved_58, "23field.nc", 1040)))){
            buffer_append_format(((struct buffer* )come_null_checker(buf, "23field.nc", 1041)),"[%s]",((struct CVALUE* )come_null_checker(it_59, "23field.nc", 1041))->c_value);
        }
        come_call_finalizer(list$1CVALUE$ph$p_finalize, o2_saved_58, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        left_value_code=(char* )come_increment_ref_count(buffer_to_string(((struct buffer* )come_null_checker(buf, "23field.nc", 1044))));
        __dec_obj148=((struct CVALUE* )come_null_checker(come_value, "23field.nc", 1046))->c_value,
        ((struct CVALUE* )come_null_checker(come_value, "23field.nc", 1046))->c_value=(char* )come_increment_ref_count(xsprintf("%s",left_value_code));
        __dec_obj148 = come_decrement_ref_count(__dec_obj148, (void*)0, (void*)0, 0,0, (void*)0);
        result_type=(struct sType* )come_increment_ref_count(sType_clone(left_type));
        if(((struct sType* )come_null_checker(result_type, "23field.nc", 1050))->mOriginalLoadVarType) {
            original_load_var_type=(struct sType* )come_increment_ref_count(sType_clone(((struct sType* )come_null_checker(result_type, "23field.nc", 1051))->mOriginalLoadVarType));
            __dec_obj149=result_type,
            result_type=(struct sType* )come_increment_ref_count(original_load_var_type);
            come_call_finalizer(sType_finalize, __dec_obj149,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, original_load_var_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(list$1sNode$ph_length(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker(result_type, "23field.nc", 1055))->mArrayNum, "23field.nc", 1055)))>0) {
            n=list$1sNode$ph_length(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker(result_type, "23field.nc", 1056))->mArrayNum, "23field.nc", 1056)))-list$1CVALUE$ph_length(((struct list$1CVALUE$ph*)come_null_checker(array_num, "23field.nc", 1056)));
            if(n==0) {
                __dec_obj150=result_type,
                result_type=(struct sType* )come_increment_ref_count(sType_clone(left_type));
                come_call_finalizer(sType_finalize, __dec_obj150,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(((struct sType* )come_null_checker(left_type, "23field.nc", 1060))->mOriginalLoadVarType) {
                    __dec_obj151=result_type,
                    result_type=(struct sType* )come_increment_ref_count(sType_clone(((struct sType* )come_null_checker(left_type, "23field.nc", 1061))->mOriginalLoadVarType));
                    come_call_finalizer(sType_finalize, __dec_obj151,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                list$1sNode$ph_reset(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker(result_type, "23field.nc", 1063))->mArrayNum, "23field.nc", 1063)));
            }
            else if(n>0) {
                for(i=0;i<n;i++){
                    list$1sNode$ph_delete(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker(result_type, "23field.nc", 1067))->mArrayNum, "23field.nc", 1067)),-1,-1);
                }
            }
            else if(n<0) {
                list$1sNode$ph_reset(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker(result_type, "23field.nc", 1071))->mArrayNum, "23field.nc", 1071)));
                ((struct sType* )come_null_checker(result_type, "23field.nc", 1072))->mPointerNum+=n;
                if(((struct sType* )come_null_checker(result_type, "23field.nc", 1074))->mPointerNum<0) {
                    ((struct sType* )come_null_checker(result_type, "23field.nc", 1075))->mPointerNum=0;
                }
            }
        }
        else {
            if(((struct sType* )come_null_checker(result_type, "23field.nc", 1080))->mPointerNum>0) {
                ((struct sType* )come_null_checker(result_type, "23field.nc", 1081))->mPointerNum-=list$1CVALUE$ph_length(((struct list$1CVALUE$ph*)come_null_checker(array_num, "23field.nc", 1081)));
                if(((struct sType* )come_null_checker(result_type, "23field.nc", 1083))->mPointerNum<0) {
                    ((struct sType* )come_null_checker(result_type, "23field.nc", 1084))->mPointerNum=0;
                }
            }
        }
        __dec_obj152=((struct CVALUE* )come_null_checker(come_value, "23field.nc", 1089))->type,
        ((struct CVALUE* )come_null_checker(come_value, "23field.nc", 1089))->type=(struct sType* )come_increment_ref_count(sType_clone(result_type));
        come_call_finalizer(sType_finalize, __dec_obj152,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((struct CVALUE* )come_null_checker(come_value, "23field.nc", 1090))->var=((void*)0);
        type_=(struct sType* )come_increment_ref_count(solve_generics(((struct CVALUE* )come_null_checker(come_value, "23field.nc", 1092))->type,((struct sInfo* )come_null_checker(info, "23field.nc", 1092))->generics_type,info));
        __dec_obj153=((struct CVALUE* )come_null_checker(come_value, "23field.nc", 1093))->type,
        ((struct CVALUE* )come_null_checker(come_value, "23field.nc", 1093))->type=(struct sType* )come_increment_ref_count(solve_method_generics(type_,info));
        come_call_finalizer(sType_finalize, __dec_obj153,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        list$1CVALUE$ph_push_back(((struct list$1CVALUE$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "23field.nc", 1095))->stack, "23field.nc", 1095)),(struct CVALUE* )come_increment_ref_count(come_value));
        add_come_last_code(info,"%s",((struct CVALUE* )come_null_checker(come_value, "23field.nc", 1097))->c_value);
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (left_value_code = come_decrement_ref_count(left_value_code, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, type_, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result_obj__0 = (_Bool)1;
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, array_num_nodes, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, left_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1CVALUE$ph$p_finalize, array_num, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sLoadRangeArrayNode_finalize(struct sLoadRangeArrayNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sLoadRangeArrayNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct sLoadRangeArrayNode*)come_null_checker(self, "sLoadRangeArrayNode_finalize", 2))->sname!=((void*)0)) {
        (((struct sLoadRangeArrayNode*)come_null_checker(self, "sLoadRangeArrayNode_finalize", 2))->sname = come_decrement_ref_count(((struct sLoadRangeArrayNode*)come_null_checker(self, "sLoadRangeArrayNode_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct sLoadRangeArrayNode*)come_null_checker(self, "sLoadRangeArrayNode_finalize", 3))->mArrayNum!=((void*)0)) {
        come_call_finalizer(list$1sNode$ph$p_finalize, ((struct sLoadRangeArrayNode*)come_null_checker(self, "sLoadRangeArrayNode_finalize", 3))->mArrayNum, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sLoadRangeArrayNode*)come_null_checker(self, "sLoadRangeArrayNode_finalize", 4))->mLeft!=((void*)0)) {
        ((((struct sLoadRangeArrayNode*)come_null_checker(self, "sLoadRangeArrayNode_finalize", 4))->mLeft) ? ((struct sLoadRangeArrayNode*)come_null_checker(self, "sLoadRangeArrayNode_finalize", 4))->mLeft = come_decrement_ref_count(((struct sLoadRangeArrayNode*)come_null_checker(self, "sLoadRangeArrayNode_finalize", 4))->mLeft, ((struct sNode*)((struct sLoadRangeArrayNode*)come_null_checker(self, "sLoadRangeArrayNode_finalize", 4))->mLeft)->finalize, ((struct sNode*)((struct sLoadRangeArrayNode*)come_null_checker(self, "sLoadRangeArrayNode_finalize", 4))->mLeft)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    neo_current_frame = fr.prev;
}

struct sNode* parse_method_call_v18(struct sNode* obj, char*  fun_name  , struct sInfo*  info  , _Bool arrow_)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "parse_method_call_v18"; neo_current_frame = &fr;
    struct sNode* __result_obj__0;
    err_msg(info,"parse_method_call is failed");
    exit(2);
    __result_obj__0 = (struct sNode*)come_increment_ref_count((struct sNode*)((void*)0));
    ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    return __result_obj__0;
}

struct sNode* store_field(struct sNode* left, struct sNode* right, char*  name  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "store_field"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* left2;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value3;
    struct sStoreFieldNode* _inf_obj_value3;
    void* __right_value2 = (void*)0;
    struct sNode* __result_obj__0;
    left2=(struct sNode*)come_increment_ref_count(automatically_unwrap((struct sNode*)come_increment_ref_count(left),info,(_Bool)1,(_Bool)0));
    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 1116, "struct sNode");
    _inf_obj_value3=(struct sStoreFieldNode*)come_increment_ref_count(((struct sStoreFieldNode*)(__right_value1=sStoreFieldNode_initialize((struct sStoreFieldNode* )come_increment_ref_count(((struct sStoreFieldNode* )come_null_checker(((struct sStoreFieldNode* )(__right_value0=(struct sStoreFieldNode *)come_calloc(1, sizeof(struct sStoreFieldNode )*(1), (void*)0, 1116, "struct sStoreFieldNode* "))), "23field.nc", 1116))),left2,(struct sNode*)come_increment_ref_count(right),(char* )come_increment_ref_count(name),info,(_Bool)0))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sStoreFieldNode_finalize;
    _inf_value3->clone=(void*)sStoreFieldNode_clone;
    _inf_value3->compile=(void*)sStoreFieldNode_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sline_real=(void*)sNodeBase_sline_real;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sNodeBase_terminated;
    _inf_value3->kind=(void*)sStoreFieldNode_kind;
    __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value3)));
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
    ((left2) ? left2 = come_decrement_ref_count(left2, ((struct sNode*)left2)->finalize, ((struct sNode*)left2)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(sStoreFieldNode_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer(sStoreFieldNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    return __result_obj__0;
}

static struct sStoreFieldNode* sStoreFieldNode_clone(struct sStoreFieldNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sStoreFieldNode_clone"; neo_current_frame = &fr;
    struct sStoreFieldNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sStoreFieldNode*  result  ;
    char*  __dec_obj154  ;
    struct sNode* __dec_obj155;
    struct sNode* __dec_obj156;
    char*  __dec_obj157  ;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sStoreFieldNode* )come_increment_ref_count((struct sStoreFieldNode *)come_calloc(1, sizeof(struct sStoreFieldNode )*(1), (void*)0, 5, "struct sStoreFieldNode* "));
    if(self!=((void*)0)) {
        ((struct sStoreFieldNode* )come_null_checker(result, "sStoreFieldNode_clone", 6))->sline=((struct sStoreFieldNode*)come_null_checker(self, "sStoreFieldNode_clone", 6))->sline;
    }
    if(self!=((void*)0)&&((struct sStoreFieldNode*)come_null_checker(self, "sStoreFieldNode_clone", 7))->sname!=((void*)0)) {
        __dec_obj154=((struct sStoreFieldNode* )come_null_checker(result, "sStoreFieldNode_clone", 7))->sname,
        ((struct sStoreFieldNode* )come_null_checker(result, "sStoreFieldNode_clone", 7))->sname=(char* )come_increment_ref_count((char* )come_memdup(((struct sStoreFieldNode*)come_null_checker(self, "sStoreFieldNode_clone", 7))->sname, "sStoreFieldNode_clone", 7, "char* "));
        __dec_obj154 = come_decrement_ref_count(__dec_obj154, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        ((struct sStoreFieldNode* )come_null_checker(result, "sStoreFieldNode_clone", 8))->sline_real=((struct sStoreFieldNode*)come_null_checker(self, "sStoreFieldNode_clone", 8))->sline_real;
    }
    if(self!=((void*)0)&&((struct sStoreFieldNode*)come_null_checker(self, "sStoreFieldNode_clone", 9))->mLeft!=((void*)0)) {
        __dec_obj155=((struct sStoreFieldNode* )come_null_checker(result, "sStoreFieldNode_clone", 9))->mLeft,
        ((struct sStoreFieldNode* )come_null_checker(result, "sStoreFieldNode_clone", 9))->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(((struct sStoreFieldNode*)come_null_checker(self, "sStoreFieldNode_clone", 9))->mLeft));
        (__dec_obj155 ? __dec_obj155 = come_decrement_ref_count(__dec_obj155, ((struct sNode*)__dec_obj155)->finalize, ((struct sNode*)__dec_obj155)->_protocol_obj, 0,0, (void*)0) :0);
    }
    if(self!=((void*)0)&&((struct sStoreFieldNode*)come_null_checker(self, "sStoreFieldNode_clone", 10))->mRight!=((void*)0)) {
        __dec_obj156=((struct sStoreFieldNode* )come_null_checker(result, "sStoreFieldNode_clone", 10))->mRight,
        ((struct sStoreFieldNode* )come_null_checker(result, "sStoreFieldNode_clone", 10))->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(((struct sStoreFieldNode*)come_null_checker(self, "sStoreFieldNode_clone", 10))->mRight));
        (__dec_obj156 ? __dec_obj156 = come_decrement_ref_count(__dec_obj156, ((struct sNode*)__dec_obj156)->finalize, ((struct sNode*)__dec_obj156)->_protocol_obj, 0,0, (void*)0) :0);
    }
    if(self!=((void*)0)&&((struct sStoreFieldNode*)come_null_checker(self, "sStoreFieldNode_clone", 11))->mName!=((void*)0)) {
        __dec_obj157=((struct sStoreFieldNode* )come_null_checker(result, "sStoreFieldNode_clone", 11))->mName,
        ((struct sStoreFieldNode* )come_null_checker(result, "sStoreFieldNode_clone", 11))->mName=(char* )come_increment_ref_count((char* )come_memdup(((struct sStoreFieldNode*)come_null_checker(self, "sStoreFieldNode_clone", 11))->mName, "sStoreFieldNode_clone", 11, "char* "));
        __dec_obj157 = come_decrement_ref_count(__dec_obj157, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        ((struct sStoreFieldNode* )come_null_checker(result, "sStoreFieldNode_clone", 12))->mArrow=((struct sStoreFieldNode*)come_null_checker(self, "sStoreFieldNode_clone", 12))->mArrow;
    }
    __result_obj__0 = result;
    come_call_finalizer(sStoreFieldNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sNode* post_position_operator_v99(struct sNode* node, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "post_position_operator_v99"; neo_current_frame = &fr;
    _Bool range_array;
    char* p;
    int sline;
    _Bool no_comma;
    _Bool no_output_come_code;
    void* __right_value0 = (void*)0;
    struct sNode* exp;
    _Bool quote;
    void* __right_value1 = (void*)0;
    struct list$1sNode$ph* array_num;
    struct sNode* node2;
    struct sNode* node3;
    struct sNode* _inf_value4;
    struct sLoadRangeArrayNode* _inf_obj_value4;
    void* __right_value2 = (void*)0;
    struct sNode* __dec_obj164;
    _Bool quote_62;
    _Bool range;
    struct list$1sNode$ph* array_num_63;
    _Bool range_array2;
    char* p_64;
    int sline_65;
    _Bool no_comma_66;
    _Bool no_output_come_code_67;
    struct sNode* exp_68;
    struct sNode* node2_69;
    struct sNode* right_node;
    struct sNode* node2_70;
    struct sNode* _inf_value5;
    struct sStoreArrayNode* _inf_obj_value5;
    struct sNode* __dec_obj169;
    struct sNode* node2_71;
    struct sNode* _inf_value6;
    struct sLoadArrayNode* _inf_obj_value6;
    struct sNode* __dec_obj173;
    _Bool quote_72;
    _Bool arrow_;
    char*  field_name  ;
    _Bool parse_method_generics_type;
    char* p_73;
    int sline_74;
    char*  word  ;
    struct sNode* right_node_75;
    struct sNode* node2_76;
    struct sNode* _inf_value7;
    struct sStoreFieldNode* _inf_obj_value7;
    struct sNode* __dec_obj174;
    struct sNode* node2_77;
    struct sNode* __dec_obj175;
    struct sNode* node2_78;
    struct sNode* __dec_obj176;
    struct sNode* node2_79;
    struct sNode* __dec_obj177;
    struct sNode* node2_80;
    struct sNode* __dec_obj178;
    struct sNode* node2_81;
    struct sNode* __dec_obj179;
    struct sNode* node2_82;
    struct sNode* __dec_obj180;
    struct sNode* node2_83;
    struct sNode* __dec_obj181;
    struct sNode* node2_84;
    struct sNode* _inf_value8;
    struct sLoadFieldNode* _inf_obj_value8;
    struct sNode* __dec_obj182;
    struct sNode* node2_85;
    struct sNode* __dec_obj183;
    struct sNode* __result_obj__0;
    while((_Bool)1) {
        range_array=(_Bool)0;
        {
            p=((struct sInfo* )come_null_checker(info, "23field.nc", 1125))->p;
            sline=((struct sInfo* )come_null_checker(info, "23field.nc", 1126))->sline;
            if(*((struct sInfo* )come_null_checker(info, "23field.nc", 1128))->p==91) {
                ((struct sInfo* )come_null_checker(info, "23field.nc", 1129))->p++;
                skip_spaces_and_lf(info);
                no_comma=((struct sInfo* )come_null_checker(info, "23field.nc", 1132))->no_comma;
                no_output_come_code=((struct sInfo* )come_null_checker(info, "23field.nc", 1133))->no_output_come_code;
                ((struct sInfo* )come_null_checker(info, "23field.nc", 1134))->no_comma=(_Bool)1;
                ((struct sInfo* )come_null_checker(info, "23field.nc", 1135))->no_output_come_code=(_Bool)1;
                exp=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0));
                ((struct sInfo* )come_null_checker(info, "23field.nc", 1137))->no_comma=no_comma;
                ((struct sInfo* )come_null_checker(info, "23field.nc", 1138))->no_output_come_code=no_output_come_code;
                if(*((struct sInfo* )come_null_checker(info, "23field.nc", 1140))->p==46&&*(((struct sInfo* )come_null_checker(info, "23field.nc", 1140))->p+1)==46) {
                    range_array=(_Bool)1;
                }
                ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            }
            ((struct sInfo* )come_null_checker(info, "23field.nc", 1145))->p=p;
            ((struct sInfo* )come_null_checker(info, "23field.nc", 1146))->sline=sline;
        }
        if(!((struct sNode*)come_null_checker(node, "23field.nc", 1149))->terminated(((struct sNode*)come_null_checker(node, "23field.nc", 1149))->_protocol_obj)&&range_array&&(*((struct sInfo* )come_null_checker(info, "23field.nc", 1149))->p==92&&*(((struct sInfo* )come_null_checker(info, "23field.nc", 1149))->p+1)==91||*((struct sInfo* )come_null_checker(info, "23field.nc", 1149))->p==91)) {
            quote=*((struct sInfo* )come_null_checker(info, "23field.nc", 1150))->p==92;
            if(quote) {
                ((struct sInfo* )come_null_checker(info, "23field.nc", 1152))->p++;
            }
            ((struct sInfo* )come_null_checker(info, "23field.nc", 1154))->p++;
            skip_spaces_and_lf(info);
            array_num=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count(((struct list$1sNode$ph*)come_null_checker(((struct list$1sNode$ph*)(__right_value0=(struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), (void*)0, 1157, "struct list$1sNode$ph*"))), "23field.nc", 1157)))));
            come_call_finalizer(list$1sNode$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            skip_pointer_attribute(info);
            node2=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0));
            list$1sNode$ph_push_back(((struct list$1sNode$ph*)come_null_checker(array_num, "23field.nc", 1163)),(struct sNode*)come_increment_ref_count(node2));
            if(*((struct sInfo* )come_null_checker(info, "23field.nc", 1165))->p==46&&*(((struct sInfo* )come_null_checker(info, "23field.nc", 1165))->p+1)==46) {
                ((struct sInfo* )come_null_checker(info, "23field.nc", 1166))->p+=2;
                skip_spaces_and_lf(info);
                skip_pointer_attribute(info);
                node3=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0));
                list$1sNode$ph_push_back(((struct list$1sNode$ph*)come_null_checker(array_num, "23field.nc", 1173)),(struct sNode*)come_increment_ref_count(node3));
                expected_next_character(93,info);
                ((node3) ? node3 = come_decrement_ref_count(node3, ((struct sNode*)node3)->finalize, ((struct sNode*)node3)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            }
            _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 1178, "struct sNode");
            _inf_obj_value4=(struct sLoadRangeArrayNode*)come_increment_ref_count(((struct sLoadRangeArrayNode*)(__right_value1=sLoadRangeArrayNode_initialize((struct sLoadRangeArrayNode* )come_increment_ref_count(((struct sLoadRangeArrayNode* )come_null_checker(((struct sLoadRangeArrayNode* )(__right_value0=(struct sLoadRangeArrayNode *)come_calloc(1, sizeof(struct sLoadRangeArrayNode )*(1), (void*)0, 1178, "struct sLoadRangeArrayNode* "))), "23field.nc", 1178))),node,(struct list$1sNode$ph*)come_increment_ref_count(array_num),quote,info))));
            _inf_value4->_protocol_obj=_inf_obj_value4;
            _inf_value4->finalize=(void*)sLoadRangeArrayNode_finalize;
            _inf_value4->clone=(void*)sLoadRangeArrayNode_clone;
            _inf_value4->compile=(void*)sLoadRangeArrayNode_compile;
            _inf_value4->sline=(void*)sNodeBase_sline;
            _inf_value4->sline_real=(void*)sNodeBase_sline_real;
            _inf_value4->sname=(void*)sNodeBase_sname;
            _inf_value4->terminated=(void*)sNodeBase_terminated;
            _inf_value4->kind=(void*)sLoadRangeArrayNode_kind;
            __dec_obj164=node,
            node=(struct sNode*)come_increment_ref_count(_inf_value4);
            (__dec_obj164 ? __dec_obj164 = come_decrement_ref_count(__dec_obj164, ((struct sNode*)__dec_obj164)->finalize, ((struct sNode*)__dec_obj164)->_protocol_obj, 0,0, (void*)0) :0);
            come_call_finalizer(sLoadRangeArrayNode_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer(sLoadRangeArrayNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer(list$1sNode$ph$p_finalize, array_num, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            ((node2) ? node2 = come_decrement_ref_count(node2, ((struct sNode*)node2)->finalize, ((struct sNode*)node2)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
        else if(!((struct sNode*)come_null_checker(node, "23field.nc", 1180))->terminated(((struct sNode*)come_null_checker(node, "23field.nc", 1180))->_protocol_obj)&&!range_array&&(*((struct sInfo* )come_null_checker(info, "23field.nc", 1180))->p==92&&*(((struct sInfo* )come_null_checker(info, "23field.nc", 1180))->p+1)==91||*((struct sInfo* )come_null_checker(info, "23field.nc", 1180))->p==91)) {
            quote_62=*((struct sInfo* )come_null_checker(info, "23field.nc", 1181))->p==92;
            if(quote_62) {
                ((struct sInfo* )come_null_checker(info, "23field.nc", 1183))->p++;
            }
            range=(_Bool)0;
            array_num_63=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count(((struct list$1sNode$ph*)come_null_checker(((struct list$1sNode$ph*)(__right_value0=(struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), (void*)0, 1187, "struct list$1sNode$ph*"))), "23field.nc", 1187)))));
            come_call_finalizer(list$1sNode$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            while(1) {
                range_array2=(_Bool)0;
                {
                    p_64=((struct sInfo* )come_null_checker(info, "23field.nc", 1191))->p;
                    sline_65=((struct sInfo* )come_null_checker(info, "23field.nc", 1192))->sline;
                    if(*((struct sInfo* )come_null_checker(info, "23field.nc", 1194))->p==91) {
                        ((struct sInfo* )come_null_checker(info, "23field.nc", 1195))->p++;
                        skip_spaces_and_lf(info);
                        no_comma_66=((struct sInfo* )come_null_checker(info, "23field.nc", 1198))->no_comma;
                        no_output_come_code_67=((struct sInfo* )come_null_checker(info, "23field.nc", 1199))->no_output_come_code;
                        ((struct sInfo* )come_null_checker(info, "23field.nc", 1200))->no_comma=(_Bool)1;
                        ((struct sInfo* )come_null_checker(info, "23field.nc", 1201))->no_output_come_code=(_Bool)1;
                        exp_68=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0));
                        ((struct sInfo* )come_null_checker(info, "23field.nc", 1203))->no_comma=no_comma_66;
                        ((struct sInfo* )come_null_checker(info, "23field.nc", 1204))->no_output_come_code=no_output_come_code_67;
                        if(*((struct sInfo* )come_null_checker(info, "23field.nc", 1206))->p==46&&*(((struct sInfo* )come_null_checker(info, "23field.nc", 1206))->p+1)==46) {
                            range_array2=(_Bool)1;
                        }
                        ((exp_68) ? exp_68 = come_decrement_ref_count(exp_68, ((struct sNode*)exp_68)->finalize, ((struct sNode*)exp_68)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                    }
                    ((struct sInfo* )come_null_checker(info, "23field.nc", 1211))->p=p_64;
                    ((struct sInfo* )come_null_checker(info, "23field.nc", 1212))->sline=sline_65;
                }
                if(range_array2) {
                    break;
                }
                else if(*((struct sInfo* )come_null_checker(info, "23field.nc", 1218))->p==91) {
                    ((struct sInfo* )come_null_checker(info, "23field.nc", 1219))->p++;
                    skip_spaces_and_lf(info);
                    skip_pointer_attribute(info);
                    node2_69=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0));
                    list$1sNode$ph_push_back(((struct list$1sNode$ph*)come_null_checker(array_num_63, "23field.nc", 1226)),(struct sNode*)come_increment_ref_count(node2_69));
                    if(*((struct sInfo* )come_null_checker(info, "23field.nc", 1228))->p==93) {
                        ((struct sInfo* )come_null_checker(info, "23field.nc", 1229))->p++;
                        skip_spaces_and_lf(info);
                    }
                    else {
                        err_msg(info,"require ] character");
                        exit(2);
                    }
                    ((node2_69) ? node2_69 = come_decrement_ref_count(node2_69, ((struct sNode*)node2_69)->finalize, ((struct sNode*)node2_69)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                }
                else {
                    break;
                }
            }
            if(!((struct sInfo* )come_null_checker(info, "23field.nc", 1242))->no_assign&&*((struct sInfo* )come_null_checker(info, "23field.nc", 1242))->p==61&&*(((struct sInfo* )come_null_checker(info, "23field.nc", 1242))->p+1)!=61&&*(((struct sInfo* )come_null_checker(info, "23field.nc", 1242))->p+1)!=62) {
                ((struct sInfo* )come_null_checker(info, "23field.nc", 1243))->p++;
                skip_spaces_and_lf(info);
                right_node=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0));
                skip_spaces_and_lf(info);
                node2_70=(struct sNode*)come_increment_ref_count(automatically_unwrap((struct sNode*)come_increment_ref_count(node),info,(_Bool)1,quote_62));
                _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 1252, "struct sNode");
                _inf_obj_value5=(struct sStoreArrayNode*)come_increment_ref_count(((struct sStoreArrayNode*)(__right_value1=sStoreArrayNode_initialize((struct sStoreArrayNode* )come_increment_ref_count(((struct sStoreArrayNode* )come_null_checker(((struct sStoreArrayNode* )(__right_value0=(struct sStoreArrayNode *)come_calloc(1, sizeof(struct sStoreArrayNode )*(1), (void*)0, 1252, "struct sStoreArrayNode* "))), "23field.nc", 1252))),node2_70,(struct sNode*)come_increment_ref_count(right_node),(struct list$1sNode$ph*)come_increment_ref_count(array_num_63),quote_62,info))));
                _inf_value5->_protocol_obj=_inf_obj_value5;
                _inf_value5->finalize=(void*)sStoreArrayNode_finalize;
                _inf_value5->clone=(void*)sStoreArrayNode_clone;
                _inf_value5->compile=(void*)sStoreArrayNode_compile;
                _inf_value5->sline=(void*)sNodeBase_sline;
                _inf_value5->sline_real=(void*)sNodeBase_sline_real;
                _inf_value5->sname=(void*)sNodeBase_sname;
                _inf_value5->terminated=(void*)sNodeBase_terminated;
                _inf_value5->kind=(void*)sStoreArrayNode_kind;
                __dec_obj169=node,
                node=(struct sNode*)come_increment_ref_count(_inf_value5);
                (__dec_obj169 ? __dec_obj169 = come_decrement_ref_count(__dec_obj169, ((struct sNode*)__dec_obj169)->finalize, ((struct sNode*)__dec_obj169)->_protocol_obj, 0,0, (void*)0) :0);
                come_call_finalizer(sStoreArrayNode_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                come_call_finalizer(sStoreArrayNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                ((node2_70) ? node2_70 = come_decrement_ref_count(node2_70, ((struct sNode*)node2_70)->finalize, ((struct sNode*)node2_70)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            }
            else {
                node2_71=(struct sNode*)come_increment_ref_count(automatically_unwrap((struct sNode*)come_increment_ref_count(node),info,(_Bool)1,quote_62));
                _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 1256, "struct sNode");
                _inf_obj_value6=(struct sLoadArrayNode*)come_increment_ref_count(((struct sLoadArrayNode*)(__right_value1=sLoadArrayNode_initialize((struct sLoadArrayNode* )come_increment_ref_count(((struct sLoadArrayNode* )come_null_checker(((struct sLoadArrayNode* )(__right_value0=(struct sLoadArrayNode *)come_calloc(1, sizeof(struct sLoadArrayNode )*(1), (void*)0, 1256, "struct sLoadArrayNode* "))), "23field.nc", 1256))),node2_71,(struct list$1sNode$ph*)come_increment_ref_count(array_num_63),quote_62,(_Bool)0,info))));
                _inf_value6->_protocol_obj=_inf_obj_value6;
                _inf_value6->finalize=(void*)sLoadArrayNode_finalize;
                _inf_value6->clone=(void*)sLoadArrayNode_clone;
                _inf_value6->compile=(void*)sLoadArrayNode_compile;
                _inf_value6->sline=(void*)sNodeBase_sline;
                _inf_value6->sline_real=(void*)sNodeBase_sline_real;
                _inf_value6->sname=(void*)sNodeBase_sname;
                _inf_value6->terminated=(void*)sNodeBase_terminated;
                _inf_value6->kind=(void*)sLoadArrayNode_kind;
                __dec_obj173=node,
                node=(struct sNode*)come_increment_ref_count(_inf_value6);
                (__dec_obj173 ? __dec_obj173 = come_decrement_ref_count(__dec_obj173, ((struct sNode*)__dec_obj173)->finalize, ((struct sNode*)__dec_obj173)->_protocol_obj, 0,0, (void*)0) :0);
                come_call_finalizer(sLoadArrayNode_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                come_call_finalizer(sLoadArrayNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                ((node2_71) ? node2_71 = come_decrement_ref_count(node2_71, ((struct sNode*)node2_71)->finalize, ((struct sNode*)node2_71)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            }
            come_call_finalizer(list$1sNode$ph$p_finalize, array_num_63, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if((*((struct sInfo* )come_null_checker(info, "23field.nc", 1259))->p==92&&*(((struct sInfo* )come_null_checker(info, "23field.nc", 1259))->p+1)==46)||(*((struct sInfo* )come_null_checker(info, "23field.nc", 1259))->p==92&&*(((struct sInfo* )come_null_checker(info, "23field.nc", 1259))->p+1)==45&&*(((struct sInfo* )come_null_checker(info, "23field.nc", 1259))->p+2)==62)||(*((struct sInfo* )come_null_checker(info, "23field.nc", 1259))->p==46&&*(((struct sInfo* )come_null_checker(info, "23field.nc", 1259))->p+1)!=46)||(*((struct sInfo* )come_null_checker(info, "23field.nc", 1259))->p==45&&*(((struct sInfo* )come_null_checker(info, "23field.nc", 1259))->p+1)==62)) {
            quote_72=*((struct sInfo* )come_null_checker(info, "23field.nc", 1260))->p==92;
            if(quote_72) {
                ((struct sInfo* )come_null_checker(info, "23field.nc", 1262))->p++;
            }
            arrow_=(_Bool)0;
            if(*((struct sInfo* )come_null_checker(info, "23field.nc", 1265))->p==46) {
                ((struct sInfo* )come_null_checker(info, "23field.nc", 1266))->p++;
                skip_spaces_and_lf(info);
            }
            else {
                arrow_=(_Bool)1;
                ((struct sInfo* )come_null_checker(info, "23field.nc", 1271))->p+=2;
                skip_spaces_and_lf(info);
            }
            skip_spaces_and_lf(info);
            field_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info));
            skip_spaces_and_lf(info);
            parse_method_generics_type=(_Bool)0;
            {
                p_73=((struct sInfo* )come_null_checker(info, "23field.nc", 1283))->p;
                sline_74=((struct sInfo* )come_null_checker(info, "23field.nc", 1284))->sline;
                if(*((struct sInfo* )come_null_checker(info, "23field.nc", 1286))->p==60) {
                    ((struct sInfo* )come_null_checker(info, "23field.nc", 1287))->p++;
                    skip_spaces_and_lf(info);
                    if(xisalpha(*((struct sInfo* )come_null_checker(info, "23field.nc", 1290))->p)||*((struct sInfo* )come_null_checker(info, "23field.nc", 1290))->p==95) {
                        word=(char* )come_increment_ref_count(parse_word((_Bool)0,info));
                        if(is_type_name(word,info)) {
                            parse_method_generics_type=(_Bool)1;
                        }
                        (word = come_decrement_ref_count(word, (void*)0, (void*)0, 0, 0, (void*)0));
                    }
                }
                ((struct sInfo* )come_null_checker(info, "23field.nc", 1299))->p=p_73;
                ((struct sInfo* )come_null_checker(info, "23field.nc", 1300))->sline=sline_74;
            }
            if(!((struct sInfo* )come_null_checker(info, "23field.nc", 1303))->no_assign&&*((struct sInfo* )come_null_checker(info, "23field.nc", 1303))->p==61&&*(((struct sInfo* )come_null_checker(info, "23field.nc", 1303))->p+1)!=61&&*(((struct sInfo* )come_null_checker(info, "23field.nc", 1303))->p+1)!=62) {
                ((struct sInfo* )come_null_checker(info, "23field.nc", 1304))->p++;
                skip_spaces_and_lf(info);
                right_node_75=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0));
                node2_76=(struct sNode*)come_increment_ref_count(automatically_unwrap((struct sNode*)come_increment_ref_count(node),info,(_Bool)1,quote_72));
                _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 1311, "struct sNode");
                _inf_obj_value7=(struct sStoreFieldNode*)come_increment_ref_count(((struct sStoreFieldNode*)(__right_value1=sStoreFieldNode_initialize((struct sStoreFieldNode* )come_increment_ref_count(((struct sStoreFieldNode* )come_null_checker(((struct sStoreFieldNode* )(__right_value0=(struct sStoreFieldNode *)come_calloc(1, sizeof(struct sStoreFieldNode )*(1), (void*)0, 1311, "struct sStoreFieldNode* "))), "23field.nc", 1311))),node2_76,(struct sNode*)come_increment_ref_count(right_node_75),(char* )come_increment_ref_count(field_name),info,arrow_))));
                _inf_value7->_protocol_obj=_inf_obj_value7;
                _inf_value7->finalize=(void*)sStoreFieldNode_finalize;
                _inf_value7->clone=(void*)sStoreFieldNode_clone;
                _inf_value7->compile=(void*)sStoreFieldNode_compile;
                _inf_value7->sline=(void*)sNodeBase_sline;
                _inf_value7->sline_real=(void*)sNodeBase_sline_real;
                _inf_value7->sname=(void*)sNodeBase_sname;
                _inf_value7->terminated=(void*)sNodeBase_terminated;
                _inf_value7->kind=(void*)sStoreFieldNode_kind;
                __dec_obj174=node,
                node=(struct sNode*)come_increment_ref_count(_inf_value7);
                (__dec_obj174 ? __dec_obj174 = come_decrement_ref_count(__dec_obj174, ((struct sNode*)__dec_obj174)->finalize, ((struct sNode*)__dec_obj174)->_protocol_obj, 0,0, (void*)0) :0);
                come_call_finalizer(sStoreFieldNode_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                come_call_finalizer(sStoreFieldNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                ((right_node_75) ? right_node_75 = come_decrement_ref_count(right_node_75, ((struct sNode*)right_node_75)->finalize, ((struct sNode*)right_node_75)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                ((node2_76) ? node2_76 = come_decrement_ref_count(node2_76, ((struct sNode*)node2_76)->finalize, ((struct sNode*)node2_76)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            }
            else if(!gComeC&&(*((struct sInfo* )come_null_checker(info, "23field.nc", 1313))->p==40||*((struct sInfo* )come_null_checker(info, "23field.nc", 1313))->p==123||parse_method_generics_type)) {
                if(string_operator_equals(((char* )come_null_checker(field_name, "23field.nc", 1314)),"if")) {
                    node2_77=(struct sNode*)come_increment_ref_count(automatically_unwrap((struct sNode*)come_increment_ref_count(node),info,(_Bool)0,quote_72));
                    __dec_obj175=node,
                    node=(struct sNode*)come_increment_ref_count(parse_if_method_call((struct sNode*)come_increment_ref_count(node2_77),info));
                    (__dec_obj175 ? __dec_obj175 = come_decrement_ref_count(__dec_obj175, ((struct sNode*)__dec_obj175)->finalize, ((struct sNode*)__dec_obj175)->_protocol_obj, 0,0, (void*)0) :0);
                    ((node2_77) ? node2_77 = come_decrement_ref_count(node2_77, ((struct sNode*)node2_77)->finalize, ((struct sNode*)node2_77)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                }
                else if(string_operator_equals(((char* )come_null_checker(field_name, "23field.nc", 1319)),"elif")) {
                    node2_78=(struct sNode*)come_increment_ref_count(automatically_unwrap((struct sNode*)come_increment_ref_count(node),info,(_Bool)0,quote_72));
                    __dec_obj176=node,
                    node=(struct sNode*)come_increment_ref_count(parse_elif_method_call((struct sNode*)come_increment_ref_count(node2_78),info));
                    (__dec_obj176 ? __dec_obj176 = come_decrement_ref_count(__dec_obj176, ((struct sNode*)__dec_obj176)->finalize, ((struct sNode*)__dec_obj176)->_protocol_obj, 0,0, (void*)0) :0);
                    ((node2_78) ? node2_78 = come_decrement_ref_count(node2_78, ((struct sNode*)node2_78)->finalize, ((struct sNode*)node2_78)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                }
                else if(string_operator_equals(((char* )come_null_checker(field_name, "23field.nc", 1323)),"case")) {
                    node2_79=(struct sNode*)come_increment_ref_count(automatically_unwrap((struct sNode*)come_increment_ref_count(node),info,(_Bool)0,quote_72));
                    __dec_obj177=node,
                    node=(struct sNode*)come_increment_ref_count(parse_match((struct sNode*)come_increment_ref_count(node2_79),info));
                    (__dec_obj177 ? __dec_obj177 = come_decrement_ref_count(__dec_obj177, ((struct sNode*)__dec_obj177)->finalize, ((struct sNode*)__dec_obj177)->_protocol_obj, 0,0, (void*)0) :0);
                    ((node2_79) ? node2_79 = come_decrement_ref_count(node2_79, ((struct sNode*)node2_79)->finalize, ((struct sNode*)node2_79)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                }
                else if(string_operator_equals(((char* )come_null_checker(field_name, "23field.nc", 1327)),"catch")) {
                    node2_80=(struct sNode*)come_increment_ref_count(automatically_unwrap((struct sNode*)come_increment_ref_count(node),info,(_Bool)0,quote_72));
                    __dec_obj178=node,
                    node=(struct sNode*)come_increment_ref_count(parse_catch((struct sNode*)come_increment_ref_count(node2_80),info));
                    (__dec_obj178 ? __dec_obj178 = come_decrement_ref_count(__dec_obj178, ((struct sNode*)__dec_obj178)->finalize, ((struct sNode*)__dec_obj178)->_protocol_obj, 0,0, (void*)0) :0);
                    ((node2_80) ? node2_80 = come_decrement_ref_count(node2_80, ((struct sNode*)node2_80)->finalize, ((struct sNode*)node2_80)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                }
                else if(string_operator_equals(((char* )come_null_checker(field_name, "23field.nc", 1331)),"less")) {
                    node2_81=(struct sNode*)come_increment_ref_count(automatically_unwrap((struct sNode*)come_increment_ref_count(node),info,(_Bool)0,quote_72));
                    __dec_obj179=node,
                    node=(struct sNode*)come_increment_ref_count(parse_less_method_call((struct sNode*)come_increment_ref_count(node2_81),info));
                    (__dec_obj179 ? __dec_obj179 = come_decrement_ref_count(__dec_obj179, ((struct sNode*)__dec_obj179)->finalize, ((struct sNode*)__dec_obj179)->_protocol_obj, 0,0, (void*)0) :0);
                    ((node2_81) ? node2_81 = come_decrement_ref_count(node2_81, ((struct sNode*)node2_81)->finalize, ((struct sNode*)node2_81)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                }
                else if(string_operator_equals(((char* )come_null_checker(field_name, "23field.nc", 1335)),"unwrap")) {
                    node2_82=(struct sNode*)come_increment_ref_count(sNode_clone(node));
                    __dec_obj180=node,
                    node=(struct sNode*)come_increment_ref_count(parse_method_call_v20((struct sNode*)come_increment_ref_count(node2_82),(char* )come_increment_ref_count(field_name),info,arrow_));
                    (__dec_obj180 ? __dec_obj180 = come_decrement_ref_count(__dec_obj180, ((struct sNode*)__dec_obj180)->finalize, ((struct sNode*)__dec_obj180)->_protocol_obj, 0,0, (void*)0) :0);
                    ((node2_82) ? node2_82 = come_decrement_ref_count(node2_82, ((struct sNode*)node2_82)->finalize, ((struct sNode*)node2_82)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                }
                else {
                    node2_83=(struct sNode*)come_increment_ref_count(automatically_unwrap((struct sNode*)come_increment_ref_count(node),info,(_Bool)1,quote_72));
                    __dec_obj181=node,
                    node=(struct sNode*)come_increment_ref_count(parse_method_call_v20((struct sNode*)come_increment_ref_count(node2_83),(char* )come_increment_ref_count(field_name),info,arrow_));
                    (__dec_obj181 ? __dec_obj181 = come_decrement_ref_count(__dec_obj181, ((struct sNode*)__dec_obj181)->finalize, ((struct sNode*)__dec_obj181)->_protocol_obj, 0,0, (void*)0) :0);
                    ((node2_83) ? node2_83 = come_decrement_ref_count(node2_83, ((struct sNode*)node2_83)->finalize, ((struct sNode*)node2_83)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                }
            }
            else {
                node2_84=(struct sNode*)come_increment_ref_count(automatically_unwrap((struct sNode*)come_increment_ref_count(node),info,(_Bool)1,quote_72));
                _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 1346, "struct sNode");
                _inf_obj_value8=(struct sLoadFieldNode*)come_increment_ref_count(((struct sLoadFieldNode*)(__right_value1=sLoadFieldNode_initialize((struct sLoadFieldNode* )come_increment_ref_count(((struct sLoadFieldNode* )come_null_checker(((struct sLoadFieldNode* )(__right_value0=(struct sLoadFieldNode *)come_calloc(1, sizeof(struct sLoadFieldNode )*(1), (void*)0, 1346, "struct sLoadFieldNode* "))), "23field.nc", 1346))),node2_84,(char* )come_increment_ref_count(field_name),info,arrow_))));
                _inf_value8->_protocol_obj=_inf_obj_value8;
                _inf_value8->finalize=(void*)sLoadFieldNode_finalize;
                _inf_value8->clone=(void*)sLoadFieldNode_clone;
                _inf_value8->compile=(void*)sLoadFieldNode_compile;
                _inf_value8->sline=(void*)sNodeBase_sline;
                _inf_value8->sline_real=(void*)sNodeBase_sline_real;
                _inf_value8->sname=(void*)sNodeBase_sname;
                _inf_value8->terminated=(void*)sNodeBase_terminated;
                _inf_value8->kind=(void*)sLoadFieldNode_kind;
                __dec_obj182=node,
                node=(struct sNode*)come_increment_ref_count(_inf_value8);
                (__dec_obj182 ? __dec_obj182 = come_decrement_ref_count(__dec_obj182, ((struct sNode*)__dec_obj182)->finalize, ((struct sNode*)__dec_obj182)->_protocol_obj, 0,0, (void*)0) :0);
                come_call_finalizer(sLoadFieldNode_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                come_call_finalizer(sLoadFieldNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                ((node2_84) ? node2_84 = come_decrement_ref_count(node2_84, ((struct sNode*)node2_84)->finalize, ((struct sNode*)node2_84)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            }
            (field_name = come_decrement_ref_count(field_name, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        else {
            node2_85=(struct sNode*)come_increment_ref_count(post_position_operator_v21((struct sNode*)come_increment_ref_count(node),info));
            if(node2_85==((void*)0)) {
                ((node2_85) ? node2_85 = come_decrement_ref_count(node2_85, ((struct sNode*)node2_85)->finalize, ((struct sNode*)node2_85)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                break;
            }
            __dec_obj183=node,
            node=(struct sNode*)come_increment_ref_count(node2_85);
            (__dec_obj183 ? __dec_obj183 = come_decrement_ref_count(__dec_obj183, ((struct sNode*)__dec_obj183)->finalize, ((struct sNode*)__dec_obj183)->_protocol_obj, 0,0, (void*)0) :0);
            ((node2_85) ? node2_85 = come_decrement_ref_count(node2_85, ((struct sNode*)node2_85)->finalize, ((struct sNode*)node2_85)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
    }
    __result_obj__0 = (struct sNode*)come_increment_ref_count(node);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    return __result_obj__0;
}

static struct list$1sNode$ph* list$1sNode$ph_push_back(struct list$1sNode$ph* self, struct sNode* item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_push_back"; neo_current_frame = &fr;
    struct list$1sNode$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1sNode$ph* litem;
    struct sNode* __dec_obj158;
    struct list_item$1sNode$ph* litem_60;
    struct sNode* __dec_obj159;
    struct list_item$1sNode$ph* litem_61;
    struct sNode* __dec_obj160;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1768))->len==0) {
        litem=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), (void*)0, 1769, "struct list_item$1sNode$ph*"))));
        ((struct list_item$1sNode$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1771))->prev=((void*)0);
        ((struct list_item$1sNode$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1772))->next=((void*)0);
        __dec_obj158=((struct list_item$1sNode$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1773))->item,
        ((struct list_item$1sNode$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1773))->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj158 ? __dec_obj158 = come_decrement_ref_count(__dec_obj158, ((struct sNode*)__dec_obj158)->finalize, ((struct sNode*)__dec_obj158)->_protocol_obj, 0,0, (void*)0) :0);
        ((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1775))->tail=litem;
        ((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1776))->head=litem;
    }
    else if(((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1778))->len==1) {
        litem_60=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), (void*)0, 1779, "struct list_item$1sNode$ph*"))));
        ((struct list_item$1sNode$ph*)come_null_checker(litem_60, "/usr/local/include/neo-c.h", 1781))->prev=((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1781))->head;
        ((struct list_item$1sNode$ph*)come_null_checker(litem_60, "/usr/local/include/neo-c.h", 1782))->next=((void*)0);
        __dec_obj159=((struct list_item$1sNode$ph*)come_null_checker(litem_60, "/usr/local/include/neo-c.h", 1783))->item,
        ((struct list_item$1sNode$ph*)come_null_checker(litem_60, "/usr/local/include/neo-c.h", 1783))->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj159 ? __dec_obj159 = come_decrement_ref_count(__dec_obj159, ((struct sNode*)__dec_obj159)->finalize, ((struct sNode*)__dec_obj159)->_protocol_obj, 0,0, (void*)0) :0);
        ((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1785))->tail=litem_60;
        ((struct list_item$1sNode$ph*)come_null_checker(((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1786))->head, "/usr/local/include/neo-c.h", 1786))->next=litem_60;
    }
    else {
        litem_61=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), (void*)0, 1789, "struct list_item$1sNode$ph*"))));
        ((struct list_item$1sNode$ph*)come_null_checker(litem_61, "/usr/local/include/neo-c.h", 1791))->prev=((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1791))->tail;
        ((struct list_item$1sNode$ph*)come_null_checker(litem_61, "/usr/local/include/neo-c.h", 1792))->next=((void*)0);
        __dec_obj160=((struct list_item$1sNode$ph*)come_null_checker(litem_61, "/usr/local/include/neo-c.h", 1793))->item,
        ((struct list_item$1sNode$ph*)come_null_checker(litem_61, "/usr/local/include/neo-c.h", 1793))->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj160 ? __dec_obj160 = come_decrement_ref_count(__dec_obj160, ((struct sNode*)__dec_obj160)->finalize, ((struct sNode*)__dec_obj160)->_protocol_obj, 0,0, (void*)0) :0);
        ((struct list_item$1sNode$ph*)come_null_checker(((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1795))->tail, "/usr/local/include/neo-c.h", 1795))->next=litem_61;
        ((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1796))->tail=litem_61;
    }
    ((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1799))->len++;
    __result_obj__0 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sLoadRangeArrayNode* sLoadRangeArrayNode_clone(struct sLoadRangeArrayNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sLoadRangeArrayNode_clone"; neo_current_frame = &fr;
    struct sLoadRangeArrayNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sLoadRangeArrayNode*  result  ;
    char*  __dec_obj161  ;
    struct list$1sNode$ph* __dec_obj162;
    struct sNode* __dec_obj163;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sLoadRangeArrayNode* )come_increment_ref_count((struct sLoadRangeArrayNode *)come_calloc(1, sizeof(struct sLoadRangeArrayNode )*(1), (void*)0, 5, "struct sLoadRangeArrayNode* "));
    if(self!=((void*)0)) {
        ((struct sLoadRangeArrayNode* )come_null_checker(result, "sLoadRangeArrayNode_clone", 6))->sline=((struct sLoadRangeArrayNode*)come_null_checker(self, "sLoadRangeArrayNode_clone", 6))->sline;
    }
    if(self!=((void*)0)&&((struct sLoadRangeArrayNode*)come_null_checker(self, "sLoadRangeArrayNode_clone", 7))->sname!=((void*)0)) {
        __dec_obj161=((struct sLoadRangeArrayNode* )come_null_checker(result, "sLoadRangeArrayNode_clone", 7))->sname,
        ((struct sLoadRangeArrayNode* )come_null_checker(result, "sLoadRangeArrayNode_clone", 7))->sname=(char* )come_increment_ref_count((char* )come_memdup(((struct sLoadRangeArrayNode*)come_null_checker(self, "sLoadRangeArrayNode_clone", 7))->sname, "sLoadRangeArrayNode_clone", 7, "char* "));
        __dec_obj161 = come_decrement_ref_count(__dec_obj161, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        ((struct sLoadRangeArrayNode* )come_null_checker(result, "sLoadRangeArrayNode_clone", 8))->sline_real=((struct sLoadRangeArrayNode*)come_null_checker(self, "sLoadRangeArrayNode_clone", 8))->sline_real;
    }
    if(self!=((void*)0)&&((struct sLoadRangeArrayNode*)come_null_checker(self, "sLoadRangeArrayNode_clone", 9))->mArrayNum!=((void*)0)) {
        __dec_obj162=((struct sLoadRangeArrayNode* )come_null_checker(result, "sLoadRangeArrayNode_clone", 9))->mArrayNum,
        ((struct sLoadRangeArrayNode* )come_null_checker(result, "sLoadRangeArrayNode_clone", 9))->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(((struct sLoadRangeArrayNode*)come_null_checker(self, "sLoadRangeArrayNode_clone", 9))->mArrayNum));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj162,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sLoadRangeArrayNode*)come_null_checker(self, "sLoadRangeArrayNode_clone", 10))->mLeft!=((void*)0)) {
        __dec_obj163=((struct sLoadRangeArrayNode* )come_null_checker(result, "sLoadRangeArrayNode_clone", 10))->mLeft,
        ((struct sLoadRangeArrayNode* )come_null_checker(result, "sLoadRangeArrayNode_clone", 10))->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(((struct sLoadRangeArrayNode*)come_null_checker(self, "sLoadRangeArrayNode_clone", 10))->mLeft));
        (__dec_obj163 ? __dec_obj163 = come_decrement_ref_count(__dec_obj163, ((struct sNode*)__dec_obj163)->finalize, ((struct sNode*)__dec_obj163)->_protocol_obj, 0,0, (void*)0) :0);
    }
    if(self!=((void*)0)) {
        ((struct sLoadRangeArrayNode* )come_null_checker(result, "sLoadRangeArrayNode_clone", 11))->mQuote=((struct sLoadRangeArrayNode*)come_null_checker(self, "sLoadRangeArrayNode_clone", 11))->mQuote;
    }
    __result_obj__0 = result;
    come_call_finalizer(sLoadRangeArrayNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sStoreArrayNode* sStoreArrayNode_clone(struct sStoreArrayNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sStoreArrayNode_clone"; neo_current_frame = &fr;
    struct sStoreArrayNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sStoreArrayNode*  result  ;
    char*  __dec_obj165  ;
    struct sNode* __dec_obj166;
    struct sNode* __dec_obj167;
    struct list$1sNode$ph* __dec_obj168;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sStoreArrayNode* )come_increment_ref_count((struct sStoreArrayNode *)come_calloc(1, sizeof(struct sStoreArrayNode )*(1), (void*)0, 5, "struct sStoreArrayNode* "));
    if(self!=((void*)0)) {
        ((struct sStoreArrayNode* )come_null_checker(result, "sStoreArrayNode_clone", 6))->sline=((struct sStoreArrayNode*)come_null_checker(self, "sStoreArrayNode_clone", 6))->sline;
    }
    if(self!=((void*)0)&&((struct sStoreArrayNode*)come_null_checker(self, "sStoreArrayNode_clone", 7))->sname!=((void*)0)) {
        __dec_obj165=((struct sStoreArrayNode* )come_null_checker(result, "sStoreArrayNode_clone", 7))->sname,
        ((struct sStoreArrayNode* )come_null_checker(result, "sStoreArrayNode_clone", 7))->sname=(char* )come_increment_ref_count((char* )come_memdup(((struct sStoreArrayNode*)come_null_checker(self, "sStoreArrayNode_clone", 7))->sname, "sStoreArrayNode_clone", 7, "char* "));
        __dec_obj165 = come_decrement_ref_count(__dec_obj165, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        ((struct sStoreArrayNode* )come_null_checker(result, "sStoreArrayNode_clone", 8))->sline_real=((struct sStoreArrayNode*)come_null_checker(self, "sStoreArrayNode_clone", 8))->sline_real;
    }
    if(self!=((void*)0)&&((struct sStoreArrayNode*)come_null_checker(self, "sStoreArrayNode_clone", 9))->mLeft!=((void*)0)) {
        __dec_obj166=((struct sStoreArrayNode* )come_null_checker(result, "sStoreArrayNode_clone", 9))->mLeft,
        ((struct sStoreArrayNode* )come_null_checker(result, "sStoreArrayNode_clone", 9))->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(((struct sStoreArrayNode*)come_null_checker(self, "sStoreArrayNode_clone", 9))->mLeft));
        (__dec_obj166 ? __dec_obj166 = come_decrement_ref_count(__dec_obj166, ((struct sNode*)__dec_obj166)->finalize, ((struct sNode*)__dec_obj166)->_protocol_obj, 0,0, (void*)0) :0);
    }
    if(self!=((void*)0)&&((struct sStoreArrayNode*)come_null_checker(self, "sStoreArrayNode_clone", 10))->mRight!=((void*)0)) {
        __dec_obj167=((struct sStoreArrayNode* )come_null_checker(result, "sStoreArrayNode_clone", 10))->mRight,
        ((struct sStoreArrayNode* )come_null_checker(result, "sStoreArrayNode_clone", 10))->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(((struct sStoreArrayNode*)come_null_checker(self, "sStoreArrayNode_clone", 10))->mRight));
        (__dec_obj167 ? __dec_obj167 = come_decrement_ref_count(__dec_obj167, ((struct sNode*)__dec_obj167)->finalize, ((struct sNode*)__dec_obj167)->_protocol_obj, 0,0, (void*)0) :0);
    }
    if(self!=((void*)0)&&((struct sStoreArrayNode*)come_null_checker(self, "sStoreArrayNode_clone", 11))->mArrayNum!=((void*)0)) {
        __dec_obj168=((struct sStoreArrayNode* )come_null_checker(result, "sStoreArrayNode_clone", 11))->mArrayNum,
        ((struct sStoreArrayNode* )come_null_checker(result, "sStoreArrayNode_clone", 11))->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(((struct sStoreArrayNode*)come_null_checker(self, "sStoreArrayNode_clone", 11))->mArrayNum));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj168,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)) {
        ((struct sStoreArrayNode* )come_null_checker(result, "sStoreArrayNode_clone", 12))->mQuote=((struct sStoreArrayNode*)come_null_checker(self, "sStoreArrayNode_clone", 12))->mQuote;
    }
    __result_obj__0 = result;
    come_call_finalizer(sStoreArrayNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sLoadArrayNode* sLoadArrayNode_clone(struct sLoadArrayNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sLoadArrayNode_clone"; neo_current_frame = &fr;
    struct sLoadArrayNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sLoadArrayNode*  result  ;
    char*  __dec_obj170  ;
    struct list$1sNode$ph* __dec_obj171;
    struct sNode* __dec_obj172;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sLoadArrayNode* )come_increment_ref_count((struct sLoadArrayNode *)come_calloc(1, sizeof(struct sLoadArrayNode )*(1), (void*)0, 5, "struct sLoadArrayNode* "));
    if(self!=((void*)0)) {
        ((struct sLoadArrayNode* )come_null_checker(result, "sLoadArrayNode_clone", 6))->sline=((struct sLoadArrayNode*)come_null_checker(self, "sLoadArrayNode_clone", 6))->sline;
    }
    if(self!=((void*)0)&&((struct sLoadArrayNode*)come_null_checker(self, "sLoadArrayNode_clone", 7))->sname!=((void*)0)) {
        __dec_obj170=((struct sLoadArrayNode* )come_null_checker(result, "sLoadArrayNode_clone", 7))->sname,
        ((struct sLoadArrayNode* )come_null_checker(result, "sLoadArrayNode_clone", 7))->sname=(char* )come_increment_ref_count((char* )come_memdup(((struct sLoadArrayNode*)come_null_checker(self, "sLoadArrayNode_clone", 7))->sname, "sLoadArrayNode_clone", 7, "char* "));
        __dec_obj170 = come_decrement_ref_count(__dec_obj170, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        ((struct sLoadArrayNode* )come_null_checker(result, "sLoadArrayNode_clone", 8))->sline_real=((struct sLoadArrayNode*)come_null_checker(self, "sLoadArrayNode_clone", 8))->sline_real;
    }
    if(self!=((void*)0)&&((struct sLoadArrayNode*)come_null_checker(self, "sLoadArrayNode_clone", 9))->mArrayNum!=((void*)0)) {
        __dec_obj171=((struct sLoadArrayNode* )come_null_checker(result, "sLoadArrayNode_clone", 9))->mArrayNum,
        ((struct sLoadArrayNode* )come_null_checker(result, "sLoadArrayNode_clone", 9))->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(((struct sLoadArrayNode*)come_null_checker(self, "sLoadArrayNode_clone", 9))->mArrayNum));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj171,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)) {
        ((struct sLoadArrayNode* )come_null_checker(result, "sLoadArrayNode_clone", 10))->mBreakGuard=((struct sLoadArrayNode*)come_null_checker(self, "sLoadArrayNode_clone", 10))->mBreakGuard;
    }
    if(self!=((void*)0)&&((struct sLoadArrayNode*)come_null_checker(self, "sLoadArrayNode_clone", 11))->mLeft!=((void*)0)) {
        __dec_obj172=((struct sLoadArrayNode* )come_null_checker(result, "sLoadArrayNode_clone", 11))->mLeft,
        ((struct sLoadArrayNode* )come_null_checker(result, "sLoadArrayNode_clone", 11))->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(((struct sLoadArrayNode*)come_null_checker(self, "sLoadArrayNode_clone", 11))->mLeft));
        (__dec_obj172 ? __dec_obj172 = come_decrement_ref_count(__dec_obj172, ((struct sNode*)__dec_obj172)->finalize, ((struct sNode*)__dec_obj172)->_protocol_obj, 0,0, (void*)0) :0);
    }
    if(self!=((void*)0)) {
        ((struct sLoadArrayNode* )come_null_checker(result, "sLoadArrayNode_clone", 12))->mQuote=((struct sLoadArrayNode*)come_null_checker(self, "sLoadArrayNode_clone", 12))->mQuote;
    }
    __result_obj__0 = result;
    come_call_finalizer(sLoadArrayNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

