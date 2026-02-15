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

struct sStructNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    char*  mName  ;
    struct sClass*  mClass  ;
    char*  pragma  ;
    _Bool anonymous;
};

struct sStructNobodyNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    char*  mName  ;
};

struct sClassNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    char*  mName  ;
    struct sClass*  mClass  ;
    struct list$1sNode$ph* mMethods;
};

struct list_item$1sClass$p
{
    struct sClass*  item  ;
    struct list_item$1sClass$p* prev;
    struct list_item$1sClass$p* next;
};

struct list$1sClass$p
{
    struct list_item$1sClass$p* head;
    struct list_item$1sClass$p* tail;
    int len;
    struct list_item$1sClass$p* it;
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
void* come_alloc_mem_from_heap_pool(unsigned long  compiletime_size  , unsigned long  size  , const char* sname, int sline, const char* class_name);
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
char*  parse_struct_attribute(struct sInfo*  info  , _Bool allow_end);
char*  parse_declspec_attribute(struct sInfo*  info  );
_Bool is_contained_method_generics_types(struct sType*  type  , struct sInfo*  info  );
_Bool is_contained_generics_types(struct sType*  type  , struct sInfo*  info  );
char*  get_none_generics_name(char* class_name);
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
void output_aggregate_field(struct sType*  type  , char*  tag_name  , struct buffer*  buf  , _Bool* existance_generics, char*  field_name  , int indent, struct sInfo*  info  , _Bool* named_child);
static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_begin(struct list$1tuple2$2char$phsType$ph$ph* self);
static _Bool list$1tuple2$2char$phsType$ph$ph_end(struct list$1tuple2$2char$phsType$ph$ph* self);
static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_next(struct list$1tuple2$2char$phsType$ph$ph* self);
static struct sType*  map$2char$phsType$ph$p_operator_load_element(struct map$2char$phsType$ph* self, char*  key  );
static void sType_finalize(struct sType*  self  );
static void list$1sType$ph$p_finalize(struct list$1sType$ph* self);
static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self);
static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self);
static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self);
static void list$1int$$p_finalize(struct list$1int$* self);
static void list_item$1int$$p_finalize(struct list_item$1int$* self);
static void list$1char$ph$p_finalize(struct list$1char$ph* self);
static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self);
static struct sType*  map$2char$phsType$ph_operator_load_element(struct map$2char$phsType$ph* self, char*  key  );
static struct map$2char$phsType$ph* map$2char$phsType$ph_insert(struct map$2char$phsType$ph* self, char*  key  , struct sType*  item  , _Bool by_pointer);
static void map$2char$phsType$ph_rehash(struct map$2char$phsType$ph* self);
static char*  map$2char$phsType$ph_begin(struct map$2char$phsType$ph* self);
static _Bool map$2char$phsType$ph_end(struct map$2char$phsType$ph* self);
static char*  map$2char$phsType$ph_next(struct map$2char$phsType$ph* self);
static struct sType*  map$2char$phsType$ph_at(struct map$2char$phsType$ph* self, char*  key  , struct sType*  default_value  , _Bool by_pointer);
static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char*  item  , _Bool by_pointer);
static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail);
static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self);
static char*  list$1char$ph_begin(struct list$1char$ph* self);
static _Bool list$1char$ph_end(struct list$1char$ph* self);
static char*  list$1char$ph_next(struct list$1char$ph* self);
static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char*  item  );
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
static struct map$2char$phbuffer$ph* map$2char$phbuffer$ph_remove(struct map$2char$phbuffer$ph* self, char*  key  , _Bool by_pointer);
static void list$1tuple2$2char$phsType$ph$ph$p_finalize(struct list$1tuple2$2char$phsType$ph$ph* self);
static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self);
static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self);
void output_struct(struct sClass*  klass  , char*  pragma  , struct sInfo*  info  , _Bool anonymous);
static int list$1tuple2$2char$phsType$ph$ph_length(struct list$1tuple2$2char$phsType$ph$ph* self);
static struct buffer*  map$2char$phbuffer$ph$p_operator_load_element(struct map$2char$phbuffer$ph* self, char*  key  );
static struct buffer*  map$2char$phbuffer$ph_operator_load_element(struct map$2char$phbuffer$ph* self, char*  key  );
static struct map$2char$phbuffer$ph* map$2char$phbuffer$ph_insert(struct map$2char$phbuffer$ph* self, char*  key  , struct buffer*  item  , _Bool by_pointer);
static void map$2char$phbuffer$ph_rehash(struct map$2char$phbuffer$ph* self);
static char*  map$2char$phbuffer$ph_begin(struct map$2char$phbuffer$ph* self);
static _Bool map$2char$phbuffer$ph_end(struct map$2char$phbuffer$ph* self);
static char*  map$2char$phbuffer$ph_next(struct map$2char$phbuffer$ph* self);
static struct buffer*  map$2char$phbuffer$ph_at(struct map$2char$phbuffer$ph* self, char*  key  , struct buffer*  default_value  , _Bool by_pointer);
_Bool output_generics_struct(struct sType*  type  , struct sType*  generics_type  , struct sInfo*  info  );
static _Bool map$2char$phsClass$ph_find(struct map$2char$phsClass$ph* self, char*  key  , _Bool by_pointer);
static struct sClass*  map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char*  key  );
static void sClass_finalize(struct sClass*  self  );
static struct sClass*  map$2char$phsClass$ph_operator_load_element(struct map$2char$phsClass$ph* self, char*  key  );
static struct map$2char$phsClass$ph* map$2char$phsClass$ph_insert(struct map$2char$phsClass$ph* self, char*  key  , struct sClass*  item  , _Bool by_pointer);
static void map$2char$phsClass$ph_rehash(struct map$2char$phsClass$ph* self);
static char*  map$2char$phsClass$ph_begin(struct map$2char$phsClass$ph* self);
static _Bool map$2char$phsClass$ph_end(struct map$2char$phsClass$ph* self);
static char*  map$2char$phsClass$ph_next(struct map$2char$phsClass$ph* self);
static struct sClass*  map$2char$phsClass$ph_at(struct map$2char$phsClass$ph* self, char*  key  , struct sClass*  default_value  , _Bool by_pointer);
static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph_push_back(struct list$1tuple2$2char$phsType$ph$ph* self, struct tuple2$2char$phsType$ph* item);
static struct tuple2$2char$phsType$ph* tuple2$2char$phsType$ph_initialize(struct tuple2$2char$phsType$ph* self, char*  v1  , struct sType*  v2  );
static struct list$1sType$ph* list$1sType$ph_reset(struct list$1sType$ph* self);
static int list$1sType$ph_length(struct list$1sType$ph* self);
struct sStructNode* sStructNode_initialize(struct sStructNode* self, char*  name  , struct sClass*  klass  , struct sInfo*  info  , _Bool anonymous);
_Bool sStructNode_terminated(struct sStructNode* self);
char*  sStructNode_kind(struct sStructNode* self);
_Bool sStructNode_compile(struct sStructNode* self, struct sInfo*  info  );
static void sNodeBase_finalize(struct sNodeBase* self);
static void sStructNode_finalize(struct sStructNode* self);
struct sStructNobodyNode* sStructNobodyNode_initialize(struct sStructNobodyNode* self, char*  name  , struct sInfo*  info  );
_Bool sStructNobodyNode_terminated(struct sStructNobodyNode* self);
char*  sStructNobodyNode_kind(struct sStructNobodyNode* self);
_Bool sStructNobodyNode_compile(struct sStructNobodyNode* self, struct sInfo*  info  );
static void sStructNobodyNode_finalize(struct sStructNobodyNode* self);
struct sNode* create_nothing_node(struct sInfo*  info  );
static void sNothingNode_finalize(struct sNothingNode* self);
static struct sNothingNode* sNothingNode_clone(struct sNothingNode* self);
struct sClassNode* sClassNode_initialize(struct sClassNode* self, char*  name  , struct sClass*  klass  , struct list$1sNode$ph* methods, struct sInfo*  info  );
_Bool sClassNode_terminated(struct sClassNode* self);
char*  sClassNode_kind(struct sClassNode* self);
_Bool sClassNode_compile(struct sClassNode* self, struct sInfo*  info  );
static struct sClass*  sClass_clone(struct sClass*  self  );
static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph$p_clone(struct list$1tuple2$2char$phsType$ph$ph* self);
static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph_initialize(struct list$1tuple2$2char$phsType$ph$ph* self);
static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph_add(struct list$1tuple2$2char$phsType$ph$ph* self, struct tuple2$2char$phsType$ph* item);
static struct tuple2$2char$phsType$ph* tuple2$2char$phsType$ph_clone(struct tuple2$2char$phsType$ph* self);
static void tuple2$2char$phsType$ph_finalize(struct tuple2$2char$phsType$ph* self);
static void list$1tuple2$2char$phsType$ph$ph_finalize(struct list$1tuple2$2char$phsType$ph$ph* self);
static void sClassNode_finalize(struct sClassNode* self);
static struct sNode* list$1sNode$ph_begin(struct list$1sNode$ph* self);
static _Bool list$1sNode$ph_end(struct list$1sNode$ph* self);
static struct sNode* list$1sNode$ph_next(struct list$1sNode$ph* self);
struct sNode* parse_struct(char*  type_name  , char*  struct_attribute  , struct sInfo*  info  , _Bool anonymous);
static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph_reset(struct list$1tuple2$2char$phsType$ph$ph* self);
static void tuple3$3sType$phchar$ph_Bool$$p_finalize(struct tuple3$3sType$phchar$ph_Bool$* self);
static void tuple2$2sType$phchar$ph$p_finalize(struct tuple2$2sType$phchar$ph* self);
static struct sStructNode* sStructNode_clone(struct sStructNode* self);
struct sNode* top_level_v98(char* buf, char* head, int head_sline, struct sInfo*  info  );
static struct sStructNobodyNode* sStructNobodyNode_clone(struct sStructNobodyNode* self);
static struct list$1sClass$p* list$1sClass$p_initialize(struct list$1sClass$p* self);
static void list$1sClass$p$p_finalize(struct list$1sClass$p* self);
static void list_item$1sClass$p$p_finalize(struct list_item$1sClass$p* self);
static struct list$1sClass$p* list$1sClass$p_add(struct list$1sClass$p* self, struct sClass*  item  );
static struct list$1sClass$p* list$1sClass$p_reverse(struct list$1sClass$p* self);
static struct list$1sClass$p* list$1sClass$p_push_back(struct list$1sClass$p* self, struct sClass*  item  );
static struct sClass*  list$1sClass$p_begin(struct list$1sClass$p* self);
static _Bool list$1sClass$p_end(struct list$1sClass$p* self);
static struct sClass*  list$1sClass$p_next(struct list$1sClass$p* self);
static struct list$1sNode$ph* list$1sNode$ph_push_back(struct list$1sNode$ph* self, struct sNode* item);
static struct sClassNode* sClassNode_clone(struct sClassNode* self);
struct sNode* string_node_v14(char* buf, char* head, int head_sline, struct sInfo*  info  );
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
void output_aggregate_field(struct sType*  type  , char*  tag_name  , struct buffer*  buf  , _Bool* existance_generics, char*  field_name  , int indent, struct sInfo*  info  , _Bool* named_child)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "output_aggregate_field"; neo_current_frame = &fr;
    struct sClass*  klass  ;
    void* __right_value0 = (void*)0;
    struct list$1tuple2$2char$phsType$ph$ph* o2_saved;
    struct tuple2$2char$phsType$ph* it;
    struct tuple2$2char$phsType$ph* multiple_assign_var1
;    char*  name2  =0;
    struct sType*  type2  =0;
    struct sClass*  klass_2  ;
    struct sType*  already_defined_child_type  ;
    void* __right_value1 = (void*)0;
    klass=((struct sType* )come_null_checker(type, "19struct.nc", 5))->mClass;
    if(string_operator_not_equals(((char* )come_null_checker(tag_name, "19struct.nc", 7)),"")) {
        if(((struct sClass* )come_null_checker(klass, "19struct.nc", 8))->mStruct) {
            buffer_append_str(((struct buffer* )come_null_checker(buf, "19struct.nc", 9)),((char* )(__right_value0=charp_operator_mult(((char*)come_null_checker("    ", "19struct.nc", 9)),indent))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            buffer_append_format(((struct buffer* )come_null_checker(buf, "19struct.nc", 10)),"struct %s {\n",tag_name);
        }
        else if(((struct sClass* )come_null_checker(klass, "19struct.nc", 12))->mUnion) {
            buffer_append_str(((struct buffer* )come_null_checker(buf, "19struct.nc", 13)),((char* )(__right_value0=charp_operator_mult(((char*)come_null_checker("    ", "19struct.nc", 13)),indent))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            buffer_append_format(((struct buffer* )come_null_checker(buf, "19struct.nc", 14)),"union %s {\n",tag_name);
        }
    }
    else {
        if(((struct sClass* )come_null_checker(klass, "19struct.nc", 18))->mStruct) {
            buffer_append_str(((struct buffer* )come_null_checker(buf, "19struct.nc", 19)),((char* )(__right_value0=charp_operator_mult(((char*)come_null_checker("    ", "19struct.nc", 19)),indent))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            buffer_append_str(((struct buffer* )come_null_checker(buf, "19struct.nc", 20)),"struct {\n");
        }
        else if(((struct sClass* )come_null_checker(klass, "19struct.nc", 22))->mUnion) {
            buffer_append_str(((struct buffer* )come_null_checker(buf, "19struct.nc", 23)),((char* )(__right_value0=charp_operator_mult(((char*)come_null_checker("    ", "19struct.nc", 23)),indent))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            buffer_append_str(((struct buffer* )come_null_checker(buf, "19struct.nc", 24)),"union {\n");
        }
    }
    indent++;
    for(o2_saved=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct sClass* )come_null_checker(klass, "19struct.nc", 29))->mFields),it=list$1tuple2$2char$phsType$ph$ph_begin(((struct list$1tuple2$2char$phsType$ph$ph*)come_null_checker(o2_saved, "19struct.nc", 29)));!list$1tuple2$2char$phsType$ph$ph_end(((struct list$1tuple2$2char$phsType$ph$ph*)come_null_checker(o2_saved, "19struct.nc", 29)));it=list$1tuple2$2char$phsType$ph$ph_next(((struct list$1tuple2$2char$phsType$ph$ph*)come_null_checker(o2_saved, "19struct.nc", 29)))){
        multiple_assign_var1=it;
        name2=(char* )come_increment_ref_count(multiple_assign_var1->v1);
        type2=(struct sType* )come_increment_ref_count(multiple_assign_var1->v2);
        if(is_contained_generics_class(type2,info)) {
            *existance_generics=(_Bool)1;
        }
        ((struct sType* )come_null_checker(type2, "19struct.nc", 36))->mStatic=(_Bool)0;
        klass_2=((struct sType* )come_null_checker(type2, "19struct.nc", 38))->mClass;
        if(((struct sType* )come_null_checker(type2, "19struct.nc", 40))->mAnonymous) {
            output_aggregate_field(type2,(char*)come_increment_ref_count(xsprintf("")),buf,existance_generics,(char* )come_increment_ref_count(name2),indent,info,named_child);
        }
        else if(((struct sType* )come_null_checker(type2, "19struct.nc", 45))->mInnerStruct) {
            already_defined_child_type=(struct sType* )come_increment_ref_count(map$2char$phsType$ph_operator_load_element(((struct map$2char$phsType$ph*)come_null_checker(((struct map$2char$phsType$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "19struct.nc", 46))->named_child_struct, "19struct.nc", 46)), "19struct.nc", 46)),((struct sType* )come_null_checker(type2, "19struct.nc", 46))->mInnerStructName));
            if(already_defined_child_type&&((((struct sClass* )come_null_checker(((struct sType* )come_null_checker(already_defined_child_type, "19struct.nc", 48))->mClass, "19struct.nc", 48))->mStruct&&((struct sClass* )come_null_checker(((struct sType* )come_null_checker(type2, "19struct.nc", 48))->mClass, "19struct.nc", 48))->mStruct)||(((struct sClass* )come_null_checker(((struct sType* )come_null_checker(already_defined_child_type, "19struct.nc", 48))->mClass, "19struct.nc", 48))->mUnion&&((struct sClass* )come_null_checker(((struct sType* )come_null_checker(type2, "19struct.nc", 48))->mClass, "19struct.nc", 48))->mUnion))) {
                buffer_append_str(((struct buffer* )come_null_checker(buf, "19struct.nc", 51)),((char* )(__right_value0=charp_operator_mult(((char*)come_null_checker("    ", "19struct.nc", 51)),indent))));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                if(((struct sClass* )come_null_checker(((struct sType* )come_null_checker(type2, "19struct.nc", 52))->mClass, "19struct.nc", 52))->mStruct) {
                    buffer_append_str(((struct buffer* )come_null_checker(buf, "19struct.nc", 53)),((char* )(__right_value0=charp_operator_add(((char*)come_null_checker("struct ", "19struct.nc", 53)),((struct sType* )come_null_checker(type2, "19struct.nc", 53))->mInnerStructName))));
                    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                }
                else {
                    buffer_append_str(((struct buffer* )come_null_checker(buf, "19struct.nc", 56)),((char* )(__right_value0=charp_operator_add(((char*)come_null_checker("union ", "19struct.nc", 56)),((struct sType* )come_null_checker(type2, "19struct.nc", 56))->mInnerStructName))));
                    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                }
                buffer_append_str(((struct buffer* )come_null_checker(buf, "19struct.nc", 59)),((char* )(__right_value0=charp_operator_add(((char*)come_null_checker(" ", "19struct.nc", 59)),name2))));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                buffer_append_str(((struct buffer* )come_null_checker(buf, "19struct.nc", 61)),";\n");
            }
            else {
                map$2char$phsType$ph_insert(((struct map$2char$phsType$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "19struct.nc", 64))->named_child_struct, "19struct.nc", 64)),(char* )come_increment_ref_count(__builtin_string(((struct sType* )come_null_checker(type2, "19struct.nc", 64))->mInnerStructName)),(struct sType* )come_increment_ref_count(sType_clone(type2)),(_Bool)0);
                map$2char$phbuffer$ph_remove(((struct map$2char$phbuffer$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "19struct.nc", 65))->struct_definition, "19struct.nc", 65)),(char* )come_increment_ref_count(((struct sType* )come_null_checker(type2, "19struct.nc", 65))->mInnerStructName),(_Bool)0);
                output_aggregate_field(type2,(char* )come_increment_ref_count(((struct sType* )come_null_checker(type2, "19struct.nc", 66))->mInnerStructName),buf,existance_generics,(char* )come_increment_ref_count(name2),indent,info,named_child);
            }
            *named_child=(_Bool)1;
            come_call_finalizer(sType_finalize, already_defined_child_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            buffer_append_str(((struct buffer* )come_null_checker(buf, "19struct.nc", 72)),((char* )(__right_value0=charp_operator_mult(((char*)come_null_checker("    ", "19struct.nc", 72)),indent))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            buffer_append_str(((struct buffer* )come_null_checker(buf, "19struct.nc", 73)),((char* )(__right_value0=make_define_var(type2,name2,info,(_Bool)0,(_Bool)0))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            buffer_append_str(((struct buffer* )come_null_checker(buf, "19struct.nc", 74)),";\n");
        }
        (name2 = come_decrement_ref_count(name2, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(((struct sType* )come_null_checker(type, "19struct.nc", 78))->mAnonymousVarName) {
        buffer_append_str(((struct buffer* )come_null_checker(buf, "19struct.nc", 79)),((char* )(__right_value0=charp_operator_mult(((char*)come_null_checker("    ", "19struct.nc", 79)),(indent-1)))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        buffer_append_format(((struct buffer* )come_null_checker(buf, "19struct.nc", 80)),"};\n");
    }
    else {
        buffer_append_str(((struct buffer* )come_null_checker(buf, "19struct.nc", 83)),((char* )(__right_value0=charp_operator_mult(((char*)come_null_checker("    ", "19struct.nc", 83)),(indent-1)))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        buffer_append_format(((struct buffer* )come_null_checker(buf, "19struct.nc", 84)),"} %s;\n",field_name);
    }
    (tag_name = come_decrement_ref_count(tag_name, (void*)0, (void*)0, 0, 0, (void*)0));
    (field_name = come_decrement_ref_count(field_name, (void*)0, (void*)0, 0, 0, (void*)0));
    neo_current_frame = fr.prev;
}

static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_begin(struct list$1tuple2$2char$phsType$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsType$ph$ph_begin"; neo_current_frame = &fr;
    struct tuple2$2char$phsType$ph* result;
    struct tuple2$2char$phsType$ph* __result_obj__0;
    struct tuple2$2char$phsType$ph* result_0;
    if(self==((void*)0)) {
        memset(&result,0,sizeof(struct tuple2$2char$phsType$ph*));
        __result_obj__0 = result;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    ((struct list$1tuple2$2char$phsType$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1193))->it=((struct list$1tuple2$2char$phsType$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1193))->head;
    if(((struct list$1tuple2$2char$phsType$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1195))->it) {
        __result_obj__0 = ((struct list_item$1tuple2$2char$phsType$ph$ph*)come_null_checker(((struct list$1tuple2$2char$phsType$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1196))->it, "/usr/local/include/neo-c.h", 1196))->item;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    memset(&result_0,0,sizeof(struct tuple2$2char$phsType$ph*));
    __result_obj__0 = result_0;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static _Bool list$1tuple2$2char$phsType$ph$ph_end(struct list$1tuple2$2char$phsType$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsType$ph$ph_end"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return self==((void*)0)||((struct list$1tuple2$2char$phsType$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1225))->it==((void*)0);
    neo_current_frame = fr.prev;
}

static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_next(struct list$1tuple2$2char$phsType$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsType$ph$ph_next"; neo_current_frame = &fr;
    struct tuple2$2char$phsType$ph* result;
    struct tuple2$2char$phsType$ph* __result_obj__0;
    struct tuple2$2char$phsType$ph* result_1;
    if(self==((void*)0)||((struct list$1tuple2$2char$phsType$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1207))->it==((void*)0)) {
        memset(&result,0,sizeof(struct tuple2$2char$phsType$ph*));
        __result_obj__0 = result;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    ((struct list$1tuple2$2char$phsType$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1213))->it=((struct list_item$1tuple2$2char$phsType$ph$ph*)come_null_checker(((struct list$1tuple2$2char$phsType$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1213))->it, "/usr/local/include/neo-c.h", 1213))->next;
    if(((struct list$1tuple2$2char$phsType$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1215))->it) {
        __result_obj__0 = ((struct list_item$1tuple2$2char$phsType$ph$ph*)come_null_checker(((struct list$1tuple2$2char$phsType$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1216))->it, "/usr/local/include/neo-c.h", 1216))->item;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    memset(&result_1,0,sizeof(struct tuple2$2char$phsType$ph*));
    __result_obj__0 = result_1;
    neo_current_frame = fr.prev;
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
        __result_obj__0 = (struct sType* )come_increment_ref_count(default_value);
        neo_current_frame = fr.prev;
        come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char* )come_null_checker(((char* )key), "/usr/local/include/neo-c.h", 2565)))%((struct map$2char$phsType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2565))->size;
    it=hash;
    while((_Bool)1) {
        if(((_Bool*)come_null_checker(((struct map$2char$phsType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2569))->item_existance, "/usr/local/include/neo-c.h", 2569))[it]) {
            if(string_equals(((char* )come_null_checker(((char** )come_null_checker(((struct map$2char$phsType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2571))->keys, "/usr/local/include/neo-c.h", 2571))[it], "/usr/local/include/neo-c.h", 2571)),key)) {
                __result_obj__0 = (struct sType* )come_increment_ref_count(((struct sType** )come_null_checker(((struct map$2char$phsType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2573))->items, "/usr/local/include/neo-c.h", 2573))[it]);
                neo_current_frame = fr.prev;
                come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
            it++;
            if(it>=((struct map$2char$phsType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2578))->size) {
                it=0;
            }
            else if(it==hash) {
                __result_obj__0 = (struct sType* )come_increment_ref_count(default_value);
                neo_current_frame = fr.prev;
                come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
        }
        else {
            __result_obj__0 = (struct sType* )come_increment_ref_count(default_value);
            neo_current_frame = fr.prev;
            come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__0;
        }
    }
    __result_obj__0 = (struct sType* )come_increment_ref_count(default_value);
    neo_current_frame = fr.prev;
    come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
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
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_finalize", 26))->mHeapArrayNum!=((void*)0)) {
        come_call_finalizer(list$1sNode$ph$p_finalize, ((struct sType* )come_null_checker(self, "sType_finalize", 26))->mHeapArrayNum, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
    it=((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1006))->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=((struct list_item$1sType$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1009))->next;
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
    it=((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1006))->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=((struct list_item$1sNode$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1009))->next;
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
    it=((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1006))->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=((struct list_item$1int$*)come_null_checker(it, "/usr/local/include/neo-c.h", 1009))->next;
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
    it=((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1006))->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=((struct list_item$1char$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1009))->next;
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

static struct sType*  map$2char$phsType$ph_operator_load_element(struct map$2char$phsType$ph* self, char*  key  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsType$ph_operator_load_element"; neo_current_frame = &fr;
    struct sType*  default_value  ;
    struct sType*  __result_obj__0  ;
    unsigned int hash;
    unsigned int it;
    memset(&default_value,0,sizeof(struct sType* ));
    if(self==((void*)0)) {
        __result_obj__0 = (struct sType* )come_increment_ref_count(default_value);
        neo_current_frame = fr.prev;
        come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char* )come_null_checker(((char* )key), "/usr/local/include/neo-c.h", 2565)))%((struct map$2char$phsType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2565))->size;
    it=hash;
    while((_Bool)1) {
        if(((_Bool*)come_null_checker(((struct map$2char$phsType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2569))->item_existance, "/usr/local/include/neo-c.h", 2569))[it]) {
            if(string_equals(((char* )come_null_checker(((char** )come_null_checker(((struct map$2char$phsType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2571))->keys, "/usr/local/include/neo-c.h", 2571))[it], "/usr/local/include/neo-c.h", 2571)),key)) {
                __result_obj__0 = (struct sType* )come_increment_ref_count(((struct sType** )come_null_checker(((struct map$2char$phsType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2573))->items, "/usr/local/include/neo-c.h", 2573))[it]);
                neo_current_frame = fr.prev;
                come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
            it++;
            if(it>=((struct map$2char$phsType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2578))->size) {
                it=0;
            }
            else if(it==hash) {
                __result_obj__0 = (struct sType* )come_increment_ref_count(default_value);
                neo_current_frame = fr.prev;
                come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
        }
        else {
            __result_obj__0 = (struct sType* )come_increment_ref_count(default_value);
            neo_current_frame = fr.prev;
            come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__0;
        }
    }
    __result_obj__0 = (struct sType* )come_increment_ref_count(default_value);
    neo_current_frame = fr.prev;
    come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct map$2char$phsType$ph* map$2char$phsType$ph_insert(struct map$2char$phsType$ph* self, char*  key  , struct sType*  item  , _Bool by_pointer)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsType$ph_insert"; neo_current_frame = &fr;
    struct map$2char$phsType$ph* __result_obj__0;
    unsigned int hash;
    unsigned int it;
    _Bool same_key_exist;
    char*  it2  ;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(((struct map$2char$phsType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2398))->len*10>=((struct map$2char$phsType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2398))->size) {
        map$2char$phsType$ph_rehash(((struct map$2char$phsType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2399)));
    }
    hash=string_get_hash_key(((char* )come_null_checker(((char* )key), "/usr/local/include/neo-c.h", 2401)))%((struct map$2char$phsType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2401))->size;
    it=hash;
    while((_Bool)1) {
        if(((_Bool*)come_null_checker(((struct map$2char$phsType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2405))->item_existance, "/usr/local/include/neo-c.h", 2405))[it]) {
            if((!by_pointer&&string_equals(((char* )come_null_checker(((char** )come_null_checker(((struct map$2char$phsType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2407))->keys, "/usr/local/include/neo-c.h", 2407))[it], "/usr/local/include/neo-c.h", 2407)),key))||(by_pointer&&((char** )come_null_checker(((struct map$2char$phsType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2407))->keys, "/usr/local/include/neo-c.h", 2407))[it]==key)) {
                if(1) {
                    list$1char$ph_remove(((struct list$1char$ph*)come_null_checker(((struct map$2char$phsType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2410))->key_list, "/usr/local/include/neo-c.h", 2410)),((char** )come_null_checker(((struct map$2char$phsType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2410))->keys, "/usr/local/include/neo-c.h", 2410))[it],(_Bool)0);
                    (((char** )come_null_checker(((struct map$2char$phsType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2411))->keys, "/usr/local/include/neo-c.h", 2411))[it] = come_decrement_ref_count(((char** )come_null_checker(((struct map$2char$phsType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2411))->keys, "/usr/local/include/neo-c.h", 2411))[it], (void*)0, (void*)0, 0, 0, (void*)0));
                    ((char** )come_null_checker(((struct map$2char$phsType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2412))->keys, "/usr/local/include/neo-c.h", 2412))[it]=(char* )come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(((struct list$1char$ph*)come_null_checker(((struct map$2char$phsType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2415))->key_list, "/usr/local/include/neo-c.h", 2415)),((char** )come_null_checker(((struct map$2char$phsType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2415))->keys, "/usr/local/include/neo-c.h", 2415))[it],(_Bool)0);
                    ((char** )come_null_checker(((struct map$2char$phsType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2416))->keys, "/usr/local/include/neo-c.h", 2416))[it]=key;
                }
                if(1) {
                    come_call_finalizer(sType_finalize, ((struct sType** )come_null_checker(((struct map$2char$phsType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2419))->items, "/usr/local/include/neo-c.h", 2419))[it], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    ((struct sType** )come_null_checker(((struct map$2char$phsType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2420))->items, "/usr/local/include/neo-c.h", 2420))[it]=(struct sType* )come_increment_ref_count(item);
                }
                else {
                    ((struct sType** )come_null_checker(((struct map$2char$phsType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2423))->items, "/usr/local/include/neo-c.h", 2423))[it]=item;
                }
                break;
            }
            it++;
            if(it>=((struct map$2char$phsType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2430))->size) {
                it=0;
            }
            else if(it==hash) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            ((_Bool*)come_null_checker(((struct map$2char$phsType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2440))->item_existance, "/usr/local/include/neo-c.h", 2440))[it]=(_Bool)1;
            if(1) {
                ((char** )come_null_checker(((struct map$2char$phsType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2442))->keys, "/usr/local/include/neo-c.h", 2442))[it]=(char* )come_increment_ref_count(key);
            }
            else {
                ((char** )come_null_checker(((struct map$2char$phsType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2445))->keys, "/usr/local/include/neo-c.h", 2445))[it]=key;
            }
            if(1) {
                ((struct sType** )come_null_checker(((struct map$2char$phsType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2448))->items, "/usr/local/include/neo-c.h", 2448))[it]=(struct sType* )come_increment_ref_count(item);
            }
            else {
                ((struct sType** )come_null_checker(((struct map$2char$phsType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2451))->items, "/usr/local/include/neo-c.h", 2451))[it]=item;
            }
            ((struct map$2char$phsType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2454))->len++;
            break;
        }
    }
    same_key_exist=(_Bool)0;
    for(it2=list$1char$ph_begin(((struct list$1char$ph*)come_null_checker(((struct map$2char$phsType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2461))->key_list, "/usr/local/include/neo-c.h", 2461)));!list$1char$ph_end(((struct list$1char$ph*)come_null_checker(((struct map$2char$phsType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2461))->key_list, "/usr/local/include/neo-c.h", 2461)));it2=list$1char$ph_next(((struct list$1char$ph*)come_null_checker(((struct map$2char$phsType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2461))->key_list, "/usr/local/include/neo-c.h", 2461)))){
        if((!by_pointer&&string_equals(((char* )come_null_checker(it2, "/usr/local/include/neo-c.h", 2462)),key))||(by_pointer&&it2==key)) {
            same_key_exist=(_Bool)1;
        }
    }
    if(!same_key_exist) {
        list$1char$ph_push_back(((struct list$1char$ph*)come_null_checker(((struct map$2char$phsType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2468))->key_list, "/usr/local/include/neo-c.h", 2468)),(char* )come_increment_ref_count(key));
    }
    __result_obj__0 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void map$2char$phsType$ph_rehash(struct map$2char$phsType$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsType$ph_rehash"; neo_current_frame = &fr;
    int size;
    void* __right_value0 = (void*)0;
    char**  keys  ;
    struct sType**  items  ;
    _Bool* item_existance;
    int len;
    char*  it  ;
    struct sType*  default_value  ;
    struct sType*  it2  ;
    unsigned int hash;
    int n;
    struct sType*  default_value_5  ;
    size=((struct map$2char$phsType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2318))->size*10;
    keys=(char** )come_increment_ref_count(((char** )(__right_value0=(char* *)come_calloc(1, sizeof(char* )*(1*(size)), (void*)0, 2319, "char** "))));
    items=(struct sType** )come_increment_ref_count(((struct sType** )(__right_value0=(struct sType* *)come_calloc(1, sizeof(struct sType* )*(1*(size)), (void*)0, 2320, "struct sType** "))));
    item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value0=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size)), (void*)0, 2321, "_Bool*"))));
    len=0;
    for(it=map$2char$phsType$ph_begin(((struct map$2char$phsType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2325)));!map$2char$phsType$ph_end(((struct map$2char$phsType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2325)));it=map$2char$phsType$ph_next(((struct map$2char$phsType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2325)))){
        memset(&default_value,0,sizeof(struct sType* ));
        it2=((struct sType* )(__right_value0=map$2char$phsType$ph_at(((struct map$2char$phsType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2328)),it,default_value,(_Bool)0)));
        hash=string_get_hash_key(((char* )come_null_checker(((char* )it), "/usr/local/include/neo-c.h", 2329)))%size;
        n=hash;
        while((_Bool)1) {
            if(((_Bool*)come_null_checker(item_existance, "/usr/local/include/neo-c.h", 2333))[n]) {
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
                ((_Bool*)come_null_checker(item_existance, "/usr/local/include/neo-c.h", 2347))[n]=(_Bool)1;
                ((char** )come_null_checker(keys, "/usr/local/include/neo-c.h", 2348))[n]=it;
                memset(&default_value_5,0,sizeof(struct sType* ));
                ((struct sType** )come_null_checker(items, "/usr/local/include/neo-c.h", 2351))[n]=((struct sType* )(__right_value0=map$2char$phsType$ph_at(((struct map$2char$phsType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2351)),it,(struct sType* )come_increment_ref_count(default_value_5),(_Bool)0)));
                len++;
                come_call_finalizer(sType_finalize, default_value_5, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                come_call_finalizer(sType_finalize, default_value_5, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)((struct map$2char$phsType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2359))->items);
    (((struct map$2char$phsType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2360))->item_existance = come_decrement_ref_count(((struct map$2char$phsType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2360))->item_existance, (void*)0, (void*)0, 0, 0, (void*)0));
    come_free((char*)((struct map$2char$phsType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2361))->keys);
    ((struct map$2char$phsType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2363))->keys=keys;
    ((struct map$2char$phsType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2364))->items=items;
    ((struct map$2char$phsType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2365))->item_existance=item_existance;
    ((struct map$2char$phsType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2367))->size=size;
    ((struct map$2char$phsType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2368))->len=len;
    neo_current_frame = fr.prev;
}

static char*  map$2char$phsType$ph_begin(struct map$2char$phsType$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsType$ph_begin"; neo_current_frame = &fr;
    char*  result  ;
    char*  __result_obj__0  ;
    char*  result_3  ;
    if(self==((void*)0)) {
        memset(&result,0,sizeof(char* ));
        __result_obj__0 = result;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    ((struct list$1char$ph*)come_null_checker(((struct map$2char$phsType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2281))->key_list, "/usr/local/include/neo-c.h", 2281))->it=((struct list$1char$ph*)come_null_checker(((struct map$2char$phsType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2281))->key_list, "/usr/local/include/neo-c.h", 2281))->head;
    if(((struct list$1char$ph*)come_null_checker(((struct map$2char$phsType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2283))->key_list, "/usr/local/include/neo-c.h", 2283))->it) {
        __result_obj__0 = ((struct list_item$1char$ph*)come_null_checker(((struct list$1char$ph*)come_null_checker(((struct map$2char$phsType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2284))->key_list, "/usr/local/include/neo-c.h", 2284))->it, "/usr/local/include/neo-c.h", 2284))->item;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    memset(&result_3,0,sizeof(char* ));
    __result_obj__0 = result_3;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static _Bool map$2char$phsType$ph_end(struct map$2char$phsType$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsType$ph_end"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return self==((void*)0)||((struct map$2char$phsType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2312))->key_list==((void*)0)||((struct list$1char$ph*)come_null_checker(((struct map$2char$phsType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2312))->key_list, "/usr/local/include/neo-c.h", 2312))->it==((void*)0);
    neo_current_frame = fr.prev;
}

static char*  map$2char$phsType$ph_next(struct map$2char$phsType$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsType$ph_next"; neo_current_frame = &fr;
    char*  result  ;
    char*  __result_obj__0  ;
    char*  result_4  ;
    if(self==((void*)0)||((struct list$1char$ph*)come_null_checker(((struct map$2char$phsType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2295))->key_list, "/usr/local/include/neo-c.h", 2295))->it==((void*)0)) {
        memset(&result,0,sizeof(char* ));
        __result_obj__0 = result;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    ((struct list$1char$ph*)come_null_checker(((struct map$2char$phsType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2300))->key_list, "/usr/local/include/neo-c.h", 2300))->it=((struct list_item$1char$ph*)come_null_checker(((struct list$1char$ph*)come_null_checker(((struct map$2char$phsType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2300))->key_list, "/usr/local/include/neo-c.h", 2300))->it, "/usr/local/include/neo-c.h", 2300))->next;
    if(((struct list$1char$ph*)come_null_checker(((struct map$2char$phsType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2302))->key_list, "/usr/local/include/neo-c.h", 2302))->it) {
        __result_obj__0 = ((struct list_item$1char$ph*)come_null_checker(((struct list$1char$ph*)come_null_checker(((struct map$2char$phsType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2303))->key_list, "/usr/local/include/neo-c.h", 2303))->it, "/usr/local/include/neo-c.h", 2303))->item;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    memset(&result_4,0,sizeof(char* ));
    __result_obj__0 = result_4;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sType*  map$2char$phsType$ph_at(struct map$2char$phsType$ph* self, char*  key  , struct sType*  default_value  , _Bool by_pointer)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsType$ph_at"; neo_current_frame = &fr;
    struct sType*  __result_obj__0  ;
    unsigned int hash;
    unsigned int it;
    if(self==((void*)0)) {
        __result_obj__0 = (struct sType* )come_increment_ref_count(default_value);
        come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        neo_current_frame = fr.prev;
        come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char* )come_null_checker(((char* )key), "/usr/local/include/neo-c.h", 2191)))%((struct map$2char$phsType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2191))->size;
    it=hash;
    while((_Bool)1) {
        if(((_Bool*)come_null_checker(((struct map$2char$phsType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2195))->item_existance, "/usr/local/include/neo-c.h", 2195))[it]) {
            if((!by_pointer&&string_equals(((char* )come_null_checker(((char** )come_null_checker(((struct map$2char$phsType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2197))->keys, "/usr/local/include/neo-c.h", 2197))[it], "/usr/local/include/neo-c.h", 2197)),key))||(by_pointer&&((char** )come_null_checker(((struct map$2char$phsType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2197))->keys, "/usr/local/include/neo-c.h", 2197))[it]==key)) {
                __result_obj__0 = (struct sType* )come_increment_ref_count(((struct sType** )come_null_checker(((struct map$2char$phsType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2199))->items, "/usr/local/include/neo-c.h", 2199))[it]);
                come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                neo_current_frame = fr.prev;
                come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
            it++;
            if(it>=((struct map$2char$phsType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2204))->size) {
                it=0;
            }
            else if(it==hash) {
                __result_obj__0 = (struct sType* )come_increment_ref_count(default_value);
                come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                neo_current_frame = fr.prev;
                come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
        }
        else {
            __result_obj__0 = (struct sType* )come_increment_ref_count(default_value);
            come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            neo_current_frame = fr.prev;
            come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__0;
        }
    }
    __result_obj__0 = (struct sType* )come_increment_ref_count(default_value);
    come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
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
    it=((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1376))->head;
    while(it!=((void*)0)) {
        if((!by_pointer&&string_equals(((char* )come_null_checker(((struct list_item$1char$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1378))->item, "/usr/local/include/neo-c.h", 1378)),item))||(by_pointer&&((struct list_item$1char$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1378))->item==item)) {
            list$1char$ph_delete(((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1379)),it2,it2+1);
            break;
        }
        it2++;
        it=((struct list_item$1char$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1384))->next;
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
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(head<0) {
        head+=((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1396))->len;
    }
    if(tail<0) {
        tail+=((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1399))->len+1;
    }
    if(head>tail) {
        tmp=tail;
        tail=head;
        head=tmp;
    }
    if(head<0) {
        head=0;
    }
    if(tail>((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1412))->len) {
        tail=((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1413))->len;
    }
    if(head>=((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1416))->len) {
        __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(head==tail) {
        __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(head==0&&tail==((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1424))->len) {
        list$1char$ph_reset(((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1426)));
    }
    else if(head==0) {
        it=((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1429))->head;
        i=0;
        while(it!=((void*)0)) {
            if(i<tail) {
                prev_it=it;
                it=((struct list_item$1char$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1435))->next;
                i++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1440))->len--;
            }
            else if(i==tail) {
                ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1443))->head=it;
                ((struct list_item$1char$ph*)come_null_checker(((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1444))->head, "/usr/local/include/neo-c.h", 1444))->prev=((void*)0);
                break;
            }
            else {
                it=((struct list_item$1char$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1448))->next;
                i++;
            }
        }
    }
    else if(tail==((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1453))->len) {
        it_6=((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1454))->head;
        i_7=0;
        while(it_6!=((void*)0)) {
            if(i_7==head) {
                ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1458))->tail=((struct list_item$1char$ph*)come_null_checker(it_6, "/usr/local/include/neo-c.h", 1458))->prev;
                ((struct list_item$1char$ph*)come_null_checker(((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1459))->tail, "/usr/local/include/neo-c.h", 1459))->next=((void*)0);
            }
            if(i_7>=head) {
                prev_it_8=it_6;
                it_6=((struct list_item$1char$ph*)come_null_checker(it_6, "/usr/local/include/neo-c.h", 1465))->next;
                i_7++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_8, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1470))->len--;
            }
            else {
                it_6=((struct list_item$1char$ph*)come_null_checker(it_6, "/usr/local/include/neo-c.h", 1473))->next;
                i_7++;
            }
        }
    }
    else {
        it_9=((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1479))->head;
        head_prev_it=((void*)0);
        tail_it=((void*)0);
        i_10=0;
        while(it_9!=((void*)0)) {
            if(i_10==head) {
                head_prev_it=((struct list_item$1char$ph*)come_null_checker(it_9, "/usr/local/include/neo-c.h", 1488))->prev;
            }
            if(i_10==tail) {
                tail_it=it_9;
            }
            if(i_10>=head&&i_10<tail) {
                prev_it_11=it_9;
                it_9=((struct list_item$1char$ph*)come_null_checker(it_9, "/usr/local/include/neo-c.h", 1498))->next;
                i_10++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_11, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1503))->len--;
            }
            else {
                it_9=((struct list_item$1char$ph*)come_null_checker(it_9, "/usr/local/include/neo-c.h", 1506))->next;
                i_10++;
            }
        }
        if(head_prev_it!=((void*)0)) {
            ((struct list_item$1char$ph*)come_null_checker(head_prev_it, "/usr/local/include/neo-c.h", 1512))->next=tail_it;
        }
        if(tail_it!=((void*)0)) {
            ((struct list_item$1char$ph*)come_null_checker(tail_it, "/usr/local/include/neo-c.h", 1515))->prev=head_prev_it;
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
    it=((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1356))->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=((struct list_item$1char$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1359))->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1363))->head=((void*)0);
    ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1364))->tail=((void*)0);
    ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1366))->len=0;
    __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static char*  list$1char$ph_begin(struct list$1char$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_begin"; neo_current_frame = &fr;
    char*  result  ;
    char*  __result_obj__0  ;
    char*  result_12  ;
    if(self==((void*)0)) {
        memset(&result,0,sizeof(char* ));
        __result_obj__0 = result;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1193))->it=((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1193))->head;
    if(((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1195))->it) {
        __result_obj__0 = ((struct list_item$1char$ph*)come_null_checker(((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1196))->it, "/usr/local/include/neo-c.h", 1196))->item;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    memset(&result_12,0,sizeof(char* ));
    __result_obj__0 = result_12;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static _Bool list$1char$ph_end(struct list$1char$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_end"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return self==((void*)0)||((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1225))->it==((void*)0);
    neo_current_frame = fr.prev;
}

static char*  list$1char$ph_next(struct list$1char$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_next"; neo_current_frame = &fr;
    char*  result  ;
    char*  __result_obj__0  ;
    char*  result_13  ;
    if(self==((void*)0)||((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1207))->it==((void*)0)) {
        memset(&result,0,sizeof(char* ));
        __result_obj__0 = result;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1213))->it=((struct list_item$1char$ph*)come_null_checker(((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1213))->it, "/usr/local/include/neo-c.h", 1213))->next;
    if(((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1215))->it) {
        __result_obj__0 = ((struct list_item$1char$ph*)come_null_checker(((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1216))->it, "/usr/local/include/neo-c.h", 1216))->item;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    memset(&result_13,0,sizeof(char* ));
    __result_obj__0 = result_13;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_push_back"; neo_current_frame = &fr;
    struct list$1char$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1char$ph* litem;
    char*  __dec_obj1  ;
    struct list_item$1char$ph* litem_14;
    char*  __dec_obj2  ;
    struct list_item$1char$ph* litem_15;
    char*  __dec_obj3  ;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1122))->len==0) {
        litem=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), (void*)0, 1123, "struct list_item$1char$ph*"))));
        ((struct list_item$1char$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1125))->prev=((void*)0);
        ((struct list_item$1char$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1126))->next=((void*)0);
        __dec_obj1=((struct list_item$1char$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1127))->item,
        ((struct list_item$1char$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1127))->item=(char* )come_increment_ref_count(item);
        __dec_obj1 = come_decrement_ref_count(__dec_obj1, (void*)0, (void*)0, 0,0, (void*)0);
        ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1129))->tail=litem;
        ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1130))->head=litem;
    }
    else if(((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1132))->len==1) {
        litem_14=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), (void*)0, 1133, "struct list_item$1char$ph*"))));
        ((struct list_item$1char$ph*)come_null_checker(litem_14, "/usr/local/include/neo-c.h", 1135))->prev=((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1135))->head;
        ((struct list_item$1char$ph*)come_null_checker(litem_14, "/usr/local/include/neo-c.h", 1136))->next=((void*)0);
        __dec_obj2=((struct list_item$1char$ph*)come_null_checker(litem_14, "/usr/local/include/neo-c.h", 1137))->item,
        ((struct list_item$1char$ph*)come_null_checker(litem_14, "/usr/local/include/neo-c.h", 1137))->item=(char* )come_increment_ref_count(item);
        __dec_obj2 = come_decrement_ref_count(__dec_obj2, (void*)0, (void*)0, 0,0, (void*)0);
        ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1139))->tail=litem_14;
        ((struct list_item$1char$ph*)come_null_checker(((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1140))->head, "/usr/local/include/neo-c.h", 1140))->next=litem_14;
    }
    else {
        litem_15=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), (void*)0, 1143, "struct list_item$1char$ph*"))));
        ((struct list_item$1char$ph*)come_null_checker(litem_15, "/usr/local/include/neo-c.h", 1145))->prev=((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1145))->tail;
        ((struct list_item$1char$ph*)come_null_checker(litem_15, "/usr/local/include/neo-c.h", 1146))->next=((void*)0);
        __dec_obj3=((struct list_item$1char$ph*)come_null_checker(litem_15, "/usr/local/include/neo-c.h", 1147))->item,
        ((struct list_item$1char$ph*)come_null_checker(litem_15, "/usr/local/include/neo-c.h", 1147))->item=(char* )come_increment_ref_count(item);
        __dec_obj3 = come_decrement_ref_count(__dec_obj3, (void*)0, (void*)0, 0,0, (void*)0);
        ((struct list_item$1char$ph*)come_null_checker(((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1149))->tail, "/usr/local/include/neo-c.h", 1149))->next=litem_15;
        ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1150))->tail=litem_15;
    }
    ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1153))->len++;
    __result_obj__0 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sType*  sType_clone(struct sType*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sType_clone"; neo_current_frame = &fr;
    struct sType*  __result_obj__0  ;
    void* __right_value0 = (void*)0;
    struct sType*  result  ;
    struct sType*  __dec_obj4  ;
    struct sType*  __dec_obj5  ;
    struct list$1sType$ph* __dec_obj9;
    struct sType*  __dec_obj10  ;
    struct sNode* __dec_obj11;
    struct sNode* __dec_obj12;
    char*  __dec_obj13  ;
    char*  __dec_obj14  ;
    char*  __dec_obj15  ;
    char*  __dec_obj16  ;
    char*  __dec_obj17  ;
    char*  __dec_obj18  ;
    char*  __dec_obj19  ;
    char*  __dec_obj20  ;
    struct list$1sNode$ph* __dec_obj24;
    struct list$1sNode$ph* __dec_obj25;
    struct list$1int$* __dec_obj26;
    struct list$1int$* __dec_obj27;
    struct sType*  __dec_obj28  ;
    char*  __dec_obj29  ;
    struct list$1sType$ph* __dec_obj30;
    struct list$1char$ph* __dec_obj34;
    struct sType*  __dec_obj35  ;
    struct sNode* __dec_obj36;
    struct list$1sNode$ph* __dec_obj37;
    if(self==(void*)0) {
        __result_obj__0 = (struct sType* )come_increment_ref_count((void*)0);
        neo_current_frame = fr.prev;
        come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    result=(struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 5, "struct sType* "));
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 6))->mClass=((struct sType* )come_null_checker(self, "sType_clone", 6))->mClass;
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 7))->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj4=((struct sType* )come_null_checker(result, "sType_clone", 7))->mOriginalLoadVarType,
        ((struct sType* )come_null_checker(result, "sType_clone", 7))->mOriginalLoadVarType=(struct sType* )come_increment_ref_count(sType_clone(((struct sType* )come_null_checker(self, "sType_clone", 7))->mOriginalLoadVarType));
        come_call_finalizer(sType_finalize, __dec_obj4,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 8))->mChannelType!=((void*)0)) {
        __dec_obj5=((struct sType* )come_null_checker(result, "sType_clone", 8))->mChannelType,
        ((struct sType* )come_null_checker(result, "sType_clone", 8))->mChannelType=(struct sType* )come_increment_ref_count(sType_clone(((struct sType* )come_null_checker(self, "sType_clone", 8))->mChannelType));
        come_call_finalizer(sType_finalize, __dec_obj5,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 9))->mGenericsTypes!=((void*)0)) {
        __dec_obj9=((struct sType* )come_null_checker(result, "sType_clone", 9))->mGenericsTypes,
        ((struct sType* )come_null_checker(result, "sType_clone", 9))->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(((struct sType* )come_null_checker(self, "sType_clone", 9))->mGenericsTypes));
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj9,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 10))->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj10=((struct sType* )come_null_checker(result, "sType_clone", 10))->mNoSolvedGenericsType,
        ((struct sType* )come_null_checker(result, "sType_clone", 10))->mNoSolvedGenericsType=(struct sType* )come_increment_ref_count(sType_clone(((struct sType* )come_null_checker(self, "sType_clone", 10))->mNoSolvedGenericsType));
        come_call_finalizer(sType_finalize, __dec_obj10,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 11))->mSizeNum!=((void*)0)) {
        __dec_obj11=((struct sType* )come_null_checker(result, "sType_clone", 11))->mSizeNum,
        ((struct sType* )come_null_checker(result, "sType_clone", 11))->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(((struct sType* )come_null_checker(self, "sType_clone", 11))->mSizeNum));
        (__dec_obj11 ? __dec_obj11 = come_decrement_ref_count(__dec_obj11, ((struct sNode*)__dec_obj11)->finalize, ((struct sNode*)__dec_obj11)->_protocol_obj, 0,0, (void*)0) :0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 12))->mAlignas!=((void*)0)) {
        __dec_obj12=((struct sType* )come_null_checker(result, "sType_clone", 12))->mAlignas,
        ((struct sType* )come_null_checker(result, "sType_clone", 12))->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(((struct sType* )come_null_checker(self, "sType_clone", 12))->mAlignas));
        (__dec_obj12 ? __dec_obj12 = come_decrement_ref_count(__dec_obj12, ((struct sNode*)__dec_obj12)->finalize, ((struct sNode*)__dec_obj12)->_protocol_obj, 0,0, (void*)0) :0);
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 13))->mAlignasDouble=((struct sType* )come_null_checker(self, "sType_clone", 13))->mAlignasDouble;
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 14))->mTupleName!=((void*)0)) {
        __dec_obj13=((struct sType* )come_null_checker(result, "sType_clone", 14))->mTupleName,
        ((struct sType* )come_null_checker(result, "sType_clone", 14))->mTupleName=(char* )come_increment_ref_count((char* )come_memdup(((struct sType* )come_null_checker(self, "sType_clone", 14))->mTupleName, "sType_clone", 14, "char* "));
        __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 15))->mAttribute!=((void*)0)) {
        __dec_obj14=((struct sType* )come_null_checker(result, "sType_clone", 15))->mAttribute,
        ((struct sType* )come_null_checker(result, "sType_clone", 15))->mAttribute=(char* )come_increment_ref_count((char* )come_memdup(((struct sType* )come_null_checker(self, "sType_clone", 15))->mAttribute, "sType_clone", 15, "char* "));
        __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 16))->mVarAttribute!=((void*)0)) {
        __dec_obj15=((struct sType* )come_null_checker(result, "sType_clone", 16))->mVarAttribute,
        ((struct sType* )come_null_checker(result, "sType_clone", 16))->mVarAttribute=(char* )come_increment_ref_count((char* )come_memdup(((struct sType* )come_null_checker(self, "sType_clone", 16))->mVarAttribute, "sType_clone", 16, "char* "));
        __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 17))->mMiddleAttribute!=((void*)0)) {
        __dec_obj16=((struct sType* )come_null_checker(result, "sType_clone", 17))->mMiddleAttribute,
        ((struct sType* )come_null_checker(result, "sType_clone", 17))->mMiddleAttribute=(char* )come_increment_ref_count((char* )come_memdup(((struct sType* )come_null_checker(self, "sType_clone", 17))->mMiddleAttribute, "sType_clone", 17, "char* "));
        __dec_obj16 = come_decrement_ref_count(__dec_obj16, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 18))->mPointerAttribute!=((void*)0)) {
        __dec_obj17=((struct sType* )come_null_checker(result, "sType_clone", 18))->mPointerAttribute,
        ((struct sType* )come_null_checker(result, "sType_clone", 18))->mPointerAttribute=(char* )come_increment_ref_count((char* )come_memdup(((struct sType* )come_null_checker(self, "sType_clone", 18))->mPointerAttribute, "sType_clone", 18, "char* "));
        __dec_obj17 = come_decrement_ref_count(__dec_obj17, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 19))->mNew=((struct sType* )come_null_checker(self, "sType_clone", 19))->mNew;
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 20))->mAllocaValue=((struct sType* )come_null_checker(self, "sType_clone", 20))->mAllocaValue;
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 21))->mUnsigned=((struct sType* )come_null_checker(self, "sType_clone", 21))->mUnsigned;
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 22))->mShort=((struct sType* )come_null_checker(self, "sType_clone", 22))->mShort;
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 23))->mLong=((struct sType* )come_null_checker(self, "sType_clone", 23))->mLong;
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 24))->mLongLong=((struct sType* )come_null_checker(self, "sType_clone", 24))->mLongLong;
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 25))->mConstant=((struct sType* )come_null_checker(self, "sType_clone", 25))->mConstant;
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 26))->mAtomic=((struct sType* )come_null_checker(self, "sType_clone", 26))->mAtomic;
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 27))->mThreadLocal=((struct sType* )come_null_checker(self, "sType_clone", 27))->mThreadLocal;
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 28))->mNorecord=((struct sType* )come_null_checker(self, "sType_clone", 28))->mNorecord;
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 29))->mThread=((struct sType* )come_null_checker(self, "sType_clone", 29))->mThread;
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 30))->mComplex=((struct sType* )come_null_checker(self, "sType_clone", 30))->mComplex;
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 31))->mRegister=((struct sType* )come_null_checker(self, "sType_clone", 31))->mRegister;
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 32))->mVolatile=((struct sType* )come_null_checker(self, "sType_clone", 32))->mVolatile;
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 33))->mNoreturn=((struct sType* )come_null_checker(self, "sType_clone", 33))->mNoreturn;
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 34))->mStatic=((struct sType* )come_null_checker(self, "sType_clone", 34))->mStatic;
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 35))->mUniq=((struct sType* )come_null_checker(self, "sType_clone", 35))->mUniq;
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 36))->mExtern=((struct sType* )come_null_checker(self, "sType_clone", 36))->mExtern;
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 37))->mRestrict=((struct sType* )come_null_checker(self, "sType_clone", 37))->mRestrict;
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 38))->mHeap=((struct sType* )come_null_checker(self, "sType_clone", 38))->mHeap;
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 39))->mChannel=((struct sType* )come_null_checker(self, "sType_clone", 39))->mChannel;
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 40))->mDefferRightValue=((struct sType* )come_null_checker(self, "sType_clone", 40))->mDefferRightValue;
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 41))->mNoHeap=((struct sType* )come_null_checker(self, "sType_clone", 41))->mNoHeap;
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 42))->mRefference=((struct sType* )come_null_checker(self, "sType_clone", 42))->mRefference;
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 43))->mSlice=((struct sType* )come_null_checker(self, "sType_clone", 43))->mSlice;
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 44))->mOptional=((struct sType* )come_null_checker(self, "sType_clone", 44))->mOptional;
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 45))->mNoCallingDestructor=((struct sType* )come_null_checker(self, "sType_clone", 45))->mNoCallingDestructor;
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 46))->mTypeName=((struct sType* )come_null_checker(self, "sType_clone", 46))->mTypeName;
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 47))->mAnonymous=((struct sType* )come_null_checker(self, "sType_clone", 47))->mAnonymous;
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 48))->mAnonymousName!=((void*)0)) {
        __dec_obj18=((struct sType* )come_null_checker(result, "sType_clone", 48))->mAnonymousName,
        ((struct sType* )come_null_checker(result, "sType_clone", 48))->mAnonymousName=(char* )come_increment_ref_count((char* )come_memdup(((struct sType* )come_null_checker(self, "sType_clone", 48))->mAnonymousName, "sType_clone", 48, "char* "));
        __dec_obj18 = come_decrement_ref_count(__dec_obj18, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 49))->mInnerStruct=((struct sType* )come_null_checker(self, "sType_clone", 49))->mInnerStruct;
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 50))->mInnerStructName!=((void*)0)) {
        __dec_obj19=((struct sType* )come_null_checker(result, "sType_clone", 50))->mInnerStructName,
        ((struct sType* )come_null_checker(result, "sType_clone", 50))->mInnerStructName=(char* )come_increment_ref_count((char* )come_memdup(((struct sType* )come_null_checker(self, "sType_clone", 50))->mInnerStructName, "sType_clone", 50, "char* "));
        __dec_obj19 = come_decrement_ref_count(__dec_obj19, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 51))->mAnonymousVarName=((struct sType* )come_null_checker(self, "sType_clone", 51))->mAnonymousVarName;
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 52))->mInline=((struct sType* )come_null_checker(self, "sType_clone", 52))->mInline;
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 53))->mAsmName!=((void*)0)) {
        __dec_obj20=((struct sType* )come_null_checker(result, "sType_clone", 53))->mAsmName,
        ((struct sType* )come_null_checker(result, "sType_clone", 53))->mAsmName=(char* )come_increment_ref_count((char* )come_memdup(((struct sType* )come_null_checker(self, "sType_clone", 53))->mAsmName, "sType_clone", 53, "char* "));
        __dec_obj20 = come_decrement_ref_count(__dec_obj20, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 54))->mTypedef=((struct sType* )come_null_checker(self, "sType_clone", 54))->mTypedef;
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 55))->mMultipleTypes=((struct sType* )come_null_checker(self, "sType_clone", 55))->mMultipleTypes;
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 56))->mArrayNum!=((void*)0)) {
        __dec_obj24=((struct sType* )come_null_checker(result, "sType_clone", 56))->mArrayNum,
        ((struct sType* )come_null_checker(result, "sType_clone", 56))->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(((struct sType* )come_null_checker(self, "sType_clone", 56))->mArrayNum));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj24,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 57))->mVarNameArrayNum!=((void*)0)) {
        __dec_obj25=((struct sType* )come_null_checker(result, "sType_clone", 57))->mVarNameArrayNum,
        ((struct sType* )come_null_checker(result, "sType_clone", 57))->mVarNameArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(((struct sType* )come_null_checker(self, "sType_clone", 57))->mVarNameArrayNum));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj25,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 58))->mArrayStatic!=((void*)0)) {
        __dec_obj26=((struct sType* )come_null_checker(result, "sType_clone", 58))->mArrayStatic,
        ((struct sType* )come_null_checker(result, "sType_clone", 58))->mArrayStatic=(struct list$1int$*)come_increment_ref_count(list$1int$$p_clone(((struct sType* )come_null_checker(self, "sType_clone", 58))->mArrayStatic));
        come_call_finalizer(list$1int$_finalize, __dec_obj26,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 59))->mArrayRestrict!=((void*)0)) {
        __dec_obj27=((struct sType* )come_null_checker(result, "sType_clone", 59))->mArrayRestrict,
        ((struct sType* )come_null_checker(result, "sType_clone", 59))->mArrayRestrict=(struct list$1int$*)come_increment_ref_count(list$1int$$p_clone(((struct sType* )come_null_checker(self, "sType_clone", 59))->mArrayRestrict));
        come_call_finalizer(list$1int$_finalize, __dec_obj27,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 60))->mPointerNum=((struct sType* )come_null_checker(self, "sType_clone", 60))->mPointerNum;
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 61))->mFunctionPointerNum=((struct sType* )come_null_checker(self, "sType_clone", 61))->mFunctionPointerNum;
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 62))->mArrayPointerNum=((struct sType* )come_null_checker(self, "sType_clone", 62))->mArrayPointerNum;
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 63))->mPointerParen=((struct sType* )come_null_checker(self, "sType_clone", 63))->mPointerParen;
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 64))->mMinusPointerNum=((struct sType* )come_null_checker(self, "sType_clone", 64))->mMinusPointerNum;
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 65))->mTypedefOriginalType!=((void*)0)) {
        __dec_obj28=((struct sType* )come_null_checker(result, "sType_clone", 65))->mTypedefOriginalType,
        ((struct sType* )come_null_checker(result, "sType_clone", 65))->mTypedefOriginalType=(struct sType* )come_increment_ref_count(sType_clone(((struct sType* )come_null_checker(self, "sType_clone", 65))->mTypedefOriginalType));
        come_call_finalizer(sType_finalize, __dec_obj28,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 66))->mOriginalTypeName!=((void*)0)) {
        __dec_obj29=((struct sType* )come_null_checker(result, "sType_clone", 66))->mOriginalTypeName,
        ((struct sType* )come_null_checker(result, "sType_clone", 66))->mOriginalTypeName=(char* )come_increment_ref_count((char* )come_memdup(((struct sType* )come_null_checker(self, "sType_clone", 66))->mOriginalTypeName, "sType_clone", 66, "char* "));
        __dec_obj29 = come_decrement_ref_count(__dec_obj29, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 67))->mOriginalTypePointerNum=((struct sType* )come_null_checker(self, "sType_clone", 67))->mOriginalTypePointerNum;
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 68))->mOriginalTypePointerHeap=((struct sType* )come_null_checker(self, "sType_clone", 68))->mOriginalTypePointerHeap;
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 69))->mArrayPointerType=((struct sType* )come_null_checker(self, "sType_clone", 69))->mArrayPointerType;
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 70))->mParamTypes!=((void*)0)) {
        __dec_obj30=((struct sType* )come_null_checker(result, "sType_clone", 70))->mParamTypes,
        ((struct sType* )come_null_checker(result, "sType_clone", 70))->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(((struct sType* )come_null_checker(self, "sType_clone", 70))->mParamTypes));
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj30,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 71))->mParamNames!=((void*)0)) {
        __dec_obj34=((struct sType* )come_null_checker(result, "sType_clone", 71))->mParamNames,
        ((struct sType* )come_null_checker(result, "sType_clone", 71))->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(((struct sType* )come_null_checker(self, "sType_clone", 71))->mParamNames));
        come_call_finalizer(list$1char$ph_finalize, __dec_obj34,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 72))->mResultType!=((void*)0)) {
        __dec_obj35=((struct sType* )come_null_checker(result, "sType_clone", 72))->mResultType,
        ((struct sType* )come_null_checker(result, "sType_clone", 72))->mResultType=(struct sType* )come_increment_ref_count(sType_clone(((struct sType* )come_null_checker(self, "sType_clone", 72))->mResultType));
        come_call_finalizer(sType_finalize, __dec_obj35,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 73))->mVarArgs=((struct sType* )come_null_checker(self, "sType_clone", 73))->mVarArgs;
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 74))->mTypeOfNode!=((void*)0)) {
        __dec_obj36=((struct sType* )come_null_checker(result, "sType_clone", 74))->mTypeOfNode,
        ((struct sType* )come_null_checker(result, "sType_clone", 74))->mTypeOfNode=(struct sNode*)come_increment_ref_count(sNode_clone(((struct sType* )come_null_checker(self, "sType_clone", 74))->mTypeOfNode));
        (__dec_obj36 ? __dec_obj36 = come_decrement_ref_count(__dec_obj36, ((struct sNode*)__dec_obj36)->finalize, ((struct sNode*)__dec_obj36)->_protocol_obj, 0,0, (void*)0) :0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 75))->mHeapArrayNum!=((void*)0)) {
        __dec_obj37=((struct sType* )come_null_checker(result, "sType_clone", 75))->mHeapArrayNum,
        ((struct sType* )come_null_checker(result, "sType_clone", 75))->mHeapArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(((struct sType* )come_null_checker(self, "sType_clone", 75))->mHeapArrayNum));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj37,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result_obj__0 = (struct sType* )come_increment_ref_count(result);
    come_call_finalizer(sType_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
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
    result=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count(((struct list$1sType$ph*)come_null_checker(((struct list$1sType$ph*)(__right_value0=(struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), (void*)0, 1017, "struct list$1sType$ph*"))), "/usr/local/include/neo-c.h", 1017)))));
    come_call_finalizer(list$1sType$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    it=((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1019))->head;
    while(it!=((void*)0)) {
        if(1) {
            list$1sType$ph_add(((struct list$1sType$ph*)come_null_checker(result, "/usr/local/include/neo-c.h", 1022)),(struct sType* )come_increment_ref_count(sType_clone(((struct list_item$1sType$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1022))->item)));
        }
        else {
            list$1sType$ph_add(((struct list$1sType$ph*)come_null_checker(result, "/usr/local/include/neo-c.h", 1025)),(struct sType* )come_increment_ref_count(sType_clone(((struct list_item$1sType$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1025))->item)));
        }
        it=((struct list_item$1sType$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1028))->next;
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
    ((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 985))->head=((void*)0);
    ((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 986))->tail=((void*)0);
    ((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 987))->len=0;
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
    struct sType*  __dec_obj6  ;
    struct list_item$1sType$ph* litem_16;
    struct sType*  __dec_obj7  ;
    struct list_item$1sType$ph* litem_17;
    struct sType*  __dec_obj8  ;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1037))->len==0) {
        litem=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), (void*)0, 1038, "struct list_item$1sType$ph*"))));
        ((struct list_item$1sType$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1040))->prev=((void*)0);
        ((struct list_item$1sType$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1041))->next=((void*)0);
        __dec_obj6=((struct list_item$1sType$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1042))->item,
        ((struct list_item$1sType$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1042))->item=(struct sType* )come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj6,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1044))->tail=litem;
        ((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1045))->head=litem;
    }
    else if(((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1047))->len==1) {
        litem_16=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), (void*)0, 1048, "struct list_item$1sType$ph*"))));
        ((struct list_item$1sType$ph*)come_null_checker(litem_16, "/usr/local/include/neo-c.h", 1050))->prev=((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1050))->head;
        ((struct list_item$1sType$ph*)come_null_checker(litem_16, "/usr/local/include/neo-c.h", 1051))->next=((void*)0);
        __dec_obj7=((struct list_item$1sType$ph*)come_null_checker(litem_16, "/usr/local/include/neo-c.h", 1052))->item,
        ((struct list_item$1sType$ph*)come_null_checker(litem_16, "/usr/local/include/neo-c.h", 1052))->item=(struct sType* )come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj7,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1054))->tail=litem_16;
        ((struct list_item$1sType$ph*)come_null_checker(((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1055))->head, "/usr/local/include/neo-c.h", 1055))->next=litem_16;
    }
    else {
        litem_17=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), (void*)0, 1058, "struct list_item$1sType$ph*"))));
        ((struct list_item$1sType$ph*)come_null_checker(litem_17, "/usr/local/include/neo-c.h", 1060))->prev=((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1060))->tail;
        ((struct list_item$1sType$ph*)come_null_checker(litem_17, "/usr/local/include/neo-c.h", 1061))->next=((void*)0);
        __dec_obj8=((struct list_item$1sType$ph*)come_null_checker(litem_17, "/usr/local/include/neo-c.h", 1062))->item,
        ((struct list_item$1sType$ph*)come_null_checker(litem_17, "/usr/local/include/neo-c.h", 1062))->item=(struct sType* )come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj8,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((struct list_item$1sType$ph*)come_null_checker(((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1064))->tail, "/usr/local/include/neo-c.h", 1064))->next=litem_17;
        ((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1065))->tail=litem_17;
    }
    ((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1068))->len++;
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
    it=((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1006))->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=((struct list_item$1sType$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1009))->next;
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
    result=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count(((struct list$1sNode$ph*)come_null_checker(((struct list$1sNode$ph*)(__right_value0=(struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), (void*)0, 1017, "struct list$1sNode$ph*"))), "/usr/local/include/neo-c.h", 1017)))));
    come_call_finalizer(list$1sNode$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    it=((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1019))->head;
    while(it!=((void*)0)) {
        if(1) {
            list$1sNode$ph_add(((struct list$1sNode$ph*)come_null_checker(result, "/usr/local/include/neo-c.h", 1022)),(struct sNode*)come_increment_ref_count(sNode_clone(((struct list_item$1sNode$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1022))->item)));
        }
        else {
            list$1sNode$ph_add(((struct list$1sNode$ph*)come_null_checker(result, "/usr/local/include/neo-c.h", 1025)),(struct sNode*)come_increment_ref_count(sNode_clone(((struct list_item$1sNode$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1025))->item)));
        }
        it=((struct list_item$1sNode$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1028))->next;
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
    ((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 985))->head=((void*)0);
    ((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 986))->tail=((void*)0);
    ((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 987))->len=0;
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
    struct sNode* __dec_obj21;
    struct list_item$1sNode$ph* litem_18;
    struct sNode* __dec_obj22;
    struct list_item$1sNode$ph* litem_19;
    struct sNode* __dec_obj23;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1037))->len==0) {
        litem=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), (void*)0, 1038, "struct list_item$1sNode$ph*"))));
        ((struct list_item$1sNode$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1040))->prev=((void*)0);
        ((struct list_item$1sNode$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1041))->next=((void*)0);
        __dec_obj21=((struct list_item$1sNode$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1042))->item,
        ((struct list_item$1sNode$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1042))->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj21 ? __dec_obj21 = come_decrement_ref_count(__dec_obj21, ((struct sNode*)__dec_obj21)->finalize, ((struct sNode*)__dec_obj21)->_protocol_obj, 0,0, (void*)0) :0);
        ((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1044))->tail=litem;
        ((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1045))->head=litem;
    }
    else if(((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1047))->len==1) {
        litem_18=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), (void*)0, 1048, "struct list_item$1sNode$ph*"))));
        ((struct list_item$1sNode$ph*)come_null_checker(litem_18, "/usr/local/include/neo-c.h", 1050))->prev=((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1050))->head;
        ((struct list_item$1sNode$ph*)come_null_checker(litem_18, "/usr/local/include/neo-c.h", 1051))->next=((void*)0);
        __dec_obj22=((struct list_item$1sNode$ph*)come_null_checker(litem_18, "/usr/local/include/neo-c.h", 1052))->item,
        ((struct list_item$1sNode$ph*)come_null_checker(litem_18, "/usr/local/include/neo-c.h", 1052))->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj22 ? __dec_obj22 = come_decrement_ref_count(__dec_obj22, ((struct sNode*)__dec_obj22)->finalize, ((struct sNode*)__dec_obj22)->_protocol_obj, 0,0, (void*)0) :0);
        ((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1054))->tail=litem_18;
        ((struct list_item$1sNode$ph*)come_null_checker(((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1055))->head, "/usr/local/include/neo-c.h", 1055))->next=litem_18;
    }
    else {
        litem_19=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), (void*)0, 1058, "struct list_item$1sNode$ph*"))));
        ((struct list_item$1sNode$ph*)come_null_checker(litem_19, "/usr/local/include/neo-c.h", 1060))->prev=((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1060))->tail;
        ((struct list_item$1sNode$ph*)come_null_checker(litem_19, "/usr/local/include/neo-c.h", 1061))->next=((void*)0);
        __dec_obj23=((struct list_item$1sNode$ph*)come_null_checker(litem_19, "/usr/local/include/neo-c.h", 1062))->item,
        ((struct list_item$1sNode$ph*)come_null_checker(litem_19, "/usr/local/include/neo-c.h", 1062))->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj23 ? __dec_obj23 = come_decrement_ref_count(__dec_obj23, ((struct sNode*)__dec_obj23)->finalize, ((struct sNode*)__dec_obj23)->_protocol_obj, 0,0, (void*)0) :0);
        ((struct list_item$1sNode$ph*)come_null_checker(((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1064))->tail, "/usr/local/include/neo-c.h", 1064))->next=litem_19;
        ((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1065))->tail=litem_19;
    }
    ((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1068))->len++;
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
    it=((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1006))->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=((struct list_item$1sNode$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1009))->next;
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
    result=(struct list$1int$*)come_increment_ref_count(list$1int$_initialize((struct list$1int$*)come_increment_ref_count(((struct list$1int$*)come_null_checker(((struct list$1int$*)(__right_value0=(struct list$1int$*)come_calloc(1, sizeof(struct list$1int$)*(1), (void*)0, 1017, "struct list$1int$*"))), "/usr/local/include/neo-c.h", 1017)))));
    come_call_finalizer(list$1int$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    it=((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1019))->head;
    while(it!=((void*)0)) {
        if(0) {
            list$1int$_add(((struct list$1int$*)come_null_checker(result, "/usr/local/include/neo-c.h", 1022)),((struct list_item$1int$*)come_null_checker(it, "/usr/local/include/neo-c.h", 1022))->item);
        }
        else {
            list$1int$_add(((struct list$1int$*)come_null_checker(result, "/usr/local/include/neo-c.h", 1025)),((struct list_item$1int$*)come_null_checker(it, "/usr/local/include/neo-c.h", 1025))->item);
        }
        it=((struct list_item$1int$*)come_null_checker(it, "/usr/local/include/neo-c.h", 1028))->next;
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
    ((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 985))->head=((void*)0);
    ((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 986))->tail=((void*)0);
    ((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 987))->len=0;
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
    struct list_item$1int$* litem_20;
    struct list_item$1int$* litem_21;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1037))->len==0) {
        litem=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), (void*)0, 1038, "struct list_item$1int$*"))));
        ((struct list_item$1int$*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1040))->prev=((void*)0);
        ((struct list_item$1int$*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1041))->next=((void*)0);
        ((struct list_item$1int$*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1042))->item=item;
        ((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1044))->tail=litem;
        ((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1045))->head=litem;
    }
    else if(((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1047))->len==1) {
        litem_20=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), (void*)0, 1048, "struct list_item$1int$*"))));
        ((struct list_item$1int$*)come_null_checker(litem_20, "/usr/local/include/neo-c.h", 1050))->prev=((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1050))->head;
        ((struct list_item$1int$*)come_null_checker(litem_20, "/usr/local/include/neo-c.h", 1051))->next=((void*)0);
        ((struct list_item$1int$*)come_null_checker(litem_20, "/usr/local/include/neo-c.h", 1052))->item=item;
        ((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1054))->tail=litem_20;
        ((struct list_item$1int$*)come_null_checker(((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1055))->head, "/usr/local/include/neo-c.h", 1055))->next=litem_20;
    }
    else {
        litem_21=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), (void*)0, 1058, "struct list_item$1int$*"))));
        ((struct list_item$1int$*)come_null_checker(litem_21, "/usr/local/include/neo-c.h", 1060))->prev=((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1060))->tail;
        ((struct list_item$1int$*)come_null_checker(litem_21, "/usr/local/include/neo-c.h", 1061))->next=((void*)0);
        ((struct list_item$1int$*)come_null_checker(litem_21, "/usr/local/include/neo-c.h", 1062))->item=item;
        ((struct list_item$1int$*)come_null_checker(((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1064))->tail, "/usr/local/include/neo-c.h", 1064))->next=litem_21;
        ((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1065))->tail=litem_21;
    }
    ((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1068))->len++;
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
    it=((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1006))->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=((struct list_item$1int$*)come_null_checker(it, "/usr/local/include/neo-c.h", 1009))->next;
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
    result=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)come_null_checker(((struct list$1char$ph*)(__right_value0=(struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), (void*)0, 1017, "struct list$1char$ph*"))), "/usr/local/include/neo-c.h", 1017)))));
    come_call_finalizer(list$1char$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    it=((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1019))->head;
    while(it!=((void*)0)) {
        if(1) {
            list$1char$ph_add(((struct list$1char$ph*)come_null_checker(result, "/usr/local/include/neo-c.h", 1022)),(char* )come_increment_ref_count((char* )come_memdup(((struct list_item$1char$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1022))->item, "/usr/local/include/neo-c.h", 1022, "char* ")));
        }
        else {
            list$1char$ph_add(((struct list$1char$ph*)come_null_checker(result, "/usr/local/include/neo-c.h", 1025)),(char* )come_increment_ref_count((char* )come_memdup(((struct list_item$1char$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1025))->item, "/usr/local/include/neo-c.h", 1025, "char* ")));
        }
        it=((struct list_item$1char$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1028))->next;
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
    ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 985))->head=((void*)0);
    ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 986))->tail=((void*)0);
    ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 987))->len=0;
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
    char*  __dec_obj31  ;
    struct list_item$1char$ph* litem_22;
    char*  __dec_obj32  ;
    struct list_item$1char$ph* litem_23;
    char*  __dec_obj33  ;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1037))->len==0) {
        litem=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), (void*)0, 1038, "struct list_item$1char$ph*"))));
        ((struct list_item$1char$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1040))->prev=((void*)0);
        ((struct list_item$1char$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1041))->next=((void*)0);
        __dec_obj31=((struct list_item$1char$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1042))->item,
        ((struct list_item$1char$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1042))->item=(char* )come_increment_ref_count(item);
        __dec_obj31 = come_decrement_ref_count(__dec_obj31, (void*)0, (void*)0, 0,0, (void*)0);
        ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1044))->tail=litem;
        ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1045))->head=litem;
    }
    else if(((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1047))->len==1) {
        litem_22=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), (void*)0, 1048, "struct list_item$1char$ph*"))));
        ((struct list_item$1char$ph*)come_null_checker(litem_22, "/usr/local/include/neo-c.h", 1050))->prev=((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1050))->head;
        ((struct list_item$1char$ph*)come_null_checker(litem_22, "/usr/local/include/neo-c.h", 1051))->next=((void*)0);
        __dec_obj32=((struct list_item$1char$ph*)come_null_checker(litem_22, "/usr/local/include/neo-c.h", 1052))->item,
        ((struct list_item$1char$ph*)come_null_checker(litem_22, "/usr/local/include/neo-c.h", 1052))->item=(char* )come_increment_ref_count(item);
        __dec_obj32 = come_decrement_ref_count(__dec_obj32, (void*)0, (void*)0, 0,0, (void*)0);
        ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1054))->tail=litem_22;
        ((struct list_item$1char$ph*)come_null_checker(((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1055))->head, "/usr/local/include/neo-c.h", 1055))->next=litem_22;
    }
    else {
        litem_23=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), (void*)0, 1058, "struct list_item$1char$ph*"))));
        ((struct list_item$1char$ph*)come_null_checker(litem_23, "/usr/local/include/neo-c.h", 1060))->prev=((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1060))->tail;
        ((struct list_item$1char$ph*)come_null_checker(litem_23, "/usr/local/include/neo-c.h", 1061))->next=((void*)0);
        __dec_obj33=((struct list_item$1char$ph*)come_null_checker(litem_23, "/usr/local/include/neo-c.h", 1062))->item,
        ((struct list_item$1char$ph*)come_null_checker(litem_23, "/usr/local/include/neo-c.h", 1062))->item=(char* )come_increment_ref_count(item);
        __dec_obj33 = come_decrement_ref_count(__dec_obj33, (void*)0, (void*)0, 0,0, (void*)0);
        ((struct list_item$1char$ph*)come_null_checker(((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1064))->tail, "/usr/local/include/neo-c.h", 1064))->next=litem_23;
        ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1065))->tail=litem_23;
    }
    ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1068))->len++;
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
    it=((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1006))->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=((struct list_item$1char$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1009))->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

static struct map$2char$phbuffer$ph* map$2char$phbuffer$ph_remove(struct map$2char$phbuffer$ph* self, char*  key  , _Bool by_pointer)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phbuffer$ph_remove"; neo_current_frame = &fr;
    struct map$2char$phbuffer$ph* __result_obj__0;
    unsigned int hash;
    unsigned int it;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char* )come_null_checker(((char* )key), "/usr/local/include/neo-c.h", 2225)))%((struct map$2char$phbuffer$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2225))->size;
    it=hash;
    while((_Bool)1) {
        if(((_Bool*)come_null_checker(((struct map$2char$phbuffer$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2229))->item_existance, "/usr/local/include/neo-c.h", 2229))[it]) {
            if((!by_pointer&&string_equals(((char* )come_null_checker(((char** )come_null_checker(((struct map$2char$phbuffer$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2231))->keys, "/usr/local/include/neo-c.h", 2231))[it], "/usr/local/include/neo-c.h", 2231)),key))||(by_pointer&&((char** )come_null_checker(((struct map$2char$phbuffer$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2231))->keys, "/usr/local/include/neo-c.h", 2231))[it]==key)) {
                list$1char$ph_remove(((struct list$1char$ph*)come_null_checker(((struct map$2char$phbuffer$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2233))->key_list, "/usr/local/include/neo-c.h", 2233)),((char** )come_null_checker(((struct map$2char$phbuffer$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2233))->keys, "/usr/local/include/neo-c.h", 2233))[it],(_Bool)0);
                ((_Bool*)come_null_checker(((struct map$2char$phbuffer$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2235))->item_existance, "/usr/local/include/neo-c.h", 2235))[it]=(_Bool)0;
                if(1) {
                    (((char** )come_null_checker(((struct map$2char$phbuffer$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2237))->keys, "/usr/local/include/neo-c.h", 2237))[it] = come_decrement_ref_count(((char** )come_null_checker(((struct map$2char$phbuffer$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2237))->keys, "/usr/local/include/neo-c.h", 2237))[it], (void*)0, (void*)0, 0, 0, (void*)0));
                }
                ((char** )come_null_checker(((struct map$2char$phbuffer$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2239))->keys, "/usr/local/include/neo-c.h", 2239))[it]=((void*)0);
                if(1) {
                    come_call_finalizer(buffer_finalize, ((struct buffer** )come_null_checker(((struct map$2char$phbuffer$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2242))->items, "/usr/local/include/neo-c.h", 2242))[it], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                memset(((struct map$2char$phbuffer$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2244))->items+it,0,sizeof(struct buffer* ));
                ((struct map$2char$phbuffer$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2246))->len--;
                break;
            }
            it++;
            if(it>=((struct map$2char$phbuffer$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2252))->size) {
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
    it=((struct list$1tuple2$2char$phsType$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1006))->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=((struct list_item$1tuple2$2char$phsType$ph$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1009))->next;
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

void output_struct(struct sClass*  klass  , char*  pragma  , struct sInfo*  info  , _Bool anonymous)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "output_struct"; neo_current_frame = &fr;
    char* name;
    _Bool current_stack;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer*  buf  ;
    _Bool existance_generics;
    _Bool named_child;
    struct list$1tuple2$2char$phsType$ph$ph* o2_saved;
    struct tuple2$2char$phsType$ph* it;
    struct tuple2$2char$phsType$ph* multiple_assign_var2
;    char*  name_24  =0;
    struct sType*  type  =0;
    struct sType*  already_defined_child_type  ;
    void* __right_value2 = (void*)0;
    _Bool _conditional_value_X0;
    if(list$1tuple2$2char$phsType$ph$ph_length(((struct list$1tuple2$2char$phsType$ph$ph*)come_null_checker(((struct sClass* )come_null_checker(klass, "19struct.nc", 90))->mFields, "19struct.nc", 90)))==0) {
        (pragma = come_decrement_ref_count(pragma, (void*)0, (void*)0, 0, 0, (void*)0));
        neo_current_frame = fr.prev;
        return;
    }
    name=((struct sClass* )come_null_checker(klass, "19struct.nc", 94))->mName;
    current_stack=strlen(name)>strlen("__current_stack")&&memcmp(name,"__current_stack",strlen("__current_stack"))==0;
    buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count(((struct buffer* )come_null_checker(((struct buffer* )(__right_value0=(struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 97, "struct buffer* "))), "19struct.nc", 97)))));
    come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    if(pragma&&string_operator_not_equals(((char* )come_null_checker(pragma, "19struct.nc", 99)),"")) {
        buffer_append_str(((struct buffer* )come_null_checker(buf, "19struct.nc", 100)),pragma);
    }
    buffer_append_format(((struct buffer* )come_null_checker(buf, "19struct.nc", 102)),"struct %s\n{\n",((struct sClass* )come_null_checker(klass, "19struct.nc", 102))->mName);
    existance_generics=(_Bool)0;
    named_child=(_Bool)0;
    for(o2_saved=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct sClass* )come_null_checker(klass, "19struct.nc", 106))->mFields),it=list$1tuple2$2char$phsType$ph$ph_begin(((struct list$1tuple2$2char$phsType$ph$ph*)come_null_checker(o2_saved, "19struct.nc", 106)));!list$1tuple2$2char$phsType$ph$ph_end(((struct list$1tuple2$2char$phsType$ph$ph*)come_null_checker(o2_saved, "19struct.nc", 106)));it=list$1tuple2$2char$phsType$ph$ph_next(((struct list$1tuple2$2char$phsType$ph$ph*)come_null_checker(o2_saved, "19struct.nc", 106)))){
        multiple_assign_var2=it;
        name_24=(char* )come_increment_ref_count(multiple_assign_var2->v1);
        type=(struct sType* )come_increment_ref_count(multiple_assign_var2->v2);
        if(is_contained_generics_class(type,info)) {
            existance_generics=(_Bool)1;
        }
        ((struct sType* )come_null_checker(type, "19struct.nc", 113))->mStatic=(_Bool)0;
        if(((struct sType* )come_null_checker(type, "19struct.nc", 115))->mAnonymous&&!current_stack) {
            output_aggregate_field(type,(char*)come_increment_ref_count(xsprintf("")),buf,&existance_generics,(char* )come_increment_ref_count(name_24),1,info,&named_child);
        }
        else if(((struct sType* )come_null_checker(type, "19struct.nc", 119))->mInnerStruct&&!current_stack) {
            already_defined_child_type=(struct sType* )come_increment_ref_count(map$2char$phsType$ph_operator_load_element(((struct map$2char$phsType$ph*)come_null_checker(((struct map$2char$phsType$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "19struct.nc", 120))->named_child_struct, "19struct.nc", 120)), "19struct.nc", 120)),((struct sType* )come_null_checker(type, "19struct.nc", 120))->mInnerStructName));
            if(already_defined_child_type&&((((struct sClass* )come_null_checker(((struct sType* )come_null_checker(already_defined_child_type, "19struct.nc", 122))->mClass, "19struct.nc", 122))->mStruct&&((struct sClass* )come_null_checker(((struct sType* )come_null_checker(type, "19struct.nc", 122))->mClass, "19struct.nc", 122))->mStruct)||(((struct sClass* )come_null_checker(((struct sType* )come_null_checker(already_defined_child_type, "19struct.nc", 122))->mClass, "19struct.nc", 122))->mUnion&&((struct sClass* )come_null_checker(((struct sType* )come_null_checker(type, "19struct.nc", 122))->mClass, "19struct.nc", 122))->mUnion))) {
                buffer_append_str(((struct buffer* )come_null_checker(buf, "19struct.nc", 125)),"    ");
                if(((struct sClass* )come_null_checker(((struct sType* )come_null_checker(type, "19struct.nc", 126))->mClass, "19struct.nc", 126))->mStruct) {
                    buffer_append_str(((struct buffer* )come_null_checker(buf, "19struct.nc", 127)),((char* )(__right_value0=charp_operator_add(((char*)come_null_checker("struct ", "19struct.nc", 127)),((struct sType* )come_null_checker(type, "19struct.nc", 127))->mInnerStructName))));
                    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                }
                else {
                    buffer_append_str(((struct buffer* )come_null_checker(buf, "19struct.nc", 130)),((char* )(__right_value0=charp_operator_add(((char*)come_null_checker("union ", "19struct.nc", 130)),((struct sType* )come_null_checker(type, "19struct.nc", 130))->mInnerStructName))));
                    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                }
                buffer_append_str(((struct buffer* )come_null_checker(buf, "19struct.nc", 133)),((char* )(__right_value0=charp_operator_add(((char*)come_null_checker(" ", "19struct.nc", 133)),name_24))));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                buffer_append_str(((struct buffer* )come_null_checker(buf, "19struct.nc", 135)),";\n");
            }
            else {
                map$2char$phsType$ph_insert(((struct map$2char$phsType$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "19struct.nc", 138))->named_child_struct, "19struct.nc", 138)),(char* )come_increment_ref_count(__builtin_string(((struct sType* )come_null_checker(type, "19struct.nc", 138))->mInnerStructName)),(struct sType* )come_increment_ref_count(sType_clone(type)),(_Bool)0);
                map$2char$phbuffer$ph_remove(((struct map$2char$phbuffer$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "19struct.nc", 139))->struct_definition, "19struct.nc", 139)),(char* )come_increment_ref_count(((struct sType* )come_null_checker(type, "19struct.nc", 139))->mInnerStructName),(_Bool)0);
                output_aggregate_field(type,(char* )come_increment_ref_count(((struct sType* )come_null_checker(type, "19struct.nc", 140))->mInnerStructName),buf,&existance_generics,(char* )come_increment_ref_count(name_24),1,info,&named_child);
            }
            named_child=(_Bool)1;
            come_call_finalizer(sType_finalize, already_defined_child_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            buffer_append_str(((struct buffer* )come_null_checker(buf, "19struct.nc", 145)),"    ");
            buffer_append_str(((struct buffer* )come_null_checker(buf, "19struct.nc", 146)),((char* )(__right_value0=make_define_var(type,name_24,info,(_Bool)0,(_Bool)0))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            buffer_append_str(((struct buffer* )come_null_checker(buf, "19struct.nc", 147)),";\n");
        }
        (name_24 = come_decrement_ref_count(name_24, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(((struct sClass* )come_null_checker(klass, "19struct.nc", 151))->mAttribute==((void*)0)) {
        buffer_append_str(((struct buffer* )come_null_checker(buf, "19struct.nc", 152)),"};\n");
    }
    else {
        buffer_append_format(((struct buffer* )come_null_checker(buf, "19struct.nc", 155)),"} %s;\n",((struct sClass* )come_null_checker(klass, "19struct.nc", 155))->mAttribute);
    }
    if(pragma&&string_operator_not_equals(((char* )come_null_checker(pragma, "19struct.nc", 157)),"")) {
        buffer_append_str(((struct buffer* )come_null_checker(buf, "19struct.nc", 158)),"#pragma pack(pop)");
    }
    if(anonymous&&named_child) {
        (pragma = come_decrement_ref_count(pragma, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        neo_current_frame = fr.prev;
        return;
    }
    if(({(_conditional_value_X0=(((struct buffer* )(__right_value2=map$2char$phbuffer$ph_operator_load_element(((struct map$2char$phbuffer$ph*)come_null_checker(((struct map$2char$phbuffer$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "19struct.nc", 163))->struct_definition, "19struct.nc", 163)), "19struct.nc", 163)),((char* )(__right_value1=__builtin_string(name))))))==((void*)0)&&!existance_generics));    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
    come_call_finalizer(buffer_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
_conditional_value_X0;})) {
        map$2char$phbuffer$ph_insert(((struct map$2char$phbuffer$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "19struct.nc", 164))->struct_definition, "19struct.nc", 164)),(char* )come_increment_ref_count(__builtin_string(name)),(struct buffer* )come_increment_ref_count(buf),(_Bool)0);
    }
    (pragma = come_decrement_ref_count(pragma, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
}

static int list$1tuple2$2char$phsType$ph$ph_length(struct list$1tuple2$2char$phsType$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsType$ph$ph_length"; neo_current_frame = &fr;
    if(self==((void*)0)) {
        neo_current_frame = fr.prev;
        return 0;
    }
    neo_current_frame = fr.prev;
    return ((struct list$1tuple2$2char$phsType$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1276))->len;
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
        __result_obj__0 = (struct buffer* )come_increment_ref_count(default_value);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char* )come_null_checker(((char* )key), "/usr/local/include/neo-c.h", 2565)))%((struct map$2char$phbuffer$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2565))->size;
    it=hash;
    while((_Bool)1) {
        if(((_Bool*)come_null_checker(((struct map$2char$phbuffer$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2569))->item_existance, "/usr/local/include/neo-c.h", 2569))[it]) {
            if(string_equals(((char* )come_null_checker(((char** )come_null_checker(((struct map$2char$phbuffer$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2571))->keys, "/usr/local/include/neo-c.h", 2571))[it], "/usr/local/include/neo-c.h", 2571)),key)) {
                __result_obj__0 = (struct buffer* )come_increment_ref_count(((struct buffer** )come_null_checker(((struct map$2char$phbuffer$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2573))->items, "/usr/local/include/neo-c.h", 2573))[it]);
                neo_current_frame = fr.prev;
                come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
            it++;
            if(it>=((struct map$2char$phbuffer$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2578))->size) {
                it=0;
            }
            else if(it==hash) {
                __result_obj__0 = (struct buffer* )come_increment_ref_count(default_value);
                neo_current_frame = fr.prev;
                come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
        }
        else {
            __result_obj__0 = (struct buffer* )come_increment_ref_count(default_value);
            neo_current_frame = fr.prev;
            come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__0;
        }
    }
    __result_obj__0 = (struct buffer* )come_increment_ref_count(default_value);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
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
        __result_obj__0 = (struct buffer* )come_increment_ref_count(default_value);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char* )come_null_checker(((char* )key), "/usr/local/include/neo-c.h", 2565)))%((struct map$2char$phbuffer$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2565))->size;
    it=hash;
    while((_Bool)1) {
        if(((_Bool*)come_null_checker(((struct map$2char$phbuffer$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2569))->item_existance, "/usr/local/include/neo-c.h", 2569))[it]) {
            if(string_equals(((char* )come_null_checker(((char** )come_null_checker(((struct map$2char$phbuffer$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2571))->keys, "/usr/local/include/neo-c.h", 2571))[it], "/usr/local/include/neo-c.h", 2571)),key)) {
                __result_obj__0 = (struct buffer* )come_increment_ref_count(((struct buffer** )come_null_checker(((struct map$2char$phbuffer$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2573))->items, "/usr/local/include/neo-c.h", 2573))[it]);
                neo_current_frame = fr.prev;
                come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
            it++;
            if(it>=((struct map$2char$phbuffer$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2578))->size) {
                it=0;
            }
            else if(it==hash) {
                __result_obj__0 = (struct buffer* )come_increment_ref_count(default_value);
                neo_current_frame = fr.prev;
                come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
        }
        else {
            __result_obj__0 = (struct buffer* )come_increment_ref_count(default_value);
            neo_current_frame = fr.prev;
            come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__0;
        }
    }
    __result_obj__0 = (struct buffer* )come_increment_ref_count(default_value);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct map$2char$phbuffer$ph* map$2char$phbuffer$ph_insert(struct map$2char$phbuffer$ph* self, char*  key  , struct buffer*  item  , _Bool by_pointer)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phbuffer$ph_insert"; neo_current_frame = &fr;
    struct map$2char$phbuffer$ph* __result_obj__0;
    unsigned int hash;
    unsigned int it;
    _Bool same_key_exist;
    char*  it2  ;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(buffer_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(((struct map$2char$phbuffer$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2398))->len*10>=((struct map$2char$phbuffer$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2398))->size) {
        map$2char$phbuffer$ph_rehash(((struct map$2char$phbuffer$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2399)));
    }
    hash=string_get_hash_key(((char* )come_null_checker(((char* )key), "/usr/local/include/neo-c.h", 2401)))%((struct map$2char$phbuffer$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2401))->size;
    it=hash;
    while((_Bool)1) {
        if(((_Bool*)come_null_checker(((struct map$2char$phbuffer$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2405))->item_existance, "/usr/local/include/neo-c.h", 2405))[it]) {
            if((!by_pointer&&string_equals(((char* )come_null_checker(((char** )come_null_checker(((struct map$2char$phbuffer$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2407))->keys, "/usr/local/include/neo-c.h", 2407))[it], "/usr/local/include/neo-c.h", 2407)),key))||(by_pointer&&((char** )come_null_checker(((struct map$2char$phbuffer$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2407))->keys, "/usr/local/include/neo-c.h", 2407))[it]==key)) {
                if(1) {
                    list$1char$ph_remove(((struct list$1char$ph*)come_null_checker(((struct map$2char$phbuffer$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2410))->key_list, "/usr/local/include/neo-c.h", 2410)),((char** )come_null_checker(((struct map$2char$phbuffer$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2410))->keys, "/usr/local/include/neo-c.h", 2410))[it],(_Bool)0);
                    (((char** )come_null_checker(((struct map$2char$phbuffer$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2411))->keys, "/usr/local/include/neo-c.h", 2411))[it] = come_decrement_ref_count(((char** )come_null_checker(((struct map$2char$phbuffer$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2411))->keys, "/usr/local/include/neo-c.h", 2411))[it], (void*)0, (void*)0, 0, 0, (void*)0));
                    ((char** )come_null_checker(((struct map$2char$phbuffer$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2412))->keys, "/usr/local/include/neo-c.h", 2412))[it]=(char* )come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(((struct list$1char$ph*)come_null_checker(((struct map$2char$phbuffer$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2415))->key_list, "/usr/local/include/neo-c.h", 2415)),((char** )come_null_checker(((struct map$2char$phbuffer$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2415))->keys, "/usr/local/include/neo-c.h", 2415))[it],(_Bool)0);
                    ((char** )come_null_checker(((struct map$2char$phbuffer$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2416))->keys, "/usr/local/include/neo-c.h", 2416))[it]=key;
                }
                if(1) {
                    come_call_finalizer(buffer_finalize, ((struct buffer** )come_null_checker(((struct map$2char$phbuffer$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2419))->items, "/usr/local/include/neo-c.h", 2419))[it], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    ((struct buffer** )come_null_checker(((struct map$2char$phbuffer$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2420))->items, "/usr/local/include/neo-c.h", 2420))[it]=(struct buffer* )come_increment_ref_count(item);
                }
                else {
                    ((struct buffer** )come_null_checker(((struct map$2char$phbuffer$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2423))->items, "/usr/local/include/neo-c.h", 2423))[it]=item;
                }
                break;
            }
            it++;
            if(it>=((struct map$2char$phbuffer$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2430))->size) {
                it=0;
            }
            else if(it==hash) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            ((_Bool*)come_null_checker(((struct map$2char$phbuffer$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2440))->item_existance, "/usr/local/include/neo-c.h", 2440))[it]=(_Bool)1;
            if(1) {
                ((char** )come_null_checker(((struct map$2char$phbuffer$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2442))->keys, "/usr/local/include/neo-c.h", 2442))[it]=(char* )come_increment_ref_count(key);
            }
            else {
                ((char** )come_null_checker(((struct map$2char$phbuffer$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2445))->keys, "/usr/local/include/neo-c.h", 2445))[it]=key;
            }
            if(1) {
                ((struct buffer** )come_null_checker(((struct map$2char$phbuffer$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2448))->items, "/usr/local/include/neo-c.h", 2448))[it]=(struct buffer* )come_increment_ref_count(item);
            }
            else {
                ((struct buffer** )come_null_checker(((struct map$2char$phbuffer$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2451))->items, "/usr/local/include/neo-c.h", 2451))[it]=item;
            }
            ((struct map$2char$phbuffer$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2454))->len++;
            break;
        }
    }
    same_key_exist=(_Bool)0;
    for(it2=list$1char$ph_begin(((struct list$1char$ph*)come_null_checker(((struct map$2char$phbuffer$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2461))->key_list, "/usr/local/include/neo-c.h", 2461)));!list$1char$ph_end(((struct list$1char$ph*)come_null_checker(((struct map$2char$phbuffer$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2461))->key_list, "/usr/local/include/neo-c.h", 2461)));it2=list$1char$ph_next(((struct list$1char$ph*)come_null_checker(((struct map$2char$phbuffer$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2461))->key_list, "/usr/local/include/neo-c.h", 2461)))){
        if((!by_pointer&&string_equals(((char* )come_null_checker(it2, "/usr/local/include/neo-c.h", 2462)),key))||(by_pointer&&it2==key)) {
            same_key_exist=(_Bool)1;
        }
    }
    if(!same_key_exist) {
        list$1char$ph_push_back(((struct list$1char$ph*)come_null_checker(((struct map$2char$phbuffer$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2468))->key_list, "/usr/local/include/neo-c.h", 2468)),(char* )come_increment_ref_count(key));
    }
    __result_obj__0 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(buffer_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void map$2char$phbuffer$ph_rehash(struct map$2char$phbuffer$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phbuffer$ph_rehash"; neo_current_frame = &fr;
    int size;
    void* __right_value0 = (void*)0;
    char**  keys  ;
    struct buffer**  items  ;
    _Bool* item_existance;
    int len;
    char*  it  ;
    struct buffer*  default_value  ;
    struct buffer*  it2  ;
    unsigned int hash;
    int n;
    struct buffer*  default_value_27  ;
    size=((struct map$2char$phbuffer$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2318))->size*10;
    keys=(char** )come_increment_ref_count(((char** )(__right_value0=(char* *)come_calloc(1, sizeof(char* )*(1*(size)), (void*)0, 2319, "char** "))));
    items=(struct buffer** )come_increment_ref_count(((struct buffer** )(__right_value0=(struct buffer* *)come_calloc(1, sizeof(struct buffer* )*(1*(size)), (void*)0, 2320, "struct buffer** "))));
    item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value0=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size)), (void*)0, 2321, "_Bool*"))));
    len=0;
    for(it=map$2char$phbuffer$ph_begin(((struct map$2char$phbuffer$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2325)));!map$2char$phbuffer$ph_end(((struct map$2char$phbuffer$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2325)));it=map$2char$phbuffer$ph_next(((struct map$2char$phbuffer$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2325)))){
        memset(&default_value,0,sizeof(struct buffer* ));
        it2=((struct buffer* )(__right_value0=map$2char$phbuffer$ph_at(((struct map$2char$phbuffer$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2328)),it,default_value,(_Bool)0)));
        hash=string_get_hash_key(((char* )come_null_checker(((char* )it), "/usr/local/include/neo-c.h", 2329)))%size;
        n=hash;
        while((_Bool)1) {
            if(((_Bool*)come_null_checker(item_existance, "/usr/local/include/neo-c.h", 2333))[n]) {
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
                ((_Bool*)come_null_checker(item_existance, "/usr/local/include/neo-c.h", 2347))[n]=(_Bool)1;
                ((char** )come_null_checker(keys, "/usr/local/include/neo-c.h", 2348))[n]=it;
                memset(&default_value_27,0,sizeof(struct buffer* ));
                ((struct buffer** )come_null_checker(items, "/usr/local/include/neo-c.h", 2351))[n]=((struct buffer* )(__right_value0=map$2char$phbuffer$ph_at(((struct map$2char$phbuffer$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2351)),it,(struct buffer* )come_increment_ref_count(default_value_27),(_Bool)0)));
                len++;
                come_call_finalizer(buffer_finalize, default_value_27, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                come_call_finalizer(buffer_finalize, default_value_27, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)((struct map$2char$phbuffer$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2359))->items);
    (((struct map$2char$phbuffer$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2360))->item_existance = come_decrement_ref_count(((struct map$2char$phbuffer$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2360))->item_existance, (void*)0, (void*)0, 0, 0, (void*)0));
    come_free((char*)((struct map$2char$phbuffer$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2361))->keys);
    ((struct map$2char$phbuffer$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2363))->keys=keys;
    ((struct map$2char$phbuffer$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2364))->items=items;
    ((struct map$2char$phbuffer$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2365))->item_existance=item_existance;
    ((struct map$2char$phbuffer$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2367))->size=size;
    ((struct map$2char$phbuffer$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2368))->len=len;
    neo_current_frame = fr.prev;
}

static char*  map$2char$phbuffer$ph_begin(struct map$2char$phbuffer$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phbuffer$ph_begin"; neo_current_frame = &fr;
    char*  result  ;
    char*  __result_obj__0  ;
    char*  result_25  ;
    if(self==((void*)0)) {
        memset(&result,0,sizeof(char* ));
        __result_obj__0 = result;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    ((struct list$1char$ph*)come_null_checker(((struct map$2char$phbuffer$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2281))->key_list, "/usr/local/include/neo-c.h", 2281))->it=((struct list$1char$ph*)come_null_checker(((struct map$2char$phbuffer$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2281))->key_list, "/usr/local/include/neo-c.h", 2281))->head;
    if(((struct list$1char$ph*)come_null_checker(((struct map$2char$phbuffer$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2283))->key_list, "/usr/local/include/neo-c.h", 2283))->it) {
        __result_obj__0 = ((struct list_item$1char$ph*)come_null_checker(((struct list$1char$ph*)come_null_checker(((struct map$2char$phbuffer$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2284))->key_list, "/usr/local/include/neo-c.h", 2284))->it, "/usr/local/include/neo-c.h", 2284))->item;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    memset(&result_25,0,sizeof(char* ));
    __result_obj__0 = result_25;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static _Bool map$2char$phbuffer$ph_end(struct map$2char$phbuffer$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phbuffer$ph_end"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return self==((void*)0)||((struct map$2char$phbuffer$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2312))->key_list==((void*)0)||((struct list$1char$ph*)come_null_checker(((struct map$2char$phbuffer$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2312))->key_list, "/usr/local/include/neo-c.h", 2312))->it==((void*)0);
    neo_current_frame = fr.prev;
}

static char*  map$2char$phbuffer$ph_next(struct map$2char$phbuffer$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phbuffer$ph_next"; neo_current_frame = &fr;
    char*  result  ;
    char*  __result_obj__0  ;
    char*  result_26  ;
    if(self==((void*)0)||((struct list$1char$ph*)come_null_checker(((struct map$2char$phbuffer$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2295))->key_list, "/usr/local/include/neo-c.h", 2295))->it==((void*)0)) {
        memset(&result,0,sizeof(char* ));
        __result_obj__0 = result;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    ((struct list$1char$ph*)come_null_checker(((struct map$2char$phbuffer$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2300))->key_list, "/usr/local/include/neo-c.h", 2300))->it=((struct list_item$1char$ph*)come_null_checker(((struct list$1char$ph*)come_null_checker(((struct map$2char$phbuffer$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2300))->key_list, "/usr/local/include/neo-c.h", 2300))->it, "/usr/local/include/neo-c.h", 2300))->next;
    if(((struct list$1char$ph*)come_null_checker(((struct map$2char$phbuffer$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2302))->key_list, "/usr/local/include/neo-c.h", 2302))->it) {
        __result_obj__0 = ((struct list_item$1char$ph*)come_null_checker(((struct list$1char$ph*)come_null_checker(((struct map$2char$phbuffer$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2303))->key_list, "/usr/local/include/neo-c.h", 2303))->it, "/usr/local/include/neo-c.h", 2303))->item;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    memset(&result_26,0,sizeof(char* ));
    __result_obj__0 = result_26;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct buffer*  map$2char$phbuffer$ph_at(struct map$2char$phbuffer$ph* self, char*  key  , struct buffer*  default_value  , _Bool by_pointer)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phbuffer$ph_at"; neo_current_frame = &fr;
    struct buffer*  __result_obj__0  ;
    unsigned int hash;
    unsigned int it;
    if(self==((void*)0)) {
        __result_obj__0 = (struct buffer* )come_increment_ref_count(default_value);
        come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char* )come_null_checker(((char* )key), "/usr/local/include/neo-c.h", 2191)))%((struct map$2char$phbuffer$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2191))->size;
    it=hash;
    while((_Bool)1) {
        if(((_Bool*)come_null_checker(((struct map$2char$phbuffer$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2195))->item_existance, "/usr/local/include/neo-c.h", 2195))[it]) {
            if((!by_pointer&&string_equals(((char* )come_null_checker(((char** )come_null_checker(((struct map$2char$phbuffer$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2197))->keys, "/usr/local/include/neo-c.h", 2197))[it], "/usr/local/include/neo-c.h", 2197)),key))||(by_pointer&&((char** )come_null_checker(((struct map$2char$phbuffer$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2197))->keys, "/usr/local/include/neo-c.h", 2197))[it]==key)) {
                __result_obj__0 = (struct buffer* )come_increment_ref_count(((struct buffer** )come_null_checker(((struct map$2char$phbuffer$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2199))->items, "/usr/local/include/neo-c.h", 2199))[it]);
                come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                neo_current_frame = fr.prev;
                come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
            it++;
            if(it>=((struct map$2char$phbuffer$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2204))->size) {
                it=0;
            }
            else if(it==hash) {
                __result_obj__0 = (struct buffer* )come_increment_ref_count(default_value);
                come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                neo_current_frame = fr.prev;
                come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
        }
        else {
            __result_obj__0 = (struct buffer* )come_increment_ref_count(default_value);
            come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            neo_current_frame = fr.prev;
            come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__0;
        }
    }
    __result_obj__0 = (struct buffer* )come_increment_ref_count(default_value);
    come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

_Bool output_generics_struct(struct sType*  type  , struct sType*  generics_type  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "output_generics_struct"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  new_name  ;
    void* __right_value1 = (void*)0;
    void* __right_value2 = (void*)0;
    struct sClass*  generics_class  ;
    _Bool __result_obj__0;
    struct sClass*  new_class  ;
    int i;
    struct list$1tuple2$2char$phsType$ph$ph* o2_saved;
    struct tuple2$2char$phsType$ph* it;
    struct tuple2$2char$phsType$ph* multiple_assign_var3
;    char*  name  =0;
    struct sType*  type_31  =0;
    struct sType*  new_type_  ;
    struct sType*  new_type  ;
    void* __right_value3 = (void*)0;
    struct sType*  __dec_obj43  ;
    struct sType*  __dec_obj44  ;
    new_name=(char* )come_increment_ref_count(create_generics_name(type,info));
    if(!map$2char$phsClass$ph_find(((struct map$2char$phsClass$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "19struct.nc", 172))->classes, "19struct.nc", 172)),new_name,(_Bool)0)) {
        generics_class=(struct sClass* )come_increment_ref_count(map$2char$phsClass$ph_operator_load_element(((struct map$2char$phsClass$ph*)come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "19struct.nc", 173))->generics_classes, "19struct.nc", 173)), "19struct.nc", 173)),((char* )(__right_value1=__builtin_string(((struct sClass* )come_null_checker(((struct sType* )come_null_checker(type, "19struct.nc", 173))->mClass, "19struct.nc", 173))->mName)))));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        if(generics_class==((void*)0)) {
            err_msg(info,"generics_class(%s) is null",((struct sClass* )come_null_checker(((struct sType* )come_null_checker(type, "19struct.nc", 176))->mClass, "19struct.nc", 176))->mName);
            __result_obj__0 = (_Bool)0;
            come_call_finalizer(sClass_finalize, generics_class, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (new_name = come_decrement_ref_count(new_name, (void*)0, (void*)0, 0, 0, (void*)0));
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        map$2char$phsClass$ph_insert(((struct map$2char$phsClass$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "19struct.nc", 180))->classes, "19struct.nc", 180)),(char* )come_increment_ref_count(__builtin_string(new_name)),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass* )come_increment_ref_count(((struct sClass* )come_null_checker(((struct sClass* )(__right_value1=(struct sClass *)come_calloc(1, sizeof(struct sClass )*(1), (void*)0, 180, "struct sClass* "))), "19struct.nc", 180))),new_name,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,(_Bool)0,(_Bool)0,info)),(_Bool)0);
        come_call_finalizer(sClass_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        new_class=((struct sClass* )(__right_value1=map$2char$phsClass$ph_at(((struct map$2char$phsClass$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "19struct.nc", 182))->classes, "19struct.nc", 182)),((char* )(__right_value0=__builtin_string(new_name))),((void*)0),(_Bool)0)));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        i=0;
        for(o2_saved=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct sClass* )come_null_checker(generics_class, "19struct.nc", 185))->mFields),it=list$1tuple2$2char$phsType$ph$ph_begin(((struct list$1tuple2$2char$phsType$ph$ph*)come_null_checker(o2_saved, "19struct.nc", 185)));!list$1tuple2$2char$phsType$ph$ph_end(((struct list$1tuple2$2char$phsType$ph$ph*)come_null_checker(o2_saved, "19struct.nc", 185)));it=list$1tuple2$2char$phsType$ph$ph_next(((struct list$1tuple2$2char$phsType$ph$ph*)come_null_checker(o2_saved, "19struct.nc", 185)))){
            multiple_assign_var3=it;
            name=(char* )come_increment_ref_count(multiple_assign_var3->v1);
            type_31=(struct sType* )come_increment_ref_count(multiple_assign_var3->v2);
            new_type_=(struct sType* )come_increment_ref_count(solve_generics(type_31,generics_type,info));
            new_type=(struct sType* )come_increment_ref_count(solve_method_generics(new_type_,info));
            list$1tuple2$2char$phsType$ph$ph_push_back(((struct list$1tuple2$2char$phsType$ph$ph*)come_null_checker(((struct sClass* )come_null_checker(new_class, "19struct.nc", 191))->mFields, "19struct.nc", 191)),(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph*)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "19struct.nc", 191, "struct tuple2$2char$phsType$ph")),(char* )come_increment_ref_count((char* )come_memdup(name, "19struct.nc", 191, "char* ")),(struct sType* )come_increment_ref_count(sType_clone(new_type)))));
            (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sType_finalize, type_31, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, new_type_, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, new_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        __dec_obj43=((struct sType* )come_null_checker(type, "19struct.nc", 194))->mNoSolvedGenericsType,
        ((struct sType* )come_null_checker(type, "19struct.nc", 194))->mNoSolvedGenericsType=(struct sType* )come_increment_ref_count(sType_clone(type));
        come_call_finalizer(sType_finalize, __dec_obj43,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((struct sType* )come_null_checker(((struct sType* )come_null_checker(type, "19struct.nc", 195))->mNoSolvedGenericsType, "19struct.nc", 195))->mPointerNum=((struct sType* )come_null_checker(type, "19struct.nc", 195))->mPointerNum;
        ((struct sType* )come_null_checker(type, "19struct.nc", 197))->mClass=new_class;
        list$1sType$ph_reset(((struct list$1sType$ph*)come_null_checker(((struct sType* )come_null_checker(type, "19struct.nc", 198))->mGenericsTypes, "19struct.nc", 198)));
        output_struct(new_class,((void*)0),info,(_Bool)0);
        come_call_finalizer(sClass_finalize, generics_class, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        if(((struct sType* )come_null_checker(type, "19struct.nc", 203))->mNoSolvedGenericsType==((void*)0)&&list$1sType$ph_length(((struct list$1sType$ph*)come_null_checker(((struct sType* )come_null_checker(type, "19struct.nc", 203))->mGenericsTypes, "19struct.nc", 203)))>0) {
            __dec_obj44=((struct sType* )come_null_checker(type, "19struct.nc", 204))->mNoSolvedGenericsType,
            ((struct sType* )come_null_checker(type, "19struct.nc", 204))->mNoSolvedGenericsType=(struct sType* )come_increment_ref_count(sType_clone(type));
            come_call_finalizer(sType_finalize, __dec_obj44,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            ((struct sType* )come_null_checker(((struct sType* )come_null_checker(type, "19struct.nc", 205))->mNoSolvedGenericsType, "19struct.nc", 205))->mPointerNum=((struct sType* )come_null_checker(type, "19struct.nc", 205))->mPointerNum;
        }
        ((struct sType* )come_null_checker(type, "19struct.nc", 207))->mClass=((struct sClass* )(__right_value2=map$2char$phsClass$ph_operator_load_element(((struct map$2char$phsClass$ph*)come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "19struct.nc", 207))->classes, "19struct.nc", 207)), "19struct.nc", 207)),((char* )(__right_value1=__builtin_string(new_name))))));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        list$1sType$ph_reset(((struct list$1sType$ph*)come_null_checker(((struct sType* )come_null_checker(type, "19struct.nc", 208))->mGenericsTypes, "19struct.nc", 208)));
    }
    __result_obj__0 = (_Bool)1;
    (new_name = come_decrement_ref_count(new_name, (void*)0, (void*)0, 0, 0, (void*)0));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static _Bool map$2char$phsClass$ph_find(struct map$2char$phsClass$ph* self, char*  key  , _Bool by_pointer)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsClass$ph_find"; neo_current_frame = &fr;
    unsigned int hash;
    int it;
    if(self==((void*)0)) {
        neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    hash=string_get_hash_key(((char* )come_null_checker(((char* )key), "/usr/local/include/neo-c.h", 2700)))%((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2700))->size;
    it=hash;
    while((_Bool)1) {
        if(((_Bool*)come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2704))->item_existance, "/usr/local/include/neo-c.h", 2704))[it]) {
            if((!by_pointer&&string_equals(((char* )come_null_checker(((char** )come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2706))->keys, "/usr/local/include/neo-c.h", 2706))[it], "/usr/local/include/neo-c.h", 2706)),key))||(by_pointer&&((char** )come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2706))->keys, "/usr/local/include/neo-c.h", 2706))[it]==key)) {
                neo_current_frame = fr.prev;
                return (_Bool)1;
            }
            it++;
            if(it>=((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2713))->size) {
                it=0;
            }
            else if(it==hash) {
                neo_current_frame = fr.prev;
                return (_Bool)0;
            }
        }
        else {
            neo_current_frame = fr.prev;
            return (_Bool)0;
        }
    }
    neo_current_frame = fr.prev;
    return (_Bool)0;
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
    hash=string_get_hash_key(((char* )come_null_checker(((char* )key), "/usr/local/include/neo-c.h", 2565)))%((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2565))->size;
    it=hash;
    while((_Bool)1) {
        if(((_Bool*)come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2569))->item_existance, "/usr/local/include/neo-c.h", 2569))[it]) {
            if(string_equals(((char* )come_null_checker(((char** )come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2571))->keys, "/usr/local/include/neo-c.h", 2571))[it], "/usr/local/include/neo-c.h", 2571)),key)) {
                __result_obj__0 = (struct sClass* )come_increment_ref_count(((struct sClass** )come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2573))->items, "/usr/local/include/neo-c.h", 2573))[it]);
                neo_current_frame = fr.prev;
                come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
            it++;
            if(it>=((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2578))->size) {
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
    hash=string_get_hash_key(((char* )come_null_checker(((char* )key), "/usr/local/include/neo-c.h", 2565)))%((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2565))->size;
    it=hash;
    while((_Bool)1) {
        if(((_Bool*)come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2569))->item_existance, "/usr/local/include/neo-c.h", 2569))[it]) {
            if(string_equals(((char* )come_null_checker(((char** )come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2571))->keys, "/usr/local/include/neo-c.h", 2571))[it], "/usr/local/include/neo-c.h", 2571)),key)) {
                __result_obj__0 = (struct sClass* )come_increment_ref_count(((struct sClass** )come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2573))->items, "/usr/local/include/neo-c.h", 2573))[it]);
                neo_current_frame = fr.prev;
                come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
            it++;
            if(it>=((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2578))->size) {
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
        (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sClass_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2398))->len*10>=((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2398))->size) {
        map$2char$phsClass$ph_rehash(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2399)));
    }
    hash=string_get_hash_key(((char* )come_null_checker(((char* )key), "/usr/local/include/neo-c.h", 2401)))%((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2401))->size;
    it=hash;
    while((_Bool)1) {
        if(((_Bool*)come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2405))->item_existance, "/usr/local/include/neo-c.h", 2405))[it]) {
            if((!by_pointer&&string_equals(((char* )come_null_checker(((char** )come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2407))->keys, "/usr/local/include/neo-c.h", 2407))[it], "/usr/local/include/neo-c.h", 2407)),key))||(by_pointer&&((char** )come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2407))->keys, "/usr/local/include/neo-c.h", 2407))[it]==key)) {
                if(1) {
                    list$1char$ph_remove(((struct list$1char$ph*)come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2410))->key_list, "/usr/local/include/neo-c.h", 2410)),((char** )come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2410))->keys, "/usr/local/include/neo-c.h", 2410))[it],(_Bool)0);
                    (((char** )come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2411))->keys, "/usr/local/include/neo-c.h", 2411))[it] = come_decrement_ref_count(((char** )come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2411))->keys, "/usr/local/include/neo-c.h", 2411))[it], (void*)0, (void*)0, 0, 0, (void*)0));
                    ((char** )come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2412))->keys, "/usr/local/include/neo-c.h", 2412))[it]=(char* )come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(((struct list$1char$ph*)come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2415))->key_list, "/usr/local/include/neo-c.h", 2415)),((char** )come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2415))->keys, "/usr/local/include/neo-c.h", 2415))[it],(_Bool)0);
                    ((char** )come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2416))->keys, "/usr/local/include/neo-c.h", 2416))[it]=key;
                }
                if(1) {
                    come_call_finalizer(sClass_finalize, ((struct sClass** )come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2419))->items, "/usr/local/include/neo-c.h", 2419))[it], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    ((struct sClass** )come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2420))->items, "/usr/local/include/neo-c.h", 2420))[it]=(struct sClass* )come_increment_ref_count(item);
                }
                else {
                    ((struct sClass** )come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2423))->items, "/usr/local/include/neo-c.h", 2423))[it]=item;
                }
                break;
            }
            it++;
            if(it>=((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2430))->size) {
                it=0;
            }
            else if(it==hash) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            ((_Bool*)come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2440))->item_existance, "/usr/local/include/neo-c.h", 2440))[it]=(_Bool)1;
            if(1) {
                ((char** )come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2442))->keys, "/usr/local/include/neo-c.h", 2442))[it]=(char* )come_increment_ref_count(key);
            }
            else {
                ((char** )come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2445))->keys, "/usr/local/include/neo-c.h", 2445))[it]=key;
            }
            if(1) {
                ((struct sClass** )come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2448))->items, "/usr/local/include/neo-c.h", 2448))[it]=(struct sClass* )come_increment_ref_count(item);
            }
            else {
                ((struct sClass** )come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2451))->items, "/usr/local/include/neo-c.h", 2451))[it]=item;
            }
            ((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2454))->len++;
            break;
        }
    }
    same_key_exist=(_Bool)0;
    for(it2=list$1char$ph_begin(((struct list$1char$ph*)come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2461))->key_list, "/usr/local/include/neo-c.h", 2461)));!list$1char$ph_end(((struct list$1char$ph*)come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2461))->key_list, "/usr/local/include/neo-c.h", 2461)));it2=list$1char$ph_next(((struct list$1char$ph*)come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2461))->key_list, "/usr/local/include/neo-c.h", 2461)))){
        if((!by_pointer&&string_equals(((char* )come_null_checker(it2, "/usr/local/include/neo-c.h", 2462)),key))||(by_pointer&&it2==key)) {
            same_key_exist=(_Bool)1;
        }
    }
    if(!same_key_exist) {
        list$1char$ph_push_back(((struct list$1char$ph*)come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2468))->key_list, "/usr/local/include/neo-c.h", 2468)),(char* )come_increment_ref_count(key));
    }
    __result_obj__0 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sClass_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
    struct sClass*  default_value_30  ;
    size=((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2318))->size*10;
    keys=(char** )come_increment_ref_count(((char** )(__right_value0=(char* *)come_calloc(1, sizeof(char* )*(1*(size)), (void*)0, 2319, "char** "))));
    items=(struct sClass** )come_increment_ref_count(((struct sClass** )(__right_value0=(struct sClass* *)come_calloc(1, sizeof(struct sClass* )*(1*(size)), (void*)0, 2320, "struct sClass** "))));
    item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value0=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size)), (void*)0, 2321, "_Bool*"))));
    len=0;
    for(it=map$2char$phsClass$ph_begin(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2325)));!map$2char$phsClass$ph_end(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2325)));it=map$2char$phsClass$ph_next(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2325)))){
        memset(&default_value,0,sizeof(struct sClass* ));
        it2=((struct sClass* )(__right_value0=map$2char$phsClass$ph_at(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2328)),it,default_value,(_Bool)0)));
        hash=string_get_hash_key(((char* )come_null_checker(((char* )it), "/usr/local/include/neo-c.h", 2329)))%size;
        n=hash;
        while((_Bool)1) {
            if(((_Bool*)come_null_checker(item_existance, "/usr/local/include/neo-c.h", 2333))[n]) {
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
                ((_Bool*)come_null_checker(item_existance, "/usr/local/include/neo-c.h", 2347))[n]=(_Bool)1;
                ((char** )come_null_checker(keys, "/usr/local/include/neo-c.h", 2348))[n]=it;
                memset(&default_value_30,0,sizeof(struct sClass* ));
                ((struct sClass** )come_null_checker(items, "/usr/local/include/neo-c.h", 2351))[n]=((struct sClass* )(__right_value0=map$2char$phsClass$ph_at(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2351)),it,(struct sClass* )come_increment_ref_count(default_value_30),(_Bool)0)));
                len++;
                come_call_finalizer(sClass_finalize, default_value_30, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                come_call_finalizer(sClass_finalize, default_value_30, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2359))->items);
    (((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2360))->item_existance = come_decrement_ref_count(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2360))->item_existance, (void*)0, (void*)0, 0, 0, (void*)0));
    come_free((char*)((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2361))->keys);
    ((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2363))->keys=keys;
    ((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2364))->items=items;
    ((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2365))->item_existance=item_existance;
    ((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2367))->size=size;
    ((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2368))->len=len;
    neo_current_frame = fr.prev;
}

static char*  map$2char$phsClass$ph_begin(struct map$2char$phsClass$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsClass$ph_begin"; neo_current_frame = &fr;
    char*  result  ;
    char*  __result_obj__0  ;
    char*  result_28  ;
    if(self==((void*)0)) {
        memset(&result,0,sizeof(char* ));
        __result_obj__0 = result;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    ((struct list$1char$ph*)come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2281))->key_list, "/usr/local/include/neo-c.h", 2281))->it=((struct list$1char$ph*)come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2281))->key_list, "/usr/local/include/neo-c.h", 2281))->head;
    if(((struct list$1char$ph*)come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2283))->key_list, "/usr/local/include/neo-c.h", 2283))->it) {
        __result_obj__0 = ((struct list_item$1char$ph*)come_null_checker(((struct list$1char$ph*)come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2284))->key_list, "/usr/local/include/neo-c.h", 2284))->it, "/usr/local/include/neo-c.h", 2284))->item;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    memset(&result_28,0,sizeof(char* ));
    __result_obj__0 = result_28;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static _Bool map$2char$phsClass$ph_end(struct map$2char$phsClass$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsClass$ph_end"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return self==((void*)0)||((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2312))->key_list==((void*)0)||((struct list$1char$ph*)come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2312))->key_list, "/usr/local/include/neo-c.h", 2312))->it==((void*)0);
    neo_current_frame = fr.prev;
}

static char*  map$2char$phsClass$ph_next(struct map$2char$phsClass$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsClass$ph_next"; neo_current_frame = &fr;
    char*  result  ;
    char*  __result_obj__0  ;
    char*  result_29  ;
    if(self==((void*)0)||((struct list$1char$ph*)come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2295))->key_list, "/usr/local/include/neo-c.h", 2295))->it==((void*)0)) {
        memset(&result,0,sizeof(char* ));
        __result_obj__0 = result;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    ((struct list$1char$ph*)come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2300))->key_list, "/usr/local/include/neo-c.h", 2300))->it=((struct list_item$1char$ph*)come_null_checker(((struct list$1char$ph*)come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2300))->key_list, "/usr/local/include/neo-c.h", 2300))->it, "/usr/local/include/neo-c.h", 2300))->next;
    if(((struct list$1char$ph*)come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2302))->key_list, "/usr/local/include/neo-c.h", 2302))->it) {
        __result_obj__0 = ((struct list_item$1char$ph*)come_null_checker(((struct list$1char$ph*)come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2303))->key_list, "/usr/local/include/neo-c.h", 2303))->it, "/usr/local/include/neo-c.h", 2303))->item;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    memset(&result_29,0,sizeof(char* ));
    __result_obj__0 = result_29;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sClass*  map$2char$phsClass$ph_at(struct map$2char$phsClass$ph* self, char*  key  , struct sClass*  default_value  , _Bool by_pointer)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsClass$ph_at"; neo_current_frame = &fr;
    struct sClass*  __result_obj__0  ;
    unsigned int hash;
    unsigned int it;
    if(self==((void*)0)) {
        __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value);
        come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        neo_current_frame = fr.prev;
        come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char* )come_null_checker(((char* )key), "/usr/local/include/neo-c.h", 2191)))%((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2191))->size;
    it=hash;
    while((_Bool)1) {
        if(((_Bool*)come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2195))->item_existance, "/usr/local/include/neo-c.h", 2195))[it]) {
            if((!by_pointer&&string_equals(((char* )come_null_checker(((char** )come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2197))->keys, "/usr/local/include/neo-c.h", 2197))[it], "/usr/local/include/neo-c.h", 2197)),key))||(by_pointer&&((char** )come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2197))->keys, "/usr/local/include/neo-c.h", 2197))[it]==key)) {
                __result_obj__0 = (struct sClass* )come_increment_ref_count(((struct sClass** )come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2199))->items, "/usr/local/include/neo-c.h", 2199))[it]);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                neo_current_frame = fr.prev;
                come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
            it++;
            if(it>=((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2204))->size) {
                it=0;
            }
            else if(it==hash) {
                __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                neo_current_frame = fr.prev;
                come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
        }
        else {
            __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value);
            come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            neo_current_frame = fr.prev;
            come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__0;
        }
    }
    __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value);
    come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph_push_back(struct list$1tuple2$2char$phsType$ph$ph* self, struct tuple2$2char$phsType$ph* item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsType$ph$ph_push_back"; neo_current_frame = &fr;
    struct list$1tuple2$2char$phsType$ph$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1tuple2$2char$phsType$ph$ph* litem;
    struct tuple2$2char$phsType$ph* __dec_obj38;
    struct list_item$1tuple2$2char$phsType$ph$ph* litem_32;
    struct tuple2$2char$phsType$ph* __dec_obj39;
    struct list_item$1tuple2$2char$phsType$ph$ph* litem_33;
    struct tuple2$2char$phsType$ph* __dec_obj40;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(((struct list$1tuple2$2char$phsType$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1122))->len==0) {
        litem=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), (void*)0, 1123, "struct list_item$1tuple2$2char$phsType$ph$ph*"))));
        ((struct list_item$1tuple2$2char$phsType$ph$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1125))->prev=((void*)0);
        ((struct list_item$1tuple2$2char$phsType$ph$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1126))->next=((void*)0);
        __dec_obj38=((struct list_item$1tuple2$2char$phsType$ph$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1127))->item,
        ((struct list_item$1tuple2$2char$phsType$ph$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1127))->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __dec_obj38,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((struct list$1tuple2$2char$phsType$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1129))->tail=litem;
        ((struct list$1tuple2$2char$phsType$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1130))->head=litem;
    }
    else if(((struct list$1tuple2$2char$phsType$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1132))->len==1) {
        litem_32=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), (void*)0, 1133, "struct list_item$1tuple2$2char$phsType$ph$ph*"))));
        ((struct list_item$1tuple2$2char$phsType$ph$ph*)come_null_checker(litem_32, "/usr/local/include/neo-c.h", 1135))->prev=((struct list$1tuple2$2char$phsType$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1135))->head;
        ((struct list_item$1tuple2$2char$phsType$ph$ph*)come_null_checker(litem_32, "/usr/local/include/neo-c.h", 1136))->next=((void*)0);
        __dec_obj39=((struct list_item$1tuple2$2char$phsType$ph$ph*)come_null_checker(litem_32, "/usr/local/include/neo-c.h", 1137))->item,
        ((struct list_item$1tuple2$2char$phsType$ph$ph*)come_null_checker(litem_32, "/usr/local/include/neo-c.h", 1137))->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __dec_obj39,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((struct list$1tuple2$2char$phsType$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1139))->tail=litem_32;
        ((struct list_item$1tuple2$2char$phsType$ph$ph*)come_null_checker(((struct list$1tuple2$2char$phsType$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1140))->head, "/usr/local/include/neo-c.h", 1140))->next=litem_32;
    }
    else {
        litem_33=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), (void*)0, 1143, "struct list_item$1tuple2$2char$phsType$ph$ph*"))));
        ((struct list_item$1tuple2$2char$phsType$ph$ph*)come_null_checker(litem_33, "/usr/local/include/neo-c.h", 1145))->prev=((struct list$1tuple2$2char$phsType$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1145))->tail;
        ((struct list_item$1tuple2$2char$phsType$ph$ph*)come_null_checker(litem_33, "/usr/local/include/neo-c.h", 1146))->next=((void*)0);
        __dec_obj40=((struct list_item$1tuple2$2char$phsType$ph$ph*)come_null_checker(litem_33, "/usr/local/include/neo-c.h", 1147))->item,
        ((struct list_item$1tuple2$2char$phsType$ph$ph*)come_null_checker(litem_33, "/usr/local/include/neo-c.h", 1147))->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __dec_obj40,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((struct list_item$1tuple2$2char$phsType$ph$ph*)come_null_checker(((struct list$1tuple2$2char$phsType$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1149))->tail, "/usr/local/include/neo-c.h", 1149))->next=litem_33;
        ((struct list$1tuple2$2char$phsType$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1150))->tail=litem_33;
    }
    ((struct list$1tuple2$2char$phsType$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1153))->len++;
    __result_obj__0 = self;
    come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct tuple2$2char$phsType$ph* tuple2$2char$phsType$ph_initialize(struct tuple2$2char$phsType$ph* self, char*  v1  , struct sType*  v2  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2char$phsType$ph_initialize"; neo_current_frame = &fr;
    char*  __dec_obj41  ;
    struct sType*  __dec_obj42  ;
    struct tuple2$2char$phsType$ph* __result_obj__0;
    __dec_obj41=((struct tuple2$2char$phsType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2929))->v1,
    ((struct tuple2$2char$phsType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2929))->v1=(char* )come_increment_ref_count(v1);
    __dec_obj41 = come_decrement_ref_count(__dec_obj41, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj42=((struct tuple2$2char$phsType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2930))->v2,
    ((struct tuple2$2char$phsType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2930))->v2=(struct sType* )come_increment_ref_count(v2);
    come_call_finalizer(sType_finalize, __dec_obj42,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __result_obj__0 = (struct tuple2$2char$phsType$ph*)come_increment_ref_count(self);
    come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sType_finalize, v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
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
    it=((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1356))->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=((struct list_item$1sType$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1359))->next;
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    ((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1363))->head=((void*)0);
    ((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1364))->tail=((void*)0);
    ((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1366))->len=0;
    __result_obj__0 = self;
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
    return ((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1276))->len;
    neo_current_frame = fr.prev;
}

struct sStructNode* sStructNode_initialize(struct sStructNode* self, char*  name  , struct sClass*  klass  , struct sInfo*  info  , _Bool anonymous)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sStructNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __dec_obj45  ;
    char*  __dec_obj46  ;
    struct sStructNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sStructNode*)come_increment_ref_count(((struct sStructNode*)come_null_checker(self, "19struct.nc", 218))),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj45=((struct sStructNode*)come_null_checker(self, "19struct.nc", 220))->mName,
    ((struct sStructNode*)come_null_checker(self, "19struct.nc", 220))->mName=(char* )come_increment_ref_count(__builtin_string(name));
    __dec_obj45 = come_decrement_ref_count(__dec_obj45, (void*)0, (void*)0, 0,0, (void*)0);
    ((struct sStructNode*)come_null_checker(self, "19struct.nc", 221))->mClass=klass;
    __dec_obj46=((struct sStructNode*)come_null_checker(self, "19struct.nc", 222))->pragma,
    ((struct sStructNode*)come_null_checker(self, "19struct.nc", 222))->pragma=(char* )come_increment_ref_count(((struct sInfo* )come_null_checker(info, "19struct.nc", 222))->pragma);
    __dec_obj46 = come_decrement_ref_count(__dec_obj46, (void*)0, (void*)0, 0,0, (void*)0);
    ((struct sStructNode*)come_null_checker(self, "19struct.nc", 223))->anonymous=anonymous;
    __result_obj__0 = (struct sStructNode*)come_increment_ref_count(self);
    come_call_finalizer(sStructNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
    neo_current_frame = fr.prev;
    come_call_finalizer(sStructNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

_Bool sStructNode_terminated(struct sStructNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sStructNode_terminated"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return (_Bool)1;
    neo_current_frame = fr.prev;
}

char*  sStructNode_kind(struct sStructNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sStructNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sStructNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool sStructNode_compile(struct sStructNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sStructNode_compile"; neo_current_frame = &fr;
    struct sClass*  klass  ;
    void* __right_value0 = (void*)0;
    char*  name  ;
    char*  pragma  ;
    _Bool anonymous;
    _Bool __result_obj__0;
    klass=((struct sStructNode*)come_null_checker(self, "19struct.nc", 238))->mClass;
    name=(char* )come_increment_ref_count(__builtin_string(((struct sStructNode*)come_null_checker(self, "19struct.nc", 239))->mName));
    pragma=(char* )come_increment_ref_count(((struct sStructNode*)come_null_checker(self, "19struct.nc", 240))->pragma);
    anonymous=((struct sStructNode*)come_null_checker(self, "19struct.nc", 241))->anonymous;
    output_struct(klass,(char* )come_increment_ref_count(pragma),info,anonymous);
    __result_obj__0 = (_Bool)1;
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
    (pragma = come_decrement_ref_count(pragma, (void*)0, (void*)0, 0, 0, (void*)0));
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

static void sStructNode_finalize(struct sStructNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sStructNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct sStructNode*)come_null_checker(self, "sStructNode_finalize", 2))->sname!=((void*)0)) {
        (((struct sStructNode*)come_null_checker(self, "sStructNode_finalize", 2))->sname = come_decrement_ref_count(((struct sStructNode*)come_null_checker(self, "sStructNode_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct sStructNode*)come_null_checker(self, "sStructNode_finalize", 3))->mName!=((void*)0)) {
        (((struct sStructNode*)come_null_checker(self, "sStructNode_finalize", 3))->mName = come_decrement_ref_count(((struct sStructNode*)come_null_checker(self, "sStructNode_finalize", 3))->mName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct sStructNode*)come_null_checker(self, "sStructNode_finalize", 4))->pragma!=((void*)0)) {
        (((struct sStructNode*)come_null_checker(self, "sStructNode_finalize", 4))->pragma = come_decrement_ref_count(((struct sStructNode*)come_null_checker(self, "sStructNode_finalize", 4))->pragma, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    neo_current_frame = fr.prev;
}

struct sStructNobodyNode* sStructNobodyNode_initialize(struct sStructNobodyNode* self, char*  name  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sStructNobodyNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __dec_obj47  ;
    struct sStructNobodyNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sStructNobodyNode*)come_increment_ref_count(((struct sStructNobodyNode*)come_null_checker(self, "19struct.nc", 253))),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj47=((struct sStructNobodyNode*)come_null_checker(self, "19struct.nc", 255))->mName,
    ((struct sStructNobodyNode*)come_null_checker(self, "19struct.nc", 255))->mName=(char* )come_increment_ref_count(name);
    __dec_obj47 = come_decrement_ref_count(__dec_obj47, (void*)0, (void*)0, 0,0, (void*)0);
    __result_obj__0 = (struct sStructNobodyNode*)come_increment_ref_count(self);
    come_call_finalizer(sStructNobodyNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
    neo_current_frame = fr.prev;
    come_call_finalizer(sStructNobodyNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

_Bool sStructNobodyNode_terminated(struct sStructNobodyNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sStructNobodyNode_terminated"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return (_Bool)1;
    neo_current_frame = fr.prev;
}

char*  sStructNobodyNode_kind(struct sStructNobodyNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sStructNobodyNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sStructNobodyNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool sStructNobodyNode_compile(struct sStructNobodyNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sStructNobodyNode_compile"; neo_current_frame = &fr;
    char*  name  ;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    void* __right_value2 = (void*)0;
    _Bool __result_obj__0;
    name=(char* )come_increment_ref_count(((struct sStructNobodyNode*)come_null_checker(self, "19struct.nc", 270))->mName);
    map$2char$phbuffer$ph_insert(((struct map$2char$phbuffer$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "19struct.nc", 272))->previous_struct_definition, "19struct.nc", 272)),(char* )come_increment_ref_count(__builtin_string(name)),(struct buffer* )come_increment_ref_count(charp_to_buffer(((char* )come_null_checker(((char* )(__right_value1=xsprintf("struct %s;\n",name))), "19struct.nc", 272)))),(_Bool)0);
    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
    __result_obj__0 = (_Bool)1;
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sStructNobodyNode_finalize(struct sStructNobodyNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sStructNobodyNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct sStructNobodyNode*)come_null_checker(self, "sStructNobodyNode_finalize", 2))->sname!=((void*)0)) {
        (((struct sStructNobodyNode*)come_null_checker(self, "sStructNobodyNode_finalize", 2))->sname = come_decrement_ref_count(((struct sStructNobodyNode*)come_null_checker(self, "sStructNobodyNode_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct sStructNobodyNode*)come_null_checker(self, "sStructNobodyNode_finalize", 3))->mName!=((void*)0)) {
        (((struct sStructNobodyNode*)come_null_checker(self, "sStructNobodyNode_finalize", 3))->mName = come_decrement_ref_count(((struct sStructNobodyNode*)come_null_checker(self, "sStructNobodyNode_finalize", 3))->mName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    neo_current_frame = fr.prev;
}

struct sNode* create_nothing_node(struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "create_nothing_node"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value1;
    struct sNothingNode* _inf_obj_value1;
    void* __right_value2 = (void*)0;
    struct sNode* __result_obj__0;
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 281, "struct sNode");
    _inf_obj_value1=(struct sNothingNode*)come_increment_ref_count(((struct sNothingNode*)(__right_value1=sNothingNode_initialize((struct sNothingNode* )come_increment_ref_count(((struct sNothingNode* )come_null_checker(((struct sNothingNode* )(__right_value0=(struct sNothingNode *)come_calloc(1, sizeof(struct sNothingNode )*(1), (void*)0, 281, "struct sNothingNode* "))), "19struct.nc", 281))),info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sNothingNode_finalize;
    _inf_value1->clone=(void*)sNothingNode_clone;
    _inf_value1->compile=(void*)sNothingNode_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sline_real=(void*)sNodeBase_sline_real;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sNothingNode_terminated;
    _inf_value1->kind=(void*)sNothingNode_kind;
    __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value1)));
    come_call_finalizer(sNothingNode_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer(sNothingNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    return __result_obj__0;
}

static void sNothingNode_finalize(struct sNothingNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sNothingNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct sNothingNode*)come_null_checker(self, "sNothingNode_finalize", 2))->sname!=((void*)0)) {
        (((struct sNothingNode*)come_null_checker(self, "sNothingNode_finalize", 2))->sname = come_decrement_ref_count(((struct sNothingNode*)come_null_checker(self, "sNothingNode_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    neo_current_frame = fr.prev;
}

static struct sNothingNode* sNothingNode_clone(struct sNothingNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sNothingNode_clone"; neo_current_frame = &fr;
    struct sNothingNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sNothingNode*  result  ;
    char*  __dec_obj48  ;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sNothingNode* )come_increment_ref_count((struct sNothingNode *)come_calloc(1, sizeof(struct sNothingNode )*(1), (void*)0, 5, "struct sNothingNode* "));
    if(self!=((void*)0)) {
        ((struct sNothingNode* )come_null_checker(result, "sNothingNode_clone", 6))->sline=((struct sNothingNode*)come_null_checker(self, "sNothingNode_clone", 6))->sline;
    }
    if(self!=((void*)0)&&((struct sNothingNode*)come_null_checker(self, "sNothingNode_clone", 7))->sname!=((void*)0)) {
        __dec_obj48=((struct sNothingNode* )come_null_checker(result, "sNothingNode_clone", 7))->sname,
        ((struct sNothingNode* )come_null_checker(result, "sNothingNode_clone", 7))->sname=(char* )come_increment_ref_count((char* )come_memdup(((struct sNothingNode*)come_null_checker(self, "sNothingNode_clone", 7))->sname, "sNothingNode_clone", 7, "char* "));
        __dec_obj48 = come_decrement_ref_count(__dec_obj48, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        ((struct sNothingNode* )come_null_checker(result, "sNothingNode_clone", 8))->sline_real=((struct sNothingNode*)come_null_checker(self, "sNothingNode_clone", 8))->sline_real;
    }
    __result_obj__0 = result;
    come_call_finalizer(sNothingNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sClassNode* sClassNode_initialize(struct sClassNode* self, char*  name  , struct sClass*  klass  , struct list$1sNode$ph* methods, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sClassNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __dec_obj49  ;
    struct sClass*  __dec_obj59  ;
    struct list$1sNode$ph* __dec_obj60;
    struct sClassNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sClassNode*)come_increment_ref_count(((struct sClassNode*)come_null_checker(self, "19struct.nc", 288))),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj49=((struct sClassNode*)come_null_checker(self, "19struct.nc", 290))->mName,
    ((struct sClassNode*)come_null_checker(self, "19struct.nc", 290))->mName=(char* )come_increment_ref_count(__builtin_string(name));
    __dec_obj49 = come_decrement_ref_count(__dec_obj49, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj59=((struct sClassNode*)come_null_checker(self, "19struct.nc", 291))->mClass,
    ((struct sClassNode*)come_null_checker(self, "19struct.nc", 291))->mClass=(struct sClass* )come_increment_ref_count(sClass_clone(klass));
    come_call_finalizer(sClass_finalize, __dec_obj59,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj60=((struct sClassNode*)come_null_checker(self, "19struct.nc", 293))->mMethods,
    ((struct sClassNode*)come_null_checker(self, "19struct.nc", 293))->mMethods=(struct list$1sNode$ph*)come_increment_ref_count(methods);
    come_call_finalizer(list$1sNode$ph_finalize, __dec_obj60,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __result_obj__0 = (struct sClassNode*)come_increment_ref_count(self);
    come_call_finalizer(sClassNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sClass_finalize, klass, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, methods, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sClassNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

_Bool sClassNode_terminated(struct sClassNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sClassNode_terminated"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return (_Bool)1;
    neo_current_frame = fr.prev;
}

char*  sClassNode_kind(struct sClassNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sClassNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sClassNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool sClassNode_compile(struct sClassNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sClassNode_compile"; neo_current_frame = &fr;
    struct sClass*  klass  ;
    void* __right_value0 = (void*)0;
    char*  name  ;
    _Bool _conditional_value_X0;
    void* __right_value1 = (void*)0;
    struct sClass*  klass2  ;
    struct list$1tuple2$2char$phsType$ph$ph* __dec_obj61;
    struct sType*  type  ;
    struct sType*  override_  ;
    struct list$1sNode$ph* o2_saved;
    struct sNode* it;
    _Bool Value;
    _Bool __result_obj__0;
    klass=(struct sClass* )come_increment_ref_count(((struct sClassNode*)come_null_checker(self, "19struct.nc", 308))->mClass);
    name=(char* )come_increment_ref_count(__builtin_string(((struct sClassNode*)come_null_checker(self, "19struct.nc", 309))->mName));
    if(({(_conditional_value_X0=(((struct sClass* )(__right_value0=map$2char$phsClass$ph_at(((struct map$2char$phsClass$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "19struct.nc", 311))->classes, "19struct.nc", 311)),name,((void*)0),(_Bool)0)))==((void*)0)));    come_call_finalizer(sClass_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
_conditional_value_X0;})) {
        map$2char$phsClass$ph_insert(((struct map$2char$phsClass$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "19struct.nc", 312))->classes, "19struct.nc", 312)),(char* )come_increment_ref_count(name),(struct sClass* )come_increment_ref_count(sClass_clone(klass)),(_Bool)0);
    }
    if(({(_conditional_value_X0=(((struct sClass* )(__right_value0=map$2char$phsClass$ph_at(((struct map$2char$phsClass$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "19struct.nc", 315))->classes, "19struct.nc", 315)),name,((void*)0),(_Bool)0)))&&list$1tuple2$2char$phsType$ph$ph_length(((struct list$1tuple2$2char$phsType$ph$ph*)come_null_checker(((struct sClass* )come_null_checker(((struct sClass* )(__right_value1=map$2char$phsClass$ph_at(((struct map$2char$phsClass$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "19struct.nc", 315))->classes, "19struct.nc", 315)),name,((void*)0),(_Bool)0))), "19struct.nc", 315))->mFields, "19struct.nc", 315)))==0));    come_call_finalizer(sClass_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer(sClass_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
_conditional_value_X0;})) {
        klass2=(struct sClass* )come_increment_ref_count(map$2char$phsClass$ph_at(((struct map$2char$phsClass$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "19struct.nc", 316))->classes, "19struct.nc", 316)),name,((void*)0),(_Bool)0));
        __dec_obj61=((struct sClass* )come_null_checker(klass2, "19struct.nc", 317))->mFields,
        ((struct sClass* )come_null_checker(klass2, "19struct.nc", 317))->mFields=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsType$ph$ph$p_clone(((struct sClass* )come_null_checker(klass, "19struct.nc", 317))->mFields));
        come_call_finalizer(list$1tuple2$2char$phsType$ph$ph_finalize, __dec_obj61,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sClass_finalize, klass2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count(((struct sType* )come_null_checker(((struct sType* )(__right_value0=(struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 320, "struct sType* "))), "19struct.nc", 320))),(char* )come_increment_ref_count(name),(_Bool)0,info,(_Bool)0,0));
    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    override_=((struct sType* )(__right_value1=map$2char$phsType$ph_at(((struct map$2char$phsType$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "19struct.nc", 321))->types, "19struct.nc", 321)),((char* )(__right_value0=__builtin_string(name))),((void*)0),(_Bool)0)));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    if(override_) {
        if(((struct sType* )come_null_checker(override_, "19struct.nc", 323))->mTypedef) {
            ((struct sType* )come_null_checker(type, "19struct.nc", 324))->mTypedef=(_Bool)1;
        }
    }
    map$2char$phsType$ph_insert(((struct map$2char$phsType$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "19struct.nc", 327))->types, "19struct.nc", 327)),(char* )come_increment_ref_count(__builtin_string(name)),(struct sType* )come_increment_ref_count(sType_clone(type)),(_Bool)0);
    output_struct(klass,((void*)0),info,(_Bool)0);
    for(o2_saved=(struct list$1sNode$ph*)come_increment_ref_count(((struct sClassNode*)come_null_checker(self, "19struct.nc", 331))->mMethods),it=list$1sNode$ph_begin(((struct list$1sNode$ph*)come_null_checker(o2_saved, "19struct.nc", 331)));!list$1sNode$ph_end(((struct list$1sNode$ph*)come_null_checker(o2_saved, "19struct.nc", 331)));it=list$1sNode$ph_next(((struct list$1sNode$ph*)come_null_checker(o2_saved, "19struct.nc", 331)))){
        Value=node_compile(it,info);
        if(!Value) {
            __result_obj__0 = (_Bool)0;
            come_call_finalizer(list$1sNode$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sClass_finalize, klass, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
    }
    come_call_finalizer(list$1sNode$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    __result_obj__0 = (_Bool)1;
    come_call_finalizer(sClass_finalize, klass, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sClass*  sClass_clone(struct sClass*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sClass_clone"; neo_current_frame = &fr;
    struct sClass*  __result_obj__0  ;
    void* __right_value0 = (void*)0;
    struct sClass*  result  ;
    char*  __dec_obj50  ;
    struct list$1tuple2$2char$phsType$ph$ph* __dec_obj56;
    char*  __dec_obj57  ;
    char*  __dec_obj58  ;
    if(self==(void*)0) {
        __result_obj__0 = (struct sClass* )come_increment_ref_count((void*)0);
        neo_current_frame = fr.prev;
        come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    result=(struct sClass* )come_increment_ref_count((struct sClass *)come_calloc(1, sizeof(struct sClass )*(1), (void*)0, 5, "struct sClass* "));
    if(self!=((void*)0)) {
        ((struct sClass* )come_null_checker(result, "sClass_clone", 6))->mStruct=((struct sClass* )come_null_checker(self, "sClass_clone", 6))->mStruct;
    }
    if(self!=((void*)0)) {
        ((struct sClass* )come_null_checker(result, "sClass_clone", 7))->mFloat=((struct sClass* )come_null_checker(self, "sClass_clone", 7))->mFloat;
    }
    if(self!=((void*)0)) {
        ((struct sClass* )come_null_checker(result, "sClass_clone", 8))->mUnion=((struct sClass* )come_null_checker(self, "sClass_clone", 8))->mUnion;
    }
    if(self!=((void*)0)) {
        ((struct sClass* )come_null_checker(result, "sClass_clone", 9))->mGenerics=((struct sClass* )come_null_checker(self, "sClass_clone", 9))->mGenerics;
    }
    if(self!=((void*)0)) {
        ((struct sClass* )come_null_checker(result, "sClass_clone", 10))->mMethodGenerics=((struct sClass* )come_null_checker(self, "sClass_clone", 10))->mMethodGenerics;
    }
    if(self!=((void*)0)) {
        ((struct sClass* )come_null_checker(result, "sClass_clone", 11))->mEnum=((struct sClass* )come_null_checker(self, "sClass_clone", 11))->mEnum;
    }
    if(self!=((void*)0)) {
        ((struct sClass* )come_null_checker(result, "sClass_clone", 12))->mProtocol=((struct sClass* )come_null_checker(self, "sClass_clone", 12))->mProtocol;
    }
    if(self!=((void*)0)) {
        ((struct sClass* )come_null_checker(result, "sClass_clone", 13))->mNumber=((struct sClass* )come_null_checker(self, "sClass_clone", 13))->mNumber;
    }
    if(self!=((void*)0)) {
        ((struct sClass* )come_null_checker(result, "sClass_clone", 14))->mUniq=((struct sClass* )come_null_checker(self, "sClass_clone", 14))->mUniq;
    }
    if(self!=((void*)0)) {
        ((struct sClass* )come_null_checker(result, "sClass_clone", 15))->mTypeName=((struct sClass* )come_null_checker(self, "sClass_clone", 15))->mTypeName;
    }
    if(self!=((void*)0)) {
        ((struct sClass* )come_null_checker(result, "sClass_clone", 16))->mAnonymous=((struct sClass* )come_null_checker(self, "sClass_clone", 16))->mAnonymous;
    }
    if(self!=((void*)0)&&((struct sClass* )come_null_checker(self, "sClass_clone", 17))->mName!=((void*)0)) {
        __dec_obj50=((struct sClass* )come_null_checker(result, "sClass_clone", 17))->mName,
        ((struct sClass* )come_null_checker(result, "sClass_clone", 17))->mName=(char* )come_increment_ref_count((char* )come_memdup(((struct sClass* )come_null_checker(self, "sClass_clone", 17))->mName, "sClass_clone", 17, "char* "));
        __dec_obj50 = come_decrement_ref_count(__dec_obj50, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        ((struct sClass* )come_null_checker(result, "sClass_clone", 18))->mGenericsNum=((struct sClass* )come_null_checker(self, "sClass_clone", 18))->mGenericsNum;
    }
    if(self!=((void*)0)) {
        ((struct sClass* )come_null_checker(result, "sClass_clone", 19))->mMethodGenericsNum=((struct sClass* )come_null_checker(self, "sClass_clone", 19))->mMethodGenericsNum;
    }
    if(self!=((void*)0)&&((struct sClass* )come_null_checker(self, "sClass_clone", 20))->mFields!=((void*)0)) {
        __dec_obj56=((struct sClass* )come_null_checker(result, "sClass_clone", 20))->mFields,
        ((struct sClass* )come_null_checker(result, "sClass_clone", 20))->mFields=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsType$ph$ph$p_clone(((struct sClass* )come_null_checker(self, "sClass_clone", 20))->mFields));
        come_call_finalizer(list$1tuple2$2char$phsType$ph$ph_finalize, __dec_obj56,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sClass* )come_null_checker(self, "sClass_clone", 21))->mParentClassName!=((void*)0)) {
        __dec_obj57=((struct sClass* )come_null_checker(result, "sClass_clone", 21))->mParentClassName,
        ((struct sClass* )come_null_checker(result, "sClass_clone", 21))->mParentClassName=(char* )come_increment_ref_count((char* )come_memdup(((struct sClass* )come_null_checker(self, "sClass_clone", 21))->mParentClassName, "sClass_clone", 21, "char* "));
        __dec_obj57 = come_decrement_ref_count(__dec_obj57, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sClass* )come_null_checker(self, "sClass_clone", 22))->mAttribute!=((void*)0)) {
        __dec_obj58=((struct sClass* )come_null_checker(result, "sClass_clone", 22))->mAttribute,
        ((struct sClass* )come_null_checker(result, "sClass_clone", 22))->mAttribute=(char* )come_increment_ref_count((char* )come_memdup(((struct sClass* )come_null_checker(self, "sClass_clone", 22))->mAttribute, "sClass_clone", 22, "char* "));
        __dec_obj58 = come_decrement_ref_count(__dec_obj58, (void*)0, (void*)0, 0,0, (void*)0);
    }
    __result_obj__0 = (struct sClass* )come_increment_ref_count(result);
    come_call_finalizer(sClass_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph$p_clone(struct list$1tuple2$2char$phsType$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsType$ph$ph$p_clone"; neo_current_frame = &fr;
    struct list$1tuple2$2char$phsType$ph$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1tuple2$2char$phsType$ph$ph* result;
    struct list_item$1tuple2$2char$phsType$ph$ph* it;
    if(self==((void*)0)) {
        __result_obj__0 = (struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((void*)0));
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    result=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsType$ph$ph_initialize((struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list$1tuple2$2char$phsType$ph$ph*)come_null_checker(((struct list$1tuple2$2char$phsType$ph$ph*)(__right_value0=(struct list$1tuple2$2char$phsType$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsType$ph$ph)*(1), (void*)0, 1017, "struct list$1tuple2$2char$phsType$ph$ph*"))), "/usr/local/include/neo-c.h", 1017)))));
    come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    it=((struct list$1tuple2$2char$phsType$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1019))->head;
    while(it!=((void*)0)) {
        if(1) {
            list$1tuple2$2char$phsType$ph$ph_add(((struct list$1tuple2$2char$phsType$ph$ph*)come_null_checker(result, "/usr/local/include/neo-c.h", 1022)),(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_clone(((struct list_item$1tuple2$2char$phsType$ph$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1022))->item)));
        }
        else {
            list$1tuple2$2char$phsType$ph$ph_add(((struct list$1tuple2$2char$phsType$ph$ph*)come_null_checker(result, "/usr/local/include/neo-c.h", 1025)),(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_clone(((struct list_item$1tuple2$2char$phsType$ph$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1025))->item)));
        }
        it=((struct list_item$1tuple2$2char$phsType$ph$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1028))->next;
    }
    __result_obj__0 = (struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(result);
    come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph_initialize(struct list$1tuple2$2char$phsType$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsType$ph$ph_initialize"; neo_current_frame = &fr;
    struct list$1tuple2$2char$phsType$ph$ph* __result_obj__0;
    ((struct list$1tuple2$2char$phsType$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 985))->head=((void*)0);
    ((struct list$1tuple2$2char$phsType$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 986))->tail=((void*)0);
    ((struct list$1tuple2$2char$phsType$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 987))->len=0;
    __result_obj__0 = (struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph_add(struct list$1tuple2$2char$phsType$ph$ph* self, struct tuple2$2char$phsType$ph* item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsType$ph$ph_add"; neo_current_frame = &fr;
    struct list$1tuple2$2char$phsType$ph$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1tuple2$2char$phsType$ph$ph* litem;
    struct tuple2$2char$phsType$ph* __dec_obj51;
    struct list_item$1tuple2$2char$phsType$ph$ph* litem_34;
    struct tuple2$2char$phsType$ph* __dec_obj52;
    struct list_item$1tuple2$2char$phsType$ph$ph* litem_35;
    struct tuple2$2char$phsType$ph* __dec_obj53;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(((struct list$1tuple2$2char$phsType$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1037))->len==0) {
        litem=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), (void*)0, 1038, "struct list_item$1tuple2$2char$phsType$ph$ph*"))));
        ((struct list_item$1tuple2$2char$phsType$ph$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1040))->prev=((void*)0);
        ((struct list_item$1tuple2$2char$phsType$ph$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1041))->next=((void*)0);
        __dec_obj51=((struct list_item$1tuple2$2char$phsType$ph$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1042))->item,
        ((struct list_item$1tuple2$2char$phsType$ph$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1042))->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __dec_obj51,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((struct list$1tuple2$2char$phsType$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1044))->tail=litem;
        ((struct list$1tuple2$2char$phsType$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1045))->head=litem;
    }
    else if(((struct list$1tuple2$2char$phsType$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1047))->len==1) {
        litem_34=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), (void*)0, 1048, "struct list_item$1tuple2$2char$phsType$ph$ph*"))));
        ((struct list_item$1tuple2$2char$phsType$ph$ph*)come_null_checker(litem_34, "/usr/local/include/neo-c.h", 1050))->prev=((struct list$1tuple2$2char$phsType$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1050))->head;
        ((struct list_item$1tuple2$2char$phsType$ph$ph*)come_null_checker(litem_34, "/usr/local/include/neo-c.h", 1051))->next=((void*)0);
        __dec_obj52=((struct list_item$1tuple2$2char$phsType$ph$ph*)come_null_checker(litem_34, "/usr/local/include/neo-c.h", 1052))->item,
        ((struct list_item$1tuple2$2char$phsType$ph$ph*)come_null_checker(litem_34, "/usr/local/include/neo-c.h", 1052))->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __dec_obj52,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((struct list$1tuple2$2char$phsType$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1054))->tail=litem_34;
        ((struct list_item$1tuple2$2char$phsType$ph$ph*)come_null_checker(((struct list$1tuple2$2char$phsType$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1055))->head, "/usr/local/include/neo-c.h", 1055))->next=litem_34;
    }
    else {
        litem_35=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), (void*)0, 1058, "struct list_item$1tuple2$2char$phsType$ph$ph*"))));
        ((struct list_item$1tuple2$2char$phsType$ph$ph*)come_null_checker(litem_35, "/usr/local/include/neo-c.h", 1060))->prev=((struct list$1tuple2$2char$phsType$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1060))->tail;
        ((struct list_item$1tuple2$2char$phsType$ph$ph*)come_null_checker(litem_35, "/usr/local/include/neo-c.h", 1061))->next=((void*)0);
        __dec_obj53=((struct list_item$1tuple2$2char$phsType$ph$ph*)come_null_checker(litem_35, "/usr/local/include/neo-c.h", 1062))->item,
        ((struct list_item$1tuple2$2char$phsType$ph$ph*)come_null_checker(litem_35, "/usr/local/include/neo-c.h", 1062))->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __dec_obj53,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((struct list_item$1tuple2$2char$phsType$ph$ph*)come_null_checker(((struct list$1tuple2$2char$phsType$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1064))->tail, "/usr/local/include/neo-c.h", 1064))->next=litem_35;
        ((struct list$1tuple2$2char$phsType$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1065))->tail=litem_35;
    }
    ((struct list$1tuple2$2char$phsType$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1068))->len++;
    __result_obj__0 = self;
    come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct tuple2$2char$phsType$ph* tuple2$2char$phsType$ph_clone(struct tuple2$2char$phsType$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2char$phsType$ph_clone"; neo_current_frame = &fr;
    struct tuple2$2char$phsType$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct tuple2$2char$phsType$ph* result;
    char*  __dec_obj54  ;
    struct sType*  __dec_obj55  ;
    if(self==(void*)0) {
        __result_obj__0 = (struct tuple2$2char$phsType$ph*)come_increment_ref_count((void*)0);
        neo_current_frame = fr.prev;
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    result=(struct tuple2$2char$phsType$ph*)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), (void*)0, 5, "struct tuple2$2char$phsType$ph*"));
    if(self!=((void*)0)&&((struct tuple2$2char$phsType$ph*)come_null_checker(self, "tuple2$2char$phsType$ph_clone", 6))->v1!=((void*)0)) {
        __dec_obj54=((struct tuple2$2char$phsType$ph*)come_null_checker(result, "tuple2$2char$phsType$ph_clone", 6))->v1,
        ((struct tuple2$2char$phsType$ph*)come_null_checker(result, "tuple2$2char$phsType$ph_clone", 6))->v1=(char* )come_increment_ref_count((char* )come_memdup(((struct tuple2$2char$phsType$ph*)come_null_checker(self, "tuple2$2char$phsType$ph_clone", 6))->v1, "tuple2$2char$phsType$ph_clone", 6, "char* "));
        __dec_obj54 = come_decrement_ref_count(__dec_obj54, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)&&((struct tuple2$2char$phsType$ph*)come_null_checker(self, "tuple2$2char$phsType$ph_clone", 7))->v2!=((void*)0)) {
        __dec_obj55=((struct tuple2$2char$phsType$ph*)come_null_checker(result, "tuple2$2char$phsType$ph_clone", 7))->v2,
        ((struct tuple2$2char$phsType$ph*)come_null_checker(result, "tuple2$2char$phsType$ph_clone", 7))->v2=(struct sType* )come_increment_ref_count(sType_clone(((struct tuple2$2char$phsType$ph*)come_null_checker(self, "tuple2$2char$phsType$ph_clone", 7))->v2));
        come_call_finalizer(sType_finalize, __dec_obj55,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result_obj__0 = (struct tuple2$2char$phsType$ph*)come_increment_ref_count(result);
    come_call_finalizer(tuple2$2char$phsType$ph_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static void tuple2$2char$phsType$ph_finalize(struct tuple2$2char$phsType$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2char$phsType$ph_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct tuple2$2char$phsType$ph*)come_null_checker(self, "tuple2$2char$phsType$ph_finalize", 2))->v1!=((void*)0)) {
        (((struct tuple2$2char$phsType$ph*)come_null_checker(self, "tuple2$2char$phsType$ph_finalize", 2))->v1 = come_decrement_ref_count(((struct tuple2$2char$phsType$ph*)come_null_checker(self, "tuple2$2char$phsType$ph_finalize", 2))->v1, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct tuple2$2char$phsType$ph*)come_null_checker(self, "tuple2$2char$phsType$ph_finalize", 3))->v2!=((void*)0)) {
        come_call_finalizer(sType_finalize, ((struct tuple2$2char$phsType$ph*)come_null_checker(self, "tuple2$2char$phsType$ph_finalize", 3))->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

static void list$1tuple2$2char$phsType$ph$ph_finalize(struct list$1tuple2$2char$phsType$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsType$ph$ph_finalize"; neo_current_frame = &fr;
    struct list_item$1tuple2$2char$phsType$ph$ph* it;
    struct list_item$1tuple2$2char$phsType$ph$ph* prev_it;
    if(self==((void*)0)) {
        neo_current_frame = fr.prev;
        return;
    }
    it=((struct list$1tuple2$2char$phsType$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1006))->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=((struct list_item$1tuple2$2char$phsType$ph$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1009))->next;
        come_call_finalizer(list_item$1tuple2$2char$phsType$ph$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

static void sClassNode_finalize(struct sClassNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sClassNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct sClassNode*)come_null_checker(self, "sClassNode_finalize", 2))->sname!=((void*)0)) {
        (((struct sClassNode*)come_null_checker(self, "sClassNode_finalize", 2))->sname = come_decrement_ref_count(((struct sClassNode*)come_null_checker(self, "sClassNode_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct sClassNode*)come_null_checker(self, "sClassNode_finalize", 3))->mName!=((void*)0)) {
        (((struct sClassNode*)come_null_checker(self, "sClassNode_finalize", 3))->mName = come_decrement_ref_count(((struct sClassNode*)come_null_checker(self, "sClassNode_finalize", 3))->mName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct sClassNode*)come_null_checker(self, "sClassNode_finalize", 4))->mClass!=((void*)0)) {
        come_call_finalizer(sClass_finalize, ((struct sClassNode*)come_null_checker(self, "sClassNode_finalize", 4))->mClass, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sClassNode*)come_null_checker(self, "sClassNode_finalize", 5))->mMethods!=((void*)0)) {
        come_call_finalizer(list$1sNode$ph$p_finalize, ((struct sClassNode*)come_null_checker(self, "sClassNode_finalize", 5))->mMethods, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

static struct sNode* list$1sNode$ph_begin(struct list$1sNode$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_begin"; neo_current_frame = &fr;
    struct sNode* result;
    struct sNode* __result_obj__0;
    struct sNode* result_36;
    if(self==((void*)0)) {
        memset(&result,0,sizeof(struct sNode*));
        __result_obj__0 = result;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    ((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1193))->it=((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1193))->head;
    if(((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1195))->it) {
        __result_obj__0 = ((struct list_item$1sNode$ph*)come_null_checker(((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1196))->it, "/usr/local/include/neo-c.h", 1196))->item;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    memset(&result_36,0,sizeof(struct sNode*));
    __result_obj__0 = result_36;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static _Bool list$1sNode$ph_end(struct list$1sNode$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_end"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return self==((void*)0)||((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1225))->it==((void*)0);
    neo_current_frame = fr.prev;
}

static struct sNode* list$1sNode$ph_next(struct list$1sNode$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_next"; neo_current_frame = &fr;
    struct sNode* result;
    struct sNode* __result_obj__0;
    struct sNode* result_37;
    if(self==((void*)0)||((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1207))->it==((void*)0)) {
        memset(&result,0,sizeof(struct sNode*));
        __result_obj__0 = result;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    ((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1213))->it=((struct list_item$1sNode$ph*)come_null_checker(((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1213))->it, "/usr/local/include/neo-c.h", 1213))->next;
    if(((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1215))->it) {
        __result_obj__0 = ((struct list_item$1sNode$ph*)come_null_checker(((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1216))->it, "/usr/local/include/neo-c.h", 1216))->item;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    memset(&result_37,0,sizeof(struct sNode*));
    __result_obj__0 = result_37;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sNode* parse_struct(char*  type_name  , char*  struct_attribute  , struct sInfo*  info  , _Bool anonymous)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "parse_struct"; neo_current_frame = &fr;
    struct sClass*  klass  ;
    void* __right_value0 = (void*)0;
    _Bool _conditional_value_X0;
    void* __right_value1 = (void*)0;
    struct sClass*  klass_  ;
    void* __right_value2 = (void*)0;
    struct sType*  type  ;
    char*  __dec_obj62  ;
    struct sType*  override_  ;
    struct sClass*  parent_class  ;
    char*  parent_class_name  ;
    char*  struct_attribute_mid  ;
    char*  __dec_obj63  ;
    char*  __dec_obj64  ;
    _Bool multiple_declare;
    char* p;
    int sline;
    struct tuple3$3sType$phchar$ph_Bool$* multiple_assign_var4
;    struct sType*  type_38  =0;
    char*  name  =0;
    _Bool err=0;
    struct tuple3$3sType$phchar$ph_Bool$* multiple_assign_var5
;    struct sType*  base_type  =0;
    char*  name_39  =0;
    _Bool err_40=0;
    struct tuple2$2sType$phchar$ph* multiple_assign_var6
;    struct sType*  type2  =0;
    char*  name2  =0;
    struct tuple2$2sType$phchar$ph* multiple_assign_var7
;    struct sType*  type2_41  =0;
    char*  name2_42  =0;
    struct tuple3$3sType$phchar$ph_Bool$* multiple_assign_var8
;    struct sType*  type2_43  =0;
    char*  name_44  =0;
    _Bool err_45=0;
    char*  struct_attribute2  ;
    char*  __dec_obj65  ;
    char*  __dec_obj66  ;
    char*  __dec_obj67  ;
    char*  __dec_obj68  ;
    struct sNode* _inf_value2;
    struct sStructNode* _inf_obj_value2;
    void* __right_value3 = (void*)0;
    struct sNode* node;
    _Bool Value;
    struct sNode* __result_obj__0;
    struct sNode* _inf_value3;
    struct sNothingNode* _inf_obj_value3;
    memset(&klass, 0, sizeof(klass));
    ((struct sInfo* )come_null_checker(info, "19struct.nc", 343))->parse_struct_recursive_count++;
    if(({(_conditional_value_X0=(((struct sClass* )(__right_value0=map$2char$phsClass$ph_at(((struct map$2char$phsClass$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "19struct.nc", 346))->classes, "19struct.nc", 346)),type_name,((void*)0),(_Bool)0)))==((void*)0)));    come_call_finalizer(sClass_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
_conditional_value_X0;})) {
        klass_=(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass* )come_increment_ref_count(((struct sClass* )come_null_checker(((struct sClass* )(__right_value0=(struct sClass *)come_calloc(1, sizeof(struct sClass )*(1), (void*)0, 347, "struct sClass* "))), "19struct.nc", 347))),type_name,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,(_Bool)0,(_Bool)0,info));
        come_call_finalizer(sClass_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        map$2char$phsClass$ph_insert(((struct map$2char$phsClass$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "19struct.nc", 348))->classes, "19struct.nc", 348)),(char* )come_increment_ref_count(__builtin_string(type_name)),(struct sClass* )come_increment_ref_count(klass_),(_Bool)0);
        klass=((struct sClass* )(__right_value2=map$2char$phsClass$ph_operator_load_element(((struct map$2char$phsClass$ph*)come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "19struct.nc", 350))->classes, "19struct.nc", 350)), "19struct.nc", 350)),((char* )(__right_value1=__builtin_string(type_name))))));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        come_call_finalizer(sClass_finalize, klass_, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        klass=((struct sClass* )(__right_value0=map$2char$phsClass$ph_at(((struct map$2char$phsClass$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "19struct.nc", 353))->classes, "19struct.nc", 353)),type_name,((void*)0),(_Bool)0)));
        list$1tuple2$2char$phsType$ph$ph_reset(((struct list$1tuple2$2char$phsType$ph$ph*)come_null_checker(((struct sClass* )come_null_checker(klass, "19struct.nc", 354))->mFields, "19struct.nc", 354)));
    }
    type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count(((struct sType* )come_null_checker(((struct sType* )(__right_value0=(struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 357, "struct sType* "))), "19struct.nc", 357))),(char* )come_increment_ref_count(type_name),(_Bool)0,info,(_Bool)0,0));
    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    if(((struct sInfo* )come_null_checker(info, "19struct.nc", 358))->parse_struct_recursive_count>=2) {
        ((struct sType* )come_null_checker(type, "19struct.nc", 359))->mInnerStruct=(_Bool)1;
        __dec_obj62=((struct sType* )come_null_checker(type, "19struct.nc", 360))->mInnerStructName,
        ((struct sType* )come_null_checker(type, "19struct.nc", 360))->mInnerStructName=(char* )come_increment_ref_count(__builtin_string(type_name));
        __dec_obj62 = come_decrement_ref_count(__dec_obj62, (void*)0, (void*)0, 0,0, (void*)0);
    }
    override_=((struct sType* )(__right_value0=map$2char$phsType$ph_at(((struct map$2char$phsType$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "19struct.nc", 362))->types, "19struct.nc", 362)),type_name,((void*)0),(_Bool)0)));
    if(override_) {
        if(((struct sType* )come_null_checker(override_, "19struct.nc", 364))->mTypedef) {
            ((struct sType* )come_null_checker(type, "19struct.nc", 365))->mTypedef=(_Bool)1;
        }
    }
    map$2char$phsType$ph_insert(((struct map$2char$phsType$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "19struct.nc", 368))->types, "19struct.nc", 368)),(char* )come_increment_ref_count(type_name),(struct sType* )come_increment_ref_count(sType_clone(type)),(_Bool)0);
    parent_class=((void*)0);
    if(parsecmp("extends",info)) {
        ((char* )(__right_value0=parse_word((_Bool)0,info)));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        parent_class_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info));
        parent_class=((struct sClass* )(__right_value0=map$2char$phsClass$ph_operator_load_element(((struct map$2char$phsClass$ph*)come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "19struct.nc", 376))->classes, "19struct.nc", 376)), "19struct.nc", 376)),parent_class_name)));
        if(parent_class==((void*)0)) {
            err_msg(info,"invalid class name(%s)",parent_class_name);
            exit(1);
        }
        (parent_class_name = come_decrement_ref_count(parent_class_name, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    struct_attribute_mid=(char* )come_increment_ref_count(parse_struct_attribute(info,(_Bool)1));
    if(string_operator_not_equals(((char* )come_null_checker(struct_attribute_mid, "19struct.nc", 385)),"")) {
        if(string_operator_equals(((char* )come_null_checker(struct_attribute, "19struct.nc", 386)),"")) {
            __dec_obj63=struct_attribute,
            struct_attribute=(char* )come_increment_ref_count(struct_attribute_mid);
            __dec_obj63 = come_decrement_ref_count(__dec_obj63, (void*)0, (void*)0, 0,0, (void*)0);
        }
        else {
            __dec_obj64=struct_attribute,
            struct_attribute=(char* )come_increment_ref_count(string_operator_add(((char* )come_null_checker(((char* )(__right_value1=string_operator_add(((char* )come_null_checker(struct_attribute, "19struct.nc", 390))," "))), "19struct.nc", 390)),struct_attribute_mid));
            __dec_obj64 = come_decrement_ref_count(__dec_obj64, (void*)0, (void*)0, 0,0, (void*)0);
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        }
    }
    expected_next_character(123,info);
    while((_Bool)1) {
        skip_spaces_and_lf(info);
        if(*((struct sInfo* )come_null_checker(info, "19struct.nc", 399))->p==125) {
            ((struct sInfo* )come_null_checker(info, "19struct.nc", 400))->p++;
            skip_spaces_and_lf(info);
            break;
        }
        skip_spaces_and_lf(info);
        multiple_declare=(_Bool)0;
        {
            p=((struct sInfo* )come_null_checker(info, "19struct.nc", 409))->p;
            sline=((struct sInfo* )come_null_checker(info, "19struct.nc", 410))->sline;
            multiple_assign_var4=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=backtrace_parse_type((_Bool)1,info)));
            type_38=(struct sType* )come_increment_ref_count(multiple_assign_var4->v1);
            name=(char* )come_increment_ref_count(multiple_assign_var4->v2);
            err=multiple_assign_var4->v3;
            come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            if(err&&*((struct sInfo* )come_null_checker(info, "19struct.nc", 414))->p==44) {
                multiple_declare=(_Bool)1;
            }
            ((struct sInfo* )come_null_checker(info, "19struct.nc", 418))->p=p;
            ((struct sInfo* )come_null_checker(info, "19struct.nc", 419))->sline=sline;
            come_call_finalizer(sType_finalize, type_38, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        if(multiple_declare) {
            multiple_assign_var5=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            base_type=(struct sType* )come_increment_ref_count(multiple_assign_var5->v1);
            name_39=(char* )come_increment_ref_count(multiple_assign_var5->v2);
            err_40=multiple_assign_var5->v3;
            come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            multiple_assign_var6=((struct tuple2$2sType$phchar$ph*)(__right_value0=parse_variable_name_on_multiple_declare(base_type,(_Bool)1,info)));
            type2=(struct sType* )come_increment_ref_count(multiple_assign_var6->v1);
            name2=(char* )come_increment_ref_count(multiple_assign_var6->v2);
            come_call_finalizer(tuple2$2sType$phchar$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            list$1tuple2$2char$phsType$ph$ph_push_back(((struct list$1tuple2$2char$phsType$ph$ph*)come_null_checker(((struct sClass* )come_null_checker(klass, "19struct.nc", 427))->mFields, "19struct.nc", 427)),(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph*)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "19struct.nc", 427, "struct tuple2$2char$phsType$ph")),(char* )come_increment_ref_count(name2),(struct sType* )come_increment_ref_count(type2))));
            while(*((struct sInfo* )come_null_checker(info, "19struct.nc", 429))->p==44) {
                ((struct sInfo* )come_null_checker(info, "19struct.nc", 430))->p++;
                skip_spaces_and_lf(info);
                multiple_assign_var7=((struct tuple2$2sType$phchar$ph*)(__right_value0=parse_variable_name_on_multiple_declare(base_type,(_Bool)0,info)));
                type2_41=(struct sType* )come_increment_ref_count(multiple_assign_var7->v1);
                name2_42=(char* )come_increment_ref_count(multiple_assign_var7->v2);
                come_call_finalizer(tuple2$2sType$phchar$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                list$1tuple2$2char$phsType$ph$ph_push_back(((struct list$1tuple2$2char$phsType$ph$ph*)come_null_checker(((struct sClass* )come_null_checker(klass, "19struct.nc", 435))->mFields, "19struct.nc", 435)),(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph*)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "19struct.nc", 435, "struct tuple2$2char$phsType$ph")),(char* )come_increment_ref_count(name2_42),(struct sType* )come_increment_ref_count(type2_41))));
                come_call_finalizer(sType_finalize, type2_41, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (name2_42 = come_decrement_ref_count(name2_42, (void*)0, (void*)0, 0, 0, (void*)0));
            }
            come_call_finalizer(sType_finalize, base_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (name_39 = come_decrement_ref_count(name_39, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (name2 = come_decrement_ref_count(name2, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        else {
            skip_spaces_and_lf(info);
            multiple_assign_var8=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
            type2_43=(struct sType* )come_increment_ref_count(multiple_assign_var8->v1);
            name_44=(char* )come_increment_ref_count(multiple_assign_var8->v2);
            err_45=multiple_assign_var8->v3;
            come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            if(!err_45) {
                printf("%s %d: parse_type failed\n",((struct sInfo* )come_null_checker(info, "19struct.nc", 442))->sname,((struct sInfo* )come_null_checker(info, "19struct.nc", 442))->sline);
                exit(2);
            }
            list$1tuple2$2char$phsType$ph$ph_push_back(((struct list$1tuple2$2char$phsType$ph$ph*)come_null_checker(((struct sClass* )come_null_checker(klass, "19struct.nc", 446))->mFields, "19struct.nc", 446)),(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph*)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "19struct.nc", 446, "struct tuple2$2char$phsType$ph")),(char* )come_increment_ref_count(name_44),(struct sType* )come_increment_ref_count(type2_43))));
            come_call_finalizer(sType_finalize, type2_43, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (name_44 = come_decrement_ref_count(name_44, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        if(*((struct sInfo* )come_null_checker(info, "19struct.nc", 448))->p==59) {
            ((struct sInfo* )come_null_checker(info, "19struct.nc", 449))->p++;
            skip_spaces_and_lf(info);
        }
        skip_spaces_and_lf(info);
        if(*((struct sInfo* )come_null_checker(info, "19struct.nc", 455))->p==125) {
            ((struct sInfo* )come_null_checker(info, "19struct.nc", 456))->p++;
            skip_spaces_and_lf(info);
            break;
        }
        skip_spaces_and_lf(info);
    }
    struct_attribute2=(char* )come_increment_ref_count(parse_struct_attribute(info,(_Bool)1));
    if(parent_class) {
        __dec_obj65=((struct sClass* )come_null_checker(klass, "19struct.nc", 466))->mParentClassName,
        ((struct sClass* )come_null_checker(klass, "19struct.nc", 466))->mParentClassName=(char* )come_increment_ref_count((char* )come_memdup(((struct sClass* )come_null_checker(parent_class, "19struct.nc", 466))->mName, "19struct.nc", 466, "char* "));
        __dec_obj65 = come_decrement_ref_count(__dec_obj65, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(string_operator_equals(((char* )come_null_checker(struct_attribute, "19struct.nc", 470)),"")&&string_operator_equals(((char* )come_null_checker(struct_attribute2, "19struct.nc", 470)),"")) {
    }
    else if(string_operator_equals(((char* )come_null_checker(struct_attribute, "19struct.nc", 472)),"")) {
        __dec_obj66=((struct sClass* )come_null_checker(klass, "19struct.nc", 473))->mAttribute,
        ((struct sClass* )come_null_checker(klass, "19struct.nc", 473))->mAttribute=(char* )come_increment_ref_count(struct_attribute2);
        __dec_obj66 = come_decrement_ref_count(__dec_obj66, (void*)0, (void*)0, 0,0, (void*)0);
    }
    else if(string_operator_equals(((char* )come_null_checker(struct_attribute2, "19struct.nc", 475)),"")) {
        __dec_obj67=((struct sClass* )come_null_checker(klass, "19struct.nc", 476))->mAttribute,
        ((struct sClass* )come_null_checker(klass, "19struct.nc", 476))->mAttribute=(char* )come_increment_ref_count(struct_attribute);
        __dec_obj67 = come_decrement_ref_count(__dec_obj67, (void*)0, (void*)0, 0,0, (void*)0);
    }
    else {
        __dec_obj68=((struct sClass* )come_null_checker(klass, "19struct.nc", 479))->mAttribute,
        ((struct sClass* )come_null_checker(klass, "19struct.nc", 479))->mAttribute=(char* )come_increment_ref_count(string_operator_add(((char* )come_null_checker(((char* )(__right_value1=string_operator_add(((char* )come_null_checker(struct_attribute, "19struct.nc", 479))," "))), "19struct.nc", 479)),struct_attribute2));
        __dec_obj68 = come_decrement_ref_count(__dec_obj68, (void*)0, (void*)0, 0,0, (void*)0);
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
    }
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 482, "struct sNode");
    _inf_obj_value2=(struct sStructNode*)come_increment_ref_count(((struct sStructNode*)(__right_value2=sStructNode_initialize((struct sStructNode* )come_increment_ref_count(((struct sStructNode* )come_null_checker(((struct sStructNode* )(__right_value0=(struct sStructNode *)come_calloc(1, sizeof(struct sStructNode )*(1), (void*)0, 482, "struct sStructNode* "))), "19struct.nc", 482))),(char* )come_increment_ref_count(__builtin_string(type_name)),klass,info,anonymous))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sStructNode_finalize;
    _inf_value2->clone=(void*)sStructNode_clone;
    _inf_value2->compile=(void*)sStructNode_compile;
    _inf_value2->sline=(void*)sNodeBase_sline;
    _inf_value2->sline_real=(void*)sNodeBase_sline_real;
    _inf_value2->sname=(void*)sNodeBase_sname;
    _inf_value2->terminated=(void*)sStructNode_terminated;
    _inf_value2->kind=(void*)sStructNode_kind;
    node=(struct sNode*)come_increment_ref_count(_inf_value2);
    come_call_finalizer(sStructNode_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer(sStructNode_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    Value=node_compile(node,info);
    if(!Value) {
        ((struct sInfo* )come_null_checker(info, "19struct.nc", 485))->parse_struct_recursive_count--;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((void*)0));
        (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
        (struct_attribute = come_decrement_ref_count(struct_attribute, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (struct_attribute_mid = come_decrement_ref_count(struct_attribute_mid, (void*)0, (void*)0, 0, 0, (void*)0));
        (struct_attribute2 = come_decrement_ref_count(struct_attribute2, (void*)0, (void*)0, 0, 0, (void*)0));
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__0;
    }
    ((struct sInfo* )come_null_checker(info, "19struct.nc", 489))->parse_struct_recursive_count--;
    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 490, "struct sNode");
    _inf_obj_value3=(struct sNothingNode*)come_increment_ref_count(((struct sNothingNode*)(__right_value1=sNothingNode_initialize((struct sNothingNode* )come_increment_ref_count(((struct sNothingNode* )come_null_checker(((struct sNothingNode* )(__right_value0=(struct sNothingNode *)come_calloc(1, sizeof(struct sNothingNode )*(1), (void*)0, 490, "struct sNothingNode* "))), "19struct.nc", 490))),info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sNothingNode_finalize;
    _inf_value3->clone=(void*)sNothingNode_clone;
    _inf_value3->compile=(void*)sNothingNode_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sline_real=(void*)sNodeBase_sline_real;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sNothingNode_terminated;
    _inf_value3->kind=(void*)sNothingNode_kind;
    __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value3)));
    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
    (struct_attribute = come_decrement_ref_count(struct_attribute, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (struct_attribute_mid = come_decrement_ref_count(struct_attribute_mid, (void*)0, (void*)0, 0, 0, (void*)0));
    (struct_attribute2 = come_decrement_ref_count(struct_attribute2, (void*)0, (void*)0, 0, 0, (void*)0));
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(sNothingNode_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer(sNothingNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    return __result_obj__0;
}

static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph_reset(struct list$1tuple2$2char$phsType$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsType$ph$ph_reset"; neo_current_frame = &fr;
    struct list$1tuple2$2char$phsType$ph$ph* __result_obj__0;
    struct list_item$1tuple2$2char$phsType$ph$ph* it;
    struct list_item$1tuple2$2char$phsType$ph$ph* prev_it;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    it=((struct list$1tuple2$2char$phsType$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1356))->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=((struct list_item$1tuple2$2char$phsType$ph$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1359))->next;
        come_call_finalizer(list_item$1tuple2$2char$phsType$ph$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    ((struct list$1tuple2$2char$phsType$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1363))->head=((void*)0);
    ((struct list$1tuple2$2char$phsType$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1364))->tail=((void*)0);
    ((struct list$1tuple2$2char$phsType$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1366))->len=0;
    __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void tuple3$3sType$phchar$ph_Bool$$p_finalize(struct tuple3$3sType$phchar$ph_Bool$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple3$3sType$phchar$ph_Bool$$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct tuple3$3sType$phchar$ph_Bool$*)come_null_checker(self, "tuple3$3sType$phchar$ph_Bool$$p_finalize", 2))->v1!=((void*)0)) {
        come_call_finalizer(sType_finalize, ((struct tuple3$3sType$phchar$ph_Bool$*)come_null_checker(self, "tuple3$3sType$phchar$ph_Bool$$p_finalize", 2))->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct tuple3$3sType$phchar$ph_Bool$*)come_null_checker(self, "tuple3$3sType$phchar$ph_Bool$$p_finalize", 3))->v2!=((void*)0)) {
        (((struct tuple3$3sType$phchar$ph_Bool$*)come_null_checker(self, "tuple3$3sType$phchar$ph_Bool$$p_finalize", 3))->v2 = come_decrement_ref_count(((struct tuple3$3sType$phchar$ph_Bool$*)come_null_checker(self, "tuple3$3sType$phchar$ph_Bool$$p_finalize", 3))->v2, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    neo_current_frame = fr.prev;
}

static void tuple2$2sType$phchar$ph$p_finalize(struct tuple2$2sType$phchar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2sType$phchar$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct tuple2$2sType$phchar$ph*)come_null_checker(self, "tuple2$2sType$phchar$ph$p_finalize", 2))->v1!=((void*)0)) {
        come_call_finalizer(sType_finalize, ((struct tuple2$2sType$phchar$ph*)come_null_checker(self, "tuple2$2sType$phchar$ph$p_finalize", 2))->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct tuple2$2sType$phchar$ph*)come_null_checker(self, "tuple2$2sType$phchar$ph$p_finalize", 3))->v2!=((void*)0)) {
        (((struct tuple2$2sType$phchar$ph*)come_null_checker(self, "tuple2$2sType$phchar$ph$p_finalize", 3))->v2 = come_decrement_ref_count(((struct tuple2$2sType$phchar$ph*)come_null_checker(self, "tuple2$2sType$phchar$ph$p_finalize", 3))->v2, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    neo_current_frame = fr.prev;
}

static struct sStructNode* sStructNode_clone(struct sStructNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sStructNode_clone"; neo_current_frame = &fr;
    struct sStructNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sStructNode*  result  ;
    char*  __dec_obj69  ;
    char*  __dec_obj70  ;
    char*  __dec_obj71  ;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sStructNode* )come_increment_ref_count((struct sStructNode *)come_calloc(1, sizeof(struct sStructNode )*(1), (void*)0, 5, "struct sStructNode* "));
    if(self!=((void*)0)) {
        ((struct sStructNode* )come_null_checker(result, "sStructNode_clone", 6))->sline=((struct sStructNode*)come_null_checker(self, "sStructNode_clone", 6))->sline;
    }
    if(self!=((void*)0)&&((struct sStructNode*)come_null_checker(self, "sStructNode_clone", 7))->sname!=((void*)0)) {
        __dec_obj69=((struct sStructNode* )come_null_checker(result, "sStructNode_clone", 7))->sname,
        ((struct sStructNode* )come_null_checker(result, "sStructNode_clone", 7))->sname=(char* )come_increment_ref_count((char* )come_memdup(((struct sStructNode*)come_null_checker(self, "sStructNode_clone", 7))->sname, "sStructNode_clone", 7, "char* "));
        __dec_obj69 = come_decrement_ref_count(__dec_obj69, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        ((struct sStructNode* )come_null_checker(result, "sStructNode_clone", 8))->sline_real=((struct sStructNode*)come_null_checker(self, "sStructNode_clone", 8))->sline_real;
    }
    if(self!=((void*)0)&&((struct sStructNode*)come_null_checker(self, "sStructNode_clone", 9))->mName!=((void*)0)) {
        __dec_obj70=((struct sStructNode* )come_null_checker(result, "sStructNode_clone", 9))->mName,
        ((struct sStructNode* )come_null_checker(result, "sStructNode_clone", 9))->mName=(char* )come_increment_ref_count((char* )come_memdup(((struct sStructNode*)come_null_checker(self, "sStructNode_clone", 9))->mName, "sStructNode_clone", 9, "char* "));
        __dec_obj70 = come_decrement_ref_count(__dec_obj70, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        ((struct sStructNode* )come_null_checker(result, "sStructNode_clone", 10))->mClass=((struct sStructNode*)come_null_checker(self, "sStructNode_clone", 10))->mClass;
    }
    if(self!=((void*)0)&&((struct sStructNode*)come_null_checker(self, "sStructNode_clone", 11))->pragma!=((void*)0)) {
        __dec_obj71=((struct sStructNode* )come_null_checker(result, "sStructNode_clone", 11))->pragma,
        ((struct sStructNode* )come_null_checker(result, "sStructNode_clone", 11))->pragma=(char* )come_increment_ref_count((char* )come_memdup(((struct sStructNode*)come_null_checker(self, "sStructNode_clone", 11))->pragma, "sStructNode_clone", 11, "char* "));
        __dec_obj71 = come_decrement_ref_count(__dec_obj71, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        ((struct sStructNode* )come_null_checker(result, "sStructNode_clone", 12))->anonymous=((struct sStructNode*)come_null_checker(self, "sStructNode_clone", 12))->anonymous;
    }
    __result_obj__0 = result;
    come_call_finalizer(sStructNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sNode* top_level_v98(char* buf, char* head, int head_sline, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "top_level_v98"; neo_current_frame = &fr;
    char* source_head;
    void* __right_value0 = (void*)0;
    char*  struct_attribute  ;
    char*  type_name  ;
    char*  struct_attribute_after_name  ;
    char*  __dec_obj72  ;
    void* __right_value1 = (void*)0;
    void* __right_value2 = (void*)0;
    char*  __dec_obj73  ;
    struct sClass*  struct_class  ;
    _Bool _conditional_value_X0;
    struct sClass*  __dec_obj74  ;
    struct sClass*  __dec_obj75  ;
    struct sType*  type  ;
    char*  __dec_obj76  ;
    struct sType*  override_  ;
    char* source_tail;
    struct buffer*  header  ;
    struct sClass*  struct_class2  ;
    char*  __dec_obj77  ;
    char*  __dec_obj78  ;
    struct sNode* _inf_value4;
    struct sStructNobodyNode* _inf_obj_value4;
    void* __right_value3 = (void*)0;
    struct sNode* __result_obj__0;
    char*  T  ;
    _Bool _conditional_value_X1;
    struct sClass*  generics_class  ;
    struct tuple3$3sType$phchar$ph_Bool$* multiple_assign_var9
;    struct sType*  type2  =0;
    char*  name  =0;
    _Bool err=0;
    char*  name2  ;
    struct sType*  type3  ;
    _Bool no_comma;
    struct sNode* node;
    struct sNode* __dec_obj81;
    char* source_tail_46;
    struct buffer*  header_47  ;
    struct sNode* _inf_value5;
    struct sNothingNode* _inf_obj_value5;
    struct sClass*  struct_class_48  ;
    _Bool _conditional_value_X2;
    struct sClass*  __dec_obj82  ;
    struct sClass*  __dec_obj83  ;
    struct sType*  type_49  ;
    char*  __dec_obj84  ;
    struct sType*  override__50  ;
    struct sClass*  parent_class  ;
    char*  parent_class_name  ;
    _Bool multiple_declare;
    char* p;
    int sline;
    struct tuple3$3sType$phchar$ph_Bool$* multiple_assign_var10
;    struct sType*  type_51  =0;
    char*  name_52  =0;
    _Bool err_53=0;
    struct tuple3$3sType$phchar$ph_Bool$* multiple_assign_var11
;    struct sType*  base_type  =0;
    char*  name_54  =0;
    _Bool err_55=0;
    struct tuple2$2sType$phchar$ph* multiple_assign_var12
;    struct sType*  type2_56  =0;
    char*  name2_57  =0;
    struct tuple2$2sType$phchar$ph* multiple_assign_var13
;    struct sType*  type2_58  =0;
    char*  name2_59  =0;
    struct tuple3$3sType$phchar$ph_Bool$* multiple_assign_var14
;    struct sType*  type2_60  =0;
    char*  name_61  =0;
    _Bool err_62=0;
    char*  struct_attribute2  ;
    char* source_tail_63;
    struct buffer*  header_64  ;
    char*  __dec_obj85  ;
    char*  __dec_obj86  ;
    char*  __dec_obj87  ;
    char*  __dec_obj88  ;
    struct sNode* _inf_value6;
    struct sStructNode* _inf_obj_value6;
    _Bool _conditional_value_X3;
    _Bool uniq_class;
    char* source_head_65;
    char*  type_name_66  ;
    struct sClass*  parent_class_67  ;
    char*  parent_class_name_68  ;
    struct list$1sClass$p* parent_classes;
    struct sClass*  parent_class2  ;
    struct sClass*  struct_class_71  ;
    char*  __dec_obj89  ;
    struct sClass*  defining_class  ;
    _Bool _conditional_value_X4;
    struct list$1sClass$p* o2_saved;
    struct sClass*  parent  ;
    _Bool _conditional_value_X5;
    _Bool _conditional_value_X6;
    _Bool _conditional_value_X7;
    struct list$1tuple2$2char$phsType$ph$ph* o2_saved_76;
    struct tuple2$2char$phsType$ph* it;
    char* head_77;
    struct list$1sNode$ph* methods;
    _Bool include_;
    _Bool multiple_declare_78;
    char* p_79;
    int sline_80;
    struct tuple3$3sType$phchar$ph_Bool$* multiple_assign_var15
;    struct sType*  type_81  =0;
    char*  name_82  =0;
    _Bool err_83=0;
    _Bool define_function_flag;
    char* p_84;
    int sline_85;
    _Bool invalid_type;
    struct tuple3$3sType$phchar$ph_Bool$* multiple_assign_var16
;    struct sType*  result_type  =0;
    char*  fun_name  =0;
    _Bool err_86=0;
    char*  word  ;
    char*  __dec_obj90  ;
    char*  __dec_obj91  ;
    char*  __dec_obj92  ;
    char* tail;
    int pointer_num;
    struct sType*  __dec_obj93  ;
    struct sNode* method;
    struct sType*  __dec_obj94  ;
    struct tuple3$3sType$phchar$ph_Bool$* multiple_assign_var17
;    struct sType*  base_type_89  =0;
    char*  name_90  =0;
    _Bool err_91=0;
    struct tuple2$2sType$phchar$ph* multiple_assign_var18
;    struct sType*  type2_92  =0;
    char*  name2_93  =0;
    struct tuple2$2sType$phchar$ph* multiple_assign_var19
;    struct sType*  type2_94  =0;
    char*  name2_95  =0;
    struct tuple3$3sType$phchar$ph_Bool$* multiple_assign_var20
;    struct sType*  type2_96  =0;
    char*  name_97  =0;
    _Bool err_98=0;
    struct sNode* _inf_value7;
    struct sClassNode* _inf_obj_value7;
    memset(&struct_class, 0, sizeof(struct_class));
    memset(&struct_class_48, 0, sizeof(struct_class_48));
    if(charp_operator_equals(((char*)come_null_checker(buf, "19struct.nc", 496)),"struct")) {
        ((struct sInfo* )come_null_checker(info, "19struct.nc", 497))->parse_struct_recursive_count++;
        source_head=head;
        struct_attribute=(char* )come_increment_ref_count(parse_struct_attribute(info,(_Bool)1));
        type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info));
        struct_attribute_after_name=(char* )come_increment_ref_count(parse_struct_attribute(info,(_Bool)1));
        if(string_operator_not_equals(((char* )come_null_checker(struct_attribute_after_name, "19struct.nc", 505)),"")) {
            if(string_operator_equals(((char* )come_null_checker(struct_attribute, "19struct.nc", 506)),"")) {
                __dec_obj72=struct_attribute,
                struct_attribute=(char* )come_increment_ref_count(struct_attribute_after_name);
                __dec_obj72 = come_decrement_ref_count(__dec_obj72, (void*)0, (void*)0, 0,0, (void*)0);
            }
            else {
                __dec_obj73=struct_attribute,
                struct_attribute=(char* )come_increment_ref_count(string_operator_add(((char* )come_null_checker(((char* )(__right_value1=string_operator_add(((char* )come_null_checker(struct_attribute, "19struct.nc", 510))," "))), "19struct.nc", 510)),struct_attribute_after_name));
                __dec_obj73 = come_decrement_ref_count(__dec_obj73, (void*)0, (void*)0, 0,0, (void*)0);
                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            }
        }
        if(*((struct sInfo* )come_null_checker(info, "19struct.nc", 514))->p==59) {
            ((struct sInfo* )come_null_checker(info, "19struct.nc", 515))->p++;
            skip_spaces_and_lf(info);
            if(({(_conditional_value_X0=(((struct sClass* )(__right_value0=map$2char$phsClass$ph_at(((struct map$2char$phsClass$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "19struct.nc", 519))->classes, "19struct.nc", 519)),type_name,((void*)0),(_Bool)0)))==((void*)0)));            come_call_finalizer(sClass_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
_conditional_value_X0;})) {
                __dec_obj74=struct_class,
                struct_class=(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass* )come_increment_ref_count(((struct sClass* )come_null_checker(((struct sClass* )(__right_value0=(struct sClass *)come_calloc(1, sizeof(struct sClass )*(1), (void*)0, 520, "struct sClass* "))), "19struct.nc", 520))),type_name,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,(_Bool)0,(_Bool)0,info));
                come_call_finalizer(sClass_finalize, __dec_obj74,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sClass_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                map$2char$phsClass$ph_insert(((struct map$2char$phsClass$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "19struct.nc", 522))->classes, "19struct.nc", 522)),(char* )come_increment_ref_count(type_name),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass* )come_increment_ref_count(((struct sClass* )come_null_checker(((struct sClass* )(__right_value0=(struct sClass *)come_calloc(1, sizeof(struct sClass )*(1), (void*)0, 522, "struct sClass* "))), "19struct.nc", 522))),type_name,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,(_Bool)0,(_Bool)0,info)),(_Bool)0);
                come_call_finalizer(sClass_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            }
            else {
                __dec_obj75=struct_class,
                struct_class=(struct sClass* )come_increment_ref_count(map$2char$phsClass$ph_at(((struct map$2char$phsClass$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "19struct.nc", 525))->classes, "19struct.nc", 525)),type_name,((void*)0),(_Bool)0));
                come_call_finalizer(sClass_finalize, __dec_obj75,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count(((struct sType* )come_null_checker(((struct sType* )(__right_value0=(struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 527, "struct sType* "))), "19struct.nc", 527))),(char* )come_increment_ref_count(type_name),(_Bool)0,info,(_Bool)0,0));
            come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            if(((struct sInfo* )come_null_checker(info, "19struct.nc", 528))->parse_struct_recursive_count>=2) {
                ((struct sType* )come_null_checker(type, "19struct.nc", 529))->mInnerStruct=(_Bool)1;
                __dec_obj76=((struct sType* )come_null_checker(type, "19struct.nc", 530))->mInnerStructName,
                ((struct sType* )come_null_checker(type, "19struct.nc", 530))->mInnerStructName=(char* )come_increment_ref_count(__builtin_string(type_name));
                __dec_obj76 = come_decrement_ref_count(__dec_obj76, (void*)0, (void*)0, 0,0, (void*)0);
            }
            override_=((struct sType* )(__right_value0=map$2char$phsType$ph_at(((struct map$2char$phsType$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "19struct.nc", 532))->types, "19struct.nc", 532)),type_name,((void*)0),(_Bool)0)));
            if(override_) {
                if(((struct sType* )come_null_checker(override_, "19struct.nc", 534))->mTypedef) {
                    ((struct sType* )come_null_checker(type, "19struct.nc", 535))->mTypedef=(_Bool)1;
                }
            }
            map$2char$phsType$ph_insert(((struct map$2char$phsType$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "19struct.nc", 538))->types, "19struct.nc", 538)),(char* )come_increment_ref_count(type_name),(struct sType* )come_increment_ref_count(type),(_Bool)0);
            source_tail=((struct sInfo* )come_null_checker(info, "19struct.nc", 540))->p;
            header=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count(((struct buffer* )come_null_checker(((struct buffer* )(__right_value0=(struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 542, "struct buffer* "))), "19struct.nc", 542)))));
            come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            buffer_append(((struct buffer* )come_null_checker(header, "19struct.nc", 543)),source_head,source_tail-source_head);
            if(string_operator_not_equals(((char* )come_null_checker(struct_attribute, "19struct.nc", 545)),"")) {
                struct_class2=((struct sClass* )(__right_value0=map$2char$phsClass$ph_at(((struct map$2char$phsClass$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "19struct.nc", 546))->classes, "19struct.nc", 546)),type_name,((void*)0),(_Bool)0)));
                if(struct_class2) {
                    if(((struct sClass* )come_null_checker(struct_class2, "19struct.nc", 548))->mAttribute==((void*)0)) {
                        __dec_obj77=((struct sClass* )come_null_checker(struct_class2, "19struct.nc", 549))->mAttribute,
                        ((struct sClass* )come_null_checker(struct_class2, "19struct.nc", 549))->mAttribute=(char* )come_increment_ref_count(struct_attribute);
                        __dec_obj77 = come_decrement_ref_count(__dec_obj77, (void*)0, (void*)0, 0,0, (void*)0);
                    }
                    else {
                        __dec_obj78=((struct sClass* )come_null_checker(struct_class2, "19struct.nc", 552))->mAttribute,
                        ((struct sClass* )come_null_checker(struct_class2, "19struct.nc", 552))->mAttribute=(char* )come_increment_ref_count(string_operator_add(((char* )come_null_checker(((char* )(__right_value1=string_operator_add(((char* )come_null_checker(((struct sClass* )come_null_checker(struct_class2, "19struct.nc", 552))->mAttribute, "19struct.nc", 552))," "))), "19struct.nc", 552)),struct_attribute));
                        __dec_obj78 = come_decrement_ref_count(__dec_obj78, (void*)0, (void*)0, 0,0, (void*)0);
                        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
                    }
                }
            }
            ((struct sInfo* )come_null_checker(info, "19struct.nc", 557))->parse_struct_recursive_count--;
            _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 558, "struct sNode");
            _inf_obj_value4=(struct sStructNobodyNode*)come_increment_ref_count(((struct sStructNobodyNode*)(__right_value2=sStructNobodyNode_initialize((struct sStructNobodyNode* )come_increment_ref_count(((struct sStructNobodyNode* )come_null_checker(((struct sStructNobodyNode* )(__right_value0=(struct sStructNobodyNode *)come_calloc(1, sizeof(struct sStructNobodyNode )*(1), (void*)0, 558, "struct sStructNobodyNode* "))), "19struct.nc", 558))),(char* )come_increment_ref_count(__builtin_string(type_name)),info))));
            _inf_value4->_protocol_obj=_inf_obj_value4;
            _inf_value4->finalize=(void*)sStructNobodyNode_finalize;
            _inf_value4->clone=(void*)sStructNobodyNode_clone;
            _inf_value4->compile=(void*)sStructNobodyNode_compile;
            _inf_value4->sline=(void*)sNodeBase_sline;
            _inf_value4->sline_real=(void*)sNodeBase_sline_real;
            _inf_value4->sname=(void*)sNodeBase_sname;
            _inf_value4->terminated=(void*)sStructNobodyNode_terminated;
            _inf_value4->kind=(void*)sStructNobodyNode_kind;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value3=_inf_value4)));
            come_call_finalizer(sClass_finalize, struct_class, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(buffer_finalize, header, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (struct_attribute = come_decrement_ref_count(struct_attribute, (void*)0, (void*)0, 0, 0, (void*)0));
            (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
            (struct_attribute_after_name = come_decrement_ref_count(struct_attribute_after_name, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sStructNobodyNode_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer(sStructNobodyNode_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((__right_value3) ? __right_value3 = come_decrement_ref_count(__right_value3, ((struct sNode*)__right_value3)->finalize, ((struct sNode*)__right_value3)->_protocol_obj, 1, 0,(void*)0):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__0;
            come_call_finalizer(sClass_finalize, struct_class, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(buffer_finalize, header, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(*((struct sInfo* )come_null_checker(info, "19struct.nc", 560))->p==60) {
            list$1char$ph_reset(((struct list$1char$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "19struct.nc", 561))->generics_type_names, "19struct.nc", 561)));
            ((struct sInfo* )come_null_checker(info, "19struct.nc", 563))->p++;
            skip_spaces_and_lf(info);
            while((_Bool)1) {
                T=(char* )come_increment_ref_count(parse_word((_Bool)0,info));
                list$1char$ph_push_back(((struct list$1char$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "19struct.nc", 568))->generics_type_names, "19struct.nc", 568)),(char* )come_increment_ref_count((char* )come_memdup(T, "19struct.nc", 568, "char* ")));
                if(*((struct sInfo* )come_null_checker(info, "19struct.nc", 570))->p==62) {
                    ((struct sInfo* )come_null_checker(info, "19struct.nc", 571))->p++;
                    skip_spaces_and_lf(info);
                    (T = come_decrement_ref_count(T, (void*)0, (void*)0, 0, 0, (void*)0));
                    break;
                }
                else if(*((struct sInfo* )come_null_checker(info, "19struct.nc", 575))->p==44) {
                    ((struct sInfo* )come_null_checker(info, "19struct.nc", 576))->p++;
                    skip_spaces_and_lf(info);
                }
                else {
                    err_msg(info,"invalid generics struct definition");
                    exit(2);
                }
                (T = come_decrement_ref_count(T, (void*)0, (void*)0, 0, 0, (void*)0));
            }
            if(({(_conditional_value_X1=(((struct sClass* )(__right_value1=map$2char$phsClass$ph_at(((struct map$2char$phsClass$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "19struct.nc", 585))->generics_classes, "19struct.nc", 585)),((char* )(__right_value0=__builtin_string(type_name))),((void*)0),(_Bool)0)))!=((void*)0)));            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            come_call_finalizer(sClass_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
_conditional_value_X1;})) {
                err_msg(info,"redefined generics struct(%s)",type_name);
                exit(2);
            }
            generics_class=(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass* )come_increment_ref_count(((struct sClass* )come_null_checker(((struct sClass* )(__right_value0=(struct sClass *)come_calloc(1, sizeof(struct sClass )*(1), (void*)0, 590, "struct sClass* "))), "19struct.nc", 590))),type_name,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,(_Bool)0,(_Bool)0,info));
            come_call_finalizer(sClass_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            map$2char$phsClass$ph_insert(((struct map$2char$phsClass$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "19struct.nc", 592))->generics_classes, "19struct.nc", 592)),(char* )come_increment_ref_count(__builtin_string(type_name)),(struct sClass* )come_increment_ref_count(generics_class),(_Bool)0);
            expected_next_character(123,info);
            while((_Bool)1) {
                skip_spaces_and_lf(info);
                if(*((struct sInfo* )come_null_checker(info, "19struct.nc", 599))->p==125) {
                    ((struct sInfo* )come_null_checker(info, "19struct.nc", 600))->p++;
                    skip_spaces_and_lf(info);
                    break;
                }
                skip_spaces_and_lf(info);
                multiple_assign_var9=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
                type2=(struct sType* )come_increment_ref_count(multiple_assign_var9->v1);
                name=(char* )come_increment_ref_count(multiple_assign_var9->v2);
                err=multiple_assign_var9->v3;
                come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                if(!err) {
                    printf("%s %d: parse_type failed\n",((struct sInfo* )come_null_checker(info, "19struct.nc", 610))->sname,((struct sInfo* )come_null_checker(info, "19struct.nc", 610))->sline);
                    exit(2);
                }
                if(*((struct sInfo* )come_null_checker(info, "19struct.nc", 614))->p==44) {
                    list$1tuple2$2char$phsType$ph$ph_push_back(((struct list$1tuple2$2char$phsType$ph$ph*)come_null_checker(((struct sClass* )come_null_checker(generics_class, "19struct.nc", 615))->mFields, "19struct.nc", 615)),(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph*)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "19struct.nc", 615, "struct tuple2$2char$phsType$ph")),(char* )come_increment_ref_count(name),(struct sType* )come_increment_ref_count(type2))));
                    while(*((struct sInfo* )come_null_checker(info, "19struct.nc", 617))->p==44) {
                        ((struct sInfo* )come_null_checker(info, "19struct.nc", 618))->p++;
                        skip_spaces_and_lf(info);
                        name2=(char* )come_increment_ref_count(parse_word((_Bool)0,info));
                        type3=(struct sType* )come_increment_ref_count(sType_clone(type2));
                        if(*((struct sInfo* )come_null_checker(info, "19struct.nc", 625))->p==58) {
                            ((struct sInfo* )come_null_checker(info, "19struct.nc", 626))->p++;
                            skip_spaces_and_lf(info);
                            no_comma=((struct sInfo* )come_null_checker(info, "19struct.nc", 629))->no_comma;
                            ((struct sInfo* )come_null_checker(info, "19struct.nc", 630))->no_comma=(_Bool)1;
                            node=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0));
                            ((struct sInfo* )come_null_checker(info, "19struct.nc", 632))->no_comma=no_comma;
                            __dec_obj81=((struct sType* )come_null_checker(type3, "19struct.nc", 634))->mSizeNum,
                            ((struct sType* )come_null_checker(type3, "19struct.nc", 634))->mSizeNum=(struct sNode*)come_increment_ref_count(node);
                            (__dec_obj81 ? __dec_obj81 = come_decrement_ref_count(__dec_obj81, ((struct sNode*)__dec_obj81)->finalize, ((struct sNode*)__dec_obj81)->_protocol_obj, 0,0, (void*)0) :0);
                            ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                        }
                        list$1tuple2$2char$phsType$ph$ph_push_back(((struct list$1tuple2$2char$phsType$ph$ph*)come_null_checker(((struct sClass* )come_null_checker(generics_class, "19struct.nc", 637))->mFields, "19struct.nc", 637)),(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph*)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "19struct.nc", 637, "struct tuple2$2char$phsType$ph")),(char* )come_increment_ref_count(name2),(struct sType* )come_increment_ref_count(type3))));
                        (name2 = come_decrement_ref_count(name2, (void*)0, (void*)0, 0, 0, (void*)0));
                        come_call_finalizer(sType_finalize, type3, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
                else {
                    list$1tuple2$2char$phsType$ph$ph_push_back(((struct list$1tuple2$2char$phsType$ph$ph*)come_null_checker(((struct sClass* )come_null_checker(generics_class, "19struct.nc", 641))->mFields, "19struct.nc", 641)),(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph*)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "19struct.nc", 641, "struct tuple2$2char$phsType$ph")),(char* )come_increment_ref_count(name),(struct sType* )come_increment_ref_count(type2))));
                }
                if(*((struct sInfo* )come_null_checker(info, "19struct.nc", 644))->p==59) {
                    ((struct sInfo* )come_null_checker(info, "19struct.nc", 645))->p++;
                    skip_spaces_and_lf(info);
                }
                skip_spaces_and_lf(info);
                if(*((struct sInfo* )come_null_checker(info, "19struct.nc", 651))->p==125) {
                    ((struct sInfo* )come_null_checker(info, "19struct.nc", 652))->p++;
                    skip_spaces_and_lf(info);
                    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
                    break;
                }
                skip_spaces_and_lf(info);
                come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
            }
            skip_spaces_and_lf(info);
            list$1char$ph_reset(((struct list$1char$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "19struct.nc", 661))->generics_type_names, "19struct.nc", 661)));
            source_tail_46=((struct sInfo* )come_null_checker(info, "19struct.nc", 663))->p;
            header_47=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count(((struct buffer* )come_null_checker(((struct buffer* )(__right_value0=(struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 665, "struct buffer* "))), "19struct.nc", 665)))));
            come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            buffer_append_str(((struct buffer* )come_null_checker(header_47, "19struct.nc", 666)),"struct ");
            buffer_append(((struct buffer* )come_null_checker(header_47, "19struct.nc", 667)),source_head,source_tail_46-source_head);
            ((struct sInfo* )come_null_checker(info, "19struct.nc", 669))->parse_struct_recursive_count--;
            _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 670, "struct sNode");
            _inf_obj_value5=(struct sNothingNode*)come_increment_ref_count(((struct sNothingNode*)(__right_value1=sNothingNode_initialize((struct sNothingNode* )come_increment_ref_count(((struct sNothingNode* )come_null_checker(((struct sNothingNode* )(__right_value0=(struct sNothingNode *)come_calloc(1, sizeof(struct sNothingNode )*(1), (void*)0, 670, "struct sNothingNode* "))), "19struct.nc", 670))),info))));
            _inf_value5->_protocol_obj=_inf_obj_value5;
            _inf_value5->finalize=(void*)sNothingNode_finalize;
            _inf_value5->clone=(void*)sNothingNode_clone;
            _inf_value5->compile=(void*)sNothingNode_compile;
            _inf_value5->sline=(void*)sNodeBase_sline;
            _inf_value5->sline_real=(void*)sNodeBase_sline_real;
            _inf_value5->sname=(void*)sNodeBase_sname;
            _inf_value5->terminated=(void*)sNothingNode_terminated;
            _inf_value5->kind=(void*)sNothingNode_kind;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value5)));
            come_call_finalizer(sClass_finalize, generics_class, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(buffer_finalize, header_47, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (struct_attribute = come_decrement_ref_count(struct_attribute, (void*)0, (void*)0, 0, 0, (void*)0));
            (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
            (struct_attribute_after_name = come_decrement_ref_count(struct_attribute_after_name, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sNothingNode_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer(sNothingNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__0;
            come_call_finalizer(sClass_finalize, generics_class, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(buffer_finalize, header_47, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            if(({(_conditional_value_X2=(((struct sClass* )(__right_value0=map$2char$phsClass$ph_at(((struct map$2char$phsClass$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "19struct.nc", 674))->classes, "19struct.nc", 674)),type_name,((void*)0),(_Bool)0)))==((void*)0)));            come_call_finalizer(sClass_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
_conditional_value_X2;})) {
                __dec_obj82=struct_class_48,
                struct_class_48=(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass* )come_increment_ref_count(((struct sClass* )come_null_checker(((struct sClass* )(__right_value0=(struct sClass *)come_calloc(1, sizeof(struct sClass )*(1), (void*)0, 675, "struct sClass* "))), "19struct.nc", 675))),type_name,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,(_Bool)0,(_Bool)0,info));
                come_call_finalizer(sClass_finalize, __dec_obj82,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sClass_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                map$2char$phsClass$ph_insert(((struct map$2char$phsClass$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "19struct.nc", 676))->classes, "19struct.nc", 676)),(char* )come_increment_ref_count(__builtin_string(type_name)),(struct sClass* )come_increment_ref_count(struct_class_48),(_Bool)0);
            }
            else {
                __dec_obj83=struct_class_48,
                struct_class_48=(struct sClass* )come_increment_ref_count(map$2char$phsClass$ph_at(((struct map$2char$phsClass$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "19struct.nc", 679))->classes, "19struct.nc", 679)),type_name,((void*)0),(_Bool)0));
                come_call_finalizer(sClass_finalize, __dec_obj83,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                list$1tuple2$2char$phsType$ph$ph_reset(((struct list$1tuple2$2char$phsType$ph$ph*)come_null_checker(((struct sClass* )come_null_checker(struct_class_48, "19struct.nc", 680))->mFields, "19struct.nc", 680)));
            }
            type_49=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count(((struct sType* )come_null_checker(((struct sType* )(__right_value0=(struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 683, "struct sType* "))), "19struct.nc", 683))),(char* )come_increment_ref_count(type_name),(_Bool)0,info,(_Bool)0,0));
            come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            if(((struct sInfo* )come_null_checker(info, "19struct.nc", 684))->parse_struct_recursive_count>=2) {
                ((struct sType* )come_null_checker(type_49, "19struct.nc", 685))->mInnerStruct=(_Bool)1;
                __dec_obj84=((struct sType* )come_null_checker(type_49, "19struct.nc", 686))->mInnerStructName,
                ((struct sType* )come_null_checker(type_49, "19struct.nc", 686))->mInnerStructName=(char* )come_increment_ref_count(__builtin_string(type_name));
                __dec_obj84 = come_decrement_ref_count(__dec_obj84, (void*)0, (void*)0, 0,0, (void*)0);
            }
            override__50=((struct sType* )(__right_value0=map$2char$phsType$ph_at(((struct map$2char$phsType$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "19struct.nc", 688))->types, "19struct.nc", 688)),type_name,((void*)0),(_Bool)0)));
            if(override__50) {
                if(((struct sType* )come_null_checker(override__50, "19struct.nc", 690))->mTypedef) {
                    ((struct sType* )come_null_checker(type_49, "19struct.nc", 691))->mTypedef=(_Bool)1;
                }
            }
            map$2char$phsType$ph_insert(((struct map$2char$phsType$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "19struct.nc", 694))->types, "19struct.nc", 694)),(char* )come_increment_ref_count(type_name),(struct sType* )come_increment_ref_count(type_49),(_Bool)0);
            parent_class=((void*)0);
            if(parsecmp("extends",info)) {
                ((char* )(__right_value0=parse_word((_Bool)0,info)));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                parent_class_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info));
                parent_class=((struct sClass* )(__right_value0=map$2char$phsClass$ph_operator_load_element(((struct map$2char$phsClass$ph*)come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "19struct.nc", 702))->classes, "19struct.nc", 702)), "19struct.nc", 702)),parent_class_name)));
                if(parent_class==((void*)0)) {
                    err_msg(info,"invalid class name(%s)",parent_class_name);
                    exit(1);
                }
                (parent_class_name = come_decrement_ref_count(parent_class_name, (void*)0, (void*)0, 0, 0, (void*)0));
            }
            expected_next_character(123,info);
            while((_Bool)1) {
                skip_spaces_and_lf(info);
                if(*((struct sInfo* )come_null_checker(info, "19struct.nc", 714))->p==125) {
                    ((struct sInfo* )come_null_checker(info, "19struct.nc", 715))->p++;
                    skip_spaces_and_lf(info);
                    break;
                }
                skip_spaces_and_lf(info);
                multiple_declare=(_Bool)0;
                {
                    p=((struct sInfo* )come_null_checker(info, "19struct.nc", 723))->p;
                    sline=((struct sInfo* )come_null_checker(info, "19struct.nc", 724))->sline;
                    multiple_assign_var10=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=backtrace_parse_type((_Bool)1,info)));
                    type_51=(struct sType* )come_increment_ref_count(multiple_assign_var10->v1);
                    name_52=(char* )come_increment_ref_count(multiple_assign_var10->v2);
                    err_53=multiple_assign_var10->v3;
                    come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    if(err_53&&*((struct sInfo* )come_null_checker(info, "19struct.nc", 728))->p==44) {
                        multiple_declare=(_Bool)1;
                    }
                    ((struct sInfo* )come_null_checker(info, "19struct.nc", 732))->p=p;
                    ((struct sInfo* )come_null_checker(info, "19struct.nc", 733))->sline=sline;
                    come_call_finalizer(sType_finalize, type_51, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    (name_52 = come_decrement_ref_count(name_52, (void*)0, (void*)0, 0, 0, (void*)0));
                }
                if(multiple_declare) {
                    multiple_assign_var11=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                    base_type=(struct sType* )come_increment_ref_count(multiple_assign_var11->v1);
                    name_54=(char* )come_increment_ref_count(multiple_assign_var11->v2);
                    err_55=multiple_assign_var11->v3;
                    come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    multiple_assign_var12=((struct tuple2$2sType$phchar$ph*)(__right_value0=parse_variable_name_on_multiple_declare(base_type,(_Bool)1,info)));
                    type2_56=(struct sType* )come_increment_ref_count(multiple_assign_var12->v1);
                    name2_57=(char* )come_increment_ref_count(multiple_assign_var12->v2);
                    come_call_finalizer(tuple2$2sType$phchar$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    list$1tuple2$2char$phsType$ph$ph_push_back(((struct list$1tuple2$2char$phsType$ph$ph*)come_null_checker(((struct sClass* )come_null_checker(struct_class_48, "19struct.nc", 741))->mFields, "19struct.nc", 741)),(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph*)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "19struct.nc", 741, "struct tuple2$2char$phsType$ph")),(char* )come_increment_ref_count(name2_57),(struct sType* )come_increment_ref_count(type2_56))));
                    while(*((struct sInfo* )come_null_checker(info, "19struct.nc", 743))->p==44) {
                        ((struct sInfo* )come_null_checker(info, "19struct.nc", 744))->p++;
                        skip_spaces_and_lf(info);
                        multiple_assign_var13=((struct tuple2$2sType$phchar$ph*)(__right_value0=parse_variable_name_on_multiple_declare(base_type,(_Bool)0,info)));
                        type2_58=(struct sType* )come_increment_ref_count(multiple_assign_var13->v1);
                        name2_59=(char* )come_increment_ref_count(multiple_assign_var13->v2);
                        come_call_finalizer(tuple2$2sType$phchar$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                        list$1tuple2$2char$phsType$ph$ph_push_back(((struct list$1tuple2$2char$phsType$ph$ph*)come_null_checker(((struct sClass* )come_null_checker(struct_class_48, "19struct.nc", 749))->mFields, "19struct.nc", 749)),(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph*)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "19struct.nc", 749, "struct tuple2$2char$phsType$ph")),(char* )come_increment_ref_count(name2_59),(struct sType* )come_increment_ref_count(type2_58))));
                        come_call_finalizer(sType_finalize, type2_58, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        (name2_59 = come_decrement_ref_count(name2_59, (void*)0, (void*)0, 0, 0, (void*)0));
                    }
                    come_call_finalizer(sType_finalize, base_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    (name_54 = come_decrement_ref_count(name_54, (void*)0, (void*)0, 0, 0, (void*)0));
                    come_call_finalizer(sType_finalize, type2_56, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    (name2_57 = come_decrement_ref_count(name2_57, (void*)0, (void*)0, 0, 0, (void*)0));
                }
                else {
                    multiple_assign_var14=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
                    type2_60=(struct sType* )come_increment_ref_count(multiple_assign_var14->v1);
                    name_61=(char* )come_increment_ref_count(multiple_assign_var14->v2);
                    err_62=multiple_assign_var14->v3;
                    come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    if(!err_62) {
                        printf("%s %d: parse_type failed\n",((struct sInfo* )come_null_checker(info, "19struct.nc", 755))->sname,((struct sInfo* )come_null_checker(info, "19struct.nc", 755))->sline);
                        exit(2);
                    }
                    list$1tuple2$2char$phsType$ph$ph_push_back(((struct list$1tuple2$2char$phsType$ph$ph*)come_null_checker(((struct sClass* )come_null_checker(struct_class_48, "19struct.nc", 759))->mFields, "19struct.nc", 759)),(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph*)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "19struct.nc", 759, "struct tuple2$2char$phsType$ph")),(char* )come_increment_ref_count(name_61),(struct sType* )come_increment_ref_count(type2_60))));
                    come_call_finalizer(sType_finalize, type2_60, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    (name_61 = come_decrement_ref_count(name_61, (void*)0, (void*)0, 0, 0, (void*)0));
                }
                if(*((struct sInfo* )come_null_checker(info, "19struct.nc", 762))->p==59) {
                    ((struct sInfo* )come_null_checker(info, "19struct.nc", 763))->p++;
                    skip_spaces_and_lf(info);
                }
                skip_spaces_and_lf(info);
                if(*((struct sInfo* )come_null_checker(info, "19struct.nc", 770))->p==125) {
                    ((struct sInfo* )come_null_checker(info, "19struct.nc", 771))->p++;
                    skip_spaces_and_lf(info);
                    break;
                }
                skip_spaces_and_lf(info);
            }
            struct_attribute2=(char* )come_increment_ref_count(parse_struct_attribute(info,(_Bool)1));
            list$1char$ph_reset(((struct list$1char$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "19struct.nc", 780))->generics_type_names, "19struct.nc", 780)));
            source_tail_63=((struct sInfo* )come_null_checker(info, "19struct.nc", 782))->p;
            header_64=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count(((struct buffer* )come_null_checker(((struct buffer* )(__right_value0=(struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 784, "struct buffer* "))), "19struct.nc", 784)))));
            come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            buffer_append(((struct buffer* )come_null_checker(header_64, "19struct.nc", 785)),source_head,source_tail_63-source_head);
            if(string_operator_equals(((char* )come_null_checker(struct_attribute, "19struct.nc", 787)),"")&&string_operator_equals(((char* )come_null_checker(struct_attribute2, "19struct.nc", 787)),"")) {
            }
            else if(string_operator_equals(((char* )come_null_checker(struct_attribute, "19struct.nc", 789)),"")) {
                __dec_obj85=((struct sClass* )come_null_checker(struct_class_48, "19struct.nc", 790))->mAttribute,
                ((struct sClass* )come_null_checker(struct_class_48, "19struct.nc", 790))->mAttribute=(char* )come_increment_ref_count(struct_attribute2);
                __dec_obj85 = come_decrement_ref_count(__dec_obj85, (void*)0, (void*)0, 0,0, (void*)0);
            }
            else if(string_operator_equals(((char* )come_null_checker(struct_attribute2, "19struct.nc", 792)),"")) {
                __dec_obj86=((struct sClass* )come_null_checker(struct_class_48, "19struct.nc", 793))->mAttribute,
                ((struct sClass* )come_null_checker(struct_class_48, "19struct.nc", 793))->mAttribute=(char* )come_increment_ref_count(struct_attribute);
                __dec_obj86 = come_decrement_ref_count(__dec_obj86, (void*)0, (void*)0, 0,0, (void*)0);
            }
            else {
                __dec_obj87=((struct sClass* )come_null_checker(struct_class_48, "19struct.nc", 796))->mAttribute,
                ((struct sClass* )come_null_checker(struct_class_48, "19struct.nc", 796))->mAttribute=(char* )come_increment_ref_count(string_operator_add(((char* )come_null_checker(((char* )(__right_value1=string_operator_add(((char* )come_null_checker(struct_attribute, "19struct.nc", 796))," "))), "19struct.nc", 796)),struct_attribute2));
                __dec_obj87 = come_decrement_ref_count(__dec_obj87, (void*)0, (void*)0, 0,0, (void*)0);
                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            }
            if(parent_class) {
                __dec_obj88=((struct sClass* )come_null_checker(struct_class_48, "19struct.nc", 799))->mParentClassName,
                ((struct sClass* )come_null_checker(struct_class_48, "19struct.nc", 799))->mParentClassName=(char* )come_increment_ref_count((char* )come_memdup(((struct sClass* )come_null_checker(parent_class, "19struct.nc", 799))->mName, "19struct.nc", 799, "char* "));
                __dec_obj88 = come_decrement_ref_count(__dec_obj88, (void*)0, (void*)0, 0,0, (void*)0);
            }
            ((struct sInfo* )come_null_checker(info, "19struct.nc", 802))->parse_struct_recursive_count--;
            _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 803, "struct sNode");
            _inf_obj_value6=(struct sStructNode*)come_increment_ref_count(((struct sStructNode*)(__right_value2=sStructNode_initialize((struct sStructNode* )come_increment_ref_count(((struct sStructNode* )come_null_checker(((struct sStructNode* )(__right_value0=(struct sStructNode *)come_calloc(1, sizeof(struct sStructNode )*(1), (void*)0, 803, "struct sStructNode* "))), "19struct.nc", 803))),(char* )come_increment_ref_count(__builtin_string(type_name)),struct_class_48,info,(_Bool)0))));
            _inf_value6->_protocol_obj=_inf_obj_value6;
            _inf_value6->finalize=(void*)sStructNode_finalize;
            _inf_value6->clone=(void*)sStructNode_clone;
            _inf_value6->compile=(void*)sStructNode_compile;
            _inf_value6->sline=(void*)sNodeBase_sline;
            _inf_value6->sline_real=(void*)sNodeBase_sline_real;
            _inf_value6->sname=(void*)sNodeBase_sname;
            _inf_value6->terminated=(void*)sStructNode_terminated;
            _inf_value6->kind=(void*)sStructNode_kind;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value3=_inf_value6)));
            come_call_finalizer(sClass_finalize, struct_class_48, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, type_49, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (struct_attribute2 = come_decrement_ref_count(struct_attribute2, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(buffer_finalize, header_64, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (struct_attribute = come_decrement_ref_count(struct_attribute, (void*)0, (void*)0, 0, 0, (void*)0));
            (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
            (struct_attribute_after_name = come_decrement_ref_count(struct_attribute_after_name, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sStructNode_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer(sStructNode_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((__right_value3) ? __right_value3 = come_decrement_ref_count(__right_value3, ((struct sNode*)__right_value3)->finalize, ((struct sNode*)__right_value3)->_protocol_obj, 1, 0,(void*)0):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__0;
            come_call_finalizer(sClass_finalize, struct_class_48, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, type_49, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (struct_attribute2 = come_decrement_ref_count(struct_attribute2, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(buffer_finalize, header_64, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        (struct_attribute = come_decrement_ref_count(struct_attribute, (void*)0, (void*)0, 0, 0, (void*)0));
        (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
        (struct_attribute_after_name = come_decrement_ref_count(struct_attribute_after_name, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    else if(({(_conditional_value_X3=(!gComeC&&((charp_operator_equals(((char*)come_null_checker(buf, "19struct.nc", 806)),"uniq")&&string_operator_equals(((char* )come_null_checker(((char* )(__right_value1=charp_substring(((char*)come_null_checker(((struct sInfo* )come_null_checker(info, "19struct.nc", 806))->p, "19struct.nc", 806)),0,strlen("class")))), "19struct.nc", 806)),"class"))||charp_operator_equals(((char*)come_null_checker(buf, "19struct.nc", 807)),"class"))));    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
_conditional_value_X3;})) {
        ((struct sInfo* )come_null_checker(info, "19struct.nc", 809))->parse_struct_recursive_count++;
        uniq_class=(_Bool)0;
        if(charp_operator_equals(((char*)come_null_checker(buf, "19struct.nc", 811)),"uniq")) {
            ((char* )(__right_value0=parse_word((_Bool)0,info)));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            uniq_class=(_Bool)1;
        }
        source_head_65=head;
        type_name_66=(char* )come_increment_ref_count(parse_word((_Bool)0,info));
        parent_class_67=((void*)0);
        if(parsecmp("extends",info)) {
            ((char* )(__right_value0=parse_word((_Bool)0,info)));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            parent_class_name_68=(char* )come_increment_ref_count(parse_word((_Bool)0,info));
            parent_class_67=((struct sClass* )(__right_value0=map$2char$phsClass$ph_operator_load_element(((struct map$2char$phsClass$ph*)come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "19struct.nc", 826))->classes, "19struct.nc", 826)), "19struct.nc", 826)),parent_class_name_68)));
            if(parent_class_67==((void*)0)) {
                err_msg(info,"invalid class name(%s)",parent_class_name_68);
                exit(1);
            }
            (parent_class_name_68 = come_decrement_ref_count(parent_class_name_68, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        parent_classes=(struct list$1sClass$p*)come_increment_ref_count(list$1sClass$p_initialize((struct list$1sClass$p*)come_increment_ref_count(((struct list$1sClass$p*)come_null_checker(((struct list$1sClass$p*)(__right_value0=(struct list$1sClass$p*)come_calloc(1, sizeof(struct list$1sClass$p)*(1), (void*)0, 834, "struct list$1sClass$p*"))), "19struct.nc", 834)))));
        come_call_finalizer(list$1sClass$p$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        parent_class2=parent_class_67;
        while(parent_class2) {
            list$1sClass$p_add(((struct list$1sClass$p*)come_null_checker(parent_classes, "19struct.nc", 838)),parent_class2);
            if(((struct sClass* )come_null_checker(parent_class_67, "19struct.nc", 839))->mParentClassName) {
                parent_class2=((struct sClass* )(__right_value2=map$2char$phsClass$ph_operator_load_element(((struct map$2char$phsClass$ph*)come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "19struct.nc", 840))->classes, "19struct.nc", 840)), "19struct.nc", 840)),((char* )(__right_value1=__builtin_string(((struct sClass* )come_null_checker(parent_class_67, "19struct.nc", 840))->mParentClassName))))));
                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            }
            else {
                parent_class2=((void*)0);
            }
        }
        struct_class_71=(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass* )come_increment_ref_count(((struct sClass* )come_null_checker(((struct sClass* )(__right_value0=(struct sClass *)come_calloc(1, sizeof(struct sClass )*(1), (void*)0, 847, "struct sClass* "))), "19struct.nc", 847))),type_name_66,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,uniq_class,(_Bool)0,info));
        come_call_finalizer(sClass_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        if(parent_class_67) {
            __dec_obj89=((struct sClass* )come_null_checker(struct_class_71, "19struct.nc", 850))->mParentClassName,
            ((struct sClass* )come_null_checker(struct_class_71, "19struct.nc", 850))->mParentClassName=(char* )come_increment_ref_count((char* )come_memdup(((struct sClass* )come_null_checker(parent_class_67, "19struct.nc", 850))->mName, "19struct.nc", 850, "char* "));
            __dec_obj89 = come_decrement_ref_count(__dec_obj89, (void*)0, (void*)0, 0,0, (void*)0);
        }
        defining_class=((struct sInfo* )come_null_checker(info, "19struct.nc", 853))->defining_class;
        ((struct sInfo* )come_null_checker(info, "19struct.nc", 854))->defining_class=struct_class_71;
        if(({(_conditional_value_X4=(((struct sClass* )(__right_value0=map$2char$phsClass$ph_at(((struct map$2char$phsClass$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "19struct.nc", 856))->classes, "19struct.nc", 856)),type_name_66,((void*)0),(_Bool)0)))==((void*)0)));        come_call_finalizer(sClass_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
_conditional_value_X4;})) {
            map$2char$phsClass$ph_insert(((struct map$2char$phsClass$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "19struct.nc", 857))->classes, "19struct.nc", 857)),(char* )come_increment_ref_count(type_name_66),(struct sClass* )come_increment_ref_count(sClass_clone(struct_class_71)),(_Bool)0);
        }
        else {
            ((struct sClass* )come_null_checker(((struct sClass* )(__right_value0=map$2char$phsClass$ph_operator_load_element(((struct map$2char$phsClass$ph*)come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "19struct.nc", 860))->classes, "19struct.nc", 860)), "19struct.nc", 860)),type_name_66))), "19struct.nc", 860))->mUniq=uniq_class;
            come_call_finalizer(sClass_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        }
        for(({(_conditional_value_X5=(o2_saved=(struct list$1sClass$p*)come_increment_ref_count(list$1sClass$p_reverse(((struct list$1sClass$p*)come_null_checker(parent_classes, "19struct.nc", 862)))),parent=list$1sClass$p_begin(((struct list$1sClass$p*)come_null_checker(o2_saved, "19struct.nc", 862)))));_conditional_value_X5;});({(_conditional_value_X6=(!list$1sClass$p_end(((struct list$1sClass$p*)come_null_checker(o2_saved, "19struct.nc", 862)))));_conditional_value_X6;});({(_conditional_value_X7=(parent=list$1sClass$p_next(((struct list$1sClass$p*)come_null_checker(o2_saved, "19struct.nc", 862)))));_conditional_value_X7;})){
            for(o2_saved_76=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct sClass* )come_null_checker(parent, "19struct.nc", 863))->mFields),it=list$1tuple2$2char$phsType$ph$ph_begin(((struct list$1tuple2$2char$phsType$ph$ph*)come_null_checker(o2_saved_76, "19struct.nc", 863)));!list$1tuple2$2char$phsType$ph$ph_end(((struct list$1tuple2$2char$phsType$ph$ph*)come_null_checker(o2_saved_76, "19struct.nc", 863)));it=list$1tuple2$2char$phsType$ph$ph_next(((struct list$1tuple2$2char$phsType$ph$ph*)come_null_checker(o2_saved_76, "19struct.nc", 863)))){
                list$1tuple2$2char$phsType$ph$ph_add(((struct list$1tuple2$2char$phsType$ph$ph*)come_null_checker(((struct sClass* )come_null_checker(struct_class_71, "19struct.nc", 864))->mFields, "19struct.nc", 864)),(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_clone(it)));
            }
            come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, o2_saved_76, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer(list$1sClass$p$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        expected_next_character(123,info);
        head_77=((struct sInfo* )come_null_checker(info, "19struct.nc", 870))->p;
        methods=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count(((struct list$1sNode$ph*)come_null_checker(((struct list$1sNode$ph*)(__right_value0=(struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), (void*)0, 872, "struct list$1sNode$ph*"))), "19struct.nc", 872)))));
        come_call_finalizer(list$1sNode$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        while((_Bool)1) {
            skip_spaces_and_lf(info);
            if(*((struct sInfo* )come_null_checker(info, "19struct.nc", 876))->p==125) {
                ((struct sInfo* )come_null_checker(info, "19struct.nc", 877))->p++;
                skip_spaces_and_lf(info);
                break;
            }
            skip_spaces_and_lf(info);
            include_=parsecmp("include",info);
            multiple_declare_78=(_Bool)0;
            if(include_==(_Bool)0) {
                p_79=((struct sInfo* )come_null_checker(info, "19struct.nc", 888))->p;
                sline_80=((struct sInfo* )come_null_checker(info, "19struct.nc", 889))->sline;
                if((((struct sInfo* )come_null_checker(info, "19struct.nc", 891))->end-((struct sInfo* )come_null_checker(info, "19struct.nc", 891))->p)>=strlen("new(")&&memcmp(((struct sInfo* )come_null_checker(info, "19struct.nc", 891))->p,"new(",4)!=0) {
                    multiple_assign_var15=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=backtrace_parse_type((_Bool)1,info)));
                    type_81=(struct sType* )come_increment_ref_count(multiple_assign_var15->v1);
                    name_82=(char* )come_increment_ref_count(multiple_assign_var15->v2);
                    err_83=multiple_assign_var15->v3;
                    come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    if(err_83&&*((struct sInfo* )come_null_checker(info, "19struct.nc", 894))->p==44) {
                        multiple_declare_78=(_Bool)1;
                    }
                    come_call_finalizer(sType_finalize, type_81, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    (name_82 = come_decrement_ref_count(name_82, (void*)0, (void*)0, 0, 0, (void*)0));
                }
                ((struct sInfo* )come_null_checker(info, "19struct.nc", 899))->p=p_79;
                ((struct sInfo* )come_null_checker(info, "19struct.nc", 900))->sline=sline_80;
            }
            define_function_flag=(_Bool)0;
            if(include_==(_Bool)0) {
                p_84=((struct sInfo* )come_null_checker(info, "19struct.nc", 905))->p;
                sline_85=((struct sInfo* )come_null_checker(info, "19struct.nc", 906))->sline;
                if((((struct sInfo* )come_null_checker(info, "19struct.nc", 908))->end-((struct sInfo* )come_null_checker(info, "19struct.nc", 908))->p)>=strlen("new(")&&memcmp(((struct sInfo* )come_null_checker(info, "19struct.nc", 908))->p,"new(",4)==0) {
                    define_function_flag=(_Bool)1;
                }
                else {
                    invalid_type=(_Bool)0;
                    if(xisalpha(*((struct sInfo* )come_null_checker(info, "19struct.nc", 913))->p)||*((struct sInfo* )come_null_checker(info, "19struct.nc", 913))->p==95) {
                        multiple_assign_var16=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=backtrace_parse_type((_Bool)0,info)));
                        result_type=(struct sType* )come_increment_ref_count(multiple_assign_var16->v1);
                        fun_name=(char* )come_increment_ref_count(multiple_assign_var16->v2);
                        err_86=multiple_assign_var16->v3;
                        come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                        come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
                    }
                    word=((void*)0);
                    if(xisalnum(*((struct sInfo* )come_null_checker(info, "19struct.nc", 918))->p)||*((struct sInfo* )come_null_checker(info, "19struct.nc", 918))->p==95) {
                        while(xisalnum(*((struct sInfo* )come_null_checker(info, "19struct.nc", 919))->p)||*((struct sInfo* )come_null_checker(info, "19struct.nc", 919))->p==95) {
                            __dec_obj90=word,
                            word=(char* )come_increment_ref_count(parse_word((_Bool)0,info));
                            __dec_obj90 = come_decrement_ref_count(__dec_obj90, (void*)0, (void*)0, 0,0, (void*)0);
                        }
                    }
                    else {
                        __dec_obj91=word,
                        word=((void*)0);
                        __dec_obj91 = come_decrement_ref_count(__dec_obj91, (void*)0, (void*)0, 0,0, (void*)0);
                    }
                    if(word) {
                        if(is_type_name(word,info)) {
                            while(*((struct sInfo* )come_null_checker(info, "19struct.nc", 929))->p==42) {
                                ((struct sInfo* )come_null_checker(info, "19struct.nc", 930))->p++;
                                skip_spaces_and_lf(info);
                            }
                            while(*((struct sInfo* )come_null_checker(info, "19struct.nc", 933))->p==37) {
                                ((struct sInfo* )come_null_checker(info, "19struct.nc", 934))->p++;
                                skip_spaces_and_lf(info);
                            }
                            if(*((struct sInfo* )come_null_checker(info, "19struct.nc", 937))->p==91&&*(((struct sInfo* )come_null_checker(info, "19struct.nc", 937))->p+1)==93) {
                                ((struct sInfo* )come_null_checker(info, "19struct.nc", 938))->p+=2;
                                skip_spaces_and_lf(info);
                            }
                            if(*((struct sInfo* )come_null_checker(info, "19struct.nc", 941))->p==58) {
                                ((struct sInfo* )come_null_checker(info, "19struct.nc", 942))->p++;
                                skip_spaces_and_lf(info);
                            }
                            if(*((struct sInfo* )come_null_checker(info, "19struct.nc", 945))->p==58) {
                                ((struct sInfo* )come_null_checker(info, "19struct.nc", 946))->p++;
                                skip_spaces_and_lf(info);
                            }
                            if(xisalnum(*((struct sInfo* )come_null_checker(info, "19struct.nc", 949))->p)||*((struct sInfo* )come_null_checker(info, "19struct.nc", 949))->p==95) {
                                __dec_obj92=word,
                                word=(char* )come_increment_ref_count(parse_word((_Bool)0,info));
                                __dec_obj92 = come_decrement_ref_count(__dec_obj92, (void*)0, (void*)0, 0,0, (void*)0);
                            }
                        }
                        if(strlen(word)>0&&(*((struct sInfo* )come_null_checker(info, "19struct.nc", 955))->p==40||(*((struct sInfo* )come_null_checker(info, "19struct.nc", 955))->p==58&&*(((struct sInfo* )come_null_checker(info, "19struct.nc", 955))->p+1)==58))) {
                            define_function_flag=(_Bool)1;
                        }
                    }
                    (word = come_decrement_ref_count(word, (void*)0, (void*)0, 0, 0, (void*)0));
                }
                ((struct sInfo* )come_null_checker(info, "19struct.nc", 961))->p=p_84;
                ((struct sInfo* )come_null_checker(info, "19struct.nc", 962))->sline=sline_85;
            }
            if(define_function_flag) {
                tail=((struct sInfo* )come_null_checker(info, "19struct.nc", 966))->p;
                pointer_num=1;
                __dec_obj93=((struct sInfo* )come_null_checker(info, "19struct.nc", 970))->class_type,
                ((struct sInfo* )come_null_checker(info, "19struct.nc", 970))->class_type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count(((struct sType* )come_null_checker(((struct sType* )(__right_value0=(struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 970, "struct sType* "))), "19struct.nc", 970))),(char* )come_increment_ref_count(type_name_66),(_Bool)0,info,(_Bool)0,0));
                come_call_finalizer(sType_finalize, __dec_obj93,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                ((struct sType* )come_null_checker(((struct sInfo* )come_null_checker(info, "19struct.nc", 971))->class_type, "19struct.nc", 971))->mPointerNum=pointer_num;
                ((struct sInfo* )come_null_checker(info, "19struct.nc", 973))->in_class=(_Bool)1;
                method=(struct sNode*)come_increment_ref_count(parse_function(info));
                __dec_obj94=((struct sInfo* )come_null_checker(info, "19struct.nc", 977))->class_type,
                ((struct sInfo* )come_null_checker(info, "19struct.nc", 977))->class_type=((void*)0);
                come_call_finalizer(sType_finalize, __dec_obj94,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                ((struct sInfo* )come_null_checker(info, "19struct.nc", 978))->in_class=(_Bool)0;
                list$1sNode$ph_push_back(((struct list$1sNode$ph*)come_null_checker(methods, "19struct.nc", 980)),(struct sNode*)come_increment_ref_count(method));
                ((method) ? method = come_decrement_ref_count(method, ((struct sNode*)method)->finalize, ((struct sNode*)method)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            }
            else if(multiple_declare_78) {
                multiple_assign_var17=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                base_type_89=(struct sType* )come_increment_ref_count(multiple_assign_var17->v1);
                name_90=(char* )come_increment_ref_count(multiple_assign_var17->v2);
                err_91=multiple_assign_var17->v3;
                come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                multiple_assign_var18=((struct tuple2$2sType$phchar$ph*)(__right_value0=parse_variable_name_on_multiple_declare(base_type_89,(_Bool)1,info)));
                type2_92=(struct sType* )come_increment_ref_count(multiple_assign_var18->v1);
                name2_93=(char* )come_increment_ref_count(multiple_assign_var18->v2);
                come_call_finalizer(tuple2$2sType$phchar$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                list$1tuple2$2char$phsType$ph$ph_push_back(((struct list$1tuple2$2char$phsType$ph$ph*)come_null_checker(((struct sClass* )come_null_checker(struct_class_71, "19struct.nc", 987))->mFields, "19struct.nc", 987)),(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph*)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "19struct.nc", 987, "struct tuple2$2char$phsType$ph")),(char* )come_increment_ref_count(name2_93),(struct sType* )come_increment_ref_count(type2_92))));
                while(*((struct sInfo* )come_null_checker(info, "19struct.nc", 989))->p==44) {
                    ((struct sInfo* )come_null_checker(info, "19struct.nc", 990))->p++;
                    skip_spaces_and_lf(info);
                    multiple_assign_var19=((struct tuple2$2sType$phchar$ph*)(__right_value0=parse_variable_name_on_multiple_declare(base_type_89,(_Bool)0,info)));
                    type2_94=(struct sType* )come_increment_ref_count(multiple_assign_var19->v1);
                    name2_95=(char* )come_increment_ref_count(multiple_assign_var19->v2);
                    come_call_finalizer(tuple2$2sType$phchar$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    list$1tuple2$2char$phsType$ph$ph_push_back(((struct list$1tuple2$2char$phsType$ph$ph*)come_null_checker(((struct sClass* )come_null_checker(struct_class_71, "19struct.nc", 995))->mFields, "19struct.nc", 995)),(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph*)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "19struct.nc", 995, "struct tuple2$2char$phsType$ph")),(char* )come_increment_ref_count(name2_95),(struct sType* )come_increment_ref_count(type2_94))));
                    come_call_finalizer(sType_finalize, type2_94, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    (name2_95 = come_decrement_ref_count(name2_95, (void*)0, (void*)0, 0, 0, (void*)0));
                }
                expected_next_character(59,info);
                come_call_finalizer(sType_finalize, base_type_89, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (name_90 = come_decrement_ref_count(name_90, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(sType_finalize, type2_92, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (name2_93 = come_decrement_ref_count(name2_93, (void*)0, (void*)0, 0, 0, (void*)0));
            }
            else {
                multiple_assign_var20=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
                type2_96=(struct sType* )come_increment_ref_count(multiple_assign_var20->v1);
                name_97=(char* )come_increment_ref_count(multiple_assign_var20->v2);
                err_98=multiple_assign_var20->v3;
                come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                if(!err_98) {
                    printf("%s %d: parse_type failed\n",((struct sInfo* )come_null_checker(info, "19struct.nc", 1002))->sname,((struct sInfo* )come_null_checker(info, "19struct.nc", 1002))->sline);
                    exit(2);
                }
                list$1tuple2$2char$phsType$ph$ph_push_back(((struct list$1tuple2$2char$phsType$ph$ph*)come_null_checker(((struct sClass* )come_null_checker(struct_class_71, "19struct.nc", 1006))->mFields, "19struct.nc", 1006)),(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph*)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "19struct.nc", 1006, "struct tuple2$2char$phsType$ph")),(char* )come_increment_ref_count(name_97),(struct sType* )come_increment_ref_count(type2_96))));
                if(*((struct sInfo* )come_null_checker(info, "19struct.nc", 1008))->p==59) {
                    ((struct sInfo* )come_null_checker(info, "19struct.nc", 1009))->p++;
                    skip_spaces_and_lf(info);
                }
                come_call_finalizer(sType_finalize, type2_96, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (name_97 = come_decrement_ref_count(name_97, (void*)0, (void*)0, 0, 0, (void*)0));
            }
            skip_spaces_and_lf(info);
            if(*((struct sInfo* )come_null_checker(info, "19struct.nc", 1017))->p==125) {
                ((struct sInfo* )come_null_checker(info, "19struct.nc", 1018))->p++;
                skip_spaces_and_lf(info);
                break;
            }
            skip_spaces_and_lf(info);
        }
        list$1char$ph_reset(((struct list$1char$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "19struct.nc", 1025))->generics_type_names, "19struct.nc", 1025)));
        ((struct sInfo* )come_null_checker(info, "19struct.nc", 1027))->defining_class=defining_class;
        ((struct sInfo* )come_null_checker(info, "19struct.nc", 1029))->parse_struct_recursive_count--;
        _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 1030, "struct sNode");
        _inf_obj_value7=(struct sClassNode*)come_increment_ref_count(((struct sClassNode*)(__right_value2=sClassNode_initialize((struct sClassNode* )come_increment_ref_count(((struct sClassNode* )come_null_checker(((struct sClassNode* )(__right_value0=(struct sClassNode *)come_calloc(1, sizeof(struct sClassNode )*(1), (void*)0, 1030, "struct sClassNode* "))), "19struct.nc", 1030))),(char* )come_increment_ref_count(__builtin_string(type_name_66)),(struct sClass* )come_increment_ref_count(struct_class_71),(struct list$1sNode$ph*)come_increment_ref_count(methods),info))));
        _inf_value7->_protocol_obj=_inf_obj_value7;
        _inf_value7->finalize=(void*)sClassNode_finalize;
        _inf_value7->clone=(void*)sClassNode_clone;
        _inf_value7->compile=(void*)sClassNode_compile;
        _inf_value7->sline=(void*)sNodeBase_sline;
        _inf_value7->sline_real=(void*)sNodeBase_sline_real;
        _inf_value7->sname=(void*)sNodeBase_sname;
        _inf_value7->terminated=(void*)sClassNode_terminated;
        _inf_value7->kind=(void*)sClassNode_kind;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value3=_inf_value7)));
        (type_name_66 = come_decrement_ref_count(type_name_66, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(list$1sClass$p$p_finalize, parent_classes, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sClass_finalize, struct_class_71, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1sNode$ph$p_finalize, methods, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sClassNode_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer(sClassNode_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        ((__right_value3) ? __right_value3 = come_decrement_ref_count(__right_value3, ((struct sNode*)__right_value3)->finalize, ((struct sNode*)__right_value3)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__0;
        (type_name_66 = come_decrement_ref_count(type_name_66, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(list$1sClass$p$p_finalize, parent_classes, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sClass_finalize, struct_class_71, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1sNode$ph$p_finalize, methods, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=top_level_v97(buf,head,head_sline,info))));
    ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    return __result_obj__0;
}

static struct sStructNobodyNode* sStructNobodyNode_clone(struct sStructNobodyNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sStructNobodyNode_clone"; neo_current_frame = &fr;
    struct sStructNobodyNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sStructNobodyNode*  result  ;
    char*  __dec_obj79  ;
    char*  __dec_obj80  ;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sStructNobodyNode* )come_increment_ref_count((struct sStructNobodyNode *)come_calloc(1, sizeof(struct sStructNobodyNode )*(1), (void*)0, 5, "struct sStructNobodyNode* "));
    if(self!=((void*)0)) {
        ((struct sStructNobodyNode* )come_null_checker(result, "sStructNobodyNode_clone", 6))->sline=((struct sStructNobodyNode*)come_null_checker(self, "sStructNobodyNode_clone", 6))->sline;
    }
    if(self!=((void*)0)&&((struct sStructNobodyNode*)come_null_checker(self, "sStructNobodyNode_clone", 7))->sname!=((void*)0)) {
        __dec_obj79=((struct sStructNobodyNode* )come_null_checker(result, "sStructNobodyNode_clone", 7))->sname,
        ((struct sStructNobodyNode* )come_null_checker(result, "sStructNobodyNode_clone", 7))->sname=(char* )come_increment_ref_count((char* )come_memdup(((struct sStructNobodyNode*)come_null_checker(self, "sStructNobodyNode_clone", 7))->sname, "sStructNobodyNode_clone", 7, "char* "));
        __dec_obj79 = come_decrement_ref_count(__dec_obj79, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        ((struct sStructNobodyNode* )come_null_checker(result, "sStructNobodyNode_clone", 8))->sline_real=((struct sStructNobodyNode*)come_null_checker(self, "sStructNobodyNode_clone", 8))->sline_real;
    }
    if(self!=((void*)0)&&((struct sStructNobodyNode*)come_null_checker(self, "sStructNobodyNode_clone", 9))->mName!=((void*)0)) {
        __dec_obj80=((struct sStructNobodyNode* )come_null_checker(result, "sStructNobodyNode_clone", 9))->mName,
        ((struct sStructNobodyNode* )come_null_checker(result, "sStructNobodyNode_clone", 9))->mName=(char* )come_increment_ref_count((char* )come_memdup(((struct sStructNobodyNode*)come_null_checker(self, "sStructNobodyNode_clone", 9))->mName, "sStructNobodyNode_clone", 9, "char* "));
        __dec_obj80 = come_decrement_ref_count(__dec_obj80, (void*)0, (void*)0, 0,0, (void*)0);
    }
    __result_obj__0 = result;
    come_call_finalizer(sStructNobodyNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct list$1sClass$p* list$1sClass$p_initialize(struct list$1sClass$p* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sClass$p_initialize"; neo_current_frame = &fr;
    struct list$1sClass$p* __result_obj__0;
    ((struct list$1sClass$p*)come_null_checker(self, "/usr/local/include/neo-c.h", 985))->head=((void*)0);
    ((struct list$1sClass$p*)come_null_checker(self, "/usr/local/include/neo-c.h", 986))->tail=((void*)0);
    ((struct list$1sClass$p*)come_null_checker(self, "/usr/local/include/neo-c.h", 987))->len=0;
    __result_obj__0 = (struct list$1sClass$p*)come_increment_ref_count(self);
    come_call_finalizer(list$1sClass$p$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sClass$p$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static void list$1sClass$p$p_finalize(struct list$1sClass$p* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sClass$p$p_finalize"; neo_current_frame = &fr;
    struct list_item$1sClass$p* it;
    struct list_item$1sClass$p* prev_it;
    if(self==((void*)0)) {
        neo_current_frame = fr.prev;
        return;
    }
    it=((struct list$1sClass$p*)come_null_checker(self, "/usr/local/include/neo-c.h", 1006))->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=((struct list_item$1sClass$p*)come_null_checker(it, "/usr/local/include/neo-c.h", 1009))->next;
        come_call_finalizer(list_item$1sClass$p$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

static void list_item$1sClass$p$p_finalize(struct list_item$1sClass$p* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1sClass$p$p_finalize"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
}

static struct list$1sClass$p* list$1sClass$p_add(struct list$1sClass$p* self, struct sClass*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sClass$p_add"; neo_current_frame = &fr;
    struct list$1sClass$p* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1sClass$p* litem;
    struct list_item$1sClass$p* litem_69;
    struct list_item$1sClass$p* litem_70;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(((struct list$1sClass$p*)come_null_checker(self, "/usr/local/include/neo-c.h", 1037))->len==0) {
        litem=(struct list_item$1sClass$p*)come_increment_ref_count(((struct list_item$1sClass$p*)(__right_value0=(struct list_item$1sClass$p*)come_calloc(1, sizeof(struct list_item$1sClass$p)*(1), (void*)0, 1038, "struct list_item$1sClass$p*"))));
        ((struct list_item$1sClass$p*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1040))->prev=((void*)0);
        ((struct list_item$1sClass$p*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1041))->next=((void*)0);
        ((struct list_item$1sClass$p*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1042))->item=item;
        ((struct list$1sClass$p*)come_null_checker(self, "/usr/local/include/neo-c.h", 1044))->tail=litem;
        ((struct list$1sClass$p*)come_null_checker(self, "/usr/local/include/neo-c.h", 1045))->head=litem;
    }
    else if(((struct list$1sClass$p*)come_null_checker(self, "/usr/local/include/neo-c.h", 1047))->len==1) {
        litem_69=(struct list_item$1sClass$p*)come_increment_ref_count(((struct list_item$1sClass$p*)(__right_value0=(struct list_item$1sClass$p*)come_calloc(1, sizeof(struct list_item$1sClass$p)*(1), (void*)0, 1048, "struct list_item$1sClass$p*"))));
        ((struct list_item$1sClass$p*)come_null_checker(litem_69, "/usr/local/include/neo-c.h", 1050))->prev=((struct list$1sClass$p*)come_null_checker(self, "/usr/local/include/neo-c.h", 1050))->head;
        ((struct list_item$1sClass$p*)come_null_checker(litem_69, "/usr/local/include/neo-c.h", 1051))->next=((void*)0);
        ((struct list_item$1sClass$p*)come_null_checker(litem_69, "/usr/local/include/neo-c.h", 1052))->item=item;
        ((struct list$1sClass$p*)come_null_checker(self, "/usr/local/include/neo-c.h", 1054))->tail=litem_69;
        ((struct list_item$1sClass$p*)come_null_checker(((struct list$1sClass$p*)come_null_checker(self, "/usr/local/include/neo-c.h", 1055))->head, "/usr/local/include/neo-c.h", 1055))->next=litem_69;
    }
    else {
        litem_70=(struct list_item$1sClass$p*)come_increment_ref_count(((struct list_item$1sClass$p*)(__right_value0=(struct list_item$1sClass$p*)come_calloc(1, sizeof(struct list_item$1sClass$p)*(1), (void*)0, 1058, "struct list_item$1sClass$p*"))));
        ((struct list_item$1sClass$p*)come_null_checker(litem_70, "/usr/local/include/neo-c.h", 1060))->prev=((struct list$1sClass$p*)come_null_checker(self, "/usr/local/include/neo-c.h", 1060))->tail;
        ((struct list_item$1sClass$p*)come_null_checker(litem_70, "/usr/local/include/neo-c.h", 1061))->next=((void*)0);
        ((struct list_item$1sClass$p*)come_null_checker(litem_70, "/usr/local/include/neo-c.h", 1062))->item=item;
        ((struct list_item$1sClass$p*)come_null_checker(((struct list$1sClass$p*)come_null_checker(self, "/usr/local/include/neo-c.h", 1064))->tail, "/usr/local/include/neo-c.h", 1064))->next=litem_70;
        ((struct list$1sClass$p*)come_null_checker(self, "/usr/local/include/neo-c.h", 1065))->tail=litem_70;
    }
    ((struct list$1sClass$p*)come_null_checker(self, "/usr/local/include/neo-c.h", 1068))->len++;
    __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct list$1sClass$p* list$1sClass$p_reverse(struct list$1sClass$p* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sClass$p_reverse"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1sClass$p* result;
    struct list$1sClass$p* __result_obj__0;
    struct list_item$1sClass$p* it;
    result=(struct list$1sClass$p*)come_increment_ref_count(list$1sClass$p_initialize((struct list$1sClass$p*)come_increment_ref_count(((struct list$1sClass$p*)come_null_checker(((struct list$1sClass$p*)(__right_value0=(struct list$1sClass$p*)come_calloc(1, sizeof(struct list$1sClass$p)*(1), (void*)0, 1000, "struct list$1sClass$p*"))), "/usr/local/include/neo-c.h", 1000)))));
    come_call_finalizer(list$1sClass$p$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    if(self==((void*)0)) {
        __result_obj__0 = (struct list$1sClass$p*)come_increment_ref_count(result);
        come_call_finalizer(list$1sClass$p$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1sClass$p$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    it=((struct list$1sClass$p*)come_null_checker(self, "/usr/local/include/neo-c.h", 1006))->tail;
    while(it!=((void*)0)) {
        list$1sClass$p_push_back(((struct list$1sClass$p*)come_null_checker(result, "/usr/local/include/neo-c.h", 1008)),((struct list_item$1sClass$p*)come_null_checker(it, "/usr/local/include/neo-c.h", 1008))->item);
        it=((struct list_item$1sClass$p*)come_null_checker(it, "/usr/local/include/neo-c.h", 1009))->prev;
    }
    __result_obj__0 = (struct list$1sClass$p*)come_increment_ref_count(result);
    come_call_finalizer(list$1sClass$p$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sClass$p$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct list$1sClass$p* list$1sClass$p_push_back(struct list$1sClass$p* self, struct sClass*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sClass$p_push_back"; neo_current_frame = &fr;
    struct list$1sClass$p* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1sClass$p* litem;
    struct list_item$1sClass$p* litem_72;
    struct list_item$1sClass$p* litem_73;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(((struct list$1sClass$p*)come_null_checker(self, "/usr/local/include/neo-c.h", 1122))->len==0) {
        litem=(struct list_item$1sClass$p*)come_increment_ref_count(((struct list_item$1sClass$p*)(__right_value0=(struct list_item$1sClass$p*)come_calloc(1, sizeof(struct list_item$1sClass$p)*(1), (void*)0, 1123, "struct list_item$1sClass$p*"))));
        ((struct list_item$1sClass$p*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1125))->prev=((void*)0);
        ((struct list_item$1sClass$p*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1126))->next=((void*)0);
        ((struct list_item$1sClass$p*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1127))->item=item;
        ((struct list$1sClass$p*)come_null_checker(self, "/usr/local/include/neo-c.h", 1129))->tail=litem;
        ((struct list$1sClass$p*)come_null_checker(self, "/usr/local/include/neo-c.h", 1130))->head=litem;
    }
    else if(((struct list$1sClass$p*)come_null_checker(self, "/usr/local/include/neo-c.h", 1132))->len==1) {
        litem_72=(struct list_item$1sClass$p*)come_increment_ref_count(((struct list_item$1sClass$p*)(__right_value0=(struct list_item$1sClass$p*)come_calloc(1, sizeof(struct list_item$1sClass$p)*(1), (void*)0, 1133, "struct list_item$1sClass$p*"))));
        ((struct list_item$1sClass$p*)come_null_checker(litem_72, "/usr/local/include/neo-c.h", 1135))->prev=((struct list$1sClass$p*)come_null_checker(self, "/usr/local/include/neo-c.h", 1135))->head;
        ((struct list_item$1sClass$p*)come_null_checker(litem_72, "/usr/local/include/neo-c.h", 1136))->next=((void*)0);
        ((struct list_item$1sClass$p*)come_null_checker(litem_72, "/usr/local/include/neo-c.h", 1137))->item=item;
        ((struct list$1sClass$p*)come_null_checker(self, "/usr/local/include/neo-c.h", 1139))->tail=litem_72;
        ((struct list_item$1sClass$p*)come_null_checker(((struct list$1sClass$p*)come_null_checker(self, "/usr/local/include/neo-c.h", 1140))->head, "/usr/local/include/neo-c.h", 1140))->next=litem_72;
    }
    else {
        litem_73=(struct list_item$1sClass$p*)come_increment_ref_count(((struct list_item$1sClass$p*)(__right_value0=(struct list_item$1sClass$p*)come_calloc(1, sizeof(struct list_item$1sClass$p)*(1), (void*)0, 1143, "struct list_item$1sClass$p*"))));
        ((struct list_item$1sClass$p*)come_null_checker(litem_73, "/usr/local/include/neo-c.h", 1145))->prev=((struct list$1sClass$p*)come_null_checker(self, "/usr/local/include/neo-c.h", 1145))->tail;
        ((struct list_item$1sClass$p*)come_null_checker(litem_73, "/usr/local/include/neo-c.h", 1146))->next=((void*)0);
        ((struct list_item$1sClass$p*)come_null_checker(litem_73, "/usr/local/include/neo-c.h", 1147))->item=item;
        ((struct list_item$1sClass$p*)come_null_checker(((struct list$1sClass$p*)come_null_checker(self, "/usr/local/include/neo-c.h", 1149))->tail, "/usr/local/include/neo-c.h", 1149))->next=litem_73;
        ((struct list$1sClass$p*)come_null_checker(self, "/usr/local/include/neo-c.h", 1150))->tail=litem_73;
    }
    ((struct list$1sClass$p*)come_null_checker(self, "/usr/local/include/neo-c.h", 1153))->len++;
    __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sClass*  list$1sClass$p_begin(struct list$1sClass$p* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sClass$p_begin"; neo_current_frame = &fr;
    struct sClass*  result  ;
    struct sClass*  __result_obj__0  ;
    struct sClass*  result_74  ;
    if(self==((void*)0)) {
        memset(&result,0,sizeof(struct sClass* ));
        __result_obj__0 = result;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    ((struct list$1sClass$p*)come_null_checker(self, "/usr/local/include/neo-c.h", 1193))->it=((struct list$1sClass$p*)come_null_checker(self, "/usr/local/include/neo-c.h", 1193))->head;
    if(((struct list$1sClass$p*)come_null_checker(self, "/usr/local/include/neo-c.h", 1195))->it) {
        __result_obj__0 = ((struct list_item$1sClass$p*)come_null_checker(((struct list$1sClass$p*)come_null_checker(self, "/usr/local/include/neo-c.h", 1196))->it, "/usr/local/include/neo-c.h", 1196))->item;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    memset(&result_74,0,sizeof(struct sClass* ));
    __result_obj__0 = result_74;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static _Bool list$1sClass$p_end(struct list$1sClass$p* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sClass$p_end"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return self==((void*)0)||((struct list$1sClass$p*)come_null_checker(self, "/usr/local/include/neo-c.h", 1225))->it==((void*)0);
    neo_current_frame = fr.prev;
}

static struct sClass*  list$1sClass$p_next(struct list$1sClass$p* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sClass$p_next"; neo_current_frame = &fr;
    struct sClass*  result  ;
    struct sClass*  __result_obj__0  ;
    struct sClass*  result_75  ;
    if(self==((void*)0)||((struct list$1sClass$p*)come_null_checker(self, "/usr/local/include/neo-c.h", 1207))->it==((void*)0)) {
        memset(&result,0,sizeof(struct sClass* ));
        __result_obj__0 = result;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    ((struct list$1sClass$p*)come_null_checker(self, "/usr/local/include/neo-c.h", 1213))->it=((struct list_item$1sClass$p*)come_null_checker(((struct list$1sClass$p*)come_null_checker(self, "/usr/local/include/neo-c.h", 1213))->it, "/usr/local/include/neo-c.h", 1213))->next;
    if(((struct list$1sClass$p*)come_null_checker(self, "/usr/local/include/neo-c.h", 1215))->it) {
        __result_obj__0 = ((struct list_item$1sClass$p*)come_null_checker(((struct list$1sClass$p*)come_null_checker(self, "/usr/local/include/neo-c.h", 1216))->it, "/usr/local/include/neo-c.h", 1216))->item;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    memset(&result_75,0,sizeof(struct sClass* ));
    __result_obj__0 = result_75;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct list$1sNode$ph* list$1sNode$ph_push_back(struct list$1sNode$ph* self, struct sNode* item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_push_back"; neo_current_frame = &fr;
    struct list$1sNode$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1sNode$ph* litem;
    struct sNode* __dec_obj95;
    struct list_item$1sNode$ph* litem_87;
    struct sNode* __dec_obj96;
    struct list_item$1sNode$ph* litem_88;
    struct sNode* __dec_obj97;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1122))->len==0) {
        litem=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), (void*)0, 1123, "struct list_item$1sNode$ph*"))));
        ((struct list_item$1sNode$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1125))->prev=((void*)0);
        ((struct list_item$1sNode$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1126))->next=((void*)0);
        __dec_obj95=((struct list_item$1sNode$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1127))->item,
        ((struct list_item$1sNode$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1127))->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj95 ? __dec_obj95 = come_decrement_ref_count(__dec_obj95, ((struct sNode*)__dec_obj95)->finalize, ((struct sNode*)__dec_obj95)->_protocol_obj, 0,0, (void*)0) :0);
        ((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1129))->tail=litem;
        ((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1130))->head=litem;
    }
    else if(((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1132))->len==1) {
        litem_87=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), (void*)0, 1133, "struct list_item$1sNode$ph*"))));
        ((struct list_item$1sNode$ph*)come_null_checker(litem_87, "/usr/local/include/neo-c.h", 1135))->prev=((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1135))->head;
        ((struct list_item$1sNode$ph*)come_null_checker(litem_87, "/usr/local/include/neo-c.h", 1136))->next=((void*)0);
        __dec_obj96=((struct list_item$1sNode$ph*)come_null_checker(litem_87, "/usr/local/include/neo-c.h", 1137))->item,
        ((struct list_item$1sNode$ph*)come_null_checker(litem_87, "/usr/local/include/neo-c.h", 1137))->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj96 ? __dec_obj96 = come_decrement_ref_count(__dec_obj96, ((struct sNode*)__dec_obj96)->finalize, ((struct sNode*)__dec_obj96)->_protocol_obj, 0,0, (void*)0) :0);
        ((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1139))->tail=litem_87;
        ((struct list_item$1sNode$ph*)come_null_checker(((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1140))->head, "/usr/local/include/neo-c.h", 1140))->next=litem_87;
    }
    else {
        litem_88=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), (void*)0, 1143, "struct list_item$1sNode$ph*"))));
        ((struct list_item$1sNode$ph*)come_null_checker(litem_88, "/usr/local/include/neo-c.h", 1145))->prev=((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1145))->tail;
        ((struct list_item$1sNode$ph*)come_null_checker(litem_88, "/usr/local/include/neo-c.h", 1146))->next=((void*)0);
        __dec_obj97=((struct list_item$1sNode$ph*)come_null_checker(litem_88, "/usr/local/include/neo-c.h", 1147))->item,
        ((struct list_item$1sNode$ph*)come_null_checker(litem_88, "/usr/local/include/neo-c.h", 1147))->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj97 ? __dec_obj97 = come_decrement_ref_count(__dec_obj97, ((struct sNode*)__dec_obj97)->finalize, ((struct sNode*)__dec_obj97)->_protocol_obj, 0,0, (void*)0) :0);
        ((struct list_item$1sNode$ph*)come_null_checker(((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1149))->tail, "/usr/local/include/neo-c.h", 1149))->next=litem_88;
        ((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1150))->tail=litem_88;
    }
    ((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1153))->len++;
    __result_obj__0 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sClassNode* sClassNode_clone(struct sClassNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sClassNode_clone"; neo_current_frame = &fr;
    struct sClassNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sClassNode*  result  ;
    char*  __dec_obj98  ;
    char*  __dec_obj99  ;
    struct sClass*  __dec_obj100  ;
    struct list$1sNode$ph* __dec_obj101;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sClassNode* )come_increment_ref_count((struct sClassNode *)come_calloc(1, sizeof(struct sClassNode )*(1), (void*)0, 5, "struct sClassNode* "));
    if(self!=((void*)0)) {
        ((struct sClassNode* )come_null_checker(result, "sClassNode_clone", 6))->sline=((struct sClassNode*)come_null_checker(self, "sClassNode_clone", 6))->sline;
    }
    if(self!=((void*)0)&&((struct sClassNode*)come_null_checker(self, "sClassNode_clone", 7))->sname!=((void*)0)) {
        __dec_obj98=((struct sClassNode* )come_null_checker(result, "sClassNode_clone", 7))->sname,
        ((struct sClassNode* )come_null_checker(result, "sClassNode_clone", 7))->sname=(char* )come_increment_ref_count((char* )come_memdup(((struct sClassNode*)come_null_checker(self, "sClassNode_clone", 7))->sname, "sClassNode_clone", 7, "char* "));
        __dec_obj98 = come_decrement_ref_count(__dec_obj98, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        ((struct sClassNode* )come_null_checker(result, "sClassNode_clone", 8))->sline_real=((struct sClassNode*)come_null_checker(self, "sClassNode_clone", 8))->sline_real;
    }
    if(self!=((void*)0)&&((struct sClassNode*)come_null_checker(self, "sClassNode_clone", 9))->mName!=((void*)0)) {
        __dec_obj99=((struct sClassNode* )come_null_checker(result, "sClassNode_clone", 9))->mName,
        ((struct sClassNode* )come_null_checker(result, "sClassNode_clone", 9))->mName=(char* )come_increment_ref_count((char* )come_memdup(((struct sClassNode*)come_null_checker(self, "sClassNode_clone", 9))->mName, "sClassNode_clone", 9, "char* "));
        __dec_obj99 = come_decrement_ref_count(__dec_obj99, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sClassNode*)come_null_checker(self, "sClassNode_clone", 10))->mClass!=((void*)0)) {
        __dec_obj100=((struct sClassNode* )come_null_checker(result, "sClassNode_clone", 10))->mClass,
        ((struct sClassNode* )come_null_checker(result, "sClassNode_clone", 10))->mClass=(struct sClass* )come_increment_ref_count(sClass_clone(((struct sClassNode*)come_null_checker(self, "sClassNode_clone", 10))->mClass));
        come_call_finalizer(sClass_finalize, __dec_obj100,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sClassNode*)come_null_checker(self, "sClassNode_clone", 11))->mMethods!=((void*)0)) {
        __dec_obj101=((struct sClassNode* )come_null_checker(result, "sClassNode_clone", 11))->mMethods,
        ((struct sClassNode* )come_null_checker(result, "sClassNode_clone", 11))->mMethods=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(((struct sClassNode*)come_null_checker(self, "sClassNode_clone", 11))->mMethods));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj101,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result_obj__0 = result;
    come_call_finalizer(sClassNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sNode* string_node_v14(char* buf, char* head, int head_sline, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "string_node_v14"; neo_current_frame = &fr;
    _Bool define_struct;
    char* p;
    int sline;
    _Bool no_output_come_code;
    void* __right_value0 = (void*)0;
    char*  type_name  ;
    char*  struct_attribute  ;
    char*  type_name_99  ;
    struct sNode* __result_obj__0;
    define_struct=(_Bool)0;
    {
        p=((struct sInfo* )come_null_checker(info, "19struct.nc", 1041))->p;
        sline=((struct sInfo* )come_null_checker(info, "19struct.nc", 1042))->sline;
        no_output_come_code=((struct sInfo* )come_null_checker(info, "19struct.nc", 1043))->no_output_come_code;
        ((struct sInfo* )come_null_checker(info, "19struct.nc", 1044))->no_output_come_code=(_Bool)1;
        if(charp_operator_equals(((char*)come_null_checker(buf, "19struct.nc", 1046)),"struct")) {
            if(xisalpha(*((struct sInfo* )come_null_checker(info, "19struct.nc", 1047))->p)||*((struct sInfo* )come_null_checker(info, "19struct.nc", 1047))->p==95) {
                type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info));
                (void)((char* )(__right_value0=parse_struct_attribute(info,(_Bool)1)));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                if(parsecmp("extends",info)) {
                    ((char* )(__right_value0=parse_word((_Bool)0,info)));
                    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                    ((char* )(__right_value0=parse_word((_Bool)0,info)));
                    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                }
                (void)((char* )(__right_value0=parse_struct_attribute(info,(_Bool)1)));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                if(*((struct sInfo* )come_null_checker(info, "19struct.nc", 1059))->p==123) {
                    ((char* )(__right_value0=skip_block(info,(_Bool)0)));
                    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                    if(*((struct sInfo* )come_null_checker(info, "19struct.nc", 1062))->p==59) {
                        define_struct=(_Bool)1;
                    }
                }
                (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
            }
        }
        ((struct sInfo* )come_null_checker(info, "19struct.nc", 1069))->no_output_come_code=no_output_come_code;
        ((struct sInfo* )come_null_checker(info, "19struct.nc", 1070))->p=p;
        ((struct sInfo* )come_null_checker(info, "19struct.nc", 1071))->sline=sline;
    }
    if(define_struct) {
        struct_attribute=(char* )come_increment_ref_count(parse_struct_attribute(info,(_Bool)1));
        type_name_99=(char* )come_increment_ref_count(parse_word((_Bool)0,info));
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=parse_struct((char* )come_increment_ref_count(type_name_99),(char* )come_increment_ref_count(struct_attribute),info,(_Bool)0))));
        (struct_attribute = come_decrement_ref_count(struct_attribute, (void*)0, (void*)0, 0, 0, (void*)0));
        (type_name_99 = come_decrement_ref_count(type_name_99, (void*)0, (void*)0, 0, 0, (void*)0));
        ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__0;
        (struct_attribute = come_decrement_ref_count(struct_attribute, (void*)0, (void*)0, 0, 0, (void*)0));
        (type_name_99 = come_decrement_ref_count(type_name_99, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=string_node_v13(buf,head,head_sline,info))));
    ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    return __result_obj__0;
}

